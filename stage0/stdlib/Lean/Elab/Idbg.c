// Lean compiler output
// Module: Lean.Elab.Idbg
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Std.Async.TCP
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_realpath(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_exprToSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_mainModule(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_inServer;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Std_Async_AsyncTask_block___redArg(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_uv_tcp_send(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_task_pure(lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_uint32_to_uint8(uint32_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lean_uv_tcp_recv(lean_object*, uint64_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_uv_tcp_shutdown(lean_object*);
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_mod(uint64_t, uint64_t);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint16_t lean_uint64_to_uint16(uint64_t);
lean_object* l_Std_Net_IPv4Addr_ofParts(uint8_t, uint8_t, uint8_t, uint8_t);
lean_object* l_List_range(lean_object*);
lean_object* l_IO_sleep(uint32_t);
lean_object* lean_uv_tcp_new();
lean_object* lean_uv_tcp_bind(lean_object*, lean_object*);
lean_object* lean_uv_tcp_listen(lean_object*, uint32_t);
lean_object* lean_uv_tcp_accept(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_IO_CancelToken_new();
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Core_wrapAsyncAsSnapshot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_Lean_Language_SnapshotTask_defaultReportingRange(lean_object*);
lean_object* l_Lean_Core_logSnapshotTask___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_setNondep(lean_object*, uint8_t);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_ensureUnitAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_stderr();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_Elab_Do_controlInfoElemAttribute;
extern lean_object* l_Lean_Elab_Do_instInhabitedControlInfo_default;
uint8_t l_Lean_Json_isNull(lean_object*);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_importModules(lean_object*, lean_object*, uint32_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*);
lean_object* lean_array_pop(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_firstFrontendMacroScope;
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_KVMap_instValueNat;
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lit___override(lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Level_mvar___override(lean_object*);
lean_object* l_Lean_Level_param___override(lean_object*);
lean_object* l_Lean_Level_imax___override(lean_object*, lean_object*);
lean_object* l_Lean_Level_max___override(lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* lean_uv_tcp_connect(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected Name, got "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "num expects 2 elements"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "str expects 2 elements"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "implicit"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "strictImplicit"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instImplicit"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__6_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "expected BinderInfo, got "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natVal"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strVal"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "expected Literal, got "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "imax"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "param"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mvar"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected Level, got "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "imax expects 2 elements"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "max expects 2 elements"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__3_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bvar"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fvar"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "levels"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lam"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bi"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "forallE"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__11 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "letE"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__12 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nondep"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__14 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lit"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__15 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__15_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__16 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__16_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__17 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__17_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__18 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "struct"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__19 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__19_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected Expr, got "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "app expects 2 elements"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(lean_object*);
LEAN_EXPORT uint16_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "the promise linked to the Async was dropped"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value;
static const lean_closure_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value)} };
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__0;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "idbg: connection closed"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__1_value)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__2_value;
static const lean_closure_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value)} };
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "idbg: invalid header"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "idbg: invalid UTF-8"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "idbg: invalid length"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2;
static const lean_closure_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__2___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value)} };
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_idbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 143, 231, 50, 41, 181, 42, 64)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "<idbg>"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__8 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__9 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__10;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17;
static const lean_array_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__18 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__18_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "idbg evalConst failed: "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__21 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__22 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__23 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__24 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__24_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "idbg client: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "connection refused"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__5;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__7 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__7_value;
static const lean_closure_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__1_value)} };
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__8 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__8_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_idbg_client_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doIdbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 152, 121, 224, 0, 70, 155, 32)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__6_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__7_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Idbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__9_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(222, 127, 37, 145, 246, 253, 221, 130)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(167, 188, 96, 25, 36, 32, 177, 172)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(154, 85, 246, 154, 57, 30, 227, 186)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__13_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 120, 240, 118, 26, 169, 87, 68)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__14_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__15 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__14_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(72, 181, 66, 123, 98, 246, 242, 167)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "controlInfoIdbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__17 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(38, 98, 163, 235, 228, 39, 161, 40)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__18 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "idbg: "};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Import"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 47, 116, 218, 39, 28, 172, 37)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__5_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 47, 116, 218, 39, 28, 172, 37)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(233, 207, 36, 16, 41, 121, 79, 89)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__2 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__3 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__3_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__6 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__1_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__6_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "term_>>=_"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__10 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 92, 54, 199, 40, 32, 117, 253)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__11 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Idbg.idbgClientLoop"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__13 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__13_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "idbgClientLoop"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__15 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(216, 3, 140, 103, 23, 193, 97, 10)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__15_value),LEAN_SCALAR_PTR_LITERAL(114, 35, 176, 243, 23, 158, 209, 172)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__17 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__18 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__18_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__19 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__19_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__20 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__20_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ">>="};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__21 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__22 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__22_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__22_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__24 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__24_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__24_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__26 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__26_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__26_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__28 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__28_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__30 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__30_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabIdbgCore"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__31 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__31_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "idbg: abstracted type still has metavariables"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__32 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__32_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "idbg: abstracted value still has metavariables"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__34 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__34_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35;
static const lean_array_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__36 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__36_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "repr"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__37 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__37_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__37_value),LEAN_SCALAR_PTR_LITERAL(248, 109, 138, 163, 21, 170, 71, 243)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__38 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__38_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ToString"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__39 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__39_value;
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toString"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__40 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__40_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__39_value),LEAN_SCALAR_PTR_LITERAL(30, 202, 174, 203, 16, 186, 159, 168)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__40_value),LEAN_SCALAR_PTR_LITERAL(206, 210, 39, 124, 69, 192, 37, 107)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "idbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(158, 127, 98, 129, 230, 27, 154, 50)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabIdbgTerm"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 12, 184, 32, 84, 90, 234, 209)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "idbg body"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elabDoIdbg"};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__16_value),((lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 80, 1, 78, 180, 59, 65, 71)}};
static const lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(lean_object* v_x_3_){
_start:
{
switch(lean_obj_tag(v_x_3_))
{
case 0:
{
lean_object* v___x_4_; 
v___x_4_ = lean_box(0);
return v___x_4_;
}
case 1:
{
lean_object* v_pre_5_; lean_object* v_str_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v_pre_5_ = lean_ctor_get(v_x_3_, 0);
lean_inc(v_pre_5_);
v_str_6_ = lean_ctor_get(v_x_3_, 1);
lean_inc_ref(v_str_6_);
lean_dec_ref_known(v_x_3_, 2);
v___x_7_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__0));
v___x_8_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_pre_5_);
v___x_9_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_9_, 0, v_str_6_);
v___x_10_ = lean_unsigned_to_nat(2u);
v___x_11_ = lean_mk_empty_array_with_capacity(v___x_10_);
v___x_12_ = lean_array_push(v___x_11_, v___x_8_);
v___x_13_ = lean_array_push(v___x_12_, v___x_9_);
v___x_14_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_7_);
lean_ctor_set(v___x_15_, 1, v___x_14_);
v___x_16_ = lean_box(0);
v___x_17_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_15_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
v___x_18_ = l_Lean_Json_mkObj(v___x_17_);
lean_dec_ref_known(v___x_17_, 2);
return v___x_18_;
}
default: 
{
lean_object* v_pre_19_; lean_object* v_i_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v_pre_19_ = lean_ctor_get(v_x_3_, 0);
lean_inc(v_pre_19_);
v_i_20_ = lean_ctor_get(v_x_3_, 1);
lean_inc(v_i_20_);
lean_dec_ref_known(v_x_3_, 2);
v___x_21_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__1));
v___x_22_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_pre_19_);
v___x_23_ = l_Lean_JsonNumber_fromNat(v_i_20_);
v___x_24_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
v___x_25_ = lean_unsigned_to_nat(2u);
v___x_26_ = lean_mk_empty_array_with_capacity(v___x_25_);
v___x_27_ = lean_array_push(v___x_26_, v___x_22_);
v___x_28_ = lean_array_push(v___x_27_, v___x_24_);
v___x_29_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_21_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
v___x_31_ = lean_box(0);
v___x_32_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_30_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
v___x_33_ = l_Lean_Json_mkObj(v___x_32_);
lean_dec_ref_known(v___x_32_, 2);
return v___x_33_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0(size_t v_sz_34_, size_t v_i_35_, lean_object* v_bs_36_){
_start:
{
uint8_t v___x_37_; 
v___x_37_ = lean_usize_dec_lt(v_i_35_, v_sz_34_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; 
v___x_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_38_, 0, v_bs_36_);
return v___x_38_;
}
else
{
lean_object* v_v_39_; lean_object* v___x_40_; lean_object* v_bs_x27_41_; size_t v___x_42_; size_t v___x_43_; lean_object* v___x_44_; 
v_v_39_ = lean_array_uget(v_bs_36_, v_i_35_);
v___x_40_ = lean_unsigned_to_nat(0u);
v_bs_x27_41_ = lean_array_uset(v_bs_36_, v_i_35_, v___x_40_);
v___x_42_ = ((size_t)1ULL);
v___x_43_ = lean_usize_add(v_i_35_, v___x_42_);
v___x_44_ = lean_array_uset(v_bs_x27_41_, v_i_35_, v_v_39_);
v_i_35_ = v___x_43_;
v_bs_36_ = v___x_44_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0___boxed(lean_object* v_sz_46_, lean_object* v_i_47_, lean_object* v_bs_48_){
_start:
{
size_t v_sz_boxed_49_; size_t v_i_boxed_50_; lean_object* v_res_51_; 
v_sz_boxed_49_ = lean_unbox_usize(v_sz_46_);
lean_dec(v_sz_46_);
v_i_boxed_50_ = lean_unbox_usize(v_i_47_);
lean_dec(v_i_47_);
v_res_51_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0(v_sz_boxed_49_, v_i_boxed_50_, v_bs_48_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(lean_object* v_x_54_){
_start:
{
if (lean_obj_tag(v_x_54_) == 4)
{
lean_object* v_elems_55_; size_t v_sz_56_; size_t v___x_57_; lean_object* v___x_58_; 
v_elems_55_ = lean_ctor_get(v_x_54_, 0);
lean_inc_ref(v_elems_55_);
lean_dec_ref_known(v_x_54_, 1);
v_sz_56_ = lean_array_size(v_elems_55_);
v___x_57_ = ((size_t)0ULL);
v___x_58_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0_spec__0(v_sz_56_, v___x_57_, v_elems_55_);
return v___x_58_;
}
else
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_59_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__0));
v___x_60_ = lean_unsigned_to_nat(80u);
v___x_61_ = l_Lean_Json_pretty(v_x_54_, v___x_60_);
v___x_62_ = lean_string_append(v___x_59_, v___x_61_);
lean_dec_ref(v___x_61_);
v___x_63_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0___closed__1));
v___x_64_ = lean_string_append(v___x_62_, v___x_63_);
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(lean_object* v_j_75_){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = l_Lean_Json_isNull(v_j_75_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__0));
lean_inc(v_j_75_);
v___x_78_ = l_Lean_Json_getObjVal_x3f(v_j_75_, v___x_77_);
if (lean_obj_tag(v___x_78_) == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; 
lean_dec_ref_known(v___x_78_, 1);
v___x_79_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson___closed__1));
lean_inc(v_j_75_);
v___x_80_ = l_Lean_Json_getObjVal_x3f(v_j_75_, v___x_79_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_91_; 
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_91_ == 0)
{
lean_object* v_unused_92_; 
v_unused_92_ = lean_ctor_get(v___x_80_, 0);
lean_dec(v_unused_92_);
v___x_82_ = v___x_80_;
v_isShared_83_ = v_isSharedCheck_91_;
goto v_resetjp_81_;
}
else
{
lean_dec(v___x_80_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_91_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_84_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__0));
v___x_85_ = lean_unsigned_to_nat(80u);
v___x_86_ = l_Lean_Json_pretty(v_j_75_, v___x_85_);
v___x_87_ = lean_string_append(v___x_84_, v___x_86_);
lean_dec_ref(v___x_86_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 0, v___x_87_);
v___x_89_ = v___x_82_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_87_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
else
{
lean_object* v_a_93_; lean_object* v___x_94_; 
lean_dec(v_j_75_);
v_a_93_ = lean_ctor_get(v___x_80_, 0);
lean_inc(v_a_93_);
lean_dec_ref_known(v___x_80_, 1);
v___x_94_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_93_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_94_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_94_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_a_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
else
{
lean_object* v_a_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v_a_103_ = lean_ctor_get(v___x_94_, 0);
lean_inc(v_a_103_);
lean_dec_ref_known(v___x_94_, 1);
v___x_104_ = lean_array_get_size(v_a_103_);
v___x_105_ = lean_unsigned_to_nat(2u);
v___x_106_ = lean_nat_dec_eq(v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
lean_dec(v_a_103_);
v___x_107_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__2));
return v___x_107_;
}
else
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_unsigned_to_nat(0u);
v___x_109_ = lean_array_fget_borrowed(v_a_103_, v___x_108_);
lean_inc(v___x_109_);
v___x_110_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v___x_109_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_dec(v_a_103_);
return v___x_110_;
}
else
{
lean_object* v_a_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_a_111_);
lean_dec_ref_known(v___x_110_, 1);
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_array_fget(v_a_103_, v___x_112_);
lean_dec(v_a_103_);
v___x_114_ = l_Lean_Json_getNat_x3f(v___x_113_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_122_; 
lean_dec(v_a_111_);
v_a_115_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_122_ == 0)
{
v___x_117_ = v___x_114_;
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
else
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_131_; 
v_a_123_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_131_ == 0)
{
v___x_125_ = v___x_114_;
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_114_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_127_ = l_Lean_Name_num___override(v_a_111_, v_a_123_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 0, v___x_127_);
v___x_129_ = v___x_125_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_127_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
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
lean_object* v_a_132_; lean_object* v___x_133_; 
lean_dec(v_j_75_);
v_a_132_ = lean_ctor_get(v___x_78_, 0);
lean_inc(v_a_132_);
lean_dec_ref_known(v___x_78_, 1);
v___x_133_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_132_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_141_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_141_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
if (v_isShared_137_ == 0)
{
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_134_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v_a_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v_a_142_ = lean_ctor_get(v___x_133_, 0);
lean_inc(v_a_142_);
lean_dec_ref_known(v___x_133_, 1);
v___x_143_ = lean_array_get_size(v_a_142_);
v___x_144_ = lean_unsigned_to_nat(2u);
v___x_145_ = lean_nat_dec_eq(v___x_143_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; 
lean_dec(v_a_142_);
v___x_146_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__4));
return v___x_146_;
}
else
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = lean_array_fget_borrowed(v_a_142_, v___x_147_);
lean_inc(v___x_148_);
v___x_149_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v___x_148_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_dec(v_a_142_);
return v___x_149_;
}
else
{
lean_object* v_a_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_150_);
lean_dec_ref_known(v___x_149_, 1);
v___x_151_ = lean_unsigned_to_nat(1u);
v___x_152_ = lean_array_fget(v_a_142_, v___x_151_);
lean_dec(v_a_142_);
v___x_153_ = l_Lean_Json_getStr_x3f(v___x_152_);
if (lean_obj_tag(v___x_153_) == 0)
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
lean_dec(v_a_150_);
v_a_154_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_161_ == 0)
{
v___x_156_ = v___x_153_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_153_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_170_; 
v_a_162_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_170_ == 0)
{
v___x_164_ = v___x_153_;
v_isShared_165_ = v_isSharedCheck_170_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_153_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_170_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_166_ = l_Lean_Name_str___override(v_a_150_, v_a_162_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 0, v___x_166_);
v___x_168_ = v___x_164_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_166_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
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
lean_object* v___x_171_; 
lean_dec(v_j_75_);
v___x_171_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f___closed__5));
return v___x_171_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson(uint8_t v_x_184_){
_start:
{
switch(v_x_184_)
{
case 0:
{
lean_object* v___x_185_; 
v___x_185_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__1));
return v___x_185_;
}
case 1:
{
lean_object* v___x_186_; 
v___x_186_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__3));
return v___x_186_;
}
case 2:
{
lean_object* v___x_187_; 
v___x_187_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__5));
return v___x_187_;
}
default: 
{
lean_object* v___x_188_; 
v___x_188_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__7));
return v___x_188_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___boxed(lean_object* v_x_189_){
_start:
{
uint8_t v_x_64__boxed_190_; lean_object* v_res_191_; 
v_x_64__boxed_190_ = lean_unbox(v_x_189_);
v_res_191_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson(v_x_64__boxed_190_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f(lean_object* v_x_205_){
_start:
{
lean_object* v_j_207_; 
if (lean_obj_tag(v_x_205_) == 3)
{
lean_object* v_s_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v_s_213_ = lean_ctor_get(v_x_205_, 0);
v___x_214_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__0));
v___x_215_ = lean_string_dec_eq(v_s_213_, v___x_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__2));
v___x_217_ = lean_string_dec_eq(v_s_213_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_218_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__4));
v___x_219_ = lean_string_dec_eq(v_s_213_, v___x_218_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_220_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson___closed__6));
v___x_221_ = lean_string_dec_eq(v_s_213_, v___x_220_);
if (v___x_221_ == 0)
{
v_j_207_ = v_x_205_;
goto v___jp_206_;
}
else
{
lean_object* v___x_222_; 
lean_dec_ref_known(v_x_205_, 1);
v___x_222_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__1));
return v___x_222_;
}
}
else
{
lean_object* v___x_223_; 
lean_dec_ref_known(v_x_205_, 1);
v___x_223_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__2));
return v___x_223_;
}
}
else
{
lean_object* v___x_224_; 
lean_dec_ref_known(v_x_205_, 1);
v___x_224_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__3));
return v___x_224_;
}
}
else
{
lean_object* v___x_225_; 
lean_dec_ref_known(v_x_205_, 1);
v___x_225_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__4));
return v___x_225_;
}
}
else
{
v_j_207_ = v_x_205_;
goto v___jp_206_;
}
v___jp_206_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_208_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f___closed__0));
v___x_209_ = lean_unsigned_to_nat(80u);
v___x_210_ = l_Lean_Json_pretty(v_j_207_, v___x_209_);
v___x_211_ = lean_string_append(v___x_208_, v___x_210_);
lean_dec_ref(v___x_210_);
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
return v___x_212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson(lean_object* v_x_228_){
_start:
{
if (lean_obj_tag(v_x_228_) == 0)
{
lean_object* v_val_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_242_; 
v_val_229_ = lean_ctor_get(v_x_228_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v_x_228_);
if (v_isSharedCheck_242_ == 0)
{
v___x_231_ = v_x_228_;
v_isShared_232_ = v_isSharedCheck_242_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_val_229_);
lean_dec(v_x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_242_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_236_; 
v___x_233_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__0));
v___x_234_ = l_Lean_JsonNumber_fromNat(v_val_229_);
if (v_isShared_232_ == 0)
{
lean_ctor_set_tag(v___x_231_, 2);
lean_ctor_set(v___x_231_, 0, v___x_234_);
v___x_236_ = v___x_231_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_234_);
v___x_236_ = v_reuseFailAlloc_241_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_233_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_box(0);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = l_Lean_Json_mkObj(v___x_239_);
lean_dec_ref_known(v___x_239_, 2);
return v___x_240_;
}
}
}
else
{
lean_object* v_val_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_255_; 
v_val_243_ = lean_ctor_get(v_x_228_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v_x_228_);
if (v_isSharedCheck_255_ == 0)
{
v___x_245_ = v_x_228_;
v_isShared_246_ = v_isSharedCheck_255_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_val_243_);
lean_dec(v_x_228_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_255_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_247_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__1));
if (v_isShared_246_ == 0)
{
lean_ctor_set_tag(v___x_245_, 3);
v___x_249_ = v___x_245_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_val_243_);
v___x_249_ = v_reuseFailAlloc_254_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_247_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_box(0);
v___x_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = l_Lean_Json_mkObj(v___x_252_);
lean_dec_ref_known(v___x_252_, 2);
return v___x_253_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f(lean_object* v_j_257_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_258_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__0));
lean_inc(v_j_257_);
v___x_259_ = l_Lean_Json_getObjVal_x3f(v_j_257_, v___x_258_);
if (lean_obj_tag(v___x_259_) == 0)
{
lean_object* v___x_261_; uint8_t v_isShared_262_; uint8_t v_isSharedCheck_298_; 
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_298_ == 0)
{
lean_object* v_unused_299_; 
v_unused_299_ = lean_ctor_get(v___x_259_, 0);
lean_dec(v_unused_299_);
v___x_261_ = v___x_259_;
v_isShared_262_ = v_isSharedCheck_298_;
goto v_resetjp_260_;
}
else
{
lean_dec(v___x_259_);
v___x_261_ = lean_box(0);
v_isShared_262_ = v_isSharedCheck_298_;
goto v_resetjp_260_;
}
v_resetjp_260_:
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson___closed__1));
lean_inc(v_j_257_);
v___x_264_ = l_Lean_Json_getObjVal_x3f(v_j_257_, v___x_263_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_275_; 
lean_del_object(v___x_261_);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_275_ == 0)
{
lean_object* v_unused_276_; 
v_unused_276_ = lean_ctor_get(v___x_264_, 0);
lean_dec(v_unused_276_);
v___x_266_ = v___x_264_;
v_isShared_267_ = v_isSharedCheck_275_;
goto v_resetjp_265_;
}
else
{
lean_dec(v___x_264_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_275_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_273_; 
v___x_268_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f___closed__0));
v___x_269_ = lean_unsigned_to_nat(80u);
v___x_270_ = l_Lean_Json_pretty(v_j_257_, v___x_269_);
v___x_271_ = lean_string_append(v___x_268_, v___x_270_);
lean_dec_ref(v___x_270_);
if (v_isShared_267_ == 0)
{
lean_ctor_set(v___x_266_, 0, v___x_271_);
v___x_273_ = v___x_266_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v___x_271_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_278_; 
lean_dec(v_j_257_);
v_a_277_ = lean_ctor_get(v___x_264_, 0);
lean_inc(v_a_277_);
lean_dec_ref_known(v___x_264_, 1);
v___x_278_ = l_Lean_Json_getStr_x3f(v_a_277_);
if (lean_obj_tag(v___x_278_) == 0)
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
lean_del_object(v___x_261_);
v_a_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_297_; 
v_a_287_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_297_ == 0)
{
v___x_289_ = v___x_278_;
v_isShared_290_ = v_isSharedCheck_297_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_278_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_297_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_262_ == 0)
{
lean_ctor_set_tag(v___x_261_, 1);
lean_ctor_set(v___x_261_, 0, v_a_287_);
v___x_292_ = v___x_261_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_296_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
lean_object* v___x_294_; 
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_292_);
v___x_294_ = v___x_289_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v___x_292_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_324_; 
lean_dec(v_j_257_);
v_a_300_ = lean_ctor_get(v___x_259_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_259_);
if (v_isSharedCheck_324_ == 0)
{
v___x_302_ = v___x_259_;
v_isShared_303_ = v_isSharedCheck_324_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_259_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_324_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lean_Json_getNat_x3f(v_a_300_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_312_; 
lean_del_object(v___x_302_);
v_a_305_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_312_ == 0)
{
v___x_307_ = v___x_304_;
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_304_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_310_; 
if (v_isShared_308_ == 0)
{
v___x_310_ = v___x_307_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_305_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_323_; 
v_a_313_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_323_ == 0)
{
v___x_315_ = v___x_304_;
v_isShared_316_ = v_isSharedCheck_323_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_304_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_323_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set_tag(v___x_302_, 0);
lean_ctor_set(v___x_302_, 0, v_a_313_);
v___x_318_ = v___x_302_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_322_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_320_; 
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v___x_318_);
v___x_320_ = v___x_315_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__2));
v___x_333_ = l_Lean_Json_mkObj(v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(lean_object* v_x_339_){
_start:
{
switch(lean_obj_tag(v_x_339_))
{
case 0:
{
lean_object* v___x_340_; 
v___x_340_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__3);
return v___x_340_;
}
case 1:
{
lean_object* v_a_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v_a_341_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v_x_339_, 1);
v___x_342_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__4));
v___x_343_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_a_341_);
v___x_344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_342_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_345_ = lean_box(0);
v___x_346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_346_, 0, v___x_344_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
v___x_347_ = l_Lean_Json_mkObj(v___x_346_);
lean_dec_ref_known(v___x_346_, 2);
return v___x_347_;
}
case 2:
{
lean_object* v_a_348_; lean_object* v_a_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v_a_348_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_348_);
v_a_349_ = lean_ctor_get(v_x_339_, 1);
lean_inc(v_a_349_);
lean_dec_ref_known(v_x_339_, 2);
v___x_350_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__5));
v___x_351_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_a_348_);
v___x_352_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_a_349_);
v___x_353_ = lean_unsigned_to_nat(2u);
v___x_354_ = lean_mk_empty_array_with_capacity(v___x_353_);
v___x_355_ = lean_array_push(v___x_354_, v___x_351_);
v___x_356_ = lean_array_push(v___x_355_, v___x_352_);
v___x_357_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
v___x_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_350_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = lean_box(0);
v___x_360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_358_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v___x_361_ = l_Lean_Json_mkObj(v___x_360_);
lean_dec_ref_known(v___x_360_, 2);
return v___x_361_;
}
case 3:
{
lean_object* v_a_362_; lean_object* v_a_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v_a_362_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_362_);
v_a_363_ = lean_ctor_get(v_x_339_, 1);
lean_inc(v_a_363_);
lean_dec_ref_known(v_x_339_, 2);
v___x_364_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__6));
v___x_365_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_a_362_);
v___x_366_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_a_363_);
v___x_367_ = lean_unsigned_to_nat(2u);
v___x_368_ = lean_mk_empty_array_with_capacity(v___x_367_);
v___x_369_ = lean_array_push(v___x_368_, v___x_365_);
v___x_370_ = lean_array_push(v___x_369_, v___x_366_);
v___x_371_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
v___x_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_364_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = lean_box(0);
v___x_374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_375_ = l_Lean_Json_mkObj(v___x_374_);
lean_dec_ref_known(v___x_374_, 2);
return v___x_375_;
}
case 4:
{
lean_object* v_a_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_a_376_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_376_);
lean_dec_ref_known(v_x_339_, 1);
v___x_377_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__7));
v___x_378_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_a_376_);
v___x_379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_379_, 0, v___x_377_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v___x_380_ = lean_box(0);
v___x_381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_381_, 0, v___x_379_);
lean_ctor_set(v___x_381_, 1, v___x_380_);
v___x_382_ = l_Lean_Json_mkObj(v___x_381_);
lean_dec_ref_known(v___x_381_, 2);
return v___x_382_;
}
default: 
{
lean_object* v_a_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v_a_383_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_383_);
lean_dec_ref_known(v_x_339_, 1);
v___x_384_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8));
v___x_385_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_a_383_);
v___x_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_box(0);
v___x_388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = l_Lean_Json_mkObj(v___x_388_);
lean_dec_ref_known(v___x_388_, 2);
return v___x_389_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(lean_object* v_j_399_){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__0));
lean_inc(v_j_399_);
v___x_401_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec_ref_known(v___x_401_, 1);
v___x_402_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__4));
lean_inc(v_j_399_);
v___x_403_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_402_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec_ref_known(v___x_403_, 1);
v___x_404_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__5));
lean_inc(v_j_399_);
v___x_405_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_404_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref_known(v___x_405_, 1);
v___x_406_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__6));
lean_inc(v_j_399_);
v___x_407_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_406_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec_ref_known(v___x_407_, 1);
v___x_408_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__7));
lean_inc(v_j_399_);
v___x_409_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_408_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; 
lean_dec_ref_known(v___x_409_, 1);
v___x_410_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8));
lean_inc(v_j_399_);
v___x_411_ = l_Lean_Json_getObjVal_x3f(v_j_399_, v___x_410_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_422_; 
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_422_ == 0)
{
lean_object* v_unused_423_; 
v_unused_423_ = lean_ctor_get(v___x_411_, 0);
lean_dec(v_unused_423_);
v___x_413_ = v___x_411_;
v_isShared_414_ = v_isSharedCheck_422_;
goto v_resetjp_412_;
}
else
{
lean_dec(v___x_411_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_422_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_420_; 
v___x_415_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__0));
v___x_416_ = lean_unsigned_to_nat(80u);
v___x_417_ = l_Lean_Json_pretty(v_j_399_, v___x_416_);
v___x_418_ = lean_string_append(v___x_415_, v___x_417_);
lean_dec_ref(v___x_417_);
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 0, v___x_418_);
v___x_420_ = v___x_413_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v___x_418_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_425_; 
lean_dec(v_j_399_);
v_a_424_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_a_424_);
lean_dec_ref_known(v___x_411_, 1);
v___x_425_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_424_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_433_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_433_ == 0)
{
v___x_428_ = v___x_425_;
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_a_426_);
lean_dec(v___x_425_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_433_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_431_; 
if (v_isShared_429_ == 0)
{
v___x_431_ = v___x_428_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_a_426_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
else
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_442_; 
v_a_434_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_442_ == 0)
{
v___x_436_ = v___x_425_;
v_isShared_437_ = v_isSharedCheck_442_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_425_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_442_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_438_; lean_object* v___x_440_; 
v___x_438_ = l_Lean_Level_mvar___override(v_a_434_);
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 0, v___x_438_);
v___x_440_ = v___x_436_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_438_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
}
else
{
lean_object* v_a_443_; lean_object* v___x_444_; 
lean_dec(v_j_399_);
v_a_443_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v___x_409_, 1);
v___x_444_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_443_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
else
{
lean_object* v_a_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_461_; 
v_a_453_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_461_ == 0)
{
v___x_455_ = v___x_444_;
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_a_453_);
lean_dec(v___x_444_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_461_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; lean_object* v___x_459_; 
v___x_457_ = l_Lean_Level_param___override(v_a_453_);
if (v_isShared_456_ == 0)
{
lean_ctor_set(v___x_455_, 0, v___x_457_);
v___x_459_ = v___x_455_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_457_);
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
else
{
lean_object* v_a_462_; lean_object* v___x_463_; 
lean_dec(v_j_399_);
v_a_462_ = lean_ctor_get(v___x_407_, 0);
lean_inc(v_a_462_);
lean_dec_ref_known(v___x_407_, 1);
v___x_463_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_462_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
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
lean_object* v_a_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; 
v_a_472_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_463_, 1);
v___x_473_ = lean_array_get_size(v_a_472_);
v___x_474_ = lean_unsigned_to_nat(2u);
v___x_475_ = lean_nat_dec_eq(v___x_473_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; 
lean_dec(v_a_472_);
v___x_476_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__2));
return v___x_476_;
}
else
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_477_ = lean_unsigned_to_nat(0u);
v___x_478_ = lean_array_fget_borrowed(v_a_472_, v___x_477_);
lean_inc(v___x_478_);
v___x_479_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v___x_478_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_dec(v_a_472_);
return v___x_479_;
}
else
{
lean_object* v_a_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_a_480_ = lean_ctor_get(v___x_479_, 0);
lean_inc(v_a_480_);
lean_dec_ref_known(v___x_479_, 1);
v___x_481_ = lean_unsigned_to_nat(1u);
v___x_482_ = lean_array_fget(v_a_472_, v___x_481_);
lean_dec(v_a_472_);
v___x_483_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v___x_482_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_dec(v_a_480_);
return v___x_483_;
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_492_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_492_ == 0)
{
v___x_486_ = v___x_483_;
v_isShared_487_ = v_isSharedCheck_492_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_492_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_488_; lean_object* v___x_490_; 
v___x_488_ = l_Lean_Level_imax___override(v_a_480_, v_a_484_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v___x_488_);
v___x_490_ = v___x_486_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_488_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
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
lean_object* v_a_493_; lean_object* v___x_494_; 
lean_dec(v_j_399_);
v_a_493_ = lean_ctor_get(v___x_405_, 0);
lean_inc(v_a_493_);
lean_dec_ref_known(v___x_405_, 1);
v___x_494_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_493_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
v_a_495_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_494_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_494_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
else
{
lean_object* v_a_503_; lean_object* v___x_504_; lean_object* v___x_505_; uint8_t v___x_506_; 
v_a_503_ = lean_ctor_get(v___x_494_, 0);
lean_inc(v_a_503_);
lean_dec_ref_known(v___x_494_, 1);
v___x_504_ = lean_array_get_size(v_a_503_);
v___x_505_ = lean_unsigned_to_nat(2u);
v___x_506_ = lean_nat_dec_eq(v___x_504_, v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; 
lean_dec(v_a_503_);
v___x_507_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__4));
return v___x_507_;
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_508_ = lean_unsigned_to_nat(0u);
v___x_509_ = lean_array_fget_borrowed(v_a_503_, v___x_508_);
lean_inc(v___x_509_);
v___x_510_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v___x_509_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_dec(v_a_503_);
return v___x_510_;
}
else
{
lean_object* v_a_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_a_511_ = lean_ctor_get(v___x_510_, 0);
lean_inc(v_a_511_);
lean_dec_ref_known(v___x_510_, 1);
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = lean_array_fget(v_a_503_, v___x_512_);
lean_dec(v_a_503_);
v___x_514_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v___x_513_);
if (lean_obj_tag(v___x_514_) == 0)
{
lean_dec(v_a_511_);
return v___x_514_;
}
else
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
v_a_515_ = lean_ctor_get(v___x_514_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_514_);
if (v_isSharedCheck_523_ == 0)
{
v___x_517_ = v___x_514_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_514_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_519_ = l_Lean_Level_max___override(v_a_511_, v_a_515_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 0, v___x_519_);
v___x_521_ = v___x_517_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v___x_519_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
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
lean_object* v_a_524_; lean_object* v___x_525_; 
lean_dec(v_j_399_);
v_a_524_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_524_);
lean_dec_ref_known(v___x_403_, 1);
v___x_525_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v_a_524_);
if (lean_obj_tag(v___x_525_) == 0)
{
return v___x_525_;
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_534_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_534_ == 0)
{
v___x_528_ = v___x_525_;
v_isShared_529_ = v_isSharedCheck_534_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_534_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_530_ = l_Lean_Level_succ___override(v_a_526_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_530_);
v___x_532_ = v___x_528_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
else
{
lean_object* v___x_535_; 
lean_dec_ref_known(v___x_401_, 1);
lean_dec(v_j_399_);
v___x_535_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f___closed__5));
return v___x_535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0(size_t v_sz_536_, size_t v_i_537_, lean_object* v_bs_538_){
_start:
{
uint8_t v___x_539_; 
v___x_539_ = lean_usize_dec_lt(v_i_537_, v_sz_536_);
if (v___x_539_ == 0)
{
return v_bs_538_;
}
else
{
lean_object* v_v_540_; lean_object* v___x_541_; lean_object* v_bs_x27_542_; lean_object* v___x_543_; size_t v___x_544_; size_t v___x_545_; lean_object* v___x_546_; 
v_v_540_ = lean_array_uget(v_bs_538_, v_i_537_);
v___x_541_ = lean_unsigned_to_nat(0u);
v_bs_x27_542_ = lean_array_uset(v_bs_538_, v_i_537_, v___x_541_);
v___x_543_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_v_540_);
v___x_544_ = ((size_t)1ULL);
v___x_545_ = lean_usize_add(v_i_537_, v___x_544_);
v___x_546_ = lean_array_uset(v_bs_x27_542_, v_i_537_, v___x_543_);
v_i_537_ = v___x_545_;
v_bs_538_ = v___x_546_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0___boxed(lean_object* v_sz_548_, lean_object* v_i_549_, lean_object* v_bs_550_){
_start:
{
size_t v_sz_boxed_551_; size_t v_i_boxed_552_; lean_object* v_res_553_; 
v_sz_boxed_551_ = lean_unbox_usize(v_sz_548_);
lean_dec(v_sz_548_);
v_i_boxed_552_ = lean_unbox_usize(v_i_549_);
lean_dec(v_i_549_);
v_res_553_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0(v_sz_boxed_551_, v_i_boxed_552_, v_bs_550_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(lean_object* v_x_574_){
_start:
{
switch(lean_obj_tag(v_x_574_))
{
case 0:
{
lean_object* v_deBruijnIndex_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v_deBruijnIndex_575_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_deBruijnIndex_575_);
lean_dec_ref_known(v_x_574_, 1);
v___x_576_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__0));
v___x_577_ = l_Lean_JsonNumber_fromNat(v_deBruijnIndex_575_);
v___x_578_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
v___x_579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_576_);
lean_ctor_set(v___x_579_, 1, v___x_578_);
v___x_580_ = lean_box(0);
v___x_581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_579_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = l_Lean_Json_mkObj(v___x_581_);
lean_dec_ref_known(v___x_581_, 2);
return v___x_582_;
}
case 1:
{
lean_object* v_fvarId_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_fvarId_583_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_fvarId_583_);
lean_dec_ref_known(v_x_574_, 1);
v___x_584_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__1));
v___x_585_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_fvarId_583_);
v___x_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_584_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
v___x_587_ = lean_box(0);
v___x_588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_586_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = l_Lean_Json_mkObj(v___x_588_);
lean_dec_ref_known(v___x_588_, 2);
return v___x_589_;
}
case 2:
{
lean_object* v_mvarId_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_mvarId_590_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_mvarId_590_);
lean_dec_ref_known(v_x_574_, 1);
v___x_591_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8));
v___x_592_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_mvarId_590_);
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_591_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = lean_box(0);
v___x_595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_593_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = l_Lean_Json_mkObj(v___x_595_);
lean_dec_ref_known(v___x_595_, 2);
return v___x_596_;
}
case 3:
{
lean_object* v_u_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_u_597_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_u_597_);
lean_dec_ref_known(v_x_574_, 1);
v___x_598_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__2));
v___x_599_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson(v_u_597_);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_598_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
v___x_601_ = lean_box(0);
v___x_602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_600_);
lean_ctor_set(v___x_602_, 1, v___x_601_);
v___x_603_ = l_Lean_Json_mkObj(v___x_602_);
lean_dec_ref_known(v___x_602_, 2);
return v___x_603_;
}
case 4:
{
lean_object* v_declName_604_; lean_object* v_us_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; size_t v_sz_611_; size_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_declName_604_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_declName_604_);
v_us_605_ = lean_ctor_get(v_x_574_, 1);
lean_inc(v_us_605_);
lean_dec_ref_known(v_x_574_, 2);
v___x_606_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__3));
v___x_607_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_declName_604_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_606_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__4));
v___x_610_ = lean_array_mk(v_us_605_);
v_sz_611_ = lean_array_size(v___x_610_);
v___x_612_ = ((size_t)0ULL);
v___x_613_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson_spec__0(v_sz_611_, v___x_612_, v___x_610_);
v___x_614_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
v___x_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_609_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___x_616_ = lean_box(0);
v___x_617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_615_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
v___x_618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_608_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
v___x_619_ = l_Lean_Json_mkObj(v___x_618_);
lean_dec_ref_known(v___x_618_, 2);
return v___x_619_;
}
case 5:
{
lean_object* v_fn_620_; lean_object* v_arg_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v_fn_620_ = lean_ctor_get(v_x_574_, 0);
lean_inc_ref(v_fn_620_);
v_arg_621_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_arg_621_);
lean_dec_ref_known(v_x_574_, 2);
v___x_622_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5));
v___x_623_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_fn_620_);
v___x_624_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_arg_621_);
v___x_625_ = lean_unsigned_to_nat(2u);
v___x_626_ = lean_mk_empty_array_with_capacity(v___x_625_);
v___x_627_ = lean_array_push(v___x_626_, v___x_623_);
v___x_628_ = lean_array_push(v___x_627_, v___x_624_);
v___x_629_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
v___x_630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_622_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
v___x_631_ = lean_box(0);
v___x_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_630_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
v___x_633_ = l_Lean_Json_mkObj(v___x_632_);
lean_dec_ref_known(v___x_632_, 2);
return v___x_633_;
}
case 6:
{
lean_object* v_binderName_634_; lean_object* v_binderType_635_; lean_object* v_body_636_; uint8_t v_binderInfo_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
v_binderName_634_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_binderName_634_);
v_binderType_635_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_binderType_635_);
v_body_636_ = lean_ctor_get(v_x_574_, 2);
lean_inc_ref(v_body_636_);
v_binderInfo_637_ = lean_ctor_get_uint8(v_x_574_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_x_574_, 3);
v___x_638_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__6));
v___x_639_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_640_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_binderName_634_);
v___x_641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_639_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
v___x_643_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_binderType_635_);
v___x_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_644_, 0, v___x_642_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
v___x_646_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_body_636_);
v___x_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_645_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
v___x_648_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10));
v___x_649_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson(v_binderInfo_637_);
v___x_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_648_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v___x_651_ = lean_box(0);
v___x_652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_650_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
v___x_653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_647_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___x_654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_644_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_641_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
v___x_656_ = l_Lean_Json_mkObj(v___x_655_);
lean_dec_ref_known(v___x_655_, 2);
v___x_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_638_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v___x_651_);
v___x_659_ = l_Lean_Json_mkObj(v___x_658_);
lean_dec_ref_known(v___x_658_, 2);
return v___x_659_;
}
case 7:
{
lean_object* v_binderName_660_; lean_object* v_binderType_661_; lean_object* v_body_662_; uint8_t v_binderInfo_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v_binderName_660_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_binderName_660_);
v_binderType_661_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_binderType_661_);
v_body_662_ = lean_ctor_get(v_x_574_, 2);
lean_inc_ref(v_body_662_);
v_binderInfo_663_ = lean_ctor_get_uint8(v_x_574_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_x_574_, 3);
v___x_664_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__11));
v___x_665_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_666_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_binderName_660_);
v___x_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_665_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
v___x_669_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_binderType_661_);
v___x_670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_670_, 0, v___x_668_);
lean_ctor_set(v___x_670_, 1, v___x_669_);
v___x_671_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
v___x_672_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_body_662_);
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
v___x_674_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10));
v___x_675_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoToJson(v_binderInfo_663_);
v___x_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_674_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v___x_677_ = lean_box(0);
v___x_678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_676_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_673_);
lean_ctor_set(v___x_679_, 1, v___x_678_);
v___x_680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_680_, 0, v___x_670_);
lean_ctor_set(v___x_680_, 1, v___x_679_);
v___x_681_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_667_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = l_Lean_Json_mkObj(v___x_681_);
lean_dec_ref_known(v___x_681_, 2);
v___x_683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_683_, 0, v___x_664_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
v___x_684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
lean_ctor_set(v___x_684_, 1, v___x_677_);
v___x_685_ = l_Lean_Json_mkObj(v___x_684_);
lean_dec_ref_known(v___x_684_, 2);
return v___x_685_;
}
case 8:
{
lean_object* v_declName_686_; lean_object* v_type_687_; lean_object* v_value_688_; lean_object* v_body_689_; uint8_t v_nondep_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v_declName_686_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_declName_686_);
v_type_687_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_type_687_);
v_value_688_ = lean_ctor_get(v_x_574_, 2);
lean_inc_ref(v_value_688_);
v_body_689_ = lean_ctor_get(v_x_574_, 3);
lean_inc_ref(v_body_689_);
v_nondep_690_ = lean_ctor_get_uint8(v_x_574_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_x_574_, 4);
v___x_691_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__12));
v___x_692_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_693_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_declName_686_);
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_692_);
lean_ctor_set(v___x_694_, 1, v___x_693_);
v___x_695_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
v___x_696_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_type_687_);
v___x_697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_695_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13));
v___x_699_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_value_688_);
v___x_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_698_);
lean_ctor_set(v___x_700_, 1, v___x_699_);
v___x_701_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
v___x_702_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_body_689_);
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_701_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
v___x_704_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__14));
v___x_705_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_705_, 0, v_nondep_690_);
v___x_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_704_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
v___x_707_ = lean_box(0);
v___x_708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_706_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
v___x_709_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_703_);
lean_ctor_set(v___x_709_, 1, v___x_708_);
v___x_710_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_700_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_697_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_694_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = l_Lean_Json_mkObj(v___x_712_);
lean_dec_ref_known(v___x_712_, 2);
v___x_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_691_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
v___x_715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
lean_ctor_set(v___x_715_, 1, v___x_707_);
v___x_716_ = l_Lean_Json_mkObj(v___x_715_);
lean_dec_ref_known(v___x_715_, 2);
return v___x_716_;
}
case 9:
{
lean_object* v_a_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v_a_717_ = lean_ctor_get(v_x_574_, 0);
lean_inc_ref(v_a_717_);
lean_dec_ref_known(v_x_574_, 1);
v___x_718_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__15));
v___x_719_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalToJson(v_a_717_);
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = lean_box(0);
v___x_722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_720_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
v___x_723_ = l_Lean_Json_mkObj(v___x_722_);
lean_dec_ref_known(v___x_722_, 2);
return v___x_723_;
}
case 10:
{
lean_object* v_expr_724_; 
v_expr_724_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_expr_724_);
lean_dec_ref_known(v_x_574_, 2);
v_x_574_ = v_expr_724_;
goto _start;
}
default: 
{
lean_object* v_typeName_726_; lean_object* v_idx_727_; lean_object* v_struct_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v_typeName_726_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_typeName_726_);
v_idx_727_ = lean_ctor_get(v_x_574_, 1);
lean_inc(v_idx_727_);
v_struct_728_ = lean_ctor_get(v_x_574_, 2);
lean_inc_ref(v_struct_728_);
lean_dec_ref_known(v_x_574_, 3);
v___x_729_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__16));
v___x_730_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__17));
v___x_731_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameToJson(v_typeName_726_);
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_730_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
v___x_733_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__18));
v___x_734_ = l_Lean_JsonNumber_fromNat(v_idx_727_);
v___x_735_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
v___x_736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_736_, 0, v___x_733_);
lean_ctor_set(v___x_736_, 1, v___x_735_);
v___x_737_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__19));
v___x_738_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v_struct_728_);
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = lean_box(0);
v___x_741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_741_, 0, v___x_739_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
v___x_742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_736_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_732_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v___x_744_ = l_Lean_Json_mkObj(v___x_743_);
lean_dec_ref_known(v___x_743_, 2);
v___x_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_729_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
lean_ctor_set(v___x_746_, 1, v___x_740_);
v___x_747_ = l_Lean_Json_mkObj(v___x_746_);
lean_dec_ref_known(v___x_746_, 2);
return v___x_747_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f_spec__0(lean_object* v_x_748_, lean_object* v_x_749_){
_start:
{
if (lean_obj_tag(v_x_748_) == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = l_List_reverse___redArg(v_x_749_);
v___x_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
return v___x_751_;
}
else
{
lean_object* v_head_752_; lean_object* v_tail_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_771_; 
v_head_752_ = lean_ctor_get(v_x_748_, 0);
v_tail_753_ = lean_ctor_get(v_x_748_, 1);
v_isSharedCheck_771_ = !lean_is_exclusive(v_x_748_);
if (v_isSharedCheck_771_ == 0)
{
v___x_755_ = v_x_748_;
v_isShared_756_ = v_isSharedCheck_771_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_tail_753_);
lean_inc(v_head_752_);
lean_dec(v_x_748_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_771_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; 
v___x_757_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v_head_752_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_del_object(v___x_755_);
lean_dec(v_tail_753_);
lean_dec(v_x_749_);
v_a_758_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_757_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_757_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
else
{
lean_object* v_a_766_; lean_object* v___x_768_; 
v_a_766_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_757_, 1);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 1, v_x_749_);
lean_ctor_set(v___x_755_, 0, v_a_766_);
v___x_768_ = v___x_755_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_766_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v_x_749_);
v___x_768_ = v_reuseFailAlloc_770_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
v_x_748_ = v_tail_753_;
v_x_749_ = v___x_768_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(lean_object* v_j_776_){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__0));
lean_inc(v_j_776_);
v___x_778_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_777_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v___x_779_; lean_object* v___x_780_; 
lean_dec_ref_known(v___x_778_, 1);
v___x_779_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__1));
lean_inc(v_j_776_);
v___x_780_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_779_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; 
lean_dec_ref_known(v___x_780_, 1);
v___x_781_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelToJson___closed__8));
lean_inc(v_j_776_);
v___x_782_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_781_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v___x_783_; lean_object* v___x_784_; 
lean_dec_ref_known(v___x_782_, 1);
v___x_783_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__2));
lean_inc(v_j_776_);
v___x_784_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_783_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v___x_785_; lean_object* v___x_786_; 
lean_dec_ref_known(v___x_784_, 1);
v___x_785_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__3));
lean_inc(v_j_776_);
v___x_786_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_785_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v___x_787_; lean_object* v___x_788_; 
lean_dec_ref_known(v___x_786_, 1);
v___x_787_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__5));
lean_inc(v_j_776_);
v___x_788_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_787_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v___x_789_; lean_object* v___x_790_; 
lean_dec_ref_known(v___x_788_, 1);
v___x_789_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__6));
lean_inc(v_j_776_);
v___x_790_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_789_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v___x_791_; lean_object* v___x_792_; 
lean_dec_ref_known(v___x_790_, 1);
v___x_791_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__11));
lean_inc(v_j_776_);
v___x_792_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_791_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; 
lean_dec_ref_known(v___x_792_, 1);
v___x_793_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__12));
lean_inc(v_j_776_);
v___x_794_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_793_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v___x_795_; lean_object* v___x_796_; 
lean_dec_ref_known(v___x_794_, 1);
v___x_795_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__15));
lean_inc(v_j_776_);
v___x_796_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_795_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; 
lean_dec_ref_known(v___x_796_, 1);
v___x_797_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__16));
lean_inc(v_j_776_);
v___x_798_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_797_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_809_; 
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; 
v_unused_810_ = lean_ctor_get(v___x_798_, 0);
lean_dec(v_unused_810_);
v___x_800_ = v___x_798_;
v_isShared_801_ = v_isSharedCheck_809_;
goto v_resetjp_799_;
}
else
{
lean_dec(v___x_798_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_809_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_802_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__0));
v___x_803_ = lean_unsigned_to_nat(80u);
v___x_804_ = l_Lean_Json_pretty(v_j_776_, v___x_803_);
v___x_805_ = lean_string_append(v___x_802_, v___x_804_);
lean_dec_ref(v___x_804_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v___x_805_);
v___x_807_ = v___x_800_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_805_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
lean_dec(v_j_776_);
v_a_811_ = lean_ctor_get(v___x_798_, 0);
lean_inc_n(v_a_811_, 2);
lean_dec_ref_known(v___x_798_, 1);
v___x_812_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__17));
v___x_813_ = l_Lean_Json_getObjVal_x3f(v_a_811_, v___x_812_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_dec(v_a_811_);
v_a_814_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_813_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_813_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_823_; 
v_a_822_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_822_);
lean_dec_ref_known(v___x_813_, 1);
v___x_823_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_822_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
lean_dec(v_a_811_);
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
else
{
lean_object* v_a_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v_a_832_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_832_);
lean_dec_ref_known(v___x_823_, 1);
v___x_833_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__18));
lean_inc(v_a_811_);
v___x_834_ = l_Lean_Json_getObjVal_x3f(v_a_811_, v___x_833_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
lean_dec(v_a_832_);
lean_dec(v_a_811_);
v_a_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_835_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
else
{
lean_object* v_a_843_; lean_object* v___x_844_; 
v_a_843_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_834_, 1);
v___x_844_ = l_Lean_Json_getNat_x3f(v_a_843_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
lean_dec(v_a_832_);
lean_dec(v_a_811_);
v_a_845_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_844_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_844_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v_a_853_ = lean_ctor_get(v___x_844_, 0);
lean_inc(v_a_853_);
lean_dec_ref_known(v___x_844_, 1);
v___x_854_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__19));
v___x_855_ = l_Lean_Json_getObjVal_x3f(v_a_811_, v___x_854_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_a_853_);
lean_dec(v_a_832_);
v_a_856_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_855_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_855_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_865_; 
v_a_864_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_855_, 1);
v___x_865_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_864_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_dec(v_a_853_);
lean_dec(v_a_832_);
return v___x_865_;
}
else
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_874_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_874_ == 0)
{
v___x_868_ = v___x_865_;
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_865_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_870_ = l_Lean_Expr_proj___override(v_a_832_, v_a_853_, v_a_866_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_870_);
v___x_872_ = v___x_868_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_870_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
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
lean_object* v_a_875_; lean_object* v___x_876_; 
lean_dec(v_j_776_);
v_a_875_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_796_, 1);
v___x_876_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_literalFromJson_x3f(v_a_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_876_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_876_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_893_; 
v_a_885_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_893_ == 0)
{
v___x_887_ = v___x_876_;
v_isShared_888_ = v_isSharedCheck_893_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_876_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_893_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_889_; lean_object* v___x_891_; 
v___x_889_ = l_Lean_Expr_lit___override(v_a_885_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_889_);
v___x_891_ = v___x_887_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
lean_dec(v_j_776_);
v_a_894_ = lean_ctor_get(v___x_794_, 0);
lean_inc_n(v_a_894_, 2);
lean_dec_ref_known(v___x_794_, 1);
v___x_895_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_896_ = l_Lean_Json_getObjVal_x3f(v_a_894_, v___x_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
lean_dec(v_a_894_);
v_a_897_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_904_ == 0)
{
v___x_899_ = v___x_896_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_896_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_897_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_906_; 
v_a_905_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_896_, 1);
v___x_906_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_905_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec(v_a_894_);
v_a_907_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_906_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_a_915_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_906_, 1);
v___x_916_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
lean_inc(v_a_894_);
v___x_917_ = l_Lean_Json_getObjVal_x3f(v_a_894_, v___x_916_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec(v_a_915_);
lean_dec(v_a_894_);
v_a_918_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_917_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_917_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_927_; 
v_a_926_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_926_);
lean_dec_ref_known(v___x_917_, 1);
v___x_927_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_926_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_dec(v_a_915_);
lean_dec(v_a_894_);
return v___x_927_;
}
else
{
lean_object* v_a_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_928_);
lean_dec_ref_known(v___x_927_, 1);
v___x_929_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13));
lean_inc(v_a_894_);
v___x_930_ = l_Lean_Json_getObjVal_x3f(v_a_894_, v___x_929_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
lean_dec(v_a_928_);
lean_dec(v_a_915_);
lean_dec(v_a_894_);
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_930_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_930_);
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
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_939_; lean_object* v___x_940_; 
v_a_939_ = lean_ctor_get(v___x_930_, 0);
lean_inc(v_a_939_);
lean_dec_ref_known(v___x_930_, 1);
v___x_940_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_939_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_dec(v_a_928_);
lean_dec(v_a_915_);
lean_dec(v_a_894_);
return v___x_940_;
}
else
{
lean_object* v_a_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 1);
v___x_942_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
lean_inc(v_a_894_);
v___x_943_ = l_Lean_Json_getObjVal_x3f(v_a_894_, v___x_942_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec(v_a_941_);
lean_dec(v_a_928_);
lean_dec(v_a_915_);
lean_dec(v_a_894_);
v_a_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
else
{
lean_object* v_a_952_; lean_object* v___x_953_; 
v_a_952_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_a_952_);
lean_dec_ref_known(v___x_943_, 1);
v___x_953_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_952_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_dec(v_a_941_);
lean_dec(v_a_928_);
lean_dec(v_a_915_);
lean_dec(v_a_894_);
return v___x_953_;
}
else
{
lean_object* v_a_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref_known(v___x_953_, 1);
v___x_955_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__14));
v___x_956_ = l_Lean_Json_getObjVal_x3f(v_a_894_, v___x_955_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_964_; 
lean_dec(v_a_954_);
lean_dec(v_a_941_);
lean_dec(v_a_928_);
lean_dec(v_a_915_);
v_a_957_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_964_ == 0)
{
v___x_959_ = v___x_956_;
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_956_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_957_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
else
{
lean_object* v_a_965_; lean_object* v___x_966_; 
v_a_965_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_956_, 1);
v___x_966_ = l_Lean_Json_getBool_x3f(v_a_965_);
lean_dec(v_a_965_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
lean_dec(v_a_954_);
lean_dec(v_a_941_);
lean_dec(v_a_928_);
lean_dec(v_a_915_);
v_a_967_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_966_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_966_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_984_; 
v_a_975_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_984_ == 0)
{
v___x_977_ = v___x_966_;
v_isShared_978_ = v_isSharedCheck_984_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_966_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_984_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_982_; 
v___x_979_ = lean_unbox(v_a_975_);
lean_dec(v_a_975_);
v___x_980_ = l_Lean_Expr_letE___override(v_a_915_, v_a_928_, v_a_941_, v_a_954_, v___x_979_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 0, v___x_980_);
v___x_982_ = v___x_977_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v___x_980_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
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
else
{
lean_object* v_a_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
lean_dec(v_j_776_);
v_a_985_ = lean_ctor_get(v___x_792_, 0);
lean_inc_n(v_a_985_, 2);
lean_dec_ref_known(v___x_792_, 1);
v___x_986_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_987_ = l_Lean_Json_getObjVal_x3f(v_a_985_, v___x_986_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec(v_a_985_);
v_a_988_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_987_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_987_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_997_; 
v_a_996_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_987_, 1);
v___x_997_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_996_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1005_; 
lean_dec(v_a_985_);
v_a_998_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_1000_ = v___x_997_;
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_997_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_998_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
else
{
lean_object* v_a_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v_a_1006_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_a_1006_);
lean_dec_ref_known(v___x_997_, 1);
v___x_1007_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
lean_inc(v_a_985_);
v___x_1008_ = l_Lean_Json_getObjVal_x3f(v_a_985_, v___x_1007_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
lean_dec(v_a_1006_);
lean_dec(v_a_985_);
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_1008_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1008_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1018_; 
v_a_1017_ = lean_ctor_get(v___x_1008_, 0);
lean_inc(v_a_1017_);
lean_dec_ref_known(v___x_1008_, 1);
v___x_1018_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_1017_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_dec(v_a_1006_);
lean_dec(v_a_985_);
return v___x_1018_;
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1018_, 1);
v___x_1020_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
lean_inc(v_a_985_);
v___x_1021_ = l_Lean_Json_getObjVal_x3f(v_a_985_, v___x_1020_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
lean_dec(v_a_1019_);
lean_dec(v_a_1006_);
lean_dec(v_a_985_);
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_1021_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1021_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1031_; 
v_a_1030_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1030_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1031_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_1030_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_dec(v_a_1019_);
lean_dec(v_a_1006_);
lean_dec(v_a_985_);
return v___x_1031_;
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1031_, 1);
v___x_1033_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10));
v___x_1034_ = l_Lean_Json_getObjVal_x3f(v_a_985_, v___x_1033_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v_a_1032_);
lean_dec(v_a_1019_);
lean_dec(v_a_1006_);
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1034_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1044_; 
v_a_1043_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1043_);
lean_dec_ref_known(v___x_1034_, 1);
v___x_1044_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f(v_a_1043_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
lean_dec(v_a_1032_);
lean_dec(v_a_1019_);
lean_dec(v_a_1006_);
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v___x_1044_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1044_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1062_; 
v_a_1053_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1055_ = v___x_1044_;
v_isShared_1056_ = v_isSharedCheck_1062_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1044_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1062_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
uint8_t v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1057_ = lean_unbox(v_a_1053_);
lean_dec(v_a_1053_);
v___x_1058_ = l_Lean_Expr_forallE___override(v_a_1006_, v_a_1019_, v_a_1032_, v___x_1057_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v___x_1058_);
v___x_1060_ = v___x_1055_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
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
else
{
lean_object* v_a_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
lean_dec(v_j_776_);
v_a_1063_ = lean_ctor_get(v___x_790_, 0);
lean_inc_n(v_a_1063_, 2);
lean_dec_ref_known(v___x_790_, 1);
v___x_1064_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__7));
v___x_1065_ = l_Lean_Json_getObjVal_x3f(v_a_1063_, v___x_1064_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1073_; 
lean_dec(v_a_1063_);
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1073_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1068_ = v___x_1065_;
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_a_1066_);
lean_dec(v___x_1065_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1073_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1071_; 
if (v_isShared_1069_ == 0)
{
v___x_1071_ = v___x_1068_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_a_1066_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
else
{
lean_object* v_a_1074_; lean_object* v___x_1075_; 
v_a_1074_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1065_, 1);
v___x_1075_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_1074_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1083_; 
lean_dec(v_a_1063_);
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1078_ = v___x_1075_;
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_dec(v___x_1075_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1079_ == 0)
{
v___x_1081_ = v___x_1078_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1076_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v_a_1084_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1085_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
lean_inc(v_a_1063_);
v___x_1086_ = l_Lean_Json_getObjVal_x3f(v_a_1063_, v___x_1085_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
lean_dec(v_a_1084_);
lean_dec(v_a_1063_);
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1086_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1096_; 
v_a_1095_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v___x_1086_, 1);
v___x_1096_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_1095_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_dec(v_a_1084_);
lean_dec(v_a_1063_);
return v___x_1096_;
}
else
{
lean_object* v_a_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_a_1097_);
lean_dec_ref_known(v___x_1096_, 1);
v___x_1098_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__9));
lean_inc(v_a_1063_);
v___x_1099_ = l_Lean_Json_getObjVal_x3f(v_a_1063_, v___x_1098_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_dec(v_a_1097_);
lean_dec(v_a_1084_);
lean_dec(v_a_1063_);
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1109_; 
v_a_1108_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_a_1108_);
lean_dec_ref_known(v___x_1099_, 1);
v___x_1109_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_1108_);
if (lean_obj_tag(v___x_1109_) == 0)
{
lean_dec(v_a_1097_);
lean_dec(v_a_1084_);
lean_dec(v_a_1063_);
return v___x_1109_;
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v_a_1110_ = lean_ctor_get(v___x_1109_, 0);
lean_inc(v_a_1110_);
lean_dec_ref_known(v___x_1109_, 1);
v___x_1111_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__10));
v___x_1112_ = l_Lean_Json_getObjVal_x3f(v_a_1063_, v___x_1111_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
lean_dec(v_a_1110_);
lean_dec(v_a_1097_);
lean_dec(v_a_1084_);
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1115_ = v___x_1112_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___x_1112_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1113_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1122_; 
v_a_1121_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v___x_1112_, 1);
v___x_1122_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_binderInfoFromJson_x3f(v_a_1121_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec(v_a_1110_);
lean_dec(v_a_1097_);
lean_dec(v_a_1084_);
v_a_1123_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1122_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1122_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1140_; 
v_a_1131_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1133_ = v___x_1122_;
v_isShared_1134_ = v_isSharedCheck_1140_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1122_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1140_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
uint8_t v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1135_ = lean_unbox(v_a_1131_);
lean_dec(v_a_1131_);
v___x_1136_ = l_Lean_Expr_lam___override(v_a_1084_, v_a_1097_, v_a_1110_, v___x_1135_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 0, v___x_1136_);
v___x_1138_ = v___x_1133_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
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
else
{
lean_object* v_a_1141_; lean_object* v___x_1142_; 
lean_dec(v_j_776_);
v_a_1141_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_1141_);
lean_dec_ref_known(v___x_788_, 1);
v___x_1142_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_1141_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1142_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1142_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; uint8_t v___x_1154_; 
v_a_1151_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1151_);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1152_ = lean_array_get_size(v_a_1151_);
v___x_1153_ = lean_unsigned_to_nat(2u);
v___x_1154_ = lean_nat_dec_eq(v___x_1152_, v___x_1153_);
if (v___x_1154_ == 0)
{
lean_object* v___x_1155_; 
lean_dec(v_a_1151_);
v___x_1155_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f___closed__2));
return v___x_1155_;
}
else
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1156_ = lean_unsigned_to_nat(0u);
v___x_1157_ = lean_array_fget_borrowed(v_a_1151_, v___x_1156_);
lean_inc(v___x_1157_);
v___x_1158_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v___x_1157_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_dec(v_a_1151_);
return v___x_1158_;
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_a_1159_);
lean_dec_ref_known(v___x_1158_, 1);
v___x_1160_ = lean_unsigned_to_nat(1u);
v___x_1161_ = lean_array_fget(v_a_1151_, v___x_1160_);
lean_dec(v_a_1151_);
v___x_1162_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v___x_1161_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_dec(v_a_1159_);
return v___x_1162_;
}
else
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1171_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1165_ = v___x_1162_;
v_isShared_1166_ = v_isSharedCheck_1171_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1162_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1171_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1167_ = l_Lean_Expr_app___override(v_a_1159_, v_a_1163_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 0, v___x_1167_);
v___x_1169_ = v___x_1165_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1167_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
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
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v_j_776_);
v_a_1172_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_786_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_786_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
lean_ctor_set_tag(v___x_1174_, 0);
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1181_; 
v_a_1180_ = lean_ctor_get(v___x_786_, 0);
lean_inc(v_a_1180_);
lean_dec_ref_known(v___x_786_, 1);
v___x_1181_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_1180_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
lean_dec(v_j_776_);
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1181_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1181_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v_a_1190_ = lean_ctor_get(v___x_1181_, 0);
lean_inc(v_a_1190_);
lean_dec_ref_known(v___x_1181_, 1);
v___x_1191_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__4));
v___x_1192_ = l_Lean_Json_getObjVal_x3f(v_j_776_, v___x_1191_);
if (lean_obj_tag(v___x_1192_) == 0)
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1200_; 
lean_dec(v_a_1190_);
v_a_1193_ = lean_ctor_get(v___x_1192_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1195_ = v___x_1192_;
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v___x_1192_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_a_1193_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1202_; 
v_a_1201_ = lean_ctor_get(v___x_1192_, 0);
lean_inc(v_a_1201_);
lean_dec_ref_known(v___x_1192_, 1);
v___x_1202_ = l_Lean_Array_fromJson_x3f___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f_spec__0(v_a_1201_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1210_; 
lean_dec(v_a_1190_);
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1205_ = v___x_1202_;
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1202_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1206_ == 0)
{
v___x_1208_ = v___x_1205_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_a_1203_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
else
{
lean_object* v_a_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v_a_1211_ = lean_ctor_get(v___x_1202_, 0);
lean_inc(v_a_1211_);
lean_dec_ref_known(v___x_1202_, 1);
v___x_1212_ = lean_array_to_list(v_a_1211_);
v___x_1213_ = lean_box(0);
v___x_1214_ = l_List_mapM_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f_spec__0(v___x_1212_, v___x_1213_);
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
lean_dec(v_a_1190_);
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1214_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1214_);
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
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1231_; 
v_a_1223_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1225_ = v___x_1214_;
v_isShared_1226_ = v_isSharedCheck_1231_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1214_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1231_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1227_; lean_object* v___x_1229_; 
v___x_1227_ = l_Lean_Expr_const___override(v_a_1190_, v_a_1223_);
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 0, v___x_1227_);
v___x_1229_ = v___x_1225_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1227_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
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
lean_object* v_a_1232_; lean_object* v___x_1233_; 
lean_dec(v_j_776_);
v_a_1232_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_1232_);
lean_dec_ref_known(v___x_784_, 1);
v___x_1233_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_levelFromJson_x3f(v_a_1232_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1233_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1233_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1234_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1250_; 
v_a_1242_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1244_ = v___x_1233_;
v_isShared_1245_ = v_isSharedCheck_1250_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1233_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1250_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1246_ = l_Lean_Expr_sort___override(v_a_1242_);
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 0, v___x_1246_);
v___x_1248_ = v___x_1244_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1246_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
}
}
else
{
lean_object* v_a_1251_; lean_object* v___x_1252_; 
lean_dec(v_j_776_);
v_a_1251_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_1251_);
lean_dec_ref_known(v___x_782_, 1);
v___x_1252_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_1251_);
if (lean_obj_tag(v___x_1252_) == 0)
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
v_a_1253_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1252_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1252_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1269_; 
v_a_1261_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1263_ = v___x_1252_;
v_isShared_1264_ = v_isSharedCheck_1269_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1252_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1269_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1265_ = l_Lean_Expr_mvar___override(v_a_1261_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 0, v___x_1265_);
v___x_1267_ = v___x_1263_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
}
}
else
{
lean_object* v_a_1270_; lean_object* v___x_1271_; 
lean_dec(v_j_776_);
v_a_1270_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_a_1270_);
lean_dec_ref_known(v___x_780_, 1);
v___x_1271_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_nameFromJson_x3f(v_a_1270_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1279_; 
v_a_1272_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1274_ = v___x_1271_;
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v___x_1271_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1277_; 
if (v_isShared_1275_ == 0)
{
v___x_1277_ = v___x_1274_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_a_1272_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
else
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1288_; 
v_a_1280_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1282_ = v___x_1271_;
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1271_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1284_; lean_object* v___x_1286_; 
v___x_1284_ = l_Lean_Expr_fvar___override(v_a_1280_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 0, v___x_1284_);
v___x_1286_ = v___x_1282_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1284_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1290_; 
lean_dec(v_j_776_);
v_a_1289_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_1289_);
lean_dec_ref_known(v___x_778_, 1);
v___x_1290_ = l_Lean_Json_getNat_x3f(v_a_1289_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1290_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1290_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
else
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1307_; 
v_a_1299_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1301_ = v___x_1290_;
v_isShared_1302_ = v_isSharedCheck_1307_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1290_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1307_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1303_ = l_Lean_Expr_bvar___override(v_a_1299_);
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v___x_1303_);
v___x_1305_ = v___x_1301_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
}
}
LEAN_EXPORT uint16_t l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort(lean_object* v_siteId_1308_){
_start:
{
uint64_t v_h_1309_; uint64_t v___x_1310_; uint64_t v___x_1311_; uint64_t v___x_1312_; uint64_t v___x_1313_; uint16_t v___x_1314_; 
v_h_1309_ = lean_string_hash(v_siteId_1308_);
v___x_1310_ = 55535ULL;
v___x_1311_ = lean_uint64_mod(v_h_1309_, v___x_1310_);
v___x_1312_ = 10000ULL;
v___x_1313_ = lean_uint64_add(v___x_1311_, v___x_1312_);
v___x_1314_ = lean_uint64_to_uint16(v___x_1313_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort___boxed(lean_object* v_siteId_1315_){
_start:
{
uint16_t v_res_1316_; lean_object* v_r_1317_; 
v_res_1316_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort(v_siteId_1315_);
lean_dec_ref(v_siteId_1315_);
v_r_1317_ = lean_box(v_res_1316_);
return v_r_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0(lean_object* v___x_1318_, lean_object* v_x_1319_){
_start:
{
if (lean_obj_tag(v_x_1319_) == 0)
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1320_ = lean_mk_io_user_error(v___x_1318_);
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
else
{
lean_object* v_val_1322_; 
lean_dec_ref(v___x_1318_);
v_val_1322_ = lean_ctor_get(v_x_1319_, 0);
lean_inc(v_val_1322_);
return v_val_1322_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0___boxed(lean_object* v___x_1323_, lean_object* v_x_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___lam__0(v___x_1323_, v_x_1324_);
lean_dec(v_x_1324_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg(lean_object* v_client_1330_, lean_object* v_msg_1331_){
_start:
{
lean_object* v_bytes_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v_header_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___f_1343_; lean_object* v___x_1344_; 
v_bytes_1333_ = lean_string_to_utf8(v_msg_1331_);
v___x_1334_ = lean_byte_array_size(v_bytes_1333_);
v___x_1335_ = l_Nat_reprFast(v___x_1334_);
v___x_1336_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__0));
v___x_1337_ = lean_string_append(v___x_1335_, v___x_1336_);
v_header_1338_ = lean_string_to_utf8(v___x_1337_);
lean_dec_ref(v___x_1337_);
v___x_1339_ = lean_unsigned_to_nat(2u);
v___x_1340_ = lean_mk_empty_array_with_capacity(v___x_1339_);
v___x_1341_ = lean_array_push(v___x_1340_, v_header_1338_);
v___x_1342_ = lean_array_push(v___x_1341_, v_bytes_1333_);
v___f_1343_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__2));
v___x_1344_ = lean_uv_tcp_send(v_client_1330_, v___x_1342_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1344_, 1);
v___x_1346_ = lean_io_promise_result_opt(v_a_1345_);
lean_dec(v_a_1345_);
v___x_1347_ = lean_unsigned_to_nat(0u);
v___x_1348_ = 0;
v___x_1349_ = lean_task_map(v___f_1343_, v___x_1346_, v___x_1347_, v___x_1348_);
v___x_1350_ = l_Std_Async_AsyncTask_block___redArg(v___x_1349_);
return v___x_1350_;
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1360_; 
v_a_1351_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1353_ = v___x_1344_;
v_isShared_1354_ = v_isSharedCheck_1360_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1344_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1360_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
lean_ctor_set_tag(v___x_1353_, 0);
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = lean_task_pure(v___x_1356_);
v___x_1358_ = l_Std_Async_AsyncTask_block___redArg(v___x_1357_);
return v___x_1358_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___boxed(lean_object* v_client_1361_, lean_object* v_msg_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg(v_client_1361_, v_msg_1362_);
lean_dec_ref(v_msg_1362_);
lean_dec(v_client_1361_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0(lean_object* v___x_1365_, lean_object* v_x_1366_){
_start:
{
if (lean_obj_tag(v_x_1366_) == 0)
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = lean_mk_io_user_error(v___x_1365_);
v___x_1368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
return v___x_1368_;
}
else
{
lean_object* v_val_1369_; 
lean_dec_ref(v___x_1365_);
v_val_1369_ = lean_ctor_get(v_x_1366_, 0);
lean_inc(v_val_1369_);
return v_val_1369_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0___boxed(lean_object* v___x_1370_, lean_object* v_x_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___lam__0(v___x_1370_, v_x_1371_);
lean_dec(v_x_1371_);
return v_res_1372_;
}
}
static uint8_t _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__0(void){
_start:
{
uint32_t v___x_1373_; uint8_t v___x_1374_; 
v___x_1373_ = 10;
v___x_1374_ = lean_uint32_to_uint8(v___x_1373_);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg(lean_object* v_client_1380_, lean_object* v_a_1381_){
_start:
{
lean_object* v___y_1384_; uint8_t v___y_1385_; uint8_t v___x_1394_; lean_object* v_a_1396_; uint64_t v___x_1423_; lean_object* v___f_1424_; lean_object* v___x_1425_; 
v___x_1394_ = 0;
v___x_1423_ = 1ULL;
v___f_1424_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__3));
v___x_1425_ = lean_uv_tcp_recv(v_client_1380_, v___x_1423_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; lean_object* v___x_1430_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1426_);
lean_dec_ref_known(v___x_1425_, 1);
v___x_1427_ = lean_io_promise_result_opt(v_a_1426_);
lean_dec(v_a_1426_);
v___x_1428_ = lean_unsigned_to_nat(0u);
v___x_1429_ = 0;
v___x_1430_ = lean_task_map(v___f_1424_, v___x_1427_, v___x_1428_, v___x_1429_);
v_a_1396_ = v___x_1430_;
goto v___jp_1395_;
}
else
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1439_; 
v_a_1431_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1433_ = v___x_1425_;
v_isShared_1434_ = v_isSharedCheck_1439_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1425_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1439_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
lean_ctor_set_tag(v___x_1433_, 0);
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1431_);
v___x_1436_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1437_; 
v___x_1437_ = lean_task_pure(v___x_1436_);
v_a_1396_ = v___x_1437_;
goto v___jp_1395_;
}
}
}
v___jp_1383_:
{
uint8_t v___x_1386_; uint8_t v___x_1387_; 
v___x_1386_ = lean_uint8_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__0);
v___x_1387_ = lean_uint8_dec_eq(v___y_1385_, v___x_1386_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1388_ = lean_unsigned_to_nat(0u);
v___x_1389_ = lean_byte_array_size(v_a_1381_);
v___x_1390_ = lean_byte_array_size(v___y_1384_);
v___x_1391_ = lean_byte_array_copy_slice(v___y_1384_, v___x_1388_, v_a_1381_, v___x_1389_, v___x_1390_, v___x_1387_);
lean_dec_ref(v___y_1384_);
v_a_1381_ = v___x_1391_;
goto _start;
}
else
{
lean_object* v___x_1393_; 
lean_dec_ref(v___y_1384_);
v___x_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1393_, 0, v_a_1381_);
return v___x_1393_;
}
}
v___jp_1395_:
{
lean_object* v___x_1397_; 
v___x_1397_ = l_Std_Async_AsyncTask_block___redArg(v_a_1396_);
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1414_; 
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1400_ = v___x_1397_;
v_isShared_1401_ = v_isSharedCheck_1414_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1397_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1414_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
if (lean_obj_tag(v_a_1398_) == 1)
{
lean_object* v_val_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; uint8_t v___x_1405_; 
lean_del_object(v___x_1400_);
v_val_1402_ = lean_ctor_get(v_a_1398_, 0);
lean_inc(v_val_1402_);
lean_dec_ref_known(v_a_1398_, 1);
v___x_1403_ = lean_unsigned_to_nat(0u);
v___x_1404_ = lean_byte_array_size(v_val_1402_);
v___x_1405_ = lean_nat_dec_lt(v___x_1403_, v___x_1404_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1406_ = lean_box(v___x_1394_);
v___x_1407_ = l_outOfBounds___redArg(v___x_1406_);
lean_dec(v___x_1406_);
v___x_1408_ = lean_unbox(v___x_1407_);
lean_dec(v___x_1407_);
v___y_1384_ = v_val_1402_;
v___y_1385_ = v___x_1408_;
goto v___jp_1383_;
}
else
{
uint8_t v___x_1409_; 
v___x_1409_ = lean_byte_array_fget(v_val_1402_, v___x_1403_);
v___y_1384_ = v_val_1402_;
v___y_1385_ = v___x_1409_;
goto v___jp_1383_;
}
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1412_; 
lean_dec(v_a_1398_);
lean_dec_ref(v_a_1381_);
v___x_1410_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__2));
if (v_isShared_1401_ == 0)
{
lean_ctor_set_tag(v___x_1400_, 1);
lean_ctor_set(v___x_1400_, 0, v___x_1410_);
v___x_1412_ = v___x_1400_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_dec_ref(v_a_1381_);
v_a_1415_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1397_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1397_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___boxed(lean_object* v_client_1440_, lean_object* v_a_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg(v_client_1440_, v_a_1441_);
lean_dec(v_client_1440_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg(lean_object* v_val_1444_, lean_object* v_client_1445_, lean_object* v_a_1446_){
_start:
{
lean_object* v_a_1449_; lean_object* v___x_1475_; uint8_t v___x_1476_; 
v___x_1475_ = lean_byte_array_size(v_a_1446_);
v___x_1476_ = lean_nat_dec_lt(v___x_1475_, v_val_1444_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; 
v___x_1477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1477_, 0, v_a_1446_);
return v___x_1477_;
}
else
{
lean_object* v___x_1478_; uint64_t v___x_1479_; lean_object* v___f_1480_; lean_object* v___x_1481_; 
v___x_1478_ = lean_nat_sub(v_val_1444_, v___x_1475_);
v___x_1479_ = lean_uint64_of_nat(v___x_1478_);
lean_dec(v___x_1478_);
v___f_1480_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__3));
v___x_1481_ = lean_uv_tcp_recv(v_client_1445_, v___x_1479_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; uint8_t v___x_1485_; lean_object* v___x_1486_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
lean_dec_ref_known(v___x_1481_, 1);
v___x_1483_ = lean_io_promise_result_opt(v_a_1482_);
lean_dec(v_a_1482_);
v___x_1484_ = lean_unsigned_to_nat(0u);
v___x_1485_ = 0;
v___x_1486_ = lean_task_map(v___f_1480_, v___x_1483_, v___x_1484_, v___x_1485_);
v_a_1449_ = v___x_1486_;
goto v___jp_1448_;
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1495_; 
v_a_1487_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1489_ = v___x_1481_;
v_isShared_1490_ = v_isSharedCheck_1495_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1481_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1495_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
lean_ctor_set_tag(v___x_1489_, 0);
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
lean_object* v___x_1493_; 
v___x_1493_ = lean_task_pure(v___x_1492_);
v_a_1449_ = v___x_1493_;
goto v___jp_1448_;
}
}
}
}
v___jp_1448_:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Std_Async_AsyncTask_block___redArg(v_a_1449_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1466_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1453_ = v___x_1450_;
v_isShared_1454_ = v_isSharedCheck_1466_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1450_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1466_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
if (lean_obj_tag(v_a_1451_) == 1)
{
lean_object* v_val_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; uint8_t v___x_1459_; lean_object* v___x_1460_; 
lean_del_object(v___x_1453_);
v_val_1455_ = lean_ctor_get(v_a_1451_, 0);
lean_inc(v_val_1455_);
lean_dec_ref_known(v_a_1451_, 1);
v___x_1456_ = lean_unsigned_to_nat(0u);
v___x_1457_ = lean_byte_array_size(v_a_1446_);
v___x_1458_ = lean_byte_array_size(v_val_1455_);
v___x_1459_ = 0;
v___x_1460_ = lean_byte_array_copy_slice(v_val_1455_, v___x_1456_, v_a_1446_, v___x_1457_, v___x_1458_, v___x_1459_);
lean_dec(v_val_1455_);
v_a_1446_ = v___x_1460_;
goto _start;
}
else
{
lean_object* v___x_1462_; lean_object* v___x_1464_; 
lean_dec(v_a_1451_);
lean_dec_ref(v_a_1446_);
v___x_1462_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg___closed__2));
if (v_isShared_1454_ == 0)
{
lean_ctor_set_tag(v___x_1453_, 1);
lean_ctor_set(v___x_1453_, 0, v___x_1462_);
v___x_1464_ = v___x_1453_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v___x_1462_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1474_; 
lean_dec_ref(v_a_1446_);
v_a_1467_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1469_ = v___x_1450_;
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_a_1467_);
lean_dec(v___x_1450_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1474_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v___x_1472_; 
if (v_isShared_1470_ == 0)
{
v___x_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_a_1467_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg___boxed(lean_object* v_val_1496_, lean_object* v_client_1497_, lean_object* v_a_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg(v_val_1496_, v_client_1497_, v_a_1498_);
lean_dec(v_client_1497_);
lean_dec(v_val_1496_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg(lean_object* v_client_1510_){
_start:
{
lean_object* v_header_1512_; lean_object* v___x_1513_; 
v_header_1512_ = l_ByteArray_empty;
v___x_1513_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg(v_client_1510_, v_header_1512_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1556_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1516_ = v___x_1513_;
v_isShared_1517_ = v_isSharedCheck_1556_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1513_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1556_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
uint8_t v___x_1518_; 
v___x_1518_ = lean_string_validate_utf8(v_a_1514_);
if (v___x_1518_ == 0)
{
lean_object* v___x_1519_; lean_object* v___x_1521_; 
lean_dec(v_a_1514_);
v___x_1519_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__1));
if (v_isShared_1517_ == 0)
{
lean_ctor_set_tag(v___x_1516_, 1);
lean_ctor_set(v___x_1516_, 0, v___x_1519_);
v___x_1521_ = v___x_1516_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v___x_1519_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
else
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1523_ = lean_string_from_utf8_unchecked(v_a_1514_);
v___x_1524_ = lean_unsigned_to_nat(0u);
v___x_1525_ = lean_string_utf8_byte_size(v___x_1523_);
v___x_1526_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1523_);
lean_ctor_set(v___x_1526_, 1, v___x_1524_);
lean_ctor_set(v___x_1526_, 2, v___x_1525_);
v___x_1527_ = l_String_Slice_toNat_x3f(v___x_1526_);
lean_dec_ref_known(v___x_1526_, 3);
if (lean_obj_tag(v___x_1527_) == 1)
{
lean_object* v_val_1528_; lean_object* v___x_1529_; 
lean_del_object(v___x_1516_);
v_val_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc(v_val_1528_);
lean_dec_ref_known(v___x_1527_, 1);
v___x_1529_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg(v_val_1528_, v_client_1510_, v_header_1512_);
lean_dec(v_val_1528_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1543_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1543_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1532_ = v___x_1529_;
v_isShared_1533_ = v_isSharedCheck_1543_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1529_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1543_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
uint8_t v___x_1534_; 
v___x_1534_ = lean_string_validate_utf8(v_a_1530_);
if (v___x_1534_ == 0)
{
lean_object* v___x_1535_; lean_object* v___x_1537_; 
lean_dec(v_a_1530_);
v___x_1535_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__3));
if (v_isShared_1533_ == 0)
{
lean_ctor_set_tag(v___x_1532_, 1);
lean_ctor_set(v___x_1532_, 0, v___x_1535_);
v___x_1537_ = v___x_1532_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v___x_1535_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
else
{
lean_object* v___x_1539_; lean_object* v___x_1541_; 
v___x_1539_ = lean_string_from_utf8_unchecked(v_a_1530_);
if (v_isShared_1533_ == 0)
{
lean_ctor_set(v___x_1532_, 0, v___x_1539_);
v___x_1541_ = v___x_1532_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
else
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
v_a_1544_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1546_ = v___x_1529_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1529_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1544_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
}
else
{
lean_object* v___x_1552_; lean_object* v___x_1554_; 
lean_dec(v___x_1527_);
v___x_1552_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___closed__5));
if (v_isShared_1517_ == 0)
{
lean_ctor_set_tag(v___x_1516_, 1);
lean_ctor_set(v___x_1516_, 0, v___x_1552_);
v___x_1554_ = v___x_1516_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
v_a_1557_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1513_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1513_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg___boxed(lean_object* v_client_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg(v_client_1565_);
lean_dec(v_client_1565_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0(lean_object* v_client_1568_, lean_object* v_inst_1569_, lean_object* v_a_1570_){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___redArg(v_client_1568_, v_a_1570_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0___boxed(lean_object* v_client_1573_, lean_object* v_inst_1574_, lean_object* v_a_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__0(v_client_1573_, v_inst_1574_, v_a_1575_);
lean_dec(v_client_1573_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1(lean_object* v_val_1578_, lean_object* v_client_1579_, lean_object* v_inst_1580_, lean_object* v_a_1581_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___redArg(v_val_1578_, v_client_1579_, v_a_1581_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1___boxed(lean_object* v_val_1584_, lean_object* v_client_1585_, lean_object* v_inst_1586_, lean_object* v_a_1587_, lean_object* v___y_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg_spec__1(v_val_1584_, v_client_1585_, v_inst_1586_, v_a_1587_);
lean_dec(v_client_1585_);
lean_dec(v_val_1584_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__0(lean_object* v___y_1590_){
_start:
{
if (lean_obj_tag(v___y_1590_) == 0)
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
v_a_1591_ = lean_ctor_get(v___y_1590_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___y_1590_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v___y_1590_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___y_1590_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
v_a_1599_ = lean_ctor_get(v___y_1590_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___y_1590_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___y_1590_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___y_1590_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__2(lean_object* v___x_1607_, lean_object* v_x_1608_){
_start:
{
if (lean_obj_tag(v_x_1608_) == 0)
{
lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1609_ = lean_mk_io_user_error(v___x_1607_);
v___x_1610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1609_);
return v___x_1610_;
}
else
{
lean_object* v_val_1611_; 
lean_dec_ref(v___x_1607_);
v_val_1611_ = lean_ctor_get(v_x_1608_, 0);
lean_inc(v_val_1611_);
return v_val_1611_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__2___boxed(lean_object* v___x_1612_, lean_object* v_x_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___lam__2(v___x_1612_, v_x_1613_);
lean_dec(v_x_1613_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg(lean_object* v_addr_1615_, lean_object* v_as_x27_1616_, lean_object* v_b_1617_){
_start:
{
if (lean_obj_tag(v_as_x27_1616_) == 0)
{
lean_object* v___x_1619_; 
lean_dec_ref(v_addr_1615_);
v___x_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1619_, 0, v_b_1617_);
return v___x_1619_;
}
else
{
lean_object* v_tail_1620_; lean_object* v___x_1625_; 
v_tail_1620_ = lean_ctor_get(v_as_x27_1616_, 1);
v___x_1625_ = lean_uv_tcp_new();
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1652_; 
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1652_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1652_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
lean_inc_ref(v_addr_1615_);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v_addr_1615_);
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_addr_1615_);
v___x_1631_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
lean_object* v___x_1632_; 
v___x_1632_ = lean_uv_tcp_bind(v_a_1626_, v___x_1631_);
lean_dec_ref(v___x_1631_);
if (lean_obj_tag(v___x_1632_) == 0)
{
lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1649_; 
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_1632_);
if (v_isSharedCheck_1649_ == 0)
{
lean_object* v_unused_1650_; 
v_unused_1650_ = lean_ctor_get(v___x_1632_, 0);
lean_dec(v_unused_1650_);
v___x_1634_ = v___x_1632_;
v_isShared_1635_ = v_isSharedCheck_1649_;
goto v_resetjp_1633_;
}
else
{
lean_dec(v___x_1632_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1649_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
uint32_t v___x_1636_; lean_object* v___x_1637_; 
v___x_1636_ = 1;
v___x_1637_ = lean_uv_tcp_listen(v_a_1626_, v___x_1636_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1647_; 
lean_dec(v_b_1617_);
lean_dec_ref(v_addr_1615_);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1647_ == 0)
{
lean_object* v_unused_1648_; 
v_unused_1648_ = lean_ctor_get(v___x_1637_, 0);
lean_dec(v_unused_1648_);
v___x_1639_ = v___x_1637_;
v_isShared_1640_ = v_isSharedCheck_1647_;
goto v_resetjp_1638_;
}
else
{
lean_dec(v___x_1637_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1647_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1635_ == 0)
{
lean_ctor_set_tag(v___x_1634_, 1);
lean_ctor_set(v___x_1634_, 0, v_a_1626_);
v___x_1642_ = v___x_1634_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1626_);
v___x_1642_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
lean_object* v___x_1644_; 
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 0, v___x_1642_);
v___x_1644_ = v___x_1639_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1642_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1637_, 1);
lean_del_object(v___x_1634_);
lean_dec(v_a_1626_);
goto v___jp_1621_;
}
}
}
else
{
lean_dec_ref_known(v___x_1632_, 1);
lean_dec(v_a_1626_);
goto v___jp_1621_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1625_, 1);
goto v___jp_1621_;
}
v___jp_1621_:
{
uint32_t v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = 100;
v___x_1623_ = l_IO_sleep(v___x_1622_);
v_as_x27_1616_ = v_tail_1620_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg___boxed(lean_object* v_addr_1653_, lean_object* v_as_x27_1654_, lean_object* v_b_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg(v_addr_1653_, v_as_x27_1654_, v_b_1655_);
lean_dec(v_as_x27_1654_);
return v_res_1657_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1(void){
_start:
{
uint8_t v___x_1659_; uint8_t v___x_1660_; uint8_t v___x_1661_; lean_object* v___x_1662_; 
v___x_1659_ = 1;
v___x_1660_ = 0;
v___x_1661_ = 127;
v___x_1662_ = l_Std_Net_IPv4Addr_ofParts(v___x_1661_, v___x_1660_, v___x_1660_, v___x_1659_);
return v___x_1662_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2(void){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1663_ = lean_unsigned_to_nat(100u);
v___x_1664_ = l_List_range(v___x_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer(lean_object* v_siteId_1667_, lean_object* v_exprJson_1668_){
_start:
{
lean_object* v___y_1671_; lean_object* v_a_1672_; lean_object* v_a_1692_; lean_object* v___f_1739_; uint16_t v_port_1740_; lean_object* v___x_1741_; lean_object* v_addr_1742_; lean_object* v_server_x3f_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1771_; 
v___f_1739_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__0));
v_port_1740_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort(v_siteId_1667_);
v___x_1741_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1);
v_addr_1742_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_addr_1742_, 0, v___x_1741_);
lean_ctor_set_uint16(v_addr_1742_, sizeof(void*)*1, v_port_1740_);
v_server_x3f_1743_ = lean_box(0);
v___x_1744_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__2);
v___x_1745_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg(v_addr_1742_, v___x_1744_, v_server_x3f_1743_);
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1748_ = v___x_1745_;
v_isShared_1749_ = v_isSharedCheck_1771_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1745_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1771_;
goto v_resetjp_1747_;
}
v___jp_1670_:
{
lean_object* v___x_1673_; 
v___x_1673_ = l_Std_Async_AsyncTask_block___redArg(v_a_1672_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1681_; 
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1681_ == 0)
{
lean_object* v_unused_1682_; 
v_unused_1682_ = lean_ctor_get(v___x_1673_, 0);
lean_dec(v_unused_1682_);
v___x_1675_ = v___x_1673_;
v_isShared_1676_ = v_isSharedCheck_1681_;
goto v_resetjp_1674_;
}
else
{
lean_dec(v___x_1673_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1681_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1677_; lean_object* v___x_1679_; 
v___x_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1677_, 0, v___y_1671_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 0, v___x_1677_);
v___x_1679_ = v___x_1675_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
else
{
lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1690_; 
lean_dec_ref(v___y_1671_);
v_a_1683_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1685_ = v___x_1673_;
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_dec(v___x_1673_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
if (v_isShared_1686_ == 0)
{
v___x_1688_ = v___x_1685_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1683_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
}
v___jp_1691_:
{
lean_object* v___x_1693_; 
v___x_1693_ = l_Std_Async_AsyncTask_block___redArg(v_a_1692_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_a_1694_);
lean_dec_ref_known(v___x_1693_, 1);
v___x_1695_ = l_Lean_Json_compress(v_exprJson_1668_);
v___x_1696_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg(v_a_1694_, v___x_1695_);
lean_dec_ref(v___x_1695_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v___x_1697_; 
lean_dec_ref_known(v___x_1696_, 1);
v___x_1697_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg(v_a_1694_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v_a_1698_; lean_object* v___f_1699_; lean_object* v___x_1700_; 
v_a_1698_ = lean_ctor_get(v___x_1697_, 0);
lean_inc(v_a_1698_);
lean_dec_ref_known(v___x_1697_, 1);
v___f_1699_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg___closed__2));
v___x_1700_ = lean_uv_tcp_shutdown(v_a_1694_);
lean_dec(v_a_1694_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_object* v_a_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; uint8_t v___x_1704_; lean_object* v___x_1705_; 
v_a_1701_ = lean_ctor_get(v___x_1700_, 0);
lean_inc(v_a_1701_);
lean_dec_ref_known(v___x_1700_, 1);
v___x_1702_ = lean_io_promise_result_opt(v_a_1701_);
lean_dec(v_a_1701_);
v___x_1703_ = lean_unsigned_to_nat(0u);
v___x_1704_ = 0;
v___x_1705_ = lean_task_map(v___f_1699_, v___x_1702_, v___x_1703_, v___x_1704_);
v___y_1671_ = v_a_1698_;
v_a_1672_ = v___x_1705_;
goto v___jp_1670_;
}
else
{
lean_object* v_a_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1714_; 
v_a_1706_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1708_ = v___x_1700_;
v_isShared_1709_ = v_isSharedCheck_1714_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_a_1706_);
lean_dec(v___x_1700_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1714_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1709_ == 0)
{
lean_ctor_set_tag(v___x_1708_, 0);
v___x_1711_ = v___x_1708_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1706_);
v___x_1711_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
lean_object* v___x_1712_; 
v___x_1712_ = lean_task_pure(v___x_1711_);
v___y_1671_ = v_a_1698_;
v_a_1672_ = v___x_1712_;
goto v___jp_1670_;
}
}
}
}
else
{
lean_object* v_a_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1722_; 
lean_dec(v_a_1694_);
v_a_1715_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1717_ = v___x_1697_;
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_a_1715_);
lean_dec(v___x_1697_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1720_; 
if (v_isShared_1718_ == 0)
{
v___x_1720_ = v___x_1717_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v_a_1715_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
}
}
else
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
lean_dec(v_a_1694_);
v_a_1723_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1696_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v___x_1696_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1723_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
else
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1738_; 
lean_dec(v_exprJson_1668_);
v_a_1731_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1733_ = v___x_1693_;
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1693_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
v_resetjp_1747_:
{
if (lean_obj_tag(v_a_1746_) == 1)
{
lean_object* v_val_1750_; lean_object* v___f_1751_; lean_object* v___x_1752_; uint8_t v___x_1753_; lean_object* v___x_1754_; 
lean_del_object(v___x_1748_);
v_val_1750_ = lean_ctor_get(v_a_1746_, 0);
lean_inc(v_val_1750_);
lean_dec_ref_known(v_a_1746_, 1);
v___f_1751_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__3));
v___x_1752_ = lean_unsigned_to_nat(0u);
v___x_1753_ = 0;
v___x_1754_ = lean_uv_tcp_accept(v_val_1750_);
lean_dec(v_val_1750_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
lean_inc(v_a_1755_);
lean_dec_ref_known(v___x_1754_, 1);
v___x_1756_ = lean_io_promise_result_opt(v_a_1755_);
lean_dec(v_a_1755_);
v___x_1757_ = lean_task_map(v___f_1751_, v___x_1756_, v___x_1752_, v___x_1753_);
v___x_1758_ = lean_task_map(v___f_1739_, v___x_1757_, v___x_1752_, v___x_1753_);
v_a_1692_ = v___x_1758_;
goto v___jp_1691_;
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1767_; 
v_a_1759_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1761_ = v___x_1754_;
v_isShared_1762_ = v_isSharedCheck_1767_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1754_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1767_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
lean_ctor_set_tag(v___x_1761_, 0);
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_task_pure(v___x_1764_);
v_a_1692_ = v___x_1765_;
goto v___jp_1691_;
}
}
}
}
else
{
lean_object* v___x_1769_; 
lean_dec(v_a_1746_);
lean_dec(v_exprJson_1668_);
if (v_isShared_1749_ == 0)
{
lean_ctor_set(v___x_1748_, 0, v_server_x3f_1743_);
v___x_1769_ = v___x_1748_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_server_x3f_1743_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___boxed(lean_object* v_siteId_1772_, lean_object* v_exprJson_1773_, lean_object* v___y_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer(v_siteId_1772_, v_exprJson_1773_);
lean_dec_ref(v_siteId_1772_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0(lean_object* v_addr_1776_, lean_object* v_as_1777_, lean_object* v_as_x27_1778_, lean_object* v_b_1779_, lean_object* v_a_1780_){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___redArg(v_addr_1776_, v_as_x27_1778_, v_b_1779_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0___boxed(lean_object* v_addr_1783_, lean_object* v_as_1784_, lean_object* v_as_x27_1785_, lean_object* v_b_1786_, lean_object* v_a_1787_, lean_object* v___y_1788_){
_start:
{
lean_object* v_res_1789_; 
v_res_1789_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer_spec__0(v_addr_1783_, v_as_1784_, v_as_x27_1785_, v_b_1786_, v_a_1787_);
lean_dec(v_as_x27_1785_);
lean_dec(v_as_1784_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv(lean_object* v_imports_1792_){
_start:
{
lean_object* v___x_1794_; uint32_t v___x_1795_; lean_object* v___x_1796_; uint8_t v___x_1797_; uint8_t v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1794_ = l_Lean_Options_empty;
v___x_1795_ = 0;
v___x_1796_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___closed__0));
v___x_1797_ = 0;
v___x_1798_ = 2;
v___x_1799_ = lean_box(1);
lean_inc_ref(v_imports_1792_);
v___x_1800_ = l_Lean_importModules(v_imports_1792_, v___x_1794_, v___x_1795_, v___x_1796_, v___x_1797_, v___x_1797_, v___x_1798_, v___x_1799_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_dec_ref(v_imports_1792_);
return v___x_1800_;
}
else
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
lean_dec_ref_known(v___x_1800_, 1);
v___x_1801_ = lean_array_pop(v_imports_1792_);
v___x_1802_ = l_Lean_importModules(v___x_1801_, v___x_1794_, v___x_1795_, v___x_1796_, v___x_1797_, v___x_1797_, v___x_1798_, v___x_1799_);
return v___x_1802_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv___boxed(lean_object* v_imports_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv(v_imports_1803_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___redArg(lean_object* v_name_1806_, lean_object* v_env_x27_1807_){
_start:
{
lean_object* v___x_1808_; uint8_t v___x_1809_; lean_object* v___x_1810_; 
v___x_1808_ = l_Lean_Options_empty;
v___x_1809_ = 0;
v___x_1810_ = l_Lean_Environment_evalConst___redArg(v_env_x27_1807_, v___x_1808_, v_name_1806_, v___x_1809_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___redArg___boxed(lean_object* v_name_1811_, lean_object* v_env_x27_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___redArg(v_name_1811_, v_env_x27_1812_);
lean_dec_ref(v_env_x27_1812_);
lean_dec(v_name_1811_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1(lean_object* v_00_u03b1_1814_, lean_object* v_name_1815_, lean_object* v_env_x27_1816_){
_start:
{
lean_object* v___x_1817_; uint8_t v___x_1818_; lean_object* v___x_1819_; 
v___x_1817_ = l_Lean_Options_empty;
v___x_1818_ = 0;
v___x_1819_ = l_Lean_Environment_evalConst___redArg(v_env_x27_1816_, v___x_1817_, v_name_1815_, v___x_1818_);
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1___boxed(lean_object* v_00_u03b1_1820_, lean_object* v_name_1821_, lean_object* v_env_x27_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval_unsafe__1(v_00_u03b1_1820_, v_name_1821_, v_env_x27_1822_);
lean_dec_ref(v_env_x27_1822_);
lean_dec(v_name_1821_);
return v_res_1823_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4(void){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1831_ = l_Lean_Options_empty;
v___x_1832_ = l_Lean_Core_getMaxHeartbeats(v___x_1831_);
return v___x_1832_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5(void){
_start:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1833_ = lean_unsigned_to_nat(1u);
v___x_1834_ = l_Lean_firstFrontendMacroScope;
v___x_1835_ = lean_nat_add(v___x_1834_, v___x_1833_);
return v___x_1835_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__10(void){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1846_ = lean_unsigned_to_nat(32u);
v___x_1847_ = lean_mk_empty_array_with_capacity(v___x_1846_);
v___x_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
return v___x_1848_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11(void){
_start:
{
size_t v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1849_ = ((size_t)5ULL);
v___x_1850_ = lean_unsigned_to_nat(0u);
v___x_1851_ = lean_unsigned_to_nat(32u);
v___x_1852_ = lean_mk_empty_array_with_capacity(v___x_1851_);
v___x_1853_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__10, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__10_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__10);
v___x_1854_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
lean_ctor_set(v___x_1854_, 1, v___x_1852_);
lean_ctor_set(v___x_1854_, 2, v___x_1850_);
lean_ctor_set(v___x_1854_, 3, v___x_1850_);
lean_ctor_set_usize(v___x_1854_, 4, v___x_1849_);
return v___x_1854_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12(void){
_start:
{
lean_object* v___x_1855_; uint64_t v___x_1856_; lean_object* v___x_1857_; 
v___x_1855_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11);
v___x_1856_ = 0ULL;
v___x_1857_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1857_, 0, v___x_1855_);
lean_ctor_set_uint64(v___x_1857_, sizeof(void*)*1, v___x_1856_);
return v___x_1857_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13(void){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1858_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14(void){
_start:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1859_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13);
v___x_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1860_, 0, v___x_1859_);
return v___x_1860_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15(void){
_start:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1861_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14);
v___x_1862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
lean_ctor_set(v___x_1862_, 1, v___x_1861_);
return v___x_1862_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16(void){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1863_ = l_Lean_NameSet_empty;
v___x_1864_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11);
v___x_1865_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1864_);
lean_ctor_set(v___x_1865_, 1, v___x_1864_);
lean_ctor_set(v___x_1865_, 2, v___x_1863_);
return v___x_1865_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17(void){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; uint8_t v___x_1868_; lean_object* v___x_1869_; 
v___x_1866_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__11);
v___x_1867_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__14);
v___x_1868_ = 1;
v___x_1869_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1869_, 0, v___x_1867_);
lean_ctor_set(v___x_1869_, 1, v___x_1867_);
lean_ctor_set(v___x_1869_, 2, v___x_1866_);
lean_ctor_set_uint8(v___x_1869_, sizeof(void*)*3, v___x_1868_);
return v___x_1869_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19(void){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1872_ = l_Lean_diagnostics;
v___x_1873_ = l_Lean_Options_empty;
v___x_1874_ = l_Lean_KVMap_instValueBool;
v___x_1875_ = l_Lean_Option_get___redArg(v___x_1874_, v___x_1873_, v___x_1872_);
return v___x_1875_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1876_ = l_Lean_maxRecDepth;
v___x_1877_ = l_Lean_Options_empty;
v___x_1878_ = l_Lean_KVMap_instValueNat;
v___x_1879_ = l_Lean_Option_get___redArg(v___x_1878_, v___x_1877_, v___x_1876_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg(lean_object* v_env_1884_, lean_object* v_type_1885_, lean_object* v_value_1886_){
_start:
{
lean_object* v_a_1889_; lean_object* v_name_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v_decl_1899_; uint8_t v___x_1900_; uint8_t v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___y_1926_; lean_object* v___x_1979_; uint8_t v___y_1981_; lean_object* v_env_2002_; uint8_t v___x_2003_; uint8_t v___x_2004_; 
v_name_1892_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__1));
v___x_1893_ = lean_box(0);
v___x_1894_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1894_, 0, v_name_1892_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
lean_ctor_set(v___x_1894_, 2, v_type_1885_);
v___x_1895_ = lean_box(0);
v___x_1896_ = 0;
v___x_1897_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__2));
v___x_1898_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1898_, 0, v___x_1894_);
lean_ctor_set(v___x_1898_, 1, v_value_1886_);
lean_ctor_set(v___x_1898_, 2, v___x_1895_);
lean_ctor_set(v___x_1898_, 3, v___x_1897_);
lean_ctor_set_uint8(v___x_1898_, sizeof(void*)*4, v___x_1896_);
v_decl_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_decl_1899_, 0, v___x_1898_);
v___x_1900_ = 1;
v___x_1901_ = 0;
v___x_1902_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__3));
v___x_1903_ = l_Lean_instInhabitedFileMap_default;
v___x_1904_ = l_Lean_Options_empty;
v___x_1905_ = lean_box(0);
v___x_1906_ = lean_unsigned_to_nat(0u);
v___x_1907_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__4);
v___x_1908_ = l_Lean_firstFrontendMacroScope;
v___x_1909_ = lean_box(0);
v___x_1910_ = lean_box(0);
v___x_1911_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__5);
v___x_1912_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__8));
v___x_1913_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__9));
v___x_1914_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__12);
v___x_1915_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__15);
v___x_1916_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__16);
v___x_1917_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__17);
v___x_1918_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__18));
v___x_1919_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1919_, 0, v_env_1884_);
lean_ctor_set(v___x_1919_, 1, v___x_1911_);
lean_ctor_set(v___x_1919_, 2, v___x_1912_);
lean_ctor_set(v___x_1919_, 3, v___x_1913_);
lean_ctor_set(v___x_1919_, 4, v___x_1914_);
lean_ctor_set(v___x_1919_, 5, v___x_1915_);
lean_ctor_set(v___x_1919_, 6, v___x_1916_);
lean_ctor_set(v___x_1919_, 7, v___x_1917_);
lean_ctor_set(v___x_1919_, 8, v___x_1918_);
v___x_1920_ = lean_io_get_num_heartbeats();
v___x_1921_ = lean_st_mk_ref(v___x_1919_);
v___x_1922_ = l_Lean_inheritedTraceOptions;
v___x_1923_ = lean_st_ref_get(v___x_1922_);
v___x_1924_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__19);
v___x_1979_ = lean_st_ref_get(v___x_1921_);
v_env_2002_ = lean_ctor_get(v___x_1979_, 0);
lean_inc_ref(v_env_2002_);
lean_dec(v___x_1979_);
v___x_2003_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_2002_);
lean_dec_ref(v_env_2002_);
v___x_2004_ = lean_unbox(v___x_1924_);
if (v___x_2004_ == 0)
{
if (v___x_2003_ == 0)
{
lean_inc(v___x_1921_);
v___y_1926_ = v___x_1921_;
goto v___jp_1925_;
}
else
{
uint8_t v___x_2005_; 
v___x_2005_ = lean_unbox(v___x_1924_);
v___y_1981_ = v___x_2005_;
goto v___jp_1980_;
}
}
else
{
v___y_1981_ = v___x_2003_;
goto v___jp_1980_;
}
v___jp_1888_:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1890_ = lean_mk_io_user_error(v_a_1889_);
v___x_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1891_, 0, v___x_1890_);
return v___x_1891_;
}
v___jp_1925_:
{
lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; uint8_t v___x_1930_; lean_object* v___x_1931_; 
v___x_1927_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__20);
v___x_1928_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1902_);
lean_ctor_set(v___x_1928_, 1, v___x_1903_);
lean_ctor_set(v___x_1928_, 2, v___x_1904_);
lean_ctor_set(v___x_1928_, 3, v___x_1927_);
lean_ctor_set(v___x_1928_, 4, v___x_1905_);
lean_ctor_set(v___x_1928_, 5, v___x_1893_);
lean_ctor_set(v___x_1928_, 6, v___x_1920_);
lean_ctor_set(v___x_1928_, 7, v___x_1907_);
lean_ctor_set(v___x_1928_, 8, v___x_1905_);
lean_ctor_set(v___x_1928_, 9, v___x_1908_);
lean_ctor_set(v___x_1928_, 10, v___x_1909_);
lean_ctor_set(v___x_1928_, 11, v___x_1923_);
v___x_1929_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1929_, 0, v___x_1928_);
lean_ctor_set(v___x_1929_, 1, v___x_1906_);
lean_ctor_set(v___x_1929_, 2, v___x_1910_);
v___x_1930_ = lean_unbox(v___x_1924_);
lean_ctor_set_uint8(v___x_1929_, sizeof(void*)*3, v___x_1930_);
lean_ctor_set_uint8(v___x_1929_, sizeof(void*)*3 + 1, v___x_1901_);
v___x_1931_ = l_Lean_addAndCompile(v_decl_1899_, v___x_1900_, v___x_1901_, v___x_1929_, v___y_1926_);
lean_dec(v___y_1926_);
lean_dec_ref_known(v___x_1929_, 3);
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1955_; 
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1955_ == 0)
{
lean_object* v_unused_1956_; 
v_unused_1956_ = lean_ctor_get(v___x_1931_, 0);
lean_dec(v_unused_1956_);
v___x_1933_ = v___x_1931_;
v_isShared_1934_ = v_isSharedCheck_1955_;
goto v_resetjp_1932_;
}
else
{
lean_dec(v___x_1931_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1955_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1935_; lean_object* v_env_1936_; lean_object* v___x_1937_; 
v___x_1935_ = lean_st_ref_get(v___x_1921_);
lean_dec(v___x_1921_);
v_env_1936_ = lean_ctor_get(v___x_1935_, 0);
lean_inc_ref(v_env_1936_);
lean_dec(v___x_1935_);
v___x_1937_ = l_Lean_Environment_evalConst___redArg(v_env_1936_, v___x_1904_, v_name_1892_, v___x_1901_);
lean_dec_ref(v_env_1936_);
if (lean_obj_tag(v___x_1937_) == 0)
{
lean_object* v_a_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1950_; 
v_a_1938_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1940_ = v___x_1937_;
v_isShared_1941_ = v_isSharedCheck_1950_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_a_1938_);
lean_dec(v___x_1937_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1950_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1942_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__21));
v___x_1943_ = lean_string_append(v___x_1942_, v_a_1938_);
lean_dec(v_a_1938_);
if (v_isShared_1941_ == 0)
{
lean_ctor_set_tag(v___x_1940_, 18);
lean_ctor_set(v___x_1940_, 0, v___x_1943_);
v___x_1945_ = v___x_1940_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
lean_object* v___x_1947_; 
if (v_isShared_1934_ == 0)
{
lean_ctor_set_tag(v___x_1933_, 1);
lean_ctor_set(v___x_1933_, 0, v___x_1945_);
v___x_1947_ = v___x_1933_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v___x_1945_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1953_; 
v_a_1951_ = lean_ctor_get(v___x_1937_, 0);
lean_inc(v_a_1951_);
lean_dec_ref_known(v___x_1937_, 1);
if (v_isShared_1934_ == 0)
{
lean_ctor_set(v___x_1933_, 0, v_a_1951_);
v___x_1953_ = v___x_1933_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1951_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1978_; 
lean_dec(v___x_1921_);
v_a_1957_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1978_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1959_ = v___x_1931_;
v_isShared_1960_ = v_isSharedCheck_1978_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1931_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1978_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
if (lean_obj_tag(v_a_1957_) == 0)
{
lean_object* v_msg_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1965_; 
v_msg_1961_ = lean_ctor_get(v_a_1957_, 1);
lean_inc_ref(v_msg_1961_);
lean_dec_ref_known(v_a_1957_, 2);
v___x_1962_ = l_Lean_MessageData_toString(v_msg_1961_);
v___x_1963_ = lean_mk_io_user_error(v___x_1962_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_1963_);
v___x_1965_ = v___x_1959_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
else
{
lean_object* v_id_1967_; lean_object* v___x_1968_; 
lean_del_object(v___x_1959_);
v_id_1967_ = lean_ctor_get(v_a_1957_, 0);
lean_inc(v_id_1967_);
lean_dec_ref_known(v_a_1957_, 2);
v___x_1968_ = l_Lean_InternalExceptionId_getName(v_id_1967_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; 
lean_dec(v_id_1967_);
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1969_);
lean_dec_ref_known(v___x_1968_, 1);
v___x_1970_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__22));
v___x_1971_ = l_Lean_Name_toString(v_a_1969_, v___x_1900_);
v___x_1972_ = lean_string_append(v___x_1970_, v___x_1971_);
lean_dec_ref(v___x_1971_);
v_a_1889_ = v___x_1972_;
goto v___jp_1888_;
}
else
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
lean_dec_ref_known(v___x_1968_, 1);
v___x_1973_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__23));
v___x_1974_ = l_Nat_reprFast(v_id_1967_);
v___x_1975_ = lean_string_append(v___x_1973_, v___x_1974_);
lean_dec_ref(v___x_1974_);
v___x_1976_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__24));
v___x_1977_ = lean_string_append(v___x_1975_, v___x_1976_);
v_a_1889_ = v___x_1977_;
goto v___jp_1888_;
}
}
}
}
}
v___jp_1980_:
{
if (v___y_1981_ == 0)
{
lean_object* v___x_1982_; lean_object* v_env_1983_; lean_object* v_nextMacroScope_1984_; lean_object* v_ngen_1985_; lean_object* v_auxDeclNGen_1986_; lean_object* v_traceState_1987_; lean_object* v_messages_1988_; lean_object* v_infoState_1989_; lean_object* v_snapshotTasks_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_2000_; 
v___x_1982_ = lean_st_ref_take(v___x_1921_);
v_env_1983_ = lean_ctor_get(v___x_1982_, 0);
v_nextMacroScope_1984_ = lean_ctor_get(v___x_1982_, 1);
v_ngen_1985_ = lean_ctor_get(v___x_1982_, 2);
v_auxDeclNGen_1986_ = lean_ctor_get(v___x_1982_, 3);
v_traceState_1987_ = lean_ctor_get(v___x_1982_, 4);
v_messages_1988_ = lean_ctor_get(v___x_1982_, 6);
v_infoState_1989_ = lean_ctor_get(v___x_1982_, 7);
v_snapshotTasks_1990_ = lean_ctor_get(v___x_1982_, 8);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1982_);
if (v_isSharedCheck_2000_ == 0)
{
lean_object* v_unused_2001_; 
v_unused_2001_ = lean_ctor_get(v___x_1982_, 5);
lean_dec(v_unused_2001_);
v___x_1992_ = v___x_1982_;
v_isShared_1993_ = v_isSharedCheck_2000_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_snapshotTasks_1990_);
lean_inc(v_infoState_1989_);
lean_inc(v_messages_1988_);
lean_inc(v_traceState_1987_);
lean_inc(v_auxDeclNGen_1986_);
lean_inc(v_ngen_1985_);
lean_inc(v_nextMacroScope_1984_);
lean_inc(v_env_1983_);
lean_dec(v___x_1982_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_2000_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
uint8_t v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1997_; 
v___x_1994_ = lean_unbox(v___x_1924_);
v___x_1995_ = l_Lean_Kernel_enableDiag(v_env_1983_, v___x_1994_);
if (v_isShared_1993_ == 0)
{
lean_ctor_set(v___x_1992_, 5, v___x_1915_);
lean_ctor_set(v___x_1992_, 0, v___x_1995_);
v___x_1997_ = v___x_1992_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1995_);
lean_ctor_set(v_reuseFailAlloc_1999_, 1, v_nextMacroScope_1984_);
lean_ctor_set(v_reuseFailAlloc_1999_, 2, v_ngen_1985_);
lean_ctor_set(v_reuseFailAlloc_1999_, 3, v_auxDeclNGen_1986_);
lean_ctor_set(v_reuseFailAlloc_1999_, 4, v_traceState_1987_);
lean_ctor_set(v_reuseFailAlloc_1999_, 5, v___x_1915_);
lean_ctor_set(v_reuseFailAlloc_1999_, 6, v_messages_1988_);
lean_ctor_set(v_reuseFailAlloc_1999_, 7, v_infoState_1989_);
lean_ctor_set(v_reuseFailAlloc_1999_, 8, v_snapshotTasks_1990_);
v___x_1997_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_object* v___x_1998_; 
v___x_1998_ = lean_st_ref_put(v___x_1921_, v___x_1997_);
lean_inc(v___x_1921_);
v___y_1926_ = v___x_1921_;
goto v___jp_1925_;
}
}
}
else
{
lean_inc(v___x_1921_);
v___y_1926_ = v___x_1921_;
goto v___jp_1925_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___boxed(lean_object* v_env_2006_, lean_object* v_type_2007_, lean_object* v_value_2008_, lean_object* v___y_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg(v_env_2006_, v_type_2007_, v_value_2008_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval(lean_object* v_00_u03b1_2011_, lean_object* v_inst_2012_, lean_object* v_env_2013_, lean_object* v_type_2014_, lean_object* v_value_2015_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg(v_env_2013_, v_type_2014_, v_value_2015_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___boxed(lean_object* v_00_u03b1_2018_, lean_object* v_inst_2019_, lean_object* v_env_2020_, lean_object* v_type_2021_, lean_object* v_value_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval(v_00_u03b1_2018_, v_inst_2019_, v_env_2020_, v_type_2021_, v_value_2022_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(lean_object* v_e_2025_){
_start:
{
if (lean_obj_tag(v_e_2025_) == 0)
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2035_; 
v_a_2027_ = lean_ctor_get(v_e_2025_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v_e_2025_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_2029_ = v_e_2025_;
v_isShared_2030_ = v_isSharedCheck_2035_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v_e_2025_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2035_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2031_; lean_object* v___x_2033_; 
v___x_2031_ = lean_mk_io_user_error(v_a_2027_);
if (v_isShared_2030_ == 0)
{
lean_ctor_set_tag(v___x_2029_, 1);
lean_ctor_set(v___x_2029_, 0, v___x_2031_);
v___x_2033_ = v___x_2029_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v___x_2031_);
v___x_2033_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
return v___x_2033_;
}
}
}
else
{
lean_object* v_a_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2043_; 
v_a_2036_ = lean_ctor_get(v_e_2025_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v_e_2025_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2038_ = v_e_2025_;
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_a_2036_);
lean_dec(v_e_2025_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2043_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2041_; 
if (v_isShared_2039_ == 0)
{
lean_ctor_set_tag(v___x_2038_, 0);
v___x_2041_ = v___x_2038_;
goto v_reusejp_2040_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_a_2036_);
v___x_2041_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2040_;
}
v_reusejp_2040_:
{
return v___x_2041_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg___boxed(lean_object* v_e_2044_, lean_object* v___y_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v_e_2044_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2(lean_object* v_00_u03b1_2047_, lean_object* v_e_2048_){
_start:
{
lean_object* v___x_2050_; 
v___x_2050_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v_e_2048_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___boxed(lean_object* v_00_u03b1_2051_, lean_object* v_e_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2(v_00_u03b1_2051_, v_e_2052_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1(lean_object* v___x_2055_, lean_object* v_x_2056_){
_start:
{
if (lean_obj_tag(v_x_2056_) == 0)
{
lean_object* v___x_2057_; lean_object* v___x_2058_; 
v___x_2057_ = lean_mk_io_user_error(v___x_2055_);
v___x_2058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2057_);
return v___x_2058_;
}
else
{
lean_object* v_val_2059_; 
lean_dec_ref(v___x_2055_);
v_val_2059_ = lean_ctor_get(v_x_2056_, 0);
lean_inc(v_val_2059_);
return v_val_2059_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1___boxed(lean_object* v___x_2060_, lean_object* v_x_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__1(v___x_2060_, v_x_2061_);
lean_dec(v_x_2061_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg(lean_object* v___x_2063_, lean_object* v___x_2064_, lean_object* v___x_2065_, lean_object* v_a_2066_, lean_object* v_b_2067_){
_start:
{
lean_object* v___x_2068_; 
v___x_2068_ = lean_box(0);
switch(lean_obj_tag(v_a_2066_))
{
case 0:
{
lean_object* v_pos_2069_; lean_object* v___x_2070_; 
v_pos_2069_ = lean_ctor_get(v_a_2066_, 0);
lean_inc(v_pos_2069_);
lean_dec_ref_known(v_a_2066_, 1);
v___x_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2070_, 0, v_pos_2069_);
return v___x_2070_;
}
case 1:
{
lean_object* v_pos_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2080_; 
v_pos_2071_ = lean_ctor_get(v_a_2066_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v_a_2066_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2073_ = v_a_2066_;
v_isShared_2074_ = v_isSharedCheck_2080_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_pos_2071_);
lean_dec(v_a_2066_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2080_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2075_; lean_object* v___x_2077_; 
v___x_2075_ = lean_string_utf8_next_fast(v___x_2063_, v_pos_2071_);
lean_dec(v_pos_2071_);
if (v_isShared_2074_ == 0)
{
lean_ctor_set_tag(v___x_2073_, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2075_);
v___x_2077_ = v___x_2073_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2075_);
v___x_2077_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
v_a_2066_ = v___x_2077_;
v_b_2067_ = v___x_2068_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_2081_; lean_object* v_table_2082_; lean_object* v_stackPos_2083_; lean_object* v_needlePos_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2137_; 
v_needle_2081_ = lean_ctor_get(v_a_2066_, 0);
v_table_2082_ = lean_ctor_get(v_a_2066_, 1);
v_stackPos_2083_ = lean_ctor_get(v_a_2066_, 2);
v_needlePos_2084_ = lean_ctor_get(v_a_2066_, 3);
v_isSharedCheck_2137_ = !lean_is_exclusive(v_a_2066_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2086_ = v_a_2066_;
v_isShared_2087_ = v_isSharedCheck_2137_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_needlePos_2084_);
lean_inc(v_stackPos_2083_);
lean_inc(v_table_2082_);
lean_inc(v_needle_2081_);
lean_dec(v_a_2066_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2137_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v_str_2088_; lean_object* v_startInclusive_2089_; lean_object* v_endExclusive_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; uint8_t v___x_2094_; 
v_str_2088_ = lean_ctor_get(v_needle_2081_, 0);
v_startInclusive_2089_ = lean_ctor_get(v_needle_2081_, 1);
v_endExclusive_2090_ = lean_ctor_get(v_needle_2081_, 2);
v___x_2091_ = lean_nat_sub(v_stackPos_2083_, v_needlePos_2084_);
v___x_2092_ = lean_nat_sub(v_endExclusive_2090_, v_startInclusive_2089_);
v___x_2093_ = lean_nat_add(v___x_2091_, v___x_2092_);
v___x_2094_ = lean_nat_dec_le(v___x_2093_, v___x_2065_);
lean_dec(v___x_2093_);
if (v___x_2094_ == 0)
{
lean_object* v___x_2095_; lean_object* v___x_2096_; uint8_t v___x_2097_; 
lean_dec(v___x_2092_);
lean_del_object(v___x_2086_);
lean_dec(v_needlePos_2084_);
lean_dec(v_stackPos_2083_);
lean_dec_ref(v_table_2082_);
lean_dec_ref(v_needle_2081_);
v___x_2095_ = lean_unsigned_to_nat(1u);
v___x_2096_ = lean_nat_add(v___x_2091_, v___x_2095_);
lean_dec(v___x_2091_);
v___x_2097_ = lean_nat_dec_le(v___x_2096_, v___x_2065_);
lean_dec(v___x_2096_);
if (v___x_2097_ == 0)
{
lean_inc(v_b_2067_);
return v_b_2067_;
}
else
{
lean_object* v___x_2098_; 
v___x_2098_ = lean_box(3);
v_a_2066_ = v___x_2098_;
v_b_2067_ = v___x_2068_;
goto _start;
}
}
else
{
uint8_t v_stackByte_2100_; lean_object* v___x_2101_; uint8_t v_patByte_2102_; uint8_t v___x_2103_; 
lean_dec(v___x_2091_);
lean_inc(v_stackPos_2083_);
v_stackByte_2100_ = lean_string_get_byte_fast(v___x_2063_, v_stackPos_2083_);
v___x_2101_ = lean_nat_add(v_startInclusive_2089_, v_needlePos_2084_);
v_patByte_2102_ = lean_string_get_byte_fast(v_str_2088_, v___x_2101_);
v___x_2103_ = lean_uint8_dec_eq(v_stackByte_2100_, v_patByte_2102_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; uint8_t v_decide_2105_; 
lean_dec(v___x_2092_);
v___x_2104_ = lean_unsigned_to_nat(0u);
v_decide_2105_ = lean_nat_dec_eq(v_needlePos_2084_, v___x_2104_);
if (v_decide_2105_ == 0)
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v_newNeedlePos_2108_; uint8_t v___x_2109_; 
v___x_2106_ = lean_unsigned_to_nat(1u);
v___x_2107_ = lean_nat_sub(v_needlePos_2084_, v___x_2106_);
lean_dec(v_needlePos_2084_);
v_newNeedlePos_2108_ = lean_array_fget_borrowed(v_table_2082_, v___x_2107_);
lean_dec(v___x_2107_);
v___x_2109_ = lean_nat_dec_eq(v_newNeedlePos_2108_, v___x_2104_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2111_; 
lean_inc(v_newNeedlePos_2108_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 3, v_newNeedlePos_2108_);
v___x_2111_ = v___x_2086_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v_needle_2081_);
lean_ctor_set(v_reuseFailAlloc_2113_, 1, v_table_2082_);
lean_ctor_set(v_reuseFailAlloc_2113_, 2, v_stackPos_2083_);
lean_ctor_set(v_reuseFailAlloc_2113_, 3, v_newNeedlePos_2108_);
v___x_2111_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
v_a_2066_ = v___x_2111_;
v_b_2067_ = v___x_2068_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_2114_; lean_object* v___x_2116_; 
v_nextStackPos_2114_ = l_String_Slice_posGE___redArg(v___x_2064_, v_stackPos_2083_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 3, v___x_2104_);
lean_ctor_set(v___x_2086_, 2, v_nextStackPos_2114_);
v___x_2116_ = v___x_2086_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_needle_2081_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v_table_2082_);
lean_ctor_set(v_reuseFailAlloc_2118_, 2, v_nextStackPos_2114_);
lean_ctor_set(v_reuseFailAlloc_2118_, 3, v___x_2104_);
v___x_2116_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
v_a_2066_ = v___x_2116_;
v_b_2067_ = v___x_2068_;
goto _start;
}
}
}
else
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v_nextStackPos_2121_; lean_object* v___x_2123_; 
lean_dec(v_needlePos_2084_);
v___x_2119_ = lean_unsigned_to_nat(1u);
v___x_2120_ = lean_nat_add(v_stackPos_2083_, v___x_2119_);
lean_dec(v_stackPos_2083_);
v_nextStackPos_2121_ = l_String_Slice_posGE___redArg(v___x_2064_, v___x_2120_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 3, v___x_2104_);
lean_ctor_set(v___x_2086_, 2, v_nextStackPos_2121_);
v___x_2123_ = v___x_2086_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_needle_2081_);
lean_ctor_set(v_reuseFailAlloc_2125_, 1, v_table_2082_);
lean_ctor_set(v_reuseFailAlloc_2125_, 2, v_nextStackPos_2121_);
lean_ctor_set(v_reuseFailAlloc_2125_, 3, v___x_2104_);
v___x_2123_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
v_a_2066_ = v___x_2123_;
v_b_2067_ = v___x_2068_;
goto _start;
}
}
}
else
{
lean_object* v___x_2126_; lean_object* v_nextStackPos_2127_; lean_object* v_nextNeedlePos_2128_; uint8_t v_decide_2129_; 
v___x_2126_ = lean_unsigned_to_nat(1u);
v_nextStackPos_2127_ = lean_nat_add(v_stackPos_2083_, v___x_2126_);
lean_dec(v_stackPos_2083_);
v_nextNeedlePos_2128_ = lean_nat_add(v_needlePos_2084_, v___x_2126_);
lean_dec(v_needlePos_2084_);
v_decide_2129_ = lean_nat_dec_eq(v_nextNeedlePos_2128_, v___x_2092_);
lean_dec(v___x_2092_);
if (v_decide_2129_ == 0)
{
lean_object* v___x_2131_; 
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 3, v_nextNeedlePos_2128_);
lean_ctor_set(v___x_2086_, 2, v_nextStackPos_2127_);
v___x_2131_ = v___x_2086_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_needle_2081_);
lean_ctor_set(v_reuseFailAlloc_2133_, 1, v_table_2082_);
lean_ctor_set(v_reuseFailAlloc_2133_, 2, v_nextStackPos_2127_);
lean_ctor_set(v_reuseFailAlloc_2133_, 3, v_nextNeedlePos_2128_);
v___x_2131_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
v_a_2066_ = v___x_2131_;
goto _start;
}
}
else
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
lean_del_object(v___x_2086_);
lean_dec_ref(v_table_2082_);
lean_dec_ref(v_needle_2081_);
v___x_2134_ = lean_nat_sub(v_nextStackPos_2127_, v_nextNeedlePos_2128_);
lean_dec(v_nextNeedlePos_2128_);
lean_dec(v_nextStackPos_2127_);
v___x_2135_ = l_String_Slice_pos_x21(v___x_2064_, v___x_2134_);
lean_dec(v___x_2134_);
v___x_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2135_);
return v___x_2136_;
}
}
}
}
}
default: 
{
lean_inc(v_b_2067_);
return v_b_2067_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg___boxed(lean_object* v___x_2138_, lean_object* v___x_2139_, lean_object* v___x_2140_, lean_object* v_a_2141_, lean_object* v_b_2142_){
_start:
{
lean_object* v_res_2143_; 
v_res_2143_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg(v___x_2138_, v___x_2139_, v___x_2140_, v_a_2141_, v_b_2142_);
lean_dec(v_b_2142_);
lean_dec(v___x_2140_);
lean_dec_ref(v___x_2139_);
lean_dec_ref(v___x_2138_);
return v_res_2143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0(lean_object* v_____r_2144_){
_start:
{
uint32_t v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2146_ = 500;
v___x_2147_ = l_IO_sleep(v___x_2146_);
v___x_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2147_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0___boxed(lean_object* v_____r_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0(v_____r_2149_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1(lean_object* v_s_2152_){
_start:
{
lean_object* v___x_2154_; lean_object* v_putStr_2155_; lean_object* v___x_2156_; 
v___x_2154_ = lean_get_stderr();
v_putStr_2155_ = lean_ctor_get(v___x_2154_, 4);
lean_inc_ref(v_putStr_2155_);
lean_dec_ref(v___x_2154_);
v___x_2156_ = lean_apply_2(v_putStr_2155_, v_s_2152_, lean_box(0));
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1___boxed(lean_object* v_s_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1(v_s_2157_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1(lean_object* v_s_2160_){
_start:
{
uint32_t v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2162_ = 10;
v___x_2163_ = lean_string_push(v_s_2160_, v___x_2162_);
v___x_2164_ = l_IO_eprint___at___00IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1_spec__1(v___x_2163_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1___boxed(lean_object* v_s_2165_, lean_object* v___y_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1(v_s_2165_);
return v_res_2167_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2170_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__1));
v___x_2171_ = lean_string_utf8_byte_size(v___x_2170_);
return v___x_2171_;
}
}
static uint8_t _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; uint8_t v___x_2174_; 
v___x_2172_ = lean_unsigned_to_nat(0u);
v___x_2173_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2);
v___x_2174_ = lean_nat_dec_eq(v___x_2173_, v___x_2172_);
return v___x_2174_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2175_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__2);
v___x_2176_ = lean_unsigned_to_nat(0u);
v___x_2177_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__1));
v___x_2178_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2177_);
lean_ctor_set(v___x_2178_, 1, v___x_2176_);
lean_ctor_set(v___x_2178_, 2, v___x_2175_);
return v___x_2178_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2179_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4);
v___x_2180_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_2179_);
return v___x_2180_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6(void){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___x_2181_ = lean_unsigned_to_nat(0u);
v___x_2182_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__5, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__5_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__5);
v___x_2183_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__4);
v___x_2184_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2183_);
lean_ctor_set(v___x_2184_, 1, v___x_2182_);
lean_ctor_set(v___x_2184_, 2, v___x_2181_);
lean_ctor_set(v___x_2184_, 3, v___x_2181_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg(lean_object* v_a_2189_, lean_object* v_apply_2190_, lean_object* v___x_2191_){
_start:
{
lean_object* v___y_2194_; lean_object* v___x_2196_; lean_object* v___y_2198_; lean_object* v___y_2199_; lean_object* v___y_2200_; lean_object* v___y_2201_; lean_object* v_a_2211_; lean_object* v___y_2220_; lean_object* v_a_2224_; lean_object* v___x_2226_; 
v___x_2196_ = lean_box(0);
v___x_2226_ = lean_uv_tcp_new();
if (lean_obj_tag(v___x_2226_) == 0)
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2299_; 
v_a_2227_ = lean_ctor_get(v___x_2226_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v___x_2226_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2229_ = v___x_2226_;
v_isShared_2230_ = v_isSharedCheck_2299_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2226_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2299_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v_a_2232_; lean_object* v___x_2281_; 
lean_inc_ref(v___x_2191_);
if (v_isShared_2230_ == 0)
{
lean_ctor_set(v___x_2229_, 0, v___x_2191_);
v___x_2281_ = v___x_2229_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v___x_2191_);
v___x_2281_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2280_;
}
v___jp_2231_:
{
lean_object* v___x_2233_; 
v___x_2233_ = l_Std_Async_AsyncTask_block___redArg(v_a_2232_);
if (lean_obj_tag(v___x_2233_) == 0)
{
lean_object* v___x_2234_; 
lean_dec_ref_known(v___x_2233_, 1);
v___x_2234_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_recvMsg(v_a_2227_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_a_2235_);
lean_dec_ref_known(v___x_2234_, 1);
v___x_2236_ = l_Lean_Json_parse(v_a_2235_);
v___x_2237_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v___x_2236_);
if (lean_obj_tag(v___x_2237_) == 0)
{
lean_object* v_a_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v_a_2238_ = lean_ctor_get(v___x_2237_, 0);
lean_inc_n(v_a_2238_, 2);
lean_dec_ref_known(v___x_2237_, 1);
v___x_2239_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
v___x_2240_ = l_Lean_Json_getObjVal_x3f(v_a_2238_, v___x_2239_);
v___x_2241_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v___x_2240_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v_a_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v_a_2242_ = lean_ctor_get(v___x_2241_, 0);
lean_inc(v_a_2242_);
lean_dec_ref_known(v___x_2241_, 1);
v___x_2243_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_2242_);
v___x_2244_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v___x_2243_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
v___x_2246_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13));
v___x_2247_ = l_Lean_Json_getObjVal_x3f(v_a_2238_, v___x_2246_);
v___x_2248_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v___x_2247_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_a_2249_);
lean_dec_ref_known(v___x_2248_, 1);
v___x_2250_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprFromJson_x3f(v_a_2249_);
v___x_2251_ = l_IO_ofExcept___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__2___redArg(v___x_2250_);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_object* v_a_2252_; lean_object* v___x_2253_; 
v_a_2252_ = lean_ctor_get(v___x_2251_, 0);
lean_inc(v_a_2252_);
lean_dec_ref_known(v___x_2251_, 1);
lean_inc_ref(v_a_2189_);
v___x_2253_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg(v_a_2189_, v_a_2245_, v_a_2252_);
if (lean_obj_tag(v___x_2253_) == 0)
{
lean_object* v_a_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v_a_2254_ = lean_ctor_get(v___x_2253_, 0);
lean_inc(v_a_2254_);
lean_dec_ref_known(v___x_2253_, 1);
lean_inc_ref(v_apply_2190_);
v___x_2255_ = lean_apply_1(v_apply_2190_, v_a_2254_);
v___x_2256_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_sendMsg(v_a_2227_, v___x_2255_);
lean_dec_ref(v___x_2255_);
if (lean_obj_tag(v___x_2256_) == 0)
{
lean_object* v___f_2257_; lean_object* v___x_2258_; 
lean_dec_ref_known(v___x_2256_, 1);
v___f_2257_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__8));
v___x_2258_ = lean_uv_tcp_shutdown(v_a_2227_);
lean_dec(v_a_2227_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; uint8_t v___x_2262_; lean_object* v___x_2263_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref_known(v___x_2258_, 1);
v___x_2260_ = lean_io_promise_result_opt(v_a_2259_);
lean_dec(v_a_2259_);
v___x_2261_ = lean_unsigned_to_nat(0u);
v___x_2262_ = 0;
v___x_2263_ = lean_task_map(v___f_2257_, v___x_2260_, v___x_2261_, v___x_2262_);
v_a_2224_ = v___x_2263_;
goto v___jp_2223_;
}
else
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2272_; 
v_a_2264_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2266_ = v___x_2258_;
v_isShared_2267_ = v_isSharedCheck_2272_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2258_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2272_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
lean_ctor_set_tag(v___x_2266_, 0);
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2264_);
v___x_2269_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2270_; 
v___x_2270_ = lean_task_pure(v___x_2269_);
v_a_2224_ = v___x_2270_;
goto v___jp_2223_;
}
}
}
}
else
{
lean_dec(v_a_2227_);
v___y_2220_ = v___x_2256_;
goto v___jp_2219_;
}
}
else
{
lean_object* v_a_2273_; 
lean_dec(v_a_2227_);
v_a_2273_ = lean_ctor_get(v___x_2253_, 0);
lean_inc(v_a_2273_);
lean_dec_ref_known(v___x_2253_, 1);
v_a_2211_ = v_a_2273_;
goto v___jp_2210_;
}
}
else
{
lean_object* v_a_2274_; 
lean_dec(v_a_2245_);
lean_dec(v_a_2227_);
v_a_2274_ = lean_ctor_get(v___x_2251_, 0);
lean_inc(v_a_2274_);
lean_dec_ref_known(v___x_2251_, 1);
v_a_2211_ = v_a_2274_;
goto v___jp_2210_;
}
}
else
{
lean_object* v_a_2275_; 
lean_dec(v_a_2245_);
lean_dec(v_a_2227_);
v_a_2275_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_a_2275_);
lean_dec_ref_known(v___x_2248_, 1);
v_a_2211_ = v_a_2275_;
goto v___jp_2210_;
}
}
else
{
lean_object* v_a_2276_; 
lean_dec(v_a_2238_);
lean_dec(v_a_2227_);
v_a_2276_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2276_);
lean_dec_ref_known(v___x_2244_, 1);
v_a_2211_ = v_a_2276_;
goto v___jp_2210_;
}
}
else
{
lean_object* v_a_2277_; 
lean_dec(v_a_2238_);
lean_dec(v_a_2227_);
v_a_2277_ = lean_ctor_get(v___x_2241_, 0);
lean_inc(v_a_2277_);
lean_dec_ref_known(v___x_2241_, 1);
v_a_2211_ = v_a_2277_;
goto v___jp_2210_;
}
}
else
{
lean_object* v_a_2278_; 
lean_dec(v_a_2227_);
v_a_2278_ = lean_ctor_get(v___x_2237_, 0);
lean_inc(v_a_2278_);
lean_dec_ref_known(v___x_2237_, 1);
v_a_2211_ = v_a_2278_;
goto v___jp_2210_;
}
}
else
{
lean_object* v_a_2279_; 
lean_dec(v_a_2227_);
v_a_2279_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_a_2279_);
lean_dec_ref_known(v___x_2234_, 1);
v_a_2211_ = v_a_2279_;
goto v___jp_2210_;
}
}
else
{
lean_dec(v_a_2227_);
v___y_2220_ = v___x_2233_;
goto v___jp_2219_;
}
}
v_reusejp_2280_:
{
lean_object* v___f_2282_; lean_object* v___x_2283_; 
v___f_2282_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__8));
v___x_2283_ = lean_uv_tcp_connect(v_a_2227_, v___x_2281_);
lean_dec_ref(v___x_2281_);
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v_a_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; uint8_t v___x_2287_; lean_object* v___x_2288_; 
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
lean_inc(v_a_2284_);
lean_dec_ref_known(v___x_2283_, 1);
v___x_2285_ = lean_io_promise_result_opt(v_a_2284_);
lean_dec(v_a_2284_);
v___x_2286_ = lean_unsigned_to_nat(0u);
v___x_2287_ = 0;
v___x_2288_ = lean_task_map(v___f_2282_, v___x_2285_, v___x_2286_, v___x_2287_);
v_a_2232_ = v___x_2288_;
goto v___jp_2231_;
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2297_; 
v_a_2289_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2291_ = v___x_2283_;
v_isShared_2292_ = v_isSharedCheck_2297_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2283_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2297_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
lean_ctor_set_tag(v___x_2291_, 0);
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
lean_object* v___x_2295_; 
v___x_2295_ = lean_task_pure(v___x_2294_);
v_a_2232_ = v___x_2295_;
goto v___jp_2231_;
}
}
}
}
}
}
else
{
lean_object* v_a_2300_; 
v_a_2300_ = lean_ctor_get(v___x_2226_, 0);
lean_inc(v_a_2300_);
lean_dec_ref_known(v___x_2226_, 1);
v_a_2211_ = v_a_2300_;
goto v___jp_2210_;
}
v___jp_2193_:
{
if (lean_obj_tag(v___y_2194_) == 0)
{
lean_dec_ref_known(v___y_2194_, 1);
goto _start;
}
else
{
lean_dec_ref(v___x_2191_);
lean_dec_ref(v_apply_2190_);
lean_dec_ref(v_a_2189_);
return v___y_2194_;
}
}
v___jp_2197_:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2202_ = lean_box(0);
lean_inc(v___y_2201_);
v___x_2203_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg(v___y_2199_, v___y_2200_, v___y_2198_, v___y_2201_, v___x_2202_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2200_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; 
v___x_2204_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__0));
v___x_2205_ = lean_string_append(v___x_2204_, v___y_2199_);
lean_dec_ref(v___y_2199_);
v___x_2206_ = l_IO_eprintln___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__1(v___x_2205_);
if (lean_obj_tag(v___x_2206_) == 0)
{
lean_object* v_a_2207_; lean_object* v___x_2208_; 
v_a_2207_ = lean_ctor_get(v___x_2206_, 0);
lean_inc(v_a_2207_);
lean_dec_ref_known(v___x_2206_, 1);
v___x_2208_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0(v_a_2207_);
v___y_2194_ = v___x_2208_;
goto v___jp_2193_;
}
else
{
v___y_2194_ = v___x_2206_;
goto v___jp_2193_;
}
}
else
{
lean_object* v___x_2209_; 
lean_dec_ref_known(v___x_2203_, 1);
lean_dec_ref(v___y_2199_);
v___x_2209_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___lam__0(v___x_2196_);
v___y_2194_ = v___x_2209_;
goto v___jp_2193_;
}
}
v___jp_2210_:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; uint8_t v___x_2216_; 
v___x_2212_ = lean_io_error_to_string(v_a_2211_);
v___x_2213_ = lean_unsigned_to_nat(0u);
v___x_2214_ = lean_string_utf8_byte_size(v___x_2212_);
lean_inc_ref(v___x_2212_);
v___x_2215_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2212_);
lean_ctor_set(v___x_2215_, 1, v___x_2213_);
lean_ctor_set(v___x_2215_, 2, v___x_2214_);
v___x_2216_ = lean_uint8_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__3);
if (v___x_2216_ == 0)
{
lean_object* v___x_2217_; 
v___x_2217_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__6);
v___y_2198_ = v___x_2214_;
v___y_2199_ = v___x_2212_;
v___y_2200_ = v___x_2215_;
v___y_2201_ = v___x_2217_;
goto v___jp_2197_;
}
else
{
lean_object* v___x_2218_; 
v___x_2218_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___closed__7));
v___y_2198_ = v___x_2214_;
v___y_2199_ = v___x_2212_;
v___y_2200_ = v___x_2215_;
v___y_2201_ = v___x_2218_;
goto v___jp_2197_;
}
}
v___jp_2219_:
{
if (lean_obj_tag(v___y_2220_) == 0)
{
lean_dec_ref_known(v___y_2220_, 1);
goto _start;
}
else
{
lean_object* v_a_2222_; 
v_a_2222_ = lean_ctor_get(v___y_2220_, 0);
lean_inc(v_a_2222_);
lean_dec_ref_known(v___y_2220_, 1);
v_a_2211_ = v_a_2222_;
goto v___jp_2210_;
}
}
v___jp_2223_:
{
lean_object* v___x_2225_; 
v___x_2225_ = l_Std_Async_AsyncTask_block___redArg(v_a_2224_);
v___y_2220_ = v___x_2225_;
goto v___jp_2219_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg___boxed(lean_object* v_a_2301_, lean_object* v_apply_2302_, lean_object* v___x_2303_, lean_object* v___y_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg(v_a_2301_, v_apply_2302_, v___x_2303_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* lean_idbg_client_loop(lean_object* v_siteId_2306_, lean_object* v_imports_2307_, lean_object* v_apply_2308_){
_start:
{
lean_object* v___x_2310_; 
v___x_2310_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgLoadEnv(v_imports_2307_);
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v_a_2311_; uint16_t v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v_a_2311_ = lean_ctor_get(v___x_2310_, 0);
lean_inc(v_a_2311_);
lean_dec_ref_known(v___x_2310_, 1);
v___x_2312_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgPort(v_siteId_2306_);
lean_dec_ref(v_siteId_2306_);
v___x_2313_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer___closed__1);
v___x_2314_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_2314_, 0, v___x_2313_);
lean_ctor_set_uint16(v___x_2314_, sizeof(void*)*1, v___x_2312_);
v___x_2315_ = lean_box(0);
v___x_2316_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg(v_a_2311_, v_apply_2308_, v___x_2314_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2323_ == 0)
{
lean_object* v_unused_2324_; 
v_unused_2324_ = lean_ctor_get(v___x_2316_, 0);
lean_dec(v_unused_2324_);
v___x_2318_ = v___x_2316_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_dec(v___x_2316_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
lean_ctor_set(v___x_2318_, 0, v___x_2315_);
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v___x_2315_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
else
{
return v___x_2316_;
}
}
else
{
lean_object* v_a_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2332_; 
lean_dec_ref(v_apply_2308_);
lean_dec_ref(v_siteId_2306_);
v_a_2325_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2327_ = v___x_2310_;
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_a_2325_);
lean_dec(v___x_2310_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2330_; 
if (v_isShared_2328_ == 0)
{
v___x_2330_ = v___x_2327_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_a_2325_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl___boxed(lean_object* v_siteId_2333_, lean_object* v_imports_2334_, lean_object* v_apply_2335_, lean_object* v___y_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = lean_idbg_client_loop(v_siteId_2333_, v_imports_2334_, v_apply_2335_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0(lean_object* v___x_2338_, lean_object* v___x_2339_, lean_object* v___x_2340_, lean_object* v_inst_2341_, lean_object* v_R_2342_, lean_object* v_a_2343_, lean_object* v_b_2344_, lean_object* v_c_2345_){
_start:
{
lean_object* v___x_2346_; 
v___x_2346_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___redArg(v___x_2338_, v___x_2339_, v___x_2340_, v_a_2343_, v_b_2344_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0___boxed(lean_object* v___x_2347_, lean_object* v___x_2348_, lean_object* v___x_2349_, lean_object* v_inst_2350_, lean_object* v_R_2351_, lean_object* v_a_2352_, lean_object* v_b_2353_, lean_object* v_c_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__0(v___x_2347_, v___x_2348_, v___x_2349_, v_inst_2350_, v_R_2351_, v_a_2352_, v_b_2353_, v_c_2354_);
lean_dec(v_b_2353_);
lean_dec(v___x_2349_);
lean_dec_ref(v___x_2348_);
lean_dec_ref(v___x_2347_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3(lean_object* v_a_2356_, lean_object* v_apply_2357_, lean_object* v___x_2358_, lean_object* v_inst_2359_, lean_object* v_a_2360_){
_start:
{
lean_object* v___x_2362_; 
v___x_2362_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___redArg(v_a_2356_, v_apply_2357_, v___x_2358_);
return v___x_2362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3___boxed(lean_object* v_a_2363_, lean_object* v_apply_2364_, lean_object* v___x_2365_, lean_object* v_inst_2366_, lean_object* v_a_2367_, lean_object* v___y_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Elab_Idbg_0__Lean_Idbg_idbgClientLoopImpl_spec__3(v_a_2363_, v_apply_2364_, v___x_2365_, v_inst_2366_, v_a_2367_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg(){
_start:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = l_Lean_Elab_Do_instInhabitedControlInfo_default;
v___x_2372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2371_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg___boxed(lean_object* v___y_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg();
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg(lean_object* v_x_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
lean_object* v___x_2383_; 
v___x_2383_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___redArg();
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___boxed(lean_object* v_x_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg(v_x_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v_x_2384_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1(){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2435_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2436_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4));
v___x_2437_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__18));
v___x_2438_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___boxed), 8, 0);
v___x_2439_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2435_, v___x_2436_, v___x_2437_, v___x_2438_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___boxed(lean_object* v___y_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1();
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(lean_object* v_e_2442_, lean_object* v___y_2443_){
_start:
{
uint8_t v___x_2445_; 
v___x_2445_ = l_Lean_Expr_hasMVar(v_e_2442_);
if (v___x_2445_ == 0)
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2446_, 0, v_e_2442_);
return v___x_2446_;
}
else
{
lean_object* v___x_2447_; lean_object* v_mctx_2448_; lean_object* v___x_2449_; lean_object* v_fst_2450_; lean_object* v_snd_2451_; lean_object* v___x_2452_; lean_object* v_cache_2453_; lean_object* v_zetaDeltaFVarIds_2454_; lean_object* v_postponed_2455_; lean_object* v_diag_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2465_; 
v___x_2447_ = lean_st_ref_get(v___y_2443_);
v_mctx_2448_ = lean_ctor_get(v___x_2447_, 0);
lean_inc_ref(v_mctx_2448_);
lean_dec(v___x_2447_);
v___x_2449_ = l_Lean_instantiateMVarsCore(v_mctx_2448_, v_e_2442_);
v_fst_2450_ = lean_ctor_get(v___x_2449_, 0);
lean_inc(v_fst_2450_);
v_snd_2451_ = lean_ctor_get(v___x_2449_, 1);
lean_inc(v_snd_2451_);
lean_dec_ref(v___x_2449_);
v___x_2452_ = lean_st_ref_take(v___y_2443_);
v_cache_2453_ = lean_ctor_get(v___x_2452_, 1);
v_zetaDeltaFVarIds_2454_ = lean_ctor_get(v___x_2452_, 2);
v_postponed_2455_ = lean_ctor_get(v___x_2452_, 3);
v_diag_2456_ = lean_ctor_get(v___x_2452_, 4);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2465_ == 0)
{
lean_object* v_unused_2466_; 
v_unused_2466_ = lean_ctor_get(v___x_2452_, 0);
lean_dec(v_unused_2466_);
v___x_2458_ = v___x_2452_;
v_isShared_2459_ = v_isSharedCheck_2465_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_diag_2456_);
lean_inc(v_postponed_2455_);
lean_inc(v_zetaDeltaFVarIds_2454_);
lean_inc(v_cache_2453_);
lean_dec(v___x_2452_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2465_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2461_; 
if (v_isShared_2459_ == 0)
{
lean_ctor_set(v___x_2458_, 0, v_snd_2451_);
v___x_2461_ = v___x_2458_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_snd_2451_);
lean_ctor_set(v_reuseFailAlloc_2464_, 1, v_cache_2453_);
lean_ctor_set(v_reuseFailAlloc_2464_, 2, v_zetaDeltaFVarIds_2454_);
lean_ctor_set(v_reuseFailAlloc_2464_, 3, v_postponed_2455_);
lean_ctor_set(v_reuseFailAlloc_2464_, 4, v_diag_2456_);
v___x_2461_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2462_ = lean_st_ref_put(v___y_2443_, v___x_2461_);
v___x_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2463_, 0, v_fst_2450_);
return v___x_2463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg___boxed(lean_object* v_e_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_e_2467_, v___y_2468_);
lean_dec(v___y_2468_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3(lean_object* v_e_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_){
_start:
{
lean_object* v___x_2479_; 
v___x_2479_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_e_2471_, v___y_2475_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___boxed(lean_object* v_e_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_){
_start:
{
lean_object* v_res_2488_; 
v_res_2488_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3(v_e_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_);
lean_dec(v___y_2486_);
lean_dec_ref(v___y_2485_);
lean_dec(v___y_2484_);
lean_dec_ref(v___y_2483_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg(lean_object* v_lctx_2489_, lean_object* v_x_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_){
_start:
{
lean_object* v_keyedConfig_2498_; uint8_t v_trackZetaDelta_2499_; lean_object* v_zetaDeltaSet_2500_; lean_object* v_localInstances_2501_; lean_object* v_defEqCtx_x3f_2502_; lean_object* v_synthPendingDepth_2503_; lean_object* v_customCanUnfoldPredicate_x3f_2504_; uint8_t v_univApprox_2505_; uint8_t v_inTypeClassResolution_2506_; uint8_t v_cacheInferType_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v_keyedConfig_2498_ = lean_ctor_get(v___y_2493_, 0);
v_trackZetaDelta_2499_ = lean_ctor_get_uint8(v___y_2493_, sizeof(void*)*7);
v_zetaDeltaSet_2500_ = lean_ctor_get(v___y_2493_, 1);
v_localInstances_2501_ = lean_ctor_get(v___y_2493_, 3);
v_defEqCtx_x3f_2502_ = lean_ctor_get(v___y_2493_, 4);
v_synthPendingDepth_2503_ = lean_ctor_get(v___y_2493_, 5);
v_customCanUnfoldPredicate_x3f_2504_ = lean_ctor_get(v___y_2493_, 6);
v_univApprox_2505_ = lean_ctor_get_uint8(v___y_2493_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2506_ = lean_ctor_get_uint8(v___y_2493_, sizeof(void*)*7 + 2);
v_cacheInferType_2507_ = lean_ctor_get_uint8(v___y_2493_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_2504_);
lean_inc(v_synthPendingDepth_2503_);
lean_inc(v_defEqCtx_x3f_2502_);
lean_inc_ref(v_localInstances_2501_);
lean_inc(v_zetaDeltaSet_2500_);
lean_inc_ref(v_keyedConfig_2498_);
v___x_2508_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2508_, 0, v_keyedConfig_2498_);
lean_ctor_set(v___x_2508_, 1, v_zetaDeltaSet_2500_);
lean_ctor_set(v___x_2508_, 2, v_lctx_2489_);
lean_ctor_set(v___x_2508_, 3, v_localInstances_2501_);
lean_ctor_set(v___x_2508_, 4, v_defEqCtx_x3f_2502_);
lean_ctor_set(v___x_2508_, 5, v_synthPendingDepth_2503_);
lean_ctor_set(v___x_2508_, 6, v_customCanUnfoldPredicate_x3f_2504_);
lean_ctor_set_uint8(v___x_2508_, sizeof(void*)*7, v_trackZetaDelta_2499_);
lean_ctor_set_uint8(v___x_2508_, sizeof(void*)*7 + 1, v_univApprox_2505_);
lean_ctor_set_uint8(v___x_2508_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2506_);
lean_ctor_set_uint8(v___x_2508_, sizeof(void*)*7 + 3, v_cacheInferType_2507_);
lean_inc(v___y_2496_);
lean_inc_ref(v___y_2495_);
lean_inc(v___y_2494_);
lean_inc(v___y_2492_);
lean_inc_ref(v___y_2491_);
v___x_2509_ = lean_apply_7(v_x_2490_, v___y_2491_, v___y_2492_, v___x_2508_, v___y_2494_, v___y_2495_, v___y_2496_, lean_box(0));
if (lean_obj_tag(v___x_2509_) == 0)
{
lean_object* v_a_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
v_a_2510_ = lean_ctor_get(v___x_2509_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2509_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v___x_2509_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_a_2510_);
lean_dec(v___x_2509_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_a_2510_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
else
{
return v___x_2509_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg___boxed(lean_object* v_lctx_2518_, lean_object* v_x_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg(v_lctx_2518_, v_x_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
lean_dec(v___y_2521_);
lean_dec_ref(v___y_2520_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4(lean_object* v_00_u03b1_2528_, lean_object* v_lctx_2529_, lean_object* v_x_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg(v_lctx_2529_, v_x_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___boxed(lean_object* v_00_u03b1_2539_, lean_object* v_lctx_2540_, lean_object* v_x_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4(v_00_u03b1_2539_, v_lctx_2540_, v_x_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2543_);
lean_dec_ref(v___y_2542_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0(lean_object* v_k_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v_b_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_){
_start:
{
lean_object* v___x_2559_; 
lean_inc(v___y_2557_);
lean_inc_ref(v___y_2556_);
lean_inc(v___y_2555_);
lean_inc_ref(v___y_2554_);
lean_inc(v___y_2552_);
lean_inc_ref(v___y_2551_);
v___x_2559_ = lean_apply_8(v_k_2550_, v_b_2553_, v___y_2551_, v___y_2552_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, lean_box(0));
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0___boxed(lean_object* v_k_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v_b_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0(v_k_2560_, v___y_2561_, v___y_2562_, v_b_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_);
lean_dec(v___y_2567_);
lean_dec_ref(v___y_2566_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2562_);
lean_dec_ref(v___y_2561_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg(lean_object* v_name_2570_, uint8_t v_bi_2571_, lean_object* v_type_2572_, lean_object* v_k_2573_, uint8_t v_kind_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v___f_2582_; lean_object* v___x_2583_; 
lean_inc(v___y_2576_);
lean_inc_ref(v___y_2575_);
v___f_2582_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2582_, 0, v_k_2573_);
lean_closure_set(v___f_2582_, 1, v___y_2575_);
lean_closure_set(v___f_2582_, 2, v___y_2576_);
v___x_2583_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2570_, v_bi_2571_, v_type_2572_, v___f_2582_, v_kind_2574_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_);
if (lean_obj_tag(v___x_2583_) == 0)
{
return v___x_2583_;
}
else
{
lean_object* v_a_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2591_; 
v_a_2584_ = lean_ctor_get(v___x_2583_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v___x_2583_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2586_ = v___x_2583_;
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_a_2584_);
lean_dec(v___x_2583_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2589_; 
if (v_isShared_2587_ == 0)
{
v___x_2589_ = v___x_2586_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_a_2584_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg___boxed(lean_object* v_name_2592_, lean_object* v_bi_2593_, lean_object* v_type_2594_, lean_object* v_k_2595_, lean_object* v_kind_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
uint8_t v_bi_boxed_2604_; uint8_t v_kind_boxed_2605_; lean_object* v_res_2606_; 
v_bi_boxed_2604_ = lean_unbox(v_bi_2593_);
v_kind_boxed_2605_ = lean_unbox(v_kind_2596_);
v_res_2606_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg(v_name_2592_, v_bi_boxed_2604_, v_type_2594_, v_k_2595_, v_kind_boxed_2605_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec(v___y_2600_);
lean_dec_ref(v___y_2599_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5(lean_object* v_00_u03b1_2607_, lean_object* v_name_2608_, uint8_t v_bi_2609_, lean_object* v_type_2610_, lean_object* v_k_2611_, uint8_t v_kind_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_){
_start:
{
lean_object* v___x_2620_; 
v___x_2620_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg(v_name_2608_, v_bi_2609_, v_type_2610_, v_k_2611_, v_kind_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_);
return v___x_2620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___boxed(lean_object* v_00_u03b1_2621_, lean_object* v_name_2622_, lean_object* v_bi_2623_, lean_object* v_type_2624_, lean_object* v_k_2625_, lean_object* v_kind_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
uint8_t v_bi_boxed_2634_; uint8_t v_kind_boxed_2635_; lean_object* v_res_2636_; 
v_bi_boxed_2634_ = lean_unbox(v_bi_2623_);
v_kind_boxed_2635_ = lean_unbox(v_kind_2626_);
v_res_2636_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5(v_00_u03b1_2621_, v_name_2622_, v_bi_boxed_2634_, v_type_2624_, v_k_2625_, v_kind_boxed_2635_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
return v_res_2636_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(lean_object* v_opts_2637_, lean_object* v_opt_2638_){
_start:
{
lean_object* v_name_2639_; lean_object* v_defValue_2640_; lean_object* v_map_2641_; lean_object* v___x_2642_; 
v_name_2639_ = lean_ctor_get(v_opt_2638_, 0);
v_defValue_2640_ = lean_ctor_get(v_opt_2638_, 1);
v_map_2641_ = lean_ctor_get(v_opts_2637_, 0);
v___x_2642_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2641_, v_name_2639_);
if (lean_obj_tag(v___x_2642_) == 0)
{
uint8_t v___x_2643_; 
v___x_2643_ = lean_unbox(v_defValue_2640_);
return v___x_2643_;
}
else
{
lean_object* v_val_2644_; 
v_val_2644_ = lean_ctor_get(v___x_2642_, 0);
lean_inc(v_val_2644_);
lean_dec_ref_known(v___x_2642_, 1);
if (lean_obj_tag(v_val_2644_) == 1)
{
uint8_t v_v_2645_; 
v_v_2645_ = lean_ctor_get_uint8(v_val_2644_, 0);
lean_dec_ref_known(v_val_2644_, 0);
return v_v_2645_;
}
else
{
uint8_t v___x_2646_; 
lean_dec(v_val_2644_);
v___x_2646_ = lean_unbox(v_defValue_2640_);
return v___x_2646_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8___boxed(lean_object* v_opts_2647_, lean_object* v_opt_2648_){
_start:
{
uint8_t v_res_2649_; lean_object* v_r_2650_; 
v_res_2649_ = l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(v_opts_2647_, v_opt_2648_);
lean_dec_ref(v_opt_2648_);
lean_dec_ref(v_opts_2647_);
v_r_2650_ = lean_box(v_res_2649_);
return v_r_2650_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0(uint8_t v_suppressElabErrors_2658_, uint8_t v___y_2659_, lean_object* v_x_2660_){
_start:
{
if (lean_obj_tag(v_x_2660_) == 1)
{
lean_object* v_pre_2661_; 
v_pre_2661_ = lean_ctor_get(v_x_2660_, 0);
switch(lean_obj_tag(v_pre_2661_))
{
case 1:
{
lean_object* v_pre_2662_; 
v_pre_2662_ = lean_ctor_get(v_pre_2661_, 0);
switch(lean_obj_tag(v_pre_2662_))
{
case 0:
{
lean_object* v_str_2663_; lean_object* v_str_2664_; lean_object* v___x_2665_; uint8_t v___x_2666_; 
v_str_2663_ = lean_ctor_get(v_x_2660_, 1);
v_str_2664_ = lean_ctor_get(v_pre_2661_, 1);
v___x_2665_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8));
v___x_2666_ = lean_string_dec_eq(v_str_2664_, v___x_2665_);
if (v___x_2666_ == 0)
{
lean_object* v___x_2667_; uint8_t v___x_2668_; 
v___x_2667_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__0));
v___x_2668_ = lean_string_dec_eq(v_str_2664_, v___x_2667_);
if (v___x_2668_ == 0)
{
return v___x_2668_;
}
else
{
lean_object* v___x_2669_; uint8_t v___x_2670_; 
v___x_2669_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__1));
v___x_2670_ = lean_string_dec_eq(v_str_2663_, v___x_2669_);
if (v___x_2670_ == 0)
{
return v___x_2670_;
}
else
{
return v_suppressElabErrors_2658_;
}
}
}
else
{
lean_object* v___x_2671_; uint8_t v___x_2672_; 
v___x_2671_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__2));
v___x_2672_ = lean_string_dec_eq(v_str_2663_, v___x_2671_);
if (v___x_2672_ == 0)
{
return v___x_2672_;
}
else
{
return v_suppressElabErrors_2658_;
}
}
}
case 1:
{
lean_object* v_pre_2673_; 
v_pre_2673_ = lean_ctor_get(v_pre_2662_, 0);
if (lean_obj_tag(v_pre_2673_) == 0)
{
lean_object* v_str_2674_; lean_object* v_str_2675_; lean_object* v_str_2676_; lean_object* v___x_2677_; uint8_t v___x_2678_; 
v_str_2674_ = lean_ctor_get(v_x_2660_, 1);
v_str_2675_ = lean_ctor_get(v_pre_2661_, 1);
v_str_2676_ = lean_ctor_get(v_pre_2662_, 1);
v___x_2677_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__3));
v___x_2678_ = lean_string_dec_eq(v_str_2676_, v___x_2677_);
if (v___x_2678_ == 0)
{
return v___x_2678_;
}
else
{
lean_object* v___x_2679_; uint8_t v___x_2680_; 
v___x_2679_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__4));
v___x_2680_ = lean_string_dec_eq(v_str_2675_, v___x_2679_);
if (v___x_2680_ == 0)
{
return v___x_2680_;
}
else
{
lean_object* v___x_2681_; uint8_t v___x_2682_; 
v___x_2681_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__5));
v___x_2682_ = lean_string_dec_eq(v_str_2674_, v___x_2681_);
if (v___x_2682_ == 0)
{
return v___x_2682_;
}
else
{
return v_suppressElabErrors_2658_;
}
}
}
}
else
{
return v___y_2659_;
}
}
default: 
{
return v___y_2659_;
}
}
}
case 0:
{
lean_object* v_str_2683_; lean_object* v___x_2684_; uint8_t v___x_2685_; 
v_str_2683_ = lean_ctor_get(v_x_2660_, 1);
v___x_2684_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___closed__6));
v___x_2685_ = lean_string_dec_eq(v_str_2683_, v___x_2684_);
if (v___x_2685_ == 0)
{
return v___x_2685_;
}
else
{
return v_suppressElabErrors_2658_;
}
}
default: 
{
return v___y_2659_;
}
}
}
else
{
return v___y_2659_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___boxed(lean_object* v_suppressElabErrors_2686_, lean_object* v___y_2687_, lean_object* v_x_2688_){
_start:
{
uint8_t v_suppressElabErrors_boxed_2689_; uint8_t v___y_34755__boxed_2690_; uint8_t v_res_2691_; lean_object* v_r_2692_; 
v_suppressElabErrors_boxed_2689_ = lean_unbox(v_suppressElabErrors_2686_);
v___y_34755__boxed_2690_ = lean_unbox(v___y_2687_);
v_res_2691_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0(v_suppressElabErrors_boxed_2689_, v___y_34755__boxed_2690_, v_x_2688_);
lean_dec(v_x_2688_);
v_r_2692_ = lean_box(v_res_2691_);
return v_r_2692_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0(void){
_start:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2693_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13, &l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgCompileAndEval___redArg___closed__13);
v___x_2694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2693_);
return v___x_2694_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1(void){
_start:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2695_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0);
v___x_2696_ = lean_unsigned_to_nat(0u);
v___x_2697_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2696_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
lean_ctor_set(v___x_2697_, 2, v___x_2696_);
lean_ctor_set(v___x_2697_, 3, v___x_2696_);
lean_ctor_set(v___x_2697_, 4, v___x_2695_);
lean_ctor_set(v___x_2697_, 5, v___x_2695_);
lean_ctor_set(v___x_2697_, 6, v___x_2695_);
lean_ctor_set(v___x_2697_, 7, v___x_2695_);
lean_ctor_set(v___x_2697_, 8, v___x_2695_);
lean_ctor_set(v___x_2697_, 9, v___x_2695_);
lean_ctor_set(v___x_2697_, 10, v___x_2695_);
return v___x_2697_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2(void){
_start:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
v___x_2698_ = lean_unsigned_to_nat(32u);
v___x_2699_ = lean_mk_empty_array_with_capacity(v___x_2698_);
v___x_2700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2699_);
return v___x_2700_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3(void){
_start:
{
size_t v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2701_ = ((size_t)5ULL);
v___x_2702_ = lean_unsigned_to_nat(0u);
v___x_2703_ = lean_unsigned_to_nat(32u);
v___x_2704_ = lean_mk_empty_array_with_capacity(v___x_2703_);
v___x_2705_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__2);
v___x_2706_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2706_, 0, v___x_2705_);
lean_ctor_set(v___x_2706_, 1, v___x_2704_);
lean_ctor_set(v___x_2706_, 2, v___x_2702_);
lean_ctor_set(v___x_2706_, 3, v___x_2702_);
lean_ctor_set_usize(v___x_2706_, 4, v___x_2701_);
return v___x_2706_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4(void){
_start:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; 
v___x_2707_ = lean_box(1);
v___x_2708_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__3);
v___x_2709_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__0);
v___x_2710_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2709_);
lean_ctor_set(v___x_2710_, 1, v___x_2708_);
lean_ctor_set(v___x_2710_, 2, v___x_2707_);
return v___x_2710_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19(lean_object* v_msgData_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_){
_start:
{
lean_object* v___x_2715_; lean_object* v_toCold_2716_; lean_object* v_env_2717_; lean_object* v_options_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2715_ = lean_st_ref_get(v___y_2713_);
v_toCold_2716_ = lean_ctor_get(v___y_2712_, 0);
v_env_2717_ = lean_ctor_get(v___x_2715_, 0);
lean_inc_ref(v_env_2717_);
lean_dec(v___x_2715_);
v_options_2718_ = lean_ctor_get(v_toCold_2716_, 2);
v___x_2719_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__1);
v___x_2720_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___closed__4);
lean_inc_ref(v_options_2718_);
v___x_2721_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2721_, 0, v_env_2717_);
lean_ctor_set(v___x_2721_, 1, v___x_2719_);
lean_ctor_set(v___x_2721_, 2, v___x_2720_);
lean_ctor_set(v___x_2721_, 3, v_options_2718_);
v___x_2722_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2721_);
lean_ctor_set(v___x_2722_, 1, v_msgData_2711_);
v___x_2723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2722_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19___boxed(lean_object* v_msgData_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19(v_msgData_2724_, v___y_2725_, v___y_2726_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13(lean_object* v_ref_2730_, lean_object* v_msgData_2731_, uint8_t v_severity_2732_, uint8_t v_isSilent_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v___y_2738_; lean_object* v___y_2739_; uint8_t v___y_2740_; lean_object* v___y_2741_; lean_object* v___y_2742_; uint8_t v___y_2743_; lean_object* v___y_2744_; lean_object* v_currNamespace_2745_; lean_object* v_openDecls_2746_; lean_object* v___y_2747_; lean_object* v___y_2773_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2776_; lean_object* v___y_2777_; uint8_t v___y_2778_; uint8_t v___y_2779_; lean_object* v___y_2780_; uint8_t v___y_2781_; lean_object* v___y_2782_; lean_object* v___y_2800_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; uint8_t v___y_2804_; lean_object* v___y_2805_; uint8_t v___y_2806_; lean_object* v___y_2807_; uint8_t v___y_2808_; lean_object* v___y_2809_; lean_object* v___y_2813_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; uint8_t v___y_2817_; lean_object* v___y_2818_; lean_object* v___y_2819_; uint8_t v___y_2820_; uint8_t v___y_2821_; uint8_t v___x_2826_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v___y_2831_; lean_object* v___y_2832_; uint8_t v___y_2833_; lean_object* v___y_2834_; uint8_t v___y_2835_; uint8_t v___y_2836_; uint8_t v___y_2838_; uint8_t v___x_2856_; 
v___x_2826_ = 2;
v___x_2856_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2732_, v___x_2826_);
if (v___x_2856_ == 0)
{
v___y_2838_ = v___x_2856_;
goto v___jp_2837_;
}
else
{
uint8_t v___x_2857_; 
lean_inc_ref(v_msgData_2731_);
v___x_2857_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2731_);
v___y_2838_ = v___x_2857_;
goto v___jp_2837_;
}
v___jp_2737_:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v_env_2752_; lean_object* v_nextMacroScope_2753_; lean_object* v_ngen_2754_; lean_object* v_auxDeclNGen_2755_; lean_object* v_traceState_2756_; lean_object* v_cache_2757_; lean_object* v_messages_2758_; lean_object* v_infoState_2759_; lean_object* v_snapshotTasks_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2771_; 
lean_inc(v_openDecls_2746_);
lean_inc(v_currNamespace_2745_);
v___x_2748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2748_, 0, v_currNamespace_2745_);
lean_ctor_set(v___x_2748_, 1, v_openDecls_2746_);
v___x_2749_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2748_);
lean_ctor_set(v___x_2749_, 1, v___y_2742_);
lean_inc_ref(v___y_2739_);
lean_inc_ref(v___y_2738_);
v___x_2750_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2750_, 0, v___y_2738_);
lean_ctor_set(v___x_2750_, 1, v___y_2744_);
lean_ctor_set(v___x_2750_, 2, v___y_2741_);
lean_ctor_set(v___x_2750_, 3, v___y_2739_);
lean_ctor_set(v___x_2750_, 4, v___x_2749_);
lean_ctor_set_uint8(v___x_2750_, sizeof(void*)*5, v___y_2743_);
lean_ctor_set_uint8(v___x_2750_, sizeof(void*)*5 + 1, v___y_2740_);
lean_ctor_set_uint8(v___x_2750_, sizeof(void*)*5 + 2, v_isSilent_2733_);
v___x_2751_ = lean_st_ref_take(v___y_2747_);
v_env_2752_ = lean_ctor_get(v___x_2751_, 0);
v_nextMacroScope_2753_ = lean_ctor_get(v___x_2751_, 1);
v_ngen_2754_ = lean_ctor_get(v___x_2751_, 2);
v_auxDeclNGen_2755_ = lean_ctor_get(v___x_2751_, 3);
v_traceState_2756_ = lean_ctor_get(v___x_2751_, 4);
v_cache_2757_ = lean_ctor_get(v___x_2751_, 5);
v_messages_2758_ = lean_ctor_get(v___x_2751_, 6);
v_infoState_2759_ = lean_ctor_get(v___x_2751_, 7);
v_snapshotTasks_2760_ = lean_ctor_get(v___x_2751_, 8);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2762_ = v___x_2751_;
v_isShared_2763_ = v_isSharedCheck_2771_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_snapshotTasks_2760_);
lean_inc(v_infoState_2759_);
lean_inc(v_messages_2758_);
lean_inc(v_cache_2757_);
lean_inc(v_traceState_2756_);
lean_inc(v_auxDeclNGen_2755_);
lean_inc(v_ngen_2754_);
lean_inc(v_nextMacroScope_2753_);
lean_inc(v_env_2752_);
lean_dec(v___x_2751_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2771_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2767_; 
v___x_2764_ = lean_box(0);
v___x_2765_ = l_Lean_MessageLog_add(v___x_2750_, v_messages_2758_);
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 6, v___x_2765_);
v___x_2767_ = v___x_2762_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_env_2752_);
lean_ctor_set(v_reuseFailAlloc_2770_, 1, v_nextMacroScope_2753_);
lean_ctor_set(v_reuseFailAlloc_2770_, 2, v_ngen_2754_);
lean_ctor_set(v_reuseFailAlloc_2770_, 3, v_auxDeclNGen_2755_);
lean_ctor_set(v_reuseFailAlloc_2770_, 4, v_traceState_2756_);
lean_ctor_set(v_reuseFailAlloc_2770_, 5, v_cache_2757_);
lean_ctor_set(v_reuseFailAlloc_2770_, 6, v___x_2765_);
lean_ctor_set(v_reuseFailAlloc_2770_, 7, v_infoState_2759_);
lean_ctor_set(v_reuseFailAlloc_2770_, 8, v_snapshotTasks_2760_);
v___x_2767_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2768_ = lean_st_ref_put(v___y_2747_, v___x_2767_);
v___x_2769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2764_);
return v___x_2769_;
}
}
}
v___jp_2772_:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2798_; 
v___x_2783_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2731_);
v___x_2784_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13_spec__19(v___x_2783_, v___y_2734_, v___y_2735_);
v_a_2785_ = lean_ctor_get(v___x_2784_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v___x_2784_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2787_ = v___x_2784_;
v_isShared_2788_ = v_isSharedCheck_2798_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2784_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2798_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
lean_inc_ref_n(v___y_2780_, 2);
v___x_2789_ = l_Lean_FileMap_toPosition(v___y_2780_, v___y_2777_);
lean_dec(v___y_2777_);
v___x_2790_ = l_Lean_FileMap_toPosition(v___y_2780_, v___y_2782_);
lean_dec(v___y_2782_);
v___x_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
v___x_2792_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___closed__0));
if (v___y_2779_ == 0)
{
lean_del_object(v___x_2787_);
lean_dec_ref(v___y_2773_);
v___y_2738_ = v___y_2776_;
v___y_2739_ = v___x_2792_;
v___y_2740_ = v___y_2778_;
v___y_2741_ = v___x_2791_;
v___y_2742_ = v_a_2785_;
v___y_2743_ = v___y_2781_;
v___y_2744_ = v___x_2789_;
v_currNamespace_2745_ = v___y_2775_;
v_openDecls_2746_ = v___y_2774_;
v___y_2747_ = v___y_2735_;
goto v___jp_2737_;
}
else
{
uint8_t v___x_2793_; 
lean_inc(v_a_2785_);
v___x_2793_ = l_Lean_MessageData_hasTag(v___y_2773_, v_a_2785_);
if (v___x_2793_ == 0)
{
lean_object* v___x_2794_; lean_object* v___x_2796_; 
lean_dec_ref_known(v___x_2791_, 1);
lean_dec_ref(v___x_2789_);
lean_dec(v_a_2785_);
v___x_2794_ = lean_box(0);
if (v_isShared_2788_ == 0)
{
lean_ctor_set(v___x_2787_, 0, v___x_2794_);
v___x_2796_ = v___x_2787_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v___x_2794_);
v___x_2796_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
return v___x_2796_;
}
}
else
{
lean_del_object(v___x_2787_);
v___y_2738_ = v___y_2776_;
v___y_2739_ = v___x_2792_;
v___y_2740_ = v___y_2778_;
v___y_2741_ = v___x_2791_;
v___y_2742_ = v_a_2785_;
v___y_2743_ = v___y_2781_;
v___y_2744_ = v___x_2789_;
v_currNamespace_2745_ = v___y_2775_;
v_openDecls_2746_ = v___y_2774_;
v___y_2747_ = v___y_2735_;
goto v___jp_2737_;
}
}
}
}
v___jp_2799_:
{
lean_object* v___x_2810_; 
v___x_2810_ = l_Lean_Syntax_getTailPos_x3f(v___y_2805_, v___y_2808_);
lean_dec(v___y_2805_);
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_inc(v___y_2809_);
v___y_2773_ = v___y_2800_;
v___y_2774_ = v___y_2802_;
v___y_2775_ = v___y_2801_;
v___y_2776_ = v___y_2803_;
v___y_2777_ = v___y_2809_;
v___y_2778_ = v___y_2804_;
v___y_2779_ = v___y_2806_;
v___y_2780_ = v___y_2807_;
v___y_2781_ = v___y_2808_;
v___y_2782_ = v___y_2809_;
goto v___jp_2772_;
}
else
{
lean_object* v_val_2811_; 
v_val_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_val_2811_);
lean_dec_ref_known(v___x_2810_, 1);
v___y_2773_ = v___y_2800_;
v___y_2774_ = v___y_2802_;
v___y_2775_ = v___y_2801_;
v___y_2776_ = v___y_2803_;
v___y_2777_ = v___y_2809_;
v___y_2778_ = v___y_2804_;
v___y_2779_ = v___y_2806_;
v___y_2780_ = v___y_2807_;
v___y_2781_ = v___y_2808_;
v___y_2782_ = v_val_2811_;
goto v___jp_2772_;
}
}
v___jp_2812_:
{
lean_object* v_ref_2822_; lean_object* v___x_2823_; 
v_ref_2822_ = l_Lean_replaceRef(v_ref_2730_, v___y_2819_);
v___x_2823_ = l_Lean_Syntax_getPos_x3f(v_ref_2822_, v___y_2820_);
if (lean_obj_tag(v___x_2823_) == 0)
{
lean_object* v___x_2824_; 
v___x_2824_ = lean_unsigned_to_nat(0u);
v___y_2800_ = v___y_2813_;
v___y_2801_ = v___y_2815_;
v___y_2802_ = v___y_2814_;
v___y_2803_ = v___y_2816_;
v___y_2804_ = v___y_2821_;
v___y_2805_ = v_ref_2822_;
v___y_2806_ = v___y_2817_;
v___y_2807_ = v___y_2818_;
v___y_2808_ = v___y_2820_;
v___y_2809_ = v___x_2824_;
goto v___jp_2799_;
}
else
{
lean_object* v_val_2825_; 
v_val_2825_ = lean_ctor_get(v___x_2823_, 0);
lean_inc(v_val_2825_);
lean_dec_ref_known(v___x_2823_, 1);
v___y_2800_ = v___y_2813_;
v___y_2801_ = v___y_2815_;
v___y_2802_ = v___y_2814_;
v___y_2803_ = v___y_2816_;
v___y_2804_ = v___y_2821_;
v___y_2805_ = v_ref_2822_;
v___y_2806_ = v___y_2817_;
v___y_2807_ = v___y_2818_;
v___y_2808_ = v___y_2820_;
v___y_2809_ = v_val_2825_;
goto v___jp_2799_;
}
}
v___jp_2827_:
{
if (v___y_2836_ == 0)
{
v___y_2813_ = v___y_2829_;
v___y_2814_ = v___y_2831_;
v___y_2815_ = v___y_2830_;
v___y_2816_ = v___y_2828_;
v___y_2817_ = v___y_2833_;
v___y_2818_ = v___y_2832_;
v___y_2819_ = v___y_2834_;
v___y_2820_ = v___y_2835_;
v___y_2821_ = v_severity_2732_;
goto v___jp_2812_;
}
else
{
v___y_2813_ = v___y_2829_;
v___y_2814_ = v___y_2831_;
v___y_2815_ = v___y_2830_;
v___y_2816_ = v___y_2828_;
v___y_2817_ = v___y_2833_;
v___y_2818_ = v___y_2832_;
v___y_2819_ = v___y_2834_;
v___y_2820_ = v___y_2835_;
v___y_2821_ = v___x_2826_;
goto v___jp_2812_;
}
}
v___jp_2837_:
{
if (v___y_2838_ == 0)
{
lean_object* v_toCold_2839_; lean_object* v_ref_2840_; uint8_t v_suppressElabErrors_2841_; lean_object* v_fileName_2842_; lean_object* v_fileMap_2843_; lean_object* v_options_2844_; lean_object* v_currNamespace_2845_; lean_object* v_openDecls_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___f_2849_; uint8_t v___x_2850_; uint8_t v___x_2851_; 
v_toCold_2839_ = lean_ctor_get(v___y_2734_, 0);
v_ref_2840_ = lean_ctor_get(v___y_2734_, 2);
v_suppressElabErrors_2841_ = lean_ctor_get_uint8(v___y_2734_, sizeof(void*)*3 + 1);
v_fileName_2842_ = lean_ctor_get(v_toCold_2839_, 0);
v_fileMap_2843_ = lean_ctor_get(v_toCold_2839_, 1);
v_options_2844_ = lean_ctor_get(v_toCold_2839_, 2);
v_currNamespace_2845_ = lean_ctor_get(v_toCold_2839_, 4);
v_openDecls_2846_ = lean_ctor_get(v_toCold_2839_, 5);
v___x_2847_ = lean_box(v_suppressElabErrors_2841_);
v___x_2848_ = lean_box(v___y_2838_);
v___f_2849_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2849_, 0, v___x_2847_);
lean_closure_set(v___f_2849_, 1, v___x_2848_);
v___x_2850_ = 1;
v___x_2851_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2732_, v___x_2850_);
if (v___x_2851_ == 0)
{
v___y_2828_ = v_fileName_2842_;
v___y_2829_ = v___f_2849_;
v___y_2830_ = v_currNamespace_2845_;
v___y_2831_ = v_openDecls_2846_;
v___y_2832_ = v_fileMap_2843_;
v___y_2833_ = v_suppressElabErrors_2841_;
v___y_2834_ = v_ref_2840_;
v___y_2835_ = v___y_2838_;
v___y_2836_ = v___x_2851_;
goto v___jp_2827_;
}
else
{
lean_object* v___x_2852_; uint8_t v___x_2853_; 
v___x_2852_ = l_Lean_warningAsError;
v___x_2853_ = l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(v_options_2844_, v___x_2852_);
v___y_2828_ = v_fileName_2842_;
v___y_2829_ = v___f_2849_;
v___y_2830_ = v_currNamespace_2845_;
v___y_2831_ = v_openDecls_2846_;
v___y_2832_ = v_fileMap_2843_;
v___y_2833_ = v_suppressElabErrors_2841_;
v___y_2834_ = v_ref_2840_;
v___y_2835_ = v___y_2838_;
v___y_2836_ = v___x_2853_;
goto v___jp_2827_;
}
}
else
{
lean_object* v___x_2854_; lean_object* v___x_2855_; 
lean_dec_ref(v_msgData_2731_);
v___x_2854_ = lean_box(0);
v___x_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2855_, 0, v___x_2854_);
return v___x_2855_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13___boxed(lean_object* v_ref_2858_, lean_object* v_msgData_2859_, lean_object* v_severity_2860_, lean_object* v_isSilent_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
uint8_t v_severity_boxed_2865_; uint8_t v_isSilent_boxed_2866_; lean_object* v_res_2867_; 
v_severity_boxed_2865_ = lean_unbox(v_severity_2860_);
v_isSilent_boxed_2866_ = lean_unbox(v_isSilent_2861_);
v_res_2867_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13(v_ref_2858_, v_msgData_2859_, v_severity_boxed_2865_, v_isSilent_boxed_2866_, v___y_2862_, v___y_2863_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec(v_ref_2858_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9(lean_object* v_ref_2868_, lean_object* v_msgData_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_){
_start:
{
uint8_t v___x_2873_; uint8_t v___x_2874_; lean_object* v___x_2875_; 
v___x_2873_ = 0;
v___x_2874_ = 0;
v___x_2875_ = l_Lean_logAt___at___00Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9_spec__13(v_ref_2868_, v_msgData_2869_, v___x_2873_, v___x_2874_, v___y_2870_, v___y_2871_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9___boxed(lean_object* v_ref_2876_, lean_object* v_msgData_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_){
_start:
{
lean_object* v_res_2881_; 
v_res_2881_ = l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9(v_ref_2876_, v_msgData_2877_, v___y_2878_, v___y_2879_);
lean_dec(v___y_2879_);
lean_dec_ref(v___y_2878_);
lean_dec(v_ref_2876_);
return v_res_2881_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2883_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__0));
v___x_2884_ = l_Lean_stringToMessageData(v___x_2883_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0(lean_object* v___x_2885_, lean_object* v___x_2886_, lean_object* v_ref_2887_, lean_object* v_x_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_){
_start:
{
lean_object* v_ref_2892_; lean_object* v___x_2893_; 
v_ref_2892_ = lean_ctor_get(v___y_2889_, 2);
v___x_2893_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_idbgServer(v___x_2885_, v___x_2886_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v_a_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2907_; 
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2896_ = v___x_2893_;
v_isShared_2897_ = v_isSharedCheck_2907_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_a_2894_);
lean_dec(v___x_2893_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2907_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
if (lean_obj_tag(v_a_2894_) == 1)
{
lean_object* v_val_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
lean_del_object(v___x_2896_);
v_val_2898_ = lean_ctor_get(v_a_2894_, 0);
lean_inc(v_val_2898_);
lean_dec_ref_known(v_a_2894_, 1);
v___x_2899_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___closed__1);
v___x_2900_ = l_Lean_stringToMessageData(v_val_2898_);
v___x_2901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2899_);
lean_ctor_set(v___x_2901_, 1, v___x_2900_);
v___x_2902_ = l_Lean_logInfoAt___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__9(v_ref_2887_, v___x_2901_, v___y_2889_, v___y_2890_);
return v___x_2902_;
}
else
{
lean_object* v___x_2903_; lean_object* v___x_2905_; 
lean_dec(v_a_2894_);
v___x_2903_ = lean_box(0);
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 0, v___x_2903_);
v___x_2905_ = v___x_2896_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v___x_2903_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
}
else
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2919_; 
v_a_2908_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2910_ = v___x_2893_;
v_isShared_2911_ = v_isSharedCheck_2919_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2893_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2919_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2917_; 
v___x_2912_ = lean_io_error_to_string(v_a_2908_);
v___x_2913_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2912_);
v___x_2914_ = l_Lean_MessageData_ofFormat(v___x_2913_);
lean_inc(v_ref_2892_);
v___x_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2915_, 0, v_ref_2892_);
lean_ctor_set(v___x_2915_, 1, v___x_2914_);
if (v_isShared_2911_ == 0)
{
lean_ctor_set(v___x_2910_, 0, v___x_2915_);
v___x_2917_ = v___x_2910_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v___x_2915_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___boxed(lean_object* v___x_2920_, lean_object* v___x_2921_, lean_object* v_ref_2922_, lean_object* v_x_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_){
_start:
{
lean_object* v_res_2927_; 
v_res_2927_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0(v___x_2920_, v___x_2921_, v_ref_2922_, v_x_2923_, v___y_2924_, v___y_2925_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v_ref_2922_);
lean_dec_ref(v___x_2920_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1(lean_object* v___x_2928_, lean_object* v___x_2929_, uint8_t v___x_2930_, uint8_t v___x_2931_, uint8_t v___x_2932_, lean_object* v_fVar_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_){
_start:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
lean_inc_ref(v_fVar_2933_);
v___x_2941_ = l_Lean_mkAppN(v_fVar_2933_, v___x_2928_);
v___x_2942_ = lean_array_push(v___x_2929_, v_fVar_2933_);
v___x_2943_ = l_Lean_Meta_mkLambdaFVars(v___x_2942_, v___x_2941_, v___x_2930_, v___x_2931_, v___x_2930_, v___x_2931_, v___x_2932_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_);
lean_dec_ref(v___x_2942_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1___boxed(lean_object* v___x_2944_, lean_object* v___x_2945_, lean_object* v___x_2946_, lean_object* v___x_2947_, lean_object* v___x_2948_, lean_object* v_fVar_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
uint8_t v___x_35241__boxed_2957_; uint8_t v___x_35242__boxed_2958_; uint8_t v___x_35243__boxed_2959_; lean_object* v_res_2960_; 
v___x_35241__boxed_2957_ = lean_unbox(v___x_2946_);
v___x_35242__boxed_2958_ = lean_unbox(v___x_2947_);
v___x_35243__boxed_2959_ = lean_unbox(v___x_2948_);
v_res_2960_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1(v___x_2944_, v___x_2945_, v___x_35241__boxed_2957_, v___x_35242__boxed_2958_, v___x_35243__boxed_2959_, v_fVar_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
lean_dec(v___y_2951_);
lean_dec_ref(v___y_2950_);
lean_dec_ref(v___x_2944_);
return v_res_2960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2(lean_object* v___x_2961_, lean_object* v_a_2962_, uint8_t v___x_2963_, uint8_t v___x_2964_, uint8_t v___x_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_){
_start:
{
lean_object* v___x_2973_; 
v___x_2973_ = l_Lean_Meta_mkLambdaFVars(v___x_2961_, v_a_2962_, v___x_2963_, v___x_2964_, v___x_2963_, v___x_2964_, v___x_2965_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v___x_2975_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
lean_inc_n(v_a_2974_, 2);
lean_dec_ref_known(v___x_2973_, 1);
lean_inc(v___y_2969_);
v___x_2975_ = lean_infer_type(v_a_2974_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_);
if (lean_obj_tag(v___x_2975_) == 0)
{
lean_object* v_a_2976_; lean_object* v___x_2977_; lean_object* v_a_2978_; lean_object* v___x_2979_; lean_object* v_a_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2988_; 
v_a_2976_ = lean_ctor_get(v___x_2975_, 0);
lean_inc(v_a_2976_);
lean_dec_ref_known(v___x_2975_, 1);
v___x_2977_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_a_2974_, v___y_2969_);
v_a_2978_ = lean_ctor_get(v___x_2977_, 0);
lean_inc(v_a_2978_);
lean_dec_ref(v___x_2977_);
v___x_2979_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_a_2976_, v___y_2969_);
lean_dec(v___y_2969_);
v_a_2980_ = lean_ctor_get(v___x_2979_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2979_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2982_ = v___x_2979_;
v_isShared_2983_ = v_isSharedCheck_2988_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_a_2980_);
lean_dec(v___x_2979_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2988_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2984_; lean_object* v___x_2986_; 
v___x_2984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2984_, 0, v_a_2978_);
lean_ctor_set(v___x_2984_, 1, v_a_2980_);
if (v_isShared_2983_ == 0)
{
lean_ctor_set(v___x_2982_, 0, v___x_2984_);
v___x_2986_ = v___x_2982_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v___x_2984_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
else
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2996_; 
lean_dec(v_a_2974_);
lean_dec(v___y_2969_);
v_a_2989_ = lean_ctor_get(v___x_2975_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2991_ = v___x_2975_;
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2975_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2994_; 
if (v_isShared_2992_ == 0)
{
v___x_2994_ = v___x_2991_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2989_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
}
else
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3004_; 
lean_dec(v___y_2971_);
lean_dec_ref(v___y_2970_);
lean_dec(v___y_2969_);
lean_dec_ref(v___y_2968_);
v_a_2997_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_3004_ == 0)
{
v___x_2999_ = v___x_2973_;
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v___x_2973_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3002_; 
if (v_isShared_3000_ == 0)
{
v___x_3002_ = v___x_2999_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_a_2997_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
return v___x_3002_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2___boxed(lean_object* v___x_3005_, lean_object* v_a_3006_, lean_object* v___x_3007_, lean_object* v___x_3008_, lean_object* v___x_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_){
_start:
{
uint8_t v___x_35283__boxed_3017_; uint8_t v___x_35284__boxed_3018_; uint8_t v___x_35285__boxed_3019_; lean_object* v_res_3020_; 
v___x_35283__boxed_3017_ = lean_unbox(v___x_3007_);
v___x_35284__boxed_3018_ = lean_unbox(v___x_3008_);
v___x_35285__boxed_3019_ = lean_unbox(v___x_3009_);
v_res_3020_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2(v___x_3005_, v_a_3006_, v___x_35283__boxed_3017_, v___x_35284__boxed_3018_, v___x_35285__boxed_3019_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_);
lean_dec(v___y_3011_);
lean_dec_ref(v___y_3010_);
lean_dec_ref(v___x_3005_);
return v_res_3020_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4(void){
_start:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3029_ = lean_box(0);
v___x_3030_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__3));
v___x_3031_ = l_Lean_Expr_const___override(v___x_3030_, v___x_3029_);
return v___x_3031_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7(void){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3036_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0));
v___x_3037_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__6));
v___x_3038_ = l_Lean_Expr_const___override(v___x_3037_, v___x_3036_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10(lean_object* v_as_3039_, size_t v_i_3040_, size_t v_stop_3041_, lean_object* v_b_3042_){
_start:
{
uint8_t v___x_3043_; 
v___x_3043_ = lean_usize_dec_eq(v_i_3040_, v_stop_3041_);
if (v___x_3043_ == 0)
{
lean_object* v___x_3044_; size_t v___x_3045_; size_t v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3044_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4);
v___x_3045_ = ((size_t)1ULL);
v___x_3046_ = lean_usize_sub(v_i_3040_, v___x_3045_);
v___x_3047_ = lean_array_uget_borrowed(v_as_3039_, v___x_3046_);
v___x_3048_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__7);
lean_inc(v___x_3047_);
v___x_3049_ = l_Lean_mkApp3(v___x_3048_, v___x_3044_, v___x_3047_, v_b_3042_);
v_i_3040_ = v___x_3046_;
v_b_3042_ = v___x_3049_;
goto _start;
}
else
{
return v_b_3042_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___boxed(lean_object* v_as_3051_, lean_object* v_i_3052_, lean_object* v_stop_3053_, lean_object* v_b_3054_){
_start:
{
size_t v_i_boxed_3055_; size_t v_stop_boxed_3056_; lean_object* v_res_3057_; 
v_i_boxed_3055_ = lean_unbox_usize(v_i_3052_);
lean_dec(v_i_3052_);
v_stop_boxed_3056_ = lean_unbox_usize(v_stop_3053_);
lean_dec(v_stop_3053_);
v_res_3057_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10(v_as_3051_, v_i_boxed_3055_, v_stop_boxed_3056_, v_b_3054_);
lean_dec_ref(v_as_3051_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7(lean_object* v_init_3058_, lean_object* v_l_3059_){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; uint8_t v___x_3063_; 
v___x_3060_ = lean_array_mk(v_l_3059_);
v___x_3061_ = lean_array_get_size(v___x_3060_);
v___x_3062_ = lean_unsigned_to_nat(0u);
v___x_3063_ = lean_nat_dec_lt(v___x_3062_, v___x_3061_);
if (v___x_3063_ == 0)
{
lean_dec_ref(v___x_3060_);
return v_init_3058_;
}
else
{
size_t v___x_3064_; size_t v___x_3065_; lean_object* v___x_3066_; 
v___x_3064_ = lean_usize_of_nat(v___x_3061_);
v___x_3065_ = ((size_t)0ULL);
v___x_3066_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10(v___x_3060_, v___x_3064_, v___x_3065_, v_init_3058_);
lean_dec_ref(v___x_3060_);
return v___x_3066_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg(lean_object* v_as_3067_, size_t v_sz_3068_, size_t v_i_3069_, lean_object* v_b_3070_){
_start:
{
uint8_t v___x_3072_; 
v___x_3072_ = lean_usize_dec_lt(v_i_3069_, v_sz_3068_);
if (v___x_3072_ == 0)
{
lean_object* v___x_3073_; 
v___x_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3073_, 0, v_b_3070_);
return v___x_3073_;
}
else
{
lean_object* v_snd_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3091_; 
v_snd_3074_ = lean_ctor_get(v_b_3070_, 1);
v_isSharedCheck_3091_ = !lean_is_exclusive(v_b_3070_);
if (v_isSharedCheck_3091_ == 0)
{
lean_object* v_unused_3092_; 
v_unused_3092_ = lean_ctor_get(v_b_3070_, 0);
lean_dec(v_unused_3092_);
v___x_3076_ = v_b_3070_;
v_isShared_3077_ = v_isSharedCheck_3091_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_snd_3074_);
lean_dec(v_b_3070_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3091_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3078_; lean_object* v_a_3080_; lean_object* v_a_3087_; 
v___x_3078_ = lean_box(0);
v_a_3087_ = lean_array_uget_borrowed(v_as_3067_, v_i_3069_);
if (lean_obj_tag(v_a_3087_) == 0)
{
v_a_3080_ = v_snd_3074_;
goto v___jp_3079_;
}
else
{
lean_object* v_val_3088_; uint8_t v___x_3089_; 
v_val_3088_ = lean_ctor_get(v_a_3087_, 0);
v___x_3089_ = l_Lean_LocalDecl_isAuxDecl(v_val_3088_);
if (v___x_3089_ == 0)
{
lean_object* v___x_3090_; 
lean_inc(v_val_3088_);
v___x_3090_ = lean_array_push(v_snd_3074_, v_val_3088_);
v_a_3080_ = v___x_3090_;
goto v___jp_3079_;
}
else
{
v_a_3080_ = v_snd_3074_;
goto v___jp_3079_;
}
}
v___jp_3079_:
{
lean_object* v___x_3082_; 
if (v_isShared_3077_ == 0)
{
lean_ctor_set(v___x_3076_, 1, v_a_3080_);
lean_ctor_set(v___x_3076_, 0, v___x_3078_);
v___x_3082_ = v___x_3076_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v___x_3078_);
lean_ctor_set(v_reuseFailAlloc_3086_, 1, v_a_3080_);
v___x_3082_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
size_t v___x_3083_; size_t v___x_3084_; 
v___x_3083_ = ((size_t)1ULL);
v___x_3084_ = lean_usize_add(v_i_3069_, v___x_3083_);
v_i_3069_ = v___x_3084_;
v_b_3070_ = v___x_3082_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg___boxed(lean_object* v_as_3093_, lean_object* v_sz_3094_, lean_object* v_i_3095_, lean_object* v_b_3096_, lean_object* v___y_3097_){
_start:
{
size_t v_sz_boxed_3098_; size_t v_i_boxed_3099_; lean_object* v_res_3100_; 
v_sz_boxed_3098_ = lean_unbox_usize(v_sz_3094_);
lean_dec(v_sz_3094_);
v_i_boxed_3099_ = lean_unbox_usize(v_i_3095_);
lean_dec(v_i_3095_);
v_res_3100_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg(v_as_3093_, v_sz_boxed_3098_, v_i_boxed_3099_, v_b_3096_);
lean_dec_ref(v_as_3093_);
return v_res_3100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1(lean_object* v_as_3101_, size_t v_sz_3102_, size_t v_i_3103_, lean_object* v_b_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_){
_start:
{
uint8_t v___x_3112_; 
v___x_3112_ = lean_usize_dec_lt(v_i_3103_, v_sz_3102_);
if (v___x_3112_ == 0)
{
lean_object* v___x_3113_; 
v___x_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3113_, 0, v_b_3104_);
return v___x_3113_;
}
else
{
lean_object* v_snd_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3131_; 
v_snd_3114_ = lean_ctor_get(v_b_3104_, 1);
v_isSharedCheck_3131_ = !lean_is_exclusive(v_b_3104_);
if (v_isSharedCheck_3131_ == 0)
{
lean_object* v_unused_3132_; 
v_unused_3132_ = lean_ctor_get(v_b_3104_, 0);
lean_dec(v_unused_3132_);
v___x_3116_ = v_b_3104_;
v_isShared_3117_ = v_isSharedCheck_3131_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_snd_3114_);
lean_dec(v_b_3104_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3131_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
lean_object* v___x_3118_; lean_object* v_a_3120_; lean_object* v_a_3127_; 
v___x_3118_ = lean_box(0);
v_a_3127_ = lean_array_uget_borrowed(v_as_3101_, v_i_3103_);
if (lean_obj_tag(v_a_3127_) == 0)
{
v_a_3120_ = v_snd_3114_;
goto v___jp_3119_;
}
else
{
lean_object* v_val_3128_; uint8_t v___x_3129_; 
v_val_3128_ = lean_ctor_get(v_a_3127_, 0);
v___x_3129_ = l_Lean_LocalDecl_isAuxDecl(v_val_3128_);
if (v___x_3129_ == 0)
{
lean_object* v___x_3130_; 
lean_inc(v_val_3128_);
v___x_3130_ = lean_array_push(v_snd_3114_, v_val_3128_);
v_a_3120_ = v___x_3130_;
goto v___jp_3119_;
}
else
{
v_a_3120_ = v_snd_3114_;
goto v___jp_3119_;
}
}
v___jp_3119_:
{
lean_object* v___x_3122_; 
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 1, v_a_3120_);
lean_ctor_set(v___x_3116_, 0, v___x_3118_);
v___x_3122_ = v___x_3116_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3118_);
lean_ctor_set(v_reuseFailAlloc_3126_, 1, v_a_3120_);
v___x_3122_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
size_t v___x_3123_; size_t v___x_3124_; lean_object* v___x_3125_; 
v___x_3123_ = ((size_t)1ULL);
v___x_3124_ = lean_usize_add(v_i_3103_, v___x_3123_);
v___x_3125_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg(v_as_3101_, v_sz_3102_, v___x_3124_, v___x_3122_);
return v___x_3125_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1___boxed(lean_object* v_as_3133_, lean_object* v_sz_3134_, lean_object* v_i_3135_, lean_object* v_b_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_){
_start:
{
size_t v_sz_boxed_3144_; size_t v_i_boxed_3145_; lean_object* v_res_3146_; 
v_sz_boxed_3144_ = lean_unbox_usize(v_sz_3134_);
lean_dec(v_sz_3134_);
v_i_boxed_3145_ = lean_unbox_usize(v_i_3135_);
lean_dec(v_i_3135_);
v_res_3146_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1(v_as_3133_, v_sz_boxed_3144_, v_i_boxed_3145_, v_b_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_);
lean_dec(v___y_3142_);
lean_dec_ref(v___y_3141_);
lean_dec(v___y_3140_);
lean_dec_ref(v___y_3139_);
lean_dec(v___y_3138_);
lean_dec_ref(v___y_3137_);
lean_dec_ref(v_as_3133_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg(lean_object* v_as_3147_, size_t v_sz_3148_, size_t v_i_3149_, lean_object* v_b_3150_){
_start:
{
uint8_t v___x_3152_; 
v___x_3152_ = lean_usize_dec_lt(v_i_3149_, v_sz_3148_);
if (v___x_3152_ == 0)
{
lean_object* v___x_3153_; 
v___x_3153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3153_, 0, v_b_3150_);
return v___x_3153_;
}
else
{
lean_object* v_snd_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3171_; 
v_snd_3154_ = lean_ctor_get(v_b_3150_, 1);
v_isSharedCheck_3171_ = !lean_is_exclusive(v_b_3150_);
if (v_isSharedCheck_3171_ == 0)
{
lean_object* v_unused_3172_; 
v_unused_3172_ = lean_ctor_get(v_b_3150_, 0);
lean_dec(v_unused_3172_);
v___x_3156_ = v_b_3150_;
v_isShared_3157_ = v_isSharedCheck_3171_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_snd_3154_);
lean_dec(v_b_3150_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3171_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3158_; lean_object* v_a_3160_; lean_object* v_a_3167_; 
v___x_3158_ = lean_box(0);
v_a_3167_ = lean_array_uget_borrowed(v_as_3147_, v_i_3149_);
if (lean_obj_tag(v_a_3167_) == 0)
{
v_a_3160_ = v_snd_3154_;
goto v___jp_3159_;
}
else
{
lean_object* v_val_3168_; uint8_t v___x_3169_; 
v_val_3168_ = lean_ctor_get(v_a_3167_, 0);
v___x_3169_ = l_Lean_LocalDecl_isAuxDecl(v_val_3168_);
if (v___x_3169_ == 0)
{
lean_object* v___x_3170_; 
lean_inc(v_val_3168_);
v___x_3170_ = lean_array_push(v_snd_3154_, v_val_3168_);
v_a_3160_ = v___x_3170_;
goto v___jp_3159_;
}
else
{
v_a_3160_ = v_snd_3154_;
goto v___jp_3159_;
}
}
v___jp_3159_:
{
lean_object* v___x_3162_; 
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 1, v_a_3160_);
lean_ctor_set(v___x_3156_, 0, v___x_3158_);
v___x_3162_ = v___x_3156_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v___x_3158_);
lean_ctor_set(v_reuseFailAlloc_3166_, 1, v_a_3160_);
v___x_3162_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
size_t v___x_3163_; size_t v___x_3164_; 
v___x_3163_ = ((size_t)1ULL);
v___x_3164_ = lean_usize_add(v_i_3149_, v___x_3163_);
v_i_3149_ = v___x_3164_;
v_b_3150_ = v___x_3162_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg___boxed(lean_object* v_as_3173_, lean_object* v_sz_3174_, lean_object* v_i_3175_, lean_object* v_b_3176_, lean_object* v___y_3177_){
_start:
{
size_t v_sz_boxed_3178_; size_t v_i_boxed_3179_; lean_object* v_res_3180_; 
v_sz_boxed_3178_ = lean_unbox_usize(v_sz_3174_);
lean_dec(v_sz_3174_);
v_i_boxed_3179_ = lean_unbox_usize(v_i_3175_);
lean_dec(v_i_3175_);
v_res_3180_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg(v_as_3173_, v_sz_boxed_3178_, v_i_boxed_3179_, v_b_3176_);
lean_dec_ref(v_as_3173_);
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6(lean_object* v_as_3181_, size_t v_sz_3182_, size_t v_i_3183_, lean_object* v_b_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_){
_start:
{
uint8_t v___x_3192_; 
v___x_3192_ = lean_usize_dec_lt(v_i_3183_, v_sz_3182_);
if (v___x_3192_ == 0)
{
lean_object* v___x_3193_; 
v___x_3193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3193_, 0, v_b_3184_);
return v___x_3193_;
}
else
{
lean_object* v_snd_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3211_; 
v_snd_3194_ = lean_ctor_get(v_b_3184_, 1);
v_isSharedCheck_3211_ = !lean_is_exclusive(v_b_3184_);
if (v_isSharedCheck_3211_ == 0)
{
lean_object* v_unused_3212_; 
v_unused_3212_ = lean_ctor_get(v_b_3184_, 0);
lean_dec(v_unused_3212_);
v___x_3196_ = v_b_3184_;
v_isShared_3197_ = v_isSharedCheck_3211_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_snd_3194_);
lean_dec(v_b_3184_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3211_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3198_; lean_object* v_a_3200_; lean_object* v_a_3207_; 
v___x_3198_ = lean_box(0);
v_a_3207_ = lean_array_uget_borrowed(v_as_3181_, v_i_3183_);
if (lean_obj_tag(v_a_3207_) == 0)
{
v_a_3200_ = v_snd_3194_;
goto v___jp_3199_;
}
else
{
lean_object* v_val_3208_; uint8_t v___x_3209_; 
v_val_3208_ = lean_ctor_get(v_a_3207_, 0);
v___x_3209_ = l_Lean_LocalDecl_isAuxDecl(v_val_3208_);
if (v___x_3209_ == 0)
{
lean_object* v___x_3210_; 
lean_inc(v_val_3208_);
v___x_3210_ = lean_array_push(v_snd_3194_, v_val_3208_);
v_a_3200_ = v___x_3210_;
goto v___jp_3199_;
}
else
{
v_a_3200_ = v_snd_3194_;
goto v___jp_3199_;
}
}
v___jp_3199_:
{
lean_object* v___x_3202_; 
if (v_isShared_3197_ == 0)
{
lean_ctor_set(v___x_3196_, 1, v_a_3200_);
lean_ctor_set(v___x_3196_, 0, v___x_3198_);
v___x_3202_ = v___x_3196_;
goto v_reusejp_3201_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v___x_3198_);
lean_ctor_set(v_reuseFailAlloc_3206_, 1, v_a_3200_);
v___x_3202_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3201_;
}
v_reusejp_3201_:
{
size_t v___x_3203_; size_t v___x_3204_; lean_object* v___x_3205_; 
v___x_3203_ = ((size_t)1ULL);
v___x_3204_ = lean_usize_add(v_i_3183_, v___x_3203_);
v___x_3205_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg(v_as_3181_, v_sz_3182_, v___x_3204_, v___x_3202_);
return v___x_3205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6___boxed(lean_object* v_as_3213_, lean_object* v_sz_3214_, lean_object* v_i_3215_, lean_object* v_b_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_){
_start:
{
size_t v_sz_boxed_3224_; size_t v_i_boxed_3225_; lean_object* v_res_3226_; 
v_sz_boxed_3224_ = lean_unbox_usize(v_sz_3214_);
lean_dec(v_sz_3214_);
v_i_boxed_3225_ = lean_unbox_usize(v_i_3215_);
lean_dec(v_i_3215_);
v_res_3226_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6(v_as_3213_, v_sz_boxed_3224_, v_i_boxed_3225_, v_b_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_, v___y_3222_);
lean_dec(v___y_3222_);
lean_dec_ref(v___y_3221_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3217_);
lean_dec_ref(v_as_3213_);
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0(lean_object* v_init_3227_, lean_object* v_n_3228_, lean_object* v_b_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_){
_start:
{
if (lean_obj_tag(v_n_3228_) == 0)
{
lean_object* v_cs_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; size_t v_sz_3240_; size_t v___x_3241_; lean_object* v___x_3242_; 
v_cs_3237_ = lean_ctor_get(v_n_3228_, 0);
v___x_3238_ = lean_box(0);
v___x_3239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3238_);
lean_ctor_set(v___x_3239_, 1, v_b_3229_);
v_sz_3240_ = lean_array_size(v_cs_3237_);
v___x_3241_ = ((size_t)0ULL);
v___x_3242_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5(v_init_3227_, v_cs_3237_, v_sz_3240_, v___x_3241_, v___x_3239_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_);
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3257_; 
v_a_3243_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3257_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3245_ = v___x_3242_;
v_isShared_3246_ = v_isSharedCheck_3257_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3242_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3257_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v_fst_3247_; 
v_fst_3247_ = lean_ctor_get(v_a_3243_, 0);
if (lean_obj_tag(v_fst_3247_) == 0)
{
lean_object* v_snd_3248_; lean_object* v___x_3249_; lean_object* v___x_3251_; 
v_snd_3248_ = lean_ctor_get(v_a_3243_, 1);
lean_inc(v_snd_3248_);
lean_dec(v_a_3243_);
v___x_3249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3249_, 0, v_snd_3248_);
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 0, v___x_3249_);
v___x_3251_ = v___x_3245_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v___x_3249_);
v___x_3251_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
return v___x_3251_;
}
}
else
{
lean_object* v_val_3253_; lean_object* v___x_3255_; 
lean_inc_ref(v_fst_3247_);
lean_dec(v_a_3243_);
v_val_3253_ = lean_ctor_get(v_fst_3247_, 0);
lean_inc(v_val_3253_);
lean_dec_ref_known(v_fst_3247_, 1);
if (v_isShared_3246_ == 0)
{
lean_ctor_set(v___x_3245_, 0, v_val_3253_);
v___x_3255_ = v___x_3245_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_val_3253_);
v___x_3255_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
return v___x_3255_;
}
}
}
}
else
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3265_; 
v_a_3258_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3260_ = v___x_3242_;
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3242_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v___x_3263_; 
if (v_isShared_3261_ == 0)
{
v___x_3263_ = v___x_3260_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v_a_3258_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
}
}
else
{
lean_object* v_vs_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; size_t v_sz_3269_; size_t v___x_3270_; lean_object* v___x_3271_; 
v_vs_3266_ = lean_ctor_get(v_n_3228_, 0);
v___x_3267_ = lean_box(0);
v___x_3268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3267_);
lean_ctor_set(v___x_3268_, 1, v_b_3229_);
v_sz_3269_ = lean_array_size(v_vs_3266_);
v___x_3270_ = ((size_t)0ULL);
v___x_3271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6(v_vs_3266_, v_sz_3269_, v___x_3270_, v___x_3268_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_);
if (lean_obj_tag(v___x_3271_) == 0)
{
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3286_; 
v_a_3272_ = lean_ctor_get(v___x_3271_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3274_ = v___x_3271_;
v_isShared_3275_ = v_isSharedCheck_3286_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v___x_3271_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3286_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v_fst_3276_; 
v_fst_3276_ = lean_ctor_get(v_a_3272_, 0);
if (lean_obj_tag(v_fst_3276_) == 0)
{
lean_object* v_snd_3277_; lean_object* v___x_3278_; lean_object* v___x_3280_; 
v_snd_3277_ = lean_ctor_get(v_a_3272_, 1);
lean_inc(v_snd_3277_);
lean_dec(v_a_3272_);
v___x_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3278_, 0, v_snd_3277_);
if (v_isShared_3275_ == 0)
{
lean_ctor_set(v___x_3274_, 0, v___x_3278_);
v___x_3280_ = v___x_3274_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v___x_3278_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
return v___x_3280_;
}
}
else
{
lean_object* v_val_3282_; lean_object* v___x_3284_; 
lean_inc_ref(v_fst_3276_);
lean_dec(v_a_3272_);
v_val_3282_ = lean_ctor_get(v_fst_3276_, 0);
lean_inc(v_val_3282_);
lean_dec_ref_known(v_fst_3276_, 1);
if (v_isShared_3275_ == 0)
{
lean_ctor_set(v___x_3274_, 0, v_val_3282_);
v___x_3284_ = v___x_3274_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_val_3282_);
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
else
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3294_; 
v_a_3287_ = lean_ctor_get(v___x_3271_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3271_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3289_ = v___x_3271_;
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v___x_3271_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3292_; 
if (v_isShared_3290_ == 0)
{
v___x_3292_ = v___x_3289_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3287_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5(lean_object* v_init_3295_, lean_object* v_as_3296_, size_t v_sz_3297_, size_t v_i_3298_, lean_object* v_b_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_){
_start:
{
uint8_t v___x_3307_; 
v___x_3307_ = lean_usize_dec_lt(v_i_3298_, v_sz_3297_);
if (v___x_3307_ == 0)
{
lean_object* v___x_3308_; 
v___x_3308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3308_, 0, v_b_3299_);
return v___x_3308_;
}
else
{
lean_object* v_snd_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3343_; 
v_snd_3309_ = lean_ctor_get(v_b_3299_, 1);
v_isSharedCheck_3343_ = !lean_is_exclusive(v_b_3299_);
if (v_isSharedCheck_3343_ == 0)
{
lean_object* v_unused_3344_; 
v_unused_3344_ = lean_ctor_get(v_b_3299_, 0);
lean_dec(v_unused_3344_);
v___x_3311_ = v_b_3299_;
v_isShared_3312_ = v_isSharedCheck_3343_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_snd_3309_);
lean_dec(v_b_3299_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3343_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3313_; lean_object* v_a_3314_; lean_object* v___x_3315_; 
v___x_3313_ = lean_box(0);
v_a_3314_ = lean_array_uget_borrowed(v_as_3296_, v_i_3298_);
lean_inc(v_snd_3309_);
v___x_3315_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0(v_init_3295_, v_a_3314_, v_snd_3309_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v_a_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3334_; 
v_a_3316_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3318_ = v___x_3315_;
v_isShared_3319_ = v_isSharedCheck_3334_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_a_3316_);
lean_dec(v___x_3315_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3334_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
if (lean_obj_tag(v_a_3316_) == 0)
{
lean_object* v___x_3320_; lean_object* v___x_3322_; 
v___x_3320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3320_, 0, v_a_3316_);
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 0, v___x_3320_);
v___x_3322_ = v___x_3311_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v___x_3320_);
lean_ctor_set(v_reuseFailAlloc_3326_, 1, v_snd_3309_);
v___x_3322_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
lean_object* v___x_3324_; 
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 0, v___x_3322_);
v___x_3324_ = v___x_3318_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v___x_3322_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
else
{
lean_object* v_a_3327_; lean_object* v___x_3329_; 
lean_del_object(v___x_3318_);
lean_dec(v_snd_3309_);
v_a_3327_ = lean_ctor_get(v_a_3316_, 0);
lean_inc(v_a_3327_);
lean_dec_ref_known(v_a_3316_, 1);
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 1, v_a_3327_);
lean_ctor_set(v___x_3311_, 0, v___x_3313_);
v___x_3329_ = v___x_3311_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v___x_3313_);
lean_ctor_set(v_reuseFailAlloc_3333_, 1, v_a_3327_);
v___x_3329_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
size_t v___x_3330_; size_t v___x_3331_; 
v___x_3330_ = ((size_t)1ULL);
v___x_3331_ = lean_usize_add(v_i_3298_, v___x_3330_);
v_i_3298_ = v___x_3331_;
v_b_3299_ = v___x_3329_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3342_; 
lean_del_object(v___x_3311_);
lean_dec(v_snd_3309_);
v_a_3335_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3337_ = v___x_3315_;
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_dec(v___x_3315_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5___boxed(lean_object* v_init_3345_, lean_object* v_as_3346_, lean_object* v_sz_3347_, lean_object* v_i_3348_, lean_object* v_b_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_){
_start:
{
size_t v_sz_boxed_3357_; size_t v_i_boxed_3358_; lean_object* v_res_3359_; 
v_sz_boxed_3357_ = lean_unbox_usize(v_sz_3347_);
lean_dec(v_sz_3347_);
v_i_boxed_3358_ = lean_unbox_usize(v_i_3348_);
lean_dec(v_i_3348_);
v_res_3359_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__5(v_init_3345_, v_as_3346_, v_sz_boxed_3357_, v_i_boxed_3358_, v_b_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
lean_dec(v___y_3355_);
lean_dec_ref(v___y_3354_);
lean_dec(v___y_3353_);
lean_dec_ref(v___y_3352_);
lean_dec(v___y_3351_);
lean_dec_ref(v___y_3350_);
lean_dec_ref(v_as_3346_);
lean_dec_ref(v_init_3345_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0___boxed(lean_object* v_init_3360_, lean_object* v_n_3361_, lean_object* v_b_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_){
_start:
{
lean_object* v_res_3370_; 
v_res_3370_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0(v_init_3360_, v_n_3361_, v_b_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_);
lean_dec(v___y_3368_);
lean_dec_ref(v___y_3367_);
lean_dec(v___y_3366_);
lean_dec_ref(v___y_3365_);
lean_dec(v___y_3364_);
lean_dec_ref(v___y_3363_);
lean_dec_ref(v_n_3361_);
lean_dec_ref(v_init_3360_);
return v_res_3370_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0(lean_object* v_t_3371_, lean_object* v_init_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_){
_start:
{
lean_object* v_root_3380_; lean_object* v_tail_3381_; lean_object* v___x_3382_; 
v_root_3380_ = lean_ctor_get(v_t_3371_, 0);
v_tail_3381_ = lean_ctor_get(v_t_3371_, 1);
lean_inc_ref(v_init_3372_);
v___x_3382_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0(v_init_3372_, v_root_3380_, v_init_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_);
lean_dec_ref(v_init_3372_);
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v_a_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3419_; 
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3385_ = v___x_3382_;
v_isShared_3386_ = v_isSharedCheck_3419_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_a_3383_);
lean_dec(v___x_3382_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3419_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
if (lean_obj_tag(v_a_3383_) == 0)
{
lean_object* v_a_3387_; lean_object* v___x_3389_; 
v_a_3387_ = lean_ctor_get(v_a_3383_, 0);
lean_inc(v_a_3387_);
lean_dec_ref_known(v_a_3383_, 1);
if (v_isShared_3386_ == 0)
{
lean_ctor_set(v___x_3385_, 0, v_a_3387_);
v___x_3389_ = v___x_3385_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v_a_3387_);
v___x_3389_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
return v___x_3389_;
}
}
else
{
lean_object* v_a_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; size_t v_sz_3394_; size_t v___x_3395_; lean_object* v___x_3396_; 
lean_del_object(v___x_3385_);
v_a_3391_ = lean_ctor_get(v_a_3383_, 0);
lean_inc(v_a_3391_);
lean_dec_ref_known(v_a_3383_, 1);
v___x_3392_ = lean_box(0);
v___x_3393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3392_);
lean_ctor_set(v___x_3393_, 1, v_a_3391_);
v_sz_3394_ = lean_array_size(v_tail_3381_);
v___x_3395_ = ((size_t)0ULL);
v___x_3396_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1(v_tail_3381_, v_sz_3394_, v___x_3395_, v___x_3393_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_);
if (lean_obj_tag(v___x_3396_) == 0)
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3410_; 
v_a_3397_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3399_ = v___x_3396_;
v_isShared_3400_ = v_isSharedCheck_3410_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3396_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3410_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v_fst_3401_; 
v_fst_3401_ = lean_ctor_get(v_a_3397_, 0);
if (lean_obj_tag(v_fst_3401_) == 0)
{
lean_object* v_snd_3402_; lean_object* v___x_3404_; 
v_snd_3402_ = lean_ctor_get(v_a_3397_, 1);
lean_inc(v_snd_3402_);
lean_dec(v_a_3397_);
if (v_isShared_3400_ == 0)
{
lean_ctor_set(v___x_3399_, 0, v_snd_3402_);
v___x_3404_ = v___x_3399_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_snd_3402_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
else
{
lean_object* v_val_3406_; lean_object* v___x_3408_; 
lean_inc_ref(v_fst_3401_);
lean_dec(v_a_3397_);
v_val_3406_ = lean_ctor_get(v_fst_3401_, 0);
lean_inc(v_val_3406_);
lean_dec_ref_known(v_fst_3401_, 1);
if (v_isShared_3400_ == 0)
{
lean_ctor_set(v___x_3399_, 0, v_val_3406_);
v___x_3408_ = v___x_3399_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_val_3406_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
v_a_3411_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3396_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3396_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
}
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
v_a_3420_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3382_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3382_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0___boxed(lean_object* v_t_3428_, lean_object* v_init_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
lean_object* v_res_3437_; 
v_res_3437_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0(v_t_3428_, v_init_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_);
lean_dec(v___y_3435_);
lean_dec_ref(v___y_3434_);
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3431_);
lean_dec_ref(v___y_3430_);
lean_dec_ref(v_t_3428_);
return v_res_3437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1(size_t v_sz_3438_, size_t v_i_3439_, lean_object* v_bs_3440_){
_start:
{
uint8_t v___x_3441_; 
v___x_3441_ = lean_usize_dec_lt(v_i_3439_, v_sz_3438_);
if (v___x_3441_ == 0)
{
return v_bs_3440_;
}
else
{
lean_object* v_v_3442_; lean_object* v___x_3443_; lean_object* v_bs_x27_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; size_t v___x_3447_; size_t v___x_3448_; lean_object* v___x_3449_; 
v_v_3442_ = lean_array_uget(v_bs_3440_, v_i_3439_);
v___x_3443_ = lean_unsigned_to_nat(0u);
v_bs_x27_3444_ = lean_array_uset(v_bs_3440_, v_i_3439_, v___x_3443_);
v___x_3445_ = l_Lean_LocalDecl_fvarId(v_v_3442_);
lean_dec(v_v_3442_);
v___x_3446_ = l_Lean_mkFVar(v___x_3445_);
v___x_3447_ = ((size_t)1ULL);
v___x_3448_ = lean_usize_add(v_i_3439_, v___x_3447_);
v___x_3449_ = lean_array_uset(v_bs_x27_3444_, v_i_3439_, v___x_3446_);
v_i_3439_ = v___x_3448_;
v_bs_3440_ = v___x_3449_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1___boxed(lean_object* v_sz_3451_, lean_object* v_i_3452_, lean_object* v_bs_3453_){
_start:
{
size_t v_sz_boxed_3454_; size_t v_i_boxed_3455_; lean_object* v_res_3456_; 
v_sz_boxed_3454_ = lean_unbox_usize(v_sz_3451_);
lean_dec(v_sz_3451_);
v_i_boxed_3455_ = lean_unbox_usize(v_i_3452_);
lean_dec(v_i_3452_);
v_res_3456_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1(v_sz_boxed_3454_, v_i_boxed_3455_, v_bs_3453_);
return v_res_3456_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3462_ = lean_box(0);
v___x_3463_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__1));
v___x_3464_ = l_Lean_Expr_const___override(v___x_3463_, v___x_3462_);
return v___x_3464_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6(void){
_start:
{
lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; 
v___x_3470_ = lean_box(0);
v___x_3471_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__5));
v___x_3472_ = l_Lean_mkConst(v___x_3471_, v___x_3470_);
return v___x_3472_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9(void){
_start:
{
lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; 
v___x_3477_ = lean_box(0);
v___x_3478_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__8));
v___x_3479_ = l_Lean_mkConst(v___x_3478_, v___x_3477_);
return v___x_3479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg(size_t v_sz_3480_, size_t v_i_3481_, lean_object* v_bs_3482_){
_start:
{
uint8_t v___x_3484_; 
v___x_3484_ = lean_usize_dec_lt(v_i_3481_, v_sz_3480_);
if (v___x_3484_ == 0)
{
lean_object* v___x_3485_; 
v___x_3485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3485_, 0, v_bs_3482_);
return v___x_3485_;
}
else
{
lean_object* v_v_3486_; lean_object* v_module_3487_; uint8_t v_importAll_3488_; uint8_t v_isExported_3489_; uint8_t v_isMeta_3490_; lean_object* v___x_3491_; lean_object* v_bs_x27_3492_; lean_object* v___x_3493_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3516_; 
v_v_3486_ = lean_array_uget_borrowed(v_bs_3482_, v_i_3481_);
v_module_3487_ = lean_ctor_get(v_v_3486_, 0);
lean_inc(v_module_3487_);
v_importAll_3488_ = lean_ctor_get_uint8(v_v_3486_, sizeof(void*)*1);
v_isExported_3489_ = lean_ctor_get_uint8(v_v_3486_, sizeof(void*)*1 + 1);
v_isMeta_3490_ = lean_ctor_get_uint8(v_v_3486_, sizeof(void*)*1 + 2);
v___x_3491_ = lean_unsigned_to_nat(0u);
v_bs_x27_3492_ = lean_array_uset(v_bs_3482_, v_i_3481_, v___x_3491_);
v___x_3493_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_module_3487_);
if (v_importAll_3488_ == 0)
{
lean_object* v___x_3519_; 
v___x_3519_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6);
v___y_3516_ = v___x_3519_;
goto v___jp_3515_;
}
else
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9);
v___y_3516_ = v___x_3520_;
goto v___jp_3515_;
}
v___jp_3494_:
{
lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; size_t v___x_3506_; size_t v___x_3507_; lean_object* v___x_3508_; 
v___x_3498_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__2);
v___x_3499_ = lean_unsigned_to_nat(4u);
v___x_3500_ = lean_mk_empty_array_with_capacity(v___x_3499_);
v___x_3501_ = lean_array_push(v___x_3500_, v___x_3493_);
lean_inc_ref(v___y_3495_);
v___x_3502_ = lean_array_push(v___x_3501_, v___y_3495_);
lean_inc_ref(v___y_3496_);
v___x_3503_ = lean_array_push(v___x_3502_, v___y_3496_);
lean_inc_ref(v___y_3497_);
v___x_3504_ = lean_array_push(v___x_3503_, v___y_3497_);
v___x_3505_ = l_Lean_mkAppN(v___x_3498_, v___x_3504_);
lean_dec_ref(v___x_3504_);
v___x_3506_ = ((size_t)1ULL);
v___x_3507_ = lean_usize_add(v_i_3481_, v___x_3506_);
v___x_3508_ = lean_array_uset(v_bs_x27_3492_, v_i_3481_, v___x_3505_);
v_i_3481_ = v___x_3507_;
v_bs_3482_ = v___x_3508_;
goto _start;
}
v___jp_3510_:
{
if (v_isMeta_3490_ == 0)
{
lean_object* v___x_3513_; 
v___x_3513_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6);
v___y_3495_ = v___y_3511_;
v___y_3496_ = v___y_3512_;
v___y_3497_ = v___x_3513_;
goto v___jp_3494_;
}
else
{
lean_object* v___x_3514_; 
v___x_3514_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9);
v___y_3495_ = v___y_3511_;
v___y_3496_ = v___y_3512_;
v___y_3497_ = v___x_3514_;
goto v___jp_3494_;
}
}
v___jp_3515_:
{
if (v_isExported_3489_ == 0)
{
lean_object* v___x_3517_; 
v___x_3517_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__6);
v___y_3511_ = v___y_3516_;
v___y_3512_ = v___x_3517_;
goto v___jp_3510_;
}
else
{
lean_object* v___x_3518_; 
v___x_3518_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___closed__9);
v___y_3511_ = v___y_3516_;
v___y_3512_ = v___x_3518_;
goto v___jp_3510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg___boxed(lean_object* v_sz_3521_, lean_object* v_i_3522_, lean_object* v_bs_3523_, lean_object* v___y_3524_){
_start:
{
size_t v_sz_boxed_3525_; size_t v_i_boxed_3526_; lean_object* v_res_3527_; 
v_sz_boxed_3525_ = lean_unbox_usize(v_sz_3521_);
lean_dec(v_sz_3521_);
v_i_boxed_3526_ = lean_unbox_usize(v_i_3522_);
lean_dec(v_i_3522_);
v_res_3527_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg(v_sz_boxed_3525_, v_i_boxed_3526_, v_bs_3523_);
return v_res_3527_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20___redArg(lean_object* v_x_3528_, lean_object* v_x_3529_, lean_object* v_x_3530_, lean_object* v_x_3531_){
_start:
{
lean_object* v_ks_3532_; lean_object* v_vs_3533_; lean_object* v___x_3535_; uint8_t v_isShared_3536_; uint8_t v_isSharedCheck_3557_; 
v_ks_3532_ = lean_ctor_get(v_x_3528_, 0);
v_vs_3533_ = lean_ctor_get(v_x_3528_, 1);
v_isSharedCheck_3557_ = !lean_is_exclusive(v_x_3528_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3535_ = v_x_3528_;
v_isShared_3536_ = v_isSharedCheck_3557_;
goto v_resetjp_3534_;
}
else
{
lean_inc(v_vs_3533_);
lean_inc(v_ks_3532_);
lean_dec(v_x_3528_);
v___x_3535_ = lean_box(0);
v_isShared_3536_ = v_isSharedCheck_3557_;
goto v_resetjp_3534_;
}
v_resetjp_3534_:
{
lean_object* v___x_3537_; uint8_t v___x_3538_; 
v___x_3537_ = lean_array_get_size(v_ks_3532_);
v___x_3538_ = lean_nat_dec_lt(v_x_3529_, v___x_3537_);
if (v___x_3538_ == 0)
{
lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3542_; 
lean_dec(v_x_3529_);
v___x_3539_ = lean_array_push(v_ks_3532_, v_x_3530_);
v___x_3540_ = lean_array_push(v_vs_3533_, v_x_3531_);
if (v_isShared_3536_ == 0)
{
lean_ctor_set(v___x_3535_, 1, v___x_3540_);
lean_ctor_set(v___x_3535_, 0, v___x_3539_);
v___x_3542_ = v___x_3535_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v___x_3539_);
lean_ctor_set(v_reuseFailAlloc_3543_, 1, v___x_3540_);
v___x_3542_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
return v___x_3542_;
}
}
else
{
lean_object* v_k_x27_3544_; uint8_t v___x_3545_; 
v_k_x27_3544_ = lean_array_fget_borrowed(v_ks_3532_, v_x_3529_);
v___x_3545_ = l_Lean_instBEqFVarId_beq(v_x_3530_, v_k_x27_3544_);
if (v___x_3545_ == 0)
{
lean_object* v___x_3547_; 
if (v_isShared_3536_ == 0)
{
v___x_3547_ = v___x_3535_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v_ks_3532_);
lean_ctor_set(v_reuseFailAlloc_3551_, 1, v_vs_3533_);
v___x_3547_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3548_ = lean_unsigned_to_nat(1u);
v___x_3549_ = lean_nat_add(v_x_3529_, v___x_3548_);
lean_dec(v_x_3529_);
v_x_3528_ = v___x_3547_;
v_x_3529_ = v___x_3549_;
goto _start;
}
}
else
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3555_; 
v___x_3552_ = lean_array_fset(v_ks_3532_, v_x_3529_, v_x_3530_);
v___x_3553_ = lean_array_fset(v_vs_3533_, v_x_3529_, v_x_3531_);
lean_dec(v_x_3529_);
if (v_isShared_3536_ == 0)
{
lean_ctor_set(v___x_3535_, 1, v___x_3553_);
lean_ctor_set(v___x_3535_, 0, v___x_3552_);
v___x_3555_ = v___x_3535_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v___x_3552_);
lean_ctor_set(v_reuseFailAlloc_3556_, 1, v___x_3553_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
return v___x_3555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12___redArg(lean_object* v_n_3558_, lean_object* v_k_3559_, lean_object* v_v_3560_){
_start:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; 
v___x_3561_ = lean_unsigned_to_nat(0u);
v___x_3562_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20___redArg(v_n_3558_, v___x_3561_, v_k_3559_, v_v_3560_);
return v___x_3562_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3563_; 
v___x_3563_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3563_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(lean_object* v_x_3564_, size_t v_x_3565_, size_t v_x_3566_, lean_object* v_x_3567_, lean_object* v_x_3568_){
_start:
{
if (lean_obj_tag(v_x_3564_) == 0)
{
lean_object* v_es_3569_; size_t v___x_3570_; size_t v___x_3571_; lean_object* v_j_3572_; lean_object* v___x_3573_; uint8_t v___x_3574_; 
v_es_3569_ = lean_ctor_get(v_x_3564_, 0);
v___x_3570_ = ((size_t)31ULL);
v___x_3571_ = lean_usize_land(v_x_3565_, v___x_3570_);
v_j_3572_ = lean_usize_to_nat(v___x_3571_);
v___x_3573_ = lean_array_get_size(v_es_3569_);
v___x_3574_ = lean_nat_dec_lt(v_j_3572_, v___x_3573_);
if (v___x_3574_ == 0)
{
lean_dec(v_j_3572_);
lean_dec(v_x_3568_);
lean_dec(v_x_3567_);
return v_x_3564_;
}
else
{
lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3613_; 
lean_inc_ref(v_es_3569_);
v_isSharedCheck_3613_ = !lean_is_exclusive(v_x_3564_);
if (v_isSharedCheck_3613_ == 0)
{
lean_object* v_unused_3614_; 
v_unused_3614_ = lean_ctor_get(v_x_3564_, 0);
lean_dec(v_unused_3614_);
v___x_3576_ = v_x_3564_;
v_isShared_3577_ = v_isSharedCheck_3613_;
goto v_resetjp_3575_;
}
else
{
lean_dec(v_x_3564_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3613_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v_v_3578_; lean_object* v___x_3579_; lean_object* v_xs_x27_3580_; lean_object* v___y_3582_; 
v_v_3578_ = lean_array_fget(v_es_3569_, v_j_3572_);
v___x_3579_ = lean_box(0);
v_xs_x27_3580_ = lean_array_fset(v_es_3569_, v_j_3572_, v___x_3579_);
switch(lean_obj_tag(v_v_3578_))
{
case 0:
{
lean_object* v_key_3587_; lean_object* v_val_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3598_; 
v_key_3587_ = lean_ctor_get(v_v_3578_, 0);
v_val_3588_ = lean_ctor_get(v_v_3578_, 1);
v_isSharedCheck_3598_ = !lean_is_exclusive(v_v_3578_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3590_ = v_v_3578_;
v_isShared_3591_ = v_isSharedCheck_3598_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_val_3588_);
lean_inc(v_key_3587_);
lean_dec(v_v_3578_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3598_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
uint8_t v___x_3592_; 
v___x_3592_ = l_Lean_instBEqFVarId_beq(v_x_3567_, v_key_3587_);
if (v___x_3592_ == 0)
{
lean_object* v___x_3593_; lean_object* v___x_3594_; 
lean_del_object(v___x_3590_);
v___x_3593_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3587_, v_val_3588_, v_x_3567_, v_x_3568_);
v___x_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3593_);
v___y_3582_ = v___x_3594_;
goto v___jp_3581_;
}
else
{
lean_object* v___x_3596_; 
lean_dec(v_val_3588_);
lean_dec(v_key_3587_);
if (v_isShared_3591_ == 0)
{
lean_ctor_set(v___x_3590_, 1, v_x_3568_);
lean_ctor_set(v___x_3590_, 0, v_x_3567_);
v___x_3596_ = v___x_3590_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_x_3567_);
lean_ctor_set(v_reuseFailAlloc_3597_, 1, v_x_3568_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
v___y_3582_ = v___x_3596_;
goto v___jp_3581_;
}
}
}
}
case 1:
{
lean_object* v_node_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3611_; 
v_node_3599_ = lean_ctor_get(v_v_3578_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v_v_3578_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3601_ = v_v_3578_;
v_isShared_3602_ = v_isSharedCheck_3611_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_node_3599_);
lean_dec(v_v_3578_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3611_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
size_t v___x_3603_; size_t v___x_3604_; size_t v___x_3605_; size_t v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3609_; 
v___x_3603_ = ((size_t)5ULL);
v___x_3604_ = lean_usize_shift_right(v_x_3565_, v___x_3603_);
v___x_3605_ = ((size_t)1ULL);
v___x_3606_ = lean_usize_add(v_x_3566_, v___x_3605_);
v___x_3607_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(v_node_3599_, v___x_3604_, v___x_3606_, v_x_3567_, v_x_3568_);
if (v_isShared_3602_ == 0)
{
lean_ctor_set(v___x_3601_, 0, v___x_3607_);
v___x_3609_ = v___x_3601_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3607_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
v___y_3582_ = v___x_3609_;
goto v___jp_3581_;
}
}
}
default: 
{
lean_object* v___x_3612_; 
v___x_3612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3612_, 0, v_x_3567_);
lean_ctor_set(v___x_3612_, 1, v_x_3568_);
v___y_3582_ = v___x_3612_;
goto v___jp_3581_;
}
}
v___jp_3581_:
{
lean_object* v___x_3583_; lean_object* v___x_3585_; 
v___x_3583_ = lean_array_fset(v_xs_x27_3580_, v_j_3572_, v___y_3582_);
lean_dec(v_j_3572_);
if (v_isShared_3577_ == 0)
{
lean_ctor_set(v___x_3576_, 0, v___x_3583_);
v___x_3585_ = v___x_3576_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v___x_3583_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
}
}
else
{
lean_object* v_ks_3615_; lean_object* v_vs_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3634_; 
v_ks_3615_ = lean_ctor_get(v_x_3564_, 0);
v_vs_3616_ = lean_ctor_get(v_x_3564_, 1);
v_isSharedCheck_3634_ = !lean_is_exclusive(v_x_3564_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3618_ = v_x_3564_;
v_isShared_3619_ = v_isSharedCheck_3634_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_vs_3616_);
lean_inc(v_ks_3615_);
lean_dec(v_x_3564_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3634_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3621_; 
if (v_isShared_3619_ == 0)
{
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_ks_3615_);
lean_ctor_set(v_reuseFailAlloc_3633_, 1, v_vs_3616_);
v___x_3621_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
lean_object* v_newNode_3622_; size_t v___x_3623_; uint8_t v___x_3624_; 
v_newNode_3622_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12___redArg(v___x_3621_, v_x_3567_, v_x_3568_);
v___x_3623_ = ((size_t)7ULL);
v___x_3624_ = lean_usize_dec_le(v___x_3623_, v_x_3566_);
if (v___x_3624_ == 0)
{
lean_object* v___x_3625_; lean_object* v___x_3626_; uint8_t v___x_3627_; 
v___x_3625_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3622_);
v___x_3626_ = lean_unsigned_to_nat(4u);
v___x_3627_ = lean_nat_dec_lt(v___x_3625_, v___x_3626_);
lean_dec(v___x_3625_);
if (v___x_3627_ == 0)
{
lean_object* v_ks_3628_; lean_object* v_vs_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; 
v_ks_3628_ = lean_ctor_get(v_newNode_3622_, 0);
lean_inc_ref(v_ks_3628_);
v_vs_3629_ = lean_ctor_get(v_newNode_3622_, 1);
lean_inc_ref(v_vs_3629_);
lean_dec_ref(v_newNode_3622_);
v___x_3630_ = lean_unsigned_to_nat(0u);
v___x_3631_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___closed__0);
v___x_3632_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg(v_x_3566_, v_ks_3628_, v_vs_3629_, v___x_3630_, v___x_3631_);
lean_dec_ref(v_vs_3629_);
lean_dec_ref(v_ks_3628_);
return v___x_3632_;
}
else
{
return v_newNode_3622_;
}
}
else
{
return v_newNode_3622_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg(size_t v_depth_3635_, lean_object* v_keys_3636_, lean_object* v_vals_3637_, lean_object* v_i_3638_, lean_object* v_entries_3639_){
_start:
{
lean_object* v___x_3640_; uint8_t v___x_3641_; 
v___x_3640_ = lean_array_get_size(v_keys_3636_);
v___x_3641_ = lean_nat_dec_lt(v_i_3638_, v___x_3640_);
if (v___x_3641_ == 0)
{
lean_dec(v_i_3638_);
return v_entries_3639_;
}
else
{
lean_object* v_k_3642_; lean_object* v_v_3643_; uint64_t v___x_3644_; size_t v_h_3645_; size_t v___x_3646_; lean_object* v___x_3647_; size_t v___x_3648_; size_t v___x_3649_; size_t v___x_3650_; size_t v_h_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; 
v_k_3642_ = lean_array_fget_borrowed(v_keys_3636_, v_i_3638_);
v_v_3643_ = lean_array_fget_borrowed(v_vals_3637_, v_i_3638_);
v___x_3644_ = l_Lean_instHashableFVarId_hash(v_k_3642_);
v_h_3645_ = lean_uint64_to_usize(v___x_3644_);
v___x_3646_ = ((size_t)5ULL);
v___x_3647_ = lean_unsigned_to_nat(1u);
v___x_3648_ = ((size_t)1ULL);
v___x_3649_ = lean_usize_sub(v_depth_3635_, v___x_3648_);
v___x_3650_ = lean_usize_mul(v___x_3646_, v___x_3649_);
v_h_3651_ = lean_usize_shift_right(v_h_3645_, v___x_3650_);
v___x_3652_ = lean_nat_add(v_i_3638_, v___x_3647_);
lean_dec(v_i_3638_);
lean_inc(v_v_3643_);
lean_inc(v_k_3642_);
v___x_3653_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(v_entries_3639_, v_h_3651_, v_depth_3635_, v_k_3642_, v_v_3643_);
v_i_3638_ = v___x_3652_;
v_entries_3639_ = v___x_3653_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg___boxed(lean_object* v_depth_3655_, lean_object* v_keys_3656_, lean_object* v_vals_3657_, lean_object* v_i_3658_, lean_object* v_entries_3659_){
_start:
{
size_t v_depth_boxed_3660_; lean_object* v_res_3661_; 
v_depth_boxed_3660_ = lean_unbox_usize(v_depth_3655_);
lean_dec(v_depth_3655_);
v_res_3661_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg(v_depth_boxed_3660_, v_keys_3656_, v_vals_3657_, v_i_3658_, v_entries_3659_);
lean_dec_ref(v_vals_3657_);
lean_dec_ref(v_keys_3656_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg___boxed(lean_object* v_x_3662_, lean_object* v_x_3663_, lean_object* v_x_3664_, lean_object* v_x_3665_, lean_object* v_x_3666_){
_start:
{
size_t v_x_36256__boxed_3667_; size_t v_x_36257__boxed_3668_; lean_object* v_res_3669_; 
v_x_36256__boxed_3667_ = lean_unbox_usize(v_x_3663_);
lean_dec(v_x_3663_);
v_x_36257__boxed_3668_ = lean_unbox_usize(v_x_3664_);
lean_dec(v_x_3664_);
v_res_3669_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(v_x_3662_, v_x_36256__boxed_3667_, v_x_36257__boxed_3668_, v_x_3665_, v_x_3666_);
return v_res_3669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2___redArg(lean_object* v_x_3670_, lean_object* v_x_3671_, lean_object* v_x_3672_){
_start:
{
uint64_t v___x_3673_; size_t v___x_3674_; size_t v___x_3675_; lean_object* v___x_3676_; 
v___x_3673_ = l_Lean_instHashableFVarId_hash(v_x_3671_);
v___x_3674_ = lean_uint64_to_usize(v___x_3673_);
v___x_3675_ = ((size_t)1ULL);
v___x_3676_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(v_x_3670_, v___x_3674_, v___x_3675_, v_x_3671_, v_x_3672_);
return v___x_3676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11(lean_object* v_as_3677_, size_t v_i_3678_, size_t v_stop_3679_, lean_object* v_b_3680_){
_start:
{
lean_object* v___y_3682_; uint8_t v___x_3686_; 
v___x_3686_ = lean_usize_dec_eq(v_i_3678_, v_stop_3679_);
if (v___x_3686_ == 0)
{
lean_object* v_fvarIdToDecl_3687_; lean_object* v_decls_3688_; lean_object* v_auxDeclToFullName_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v_fvarIdToDecl_3687_ = lean_ctor_get(v_b_3680_, 0);
v_decls_3688_ = lean_ctor_get(v_b_3680_, 1);
v_auxDeclToFullName_3689_ = lean_ctor_get(v_b_3680_, 2);
v___x_3690_ = lean_array_uget_borrowed(v_as_3677_, v_i_3678_);
v___x_3691_ = l_Lean_LocalDecl_fvarId(v___x_3690_);
lean_inc_ref(v_b_3680_);
v___x_3692_ = lean_local_ctx_find(v_b_3680_, v___x_3691_);
if (lean_obj_tag(v___x_3692_) == 0)
{
v___y_3682_ = v_b_3680_;
goto v___jp_3681_;
}
else
{
lean_object* v___x_3694_; uint8_t v_isShared_3695_; uint8_t v_isSharedCheck_3718_; 
lean_inc(v_auxDeclToFullName_3689_);
lean_inc_ref(v_decls_3688_);
lean_inc_ref(v_fvarIdToDecl_3687_);
v_isSharedCheck_3718_ = !lean_is_exclusive(v_b_3680_);
if (v_isSharedCheck_3718_ == 0)
{
lean_object* v_unused_3719_; lean_object* v_unused_3720_; lean_object* v_unused_3721_; 
v_unused_3719_ = lean_ctor_get(v_b_3680_, 2);
lean_dec(v_unused_3719_);
v_unused_3720_ = lean_ctor_get(v_b_3680_, 1);
lean_dec(v_unused_3720_);
v_unused_3721_ = lean_ctor_get(v_b_3680_, 0);
lean_dec(v_unused_3721_);
v___x_3694_ = v_b_3680_;
v_isShared_3695_ = v_isSharedCheck_3718_;
goto v_resetjp_3693_;
}
else
{
lean_dec(v_b_3680_);
v___x_3694_ = lean_box(0);
v_isShared_3695_ = v_isSharedCheck_3718_;
goto v_resetjp_3693_;
}
v_resetjp_3693_:
{
lean_object* v_val_3696_; lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3717_; 
v_val_3696_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3698_ = v___x_3692_;
v_isShared_3699_ = v_isSharedCheck_3717_;
goto v_resetjp_3697_;
}
else
{
lean_inc(v_val_3696_);
lean_dec(v___x_3692_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3717_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
uint8_t v___x_3700_; lean_object* v___x_3701_; lean_object* v___y_3703_; lean_object* v___y_3704_; lean_object* v___y_3713_; lean_object* v_fvarId_3716_; 
v___x_3700_ = 1;
v___x_3701_ = l_Lean_LocalDecl_setNondep(v_val_3696_, v___x_3700_);
v_fvarId_3716_ = lean_ctor_get(v___x_3701_, 1);
lean_inc(v_fvarId_3716_);
v___y_3713_ = v_fvarId_3716_;
goto v___jp_3712_;
v___jp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3699_ == 0)
{
lean_ctor_set(v___x_3698_, 0, v___x_3701_);
v___x_3706_ = v___x_3698_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v___x_3701_);
v___x_3706_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
lean_object* v___x_3707_; lean_object* v___x_3709_; 
v___x_3707_ = l_Lean_PersistentArray_set___redArg(v_decls_3688_, v___y_3704_, v___x_3706_);
lean_dec(v___y_3704_);
if (v_isShared_3695_ == 0)
{
lean_ctor_set(v___x_3694_, 1, v___x_3707_);
lean_ctor_set(v___x_3694_, 0, v___y_3703_);
v___x_3709_ = v___x_3694_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v___y_3703_);
lean_ctor_set(v_reuseFailAlloc_3710_, 1, v___x_3707_);
lean_ctor_set(v_reuseFailAlloc_3710_, 2, v_auxDeclToFullName_3689_);
v___x_3709_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
v___y_3682_ = v___x_3709_;
goto v___jp_3681_;
}
}
}
v___jp_3712_:
{
lean_object* v___x_3714_; lean_object* v_index_3715_; 
lean_inc_ref(v___x_3701_);
v___x_3714_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2___redArg(v_fvarIdToDecl_3687_, v___y_3713_, v___x_3701_);
v_index_3715_ = lean_ctor_get(v___x_3701_, 0);
lean_inc(v_index_3715_);
v___y_3703_ = v___x_3714_;
v___y_3704_ = v_index_3715_;
goto v___jp_3702_;
}
}
}
}
}
else
{
return v_b_3680_;
}
v___jp_3681_:
{
size_t v___x_3683_; size_t v___x_3684_; 
v___x_3683_ = ((size_t)1ULL);
v___x_3684_ = lean_usize_add(v_i_3678_, v___x_3683_);
v_i_3678_ = v___x_3684_;
v_b_3680_ = v___y_3682_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11___boxed(lean_object* v_as_3722_, lean_object* v_i_3723_, lean_object* v_stop_3724_, lean_object* v_b_3725_){
_start:
{
size_t v_i_boxed_3726_; size_t v_stop_boxed_3727_; lean_object* v_res_3728_; 
v_i_boxed_3726_ = lean_unbox_usize(v_i_3723_);
lean_dec(v_i_3723_);
v_stop_boxed_3727_ = lean_unbox_usize(v_stop_3724_);
lean_dec(v_stop_3724_);
v_res_3728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11(v_as_3722_, v_i_boxed_3726_, v_stop_boxed_3727_, v_b_3725_);
lean_dec_ref(v_as_3722_);
return v_res_3728_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15(lean_object* v_msgData_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_){
_start:
{
lean_object* v___x_3735_; lean_object* v_env_3736_; lean_object* v___x_3737_; lean_object* v_toCold_3738_; lean_object* v_mctx_3739_; lean_object* v_lctx_3740_; lean_object* v_options_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3735_ = lean_st_ref_get(v___y_3733_);
v_env_3736_ = lean_ctor_get(v___x_3735_, 0);
lean_inc_ref(v_env_3736_);
lean_dec(v___x_3735_);
v___x_3737_ = lean_st_ref_get(v___y_3731_);
v_toCold_3738_ = lean_ctor_get(v___y_3732_, 0);
v_mctx_3739_ = lean_ctor_get(v___x_3737_, 0);
lean_inc_ref(v_mctx_3739_);
lean_dec(v___x_3737_);
v_lctx_3740_ = lean_ctor_get(v___y_3730_, 2);
v_options_3741_ = lean_ctor_get(v_toCold_3738_, 2);
lean_inc_ref(v_options_3741_);
lean_inc_ref(v_lctx_3740_);
v___x_3742_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3742_, 0, v_env_3736_);
lean_ctor_set(v___x_3742_, 1, v_mctx_3739_);
lean_ctor_set(v___x_3742_, 2, v_lctx_3740_);
lean_ctor_set(v___x_3742_, 3, v_options_3741_);
v___x_3743_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3743_, 0, v___x_3742_);
lean_ctor_set(v___x_3743_, 1, v_msgData_3729_);
v___x_3744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15___boxed(lean_object* v_msgData_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
lean_object* v_res_3751_; 
v_res_3751_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15(v_msgData_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_);
lean_dec(v___y_3749_);
lean_dec_ref(v___y_3748_);
lean_dec(v___y_3747_);
lean_dec_ref(v___y_3746_);
return v_res_3751_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0(void){
_start:
{
lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3752_ = lean_box(1);
v___x_3753_ = l_Lean_MessageData_ofFormat(v___x_3752_);
return v___x_3753_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3(void){
_start:
{
lean_object* v___x_3757_; lean_object* v___x_3758_; 
v___x_3757_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__2));
v___x_3758_ = l_Lean_MessageData_ofFormat(v___x_3757_);
return v___x_3758_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23(lean_object* v_x_3759_, lean_object* v_x_3760_){
_start:
{
if (lean_obj_tag(v_x_3760_) == 0)
{
return v_x_3759_;
}
else
{
lean_object* v_head_3761_; lean_object* v_tail_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3784_; 
v_head_3761_ = lean_ctor_get(v_x_3760_, 0);
v_tail_3762_ = lean_ctor_get(v_x_3760_, 1);
v_isSharedCheck_3784_ = !lean_is_exclusive(v_x_3760_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3764_ = v_x_3760_;
v_isShared_3765_ = v_isSharedCheck_3784_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_tail_3762_);
lean_inc(v_head_3761_);
lean_dec(v_x_3760_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3784_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v_before_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3782_; 
v_before_3766_ = lean_ctor_get(v_head_3761_, 0);
v_isSharedCheck_3782_ = !lean_is_exclusive(v_head_3761_);
if (v_isSharedCheck_3782_ == 0)
{
lean_object* v_unused_3783_; 
v_unused_3783_ = lean_ctor_get(v_head_3761_, 1);
lean_dec(v_unused_3783_);
v___x_3768_ = v_head_3761_;
v_isShared_3769_ = v_isSharedCheck_3782_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_before_3766_);
lean_dec(v_head_3761_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3782_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3770_; lean_object* v___x_3772_; 
v___x_3770_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0);
if (v_isShared_3769_ == 0)
{
lean_ctor_set_tag(v___x_3768_, 7);
lean_ctor_set(v___x_3768_, 1, v___x_3770_);
lean_ctor_set(v___x_3768_, 0, v_x_3759_);
v___x_3772_ = v___x_3768_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v_x_3759_);
lean_ctor_set(v_reuseFailAlloc_3781_, 1, v___x_3770_);
v___x_3772_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
lean_object* v___x_3773_; lean_object* v___x_3775_; 
v___x_3773_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__3);
if (v_isShared_3765_ == 0)
{
lean_ctor_set_tag(v___x_3764_, 7);
lean_ctor_set(v___x_3764_, 1, v___x_3773_);
lean_ctor_set(v___x_3764_, 0, v___x_3772_);
v___x_3775_ = v___x_3764_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v___x_3772_);
lean_ctor_set(v_reuseFailAlloc_3780_, 1, v___x_3773_);
v___x_3775_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; 
v___x_3776_ = l_Lean_MessageData_ofSyntax(v_before_3766_);
v___x_3777_ = l_Lean_indentD(v___x_3776_);
v___x_3778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3775_);
lean_ctor_set(v___x_3778_, 1, v___x_3777_);
v_x_3759_ = v___x_3778_;
v_x_3760_ = v_tail_3762_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2(void){
_start:
{
lean_object* v___x_3788_; lean_object* v___x_3789_; 
v___x_3788_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__1));
v___x_3789_ = l_Lean_MessageData_ofFormat(v___x_3788_);
return v___x_3789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg(lean_object* v_msgData_3790_, lean_object* v_macroStack_3791_, lean_object* v___y_3792_){
_start:
{
lean_object* v_toCold_3794_; lean_object* v_options_3795_; lean_object* v___x_3796_; uint8_t v___x_3797_; 
v_toCold_3794_ = lean_ctor_get(v___y_3792_, 0);
v_options_3795_ = lean_ctor_get(v_toCold_3794_, 2);
v___x_3796_ = l_Lean_Elab_pp_macroStack;
v___x_3797_ = l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(v_options_3795_, v___x_3796_);
if (v___x_3797_ == 0)
{
lean_object* v___x_3798_; 
lean_dec(v_macroStack_3791_);
v___x_3798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3798_, 0, v_msgData_3790_);
return v___x_3798_;
}
else
{
if (lean_obj_tag(v_macroStack_3791_) == 0)
{
lean_object* v___x_3799_; 
v___x_3799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3799_, 0, v_msgData_3790_);
return v___x_3799_;
}
else
{
lean_object* v_head_3800_; lean_object* v_after_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3816_; 
v_head_3800_ = lean_ctor_get(v_macroStack_3791_, 0);
lean_inc(v_head_3800_);
v_after_3801_ = lean_ctor_get(v_head_3800_, 1);
v_isSharedCheck_3816_ = !lean_is_exclusive(v_head_3800_);
if (v_isSharedCheck_3816_ == 0)
{
lean_object* v_unused_3817_; 
v_unused_3817_ = lean_ctor_get(v_head_3800_, 0);
lean_dec(v_unused_3817_);
v___x_3803_ = v_head_3800_;
v_isShared_3804_ = v_isSharedCheck_3816_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_after_3801_);
lean_dec(v_head_3800_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3816_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
lean_object* v___x_3805_; lean_object* v___x_3807_; 
v___x_3805_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23___closed__0);
if (v_isShared_3804_ == 0)
{
lean_ctor_set_tag(v___x_3803_, 7);
lean_ctor_set(v___x_3803_, 1, v___x_3805_);
lean_ctor_set(v___x_3803_, 0, v_msgData_3790_);
v___x_3807_ = v___x_3803_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v_msgData_3790_);
lean_ctor_set(v_reuseFailAlloc_3815_, 1, v___x_3805_);
v___x_3807_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v_msgData_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___x_3808_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___closed__2);
v___x_3809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3807_);
lean_ctor_set(v___x_3809_, 1, v___x_3808_);
v___x_3810_ = l_Lean_MessageData_ofSyntax(v_after_3801_);
v___x_3811_ = l_Lean_indentD(v___x_3810_);
v_msgData_3812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_3812_, 0, v___x_3809_);
lean_ctor_set(v_msgData_3812_, 1, v___x_3811_);
v___x_3813_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16_spec__23(v_msgData_3812_, v_macroStack_3791_);
v___x_3814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3814_, 0, v___x_3813_);
return v___x_3814_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg___boxed(lean_object* v_msgData_3818_, lean_object* v_macroStack_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg(v_msgData_3818_, v_macroStack_3819_, v___y_3820_);
lean_dec_ref(v___y_3820_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(lean_object* v_msg_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_){
_start:
{
lean_object* v_ref_3831_; lean_object* v_macroStack_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v_a_3835_; lean_object* v___x_3836_; lean_object* v_a_3837_; lean_object* v___x_3839_; uint8_t v_isShared_3840_; uint8_t v_isSharedCheck_3845_; 
v_ref_3831_ = lean_ctor_get(v___y_3828_, 2);
v_macroStack_3832_ = lean_ctor_get(v___y_3824_, 1);
v___x_3833_ = l_Lean_Elab_getBetterRef(v_ref_3831_, v_macroStack_3832_);
v___x_3834_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__15(v_msg_3823_, v___y_3826_, v___y_3827_, v___y_3828_, v___y_3829_);
v_a_3835_ = lean_ctor_get(v___x_3834_, 0);
lean_inc(v_a_3835_);
lean_dec_ref(v___x_3834_);
lean_inc(v_macroStack_3832_);
v___x_3836_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg(v_a_3835_, v_macroStack_3832_, v___y_3828_);
v_a_3837_ = lean_ctor_get(v___x_3836_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3839_ = v___x_3836_;
v_isShared_3840_ = v_isSharedCheck_3845_;
goto v_resetjp_3838_;
}
else
{
lean_inc(v_a_3837_);
lean_dec(v___x_3836_);
v___x_3839_ = lean_box(0);
v_isShared_3840_ = v_isSharedCheck_3845_;
goto v_resetjp_3838_;
}
v_resetjp_3838_:
{
lean_object* v___x_3841_; lean_object* v___x_3843_; 
v___x_3841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3833_);
lean_ctor_set(v___x_3841_, 1, v_a_3837_);
if (v_isShared_3840_ == 0)
{
lean_ctor_set_tag(v___x_3839_, 1);
lean_ctor_set(v___x_3839_, 0, v___x_3841_);
v___x_3843_ = v___x_3839_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v___x_3841_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg___boxed(lean_object* v_msg_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_){
_start:
{
lean_object* v_res_3854_; 
v_res_3854_ = l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(v_msg_3846_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_);
lean_dec(v___y_3852_);
lean_dec_ref(v___y_3851_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec(v___y_3848_);
lean_dec_ref(v___y_3847_);
return v_res_3854_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5(void){
_start:
{
lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; 
v___x_3863_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0));
v___x_3864_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__4));
v___x_3865_ = l_Lean_Expr_const___override(v___x_3864_, v___x_3863_);
return v___x_3865_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8(void){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3870_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__0));
v___x_3871_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__7));
v___x_3872_ = l_Lean_Expr_const___override(v___x_3871_, v___x_3870_);
return v___x_3872_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9(void){
_start:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; 
v___x_3873_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4);
v___x_3874_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__8);
v___x_3875_ = l_Lean_Expr_app___override(v___x_3874_, v___x_3873_);
return v___x_3875_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14(void){
_start:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3885_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__13));
v___x_3886_ = l_String_toRawSubstring_x27(v___x_3885_);
return v___x_3886_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29(void){
_start:
{
lean_object* v___x_3921_; 
v___x_3921_ = l_Array_mkArray0___redArg();
return v___x_3921_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33(void){
_start:
{
lean_object* v___x_3925_; lean_object* v___x_3926_; 
v___x_3925_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__32));
v___x_3926_ = l_Lean_stringToMessageData(v___x_3925_);
return v___x_3926_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35(void){
_start:
{
lean_object* v___x_3928_; lean_object* v___x_3929_; 
v___x_3928_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__34));
v___x_3929_ = l_Lean_stringToMessageData(v___x_3928_);
return v___x_3929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore(lean_object* v_e_3940_, lean_object* v_body_3941_, lean_object* v_ref_3942_, lean_object* v_expectedType_x3f_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_){
_start:
{
lean_object* v_toCold_3951_; lean_object* v_ref_3952_; lean_object* v_fileName_3953_; lean_object* v___x_3954_; 
v_toCold_3951_ = lean_ctor_get(v___y_3948_, 0);
v_ref_3952_ = lean_ctor_get(v___y_3948_, 2);
v_fileName_3953_ = lean_ctor_get(v_toCold_3951_, 0);
lean_inc_ref(v_fileName_3953_);
v___x_3954_ = lean_io_realpath(v_fileName_3953_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v_a_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; uint8_t v___x_3958_; lean_object* v___y_3960_; lean_object* v___y_3961_; uint8_t v___y_3962_; lean_object* v___y_3963_; size_t v___y_3964_; lean_object* v___y_3965_; lean_object* v___y_3966_; lean_object* v___y_3967_; lean_object* v___y_3968_; lean_object* v___y_3969_; lean_object* v___y_3970_; lean_object* v___y_4059_; lean_object* v___y_4060_; lean_object* v___y_4061_; uint8_t v___y_4062_; lean_object* v___y_4063_; lean_object* v___y_4064_; size_t v___y_4065_; lean_object* v___y_4066_; lean_object* v___y_4067_; lean_object* v___y_4068_; lean_object* v___y_4069_; lean_object* v___y_4070_; lean_object* v___y_4071_; lean_object* v___y_4072_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; uint8_t v___y_4131_; lean_object* v___y_4132_; lean_object* v___y_4133_; size_t v___y_4134_; lean_object* v___y_4135_; lean_object* v___y_4136_; lean_object* v___y_4137_; lean_object* v___y_4138_; lean_object* v___y_4139_; lean_object* v___y_4140_; lean_object* v___y_4141_; lean_object* v___y_4154_; uint8_t v___y_4155_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; uint8_t v___y_4159_; lean_object* v___y_4160_; lean_object* v___y_4161_; size_t v___y_4162_; lean_object* v___y_4163_; lean_object* v___y_4197_; lean_object* v___x_4263_; 
v_a_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc(v_a_3955_);
lean_dec_ref_known(v___x_3954_, 1);
v___x_3956_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__0));
v___x_3957_ = lean_string_append(v_a_3955_, v___x_3956_);
v___x_3958_ = 0;
v___x_4263_ = l_Lean_Syntax_getPos_x3f(v_ref_3942_, v___x_3958_);
if (lean_obj_tag(v___x_4263_) == 0)
{
lean_object* v___x_4264_; 
v___x_4264_ = lean_unsigned_to_nat(0u);
v___y_4197_ = v___x_4264_;
goto v___jp_4196_;
}
else
{
lean_object* v_val_4265_; 
v_val_4265_ = lean_ctor_get(v___x_4263_, 0);
lean_inc(v_val_4265_);
lean_dec_ref_known(v___x_4263_, 1);
v___y_4197_ = v_val_4265_;
goto v___jp_4196_;
}
v___jp_3959_:
{
lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; uint8_t v___x_3974_; uint8_t v___x_3975_; lean_object* v___x_3976_; 
v___x_3971_ = lean_box(2);
v___x_3972_ = l_Lean_Syntax_mkStrLit(v___y_3963_, v___x_3971_);
v___x_3973_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__2));
v___x_3974_ = 0;
v___x_3975_ = 0;
v___x_3976_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__5___redArg(v___x_3973_, v___x_3974_, v___y_3961_, v___y_3960_, v___x_3975_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_);
if (lean_obj_tag(v___x_3976_) == 0)
{
lean_object* v_a_3977_; lean_object* v___x_3978_; 
v_a_3977_ = lean_ctor_get(v___x_3976_, 0);
lean_inc(v_a_3977_);
lean_dec_ref_known(v___x_3976_, 1);
v___x_3978_ = l_Lean_Elab_Term_exprToSyntax(v_a_3977_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v_a_3979_; lean_object* v___x_3980_; lean_object* v_env_3981_; lean_object* v___x_3982_; lean_object* v_env_3983_; lean_object* v___x_3984_; lean_object* v_imports_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; size_t v_sz_3989_; lean_object* v___x_3990_; 
v_a_3979_ = lean_ctor_get(v___x_3978_, 0);
lean_inc(v_a_3979_);
lean_dec_ref_known(v___x_3978_, 1);
v___x_3980_ = lean_st_ref_get(v___y_3970_);
v_env_3981_ = lean_ctor_get(v___x_3980_, 0);
lean_inc_ref(v_env_3981_);
lean_dec(v___x_3980_);
v___x_3982_ = lean_st_ref_get(v___y_3970_);
v_env_3983_ = lean_ctor_get(v___x_3982_, 0);
lean_inc_ref(v_env_3983_);
lean_dec(v___x_3982_);
v___x_3984_ = l_Lean_Environment_header(v_env_3981_);
lean_dec_ref(v_env_3981_);
v_imports_3985_ = lean_ctor_get(v___x_3984_, 1);
lean_inc_ref(v_imports_3985_);
lean_dec_ref(v___x_3984_);
v___x_3986_ = l_Lean_Environment_mainModule(v_env_3983_);
lean_dec_ref(v_env_3983_);
v___x_3987_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_3987_, 0, v___x_3986_);
lean_ctor_set_uint8(v___x_3987_, sizeof(void*)*1, v___x_3958_);
lean_ctor_set_uint8(v___x_3987_, sizeof(void*)*1 + 1, v___y_3962_);
lean_ctor_set_uint8(v___x_3987_, sizeof(void*)*1 + 2, v___x_3958_);
v___x_3988_ = lean_array_push(v_imports_3985_, v___x_3987_);
v_sz_3989_ = lean_array_size(v___x_3988_);
v___x_3990_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg(v_sz_3989_, v___y_3964_, v___x_3988_);
if (lean_obj_tag(v___x_3990_) == 0)
{
lean_object* v_a_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; 
v_a_3991_ = lean_ctor_get(v___x_3990_, 0);
lean_inc(v_a_3991_);
lean_dec_ref_known(v___x_3990_, 1);
v___x_3992_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__5);
v___x_3993_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7_spec__10___closed__4);
v___x_3994_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__9);
v___x_3995_ = lean_array_to_list(v_a_3991_);
v___x_3996_ = l_List_foldrTR___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__7(v___x_3994_, v___x_3995_);
v___x_3997_ = l_Lean_mkAppB(v___x_3992_, v___x_3993_, v___x_3996_);
v___x_3998_ = l_Lean_Elab_Term_exprToSyntax(v___x_3997_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_);
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_object* v_toCold_3999_; lean_object* v_a_4000_; lean_object* v_ref_4001_; lean_object* v_quotContext_4002_; lean_object* v_currMacroScope_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v_toCold_3999_ = lean_ctor_get(v___y_3969_, 0);
v_a_4000_ = lean_ctor_get(v___x_3998_, 0);
lean_inc(v_a_4000_);
lean_dec_ref_known(v___x_3998_, 1);
v_ref_4001_ = lean_ctor_get(v___y_3969_, 2);
v_quotContext_4002_ = lean_ctor_get(v_toCold_3999_, 8);
v_currMacroScope_4003_ = lean_ctor_get(v_toCold_3999_, 9);
v___x_4004_ = l_Lean_SourceInfo_fromRef(v_ref_4001_, v___x_3958_);
v___x_4005_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__11));
v___x_4006_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__12));
v___x_4007_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__14);
v___x_4008_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__16));
lean_inc(v_currMacroScope_4003_);
lean_inc(v_quotContext_4002_);
v___x_4009_ = l_Lean_addMacroScope(v_quotContext_4002_, v___x_4008_, v_currMacroScope_4003_);
v___x_4010_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__18));
lean_inc_n(v___x_4004_, 12);
v___x_4011_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4011_, 0, v___x_4004_);
lean_ctor_set(v___x_4011_, 1, v___x_4007_);
lean_ctor_set(v___x_4011_, 2, v___x_4009_);
lean_ctor_set(v___x_4011_, 3, v___x_4010_);
v___x_4012_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__20));
v___x_4013_ = l_Lean_Syntax_node3(v___x_4004_, v___x_4012_, v___x_3972_, v_a_4000_, v_a_3979_);
v___x_4014_ = l_Lean_Syntax_node2(v___x_4004_, v___x_4006_, v___x_4011_, v___x_4013_);
v___x_4015_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__21));
v___x_4016_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4016_, 0, v___x_4004_);
lean_ctor_set(v___x_4016_, 1, v___x_4015_);
v___x_4017_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__22));
v___x_4018_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__23));
v___x_4019_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4019_, 0, v___x_4004_);
lean_ctor_set(v___x_4019_, 1, v___x_4017_);
v___x_4020_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__25));
v___x_4021_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__27));
v___x_4022_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__28));
v___x_4023_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4023_, 0, v___x_4004_);
lean_ctor_set(v___x_4023_, 1, v___x_4022_);
v___x_4024_ = l_Lean_Syntax_node1(v___x_4004_, v___x_4021_, v___x_4023_);
v___x_4025_ = l_Lean_Syntax_node1(v___x_4004_, v___x_4012_, v___x_4024_);
v___x_4026_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__29);
v___x_4027_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4027_, 0, v___x_4004_);
lean_ctor_set(v___x_4027_, 1, v___x_4012_);
lean_ctor_set(v___x_4027_, 2, v___x_4026_);
v___x_4028_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__30));
v___x_4029_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4029_, 0, v___x_4004_);
lean_ctor_set(v___x_4029_, 1, v___x_4028_);
v___x_4030_ = l_Lean_Syntax_node4(v___x_4004_, v___x_4020_, v___x_4025_, v___x_4027_, v___x_4029_, v_body_3941_);
v___x_4031_ = l_Lean_Syntax_node2(v___x_4004_, v___x_4018_, v___x_4019_, v___x_4030_);
v___x_4032_ = l_Lean_Syntax_node3(v___x_4004_, v___x_4005_, v___x_4014_, v___x_4016_, v___x_4031_);
v___x_4033_ = l_Lean_Elab_Term_elabTerm(v___x_4032_, v_expectedType_x3f_3943_, v___y_3962_, v___y_3962_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_);
return v___x_4033_;
}
else
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4041_; 
lean_dec(v_a_3979_);
lean_dec(v___x_3972_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_body_3941_);
v_a_4034_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4036_ = v___x_3998_;
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v___x_3998_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v___x_4039_; 
if (v_isShared_4037_ == 0)
{
v___x_4039_ = v___x_4036_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v_a_4034_);
v___x_4039_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
return v___x_4039_;
}
}
}
}
else
{
lean_object* v_a_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4049_; 
lean_dec(v_a_3979_);
lean_dec(v___x_3972_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_body_3941_);
v_a_4042_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_4049_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_4044_ = v___x_3990_;
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_a_4042_);
lean_dec(v___x_3990_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4047_; 
if (v_isShared_4045_ == 0)
{
v___x_4047_ = v___x_4044_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v_a_4042_);
v___x_4047_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
return v___x_4047_;
}
}
}
}
else
{
lean_object* v_a_4050_; lean_object* v___x_4052_; uint8_t v_isShared_4053_; uint8_t v_isSharedCheck_4057_; 
lean_dec(v___x_3972_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_body_3941_);
v_a_4050_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_4057_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4052_ = v___x_3978_;
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
else
{
lean_inc(v_a_4050_);
lean_dec(v___x_3978_);
v___x_4052_ = lean_box(0);
v_isShared_4053_ = v_isSharedCheck_4057_;
goto v_resetjp_4051_;
}
v_resetjp_4051_:
{
lean_object* v___x_4055_; 
if (v_isShared_4053_ == 0)
{
v___x_4055_ = v___x_4052_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v_a_4050_);
v___x_4055_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
return v___x_4055_;
}
}
}
}
else
{
lean_dec(v___x_3972_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_body_3941_);
return v___x_3976_;
}
}
v___jp_4058_:
{
lean_object* v_toCold_4073_; lean_object* v_options_4074_; lean_object* v___x_4075_; uint8_t v___x_4076_; 
v_toCold_4073_ = lean_ctor_get(v___y_4071_, 0);
v_options_4074_ = lean_ctor_get(v_toCold_4073_, 2);
v___x_4075_ = l_Lean_Elab_inServer;
v___x_4076_ = l_Lean_Option_get___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__8(v_options_4074_, v___x_4075_);
if (v___x_4076_ == 0)
{
lean_dec_ref(v___y_4066_);
lean_dec(v___y_4064_);
lean_dec_ref(v___y_4059_);
lean_dec(v_ref_3942_);
v___y_3960_ = v___y_4060_;
v___y_3961_ = v___y_4061_;
v___y_3962_ = v___y_4062_;
v___y_3963_ = v___y_4063_;
v___y_3964_ = v___y_4065_;
v___y_3965_ = v___y_4067_;
v___y_3966_ = v___y_4068_;
v___y_3967_ = v___y_4069_;
v___y_3968_ = v___y_4070_;
v___y_3969_ = v___y_4071_;
v___y_3970_ = v___y_4072_;
goto v___jp_3959_;
}
else
{
uint8_t v___x_4077_; 
v___x_4077_ = l_Lean_Expr_hasSorry(v___y_4066_);
if (v___x_4077_ == 0)
{
if (v___x_4076_ == 0)
{
lean_dec_ref(v___y_4066_);
lean_dec(v___y_4064_);
lean_dec_ref(v___y_4059_);
lean_dec(v_ref_3942_);
v___y_3960_ = v___y_4060_;
v___y_3961_ = v___y_4061_;
v___y_3962_ = v___y_4062_;
v___y_3963_ = v___y_4063_;
v___y_3964_ = v___y_4065_;
v___y_3965_ = v___y_4067_;
v___y_3966_ = v___y_4068_;
v___y_3967_ = v___y_4069_;
v___y_3968_ = v___y_4070_;
v___y_3969_ = v___y_4071_;
v___y_3970_ = v___y_4072_;
goto v___jp_3959_;
}
else
{
lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___f_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; 
v___x_4078_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__8));
lean_inc_ref(v___y_4061_);
v___x_4079_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v___y_4061_);
v___x_4080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4080_, 0, v___x_4078_);
lean_ctor_set(v___x_4080_, 1, v___x_4079_);
v___x_4081_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson___closed__13));
v___x_4082_ = l___private_Lean_Elab_Idbg_0__Lean_Idbg_exprToJson(v___y_4066_);
v___x_4083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4083_, 0, v___x_4081_);
lean_ctor_set(v___x_4083_, 1, v___x_4082_);
v___x_4084_ = lean_box(0);
v___x_4085_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4085_, 0, v___x_4083_);
lean_ctor_set(v___x_4085_, 1, v___x_4084_);
v___x_4086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4086_, 0, v___x_4080_);
lean_ctor_set(v___x_4086_, 1, v___x_4085_);
v___x_4087_ = l_Lean_Json_mkObj(v___x_4086_);
lean_dec_ref_known(v___x_4086_, 2);
lean_inc(v_ref_3942_);
v___f_4088_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__0___boxed), 7, 3);
lean_closure_set(v___f_4088_, 0, v___y_4059_);
lean_closure_set(v___f_4088_, 1, v___x_4087_);
lean_closure_set(v___f_4088_, 2, v_ref_3942_);
v___x_4089_ = l_IO_CancelToken_new();
v___x_4090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4090_, 0, v___x_4089_);
v___x_4091_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__0));
v___x_4092_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__8));
v___x_4093_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__11));
lean_inc(v___y_4064_);
v___x_4094_ = l_Lean_Name_num___override(v___x_4093_, v___y_4064_);
v___x_4095_ = l_Lean_Name_str___override(v___x_4094_, v___x_4091_);
v___x_4096_ = l_Lean_Name_str___override(v___x_4095_, v___x_4092_);
v___x_4097_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__15));
v___x_4098_ = l_Lean_Name_str___override(v___x_4096_, v___x_4097_);
v___x_4099_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__31));
v___x_4100_ = l_Lean_Name_str___override(v___x_4098_, v___x_4099_);
v___x_4101_ = l_Lean_Name_toString(v___x_4100_, v___y_4062_);
lean_inc_ref(v___x_4090_);
v___x_4102_ = l_Lean_Core_wrapAsyncAsSnapshot___redArg(v___f_4088_, v___x_4090_, v___x_4101_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4102_) == 0)
{
lean_object* v_a_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; 
v_a_4103_ = lean_ctor_get(v___x_4102_, 0);
lean_inc(v_a_4103_);
lean_dec_ref_known(v___x_4102_, 1);
v___x_4104_ = lean_box(0);
v___x_4105_ = lean_apply_1(v_a_4103_, v___x_4104_);
v___x_4106_ = lean_io_as_task(v___x_4105_, v___y_4064_);
v___x_4107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4107_, 0, v_ref_3942_);
v___x_4108_ = l_Lean_Language_SnapshotTask_defaultReportingRange(v___x_4107_);
v___x_4109_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4109_, 0, v___x_4107_);
lean_ctor_set(v___x_4109_, 1, v___x_4108_);
lean_ctor_set(v___x_4109_, 2, v___x_4090_);
lean_ctor_set(v___x_4109_, 3, v___x_4106_);
v___x_4110_ = l_Lean_Core_logSnapshotTask___redArg(v___x_4109_, v___y_4072_);
if (lean_obj_tag(v___x_4110_) == 0)
{
lean_dec_ref_known(v___x_4110_, 1);
v___y_3960_ = v___y_4060_;
v___y_3961_ = v___y_4061_;
v___y_3962_ = v___y_4062_;
v___y_3963_ = v___y_4063_;
v___y_3964_ = v___y_4065_;
v___y_3965_ = v___y_4067_;
v___y_3966_ = v___y_4068_;
v___y_3967_ = v___y_4069_;
v___y_3968_ = v___y_4070_;
v___y_3969_ = v___y_4071_;
v___y_3970_ = v___y_4072_;
goto v___jp_3959_;
}
else
{
lean_object* v_a_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4118_; 
lean_dec_ref(v___y_4063_);
lean_dec_ref(v___y_4061_);
lean_dec_ref(v___y_4060_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_body_3941_);
v_a_4111_ = lean_ctor_get(v___x_4110_, 0);
v_isSharedCheck_4118_ = !lean_is_exclusive(v___x_4110_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4113_ = v___x_4110_;
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_a_4111_);
lean_dec(v___x_4110_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4118_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4116_; 
if (v_isShared_4114_ == 0)
{
v___x_4116_ = v___x_4113_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_a_4111_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
}
}
}
}
else
{
lean_object* v_a_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4126_; 
lean_dec_ref_known(v___x_4090_, 1);
lean_dec(v___y_4064_);
lean_dec_ref(v___y_4063_);
lean_dec_ref(v___y_4061_);
lean_dec_ref(v___y_4060_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
v_a_4119_ = lean_ctor_get(v___x_4102_, 0);
v_isSharedCheck_4126_ = !lean_is_exclusive(v___x_4102_);
if (v_isSharedCheck_4126_ == 0)
{
v___x_4121_ = v___x_4102_;
v_isShared_4122_ = v_isSharedCheck_4126_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_a_4119_);
lean_dec(v___x_4102_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4126_;
goto v_resetjp_4120_;
}
v_resetjp_4120_:
{
lean_object* v___x_4124_; 
if (v_isShared_4122_ == 0)
{
v___x_4124_ = v___x_4121_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4125_; 
v_reuseFailAlloc_4125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4125_, 0, v_a_4119_);
v___x_4124_ = v_reuseFailAlloc_4125_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
return v___x_4124_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_4066_);
lean_dec(v___y_4064_);
lean_dec_ref(v___y_4059_);
lean_dec(v_ref_3942_);
v___y_3960_ = v___y_4060_;
v___y_3961_ = v___y_4061_;
v___y_3962_ = v___y_4062_;
v___y_3963_ = v___y_4063_;
v___y_3964_ = v___y_4065_;
v___y_3965_ = v___y_4067_;
v___y_3966_ = v___y_4068_;
v___y_3967_ = v___y_4069_;
v___y_3968_ = v___y_4070_;
v___y_3969_ = v___y_4071_;
v___y_3970_ = v___y_4072_;
goto v___jp_3959_;
}
}
}
v___jp_4127_:
{
uint8_t v___x_4142_; 
v___x_4142_ = l_Lean_Expr_hasMVar(v___y_4130_);
if (v___x_4142_ == 0)
{
v___y_4059_ = v___y_4128_;
v___y_4060_ = v___y_4129_;
v___y_4061_ = v___y_4130_;
v___y_4062_ = v___y_4131_;
v___y_4063_ = v___y_4132_;
v___y_4064_ = v___y_4133_;
v___y_4065_ = v___y_4134_;
v___y_4066_ = v___y_4135_;
v___y_4067_ = v___y_4136_;
v___y_4068_ = v___y_4137_;
v___y_4069_ = v___y_4138_;
v___y_4070_ = v___y_4139_;
v___y_4071_ = v___y_4140_;
v___y_4072_ = v___y_4141_;
goto v___jp_4058_;
}
else
{
lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4152_; 
lean_dec_ref(v___y_4135_);
lean_dec(v___y_4133_);
lean_dec_ref(v___y_4132_);
lean_dec_ref(v___y_4130_);
lean_dec_ref(v___y_4129_);
lean_dec_ref(v___y_4128_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
v___x_4143_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__33);
v___x_4144_ = l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(v___x_4143_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_);
v_a_4145_ = lean_ctor_get(v___x_4144_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v___x_4144_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4147_ = v___x_4144_;
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v___x_4144_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4150_; 
if (v_isShared_4148_ == 0)
{
v___x_4150_ = v___x_4147_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_a_4145_);
v___x_4150_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
return v___x_4150_;
}
}
}
}
v___jp_4153_:
{
uint8_t v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___f_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___f_4172_; lean_object* v___x_4173_; 
v___x_4164_ = 1;
v___x_4165_ = lean_box(v___x_3958_);
v___x_4166_ = lean_box(v___y_4155_);
v___x_4167_ = lean_box(v___x_4164_);
lean_inc_ref(v___y_4157_);
v___f_4168_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__1___boxed), 13, 5);
lean_closure_set(v___f_4168_, 0, v___y_4157_);
lean_closure_set(v___f_4168_, 1, v___y_4158_);
lean_closure_set(v___f_4168_, 2, v___x_4165_);
lean_closure_set(v___f_4168_, 3, v___x_4166_);
lean_closure_set(v___f_4168_, 4, v___x_4167_);
v___x_4169_ = lean_box(v___x_3958_);
v___x_4170_ = lean_box(v___y_4155_);
v___x_4171_ = lean_box(v___x_4164_);
v___f_4172_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___lam__2___boxed), 12, 5);
lean_closure_set(v___f_4172_, 0, v___y_4157_);
lean_closure_set(v___f_4172_, 1, v___y_4154_);
lean_closure_set(v___f_4172_, 2, v___x_4169_);
lean_closure_set(v___f_4172_, 3, v___x_4170_);
lean_closure_set(v___f_4172_, 4, v___x_4171_);
v___x_4173_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__4___redArg(v___y_4163_, v___f_4172_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
if (lean_obj_tag(v___x_4173_) == 0)
{
lean_object* v_a_4174_; lean_object* v_fst_4175_; lean_object* v_snd_4176_; uint8_t v___x_4177_; 
v_a_4174_ = lean_ctor_get(v___x_4173_, 0);
lean_inc(v_a_4174_);
lean_dec_ref_known(v___x_4173_, 1);
v_fst_4175_ = lean_ctor_get(v_a_4174_, 0);
lean_inc(v_fst_4175_);
v_snd_4176_ = lean_ctor_get(v_a_4174_, 1);
lean_inc(v_snd_4176_);
lean_dec(v_a_4174_);
v___x_4177_ = l_Lean_Expr_hasMVar(v_fst_4175_);
if (v___x_4177_ == 0)
{
v___y_4128_ = v___y_4156_;
v___y_4129_ = v___f_4168_;
v___y_4130_ = v_snd_4176_;
v___y_4131_ = v___y_4159_;
v___y_4132_ = v___y_4160_;
v___y_4133_ = v___y_4161_;
v___y_4134_ = v___y_4162_;
v___y_4135_ = v_fst_4175_;
v___y_4136_ = v___y_3944_;
v___y_4137_ = v___y_3945_;
v___y_4138_ = v___y_3946_;
v___y_4139_ = v___y_3947_;
v___y_4140_ = v___y_3948_;
v___y_4141_ = v___y_3949_;
goto v___jp_4127_;
}
else
{
lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v_a_4180_; lean_object* v___x_4182_; uint8_t v_isShared_4183_; uint8_t v_isSharedCheck_4187_; 
lean_dec(v_snd_4176_);
lean_dec(v_fst_4175_);
lean_dec_ref(v___f_4168_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4160_);
lean_dec_ref(v___y_4156_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
v___x_4178_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__35);
v___x_4179_ = l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(v___x_4178_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
v_a_4180_ = lean_ctor_get(v___x_4179_, 0);
v_isSharedCheck_4187_ = !lean_is_exclusive(v___x_4179_);
if (v_isSharedCheck_4187_ == 0)
{
v___x_4182_ = v___x_4179_;
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
else
{
lean_inc(v_a_4180_);
lean_dec(v___x_4179_);
v___x_4182_ = lean_box(0);
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
v_resetjp_4181_:
{
lean_object* v___x_4185_; 
if (v_isShared_4183_ == 0)
{
v___x_4185_ = v___x_4182_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v_a_4180_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
}
}
else
{
lean_object* v_a_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4195_; 
lean_dec_ref(v___f_4168_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4160_);
lean_dec_ref(v___y_4156_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
v_a_4188_ = lean_ctor_get(v___x_4173_, 0);
v_isSharedCheck_4195_ = !lean_is_exclusive(v___x_4173_);
if (v_isSharedCheck_4195_ == 0)
{
v___x_4190_ = v___x_4173_;
v_isShared_4191_ = v_isSharedCheck_4195_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_a_4188_);
lean_dec(v___x_4173_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4195_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___x_4193_; 
if (v_isShared_4191_ == 0)
{
v___x_4193_ = v___x_4190_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v_a_4188_);
v___x_4193_ = v_reuseFailAlloc_4194_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
return v___x_4193_;
}
}
}
}
v___jp_4196_:
{
lean_object* v_lctx_4198_; lean_object* v_decls_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; uint64_t v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; 
v_lctx_4198_ = lean_ctor_get(v___y_3946_, 2);
v_decls_4199_ = lean_ctor_get(v_lctx_4198_, 1);
v___x_4200_ = l_Nat_reprFast(v___y_4197_);
v___x_4201_ = lean_string_append(v___x_3957_, v___x_4200_);
lean_dec_ref(v___x_4200_);
v___x_4202_ = lean_string_hash(v___x_4201_);
lean_dec_ref(v___x_4201_);
v___x_4203_ = lean_uint64_to_nat(v___x_4202_);
v___x_4204_ = l_Nat_reprFast(v___x_4203_);
v___x_4205_ = lean_unsigned_to_nat(0u);
v___x_4206_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__36));
v___x_4207_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0(v_decls_4199_, v___x_4206_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
if (lean_obj_tag(v___x_4207_) == 0)
{
lean_object* v_a_4208_; size_t v_sz_4209_; size_t v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; uint8_t v___x_4213_; lean_object* v___x_4214_; 
v_a_4208_ = lean_ctor_get(v___x_4207_, 0);
lean_inc_n(v_a_4208_, 2);
lean_dec_ref_known(v___x_4207_, 1);
v_sz_4209_ = lean_array_size(v_a_4208_);
v___x_4210_ = ((size_t)0ULL);
v___x_4211_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__1(v_sz_4209_, v___x_4210_, v_a_4208_);
v___x_4212_ = lean_box(0);
v___x_4213_ = 1;
v___x_4214_ = l_Lean_Elab_Term_elabTerm(v_e_3940_, v___x_4212_, v___x_4213_, v___x_4213_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
if (lean_obj_tag(v___x_4214_) == 0)
{
lean_object* v_a_4215_; lean_object* v___x_4216_; 
v_a_4215_ = lean_ctor_get(v___x_4214_, 0);
lean_inc(v_a_4215_);
lean_dec_ref_known(v___x_4214_, 1);
v___x_4216_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_3958_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
if (lean_obj_tag(v___x_4216_) == 0)
{
lean_object* v___x_4217_; lean_object* v_a_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; 
lean_dec_ref_known(v___x_4216_, 1);
v___x_4217_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_a_4215_, v___y_3947_);
v_a_4218_ = lean_ctor_get(v___x_4217_, 0);
lean_inc(v_a_4218_);
lean_dec_ref(v___x_4217_);
v___x_4219_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__38));
v___x_4220_ = lean_unsigned_to_nat(1u);
v___x_4221_ = lean_mk_empty_array_with_capacity(v___x_4220_);
lean_inc_ref(v___x_4221_);
v___x_4222_ = lean_array_push(v___x_4221_, v_a_4218_);
v___x_4223_ = l_Lean_Meta_mkAppM(v___x_4219_, v___x_4222_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_object* v_a_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; 
v_a_4224_ = lean_ctor_get(v___x_4223_, 0);
lean_inc(v_a_4224_);
lean_dec_ref_known(v___x_4223_, 1);
v___x_4225_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___closed__41));
lean_inc_ref(v___x_4221_);
v___x_4226_ = lean_array_push(v___x_4221_, v_a_4224_);
v___x_4227_ = l_Lean_Meta_mkAppM(v___x_4225_, v___x_4226_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
if (lean_obj_tag(v___x_4227_) == 0)
{
lean_object* v_a_4228_; lean_object* v___x_4229_; 
v_a_4228_ = lean_ctor_get(v___x_4227_, 0);
lean_inc(v_a_4228_);
lean_dec_ref_known(v___x_4227_, 1);
v___x_4229_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_3958_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
if (lean_obj_tag(v___x_4229_) == 0)
{
lean_object* v___x_4230_; lean_object* v_a_4231_; lean_object* v___x_4232_; uint8_t v___x_4233_; 
lean_dec_ref_known(v___x_4229_, 1);
v___x_4230_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__3___redArg(v_a_4228_, v___y_3947_);
v_a_4231_ = lean_ctor_get(v___x_4230_, 0);
lean_inc(v_a_4231_);
lean_dec_ref(v___x_4230_);
v___x_4232_ = lean_array_get_size(v_a_4208_);
v___x_4233_ = lean_nat_dec_lt(v___x_4205_, v___x_4232_);
if (v___x_4233_ == 0)
{
lean_dec(v_a_4208_);
lean_inc_ref(v_lctx_4198_);
lean_inc_ref(v___x_4204_);
v___y_4154_ = v_a_4231_;
v___y_4155_ = v___x_4213_;
v___y_4156_ = v___x_4204_;
v___y_4157_ = v___x_4211_;
v___y_4158_ = v___x_4221_;
v___y_4159_ = v___x_4213_;
v___y_4160_ = v___x_4204_;
v___y_4161_ = v___x_4205_;
v___y_4162_ = v___x_4210_;
v___y_4163_ = v_lctx_4198_;
goto v___jp_4153_;
}
else
{
uint8_t v___x_4234_; 
v___x_4234_ = lean_nat_dec_le(v___x_4232_, v___x_4232_);
if (v___x_4234_ == 0)
{
if (v___x_4233_ == 0)
{
lean_dec(v_a_4208_);
lean_inc_ref(v_lctx_4198_);
lean_inc_ref(v___x_4204_);
v___y_4154_ = v_a_4231_;
v___y_4155_ = v___x_4213_;
v___y_4156_ = v___x_4204_;
v___y_4157_ = v___x_4211_;
v___y_4158_ = v___x_4221_;
v___y_4159_ = v___x_4213_;
v___y_4160_ = v___x_4204_;
v___y_4161_ = v___x_4205_;
v___y_4162_ = v___x_4210_;
v___y_4163_ = v_lctx_4198_;
goto v___jp_4153_;
}
else
{
size_t v___x_4235_; lean_object* v___x_4236_; 
v___x_4235_ = lean_usize_of_nat(v___x_4232_);
lean_inc_ref(v_lctx_4198_);
v___x_4236_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11(v_a_4208_, v___x_4210_, v___x_4235_, v_lctx_4198_);
lean_dec(v_a_4208_);
lean_inc_ref(v___x_4204_);
v___y_4154_ = v_a_4231_;
v___y_4155_ = v___x_4213_;
v___y_4156_ = v___x_4204_;
v___y_4157_ = v___x_4211_;
v___y_4158_ = v___x_4221_;
v___y_4159_ = v___x_4213_;
v___y_4160_ = v___x_4204_;
v___y_4161_ = v___x_4205_;
v___y_4162_ = v___x_4210_;
v___y_4163_ = v___x_4236_;
goto v___jp_4153_;
}
}
else
{
size_t v___x_4237_; lean_object* v___x_4238_; 
v___x_4237_ = lean_usize_of_nat(v___x_4232_);
lean_inc_ref(v_lctx_4198_);
v___x_4238_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__11(v_a_4208_, v___x_4210_, v___x_4237_, v_lctx_4198_);
lean_dec(v_a_4208_);
lean_inc_ref(v___x_4204_);
v___y_4154_ = v_a_4231_;
v___y_4155_ = v___x_4213_;
v___y_4156_ = v___x_4204_;
v___y_4157_ = v___x_4211_;
v___y_4158_ = v___x_4221_;
v___y_4159_ = v___x_4213_;
v___y_4160_ = v___x_4204_;
v___y_4161_ = v___x_4205_;
v___y_4162_ = v___x_4210_;
v___y_4163_ = v___x_4238_;
goto v___jp_4153_;
}
}
}
else
{
lean_object* v_a_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4246_; 
lean_dec(v_a_4228_);
lean_dec_ref(v___x_4221_);
lean_dec_ref(v___x_4211_);
lean_dec(v_a_4208_);
lean_dec_ref(v___x_4204_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
v_a_4239_ = lean_ctor_get(v___x_4229_, 0);
v_isSharedCheck_4246_ = !lean_is_exclusive(v___x_4229_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4241_ = v___x_4229_;
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_a_4239_);
lean_dec(v___x_4229_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
lean_object* v___x_4244_; 
if (v_isShared_4242_ == 0)
{
v___x_4244_ = v___x_4241_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v_a_4239_);
v___x_4244_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
return v___x_4244_;
}
}
}
}
else
{
lean_dec_ref(v___x_4221_);
lean_dec_ref(v___x_4211_);
lean_dec(v_a_4208_);
lean_dec_ref(v___x_4204_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
return v___x_4227_;
}
}
else
{
lean_dec_ref(v___x_4221_);
lean_dec_ref(v___x_4211_);
lean_dec(v_a_4208_);
lean_dec_ref(v___x_4204_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
return v___x_4223_;
}
}
else
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4254_; 
lean_dec(v_a_4215_);
lean_dec_ref(v___x_4211_);
lean_dec(v_a_4208_);
lean_dec_ref(v___x_4204_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
v_a_4247_ = lean_ctor_get(v___x_4216_, 0);
v_isSharedCheck_4254_ = !lean_is_exclusive(v___x_4216_);
if (v_isSharedCheck_4254_ == 0)
{
v___x_4249_ = v___x_4216_;
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4216_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4254_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v___x_4252_; 
if (v_isShared_4250_ == 0)
{
v___x_4252_ = v___x_4249_;
goto v_reusejp_4251_;
}
else
{
lean_object* v_reuseFailAlloc_4253_; 
v_reuseFailAlloc_4253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4253_, 0, v_a_4247_);
v___x_4252_ = v_reuseFailAlloc_4253_;
goto v_reusejp_4251_;
}
v_reusejp_4251_:
{
return v___x_4252_;
}
}
}
}
else
{
lean_dec_ref(v___x_4211_);
lean_dec(v_a_4208_);
lean_dec_ref(v___x_4204_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
return v___x_4214_;
}
}
else
{
lean_object* v_a_4255_; lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4262_; 
lean_dec_ref(v___x_4204_);
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
lean_dec(v_e_3940_);
v_a_4255_ = lean_ctor_get(v___x_4207_, 0);
v_isSharedCheck_4262_ = !lean_is_exclusive(v___x_4207_);
if (v_isSharedCheck_4262_ == 0)
{
v___x_4257_ = v___x_4207_;
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
else
{
lean_inc(v_a_4255_);
lean_dec(v___x_4207_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
lean_object* v___x_4260_; 
if (v_isShared_4258_ == 0)
{
v___x_4260_ = v___x_4257_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v_a_4255_);
v___x_4260_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
return v___x_4260_;
}
}
}
}
}
else
{
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4277_; 
lean_dec(v_expectedType_x3f_3943_);
lean_dec(v_ref_3942_);
lean_dec(v_body_3941_);
lean_dec(v_e_3940_);
v_a_4266_ = lean_ctor_get(v___x_3954_, 0);
v_isSharedCheck_4277_ = !lean_is_exclusive(v___x_3954_);
if (v_isSharedCheck_4277_ == 0)
{
v___x_4268_ = v___x_3954_;
v_isShared_4269_ = v_isSharedCheck_4277_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v___x_3954_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4277_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4275_; 
v___x_4270_ = lean_io_error_to_string(v_a_4266_);
v___x_4271_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4271_, 0, v___x_4270_);
v___x_4272_ = l_Lean_MessageData_ofFormat(v___x_4271_);
lean_inc(v_ref_3952_);
v___x_4273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4273_, 0, v_ref_3952_);
lean_ctor_set(v___x_4273_, 1, v___x_4272_);
if (v_isShared_4269_ == 0)
{
lean_ctor_set(v___x_4268_, 0, v___x_4273_);
v___x_4275_ = v___x_4268_;
goto v_reusejp_4274_;
}
else
{
lean_object* v_reuseFailAlloc_4276_; 
v_reuseFailAlloc_4276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4276_, 0, v___x_4273_);
v___x_4275_ = v_reuseFailAlloc_4276_;
goto v_reusejp_4274_;
}
v_reusejp_4274_:
{
return v___x_4275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore___boxed(lean_object* v_e_4278_, lean_object* v_body_4279_, lean_object* v_ref_4280_, lean_object* v_expectedType_x3f_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore(v_e_4278_, v_body_4279_, v_ref_4280_, v_expectedType_x3f_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
lean_dec(v___y_4287_);
lean_dec_ref(v___y_4286_);
lean_dec(v___y_4285_);
lean_dec_ref(v___y_4284_);
lean_dec(v___y_4283_);
lean_dec_ref(v___y_4282_);
return v_res_4289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2(lean_object* v_00_u03b2_4290_, lean_object* v_x_4291_, lean_object* v_x_4292_, lean_object* v_x_4293_){
_start:
{
lean_object* v___x_4294_; 
v___x_4294_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2___redArg(v_x_4291_, v_x_4292_, v_x_4293_);
return v___x_4294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6(size_t v_sz_4295_, size_t v_i_4296_, lean_object* v_bs_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_){
_start:
{
lean_object* v___x_4305_; 
v___x_4305_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___redArg(v_sz_4295_, v_i_4296_, v_bs_4297_);
return v___x_4305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6___boxed(lean_object* v_sz_4306_, lean_object* v_i_4307_, lean_object* v_bs_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_){
_start:
{
size_t v_sz_boxed_4316_; size_t v_i_boxed_4317_; lean_object* v_res_4318_; 
v_sz_boxed_4316_ = lean_unbox_usize(v_sz_4306_);
lean_dec(v_sz_4306_);
v_i_boxed_4317_ = lean_unbox_usize(v_i_4307_);
lean_dec(v_i_4307_);
v_res_4318_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__6(v_sz_boxed_4316_, v_i_boxed_4317_, v_bs_4308_, v___y_4309_, v___y_4310_, v___y_4311_, v___y_4312_, v___y_4313_, v___y_4314_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
lean_dec(v___y_4312_);
lean_dec_ref(v___y_4311_);
lean_dec(v___y_4310_);
lean_dec_ref(v___y_4309_);
return v_res_4318_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10(lean_object* v_00_u03b1_4319_, lean_object* v_msg_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_){
_start:
{
lean_object* v___x_4328_; 
v___x_4328_ = l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___redArg(v_msg_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
return v___x_4328_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10___boxed(lean_object* v_00_u03b1_4329_, lean_object* v_msg_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_){
_start:
{
lean_object* v_res_4338_; 
v_res_4338_ = l_Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10(v_00_u03b1_4329_, v_msg_4330_, v___y_4331_, v___y_4332_, v___y_4333_, v___y_4334_, v___y_4335_, v___y_4336_);
lean_dec(v___y_4336_);
lean_dec_ref(v___y_4335_);
lean_dec(v___y_4334_);
lean_dec_ref(v___y_4333_);
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
return v_res_4338_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4(lean_object* v_00_u03b2_4339_, lean_object* v_x_4340_, size_t v_x_4341_, size_t v_x_4342_, lean_object* v_x_4343_, lean_object* v_x_4344_){
_start:
{
lean_object* v___x_4345_; 
v___x_4345_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___redArg(v_x_4340_, v_x_4341_, v_x_4342_, v_x_4343_, v_x_4344_);
return v___x_4345_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4___boxed(lean_object* v_00_u03b2_4346_, lean_object* v_x_4347_, lean_object* v_x_4348_, lean_object* v_x_4349_, lean_object* v_x_4350_, lean_object* v_x_4351_){
_start:
{
size_t v_x_37742__boxed_4352_; size_t v_x_37743__boxed_4353_; lean_object* v_res_4354_; 
v_x_37742__boxed_4352_ = lean_unbox_usize(v_x_4348_);
lean_dec(v_x_4348_);
v_x_37743__boxed_4353_ = lean_unbox_usize(v_x_4349_);
lean_dec(v_x_4349_);
v_res_4354_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4(v_00_u03b2_4346_, v_x_4347_, v_x_37742__boxed_4352_, v_x_37743__boxed_4353_, v_x_4350_, v_x_4351_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16(lean_object* v_msgData_4355_, lean_object* v_macroStack_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_){
_start:
{
lean_object* v___x_4364_; 
v___x_4364_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___redArg(v_msgData_4355_, v_macroStack_4356_, v___y_4361_);
return v___x_4364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16___boxed(lean_object* v_msgData_4365_, lean_object* v_macroStack_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_){
_start:
{
lean_object* v_res_4374_; 
v_res_4374_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__10_spec__16(v_msgData_4365_, v_macroStack_4366_, v___y_4367_, v___y_4368_, v___y_4369_, v___y_4370_, v___y_4371_, v___y_4372_);
lean_dec(v___y_4372_);
lean_dec_ref(v___y_4371_);
lean_dec(v___y_4370_);
lean_dec_ref(v___y_4369_);
lean_dec(v___y_4368_);
lean_dec_ref(v___y_4367_);
return v_res_4374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8(lean_object* v_as_4375_, size_t v_sz_4376_, size_t v_i_4377_, lean_object* v_b_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_){
_start:
{
lean_object* v___x_4386_; 
v___x_4386_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___redArg(v_as_4375_, v_sz_4376_, v_i_4377_, v_b_4378_);
return v___x_4386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8___boxed(lean_object* v_as_4387_, lean_object* v_sz_4388_, lean_object* v_i_4389_, lean_object* v_b_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_){
_start:
{
size_t v_sz_boxed_4398_; size_t v_i_boxed_4399_; lean_object* v_res_4400_; 
v_sz_boxed_4398_ = lean_unbox_usize(v_sz_4388_);
lean_dec(v_sz_4388_);
v_i_boxed_4399_ = lean_unbox_usize(v_i_4389_);
lean_dec(v_i_4389_);
v_res_4400_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__1_spec__8(v_as_4387_, v_sz_boxed_4398_, v_i_boxed_4399_, v_b_4390_, v___y_4391_, v___y_4392_, v___y_4393_, v___y_4394_, v___y_4395_, v___y_4396_);
lean_dec(v___y_4396_);
lean_dec_ref(v___y_4395_);
lean_dec(v___y_4394_);
lean_dec_ref(v___y_4393_);
lean_dec(v___y_4392_);
lean_dec_ref(v___y_4391_);
lean_dec_ref(v_as_4387_);
return v_res_4400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12(lean_object* v_00_u03b2_4401_, lean_object* v_n_4402_, lean_object* v_k_4403_, lean_object* v_v_4404_){
_start:
{
lean_object* v___x_4405_; 
v___x_4405_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12___redArg(v_n_4402_, v_k_4403_, v_v_4404_);
return v___x_4405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13(lean_object* v_00_u03b2_4406_, size_t v_depth_4407_, lean_object* v_keys_4408_, lean_object* v_vals_4409_, lean_object* v_heq_4410_, lean_object* v_i_4411_, lean_object* v_entries_4412_){
_start:
{
lean_object* v___x_4413_; 
v___x_4413_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___redArg(v_depth_4407_, v_keys_4408_, v_vals_4409_, v_i_4411_, v_entries_4412_);
return v___x_4413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13___boxed(lean_object* v_00_u03b2_4414_, lean_object* v_depth_4415_, lean_object* v_keys_4416_, lean_object* v_vals_4417_, lean_object* v_heq_4418_, lean_object* v_i_4419_, lean_object* v_entries_4420_){
_start:
{
size_t v_depth_boxed_4421_; lean_object* v_res_4422_; 
v_depth_boxed_4421_ = lean_unbox_usize(v_depth_4415_);
lean_dec(v_depth_4415_);
v_res_4422_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__13(v_00_u03b2_4414_, v_depth_boxed_4421_, v_keys_4416_, v_vals_4417_, v_heq_4418_, v_i_4419_, v_entries_4420_);
lean_dec_ref(v_vals_4417_);
lean_dec_ref(v_keys_4416_);
return v_res_4422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15(lean_object* v_as_4423_, size_t v_sz_4424_, size_t v_i_4425_, lean_object* v_b_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_){
_start:
{
lean_object* v___x_4434_; 
v___x_4434_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___redArg(v_as_4423_, v_sz_4424_, v_i_4425_, v_b_4426_);
return v___x_4434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15___boxed(lean_object* v_as_4435_, lean_object* v_sz_4436_, lean_object* v_i_4437_, lean_object* v_b_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_){
_start:
{
size_t v_sz_boxed_4446_; size_t v_i_boxed_4447_; lean_object* v_res_4448_; 
v_sz_boxed_4446_ = lean_unbox_usize(v_sz_4436_);
lean_dec(v_sz_4436_);
v_i_boxed_4447_ = lean_unbox_usize(v_i_4437_);
lean_dec(v_i_4437_);
v_res_4448_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__0_spec__0_spec__6_spec__15(v_as_4435_, v_sz_boxed_4446_, v_i_boxed_4447_, v_b_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_, v___y_4444_);
lean_dec(v___y_4444_);
lean_dec_ref(v___y_4443_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
lean_dec(v___y_4440_);
lean_dec_ref(v___y_4439_);
lean_dec_ref(v_as_4435_);
return v_res_4448_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20(lean_object* v_00_u03b2_4449_, lean_object* v_x_4450_, lean_object* v_x_4451_, lean_object* v_x_4452_, lean_object* v_x_4453_){
_start:
{
lean_object* v___x_4454_; 
v___x_4454_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore_spec__2_spec__4_spec__12_spec__20___redArg(v_x_4450_, v_x_4451_, v_x_4452_, v_x_4453_);
return v___x_4454_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; 
v___x_4455_ = lean_box(0);
v___x_4456_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_4457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4457_, 0, v___x_4456_);
lean_ctor_set(v___x_4457_, 1, v___x_4455_);
return v___x_4457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg(){
_start:
{
lean_object* v___x_4459_; lean_object* v___x_4460_; 
v___x_4459_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0);
v___x_4460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4460_, 0, v___x_4459_);
return v___x_4460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___boxed(lean_object* v___y_4461_){
_start:
{
lean_object* v_res_4462_; 
v_res_4462_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg();
return v_res_4462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0(lean_object* v_00_u03b1_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_){
_start:
{
lean_object* v___x_4471_; 
v___x_4471_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg();
return v___x_4471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___boxed(lean_object* v_00_u03b1_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_){
_start:
{
lean_object* v_res_4480_; 
v_res_4480_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0(v_00_u03b1_4472_, v___y_4473_, v___y_4474_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_);
lean_dec(v___y_4478_);
lean_dec_ref(v___y_4477_);
lean_dec(v___y_4476_);
lean_dec_ref(v___y_4475_);
lean_dec(v___y_4474_);
lean_dec_ref(v___y_4473_);
return v_res_4480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm(lean_object* v_stx_4487_, lean_object* v_expectedType_x3f_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_){
_start:
{
lean_object* v___x_4496_; uint8_t v___x_4497_; 
v___x_4496_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1));
lean_inc(v_stx_4487_);
v___x_4497_ = l_Lean_Syntax_isOfKind(v_stx_4487_, v___x_4496_);
if (v___x_4497_ == 0)
{
lean_object* v___x_4498_; 
lean_dec(v_expectedType_x3f_4488_);
lean_dec(v_stx_4487_);
v___x_4498_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg();
return v___x_4498_;
}
else
{
lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v_body_4502_; lean_object* v___x_4503_; 
v___x_4499_ = lean_unsigned_to_nat(1u);
v___x_4500_ = l_Lean_Syntax_getArg(v_stx_4487_, v___x_4499_);
v___x_4501_ = lean_unsigned_to_nat(3u);
v_body_4502_ = l_Lean_Syntax_getArg(v_stx_4487_, v___x_4501_);
v___x_4503_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore(v___x_4500_, v_body_4502_, v_stx_4487_, v_expectedType_x3f_4488_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_, v___y_4494_);
return v___x_4503_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___boxed(lean_object* v_stx_4504_, lean_object* v_expectedType_x3f_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_){
_start:
{
lean_object* v_res_4513_; 
v_res_4513_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm(v_stx_4504_, v_expectedType_x3f_4505_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_);
lean_dec(v___y_4511_);
lean_dec_ref(v___y_4510_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
lean_dec(v___y_4507_);
lean_dec_ref(v___y_4506_);
return v_res_4513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1(){
_start:
{
lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; 
v___x_4519_ = l_Lean_Elab_Term_termElabAttribute;
v___x_4520_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___closed__1));
v___x_4521_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___closed__1));
v___x_4522_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___boxed), 9, 0);
v___x_4523_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4519_, v___x_4520_, v___x_4521_, v___x_4522_);
return v___x_4523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1___boxed(lean_object* v___y_4524_){
_start:
{
lean_object* v_res_4525_; 
v_res_4525_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1();
return v_res_4525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg(){
_start:
{
lean_object* v___x_4527_; lean_object* v___x_4528_; 
v___x_4527_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm_spec__0___redArg___closed__0);
v___x_4528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4528_, 0, v___x_4527_);
return v___x_4528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg___boxed(lean_object* v___y_4529_){
_start:
{
lean_object* v_res_4530_; 
v_res_4530_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg();
return v_res_4530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0(lean_object* v_00_u03b1_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_){
_start:
{
lean_object* v___x_4540_; 
v___x_4540_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg();
return v___x_4540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___boxed(lean_object* v_00_u03b1_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_){
_start:
{
lean_object* v_res_4550_; 
v_res_4550_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0(v_00_u03b1_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_, v___y_4547_, v___y_4548_);
lean_dec(v___y_4548_);
lean_dec_ref(v___y_4547_);
lean_dec(v___y_4546_);
lean_dec_ref(v___y_4545_);
lean_dec(v___y_4544_);
lean_dec_ref(v___y_4543_);
lean_dec_ref(v___y_4542_);
return v_res_4550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0(lean_object* v_a_4551_, lean_object* v___x_4552_, lean_object* v_stx_4553_, lean_object* v_body_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_){
_start:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4563_, 0, v_a_4551_);
v___x_4564_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgCore(v___x_4552_, v_body_4554_, v_stx_4553_, v___x_4563_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
return v___x_4564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0___boxed(lean_object* v_a_4565_, lean_object* v___x_4566_, lean_object* v_stx_4567_, lean_object* v_body_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_){
_start:
{
lean_object* v_res_4577_; 
v_res_4577_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0(v_a_4565_, v___x_4566_, v_stx_4567_, v_body_4568_, v___y_4569_, v___y_4570_, v___y_4571_, v___y_4572_, v___y_4573_, v___y_4574_, v___y_4575_);
lean_dec(v___y_4575_);
lean_dec_ref(v___y_4574_);
lean_dec(v___y_4573_);
lean_dec_ref(v___y_4572_);
lean_dec(v___y_4571_);
lean_dec_ref(v___y_4570_);
lean_dec_ref(v___y_4569_);
return v_res_4577_;
}
}
static lean_object* _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2(void){
_start:
{
lean_object* v___x_4581_; lean_object* v___x_4582_; 
v___x_4581_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__1));
v___x_4582_ = l_Lean_MessageData_ofFormat(v___x_4581_);
return v___x_4582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg(lean_object* v_stx_4583_, lean_object* v_dec_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_){
_start:
{
lean_object* v___x_4593_; uint8_t v___x_4594_; 
v___x_4593_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4));
lean_inc(v_stx_4583_);
v___x_4594_ = l_Lean_Syntax_isOfKind(v_stx_4583_, v___x_4593_);
if (v___x_4594_ == 0)
{
lean_object* v___x_4595_; 
lean_dec_ref(v_dec_4584_);
lean_dec(v_stx_4583_);
v___x_4595_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg_spec__0___redArg();
return v___x_4595_;
}
else
{
lean_object* v_doBlockResultType_4596_; lean_object* v___x_4597_; lean_object* v_tk_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; 
v_doBlockResultType_4596_ = lean_ctor_get(v___y_4585_, 3);
v___x_4597_ = lean_unsigned_to_nat(0u);
v_tk_4598_ = l_Lean_Syntax_getArg(v_stx_4583_, v___x_4597_);
v___x_4599_ = lean_unsigned_to_nat(1u);
v___x_4600_ = l_Lean_Syntax_getArg(v_stx_4583_, v___x_4599_);
lean_inc_ref(v_doBlockResultType_4596_);
v___x_4601_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_4596_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_, v___y_4591_);
if (lean_obj_tag(v___x_4601_) == 0)
{
lean_object* v_a_4602_; lean_object* v___f_4603_; lean_object* v___x_4604_; 
v_a_4602_ = lean_ctor_get(v___x_4601_, 0);
lean_inc(v_a_4602_);
lean_dec_ref_known(v___x_4601_, 1);
v___f_4603_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___lam__0___boxed), 12, 3);
lean_closure_set(v___f_4603_, 0, v_a_4602_);
lean_closure_set(v___f_4603_, 1, v___x_4600_);
lean_closure_set(v___f_4603_, 2, v_stx_4583_);
v___x_4604_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_4584_, v_tk_4598_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_, v___y_4591_);
lean_dec(v_tk_4598_);
if (lean_obj_tag(v___x_4604_) == 0)
{
lean_object* v_a_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; 
v_a_4605_ = lean_ctor_get(v___x_4604_, 0);
lean_inc(v_a_4605_);
lean_dec_ref_known(v___x_4604_, 1);
v___x_4606_ = lean_obj_once(&l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2, &l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2_once, _init_l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___closed__2);
v___x_4607_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_4607_, 0, v_a_4605_);
v___x_4608_ = lean_box(0);
v___x_4609_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_4606_, v___x_4607_, v___f_4603_, v___x_4608_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_, v___y_4591_);
return v___x_4609_;
}
else
{
lean_object* v_a_4610_; lean_object* v___x_4612_; uint8_t v_isShared_4613_; uint8_t v_isSharedCheck_4617_; 
lean_dec_ref(v___f_4603_);
v_a_4610_ = lean_ctor_get(v___x_4604_, 0);
v_isSharedCheck_4617_ = !lean_is_exclusive(v___x_4604_);
if (v_isSharedCheck_4617_ == 0)
{
v___x_4612_ = v___x_4604_;
v_isShared_4613_ = v_isSharedCheck_4617_;
goto v_resetjp_4611_;
}
else
{
lean_inc(v_a_4610_);
lean_dec(v___x_4604_);
v___x_4612_ = lean_box(0);
v_isShared_4613_ = v_isSharedCheck_4617_;
goto v_resetjp_4611_;
}
v_resetjp_4611_:
{
lean_object* v___x_4615_; 
if (v_isShared_4613_ == 0)
{
v___x_4615_ = v___x_4612_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v_a_4610_);
v___x_4615_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
return v___x_4615_;
}
}
}
}
else
{
lean_dec(v___x_4600_);
lean_dec(v_tk_4598_);
lean_dec_ref(v_dec_4584_);
lean_dec(v_stx_4583_);
return v___x_4601_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___boxed(lean_object* v_stx_4618_, lean_object* v_dec_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_){
_start:
{
lean_object* v_res_4628_; 
v_res_4628_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg(v_stx_4618_, v_dec_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_, v___y_4626_);
lean_dec(v___y_4626_);
lean_dec_ref(v___y_4625_);
lean_dec(v___y_4624_);
lean_dec_ref(v___y_4623_);
lean_dec(v___y_4622_);
lean_dec_ref(v___y_4621_);
lean_dec_ref(v___y_4620_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1(){
_start:
{
lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; 
v___x_4634_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4635_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1___closed__4));
v___x_4636_ = ((lean_object*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___closed__1));
v___x_4637_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___boxed), 10, 0);
v___x_4638_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4634_, v___x_4635_, v___x_4636_, v___x_4637_);
return v___x_4638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1___boxed(lean_object* v___y_4639_){
_start:
{
lean_object* v_res_4640_; 
v_res_4640_ = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1();
return v_res_4640_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Async_TCP(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Idbg(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_controlInfoIdbg__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabIdbgTerm__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg___regBuiltin___private_Lean_Elab_Idbg_0__Lean_Elab_Do_elabDoIdbg__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Idbg(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Std_Async_TCP(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Idbg(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_TCP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Idbg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Idbg(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Idbg(builtin);
}
#ifdef __cplusplus
}
#endif
