// Lean compiler output
// Module: Lake.Config.Cache
// Imports: import Init.Control.Do public import Lake.Util.Git public import Lake.Util.Log public import Lake.Util.Version public import Lake.Config.Artifact import Lake.Config.InstallPath import Lake.Build.Actions import Lake.Util.Url import Lake.Util.Proc import Lake.Util.Reservoir import Lake.Util.JsonObject import Lake.Util.IO import Init.System.Platform import Init.Data.String.Lemmas
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_uriEncode(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lake_JsonObject_getJson_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* l_Lake_captureProc_x27(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_getenv(lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_lowerHexUInt64(uint64_t);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_Lake_JsonObject_insertJson(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lake_writeFileIfNew(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_Lake_Hash_ofJsonNumber_x3f(lean_object*);
lean_object* l_Lean_JsonNumber_toString(lean_object*);
lean_object* l_Lake_ArtifactDescr_ofFilePath_x3f(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_read(lean_object*, size_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* l_IO_FS_writeBinFile(lean_object*, lean_object*);
extern uint64_t l_Lake_Hash_nil;
uint64_t lean_byte_array_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_io_rename(lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Date_fromJson_x3f(lean_object*);
lean_object* l_Lake_Date_toString(lean_object*);
uint8_t l_Lake_instOrdDate_ord(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_prim_handle_get_line(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readToEnd(lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*);
lean_object* l_Lake_removeFileIfExists(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_IO_FS_Handle_putStrLn(lean_object*, lean_object*);
lean_object* lean_io_create_tempfile();
lean_object* lean_io_remove_file(lean_object*);
lean_object* l_Lake_Hash_instHashable___lam__0___boxed(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_io_prim_handle_lock(lean_object*, uint8_t);
lean_object* lean_io_metadata(lean_object*);
lean_object* l_Lake_instDecidableEqHash___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_mkCmdLog(lean_object*);
lean_object* l_IO_Process_output(lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
extern lean_object* l_Lake_Reservoir_lakeHeaders;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_IO_FS_createDirAll(lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_getUrl_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lake_download(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_computeBinFileHash(lean_object*);
lean_object* lean_io_prim_handle_rewind(lean_object*);
extern lean_object* l_System_Platform_target;
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_normalizeToolchain(lean_object*);
static const lean_ctor_object l_Lake_CacheMap_schemaVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2026) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(17) << 1) | 1))}};
static const lean_object* l_Lake_CacheMap_schemaVersion___closed__0 = (const lean_object*)&l_Lake_CacheMap_schemaVersion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheMap_schemaVersion = (const lean_object*)&l_Lake_CacheMap_schemaVersion___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = ": invalid header on line 1: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = ": unknown schema version '"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "'; may not parse correctly"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = ": expected schema version on line 1"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0(lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected array of size > 0"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__0_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__0_value)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected array of size > 1"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__2_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__2_value)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = ": invalid JSON on line "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_CacheMap_parse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheMap_parse___closed__0;
static lean_once_cell_t l_Lake_CacheMap_parse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheMap_parse___closed__1;
static const lean_array_object l_Lake_CacheMap_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_CacheMap_parse___closed__2 = (const lean_object*)&l_Lake_CacheMap_parse___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheMap_load___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = ": failed to open file: "};
static const lean_object* l_Lake_CacheMap_load___closed__0 = (const lean_object*)&l_Lake_CacheMap_load___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheMap_load(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_load___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_updateFile_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_CacheMap_writeFile___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheMap_writeFile___closed__0;
static lean_once_cell_t l_Lake_CacheMap_writeFile___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheMap_writeFile___closed__1;
static lean_once_cell_t l_Lake_CacheMap_writeFile___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheMap_writeFile___closed__2;
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(uint64_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg(lean_object*, uint64_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unsupported output; "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "art"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unsupported output: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_CacheMap_collectOutputDescrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_CacheMap_collectOutputDescrs___closed__0 = (const lean_object*)&l_Lake_CacheMap_collectOutputDescrs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg(lean_object*, uint64_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheServiceName_reservoir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reservoir"};
static const lean_object* l_Lake_CacheServiceName_reservoir___closed__0 = (const lean_object*)&l_Lake_CacheServiceName_reservoir___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheServiceName_reservoir = (const lean_object*)&l_Lake_CacheServiceName_reservoir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString___boxed(lean_object*);
static const lean_closure_object l_Lake_CacheServiceName_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheServiceName_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_CacheServiceName_instToString___closed__0 = (const lean_object*)&l_Lake_CacheServiceName_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheServiceName_instToString = (const lean_object*)&l_Lake_CacheServiceName_instToString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_fromJson_x3f(lean_object*);
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Config_Cache_0__Lake_CacheServiceName_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instFromJson___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instFromJson = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instFromJson___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_toJson(lean_object*);
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Config_Cache_0__Lake_CacheServiceName_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instToJson___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instToJson = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceName_instToJson___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofRepo(lean_object*);
LEAN_EXPORT uint8_t l_Lake_CacheServiceScope_isRepo(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_isRepo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString___boxed(lean_object*);
static const lean_closure_object l_Lake_CacheServiceScope_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheServiceScope_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_CacheServiceScope_instToString___closed__0 = (const lean_object*)&l_Lake_CacheServiceScope_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheServiceScope_instToString = (const lean_object*)&l_Lake_CacheServiceScope_instToString___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(lean_object*);
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_instToJson___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_instToJson = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_instToJson___closed__0_value;
static const lean_string_object l_Lake_CacheOutput_schemaVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "2026-02-25"};
static const lean_object* l_Lake_CacheOutput_schemaVersion___closed__0 = (const lean_object*)&l_Lake_CacheOutput_schemaVersion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheOutput_schemaVersion = (const lean_object*)&l_Lake_CacheOutput_schemaVersion___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedCacheOutput_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_instInhabitedCacheOutput_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedCacheOutput_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedCacheOutput_default = (const lean_object*)&l_Lake_instInhabitedCacheOutput_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedCacheOutput = (const lean_object*)&l_Lake_instInhabitedCacheOutput_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheOutput_ofData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(lean_object*);
static const lean_string_object l_Lake_CacheOutput_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lake_CacheOutput_toJson___closed__0 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__0_value;
static const lean_string_object l_Lake_CacheOutput_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "schemaVersion"};
static const lean_object* l_Lake_CacheOutput_toJson___closed__1 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__1_value;
static const lean_ctor_object l_Lake_CacheOutput_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_CacheOutput_schemaVersion___closed__0_value)}};
static const lean_object* l_Lake_CacheOutput_toJson___closed__2 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__2_value;
static lean_once_cell_t l_Lake_CacheOutput_toJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_CacheOutput_toJson___closed__3;
static const lean_string_object l_Lake_CacheOutput_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "service"};
static const lean_object* l_Lake_CacheOutput_toJson___closed__4 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__4_value;
static const lean_string_object l_Lake_CacheOutput_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "scope"};
static const lean_object* l_Lake_CacheOutput_toJson___closed__5 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__5_value;
static const lean_string_object l_Lake_CacheOutput_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "repo"};
static const lean_object* l_Lake_CacheOutput_toJson___closed__6 = (const lean_object*)&l_Lake_CacheOutput_toJson___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_CacheOutput_toJson(lean_object*);
static const lean_closure_object l_Lake_CacheOutput_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheOutput_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_CacheOutput_instToJson___closed__0 = (const lean_object*)&l_Lake_CacheOutput_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheOutput_instToJson = (const lean_object*)&l_Lake_CacheOutput_instToJson___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheOutput_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "property not found: data"};
static const lean_object* l_Lake_CacheOutput_fromJson_x3f___closed__0 = (const lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__0_value;
static const lean_ctor_object l_Lake_CacheOutput_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__0_value)}};
static const lean_object* l_Lake_CacheOutput_fromJson_x3f___closed__1 = (const lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lake_CacheOutput_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scope: "};
static const lean_object* l_Lake_CacheOutput_fromJson_x3f___closed__2 = (const lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__2_value;
static const lean_string_object l_Lake_CacheOutput_fromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "repo: "};
static const lean_object* l_Lake_CacheOutput_fromJson_x3f___closed__3 = (const lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__3_value;
static const lean_string_object l_Lake_CacheOutput_fromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "service: "};
static const lean_object* l_Lake_CacheOutput_fromJson_x3f___closed__4 = (const lean_object*)&l_Lake_CacheOutput_fromJson_x3f___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_CacheOutput_fromJson_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_CacheOutput_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheOutput_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_CacheOutput_instFromJson___closed__0 = (const lean_object*)&l_Lake_CacheOutput_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheOutput_instFromJson = (const lean_object*)&l_Lake_CacheOutput_instFromJson___closed__0_value;
static const lean_string_object l_Lake_instInhabitedCache_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_instInhabitedCache_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedCache_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedCache_default = (const lean_object*)&l_Lake_instInhabitedCache_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedCache = (const lean_object*)&l_Lake_instInhabitedCache_default___closed__0_value;
static const lean_string_object l_Lake_Cache_artifactDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "artifacts"};
static const lean_object* l_Lake_Cache_artifactDir___closed__0 = (const lean_object*)&l_Lake_Cache_artifactDir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_artifactDir(lean_object*);
static const lean_string_object l_Lake_Cache_artifactPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_Cache_artifactPath___closed__0 = (const lean_object*)&l_Lake_Cache_artifactPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Cache_getArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "artifact not found in cache: "};
static const lean_object* l_Lake_Cache_getArtifact___closed__0 = (const lean_object*)&l_Lake_Cache_getArtifact___closed__0_value;
static const lean_string_object l_Lake_Cache_getArtifact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "failed to retrieve artifact from cache: "};
static const lean_object* l_Lake_Cache_getArtifact___closed__1 = (const lean_object*)&l_Lake_Cache_getArtifact___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Cache_outputsDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "outputs"};
static const lean_object* l_Lake_Cache_outputsDir___closed__0 = (const lean_object*)&l_Lake_Cache_outputsDir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_outputsDir(lean_object*);
static const lean_string_object l_Lake_Cache_outputsFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".json"};
static const lean_object* l_Lake_Cache_outputsFile___closed__0 = (const lean_object*)&l_Lake_Cache_outputsFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Cache_readOutputs_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ": invalid JSON: "};
static const lean_object* l_Lake_Cache_readOutputs_x3f___closed__0 = (const lean_object*)&l_Lake_Cache_readOutputs_x3f___closed__0_value;
static const lean_string_object l_Lake_Cache_readOutputs_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ": read failed: "};
static const lean_object* l_Lake_Cache_readOutputs_x3f___closed__1 = (const lean_object*)&l_Lake_Cache_readOutputs_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Cache_revisionDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "revisions"};
static const lean_object* l_Lake_Cache_revisionDir___closed__0 = (const lean_object*)&l_Lake_Cache_revisionDir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_revisionDir(lean_object*);
static const lean_string_object l_Lake_Cache_revisionPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ".jsonl"};
static const lean_object* l_Lake_Cache_revisionPath___closed__0 = (const lean_object*)&l_Lake_Cache_revisionPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Cache_revisionPath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lake_CachePlatform_none = (const lean_object*)&l_Lake_instInhabitedCache_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_CachePlatform_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_isNone___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_system;
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CachePlatform_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lake_CachePlatform_toString___closed__0 = (const lean_object*)&l_Lake_CachePlatform_toString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CachePlatform_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CachePlatform_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CachePlatform_instToString___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CachePlatform_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Cache_0__Lake_CachePlatform_instToString = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CachePlatform_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheToolchain_none = (const lean_object*)&l_Lake_instInhabitedCache_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_CacheToolchain_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_isNone___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CacheToolchain_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_CacheToolchain_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheToolchain_instToString___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheToolchain_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheToolchain_instToString = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheToolchain_instToString___closed__0_value;
static const lean_array_object l_Lake_downloadArtifactCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_downloadArtifactCore___closed__0 = (const lean_object*)&l_Lake_downloadArtifactCore___closed__0_value;
static const lean_string_object l_Lake_downloadArtifactCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = ": downloaded artifact hash mismatch, got "};
static const lean_object* l_Lake_downloadArtifactCore___closed__1 = (const lean_object*)&l_Lake_downloadArtifactCore___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore(uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "curl produced invalid JSON output: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "; received:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "curl's JSON output did not contain a response code; JSON received:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "failed to upload artifact, error "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "curl's JSON output contained an invalid JSON response code: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "; JSON received:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "http_code"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "http_code: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "response_code"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-s"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-w"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "%{stderr}%{json}\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "--aws-sigv4"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "aws:amz:auto:s3"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--user"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-X"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "PUT"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-T"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-H"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Content-Type: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26;
static const lean_array_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "CURL"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "curl"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_CacheService_isReservoir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_isReservoir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_reservoirService(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadService(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadService(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtsService(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_withKey(lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_artifactContentType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "application/vnd.reservoir.artifact"};
static const lean_object* l_Lake_CacheService_artifactContentType___closed__0 = (const lean_object*)&l_Lake_CacheService_artifactContentType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheService_artifactContentType = (const lean_object*)&l_Lake_CacheService_artifactContentType___closed__0_value;
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ".art"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_artifactUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "/artifacts/"};
static const lean_object* l_Lake_CacheService_artifactUrl___closed__0 = (const lean_object*)&l_Lake_CacheService_artifactUrl___closed__0_value;
static const lean_string_object l_Lake_CacheService_artifactUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "/packages"};
static const lean_object* l_Lake_CacheService_artifactUrl___closed__1 = (const lean_object*)&l_Lake_CacheService_artifactUrl___closed__1_value;
static const lean_string_object l_Lake_CacheService_artifactUrl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "/repositories"};
static const lean_object* l_Lake_CacheService_artifactUrl___closed__2 = (const lean_object*)&l_Lake_CacheService_artifactUrl___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_downloadArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = ": downloading artifact "};
static const lean_object* l_Lake_CacheService_downloadArtifact___closed__0 = (const lean_object*)&l_Lake_CacheService_downloadArtifact___closed__0_value;
static const lean_string_object l_Lake_CacheService_downloadArtifact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n  local path: "};
static const lean_object* l_Lake_CacheService_downloadArtifact___closed__1 = (const lean_object*)&l_Lake_CacheService_downloadArtifact___closed__1_value;
static const lean_string_object l_Lake_CacheService_downloadArtifact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n  remote URL: "};
static const lean_object* l_Lake_CacheService_downloadArtifact___closed__2 = (const lean_object*)&l_Lake_CacheService_downloadArtifact___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_uploadArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": uploading artifact "};
static const lean_object* l_Lake_CacheService_uploadArtifact___closed__0 = (const lean_object*)&l_Lake_CacheService_uploadArtifact___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__0_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty;
static const lean_closure_object l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Hash_instHashable___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add(lean_object*, lean_object*, uint64_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tmp"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath(lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "urlnum"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "curl JSON: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "\nunexpected response:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "size_download"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "content_type"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "errormsg"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n  curl error: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": failed to "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " artifact "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " (status code: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "download"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "upload"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = ": failed to copy artifact: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0(uint64_t, uint64_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = ": failed to persist temporary artifact: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = ": failed to read downloaded artifact: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = ": uploaded artifact "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ": downloaded artifact "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "property not found: http_code"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__0_value)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = ": unidentifiable transfer completed: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "curl produced invalid JSON: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "; received: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exitcode"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__3_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "exitcode: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "url = "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "-o "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "-T "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = ": curl exited with code "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = ": curl produced unexpected output:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " some artifacts"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-Z"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__6 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__6_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-L"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--retry"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "3"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--config"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Content-Type: application/vnd.reservoir.artifact"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__21 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__21_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "/artifacts"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(lean_object*);
static const lean_string_object l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__0 = (const lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__0_value;
static const lean_string_object l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "error: "};
static const lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__1 = (const lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__1_value;
static const lean_string_object l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "status"};
static const lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__2 = (const lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__2_value;
static const lean_string_object l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "property not found: status"};
static const lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__3 = (const lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__3_value;
static const lean_ctor_object l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__3_value)}};
static const lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__4 = (const lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__4_value;
static const lean_string_object l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "status: "};
static const lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__5 = (const lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__5_value;
static const lean_string_object l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__6 = (const lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__6_value;
static const lean_string_object l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "property not found: message"};
static const lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__7 = (const lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__7_value;
static const lean_ctor_object l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__7_value)}};
static const lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__8 = (const lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__8_value;
static const lean_string_object l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "message: "};
static const lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__9 = (const lean_object*)&l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1(lean_object*);
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "curl exited with code "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "curl JSON:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\nstdout:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n  POST "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__3_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "\n  Transfer error: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__4_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "failed to fetch artifact URLs\n  POST "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "\n          \nInvalid curl JSON: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__6 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__6_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "curl produced unexpected output:\n"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__7 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__7_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "failed to fetch artifact URLs"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__8 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__8_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "failed to fetch artifact URLs (status code: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "\nIncorrect number of results: expected "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__10 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__10_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", got "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__11 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__11_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ")\n  POST "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__12 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__12_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "\nReservoir error: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__13 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__13_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "POST"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__14 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__14_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-d"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__15 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__15_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__16 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__16_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Content-Type: application/json"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__17 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__17_value;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24;
static lean_once_cell_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "failed to copy artifact: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_downloadArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "no artifacts to download"};
static const lean_object* l_Lake_CacheService_downloadArtifacts___closed__0 = (const lean_object*)&l_Lake_CacheService_downloadArtifacts___closed__0_value;
static const lean_ctor_object l_Lake_CacheService_downloadArtifacts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_CacheService_downloadArtifacts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_CacheService_downloadArtifacts___closed__1 = (const lean_object*)&l_Lake_CacheService_downloadArtifacts___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_uploadArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no artifacts to upload"};
static const lean_object* l_Lake_CacheService_uploadArtifacts___closed__0 = (const lean_object*)&l_Lake_CacheService_uploadArtifacts___closed__0_value;
static const lean_ctor_object l_Lake_CacheService_uploadArtifacts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_CacheService_uploadArtifacts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_CacheService_uploadArtifacts___closed__1 = (const lean_object*)&l_Lake_CacheService_uploadArtifacts___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_mapContentType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "application/vnd.reservoir.outputs+json-lines"};
static const lean_object* l_Lake_CacheService_mapContentType___closed__0 = (const lean_object*)&l_Lake_CacheService_mapContentType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_CacheService_mapContentType = (const lean_object*)&l_Lake_CacheService_mapContentType___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/tc/"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/pt/"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_revisionUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "&toolchain="};
static const lean_object* l_Lake_CacheService_revisionUrl___closed__0 = (const lean_object*)&l_Lake_CacheService_revisionUrl___closed__0_value;
static const lean_string_object l_Lake_CacheService_revisionUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "/build-outputs\?rev="};
static const lean_object* l_Lake_CacheService_revisionUrl___closed__1 = (const lean_object*)&l_Lake_CacheService_revisionUrl___closed__1_value;
static const lean_string_object l_Lake_CacheService_revisionUrl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "&platform="};
static const lean_object* l_Lake_CacheService_revisionUrl___closed__2 = (const lean_object*)&l_Lake_CacheService_revisionUrl___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ": output lookup failed"};
static const lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0 = (const lean_object*)&l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0_value;
static const lean_string_object l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = ": downloading build outputs for revision "};
static const lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1 = (const lean_object*)&l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1_value;
static const lean_array_object l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2 = (const lean_object*)&l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_uploadRevisionOutputs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = ": uploading build outputs for revision "};
static const lean_object* l_Lake_CacheService_uploadRevisionOutputs___closed__0 = (const lean_object*)&l_Lake_CacheService_uploadRevisionOutputs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(lean_object* v_inputName_10_, lean_object* v_line_11_, lean_object* v_a_12_){
_start:
{
lean_object* v_a_15_; lean_object* v___x_24_; lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_24_ = lean_string_utf8_byte_size(v_line_11_);
v___x_25_ = lean_unsigned_to_nat(0u);
v___x_26_ = lean_nat_dec_eq(v___x_24_, v___x_25_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Json_parse(v_line_11_);
if (lean_obj_tag(v___x_27_) == 0)
{
lean_object* v_a_28_; 
v_a_28_ = lean_ctor_get(v___x_27_, 0);
lean_inc(v_a_28_);
lean_dec_ref_known(v___x_27_, 1);
v_a_15_ = v_a_28_;
goto v___jp_14_;
}
else
{
lean_object* v_a_29_; lean_object* v___x_30_; 
v_a_29_ = lean_ctor_get(v___x_27_, 0);
lean_inc(v_a_29_);
lean_dec_ref_known(v___x_27_, 1);
v___x_30_ = l_Lake_Date_fromJson_x3f(v_a_29_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
lean_inc(v_a_31_);
lean_dec_ref_known(v___x_30_, 1);
v_a_15_ = v_a_31_;
goto v___jp_14_;
}
else
{
lean_object* v_a_32_; lean_object* v___x_45_; uint8_t v___x_46_; 
v_a_32_ = lean_ctor_get(v___x_30_, 0);
lean_inc(v_a_32_);
lean_dec_ref_known(v___x_30_, 1);
v___x_45_ = ((lean_object*)(l_Lake_CacheMap_schemaVersion));
v___x_46_ = l_Lake_instOrdDate_ord(v_a_32_, v___x_45_);
if (v___x_46_ == 0)
{
goto v___jp_33_;
}
else
{
if (v___x_26_ == 0)
{
lean_object* v___x_47_; lean_object* v___x_48_; 
lean_dec(v_a_32_);
lean_dec_ref(v_inputName_10_);
v___x_47_ = lean_box(0);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v_a_12_);
return v___x_48_;
}
else
{
goto v___jp_33_;
}
}
v___jp_33_:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_34_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__1));
v___x_35_ = lean_string_append(v_inputName_10_, v___x_34_);
v___x_36_ = l_Lake_Date_toString(v_a_32_);
v___x_37_ = lean_string_append(v___x_35_, v___x_36_);
lean_dec_ref(v___x_36_);
v___x_38_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__2));
v___x_39_ = lean_string_append(v___x_37_, v___x_38_);
v___x_40_ = 2;
v___x_41_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_41_, 0, v___x_39_);
lean_ctor_set_uint8(v___x_41_, sizeof(void*)*1, v___x_40_);
v___x_42_ = lean_box(0);
v___x_43_ = lean_array_push(v_a_12_, v___x_41_);
v___x_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_42_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
return v___x_44_;
}
}
}
}
else
{
lean_object* v___x_49_; lean_object* v___x_50_; uint8_t v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
lean_dec_ref(v_line_11_);
v___x_49_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__3));
v___x_50_ = lean_string_append(v_inputName_10_, v___x_49_);
v___x_51_ = 3;
v___x_52_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_52_, 0, v___x_50_);
lean_ctor_set_uint8(v___x_52_, sizeof(void*)*1, v___x_51_);
v___x_53_ = lean_array_get_size(v_a_12_);
v___x_54_ = lean_array_push(v_a_12_, v___x_52_);
v___x_55_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_53_);
lean_ctor_set(v___x_55_, 1, v___x_54_);
return v___x_55_;
}
v___jp_14_:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_16_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___closed__0));
v___x_17_ = lean_string_append(v_inputName_10_, v___x_16_);
v___x_18_ = lean_string_append(v___x_17_, v_a_15_);
lean_dec_ref(v_a_15_);
v___x_19_ = 2;
v___x_20_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_20_, 0, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*1, v___x_19_);
v___x_21_ = lean_box(0);
v___x_22_ = lean_array_push(v_a_12_, v___x_20_);
v___x_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_21_);
lean_ctor_set(v___x_23_, 1, v___x_22_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___boxed(lean_object* v_inputName_56_, lean_object* v_line_57_, lean_object* v_a_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_inputName_56_, v_line_57_, v_a_58_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(uint64_t v_a_61_, lean_object* v_x_62_){
_start:
{
if (lean_obj_tag(v_x_62_) == 0)
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
else
{
lean_object* v_key_64_; lean_object* v_tail_65_; uint64_t v___x_66_; uint8_t v___x_67_; 
v_key_64_ = lean_ctor_get(v_x_62_, 0);
v_tail_65_ = lean_ctor_get(v_x_62_, 2);
v___x_66_ = lean_unbox_uint64(v_key_64_);
v___x_67_ = lean_uint64_dec_eq(v___x_66_, v_a_61_);
if (v___x_67_ == 0)
{
v_x_62_ = v_tail_65_;
goto _start;
}
else
{
return v___x_67_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg___boxed(lean_object* v_a_69_, lean_object* v_x_70_){
_start:
{
uint64_t v_a_boxed_71_; uint8_t v_res_72_; lean_object* v_r_73_; 
v_a_boxed_71_ = lean_unbox_uint64(v_a_69_);
lean_dec_ref(v_a_69_);
v_res_72_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(v_a_boxed_71_, v_x_70_);
lean_dec(v_x_70_);
v_r_73_ = lean_box(v_res_72_);
return v_r_73_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_74_, lean_object* v_x_75_){
_start:
{
if (lean_obj_tag(v_x_75_) == 0)
{
return v_x_74_;
}
else
{
lean_object* v_key_76_; lean_object* v_value_77_; lean_object* v_tail_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_102_; 
v_key_76_ = lean_ctor_get(v_x_75_, 0);
v_value_77_ = lean_ctor_get(v_x_75_, 1);
v_tail_78_ = lean_ctor_get(v_x_75_, 2);
v_isSharedCheck_102_ = !lean_is_exclusive(v_x_75_);
if (v_isSharedCheck_102_ == 0)
{
v___x_80_ = v_x_75_;
v_isShared_81_ = v_isSharedCheck_102_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_tail_78_);
lean_inc(v_value_77_);
lean_inc(v_key_76_);
lean_dec(v_x_75_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_102_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_82_; uint64_t v___x_83_; uint64_t v___x_84_; uint64_t v___x_85_; uint64_t v___x_86_; uint64_t v_fold_87_; uint64_t v___x_88_; uint64_t v___x_89_; uint64_t v___x_90_; size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; size_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_98_; 
v___x_82_ = lean_array_get_size(v_x_74_);
v___x_83_ = 32ULL;
v___x_84_ = lean_unbox_uint64(v_key_76_);
v___x_85_ = lean_uint64_shift_right(v___x_84_, v___x_83_);
v___x_86_ = lean_unbox_uint64(v_key_76_);
v_fold_87_ = lean_uint64_xor(v___x_86_, v___x_85_);
v___x_88_ = 16ULL;
v___x_89_ = lean_uint64_shift_right(v_fold_87_, v___x_88_);
v___x_90_ = lean_uint64_xor(v_fold_87_, v___x_89_);
v___x_91_ = lean_uint64_to_usize(v___x_90_);
v___x_92_ = lean_usize_of_nat(v___x_82_);
v___x_93_ = ((size_t)1ULL);
v___x_94_ = lean_usize_sub(v___x_92_, v___x_93_);
v___x_95_ = lean_usize_land(v___x_91_, v___x_94_);
v___x_96_ = lean_array_uget_borrowed(v_x_74_, v___x_95_);
lean_inc(v___x_96_);
if (v_isShared_81_ == 0)
{
lean_ctor_set(v___x_80_, 2, v___x_96_);
v___x_98_ = v___x_80_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_key_76_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_value_77_);
lean_ctor_set(v_reuseFailAlloc_101_, 2, v___x_96_);
v___x_98_ = v_reuseFailAlloc_101_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_object* v___x_99_; 
v___x_99_ = lean_array_uset(v_x_74_, v___x_95_, v___x_98_);
v_x_74_ = v___x_99_;
v_x_75_ = v_tail_78_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4___redArg(lean_object* v_i_103_, lean_object* v_source_104_, lean_object* v_target_105_){
_start:
{
lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_106_ = lean_array_get_size(v_source_104_);
v___x_107_ = lean_nat_dec_lt(v_i_103_, v___x_106_);
if (v___x_107_ == 0)
{
lean_dec_ref(v_source_104_);
lean_dec(v_i_103_);
return v_target_105_;
}
else
{
lean_object* v_es_108_; lean_object* v___x_109_; lean_object* v_source_110_; lean_object* v_target_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_es_108_ = lean_array_fget(v_source_104_, v_i_103_);
v___x_109_ = lean_box(0);
v_source_110_ = lean_array_fset(v_source_104_, v_i_103_, v___x_109_);
v_target_111_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5___redArg(v_target_105_, v_es_108_);
v___x_112_ = lean_unsigned_to_nat(1u);
v___x_113_ = lean_nat_add(v_i_103_, v___x_112_);
lean_dec(v_i_103_);
v_i_103_ = v___x_113_;
v_source_104_ = v_source_110_;
v_target_105_ = v_target_111_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3___redArg(lean_object* v_data_115_){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v_nbuckets_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_116_ = lean_array_get_size(v_data_115_);
v___x_117_ = lean_unsigned_to_nat(2u);
v_nbuckets_118_ = lean_nat_mul(v___x_116_, v___x_117_);
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_box(0);
v___x_121_ = lean_mk_array(v_nbuckets_118_, v___x_120_);
v___x_122_ = lean_array_propagate_mark(v_data_115_, v___x_121_);
v___x_123_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4___redArg(v___x_119_, v_data_115_, v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(uint64_t v_a_124_, lean_object* v_b_125_, lean_object* v_x_126_){
_start:
{
if (lean_obj_tag(v_x_126_) == 0)
{
lean_dec(v_b_125_);
return v_x_126_;
}
else
{
lean_object* v_key_127_; lean_object* v_value_128_; lean_object* v_tail_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_143_; 
v_key_127_ = lean_ctor_get(v_x_126_, 0);
v_value_128_ = lean_ctor_get(v_x_126_, 1);
v_tail_129_ = lean_ctor_get(v_x_126_, 2);
v_isSharedCheck_143_ = !lean_is_exclusive(v_x_126_);
if (v_isSharedCheck_143_ == 0)
{
v___x_131_ = v_x_126_;
v_isShared_132_ = v_isSharedCheck_143_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_tail_129_);
lean_inc(v_value_128_);
lean_inc(v_key_127_);
lean_dec(v_x_126_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_143_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
uint64_t v___x_133_; uint8_t v___x_134_; 
v___x_133_ = lean_unbox_uint64(v_key_127_);
v___x_134_ = lean_uint64_dec_eq(v___x_133_, v_a_124_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_135_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(v_a_124_, v_b_125_, v_tail_129_);
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 2, v___x_135_);
v___x_137_ = v___x_131_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_key_127_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v_value_128_);
lean_ctor_set(v_reuseFailAlloc_138_, 2, v___x_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
else
{
lean_object* v___x_139_; lean_object* v___x_141_; 
lean_dec(v_value_128_);
lean_dec(v_key_127_);
v___x_139_ = lean_box_uint64(v_a_124_);
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 1, v_b_125_);
lean_ctor_set(v___x_131_, 0, v___x_139_);
v___x_141_ = v___x_131_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_139_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v_b_125_);
lean_ctor_set(v_reuseFailAlloc_142_, 2, v_tail_129_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg___boxed(lean_object* v_a_144_, lean_object* v_b_145_, lean_object* v_x_146_){
_start:
{
uint64_t v_a_boxed_147_; lean_object* v_res_148_; 
v_a_boxed_147_ = lean_unbox_uint64(v_a_144_);
lean_dec_ref(v_a_144_);
v_res_148_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(v_a_boxed_147_, v_b_145_, v_x_146_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(lean_object* v_m_149_, uint64_t v_a_150_, lean_object* v_b_151_){
_start:
{
lean_object* v_size_152_; lean_object* v_buckets_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_196_; 
v_size_152_ = lean_ctor_get(v_m_149_, 0);
v_buckets_153_ = lean_ctor_get(v_m_149_, 1);
v_isSharedCheck_196_ = !lean_is_exclusive(v_m_149_);
if (v_isSharedCheck_196_ == 0)
{
v___x_155_ = v_m_149_;
v_isShared_156_ = v_isSharedCheck_196_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_buckets_153_);
lean_inc(v_size_152_);
lean_dec(v_m_149_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_196_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_157_; uint64_t v___x_158_; uint64_t v___x_159_; uint64_t v_fold_160_; uint64_t v___x_161_; uint64_t v___x_162_; uint64_t v___x_163_; size_t v___x_164_; size_t v___x_165_; size_t v___x_166_; size_t v___x_167_; size_t v___x_168_; lean_object* v_bkt_169_; uint8_t v___x_170_; 
v___x_157_ = lean_array_get_size(v_buckets_153_);
v___x_158_ = 32ULL;
v___x_159_ = lean_uint64_shift_right(v_a_150_, v___x_158_);
v_fold_160_ = lean_uint64_xor(v_a_150_, v___x_159_);
v___x_161_ = 16ULL;
v___x_162_ = lean_uint64_shift_right(v_fold_160_, v___x_161_);
v___x_163_ = lean_uint64_xor(v_fold_160_, v___x_162_);
v___x_164_ = lean_uint64_to_usize(v___x_163_);
v___x_165_ = lean_usize_of_nat(v___x_157_);
v___x_166_ = ((size_t)1ULL);
v___x_167_ = lean_usize_sub(v___x_165_, v___x_166_);
v___x_168_ = lean_usize_land(v___x_164_, v___x_167_);
v_bkt_169_ = lean_array_uget_borrowed(v_buckets_153_, v___x_168_);
v___x_170_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(v_a_150_, v_bkt_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; lean_object* v_size_x27_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v_buckets_x27_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_171_ = lean_unsigned_to_nat(1u);
v_size_x27_172_ = lean_nat_add(v_size_152_, v___x_171_);
lean_dec(v_size_152_);
v___x_173_ = lean_box_uint64(v_a_150_);
lean_inc(v_bkt_169_);
v___x_174_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
lean_ctor_set(v___x_174_, 1, v_b_151_);
lean_ctor_set(v___x_174_, 2, v_bkt_169_);
v_buckets_x27_175_ = lean_array_uset(v_buckets_153_, v___x_168_, v___x_174_);
v___x_176_ = lean_unsigned_to_nat(4u);
v___x_177_ = lean_nat_mul(v_size_x27_172_, v___x_176_);
v___x_178_ = lean_unsigned_to_nat(3u);
v___x_179_ = lean_nat_div(v___x_177_, v___x_178_);
lean_dec(v___x_177_);
v___x_180_ = lean_array_get_size(v_buckets_x27_175_);
v___x_181_ = lean_nat_dec_le(v___x_179_, v___x_180_);
lean_dec(v___x_179_);
if (v___x_181_ == 0)
{
lean_object* v_val_182_; lean_object* v___x_184_; 
v_val_182_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3___redArg(v_buckets_x27_175_);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 1, v_val_182_);
lean_ctor_set(v___x_155_, 0, v_size_x27_172_);
v___x_184_ = v___x_155_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_size_x27_172_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v_val_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
else
{
lean_object* v___x_187_; 
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 1, v_buckets_x27_175_);
lean_ctor_set(v___x_155_, 0, v_size_x27_172_);
v___x_187_ = v___x_155_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_size_x27_172_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v_buckets_x27_175_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
else
{
lean_object* v___x_189_; lean_object* v_buckets_x27_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_194_; 
lean_inc(v_bkt_169_);
v___x_189_ = lean_box(0);
v_buckets_x27_190_ = lean_array_uset(v_buckets_153_, v___x_168_, v___x_189_);
v___x_191_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(v_a_150_, v_b_151_, v_bkt_169_);
v___x_192_ = lean_array_uset(v_buckets_x27_190_, v___x_168_, v___x_191_);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 1, v___x_192_);
v___x_194_ = v___x_155_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_size_152_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v___x_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg___boxed(lean_object* v_m_197_, lean_object* v_a_198_, lean_object* v_b_199_){
_start:
{
uint64_t v_a_boxed_200_; lean_object* v_res_201_; 
v_a_boxed_200_ = lean_unbox_uint64(v_a_198_);
lean_dec_ref(v_a_198_);
v_res_201_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_m_197_, v_a_boxed_200_, v_b_199_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0(size_t v_sz_202_, size_t v_i_203_, lean_object* v_bs_204_){
_start:
{
uint8_t v___x_205_; 
v___x_205_ = lean_usize_dec_lt(v_i_203_, v_sz_202_);
if (v___x_205_ == 0)
{
lean_object* v___x_206_; 
v___x_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_206_, 0, v_bs_204_);
return v___x_206_;
}
else
{
lean_object* v_v_207_; lean_object* v___x_208_; lean_object* v_bs_x27_209_; size_t v___x_210_; size_t v___x_211_; lean_object* v___x_212_; 
v_v_207_ = lean_array_uget(v_bs_204_, v_i_203_);
v___x_208_ = lean_unsigned_to_nat(0u);
v_bs_x27_209_ = lean_array_uset(v_bs_204_, v_i_203_, v___x_208_);
v___x_210_ = ((size_t)1ULL);
v___x_211_ = lean_usize_add(v_i_203_, v___x_210_);
v___x_212_ = lean_array_uset(v_bs_x27_209_, v_i_203_, v_v_207_);
v_i_203_ = v___x_211_;
v_bs_204_ = v___x_212_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0___boxed(lean_object* v_sz_214_, lean_object* v_i_215_, lean_object* v_bs_216_){
_start:
{
size_t v_sz_boxed_217_; size_t v_i_boxed_218_; lean_object* v_res_219_; 
v_sz_boxed_217_ = lean_unbox_usize(v_sz_214_);
lean_dec(v_sz_214_);
v_i_boxed_218_ = lean_unbox_usize(v_i_215_);
lean_dec(v_i_215_);
v_res_219_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0(v_sz_boxed_217_, v_i_boxed_218_, v_bs_216_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0(lean_object* v_x_222_){
_start:
{
if (lean_obj_tag(v_x_222_) == 4)
{
lean_object* v_elems_223_; size_t v_sz_224_; size_t v___x_225_; lean_object* v___x_226_; 
v_elems_223_ = lean_ctor_get(v_x_222_, 0);
lean_inc_ref(v_elems_223_);
lean_dec_ref_known(v_x_222_, 1);
v_sz_224_ = lean_array_size(v_elems_223_);
v___x_225_ = ((size_t)0ULL);
v___x_226_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0_spec__0(v_sz_224_, v___x_225_, v_elems_223_);
return v___x_226_;
}
else
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_227_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0));
v___x_228_ = lean_unsigned_to_nat(80u);
v___x_229_ = l_Lean_Json_pretty(v_x_222_, v___x_228_);
v___x_230_ = lean_string_append(v___x_227_, v___x_229_);
lean_dec_ref(v___x_229_);
v___x_231_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1));
v___x_232_ = lean_string_append(v___x_230_, v___x_231_);
v___x_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(lean_object* v_cache_240_, lean_object* v_line_241_, uint8_t v_platformIndependent_242_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = l_Lean_Json_parse(v_line_241_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_251_; 
lean_dec_ref(v_cache_240_);
v_a_244_ = lean_ctor_get(v___x_243_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_251_ == 0)
{
v___x_246_ = v___x_243_;
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_a_244_);
lean_dec(v___x_243_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_251_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_249_; 
if (v_isShared_247_ == 0)
{
v___x_249_ = v___x_246_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_a_244_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
else
{
lean_object* v_a_252_; lean_object* v___x_253_; 
v_a_252_ = lean_ctor_get(v___x_243_, 0);
lean_inc(v_a_252_);
lean_dec_ref_known(v___x_243_, 1);
v___x_253_ = l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0(v_a_252_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
lean_dec_ref(v_cache_240_);
v_a_254_ = lean_ctor_get(v___x_253_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_253_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_253_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_253_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
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
lean_object* v_a_262_; lean_object* v___x_263_; lean_object* v___x_264_; uint8_t v___x_265_; 
v_a_262_ = lean_ctor_get(v___x_253_, 0);
lean_inc(v_a_262_);
lean_dec_ref_known(v___x_253_, 1);
v___x_263_ = lean_unsigned_to_nat(0u);
v___x_264_ = lean_array_get_size(v_a_262_);
v___x_265_ = lean_nat_dec_lt(v___x_263_, v___x_264_);
if (v___x_265_ == 0)
{
lean_object* v___x_266_; 
lean_dec(v_a_262_);
lean_dec_ref(v_cache_240_);
v___x_266_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__1));
return v___x_266_;
}
else
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_array_fget_borrowed(v_a_262_, v___x_263_);
lean_inc(v___x_267_);
v___x_268_ = l_Lake_Hash_fromJson_x3f(v___x_267_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_dec(v_a_262_);
lean_dec_ref(v_cache_240_);
v_a_269_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_268_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_291_; 
v_a_277_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_291_ == 0)
{
v___x_279_ = v___x_268_;
v_isShared_280_ = v_isSharedCheck_291_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_268_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_291_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lean_unsigned_to_nat(1u);
v___x_282_ = lean_nat_dec_lt(v___x_281_, v___x_264_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; 
lean_del_object(v___x_279_);
lean_dec(v_a_277_);
lean_dec(v_a_262_);
lean_dec_ref(v_cache_240_);
v___x_283_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___closed__3));
return v___x_283_;
}
else
{
lean_object* v___x_284_; lean_object* v___x_285_; uint64_t v___x_286_; lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_284_ = lean_array_fget(v_a_262_, v___x_281_);
lean_dec(v_a_262_);
v___x_285_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_285_, 0, v___x_284_);
lean_ctor_set_uint8(v___x_285_, sizeof(void*)*1, v_platformIndependent_242_);
v___x_286_ = lean_unbox_uint64(v_a_277_);
lean_dec(v_a_277_);
v___x_287_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_cache_240_, v___x_286_, v___x_285_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_287_);
v___x_289_ = v___x_279_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_287_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go___boxed(lean_object* v_cache_292_, lean_object* v_line_293_, lean_object* v_platformIndependent_294_){
_start:
{
uint8_t v_platformIndependent_boxed_295_; lean_object* v_res_296_; 
v_platformIndependent_boxed_295_ = lean_unbox(v_platformIndependent_294_);
v_res_296_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(v_cache_292_, v_line_293_, v_platformIndependent_boxed_295_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1(lean_object* v_00_u03b2_297_, lean_object* v_m_298_, uint64_t v_a_299_, lean_object* v_b_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_m_298_, v_a_299_, v_b_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___boxed(lean_object* v_00_u03b2_302_, lean_object* v_m_303_, lean_object* v_a_304_, lean_object* v_b_305_){
_start:
{
uint64_t v_a_boxed_306_; lean_object* v_res_307_; 
v_a_boxed_306_ = lean_unbox_uint64(v_a_304_);
lean_dec_ref(v_a_304_);
v_res_307_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1(v_00_u03b2_302_, v_m_303_, v_a_boxed_306_, v_b_305_);
return v_res_307_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2(lean_object* v_00_u03b2_308_, uint64_t v_a_309_, lean_object* v_x_310_){
_start:
{
uint8_t v___x_311_; 
v___x_311_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(v_a_309_, v_x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___boxed(lean_object* v_00_u03b2_312_, lean_object* v_a_313_, lean_object* v_x_314_){
_start:
{
uint64_t v_a_boxed_315_; uint8_t v_res_316_; lean_object* v_r_317_; 
v_a_boxed_315_ = lean_unbox_uint64(v_a_313_);
lean_dec_ref(v_a_313_);
v_res_316_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2(v_00_u03b2_312_, v_a_boxed_315_, v_x_314_);
lean_dec(v_x_314_);
v_r_317_ = lean_box(v_res_316_);
return v_r_317_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3(lean_object* v_00_u03b2_318_, lean_object* v_data_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3___redArg(v_data_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4(lean_object* v_00_u03b2_321_, uint64_t v_a_322_, lean_object* v_b_323_, lean_object* v_x_324_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___redArg(v_a_322_, v_b_323_, v_x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4___boxed(lean_object* v_00_u03b2_326_, lean_object* v_a_327_, lean_object* v_b_328_, lean_object* v_x_329_){
_start:
{
uint64_t v_a_boxed_330_; lean_object* v_res_331_; 
v_a_boxed_330_ = lean_unbox_uint64(v_a_327_);
lean_dec_ref(v_a_327_);
v_res_331_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__4(v_00_u03b2_326_, v_a_boxed_330_, v_b_328_, v_x_329_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_332_, lean_object* v_i_333_, lean_object* v_source_334_, lean_object* v_target_335_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4___redArg(v_i_333_, v_source_334_, v_target_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_337_, lean_object* v_x_338_, lean_object* v_x_339_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__3_spec__4_spec__5___redArg(v_x_338_, v_x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___lam__0(lean_object* v_toPure_341_, lean_object* v_cache_342_, lean_object* v_____r_343_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = lean_apply_2(v_toPure_341_, lean_box(0), v_cache_342_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg(lean_object* v_inst_347_, lean_object* v_inst_348_, lean_object* v_inputName_349_, lean_object* v_lineNo_350_, lean_object* v_cache_351_, lean_object* v_line_352_, uint8_t v_platformIndependent_353_){
_start:
{
lean_object* v_toApplicative_354_; lean_object* v_toBind_355_; lean_object* v_toPure_356_; lean_object* v___x_357_; 
v_toApplicative_354_ = lean_ctor_get(v_inst_347_, 0);
lean_inc_ref(v_toApplicative_354_);
v_toBind_355_ = lean_ctor_get(v_inst_347_, 1);
lean_inc(v_toBind_355_);
lean_dec_ref(v_inst_347_);
v_toPure_356_ = lean_ctor_get(v_toApplicative_354_, 1);
lean_inc(v_toPure_356_);
lean_dec_ref(v_toApplicative_354_);
lean_inc_ref(v_cache_351_);
v___x_357_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(v_cache_351_, v_line_352_, v_platformIndependent_353_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___f_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
v___f_359_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___lam__0), 3, 2);
lean_closure_set(v___f_359_, 0, v_toPure_356_);
lean_closure_set(v___f_359_, 1, v_cache_351_);
v___x_360_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0));
v___x_361_ = lean_string_append(v_inputName_349_, v___x_360_);
v___x_362_ = l_Nat_reprFast(v_lineNo_350_);
v___x_363_ = lean_string_append(v___x_361_, v___x_362_);
lean_dec_ref(v___x_362_);
v___x_364_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_365_ = lean_string_append(v___x_363_, v___x_364_);
v___x_366_ = lean_string_append(v___x_365_, v_a_358_);
lean_dec(v_a_358_);
v___x_367_ = 2;
v___x_368_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set_uint8(v___x_368_, sizeof(void*)*1, v___x_367_);
v___x_369_ = lean_apply_1(v_inst_348_, v___x_368_);
v___x_370_ = lean_apply_4(v_toBind_355_, lean_box(0), lean_box(0), v___x_369_, v___f_359_);
return v___x_370_;
}
else
{
lean_object* v_a_371_; lean_object* v___x_372_; 
lean_dec(v_toBind_355_);
lean_dec_ref(v_cache_351_);
lean_dec(v_lineNo_350_);
lean_dec_ref(v_inputName_349_);
lean_dec(v_inst_348_);
v_a_371_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_357_, 1);
v___x_372_ = lean_apply_2(v_toPure_356_, lean_box(0), v_a_371_);
return v___x_372_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___boxed(lean_object* v_inst_373_, lean_object* v_inst_374_, lean_object* v_inputName_375_, lean_object* v_lineNo_376_, lean_object* v_cache_377_, lean_object* v_line_378_, lean_object* v_platformIndependent_379_){
_start:
{
uint8_t v_platformIndependent_boxed_380_; lean_object* v_res_381_; 
v_platformIndependent_boxed_380_ = lean_unbox(v_platformIndependent_379_);
v_res_381_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg(v_inst_373_, v_inst_374_, v_inputName_375_, v_lineNo_376_, v_cache_377_, v_line_378_, v_platformIndependent_boxed_380_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry(lean_object* v_m_382_, lean_object* v_inst_383_, lean_object* v_inst_384_, lean_object* v_inputName_385_, lean_object* v_lineNo_386_, lean_object* v_cache_387_, lean_object* v_line_388_, uint8_t v_platformIndependent_389_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg(v_inst_383_, v_inst_384_, v_inputName_385_, v_lineNo_386_, v_cache_387_, v_line_388_, v_platformIndependent_389_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___boxed(lean_object* v_m_391_, lean_object* v_inst_392_, lean_object* v_inst_393_, lean_object* v_inputName_394_, lean_object* v_lineNo_395_, lean_object* v_cache_396_, lean_object* v_line_397_, lean_object* v_platformIndependent_398_){
_start:
{
uint8_t v_platformIndependent_boxed_399_; lean_object* v_res_400_; 
v_platformIndependent_boxed_399_ = lean_unbox(v_platformIndependent_398_);
v_res_400_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry(v_m_391_, v_inst_392_, v_inst_393_, v_inputName_394_, v_lineNo_395_, v_cache_396_, v_line_397_, v_platformIndependent_boxed_399_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(lean_object* v_inputName_401_, lean_object* v_lineNo_402_, lean_object* v_cache_403_, lean_object* v_line_404_, uint8_t v_platformIndependent_405_, lean_object* v___y_406_){
_start:
{
lean_object* v___x_408_; 
lean_inc_ref(v_cache_403_);
v___x_408_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(v_cache_403_, v_line_404_, v_platformIndependent_405_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v_a_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_426_; 
v_a_409_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_426_ == 0)
{
v___x_411_ = v___x_408_;
v_isShared_412_ = v_isSharedCheck_426_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_a_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_426_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_424_; 
v___x_413_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0));
v___x_414_ = lean_string_append(v_inputName_401_, v___x_413_);
v___x_415_ = l_Nat_reprFast(v_lineNo_402_);
v___x_416_ = lean_string_append(v___x_414_, v___x_415_);
lean_dec_ref(v___x_415_);
v___x_417_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_418_ = lean_string_append(v___x_416_, v___x_417_);
v___x_419_ = lean_string_append(v___x_418_, v_a_409_);
lean_dec(v_a_409_);
v___x_420_ = 2;
v___x_421_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_421_, 0, v___x_419_);
lean_ctor_set_uint8(v___x_421_, sizeof(void*)*1, v___x_420_);
lean_inc_ref(v___y_406_);
v___x_422_ = lean_apply_2(v___y_406_, v___x_421_, lean_box(0));
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 0, v_cache_403_);
v___x_424_ = v___x_411_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_cache_403_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
else
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_434_; 
lean_dec_ref(v_cache_403_);
lean_dec(v_lineNo_402_);
lean_dec_ref(v_inputName_401_);
v_a_427_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_434_ == 0)
{
v___x_429_ = v___x_408_;
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_408_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
lean_ctor_set_tag(v___x_429_, 0);
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_a_427_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0___boxed(lean_object* v_inputName_435_, lean_object* v_lineNo_436_, lean_object* v_cache_437_, lean_object* v_line_438_, lean_object* v_platformIndependent_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
uint8_t v_platformIndependent_boxed_442_; lean_object* v_res_443_; 
v_platformIndependent_boxed_442_ = lean_unbox(v_platformIndependent_439_);
v_res_443_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(v_inputName_435_, v_lineNo_436_, v_cache_437_, v_line_438_, v_platformIndependent_boxed_442_, v___y_440_);
lean_dec_ref(v___y_440_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___redArg(lean_object* v___x_444_, lean_object* v___x_445_, lean_object* v_contents_446_, lean_object* v_a_447_, lean_object* v_b_448_){
_start:
{
lean_object* v___x_449_; uint8_t v_decide_450_; 
v___x_449_ = lean_nat_sub(v___x_444_, v___x_445_);
v_decide_450_ = lean_nat_dec_eq(v_a_447_, v___x_449_);
lean_dec(v___x_449_);
if (v_decide_450_ == 0)
{
lean_object* v___x_451_; uint32_t v___x_452_; uint32_t v___x_453_; uint8_t v___x_454_; 
v___x_451_ = lean_nat_add(v___x_445_, v_a_447_);
v___x_452_ = lean_string_utf8_get_fast(v_contents_446_, v___x_451_);
v___x_453_ = 10;
v___x_454_ = lean_uint32_dec_eq(v___x_452_, v___x_453_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec(v_a_447_);
v___x_455_ = lean_box(0);
v___x_456_ = lean_string_utf8_next_fast(v_contents_446_, v___x_451_);
lean_dec(v___x_451_);
v___x_457_ = lean_nat_sub(v___x_456_, v___x_445_);
v_a_447_ = v___x_457_;
v_b_448_ = v___x_455_;
goto _start;
}
else
{
lean_object* v___x_459_; 
lean_dec(v___x_451_);
v___x_459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_459_, 0, v_a_447_);
return v___x_459_;
}
}
else
{
lean_dec(v_a_447_);
lean_inc(v_b_448_);
return v_b_448_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___redArg___boxed(lean_object* v___x_460_, lean_object* v___x_461_, lean_object* v_contents_462_, lean_object* v_a_463_, lean_object* v_b_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___redArg(v___x_460_, v___x_461_, v_contents_462_, v_a_463_, v_b_464_);
lean_dec(v_b_464_);
lean_dec_ref(v_contents_462_);
lean_dec(v___x_461_);
lean_dec(v___x_460_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop(lean_object* v_inputName_466_, uint8_t v_platformIndependent_467_, lean_object* v_i_468_, lean_object* v_cache_469_, lean_object* v_contents_470_, lean_object* v_pos_471_, lean_object* v___y_472_){
_start:
{
lean_object* v___x_474_; lean_object* v___y_476_; lean_object* v_searcher_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_474_ = lean_string_utf8_byte_size(v_contents_470_);
v_searcher_494_ = lean_unsigned_to_nat(0u);
v___x_495_ = lean_box(0);
v___x_496_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___redArg(v___x_474_, v_pos_471_, v_contents_470_, v_searcher_494_, v___x_495_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v___x_497_; 
v___x_497_ = lean_nat_sub(v___x_474_, v_pos_471_);
v___y_476_ = v___x_497_;
goto v___jp_475_;
}
else
{
lean_object* v_val_498_; 
v_val_498_ = lean_ctor_get(v___x_496_, 0);
lean_inc(v_val_498_);
lean_dec_ref_known(v___x_496_, 1);
v___y_476_ = v_val_498_;
goto v___jp_475_;
}
v___jp_475_:
{
lean_object* v___x_477_; lean_object* v_line_478_; lean_object* v___x_479_; lean_object* v_startInclusive_480_; lean_object* v_endExclusive_481_; lean_object* v___x_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_477_ = lean_nat_add(v_pos_471_, v___y_476_);
lean_dec(v___y_476_);
lean_inc(v___x_477_);
lean_inc(v_pos_471_);
lean_inc_ref(v_contents_470_);
v_line_478_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_line_478_, 0, v_contents_470_);
lean_ctor_set(v_line_478_, 1, v_pos_471_);
lean_ctor_set(v_line_478_, 2, v___x_477_);
v___x_479_ = l_String_Slice_trimAscii(v_line_478_);
v_startInclusive_480_ = lean_ctor_get(v___x_479_, 1);
lean_inc(v_startInclusive_480_);
v_endExclusive_481_ = lean_ctor_get(v___x_479_, 2);
lean_inc(v_endExclusive_481_);
lean_dec_ref(v___x_479_);
v___x_482_ = lean_nat_sub(v_endExclusive_481_, v_startInclusive_480_);
lean_dec(v_startInclusive_480_);
lean_dec(v_endExclusive_481_);
v___x_483_ = lean_unsigned_to_nat(0u);
v___x_484_ = lean_nat_dec_eq(v___x_482_, v___x_483_);
lean_dec(v___x_482_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_string_utf8_extract_fast(v_contents_470_, v_pos_471_, v___x_477_);
lean_dec(v_pos_471_);
lean_inc(v_i_468_);
lean_inc_ref(v_inputName_466_);
v___x_486_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(v_inputName_466_, v_i_468_, v_cache_469_, v___x_485_, v_platformIndependent_467_, v___y_472_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; uint8_t v_decide_488_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
v_decide_488_ = lean_nat_dec_eq(v___x_477_, v___x_474_);
if (v_decide_488_ == 0)
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
lean_dec_ref_known(v___x_486_, 1);
v___x_489_ = lean_unsigned_to_nat(1u);
v___x_490_ = lean_nat_add(v_i_468_, v___x_489_);
lean_dec(v_i_468_);
v___x_491_ = lean_string_utf8_next_fast(v_contents_470_, v___x_477_);
lean_dec(v___x_477_);
v_i_468_ = v___x_490_;
v_cache_469_ = v_a_487_;
v_pos_471_ = v___x_491_;
goto _start;
}
else
{
lean_dec(v_a_487_);
lean_dec(v___x_477_);
lean_dec_ref(v_contents_470_);
lean_dec(v_i_468_);
lean_dec_ref(v_inputName_466_);
return v___x_486_;
}
}
else
{
lean_dec(v___x_477_);
lean_dec_ref(v_contents_470_);
lean_dec(v_i_468_);
lean_dec_ref(v_inputName_466_);
return v___x_486_;
}
}
else
{
lean_object* v___x_493_; 
lean_dec(v___x_477_);
lean_dec(v_pos_471_);
lean_dec_ref(v_contents_470_);
lean_dec(v_i_468_);
lean_dec_ref(v_inputName_466_);
v___x_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_493_, 0, v_cache_469_);
return v___x_493_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___boxed(lean_object* v_inputName_499_, lean_object* v_platformIndependent_500_, lean_object* v_i_501_, lean_object* v_cache_502_, lean_object* v_contents_503_, lean_object* v_pos_504_, lean_object* v___y_505_, lean_object* v___y_506_){
_start:
{
uint8_t v_platformIndependent_boxed_507_; lean_object* v_res_508_; 
v_platformIndependent_boxed_507_ = lean_unbox(v_platformIndependent_500_);
v_res_508_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop(v_inputName_499_, v_platformIndependent_boxed_507_, v_i_501_, v_cache_502_, v_contents_503_, v_pos_504_, v___y_505_);
lean_dec_ref(v___y_505_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(lean_object* v___x_509_, lean_object* v___x_510_, lean_object* v___x_511_, lean_object* v_contents_512_, lean_object* v_inst_513_, lean_object* v_R_514_, lean_object* v_a_515_, lean_object* v_b_516_, lean_object* v_c_517_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___redArg(v___x_509_, v___x_510_, v_contents_512_, v_a_515_, v_b_516_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___boxed(lean_object* v___x_519_, lean_object* v___x_520_, lean_object* v___x_521_, lean_object* v_contents_522_, lean_object* v_inst_523_, lean_object* v_R_524_, lean_object* v_a_525_, lean_object* v_b_526_, lean_object* v_c_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(v___x_519_, v___x_520_, v___x_521_, v_contents_522_, v_inst_523_, v_R_524_, v_a_525_, v_b_526_, v_c_527_);
lean_dec(v_b_526_);
lean_dec_ref(v_contents_522_);
lean_dec_ref(v___x_521_);
lean_dec(v___x_520_);
lean_dec(v___x_519_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(lean_object* v_as_529_, size_t v_i_530_, size_t v_stop_531_, lean_object* v_b_532_, lean_object* v___y_533_){
_start:
{
uint8_t v___x_535_; 
v___x_535_ = lean_usize_dec_eq(v_i_530_, v_stop_531_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; lean_object* v___x_537_; size_t v___x_538_; size_t v___x_539_; 
v___x_536_ = lean_array_uget_borrowed(v_as_529_, v_i_530_);
lean_inc_ref(v___y_533_);
lean_inc(v___x_536_);
v___x_537_ = lean_apply_2(v___y_533_, v___x_536_, lean_box(0));
v___x_538_ = ((size_t)1ULL);
v___x_539_ = lean_usize_add(v_i_530_, v___x_538_);
v_i_530_ = v___x_539_;
v_b_532_ = v___x_537_;
goto _start;
}
else
{
lean_object* v___x_541_; 
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v_b_532_);
return v___x_541_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0___boxed(lean_object* v_as_542_, lean_object* v_i_543_, lean_object* v_stop_544_, lean_object* v_b_545_, lean_object* v___y_546_, lean_object* v___y_547_){
_start:
{
size_t v_i_boxed_548_; size_t v_stop_boxed_549_; lean_object* v_res_550_; 
v_i_boxed_548_ = lean_unbox_usize(v_i_543_);
lean_dec(v_i_543_);
v_stop_boxed_549_ = lean_unbox_usize(v_stop_544_);
lean_dec(v_stop_544_);
v_res_550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_as_542_, v_i_boxed_548_, v_stop_boxed_549_, v_b_545_, v___y_546_);
lean_dec_ref(v___y_546_);
lean_dec_ref(v_as_542_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(lean_object* v___x_551_, lean_object* v_contents_552_, lean_object* v_a_553_, lean_object* v_b_554_){
_start:
{
uint8_t v_decide_555_; 
v_decide_555_ = lean_nat_dec_eq(v_a_553_, v___x_551_);
if (v_decide_555_ == 0)
{
uint32_t v___x_556_; uint32_t v___x_557_; uint8_t v___x_558_; 
v___x_556_ = lean_string_utf8_get_fast(v_contents_552_, v_a_553_);
v___x_557_ = 10;
v___x_558_ = lean_uint32_dec_eq(v___x_556_, v___x_557_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = lean_box(0);
v___x_560_ = lean_string_utf8_next_fast(v_contents_552_, v_a_553_);
lean_dec(v_a_553_);
v_a_553_ = v___x_560_;
v_b_554_ = v___x_559_;
goto _start;
}
else
{
lean_object* v___x_562_; 
v___x_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_562_, 0, v_a_553_);
return v___x_562_;
}
}
else
{
lean_dec(v_a_553_);
lean_inc(v_b_554_);
return v_b_554_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg___boxed(lean_object* v___x_563_, lean_object* v_contents_564_, lean_object* v_a_565_, lean_object* v_b_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(v___x_563_, v_contents_564_, v_a_565_, v_b_566_);
lean_dec(v_b_566_);
lean_dec_ref(v_contents_564_);
lean_dec(v___x_563_);
return v_res_567_;
}
}
static lean_object* _init_l_Lake_CacheMap_parse___closed__0(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_568_ = lean_box(0);
v___x_569_ = lean_unsigned_to_nat(16u);
v___x_570_ = lean_mk_array(v___x_569_, v___x_568_);
return v___x_570_;
}
}
static lean_object* _init_l_Lake_CacheMap_parse___closed__1(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_571_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__0, &l_Lake_CacheMap_parse___closed__0_once, _init_l_Lake_CacheMap_parse___closed__0);
v___x_572_ = lean_unsigned_to_nat(0u);
v___x_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v___x_571_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse(lean_object* v_inputName_576_, lean_object* v_contents_577_, uint8_t v_platformIndependent_578_, lean_object* v___y_579_){
_start:
{
lean_object* v___y_582_; lean_object* v___y_592_; lean_object* v___y_593_; lean_object* v___y_603_; lean_object* v_searcher_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v_searcher_637_ = lean_unsigned_to_nat(0u);
v___x_638_ = lean_string_utf8_byte_size(v_contents_577_);
v___x_639_ = lean_box(0);
v___x_640_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(v___x_638_, v_contents_577_, v_searcher_637_, v___x_639_);
if (lean_obj_tag(v___x_640_) == 0)
{
v___y_603_ = v___x_638_;
goto v___jp_602_;
}
else
{
lean_object* v_val_641_; 
v_val_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_val_641_);
lean_dec_ref_known(v___x_640_, 1);
v___y_603_ = v_val_641_;
goto v___jp_602_;
}
v___jp_581_:
{
lean_object* v___x_583_; uint8_t v_decide_584_; 
v___x_583_ = lean_string_utf8_byte_size(v_contents_577_);
v_decide_584_ = lean_nat_dec_eq(v___y_582_, v___x_583_);
if (v_decide_584_ == 0)
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_585_ = lean_unsigned_to_nat(2u);
v___x_586_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_587_ = lean_string_utf8_next_fast(v_contents_577_, v___y_582_);
lean_dec(v___y_582_);
v___x_588_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop(v_inputName_576_, v_platformIndependent_578_, v___x_585_, v___x_586_, v_contents_577_, v___x_587_, v___y_579_);
return v___x_588_;
}
else
{
lean_object* v___x_589_; lean_object* v___x_590_; 
lean_dec(v___y_582_);
lean_dec_ref(v_contents_577_);
lean_dec_ref(v_inputName_576_);
v___x_589_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
return v___x_590_;
}
}
v___jp_591_:
{
if (lean_obj_tag(v___y_593_) == 0)
{
lean_dec_ref_known(v___y_593_, 1);
v___y_582_ = v___y_592_;
goto v___jp_581_;
}
else
{
lean_object* v_a_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_601_; 
lean_dec(v___y_592_);
lean_dec_ref(v_contents_577_);
lean_dec_ref(v_inputName_576_);
v_a_594_ = lean_ctor_get(v___y_593_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___y_593_);
if (v_isSharedCheck_601_ == 0)
{
v___x_596_ = v___y_593_;
v_isShared_597_ = v_isSharedCheck_601_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_a_594_);
lean_dec(v___y_593_);
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
v___jp_602_:
{
lean_object* v___x_604_; lean_object* v_line_605_; lean_object* v___x_606_; lean_object* v_str_607_; lean_object* v_startInclusive_608_; lean_object* v_endExclusive_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_604_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_603_);
lean_inc_ref(v_contents_577_);
v_line_605_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_line_605_, 0, v_contents_577_);
lean_ctor_set(v_line_605_, 1, v___x_604_);
lean_ctor_set(v_line_605_, 2, v___y_603_);
v___x_606_ = l_String_Slice_trimAscii(v_line_605_);
v_str_607_ = lean_ctor_get(v___x_606_, 0);
lean_inc_ref(v_str_607_);
v_startInclusive_608_ = lean_ctor_get(v___x_606_, 1);
lean_inc(v_startInclusive_608_);
v_endExclusive_609_ = lean_ctor_get(v___x_606_, 2);
lean_inc(v_endExclusive_609_);
lean_dec_ref(v___x_606_);
v___x_610_ = lean_string_utf8_extract_fast(v_str_607_, v_startInclusive_608_, v_endExclusive_609_);
lean_dec(v_endExclusive_609_);
lean_dec(v_startInclusive_608_);
lean_dec_ref(v_str_607_);
v___x_611_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
lean_inc_ref(v_inputName_576_);
v___x_612_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_inputName_576_, v___x_610_, v___x_611_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_614_; uint8_t v___x_615_; 
v_a_613_ = lean_ctor_get(v___x_612_, 1);
lean_inc(v_a_613_);
lean_dec_ref_known(v___x_612_, 2);
v___x_614_ = lean_array_get_size(v_a_613_);
v___x_615_ = lean_nat_dec_lt(v___x_604_, v___x_614_);
if (v___x_615_ == 0)
{
lean_dec(v_a_613_);
v___y_582_ = v___y_603_;
goto v___jp_581_;
}
else
{
lean_object* v___x_616_; size_t v___x_617_; size_t v___x_618_; lean_object* v___x_619_; 
v___x_616_ = lean_box(0);
v___x_617_ = ((size_t)0ULL);
v___x_618_ = lean_usize_of_nat(v___x_614_);
v___x_619_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_613_, v___x_617_, v___x_618_, v___x_616_, v___y_579_);
lean_dec(v_a_613_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_dec_ref_known(v___x_619_, 1);
v___y_582_ = v___y_603_;
goto v___jp_581_;
}
else
{
v___y_592_ = v___y_603_;
v___y_593_ = v___x_619_;
goto v___jp_591_;
}
}
}
else
{
lean_object* v_a_620_; lean_object* v___x_621_; uint8_t v___x_622_; 
v_a_620_ = lean_ctor_get(v___x_612_, 1);
lean_inc(v_a_620_);
lean_dec_ref_known(v___x_612_, 2);
v___x_621_ = lean_array_get_size(v_a_620_);
v___x_622_ = lean_nat_dec_lt(v___x_604_, v___x_621_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; lean_object* v___x_624_; 
lean_dec(v_a_620_);
lean_dec(v___y_603_);
lean_dec_ref(v_contents_577_);
lean_dec_ref(v_inputName_576_);
v___x_623_ = lean_box(0);
v___x_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
return v___x_624_;
}
else
{
lean_object* v___x_625_; size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; 
v___x_625_ = lean_box(0);
v___x_626_ = ((size_t)0ULL);
v___x_627_ = lean_usize_of_nat(v___x_621_);
v___x_628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_620_, v___x_626_, v___x_627_, v___x_625_, v___y_579_);
lean_dec(v_a_620_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
lean_dec(v___y_603_);
lean_dec_ref(v_contents_577_);
lean_dec_ref(v_inputName_576_);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_635_ == 0)
{
lean_object* v_unused_636_; 
v_unused_636_ = lean_ctor_get(v___x_628_, 0);
lean_dec(v_unused_636_);
v___x_630_ = v___x_628_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_dec(v___x_628_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
lean_ctor_set_tag(v___x_630_, 1);
lean_ctor_set(v___x_630_, 0, v___x_625_);
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v___x_625_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
else
{
v___y_592_ = v___y_603_;
v___y_593_ = v___x_628_;
goto v___jp_591_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___boxed(lean_object* v_inputName_642_, lean_object* v_contents_643_, lean_object* v_platformIndependent_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
uint8_t v_platformIndependent_boxed_647_; lean_object* v_res_648_; 
v_platformIndependent_boxed_647_ = lean_unbox(v_platformIndependent_644_);
v_res_648_ = l_Lake_CacheMap_parse(v_inputName_642_, v_contents_643_, v_platformIndependent_boxed_647_, v___y_645_);
lean_dec_ref(v___y_645_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1(lean_object* v___x_649_, lean_object* v___x_650_, lean_object* v_contents_651_, lean_object* v_inst_652_, lean_object* v_R_653_, lean_object* v_a_654_, lean_object* v_b_655_, lean_object* v_c_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(v___x_649_, v_contents_651_, v_a_654_, v_b_655_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___boxed(lean_object* v___x_658_, lean_object* v___x_659_, lean_object* v_contents_660_, lean_object* v_inst_661_, lean_object* v_R_662_, lean_object* v_a_663_, lean_object* v_b_664_, lean_object* v_c_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1(v___x_658_, v___x_659_, v_contents_660_, v_inst_661_, v_R_662_, v_a_663_, v_b_664_, v_c_665_);
lean_dec(v_b_664_);
lean_dec_ref(v_contents_660_);
lean_dec_ref(v___x_659_);
lean_dec(v___x_658_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(lean_object* v_inputName_667_, lean_object* v_lineNo_668_, lean_object* v_cache_669_, lean_object* v_line_670_, uint8_t v_platformIndependent_671_, lean_object* v___y_672_){
_start:
{
lean_object* v___x_674_; 
lean_inc_ref(v_cache_669_);
v___x_674_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(v_cache_669_, v_line_670_, v_platformIndependent_671_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; uint8_t v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_a_675_);
lean_dec_ref_known(v___x_674_, 1);
v___x_676_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0));
v___x_677_ = lean_string_append(v_inputName_667_, v___x_676_);
v___x_678_ = l_Nat_reprFast(v_lineNo_668_);
v___x_679_ = lean_string_append(v___x_677_, v___x_678_);
lean_dec_ref(v___x_678_);
v___x_680_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_681_ = lean_string_append(v___x_679_, v___x_680_);
v___x_682_ = lean_string_append(v___x_681_, v_a_675_);
lean_dec(v_a_675_);
v___x_683_ = 2;
v___x_684_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_684_, 0, v___x_682_);
lean_ctor_set_uint8(v___x_684_, sizeof(void*)*1, v___x_683_);
v___x_685_ = lean_array_push(v___y_672_, v___x_684_);
v___x_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_686_, 0, v_cache_669_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
return v___x_686_;
}
else
{
lean_object* v_a_687_; lean_object* v___x_688_; 
lean_dec_ref(v_cache_669_);
lean_dec(v_lineNo_668_);
lean_dec_ref(v_inputName_667_);
v_a_687_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_674_, 1);
v___x_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_688_, 0, v_a_687_);
lean_ctor_set(v___x_688_, 1, v___y_672_);
return v___x_688_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0___boxed(lean_object* v_inputName_689_, lean_object* v_lineNo_690_, lean_object* v_cache_691_, lean_object* v_line_692_, lean_object* v_platformIndependent_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
uint8_t v_platformIndependent_boxed_696_; lean_object* v_res_697_; 
v_platformIndependent_boxed_696_ = lean_unbox(v_platformIndependent_693_);
v_res_697_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(v_inputName_689_, v_lineNo_690_, v_cache_691_, v_line_692_, v_platformIndependent_boxed_696_, v___y_694_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(lean_object* v_h_698_, lean_object* v_fileName_699_, uint8_t v_platformIndependent_700_, lean_object* v_i_701_, lean_object* v_cache_702_, lean_object* v_a_703_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = lean_io_prim_handle_get_line(v_h_698_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_a_706_);
lean_dec_ref_known(v___x_705_, 1);
v___x_707_ = lean_string_utf8_byte_size(v_a_706_);
v___x_708_ = lean_unsigned_to_nat(0u);
v___x_709_ = lean_nat_dec_eq(v___x_707_, v___x_708_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; 
lean_inc(v_i_701_);
lean_inc_ref(v_fileName_699_);
v___x_710_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(v_fileName_699_, v_i_701_, v_cache_702_, v_a_706_, v_platformIndependent_700_, v_a_703_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; lean_object* v_a_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_711_);
v_a_712_ = lean_ctor_get(v___x_710_, 1);
lean_inc(v_a_712_);
lean_dec_ref_known(v___x_710_, 2);
v___x_713_ = lean_unsigned_to_nat(1u);
v___x_714_ = lean_nat_add(v_i_701_, v___x_713_);
lean_dec(v_i_701_);
v_i_701_ = v___x_714_;
v_cache_702_ = v_a_711_;
v_a_703_ = v_a_712_;
goto _start;
}
else
{
lean_dec(v_i_701_);
lean_dec_ref(v_fileName_699_);
return v___x_710_;
}
}
else
{
lean_object* v___x_716_; 
lean_dec(v_a_706_);
lean_dec(v_i_701_);
lean_dec_ref(v_fileName_699_);
v___x_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_716_, 0, v_cache_702_);
lean_ctor_set(v___x_716_, 1, v_a_703_);
return v___x_716_;
}
}
else
{
lean_object* v_a_717_; lean_object* v___x_718_; uint8_t v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
lean_dec_ref(v_cache_702_);
lean_dec(v_i_701_);
lean_dec_ref(v_fileName_699_);
v_a_717_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_a_717_);
lean_dec_ref_known(v___x_705_, 1);
v___x_718_ = lean_io_error_to_string(v_a_717_);
v___x_719_ = 3;
v___x_720_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*1, v___x_719_);
v___x_721_ = lean_array_get_size(v_a_703_);
v___x_722_ = lean_array_push(v_a_703_, v___x_720_);
v___x_723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_721_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
return v___x_723_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop___boxed(lean_object* v_h_724_, lean_object* v_fileName_725_, lean_object* v_platformIndependent_726_, lean_object* v_i_727_, lean_object* v_cache_728_, lean_object* v_a_729_, lean_object* v___y_730_){
_start:
{
uint8_t v_platformIndependent_boxed_731_; lean_object* v_res_732_; 
v_platformIndependent_boxed_731_ = lean_unbox(v_platformIndependent_726_);
v_res_732_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_h_724_, v_fileName_725_, v_platformIndependent_boxed_731_, v_i_727_, v_cache_728_, v_a_729_);
lean_dec(v_h_724_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(lean_object* v_h_733_, lean_object* v_fileName_734_, uint8_t v_platformIndependent_735_, lean_object* v_a_736_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = lean_io_prim_handle_get_line(v_h_733_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; lean_object* v___x_740_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_739_);
lean_dec_ref_known(v___x_738_, 1);
lean_inc_ref(v_fileName_734_);
v___x_740_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_fileName_734_, v_a_739_, v_a_736_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v_a_741_ = lean_ctor_get(v___x_740_, 1);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_740_, 2);
v___x_742_ = lean_unsigned_to_nat(2u);
v___x_743_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_744_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_h_733_, v_fileName_734_, v_platformIndependent_735_, v___x_742_, v___x_743_, v_a_741_);
return v___x_744_;
}
else
{
lean_object* v_a_745_; lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
lean_dec_ref(v_fileName_734_);
v_a_745_ = lean_ctor_get(v___x_740_, 0);
v_a_746_ = lean_ctor_get(v___x_740_, 1);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_740_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_inc(v_a_745_);
lean_dec(v___x_740_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_745_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_755_; uint8_t v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
lean_dec_ref(v_fileName_734_);
v_a_754_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_754_);
lean_dec_ref_known(v___x_738_, 1);
v___x_755_ = lean_io_error_to_string(v_a_754_);
v___x_756_ = 3;
v___x_757_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_757_, 0, v___x_755_);
lean_ctor_set_uint8(v___x_757_, sizeof(void*)*1, v___x_756_);
v___x_758_ = lean_array_get_size(v_a_736_);
v___x_759_ = lean_array_push(v_a_736_, v___x_757_);
v___x_760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_758_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
return v___x_760_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___boxed(lean_object* v_h_761_, lean_object* v_fileName_762_, lean_object* v_platformIndependent_763_, lean_object* v_a_764_, lean_object* v___y_765_){
_start:
{
uint8_t v_platformIndependent_boxed_766_; lean_object* v_res_767_; 
v_platformIndependent_boxed_766_ = lean_unbox(v_platformIndependent_763_);
v_res_767_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(v_h_761_, v_fileName_762_, v_platformIndependent_boxed_766_, v_a_764_);
lean_dec(v_h_761_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load(lean_object* v_file_769_, uint8_t v_platformIndependent_770_, lean_object* v_a_771_){
_start:
{
uint8_t v___x_773_; lean_object* v___x_774_; 
v___x_773_ = 0;
v___x_774_ = lean_io_prim_handle_mk(v_file_769_, v___x_773_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; uint8_t v___x_776_; lean_object* v___x_777_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_a_775_);
lean_dec_ref_known(v___x_774_, 1);
v___x_776_ = 0;
v___x_777_ = lean_io_prim_handle_lock(v_a_775_, v___x_776_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v___x_778_; 
lean_dec_ref_known(v___x_777_, 1);
v___x_778_ = lean_io_prim_handle_get_line(v_a_775_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_780_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_779_);
lean_dec_ref_known(v___x_778_, 1);
lean_inc_ref(v_file_769_);
v___x_780_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_769_, v_a_779_, v_a_771_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v_a_781_ = lean_ctor_get(v___x_780_, 1);
lean_inc(v_a_781_);
lean_dec_ref_known(v___x_780_, 2);
v___x_782_ = lean_unsigned_to_nat(2u);
v___x_783_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_784_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_775_, v_file_769_, v_platformIndependent_770_, v___x_782_, v___x_783_, v_a_781_);
lean_dec(v_a_775_);
return v___x_784_;
}
else
{
lean_object* v_a_785_; lean_object* v_a_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_793_; 
lean_dec(v_a_775_);
lean_dec_ref(v_file_769_);
v_a_785_ = lean_ctor_get(v___x_780_, 0);
v_a_786_ = lean_ctor_get(v___x_780_, 1);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_793_ == 0)
{
v___x_788_ = v___x_780_;
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_a_786_);
lean_inc(v_a_785_);
lean_dec(v___x_780_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_793_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_791_; 
if (v_isShared_789_ == 0)
{
v___x_791_ = v___x_788_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_785_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_a_786_);
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
else
{
lean_object* v_a_794_; lean_object* v___x_795_; uint8_t v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
lean_dec(v_a_775_);
lean_dec_ref(v_file_769_);
v_a_794_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_794_);
lean_dec_ref_known(v___x_778_, 1);
v___x_795_ = lean_io_error_to_string(v_a_794_);
v___x_796_ = 3;
v___x_797_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_797_, 0, v___x_795_);
lean_ctor_set_uint8(v___x_797_, sizeof(void*)*1, v___x_796_);
v___x_798_ = lean_array_get_size(v_a_771_);
v___x_799_ = lean_array_push(v_a_771_, v___x_797_);
v___x_800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_798_);
lean_ctor_set(v___x_800_, 1, v___x_799_);
return v___x_800_;
}
}
else
{
lean_object* v_a_801_; lean_object* v___x_802_; uint8_t v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
lean_dec(v_a_775_);
lean_dec_ref(v_file_769_);
v_a_801_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_801_);
lean_dec_ref_known(v___x_777_, 1);
v___x_802_ = lean_io_error_to_string(v_a_801_);
v___x_803_ = 3;
v___x_804_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_804_, 0, v___x_802_);
lean_ctor_set_uint8(v___x_804_, sizeof(void*)*1, v___x_803_);
v___x_805_ = lean_array_get_size(v_a_771_);
v___x_806_ = lean_array_push(v_a_771_, v___x_804_);
v___x_807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_805_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
return v___x_807_;
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; uint8_t v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v_a_808_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_a_808_);
lean_dec_ref_known(v___x_774_, 1);
v___x_809_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_810_ = lean_string_append(v_file_769_, v___x_809_);
v___x_811_ = lean_io_error_to_string(v_a_808_);
v___x_812_ = lean_string_append(v___x_810_, v___x_811_);
lean_dec_ref(v___x_811_);
v___x_813_ = 3;
v___x_814_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_814_, 0, v___x_812_);
lean_ctor_set_uint8(v___x_814_, sizeof(void*)*1, v___x_813_);
v___x_815_ = lean_array_get_size(v_a_771_);
v___x_816_ = lean_array_push(v_a_771_, v___x_814_);
v___x_817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_815_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
return v___x_817_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load___boxed(lean_object* v_file_818_, lean_object* v_platformIndependent_819_, lean_object* v_a_820_, lean_object* v___y_821_){
_start:
{
uint8_t v_platformIndependent_boxed_822_; lean_object* v_res_823_; 
v_platformIndependent_boxed_822_ = lean_unbox(v_platformIndependent_819_);
v_res_823_ = l_Lake_CacheMap_load(v_file_818_, v_platformIndependent_boxed_822_, v_a_820_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f(lean_object* v_file_824_, uint8_t v_platformIndependent_825_, lean_object* v_a_826_){
_start:
{
lean_object* v_a_829_; lean_object* v_a_830_; uint8_t v___x_832_; lean_object* v___x_833_; 
v___x_832_ = 0;
v___x_833_ = lean_io_prim_handle_mk(v_file_824_, v___x_832_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v_a_834_; uint8_t v___x_835_; lean_object* v___x_836_; 
v_a_834_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_a_834_);
lean_dec_ref_known(v___x_833_, 1);
v___x_835_ = 0;
v___x_836_ = lean_io_prim_handle_lock(v_a_834_, v___x_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v___x_837_; 
lean_dec_ref_known(v___x_836_, 1);
v___x_837_ = lean_io_prim_handle_get_line(v_a_834_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_863_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_863_ == 0)
{
v___x_840_ = v___x_837_;
v_isShared_841_ = v_isSharedCheck_863_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_837_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_863_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_842_; 
lean_inc_ref(v_file_824_);
v___x_842_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_824_, v_a_838_, v_a_826_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v_a_843_ = lean_ctor_get(v___x_842_, 1);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_842_, 2);
v___x_844_ = lean_unsigned_to_nat(2u);
v___x_845_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_846_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_834_, v_file_824_, v_platformIndependent_825_, v___x_844_, v___x_845_, v_a_843_);
lean_dec(v_a_834_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_858_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
v_a_848_ = lean_ctor_get(v___x_846_, 1);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_858_ == 0)
{
v___x_850_ = v___x_846_;
v_isShared_851_ = v_isSharedCheck_858_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_inc(v_a_847_);
lean_dec(v___x_846_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_858_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_841_ == 0)
{
lean_ctor_set_tag(v___x_840_, 1);
lean_ctor_set(v___x_840_, 0, v_a_847_);
v___x_853_ = v___x_840_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_847_);
v___x_853_ = v_reuseFailAlloc_857_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
lean_object* v___x_855_; 
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 0, v___x_853_);
v___x_855_ = v___x_850_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v_a_848_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
else
{
lean_object* v_a_859_; lean_object* v_a_860_; 
lean_del_object(v___x_840_);
v_a_859_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_a_859_);
v_a_860_ = lean_ctor_get(v___x_846_, 1);
lean_inc(v_a_860_);
lean_dec_ref_known(v___x_846_, 2);
v_a_829_ = v_a_859_;
v_a_830_ = v_a_860_;
goto v___jp_828_;
}
}
else
{
lean_object* v_a_861_; lean_object* v_a_862_; 
lean_del_object(v___x_840_);
lean_dec(v_a_834_);
lean_dec_ref(v_file_824_);
v_a_861_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_a_861_);
v_a_862_ = lean_ctor_get(v___x_842_, 1);
lean_inc(v_a_862_);
lean_dec_ref_known(v___x_842_, 2);
v_a_829_ = v_a_861_;
v_a_830_ = v_a_862_;
goto v___jp_828_;
}
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_865_; uint8_t v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
lean_dec(v_a_834_);
lean_dec_ref(v_file_824_);
v_a_864_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_837_, 1);
v___x_865_ = lean_io_error_to_string(v_a_864_);
v___x_866_ = 3;
v___x_867_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_867_, 0, v___x_865_);
lean_ctor_set_uint8(v___x_867_, sizeof(void*)*1, v___x_866_);
v___x_868_ = lean_array_get_size(v_a_826_);
v___x_869_ = lean_array_push(v_a_826_, v___x_867_);
v_a_829_ = v___x_868_;
v_a_830_ = v___x_869_;
goto v___jp_828_;
}
}
else
{
lean_object* v_a_870_; lean_object* v___x_871_; uint8_t v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
lean_dec(v_a_834_);
lean_dec_ref(v_file_824_);
v_a_870_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___x_836_, 1);
v___x_871_ = lean_io_error_to_string(v_a_870_);
v___x_872_ = 3;
v___x_873_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_873_, 0, v___x_871_);
lean_ctor_set_uint8(v___x_873_, sizeof(void*)*1, v___x_872_);
v___x_874_ = lean_array_get_size(v_a_826_);
v___x_875_ = lean_array_push(v_a_826_, v___x_873_);
v___x_876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_874_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
return v___x_876_;
}
}
else
{
lean_object* v_a_877_; 
v_a_877_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_833_, 1);
if (lean_obj_tag(v_a_877_) == 11)
{
lean_object* v___x_878_; lean_object* v___x_879_; 
lean_dec_ref_known(v_a_877_, 2);
lean_dec_ref(v_file_824_);
v___x_878_ = lean_box(0);
v___x_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
lean_ctor_set(v___x_879_, 1, v_a_826_);
return v___x_879_;
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; uint8_t v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_880_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_881_ = lean_string_append(v_file_824_, v___x_880_);
v___x_882_ = lean_io_error_to_string(v_a_877_);
v___x_883_ = lean_string_append(v___x_881_, v___x_882_);
lean_dec_ref(v___x_882_);
v___x_884_ = 3;
v___x_885_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_885_, 0, v___x_883_);
lean_ctor_set_uint8(v___x_885_, sizeof(void*)*1, v___x_884_);
v___x_886_ = lean_array_get_size(v_a_826_);
v___x_887_ = lean_array_push(v_a_826_, v___x_885_);
v___x_888_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_888_, 0, v___x_886_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
return v___x_888_;
}
}
v___jp_828_:
{
lean_object* v___x_831_; 
v___x_831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_831_, 0, v_a_829_);
lean_ctor_set(v___x_831_, 1, v_a_830_);
return v___x_831_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f___boxed(lean_object* v_file_889_, lean_object* v_platformIndependent_890_, lean_object* v_a_891_, lean_object* v___y_892_){
_start:
{
uint8_t v_platformIndependent_boxed_893_; lean_object* v_res_894_; 
v_platformIndependent_boxed_893_ = lean_unbox(v_platformIndependent_890_);
v_res_894_ = l_Lake_CacheMap_load_x3f(v_file_889_, v_platformIndependent_boxed_893_, v_a_891_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(lean_object* v_h_895_, lean_object* v_x_896_, lean_object* v_x_897_, lean_object* v___y_898_){
_start:
{
if (lean_obj_tag(v_x_897_) == 0)
{
lean_object* v___x_900_; 
v___x_900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_900_, 0, v_x_896_);
lean_ctor_set(v___x_900_, 1, v___y_898_);
return v___x_900_;
}
else
{
lean_object* v_value_901_; lean_object* v_key_902_; lean_object* v_tail_903_; lean_object* v_out_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_929_; 
v_value_901_ = lean_ctor_get(v_x_897_, 1);
lean_inc(v_value_901_);
v_key_902_ = lean_ctor_get(v_x_897_, 0);
lean_inc(v_key_902_);
v_tail_903_ = lean_ctor_get(v_x_897_, 2);
lean_inc(v_tail_903_);
lean_dec_ref_known(v_x_897_, 3);
v_out_904_ = lean_ctor_get(v_value_901_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v_value_901_);
if (v_isSharedCheck_929_ == 0)
{
v___x_906_ = v_value_901_;
v_isShared_907_ = v_isSharedCheck_929_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_out_904_);
lean_dec(v_value_901_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_929_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
uint64_t v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_908_ = lean_unbox_uint64(v_key_902_);
lean_dec(v_key_902_);
v___x_909_ = l_Lake_lowerHexUInt64(v___x_908_);
v___x_910_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
v___x_911_ = lean_unsigned_to_nat(2u);
v___x_912_ = lean_mk_empty_array_with_capacity(v___x_911_);
v___x_913_ = lean_array_push(v___x_912_, v___x_910_);
v___x_914_ = lean_array_push(v___x_913_, v_out_904_);
v___x_915_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
v___x_916_ = l_Lean_Json_compress(v___x_915_);
v___x_917_ = l_IO_FS_Handle_putStrLn(v_h_895_, v___x_916_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; 
lean_del_object(v___x_906_);
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_917_, 1);
v_x_896_ = v_a_918_;
v_x_897_ = v_tail_903_;
goto _start;
}
else
{
lean_object* v_a_920_; lean_object* v___x_921_; uint8_t v___x_922_; lean_object* v___x_924_; 
lean_dec(v_tail_903_);
v_a_920_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_917_, 1);
v___x_921_ = lean_io_error_to_string(v_a_920_);
v___x_922_ = 3;
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v___x_921_);
v___x_924_ = v___x_906_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_921_);
v___x_924_ = v_reuseFailAlloc_928_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
lean_ctor_set_uint8(v___x_924_, sizeof(void*)*1, v___x_922_);
v___x_925_ = lean_array_get_size(v___y_898_);
v___x_926_ = lean_array_push(v___y_898_, v___x_924_);
v___x_927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_925_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
return v___x_927_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1___boxed(lean_object* v_h_930_, lean_object* v_x_931_, lean_object* v_x_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(v_h_930_, v_x_931_, v_x_932_, v___y_933_);
lean_dec(v_h_930_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(lean_object* v_h_936_, lean_object* v_as_937_, size_t v_i_938_, size_t v_stop_939_, lean_object* v_b_940_, lean_object* v___y_941_){
_start:
{
uint8_t v___x_943_; 
v___x_943_ = lean_usize_dec_eq(v_i_938_, v_stop_939_);
if (v___x_943_ == 0)
{
lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_944_ = lean_array_uget_borrowed(v_as_937_, v_i_938_);
v___x_945_ = lean_box(0);
lean_inc(v___x_944_);
v___x_946_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(v_h_936_, v___x_945_, v___x_944_, v___y_941_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v_a_948_; size_t v___x_949_; size_t v___x_950_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_a_947_);
v_a_948_ = lean_ctor_get(v___x_946_, 1);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_946_, 2);
v___x_949_ = ((size_t)1ULL);
v___x_950_ = lean_usize_add(v_i_938_, v___x_949_);
v_i_938_ = v___x_950_;
v_b_940_ = v_a_947_;
v___y_941_ = v_a_948_;
goto _start;
}
else
{
return v___x_946_;
}
}
else
{
lean_object* v___x_952_; 
v___x_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_952_, 0, v_b_940_);
lean_ctor_set(v___x_952_, 1, v___y_941_);
return v___x_952_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2___boxed(lean_object* v_h_953_, lean_object* v_as_954_, lean_object* v_i_955_, lean_object* v_stop_956_, lean_object* v_b_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
size_t v_i_boxed_960_; size_t v_stop_boxed_961_; lean_object* v_res_962_; 
v_i_boxed_960_ = lean_unbox_usize(v_i_955_);
lean_dec(v_i_955_);
v_stop_boxed_961_ = lean_unbox_usize(v_stop_956_);
lean_dec(v_stop_956_);
v_res_962_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(v_h_953_, v_as_954_, v_i_boxed_960_, v_stop_boxed_961_, v_b_957_, v___y_958_);
lean_dec_ref(v_as_954_);
lean_dec(v_h_953_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(lean_object* v_h_963_, lean_object* v_x_964_, lean_object* v_x_965_, lean_object* v___y_966_){
_start:
{
if (lean_obj_tag(v_x_965_) == 0)
{
lean_object* v___x_968_; 
v___x_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_968_, 0, v_x_964_);
lean_ctor_set(v___x_968_, 1, v___y_966_);
return v___x_968_;
}
else
{
lean_object* v_value_969_; uint8_t v_platformIndependent_970_; 
v_value_969_ = lean_ctor_get(v_x_965_, 1);
lean_inc(v_value_969_);
v_platformIndependent_970_ = lean_ctor_get_uint8(v_value_969_, sizeof(void*)*1);
if (v_platformIndependent_970_ == 0)
{
lean_object* v_tail_971_; lean_object* v___x_972_; 
lean_dec(v_value_969_);
v_tail_971_ = lean_ctor_get(v_x_965_, 2);
lean_inc(v_tail_971_);
lean_dec_ref_known(v_x_965_, 3);
v___x_972_ = lean_box(0);
v_x_964_ = v___x_972_;
v_x_965_ = v_tail_971_;
goto _start;
}
else
{
lean_object* v_key_974_; lean_object* v_tail_975_; lean_object* v_out_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_1001_; 
v_key_974_ = lean_ctor_get(v_x_965_, 0);
lean_inc(v_key_974_);
v_tail_975_ = lean_ctor_get(v_x_965_, 2);
lean_inc(v_tail_975_);
lean_dec_ref_known(v_x_965_, 3);
v_out_976_ = lean_ctor_get(v_value_969_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v_value_969_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_978_ = v_value_969_;
v_isShared_979_ = v_isSharedCheck_1001_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_out_976_);
lean_dec(v_value_969_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_1001_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
uint64_t v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_980_ = lean_unbox_uint64(v_key_974_);
lean_dec(v_key_974_);
v___x_981_ = l_Lake_lowerHexUInt64(v___x_980_);
v___x_982_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
v___x_983_ = lean_unsigned_to_nat(2u);
v___x_984_ = lean_mk_empty_array_with_capacity(v___x_983_);
v___x_985_ = lean_array_push(v___x_984_, v___x_982_);
v___x_986_ = lean_array_push(v___x_985_, v_out_976_);
v___x_987_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
v___x_988_ = l_Lean_Json_compress(v___x_987_);
v___x_989_ = l_IO_FS_Handle_putStrLn(v_h_963_, v___x_988_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; 
lean_del_object(v___x_978_);
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_989_, 1);
v_x_964_ = v_a_990_;
v_x_965_ = v_tail_975_;
goto _start;
}
else
{
lean_object* v_a_992_; lean_object* v___x_993_; uint8_t v___x_994_; lean_object* v___x_996_; 
lean_dec(v_tail_975_);
v_a_992_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_989_, 1);
v___x_993_ = lean_io_error_to_string(v_a_992_);
v___x_994_ = 3;
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v___x_993_);
v___x_996_ = v___x_978_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_993_);
v___x_996_ = v_reuseFailAlloc_1000_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
lean_ctor_set_uint8(v___x_996_, sizeof(void*)*1, v___x_994_);
v___x_997_ = lean_array_get_size(v___y_966_);
v___x_998_ = lean_array_push(v___y_966_, v___x_996_);
v___x_999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_997_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
return v___x_999_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0___boxed(lean_object* v_h_1002_, lean_object* v_x_1003_, lean_object* v_x_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(v_h_1002_, v_x_1003_, v_x_1004_, v___y_1005_);
lean_dec(v_h_1002_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(lean_object* v_h_1008_, lean_object* v_as_1009_, size_t v_i_1010_, size_t v_stop_1011_, lean_object* v_b_1012_, lean_object* v___y_1013_){
_start:
{
uint8_t v___x_1015_; 
v___x_1015_ = lean_usize_dec_eq(v_i_1010_, v_stop_1011_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1016_ = lean_array_uget_borrowed(v_as_1009_, v_i_1010_);
v___x_1017_ = lean_box(0);
lean_inc(v___x_1016_);
v___x_1018_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(v_h_1008_, v___x_1017_, v___x_1016_, v___y_1013_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v_a_1020_; size_t v___x_1021_; size_t v___x_1022_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
v_a_1020_ = lean_ctor_get(v___x_1018_, 1);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1018_, 2);
v___x_1021_ = ((size_t)1ULL);
v___x_1022_ = lean_usize_add(v_i_1010_, v___x_1021_);
v_i_1010_ = v___x_1022_;
v_b_1012_ = v_a_1019_;
v___y_1013_ = v_a_1020_;
goto _start;
}
else
{
return v___x_1018_;
}
}
else
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1024_, 0, v_b_1012_);
lean_ctor_set(v___x_1024_, 1, v___y_1013_);
return v___x_1024_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3___boxed(lean_object* v_h_1025_, lean_object* v_as_1026_, lean_object* v_i_1027_, lean_object* v_stop_1028_, lean_object* v_b_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
size_t v_i_boxed_1032_; size_t v_stop_boxed_1033_; lean_object* v_res_1034_; 
v_i_boxed_1032_ = lean_unbox_usize(v_i_1027_);
lean_dec(v_i_1027_);
v_stop_boxed_1033_ = lean_unbox_usize(v_stop_1028_);
lean_dec(v_stop_1028_);
v_res_1034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1025_, v_as_1026_, v_i_boxed_1032_, v_stop_boxed_1033_, v_b_1029_, v___y_1030_);
lean_dec_ref(v_as_1026_);
lean_dec(v_h_1025_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(lean_object* v_h_1035_, lean_object* v_cache_1036_, uint8_t v_platformIndependent_1037_, lean_object* v_a_1038_){
_start:
{
if (v_platformIndependent_1037_ == 0)
{
lean_object* v_buckets_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1054_; 
v_buckets_1040_ = lean_ctor_get(v_cache_1036_, 1);
v_isSharedCheck_1054_ = !lean_is_exclusive(v_cache_1036_);
if (v_isSharedCheck_1054_ == 0)
{
lean_object* v_unused_1055_; 
v_unused_1055_ = lean_ctor_get(v_cache_1036_, 0);
lean_dec(v_unused_1055_);
v___x_1042_ = v_cache_1036_;
v_isShared_1043_ = v_isSharedCheck_1054_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_buckets_1040_);
lean_dec(v_cache_1036_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1054_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; uint8_t v___x_1047_; 
v___x_1044_ = lean_unsigned_to_nat(0u);
v___x_1045_ = lean_array_get_size(v_buckets_1040_);
v___x_1046_ = lean_box(0);
v___x_1047_ = lean_nat_dec_lt(v___x_1044_, v___x_1045_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1049_; 
lean_dec_ref(v_buckets_1040_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 1, v_a_1038_);
lean_ctor_set(v___x_1042_, 0, v___x_1046_);
v___x_1049_ = v___x_1042_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v_a_1038_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
else
{
size_t v___x_1051_; size_t v___x_1052_; lean_object* v___x_1053_; 
lean_del_object(v___x_1042_);
v___x_1051_ = ((size_t)0ULL);
v___x_1052_ = lean_usize_of_nat(v___x_1045_);
v___x_1053_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(v_h_1035_, v_buckets_1040_, v___x_1051_, v___x_1052_, v___x_1046_, v_a_1038_);
lean_dec_ref(v_buckets_1040_);
return v___x_1053_;
}
}
}
else
{
lean_object* v_buckets_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1070_; 
v_buckets_1056_ = lean_ctor_get(v_cache_1036_, 1);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_cache_1036_);
if (v_isSharedCheck_1070_ == 0)
{
lean_object* v_unused_1071_; 
v_unused_1071_ = lean_ctor_get(v_cache_1036_, 0);
lean_dec(v_unused_1071_);
v___x_1058_ = v_cache_1036_;
v_isShared_1059_ = v_isSharedCheck_1070_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_buckets_1056_);
lean_dec(v_cache_1036_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1070_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v___x_1060_ = lean_unsigned_to_nat(0u);
v___x_1061_ = lean_array_get_size(v_buckets_1056_);
v___x_1062_ = lean_box(0);
v___x_1063_ = lean_nat_dec_lt(v___x_1060_, v___x_1061_);
if (v___x_1063_ == 0)
{
lean_object* v___x_1065_; 
lean_dec_ref(v_buckets_1056_);
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 1, v_a_1038_);
lean_ctor_set(v___x_1058_, 0, v___x_1062_);
v___x_1065_ = v___x_1058_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1062_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v_a_1038_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
else
{
size_t v___x_1067_; size_t v___x_1068_; lean_object* v___x_1069_; 
lean_del_object(v___x_1058_);
v___x_1067_ = ((size_t)0ULL);
v___x_1068_ = lean_usize_of_nat(v___x_1061_);
v___x_1069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1035_, v_buckets_1056_, v___x_1067_, v___x_1068_, v___x_1062_, v_a_1038_);
lean_dec_ref(v_buckets_1056_);
return v___x_1069_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries___boxed(lean_object* v_h_1072_, lean_object* v_cache_1073_, lean_object* v_platformIndependent_1074_, lean_object* v_a_1075_, lean_object* v___y_1076_){
_start:
{
uint8_t v_platformIndependent_boxed_1077_; lean_object* v_res_1078_; 
v_platformIndependent_boxed_1077_ = lean_unbox(v_platformIndependent_1074_);
v_res_1078_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_h_1072_, v_cache_1073_, v_platformIndependent_boxed_1077_, v_a_1075_);
lean_dec(v_h_1072_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_updateFile_spec__0(lean_object* v_x_1079_, lean_object* v_x_1080_){
_start:
{
if (lean_obj_tag(v_x_1080_) == 0)
{
return v_x_1079_;
}
else
{
lean_object* v_key_1081_; lean_object* v_value_1082_; lean_object* v_tail_1083_; uint64_t v___x_1084_; lean_object* v___x_1085_; 
v_key_1081_ = lean_ctor_get(v_x_1080_, 0);
lean_inc(v_key_1081_);
v_value_1082_ = lean_ctor_get(v_x_1080_, 1);
lean_inc(v_value_1082_);
v_tail_1083_ = lean_ctor_get(v_x_1080_, 2);
lean_inc(v_tail_1083_);
lean_dec_ref_known(v_x_1080_, 3);
v___x_1084_ = lean_unbox_uint64(v_key_1081_);
lean_dec(v_key_1081_);
v___x_1085_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_x_1079_, v___x_1084_, v_value_1082_);
v_x_1079_ = v___x_1085_;
v_x_1080_ = v_tail_1083_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(lean_object* v_as_1087_, size_t v_i_1088_, size_t v_stop_1089_, lean_object* v_b_1090_){
_start:
{
uint8_t v___x_1091_; 
v___x_1091_ = lean_usize_dec_eq(v_i_1088_, v_stop_1089_);
if (v___x_1091_ == 0)
{
lean_object* v___x_1092_; lean_object* v___x_1093_; size_t v___x_1094_; size_t v___x_1095_; 
v___x_1092_ = lean_array_uget_borrowed(v_as_1087_, v_i_1088_);
lean_inc(v___x_1092_);
v___x_1093_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_updateFile_spec__0(v_b_1090_, v___x_1092_);
v___x_1094_ = ((size_t)1ULL);
v___x_1095_ = lean_usize_add(v_i_1088_, v___x_1094_);
v_i_1088_ = v___x_1095_;
v_b_1090_ = v___x_1093_;
goto _start;
}
else
{
return v_b_1090_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1___boxed(lean_object* v_as_1097_, lean_object* v_i_1098_, lean_object* v_stop_1099_, lean_object* v_b_1100_){
_start:
{
size_t v_i_boxed_1101_; size_t v_stop_boxed_1102_; lean_object* v_res_1103_; 
v_i_boxed_1101_ = lean_unbox_usize(v_i_1098_);
lean_dec(v_i_1098_);
v_stop_boxed_1102_ = lean_unbox_usize(v_stop_1099_);
lean_dec(v_stop_1099_);
v_res_1103_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(v_as_1097_, v_i_boxed_1101_, v_stop_boxed_1102_, v_b_1100_);
lean_dec_ref(v_as_1097_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile(lean_object* v_file_1104_, lean_object* v_cache_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v_a_1109_; lean_object* v_a_1110_; lean_object* v___x_1112_; 
lean_inc_ref(v_file_1104_);
v___x_1112_ = l_Lake_createParentDirs(v_file_1104_);
if (lean_obj_tag(v___x_1112_) == 0)
{
uint8_t v___x_1113_; lean_object* v___x_1114_; 
lean_dec_ref_known(v___x_1112_, 1);
v___x_1113_ = 4;
v___x_1114_ = lean_io_prim_handle_mk(v_file_1104_, v___x_1113_);
if (lean_obj_tag(v___x_1114_) == 0)
{
uint8_t v___x_1115_; lean_object* v___x_1116_; 
lean_dec_ref_known(v___x_1114_, 1);
v___x_1115_ = 3;
v___x_1116_ = lean_io_prim_handle_mk(v_file_1104_, v___x_1115_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; uint8_t v___x_1118_; lean_object* v___x_1119_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref_known(v___x_1116_, 1);
v___x_1118_ = 1;
v___x_1119_ = lean_io_prim_handle_lock(v_a_1117_, v___x_1118_);
if (lean_obj_tag(v___x_1119_) == 0)
{
uint8_t v___x_1120_; lean_object* v___x_1121_; 
lean_dec_ref_known(v___x_1119_, 1);
v___x_1120_ = 0;
v___x_1121_ = lean_io_prim_handle_get_line(v_a_1117_);
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v_a_1122_; lean_object* v___x_1123_; 
v_a_1122_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_a_1122_);
lean_dec_ref_known(v___x_1121_, 1);
lean_inc_ref(v_file_1104_);
v___x_1123_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_1104_, v_a_1122_, v_a_1106_);
if (lean_obj_tag(v___x_1123_) == 0)
{
lean_object* v_a_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v_a_1124_ = lean_ctor_get(v___x_1123_, 1);
lean_inc(v_a_1124_);
lean_dec_ref_known(v___x_1123_, 2);
v___x_1125_ = lean_unsigned_to_nat(2u);
v___x_1126_ = lean_unsigned_to_nat(0u);
v___x_1127_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_1128_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_1117_, v_file_1104_, v___x_1120_, v___x_1125_, v___x_1127_, v_a_1124_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v_a_1129_; lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1153_; 
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
v_a_1130_ = lean_ctor_get(v___x_1128_, 1);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1132_ = v___x_1128_;
v_isShared_1133_ = v_isSharedCheck_1153_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_inc(v_a_1129_);
lean_dec(v___x_1128_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1153_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___y_1135_; lean_object* v_buckets_1147_; lean_object* v___x_1148_; uint8_t v___x_1149_; 
v_buckets_1147_ = lean_ctor_get(v_cache_1105_, 1);
v___x_1148_ = lean_array_get_size(v_buckets_1147_);
v___x_1149_ = lean_nat_dec_lt(v___x_1126_, v___x_1148_);
if (v___x_1149_ == 0)
{
v___y_1135_ = v_a_1129_;
goto v___jp_1134_;
}
else
{
size_t v___x_1150_; size_t v___x_1151_; lean_object* v___x_1152_; 
v___x_1150_ = ((size_t)0ULL);
v___x_1151_ = lean_usize_of_nat(v___x_1148_);
v___x_1152_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(v_buckets_1147_, v___x_1150_, v___x_1151_, v_a_1129_);
v___y_1135_ = v___x_1152_;
goto v___jp_1134_;
}
v___jp_1134_:
{
lean_object* v___x_1136_; 
v___x_1136_ = lean_io_prim_handle_rewind(v_a_1117_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v___x_1137_; 
lean_dec_ref_known(v___x_1136_, 1);
lean_del_object(v___x_1132_);
v___x_1137_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_a_1117_, v___y_1135_, v___x_1120_, v_a_1130_);
lean_dec(v_a_1117_);
return v___x_1137_;
}
else
{
lean_object* v_a_1138_; lean_object* v___x_1139_; uint8_t v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1145_; 
lean_dec_ref(v___y_1135_);
lean_dec(v_a_1117_);
v_a_1138_ = lean_ctor_get(v___x_1136_, 0);
lean_inc(v_a_1138_);
lean_dec_ref_known(v___x_1136_, 1);
v___x_1139_ = lean_io_error_to_string(v_a_1138_);
v___x_1140_ = 3;
v___x_1141_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1141_, 0, v___x_1139_);
lean_ctor_set_uint8(v___x_1141_, sizeof(void*)*1, v___x_1140_);
v___x_1142_ = lean_array_get_size(v_a_1130_);
v___x_1143_ = lean_array_push(v_a_1130_, v___x_1141_);
if (v_isShared_1133_ == 0)
{
lean_ctor_set_tag(v___x_1132_, 1);
lean_ctor_set(v___x_1132_, 1, v___x_1143_);
lean_ctor_set(v___x_1132_, 0, v___x_1142_);
v___x_1145_ = v___x_1132_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v___x_1142_);
lean_ctor_set(v_reuseFailAlloc_1146_, 1, v___x_1143_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
}
}
else
{
lean_object* v_a_1154_; lean_object* v_a_1155_; 
lean_dec(v_a_1117_);
v_a_1154_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_a_1154_);
v_a_1155_ = lean_ctor_get(v___x_1128_, 1);
lean_inc(v_a_1155_);
lean_dec_ref_known(v___x_1128_, 2);
v_a_1109_ = v_a_1154_;
v_a_1110_ = v_a_1155_;
goto v___jp_1108_;
}
}
else
{
lean_object* v_a_1156_; lean_object* v_a_1157_; 
lean_dec(v_a_1117_);
lean_dec_ref(v_file_1104_);
v_a_1156_ = lean_ctor_get(v___x_1123_, 0);
lean_inc(v_a_1156_);
v_a_1157_ = lean_ctor_get(v___x_1123_, 1);
lean_inc(v_a_1157_);
lean_dec_ref_known(v___x_1123_, 2);
v_a_1109_ = v_a_1156_;
v_a_1110_ = v_a_1157_;
goto v___jp_1108_;
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
lean_dec(v_a_1117_);
lean_dec_ref(v_file_1104_);
v_a_1158_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___x_1121_, 1);
v___x_1159_ = lean_io_error_to_string(v_a_1158_);
v___x_1160_ = 3;
v___x_1161_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1161_, 0, v___x_1159_);
lean_ctor_set_uint8(v___x_1161_, sizeof(void*)*1, v___x_1160_);
v___x_1162_ = lean_array_get_size(v_a_1106_);
v___x_1163_ = lean_array_push(v_a_1106_, v___x_1161_);
v_a_1109_ = v___x_1162_;
v_a_1110_ = v___x_1163_;
goto v___jp_1108_;
}
}
else
{
lean_object* v_a_1164_; lean_object* v___x_1165_; uint8_t v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_dec(v_a_1117_);
lean_dec_ref(v_file_1104_);
v_a_1164_ = lean_ctor_get(v___x_1119_, 0);
lean_inc(v_a_1164_);
lean_dec_ref_known(v___x_1119_, 1);
v___x_1165_ = lean_io_error_to_string(v_a_1164_);
v___x_1166_ = 3;
v___x_1167_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1167_, 0, v___x_1165_);
lean_ctor_set_uint8(v___x_1167_, sizeof(void*)*1, v___x_1166_);
v___x_1168_ = lean_array_get_size(v_a_1106_);
v___x_1169_ = lean_array_push(v_a_1106_, v___x_1167_);
v___x_1170_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1168_);
lean_ctor_set(v___x_1170_, 1, v___x_1169_);
return v___x_1170_;
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; uint8_t v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v_a_1171_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1171_);
lean_dec_ref_known(v___x_1116_, 1);
v___x_1172_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_1173_ = lean_string_append(v_file_1104_, v___x_1172_);
v___x_1174_ = lean_io_error_to_string(v_a_1171_);
v___x_1175_ = lean_string_append(v___x_1173_, v___x_1174_);
lean_dec_ref(v___x_1174_);
v___x_1176_ = 3;
v___x_1177_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1177_, 0, v___x_1175_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*1, v___x_1176_);
v___x_1178_ = lean_array_get_size(v_a_1106_);
v___x_1179_ = lean_array_push(v_a_1106_, v___x_1177_);
v___x_1180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1178_);
lean_ctor_set(v___x_1180_, 1, v___x_1179_);
return v___x_1180_;
}
}
else
{
lean_object* v_a_1181_; lean_object* v___x_1182_; uint8_t v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
lean_dec_ref(v_file_1104_);
v_a_1181_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1181_);
lean_dec_ref_known(v___x_1114_, 1);
v___x_1182_ = lean_io_error_to_string(v_a_1181_);
v___x_1183_ = 3;
v___x_1184_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1184_, 0, v___x_1182_);
lean_ctor_set_uint8(v___x_1184_, sizeof(void*)*1, v___x_1183_);
v___x_1185_ = lean_array_get_size(v_a_1106_);
v___x_1186_ = lean_array_push(v_a_1106_, v___x_1184_);
v___x_1187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1185_);
lean_ctor_set(v___x_1187_, 1, v___x_1186_);
return v___x_1187_;
}
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1189_; uint8_t v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
lean_dec_ref(v_file_1104_);
v_a_1188_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1188_);
lean_dec_ref_known(v___x_1112_, 1);
v___x_1189_ = lean_io_error_to_string(v_a_1188_);
v___x_1190_ = 3;
v___x_1191_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1191_, 0, v___x_1189_);
lean_ctor_set_uint8(v___x_1191_, sizeof(void*)*1, v___x_1190_);
v___x_1192_ = lean_array_get_size(v_a_1106_);
v___x_1193_ = lean_array_push(v_a_1106_, v___x_1191_);
v___x_1194_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1192_);
lean_ctor_set(v___x_1194_, 1, v___x_1193_);
return v___x_1194_;
}
v___jp_1108_:
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1111_, 0, v_a_1109_);
lean_ctor_set(v___x_1111_, 1, v_a_1110_);
return v___x_1111_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile___boxed(lean_object* v_file_1195_, lean_object* v_cache_1196_, lean_object* v_a_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lake_CacheMap_updateFile(v_file_1195_, v_cache_1196_, v_a_1197_);
lean_dec_ref(v_cache_1196_);
return v_res_1199_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__0(void){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = ((lean_object*)(l_Lake_CacheMap_schemaVersion));
v___x_1201_ = l_Lake_Date_toString(v___x_1200_);
return v___x_1201_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__1(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__0, &l_Lake_CacheMap_writeFile___closed__0_once, _init_l_Lake_CacheMap_writeFile___closed__0);
v___x_1203_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
return v___x_1203_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__2(void){
_start:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__1, &l_Lake_CacheMap_writeFile___closed__1_once, _init_l_Lake_CacheMap_writeFile___closed__1);
v___x_1205_ = l_Lean_Json_compress(v___x_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile(lean_object* v_file_1206_, lean_object* v_cache_1207_, uint8_t v_platformIndependent_1208_, lean_object* v_a_1209_){
_start:
{
lean_object* v___x_1211_; 
lean_inc_ref(v_file_1206_);
v___x_1211_ = l_Lake_createParentDirs(v_file_1206_);
if (lean_obj_tag(v___x_1211_) == 0)
{
uint8_t v___x_1212_; lean_object* v___x_1213_; 
lean_dec_ref_known(v___x_1211_, 1);
v___x_1212_ = 1;
v___x_1213_ = lean_io_prim_handle_mk(v_file_1206_, v___x_1212_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_a_1214_; uint8_t v___x_1215_; lean_object* v___x_1216_; 
lean_dec_ref(v_file_1206_);
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_a_1214_);
lean_dec_ref_known(v___x_1213_, 1);
v___x_1215_ = 1;
v___x_1216_ = lean_io_prim_handle_lock(v_a_1214_, v___x_1215_);
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
lean_dec_ref_known(v___x_1216_, 1);
v___x_1217_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__2, &l_Lake_CacheMap_writeFile___closed__2_once, _init_l_Lake_CacheMap_writeFile___closed__2);
v___x_1218_ = l_IO_FS_Handle_putStrLn(v_a_1214_, v___x_1217_);
if (lean_obj_tag(v___x_1218_) == 0)
{
lean_object* v___x_1219_; 
lean_dec_ref_known(v___x_1218_, 1);
v___x_1219_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_a_1214_, v_cache_1207_, v_platformIndependent_1208_, v_a_1209_);
lean_dec(v_a_1214_);
return v___x_1219_;
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1221_; uint8_t v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
lean_dec(v_a_1214_);
lean_dec_ref(v_cache_1207_);
v_a_1220_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v___x_1218_, 1);
v___x_1221_ = lean_io_error_to_string(v_a_1220_);
v___x_1222_ = 3;
v___x_1223_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1223_, 0, v___x_1221_);
lean_ctor_set_uint8(v___x_1223_, sizeof(void*)*1, v___x_1222_);
v___x_1224_ = lean_array_get_size(v_a_1209_);
v___x_1225_ = lean_array_push(v_a_1209_, v___x_1223_);
v___x_1226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1224_);
lean_ctor_set(v___x_1226_, 1, v___x_1225_);
return v___x_1226_;
}
}
else
{
lean_object* v_a_1227_; lean_object* v___x_1228_; uint8_t v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
lean_dec(v_a_1214_);
lean_dec_ref(v_cache_1207_);
v_a_1227_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_a_1227_);
lean_dec_ref_known(v___x_1216_, 1);
v___x_1228_ = lean_io_error_to_string(v_a_1227_);
v___x_1229_ = 3;
v___x_1230_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1230_, 0, v___x_1228_);
lean_ctor_set_uint8(v___x_1230_, sizeof(void*)*1, v___x_1229_);
v___x_1231_ = lean_array_get_size(v_a_1209_);
v___x_1232_ = lean_array_push(v_a_1209_, v___x_1230_);
v___x_1233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1231_);
lean_ctor_set(v___x_1233_, 1, v___x_1232_);
return v___x_1233_;
}
}
else
{
lean_object* v_a_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
lean_dec_ref(v_cache_1207_);
v_a_1234_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_a_1234_);
lean_dec_ref_known(v___x_1213_, 1);
v___x_1235_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_1236_ = lean_string_append(v_file_1206_, v___x_1235_);
v___x_1237_ = lean_io_error_to_string(v_a_1234_);
v___x_1238_ = lean_string_append(v___x_1236_, v___x_1237_);
lean_dec_ref(v___x_1237_);
v___x_1239_ = 3;
v___x_1240_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1240_, 0, v___x_1238_);
lean_ctor_set_uint8(v___x_1240_, sizeof(void*)*1, v___x_1239_);
v___x_1241_ = lean_array_get_size(v_a_1209_);
v___x_1242_ = lean_array_push(v_a_1209_, v___x_1240_);
v___x_1243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
return v___x_1243_;
}
}
else
{
lean_object* v_a_1244_; lean_object* v___x_1245_; uint8_t v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
lean_dec_ref(v_cache_1207_);
lean_dec_ref(v_file_1206_);
v_a_1244_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1244_);
lean_dec_ref_known(v___x_1211_, 1);
v___x_1245_ = lean_io_error_to_string(v_a_1244_);
v___x_1246_ = 3;
v___x_1247_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1247_, 0, v___x_1245_);
lean_ctor_set_uint8(v___x_1247_, sizeof(void*)*1, v___x_1246_);
v___x_1248_ = lean_array_get_size(v_a_1209_);
v___x_1249_ = lean_array_push(v_a_1209_, v___x_1247_);
v___x_1250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1248_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
return v___x_1250_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile___boxed(lean_object* v_file_1251_, lean_object* v_cache_1252_, lean_object* v_platformIndependent_1253_, lean_object* v_a_1254_, lean_object* v___y_1255_){
_start:
{
uint8_t v_platformIndependent_boxed_1256_; lean_object* v_res_1257_; 
v_platformIndependent_boxed_1256_ = lean_unbox(v_platformIndependent_1253_);
v_res_1257_ = l_Lake_CacheMap_writeFile(v_file_1251_, v_cache_1252_, v_platformIndependent_boxed_1256_, v_a_1254_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(uint64_t v_a_1258_, lean_object* v_x_1259_){
_start:
{
if (lean_obj_tag(v_x_1259_) == 0)
{
lean_object* v___x_1260_; 
v___x_1260_ = lean_box(0);
return v___x_1260_;
}
else
{
lean_object* v_key_1261_; lean_object* v_value_1262_; lean_object* v_tail_1263_; uint64_t v___x_1264_; uint8_t v___x_1265_; 
v_key_1261_ = lean_ctor_get(v_x_1259_, 0);
v_value_1262_ = lean_ctor_get(v_x_1259_, 1);
v_tail_1263_ = lean_ctor_get(v_x_1259_, 2);
v___x_1264_ = lean_unbox_uint64(v_key_1261_);
v___x_1265_ = lean_uint64_dec_eq(v___x_1264_, v_a_1258_);
if (v___x_1265_ == 0)
{
v_x_1259_ = v_tail_1263_;
goto _start;
}
else
{
lean_object* v___x_1267_; 
lean_inc(v_value_1262_);
v___x_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1267_, 0, v_value_1262_);
return v___x_1267_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_1268_, lean_object* v_x_1269_){
_start:
{
uint64_t v_a_boxed_1270_; lean_object* v_res_1271_; 
v_a_boxed_1270_ = lean_unbox_uint64(v_a_1268_);
lean_dec_ref(v_a_1268_);
v_res_1271_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_boxed_1270_, v_x_1269_);
lean_dec(v_x_1269_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(lean_object* v_m_1272_, uint64_t v_a_1273_){
_start:
{
lean_object* v_buckets_1274_; lean_object* v___x_1275_; uint64_t v___x_1276_; uint64_t v___x_1277_; uint64_t v_fold_1278_; uint64_t v___x_1279_; uint64_t v___x_1280_; uint64_t v___x_1281_; size_t v___x_1282_; size_t v___x_1283_; size_t v___x_1284_; size_t v___x_1285_; size_t v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v_buckets_1274_ = lean_ctor_get(v_m_1272_, 1);
v___x_1275_ = lean_array_get_size(v_buckets_1274_);
v___x_1276_ = 32ULL;
v___x_1277_ = lean_uint64_shift_right(v_a_1273_, v___x_1276_);
v_fold_1278_ = lean_uint64_xor(v_a_1273_, v___x_1277_);
v___x_1279_ = 16ULL;
v___x_1280_ = lean_uint64_shift_right(v_fold_1278_, v___x_1279_);
v___x_1281_ = lean_uint64_xor(v_fold_1278_, v___x_1280_);
v___x_1282_ = lean_uint64_to_usize(v___x_1281_);
v___x_1283_ = lean_usize_of_nat(v___x_1275_);
v___x_1284_ = ((size_t)1ULL);
v___x_1285_ = lean_usize_sub(v___x_1283_, v___x_1284_);
v___x_1286_ = lean_usize_land(v___x_1282_, v___x_1285_);
v___x_1287_ = lean_array_uget_borrowed(v_buckets_1274_, v___x_1286_);
v___x_1288_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_1273_, v___x_1287_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg___boxed(lean_object* v_m_1289_, lean_object* v_a_1290_){
_start:
{
uint64_t v_a_boxed_1291_; lean_object* v_res_1292_; 
v_a_boxed_1291_ = lean_unbox_uint64(v_a_1290_);
lean_dec_ref(v_a_1290_);
v_res_1292_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_m_1289_, v_a_boxed_1291_);
lean_dec_ref(v_m_1289_);
return v_res_1292_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f(uint64_t v_inputHash_1293_, lean_object* v_cache_1294_){
_start:
{
lean_object* v___x_1295_; 
v___x_1295_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_cache_1294_, v_inputHash_1293_);
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_object* v___x_1296_; 
v___x_1296_ = lean_box(0);
return v___x_1296_;
}
else
{
lean_object* v_val_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1305_; 
v_val_1297_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1299_ = v___x_1295_;
v_isShared_1300_ = v_isSharedCheck_1305_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_val_1297_);
lean_dec(v___x_1295_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1305_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v_out_1301_; lean_object* v___x_1303_; 
v_out_1301_ = lean_ctor_get(v_val_1297_, 0);
lean_inc(v_out_1301_);
lean_dec(v_val_1297_);
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v_out_1301_);
v___x_1303_ = v___x_1299_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_out_1301_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f___boxed(lean_object* v_inputHash_1306_, lean_object* v_cache_1307_){
_start:
{
uint64_t v_inputHash_boxed_1308_; lean_object* v_res_1309_; 
v_inputHash_boxed_1308_ = lean_unbox_uint64(v_inputHash_1306_);
lean_dec_ref(v_inputHash_1306_);
v_res_1309_ = l_Lake_CacheMap_get_x3f(v_inputHash_boxed_1308_, v_cache_1307_);
lean_dec_ref(v_cache_1307_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0(lean_object* v_00_u03b2_1310_, lean_object* v_m_1311_, uint64_t v_a_1312_){
_start:
{
lean_object* v___x_1313_; 
v___x_1313_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_m_1311_, v_a_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___boxed(lean_object* v_00_u03b2_1314_, lean_object* v_m_1315_, lean_object* v_a_1316_){
_start:
{
uint64_t v_a_boxed_1317_; lean_object* v_res_1318_; 
v_a_boxed_1317_ = lean_unbox_uint64(v_a_1316_);
lean_dec_ref(v_a_1316_);
v_res_1318_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0(v_00_u03b2_1314_, v_m_1315_, v_a_boxed_1317_);
lean_dec_ref(v_m_1315_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1319_, uint64_t v_a_1320_, lean_object* v_x_1321_){
_start:
{
lean_object* v___x_1322_; 
v___x_1322_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_1320_, v_x_1321_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1323_, lean_object* v_a_1324_, lean_object* v_x_1325_){
_start:
{
uint64_t v_a_boxed_1326_; lean_object* v_res_1327_; 
v_a_boxed_1326_ = lean_unbox_uint64(v_a_1324_);
lean_dec_ref(v_a_1324_);
v_res_1327_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0(v_00_u03b2_1323_, v_a_boxed_1326_, v_x_1325_);
lean_dec(v_x_1325_);
return v_res_1327_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(uint64_t v_inputHash_1328_, lean_object* v_out_1329_, lean_object* v_cache_1330_, uint8_t v_platformIndependent_1331_){
_start:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1332_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1332_, 0, v_out_1329_);
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*1, v_platformIndependent_1331_);
v___x_1333_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_cache_1330_, v_inputHash_1328_, v___x_1332_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore___boxed(lean_object* v_inputHash_1334_, lean_object* v_out_1335_, lean_object* v_cache_1336_, lean_object* v_platformIndependent_1337_){
_start:
{
uint64_t v_inputHash_boxed_1338_; uint8_t v_platformIndependent_boxed_1339_; lean_object* v_res_1340_; 
v_inputHash_boxed_1338_ = lean_unbox_uint64(v_inputHash_1334_);
lean_dec_ref(v_inputHash_1334_);
v_platformIndependent_boxed_1339_ = lean_unbox(v_platformIndependent_1337_);
v_res_1340_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_boxed_1338_, v_out_1335_, v_cache_1336_, v_platformIndependent_boxed_1339_);
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg(lean_object* v_inst_1341_, uint64_t v_inputHash_1342_, lean_object* v_val_1343_, lean_object* v_cache_1344_, uint8_t v_platformIndependent_1345_){
_start:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1346_ = lean_apply_1(v_inst_1341_, v_val_1343_);
v___x_1347_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1342_, v___x_1346_, v_cache_1344_, v_platformIndependent_1345_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg___boxed(lean_object* v_inst_1348_, lean_object* v_inputHash_1349_, lean_object* v_val_1350_, lean_object* v_cache_1351_, lean_object* v_platformIndependent_1352_){
_start:
{
uint64_t v_inputHash_boxed_1353_; uint8_t v_platformIndependent_boxed_1354_; lean_object* v_res_1355_; 
v_inputHash_boxed_1353_ = lean_unbox_uint64(v_inputHash_1349_);
lean_dec_ref(v_inputHash_1349_);
v_platformIndependent_boxed_1354_ = lean_unbox(v_platformIndependent_1352_);
v_res_1355_ = l_Lake_CacheMap_insert___redArg(v_inst_1348_, v_inputHash_boxed_1353_, v_val_1350_, v_cache_1351_, v_platformIndependent_boxed_1354_);
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert(lean_object* v_00_u03b1_1356_, lean_object* v_inst_1357_, uint64_t v_inputHash_1358_, lean_object* v_val_1359_, lean_object* v_cache_1360_, uint8_t v_platformIndependent_1361_){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = lean_apply_1(v_inst_1357_, v_val_1359_);
v___x_1363_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1358_, v___x_1362_, v_cache_1360_, v_platformIndependent_1361_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___boxed(lean_object* v_00_u03b1_1364_, lean_object* v_inst_1365_, lean_object* v_inputHash_1366_, lean_object* v_val_1367_, lean_object* v_cache_1368_, lean_object* v_platformIndependent_1369_){
_start:
{
uint64_t v_inputHash_boxed_1370_; uint8_t v_platformIndependent_boxed_1371_; lean_object* v_res_1372_; 
v_inputHash_boxed_1370_ = lean_unbox_uint64(v_inputHash_1366_);
lean_dec_ref(v_inputHash_1366_);
v_platformIndependent_boxed_1371_ = lean_unbox(v_platformIndependent_1369_);
v_res_1372_ = l_Lake_CacheMap_insert(v_00_u03b1_1364_, v_inst_1365_, v_inputHash_boxed_1370_, v_val_1367_, v_cache_1368_, v_platformIndependent_boxed_1371_);
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(lean_object* v_init_1376_, lean_object* v_x_1377_, lean_object* v___y_1378_){
_start:
{
if (lean_obj_tag(v_x_1377_) == 0)
{
lean_object* v_v_1380_; lean_object* v_l_1381_; lean_object* v_r_1382_; lean_object* v___x_1383_; 
v_v_1380_ = lean_ctor_get(v_x_1377_, 2);
lean_inc(v_v_1380_);
v_l_1381_ = lean_ctor_get(v_x_1377_, 3);
lean_inc(v_l_1381_);
v_r_1382_ = lean_ctor_get(v_x_1377_, 4);
lean_inc(v_r_1382_);
lean_dec_ref_known(v_x_1377_, 5);
v___x_1383_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_init_1376_, v_l_1381_, v___y_1378_);
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v_a_1384_; lean_object* v_a_1385_; lean_object* v___x_1386_; 
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc(v_a_1384_);
v_a_1385_ = lean_ctor_get(v___x_1383_, 1);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1383_, 2);
v___x_1386_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_a_1384_, v_v_1380_, v_a_1385_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v_a_1388_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc(v_a_1387_);
v_a_1388_ = lean_ctor_get(v___x_1386_, 1);
lean_inc(v_a_1388_);
lean_dec_ref_known(v___x_1386_, 2);
v_init_1376_ = v_a_1387_;
v_x_1377_ = v_r_1382_;
v___y_1378_ = v_a_1388_;
goto _start;
}
else
{
lean_dec(v_r_1382_);
return v___x_1386_;
}
}
else
{
lean_dec(v_r_1382_);
lean_dec(v_v_1380_);
return v___x_1383_;
}
}
else
{
lean_object* v___x_1390_; 
v___x_1390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1390_, 0, v_init_1376_);
lean_ctor_set(v___x_1390_, 1, v___y_1378_);
return v___x_1390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(lean_object* v_as_1391_, lean_object* v_o_1392_, lean_object* v_a_1393_){
_start:
{
lean_object* v___y_1396_; 
switch(lean_obj_tag(v_o_1392_))
{
case 0:
{
v___y_1396_ = v_a_1393_;
goto v___jp_1395_;
}
case 1:
{
lean_object* v___x_1398_; 
lean_dec_ref_known(v_o_1392_, 0);
v___x_1398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1398_, 0, v_as_1391_);
lean_ctor_set(v___x_1398_, 1, v_a_1393_);
return v___x_1398_;
}
case 2:
{
lean_object* v_n_1399_; lean_object* v___x_1400_; 
v_n_1399_ = lean_ctor_get(v_o_1392_, 0);
lean_inc_ref(v_n_1399_);
lean_dec_ref_known(v_o_1392_, 1);
v___x_1400_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_1399_);
if (lean_obj_tag(v___x_1400_) == 0)
{
lean_object* v_a_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v_a_1401_ = lean_ctor_get(v___x_1400_, 0);
lean_inc(v_a_1401_);
lean_dec_ref_known(v___x_1400_, 1);
v___x_1402_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0));
v___x_1403_ = lean_string_append(v___x_1402_, v_a_1401_);
lean_dec(v_a_1401_);
v___x_1404_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_1405_ = lean_string_append(v___x_1403_, v___x_1404_);
v___x_1406_ = l_Lean_JsonNumber_toString(v_n_1399_);
v___x_1407_ = lean_string_append(v___x_1405_, v___x_1406_);
lean_dec_ref(v___x_1406_);
v___x_1408_ = 3;
v___x_1409_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1409_, 0, v___x_1407_);
lean_ctor_set_uint8(v___x_1409_, sizeof(void*)*1, v___x_1408_);
v___x_1410_ = lean_array_push(v_a_1393_, v___x_1409_);
v___y_1396_ = v___x_1410_;
goto v___jp_1395_;
}
else
{
lean_object* v_a_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; uint64_t v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
lean_dec_ref(v_n_1399_);
v_a_1411_ = lean_ctor_get(v___x_1400_, 0);
lean_inc(v_a_1411_);
lean_dec_ref_known(v___x_1400_, 1);
v___x_1412_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1));
v___x_1413_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
v___x_1414_ = lean_unbox_uint64(v_a_1411_);
lean_dec(v_a_1411_);
lean_ctor_set_uint64(v___x_1413_, sizeof(void*)*1, v___x_1414_);
v___x_1415_ = lean_array_push(v_as_1391_, v___x_1413_);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
lean_ctor_set(v___x_1416_, 1, v_a_1393_);
return v___x_1416_;
}
}
case 3:
{
lean_object* v_s_1417_; lean_object* v___x_1418_; 
v_s_1417_ = lean_ctor_get(v_o_1392_, 0);
lean_inc_ref(v_s_1417_);
lean_dec_ref_known(v_o_1392_, 1);
v___x_1418_ = l_Lake_ArtifactDescr_ofFilePath_x3f(v_s_1417_);
lean_dec_ref(v_s_1417_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; uint8_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1418_, 1);
v___x_1420_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2));
v___x_1421_ = lean_string_append(v___x_1420_, v_a_1419_);
lean_dec(v_a_1419_);
v___x_1422_ = 3;
v___x_1423_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1423_, 0, v___x_1421_);
lean_ctor_set_uint8(v___x_1423_, sizeof(void*)*1, v___x_1422_);
v___x_1424_ = lean_array_push(v_a_1393_, v___x_1423_);
v___y_1396_ = v___x_1424_;
goto v___jp_1395_;
}
else
{
lean_object* v_a_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v_a_1425_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1425_);
lean_dec_ref_known(v___x_1418_, 1);
v___x_1426_ = lean_array_push(v_as_1391_, v_a_1425_);
v___x_1427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
lean_ctor_set(v___x_1427_, 1, v_a_1393_);
return v___x_1427_;
}
}
case 4:
{
lean_object* v_elems_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
v_elems_1428_ = lean_ctor_get(v_o_1392_, 0);
lean_inc_ref(v_elems_1428_);
lean_dec_ref_known(v_o_1392_, 1);
v___x_1429_ = lean_unsigned_to_nat(0u);
v___x_1430_ = lean_array_get_size(v_elems_1428_);
v___x_1431_ = lean_nat_dec_lt(v___x_1429_, v___x_1430_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; 
lean_dec_ref(v_elems_1428_);
v___x_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1432_, 0, v_as_1391_);
lean_ctor_set(v___x_1432_, 1, v_a_1393_);
return v___x_1432_;
}
else
{
uint8_t v___x_1433_; 
v___x_1433_ = lean_nat_dec_le(v___x_1430_, v___x_1430_);
if (v___x_1433_ == 0)
{
if (v___x_1431_ == 0)
{
lean_object* v___x_1434_; 
lean_dec_ref(v_elems_1428_);
v___x_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1434_, 0, v_as_1391_);
lean_ctor_set(v___x_1434_, 1, v_a_1393_);
return v___x_1434_;
}
else
{
size_t v___x_1435_; size_t v___x_1436_; lean_object* v___x_1437_; 
v___x_1435_ = ((size_t)0ULL);
v___x_1436_ = lean_usize_of_nat(v___x_1430_);
v___x_1437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_elems_1428_, v___x_1435_, v___x_1436_, v_as_1391_, v_a_1393_);
lean_dec_ref(v_elems_1428_);
return v___x_1437_;
}
}
else
{
size_t v___x_1438_; size_t v___x_1439_; lean_object* v___x_1440_; 
v___x_1438_ = ((size_t)0ULL);
v___x_1439_ = lean_usize_of_nat(v___x_1430_);
v___x_1440_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_elems_1428_, v___x_1438_, v___x_1439_, v_as_1391_, v_a_1393_);
lean_dec_ref(v_elems_1428_);
return v___x_1440_;
}
}
}
default: 
{
lean_object* v_kvPairs_1441_; lean_object* v___x_1442_; 
v_kvPairs_1441_ = lean_ctor_get(v_o_1392_, 0);
lean_inc(v_kvPairs_1441_);
lean_dec_ref_known(v_o_1392_, 1);
v___x_1442_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_as_1391_, v_kvPairs_1441_, v_a_1393_);
return v___x_1442_;
}
}
v___jp_1395_:
{
lean_object* v___x_1397_; 
v___x_1397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1397_, 0, v_as_1391_);
lean_ctor_set(v___x_1397_, 1, v___y_1396_);
return v___x_1397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(lean_object* v_as_1443_, size_t v_i_1444_, size_t v_stop_1445_, lean_object* v_b_1446_, lean_object* v___y_1447_){
_start:
{
uint8_t v___x_1449_; 
v___x_1449_ = lean_usize_dec_eq(v_i_1444_, v_stop_1445_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1450_ = lean_array_uget_borrowed(v_as_1443_, v_i_1444_);
lean_inc(v___x_1450_);
v___x_1451_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_b_1446_, v___x_1450_, v___y_1447_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; lean_object* v_a_1453_; size_t v___x_1454_; size_t v___x_1455_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1452_);
v_a_1453_ = lean_ctor_get(v___x_1451_, 1);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1451_, 2);
v___x_1454_ = ((size_t)1ULL);
v___x_1455_ = lean_usize_add(v_i_1444_, v___x_1454_);
v_i_1444_ = v___x_1455_;
v_b_1446_ = v_a_1452_;
v___y_1447_ = v_a_1453_;
goto _start;
}
else
{
return v___x_1451_;
}
}
else
{
lean_object* v___x_1457_; 
v___x_1457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1457_, 0, v_b_1446_);
lean_ctor_set(v___x_1457_, 1, v___y_1447_);
return v___x_1457_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0___boxed(lean_object* v_as_1458_, lean_object* v_i_1459_, lean_object* v_stop_1460_, lean_object* v_b_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
size_t v_i_boxed_1464_; size_t v_stop_boxed_1465_; lean_object* v_res_1466_; 
v_i_boxed_1464_ = lean_unbox_usize(v_i_1459_);
lean_dec(v_i_1459_);
v_stop_boxed_1465_ = lean_unbox_usize(v_stop_1460_);
lean_dec(v_stop_1460_);
v_res_1466_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_as_1458_, v_i_boxed_1464_, v_stop_boxed_1465_, v_b_1461_, v___y_1462_);
lean_dec_ref(v_as_1458_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1___boxed(lean_object* v_init_1467_, lean_object* v_x_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_init_1467_, v_x_1468_, v___y_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___boxed(lean_object* v_as_1472_, lean_object* v_o_1473_, lean_object* v_a_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_as_1472_, v_o_1473_, v_a_1474_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(lean_object* v_x_1477_, lean_object* v_x_1478_, lean_object* v___y_1479_){
_start:
{
if (lean_obj_tag(v_x_1478_) == 0)
{
lean_object* v___x_1481_; 
v___x_1481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1481_, 0, v_x_1477_);
lean_ctor_set(v___x_1481_, 1, v___y_1479_);
return v___x_1481_;
}
else
{
lean_object* v_value_1482_; lean_object* v_tail_1483_; lean_object* v_out_1484_; lean_object* v___x_1485_; 
v_value_1482_ = lean_ctor_get(v_x_1478_, 1);
lean_inc(v_value_1482_);
v_tail_1483_ = lean_ctor_get(v_x_1478_, 2);
lean_inc(v_tail_1483_);
lean_dec_ref_known(v_x_1478_, 3);
v_out_1484_ = lean_ctor_get(v_value_1482_, 0);
lean_inc(v_out_1484_);
lean_dec(v_value_1482_);
v___x_1485_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_x_1477_, v_out_1484_, v___y_1479_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_a_1486_; lean_object* v_a_1487_; 
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_a_1486_);
v_a_1487_ = lean_ctor_get(v___x_1485_, 1);
lean_inc(v_a_1487_);
lean_dec_ref_known(v___x_1485_, 2);
v_x_1477_ = v_a_1486_;
v_x_1478_ = v_tail_1483_;
v___y_1479_ = v_a_1487_;
goto _start;
}
else
{
lean_dec(v_tail_1483_);
return v___x_1485_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0___boxed(lean_object* v_x_1489_, lean_object* v_x_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(v_x_1489_, v_x_1490_, v___y_1491_);
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(lean_object* v_as_1494_, size_t v_i_1495_, size_t v_stop_1496_, lean_object* v_b_1497_, lean_object* v___y_1498_){
_start:
{
uint8_t v___x_1500_; 
v___x_1500_ = lean_usize_dec_eq(v_i_1495_, v_stop_1496_);
if (v___x_1500_ == 0)
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = lean_array_uget_borrowed(v_as_1494_, v_i_1495_);
lean_inc(v___x_1501_);
v___x_1502_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(v_b_1497_, v___x_1501_, v___y_1498_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; lean_object* v_a_1504_; size_t v___x_1505_; size_t v___x_1506_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc(v_a_1503_);
v_a_1504_ = lean_ctor_get(v___x_1502_, 1);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1502_, 2);
v___x_1505_ = ((size_t)1ULL);
v___x_1506_ = lean_usize_add(v_i_1495_, v___x_1505_);
v_i_1495_ = v___x_1506_;
v_b_1497_ = v_a_1503_;
v___y_1498_ = v_a_1504_;
goto _start;
}
else
{
return v___x_1502_;
}
}
else
{
lean_object* v___x_1508_; 
v___x_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1508_, 0, v_b_1497_);
lean_ctor_set(v___x_1508_, 1, v___y_1498_);
return v___x_1508_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1___boxed(lean_object* v_as_1509_, lean_object* v_i_1510_, lean_object* v_stop_1511_, lean_object* v_b_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_){
_start:
{
size_t v_i_boxed_1515_; size_t v_stop_boxed_1516_; lean_object* v_res_1517_; 
v_i_boxed_1515_ = lean_unbox_usize(v_i_1510_);
lean_dec(v_i_1510_);
v_stop_boxed_1516_ = lean_unbox_usize(v_stop_1511_);
lean_dec(v_stop_1511_);
v_res_1517_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_as_1509_, v_i_boxed_1515_, v_stop_boxed_1516_, v_b_1512_, v___y_1513_);
lean_dec_ref(v_as_1509_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs(lean_object* v_map_1520_, lean_object* v_a_1521_){
_start:
{
lean_object* v_buckets_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1545_; 
v_buckets_1523_ = lean_ctor_get(v_map_1520_, 1);
v_isSharedCheck_1545_ = !lean_is_exclusive(v_map_1520_);
if (v_isSharedCheck_1545_ == 0)
{
lean_object* v_unused_1546_; 
v_unused_1546_ = lean_ctor_get(v_map_1520_, 0);
lean_dec(v_unused_1546_);
v___x_1525_ = v_map_1520_;
v_isShared_1526_ = v_isSharedCheck_1545_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_buckets_1523_);
lean_dec(v_map_1520_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1545_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___y_1531_; lean_object* v_a_1532_; lean_object* v___x_1538_; uint8_t v___x_1539_; 
v___x_1527_ = lean_unsigned_to_nat(0u);
v___x_1528_ = ((lean_object*)(l_Lake_CacheMap_collectOutputDescrs___closed__0));
v___x_1529_ = lean_array_get_size(v_a_1521_);
v___x_1538_ = lean_array_get_size(v_buckets_1523_);
v___x_1539_ = lean_nat_dec_lt(v___x_1527_, v___x_1538_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; 
lean_dec_ref(v_buckets_1523_);
lean_inc_ref(v_a_1521_);
v___x_1540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1528_);
lean_ctor_set(v___x_1540_, 1, v_a_1521_);
v___y_1531_ = v___x_1540_;
v_a_1532_ = v_a_1521_;
goto v___jp_1530_;
}
else
{
size_t v___x_1541_; size_t v___x_1542_; lean_object* v___x_1543_; 
v___x_1541_ = ((size_t)0ULL);
v___x_1542_ = lean_usize_of_nat(v___x_1538_);
v___x_1543_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_buckets_1523_, v___x_1541_, v___x_1542_, v___x_1528_, v_a_1521_);
lean_dec_ref(v_buckets_1523_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 1);
lean_inc(v_a_1544_);
v___y_1531_ = v___x_1543_;
v_a_1532_ = v_a_1544_;
goto v___jp_1530_;
}
else
{
lean_del_object(v___x_1525_);
return v___x_1543_;
}
}
v___jp_1530_:
{
lean_object* v___x_1533_; uint8_t v___x_1534_; 
v___x_1533_ = lean_array_get_size(v_a_1532_);
v___x_1534_ = lean_nat_dec_eq(v___x_1529_, v___x_1533_);
if (v___x_1534_ == 0)
{
lean_object* v___x_1536_; 
lean_dec_ref(v___y_1531_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set_tag(v___x_1525_, 1);
lean_ctor_set(v___x_1525_, 1, v_a_1532_);
lean_ctor_set(v___x_1525_, 0, v___x_1529_);
v___x_1536_ = v___x_1525_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1529_);
lean_ctor_set(v_reuseFailAlloc_1537_, 1, v_a_1532_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
else
{
lean_dec_ref(v_a_1532_);
lean_del_object(v___x_1525_);
return v___y_1531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs___boxed(lean_object* v_map_1547_, lean_object* v_a_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l_Lake_CacheMap_collectOutputDescrs(v_map_1547_, v_a_1548_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk(lean_object* v_init_1551_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = lean_st_mk_ref(v_init_1551_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk___boxed(lean_object* v_init_1554_, lean_object* v___y_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Lake_CacheRef_mk(v_init_1554_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f(uint64_t v_inputHash_1557_, lean_object* v_cache_1558_){
_start:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1560_ = lean_st_ref_take(v_cache_1558_);
v___x_1561_ = l_Lake_CacheMap_get_x3f(v_inputHash_1557_, v___x_1560_);
v___x_1562_ = lean_st_ref_put(v_cache_1558_, v___x_1560_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f___boxed(lean_object* v_inputHash_1563_, lean_object* v_cache_1564_, lean_object* v___y_1565_){
_start:
{
uint64_t v_inputHash_boxed_1566_; lean_object* v_res_1567_; 
v_inputHash_boxed_1566_ = lean_unbox_uint64(v_inputHash_1563_);
lean_dec_ref(v_inputHash_1563_);
v_res_1567_ = l_Lake_CacheRef_get_x3f(v_inputHash_boxed_1566_, v_cache_1564_);
lean_dec(v_cache_1564_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg(lean_object* v_inst_1568_, uint64_t v_inputHash_1569_, lean_object* v_val_1570_, lean_object* v_cache_1571_, uint8_t v_platformIndependent_1572_){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1574_ = lean_st_ref_take(v_cache_1571_);
v___x_1575_ = lean_apply_1(v_inst_1568_, v_val_1570_);
v___x_1576_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1569_, v___x_1575_, v___x_1574_, v_platformIndependent_1572_);
v___x_1577_ = lean_st_ref_put(v_cache_1571_, v___x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg___boxed(lean_object* v_inst_1578_, lean_object* v_inputHash_1579_, lean_object* v_val_1580_, lean_object* v_cache_1581_, lean_object* v_platformIndependent_1582_, lean_object* v___y_1583_){
_start:
{
uint64_t v_inputHash_boxed_1584_; uint8_t v_platformIndependent_boxed_1585_; lean_object* v_res_1586_; 
v_inputHash_boxed_1584_ = lean_unbox_uint64(v_inputHash_1579_);
lean_dec_ref(v_inputHash_1579_);
v_platformIndependent_boxed_1585_ = lean_unbox(v_platformIndependent_1582_);
v_res_1586_ = l_Lake_CacheRef_insert___redArg(v_inst_1578_, v_inputHash_boxed_1584_, v_val_1580_, v_cache_1581_, v_platformIndependent_boxed_1585_);
lean_dec(v_cache_1581_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert(lean_object* v_00_u03b1_1587_, lean_object* v_inst_1588_, uint64_t v_inputHash_1589_, lean_object* v_val_1590_, lean_object* v_cache_1591_, uint8_t v_platformIndependent_1592_){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1594_ = lean_st_ref_take(v_cache_1591_);
v___x_1595_ = lean_apply_1(v_inst_1588_, v_val_1590_);
v___x_1596_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1589_, v___x_1595_, v___x_1594_, v_platformIndependent_1592_);
v___x_1597_ = lean_st_ref_put(v_cache_1591_, v___x_1596_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___boxed(lean_object* v_00_u03b1_1598_, lean_object* v_inst_1599_, lean_object* v_inputHash_1600_, lean_object* v_val_1601_, lean_object* v_cache_1602_, lean_object* v_platformIndependent_1603_, lean_object* v___y_1604_){
_start:
{
uint64_t v_inputHash_boxed_1605_; uint8_t v_platformIndependent_boxed_1606_; lean_object* v_res_1607_; 
v_inputHash_boxed_1605_ = lean_unbox_uint64(v_inputHash_1600_);
lean_dec_ref(v_inputHash_1600_);
v_platformIndependent_boxed_1606_ = lean_unbox(v_platformIndependent_1603_);
v_res_1607_ = l_Lake_CacheRef_insert(v_00_u03b1_1598_, v_inst_1599_, v_inputHash_boxed_1605_, v_val_1601_, v_cache_1602_, v_platformIndependent_boxed_1606_);
lean_dec(v_cache_1602_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString(lean_object* v_s_1610_){
_start:
{
lean_inc_ref(v_s_1610_);
return v_s_1610_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString___boxed(lean_object* v_s_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Lake_CacheServiceName_ofString(v_s_1611_);
lean_dec_ref(v_s_1611_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString(lean_object* v_self_1613_){
_start:
{
lean_inc_ref(v_self_1613_);
return v_self_1613_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString___boxed(lean_object* v_self_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l_Lake_CacheServiceName_toString(v_self_1614_);
lean_dec_ref(v_self_1614_);
return v_res_1615_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_fromJson_x3f(lean_object* v_j_1618_){
_start:
{
lean_object* v___x_1619_; 
v___x_1619_ = l_Lean_Json_getStr_x3f(v_j_1618_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1627_; 
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1622_ = v___x_1619_;
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1619_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1623_ == 0)
{
v___x_1625_ = v___x_1622_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
v_a_1628_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1619_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1619_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_toJson(lean_object* v_self_1638_){
_start:
{
lean_object* v___x_1639_; 
v___x_1639_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1639_, 0, v_self_1638_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(lean_object* v_x_1642_){
_start:
{
if (lean_obj_tag(v_x_1642_) == 0)
{
lean_object* v___x_1643_; 
v___x_1643_ = lean_unsigned_to_nat(0u);
return v___x_1643_;
}
else
{
lean_object* v___x_1644_; 
v___x_1644_ = lean_unsigned_to_nat(1u);
return v___x_1644_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx___boxed(lean_object* v_x_1645_){
_start:
{
lean_object* v_res_1646_; 
v_res_1646_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(v_x_1645_);
lean_dec_ref(v_x_1645_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(lean_object* v_t_1647_, lean_object* v_k_1648_){
_start:
{
lean_object* v_s_1649_; lean_object* v___x_1650_; 
v_s_1649_ = lean_ctor_get(v_t_1647_, 0);
lean_inc_ref(v_s_1649_);
lean_dec_ref(v_t_1647_);
v___x_1650_ = lean_apply_1(v_k_1648_, v_s_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(lean_object* v_motive_1651_, lean_object* v_ctorIdx_1652_, lean_object* v_t_1653_, lean_object* v_h_1654_, lean_object* v_k_1655_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1653_, v_k_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___boxed(lean_object* v_motive_1657_, lean_object* v_ctorIdx_1658_, lean_object* v_t_1659_, lean_object* v_h_1660_, lean_object* v_k_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(v_motive_1657_, v_ctorIdx_1658_, v_t_1659_, v_h_1660_, v_k_1661_);
lean_dec(v_ctorIdx_1658_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim___redArg(lean_object* v_t_1663_, lean_object* v_str_1664_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1663_, v_str_1664_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim(lean_object* v_motive_1666_, lean_object* v_t_1667_, lean_object* v_h_1668_, lean_object* v_str_1669_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1667_, v_str_1669_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim___redArg(lean_object* v_t_1671_, lean_object* v_repo_1672_){
_start:
{
lean_object* v___x_1673_; 
v___x_1673_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1671_, v_repo_1672_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim(lean_object* v_motive_1674_, lean_object* v_t_1675_, lean_object* v_h_1676_, lean_object* v_repo_1677_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1675_, v_repo_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofString(lean_object* v_s_1679_){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1680_, 0, v_s_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofRepo(lean_object* v_fullName_1681_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1682_, 0, v_fullName_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheServiceScope_isRepo(lean_object* v_self_1683_){
_start:
{
if (lean_obj_tag(v_self_1683_) == 1)
{
uint8_t v___x_1684_; 
v___x_1684_ = 1;
return v___x_1684_;
}
else
{
uint8_t v___x_1685_; 
v___x_1685_ = 0;
return v___x_1685_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_isRepo___boxed(lean_object* v_self_1686_){
_start:
{
uint8_t v_res_1687_; lean_object* v_r_1688_; 
v_res_1687_ = l_Lake_CacheServiceScope_isRepo(v_self_1686_);
lean_dec_ref(v_self_1686_);
v_r_1688_ = lean_box(v_res_1687_);
return v_r_1688_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString(lean_object* v_self_1689_){
_start:
{
lean_object* v_s_1690_; 
v_s_1690_ = lean_ctor_get(v_self_1689_, 0);
lean_inc_ref(v_s_1690_);
return v_s_1690_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString___boxed(lean_object* v_self_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lake_CacheServiceScope_toString(v_self_1691_);
lean_dec_ref(v_self_1691_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(lean_object* v_self_1695_){
_start:
{
lean_object* v_s_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1703_; 
v_s_1696_ = lean_ctor_get(v_self_1695_, 0);
v_isSharedCheck_1703_ = !lean_is_exclusive(v_self_1695_);
if (v_isSharedCheck_1703_ == 0)
{
v___x_1698_ = v_self_1695_;
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_s_1696_);
lean_dec(v_self_1695_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1703_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1701_; 
if (v_isShared_1699_ == 0)
{
lean_ctor_set_tag(v___x_1698_, 3);
v___x_1701_ = v___x_1698_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1702_; 
v_reuseFailAlloc_1702_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1702_, 0, v_s_1696_);
v___x_1701_ = v_reuseFailAlloc_1702_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
return v___x_1701_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_ofData(lean_object* v_data_1713_){
_start:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1714_ = lean_box(0);
v___x_1715_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1715_, 0, v_data_1713_);
lean_ctor_set(v___x_1715_, 1, v___x_1714_);
lean_ctor_set(v___x_1715_, 2, v___x_1714_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(lean_object* v_x_1716_){
_start:
{
if (lean_obj_tag(v_x_1716_) == 0)
{
lean_object* v___x_1717_; 
v___x_1717_ = lean_box(0);
return v___x_1717_;
}
else
{
lean_object* v_val_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
v_val_1718_ = lean_ctor_get(v_x_1716_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v_x_1716_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v_x_1716_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_val_1718_);
lean_dec(v_x_1716_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
lean_ctor_set_tag(v___x_1720_, 3);
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_val_1718_);
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
static lean_object* _init_l_Lake_CacheOutput_toJson___closed__3(void){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1730_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__2));
v___x_1731_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__1));
v___x_1732_ = lean_box(1);
v___x_1733_ = l_Lake_JsonObject_insertJson(v___x_1732_, v___x_1731_, v___x_1730_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_toJson(lean_object* v_out_1737_){
_start:
{
lean_object* v_data_1738_; lean_object* v_service_x3f_1739_; lean_object* v_scope_x3f_1740_; lean_object* v_obj_1742_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v_obj_1749_; 
v_data_1738_ = lean_ctor_get(v_out_1737_, 0);
lean_inc(v_data_1738_);
v_service_x3f_1739_ = lean_ctor_get(v_out_1737_, 1);
lean_inc(v_service_x3f_1739_);
v_scope_x3f_1740_ = lean_ctor_get(v_out_1737_, 2);
lean_inc(v_scope_x3f_1740_);
lean_dec_ref(v_out_1737_);
v___x_1746_ = lean_obj_once(&l_Lake_CacheOutput_toJson___closed__3, &l_Lake_CacheOutput_toJson___closed__3_once, _init_l_Lake_CacheOutput_toJson___closed__3);
v___x_1747_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__4));
v___x_1748_ = l_Lean_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(v_service_x3f_1739_);
v_obj_1749_ = l_Lake_JsonObject_insertJson(v___x_1746_, v___x_1747_, v___x_1748_);
if (lean_obj_tag(v_scope_x3f_1740_) == 1)
{
lean_object* v_val_1750_; lean_object* v___y_1752_; uint8_t v___x_1755_; 
v_val_1750_ = lean_ctor_get(v_scope_x3f_1740_, 0);
lean_inc(v_val_1750_);
lean_dec_ref_known(v_scope_x3f_1740_, 1);
v___x_1755_ = l_Lake_CacheServiceScope_isRepo(v_val_1750_);
if (v___x_1755_ == 0)
{
lean_object* v___x_1756_; 
v___x_1756_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__5));
v___y_1752_ = v___x_1756_;
goto v___jp_1751_;
}
else
{
lean_object* v___x_1757_; 
v___x_1757_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__6));
v___y_1752_ = v___x_1757_;
goto v___jp_1751_;
}
v___jp_1751_:
{
lean_object* v___x_1753_; lean_object* v_obj_1754_; 
v___x_1753_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(v_val_1750_);
lean_inc_ref(v___y_1752_);
v_obj_1754_ = l_Lake_JsonObject_insertJson(v_obj_1749_, v___y_1752_, v___x_1753_);
v_obj_1742_ = v_obj_1754_;
goto v___jp_1741_;
}
}
else
{
lean_dec(v_scope_x3f_1740_);
v_obj_1742_ = v_obj_1749_;
goto v___jp_1741_;
}
v___jp_1741_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1743_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_1744_ = l_Lake_JsonObject_insertJson(v_obj_1742_, v___x_1743_, v_data_1738_);
v___x_1745_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1744_);
return v___x_1745_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(lean_object* v_x_1762_){
_start:
{
if (lean_obj_tag(v_x_1762_) == 0)
{
lean_object* v___x_1763_; 
v___x_1763_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0));
return v___x_1763_;
}
else
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Lean_Json_getStr_x3f(v_x_1762_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1772_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1767_ = v___x_1764_;
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1764_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1768_ == 0)
{
v___x_1770_ = v___x_1767_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1765_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1781_; 
v_a_1773_ = lean_ctor_get(v___x_1764_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1775_ = v___x_1764_;
v_isShared_1776_ = v_isSharedCheck_1781_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1764_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1781_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1777_; lean_object* v___x_1779_; 
v___x_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1777_, 0, v_a_1773_);
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 0, v___x_1777_);
v___x_1779_ = v___x_1775_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v___x_1777_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(lean_object* v_x_1782_){
_start:
{
if (lean_obj_tag(v_x_1782_) == 0)
{
lean_object* v___x_1783_; 
v___x_1783_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0));
return v___x_1783_;
}
else
{
lean_object* v___x_1784_; 
v___x_1784_ = l_Lean_Json_getStr_x3f(v_x_1782_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
v_a_1785_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1787_ = v___x_1784_;
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1784_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_a_1785_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1801_; 
v_a_1793_ = lean_ctor_get(v___x_1784_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1784_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1795_ = v___x_1784_;
v_isShared_1796_ = v_isSharedCheck_1801_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1784_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1801_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1797_; lean_object* v___x_1799_; 
v___x_1797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1797_, 0, v_a_1793_);
if (v_isShared_1796_ == 0)
{
lean_ctor_set(v___x_1795_, 0, v___x_1797_);
v___x_1799_ = v___x_1795_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(lean_object* v_k_1802_, lean_object* v_t_1803_){
_start:
{
if (lean_obj_tag(v_t_1803_) == 0)
{
lean_object* v_k_1804_; lean_object* v_l_1805_; lean_object* v_r_1806_; uint8_t v___x_1807_; 
v_k_1804_ = lean_ctor_get(v_t_1803_, 1);
v_l_1805_ = lean_ctor_get(v_t_1803_, 3);
v_r_1806_ = lean_ctor_get(v_t_1803_, 4);
v___x_1807_ = lean_string_compare(v_k_1802_, v_k_1804_);
switch(v___x_1807_)
{
case 0:
{
v_t_1803_ = v_l_1805_;
goto _start;
}
case 1:
{
uint8_t v___x_1809_; 
v___x_1809_ = 1;
return v___x_1809_;
}
default: 
{
v_t_1803_ = v_r_1806_;
goto _start;
}
}
}
else
{
uint8_t v___x_1811_; 
v___x_1811_ = 0;
return v___x_1811_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg___boxed(lean_object* v_k_1812_, lean_object* v_t_1813_){
_start:
{
uint8_t v_res_1814_; lean_object* v_r_1815_; 
v_res_1814_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v_k_1812_, v_t_1813_);
lean_dec(v_t_1813_);
lean_dec_ref(v_k_1812_);
v_r_1815_ = lean_box(v_res_1814_);
return v_r_1815_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_fromJson_x3f(lean_object* v_json_1822_){
_start:
{
if (lean_obj_tag(v_json_1822_) == 5)
{
lean_object* v_kvPairs_1827_; lean_object* v___x_1828_; uint8_t v___x_1829_; 
v_kvPairs_1827_ = lean_ctor_get(v_json_1822_, 0);
v___x_1828_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__1));
v___x_1829_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v___x_1828_, v_kvPairs_1827_);
if (v___x_1829_ == 0)
{
goto v___jp_1823_;
}
else
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_inc(v_kvPairs_1827_);
lean_dec_ref_known(v_json_1822_, 1);
v___x_1830_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_1831_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1827_, v___x_1830_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v___x_1832_; 
lean_dec(v_kvPairs_1827_);
v___x_1832_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__1));
return v___x_1832_;
}
else
{
lean_object* v_val_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1951_; 
v_val_1833_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1835_ = v___x_1831_;
v_isShared_1836_ = v_isSharedCheck_1951_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_val_1833_);
lean_dec(v___x_1831_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1951_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___y_1838_; lean_object* v_a_1839_; lean_object* v___y_1845_; lean_object* v___y_1848_; lean_object* v_a_1888_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1927_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__4));
v___x_1928_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1827_, v___x_1927_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v___x_1929_; 
v___x_1929_ = lean_box(0);
v_a_1888_ = v___x_1929_;
goto v___jp_1887_;
}
else
{
lean_object* v_val_1930_; lean_object* v___x_1931_; 
v_val_1930_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_val_1930_);
lean_dec_ref_known(v___x_1928_, 1);
v___x_1931_ = l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(v_val_1930_);
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1941_; 
lean_del_object(v___x_1835_);
lean_dec(v_val_1833_);
lean_dec(v_kvPairs_1827_);
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1934_ = v___x_1931_;
v_isShared_1935_ = v_isSharedCheck_1941_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1931_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1941_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1939_; 
v___x_1936_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__4));
v___x_1937_ = lean_string_append(v___x_1936_, v_a_1932_);
lean_dec(v_a_1932_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 0, v___x_1937_);
v___x_1939_ = v___x_1934_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1937_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
else
{
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
lean_del_object(v___x_1835_);
lean_dec(v_val_1833_);
lean_dec(v_kvPairs_1827_);
v_a_1942_ = lean_ctor_get(v___x_1931_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1931_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1931_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
lean_ctor_set_tag(v___x_1944_, 0);
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
else
{
lean_object* v_a_1950_; 
v_a_1950_ = lean_ctor_get(v___x_1931_, 0);
lean_inc(v_a_1950_);
lean_dec_ref_known(v___x_1931_, 1);
v_a_1888_ = v_a_1950_;
goto v___jp_1887_;
}
}
}
v___jp_1837_:
{
lean_object* v___x_1840_; lean_object* v___x_1842_; 
v___x_1840_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1840_, 0, v_val_1833_);
lean_ctor_set(v___x_1840_, 1, v___y_1838_);
lean_ctor_set(v___x_1840_, 2, v_a_1839_);
if (v_isShared_1836_ == 0)
{
lean_ctor_set(v___x_1835_, 0, v___x_1840_);
v___x_1842_ = v___x_1835_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1840_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
v___jp_1844_:
{
lean_object* v___x_1846_; 
v___x_1846_ = lean_box(0);
v___y_1838_ = v___y_1845_;
v_a_1839_ = v___x_1846_;
goto v___jp_1837_;
}
v___jp_1847_:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1849_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__5));
v___x_1850_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1827_, v___x_1849_);
lean_dec(v_kvPairs_1827_);
if (lean_obj_tag(v___x_1850_) == 0)
{
v___y_1845_ = v___y_1848_;
goto v___jp_1844_;
}
else
{
lean_object* v_val_1851_; lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1886_; 
v_val_1851_ = lean_ctor_get(v___x_1850_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1850_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1853_ = v___x_1850_;
v_isShared_1854_ = v_isSharedCheck_1886_;
goto v_resetjp_1852_;
}
else
{
lean_inc(v_val_1851_);
lean_dec(v___x_1850_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1886_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v___x_1855_; 
v___x_1855_ = l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(v_val_1851_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1865_; 
lean_del_object(v___x_1853_);
lean_dec(v___y_1848_);
lean_del_object(v___x_1835_);
lean_dec(v_val_1833_);
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1858_ = v___x_1855_;
v_isShared_1859_ = v_isSharedCheck_1865_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1855_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1865_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1863_; 
v___x_1860_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__2));
v___x_1861_ = lean_string_append(v___x_1860_, v_a_1856_);
lean_dec(v_a_1856_);
if (v_isShared_1859_ == 0)
{
lean_ctor_set(v___x_1858_, 0, v___x_1861_);
v___x_1863_ = v___x_1858_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1861_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
else
{
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
lean_del_object(v___x_1853_);
lean_dec(v___y_1848_);
lean_del_object(v___x_1835_);
lean_dec(v_val_1833_);
v_a_1866_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1868_ = v___x_1855_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1855_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
lean_ctor_set_tag(v___x_1868_, 0);
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1866_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
else
{
lean_object* v_a_1874_; 
v_a_1874_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_a_1874_);
lean_dec_ref_known(v___x_1855_, 1);
if (lean_obj_tag(v_a_1874_) == 1)
{
lean_object* v_val_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1885_; 
v_val_1875_ = lean_ctor_get(v_a_1874_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v_a_1874_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1877_ = v_a_1874_;
v_isShared_1878_ = v_isSharedCheck_1885_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_val_1875_);
lean_dec(v_a_1874_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1885_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1854_ == 0)
{
lean_ctor_set_tag(v___x_1853_, 0);
lean_ctor_set(v___x_1853_, 0, v_val_1875_);
v___x_1880_ = v___x_1853_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_val_1875_);
v___x_1880_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
lean_object* v___x_1882_; 
if (v_isShared_1878_ == 0)
{
lean_ctor_set(v___x_1877_, 0, v___x_1880_);
v___x_1882_ = v___x_1877_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v___x_1880_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
v___y_1838_ = v___y_1848_;
v_a_1839_ = v___x_1882_;
goto v___jp_1837_;
}
}
}
}
else
{
lean_dec(v_a_1874_);
lean_del_object(v___x_1853_);
v___y_1845_ = v___y_1848_;
goto v___jp_1844_;
}
}
}
}
}
}
v___jp_1887_:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1889_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__6));
v___x_1890_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1827_, v___x_1889_);
if (lean_obj_tag(v___x_1890_) == 0)
{
v___y_1848_ = v_a_1888_;
goto v___jp_1847_;
}
else
{
lean_object* v_val_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1926_; 
v_val_1891_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1893_ = v___x_1890_;
v_isShared_1894_ = v_isSharedCheck_1926_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_val_1891_);
lean_dec(v___x_1890_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1926_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(v_val_1891_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1905_; 
lean_del_object(v___x_1893_);
lean_dec(v_a_1888_);
lean_del_object(v___x_1835_);
lean_dec(v_val_1833_);
lean_dec(v_kvPairs_1827_);
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1898_ = v___x_1895_;
v_isShared_1899_ = v_isSharedCheck_1905_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1895_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1905_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1903_; 
v___x_1900_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__3));
v___x_1901_ = lean_string_append(v___x_1900_, v_a_1896_);
lean_dec(v_a_1896_);
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 0, v___x_1901_);
v___x_1903_ = v___x_1898_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1901_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
else
{
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
lean_del_object(v___x_1893_);
lean_dec(v_a_1888_);
lean_del_object(v___x_1835_);
lean_dec(v_val_1833_);
lean_dec(v_kvPairs_1827_);
v_a_1906_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1895_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1895_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
lean_ctor_set_tag(v___x_1908_, 0);
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
else
{
lean_object* v_a_1914_; 
v_a_1914_ = lean_ctor_get(v___x_1895_, 0);
lean_inc(v_a_1914_);
lean_dec_ref_known(v___x_1895_, 1);
if (lean_obj_tag(v_a_1914_) == 1)
{
lean_object* v_val_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1925_; 
lean_dec(v_kvPairs_1827_);
v_val_1915_ = lean_ctor_get(v_a_1914_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v_a_1914_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1917_ = v_a_1914_;
v_isShared_1918_ = v_isSharedCheck_1925_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_val_1915_);
lean_dec(v_a_1914_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1925_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 0, v_val_1915_);
v___x_1920_ = v___x_1893_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_val_1915_);
v___x_1920_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
lean_object* v___x_1922_; 
if (v_isShared_1918_ == 0)
{
lean_ctor_set(v___x_1917_, 0, v___x_1920_);
v___x_1922_ = v___x_1917_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v___x_1920_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
v___y_1838_ = v_a_1888_;
v_a_1839_ = v___x_1922_;
goto v___jp_1837_;
}
}
}
}
else
{
lean_dec(v_a_1914_);
lean_del_object(v___x_1893_);
v___y_1848_ = v_a_1888_;
goto v___jp_1847_;
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
goto v___jp_1823_;
}
v___jp_1823_:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1824_ = lean_box(0);
v___x_1825_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1825_, 0, v_json_1822_);
lean_ctor_set(v___x_1825_, 1, v___x_1824_);
lean_ctor_set(v___x_1825_, 2, v___x_1824_);
v___x_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
return v___x_1826_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(lean_object* v_00_u03b2_1952_, lean_object* v_k_1953_, lean_object* v_t_1954_){
_start:
{
uint8_t v___x_1955_; 
v___x_1955_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v_k_1953_, v_t_1954_);
return v___x_1955_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___boxed(lean_object* v_00_u03b2_1956_, lean_object* v_k_1957_, lean_object* v_t_1958_){
_start:
{
uint8_t v_res_1959_; lean_object* v_r_1960_; 
v_res_1959_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(v_00_u03b2_1956_, v_k_1957_, v_t_1958_);
lean_dec(v_t_1958_);
lean_dec_ref(v_k_1957_);
v_r_1960_ = lean_box(v_res_1959_);
return v_r_1960_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactDir(lean_object* v_cache_1967_){
_start:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1968_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_1969_ = l_System_FilePath_join(v_cache_1967_, v___x_1968_);
return v___x_1969_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath(lean_object* v_cache_1971_, uint64_t v_contentHash_1972_, lean_object* v_ext_1973_){
_start:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; uint8_t v___x_1978_; 
v___x_1974_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_1975_ = l_System_FilePath_join(v_cache_1971_, v___x_1974_);
v___x_1976_ = lean_string_utf8_byte_size(v_ext_1973_);
v___x_1977_ = lean_unsigned_to_nat(0u);
v___x_1978_ = lean_nat_dec_eq(v___x_1976_, v___x_1977_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1979_ = l_Lake_lowerHexUInt64(v_contentHash_1972_);
v___x_1980_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_1981_ = lean_string_append(v___x_1979_, v___x_1980_);
v___x_1982_ = lean_string_append(v___x_1981_, v_ext_1973_);
v___x_1983_ = l_System_FilePath_join(v___x_1975_, v___x_1982_);
return v___x_1983_;
}
else
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = l_Lake_lowerHexUInt64(v_contentHash_1972_);
v___x_1985_ = l_System_FilePath_join(v___x_1975_, v___x_1984_);
return v___x_1985_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath___boxed(lean_object* v_cache_1986_, lean_object* v_contentHash_1987_, lean_object* v_ext_1988_){
_start:
{
uint64_t v_contentHash_boxed_1989_; lean_object* v_res_1990_; 
v_contentHash_boxed_1989_ = lean_unbox_uint64(v_contentHash_1987_);
lean_dec_ref(v_contentHash_1987_);
v_res_1990_ = l_Lake_Cache_artifactPath(v_cache_1986_, v_contentHash_boxed_1989_, v_ext_1988_);
lean_dec_ref(v_ext_1988_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f(lean_object* v_cache_1991_, lean_object* v_descr_1992_){
_start:
{
uint64_t v_hash_1994_; lean_object* v_ext_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___y_1999_; lean_object* v___x_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; 
v_hash_1994_ = lean_ctor_get_uint64(v_descr_1992_, sizeof(void*)*1);
v_ext_1995_ = lean_ctor_get(v_descr_1992_, 0);
v___x_1996_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_1997_ = l_System_FilePath_join(v_cache_1991_, v___x_1996_);
v___x_2013_ = lean_string_utf8_byte_size(v_ext_1995_);
v___x_2014_ = lean_unsigned_to_nat(0u);
v___x_2015_ = lean_nat_dec_eq(v___x_2013_, v___x_2014_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2016_ = l_Lake_lowerHexUInt64(v_hash_1994_);
v___x_2017_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2018_ = lean_string_append(v___x_2016_, v___x_2017_);
v___x_2019_ = lean_string_append(v___x_2018_, v_ext_1995_);
v___y_1999_ = v___x_2019_;
goto v___jp_1998_;
}
else
{
lean_object* v___x_2020_; 
v___x_2020_ = l_Lake_lowerHexUInt64(v_hash_1994_);
v___y_1999_ = v___x_2020_;
goto v___jp_1998_;
}
v___jp_1998_:
{
lean_object* v_path_2000_; lean_object* v___x_2001_; 
v_path_2000_ = l_System_FilePath_join(v___x_1997_, v___y_1999_);
v___x_2001_ = lean_io_metadata(v_path_2000_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2011_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2004_ = v___x_2001_;
v_isShared_2005_ = v_isSharedCheck_2011_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_a_2002_);
lean_dec(v___x_2001_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2011_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v_modified_2006_; lean_object* v___x_2007_; lean_object* v___x_2009_; 
v_modified_2006_ = lean_ctor_get(v_a_2002_, 1);
lean_inc_ref(v_modified_2006_);
lean_dec(v_a_2002_);
lean_inc_ref(v_path_2000_);
v___x_2007_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2007_, 0, v_descr_1992_);
lean_ctor_set(v___x_2007_, 1, v_path_2000_);
lean_ctor_set(v___x_2007_, 2, v_path_2000_);
lean_ctor_set(v___x_2007_, 3, v_modified_2006_);
if (v_isShared_2005_ == 0)
{
lean_ctor_set_tag(v___x_2004_, 1);
lean_ctor_set(v___x_2004_, 0, v___x_2007_);
v___x_2009_ = v___x_2004_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2007_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
else
{
lean_object* v___x_2012_; 
lean_dec_ref_known(v___x_2001_, 1);
lean_dec_ref(v_path_2000_);
lean_dec_ref(v_descr_1992_);
v___x_2012_ = lean_box(0);
return v___x_2012_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f___boxed(lean_object* v_cache_2021_, lean_object* v_descr_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l_Lake_Cache_getArtifact_x3f(v_cache_2021_, v_descr_2022_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact(lean_object* v_cache_2027_, lean_object* v_descr_2028_){
_start:
{
uint64_t v_hash_2030_; lean_object* v_ext_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___y_2035_; lean_object* v___x_2064_; lean_object* v___x_2065_; uint8_t v___x_2066_; 
v_hash_2030_ = lean_ctor_get_uint64(v_descr_2028_, sizeof(void*)*1);
v_ext_2031_ = lean_ctor_get(v_descr_2028_, 0);
v___x_2032_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2033_ = l_System_FilePath_join(v_cache_2027_, v___x_2032_);
v___x_2064_ = lean_string_utf8_byte_size(v_ext_2031_);
v___x_2065_ = lean_unsigned_to_nat(0u);
v___x_2066_ = lean_nat_dec_eq(v___x_2064_, v___x_2065_);
if (v___x_2066_ == 0)
{
lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2067_ = l_Lake_lowerHexUInt64(v_hash_2030_);
v___x_2068_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2069_ = lean_string_append(v___x_2067_, v___x_2068_);
v___x_2070_ = lean_string_append(v___x_2069_, v_ext_2031_);
v___y_2035_ = v___x_2070_;
goto v___jp_2034_;
}
else
{
lean_object* v___x_2071_; 
v___x_2071_ = l_Lake_lowerHexUInt64(v_hash_2030_);
v___y_2035_ = v___x_2071_;
goto v___jp_2034_;
}
v___jp_2034_:
{
lean_object* v_path_2036_; lean_object* v___x_2037_; 
v_path_2036_ = l_System_FilePath_join(v___x_2033_, v___y_2035_);
v___x_2037_ = lean_io_metadata(v_path_2036_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2047_; 
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2047_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2047_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v_modified_2042_; lean_object* v___x_2043_; lean_object* v___x_2045_; 
v_modified_2042_ = lean_ctor_get(v_a_2038_, 1);
lean_inc_ref(v_modified_2042_);
lean_dec(v_a_2038_);
lean_inc_ref(v_path_2036_);
v___x_2043_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2043_, 0, v_descr_2028_);
lean_ctor_set(v___x_2043_, 1, v_path_2036_);
lean_ctor_set(v___x_2043_, 2, v_path_2036_);
lean_ctor_set(v___x_2043_, 3, v_modified_2042_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v___x_2043_);
v___x_2045_ = v___x_2040_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
else
{
lean_object* v_a_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2063_; 
lean_dec_ref(v_descr_2028_);
v_a_2048_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2050_ = v___x_2037_;
v_isShared_2051_ = v_isSharedCheck_2063_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_a_2048_);
lean_dec(v___x_2037_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2063_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
if (lean_obj_tag(v_a_2048_) == 11)
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2055_; 
lean_dec_ref_known(v_a_2048_, 2);
v___x_2052_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__0));
v___x_2053_ = lean_string_append(v___x_2052_, v_path_2036_);
lean_dec_ref(v_path_2036_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2053_);
v___x_2055_ = v___x_2050_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v___x_2053_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
else
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2061_; 
lean_dec_ref(v_path_2036_);
v___x_2057_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__1));
v___x_2058_ = lean_io_error_to_string(v_a_2048_);
v___x_2059_ = lean_string_append(v___x_2057_, v___x_2058_);
lean_dec_ref(v___x_2058_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2059_);
v___x_2061_ = v___x_2050_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact___boxed(lean_object* v_cache_2072_, lean_object* v_descr_2073_, lean_object* v___y_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_Lake_Cache_getArtifact(v_cache_2072_, v_descr_2073_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsDir(lean_object* v_cache_2077_){
_start:
{
lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2078_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2079_ = l_System_FilePath_join(v_cache_2077_, v___x_2078_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile(lean_object* v_cache_2081_, lean_object* v_scope_2082_, uint64_t v_inputHash_2083_){
_start:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2084_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2085_ = l_System_FilePath_join(v_cache_2081_, v___x_2084_);
v___x_2086_ = l_System_FilePath_join(v___x_2085_, v_scope_2082_);
v___x_2087_ = l_Lake_lowerHexUInt64(v_inputHash_2083_);
v___x_2088_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2089_ = lean_string_append(v___x_2087_, v___x_2088_);
v___x_2090_ = l_System_FilePath_join(v___x_2086_, v___x_2089_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile___boxed(lean_object* v_cache_2091_, lean_object* v_scope_2092_, lean_object* v_inputHash_2093_){
_start:
{
uint64_t v_inputHash_boxed_2094_; lean_object* v_res_2095_; 
v_inputHash_boxed_2094_ = lean_unbox_uint64(v_inputHash_2093_);
lean_dec_ref(v_inputHash_2093_);
v_res_2095_ = l_Lake_Cache_outputsFile(v_cache_2091_, v_scope_2092_, v_inputHash_boxed_2094_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(lean_object* v_cache_2096_, lean_object* v_scope_2097_, uint64_t v_inputHash_2098_, lean_object* v_out_2099_, lean_object* v_service_x3f_2100_, lean_object* v_remoteScope_x3f_2101_, uint8_t v_overwrite_2102_){
_start:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v_file_2110_; lean_object* v___x_2111_; 
v___x_2104_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2105_ = l_System_FilePath_join(v_cache_2096_, v___x_2104_);
v___x_2106_ = l_System_FilePath_join(v___x_2105_, v_scope_2097_);
v___x_2107_ = l_Lake_lowerHexUInt64(v_inputHash_2098_);
v___x_2108_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2109_ = lean_string_append(v___x_2107_, v___x_2108_);
v_file_2110_ = l_System_FilePath_join(v___x_2106_, v___x_2109_);
lean_inc_ref(v_file_2110_);
v___x_2111_ = l_Lake_createParentDirs(v_file_2110_);
if (lean_obj_tag(v___x_2111_) == 0)
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; 
lean_dec_ref_known(v___x_2111_, 1);
v___x_2112_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2112_, 0, v_out_2099_);
lean_ctor_set(v___x_2112_, 1, v_service_x3f_2100_);
lean_ctor_set(v___x_2112_, 2, v_remoteScope_x3f_2101_);
v___x_2113_ = l_Lake_CacheOutput_toJson(v___x_2112_);
v___x_2114_ = lean_unsigned_to_nat(80u);
v___x_2115_ = l_Lean_Json_pretty(v___x_2113_, v___x_2114_);
if (v_overwrite_2102_ == 0)
{
lean_object* v___x_2116_; 
v___x_2116_ = l_Lake_writeFileIfNew(v_file_2110_, v___x_2115_);
lean_dec_ref(v___x_2115_);
lean_dec_ref(v_file_2110_);
return v___x_2116_;
}
else
{
lean_object* v___x_2117_; 
v___x_2117_ = l_IO_FS_writeFile(v_file_2110_, v___x_2115_);
lean_dec_ref(v___x_2115_);
lean_dec_ref(v_file_2110_);
return v___x_2117_;
}
}
else
{
lean_dec_ref(v_file_2110_);
lean_dec(v_remoteScope_x3f_2101_);
lean_dec(v_service_x3f_2100_);
lean_dec(v_out_2099_);
return v___x_2111_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore___boxed(lean_object* v_cache_2118_, lean_object* v_scope_2119_, lean_object* v_inputHash_2120_, lean_object* v_out_2121_, lean_object* v_service_x3f_2122_, lean_object* v_remoteScope_x3f_2123_, lean_object* v_overwrite_2124_, lean_object* v___y_2125_){
_start:
{
uint64_t v_inputHash_boxed_2126_; uint8_t v_overwrite_boxed_2127_; lean_object* v_res_2128_; 
v_inputHash_boxed_2126_ = lean_unbox_uint64(v_inputHash_2120_);
lean_dec_ref(v_inputHash_2120_);
v_overwrite_boxed_2127_ = lean_unbox(v_overwrite_2124_);
v_res_2128_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2118_, v_scope_2119_, v_inputHash_boxed_2126_, v_out_2121_, v_service_x3f_2122_, v_remoteScope_x3f_2123_, v_overwrite_boxed_2127_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg(lean_object* v_inst_2129_, lean_object* v_cache_2130_, lean_object* v_scope_2131_, uint64_t v_inputHash_2132_, lean_object* v_outputs_2133_, lean_object* v_service_x3f_2134_, lean_object* v_remoteScope_x3f_2135_, uint8_t v_overwrite_2136_){
_start:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = lean_apply_1(v_inst_2129_, v_outputs_2133_);
v___x_2139_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2130_, v_scope_2131_, v_inputHash_2132_, v___x_2138_, v_service_x3f_2134_, v_remoteScope_x3f_2135_, v_overwrite_2136_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg___boxed(lean_object* v_inst_2140_, lean_object* v_cache_2141_, lean_object* v_scope_2142_, lean_object* v_inputHash_2143_, lean_object* v_outputs_2144_, lean_object* v_service_x3f_2145_, lean_object* v_remoteScope_x3f_2146_, lean_object* v_overwrite_2147_, lean_object* v___y_2148_){
_start:
{
uint64_t v_inputHash_boxed_2149_; uint8_t v_overwrite_boxed_2150_; lean_object* v_res_2151_; 
v_inputHash_boxed_2149_ = lean_unbox_uint64(v_inputHash_2143_);
lean_dec_ref(v_inputHash_2143_);
v_overwrite_boxed_2150_ = lean_unbox(v_overwrite_2147_);
v_res_2151_ = l_Lake_Cache_writeOutputs___redArg(v_inst_2140_, v_cache_2141_, v_scope_2142_, v_inputHash_boxed_2149_, v_outputs_2144_, v_service_x3f_2145_, v_remoteScope_x3f_2146_, v_overwrite_boxed_2150_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs(lean_object* v_00_u03b1_2152_, lean_object* v_inst_2153_, lean_object* v_cache_2154_, lean_object* v_scope_2155_, uint64_t v_inputHash_2156_, lean_object* v_outputs_2157_, lean_object* v_service_x3f_2158_, lean_object* v_remoteScope_x3f_2159_, uint8_t v_overwrite_2160_){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2162_ = lean_apply_1(v_inst_2153_, v_outputs_2157_);
v___x_2163_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2154_, v_scope_2155_, v_inputHash_2156_, v___x_2162_, v_service_x3f_2158_, v_remoteScope_x3f_2159_, v_overwrite_2160_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___boxed(lean_object* v_00_u03b1_2164_, lean_object* v_inst_2165_, lean_object* v_cache_2166_, lean_object* v_scope_2167_, lean_object* v_inputHash_2168_, lean_object* v_outputs_2169_, lean_object* v_service_x3f_2170_, lean_object* v_remoteScope_x3f_2171_, lean_object* v_overwrite_2172_, lean_object* v___y_2173_){
_start:
{
uint64_t v_inputHash_boxed_2174_; uint8_t v_overwrite_boxed_2175_; lean_object* v_res_2176_; 
v_inputHash_boxed_2174_ = lean_unbox_uint64(v_inputHash_2168_);
lean_dec_ref(v_inputHash_2168_);
v_overwrite_boxed_2175_ = lean_unbox(v_overwrite_2172_);
v_res_2176_ = l_Lake_Cache_writeOutputs(v_00_u03b1_2164_, v_inst_2165_, v_cache_2166_, v_scope_2167_, v_inputHash_boxed_2174_, v_outputs_2169_, v_service_x3f_2170_, v_remoteScope_x3f_2171_, v_overwrite_boxed_2175_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(lean_object* v_cache_2177_, lean_object* v_scope_2178_, lean_object* v_service_x3f_2179_, lean_object* v_remoteScope_x3f_2180_, uint8_t v_overwrite_2181_, lean_object* v_x_2182_, lean_object* v_x_2183_){
_start:
{
if (lean_obj_tag(v_x_2183_) == 0)
{
lean_object* v___x_2185_; 
lean_dec(v_remoteScope_x3f_2180_);
lean_dec(v_service_x3f_2179_);
lean_dec_ref(v_scope_2178_);
lean_dec_ref(v_cache_2177_);
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v_x_2182_);
return v___x_2185_;
}
else
{
lean_object* v_value_2186_; lean_object* v_key_2187_; lean_object* v_tail_2188_; lean_object* v_out_2189_; uint64_t v___x_2190_; lean_object* v___x_2191_; 
v_value_2186_ = lean_ctor_get(v_x_2183_, 1);
lean_inc(v_value_2186_);
v_key_2187_ = lean_ctor_get(v_x_2183_, 0);
lean_inc(v_key_2187_);
v_tail_2188_ = lean_ctor_get(v_x_2183_, 2);
lean_inc(v_tail_2188_);
lean_dec_ref_known(v_x_2183_, 3);
v_out_2189_ = lean_ctor_get(v_value_2186_, 0);
lean_inc(v_out_2189_);
lean_dec(v_value_2186_);
v___x_2190_ = lean_unbox_uint64(v_key_2187_);
lean_dec(v_key_2187_);
lean_inc(v_remoteScope_x3f_2180_);
lean_inc(v_service_x3f_2179_);
lean_inc_ref(v_scope_2178_);
lean_inc_ref(v_cache_2177_);
v___x_2191_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2177_, v_scope_2178_, v___x_2190_, v_out_2189_, v_service_x3f_2179_, v_remoteScope_x3f_2180_, v_overwrite_2181_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_object* v_a_2192_; 
v_a_2192_ = lean_ctor_get(v___x_2191_, 0);
lean_inc(v_a_2192_);
lean_dec_ref_known(v___x_2191_, 1);
v_x_2182_ = v_a_2192_;
v_x_2183_ = v_tail_2188_;
goto _start;
}
else
{
lean_dec(v_tail_2188_);
lean_dec(v_remoteScope_x3f_2180_);
lean_dec(v_service_x3f_2179_);
lean_dec_ref(v_scope_2178_);
lean_dec_ref(v_cache_2177_);
return v___x_2191_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0___boxed(lean_object* v_cache_2194_, lean_object* v_scope_2195_, lean_object* v_service_x3f_2196_, lean_object* v_remoteScope_x3f_2197_, lean_object* v_overwrite_2198_, lean_object* v_x_2199_, lean_object* v_x_2200_, lean_object* v___y_2201_){
_start:
{
uint8_t v_overwrite_boxed_2202_; lean_object* v_res_2203_; 
v_overwrite_boxed_2202_ = lean_unbox(v_overwrite_2198_);
v_res_2203_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(v_cache_2194_, v_scope_2195_, v_service_x3f_2196_, v_remoteScope_x3f_2197_, v_overwrite_boxed_2202_, v_x_2199_, v_x_2200_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(lean_object* v_cache_2204_, lean_object* v_scope_2205_, lean_object* v_service_x3f_2206_, lean_object* v_remoteScope_x3f_2207_, uint8_t v_overwrite_2208_, lean_object* v_as_2209_, size_t v_i_2210_, size_t v_stop_2211_, lean_object* v_b_2212_){
_start:
{
uint8_t v___x_2214_; 
v___x_2214_ = lean_usize_dec_eq(v_i_2210_, v_stop_2211_);
if (v___x_2214_ == 0)
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2215_ = lean_array_uget_borrowed(v_as_2209_, v_i_2210_);
v___x_2216_ = lean_box(0);
lean_inc(v___x_2215_);
lean_inc(v_remoteScope_x3f_2207_);
lean_inc(v_service_x3f_2206_);
lean_inc_ref(v_scope_2205_);
lean_inc_ref(v_cache_2204_);
v___x_2217_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(v_cache_2204_, v_scope_2205_, v_service_x3f_2206_, v_remoteScope_x3f_2207_, v_overwrite_2208_, v___x_2216_, v___x_2215_);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v_a_2218_; size_t v___x_2219_; size_t v___x_2220_; 
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
lean_inc(v_a_2218_);
lean_dec_ref_known(v___x_2217_, 1);
v___x_2219_ = ((size_t)1ULL);
v___x_2220_ = lean_usize_add(v_i_2210_, v___x_2219_);
v_i_2210_ = v___x_2220_;
v_b_2212_ = v_a_2218_;
goto _start;
}
else
{
lean_dec(v_remoteScope_x3f_2207_);
lean_dec(v_service_x3f_2206_);
lean_dec_ref(v_scope_2205_);
lean_dec_ref(v_cache_2204_);
return v___x_2217_;
}
}
else
{
lean_object* v___x_2222_; 
lean_dec(v_remoteScope_x3f_2207_);
lean_dec(v_service_x3f_2206_);
lean_dec_ref(v_scope_2205_);
lean_dec_ref(v_cache_2204_);
v___x_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2222_, 0, v_b_2212_);
return v___x_2222_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1___boxed(lean_object* v_cache_2223_, lean_object* v_scope_2224_, lean_object* v_service_x3f_2225_, lean_object* v_remoteScope_x3f_2226_, lean_object* v_overwrite_2227_, lean_object* v_as_2228_, lean_object* v_i_2229_, lean_object* v_stop_2230_, lean_object* v_b_2231_, lean_object* v___y_2232_){
_start:
{
uint8_t v_overwrite_boxed_2233_; size_t v_i_boxed_2234_; size_t v_stop_boxed_2235_; lean_object* v_res_2236_; 
v_overwrite_boxed_2233_ = lean_unbox(v_overwrite_2227_);
v_i_boxed_2234_ = lean_unbox_usize(v_i_2229_);
lean_dec(v_i_2229_);
v_stop_boxed_2235_ = lean_unbox_usize(v_stop_2230_);
lean_dec(v_stop_2230_);
v_res_2236_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2223_, v_scope_2224_, v_service_x3f_2225_, v_remoteScope_x3f_2226_, v_overwrite_boxed_2233_, v_as_2228_, v_i_boxed_2234_, v_stop_boxed_2235_, v_b_2231_);
lean_dec_ref(v_as_2228_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap(lean_object* v_cache_2237_, lean_object* v_scope_2238_, lean_object* v_map_2239_, lean_object* v_service_x3f_2240_, lean_object* v_remoteScope_x3f_2241_, uint8_t v_overwrite_2242_){
_start:
{
lean_object* v_buckets_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; uint8_t v___x_2248_; 
v_buckets_2244_ = lean_ctor_get(v_map_2239_, 1);
v___x_2245_ = lean_unsigned_to_nat(0u);
v___x_2246_ = lean_array_get_size(v_buckets_2244_);
v___x_2247_ = lean_box(0);
v___x_2248_ = lean_nat_dec_lt(v___x_2245_, v___x_2246_);
if (v___x_2248_ == 0)
{
lean_object* v___x_2249_; 
lean_dec(v_remoteScope_x3f_2241_);
lean_dec(v_service_x3f_2240_);
lean_dec_ref(v_scope_2238_);
lean_dec_ref(v_cache_2237_);
v___x_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2247_);
return v___x_2249_;
}
else
{
size_t v___x_2250_; size_t v___x_2251_; lean_object* v___x_2252_; 
v___x_2250_ = ((size_t)0ULL);
v___x_2251_ = lean_usize_of_nat(v___x_2246_);
v___x_2252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2237_, v_scope_2238_, v_service_x3f_2240_, v_remoteScope_x3f_2241_, v_overwrite_2242_, v_buckets_2244_, v___x_2250_, v___x_2251_, v___x_2247_);
return v___x_2252_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap___boxed(lean_object* v_cache_2253_, lean_object* v_scope_2254_, lean_object* v_map_2255_, lean_object* v_service_x3f_2256_, lean_object* v_remoteScope_x3f_2257_, lean_object* v_overwrite_2258_, lean_object* v___y_2259_){
_start:
{
uint8_t v_overwrite_boxed_2260_; lean_object* v_res_2261_; 
v_overwrite_boxed_2260_ = lean_unbox(v_overwrite_2258_);
v_res_2261_ = l_Lake_Cache_writeMap(v_cache_2253_, v_scope_2254_, v_map_2255_, v_service_x3f_2256_, v_remoteScope_x3f_2257_, v_overwrite_boxed_2260_);
lean_dec_ref(v_map_2255_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f(lean_object* v_cache_2264_, lean_object* v_scope_2265_, uint64_t v_inputHash_2266_, lean_object* v_a_2267_){
_start:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v_path_2275_; lean_object* v___x_2276_; 
v___x_2269_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2270_ = l_System_FilePath_join(v_cache_2264_, v___x_2269_);
v___x_2271_ = l_System_FilePath_join(v___x_2270_, v_scope_2265_);
v___x_2272_ = l_Lake_lowerHexUInt64(v_inputHash_2266_);
v___x_2273_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2274_ = lean_string_append(v___x_2272_, v___x_2273_);
v_path_2275_ = l_System_FilePath_join(v___x_2271_, v___x_2274_);
v___x_2276_ = l_IO_FS_readFile(v_path_2275_);
if (lean_obj_tag(v___x_2276_) == 0)
{
lean_object* v_a_2277_; lean_object* v_a_2279_; lean_object* v___x_2288_; 
v_a_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2277_);
lean_dec_ref_known(v___x_2276_, 1);
v___x_2288_ = l_Lean_Json_parse(v_a_2277_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_object* v_a_2289_; 
v_a_2289_ = lean_ctor_get(v___x_2288_, 0);
lean_inc(v_a_2289_);
lean_dec_ref_known(v___x_2288_, 1);
v_a_2279_ = v_a_2289_;
goto v___jp_2278_;
}
else
{
lean_object* v_a_2290_; lean_object* v___x_2291_; 
v_a_2290_ = lean_ctor_get(v___x_2288_, 0);
lean_inc(v_a_2290_);
lean_dec_ref_known(v___x_2288_, 1);
v___x_2291_ = l_Lake_CacheOutput_fromJson_x3f(v_a_2290_);
if (lean_obj_tag(v___x_2291_) == 0)
{
lean_object* v_a_2292_; 
v_a_2292_ = lean_ctor_get(v___x_2291_, 0);
lean_inc(v_a_2292_);
lean_dec_ref_known(v___x_2291_, 1);
v_a_2279_ = v_a_2292_;
goto v___jp_2278_;
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2301_; 
lean_dec_ref(v_path_2275_);
v_a_2293_ = lean_ctor_get(v___x_2291_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2291_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2295_ = v___x_2291_;
v_isShared_2296_ = v_isSharedCheck_2301_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2291_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2301_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
lean_object* v___x_2299_; 
v___x_2299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
lean_ctor_set(v___x_2299_, 1, v_a_2267_);
return v___x_2299_;
}
}
}
}
v___jp_2278_:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; uint8_t v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2280_ = ((lean_object*)(l_Lake_Cache_readOutputs_x3f___closed__0));
v___x_2281_ = lean_string_append(v_path_2275_, v___x_2280_);
v___x_2282_ = lean_string_append(v___x_2281_, v_a_2279_);
lean_dec_ref(v_a_2279_);
v___x_2283_ = 3;
v___x_2284_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2284_, 0, v___x_2282_);
lean_ctor_set_uint8(v___x_2284_, sizeof(void*)*1, v___x_2283_);
v___x_2285_ = lean_array_get_size(v_a_2267_);
v___x_2286_ = lean_array_push(v_a_2267_, v___x_2284_);
v___x_2287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2285_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
return v___x_2287_;
}
}
else
{
lean_object* v_a_2302_; 
v_a_2302_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2302_);
lean_dec_ref_known(v___x_2276_, 1);
if (lean_obj_tag(v_a_2302_) == 11)
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
lean_dec_ref_known(v_a_2302_, 2);
lean_dec_ref(v_path_2275_);
v___x_2303_ = lean_box(0);
v___x_2304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
lean_ctor_set(v___x_2304_, 1, v_a_2267_);
return v___x_2304_;
}
else
{
lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; uint8_t v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2305_ = ((lean_object*)(l_Lake_Cache_readOutputs_x3f___closed__1));
v___x_2306_ = lean_string_append(v_path_2275_, v___x_2305_);
v___x_2307_ = lean_io_error_to_string(v_a_2302_);
v___x_2308_ = lean_string_append(v___x_2306_, v___x_2307_);
lean_dec_ref(v___x_2307_);
v___x_2309_ = 3;
v___x_2310_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2310_, 0, v___x_2308_);
lean_ctor_set_uint8(v___x_2310_, sizeof(void*)*1, v___x_2309_);
v___x_2311_ = lean_array_get_size(v_a_2267_);
v___x_2312_ = lean_array_push(v_a_2267_, v___x_2310_);
v___x_2313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2311_);
lean_ctor_set(v___x_2313_, 1, v___x_2312_);
return v___x_2313_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f___boxed(lean_object* v_cache_2314_, lean_object* v_scope_2315_, lean_object* v_inputHash_2316_, lean_object* v_a_2317_, lean_object* v___y_2318_){
_start:
{
uint64_t v_inputHash_boxed_2319_; lean_object* v_res_2320_; 
v_inputHash_boxed_2319_ = lean_unbox_uint64(v_inputHash_2316_);
lean_dec_ref(v_inputHash_2316_);
v_res_2320_ = l_Lake_Cache_readOutputs_x3f(v_cache_2314_, v_scope_2315_, v_inputHash_boxed_2319_, v_a_2317_);
return v_res_2320_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_revisionDir(lean_object* v_cache_2322_){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_2324_ = l_System_FilePath_join(v_cache_2322_, v___x_2323_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_revisionPath(lean_object* v_cache_2326_, lean_object* v_scope_2327_, lean_object* v_rev_2328_){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2329_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_2330_ = l_System_FilePath_join(v_cache_2326_, v___x_2329_);
v___x_2331_ = l_System_FilePath_join(v___x_2330_, v_scope_2327_);
v___x_2332_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_2333_ = lean_string_append(v_rev_2328_, v___x_2332_);
v___x_2334_ = l_System_FilePath_join(v___x_2331_, v___x_2333_);
return v___x_2334_;
}
}
LEAN_EXPORT uint8_t l_Lake_CachePlatform_isNone(lean_object* v_self_2336_){
_start:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; uint8_t v___x_2339_; 
v___x_2337_ = lean_string_utf8_byte_size(v_self_2336_);
v___x_2338_ = lean_unsigned_to_nat(0u);
v___x_2339_ = lean_nat_dec_eq(v___x_2337_, v___x_2338_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_isNone___boxed(lean_object* v_self_2340_){
_start:
{
uint8_t v_res_2341_; lean_object* v_r_2342_; 
v_res_2341_ = l_Lake_CachePlatform_isNone(v_self_2340_);
lean_dec_ref(v_self_2340_);
v_r_2342_ = lean_box(v_res_2341_);
return v_r_2342_;
}
}
static lean_object* _init_l_Lake_CachePlatform_system(void){
_start:
{
lean_object* v___x_2343_; 
v___x_2343_ = l_System_Platform_target;
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString(lean_object* v_s_2344_){
_start:
{
lean_inc_ref(v_s_2344_);
return v_s_2344_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString___boxed(lean_object* v_s_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l_Lake_CachePlatform_ofString(v_s_2345_);
lean_dec_ref(v_s_2345_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(lean_object* v___x_2347_, lean_object* v___x_2348_, lean_object* v_a_2349_, lean_object* v_b_2350_){
_start:
{
uint8_t v_decide_2351_; 
v_decide_2351_ = lean_nat_dec_eq(v_a_2349_, v___x_2347_);
if (v_decide_2351_ == 0)
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___x_2352_ = lean_string_utf8_next_fast(v___x_2348_, v_a_2349_);
lean_dec(v_a_2349_);
v___x_2353_ = lean_unsigned_to_nat(1u);
v___x_2354_ = lean_nat_add(v_b_2350_, v___x_2353_);
lean_dec(v_b_2350_);
v_a_2349_ = v___x_2352_;
v_b_2350_ = v___x_2354_;
goto _start;
}
else
{
lean_dec(v_a_2349_);
return v_b_2350_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg___boxed(lean_object* v___x_2356_, lean_object* v___x_2357_, lean_object* v_a_2358_, lean_object* v_b_2359_){
_start:
{
lean_object* v_res_2360_; 
v_res_2360_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2356_, v___x_2357_, v_a_2358_, v_b_2359_);
lean_dec_ref(v___x_2357_);
lean_dec(v___x_2356_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length(lean_object* v_self_2361_){
_start:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2362_ = lean_unsigned_to_nat(0u);
v___x_2363_ = lean_string_utf8_byte_size(v_self_2361_);
v___x_2364_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2363_, v_self_2361_, v___x_2362_, v___x_2362_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length___boxed(lean_object* v_self_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l_Lake_CachePlatform_length(v_self_2365_);
lean_dec_ref(v_self_2365_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0(lean_object* v___x_2367_, lean_object* v___x_2368_, lean_object* v___x_2369_, lean_object* v_inst_2370_, lean_object* v_R_2371_, lean_object* v_a_2372_, lean_object* v_b_2373_, lean_object* v_c_2374_){
_start:
{
lean_object* v___x_2375_; 
v___x_2375_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2367_, v___x_2369_, v_a_2372_, v_b_2373_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___boxed(lean_object* v___x_2376_, lean_object* v___x_2377_, lean_object* v___x_2378_, lean_object* v_inst_2379_, lean_object* v_R_2380_, lean_object* v_a_2381_, lean_object* v_b_2382_, lean_object* v_c_2383_){
_start:
{
lean_object* v_res_2384_; 
v_res_2384_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0(v___x_2376_, v___x_2377_, v___x_2378_, v_inst_2379_, v_R_2380_, v_a_2381_, v_b_2382_, v_c_2383_);
lean_dec_ref(v___x_2378_);
lean_dec_ref(v___x_2377_);
lean_dec(v___x_2376_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString(lean_object* v_self_2386_){
_start:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; uint8_t v___x_2389_; 
v___x_2387_ = lean_string_utf8_byte_size(v_self_2386_);
v___x_2388_ = lean_unsigned_to_nat(0u);
v___x_2389_ = lean_nat_dec_eq(v___x_2387_, v___x_2388_);
if (v___x_2389_ == 0)
{
lean_inc_ref(v_self_2386_);
return v_self_2386_;
}
else
{
lean_object* v___x_2390_; 
v___x_2390_ = ((lean_object*)(l_Lake_CachePlatform_toString___closed__0));
return v___x_2390_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString___boxed(lean_object* v_self_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l_Lake_CachePlatform_toString(v_self_2391_);
lean_dec_ref(v_self_2391_);
return v_res_2392_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheToolchain_isNone(lean_object* v_self_2396_){
_start:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; 
v___x_2397_ = lean_string_utf8_byte_size(v_self_2396_);
v___x_2398_ = lean_unsigned_to_nat(0u);
v___x_2399_ = lean_nat_dec_eq(v___x_2397_, v___x_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_isNone___boxed(lean_object* v_self_2400_){
_start:
{
uint8_t v_res_2401_; lean_object* v_r_2402_; 
v_res_2401_ = l_Lake_CacheToolchain_isNone(v_self_2400_);
lean_dec_ref(v_self_2400_);
v_r_2402_ = lean_box(v_res_2401_);
return v_r_2402_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofString(lean_object* v_s_2403_){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = l_Lake_normalizeToolchain(v_s_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain(lean_object* v_s_2405_){
_start:
{
lean_inc_ref(v_s_2405_);
return v_s_2405_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain___boxed(lean_object* v_s_2406_){
_start:
{
lean_object* v_res_2407_; 
v_res_2407_ = l_Lake_CacheToolchain_ofElanToolchain(v_s_2406_);
lean_dec_ref(v_s_2406_);
return v_res_2407_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length(lean_object* v_self_2408_){
_start:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; 
v___x_2409_ = lean_unsigned_to_nat(0u);
v___x_2410_ = lean_string_utf8_byte_size(v_self_2408_);
v___x_2411_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2410_, v_self_2408_, v___x_2409_, v___x_2409_);
return v___x_2411_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length___boxed(lean_object* v_self_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l_Lake_CacheToolchain_length(v_self_2412_);
lean_dec_ref(v_self_2412_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString(lean_object* v_self_2414_){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; uint8_t v___x_2417_; 
v___x_2415_ = lean_string_utf8_byte_size(v_self_2414_);
v___x_2416_ = lean_unsigned_to_nat(0u);
v___x_2417_ = lean_nat_dec_eq(v___x_2415_, v___x_2416_);
if (v___x_2417_ == 0)
{
lean_inc_ref(v_self_2414_);
return v_self_2414_;
}
else
{
lean_object* v___x_2418_; 
v___x_2418_ = ((lean_object*)(l_Lake_CachePlatform_toString___closed__0));
return v___x_2418_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString___boxed(lean_object* v_self_2419_){
_start:
{
lean_object* v_res_2420_; 
v_res_2420_ = l_Lake_CacheToolchain_toString(v_self_2419_);
lean_dec_ref(v_self_2419_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore(uint64_t v_hash_2426_, lean_object* v_url_2427_, lean_object* v_path_2428_, lean_object* v_a_2429_){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc_ref(v_path_2428_);
v___x_2432_ = l_Lake_download(v_url_2427_, v_path_2428_, v___x_2431_, v_a_2429_);
if (lean_obj_tag(v___x_2432_) == 0)
{
lean_object* v_a_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2475_; 
v_a_2433_ = lean_ctor_get(v___x_2432_, 1);
v_isSharedCheck_2475_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2475_ == 0)
{
lean_object* v_unused_2476_; 
v_unused_2476_ = lean_ctor_get(v___x_2432_, 0);
lean_dec(v_unused_2476_);
v___x_2435_ = v___x_2432_;
v_isShared_2436_ = v_isSharedCheck_2475_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_a_2433_);
lean_dec(v___x_2432_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2475_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2437_; 
v___x_2437_ = l_Lake_computeBinFileHash(v_path_2428_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; uint64_t v___x_2439_; uint8_t v___x_2440_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref_known(v___x_2437_, 1);
v___x_2439_ = lean_unbox_uint64(v_a_2438_);
v___x_2440_ = lean_uint64_dec_eq(v___x_2439_, v_hash_2426_);
if (v___x_2440_ == 0)
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; uint64_t v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; uint8_t v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2441_ = lean_array_get_size(v_a_2433_);
v___x_2442_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__1));
lean_inc_ref(v_path_2428_);
v___x_2443_ = lean_string_append(v_path_2428_, v___x_2442_);
v___x_2444_ = lean_unbox_uint64(v_a_2438_);
lean_dec(v_a_2438_);
v___x_2445_ = l_Lake_lowerHexUInt64(v___x_2444_);
v___x_2446_ = lean_string_append(v___x_2443_, v___x_2445_);
lean_dec_ref(v___x_2445_);
v___x_2447_ = 3;
v___x_2448_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2448_, 0, v___x_2446_);
lean_ctor_set_uint8(v___x_2448_, sizeof(void*)*1, v___x_2447_);
v___x_2449_ = lean_array_push(v_a_2433_, v___x_2448_);
v___x_2450_ = lean_io_remove_file(v_path_2428_);
lean_dec_ref(v_path_2428_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v___x_2452_; 
lean_dec_ref_known(v___x_2450_, 1);
if (v_isShared_2436_ == 0)
{
lean_ctor_set_tag(v___x_2435_, 1);
lean_ctor_set(v___x_2435_, 1, v___x_2449_);
lean_ctor_set(v___x_2435_, 0, v___x_2441_);
v___x_2452_ = v___x_2435_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v___x_2441_);
lean_ctor_set(v_reuseFailAlloc_2453_, 1, v___x_2449_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
else
{
lean_object* v_a_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2460_; 
v_a_2454_ = lean_ctor_get(v___x_2450_, 0);
lean_inc(v_a_2454_);
lean_dec_ref_known(v___x_2450_, 1);
v___x_2455_ = lean_io_error_to_string(v_a_2454_);
v___x_2456_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2456_, 0, v___x_2455_);
lean_ctor_set_uint8(v___x_2456_, sizeof(void*)*1, v___x_2447_);
v___x_2457_ = lean_array_get_size(v___x_2449_);
v___x_2458_ = lean_array_push(v___x_2449_, v___x_2456_);
if (v_isShared_2436_ == 0)
{
lean_ctor_set_tag(v___x_2435_, 1);
lean_ctor_set(v___x_2435_, 1, v___x_2458_);
lean_ctor_set(v___x_2435_, 0, v___x_2457_);
v___x_2460_ = v___x_2435_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v___x_2457_);
lean_ctor_set(v_reuseFailAlloc_2461_, 1, v___x_2458_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
return v___x_2460_;
}
}
}
else
{
lean_object* v___x_2462_; lean_object* v___x_2464_; 
lean_dec(v_a_2438_);
lean_dec_ref(v_path_2428_);
v___x_2462_ = lean_box(0);
if (v_isShared_2436_ == 0)
{
lean_ctor_set(v___x_2435_, 0, v___x_2462_);
v___x_2464_ = v___x_2435_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v___x_2462_);
lean_ctor_set(v_reuseFailAlloc_2465_, 1, v_a_2433_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2467_; uint8_t v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2473_; 
lean_dec_ref(v_path_2428_);
v_a_2466_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2466_);
lean_dec_ref_known(v___x_2437_, 1);
v___x_2467_ = lean_io_error_to_string(v_a_2466_);
v___x_2468_ = 3;
v___x_2469_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2469_, 0, v___x_2467_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*1, v___x_2468_);
v___x_2470_ = lean_array_get_size(v_a_2433_);
v___x_2471_ = lean_array_push(v_a_2433_, v___x_2469_);
if (v_isShared_2436_ == 0)
{
lean_ctor_set_tag(v___x_2435_, 1);
lean_ctor_set(v___x_2435_, 1, v___x_2471_);
lean_ctor_set(v___x_2435_, 0, v___x_2470_);
v___x_2473_ = v___x_2435_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v___x_2470_);
lean_ctor_set(v_reuseFailAlloc_2474_, 1, v___x_2471_);
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
else
{
lean_dec_ref(v_path_2428_);
return v___x_2432_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore___boxed(lean_object* v_hash_2477_, lean_object* v_url_2478_, lean_object* v_path_2479_, lean_object* v_a_2480_, lean_object* v___y_2481_){
_start:
{
uint64_t v_hash_boxed_2482_; lean_object* v_res_2483_; 
v_hash_boxed_2482_ = lean_unbox_uint64(v_hash_2477_);
lean_dec_ref(v_hash_2477_);
v_res_2483_ = l_Lake_downloadArtifactCore(v_hash_boxed_2482_, v_url_2478_, v_path_2479_, v_a_2480_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(lean_object* v_x_2486_){
_start:
{
if (lean_obj_tag(v_x_2486_) == 0)
{
lean_object* v___x_2487_; 
v___x_2487_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0));
return v___x_2487_;
}
else
{
lean_object* v___x_2488_; 
v___x_2488_ = l_Lean_Json_getNat_x3f(v_x_2486_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v_a_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2496_; 
v_a_2489_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2491_ = v___x_2488_;
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_a_2489_);
lean_dec(v___x_2488_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2494_; 
if (v_isShared_2492_ == 0)
{
v___x_2494_ = v___x_2491_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_a_2489_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
else
{
lean_object* v_a_2497_; lean_object* v___x_2499_; uint8_t v_isShared_2500_; uint8_t v_isSharedCheck_2505_; 
v_a_2497_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2499_ = v___x_2488_;
v_isShared_2500_ = v_isSharedCheck_2505_;
goto v_resetjp_2498_;
}
else
{
lean_inc(v_a_2497_);
lean_dec(v___x_2488_);
v___x_2499_ = lean_box(0);
v_isShared_2500_ = v_isSharedCheck_2505_;
goto v_resetjp_2498_;
}
v_resetjp_2498_:
{
lean_object* v___x_2501_; lean_object* v___x_2503_; 
v___x_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2501_, 0, v_a_2497_);
if (v_isShared_2500_ == 0)
{
lean_ctor_set(v___x_2499_, 0, v___x_2501_);
v___x_2503_ = v___x_2499_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v___x_2501_);
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
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21(void){
_start:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2528_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_2529_ = lean_unsigned_to_nat(14u);
v___x_2530_ = lean_mk_empty_array_with_capacity(v___x_2529_);
v___x_2531_ = lean_array_push(v___x_2530_, v___x_2528_);
return v___x_2531_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2532_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_2533_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21);
v___x_2534_ = lean_array_push(v___x_2533_, v___x_2532_);
return v___x_2534_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2535_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_2536_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22);
v___x_2537_ = lean_array_push(v___x_2536_, v___x_2535_);
return v___x_2537_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24(void){
_start:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2538_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13));
v___x_2539_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23);
v___x_2540_ = lean_array_push(v___x_2539_, v___x_2538_);
return v___x_2540_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25(void){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2541_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14));
v___x_2542_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24);
v___x_2543_ = lean_array_push(v___x_2542_, v___x_2541_);
return v___x_2543_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26(void){
_start:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2544_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15));
v___x_2545_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25);
v___x_2546_ = lean_array_push(v___x_2545_, v___x_2544_);
return v___x_2546_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28(void){
_start:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2549_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_2550_ = lean_array_get_size(v___x_2549_);
return v___x_2550_;
}
}
static uint8_t _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29(void){
_start:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; uint8_t v___x_2553_; 
v___x_2551_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28);
v___x_2552_ = lean_unsigned_to_nat(0u);
v___x_2553_ = lean_nat_dec_lt(v___x_2552_, v___x_2551_);
return v___x_2553_;
}
}
static size_t _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30(void){
_start:
{
lean_object* v___x_2554_; size_t v___x_2555_; 
v___x_2554_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28);
v___x_2555_ = lean_usize_of_nat(v___x_2554_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3(lean_object* v_file_2558_, lean_object* v_contentType_2559_, lean_object* v_url_2560_, lean_object* v_key_2561_, lean_object* v___y_2562_){
_start:
{
lean_object* v_stderr_2565_; lean_object* v_a_2566_; lean_object* v_stderr_2578_; lean_object* v___y_2587_; lean_object* v___y_2590_; lean_object* v_a_2591_; lean_object* v___y_2618_; lean_object* v_a_2619_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v_a_2644_; lean_object* v_a_2658_; lean_object* v___x_2707_; lean_object* v_val_2709_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2707_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_2715_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_2716_ = lean_io_getenv(v___x_2715_);
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v___x_2717_; 
v___x_2717_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v_val_2709_ = v___x_2717_;
goto v___jp_2708_;
}
else
{
lean_object* v_val_2718_; 
v_val_2718_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_val_2718_);
lean_dec_ref_known(v___x_2716_, 1);
v_val_2709_ = v_val_2718_;
goto v___jp_2708_;
}
v___jp_2564_:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; uint8_t v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2567_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0));
v___x_2568_ = lean_string_append(v___x_2567_, v_a_2566_);
lean_dec_ref(v_a_2566_);
v___x_2569_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_2570_ = lean_string_append(v___x_2568_, v___x_2569_);
v___x_2571_ = lean_string_append(v___x_2570_, v_stderr_2565_);
lean_dec_ref(v_stderr_2565_);
v___x_2572_ = 3;
v___x_2573_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2573_, 0, v___x_2571_);
lean_ctor_set_uint8(v___x_2573_, sizeof(void*)*1, v___x_2572_);
lean_inc_ref(v___y_2562_);
v___x_2574_ = lean_apply_2(v___y_2562_, v___x_2573_, lean_box(0));
v___x_2575_ = lean_box(0);
v___x_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
return v___x_2576_;
}
v___jp_2577_:
{
lean_object* v___x_2579_; lean_object* v___x_2580_; uint8_t v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2579_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2));
v___x_2580_ = lean_string_append(v___x_2579_, v_stderr_2578_);
lean_dec_ref(v_stderr_2578_);
v___x_2581_ = 3;
v___x_2582_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2582_, 0, v___x_2580_);
lean_ctor_set_uint8(v___x_2582_, sizeof(void*)*1, v___x_2581_);
lean_inc_ref(v___y_2562_);
v___x_2583_ = lean_apply_2(v___y_2562_, v___x_2582_, lean_box(0));
v___x_2584_ = lean_box(0);
v___x_2585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2584_);
return v___x_2585_;
}
v___jp_2586_:
{
lean_object* v_stderr_2588_; 
v_stderr_2588_ = lean_ctor_get(v___y_2587_, 1);
lean_inc_ref(v_stderr_2588_);
lean_dec_ref(v___y_2587_);
v_stderr_2578_ = v_stderr_2588_;
goto v___jp_2577_;
}
v___jp_2589_:
{
if (lean_obj_tag(v_a_2591_) == 0)
{
v___y_2587_ = v___y_2590_;
goto v___jp_2586_;
}
else
{
lean_object* v_val_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2616_; 
v_val_2592_ = lean_ctor_get(v_a_2591_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v_a_2591_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2594_ = v_a_2591_;
v_isShared_2595_ = v_isSharedCheck_2616_;
goto v_resetjp_2593_;
}
else
{
lean_inc(v_val_2592_);
lean_dec(v_a_2591_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2616_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
lean_object* v___x_2596_; uint8_t v___x_2597_; 
v___x_2596_ = lean_unsigned_to_nat(200u);
v___x_2597_ = lean_nat_dec_eq(v_val_2592_, v___x_2596_);
if (v___x_2597_ == 0)
{
lean_object* v_stdout_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; uint8_t v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2610_; 
v_stdout_2598_ = lean_ctor_get(v___y_2590_, 0);
lean_inc_ref(v_stdout_2598_);
lean_dec_ref(v___y_2590_);
v___x_2599_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3));
v___x_2600_ = l_Nat_reprFast(v_val_2592_);
v___x_2601_ = lean_string_append(v___x_2599_, v___x_2600_);
lean_dec_ref(v___x_2600_);
v___x_2602_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_2603_ = lean_string_append(v___x_2601_, v___x_2602_);
v___x_2604_ = lean_string_append(v___x_2603_, v_stdout_2598_);
lean_dec_ref(v_stdout_2598_);
v___x_2605_ = 3;
v___x_2606_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2606_, 0, v___x_2604_);
lean_ctor_set_uint8(v___x_2606_, sizeof(void*)*1, v___x_2605_);
lean_inc_ref(v___y_2562_);
v___x_2607_ = lean_apply_2(v___y_2562_, v___x_2606_, lean_box(0));
v___x_2608_ = lean_box(0);
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
else
{
lean_object* v___x_2612_; lean_object* v___x_2614_; 
lean_dec(v_val_2592_);
lean_dec_ref(v___y_2590_);
v___x_2612_ = lean_box(0);
if (v_isShared_2595_ == 0)
{
lean_ctor_set_tag(v___x_2594_, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2612_);
v___x_2614_ = v___x_2594_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v___x_2612_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
return v___x_2614_;
}
}
}
}
}
v___jp_2617_:
{
lean_object* v_stderr_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; uint8_t v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v_stderr_2620_ = lean_ctor_get(v___y_2618_, 1);
lean_inc_ref(v_stderr_2620_);
lean_dec_ref(v___y_2618_);
v___x_2621_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_2622_ = lean_string_append(v___x_2621_, v_a_2619_);
lean_dec_ref(v_a_2619_);
v___x_2623_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_2624_ = lean_string_append(v___x_2622_, v___x_2623_);
v___x_2625_ = lean_string_append(v___x_2624_, v_stderr_2620_);
lean_dec_ref(v_stderr_2620_);
v___x_2626_ = 3;
v___x_2627_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2627_, 0, v___x_2625_);
lean_ctor_set_uint8(v___x_2627_, sizeof(void*)*1, v___x_2626_);
lean_inc_ref(v___y_2562_);
v___x_2628_ = lean_apply_2(v___y_2562_, v___x_2627_, lean_box(0));
v___x_2629_ = lean_box(0);
v___x_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2629_);
return v___x_2630_;
}
v___jp_2631_:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2634_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_2635_ = l_Lake_JsonObject_getJson_x3f(v___y_2632_, v___x_2634_);
lean_dec(v___y_2632_);
if (lean_obj_tag(v___x_2635_) == 0)
{
v___y_2587_ = v___y_2633_;
goto v___jp_2586_;
}
else
{
lean_object* v_val_2636_; lean_object* v___x_2637_; 
v_val_2636_ = lean_ctor_get(v___x_2635_, 0);
lean_inc(v_val_2636_);
lean_dec_ref_known(v___x_2635_, 1);
v___x_2637_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_2636_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
lean_dec_ref_known(v___x_2637_, 1);
v___x_2639_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_2640_ = lean_string_append(v___x_2639_, v_a_2638_);
lean_dec(v_a_2638_);
v___y_2618_ = v___y_2633_;
v_a_2619_ = v___x_2640_;
goto v___jp_2617_;
}
else
{
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2641_; 
v_a_2641_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2641_);
lean_dec_ref_known(v___x_2637_, 1);
v___y_2618_ = v___y_2633_;
v_a_2619_ = v_a_2641_;
goto v___jp_2617_;
}
else
{
lean_object* v_a_2642_; 
v_a_2642_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2642_);
lean_dec_ref_known(v___x_2637_, 1);
v___y_2590_ = v___y_2633_;
v_a_2591_ = v_a_2642_;
goto v___jp_2589_;
}
}
}
}
v___jp_2643_:
{
lean_object* v_stderr_2645_; lean_object* v___x_2646_; 
v_stderr_2645_ = lean_ctor_get(v_a_2644_, 1);
lean_inc_ref(v_stderr_2645_);
v___x_2646_ = l_Lean_Json_parse(v_stderr_2645_);
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v_a_2647_; 
lean_inc_ref(v_stderr_2645_);
lean_dec_ref(v_a_2644_);
v_a_2647_ = lean_ctor_get(v___x_2646_, 0);
lean_inc(v_a_2647_);
lean_dec_ref_known(v___x_2646_, 1);
v_stderr_2565_ = v_stderr_2645_;
v_a_2566_ = v_a_2647_;
goto v___jp_2564_;
}
else
{
lean_object* v_a_2648_; lean_object* v___x_2649_; 
v_a_2648_ = lean_ctor_get(v___x_2646_, 0);
lean_inc(v_a_2648_);
lean_dec_ref_known(v___x_2646_, 1);
v___x_2649_ = l_Lean_Json_getObj_x3f(v_a_2648_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; 
lean_inc_ref(v_stderr_2645_);
lean_dec_ref(v_a_2644_);
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2649_, 1);
v_stderr_2565_ = v_stderr_2645_;
v_a_2566_ = v_a_2650_;
goto v___jp_2564_;
}
else
{
lean_object* v_a_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
v_a_2651_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2651_);
lean_dec_ref_known(v___x_2649_, 1);
v___x_2652_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8));
v___x_2653_ = l_Lake_JsonObject_getJson_x3f(v_a_2651_, v___x_2652_);
if (lean_obj_tag(v___x_2653_) == 0)
{
lean_inc_ref(v_stderr_2645_);
lean_dec(v_a_2651_);
lean_dec_ref(v_a_2644_);
v_stderr_2578_ = v_stderr_2645_;
goto v___jp_2577_;
}
else
{
lean_object* v_val_2654_; lean_object* v___x_2655_; 
v_val_2654_ = lean_ctor_get(v___x_2653_, 0);
lean_inc(v_val_2654_);
lean_dec_ref_known(v___x_2653_, 1);
v___x_2655_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_2654_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_dec_ref_known(v___x_2655_, 1);
v___y_2632_ = v_a_2651_;
v___y_2633_ = v_a_2644_;
goto v___jp_2631_;
}
else
{
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_dec_ref_known(v___x_2655_, 1);
v___y_2632_ = v_a_2651_;
v___y_2633_ = v_a_2644_;
goto v___jp_2631_;
}
else
{
lean_object* v_a_2656_; 
lean_dec(v_a_2651_);
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_a_2656_);
lean_dec_ref_known(v___x_2655_, 1);
v___y_2590_ = v_a_2644_;
v_a_2591_ = v_a_2656_;
goto v___jp_2589_;
}
}
}
}
}
}
v___jp_2657_:
{
lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; uint8_t v___x_2678_; uint8_t v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2659_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_2660_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_2661_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_2662_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18));
v___x_2663_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_2664_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20));
v___x_2665_ = lean_string_append(v___x_2664_, v_contentType_2559_);
v___x_2666_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26);
v___x_2667_ = lean_array_push(v___x_2666_, v_key_2561_);
v___x_2668_ = lean_array_push(v___x_2667_, v___x_2660_);
v___x_2669_ = lean_array_push(v___x_2668_, v___x_2661_);
v___x_2670_ = lean_array_push(v___x_2669_, v___x_2662_);
v___x_2671_ = lean_array_push(v___x_2670_, v_file_2558_);
v___x_2672_ = lean_array_push(v___x_2671_, v_url_2560_);
v___x_2673_ = lean_array_push(v___x_2672_, v___x_2663_);
v___x_2674_ = lean_array_push(v___x_2673_, v___x_2665_);
v___x_2675_ = lean_box(0);
v___x_2676_ = lean_unsigned_to_nat(0u);
v___x_2677_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_2678_ = 1;
v___x_2679_ = 0;
v___x_2680_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2680_, 0, v___x_2659_);
lean_ctor_set(v___x_2680_, 1, v_a_2658_);
lean_ctor_set(v___x_2680_, 2, v___x_2674_);
lean_ctor_set(v___x_2680_, 3, v___x_2675_);
lean_ctor_set(v___x_2680_, 4, v___x_2677_);
lean_ctor_set_uint8(v___x_2680_, sizeof(void*)*5, v___x_2678_);
lean_ctor_set_uint8(v___x_2680_, sizeof(void*)*5 + 1, v___x_2679_);
v___x_2681_ = l_Lake_captureProc_x27(v___x_2680_, v___x_2677_);
if (lean_obj_tag(v___x_2681_) == 0)
{
lean_object* v_a_2682_; lean_object* v_a_2683_; lean_object* v___x_2684_; uint8_t v___x_2685_; 
v_a_2682_ = lean_ctor_get(v___x_2681_, 0);
lean_inc(v_a_2682_);
v_a_2683_ = lean_ctor_get(v___x_2681_, 1);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2681_, 2);
v___x_2684_ = lean_array_get_size(v_a_2683_);
v___x_2685_ = lean_nat_dec_lt(v___x_2676_, v___x_2684_);
if (v___x_2685_ == 0)
{
lean_dec(v_a_2683_);
v_a_2644_ = v_a_2682_;
goto v___jp_2643_;
}
else
{
lean_object* v___x_2686_; size_t v___x_2687_; size_t v___x_2688_; lean_object* v___x_2689_; 
v___x_2686_ = lean_box(0);
v___x_2687_ = ((size_t)0ULL);
v___x_2688_ = lean_usize_of_nat(v___x_2684_);
v___x_2689_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2683_, v___x_2687_, v___x_2688_, v___x_2686_, v___y_2562_);
lean_dec(v_a_2683_);
if (lean_obj_tag(v___x_2689_) == 0)
{
lean_dec_ref_known(v___x_2689_, 1);
v_a_2644_ = v_a_2682_;
goto v___jp_2643_;
}
else
{
lean_dec(v_a_2682_);
return v___x_2689_;
}
}
}
else
{
lean_object* v_a_2690_; lean_object* v___x_2691_; uint8_t v___x_2692_; 
v_a_2690_ = lean_ctor_get(v___x_2681_, 1);
lean_inc(v_a_2690_);
lean_dec_ref_known(v___x_2681_, 2);
v___x_2691_ = lean_array_get_size(v_a_2690_);
v___x_2692_ = lean_nat_dec_lt(v___x_2676_, v___x_2691_);
if (v___x_2692_ == 0)
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
lean_dec(v_a_2690_);
v___x_2693_ = lean_box(0);
v___x_2694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2693_);
return v___x_2694_;
}
else
{
lean_object* v___x_2695_; size_t v___x_2696_; size_t v___x_2697_; lean_object* v___x_2698_; 
v___x_2695_ = lean_box(0);
v___x_2696_ = ((size_t)0ULL);
v___x_2697_ = lean_usize_of_nat(v___x_2691_);
v___x_2698_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2690_, v___x_2696_, v___x_2697_, v___x_2695_, v___y_2562_);
lean_dec(v_a_2690_);
if (lean_obj_tag(v___x_2698_) == 0)
{
lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2705_; 
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2705_ == 0)
{
lean_object* v_unused_2706_; 
v_unused_2706_ = lean_ctor_get(v___x_2698_, 0);
lean_dec(v_unused_2706_);
v___x_2700_ = v___x_2698_;
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
else
{
lean_dec(v___x_2698_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2705_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2703_; 
if (v_isShared_2701_ == 0)
{
lean_ctor_set_tag(v___x_2700_, 1);
lean_ctor_set(v___x_2700_, 0, v___x_2695_);
v___x_2703_ = v___x_2700_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2695_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
else
{
return v___x_2698_;
}
}
}
}
v___jp_2708_:
{
uint8_t v___x_2710_; 
v___x_2710_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_2710_ == 0)
{
v_a_2658_ = v_val_2709_;
goto v___jp_2657_;
}
else
{
lean_object* v___x_2711_; size_t v___x_2712_; size_t v___x_2713_; lean_object* v___x_2714_; 
v___x_2711_ = lean_box(0);
v___x_2712_ = ((size_t)0ULL);
v___x_2713_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_2714_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_2707_, v___x_2712_, v___x_2713_, v___x_2711_, v___y_2562_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_dec_ref_known(v___x_2714_, 1);
v_a_2658_ = v_val_2709_;
goto v___jp_2657_;
}
else
{
lean_dec_ref(v_val_2709_);
lean_dec_ref(v_key_2561_);
lean_dec_ref(v_url_2560_);
lean_dec_ref(v_file_2558_);
return v___x_2714_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___boxed(lean_object* v_file_2719_, lean_object* v_contentType_2720_, lean_object* v_url_2721_, lean_object* v_key_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v_res_2725_; 
v_res_2725_ = l___private_Lake_Config_Cache_0__Lake_uploadS3(v_file_2719_, v_contentType_2720_, v_url_2721_, v_key_2722_, v___y_2723_);
lean_dec_ref(v___y_2723_);
lean_dec_ref(v_contentType_2720_);
return v_res_2725_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f(lean_object* v_service_2726_){
_start:
{
lean_object* v_name_x3f_2727_; 
v_name_x3f_2727_ = lean_ctor_get(v_service_2726_, 0);
lean_inc(v_name_x3f_2727_);
return v_name_x3f_2727_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f___boxed(lean_object* v_service_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l_Lake_CacheService_name_x3f(v_service_2728_);
lean_dec_ref(v_service_2728_);
return v_res_2729_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheService_isReservoir(lean_object* v_service_2730_){
_start:
{
uint8_t v_isReservoir_2731_; 
v_isReservoir_2731_ = lean_ctor_get_uint8(v_service_2730_, sizeof(void*)*5);
return v_isReservoir_2731_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_isReservoir___boxed(lean_object* v_service_2732_){
_start:
{
uint8_t v_res_2733_; lean_object* v_r_2734_; 
v_res_2733_ = l_Lake_CacheService_isReservoir(v_service_2732_);
lean_dec_ref(v_service_2732_);
v_r_2734_ = lean_box(v_res_2733_);
return v_r_2734_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_reservoirService(lean_object* v_apiEndpoint_2735_, lean_object* v_name_x3f_2736_){
_start:
{
lean_object* v___x_2737_; uint8_t v___x_2738_; lean_object* v___x_2739_; 
v___x_2737_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2738_ = 1;
v___x_2739_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2739_, 0, v_name_x3f_2736_);
lean_ctor_set(v___x_2739_, 1, v___x_2737_);
lean_ctor_set(v___x_2739_, 2, v___x_2737_);
lean_ctor_set(v___x_2739_, 3, v___x_2737_);
lean_ctor_set(v___x_2739_, 4, v_apiEndpoint_2735_);
lean_ctor_set_uint8(v___x_2739_, sizeof(void*)*5, v___x_2738_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadService(lean_object* v_key_2740_, lean_object* v_artifactEndpoint_2741_, lean_object* v_revisionEndpoint_2742_){
_start:
{
lean_object* v___x_2743_; uint8_t v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; 
v___x_2743_ = lean_box(0);
v___x_2744_ = 0;
v___x_2745_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2746_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2746_, 0, v___x_2743_);
lean_ctor_set(v___x_2746_, 1, v_key_2740_);
lean_ctor_set(v___x_2746_, 2, v_artifactEndpoint_2741_);
lean_ctor_set(v___x_2746_, 3, v_revisionEndpoint_2742_);
lean_ctor_set(v___x_2746_, 4, v___x_2745_);
lean_ctor_set_uint8(v___x_2746_, sizeof(void*)*5, v___x_2744_);
return v___x_2746_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadService(lean_object* v_artifactEndpoint_2747_, lean_object* v_revisionEndpoint_2748_, lean_object* v_name_x3f_2749_){
_start:
{
lean_object* v___x_2750_; uint8_t v___x_2751_; lean_object* v___x_2752_; 
v___x_2750_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2751_ = 0;
v___x_2752_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2752_, 0, v_name_x3f_2749_);
lean_ctor_set(v___x_2752_, 1, v___x_2750_);
lean_ctor_set(v___x_2752_, 2, v_artifactEndpoint_2747_);
lean_ctor_set(v___x_2752_, 3, v_revisionEndpoint_2748_);
lean_ctor_set(v___x_2752_, 4, v___x_2750_);
lean_ctor_set_uint8(v___x_2752_, sizeof(void*)*5, v___x_2751_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtsService(lean_object* v_artifactEndpoint_2753_, lean_object* v_name_x3f_2754_){
_start:
{
lean_object* v___x_2755_; uint8_t v___x_2756_; lean_object* v___x_2757_; 
v___x_2755_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2756_ = 0;
v___x_2757_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2757_, 0, v_name_x3f_2754_);
lean_ctor_set(v___x_2757_, 1, v___x_2755_);
lean_ctor_set(v___x_2757_, 2, v_artifactEndpoint_2753_);
lean_ctor_set(v___x_2757_, 3, v___x_2755_);
lean_ctor_set(v___x_2757_, 4, v___x_2755_);
lean_ctor_set_uint8(v___x_2757_, sizeof(void*)*5, v___x_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_withKey(lean_object* v_service_2758_, lean_object* v_key_2759_){
_start:
{
lean_object* v_name_x3f_2760_; lean_object* v_artifactEndpoint_2761_; lean_object* v_revisionEndpoint_2762_; uint8_t v_isReservoir_2763_; lean_object* v_apiEndpoint_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
v_name_x3f_2760_ = lean_ctor_get(v_service_2758_, 0);
v_artifactEndpoint_2761_ = lean_ctor_get(v_service_2758_, 2);
v_revisionEndpoint_2762_ = lean_ctor_get(v_service_2758_, 3);
v_isReservoir_2763_ = lean_ctor_get_uint8(v_service_2758_, sizeof(void*)*5);
v_apiEndpoint_2764_ = lean_ctor_get(v_service_2758_, 4);
v_isSharedCheck_2771_ = !lean_is_exclusive(v_service_2758_);
if (v_isSharedCheck_2771_ == 0)
{
lean_object* v_unused_2772_; 
v_unused_2772_ = lean_ctor_get(v_service_2758_, 1);
lean_dec(v_unused_2772_);
v___x_2766_ = v_service_2758_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_apiEndpoint_2764_);
lean_inc(v_revisionEndpoint_2762_);
lean_inc(v_artifactEndpoint_2761_);
lean_inc(v_name_x3f_2760_);
lean_dec(v_service_2758_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
lean_ctor_set(v___x_2766_, 1, v_key_2759_);
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_name_x3f_2760_);
lean_ctor_set(v_reuseFailAlloc_2770_, 1, v_key_2759_);
lean_ctor_set(v_reuseFailAlloc_2770_, 2, v_artifactEndpoint_2761_);
lean_ctor_set(v_reuseFailAlloc_2770_, 3, v_revisionEndpoint_2762_);
lean_ctor_set(v_reuseFailAlloc_2770_, 4, v_apiEndpoint_2764_);
lean_ctor_set_uint8(v_reuseFailAlloc_2770_, sizeof(void*)*5, v_isReservoir_2763_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg(){
_start:
{
lean_object* v___x_2778_; 
v___x_2778_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg___closed__0));
return v___x_2778_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg___boxed(lean_object* v___dummy_2779_){
_start:
{
lean_object* v_res_2780_; 
v_res_2780_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg();
return v_res_2780_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2781_; 
v___x_2781_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg();
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(lean_object* v_s_2782_){
_start:
{
lean_object* v___x_2783_; 
v___x_2783_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___boxed(lean_object* v_s_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(v_s_2784_);
lean_dec_ref(v_s_2784_);
return v_res_2785_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(lean_object* v_scope_2786_, lean_object* v___x_2787_, lean_object* v___x_2788_, lean_object* v_a_2789_, lean_object* v_b_2790_){
_start:
{
if (lean_obj_tag(v_a_2789_) == 0)
{
lean_object* v_currPos_2791_; lean_object* v_searcher_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2823_; 
v_currPos_2791_ = lean_ctor_get(v_a_2789_, 0);
v_searcher_2792_ = lean_ctor_get(v_a_2789_, 1);
v_isSharedCheck_2823_ = !lean_is_exclusive(v_a_2789_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2794_ = v_a_2789_;
v_isShared_2795_ = v_isSharedCheck_2823_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_searcher_2792_);
lean_inc(v_currPos_2791_);
lean_dec(v_a_2789_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2823_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
uint32_t v___x_2796_; lean_object* v_it_2798_; lean_object* v_startInclusive_2799_; lean_object* v_endExclusive_2800_; uint8_t v_decide_2805_; 
v___x_2796_ = 47;
v_decide_2805_ = lean_nat_dec_eq(v_searcher_2792_, v___x_2788_);
if (v_decide_2805_ == 0)
{
uint32_t v___x_2806_; uint8_t v___x_2807_; 
v___x_2806_ = lean_string_utf8_get_fast(v_scope_2786_, v_searcher_2792_);
v___x_2807_ = lean_uint32_dec_eq(v___x_2806_, v___x_2796_);
if (v___x_2807_ == 0)
{
lean_object* v___x_2808_; lean_object* v___x_2810_; 
v___x_2808_ = lean_string_utf8_next_fast(v_scope_2786_, v_searcher_2792_);
lean_dec(v_searcher_2792_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 1, v___x_2808_);
v___x_2810_ = v___x_2794_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_currPos_2791_);
lean_ctor_set(v_reuseFailAlloc_2812_, 1, v___x_2808_);
v___x_2810_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
v_a_2789_ = v___x_2810_;
goto _start;
}
}
else
{
lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v_slice_2816_; lean_object* v_nextIt_2818_; 
v___x_2813_ = lean_string_utf8_next_fast(v_scope_2786_, v_searcher_2792_);
v___x_2814_ = lean_nat_sub(v___x_2813_, v_searcher_2792_);
v___x_2815_ = lean_nat_add(v_searcher_2792_, v___x_2814_);
lean_dec(v___x_2814_);
v_slice_2816_ = l_String_Slice_subslice_x21(v___x_2787_, v_currPos_2791_, v_searcher_2792_);
lean_inc(v___x_2815_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 1, v___x_2815_);
lean_ctor_set(v___x_2794_, 0, v___x_2815_);
v_nextIt_2818_ = v___x_2794_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v___x_2815_);
lean_ctor_set(v_reuseFailAlloc_2821_, 1, v___x_2815_);
v_nextIt_2818_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
lean_object* v_startInclusive_2819_; lean_object* v_endExclusive_2820_; 
v_startInclusive_2819_ = lean_ctor_get(v_slice_2816_, 0);
lean_inc(v_startInclusive_2819_);
v_endExclusive_2820_ = lean_ctor_get(v_slice_2816_, 1);
lean_inc(v_endExclusive_2820_);
lean_dec_ref(v_slice_2816_);
v_it_2798_ = v_nextIt_2818_;
v_startInclusive_2799_ = v_startInclusive_2819_;
v_endExclusive_2800_ = v_endExclusive_2820_;
goto v___jp_2797_;
}
}
}
else
{
lean_object* v___x_2822_; 
lean_del_object(v___x_2794_);
lean_dec(v_searcher_2792_);
v___x_2822_ = lean_box(1);
lean_inc(v___x_2788_);
v_it_2798_ = v___x_2822_;
v_startInclusive_2799_ = v_currPos_2791_;
v_endExclusive_2800_ = v___x_2788_;
goto v___jp_2797_;
}
v___jp_2797_:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2801_ = lean_string_utf8_extract_fast(v_scope_2786_, v_startInclusive_2799_, v_endExclusive_2800_);
lean_dec(v_endExclusive_2800_);
lean_dec(v_startInclusive_2799_);
v___x_2802_ = lean_string_push(v_b_2790_, v___x_2796_);
v___x_2803_ = l_Lake_uriEncode(v___x_2801_, v___x_2802_);
lean_dec_ref(v___x_2801_);
v_a_2789_ = v_it_2798_;
v_b_2790_ = v___x_2803_;
goto _start;
}
}
}
else
{
lean_dec(v___x_2788_);
return v_b_2790_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg___boxed(lean_object* v_scope_2824_, lean_object* v___x_2825_, lean_object* v___x_2826_, lean_object* v_a_2827_, lean_object* v_b_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2824_, v___x_2825_, v___x_2826_, v_a_2827_, v_b_2828_);
lean_dec_ref(v___x_2825_);
lean_dec_ref(v_scope_2824_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(lean_object* v_endpoint_2830_, lean_object* v_scope_2831_){
_start:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2832_ = lean_unsigned_to_nat(0u);
v___x_2833_ = lean_string_utf8_byte_size(v_scope_2831_);
lean_inc_ref(v_scope_2831_);
v___x_2834_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2834_, 0, v_scope_2831_);
lean_ctor_set(v___x_2834_, 1, v___x_2832_);
lean_ctor_set(v___x_2834_, 2, v___x_2833_);
v___x_2835_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0);
v___x_2836_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2831_, v___x_2834_, v___x_2833_, v___x_2835_, v_endpoint_2830_);
lean_dec_ref_known(v___x_2834_, 3);
lean_dec_ref(v_scope_2831_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(lean_object* v_scope_2837_, lean_object* v___x_2838_, lean_object* v___x_2839_, lean_object* v_inst_2840_, lean_object* v_R_2841_, lean_object* v_a_2842_, lean_object* v_b_2843_, lean_object* v_c_2844_){
_start:
{
lean_object* v___x_2845_; 
v___x_2845_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2837_, v___x_2838_, v___x_2839_, v_a_2842_, v_b_2843_);
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___boxed(lean_object* v_scope_2846_, lean_object* v___x_2847_, lean_object* v___x_2848_, lean_object* v_inst_2849_, lean_object* v_R_2850_, lean_object* v_a_2851_, lean_object* v_b_2852_, lean_object* v_c_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(v_scope_2846_, v___x_2847_, v___x_2848_, v_inst_2849_, v_R_2850_, v_a_2851_, v_b_2852_, v_c_2853_);
lean_dec_ref(v___x_2847_);
lean_dec_ref(v_scope_2846_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(lean_object* v_service_2855_, lean_object* v_scope_2856_){
_start:
{
lean_object* v_artifactEndpoint_2857_; lean_object* v___x_2858_; 
v_artifactEndpoint_2857_ = lean_ctor_get(v_service_2855_, 2);
lean_inc_ref(v_artifactEndpoint_2857_);
lean_dec_ref(v_service_2855_);
v___x_2858_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_artifactEndpoint_2857_, v_scope_2856_);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(uint64_t v_contentHash_2861_, lean_object* v_service_2862_, lean_object* v_scope_2863_){
_start:
{
lean_object* v___y_2865_; lean_object* v_s_2872_; lean_object* v___x_2873_; 
v_s_2872_ = lean_ctor_get(v_scope_2863_, 0);
lean_inc_ref(v_s_2872_);
lean_dec_ref(v_scope_2863_);
v___x_2873_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(v_service_2862_, v_s_2872_);
v___y_2865_ = v___x_2873_;
goto v___jp_2864_;
v___jp_2864_:
{
lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v___x_2866_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_2867_ = lean_string_append(v___y_2865_, v___x_2866_);
v___x_2868_ = l_Lake_lowerHexUInt64(v_contentHash_2861_);
v___x_2869_ = lean_string_append(v___x_2867_, v___x_2868_);
lean_dec_ref(v___x_2868_);
v___x_2870_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1));
v___x_2871_ = lean_string_append(v___x_2869_, v___x_2870_);
return v___x_2871_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___boxed(lean_object* v_contentHash_2874_, lean_object* v_service_2875_, lean_object* v_scope_2876_){
_start:
{
uint64_t v_contentHash_boxed_2877_; lean_object* v_res_2878_; 
v_contentHash_boxed_2877_ = lean_unbox_uint64(v_contentHash_2874_);
lean_dec_ref(v_contentHash_2874_);
v_res_2878_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_boxed_2877_, v_service_2875_, v_scope_2876_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl(uint64_t v_contentHash_2882_, lean_object* v_service_2883_, lean_object* v_scope_2884_){
_start:
{
lean_object* v___y_2886_; uint8_t v_isReservoir_2893_; 
v_isReservoir_2893_ = lean_ctor_get_uint8(v_service_2883_, sizeof(void*)*5);
if (v_isReservoir_2893_ == 0)
{
lean_object* v___x_2894_; 
v___x_2894_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_2882_, v_service_2883_, v_scope_2884_);
return v___x_2894_;
}
else
{
if (lean_obj_tag(v_scope_2884_) == 0)
{
lean_object* v_apiEndpoint_2895_; lean_object* v_s_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; 
v_apiEndpoint_2895_ = lean_ctor_get(v_service_2883_, 4);
lean_inc_ref(v_apiEndpoint_2895_);
lean_dec_ref(v_service_2883_);
v_s_2896_ = lean_ctor_get(v_scope_2884_, 0);
lean_inc_ref(v_s_2896_);
lean_dec_ref_known(v_scope_2884_, 1);
v___x_2897_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_2898_ = lean_string_append(v_apiEndpoint_2895_, v___x_2897_);
v___x_2899_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_2898_, v_s_2896_);
v___y_2886_ = v___x_2899_;
goto v___jp_2885_;
}
else
{
lean_object* v_apiEndpoint_2900_; lean_object* v_s_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v_apiEndpoint_2900_ = lean_ctor_get(v_service_2883_, 4);
lean_inc_ref(v_apiEndpoint_2900_);
lean_dec_ref(v_service_2883_);
v_s_2901_ = lean_ctor_get(v_scope_2884_, 0);
lean_inc_ref(v_s_2901_);
lean_dec_ref_known(v_scope_2884_, 1);
v___x_2902_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_2903_ = lean_string_append(v_apiEndpoint_2900_, v___x_2902_);
v___x_2904_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_2903_, v_s_2901_);
v___y_2886_ = v___x_2904_;
goto v___jp_2885_;
}
}
v___jp_2885_:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2887_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__0));
v___x_2888_ = lean_string_append(v___y_2886_, v___x_2887_);
v___x_2889_ = l_Lake_lowerHexUInt64(v_contentHash_2882_);
v___x_2890_ = lean_string_append(v___x_2888_, v___x_2889_);
lean_dec_ref(v___x_2889_);
v___x_2891_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1));
v___x_2892_ = lean_string_append(v___x_2890_, v___x_2891_);
return v___x_2892_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl___boxed(lean_object* v_contentHash_2905_, lean_object* v_service_2906_, lean_object* v_scope_2907_){
_start:
{
uint64_t v_contentHash_boxed_2908_; lean_object* v_res_2909_; 
v_contentHash_boxed_2908_ = lean_unbox_uint64(v_contentHash_2905_);
lean_dec_ref(v_contentHash_2905_);
v_res_2909_ = l_Lake_CacheService_artifactUrl(v_contentHash_boxed_2908_, v_service_2906_, v_scope_2907_);
return v_res_2909_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact(lean_object* v_descr_2913_, lean_object* v_cache_2914_, lean_object* v_service_2915_, lean_object* v_scope_2916_, uint8_t v_force_2917_, lean_object* v___y_2918_){
_start:
{
uint64_t v_hash_2920_; lean_object* v_ext_2921_; lean_object* v_url_2922_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2977_; lean_object* v___y_2980_; uint8_t v_a_2981_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___y_2987_; lean_object* v___x_2996_; lean_object* v___x_2997_; uint8_t v___x_2998_; 
v_hash_2920_ = lean_ctor_get_uint64(v_descr_2913_, sizeof(void*)*1);
v_ext_2921_ = lean_ctor_get(v_descr_2913_, 0);
lean_inc_ref(v_scope_2916_);
v_url_2922_ = l_Lake_CacheService_artifactUrl(v_hash_2920_, v_service_2915_, v_scope_2916_);
v___x_2984_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2985_ = l_System_FilePath_join(v_cache_2914_, v___x_2984_);
v___x_2996_ = lean_string_utf8_byte_size(v_ext_2921_);
v___x_2997_ = lean_unsigned_to_nat(0u);
v___x_2998_ = lean_nat_dec_eq(v___x_2996_, v___x_2997_);
if (v___x_2998_ == 0)
{
lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_2999_ = l_Lake_lowerHexUInt64(v_hash_2920_);
v___x_3000_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_3001_ = lean_string_append(v___x_2999_, v___x_3000_);
v___x_3002_ = lean_string_append(v___x_3001_, v_ext_2921_);
v___y_2987_ = v___x_3002_;
goto v___jp_2986_;
}
else
{
lean_object* v___x_3003_; 
v___x_3003_ = l_Lake_lowerHexUInt64(v_hash_2920_);
v___y_2987_ = v___x_3003_;
goto v___jp_2986_;
}
v___jp_2923_:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; uint8_t v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2926_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__0));
v___x_2927_ = lean_string_append(v___y_2925_, v___x_2926_);
v___x_2928_ = l_Lake_lowerHexUInt64(v_hash_2920_);
v___x_2929_ = lean_string_append(v___x_2927_, v___x_2928_);
lean_dec_ref(v___x_2928_);
v___x_2930_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_2931_ = lean_string_append(v___x_2929_, v___x_2930_);
v___x_2932_ = lean_string_append(v___x_2931_, v___y_2924_);
v___x_2933_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_2934_ = lean_string_append(v___x_2932_, v___x_2933_);
v___x_2935_ = lean_string_append(v___x_2934_, v_url_2922_);
v___x_2936_ = 1;
v___x_2937_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2937_, 0, v___x_2935_);
lean_ctor_set_uint8(v___x_2937_, sizeof(void*)*1, v___x_2936_);
lean_inc_ref(v___y_2918_);
v___x_2938_ = lean_apply_2(v___y_2918_, v___x_2937_, lean_box(0));
v___x_2939_ = lean_unsigned_to_nat(0u);
v___x_2940_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_2941_ = l_Lake_downloadArtifactCore(v_hash_2920_, v_url_2922_, v___y_2924_, v___x_2940_);
if (lean_obj_tag(v___x_2941_) == 0)
{
lean_object* v_a_2942_; lean_object* v_a_2943_; lean_object* v___x_2944_; uint8_t v___x_2945_; 
v_a_2942_ = lean_ctor_get(v___x_2941_, 0);
lean_inc(v_a_2942_);
v_a_2943_ = lean_ctor_get(v___x_2941_, 1);
lean_inc(v_a_2943_);
lean_dec_ref_known(v___x_2941_, 2);
v___x_2944_ = lean_array_get_size(v_a_2943_);
v___x_2945_ = lean_nat_dec_lt(v___x_2939_, v___x_2944_);
if (v___x_2945_ == 0)
{
lean_object* v___x_2946_; 
lean_dec(v_a_2943_);
v___x_2946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2946_, 0, v_a_2942_);
return v___x_2946_;
}
else
{
lean_object* v___x_2947_; size_t v___x_2948_; size_t v___x_2949_; lean_object* v___x_2950_; 
v___x_2947_ = lean_box(0);
v___x_2948_ = ((size_t)0ULL);
v___x_2949_ = lean_usize_of_nat(v___x_2944_);
v___x_2950_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2943_, v___x_2948_, v___x_2949_, v___x_2947_, v___y_2918_);
lean_dec(v_a_2943_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2957_; 
v_isSharedCheck_2957_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_2957_ == 0)
{
lean_object* v_unused_2958_; 
v_unused_2958_ = lean_ctor_get(v___x_2950_, 0);
lean_dec(v_unused_2958_);
v___x_2952_ = v___x_2950_;
v_isShared_2953_ = v_isSharedCheck_2957_;
goto v_resetjp_2951_;
}
else
{
lean_dec(v___x_2950_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2957_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2955_; 
if (v_isShared_2953_ == 0)
{
lean_ctor_set(v___x_2952_, 0, v_a_2942_);
v___x_2955_ = v___x_2952_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_a_2942_);
v___x_2955_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
return v___x_2955_;
}
}
}
else
{
lean_dec(v_a_2942_);
return v___x_2950_;
}
}
}
else
{
lean_object* v_a_2959_; lean_object* v___x_2960_; uint8_t v___x_2961_; 
v_a_2959_ = lean_ctor_get(v___x_2941_, 1);
lean_inc(v_a_2959_);
lean_dec_ref_known(v___x_2941_, 2);
v___x_2960_ = lean_array_get_size(v_a_2959_);
v___x_2961_ = lean_nat_dec_lt(v___x_2939_, v___x_2960_);
if (v___x_2961_ == 0)
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
lean_dec(v_a_2959_);
v___x_2962_ = lean_box(0);
v___x_2963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2963_, 0, v___x_2962_);
return v___x_2963_;
}
else
{
lean_object* v___x_2964_; size_t v___x_2965_; size_t v___x_2966_; lean_object* v___x_2967_; 
v___x_2964_ = lean_box(0);
v___x_2965_ = ((size_t)0ULL);
v___x_2966_ = lean_usize_of_nat(v___x_2960_);
v___x_2967_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2959_, v___x_2965_, v___x_2966_, v___x_2964_, v___y_2918_);
lean_dec(v_a_2959_);
if (lean_obj_tag(v___x_2967_) == 0)
{
lean_object* v___x_2969_; uint8_t v_isShared_2970_; uint8_t v_isSharedCheck_2974_; 
v_isSharedCheck_2974_ = !lean_is_exclusive(v___x_2967_);
if (v_isSharedCheck_2974_ == 0)
{
lean_object* v_unused_2975_; 
v_unused_2975_ = lean_ctor_get(v___x_2967_, 0);
lean_dec(v_unused_2975_);
v___x_2969_ = v___x_2967_;
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
else
{
lean_dec(v___x_2967_);
v___x_2969_ = lean_box(0);
v_isShared_2970_ = v_isSharedCheck_2974_;
goto v_resetjp_2968_;
}
v_resetjp_2968_:
{
lean_object* v___x_2972_; 
if (v_isShared_2970_ == 0)
{
lean_ctor_set_tag(v___x_2969_, 1);
lean_ctor_set(v___x_2969_, 0, v___x_2964_);
v___x_2972_ = v___x_2969_;
goto v_reusejp_2971_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v___x_2964_);
v___x_2972_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2971_;
}
v_reusejp_2971_:
{
return v___x_2972_;
}
}
}
else
{
return v___x_2967_;
}
}
}
}
v___jp_2976_:
{
lean_object* v_s_2978_; 
v_s_2978_ = lean_ctor_get(v_scope_2916_, 0);
lean_inc_ref(v_s_2978_);
lean_dec_ref(v_scope_2916_);
v___y_2924_ = v___y_2977_;
v___y_2925_ = v_s_2978_;
goto v___jp_2923_;
}
v___jp_2979_:
{
if (v_a_2981_ == 0)
{
v___y_2977_ = v___y_2980_;
goto v___jp_2976_;
}
else
{
if (v_force_2917_ == 0)
{
lean_object* v___x_2982_; lean_object* v___x_2983_; 
lean_dec_ref(v___y_2980_);
lean_dec_ref(v_url_2922_);
lean_dec_ref(v_scope_2916_);
v___x_2982_ = lean_box(0);
v___x_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
return v___x_2983_;
}
else
{
v___y_2977_ = v___y_2980_;
goto v___jp_2976_;
}
}
}
v___jp_2986_:
{
lean_object* v_path_2988_; lean_object* v___x_2989_; uint8_t v___x_2990_; uint8_t v___x_2991_; 
v_path_2988_ = l_System_FilePath_join(v___x_2985_, v___y_2987_);
v___x_2989_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_2990_ = l_System_FilePath_pathExists(v_path_2988_);
v___x_2991_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_2991_ == 0)
{
v___y_2980_ = v_path_2988_;
v_a_2981_ = v___x_2990_;
goto v___jp_2979_;
}
else
{
lean_object* v___x_2992_; size_t v___x_2993_; size_t v___x_2994_; lean_object* v___x_2995_; 
v___x_2992_ = lean_box(0);
v___x_2993_ = ((size_t)0ULL);
v___x_2994_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_2995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_2989_, v___x_2993_, v___x_2994_, v___x_2992_, v___y_2918_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_dec_ref_known(v___x_2995_, 1);
v___y_2980_ = v_path_2988_;
v_a_2981_ = v___x_2990_;
goto v___jp_2979_;
}
else
{
lean_dec_ref(v_path_2988_);
lean_dec_ref(v_url_2922_);
lean_dec_ref(v_scope_2916_);
return v___x_2995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact___boxed(lean_object* v_descr_3004_, lean_object* v_cache_3005_, lean_object* v_service_3006_, lean_object* v_scope_3007_, lean_object* v_force_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
uint8_t v_force_boxed_3011_; lean_object* v_res_3012_; 
v_force_boxed_3011_ = lean_unbox(v_force_3008_);
v_res_3012_ = l_Lake_CacheService_downloadArtifact(v_descr_3004_, v_cache_3005_, v_service_3006_, v_scope_3007_, v_force_boxed_3011_, v___y_3009_);
lean_dec_ref(v___y_3009_);
lean_dec_ref(v_descr_3004_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact(uint64_t v_contentHash_3014_, lean_object* v_art_3015_, lean_object* v_service_3016_, lean_object* v_scope_3017_, lean_object* v___y_3018_){
_start:
{
lean_object* v_url_3020_; lean_object* v___y_3022_; lean_object* v_s_3039_; 
lean_inc_ref(v_scope_3017_);
lean_inc_ref(v_service_3016_);
v_url_3020_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_3014_, v_service_3016_, v_scope_3017_);
v_s_3039_ = lean_ctor_get(v_scope_3017_, 0);
lean_inc_ref(v_s_3039_);
lean_dec_ref(v_scope_3017_);
v___y_3022_ = v_s_3039_;
goto v___jp_3021_;
v___jp_3021_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; uint8_t v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v_key_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3023_ = ((lean_object*)(l_Lake_CacheService_uploadArtifact___closed__0));
v___x_3024_ = lean_string_append(v___y_3022_, v___x_3023_);
v___x_3025_ = l_Lake_lowerHexUInt64(v_contentHash_3014_);
v___x_3026_ = lean_string_append(v___x_3024_, v___x_3025_);
lean_dec_ref(v___x_3025_);
v___x_3027_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3028_ = lean_string_append(v___x_3026_, v___x_3027_);
v___x_3029_ = lean_string_append(v___x_3028_, v_art_3015_);
v___x_3030_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3031_ = lean_string_append(v___x_3029_, v___x_3030_);
v___x_3032_ = lean_string_append(v___x_3031_, v_url_3020_);
v___x_3033_ = 1;
v___x_3034_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3034_, 0, v___x_3032_);
lean_ctor_set_uint8(v___x_3034_, sizeof(void*)*1, v___x_3033_);
lean_inc_ref(v___y_3018_);
v___x_3035_ = lean_apply_2(v___y_3018_, v___x_3034_, lean_box(0));
v_key_3036_ = lean_ctor_get(v_service_3016_, 1);
lean_inc_ref(v_key_3036_);
lean_dec_ref(v_service_3016_);
v___x_3037_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_3038_ = l___private_Lake_Config_Cache_0__Lake_uploadS3(v_art_3015_, v___x_3037_, v_url_3020_, v_key_3036_, v___y_3018_);
return v___x_3038_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact___boxed(lean_object* v_contentHash_3040_, lean_object* v_art_3041_, lean_object* v_service_3042_, lean_object* v_scope_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_){
_start:
{
uint64_t v_contentHash_boxed_3046_; lean_object* v_res_3047_; 
v_contentHash_boxed_3046_ = lean_unbox_uint64(v_contentHash_3040_);
lean_dec_ref(v_contentHash_3040_);
v_res_3047_ = l_Lake_CacheService_uploadArtifact(v_contentHash_boxed_3046_, v_art_3041_, v_service_3042_, v_scope_3043_, v___y_3044_);
lean_dec_ref(v___y_3044_);
return v_res_3047_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(uint8_t v_x_3048_){
_start:
{
if (v_x_3048_ == 0)
{
lean_object* v___x_3049_; 
v___x_3049_ = lean_unsigned_to_nat(0u);
return v___x_3049_;
}
else
{
lean_object* v___x_3050_; 
v___x_3050_ = lean_unsigned_to_nat(1u);
return v___x_3050_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx___boxed(lean_object* v_x_3051_){
_start:
{
uint8_t v_x_boxed_3052_; lean_object* v_res_3053_; 
v_x_boxed_3052_ = lean_unbox(v_x_3051_);
v_res_3053_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_boxed_3052_);
return v_res_3053_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(lean_object* v_k_3054_){
_start:
{
lean_inc(v_k_3054_);
return v_k_3054_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg___boxed(lean_object* v_k_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(v_k_3055_);
lean_dec(v_k_3055_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(lean_object* v_motive_3057_, lean_object* v_ctorIdx_3058_, uint8_t v_t_3059_, lean_object* v_h_3060_, lean_object* v_k_3061_){
_start:
{
lean_inc(v_k_3061_);
return v_k_3061_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___boxed(lean_object* v_motive_3062_, lean_object* v_ctorIdx_3063_, lean_object* v_t_3064_, lean_object* v_h_3065_, lean_object* v_k_3066_){
_start:
{
uint8_t v_t_boxed_3067_; lean_object* v_res_3068_; 
v_t_boxed_3067_ = lean_unbox(v_t_3064_);
v_res_3068_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(v_motive_3062_, v_ctorIdx_3063_, v_t_boxed_3067_, v_h_3065_, v_k_3066_);
lean_dec(v_k_3066_);
lean_dec(v_ctorIdx_3063_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(lean_object* v_get_3069_){
_start:
{
lean_inc(v_get_3069_);
return v_get_3069_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg___boxed(lean_object* v_get_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(v_get_3070_);
lean_dec(v_get_3070_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(lean_object* v_motive_3072_, uint8_t v_t_3073_, lean_object* v_h_3074_, lean_object* v_get_3075_){
_start:
{
lean_inc(v_get_3075_);
return v_get_3075_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___boxed(lean_object* v_motive_3076_, lean_object* v_t_3077_, lean_object* v_h_3078_, lean_object* v_get_3079_){
_start:
{
uint8_t v_t_boxed_3080_; lean_object* v_res_3081_; 
v_t_boxed_3080_ = lean_unbox(v_t_3077_);
v_res_3081_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(v_motive_3076_, v_t_boxed_3080_, v_h_3078_, v_get_3079_);
lean_dec(v_get_3079_);
return v_res_3081_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(lean_object* v_put_3082_){
_start:
{
lean_inc(v_put_3082_);
return v_put_3082_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg___boxed(lean_object* v_put_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(v_put_3083_);
lean_dec(v_put_3083_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(lean_object* v_motive_3085_, uint8_t v_t_3086_, lean_object* v_h_3087_, lean_object* v_put_3088_){
_start:
{
lean_inc(v_put_3088_);
return v_put_3088_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___boxed(lean_object* v_motive_3089_, lean_object* v_t_3090_, lean_object* v_h_3091_, lean_object* v_put_3092_){
_start:
{
uint8_t v_t_boxed_3093_; lean_object* v_res_3094_; 
v_t_boxed_3093_ = lean_unbox(v_t_3090_);
v_res_3094_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(v_motive_3089_, v_t_boxed_3093_, v_h_3091_, v_put_3092_);
lean_dec(v_put_3092_);
return v_res_3094_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(lean_object* v_n_3095_){
_start:
{
lean_object* v___x_3096_; uint8_t v___x_3097_; 
v___x_3096_ = lean_unsigned_to_nat(0u);
v___x_3097_ = lean_nat_dec_le(v_n_3095_, v___x_3096_);
if (v___x_3097_ == 0)
{
uint8_t v___x_3098_; 
v___x_3098_ = 1;
return v___x_3098_;
}
else
{
uint8_t v___x_3099_; 
v___x_3099_ = 0;
return v___x_3099_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat___boxed(lean_object* v_n_3100_){
_start:
{
uint8_t v_res_3101_; lean_object* v_r_3102_; 
v_res_3101_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(v_n_3100_);
lean_dec(v_n_3100_);
v_r_3102_ = lean_box(v_res_3101_);
return v_r_3102_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(uint8_t v_x_3103_, uint8_t v_y_3104_){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; uint8_t v___x_3107_; 
v___x_3105_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_3103_);
v___x_3106_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_y_3104_);
v___x_3107_ = lean_nat_dec_eq(v___x_3105_, v___x_3106_);
lean_dec(v___x_3106_);
lean_dec(v___x_3105_);
return v___x_3107_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind___boxed(lean_object* v_x_3108_, lean_object* v_y_3109_){
_start:
{
uint8_t v_x_20__boxed_3110_; uint8_t v_y_21__boxed_3111_; uint8_t v_res_3112_; lean_object* v_r_3113_; 
v_x_20__boxed_3110_ = lean_unbox(v_x_3108_);
v_y_21__boxed_3111_ = lean_unbox(v_y_3109_);
v_res_3112_ = l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(v_x_20__boxed_3110_, v_y_21__boxed_3111_);
v_r_3113_ = lean_box(v_res_3112_);
return v_r_3113_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath(lean_object* v_self_3114_, lean_object* v_path_3115_, uint8_t v_extra_3116_){
_start:
{
if (v_extra_3116_ == 0)
{
lean_object* v_url_3117_; uint64_t v_hash_3118_; lean_object* v_path_3119_; lean_object* v_extraPaths_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3128_; 
v_url_3117_ = lean_ctor_get(v_self_3114_, 0);
v_hash_3118_ = lean_ctor_get_uint64(v_self_3114_, sizeof(void*)*3);
v_path_3119_ = lean_ctor_get(v_self_3114_, 1);
v_extraPaths_3120_ = lean_ctor_get(v_self_3114_, 2);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_self_3114_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3122_ = v_self_3114_;
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_extraPaths_3120_);
lean_inc(v_path_3119_);
lean_inc(v_url_3117_);
lean_dec(v_self_3114_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3124_; lean_object* v___x_3126_; 
v___x_3124_ = lean_array_push(v_extraPaths_3120_, v_path_3119_);
if (v_isShared_3123_ == 0)
{
lean_ctor_set(v___x_3122_, 2, v___x_3124_);
lean_ctor_set(v___x_3122_, 1, v_path_3115_);
v___x_3126_ = v___x_3122_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_url_3117_);
lean_ctor_set(v_reuseFailAlloc_3127_, 1, v_path_3115_);
lean_ctor_set(v_reuseFailAlloc_3127_, 2, v___x_3124_);
lean_ctor_set_uint64(v_reuseFailAlloc_3127_, sizeof(void*)*3, v_hash_3118_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
else
{
lean_object* v_url_3129_; uint64_t v_hash_3130_; lean_object* v_path_3131_; lean_object* v_extraPaths_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3140_; 
v_url_3129_ = lean_ctor_get(v_self_3114_, 0);
v_hash_3130_ = lean_ctor_get_uint64(v_self_3114_, sizeof(void*)*3);
v_path_3131_ = lean_ctor_get(v_self_3114_, 1);
v_extraPaths_3132_ = lean_ctor_get(v_self_3114_, 2);
v_isSharedCheck_3140_ = !lean_is_exclusive(v_self_3114_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3134_ = v_self_3114_;
v_isShared_3135_ = v_isSharedCheck_3140_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_extraPaths_3132_);
lean_inc(v_path_3131_);
lean_inc(v_url_3129_);
lean_dec(v_self_3114_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3140_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3136_; lean_object* v___x_3138_; 
v___x_3136_ = lean_array_push(v_extraPaths_3132_, v_path_3115_);
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 2, v___x_3136_);
v___x_3138_ = v___x_3134_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_url_3129_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v_path_3131_);
lean_ctor_set(v_reuseFailAlloc_3139_, 2, v___x_3136_);
lean_ctor_set_uint64(v_reuseFailAlloc_3139_, sizeof(void*)*3, v_hash_3130_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath___boxed(lean_object* v_self_3141_, lean_object* v_path_3142_, lean_object* v_extra_3143_){
_start:
{
uint8_t v_extra_boxed_3144_; lean_object* v_res_3145_; 
v_extra_boxed_3144_ = lean_unbox(v_extra_3143_);
v_res_3145_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath(v_self_3141_, v_path_3142_, v_extra_boxed_3144_);
return v_res_3145_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1(void){
_start:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; 
v___x_3148_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_3149_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__0));
v___x_3150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3149_);
lean_ctor_set(v___x_3150_, 1, v___x_3148_);
return v___x_3150_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty(void){
_start:
{
lean_object* v___x_3151_; 
v___x_3151_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1);
return v___x_3151_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1(void){
_start:
{
lean_object* v___x_3153_; lean_object* v___f_3154_; 
v___x_3153_ = lean_alloc_closure((void*)(l_Lake_instDecidableEqHash___boxed), 2, 0);
v___f_3154_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3154_, 0, v___x_3153_);
return v___f_3154_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push(lean_object* v_self_3155_, lean_object* v_url_3156_, uint64_t v_hash_3157_, lean_object* v_path_3158_){
_start:
{
lean_object* v_infos_3159_; lean_object* v_indices_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3175_; 
v_infos_3159_ = lean_ctor_get(v_self_3155_, 0);
v_indices_3160_ = lean_ctor_get(v_self_3155_, 1);
v_isSharedCheck_3175_ = !lean_is_exclusive(v_self_3155_);
if (v_isSharedCheck_3175_ == 0)
{
v___x_3162_ = v_self_3155_;
v_isShared_3163_ = v_isSharedCheck_3175_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_indices_3160_);
lean_inc(v_infos_3159_);
lean_dec(v_self_3155_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3175_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
lean_object* v___f_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___f_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3173_; 
v___f_3164_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0));
v___x_3165_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_3166_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_3166_, 0, v_url_3156_);
lean_ctor_set(v___x_3166_, 1, v_path_3158_);
lean_ctor_set(v___x_3166_, 2, v___x_3165_);
lean_ctor_set_uint64(v___x_3166_, sizeof(void*)*3, v_hash_3157_);
lean_inc_ref(v_infos_3159_);
v___x_3167_ = lean_array_push(v_infos_3159_, v___x_3166_);
v___f_3168_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1);
v___x_3169_ = lean_array_get_size(v_infos_3159_);
lean_dec_ref(v_infos_3159_);
v___x_3170_ = lean_box_uint64(v_hash_3157_);
v___x_3171_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3168_, v___f_3164_, v_indices_3160_, v___x_3170_, v___x_3169_);
if (v_isShared_3163_ == 0)
{
lean_ctor_set(v___x_3162_, 1, v___x_3171_);
lean_ctor_set(v___x_3162_, 0, v___x_3167_);
v___x_3173_ = v___x_3162_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v___x_3167_);
lean_ctor_set(v_reuseFailAlloc_3174_, 1, v___x_3171_);
v___x_3173_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
return v___x_3173_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___boxed(lean_object* v_self_3176_, lean_object* v_url_3177_, lean_object* v_hash_3178_, lean_object* v_path_3179_){
_start:
{
uint64_t v_hash_boxed_3180_; lean_object* v_res_3181_; 
v_hash_boxed_3180_ = lean_unbox_uint64(v_hash_3178_);
lean_dec_ref(v_hash_3178_);
v_res_3181_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push(v_self_3176_, v_url_3177_, v_hash_boxed_3180_, v_path_3179_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew(lean_object* v_self_3182_, lean_object* v_url_3183_, uint64_t v_hash_3184_, lean_object* v_path_3185_){
_start:
{
lean_object* v_infos_3186_; lean_object* v_indices_3187_; lean_object* v___f_3188_; lean_object* v___f_3189_; lean_object* v___x_3190_; uint8_t v___x_3191_; 
v_infos_3186_ = lean_ctor_get(v_self_3182_, 0);
v_indices_3187_ = lean_ctor_get(v_self_3182_, 1);
v___f_3188_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0));
v___f_3189_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1);
v___x_3190_ = lean_box_uint64(v_hash_3184_);
v___x_3191_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_3189_, v___f_3188_, v_indices_3187_, v___x_3190_);
if (v___x_3191_ == 0)
{
lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3204_; 
lean_inc_ref(v_indices_3187_);
lean_inc_ref(v_infos_3186_);
v_isSharedCheck_3204_ = !lean_is_exclusive(v_self_3182_);
if (v_isSharedCheck_3204_ == 0)
{
lean_object* v_unused_3205_; lean_object* v_unused_3206_; 
v_unused_3205_ = lean_ctor_get(v_self_3182_, 1);
lean_dec(v_unused_3205_);
v_unused_3206_ = lean_ctor_get(v_self_3182_, 0);
lean_dec(v_unused_3206_);
v___x_3193_ = v_self_3182_;
v_isShared_3194_ = v_isSharedCheck_3204_;
goto v_resetjp_3192_;
}
else
{
lean_dec(v_self_3182_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3204_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3202_; 
v___x_3195_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_3196_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_3196_, 0, v_url_3183_);
lean_ctor_set(v___x_3196_, 1, v_path_3185_);
lean_ctor_set(v___x_3196_, 2, v___x_3195_);
lean_ctor_set_uint64(v___x_3196_, sizeof(void*)*3, v_hash_3184_);
lean_inc_ref(v_infos_3186_);
v___x_3197_ = lean_array_push(v_infos_3186_, v___x_3196_);
v___x_3198_ = lean_array_get_size(v_infos_3186_);
lean_dec_ref(v_infos_3186_);
v___x_3199_ = lean_box_uint64(v_hash_3184_);
v___x_3200_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3189_, v___f_3188_, v_indices_3187_, v___x_3199_, v___x_3198_);
if (v_isShared_3194_ == 0)
{
lean_ctor_set(v___x_3193_, 1, v___x_3200_);
lean_ctor_set(v___x_3193_, 0, v___x_3197_);
v___x_3202_ = v___x_3193_;
goto v_reusejp_3201_;
}
else
{
lean_object* v_reuseFailAlloc_3203_; 
v_reuseFailAlloc_3203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3203_, 0, v___x_3197_);
lean_ctor_set(v_reuseFailAlloc_3203_, 1, v___x_3200_);
v___x_3202_ = v_reuseFailAlloc_3203_;
goto v_reusejp_3201_;
}
v_reusejp_3201_:
{
return v___x_3202_;
}
}
}
else
{
lean_dec_ref(v_path_3185_);
lean_dec_ref(v_url_3183_);
return v_self_3182_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew___boxed(lean_object* v_self_3207_, lean_object* v_url_3208_, lean_object* v_hash_3209_, lean_object* v_path_3210_){
_start:
{
uint64_t v_hash_boxed_3211_; lean_object* v_res_3212_; 
v_hash_boxed_3211_ = lean_unbox_uint64(v_hash_3209_);
lean_dec_ref(v_hash_3209_);
v_res_3212_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew(v_self_3207_, v_url_3208_, v_hash_boxed_3211_, v_path_3210_);
return v_res_3212_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add(lean_object* v_self_3213_, lean_object* v_url_3214_, uint64_t v_hash_3215_, lean_object* v_path_3216_, uint8_t v_extra_3217_){
_start:
{
lean_object* v_infos_3218_; lean_object* v_indices_3219_; lean_object* v___f_3220_; lean_object* v___f_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v_infos_3218_ = lean_ctor_get(v_self_3213_, 0);
v_indices_3219_ = lean_ctor_get(v_self_3213_, 1);
v___f_3220_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0));
v___f_3221_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1);
v___x_3222_ = lean_box_uint64(v_hash_3215_);
v___x_3223_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_3221_, v___f_3220_, v_indices_3219_, v___x_3222_);
if (lean_obj_tag(v___x_3223_) == 1)
{
lean_object* v_val_3224_; lean_object* v___x_3225_; uint8_t v___x_3226_; 
lean_dec_ref(v_url_3214_);
v_val_3224_ = lean_ctor_get(v___x_3223_, 0);
lean_inc(v_val_3224_);
lean_dec_ref_known(v___x_3223_, 1);
v___x_3225_ = lean_array_get_size(v_infos_3218_);
v___x_3226_ = lean_nat_dec_lt(v_val_3224_, v___x_3225_);
if (v___x_3226_ == 0)
{
lean_dec(v_val_3224_);
lean_dec_ref(v_path_3216_);
return v_self_3213_;
}
else
{
lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3263_; 
lean_inc_ref(v_indices_3219_);
lean_inc_ref(v_infos_3218_);
v_isSharedCheck_3263_ = !lean_is_exclusive(v_self_3213_);
if (v_isSharedCheck_3263_ == 0)
{
lean_object* v_unused_3264_; lean_object* v_unused_3265_; 
v_unused_3264_ = lean_ctor_get(v_self_3213_, 1);
lean_dec(v_unused_3264_);
v_unused_3265_ = lean_ctor_get(v_self_3213_, 0);
lean_dec(v_unused_3265_);
v___x_3228_ = v_self_3213_;
v_isShared_3229_ = v_isSharedCheck_3263_;
goto v_resetjp_3227_;
}
else
{
lean_dec(v_self_3213_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3263_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v_v_3230_; lean_object* v___x_3231_; lean_object* v_xs_x27_3232_; lean_object* v___y_3234_; 
v_v_3230_ = lean_array_fget(v_infos_3218_, v_val_3224_);
v___x_3231_ = lean_box(0);
v_xs_x27_3232_ = lean_array_fset(v_infos_3218_, v_val_3224_, v___x_3231_);
if (v_extra_3217_ == 0)
{
lean_object* v_url_3239_; uint64_t v_hash_3240_; lean_object* v_path_3241_; lean_object* v_extraPaths_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3250_; 
v_url_3239_ = lean_ctor_get(v_v_3230_, 0);
v_hash_3240_ = lean_ctor_get_uint64(v_v_3230_, sizeof(void*)*3);
v_path_3241_ = lean_ctor_get(v_v_3230_, 1);
v_extraPaths_3242_ = lean_ctor_get(v_v_3230_, 2);
v_isSharedCheck_3250_ = !lean_is_exclusive(v_v_3230_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3244_ = v_v_3230_;
v_isShared_3245_ = v_isSharedCheck_3250_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_extraPaths_3242_);
lean_inc(v_path_3241_);
lean_inc(v_url_3239_);
lean_dec(v_v_3230_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3250_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v___x_3246_; lean_object* v___x_3248_; 
v___x_3246_ = lean_array_push(v_extraPaths_3242_, v_path_3241_);
if (v_isShared_3245_ == 0)
{
lean_ctor_set(v___x_3244_, 2, v___x_3246_);
lean_ctor_set(v___x_3244_, 1, v_path_3216_);
v___x_3248_ = v___x_3244_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_url_3239_);
lean_ctor_set(v_reuseFailAlloc_3249_, 1, v_path_3216_);
lean_ctor_set(v_reuseFailAlloc_3249_, 2, v___x_3246_);
lean_ctor_set_uint64(v_reuseFailAlloc_3249_, sizeof(void*)*3, v_hash_3240_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
v___y_3234_ = v___x_3248_;
goto v___jp_3233_;
}
}
}
else
{
lean_object* v_url_3251_; uint64_t v_hash_3252_; lean_object* v_path_3253_; lean_object* v_extraPaths_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3262_; 
v_url_3251_ = lean_ctor_get(v_v_3230_, 0);
v_hash_3252_ = lean_ctor_get_uint64(v_v_3230_, sizeof(void*)*3);
v_path_3253_ = lean_ctor_get(v_v_3230_, 1);
v_extraPaths_3254_ = lean_ctor_get(v_v_3230_, 2);
v_isSharedCheck_3262_ = !lean_is_exclusive(v_v_3230_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3256_ = v_v_3230_;
v_isShared_3257_ = v_isSharedCheck_3262_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_extraPaths_3254_);
lean_inc(v_path_3253_);
lean_inc(v_url_3251_);
lean_dec(v_v_3230_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3262_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3258_; lean_object* v___x_3260_; 
v___x_3258_ = lean_array_push(v_extraPaths_3254_, v_path_3216_);
if (v_isShared_3257_ == 0)
{
lean_ctor_set(v___x_3256_, 2, v___x_3258_);
v___x_3260_ = v___x_3256_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_url_3251_);
lean_ctor_set(v_reuseFailAlloc_3261_, 1, v_path_3253_);
lean_ctor_set(v_reuseFailAlloc_3261_, 2, v___x_3258_);
lean_ctor_set_uint64(v_reuseFailAlloc_3261_, sizeof(void*)*3, v_hash_3252_);
v___x_3260_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
v___y_3234_ = v___x_3260_;
goto v___jp_3233_;
}
}
}
v___jp_3233_:
{
lean_object* v___x_3235_; lean_object* v___x_3237_; 
v___x_3235_ = lean_array_fset(v_xs_x27_3232_, v_val_3224_, v___y_3234_);
lean_dec(v_val_3224_);
if (v_isShared_3229_ == 0)
{
lean_ctor_set(v___x_3228_, 0, v___x_3235_);
v___x_3237_ = v___x_3228_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v___x_3235_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v_indices_3219_);
v___x_3237_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
return v___x_3237_;
}
}
}
}
}
else
{
lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3278_; 
lean_inc_ref(v_indices_3219_);
lean_inc_ref(v_infos_3218_);
lean_dec(v___x_3223_);
v_isSharedCheck_3278_ = !lean_is_exclusive(v_self_3213_);
if (v_isSharedCheck_3278_ == 0)
{
lean_object* v_unused_3279_; lean_object* v_unused_3280_; 
v_unused_3279_ = lean_ctor_get(v_self_3213_, 1);
lean_dec(v_unused_3279_);
v_unused_3280_ = lean_ctor_get(v_self_3213_, 0);
lean_dec(v_unused_3280_);
v___x_3267_ = v_self_3213_;
v_isShared_3268_ = v_isSharedCheck_3278_;
goto v_resetjp_3266_;
}
else
{
lean_dec(v_self_3213_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3278_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3276_; 
v___x_3269_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_3270_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_3270_, 0, v_url_3214_);
lean_ctor_set(v___x_3270_, 1, v_path_3216_);
lean_ctor_set(v___x_3270_, 2, v___x_3269_);
lean_ctor_set_uint64(v___x_3270_, sizeof(void*)*3, v_hash_3215_);
lean_inc_ref(v_infos_3218_);
v___x_3271_ = lean_array_push(v_infos_3218_, v___x_3270_);
v___x_3272_ = lean_array_get_size(v_infos_3218_);
lean_dec_ref(v_infos_3218_);
v___x_3273_ = lean_box_uint64(v_hash_3215_);
v___x_3274_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3221_, v___f_3220_, v_indices_3219_, v___x_3273_, v___x_3272_);
if (v_isShared_3268_ == 0)
{
lean_ctor_set(v___x_3267_, 1, v___x_3274_);
lean_ctor_set(v___x_3267_, 0, v___x_3271_);
v___x_3276_ = v___x_3267_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v___x_3271_);
lean_ctor_set(v_reuseFailAlloc_3277_, 1, v___x_3274_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add___boxed(lean_object* v_self_3281_, lean_object* v_url_3282_, lean_object* v_hash_3283_, lean_object* v_path_3284_, lean_object* v_extra_3285_){
_start:
{
uint64_t v_hash_boxed_3286_; uint8_t v_extra_boxed_3287_; lean_object* v_res_3288_; 
v_hash_boxed_3286_ = lean_unbox_uint64(v_hash_3283_);
lean_dec_ref(v_hash_3283_);
v_extra_boxed_3287_ = lean_unbox(v_extra_3285_);
v_res_3288_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add(v_self_3281_, v_url_3282_, v_hash_boxed_3286_, v_path_3284_, v_extra_boxed_3287_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath(lean_object* v_path_3290_){
_start:
{
lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3291_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
v___x_3292_ = l_System_FilePath_addExtension(v_path_3290_, v___x_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(lean_object* v_cfg_3294_, lean_object* v_out_3295_){
_start:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3296_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0));
v___x_3297_ = l_Lake_JsonObject_getJson_x3f(v_out_3295_, v___x_3296_);
if (lean_obj_tag(v___x_3297_) == 0)
{
lean_object* v___x_3298_; 
v___x_3298_ = lean_box(0);
return v___x_3298_;
}
else
{
lean_object* v_val_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3315_; 
v_val_3299_ = lean_ctor_get(v___x_3297_, 0);
v_isSharedCheck_3315_ = !lean_is_exclusive(v___x_3297_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3301_ = v___x_3297_;
v_isShared_3302_ = v_isSharedCheck_3315_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_val_3299_);
lean_dec(v___x_3297_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3315_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3303_; 
v___x_3303_ = l_Lean_Json_getNat_x3f(v_val_3299_);
if (lean_obj_tag(v___x_3303_) == 0)
{
lean_object* v___x_3304_; 
lean_dec_ref_known(v___x_3303_, 1);
lean_del_object(v___x_3301_);
v___x_3304_ = lean_box(0);
return v___x_3304_;
}
else
{
if (lean_obj_tag(v___x_3303_) == 1)
{
lean_object* v_a_3305_; lean_object* v_infos_3306_; lean_object* v___x_3307_; uint8_t v___x_3308_; 
v_a_3305_ = lean_ctor_get(v___x_3303_, 0);
lean_inc(v_a_3305_);
lean_dec_ref_known(v___x_3303_, 1);
v_infos_3306_ = lean_ctor_get(v_cfg_3294_, 1);
v___x_3307_ = lean_array_get_size(v_infos_3306_);
v___x_3308_ = lean_nat_dec_lt(v_a_3305_, v___x_3307_);
if (v___x_3308_ == 0)
{
lean_object* v___x_3309_; 
lean_dec(v_a_3305_);
lean_del_object(v___x_3301_);
v___x_3309_ = lean_box(0);
return v___x_3309_;
}
else
{
lean_object* v___x_3310_; lean_object* v___x_3312_; 
v___x_3310_ = lean_array_fget_borrowed(v_infos_3306_, v_a_3305_);
lean_dec(v_a_3305_);
lean_inc(v___x_3310_);
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 0, v___x_3310_);
v___x_3312_ = v___x_3301_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v___x_3310_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
return v___x_3312_;
}
}
}
else
{
lean_object* v___x_3314_; 
lean_dec_ref_known(v___x_3303_, 1);
lean_del_object(v___x_3301_);
v___x_3314_ = lean_box(0);
return v___x_3314_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___boxed(lean_object* v_cfg_3316_, lean_object* v_out_3317_){
_start:
{
lean_object* v_res_3318_; 
v_res_3318_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_3316_, v_out_3317_);
lean_dec(v_out_3317_);
lean_dec_ref(v_cfg_3316_);
return v_res_3318_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(lean_object* v_s_3319_, lean_object* v_pos_3320_){
_start:
{
lean_object* v_str_3321_; lean_object* v_startInclusive_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; uint8_t v_decide_3326_; 
v_str_3321_ = lean_ctor_get(v_s_3319_, 0);
v_startInclusive_3322_ = lean_ctor_get(v_s_3319_, 1);
v___x_3323_ = lean_nat_add(v_startInclusive_3322_, v_pos_3320_);
v___x_3324_ = lean_nat_sub(v___x_3323_, v_startInclusive_3322_);
v___x_3325_ = lean_unsigned_to_nat(0u);
v_decide_3326_ = lean_nat_dec_eq(v___x_3324_, v___x_3325_);
if (v_decide_3326_ == 0)
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3335_; uint32_t v___x_3336_; uint32_t v___x_3337_; uint8_t v___x_3338_; 
lean_inc(v_startInclusive_3322_);
lean_inc_ref(v_str_3321_);
v___x_3327_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3327_, 0, v_str_3321_);
lean_ctor_set(v___x_3327_, 1, v_startInclusive_3322_);
lean_ctor_set(v___x_3327_, 2, v___x_3323_);
v___x_3328_ = lean_unsigned_to_nat(1u);
v___x_3329_ = lean_nat_sub(v___x_3324_, v___x_3328_);
lean_dec(v___x_3324_);
v___x_3330_ = l_String_Slice_posLE(v___x_3327_, v___x_3329_);
lean_dec_ref_known(v___x_3327_, 3);
v___x_3335_ = lean_nat_add(v_startInclusive_3322_, v___x_3330_);
v___x_3336_ = lean_string_utf8_get_fast(v_str_3321_, v___x_3335_);
lean_dec(v___x_3335_);
v___x_3337_ = 32;
v___x_3338_ = lean_uint32_dec_eq(v___x_3336_, v___x_3337_);
if (v___x_3338_ == 0)
{
uint32_t v___x_3339_; uint8_t v___x_3340_; 
v___x_3339_ = 9;
v___x_3340_ = lean_uint32_dec_eq(v___x_3336_, v___x_3339_);
if (v___x_3340_ == 0)
{
uint32_t v___x_3341_; uint8_t v___x_3342_; 
v___x_3341_ = 13;
v___x_3342_ = lean_uint32_dec_eq(v___x_3336_, v___x_3341_);
if (v___x_3342_ == 0)
{
uint32_t v___x_3343_; uint8_t v___x_3344_; 
v___x_3343_ = 10;
v___x_3344_ = lean_uint32_dec_eq(v___x_3336_, v___x_3343_);
if (v___x_3344_ == 0)
{
lean_dec(v___x_3330_);
return v_pos_3320_;
}
else
{
goto v___jp_3331_;
}
}
else
{
goto v___jp_3331_;
}
}
else
{
goto v___jp_3331_;
}
}
else
{
goto v___jp_3331_;
}
v___jp_3331_:
{
lean_object* v___x_3332_; uint8_t v___x_3333_; 
v___x_3332_ = lean_nat_add(v___x_3330_, v___x_3328_);
v___x_3333_ = lean_nat_dec_le(v___x_3332_, v_pos_3320_);
lean_dec(v___x_3332_);
if (v___x_3333_ == 0)
{
lean_dec(v___x_3330_);
return v_pos_3320_;
}
else
{
lean_dec(v_pos_3320_);
v_pos_3320_ = v___x_3330_;
goto _start;
}
}
}
else
{
lean_dec(v___x_3324_);
lean_dec(v___x_3323_);
return v_pos_3320_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0___boxed(lean_object* v_s_3345_, lean_object* v_pos_3346_){
_start:
{
lean_object* v_res_3347_; 
v_res_3347_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v_s_3345_, v_pos_3346_);
lean_dec_ref(v_s_3345_);
return v_res_3347_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(lean_object* v_cfg_3360_, lean_object* v_hOut_3361_, lean_object* v_info_3362_, lean_object* v_code_x3f_3363_, lean_object* v_out_3364_, lean_object* v_line_3365_, lean_object* v___y_3366_){
_start:
{
lean_object* v_msg_3369_; lean_object* v___y_3370_; lean_object* v___y_3387_; lean_object* v___y_3388_; lean_object* v_a_3389_; lean_object* v___y_3395_; lean_object* v___y_3396_; lean_object* v___y_3397_; lean_object* v___y_3398_; lean_object* v_val_3399_; lean_object* v___y_3407_; lean_object* v___y_3408_; lean_object* v___y_3409_; uint8_t v_kind_3438_; lean_object* v_scope_3439_; lean_object* v_msg_3441_; lean_object* v___y_3442_; lean_object* v_msg_3485_; lean_object* v___y_3486_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3514_; 
v_kind_3438_ = lean_ctor_get_uint8(v_cfg_3360_, sizeof(void*)*3);
v_scope_3439_ = lean_ctor_get(v_cfg_3360_, 0);
lean_inc_ref(v_scope_3439_);
lean_dec_ref(v_cfg_3360_);
if (v_kind_3438_ == 0)
{
lean_object* v___x_3516_; 
v___x_3516_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___y_3514_ = v___x_3516_;
goto v___jp_3513_;
}
else
{
lean_object* v___x_3517_; 
v___x_3517_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___y_3514_ = v___x_3517_;
goto v___jp_3513_;
}
v___jp_3368_:
{
uint8_t v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; uint8_t v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v___x_3371_ = 3;
v___x_3372_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3372_, 0, v_msg_3369_);
lean_ctor_set_uint8(v___x_3372_, sizeof(void*)*1, v___x_3371_);
lean_inc_ref_n(v___y_3370_, 2);
v___x_3373_ = lean_apply_2(v___y_3370_, v___x_3372_, lean_box(0));
v___x_3374_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0));
v___x_3375_ = lean_unsigned_to_nat(0u);
v___x_3376_ = lean_string_utf8_byte_size(v_line_3365_);
lean_inc_ref(v_line_3365_);
v___x_3377_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3377_, 0, v_line_3365_);
lean_ctor_set(v___x_3377_, 1, v___x_3375_);
lean_ctor_set(v___x_3377_, 2, v___x_3376_);
v___x_3378_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_3377_, v___x_3376_);
lean_dec_ref_known(v___x_3377_, 3);
v___x_3379_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3379_, 0, v_line_3365_);
lean_ctor_set(v___x_3379_, 1, v___x_3375_);
lean_ctor_set(v___x_3379_, 2, v___x_3378_);
v___x_3380_ = l_String_Slice_toString(v___x_3379_);
lean_dec_ref_known(v___x_3379_, 3);
v___x_3381_ = lean_string_append(v___x_3374_, v___x_3380_);
lean_dec_ref(v___x_3380_);
v___x_3382_ = 0;
v___x_3383_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3383_, 0, v___x_3381_);
lean_ctor_set_uint8(v___x_3383_, sizeof(void*)*1, v___x_3382_);
v___x_3384_ = lean_apply_2(v___y_3370_, v___x_3383_, lean_box(0));
v___x_3385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3385_, 0, v___x_3384_);
return v___x_3385_;
}
v___jp_3386_:
{
if (lean_obj_tag(v_a_3389_) == 1)
{
lean_object* v_a_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v_a_3390_ = lean_ctor_get(v_a_3389_, 0);
lean_inc(v_a_3390_);
lean_dec_ref_known(v_a_3389_, 1);
v___x_3391_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_3392_ = lean_string_append(v___y_3388_, v___x_3391_);
v___x_3393_ = lean_string_append(v___x_3392_, v_a_3390_);
lean_dec(v_a_3390_);
v_msg_3369_ = v___x_3393_;
v___y_3370_ = v___y_3387_;
goto v___jp_3368_;
}
else
{
lean_dec_ref(v_a_3389_);
v_msg_3369_ = v___y_3388_;
v___y_3370_ = v___y_3387_;
goto v___jp_3368_;
}
}
v___jp_3394_:
{
lean_object* v___x_3400_; uint8_t v___x_3401_; 
v___x_3400_ = lean_array_get_size(v___y_3397_);
v___x_3401_ = lean_nat_dec_lt(v___y_3398_, v___x_3400_);
if (v___x_3401_ == 0)
{
v___y_3387_ = v___y_3395_;
v___y_3388_ = v___y_3396_;
v_a_3389_ = v_val_3399_;
goto v___jp_3386_;
}
else
{
lean_object* v___x_3402_; size_t v___x_3403_; size_t v___x_3404_; lean_object* v___x_3405_; 
v___x_3402_ = lean_box(0);
v___x_3403_ = ((size_t)0ULL);
v___x_3404_ = lean_usize_of_nat(v___x_3400_);
v___x_3405_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_3397_, v___x_3403_, v___x_3404_, v___x_3402_, v___y_3395_);
if (lean_obj_tag(v___x_3405_) == 0)
{
lean_dec_ref_known(v___x_3405_, 1);
v___y_3387_ = v___y_3395_;
v___y_3388_ = v___y_3396_;
v_a_3389_ = v_val_3399_;
goto v___jp_3386_;
}
else
{
lean_dec_ref(v_val_3399_);
lean_dec_ref(v___y_3396_);
lean_dec_ref(v_line_3365_);
return v___x_3405_;
}
}
}
v___jp_3406_:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3410_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_3411_ = l_Lake_JsonObject_getJson_x3f(v_out_3364_, v___x_3410_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_dec_ref(v___y_3407_);
v_msg_3369_ = v___y_3409_;
v___y_3370_ = v___y_3408_;
goto v___jp_3368_;
}
else
{
lean_object* v_val_3412_; lean_object* v___x_3413_; 
v_val_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_val_3412_);
lean_dec_ref_known(v___x_3411_, 1);
v___x_3413_ = l_Lean_Json_getNat_x3f(v_val_3412_);
if (lean_obj_tag(v___x_3413_) == 0)
{
lean_dec_ref_known(v___x_3413_, 1);
lean_dec_ref(v___y_3407_);
v_msg_3369_ = v___y_3409_;
v___y_3370_ = v___y_3408_;
goto v___jp_3368_;
}
else
{
if (lean_obj_tag(v___x_3413_) == 1)
{
lean_object* v_a_3414_; lean_object* v___x_3415_; uint8_t v___x_3416_; 
v_a_3414_ = lean_ctor_get(v___x_3413_, 0);
lean_inc(v_a_3414_);
lean_dec_ref_known(v___x_3413_, 1);
v___x_3415_ = lean_unsigned_to_nat(0u);
v___x_3416_ = lean_nat_dec_lt(v___x_3415_, v_a_3414_);
lean_dec(v_a_3414_);
if (v___x_3416_ == 0)
{
lean_dec_ref(v___y_3407_);
v_msg_3369_ = v___y_3409_;
v___y_3370_ = v___y_3408_;
goto v___jp_3368_;
}
else
{
lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3417_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3));
v___x_3418_ = l_Lake_JsonObject_getJson_x3f(v_out_3364_, v___x_3417_);
if (lean_obj_tag(v___x_3418_) == 0)
{
lean_dec_ref(v___y_3407_);
v_msg_3369_ = v___y_3409_;
v___y_3370_ = v___y_3408_;
goto v___jp_3368_;
}
else
{
lean_object* v_val_3419_; lean_object* v___x_3420_; 
v_val_3419_ = lean_ctor_get(v___x_3418_, 0);
lean_inc(v_val_3419_);
lean_dec_ref_known(v___x_3418_, 1);
v___x_3420_ = l_Lean_Json_getStr_x3f(v_val_3419_);
if (lean_obj_tag(v___x_3420_) == 0)
{
lean_dec_ref_known(v___x_3420_, 1);
lean_dec_ref(v___y_3407_);
v_msg_3369_ = v___y_3409_;
v___y_3370_ = v___y_3408_;
goto v___jp_3368_;
}
else
{
if (lean_obj_tag(v___x_3420_) == 1)
{
lean_object* v_a_3421_; lean_object* v___x_3423_; uint8_t v_isShared_3424_; uint8_t v_isSharedCheck_3437_; 
v_a_3421_ = lean_ctor_get(v___x_3420_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3423_ = v___x_3420_;
v_isShared_3424_ = v_isSharedCheck_3437_;
goto v_resetjp_3422_;
}
else
{
lean_inc(v_a_3421_);
lean_dec(v___x_3420_);
v___x_3423_ = lean_box(0);
v_isShared_3424_ = v_isSharedCheck_3437_;
goto v_resetjp_3422_;
}
v_resetjp_3422_:
{
lean_object* v___x_3425_; uint8_t v___x_3426_; 
v___x_3425_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_3426_ = lean_string_dec_eq(v_a_3421_, v___x_3425_);
lean_dec(v_a_3421_);
if (v___x_3426_ == 0)
{
lean_object* v___x_3427_; lean_object* v___x_3428_; 
v___x_3427_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3428_ = l_IO_FS_readFile(v___y_3407_);
lean_dec_ref(v___y_3407_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v_a_3429_; lean_object* v___x_3431_; 
v_a_3429_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_a_3429_);
lean_dec_ref_known(v___x_3428_, 1);
if (v_isShared_3424_ == 0)
{
lean_ctor_set(v___x_3423_, 0, v_a_3429_);
v___x_3431_ = v___x_3423_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_a_3429_);
v___x_3431_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
v___y_3395_ = v___y_3408_;
v___y_3396_ = v___y_3409_;
v___y_3397_ = v___x_3427_;
v___y_3398_ = v___x_3415_;
v_val_3399_ = v___x_3431_;
goto v___jp_3394_;
}
}
else
{
lean_object* v_a_3433_; lean_object* v___x_3435_; 
v_a_3433_ = lean_ctor_get(v___x_3428_, 0);
lean_inc(v_a_3433_);
lean_dec_ref_known(v___x_3428_, 1);
if (v_isShared_3424_ == 0)
{
lean_ctor_set_tag(v___x_3423_, 0);
lean_ctor_set(v___x_3423_, 0, v_a_3433_);
v___x_3435_ = v___x_3423_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_a_3433_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
v___y_3395_ = v___y_3408_;
v___y_3396_ = v___y_3409_;
v___y_3397_ = v___x_3427_;
v___y_3398_ = v___x_3415_;
v_val_3399_ = v___x_3435_;
goto v___jp_3394_;
}
}
}
else
{
lean_del_object(v___x_3423_);
lean_dec_ref(v___y_3407_);
v_msg_3369_ = v___y_3409_;
v___y_3370_ = v___y_3408_;
goto v___jp_3368_;
}
}
}
else
{
lean_dec_ref_known(v___x_3420_, 1);
lean_dec_ref(v___y_3407_);
v_msg_3369_ = v___y_3409_;
v___y_3370_ = v___y_3408_;
goto v___jp_3368_;
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_3413_, 1);
lean_dec_ref(v___y_3407_);
v_msg_3369_ = v___y_3409_;
v___y_3370_ = v___y_3408_;
goto v___jp_3368_;
}
}
}
}
v___jp_3440_:
{
lean_object* v_url_3443_; lean_object* v_path_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v_msg_3450_; 
v_url_3443_ = lean_ctor_get(v_info_3362_, 0);
lean_inc_ref(v_url_3443_);
v_path_3444_ = lean_ctor_get(v_info_3362_, 1);
lean_inc_ref(v_path_3444_);
lean_dec_ref(v_info_3362_);
v___x_3445_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3446_ = lean_string_append(v_msg_3441_, v___x_3445_);
v___x_3447_ = lean_string_append(v___x_3446_, v_path_3444_);
v___x_3448_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3449_ = lean_string_append(v___x_3447_, v___x_3448_);
v_msg_3450_ = lean_string_append(v___x_3449_, v_url_3443_);
lean_dec_ref(v_url_3443_);
if (v_kind_3438_ == 0)
{
lean_object* v___x_3451_; lean_object* v_tmpPath_3452_; 
v___x_3451_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
v_tmpPath_3452_ = l_System_FilePath_addExtension(v_path_3444_, v___x_3451_);
if (lean_obj_tag(v_code_x3f_3363_) == 1)
{
lean_object* v_a_3453_; lean_object* v___x_3454_; uint8_t v___x_3455_; 
v_a_3453_ = lean_ctor_get(v_code_x3f_3363_, 0);
lean_inc(v_a_3453_);
lean_dec_ref_known(v_code_x3f_3363_, 1);
v___x_3454_ = lean_unsigned_to_nat(404u);
v___x_3455_ = lean_nat_dec_eq(v_a_3453_, v___x_3454_);
lean_dec(v_a_3453_);
if (v___x_3455_ == 0)
{
v___y_3407_ = v_tmpPath_3452_;
v___y_3408_ = v___y_3442_;
v___y_3409_ = v_msg_3450_;
goto v___jp_3406_;
}
else
{
lean_dec_ref(v_tmpPath_3452_);
v_msg_3369_ = v_msg_3450_;
v___y_3370_ = v___y_3442_;
goto v___jp_3368_;
}
}
else
{
lean_dec_ref(v_code_x3f_3363_);
v___y_3407_ = v_tmpPath_3452_;
v___y_3408_ = v___y_3442_;
v___y_3409_ = v_msg_3450_;
goto v___jp_3406_;
}
}
else
{
lean_object* v___x_3456_; lean_object* v___x_3457_; 
lean_dec_ref(v_path_3444_);
lean_dec_ref(v_code_x3f_3363_);
v___x_3456_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_3457_ = l_Lake_JsonObject_getJson_x3f(v_out_3364_, v___x_3456_);
if (lean_obj_tag(v___x_3457_) == 0)
{
v_msg_3369_ = v_msg_3450_;
v___y_3370_ = v___y_3442_;
goto v___jp_3368_;
}
else
{
lean_object* v_val_3458_; lean_object* v___x_3459_; 
v_val_3458_ = lean_ctor_get(v___x_3457_, 0);
lean_inc(v_val_3458_);
lean_dec_ref_known(v___x_3457_, 1);
v___x_3459_ = l_Lean_Json_getNat_x3f(v_val_3458_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_dec_ref_known(v___x_3459_, 1);
v_msg_3369_ = v_msg_3450_;
v___y_3370_ = v___y_3442_;
goto v___jp_3368_;
}
else
{
if (lean_obj_tag(v___x_3459_) == 1)
{
lean_object* v_a_3460_; lean_object* v___x_3461_; uint8_t v___x_3462_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
lean_inc(v_a_3460_);
lean_dec_ref_known(v___x_3459_, 1);
v___x_3461_ = lean_unsigned_to_nat(0u);
v___x_3462_ = lean_nat_dec_lt(v___x_3461_, v_a_3460_);
if (v___x_3462_ == 0)
{
lean_dec(v_a_3460_);
v_msg_3369_ = v_msg_3450_;
v___y_3370_ = v___y_3442_;
goto v___jp_3368_;
}
else
{
size_t v___x_3463_; lean_object* v___x_3464_; 
v___x_3463_ = lean_usize_of_nat(v_a_3460_);
lean_dec(v_a_3460_);
v___x_3464_ = lean_io_prim_handle_read(v_hOut_3361_, v___x_3463_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; uint8_t v___x_3466_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_a_3465_);
lean_dec_ref_known(v___x_3464_, 1);
v___x_3466_ = lean_string_validate_utf8(v_a_3465_);
if (v___x_3466_ == 0)
{
lean_dec(v_a_3465_);
v_msg_3369_ = v_msg_3450_;
v___y_3370_ = v___y_3442_;
goto v___jp_3368_;
}
else
{
lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3467_ = lean_string_from_utf8_unchecked(v_a_3465_);
v___x_3468_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_3469_ = lean_string_append(v_msg_3450_, v___x_3468_);
v___x_3470_ = lean_string_append(v___x_3469_, v___x_3467_);
lean_dec_ref(v___x_3467_);
v_msg_3369_ = v___x_3470_;
v___y_3370_ = v___y_3442_;
goto v___jp_3368_;
}
}
else
{
lean_object* v_a_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3483_; 
lean_dec_ref(v_msg_3450_);
lean_dec_ref(v_line_3365_);
v_a_3471_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3473_ = v___x_3464_;
v_isShared_3474_ = v_isSharedCheck_3483_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_a_3471_);
lean_dec(v___x_3464_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3483_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3475_; uint8_t v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3481_; 
v___x_3475_ = lean_io_error_to_string(v_a_3471_);
v___x_3476_ = 3;
v___x_3477_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3477_, 0, v___x_3475_);
lean_ctor_set_uint8(v___x_3477_, sizeof(void*)*1, v___x_3476_);
lean_inc_ref(v___y_3442_);
v___x_3478_ = lean_apply_2(v___y_3442_, v___x_3477_, lean_box(0));
v___x_3479_ = lean_box(0);
if (v_isShared_3474_ == 0)
{
lean_ctor_set(v___x_3473_, 0, v___x_3479_);
v___x_3481_ = v___x_3473_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v___x_3479_);
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
else
{
lean_dec_ref_known(v___x_3459_, 1);
v_msg_3369_ = v_msg_3450_;
v___y_3370_ = v___y_3442_;
goto v___jp_3368_;
}
}
}
}
}
v___jp_3484_:
{
lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3487_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4));
v___x_3488_ = l_Lake_JsonObject_getJson_x3f(v_out_3364_, v___x_3487_);
if (lean_obj_tag(v___x_3488_) == 0)
{
v_msg_3441_ = v_msg_3485_;
v___y_3442_ = v___y_3486_;
goto v___jp_3440_;
}
else
{
lean_object* v_val_3489_; lean_object* v___x_3490_; 
v_val_3489_ = lean_ctor_get(v___x_3488_, 0);
lean_inc(v_val_3489_);
lean_dec_ref_known(v___x_3488_, 1);
v___x_3490_ = l_Lean_Json_getStr_x3f(v_val_3489_);
if (lean_obj_tag(v___x_3490_) == 0)
{
lean_dec_ref_known(v___x_3490_, 1);
v_msg_3441_ = v_msg_3485_;
v___y_3442_ = v___y_3486_;
goto v___jp_3440_;
}
else
{
if (lean_obj_tag(v___x_3490_) == 1)
{
lean_object* v_a_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v_msg_3494_; 
v_a_3491_ = lean_ctor_get(v___x_3490_, 0);
lean_inc(v_a_3491_);
lean_dec_ref_known(v___x_3490_, 1);
v___x_3492_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5));
v___x_3493_ = lean_string_append(v_msg_3485_, v___x_3492_);
v_msg_3494_ = lean_string_append(v___x_3493_, v_a_3491_);
lean_dec(v_a_3491_);
v_msg_3441_ = v_msg_3494_;
v___y_3442_ = v___y_3486_;
goto v___jp_3440_;
}
else
{
lean_dec_ref_known(v___x_3490_, 1);
v_msg_3441_ = v_msg_3485_;
v___y_3442_ = v___y_3486_;
goto v___jp_3440_;
}
}
}
}
v___jp_3495_:
{
uint64_t v_hash_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v_msg_3505_; 
v_hash_3498_ = lean_ctor_get_uint64(v_info_3362_, sizeof(void*)*3);
v___x_3499_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_3500_ = lean_string_append(v___y_3497_, v___x_3499_);
v___x_3501_ = lean_string_append(v___x_3500_, v___y_3496_);
v___x_3502_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7));
v___x_3503_ = lean_string_append(v___x_3501_, v___x_3502_);
v___x_3504_ = l_Lake_lowerHexUInt64(v_hash_3498_);
v_msg_3505_ = lean_string_append(v___x_3503_, v___x_3504_);
lean_dec_ref(v___x_3504_);
if (lean_obj_tag(v_code_x3f_3363_) == 1)
{
lean_object* v_a_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v_msg_3512_; 
v_a_3506_ = lean_ctor_get(v_code_x3f_3363_, 0);
v___x_3507_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8));
v___x_3508_ = lean_string_append(v_msg_3505_, v___x_3507_);
lean_inc(v_a_3506_);
v___x_3509_ = l_Nat_reprFast(v_a_3506_);
v___x_3510_ = lean_string_append(v___x_3508_, v___x_3509_);
lean_dec_ref(v___x_3509_);
v___x_3511_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9));
v_msg_3512_ = lean_string_append(v___x_3510_, v___x_3511_);
v_msg_3485_ = v_msg_3512_;
v___y_3486_ = v___y_3366_;
goto v___jp_3484_;
}
else
{
v_msg_3485_ = v_msg_3505_;
v___y_3486_ = v___y_3366_;
goto v___jp_3484_;
}
}
v___jp_3513_:
{
lean_object* v_s_3515_; 
v_s_3515_ = lean_ctor_get(v_scope_3439_, 0);
lean_inc_ref(v_s_3515_);
lean_dec_ref(v_scope_3439_);
v___y_3496_ = v___y_3514_;
v___y_3497_ = v_s_3515_;
goto v___jp_3495_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___boxed(lean_object* v_cfg_3518_, lean_object* v_hOut_3519_, lean_object* v_info_3520_, lean_object* v_code_x3f_3521_, lean_object* v_out_3522_, lean_object* v_line_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_){
_start:
{
lean_object* v_res_3526_; 
v_res_3526_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3518_, v_hOut_3519_, v_info_3520_, v_code_x3f_3521_, v_out_3522_, v_line_3523_, v___y_3524_);
lean_dec_ref(v___y_3524_);
lean_dec(v_out_3522_);
lean_dec(v_hOut_3519_);
return v_res_3526_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0(uint64_t v___x_3528_, uint64_t v_hash_3529_, lean_object* v_a_3530_, lean_object* v_as_3531_, size_t v_sz_3532_, size_t v_i_3533_, lean_object* v_b_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_){
_start:
{
lean_object* v_a_3539_; lean_object* v_snd_3540_; uint8_t v___x_3544_; 
v___x_3544_ = lean_usize_dec_lt(v_i_3533_, v_sz_3532_);
if (v___x_3544_ == 0)
{
lean_object* v___x_3545_; lean_object* v___x_3546_; 
v___x_3545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3545_, 0, v_b_3534_);
lean_ctor_set(v___x_3545_, 1, v___y_3535_);
v___x_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3545_);
return v___x_3546_;
}
else
{
uint8_t v___x_3547_; lean_object* v___x_3548_; lean_object* v_a_3549_; lean_object* v_fst_3551_; lean_object* v_snd_3552_; lean_object* v___x_3569_; lean_object* v_val_3571_; lean_object* v___x_3584_; 
v___x_3547_ = lean_uint64_dec_eq(v___x_3528_, v_hash_3529_);
v___x_3548_ = lean_box(0);
v_a_3549_ = lean_array_uget_borrowed(v_as_3531_, v_i_3533_);
v___x_3569_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3584_ = l_IO_FS_writeBinFile(v_a_3549_, v_a_3530_);
if (lean_obj_tag(v___x_3584_) == 0)
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3592_; 
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
lean_ctor_set_tag(v___x_3587_, 1);
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
v_val_3571_ = v___x_3590_;
goto v___jp_3570_;
}
}
}
else
{
lean_object* v_a_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3600_; 
v_a_3593_ = lean_ctor_get(v___x_3584_, 0);
v_isSharedCheck_3600_ = !lean_is_exclusive(v___x_3584_);
if (v_isSharedCheck_3600_ == 0)
{
v___x_3595_ = v___x_3584_;
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_a_3593_);
lean_dec(v___x_3584_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3600_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3598_; 
if (v_isShared_3596_ == 0)
{
lean_ctor_set_tag(v___x_3595_, 0);
v___x_3598_ = v___x_3595_;
goto v_reusejp_3597_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v_a_3593_);
v___x_3598_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3597_;
}
v_reusejp_3597_:
{
v_val_3571_ = v___x_3598_;
goto v___jp_3570_;
}
}
}
v___jp_3550_:
{
if (lean_obj_tag(v_fst_3551_) == 0)
{
lean_object* v_a_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; uint8_t v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v_numSuccesses_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3568_; 
v_a_3553_ = lean_ctor_get(v_fst_3551_, 0);
lean_inc(v_a_3553_);
lean_dec_ref_known(v_fst_3551_, 1);
v___x_3554_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0___closed__0));
lean_inc(v_a_3549_);
v___x_3555_ = lean_string_append(v_a_3549_, v___x_3554_);
v___x_3556_ = lean_io_error_to_string(v_a_3553_);
v___x_3557_ = lean_string_append(v___x_3555_, v___x_3556_);
lean_dec_ref(v___x_3556_);
v___x_3558_ = 3;
v___x_3559_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3559_, 0, v___x_3557_);
lean_ctor_set_uint8(v___x_3559_, sizeof(void*)*1, v___x_3558_);
lean_inc_ref(v___y_3536_);
v___x_3560_ = lean_apply_2(v___y_3536_, v___x_3559_, lean_box(0));
v_numSuccesses_3561_ = lean_ctor_get(v_snd_3552_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v_snd_3552_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3563_ = v_snd_3552_;
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_numSuccesses_3561_);
lean_dec(v_snd_3552_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___x_3566_; 
if (v_isShared_3564_ == 0)
{
v___x_3566_ = v___x_3563_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_numSuccesses_3561_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
lean_ctor_set_uint8(v___x_3566_, sizeof(void*)*1, v___x_3547_);
v_a_3539_ = v___x_3548_;
v_snd_3540_ = v___x_3566_;
goto v___jp_3538_;
}
}
}
else
{
lean_dec_ref(v_fst_3551_);
v_a_3539_ = v___x_3548_;
v_snd_3540_ = v_snd_3552_;
goto v___jp_3538_;
}
}
v___jp_3570_:
{
uint8_t v___x_3572_; 
v___x_3572_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_3572_ == 0)
{
v_fst_3551_ = v_val_3571_;
v_snd_3552_ = v___y_3535_;
goto v___jp_3550_;
}
else
{
size_t v___x_3573_; size_t v___x_3574_; lean_object* v___x_3575_; 
v___x_3573_ = ((size_t)0ULL);
v___x_3574_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_3575_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_3569_, v___x_3573_, v___x_3574_, v___x_3548_, v___y_3536_);
if (lean_obj_tag(v___x_3575_) == 0)
{
lean_dec_ref_known(v___x_3575_, 1);
v_fst_3551_ = v_val_3571_;
v_snd_3552_ = v___y_3535_;
goto v___jp_3550_;
}
else
{
lean_object* v_a_3576_; lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3583_; 
lean_dec_ref(v_val_3571_);
lean_dec_ref(v___y_3535_);
v_a_3576_ = lean_ctor_get(v___x_3575_, 0);
v_isSharedCheck_3583_ = !lean_is_exclusive(v___x_3575_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3578_ = v___x_3575_;
v_isShared_3579_ = v_isSharedCheck_3583_;
goto v_resetjp_3577_;
}
else
{
lean_inc(v_a_3576_);
lean_dec(v___x_3575_);
v___x_3578_ = lean_box(0);
v_isShared_3579_ = v_isSharedCheck_3583_;
goto v_resetjp_3577_;
}
v_resetjp_3577_:
{
lean_object* v___x_3581_; 
if (v_isShared_3579_ == 0)
{
v___x_3581_ = v___x_3578_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v_a_3576_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
return v___x_3581_;
}
}
}
}
}
}
v___jp_3538_:
{
size_t v___x_3541_; size_t v___x_3542_; 
v___x_3541_ = ((size_t)1ULL);
v___x_3542_ = lean_usize_add(v_i_3533_, v___x_3541_);
v_i_3533_ = v___x_3542_;
v_b_3534_ = v_a_3539_;
v___y_3535_ = v_snd_3540_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0___boxed(lean_object* v___x_3601_, lean_object* v_hash_3602_, lean_object* v_a_3603_, lean_object* v_as_3604_, lean_object* v_sz_3605_, lean_object* v_i_3606_, lean_object* v_b_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_){
_start:
{
uint64_t v___x_25605__boxed_3611_; uint64_t v_hash_25606__boxed_3612_; size_t v_sz_boxed_3613_; size_t v_i_boxed_3614_; lean_object* v_res_3615_; 
v___x_25605__boxed_3611_ = lean_unbox_uint64(v___x_3601_);
lean_dec_ref(v___x_3601_);
v_hash_25606__boxed_3612_ = lean_unbox_uint64(v_hash_3602_);
lean_dec_ref(v_hash_3602_);
v_sz_boxed_3613_ = lean_unbox_usize(v_sz_3605_);
lean_dec(v_sz_3605_);
v_i_boxed_3614_ = lean_unbox_usize(v_i_3606_);
lean_dec(v_i_3606_);
v_res_3615_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0(v___x_25605__boxed_3611_, v_hash_25606__boxed_3612_, v_a_3603_, v_as_3604_, v_sz_boxed_3613_, v_i_boxed_3614_, v_b_3607_, v___y_3608_, v___y_3609_);
lean_dec_ref(v___y_3609_);
lean_dec_ref(v_as_3604_);
lean_dec_ref(v_a_3603_);
return v_res_3615_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(lean_object* v_cfg_3620_, lean_object* v_hOut_3621_, lean_object* v_info_3622_, lean_object* v_code_3623_, lean_object* v_out_3624_, lean_object* v_line_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_){
_start:
{
lean_object* v___y_3630_; lean_object* v_url_3645_; uint64_t v_hash_3646_; lean_object* v_path_3647_; lean_object* v_extraPaths_3648_; uint64_t v___y_3650_; lean_object* v___y_3651_; uint8_t v___y_3652_; lean_object* v_fst_3653_; lean_object* v_snd_3654_; uint64_t v___y_3690_; lean_object* v___y_3691_; lean_object* v___y_3692_; lean_object* v___y_3693_; lean_object* v___y_3694_; uint8_t v___y_3695_; lean_object* v_val_3696_; lean_object* v___y_3712_; lean_object* v___y_3713_; lean_object* v_fst_3714_; lean_object* v_snd_3715_; lean_object* v___y_3813_; lean_object* v___y_3814_; lean_object* v___y_3815_; lean_object* v___y_3816_; lean_object* v_val_3817_; lean_object* v___y_3833_; lean_object* v___y_3862_; uint8_t v_kind_3896_; 
v_url_3645_ = lean_ctor_get(v_info_3622_, 0);
v_hash_3646_ = lean_ctor_get_uint64(v_info_3622_, sizeof(void*)*3);
v_path_3647_ = lean_ctor_get(v_info_3622_, 1);
v_extraPaths_3648_ = lean_ctor_get(v_info_3622_, 2);
v_kind_3896_ = lean_ctor_get_uint8(v_cfg_3620_, sizeof(void*)*3);
if (v_kind_3896_ == 0)
{
lean_object* v_scope_3897_; lean_object* v_s_3898_; 
v_scope_3897_ = lean_ctor_get(v_cfg_3620_, 0);
v_s_3898_ = lean_ctor_get(v_scope_3897_, 0);
lean_inc_ref(v_s_3898_);
v___y_3862_ = v_s_3898_;
goto v___jp_3861_;
}
else
{
lean_object* v_scope_3899_; lean_object* v_s_3900_; 
lean_inc_ref(v_path_3647_);
lean_inc_ref(v_url_3645_);
lean_dec_ref(v_line_3625_);
lean_dec(v_code_3623_);
lean_dec_ref(v_info_3622_);
v_scope_3899_ = lean_ctor_get(v_cfg_3620_, 0);
lean_inc_ref(v_scope_3899_);
lean_dec_ref(v_cfg_3620_);
v_s_3900_ = lean_ctor_get(v_scope_3899_, 0);
lean_inc_ref(v_s_3900_);
lean_dec_ref(v_scope_3899_);
v___y_3833_ = v_s_3900_;
goto v___jp_3832_;
}
v___jp_3629_:
{
uint8_t v_didError_3631_; lean_object* v_numSuccesses_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3644_; 
v_didError_3631_ = lean_ctor_get_uint8(v___y_3630_, sizeof(void*)*1);
v_numSuccesses_3632_ = lean_ctor_get(v___y_3630_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___y_3630_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3634_ = v___y_3630_;
v_isShared_3635_ = v_isSharedCheck_3644_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_numSuccesses_3632_);
lean_dec(v___y_3630_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3644_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3640_; 
v___x_3636_ = lean_box(0);
v___x_3637_ = lean_unsigned_to_nat(1u);
v___x_3638_ = lean_nat_add(v_numSuccesses_3632_, v___x_3637_);
lean_dec(v_numSuccesses_3632_);
if (v_isShared_3635_ == 0)
{
lean_ctor_set(v___x_3634_, 0, v___x_3638_);
v___x_3640_ = v___x_3634_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v___x_3638_);
lean_ctor_set_uint8(v_reuseFailAlloc_3643_, sizeof(void*)*1, v_didError_3631_);
v___x_3640_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3641_, 0, v___x_3636_);
lean_ctor_set(v___x_3641_, 1, v___x_3640_);
v___x_3642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3641_);
return v___x_3642_;
}
}
}
v___jp_3649_:
{
if (lean_obj_tag(v_fst_3653_) == 0)
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3679_; 
lean_dec_ref(v___y_3651_);
lean_dec_ref(v_extraPaths_3648_);
v_a_3655_ = lean_ctor_get(v_fst_3653_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v_fst_3653_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3657_ = v_fst_3653_;
v_isShared_3658_ = v_isSharedCheck_3679_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v_fst_3653_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3679_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; uint8_t v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v_numSuccesses_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3678_; 
v___x_3659_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__0));
v___x_3660_ = lean_string_append(v_path_3647_, v___x_3659_);
v___x_3661_ = lean_io_error_to_string(v_a_3655_);
v___x_3662_ = lean_string_append(v___x_3660_, v___x_3661_);
lean_dec_ref(v___x_3661_);
v___x_3663_ = 3;
v___x_3664_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3664_, 0, v___x_3662_);
lean_ctor_set_uint8(v___x_3664_, sizeof(void*)*1, v___x_3663_);
lean_inc_ref(v___y_3627_);
v___x_3665_ = lean_apply_2(v___y_3627_, v___x_3664_, lean_box(0));
v_numSuccesses_3666_ = lean_ctor_get(v_snd_3654_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v_snd_3654_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3668_ = v_snd_3654_;
v_isShared_3669_ = v_isSharedCheck_3678_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_numSuccesses_3666_);
lean_dec(v_snd_3654_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3678_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3670_; lean_object* v___x_3672_; 
v___x_3670_ = lean_box(0);
if (v_isShared_3669_ == 0)
{
v___x_3672_ = v___x_3668_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_numSuccesses_3666_);
v___x_3672_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
lean_object* v___x_3673_; lean_object* v___x_3675_; 
lean_ctor_set_uint8(v___x_3672_, sizeof(void*)*1, v___y_3652_);
v___x_3673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3673_, 0, v___x_3670_);
lean_ctor_set(v___x_3673_, 1, v___x_3672_);
if (v_isShared_3658_ == 0)
{
lean_ctor_set(v___x_3657_, 0, v___x_3673_);
v___x_3675_ = v___x_3657_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v___x_3673_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
}
else
{
lean_object* v___x_3680_; lean_object* v___x_3681_; uint8_t v___x_3682_; 
lean_dec_ref(v_fst_3653_);
lean_dec_ref(v_path_3647_);
v___x_3680_ = lean_array_get_size(v_extraPaths_3648_);
v___x_3681_ = lean_unsigned_to_nat(0u);
v___x_3682_ = lean_nat_dec_eq(v___x_3680_, v___x_3681_);
if (v___x_3682_ == 0)
{
lean_object* v___x_3683_; size_t v_sz_3684_; size_t v___x_3685_; lean_object* v___x_3686_; 
v___x_3683_ = lean_box(0);
v_sz_3684_ = lean_array_size(v_extraPaths_3648_);
v___x_3685_ = ((size_t)0ULL);
v___x_3686_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0(v___y_3650_, v_hash_3646_, v___y_3651_, v_extraPaths_3648_, v_sz_3684_, v___x_3685_, v___x_3683_, v_snd_3654_, v___y_3627_);
lean_dec_ref(v_extraPaths_3648_);
lean_dec_ref(v___y_3651_);
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v_a_3687_; lean_object* v_snd_3688_; 
v_a_3687_ = lean_ctor_get(v___x_3686_, 0);
lean_inc(v_a_3687_);
lean_dec_ref_known(v___x_3686_, 1);
v_snd_3688_ = lean_ctor_get(v_a_3687_, 1);
lean_inc(v_snd_3688_);
lean_dec(v_a_3687_);
v___y_3630_ = v_snd_3688_;
goto v___jp_3629_;
}
else
{
return v___x_3686_;
}
}
else
{
lean_dec_ref(v___y_3651_);
lean_dec_ref(v_extraPaths_3648_);
v___y_3630_ = v_snd_3654_;
goto v___jp_3629_;
}
}
}
v___jp_3689_:
{
lean_object* v___x_3697_; uint8_t v___x_3698_; 
v___x_3697_ = lean_array_get_size(v___y_3693_);
v___x_3698_ = lean_nat_dec_lt(v___y_3692_, v___x_3697_);
if (v___x_3698_ == 0)
{
v___y_3650_ = v___y_3690_;
v___y_3651_ = v___y_3691_;
v___y_3652_ = v___y_3695_;
v_fst_3653_ = v_val_3696_;
v_snd_3654_ = v___y_3694_;
goto v___jp_3649_;
}
else
{
lean_object* v___x_3699_; size_t v___x_3700_; size_t v___x_3701_; lean_object* v___x_3702_; 
v___x_3699_ = lean_box(0);
v___x_3700_ = ((size_t)0ULL);
v___x_3701_ = lean_usize_of_nat(v___x_3697_);
v___x_3702_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_3693_, v___x_3700_, v___x_3701_, v___x_3699_, v___y_3627_);
if (lean_obj_tag(v___x_3702_) == 0)
{
lean_dec_ref_known(v___x_3702_, 1);
v___y_3650_ = v___y_3690_;
v___y_3651_ = v___y_3691_;
v___y_3652_ = v___y_3695_;
v_fst_3653_ = v_val_3696_;
v_snd_3654_ = v___y_3694_;
goto v___jp_3649_;
}
else
{
lean_object* v_a_3703_; lean_object* v___x_3705_; uint8_t v_isShared_3706_; uint8_t v_isSharedCheck_3710_; 
lean_dec_ref(v_val_3696_);
lean_dec_ref(v___y_3694_);
lean_dec_ref(v___y_3691_);
lean_dec_ref(v_extraPaths_3648_);
lean_dec_ref(v_path_3647_);
v_a_3703_ = lean_ctor_get(v___x_3702_, 0);
v_isSharedCheck_3710_ = !lean_is_exclusive(v___x_3702_);
if (v_isSharedCheck_3710_ == 0)
{
v___x_3705_ = v___x_3702_;
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
else
{
lean_inc(v_a_3703_);
lean_dec(v___x_3702_);
v___x_3705_ = lean_box(0);
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
v_resetjp_3704_:
{
lean_object* v___x_3708_; 
if (v_isShared_3706_ == 0)
{
v___x_3708_ = v___x_3705_;
goto v_reusejp_3707_;
}
else
{
lean_object* v_reuseFailAlloc_3709_; 
v_reuseFailAlloc_3709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3709_, 0, v_a_3703_);
v___x_3708_ = v_reuseFailAlloc_3709_;
goto v_reusejp_3707_;
}
v_reusejp_3707_:
{
return v___x_3708_;
}
}
}
}
}
v___jp_3711_:
{
if (lean_obj_tag(v_fst_3714_) == 0)
{
lean_object* v_a_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3771_; 
v_a_3716_ = lean_ctor_get(v_fst_3714_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v_fst_3714_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3718_ = v_fst_3714_;
v_isShared_3719_ = v_isSharedCheck_3771_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_a_3716_);
lean_dec(v_fst_3714_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3771_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
if (lean_obj_tag(v_a_3716_) == 11)
{
lean_object* v___x_3721_; 
lean_dec_ref_known(v_a_3716_, 2);
lean_dec_ref(v___y_3713_);
lean_dec_ref(v___y_3712_);
if (v_isShared_3719_ == 0)
{
lean_ctor_set_tag(v___x_3718_, 1);
lean_ctor_set(v___x_3718_, 0, v_code_3623_);
v___x_3721_ = v___x_3718_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v_code_3623_);
v___x_3721_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
lean_object* v___x_3722_; 
v___x_3722_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3620_, v_hOut_3621_, v_info_3622_, v___x_3721_, v_out_3624_, v_line_3625_, v___y_3627_);
if (lean_obj_tag(v___x_3722_) == 0)
{
lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3740_; 
v_isSharedCheck_3740_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3740_ == 0)
{
lean_object* v_unused_3741_; 
v_unused_3741_ = lean_ctor_get(v___x_3722_, 0);
lean_dec(v_unused_3741_);
v___x_3724_ = v___x_3722_;
v_isShared_3725_ = v_isSharedCheck_3740_;
goto v_resetjp_3723_;
}
else
{
lean_dec(v___x_3722_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3740_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
lean_object* v_numSuccesses_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3739_; 
v_numSuccesses_3726_ = lean_ctor_get(v_snd_3715_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v_snd_3715_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3728_ = v_snd_3715_;
v_isShared_3729_ = v_isSharedCheck_3739_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_numSuccesses_3726_);
lean_dec(v_snd_3715_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3739_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3730_; uint8_t v___x_3731_; lean_object* v___x_3733_; 
v___x_3730_ = lean_box(0);
v___x_3731_ = 1;
if (v_isShared_3729_ == 0)
{
v___x_3733_ = v___x_3728_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v_numSuccesses_3726_);
v___x_3733_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
lean_object* v___x_3734_; lean_object* v___x_3736_; 
lean_ctor_set_uint8(v___x_3733_, sizeof(void*)*1, v___x_3731_);
v___x_3734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3734_, 0, v___x_3730_);
lean_ctor_set(v___x_3734_, 1, v___x_3733_);
if (v_isShared_3725_ == 0)
{
lean_ctor_set(v___x_3724_, 0, v___x_3734_);
v___x_3736_ = v___x_3724_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v___x_3734_);
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
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
lean_dec_ref(v_snd_3715_);
v_a_3742_ = lean_ctor_get(v___x_3722_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3722_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3722_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
}
}
else
{
lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; uint8_t v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v_numSuccesses_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3770_; 
lean_del_object(v___x_3718_);
lean_dec_ref(v_line_3625_);
lean_dec(v_code_3623_);
lean_dec_ref(v_info_3622_);
lean_dec_ref(v_cfg_3620_);
lean_inc_ref_n(v___y_3627_, 2);
v___x_3751_ = lean_apply_2(v___y_3627_, v___y_3713_, lean_box(0));
v___x_3752_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__1));
v___x_3753_ = lean_string_append(v___y_3712_, v___x_3752_);
v___x_3754_ = lean_io_error_to_string(v_a_3716_);
v___x_3755_ = lean_string_append(v___x_3753_, v___x_3754_);
lean_dec_ref(v___x_3754_);
v___x_3756_ = 3;
v___x_3757_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3757_, 0, v___x_3755_);
lean_ctor_set_uint8(v___x_3757_, sizeof(void*)*1, v___x_3756_);
v___x_3758_ = lean_apply_2(v___y_3627_, v___x_3757_, lean_box(0));
v_numSuccesses_3759_ = lean_ctor_get(v_snd_3715_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v_snd_3715_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3761_ = v_snd_3715_;
v_isShared_3762_ = v_isSharedCheck_3770_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_numSuccesses_3759_);
lean_dec(v_snd_3715_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3770_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3763_; uint8_t v___x_3764_; lean_object* v___x_3766_; 
v___x_3763_ = lean_box(0);
v___x_3764_ = 1;
if (v_isShared_3762_ == 0)
{
v___x_3766_ = v___x_3761_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v_numSuccesses_3759_);
v___x_3766_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
lean_object* v___x_3767_; lean_object* v___x_3768_; 
lean_ctor_set_uint8(v___x_3766_, sizeof(void*)*1, v___x_3764_);
v___x_3767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3767_, 0, v___x_3763_);
lean_ctor_set(v___x_3767_, 1, v___x_3766_);
v___x_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3767_);
return v___x_3768_;
}
}
}
}
}
else
{
lean_object* v_a_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3811_; 
lean_inc_ref(v_extraPaths_3648_);
lean_inc_ref(v_path_3647_);
lean_dec_ref(v_line_3625_);
lean_dec(v_code_3623_);
lean_dec_ref(v_info_3622_);
lean_dec_ref(v_cfg_3620_);
v_a_3772_ = lean_ctor_get(v_fst_3714_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v_fst_3714_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3774_ = v_fst_3714_;
v_isShared_3775_ = v_isSharedCheck_3811_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_a_3772_);
lean_dec(v_fst_3714_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3811_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v___x_3776_; uint64_t v___x_3777_; uint64_t v___x_3778_; uint64_t v___x_3779_; uint8_t v___x_3780_; 
lean_inc_ref(v___y_3627_);
v___x_3776_ = lean_apply_2(v___y_3627_, v___y_3713_, lean_box(0));
v___x_3777_ = l_Lake_Hash_nil;
v___x_3778_ = lean_byte_array_hash(v_a_3772_);
v___x_3779_ = lean_uint64_mix_hash(v___x_3777_, v___x_3778_);
v___x_3780_ = lean_uint64_dec_eq(v___x_3779_, v_hash_3646_);
if (v___x_3780_ == 0)
{
uint8_t v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; uint8_t v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v_numSuccesses_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3799_; 
lean_del_object(v___x_3774_);
lean_dec(v_a_3772_);
lean_dec_ref(v_extraPaths_3648_);
lean_dec_ref(v_path_3647_);
v___x_3781_ = 1;
v___x_3782_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__1));
v___x_3783_ = lean_string_append(v___y_3712_, v___x_3782_);
v___x_3784_ = l_Lake_lowerHexUInt64(v___x_3779_);
v___x_3785_ = lean_string_append(v___x_3783_, v___x_3784_);
lean_dec_ref(v___x_3784_);
v___x_3786_ = 3;
v___x_3787_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3787_, 0, v___x_3785_);
lean_ctor_set_uint8(v___x_3787_, sizeof(void*)*1, v___x_3786_);
lean_inc_ref(v___y_3627_);
v___x_3788_ = lean_apply_2(v___y_3627_, v___x_3787_, lean_box(0));
v_numSuccesses_3789_ = lean_ctor_get(v_snd_3715_, 0);
v_isSharedCheck_3799_ = !lean_is_exclusive(v_snd_3715_);
if (v_isSharedCheck_3799_ == 0)
{
v___x_3791_ = v_snd_3715_;
v_isShared_3792_ = v_isSharedCheck_3799_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_numSuccesses_3789_);
lean_dec(v_snd_3715_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3799_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3793_; lean_object* v___x_3795_; 
v___x_3793_ = lean_box(0);
if (v_isShared_3792_ == 0)
{
v___x_3795_ = v___x_3791_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v_numSuccesses_3789_);
v___x_3795_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
lean_object* v___x_3796_; lean_object* v___x_3797_; 
lean_ctor_set_uint8(v___x_3795_, sizeof(void*)*1, v___x_3781_);
v___x_3796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3793_);
lean_ctor_set(v___x_3796_, 1, v___x_3795_);
v___x_3797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3796_);
return v___x_3797_;
}
}
}
else
{
lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3800_ = lean_unsigned_to_nat(0u);
v___x_3801_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3802_ = lean_io_rename(v___y_3712_, v_path_3647_);
lean_dec_ref(v___y_3712_);
if (lean_obj_tag(v___x_3802_) == 0)
{
lean_object* v_a_3803_; lean_object* v___x_3805_; 
v_a_3803_ = lean_ctor_get(v___x_3802_, 0);
lean_inc(v_a_3803_);
lean_dec_ref_known(v___x_3802_, 1);
if (v_isShared_3775_ == 0)
{
lean_ctor_set(v___x_3774_, 0, v_a_3803_);
v___x_3805_ = v___x_3774_;
goto v_reusejp_3804_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v_a_3803_);
v___x_3805_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3804_;
}
v_reusejp_3804_:
{
v___y_3690_ = v___x_3779_;
v___y_3691_ = v_a_3772_;
v___y_3692_ = v___x_3800_;
v___y_3693_ = v___x_3801_;
v___y_3694_ = v_snd_3715_;
v___y_3695_ = v___x_3780_;
v_val_3696_ = v___x_3805_;
goto v___jp_3689_;
}
}
else
{
lean_object* v_a_3807_; lean_object* v___x_3809_; 
v_a_3807_ = lean_ctor_get(v___x_3802_, 0);
lean_inc(v_a_3807_);
lean_dec_ref_known(v___x_3802_, 1);
if (v_isShared_3775_ == 0)
{
lean_ctor_set_tag(v___x_3774_, 0);
lean_ctor_set(v___x_3774_, 0, v_a_3807_);
v___x_3809_ = v___x_3774_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3807_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
v___y_3690_ = v___x_3779_;
v___y_3691_ = v_a_3772_;
v___y_3692_ = v___x_3800_;
v___y_3693_ = v___x_3801_;
v___y_3694_ = v_snd_3715_;
v___y_3695_ = v___x_3780_;
v_val_3696_ = v___x_3809_;
goto v___jp_3689_;
}
}
}
}
}
}
v___jp_3812_:
{
lean_object* v___x_3818_; uint8_t v___x_3819_; 
v___x_3818_ = lean_array_get_size(v___y_3815_);
v___x_3819_ = lean_nat_dec_lt(v___y_3814_, v___x_3818_);
if (v___x_3819_ == 0)
{
v___y_3712_ = v___y_3813_;
v___y_3713_ = v___y_3816_;
v_fst_3714_ = v_val_3817_;
v_snd_3715_ = v___y_3626_;
goto v___jp_3711_;
}
else
{
lean_object* v___x_3820_; size_t v___x_3821_; size_t v___x_3822_; lean_object* v___x_3823_; 
v___x_3820_ = lean_box(0);
v___x_3821_ = ((size_t)0ULL);
v___x_3822_ = lean_usize_of_nat(v___x_3818_);
v___x_3823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_3815_, v___x_3821_, v___x_3822_, v___x_3820_, v___y_3627_);
if (lean_obj_tag(v___x_3823_) == 0)
{
lean_dec_ref_known(v___x_3823_, 1);
v___y_3712_ = v___y_3813_;
v___y_3713_ = v___y_3816_;
v_fst_3714_ = v_val_3817_;
v_snd_3715_ = v___y_3626_;
goto v___jp_3711_;
}
else
{
lean_object* v_a_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3831_; 
lean_dec_ref(v_val_3817_);
lean_dec_ref(v___y_3816_);
lean_dec_ref(v___y_3813_);
lean_dec_ref(v___y_3626_);
lean_dec_ref(v_line_3625_);
lean_dec(v_code_3623_);
lean_dec_ref(v_info_3622_);
lean_dec_ref(v_cfg_3620_);
v_a_3824_ = lean_ctor_get(v___x_3823_, 0);
v_isSharedCheck_3831_ = !lean_is_exclusive(v___x_3823_);
if (v_isSharedCheck_3831_ == 0)
{
v___x_3826_ = v___x_3823_;
v_isShared_3827_ = v_isSharedCheck_3831_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_a_3824_);
lean_dec(v___x_3823_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3831_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
lean_object* v___x_3829_; 
if (v_isShared_3827_ == 0)
{
v___x_3829_ = v___x_3826_;
goto v_reusejp_3828_;
}
else
{
lean_object* v_reuseFailAlloc_3830_; 
v_reuseFailAlloc_3830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3830_, 0, v_a_3824_);
v___x_3829_ = v_reuseFailAlloc_3830_;
goto v_reusejp_3828_;
}
v_reusejp_3828_:
{
return v___x_3829_;
}
}
}
}
}
v___jp_3832_:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; uint8_t v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; uint8_t v_didError_3847_; lean_object* v_numSuccesses_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3860_; 
v___x_3834_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__2));
v___x_3835_ = lean_string_append(v___y_3833_, v___x_3834_);
v___x_3836_ = l_Lake_lowerHexUInt64(v_hash_3646_);
v___x_3837_ = lean_string_append(v___x_3835_, v___x_3836_);
lean_dec_ref(v___x_3836_);
v___x_3838_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3839_ = lean_string_append(v___x_3837_, v___x_3838_);
v___x_3840_ = lean_string_append(v___x_3839_, v_path_3647_);
lean_dec_ref(v_path_3647_);
v___x_3841_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3842_ = lean_string_append(v___x_3840_, v___x_3841_);
v___x_3843_ = lean_string_append(v___x_3842_, v_url_3645_);
lean_dec_ref(v_url_3645_);
v___x_3844_ = 1;
v___x_3845_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3845_, 0, v___x_3843_);
lean_ctor_set_uint8(v___x_3845_, sizeof(void*)*1, v___x_3844_);
lean_inc_ref(v___y_3627_);
v___x_3846_ = lean_apply_2(v___y_3627_, v___x_3845_, lean_box(0));
v_didError_3847_ = lean_ctor_get_uint8(v___y_3626_, sizeof(void*)*1);
v_numSuccesses_3848_ = lean_ctor_get(v___y_3626_, 0);
v_isSharedCheck_3860_ = !lean_is_exclusive(v___y_3626_);
if (v_isSharedCheck_3860_ == 0)
{
v___x_3850_ = v___y_3626_;
v_isShared_3851_ = v_isSharedCheck_3860_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_numSuccesses_3848_);
lean_dec(v___y_3626_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3860_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3856_; 
v___x_3852_ = lean_box(0);
v___x_3853_ = lean_unsigned_to_nat(1u);
v___x_3854_ = lean_nat_add(v_numSuccesses_3848_, v___x_3853_);
lean_dec(v_numSuccesses_3848_);
if (v_isShared_3851_ == 0)
{
lean_ctor_set(v___x_3850_, 0, v___x_3854_);
v___x_3856_ = v___x_3850_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v___x_3854_);
lean_ctor_set_uint8(v_reuseFailAlloc_3859_, sizeof(void*)*1, v_didError_3847_);
v___x_3856_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
lean_object* v___x_3857_; lean_object* v___x_3858_; 
v___x_3857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3857_, 0, v___x_3852_);
lean_ctor_set(v___x_3857_, 1, v___x_3856_);
v___x_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3858_, 0, v___x_3857_);
return v___x_3858_;
}
}
}
v___jp_3861_:
{
lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; uint8_t v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v_tmpPath_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v___x_3863_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__3));
v___x_3864_ = lean_string_append(v___y_3862_, v___x_3863_);
v___x_3865_ = l_Lake_lowerHexUInt64(v_hash_3646_);
v___x_3866_ = lean_string_append(v___x_3864_, v___x_3865_);
lean_dec_ref(v___x_3865_);
v___x_3867_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3868_ = lean_string_append(v___x_3866_, v___x_3867_);
v___x_3869_ = lean_string_append(v___x_3868_, v_path_3647_);
v___x_3870_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3871_ = lean_string_append(v___x_3869_, v___x_3870_);
v___x_3872_ = lean_string_append(v___x_3871_, v_url_3645_);
v___x_3873_ = 1;
v___x_3874_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3874_, 0, v___x_3872_);
lean_ctor_set_uint8(v___x_3874_, sizeof(void*)*1, v___x_3873_);
v___x_3875_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
lean_inc_ref(v_path_3647_);
v_tmpPath_3876_ = l_System_FilePath_addExtension(v_path_3647_, v___x_3875_);
v___x_3877_ = lean_unsigned_to_nat(0u);
v___x_3878_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3879_ = l_IO_FS_readBinFile(v_tmpPath_3876_);
if (lean_obj_tag(v___x_3879_) == 0)
{
lean_object* v_a_3880_; lean_object* v___x_3882_; uint8_t v_isShared_3883_; uint8_t v_isSharedCheck_3887_; 
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
lean_ctor_set_tag(v___x_3882_, 1);
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
v___y_3813_ = v_tmpPath_3876_;
v___y_3814_ = v___x_3877_;
v___y_3815_ = v___x_3878_;
v___y_3816_ = v___x_3874_;
v_val_3817_ = v___x_3885_;
goto v___jp_3812_;
}
}
}
else
{
lean_object* v_a_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3895_; 
v_a_3888_ = lean_ctor_get(v___x_3879_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___x_3879_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3890_ = v___x_3879_;
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_a_3888_);
lean_dec(v___x_3879_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
lean_ctor_set_tag(v___x_3890_, 0);
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3888_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
v___y_3813_ = v_tmpPath_3876_;
v___y_3814_ = v___x_3877_;
v___y_3815_ = v___x_3878_;
v___y_3816_ = v___x_3874_;
v_val_3817_ = v___x_3893_;
goto v___jp_3812_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___boxed(lean_object* v_cfg_3901_, lean_object* v_hOut_3902_, lean_object* v_info_3903_, lean_object* v_code_3904_, lean_object* v_out_3905_, lean_object* v_line_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_){
_start:
{
lean_object* v_res_3910_; 
v_res_3910_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(v_cfg_3901_, v_hOut_3902_, v_info_3903_, v_code_3904_, v_out_3905_, v_line_3906_, v___y_3907_, v___y_3908_);
lean_dec_ref(v___y_3908_);
lean_dec(v_out_3905_);
lean_dec(v_hOut_3902_);
return v_res_3910_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(lean_object* v_cfg_3914_, lean_object* v_hOut_3915_, lean_object* v_val_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_, uint8_t v___x_3919_, lean_object* v_00___3920_, lean_object* v___y_3921_, lean_object* v___y_3922_){
_start:
{
lean_object* v_code_x3f_3925_; lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3953_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_3954_ = l_Lake_JsonObject_getJson_x3f(v_a_3917_, v___x_3953_);
if (lean_obj_tag(v___x_3954_) == 0)
{
lean_object* v___x_3955_; 
v___x_3955_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__1));
v_code_x3f_3925_ = v___x_3955_;
goto v___jp_3924_;
}
else
{
lean_object* v_val_3956_; lean_object* v___x_3957_; 
v_val_3956_ = lean_ctor_get(v___x_3954_, 0);
lean_inc(v_val_3956_);
lean_dec_ref_known(v___x_3954_, 1);
v___x_3957_ = l_Lean_Json_getNat_x3f(v_val_3956_);
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3967_; 
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3967_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3967_ == 0)
{
v___x_3960_ = v___x_3957_;
v_isShared_3961_ = v_isSharedCheck_3967_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v___x_3957_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3967_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3965_; 
v___x_3962_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_3963_ = lean_string_append(v___x_3962_, v_a_3958_);
lean_dec(v_a_3958_);
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 0, v___x_3963_);
v___x_3965_ = v___x_3960_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v___x_3963_);
v___x_3965_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
v_code_x3f_3925_ = v___x_3965_;
goto v___jp_3924_;
}
}
}
else
{
if (lean_obj_tag(v___x_3957_) == 1)
{
lean_object* v_a_3968_; lean_object* v___x_3969_; uint8_t v___x_3970_; 
v_a_3968_ = lean_ctor_get(v___x_3957_, 0);
lean_inc(v_a_3968_);
v___x_3969_ = lean_unsigned_to_nat(200u);
v___x_3970_ = lean_nat_dec_eq(v_a_3968_, v___x_3969_);
if (v___x_3970_ == 0)
{
lean_object* v___x_3971_; uint8_t v___x_3972_; 
v___x_3971_ = lean_unsigned_to_nat(201u);
v___x_3972_ = lean_nat_dec_eq(v_a_3968_, v___x_3971_);
lean_dec(v_a_3968_);
if (v___x_3972_ == 0)
{
v_code_x3f_3925_ = v___x_3957_;
goto v___jp_3924_;
}
else
{
lean_object* v___x_3973_; 
lean_dec_ref_known(v___x_3957_, 1);
v___x_3973_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(v_cfg_3914_, v_hOut_3915_, v_val_3916_, v___x_3971_, v_a_3917_, v_a_3918_, v___y_3921_, v___y_3922_);
return v___x_3973_;
}
}
else
{
lean_object* v___x_3974_; 
lean_dec(v_a_3968_);
lean_dec_ref_known(v___x_3957_, 1);
v___x_3974_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(v_cfg_3914_, v_hOut_3915_, v_val_3916_, v___x_3969_, v_a_3917_, v_a_3918_, v___y_3921_, v___y_3922_);
return v___x_3974_;
}
}
else
{
v_code_x3f_3925_ = v___x_3957_;
goto v___jp_3924_;
}
}
}
v___jp_3924_:
{
lean_object* v___x_3926_; 
v___x_3926_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3914_, v_hOut_3915_, v_val_3916_, v_code_x3f_3925_, v_a_3917_, v_a_3918_, v___y_3922_);
if (lean_obj_tag(v___x_3926_) == 0)
{
lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3943_; 
v_isSharedCheck_3943_ = !lean_is_exclusive(v___x_3926_);
if (v_isSharedCheck_3943_ == 0)
{
lean_object* v_unused_3944_; 
v_unused_3944_ = lean_ctor_get(v___x_3926_, 0);
lean_dec(v_unused_3944_);
v___x_3928_ = v___x_3926_;
v_isShared_3929_ = v_isSharedCheck_3943_;
goto v_resetjp_3927_;
}
else
{
lean_dec(v___x_3926_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3943_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v_numSuccesses_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3942_; 
v_numSuccesses_3930_ = lean_ctor_get(v___y_3921_, 0);
v_isSharedCheck_3942_ = !lean_is_exclusive(v___y_3921_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3932_ = v___y_3921_;
v_isShared_3933_ = v_isSharedCheck_3942_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_numSuccesses_3930_);
lean_dec(v___y_3921_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3942_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3934_; lean_object* v___x_3936_; 
v___x_3934_ = lean_box(0);
if (v_isShared_3933_ == 0)
{
v___x_3936_ = v___x_3932_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v_numSuccesses_3930_);
v___x_3936_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
lean_object* v___x_3937_; lean_object* v___x_3939_; 
lean_ctor_set_uint8(v___x_3936_, sizeof(void*)*1, v___x_3919_);
v___x_3937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3934_);
lean_ctor_set(v___x_3937_, 1, v___x_3936_);
if (v_isShared_3929_ == 0)
{
lean_ctor_set(v___x_3928_, 0, v___x_3937_);
v___x_3939_ = v___x_3928_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v___x_3937_);
v___x_3939_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
return v___x_3939_;
}
}
}
}
}
else
{
lean_object* v_a_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_3952_; 
lean_dec_ref(v___y_3921_);
v_a_3945_ = lean_ctor_get(v___x_3926_, 0);
v_isSharedCheck_3952_ = !lean_is_exclusive(v___x_3926_);
if (v_isSharedCheck_3952_ == 0)
{
v___x_3947_ = v___x_3926_;
v_isShared_3948_ = v_isSharedCheck_3952_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_a_3945_);
lean_dec(v___x_3926_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_3952_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
lean_object* v___x_3950_; 
if (v_isShared_3948_ == 0)
{
v___x_3950_ = v___x_3947_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v_a_3945_);
v___x_3950_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
return v___x_3950_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___boxed(lean_object* v_cfg_3975_, lean_object* v_hOut_3976_, lean_object* v_val_3977_, lean_object* v_a_3978_, lean_object* v_a_3979_, lean_object* v___x_3980_, lean_object* v_00___3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_){
_start:
{
uint8_t v___x_8607__boxed_3985_; lean_object* v_res_3986_; 
v___x_8607__boxed_3985_ = lean_unbox(v___x_3980_);
v_res_3986_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_3975_, v_hOut_3976_, v_val_3977_, v_a_3978_, v_a_3979_, v___x_8607__boxed_3985_, v_00___3981_, v___y_3982_, v___y_3983_);
lean_dec_ref(v___y_3983_);
lean_dec(v_a_3978_);
lean_dec(v_hOut_3976_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(lean_object* v_cfg_3987_, lean_object* v_hOut_3988_, lean_object* v_val_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, uint8_t v___x_3992_, lean_object* v_x_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v___y_3998_; lean_object* v___x_4026_; lean_object* v___x_4027_; 
v___x_4026_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_4027_ = l_Lake_JsonObject_getJson_x3f(v_a_3990_, v___x_4026_);
if (lean_obj_tag(v___x_4027_) == 0)
{
lean_object* v___x_4028_; 
v___x_4028_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__1));
v___y_3998_ = v___x_4028_;
goto v___jp_3997_;
}
else
{
lean_object* v_val_4029_; lean_object* v___x_4030_; 
v_val_4029_ = lean_ctor_get(v___x_4027_, 0);
lean_inc(v_val_4029_);
lean_dec_ref_known(v___x_4027_, 1);
v___x_4030_ = l_Lean_Json_getNat_x3f(v_val_4029_);
if (lean_obj_tag(v___x_4030_) == 0)
{
lean_object* v_a_4031_; lean_object* v___x_4033_; uint8_t v_isShared_4034_; uint8_t v_isSharedCheck_4040_; 
v_a_4031_ = lean_ctor_get(v___x_4030_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_4030_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4033_ = v___x_4030_;
v_isShared_4034_ = v_isSharedCheck_4040_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_a_4031_);
lean_dec(v___x_4030_);
v___x_4033_ = lean_box(0);
v_isShared_4034_ = v_isSharedCheck_4040_;
goto v_resetjp_4032_;
}
v_resetjp_4032_:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4038_; 
v___x_4035_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_4036_ = lean_string_append(v___x_4035_, v_a_4031_);
lean_dec(v_a_4031_);
if (v_isShared_4034_ == 0)
{
lean_ctor_set(v___x_4033_, 0, v___x_4036_);
v___x_4038_ = v___x_4033_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v___x_4036_);
v___x_4038_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
v___y_3998_ = v___x_4038_;
goto v___jp_3997_;
}
}
}
else
{
v___y_3998_ = v___x_4030_;
goto v___jp_3997_;
}
}
v___jp_3997_:
{
lean_object* v___x_3999_; 
v___x_3999_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3987_, v_hOut_3988_, v_val_3989_, v___y_3998_, v_a_3990_, v_a_3991_, v___y_3995_);
if (lean_obj_tag(v___x_3999_) == 0)
{
lean_object* v___x_4001_; uint8_t v_isShared_4002_; uint8_t v_isSharedCheck_4016_; 
v_isSharedCheck_4016_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4016_ == 0)
{
lean_object* v_unused_4017_; 
v_unused_4017_ = lean_ctor_get(v___x_3999_, 0);
lean_dec(v_unused_4017_);
v___x_4001_ = v___x_3999_;
v_isShared_4002_ = v_isSharedCheck_4016_;
goto v_resetjp_4000_;
}
else
{
lean_dec(v___x_3999_);
v___x_4001_ = lean_box(0);
v_isShared_4002_ = v_isSharedCheck_4016_;
goto v_resetjp_4000_;
}
v_resetjp_4000_:
{
lean_object* v_numSuccesses_4003_; lean_object* v___x_4005_; uint8_t v_isShared_4006_; uint8_t v_isSharedCheck_4015_; 
v_numSuccesses_4003_ = lean_ctor_get(v___y_3994_, 0);
v_isSharedCheck_4015_ = !lean_is_exclusive(v___y_3994_);
if (v_isSharedCheck_4015_ == 0)
{
v___x_4005_ = v___y_3994_;
v_isShared_4006_ = v_isSharedCheck_4015_;
goto v_resetjp_4004_;
}
else
{
lean_inc(v_numSuccesses_4003_);
lean_dec(v___y_3994_);
v___x_4005_ = lean_box(0);
v_isShared_4006_ = v_isSharedCheck_4015_;
goto v_resetjp_4004_;
}
v_resetjp_4004_:
{
lean_object* v___x_4007_; lean_object* v___x_4009_; 
v___x_4007_ = lean_box(0);
if (v_isShared_4006_ == 0)
{
v___x_4009_ = v___x_4005_;
goto v_reusejp_4008_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v_numSuccesses_4003_);
v___x_4009_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4008_;
}
v_reusejp_4008_:
{
lean_object* v___x_4010_; lean_object* v___x_4012_; 
lean_ctor_set_uint8(v___x_4009_, sizeof(void*)*1, v___x_3992_);
v___x_4010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4010_, 0, v___x_4007_);
lean_ctor_set(v___x_4010_, 1, v___x_4009_);
if (v_isShared_4002_ == 0)
{
lean_ctor_set(v___x_4001_, 0, v___x_4010_);
v___x_4012_ = v___x_4001_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v___x_4010_);
v___x_4012_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
return v___x_4012_;
}
}
}
}
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
lean_dec_ref(v___y_3994_);
v_a_4018_ = lean_ctor_get(v___x_3999_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_3999_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_3999_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_3999_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___boxed(lean_object* v_cfg_4041_, lean_object* v_hOut_4042_, lean_object* v_val_4043_, lean_object* v_a_4044_, lean_object* v_a_4045_, lean_object* v___x_4046_, lean_object* v_x_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
uint8_t v___x_8734__boxed_4051_; lean_object* v_res_4052_; 
v___x_8734__boxed_4051_ = lean_unbox(v___x_4046_);
v_res_4052_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4041_, v_hOut_4042_, v_val_4043_, v_a_4044_, v_a_4045_, v___x_8734__boxed_4051_, v_x_4047_, v___y_4048_, v___y_4049_);
lean_dec_ref(v___y_4049_);
lean_dec_ref(v_x_4047_);
lean_dec(v_a_4044_);
lean_dec(v_hOut_4042_);
return v_res_4052_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(lean_object* v_cfg_4058_, lean_object* v_h_4059_, lean_object* v_hOut_4060_, lean_object* v_s_4061_, lean_object* v___y_4062_){
_start:
{
lean_object* v___y_4065_; lean_object* v___x_4077_; 
v___x_4077_ = lean_io_prim_handle_get_line(v_h_4059_);
if (lean_obj_tag(v___x_4077_) == 0)
{
lean_object* v_a_4078_; lean_object* v___x_4080_; uint8_t v_isShared_4081_; uint8_t v_isSharedCheck_4168_; 
v_a_4078_ = lean_ctor_get(v___x_4077_, 0);
v_isSharedCheck_4168_ = !lean_is_exclusive(v___x_4077_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4080_ = v___x_4077_;
v_isShared_4081_ = v_isSharedCheck_4168_;
goto v_resetjp_4079_;
}
else
{
lean_inc(v_a_4078_);
lean_dec(v___x_4077_);
v___x_4080_ = lean_box(0);
v_isShared_4081_ = v_isSharedCheck_4168_;
goto v_resetjp_4079_;
}
v_resetjp_4079_:
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v_startInclusive_4086_; lean_object* v_endExclusive_4087_; lean_object* v___x_4088_; uint8_t v___x_4089_; 
v___x_4082_ = lean_unsigned_to_nat(0u);
v___x_4083_ = lean_string_utf8_byte_size(v_a_4078_);
lean_inc(v_a_4078_);
v___x_4084_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4084_, 0, v_a_4078_);
lean_ctor_set(v___x_4084_, 1, v___x_4082_);
lean_ctor_set(v___x_4084_, 2, v___x_4083_);
v___x_4085_ = l_String_Slice_trimAscii(v___x_4084_);
v_startInclusive_4086_ = lean_ctor_get(v___x_4085_, 1);
lean_inc(v_startInclusive_4086_);
v_endExclusive_4087_ = lean_ctor_get(v___x_4085_, 2);
lean_inc(v_endExclusive_4087_);
v___x_4088_ = lean_nat_sub(v_endExclusive_4087_, v_startInclusive_4086_);
lean_dec(v_startInclusive_4086_);
lean_dec(v_endExclusive_4087_);
v___x_4089_ = lean_nat_dec_eq(v___x_4088_, v___x_4082_);
lean_dec(v___x_4088_);
if (v___x_4089_ == 0)
{
uint8_t v___x_4090_; lean_object* v___y_4092_; lean_object* v_a_4110_; lean_object* v___x_4129_; 
lean_del_object(v___x_4080_);
v___x_4090_ = 1;
lean_inc(v_a_4078_);
v___x_4129_ = l_Lean_Json_parse(v_a_4078_);
if (lean_obj_tag(v___x_4129_) == 0)
{
lean_object* v_a_4130_; 
lean_dec(v_a_4078_);
v_a_4130_ = lean_ctor_get(v___x_4129_, 0);
lean_inc(v_a_4130_);
lean_dec_ref_known(v___x_4129_, 1);
v_a_4110_ = v_a_4130_;
goto v___jp_4109_;
}
else
{
lean_object* v_a_4131_; lean_object* v___x_4132_; 
v_a_4131_ = lean_ctor_get(v___x_4129_, 0);
lean_inc(v_a_4131_);
lean_dec_ref_known(v___x_4129_, 1);
v___x_4132_ = l_Lean_Json_getObj_x3f(v_a_4131_);
if (lean_obj_tag(v___x_4132_) == 0)
{
lean_object* v_a_4133_; 
lean_dec(v_a_4078_);
v_a_4133_ = lean_ctor_get(v___x_4132_, 0);
lean_inc(v_a_4133_);
lean_dec_ref_known(v___x_4132_, 1);
v_a_4110_ = v_a_4133_;
goto v___jp_4109_;
}
else
{
lean_object* v_a_4134_; lean_object* v___x_4135_; 
v_a_4134_ = lean_ctor_get(v___x_4132_, 0);
lean_inc(v_a_4134_);
lean_dec_ref_known(v___x_4132_, 1);
v___x_4135_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_4058_, v_a_4134_);
if (lean_obj_tag(v___x_4135_) == 1)
{
lean_object* v_val_4136_; lean_object* v___x_4140_; lean_object* v___x_4141_; 
lean_dec_ref(v___x_4085_);
v_val_4136_ = lean_ctor_get(v___x_4135_, 0);
lean_inc(v_val_4136_);
lean_dec_ref_known(v___x_4135_, 1);
v___x_4140_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__3));
v___x_4141_ = l_Lake_JsonObject_getJson_x3f(v_a_4134_, v___x_4140_);
if (lean_obj_tag(v___x_4141_) == 0)
{
goto v___jp_4137_;
}
else
{
lean_object* v_val_4142_; lean_object* v___y_4144_; lean_object* v___x_4146_; 
v_val_4142_ = lean_ctor_get(v___x_4141_, 0);
lean_inc(v_val_4142_);
lean_dec_ref_known(v___x_4141_, 1);
v___x_4146_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_4142_);
if (lean_obj_tag(v___x_4146_) == 0)
{
lean_object* v_a_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4156_; 
v_a_4147_ = lean_ctor_get(v___x_4146_, 0);
v_isSharedCheck_4156_ = !lean_is_exclusive(v___x_4146_);
if (v_isSharedCheck_4156_ == 0)
{
v___x_4149_ = v___x_4146_;
v_isShared_4150_ = v_isSharedCheck_4156_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_a_4147_);
lean_dec(v___x_4146_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4156_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4154_; 
v___x_4151_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__4));
v___x_4152_ = lean_string_append(v___x_4151_, v_a_4147_);
lean_dec(v_a_4147_);
if (v_isShared_4150_ == 0)
{
lean_ctor_set(v___x_4149_, 0, v___x_4152_);
v___x_4154_ = v___x_4149_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4155_; 
v_reuseFailAlloc_4155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4155_, 0, v___x_4152_);
v___x_4154_ = v_reuseFailAlloc_4155_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
v___y_4144_ = v___x_4154_;
goto v___jp_4143_;
}
}
}
else
{
if (lean_obj_tag(v___x_4146_) == 1)
{
lean_object* v_a_4157_; 
v_a_4157_ = lean_ctor_get(v___x_4146_, 0);
lean_inc(v_a_4157_);
if (lean_obj_tag(v_a_4157_) == 0)
{
lean_dec_ref_known(v___x_4146_, 1);
goto v___jp_4137_;
}
else
{
lean_object* v_val_4158_; uint8_t v___x_4159_; 
v_val_4158_ = lean_ctor_get(v_a_4157_, 0);
lean_inc(v_val_4158_);
lean_dec_ref_known(v_a_4157_, 1);
v___x_4159_ = lean_nat_dec_eq(v_val_4158_, v___x_4082_);
lean_dec(v_val_4158_);
if (v___x_4159_ == 0)
{
lean_object* v___x_4160_; 
lean_inc_ref(v_cfg_4058_);
v___x_4160_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4058_, v_hOut_4060_, v_val_4136_, v_a_4134_, v_a_4078_, v___x_4090_, v___x_4146_, v_s_4061_, v___y_4062_);
lean_dec_ref_known(v___x_4146_, 1);
lean_dec(v_a_4134_);
v___y_4065_ = v___x_4160_;
goto v___jp_4064_;
}
else
{
lean_object* v___x_4161_; lean_object* v___x_4162_; 
lean_dec_ref_known(v___x_4146_, 1);
v___x_4161_ = lean_box(0);
lean_inc_ref(v_cfg_4058_);
v___x_4162_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_4058_, v_hOut_4060_, v_val_4136_, v_a_4134_, v_a_4078_, v___x_4090_, v___x_4161_, v_s_4061_, v___y_4062_);
lean_dec(v_a_4134_);
v___y_4065_ = v___x_4162_;
goto v___jp_4064_;
}
}
}
else
{
v___y_4144_ = v___x_4146_;
goto v___jp_4143_;
}
}
v___jp_4143_:
{
lean_object* v___x_4145_; 
lean_inc_ref(v_cfg_4058_);
v___x_4145_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4058_, v_hOut_4060_, v_val_4136_, v_a_4134_, v_a_4078_, v___x_4090_, v___y_4144_, v_s_4061_, v___y_4062_);
lean_dec_ref(v___y_4144_);
lean_dec(v_a_4134_);
v___y_4065_ = v___x_4145_;
goto v___jp_4064_;
}
}
v___jp_4137_:
{
lean_object* v___x_4138_; lean_object* v___x_4139_; 
v___x_4138_ = lean_box(0);
lean_inc_ref(v_cfg_4058_);
v___x_4139_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_4058_, v_hOut_4060_, v_val_4136_, v_a_4134_, v_a_4078_, v___x_4090_, v___x_4138_, v_s_4061_, v___y_4062_);
lean_dec(v_a_4134_);
v___y_4065_ = v___x_4139_;
goto v___jp_4064_;
}
}
else
{
lean_object* v_scope_4163_; lean_object* v_s_4164_; 
lean_dec(v___x_4135_);
lean_dec(v_a_4134_);
lean_dec(v_a_4078_);
v_scope_4163_ = lean_ctor_get(v_cfg_4058_, 0);
v_s_4164_ = lean_ctor_get(v_scope_4163_, 0);
lean_inc_ref(v_s_4164_);
v___y_4092_ = v_s_4164_;
goto v___jp_4091_;
}
}
}
v___jp_4091_:
{
lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; uint8_t v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v_numSuccesses_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4108_; 
v___x_4093_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__0));
v___x_4094_ = lean_string_append(v___y_4092_, v___x_4093_);
v___x_4095_ = l_String_Slice_toString(v___x_4085_);
lean_dec_ref(v___x_4085_);
v___x_4096_ = lean_string_append(v___x_4094_, v___x_4095_);
lean_dec_ref(v___x_4095_);
v___x_4097_ = 3;
v___x_4098_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4098_, 0, v___x_4096_);
lean_ctor_set_uint8(v___x_4098_, sizeof(void*)*1, v___x_4097_);
lean_inc_ref(v___y_4062_);
v___x_4099_ = lean_apply_2(v___y_4062_, v___x_4098_, lean_box(0));
v_numSuccesses_4100_ = lean_ctor_get(v_s_4061_, 0);
v_isSharedCheck_4108_ = !lean_is_exclusive(v_s_4061_);
if (v_isSharedCheck_4108_ == 0)
{
v___x_4102_ = v_s_4061_;
v_isShared_4103_ = v_isSharedCheck_4108_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_numSuccesses_4100_);
lean_dec(v_s_4061_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4108_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4105_; 
if (v_isShared_4103_ == 0)
{
v___x_4105_ = v___x_4102_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4107_; 
v_reuseFailAlloc_4107_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4107_, 0, v_numSuccesses_4100_);
v___x_4105_ = v_reuseFailAlloc_4107_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
lean_ctor_set_uint8(v___x_4105_, sizeof(void*)*1, v___x_4090_);
v_s_4061_ = v___x_4105_;
goto _start;
}
}
}
v___jp_4109_:
{
lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; uint8_t v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v_numSuccesses_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4128_; 
v___x_4111_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__1));
v___x_4112_ = lean_string_append(v___x_4111_, v_a_4110_);
lean_dec_ref(v_a_4110_);
v___x_4113_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__2));
v___x_4114_ = lean_string_append(v___x_4112_, v___x_4113_);
v___x_4115_ = l_String_Slice_toString(v___x_4085_);
lean_dec_ref(v___x_4085_);
v___x_4116_ = lean_string_append(v___x_4114_, v___x_4115_);
lean_dec_ref(v___x_4115_);
v___x_4117_ = 3;
v___x_4118_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4118_, 0, v___x_4116_);
lean_ctor_set_uint8(v___x_4118_, sizeof(void*)*1, v___x_4117_);
lean_inc_ref(v___y_4062_);
v___x_4119_ = lean_apply_2(v___y_4062_, v___x_4118_, lean_box(0));
v_numSuccesses_4120_ = lean_ctor_get(v_s_4061_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v_s_4061_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4122_ = v_s_4061_;
v_isShared_4123_ = v_isSharedCheck_4128_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_numSuccesses_4120_);
lean_dec(v_s_4061_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4128_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_numSuccesses_4120_);
v___x_4125_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
lean_ctor_set_uint8(v___x_4125_, sizeof(void*)*1, v___x_4090_);
v_s_4061_ = v___x_4125_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_4166_; 
lean_dec_ref(v___x_4085_);
lean_dec(v_a_4078_);
lean_dec_ref(v_cfg_4058_);
if (v_isShared_4081_ == 0)
{
lean_ctor_set(v___x_4080_, 0, v_s_4061_);
v___x_4166_ = v___x_4080_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4167_; 
v_reuseFailAlloc_4167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4167_, 0, v_s_4061_);
v___x_4166_ = v_reuseFailAlloc_4167_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
return v___x_4166_;
}
}
}
}
else
{
lean_object* v_a_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4181_; 
lean_dec_ref(v_s_4061_);
lean_dec_ref(v_cfg_4058_);
v_a_4169_ = lean_ctor_get(v___x_4077_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4077_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4171_ = v___x_4077_;
v_isShared_4172_ = v_isSharedCheck_4181_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_a_4169_);
lean_dec(v___x_4077_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4181_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
lean_object* v___x_4173_; uint8_t v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4179_; 
v___x_4173_ = lean_io_error_to_string(v_a_4169_);
v___x_4174_ = 3;
v___x_4175_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4175_, 0, v___x_4173_);
lean_ctor_set_uint8(v___x_4175_, sizeof(void*)*1, v___x_4174_);
lean_inc_ref(v___y_4062_);
v___x_4176_ = lean_apply_2(v___y_4062_, v___x_4175_, lean_box(0));
v___x_4177_ = lean_box(0);
if (v_isShared_4172_ == 0)
{
lean_ctor_set(v___x_4171_, 0, v___x_4177_);
v___x_4179_ = v___x_4171_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v___x_4177_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
return v___x_4179_;
}
}
}
v___jp_4064_:
{
if (lean_obj_tag(v___y_4065_) == 0)
{
lean_object* v_a_4066_; lean_object* v_snd_4067_; 
v_a_4066_ = lean_ctor_get(v___y_4065_, 0);
lean_inc(v_a_4066_);
lean_dec_ref_known(v___y_4065_, 1);
v_snd_4067_ = lean_ctor_get(v_a_4066_, 1);
lean_inc(v_snd_4067_);
lean_dec(v_a_4066_);
v_s_4061_ = v_snd_4067_;
goto _start;
}
else
{
lean_object* v_a_4069_; lean_object* v___x_4071_; uint8_t v_isShared_4072_; uint8_t v_isSharedCheck_4076_; 
lean_dec_ref(v_cfg_4058_);
v_a_4069_ = lean_ctor_get(v___y_4065_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v___y_4065_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4071_ = v___y_4065_;
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
else
{
lean_inc(v_a_4069_);
lean_dec(v___y_4065_);
v___x_4071_ = lean_box(0);
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
v_resetjp_4070_:
{
lean_object* v___x_4074_; 
if (v_isShared_4072_ == 0)
{
v___x_4074_ = v___x_4071_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v_a_4069_);
v___x_4074_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
return v___x_4074_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___boxed(lean_object* v_cfg_4182_, lean_object* v_h_4183_, lean_object* v_hOut_4184_, lean_object* v_s_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_){
_start:
{
lean_object* v_res_4188_; 
v_res_4188_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_4182_, v_h_4183_, v_hOut_4184_, v_s_4185_, v___y_4186_);
lean_dec_ref(v___y_4186_);
lean_dec(v_hOut_4184_);
lean_dec(v_h_4183_);
return v_res_4188_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(lean_object* v_snd_4189_, lean_object* v___y_4190_, lean_object* v_a_x3f_4191_){
_start:
{
lean_object* v___x_4193_; 
v___x_4193_ = lean_io_remove_file(v_snd_4189_);
if (lean_obj_tag(v___x_4193_) == 0)
{
lean_object* v_a_4194_; lean_object* v___x_4196_; uint8_t v_isShared_4197_; uint8_t v_isSharedCheck_4201_; 
v_a_4194_ = lean_ctor_get(v___x_4193_, 0);
v_isSharedCheck_4201_ = !lean_is_exclusive(v___x_4193_);
if (v_isSharedCheck_4201_ == 0)
{
v___x_4196_ = v___x_4193_;
v_isShared_4197_ = v_isSharedCheck_4201_;
goto v_resetjp_4195_;
}
else
{
lean_inc(v_a_4194_);
lean_dec(v___x_4193_);
v___x_4196_ = lean_box(0);
v_isShared_4197_ = v_isSharedCheck_4201_;
goto v_resetjp_4195_;
}
v_resetjp_4195_:
{
lean_object* v___x_4199_; 
if (v_isShared_4197_ == 0)
{
v___x_4199_ = v___x_4196_;
goto v_reusejp_4198_;
}
else
{
lean_object* v_reuseFailAlloc_4200_; 
v_reuseFailAlloc_4200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4200_, 0, v_a_4194_);
v___x_4199_ = v_reuseFailAlloc_4200_;
goto v_reusejp_4198_;
}
v_reusejp_4198_:
{
return v___x_4199_;
}
}
}
else
{
lean_object* v_a_4202_; lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4214_; 
v_a_4202_ = lean_ctor_get(v___x_4193_, 0);
v_isSharedCheck_4214_ = !lean_is_exclusive(v___x_4193_);
if (v_isSharedCheck_4214_ == 0)
{
v___x_4204_ = v___x_4193_;
v_isShared_4205_ = v_isSharedCheck_4214_;
goto v_resetjp_4203_;
}
else
{
lean_inc(v_a_4202_);
lean_dec(v___x_4193_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4214_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v___x_4206_; uint8_t v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4212_; 
v___x_4206_ = lean_io_error_to_string(v_a_4202_);
v___x_4207_ = 3;
v___x_4208_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4208_, 0, v___x_4206_);
lean_ctor_set_uint8(v___x_4208_, sizeof(void*)*1, v___x_4207_);
lean_inc_ref(v___y_4190_);
v___x_4209_ = lean_apply_2(v___y_4190_, v___x_4208_, lean_box(0));
v___x_4210_ = lean_box(0);
if (v_isShared_4205_ == 0)
{
lean_ctor_set(v___x_4204_, 0, v___x_4210_);
v___x_4212_ = v___x_4204_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v___x_4210_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
return v___x_4212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0___boxed(lean_object* v_snd_4215_, lean_object* v___y_4216_, lean_object* v_a_x3f_4217_, lean_object* v___y_4218_){
_start:
{
lean_object* v_res_4219_; 
v_res_4219_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4215_, v___y_4216_, v_a_x3f_4217_);
lean_dec(v_a_x3f_4217_);
lean_dec_ref(v___y_4216_);
lean_dec_ref(v_snd_4215_);
return v_res_4219_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(lean_object* v_f_4220_, lean_object* v___y_4221_){
_start:
{
lean_object* v___x_4223_; 
v___x_4223_ = lean_io_create_tempfile();
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_object* v_a_4224_; lean_object* v_fst_4225_; lean_object* v_snd_4226_; lean_object* v___x_4227_; 
v_a_4224_ = lean_ctor_get(v___x_4223_, 0);
lean_inc(v_a_4224_);
lean_dec_ref_known(v___x_4223_, 1);
v_fst_4225_ = lean_ctor_get(v_a_4224_, 0);
lean_inc(v_fst_4225_);
v_snd_4226_ = lean_ctor_get(v_a_4224_, 1);
lean_inc_n(v_snd_4226_, 2);
lean_dec(v_a_4224_);
lean_inc_ref(v___y_4221_);
v___x_4227_ = lean_apply_4(v_f_4220_, v_fst_4225_, v_snd_4226_, v___y_4221_, lean_box(0));
if (lean_obj_tag(v___x_4227_) == 0)
{
lean_object* v_a_4228_; lean_object* v___x_4230_; uint8_t v_isShared_4231_; uint8_t v_isSharedCheck_4252_; 
v_a_4228_ = lean_ctor_get(v___x_4227_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v___x_4227_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4230_ = v___x_4227_;
v_isShared_4231_ = v_isSharedCheck_4252_;
goto v_resetjp_4229_;
}
else
{
lean_inc(v_a_4228_);
lean_dec(v___x_4227_);
v___x_4230_ = lean_box(0);
v_isShared_4231_ = v_isSharedCheck_4252_;
goto v_resetjp_4229_;
}
v_resetjp_4229_:
{
lean_object* v___x_4233_; 
lean_inc(v_a_4228_);
if (v_isShared_4231_ == 0)
{
lean_ctor_set_tag(v___x_4230_, 1);
v___x_4233_ = v___x_4230_;
goto v_reusejp_4232_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v_a_4228_);
v___x_4233_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4232_;
}
v_reusejp_4232_:
{
lean_object* v___x_4234_; 
v___x_4234_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4226_, v___y_4221_, v___x_4233_);
lean_dec_ref(v___x_4233_);
lean_dec(v_snd_4226_);
if (lean_obj_tag(v___x_4234_) == 0)
{
lean_object* v___x_4236_; uint8_t v_isShared_4237_; uint8_t v_isSharedCheck_4241_; 
v_isSharedCheck_4241_ = !lean_is_exclusive(v___x_4234_);
if (v_isSharedCheck_4241_ == 0)
{
lean_object* v_unused_4242_; 
v_unused_4242_ = lean_ctor_get(v___x_4234_, 0);
lean_dec(v_unused_4242_);
v___x_4236_ = v___x_4234_;
v_isShared_4237_ = v_isSharedCheck_4241_;
goto v_resetjp_4235_;
}
else
{
lean_dec(v___x_4234_);
v___x_4236_ = lean_box(0);
v_isShared_4237_ = v_isSharedCheck_4241_;
goto v_resetjp_4235_;
}
v_resetjp_4235_:
{
lean_object* v___x_4239_; 
if (v_isShared_4237_ == 0)
{
lean_ctor_set(v___x_4236_, 0, v_a_4228_);
v___x_4239_ = v___x_4236_;
goto v_reusejp_4238_;
}
else
{
lean_object* v_reuseFailAlloc_4240_; 
v_reuseFailAlloc_4240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4240_, 0, v_a_4228_);
v___x_4239_ = v_reuseFailAlloc_4240_;
goto v_reusejp_4238_;
}
v_reusejp_4238_:
{
return v___x_4239_;
}
}
}
else
{
lean_object* v_a_4243_; lean_object* v___x_4245_; uint8_t v_isShared_4246_; uint8_t v_isSharedCheck_4250_; 
lean_dec(v_a_4228_);
v_a_4243_ = lean_ctor_get(v___x_4234_, 0);
v_isSharedCheck_4250_ = !lean_is_exclusive(v___x_4234_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4245_ = v___x_4234_;
v_isShared_4246_ = v_isSharedCheck_4250_;
goto v_resetjp_4244_;
}
else
{
lean_inc(v_a_4243_);
lean_dec(v___x_4234_);
v___x_4245_ = lean_box(0);
v_isShared_4246_ = v_isSharedCheck_4250_;
goto v_resetjp_4244_;
}
v_resetjp_4244_:
{
lean_object* v___x_4248_; 
if (v_isShared_4246_ == 0)
{
v___x_4248_ = v___x_4245_;
goto v_reusejp_4247_;
}
else
{
lean_object* v_reuseFailAlloc_4249_; 
v_reuseFailAlloc_4249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4249_, 0, v_a_4243_);
v___x_4248_ = v_reuseFailAlloc_4249_;
goto v_reusejp_4247_;
}
v_reusejp_4247_:
{
return v___x_4248_;
}
}
}
}
}
}
else
{
lean_object* v_a_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; 
v_a_4253_ = lean_ctor_get(v___x_4227_, 0);
lean_inc(v_a_4253_);
lean_dec_ref_known(v___x_4227_, 1);
v___x_4254_ = lean_box(0);
v___x_4255_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4226_, v___y_4221_, v___x_4254_);
lean_dec(v_snd_4226_);
if (lean_obj_tag(v___x_4255_) == 0)
{
lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4262_; 
v_isSharedCheck_4262_ = !lean_is_exclusive(v___x_4255_);
if (v_isSharedCheck_4262_ == 0)
{
lean_object* v_unused_4263_; 
v_unused_4263_ = lean_ctor_get(v___x_4255_, 0);
lean_dec(v_unused_4263_);
v___x_4257_ = v___x_4255_;
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
else
{
lean_dec(v___x_4255_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
lean_object* v___x_4260_; 
if (v_isShared_4258_ == 0)
{
lean_ctor_set_tag(v___x_4257_, 1);
lean_ctor_set(v___x_4257_, 0, v_a_4253_);
v___x_4260_ = v___x_4257_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v_a_4253_);
v___x_4260_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
return v___x_4260_;
}
}
}
else
{
lean_object* v_a_4264_; lean_object* v___x_4266_; uint8_t v_isShared_4267_; uint8_t v_isSharedCheck_4271_; 
lean_dec(v_a_4253_);
v_a_4264_ = lean_ctor_get(v___x_4255_, 0);
v_isSharedCheck_4271_ = !lean_is_exclusive(v___x_4255_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4266_ = v___x_4255_;
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
else
{
lean_inc(v_a_4264_);
lean_dec(v___x_4255_);
v___x_4266_ = lean_box(0);
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
v_resetjp_4265_:
{
lean_object* v___x_4269_; 
if (v_isShared_4267_ == 0)
{
v___x_4269_ = v___x_4266_;
goto v_reusejp_4268_;
}
else
{
lean_object* v_reuseFailAlloc_4270_; 
v_reuseFailAlloc_4270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4270_, 0, v_a_4264_);
v___x_4269_ = v_reuseFailAlloc_4270_;
goto v_reusejp_4268_;
}
v_reusejp_4268_:
{
return v___x_4269_;
}
}
}
}
}
else
{
lean_object* v_a_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4284_; 
lean_dec_ref(v_f_4220_);
v_a_4272_ = lean_ctor_get(v___x_4223_, 0);
v_isSharedCheck_4284_ = !lean_is_exclusive(v___x_4223_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4274_ = v___x_4223_;
v_isShared_4275_ = v_isSharedCheck_4284_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_a_4272_);
lean_dec(v___x_4223_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4284_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
lean_object* v___x_4276_; uint8_t v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4282_; 
v___x_4276_ = lean_io_error_to_string(v_a_4272_);
v___x_4277_ = 3;
v___x_4278_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4278_, 0, v___x_4276_);
lean_ctor_set_uint8(v___x_4278_, sizeof(void*)*1, v___x_4277_);
lean_inc_ref(v___y_4221_);
v___x_4279_ = lean_apply_2(v___y_4221_, v___x_4278_, lean_box(0));
v___x_4280_ = lean_box(0);
if (v_isShared_4275_ == 0)
{
lean_ctor_set(v___x_4274_, 0, v___x_4280_);
v___x_4282_ = v___x_4274_;
goto v_reusejp_4281_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v___x_4280_);
v___x_4282_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4281_;
}
v_reusejp_4281_:
{
return v___x_4282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___boxed(lean_object* v_f_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_){
_start:
{
lean_object* v_res_4288_; 
v_res_4288_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v_f_4285_, v___y_4286_);
lean_dec_ref(v___y_4286_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2(lean_object* v_00_u03b1_4289_, lean_object* v_f_4290_, lean_object* v___y_4291_){
_start:
{
lean_object* v___x_4293_; 
v___x_4293_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v_f_4290_, v___y_4291_);
return v___x_4293_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___boxed(lean_object* v_00_u03b1_4294_, lean_object* v_f_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_){
_start:
{
lean_object* v_res_4298_; 
v_res_4298_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2(v_00_u03b1_4294_, v_f_4295_, v___y_4296_);
lean_dec_ref(v___y_4296_);
return v_res_4298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(lean_object* v_h_4301_, lean_object* v_as_4302_, size_t v_i_4303_, size_t v_stop_4304_, lean_object* v_b_4305_, lean_object* v___y_4306_){
_start:
{
uint8_t v___x_4308_; 
v___x_4308_ = lean_usize_dec_eq(v_i_4303_, v_stop_4304_);
if (v___x_4308_ == 0)
{
lean_object* v___x_4309_; lean_object* v_url_4310_; lean_object* v_path_4311_; lean_object* v___x_4312_; lean_object* v_tmpPath_4313_; lean_object* v___x_4314_; 
v___x_4309_ = lean_array_uget_borrowed(v_as_4302_, v_i_4303_);
v_url_4310_ = lean_ctor_get(v___x_4309_, 0);
v_path_4311_ = lean_ctor_get(v___x_4309_, 1);
v___x_4312_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
lean_inc_ref(v_path_4311_);
v_tmpPath_4313_ = l_System_FilePath_addExtension(v_path_4311_, v___x_4312_);
v___x_4314_ = l_Lake_removeFileIfExists(v_tmpPath_4313_);
if (lean_obj_tag(v___x_4314_) == 0)
{
lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; 
lean_dec_ref_known(v___x_4314_, 1);
v___x_4315_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0));
lean_inc_ref(v_url_4310_);
v___x_4316_ = l_String_quote(v_url_4310_);
v___x_4317_ = lean_string_append(v___x_4315_, v___x_4316_);
lean_dec_ref(v___x_4316_);
v___x_4318_ = l_IO_FS_Handle_putStrLn(v_h_4301_, v___x_4317_);
if (lean_obj_tag(v___x_4318_) == 0)
{
lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; 
lean_dec_ref_known(v___x_4318_, 1);
v___x_4319_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__1));
v___x_4320_ = l_String_quote(v_tmpPath_4313_);
v___x_4321_ = lean_string_append(v___x_4319_, v___x_4320_);
lean_dec_ref(v___x_4320_);
v___x_4322_ = l_IO_FS_Handle_putStrLn(v_h_4301_, v___x_4321_);
if (lean_obj_tag(v___x_4322_) == 0)
{
lean_object* v_a_4323_; size_t v___x_4324_; size_t v___x_4325_; 
v_a_4323_ = lean_ctor_get(v___x_4322_, 0);
lean_inc(v_a_4323_);
lean_dec_ref_known(v___x_4322_, 1);
v___x_4324_ = ((size_t)1ULL);
v___x_4325_ = lean_usize_add(v_i_4303_, v___x_4324_);
v_i_4303_ = v___x_4325_;
v_b_4305_ = v_a_4323_;
goto _start;
}
else
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4339_; 
v_a_4327_ = lean_ctor_get(v___x_4322_, 0);
v_isSharedCheck_4339_ = !lean_is_exclusive(v___x_4322_);
if (v_isSharedCheck_4339_ == 0)
{
v___x_4329_ = v___x_4322_;
v_isShared_4330_ = v_isSharedCheck_4339_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v___x_4322_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4339_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4331_; uint8_t v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4337_; 
v___x_4331_ = lean_io_error_to_string(v_a_4327_);
v___x_4332_ = 3;
v___x_4333_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4333_, 0, v___x_4331_);
lean_ctor_set_uint8(v___x_4333_, sizeof(void*)*1, v___x_4332_);
lean_inc_ref(v___y_4306_);
v___x_4334_ = lean_apply_2(v___y_4306_, v___x_4333_, lean_box(0));
v___x_4335_ = lean_box(0);
if (v_isShared_4330_ == 0)
{
lean_ctor_set(v___x_4329_, 0, v___x_4335_);
v___x_4337_ = v___x_4329_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4338_; 
v_reuseFailAlloc_4338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4338_, 0, v___x_4335_);
v___x_4337_ = v_reuseFailAlloc_4338_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
return v___x_4337_;
}
}
}
}
else
{
lean_object* v_a_4340_; lean_object* v___x_4342_; uint8_t v_isShared_4343_; uint8_t v_isSharedCheck_4352_; 
lean_dec_ref(v_tmpPath_4313_);
v_a_4340_ = lean_ctor_get(v___x_4318_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4318_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4342_ = v___x_4318_;
v_isShared_4343_ = v_isSharedCheck_4352_;
goto v_resetjp_4341_;
}
else
{
lean_inc(v_a_4340_);
lean_dec(v___x_4318_);
v___x_4342_ = lean_box(0);
v_isShared_4343_ = v_isSharedCheck_4352_;
goto v_resetjp_4341_;
}
v_resetjp_4341_:
{
lean_object* v___x_4344_; uint8_t v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4350_; 
v___x_4344_ = lean_io_error_to_string(v_a_4340_);
v___x_4345_ = 3;
v___x_4346_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4346_, 0, v___x_4344_);
lean_ctor_set_uint8(v___x_4346_, sizeof(void*)*1, v___x_4345_);
lean_inc_ref(v___y_4306_);
v___x_4347_ = lean_apply_2(v___y_4306_, v___x_4346_, lean_box(0));
v___x_4348_ = lean_box(0);
if (v_isShared_4343_ == 0)
{
lean_ctor_set(v___x_4342_, 0, v___x_4348_);
v___x_4350_ = v___x_4342_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v___x_4348_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
else
{
lean_object* v_a_4353_; lean_object* v___x_4355_; uint8_t v_isShared_4356_; uint8_t v_isSharedCheck_4365_; 
lean_dec_ref(v_tmpPath_4313_);
v_a_4353_ = lean_ctor_get(v___x_4314_, 0);
v_isSharedCheck_4365_ = !lean_is_exclusive(v___x_4314_);
if (v_isSharedCheck_4365_ == 0)
{
v___x_4355_ = v___x_4314_;
v_isShared_4356_ = v_isSharedCheck_4365_;
goto v_resetjp_4354_;
}
else
{
lean_inc(v_a_4353_);
lean_dec(v___x_4314_);
v___x_4355_ = lean_box(0);
v_isShared_4356_ = v_isSharedCheck_4365_;
goto v_resetjp_4354_;
}
v_resetjp_4354_:
{
lean_object* v___x_4357_; uint8_t v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4363_; 
v___x_4357_ = lean_io_error_to_string(v_a_4353_);
v___x_4358_ = 3;
v___x_4359_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4359_, 0, v___x_4357_);
lean_ctor_set_uint8(v___x_4359_, sizeof(void*)*1, v___x_4358_);
lean_inc_ref(v___y_4306_);
v___x_4360_ = lean_apply_2(v___y_4306_, v___x_4359_, lean_box(0));
v___x_4361_ = lean_box(0);
if (v_isShared_4356_ == 0)
{
lean_ctor_set(v___x_4355_, 0, v___x_4361_);
v___x_4363_ = v___x_4355_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v___x_4361_);
v___x_4363_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
return v___x_4363_;
}
}
}
}
else
{
lean_object* v___x_4366_; 
v___x_4366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4366_, 0, v_b_4305_);
return v___x_4366_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___boxed(lean_object* v_h_4367_, lean_object* v_as_4368_, lean_object* v_i_4369_, lean_object* v_stop_4370_, lean_object* v_b_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_){
_start:
{
size_t v_i_boxed_4374_; size_t v_stop_boxed_4375_; lean_object* v_res_4376_; 
v_i_boxed_4374_ = lean_unbox_usize(v_i_4369_);
lean_dec(v_i_4369_);
v_stop_boxed_4375_ = lean_unbox_usize(v_stop_4370_);
lean_dec(v_stop_4370_);
v_res_4376_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4367_, v_as_4368_, v_i_boxed_4374_, v_stop_boxed_4375_, v_b_4371_, v___y_4372_);
lean_dec_ref(v___y_4372_);
lean_dec_ref(v_as_4368_);
lean_dec(v_h_4367_);
return v_res_4376_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(lean_object* v_h_4378_, lean_object* v_as_4379_, size_t v_i_4380_, size_t v_stop_4381_, lean_object* v_b_4382_, lean_object* v___y_4383_){
_start:
{
uint8_t v___x_4385_; 
v___x_4385_ = lean_usize_dec_eq(v_i_4380_, v_stop_4381_);
if (v___x_4385_ == 0)
{
lean_object* v___x_4386_; lean_object* v_url_4387_; lean_object* v_path_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; 
v___x_4386_ = lean_array_uget_borrowed(v_as_4379_, v_i_4380_);
v_url_4387_ = lean_ctor_get(v___x_4386_, 0);
v_path_4388_ = lean_ctor_get(v___x_4386_, 1);
v___x_4389_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___closed__0));
lean_inc_ref(v_path_4388_);
v___x_4390_ = l_String_quote(v_path_4388_);
v___x_4391_ = lean_string_append(v___x_4389_, v___x_4390_);
lean_dec_ref(v___x_4390_);
v___x_4392_ = l_IO_FS_Handle_putStrLn(v_h_4378_, v___x_4391_);
if (lean_obj_tag(v___x_4392_) == 0)
{
lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; 
lean_dec_ref_known(v___x_4392_, 1);
v___x_4393_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0));
lean_inc_ref(v_url_4387_);
v___x_4394_ = l_String_quote(v_url_4387_);
v___x_4395_ = lean_string_append(v___x_4393_, v___x_4394_);
lean_dec_ref(v___x_4394_);
v___x_4396_ = l_IO_FS_Handle_putStrLn(v_h_4378_, v___x_4395_);
if (lean_obj_tag(v___x_4396_) == 0)
{
lean_object* v_a_4397_; size_t v___x_4398_; size_t v___x_4399_; 
v_a_4397_ = lean_ctor_get(v___x_4396_, 0);
lean_inc(v_a_4397_);
lean_dec_ref_known(v___x_4396_, 1);
v___x_4398_ = ((size_t)1ULL);
v___x_4399_ = lean_usize_add(v_i_4380_, v___x_4398_);
v_i_4380_ = v___x_4399_;
v_b_4382_ = v_a_4397_;
goto _start;
}
else
{
lean_object* v_a_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4413_; 
v_a_4401_ = lean_ctor_get(v___x_4396_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4396_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4403_ = v___x_4396_;
v_isShared_4404_ = v_isSharedCheck_4413_;
goto v_resetjp_4402_;
}
else
{
lean_inc(v_a_4401_);
lean_dec(v___x_4396_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4413_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
lean_object* v___x_4405_; uint8_t v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4411_; 
v___x_4405_ = lean_io_error_to_string(v_a_4401_);
v___x_4406_ = 3;
v___x_4407_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4407_, 0, v___x_4405_);
lean_ctor_set_uint8(v___x_4407_, sizeof(void*)*1, v___x_4406_);
lean_inc_ref(v___y_4383_);
v___x_4408_ = lean_apply_2(v___y_4383_, v___x_4407_, lean_box(0));
v___x_4409_ = lean_box(0);
if (v_isShared_4404_ == 0)
{
lean_ctor_set(v___x_4403_, 0, v___x_4409_);
v___x_4411_ = v___x_4403_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v___x_4409_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
}
else
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4426_; 
v_a_4414_ = lean_ctor_get(v___x_4392_, 0);
v_isSharedCheck_4426_ = !lean_is_exclusive(v___x_4392_);
if (v_isSharedCheck_4426_ == 0)
{
v___x_4416_ = v___x_4392_;
v_isShared_4417_ = v_isSharedCheck_4426_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4392_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4426_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v___x_4418_; uint8_t v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4424_; 
v___x_4418_ = lean_io_error_to_string(v_a_4414_);
v___x_4419_ = 3;
v___x_4420_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4420_, 0, v___x_4418_);
lean_ctor_set_uint8(v___x_4420_, sizeof(void*)*1, v___x_4419_);
lean_inc_ref(v___y_4383_);
v___x_4421_ = lean_apply_2(v___y_4383_, v___x_4420_, lean_box(0));
v___x_4422_ = lean_box(0);
if (v_isShared_4417_ == 0)
{
lean_ctor_set(v___x_4416_, 0, v___x_4422_);
v___x_4424_ = v___x_4416_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4425_; 
v_reuseFailAlloc_4425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4425_, 0, v___x_4422_);
v___x_4424_ = v_reuseFailAlloc_4425_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
return v___x_4424_;
}
}
}
}
else
{
lean_object* v___x_4427_; 
v___x_4427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4427_, 0, v_b_4382_);
return v___x_4427_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___boxed(lean_object* v_h_4428_, lean_object* v_as_4429_, lean_object* v_i_4430_, lean_object* v_stop_4431_, lean_object* v_b_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_){
_start:
{
size_t v_i_boxed_4435_; size_t v_stop_boxed_4436_; lean_object* v_res_4437_; 
v_i_boxed_4435_ = lean_unbox_usize(v_i_4430_);
lean_dec(v_i_4430_);
v_stop_boxed_4436_ = lean_unbox_usize(v_stop_4431_);
lean_dec(v_stop_4431_);
v_res_4437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4428_, v_as_4429_, v_i_boxed_4435_, v_stop_boxed_4436_, v_b_4432_, v___y_4433_);
lean_dec_ref(v___y_4433_);
lean_dec_ref(v_as_4429_);
lean_dec(v_h_4428_);
return v_res_4437_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11(void){
_start:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; 
v___x_4453_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5));
v___x_4454_ = lean_unsigned_to_nat(11u);
v___x_4455_ = lean_mk_empty_array_with_capacity(v___x_4454_);
v___x_4456_ = lean_array_push(v___x_4455_, v___x_4453_);
return v___x_4456_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12(void){
_start:
{
lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; 
v___x_4457_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_4458_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11);
v___x_4459_ = lean_array_push(v___x_4458_, v___x_4457_);
return v___x_4459_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13(void){
_start:
{
lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; 
v___x_4460_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__6));
v___x_4461_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12);
v___x_4462_ = lean_array_push(v___x_4461_, v___x_4460_);
return v___x_4462_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14(void){
_start:
{
lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; 
v___x_4463_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_4464_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13);
v___x_4465_ = lean_array_push(v___x_4464_, v___x_4463_);
return v___x_4465_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15(void){
_start:
{
lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; 
v___x_4466_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_4467_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14);
v___x_4468_ = lean_array_push(v___x_4467_, v___x_4466_);
return v___x_4468_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16(void){
_start:
{
lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; 
v___x_4469_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_4470_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15);
v___x_4471_ = lean_array_push(v___x_4470_, v___x_4469_);
return v___x_4471_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17(void){
_start:
{
lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; 
v___x_4472_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_4473_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16);
v___x_4474_ = lean_array_push(v___x_4473_, v___x_4472_);
return v___x_4474_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18(void){
_start:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; 
v___x_4475_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_4476_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17);
v___x_4477_ = lean_array_push(v___x_4476_, v___x_4475_);
return v___x_4477_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19(void){
_start:
{
lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; 
v___x_4478_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_4479_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18);
v___x_4480_ = lean_array_push(v___x_4479_, v___x_4478_);
return v___x_4480_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20(void){
_start:
{
lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; 
v___x_4481_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10));
v___x_4482_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19);
v___x_4483_ = lean_array_push(v___x_4482_, v___x_4481_);
return v___x_4483_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22(void){
_start:
{
lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; 
v___x_4485_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5));
v___x_4486_ = lean_unsigned_to_nat(17u);
v___x_4487_ = lean_mk_empty_array_with_capacity(v___x_4486_);
v___x_4488_ = lean_array_push(v___x_4487_, v___x_4485_);
return v___x_4488_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23(void){
_start:
{
lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; 
v___x_4489_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_4490_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22);
v___x_4491_ = lean_array_push(v___x_4490_, v___x_4489_);
return v___x_4491_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24(void){
_start:
{
lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; 
v___x_4492_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_4493_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23);
v___x_4494_ = lean_array_push(v___x_4493_, v___x_4492_);
return v___x_4494_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25(void){
_start:
{
lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; 
v___x_4495_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_4496_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24);
v___x_4497_ = lean_array_push(v___x_4496_, v___x_4495_);
return v___x_4497_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26(void){
_start:
{
lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; 
v___x_4498_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_4499_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25);
v___x_4500_ = lean_array_push(v___x_4499_, v___x_4498_);
return v___x_4500_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27(void){
_start:
{
lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; 
v___x_4501_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__21));
v___x_4502_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26);
v___x_4503_ = lean_array_push(v___x_4502_, v___x_4501_);
return v___x_4503_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28(void){
_start:
{
lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; 
v___x_4504_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_4505_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27);
v___x_4506_ = lean_array_push(v___x_4505_, v___x_4504_);
return v___x_4506_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29(void){
_start:
{
lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; 
v___x_4507_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_4508_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28);
v___x_4509_ = lean_array_push(v___x_4508_, v___x_4507_);
return v___x_4509_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30(void){
_start:
{
lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; 
v___x_4510_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13));
v___x_4511_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29);
v___x_4512_ = lean_array_push(v___x_4511_, v___x_4510_);
return v___x_4512_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31(void){
_start:
{
lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; 
v___x_4513_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14));
v___x_4514_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30);
v___x_4515_ = lean_array_push(v___x_4514_, v___x_4513_);
return v___x_4515_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32(void){
_start:
{
lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; 
v___x_4516_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15));
v___x_4517_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31);
v___x_4518_ = lean_array_push(v___x_4517_, v___x_4516_);
return v___x_4518_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0(lean_object* v_cfg_4519_, lean_object* v_h_4520_, lean_object* v_path_4521_, lean_object* v___y_4522_){
_start:
{
lean_object* v___y_4528_; uint32_t v___y_4529_; lean_object* v___y_4530_; uint8_t v_kind_4539_; lean_object* v_scope_4540_; lean_object* v_infos_4541_; lean_object* v_key_4542_; uint8_t v___y_4544_; uint32_t v___y_4545_; lean_object* v___y_4546_; lean_object* v___y_4553_; uint8_t v___y_4554_; lean_object* v___y_4555_; uint32_t v___y_4556_; lean_object* v___y_4557_; lean_object* v___y_4558_; lean_object* v___y_4559_; lean_object* v___y_4571_; lean_object* v___y_4572_; uint32_t v___y_4573_; uint8_t v_didError_4574_; lean_object* v___y_4575_; uint8_t v___y_4580_; lean_object* v___y_4581_; uint32_t v___y_4582_; lean_object* v___y_4583_; lean_object* v___y_4584_; lean_object* v___y_4585_; uint8_t v___y_4595_; lean_object* v___y_4596_; lean_object* v___y_4597_; uint32_t v___y_4598_; lean_object* v___y_4599_; lean_object* v___y_4602_; lean_object* v_a_4603_; lean_object* v___y_4679_; lean_object* v___y_4680_; lean_object* v___y_4681_; lean_object* v_val_4682_; lean_object* v_a_4690_; lean_object* v___y_4715_; lean_object* v___y_4743_; 
v_kind_4539_ = lean_ctor_get_uint8(v_cfg_4519_, sizeof(void*)*3);
v_scope_4540_ = lean_ctor_get(v_cfg_4519_, 0);
lean_inc_ref(v_scope_4540_);
v_infos_4541_ = lean_ctor_get(v_cfg_4519_, 1);
lean_inc_ref(v_infos_4541_);
v_key_4542_ = lean_ctor_get(v_cfg_4519_, 2);
if (v_kind_4539_ == 0)
{
lean_object* v___x_4744_; lean_object* v___x_4745_; uint8_t v___x_4746_; 
v___x_4744_ = lean_unsigned_to_nat(0u);
v___x_4745_ = lean_array_get_size(v_infos_4541_);
v___x_4746_ = lean_nat_dec_lt(v___x_4744_, v___x_4745_);
if (v___x_4746_ == 0)
{
goto v___jp_4697_;
}
else
{
lean_object* v___x_4747_; uint8_t v___x_4748_; 
v___x_4747_ = lean_box(0);
v___x_4748_ = lean_nat_dec_le(v___x_4745_, v___x_4745_);
if (v___x_4748_ == 0)
{
if (v___x_4746_ == 0)
{
goto v___jp_4697_;
}
else
{
size_t v___x_4749_; size_t v___x_4750_; lean_object* v___x_4751_; 
v___x_4749_ = ((size_t)0ULL);
v___x_4750_ = lean_usize_of_nat(v___x_4745_);
v___x_4751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4520_, v_infos_4541_, v___x_4749_, v___x_4750_, v___x_4747_, v___y_4522_);
v___y_4715_ = v___x_4751_;
goto v___jp_4714_;
}
}
else
{
size_t v___x_4752_; size_t v___x_4753_; lean_object* v___x_4754_; 
v___x_4752_ = ((size_t)0ULL);
v___x_4753_ = lean_usize_of_nat(v___x_4745_);
v___x_4754_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4520_, v_infos_4541_, v___x_4752_, v___x_4753_, v___x_4747_, v___y_4522_);
v___y_4715_ = v___x_4754_;
goto v___jp_4714_;
}
}
}
else
{
lean_object* v___x_4755_; lean_object* v___x_4756_; uint8_t v___x_4757_; 
v___x_4755_ = lean_unsigned_to_nat(0u);
v___x_4756_ = lean_array_get_size(v_infos_4541_);
v___x_4757_ = lean_nat_dec_lt(v___x_4755_, v___x_4756_);
if (v___x_4757_ == 0)
{
goto v___jp_4716_;
}
else
{
lean_object* v___x_4758_; uint8_t v___x_4759_; 
v___x_4758_ = lean_box(0);
v___x_4759_ = lean_nat_dec_le(v___x_4756_, v___x_4756_);
if (v___x_4759_ == 0)
{
if (v___x_4757_ == 0)
{
goto v___jp_4716_;
}
else
{
size_t v___x_4760_; size_t v___x_4761_; lean_object* v___x_4762_; 
v___x_4760_ = ((size_t)0ULL);
v___x_4761_ = lean_usize_of_nat(v___x_4756_);
v___x_4762_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4520_, v_infos_4541_, v___x_4760_, v___x_4761_, v___x_4758_, v___y_4522_);
v___y_4743_ = v___x_4762_;
goto v___jp_4742_;
}
}
else
{
size_t v___x_4763_; size_t v___x_4764_; lean_object* v___x_4765_; 
v___x_4763_ = ((size_t)0ULL);
v___x_4764_ = lean_usize_of_nat(v___x_4756_);
v___x_4765_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4520_, v_infos_4541_, v___x_4763_, v___x_4764_, v___x_4758_, v___y_4522_);
v___y_4743_ = v___x_4765_;
goto v___jp_4742_;
}
}
}
v___jp_4524_:
{
lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___x_4525_ = lean_box(0);
v___x_4526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4526_, 0, v___x_4525_);
return v___x_4526_;
}
v___jp_4527_:
{
lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; uint8_t v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; 
v___x_4531_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0));
v___x_4532_ = lean_string_append(v___y_4530_, v___x_4531_);
v___x_4533_ = lean_uint32_to_nat(v___y_4529_);
v___x_4534_ = l_Nat_reprFast(v___x_4533_);
v___x_4535_ = lean_string_append(v___x_4532_, v___x_4534_);
lean_dec_ref(v___x_4534_);
v___x_4536_ = 3;
v___x_4537_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4537_, 0, v___x_4535_);
lean_ctor_set_uint8(v___x_4537_, sizeof(void*)*1, v___x_4536_);
lean_inc_ref(v___y_4528_);
v___x_4538_ = lean_apply_2(v___y_4528_, v___x_4537_, lean_box(0));
goto v___jp_4524_;
}
v___jp_4543_:
{
uint32_t v___x_4547_; uint8_t v___x_4548_; 
v___x_4547_ = 0;
v___x_4548_ = lean_uint32_dec_eq(v___y_4545_, v___x_4547_);
if (v___x_4548_ == 0)
{
lean_object* v_s_4549_; 
v_s_4549_ = lean_ctor_get(v_scope_4540_, 0);
lean_inc_ref(v_s_4549_);
lean_dec_ref(v_scope_4540_);
v___y_4528_ = v___y_4546_;
v___y_4529_ = v___y_4545_;
v___y_4530_ = v_s_4549_;
goto v___jp_4527_;
}
else
{
lean_dec_ref(v_scope_4540_);
if (v___y_4544_ == 0)
{
lean_object* v___x_4550_; lean_object* v___x_4551_; 
v___x_4550_ = lean_box(0);
v___x_4551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4551_, 0, v___x_4550_);
return v___x_4551_;
}
else
{
goto v___jp_4524_;
}
}
}
v___jp_4552_:
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; uint8_t v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; 
v___x_4560_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1));
v___x_4561_ = lean_string_append(v___y_4559_, v___x_4560_);
lean_inc(v___y_4558_);
lean_inc(v___y_4555_);
lean_inc_ref(v___y_4557_);
v___x_4562_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4562_, 0, v___y_4557_);
lean_ctor_set(v___x_4562_, 1, v___y_4555_);
lean_ctor_set(v___x_4562_, 2, v___y_4558_);
v___x_4563_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_4562_, v___y_4558_);
lean_dec_ref_known(v___x_4562_, 3);
v___x_4564_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4564_, 0, v___y_4557_);
lean_ctor_set(v___x_4564_, 1, v___y_4555_);
lean_ctor_set(v___x_4564_, 2, v___x_4563_);
v___x_4565_ = l_String_Slice_toString(v___x_4564_);
lean_dec_ref_known(v___x_4564_, 3);
v___x_4566_ = lean_string_append(v___x_4561_, v___x_4565_);
lean_dec_ref(v___x_4565_);
v___x_4567_ = 2;
v___x_4568_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4568_, 0, v___x_4566_);
lean_ctor_set_uint8(v___x_4568_, sizeof(void*)*1, v___x_4567_);
lean_inc_ref(v___y_4553_);
v___x_4569_ = lean_apply_2(v___y_4553_, v___x_4568_, lean_box(0));
v___y_4544_ = v___y_4554_;
v___y_4545_ = v___y_4556_;
v___y_4546_ = v___y_4553_;
goto v___jp_4543_;
}
v___jp_4570_:
{
lean_object* v___x_4576_; uint8_t v___x_4577_; 
v___x_4576_ = lean_string_utf8_byte_size(v___y_4572_);
v___x_4577_ = lean_nat_dec_eq(v___x_4576_, v___y_4571_);
if (v___x_4577_ == 0)
{
lean_object* v_s_4578_; 
v_s_4578_ = lean_ctor_get(v_scope_4540_, 0);
lean_inc_ref(v_s_4578_);
v___y_4553_ = v___y_4575_;
v___y_4554_ = v_didError_4574_;
v___y_4555_ = v___y_4571_;
v___y_4556_ = v___y_4573_;
v___y_4557_ = v___y_4572_;
v___y_4558_ = v___x_4576_;
v___y_4559_ = v_s_4578_;
goto v___jp_4552_;
}
else
{
lean_dec_ref(v___y_4572_);
lean_dec(v___y_4571_);
v___y_4544_ = v_didError_4574_;
v___y_4545_ = v___y_4573_;
v___y_4546_ = v___y_4575_;
goto v___jp_4543_;
}
}
v___jp_4579_:
{
lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; uint8_t v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___x_4586_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_4587_ = lean_string_append(v___y_4585_, v___x_4586_);
v___x_4588_ = lean_string_append(v___x_4587_, v___y_4584_);
v___x_4589_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2));
v___x_4590_ = lean_string_append(v___x_4588_, v___x_4589_);
v___x_4591_ = 3;
v___x_4592_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4592_, 0, v___x_4590_);
lean_ctor_set_uint8(v___x_4592_, sizeof(void*)*1, v___x_4591_);
lean_inc_ref(v___y_4522_);
v___x_4593_ = lean_apply_2(v___y_4522_, v___x_4592_, lean_box(0));
v___y_4571_ = v___y_4581_;
v___y_4572_ = v___y_4583_;
v___y_4573_ = v___y_4582_;
v_didError_4574_ = v___y_4580_;
v___y_4575_ = v___y_4522_;
goto v___jp_4570_;
}
v___jp_4594_:
{
lean_object* v_s_4600_; 
v_s_4600_ = lean_ctor_get(v_scope_4540_, 0);
lean_inc_ref(v_s_4600_);
v___y_4580_ = v___y_4595_;
v___y_4581_ = v___y_4596_;
v___y_4582_ = v___y_4598_;
v___y_4583_ = v___y_4597_;
v___y_4584_ = v___y_4599_;
v___y_4585_ = v_s_4600_;
goto v___jp_4579_;
}
v___jp_4601_:
{
lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; uint8_t v___x_4608_; uint8_t v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; 
v___x_4604_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3));
v___x_4605_ = lean_box(0);
v___x_4606_ = lean_unsigned_to_nat(0u);
v___x_4607_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_4608_ = 1;
v___x_4609_ = 0;
v___x_4610_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_4610_, 0, v___x_4604_);
lean_ctor_set(v___x_4610_, 1, v_a_4603_);
lean_ctor_set(v___x_4610_, 2, v___y_4602_);
lean_ctor_set(v___x_4610_, 3, v___x_4605_);
lean_ctor_set(v___x_4610_, 4, v___x_4607_);
lean_ctor_set_uint8(v___x_4610_, sizeof(void*)*5, v___x_4608_);
lean_ctor_set_uint8(v___x_4610_, sizeof(void*)*5 + 1, v___x_4609_);
v___x_4611_ = lean_io_process_spawn(v___x_4610_);
if (lean_obj_tag(v___x_4611_) == 0)
{
lean_object* v_a_4612_; lean_object* v_stdout_4613_; lean_object* v_stderr_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; 
v_a_4612_ = lean_ctor_get(v___x_4611_, 0);
lean_inc(v_a_4612_);
lean_dec_ref_known(v___x_4611_, 1);
v_stdout_4613_ = lean_ctor_get(v_a_4612_, 1);
lean_inc(v_stdout_4613_);
v_stderr_4614_ = lean_ctor_get(v_a_4612_, 2);
v___x_4615_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4));
v___x_4616_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_4519_, v_stderr_4614_, v_stdout_4613_, v___x_4615_, v___y_4522_);
if (lean_obj_tag(v___x_4616_) == 0)
{
lean_object* v_a_4617_; lean_object* v___x_4618_; 
v_a_4617_ = lean_ctor_get(v___x_4616_, 0);
lean_inc(v_a_4617_);
lean_dec_ref_known(v___x_4616_, 1);
v___x_4618_ = lean_io_process_child_wait(v___x_4604_, v_a_4612_);
lean_dec(v_a_4612_);
if (lean_obj_tag(v___x_4618_) == 0)
{
lean_object* v_a_4619_; lean_object* v___x_4620_; 
v_a_4619_ = lean_ctor_get(v___x_4618_, 0);
lean_inc(v_a_4619_);
lean_dec_ref_known(v___x_4618_, 1);
v___x_4620_ = l_IO_FS_Handle_readToEnd(v_stdout_4613_);
lean_dec(v_stdout_4613_);
if (lean_obj_tag(v___x_4620_) == 0)
{
lean_object* v_a_4621_; uint8_t v_didError_4622_; lean_object* v_numSuccesses_4623_; lean_object* v___x_4624_; uint8_t v___x_4625_; 
v_a_4621_ = lean_ctor_get(v___x_4620_, 0);
lean_inc(v_a_4621_);
lean_dec_ref_known(v___x_4620_, 1);
v_didError_4622_ = lean_ctor_get_uint8(v_a_4617_, sizeof(void*)*1);
v_numSuccesses_4623_ = lean_ctor_get(v_a_4617_, 0);
lean_inc(v_numSuccesses_4623_);
lean_dec(v_a_4617_);
v___x_4624_ = lean_array_get_size(v_infos_4541_);
lean_dec_ref(v_infos_4541_);
v___x_4625_ = lean_nat_dec_lt(v_numSuccesses_4623_, v___x_4624_);
lean_dec(v_numSuccesses_4623_);
if (v___x_4625_ == 0)
{
uint32_t v___x_4626_; 
v___x_4626_ = lean_unbox_uint32(v_a_4619_);
lean_dec(v_a_4619_);
v___y_4571_ = v___x_4606_;
v___y_4572_ = v_a_4621_;
v___y_4573_ = v___x_4626_;
v_didError_4574_ = v_didError_4622_;
v___y_4575_ = v___y_4522_;
goto v___jp_4570_;
}
else
{
if (v_kind_4539_ == 0)
{
lean_object* v___x_4627_; uint32_t v___x_4628_; 
v___x_4627_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___x_4628_ = lean_unbox_uint32(v_a_4619_);
lean_dec(v_a_4619_);
v___y_4595_ = v___x_4608_;
v___y_4596_ = v___x_4606_;
v___y_4597_ = v_a_4621_;
v___y_4598_ = v___x_4628_;
v___y_4599_ = v___x_4627_;
goto v___jp_4594_;
}
else
{
lean_object* v___x_4629_; uint32_t v___x_4630_; 
v___x_4629_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___x_4630_ = lean_unbox_uint32(v_a_4619_);
lean_dec(v_a_4619_);
v___y_4595_ = v___x_4608_;
v___y_4596_ = v___x_4606_;
v___y_4597_ = v_a_4621_;
v___y_4598_ = v___x_4630_;
v___y_4599_ = v___x_4629_;
goto v___jp_4594_;
}
}
}
else
{
lean_object* v_a_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4643_; 
lean_dec(v_a_4619_);
lean_dec(v_a_4617_);
lean_dec_ref(v_infos_4541_);
lean_dec_ref(v_scope_4540_);
v_a_4631_ = lean_ctor_get(v___x_4620_, 0);
v_isSharedCheck_4643_ = !lean_is_exclusive(v___x_4620_);
if (v_isSharedCheck_4643_ == 0)
{
v___x_4633_ = v___x_4620_;
v_isShared_4634_ = v_isSharedCheck_4643_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_a_4631_);
lean_dec(v___x_4620_);
v___x_4633_ = lean_box(0);
v_isShared_4634_ = v_isSharedCheck_4643_;
goto v_resetjp_4632_;
}
v_resetjp_4632_:
{
lean_object* v___x_4635_; uint8_t v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4641_; 
v___x_4635_ = lean_io_error_to_string(v_a_4631_);
v___x_4636_ = 3;
v___x_4637_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4637_, 0, v___x_4635_);
lean_ctor_set_uint8(v___x_4637_, sizeof(void*)*1, v___x_4636_);
lean_inc_ref(v___y_4522_);
v___x_4638_ = lean_apply_2(v___y_4522_, v___x_4637_, lean_box(0));
v___x_4639_ = lean_box(0);
if (v_isShared_4634_ == 0)
{
lean_ctor_set(v___x_4633_, 0, v___x_4639_);
v___x_4641_ = v___x_4633_;
goto v_reusejp_4640_;
}
else
{
lean_object* v_reuseFailAlloc_4642_; 
v_reuseFailAlloc_4642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4642_, 0, v___x_4639_);
v___x_4641_ = v_reuseFailAlloc_4642_;
goto v_reusejp_4640_;
}
v_reusejp_4640_:
{
return v___x_4641_;
}
}
}
}
else
{
lean_object* v_a_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4656_; 
lean_dec(v_a_4617_);
lean_dec(v_stdout_4613_);
lean_dec_ref(v_infos_4541_);
lean_dec_ref(v_scope_4540_);
v_a_4644_ = lean_ctor_get(v___x_4618_, 0);
v_isSharedCheck_4656_ = !lean_is_exclusive(v___x_4618_);
if (v_isSharedCheck_4656_ == 0)
{
v___x_4646_ = v___x_4618_;
v_isShared_4647_ = v_isSharedCheck_4656_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_a_4644_);
lean_dec(v___x_4618_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4656_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
lean_object* v___x_4648_; uint8_t v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4654_; 
v___x_4648_ = lean_io_error_to_string(v_a_4644_);
v___x_4649_ = 3;
v___x_4650_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4650_, 0, v___x_4648_);
lean_ctor_set_uint8(v___x_4650_, sizeof(void*)*1, v___x_4649_);
lean_inc_ref(v___y_4522_);
v___x_4651_ = lean_apply_2(v___y_4522_, v___x_4650_, lean_box(0));
v___x_4652_ = lean_box(0);
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 0, v___x_4652_);
v___x_4654_ = v___x_4646_;
goto v_reusejp_4653_;
}
else
{
lean_object* v_reuseFailAlloc_4655_; 
v_reuseFailAlloc_4655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4655_, 0, v___x_4652_);
v___x_4654_ = v_reuseFailAlloc_4655_;
goto v_reusejp_4653_;
}
v_reusejp_4653_:
{
return v___x_4654_;
}
}
}
}
else
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4664_; 
lean_dec(v_stdout_4613_);
lean_dec(v_a_4612_);
lean_dec_ref(v_infos_4541_);
lean_dec_ref(v_scope_4540_);
v_a_4657_ = lean_ctor_get(v___x_4616_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v___x_4616_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4659_ = v___x_4616_;
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v___x_4616_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
return v___x_4662_;
}
}
}
}
else
{
lean_object* v_a_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4677_; 
lean_dec_ref(v_infos_4541_);
lean_dec_ref(v_scope_4540_);
lean_dec_ref(v_cfg_4519_);
v_a_4665_ = lean_ctor_get(v___x_4611_, 0);
v_isSharedCheck_4677_ = !lean_is_exclusive(v___x_4611_);
if (v_isSharedCheck_4677_ == 0)
{
v___x_4667_ = v___x_4611_;
v_isShared_4668_ = v_isSharedCheck_4677_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_a_4665_);
lean_dec(v___x_4611_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4677_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4669_; uint8_t v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4675_; 
v___x_4669_ = lean_io_error_to_string(v_a_4665_);
v___x_4670_ = 3;
v___x_4671_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4671_, 0, v___x_4669_);
lean_ctor_set_uint8(v___x_4671_, sizeof(void*)*1, v___x_4670_);
lean_inc_ref(v___y_4522_);
v___x_4672_ = lean_apply_2(v___y_4522_, v___x_4671_, lean_box(0));
v___x_4673_ = lean_box(0);
if (v_isShared_4668_ == 0)
{
lean_ctor_set(v___x_4667_, 0, v___x_4673_);
v___x_4675_ = v___x_4667_;
goto v_reusejp_4674_;
}
else
{
lean_object* v_reuseFailAlloc_4676_; 
v_reuseFailAlloc_4676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4676_, 0, v___x_4673_);
v___x_4675_ = v_reuseFailAlloc_4676_;
goto v_reusejp_4674_;
}
v_reusejp_4674_:
{
return v___x_4675_;
}
}
}
}
v___jp_4678_:
{
lean_object* v___x_4683_; uint8_t v___x_4684_; 
v___x_4683_ = lean_array_get_size(v___y_4680_);
v___x_4684_ = lean_nat_dec_lt(v___y_4679_, v___x_4683_);
if (v___x_4684_ == 0)
{
v___y_4602_ = v___y_4681_;
v_a_4603_ = v_val_4682_;
goto v___jp_4601_;
}
else
{
lean_object* v___x_4685_; size_t v___x_4686_; size_t v___x_4687_; lean_object* v___x_4688_; 
v___x_4685_ = lean_box(0);
v___x_4686_ = ((size_t)0ULL);
v___x_4687_ = lean_usize_of_nat(v___x_4683_);
v___x_4688_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_4680_, v___x_4686_, v___x_4687_, v___x_4685_, v___y_4522_);
if (lean_obj_tag(v___x_4688_) == 0)
{
lean_dec_ref_known(v___x_4688_, 1);
v___y_4602_ = v___y_4681_;
v_a_4603_ = v_val_4682_;
goto v___jp_4601_;
}
else
{
lean_dec_ref(v_val_4682_);
lean_dec_ref(v___y_4681_);
lean_dec_ref(v_infos_4541_);
lean_dec_ref(v_scope_4540_);
lean_dec_ref(v_cfg_4519_);
return v___x_4688_;
}
}
}
v___jp_4689_:
{
lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; 
v___x_4691_ = lean_unsigned_to_nat(0u);
v___x_4692_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_4693_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_4694_ = lean_io_getenv(v___x_4693_);
if (lean_obj_tag(v___x_4694_) == 0)
{
lean_object* v___x_4695_; 
v___x_4695_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v___y_4679_ = v___x_4691_;
v___y_4680_ = v___x_4692_;
v___y_4681_ = v_a_4690_;
v_val_4682_ = v___x_4695_;
goto v___jp_4678_;
}
else
{
lean_object* v_val_4696_; 
v_val_4696_ = lean_ctor_get(v___x_4694_, 0);
lean_inc(v_val_4696_);
lean_dec_ref_known(v___x_4694_, 1);
v___y_4679_ = v___x_4691_;
v___y_4680_ = v___x_4692_;
v___y_4681_ = v_a_4690_;
v_val_4682_ = v_val_4696_;
goto v___jp_4678_;
}
}
v___jp_4697_:
{
lean_object* v___x_4698_; 
v___x_4698_ = lean_io_prim_handle_flush(v_h_4520_);
if (lean_obj_tag(v___x_4698_) == 0)
{
lean_object* v___x_4699_; lean_object* v___x_4700_; 
lean_dec_ref_known(v___x_4698_, 1);
v___x_4699_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20);
v___x_4700_ = lean_array_push(v___x_4699_, v_path_4521_);
v_a_4690_ = v___x_4700_;
goto v___jp_4689_;
}
else
{
lean_object* v_a_4701_; lean_object* v___x_4703_; uint8_t v_isShared_4704_; uint8_t v_isSharedCheck_4713_; 
lean_dec_ref(v_infos_4541_);
lean_dec_ref(v_scope_4540_);
lean_dec_ref(v_path_4521_);
lean_dec_ref(v_cfg_4519_);
v_a_4701_ = lean_ctor_get(v___x_4698_, 0);
v_isSharedCheck_4713_ = !lean_is_exclusive(v___x_4698_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4703_ = v___x_4698_;
v_isShared_4704_ = v_isSharedCheck_4713_;
goto v_resetjp_4702_;
}
else
{
lean_inc(v_a_4701_);
lean_dec(v___x_4698_);
v___x_4703_ = lean_box(0);
v_isShared_4704_ = v_isSharedCheck_4713_;
goto v_resetjp_4702_;
}
v_resetjp_4702_:
{
lean_object* v___x_4705_; uint8_t v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4711_; 
v___x_4705_ = lean_io_error_to_string(v_a_4701_);
v___x_4706_ = 3;
v___x_4707_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4707_, 0, v___x_4705_);
lean_ctor_set_uint8(v___x_4707_, sizeof(void*)*1, v___x_4706_);
lean_inc_ref(v___y_4522_);
v___x_4708_ = lean_apply_2(v___y_4522_, v___x_4707_, lean_box(0));
v___x_4709_ = lean_box(0);
if (v_isShared_4704_ == 0)
{
lean_ctor_set(v___x_4703_, 0, v___x_4709_);
v___x_4711_ = v___x_4703_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v___x_4709_);
v___x_4711_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
return v___x_4711_;
}
}
}
}
v___jp_4714_:
{
if (lean_obj_tag(v___y_4715_) == 0)
{
lean_dec_ref_known(v___y_4715_, 1);
goto v___jp_4697_;
}
else
{
lean_dec_ref(v_infos_4541_);
lean_dec_ref(v_scope_4540_);
lean_dec_ref(v_path_4521_);
lean_dec_ref(v_cfg_4519_);
return v___y_4715_;
}
}
v___jp_4716_:
{
lean_object* v___x_4717_; 
v___x_4717_ = lean_io_prim_handle_flush(v_h_4520_);
if (lean_obj_tag(v___x_4717_) == 0)
{
lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; 
lean_dec_ref_known(v___x_4717_, 1);
v___x_4718_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_4719_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_4720_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_4721_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10));
v___x_4722_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32);
lean_inc_ref(v_key_4542_);
v___x_4723_ = lean_array_push(v___x_4722_, v_key_4542_);
v___x_4724_ = lean_array_push(v___x_4723_, v___x_4718_);
v___x_4725_ = lean_array_push(v___x_4724_, v___x_4719_);
v___x_4726_ = lean_array_push(v___x_4725_, v___x_4720_);
v___x_4727_ = lean_array_push(v___x_4726_, v___x_4721_);
v___x_4728_ = lean_array_push(v___x_4727_, v_path_4521_);
v_a_4690_ = v___x_4728_;
goto v___jp_4689_;
}
else
{
lean_object* v_a_4729_; lean_object* v___x_4731_; uint8_t v_isShared_4732_; uint8_t v_isSharedCheck_4741_; 
lean_dec_ref(v_infos_4541_);
lean_dec_ref(v_scope_4540_);
lean_dec_ref(v_path_4521_);
lean_dec_ref(v_cfg_4519_);
v_a_4729_ = lean_ctor_get(v___x_4717_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4717_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4731_ = v___x_4717_;
v_isShared_4732_ = v_isSharedCheck_4741_;
goto v_resetjp_4730_;
}
else
{
lean_inc(v_a_4729_);
lean_dec(v___x_4717_);
v___x_4731_ = lean_box(0);
v_isShared_4732_ = v_isSharedCheck_4741_;
goto v_resetjp_4730_;
}
v_resetjp_4730_:
{
lean_object* v___x_4733_; uint8_t v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4739_; 
v___x_4733_ = lean_io_error_to_string(v_a_4729_);
v___x_4734_ = 3;
v___x_4735_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4735_, 0, v___x_4733_);
lean_ctor_set_uint8(v___x_4735_, sizeof(void*)*1, v___x_4734_);
lean_inc_ref(v___y_4522_);
v___x_4736_ = lean_apply_2(v___y_4522_, v___x_4735_, lean_box(0));
v___x_4737_ = lean_box(0);
if (v_isShared_4732_ == 0)
{
lean_ctor_set(v___x_4731_, 0, v___x_4737_);
v___x_4739_ = v___x_4731_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v___x_4737_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
return v___x_4739_;
}
}
}
}
v___jp_4742_:
{
if (lean_obj_tag(v___y_4743_) == 0)
{
lean_dec_ref_known(v___y_4743_, 1);
goto v___jp_4716_;
}
else
{
lean_dec_ref(v_infos_4541_);
lean_dec_ref(v_scope_4540_);
lean_dec_ref(v_path_4521_);
lean_dec_ref(v_cfg_4519_);
return v___y_4743_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___boxed(lean_object* v_cfg_4766_, lean_object* v_h_4767_, lean_object* v_path_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_){
_start:
{
lean_object* v_res_4771_; 
v_res_4771_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0(v_cfg_4766_, v_h_4767_, v_path_4768_, v___y_4769_);
lean_dec_ref(v___y_4769_);
lean_dec(v_h_4767_);
return v_res_4771_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(lean_object* v_cfg_4772_, lean_object* v___y_4773_){
_start:
{
lean_object* v___f_4775_; lean_object* v___x_4776_; 
v___f_4775_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___boxed), 5, 1);
lean_closure_set(v___f_4775_, 0, v_cfg_4772_);
v___x_4776_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v___f_4775_, v___y_4773_);
return v___x_4776_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___boxed(lean_object* v_cfg_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_){
_start:
{
lean_object* v_res_4780_; 
v_res_4780_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(v_cfg_4777_, v___y_4778_);
lean_dec_ref(v___y_4778_);
return v_res_4780_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl(lean_object* v_service_4782_, lean_object* v_scope_4783_){
_start:
{
lean_object* v___y_4785_; 
if (lean_obj_tag(v_scope_4783_) == 0)
{
lean_object* v_s_4788_; lean_object* v_apiEndpoint_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; 
v_s_4788_ = lean_ctor_get(v_scope_4783_, 0);
lean_inc_ref(v_s_4788_);
lean_dec_ref_known(v_scope_4783_, 1);
v_apiEndpoint_4789_ = lean_ctor_get(v_service_4782_, 4);
lean_inc_ref(v_apiEndpoint_4789_);
lean_dec_ref(v_service_4782_);
v___x_4790_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_4791_ = lean_string_append(v_apiEndpoint_4789_, v___x_4790_);
v___x_4792_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_4791_, v_s_4788_);
v___y_4785_ = v___x_4792_;
goto v___jp_4784_;
}
else
{
lean_object* v_s_4793_; lean_object* v_apiEndpoint_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; 
v_s_4793_ = lean_ctor_get(v_scope_4783_, 0);
lean_inc_ref(v_s_4793_);
lean_dec_ref_known(v_scope_4783_, 1);
v_apiEndpoint_4794_ = lean_ctor_get(v_service_4782_, 4);
lean_inc_ref(v_apiEndpoint_4794_);
lean_dec_ref(v_service_4782_);
v___x_4795_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_4796_ = lean_string_append(v_apiEndpoint_4794_, v___x_4795_);
v___x_4797_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_4796_, v_s_4793_);
v___y_4785_ = v___x_4797_;
goto v___jp_4784_;
}
v___jp_4784_:
{
lean_object* v___x_4786_; lean_object* v___x_4787_; 
v___x_4786_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl___closed__0));
v___x_4787_ = lean_string_append(v___y_4785_, v___x_4786_);
return v___x_4787_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0(lean_object* v_a_4798_, lean_object* v_as_4799_, size_t v_sz_4800_, size_t v_i_4801_, lean_object* v_b_4802_){
_start:
{
uint8_t v___x_4804_; 
v___x_4804_ = lean_usize_dec_lt(v_i_4801_, v_sz_4800_);
if (v___x_4804_ == 0)
{
lean_object* v___x_4805_; 
v___x_4805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4805_, 0, v_b_4802_);
return v___x_4805_;
}
else
{
lean_object* v___x_4806_; lean_object* v_a_4807_; lean_object* v___x_4808_; 
v___x_4806_ = lean_box(0);
v_a_4807_ = lean_array_uget_borrowed(v_as_4799_, v_i_4801_);
v___x_4808_ = l_IO_FS_writeBinFile(v_a_4807_, v_a_4798_);
if (lean_obj_tag(v___x_4808_) == 0)
{
size_t v___x_4809_; size_t v___x_4810_; 
lean_dec_ref_known(v___x_4808_, 1);
v___x_4809_ = ((size_t)1ULL);
v___x_4810_ = lean_usize_add(v_i_4801_, v___x_4809_);
v_i_4801_ = v___x_4810_;
v_b_4802_ = v___x_4806_;
goto _start;
}
else
{
return v___x_4808_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0___boxed(lean_object* v_a_4812_, lean_object* v_as_4813_, lean_object* v_sz_4814_, lean_object* v_i_4815_, lean_object* v_b_4816_, lean_object* v___y_4817_){
_start:
{
size_t v_sz_boxed_4818_; size_t v_i_boxed_4819_; lean_object* v_res_4820_; 
v_sz_boxed_4818_ = lean_unbox_usize(v_sz_4814_);
lean_dec(v_sz_4814_);
v_i_boxed_4819_ = lean_unbox_usize(v_i_4815_);
lean_dec(v_i_4815_);
v_res_4820_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0(v_a_4812_, v_as_4813_, v_sz_boxed_4818_, v_i_boxed_4819_, v_b_4816_);
lean_dec_ref(v_as_4813_);
lean_dec_ref(v_a_4812_);
return v_res_4820_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths(lean_object* v_path_4821_, lean_object* v_extraPaths_4822_){
_start:
{
lean_object* v___x_4824_; 
v___x_4824_ = l_IO_FS_readBinFile(v_path_4821_);
if (lean_obj_tag(v___x_4824_) == 0)
{
lean_object* v_a_4825_; lean_object* v___x_4826_; size_t v_sz_4827_; size_t v___x_4828_; lean_object* v___x_4829_; 
v_a_4825_ = lean_ctor_get(v___x_4824_, 0);
lean_inc(v_a_4825_);
lean_dec_ref_known(v___x_4824_, 1);
v___x_4826_ = lean_box(0);
v_sz_4827_ = lean_array_size(v_extraPaths_4822_);
v___x_4828_ = ((size_t)0ULL);
v___x_4829_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0(v_a_4825_, v_extraPaths_4822_, v_sz_4827_, v___x_4828_, v___x_4826_);
lean_dec(v_a_4825_);
if (lean_obj_tag(v___x_4829_) == 0)
{
lean_object* v___x_4831_; uint8_t v_isShared_4832_; uint8_t v_isSharedCheck_4836_; 
v_isSharedCheck_4836_ = !lean_is_exclusive(v___x_4829_);
if (v_isSharedCheck_4836_ == 0)
{
lean_object* v_unused_4837_; 
v_unused_4837_ = lean_ctor_get(v___x_4829_, 0);
lean_dec(v_unused_4837_);
v___x_4831_ = v___x_4829_;
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
else
{
lean_dec(v___x_4829_);
v___x_4831_ = lean_box(0);
v_isShared_4832_ = v_isSharedCheck_4836_;
goto v_resetjp_4830_;
}
v_resetjp_4830_:
{
lean_object* v___x_4834_; 
if (v_isShared_4832_ == 0)
{
lean_ctor_set(v___x_4831_, 0, v___x_4826_);
v___x_4834_ = v___x_4831_;
goto v_reusejp_4833_;
}
else
{
lean_object* v_reuseFailAlloc_4835_; 
v_reuseFailAlloc_4835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4835_, 0, v___x_4826_);
v___x_4834_ = v_reuseFailAlloc_4835_;
goto v_reusejp_4833_;
}
v_reusejp_4833_:
{
return v___x_4834_;
}
}
}
else
{
return v___x_4829_;
}
}
else
{
lean_object* v_a_4838_; lean_object* v___x_4840_; uint8_t v_isShared_4841_; uint8_t v_isSharedCheck_4845_; 
v_a_4838_ = lean_ctor_get(v___x_4824_, 0);
v_isSharedCheck_4845_ = !lean_is_exclusive(v___x_4824_);
if (v_isSharedCheck_4845_ == 0)
{
v___x_4840_ = v___x_4824_;
v_isShared_4841_ = v_isSharedCheck_4845_;
goto v_resetjp_4839_;
}
else
{
lean_inc(v_a_4838_);
lean_dec(v___x_4824_);
v___x_4840_ = lean_box(0);
v_isShared_4841_ = v_isSharedCheck_4845_;
goto v_resetjp_4839_;
}
v_resetjp_4839_:
{
lean_object* v___x_4843_; 
if (v_isShared_4841_ == 0)
{
v___x_4843_ = v___x_4840_;
goto v_reusejp_4842_;
}
else
{
lean_object* v_reuseFailAlloc_4844_; 
v_reuseFailAlloc_4844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4844_, 0, v_a_4838_);
v___x_4843_ = v_reuseFailAlloc_4844_;
goto v_reusejp_4842_;
}
v_reusejp_4842_:
{
return v___x_4843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths___boxed(lean_object* v_path_4846_, lean_object* v_extraPaths_4847_, lean_object* v___y_4848_){
_start:
{
lean_object* v_res_4849_; 
v_res_4849_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths(v_path_4846_, v_extraPaths_4847_);
lean_dec_ref(v_extraPaths_4847_);
lean_dec_ref(v_path_4846_);
return v_res_4849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(size_t v_sz_4850_, size_t v_i_4851_, lean_object* v_bs_4852_){
_start:
{
uint8_t v___x_4853_; 
v___x_4853_ = lean_usize_dec_lt(v_i_4851_, v_sz_4850_);
if (v___x_4853_ == 0)
{
return v_bs_4852_;
}
else
{
lean_object* v_v_4854_; uint64_t v_hash_4855_; lean_object* v___x_4856_; lean_object* v_bs_x27_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; size_t v___x_4860_; size_t v___x_4861_; lean_object* v___x_4862_; 
v_v_4854_ = lean_array_uget_borrowed(v_bs_4852_, v_i_4851_);
v_hash_4855_ = lean_ctor_get_uint64(v_v_4854_, sizeof(void*)*3);
v___x_4856_ = lean_unsigned_to_nat(0u);
v_bs_x27_4857_ = lean_array_uset(v_bs_4852_, v_i_4851_, v___x_4856_);
v___x_4858_ = l_Lake_lowerHexUInt64(v_hash_4855_);
v___x_4859_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4859_, 0, v___x_4858_);
v___x_4860_ = ((size_t)1ULL);
v___x_4861_ = lean_usize_add(v_i_4851_, v___x_4860_);
v___x_4862_ = lean_array_uset(v_bs_x27_4857_, v_i_4851_, v___x_4859_);
v_i_4851_ = v___x_4861_;
v_bs_4852_ = v___x_4862_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0___boxed(lean_object* v_sz_4864_, lean_object* v_i_4865_, lean_object* v_bs_4866_){
_start:
{
size_t v_sz_boxed_4867_; size_t v_i_boxed_4868_; lean_object* v_res_4869_; 
v_sz_boxed_4867_ = lean_unbox_usize(v_sz_4864_);
lean_dec(v_sz_4864_);
v_i_boxed_4868_ = lean_unbox_usize(v_i_4865_);
lean_dec(v_i_4865_);
v_res_4869_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(v_sz_boxed_4867_, v_i_boxed_4868_, v_bs_4866_);
return v_res_4869_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(lean_object* v_a_4870_, lean_object* v_n_4871_, lean_object* v_j_4872_, lean_object* v_a_4873_){
_start:
{
lean_object* v_zero_4874_; uint8_t v_isZero_4875_; 
v_zero_4874_ = lean_unsigned_to_nat(0u);
v_isZero_4875_ = lean_nat_dec_eq(v_j_4872_, v_zero_4874_);
if (v_isZero_4875_ == 1)
{
lean_dec(v_j_4872_);
return v_a_4873_;
}
else
{
lean_object* v___x_4876_; lean_object* v___x_4877_; uint64_t v_hash_4878_; lean_object* v_path_4879_; lean_object* v_extraPaths_4880_; lean_object* v___x_4882_; uint8_t v_isShared_4883_; uint8_t v_isSharedCheck_4892_; 
v___x_4876_ = lean_nat_sub(v_n_4871_, v_j_4872_);
v___x_4877_ = lean_array_fget(v_a_4873_, v___x_4876_);
v_hash_4878_ = lean_ctor_get_uint64(v___x_4877_, sizeof(void*)*3);
v_path_4879_ = lean_ctor_get(v___x_4877_, 1);
v_extraPaths_4880_ = lean_ctor_get(v___x_4877_, 2);
v_isSharedCheck_4892_ = !lean_is_exclusive(v___x_4877_);
if (v_isSharedCheck_4892_ == 0)
{
lean_object* v_unused_4893_; 
v_unused_4893_ = lean_ctor_get(v___x_4877_, 0);
lean_dec(v_unused_4893_);
v___x_4882_ = v___x_4877_;
v_isShared_4883_ = v_isSharedCheck_4892_;
goto v_resetjp_4881_;
}
else
{
lean_inc(v_extraPaths_4880_);
lean_inc(v_path_4879_);
lean_dec(v___x_4877_);
v___x_4882_ = lean_box(0);
v_isShared_4883_ = v_isSharedCheck_4892_;
goto v_resetjp_4881_;
}
v_resetjp_4881_:
{
lean_object* v_one_4884_; lean_object* v_n_4885_; lean_object* v___x_4886_; lean_object* v___x_4888_; 
v_one_4884_ = lean_unsigned_to_nat(1u);
v_n_4885_ = lean_nat_sub(v_j_4872_, v_one_4884_);
lean_dec(v_j_4872_);
v___x_4886_ = lean_array_fget_borrowed(v_a_4870_, v___x_4876_);
lean_inc(v___x_4886_);
if (v_isShared_4883_ == 0)
{
lean_ctor_set(v___x_4882_, 0, v___x_4886_);
v___x_4888_ = v___x_4882_;
goto v_reusejp_4887_;
}
else
{
lean_object* v_reuseFailAlloc_4891_; 
v_reuseFailAlloc_4891_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_4891_, 0, v___x_4886_);
lean_ctor_set(v_reuseFailAlloc_4891_, 1, v_path_4879_);
lean_ctor_set(v_reuseFailAlloc_4891_, 2, v_extraPaths_4880_);
lean_ctor_set_uint64(v_reuseFailAlloc_4891_, sizeof(void*)*3, v_hash_4878_);
v___x_4888_ = v_reuseFailAlloc_4891_;
goto v_reusejp_4887_;
}
v_reusejp_4887_:
{
lean_object* v___x_4889_; 
v___x_4889_ = lean_array_fset(v_a_4873_, v___x_4876_, v___x_4888_);
lean_dec(v___x_4876_);
v_j_4872_ = v_n_4885_;
v_a_4873_ = v___x_4889_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg___boxed(lean_object* v_a_4894_, lean_object* v_n_4895_, lean_object* v_j_4896_, lean_object* v_a_4897_){
_start:
{
lean_object* v_res_4898_; 
v_res_4898_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(v_a_4894_, v_n_4895_, v_j_4896_, v_a_4897_);
lean_dec(v_n_4895_);
lean_dec_ref(v_a_4894_);
return v_res_4898_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0(void){
_start:
{
lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; 
v___x_4899_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_4900_ = lean_unsigned_to_nat(2u);
v___x_4901_ = lean_mk_empty_array_with_capacity(v___x_4900_);
v___x_4902_ = lean_array_push(v___x_4901_, v___x_4899_);
return v___x_4902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(lean_object* v_as_4903_, size_t v_i_4904_, size_t v_stop_4905_, lean_object* v_b_4906_){
_start:
{
uint8_t v___x_4907_; 
v___x_4907_ = lean_usize_dec_eq(v_i_4904_, v_stop_4905_);
if (v___x_4907_ == 0)
{
lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; size_t v___x_4912_; size_t v___x_4913_; 
v___x_4908_ = lean_array_uget_borrowed(v_as_4903_, v_i_4904_);
v___x_4909_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0);
lean_inc(v___x_4908_);
v___x_4910_ = lean_array_push(v___x_4909_, v___x_4908_);
v___x_4911_ = l_Array_append___redArg(v_b_4906_, v___x_4910_);
lean_dec_ref(v___x_4910_);
v___x_4912_ = ((size_t)1ULL);
v___x_4913_ = lean_usize_add(v_i_4904_, v___x_4912_);
v_i_4904_ = v___x_4913_;
v_b_4906_ = v___x_4911_;
goto _start;
}
else
{
return v_b_4906_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___boxed(lean_object* v_as_4915_, lean_object* v_i_4916_, lean_object* v_stop_4917_, lean_object* v_b_4918_){
_start:
{
size_t v_i_boxed_4919_; size_t v_stop_boxed_4920_; lean_object* v_res_4921_; 
v_i_boxed_4919_ = lean_unbox_usize(v_i_4916_);
lean_dec(v_i_4916_);
v_stop_boxed_4920_ = lean_unbox_usize(v_stop_4917_);
lean_dec(v_stop_4917_);
v_res_4921_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(v_as_4915_, v_i_boxed_4919_, v_stop_boxed_4920_, v_b_4918_);
lean_dec_ref(v_as_4915_);
return v_res_4921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2(lean_object* v_x_4924_){
_start:
{
if (lean_obj_tag(v_x_4924_) == 0)
{
lean_object* v___x_4925_; 
v___x_4925_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2___closed__0));
return v___x_4925_;
}
else
{
lean_object* v___x_4926_; lean_object* v___x_4927_; 
v___x_4926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4926_, 0, v_x_4924_);
v___x_4927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4927_, 0, v___x_4926_);
return v___x_4927_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3(lean_object* v_x_4930_){
_start:
{
if (lean_obj_tag(v_x_4930_) == 0)
{
lean_object* v___x_4931_; 
v___x_4931_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3___closed__0));
return v___x_4931_;
}
else
{
lean_object* v___x_4932_; 
v___x_4932_ = l_Lean_Json_getObj_x3f(v_x_4930_);
if (lean_obj_tag(v___x_4932_) == 0)
{
lean_object* v_a_4933_; lean_object* v___x_4935_; uint8_t v_isShared_4936_; uint8_t v_isSharedCheck_4940_; 
v_a_4933_ = lean_ctor_get(v___x_4932_, 0);
v_isSharedCheck_4940_ = !lean_is_exclusive(v___x_4932_);
if (v_isSharedCheck_4940_ == 0)
{
v___x_4935_ = v___x_4932_;
v_isShared_4936_ = v_isSharedCheck_4940_;
goto v_resetjp_4934_;
}
else
{
lean_inc(v_a_4933_);
lean_dec(v___x_4932_);
v___x_4935_ = lean_box(0);
v_isShared_4936_ = v_isSharedCheck_4940_;
goto v_resetjp_4934_;
}
v_resetjp_4934_:
{
lean_object* v___x_4938_; 
if (v_isShared_4936_ == 0)
{
v___x_4938_ = v___x_4935_;
goto v_reusejp_4937_;
}
else
{
lean_object* v_reuseFailAlloc_4939_; 
v_reuseFailAlloc_4939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4939_, 0, v_a_4933_);
v___x_4938_ = v_reuseFailAlloc_4939_;
goto v_reusejp_4937_;
}
v_reusejp_4937_:
{
return v___x_4938_;
}
}
}
else
{
lean_object* v_a_4941_; lean_object* v___x_4943_; uint8_t v_isShared_4944_; uint8_t v_isSharedCheck_4949_; 
v_a_4941_ = lean_ctor_get(v___x_4932_, 0);
v_isSharedCheck_4949_ = !lean_is_exclusive(v___x_4932_);
if (v_isSharedCheck_4949_ == 0)
{
v___x_4943_ = v___x_4932_;
v_isShared_4944_ = v_isSharedCheck_4949_;
goto v_resetjp_4942_;
}
else
{
lean_inc(v_a_4941_);
lean_dec(v___x_4932_);
v___x_4943_ = lean_box(0);
v_isShared_4944_ = v_isSharedCheck_4949_;
goto v_resetjp_4942_;
}
v_resetjp_4942_:
{
lean_object* v___x_4945_; lean_object* v___x_4947_; 
v___x_4945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4945_, 0, v_a_4941_);
if (v_isShared_4944_ == 0)
{
lean_ctor_set(v___x_4943_, 0, v___x_4945_);
v___x_4947_ = v___x_4943_;
goto v_reusejp_4946_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v___x_4945_);
v___x_4947_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4946_;
}
v_reusejp_4946_:
{
return v___x_4947_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2(size_t v_sz_4950_, size_t v_i_4951_, lean_object* v_bs_4952_){
_start:
{
uint8_t v___x_4953_; 
v___x_4953_ = lean_usize_dec_lt(v_i_4951_, v_sz_4950_);
if (v___x_4953_ == 0)
{
lean_object* v___x_4954_; 
v___x_4954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4954_, 0, v_bs_4952_);
return v___x_4954_;
}
else
{
lean_object* v_v_4955_; lean_object* v___x_4956_; 
v_v_4955_ = lean_array_uget_borrowed(v_bs_4952_, v_i_4951_);
lean_inc(v_v_4955_);
v___x_4956_ = l_Lean_Json_getStr_x3f(v_v_4955_);
if (lean_obj_tag(v___x_4956_) == 0)
{
lean_object* v_a_4957_; lean_object* v___x_4959_; uint8_t v_isShared_4960_; uint8_t v_isSharedCheck_4964_; 
lean_dec_ref(v_bs_4952_);
v_a_4957_ = lean_ctor_get(v___x_4956_, 0);
v_isSharedCheck_4964_ = !lean_is_exclusive(v___x_4956_);
if (v_isSharedCheck_4964_ == 0)
{
v___x_4959_ = v___x_4956_;
v_isShared_4960_ = v_isSharedCheck_4964_;
goto v_resetjp_4958_;
}
else
{
lean_inc(v_a_4957_);
lean_dec(v___x_4956_);
v___x_4959_ = lean_box(0);
v_isShared_4960_ = v_isSharedCheck_4964_;
goto v_resetjp_4958_;
}
v_resetjp_4958_:
{
lean_object* v___x_4962_; 
if (v_isShared_4960_ == 0)
{
v___x_4962_ = v___x_4959_;
goto v_reusejp_4961_;
}
else
{
lean_object* v_reuseFailAlloc_4963_; 
v_reuseFailAlloc_4963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4963_, 0, v_a_4957_);
v___x_4962_ = v_reuseFailAlloc_4963_;
goto v_reusejp_4961_;
}
v_reusejp_4961_:
{
return v___x_4962_;
}
}
}
else
{
lean_object* v_a_4965_; lean_object* v___x_4966_; lean_object* v_bs_x27_4967_; size_t v___x_4968_; size_t v___x_4969_; lean_object* v___x_4970_; 
v_a_4965_ = lean_ctor_get(v___x_4956_, 0);
lean_inc(v_a_4965_);
lean_dec_ref_known(v___x_4956_, 1);
v___x_4966_ = lean_unsigned_to_nat(0u);
v_bs_x27_4967_ = lean_array_uset(v_bs_4952_, v_i_4951_, v___x_4966_);
v___x_4968_ = ((size_t)1ULL);
v___x_4969_ = lean_usize_add(v_i_4951_, v___x_4968_);
v___x_4970_ = lean_array_uset(v_bs_x27_4967_, v_i_4951_, v_a_4965_);
v_i_4951_ = v___x_4969_;
v_bs_4952_ = v___x_4970_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_4972_, lean_object* v_i_4973_, lean_object* v_bs_4974_){
_start:
{
size_t v_sz_boxed_4975_; size_t v_i_boxed_4976_; lean_object* v_res_4977_; 
v_sz_boxed_4975_ = lean_unbox_usize(v_sz_4972_);
lean_dec(v_sz_4972_);
v_i_boxed_4976_ = lean_unbox_usize(v_i_4973_);
lean_dec(v_i_4973_);
v_res_4977_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2(v_sz_boxed_4975_, v_i_boxed_4976_, v_bs_4974_);
return v_res_4977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(lean_object* v_x_4978_){
_start:
{
if (lean_obj_tag(v_x_4978_) == 4)
{
lean_object* v_elems_4979_; size_t v_sz_4980_; size_t v___x_4981_; lean_object* v___x_4982_; 
v_elems_4979_ = lean_ctor_get(v_x_4978_, 0);
lean_inc_ref(v_elems_4979_);
lean_dec_ref_known(v_x_4978_, 1);
v_sz_4980_ = lean_array_size(v_elems_4979_);
v___x_4981_ = ((size_t)0ULL);
v___x_4982_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2(v_sz_4980_, v___x_4981_, v_elems_4979_);
return v___x_4982_;
}
else
{
lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; 
v___x_4983_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0));
v___x_4984_ = lean_unsigned_to_nat(80u);
v___x_4985_ = l_Lean_Json_pretty(v_x_4978_, v___x_4984_);
v___x_4986_ = lean_string_append(v___x_4983_, v___x_4985_);
lean_dec_ref(v___x_4985_);
v___x_4987_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1));
v___x_4988_ = lean_string_append(v___x_4986_, v___x_4987_);
v___x_4989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4989_, 0, v___x_4988_);
return v___x_4989_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1(lean_object* v_val_5002_){
_start:
{
lean_object* v_a_5004_; lean_object* v___x_5048_; 
lean_inc(v_val_5002_);
v___x_5048_ = l_Lean_Json_getObj_x3f(v_val_5002_);
if (lean_obj_tag(v___x_5048_) == 1)
{
lean_object* v_a_5049_; lean_object* v___x_5056_; lean_object* v___x_5057_; 
v_a_5049_ = lean_ctor_get(v___x_5048_, 0);
lean_inc(v_a_5049_);
lean_dec_ref_known(v___x_5048_, 1);
v___x_5056_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__0));
v___x_5057_ = l_Lake_JsonObject_getJson_x3f(v_a_5049_, v___x_5056_);
if (lean_obj_tag(v___x_5057_) == 0)
{
goto v___jp_5050_;
}
else
{
lean_object* v_val_5058_; lean_object* v___x_5059_; 
v_val_5058_ = lean_ctor_get(v___x_5057_, 0);
lean_inc(v_val_5058_);
lean_dec_ref_known(v___x_5057_, 1);
v___x_5059_ = l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3(v_val_5058_);
if (lean_obj_tag(v___x_5059_) == 0)
{
lean_object* v_a_5060_; lean_object* v___x_5062_; uint8_t v_isShared_5063_; uint8_t v_isSharedCheck_5069_; 
lean_dec(v_a_5049_);
lean_dec(v_val_5002_);
v_a_5060_ = lean_ctor_get(v___x_5059_, 0);
v_isSharedCheck_5069_ = !lean_is_exclusive(v___x_5059_);
if (v_isSharedCheck_5069_ == 0)
{
v___x_5062_ = v___x_5059_;
v_isShared_5063_ = v_isSharedCheck_5069_;
goto v_resetjp_5061_;
}
else
{
lean_inc(v_a_5060_);
lean_dec(v___x_5059_);
v___x_5062_ = lean_box(0);
v_isShared_5063_ = v_isSharedCheck_5069_;
goto v_resetjp_5061_;
}
v_resetjp_5061_:
{
lean_object* v___x_5064_; lean_object* v___x_5065_; lean_object* v___x_5067_; 
v___x_5064_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__1));
v___x_5065_ = lean_string_append(v___x_5064_, v_a_5060_);
lean_dec(v_a_5060_);
if (v_isShared_5063_ == 0)
{
lean_ctor_set(v___x_5062_, 0, v___x_5065_);
v___x_5067_ = v___x_5062_;
goto v_reusejp_5066_;
}
else
{
lean_object* v_reuseFailAlloc_5068_; 
v_reuseFailAlloc_5068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5068_, 0, v___x_5065_);
v___x_5067_ = v_reuseFailAlloc_5068_;
goto v_reusejp_5066_;
}
v_reusejp_5066_:
{
return v___x_5067_;
}
}
}
else
{
if (lean_obj_tag(v___x_5059_) == 0)
{
lean_object* v_a_5070_; lean_object* v___x_5072_; uint8_t v_isShared_5073_; uint8_t v_isSharedCheck_5077_; 
lean_dec(v_a_5049_);
lean_dec(v_val_5002_);
v_a_5070_ = lean_ctor_get(v___x_5059_, 0);
v_isSharedCheck_5077_ = !lean_is_exclusive(v___x_5059_);
if (v_isSharedCheck_5077_ == 0)
{
v___x_5072_ = v___x_5059_;
v_isShared_5073_ = v_isSharedCheck_5077_;
goto v_resetjp_5071_;
}
else
{
lean_inc(v_a_5070_);
lean_dec(v___x_5059_);
v___x_5072_ = lean_box(0);
v_isShared_5073_ = v_isSharedCheck_5077_;
goto v_resetjp_5071_;
}
v_resetjp_5071_:
{
lean_object* v___x_5075_; 
if (v_isShared_5073_ == 0)
{
lean_ctor_set_tag(v___x_5072_, 0);
v___x_5075_ = v___x_5072_;
goto v_reusejp_5074_;
}
else
{
lean_object* v_reuseFailAlloc_5076_; 
v_reuseFailAlloc_5076_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_5078_; 
v_a_5078_ = lean_ctor_get(v___x_5059_, 0);
lean_inc(v_a_5078_);
lean_dec_ref_known(v___x_5059_, 1);
if (lean_obj_tag(v_a_5078_) == 1)
{
lean_object* v_val_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; 
lean_dec(v_a_5049_);
lean_dec(v_val_5002_);
v_val_5079_ = lean_ctor_get(v_a_5078_, 0);
lean_inc(v_val_5079_);
lean_dec_ref_known(v_a_5078_, 1);
v___x_5080_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__2));
v___x_5081_ = l_Lake_JsonObject_getJson_x3f(v_val_5079_, v___x_5080_);
if (lean_obj_tag(v___x_5081_) == 0)
{
lean_object* v___x_5082_; 
lean_dec(v_val_5079_);
v___x_5082_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__4));
return v___x_5082_;
}
else
{
lean_object* v_val_5083_; lean_object* v___x_5084_; 
v_val_5083_ = lean_ctor_get(v___x_5081_, 0);
lean_inc(v_val_5083_);
lean_dec_ref_known(v___x_5081_, 1);
v___x_5084_ = l_Lean_Json_getNat_x3f(v_val_5083_);
if (lean_obj_tag(v___x_5084_) == 0)
{
lean_object* v_a_5085_; lean_object* v___x_5087_; uint8_t v_isShared_5088_; uint8_t v_isSharedCheck_5094_; 
lean_dec(v_val_5079_);
v_a_5085_ = lean_ctor_get(v___x_5084_, 0);
v_isSharedCheck_5094_ = !lean_is_exclusive(v___x_5084_);
if (v_isSharedCheck_5094_ == 0)
{
v___x_5087_ = v___x_5084_;
v_isShared_5088_ = v_isSharedCheck_5094_;
goto v_resetjp_5086_;
}
else
{
lean_inc(v_a_5085_);
lean_dec(v___x_5084_);
v___x_5087_ = lean_box(0);
v_isShared_5088_ = v_isSharedCheck_5094_;
goto v_resetjp_5086_;
}
v_resetjp_5086_:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5092_; 
v___x_5089_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__5));
v___x_5090_ = lean_string_append(v___x_5089_, v_a_5085_);
lean_dec(v_a_5085_);
if (v_isShared_5088_ == 0)
{
lean_ctor_set(v___x_5087_, 0, v___x_5090_);
v___x_5092_ = v___x_5087_;
goto v_reusejp_5091_;
}
else
{
lean_object* v_reuseFailAlloc_5093_; 
v_reuseFailAlloc_5093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5093_, 0, v___x_5090_);
v___x_5092_ = v_reuseFailAlloc_5093_;
goto v_reusejp_5091_;
}
v_reusejp_5091_:
{
return v___x_5092_;
}
}
}
else
{
if (lean_obj_tag(v___x_5084_) == 0)
{
lean_object* v_a_5095_; lean_object* v___x_5097_; uint8_t v_isShared_5098_; uint8_t v_isSharedCheck_5102_; 
lean_dec(v_val_5079_);
v_a_5095_ = lean_ctor_get(v___x_5084_, 0);
v_isSharedCheck_5102_ = !lean_is_exclusive(v___x_5084_);
if (v_isSharedCheck_5102_ == 0)
{
v___x_5097_ = v___x_5084_;
v_isShared_5098_ = v_isSharedCheck_5102_;
goto v_resetjp_5096_;
}
else
{
lean_inc(v_a_5095_);
lean_dec(v___x_5084_);
v___x_5097_ = lean_box(0);
v_isShared_5098_ = v_isSharedCheck_5102_;
goto v_resetjp_5096_;
}
v_resetjp_5096_:
{
lean_object* v___x_5100_; 
if (v_isShared_5098_ == 0)
{
lean_ctor_set_tag(v___x_5097_, 0);
v___x_5100_ = v___x_5097_;
goto v_reusejp_5099_;
}
else
{
lean_object* v_reuseFailAlloc_5101_; 
v_reuseFailAlloc_5101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5101_, 0, v_a_5095_);
v___x_5100_ = v_reuseFailAlloc_5101_;
goto v_reusejp_5099_;
}
v_reusejp_5099_:
{
return v___x_5100_;
}
}
}
else
{
lean_object* v_a_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; 
v_a_5103_ = lean_ctor_get(v___x_5084_, 0);
lean_inc(v_a_5103_);
lean_dec_ref_known(v___x_5084_, 1);
v___x_5104_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__6));
v___x_5105_ = l_Lake_JsonObject_getJson_x3f(v_val_5079_, v___x_5104_);
lean_dec(v_val_5079_);
if (lean_obj_tag(v___x_5105_) == 0)
{
lean_object* v___x_5106_; 
lean_dec(v_a_5103_);
v___x_5106_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__8));
return v___x_5106_;
}
else
{
lean_object* v_val_5107_; lean_object* v___x_5108_; 
v_val_5107_ = lean_ctor_get(v___x_5105_, 0);
lean_inc(v_val_5107_);
lean_dec_ref_known(v___x_5105_, 1);
v___x_5108_ = l_Lean_Json_getStr_x3f(v_val_5107_);
if (lean_obj_tag(v___x_5108_) == 0)
{
lean_object* v_a_5109_; lean_object* v___x_5111_; uint8_t v_isShared_5112_; uint8_t v_isSharedCheck_5118_; 
lean_dec(v_a_5103_);
v_a_5109_ = lean_ctor_get(v___x_5108_, 0);
v_isSharedCheck_5118_ = !lean_is_exclusive(v___x_5108_);
if (v_isSharedCheck_5118_ == 0)
{
v___x_5111_ = v___x_5108_;
v_isShared_5112_ = v_isSharedCheck_5118_;
goto v_resetjp_5110_;
}
else
{
lean_inc(v_a_5109_);
lean_dec(v___x_5108_);
v___x_5111_ = lean_box(0);
v_isShared_5112_ = v_isSharedCheck_5118_;
goto v_resetjp_5110_;
}
v_resetjp_5110_:
{
lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5116_; 
v___x_5113_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__9));
v___x_5114_ = lean_string_append(v___x_5113_, v_a_5109_);
lean_dec(v_a_5109_);
if (v_isShared_5112_ == 0)
{
lean_ctor_set(v___x_5111_, 0, v___x_5114_);
v___x_5116_ = v___x_5111_;
goto v_reusejp_5115_;
}
else
{
lean_object* v_reuseFailAlloc_5117_; 
v_reuseFailAlloc_5117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5117_, 0, v___x_5114_);
v___x_5116_ = v_reuseFailAlloc_5117_;
goto v_reusejp_5115_;
}
v_reusejp_5115_:
{
return v___x_5116_;
}
}
}
else
{
if (lean_obj_tag(v___x_5108_) == 0)
{
lean_object* v_a_5119_; lean_object* v___x_5121_; uint8_t v_isShared_5122_; uint8_t v_isSharedCheck_5126_; 
lean_dec(v_a_5103_);
v_a_5119_ = lean_ctor_get(v___x_5108_, 0);
v_isSharedCheck_5126_ = !lean_is_exclusive(v___x_5108_);
if (v_isSharedCheck_5126_ == 0)
{
v___x_5121_ = v___x_5108_;
v_isShared_5122_ = v_isSharedCheck_5126_;
goto v_resetjp_5120_;
}
else
{
lean_inc(v_a_5119_);
lean_dec(v___x_5108_);
v___x_5121_ = lean_box(0);
v_isShared_5122_ = v_isSharedCheck_5126_;
goto v_resetjp_5120_;
}
v_resetjp_5120_:
{
lean_object* v___x_5124_; 
if (v_isShared_5122_ == 0)
{
lean_ctor_set_tag(v___x_5121_, 0);
v___x_5124_ = v___x_5121_;
goto v_reusejp_5123_;
}
else
{
lean_object* v_reuseFailAlloc_5125_; 
v_reuseFailAlloc_5125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5125_, 0, v_a_5119_);
v___x_5124_ = v_reuseFailAlloc_5125_;
goto v_reusejp_5123_;
}
v_reusejp_5123_:
{
return v___x_5124_;
}
}
}
else
{
lean_object* v_a_5127_; lean_object* v___x_5129_; uint8_t v_isShared_5130_; uint8_t v_isSharedCheck_5135_; 
v_a_5127_ = lean_ctor_get(v___x_5108_, 0);
v_isSharedCheck_5135_ = !lean_is_exclusive(v___x_5108_);
if (v_isSharedCheck_5135_ == 0)
{
v___x_5129_ = v___x_5108_;
v_isShared_5130_ = v_isSharedCheck_5135_;
goto v_resetjp_5128_;
}
else
{
lean_inc(v_a_5127_);
lean_dec(v___x_5108_);
v___x_5129_ = lean_box(0);
v_isShared_5130_ = v_isSharedCheck_5135_;
goto v_resetjp_5128_;
}
v_resetjp_5128_:
{
lean_object* v___x_5131_; lean_object* v___x_5133_; 
v___x_5131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5131_, 0, v_a_5103_);
lean_ctor_set(v___x_5131_, 1, v_a_5127_);
if (v_isShared_5130_ == 0)
{
lean_ctor_set(v___x_5129_, 0, v___x_5131_);
v___x_5133_ = v___x_5129_;
goto v_reusejp_5132_;
}
else
{
lean_object* v_reuseFailAlloc_5134_; 
v_reuseFailAlloc_5134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5134_, 0, v___x_5131_);
v___x_5133_ = v_reuseFailAlloc_5134_;
goto v_reusejp_5132_;
}
v_reusejp_5132_:
{
return v___x_5133_;
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
lean_dec(v_a_5078_);
goto v___jp_5050_;
}
}
}
}
v___jp_5050_:
{
lean_object* v___x_5051_; lean_object* v___x_5052_; 
v___x_5051_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_5052_ = l_Lake_JsonObject_getJson_x3f(v_a_5049_, v___x_5051_);
lean_dec(v_a_5049_);
if (lean_obj_tag(v___x_5052_) == 0)
{
v_a_5004_ = v___x_5052_;
goto v___jp_5003_;
}
else
{
lean_object* v_val_5053_; lean_object* v___x_5054_; lean_object* v_a_5055_; 
v_val_5053_ = lean_ctor_get(v___x_5052_, 0);
lean_inc(v_val_5053_);
lean_dec_ref_known(v___x_5052_, 1);
v___x_5054_ = l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2(v_val_5053_);
v_a_5055_ = lean_ctor_get(v___x_5054_, 0);
lean_inc(v_a_5055_);
lean_dec_ref(v___x_5054_);
v_a_5004_ = v_a_5055_;
goto v___jp_5003_;
}
}
}
else
{
lean_object* v___x_5136_; 
lean_dec_ref(v___x_5048_);
v___x_5136_ = l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(v_val_5002_);
if (lean_obj_tag(v___x_5136_) == 0)
{
lean_object* v_a_5137_; lean_object* v___x_5139_; uint8_t v_isShared_5140_; uint8_t v_isSharedCheck_5144_; 
v_a_5137_ = lean_ctor_get(v___x_5136_, 0);
v_isSharedCheck_5144_ = !lean_is_exclusive(v___x_5136_);
if (v_isSharedCheck_5144_ == 0)
{
v___x_5139_ = v___x_5136_;
v_isShared_5140_ = v_isSharedCheck_5144_;
goto v_resetjp_5138_;
}
else
{
lean_inc(v_a_5137_);
lean_dec(v___x_5136_);
v___x_5139_ = lean_box(0);
v_isShared_5140_ = v_isSharedCheck_5144_;
goto v_resetjp_5138_;
}
v_resetjp_5138_:
{
lean_object* v___x_5142_; 
if (v_isShared_5140_ == 0)
{
v___x_5142_ = v___x_5139_;
goto v_reusejp_5141_;
}
else
{
lean_object* v_reuseFailAlloc_5143_; 
v_reuseFailAlloc_5143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5143_, 0, v_a_5137_);
v___x_5142_ = v_reuseFailAlloc_5143_;
goto v_reusejp_5141_;
}
v_reusejp_5141_:
{
return v___x_5142_;
}
}
}
else
{
lean_object* v_a_5145_; lean_object* v___x_5147_; uint8_t v_isShared_5148_; uint8_t v_isSharedCheck_5153_; 
v_a_5145_ = lean_ctor_get(v___x_5136_, 0);
v_isSharedCheck_5153_ = !lean_is_exclusive(v___x_5136_);
if (v_isSharedCheck_5153_ == 0)
{
v___x_5147_ = v___x_5136_;
v_isShared_5148_ = v_isSharedCheck_5153_;
goto v_resetjp_5146_;
}
else
{
lean_inc(v_a_5145_);
lean_dec(v___x_5136_);
v___x_5147_ = lean_box(0);
v_isShared_5148_ = v_isSharedCheck_5153_;
goto v_resetjp_5146_;
}
v_resetjp_5146_:
{
lean_object* v___x_5149_; lean_object* v___x_5151_; 
v___x_5149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5149_, 0, v_a_5145_);
if (v_isShared_5148_ == 0)
{
lean_ctor_set(v___x_5147_, 0, v___x_5149_);
v___x_5151_ = v___x_5147_;
goto v_reusejp_5150_;
}
else
{
lean_object* v_reuseFailAlloc_5152_; 
v_reuseFailAlloc_5152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5152_, 0, v___x_5149_);
v___x_5151_ = v_reuseFailAlloc_5152_;
goto v_reusejp_5150_;
}
v_reusejp_5150_:
{
return v___x_5151_;
}
}
}
}
v___jp_5003_:
{
if (lean_obj_tag(v_a_5004_) == 1)
{
lean_object* v_val_5005_; lean_object* v___x_5007_; uint8_t v_isShared_5008_; uint8_t v_isSharedCheck_5029_; 
lean_dec(v_val_5002_);
v_val_5005_ = lean_ctor_get(v_a_5004_, 0);
v_isSharedCheck_5029_ = !lean_is_exclusive(v_a_5004_);
if (v_isSharedCheck_5029_ == 0)
{
v___x_5007_ = v_a_5004_;
v_isShared_5008_ = v_isSharedCheck_5029_;
goto v_resetjp_5006_;
}
else
{
lean_inc(v_val_5005_);
lean_dec(v_a_5004_);
v___x_5007_ = lean_box(0);
v_isShared_5008_ = v_isSharedCheck_5029_;
goto v_resetjp_5006_;
}
v_resetjp_5006_:
{
lean_object* v___x_5009_; 
v___x_5009_ = l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(v_val_5005_);
if (lean_obj_tag(v___x_5009_) == 0)
{
lean_object* v_a_5010_; lean_object* v___x_5012_; uint8_t v_isShared_5013_; uint8_t v_isSharedCheck_5017_; 
lean_del_object(v___x_5007_);
v_a_5010_ = lean_ctor_get(v___x_5009_, 0);
v_isSharedCheck_5017_ = !lean_is_exclusive(v___x_5009_);
if (v_isSharedCheck_5017_ == 0)
{
v___x_5012_ = v___x_5009_;
v_isShared_5013_ = v_isSharedCheck_5017_;
goto v_resetjp_5011_;
}
else
{
lean_inc(v_a_5010_);
lean_dec(v___x_5009_);
v___x_5012_ = lean_box(0);
v_isShared_5013_ = v_isSharedCheck_5017_;
goto v_resetjp_5011_;
}
v_resetjp_5011_:
{
lean_object* v___x_5015_; 
if (v_isShared_5013_ == 0)
{
v___x_5015_ = v___x_5012_;
goto v_reusejp_5014_;
}
else
{
lean_object* v_reuseFailAlloc_5016_; 
v_reuseFailAlloc_5016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5016_, 0, v_a_5010_);
v___x_5015_ = v_reuseFailAlloc_5016_;
goto v_reusejp_5014_;
}
v_reusejp_5014_:
{
return v___x_5015_;
}
}
}
else
{
lean_object* v_a_5018_; lean_object* v___x_5020_; uint8_t v_isShared_5021_; uint8_t v_isSharedCheck_5028_; 
v_a_5018_ = lean_ctor_get(v___x_5009_, 0);
v_isSharedCheck_5028_ = !lean_is_exclusive(v___x_5009_);
if (v_isSharedCheck_5028_ == 0)
{
v___x_5020_ = v___x_5009_;
v_isShared_5021_ = v_isSharedCheck_5028_;
goto v_resetjp_5019_;
}
else
{
lean_inc(v_a_5018_);
lean_dec(v___x_5009_);
v___x_5020_ = lean_box(0);
v_isShared_5021_ = v_isSharedCheck_5028_;
goto v_resetjp_5019_;
}
v_resetjp_5019_:
{
lean_object* v___x_5023_; 
if (v_isShared_5008_ == 0)
{
lean_ctor_set_tag(v___x_5007_, 0);
lean_ctor_set(v___x_5007_, 0, v_a_5018_);
v___x_5023_ = v___x_5007_;
goto v_reusejp_5022_;
}
else
{
lean_object* v_reuseFailAlloc_5027_; 
v_reuseFailAlloc_5027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5027_, 0, v_a_5018_);
v___x_5023_ = v_reuseFailAlloc_5027_;
goto v_reusejp_5022_;
}
v_reusejp_5022_:
{
lean_object* v___x_5025_; 
if (v_isShared_5021_ == 0)
{
lean_ctor_set(v___x_5020_, 0, v___x_5023_);
v___x_5025_ = v___x_5020_;
goto v_reusejp_5024_;
}
else
{
lean_object* v_reuseFailAlloc_5026_; 
v_reuseFailAlloc_5026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5026_, 0, v___x_5023_);
v___x_5025_ = v_reuseFailAlloc_5026_;
goto v_reusejp_5024_;
}
v_reusejp_5024_:
{
return v___x_5025_;
}
}
}
}
}
}
else
{
lean_object* v___x_5030_; 
lean_dec(v_a_5004_);
v___x_5030_ = l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(v_val_5002_);
if (lean_obj_tag(v___x_5030_) == 0)
{
lean_object* v_a_5031_; lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5038_; 
v_a_5031_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5038_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5038_ == 0)
{
v___x_5033_ = v___x_5030_;
v_isShared_5034_ = v_isSharedCheck_5038_;
goto v_resetjp_5032_;
}
else
{
lean_inc(v_a_5031_);
lean_dec(v___x_5030_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5038_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5036_; 
if (v_isShared_5034_ == 0)
{
v___x_5036_ = v___x_5033_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5037_; 
v_reuseFailAlloc_5037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5037_, 0, v_a_5031_);
v___x_5036_ = v_reuseFailAlloc_5037_;
goto v_reusejp_5035_;
}
v_reusejp_5035_:
{
return v___x_5036_;
}
}
}
else
{
lean_object* v_a_5039_; lean_object* v___x_5041_; uint8_t v_isShared_5042_; uint8_t v_isSharedCheck_5047_; 
v_a_5039_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5047_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5047_ == 0)
{
v___x_5041_ = v___x_5030_;
v_isShared_5042_ = v_isSharedCheck_5047_;
goto v_resetjp_5040_;
}
else
{
lean_inc(v_a_5039_);
lean_dec(v___x_5030_);
v___x_5041_ = lean_box(0);
v_isShared_5042_ = v_isSharedCheck_5047_;
goto v_resetjp_5040_;
}
v_resetjp_5040_:
{
lean_object* v___x_5043_; lean_object* v___x_5045_; 
v___x_5043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5043_, 0, v_a_5039_);
if (v_isShared_5042_ == 0)
{
lean_ctor_set(v___x_5041_, 0, v___x_5043_);
v___x_5045_ = v___x_5041_;
goto v_reusejp_5044_;
}
else
{
lean_object* v_reuseFailAlloc_5046_; 
v_reuseFailAlloc_5046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5046_, 0, v___x_5043_);
v___x_5045_ = v_reuseFailAlloc_5046_;
goto v_reusejp_5044_;
}
v_reusejp_5044_:
{
return v___x_5045_;
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18(void){
_start:
{
lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; 
v___x_5172_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_5173_ = lean_unsigned_to_nat(12u);
v___x_5174_ = lean_mk_empty_array_with_capacity(v___x_5173_);
v___x_5175_ = lean_array_push(v___x_5174_, v___x_5172_);
return v___x_5175_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19(void){
_start:
{
lean_object* v___x_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; 
v___x_5176_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__14));
v___x_5177_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18);
v___x_5178_ = lean_array_push(v___x_5177_, v___x_5176_);
return v___x_5178_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20(void){
_start:
{
lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; 
v___x_5179_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_5180_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19);
v___x_5181_ = lean_array_push(v___x_5180_, v___x_5179_);
return v___x_5181_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21(void){
_start:
{
lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; 
v___x_5182_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__15));
v___x_5183_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20);
v___x_5184_ = lean_array_push(v___x_5183_, v___x_5182_);
return v___x_5184_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22(void){
_start:
{
lean_object* v___x_5185_; lean_object* v___x_5186_; 
v___x_5185_ = l_Lake_Reservoir_lakeHeaders;
v___x_5186_ = lean_array_get_size(v___x_5185_);
return v___x_5186_;
}
}
static uint8_t _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23(void){
_start:
{
lean_object* v___x_5187_; lean_object* v___x_5188_; uint8_t v___x_5189_; 
v___x_5187_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22);
v___x_5188_ = lean_unsigned_to_nat(0u);
v___x_5189_ = lean_nat_dec_lt(v___x_5188_, v___x_5187_);
return v___x_5189_;
}
}
static uint8_t _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24(void){
_start:
{
lean_object* v___x_5190_; uint8_t v___x_5191_; 
v___x_5190_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22);
v___x_5191_ = lean_nat_dec_le(v___x_5190_, v___x_5190_);
return v___x_5191_;
}
}
static size_t _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25(void){
_start:
{
lean_object* v___x_5192_; size_t v___x_5193_; 
v___x_5192_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22);
v___x_5193_ = lean_usize_of_nat(v___x_5192_);
return v___x_5193_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0(lean_object* v_url_5194_, lean_object* v_infos_5195_, lean_object* v_h_5196_, lean_object* v_path_5197_, lean_object* v___y_5198_){
_start:
{
uint32_t v___y_5201_; lean_object* v___y_5202_; uint8_t v___y_5213_; uint32_t v___y_5214_; lean_object* v___y_5215_; lean_object* v___y_5216_; lean_object* v_msg_5217_; lean_object* v___y_5218_; uint8_t v___y_5232_; lean_object* v___y_5233_; uint32_t v___y_5234_; lean_object* v___y_5235_; lean_object* v___y_5236_; lean_object* v_msg_5237_; lean_object* v___y_5238_; uint8_t v___y_5249_; lean_object* v___y_5250_; uint32_t v___y_5251_; lean_object* v___y_5252_; lean_object* v___y_5253_; lean_object* v___y_5254_; lean_object* v_msg_5255_; lean_object* v___y_5268_; uint32_t v___y_5269_; lean_object* v___y_5270_; lean_object* v___y_5271_; lean_object* v_a_5272_; uint8_t v___y_5300_; lean_object* v___y_5301_; uint32_t v___y_5302_; lean_object* v___y_5303_; lean_object* v___y_5304_; lean_object* v___y_5323_; lean_object* v_a_5324_; size_t v_sz_5406_; size_t v___x_5407_; lean_object* v___y_5409_; lean_object* v___y_5410_; lean_object* v___y_5411_; lean_object* v_val_5412_; lean_object* v___x_5426_; lean_object* v_body_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; 
v_sz_5406_ = lean_array_size(v_infos_5195_);
v___x_5407_ = ((size_t)0ULL);
lean_inc_ref(v_infos_5195_);
v___x_5426_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(v_sz_5406_, v___x_5407_, v_infos_5195_);
v_body_5427_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_body_5427_, 0, v___x_5426_);
v___x_5428_ = l_Lean_Json_compress(v_body_5427_);
v___x_5429_ = lean_io_prim_handle_put_str(v_h_5196_, v___x_5428_);
lean_dec_ref(v___x_5428_);
if (lean_obj_tag(v___x_5429_) == 0)
{
lean_object* v___x_5430_; 
lean_dec_ref_known(v___x_5429_, 1);
v___x_5430_ = lean_io_prim_handle_flush(v_h_5196_);
if (lean_obj_tag(v___x_5430_) == 0)
{
lean_object* v___y_5432_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; uint8_t v___x_5458_; 
lean_dec_ref_known(v___x_5430_, 1);
v___x_5439_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__16));
v___x_5440_ = lean_string_append(v___x_5439_, v_path_5197_);
v___x_5441_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_5442_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_5443_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_5444_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_5445_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_5446_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_5447_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__17));
v___x_5448_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21);
v___x_5449_ = lean_array_push(v___x_5448_, v___x_5440_);
v___x_5450_ = lean_array_push(v___x_5449_, v___x_5441_);
v___x_5451_ = lean_array_push(v___x_5450_, v___x_5442_);
v___x_5452_ = lean_array_push(v___x_5451_, v___x_5443_);
v___x_5453_ = lean_array_push(v___x_5452_, v___x_5444_);
v___x_5454_ = lean_array_push(v___x_5453_, v___x_5445_);
v___x_5455_ = lean_array_push(v___x_5454_, v___x_5446_);
v___x_5456_ = lean_array_push(v___x_5455_, v___x_5447_);
v___x_5457_ = l_Lake_Reservoir_lakeHeaders;
v___x_5458_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23);
if (v___x_5458_ == 0)
{
v___y_5432_ = v___x_5456_;
goto v___jp_5431_;
}
else
{
uint8_t v___x_5459_; 
v___x_5459_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24);
if (v___x_5459_ == 0)
{
if (v___x_5458_ == 0)
{
v___y_5432_ = v___x_5456_;
goto v___jp_5431_;
}
else
{
size_t v___x_5460_; lean_object* v___x_5461_; 
v___x_5460_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25);
v___x_5461_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(v___x_5457_, v___x_5407_, v___x_5460_, v___x_5456_);
v___y_5432_ = v___x_5461_;
goto v___jp_5431_;
}
}
else
{
size_t v___x_5462_; lean_object* v___x_5463_; 
v___x_5462_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25);
v___x_5463_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(v___x_5457_, v___x_5407_, v___x_5462_, v___x_5456_);
v___y_5432_ = v___x_5463_;
goto v___jp_5431_;
}
}
v___jp_5431_:
{
lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; 
v___x_5433_ = lean_unsigned_to_nat(0u);
v___x_5434_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5435_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_5436_ = lean_io_getenv(v___x_5435_);
if (lean_obj_tag(v___x_5436_) == 0)
{
lean_object* v___x_5437_; 
v___x_5437_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v___y_5409_ = v___y_5432_;
v___y_5410_ = v___x_5434_;
v___y_5411_ = v___x_5433_;
v_val_5412_ = v___x_5437_;
goto v___jp_5408_;
}
else
{
lean_object* v_val_5438_; 
v_val_5438_ = lean_ctor_get(v___x_5436_, 0);
lean_inc(v_val_5438_);
lean_dec_ref_known(v___x_5436_, 1);
v___y_5409_ = v___y_5432_;
v___y_5410_ = v___x_5434_;
v___y_5411_ = v___x_5433_;
v_val_5412_ = v_val_5438_;
goto v___jp_5408_;
}
}
}
else
{
lean_object* v_a_5464_; lean_object* v___x_5466_; uint8_t v_isShared_5467_; uint8_t v_isSharedCheck_5476_; 
lean_dec_ref(v_infos_5195_);
lean_dec_ref(v_url_5194_);
v_a_5464_ = lean_ctor_get(v___x_5430_, 0);
v_isSharedCheck_5476_ = !lean_is_exclusive(v___x_5430_);
if (v_isSharedCheck_5476_ == 0)
{
v___x_5466_ = v___x_5430_;
v_isShared_5467_ = v_isSharedCheck_5476_;
goto v_resetjp_5465_;
}
else
{
lean_inc(v_a_5464_);
lean_dec(v___x_5430_);
v___x_5466_ = lean_box(0);
v_isShared_5467_ = v_isSharedCheck_5476_;
goto v_resetjp_5465_;
}
v_resetjp_5465_:
{
lean_object* v___x_5468_; uint8_t v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; lean_object* v___x_5474_; 
v___x_5468_ = lean_io_error_to_string(v_a_5464_);
v___x_5469_ = 3;
v___x_5470_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5470_, 0, v___x_5468_);
lean_ctor_set_uint8(v___x_5470_, sizeof(void*)*1, v___x_5469_);
lean_inc_ref(v___y_5198_);
v___x_5471_ = lean_apply_2(v___y_5198_, v___x_5470_, lean_box(0));
v___x_5472_ = lean_box(0);
if (v_isShared_5467_ == 0)
{
lean_ctor_set(v___x_5466_, 0, v___x_5472_);
v___x_5474_ = v___x_5466_;
goto v_reusejp_5473_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v___x_5472_);
v___x_5474_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5473_;
}
v_reusejp_5473_:
{
return v___x_5474_;
}
}
}
}
else
{
lean_object* v_a_5477_; lean_object* v___x_5479_; uint8_t v_isShared_5480_; uint8_t v_isSharedCheck_5489_; 
lean_dec_ref(v_infos_5195_);
lean_dec_ref(v_url_5194_);
v_a_5477_ = lean_ctor_get(v___x_5429_, 0);
v_isSharedCheck_5489_ = !lean_is_exclusive(v___x_5429_);
if (v_isSharedCheck_5489_ == 0)
{
v___x_5479_ = v___x_5429_;
v_isShared_5480_ = v_isSharedCheck_5489_;
goto v_resetjp_5478_;
}
else
{
lean_inc(v_a_5477_);
lean_dec(v___x_5429_);
v___x_5479_ = lean_box(0);
v_isShared_5480_ = v_isSharedCheck_5489_;
goto v_resetjp_5478_;
}
v_resetjp_5478_:
{
lean_object* v___x_5481_; uint8_t v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5487_; 
v___x_5481_ = lean_io_error_to_string(v_a_5477_);
v___x_5482_ = 3;
v___x_5483_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5483_, 0, v___x_5481_);
lean_ctor_set_uint8(v___x_5483_, sizeof(void*)*1, v___x_5482_);
lean_inc_ref(v___y_5198_);
v___x_5484_ = lean_apply_2(v___y_5198_, v___x_5483_, lean_box(0));
v___x_5485_ = lean_box(0);
if (v_isShared_5480_ == 0)
{
lean_ctor_set(v___x_5479_, 0, v___x_5485_);
v___x_5487_ = v___x_5479_;
goto v_reusejp_5486_;
}
else
{
lean_object* v_reuseFailAlloc_5488_; 
v_reuseFailAlloc_5488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5488_, 0, v___x_5485_);
v___x_5487_ = v_reuseFailAlloc_5488_;
goto v_reusejp_5486_;
}
v_reusejp_5486_:
{
return v___x_5487_;
}
}
}
v___jp_5200_:
{
lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; uint8_t v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; 
v___x_5203_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__0));
v___x_5204_ = lean_uint32_to_nat(v___y_5201_);
v___x_5205_ = l_Nat_reprFast(v___x_5204_);
v___x_5206_ = lean_string_append(v___x_5203_, v___x_5205_);
lean_dec_ref(v___x_5205_);
v___x_5207_ = 3;
v___x_5208_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5208_, 0, v___x_5206_);
lean_ctor_set_uint8(v___x_5208_, sizeof(void*)*1, v___x_5207_);
lean_inc_ref(v___y_5202_);
v___x_5209_ = lean_apply_2(v___y_5202_, v___x_5208_, lean_box(0));
v___x_5210_ = lean_box(0);
v___x_5211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5211_, 0, v___x_5210_);
return v___x_5211_;
}
v___jp_5212_:
{
uint8_t v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; 
v___x_5219_ = 3;
v___x_5220_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5220_, 0, v_msg_5217_);
lean_ctor_set_uint8(v___x_5220_, sizeof(void*)*1, v___x_5219_);
lean_inc_ref_n(v___y_5218_, 2);
v___x_5221_ = lean_apply_2(v___y_5218_, v___x_5220_, lean_box(0));
v___x_5222_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__1));
v___x_5223_ = lean_string_utf8_byte_size(v___y_5215_);
lean_inc(v___y_5216_);
lean_inc_ref(v___y_5215_);
v___x_5224_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5224_, 0, v___y_5215_);
lean_ctor_set(v___x_5224_, 1, v___y_5216_);
lean_ctor_set(v___x_5224_, 2, v___x_5223_);
v___x_5225_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5224_, v___x_5223_);
lean_dec_ref_known(v___x_5224_, 3);
v___x_5226_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5226_, 0, v___y_5215_);
lean_ctor_set(v___x_5226_, 1, v___y_5216_);
lean_ctor_set(v___x_5226_, 2, v___x_5225_);
v___x_5227_ = l_String_Slice_toString(v___x_5226_);
lean_dec_ref_known(v___x_5226_, 3);
v___x_5228_ = lean_string_append(v___x_5222_, v___x_5227_);
lean_dec_ref(v___x_5227_);
v___x_5229_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5229_, 0, v___x_5228_);
lean_ctor_set_uint8(v___x_5229_, sizeof(void*)*1, v___y_5213_);
v___x_5230_ = lean_apply_2(v___y_5218_, v___x_5229_, lean_box(0));
v___y_5201_ = v___y_5214_;
v___y_5202_ = v___y_5218_;
goto v___jp_5200_;
}
v___jp_5231_:
{
lean_object* v___x_5239_; uint8_t v___x_5240_; 
v___x_5239_ = lean_string_utf8_byte_size(v___y_5233_);
v___x_5240_ = lean_nat_dec_eq(v___x_5239_, v___y_5236_);
if (v___x_5240_ == 0)
{
lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; 
v___x_5241_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__2));
v___x_5242_ = lean_string_append(v_msg_5237_, v___x_5241_);
lean_inc_n(v___y_5236_, 2);
lean_inc_ref(v___y_5233_);
v___x_5243_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5243_, 0, v___y_5233_);
lean_ctor_set(v___x_5243_, 1, v___y_5236_);
lean_ctor_set(v___x_5243_, 2, v___x_5239_);
v___x_5244_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5243_, v___x_5239_);
lean_dec_ref_known(v___x_5243_, 3);
v___x_5245_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5245_, 0, v___y_5233_);
lean_ctor_set(v___x_5245_, 1, v___y_5236_);
lean_ctor_set(v___x_5245_, 2, v___x_5244_);
v___x_5246_ = l_String_Slice_toString(v___x_5245_);
lean_dec_ref_known(v___x_5245_, 3);
v___x_5247_ = lean_string_append(v___x_5242_, v___x_5246_);
lean_dec_ref(v___x_5246_);
v___y_5213_ = v___y_5232_;
v___y_5214_ = v___y_5234_;
v___y_5215_ = v___y_5235_;
v___y_5216_ = v___y_5236_;
v_msg_5217_ = v___x_5247_;
v___y_5218_ = v___y_5238_;
goto v___jp_5212_;
}
else
{
lean_dec_ref(v___y_5233_);
v___y_5213_ = v___y_5232_;
v___y_5214_ = v___y_5234_;
v___y_5215_ = v___y_5235_;
v___y_5216_ = v___y_5236_;
v_msg_5217_ = v_msg_5237_;
v___y_5218_ = v___y_5238_;
goto v___jp_5212_;
}
}
v___jp_5248_:
{
lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; 
v___x_5256_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__3));
v___x_5257_ = lean_string_append(v_msg_5255_, v___x_5256_);
v___x_5258_ = lean_string_append(v___x_5257_, v_url_5194_);
lean_dec_ref(v_url_5194_);
v___x_5259_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4));
v___x_5260_ = l_Lake_JsonObject_getJson_x3f(v___y_5254_, v___x_5259_);
lean_dec(v___y_5254_);
if (lean_obj_tag(v___x_5260_) == 0)
{
v___y_5232_ = v___y_5249_;
v___y_5233_ = v___y_5250_;
v___y_5234_ = v___y_5251_;
v___y_5235_ = v___y_5252_;
v___y_5236_ = v___y_5253_;
v_msg_5237_ = v___x_5258_;
v___y_5238_ = v___y_5198_;
goto v___jp_5231_;
}
else
{
lean_object* v_val_5261_; lean_object* v___x_5262_; 
v_val_5261_ = lean_ctor_get(v___x_5260_, 0);
lean_inc(v_val_5261_);
lean_dec_ref_known(v___x_5260_, 1);
v___x_5262_ = l_Lean_Json_getStr_x3f(v_val_5261_);
if (lean_obj_tag(v___x_5262_) == 0)
{
lean_dec_ref_known(v___x_5262_, 1);
v___y_5232_ = v___y_5249_;
v___y_5233_ = v___y_5250_;
v___y_5234_ = v___y_5251_;
v___y_5235_ = v___y_5252_;
v___y_5236_ = v___y_5253_;
v_msg_5237_ = v___x_5258_;
v___y_5238_ = v___y_5198_;
goto v___jp_5231_;
}
else
{
if (lean_obj_tag(v___x_5262_) == 1)
{
lean_object* v_a_5263_; lean_object* v___x_5264_; lean_object* v___x_5265_; lean_object* v___x_5266_; 
v_a_5263_ = lean_ctor_get(v___x_5262_, 0);
lean_inc(v_a_5263_);
lean_dec_ref_known(v___x_5262_, 1);
v___x_5264_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__4));
v___x_5265_ = lean_string_append(v___x_5258_, v___x_5264_);
v___x_5266_ = lean_string_append(v___x_5265_, v_a_5263_);
lean_dec(v_a_5263_);
v___y_5232_ = v___y_5249_;
v___y_5233_ = v___y_5250_;
v___y_5234_ = v___y_5251_;
v___y_5235_ = v___y_5252_;
v___y_5236_ = v___y_5253_;
v_msg_5237_ = v___x_5266_;
v___y_5238_ = v___y_5198_;
goto v___jp_5231_;
}
else
{
lean_dec_ref_known(v___x_5262_, 1);
v___y_5232_ = v___y_5249_;
v___y_5233_ = v___y_5250_;
v___y_5234_ = v___y_5251_;
v___y_5235_ = v___y_5252_;
v___y_5236_ = v___y_5253_;
v_msg_5237_ = v___x_5258_;
v___y_5238_ = v___y_5198_;
goto v___jp_5231_;
}
}
}
}
v___jp_5267_:
{
lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; uint8_t v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; uint8_t v___x_5289_; 
v___x_5273_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5));
v___x_5274_ = lean_string_append(v___x_5273_, v_url_5194_);
lean_dec_ref(v_url_5194_);
v___x_5275_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__6));
v___x_5276_ = lean_string_append(v___x_5274_, v___x_5275_);
v___x_5277_ = lean_string_append(v___x_5276_, v_a_5272_);
lean_dec_ref(v_a_5272_);
v___x_5278_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__2));
v___x_5279_ = lean_string_append(v___x_5277_, v___x_5278_);
v___x_5280_ = lean_string_utf8_byte_size(v___y_5270_);
lean_inc(v___y_5271_);
v___x_5281_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5281_, 0, v___y_5270_);
lean_ctor_set(v___x_5281_, 1, v___y_5271_);
lean_ctor_set(v___x_5281_, 2, v___x_5280_);
v___x_5282_ = l_String_Slice_trimAscii(v___x_5281_);
v___x_5283_ = l_String_Slice_toString(v___x_5282_);
lean_dec_ref(v___x_5282_);
v___x_5284_ = lean_string_append(v___x_5279_, v___x_5283_);
lean_dec_ref(v___x_5283_);
v___x_5285_ = 3;
v___x_5286_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5286_, 0, v___x_5284_);
lean_ctor_set_uint8(v___x_5286_, sizeof(void*)*1, v___x_5285_);
lean_inc_ref(v___y_5198_);
v___x_5287_ = lean_apply_2(v___y_5198_, v___x_5286_, lean_box(0));
v___x_5288_ = lean_string_utf8_byte_size(v___y_5268_);
v___x_5289_ = lean_nat_dec_eq(v___x_5288_, v___y_5271_);
if (v___x_5289_ == 0)
{
lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; uint8_t v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; 
v___x_5290_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__7));
lean_inc(v___y_5271_);
lean_inc_ref(v___y_5268_);
v___x_5291_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5291_, 0, v___y_5268_);
lean_ctor_set(v___x_5291_, 1, v___y_5271_);
lean_ctor_set(v___x_5291_, 2, v___x_5288_);
v___x_5292_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5291_, v___x_5288_);
lean_dec_ref_known(v___x_5291_, 3);
v___x_5293_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5293_, 0, v___y_5268_);
lean_ctor_set(v___x_5293_, 1, v___y_5271_);
lean_ctor_set(v___x_5293_, 2, v___x_5292_);
v___x_5294_ = l_String_Slice_toString(v___x_5293_);
lean_dec_ref_known(v___x_5293_, 3);
v___x_5295_ = lean_string_append(v___x_5290_, v___x_5294_);
lean_dec_ref(v___x_5294_);
v___x_5296_ = 2;
v___x_5297_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5297_, 0, v___x_5295_);
lean_ctor_set_uint8(v___x_5297_, sizeof(void*)*1, v___x_5296_);
lean_inc_ref(v___y_5198_);
v___x_5298_ = lean_apply_2(v___y_5198_, v___x_5297_, lean_box(0));
v___y_5201_ = v___y_5269_;
v___y_5202_ = v___y_5198_;
goto v___jp_5200_;
}
else
{
lean_dec(v___y_5271_);
lean_dec_ref(v___y_5268_);
v___y_5201_ = v___y_5269_;
v___y_5202_ = v___y_5198_;
goto v___jp_5200_;
}
}
v___jp_5299_:
{
lean_object* v___x_5305_; 
lean_inc_ref(v___y_5303_);
v___x_5305_ = l_Lean_Json_parse(v___y_5303_);
if (lean_obj_tag(v___x_5305_) == 0)
{
lean_object* v_a_5306_; 
v_a_5306_ = lean_ctor_get(v___x_5305_, 0);
lean_inc(v_a_5306_);
lean_dec_ref_known(v___x_5305_, 1);
v___y_5268_ = v___y_5301_;
v___y_5269_ = v___y_5302_;
v___y_5270_ = v___y_5303_;
v___y_5271_ = v___y_5304_;
v_a_5272_ = v_a_5306_;
goto v___jp_5267_;
}
else
{
lean_object* v_a_5307_; lean_object* v___x_5308_; 
v_a_5307_ = lean_ctor_get(v___x_5305_, 0);
lean_inc(v_a_5307_);
lean_dec_ref_known(v___x_5305_, 1);
v___x_5308_ = l_Lean_Json_getObj_x3f(v_a_5307_);
if (lean_obj_tag(v___x_5308_) == 0)
{
lean_object* v_a_5309_; 
v_a_5309_ = lean_ctor_get(v___x_5308_, 0);
lean_inc(v_a_5309_);
lean_dec_ref_known(v___x_5308_, 1);
v___y_5268_ = v___y_5301_;
v___y_5269_ = v___y_5302_;
v___y_5270_ = v___y_5303_;
v___y_5271_ = v___y_5304_;
v_a_5272_ = v_a_5309_;
goto v___jp_5267_;
}
else
{
lean_object* v_a_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; 
v_a_5310_ = lean_ctor_get(v___x_5308_, 0);
lean_inc(v_a_5310_);
lean_dec_ref_known(v___x_5308_, 1);
v___x_5311_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__8));
v___x_5312_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_5313_ = l_Lake_JsonObject_getJson_x3f(v_a_5310_, v___x_5312_);
if (lean_obj_tag(v___x_5313_) == 0)
{
v___y_5249_ = v___y_5300_;
v___y_5250_ = v___y_5301_;
v___y_5251_ = v___y_5302_;
v___y_5252_ = v___y_5303_;
v___y_5253_ = v___y_5304_;
v___y_5254_ = v_a_5310_;
v_msg_5255_ = v___x_5311_;
goto v___jp_5248_;
}
else
{
lean_object* v_val_5314_; lean_object* v___x_5315_; 
v_val_5314_ = lean_ctor_get(v___x_5313_, 0);
lean_inc(v_val_5314_);
lean_dec_ref_known(v___x_5313_, 1);
v___x_5315_ = l_Lean_Json_getNat_x3f(v_val_5314_);
if (lean_obj_tag(v___x_5315_) == 0)
{
lean_dec_ref_known(v___x_5315_, 1);
v___y_5249_ = v___y_5300_;
v___y_5250_ = v___y_5301_;
v___y_5251_ = v___y_5302_;
v___y_5252_ = v___y_5303_;
v___y_5253_ = v___y_5304_;
v___y_5254_ = v_a_5310_;
v_msg_5255_ = v___x_5311_;
goto v___jp_5248_;
}
else
{
if (lean_obj_tag(v___x_5315_) == 1)
{
lean_object* v_a_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; 
v_a_5316_ = lean_ctor_get(v___x_5315_, 0);
lean_inc(v_a_5316_);
lean_dec_ref_known(v___x_5315_, 1);
v___x_5317_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9));
v___x_5318_ = l_Nat_reprFast(v_a_5316_);
v___x_5319_ = lean_string_append(v___x_5317_, v___x_5318_);
lean_dec_ref(v___x_5318_);
v___x_5320_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9));
v___x_5321_ = lean_string_append(v___x_5319_, v___x_5320_);
v___y_5249_ = v___y_5300_;
v___y_5250_ = v___y_5301_;
v___y_5251_ = v___y_5302_;
v___y_5252_ = v___y_5303_;
v___y_5253_ = v___y_5304_;
v___y_5254_ = v_a_5310_;
v_msg_5255_ = v___x_5321_;
goto v___jp_5248_;
}
else
{
lean_dec_ref_known(v___x_5315_, 1);
v___y_5249_ = v___y_5300_;
v___y_5250_ = v___y_5301_;
v___y_5251_ = v___y_5302_;
v___y_5252_ = v___y_5303_;
v___y_5253_ = v___y_5304_;
v___y_5254_ = v_a_5310_;
v_msg_5255_ = v___x_5311_;
goto v___jp_5248_;
}
}
}
}
}
}
v___jp_5322_:
{
lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; uint8_t v___x_5330_; uint8_t v___x_5331_; lean_object* v___x_5332_; lean_object* v___x_5333_; uint8_t v___x_5334_; lean_object* v___x_5335_; lean_object* v___x_5336_; lean_object* v___x_5337_; 
v___x_5325_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3));
lean_inc_ref(v_url_5194_);
v___x_5326_ = lean_array_push(v___y_5323_, v_url_5194_);
v___x_5327_ = lean_box(0);
v___x_5328_ = lean_unsigned_to_nat(0u);
v___x_5329_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_5330_ = 1;
v___x_5331_ = 0;
v___x_5332_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_5332_, 0, v___x_5325_);
lean_ctor_set(v___x_5332_, 1, v_a_5324_);
lean_ctor_set(v___x_5332_, 2, v___x_5326_);
lean_ctor_set(v___x_5332_, 3, v___x_5327_);
lean_ctor_set(v___x_5332_, 4, v___x_5329_);
lean_ctor_set_uint8(v___x_5332_, sizeof(void*)*5, v___x_5330_);
lean_ctor_set_uint8(v___x_5332_, sizeof(void*)*5 + 1, v___x_5331_);
lean_inc_ref(v___x_5332_);
v___x_5333_ = l_Lake_mkCmdLog(v___x_5332_);
v___x_5334_ = 0;
v___x_5335_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5335_, 0, v___x_5333_);
lean_ctor_set_uint8(v___x_5335_, sizeof(void*)*1, v___x_5334_);
lean_inc_ref(v___y_5198_);
v___x_5336_ = lean_apply_2(v___y_5198_, v___x_5335_, lean_box(0));
v___x_5337_ = l_IO_Process_output(v___x_5332_, v___x_5327_);
if (lean_obj_tag(v___x_5337_) == 0)
{
lean_object* v_a_5338_; lean_object* v___x_5340_; uint8_t v_isShared_5341_; uint8_t v_isSharedCheck_5392_; 
v_a_5338_ = lean_ctor_get(v___x_5337_, 0);
v_isSharedCheck_5392_ = !lean_is_exclusive(v___x_5337_);
if (v_isSharedCheck_5392_ == 0)
{
v___x_5340_ = v___x_5337_;
v_isShared_5341_ = v_isSharedCheck_5392_;
goto v_resetjp_5339_;
}
else
{
lean_inc(v_a_5338_);
lean_dec(v___x_5337_);
v___x_5340_ = lean_box(0);
v_isShared_5341_ = v_isSharedCheck_5392_;
goto v_resetjp_5339_;
}
v_resetjp_5339_:
{
uint32_t v_exitCode_5342_; lean_object* v_stdout_5343_; lean_object* v_stderr_5344_; lean_object* v___x_5345_; 
v_exitCode_5342_ = lean_ctor_get_uint32(v_a_5338_, sizeof(void*)*2);
v_stdout_5343_ = lean_ctor_get(v_a_5338_, 0);
lean_inc_ref_n(v_stdout_5343_, 2);
v_stderr_5344_ = lean_ctor_get(v_a_5338_, 1);
lean_inc_ref(v_stderr_5344_);
lean_dec(v_a_5338_);
v___x_5345_ = l_Lean_Json_parse(v_stdout_5343_);
if (lean_obj_tag(v___x_5345_) == 0)
{
lean_dec_ref_known(v___x_5345_, 1);
lean_del_object(v___x_5340_);
lean_dec_ref(v_infos_5195_);
v___y_5300_ = v___x_5334_;
v___y_5301_ = v_stdout_5343_;
v___y_5302_ = v_exitCode_5342_;
v___y_5303_ = v_stderr_5344_;
v___y_5304_ = v___x_5328_;
goto v___jp_5299_;
}
else
{
lean_object* v_a_5346_; lean_object* v___x_5347_; 
v_a_5346_ = lean_ctor_get(v___x_5345_, 0);
lean_inc(v_a_5346_);
lean_dec_ref_known(v___x_5345_, 1);
v___x_5347_ = l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1(v_a_5346_);
if (lean_obj_tag(v___x_5347_) == 0)
{
lean_dec_ref_known(v___x_5347_, 1);
lean_del_object(v___x_5340_);
lean_dec_ref(v_infos_5195_);
v___y_5300_ = v___x_5334_;
v___y_5301_ = v_stdout_5343_;
v___y_5302_ = v_exitCode_5342_;
v___y_5303_ = v_stderr_5344_;
v___y_5304_ = v___x_5328_;
goto v___jp_5299_;
}
else
{
lean_object* v_a_5348_; 
lean_dec_ref(v_stderr_5344_);
lean_dec_ref(v_stdout_5343_);
v_a_5348_ = lean_ctor_get(v___x_5347_, 0);
lean_inc(v_a_5348_);
lean_dec_ref_known(v___x_5347_, 1);
if (lean_obj_tag(v_a_5348_) == 0)
{
lean_object* v_a_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; uint8_t v___x_5352_; 
v_a_5349_ = lean_ctor_get(v_a_5348_, 0);
lean_inc(v_a_5349_);
lean_dec_ref_known(v_a_5348_, 1);
v___x_5350_ = lean_array_get_size(v_infos_5195_);
v___x_5351_ = lean_array_get_size(v_a_5349_);
v___x_5352_ = lean_nat_dec_eq(v___x_5350_, v___x_5351_);
if (v___x_5352_ == 0)
{
lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; uint8_t v___x_5363_; lean_object* v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___x_5368_; 
lean_dec(v_a_5349_);
lean_dec_ref(v_infos_5195_);
v___x_5353_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5));
v___x_5354_ = lean_string_append(v___x_5353_, v_url_5194_);
lean_dec_ref(v_url_5194_);
v___x_5355_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__10));
v___x_5356_ = lean_string_append(v___x_5354_, v___x_5355_);
v___x_5357_ = l_Nat_reprFast(v___x_5350_);
v___x_5358_ = lean_string_append(v___x_5356_, v___x_5357_);
lean_dec_ref(v___x_5357_);
v___x_5359_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__11));
v___x_5360_ = lean_string_append(v___x_5358_, v___x_5359_);
v___x_5361_ = l_Nat_reprFast(v___x_5351_);
v___x_5362_ = lean_string_append(v___x_5360_, v___x_5361_);
lean_dec_ref(v___x_5361_);
v___x_5363_ = 3;
v___x_5364_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5364_, 0, v___x_5362_);
lean_ctor_set_uint8(v___x_5364_, sizeof(void*)*1, v___x_5363_);
lean_inc_ref(v___y_5198_);
v___x_5365_ = lean_apply_2(v___y_5198_, v___x_5364_, lean_box(0));
v___x_5366_ = lean_box(0);
if (v_isShared_5341_ == 0)
{
lean_ctor_set_tag(v___x_5340_, 1);
lean_ctor_set(v___x_5340_, 0, v___x_5366_);
v___x_5368_ = v___x_5340_;
goto v_reusejp_5367_;
}
else
{
lean_object* v_reuseFailAlloc_5369_; 
v_reuseFailAlloc_5369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5369_, 0, v___x_5366_);
v___x_5368_ = v_reuseFailAlloc_5369_;
goto v_reusejp_5367_;
}
v_reusejp_5367_:
{
return v___x_5368_;
}
}
else
{
lean_object* v___x_5370_; lean_object* v___x_5372_; 
lean_dec_ref(v_url_5194_);
v___x_5370_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(v_a_5349_, v___x_5350_, v___x_5350_, v_infos_5195_);
lean_dec(v_a_5349_);
if (v_isShared_5341_ == 0)
{
lean_ctor_set(v___x_5340_, 0, v___x_5370_);
v___x_5372_ = v___x_5340_;
goto v_reusejp_5371_;
}
else
{
lean_object* v_reuseFailAlloc_5373_; 
v_reuseFailAlloc_5373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5373_, 0, v___x_5370_);
v___x_5372_ = v_reuseFailAlloc_5373_;
goto v_reusejp_5371_;
}
v_reusejp_5371_:
{
return v___x_5372_;
}
}
}
else
{
lean_object* v_status_5374_; lean_object* v_message_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; uint8_t v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5390_; 
lean_dec_ref(v_infos_5195_);
v_status_5374_ = lean_ctor_get(v_a_5348_, 0);
lean_inc(v_status_5374_);
v_message_5375_ = lean_ctor_get(v_a_5348_, 1);
lean_inc_ref(v_message_5375_);
lean_dec_ref_known(v_a_5348_, 2);
v___x_5376_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9));
v___x_5377_ = l_Nat_reprFast(v_status_5374_);
v___x_5378_ = lean_string_append(v___x_5376_, v___x_5377_);
lean_dec_ref(v___x_5377_);
v___x_5379_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__12));
v___x_5380_ = lean_string_append(v___x_5378_, v___x_5379_);
v___x_5381_ = lean_string_append(v___x_5380_, v_url_5194_);
lean_dec_ref(v_url_5194_);
v___x_5382_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__13));
v___x_5383_ = lean_string_append(v___x_5381_, v___x_5382_);
v___x_5384_ = lean_string_append(v___x_5383_, v_message_5375_);
lean_dec_ref(v_message_5375_);
v___x_5385_ = 3;
v___x_5386_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5386_, 0, v___x_5384_);
lean_ctor_set_uint8(v___x_5386_, sizeof(void*)*1, v___x_5385_);
lean_inc_ref(v___y_5198_);
v___x_5387_ = lean_apply_2(v___y_5198_, v___x_5386_, lean_box(0));
v___x_5388_ = lean_box(0);
if (v_isShared_5341_ == 0)
{
lean_ctor_set_tag(v___x_5340_, 1);
lean_ctor_set(v___x_5340_, 0, v___x_5388_);
v___x_5390_ = v___x_5340_;
goto v_reusejp_5389_;
}
else
{
lean_object* v_reuseFailAlloc_5391_; 
v_reuseFailAlloc_5391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5391_, 0, v___x_5388_);
v___x_5390_ = v_reuseFailAlloc_5391_;
goto v_reusejp_5389_;
}
v_reusejp_5389_:
{
return v___x_5390_;
}
}
}
}
}
}
else
{
lean_object* v_a_5393_; lean_object* v___x_5395_; uint8_t v_isShared_5396_; uint8_t v_isSharedCheck_5405_; 
lean_dec_ref(v_infos_5195_);
lean_dec_ref(v_url_5194_);
v_a_5393_ = lean_ctor_get(v___x_5337_, 0);
v_isSharedCheck_5405_ = !lean_is_exclusive(v___x_5337_);
if (v_isSharedCheck_5405_ == 0)
{
v___x_5395_ = v___x_5337_;
v_isShared_5396_ = v_isSharedCheck_5405_;
goto v_resetjp_5394_;
}
else
{
lean_inc(v_a_5393_);
lean_dec(v___x_5337_);
v___x_5395_ = lean_box(0);
v_isShared_5396_ = v_isSharedCheck_5405_;
goto v_resetjp_5394_;
}
v_resetjp_5394_:
{
lean_object* v___x_5397_; uint8_t v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; lean_object* v___x_5403_; 
v___x_5397_ = lean_io_error_to_string(v_a_5393_);
v___x_5398_ = 3;
v___x_5399_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5399_, 0, v___x_5397_);
lean_ctor_set_uint8(v___x_5399_, sizeof(void*)*1, v___x_5398_);
lean_inc_ref(v___y_5198_);
v___x_5400_ = lean_apply_2(v___y_5198_, v___x_5399_, lean_box(0));
v___x_5401_ = lean_box(0);
if (v_isShared_5396_ == 0)
{
lean_ctor_set(v___x_5395_, 0, v___x_5401_);
v___x_5403_ = v___x_5395_;
goto v_reusejp_5402_;
}
else
{
lean_object* v_reuseFailAlloc_5404_; 
v_reuseFailAlloc_5404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5404_, 0, v___x_5401_);
v___x_5403_ = v_reuseFailAlloc_5404_;
goto v_reusejp_5402_;
}
v_reusejp_5402_:
{
return v___x_5403_;
}
}
}
}
v___jp_5408_:
{
lean_object* v___x_5413_; uint8_t v___x_5414_; 
v___x_5413_ = lean_array_get_size(v___y_5410_);
v___x_5414_ = lean_nat_dec_lt(v___y_5411_, v___x_5413_);
if (v___x_5414_ == 0)
{
v___y_5323_ = v___y_5409_;
v_a_5324_ = v_val_5412_;
goto v___jp_5322_;
}
else
{
lean_object* v___x_5415_; size_t v___x_5416_; lean_object* v___x_5417_; 
v___x_5415_ = lean_box(0);
v___x_5416_ = lean_usize_of_nat(v___x_5413_);
v___x_5417_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_5410_, v___x_5407_, v___x_5416_, v___x_5415_, v___y_5198_);
if (lean_obj_tag(v___x_5417_) == 0)
{
lean_dec_ref_known(v___x_5417_, 1);
v___y_5323_ = v___y_5409_;
v_a_5324_ = v_val_5412_;
goto v___jp_5322_;
}
else
{
lean_object* v_a_5418_; lean_object* v___x_5420_; uint8_t v_isShared_5421_; uint8_t v_isSharedCheck_5425_; 
lean_dec_ref(v_val_5412_);
lean_dec_ref(v___y_5409_);
lean_dec_ref(v_infos_5195_);
lean_dec_ref(v_url_5194_);
v_a_5418_ = lean_ctor_get(v___x_5417_, 0);
v_isSharedCheck_5425_ = !lean_is_exclusive(v___x_5417_);
if (v_isSharedCheck_5425_ == 0)
{
v___x_5420_ = v___x_5417_;
v_isShared_5421_ = v_isSharedCheck_5425_;
goto v_resetjp_5419_;
}
else
{
lean_inc(v_a_5418_);
lean_dec(v___x_5417_);
v___x_5420_ = lean_box(0);
v_isShared_5421_ = v_isSharedCheck_5425_;
goto v_resetjp_5419_;
}
v_resetjp_5419_:
{
lean_object* v___x_5423_; 
if (v_isShared_5421_ == 0)
{
v___x_5423_ = v___x_5420_;
goto v_reusejp_5422_;
}
else
{
lean_object* v_reuseFailAlloc_5424_; 
v_reuseFailAlloc_5424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5424_, 0, v_a_5418_);
v___x_5423_ = v_reuseFailAlloc_5424_;
goto v_reusejp_5422_;
}
v_reusejp_5422_:
{
return v___x_5423_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___boxed(lean_object* v_url_5490_, lean_object* v_infos_5491_, lean_object* v_h_5492_, lean_object* v_path_5493_, lean_object* v___y_5494_, lean_object* v___y_5495_){
_start:
{
lean_object* v_res_5496_; 
v_res_5496_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0(v_url_5490_, v_infos_5491_, v_h_5492_, v_path_5493_, v___y_5494_);
lean_dec_ref(v___y_5494_);
lean_dec_ref(v_path_5493_);
lean_dec(v_h_5492_);
return v_res_5496_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls(lean_object* v_url_5497_, lean_object* v_infos_5498_, lean_object* v___y_5499_){
_start:
{
lean_object* v___f_5501_; lean_object* v___x_5502_; 
v___f_5501_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___boxed), 6, 2);
lean_closure_set(v___f_5501_, 0, v_url_5497_);
lean_closure_set(v___f_5501_, 1, v_infos_5498_);
v___x_5502_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v___f_5501_, v___y_5499_);
return v___x_5502_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___boxed(lean_object* v_url_5503_, lean_object* v_infos_5504_, lean_object* v___y_5505_, lean_object* v___y_5506_){
_start:
{
lean_object* v_res_5507_; 
v_res_5507_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls(v_url_5503_, v_infos_5504_, v___y_5505_);
lean_dec_ref(v___y_5505_);
return v_res_5507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2(lean_object* v_a_5508_, lean_object* v___x_5509_, lean_object* v_n_5510_, lean_object* v_j_5511_, lean_object* v_a_5512_, lean_object* v_a_5513_){
_start:
{
lean_object* v___x_5514_; 
v___x_5514_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(v_a_5508_, v_n_5510_, v_j_5511_, v_a_5513_);
return v___x_5514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___boxed(lean_object* v_a_5515_, lean_object* v___x_5516_, lean_object* v_n_5517_, lean_object* v_j_5518_, lean_object* v_a_5519_, lean_object* v_a_5520_){
_start:
{
lean_object* v_res_5521_; 
v_res_5521_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2(v_a_5515_, v___x_5516_, v_n_5517_, v_j_5518_, v_a_5519_, v_a_5520_);
lean_dec(v_n_5517_);
lean_dec(v___x_5516_);
lean_dec_ref(v_a_5515_);
return v_res_5521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0(lean_object* v_as_5523_, size_t v_i_5524_, size_t v_stop_5525_, lean_object* v_b_5526_, lean_object* v___y_5527_){
_start:
{
lean_object* v_a_5530_; uint8_t v___x_5534_; 
v___x_5534_ = lean_usize_dec_eq(v_i_5524_, v_stop_5525_);
if (v___x_5534_ == 0)
{
lean_object* v___x_5535_; lean_object* v_a_5539_; uint8_t v_a_5556_; lean_object* v_path_5557_; lean_object* v_extraPaths_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; uint8_t v___x_5561_; 
v___x_5535_ = lean_array_uget_borrowed(v_as_5523_, v_i_5524_);
v_path_5557_ = lean_ctor_get(v___x_5535_, 1);
v_extraPaths_5558_ = lean_ctor_get(v___x_5535_, 2);
v___x_5559_ = lean_array_get_size(v_extraPaths_5558_);
v___x_5560_ = lean_unsigned_to_nat(0u);
v___x_5561_ = lean_nat_dec_eq(v___x_5559_, v___x_5560_);
if (v___x_5561_ == 0)
{
lean_object* v___x_5562_; lean_object* v_val_5564_; lean_object* v___x_5578_; 
v___x_5562_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5578_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths(v_path_5557_, v_extraPaths_5558_);
if (lean_obj_tag(v___x_5578_) == 0)
{
lean_object* v_a_5579_; lean_object* v___x_5581_; uint8_t v_isShared_5582_; uint8_t v_isSharedCheck_5586_; 
v_a_5579_ = lean_ctor_get(v___x_5578_, 0);
v_isSharedCheck_5586_ = !lean_is_exclusive(v___x_5578_);
if (v_isSharedCheck_5586_ == 0)
{
v___x_5581_ = v___x_5578_;
v_isShared_5582_ = v_isSharedCheck_5586_;
goto v_resetjp_5580_;
}
else
{
lean_inc(v_a_5579_);
lean_dec(v___x_5578_);
v___x_5581_ = lean_box(0);
v_isShared_5582_ = v_isSharedCheck_5586_;
goto v_resetjp_5580_;
}
v_resetjp_5580_:
{
lean_object* v___x_5584_; 
if (v_isShared_5582_ == 0)
{
lean_ctor_set_tag(v___x_5581_, 1);
v___x_5584_ = v___x_5581_;
goto v_reusejp_5583_;
}
else
{
lean_object* v_reuseFailAlloc_5585_; 
v_reuseFailAlloc_5585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5585_, 0, v_a_5579_);
v___x_5584_ = v_reuseFailAlloc_5585_;
goto v_reusejp_5583_;
}
v_reusejp_5583_:
{
v_val_5564_ = v___x_5584_;
goto v___jp_5563_;
}
}
}
else
{
lean_object* v_a_5587_; lean_object* v___x_5589_; uint8_t v_isShared_5590_; uint8_t v_isSharedCheck_5594_; 
v_a_5587_ = lean_ctor_get(v___x_5578_, 0);
v_isSharedCheck_5594_ = !lean_is_exclusive(v___x_5578_);
if (v_isSharedCheck_5594_ == 0)
{
v___x_5589_ = v___x_5578_;
v_isShared_5590_ = v_isSharedCheck_5594_;
goto v_resetjp_5588_;
}
else
{
lean_inc(v_a_5587_);
lean_dec(v___x_5578_);
v___x_5589_ = lean_box(0);
v_isShared_5590_ = v_isSharedCheck_5594_;
goto v_resetjp_5588_;
}
v_resetjp_5588_:
{
lean_object* v___x_5592_; 
if (v_isShared_5590_ == 0)
{
lean_ctor_set_tag(v___x_5589_, 0);
v___x_5592_ = v___x_5589_;
goto v_reusejp_5591_;
}
else
{
lean_object* v_reuseFailAlloc_5593_; 
v_reuseFailAlloc_5593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5593_, 0, v_a_5587_);
v___x_5592_ = v_reuseFailAlloc_5593_;
goto v_reusejp_5591_;
}
v_reusejp_5591_:
{
v_val_5564_ = v___x_5592_;
goto v___jp_5563_;
}
}
}
v___jp_5563_:
{
uint8_t v___x_5565_; 
v___x_5565_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_5565_ == 0)
{
v_a_5539_ = v_val_5564_;
goto v___jp_5538_;
}
else
{
lean_object* v___x_5566_; size_t v___x_5567_; size_t v___x_5568_; lean_object* v___x_5569_; 
v___x_5566_ = lean_box(0);
v___x_5567_ = ((size_t)0ULL);
v___x_5568_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_5569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_5562_, v___x_5567_, v___x_5568_, v___x_5566_, v___y_5527_);
if (lean_obj_tag(v___x_5569_) == 0)
{
lean_dec_ref_known(v___x_5569_, 1);
v_a_5539_ = v_val_5564_;
goto v___jp_5538_;
}
else
{
lean_object* v_a_5570_; lean_object* v___x_5572_; uint8_t v_isShared_5573_; uint8_t v_isSharedCheck_5577_; 
lean_dec_ref(v_val_5564_);
lean_dec_ref(v_b_5526_);
v_a_5570_ = lean_ctor_get(v___x_5569_, 0);
v_isSharedCheck_5577_ = !lean_is_exclusive(v___x_5569_);
if (v_isSharedCheck_5577_ == 0)
{
v___x_5572_ = v___x_5569_;
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
else
{
lean_inc(v_a_5570_);
lean_dec(v___x_5569_);
v___x_5572_ = lean_box(0);
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
v_resetjp_5571_:
{
lean_object* v___x_5575_; 
if (v_isShared_5573_ == 0)
{
v___x_5575_ = v___x_5572_;
goto v_reusejp_5574_;
}
else
{
lean_object* v_reuseFailAlloc_5576_; 
v_reuseFailAlloc_5576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5576_, 0, v_a_5570_);
v___x_5575_ = v_reuseFailAlloc_5576_;
goto v_reusejp_5574_;
}
v_reusejp_5574_:
{
return v___x_5575_;
}
}
}
}
}
}
else
{
lean_object* v___x_5595_; uint8_t v___x_5596_; uint8_t v___x_5597_; 
v___x_5595_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5596_ = l_System_FilePath_pathExists(v_path_5557_);
v___x_5597_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_5597_ == 0)
{
v_a_5556_ = v___x_5596_;
goto v___jp_5555_;
}
else
{
lean_object* v___x_5598_; size_t v___x_5599_; size_t v___x_5600_; lean_object* v___x_5601_; 
v___x_5598_ = lean_box(0);
v___x_5599_ = ((size_t)0ULL);
v___x_5600_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_5601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_5595_, v___x_5599_, v___x_5600_, v___x_5598_, v___y_5527_);
if (lean_obj_tag(v___x_5601_) == 0)
{
lean_dec_ref_known(v___x_5601_, 1);
v_a_5556_ = v___x_5596_;
goto v___jp_5555_;
}
else
{
lean_object* v_a_5602_; lean_object* v___x_5604_; uint8_t v_isShared_5605_; uint8_t v_isSharedCheck_5609_; 
lean_dec_ref(v_b_5526_);
v_a_5602_ = lean_ctor_get(v___x_5601_, 0);
v_isSharedCheck_5609_ = !lean_is_exclusive(v___x_5601_);
if (v_isSharedCheck_5609_ == 0)
{
v___x_5604_ = v___x_5601_;
v_isShared_5605_ = v_isSharedCheck_5609_;
goto v_resetjp_5603_;
}
else
{
lean_inc(v_a_5602_);
lean_dec(v___x_5601_);
v___x_5604_ = lean_box(0);
v_isShared_5605_ = v_isSharedCheck_5609_;
goto v_resetjp_5603_;
}
v_resetjp_5603_:
{
lean_object* v___x_5607_; 
if (v_isShared_5605_ == 0)
{
v___x_5607_ = v___x_5604_;
goto v_reusejp_5606_;
}
else
{
lean_object* v_reuseFailAlloc_5608_; 
v_reuseFailAlloc_5608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5608_, 0, v_a_5602_);
v___x_5607_ = v_reuseFailAlloc_5608_;
goto v_reusejp_5606_;
}
v_reusejp_5606_:
{
return v___x_5607_;
}
}
}
}
}
v___jp_5536_:
{
lean_object* v___x_5537_; 
lean_inc(v___x_5535_);
v___x_5537_ = lean_array_push(v_b_5526_, v___x_5535_);
v_a_5530_ = v___x_5537_;
goto v___jp_5529_;
}
v___jp_5538_:
{
if (lean_obj_tag(v_a_5539_) == 0)
{
lean_object* v_a_5540_; lean_object* v___x_5542_; uint8_t v_isShared_5543_; uint8_t v_isSharedCheck_5554_; 
v_a_5540_ = lean_ctor_get(v_a_5539_, 0);
v_isSharedCheck_5554_ = !lean_is_exclusive(v_a_5539_);
if (v_isSharedCheck_5554_ == 0)
{
v___x_5542_ = v_a_5539_;
v_isShared_5543_ = v_isSharedCheck_5554_;
goto v_resetjp_5541_;
}
else
{
lean_inc(v_a_5540_);
lean_dec(v_a_5539_);
v___x_5542_ = lean_box(0);
v_isShared_5543_ = v_isSharedCheck_5554_;
goto v_resetjp_5541_;
}
v_resetjp_5541_:
{
if (lean_obj_tag(v_a_5540_) == 11)
{
lean_dec_ref_known(v_a_5540_, 2);
lean_del_object(v___x_5542_);
goto v___jp_5536_;
}
else
{
lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; uint8_t v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5552_; 
lean_dec_ref(v_b_5526_);
v___x_5544_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0___closed__0));
v___x_5545_ = lean_io_error_to_string(v_a_5540_);
v___x_5546_ = lean_string_append(v___x_5544_, v___x_5545_);
lean_dec_ref(v___x_5545_);
v___x_5547_ = 3;
v___x_5548_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5548_, 0, v___x_5546_);
lean_ctor_set_uint8(v___x_5548_, sizeof(void*)*1, v___x_5547_);
lean_inc_ref(v___y_5527_);
v___x_5549_ = lean_apply_2(v___y_5527_, v___x_5548_, lean_box(0));
v___x_5550_ = lean_box(0);
if (v_isShared_5543_ == 0)
{
lean_ctor_set_tag(v___x_5542_, 1);
lean_ctor_set(v___x_5542_, 0, v___x_5550_);
v___x_5552_ = v___x_5542_;
goto v_reusejp_5551_;
}
else
{
lean_object* v_reuseFailAlloc_5553_; 
v_reuseFailAlloc_5553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5553_, 0, v___x_5550_);
v___x_5552_ = v_reuseFailAlloc_5553_;
goto v_reusejp_5551_;
}
v_reusejp_5551_:
{
return v___x_5552_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_5539_, 1);
v_a_5530_ = v_b_5526_;
goto v___jp_5529_;
}
}
v___jp_5555_:
{
if (v_a_5556_ == 0)
{
goto v___jp_5536_;
}
else
{
v_a_5530_ = v_b_5526_;
goto v___jp_5529_;
}
}
}
else
{
lean_object* v___x_5610_; 
v___x_5610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5610_, 0, v_b_5526_);
return v___x_5610_;
}
v___jp_5529_:
{
size_t v___x_5531_; size_t v___x_5532_; 
v___x_5531_ = ((size_t)1ULL);
v___x_5532_ = lean_usize_add(v_i_5524_, v___x_5531_);
v_i_5524_ = v___x_5532_;
v_b_5526_ = v_a_5530_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0___boxed(lean_object* v_as_5611_, lean_object* v_i_5612_, lean_object* v_stop_5613_, lean_object* v_b_5614_, lean_object* v___y_5615_, lean_object* v___y_5616_){
_start:
{
size_t v_i_boxed_5617_; size_t v_stop_boxed_5618_; lean_object* v_res_5619_; 
v_i_boxed_5617_ = lean_unbox_usize(v_i_5612_);
lean_dec(v_i_5612_);
v_stop_boxed_5618_ = lean_unbox_usize(v_stop_5613_);
lean_dec(v_stop_5613_);
v_res_5619_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0(v_as_5611_, v_i_boxed_5617_, v_stop_boxed_5618_, v_b_5614_, v___y_5615_);
lean_dec_ref(v___y_5615_);
lean_dec_ref(v_as_5611_);
return v_res_5619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(lean_object* v_service_5620_, lean_object* v_scope_5621_, lean_object* v_cache_5622_, uint8_t v_force_5623_, lean_object* v_as_5624_, size_t v_i_5625_, size_t v_stop_5626_, lean_object* v_b_5627_, lean_object* v___y_5628_){
_start:
{
lean_object* v_a_5631_; lean_object* v___y_5636_; lean_object* v___y_5647_; lean_object* v___y_5658_; uint8_t v___x_5668_; 
v___x_5668_ = lean_usize_dec_eq(v_i_5625_, v_stop_5626_);
if (v___x_5668_ == 0)
{
lean_object* v___x_5669_; uint64_t v_hash_5670_; lean_object* v_ext_5671_; lean_object* v_url_5672_; lean_object* v___y_5674_; uint8_t v_a_5675_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___y_5751_; lean_object* v___x_5818_; lean_object* v___x_5819_; uint8_t v___x_5820_; 
v___x_5669_ = lean_array_uget_borrowed(v_as_5624_, v_i_5625_);
v_hash_5670_ = lean_ctor_get_uint64(v___x_5669_, sizeof(void*)*1);
v_ext_5671_ = lean_ctor_get(v___x_5669_, 0);
lean_inc_ref(v_scope_5621_);
lean_inc_ref(v_service_5620_);
v_url_5672_ = l_Lake_CacheService_artifactUrl(v_hash_5670_, v_service_5620_, v_scope_5621_);
v___x_5748_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
lean_inc_ref(v_cache_5622_);
v___x_5749_ = l_System_FilePath_join(v_cache_5622_, v___x_5748_);
v___x_5818_ = lean_string_utf8_byte_size(v_ext_5671_);
v___x_5819_ = lean_unsigned_to_nat(0u);
v___x_5820_ = lean_nat_dec_eq(v___x_5818_, v___x_5819_);
if (v___x_5820_ == 0)
{
lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; lean_object* v___x_5824_; 
v___x_5821_ = l_Lake_lowerHexUInt64(v_hash_5670_);
v___x_5822_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_5823_ = lean_string_append(v___x_5821_, v___x_5822_);
v___x_5824_ = lean_string_append(v___x_5823_, v_ext_5671_);
v___y_5751_ = v___x_5824_;
goto v___jp_5750_;
}
else
{
lean_object* v___x_5825_; 
v___x_5825_ = l_Lake_lowerHexUInt64(v_hash_5670_);
v___y_5751_ = v___x_5825_;
goto v___jp_5750_;
}
v___jp_5673_:
{
if (v_a_5675_ == 0)
{
lean_object* v_infos_5676_; lean_object* v_indices_5677_; lean_object* v___x_5678_; 
v_infos_5676_ = lean_ctor_get(v_b_5627_, 0);
v_indices_5677_ = lean_ctor_get(v_b_5627_, 1);
v___x_5678_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_indices_5677_, v_hash_5670_);
if (lean_obj_tag(v___x_5678_) == 1)
{
lean_object* v_val_5679_; lean_object* v___x_5680_; uint8_t v___x_5681_; 
lean_dec_ref(v_url_5672_);
v_val_5679_ = lean_ctor_get(v___x_5678_, 0);
lean_inc(v_val_5679_);
lean_dec_ref_known(v___x_5678_, 1);
v___x_5680_ = lean_array_get_size(v_infos_5676_);
v___x_5681_ = lean_nat_dec_lt(v_val_5679_, v___x_5680_);
if (v___x_5681_ == 0)
{
lean_dec(v_val_5679_);
lean_dec_ref(v___y_5674_);
lean_inc_ref(v_infos_5676_);
v___y_5647_ = v_infos_5676_;
goto v___jp_5646_;
}
else
{
lean_object* v_v_5682_; lean_object* v_url_5683_; uint64_t v_hash_5684_; lean_object* v_path_5685_; lean_object* v_extraPaths_5686_; lean_object* v___x_5688_; uint8_t v_isShared_5689_; uint8_t v_isSharedCheck_5697_; 
v_v_5682_ = lean_array_fget(v_infos_5676_, v_val_5679_);
v_url_5683_ = lean_ctor_get(v_v_5682_, 0);
v_hash_5684_ = lean_ctor_get_uint64(v_v_5682_, sizeof(void*)*3);
v_path_5685_ = lean_ctor_get(v_v_5682_, 1);
v_extraPaths_5686_ = lean_ctor_get(v_v_5682_, 2);
v_isSharedCheck_5697_ = !lean_is_exclusive(v_v_5682_);
if (v_isSharedCheck_5697_ == 0)
{
v___x_5688_ = v_v_5682_;
v_isShared_5689_ = v_isSharedCheck_5697_;
goto v_resetjp_5687_;
}
else
{
lean_inc(v_extraPaths_5686_);
lean_inc(v_path_5685_);
lean_inc(v_url_5683_);
lean_dec(v_v_5682_);
v___x_5688_ = lean_box(0);
v_isShared_5689_ = v_isSharedCheck_5697_;
goto v_resetjp_5687_;
}
v_resetjp_5687_:
{
lean_object* v___x_5690_; lean_object* v_xs_x27_5691_; lean_object* v___x_5692_; lean_object* v___x_5694_; 
v___x_5690_ = lean_box(0);
lean_inc_ref(v_infos_5676_);
v_xs_x27_5691_ = lean_array_fset(v_infos_5676_, v_val_5679_, v___x_5690_);
v___x_5692_ = lean_array_push(v_extraPaths_5686_, v___y_5674_);
if (v_isShared_5689_ == 0)
{
lean_ctor_set(v___x_5688_, 2, v___x_5692_);
v___x_5694_ = v___x_5688_;
goto v_reusejp_5693_;
}
else
{
lean_object* v_reuseFailAlloc_5696_; 
v_reuseFailAlloc_5696_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_5696_, 0, v_url_5683_);
lean_ctor_set(v_reuseFailAlloc_5696_, 1, v_path_5685_);
lean_ctor_set(v_reuseFailAlloc_5696_, 2, v___x_5692_);
lean_ctor_set_uint64(v_reuseFailAlloc_5696_, sizeof(void*)*3, v_hash_5684_);
v___x_5694_ = v_reuseFailAlloc_5696_;
goto v_reusejp_5693_;
}
v_reusejp_5693_:
{
lean_object* v___x_5695_; 
v___x_5695_ = lean_array_fset(v_xs_x27_5691_, v_val_5679_, v___x_5694_);
lean_dec(v_val_5679_);
v___y_5647_ = v___x_5695_;
goto v___jp_5646_;
}
}
}
}
else
{
lean_object* v___x_5699_; uint8_t v_isShared_5700_; uint8_t v_isSharedCheck_5709_; 
lean_inc_ref(v_indices_5677_);
lean_inc_ref(v_infos_5676_);
lean_dec(v___x_5678_);
v_isSharedCheck_5709_ = !lean_is_exclusive(v_b_5627_);
if (v_isSharedCheck_5709_ == 0)
{
lean_object* v_unused_5710_; lean_object* v_unused_5711_; 
v_unused_5710_ = lean_ctor_get(v_b_5627_, 1);
lean_dec(v_unused_5710_);
v_unused_5711_ = lean_ctor_get(v_b_5627_, 0);
lean_dec(v_unused_5711_);
v___x_5699_ = v_b_5627_;
v_isShared_5700_ = v_isSharedCheck_5709_;
goto v_resetjp_5698_;
}
else
{
lean_dec(v_b_5627_);
v___x_5699_ = lean_box(0);
v_isShared_5700_ = v_isSharedCheck_5709_;
goto v_resetjp_5698_;
}
v_resetjp_5698_:
{
lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5707_; 
v___x_5701_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_5702_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5702_, 0, v_url_5672_);
lean_ctor_set(v___x_5702_, 1, v___y_5674_);
lean_ctor_set(v___x_5702_, 2, v___x_5701_);
lean_ctor_set_uint64(v___x_5702_, sizeof(void*)*3, v_hash_5670_);
lean_inc_ref(v_infos_5676_);
v___x_5703_ = lean_array_push(v_infos_5676_, v___x_5702_);
v___x_5704_ = lean_array_get_size(v_infos_5676_);
lean_dec_ref(v_infos_5676_);
v___x_5705_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_5677_, v_hash_5670_, v___x_5704_);
if (v_isShared_5700_ == 0)
{
lean_ctor_set(v___x_5699_, 1, v___x_5705_);
lean_ctor_set(v___x_5699_, 0, v___x_5703_);
v___x_5707_ = v___x_5699_;
goto v_reusejp_5706_;
}
else
{
lean_object* v_reuseFailAlloc_5708_; 
v_reuseFailAlloc_5708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5708_, 0, v___x_5703_);
lean_ctor_set(v_reuseFailAlloc_5708_, 1, v___x_5705_);
v___x_5707_ = v_reuseFailAlloc_5708_;
goto v_reusejp_5706_;
}
v_reusejp_5706_:
{
v_a_5631_ = v___x_5707_;
goto v___jp_5630_;
}
}
}
}
else
{
lean_object* v_infos_5712_; lean_object* v_indices_5713_; lean_object* v___x_5714_; 
v_infos_5712_ = lean_ctor_get(v_b_5627_, 0);
v_indices_5713_ = lean_ctor_get(v_b_5627_, 1);
v___x_5714_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_indices_5713_, v_hash_5670_);
if (lean_obj_tag(v___x_5714_) == 1)
{
lean_object* v_val_5715_; lean_object* v___x_5716_; uint8_t v___x_5717_; 
lean_dec_ref(v_url_5672_);
v_val_5715_ = lean_ctor_get(v___x_5714_, 0);
lean_inc(v_val_5715_);
lean_dec_ref_known(v___x_5714_, 1);
v___x_5716_ = lean_array_get_size(v_infos_5712_);
v___x_5717_ = lean_nat_dec_lt(v_val_5715_, v___x_5716_);
if (v___x_5717_ == 0)
{
lean_dec(v_val_5715_);
lean_dec_ref(v___y_5674_);
lean_inc_ref(v_infos_5712_);
v___y_5636_ = v_infos_5712_;
goto v___jp_5635_;
}
else
{
lean_object* v_v_5718_; lean_object* v_url_5719_; uint64_t v_hash_5720_; lean_object* v_path_5721_; lean_object* v_extraPaths_5722_; lean_object* v___x_5724_; uint8_t v_isShared_5725_; uint8_t v_isSharedCheck_5733_; 
v_v_5718_ = lean_array_fget(v_infos_5712_, v_val_5715_);
v_url_5719_ = lean_ctor_get(v_v_5718_, 0);
v_hash_5720_ = lean_ctor_get_uint64(v_v_5718_, sizeof(void*)*3);
v_path_5721_ = lean_ctor_get(v_v_5718_, 1);
v_extraPaths_5722_ = lean_ctor_get(v_v_5718_, 2);
v_isSharedCheck_5733_ = !lean_is_exclusive(v_v_5718_);
if (v_isSharedCheck_5733_ == 0)
{
v___x_5724_ = v_v_5718_;
v_isShared_5725_ = v_isSharedCheck_5733_;
goto v_resetjp_5723_;
}
else
{
lean_inc(v_extraPaths_5722_);
lean_inc(v_path_5721_);
lean_inc(v_url_5719_);
lean_dec(v_v_5718_);
v___x_5724_ = lean_box(0);
v_isShared_5725_ = v_isSharedCheck_5733_;
goto v_resetjp_5723_;
}
v_resetjp_5723_:
{
lean_object* v___x_5726_; lean_object* v_xs_x27_5727_; lean_object* v___x_5728_; lean_object* v___x_5730_; 
v___x_5726_ = lean_box(0);
lean_inc_ref(v_infos_5712_);
v_xs_x27_5727_ = lean_array_fset(v_infos_5712_, v_val_5715_, v___x_5726_);
v___x_5728_ = lean_array_push(v_extraPaths_5722_, v_path_5721_);
if (v_isShared_5725_ == 0)
{
lean_ctor_set(v___x_5724_, 2, v___x_5728_);
lean_ctor_set(v___x_5724_, 1, v___y_5674_);
v___x_5730_ = v___x_5724_;
goto v_reusejp_5729_;
}
else
{
lean_object* v_reuseFailAlloc_5732_; 
v_reuseFailAlloc_5732_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_5732_, 0, v_url_5719_);
lean_ctor_set(v_reuseFailAlloc_5732_, 1, v___y_5674_);
lean_ctor_set(v_reuseFailAlloc_5732_, 2, v___x_5728_);
lean_ctor_set_uint64(v_reuseFailAlloc_5732_, sizeof(void*)*3, v_hash_5720_);
v___x_5730_ = v_reuseFailAlloc_5732_;
goto v_reusejp_5729_;
}
v_reusejp_5729_:
{
lean_object* v___x_5731_; 
v___x_5731_ = lean_array_fset(v_xs_x27_5727_, v_val_5715_, v___x_5730_);
lean_dec(v_val_5715_);
v___y_5636_ = v___x_5731_;
goto v___jp_5635_;
}
}
}
}
else
{
lean_object* v___x_5735_; uint8_t v_isShared_5736_; uint8_t v_isSharedCheck_5745_; 
lean_inc_ref(v_indices_5713_);
lean_inc_ref(v_infos_5712_);
lean_dec(v___x_5714_);
v_isSharedCheck_5745_ = !lean_is_exclusive(v_b_5627_);
if (v_isSharedCheck_5745_ == 0)
{
lean_object* v_unused_5746_; lean_object* v_unused_5747_; 
v_unused_5746_ = lean_ctor_get(v_b_5627_, 1);
lean_dec(v_unused_5746_);
v_unused_5747_ = lean_ctor_get(v_b_5627_, 0);
lean_dec(v_unused_5747_);
v___x_5735_ = v_b_5627_;
v_isShared_5736_ = v_isSharedCheck_5745_;
goto v_resetjp_5734_;
}
else
{
lean_dec(v_b_5627_);
v___x_5735_ = lean_box(0);
v_isShared_5736_ = v_isSharedCheck_5745_;
goto v_resetjp_5734_;
}
v_resetjp_5734_:
{
lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5741_; lean_object* v___x_5743_; 
v___x_5737_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_5738_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5738_, 0, v_url_5672_);
lean_ctor_set(v___x_5738_, 1, v___y_5674_);
lean_ctor_set(v___x_5738_, 2, v___x_5737_);
lean_ctor_set_uint64(v___x_5738_, sizeof(void*)*3, v_hash_5670_);
lean_inc_ref(v_infos_5712_);
v___x_5739_ = lean_array_push(v_infos_5712_, v___x_5738_);
v___x_5740_ = lean_array_get_size(v_infos_5712_);
lean_dec_ref(v_infos_5712_);
v___x_5741_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_5713_, v_hash_5670_, v___x_5740_);
if (v_isShared_5736_ == 0)
{
lean_ctor_set(v___x_5735_, 1, v___x_5741_);
lean_ctor_set(v___x_5735_, 0, v___x_5739_);
v___x_5743_ = v___x_5735_;
goto v_reusejp_5742_;
}
else
{
lean_object* v_reuseFailAlloc_5744_; 
v_reuseFailAlloc_5744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5744_, 0, v___x_5739_);
lean_ctor_set(v_reuseFailAlloc_5744_, 1, v___x_5741_);
v___x_5743_ = v_reuseFailAlloc_5744_;
goto v_reusejp_5742_;
}
v_reusejp_5742_:
{
v_a_5631_ = v___x_5743_;
goto v___jp_5630_;
}
}
}
}
}
v___jp_5750_:
{
lean_object* v_path_5752_; 
v_path_5752_ = l_System_FilePath_join(v___x_5749_, v___y_5751_);
if (v_force_5623_ == 0)
{
lean_object* v___x_5753_; uint8_t v___x_5754_; uint8_t v___x_5755_; 
v___x_5753_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5754_ = l_System_FilePath_pathExists(v_path_5752_);
v___x_5755_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_5755_ == 0)
{
v___y_5674_ = v_path_5752_;
v_a_5675_ = v___x_5754_;
goto v___jp_5673_;
}
else
{
lean_object* v___x_5756_; size_t v___x_5757_; size_t v___x_5758_; lean_object* v___x_5759_; 
v___x_5756_ = lean_box(0);
v___x_5757_ = ((size_t)0ULL);
v___x_5758_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_5759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_5753_, v___x_5757_, v___x_5758_, v___x_5756_, v___y_5628_);
if (lean_obj_tag(v___x_5759_) == 0)
{
lean_dec_ref_known(v___x_5759_, 1);
v___y_5674_ = v_path_5752_;
v_a_5675_ = v___x_5754_;
goto v___jp_5673_;
}
else
{
lean_object* v_a_5760_; lean_object* v___x_5762_; uint8_t v_isShared_5763_; uint8_t v_isSharedCheck_5767_; 
lean_dec_ref(v_path_5752_);
lean_dec_ref(v_url_5672_);
lean_dec_ref(v_b_5627_);
lean_dec_ref(v_cache_5622_);
lean_dec_ref(v_scope_5621_);
lean_dec_ref(v_service_5620_);
v_a_5760_ = lean_ctor_get(v___x_5759_, 0);
v_isSharedCheck_5767_ = !lean_is_exclusive(v___x_5759_);
if (v_isSharedCheck_5767_ == 0)
{
v___x_5762_ = v___x_5759_;
v_isShared_5763_ = v_isSharedCheck_5767_;
goto v_resetjp_5761_;
}
else
{
lean_inc(v_a_5760_);
lean_dec(v___x_5759_);
v___x_5762_ = lean_box(0);
v_isShared_5763_ = v_isSharedCheck_5767_;
goto v_resetjp_5761_;
}
v_resetjp_5761_:
{
lean_object* v___x_5765_; 
if (v_isShared_5763_ == 0)
{
v___x_5765_ = v___x_5762_;
goto v_reusejp_5764_;
}
else
{
lean_object* v_reuseFailAlloc_5766_; 
v_reuseFailAlloc_5766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5766_, 0, v_a_5760_);
v___x_5765_ = v_reuseFailAlloc_5766_;
goto v_reusejp_5764_;
}
v_reusejp_5764_:
{
return v___x_5765_;
}
}
}
}
}
else
{
lean_object* v___x_5768_; 
v___x_5768_ = l_Lake_removeFileIfExists(v_path_5752_);
if (lean_obj_tag(v___x_5768_) == 0)
{
lean_object* v_infos_5769_; lean_object* v_indices_5770_; lean_object* v___x_5771_; 
lean_dec_ref_known(v___x_5768_, 1);
v_infos_5769_ = lean_ctor_get(v_b_5627_, 0);
v_indices_5770_ = lean_ctor_get(v_b_5627_, 1);
v___x_5771_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_indices_5770_, v_hash_5670_);
if (lean_obj_tag(v___x_5771_) == 1)
{
lean_object* v_val_5772_; lean_object* v___x_5773_; uint8_t v___x_5774_; 
lean_dec_ref(v_url_5672_);
v_val_5772_ = lean_ctor_get(v___x_5771_, 0);
lean_inc(v_val_5772_);
lean_dec_ref_known(v___x_5771_, 1);
v___x_5773_ = lean_array_get_size(v_infos_5769_);
v___x_5774_ = lean_nat_dec_lt(v_val_5772_, v___x_5773_);
if (v___x_5774_ == 0)
{
lean_dec(v_val_5772_);
lean_dec_ref(v_path_5752_);
lean_inc_ref(v_infos_5769_);
v___y_5658_ = v_infos_5769_;
goto v___jp_5657_;
}
else
{
lean_object* v_v_5775_; lean_object* v_url_5776_; uint64_t v_hash_5777_; lean_object* v_path_5778_; lean_object* v_extraPaths_5779_; lean_object* v___x_5781_; uint8_t v_isShared_5782_; uint8_t v_isSharedCheck_5790_; 
v_v_5775_ = lean_array_fget(v_infos_5769_, v_val_5772_);
v_url_5776_ = lean_ctor_get(v_v_5775_, 0);
v_hash_5777_ = lean_ctor_get_uint64(v_v_5775_, sizeof(void*)*3);
v_path_5778_ = lean_ctor_get(v_v_5775_, 1);
v_extraPaths_5779_ = lean_ctor_get(v_v_5775_, 2);
v_isSharedCheck_5790_ = !lean_is_exclusive(v_v_5775_);
if (v_isSharedCheck_5790_ == 0)
{
v___x_5781_ = v_v_5775_;
v_isShared_5782_ = v_isSharedCheck_5790_;
goto v_resetjp_5780_;
}
else
{
lean_inc(v_extraPaths_5779_);
lean_inc(v_path_5778_);
lean_inc(v_url_5776_);
lean_dec(v_v_5775_);
v___x_5781_ = lean_box(0);
v_isShared_5782_ = v_isSharedCheck_5790_;
goto v_resetjp_5780_;
}
v_resetjp_5780_:
{
lean_object* v___x_5783_; lean_object* v_xs_x27_5784_; lean_object* v___x_5785_; lean_object* v___x_5787_; 
v___x_5783_ = lean_box(0);
lean_inc_ref(v_infos_5769_);
v_xs_x27_5784_ = lean_array_fset(v_infos_5769_, v_val_5772_, v___x_5783_);
v___x_5785_ = lean_array_push(v_extraPaths_5779_, v_path_5752_);
if (v_isShared_5782_ == 0)
{
lean_ctor_set(v___x_5781_, 2, v___x_5785_);
v___x_5787_ = v___x_5781_;
goto v_reusejp_5786_;
}
else
{
lean_object* v_reuseFailAlloc_5789_; 
v_reuseFailAlloc_5789_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_5789_, 0, v_url_5776_);
lean_ctor_set(v_reuseFailAlloc_5789_, 1, v_path_5778_);
lean_ctor_set(v_reuseFailAlloc_5789_, 2, v___x_5785_);
lean_ctor_set_uint64(v_reuseFailAlloc_5789_, sizeof(void*)*3, v_hash_5777_);
v___x_5787_ = v_reuseFailAlloc_5789_;
goto v_reusejp_5786_;
}
v_reusejp_5786_:
{
lean_object* v___x_5788_; 
v___x_5788_ = lean_array_fset(v_xs_x27_5784_, v_val_5772_, v___x_5787_);
lean_dec(v_val_5772_);
v___y_5658_ = v___x_5788_;
goto v___jp_5657_;
}
}
}
}
else
{
lean_object* v___x_5792_; uint8_t v_isShared_5793_; uint8_t v_isSharedCheck_5802_; 
lean_inc_ref(v_indices_5770_);
lean_inc_ref(v_infos_5769_);
lean_dec(v___x_5771_);
v_isSharedCheck_5802_ = !lean_is_exclusive(v_b_5627_);
if (v_isSharedCheck_5802_ == 0)
{
lean_object* v_unused_5803_; lean_object* v_unused_5804_; 
v_unused_5803_ = lean_ctor_get(v_b_5627_, 1);
lean_dec(v_unused_5803_);
v_unused_5804_ = lean_ctor_get(v_b_5627_, 0);
lean_dec(v_unused_5804_);
v___x_5792_ = v_b_5627_;
v_isShared_5793_ = v_isSharedCheck_5802_;
goto v_resetjp_5791_;
}
else
{
lean_dec(v_b_5627_);
v___x_5792_ = lean_box(0);
v_isShared_5793_ = v_isSharedCheck_5802_;
goto v_resetjp_5791_;
}
v_resetjp_5791_:
{
lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5798_; lean_object* v___x_5800_; 
v___x_5794_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_5795_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5795_, 0, v_url_5672_);
lean_ctor_set(v___x_5795_, 1, v_path_5752_);
lean_ctor_set(v___x_5795_, 2, v___x_5794_);
lean_ctor_set_uint64(v___x_5795_, sizeof(void*)*3, v_hash_5670_);
lean_inc_ref(v_infos_5769_);
v___x_5796_ = lean_array_push(v_infos_5769_, v___x_5795_);
v___x_5797_ = lean_array_get_size(v_infos_5769_);
lean_dec_ref(v_infos_5769_);
v___x_5798_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_5770_, v_hash_5670_, v___x_5797_);
if (v_isShared_5793_ == 0)
{
lean_ctor_set(v___x_5792_, 1, v___x_5798_);
lean_ctor_set(v___x_5792_, 0, v___x_5796_);
v___x_5800_ = v___x_5792_;
goto v_reusejp_5799_;
}
else
{
lean_object* v_reuseFailAlloc_5801_; 
v_reuseFailAlloc_5801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5801_, 0, v___x_5796_);
lean_ctor_set(v_reuseFailAlloc_5801_, 1, v___x_5798_);
v___x_5800_ = v_reuseFailAlloc_5801_;
goto v_reusejp_5799_;
}
v_reusejp_5799_:
{
v_a_5631_ = v___x_5800_;
goto v___jp_5630_;
}
}
}
}
else
{
lean_object* v_a_5805_; lean_object* v___x_5807_; uint8_t v_isShared_5808_; uint8_t v_isSharedCheck_5817_; 
lean_dec_ref(v_path_5752_);
lean_dec_ref(v_url_5672_);
lean_dec_ref(v_b_5627_);
lean_dec_ref(v_cache_5622_);
lean_dec_ref(v_scope_5621_);
lean_dec_ref(v_service_5620_);
v_a_5805_ = lean_ctor_get(v___x_5768_, 0);
v_isSharedCheck_5817_ = !lean_is_exclusive(v___x_5768_);
if (v_isSharedCheck_5817_ == 0)
{
v___x_5807_ = v___x_5768_;
v_isShared_5808_ = v_isSharedCheck_5817_;
goto v_resetjp_5806_;
}
else
{
lean_inc(v_a_5805_);
lean_dec(v___x_5768_);
v___x_5807_ = lean_box(0);
v_isShared_5808_ = v_isSharedCheck_5817_;
goto v_resetjp_5806_;
}
v_resetjp_5806_:
{
lean_object* v___x_5809_; uint8_t v___x_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; lean_object* v___x_5813_; lean_object* v___x_5815_; 
v___x_5809_ = lean_io_error_to_string(v_a_5805_);
v___x_5810_ = 3;
v___x_5811_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5811_, 0, v___x_5809_);
lean_ctor_set_uint8(v___x_5811_, sizeof(void*)*1, v___x_5810_);
lean_inc_ref(v___y_5628_);
v___x_5812_ = lean_apply_2(v___y_5628_, v___x_5811_, lean_box(0));
v___x_5813_ = lean_box(0);
if (v_isShared_5808_ == 0)
{
lean_ctor_set(v___x_5807_, 0, v___x_5813_);
v___x_5815_ = v___x_5807_;
goto v_reusejp_5814_;
}
else
{
lean_object* v_reuseFailAlloc_5816_; 
v_reuseFailAlloc_5816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5816_, 0, v___x_5813_);
v___x_5815_ = v_reuseFailAlloc_5816_;
goto v_reusejp_5814_;
}
v_reusejp_5814_:
{
return v___x_5815_;
}
}
}
}
}
}
else
{
lean_object* v___x_5826_; 
lean_dec_ref(v_cache_5622_);
lean_dec_ref(v_scope_5621_);
lean_dec_ref(v_service_5620_);
v___x_5826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5826_, 0, v_b_5627_);
return v___x_5826_;
}
v___jp_5630_:
{
size_t v___x_5632_; size_t v___x_5633_; 
v___x_5632_ = ((size_t)1ULL);
v___x_5633_ = lean_usize_add(v_i_5625_, v___x_5632_);
v_i_5625_ = v___x_5633_;
v_b_5627_ = v_a_5631_;
goto _start;
}
v___jp_5635_:
{
lean_object* v_indices_5637_; lean_object* v___x_5639_; uint8_t v_isShared_5640_; uint8_t v_isSharedCheck_5644_; 
v_indices_5637_ = lean_ctor_get(v_b_5627_, 1);
v_isSharedCheck_5644_ = !lean_is_exclusive(v_b_5627_);
if (v_isSharedCheck_5644_ == 0)
{
lean_object* v_unused_5645_; 
v_unused_5645_ = lean_ctor_get(v_b_5627_, 0);
lean_dec(v_unused_5645_);
v___x_5639_ = v_b_5627_;
v_isShared_5640_ = v_isSharedCheck_5644_;
goto v_resetjp_5638_;
}
else
{
lean_inc(v_indices_5637_);
lean_dec(v_b_5627_);
v___x_5639_ = lean_box(0);
v_isShared_5640_ = v_isSharedCheck_5644_;
goto v_resetjp_5638_;
}
v_resetjp_5638_:
{
lean_object* v___x_5642_; 
if (v_isShared_5640_ == 0)
{
lean_ctor_set(v___x_5639_, 0, v___y_5636_);
v___x_5642_ = v___x_5639_;
goto v_reusejp_5641_;
}
else
{
lean_object* v_reuseFailAlloc_5643_; 
v_reuseFailAlloc_5643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5643_, 0, v___y_5636_);
lean_ctor_set(v_reuseFailAlloc_5643_, 1, v_indices_5637_);
v___x_5642_ = v_reuseFailAlloc_5643_;
goto v_reusejp_5641_;
}
v_reusejp_5641_:
{
v_a_5631_ = v___x_5642_;
goto v___jp_5630_;
}
}
}
v___jp_5646_:
{
lean_object* v_indices_5648_; lean_object* v___x_5650_; uint8_t v_isShared_5651_; uint8_t v_isSharedCheck_5655_; 
v_indices_5648_ = lean_ctor_get(v_b_5627_, 1);
v_isSharedCheck_5655_ = !lean_is_exclusive(v_b_5627_);
if (v_isSharedCheck_5655_ == 0)
{
lean_object* v_unused_5656_; 
v_unused_5656_ = lean_ctor_get(v_b_5627_, 0);
lean_dec(v_unused_5656_);
v___x_5650_ = v_b_5627_;
v_isShared_5651_ = v_isSharedCheck_5655_;
goto v_resetjp_5649_;
}
else
{
lean_inc(v_indices_5648_);
lean_dec(v_b_5627_);
v___x_5650_ = lean_box(0);
v_isShared_5651_ = v_isSharedCheck_5655_;
goto v_resetjp_5649_;
}
v_resetjp_5649_:
{
lean_object* v___x_5653_; 
if (v_isShared_5651_ == 0)
{
lean_ctor_set(v___x_5650_, 0, v___y_5647_);
v___x_5653_ = v___x_5650_;
goto v_reusejp_5652_;
}
else
{
lean_object* v_reuseFailAlloc_5654_; 
v_reuseFailAlloc_5654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5654_, 0, v___y_5647_);
lean_ctor_set(v_reuseFailAlloc_5654_, 1, v_indices_5648_);
v___x_5653_ = v_reuseFailAlloc_5654_;
goto v_reusejp_5652_;
}
v_reusejp_5652_:
{
v_a_5631_ = v___x_5653_;
goto v___jp_5630_;
}
}
}
v___jp_5657_:
{
lean_object* v_indices_5659_; lean_object* v___x_5661_; uint8_t v_isShared_5662_; uint8_t v_isSharedCheck_5666_; 
v_indices_5659_ = lean_ctor_get(v_b_5627_, 1);
v_isSharedCheck_5666_ = !lean_is_exclusive(v_b_5627_);
if (v_isSharedCheck_5666_ == 0)
{
lean_object* v_unused_5667_; 
v_unused_5667_ = lean_ctor_get(v_b_5627_, 0);
lean_dec(v_unused_5667_);
v___x_5661_ = v_b_5627_;
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
else
{
lean_inc(v_indices_5659_);
lean_dec(v_b_5627_);
v___x_5661_ = lean_box(0);
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
v_resetjp_5660_:
{
lean_object* v___x_5664_; 
if (v_isShared_5662_ == 0)
{
lean_ctor_set(v___x_5661_, 0, v___y_5658_);
v___x_5664_ = v___x_5661_;
goto v_reusejp_5663_;
}
else
{
lean_object* v_reuseFailAlloc_5665_; 
v_reuseFailAlloc_5665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5665_, 0, v___y_5658_);
lean_ctor_set(v_reuseFailAlloc_5665_, 1, v_indices_5659_);
v___x_5664_ = v_reuseFailAlloc_5665_;
goto v_reusejp_5663_;
}
v_reusejp_5663_:
{
v_a_5631_ = v___x_5664_;
goto v___jp_5630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1___boxed(lean_object* v_service_5827_, lean_object* v_scope_5828_, lean_object* v_cache_5829_, lean_object* v_force_5830_, lean_object* v_as_5831_, lean_object* v_i_5832_, lean_object* v_stop_5833_, lean_object* v_b_5834_, lean_object* v___y_5835_, lean_object* v___y_5836_){
_start:
{
uint8_t v_force_boxed_5837_; size_t v_i_boxed_5838_; size_t v_stop_boxed_5839_; lean_object* v_res_5840_; 
v_force_boxed_5837_ = lean_unbox(v_force_5830_);
v_i_boxed_5838_ = lean_unbox_usize(v_i_5832_);
lean_dec(v_i_5832_);
v_stop_boxed_5839_ = lean_unbox_usize(v_stop_5833_);
lean_dec(v_stop_5833_);
v_res_5840_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_service_5827_, v_scope_5828_, v_cache_5829_, v_force_boxed_5837_, v_as_5831_, v_i_boxed_5838_, v_stop_boxed_5839_, v_b_5834_, v___y_5835_);
lean_dec_ref(v___y_5835_);
lean_dec_ref(v_as_5831_);
return v_res_5840_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts(lean_object* v_descrs_5845_, lean_object* v_cache_5846_, lean_object* v_service_5847_, lean_object* v_scope_5848_, uint8_t v_force_5849_, lean_object* v___y_5850_){
_start:
{
lean_object* v_a_5853_; lean_object* v_a_5875_; lean_object* v___y_5894_; lean_object* v___x_5904_; lean_object* v___x_5905_; uint8_t v___x_5906_; 
v___x_5904_ = lean_array_get_size(v_descrs_5845_);
v___x_5905_ = lean_unsigned_to_nat(0u);
v___x_5906_ = lean_nat_dec_eq(v___x_5904_, v___x_5905_);
if (v___x_5906_ == 0)
{
lean_object* v___x_5907_; lean_object* v_infos_5909_; lean_object* v___y_5920_; uint8_t v___x_5931_; 
v___x_5907_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__0));
v___x_5931_ = lean_nat_dec_lt(v___x_5905_, v___x_5904_);
if (v___x_5931_ == 0)
{
v_infos_5909_ = v___x_5907_;
goto v___jp_5908_;
}
else
{
lean_object* v___x_5932_; uint8_t v___x_5933_; 
v___x_5932_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1);
v___x_5933_ = lean_nat_dec_le(v___x_5904_, v___x_5904_);
if (v___x_5933_ == 0)
{
if (v___x_5931_ == 0)
{
v_infos_5909_ = v___x_5907_;
goto v___jp_5908_;
}
else
{
size_t v___x_5934_; size_t v___x_5935_; lean_object* v___x_5936_; 
v___x_5934_ = ((size_t)0ULL);
v___x_5935_ = lean_usize_of_nat(v___x_5904_);
lean_inc_ref(v_cache_5846_);
lean_inc_ref(v_scope_5848_);
lean_inc_ref(v_service_5847_);
v___x_5936_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_service_5847_, v_scope_5848_, v_cache_5846_, v_force_5849_, v_descrs_5845_, v___x_5934_, v___x_5935_, v___x_5932_, v___y_5850_);
v___y_5920_ = v___x_5936_;
goto v___jp_5919_;
}
}
else
{
size_t v___x_5937_; size_t v___x_5938_; lean_object* v___x_5939_; 
v___x_5937_ = ((size_t)0ULL);
v___x_5938_ = lean_usize_of_nat(v___x_5904_);
lean_inc_ref(v_cache_5846_);
lean_inc_ref(v_scope_5848_);
lean_inc_ref(v_service_5847_);
v___x_5939_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_service_5847_, v_scope_5848_, v_cache_5846_, v_force_5849_, v_descrs_5845_, v___x_5937_, v___x_5938_, v___x_5932_, v___y_5850_);
v___y_5920_ = v___x_5939_;
goto v___jp_5919_;
}
}
v___jp_5908_:
{
lean_object* v___x_5910_; uint8_t v___x_5911_; 
v___x_5910_ = lean_array_get_size(v_infos_5909_);
v___x_5911_ = lean_nat_dec_lt(v___x_5905_, v___x_5910_);
if (v___x_5911_ == 0)
{
lean_dec_ref(v_infos_5909_);
v_a_5875_ = v___x_5907_;
goto v___jp_5874_;
}
else
{
uint8_t v___x_5912_; 
v___x_5912_ = lean_nat_dec_le(v___x_5910_, v___x_5910_);
if (v___x_5912_ == 0)
{
if (v___x_5911_ == 0)
{
lean_dec_ref(v_infos_5909_);
v_a_5875_ = v___x_5907_;
goto v___jp_5874_;
}
else
{
size_t v___x_5913_; size_t v___x_5914_; lean_object* v___x_5915_; 
v___x_5913_ = ((size_t)0ULL);
v___x_5914_ = lean_usize_of_nat(v___x_5910_);
v___x_5915_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0(v_infos_5909_, v___x_5913_, v___x_5914_, v___x_5907_, v___y_5850_);
lean_dec_ref(v_infos_5909_);
v___y_5894_ = v___x_5915_;
goto v___jp_5893_;
}
}
else
{
size_t v___x_5916_; size_t v___x_5917_; lean_object* v___x_5918_; 
v___x_5916_ = ((size_t)0ULL);
v___x_5917_ = lean_usize_of_nat(v___x_5910_);
v___x_5918_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0(v_infos_5909_, v___x_5916_, v___x_5917_, v___x_5907_, v___y_5850_);
lean_dec_ref(v_infos_5909_);
v___y_5894_ = v___x_5918_;
goto v___jp_5893_;
}
}
}
v___jp_5919_:
{
if (lean_obj_tag(v___y_5920_) == 0)
{
lean_object* v_a_5921_; lean_object* v_infos_5922_; 
v_a_5921_ = lean_ctor_get(v___y_5920_, 0);
lean_inc(v_a_5921_);
lean_dec_ref_known(v___y_5920_, 1);
v_infos_5922_ = lean_ctor_get(v_a_5921_, 0);
lean_inc_ref(v_infos_5922_);
lean_dec(v_a_5921_);
v_infos_5909_ = v_infos_5922_;
goto v___jp_5908_;
}
else
{
lean_object* v_a_5923_; lean_object* v___x_5925_; uint8_t v_isShared_5926_; uint8_t v_isSharedCheck_5930_; 
lean_dec_ref(v_scope_5848_);
lean_dec_ref(v_service_5847_);
lean_dec_ref(v_cache_5846_);
v_a_5923_ = lean_ctor_get(v___y_5920_, 0);
v_isSharedCheck_5930_ = !lean_is_exclusive(v___y_5920_);
if (v_isSharedCheck_5930_ == 0)
{
v___x_5925_ = v___y_5920_;
v_isShared_5926_ = v_isSharedCheck_5930_;
goto v_resetjp_5924_;
}
else
{
lean_inc(v_a_5923_);
lean_dec(v___y_5920_);
v___x_5925_ = lean_box(0);
v_isShared_5926_ = v_isSharedCheck_5930_;
goto v_resetjp_5924_;
}
v_resetjp_5924_:
{
lean_object* v___x_5928_; 
if (v_isShared_5926_ == 0)
{
v___x_5928_ = v___x_5925_;
goto v_reusejp_5927_;
}
else
{
lean_object* v_reuseFailAlloc_5929_; 
v_reuseFailAlloc_5929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5929_, 0, v_a_5923_);
v___x_5928_ = v_reuseFailAlloc_5929_;
goto v_reusejp_5927_;
}
v_reusejp_5927_:
{
return v___x_5928_;
}
}
}
}
}
else
{
lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; 
lean_dec_ref(v_scope_5848_);
lean_dec_ref(v_service_5847_);
lean_dec_ref(v_cache_5846_);
v___x_5940_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__1));
lean_inc_ref(v___y_5850_);
v___x_5941_ = lean_apply_2(v___y_5850_, v___x_5940_, lean_box(0));
v___x_5942_ = lean_box(0);
v___x_5943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5943_, 0, v___x_5942_);
return v___x_5943_;
}
v___jp_5852_:
{
lean_object* v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; 
v___x_5854_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_5855_ = l_System_FilePath_join(v_cache_5846_, v___x_5854_);
v___x_5856_ = l_IO_FS_createDirAll(v___x_5855_);
if (lean_obj_tag(v___x_5856_) == 0)
{
uint8_t v___x_5857_; lean_object* v___x_5858_; lean_object* v___x_5859_; lean_object* v___x_5860_; 
lean_dec_ref_known(v___x_5856_, 1);
v___x_5857_ = 0;
v___x_5858_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_5859_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_5859_, 0, v_scope_5848_);
lean_ctor_set(v___x_5859_, 1, v_a_5853_);
lean_ctor_set(v___x_5859_, 2, v___x_5858_);
lean_ctor_set_uint8(v___x_5859_, sizeof(void*)*3, v___x_5857_);
v___x_5860_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(v___x_5859_, v___y_5850_);
return v___x_5860_;
}
else
{
lean_object* v_a_5861_; lean_object* v___x_5863_; uint8_t v_isShared_5864_; uint8_t v_isSharedCheck_5873_; 
lean_dec_ref(v_a_5853_);
lean_dec_ref(v_scope_5848_);
v_a_5861_ = lean_ctor_get(v___x_5856_, 0);
v_isSharedCheck_5873_ = !lean_is_exclusive(v___x_5856_);
if (v_isSharedCheck_5873_ == 0)
{
v___x_5863_ = v___x_5856_;
v_isShared_5864_ = v_isSharedCheck_5873_;
goto v_resetjp_5862_;
}
else
{
lean_inc(v_a_5861_);
lean_dec(v___x_5856_);
v___x_5863_ = lean_box(0);
v_isShared_5864_ = v_isSharedCheck_5873_;
goto v_resetjp_5862_;
}
v_resetjp_5862_:
{
lean_object* v___x_5865_; uint8_t v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; lean_object* v___x_5869_; lean_object* v___x_5871_; 
v___x_5865_ = lean_io_error_to_string(v_a_5861_);
v___x_5866_ = 3;
v___x_5867_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5867_, 0, v___x_5865_);
lean_ctor_set_uint8(v___x_5867_, sizeof(void*)*1, v___x_5866_);
lean_inc_ref(v___y_5850_);
v___x_5868_ = lean_apply_2(v___y_5850_, v___x_5867_, lean_box(0));
v___x_5869_ = lean_box(0);
if (v_isShared_5864_ == 0)
{
lean_ctor_set(v___x_5863_, 0, v___x_5869_);
v___x_5871_ = v___x_5863_;
goto v_reusejp_5870_;
}
else
{
lean_object* v_reuseFailAlloc_5872_; 
v_reuseFailAlloc_5872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5872_, 0, v___x_5869_);
v___x_5871_ = v_reuseFailAlloc_5872_;
goto v_reusejp_5870_;
}
v_reusejp_5870_:
{
return v___x_5871_;
}
}
}
}
v___jp_5874_:
{
lean_object* v___x_5876_; lean_object* v___x_5877_; uint8_t v___x_5878_; 
v___x_5876_ = lean_array_get_size(v_a_5875_);
v___x_5877_ = lean_unsigned_to_nat(0u);
v___x_5878_ = lean_nat_dec_eq(v___x_5876_, v___x_5877_);
if (v___x_5878_ == 0)
{
uint8_t v_isReservoir_5879_; 
v_isReservoir_5879_ = lean_ctor_get_uint8(v_service_5847_, sizeof(void*)*5);
if (v_isReservoir_5879_ == 0)
{
lean_dec_ref(v_service_5847_);
v_a_5853_ = v_a_5875_;
goto v___jp_5852_;
}
else
{
lean_object* v___x_5880_; lean_object* v___x_5881_; 
lean_inc_ref(v_scope_5848_);
v___x_5880_ = l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl(v_service_5847_, v_scope_5848_);
v___x_5881_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls(v___x_5880_, v_a_5875_, v___y_5850_);
if (lean_obj_tag(v___x_5881_) == 0)
{
lean_object* v_a_5882_; 
v_a_5882_ = lean_ctor_get(v___x_5881_, 0);
lean_inc(v_a_5882_);
lean_dec_ref_known(v___x_5881_, 1);
v_a_5853_ = v_a_5882_;
goto v___jp_5852_;
}
else
{
lean_object* v_a_5883_; lean_object* v___x_5885_; uint8_t v_isShared_5886_; uint8_t v_isSharedCheck_5890_; 
lean_dec_ref(v_scope_5848_);
lean_dec_ref(v_cache_5846_);
v_a_5883_ = lean_ctor_get(v___x_5881_, 0);
v_isSharedCheck_5890_ = !lean_is_exclusive(v___x_5881_);
if (v_isSharedCheck_5890_ == 0)
{
v___x_5885_ = v___x_5881_;
v_isShared_5886_ = v_isSharedCheck_5890_;
goto v_resetjp_5884_;
}
else
{
lean_inc(v_a_5883_);
lean_dec(v___x_5881_);
v___x_5885_ = lean_box(0);
v_isShared_5886_ = v_isSharedCheck_5890_;
goto v_resetjp_5884_;
}
v_resetjp_5884_:
{
lean_object* v___x_5888_; 
if (v_isShared_5886_ == 0)
{
v___x_5888_ = v___x_5885_;
goto v_reusejp_5887_;
}
else
{
lean_object* v_reuseFailAlloc_5889_; 
v_reuseFailAlloc_5889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5889_, 0, v_a_5883_);
v___x_5888_ = v_reuseFailAlloc_5889_;
goto v_reusejp_5887_;
}
v_reusejp_5887_:
{
return v___x_5888_;
}
}
}
}
}
else
{
lean_object* v___x_5891_; lean_object* v___x_5892_; 
lean_dec_ref(v_a_5875_);
lean_dec_ref(v_scope_5848_);
lean_dec_ref(v_service_5847_);
lean_dec_ref(v_cache_5846_);
v___x_5891_ = lean_box(0);
v___x_5892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5892_, 0, v___x_5891_);
return v___x_5892_;
}
}
v___jp_5893_:
{
if (lean_obj_tag(v___y_5894_) == 0)
{
lean_object* v_a_5895_; 
v_a_5895_ = lean_ctor_get(v___y_5894_, 0);
lean_inc(v_a_5895_);
lean_dec_ref_known(v___y_5894_, 1);
v_a_5875_ = v_a_5895_;
goto v___jp_5874_;
}
else
{
lean_object* v_a_5896_; lean_object* v___x_5898_; uint8_t v_isShared_5899_; uint8_t v_isSharedCheck_5903_; 
lean_dec_ref(v_scope_5848_);
lean_dec_ref(v_service_5847_);
lean_dec_ref(v_cache_5846_);
v_a_5896_ = lean_ctor_get(v___y_5894_, 0);
v_isSharedCheck_5903_ = !lean_is_exclusive(v___y_5894_);
if (v_isSharedCheck_5903_ == 0)
{
v___x_5898_ = v___y_5894_;
v_isShared_5899_ = v_isSharedCheck_5903_;
goto v_resetjp_5897_;
}
else
{
lean_inc(v_a_5896_);
lean_dec(v___y_5894_);
v___x_5898_ = lean_box(0);
v_isShared_5899_ = v_isSharedCheck_5903_;
goto v_resetjp_5897_;
}
v_resetjp_5897_:
{
lean_object* v___x_5901_; 
if (v_isShared_5899_ == 0)
{
v___x_5901_ = v___x_5898_;
goto v_reusejp_5900_;
}
else
{
lean_object* v_reuseFailAlloc_5902_; 
v_reuseFailAlloc_5902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5902_, 0, v_a_5896_);
v___x_5901_ = v_reuseFailAlloc_5902_;
goto v_reusejp_5900_;
}
v_reusejp_5900_:
{
return v___x_5901_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___boxed(lean_object* v_descrs_5944_, lean_object* v_cache_5945_, lean_object* v_service_5946_, lean_object* v_scope_5947_, lean_object* v_force_5948_, lean_object* v___y_5949_, lean_object* v___y_5950_){
_start:
{
uint8_t v_force_boxed_5951_; lean_object* v_res_5952_; 
v_force_boxed_5951_ = lean_unbox(v_force_5948_);
v_res_5952_ = l_Lake_CacheService_downloadArtifacts(v_descrs_5944_, v_cache_5945_, v_service_5946_, v_scope_5947_, v_force_boxed_5951_, v___y_5949_);
lean_dec_ref(v___y_5949_);
lean_dec_ref(v_descrs_5944_);
return v_res_5952_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts(lean_object* v_map_5953_, lean_object* v_cache_5954_, lean_object* v_service_5955_, lean_object* v_localScope_5956_, lean_object* v_remoteScope_5957_, uint8_t v_force_5958_, lean_object* v___y_5959_){
_start:
{
lean_object* v_name_x3f_5961_; lean_object* v___x_5962_; uint8_t v___x_5963_; lean_object* v___x_5964_; 
v_name_x3f_5961_ = lean_ctor_get(v_service_5955_, 0);
lean_inc_ref(v_remoteScope_5957_);
v___x_5962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5962_, 0, v_remoteScope_5957_);
v___x_5963_ = 1;
lean_inc(v_name_x3f_5961_);
lean_inc_ref(v_cache_5954_);
v___x_5964_ = l_Lake_Cache_writeMap(v_cache_5954_, v_localScope_5956_, v_map_5953_, v_name_x3f_5961_, v___x_5962_, v___x_5963_);
if (lean_obj_tag(v___x_5964_) == 0)
{
lean_object* v___x_5966_; uint8_t v_isShared_5967_; uint8_t v_isSharedCheck_6000_; 
v_isSharedCheck_6000_ = !lean_is_exclusive(v___x_5964_);
if (v_isSharedCheck_6000_ == 0)
{
lean_object* v_unused_6001_; 
v_unused_6001_ = lean_ctor_get(v___x_5964_, 0);
lean_dec(v_unused_6001_);
v___x_5966_ = v___x_5964_;
v_isShared_5967_ = v_isSharedCheck_6000_;
goto v_resetjp_5965_;
}
else
{
lean_dec(v___x_5964_);
v___x_5966_ = lean_box(0);
v_isShared_5967_ = v_isSharedCheck_6000_;
goto v_resetjp_5965_;
}
v_resetjp_5965_:
{
lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; 
v___x_5968_ = lean_unsigned_to_nat(0u);
v___x_5969_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5970_ = l_Lake_CacheMap_collectOutputDescrs(v_map_5953_, v___x_5969_);
if (lean_obj_tag(v___x_5970_) == 0)
{
lean_object* v_a_5971_; lean_object* v_a_5972_; lean_object* v___x_5973_; uint8_t v___x_5974_; 
lean_del_object(v___x_5966_);
v_a_5971_ = lean_ctor_get(v___x_5970_, 0);
lean_inc(v_a_5971_);
v_a_5972_ = lean_ctor_get(v___x_5970_, 1);
lean_inc(v_a_5972_);
lean_dec_ref_known(v___x_5970_, 2);
v___x_5973_ = lean_array_get_size(v_a_5972_);
v___x_5974_ = lean_nat_dec_lt(v___x_5968_, v___x_5973_);
if (v___x_5974_ == 0)
{
lean_object* v___x_5975_; 
lean_dec(v_a_5972_);
v___x_5975_ = l_Lake_CacheService_downloadArtifacts(v_a_5971_, v_cache_5954_, v_service_5955_, v_remoteScope_5957_, v_force_5958_, v___y_5959_);
lean_dec(v_a_5971_);
return v___x_5975_;
}
else
{
lean_object* v___x_5976_; size_t v___x_5977_; size_t v___x_5978_; lean_object* v___x_5979_; 
v___x_5976_ = lean_box(0);
v___x_5977_ = ((size_t)0ULL);
v___x_5978_ = lean_usize_of_nat(v___x_5973_);
v___x_5979_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5972_, v___x_5977_, v___x_5978_, v___x_5976_, v___y_5959_);
lean_dec(v_a_5972_);
if (lean_obj_tag(v___x_5979_) == 0)
{
lean_object* v___x_5980_; 
lean_dec_ref_known(v___x_5979_, 1);
v___x_5980_ = l_Lake_CacheService_downloadArtifacts(v_a_5971_, v_cache_5954_, v_service_5955_, v_remoteScope_5957_, v_force_5958_, v___y_5959_);
lean_dec(v_a_5971_);
return v___x_5980_;
}
else
{
lean_dec(v_a_5971_);
lean_dec_ref(v_remoteScope_5957_);
lean_dec_ref(v_service_5955_);
lean_dec_ref(v_cache_5954_);
return v___x_5979_;
}
}
}
else
{
lean_object* v_a_5981_; lean_object* v___x_5982_; uint8_t v___x_5983_; 
lean_dec_ref(v_remoteScope_5957_);
lean_dec_ref(v_service_5955_);
lean_dec_ref(v_cache_5954_);
v_a_5981_ = lean_ctor_get(v___x_5970_, 1);
lean_inc(v_a_5981_);
lean_dec_ref_known(v___x_5970_, 2);
v___x_5982_ = lean_array_get_size(v_a_5981_);
v___x_5983_ = lean_nat_dec_lt(v___x_5968_, v___x_5982_);
if (v___x_5983_ == 0)
{
lean_object* v___x_5984_; lean_object* v___x_5986_; 
lean_dec(v_a_5981_);
v___x_5984_ = lean_box(0);
if (v_isShared_5967_ == 0)
{
lean_ctor_set_tag(v___x_5966_, 1);
lean_ctor_set(v___x_5966_, 0, v___x_5984_);
v___x_5986_ = v___x_5966_;
goto v_reusejp_5985_;
}
else
{
lean_object* v_reuseFailAlloc_5987_; 
v_reuseFailAlloc_5987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5987_, 0, v___x_5984_);
v___x_5986_ = v_reuseFailAlloc_5987_;
goto v_reusejp_5985_;
}
v_reusejp_5985_:
{
return v___x_5986_;
}
}
else
{
lean_object* v___x_5988_; size_t v___x_5989_; size_t v___x_5990_; lean_object* v___x_5991_; 
lean_del_object(v___x_5966_);
v___x_5988_ = lean_box(0);
v___x_5989_ = ((size_t)0ULL);
v___x_5990_ = lean_usize_of_nat(v___x_5982_);
v___x_5991_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5981_, v___x_5989_, v___x_5990_, v___x_5988_, v___y_5959_);
lean_dec(v_a_5981_);
if (lean_obj_tag(v___x_5991_) == 0)
{
lean_object* v___x_5993_; uint8_t v_isShared_5994_; uint8_t v_isSharedCheck_5998_; 
v_isSharedCheck_5998_ = !lean_is_exclusive(v___x_5991_);
if (v_isSharedCheck_5998_ == 0)
{
lean_object* v_unused_5999_; 
v_unused_5999_ = lean_ctor_get(v___x_5991_, 0);
lean_dec(v_unused_5999_);
v___x_5993_ = v___x_5991_;
v_isShared_5994_ = v_isSharedCheck_5998_;
goto v_resetjp_5992_;
}
else
{
lean_dec(v___x_5991_);
v___x_5993_ = lean_box(0);
v_isShared_5994_ = v_isSharedCheck_5998_;
goto v_resetjp_5992_;
}
v_resetjp_5992_:
{
lean_object* v___x_5996_; 
if (v_isShared_5994_ == 0)
{
lean_ctor_set_tag(v___x_5993_, 1);
lean_ctor_set(v___x_5993_, 0, v___x_5988_);
v___x_5996_ = v___x_5993_;
goto v_reusejp_5995_;
}
else
{
lean_object* v_reuseFailAlloc_5997_; 
v_reuseFailAlloc_5997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5997_, 0, v___x_5988_);
v___x_5996_ = v_reuseFailAlloc_5997_;
goto v_reusejp_5995_;
}
v_reusejp_5995_:
{
return v___x_5996_;
}
}
}
else
{
return v___x_5991_;
}
}
}
}
}
else
{
lean_object* v_a_6002_; lean_object* v___x_6004_; uint8_t v_isShared_6005_; uint8_t v_isSharedCheck_6014_; 
lean_dec_ref(v_remoteScope_5957_);
lean_dec_ref(v_service_5955_);
lean_dec_ref(v_cache_5954_);
lean_dec_ref(v_map_5953_);
v_a_6002_ = lean_ctor_get(v___x_5964_, 0);
v_isSharedCheck_6014_ = !lean_is_exclusive(v___x_5964_);
if (v_isSharedCheck_6014_ == 0)
{
v___x_6004_ = v___x_5964_;
v_isShared_6005_ = v_isSharedCheck_6014_;
goto v_resetjp_6003_;
}
else
{
lean_inc(v_a_6002_);
lean_dec(v___x_5964_);
v___x_6004_ = lean_box(0);
v_isShared_6005_ = v_isSharedCheck_6014_;
goto v_resetjp_6003_;
}
v_resetjp_6003_:
{
lean_object* v___x_6006_; uint8_t v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6012_; 
v___x_6006_ = lean_io_error_to_string(v_a_6002_);
v___x_6007_ = 3;
v___x_6008_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6008_, 0, v___x_6006_);
lean_ctor_set_uint8(v___x_6008_, sizeof(void*)*1, v___x_6007_);
lean_inc_ref(v___y_5959_);
v___x_6009_ = lean_apply_2(v___y_5959_, v___x_6008_, lean_box(0));
v___x_6010_ = lean_box(0);
if (v_isShared_6005_ == 0)
{
lean_ctor_set(v___x_6004_, 0, v___x_6010_);
v___x_6012_ = v___x_6004_;
goto v_reusejp_6011_;
}
else
{
lean_object* v_reuseFailAlloc_6013_; 
v_reuseFailAlloc_6013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6013_, 0, v___x_6010_);
v___x_6012_ = v_reuseFailAlloc_6013_;
goto v_reusejp_6011_;
}
v_reusejp_6011_:
{
return v___x_6012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts___boxed(lean_object* v_map_6015_, lean_object* v_cache_6016_, lean_object* v_service_6017_, lean_object* v_localScope_6018_, lean_object* v_remoteScope_6019_, lean_object* v_force_6020_, lean_object* v___y_6021_, lean_object* v___y_6022_){
_start:
{
uint8_t v_force_boxed_6023_; lean_object* v_res_6024_; 
v_force_boxed_6023_ = lean_unbox(v_force_6020_);
v_res_6024_ = l_Lake_CacheService_downloadOutputArtifacts(v_map_6015_, v_cache_6016_, v_service_6017_, v_localScope_6018_, v_remoteScope_6019_, v_force_boxed_6023_, v___y_6021_);
lean_dec_ref(v___y_6021_);
return v_res_6024_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(lean_object* v_m_6025_, uint64_t v_a_6026_){
_start:
{
lean_object* v_buckets_6027_; lean_object* v___x_6028_; uint64_t v___x_6029_; uint64_t v___x_6030_; uint64_t v_fold_6031_; uint64_t v___x_6032_; uint64_t v___x_6033_; uint64_t v___x_6034_; size_t v___x_6035_; size_t v___x_6036_; size_t v___x_6037_; size_t v___x_6038_; size_t v___x_6039_; lean_object* v___x_6040_; uint8_t v___x_6041_; 
v_buckets_6027_ = lean_ctor_get(v_m_6025_, 1);
v___x_6028_ = lean_array_get_size(v_buckets_6027_);
v___x_6029_ = 32ULL;
v___x_6030_ = lean_uint64_shift_right(v_a_6026_, v___x_6029_);
v_fold_6031_ = lean_uint64_xor(v_a_6026_, v___x_6030_);
v___x_6032_ = 16ULL;
v___x_6033_ = lean_uint64_shift_right(v_fold_6031_, v___x_6032_);
v___x_6034_ = lean_uint64_xor(v_fold_6031_, v___x_6033_);
v___x_6035_ = lean_uint64_to_usize(v___x_6034_);
v___x_6036_ = lean_usize_of_nat(v___x_6028_);
v___x_6037_ = ((size_t)1ULL);
v___x_6038_ = lean_usize_sub(v___x_6036_, v___x_6037_);
v___x_6039_ = lean_usize_land(v___x_6035_, v___x_6038_);
v___x_6040_ = lean_array_uget_borrowed(v_buckets_6027_, v___x_6039_);
v___x_6041_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(v_a_6026_, v___x_6040_);
return v___x_6041_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg___boxed(lean_object* v_m_6042_, lean_object* v_a_6043_){
_start:
{
uint64_t v_a_boxed_6044_; uint8_t v_res_6045_; lean_object* v_r_6046_; 
v_a_boxed_6044_ = lean_unbox_uint64(v_a_6043_);
lean_dec_ref(v_a_6043_);
v_res_6045_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_m_6042_, v_a_boxed_6044_);
lean_dec_ref(v_m_6042_);
v_r_6046_ = lean_box(v_res_6045_);
return v_r_6046_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(lean_object* v_descrs_6047_, lean_object* v_service_6048_, lean_object* v_scope_6049_, lean_object* v_paths_6050_, lean_object* v_n_6051_, lean_object* v_i_6052_, lean_object* v_a_6053_){
_start:
{
lean_object* v_zero_6055_; uint8_t v_isZero_6056_; 
v_zero_6055_ = lean_unsigned_to_nat(0u);
v_isZero_6056_ = lean_nat_dec_eq(v_i_6052_, v_zero_6055_);
if (v_isZero_6056_ == 1)
{
lean_object* v___x_6057_; 
lean_dec(v_i_6052_);
lean_dec_ref(v_scope_6049_);
lean_dec_ref(v_service_6048_);
v___x_6057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6057_, 0, v_a_6053_);
return v___x_6057_;
}
else
{
lean_object* v_one_6058_; lean_object* v_n_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; uint64_t v_hash_6063_; lean_object* v_infos_6064_; lean_object* v_indices_6065_; lean_object* v_url_6066_; uint8_t v___x_6067_; 
v_one_6058_ = lean_unsigned_to_nat(1u);
v_n_6059_ = lean_nat_sub(v_i_6052_, v_one_6058_);
lean_dec(v_i_6052_);
v___x_6060_ = lean_nat_sub(v_n_6051_, v_n_6059_);
v___x_6061_ = lean_nat_sub(v___x_6060_, v_one_6058_);
lean_dec(v___x_6060_);
v___x_6062_ = lean_array_fget_borrowed(v_descrs_6047_, v___x_6061_);
v_hash_6063_ = lean_ctor_get_uint64(v___x_6062_, sizeof(void*)*1);
v_infos_6064_ = lean_ctor_get(v_a_6053_, 0);
v_indices_6065_ = lean_ctor_get(v_a_6053_, 1);
lean_inc_ref(v_scope_6049_);
lean_inc_ref(v_service_6048_);
v_url_6066_ = l_Lake_CacheService_artifactUrl(v_hash_6063_, v_service_6048_, v_scope_6049_);
v___x_6067_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_indices_6065_, v_hash_6063_);
if (v___x_6067_ == 0)
{
lean_object* v___x_6069_; uint8_t v_isShared_6070_; uint8_t v_isSharedCheck_6081_; 
lean_inc_ref(v_indices_6065_);
lean_inc_ref(v_infos_6064_);
v_isSharedCheck_6081_ = !lean_is_exclusive(v_a_6053_);
if (v_isSharedCheck_6081_ == 0)
{
lean_object* v_unused_6082_; lean_object* v_unused_6083_; 
v_unused_6082_ = lean_ctor_get(v_a_6053_, 1);
lean_dec(v_unused_6082_);
v_unused_6083_ = lean_ctor_get(v_a_6053_, 0);
lean_dec(v_unused_6083_);
v___x_6069_ = v_a_6053_;
v_isShared_6070_ = v_isSharedCheck_6081_;
goto v_resetjp_6068_;
}
else
{
lean_dec(v_a_6053_);
v___x_6069_ = lean_box(0);
v_isShared_6070_ = v_isSharedCheck_6081_;
goto v_resetjp_6068_;
}
v_resetjp_6068_:
{
lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6078_; 
v___x_6071_ = lean_array_fget_borrowed(v_paths_6050_, v___x_6061_);
lean_dec(v___x_6061_);
v___x_6072_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc(v___x_6071_);
v___x_6073_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6073_, 0, v_url_6066_);
lean_ctor_set(v___x_6073_, 1, v___x_6071_);
lean_ctor_set(v___x_6073_, 2, v___x_6072_);
lean_ctor_set_uint64(v___x_6073_, sizeof(void*)*3, v_hash_6063_);
lean_inc_ref(v_infos_6064_);
v___x_6074_ = lean_array_push(v_infos_6064_, v___x_6073_);
v___x_6075_ = lean_array_get_size(v_infos_6064_);
lean_dec_ref(v_infos_6064_);
v___x_6076_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_6065_, v_hash_6063_, v___x_6075_);
if (v_isShared_6070_ == 0)
{
lean_ctor_set(v___x_6069_, 1, v___x_6076_);
lean_ctor_set(v___x_6069_, 0, v___x_6074_);
v___x_6078_ = v___x_6069_;
goto v_reusejp_6077_;
}
else
{
lean_object* v_reuseFailAlloc_6080_; 
v_reuseFailAlloc_6080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6080_, 0, v___x_6074_);
lean_ctor_set(v_reuseFailAlloc_6080_, 1, v___x_6076_);
v___x_6078_ = v_reuseFailAlloc_6080_;
goto v_reusejp_6077_;
}
v_reusejp_6077_:
{
v_i_6052_ = v_n_6059_;
v_a_6053_ = v___x_6078_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_url_6066_);
lean_dec(v___x_6061_);
v_i_6052_ = v_n_6059_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg___boxed(lean_object* v_descrs_6085_, lean_object* v_service_6086_, lean_object* v_scope_6087_, lean_object* v_paths_6088_, lean_object* v_n_6089_, lean_object* v_i_6090_, lean_object* v_a_6091_, lean_object* v___y_6092_){
_start:
{
lean_object* v_res_6093_; 
v_res_6093_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_6085_, v_service_6086_, v_scope_6087_, v_paths_6088_, v_n_6089_, v_i_6090_, v_a_6091_);
lean_dec(v_n_6089_);
lean_dec_ref(v_paths_6088_);
lean_dec_ref(v_descrs_6085_);
return v_res_6093_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts(lean_object* v_n_6098_, lean_object* v_descrs_6099_, lean_object* v_paths_6100_, lean_object* v_service_6101_, lean_object* v_scope_6102_, lean_object* v___y_6103_){
_start:
{
lean_object* v___x_6105_; uint8_t v___x_6106_; 
v___x_6105_ = lean_unsigned_to_nat(0u);
v___x_6106_ = lean_nat_dec_eq(v_n_6098_, v___x_6105_);
if (v___x_6106_ == 0)
{
lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v_a_6109_; lean_object* v_infos_6110_; lean_object* v_key_6111_; uint8_t v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; 
v___x_6107_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1);
lean_inc(v_n_6098_);
lean_inc_ref(v_scope_6102_);
lean_inc_ref(v_service_6101_);
v___x_6108_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_6099_, v_service_6101_, v_scope_6102_, v_paths_6100_, v_n_6098_, v_n_6098_, v___x_6107_);
lean_dec(v_n_6098_);
v_a_6109_ = lean_ctor_get(v___x_6108_, 0);
lean_inc(v_a_6109_);
lean_dec_ref(v___x_6108_);
v_infos_6110_ = lean_ctor_get(v_a_6109_, 0);
lean_inc_ref(v_infos_6110_);
lean_dec(v_a_6109_);
v_key_6111_ = lean_ctor_get(v_service_6101_, 1);
lean_inc_ref(v_key_6111_);
lean_dec_ref(v_service_6101_);
v___x_6112_ = 1;
v___x_6113_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_6113_, 0, v_scope_6102_);
lean_ctor_set(v___x_6113_, 1, v_infos_6110_);
lean_ctor_set(v___x_6113_, 2, v_key_6111_);
lean_ctor_set_uint8(v___x_6113_, sizeof(void*)*3, v___x_6112_);
v___x_6114_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(v___x_6113_, v___y_6103_);
return v___x_6114_;
}
else
{
lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; 
lean_dec_ref(v_scope_6102_);
lean_dec_ref(v_service_6101_);
lean_dec(v_n_6098_);
v___x_6115_ = ((lean_object*)(l_Lake_CacheService_uploadArtifacts___closed__1));
lean_inc_ref(v___y_6103_);
v___x_6116_ = lean_apply_2(v___y_6103_, v___x_6115_, lean_box(0));
v___x_6117_ = lean_box(0);
v___x_6118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6118_, 0, v___x_6117_);
return v___x_6118_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___boxed(lean_object* v_n_6119_, lean_object* v_descrs_6120_, lean_object* v_paths_6121_, lean_object* v_service_6122_, lean_object* v_scope_6123_, lean_object* v___y_6124_, lean_object* v___y_6125_){
_start:
{
lean_object* v_res_6126_; 
v_res_6126_ = l_Lake_CacheService_uploadArtifacts(v_n_6119_, v_descrs_6120_, v_paths_6121_, v_service_6122_, v_scope_6123_, v___y_6124_);
lean_dec_ref(v___y_6124_);
lean_dec_ref(v_paths_6121_);
lean_dec_ref(v_descrs_6120_);
return v_res_6126_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0(lean_object* v_00_u03b2_6127_, lean_object* v_m_6128_, uint64_t v_a_6129_){
_start:
{
uint8_t v___x_6130_; 
v___x_6130_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_m_6128_, v_a_6129_);
return v___x_6130_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___boxed(lean_object* v_00_u03b2_6131_, lean_object* v_m_6132_, lean_object* v_a_6133_){
_start:
{
uint64_t v_a_boxed_6134_; uint8_t v_res_6135_; lean_object* v_r_6136_; 
v_a_boxed_6134_ = lean_unbox_uint64(v_a_6133_);
lean_dec_ref(v_a_6133_);
v_res_6135_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0(v_00_u03b2_6131_, v_m_6132_, v_a_boxed_6134_);
lean_dec_ref(v_m_6132_);
v_r_6136_ = lean_box(v_res_6135_);
return v_r_6136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1(lean_object* v_descrs_6137_, lean_object* v_service_6138_, lean_object* v_scope_6139_, lean_object* v_paths_6140_, lean_object* v_n_6141_, lean_object* v_i_6142_, lean_object* v_a_6143_, lean_object* v_a_6144_, lean_object* v___y_6145_){
_start:
{
lean_object* v___x_6147_; 
v___x_6147_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_6137_, v_service_6138_, v_scope_6139_, v_paths_6140_, v_n_6141_, v_i_6142_, v_a_6144_);
return v___x_6147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___boxed(lean_object* v_descrs_6148_, lean_object* v_service_6149_, lean_object* v_scope_6150_, lean_object* v_paths_6151_, lean_object* v_n_6152_, lean_object* v_i_6153_, lean_object* v_a_6154_, lean_object* v_a_6155_, lean_object* v___y_6156_, lean_object* v___y_6157_){
_start:
{
lean_object* v_res_6158_; 
v_res_6158_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1(v_descrs_6148_, v_service_6149_, v_scope_6150_, v_paths_6151_, v_n_6152_, v_i_6153_, v_a_6154_, v_a_6155_, v___y_6156_);
lean_dec_ref(v___y_6156_);
lean_dec(v_n_6152_);
lean_dec_ref(v_paths_6151_);
lean_dec_ref(v_descrs_6148_);
return v_res_6158_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(lean_object* v_rev_6163_, lean_object* v_service_6164_, lean_object* v_scope_6165_, lean_object* v_platform_6166_, lean_object* v_toolchain_6167_){
_start:
{
lean_object* v_url_6169_; lean_object* v_url_6176_; 
if (lean_obj_tag(v_scope_6165_) == 0)
{
lean_object* v_s_6185_; lean_object* v_revisionEndpoint_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; 
v_s_6185_ = lean_ctor_get(v_scope_6165_, 0);
lean_inc_ref(v_s_6185_);
lean_dec_ref_known(v_scope_6165_, 1);
v_revisionEndpoint_6186_ = lean_ctor_get(v_service_6164_, 3);
lean_inc_ref(v_revisionEndpoint_6186_);
lean_dec_ref(v_service_6164_);
v___x_6187_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_revisionEndpoint_6186_, v_s_6185_);
v___x_6188_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_6189_ = lean_string_append(v___x_6188_, v_rev_6163_);
v___x_6190_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_6191_ = lean_string_append(v___x_6189_, v___x_6190_);
v___x_6192_ = lean_string_append(v___x_6187_, v___x_6191_);
lean_dec_ref(v___x_6191_);
return v___x_6192_;
}
else
{
lean_object* v_s_6193_; lean_object* v_revisionEndpoint_6194_; lean_object* v_url_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; uint8_t v___x_6198_; 
v_s_6193_ = lean_ctor_get(v_scope_6165_, 0);
lean_inc_ref(v_s_6193_);
lean_dec_ref_known(v_scope_6165_, 1);
v_revisionEndpoint_6194_ = lean_ctor_get(v_service_6164_, 3);
lean_inc_ref(v_revisionEndpoint_6194_);
lean_dec_ref(v_service_6164_);
v_url_6195_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_revisionEndpoint_6194_, v_s_6193_);
v___x_6196_ = lean_string_utf8_byte_size(v_platform_6166_);
v___x_6197_ = lean_unsigned_to_nat(0u);
v___x_6198_ = lean_nat_dec_eq(v___x_6196_, v___x_6197_);
if (v___x_6198_ == 0)
{
lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v_url_6201_; 
v___x_6199_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1));
v___x_6200_ = lean_string_append(v_url_6195_, v___x_6199_);
v_url_6201_ = l_Lake_uriEncode(v_platform_6166_, v___x_6200_);
v_url_6176_ = v_url_6201_;
goto v___jp_6175_;
}
else
{
v_url_6176_ = v_url_6195_;
goto v___jp_6175_;
}
}
v___jp_6168_:
{
lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; 
v___x_6170_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_6171_ = lean_string_append(v_url_6169_, v___x_6170_);
v___x_6172_ = lean_string_append(v___x_6171_, v_rev_6163_);
v___x_6173_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_6174_ = lean_string_append(v___x_6172_, v___x_6173_);
return v___x_6174_;
}
v___jp_6175_:
{
lean_object* v___x_6177_; lean_object* v___x_6178_; uint8_t v___x_6179_; 
v___x_6177_ = lean_string_utf8_byte_size(v_toolchain_6167_);
v___x_6178_ = lean_unsigned_to_nat(0u);
v___x_6179_ = lean_nat_dec_eq(v___x_6177_, v___x_6178_);
if (v___x_6179_ == 0)
{
lean_object* v___x_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v_url_6184_; 
v___x_6180_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_6181_ = l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(v_toolchain_6167_, v___x_6180_, v___x_6178_);
v___x_6182_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0));
v___x_6183_ = lean_string_append(v_url_6176_, v___x_6182_);
v_url_6184_ = l_Lake_uriEncode(v___x_6181_, v___x_6183_);
lean_dec_ref(v___x_6181_);
v_url_6169_ = v_url_6184_;
goto v___jp_6168_;
}
else
{
v_url_6169_ = v_url_6176_;
goto v___jp_6168_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___boxed(lean_object* v_rev_6202_, lean_object* v_service_6203_, lean_object* v_scope_6204_, lean_object* v_platform_6205_, lean_object* v_toolchain_6206_){
_start:
{
lean_object* v_res_6207_; 
v_res_6207_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_6202_, v_service_6203_, v_scope_6204_, v_platform_6205_, v_toolchain_6206_);
lean_dec_ref(v_toolchain_6206_);
lean_dec_ref(v_platform_6205_);
lean_dec_ref(v_rev_6202_);
return v_res_6207_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl(lean_object* v_rev_6211_, lean_object* v_service_6212_, lean_object* v_scope_6213_, lean_object* v_platform_6214_, lean_object* v_toolchain_6215_){
_start:
{
lean_object* v_url_6217_; lean_object* v___y_6225_; uint8_t v_isReservoir_6235_; 
v_isReservoir_6235_ = lean_ctor_get_uint8(v_service_6212_, sizeof(void*)*5);
if (v_isReservoir_6235_ == 0)
{
lean_object* v___x_6236_; 
v___x_6236_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_6211_, v_service_6212_, v_scope_6213_, v_platform_6214_, v_toolchain_6215_);
return v___x_6236_;
}
else
{
if (lean_obj_tag(v_scope_6213_) == 0)
{
lean_object* v_apiEndpoint_6237_; lean_object* v_s_6238_; lean_object* v___x_6239_; lean_object* v___x_6240_; lean_object* v___x_6241_; 
v_apiEndpoint_6237_ = lean_ctor_get(v_service_6212_, 4);
lean_inc_ref(v_apiEndpoint_6237_);
lean_dec_ref(v_service_6212_);
v_s_6238_ = lean_ctor_get(v_scope_6213_, 0);
lean_inc_ref(v_s_6238_);
lean_dec_ref_known(v_scope_6213_, 1);
v___x_6239_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_6240_ = lean_string_append(v_apiEndpoint_6237_, v___x_6239_);
v___x_6241_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_6240_, v_s_6238_);
v___y_6225_ = v___x_6241_;
goto v___jp_6224_;
}
else
{
lean_object* v_apiEndpoint_6242_; lean_object* v_s_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; 
v_apiEndpoint_6242_ = lean_ctor_get(v_service_6212_, 4);
lean_inc_ref(v_apiEndpoint_6242_);
lean_dec_ref(v_service_6212_);
v_s_6243_ = lean_ctor_get(v_scope_6213_, 0);
lean_inc_ref(v_s_6243_);
lean_dec_ref_known(v_scope_6213_, 1);
v___x_6244_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_6245_ = lean_string_append(v_apiEndpoint_6242_, v___x_6244_);
v___x_6246_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_6245_, v_s_6243_);
v___y_6225_ = v___x_6246_;
goto v___jp_6224_;
}
}
v___jp_6216_:
{
lean_object* v___x_6218_; lean_object* v___x_6219_; uint8_t v___x_6220_; 
v___x_6218_ = lean_string_utf8_byte_size(v_toolchain_6215_);
v___x_6219_ = lean_unsigned_to_nat(0u);
v___x_6220_ = lean_nat_dec_eq(v___x_6218_, v___x_6219_);
if (v___x_6220_ == 0)
{
lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v_url_6223_; 
v___x_6221_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__0));
v___x_6222_ = lean_string_append(v_url_6217_, v___x_6221_);
v_url_6223_ = l_Lake_uriEncode(v_toolchain_6215_, v___x_6222_);
return v_url_6223_;
}
else
{
return v_url_6217_;
}
}
v___jp_6224_:
{
lean_object* v___x_6226_; lean_object* v___x_6227_; lean_object* v_url_6228_; lean_object* v___x_6229_; lean_object* v___x_6230_; uint8_t v___x_6231_; 
v___x_6226_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__1));
v___x_6227_ = lean_string_append(v___y_6225_, v___x_6226_);
v_url_6228_ = lean_string_append(v___x_6227_, v_rev_6211_);
v___x_6229_ = lean_string_utf8_byte_size(v_platform_6214_);
v___x_6230_ = lean_unsigned_to_nat(0u);
v___x_6231_ = lean_nat_dec_eq(v___x_6229_, v___x_6230_);
if (v___x_6231_ == 0)
{
lean_object* v___x_6232_; lean_object* v___x_6233_; lean_object* v_url_6234_; 
v___x_6232_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__2));
v___x_6233_ = lean_string_append(v_url_6228_, v___x_6232_);
v_url_6234_ = l_Lake_uriEncode(v_platform_6214_, v___x_6233_);
v_url_6217_ = v_url_6234_;
goto v___jp_6216_;
}
else
{
v_url_6217_ = v_url_6228_;
goto v___jp_6216_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl___boxed(lean_object* v_rev_6247_, lean_object* v_service_6248_, lean_object* v_scope_6249_, lean_object* v_platform_6250_, lean_object* v_toolchain_6251_){
_start:
{
lean_object* v_res_6252_; 
v_res_6252_ = l_Lake_CacheService_revisionUrl(v_rev_6247_, v_service_6248_, v_scope_6249_, v_platform_6250_, v_toolchain_6251_);
lean_dec_ref(v_toolchain_6251_);
lean_dec_ref(v_platform_6250_);
lean_dec_ref(v_rev_6247_);
return v_res_6252_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f(lean_object* v_rev_6257_, lean_object* v_cache_6258_, lean_object* v_service_6259_, lean_object* v_localScope_6260_, lean_object* v_remoteScope_6261_, lean_object* v_platform_6262_, lean_object* v_toolchain_6263_, uint8_t v_force_6264_, lean_object* v___y_6265_){
_start:
{
lean_object* v___y_6268_; lean_object* v___y_6269_; lean_object* v_a_6277_; lean_object* v_a_6280_; lean_object* v_a_6284_; lean_object* v___x_6287_; lean_object* v___x_6288_; lean_object* v___x_6289_; lean_object* v___x_6290_; lean_object* v___x_6291_; lean_object* v_path_6292_; lean_object* v_a_6294_; lean_object* v___y_6380_; lean_object* v___y_6381_; uint8_t v_a_6421_; lean_object* v___x_6468_; uint8_t v___x_6469_; uint8_t v___x_6470_; 
v___x_6287_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_6288_ = l_System_FilePath_join(v_cache_6258_, v___x_6287_);
lean_inc_ref(v_localScope_6260_);
v___x_6289_ = l_System_FilePath_join(v___x_6288_, v_localScope_6260_);
v___x_6290_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
lean_inc_ref(v_rev_6257_);
v___x_6291_ = lean_string_append(v_rev_6257_, v___x_6290_);
v_path_6292_ = l_System_FilePath_join(v___x_6289_, v___x_6291_);
v___x_6468_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6469_ = l_System_FilePath_pathExists(v_path_6292_);
v___x_6470_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_6470_ == 0)
{
v_a_6421_ = v___x_6469_;
goto v___jp_6420_;
}
else
{
lean_object* v___x_6471_; size_t v___x_6472_; size_t v___x_6473_; lean_object* v___x_6474_; 
v___x_6471_ = lean_box(0);
v___x_6472_ = ((size_t)0ULL);
v___x_6473_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_6474_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_6468_, v___x_6472_, v___x_6473_, v___x_6471_, v___y_6265_);
if (lean_obj_tag(v___x_6474_) == 0)
{
lean_dec_ref_known(v___x_6474_, 1);
v_a_6421_ = v___x_6469_;
goto v___jp_6420_;
}
else
{
lean_object* v_a_6475_; lean_object* v___x_6477_; uint8_t v_isShared_6478_; uint8_t v_isSharedCheck_6482_; 
lean_dec_ref(v_path_6292_);
lean_dec_ref(v_remoteScope_6261_);
lean_dec_ref(v_localScope_6260_);
lean_dec_ref(v_service_6259_);
lean_dec_ref(v_rev_6257_);
v_a_6475_ = lean_ctor_get(v___x_6474_, 0);
v_isSharedCheck_6482_ = !lean_is_exclusive(v___x_6474_);
if (v_isSharedCheck_6482_ == 0)
{
v___x_6477_ = v___x_6474_;
v_isShared_6478_ = v_isSharedCheck_6482_;
goto v_resetjp_6476_;
}
else
{
lean_inc(v_a_6475_);
lean_dec(v___x_6474_);
v___x_6477_ = lean_box(0);
v_isShared_6478_ = v_isSharedCheck_6482_;
goto v_resetjp_6476_;
}
v_resetjp_6476_:
{
lean_object* v___x_6480_; 
if (v_isShared_6478_ == 0)
{
v___x_6480_ = v___x_6477_;
goto v_reusejp_6479_;
}
else
{
lean_object* v_reuseFailAlloc_6481_; 
v_reuseFailAlloc_6481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6481_, 0, v_a_6475_);
v___x_6480_ = v_reuseFailAlloc_6481_;
goto v_reusejp_6479_;
}
v_reusejp_6479_:
{
return v___x_6480_;
}
}
}
}
v___jp_6267_:
{
lean_object* v___x_6270_; lean_object* v___x_6271_; uint8_t v___x_6272_; lean_object* v___x_6273_; lean_object* v___x_6274_; lean_object* v___x_6275_; 
v___x_6270_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0));
v___x_6271_ = lean_string_append(v___y_6269_, v___x_6270_);
v___x_6272_ = 3;
v___x_6273_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6273_, 0, v___x_6271_);
lean_ctor_set_uint8(v___x_6273_, sizeof(void*)*1, v___x_6272_);
lean_inc_ref(v___y_6265_);
v___x_6274_ = lean_apply_2(v___y_6265_, v___x_6273_, lean_box(0));
v___x_6275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6275_, 0, v___y_6268_);
return v___x_6275_;
}
v___jp_6276_:
{
lean_object* v_s_6278_; 
v_s_6278_ = lean_ctor_get(v_remoteScope_6261_, 0);
lean_inc_ref(v_s_6278_);
lean_dec_ref(v_remoteScope_6261_);
v___y_6268_ = v_a_6277_;
v___y_6269_ = v_s_6278_;
goto v___jp_6267_;
}
v___jp_6279_:
{
lean_object* v___x_6281_; lean_object* v___x_6282_; 
v___x_6281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6281_, 0, v_a_6280_);
v___x_6282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6282_, 0, v___x_6281_);
return v___x_6282_;
}
v___jp_6283_:
{
lean_object* v___x_6285_; lean_object* v___x_6286_; 
v___x_6285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6285_, 0, v_a_6284_);
v___x_6286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6286_, 0, v___x_6285_);
return v___x_6286_;
}
v___jp_6293_:
{
if (lean_obj_tag(v_a_6294_) == 1)
{
lean_object* v_val_6295_; lean_object* v___x_6296_; 
v_val_6295_ = lean_ctor_get(v_a_6294_, 0);
lean_inc(v_val_6295_);
lean_dec_ref_known(v_a_6294_, 1);
lean_inc_ref(v_path_6292_);
v___x_6296_ = l_Lake_createParentDirs(v_path_6292_);
if (lean_obj_tag(v___x_6296_) == 0)
{
lean_object* v___x_6297_; 
lean_dec_ref_known(v___x_6296_, 1);
v___x_6297_ = l_IO_FS_writeFile(v_path_6292_, v_val_6295_);
lean_dec(v_val_6295_);
if (lean_obj_tag(v___x_6297_) == 0)
{
lean_object* v___x_6299_; uint8_t v_isShared_6300_; uint8_t v_isSharedCheck_6349_; 
v_isSharedCheck_6349_ = !lean_is_exclusive(v___x_6297_);
if (v_isSharedCheck_6349_ == 0)
{
lean_object* v_unused_6350_; 
v_unused_6350_ = lean_ctor_get(v___x_6297_, 0);
lean_dec(v_unused_6350_);
v___x_6299_ = v___x_6297_;
v_isShared_6300_ = v_isSharedCheck_6349_;
goto v_resetjp_6298_;
}
else
{
lean_dec(v___x_6297_);
v___x_6299_ = lean_box(0);
v_isShared_6300_ = v_isSharedCheck_6349_;
goto v_resetjp_6298_;
}
v_resetjp_6298_:
{
lean_object* v___x_6301_; lean_object* v___x_6302_; uint8_t v___x_6303_; lean_object* v___x_6304_; lean_object* v___x_6305_; 
v___x_6301_ = lean_string_utf8_byte_size(v_platform_6262_);
v___x_6302_ = lean_unsigned_to_nat(0u);
v___x_6303_ = lean_nat_dec_eq(v___x_6301_, v___x_6302_);
v___x_6304_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6305_ = l_Lake_CacheMap_load(v_path_6292_, v___x_6303_, v___x_6304_);
if (lean_obj_tag(v___x_6305_) == 0)
{
lean_object* v_a_6306_; lean_object* v_a_6307_; lean_object* v___x_6308_; uint8_t v___x_6309_; 
lean_del_object(v___x_6299_);
v_a_6306_ = lean_ctor_get(v___x_6305_, 0);
lean_inc(v_a_6306_);
v_a_6307_ = lean_ctor_get(v___x_6305_, 1);
lean_inc(v_a_6307_);
lean_dec_ref_known(v___x_6305_, 2);
v___x_6308_ = lean_array_get_size(v_a_6307_);
v___x_6309_ = lean_nat_dec_lt(v___x_6302_, v___x_6308_);
if (v___x_6309_ == 0)
{
lean_dec(v_a_6307_);
v_a_6280_ = v_a_6306_;
goto v___jp_6279_;
}
else
{
lean_object* v___x_6310_; size_t v___x_6311_; size_t v___x_6312_; lean_object* v___x_6313_; 
v___x_6310_ = lean_box(0);
v___x_6311_ = ((size_t)0ULL);
v___x_6312_ = lean_usize_of_nat(v___x_6308_);
v___x_6313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6307_, v___x_6311_, v___x_6312_, v___x_6310_, v___y_6265_);
lean_dec(v_a_6307_);
if (lean_obj_tag(v___x_6313_) == 0)
{
lean_dec_ref_known(v___x_6313_, 1);
v_a_6280_ = v_a_6306_;
goto v___jp_6279_;
}
else
{
lean_object* v_a_6314_; lean_object* v___x_6316_; uint8_t v_isShared_6317_; uint8_t v_isSharedCheck_6321_; 
lean_dec(v_a_6306_);
v_a_6314_ = lean_ctor_get(v___x_6313_, 0);
v_isSharedCheck_6321_ = !lean_is_exclusive(v___x_6313_);
if (v_isSharedCheck_6321_ == 0)
{
v___x_6316_ = v___x_6313_;
v_isShared_6317_ = v_isSharedCheck_6321_;
goto v_resetjp_6315_;
}
else
{
lean_inc(v_a_6314_);
lean_dec(v___x_6313_);
v___x_6316_ = lean_box(0);
v_isShared_6317_ = v_isSharedCheck_6321_;
goto v_resetjp_6315_;
}
v_resetjp_6315_:
{
lean_object* v___x_6319_; 
if (v_isShared_6317_ == 0)
{
v___x_6319_ = v___x_6316_;
goto v_reusejp_6318_;
}
else
{
lean_object* v_reuseFailAlloc_6320_; 
v_reuseFailAlloc_6320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6320_, 0, v_a_6314_);
v___x_6319_ = v_reuseFailAlloc_6320_;
goto v_reusejp_6318_;
}
v_reusejp_6318_:
{
return v___x_6319_;
}
}
}
}
}
else
{
lean_object* v_a_6322_; lean_object* v___x_6323_; uint8_t v___x_6324_; 
v_a_6322_ = lean_ctor_get(v___x_6305_, 1);
lean_inc(v_a_6322_);
lean_dec_ref_known(v___x_6305_, 2);
v___x_6323_ = lean_array_get_size(v_a_6322_);
v___x_6324_ = lean_nat_dec_lt(v___x_6302_, v___x_6323_);
if (v___x_6324_ == 0)
{
lean_object* v___x_6325_; lean_object* v___x_6327_; 
lean_dec(v_a_6322_);
v___x_6325_ = lean_box(0);
if (v_isShared_6300_ == 0)
{
lean_ctor_set_tag(v___x_6299_, 1);
lean_ctor_set(v___x_6299_, 0, v___x_6325_);
v___x_6327_ = v___x_6299_;
goto v_reusejp_6326_;
}
else
{
lean_object* v_reuseFailAlloc_6328_; 
v_reuseFailAlloc_6328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6328_, 0, v___x_6325_);
v___x_6327_ = v_reuseFailAlloc_6328_;
goto v_reusejp_6326_;
}
v_reusejp_6326_:
{
return v___x_6327_;
}
}
else
{
lean_object* v___x_6329_; size_t v___x_6330_; size_t v___x_6331_; lean_object* v___x_6332_; 
lean_del_object(v___x_6299_);
v___x_6329_ = lean_box(0);
v___x_6330_ = ((size_t)0ULL);
v___x_6331_ = lean_usize_of_nat(v___x_6323_);
v___x_6332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6322_, v___x_6330_, v___x_6331_, v___x_6329_, v___y_6265_);
lean_dec(v_a_6322_);
if (lean_obj_tag(v___x_6332_) == 0)
{
lean_object* v___x_6334_; uint8_t v_isShared_6335_; uint8_t v_isSharedCheck_6339_; 
v_isSharedCheck_6339_ = !lean_is_exclusive(v___x_6332_);
if (v_isSharedCheck_6339_ == 0)
{
lean_object* v_unused_6340_; 
v_unused_6340_ = lean_ctor_get(v___x_6332_, 0);
lean_dec(v_unused_6340_);
v___x_6334_ = v___x_6332_;
v_isShared_6335_ = v_isSharedCheck_6339_;
goto v_resetjp_6333_;
}
else
{
lean_dec(v___x_6332_);
v___x_6334_ = lean_box(0);
v_isShared_6335_ = v_isSharedCheck_6339_;
goto v_resetjp_6333_;
}
v_resetjp_6333_:
{
lean_object* v___x_6337_; 
if (v_isShared_6335_ == 0)
{
lean_ctor_set_tag(v___x_6334_, 1);
lean_ctor_set(v___x_6334_, 0, v___x_6329_);
v___x_6337_ = v___x_6334_;
goto v_reusejp_6336_;
}
else
{
lean_object* v_reuseFailAlloc_6338_; 
v_reuseFailAlloc_6338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6338_, 0, v___x_6329_);
v___x_6337_ = v_reuseFailAlloc_6338_;
goto v_reusejp_6336_;
}
v_reusejp_6336_:
{
return v___x_6337_;
}
}
}
else
{
lean_object* v_a_6341_; lean_object* v___x_6343_; uint8_t v_isShared_6344_; uint8_t v_isSharedCheck_6348_; 
v_a_6341_ = lean_ctor_get(v___x_6332_, 0);
v_isSharedCheck_6348_ = !lean_is_exclusive(v___x_6332_);
if (v_isSharedCheck_6348_ == 0)
{
v___x_6343_ = v___x_6332_;
v_isShared_6344_ = v_isSharedCheck_6348_;
goto v_resetjp_6342_;
}
else
{
lean_inc(v_a_6341_);
lean_dec(v___x_6332_);
v___x_6343_ = lean_box(0);
v_isShared_6344_ = v_isSharedCheck_6348_;
goto v_resetjp_6342_;
}
v_resetjp_6342_:
{
lean_object* v___x_6346_; 
if (v_isShared_6344_ == 0)
{
v___x_6346_ = v___x_6343_;
goto v_reusejp_6345_;
}
else
{
lean_object* v_reuseFailAlloc_6347_; 
v_reuseFailAlloc_6347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6347_, 0, v_a_6341_);
v___x_6346_ = v_reuseFailAlloc_6347_;
goto v_reusejp_6345_;
}
v_reusejp_6345_:
{
return v___x_6346_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6351_; lean_object* v___x_6353_; uint8_t v_isShared_6354_; uint8_t v_isSharedCheck_6363_; 
lean_dec_ref(v_path_6292_);
v_a_6351_ = lean_ctor_get(v___x_6297_, 0);
v_isSharedCheck_6363_ = !lean_is_exclusive(v___x_6297_);
if (v_isSharedCheck_6363_ == 0)
{
v___x_6353_ = v___x_6297_;
v_isShared_6354_ = v_isSharedCheck_6363_;
goto v_resetjp_6352_;
}
else
{
lean_inc(v_a_6351_);
lean_dec(v___x_6297_);
v___x_6353_ = lean_box(0);
v_isShared_6354_ = v_isSharedCheck_6363_;
goto v_resetjp_6352_;
}
v_resetjp_6352_:
{
lean_object* v___x_6355_; uint8_t v___x_6356_; lean_object* v___x_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; lean_object* v___x_6361_; 
v___x_6355_ = lean_io_error_to_string(v_a_6351_);
v___x_6356_ = 3;
v___x_6357_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6357_, 0, v___x_6355_);
lean_ctor_set_uint8(v___x_6357_, sizeof(void*)*1, v___x_6356_);
lean_inc_ref(v___y_6265_);
v___x_6358_ = lean_apply_2(v___y_6265_, v___x_6357_, lean_box(0));
v___x_6359_ = lean_box(0);
if (v_isShared_6354_ == 0)
{
lean_ctor_set(v___x_6353_, 0, v___x_6359_);
v___x_6361_ = v___x_6353_;
goto v_reusejp_6360_;
}
else
{
lean_object* v_reuseFailAlloc_6362_; 
v_reuseFailAlloc_6362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6362_, 0, v___x_6359_);
v___x_6361_ = v_reuseFailAlloc_6362_;
goto v_reusejp_6360_;
}
v_reusejp_6360_:
{
return v___x_6361_;
}
}
}
}
else
{
lean_object* v_a_6364_; lean_object* v___x_6366_; uint8_t v_isShared_6367_; uint8_t v_isSharedCheck_6376_; 
lean_dec(v_val_6295_);
lean_dec_ref(v_path_6292_);
v_a_6364_ = lean_ctor_get(v___x_6296_, 0);
v_isSharedCheck_6376_ = !lean_is_exclusive(v___x_6296_);
if (v_isSharedCheck_6376_ == 0)
{
v___x_6366_ = v___x_6296_;
v_isShared_6367_ = v_isSharedCheck_6376_;
goto v_resetjp_6365_;
}
else
{
lean_inc(v_a_6364_);
lean_dec(v___x_6296_);
v___x_6366_ = lean_box(0);
v_isShared_6367_ = v_isSharedCheck_6376_;
goto v_resetjp_6365_;
}
v_resetjp_6365_:
{
lean_object* v___x_6368_; uint8_t v___x_6369_; lean_object* v___x_6370_; lean_object* v___x_6371_; lean_object* v___x_6372_; lean_object* v___x_6374_; 
v___x_6368_ = lean_io_error_to_string(v_a_6364_);
v___x_6369_ = 3;
v___x_6370_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6370_, 0, v___x_6368_);
lean_ctor_set_uint8(v___x_6370_, sizeof(void*)*1, v___x_6369_);
lean_inc_ref(v___y_6265_);
v___x_6371_ = lean_apply_2(v___y_6265_, v___x_6370_, lean_box(0));
v___x_6372_ = lean_box(0);
if (v_isShared_6367_ == 0)
{
lean_ctor_set(v___x_6366_, 0, v___x_6372_);
v___x_6374_ = v___x_6366_;
goto v_reusejp_6373_;
}
else
{
lean_object* v_reuseFailAlloc_6375_; 
v_reuseFailAlloc_6375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6375_, 0, v___x_6372_);
v___x_6374_ = v_reuseFailAlloc_6375_;
goto v_reusejp_6373_;
}
v_reusejp_6373_:
{
return v___x_6374_;
}
}
}
}
else
{
lean_object* v___x_6377_; lean_object* v___x_6378_; 
lean_dec(v_a_6294_);
lean_dec_ref(v_path_6292_);
v___x_6377_ = lean_box(0);
v___x_6378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6378_, 0, v___x_6377_);
return v___x_6378_;
}
}
v___jp_6379_:
{
lean_object* v___x_6382_; lean_object* v___x_6383_; lean_object* v___x_6384_; 
v___x_6382_ = lean_unsigned_to_nat(0u);
v___x_6383_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6384_ = l_Lake_getUrl_x3f(v___y_6380_, v___y_6381_, v___x_6383_);
if (lean_obj_tag(v___x_6384_) == 0)
{
lean_object* v_a_6385_; lean_object* v_a_6386_; lean_object* v___x_6387_; uint8_t v___x_6388_; 
v_a_6385_ = lean_ctor_get(v___x_6384_, 0);
lean_inc(v_a_6385_);
v_a_6386_ = lean_ctor_get(v___x_6384_, 1);
lean_inc(v_a_6386_);
lean_dec_ref_known(v___x_6384_, 2);
v___x_6387_ = lean_array_get_size(v_a_6386_);
v___x_6388_ = lean_nat_dec_lt(v___x_6382_, v___x_6387_);
if (v___x_6388_ == 0)
{
lean_dec(v_a_6386_);
lean_dec_ref(v_remoteScope_6261_);
v_a_6294_ = v_a_6385_;
goto v___jp_6293_;
}
else
{
lean_object* v___x_6389_; size_t v___x_6390_; size_t v___x_6391_; lean_object* v___x_6392_; 
v___x_6389_ = lean_box(0);
v___x_6390_ = ((size_t)0ULL);
v___x_6391_ = lean_usize_of_nat(v___x_6387_);
v___x_6392_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6386_, v___x_6390_, v___x_6391_, v___x_6389_, v___y_6265_);
lean_dec(v_a_6386_);
if (lean_obj_tag(v___x_6392_) == 0)
{
lean_dec_ref_known(v___x_6392_, 1);
lean_dec_ref(v_remoteScope_6261_);
v_a_6294_ = v_a_6385_;
goto v___jp_6293_;
}
else
{
lean_object* v_a_6393_; 
lean_dec(v_a_6385_);
lean_dec_ref(v_path_6292_);
v_a_6393_ = lean_ctor_get(v___x_6392_, 0);
lean_inc(v_a_6393_);
lean_dec_ref_known(v___x_6392_, 1);
v_a_6277_ = v_a_6393_;
goto v___jp_6276_;
}
}
}
else
{
lean_object* v_a_6394_; lean_object* v___x_6395_; uint8_t v___x_6396_; 
lean_dec_ref(v_path_6292_);
v_a_6394_ = lean_ctor_get(v___x_6384_, 1);
lean_inc(v_a_6394_);
lean_dec_ref_known(v___x_6384_, 2);
v___x_6395_ = lean_array_get_size(v_a_6394_);
v___x_6396_ = lean_nat_dec_lt(v___x_6382_, v___x_6395_);
if (v___x_6396_ == 0)
{
lean_object* v___x_6397_; 
lean_dec(v_a_6394_);
v___x_6397_ = lean_box(0);
v_a_6277_ = v___x_6397_;
goto v___jp_6276_;
}
else
{
lean_object* v___x_6398_; size_t v___x_6399_; size_t v___x_6400_; lean_object* v___x_6401_; 
v___x_6398_ = lean_box(0);
v___x_6399_ = ((size_t)0ULL);
v___x_6400_ = lean_usize_of_nat(v___x_6395_);
v___x_6401_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6394_, v___x_6399_, v___x_6400_, v___x_6398_, v___y_6265_);
lean_dec(v_a_6394_);
if (lean_obj_tag(v___x_6401_) == 0)
{
lean_dec_ref_known(v___x_6401_, 1);
v_a_6277_ = v___x_6398_;
goto v___jp_6276_;
}
else
{
lean_object* v_a_6402_; 
v_a_6402_ = lean_ctor_get(v___x_6401_, 0);
lean_inc(v_a_6402_);
lean_dec_ref_known(v___x_6401_, 1);
v_a_6277_ = v_a_6402_;
goto v___jp_6276_;
}
}
}
}
v___jp_6403_:
{
lean_object* v___x_6404_; lean_object* v___x_6405_; lean_object* v___x_6406_; lean_object* v___x_6407_; lean_object* v___x_6408_; lean_object* v___x_6409_; lean_object* v___x_6410_; lean_object* v___x_6411_; lean_object* v___x_6412_; lean_object* v___x_6413_; uint8_t v___x_6414_; lean_object* v___x_6415_; lean_object* v___x_6416_; uint8_t v_isReservoir_6417_; 
lean_inc_ref(v_remoteScope_6261_);
lean_inc_ref(v_service_6259_);
v___x_6404_ = l_Lake_CacheService_revisionUrl(v_rev_6257_, v_service_6259_, v_remoteScope_6261_, v_platform_6262_, v_toolchain_6263_);
v___x_6405_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1));
v___x_6406_ = lean_string_append(v_localScope_6260_, v___x_6405_);
v___x_6407_ = lean_string_append(v___x_6406_, v_rev_6257_);
lean_dec_ref(v_rev_6257_);
v___x_6408_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_6409_ = lean_string_append(v___x_6407_, v___x_6408_);
v___x_6410_ = lean_string_append(v___x_6409_, v_path_6292_);
v___x_6411_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_6412_ = lean_string_append(v___x_6410_, v___x_6411_);
v___x_6413_ = lean_string_append(v___x_6412_, v___x_6404_);
v___x_6414_ = 1;
v___x_6415_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6415_, 0, v___x_6413_);
lean_ctor_set_uint8(v___x_6415_, sizeof(void*)*1, v___x_6414_);
lean_inc_ref(v___y_6265_);
v___x_6416_ = lean_apply_2(v___y_6265_, v___x_6415_, lean_box(0));
v_isReservoir_6417_ = lean_ctor_get_uint8(v_service_6259_, sizeof(void*)*5);
lean_dec_ref(v_service_6259_);
if (v_isReservoir_6417_ == 0)
{
lean_object* v___x_6418_; 
v___x_6418_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2));
v___y_6380_ = v___x_6404_;
v___y_6381_ = v___x_6418_;
goto v___jp_6379_;
}
else
{
lean_object* v___x_6419_; 
v___x_6419_ = l_Lake_Reservoir_lakeHeaders;
v___y_6380_ = v___x_6404_;
v___y_6381_ = v___x_6419_;
goto v___jp_6379_;
}
}
v___jp_6420_:
{
if (v_a_6421_ == 0)
{
goto v___jp_6403_;
}
else
{
if (v_force_6264_ == 0)
{
lean_object* v___x_6422_; lean_object* v___x_6423_; uint8_t v___x_6424_; lean_object* v___x_6425_; lean_object* v___x_6426_; 
lean_dec_ref(v_remoteScope_6261_);
lean_dec_ref(v_localScope_6260_);
lean_dec_ref(v_service_6259_);
lean_dec_ref(v_rev_6257_);
v___x_6422_ = lean_string_utf8_byte_size(v_platform_6262_);
v___x_6423_ = lean_unsigned_to_nat(0u);
v___x_6424_ = lean_nat_dec_eq(v___x_6422_, v___x_6423_);
v___x_6425_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6426_ = l_Lake_CacheMap_load(v_path_6292_, v___x_6424_, v___x_6425_);
if (lean_obj_tag(v___x_6426_) == 0)
{
lean_object* v_a_6427_; lean_object* v_a_6428_; lean_object* v___x_6429_; uint8_t v___x_6430_; 
v_a_6427_ = lean_ctor_get(v___x_6426_, 0);
lean_inc(v_a_6427_);
v_a_6428_ = lean_ctor_get(v___x_6426_, 1);
lean_inc(v_a_6428_);
lean_dec_ref_known(v___x_6426_, 2);
v___x_6429_ = lean_array_get_size(v_a_6428_);
v___x_6430_ = lean_nat_dec_lt(v___x_6423_, v___x_6429_);
if (v___x_6430_ == 0)
{
lean_dec(v_a_6428_);
v_a_6284_ = v_a_6427_;
goto v___jp_6283_;
}
else
{
lean_object* v___x_6431_; size_t v___x_6432_; size_t v___x_6433_; lean_object* v___x_6434_; 
v___x_6431_ = lean_box(0);
v___x_6432_ = ((size_t)0ULL);
v___x_6433_ = lean_usize_of_nat(v___x_6429_);
v___x_6434_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6428_, v___x_6432_, v___x_6433_, v___x_6431_, v___y_6265_);
lean_dec(v_a_6428_);
if (lean_obj_tag(v___x_6434_) == 0)
{
lean_dec_ref_known(v___x_6434_, 1);
v_a_6284_ = v_a_6427_;
goto v___jp_6283_;
}
else
{
lean_object* v_a_6435_; lean_object* v___x_6437_; uint8_t v_isShared_6438_; uint8_t v_isSharedCheck_6442_; 
lean_dec(v_a_6427_);
v_a_6435_ = lean_ctor_get(v___x_6434_, 0);
v_isSharedCheck_6442_ = !lean_is_exclusive(v___x_6434_);
if (v_isSharedCheck_6442_ == 0)
{
v___x_6437_ = v___x_6434_;
v_isShared_6438_ = v_isSharedCheck_6442_;
goto v_resetjp_6436_;
}
else
{
lean_inc(v_a_6435_);
lean_dec(v___x_6434_);
v___x_6437_ = lean_box(0);
v_isShared_6438_ = v_isSharedCheck_6442_;
goto v_resetjp_6436_;
}
v_resetjp_6436_:
{
lean_object* v___x_6440_; 
if (v_isShared_6438_ == 0)
{
v___x_6440_ = v___x_6437_;
goto v_reusejp_6439_;
}
else
{
lean_object* v_reuseFailAlloc_6441_; 
v_reuseFailAlloc_6441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6441_, 0, v_a_6435_);
v___x_6440_ = v_reuseFailAlloc_6441_;
goto v_reusejp_6439_;
}
v_reusejp_6439_:
{
return v___x_6440_;
}
}
}
}
}
else
{
lean_object* v_a_6443_; lean_object* v___x_6444_; uint8_t v___x_6445_; 
v_a_6443_ = lean_ctor_get(v___x_6426_, 1);
lean_inc(v_a_6443_);
lean_dec_ref_known(v___x_6426_, 2);
v___x_6444_ = lean_array_get_size(v_a_6443_);
v___x_6445_ = lean_nat_dec_lt(v___x_6423_, v___x_6444_);
if (v___x_6445_ == 0)
{
lean_object* v___x_6446_; lean_object* v___x_6447_; 
lean_dec(v_a_6443_);
v___x_6446_ = lean_box(0);
v___x_6447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6447_, 0, v___x_6446_);
return v___x_6447_;
}
else
{
lean_object* v___x_6448_; size_t v___x_6449_; size_t v___x_6450_; lean_object* v___x_6451_; 
v___x_6448_ = lean_box(0);
v___x_6449_ = ((size_t)0ULL);
v___x_6450_ = lean_usize_of_nat(v___x_6444_);
v___x_6451_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6443_, v___x_6449_, v___x_6450_, v___x_6448_, v___y_6265_);
lean_dec(v_a_6443_);
if (lean_obj_tag(v___x_6451_) == 0)
{
lean_object* v___x_6453_; uint8_t v_isShared_6454_; uint8_t v_isSharedCheck_6458_; 
v_isSharedCheck_6458_ = !lean_is_exclusive(v___x_6451_);
if (v_isSharedCheck_6458_ == 0)
{
lean_object* v_unused_6459_; 
v_unused_6459_ = lean_ctor_get(v___x_6451_, 0);
lean_dec(v_unused_6459_);
v___x_6453_ = v___x_6451_;
v_isShared_6454_ = v_isSharedCheck_6458_;
goto v_resetjp_6452_;
}
else
{
lean_dec(v___x_6451_);
v___x_6453_ = lean_box(0);
v_isShared_6454_ = v_isSharedCheck_6458_;
goto v_resetjp_6452_;
}
v_resetjp_6452_:
{
lean_object* v___x_6456_; 
if (v_isShared_6454_ == 0)
{
lean_ctor_set_tag(v___x_6453_, 1);
lean_ctor_set(v___x_6453_, 0, v___x_6448_);
v___x_6456_ = v___x_6453_;
goto v_reusejp_6455_;
}
else
{
lean_object* v_reuseFailAlloc_6457_; 
v_reuseFailAlloc_6457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6457_, 0, v___x_6448_);
v___x_6456_ = v_reuseFailAlloc_6457_;
goto v_reusejp_6455_;
}
v_reusejp_6455_:
{
return v___x_6456_;
}
}
}
else
{
lean_object* v_a_6460_; lean_object* v___x_6462_; uint8_t v_isShared_6463_; uint8_t v_isSharedCheck_6467_; 
v_a_6460_ = lean_ctor_get(v___x_6451_, 0);
v_isSharedCheck_6467_ = !lean_is_exclusive(v___x_6451_);
if (v_isSharedCheck_6467_ == 0)
{
v___x_6462_ = v___x_6451_;
v_isShared_6463_ = v_isSharedCheck_6467_;
goto v_resetjp_6461_;
}
else
{
lean_inc(v_a_6460_);
lean_dec(v___x_6451_);
v___x_6462_ = lean_box(0);
v_isShared_6463_ = v_isSharedCheck_6467_;
goto v_resetjp_6461_;
}
v_resetjp_6461_:
{
lean_object* v___x_6465_; 
if (v_isShared_6463_ == 0)
{
v___x_6465_ = v___x_6462_;
goto v_reusejp_6464_;
}
else
{
lean_object* v_reuseFailAlloc_6466_; 
v_reuseFailAlloc_6466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6466_, 0, v_a_6460_);
v___x_6465_ = v_reuseFailAlloc_6466_;
goto v_reusejp_6464_;
}
v_reusejp_6464_:
{
return v___x_6465_;
}
}
}
}
}
}
else
{
goto v___jp_6403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___boxed(lean_object* v_rev_6483_, lean_object* v_cache_6484_, lean_object* v_service_6485_, lean_object* v_localScope_6486_, lean_object* v_remoteScope_6487_, lean_object* v_platform_6488_, lean_object* v_toolchain_6489_, lean_object* v_force_6490_, lean_object* v___y_6491_, lean_object* v___y_6492_){
_start:
{
uint8_t v_force_boxed_6493_; lean_object* v_res_6494_; 
v_force_boxed_6493_ = lean_unbox(v_force_6490_);
v_res_6494_ = l_Lake_CacheService_downloadRevisionOutputs_x3f(v_rev_6483_, v_cache_6484_, v_service_6485_, v_localScope_6486_, v_remoteScope_6487_, v_platform_6488_, v_toolchain_6489_, v_force_boxed_6493_, v___y_6491_);
lean_dec_ref(v___y_6491_);
lean_dec_ref(v_toolchain_6489_);
lean_dec_ref(v_platform_6488_);
return v_res_6494_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs(lean_object* v_rev_6496_, lean_object* v_outputs_6497_, lean_object* v_service_6498_, lean_object* v_scope_6499_, lean_object* v_platform_6500_, lean_object* v_toolchain_6501_, lean_object* v___y_6502_){
_start:
{
lean_object* v_url_6504_; lean_object* v___y_6506_; lean_object* v_s_6522_; 
lean_inc_ref(v_scope_6499_);
lean_inc_ref(v_service_6498_);
v_url_6504_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_6496_, v_service_6498_, v_scope_6499_, v_platform_6500_, v_toolchain_6501_);
v_s_6522_ = lean_ctor_get(v_scope_6499_, 0);
lean_inc_ref(v_s_6522_);
lean_dec_ref(v_scope_6499_);
v___y_6506_ = v_s_6522_;
goto v___jp_6505_;
v___jp_6505_:
{
lean_object* v___x_6507_; lean_object* v___x_6508_; lean_object* v___x_6509_; lean_object* v___x_6510_; lean_object* v___x_6511_; lean_object* v___x_6512_; lean_object* v___x_6513_; lean_object* v___x_6514_; lean_object* v___x_6515_; uint8_t v___x_6516_; lean_object* v___x_6517_; lean_object* v___x_6518_; lean_object* v_key_6519_; lean_object* v___x_6520_; lean_object* v___x_6521_; 
v___x_6507_ = ((lean_object*)(l_Lake_CacheService_uploadRevisionOutputs___closed__0));
v___x_6508_ = lean_string_append(v___y_6506_, v___x_6507_);
v___x_6509_ = lean_string_append(v___x_6508_, v_rev_6496_);
v___x_6510_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_6511_ = lean_string_append(v___x_6509_, v___x_6510_);
v___x_6512_ = lean_string_append(v___x_6511_, v_outputs_6497_);
v___x_6513_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_6514_ = lean_string_append(v___x_6512_, v___x_6513_);
v___x_6515_ = lean_string_append(v___x_6514_, v_url_6504_);
v___x_6516_ = 1;
v___x_6517_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6517_, 0, v___x_6515_);
lean_ctor_set_uint8(v___x_6517_, sizeof(void*)*1, v___x_6516_);
lean_inc_ref(v___y_6502_);
v___x_6518_ = lean_apply_2(v___y_6502_, v___x_6517_, lean_box(0));
v_key_6519_ = lean_ctor_get(v_service_6498_, 1);
lean_inc_ref(v_key_6519_);
lean_dec_ref(v_service_6498_);
v___x_6520_ = ((lean_object*)(l_Lake_CacheService_mapContentType___closed__0));
v___x_6521_ = l___private_Lake_Config_Cache_0__Lake_uploadS3(v_outputs_6497_, v___x_6520_, v_url_6504_, v_key_6519_, v___y_6502_);
return v___x_6521_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs___boxed(lean_object* v_rev_6523_, lean_object* v_outputs_6524_, lean_object* v_service_6525_, lean_object* v_scope_6526_, lean_object* v_platform_6527_, lean_object* v_toolchain_6528_, lean_object* v___y_6529_, lean_object* v___y_6530_){
_start:
{
lean_object* v_res_6531_; 
v_res_6531_ = l_Lake_CacheService_uploadRevisionOutputs(v_rev_6523_, v_outputs_6524_, v_service_6525_, v_scope_6526_, v_platform_6527_, v_toolchain_6528_, v___y_6529_);
lean_dec_ref(v___y_6529_);
lean_dec_ref(v_toolchain_6528_);
lean_dec_ref(v_platform_6527_);
lean_dec_ref(v_rev_6523_);
return v_res_6531_;
}
}
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Git(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Log(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Version(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Artifact(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_InstallPath(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Actions(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Url(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Reservoir(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Lemmas(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Cache(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Git(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Artifact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_InstallPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Reservoir(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_CachePlatform_system = _init_l_Lake_CachePlatform_system();
lean_mark_persistent(l_Lake_CachePlatform_system);
l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty = _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty();
lean_mark_persistent(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Cache(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Control_Do(uint8_t builtin);
lean_object* initialize_Lake_Util_Git(uint8_t builtin);
lean_object* initialize_Lake_Util_Log(uint8_t builtin);
lean_object* initialize_Lake_Util_Version(uint8_t builtin);
lean_object* initialize_Lake_Config_Artifact(uint8_t builtin);
lean_object* initialize_Lake_Config_InstallPath(uint8_t builtin);
lean_object* initialize_Lake_Build_Actions(uint8_t builtin);
lean_object* initialize_Lake_Util_Url(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* initialize_Lake_Util_Reservoir(uint8_t builtin);
lean_object* initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Init_Data_String_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Cache(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Git(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Version(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Artifact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_InstallPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Reservoir(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Cache(builtin);
}
#ifdef __cplusplus
}
#endif
