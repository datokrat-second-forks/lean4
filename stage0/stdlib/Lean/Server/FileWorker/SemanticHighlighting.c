// Lean compiler output
// Module: Lean.Server.FileWorker.SemanticHighlighting
// Imports: public import Lean.Server.Requests import Lean.DocString.View
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
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instOrdPosition_ord(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instBEqPosition_beq(lean_object*, lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_endPos(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t l_Lean_isLetterLike(uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* lean_array_get_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Doc_InlineView_of(lean_object*);
lean_object* l_Lean_TSyntax_getVersoCodeLines(lean_object*);
lean_object* l_Lean_TSyntax_getVersoCodeLine(lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_ofRange(lean_object*, uint8_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_ArgView_of(lean_object*);
lean_object* l_Lean_Doc_BlockView_of(lean_object*);
lean_object* l_Lean_TSyntax_getVersoCodeBlockLines(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Server_Snapshots_Snapshot_infoTree(lean_object*);
extern lean_object* l_Lean_Parser_Term_identProjKind;
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Elab_InfoTree_deepestNodes___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Server_RequestM_checkCancelled(lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_FileMap_lspPosToUtf8Pos(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_mergeSort___redArg(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_SemanticTokenType_toNat(uint8_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_AsyncList_waitUntil___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_mapTaskCostly___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
uint64_t lean_string_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* l_Lean_Lsp_instFromJsonSemanticTokensRangeParams_fromJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Lean_Server_RequestCancellationToken_cancellationTasks(lean_object*);
lean_object* l_Lean_AsyncList_getFinishedPrefixWithTimeout___redArg(lean_object*, uint32_t, lean_object*);
lean_object* l_Lean_FileMap_lspRangeOfStx_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instBEqSemanticTokenType_beq(uint8_t, uint8_t);
lean_object* lean_io_basemutex_lock(lean_object*);
lean_object* lean_io_basemutex_unlock(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Server_ServerTask_mapCheap___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonSemanticTokensParams_fromJson(lean_object*);
lean_object* l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonSemanticTokens_toJson(lean_object*);
extern lean_object* l_Lean_Server_requestHandlers;
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Std_Mutex_new___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_Server_statefulRequestHandlers;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonPosition_fromJson(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonSemanticTokenType_fromJson(lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Lsp_instToJsonSemanticTokenType_toJson(uint8_t);
lean_object* lean_string_push(lean_object*, uint32_t);
uint64_t l_Lean_Lsp_instHashablePosition_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t l_Lean_Lsp_instHashableSemanticTokenType_hash(uint8_t);
lean_object* l_Lean_Lsp_instToJsonPosition_toJson(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sorry"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__3_value;
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(138, 85, 70, 0, 206, 11, 146, 59)}};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__4 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__5 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__5_value;
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__5_value),LEAN_SCALAR_PTR_LITERAL(64, 200, 114, 122, 5, 59, 103, 167)}};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__6 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "prop"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__7 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__7_value;
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__7_value),LEAN_SCALAR_PTR_LITERAL(200, 217, 246, 140, 179, 171, 30, 243)}};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__8 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value;
static const lean_string_object l_Lean_Server_FileWorker_noHighlightKinds___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__9 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__9_value;
static const lean_ctor_object l_Lean_Server_FileWorker_noHighlightKinds___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__9_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__10 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__10_value;
static const lean_array_object l_Lean_Server_FileWorker_noHighlightKinds___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__4_value),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__6_value),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__8_value),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__10_value)}};
static const lean_object* l_Lean_Server_FileWorker_noHighlightKinds___closed__11 = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_noHighlightKinds = (const lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__11_value;
static const lean_string_object l_Lean_Server_FileWorker_docKinds___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__0_value;
static const lean_string_object l_Lean_Server_FileWorker_docKinds___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "plainDocComment"};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__1_value;
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__2_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(130, 89, 58, 24, 132, 56, 253, 137)}};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__2_value;
static const lean_string_object l_Lean_Server_FileWorker_docKinds___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__3_value;
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__4_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__3_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__4 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__4_value;
static const lean_string_object l_Lean_Server_FileWorker_docKinds___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "moduleDoc"};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__5 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__5_value;
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Server_FileWorker_docKinds___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__6_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__5_value),LEAN_SCALAR_PTR_LITERAL(249, 71, 187, 113, 90, 175, 60, 199)}};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__6 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__6_value;
static const lean_array_object l_Lean_Server_FileWorker_docKinds___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__2_value),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__4_value),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__6_value)}};
static const lean_object* l_Lean_Server_FileWorker_docKinds___closed__7 = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_docKinds = (const lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__7_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0;
static const lean_string_object l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "admit"};
static const lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__1_value;
static lean_once_cell_t l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2;
static const lean_string_object l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stop"};
static const lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__3_value;
static lean_once_cell_t l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4;
static const lean_string_object l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "#exit"};
static const lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__5 = (const lean_object*)&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__5_value;
static lean_once_cell_t l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_keywordSemanticTokenMap;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken = (const lean_object*)&l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken = (const lean_object*)&l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0_value;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__1_value;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FileWorker"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__2_value;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "AbsoluteLspSemanticToken"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(232, 14, 27, 113, 182, 128, 119, 36)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(250, 244, 165, 17, 43, 66, 230, 94)}};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__6 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__6_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7;
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 67, 188, 228, 198, 126, 180, 88)}};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__8 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__8_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "tailPos"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13_value;
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13_value),LEAN_SCALAR_PTR_LITERAL(90, 23, 179, 28, 157, 202, 35, 235)}};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__14 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__14_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17;
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__5_value),LEAN_SCALAR_PTR_LITERAL(112, 109, 54, 158, 248, 169, 165, 159)}};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__18 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__18_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21;
static const lean_string_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "priority"};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22_value;
static const lean_ctor_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22_value),LEAN_SCALAR_PTR_LITERAL(119, 157, 28, 87, 58, 42, 19, 197)}};
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__23 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__23_value;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25;
static lean_once_cell_t l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson(lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken = (const lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson(lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken = (const lean_object*)&l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__0_value;
static const lean_ctor_object l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_instInhabitedHandleOverlapState = (const lean_object*)&l_Lean_Server_FileWorker_instInhabitedHandleOverlapState_default___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_token(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleOverlappingSemanticTokens(lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine___closed__0 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDesc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDelimited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDelimited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0 = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__0_value;
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1_value;
static const lean_string_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pipeProj"};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__2_value;
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 78, 204, 170, 128, 130, 207, 24)}};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3_value;
static const lean_string_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__4 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__4_value;
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__4_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5_value;
static const lean_array_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6_value;
static const lean_string_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__7 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__7_value;
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8_value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8_value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_docKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8_value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__7_value),LEAN_SCALAR_PTR_LITERAL(13, 150, 193, 173, 39, 149, 4, 235)}};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8_value;
static const lean_string_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__9 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__9_value;
static const lean_ctor_object l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__9_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__10 = (const lean_object*)&l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___closed__0 = (const lean_object*)&l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_dbgShowTokens___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0_value;
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1_value;
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__0(lean_object*, lean_object*);
static const lean_closure_object l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":\t"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4___redArg(lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_FileWorker_dbgShowTokens___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_dbgShowTokens___closed__0;
static lean_once_cell_t l_Lean_Server_FileWorker_dbgShowTokens___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_FileWorker_dbgShowTokens___closed__1;
static const lean_closure_object l_Lean_Server_FileWorker_dbgShowTokens___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_dbgShowTokens___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_FileWorker_dbgShowTokens___closed__2 = (const lean_object*)&l_Lean_Server_FileWorker_dbgShowTokens___closed__2_value;
static const lean_string_object l_Lean_Server_FileWorker_dbgShowTokens___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Server_FileWorker_dbgShowTokens___closed__3 = (const lean_object*)&l_Lean_Server_FileWorker_dbgShowTokens___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeSemanticTokens(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeSemanticTokens___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "SemanticTokensState"};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value;
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_FileWorker_noHighlightKinds___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_0),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_1),((lean_object*)&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(232, 14, 27, 113, 182, 128, 119, 36)}};
static const lean_ctor_object l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value_aux_2),((lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value),LEAN_SCALAR_PTR_LITERAL(114, 29, 136, 15, 114, 206, 151, 105)}};
static const lean_object* l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_ = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value;
LEAN_EXPORT const lean_object* l_Lean_Server_FileWorker_instTypeNameSemanticTokensState = (const lean_object*)&l_Lean_Server_FileWorker_instImpl___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7__value;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instInhabitedSemanticTokensState_default;
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instInhabitedSemanticTokensState;
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Cannot parse request params: "};
static const lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12___closed__0 = (const lean_object*)&l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Failed to register stateful LSP request handler for '"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "': only possible during initialization"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__3 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__4 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "': already registered"};
static const lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__0_value;
static const lean_string_object l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Failed to register LSP request handler for '"};
static const lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__1 = (const lean_object*)&l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "textDocument/semanticTokens/range"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleSemanticTokensRange___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "textDocument/semanticTokens/full"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "workspace/semanticTokens/refresh"};
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__4_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleSemanticTokensFull___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__4_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__4_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__5_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_FileWorker_handleSemanticTokensDidChange___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__5_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__5_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(lean_object* v_k_64_, lean_object* v_v_65_, lean_object* v_t_66_){
_start:
{
if (lean_obj_tag(v_t_66_) == 0)
{
lean_object* v_size_67_; lean_object* v_k_68_; lean_object* v_v_69_; lean_object* v_l_70_; lean_object* v_r_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_351_; 
v_size_67_ = lean_ctor_get(v_t_66_, 0);
v_k_68_ = lean_ctor_get(v_t_66_, 1);
v_v_69_ = lean_ctor_get(v_t_66_, 2);
v_l_70_ = lean_ctor_get(v_t_66_, 3);
v_r_71_ = lean_ctor_get(v_t_66_, 4);
v_isSharedCheck_351_ = !lean_is_exclusive(v_t_66_);
if (v_isSharedCheck_351_ == 0)
{
v___x_73_ = v_t_66_;
v_isShared_74_ = v_isSharedCheck_351_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_r_71_);
lean_inc(v_l_70_);
lean_inc(v_v_69_);
lean_inc(v_k_68_);
lean_inc(v_size_67_);
lean_dec(v_t_66_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_351_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
uint8_t v___x_75_; 
v___x_75_ = lean_string_compare(v_k_64_, v_k_68_);
switch(v___x_75_)
{
case 0:
{
lean_object* v_impl_76_; lean_object* v___x_77_; 
lean_dec(v_size_67_);
v_impl_76_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v_k_64_, v_v_65_, v_l_70_);
v___x_77_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_71_) == 0)
{
lean_object* v_size_78_; lean_object* v_size_79_; lean_object* v_k_80_; lean_object* v_v_81_; lean_object* v_l_82_; lean_object* v_r_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v_size_78_ = lean_ctor_get(v_r_71_, 0);
v_size_79_ = lean_ctor_get(v_impl_76_, 0);
v_k_80_ = lean_ctor_get(v_impl_76_, 1);
v_v_81_ = lean_ctor_get(v_impl_76_, 2);
v_l_82_ = lean_ctor_get(v_impl_76_, 3);
v_r_83_ = lean_ctor_get(v_impl_76_, 4);
lean_inc(v_r_83_);
v___x_84_ = lean_unsigned_to_nat(3u);
v___x_85_ = lean_nat_mul(v___x_84_, v_size_78_);
v___x_86_ = lean_nat_dec_lt(v___x_85_, v_size_79_);
lean_dec(v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_90_; 
lean_dec(v_r_83_);
v___x_87_ = lean_nat_add(v___x_77_, v_size_79_);
v___x_88_ = lean_nat_add(v___x_87_, v_size_78_);
lean_dec(v___x_87_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 3, v_impl_76_);
lean_ctor_set(v___x_73_, 0, v___x_88_);
v___x_90_ = v___x_73_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
lean_ctor_set(v_reuseFailAlloc_91_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_91_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_91_, 3, v_impl_76_);
lean_ctor_set(v_reuseFailAlloc_91_, 4, v_r_71_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
else
{
lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_157_; 
lean_inc(v_l_82_);
lean_inc(v_v_81_);
lean_inc(v_k_80_);
lean_inc(v_size_79_);
v_isSharedCheck_157_ = !lean_is_exclusive(v_impl_76_);
if (v_isSharedCheck_157_ == 0)
{
lean_object* v_unused_158_; lean_object* v_unused_159_; lean_object* v_unused_160_; lean_object* v_unused_161_; lean_object* v_unused_162_; 
v_unused_158_ = lean_ctor_get(v_impl_76_, 4);
lean_dec(v_unused_158_);
v_unused_159_ = lean_ctor_get(v_impl_76_, 3);
lean_dec(v_unused_159_);
v_unused_160_ = lean_ctor_get(v_impl_76_, 2);
lean_dec(v_unused_160_);
v_unused_161_ = lean_ctor_get(v_impl_76_, 1);
lean_dec(v_unused_161_);
v_unused_162_ = lean_ctor_get(v_impl_76_, 0);
lean_dec(v_unused_162_);
v___x_93_ = v_impl_76_;
v_isShared_94_ = v_isSharedCheck_157_;
goto v_resetjp_92_;
}
else
{
lean_dec(v_impl_76_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_157_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_size_95_; lean_object* v_size_96_; lean_object* v_k_97_; lean_object* v_v_98_; lean_object* v_l_99_; lean_object* v_r_100_; lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; 
v_size_95_ = lean_ctor_get(v_l_82_, 0);
v_size_96_ = lean_ctor_get(v_r_83_, 0);
v_k_97_ = lean_ctor_get(v_r_83_, 1);
v_v_98_ = lean_ctor_get(v_r_83_, 2);
v_l_99_ = lean_ctor_get(v_r_83_, 3);
v_r_100_ = lean_ctor_get(v_r_83_, 4);
v___x_101_ = lean_unsigned_to_nat(2u);
v___x_102_ = lean_nat_mul(v___x_101_, v_size_95_);
v___x_103_ = lean_nat_dec_lt(v_size_96_, v___x_102_);
lean_dec(v___x_102_);
if (v___x_103_ == 0)
{
lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_132_; 
lean_inc(v_r_100_);
lean_inc(v_l_99_);
lean_inc(v_v_98_);
lean_inc(v_k_97_);
v_isSharedCheck_132_ = !lean_is_exclusive(v_r_83_);
if (v_isSharedCheck_132_ == 0)
{
lean_object* v_unused_133_; lean_object* v_unused_134_; lean_object* v_unused_135_; lean_object* v_unused_136_; lean_object* v_unused_137_; 
v_unused_133_ = lean_ctor_get(v_r_83_, 4);
lean_dec(v_unused_133_);
v_unused_134_ = lean_ctor_get(v_r_83_, 3);
lean_dec(v_unused_134_);
v_unused_135_ = lean_ctor_get(v_r_83_, 2);
lean_dec(v_unused_135_);
v_unused_136_ = lean_ctor_get(v_r_83_, 1);
lean_dec(v_unused_136_);
v_unused_137_ = lean_ctor_get(v_r_83_, 0);
lean_dec(v_unused_137_);
v___x_105_ = v_r_83_;
v_isShared_106_ = v_isSharedCheck_132_;
goto v_resetjp_104_;
}
else
{
lean_dec(v_r_83_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_132_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___y_110_; lean_object* v___y_111_; lean_object* v___y_112_; lean_object* v___x_120_; lean_object* v___y_122_; 
v___x_107_ = lean_nat_add(v___x_77_, v_size_79_);
lean_dec(v_size_79_);
v___x_108_ = lean_nat_add(v___x_107_, v_size_78_);
lean_dec(v___x_107_);
v___x_120_ = lean_nat_add(v___x_77_, v_size_95_);
if (lean_obj_tag(v_l_99_) == 0)
{
lean_object* v_size_130_; 
v_size_130_ = lean_ctor_get(v_l_99_, 0);
lean_inc(v_size_130_);
v___y_122_ = v_size_130_;
goto v___jp_121_;
}
else
{
lean_object* v___x_131_; 
v___x_131_ = lean_unsigned_to_nat(0u);
v___y_122_ = v___x_131_;
goto v___jp_121_;
}
v___jp_109_:
{
lean_object* v___x_113_; lean_object* v___x_115_; 
v___x_113_ = lean_nat_add(v___y_111_, v___y_112_);
lean_dec(v___y_112_);
lean_dec(v___y_111_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 4, v_r_71_);
lean_ctor_set(v___x_105_, 3, v_r_100_);
lean_ctor_set(v___x_105_, 2, v_v_69_);
lean_ctor_set(v___x_105_, 1, v_k_68_);
lean_ctor_set(v___x_105_, 0, v___x_113_);
v___x_115_ = v___x_105_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v___x_113_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_119_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_119_, 3, v_r_100_);
lean_ctor_set(v_reuseFailAlloc_119_, 4, v_r_71_);
v___x_115_ = v_reuseFailAlloc_119_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
lean_object* v___x_117_; 
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 4, v___x_115_);
lean_ctor_set(v___x_93_, 3, v___y_110_);
lean_ctor_set(v___x_93_, 2, v_v_98_);
lean_ctor_set(v___x_93_, 1, v_k_97_);
lean_ctor_set(v___x_93_, 0, v___x_108_);
v___x_117_ = v___x_93_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v_k_97_);
lean_ctor_set(v_reuseFailAlloc_118_, 2, v_v_98_);
lean_ctor_set(v_reuseFailAlloc_118_, 3, v___y_110_);
lean_ctor_set(v_reuseFailAlloc_118_, 4, v___x_115_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
v___jp_121_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_123_ = lean_nat_add(v___x_120_, v___y_122_);
lean_dec(v___y_122_);
lean_dec(v___x_120_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_l_99_);
lean_ctor_set(v___x_73_, 3, v_l_82_);
lean_ctor_set(v___x_73_, 2, v_v_81_);
lean_ctor_set(v___x_73_, 1, v_k_80_);
lean_ctor_set(v___x_73_, 0, v___x_123_);
v___x_125_ = v___x_73_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v_k_80_);
lean_ctor_set(v_reuseFailAlloc_129_, 2, v_v_81_);
lean_ctor_set(v_reuseFailAlloc_129_, 3, v_l_82_);
lean_ctor_set(v_reuseFailAlloc_129_, 4, v_l_99_);
v___x_125_ = v_reuseFailAlloc_129_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; 
v___x_126_ = lean_nat_add(v___x_77_, v_size_78_);
if (lean_obj_tag(v_r_100_) == 0)
{
lean_object* v_size_127_; 
v_size_127_ = lean_ctor_get(v_r_100_, 0);
lean_inc(v_size_127_);
v___y_110_ = v___x_125_;
v___y_111_ = v___x_126_;
v___y_112_ = v_size_127_;
goto v___jp_109_;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = lean_unsigned_to_nat(0u);
v___y_110_ = v___x_125_;
v___y_111_ = v___x_126_;
v___y_112_ = v___x_128_;
goto v___jp_109_;
}
}
}
}
}
else
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_143_; 
lean_del_object(v___x_73_);
v___x_138_ = lean_nat_add(v___x_77_, v_size_79_);
lean_dec(v_size_79_);
v___x_139_ = lean_nat_add(v___x_138_, v_size_78_);
lean_dec(v___x_138_);
v___x_140_ = lean_nat_add(v___x_77_, v_size_78_);
v___x_141_ = lean_nat_add(v___x_140_, v_size_96_);
lean_dec(v___x_140_);
lean_inc_ref(v_r_71_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 4, v_r_71_);
lean_ctor_set(v___x_93_, 3, v_r_83_);
lean_ctor_set(v___x_93_, 2, v_v_69_);
lean_ctor_set(v___x_93_, 1, v_k_68_);
lean_ctor_set(v___x_93_, 0, v___x_141_);
v___x_143_ = v___x_93_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_156_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_156_, 3, v_r_83_);
lean_ctor_set(v_reuseFailAlloc_156_, 4, v_r_71_);
v___x_143_ = v_reuseFailAlloc_156_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
v_isSharedCheck_150_ = !lean_is_exclusive(v_r_71_);
if (v_isSharedCheck_150_ == 0)
{
lean_object* v_unused_151_; lean_object* v_unused_152_; lean_object* v_unused_153_; lean_object* v_unused_154_; lean_object* v_unused_155_; 
v_unused_151_ = lean_ctor_get(v_r_71_, 4);
lean_dec(v_unused_151_);
v_unused_152_ = lean_ctor_get(v_r_71_, 3);
lean_dec(v_unused_152_);
v_unused_153_ = lean_ctor_get(v_r_71_, 2);
lean_dec(v_unused_153_);
v_unused_154_ = lean_ctor_get(v_r_71_, 1);
lean_dec(v_unused_154_);
v_unused_155_ = lean_ctor_get(v_r_71_, 0);
lean_dec(v_unused_155_);
v___x_145_ = v_r_71_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_dec(v_r_71_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 4, v___x_143_);
lean_ctor_set(v___x_145_, 3, v_l_82_);
lean_ctor_set(v___x_145_, 2, v_v_81_);
lean_ctor_set(v___x_145_, 1, v_k_80_);
lean_ctor_set(v___x_145_, 0, v___x_139_);
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_139_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v_k_80_);
lean_ctor_set(v_reuseFailAlloc_149_, 2, v_v_81_);
lean_ctor_set(v_reuseFailAlloc_149_, 3, v_l_82_);
lean_ctor_set(v_reuseFailAlloc_149_, 4, v___x_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_163_; 
v_l_163_ = lean_ctor_get(v_impl_76_, 3);
if (lean_obj_tag(v_l_163_) == 0)
{
lean_object* v_r_164_; lean_object* v_k_165_; lean_object* v_v_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_177_; 
lean_inc_ref(v_l_163_);
v_r_164_ = lean_ctor_get(v_impl_76_, 4);
v_k_165_ = lean_ctor_get(v_impl_76_, 1);
v_v_166_ = lean_ctor_get(v_impl_76_, 2);
v_isSharedCheck_177_ = !lean_is_exclusive(v_impl_76_);
if (v_isSharedCheck_177_ == 0)
{
lean_object* v_unused_178_; lean_object* v_unused_179_; 
v_unused_178_ = lean_ctor_get(v_impl_76_, 3);
lean_dec(v_unused_178_);
v_unused_179_ = lean_ctor_get(v_impl_76_, 0);
lean_dec(v_unused_179_);
v___x_168_ = v_impl_76_;
v_isShared_169_ = v_isSharedCheck_177_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_r_164_);
lean_inc(v_v_166_);
lean_inc(v_k_165_);
lean_dec(v_impl_76_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_177_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_170_; lean_object* v___x_172_; 
v___x_170_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_164_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 3, v_r_164_);
lean_ctor_set(v___x_168_, 2, v_v_69_);
lean_ctor_set(v___x_168_, 1, v_k_68_);
lean_ctor_set(v___x_168_, 0, v___x_77_);
v___x_172_ = v___x_168_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_176_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_176_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_176_, 3, v_r_164_);
lean_ctor_set(v_reuseFailAlloc_176_, 4, v_r_164_);
v___x_172_ = v_reuseFailAlloc_176_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_object* v___x_174_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v___x_172_);
lean_ctor_set(v___x_73_, 3, v_l_163_);
lean_ctor_set(v___x_73_, 2, v_v_166_);
lean_ctor_set(v___x_73_, 1, v_k_165_);
lean_ctor_set(v___x_73_, 0, v___x_170_);
v___x_174_ = v___x_73_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_170_);
lean_ctor_set(v_reuseFailAlloc_175_, 1, v_k_165_);
lean_ctor_set(v_reuseFailAlloc_175_, 2, v_v_166_);
lean_ctor_set(v_reuseFailAlloc_175_, 3, v_l_163_);
lean_ctor_set(v_reuseFailAlloc_175_, 4, v___x_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
else
{
lean_object* v_r_180_; 
v_r_180_ = lean_ctor_get(v_impl_76_, 4);
lean_inc(v_r_180_);
if (lean_obj_tag(v_r_180_) == 0)
{
lean_object* v_k_181_; lean_object* v_v_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_205_; 
lean_inc(v_l_163_);
v_k_181_ = lean_ctor_get(v_impl_76_, 1);
v_v_182_ = lean_ctor_get(v_impl_76_, 2);
v_isSharedCheck_205_ = !lean_is_exclusive(v_impl_76_);
if (v_isSharedCheck_205_ == 0)
{
lean_object* v_unused_206_; lean_object* v_unused_207_; lean_object* v_unused_208_; 
v_unused_206_ = lean_ctor_get(v_impl_76_, 4);
lean_dec(v_unused_206_);
v_unused_207_ = lean_ctor_get(v_impl_76_, 3);
lean_dec(v_unused_207_);
v_unused_208_ = lean_ctor_get(v_impl_76_, 0);
lean_dec(v_unused_208_);
v___x_184_ = v_impl_76_;
v_isShared_185_ = v_isSharedCheck_205_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_v_182_);
lean_inc(v_k_181_);
lean_dec(v_impl_76_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_205_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v_k_186_; lean_object* v_v_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_201_; 
v_k_186_ = lean_ctor_get(v_r_180_, 1);
v_v_187_ = lean_ctor_get(v_r_180_, 2);
v_isSharedCheck_201_ = !lean_is_exclusive(v_r_180_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; lean_object* v_unused_203_; lean_object* v_unused_204_; 
v_unused_202_ = lean_ctor_get(v_r_180_, 4);
lean_dec(v_unused_202_);
v_unused_203_ = lean_ctor_get(v_r_180_, 3);
lean_dec(v_unused_203_);
v_unused_204_ = lean_ctor_get(v_r_180_, 0);
lean_dec(v_unused_204_);
v___x_189_ = v_r_180_;
v_isShared_190_ = v_isSharedCheck_201_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_v_187_);
lean_inc(v_k_186_);
lean_dec(v_r_180_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_201_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_191_ = lean_unsigned_to_nat(3u);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 4, v_l_163_);
lean_ctor_set(v___x_189_, 3, v_l_163_);
lean_ctor_set(v___x_189_, 2, v_v_182_);
lean_ctor_set(v___x_189_, 1, v_k_181_);
lean_ctor_set(v___x_189_, 0, v___x_77_);
v___x_193_ = v___x_189_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v_k_181_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v_v_182_);
lean_ctor_set(v_reuseFailAlloc_200_, 3, v_l_163_);
lean_ctor_set(v_reuseFailAlloc_200_, 4, v_l_163_);
v___x_193_ = v_reuseFailAlloc_200_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_195_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 4, v_l_163_);
lean_ctor_set(v___x_184_, 2, v_v_69_);
lean_ctor_set(v___x_184_, 1, v_k_68_);
lean_ctor_set(v___x_184_, 0, v___x_77_);
v___x_195_ = v___x_184_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_199_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_199_, 3, v_l_163_);
lean_ctor_set(v_reuseFailAlloc_199_, 4, v_l_163_);
v___x_195_ = v_reuseFailAlloc_199_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_197_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v___x_195_);
lean_ctor_set(v___x_73_, 3, v___x_193_);
lean_ctor_set(v___x_73_, 2, v_v_187_);
lean_ctor_set(v___x_73_, 1, v_k_186_);
lean_ctor_set(v___x_73_, 0, v___x_191_);
v___x_197_ = v___x_73_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_191_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v_k_186_);
lean_ctor_set(v_reuseFailAlloc_198_, 2, v_v_187_);
lean_ctor_set(v_reuseFailAlloc_198_, 3, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_198_, 4, v___x_195_);
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
}
else
{
lean_object* v___x_209_; lean_object* v___x_211_; 
v___x_209_ = lean_unsigned_to_nat(2u);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_r_180_);
lean_ctor_set(v___x_73_, 3, v_impl_76_);
lean_ctor_set(v___x_73_, 0, v___x_209_);
v___x_211_ = v___x_73_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_209_);
lean_ctor_set(v_reuseFailAlloc_212_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_212_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_212_, 3, v_impl_76_);
lean_ctor_set(v_reuseFailAlloc_212_, 4, v_r_180_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
}
case 1:
{
lean_object* v___x_214_; 
lean_dec(v_v_69_);
lean_dec(v_k_68_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 2, v_v_65_);
lean_ctor_set(v___x_73_, 1, v_k_64_);
v___x_214_ = v___x_73_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_size_67_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v_k_64_);
lean_ctor_set(v_reuseFailAlloc_215_, 2, v_v_65_);
lean_ctor_set(v_reuseFailAlloc_215_, 3, v_l_70_);
lean_ctor_set(v_reuseFailAlloc_215_, 4, v_r_71_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
default: 
{
lean_object* v_impl_216_; lean_object* v___x_217_; 
lean_dec(v_size_67_);
v_impl_216_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v_k_64_, v_v_65_, v_r_71_);
v___x_217_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_70_) == 0)
{
lean_object* v_size_218_; lean_object* v_size_219_; lean_object* v_k_220_; lean_object* v_v_221_; lean_object* v_l_222_; lean_object* v_r_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v_size_218_ = lean_ctor_get(v_l_70_, 0);
v_size_219_ = lean_ctor_get(v_impl_216_, 0);
v_k_220_ = lean_ctor_get(v_impl_216_, 1);
v_v_221_ = lean_ctor_get(v_impl_216_, 2);
v_l_222_ = lean_ctor_get(v_impl_216_, 3);
lean_inc(v_l_222_);
v_r_223_ = lean_ctor_get(v_impl_216_, 4);
v___x_224_ = lean_unsigned_to_nat(3u);
v___x_225_ = lean_nat_mul(v___x_224_, v_size_218_);
v___x_226_ = lean_nat_dec_lt(v___x_225_, v_size_219_);
lean_dec(v___x_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_230_; 
lean_dec(v_l_222_);
v___x_227_ = lean_nat_add(v___x_217_, v_size_218_);
v___x_228_ = lean_nat_add(v___x_227_, v_size_219_);
lean_dec(v___x_227_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_impl_216_);
lean_ctor_set(v___x_73_, 0, v___x_228_);
v___x_230_ = v___x_73_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_231_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_231_, 3, v_l_70_);
lean_ctor_set(v_reuseFailAlloc_231_, 4, v_impl_216_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
else
{
lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_295_; 
lean_inc(v_r_223_);
lean_inc(v_v_221_);
lean_inc(v_k_220_);
lean_inc(v_size_219_);
v_isSharedCheck_295_ = !lean_is_exclusive(v_impl_216_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; lean_object* v_unused_297_; lean_object* v_unused_298_; lean_object* v_unused_299_; lean_object* v_unused_300_; 
v_unused_296_ = lean_ctor_get(v_impl_216_, 4);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_impl_216_, 3);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_impl_216_, 2);
lean_dec(v_unused_298_);
v_unused_299_ = lean_ctor_get(v_impl_216_, 1);
lean_dec(v_unused_299_);
v_unused_300_ = lean_ctor_get(v_impl_216_, 0);
lean_dec(v_unused_300_);
v___x_233_ = v_impl_216_;
v_isShared_234_ = v_isSharedCheck_295_;
goto v_resetjp_232_;
}
else
{
lean_dec(v_impl_216_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_295_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v_size_235_; lean_object* v_k_236_; lean_object* v_v_237_; lean_object* v_l_238_; lean_object* v_r_239_; lean_object* v_size_240_; lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v_size_235_ = lean_ctor_get(v_l_222_, 0);
v_k_236_ = lean_ctor_get(v_l_222_, 1);
v_v_237_ = lean_ctor_get(v_l_222_, 2);
v_l_238_ = lean_ctor_get(v_l_222_, 3);
v_r_239_ = lean_ctor_get(v_l_222_, 4);
v_size_240_ = lean_ctor_get(v_r_223_, 0);
v___x_241_ = lean_unsigned_to_nat(2u);
v___x_242_ = lean_nat_mul(v___x_241_, v_size_240_);
v___x_243_ = lean_nat_dec_lt(v_size_235_, v___x_242_);
lean_dec(v___x_242_);
if (v___x_243_ == 0)
{
lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_271_; 
lean_inc(v_r_239_);
lean_inc(v_l_238_);
lean_inc(v_v_237_);
lean_inc(v_k_236_);
v_isSharedCheck_271_ = !lean_is_exclusive(v_l_222_);
if (v_isSharedCheck_271_ == 0)
{
lean_object* v_unused_272_; lean_object* v_unused_273_; lean_object* v_unused_274_; lean_object* v_unused_275_; lean_object* v_unused_276_; 
v_unused_272_ = lean_ctor_get(v_l_222_, 4);
lean_dec(v_unused_272_);
v_unused_273_ = lean_ctor_get(v_l_222_, 3);
lean_dec(v_unused_273_);
v_unused_274_ = lean_ctor_get(v_l_222_, 2);
lean_dec(v_unused_274_);
v_unused_275_ = lean_ctor_get(v_l_222_, 1);
lean_dec(v_unused_275_);
v_unused_276_ = lean_ctor_get(v_l_222_, 0);
lean_dec(v_unused_276_);
v___x_245_ = v_l_222_;
v_isShared_246_ = v_isSharedCheck_271_;
goto v_resetjp_244_;
}
else
{
lean_dec(v_l_222_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_271_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___y_250_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_261_; 
v___x_247_ = lean_nat_add(v___x_217_, v_size_218_);
v___x_248_ = lean_nat_add(v___x_247_, v_size_219_);
lean_dec(v_size_219_);
if (lean_obj_tag(v_l_238_) == 0)
{
lean_object* v_size_269_; 
v_size_269_ = lean_ctor_get(v_l_238_, 0);
lean_inc(v_size_269_);
v___y_261_ = v_size_269_;
goto v___jp_260_;
}
else
{
lean_object* v___x_270_; 
v___x_270_ = lean_unsigned_to_nat(0u);
v___y_261_ = v___x_270_;
goto v___jp_260_;
}
v___jp_249_:
{
lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_253_ = lean_nat_add(v___y_251_, v___y_252_);
lean_dec(v___y_252_);
lean_dec(v___y_251_);
if (v_isShared_246_ == 0)
{
lean_ctor_set(v___x_245_, 4, v_r_223_);
lean_ctor_set(v___x_245_, 3, v_r_239_);
lean_ctor_set(v___x_245_, 2, v_v_221_);
lean_ctor_set(v___x_245_, 1, v_k_220_);
lean_ctor_set(v___x_245_, 0, v___x_253_);
v___x_255_ = v___x_245_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_253_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_k_220_);
lean_ctor_set(v_reuseFailAlloc_259_, 2, v_v_221_);
lean_ctor_set(v_reuseFailAlloc_259_, 3, v_r_239_);
lean_ctor_set(v_reuseFailAlloc_259_, 4, v_r_223_);
v___x_255_ = v_reuseFailAlloc_259_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v___x_257_; 
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 4, v___x_255_);
lean_ctor_set(v___x_233_, 3, v___y_250_);
lean_ctor_set(v___x_233_, 2, v_v_237_);
lean_ctor_set(v___x_233_, 1, v_k_236_);
lean_ctor_set(v___x_233_, 0, v___x_248_);
v___x_257_ = v___x_233_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_248_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_k_236_);
lean_ctor_set(v_reuseFailAlloc_258_, 2, v_v_237_);
lean_ctor_set(v_reuseFailAlloc_258_, 3, v___y_250_);
lean_ctor_set(v_reuseFailAlloc_258_, 4, v___x_255_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
v___jp_260_:
{
lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_262_ = lean_nat_add(v___x_247_, v___y_261_);
lean_dec(v___y_261_);
lean_dec(v___x_247_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_l_238_);
lean_ctor_set(v___x_73_, 0, v___x_262_);
v___x_264_ = v___x_73_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_268_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_268_, 3, v_l_70_);
lean_ctor_set(v_reuseFailAlloc_268_, 4, v_l_238_);
v___x_264_ = v_reuseFailAlloc_268_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
lean_object* v___x_265_; 
v___x_265_ = lean_nat_add(v___x_217_, v_size_240_);
if (lean_obj_tag(v_r_239_) == 0)
{
lean_object* v_size_266_; 
v_size_266_ = lean_ctor_get(v_r_239_, 0);
lean_inc(v_size_266_);
v___y_250_ = v___x_264_;
v___y_251_ = v___x_265_;
v___y_252_ = v_size_266_;
goto v___jp_249_;
}
else
{
lean_object* v___x_267_; 
v___x_267_ = lean_unsigned_to_nat(0u);
v___y_250_ = v___x_264_;
v___y_251_ = v___x_265_;
v___y_252_ = v___x_267_;
goto v___jp_249_;
}
}
}
}
}
else
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_281_; 
lean_del_object(v___x_73_);
v___x_277_ = lean_nat_add(v___x_217_, v_size_218_);
v___x_278_ = lean_nat_add(v___x_277_, v_size_219_);
lean_dec(v_size_219_);
v___x_279_ = lean_nat_add(v___x_277_, v_size_235_);
lean_dec(v___x_277_);
lean_inc_ref(v_l_70_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 4, v_l_222_);
lean_ctor_set(v___x_233_, 3, v_l_70_);
lean_ctor_set(v___x_233_, 2, v_v_69_);
lean_ctor_set(v___x_233_, 1, v_k_68_);
lean_ctor_set(v___x_233_, 0, v___x_279_);
v___x_281_ = v___x_233_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_294_; 
v_reuseFailAlloc_294_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_294_, 0, v___x_279_);
lean_ctor_set(v_reuseFailAlloc_294_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_294_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_294_, 3, v_l_70_);
lean_ctor_set(v_reuseFailAlloc_294_, 4, v_l_222_);
v___x_281_ = v_reuseFailAlloc_294_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
v_isSharedCheck_288_ = !lean_is_exclusive(v_l_70_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; lean_object* v_unused_290_; lean_object* v_unused_291_; lean_object* v_unused_292_; lean_object* v_unused_293_; 
v_unused_289_ = lean_ctor_get(v_l_70_, 4);
lean_dec(v_unused_289_);
v_unused_290_ = lean_ctor_get(v_l_70_, 3);
lean_dec(v_unused_290_);
v_unused_291_ = lean_ctor_get(v_l_70_, 2);
lean_dec(v_unused_291_);
v_unused_292_ = lean_ctor_get(v_l_70_, 1);
lean_dec(v_unused_292_);
v_unused_293_ = lean_ctor_get(v_l_70_, 0);
lean_dec(v_unused_293_);
v___x_283_ = v_l_70_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_dec(v_l_70_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 4, v_r_223_);
lean_ctor_set(v___x_283_, 3, v___x_281_);
lean_ctor_set(v___x_283_, 2, v_v_221_);
lean_ctor_set(v___x_283_, 1, v_k_220_);
lean_ctor_set(v___x_283_, 0, v___x_278_);
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_k_220_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v_v_221_);
lean_ctor_set(v_reuseFailAlloc_287_, 3, v___x_281_);
lean_ctor_set(v_reuseFailAlloc_287_, 4, v_r_223_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_301_; 
v_l_301_ = lean_ctor_get(v_impl_216_, 3);
lean_inc(v_l_301_);
if (lean_obj_tag(v_l_301_) == 0)
{
lean_object* v_r_302_; lean_object* v_k_303_; lean_object* v_v_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_327_; 
v_r_302_ = lean_ctor_get(v_impl_216_, 4);
v_k_303_ = lean_ctor_get(v_impl_216_, 1);
v_v_304_ = lean_ctor_get(v_impl_216_, 2);
v_isSharedCheck_327_ = !lean_is_exclusive(v_impl_216_);
if (v_isSharedCheck_327_ == 0)
{
lean_object* v_unused_328_; lean_object* v_unused_329_; 
v_unused_328_ = lean_ctor_get(v_impl_216_, 3);
lean_dec(v_unused_328_);
v_unused_329_ = lean_ctor_get(v_impl_216_, 0);
lean_dec(v_unused_329_);
v___x_306_ = v_impl_216_;
v_isShared_307_ = v_isSharedCheck_327_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_r_302_);
lean_inc(v_v_304_);
lean_inc(v_k_303_);
lean_dec(v_impl_216_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_327_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v_k_308_; lean_object* v_v_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_323_; 
v_k_308_ = lean_ctor_get(v_l_301_, 1);
v_v_309_ = lean_ctor_get(v_l_301_, 2);
v_isSharedCheck_323_ = !lean_is_exclusive(v_l_301_);
if (v_isSharedCheck_323_ == 0)
{
lean_object* v_unused_324_; lean_object* v_unused_325_; lean_object* v_unused_326_; 
v_unused_324_ = lean_ctor_get(v_l_301_, 4);
lean_dec(v_unused_324_);
v_unused_325_ = lean_ctor_get(v_l_301_, 3);
lean_dec(v_unused_325_);
v_unused_326_ = lean_ctor_get(v_l_301_, 0);
lean_dec(v_unused_326_);
v___x_311_ = v_l_301_;
v_isShared_312_ = v_isSharedCheck_323_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_v_309_);
lean_inc(v_k_308_);
lean_dec(v_l_301_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_323_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_313_; lean_object* v___x_315_; 
v___x_313_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_302_, 2);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 4, v_r_302_);
lean_ctor_set(v___x_311_, 3, v_r_302_);
lean_ctor_set(v___x_311_, 2, v_v_69_);
lean_ctor_set(v___x_311_, 1, v_k_68_);
lean_ctor_set(v___x_311_, 0, v___x_217_);
v___x_315_ = v___x_311_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_322_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_322_, 3, v_r_302_);
lean_ctor_set(v_reuseFailAlloc_322_, 4, v_r_302_);
v___x_315_ = v_reuseFailAlloc_322_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
lean_object* v___x_317_; 
lean_inc(v_r_302_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 3, v_r_302_);
lean_ctor_set(v___x_306_, 0, v___x_217_);
v___x_317_ = v___x_306_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_k_303_);
lean_ctor_set(v_reuseFailAlloc_321_, 2, v_v_304_);
lean_ctor_set(v_reuseFailAlloc_321_, 3, v_r_302_);
lean_ctor_set(v_reuseFailAlloc_321_, 4, v_r_302_);
v___x_317_ = v_reuseFailAlloc_321_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_319_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v___x_317_);
lean_ctor_set(v___x_73_, 3, v___x_315_);
lean_ctor_set(v___x_73_, 2, v_v_309_);
lean_ctor_set(v___x_73_, 1, v_k_308_);
lean_ctor_set(v___x_73_, 0, v___x_313_);
v___x_319_ = v___x_73_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_313_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_k_308_);
lean_ctor_set(v_reuseFailAlloc_320_, 2, v_v_309_);
lean_ctor_set(v_reuseFailAlloc_320_, 3, v___x_315_);
lean_ctor_set(v_reuseFailAlloc_320_, 4, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
}
else
{
lean_object* v_r_330_; 
v_r_330_ = lean_ctor_get(v_impl_216_, 4);
lean_inc(v_r_330_);
if (lean_obj_tag(v_r_330_) == 0)
{
lean_object* v_k_331_; lean_object* v_v_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_343_; 
v_k_331_ = lean_ctor_get(v_impl_216_, 1);
v_v_332_ = lean_ctor_get(v_impl_216_, 2);
v_isSharedCheck_343_ = !lean_is_exclusive(v_impl_216_);
if (v_isSharedCheck_343_ == 0)
{
lean_object* v_unused_344_; lean_object* v_unused_345_; lean_object* v_unused_346_; 
v_unused_344_ = lean_ctor_get(v_impl_216_, 4);
lean_dec(v_unused_344_);
v_unused_345_ = lean_ctor_get(v_impl_216_, 3);
lean_dec(v_unused_345_);
v_unused_346_ = lean_ctor_get(v_impl_216_, 0);
lean_dec(v_unused_346_);
v___x_334_ = v_impl_216_;
v_isShared_335_ = v_isSharedCheck_343_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_v_332_);
lean_inc(v_k_331_);
lean_dec(v_impl_216_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_343_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_338_; 
v___x_336_ = lean_unsigned_to_nat(3u);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 4, v_l_301_);
lean_ctor_set(v___x_334_, 2, v_v_69_);
lean_ctor_set(v___x_334_, 1, v_k_68_);
lean_ctor_set(v___x_334_, 0, v___x_217_);
v___x_338_ = v___x_334_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v___x_217_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_342_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_342_, 3, v_l_301_);
lean_ctor_set(v_reuseFailAlloc_342_, 4, v_l_301_);
v___x_338_ = v_reuseFailAlloc_342_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
lean_object* v___x_340_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_r_330_);
lean_ctor_set(v___x_73_, 3, v___x_338_);
lean_ctor_set(v___x_73_, 2, v_v_332_);
lean_ctor_set(v___x_73_, 1, v_k_331_);
lean_ctor_set(v___x_73_, 0, v___x_336_);
v___x_340_ = v___x_73_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_k_331_);
lean_ctor_set(v_reuseFailAlloc_341_, 2, v_v_332_);
lean_ctor_set(v_reuseFailAlloc_341_, 3, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_341_, 4, v_r_330_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
else
{
lean_object* v___x_347_; lean_object* v___x_349_; 
v___x_347_ = lean_unsigned_to_nat(2u);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 4, v_impl_216_);
lean_ctor_set(v___x_73_, 3, v_r_330_);
lean_ctor_set(v___x_73_, 0, v___x_347_);
v___x_349_ = v___x_73_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_347_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_k_68_);
lean_ctor_set(v_reuseFailAlloc_350_, 2, v_v_69_);
lean_ctor_set(v_reuseFailAlloc_350_, 3, v_r_330_);
lean_ctor_set(v_reuseFailAlloc_350_, 4, v_impl_216_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
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
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(1u);
v___x_353_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v_k_64_);
lean_ctor_set(v___x_353_, 2, v_v_65_);
lean_ctor_set(v___x_353_, 3, v_t_66_);
lean_ctor_set(v___x_353_, 4, v_t_66_);
return v___x_353_;
}
}
}
static lean_object* _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0(void){
_start:
{
lean_object* v___x_354_; uint8_t v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_354_ = lean_box(1);
v___x_355_ = 23;
v___x_356_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds___closed__3));
v___x_357_ = lean_box(v___x_355_);
v___x_358_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v___x_356_, v___x_357_, v___x_354_);
return v___x_358_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2(void){
_start:
{
lean_object* v___x_360_; uint8_t v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_360_ = lean_obj_once(&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0, &l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0_once, _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__0);
v___x_361_ = 23;
v___x_362_ = ((lean_object*)(l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__1));
v___x_363_ = lean_box(v___x_361_);
v___x_364_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v___x_362_, v___x_363_, v___x_360_);
return v___x_364_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4(void){
_start:
{
lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_366_ = lean_obj_once(&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2, &l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2_once, _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__2);
v___x_367_ = 23;
v___x_368_ = ((lean_object*)(l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__3));
v___x_369_ = lean_box(v___x_367_);
v___x_370_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v___x_368_, v___x_369_, v___x_366_);
return v___x_370_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6(void){
_start:
{
lean_object* v___x_372_; uint8_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_372_ = lean_obj_once(&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4, &l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4_once, _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__4);
v___x_373_ = 23;
v___x_374_ = ((lean_object*)(l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__5));
v___x_375_ = lean_box(v___x_373_);
v___x_376_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v___x_374_, v___x_375_, v___x_372_);
return v___x_376_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap(void){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = lean_obj_once(&l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6, &l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6_once, _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap___closed__6);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0(lean_object* v_00_u03b2_378_, lean_object* v_k_379_, lean_object* v_v_380_, lean_object* v_t_381_, lean_object* v_hl_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Server_FileWorker_keywordSemanticTokenMap_spec__0___redArg(v_k_379_, v_v_380_, v_t_381_);
return v___x_383_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq(lean_object* v_x_384_, lean_object* v_x_385_){
_start:
{
lean_object* v_pos_386_; lean_object* v_tailPos_387_; uint8_t v_type_388_; lean_object* v_priority_389_; lean_object* v_pos_390_; lean_object* v_tailPos_391_; uint8_t v_type_392_; lean_object* v_priority_393_; uint8_t v___x_394_; 
v_pos_386_ = lean_ctor_get(v_x_384_, 0);
v_tailPos_387_ = lean_ctor_get(v_x_384_, 1);
v_type_388_ = lean_ctor_get_uint8(v_x_384_, sizeof(void*)*3);
v_priority_389_ = lean_ctor_get(v_x_384_, 2);
v_pos_390_ = lean_ctor_get(v_x_385_, 0);
v_tailPos_391_ = lean_ctor_get(v_x_385_, 1);
v_type_392_ = lean_ctor_get_uint8(v_x_385_, sizeof(void*)*3);
v_priority_393_ = lean_ctor_get(v_x_385_, 2);
v___x_394_ = l_Lean_Lsp_instBEqPosition_beq(v_pos_386_, v_pos_390_);
if (v___x_394_ == 0)
{
return v___x_394_;
}
else
{
uint8_t v___x_395_; 
v___x_395_ = l_Lean_Lsp_instBEqPosition_beq(v_tailPos_387_, v_tailPos_391_);
if (v___x_395_ == 0)
{
return v___x_395_;
}
else
{
uint8_t v___x_396_; 
v___x_396_ = l_Lean_Lsp_instBEqSemanticTokenType_beq(v_type_388_, v_type_392_);
if (v___x_396_ == 0)
{
return v___x_396_;
}
else
{
uint8_t v___x_397_; 
v___x_397_ = lean_nat_dec_eq(v_priority_389_, v_priority_393_);
return v___x_397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq___boxed(lean_object* v_x_398_, lean_object* v_x_399_){
_start:
{
uint8_t v_res_400_; lean_object* v_r_401_; 
v_res_400_ = l_Lean_Server_FileWorker_instBEqAbsoluteLspSemanticToken_beq(v_x_398_, v_x_399_);
lean_dec_ref(v_x_399_);
lean_dec_ref(v_x_398_);
v_r_401_ = lean_box(v_res_400_);
return v_r_401_;
}
}
LEAN_EXPORT uint64_t l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash(lean_object* v_x_404_){
_start:
{
lean_object* v_pos_405_; lean_object* v_tailPos_406_; uint8_t v_type_407_; lean_object* v_priority_408_; uint64_t v___x_409_; uint64_t v___x_410_; uint64_t v___x_411_; uint64_t v___x_412_; uint64_t v___x_413_; uint64_t v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint64_t v___x_417_; 
v_pos_405_ = lean_ctor_get(v_x_404_, 0);
v_tailPos_406_ = lean_ctor_get(v_x_404_, 1);
v_type_407_ = lean_ctor_get_uint8(v_x_404_, sizeof(void*)*3);
v_priority_408_ = lean_ctor_get(v_x_404_, 2);
v___x_409_ = 0ULL;
v___x_410_ = l_Lean_Lsp_instHashablePosition_hash(v_pos_405_);
v___x_411_ = lean_uint64_mix_hash(v___x_409_, v___x_410_);
v___x_412_ = l_Lean_Lsp_instHashablePosition_hash(v_tailPos_406_);
v___x_413_ = lean_uint64_mix_hash(v___x_411_, v___x_412_);
v___x_414_ = l_Lean_Lsp_instHashableSemanticTokenType_hash(v_type_407_);
v___x_415_ = lean_uint64_mix_hash(v___x_413_, v___x_414_);
v___x_416_ = lean_uint64_of_nat(v_priority_408_);
v___x_417_ = lean_uint64_mix_hash(v___x_415_, v___x_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash___boxed(lean_object* v_x_418_){
_start:
{
uint64_t v_res_419_; lean_object* v_r_420_; 
v_res_419_ = l_Lean_Server_FileWorker_instHashableAbsoluteLspSemanticToken_hash(v_x_418_);
lean_dec_ref(v_x_418_);
v_r_420_ = lean_box_uint64(v_res_419_);
return v_r_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0(lean_object* v_j_423_, lean_object* v_k_424_){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = l_Lean_Json_getObjValD(v_j_423_, v_k_424_);
v___x_426_ = l_Lean_Lsp_instFromJsonPosition_fromJson(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0___boxed(lean_object* v_j_427_, lean_object* v_k_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0(v_j_427_, v_k_428_);
lean_dec_ref(v_k_428_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1(lean_object* v_j_430_, lean_object* v_k_431_){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = l_Lean_Json_getObjValD(v_j_430_, v_k_431_);
v___x_433_ = l_Lean_Lsp_instFromJsonSemanticTokenType_fromJson(v___x_432_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1___boxed(lean_object* v_j_434_, lean_object* v_k_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1(v_j_434_, v_k_435_);
lean_dec_ref(v_k_435_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2(lean_object* v_j_437_, lean_object* v_k_438_){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = l_Lean_Json_getObjValD(v_j_437_, v_k_438_);
v___x_440_ = l_Lean_Json_getNat_x3f(v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2___boxed(lean_object* v_j_441_, lean_object* v_k_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2(v_j_441_, v_k_442_);
lean_dec_ref(v_k_442_);
return v_res_443_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5(void){
_start:
{
uint8_t v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_453_ = 1;
v___x_454_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__4));
v___x_455_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_454_, v___x_453_);
return v___x_455_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_457_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__6));
v___x_458_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__5);
v___x_459_ = lean_string_append(v___x_458_, v___x_457_);
return v___x_459_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9(void){
_start:
{
uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_462_ = 1;
v___x_463_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__8));
v___x_464_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_463_, v___x_462_);
return v___x_464_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10(void){
_start:
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__9);
v___x_466_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7);
v___x_467_ = lean_string_append(v___x_466_, v___x_465_);
return v___x_467_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11));
v___x_470_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__10);
v___x_471_ = lean_string_append(v___x_470_, v___x_469_);
return v___x_471_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15(void){
_start:
{
uint8_t v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_475_ = 1;
v___x_476_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__14));
v___x_477_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_476_, v___x_475_);
return v___x_477_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_478_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__15);
v___x_479_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7);
v___x_480_ = lean_string_append(v___x_479_, v___x_478_);
return v___x_480_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11));
v___x_482_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__16);
v___x_483_ = lean_string_append(v___x_482_, v___x_481_);
return v___x_483_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19(void){
_start:
{
uint8_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_486_ = 1;
v___x_487_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__18));
v___x_488_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_487_, v___x_486_);
return v___x_488_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__19);
v___x_490_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7);
v___x_491_ = lean_string_append(v___x_490_, v___x_489_);
return v___x_491_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11));
v___x_493_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__20);
v___x_494_ = lean_string_append(v___x_493_, v___x_492_);
return v___x_494_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24(void){
_start:
{
uint8_t v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = 1;
v___x_499_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__23));
v___x_500_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_499_, v___x_498_);
return v___x_500_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_501_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__24);
v___x_502_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__7);
v___x_503_ = lean_string_append(v___x_502_, v___x_501_);
return v___x_503_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_504_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__11));
v___x_505_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__25);
v___x_506_ = lean_string_append(v___x_505_, v___x_504_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson(lean_object* v_json_507_){
_start:
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0));
lean_inc(v_json_507_);
v___x_509_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0(v_json_507_, v___x_508_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_519_; 
lean_dec(v_json_507_);
v_a_510_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_519_ == 0)
{
v___x_512_ = v___x_509_;
v_isShared_513_ = v_isSharedCheck_519_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_509_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_519_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
v___x_514_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__12);
v___x_515_ = lean_string_append(v___x_514_, v_a_510_);
lean_dec(v_a_510_);
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 0, v___x_515_);
v___x_517_ = v___x_512_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v_a_520_ = lean_ctor_get(v___x_509_, 0);
lean_inc(v_a_520_);
lean_dec_ref_known(v___x_509_, 1);
v___x_521_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13));
lean_inc(v_json_507_);
v___x_522_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__0(v_json_507_, v___x_521_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_532_; 
lean_dec(v_a_520_);
lean_dec(v_json_507_);
v_a_523_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_532_ == 0)
{
v___x_525_ = v___x_522_;
v_isShared_526_ = v_isSharedCheck_532_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_522_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_532_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_527_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__17);
v___x_528_ = lean_string_append(v___x_527_, v_a_523_);
lean_dec(v_a_523_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 0, v___x_528_);
v___x_530_ = v___x_525_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
else
{
lean_object* v_a_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v_a_533_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_533_);
lean_dec_ref_known(v___x_522_, 1);
v___x_534_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds___closed__5));
lean_inc(v_json_507_);
v___x_535_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__1(v_json_507_, v___x_534_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_545_; 
lean_dec(v_a_533_);
lean_dec(v_a_520_);
lean_dec(v_json_507_);
v_a_536_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_545_ == 0)
{
v___x_538_ = v___x_535_;
v_isShared_539_ = v_isSharedCheck_545_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_535_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_545_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_540_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__21);
v___x_541_ = lean_string_append(v___x_540_, v_a_536_);
lean_dec(v_a_536_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v___x_541_);
v___x_543_ = v___x_538_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v_a_546_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_546_);
lean_dec_ref_known(v___x_535_, 1);
v___x_547_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22));
v___x_548_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson_spec__2(v_json_507_, v___x_547_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_558_; 
lean_dec(v_a_546_);
lean_dec(v_a_533_);
lean_dec(v_a_520_);
v_a_549_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_558_ == 0)
{
v___x_551_ = v___x_548_;
v_isShared_552_ = v_isSharedCheck_558_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_548_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_558_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_556_; 
v___x_553_ = lean_obj_once(&l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26, &l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26_once, _init_l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__26);
v___x_554_ = lean_string_append(v___x_553_, v_a_549_);
lean_dec(v_a_549_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 0, v___x_554_);
v___x_556_ = v___x_551_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v___x_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_568_; 
v_a_559_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_568_ == 0)
{
v___x_561_ = v___x_548_;
v_isShared_562_ = v_isSharedCheck_568_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_548_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_568_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; uint8_t v___x_564_; lean_object* v___x_566_; 
v___x_563_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_563_, 0, v_a_520_);
lean_ctor_set(v___x_563_, 1, v_a_533_);
lean_ctor_set(v___x_563_, 2, v_a_559_);
v___x_564_ = lean_unbox(v_a_546_);
lean_dec(v_a_546_);
lean_ctor_set_uint8(v___x_563_, sizeof(void*)*3, v___x_564_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_563_);
v___x_566_ = v___x_561_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_563_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson_spec__0(lean_object* v_a_571_, lean_object* v_a_572_){
_start:
{
if (lean_obj_tag(v_a_571_) == 0)
{
lean_object* v___x_573_; 
v___x_573_ = lean_array_to_list(v_a_572_);
return v___x_573_;
}
else
{
lean_object* v_head_574_; lean_object* v_tail_575_; lean_object* v___x_576_; 
v_head_574_ = lean_ctor_get(v_a_571_, 0);
lean_inc(v_head_574_);
v_tail_575_ = lean_ctor_get(v_a_571_, 1);
lean_inc(v_tail_575_);
lean_dec_ref_known(v_a_571_, 2);
v___x_576_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_572_, v_head_574_);
v_a_571_ = v_tail_575_;
v_a_572_ = v___x_576_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson(lean_object* v_x_580_){
_start:
{
lean_object* v_pos_581_; lean_object* v_tailPos_582_; uint8_t v_type_583_; lean_object* v_priority_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v_pos_581_ = lean_ctor_get(v_x_580_, 0);
lean_inc_ref(v_pos_581_);
v_tailPos_582_ = lean_ctor_get(v_x_580_, 1);
lean_inc_ref(v_tailPos_582_);
v_type_583_ = lean_ctor_get_uint8(v_x_580_, sizeof(void*)*3);
v_priority_584_ = lean_ctor_get(v_x_580_, 2);
lean_inc(v_priority_584_);
lean_dec_ref(v_x_580_);
v___x_585_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__0));
v___x_586_ = l_Lean_Lsp_instToJsonPosition_toJson(v_pos_581_);
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = lean_box(0);
v___x_589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_587_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__13));
v___x_591_ = l_Lean_Lsp_instToJsonPosition_toJson(v_tailPos_582_);
v___x_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_590_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___x_593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
lean_ctor_set(v___x_593_, 1, v___x_588_);
v___x_594_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds___closed__5));
v___x_595_ = l_Lean_Lsp_instToJsonSemanticTokenType_toJson(v_type_583_);
v___x_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_594_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set(v___x_597_, 1, v___x_588_);
v___x_598_ = ((lean_object*)(l_Lean_Server_FileWorker_instFromJsonAbsoluteLspSemanticToken_fromJson___closed__22));
v___x_599_ = l_Lean_JsonNumber_fromNat(v_priority_584_);
v___x_600_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_600_, 0, v___x_599_);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_598_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
v___x_602_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
lean_ctor_set(v___x_602_, 1, v___x_588_);
v___x_603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
lean_ctor_set(v___x_603_, 1, v___x_588_);
v___x_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_597_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
v___x_605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_593_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
v___x_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_589_);
lean_ctor_set(v___x_606_, 1, v___x_605_);
v___x_607_ = ((lean_object*)(l_Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson___closed__0));
v___x_608_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_FileWorker_instToJsonAbsoluteLspSemanticToken_toJson_spec__0(v___x_606_, v___x_607_);
v___x_609_ = l_Lean_Json_mkObj(v___x_608_);
lean_dec(v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0(lean_object* v_text_612_, lean_object* v_beginPos_613_, lean_object* v_endPos_x3f_614_, lean_object* v_as_615_, size_t v_i_616_, size_t v_stop_617_, lean_object* v_b_618_){
_start:
{
lean_object* v___y_620_; uint8_t v___x_624_; 
v___x_624_ = lean_usize_dec_eq(v_i_616_, v_stop_617_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; lean_object* v_stx_626_; uint8_t v_type_627_; lean_object* v_priority_628_; lean_object* v___x_629_; 
v___x_625_ = lean_array_uget_borrowed(v_as_615_, v_i_616_);
v_stx_626_ = lean_ctor_get(v___x_625_, 0);
v_type_627_ = lean_ctor_get_uint8(v___x_625_, sizeof(void*)*2);
v_priority_628_ = lean_ctor_get(v___x_625_, 1);
v___x_629_ = l_Lean_Syntax_getPos_x3f(v_stx_626_, v___x_624_);
if (lean_obj_tag(v___x_629_) == 0)
{
v___y_620_ = v_b_618_;
goto v___jp_619_;
}
else
{
lean_object* v_val_630_; lean_object* v___x_631_; 
v_val_630_ = lean_ctor_get(v___x_629_, 0);
lean_inc(v_val_630_);
lean_dec_ref_known(v___x_629_, 1);
v___x_631_ = l_Lean_Syntax_getTailPos_x3f(v_stx_626_, v___x_624_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_dec(v_val_630_);
v___y_620_ = v_b_618_;
goto v___jp_619_;
}
else
{
lean_object* v_val_632_; uint8_t v___x_641_; 
v_val_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_val_632_);
lean_dec_ref_known(v___x_631_, 1);
v___x_641_ = lean_nat_dec_le(v_beginPos_613_, v_val_630_);
if (v___x_641_ == 0)
{
lean_dec(v_val_632_);
lean_dec(v_val_630_);
v___y_620_ = v_b_618_;
goto v___jp_619_;
}
else
{
if (lean_obj_tag(v_endPos_x3f_614_) == 0)
{
goto v___jp_633_;
}
else
{
lean_object* v_val_642_; uint8_t v___x_643_; 
v_val_642_ = lean_ctor_get(v_endPos_x3f_614_, 0);
v___x_643_ = lean_nat_dec_lt(v_val_630_, v_val_642_);
if (v___x_643_ == 0)
{
lean_dec(v_val_632_);
lean_dec(v_val_630_);
v___y_620_ = v_b_618_;
goto v___jp_619_;
}
else
{
goto v___jp_633_;
}
}
}
v___jp_633_:
{
lean_object* v___x_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_634_ = lean_unsigned_to_nat(1u);
v___x_635_ = lean_nat_add(v_val_630_, v___x_634_);
v___x_636_ = lean_nat_dec_le(v___x_635_, v_val_632_);
lean_dec(v___x_635_);
if (v___x_636_ == 0)
{
lean_dec(v_val_632_);
lean_dec(v_val_630_);
v___y_620_ = v_b_618_;
goto v___jp_619_;
}
else
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
lean_inc_ref_n(v_text_612_, 2);
v___x_637_ = l_Lean_FileMap_utf8PosToLspPos(v_text_612_, v_val_630_);
lean_dec(v_val_630_);
v___x_638_ = l_Lean_FileMap_utf8PosToLspPos(v_text_612_, v_val_632_);
lean_dec(v_val_632_);
lean_inc(v_priority_628_);
v___x_639_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_639_, 0, v___x_637_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
lean_ctor_set(v___x_639_, 2, v_priority_628_);
lean_ctor_set_uint8(v___x_639_, sizeof(void*)*3, v_type_627_);
v___x_640_ = lean_array_push(v_b_618_, v___x_639_);
v___y_620_ = v___x_640_;
goto v___jp_619_;
}
}
}
}
}
else
{
lean_dec_ref(v_text_612_);
return v_b_618_;
}
v___jp_619_:
{
size_t v___x_621_; size_t v___x_622_; 
v___x_621_ = ((size_t)1ULL);
v___x_622_ = lean_usize_add(v_i_616_, v___x_621_);
v_i_616_ = v___x_622_;
v_b_618_ = v___y_620_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0___boxed(lean_object* v_text_644_, lean_object* v_beginPos_645_, lean_object* v_endPos_x3f_646_, lean_object* v_as_647_, lean_object* v_i_648_, lean_object* v_stop_649_, lean_object* v_b_650_){
_start:
{
size_t v_i_boxed_651_; size_t v_stop_boxed_652_; lean_object* v_res_653_; 
v_i_boxed_651_ = lean_unbox_usize(v_i_648_);
lean_dec(v_i_648_);
v_stop_boxed_652_ = lean_unbox_usize(v_stop_649_);
lean_dec(v_stop_649_);
v_res_653_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0(v_text_644_, v_beginPos_645_, v_endPos_x3f_646_, v_as_647_, v_i_boxed_651_, v_stop_boxed_652_, v_b_650_);
lean_dec_ref(v_as_647_);
lean_dec(v_endPos_x3f_646_);
lean_dec(v_beginPos_645_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0(lean_object* v_text_656_, lean_object* v_beginPos_657_, lean_object* v_endPos_x3f_658_, lean_object* v_as_659_, lean_object* v_start_660_, lean_object* v_stop_661_){
_start:
{
lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_662_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___closed__0));
v___x_663_ = lean_nat_dec_lt(v_start_660_, v_stop_661_);
if (v___x_663_ == 0)
{
lean_dec_ref(v_text_656_);
return v___x_662_;
}
else
{
lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_664_ = lean_array_get_size(v_as_659_);
v___x_665_ = lean_nat_dec_le(v_stop_661_, v___x_664_);
if (v___x_665_ == 0)
{
uint8_t v___x_666_; 
v___x_666_ = lean_nat_dec_lt(v_start_660_, v___x_664_);
if (v___x_666_ == 0)
{
lean_dec_ref(v_text_656_);
return v___x_662_;
}
else
{
size_t v___x_667_; size_t v___x_668_; lean_object* v___x_669_; 
v___x_667_ = lean_usize_of_nat(v_start_660_);
v___x_668_ = lean_usize_of_nat(v___x_664_);
v___x_669_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0(v_text_656_, v_beginPos_657_, v_endPos_x3f_658_, v_as_659_, v___x_667_, v___x_668_, v___x_662_);
return v___x_669_;
}
}
else
{
size_t v___x_670_; size_t v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_usize_of_nat(v_start_660_);
v___x_671_ = lean_usize_of_nat(v_stop_661_);
v___x_672_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0_spec__0(v_text_656_, v_beginPos_657_, v_endPos_x3f_658_, v_as_659_, v___x_670_, v___x_671_, v___x_662_);
return v___x_672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0___boxed(lean_object* v_text_673_, lean_object* v_beginPos_674_, lean_object* v_endPos_x3f_675_, lean_object* v_as_676_, lean_object* v_start_677_, lean_object* v_stop_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0(v_text_673_, v_beginPos_674_, v_endPos_x3f_675_, v_as_676_, v_start_677_, v_stop_678_);
lean_dec(v_stop_678_);
lean_dec(v_start_677_);
lean_dec_ref(v_as_676_);
lean_dec(v_endPos_x3f_675_);
lean_dec(v_beginPos_674_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens(lean_object* v_text_680_, lean_object* v_beginPos_681_, lean_object* v_endPos_x3f_682_, lean_object* v_tokens_683_){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_684_ = lean_unsigned_to_nat(0u);
v___x_685_ = lean_array_get_size(v_tokens_683_);
v___x_686_ = l_Array_filterMapM___at___00Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens_spec__0(v_text_680_, v_beginPos_681_, v_endPos_x3f_682_, v_tokens_683_, v___x_684_, v___x_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens___boxed(lean_object* v_text_687_, lean_object* v_beginPos_688_, lean_object* v_endPos_x3f_689_, lean_object* v_tokens_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens(v_text_687_, v_beginPos_688_, v_endPos_x3f_689_, v_tokens_690_);
lean_dec_ref(v_tokens_690_);
lean_dec(v_endPos_x3f_689_);
lean_dec(v_beginPos_688_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding_go(lean_object* v_s_700_, lean_object* v_x_701_){
_start:
{
if (lean_obj_tag(v_x_701_) == 0)
{
lean_object* v___x_702_; 
v___x_702_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_702_, 0, v_s_700_);
lean_ctor_set(v___x_702_, 1, v_x_701_);
return v___x_702_;
}
else
{
lean_object* v_head_703_; lean_object* v_tail_704_; lean_object* v_tailPos_705_; lean_object* v_tailPos_706_; uint8_t v___x_707_; 
v_head_703_ = lean_ctor_get(v_x_701_, 0);
v_tail_704_ = lean_ctor_get(v_x_701_, 1);
v_tailPos_705_ = lean_ctor_get(v_s_700_, 1);
v_tailPos_706_ = lean_ctor_get(v_head_703_, 1);
v___x_707_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_705_, v_tailPos_706_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; 
v___x_708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_708_, 0, v_s_700_);
lean_ctor_set(v___x_708_, 1, v_x_701_);
return v___x_708_;
}
else
{
lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_716_; 
lean_inc(v_tail_704_);
lean_inc(v_head_703_);
v_isSharedCheck_716_ = !lean_is_exclusive(v_x_701_);
if (v_isSharedCheck_716_ == 0)
{
lean_object* v_unused_717_; lean_object* v_unused_718_; 
v_unused_717_ = lean_ctor_get(v_x_701_, 1);
lean_dec(v_unused_717_);
v_unused_718_ = lean_ctor_get(v_x_701_, 0);
lean_dec(v_unused_718_);
v___x_710_ = v_x_701_;
v_isShared_711_ = v_isSharedCheck_716_;
goto v_resetjp_709_;
}
else
{
lean_dec(v_x_701_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_716_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_712_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding_go(v_s_700_, v_tail_704_);
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 1, v___x_712_);
v___x_714_ = v___x_710_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_head_703_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v___x_712_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding(lean_object* v_st_719_, lean_object* v_s_720_){
_start:
{
lean_object* v_nonOverlapping_721_; lean_object* v_current_x3f_722_; lean_object* v_surrounding_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_731_; 
v_nonOverlapping_721_ = lean_ctor_get(v_st_719_, 0);
v_current_x3f_722_ = lean_ctor_get(v_st_719_, 1);
v_surrounding_723_ = lean_ctor_get(v_st_719_, 2);
v_isSharedCheck_731_ = !lean_is_exclusive(v_st_719_);
if (v_isSharedCheck_731_ == 0)
{
v___x_725_ = v_st_719_;
v_isShared_726_ = v_isSharedCheck_731_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_surrounding_723_);
lean_inc(v_current_x3f_722_);
lean_inc(v_nonOverlapping_721_);
lean_dec(v_st_719_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_731_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_727_; lean_object* v___x_729_; 
v___x_727_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding_go(v_s_720_, v_surrounding_723_);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 2, v___x_727_);
v___x_729_ = v___x_725_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_nonOverlapping_721_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v_current_x3f_722_);
lean_ctor_set(v_reuseFailAlloc_730_, 2, v___x_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better(lean_object* v_t_732_, lean_object* v_soFar_733_){
_start:
{
lean_object* v_tailPos_734_; lean_object* v_priority_735_; lean_object* v_tailPos_736_; lean_object* v_priority_737_; uint8_t v___x_738_; 
v_tailPos_734_ = lean_ctor_get(v_soFar_733_, 1);
v_priority_735_ = lean_ctor_get(v_soFar_733_, 2);
v_tailPos_736_ = lean_ctor_get(v_t_732_, 1);
v_priority_737_ = lean_ctor_get(v_t_732_, 2);
v___x_738_ = lean_nat_dec_lt(v_priority_735_, v_priority_737_);
if (v___x_738_ == 0)
{
uint8_t v___x_739_; 
v___x_739_ = lean_nat_dec_eq(v_priority_737_, v_priority_735_);
if (v___x_739_ == 0)
{
return v___x_739_;
}
else
{
uint8_t v___x_740_; 
v___x_740_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_736_, v_tailPos_734_);
if (v___x_740_ == 0)
{
return v___x_739_;
}
else
{
return v___x_738_;
}
}
}
else
{
return v___x_738_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better___boxed(lean_object* v_t_741_, lean_object* v_soFar_742_){
_start:
{
uint8_t v_res_743_; lean_object* v_r_744_; 
v_res_743_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better(v_t_741_, v_soFar_742_);
lean_dec_ref(v_soFar_742_);
lean_dec_ref(v_t_741_);
v_r_744_ = lean_box(v_res_743_);
return v_r_744_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0(lean_object* v_x_745_, lean_object* v_x_746_){
_start:
{
if (lean_obj_tag(v_x_746_) == 0)
{
return v_x_745_;
}
else
{
if (lean_obj_tag(v_x_745_) == 0)
{
lean_object* v_head_747_; lean_object* v_tail_748_; lean_object* v___x_749_; 
v_head_747_ = lean_ctor_get(v_x_746_, 0);
v_tail_748_ = lean_ctor_get(v_x_746_, 1);
lean_inc(v_head_747_);
v___x_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_749_, 0, v_head_747_);
v_x_745_ = v___x_749_;
v_x_746_ = v_tail_748_;
goto _start;
}
else
{
lean_object* v_head_751_; lean_object* v_tail_752_; lean_object* v_val_753_; uint8_t v___x_754_; 
v_head_751_ = lean_ctor_get(v_x_746_, 0);
v_tail_752_ = lean_ctor_get(v_x_746_, 1);
v_val_753_ = lean_ctor_get(v_x_745_, 0);
v___x_754_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_better(v_head_751_, v_val_753_);
if (v___x_754_ == 0)
{
v_x_746_ = v_tail_752_;
goto _start;
}
else
{
lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_763_; 
v_isSharedCheck_763_ = !lean_is_exclusive(v_x_745_);
if (v_isSharedCheck_763_ == 0)
{
lean_object* v_unused_764_; 
v_unused_764_ = lean_ctor_get(v_x_745_, 0);
lean_dec(v_unused_764_);
v___x_757_ = v_x_745_;
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
else
{
lean_dec(v_x_745_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
lean_inc(v_head_751_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v_head_751_);
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_head_751_);
v___x_760_ = v_reuseFailAlloc_762_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
v_x_745_ = v___x_760_;
v_x_746_ = v_tail_752_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0___boxed(lean_object* v_x_765_, lean_object* v_x_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0(v_x_765_, v_x_766_);
lean_dec(v_x_766_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest(lean_object* v_toks_768_){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = lean_box(0);
v___x_770_ = l_List_foldl___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest_spec__0(v___x_769_, v_toks_768_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest___boxed(lean_object* v_toks_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest(v_toks_771_);
lean_dec(v_toks_771_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0(lean_object* v_val_773_, lean_object* v_x_774_){
_start:
{
if (lean_obj_tag(v_x_774_) == 0)
{
return v_x_774_;
}
else
{
lean_object* v_head_775_; lean_object* v_tail_776_; lean_object* v_tailPos_777_; lean_object* v_tailPos_778_; uint8_t v___x_779_; 
v_head_775_ = lean_ctor_get(v_x_774_, 0);
v_tail_776_ = lean_ctor_get(v_x_774_, 1);
v_tailPos_777_ = lean_ctor_get(v_head_775_, 1);
v_tailPos_778_ = lean_ctor_get(v_val_773_, 1);
v___x_779_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_777_, v_tailPos_778_);
if (v___x_779_ == 2)
{
lean_inc_ref(v_x_774_);
return v_x_774_;
}
else
{
v_x_774_ = v_tail_776_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0___boxed(lean_object* v_val_781_, lean_object* v_x_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0(v_val_781_, v_x_782_);
lean_dec(v_x_782_);
lean_dec_ref(v_val_781_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(lean_object* v_nextToken_x3f_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_current_x3f_786_; 
v_current_x3f_786_ = lean_ctor_get(v_a_785_, 1);
if (lean_obj_tag(v_current_x3f_786_) == 1)
{
lean_object* v_nonOverlapping_787_; lean_object* v_surrounding_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_829_; 
lean_inc_ref(v_current_x3f_786_);
v_nonOverlapping_787_ = lean_ctor_get(v_a_785_, 0);
v_surrounding_788_ = lean_ctor_get(v_a_785_, 2);
v_isSharedCheck_829_ = !lean_is_exclusive(v_a_785_);
if (v_isSharedCheck_829_ == 0)
{
lean_object* v_unused_830_; 
v_unused_830_ = lean_ctor_get(v_a_785_, 1);
lean_dec(v_unused_830_);
v___x_790_ = v_a_785_;
v_isShared_791_ = v_isSharedCheck_829_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_surrounding_788_);
lean_inc(v_nonOverlapping_787_);
lean_dec(v_a_785_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_829_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v_val_792_; lean_object* v___x_793_; lean_object* v___y_795_; lean_object* v___y_796_; 
v_val_792_ = lean_ctor_get(v_current_x3f_786_, 0);
v___x_793_ = l_List_dropWhile___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__0(v_val_792_, v_surrounding_788_);
lean_dec(v_surrounding_788_);
if (lean_obj_tag(v_nextToken_x3f_784_) == 1)
{
lean_object* v_val_824_; lean_object* v_tailPos_825_; lean_object* v_pos_826_; uint8_t v___x_827_; 
v_val_824_ = lean_ctor_get(v_nextToken_x3f_784_, 0);
v_tailPos_825_ = lean_ctor_get(v_val_792_, 1);
v_pos_826_ = lean_ctor_get(v_val_824_, 0);
v___x_827_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_825_, v_pos_826_);
if (v___x_827_ == 2)
{
lean_object* v___x_828_; 
lean_del_object(v___x_790_);
v___x_828_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_828_, 0, v_nonOverlapping_787_);
lean_ctor_set(v___x_828_, 1, v_current_x3f_786_);
lean_ctor_set(v___x_828_, 2, v___x_793_);
return v___x_828_;
}
else
{
lean_inc(v_val_792_);
lean_dec_ref_known(v_current_x3f_786_, 1);
goto v___jp_801_;
}
}
else
{
lean_inc(v_val_792_);
lean_dec_ref_known(v_current_x3f_786_, 1);
goto v___jp_801_;
}
v___jp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 2, v___x_793_);
lean_ctor_set(v___x_790_, 1, v___y_796_);
lean_ctor_set(v___x_790_, 0, v___y_795_);
v___x_798_ = v___x_790_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___y_795_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v___y_796_);
lean_ctor_set(v_reuseFailAlloc_800_, 2, v___x_793_);
v___x_798_ = v_reuseFailAlloc_800_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
v_a_785_ = v___x_798_;
goto _start;
}
}
v___jp_801_:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
lean_inc(v_val_792_);
v___x_802_ = lean_array_push(v_nonOverlapping_787_, v_val_792_);
v___x_803_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest(v___x_793_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_dec(v_val_792_);
v___y_795_ = v___x_802_;
v___y_796_ = v___x_803_;
goto v___jp_794_;
}
else
{
lean_object* v_val_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_823_; 
v_val_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_823_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_823_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_val_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_823_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v_tailPos_808_; lean_object* v_tailPos_809_; uint8_t v_type_810_; lean_object* v_priority_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_821_; 
v_tailPos_808_ = lean_ctor_get(v_val_792_, 1);
lean_inc_ref(v_tailPos_808_);
lean_dec(v_val_792_);
v_tailPos_809_ = lean_ctor_get(v_val_804_, 1);
v_type_810_ = lean_ctor_get_uint8(v_val_804_, sizeof(void*)*3);
v_priority_811_ = lean_ctor_get(v_val_804_, 2);
v_isSharedCheck_821_ = !lean_is_exclusive(v_val_804_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v_val_804_, 0);
lean_dec(v_unused_822_);
v___x_813_ = v_val_804_;
v_isShared_814_ = v_isSharedCheck_821_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_priority_811_);
lean_inc(v_tailPos_809_);
lean_dec(v_val_804_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_821_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v_tailPos_808_);
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_tailPos_808_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v_tailPos_809_);
lean_ctor_set(v_reuseFailAlloc_820_, 2, v_priority_811_);
lean_ctor_set_uint8(v_reuseFailAlloc_820_, sizeof(void*)*3, v_type_810_);
v___x_816_ = v_reuseFailAlloc_820_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
lean_object* v___x_818_; 
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_816_);
v___x_818_ = v___x_806_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
v___y_795_ = v___x_802_;
v___y_796_ = v___x_818_;
goto v___jp_794_;
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
lean_object* v_nonOverlapping_831_; lean_object* v_surrounding_832_; lean_object* v___x_833_; 
v_nonOverlapping_831_ = lean_ctor_get(v_a_785_, 0);
v_surrounding_832_ = lean_ctor_get(v_a_785_, 2);
v___x_833_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_takeBest(v_surrounding_832_);
if (lean_obj_tag(v___x_833_) == 1)
{
lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_841_; 
lean_inc(v_surrounding_832_);
lean_inc_ref(v_nonOverlapping_831_);
v_isSharedCheck_841_ = !lean_is_exclusive(v_a_785_);
if (v_isSharedCheck_841_ == 0)
{
lean_object* v_unused_842_; lean_object* v_unused_843_; lean_object* v_unused_844_; 
v_unused_842_ = lean_ctor_get(v_a_785_, 2);
lean_dec(v_unused_842_);
v_unused_843_ = lean_ctor_get(v_a_785_, 1);
lean_dec(v_unused_843_);
v_unused_844_ = lean_ctor_get(v_a_785_, 0);
lean_dec(v_unused_844_);
v___x_835_ = v_a_785_;
v_isShared_836_ = v_isSharedCheck_841_;
goto v_resetjp_834_;
}
else
{
lean_dec(v_a_785_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_841_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 1, v___x_833_);
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_nonOverlapping_831_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_840_, 2, v_surrounding_832_);
v___x_838_ = v_reuseFailAlloc_840_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
v_a_785_ = v___x_838_;
goto _start;
}
}
}
else
{
lean_dec(v___x_833_);
return v_a_785_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg___boxed(lean_object* v_nextToken_x3f_845_, lean_object* v_a_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(v_nextToken_x3f_845_, v_a_846_);
lean_dec(v_nextToken_x3f_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken(lean_object* v_st_848_, lean_object* v_nextToken_x3f_849_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(v_nextToken_x3f_849_, v_st_848_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken___boxed(lean_object* v_st_851_, lean_object* v_nextToken_x3f_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken(v_st_851_, v_nextToken_x3f_852_);
lean_dec(v_nextToken_x3f_852_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1(lean_object* v_nextToken_x3f_854_, lean_object* v_inst_855_, lean_object* v_a_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(v_nextToken_x3f_854_, v_a_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___boxed(lean_object* v_nextToken_x3f_858_, lean_object* v_inst_859_, lean_object* v_a_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1(v_nextToken_x3f_858_, v_inst_859_, v_a_860_);
lean_dec(v_nextToken_x3f_858_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_token(lean_object* v_st_862_, lean_object* v_t_863_){
_start:
{
lean_object* v___x_864_; lean_object* v_st_865_; lean_object* v_current_x3f_866_; 
lean_inc_ref(v_t_863_);
v___x_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_864_, 0, v_t_863_);
v_st_865_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(v___x_864_, v_st_862_);
v_current_x3f_866_ = lean_ctor_get(v_st_865_, 1);
if (lean_obj_tag(v_current_x3f_866_) == 1)
{
lean_object* v_val_867_; lean_object* v_nonOverlapping_868_; lean_object* v_surrounding_869_; lean_object* v_pos_870_; lean_object* v_tailPos_871_; lean_object* v_priority_872_; lean_object* v_pos_873_; lean_object* v_tailPos_874_; uint8_t v_type_875_; lean_object* v_priority_876_; lean_object* v___y_878_; uint8_t v___x_886_; 
v_val_867_ = lean_ctor_get(v_current_x3f_866_, 0);
v_nonOverlapping_868_ = lean_ctor_get(v_st_865_, 0);
v_surrounding_869_ = lean_ctor_get(v_st_865_, 2);
v_pos_870_ = lean_ctor_get(v_t_863_, 0);
v_tailPos_871_ = lean_ctor_get(v_t_863_, 1);
v_priority_872_ = lean_ctor_get(v_t_863_, 2);
v_pos_873_ = lean_ctor_get(v_val_867_, 0);
v_tailPos_874_ = lean_ctor_get(v_val_867_, 1);
v_type_875_ = lean_ctor_get_uint8(v_val_867_, sizeof(void*)*3);
v_priority_876_ = lean_ctor_get(v_val_867_, 2);
v___x_886_ = lean_nat_dec_lt(v_priority_872_, v_priority_876_);
if (v___x_886_ == 0)
{
uint8_t v___x_887_; 
v___x_887_ = lean_nat_dec_eq(v_priority_876_, v_priority_872_);
if (v___x_887_ == 0)
{
lean_inc_ref(v_tailPos_871_);
lean_inc_ref(v_pos_870_);
lean_inc(v_surrounding_869_);
lean_inc_ref(v_nonOverlapping_868_);
lean_inc(v_val_867_);
lean_dec_ref(v_st_865_);
lean_dec_ref(v_t_863_);
goto v___jp_882_;
}
else
{
uint8_t v___x_888_; 
v___x_888_ = l_Lean_Lsp_instBEqPosition_beq(v_pos_873_, v_pos_870_);
if (v___x_888_ == 0)
{
lean_inc_ref(v_tailPos_871_);
lean_inc_ref(v_pos_870_);
lean_inc(v_surrounding_869_);
lean_inc_ref(v_nonOverlapping_868_);
lean_inc(v_val_867_);
lean_dec_ref(v_st_865_);
lean_dec_ref(v_t_863_);
goto v___jp_882_;
}
else
{
uint8_t v___x_889_; 
v___x_889_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_874_, v_tailPos_871_);
if (v___x_889_ == 0)
{
lean_object* v___x_890_; 
lean_dec_ref_known(v___x_864_, 1);
v___x_890_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding(v_st_865_, v_t_863_);
return v___x_890_;
}
else
{
lean_inc_ref(v_tailPos_871_);
lean_inc_ref(v_pos_870_);
lean_inc(v_surrounding_869_);
lean_inc_ref(v_nonOverlapping_868_);
lean_inc(v_val_867_);
lean_dec_ref(v_st_865_);
lean_dec_ref(v_t_863_);
goto v___jp_882_;
}
}
}
}
else
{
lean_object* v___x_891_; 
lean_dec_ref_known(v___x_864_, 1);
v___x_891_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding(v_st_865_, v_t_863_);
return v___x_891_;
}
v___jp_877_:
{
lean_object* v_st_879_; uint8_t v___x_880_; 
v_st_879_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_st_879_, 0, v___y_878_);
lean_ctor_set(v_st_879_, 1, v___x_864_);
lean_ctor_set(v_st_879_, 2, v_surrounding_869_);
v___x_880_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_871_, v_tailPos_874_);
lean_dec_ref(v_tailPos_871_);
if (v___x_880_ == 0)
{
lean_object* v___x_881_; 
v___x_881_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_insertSurrounding(v_st_879_, v_val_867_);
return v___x_881_;
}
else
{
lean_dec(v_val_867_);
return v_st_879_;
}
}
v___jp_882_:
{
uint8_t v___x_883_; 
v___x_883_ = l_Lean_Lsp_instOrdPosition_ord(v_pos_873_, v_pos_870_);
if (v___x_883_ == 0)
{
lean_object* v_curr_884_; lean_object* v___x_885_; 
lean_inc(v_priority_876_);
lean_inc_ref(v_pos_873_);
v_curr_884_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_curr_884_, 0, v_pos_873_);
lean_ctor_set(v_curr_884_, 1, v_pos_870_);
lean_ctor_set(v_curr_884_, 2, v_priority_876_);
lean_ctor_set_uint8(v_curr_884_, sizeof(void*)*3, v_type_875_);
v___x_885_ = lean_array_push(v_nonOverlapping_868_, v_curr_884_);
v___y_878_ = v___x_885_;
goto v___jp_877_;
}
else
{
lean_dec_ref(v_pos_870_);
v___y_878_ = v_nonOverlapping_868_;
goto v___jp_877_;
}
}
}
else
{
lean_object* v_nonOverlapping_892_; lean_object* v_surrounding_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_900_; 
lean_dec_ref(v_t_863_);
v_nonOverlapping_892_ = lean_ctor_get(v_st_865_, 0);
v_surrounding_893_ = lean_ctor_get(v_st_865_, 2);
v_isSharedCheck_900_ = !lean_is_exclusive(v_st_865_);
if (v_isSharedCheck_900_ == 0)
{
lean_object* v_unused_901_; 
v_unused_901_ = lean_ctor_get(v_st_865_, 1);
lean_dec(v_unused_901_);
v___x_895_ = v_st_865_;
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_surrounding_893_);
lean_inc(v_nonOverlapping_892_);
lean_dec(v_st_865_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_898_; 
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 1, v___x_864_);
v___x_898_ = v___x_895_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_nonOverlapping_892_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v___x_864_);
lean_ctor_set(v_reuseFailAlloc_899_, 2, v_surrounding_893_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0(lean_object* v_x_902_, lean_object* v_x_903_){
_start:
{
lean_object* v_pos_904_; lean_object* v_tailPos_905_; lean_object* v_pos_906_; lean_object* v_tailPos_907_; uint8_t v___x_908_; 
v_pos_904_ = lean_ctor_get(v_x_902_, 0);
v_tailPos_905_ = lean_ctor_get(v_x_902_, 1);
v_pos_906_ = lean_ctor_get(v_x_903_, 0);
v_tailPos_907_ = lean_ctor_get(v_x_903_, 1);
v___x_908_ = l_Lean_Lsp_instOrdPosition_ord(v_pos_904_, v_pos_906_);
if (v___x_908_ == 0)
{
uint8_t v___x_909_; 
v___x_909_ = 1;
return v___x_909_;
}
else
{
uint8_t v___x_910_; 
v___x_910_ = l_Lean_Lsp_instBEqPosition_beq(v_pos_904_, v_pos_906_);
if (v___x_910_ == 0)
{
return v___x_910_;
}
else
{
uint8_t v___x_911_; 
v___x_911_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_905_, v_tailPos_907_);
if (v___x_911_ == 2)
{
uint8_t v___x_912_; 
v___x_912_ = 0;
return v___x_912_;
}
else
{
return v___x_910_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0___boxed(lean_object* v_x_913_, lean_object* v_x_914_){
_start:
{
uint8_t v_res_915_; lean_object* v_r_916_; 
v_res_915_ = l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___lam__0(v_x_913_, v_x_914_);
lean_dec_ref(v_x_914_);
lean_dec_ref(v_x_913_);
v_r_916_ = lean_box(v_res_915_);
return v_r_916_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg(lean_object* v_as_x27_917_, lean_object* v_b_918_){
_start:
{
if (lean_obj_tag(v_as_x27_917_) == 0)
{
return v_b_918_;
}
else
{
lean_object* v_head_919_; lean_object* v_tail_920_; lean_object* v___x_921_; 
v_head_919_ = lean_ctor_get(v_as_x27_917_, 0);
v_tail_920_ = lean_ctor_get(v_as_x27_917_, 1);
lean_inc(v_head_919_);
v___x_921_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_token(v_b_918_, v_head_919_);
v_as_x27_917_ = v_tail_920_;
v_b_918_ = v___x_921_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg___boxed(lean_object* v_as_x27_923_, lean_object* v_b_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg(v_as_x27_923_, v_b_924_);
lean_dec(v_as_x27_923_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleOverlappingSemanticTokens(lean_object* v_tokens_927_){
_start:
{
lean_object* v___f_928_; lean_object* v_count_929_; lean_object* v___x_930_; lean_object* v_tokens_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v_st_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v_nonOverlapping_942_; 
v___f_928_ = ((lean_object*)(l_Lean_Server_FileWorker_handleOverlappingSemanticTokens___closed__0));
v_count_929_ = lean_array_get_size(v_tokens_927_);
v___x_930_ = lean_array_to_list(v_tokens_927_);
v_tokens_931_ = l_List_mergeSort___redArg(v___x_930_, v___f_928_);
v___x_932_ = lean_unsigned_to_nat(11u);
v___x_933_ = lean_nat_mul(v_count_929_, v___x_932_);
v___x_934_ = lean_unsigned_to_nat(10u);
v___x_935_ = lean_nat_div(v___x_933_, v___x_934_);
lean_dec(v___x_933_);
v___x_936_ = lean_mk_empty_array_with_capacity(v___x_935_);
lean_dec(v___x_935_);
v___x_937_ = lean_box(0);
v___x_938_ = lean_box(0);
v_st_939_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_st_939_, 0, v___x_936_);
lean_ctor_set(v_st_939_, 1, v___x_937_);
lean_ctor_set(v_st_939_, 2, v___x_938_);
v___x_940_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg(v_tokens_931_, v_st_939_);
lean_dec(v_tokens_931_);
v___x_941_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_HandleOverlapState_untilToken_spec__1___redArg(v___x_937_, v___x_940_);
v_nonOverlapping_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc_ref(v_nonOverlapping_942_);
lean_dec_ref(v___x_941_);
return v_nonOverlapping_942_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0(lean_object* v_as_943_, lean_object* v_as_x27_944_, lean_object* v_b_945_, lean_object* v_a_946_){
_start:
{
lean_object* v___x_947_; 
v___x_947_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___redArg(v_as_x27_944_, v_b_945_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0___boxed(lean_object* v_as_948_, lean_object* v_as_x27_949_, lean_object* v_b_950_, lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_handleOverlappingSemanticTokens_spec__0(v_as_948_, v_as_x27_949_, v_b_950_, v_a_951_);
lean_dec(v_as_x27_949_);
lean_dec(v_as_948_);
return v_res_952_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(uint8_t v___x_953_, lean_object* v_x_954_, lean_object* v_x_955_){
_start:
{
lean_object* v_pos_956_; lean_object* v_tailPos_957_; lean_object* v_pos_958_; lean_object* v_tailPos_959_; uint8_t v___x_960_; 
v_pos_956_ = lean_ctor_get(v_x_954_, 0);
v_tailPos_957_ = lean_ctor_get(v_x_954_, 1);
v_pos_958_ = lean_ctor_get(v_x_955_, 0);
v_tailPos_959_ = lean_ctor_get(v_x_955_, 1);
v___x_960_ = l_Lean_Lsp_instOrdPosition_ord(v_pos_956_, v_pos_958_);
if (v___x_960_ == 0)
{
return v___x_953_;
}
else
{
uint8_t v___x_961_; 
v___x_961_ = l_Lean_Lsp_instBEqPosition_beq(v_pos_956_, v_pos_958_);
if (v___x_961_ == 0)
{
return v___x_961_;
}
else
{
uint8_t v___x_962_; 
v___x_962_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_957_, v_tailPos_959_);
if (v___x_962_ == 2)
{
uint8_t v___x_963_; 
v___x_963_ = 0;
return v___x_963_;
}
else
{
return v___x_961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0___boxed(lean_object* v___x_964_, lean_object* v_x_965_, lean_object* v_x_966_){
_start:
{
uint8_t v___x_983__boxed_967_; uint8_t v_res_968_; lean_object* v_r_969_; 
v___x_983__boxed_967_ = lean_unbox(v___x_964_);
v_res_968_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(v___x_983__boxed_967_, v_x_965_, v_x_966_);
lean_dec_ref(v_x_966_);
lean_dec_ref(v_x_965_);
v_r_969_ = lean_box(v_res_968_);
return v_r_969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg(lean_object* v_hi_970_, lean_object* v_pivot_971_, lean_object* v_as_972_, lean_object* v_i_973_, lean_object* v_k_974_){
_start:
{
uint8_t v___x_985_; 
v___x_985_ = lean_nat_dec_lt(v_k_974_, v_hi_970_);
if (v___x_985_ == 0)
{
lean_object* v___x_986_; lean_object* v___x_987_; 
lean_dec(v_k_974_);
v___x_986_ = lean_array_fswap(v_as_972_, v_i_973_, v_hi_970_);
v___x_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_987_, 0, v_i_973_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
return v___x_987_;
}
else
{
lean_object* v___x_988_; lean_object* v_pos_989_; lean_object* v_tailPos_990_; lean_object* v_pos_991_; lean_object* v_tailPos_992_; uint8_t v___x_993_; 
v___x_988_ = lean_array_fget_borrowed(v_as_972_, v_k_974_);
v_pos_989_ = lean_ctor_get(v___x_988_, 0);
v_tailPos_990_ = lean_ctor_get(v___x_988_, 1);
v_pos_991_ = lean_ctor_get(v_pivot_971_, 0);
v_tailPos_992_ = lean_ctor_get(v_pivot_971_, 1);
v___x_993_ = l_Lean_Lsp_instOrdPosition_ord(v_pos_989_, v_pos_991_);
if (v___x_993_ == 0)
{
goto v___jp_975_;
}
else
{
uint8_t v___x_994_; 
v___x_994_ = l_Lean_Lsp_instBEqPosition_beq(v_pos_989_, v_pos_991_);
if (v___x_994_ == 0)
{
goto v___jp_981_;
}
else
{
uint8_t v___x_995_; 
v___x_995_ = l_Lean_Lsp_instOrdPosition_ord(v_tailPos_990_, v_tailPos_992_);
if (v___x_995_ == 2)
{
goto v___jp_981_;
}
else
{
goto v___jp_975_;
}
}
}
}
v___jp_975_:
{
lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_976_ = lean_array_fswap(v_as_972_, v_i_973_, v_k_974_);
v___x_977_ = lean_unsigned_to_nat(1u);
v___x_978_ = lean_nat_add(v_i_973_, v___x_977_);
lean_dec(v_i_973_);
v___x_979_ = lean_nat_add(v_k_974_, v___x_977_);
lean_dec(v_k_974_);
v_as_972_ = v___x_976_;
v_i_973_ = v___x_978_;
v_k_974_ = v___x_979_;
goto _start;
}
v___jp_981_:
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = lean_unsigned_to_nat(1u);
v___x_983_ = lean_nat_add(v_k_974_, v___x_982_);
lean_dec(v_k_974_);
v_k_974_ = v___x_983_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg___boxed(lean_object* v_hi_996_, lean_object* v_pivot_997_, lean_object* v_as_998_, lean_object* v_i_999_, lean_object* v_k_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg(v_hi_996_, v_pivot_997_, v_as_998_, v_i_999_, v_k_1000_);
lean_dec_ref(v_pivot_997_);
lean_dec(v_hi_996_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(lean_object* v_n_1002_, lean_object* v_as_1003_, lean_object* v_lo_1004_, lean_object* v_hi_1005_){
_start:
{
lean_object* v___y_1007_; uint8_t v___x_1017_; 
v___x_1017_ = lean_nat_dec_lt(v_lo_1004_, v_hi_1005_);
if (v___x_1017_ == 0)
{
lean_dec(v_lo_1004_);
return v_as_1003_;
}
else
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v_mid_1020_; lean_object* v___y_1022_; lean_object* v___y_1028_; lean_object* v___x_1033_; lean_object* v___x_1034_; uint8_t v___x_1035_; 
v___x_1018_ = lean_nat_add(v_lo_1004_, v_hi_1005_);
v___x_1019_ = lean_unsigned_to_nat(1u);
v_mid_1020_ = lean_nat_shiftr(v___x_1018_, v___x_1019_);
lean_dec(v___x_1018_);
v___x_1033_ = lean_array_fget_borrowed(v_as_1003_, v_mid_1020_);
v___x_1034_ = lean_array_fget_borrowed(v_as_1003_, v_lo_1004_);
v___x_1035_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(v___x_1017_, v___x_1033_, v___x_1034_);
if (v___x_1035_ == 0)
{
v___y_1028_ = v_as_1003_;
goto v___jp_1027_;
}
else
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_array_fswap(v_as_1003_, v_lo_1004_, v_mid_1020_);
v___y_1028_ = v___x_1036_;
goto v___jp_1027_;
}
v___jp_1021_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; uint8_t v___x_1025_; 
v___x_1023_ = lean_array_fget_borrowed(v___y_1022_, v_mid_1020_);
v___x_1024_ = lean_array_fget_borrowed(v___y_1022_, v_hi_1005_);
v___x_1025_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(v___x_1017_, v___x_1023_, v___x_1024_);
if (v___x_1025_ == 0)
{
lean_dec(v_mid_1020_);
v___y_1007_ = v___y_1022_;
goto v___jp_1006_;
}
else
{
lean_object* v___x_1026_; 
v___x_1026_ = lean_array_fswap(v___y_1022_, v_mid_1020_, v_hi_1005_);
lean_dec(v_mid_1020_);
v___y_1007_ = v___x_1026_;
goto v___jp_1006_;
}
}
v___jp_1027_:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; uint8_t v___x_1031_; 
v___x_1029_ = lean_array_fget_borrowed(v___y_1028_, v_hi_1005_);
v___x_1030_ = lean_array_fget_borrowed(v___y_1028_, v_lo_1004_);
v___x_1031_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___lam__0(v___x_1017_, v___x_1029_, v___x_1030_);
if (v___x_1031_ == 0)
{
v___y_1022_ = v___y_1028_;
goto v___jp_1021_;
}
else
{
lean_object* v___x_1032_; 
v___x_1032_ = lean_array_fswap(v___y_1028_, v_lo_1004_, v_hi_1005_);
v___y_1022_ = v___x_1032_;
goto v___jp_1021_;
}
}
}
v___jp_1006_:
{
lean_object* v_pivot_1008_; lean_object* v___x_1009_; lean_object* v_fst_1010_; lean_object* v_snd_1011_; uint8_t v___x_1012_; 
v_pivot_1008_ = lean_array_fget(v___y_1007_, v_hi_1005_);
lean_inc_n(v_lo_1004_, 2);
v___x_1009_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg(v_hi_1005_, v_pivot_1008_, v___y_1007_, v_lo_1004_, v_lo_1004_);
lean_dec(v_pivot_1008_);
v_fst_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_fst_1010_);
v_snd_1011_ = lean_ctor_get(v___x_1009_, 1);
lean_inc(v_snd_1011_);
lean_dec_ref(v___x_1009_);
v___x_1012_ = lean_nat_dec_le(v_hi_1005_, v_fst_1010_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1013_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(v_n_1002_, v_snd_1011_, v_lo_1004_, v_fst_1010_);
v___x_1014_ = lean_unsigned_to_nat(1u);
v___x_1015_ = lean_nat_add(v_fst_1010_, v___x_1014_);
lean_dec(v_fst_1010_);
v_as_1003_ = v___x_1013_;
v_lo_1004_ = v___x_1015_;
goto _start;
}
else
{
lean_dec(v_fst_1010_);
lean_dec(v_lo_1004_);
return v_snd_1011_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg___boxed(lean_object* v_n_1037_, lean_object* v_as_1038_, lean_object* v_lo_1039_, lean_object* v_hi_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(v_n_1037_, v_as_1038_, v_lo_1039_, v_hi_1040_);
lean_dec(v_hi_1040_);
lean_dec(v_n_1037_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0(lean_object* v_as_1042_, size_t v_sz_1043_, size_t v_i_1044_, lean_object* v_b_1045_){
_start:
{
uint8_t v___x_1046_; 
v___x_1046_ = lean_usize_dec_lt(v_i_1044_, v_sz_1043_);
if (v___x_1046_ == 0)
{
return v_b_1045_;
}
else
{
lean_object* v_a_1047_; lean_object* v_pos_1048_; lean_object* v_snd_1049_; lean_object* v_tailPos_1050_; uint8_t v_type_1051_; lean_object* v_fst_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1083_; 
v_a_1047_ = lean_array_uget_borrowed(v_as_1042_, v_i_1044_);
v_pos_1048_ = lean_ctor_get(v_a_1047_, 0);
v_snd_1049_ = lean_ctor_get(v_b_1045_, 1);
lean_inc(v_snd_1049_);
v_tailPos_1050_ = lean_ctor_get(v_a_1047_, 1);
v_type_1051_ = lean_ctor_get_uint8(v_a_1047_, sizeof(void*)*3);
v_fst_1052_ = lean_ctor_get(v_b_1045_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v_b_1045_);
if (v_isSharedCheck_1083_ == 0)
{
lean_object* v_unused_1084_; 
v_unused_1084_ = lean_ctor_get(v_b_1045_, 1);
lean_dec(v_unused_1084_);
v___x_1054_ = v_b_1045_;
v_isShared_1055_ = v_isSharedCheck_1083_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_fst_1052_);
lean_dec(v_b_1045_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1083_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v_line_1056_; lean_object* v_character_1057_; lean_object* v_line_1058_; lean_object* v_character_1059_; lean_object* v_tokenModifiers_1060_; lean_object* v___x_1061_; lean_object* v___y_1063_; uint8_t v___x_1082_; 
v_line_1056_ = lean_ctor_get(v_pos_1048_, 0);
v_character_1057_ = lean_ctor_get(v_pos_1048_, 1);
v_line_1058_ = lean_ctor_get(v_snd_1049_, 0);
lean_inc(v_line_1058_);
v_character_1059_ = lean_ctor_get(v_snd_1049_, 1);
lean_inc(v_character_1059_);
lean_dec(v_snd_1049_);
v_tokenModifiers_1060_ = lean_unsigned_to_nat(0u);
v___x_1061_ = lean_nat_sub(v_line_1056_, v_line_1058_);
v___x_1082_ = lean_nat_dec_eq(v_line_1056_, v_line_1058_);
lean_dec(v_line_1058_);
if (v___x_1082_ == 0)
{
lean_dec(v_character_1059_);
v___y_1063_ = v_tokenModifiers_1060_;
goto v___jp_1062_;
}
else
{
v___y_1063_ = v_character_1059_;
goto v___jp_1062_;
}
v___jp_1062_:
{
lean_object* v_character_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
v_character_1064_ = lean_ctor_get(v_tailPos_1050_, 1);
v___x_1065_ = lean_nat_sub(v_character_1057_, v___y_1063_);
lean_dec(v___y_1063_);
v___x_1066_ = lean_nat_sub(v_character_1064_, v_character_1057_);
v___x_1067_ = l_Lean_Lsp_SemanticTokenType_toNat(v_type_1051_);
v___x_1068_ = lean_unsigned_to_nat(5u);
v___x_1069_ = lean_mk_empty_array_with_capacity(v___x_1068_);
v___x_1070_ = lean_array_push(v___x_1069_, v___x_1061_);
v___x_1071_ = lean_array_push(v___x_1070_, v___x_1065_);
v___x_1072_ = lean_array_push(v___x_1071_, v___x_1066_);
v___x_1073_ = lean_array_push(v___x_1072_, v___x_1067_);
v___x_1074_ = lean_array_push(v___x_1073_, v_tokenModifiers_1060_);
v___x_1075_ = l_Array_append___redArg(v_fst_1052_, v___x_1074_);
lean_dec_ref(v___x_1074_);
lean_inc_ref(v_pos_1048_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v_pos_1048_);
lean_ctor_set(v___x_1054_, 0, v___x_1075_);
v___x_1077_ = v___x_1054_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1081_, 1, v_pos_1048_);
v___x_1077_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
size_t v___x_1078_; size_t v___x_1079_; 
v___x_1078_ = ((size_t)1ULL);
v___x_1079_ = lean_usize_add(v_i_1044_, v___x_1078_);
v_i_1044_ = v___x_1079_;
v_b_1045_ = v___x_1077_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0___boxed(lean_object* v_as_1085_, lean_object* v_sz_1086_, lean_object* v_i_1087_, lean_object* v_b_1088_){
_start:
{
size_t v_sz_boxed_1089_; size_t v_i_boxed_1090_; lean_object* v_res_1091_; 
v_sz_boxed_1089_ = lean_unbox_usize(v_sz_1086_);
lean_dec(v_sz_1086_);
v_i_boxed_1090_ = lean_unbox_usize(v_i_1087_);
lean_dec(v_i_1087_);
v_res_1091_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0(v_as_1085_, v_sz_boxed_1089_, v_i_boxed_1090_, v_b_1088_);
lean_dec_ref(v_as_1085_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens(lean_object* v_tokens_1094_){
_start:
{
lean_object* v_tokenModifiers_1095_; lean_object* v___y_1097_; lean_object* v___x_1117_; lean_object* v___y_1119_; lean_object* v___y_1120_; uint8_t v___x_1122_; 
v_tokenModifiers_1095_ = lean_unsigned_to_nat(0u);
v___x_1117_ = lean_array_get_size(v_tokens_1094_);
v___x_1122_ = lean_nat_dec_eq(v___x_1117_, v_tokenModifiers_1095_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___y_1126_; uint8_t v___x_1128_; 
v___x_1123_ = lean_unsigned_to_nat(1u);
v___x_1124_ = lean_nat_sub(v___x_1117_, v___x_1123_);
v___x_1128_ = lean_nat_dec_le(v_tokenModifiers_1095_, v___x_1124_);
if (v___x_1128_ == 0)
{
lean_inc(v___x_1124_);
v___y_1126_ = v___x_1124_;
goto v___jp_1125_;
}
else
{
v___y_1126_ = v_tokenModifiers_1095_;
goto v___jp_1125_;
}
v___jp_1125_:
{
uint8_t v___x_1127_; 
v___x_1127_ = lean_nat_dec_le(v___y_1126_, v___x_1124_);
if (v___x_1127_ == 0)
{
lean_dec(v___x_1124_);
lean_inc(v___y_1126_);
v___y_1119_ = v___y_1126_;
v___y_1120_ = v___y_1126_;
goto v___jp_1118_;
}
else
{
v___y_1119_ = v___y_1126_;
v___y_1120_ = v___x_1124_;
goto v___jp_1118_;
}
}
}
else
{
v___y_1097_ = v_tokens_1094_;
goto v___jp_1096_;
}
v___jp_1096_:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v_data_1101_; lean_object* v_lastPos_1102_; lean_object* v___x_1103_; size_t v_sz_1104_; size_t v___x_1105_; lean_object* v___x_1106_; lean_object* v_fst_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1115_; 
v___x_1098_ = lean_unsigned_to_nat(5u);
v___x_1099_ = lean_array_get_size(v___y_1097_);
v___x_1100_ = lean_nat_mul(v___x_1098_, v___x_1099_);
v_data_1101_ = lean_mk_empty_array_with_capacity(v___x_1100_);
lean_dec(v___x_1100_);
v_lastPos_1102_ = ((lean_object*)(l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens___closed__0));
v___x_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1103_, 0, v_data_1101_);
lean_ctor_set(v___x_1103_, 1, v_lastPos_1102_);
v_sz_1104_ = lean_array_size(v___y_1097_);
v___x_1105_ = ((size_t)0ULL);
v___x_1106_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__0(v___y_1097_, v_sz_1104_, v___x_1105_, v___x_1103_);
lean_dec_ref(v___y_1097_);
v_fst_1107_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1115_ == 0)
{
lean_object* v_unused_1116_; 
v_unused_1116_ = lean_ctor_get(v___x_1106_, 1);
lean_dec(v_unused_1116_);
v___x_1109_ = v___x_1106_;
v_isShared_1110_ = v_isSharedCheck_1115_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_fst_1107_);
lean_dec(v___x_1106_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1115_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1111_ = lean_box(0);
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 1, v_fst_1107_);
lean_ctor_set(v___x_1109_, 0, v___x_1111_);
v___x_1113_ = v___x_1109_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1111_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_fst_1107_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
v___jp_1118_:
{
lean_object* v___x_1121_; 
v___x_1121_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(v___x_1117_, v_tokens_1094_, v___y_1119_, v___y_1120_);
lean_dec(v___y_1120_);
v___y_1097_ = v___x_1121_;
goto v___jp_1096_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1(lean_object* v_n_1129_, lean_object* v_as_1130_, lean_object* v_lo_1131_, lean_object* v_hi_1132_, lean_object* v_w_1133_, lean_object* v_hlo_1134_, lean_object* v_hhi_1135_){
_start:
{
lean_object* v___x_1136_; 
v___x_1136_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___redArg(v_n_1129_, v_as_1130_, v_lo_1131_, v_hi_1132_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1___boxed(lean_object* v_n_1137_, lean_object* v_as_1138_, lean_object* v_lo_1139_, lean_object* v_hi_1140_, lean_object* v_w_1141_, lean_object* v_hlo_1142_, lean_object* v_hhi_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1(v_n_1137_, v_as_1138_, v_lo_1139_, v_hi_1140_, v_w_1141_, v_hlo_1142_, v_hhi_1143_);
lean_dec(v_hi_1140_);
lean_dec(v_n_1137_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1(lean_object* v_n_1145_, lean_object* v_lo_1146_, lean_object* v_hi_1147_, lean_object* v_hhi_1148_, lean_object* v_pivot_1149_, lean_object* v_as_1150_, lean_object* v_i_1151_, lean_object* v_k_1152_, lean_object* v_ilo_1153_, lean_object* v_ik_1154_, lean_object* v_w_1155_){
_start:
{
lean_object* v___x_1156_; 
v___x_1156_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___redArg(v_hi_1147_, v_pivot_1149_, v_as_1150_, v_i_1151_, v_k_1152_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1___boxed(lean_object* v_n_1157_, lean_object* v_lo_1158_, lean_object* v_hi_1159_, lean_object* v_hhi_1160_, lean_object* v_pivot_1161_, lean_object* v_as_1162_, lean_object* v_i_1163_, lean_object* v_k_1164_, lean_object* v_ilo_1165_, lean_object* v_ik_1166_, lean_object* v_w_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_FileWorker_computeDeltaLspSemanticTokens_spec__1_spec__1(v_n_1157_, v_lo_1158_, v_hi_1159_, v_hhi_1160_, v_pivot_1161_, v_as_1162_, v_i_1163_, v_k_1164_, v_ilo_1165_, v_ik_1166_, v_w_1167_);
lean_dec_ref(v_pivot_1161_);
lean_dec(v_hi_1159_);
lean_dec(v_lo_1158_);
lean_dec(v_n_1157_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(lean_object* v_tk_1169_, uint8_t v_k_1170_, lean_object* v_a_1171_){
_start:
{
lean_object* v___y_1173_; 
if (v_k_1170_ == 18)
{
lean_object* v___x_1178_; 
v___x_1178_ = lean_unsigned_to_nat(3u);
v___y_1173_ = v___x_1178_;
goto v___jp_1172_;
}
else
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_unsigned_to_nat(5u);
v___y_1173_ = v___x_1179_;
goto v___jp_1172_;
}
v___jp_1172_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1174_ = lean_box(0);
v___x_1175_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1175_, 0, v_tk_1169_);
lean_ctor_set(v___x_1175_, 1, v___y_1173_);
lean_ctor_set_uint8(v___x_1175_, sizeof(void*)*2, v_k_1170_);
v___x_1176_ = lean_array_push(v_a_1171_, v___x_1175_);
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1174_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
return v___x_1177_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok___boxed(lean_object* v_tk_1180_, lean_object* v_k_1181_, lean_object* v_a_1182_){
_start:
{
uint8_t v_k_boxed_1183_; lean_object* v_res_1184_; 
v_k_boxed_1183_ = lean_unbox(v_k_1181_);
v_res_1184_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_tk_1180_, v_k_boxed_1183_, v_a_1182_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine(lean_object* v_line_1186_, lean_object* v_value_1187_){
_start:
{
uint8_t v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = 0;
v___x_1189_ = l_Lean_Syntax_getRange_x3f(v_line_1186_, v___x_1188_);
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_object* v___x_1190_; 
v___x_1190_ = lean_box(0);
return v___x_1190_;
}
else
{
lean_object* v_val_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1221_; 
v_val_1191_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1193_ = v___x_1189_;
v_isShared_1194_ = v_isSharedCheck_1221_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_val_1191_);
lean_dec(v___x_1189_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1221_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v_start_1195_; lean_object* v_stop_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1220_; 
v_start_1195_ = lean_ctor_get(v_val_1191_, 0);
v_stop_1196_ = lean_ctor_get(v_val_1191_, 1);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_val_1191_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1198_ = v_val_1191_;
v_isShared_1199_ = v_isSharedCheck_1220_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_stop_1196_);
lean_inc(v_start_1195_);
lean_dec(v_val_1191_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1220_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
uint8_t v___y_1201_; lean_object* v___y_1202_; lean_object* v___x_1212_; lean_object* v___x_1213_; uint8_t v___x_1214_; 
v___x_1212_ = lean_string_utf8_byte_size(v_value_1187_);
v___x_1213_ = lean_unsigned_to_nat(1u);
v___x_1214_ = lean_nat_dec_le(v___x_1213_, v___x_1212_);
if (v___x_1214_ == 0)
{
goto v___jp_1210_;
}
else
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
v___x_1215_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine___closed__0));
v___x_1216_ = lean_unsigned_to_nat(0u);
v___x_1217_ = lean_nat_sub(v___x_1212_, v___x_1213_);
v___x_1218_ = lean_string_memcmp(v_value_1187_, v___x_1215_, v___x_1217_, v___x_1216_, v___x_1213_);
lean_dec(v___x_1217_);
if (v___x_1218_ == 0)
{
goto v___jp_1210_;
}
else
{
lean_object* v___x_1219_; 
v___x_1219_ = lean_nat_sub(v_stop_1196_, v___x_1213_);
lean_dec(v_stop_1196_);
v___y_1201_ = v___x_1214_;
v___y_1202_ = v___x_1219_;
goto v___jp_1200_;
}
}
v___jp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 1, v___y_1202_);
v___x_1204_ = v___x_1198_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_start_1195_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v___y_1202_);
v___x_1204_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1205_ = l_Lean_Syntax_ofRange(v___x_1204_, v___y_1201_);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 0, v___x_1205_);
v___x_1207_ = v___x_1193_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
v___jp_1210_:
{
uint8_t v___x_1211_; 
v___x_1211_ = 1;
v___y_1201_ = v___x_1211_;
v___y_1202_ = v_stop_1196_;
goto v___jp_1200_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine___boxed(lean_object* v_line_1222_, lean_object* v_value_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine(v_line_1222_, v_value_1223_);
lean_dec_ref(v_value_1223_);
lean_dec(v_line_1222_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goArg(lean_object* v_arg_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lean_Doc_ArgView_of(v_arg_1225_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = lean_box(0);
v___x_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1228_);
lean_ctor_set(v___x_1229_, 1, v_a_1226_);
return v___x_1229_;
}
else
{
lean_object* v_val_1230_; 
v_val_1230_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_val_1230_);
lean_dec_ref_known(v___x_1227_, 1);
switch(lean_obj_tag(v_val_1230_))
{
case 0:
{
lean_object* v_val_1231_; uint8_t v___x_1232_; lean_object* v___x_1233_; 
v_val_1231_ = lean_ctor_get(v_val_1230_, 1);
lean_inc(v_val_1231_);
lean_dec_ref_known(v_val_1230_, 2);
v___x_1232_ = 11;
v___x_1233_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_val_1231_, v___x_1232_, v_a_1226_);
return v___x_1233_;
}
case 1:
{
lean_object* v_parens_1234_; lean_object* v_name_1235_; lean_object* v_assign_1236_; lean_object* v_val_1237_; lean_object* v___y_1239_; 
v_parens_1234_ = lean_ctor_get(v_val_1230_, 1);
lean_inc(v_parens_1234_);
v_name_1235_ = lean_ctor_get(v_val_1230_, 2);
lean_inc(v_name_1235_);
v_assign_1236_ = lean_ctor_get(v_val_1230_, 3);
lean_inc(v_assign_1236_);
v_val_1237_ = lean_ctor_get(v_val_1230_, 4);
lean_inc(v_val_1237_);
lean_dec_ref_known(v_val_1230_, 5);
if (lean_obj_tag(v_parens_1234_) == 1)
{
lean_object* v_val_1262_; lean_object* v_fst_1263_; uint8_t v___x_1264_; lean_object* v___x_1265_; lean_object* v_snd_1266_; 
v_val_1262_ = lean_ctor_get(v_parens_1234_, 0);
v_fst_1263_ = lean_ctor_get(v_val_1262_, 0);
v___x_1264_ = 0;
lean_inc(v_fst_1263_);
v___x_1265_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_fst_1263_, v___x_1264_, v_a_1226_);
v_snd_1266_ = lean_ctor_get(v___x_1265_, 1);
lean_inc(v_snd_1266_);
lean_dec_ref(v___x_1265_);
v___y_1239_ = v_snd_1266_;
goto v___jp_1238_;
}
else
{
v___y_1239_ = v_a_1226_;
goto v___jp_1238_;
}
v___jp_1238_:
{
uint8_t v___x_1240_; lean_object* v___x_1241_; lean_object* v_snd_1242_; uint8_t v___x_1243_; lean_object* v___x_1244_; lean_object* v_snd_1245_; uint8_t v___x_1246_; lean_object* v___x_1247_; 
v___x_1240_ = 2;
v___x_1241_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_name_1235_, v___x_1240_, v___y_1239_);
v_snd_1242_ = lean_ctor_get(v___x_1241_, 1);
lean_inc(v_snd_1242_);
lean_dec_ref(v___x_1241_);
v___x_1243_ = 0;
v___x_1244_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_assign_1236_, v___x_1243_, v_snd_1242_);
v_snd_1245_ = lean_ctor_get(v___x_1244_, 1);
lean_inc(v_snd_1245_);
lean_dec_ref(v___x_1244_);
v___x_1246_ = 11;
v___x_1247_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_val_1237_, v___x_1246_, v_snd_1245_);
if (lean_obj_tag(v_parens_1234_) == 1)
{
lean_object* v_val_1248_; lean_object* v_snd_1249_; lean_object* v_snd_1250_; lean_object* v___x_1251_; 
v_val_1248_ = lean_ctor_get(v_parens_1234_, 0);
lean_inc(v_val_1248_);
lean_dec_ref_known(v_parens_1234_, 1);
v_snd_1249_ = lean_ctor_get(v___x_1247_, 1);
lean_inc(v_snd_1249_);
lean_dec_ref(v___x_1247_);
v_snd_1250_ = lean_ctor_get(v_val_1248_, 1);
lean_inc(v_snd_1250_);
lean_dec(v_val_1248_);
v___x_1251_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_snd_1250_, v___x_1243_, v_snd_1249_);
return v___x_1251_;
}
else
{
lean_object* v_snd_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1260_; 
lean_dec(v_parens_1234_);
v_snd_1252_ = lean_ctor_get(v___x_1247_, 1);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1260_ == 0)
{
lean_object* v_unused_1261_; 
v_unused_1261_ = lean_ctor_get(v___x_1247_, 0);
lean_dec(v_unused_1261_);
v___x_1254_ = v___x_1247_;
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_snd_1252_);
lean_dec(v___x_1247_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1256_ = lean_box(0);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 0, v___x_1256_);
v___x_1258_ = v___x_1254_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1256_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v_snd_1252_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
default: 
{
lean_object* v_sign_1267_; lean_object* v_name_1268_; uint8_t v___x_1269_; lean_object* v___x_1270_; lean_object* v_snd_1271_; uint8_t v___x_1272_; lean_object* v___x_1273_; 
v_sign_1267_ = lean_ctor_get(v_val_1230_, 1);
lean_inc(v_sign_1267_);
v_name_1268_ = lean_ctor_get(v_val_1230_, 2);
lean_inc(v_name_1268_);
lean_dec_ref_known(v_val_1230_, 3);
v___x_1269_ = 0;
v___x_1270_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_sign_1267_, v___x_1269_, v_a_1226_);
v_snd_1271_ = lean_ctor_get(v___x_1270_, 1);
lean_inc(v_snd_1271_);
lean_dec_ref(v___x_1270_);
v___x_1272_ = 2;
v___x_1273_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_name_1268_, v___x_1272_, v_snd_1271_);
return v___x_1273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goTarget(lean_object* v_tgt_1274_, lean_object* v_a_1275_){
_start:
{
if (lean_obj_tag(v_tgt_1274_) == 0)
{
lean_object* v_opener_1276_; lean_object* v_url_1277_; lean_object* v_closer_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v_snd_1281_; uint8_t v___x_1282_; lean_object* v___x_1283_; lean_object* v_snd_1284_; lean_object* v___x_1285_; 
v_opener_1276_ = lean_ctor_get(v_tgt_1274_, 1);
lean_inc(v_opener_1276_);
v_url_1277_ = lean_ctor_get(v_tgt_1274_, 2);
lean_inc(v_url_1277_);
v_closer_1278_ = lean_ctor_get(v_tgt_1274_, 3);
lean_inc(v_closer_1278_);
lean_dec_ref_known(v_tgt_1274_, 4);
v___x_1279_ = 0;
v___x_1280_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_opener_1276_, v___x_1279_, v_a_1275_);
v_snd_1281_ = lean_ctor_get(v___x_1280_, 1);
lean_inc(v_snd_1281_);
lean_dec_ref(v___x_1280_);
v___x_1282_ = 18;
v___x_1283_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_url_1277_, v___x_1282_, v_snd_1281_);
v_snd_1284_ = lean_ctor_get(v___x_1283_, 1);
lean_inc(v_snd_1284_);
lean_dec_ref(v___x_1283_);
v___x_1285_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closer_1278_, v___x_1279_, v_snd_1284_);
return v___x_1285_;
}
else
{
lean_object* v_opener_1286_; lean_object* v_name_1287_; lean_object* v_closer_1288_; uint8_t v___x_1289_; lean_object* v___x_1290_; lean_object* v_snd_1291_; uint8_t v___x_1292_; lean_object* v___x_1293_; lean_object* v_snd_1294_; lean_object* v___x_1295_; 
v_opener_1286_ = lean_ctor_get(v_tgt_1274_, 1);
lean_inc(v_opener_1286_);
v_name_1287_ = lean_ctor_get(v_tgt_1274_, 2);
lean_inc(v_name_1287_);
v_closer_1288_ = lean_ctor_get(v_tgt_1274_, 3);
lean_inc(v_closer_1288_);
lean_dec_ref_known(v_tgt_1274_, 4);
v___x_1289_ = 0;
v___x_1290_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_opener_1286_, v___x_1289_, v_a_1275_);
v_snd_1291_ = lean_ctor_get(v___x_1290_, 1);
lean_inc(v_snd_1291_);
lean_dec_ref(v___x_1290_);
v___x_1292_ = 2;
v___x_1293_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_name_1287_, v___x_1292_, v_snd_1291_);
v_snd_1294_ = lean_ctor_get(v___x_1293_, 1);
lean_inc(v_snd_1294_);
lean_dec_ref(v___x_1293_);
v___x_1295_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closer_1288_, v___x_1289_, v_snd_1294_);
return v___x_1295_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode_spec__0(lean_object* v_as_1296_, size_t v_sz_1297_, size_t v_i_1298_, lean_object* v_b_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_a_1302_; lean_object* v_snd_1303_; uint8_t v___x_1307_; 
v___x_1307_ = lean_usize_dec_lt(v_i_1298_, v_sz_1297_);
if (v___x_1307_ == 0)
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1308_, 0, v_b_1299_);
lean_ctor_set(v___x_1308_, 1, v___y_1300_);
return v___x_1308_;
}
else
{
lean_object* v___x_1309_; lean_object* v_a_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1309_ = lean_box(0);
v_a_1310_ = lean_array_uget_borrowed(v_as_1296_, v_i_1298_);
v___x_1311_ = l_Lean_TSyntax_getVersoCodeLine(v_a_1310_);
v___x_1312_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine(v_a_1310_, v___x_1311_);
lean_dec_ref(v___x_1311_);
if (lean_obj_tag(v___x_1312_) == 1)
{
lean_object* v_val_1313_; uint8_t v___x_1314_; lean_object* v___x_1315_; lean_object* v_snd_1316_; 
v_val_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_val_1313_);
lean_dec_ref_known(v___x_1312_, 1);
v___x_1314_ = 18;
v___x_1315_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_val_1313_, v___x_1314_, v___y_1300_);
v_snd_1316_ = lean_ctor_get(v___x_1315_, 1);
lean_inc(v_snd_1316_);
lean_dec_ref(v___x_1315_);
v_a_1302_ = v___x_1309_;
v_snd_1303_ = v_snd_1316_;
goto v___jp_1301_;
}
else
{
lean_dec(v___x_1312_);
v_a_1302_ = v___x_1309_;
v_snd_1303_ = v___y_1300_;
goto v___jp_1301_;
}
}
v___jp_1301_:
{
size_t v___x_1304_; size_t v___x_1305_; 
v___x_1304_ = ((size_t)1ULL);
v___x_1305_ = lean_usize_add(v_i_1298_, v___x_1304_);
v_i_1298_ = v___x_1305_;
v_b_1299_ = v_a_1302_;
v___y_1300_ = v_snd_1303_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode_spec__0___boxed(lean_object* v_as_1317_, lean_object* v_sz_1318_, lean_object* v_i_1319_, lean_object* v_b_1320_, lean_object* v___y_1321_){
_start:
{
size_t v_sz_boxed_1322_; size_t v_i_boxed_1323_; lean_object* v_res_1324_; 
v_sz_boxed_1322_ = lean_unbox_usize(v_sz_1318_);
lean_dec(v_sz_1318_);
v_i_boxed_1323_ = lean_unbox_usize(v_i_1319_);
lean_dec(v_i_1319_);
v_res_1324_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode_spec__0(v_as_1317_, v_sz_boxed_1322_, v_i_boxed_1323_, v_b_1320_, v___y_1321_);
lean_dec_ref(v_as_1317_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode(lean_object* v_code_1325_, lean_object* v_a_1326_){
_start:
{
lean_object* v_opener_1327_; lean_object* v_content_1328_; lean_object* v_closer_1329_; uint8_t v___x_1330_; lean_object* v___x_1331_; lean_object* v_snd_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; size_t v_sz_1335_; size_t v___x_1336_; lean_object* v___x_1337_; lean_object* v_snd_1338_; lean_object* v___x_1339_; 
v_opener_1327_ = lean_ctor_get(v_code_1325_, 1);
lean_inc(v_opener_1327_);
v_content_1328_ = lean_ctor_get(v_code_1325_, 2);
lean_inc(v_content_1328_);
v_closer_1329_ = lean_ctor_get(v_code_1325_, 3);
lean_inc(v_closer_1329_);
lean_dec_ref(v_code_1325_);
v___x_1330_ = 0;
v___x_1331_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_opener_1327_, v___x_1330_, v_a_1326_);
v_snd_1332_ = lean_ctor_get(v___x_1331_, 1);
lean_inc(v_snd_1332_);
lean_dec_ref(v___x_1331_);
v___x_1333_ = l_Lean_TSyntax_getVersoCodeLines(v_content_1328_);
lean_dec(v_content_1328_);
v___x_1334_ = lean_box(0);
v_sz_1335_ = lean_array_size(v___x_1333_);
v___x_1336_ = ((size_t)0ULL);
v___x_1337_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode_spec__0(v___x_1333_, v_sz_1335_, v___x_1336_, v___x_1334_, v_snd_1332_);
lean_dec_ref(v___x_1333_);
v_snd_1338_ = lean_ctor_get(v___x_1337_, 1);
lean_inc(v_snd_1338_);
lean_dec_ref(v___x_1337_);
v___x_1339_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closer_1329_, v___x_1330_, v_snd_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__2(lean_object* v_as_1340_, size_t v_sz_1341_, size_t v_i_1342_, lean_object* v_b_1343_, lean_object* v___y_1344_){
_start:
{
uint8_t v___x_1345_; 
v___x_1345_ = lean_usize_dec_lt(v_i_1342_, v_sz_1341_);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1346_, 0, v_b_1343_);
lean_ctor_set(v___x_1346_, 1, v___y_1344_);
return v___x_1346_;
}
else
{
lean_object* v_a_1347_; lean_object* v___x_1348_; lean_object* v_snd_1349_; lean_object* v___x_1350_; size_t v___x_1351_; size_t v___x_1352_; 
v_a_1347_ = lean_array_uget_borrowed(v_as_1340_, v_i_1342_);
lean_inc(v_a_1347_);
v___x_1348_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goArg(v_a_1347_, v___y_1344_);
v_snd_1349_ = lean_ctor_get(v___x_1348_, 1);
lean_inc(v_snd_1349_);
lean_dec_ref(v___x_1348_);
v___x_1350_ = lean_box(0);
v___x_1351_ = ((size_t)1ULL);
v___x_1352_ = lean_usize_add(v_i_1342_, v___x_1351_);
v_i_1342_ = v___x_1352_;
v_b_1343_ = v___x_1350_;
v___y_1344_ = v_snd_1349_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__2___boxed(lean_object* v_as_1354_, lean_object* v_sz_1355_, lean_object* v_i_1356_, lean_object* v_b_1357_, lean_object* v___y_1358_){
_start:
{
size_t v_sz_boxed_1359_; size_t v_i_boxed_1360_; lean_object* v_res_1361_; 
v_sz_boxed_1359_ = lean_unbox_usize(v_sz_1355_);
lean_dec(v_sz_1355_);
v_i_boxed_1360_ = lean_unbox_usize(v_i_1356_);
lean_dec(v_i_1356_);
v_res_1361_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__2(v_as_1354_, v_sz_boxed_1359_, v_i_boxed_1360_, v_b_1357_, v___y_1358_);
lean_dec_ref(v_as_1354_);
return v_res_1361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem(lean_object* v_getTokens_1362_, lean_object* v_marker_1363_, lean_object* v_contents_1364_, lean_object* v_a_1365_){
_start:
{
uint8_t v___x_1366_; lean_object* v___x_1367_; lean_object* v_snd_1368_; lean_object* v___x_1369_; size_t v_sz_1370_; size_t v___x_1371_; lean_object* v___x_1372_; lean_object* v_snd_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
v___x_1366_ = 0;
v___x_1367_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_marker_1363_, v___x_1366_, v_a_1365_);
v_snd_1368_ = lean_ctor_get(v___x_1367_, 1);
lean_inc(v_snd_1368_);
lean_dec_ref(v___x_1367_);
v___x_1369_ = lean_box(0);
v_sz_1370_ = lean_array_size(v_contents_1364_);
v___x_1371_ = ((size_t)0ULL);
v___x_1372_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1362_, v_contents_1364_, v_sz_1370_, v___x_1371_, v___x_1369_, v_snd_1368_);
v_snd_1373_ = lean_ctor_get(v___x_1372_, 1);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1380_ == 0)
{
lean_object* v_unused_1381_; 
v_unused_1381_ = lean_ctor_get(v___x_1372_, 0);
lean_dec(v_unused_1381_);
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_snd_1373_);
lean_dec(v___x_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1369_);
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v___x_1369_);
lean_ctor_set(v_reuseFailAlloc_1379_, 1, v_snd_1373_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__3(lean_object* v_getTokens_1382_, lean_object* v_as_1383_, size_t v_sz_1384_, size_t v_i_1385_, lean_object* v_b_1386_, lean_object* v___y_1387_){
_start:
{
uint8_t v___x_1388_; 
v___x_1388_ = lean_usize_dec_lt(v_i_1385_, v_sz_1384_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; 
lean_dec_ref(v_getTokens_1382_);
v___x_1389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1389_, 0, v_b_1386_);
lean_ctor_set(v___x_1389_, 1, v___y_1387_);
return v___x_1389_;
}
else
{
lean_object* v_a_1390_; lean_object* v_marker_1391_; lean_object* v_contents_1392_; lean_object* v___x_1393_; lean_object* v_snd_1394_; lean_object* v___x_1395_; size_t v___x_1396_; size_t v___x_1397_; 
v_a_1390_ = lean_array_uget_borrowed(v_as_1383_, v_i_1385_);
v_marker_1391_ = lean_ctor_get(v_a_1390_, 1);
v_contents_1392_ = lean_ctor_get(v_a_1390_, 2);
lean_inc(v_marker_1391_);
lean_inc_ref(v_getTokens_1382_);
v___x_1393_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem(v_getTokens_1382_, v_marker_1391_, v_contents_1392_, v___y_1387_);
v_snd_1394_ = lean_ctor_get(v___x_1393_, 1);
lean_inc(v_snd_1394_);
lean_dec_ref(v___x_1393_);
v___x_1395_ = lean_box(0);
v___x_1396_ = ((size_t)1ULL);
v___x_1397_ = lean_usize_add(v_i_1385_, v___x_1396_);
v_i_1385_ = v___x_1397_;
v_b_1386_ = v___x_1395_;
v___y_1387_ = v_snd_1394_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__4(lean_object* v_getTokens_1399_, lean_object* v_as_1400_, size_t v_sz_1401_, size_t v_i_1402_, lean_object* v_b_1403_, lean_object* v___y_1404_){
_start:
{
uint8_t v___x_1405_; 
v___x_1405_ = lean_usize_dec_lt(v_i_1402_, v_sz_1401_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1406_; 
lean_dec_ref(v_getTokens_1399_);
v___x_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1406_, 0, v_b_1403_);
lean_ctor_set(v___x_1406_, 1, v___y_1404_);
return v___x_1406_;
}
else
{
lean_object* v_a_1407_; lean_object* v_marker_1408_; lean_object* v_contents_1409_; lean_object* v___x_1410_; lean_object* v_snd_1411_; lean_object* v___x_1412_; size_t v___x_1413_; size_t v___x_1414_; 
v_a_1407_ = lean_array_uget_borrowed(v_as_1400_, v_i_1402_);
v_marker_1408_ = lean_ctor_get(v_a_1407_, 1);
v_contents_1409_ = lean_ctor_get(v_a_1407_, 2);
lean_inc(v_marker_1408_);
lean_inc_ref(v_getTokens_1399_);
v___x_1410_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem(v_getTokens_1399_, v_marker_1408_, v_contents_1409_, v___y_1404_);
v_snd_1411_ = lean_ctor_get(v___x_1410_, 1);
lean_inc(v_snd_1411_);
lean_dec_ref(v___x_1410_);
v___x_1412_ = lean_box(0);
v___x_1413_ = ((size_t)1ULL);
v___x_1414_ = lean_usize_add(v_i_1402_, v___x_1413_);
v_i_1402_ = v___x_1414_;
v_b_1403_ = v___x_1412_;
v___y_1404_ = v_snd_1411_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDesc(lean_object* v_getTokens_1416_, lean_object* v_item_1417_, lean_object* v_a_1418_){
_start:
{
lean_object* v_marker_1419_; lean_object* v_term_1420_; lean_object* v_desc_1421_; uint8_t v___x_1422_; lean_object* v___x_1423_; lean_object* v_snd_1424_; lean_object* v___x_1425_; size_t v_sz_1426_; size_t v___x_1427_; lean_object* v___x_1428_; lean_object* v_snd_1429_; size_t v_sz_1430_; lean_object* v___x_1431_; lean_object* v_snd_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
v_marker_1419_ = lean_ctor_get(v_item_1417_, 1);
lean_inc(v_marker_1419_);
v_term_1420_ = lean_ctor_get(v_item_1417_, 2);
lean_inc_ref(v_term_1420_);
v_desc_1421_ = lean_ctor_get(v_item_1417_, 3);
lean_inc_ref(v_desc_1421_);
lean_dec_ref(v_item_1417_);
v___x_1422_ = 0;
v___x_1423_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_marker_1419_, v___x_1422_, v_a_1418_);
v_snd_1424_ = lean_ctor_get(v___x_1423_, 1);
lean_inc(v_snd_1424_);
lean_dec_ref(v___x_1423_);
v___x_1425_ = lean_box(0);
v_sz_1426_ = lean_array_size(v_term_1420_);
v___x_1427_ = ((size_t)0ULL);
lean_inc_ref(v_getTokens_1416_);
v___x_1428_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1416_, v_term_1420_, v_sz_1426_, v___x_1427_, v___x_1425_, v_snd_1424_);
lean_dec_ref(v_term_1420_);
v_snd_1429_ = lean_ctor_get(v___x_1428_, 1);
lean_inc(v_snd_1429_);
lean_dec_ref(v___x_1428_);
v_sz_1430_ = lean_array_size(v_desc_1421_);
v___x_1431_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1416_, v_desc_1421_, v_sz_1430_, v___x_1427_, v___x_1425_, v_snd_1429_);
lean_dec_ref(v_desc_1421_);
v_snd_1432_ = lean_ctor_get(v___x_1431_, 1);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1439_ == 0)
{
lean_object* v_unused_1440_; 
v_unused_1440_ = lean_ctor_get(v___x_1431_, 0);
lean_dec(v_unused_1440_);
v___x_1434_ = v___x_1431_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_snd_1432_);
lean_dec(v___x_1431_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 0, v___x_1425_);
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1425_);
lean_ctor_set(v_reuseFailAlloc_1438_, 1, v_snd_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__5(lean_object* v_getTokens_1441_, lean_object* v_as_1442_, size_t v_sz_1443_, size_t v_i_1444_, lean_object* v_b_1445_, lean_object* v___y_1446_){
_start:
{
uint8_t v___x_1447_; 
v___x_1447_ = lean_usize_dec_lt(v_i_1444_, v_sz_1443_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; 
lean_dec_ref(v_getTokens_1441_);
v___x_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1448_, 0, v_b_1445_);
lean_ctor_set(v___x_1448_, 1, v___y_1446_);
return v___x_1448_;
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1450_; lean_object* v_snd_1451_; lean_object* v___x_1452_; size_t v___x_1453_; size_t v___x_1454_; 
v_a_1449_ = lean_array_uget_borrowed(v_as_1442_, v_i_1444_);
lean_inc(v_a_1449_);
lean_inc_ref(v_getTokens_1441_);
v___x_1450_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDesc(v_getTokens_1441_, v_a_1449_, v___y_1446_);
v_snd_1451_ = lean_ctor_get(v___x_1450_, 1);
lean_inc(v_snd_1451_);
lean_dec_ref(v___x_1450_);
v___x_1452_ = lean_box(0);
v___x_1453_ = ((size_t)1ULL);
v___x_1454_ = lean_usize_add(v_i_1444_, v___x_1453_);
v_i_1444_ = v___x_1454_;
v_b_1445_ = v___x_1452_;
v___y_1446_ = v_snd_1451_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__6(lean_object* v_getTokens_1456_, lean_object* v_as_1457_, size_t v_i_1458_, size_t v_stop_1459_, lean_object* v_b_1460_, lean_object* v___y_1461_){
_start:
{
uint8_t v___x_1462_; 
v___x_1462_ = lean_usize_dec_eq(v_i_1458_, v_stop_1459_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v_fst_1465_; lean_object* v_snd_1466_; size_t v___x_1467_; size_t v___x_1468_; 
v___x_1463_ = lean_array_uget_borrowed(v_as_1457_, v_i_1458_);
lean_inc(v___x_1463_);
lean_inc_ref(v_getTokens_1456_);
v___x_1464_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go(v_getTokens_1456_, v___x_1463_, v___y_1461_);
v_fst_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_fst_1465_);
v_snd_1466_ = lean_ctor_get(v___x_1464_, 1);
lean_inc(v_snd_1466_);
lean_dec_ref(v___x_1464_);
v___x_1467_ = ((size_t)1ULL);
v___x_1468_ = lean_usize_add(v_i_1458_, v___x_1467_);
v_i_1458_ = v___x_1468_;
v_b_1460_ = v_fst_1465_;
v___y_1461_ = v_snd_1466_;
goto _start;
}
else
{
lean_object* v___x_1470_; 
lean_dec_ref(v_getTokens_1456_);
v___x_1470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1470_, 0, v_b_1460_);
lean_ctor_set(v___x_1470_, 1, v___y_1461_);
return v___x_1470_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go(lean_object* v_getTokens_1471_, lean_object* v_stx_1472_, lean_object* v_a_1473_){
_start:
{
lean_object* v___x_1474_; 
lean_inc(v_stx_1472_);
v___x_1474_ = l_Lean_Doc_InlineView_of(v_stx_1472_);
if (lean_obj_tag(v___x_1474_) == 1)
{
lean_object* v_val_1475_; 
lean_dec(v_stx_1472_);
v_val_1475_ = lean_ctor_get(v___x_1474_, 0);
lean_inc(v_val_1475_);
lean_dec_ref_known(v___x_1474_, 1);
switch(lean_obj_tag(v_val_1475_))
{
case 1:
{
lean_object* v_view_1476_; lean_object* v_opener_1477_; lean_object* v_content_1478_; lean_object* v_closer_1479_; lean_object* v___x_1480_; 
v_view_1476_ = lean_ctor_get(v_val_1475_, 0);
lean_inc_ref(v_view_1476_);
lean_dec_ref_known(v_val_1475_, 1);
v_opener_1477_ = lean_ctor_get(v_view_1476_, 1);
lean_inc(v_opener_1477_);
v_content_1478_ = lean_ctor_get(v_view_1476_, 2);
lean_inc_ref(v_content_1478_);
v_closer_1479_ = lean_ctor_get(v_view_1476_, 3);
lean_inc(v_closer_1479_);
lean_dec_ref(v_view_1476_);
v___x_1480_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDelimited(v_getTokens_1471_, v_opener_1477_, v_closer_1479_, v_content_1478_, v_a_1473_);
lean_dec_ref(v_content_1478_);
return v___x_1480_;
}
case 2:
{
lean_object* v_view_1481_; lean_object* v_opener_1482_; lean_object* v_content_1483_; lean_object* v_closer_1484_; lean_object* v___x_1485_; 
v_view_1481_ = lean_ctor_get(v_val_1475_, 0);
lean_inc_ref(v_view_1481_);
lean_dec_ref_known(v_val_1475_, 1);
v_opener_1482_ = lean_ctor_get(v_view_1481_, 1);
lean_inc(v_opener_1482_);
v_content_1483_ = lean_ctor_get(v_view_1481_, 2);
lean_inc_ref(v_content_1483_);
v_closer_1484_ = lean_ctor_get(v_view_1481_, 3);
lean_inc(v_closer_1484_);
lean_dec_ref(v_view_1481_);
v___x_1485_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDelimited(v_getTokens_1471_, v_opener_1482_, v_closer_1484_, v_content_1483_, v_a_1473_);
lean_dec_ref(v_content_1483_);
return v___x_1485_;
}
case 3:
{
lean_object* v_view_1486_; lean_object* v___x_1487_; 
lean_dec_ref(v_getTokens_1471_);
v_view_1486_ = lean_ctor_get(v_val_1475_, 0);
lean_inc_ref(v_view_1486_);
lean_dec_ref_known(v_val_1475_, 1);
v___x_1487_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode(v_view_1486_, v_a_1473_);
return v___x_1487_;
}
case 4:
{
lean_object* v_view_1488_; lean_object* v_marker_1489_; lean_object* v_code_1490_; uint8_t v___x_1491_; lean_object* v___x_1492_; lean_object* v_snd_1493_; lean_object* v___x_1494_; 
lean_dec_ref(v_getTokens_1471_);
v_view_1488_ = lean_ctor_get(v_val_1475_, 0);
lean_inc_ref(v_view_1488_);
lean_dec_ref_known(v_val_1475_, 1);
v_marker_1489_ = lean_ctor_get(v_view_1488_, 1);
lean_inc(v_marker_1489_);
v_code_1490_ = lean_ctor_get(v_view_1488_, 2);
lean_inc_ref(v_code_1490_);
lean_dec_ref(v_view_1488_);
v___x_1491_ = 0;
v___x_1492_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_marker_1489_, v___x_1491_, v_a_1473_);
v_snd_1493_ = lean_ctor_get(v___x_1492_, 1);
lean_inc(v_snd_1493_);
lean_dec_ref(v___x_1492_);
v___x_1494_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode(v_code_1490_, v_snd_1493_);
return v___x_1494_;
}
case 5:
{
lean_object* v_view_1495_; lean_object* v_opener_1496_; lean_object* v_content_1497_; lean_object* v_closer_1498_; lean_object* v_target_1499_; lean_object* v___x_1500_; lean_object* v_snd_1501_; lean_object* v___x_1502_; 
v_view_1495_ = lean_ctor_get(v_val_1475_, 0);
lean_inc_ref(v_view_1495_);
lean_dec_ref_known(v_val_1475_, 1);
v_opener_1496_ = lean_ctor_get(v_view_1495_, 1);
lean_inc(v_opener_1496_);
v_content_1497_ = lean_ctor_get(v_view_1495_, 2);
lean_inc_ref(v_content_1497_);
v_closer_1498_ = lean_ctor_get(v_view_1495_, 3);
lean_inc(v_closer_1498_);
v_target_1499_ = lean_ctor_get(v_view_1495_, 4);
lean_inc_ref(v_target_1499_);
lean_dec_ref(v_view_1495_);
v___x_1500_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDelimited(v_getTokens_1471_, v_opener_1496_, v_closer_1498_, v_content_1497_, v_a_1473_);
lean_dec_ref(v_content_1497_);
v_snd_1501_ = lean_ctor_get(v___x_1500_, 1);
lean_inc(v_snd_1501_);
lean_dec_ref(v___x_1500_);
v___x_1502_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goTarget(v_target_1499_, v_snd_1501_);
return v___x_1502_;
}
case 6:
{
lean_object* v_view_1503_; lean_object* v_opener_1504_; lean_object* v_alt_1505_; lean_object* v_closer_1506_; lean_object* v_target_1507_; uint8_t v___x_1508_; lean_object* v___x_1509_; lean_object* v_snd_1510_; uint8_t v___x_1511_; lean_object* v___x_1512_; lean_object* v_snd_1513_; lean_object* v___x_1514_; lean_object* v_snd_1515_; lean_object* v___x_1516_; 
lean_dec_ref(v_getTokens_1471_);
v_view_1503_ = lean_ctor_get(v_val_1475_, 0);
lean_inc_ref(v_view_1503_);
lean_dec_ref_known(v_val_1475_, 1);
v_opener_1504_ = lean_ctor_get(v_view_1503_, 1);
lean_inc(v_opener_1504_);
v_alt_1505_ = lean_ctor_get(v_view_1503_, 2);
lean_inc(v_alt_1505_);
v_closer_1506_ = lean_ctor_get(v_view_1503_, 3);
lean_inc(v_closer_1506_);
v_target_1507_ = lean_ctor_get(v_view_1503_, 4);
lean_inc_ref(v_target_1507_);
lean_dec_ref(v_view_1503_);
v___x_1508_ = 0;
v___x_1509_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_opener_1504_, v___x_1508_, v_a_1473_);
v_snd_1510_ = lean_ctor_get(v___x_1509_, 1);
lean_inc(v_snd_1510_);
lean_dec_ref(v___x_1509_);
v___x_1511_ = 18;
v___x_1512_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_alt_1505_, v___x_1511_, v_snd_1510_);
v_snd_1513_ = lean_ctor_get(v___x_1512_, 1);
lean_inc(v_snd_1513_);
lean_dec_ref(v___x_1512_);
v___x_1514_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closer_1506_, v___x_1508_, v_snd_1513_);
v_snd_1515_ = lean_ctor_get(v___x_1514_, 1);
lean_inc(v_snd_1515_);
lean_dec_ref(v___x_1514_);
v___x_1516_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goTarget(v_target_1507_, v_snd_1515_);
return v___x_1516_;
}
case 7:
{
lean_object* v_view_1517_; lean_object* v_opener_1518_; lean_object* v_name_1519_; lean_object* v_closer_1520_; uint8_t v___x_1521_; lean_object* v___x_1522_; lean_object* v_snd_1523_; uint8_t v___x_1524_; lean_object* v___x_1525_; lean_object* v_snd_1526_; lean_object* v___x_1527_; 
lean_dec_ref(v_getTokens_1471_);
v_view_1517_ = lean_ctor_get(v_val_1475_, 0);
lean_inc_ref(v_view_1517_);
lean_dec_ref_known(v_val_1475_, 1);
v_opener_1518_ = lean_ctor_get(v_view_1517_, 1);
lean_inc(v_opener_1518_);
v_name_1519_ = lean_ctor_get(v_view_1517_, 2);
lean_inc(v_name_1519_);
v_closer_1520_ = lean_ctor_get(v_view_1517_, 3);
lean_inc(v_closer_1520_);
lean_dec_ref(v_view_1517_);
v___x_1521_ = 0;
v___x_1522_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_opener_1518_, v___x_1521_, v_a_1473_);
v_snd_1523_ = lean_ctor_get(v___x_1522_, 1);
lean_inc(v_snd_1523_);
lean_dec_ref(v___x_1522_);
v___x_1524_ = 2;
v___x_1525_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_name_1519_, v___x_1524_, v_snd_1523_);
v_snd_1526_ = lean_ctor_get(v___x_1525_, 1);
lean_inc(v_snd_1526_);
lean_dec_ref(v___x_1525_);
v___x_1527_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closer_1520_, v___x_1521_, v_snd_1526_);
return v___x_1527_;
}
case 9:
{
lean_object* v_view_1528_; lean_object* v_braceOpen_1529_; lean_object* v_name_1530_; lean_object* v_args_1531_; lean_object* v_braceClose_1532_; lean_object* v_brackets_1533_; lean_object* v_content_1534_; uint8_t v___x_1535_; lean_object* v___x_1536_; lean_object* v_snd_1537_; uint8_t v___x_1538_; lean_object* v___x_1539_; lean_object* v_snd_1540_; lean_object* v___x_1541_; lean_object* v___y_1543_; size_t v_sz_1560_; size_t v___x_1561_; lean_object* v___x_1562_; lean_object* v_snd_1563_; lean_object* v___x_1564_; 
v_view_1528_ = lean_ctor_get(v_val_1475_, 0);
lean_inc_ref(v_view_1528_);
lean_dec_ref_known(v_val_1475_, 1);
v_braceOpen_1529_ = lean_ctor_get(v_view_1528_, 1);
lean_inc(v_braceOpen_1529_);
v_name_1530_ = lean_ctor_get(v_view_1528_, 2);
lean_inc(v_name_1530_);
v_args_1531_ = lean_ctor_get(v_view_1528_, 3);
lean_inc_ref(v_args_1531_);
v_braceClose_1532_ = lean_ctor_get(v_view_1528_, 4);
lean_inc(v_braceClose_1532_);
v_brackets_1533_ = lean_ctor_get(v_view_1528_, 5);
lean_inc(v_brackets_1533_);
v_content_1534_ = lean_ctor_get(v_view_1528_, 6);
lean_inc_ref(v_content_1534_);
lean_dec_ref(v_view_1528_);
v___x_1535_ = 0;
v___x_1536_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_braceOpen_1529_, v___x_1535_, v_a_1473_);
v_snd_1537_ = lean_ctor_get(v___x_1536_, 1);
lean_inc(v_snd_1537_);
lean_dec_ref(v___x_1536_);
v___x_1538_ = 3;
v___x_1539_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_name_1530_, v___x_1538_, v_snd_1537_);
v_snd_1540_ = lean_ctor_get(v___x_1539_, 1);
lean_inc(v_snd_1540_);
lean_dec_ref(v___x_1539_);
v___x_1541_ = lean_box(0);
v_sz_1560_ = lean_array_size(v_args_1531_);
v___x_1561_ = ((size_t)0ULL);
v___x_1562_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__2(v_args_1531_, v_sz_1560_, v___x_1561_, v___x_1541_, v_snd_1540_);
lean_dec_ref(v_args_1531_);
v_snd_1563_ = lean_ctor_get(v___x_1562_, 1);
lean_inc(v_snd_1563_);
lean_dec_ref(v___x_1562_);
v___x_1564_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_braceClose_1532_, v___x_1535_, v_snd_1563_);
if (lean_obj_tag(v_brackets_1533_) == 1)
{
lean_object* v_val_1565_; lean_object* v_snd_1566_; lean_object* v_fst_1567_; lean_object* v___x_1568_; lean_object* v_snd_1569_; 
v_val_1565_ = lean_ctor_get(v_brackets_1533_, 0);
v_snd_1566_ = lean_ctor_get(v___x_1564_, 1);
lean_inc(v_snd_1566_);
lean_dec_ref(v___x_1564_);
v_fst_1567_ = lean_ctor_get(v_val_1565_, 0);
lean_inc(v_fst_1567_);
v___x_1568_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_fst_1567_, v___x_1535_, v_snd_1566_);
v_snd_1569_ = lean_ctor_get(v___x_1568_, 1);
lean_inc(v_snd_1569_);
lean_dec_ref(v___x_1568_);
v___y_1543_ = v_snd_1569_;
goto v___jp_1542_;
}
else
{
lean_object* v_snd_1570_; 
v_snd_1570_ = lean_ctor_get(v___x_1564_, 1);
lean_inc(v_snd_1570_);
lean_dec_ref(v___x_1564_);
v___y_1543_ = v_snd_1570_;
goto v___jp_1542_;
}
v___jp_1542_:
{
size_t v_sz_1544_; size_t v___x_1545_; lean_object* v___x_1546_; 
v_sz_1544_ = lean_array_size(v_content_1534_);
v___x_1545_ = ((size_t)0ULL);
v___x_1546_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1471_, v_content_1534_, v_sz_1544_, v___x_1545_, v___x_1541_, v___y_1543_);
lean_dec_ref(v_content_1534_);
if (lean_obj_tag(v_brackets_1533_) == 1)
{
lean_object* v_val_1547_; lean_object* v_snd_1548_; lean_object* v_snd_1549_; lean_object* v___x_1550_; 
v_val_1547_ = lean_ctor_get(v_brackets_1533_, 0);
lean_inc(v_val_1547_);
lean_dec_ref_known(v_brackets_1533_, 1);
v_snd_1548_ = lean_ctor_get(v___x_1546_, 1);
lean_inc(v_snd_1548_);
lean_dec_ref(v___x_1546_);
v_snd_1549_ = lean_ctor_get(v_val_1547_, 1);
lean_inc(v_snd_1549_);
lean_dec(v_val_1547_);
v___x_1550_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_snd_1549_, v___x_1535_, v_snd_1548_);
return v___x_1550_;
}
else
{
lean_object* v_snd_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1558_; 
lean_dec(v_brackets_1533_);
v_snd_1551_ = lean_ctor_get(v___x_1546_, 1);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1558_ == 0)
{
lean_object* v_unused_1559_; 
v_unused_1559_ = lean_ctor_get(v___x_1546_, 0);
lean_dec(v_unused_1559_);
v___x_1553_ = v___x_1546_;
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_snd_1551_);
lean_dec(v___x_1546_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1558_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1556_; 
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 0, v___x_1541_);
v___x_1556_ = v___x_1553_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1541_);
lean_ctor_set(v_reuseFailAlloc_1557_, 1, v_snd_1551_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
}
}
default: 
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
lean_dec(v_val_1475_);
lean_dec_ref(v_getTokens_1471_);
v___x_1571_ = lean_box(0);
v___x_1572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1571_);
lean_ctor_set(v___x_1572_, 1, v_a_1473_);
return v___x_1572_;
}
}
}
else
{
lean_object* v___x_1573_; 
lean_dec(v___x_1474_);
lean_inc(v_stx_1472_);
v___x_1573_ = l_Lean_Doc_BlockView_of(v_stx_1472_);
if (lean_obj_tag(v___x_1573_) == 1)
{
lean_object* v_val_1574_; 
lean_dec(v_stx_1472_);
v_val_1574_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_val_1574_);
lean_dec_ref_known(v___x_1573_, 1);
switch(lean_obj_tag(v_val_1574_))
{
case 0:
{
lean_object* v_view_1575_; lean_object* v_content_1576_; lean_object* v___x_1577_; size_t v_sz_1578_; size_t v___x_1579_; lean_object* v___x_1580_; lean_object* v_snd_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
v_view_1575_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1575_);
lean_dec_ref_known(v_val_1574_, 1);
v_content_1576_ = lean_ctor_get(v_view_1575_, 1);
lean_inc_ref(v_content_1576_);
lean_dec_ref(v_view_1575_);
v___x_1577_ = lean_box(0);
v_sz_1578_ = lean_array_size(v_content_1576_);
v___x_1579_ = ((size_t)0ULL);
v___x_1580_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1471_, v_content_1576_, v_sz_1578_, v___x_1579_, v___x_1577_, v_a_1473_);
lean_dec_ref(v_content_1576_);
v_snd_1581_ = lean_ctor_get(v___x_1580_, 1);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1588_ == 0)
{
lean_object* v_unused_1589_; 
v_unused_1589_ = lean_ctor_get(v___x_1580_, 0);
lean_dec(v_unused_1589_);
v___x_1583_ = v___x_1580_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_snd_1581_);
lean_dec(v___x_1580_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v___x_1577_);
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1577_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v_snd_1581_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
case 1:
{
lean_object* v_view_1590_; lean_object* v_items_1591_; lean_object* v___x_1592_; size_t v_sz_1593_; size_t v___x_1594_; lean_object* v___x_1595_; lean_object* v_snd_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1603_; 
v_view_1590_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1590_);
lean_dec_ref_known(v_val_1574_, 1);
v_items_1591_ = lean_ctor_get(v_view_1590_, 1);
lean_inc_ref(v_items_1591_);
lean_dec_ref(v_view_1590_);
v___x_1592_ = lean_box(0);
v_sz_1593_ = lean_array_size(v_items_1591_);
v___x_1594_ = ((size_t)0ULL);
v___x_1595_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__3(v_getTokens_1471_, v_items_1591_, v_sz_1593_, v___x_1594_, v___x_1592_, v_a_1473_);
lean_dec_ref(v_items_1591_);
v_snd_1596_ = lean_ctor_get(v___x_1595_, 1);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1595_);
if (v_isSharedCheck_1603_ == 0)
{
lean_object* v_unused_1604_; 
v_unused_1604_ = lean_ctor_get(v___x_1595_, 0);
lean_dec(v_unused_1604_);
v___x_1598_ = v___x_1595_;
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_snd_1596_);
lean_dec(v___x_1595_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1601_; 
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 0, v___x_1592_);
v___x_1601_ = v___x_1598_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1592_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v_snd_1596_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
case 2:
{
lean_object* v_view_1605_; lean_object* v_items_1606_; lean_object* v___x_1607_; size_t v_sz_1608_; size_t v___x_1609_; lean_object* v___x_1610_; lean_object* v_snd_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1618_; 
v_view_1605_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1605_);
lean_dec_ref_known(v_val_1574_, 1);
v_items_1606_ = lean_ctor_get(v_view_1605_, 2);
lean_inc_ref(v_items_1606_);
lean_dec_ref(v_view_1605_);
v___x_1607_ = lean_box(0);
v_sz_1608_ = lean_array_size(v_items_1606_);
v___x_1609_ = ((size_t)0ULL);
v___x_1610_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__4(v_getTokens_1471_, v_items_1606_, v_sz_1608_, v___x_1609_, v___x_1607_, v_a_1473_);
lean_dec_ref(v_items_1606_);
v_snd_1611_ = lean_ctor_get(v___x_1610_, 1);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1610_);
if (v_isSharedCheck_1618_ == 0)
{
lean_object* v_unused_1619_; 
v_unused_1619_ = lean_ctor_get(v___x_1610_, 0);
lean_dec(v_unused_1619_);
v___x_1613_ = v___x_1610_;
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_snd_1611_);
lean_dec(v___x_1610_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1618_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v___x_1616_; 
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 0, v___x_1607_);
v___x_1616_ = v___x_1613_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1607_);
lean_ctor_set(v_reuseFailAlloc_1617_, 1, v_snd_1611_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
case 3:
{
lean_object* v_view_1620_; lean_object* v_items_1621_; lean_object* v___x_1622_; size_t v_sz_1623_; size_t v___x_1624_; lean_object* v___x_1625_; lean_object* v_snd_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
v_view_1620_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1620_);
lean_dec_ref_known(v_val_1574_, 1);
v_items_1621_ = lean_ctor_get(v_view_1620_, 1);
lean_inc_ref(v_items_1621_);
lean_dec_ref(v_view_1620_);
v___x_1622_ = lean_box(0);
v_sz_1623_ = lean_array_size(v_items_1621_);
v___x_1624_ = ((size_t)0ULL);
v___x_1625_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__5(v_getTokens_1471_, v_items_1621_, v_sz_1623_, v___x_1624_, v___x_1622_, v_a_1473_);
lean_dec_ref(v_items_1621_);
v_snd_1626_ = lean_ctor_get(v___x_1625_, 1);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1633_ == 0)
{
lean_object* v_unused_1634_; 
v_unused_1634_ = lean_ctor_get(v___x_1625_, 0);
lean_dec(v_unused_1634_);
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_snd_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v___x_1622_);
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v___x_1622_);
lean_ctor_set(v_reuseFailAlloc_1632_, 1, v_snd_1626_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
case 4:
{
lean_object* v_view_1635_; lean_object* v_marker_1636_; lean_object* v_content_1637_; uint8_t v___x_1638_; lean_object* v___x_1639_; lean_object* v_snd_1640_; lean_object* v___x_1641_; size_t v_sz_1642_; size_t v___x_1643_; lean_object* v___x_1644_; lean_object* v_snd_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
v_view_1635_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1635_);
lean_dec_ref_known(v_val_1574_, 1);
v_marker_1636_ = lean_ctor_get(v_view_1635_, 1);
lean_inc(v_marker_1636_);
v_content_1637_ = lean_ctor_get(v_view_1635_, 2);
lean_inc_ref(v_content_1637_);
lean_dec_ref(v_view_1635_);
v___x_1638_ = 0;
v___x_1639_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_marker_1636_, v___x_1638_, v_a_1473_);
v_snd_1640_ = lean_ctor_get(v___x_1639_, 1);
lean_inc(v_snd_1640_);
lean_dec_ref(v___x_1639_);
v___x_1641_ = lean_box(0);
v_sz_1642_ = lean_array_size(v_content_1637_);
v___x_1643_ = ((size_t)0ULL);
v___x_1644_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1471_, v_content_1637_, v_sz_1642_, v___x_1643_, v___x_1641_, v_snd_1640_);
lean_dec_ref(v_content_1637_);
v_snd_1645_ = lean_ctor_get(v___x_1644_, 1);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1652_ == 0)
{
lean_object* v_unused_1653_; 
v_unused_1653_ = lean_ctor_get(v___x_1644_, 0);
lean_dec(v_unused_1653_);
v___x_1647_ = v___x_1644_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_snd_1645_);
lean_dec(v___x_1644_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
lean_ctor_set(v___x_1647_, 0, v___x_1641_);
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1641_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v_snd_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
case 5:
{
lean_object* v_view_1654_; lean_object* v_openFence_1655_; lean_object* v_name_x3f_1656_; lean_object* v_args_1657_; lean_object* v_content_1658_; lean_object* v_closeFence_1659_; uint8_t v___x_1660_; lean_object* v___y_1662_; lean_object* v___x_1670_; 
lean_dec_ref(v_getTokens_1471_);
v_view_1654_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1654_);
lean_dec_ref_known(v_val_1574_, 1);
v_openFence_1655_ = lean_ctor_get(v_view_1654_, 1);
lean_inc(v_openFence_1655_);
v_name_x3f_1656_ = lean_ctor_get(v_view_1654_, 2);
lean_inc(v_name_x3f_1656_);
v_args_1657_ = lean_ctor_get(v_view_1654_, 3);
lean_inc_ref(v_args_1657_);
v_content_1658_ = lean_ctor_get(v_view_1654_, 4);
lean_inc(v_content_1658_);
v_closeFence_1659_ = lean_ctor_get(v_view_1654_, 5);
lean_inc(v_closeFence_1659_);
lean_dec_ref(v_view_1654_);
v___x_1660_ = 0;
v___x_1670_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_openFence_1655_, v___x_1660_, v_a_1473_);
if (lean_obj_tag(v_name_x3f_1656_) == 1)
{
lean_object* v_snd_1671_; lean_object* v_val_1672_; uint8_t v___x_1673_; lean_object* v___x_1674_; lean_object* v_snd_1675_; lean_object* v___x_1676_; size_t v_sz_1677_; size_t v___x_1678_; lean_object* v___x_1679_; lean_object* v_snd_1680_; 
v_snd_1671_ = lean_ctor_get(v___x_1670_, 1);
lean_inc(v_snd_1671_);
lean_dec_ref(v___x_1670_);
v_val_1672_ = lean_ctor_get(v_name_x3f_1656_, 0);
lean_inc(v_val_1672_);
lean_dec_ref_known(v_name_x3f_1656_, 1);
v___x_1673_ = 3;
v___x_1674_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_val_1672_, v___x_1673_, v_snd_1671_);
v_snd_1675_ = lean_ctor_get(v___x_1674_, 1);
lean_inc(v_snd_1675_);
lean_dec_ref(v___x_1674_);
v___x_1676_ = lean_box(0);
v_sz_1677_ = lean_array_size(v_args_1657_);
v___x_1678_ = ((size_t)0ULL);
v___x_1679_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__2(v_args_1657_, v_sz_1677_, v___x_1678_, v___x_1676_, v_snd_1675_);
lean_dec_ref(v_args_1657_);
v_snd_1680_ = lean_ctor_get(v___x_1679_, 1);
lean_inc(v_snd_1680_);
lean_dec_ref(v___x_1679_);
v___y_1662_ = v_snd_1680_;
goto v___jp_1661_;
}
else
{
lean_object* v_snd_1681_; 
lean_dec_ref(v_args_1657_);
lean_dec(v_name_x3f_1656_);
v_snd_1681_ = lean_ctor_get(v___x_1670_, 1);
lean_inc(v_snd_1681_);
lean_dec_ref(v___x_1670_);
v___y_1662_ = v_snd_1681_;
goto v___jp_1661_;
}
v___jp_1661_:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; size_t v_sz_1665_; size_t v___x_1666_; lean_object* v___x_1667_; lean_object* v_snd_1668_; lean_object* v___x_1669_; 
v___x_1663_ = l_Lean_TSyntax_getVersoCodeBlockLines(v_content_1658_);
lean_dec(v_content_1658_);
v___x_1664_ = lean_box(0);
v_sz_1665_ = lean_array_size(v___x_1663_);
v___x_1666_ = ((size_t)0ULL);
v___x_1667_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goCode_spec__0(v___x_1663_, v_sz_1665_, v___x_1666_, v___x_1664_, v___y_1662_);
lean_dec_ref(v___x_1663_);
v_snd_1668_ = lean_ctor_get(v___x_1667_, 1);
lean_inc(v_snd_1668_);
lean_dec_ref(v___x_1667_);
v___x_1669_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closeFence_1659_, v___x_1660_, v_snd_1668_);
return v___x_1669_;
}
}
case 6:
{
lean_object* v_view_1682_; lean_object* v_opener_1683_; lean_object* v_name_1684_; lean_object* v_args_1685_; lean_object* v_content_1686_; lean_object* v_closer_1687_; uint8_t v___x_1688_; lean_object* v___x_1689_; lean_object* v_snd_1690_; uint8_t v___x_1691_; lean_object* v___x_1692_; lean_object* v_snd_1693_; lean_object* v___x_1694_; size_t v_sz_1695_; size_t v___x_1696_; lean_object* v___x_1697_; lean_object* v_snd_1698_; size_t v_sz_1699_; lean_object* v___x_1700_; lean_object* v_snd_1701_; lean_object* v___x_1702_; 
v_view_1682_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1682_);
lean_dec_ref_known(v_val_1574_, 1);
v_opener_1683_ = lean_ctor_get(v_view_1682_, 1);
lean_inc(v_opener_1683_);
v_name_1684_ = lean_ctor_get(v_view_1682_, 2);
lean_inc(v_name_1684_);
v_args_1685_ = lean_ctor_get(v_view_1682_, 3);
lean_inc_ref(v_args_1685_);
v_content_1686_ = lean_ctor_get(v_view_1682_, 4);
lean_inc_ref(v_content_1686_);
v_closer_1687_ = lean_ctor_get(v_view_1682_, 5);
lean_inc(v_closer_1687_);
lean_dec_ref(v_view_1682_);
v___x_1688_ = 0;
v___x_1689_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_opener_1683_, v___x_1688_, v_a_1473_);
v_snd_1690_ = lean_ctor_get(v___x_1689_, 1);
lean_inc(v_snd_1690_);
lean_dec_ref(v___x_1689_);
v___x_1691_ = 3;
v___x_1692_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_name_1684_, v___x_1691_, v_snd_1690_);
v_snd_1693_ = lean_ctor_get(v___x_1692_, 1);
lean_inc(v_snd_1693_);
lean_dec_ref(v___x_1692_);
v___x_1694_ = lean_box(0);
v_sz_1695_ = lean_array_size(v_args_1685_);
v___x_1696_ = ((size_t)0ULL);
v___x_1697_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__2(v_args_1685_, v_sz_1695_, v___x_1696_, v___x_1694_, v_snd_1693_);
lean_dec_ref(v_args_1685_);
v_snd_1698_ = lean_ctor_get(v___x_1697_, 1);
lean_inc(v_snd_1698_);
lean_dec_ref(v___x_1697_);
v_sz_1699_ = lean_array_size(v_content_1686_);
v___x_1700_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1471_, v_content_1686_, v_sz_1699_, v___x_1696_, v___x_1694_, v_snd_1698_);
lean_dec_ref(v_content_1686_);
v_snd_1701_ = lean_ctor_get(v___x_1700_, 1);
lean_inc(v_snd_1701_);
lean_dec_ref(v___x_1700_);
v___x_1702_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closer_1687_, v___x_1688_, v_snd_1701_);
return v___x_1702_;
}
case 7:
{
lean_object* v_view_1703_; lean_object* v_braceOpen_1704_; lean_object* v_name_1705_; lean_object* v_args_1706_; lean_object* v_braceClose_1707_; uint8_t v___x_1708_; lean_object* v___x_1709_; lean_object* v_snd_1710_; uint8_t v___x_1711_; lean_object* v___x_1712_; lean_object* v_snd_1713_; lean_object* v___x_1714_; size_t v_sz_1715_; size_t v___x_1716_; lean_object* v___x_1717_; lean_object* v_snd_1718_; lean_object* v___x_1719_; 
lean_dec_ref(v_getTokens_1471_);
v_view_1703_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1703_);
lean_dec_ref_known(v_val_1574_, 1);
v_braceOpen_1704_ = lean_ctor_get(v_view_1703_, 1);
lean_inc(v_braceOpen_1704_);
v_name_1705_ = lean_ctor_get(v_view_1703_, 2);
lean_inc(v_name_1705_);
v_args_1706_ = lean_ctor_get(v_view_1703_, 3);
lean_inc_ref(v_args_1706_);
v_braceClose_1707_ = lean_ctor_get(v_view_1703_, 4);
lean_inc(v_braceClose_1707_);
lean_dec_ref(v_view_1703_);
v___x_1708_ = 0;
v___x_1709_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_braceOpen_1704_, v___x_1708_, v_a_1473_);
v_snd_1710_ = lean_ctor_get(v___x_1709_, 1);
lean_inc(v_snd_1710_);
lean_dec_ref(v___x_1709_);
v___x_1711_ = 3;
v___x_1712_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_name_1705_, v___x_1711_, v_snd_1710_);
v_snd_1713_ = lean_ctor_get(v___x_1712_, 1);
lean_inc(v_snd_1713_);
lean_dec_ref(v___x_1712_);
v___x_1714_ = lean_box(0);
v_sz_1715_ = lean_array_size(v_args_1706_);
v___x_1716_ = ((size_t)0ULL);
v___x_1717_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__2(v_args_1706_, v_sz_1715_, v___x_1716_, v___x_1714_, v_snd_1713_);
lean_dec_ref(v_args_1706_);
v_snd_1718_ = lean_ctor_get(v___x_1717_, 1);
lean_inc(v_snd_1718_);
lean_dec_ref(v___x_1717_);
v___x_1719_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_braceClose_1707_, v___x_1708_, v_snd_1718_);
return v___x_1719_;
}
case 8:
{
lean_object* v_view_1720_; lean_object* v_marker_1721_; lean_object* v_content_1722_; uint8_t v___x_1723_; lean_object* v___x_1724_; lean_object* v_snd_1725_; lean_object* v___x_1726_; size_t v_sz_1727_; size_t v___x_1728_; lean_object* v___x_1729_; lean_object* v_snd_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1737_; 
v_view_1720_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1720_);
lean_dec_ref_known(v_val_1574_, 1);
v_marker_1721_ = lean_ctor_get(v_view_1720_, 1);
lean_inc(v_marker_1721_);
v_content_1722_ = lean_ctor_get(v_view_1720_, 3);
lean_inc_ref(v_content_1722_);
lean_dec_ref(v_view_1720_);
v___x_1723_ = 0;
v___x_1724_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_marker_1721_, v___x_1723_, v_a_1473_);
v_snd_1725_ = lean_ctor_get(v___x_1724_, 1);
lean_inc(v_snd_1725_);
lean_dec_ref(v___x_1724_);
v___x_1726_ = lean_box(0);
v_sz_1727_ = lean_array_size(v_content_1722_);
v___x_1728_ = ((size_t)0ULL);
v___x_1729_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1471_, v_content_1722_, v_sz_1727_, v___x_1728_, v___x_1726_, v_snd_1725_);
lean_dec_ref(v_content_1722_);
v_snd_1730_ = lean_ctor_get(v___x_1729_, 1);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1737_ == 0)
{
lean_object* v_unused_1738_; 
v_unused_1738_ = lean_ctor_get(v___x_1729_, 0);
lean_dec(v_unused_1738_);
v___x_1732_ = v___x_1729_;
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_snd_1730_);
lean_dec(v___x_1729_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 0, v___x_1726_);
v___x_1735_ = v___x_1732_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1726_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_snd_1730_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
case 9:
{
lean_object* v_view_1739_; lean_object* v_opener_1740_; lean_object* v_name_1741_; lean_object* v_closer_1742_; lean_object* v_url_1743_; uint8_t v___x_1744_; lean_object* v___x_1745_; lean_object* v_snd_1746_; uint8_t v___x_1747_; lean_object* v___x_1748_; lean_object* v_snd_1749_; lean_object* v___x_1750_; lean_object* v_snd_1751_; uint8_t v___x_1752_; lean_object* v___x_1753_; 
lean_dec_ref(v_getTokens_1471_);
v_view_1739_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1739_);
lean_dec_ref_known(v_val_1574_, 1);
v_opener_1740_ = lean_ctor_get(v_view_1739_, 1);
lean_inc(v_opener_1740_);
v_name_1741_ = lean_ctor_get(v_view_1739_, 2);
lean_inc(v_name_1741_);
v_closer_1742_ = lean_ctor_get(v_view_1739_, 3);
lean_inc(v_closer_1742_);
v_url_1743_ = lean_ctor_get(v_view_1739_, 4);
lean_inc(v_url_1743_);
lean_dec_ref(v_view_1739_);
v___x_1744_ = 0;
v___x_1745_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_opener_1740_, v___x_1744_, v_a_1473_);
v_snd_1746_ = lean_ctor_get(v___x_1745_, 1);
lean_inc(v_snd_1746_);
lean_dec_ref(v___x_1745_);
v___x_1747_ = 2;
v___x_1748_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_name_1741_, v___x_1747_, v_snd_1746_);
v_snd_1749_ = lean_ctor_get(v___x_1748_, 1);
lean_inc(v_snd_1749_);
lean_dec_ref(v___x_1748_);
v___x_1750_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closer_1742_, v___x_1744_, v_snd_1749_);
v_snd_1751_ = lean_ctor_get(v___x_1750_, 1);
lean_inc(v_snd_1751_);
lean_dec_ref(v___x_1750_);
v___x_1752_ = 18;
v___x_1753_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_url_1743_, v___x_1752_, v_snd_1751_);
return v___x_1753_;
}
case 10:
{
lean_object* v_view_1754_; lean_object* v_opener_1755_; lean_object* v_name_1756_; lean_object* v_closer_1757_; lean_object* v_content_1758_; uint8_t v___x_1759_; lean_object* v___x_1760_; lean_object* v_snd_1761_; uint8_t v___x_1762_; lean_object* v___x_1763_; lean_object* v_snd_1764_; lean_object* v___x_1765_; lean_object* v_snd_1766_; lean_object* v___x_1767_; size_t v_sz_1768_; size_t v___x_1769_; lean_object* v___x_1770_; lean_object* v_snd_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
v_view_1754_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1754_);
lean_dec_ref_known(v_val_1574_, 1);
v_opener_1755_ = lean_ctor_get(v_view_1754_, 1);
lean_inc(v_opener_1755_);
v_name_1756_ = lean_ctor_get(v_view_1754_, 2);
lean_inc(v_name_1756_);
v_closer_1757_ = lean_ctor_get(v_view_1754_, 3);
lean_inc(v_closer_1757_);
v_content_1758_ = lean_ctor_get(v_view_1754_, 4);
lean_inc_ref(v_content_1758_);
lean_dec_ref(v_view_1754_);
v___x_1759_ = 0;
v___x_1760_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_opener_1755_, v___x_1759_, v_a_1473_);
v_snd_1761_ = lean_ctor_get(v___x_1760_, 1);
lean_inc(v_snd_1761_);
lean_dec_ref(v___x_1760_);
v___x_1762_ = 2;
v___x_1763_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_name_1756_, v___x_1762_, v_snd_1761_);
v_snd_1764_ = lean_ctor_get(v___x_1763_, 1);
lean_inc(v_snd_1764_);
lean_dec_ref(v___x_1763_);
v___x_1765_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closer_1757_, v___x_1759_, v_snd_1764_);
v_snd_1766_ = lean_ctor_get(v___x_1765_, 1);
lean_inc(v_snd_1766_);
lean_dec_ref(v___x_1765_);
v___x_1767_ = lean_box(0);
v_sz_1768_ = lean_array_size(v_content_1758_);
v___x_1769_ = ((size_t)0ULL);
v___x_1770_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1471_, v_content_1758_, v_sz_1768_, v___x_1769_, v___x_1767_, v_snd_1766_);
lean_dec_ref(v_content_1758_);
v_snd_1771_ = lean_ctor_get(v___x_1770_, 1);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1778_ == 0)
{
lean_object* v_unused_1779_; 
v_unused_1779_ = lean_ctor_get(v___x_1770_, 0);
lean_dec(v_unused_1779_);
v___x_1773_ = v___x_1770_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_snd_1771_);
lean_dec(v___x_1770_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 0, v___x_1767_);
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1767_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v_snd_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
default: 
{
lean_object* v_view_1780_; lean_object* v_opener_1781_; lean_object* v_contents_1782_; lean_object* v_closer_1783_; uint8_t v___x_1784_; lean_object* v___x_1785_; lean_object* v_snd_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v_view_1780_ = lean_ctor_get(v_val_1574_, 0);
lean_inc_ref(v_view_1780_);
lean_dec_ref_known(v_val_1574_, 1);
v_opener_1781_ = lean_ctor_get(v_view_1780_, 1);
lean_inc(v_opener_1781_);
v_contents_1782_ = lean_ctor_get(v_view_1780_, 2);
lean_inc(v_contents_1782_);
v_closer_1783_ = lean_ctor_get(v_view_1780_, 3);
lean_inc(v_closer_1783_);
lean_dec_ref(v_view_1780_);
v___x_1784_ = 0;
v___x_1785_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_opener_1781_, v___x_1784_, v_a_1473_);
v_snd_1786_ = lean_ctor_get(v___x_1785_, 1);
lean_inc(v_snd_1786_);
lean_dec_ref(v___x_1785_);
v___x_1787_ = lean_apply_1(v_getTokens_1471_, v_contents_1782_);
v___x_1788_ = l_Array_append___redArg(v_snd_1786_, v___x_1787_);
lean_dec_ref(v___x_1787_);
v___x_1789_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closer_1783_, v___x_1784_, v___x_1788_);
return v___x_1789_;
}
}
}
else
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; uint8_t v___x_1794_; 
lean_dec(v___x_1573_);
v___x_1790_ = l_Lean_Syntax_getArgs(v_stx_1472_);
lean_dec(v_stx_1472_);
v___x_1791_ = lean_unsigned_to_nat(0u);
v___x_1792_ = lean_array_get_size(v___x_1790_);
v___x_1793_ = lean_box(0);
v___x_1794_ = lean_nat_dec_lt(v___x_1791_, v___x_1792_);
if (v___x_1794_ == 0)
{
lean_object* v___x_1795_; 
lean_dec_ref(v___x_1790_);
lean_dec_ref(v_getTokens_1471_);
v___x_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1793_);
lean_ctor_set(v___x_1795_, 1, v_a_1473_);
return v___x_1795_;
}
else
{
size_t v___x_1796_; size_t v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = ((size_t)0ULL);
v___x_1797_ = lean_usize_of_nat(v___x_1792_);
v___x_1798_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__6(v_getTokens_1471_, v___x_1790_, v___x_1796_, v___x_1797_, v___x_1793_, v_a_1473_);
lean_dec_ref(v___x_1790_);
return v___x_1798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(lean_object* v_getTokens_1799_, lean_object* v_as_1800_, size_t v_sz_1801_, size_t v_i_1802_, lean_object* v_b_1803_, lean_object* v___y_1804_){
_start:
{
uint8_t v___x_1805_; 
v___x_1805_ = lean_usize_dec_lt(v_i_1802_, v_sz_1801_);
if (v___x_1805_ == 0)
{
lean_object* v___x_1806_; 
lean_dec_ref(v_getTokens_1799_);
v___x_1806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1806_, 0, v_b_1803_);
lean_ctor_set(v___x_1806_, 1, v___y_1804_);
return v___x_1806_;
}
else
{
lean_object* v_a_1807_; lean_object* v___x_1808_; lean_object* v_snd_1809_; lean_object* v___x_1810_; size_t v___x_1811_; size_t v___x_1812_; 
v_a_1807_ = lean_array_uget_borrowed(v_as_1800_, v_i_1802_);
lean_inc(v_a_1807_);
lean_inc_ref(v_getTokens_1799_);
v___x_1808_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go(v_getTokens_1799_, v_a_1807_, v___y_1804_);
v_snd_1809_ = lean_ctor_get(v___x_1808_, 1);
lean_inc(v_snd_1809_);
lean_dec_ref(v___x_1808_);
v___x_1810_ = lean_box(0);
v___x_1811_ = ((size_t)1ULL);
v___x_1812_ = lean_usize_add(v_i_1802_, v___x_1811_);
v_i_1802_ = v___x_1812_;
v_b_1803_ = v___x_1810_;
v___y_1804_ = v_snd_1809_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDelimited(lean_object* v_getTokens_1814_, lean_object* v_opener_1815_, lean_object* v_closer_1816_, lean_object* v_content_1817_, lean_object* v_a_1818_){
_start:
{
uint8_t v___x_1819_; lean_object* v___x_1820_; lean_object* v_snd_1821_; lean_object* v___x_1822_; size_t v_sz_1823_; size_t v___x_1824_; lean_object* v___x_1825_; lean_object* v_snd_1826_; lean_object* v___x_1827_; 
v___x_1819_ = 0;
v___x_1820_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_opener_1815_, v___x_1819_, v_a_1818_);
v_snd_1821_ = lean_ctor_get(v___x_1820_, 1);
lean_inc(v_snd_1821_);
lean_dec_ref(v___x_1820_);
v___x_1822_ = lean_box(0);
v_sz_1823_ = lean_array_size(v_content_1817_);
v___x_1824_ = ((size_t)0ULL);
v___x_1825_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1814_, v_content_1817_, v_sz_1823_, v___x_1824_, v___x_1822_, v_snd_1821_);
v_snd_1826_ = lean_ctor_get(v___x_1825_, 1);
lean_inc(v_snd_1826_);
lean_dec_ref(v___x_1825_);
v___x_1827_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_tok(v_closer_1816_, v___x_1819_, v_snd_1826_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDelimited___boxed(lean_object* v_getTokens_1828_, lean_object* v_opener_1829_, lean_object* v_closer_1830_, lean_object* v_content_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goDelimited(v_getTokens_1828_, v_opener_1829_, v_closer_1830_, v_content_1831_, v_a_1832_);
lean_dec_ref(v_content_1831_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem___boxed(lean_object* v_getTokens_1834_, lean_object* v_marker_1835_, lean_object* v_contents_1836_, lean_object* v_a_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem(v_getTokens_1834_, v_marker_1835_, v_contents_1836_, v_a_1837_);
lean_dec_ref(v_contents_1836_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__6___boxed(lean_object* v_getTokens_1839_, lean_object* v_as_1840_, lean_object* v_i_1841_, lean_object* v_stop_1842_, lean_object* v_b_1843_, lean_object* v___y_1844_){
_start:
{
size_t v_i_boxed_1845_; size_t v_stop_boxed_1846_; lean_object* v_res_1847_; 
v_i_boxed_1845_ = lean_unbox_usize(v_i_1841_);
lean_dec(v_i_1841_);
v_stop_boxed_1846_ = lean_unbox_usize(v_stop_1842_);
lean_dec(v_stop_1842_);
v_res_1847_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__6(v_getTokens_1839_, v_as_1840_, v_i_boxed_1845_, v_stop_boxed_1846_, v_b_1843_, v___y_1844_);
lean_dec_ref(v_as_1840_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__5___boxed(lean_object* v_getTokens_1848_, lean_object* v_as_1849_, lean_object* v_sz_1850_, lean_object* v_i_1851_, lean_object* v_b_1852_, lean_object* v___y_1853_){
_start:
{
size_t v_sz_boxed_1854_; size_t v_i_boxed_1855_; lean_object* v_res_1856_; 
v_sz_boxed_1854_ = lean_unbox_usize(v_sz_1850_);
lean_dec(v_sz_1850_);
v_i_boxed_1855_ = lean_unbox_usize(v_i_1851_);
lean_dec(v_i_1851_);
v_res_1856_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__5(v_getTokens_1848_, v_as_1849_, v_sz_boxed_1854_, v_i_boxed_1855_, v_b_1852_, v___y_1853_);
lean_dec_ref(v_as_1849_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0___boxed(lean_object* v_getTokens_1857_, lean_object* v_as_1858_, lean_object* v_sz_1859_, lean_object* v_i_1860_, lean_object* v_b_1861_, lean_object* v___y_1862_){
_start:
{
size_t v_sz_boxed_1863_; size_t v_i_boxed_1864_; lean_object* v_res_1865_; 
v_sz_boxed_1863_ = lean_unbox_usize(v_sz_1859_);
lean_dec(v_sz_1859_);
v_i_boxed_1864_ = lean_unbox_usize(v_i_1860_);
lean_dec(v_i_1860_);
v_res_1865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_goItem_spec__0(v_getTokens_1857_, v_as_1858_, v_sz_boxed_1863_, v_i_boxed_1864_, v_b_1861_, v___y_1862_);
lean_dec_ref(v_as_1858_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__3___boxed(lean_object* v_getTokens_1866_, lean_object* v_as_1867_, lean_object* v_sz_1868_, lean_object* v_i_1869_, lean_object* v_b_1870_, lean_object* v___y_1871_){
_start:
{
size_t v_sz_boxed_1872_; size_t v_i_boxed_1873_; lean_object* v_res_1874_; 
v_sz_boxed_1872_ = lean_unbox_usize(v_sz_1868_);
lean_dec(v_sz_1868_);
v_i_boxed_1873_ = lean_unbox_usize(v_i_1869_);
lean_dec(v_i_1869_);
v_res_1874_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__3(v_getTokens_1866_, v_as_1867_, v_sz_boxed_1872_, v_i_boxed_1873_, v_b_1870_, v___y_1871_);
lean_dec_ref(v_as_1867_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__4___boxed(lean_object* v_getTokens_1875_, lean_object* v_as_1876_, lean_object* v_sz_1877_, lean_object* v_i_1878_, lean_object* v_b_1879_, lean_object* v___y_1880_){
_start:
{
size_t v_sz_boxed_1881_; size_t v_i_boxed_1882_; lean_object* v_res_1883_; 
v_sz_boxed_1881_ = lean_unbox_usize(v_sz_1877_);
lean_dec(v_sz_1877_);
v_i_boxed_1882_ = lean_unbox_usize(v_i_1878_);
lean_dec(v_i_1878_);
v_res_1883_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go_spec__4(v_getTokens_1875_, v_as_1876_, v_sz_boxed_1881_, v_i_boxed_1882_, v_b_1879_, v___y_1880_);
lean_dec_ref(v_as_1876_);
return v_res_1883_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(lean_object* v_stx_1886_, lean_object* v_getTokens_1887_){
_start:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v_snd_1890_; 
v___x_1888_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
v___x_1889_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_go(v_getTokens_1887_, v_stx_1886_, v___x_1888_);
v_snd_1890_ = lean_ctor_get(v___x_1889_, 1);
lean_inc(v_snd_1890_);
lean_dec_ref(v___x_1889_);
return v_snd_1890_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(lean_object* v_s_1891_){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; uint8_t v_decide_1894_; 
v___x_1892_ = lean_unsigned_to_nat(0u);
v___x_1893_ = lean_string_utf8_byte_size(v_s_1891_);
v_decide_1894_ = lean_nat_dec_eq(v___x_1892_, v___x_1893_);
if (v_decide_1894_ == 0)
{
uint32_t v___x_1895_; uint32_t v___x_1896_; uint8_t v___x_1897_; 
v___x_1895_ = 35;
v___x_1896_ = lean_string_utf8_get_fast(v_s_1891_, v___x_1892_);
v___x_1897_ = lean_uint32_dec_eq(v___x_1896_, v___x_1895_);
if (v___x_1897_ == 0)
{
lean_object* v___x_1898_; 
lean_dec_ref(v_s_1891_);
v___x_1898_ = lean_box(0);
return v___x_1898_;
}
else
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1899_ = lean_string_utf8_next_fast(v_s_1891_, v___x_1892_);
v___x_1900_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1900_, 0, v_s_1891_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
lean_ctor_set(v___x_1900_, 2, v___x_1893_);
v___x_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
return v___x_1901_;
}
}
else
{
lean_object* v___x_1902_; 
lean_dec_ref(v_s_1891_);
v___x_1902_ = lean_box(0);
return v___x_1902_;
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2(lean_object* v_s_1903_, uint32_t v_pat_1904_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v_s_1903_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___boxed(lean_object* v_s_1906_, lean_object* v_pat_1907_){
_start:
{
uint32_t v_pat_boxed_1908_; lean_object* v_res_1909_; 
v_pat_boxed_1908_ = lean_unbox_uint32(v_pat_1907_);
lean_dec(v_pat_1907_);
v_res_1909_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2(v_s_1906_, v_pat_boxed_1908_);
return v_res_1909_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0(lean_object* v_a_1910_, lean_object* v_as_1911_, size_t v_i_1912_, size_t v_stop_1913_){
_start:
{
uint8_t v___x_1914_; 
v___x_1914_ = lean_usize_dec_eq(v_i_1912_, v_stop_1913_);
if (v___x_1914_ == 0)
{
lean_object* v___x_1915_; uint8_t v___x_1916_; 
v___x_1915_ = lean_array_uget_borrowed(v_as_1911_, v_i_1912_);
v___x_1916_ = lean_name_eq(v_a_1910_, v___x_1915_);
if (v___x_1916_ == 0)
{
size_t v___x_1917_; size_t v___x_1918_; 
v___x_1917_ = ((size_t)1ULL);
v___x_1918_ = lean_usize_add(v_i_1912_, v___x_1917_);
v_i_1912_ = v___x_1918_;
goto _start;
}
else
{
return v___x_1916_;
}
}
else
{
uint8_t v___x_1920_; 
v___x_1920_ = 0;
return v___x_1920_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0___boxed(lean_object* v_a_1921_, lean_object* v_as_1922_, lean_object* v_i_1923_, lean_object* v_stop_1924_){
_start:
{
size_t v_i_boxed_1925_; size_t v_stop_boxed_1926_; uint8_t v_res_1927_; lean_object* v_r_1928_; 
v_i_boxed_1925_ = lean_unbox_usize(v_i_1923_);
lean_dec(v_i_1923_);
v_stop_boxed_1926_ = lean_unbox_usize(v_stop_1924_);
lean_dec(v_stop_1924_);
v_res_1927_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0(v_a_1921_, v_as_1922_, v_i_boxed_1925_, v_stop_boxed_1926_);
lean_dec_ref(v_as_1922_);
lean_dec(v_a_1921_);
v_r_1928_ = lean_box(v_res_1927_);
return v_r_1928_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(lean_object* v_as_1929_, lean_object* v_a_1930_){
_start:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; uint8_t v___x_1933_; 
v___x_1931_ = lean_unsigned_to_nat(0u);
v___x_1932_ = lean_array_get_size(v_as_1929_);
v___x_1933_ = lean_nat_dec_lt(v___x_1931_, v___x_1932_);
if (v___x_1933_ == 0)
{
return v___x_1933_;
}
else
{
size_t v___x_1934_; size_t v___x_1935_; uint8_t v___x_1936_; 
v___x_1934_ = ((size_t)0ULL);
v___x_1935_ = lean_usize_of_nat(v___x_1932_);
v___x_1936_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0_spec__0(v_a_1930_, v_as_1929_, v___x_1934_, v___x_1935_);
return v___x_1936_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0___boxed(lean_object* v_as_1937_, lean_object* v_a_1938_){
_start:
{
uint8_t v_res_1939_; lean_object* v_r_1940_; 
v_res_1939_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v_as_1937_, v_a_1938_);
lean_dec(v_a_1938_);
lean_dec_ref(v_as_1937_);
v_r_1940_ = lean_box(v_res_1939_);
return v_r_1940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(lean_object* v_as_1941_, size_t v_i_1942_, size_t v_stop_1943_, lean_object* v_b_1944_){
_start:
{
uint8_t v___x_1945_; 
v___x_1945_ = lean_usize_dec_eq(v_i_1942_, v_stop_1943_);
if (v___x_1945_ == 0)
{
lean_object* v___x_1946_; lean_object* v___x_1947_; size_t v___x_1948_; size_t v___x_1949_; 
v___x_1946_ = lean_array_uget_borrowed(v_as_1941_, v_i_1942_);
v___x_1947_ = l_Array_append___redArg(v_b_1944_, v___x_1946_);
v___x_1948_ = ((size_t)1ULL);
v___x_1949_ = lean_usize_add(v_i_1942_, v___x_1948_);
v_i_1942_ = v___x_1949_;
v_b_1944_ = v___x_1947_;
goto _start;
}
else
{
return v_b_1944_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4___boxed(lean_object* v_as_1951_, lean_object* v_i_1952_, lean_object* v_stop_1953_, lean_object* v_b_1954_){
_start:
{
size_t v_i_boxed_1955_; size_t v_stop_boxed_1956_; lean_object* v_res_1957_; 
v_i_boxed_1955_ = lean_unbox_usize(v_i_1952_);
lean_dec(v_i_1952_);
v_stop_boxed_1956_ = lean_unbox_usize(v_stop_1953_);
lean_dec(v_stop_1953_);
v_res_1957_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v_as_1951_, v_i_boxed_1955_, v_stop_boxed_1956_, v_b_1954_);
lean_dec_ref(v_as_1951_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(lean_object* v_t_1958_, lean_object* v_k_1959_, lean_object* v_fallback_1960_){
_start:
{
if (lean_obj_tag(v_t_1958_) == 0)
{
lean_object* v_k_1961_; lean_object* v_v_1962_; lean_object* v_l_1963_; lean_object* v_r_1964_; uint8_t v___x_1965_; 
v_k_1961_ = lean_ctor_get(v_t_1958_, 1);
v_v_1962_ = lean_ctor_get(v_t_1958_, 2);
v_l_1963_ = lean_ctor_get(v_t_1958_, 3);
v_r_1964_ = lean_ctor_get(v_t_1958_, 4);
v___x_1965_ = lean_string_compare(v_k_1959_, v_k_1961_);
switch(v___x_1965_)
{
case 0:
{
v_t_1958_ = v_l_1963_;
goto _start;
}
case 1:
{
lean_inc(v_v_1962_);
return v_v_1962_;
}
default: 
{
v_t_1958_ = v_r_1964_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_1960_);
return v_fallback_1960_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg___boxed(lean_object* v_t_1968_, lean_object* v_k_1969_, lean_object* v_fallback_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v_t_1968_, v_k_1969_, v_fallback_1970_);
lean_dec(v_fallback_1970_);
lean_dec_ref(v_k_1969_);
lean_dec(v_t_1968_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(lean_object* v_text_1998_, lean_object* v_x_1999_){
_start:
{
lean_object* v___y_2001_; lean_object* v___y_2002_; lean_object* v___y_2012_; lean_object* v___y_2013_; uint8_t v___y_2014_; uint8_t v___y_2015_; lean_object* v___y_2017_; lean_object* v___y_2018_; uint8_t v___y_2019_; uint32_t v___y_2020_; lean_object* v___y_2025_; lean_object* v___y_2026_; uint8_t v___y_2027_; uint32_t v___y_2028_; lean_object* v___y_2034_; lean_object* v___y_2035_; uint8_t v___y_2045_; lean_object* v___y_2046_; lean_object* v___y_2047_; uint8_t v___y_2048_; uint8_t v___y_2050_; uint32_t v___y_2051_; lean_object* v___y_2052_; lean_object* v___y_2053_; uint8_t v___y_2058_; uint32_t v___y_2059_; lean_object* v___y_2060_; lean_object* v___y_2061_; lean_object* v___y_2067_; lean_object* v___y_2068_; uint8_t v___y_2078_; lean_object* v___y_2079_; lean_object* v___y_2080_; uint8_t v___y_2081_; uint8_t v___y_2083_; uint32_t v___y_2084_; lean_object* v___y_2085_; lean_object* v___y_2086_; uint8_t v___y_2091_; uint32_t v___y_2092_; lean_object* v___y_2093_; lean_object* v___y_2094_; lean_object* v___y_2100_; lean_object* v___y_2101_; uint8_t v___y_2111_; lean_object* v___y_2112_; lean_object* v___y_2113_; uint8_t v___y_2114_; uint8_t v___y_2116_; uint32_t v___y_2117_; lean_object* v___y_2118_; lean_object* v___y_2119_; uint8_t v___y_2124_; uint32_t v___y_2125_; lean_object* v___y_2126_; lean_object* v___y_2127_; lean_object* v___y_2133_; lean_object* v___y_2134_; lean_object* v___y_2144_; lean_object* v___y_2145_; uint8_t v___y_2146_; uint8_t v___y_2147_; lean_object* v___y_2149_; uint32_t v___y_2150_; lean_object* v___y_2151_; uint8_t v___y_2152_; lean_object* v___y_2157_; uint32_t v___y_2158_; lean_object* v___y_2159_; uint8_t v___y_2160_; lean_object* v___x_2165_; uint8_t v___x_2166_; 
v___x_2165_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__1));
lean_inc(v_x_1999_);
v___x_2166_ = l_Lean_Syntax_isOfKind(v_x_1999_, v___x_2165_);
if (v___x_2166_ == 0)
{
lean_object* v___x_2167_; uint8_t v___x_2168_; 
v___x_2167_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__3));
lean_inc(v_x_1999_);
v___x_2168_ = l_Lean_Syntax_isOfKind(v_x_1999_, v___x_2167_);
if (v___x_2168_ == 0)
{
lean_object* v___x_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; 
v___x_2169_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds));
lean_inc(v_x_1999_);
v___x_2170_ = l_Lean_Syntax_getKind(v_x_1999_);
v___x_2171_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2169_, v___x_2170_);
if (v___x_2171_ == 0)
{
lean_object* v___x_2172_; uint8_t v___x_2173_; lean_object* v___y_2175_; lean_object* v___y_2176_; uint8_t v___y_2177_; lean_object* v___y_2192_; lean_object* v___y_2193_; uint32_t v___y_2194_; lean_object* v___y_2199_; lean_object* v___y_2200_; uint32_t v___y_2201_; lean_object* v___y_2207_; 
v___x_2172_ = ((lean_object*)(l_Lean_Server_FileWorker_docKinds));
v___x_2173_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2172_, v___x_2170_);
lean_dec(v___x_2170_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2222_; uint8_t v___x_2223_; 
v___x_2222_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5));
lean_inc(v_x_1999_);
v___x_2223_ = l_Lean_Syntax_isOfKind(v_x_1999_, v___x_2222_);
if (v___x_2223_ == 0)
{
lean_object* v___x_2224_; size_t v_sz_2225_; size_t v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; uint8_t v___x_2231_; 
v___x_2224_ = l_Lean_Syntax_getArgs(v_x_1999_);
v_sz_2225_ = lean_array_size(v___x_2224_);
v___x_2226_ = ((size_t)0ULL);
v___x_2227_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_1998_, v_sz_2225_, v___x_2226_, v___x_2224_);
v___x_2228_ = lean_unsigned_to_nat(0u);
v___x_2229_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6));
v___x_2230_ = lean_array_get_size(v___x_2227_);
v___x_2231_ = lean_nat_dec_lt(v___x_2228_, v___x_2230_);
if (v___x_2231_ == 0)
{
lean_dec_ref(v___x_2227_);
v___y_2207_ = v___x_2229_;
goto v___jp_2206_;
}
else
{
size_t v___x_2232_; lean_object* v___x_2233_; 
v___x_2232_ = lean_usize_of_nat(v___x_2230_);
v___x_2233_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v___x_2227_, v___x_2226_, v___x_2232_, v___x_2229_);
lean_dec_ref(v___x_2227_);
v___y_2207_ = v___x_2233_;
goto v___jp_2206_;
}
}
else
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2234_ = lean_unsigned_to_nat(0u);
v___x_2235_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2234_);
v___x_2236_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_1998_, v___x_2235_);
v___y_2207_ = v___x_2236_;
goto v___jp_2206_;
}
}
else
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; uint8_t v___x_2240_; 
v___x_2237_ = lean_unsigned_to_nat(1u);
v___x_2238_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2237_);
lean_dec(v_x_1999_);
v___x_2239_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8));
lean_inc(v___x_2238_);
v___x_2240_ = l_Lean_Syntax_isOfKind(v___x_2238_, v___x_2239_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; 
lean_dec(v___x_2238_);
lean_dec_ref(v_text_1998_);
v___x_2241_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2241_;
}
else
{
lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2242_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens), 2, 1);
lean_closure_set(v___x_2242_, 0, v_text_1998_);
v___x_2243_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(v___x_2238_, v___x_2242_);
return v___x_2243_;
}
}
v___jp_2174_:
{
lean_object* v___x_2178_; 
lean_inc_ref(v___y_2175_);
v___x_2178_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v___y_2175_);
if (lean_obj_tag(v___x_2178_) == 0)
{
v___y_2012_ = v___y_2175_;
v___y_2013_ = v___y_2176_;
v___y_2014_ = v___y_2177_;
v___y_2015_ = v___x_2173_;
goto v___jp_2011_;
}
else
{
lean_object* v_val_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
v_val_2179_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_val_2179_);
lean_dec_ref_known(v___x_2178_, 1);
v___x_2180_ = lean_unsigned_to_nat(0u);
v___x_2181_ = l_String_Slice_Pos_get_x3f(v_val_2179_, v___x_2180_);
lean_dec(v_val_2179_);
if (lean_obj_tag(v___x_2181_) == 0)
{
v___y_2012_ = v___y_2175_;
v___y_2013_ = v___y_2176_;
v___y_2014_ = v___y_2177_;
v___y_2015_ = v___x_2173_;
goto v___jp_2011_;
}
else
{
lean_object* v_val_2182_; uint32_t v___x_2183_; uint32_t v___x_2184_; uint8_t v___x_2185_; 
v_val_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_val_2182_);
lean_dec_ref_known(v___x_2181_, 1);
v___x_2183_ = 65;
v___x_2184_ = lean_unbox_uint32(v_val_2182_);
v___x_2185_ = lean_uint32_dec_le(v___x_2183_, v___x_2184_);
if (v___x_2185_ == 0)
{
uint32_t v___x_2186_; 
v___x_2186_ = lean_unbox_uint32(v_val_2182_);
lean_dec(v_val_2182_);
v___y_2025_ = v___y_2175_;
v___y_2026_ = v___y_2176_;
v___y_2027_ = v___y_2177_;
v___y_2028_ = v___x_2186_;
goto v___jp_2024_;
}
else
{
uint32_t v___x_2187_; uint32_t v___x_2188_; uint8_t v___x_2189_; 
v___x_2187_ = 90;
v___x_2188_ = lean_unbox_uint32(v_val_2182_);
v___x_2189_ = lean_uint32_dec_le(v___x_2188_, v___x_2187_);
if (v___x_2189_ == 0)
{
uint32_t v___x_2190_; 
v___x_2190_ = lean_unbox_uint32(v_val_2182_);
lean_dec(v_val_2182_);
v___y_2025_ = v___y_2175_;
v___y_2026_ = v___y_2176_;
v___y_2027_ = v___y_2177_;
v___y_2028_ = v___x_2190_;
goto v___jp_2024_;
}
else
{
lean_dec(v_val_2182_);
v___y_2012_ = v___y_2175_;
v___y_2013_ = v___y_2176_;
v___y_2014_ = v___y_2177_;
v___y_2015_ = v___x_2189_;
goto v___jp_2011_;
}
}
}
}
}
v___jp_2191_:
{
uint32_t v___x_2195_; uint8_t v___x_2196_; 
v___x_2195_ = 95;
v___x_2196_ = lean_uint32_dec_eq(v___y_2194_, v___x_2195_);
if (v___x_2196_ == 0)
{
uint8_t v___x_2197_; 
v___x_2197_ = l_Lean_isLetterLike(v___y_2194_);
v___y_2175_ = v___y_2192_;
v___y_2176_ = v___y_2193_;
v___y_2177_ = v___x_2197_;
goto v___jp_2174_;
}
else
{
v___y_2175_ = v___y_2192_;
v___y_2176_ = v___y_2193_;
v___y_2177_ = v___x_2196_;
goto v___jp_2174_;
}
}
v___jp_2198_:
{
uint32_t v___x_2202_; uint8_t v___x_2203_; 
v___x_2202_ = 97;
v___x_2203_ = lean_uint32_dec_le(v___x_2202_, v___y_2201_);
if (v___x_2203_ == 0)
{
v___y_2192_ = v___y_2199_;
v___y_2193_ = v___y_2200_;
v___y_2194_ = v___y_2201_;
goto v___jp_2191_;
}
else
{
uint32_t v___x_2204_; uint8_t v___x_2205_; 
v___x_2204_ = 122;
v___x_2205_ = lean_uint32_dec_le(v___y_2201_, v___x_2204_);
if (v___x_2205_ == 0)
{
v___y_2192_ = v___y_2199_;
v___y_2193_ = v___y_2200_;
v___y_2194_ = v___y_2201_;
goto v___jp_2191_;
}
else
{
v___y_2175_ = v___y_2199_;
v___y_2176_ = v___y_2200_;
v___y_2177_ = v___x_2205_;
goto v___jp_2174_;
}
}
}
v___jp_2206_:
{
if (lean_obj_tag(v_x_1999_) == 2)
{
lean_object* v_val_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v_val_2208_ = lean_ctor_get(v_x_1999_, 1);
v___x_2209_ = lean_unsigned_to_nat(0u);
v___x_2210_ = lean_string_utf8_byte_size(v_val_2208_);
lean_inc_ref(v_val_2208_);
v___x_2211_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2211_, 0, v_val_2208_);
lean_ctor_set(v___x_2211_, 1, v___x_2209_);
lean_ctor_set(v___x_2211_, 2, v___x_2210_);
v___x_2212_ = l_String_Slice_Pos_get_x3f(v___x_2211_, v___x_2209_);
lean_dec_ref_known(v___x_2211_, 3);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_inc_ref(v_val_2208_);
v___y_2175_ = v_val_2208_;
v___y_2176_ = v___y_2207_;
v___y_2177_ = v___x_2173_;
goto v___jp_2174_;
}
else
{
lean_object* v_val_2213_; uint32_t v___x_2214_; uint32_t v___x_2215_; uint8_t v___x_2216_; 
v_val_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_val_2213_);
lean_dec_ref_known(v___x_2212_, 1);
v___x_2214_ = 65;
v___x_2215_ = lean_unbox_uint32(v_val_2213_);
v___x_2216_ = lean_uint32_dec_le(v___x_2214_, v___x_2215_);
if (v___x_2216_ == 0)
{
uint32_t v___x_2217_; 
v___x_2217_ = lean_unbox_uint32(v_val_2213_);
lean_dec(v_val_2213_);
lean_inc_ref(v_val_2208_);
v___y_2199_ = v_val_2208_;
v___y_2200_ = v___y_2207_;
v___y_2201_ = v___x_2217_;
goto v___jp_2198_;
}
else
{
uint32_t v___x_2218_; uint32_t v___x_2219_; uint8_t v___x_2220_; 
v___x_2218_ = 90;
v___x_2219_ = lean_unbox_uint32(v_val_2213_);
v___x_2220_ = lean_uint32_dec_le(v___x_2219_, v___x_2218_);
if (v___x_2220_ == 0)
{
uint32_t v___x_2221_; 
v___x_2221_ = lean_unbox_uint32(v_val_2213_);
lean_dec(v_val_2213_);
lean_inc_ref(v_val_2208_);
v___y_2199_ = v_val_2208_;
v___y_2200_ = v___y_2207_;
v___y_2201_ = v___x_2221_;
goto v___jp_2198_;
}
else
{
lean_dec(v_val_2213_);
lean_inc_ref(v_val_2208_);
v___y_2175_ = v_val_2208_;
v___y_2176_ = v___y_2207_;
v___y_2177_ = v___x_2220_;
goto v___jp_2174_;
}
}
}
}
else
{
lean_dec(v_x_1999_);
return v___y_2207_;
}
}
}
else
{
lean_object* v___x_2244_; 
lean_dec(v___x_2170_);
lean_dec(v_x_1999_);
lean_dec_ref(v_text_1998_);
v___x_2244_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2244_;
}
}
else
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; uint8_t v___x_2250_; 
v___x_2245_ = lean_unsigned_to_nat(0u);
v___x_2246_ = lean_unsigned_to_nat(1u);
v___x_2247_ = lean_unsigned_to_nat(2u);
v___x_2248_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2247_);
v___x_2249_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__10));
lean_inc(v___x_2248_);
v___x_2250_ = l_Lean_Syntax_isOfKind(v___x_2248_, v___x_2249_);
if (v___x_2250_ == 0)
{
lean_object* v___x_2251_; lean_object* v___x_2252_; uint8_t v___x_2253_; 
lean_dec(v___x_2248_);
v___x_2251_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds));
lean_inc(v_x_1999_);
v___x_2252_ = l_Lean_Syntax_getKind(v_x_1999_);
v___x_2253_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2251_, v___x_2252_);
if (v___x_2253_ == 0)
{
lean_object* v___x_2254_; uint8_t v___x_2255_; lean_object* v___y_2257_; lean_object* v___y_2258_; uint8_t v___y_2259_; uint32_t v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; uint32_t v___y_2280_; lean_object* v___y_2281_; lean_object* v___y_2282_; lean_object* v___y_2288_; 
v___x_2254_ = ((lean_object*)(l_Lean_Server_FileWorker_docKinds));
v___x_2255_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2254_, v___x_2252_);
lean_dec(v___x_2252_);
if (v___x_2255_ == 0)
{
lean_object* v___x_2302_; uint8_t v___x_2303_; 
v___x_2302_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5));
lean_inc(v_x_1999_);
v___x_2303_ = l_Lean_Syntax_isOfKind(v_x_1999_, v___x_2302_);
if (v___x_2303_ == 0)
{
lean_object* v___x_2304_; size_t v_sz_2305_; size_t v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; uint8_t v___x_2310_; 
v___x_2304_ = l_Lean_Syntax_getArgs(v_x_1999_);
v_sz_2305_ = lean_array_size(v___x_2304_);
v___x_2306_ = ((size_t)0ULL);
v___x_2307_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_1998_, v_sz_2305_, v___x_2306_, v___x_2304_);
v___x_2308_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6));
v___x_2309_ = lean_array_get_size(v___x_2307_);
v___x_2310_ = lean_nat_dec_lt(v___x_2245_, v___x_2309_);
if (v___x_2310_ == 0)
{
lean_dec_ref(v___x_2307_);
v___y_2288_ = v___x_2308_;
goto v___jp_2287_;
}
else
{
size_t v___x_2311_; lean_object* v___x_2312_; 
v___x_2311_ = lean_usize_of_nat(v___x_2309_);
v___x_2312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v___x_2307_, v___x_2306_, v___x_2311_, v___x_2308_);
lean_dec_ref(v___x_2307_);
v___y_2288_ = v___x_2312_;
goto v___jp_2287_;
}
}
else
{
lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2313_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2245_);
v___x_2314_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_1998_, v___x_2313_);
v___y_2288_ = v___x_2314_;
goto v___jp_2287_;
}
}
else
{
lean_object* v___x_2315_; lean_object* v___x_2316_; uint8_t v___x_2317_; 
v___x_2315_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2246_);
lean_dec(v_x_1999_);
v___x_2316_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8));
lean_inc(v___x_2315_);
v___x_2317_ = l_Lean_Syntax_isOfKind(v___x_2315_, v___x_2316_);
if (v___x_2317_ == 0)
{
lean_object* v___x_2318_; 
lean_dec(v___x_2315_);
lean_dec_ref(v_text_1998_);
v___x_2318_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2318_;
}
else
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens), 2, 1);
lean_closure_set(v___x_2319_, 0, v_text_1998_);
v___x_2320_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(v___x_2315_, v___x_2319_);
return v___x_2320_;
}
}
v___jp_2256_:
{
lean_object* v___x_2260_; 
lean_inc_ref(v___y_2257_);
v___x_2260_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v___y_2257_);
if (lean_obj_tag(v___x_2260_) == 0)
{
v___y_2045_ = v___y_2259_;
v___y_2046_ = v___y_2257_;
v___y_2047_ = v___y_2258_;
v___y_2048_ = v___x_2255_;
goto v___jp_2044_;
}
else
{
lean_object* v_val_2261_; lean_object* v___x_2262_; 
v_val_2261_ = lean_ctor_get(v___x_2260_, 0);
lean_inc(v_val_2261_);
lean_dec_ref_known(v___x_2260_, 1);
v___x_2262_ = l_String_Slice_Pos_get_x3f(v_val_2261_, v___x_2245_);
lean_dec(v_val_2261_);
if (lean_obj_tag(v___x_2262_) == 0)
{
v___y_2045_ = v___y_2259_;
v___y_2046_ = v___y_2257_;
v___y_2047_ = v___y_2258_;
v___y_2048_ = v___x_2255_;
goto v___jp_2044_;
}
else
{
lean_object* v_val_2263_; uint32_t v___x_2264_; uint32_t v___x_2265_; uint8_t v___x_2266_; 
v_val_2263_ = lean_ctor_get(v___x_2262_, 0);
lean_inc(v_val_2263_);
lean_dec_ref_known(v___x_2262_, 1);
v___x_2264_ = 65;
v___x_2265_ = lean_unbox_uint32(v_val_2263_);
v___x_2266_ = lean_uint32_dec_le(v___x_2264_, v___x_2265_);
if (v___x_2266_ == 0)
{
uint32_t v___x_2267_; 
v___x_2267_ = lean_unbox_uint32(v_val_2263_);
lean_dec(v_val_2263_);
v___y_2058_ = v___y_2259_;
v___y_2059_ = v___x_2267_;
v___y_2060_ = v___y_2257_;
v___y_2061_ = v___y_2258_;
goto v___jp_2057_;
}
else
{
uint32_t v___x_2268_; uint32_t v___x_2269_; uint8_t v___x_2270_; 
v___x_2268_ = 90;
v___x_2269_ = lean_unbox_uint32(v_val_2263_);
v___x_2270_ = lean_uint32_dec_le(v___x_2269_, v___x_2268_);
if (v___x_2270_ == 0)
{
uint32_t v___x_2271_; 
v___x_2271_ = lean_unbox_uint32(v_val_2263_);
lean_dec(v_val_2263_);
v___y_2058_ = v___y_2259_;
v___y_2059_ = v___x_2271_;
v___y_2060_ = v___y_2257_;
v___y_2061_ = v___y_2258_;
goto v___jp_2057_;
}
else
{
lean_dec(v_val_2263_);
v___y_2045_ = v___y_2259_;
v___y_2046_ = v___y_2257_;
v___y_2047_ = v___y_2258_;
v___y_2048_ = v___x_2270_;
goto v___jp_2044_;
}
}
}
}
}
v___jp_2272_:
{
uint32_t v___x_2276_; uint8_t v___x_2277_; 
v___x_2276_ = 95;
v___x_2277_ = lean_uint32_dec_eq(v___y_2273_, v___x_2276_);
if (v___x_2277_ == 0)
{
uint8_t v___x_2278_; 
v___x_2278_ = l_Lean_isLetterLike(v___y_2273_);
v___y_2257_ = v___y_2274_;
v___y_2258_ = v___y_2275_;
v___y_2259_ = v___x_2278_;
goto v___jp_2256_;
}
else
{
v___y_2257_ = v___y_2274_;
v___y_2258_ = v___y_2275_;
v___y_2259_ = v___x_2277_;
goto v___jp_2256_;
}
}
v___jp_2279_:
{
uint32_t v___x_2283_; uint8_t v___x_2284_; 
v___x_2283_ = 97;
v___x_2284_ = lean_uint32_dec_le(v___x_2283_, v___y_2280_);
if (v___x_2284_ == 0)
{
v___y_2273_ = v___y_2280_;
v___y_2274_ = v___y_2281_;
v___y_2275_ = v___y_2282_;
goto v___jp_2272_;
}
else
{
uint32_t v___x_2285_; uint8_t v___x_2286_; 
v___x_2285_ = 122;
v___x_2286_ = lean_uint32_dec_le(v___y_2280_, v___x_2285_);
if (v___x_2286_ == 0)
{
v___y_2273_ = v___y_2280_;
v___y_2274_ = v___y_2281_;
v___y_2275_ = v___y_2282_;
goto v___jp_2272_;
}
else
{
v___y_2257_ = v___y_2281_;
v___y_2258_ = v___y_2282_;
v___y_2259_ = v___x_2286_;
goto v___jp_2256_;
}
}
}
v___jp_2287_:
{
if (lean_obj_tag(v_x_1999_) == 2)
{
lean_object* v_val_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v_val_2289_ = lean_ctor_get(v_x_1999_, 1);
v___x_2290_ = lean_string_utf8_byte_size(v_val_2289_);
lean_inc_ref(v_val_2289_);
v___x_2291_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2291_, 0, v_val_2289_);
lean_ctor_set(v___x_2291_, 1, v___x_2245_);
lean_ctor_set(v___x_2291_, 2, v___x_2290_);
v___x_2292_ = l_String_Slice_Pos_get_x3f(v___x_2291_, v___x_2245_);
lean_dec_ref_known(v___x_2291_, 3);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_inc_ref(v_val_2289_);
v___y_2257_ = v_val_2289_;
v___y_2258_ = v___y_2288_;
v___y_2259_ = v___x_2255_;
goto v___jp_2256_;
}
else
{
lean_object* v_val_2293_; uint32_t v___x_2294_; uint32_t v___x_2295_; uint8_t v___x_2296_; 
v_val_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_val_2293_);
lean_dec_ref_known(v___x_2292_, 1);
v___x_2294_ = 65;
v___x_2295_ = lean_unbox_uint32(v_val_2293_);
v___x_2296_ = lean_uint32_dec_le(v___x_2294_, v___x_2295_);
if (v___x_2296_ == 0)
{
uint32_t v___x_2297_; 
v___x_2297_ = lean_unbox_uint32(v_val_2293_);
lean_dec(v_val_2293_);
lean_inc_ref(v_val_2289_);
v___y_2280_ = v___x_2297_;
v___y_2281_ = v_val_2289_;
v___y_2282_ = v___y_2288_;
goto v___jp_2279_;
}
else
{
uint32_t v___x_2298_; uint32_t v___x_2299_; uint8_t v___x_2300_; 
v___x_2298_ = 90;
v___x_2299_ = lean_unbox_uint32(v_val_2293_);
v___x_2300_ = lean_uint32_dec_le(v___x_2299_, v___x_2298_);
if (v___x_2300_ == 0)
{
uint32_t v___x_2301_; 
v___x_2301_ = lean_unbox_uint32(v_val_2293_);
lean_dec(v_val_2293_);
lean_inc_ref(v_val_2289_);
v___y_2280_ = v___x_2301_;
v___y_2281_ = v_val_2289_;
v___y_2282_ = v___y_2288_;
goto v___jp_2279_;
}
else
{
lean_dec(v_val_2293_);
lean_inc_ref(v_val_2289_);
v___y_2257_ = v_val_2289_;
v___y_2258_ = v___y_2288_;
v___y_2259_ = v___x_2300_;
goto v___jp_2256_;
}
}
}
}
else
{
lean_dec(v_x_1999_);
return v___y_2288_;
}
}
}
else
{
lean_object* v___x_2321_; 
lean_dec(v___x_2252_);
lean_dec(v_x_1999_);
lean_dec_ref(v_text_1998_);
v___x_2321_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2321_;
}
}
else
{
lean_object* v___x_2322_; lean_object* v___x_2323_; uint8_t v___x_2324_; 
v___x_2322_ = lean_unsigned_to_nat(3u);
v___x_2323_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2322_);
v___x_2324_ = l_Lean_Syntax_matchesNull(v___x_2323_, v___x_2245_);
if (v___x_2324_ == 0)
{
lean_object* v___x_2325_; lean_object* v___x_2326_; uint8_t v___x_2327_; 
lean_dec(v___x_2248_);
v___x_2325_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds));
lean_inc(v_x_1999_);
v___x_2326_ = l_Lean_Syntax_getKind(v_x_1999_);
v___x_2327_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2325_, v___x_2326_);
if (v___x_2327_ == 0)
{
lean_object* v___x_2328_; uint8_t v___x_2329_; lean_object* v___y_2331_; lean_object* v___y_2332_; uint8_t v___y_2333_; lean_object* v___y_2347_; lean_object* v___y_2348_; uint32_t v___y_2349_; lean_object* v___y_2354_; lean_object* v___y_2355_; uint32_t v___y_2356_; lean_object* v___y_2362_; 
v___x_2328_ = ((lean_object*)(l_Lean_Server_FileWorker_docKinds));
v___x_2329_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2328_, v___x_2326_);
lean_dec(v___x_2326_);
if (v___x_2329_ == 0)
{
lean_object* v___x_2376_; uint8_t v___x_2377_; 
v___x_2376_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5));
lean_inc(v_x_1999_);
v___x_2377_ = l_Lean_Syntax_isOfKind(v_x_1999_, v___x_2376_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2378_; size_t v_sz_2379_; size_t v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; uint8_t v___x_2384_; 
v___x_2378_ = l_Lean_Syntax_getArgs(v_x_1999_);
v_sz_2379_ = lean_array_size(v___x_2378_);
v___x_2380_ = ((size_t)0ULL);
v___x_2381_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_1998_, v_sz_2379_, v___x_2380_, v___x_2378_);
v___x_2382_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6));
v___x_2383_ = lean_array_get_size(v___x_2381_);
v___x_2384_ = lean_nat_dec_lt(v___x_2245_, v___x_2383_);
if (v___x_2384_ == 0)
{
lean_dec_ref(v___x_2381_);
v___y_2362_ = v___x_2382_;
goto v___jp_2361_;
}
else
{
size_t v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = lean_usize_of_nat(v___x_2383_);
v___x_2386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v___x_2381_, v___x_2380_, v___x_2385_, v___x_2382_);
lean_dec_ref(v___x_2381_);
v___y_2362_ = v___x_2386_;
goto v___jp_2361_;
}
}
else
{
lean_object* v___x_2387_; lean_object* v___x_2388_; 
v___x_2387_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2245_);
v___x_2388_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_1998_, v___x_2387_);
v___y_2362_ = v___x_2388_;
goto v___jp_2361_;
}
}
else
{
lean_object* v___x_2389_; lean_object* v___x_2390_; uint8_t v___x_2391_; 
v___x_2389_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2246_);
lean_dec(v_x_1999_);
v___x_2390_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8));
lean_inc(v___x_2389_);
v___x_2391_ = l_Lean_Syntax_isOfKind(v___x_2389_, v___x_2390_);
if (v___x_2391_ == 0)
{
lean_object* v___x_2392_; 
lean_dec(v___x_2389_);
lean_dec_ref(v_text_1998_);
v___x_2392_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2392_;
}
else
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens), 2, 1);
lean_closure_set(v___x_2393_, 0, v_text_1998_);
v___x_2394_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(v___x_2389_, v___x_2393_);
return v___x_2394_;
}
}
v___jp_2330_:
{
lean_object* v___x_2334_; 
lean_inc_ref(v___y_2331_);
v___x_2334_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v___y_2331_);
if (lean_obj_tag(v___x_2334_) == 0)
{
v___y_2078_ = v___y_2333_;
v___y_2079_ = v___y_2331_;
v___y_2080_ = v___y_2332_;
v___y_2081_ = v___x_2329_;
goto v___jp_2077_;
}
else
{
lean_object* v_val_2335_; lean_object* v___x_2336_; 
v_val_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_val_2335_);
lean_dec_ref_known(v___x_2334_, 1);
v___x_2336_ = l_String_Slice_Pos_get_x3f(v_val_2335_, v___x_2245_);
lean_dec(v_val_2335_);
if (lean_obj_tag(v___x_2336_) == 0)
{
v___y_2078_ = v___y_2333_;
v___y_2079_ = v___y_2331_;
v___y_2080_ = v___y_2332_;
v___y_2081_ = v___x_2329_;
goto v___jp_2077_;
}
else
{
lean_object* v_val_2337_; uint32_t v___x_2338_; uint32_t v___x_2339_; uint8_t v___x_2340_; 
v_val_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_val_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v___x_2338_ = 65;
v___x_2339_ = lean_unbox_uint32(v_val_2337_);
v___x_2340_ = lean_uint32_dec_le(v___x_2338_, v___x_2339_);
if (v___x_2340_ == 0)
{
uint32_t v___x_2341_; 
v___x_2341_ = lean_unbox_uint32(v_val_2337_);
lean_dec(v_val_2337_);
v___y_2091_ = v___y_2333_;
v___y_2092_ = v___x_2341_;
v___y_2093_ = v___y_2331_;
v___y_2094_ = v___y_2332_;
goto v___jp_2090_;
}
else
{
uint32_t v___x_2342_; uint32_t v___x_2343_; uint8_t v___x_2344_; 
v___x_2342_ = 90;
v___x_2343_ = lean_unbox_uint32(v_val_2337_);
v___x_2344_ = lean_uint32_dec_le(v___x_2343_, v___x_2342_);
if (v___x_2344_ == 0)
{
uint32_t v___x_2345_; 
v___x_2345_ = lean_unbox_uint32(v_val_2337_);
lean_dec(v_val_2337_);
v___y_2091_ = v___y_2333_;
v___y_2092_ = v___x_2345_;
v___y_2093_ = v___y_2331_;
v___y_2094_ = v___y_2332_;
goto v___jp_2090_;
}
else
{
lean_dec(v_val_2337_);
v___y_2078_ = v___y_2333_;
v___y_2079_ = v___y_2331_;
v___y_2080_ = v___y_2332_;
v___y_2081_ = v___x_2344_;
goto v___jp_2077_;
}
}
}
}
}
v___jp_2346_:
{
uint32_t v___x_2350_; uint8_t v___x_2351_; 
v___x_2350_ = 95;
v___x_2351_ = lean_uint32_dec_eq(v___y_2349_, v___x_2350_);
if (v___x_2351_ == 0)
{
uint8_t v___x_2352_; 
v___x_2352_ = l_Lean_isLetterLike(v___y_2349_);
v___y_2331_ = v___y_2347_;
v___y_2332_ = v___y_2348_;
v___y_2333_ = v___x_2352_;
goto v___jp_2330_;
}
else
{
v___y_2331_ = v___y_2347_;
v___y_2332_ = v___y_2348_;
v___y_2333_ = v___x_2351_;
goto v___jp_2330_;
}
}
v___jp_2353_:
{
uint32_t v___x_2357_; uint8_t v___x_2358_; 
v___x_2357_ = 97;
v___x_2358_ = lean_uint32_dec_le(v___x_2357_, v___y_2356_);
if (v___x_2358_ == 0)
{
v___y_2347_ = v___y_2354_;
v___y_2348_ = v___y_2355_;
v___y_2349_ = v___y_2356_;
goto v___jp_2346_;
}
else
{
uint32_t v___x_2359_; uint8_t v___x_2360_; 
v___x_2359_ = 122;
v___x_2360_ = lean_uint32_dec_le(v___y_2356_, v___x_2359_);
if (v___x_2360_ == 0)
{
v___y_2347_ = v___y_2354_;
v___y_2348_ = v___y_2355_;
v___y_2349_ = v___y_2356_;
goto v___jp_2346_;
}
else
{
v___y_2331_ = v___y_2354_;
v___y_2332_ = v___y_2355_;
v___y_2333_ = v___x_2360_;
goto v___jp_2330_;
}
}
}
v___jp_2361_:
{
if (lean_obj_tag(v_x_1999_) == 2)
{
lean_object* v_val_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v_val_2363_ = lean_ctor_get(v_x_1999_, 1);
v___x_2364_ = lean_string_utf8_byte_size(v_val_2363_);
lean_inc_ref(v_val_2363_);
v___x_2365_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2365_, 0, v_val_2363_);
lean_ctor_set(v___x_2365_, 1, v___x_2245_);
lean_ctor_set(v___x_2365_, 2, v___x_2364_);
v___x_2366_ = l_String_Slice_Pos_get_x3f(v___x_2365_, v___x_2245_);
lean_dec_ref_known(v___x_2365_, 3);
if (lean_obj_tag(v___x_2366_) == 0)
{
lean_inc_ref(v_val_2363_);
v___y_2331_ = v_val_2363_;
v___y_2332_ = v___y_2362_;
v___y_2333_ = v___x_2329_;
goto v___jp_2330_;
}
else
{
lean_object* v_val_2367_; uint32_t v___x_2368_; uint32_t v___x_2369_; uint8_t v___x_2370_; 
v_val_2367_ = lean_ctor_get(v___x_2366_, 0);
lean_inc(v_val_2367_);
lean_dec_ref_known(v___x_2366_, 1);
v___x_2368_ = 65;
v___x_2369_ = lean_unbox_uint32(v_val_2367_);
v___x_2370_ = lean_uint32_dec_le(v___x_2368_, v___x_2369_);
if (v___x_2370_ == 0)
{
uint32_t v___x_2371_; 
v___x_2371_ = lean_unbox_uint32(v_val_2367_);
lean_dec(v_val_2367_);
lean_inc_ref(v_val_2363_);
v___y_2354_ = v_val_2363_;
v___y_2355_ = v___y_2362_;
v___y_2356_ = v___x_2371_;
goto v___jp_2353_;
}
else
{
uint32_t v___x_2372_; uint32_t v___x_2373_; uint8_t v___x_2374_; 
v___x_2372_ = 90;
v___x_2373_ = lean_unbox_uint32(v_val_2367_);
v___x_2374_ = lean_uint32_dec_le(v___x_2373_, v___x_2372_);
if (v___x_2374_ == 0)
{
uint32_t v___x_2375_; 
v___x_2375_ = lean_unbox_uint32(v_val_2367_);
lean_dec(v_val_2367_);
lean_inc_ref(v_val_2363_);
v___y_2354_ = v_val_2363_;
v___y_2355_ = v___y_2362_;
v___y_2356_ = v___x_2375_;
goto v___jp_2353_;
}
else
{
lean_dec(v_val_2367_);
lean_inc_ref(v_val_2363_);
v___y_2331_ = v_val_2363_;
v___y_2332_ = v___y_2362_;
v___y_2333_ = v___x_2374_;
goto v___jp_2330_;
}
}
}
}
else
{
lean_dec(v_x_1999_);
return v___y_2362_;
}
}
}
else
{
lean_object* v___x_2395_; 
lean_dec(v___x_2326_);
lean_dec(v_x_1999_);
lean_dec_ref(v_text_1998_);
v___x_2395_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2395_;
}
}
else
{
lean_object* v___x_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; 
v___x_2396_ = lean_unsigned_to_nat(4u);
v___x_2397_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2396_);
v___x_2398_ = l_Lean_Syntax_matchesNull(v___x_2397_, v___x_2245_);
if (v___x_2398_ == 0)
{
lean_object* v___x_2399_; lean_object* v___x_2400_; uint8_t v___x_2401_; 
lean_dec(v___x_2248_);
v___x_2399_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds));
lean_inc(v_x_1999_);
v___x_2400_ = l_Lean_Syntax_getKind(v_x_1999_);
v___x_2401_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2399_, v___x_2400_);
if (v___x_2401_ == 0)
{
lean_object* v___x_2402_; uint8_t v___x_2403_; lean_object* v___y_2405_; lean_object* v___y_2406_; uint8_t v___y_2407_; lean_object* v___y_2421_; lean_object* v___y_2422_; uint32_t v___y_2423_; lean_object* v___y_2428_; lean_object* v___y_2429_; uint32_t v___y_2430_; lean_object* v___y_2436_; 
v___x_2402_ = ((lean_object*)(l_Lean_Server_FileWorker_docKinds));
v___x_2403_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2402_, v___x_2400_);
lean_dec(v___x_2400_);
if (v___x_2403_ == 0)
{
lean_object* v___x_2450_; uint8_t v___x_2451_; 
v___x_2450_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5));
lean_inc(v_x_1999_);
v___x_2451_ = l_Lean_Syntax_isOfKind(v_x_1999_, v___x_2450_);
if (v___x_2451_ == 0)
{
lean_object* v___x_2452_; size_t v_sz_2453_; size_t v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; uint8_t v___x_2458_; 
v___x_2452_ = l_Lean_Syntax_getArgs(v_x_1999_);
v_sz_2453_ = lean_array_size(v___x_2452_);
v___x_2454_ = ((size_t)0ULL);
v___x_2455_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_1998_, v_sz_2453_, v___x_2454_, v___x_2452_);
v___x_2456_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6));
v___x_2457_ = lean_array_get_size(v___x_2455_);
v___x_2458_ = lean_nat_dec_lt(v___x_2245_, v___x_2457_);
if (v___x_2458_ == 0)
{
lean_dec_ref(v___x_2455_);
v___y_2436_ = v___x_2456_;
goto v___jp_2435_;
}
else
{
size_t v___x_2459_; lean_object* v___x_2460_; 
v___x_2459_ = lean_usize_of_nat(v___x_2457_);
v___x_2460_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v___x_2455_, v___x_2454_, v___x_2459_, v___x_2456_);
lean_dec_ref(v___x_2455_);
v___y_2436_ = v___x_2460_;
goto v___jp_2435_;
}
}
else
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2245_);
v___x_2462_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_1998_, v___x_2461_);
v___y_2436_ = v___x_2462_;
goto v___jp_2435_;
}
}
else
{
lean_object* v___x_2463_; lean_object* v___x_2464_; uint8_t v___x_2465_; 
v___x_2463_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2246_);
lean_dec(v_x_1999_);
v___x_2464_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8));
lean_inc(v___x_2463_);
v___x_2465_ = l_Lean_Syntax_isOfKind(v___x_2463_, v___x_2464_);
if (v___x_2465_ == 0)
{
lean_object* v___x_2466_; 
lean_dec(v___x_2463_);
lean_dec_ref(v_text_1998_);
v___x_2466_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2466_;
}
else
{
lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2467_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens), 2, 1);
lean_closure_set(v___x_2467_, 0, v_text_1998_);
v___x_2468_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(v___x_2463_, v___x_2467_);
return v___x_2468_;
}
}
v___jp_2404_:
{
lean_object* v___x_2408_; 
lean_inc_ref(v___y_2405_);
v___x_2408_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v___y_2405_);
if (lean_obj_tag(v___x_2408_) == 0)
{
v___y_2111_ = v___y_2407_;
v___y_2112_ = v___y_2405_;
v___y_2113_ = v___y_2406_;
v___y_2114_ = v___x_2403_;
goto v___jp_2110_;
}
else
{
lean_object* v_val_2409_; lean_object* v___x_2410_; 
v_val_2409_ = lean_ctor_get(v___x_2408_, 0);
lean_inc(v_val_2409_);
lean_dec_ref_known(v___x_2408_, 1);
v___x_2410_ = l_String_Slice_Pos_get_x3f(v_val_2409_, v___x_2245_);
lean_dec(v_val_2409_);
if (lean_obj_tag(v___x_2410_) == 0)
{
v___y_2111_ = v___y_2407_;
v___y_2112_ = v___y_2405_;
v___y_2113_ = v___y_2406_;
v___y_2114_ = v___x_2403_;
goto v___jp_2110_;
}
else
{
lean_object* v_val_2411_; uint32_t v___x_2412_; uint32_t v___x_2413_; uint8_t v___x_2414_; 
v_val_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_val_2411_);
lean_dec_ref_known(v___x_2410_, 1);
v___x_2412_ = 65;
v___x_2413_ = lean_unbox_uint32(v_val_2411_);
v___x_2414_ = lean_uint32_dec_le(v___x_2412_, v___x_2413_);
if (v___x_2414_ == 0)
{
uint32_t v___x_2415_; 
v___x_2415_ = lean_unbox_uint32(v_val_2411_);
lean_dec(v_val_2411_);
v___y_2124_ = v___y_2407_;
v___y_2125_ = v___x_2415_;
v___y_2126_ = v___y_2405_;
v___y_2127_ = v___y_2406_;
goto v___jp_2123_;
}
else
{
uint32_t v___x_2416_; uint32_t v___x_2417_; uint8_t v___x_2418_; 
v___x_2416_ = 90;
v___x_2417_ = lean_unbox_uint32(v_val_2411_);
v___x_2418_ = lean_uint32_dec_le(v___x_2417_, v___x_2416_);
if (v___x_2418_ == 0)
{
uint32_t v___x_2419_; 
v___x_2419_ = lean_unbox_uint32(v_val_2411_);
lean_dec(v_val_2411_);
v___y_2124_ = v___y_2407_;
v___y_2125_ = v___x_2419_;
v___y_2126_ = v___y_2405_;
v___y_2127_ = v___y_2406_;
goto v___jp_2123_;
}
else
{
lean_dec(v_val_2411_);
v___y_2111_ = v___y_2407_;
v___y_2112_ = v___y_2405_;
v___y_2113_ = v___y_2406_;
v___y_2114_ = v___x_2418_;
goto v___jp_2110_;
}
}
}
}
}
v___jp_2420_:
{
uint32_t v___x_2424_; uint8_t v___x_2425_; 
v___x_2424_ = 95;
v___x_2425_ = lean_uint32_dec_eq(v___y_2423_, v___x_2424_);
if (v___x_2425_ == 0)
{
uint8_t v___x_2426_; 
v___x_2426_ = l_Lean_isLetterLike(v___y_2423_);
v___y_2405_ = v___y_2421_;
v___y_2406_ = v___y_2422_;
v___y_2407_ = v___x_2426_;
goto v___jp_2404_;
}
else
{
v___y_2405_ = v___y_2421_;
v___y_2406_ = v___y_2422_;
v___y_2407_ = v___x_2425_;
goto v___jp_2404_;
}
}
v___jp_2427_:
{
uint32_t v___x_2431_; uint8_t v___x_2432_; 
v___x_2431_ = 97;
v___x_2432_ = lean_uint32_dec_le(v___x_2431_, v___y_2430_);
if (v___x_2432_ == 0)
{
v___y_2421_ = v___y_2428_;
v___y_2422_ = v___y_2429_;
v___y_2423_ = v___y_2430_;
goto v___jp_2420_;
}
else
{
uint32_t v___x_2433_; uint8_t v___x_2434_; 
v___x_2433_ = 122;
v___x_2434_ = lean_uint32_dec_le(v___y_2430_, v___x_2433_);
if (v___x_2434_ == 0)
{
v___y_2421_ = v___y_2428_;
v___y_2422_ = v___y_2429_;
v___y_2423_ = v___y_2430_;
goto v___jp_2420_;
}
else
{
v___y_2405_ = v___y_2428_;
v___y_2406_ = v___y_2429_;
v___y_2407_ = v___x_2434_;
goto v___jp_2404_;
}
}
}
v___jp_2435_:
{
if (lean_obj_tag(v_x_1999_) == 2)
{
lean_object* v_val_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v_val_2437_ = lean_ctor_get(v_x_1999_, 1);
v___x_2438_ = lean_string_utf8_byte_size(v_val_2437_);
lean_inc_ref(v_val_2437_);
v___x_2439_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2439_, 0, v_val_2437_);
lean_ctor_set(v___x_2439_, 1, v___x_2245_);
lean_ctor_set(v___x_2439_, 2, v___x_2438_);
v___x_2440_ = l_String_Slice_Pos_get_x3f(v___x_2439_, v___x_2245_);
lean_dec_ref_known(v___x_2439_, 3);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_inc_ref(v_val_2437_);
v___y_2405_ = v_val_2437_;
v___y_2406_ = v___y_2436_;
v___y_2407_ = v___x_2403_;
goto v___jp_2404_;
}
else
{
lean_object* v_val_2441_; uint32_t v___x_2442_; uint32_t v___x_2443_; uint8_t v___x_2444_; 
v_val_2441_ = lean_ctor_get(v___x_2440_, 0);
lean_inc(v_val_2441_);
lean_dec_ref_known(v___x_2440_, 1);
v___x_2442_ = 65;
v___x_2443_ = lean_unbox_uint32(v_val_2441_);
v___x_2444_ = lean_uint32_dec_le(v___x_2442_, v___x_2443_);
if (v___x_2444_ == 0)
{
uint32_t v___x_2445_; 
v___x_2445_ = lean_unbox_uint32(v_val_2441_);
lean_dec(v_val_2441_);
lean_inc_ref(v_val_2437_);
v___y_2428_ = v_val_2437_;
v___y_2429_ = v___y_2436_;
v___y_2430_ = v___x_2445_;
goto v___jp_2427_;
}
else
{
uint32_t v___x_2446_; uint32_t v___x_2447_; uint8_t v___x_2448_; 
v___x_2446_ = 90;
v___x_2447_ = lean_unbox_uint32(v_val_2441_);
v___x_2448_ = lean_uint32_dec_le(v___x_2447_, v___x_2446_);
if (v___x_2448_ == 0)
{
uint32_t v___x_2449_; 
v___x_2449_ = lean_unbox_uint32(v_val_2441_);
lean_dec(v_val_2441_);
lean_inc_ref(v_val_2437_);
v___y_2428_ = v_val_2437_;
v___y_2429_ = v___y_2436_;
v___y_2430_ = v___x_2449_;
goto v___jp_2427_;
}
else
{
lean_dec(v_val_2441_);
lean_inc_ref(v_val_2437_);
v___y_2405_ = v_val_2437_;
v___y_2406_ = v___y_2436_;
v___y_2407_ = v___x_2448_;
goto v___jp_2404_;
}
}
}
}
else
{
lean_dec(v_x_1999_);
return v___y_2436_;
}
}
}
else
{
lean_object* v___x_2469_; 
lean_dec(v___x_2400_);
lean_dec(v_x_1999_);
lean_dec_ref(v_text_1998_);
v___x_2469_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2469_;
}
}
else
{
lean_object* v___x_2470_; lean_object* v_tokens_2471_; uint8_t v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2470_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2245_);
lean_dec(v_x_1999_);
v_tokens_2471_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_1998_, v___x_2470_);
v___x_2472_ = 2;
v___x_2473_ = lean_unsigned_to_nat(5u);
v___x_2474_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2474_, 0, v___x_2248_);
lean_ctor_set(v___x_2474_, 1, v___x_2473_);
lean_ctor_set_uint8(v___x_2474_, sizeof(void*)*2, v___x_2472_);
v___x_2475_ = lean_array_push(v_tokens_2471_, v___x_2474_);
return v___x_2475_;
}
}
}
}
}
else
{
lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; uint8_t v___x_2480_; 
v___x_2476_ = lean_unsigned_to_nat(0u);
v___x_2477_ = lean_unsigned_to_nat(2u);
v___x_2478_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2477_);
v___x_2479_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__10));
lean_inc(v___x_2478_);
v___x_2480_ = l_Lean_Syntax_isOfKind(v___x_2478_, v___x_2479_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; lean_object* v___x_2482_; uint8_t v___x_2483_; 
lean_dec(v___x_2478_);
v___x_2481_ = ((lean_object*)(l_Lean_Server_FileWorker_noHighlightKinds));
lean_inc(v_x_1999_);
v___x_2482_ = l_Lean_Syntax_getKind(v_x_1999_);
v___x_2483_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2481_, v___x_2482_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; uint8_t v___x_2485_; lean_object* v___y_2487_; lean_object* v___y_2488_; uint8_t v___y_2489_; lean_object* v___y_2503_; lean_object* v___y_2504_; uint32_t v___y_2505_; lean_object* v___y_2510_; lean_object* v___y_2511_; uint32_t v___y_2512_; lean_object* v___y_2518_; 
v___x_2484_ = ((lean_object*)(l_Lean_Server_FileWorker_docKinds));
v___x_2485_ = l_Array_contains___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__0(v___x_2484_, v___x_2482_);
lean_dec(v___x_2482_);
if (v___x_2485_ == 0)
{
lean_object* v___x_2532_; uint8_t v___x_2533_; 
v___x_2532_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__5));
lean_inc(v_x_1999_);
v___x_2533_ = l_Lean_Syntax_isOfKind(v_x_1999_, v___x_2532_);
if (v___x_2533_ == 0)
{
lean_object* v___x_2534_; size_t v_sz_2535_; size_t v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; uint8_t v___x_2540_; 
v___x_2534_ = l_Lean_Syntax_getArgs(v_x_1999_);
v_sz_2535_ = lean_array_size(v___x_2534_);
v___x_2536_ = ((size_t)0ULL);
v___x_2537_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_1998_, v_sz_2535_, v___x_2536_, v___x_2534_);
v___x_2538_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__6));
v___x_2539_ = lean_array_get_size(v___x_2537_);
v___x_2540_ = lean_nat_dec_lt(v___x_2476_, v___x_2539_);
if (v___x_2540_ == 0)
{
lean_dec_ref(v___x_2537_);
v___y_2518_ = v___x_2538_;
goto v___jp_2517_;
}
else
{
size_t v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = lean_usize_of_nat(v___x_2539_);
v___x_2542_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__4(v___x_2537_, v___x_2536_, v___x_2541_, v___x_2538_);
lean_dec_ref(v___x_2537_);
v___y_2518_ = v___x_2542_;
goto v___jp_2517_;
}
}
else
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2476_);
v___x_2544_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_1998_, v___x_2543_);
v___y_2518_ = v___x_2544_;
goto v___jp_2517_;
}
}
else
{
lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; uint8_t v___x_2548_; 
v___x_2545_ = lean_unsigned_to_nat(1u);
v___x_2546_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2545_);
lean_dec(v_x_1999_);
v___x_2547_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__8));
lean_inc(v___x_2546_);
v___x_2548_ = l_Lean_Syntax_isOfKind(v___x_2546_, v___x_2547_);
if (v___x_2548_ == 0)
{
lean_object* v___x_2549_; 
lean_dec(v___x_2546_);
lean_dec_ref(v_text_1998_);
v___x_2549_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2549_;
}
else
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens), 2, 1);
lean_closure_set(v___x_2550_, 0, v_text_1998_);
v___x_2551_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens(v___x_2546_, v___x_2550_);
return v___x_2551_;
}
}
v___jp_2486_:
{
lean_object* v___x_2490_; 
lean_inc_ref(v___y_2488_);
v___x_2490_ = l_String_dropPrefix_x3f___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__2___redArg(v___y_2488_);
if (lean_obj_tag(v___x_2490_) == 0)
{
v___y_2144_ = v___y_2487_;
v___y_2145_ = v___y_2488_;
v___y_2146_ = v___y_2489_;
v___y_2147_ = v___x_2485_;
goto v___jp_2143_;
}
else
{
lean_object* v_val_2491_; lean_object* v___x_2492_; 
v_val_2491_ = lean_ctor_get(v___x_2490_, 0);
lean_inc(v_val_2491_);
lean_dec_ref_known(v___x_2490_, 1);
v___x_2492_ = l_String_Slice_Pos_get_x3f(v_val_2491_, v___x_2476_);
lean_dec(v_val_2491_);
if (lean_obj_tag(v___x_2492_) == 0)
{
v___y_2144_ = v___y_2487_;
v___y_2145_ = v___y_2488_;
v___y_2146_ = v___y_2489_;
v___y_2147_ = v___x_2485_;
goto v___jp_2143_;
}
else
{
lean_object* v_val_2493_; uint32_t v___x_2494_; uint32_t v___x_2495_; uint8_t v___x_2496_; 
v_val_2493_ = lean_ctor_get(v___x_2492_, 0);
lean_inc(v_val_2493_);
lean_dec_ref_known(v___x_2492_, 1);
v___x_2494_ = 65;
v___x_2495_ = lean_unbox_uint32(v_val_2493_);
v___x_2496_ = lean_uint32_dec_le(v___x_2494_, v___x_2495_);
if (v___x_2496_ == 0)
{
uint32_t v___x_2497_; 
v___x_2497_ = lean_unbox_uint32(v_val_2493_);
lean_dec(v_val_2493_);
v___y_2157_ = v___y_2487_;
v___y_2158_ = v___x_2497_;
v___y_2159_ = v___y_2488_;
v___y_2160_ = v___y_2489_;
goto v___jp_2156_;
}
else
{
uint32_t v___x_2498_; uint32_t v___x_2499_; uint8_t v___x_2500_; 
v___x_2498_ = 90;
v___x_2499_ = lean_unbox_uint32(v_val_2493_);
v___x_2500_ = lean_uint32_dec_le(v___x_2499_, v___x_2498_);
if (v___x_2500_ == 0)
{
uint32_t v___x_2501_; 
v___x_2501_ = lean_unbox_uint32(v_val_2493_);
lean_dec(v_val_2493_);
v___y_2157_ = v___y_2487_;
v___y_2158_ = v___x_2501_;
v___y_2159_ = v___y_2488_;
v___y_2160_ = v___y_2489_;
goto v___jp_2156_;
}
else
{
lean_dec(v_val_2493_);
v___y_2144_ = v___y_2487_;
v___y_2145_ = v___y_2488_;
v___y_2146_ = v___y_2489_;
v___y_2147_ = v___x_2500_;
goto v___jp_2143_;
}
}
}
}
}
v___jp_2502_:
{
uint32_t v___x_2506_; uint8_t v___x_2507_; 
v___x_2506_ = 95;
v___x_2507_ = lean_uint32_dec_eq(v___y_2505_, v___x_2506_);
if (v___x_2507_ == 0)
{
uint8_t v___x_2508_; 
v___x_2508_ = l_Lean_isLetterLike(v___y_2505_);
v___y_2487_ = v___y_2503_;
v___y_2488_ = v___y_2504_;
v___y_2489_ = v___x_2508_;
goto v___jp_2486_;
}
else
{
v___y_2487_ = v___y_2503_;
v___y_2488_ = v___y_2504_;
v___y_2489_ = v___x_2507_;
goto v___jp_2486_;
}
}
v___jp_2509_:
{
uint32_t v___x_2513_; uint8_t v___x_2514_; 
v___x_2513_ = 97;
v___x_2514_ = lean_uint32_dec_le(v___x_2513_, v___y_2512_);
if (v___x_2514_ == 0)
{
v___y_2503_ = v___y_2510_;
v___y_2504_ = v___y_2511_;
v___y_2505_ = v___y_2512_;
goto v___jp_2502_;
}
else
{
uint32_t v___x_2515_; uint8_t v___x_2516_; 
v___x_2515_ = 122;
v___x_2516_ = lean_uint32_dec_le(v___y_2512_, v___x_2515_);
if (v___x_2516_ == 0)
{
v___y_2503_ = v___y_2510_;
v___y_2504_ = v___y_2511_;
v___y_2505_ = v___y_2512_;
goto v___jp_2502_;
}
else
{
v___y_2487_ = v___y_2510_;
v___y_2488_ = v___y_2511_;
v___y_2489_ = v___x_2516_;
goto v___jp_2486_;
}
}
}
v___jp_2517_:
{
if (lean_obj_tag(v_x_1999_) == 2)
{
lean_object* v_val_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
v_val_2519_ = lean_ctor_get(v_x_1999_, 1);
v___x_2520_ = lean_string_utf8_byte_size(v_val_2519_);
lean_inc_ref(v_val_2519_);
v___x_2521_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2521_, 0, v_val_2519_);
lean_ctor_set(v___x_2521_, 1, v___x_2476_);
lean_ctor_set(v___x_2521_, 2, v___x_2520_);
v___x_2522_ = l_String_Slice_Pos_get_x3f(v___x_2521_, v___x_2476_);
lean_dec_ref_known(v___x_2521_, 3);
if (lean_obj_tag(v___x_2522_) == 0)
{
lean_inc_ref(v_val_2519_);
v___y_2487_ = v___y_2518_;
v___y_2488_ = v_val_2519_;
v___y_2489_ = v___x_2485_;
goto v___jp_2486_;
}
else
{
lean_object* v_val_2523_; uint32_t v___x_2524_; uint32_t v___x_2525_; uint8_t v___x_2526_; 
v_val_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc(v_val_2523_);
lean_dec_ref_known(v___x_2522_, 1);
v___x_2524_ = 65;
v___x_2525_ = lean_unbox_uint32(v_val_2523_);
v___x_2526_ = lean_uint32_dec_le(v___x_2524_, v___x_2525_);
if (v___x_2526_ == 0)
{
uint32_t v___x_2527_; 
v___x_2527_ = lean_unbox_uint32(v_val_2523_);
lean_dec(v_val_2523_);
lean_inc_ref(v_val_2519_);
v___y_2510_ = v___y_2518_;
v___y_2511_ = v_val_2519_;
v___y_2512_ = v___x_2527_;
goto v___jp_2509_;
}
else
{
uint32_t v___x_2528_; uint32_t v___x_2529_; uint8_t v___x_2530_; 
v___x_2528_ = 90;
v___x_2529_ = lean_unbox_uint32(v_val_2523_);
v___x_2530_ = lean_uint32_dec_le(v___x_2529_, v___x_2528_);
if (v___x_2530_ == 0)
{
uint32_t v___x_2531_; 
v___x_2531_ = lean_unbox_uint32(v_val_2523_);
lean_dec(v_val_2523_);
lean_inc_ref(v_val_2519_);
v___y_2510_ = v___y_2518_;
v___y_2511_ = v_val_2519_;
v___y_2512_ = v___x_2531_;
goto v___jp_2509_;
}
else
{
lean_dec(v_val_2523_);
lean_inc_ref(v_val_2519_);
v___y_2487_ = v___y_2518_;
v___y_2488_ = v_val_2519_;
v___y_2489_ = v___x_2530_;
goto v___jp_2486_;
}
}
}
}
else
{
lean_dec(v_x_1999_);
return v___y_2518_;
}
}
}
else
{
lean_object* v___x_2552_; 
lean_dec(v___x_2482_);
lean_dec(v_x_1999_);
lean_dec_ref(v_text_1998_);
v___x_2552_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
return v___x_2552_;
}
}
else
{
lean_object* v___x_2553_; lean_object* v_tokens_2554_; uint8_t v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2553_ = l_Lean_Syntax_getArg(v_x_1999_, v___x_2476_);
lean_dec(v_x_1999_);
v_tokens_2554_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_1998_, v___x_2553_);
v___x_2555_ = 2;
v___x_2556_ = lean_unsigned_to_nat(5u);
v___x_2557_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2557_, 0, v___x_2478_);
lean_ctor_set(v___x_2557_, 1, v___x_2556_);
lean_ctor_set_uint8(v___x_2557_, sizeof(void*)*2, v___x_2555_);
v___x_2558_ = lean_array_push(v_tokens_2554_, v___x_2557_);
return v___x_2558_;
}
}
v___jp_2000_:
{
lean_object* v___x_2003_; uint8_t v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; uint8_t v___x_2009_; lean_object* v___x_2010_; 
v___x_2003_ = l_Lean_Server_FileWorker_keywordSemanticTokenMap;
v___x_2004_ = 0;
v___x_2005_ = lean_box(v___x_2004_);
v___x_2006_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v___x_2003_, v___y_2001_, v___x_2005_);
lean_dec(v___x_2005_);
lean_dec_ref(v___y_2001_);
v___x_2007_ = lean_unsigned_to_nat(5u);
v___x_2008_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2008_, 0, v_x_1999_);
lean_ctor_set(v___x_2008_, 1, v___x_2007_);
v___x_2009_ = lean_unbox(v___x_2006_);
lean_dec(v___x_2006_);
lean_ctor_set_uint8(v___x_2008_, sizeof(void*)*2, v___x_2009_);
v___x_2010_ = lean_array_push(v___y_2002_, v___x_2008_);
return v___x_2010_;
}
v___jp_2011_:
{
if (v___y_2014_ == 0)
{
if (v___y_2015_ == 0)
{
lean_dec_ref(v___y_2012_);
lean_dec(v_x_1999_);
return v___y_2013_;
}
else
{
v___y_2001_ = v___y_2012_;
v___y_2002_ = v___y_2013_;
goto v___jp_2000_;
}
}
else
{
v___y_2001_ = v___y_2012_;
v___y_2002_ = v___y_2013_;
goto v___jp_2000_;
}
}
v___jp_2016_:
{
uint32_t v___x_2021_; uint8_t v___x_2022_; 
v___x_2021_ = 95;
v___x_2022_ = lean_uint32_dec_eq(v___y_2020_, v___x_2021_);
if (v___x_2022_ == 0)
{
uint8_t v___x_2023_; 
v___x_2023_ = l_Lean_isLetterLike(v___y_2020_);
v___y_2012_ = v___y_2017_;
v___y_2013_ = v___y_2018_;
v___y_2014_ = v___y_2019_;
v___y_2015_ = v___x_2023_;
goto v___jp_2011_;
}
else
{
v___y_2012_ = v___y_2017_;
v___y_2013_ = v___y_2018_;
v___y_2014_ = v___y_2019_;
v___y_2015_ = v___x_2022_;
goto v___jp_2011_;
}
}
v___jp_2024_:
{
uint32_t v___x_2029_; uint8_t v___x_2030_; 
v___x_2029_ = 97;
v___x_2030_ = lean_uint32_dec_le(v___x_2029_, v___y_2028_);
if (v___x_2030_ == 0)
{
v___y_2017_ = v___y_2025_;
v___y_2018_ = v___y_2026_;
v___y_2019_ = v___y_2027_;
v___y_2020_ = v___y_2028_;
goto v___jp_2016_;
}
else
{
uint32_t v___x_2031_; uint8_t v___x_2032_; 
v___x_2031_ = 122;
v___x_2032_ = lean_uint32_dec_le(v___y_2028_, v___x_2031_);
if (v___x_2032_ == 0)
{
v___y_2017_ = v___y_2025_;
v___y_2018_ = v___y_2026_;
v___y_2019_ = v___y_2027_;
v___y_2020_ = v___y_2028_;
goto v___jp_2016_;
}
else
{
v___y_2012_ = v___y_2025_;
v___y_2013_ = v___y_2026_;
v___y_2014_ = v___y_2027_;
v___y_2015_ = v___x_2032_;
goto v___jp_2011_;
}
}
}
v___jp_2033_:
{
lean_object* v___x_2036_; uint8_t v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; lean_object* v___x_2043_; 
v___x_2036_ = l_Lean_Server_FileWorker_keywordSemanticTokenMap;
v___x_2037_ = 0;
v___x_2038_ = lean_box(v___x_2037_);
v___x_2039_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v___x_2036_, v___y_2034_, v___x_2038_);
lean_dec(v___x_2038_);
lean_dec_ref(v___y_2034_);
v___x_2040_ = lean_unsigned_to_nat(5u);
v___x_2041_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2041_, 0, v_x_1999_);
lean_ctor_set(v___x_2041_, 1, v___x_2040_);
v___x_2042_ = lean_unbox(v___x_2039_);
lean_dec(v___x_2039_);
lean_ctor_set_uint8(v___x_2041_, sizeof(void*)*2, v___x_2042_);
v___x_2043_ = lean_array_push(v___y_2035_, v___x_2041_);
return v___x_2043_;
}
v___jp_2044_:
{
if (v___y_2045_ == 0)
{
if (v___y_2048_ == 0)
{
lean_dec_ref(v___y_2046_);
lean_dec(v_x_1999_);
return v___y_2047_;
}
else
{
v___y_2034_ = v___y_2046_;
v___y_2035_ = v___y_2047_;
goto v___jp_2033_;
}
}
else
{
v___y_2034_ = v___y_2046_;
v___y_2035_ = v___y_2047_;
goto v___jp_2033_;
}
}
v___jp_2049_:
{
uint32_t v___x_2054_; uint8_t v___x_2055_; 
v___x_2054_ = 95;
v___x_2055_ = lean_uint32_dec_eq(v___y_2051_, v___x_2054_);
if (v___x_2055_ == 0)
{
uint8_t v___x_2056_; 
v___x_2056_ = l_Lean_isLetterLike(v___y_2051_);
v___y_2045_ = v___y_2050_;
v___y_2046_ = v___y_2052_;
v___y_2047_ = v___y_2053_;
v___y_2048_ = v___x_2056_;
goto v___jp_2044_;
}
else
{
v___y_2045_ = v___y_2050_;
v___y_2046_ = v___y_2052_;
v___y_2047_ = v___y_2053_;
v___y_2048_ = v___x_2055_;
goto v___jp_2044_;
}
}
v___jp_2057_:
{
uint32_t v___x_2062_; uint8_t v___x_2063_; 
v___x_2062_ = 97;
v___x_2063_ = lean_uint32_dec_le(v___x_2062_, v___y_2059_);
if (v___x_2063_ == 0)
{
v___y_2050_ = v___y_2058_;
v___y_2051_ = v___y_2059_;
v___y_2052_ = v___y_2060_;
v___y_2053_ = v___y_2061_;
goto v___jp_2049_;
}
else
{
uint32_t v___x_2064_; uint8_t v___x_2065_; 
v___x_2064_ = 122;
v___x_2065_ = lean_uint32_dec_le(v___y_2059_, v___x_2064_);
if (v___x_2065_ == 0)
{
v___y_2050_ = v___y_2058_;
v___y_2051_ = v___y_2059_;
v___y_2052_ = v___y_2060_;
v___y_2053_ = v___y_2061_;
goto v___jp_2049_;
}
else
{
v___y_2045_ = v___y_2058_;
v___y_2046_ = v___y_2060_;
v___y_2047_ = v___y_2061_;
v___y_2048_ = v___x_2065_;
goto v___jp_2044_;
}
}
}
v___jp_2066_:
{
lean_object* v___x_2069_; uint8_t v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; uint8_t v___x_2075_; lean_object* v___x_2076_; 
v___x_2069_ = l_Lean_Server_FileWorker_keywordSemanticTokenMap;
v___x_2070_ = 0;
v___x_2071_ = lean_box(v___x_2070_);
v___x_2072_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v___x_2069_, v___y_2067_, v___x_2071_);
lean_dec(v___x_2071_);
lean_dec_ref(v___y_2067_);
v___x_2073_ = lean_unsigned_to_nat(5u);
v___x_2074_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2074_, 0, v_x_1999_);
lean_ctor_set(v___x_2074_, 1, v___x_2073_);
v___x_2075_ = lean_unbox(v___x_2072_);
lean_dec(v___x_2072_);
lean_ctor_set_uint8(v___x_2074_, sizeof(void*)*2, v___x_2075_);
v___x_2076_ = lean_array_push(v___y_2068_, v___x_2074_);
return v___x_2076_;
}
v___jp_2077_:
{
if (v___y_2078_ == 0)
{
if (v___y_2081_ == 0)
{
lean_dec_ref(v___y_2079_);
lean_dec(v_x_1999_);
return v___y_2080_;
}
else
{
v___y_2067_ = v___y_2079_;
v___y_2068_ = v___y_2080_;
goto v___jp_2066_;
}
}
else
{
v___y_2067_ = v___y_2079_;
v___y_2068_ = v___y_2080_;
goto v___jp_2066_;
}
}
v___jp_2082_:
{
uint32_t v___x_2087_; uint8_t v___x_2088_; 
v___x_2087_ = 95;
v___x_2088_ = lean_uint32_dec_eq(v___y_2084_, v___x_2087_);
if (v___x_2088_ == 0)
{
uint8_t v___x_2089_; 
v___x_2089_ = l_Lean_isLetterLike(v___y_2084_);
v___y_2078_ = v___y_2083_;
v___y_2079_ = v___y_2085_;
v___y_2080_ = v___y_2086_;
v___y_2081_ = v___x_2089_;
goto v___jp_2077_;
}
else
{
v___y_2078_ = v___y_2083_;
v___y_2079_ = v___y_2085_;
v___y_2080_ = v___y_2086_;
v___y_2081_ = v___x_2088_;
goto v___jp_2077_;
}
}
v___jp_2090_:
{
uint32_t v___x_2095_; uint8_t v___x_2096_; 
v___x_2095_ = 97;
v___x_2096_ = lean_uint32_dec_le(v___x_2095_, v___y_2092_);
if (v___x_2096_ == 0)
{
v___y_2083_ = v___y_2091_;
v___y_2084_ = v___y_2092_;
v___y_2085_ = v___y_2093_;
v___y_2086_ = v___y_2094_;
goto v___jp_2082_;
}
else
{
uint32_t v___x_2097_; uint8_t v___x_2098_; 
v___x_2097_ = 122;
v___x_2098_ = lean_uint32_dec_le(v___y_2092_, v___x_2097_);
if (v___x_2098_ == 0)
{
v___y_2083_ = v___y_2091_;
v___y_2084_ = v___y_2092_;
v___y_2085_ = v___y_2093_;
v___y_2086_ = v___y_2094_;
goto v___jp_2082_;
}
else
{
v___y_2078_ = v___y_2091_;
v___y_2079_ = v___y_2093_;
v___y_2080_ = v___y_2094_;
v___y_2081_ = v___x_2098_;
goto v___jp_2077_;
}
}
}
v___jp_2099_:
{
lean_object* v___x_2102_; uint8_t v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; uint8_t v___x_2108_; lean_object* v___x_2109_; 
v___x_2102_ = l_Lean_Server_FileWorker_keywordSemanticTokenMap;
v___x_2103_ = 0;
v___x_2104_ = lean_box(v___x_2103_);
v___x_2105_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v___x_2102_, v___y_2100_, v___x_2104_);
lean_dec(v___x_2104_);
lean_dec_ref(v___y_2100_);
v___x_2106_ = lean_unsigned_to_nat(5u);
v___x_2107_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2107_, 0, v_x_1999_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
v___x_2108_ = lean_unbox(v___x_2105_);
lean_dec(v___x_2105_);
lean_ctor_set_uint8(v___x_2107_, sizeof(void*)*2, v___x_2108_);
v___x_2109_ = lean_array_push(v___y_2101_, v___x_2107_);
return v___x_2109_;
}
v___jp_2110_:
{
if (v___y_2111_ == 0)
{
if (v___y_2114_ == 0)
{
lean_dec_ref(v___y_2112_);
lean_dec(v_x_1999_);
return v___y_2113_;
}
else
{
v___y_2100_ = v___y_2112_;
v___y_2101_ = v___y_2113_;
goto v___jp_2099_;
}
}
else
{
v___y_2100_ = v___y_2112_;
v___y_2101_ = v___y_2113_;
goto v___jp_2099_;
}
}
v___jp_2115_:
{
uint32_t v___x_2120_; uint8_t v___x_2121_; 
v___x_2120_ = 95;
v___x_2121_ = lean_uint32_dec_eq(v___y_2117_, v___x_2120_);
if (v___x_2121_ == 0)
{
uint8_t v___x_2122_; 
v___x_2122_ = l_Lean_isLetterLike(v___y_2117_);
v___y_2111_ = v___y_2116_;
v___y_2112_ = v___y_2118_;
v___y_2113_ = v___y_2119_;
v___y_2114_ = v___x_2122_;
goto v___jp_2110_;
}
else
{
v___y_2111_ = v___y_2116_;
v___y_2112_ = v___y_2118_;
v___y_2113_ = v___y_2119_;
v___y_2114_ = v___x_2121_;
goto v___jp_2110_;
}
}
v___jp_2123_:
{
uint32_t v___x_2128_; uint8_t v___x_2129_; 
v___x_2128_ = 97;
v___x_2129_ = lean_uint32_dec_le(v___x_2128_, v___y_2125_);
if (v___x_2129_ == 0)
{
v___y_2116_ = v___y_2124_;
v___y_2117_ = v___y_2125_;
v___y_2118_ = v___y_2126_;
v___y_2119_ = v___y_2127_;
goto v___jp_2115_;
}
else
{
uint32_t v___x_2130_; uint8_t v___x_2131_; 
v___x_2130_ = 122;
v___x_2131_ = lean_uint32_dec_le(v___y_2125_, v___x_2130_);
if (v___x_2131_ == 0)
{
v___y_2116_ = v___y_2124_;
v___y_2117_ = v___y_2125_;
v___y_2118_ = v___y_2126_;
v___y_2119_ = v___y_2127_;
goto v___jp_2115_;
}
else
{
v___y_2111_ = v___y_2124_;
v___y_2112_ = v___y_2126_;
v___y_2113_ = v___y_2127_;
v___y_2114_ = v___x_2131_;
goto v___jp_2110_;
}
}
}
v___jp_2132_:
{
lean_object* v___x_2135_; uint8_t v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; uint8_t v___x_2141_; lean_object* v___x_2142_; 
v___x_2135_ = l_Lean_Server_FileWorker_keywordSemanticTokenMap;
v___x_2136_ = 0;
v___x_2137_ = lean_box(v___x_2136_);
v___x_2138_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v___x_2135_, v___y_2134_, v___x_2137_);
lean_dec(v___x_2137_);
lean_dec_ref(v___y_2134_);
v___x_2139_ = lean_unsigned_to_nat(5u);
v___x_2140_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2140_, 0, v_x_1999_);
lean_ctor_set(v___x_2140_, 1, v___x_2139_);
v___x_2141_ = lean_unbox(v___x_2138_);
lean_dec(v___x_2138_);
lean_ctor_set_uint8(v___x_2140_, sizeof(void*)*2, v___x_2141_);
v___x_2142_ = lean_array_push(v___y_2133_, v___x_2140_);
return v___x_2142_;
}
v___jp_2143_:
{
if (v___y_2146_ == 0)
{
if (v___y_2147_ == 0)
{
lean_dec_ref(v___y_2145_);
lean_dec(v_x_1999_);
return v___y_2144_;
}
else
{
v___y_2133_ = v___y_2144_;
v___y_2134_ = v___y_2145_;
goto v___jp_2132_;
}
}
else
{
v___y_2133_ = v___y_2144_;
v___y_2134_ = v___y_2145_;
goto v___jp_2132_;
}
}
v___jp_2148_:
{
uint32_t v___x_2153_; uint8_t v___x_2154_; 
v___x_2153_ = 95;
v___x_2154_ = lean_uint32_dec_eq(v___y_2150_, v___x_2153_);
if (v___x_2154_ == 0)
{
uint8_t v___x_2155_; 
v___x_2155_ = l_Lean_isLetterLike(v___y_2150_);
v___y_2144_ = v___y_2149_;
v___y_2145_ = v___y_2151_;
v___y_2146_ = v___y_2152_;
v___y_2147_ = v___x_2155_;
goto v___jp_2143_;
}
else
{
v___y_2144_ = v___y_2149_;
v___y_2145_ = v___y_2151_;
v___y_2146_ = v___y_2152_;
v___y_2147_ = v___x_2154_;
goto v___jp_2143_;
}
}
v___jp_2156_:
{
uint32_t v___x_2161_; uint8_t v___x_2162_; 
v___x_2161_ = 97;
v___x_2162_ = lean_uint32_dec_le(v___x_2161_, v___y_2158_);
if (v___x_2162_ == 0)
{
v___y_2149_ = v___y_2157_;
v___y_2150_ = v___y_2158_;
v___y_2151_ = v___y_2159_;
v___y_2152_ = v___y_2160_;
goto v___jp_2148_;
}
else
{
uint32_t v___x_2163_; uint8_t v___x_2164_; 
v___x_2163_ = 122;
v___x_2164_ = lean_uint32_dec_le(v___y_2158_, v___x_2163_);
if (v___x_2164_ == 0)
{
v___y_2149_ = v___y_2157_;
v___y_2150_ = v___y_2158_;
v___y_2151_ = v___y_2159_;
v___y_2152_ = v___y_2160_;
goto v___jp_2148_;
}
else
{
v___y_2144_ = v___y_2157_;
v___y_2145_ = v___y_2159_;
v___y_2146_ = v___y_2160_;
v___y_2147_ = v___x_2164_;
goto v___jp_2143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(lean_object* v_text_2559_, size_t v_sz_2560_, size_t v_i_2561_, lean_object* v_bs_2562_){
_start:
{
uint8_t v___x_2563_; 
v___x_2563_ = lean_usize_dec_lt(v_i_2561_, v_sz_2560_);
if (v___x_2563_ == 0)
{
lean_dec_ref(v_text_2559_);
return v_bs_2562_;
}
else
{
lean_object* v_v_2564_; lean_object* v___x_2565_; lean_object* v_bs_x27_2566_; lean_object* v___x_2567_; size_t v___x_2568_; size_t v___x_2569_; lean_object* v___x_2570_; 
v_v_2564_ = lean_array_uget(v_bs_2562_, v_i_2561_);
v___x_2565_ = lean_unsigned_to_nat(0u);
v_bs_x27_2566_ = lean_array_uset(v_bs_2562_, v_i_2561_, v___x_2565_);
lean_inc_ref(v_text_2559_);
v___x_2567_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_2559_, v_v_2564_);
v___x_2568_ = ((size_t)1ULL);
v___x_2569_ = lean_usize_add(v_i_2561_, v___x_2568_);
v___x_2570_ = lean_array_uset(v_bs_x27_2566_, v_i_2561_, v___x_2567_);
v_i_2561_ = v___x_2569_;
v_bs_2562_ = v___x_2570_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3___boxed(lean_object* v_text_2572_, lean_object* v_sz_2573_, lean_object* v_i_2574_, lean_object* v_bs_2575_){
_start:
{
size_t v_sz_boxed_2576_; size_t v_i_boxed_2577_; lean_object* v_res_2578_; 
v_sz_boxed_2576_ = lean_unbox_usize(v_sz_2573_);
lean_dec(v_sz_2573_);
v_i_boxed_2577_ = lean_unbox_usize(v_i_2574_);
lean_dec(v_i_2574_);
v_res_2578_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__3(v_text_2572_, v_sz_boxed_2576_, v_i_boxed_2577_, v_bs_2575_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1(lean_object* v_00_u03b4_2579_, lean_object* v_t_2580_, lean_object* v_k_2581_, lean_object* v_fallback_2582_){
_start:
{
lean_object* v___x_2583_; 
v___x_2583_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___redArg(v_t_2580_, v_k_2581_, v_fallback_2582_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1___boxed(lean_object* v_00_u03b4_2584_, lean_object* v_t_2585_, lean_object* v_k_2586_, lean_object* v_fallback_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens_spec__1(v_00_u03b4_2584_, v_t_2585_, v_k_2586_, v_fallback_2587_);
lean_dec(v_fallback_2587_);
lean_dec_ref(v_k_2586_);
lean_dec(v_t_2585_);
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0(lean_object* v_x_2589_, lean_object* v_info_2590_, lean_object* v_x_2591_){
_start:
{
if (lean_obj_tag(v_info_2590_) == 1)
{
lean_object* v_i_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2637_; 
v_i_2592_ = lean_ctor_get(v_info_2590_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v_info_2590_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2594_ = v_info_2590_;
v_isShared_2595_ = v_isSharedCheck_2637_;
goto v_resetjp_2593_;
}
else
{
lean_inc(v_i_2592_);
lean_dec(v_info_2590_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2637_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
lean_object* v_toElabInfo_2596_; lean_object* v_lctx_2597_; lean_object* v_expr_2598_; uint8_t v_isBinder_2599_; lean_object* v_stx_2600_; lean_object* v___x_2612_; 
v_toElabInfo_2596_ = lean_ctor_get(v_i_2592_, 0);
lean_inc_ref(v_toElabInfo_2596_);
v_lctx_2597_ = lean_ctor_get(v_i_2592_, 1);
lean_inc_ref(v_lctx_2597_);
v_expr_2598_ = lean_ctor_get(v_i_2592_, 3);
lean_inc_ref(v_expr_2598_);
v_isBinder_2599_ = lean_ctor_get_uint8(v_i_2592_, sizeof(void*)*4);
lean_dec_ref(v_i_2592_);
v_stx_2600_ = lean_ctor_get(v_toElabInfo_2596_, 1);
lean_inc(v_stx_2600_);
lean_dec_ref(v_toElabInfo_2596_);
v___x_2612_ = l_Lean_Syntax_getHeadInfo(v_stx_2600_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v___x_2613_; uint8_t v___x_2614_; 
lean_dec_ref_known(v___x_2612_, 4);
v___x_2613_ = ((lean_object*)(l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens___closed__10));
lean_inc(v_stx_2600_);
v___x_2614_ = l_Lean_Syntax_isOfKind(v_stx_2600_, v___x_2613_);
if (v___x_2614_ == 0)
{
lean_dec_ref(v_expr_2598_);
lean_dec_ref(v_lctx_2597_);
goto v___jp_2601_;
}
else
{
if (lean_obj_tag(v_expr_2598_) == 1)
{
lean_object* v_fvarId_2615_; lean_object* v___x_2616_; 
v_fvarId_2615_ = lean_ctor_get(v_expr_2598_, 0);
lean_inc(v_fvarId_2615_);
lean_dec_ref_known(v_expr_2598_, 1);
v___x_2616_ = lean_local_ctx_find(v_lctx_2597_, v_fvarId_2615_);
if (lean_obj_tag(v___x_2616_) == 1)
{
lean_object* v_val_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2635_; 
v_val_2617_ = lean_ctor_get(v___x_2616_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2619_ = v___x_2616_;
v_isShared_2620_ = v_isSharedCheck_2635_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_val_2617_);
lean_dec(v___x_2616_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2635_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
uint8_t v___x_2621_; 
v___x_2621_ = l_Lean_LocalDecl_isAuxDecl(v_val_2617_);
if (v___x_2621_ == 0)
{
uint8_t v___x_2622_; 
v___x_2622_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2617_);
lean_dec(v_val_2617_);
if (v___x_2622_ == 0)
{
uint8_t v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2627_; 
lean_del_object(v___x_2594_);
v___x_2623_ = 1;
v___x_2624_ = lean_unsigned_to_nat(5u);
v___x_2625_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2625_, 0, v_stx_2600_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
lean_ctor_set_uint8(v___x_2625_, sizeof(void*)*2, v___x_2623_);
if (v_isShared_2620_ == 0)
{
lean_ctor_set(v___x_2619_, 0, v___x_2625_);
v___x_2627_ = v___x_2619_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v___x_2625_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
else
{
lean_del_object(v___x_2619_);
goto v___jp_2601_;
}
}
else
{
lean_dec(v_val_2617_);
if (v_isBinder_2599_ == 0)
{
lean_del_object(v___x_2619_);
goto v___jp_2601_;
}
else
{
uint8_t v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2633_; 
lean_del_object(v___x_2594_);
v___x_2629_ = 3;
v___x_2630_ = lean_unsigned_to_nat(5u);
v___x_2631_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2631_, 0, v_stx_2600_);
lean_ctor_set(v___x_2631_, 1, v___x_2630_);
lean_ctor_set_uint8(v___x_2631_, sizeof(void*)*2, v___x_2629_);
if (v_isShared_2620_ == 0)
{
lean_ctor_set(v___x_2619_, 0, v___x_2631_);
v___x_2633_ = v___x_2619_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v___x_2631_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
}
else
{
lean_dec(v___x_2616_);
goto v___jp_2601_;
}
}
else
{
lean_dec_ref(v_expr_2598_);
lean_dec_ref(v_lctx_2597_);
goto v___jp_2601_;
}
}
}
else
{
lean_object* v___x_2636_; 
lean_dec(v___x_2612_);
lean_dec(v_stx_2600_);
lean_dec_ref(v_expr_2598_);
lean_dec_ref(v_lctx_2597_);
lean_del_object(v___x_2594_);
v___x_2636_ = lean_box(0);
return v___x_2636_;
}
v___jp_2601_:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; uint8_t v___x_2604_; 
lean_inc(v_stx_2600_);
v___x_2602_ = l_Lean_Syntax_getKind(v_stx_2600_);
v___x_2603_ = l_Lean_Parser_Term_identProjKind;
v___x_2604_ = lean_name_eq(v___x_2602_, v___x_2603_);
lean_dec(v___x_2602_);
if (v___x_2604_ == 0)
{
lean_object* v___x_2605_; 
lean_dec(v_stx_2600_);
lean_del_object(v___x_2594_);
v___x_2605_ = lean_box(0);
return v___x_2605_;
}
else
{
uint8_t v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2610_; 
v___x_2606_ = 2;
v___x_2607_ = lean_unsigned_to_nat(5u);
v___x_2608_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2608_, 0, v_stx_2600_);
lean_ctor_set(v___x_2608_, 1, v___x_2607_);
lean_ctor_set_uint8(v___x_2608_, sizeof(void*)*2, v___x_2606_);
if (v_isShared_2595_ == 0)
{
lean_ctor_set(v___x_2594_, 0, v___x_2608_);
v___x_2610_ = v___x_2594_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v___x_2608_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
}
}
else
{
lean_object* v___x_2638_; 
lean_dec_ref(v_info_2590_);
v___x_2638_ = lean_box(0);
return v___x_2638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0___boxed(lean_object* v_x_2639_, lean_object* v_info_2640_, lean_object* v_x_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___lam__0(v_x_2639_, v_info_2640_, v_x_2641_);
lean_dec_ref(v_x_2641_);
lean_dec_ref(v_x_2639_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens(lean_object* v_i_2644_){
_start:
{
lean_object* v___f_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___f_2645_ = ((lean_object*)(l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens___closed__0));
v___x_2646_ = l_Lean_Elab_InfoTree_deepestNodes___redArg(v___f_2645_, v_i_2644_);
v___x_2647_ = lean_array_mk(v___x_2646_);
return v___x_2647_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_dbgShowTokens___lam__0(lean_object* v_x_2648_, lean_object* v_y_2649_){
_start:
{
lean_object* v_fst_2650_; lean_object* v_fst_2651_; uint8_t v___x_2652_; 
v_fst_2650_ = lean_ctor_get(v_x_2648_, 0);
v_fst_2651_ = lean_ctor_get(v_y_2649_, 0);
v___x_2652_ = lean_nat_dec_le(v_fst_2650_, v_fst_2651_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens___lam__0___boxed(lean_object* v_x_2653_, lean_object* v_y_2654_){
_start:
{
uint8_t v_res_2655_; lean_object* v_r_2656_; 
v_res_2655_ = l_Lean_Server_FileWorker_dbgShowTokens___lam__0(v_x_2653_, v_y_2654_);
lean_dec_ref(v_y_2654_);
lean_dec_ref(v_x_2653_);
v_r_2656_ = lean_box(v_res_2655_);
return v_r_2656_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5(lean_object* v_x_2657_, lean_object* v_x_2658_){
_start:
{
if (lean_obj_tag(v_x_2658_) == 0)
{
lean_inc(v_x_2657_);
return v_x_2657_;
}
else
{
lean_object* v_key_2659_; lean_object* v_value_2660_; lean_object* v_tail_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v_key_2659_ = lean_ctor_get(v_x_2658_, 0);
v_value_2660_ = lean_ctor_get(v_x_2658_, 1);
v_tail_2661_ = lean_ctor_get(v_x_2658_, 2);
v___x_2662_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5(v_x_2657_, v_tail_2661_);
lean_inc(v_value_2660_);
lean_inc(v_key_2659_);
v___x_2663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2663_, 0, v_key_2659_);
lean_ctor_set(v___x_2663_, 1, v_value_2660_);
v___x_2664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2663_);
lean_ctor_set(v___x_2664_, 1, v___x_2662_);
return v___x_2664_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5___boxed(lean_object* v_x_2665_, lean_object* v_x_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5(v_x_2665_, v_x_2666_);
lean_dec(v_x_2666_);
lean_dec(v_x_2665_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6(lean_object* v_as_2668_, size_t v_i_2669_, size_t v_stop_2670_, lean_object* v_b_2671_){
_start:
{
uint8_t v___x_2672_; 
v___x_2672_ = lean_usize_dec_eq(v_i_2669_, v_stop_2670_);
if (v___x_2672_ == 0)
{
size_t v___x_2673_; size_t v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2673_ = ((size_t)1ULL);
v___x_2674_ = lean_usize_sub(v_i_2669_, v___x_2673_);
v___x_2675_ = lean_array_uget_borrowed(v_as_2668_, v___x_2674_);
v___x_2676_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Server_FileWorker_dbgShowTokens_spec__5(v_b_2671_, v___x_2675_);
lean_dec(v_b_2671_);
v_i_2669_ = v___x_2674_;
v_b_2671_ = v___x_2676_;
goto _start;
}
else
{
return v_b_2671_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6___boxed(lean_object* v_as_2678_, lean_object* v_i_2679_, lean_object* v_stop_2680_, lean_object* v_b_2681_){
_start:
{
size_t v_i_boxed_2682_; size_t v_stop_boxed_2683_; lean_object* v_res_2684_; 
v_i_boxed_2682_ = lean_unbox_usize(v_i_2679_);
lean_dec(v_i_2679_);
v_stop_boxed_2683_ = lean_unbox_usize(v_stop_2680_);
lean_dec(v_stop_2680_);
v_res_2684_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6(v_as_2678_, v_i_boxed_2682_, v_stop_boxed_2683_, v_b_2681_);
lean_dec_ref(v_as_2678_);
return v_res_2684_;
}
}
LEAN_EXPORT uint8_t l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0(lean_object* v_x_2685_, lean_object* v_y_2686_){
_start:
{
lean_object* v_fst_2687_; lean_object* v_fst_2688_; uint8_t v___x_2689_; 
v_fst_2687_ = lean_ctor_get(v_x_2685_, 0);
v_fst_2688_ = lean_ctor_get(v_y_2686_, 0);
v___x_2689_ = lean_nat_dec_le(v_fst_2687_, v_fst_2688_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0___boxed(lean_object* v_x_2690_, lean_object* v_y_2691_){
_start:
{
uint8_t v_res_2692_; lean_object* v_r_2693_; 
v_res_2692_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___lam__0(v_x_2690_, v_y_2691_);
lean_dec_ref(v_y_2691_);
lean_dec_ref(v_x_2690_);
v_r_2693_ = lean_box(v_res_2692_);
return v_r_2693_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1(lean_object* v_x_2697_, lean_object* v_x_2698_){
_start:
{
if (lean_obj_tag(v_x_2698_) == 0)
{
return v_x_2697_;
}
else
{
lean_object* v_head_2699_; lean_object* v_snd_2700_; lean_object* v_snd_2701_; lean_object* v_tail_2702_; lean_object* v_fst_2703_; lean_object* v_fst_2704_; lean_object* v_fst_2705_; lean_object* v_snd_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; uint8_t v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v_fst_2716_; lean_object* v_snd_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; 
v_head_2699_ = lean_ctor_get(v_x_2698_, 0);
lean_inc(v_head_2699_);
v_snd_2700_ = lean_ctor_get(v_head_2699_, 1);
lean_inc(v_snd_2700_);
v_snd_2701_ = lean_ctor_get(v_snd_2700_, 1);
lean_inc(v_snd_2701_);
v_tail_2702_ = lean_ctor_get(v_x_2698_, 1);
lean_inc(v_tail_2702_);
lean_dec_ref_known(v_x_2698_, 2);
v_fst_2703_ = lean_ctor_get(v_head_2699_, 0);
lean_inc(v_fst_2703_);
lean_dec(v_head_2699_);
v_fst_2704_ = lean_ctor_get(v_snd_2700_, 0);
lean_inc(v_fst_2704_);
lean_dec(v_snd_2700_);
v_fst_2705_ = lean_ctor_get(v_snd_2701_, 0);
lean_inc(v_fst_2705_);
v_snd_2706_ = lean_ctor_get(v_snd_2701_, 1);
lean_inc(v_snd_2706_);
lean_dec(v_snd_2701_);
v___x_2707_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0));
v___x_2708_ = l_Nat_reprFast(v_fst_2703_);
v___x_2709_ = lean_string_append(v___x_2707_, v___x_2708_);
lean_dec_ref(v___x_2708_);
v___x_2710_ = lean_box(0);
v___x_2711_ = 0;
v___x_2712_ = l_Lean_Syntax_formatStx(v_fst_2705_, v___x_2710_, v___x_2711_);
v___x_2713_ = l_Std_Format_defWidth;
v___x_2714_ = lean_unsigned_to_nat(0u);
v___x_2715_ = l_Std_Format_pretty(v___x_2712_, v___x_2713_, v___x_2714_, v___x_2714_);
v_fst_2716_ = lean_ctor_get(v_snd_2706_, 0);
lean_inc(v_fst_2716_);
v_snd_2717_ = lean_ctor_get(v_snd_2706_, 1);
lean_inc(v_snd_2717_);
lean_dec(v_snd_2706_);
v___x_2718_ = l_Nat_reprFast(v_fst_2704_);
v___x_2719_ = lean_string_append(v___x_2707_, v___x_2718_);
lean_dec_ref(v___x_2718_);
v___x_2720_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1));
v___x_2721_ = lean_string_append(v_x_2697_, v___x_2720_);
v___x_2722_ = lean_string_append(v___x_2709_, v___x_2720_);
v___x_2723_ = lean_string_append(v___x_2719_, v___x_2720_);
v___x_2724_ = lean_string_append(v___x_2707_, v___x_2715_);
lean_dec_ref(v___x_2715_);
v___x_2725_ = lean_string_append(v___x_2724_, v___x_2720_);
v___x_2726_ = lean_unsigned_to_nat(80u);
v___x_2727_ = l_Lean_Json_pretty(v_fst_2716_, v___x_2726_);
v___x_2728_ = lean_string_append(v___x_2707_, v___x_2727_);
lean_dec_ref(v___x_2727_);
v___x_2729_ = lean_string_append(v___x_2728_, v___x_2720_);
v___x_2730_ = l_Nat_reprFast(v_snd_2717_);
v___x_2731_ = lean_string_append(v___x_2729_, v___x_2730_);
lean_dec_ref(v___x_2730_);
v___x_2732_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2));
v___x_2733_ = lean_string_append(v___x_2731_, v___x_2732_);
v___x_2734_ = lean_string_append(v___x_2725_, v___x_2733_);
lean_dec_ref(v___x_2733_);
v___x_2735_ = lean_string_append(v___x_2734_, v___x_2732_);
v___x_2736_ = lean_string_append(v___x_2723_, v___x_2735_);
lean_dec_ref(v___x_2735_);
v___x_2737_ = lean_string_append(v___x_2736_, v___x_2732_);
v___x_2738_ = lean_string_append(v___x_2722_, v___x_2737_);
lean_dec_ref(v___x_2737_);
v___x_2739_ = lean_string_append(v___x_2738_, v___x_2732_);
v___x_2740_ = lean_string_append(v___x_2721_, v___x_2739_);
lean_dec_ref(v___x_2739_);
v_x_2697_ = v___x_2740_;
v_x_2698_ = v_tail_2702_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1(lean_object* v_x_2745_){
_start:
{
if (lean_obj_tag(v_x_2745_) == 0)
{
lean_object* v___x_2746_; 
v___x_2746_ = ((lean_object*)(l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__0));
return v___x_2746_;
}
else
{
lean_object* v_tail_2747_; 
v_tail_2747_ = lean_ctor_get(v_x_2745_, 1);
if (lean_obj_tag(v_tail_2747_) == 0)
{
lean_object* v_head_2748_; lean_object* v_snd_2749_; lean_object* v_snd_2750_; lean_object* v_fst_2751_; lean_object* v_fst_2752_; lean_object* v_fst_2753_; lean_object* v_snd_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; uint8_t v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v_fst_2764_; lean_object* v_snd_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
v_head_2748_ = lean_ctor_get(v_x_2745_, 0);
lean_inc(v_head_2748_);
lean_dec_ref_known(v_x_2745_, 2);
v_snd_2749_ = lean_ctor_get(v_head_2748_, 1);
lean_inc(v_snd_2749_);
v_snd_2750_ = lean_ctor_get(v_snd_2749_, 1);
lean_inc(v_snd_2750_);
v_fst_2751_ = lean_ctor_get(v_head_2748_, 0);
lean_inc(v_fst_2751_);
lean_dec(v_head_2748_);
v_fst_2752_ = lean_ctor_get(v_snd_2749_, 0);
lean_inc(v_fst_2752_);
lean_dec(v_snd_2749_);
v_fst_2753_ = lean_ctor_get(v_snd_2750_, 0);
lean_inc(v_fst_2753_);
v_snd_2754_ = lean_ctor_get(v_snd_2750_, 1);
lean_inc(v_snd_2754_);
lean_dec(v_snd_2750_);
v___x_2755_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0));
v___x_2756_ = l_Nat_reprFast(v_fst_2751_);
v___x_2757_ = lean_string_append(v___x_2755_, v___x_2756_);
lean_dec_ref(v___x_2756_);
v___x_2758_ = lean_box(0);
v___x_2759_ = 0;
v___x_2760_ = l_Lean_Syntax_formatStx(v_fst_2753_, v___x_2758_, v___x_2759_);
v___x_2761_ = l_Std_Format_defWidth;
v___x_2762_ = lean_unsigned_to_nat(0u);
v___x_2763_ = l_Std_Format_pretty(v___x_2760_, v___x_2761_, v___x_2762_, v___x_2762_);
v_fst_2764_ = lean_ctor_get(v_snd_2754_, 0);
lean_inc(v_fst_2764_);
v_snd_2765_ = lean_ctor_get(v_snd_2754_, 1);
lean_inc(v_snd_2765_);
lean_dec(v_snd_2754_);
v___x_2766_ = l_Nat_reprFast(v_fst_2752_);
v___x_2767_ = lean_string_append(v___x_2755_, v___x_2766_);
lean_dec_ref(v___x_2766_);
v___x_2768_ = ((lean_object*)(l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__1));
v___x_2769_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1));
v___x_2770_ = lean_string_append(v___x_2757_, v___x_2769_);
v___x_2771_ = lean_string_append(v___x_2767_, v___x_2769_);
v___x_2772_ = lean_string_append(v___x_2755_, v___x_2763_);
lean_dec_ref(v___x_2763_);
v___x_2773_ = lean_string_append(v___x_2772_, v___x_2769_);
v___x_2774_ = lean_unsigned_to_nat(80u);
v___x_2775_ = l_Lean_Json_pretty(v_fst_2764_, v___x_2774_);
v___x_2776_ = lean_string_append(v___x_2755_, v___x_2775_);
lean_dec_ref(v___x_2775_);
v___x_2777_ = lean_string_append(v___x_2776_, v___x_2769_);
v___x_2778_ = l_Nat_reprFast(v_snd_2765_);
v___x_2779_ = lean_string_append(v___x_2777_, v___x_2778_);
lean_dec_ref(v___x_2778_);
v___x_2780_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2));
v___x_2781_ = lean_string_append(v___x_2779_, v___x_2780_);
v___x_2782_ = lean_string_append(v___x_2773_, v___x_2781_);
lean_dec_ref(v___x_2781_);
v___x_2783_ = lean_string_append(v___x_2782_, v___x_2780_);
v___x_2784_ = lean_string_append(v___x_2771_, v___x_2783_);
lean_dec_ref(v___x_2783_);
v___x_2785_ = lean_string_append(v___x_2784_, v___x_2780_);
v___x_2786_ = lean_string_append(v___x_2770_, v___x_2785_);
lean_dec_ref(v___x_2785_);
v___x_2787_ = lean_string_append(v___x_2786_, v___x_2780_);
v___x_2788_ = lean_string_append(v___x_2768_, v___x_2787_);
lean_dec_ref(v___x_2787_);
v___x_2789_ = ((lean_object*)(l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__2));
v___x_2790_ = lean_string_append(v___x_2788_, v___x_2789_);
return v___x_2790_;
}
else
{
lean_object* v_head_2791_; lean_object* v_snd_2792_; lean_object* v_snd_2793_; lean_object* v_fst_2794_; lean_object* v_fst_2795_; lean_object* v_fst_2796_; lean_object* v_snd_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; uint8_t v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v_fst_2807_; lean_object* v_snd_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; uint32_t v___x_2833_; lean_object* v___x_2834_; 
lean_inc(v_tail_2747_);
v_head_2791_ = lean_ctor_get(v_x_2745_, 0);
lean_inc(v_head_2791_);
lean_dec_ref_known(v_x_2745_, 2);
v_snd_2792_ = lean_ctor_get(v_head_2791_, 1);
lean_inc(v_snd_2792_);
v_snd_2793_ = lean_ctor_get(v_snd_2792_, 1);
lean_inc(v_snd_2793_);
v_fst_2794_ = lean_ctor_get(v_head_2791_, 0);
lean_inc(v_fst_2794_);
lean_dec(v_head_2791_);
v_fst_2795_ = lean_ctor_get(v_snd_2792_, 0);
lean_inc(v_fst_2795_);
lean_dec(v_snd_2792_);
v_fst_2796_ = lean_ctor_get(v_snd_2793_, 0);
lean_inc(v_fst_2796_);
v_snd_2797_ = lean_ctor_get(v_snd_2793_, 1);
lean_inc(v_snd_2797_);
lean_dec(v_snd_2793_);
v___x_2798_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__0));
v___x_2799_ = l_Nat_reprFast(v_fst_2794_);
v___x_2800_ = lean_string_append(v___x_2798_, v___x_2799_);
lean_dec_ref(v___x_2799_);
v___x_2801_ = lean_box(0);
v___x_2802_ = 0;
v___x_2803_ = l_Lean_Syntax_formatStx(v_fst_2796_, v___x_2801_, v___x_2802_);
v___x_2804_ = l_Std_Format_defWidth;
v___x_2805_ = lean_unsigned_to_nat(0u);
v___x_2806_ = l_Std_Format_pretty(v___x_2803_, v___x_2804_, v___x_2805_, v___x_2805_);
v_fst_2807_ = lean_ctor_get(v_snd_2797_, 0);
lean_inc(v_fst_2807_);
v_snd_2808_ = lean_ctor_get(v_snd_2797_, 1);
lean_inc(v_snd_2808_);
lean_dec(v_snd_2797_);
v___x_2809_ = l_Nat_reprFast(v_fst_2795_);
v___x_2810_ = lean_string_append(v___x_2798_, v___x_2809_);
lean_dec_ref(v___x_2809_);
v___x_2811_ = ((lean_object*)(l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1___closed__1));
v___x_2812_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__1));
v___x_2813_ = lean_string_append(v___x_2800_, v___x_2812_);
v___x_2814_ = lean_string_append(v___x_2810_, v___x_2812_);
v___x_2815_ = lean_string_append(v___x_2798_, v___x_2806_);
lean_dec_ref(v___x_2806_);
v___x_2816_ = lean_string_append(v___x_2815_, v___x_2812_);
v___x_2817_ = lean_unsigned_to_nat(80u);
v___x_2818_ = l_Lean_Json_pretty(v_fst_2807_, v___x_2817_);
v___x_2819_ = lean_string_append(v___x_2798_, v___x_2818_);
lean_dec_ref(v___x_2818_);
v___x_2820_ = lean_string_append(v___x_2819_, v___x_2812_);
v___x_2821_ = l_Nat_reprFast(v_snd_2808_);
v___x_2822_ = lean_string_append(v___x_2820_, v___x_2821_);
lean_dec_ref(v___x_2821_);
v___x_2823_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1___closed__2));
v___x_2824_ = lean_string_append(v___x_2822_, v___x_2823_);
v___x_2825_ = lean_string_append(v___x_2816_, v___x_2824_);
lean_dec_ref(v___x_2824_);
v___x_2826_ = lean_string_append(v___x_2825_, v___x_2823_);
v___x_2827_ = lean_string_append(v___x_2814_, v___x_2826_);
lean_dec_ref(v___x_2826_);
v___x_2828_ = lean_string_append(v___x_2827_, v___x_2823_);
v___x_2829_ = lean_string_append(v___x_2813_, v___x_2828_);
lean_dec_ref(v___x_2828_);
v___x_2830_ = lean_string_append(v___x_2829_, v___x_2823_);
v___x_2831_ = lean_string_append(v___x_2811_, v___x_2830_);
lean_dec_ref(v___x_2830_);
v___x_2832_ = l_List_foldl___at___00List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1_spec__1(v___x_2831_, v_tail_2747_);
v___x_2833_ = 93;
v___x_2834_ = lean_string_push(v___x_2832_, v___x_2833_);
return v___x_2834_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__0(lean_object* v_a_2835_, lean_object* v_a_2836_){
_start:
{
if (lean_obj_tag(v_a_2835_) == 0)
{
lean_object* v___x_2837_; 
v___x_2837_ = l_List_reverse___redArg(v_a_2836_);
return v___x_2837_;
}
else
{
lean_object* v_head_2838_; lean_object* v_snd_2839_; lean_object* v_snd_2840_; lean_object* v_tail_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2873_; 
v_head_2838_ = lean_ctor_get(v_a_2835_, 0);
lean_inc(v_head_2838_);
v_snd_2839_ = lean_ctor_get(v_head_2838_, 1);
lean_inc(v_snd_2839_);
v_snd_2840_ = lean_ctor_get(v_snd_2839_, 1);
lean_inc(v_snd_2840_);
v_tail_2841_ = lean_ctor_get(v_a_2835_, 1);
v_isSharedCheck_2873_ = !lean_is_exclusive(v_a_2835_);
if (v_isSharedCheck_2873_ == 0)
{
lean_object* v_unused_2874_; 
v_unused_2874_ = lean_ctor_get(v_a_2835_, 0);
lean_dec(v_unused_2874_);
v___x_2843_ = v_a_2835_;
v_isShared_2844_ = v_isSharedCheck_2873_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_tail_2841_);
lean_dec(v_a_2835_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2873_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v_fst_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2871_; 
v_fst_2845_ = lean_ctor_get(v_head_2838_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v_head_2838_);
if (v_isSharedCheck_2871_ == 0)
{
lean_object* v_unused_2872_; 
v_unused_2872_ = lean_ctor_get(v_head_2838_, 1);
lean_dec(v_unused_2872_);
v___x_2847_ = v_head_2838_;
v_isShared_2848_ = v_isSharedCheck_2871_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_fst_2845_);
lean_dec(v_head_2838_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2871_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v_fst_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2869_; 
v_fst_2849_ = lean_ctor_get(v_snd_2839_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_snd_2839_);
if (v_isSharedCheck_2869_ == 0)
{
lean_object* v_unused_2870_; 
v_unused_2870_ = lean_ctor_get(v_snd_2839_, 1);
lean_dec(v_unused_2870_);
v___x_2851_ = v_snd_2839_;
v_isShared_2852_ = v_isSharedCheck_2869_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_fst_2849_);
lean_dec(v_snd_2839_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2869_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v_stx_2853_; uint8_t v_type_2854_; lean_object* v_priority_2855_; lean_object* v___x_2856_; lean_object* v___x_2858_; 
v_stx_2853_ = lean_ctor_get(v_snd_2840_, 0);
lean_inc(v_stx_2853_);
v_type_2854_ = lean_ctor_get_uint8(v_snd_2840_, sizeof(void*)*2);
v_priority_2855_ = lean_ctor_get(v_snd_2840_, 1);
lean_inc(v_priority_2855_);
lean_dec(v_snd_2840_);
v___x_2856_ = l_Lean_Lsp_instToJsonSemanticTokenType_toJson(v_type_2854_);
if (v_isShared_2852_ == 0)
{
lean_ctor_set(v___x_2851_, 1, v_priority_2855_);
lean_ctor_set(v___x_2851_, 0, v___x_2856_);
v___x_2858_ = v___x_2851_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v___x_2856_);
lean_ctor_set(v_reuseFailAlloc_2868_, 1, v_priority_2855_);
v___x_2858_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
lean_object* v___x_2860_; 
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 1, v___x_2858_);
lean_ctor_set(v___x_2847_, 0, v_stx_2853_);
v___x_2860_ = v___x_2847_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_stx_2853_);
lean_ctor_set(v_reuseFailAlloc_2867_, 1, v___x_2858_);
v___x_2860_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2864_; 
v___x_2861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2861_, 0, v_fst_2849_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
v___x_2862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2862_, 0, v_fst_2845_);
lean_ctor_set(v___x_2862_, 1, v___x_2861_);
if (v_isShared_2844_ == 0)
{
lean_ctor_set(v___x_2843_, 1, v_a_2836_);
lean_ctor_set(v___x_2843_, 0, v___x_2862_);
v___x_2864_ = v___x_2843_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v___x_2862_);
lean_ctor_set(v_reuseFailAlloc_2866_, 1, v_a_2836_);
v___x_2864_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
v_a_2835_ = v_tail_2841_;
v_a_2836_ = v___x_2864_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg(lean_object* v_as_x27_2877_, lean_object* v_b_2878_){
_start:
{
if (lean_obj_tag(v_as_x27_2877_) == 0)
{
return v_b_2878_;
}
else
{
lean_object* v_head_2879_; lean_object* v_tail_2880_; lean_object* v_fst_2881_; lean_object* v_snd_2882_; lean_object* v___f_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; 
v_head_2879_ = lean_ctor_get(v_as_x27_2877_, 0);
v_tail_2880_ = lean_ctor_get(v_as_x27_2877_, 1);
v_fst_2881_ = lean_ctor_get(v_head_2879_, 0);
v_snd_2882_ = lean_ctor_get(v_head_2879_, 1);
v___f_2883_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__0));
lean_inc(v_snd_2882_);
v___x_2884_ = lean_array_to_list(v_snd_2882_);
v___x_2885_ = l_List_mergeSort___redArg(v___x_2884_, v___f_2883_);
lean_inc(v_fst_2881_);
v___x_2886_ = l_Nat_reprFast(v_fst_2881_);
v___x_2887_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___closed__1));
v___x_2888_ = lean_string_append(v___x_2886_, v___x_2887_);
v___x_2889_ = lean_box(0);
v___x_2890_ = l_List_mapTR_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__0(v___x_2885_, v___x_2889_);
v___x_2891_ = l_List_toString___at___00Lean_Server_FileWorker_dbgShowTokens_spec__1(v___x_2890_);
v___x_2892_ = lean_string_append(v___x_2888_, v___x_2891_);
lean_dec_ref(v___x_2891_);
v___x_2893_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine___closed__0));
v___x_2894_ = lean_string_append(v___x_2892_, v___x_2893_);
v___x_2895_ = lean_string_append(v_b_2878_, v___x_2894_);
lean_dec_ref(v___x_2894_);
v_as_x27_2877_ = v_tail_2880_;
v_b_2878_ = v___x_2895_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg___boxed(lean_object* v_as_x27_2897_, lean_object* v_b_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg(v_as_x27_2897_, v_b_2898_);
lean_dec(v_as_x27_2897_);
return v_res_2899_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(lean_object* v_a_2900_, lean_object* v_x_2901_){
_start:
{
if (lean_obj_tag(v_x_2901_) == 0)
{
uint8_t v___x_2902_; 
v___x_2902_ = 0;
return v___x_2902_;
}
else
{
lean_object* v_key_2903_; lean_object* v_tail_2904_; uint8_t v___x_2905_; 
v_key_2903_ = lean_ctor_get(v_x_2901_, 0);
v_tail_2904_ = lean_ctor_get(v_x_2901_, 2);
v___x_2905_ = lean_nat_dec_eq(v_key_2903_, v_a_2900_);
if (v___x_2905_ == 0)
{
v_x_2901_ = v_tail_2904_;
goto _start;
}
else
{
return v___x_2905_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg___boxed(lean_object* v_a_2907_, lean_object* v_x_2908_){
_start:
{
uint8_t v_res_2909_; lean_object* v_r_2910_; 
v_res_2909_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(v_a_2907_, v_x_2908_);
lean_dec(v_x_2908_);
lean_dec(v_a_2907_);
v_r_2910_ = lean_box(v_res_2909_);
return v_r_2910_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10___redArg(lean_object* v_x_2911_, lean_object* v_x_2912_){
_start:
{
if (lean_obj_tag(v_x_2912_) == 0)
{
return v_x_2911_;
}
else
{
lean_object* v_key_2913_; lean_object* v_value_2914_; lean_object* v_tail_2915_; lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2938_; 
v_key_2913_ = lean_ctor_get(v_x_2912_, 0);
v_value_2914_ = lean_ctor_get(v_x_2912_, 1);
v_tail_2915_ = lean_ctor_get(v_x_2912_, 2);
v_isSharedCheck_2938_ = !lean_is_exclusive(v_x_2912_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2917_ = v_x_2912_;
v_isShared_2918_ = v_isSharedCheck_2938_;
goto v_resetjp_2916_;
}
else
{
lean_inc(v_tail_2915_);
lean_inc(v_value_2914_);
lean_inc(v_key_2913_);
lean_dec(v_x_2912_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2938_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v___x_2919_; uint64_t v___x_2920_; uint64_t v___x_2921_; uint64_t v___x_2922_; uint64_t v_fold_2923_; uint64_t v___x_2924_; uint64_t v___x_2925_; uint64_t v___x_2926_; size_t v___x_2927_; size_t v___x_2928_; size_t v___x_2929_; size_t v___x_2930_; size_t v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2934_; 
v___x_2919_ = lean_array_get_size(v_x_2911_);
v___x_2920_ = lean_uint64_of_nat(v_key_2913_);
v___x_2921_ = 32ULL;
v___x_2922_ = lean_uint64_shift_right(v___x_2920_, v___x_2921_);
v_fold_2923_ = lean_uint64_xor(v___x_2920_, v___x_2922_);
v___x_2924_ = 16ULL;
v___x_2925_ = lean_uint64_shift_right(v_fold_2923_, v___x_2924_);
v___x_2926_ = lean_uint64_xor(v_fold_2923_, v___x_2925_);
v___x_2927_ = lean_uint64_to_usize(v___x_2926_);
v___x_2928_ = lean_usize_of_nat(v___x_2919_);
v___x_2929_ = ((size_t)1ULL);
v___x_2930_ = lean_usize_sub(v___x_2928_, v___x_2929_);
v___x_2931_ = lean_usize_land(v___x_2927_, v___x_2930_);
v___x_2932_ = lean_array_uget_borrowed(v_x_2911_, v___x_2931_);
lean_inc(v___x_2932_);
if (v_isShared_2918_ == 0)
{
lean_ctor_set(v___x_2917_, 2, v___x_2932_);
v___x_2934_ = v___x_2917_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_key_2913_);
lean_ctor_set(v_reuseFailAlloc_2937_, 1, v_value_2914_);
lean_ctor_set(v_reuseFailAlloc_2937_, 2, v___x_2932_);
v___x_2934_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
lean_object* v___x_2935_; 
v___x_2935_ = lean_array_uset(v_x_2911_, v___x_2931_, v___x_2934_);
v_x_2911_ = v___x_2935_;
v_x_2912_ = v_tail_2915_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5___redArg(lean_object* v_i_2939_, lean_object* v_source_2940_, lean_object* v_target_2941_){
_start:
{
lean_object* v___x_2942_; uint8_t v___x_2943_; 
v___x_2942_ = lean_array_get_size(v_source_2940_);
v___x_2943_ = lean_nat_dec_lt(v_i_2939_, v___x_2942_);
if (v___x_2943_ == 0)
{
lean_dec_ref(v_source_2940_);
lean_dec(v_i_2939_);
return v_target_2941_;
}
else
{
lean_object* v_es_2944_; lean_object* v___x_2945_; lean_object* v_source_2946_; lean_object* v_target_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v_es_2944_ = lean_array_fget(v_source_2940_, v_i_2939_);
v___x_2945_ = lean_box(0);
v_source_2946_ = lean_array_fset(v_source_2940_, v_i_2939_, v___x_2945_);
v_target_2947_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10___redArg(v_target_2941_, v_es_2944_);
v___x_2948_ = lean_unsigned_to_nat(1u);
v___x_2949_ = lean_nat_add(v_i_2939_, v___x_2948_);
lean_dec(v_i_2939_);
v_i_2939_ = v___x_2949_;
v_source_2940_ = v_source_2946_;
v_target_2941_ = v_target_2947_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4___redArg(lean_object* v_data_2951_){
_start:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v_nbuckets_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2952_ = lean_array_get_size(v_data_2951_);
v___x_2953_ = lean_unsigned_to_nat(2u);
v_nbuckets_2954_ = lean_nat_mul(v___x_2952_, v___x_2953_);
v___x_2955_ = lean_unsigned_to_nat(0u);
v___x_2956_ = lean_box(0);
v___x_2957_ = lean_mk_array(v_nbuckets_2954_, v___x_2956_);
v___x_2958_ = lean_array_propagate_mark(v_data_2951_, v___x_2957_);
v___x_2959_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5___redArg(v___x_2955_, v_data_2951_, v___x_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0(lean_object* v_character_2962_, lean_object* v_a_2963_, lean_object* v_character_2964_, lean_object* v_x_x3f_2965_){
_start:
{
lean_object* v___y_2967_; 
if (lean_obj_tag(v_x_x3f_2965_) == 0)
{
lean_object* v___x_2972_; 
v___x_2972_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0___closed__0));
v___y_2967_ = v___x_2972_;
goto v___jp_2966_;
}
else
{
lean_object* v_val_2973_; 
v_val_2973_ = lean_ctor_get(v_x_x3f_2965_, 0);
lean_inc(v_val_2973_);
lean_dec_ref_known(v_x_x3f_2965_, 1);
v___y_2967_ = v_val_2973_;
goto v___jp_2966_;
}
v___jp_2966_:
{
lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2968_, 0, v_character_2962_);
lean_ctor_set(v___x_2968_, 1, v_a_2963_);
v___x_2969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2969_, 0, v_character_2964_);
lean_ctor_set(v___x_2969_, 1, v___x_2968_);
v___x_2970_ = lean_array_push(v___y_2967_, v___x_2969_);
v___x_2971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2971_, 0, v___x_2970_);
return v___x_2971_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5(lean_object* v_character_2974_, lean_object* v_a_2975_, lean_object* v_character_2976_, lean_object* v_a_2977_, lean_object* v_x_2978_){
_start:
{
if (lean_obj_tag(v_x_2978_) == 0)
{
lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v_val_2981_; lean_object* v___x_2982_; 
v___x_2979_ = lean_box(0);
v___x_2980_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0(v_character_2974_, v_a_2975_, v_character_2976_, v___x_2979_);
v_val_2981_ = lean_ctor_get(v___x_2980_, 0);
lean_inc(v_val_2981_);
lean_dec(v___x_2980_);
v___x_2982_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2982_, 0, v_a_2977_);
lean_ctor_set(v___x_2982_, 1, v_val_2981_);
lean_ctor_set(v___x_2982_, 2, v_x_2978_);
return v___x_2982_;
}
else
{
lean_object* v_key_2983_; lean_object* v_value_2984_; lean_object* v_tail_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_3000_; 
v_key_2983_ = lean_ctor_get(v_x_2978_, 0);
v_value_2984_ = lean_ctor_get(v_x_2978_, 1);
v_tail_2985_ = lean_ctor_get(v_x_2978_, 2);
v_isSharedCheck_3000_ = !lean_is_exclusive(v_x_2978_);
if (v_isSharedCheck_3000_ == 0)
{
v___x_2987_ = v_x_2978_;
v_isShared_2988_ = v_isSharedCheck_3000_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_tail_2985_);
lean_inc(v_value_2984_);
lean_inc(v_key_2983_);
lean_dec(v_x_2978_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_3000_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
uint8_t v___x_2989_; 
v___x_2989_ = lean_nat_dec_eq(v_key_2983_, v_a_2977_);
if (v___x_2989_ == 0)
{
lean_object* v_tail_2990_; lean_object* v___x_2992_; 
v_tail_2990_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5(v_character_2974_, v_a_2975_, v_character_2976_, v_a_2977_, v_tail_2985_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set(v___x_2987_, 2, v_tail_2990_);
v___x_2992_ = v___x_2987_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_key_2983_);
lean_ctor_set(v_reuseFailAlloc_2993_, 1, v_value_2984_);
lean_ctor_set(v_reuseFailAlloc_2993_, 2, v_tail_2990_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
else
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v_val_2996_; lean_object* v___x_2998_; 
lean_dec(v_key_2983_);
v___x_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2994_, 0, v_value_2984_);
v___x_2995_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0(v_character_2974_, v_a_2975_, v_character_2976_, v___x_2994_);
v_val_2996_ = lean_ctor_get(v___x_2995_, 0);
lean_inc(v_val_2996_);
lean_dec(v___x_2995_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set(v___x_2987_, 1, v_val_2996_);
lean_ctor_set(v___x_2987_, 0, v_a_2977_);
v___x_2998_ = v___x_2987_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v_a_2977_);
lean_ctor_set(v_reuseFailAlloc_2999_, 1, v_val_2996_);
lean_ctor_set(v_reuseFailAlloc_2999_, 2, v_tail_2985_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2(lean_object* v_character_3001_, lean_object* v_a_3002_, lean_object* v_character_3003_, lean_object* v_m_3004_, lean_object* v_a_3005_){
_start:
{
lean_object* v_size_3006_; lean_object* v_buckets_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3059_; 
v_size_3006_ = lean_ctor_get(v_m_3004_, 0);
v_buckets_3007_ = lean_ctor_get(v_m_3004_, 1);
v_isSharedCheck_3059_ = !lean_is_exclusive(v_m_3004_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3009_ = v_m_3004_;
v_isShared_3010_ = v_isSharedCheck_3059_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_buckets_3007_);
lean_inc(v_size_3006_);
lean_dec(v_m_3004_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3059_;
goto v_resetjp_3008_;
}
v_resetjp_3008_:
{
lean_object* v___x_3011_; uint64_t v___x_3012_; uint64_t v___x_3013_; uint64_t v___x_3014_; uint64_t v_fold_3015_; uint64_t v___x_3016_; uint64_t v___x_3017_; uint64_t v___x_3018_; size_t v___x_3019_; size_t v___x_3020_; size_t v___x_3021_; size_t v___x_3022_; size_t v___x_3023_; lean_object* v_bkt_3024_; uint8_t v___x_3025_; 
v___x_3011_ = lean_array_get_size(v_buckets_3007_);
v___x_3012_ = lean_uint64_of_nat(v_a_3005_);
v___x_3013_ = 32ULL;
v___x_3014_ = lean_uint64_shift_right(v___x_3012_, v___x_3013_);
v_fold_3015_ = lean_uint64_xor(v___x_3012_, v___x_3014_);
v___x_3016_ = 16ULL;
v___x_3017_ = lean_uint64_shift_right(v_fold_3015_, v___x_3016_);
v___x_3018_ = lean_uint64_xor(v_fold_3015_, v___x_3017_);
v___x_3019_ = lean_uint64_to_usize(v___x_3018_);
v___x_3020_ = lean_usize_of_nat(v___x_3011_);
v___x_3021_ = ((size_t)1ULL);
v___x_3022_ = lean_usize_sub(v___x_3020_, v___x_3021_);
v___x_3023_ = lean_usize_land(v___x_3019_, v___x_3022_);
v_bkt_3024_ = lean_array_uget_borrowed(v_buckets_3007_, v___x_3023_);
v___x_3025_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(v_a_3005_, v_bkt_3024_);
if (v___x_3025_ == 0)
{
lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v_size_x27_3031_; lean_object* v___x_3032_; lean_object* v_buckets_x27_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; uint8_t v___x_3039_; 
v___x_3026_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5___lam__0___closed__0));
v___x_3027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3027_, 0, v_character_3001_);
lean_ctor_set(v___x_3027_, 1, v_a_3002_);
v___x_3028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3028_, 0, v_character_3003_);
lean_ctor_set(v___x_3028_, 1, v___x_3027_);
v___x_3029_ = lean_array_push(v___x_3026_, v___x_3028_);
v___x_3030_ = lean_unsigned_to_nat(1u);
v_size_x27_3031_ = lean_nat_add(v_size_3006_, v___x_3030_);
lean_dec(v_size_3006_);
lean_inc(v_bkt_3024_);
v___x_3032_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3032_, 0, v_a_3005_);
lean_ctor_set(v___x_3032_, 1, v___x_3029_);
lean_ctor_set(v___x_3032_, 2, v_bkt_3024_);
v_buckets_x27_3033_ = lean_array_uset(v_buckets_3007_, v___x_3023_, v___x_3032_);
v___x_3034_ = lean_unsigned_to_nat(4u);
v___x_3035_ = lean_nat_mul(v_size_x27_3031_, v___x_3034_);
v___x_3036_ = lean_unsigned_to_nat(3u);
v___x_3037_ = lean_nat_div(v___x_3035_, v___x_3036_);
lean_dec(v___x_3035_);
v___x_3038_ = lean_array_get_size(v_buckets_x27_3033_);
v___x_3039_ = lean_nat_dec_le(v___x_3037_, v___x_3038_);
lean_dec(v___x_3037_);
if (v___x_3039_ == 0)
{
lean_object* v_val_3040_; lean_object* v___x_3042_; 
v_val_3040_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4___redArg(v_buckets_x27_3033_);
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 1, v_val_3040_);
lean_ctor_set(v___x_3009_, 0, v_size_x27_3031_);
v___x_3042_ = v___x_3009_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v_size_x27_3031_);
lean_ctor_set(v_reuseFailAlloc_3043_, 1, v_val_3040_);
v___x_3042_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
return v___x_3042_;
}
}
else
{
lean_object* v___x_3045_; 
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 1, v_buckets_x27_3033_);
lean_ctor_set(v___x_3009_, 0, v_size_x27_3031_);
v___x_3045_ = v___x_3009_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_size_x27_3031_);
lean_ctor_set(v_reuseFailAlloc_3046_, 1, v_buckets_x27_3033_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
else
{
lean_object* v___x_3047_; lean_object* v_buckets_x27_3048_; lean_object* v_bkt_x27_3049_; lean_object* v___y_3051_; uint8_t v___x_3056_; 
lean_inc(v_bkt_3024_);
v___x_3047_ = lean_box(0);
v_buckets_x27_3048_ = lean_array_uset(v_buckets_3007_, v___x_3023_, v___x_3047_);
lean_inc(v_a_3005_);
v_bkt_x27_3049_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__5(v_character_3001_, v_a_3002_, v_character_3003_, v_a_3005_, v_bkt_3024_);
v___x_3056_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(v_a_3005_, v_bkt_x27_3049_);
lean_dec(v_a_3005_);
if (v___x_3056_ == 0)
{
lean_object* v___x_3057_; lean_object* v___x_3058_; 
v___x_3057_ = lean_unsigned_to_nat(1u);
v___x_3058_ = lean_nat_sub(v_size_3006_, v___x_3057_);
lean_dec(v_size_3006_);
v___y_3051_ = v___x_3058_;
goto v___jp_3050_;
}
else
{
v___y_3051_ = v_size_3006_;
goto v___jp_3050_;
}
v___jp_3050_:
{
lean_object* v___x_3052_; lean_object* v___x_3054_; 
v___x_3052_ = lean_array_uset(v_buckets_x27_3048_, v___x_3023_, v_bkt_x27_3049_);
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 1, v___x_3052_);
lean_ctor_set(v___x_3009_, 0, v___y_3051_);
v___x_3054_ = v___x_3009_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v___y_3051_);
lean_ctor_set(v_reuseFailAlloc_3055_, 1, v___x_3052_);
v___x_3054_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
return v___x_3054_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3(lean_object* v_text_3060_, lean_object* v_as_3061_, size_t v_sz_3062_, size_t v_i_3063_, lean_object* v_b_3064_){
_start:
{
lean_object* v_a_3066_; uint8_t v___x_3070_; 
v___x_3070_ = lean_usize_dec_lt(v_i_3063_, v_sz_3062_);
if (v___x_3070_ == 0)
{
lean_dec_ref(v_text_3060_);
return v_b_3064_;
}
else
{
lean_object* v_a_3071_; lean_object* v_stx_3072_; uint8_t v___x_3073_; lean_object* v___x_3074_; 
v_a_3071_ = lean_array_uget_borrowed(v_as_3061_, v_i_3063_);
v_stx_3072_ = lean_ctor_get(v_a_3071_, 0);
v___x_3073_ = 0;
lean_inc_ref(v_text_3060_);
v___x_3074_ = l_Lean_FileMap_lspRangeOfStx_x3f(v_text_3060_, v_stx_3072_, v___x_3073_);
if (lean_obj_tag(v___x_3074_) == 1)
{
lean_object* v_val_3075_; lean_object* v_start_3076_; lean_object* v_end_3077_; lean_object* v_line_3078_; lean_object* v_character_3079_; lean_object* v_character_3080_; lean_object* v___x_3081_; 
v_val_3075_ = lean_ctor_get(v___x_3074_, 0);
lean_inc(v_val_3075_);
lean_dec_ref_known(v___x_3074_, 1);
v_start_3076_ = lean_ctor_get(v_val_3075_, 0);
lean_inc_ref(v_start_3076_);
v_end_3077_ = lean_ctor_get(v_val_3075_, 1);
lean_inc_ref(v_end_3077_);
lean_dec(v_val_3075_);
v_line_3078_ = lean_ctor_get(v_start_3076_, 0);
lean_inc(v_line_3078_);
v_character_3079_ = lean_ctor_get(v_start_3076_, 1);
lean_inc(v_character_3079_);
lean_dec_ref(v_start_3076_);
v_character_3080_ = lean_ctor_get(v_end_3077_, 1);
lean_inc(v_character_3080_);
lean_dec_ref(v_end_3077_);
lean_inc(v_a_3071_);
v___x_3081_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2(v_character_3080_, v_a_3071_, v_character_3079_, v_b_3064_, v_line_3078_);
v_a_3066_ = v___x_3081_;
goto v___jp_3065_;
}
else
{
lean_dec(v___x_3074_);
v_a_3066_ = v_b_3064_;
goto v___jp_3065_;
}
}
v___jp_3065_:
{
size_t v___x_3067_; size_t v___x_3068_; 
v___x_3067_ = ((size_t)1ULL);
v___x_3068_ = lean_usize_add(v_i_3063_, v___x_3067_);
v_i_3063_ = v___x_3068_;
v_b_3064_ = v_a_3066_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3___boxed(lean_object* v_text_3082_, lean_object* v_as_3083_, lean_object* v_sz_3084_, lean_object* v_i_3085_, lean_object* v_b_3086_){
_start:
{
size_t v_sz_boxed_3087_; size_t v_i_boxed_3088_; lean_object* v_res_3089_; 
v_sz_boxed_3087_ = lean_unbox_usize(v_sz_3084_);
lean_dec(v_sz_3084_);
v_i_boxed_3088_ = lean_unbox_usize(v_i_3085_);
lean_dec(v_i_3085_);
v_res_3089_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3(v_text_3082_, v_as_3083_, v_sz_boxed_3087_, v_i_boxed_3088_, v_b_3086_);
lean_dec_ref(v_as_3083_);
return v_res_3089_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_dbgShowTokens___closed__0(void){
_start:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3090_ = lean_box(0);
v___x_3091_ = lean_unsigned_to_nat(16u);
v___x_3092_ = lean_mk_array(v___x_3091_, v___x_3090_);
return v___x_3092_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_dbgShowTokens___closed__1(void){
_start:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v_byLine_3095_; 
v___x_3093_ = lean_obj_once(&l_Lean_Server_FileWorker_dbgShowTokens___closed__0, &l_Lean_Server_FileWorker_dbgShowTokens___closed__0_once, _init_l_Lean_Server_FileWorker_dbgShowTokens___closed__0);
v___x_3094_ = lean_unsigned_to_nat(0u);
v_byLine_3095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_byLine_3095_, 0, v___x_3094_);
lean_ctor_set(v_byLine_3095_, 1, v___x_3093_);
return v_byLine_3095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens(lean_object* v_text_3098_, lean_object* v_toks_3099_){
_start:
{
lean_object* v___x_3100_; lean_object* v_byLine_3101_; size_t v_sz_3102_; size_t v___x_3103_; lean_object* v___x_3104_; lean_object* v_buckets_3105_; lean_object* v___f_3106_; lean_object* v___x_3107_; lean_object* v___y_3109_; lean_object* v___x_3112_; lean_object* v___x_3113_; uint8_t v___x_3114_; 
v___x_3100_ = lean_unsigned_to_nat(0u);
v_byLine_3101_ = lean_obj_once(&l_Lean_Server_FileWorker_dbgShowTokens___closed__1, &l_Lean_Server_FileWorker_dbgShowTokens___closed__1_once, _init_l_Lean_Server_FileWorker_dbgShowTokens___closed__1);
v_sz_3102_ = lean_array_size(v_toks_3099_);
v___x_3103_ = ((size_t)0ULL);
v___x_3104_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__3(v_text_3098_, v_toks_3099_, v_sz_3102_, v___x_3103_, v_byLine_3101_);
v_buckets_3105_ = lean_ctor_get(v___x_3104_, 1);
lean_inc_ref(v_buckets_3105_);
lean_dec_ref(v___x_3104_);
v___f_3106_ = ((lean_object*)(l_Lean_Server_FileWorker_dbgShowTokens___closed__2));
v___x_3107_ = ((lean_object*)(l_Lean_Server_FileWorker_dbgShowTokens___closed__3));
v___x_3112_ = lean_box(0);
v___x_3113_ = lean_array_get_size(v_buckets_3105_);
v___x_3114_ = lean_nat_dec_lt(v___x_3100_, v___x_3113_);
if (v___x_3114_ == 0)
{
lean_dec_ref(v_buckets_3105_);
v___y_3109_ = v___x_3112_;
goto v___jp_3108_;
}
else
{
size_t v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = lean_usize_of_nat(v___x_3113_);
v___x_3116_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Server_FileWorker_dbgShowTokens_spec__6(v_buckets_3105_, v___x_3115_, v___x_3103_, v___x_3112_);
lean_dec_ref(v_buckets_3105_);
v___y_3109_ = v___x_3116_;
goto v___jp_3108_;
}
v___jp_3108_:
{
lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3110_ = l_List_mergeSort___redArg(v___y_3109_, v___f_3106_);
v___x_3111_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg(v___x_3110_, v___x_3107_);
lean_dec(v___x_3110_);
return v___x_3111_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_dbgShowTokens___boxed(lean_object* v_text_3117_, lean_object* v_toks_3118_){
_start:
{
lean_object* v_res_3119_; 
v_res_3119_ = l_Lean_Server_FileWorker_dbgShowTokens(v_text_3117_, v_toks_3118_);
lean_dec_ref(v_toks_3118_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4(lean_object* v_as_3120_, lean_object* v_as_x27_3121_, lean_object* v_b_3122_, lean_object* v_a_3123_){
_start:
{
lean_object* v___x_3124_; 
v___x_3124_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___redArg(v_as_x27_3121_, v_b_3122_);
return v___x_3124_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4___boxed(lean_object* v_as_3125_, lean_object* v_as_x27_3126_, lean_object* v_b_3127_, lean_object* v_a_3128_){
_start:
{
lean_object* v_res_3129_; 
v_res_3129_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_dbgShowTokens_spec__4(v_as_3125_, v_as_x27_3126_, v_b_3127_, v_a_3128_);
lean_dec(v_as_x27_3126_);
lean_dec(v_as_3125_);
return v_res_3129_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3(lean_object* v_00_u03b2_3130_, lean_object* v_a_3131_, lean_object* v_x_3132_){
_start:
{
uint8_t v___x_3133_; 
v___x_3133_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___redArg(v_a_3131_, v_x_3132_);
return v___x_3133_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3___boxed(lean_object* v_00_u03b2_3134_, lean_object* v_a_3135_, lean_object* v_x_3136_){
_start:
{
uint8_t v_res_3137_; lean_object* v_r_3138_; 
v_res_3137_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__3(v_00_u03b2_3134_, v_a_3135_, v_x_3136_);
lean_dec(v_x_3136_);
lean_dec(v_a_3135_);
v_r_3138_ = lean_box(v_res_3137_);
return v_r_3138_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4(lean_object* v_00_u03b2_3139_, lean_object* v_data_3140_){
_start:
{
lean_object* v___x_3141_; 
v___x_3141_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4___redArg(v_data_3140_);
return v___x_3141_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_3142_, lean_object* v_i_3143_, lean_object* v_source_3144_, lean_object* v_target_3145_){
_start:
{
lean_object* v___x_3146_; 
v___x_3146_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5___redArg(v_i_3143_, v_source_3144_, v_target_3145_);
return v___x_3146_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10(lean_object* v_00_u03b2_3147_, lean_object* v_x_3148_, lean_object* v_x_3149_){
_start:
{
lean_object* v___x_3150_; 
v___x_3150_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_Server_FileWorker_dbgShowTokens_spec__2_spec__4_spec__5_spec__10___redArg(v_x_3148_, v_x_3149_);
return v___x_3150_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg(lean_object* v_beginPos_3151_, lean_object* v_doc_3152_, lean_object* v_as_x27_3153_, lean_object* v_b_3154_, lean_object* v___y_3155_){
_start:
{
if (lean_obj_tag(v_as_x27_3153_) == 0)
{
lean_object* v___x_3157_; 
lean_dec_ref(v_doc_3152_);
v___x_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3157_, 0, v_b_3154_);
return v___x_3157_;
}
else
{
lean_object* v_head_3158_; lean_object* v_tail_3159_; lean_object* v___x_3160_; uint8_t v___x_3161_; 
v_head_3158_ = lean_ctor_get(v_as_x27_3153_, 0);
v_tail_3159_ = lean_ctor_get(v_as_x27_3153_, 1);
v___x_3160_ = l_Lean_Server_Snapshots_Snapshot_endPos(v_head_3158_);
v___x_3161_ = lean_nat_dec_le(v___x_3160_, v_beginPos_3151_);
lean_dec(v___x_3160_);
if (v___x_3161_ == 0)
{
lean_object* v_toEditableDocumentCore_3162_; lean_object* v_meta_3163_; lean_object* v_text_3164_; lean_object* v_stx_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v_toEditableDocumentCore_3162_ = lean_ctor_get(v_doc_3152_, 0);
v_meta_3163_ = lean_ctor_get(v_toEditableDocumentCore_3162_, 0);
v_text_3164_ = lean_ctor_get(v_meta_3163_, 3);
v_stx_3165_ = lean_ctor_get(v_head_3158_, 0);
lean_inc(v_stx_3165_);
lean_inc_ref(v_text_3164_);
v___x_3166_ = l_Lean_Server_FileWorker_collectSyntaxBasedSemanticTokens(v_text_3164_, v_stx_3165_);
lean_inc(v_head_3158_);
v___x_3167_ = l_Lean_Server_Snapshots_Snapshot_infoTree(v_head_3158_);
v___x_3168_ = l_Lean_Server_FileWorker_collectInfoBasedSemanticTokens(v___x_3167_);
v___x_3169_ = l_Array_append___redArg(v_b_3154_, v___x_3166_);
lean_dec_ref(v___x_3166_);
v___x_3170_ = l_Array_append___redArg(v___x_3169_, v___x_3168_);
lean_dec_ref(v___x_3168_);
v___x_3171_ = l_Lean_Server_RequestM_checkCancelled(v___y_3155_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_dec_ref_known(v___x_3171_, 1);
v_as_x27_3153_ = v_tail_3159_;
v_b_3154_ = v___x_3170_;
goto _start;
}
else
{
lean_object* v_a_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3180_; 
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_doc_3152_);
v_a_3173_ = lean_ctor_get(v___x_3171_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3171_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3175_ = v___x_3171_;
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_a_3173_);
lean_dec(v___x_3171_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3180_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3178_; 
if (v_isShared_3176_ == 0)
{
v___x_3178_ = v___x_3175_;
goto v_reusejp_3177_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_a_3173_);
v___x_3178_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3177_;
}
v_reusejp_3177_:
{
return v___x_3178_;
}
}
}
}
else
{
v_as_x27_3153_ = v_tail_3159_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg___boxed(lean_object* v_beginPos_3182_, lean_object* v_doc_3183_, lean_object* v_as_x27_3184_, lean_object* v_b_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_){
_start:
{
lean_object* v_res_3188_; 
v_res_3188_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg(v_beginPos_3182_, v_doc_3183_, v_as_x27_3184_, v_b_3185_, v___y_3186_);
lean_dec_ref(v___y_3186_);
lean_dec(v_as_x27_3184_);
lean_dec(v_beginPos_3182_);
return v_res_3188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeSemanticTokens(lean_object* v_doc_3189_, lean_object* v_beginPos_3190_, lean_object* v_endPos_x3f_3191_, lean_object* v_snaps_3192_, lean_object* v_a_3193_){
_start:
{
lean_object* v_leanSemanticTokens_3195_; lean_object* v___x_3196_; 
v_leanSemanticTokens_3195_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens___closed__0));
lean_inc_ref(v_doc_3189_);
v___x_3196_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg(v_beginPos_3190_, v_doc_3189_, v_snaps_3192_, v_leanSemanticTokens_3195_, v_a_3193_);
if (lean_obj_tag(v___x_3196_) == 0)
{
lean_object* v_toEditableDocumentCore_3197_; lean_object* v_meta_3198_; lean_object* v_a_3199_; lean_object* v_text_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v_toEditableDocumentCore_3197_ = lean_ctor_get(v_doc_3189_, 0);
lean_inc_ref(v_toEditableDocumentCore_3197_);
lean_dec_ref(v_doc_3189_);
v_meta_3198_ = lean_ctor_get(v_toEditableDocumentCore_3197_, 0);
lean_inc_ref(v_meta_3198_);
lean_dec_ref(v_toEditableDocumentCore_3197_);
v_a_3199_ = lean_ctor_get(v___x_3196_, 0);
lean_inc(v_a_3199_);
lean_dec_ref_known(v___x_3196_, 1);
v_text_3200_ = lean_ctor_get(v_meta_3198_, 3);
lean_inc_ref(v_text_3200_);
lean_dec_ref(v_meta_3198_);
v___x_3201_ = l_Lean_Server_FileWorker_computeAbsoluteLspSemanticTokens(v_text_3200_, v_beginPos_3190_, v_endPos_x3f_3191_, v_a_3199_);
lean_dec(v_a_3199_);
v___x_3202_ = l_Lean_Server_RequestM_checkCancelled(v_a_3193_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v___x_3203_; lean_object* v___x_3204_; 
lean_dec_ref_known(v___x_3202_, 1);
v___x_3203_ = l_Lean_Server_FileWorker_handleOverlappingSemanticTokens(v___x_3201_);
v___x_3204_ = l_Lean_Server_RequestM_checkCancelled(v_a_3193_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3212_; 
v_isSharedCheck_3212_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3212_ == 0)
{
lean_object* v_unused_3213_; 
v_unused_3213_ = lean_ctor_get(v___x_3204_, 0);
lean_dec(v_unused_3213_);
v___x_3206_ = v___x_3204_;
v_isShared_3207_ = v_isSharedCheck_3212_;
goto v_resetjp_3205_;
}
else
{
lean_dec(v___x_3204_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3212_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3208_; lean_object* v___x_3210_; 
v___x_3208_ = l_Lean_Server_FileWorker_computeDeltaLspSemanticTokens(v___x_3203_);
if (v_isShared_3207_ == 0)
{
lean_ctor_set(v___x_3206_, 0, v___x_3208_);
v___x_3210_ = v___x_3206_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v___x_3208_);
v___x_3210_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
return v___x_3210_;
}
}
}
else
{
lean_object* v_a_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3221_; 
lean_dec_ref(v___x_3203_);
v_a_3214_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3216_ = v___x_3204_;
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_a_3214_);
lean_dec(v___x_3204_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3219_; 
if (v_isShared_3217_ == 0)
{
v___x_3219_ = v___x_3216_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_a_3214_);
v___x_3219_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
return v___x_3219_;
}
}
}
}
else
{
lean_object* v_a_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3229_; 
lean_dec_ref(v___x_3201_);
v_a_3222_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3224_ = v___x_3202_;
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_a_3222_);
lean_dec(v___x_3202_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3227_; 
if (v_isShared_3225_ == 0)
{
v___x_3227_ = v___x_3224_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_a_3222_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
}
else
{
lean_object* v_a_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3237_; 
lean_dec_ref(v_doc_3189_);
v_a_3230_ = lean_ctor_get(v___x_3196_, 0);
v_isSharedCheck_3237_ = !lean_is_exclusive(v___x_3196_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3232_ = v___x_3196_;
v_isShared_3233_ = v_isSharedCheck_3237_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_a_3230_);
lean_dec(v___x_3196_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3237_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v___x_3235_; 
if (v_isShared_3233_ == 0)
{
v___x_3235_ = v___x_3232_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v_a_3230_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
return v___x_3235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_computeSemanticTokens___boxed(lean_object* v_doc_3238_, lean_object* v_beginPos_3239_, lean_object* v_endPos_x3f_3240_, lean_object* v_snaps_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l_Lean_Server_FileWorker_computeSemanticTokens(v_doc_3238_, v_beginPos_3239_, v_endPos_x3f_3240_, v_snaps_3241_, v_a_3242_);
lean_dec_ref(v_a_3242_);
lean_dec(v_snaps_3241_);
lean_dec(v_endPos_x3f_3240_);
lean_dec(v_beginPos_3239_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0(lean_object* v_beginPos_3245_, lean_object* v_doc_3246_, lean_object* v_as_3247_, lean_object* v_as_x27_3248_, lean_object* v_b_3249_, lean_object* v_a_3250_, lean_object* v___y_3251_){
_start:
{
lean_object* v___x_3253_; 
v___x_3253_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___redArg(v_beginPos_3245_, v_doc_3246_, v_as_x27_3248_, v_b_3249_, v___y_3251_);
return v___x_3253_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0___boxed(lean_object* v_beginPos_3254_, lean_object* v_doc_3255_, lean_object* v_as_3256_, lean_object* v_as_x27_3257_, lean_object* v_b_3258_, lean_object* v_a_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v_res_3262_; 
v_res_3262_ = l_List_forIn_x27_loop___at___00Lean_Server_FileWorker_computeSemanticTokens_spec__0(v_beginPos_3254_, v_doc_3255_, v_as_3256_, v_as_x27_3257_, v_b_3258_, v_a_3259_, v___y_3260_);
lean_dec_ref(v___y_3260_);
lean_dec(v_as_x27_3257_);
lean_dec(v_as_3256_);
lean_dec(v_beginPos_3254_);
return v_res_3262_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instInhabitedSemanticTokensState_default(void){
_start:
{
lean_object* v___x_3271_; 
v___x_3271_ = lean_box(0);
return v___x_3271_;
}
}
static lean_object* _init_l_Lean_Server_FileWorker_instInhabitedSemanticTokensState(void){
_start:
{
lean_object* v___x_3272_; 
v___x_3272_ = lean_box(0);
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0(lean_object* v___y_3273_){
_start:
{
lean_object* v_doc_3275_; lean_object* v___x_3276_; 
v_doc_3275_ = lean_ctor_get(v___y_3273_, 1);
lean_inc_ref(v_doc_3275_);
v___x_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3276_, 0, v_doc_3275_);
return v___x_3276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0___boxed(lean_object* v___y_3277_, lean_object* v___y_3278_){
_start:
{
lean_object* v_res_3279_; 
v_res_3279_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0(v___y_3277_);
lean_dec_ref(v___y_3277_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg(lean_object* v_a_3280_){
_start:
{
lean_object* v___x_3282_; lean_object* v_a_3283_; lean_object* v_toEditableDocumentCore_3284_; lean_object* v_cmdSnaps_3285_; lean_object* v_cancelTk_3286_; uint32_t v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v_snd_3290_; lean_object* v_fst_3291_; lean_object* v_snd_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3321_; 
v___x_3282_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0(v_a_3280_);
v_a_3283_ = lean_ctor_get(v___x_3282_, 0);
lean_inc(v_a_3283_);
lean_dec_ref(v___x_3282_);
v_toEditableDocumentCore_3284_ = lean_ctor_get(v_a_3283_, 0);
v_cmdSnaps_3285_ = lean_ctor_get(v_toEditableDocumentCore_3284_, 2);
v_cancelTk_3286_ = lean_ctor_get(v_a_3280_, 4);
v___x_3287_ = 3000;
v___x_3288_ = l_Lean_Server_RequestCancellationToken_cancellationTasks(v_cancelTk_3286_);
lean_inc(v_cmdSnaps_3285_);
v___x_3289_ = l_Lean_AsyncList_getFinishedPrefixWithTimeout___redArg(v_cmdSnaps_3285_, v___x_3287_, v___x_3288_);
v_snd_3290_ = lean_ctor_get(v___x_3289_, 1);
lean_inc(v_snd_3290_);
v_fst_3291_ = lean_ctor_get(v___x_3289_, 0);
lean_inc(v_fst_3291_);
lean_dec_ref(v___x_3289_);
v_snd_3292_ = lean_ctor_get(v_snd_3290_, 1);
v_isSharedCheck_3321_ = !lean_is_exclusive(v_snd_3290_);
if (v_isSharedCheck_3321_ == 0)
{
lean_object* v_unused_3322_; 
v_unused_3322_ = lean_ctor_get(v_snd_3290_, 0);
lean_dec(v_unused_3322_);
v___x_3294_ = v_snd_3290_;
v_isShared_3295_ = v_isSharedCheck_3321_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_snd_3292_);
lean_dec(v_snd_3290_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3321_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
v___x_3296_ = lean_unsigned_to_nat(0u);
v___x_3297_ = lean_box(0);
v___x_3298_ = l_Lean_Server_FileWorker_computeSemanticTokens(v_a_3283_, v___x_3296_, v___x_3297_, v_fst_3291_, v_a_3280_);
lean_dec(v_fst_3291_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3312_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3312_ == 0)
{
v___x_3301_ = v___x_3298_;
v_isShared_3302_ = v_isSharedCheck_3312_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v___x_3298_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3312_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3303_; uint8_t v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3307_; 
v___x_3303_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3303_, 0, v_a_3299_);
v___x_3304_ = lean_unbox(v_snd_3292_);
lean_dec(v_snd_3292_);
lean_ctor_set_uint8(v___x_3303_, sizeof(void*)*1, v___x_3304_);
v___x_3305_ = lean_box(0);
if (v_isShared_3295_ == 0)
{
lean_ctor_set(v___x_3294_, 1, v___x_3305_);
lean_ctor_set(v___x_3294_, 0, v___x_3303_);
v___x_3307_ = v___x_3294_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v___x_3303_);
lean_ctor_set(v_reuseFailAlloc_3311_, 1, v___x_3305_);
v___x_3307_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
lean_object* v___x_3309_; 
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 0, v___x_3307_);
v___x_3309_ = v___x_3301_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v___x_3307_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
}
}
else
{
lean_object* v_a_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3320_; 
lean_del_object(v___x_3294_);
lean_dec(v_snd_3292_);
v_a_3313_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3315_ = v___x_3298_;
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_a_3313_);
lean_dec(v___x_3298_);
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
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg___boxed(lean_object* v_a_3323_, lean_object* v_a_3324_){
_start:
{
lean_object* v_res_3325_; 
v_res_3325_ = l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg(v_a_3323_);
lean_dec_ref(v_a_3323_);
return v_res_3325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull(lean_object* v_x_3326_, lean_object* v_x_3327_, lean_object* v_a_3328_){
_start:
{
lean_object* v___x_3330_; 
v___x_3330_ = l_Lean_Server_FileWorker_handleSemanticTokensFull___redArg(v_a_3328_);
return v___x_3330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensFull___boxed(lean_object* v_x_3331_, lean_object* v_x_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_){
_start:
{
lean_object* v_res_3335_; 
v_res_3335_ = l_Lean_Server_FileWorker_handleSemanticTokensFull(v_x_3331_, v_x_3332_, v_a_3333_);
lean_dec_ref(v_a_3333_);
lean_dec_ref(v_x_3331_);
return v_res_3335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg(lean_object* v_a_3336_){
_start:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3338_ = lean_box(0);
v___x_3339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
lean_ctor_set(v___x_3339_, 1, v_a_3336_);
v___x_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3339_);
return v___x_3340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg___boxed(lean_object* v_a_3341_, lean_object* v_a_3342_){
_start:
{
lean_object* v_res_3343_; 
v_res_3343_ = l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg(v_a_3341_);
return v_res_3343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange(lean_object* v_x_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_){
_start:
{
lean_object* v___x_3348_; 
v___x_3348_ = l_Lean_Server_FileWorker_handleSemanticTokensDidChange___redArg(v_a_3345_);
return v___x_3348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensDidChange___boxed(lean_object* v_x_3349_, lean_object* v_a_3350_, lean_object* v_a_3351_, lean_object* v_a_3352_){
_start:
{
lean_object* v_res_3353_; 
v_res_3353_ = l_Lean_Server_FileWorker_handleSemanticTokensDidChange(v_x_3349_, v_a_3350_, v_a_3351_);
lean_dec_ref(v_a_3351_);
lean_dec_ref(v_x_3349_);
return v_res_3353_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0(lean_object* v___x_3354_, lean_object* v_x_3355_){
_start:
{
lean_object* v___x_3356_; uint8_t v___x_3357_; 
v___x_3356_ = l_Lean_Server_Snapshots_Snapshot_endPos(v_x_3355_);
v___x_3357_ = lean_nat_dec_le(v___x_3354_, v___x_3356_);
lean_dec(v___x_3356_);
return v___x_3357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0___boxed(lean_object* v___x_3358_, lean_object* v_x_3359_){
_start:
{
uint8_t v_res_3360_; lean_object* v_r_3361_; 
v_res_3360_ = l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0(v___x_3358_, v_x_3359_);
lean_dec_ref(v_x_3359_);
lean_dec(v___x_3358_);
v_r_3361_ = lean_box(v_res_3360_);
return v_r_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1(lean_object* v___x_3362_, lean_object* v_a_3363_, lean_object* v___x_3364_, lean_object* v_x_3365_, lean_object* v___y_3366_){
_start:
{
lean_object* v_fst_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v_fst_3368_ = lean_ctor_get(v_x_3365_, 0);
v___x_3369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3362_);
v___x_3370_ = l_Lean_Server_FileWorker_computeSemanticTokens(v_a_3363_, v___x_3364_, v___x_3369_, v_fst_3368_, v___y_3366_);
lean_dec_ref_known(v___x_3369_, 1);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1___boxed(lean_object* v___x_3371_, lean_object* v_a_3372_, lean_object* v___x_3373_, lean_object* v_x_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1(v___x_3371_, v_a_3372_, v___x_3373_, v_x_3374_, v___y_3375_);
lean_dec_ref(v___y_3375_);
lean_dec_ref(v_x_3374_);
lean_dec(v___x_3373_);
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange(lean_object* v_p_3378_, lean_object* v_a_3379_){
_start:
{
lean_object* v___x_3381_; lean_object* v_a_3382_; lean_object* v_toEditableDocumentCore_3383_; lean_object* v_meta_3384_; lean_object* v_range_3385_; lean_object* v_cmdSnaps_3386_; lean_object* v_text_3387_; lean_object* v_start_3388_; lean_object* v_end_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___f_3392_; lean_object* v___f_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3381_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_FileWorker_handleSemanticTokensFull_spec__0(v_a_3379_);
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
lean_inc(v_a_3382_);
lean_dec_ref(v___x_3381_);
v_toEditableDocumentCore_3383_ = lean_ctor_get(v_a_3382_, 0);
v_meta_3384_ = lean_ctor_get(v_toEditableDocumentCore_3383_, 0);
v_range_3385_ = lean_ctor_get(v_p_3378_, 1);
lean_inc_ref(v_range_3385_);
lean_dec_ref(v_p_3378_);
v_cmdSnaps_3386_ = lean_ctor_get(v_toEditableDocumentCore_3383_, 2);
lean_inc(v_cmdSnaps_3386_);
v_text_3387_ = lean_ctor_get(v_meta_3384_, 3);
v_start_3388_ = lean_ctor_get(v_range_3385_, 0);
lean_inc_ref(v_start_3388_);
v_end_3389_ = lean_ctor_get(v_range_3385_, 1);
lean_inc_ref(v_end_3389_);
lean_dec_ref(v_range_3385_);
v___x_3390_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_3387_, v_start_3388_);
v___x_3391_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_3387_, v_end_3389_);
lean_inc(v___x_3391_);
v___f_3392_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3392_, 0, v___x_3391_);
v___f_3393_ = lean_alloc_closure((void*)(l_Lean_Server_FileWorker_handleSemanticTokensRange___lam__1___boxed), 6, 3);
lean_closure_set(v___f_3393_, 0, v___x_3391_);
lean_closure_set(v___f_3393_, 1, v_a_3382_);
lean_closure_set(v___f_3393_, 2, v___x_3390_);
v___x_3394_ = l_Lean_AsyncList_waitUntil___redArg(v___f_3392_, v_cmdSnaps_3386_);
v___x_3395_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_3394_, v___f_3393_, v_a_3379_);
return v___x_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_FileWorker_handleSemanticTokensRange___boxed(lean_object* v_p_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_){
_start:
{
lean_object* v_res_3399_; 
v_res_3399_ = l_Lean_Server_FileWorker_handleSemanticTokensRange(v_p_3396_, v_a_3397_);
lean_dec_ref(v_a_3397_);
return v_res_3399_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg(lean_object* v_keys_3400_, lean_object* v_i_3401_, lean_object* v_k_3402_){
_start:
{
lean_object* v___x_3403_; uint8_t v___x_3404_; 
v___x_3403_ = lean_array_get_size(v_keys_3400_);
v___x_3404_ = lean_nat_dec_lt(v_i_3401_, v___x_3403_);
if (v___x_3404_ == 0)
{
lean_dec(v_i_3401_);
return v___x_3404_;
}
else
{
lean_object* v_k_x27_3405_; uint8_t v___x_3406_; 
v_k_x27_3405_ = lean_array_fget_borrowed(v_keys_3400_, v_i_3401_);
v___x_3406_ = lean_string_dec_eq(v_k_3402_, v_k_x27_3405_);
if (v___x_3406_ == 0)
{
lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3407_ = lean_unsigned_to_nat(1u);
v___x_3408_ = lean_nat_add(v_i_3401_, v___x_3407_);
lean_dec(v_i_3401_);
v_i_3401_ = v___x_3408_;
goto _start;
}
else
{
lean_dec(v_i_3401_);
return v___x_3404_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_keys_3410_, lean_object* v_i_3411_, lean_object* v_k_3412_){
_start:
{
uint8_t v_res_3413_; lean_object* v_r_3414_; 
v_res_3413_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg(v_keys_3410_, v_i_3411_, v_k_3412_);
lean_dec_ref(v_k_3412_);
lean_dec_ref(v_keys_3410_);
v_r_3414_ = lean_box(v_res_3413_);
return v_r_3414_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg(lean_object* v_x_3415_, size_t v_x_3416_, lean_object* v_x_3417_){
_start:
{
if (lean_obj_tag(v_x_3415_) == 0)
{
lean_object* v_es_3418_; lean_object* v___x_3419_; size_t v___x_3420_; size_t v___x_3421_; lean_object* v_j_3422_; lean_object* v___x_3423_; 
v_es_3418_ = lean_ctor_get(v_x_3415_, 0);
v___x_3419_ = lean_box(2);
v___x_3420_ = ((size_t)31ULL);
v___x_3421_ = lean_usize_land(v_x_3416_, v___x_3420_);
v_j_3422_ = lean_usize_to_nat(v___x_3421_);
v___x_3423_ = lean_array_get_borrowed(v___x_3419_, v_es_3418_, v_j_3422_);
lean_dec(v_j_3422_);
switch(lean_obj_tag(v___x_3423_))
{
case 0:
{
lean_object* v_key_3424_; uint8_t v___x_3425_; 
v_key_3424_ = lean_ctor_get(v___x_3423_, 0);
v___x_3425_ = lean_string_dec_eq(v_x_3417_, v_key_3424_);
return v___x_3425_;
}
case 1:
{
lean_object* v_node_3426_; size_t v___x_3427_; size_t v___x_3428_; 
v_node_3426_ = lean_ctor_get(v___x_3423_, 0);
v___x_3427_ = ((size_t)5ULL);
v___x_3428_ = lean_usize_shift_right(v_x_3416_, v___x_3427_);
v_x_3415_ = v_node_3426_;
v_x_3416_ = v___x_3428_;
goto _start;
}
default: 
{
uint8_t v___x_3430_; 
v___x_3430_ = 0;
return v___x_3430_;
}
}
}
else
{
lean_object* v_ks_3431_; lean_object* v___x_3432_; uint8_t v___x_3433_; 
v_ks_3431_ = lean_ctor_get(v_x_3415_, 0);
v___x_3432_ = lean_unsigned_to_nat(0u);
v___x_3433_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg(v_ks_3431_, v___x_3432_, v_x_3417_);
return v___x_3433_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_x_3434_, lean_object* v_x_3435_, lean_object* v_x_3436_){
_start:
{
size_t v_x_2576__boxed_3437_; uint8_t v_res_3438_; lean_object* v_r_3439_; 
v_x_2576__boxed_3437_ = lean_unbox_usize(v_x_3435_);
lean_dec(v_x_3435_);
v_res_3438_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg(v_x_3434_, v_x_2576__boxed_3437_, v_x_3436_);
lean_dec_ref(v_x_3436_);
lean_dec_ref(v_x_3434_);
v_r_3439_ = lean_box(v_res_3438_);
return v_r_3439_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object* v_x_3440_, lean_object* v_x_3441_){
_start:
{
uint64_t v___x_3442_; size_t v___x_3443_; uint8_t v___x_3444_; 
v___x_3442_ = lean_string_hash(v_x_3441_);
v___x_3443_ = lean_uint64_to_usize(v___x_3442_);
v___x_3444_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg(v_x_3440_, v___x_3443_, v_x_3441_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg___boxed(lean_object* v_x_3445_, lean_object* v_x_3446_){
_start:
{
uint8_t v_res_3447_; lean_object* v_r_3448_; 
v_res_3447_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(v_x_3445_, v_x_3446_);
lean_dec_ref(v_x_3446_);
lean_dec_ref(v_x_3445_);
v_r_3448_ = lean_box(v_res_3447_);
return v_r_3448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4(lean_object* v___x_3449_, lean_object* v_x_3450_){
_start:
{
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4___boxed(lean_object* v___x_3451_, lean_object* v_x_3452_){
_start:
{
lean_object* v_res_3453_; 
v_res_3453_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__4(v___x_3451_, v_x_3452_);
lean_dec_ref(v_x_3452_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10___redArg(lean_object* v_x_3454_, lean_object* v_x_3455_, lean_object* v_x_3456_, lean_object* v_x_3457_){
_start:
{
lean_object* v_ks_3458_; lean_object* v_vs_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3483_; 
v_ks_3458_ = lean_ctor_get(v_x_3454_, 0);
v_vs_3459_ = lean_ctor_get(v_x_3454_, 1);
v_isSharedCheck_3483_ = !lean_is_exclusive(v_x_3454_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3461_ = v_x_3454_;
v_isShared_3462_ = v_isSharedCheck_3483_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_vs_3459_);
lean_inc(v_ks_3458_);
lean_dec(v_x_3454_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3483_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v___x_3463_; uint8_t v___x_3464_; 
v___x_3463_ = lean_array_get_size(v_ks_3458_);
v___x_3464_ = lean_nat_dec_lt(v_x_3455_, v___x_3463_);
if (v___x_3464_ == 0)
{
lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3468_; 
lean_dec(v_x_3455_);
v___x_3465_ = lean_array_push(v_ks_3458_, v_x_3456_);
v___x_3466_ = lean_array_push(v_vs_3459_, v_x_3457_);
if (v_isShared_3462_ == 0)
{
lean_ctor_set(v___x_3461_, 1, v___x_3466_);
lean_ctor_set(v___x_3461_, 0, v___x_3465_);
v___x_3468_ = v___x_3461_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v___x_3465_);
lean_ctor_set(v_reuseFailAlloc_3469_, 1, v___x_3466_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
return v___x_3468_;
}
}
else
{
lean_object* v_k_x27_3470_; uint8_t v___x_3471_; 
v_k_x27_3470_ = lean_array_fget_borrowed(v_ks_3458_, v_x_3455_);
v___x_3471_ = lean_string_dec_eq(v_x_3456_, v_k_x27_3470_);
if (v___x_3471_ == 0)
{
lean_object* v___x_3473_; 
if (v_isShared_3462_ == 0)
{
v___x_3473_ = v___x_3461_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v_ks_3458_);
lean_ctor_set(v_reuseFailAlloc_3477_, 1, v_vs_3459_);
v___x_3473_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3474_ = lean_unsigned_to_nat(1u);
v___x_3475_ = lean_nat_add(v_x_3455_, v___x_3474_);
lean_dec(v_x_3455_);
v_x_3454_ = v___x_3473_;
v_x_3455_ = v___x_3475_;
goto _start;
}
}
else
{
lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3481_; 
v___x_3478_ = lean_array_fset(v_ks_3458_, v_x_3455_, v_x_3456_);
v___x_3479_ = lean_array_fset(v_vs_3459_, v_x_3455_, v_x_3457_);
lean_dec(v_x_3455_);
if (v_isShared_3462_ == 0)
{
lean_ctor_set(v___x_3461_, 1, v___x_3479_);
lean_ctor_set(v___x_3461_, 0, v___x_3478_);
v___x_3481_ = v___x_3461_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v___x_3478_);
lean_ctor_set(v_reuseFailAlloc_3482_, 1, v___x_3479_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8___redArg(lean_object* v_n_3484_, lean_object* v_k_3485_, lean_object* v_v_3486_){
_start:
{
lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3487_ = lean_unsigned_to_nat(0u);
v___x_3488_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10___redArg(v_n_3484_, v___x_3487_, v_k_3485_, v_v_3486_);
return v___x_3488_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_3489_; 
v___x_3489_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_3489_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(lean_object* v_x_3490_, size_t v_x_3491_, size_t v_x_3492_, lean_object* v_x_3493_, lean_object* v_x_3494_){
_start:
{
if (lean_obj_tag(v_x_3490_) == 0)
{
lean_object* v_es_3495_; size_t v___x_3496_; size_t v___x_3497_; lean_object* v_j_3498_; lean_object* v___x_3499_; uint8_t v___x_3500_; 
v_es_3495_ = lean_ctor_get(v_x_3490_, 0);
v___x_3496_ = ((size_t)31ULL);
v___x_3497_ = lean_usize_land(v_x_3491_, v___x_3496_);
v_j_3498_ = lean_usize_to_nat(v___x_3497_);
v___x_3499_ = lean_array_get_size(v_es_3495_);
v___x_3500_ = lean_nat_dec_lt(v_j_3498_, v___x_3499_);
if (v___x_3500_ == 0)
{
lean_dec(v_j_3498_);
lean_dec(v_x_3494_);
lean_dec_ref(v_x_3493_);
return v_x_3490_;
}
else
{
lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3539_; 
lean_inc_ref(v_es_3495_);
v_isSharedCheck_3539_ = !lean_is_exclusive(v_x_3490_);
if (v_isSharedCheck_3539_ == 0)
{
lean_object* v_unused_3540_; 
v_unused_3540_ = lean_ctor_get(v_x_3490_, 0);
lean_dec(v_unused_3540_);
v___x_3502_ = v_x_3490_;
v_isShared_3503_ = v_isSharedCheck_3539_;
goto v_resetjp_3501_;
}
else
{
lean_dec(v_x_3490_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3539_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v_v_3504_; lean_object* v___x_3505_; lean_object* v_xs_x27_3506_; lean_object* v___y_3508_; 
v_v_3504_ = lean_array_fget(v_es_3495_, v_j_3498_);
v___x_3505_ = lean_box(0);
v_xs_x27_3506_ = lean_array_fset(v_es_3495_, v_j_3498_, v___x_3505_);
switch(lean_obj_tag(v_v_3504_))
{
case 0:
{
lean_object* v_key_3513_; lean_object* v_val_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3524_; 
v_key_3513_ = lean_ctor_get(v_v_3504_, 0);
v_val_3514_ = lean_ctor_get(v_v_3504_, 1);
v_isSharedCheck_3524_ = !lean_is_exclusive(v_v_3504_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3516_ = v_v_3504_;
v_isShared_3517_ = v_isSharedCheck_3524_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_val_3514_);
lean_inc(v_key_3513_);
lean_dec(v_v_3504_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3524_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
uint8_t v___x_3518_; 
v___x_3518_ = lean_string_dec_eq(v_x_3493_, v_key_3513_);
if (v___x_3518_ == 0)
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
lean_del_object(v___x_3516_);
v___x_3519_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3513_, v_val_3514_, v_x_3493_, v_x_3494_);
v___x_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
v___y_3508_ = v___x_3520_;
goto v___jp_3507_;
}
else
{
lean_object* v___x_3522_; 
lean_dec(v_val_3514_);
lean_dec(v_key_3513_);
if (v_isShared_3517_ == 0)
{
lean_ctor_set(v___x_3516_, 1, v_x_3494_);
lean_ctor_set(v___x_3516_, 0, v_x_3493_);
v___x_3522_ = v___x_3516_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_x_3493_);
lean_ctor_set(v_reuseFailAlloc_3523_, 1, v_x_3494_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
v___y_3508_ = v___x_3522_;
goto v___jp_3507_;
}
}
}
}
case 1:
{
lean_object* v_node_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3537_; 
v_node_3525_ = lean_ctor_get(v_v_3504_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v_v_3504_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3527_ = v_v_3504_;
v_isShared_3528_ = v_isSharedCheck_3537_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_node_3525_);
lean_dec(v_v_3504_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3537_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
size_t v___x_3529_; size_t v___x_3530_; size_t v___x_3531_; size_t v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3535_; 
v___x_3529_ = ((size_t)5ULL);
v___x_3530_ = lean_usize_shift_right(v_x_3491_, v___x_3529_);
v___x_3531_ = ((size_t)1ULL);
v___x_3532_ = lean_usize_add(v_x_3492_, v___x_3531_);
v___x_3533_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_node_3525_, v___x_3530_, v___x_3532_, v_x_3493_, v_x_3494_);
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v___x_3533_);
v___x_3535_ = v___x_3527_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v___x_3533_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
v___y_3508_ = v___x_3535_;
goto v___jp_3507_;
}
}
}
default: 
{
lean_object* v___x_3538_; 
v___x_3538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3538_, 0, v_x_3493_);
lean_ctor_set(v___x_3538_, 1, v_x_3494_);
v___y_3508_ = v___x_3538_;
goto v___jp_3507_;
}
}
v___jp_3507_:
{
lean_object* v___x_3509_; lean_object* v___x_3511_; 
v___x_3509_ = lean_array_fset(v_xs_x27_3506_, v_j_3498_, v___y_3508_);
lean_dec(v_j_3498_);
if (v_isShared_3503_ == 0)
{
lean_ctor_set(v___x_3502_, 0, v___x_3509_);
v___x_3511_ = v___x_3502_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v___x_3509_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
}
else
{
lean_object* v_ks_3541_; lean_object* v_vs_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3560_; 
v_ks_3541_ = lean_ctor_get(v_x_3490_, 0);
v_vs_3542_ = lean_ctor_get(v_x_3490_, 1);
v_isSharedCheck_3560_ = !lean_is_exclusive(v_x_3490_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3544_ = v_x_3490_;
v_isShared_3545_ = v_isSharedCheck_3560_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_vs_3542_);
lean_inc(v_ks_3541_);
lean_dec(v_x_3490_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3560_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___x_3547_; 
if (v_isShared_3545_ == 0)
{
v___x_3547_ = v___x_3544_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_ks_3541_);
lean_ctor_set(v_reuseFailAlloc_3559_, 1, v_vs_3542_);
v___x_3547_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
lean_object* v_newNode_3548_; size_t v___x_3549_; uint8_t v___x_3550_; 
v_newNode_3548_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8___redArg(v___x_3547_, v_x_3493_, v_x_3494_);
v___x_3549_ = ((size_t)7ULL);
v___x_3550_ = lean_usize_dec_le(v___x_3549_, v_x_3492_);
if (v___x_3550_ == 0)
{
lean_object* v___x_3551_; lean_object* v___x_3552_; uint8_t v___x_3553_; 
v___x_3551_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3548_);
v___x_3552_ = lean_unsigned_to_nat(4u);
v___x_3553_ = lean_nat_dec_lt(v___x_3551_, v___x_3552_);
lean_dec(v___x_3551_);
if (v___x_3553_ == 0)
{
lean_object* v_ks_3554_; lean_object* v_vs_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; 
v_ks_3554_ = lean_ctor_get(v_newNode_3548_, 0);
lean_inc_ref(v_ks_3554_);
v_vs_3555_ = lean_ctor_get(v_newNode_3548_, 1);
lean_inc_ref(v_vs_3555_);
lean_dec_ref(v_newNode_3548_);
v___x_3556_ = lean_unsigned_to_nat(0u);
v___x_3557_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0);
v___x_3558_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg(v_x_3492_, v_ks_3554_, v_vs_3555_, v___x_3556_, v___x_3557_);
lean_dec_ref(v_vs_3555_);
lean_dec_ref(v_ks_3554_);
return v___x_3558_;
}
else
{
return v_newNode_3548_;
}
}
else
{
return v_newNode_3548_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg(size_t v_depth_3561_, lean_object* v_keys_3562_, lean_object* v_vals_3563_, lean_object* v_i_3564_, lean_object* v_entries_3565_){
_start:
{
lean_object* v___x_3566_; uint8_t v___x_3567_; 
v___x_3566_ = lean_array_get_size(v_keys_3562_);
v___x_3567_ = lean_nat_dec_lt(v_i_3564_, v___x_3566_);
if (v___x_3567_ == 0)
{
lean_dec(v_i_3564_);
return v_entries_3565_;
}
else
{
lean_object* v_k_3568_; lean_object* v_v_3569_; uint64_t v___x_3570_; size_t v_h_3571_; size_t v___x_3572_; lean_object* v___x_3573_; size_t v___x_3574_; size_t v___x_3575_; size_t v___x_3576_; size_t v_h_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; 
v_k_3568_ = lean_array_fget_borrowed(v_keys_3562_, v_i_3564_);
v_v_3569_ = lean_array_fget_borrowed(v_vals_3563_, v_i_3564_);
v___x_3570_ = lean_string_hash(v_k_3568_);
v_h_3571_ = lean_uint64_to_usize(v___x_3570_);
v___x_3572_ = ((size_t)5ULL);
v___x_3573_ = lean_unsigned_to_nat(1u);
v___x_3574_ = ((size_t)1ULL);
v___x_3575_ = lean_usize_sub(v_depth_3561_, v___x_3574_);
v___x_3576_ = lean_usize_mul(v___x_3572_, v___x_3575_);
v_h_3577_ = lean_usize_shift_right(v_h_3571_, v___x_3576_);
v___x_3578_ = lean_nat_add(v_i_3564_, v___x_3573_);
lean_dec(v_i_3564_);
lean_inc(v_v_3569_);
lean_inc(v_k_3568_);
v___x_3579_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_entries_3565_, v_h_3577_, v_depth_3561_, v_k_3568_, v_v_3569_);
v_i_3564_ = v___x_3578_;
v_entries_3565_ = v___x_3579_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_depth_3581_, lean_object* v_keys_3582_, lean_object* v_vals_3583_, lean_object* v_i_3584_, lean_object* v_entries_3585_){
_start:
{
size_t v_depth_boxed_3586_; lean_object* v_res_3587_; 
v_depth_boxed_3586_ = lean_unbox_usize(v_depth_3581_);
lean_dec(v_depth_3581_);
v_res_3587_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg(v_depth_boxed_3586_, v_keys_3582_, v_vals_3583_, v_i_3584_, v_entries_3585_);
lean_dec_ref(v_vals_3583_);
lean_dec_ref(v_keys_3582_);
return v_res_3587_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___boxed(lean_object* v_x_3588_, lean_object* v_x_3589_, lean_object* v_x_3590_, lean_object* v_x_3591_, lean_object* v_x_3592_){
_start:
{
size_t v_x_2711__boxed_3593_; size_t v_x_2712__boxed_3594_; lean_object* v_res_3595_; 
v_x_2711__boxed_3593_ = lean_unbox_usize(v_x_3589_);
lean_dec(v_x_3589_);
v_x_2712__boxed_3594_ = lean_unbox_usize(v_x_3590_);
lean_dec(v_x_3590_);
v_res_3595_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_x_3588_, v_x_2711__boxed_3593_, v_x_2712__boxed_3594_, v_x_3591_, v_x_3592_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3___redArg(lean_object* v_x_3596_, lean_object* v_x_3597_, lean_object* v_x_3598_){
_start:
{
uint64_t v___x_3599_; size_t v___x_3600_; size_t v___x_3601_; lean_object* v___x_3602_; 
v___x_3599_ = lean_string_hash(v_x_3597_);
v___x_3600_ = lean_uint64_to_usize(v___x_3599_);
v___x_3601_ = ((size_t)1ULL);
v___x_3602_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_x_3596_, v___x_3600_, v___x_3601_, v_x_3597_, v_x_3598_);
return v___x_3602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12(lean_object* v_params_3604_){
_start:
{
lean_object* v___x_3605_; 
lean_inc(v_params_3604_);
v___x_3605_ = l_Lean_Lsp_instFromJsonSemanticTokensParams_fromJson(v_params_3604_);
if (lean_obj_tag(v___x_3605_) == 0)
{
lean_object* v_a_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3621_; 
v_a_3606_ = lean_ctor_get(v___x_3605_, 0);
v_isSharedCheck_3621_ = !lean_is_exclusive(v___x_3605_);
if (v_isSharedCheck_3621_ == 0)
{
v___x_3608_ = v___x_3605_;
v_isShared_3609_ = v_isSharedCheck_3621_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_a_3606_);
lean_dec(v___x_3605_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3621_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
uint8_t v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3619_; 
v___x_3610_ = 3;
v___x_3611_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12___closed__0));
v___x_3612_ = l_Lean_Json_compress(v_params_3604_);
v___x_3613_ = lean_string_append(v___x_3611_, v___x_3612_);
lean_dec_ref(v___x_3612_);
v___x_3614_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine___closed__0));
v___x_3615_ = lean_string_append(v___x_3613_, v___x_3614_);
v___x_3616_ = lean_string_append(v___x_3615_, v_a_3606_);
lean_dec(v_a_3606_);
v___x_3617_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3617_, 0, v___x_3616_);
lean_ctor_set_uint8(v___x_3617_, sizeof(void*)*1, v___x_3610_);
if (v_isShared_3609_ == 0)
{
lean_ctor_set(v___x_3608_, 0, v___x_3617_);
v___x_3619_ = v___x_3608_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v___x_3617_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
return v___x_3619_;
}
}
}
else
{
lean_object* v_a_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3629_; 
lean_dec(v_params_3604_);
v_a_3622_ = lean_ctor_get(v___x_3605_, 0);
v_isSharedCheck_3629_ = !lean_is_exclusive(v___x_3605_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3624_ = v___x_3605_;
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_a_3622_);
lean_dec(v___x_3605_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3627_; 
if (v_isShared_3625_ == 0)
{
v___x_3627_ = v___x_3624_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v_a_3622_);
v___x_3627_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
return v___x_3627_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg(lean_object* v_params_3630_){
_start:
{
lean_object* v___x_3632_; 
v___x_3632_ = l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12(v_params_3630_);
if (lean_obj_tag(v___x_3632_) == 0)
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
v_a_3633_ = lean_ctor_get(v___x_3632_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3632_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3632_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
lean_ctor_set_tag(v___x_3635_, 1);
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
else
{
lean_object* v_a_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3648_; 
v_a_3641_ = lean_ctor_get(v___x_3632_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3643_ = v___x_3632_;
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_a_3641_);
lean_dec(v___x_3632_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3648_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___x_3646_; 
if (v_isShared_3644_ == 0)
{
lean_ctor_set_tag(v___x_3643_, 0);
v___x_3646_ = v___x_3643_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_a_3641_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg___boxed(lean_object* v_params_3649_, lean_object* v_a_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg(v_params_3649_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1(lean_object* v_method_3652_, lean_object* v_inst_3653_, lean_object* v_handler_3654_, lean_object* v_param_3655_, lean_object* v_state_3656_, lean_object* v___y_3657_){
_start:
{
lean_object* v___x_3659_; 
v___x_3659_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg(v_param_3655_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v_a_3660_; lean_object* v___x_3661_; 
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
lean_inc(v_a_3660_);
lean_dec_ref_known(v___x_3659_, 1);
v___x_3661_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(v_method_3652_, v_state_3656_, lean_box(0), v_inst_3653_, v___y_3657_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3663_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
lean_inc(v_a_3662_);
lean_dec_ref_known(v___x_3661_, 1);
lean_inc_ref(v___y_3657_);
v___x_3663_ = lean_apply_4(v_handler_3654_, v_a_3660_, v_a_3662_, v___y_3657_, lean_box(0));
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3687_; 
v_a_3664_ = lean_ctor_get(v___x_3663_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3666_ = v___x_3663_;
v_isShared_3667_ = v_isSharedCheck_3687_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3663_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3687_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v_fst_3668_; lean_object* v_snd_3669_; lean_object* v___x_3671_; uint8_t v_isShared_3672_; uint8_t v_isSharedCheck_3686_; 
v_fst_3668_ = lean_ctor_get(v_a_3664_, 0);
v_snd_3669_ = lean_ctor_get(v_a_3664_, 1);
v_isSharedCheck_3686_ = !lean_is_exclusive(v_a_3664_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3671_ = v_a_3664_;
v_isShared_3672_ = v_isSharedCheck_3686_;
goto v_resetjp_3670_;
}
else
{
lean_inc(v_snd_3669_);
lean_inc(v_fst_3668_);
lean_dec(v_a_3664_);
v___x_3671_ = lean_box(0);
v_isShared_3672_ = v_isSharedCheck_3686_;
goto v_resetjp_3670_;
}
v_resetjp_3670_:
{
lean_object* v_response_3673_; uint8_t v_isComplete_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3680_; 
v_response_3673_ = lean_ctor_get(v_fst_3668_, 0);
lean_inc(v_response_3673_);
v_isComplete_3674_ = lean_ctor_get_uint8(v_fst_3668_, sizeof(void*)*1);
lean_dec(v_fst_3668_);
v___x_3675_ = l_Lean_Lsp_instToJsonSemanticTokens_toJson(v_response_3673_);
lean_inc(v___x_3675_);
v___x_3676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3675_);
v___x_3677_ = l_Lean_Json_compress(v___x_3675_);
v___x_3678_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3678_, 0, v___x_3676_);
lean_ctor_set(v___x_3678_, 1, v___x_3677_);
lean_ctor_set_uint8(v___x_3678_, sizeof(void*)*2, v_isComplete_3674_);
if (v_isShared_3672_ == 0)
{
lean_ctor_set(v___x_3671_, 0, v_inst_3653_);
v___x_3680_ = v___x_3671_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v_inst_3653_);
lean_ctor_set(v_reuseFailAlloc_3685_, 1, v_snd_3669_);
v___x_3680_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
lean_object* v___x_3681_; lean_object* v___x_3683_; 
v___x_3681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3681_, 0, v___x_3678_);
lean_ctor_set(v___x_3681_, 1, v___x_3680_);
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 0, v___x_3681_);
v___x_3683_ = v___x_3666_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v___x_3681_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
}
}
else
{
lean_object* v_a_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3695_; 
lean_dec(v_inst_3653_);
v_a_3688_ = lean_ctor_get(v___x_3663_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3690_ = v___x_3663_;
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_a_3688_);
lean_dec(v___x_3663_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3693_; 
if (v_isShared_3691_ == 0)
{
v___x_3693_ = v___x_3690_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v_a_3688_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
}
else
{
lean_object* v_a_3696_; lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3703_; 
lean_dec(v_a_3660_);
lean_dec_ref(v_handler_3654_);
lean_dec(v_inst_3653_);
v_a_3696_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3698_ = v___x_3661_;
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
else
{
lean_inc(v_a_3696_);
lean_dec(v___x_3661_);
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
else
{
lean_object* v_a_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3711_; 
lean_dec_ref(v_handler_3654_);
lean_dec(v_inst_3653_);
v_a_3704_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3711_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3706_ = v___x_3659_;
v_isShared_3707_ = v_isSharedCheck_3711_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_a_3704_);
lean_dec(v___x_3659_);
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
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1___boxed(lean_object* v_method_3712_, lean_object* v_inst_3713_, lean_object* v_handler_3714_, lean_object* v_param_3715_, lean_object* v_state_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
lean_object* v_res_3719_; 
v_res_3719_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1(v_method_3712_, v_inst_3713_, v_handler_3714_, v_param_3715_, v_state_3716_, v___y_3717_);
lean_dec_ref(v___y_3717_);
lean_dec(v_state_3716_);
lean_dec_ref(v_method_3712_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0(lean_object* v_mutex_3720_, lean_object* v_a_x3f_3721_){
_start:
{
lean_object* v___x_3723_; lean_object* v___x_3724_; 
v___x_3723_ = lean_io_basemutex_unlock(v_mutex_3720_);
v___x_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3723_);
return v___x_3724_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0___boxed(lean_object* v_mutex_3725_, lean_object* v_a_x3f_3726_, lean_object* v___y_3727_){
_start:
{
lean_object* v_res_3728_; 
v_res_3728_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0(v_mutex_3725_, v_a_x3f_3726_);
lean_dec(v_a_x3f_3726_);
lean_dec(v_mutex_3725_);
return v_res_3728_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(lean_object* v_mutex_3729_, lean_object* v_k_3730_, lean_object* v___y_3731_){
_start:
{
lean_object* v_ref_3733_; lean_object* v_mutex_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
v_ref_3733_ = lean_ctor_get(v_mutex_3729_, 0);
lean_inc(v_ref_3733_);
v_mutex_3734_ = lean_ctor_get(v_mutex_3729_, 1);
lean_inc(v_mutex_3734_);
lean_dec_ref(v_mutex_3729_);
v___x_3735_ = lean_io_basemutex_lock(v_mutex_3734_);
lean_inc_ref(v___y_3731_);
v___x_3736_ = lean_apply_3(v_k_3730_, v_ref_3733_, v___y_3731_, lean_box(0));
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3753_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3739_ = v___x_3736_;
v_isShared_3740_ = v_isSharedCheck_3753_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_a_3737_);
lean_dec(v___x_3736_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3753_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v___x_3742_; 
lean_inc(v_a_3737_);
if (v_isShared_3740_ == 0)
{
lean_ctor_set_tag(v___x_3739_, 1);
v___x_3742_ = v___x_3739_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3737_);
v___x_3742_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
lean_object* v___x_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3750_; 
v___x_3743_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0(v_mutex_3734_, v___x_3742_);
lean_dec_ref(v___x_3742_);
lean_dec(v_mutex_3734_);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3750_ == 0)
{
lean_object* v_unused_3751_; 
v_unused_3751_ = lean_ctor_get(v___x_3743_, 0);
lean_dec(v_unused_3751_);
v___x_3745_ = v___x_3743_;
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
else
{
lean_dec(v___x_3743_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3750_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3748_; 
if (v_isShared_3746_ == 0)
{
lean_ctor_set(v___x_3745_, 0, v_a_3737_);
v___x_3748_ = v___x_3745_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_a_3737_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
}
}
else
{
lean_object* v_a_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3758_; uint8_t v_isShared_3759_; uint8_t v_isSharedCheck_3763_; 
v_a_3754_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3754_);
lean_dec_ref_known(v___x_3736_, 1);
v___x_3755_ = lean_box(0);
v___x_3756_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___lam__0(v_mutex_3734_, v___x_3755_);
lean_dec(v_mutex_3734_);
v_isSharedCheck_3763_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3763_ == 0)
{
lean_object* v_unused_3764_; 
v_unused_3764_ = lean_ctor_get(v___x_3756_, 0);
lean_dec(v_unused_3764_);
v___x_3758_ = v___x_3756_;
v_isShared_3759_ = v_isSharedCheck_3763_;
goto v_resetjp_3757_;
}
else
{
lean_dec(v___x_3756_);
v___x_3758_ = lean_box(0);
v_isShared_3759_ = v_isSharedCheck_3763_;
goto v_resetjp_3757_;
}
v_resetjp_3757_:
{
lean_object* v___x_3761_; 
if (v_isShared_3759_ == 0)
{
lean_ctor_set_tag(v___x_3758_, 1);
lean_ctor_set(v___x_3758_, 0, v_a_3754_);
v___x_3761_ = v___x_3758_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3762_; 
v_reuseFailAlloc_3762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3762_, 0, v_a_3754_);
v___x_3761_ = v_reuseFailAlloc_3762_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
return v___x_3761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg___boxed(lean_object* v_mutex_3765_, lean_object* v_k_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_){
_start:
{
lean_object* v_res_3769_; 
v_res_3769_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(v_mutex_3765_, v_k_3766_, v___y_3767_);
lean_dec_ref(v___y_3767_);
return v_res_3769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8(lean_object* v_val_3770_, lean_object* v___f_3771_, lean_object* v_param_3772_, lean_object* v___x_3773_, lean_object* v_x_3774_, lean_object* v___y_3775_){
_start:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; 
v___x_3777_ = lean_st_ref_get(v_val_3770_);
lean_inc_ref(v___y_3775_);
v___x_3778_ = lean_apply_4(v___f_3771_, v_param_3772_, v___x_3777_, v___y_3775_, lean_box(0));
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3788_; 
v_a_3779_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3781_ = v___x_3778_;
v_isShared_3782_ = v_isSharedCheck_3788_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3778_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3788_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v_snd_3783_; lean_object* v___x_3784_; lean_object* v___x_3786_; 
v_snd_3783_ = lean_ctor_get(v_a_3779_, 1);
lean_inc(v_snd_3783_);
lean_dec(v_a_3779_);
v___x_3784_ = lean_st_ref_swap(v_val_3770_, v_snd_3783_);
lean_dec(v___x_3784_);
if (v_isShared_3782_ == 0)
{
lean_ctor_set(v___x_3781_, 0, v___x_3773_);
v___x_3786_ = v___x_3781_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v___x_3773_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3796_; 
v_a_3789_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3791_ = v___x_3778_;
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___x_3778_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3794_; 
if (v_isShared_3792_ == 0)
{
v___x_3794_ = v___x_3791_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3789_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8___boxed(lean_object* v_val_3797_, lean_object* v___f_3798_, lean_object* v_param_3799_, lean_object* v___x_3800_, lean_object* v_x_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_){
_start:
{
lean_object* v_res_3804_; 
v_res_3804_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8(v_val_3797_, v___f_3798_, v_param_3799_, v___x_3800_, v_x_3801_, v___y_3802_);
lean_dec_ref(v___y_3802_);
lean_dec(v_val_3797_);
return v_res_3804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9(lean_object* v___f_3805_, lean_object* v___f_3806_, lean_object* v___x_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_){
_start:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3811_ = lean_st_ref_get(v___y_3808_);
v___x_3812_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_3811_, v___f_3805_, v___y_3809_);
if (lean_obj_tag(v___x_3812_) == 0)
{
lean_object* v_a_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3822_; 
v_a_3813_ = lean_ctor_get(v___x_3812_, 0);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3812_);
if (v_isSharedCheck_3822_ == 0)
{
v___x_3815_ = v___x_3812_;
v_isShared_3816_ = v_isSharedCheck_3822_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_a_3813_);
lean_dec(v___x_3812_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3822_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3820_; 
v___x_3817_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_3806_, v_a_3813_);
v___x_3818_ = lean_st_ref_swap(v___y_3808_, v___x_3817_);
lean_dec(v___x_3818_);
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 0, v___x_3807_);
v___x_3820_ = v___x_3815_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v___x_3807_);
v___x_3820_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
return v___x_3820_;
}
}
}
else
{
lean_object* v_a_3823_; lean_object* v___x_3825_; uint8_t v_isShared_3826_; uint8_t v_isSharedCheck_3830_; 
lean_dec_ref(v___f_3806_);
v_a_3823_ = lean_ctor_get(v___x_3812_, 0);
v_isSharedCheck_3830_ = !lean_is_exclusive(v___x_3812_);
if (v_isSharedCheck_3830_ == 0)
{
v___x_3825_ = v___x_3812_;
v_isShared_3826_ = v_isSharedCheck_3830_;
goto v_resetjp_3824_;
}
else
{
lean_inc(v_a_3823_);
lean_dec(v___x_3812_);
v___x_3825_ = lean_box(0);
v_isShared_3826_ = v_isSharedCheck_3830_;
goto v_resetjp_3824_;
}
v_resetjp_3824_:
{
lean_object* v___x_3828_; 
if (v_isShared_3826_ == 0)
{
v___x_3828_ = v___x_3825_;
goto v_reusejp_3827_;
}
else
{
lean_object* v_reuseFailAlloc_3829_; 
v_reuseFailAlloc_3829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3829_, 0, v_a_3823_);
v___x_3828_ = v_reuseFailAlloc_3829_;
goto v_reusejp_3827_;
}
v_reusejp_3827_:
{
return v___x_3828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9___boxed(lean_object* v___f_3831_, lean_object* v___f_3832_, lean_object* v___x_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_){
_start:
{
lean_object* v_res_3837_; 
v_res_3837_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9(v___f_3831_, v___f_3832_, v___x_3833_, v___y_3834_, v___y_3835_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10(lean_object* v_val_3838_, lean_object* v___f_3839_, lean_object* v___x_3840_, lean_object* v___f_3841_, lean_object* v_val_3842_, lean_object* v_param_3843_, lean_object* v___y_3844_){
_start:
{
lean_object* v___f_3846_; lean_object* v___f_3847_; lean_object* v___x_3848_; 
v___f_3846_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__8___boxed), 7, 4);
lean_closure_set(v___f_3846_, 0, v_val_3838_);
lean_closure_set(v___f_3846_, 1, v___f_3839_);
lean_closure_set(v___f_3846_, 2, v_param_3843_);
lean_closure_set(v___f_3846_, 3, v___x_3840_);
v___f_3847_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__9___boxed), 6, 3);
lean_closure_set(v___f_3847_, 0, v___f_3846_);
lean_closure_set(v___f_3847_, 1, v___f_3841_);
lean_closure_set(v___f_3847_, 2, v___x_3840_);
v___x_3848_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(v_val_3842_, v___f_3847_, v___y_3844_);
return v___x_3848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10___boxed(lean_object* v_val_3849_, lean_object* v___f_3850_, lean_object* v___x_3851_, lean_object* v___f_3852_, lean_object* v_val_3853_, lean_object* v_param_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_){
_start:
{
lean_object* v_res_3857_; 
v_res_3857_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10(v_val_3849_, v___f_3850_, v___x_3851_, v___f_3852_, v_val_3853_, v_param_3854_, v___y_3855_);
lean_dec_ref(v___y_3855_);
return v_res_3857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3(lean_object* v___x_3858_, lean_object* v_x_3859_){
_start:
{
return v___x_3858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3___boxed(lean_object* v___x_3860_, lean_object* v_x_3861_){
_start:
{
lean_object* v_res_3862_; 
v_res_3862_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__3(v___x_3860_, v_x_3861_);
lean_dec_ref(v_x_3861_);
return v_res_3862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__0(lean_object* v_j_3863_){
_start:
{
lean_object* v___x_3864_; 
v___x_3864_ = l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12(v_j_3863_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3872_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3872_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3872_ == 0)
{
v___x_3867_ = v___x_3864_;
v_isShared_3868_ = v_isSharedCheck_3872_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_a_3865_);
lean_dec(v___x_3864_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3872_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
lean_object* v___x_3870_; 
if (v_isShared_3868_ == 0)
{
v___x_3870_ = v___x_3867_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3871_; 
v_reuseFailAlloc_3871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3871_, 0, v_a_3865_);
v___x_3870_ = v_reuseFailAlloc_3871_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
return v___x_3870_;
}
}
}
else
{
lean_object* v_a_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3880_; 
v_a_3873_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3875_ = v___x_3864_;
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_a_3873_);
lean_dec(v___x_3864_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3878_; 
if (v_isShared_3876_ == 0)
{
v___x_3878_ = v___x_3875_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_a_3873_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
return v___x_3878_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5(lean_object* v_val_3881_, lean_object* v___f_3882_, lean_object* v_param_3883_, lean_object* v_x_3884_, lean_object* v___y_3885_){
_start:
{
lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3887_ = lean_st_ref_get(v_val_3881_);
lean_inc_ref(v___y_3885_);
v___x_3888_ = lean_apply_4(v___f_3882_, v_param_3883_, v___x_3887_, v___y_3885_, lean_box(0));
if (lean_obj_tag(v___x_3888_) == 0)
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3899_; 
v_a_3889_ = lean_ctor_get(v___x_3888_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3891_ = v___x_3888_;
v_isShared_3892_ = v_isSharedCheck_3899_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v___x_3888_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3899_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
lean_object* v_fst_3893_; lean_object* v_snd_3894_; lean_object* v___x_3895_; lean_object* v___x_3897_; 
v_fst_3893_ = lean_ctor_get(v_a_3889_, 0);
lean_inc(v_fst_3893_);
v_snd_3894_ = lean_ctor_get(v_a_3889_, 1);
lean_inc(v_snd_3894_);
lean_dec(v_a_3889_);
v___x_3895_ = lean_st_ref_swap(v_val_3881_, v_snd_3894_);
lean_dec(v___x_3895_);
if (v_isShared_3892_ == 0)
{
lean_ctor_set(v___x_3891_, 0, v_fst_3893_);
v___x_3897_ = v___x_3891_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v_fst_3893_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
return v___x_3897_;
}
}
}
else
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3907_; 
v_a_3900_ = lean_ctor_get(v___x_3888_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3902_ = v___x_3888_;
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v___x_3888_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3905_; 
if (v_isShared_3903_ == 0)
{
v___x_3905_ = v___x_3902_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_a_3900_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
return v___x_3905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5___boxed(lean_object* v_val_3908_, lean_object* v___f_3909_, lean_object* v_param_3910_, lean_object* v_x_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_){
_start:
{
lean_object* v_res_3914_; 
v_res_3914_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5(v_val_3908_, v___f_3909_, v_param_3910_, v_x_3911_, v___y_3912_);
lean_dec_ref(v___y_3912_);
lean_dec(v_val_3908_);
return v_res_3914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6(lean_object* v___f_3915_, lean_object* v___f_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_){
_start:
{
lean_object* v___x_3920_; lean_object* v___x_3921_; 
v___x_3920_ = lean_st_ref_get(v___y_3917_);
v___x_3921_ = l_Lean_Server_RequestM_mapTaskCostly___redArg(v___x_3920_, v___f_3915_, v___y_3918_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v_a_3922_; lean_object* v___x_3924_; uint8_t v_isShared_3925_; uint8_t v_isSharedCheck_3931_; 
v_a_3922_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3931_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3931_ == 0)
{
v___x_3924_ = v___x_3921_;
v_isShared_3925_ = v_isSharedCheck_3931_;
goto v_resetjp_3923_;
}
else
{
lean_inc(v_a_3922_);
lean_dec(v___x_3921_);
v___x_3924_ = lean_box(0);
v_isShared_3925_ = v_isSharedCheck_3931_;
goto v_resetjp_3923_;
}
v_resetjp_3923_:
{
lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3929_; 
lean_inc(v_a_3922_);
v___x_3926_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_3916_, v_a_3922_);
v___x_3927_ = lean_st_ref_swap(v___y_3917_, v___x_3926_);
lean_dec(v___x_3927_);
if (v_isShared_3925_ == 0)
{
v___x_3929_ = v___x_3924_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v_a_3922_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
}
else
{
lean_dec_ref(v___f_3916_);
return v___x_3921_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6___boxed(lean_object* v___f_3932_, lean_object* v___f_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_){
_start:
{
lean_object* v_res_3937_; 
v_res_3937_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6(v___f_3932_, v___f_3933_, v___y_3934_, v___y_3935_);
lean_dec_ref(v___y_3935_);
lean_dec(v___y_3934_);
return v_res_3937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7(lean_object* v_val_3938_, lean_object* v___f_3939_, lean_object* v___f_3940_, lean_object* v_val_3941_, lean_object* v_param_3942_, lean_object* v___y_3943_){
_start:
{
lean_object* v___f_3945_; lean_object* v___f_3946_; lean_object* v___x_3947_; 
v___f_3945_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__5___boxed), 6, 3);
lean_closure_set(v___f_3945_, 0, v_val_3938_);
lean_closure_set(v___f_3945_, 1, v___f_3939_);
lean_closure_set(v___f_3945_, 2, v_param_3942_);
v___f_3946_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__6___boxed), 5, 2);
lean_closure_set(v___f_3946_, 0, v___f_3945_);
lean_closure_set(v___f_3946_, 1, v___f_3940_);
v___x_3947_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(v_val_3941_, v___f_3946_, v___y_3943_);
return v___x_3947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7___boxed(lean_object* v_val_3948_, lean_object* v___f_3949_, lean_object* v___f_3950_, lean_object* v_val_3951_, lean_object* v_param_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_){
_start:
{
lean_object* v_res_3955_; 
v_res_3955_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7(v_val_3948_, v___f_3949_, v___f_3950_, v_val_3951_, v_param_3952_, v___y_3953_);
lean_dec_ref(v___y_3953_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2(lean_object* v_method_3956_, lean_object* v_inst_3957_, lean_object* v_onDidChange_3958_, lean_object* v_param_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_){
_start:
{
lean_object* v___x_3963_; 
v___x_3963_ = l___private_Lean_Server_Requests_0__Lean_Server_getState_x21(v_method_3956_, v___y_3960_, lean_box(0), v_inst_3957_, v___y_3961_);
if (lean_obj_tag(v___x_3963_) == 0)
{
lean_object* v_a_3964_; lean_object* v___x_3965_; 
v_a_3964_ = lean_ctor_get(v___x_3963_, 0);
lean_inc(v_a_3964_);
lean_dec_ref_known(v___x_3963_, 1);
lean_inc_ref(v___y_3961_);
v___x_3965_ = lean_apply_4(v_onDidChange_3958_, v_param_3959_, v_a_3964_, v___y_3961_, lean_box(0));
if (lean_obj_tag(v___x_3965_) == 0)
{
lean_object* v_a_3966_; lean_object* v___x_3968_; uint8_t v_isShared_3969_; uint8_t v_isSharedCheck_3984_; 
v_a_3966_ = lean_ctor_get(v___x_3965_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3965_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3968_ = v___x_3965_;
v_isShared_3969_ = v_isSharedCheck_3984_;
goto v_resetjp_3967_;
}
else
{
lean_inc(v_a_3966_);
lean_dec(v___x_3965_);
v___x_3968_ = lean_box(0);
v_isShared_3969_ = v_isSharedCheck_3984_;
goto v_resetjp_3967_;
}
v_resetjp_3967_:
{
lean_object* v_snd_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3982_; 
v_snd_3970_ = lean_ctor_get(v_a_3966_, 1);
v_isSharedCheck_3982_ = !lean_is_exclusive(v_a_3966_);
if (v_isSharedCheck_3982_ == 0)
{
lean_object* v_unused_3983_; 
v_unused_3983_ = lean_ctor_get(v_a_3966_, 0);
lean_dec(v_unused_3983_);
v___x_3972_ = v_a_3966_;
v_isShared_3973_ = v_isSharedCheck_3982_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_snd_3970_);
lean_dec(v_a_3966_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3982_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
lean_ctor_set(v___x_3972_, 0, v_inst_3957_);
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v_inst_3957_);
lean_ctor_set(v_reuseFailAlloc_3981_, 1, v_snd_3970_);
v___x_3975_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3979_; 
v___x_3976_ = lean_box(0);
v___x_3977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3976_);
lean_ctor_set(v___x_3977_, 1, v___x_3975_);
if (v_isShared_3969_ == 0)
{
lean_ctor_set(v___x_3968_, 0, v___x_3977_);
v___x_3979_ = v___x_3968_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v___x_3977_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
return v___x_3979_;
}
}
}
}
}
else
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3992_; 
lean_dec(v_inst_3957_);
v_a_3985_ = lean_ctor_get(v___x_3965_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v___x_3965_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3987_ = v___x_3965_;
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v___x_3965_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3990_; 
if (v_isShared_3988_ == 0)
{
v___x_3990_ = v___x_3987_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3985_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
}
else
{
lean_object* v_a_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4000_; 
lean_dec_ref(v_param_3959_);
lean_dec_ref(v_onDidChange_3958_);
lean_dec(v_inst_3957_);
v_a_3993_ = lean_ctor_get(v___x_3963_, 0);
v_isSharedCheck_4000_ = !lean_is_exclusive(v___x_3963_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3995_ = v___x_3963_;
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_a_3993_);
lean_dec(v___x_3963_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4000_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
lean_object* v___x_3998_; 
if (v_isShared_3996_ == 0)
{
v___x_3998_ = v___x_3995_;
goto v_reusejp_3997_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_a_3993_);
v___x_3998_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3997_;
}
v_reusejp_3997_:
{
return v___x_3998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2___boxed(lean_object* v_method_4001_, lean_object* v_inst_4002_, lean_object* v_onDidChange_4003_, lean_object* v_param_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_){
_start:
{
lean_object* v_res_4008_; 
v_res_4008_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2(v_method_4001_, v_inst_4002_, v_onDidChange_4003_, v_param_4004_, v___y_4005_, v___y_4006_);
lean_dec_ref(v___y_4006_);
lean_dec(v___y_4005_);
lean_dec_ref(v_method_4001_);
return v_res_4008_;
}
}
static lean_object* _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5(void){
_start:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4016_ = lean_box(0);
v___x_4017_ = lean_task_pure(v___x_4016_);
return v___x_4017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg(lean_object* v_method_4018_, lean_object* v_completeness_4019_, lean_object* v_inst_4020_, lean_object* v_initState_4021_, lean_object* v_handler_4022_, lean_object* v_onDidChange_4023_){
_start:
{
lean_object* v___f_4025_; lean_object* v___f_4026_; lean_object* v___f_4027_; uint8_t v___x_4028_; 
v___f_4025_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__0));
lean_inc_n(v_inst_4020_, 2);
lean_inc_ref_n(v_method_4018_, 2);
v___f_4026_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__1___boxed), 7, 3);
lean_closure_set(v___f_4026_, 0, v_method_4018_);
lean_closure_set(v___f_4026_, 1, v_inst_4020_);
lean_closure_set(v___f_4026_, 2, v_handler_4022_);
v___f_4027_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__2___boxed), 7, 3);
lean_closure_set(v___f_4027_, 0, v_method_4018_);
lean_closure_set(v___f_4027_, 1, v_inst_4020_);
lean_closure_set(v___f_4027_, 2, v_onDidChange_4023_);
v___x_4028_ = l_Lean_initializing();
if (v___x_4028_ == 0)
{
lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; 
lean_dec_ref(v___f_4027_);
lean_dec_ref(v___f_4026_);
lean_dec(v_initState_4021_);
lean_dec(v_inst_4020_);
lean_dec(v_completeness_4019_);
v___x_4029_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__1));
v___x_4030_ = lean_string_append(v___x_4029_, v_method_4018_);
lean_dec_ref(v_method_4018_);
v___x_4031_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__2));
v___x_4032_ = lean_string_append(v___x_4030_, v___x_4031_);
v___x_4033_ = lean_mk_io_user_error(v___x_4032_);
v___x_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4034_, 0, v___x_4033_);
return v___x_4034_;
}
else
{
lean_object* v___x_4035_; lean_object* v___f_4036_; lean_object* v___f_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___f_4042_; lean_object* v___f_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; 
v___x_4035_ = lean_box(0);
v___f_4036_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__3));
v___f_4037_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__4));
v___x_4038_ = lean_obj_once(&l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5, &l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5_once, _init_l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__5);
v___x_4039_ = l_Std_Mutex_new___redArg(v___x_4038_);
v___x_4040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4040_, 0, v_inst_4020_);
lean_ctor_set(v___x_4040_, 1, v_initState_4021_);
lean_inc_ref(v___x_4040_);
v___x_4041_ = lean_st_mk_ref(v___x_4040_);
lean_inc_ref_n(v___x_4039_, 2);
lean_inc_ref(v___f_4026_);
lean_inc_n(v___x_4041_, 2);
v___f_4042_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__7___boxed), 7, 4);
lean_closure_set(v___f_4042_, 0, v___x_4041_);
lean_closure_set(v___f_4042_, 1, v___f_4026_);
lean_closure_set(v___f_4042_, 2, v___f_4036_);
lean_closure_set(v___f_4042_, 3, v___x_4039_);
lean_inc_ref(v___f_4027_);
v___f_4043_ = lean_alloc_closure((void*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___lam__10___boxed), 8, 5);
lean_closure_set(v___f_4043_, 0, v___x_4041_);
lean_closure_set(v___f_4043_, 1, v___f_4027_);
lean_closure_set(v___f_4043_, 2, v___x_4035_);
lean_closure_set(v___f_4043_, 3, v___f_4037_);
lean_closure_set(v___f_4043_, 4, v___x_4039_);
v___x_4044_ = l_Lean_Server_statefulRequestHandlers;
v___x_4045_ = lean_st_ref_take(v___x_4044_);
v___x_4046_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4046_, 0, v___f_4025_);
lean_ctor_set(v___x_4046_, 1, v___f_4026_);
lean_ctor_set(v___x_4046_, 2, v___f_4042_);
lean_ctor_set(v___x_4046_, 3, v___f_4027_);
lean_ctor_set(v___x_4046_, 4, v___f_4043_);
lean_ctor_set(v___x_4046_, 5, v___x_4039_);
lean_ctor_set(v___x_4046_, 6, v___x_4040_);
lean_ctor_set(v___x_4046_, 7, v___x_4041_);
lean_ctor_set(v___x_4046_, 8, v_completeness_4019_);
v___x_4047_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3___redArg(v___x_4045_, v_method_4018_, v___x_4046_);
v___x_4048_ = lean_st_ref_put(v___x_4044_, v___x_4047_);
v___x_4049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4049_, 0, v___x_4048_);
return v___x_4049_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___boxed(lean_object* v_method_4050_, lean_object* v_completeness_4051_, lean_object* v_inst_4052_, lean_object* v_initState_4053_, lean_object* v_handler_4054_, lean_object* v_onDidChange_4055_, lean_object* v_a_4056_){
_start:
{
lean_object* v_res_4057_; 
v_res_4057_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg(v_method_4050_, v_completeness_4051_, v_inst_4052_, v_initState_4053_, v_handler_4054_, v_onDidChange_4055_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg(lean_object* v_method_4059_, lean_object* v_completeness_4060_, lean_object* v_inst_4061_, lean_object* v_initState_4062_, lean_object* v_handler_4063_, lean_object* v_onDidChange_4064_){
_start:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; uint8_t v___x_4068_; 
v___x_4066_ = l_Lean_Server_requestHandlers;
v___x_4067_ = lean_st_ref_get(v___x_4066_);
v___x_4068_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(v___x_4067_, v_method_4059_);
lean_dec(v___x_4067_);
if (v___x_4068_ == 0)
{
lean_object* v___x_4069_; 
v___x_4069_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg(v_method_4059_, v_completeness_4060_, v_inst_4061_, v_initState_4062_, v_handler_4063_, v_onDidChange_4064_);
return v___x_4069_;
}
else
{
lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; 
lean_dec_ref(v_onDidChange_4064_);
lean_dec_ref(v_handler_4063_);
lean_dec(v_initState_4062_);
lean_dec(v_inst_4061_);
lean_dec(v_completeness_4060_);
v___x_4070_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__1));
v___x_4071_ = lean_string_append(v___x_4070_, v_method_4059_);
lean_dec_ref(v_method_4059_);
v___x_4072_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___closed__0));
v___x_4073_ = lean_string_append(v___x_4071_, v___x_4072_);
v___x_4074_ = lean_mk_io_user_error(v___x_4073_);
v___x_4075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4074_);
return v___x_4075_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___boxed(lean_object* v_method_4076_, lean_object* v_completeness_4077_, lean_object* v_inst_4078_, lean_object* v_initState_4079_, lean_object* v_handler_4080_, lean_object* v_onDidChange_4081_, lean_object* v_a_4082_){
_start:
{
lean_object* v_res_4083_; 
v_res_4083_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg(v_method_4076_, v_completeness_4077_, v_inst_4078_, v_initState_4079_, v_handler_4080_, v_onDidChange_4081_);
return v_res_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg(lean_object* v_method_4084_, lean_object* v_refreshMethod_4085_, lean_object* v_refreshIntervalMs_4086_, lean_object* v_inst_4087_, lean_object* v_initState_4088_, lean_object* v_handler_4089_, lean_object* v_onDidChange_4090_){
_start:
{
lean_object* v___x_4092_; lean_object* v___x_4093_; 
v___x_4092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4092_, 0, v_refreshMethod_4085_);
lean_ctor_set(v___x_4092_, 1, v_refreshIntervalMs_4086_);
v___x_4093_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg(v_method_4084_, v___x_4092_, v_inst_4087_, v_initState_4088_, v_handler_4089_, v_onDidChange_4090_);
return v___x_4093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_method_4094_, lean_object* v_refreshMethod_4095_, lean_object* v_refreshIntervalMs_4096_, lean_object* v_inst_4097_, lean_object* v_initState_4098_, lean_object* v_handler_4099_, lean_object* v_onDidChange_4100_, lean_object* v_a_4101_){
_start:
{
lean_object* v_res_4102_; 
v_res_4102_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg(v_method_4094_, v_refreshMethod_4095_, v_refreshIntervalMs_4096_, v_inst_4097_, v_initState_4098_, v_handler_4099_, v_onDidChange_4100_);
return v_res_4102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_params_4103_){
_start:
{
lean_object* v___x_4104_; 
lean_inc(v_params_4103_);
v___x_4104_ = l_Lean_Lsp_instFromJsonSemanticTokensRangeParams_fromJson(v_params_4103_);
if (lean_obj_tag(v___x_4104_) == 0)
{
lean_object* v_a_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4120_; 
v_a_4105_ = lean_ctor_get(v___x_4104_, 0);
v_isSharedCheck_4120_ = !lean_is_exclusive(v___x_4104_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4107_ = v___x_4104_;
v_isShared_4108_ = v_isSharedCheck_4120_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_a_4105_);
lean_dec(v___x_4104_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4120_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
uint8_t v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4118_; 
v___x_4109_ = 3;
v___x_4110_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__12___closed__0));
v___x_4111_ = l_Lean_Json_compress(v_params_4103_);
v___x_4112_ = lean_string_append(v___x_4110_, v___x_4111_);
lean_dec_ref(v___x_4111_);
v___x_4113_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_collectVersoTokens_codeLine___closed__0));
v___x_4114_ = lean_string_append(v___x_4112_, v___x_4113_);
v___x_4115_ = lean_string_append(v___x_4114_, v_a_4105_);
lean_dec(v_a_4105_);
v___x_4116_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4116_, 0, v___x_4115_);
lean_ctor_set_uint8(v___x_4116_, sizeof(void*)*1, v___x_4109_);
if (v_isShared_4108_ == 0)
{
lean_ctor_set(v___x_4107_, 0, v___x_4116_);
v___x_4118_ = v___x_4107_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v___x_4116_);
v___x_4118_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
return v___x_4118_;
}
}
}
else
{
lean_object* v_a_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4128_; 
lean_dec(v_params_4103_);
v_a_4121_ = lean_ctor_get(v___x_4104_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4104_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4123_ = v___x_4104_;
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_a_4121_);
lean_dec(v___x_4104_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
lean_object* v___x_4126_; 
if (v_isShared_4124_ == 0)
{
v___x_4126_ = v___x_4123_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_a_4121_);
v___x_4126_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
return v___x_4126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__0(lean_object* v_j_4129_){
_start:
{
lean_object* v___x_4130_; 
v___x_4130_ = l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__0(v_j_4129_);
if (lean_obj_tag(v___x_4130_) == 0)
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4138_; 
v_a_4131_ = lean_ctor_get(v___x_4130_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v___x_4130_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4133_ = v___x_4130_;
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___x_4130_);
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
v_reuseFailAlloc_4137_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_4139_; lean_object* v___x_4141_; uint8_t v_isShared_4142_; uint8_t v_isSharedCheck_4147_; 
v_a_4139_ = lean_ctor_get(v___x_4130_, 0);
v_isSharedCheck_4147_ = !lean_is_exclusive(v___x_4130_);
if (v_isSharedCheck_4147_ == 0)
{
v___x_4141_ = v___x_4130_;
v_isShared_4142_ = v_isSharedCheck_4147_;
goto v_resetjp_4140_;
}
else
{
lean_inc(v_a_4139_);
lean_dec(v___x_4130_);
v___x_4141_ = lean_box(0);
v_isShared_4142_ = v_isSharedCheck_4147_;
goto v_resetjp_4140_;
}
v_resetjp_4140_:
{
lean_object* v_textDocument_4143_; lean_object* v___x_4145_; 
v_textDocument_4143_ = lean_ctor_get(v_a_4139_, 0);
lean_inc_ref(v_textDocument_4143_);
lean_dec(v_a_4139_);
if (v_isShared_4142_ == 0)
{
lean_ctor_set(v___x_4141_, 0, v_textDocument_4143_);
v___x_4145_ = v___x_4141_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v_textDocument_4143_);
v___x_4145_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
return v___x_4145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1(lean_object* v_serialize_x3f_4148_, uint8_t v_val_4149_, lean_object* v___y_4150_){
_start:
{
if (lean_obj_tag(v___y_4150_) == 0)
{
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4158_; 
lean_dec(v_serialize_x3f_4148_);
v_a_4151_ = lean_ctor_get(v___y_4150_, 0);
v_isSharedCheck_4158_ = !lean_is_exclusive(v___y_4150_);
if (v_isSharedCheck_4158_ == 0)
{
v___x_4153_ = v___y_4150_;
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v___y_4150_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4156_; 
if (v_isShared_4154_ == 0)
{
v___x_4156_ = v___x_4153_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4157_; 
v_reuseFailAlloc_4157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4157_, 0, v_a_4151_);
v___x_4156_ = v_reuseFailAlloc_4157_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
return v___x_4156_;
}
}
}
else
{
if (lean_obj_tag(v_serialize_x3f_4148_) == 1)
{
lean_object* v_a_4159_; lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4170_; 
v_a_4159_ = lean_ctor_get(v___y_4150_, 0);
v_isSharedCheck_4170_ = !lean_is_exclusive(v___y_4150_);
if (v_isSharedCheck_4170_ == 0)
{
v___x_4161_ = v___y_4150_;
v_isShared_4162_ = v_isSharedCheck_4170_;
goto v_resetjp_4160_;
}
else
{
lean_inc(v_a_4159_);
lean_dec(v___y_4150_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4170_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
lean_object* v_val_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4168_; 
v_val_4163_ = lean_ctor_get(v_serialize_x3f_4148_, 0);
lean_inc(v_val_4163_);
lean_dec_ref_known(v_serialize_x3f_4148_, 1);
v___x_4164_ = lean_box(0);
v___x_4165_ = lean_apply_1(v_val_4163_, v_a_4159_);
v___x_4166_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4166_, 0, v___x_4164_);
lean_ctor_set(v___x_4166_, 1, v___x_4165_);
lean_ctor_set_uint8(v___x_4166_, sizeof(void*)*2, v_val_4149_);
if (v_isShared_4162_ == 0)
{
lean_ctor_set(v___x_4161_, 0, v___x_4166_);
v___x_4168_ = v___x_4161_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v___x_4166_);
v___x_4168_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
return v___x_4168_;
}
}
}
else
{
lean_object* v_a_4171_; lean_object* v___x_4173_; uint8_t v_isShared_4174_; uint8_t v_isSharedCheck_4182_; 
lean_dec(v_serialize_x3f_4148_);
v_a_4171_ = lean_ctor_get(v___y_4150_, 0);
v_isSharedCheck_4182_ = !lean_is_exclusive(v___y_4150_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4173_ = v___y_4150_;
v_isShared_4174_ = v_isSharedCheck_4182_;
goto v_resetjp_4172_;
}
else
{
lean_inc(v_a_4171_);
lean_dec(v___y_4150_);
v___x_4173_ = lean_box(0);
v_isShared_4174_ = v_isSharedCheck_4182_;
goto v_resetjp_4172_;
}
v_resetjp_4172_:
{
lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4180_; 
v___x_4175_ = l_Lean_Lsp_instToJsonSemanticTokens_toJson(v_a_4171_);
lean_inc(v___x_4175_);
v___x_4176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4176_, 0, v___x_4175_);
v___x_4177_ = l_Lean_Json_compress(v___x_4175_);
v___x_4178_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4178_, 0, v___x_4176_);
lean_ctor_set(v___x_4178_, 1, v___x_4177_);
lean_ctor_set_uint8(v___x_4178_, sizeof(void*)*2, v_val_4149_);
if (v_isShared_4174_ == 0)
{
lean_ctor_set(v___x_4173_, 0, v___x_4178_);
v___x_4180_ = v___x_4173_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v___x_4178_);
v___x_4180_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
return v___x_4180_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object* v_serialize_x3f_4183_, lean_object* v_val_4184_, lean_object* v___y_4185_){
_start:
{
uint8_t v_val_3758__boxed_4186_; lean_object* v_res_4187_; 
v_val_3758__boxed_4186_ = lean_unbox(v_val_4184_);
v_res_4187_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1(v_serialize_x3f_4183_, v_val_3758__boxed_4186_, v___y_4185_);
return v_res_4187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_params_4188_){
_start:
{
lean_object* v___x_4190_; 
v___x_4190_ = l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__0(v_params_4188_);
if (lean_obj_tag(v___x_4190_) == 0)
{
lean_object* v_a_4191_; lean_object* v___x_4193_; uint8_t v_isShared_4194_; uint8_t v_isSharedCheck_4198_; 
v_a_4191_ = lean_ctor_get(v___x_4190_, 0);
v_isSharedCheck_4198_ = !lean_is_exclusive(v___x_4190_);
if (v_isSharedCheck_4198_ == 0)
{
v___x_4193_ = v___x_4190_;
v_isShared_4194_ = v_isSharedCheck_4198_;
goto v_resetjp_4192_;
}
else
{
lean_inc(v_a_4191_);
lean_dec(v___x_4190_);
v___x_4193_ = lean_box(0);
v_isShared_4194_ = v_isSharedCheck_4198_;
goto v_resetjp_4192_;
}
v_resetjp_4192_:
{
lean_object* v___x_4196_; 
if (v_isShared_4194_ == 0)
{
lean_ctor_set_tag(v___x_4193_, 1);
v___x_4196_ = v___x_4193_;
goto v_reusejp_4195_;
}
else
{
lean_object* v_reuseFailAlloc_4197_; 
v_reuseFailAlloc_4197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4197_, 0, v_a_4191_);
v___x_4196_ = v_reuseFailAlloc_4197_;
goto v_reusejp_4195_;
}
v_reusejp_4195_:
{
return v___x_4196_;
}
}
}
else
{
lean_object* v_a_4199_; lean_object* v___x_4201_; uint8_t v_isShared_4202_; uint8_t v_isSharedCheck_4206_; 
v_a_4199_ = lean_ctor_get(v___x_4190_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v___x_4190_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4201_ = v___x_4190_;
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
else
{
lean_inc(v_a_4199_);
lean_dec(v___x_4190_);
v___x_4201_ = lean_box(0);
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
v_resetjp_4200_:
{
lean_object* v___x_4204_; 
if (v_isShared_4202_ == 0)
{
lean_ctor_set_tag(v___x_4201_, 0);
v___x_4204_ = v___x_4201_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4199_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
return v___x_4204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object* v_params_4207_, lean_object* v_a_4208_){
_start:
{
lean_object* v_res_4209_; 
v_res_4209_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg(v_params_4207_);
return v_res_4209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2(lean_object* v_handler_4210_, lean_object* v___f_4211_, lean_object* v_j_4212_, lean_object* v___y_4213_){
_start:
{
lean_object* v___x_4215_; 
v___x_4215_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg(v_j_4212_);
if (lean_obj_tag(v___x_4215_) == 0)
{
lean_object* v_a_4216_; lean_object* v___x_4217_; 
v_a_4216_ = lean_ctor_get(v___x_4215_, 0);
lean_inc(v_a_4216_);
lean_dec_ref_known(v___x_4215_, 1);
lean_inc_ref(v___y_4213_);
v___x_4217_ = lean_apply_3(v_handler_4210_, v_a_4216_, v___y_4213_, lean_box(0));
if (lean_obj_tag(v___x_4217_) == 0)
{
lean_object* v_a_4218_; lean_object* v___x_4220_; uint8_t v_isShared_4221_; uint8_t v_isSharedCheck_4226_; 
v_a_4218_ = lean_ctor_get(v___x_4217_, 0);
v_isSharedCheck_4226_ = !lean_is_exclusive(v___x_4217_);
if (v_isSharedCheck_4226_ == 0)
{
v___x_4220_ = v___x_4217_;
v_isShared_4221_ = v_isSharedCheck_4226_;
goto v_resetjp_4219_;
}
else
{
lean_inc(v_a_4218_);
lean_dec(v___x_4217_);
v___x_4220_ = lean_box(0);
v_isShared_4221_ = v_isSharedCheck_4226_;
goto v_resetjp_4219_;
}
v_resetjp_4219_:
{
lean_object* v___x_4222_; lean_object* v___x_4224_; 
v___x_4222_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_4211_, v_a_4218_);
if (v_isShared_4221_ == 0)
{
lean_ctor_set(v___x_4220_, 0, v___x_4222_);
v___x_4224_ = v___x_4220_;
goto v_reusejp_4223_;
}
else
{
lean_object* v_reuseFailAlloc_4225_; 
v_reuseFailAlloc_4225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4225_, 0, v___x_4222_);
v___x_4224_ = v_reuseFailAlloc_4225_;
goto v_reusejp_4223_;
}
v_reusejp_4223_:
{
return v___x_4224_;
}
}
}
else
{
lean_object* v_a_4227_; lean_object* v___x_4229_; uint8_t v_isShared_4230_; uint8_t v_isSharedCheck_4234_; 
lean_dec_ref(v___f_4211_);
v_a_4227_ = lean_ctor_get(v___x_4217_, 0);
v_isSharedCheck_4234_ = !lean_is_exclusive(v___x_4217_);
if (v_isSharedCheck_4234_ == 0)
{
v___x_4229_ = v___x_4217_;
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
else
{
lean_inc(v_a_4227_);
lean_dec(v___x_4217_);
v___x_4229_ = lean_box(0);
v_isShared_4230_ = v_isSharedCheck_4234_;
goto v_resetjp_4228_;
}
v_resetjp_4228_:
{
lean_object* v___x_4232_; 
if (v_isShared_4230_ == 0)
{
v___x_4232_ = v___x_4229_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4233_; 
v_reuseFailAlloc_4233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4233_, 0, v_a_4227_);
v___x_4232_ = v_reuseFailAlloc_4233_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
return v___x_4232_;
}
}
}
}
else
{
lean_object* v_a_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4242_; 
lean_dec_ref(v___f_4211_);
lean_dec_ref(v_handler_4210_);
v_a_4235_ = lean_ctor_get(v___x_4215_, 0);
v_isSharedCheck_4242_ = !lean_is_exclusive(v___x_4215_);
if (v_isSharedCheck_4242_ == 0)
{
v___x_4237_ = v___x_4215_;
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_a_4235_);
lean_dec(v___x_4215_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4242_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
lean_object* v___x_4240_; 
if (v_isShared_4238_ == 0)
{
v___x_4240_ = v___x_4237_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4241_; 
v_reuseFailAlloc_4241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4241_, 0, v_a_4235_);
v___x_4240_ = v_reuseFailAlloc_4241_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
return v___x_4240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object* v_handler_4243_, lean_object* v___f_4244_, lean_object* v_j_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_){
_start:
{
lean_object* v_res_4248_; 
v_res_4248_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2(v_handler_4243_, v___f_4244_, v_j_4245_, v___y_4246_);
lean_dec_ref(v___y_4246_);
return v_res_4248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0(lean_object* v_method_4251_, lean_object* v_handler_4252_, lean_object* v_serialize_x3f_4253_){
_start:
{
lean_object* v___f_4255_; uint8_t v___x_4256_; 
v___f_4255_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__0));
v___x_4256_ = l_Lean_initializing();
if (v___x_4256_ == 0)
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; 
lean_dec(v_serialize_x3f_4253_);
lean_dec_ref(v_handler_4252_);
v___x_4257_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__1));
v___x_4258_ = lean_string_append(v___x_4257_, v_method_4251_);
lean_dec_ref(v_method_4251_);
v___x_4259_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg___closed__2));
v___x_4260_ = lean_string_append(v___x_4258_, v___x_4259_);
v___x_4261_ = lean_mk_io_user_error(v___x_4260_);
v___x_4262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4262_, 0, v___x_4261_);
return v___x_4262_;
}
else
{
lean_object* v___x_4263_; lean_object* v___f_4264_; lean_object* v___f_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; uint8_t v___x_4268_; 
v___x_4263_ = lean_box(v___x_4256_);
v___f_4264_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__1___boxed), 3, 2);
lean_closure_set(v___f_4264_, 0, v_serialize_x3f_4253_);
lean_closure_set(v___f_4264_, 1, v___x_4263_);
v___f_4265_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___lam__2___boxed), 5, 2);
lean_closure_set(v___f_4265_, 0, v_handler_4252_);
lean_closure_set(v___f_4265_, 1, v___f_4264_);
v___x_4266_ = l_Lean_Server_requestHandlers;
v___x_4267_ = lean_st_ref_get(v___x_4266_);
v___x_4268_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(v___x_4267_, v_method_4251_);
lean_dec(v___x_4267_);
if (v___x_4268_ == 0)
{
lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; 
v___x_4269_ = lean_st_ref_take(v___x_4266_);
v___x_4270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4270_, 0, v___f_4255_);
lean_ctor_set(v___x_4270_, 1, v___f_4265_);
v___x_4271_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3___redArg(v___x_4269_, v_method_4251_, v___x_4270_);
v___x_4272_ = lean_st_ref_put(v___x_4266_, v___x_4271_);
v___x_4273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4273_, 0, v___x_4272_);
return v___x_4273_;
}
else
{
lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; 
lean_dec_ref(v___f_4265_);
v___x_4274_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___closed__1));
v___x_4275_ = lean_string_append(v___x_4274_, v_method_4251_);
lean_dec_ref(v_method_4251_);
v___x_4276_ = ((lean_object*)(l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg___closed__0));
v___x_4277_ = lean_string_append(v___x_4275_, v___x_4276_);
v___x_4278_ = lean_mk_io_user_error(v___x_4277_);
v___x_4279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4278_);
return v___x_4279_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0___boxed(lean_object* v_method_4280_, lean_object* v_handler_4281_, lean_object* v_serialize_x3f_4282_, lean_object* v_a_4283_){
_start:
{
lean_object* v_res_4284_; 
v_res_4284_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0(v_method_4280_, v_handler_4281_, v_serialize_x3f_4282_);
return v_res_4284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; 
v___x_4292_ = ((lean_object*)(l_Lean_Server_FileWorker_instImpl_00___x40_Lean_Server_FileWorker_SemanticHighlighting_607881837____hygCtx___hyg_7_));
v___x_4293_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__0_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_4294_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__1_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_4295_ = lean_box(0);
v___x_4296_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0(v___x_4293_, v___x_4294_, v___x_4295_);
if (lean_obj_tag(v___x_4296_) == 0)
{
lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; 
lean_dec_ref_known(v___x_4296_, 1);
v___x_4297_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__2_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_4298_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__3_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_4299_ = lean_unsigned_to_nat(2000u);
v___x_4300_ = lean_box(0);
v___x_4301_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__4_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_4302_ = ((lean_object*)(l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn___closed__5_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_));
v___x_4303_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg(v___x_4297_, v___x_4298_, v___x_4299_, v___x_4292_, v___x_4300_, v___x_4301_, v___x_4302_);
return v___x_4303_;
}
else
{
return v___x_4296_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2____boxed(lean_object* v_a_4304_){
_start:
{
lean_object* v_res_4305_; 
v_res_4305_ = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_();
return v_res_4305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1(lean_object* v_method_4306_, lean_object* v_refreshMethod_4307_, lean_object* v_refreshIntervalMs_4308_, lean_object* v_stateType_4309_, lean_object* v_inst_4310_, lean_object* v_initState_4311_, lean_object* v_handler_4312_, lean_object* v_onDidChange_4313_){
_start:
{
lean_object* v___x_4315_; 
v___x_4315_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___redArg(v_method_4306_, v_refreshMethod_4307_, v_refreshIntervalMs_4308_, v_inst_4310_, v_initState_4311_, v_handler_4312_, v_onDidChange_4313_);
return v___x_4315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1___boxed(lean_object* v_method_4316_, lean_object* v_refreshMethod_4317_, lean_object* v_refreshIntervalMs_4318_, lean_object* v_stateType_4319_, lean_object* v_inst_4320_, lean_object* v_initState_4321_, lean_object* v_handler_4322_, lean_object* v_onDidChange_4323_, lean_object* v_a_4324_){
_start:
{
lean_object* v_res_4325_; 
v_res_4325_ = l_Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1(v_method_4316_, v_refreshMethod_4317_, v_refreshIntervalMs_4318_, v_stateType_4319_, v_inst_4320_, v_initState_4321_, v_handler_4322_, v_onDidChange_4323_);
return v_res_4325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_params_4326_, lean_object* v_a_4327_){
_start:
{
lean_object* v___x_4329_; 
v___x_4329_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___redArg(v_params_4326_);
return v___x_4329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_params_4330_, lean_object* v_a_4331_, lean_object* v_a_4332_){
_start:
{
lean_object* v_res_4333_; 
v_res_4333_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__1(v_params_4330_, v_a_4331_);
lean_dec_ref(v_a_4331_);
return v_res_4333_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_00_u03b2_4334_, lean_object* v_x_4335_, lean_object* v_x_4336_){
_start:
{
uint8_t v___x_4337_; 
v___x_4337_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___redArg(v_x_4335_, v_x_4336_);
return v___x_4337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2___boxed(lean_object* v_00_u03b2_4338_, lean_object* v_x_4339_, lean_object* v_x_4340_){
_start:
{
uint8_t v_res_4341_; lean_object* v_r_4342_; 
v_res_4341_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2(v_00_u03b2_4338_, v_x_4339_, v_x_4340_);
lean_dec_ref(v_x_4340_);
lean_dec_ref(v_x_4339_);
v_r_4342_ = lean_box(v_res_4341_);
return v_r_4342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3(lean_object* v_00_u03b2_4343_, lean_object* v_x_4344_, lean_object* v_x_4345_, lean_object* v_x_4346_){
_start:
{
lean_object* v___x_4347_; 
v___x_4347_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3___redArg(v_x_4344_, v_x_4345_, v_x_4346_);
return v___x_4347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5(lean_object* v_method_4348_, lean_object* v_completeness_4349_, lean_object* v_stateType_4350_, lean_object* v_inst_4351_, lean_object* v_initState_4352_, lean_object* v_handler_4353_, lean_object* v_onDidChange_4354_){
_start:
{
lean_object* v___x_4356_; 
v___x_4356_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___redArg(v_method_4348_, v_completeness_4349_, v_inst_4351_, v_initState_4352_, v_handler_4353_, v_onDidChange_4354_);
return v___x_4356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5___boxed(lean_object* v_method_4357_, lean_object* v_completeness_4358_, lean_object* v_stateType_4359_, lean_object* v_inst_4360_, lean_object* v_initState_4361_, lean_object* v_handler_4362_, lean_object* v_onDidChange_4363_, lean_object* v_a_4364_){
_start:
{
lean_object* v_res_4365_; 
v_res_4365_ = l___private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5(v_method_4357_, v_completeness_4358_, v_stateType_4359_, v_inst_4360_, v_initState_4361_, v_handler_4362_, v_onDidChange_4363_);
return v_res_4365_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3(lean_object* v_00_u03b2_4366_, lean_object* v_x_4367_, size_t v_x_4368_, lean_object* v_x_4369_){
_start:
{
uint8_t v___x_4370_; 
v___x_4370_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___redArg(v_x_4367_, v_x_4368_, v_x_4369_);
return v___x_4370_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3___boxed(lean_object* v_00_u03b2_4371_, lean_object* v_x_4372_, lean_object* v_x_4373_, lean_object* v_x_4374_){
_start:
{
size_t v_x_4077__boxed_4375_; uint8_t v_res_4376_; lean_object* v_r_4377_; 
v_x_4077__boxed_4375_ = lean_unbox_usize(v_x_4373_);
lean_dec(v_x_4373_);
v_res_4376_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3(v_00_u03b2_4371_, v_x_4372_, v_x_4077__boxed_4375_, v_x_4374_);
lean_dec_ref(v_x_4374_);
lean_dec_ref(v_x_4372_);
v_r_4377_ = lean_box(v_res_4376_);
return v_r_4377_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5(lean_object* v_00_u03b2_4378_, lean_object* v_x_4379_, size_t v_x_4380_, size_t v_x_4381_, lean_object* v_x_4382_, lean_object* v_x_4383_){
_start:
{
lean_object* v___x_4384_; 
v___x_4384_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_x_4379_, v_x_4380_, v_x_4381_, v_x_4382_, v_x_4383_);
return v___x_4384_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5___boxed(lean_object* v_00_u03b2_4385_, lean_object* v_x_4386_, lean_object* v_x_4387_, lean_object* v_x_4388_, lean_object* v_x_4389_, lean_object* v_x_4390_){
_start:
{
size_t v_x_4088__boxed_4391_; size_t v_x_4089__boxed_4392_; lean_object* v_res_4393_; 
v_x_4088__boxed_4391_ = lean_unbox_usize(v_x_4387_);
lean_dec(v_x_4387_);
v_x_4089__boxed_4392_ = lean_unbox_usize(v_x_4388_);
lean_dec(v_x_4388_);
v_res_4393_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5(v_00_u03b2_4385_, v_x_4386_, v_x_4088__boxed_4391_, v_x_4089__boxed_4392_, v_x_4389_, v_x_4390_);
return v_res_4393_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14(lean_object* v_00_u03b1_4394_, lean_object* v_00_u03b2_4395_, lean_object* v_mutex_4396_, lean_object* v_k_4397_, lean_object* v___y_4398_){
_start:
{
lean_object* v___x_4400_; 
v___x_4400_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___redArg(v_mutex_4396_, v_k_4397_, v___y_4398_);
return v___x_4400_;
}
}
LEAN_EXPORT lean_object* l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14___boxed(lean_object* v_00_u03b1_4401_, lean_object* v_00_u03b2_4402_, lean_object* v_mutex_4403_, lean_object* v_k_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_){
_start:
{
lean_object* v_res_4407_; 
v_res_4407_ = l_Std_Mutex_atomically___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__14(v_00_u03b1_4401_, v_00_u03b2_4402_, v_mutex_4403_, v_k_4404_, v___y_4405_);
lean_dec_ref(v___y_4405_);
return v_res_4407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8(lean_object* v_method_4408_, lean_object* v_completeness_4409_, lean_object* v_stateType_4410_, lean_object* v_inst_4411_, lean_object* v_initState_4412_, lean_object* v_handler_4413_, lean_object* v_onDidChange_4414_){
_start:
{
lean_object* v___x_4416_; 
v___x_4416_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___redArg(v_method_4408_, v_completeness_4409_, v_inst_4411_, v_initState_4412_, v_handler_4413_, v_onDidChange_4414_);
return v___x_4416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8___boxed(lean_object* v_method_4417_, lean_object* v_completeness_4418_, lean_object* v_stateType_4419_, lean_object* v_inst_4420_, lean_object* v_initState_4421_, lean_object* v_handler_4422_, lean_object* v_onDidChange_4423_, lean_object* v_a_4424_){
_start:
{
lean_object* v_res_4425_; 
v_res_4425_ = l___private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8(v_method_4417_, v_completeness_4418_, v_stateType_4419_, v_inst_4420_, v_initState_4421_, v_handler_4422_, v_onDidChange_4423_);
return v_res_4425_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_4426_, lean_object* v_keys_4427_, lean_object* v_vals_4428_, lean_object* v_heq_4429_, lean_object* v_i_4430_, lean_object* v_k_4431_){
_start:
{
uint8_t v___x_4432_; 
v___x_4432_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___redArg(v_keys_4427_, v_i_4430_, v_k_4431_);
return v___x_4432_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b2_4433_, lean_object* v_keys_4434_, lean_object* v_vals_4435_, lean_object* v_heq_4436_, lean_object* v_i_4437_, lean_object* v_k_4438_){
_start:
{
uint8_t v_res_4439_; lean_object* v_r_4440_; 
v_res_4439_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__2_spec__3_spec__5(v_00_u03b2_4433_, v_keys_4434_, v_vals_4435_, v_heq_4436_, v_i_4437_, v_k_4438_);
lean_dec_ref(v_k_4438_);
lean_dec_ref(v_vals_4435_);
lean_dec_ref(v_keys_4434_);
v_r_4440_ = lean_box(v_res_4439_);
return v_r_4440_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8(lean_object* v_00_u03b2_4441_, lean_object* v_n_4442_, lean_object* v_k_4443_, lean_object* v_v_4444_){
_start:
{
lean_object* v___x_4445_; 
v___x_4445_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8___redArg(v_n_4442_, v_k_4443_, v_v_4444_);
return v___x_4445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_4446_, size_t v_depth_4447_, lean_object* v_keys_4448_, lean_object* v_vals_4449_, lean_object* v_heq_4450_, lean_object* v_i_4451_, lean_object* v_entries_4452_){
_start:
{
lean_object* v___x_4453_; 
v___x_4453_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___redArg(v_depth_4447_, v_keys_4448_, v_vals_4449_, v_i_4451_, v_entries_4452_);
return v___x_4453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03b2_4454_, lean_object* v_depth_4455_, lean_object* v_keys_4456_, lean_object* v_vals_4457_, lean_object* v_heq_4458_, lean_object* v_i_4459_, lean_object* v_entries_4460_){
_start:
{
size_t v_depth_boxed_4461_; lean_object* v_res_4462_; 
v_depth_boxed_4461_ = lean_unbox_usize(v_depth_4455_);
lean_dec(v_depth_4455_);
v_res_4462_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__9(v_00_u03b2_4454_, v_depth_boxed_4461_, v_keys_4456_, v_vals_4457_, v_heq_4458_, v_i_4459_, v_entries_4460_);
lean_dec_ref(v_vals_4457_);
lean_dec_ref(v_keys_4456_);
return v_res_4462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13(lean_object* v_params_4463_, lean_object* v_a_4464_){
_start:
{
lean_object* v___x_4466_; 
v___x_4466_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___redArg(v_params_4463_);
return v___x_4466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13___boxed(lean_object* v_params_4467_, lean_object* v_a_4468_, lean_object* v_a_4469_){
_start:
{
lean_object* v_res_4470_; 
v_res_4470_ = l_Lean_Server_RequestM_parseRequestParams___at___00__private_Lean_Server_Requests_0__Lean_Server_overrideStatefulLspRequestHandler___at___00__private_Lean_Server_Requests_0__Lean_Server_registerStatefulLspRequestHandler___at___00Lean_Server_registerPartialStatefulLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__1_spec__5_spec__8_spec__13(v_params_4467_, v_a_4468_);
lean_dec_ref(v_a_4468_);
return v_res_4470_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10(lean_object* v_00_u03b2_4471_, lean_object* v_x_4472_, lean_object* v_x_4473_, lean_object* v_x_4474_, lean_object* v_x_4475_){
_start:
{
lean_object* v___x_4476_; 
v___x_4476_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__8_spec__10___redArg(v_x_4472_, v_x_4473_, v_x_4474_, v_x_4475_);
return v___x_4476_;
}
}
lean_object* runtime_initialize_Lean_Server_Requests(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_View(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_FileWorker_SemanticHighlighting(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_View(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Server_FileWorker_keywordSemanticTokenMap = _init_l_Lean_Server_FileWorker_keywordSemanticTokenMap();
lean_mark_persistent(l_Lean_Server_FileWorker_keywordSemanticTokenMap);
l_Lean_Server_FileWorker_instInhabitedSemanticTokensState_default = _init_l_Lean_Server_FileWorker_instInhabitedSemanticTokensState_default();
lean_mark_persistent(l_Lean_Server_FileWorker_instInhabitedSemanticTokensState_default);
l_Lean_Server_FileWorker_instInhabitedSemanticTokensState = _init_l_Lean_Server_FileWorker_instInhabitedSemanticTokensState();
lean_mark_persistent(l_Lean_Server_FileWorker_instInhabitedSemanticTokensState);
res = l___private_Lean_Server_FileWorker_SemanticHighlighting_0__Lean_Server_FileWorker_initFn_00___x40_Lean_Server_FileWorker_SemanticHighlighting_3469202329____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_FileWorker_SemanticHighlighting(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_Requests(uint8_t builtin);
lean_object* initialize_Lean_DocString_View(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_FileWorker_SemanticHighlighting(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_View(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileWorker_SemanticHighlighting(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_FileWorker_SemanticHighlighting(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_FileWorker_SemanticHighlighting(builtin);
}
#ifdef __cplusplus
}
#endif
