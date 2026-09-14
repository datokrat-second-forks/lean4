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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = ": unidentifiable transfer completed: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__0 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__0_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "curl produced invalid JSON: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__1 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__1_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "; received: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exitcode"};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__3 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__3_value;
static const lean_string_object l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "exitcode: "};
static const lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__4 = (const lean_object*)&l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "failed to copy artifact: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_CacheService_downloadArtifacts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "no artifacts to download"};
static const lean_object* l_Lake_CacheService_downloadArtifacts___closed__0 = (const lean_object*)&l_Lake_CacheService_downloadArtifacts___closed__0_value;
static const lean_ctor_object l_Lake_CacheService_downloadArtifacts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_CacheService_downloadArtifacts___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_CacheService_downloadArtifacts___closed__1 = (const lean_object*)&l_Lake_CacheService_downloadArtifacts___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg(lean_object* v___x_444_, lean_object* v___x_445_, lean_object* v_contents_446_, lean_object* v_a_447_, lean_object* v_b_448_){
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg___boxed(lean_object* v___x_460_, lean_object* v___x_461_, lean_object* v_contents_462_, lean_object* v_a_463_, lean_object* v_b_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg(v___x_460_, v___x_461_, v_contents_462_, v_a_463_, v_b_464_);
lean_dec(v_b_464_);
lean_dec_ref(v_contents_462_);
lean_dec(v___x_461_);
lean_dec(v___x_460_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(lean_object* v_a_466_, lean_object* v_inputName_467_, uint8_t v_platformIndependent_468_, lean_object* v_i_469_, lean_object* v_cache_470_, lean_object* v_contents_471_, lean_object* v_pos_472_){
_start:
{
lean_object* v___x_474_; lean_object* v___y_476_; lean_object* v_searcher_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_474_ = lean_string_utf8_byte_size(v_contents_471_);
v_searcher_494_ = lean_unsigned_to_nat(0u);
v___x_495_ = lean_box(0);
v___x_496_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg(v___x_474_, v_pos_472_, v_contents_471_, v_searcher_494_, v___x_495_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v___x_497_; 
v___x_497_ = lean_nat_sub(v___x_474_, v_pos_472_);
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
v___x_477_ = lean_nat_add(v_pos_472_, v___y_476_);
lean_dec(v___y_476_);
lean_inc(v___x_477_);
lean_inc(v_pos_472_);
lean_inc_ref(v_contents_471_);
v_line_478_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_line_478_, 0, v_contents_471_);
lean_ctor_set(v_line_478_, 1, v_pos_472_);
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
v___x_485_ = lean_string_utf8_extract_fast(v_contents_471_, v_pos_472_, v___x_477_);
lean_dec(v_pos_472_);
lean_inc(v_i_469_);
lean_inc_ref(v_inputName_467_);
v___x_486_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(v_inputName_467_, v_i_469_, v_cache_470_, v___x_485_, v_platformIndependent_468_, v_a_466_);
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
v___x_490_ = lean_nat_add(v_i_469_, v___x_489_);
lean_dec(v_i_469_);
v___x_491_ = lean_string_utf8_next_fast(v_contents_471_, v___x_477_);
lean_dec(v___x_477_);
v_i_469_ = v___x_490_;
v_cache_470_ = v_a_487_;
v_pos_472_ = v___x_491_;
goto _start;
}
else
{
lean_dec(v_a_487_);
lean_dec(v___x_477_);
lean_dec_ref(v_contents_471_);
lean_dec(v_i_469_);
lean_dec_ref(v_inputName_467_);
return v___x_486_;
}
}
else
{
lean_dec(v___x_477_);
lean_dec_ref(v_contents_471_);
lean_dec(v_i_469_);
lean_dec_ref(v_inputName_467_);
return v___x_486_;
}
}
else
{
lean_object* v___x_493_; 
lean_dec(v___x_477_);
lean_dec(v_pos_472_);
lean_dec_ref(v_contents_471_);
lean_dec(v_i_469_);
lean_dec_ref(v_inputName_467_);
v___x_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_493_, 0, v_cache_470_);
return v___x_493_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1___boxed(lean_object* v_a_499_, lean_object* v_inputName_500_, lean_object* v_platformIndependent_501_, lean_object* v_i_502_, lean_object* v_cache_503_, lean_object* v_contents_504_, lean_object* v_pos_505_, lean_object* v___y_506_){
_start:
{
uint8_t v_platformIndependent_boxed_507_; lean_object* v_res_508_; 
v_platformIndependent_boxed_507_ = lean_unbox(v_platformIndependent_501_);
v_res_508_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(v_a_499_, v_inputName_500_, v_platformIndependent_boxed_507_, v_i_502_, v_cache_503_, v_contents_504_, v_pos_505_);
lean_dec_ref(v_a_499_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg(lean_object* v___x_509_, lean_object* v___x_510_, lean_object* v_contents_511_, lean_object* v_a_512_, lean_object* v_b_513_){
_start:
{
lean_object* v___x_514_; uint8_t v_decide_515_; 
v___x_514_ = lean_nat_sub(v___x_509_, v___x_510_);
v_decide_515_ = lean_nat_dec_eq(v_a_512_, v___x_514_);
lean_dec(v___x_514_);
if (v_decide_515_ == 0)
{
lean_object* v___x_516_; uint32_t v___x_517_; uint32_t v___x_518_; uint8_t v___x_519_; 
v___x_516_ = lean_nat_add(v___x_510_, v_a_512_);
v___x_517_ = lean_string_utf8_get_fast(v_contents_511_, v___x_516_);
v___x_518_ = 10;
v___x_519_ = lean_uint32_dec_eq(v___x_517_, v___x_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
lean_dec(v_a_512_);
v___x_520_ = lean_box(0);
v___x_521_ = lean_string_utf8_next_fast(v_contents_511_, v___x_516_);
lean_dec(v___x_516_);
v___x_522_ = lean_nat_sub(v___x_521_, v___x_510_);
v_a_512_ = v___x_522_;
v_b_513_ = v___x_520_;
goto _start;
}
else
{
lean_object* v___x_524_; 
lean_dec(v___x_516_);
v___x_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_524_, 0, v_a_512_);
return v___x_524_;
}
}
else
{
lean_dec(v_a_512_);
lean_inc(v_b_513_);
return v_b_513_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg___boxed(lean_object* v___x_525_, lean_object* v___x_526_, lean_object* v_contents_527_, lean_object* v_a_528_, lean_object* v_b_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg(v___x_525_, v___x_526_, v_contents_527_, v_a_528_, v_b_529_);
lean_dec(v_b_529_);
lean_dec_ref(v_contents_527_);
lean_dec(v___x_526_);
lean_dec(v___x_525_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop(lean_object* v_inputName_531_, uint8_t v_platformIndependent_532_, lean_object* v_i_533_, lean_object* v_cache_534_, lean_object* v_contents_535_, lean_object* v_pos_536_, lean_object* v_a_537_){
_start:
{
lean_object* v___x_539_; lean_object* v___y_541_; lean_object* v_searcher_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_539_ = lean_string_utf8_byte_size(v_contents_535_);
v_searcher_559_ = lean_unsigned_to_nat(0u);
v___x_560_ = lean_box(0);
v___x_561_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg(v___x_539_, v_pos_536_, v_contents_535_, v_searcher_559_, v___x_560_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v___x_562_; 
v___x_562_ = lean_nat_sub(v___x_539_, v_pos_536_);
v___y_541_ = v___x_562_;
goto v___jp_540_;
}
else
{
lean_object* v_val_563_; 
v_val_563_ = lean_ctor_get(v___x_561_, 0);
lean_inc(v_val_563_);
lean_dec_ref_known(v___x_561_, 1);
v___y_541_ = v_val_563_;
goto v___jp_540_;
}
v___jp_540_:
{
lean_object* v___x_542_; lean_object* v_line_543_; lean_object* v___x_544_; lean_object* v_startInclusive_545_; lean_object* v_endExclusive_546_; lean_object* v___x_547_; lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_542_ = lean_nat_add(v_pos_536_, v___y_541_);
lean_dec(v___y_541_);
lean_inc(v___x_542_);
lean_inc(v_pos_536_);
lean_inc_ref(v_contents_535_);
v_line_543_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_line_543_, 0, v_contents_535_);
lean_ctor_set(v_line_543_, 1, v_pos_536_);
lean_ctor_set(v_line_543_, 2, v___x_542_);
v___x_544_ = l_String_Slice_trimAscii(v_line_543_);
v_startInclusive_545_ = lean_ctor_get(v___x_544_, 1);
lean_inc(v_startInclusive_545_);
v_endExclusive_546_ = lean_ctor_get(v___x_544_, 2);
lean_inc(v_endExclusive_546_);
lean_dec_ref(v___x_544_);
v___x_547_ = lean_nat_sub(v_endExclusive_546_, v_startInclusive_545_);
lean_dec(v_startInclusive_545_);
lean_dec(v_endExclusive_546_);
v___x_548_ = lean_unsigned_to_nat(0u);
v___x_549_ = lean_nat_dec_eq(v___x_547_, v___x_548_);
lean_dec(v___x_547_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_string_utf8_extract_fast(v_contents_535_, v_pos_536_, v___x_542_);
lean_dec(v_pos_536_);
lean_inc(v_i_533_);
lean_inc_ref(v_inputName_531_);
v___x_551_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__0(v_inputName_531_, v_i_533_, v_cache_534_, v___x_550_, v_platformIndependent_532_, v_a_537_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; uint8_t v_decide_553_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_a_552_);
v_decide_553_ = lean_nat_dec_eq(v___x_542_, v___x_539_);
if (v_decide_553_ == 0)
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
lean_dec_ref_known(v___x_551_, 1);
v___x_554_ = lean_unsigned_to_nat(1u);
v___x_555_ = lean_nat_add(v_i_533_, v___x_554_);
lean_dec(v_i_533_);
v___x_556_ = lean_string_utf8_next_fast(v_contents_535_, v___x_542_);
lean_dec(v___x_542_);
v___x_557_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(v_a_537_, v_inputName_531_, v_platformIndependent_532_, v___x_555_, v_a_552_, v_contents_535_, v___x_556_);
return v___x_557_;
}
else
{
lean_dec(v_a_552_);
lean_dec(v___x_542_);
lean_dec_ref(v_contents_535_);
lean_dec(v_i_533_);
lean_dec_ref(v_inputName_531_);
return v___x_551_;
}
}
else
{
lean_dec(v___x_542_);
lean_dec_ref(v_contents_535_);
lean_dec(v_i_533_);
lean_dec_ref(v_inputName_531_);
return v___x_551_;
}
}
else
{
lean_object* v___x_558_; 
lean_dec(v___x_542_);
lean_dec(v_pos_536_);
lean_dec_ref(v_contents_535_);
lean_dec(v_i_533_);
lean_dec_ref(v_inputName_531_);
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v_cache_534_);
return v___x_558_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___boxed(lean_object* v_inputName_564_, lean_object* v_platformIndependent_565_, lean_object* v_i_566_, lean_object* v_cache_567_, lean_object* v_contents_568_, lean_object* v_pos_569_, lean_object* v_a_570_, lean_object* v___y_571_){
_start:
{
uint8_t v_platformIndependent_boxed_572_; lean_object* v_res_573_; 
v_platformIndependent_boxed_572_ = lean_unbox(v_platformIndependent_565_);
v_res_573_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop(v_inputName_564_, v_platformIndependent_boxed_572_, v_i_566_, v_cache_567_, v_contents_568_, v_pos_569_, v_a_570_);
lean_dec_ref(v_a_570_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2(lean_object* v___x_574_, lean_object* v___x_575_, lean_object* v___x_576_, lean_object* v_contents_577_, lean_object* v_inst_578_, lean_object* v_R_579_, lean_object* v_a_580_, lean_object* v_b_581_, lean_object* v_c_582_){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___redArg(v___x_574_, v___x_575_, v_contents_577_, v_a_580_, v_b_581_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2___boxed(lean_object* v___x_584_, lean_object* v___x_585_, lean_object* v___x_586_, lean_object* v_contents_587_, lean_object* v_inst_588_, lean_object* v_R_589_, lean_object* v_a_590_, lean_object* v_b_591_, lean_object* v_c_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__2(v___x_584_, v___x_585_, v___x_586_, v_contents_587_, v_inst_588_, v_R_589_, v_a_590_, v_b_591_, v_c_592_);
lean_dec(v_b_591_);
lean_dec_ref(v_contents_587_);
lean_dec_ref(v___x_586_);
lean_dec(v___x_585_);
lean_dec(v___x_584_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1(lean_object* v___x_594_, lean_object* v___x_595_, lean_object* v___x_596_, lean_object* v_contents_597_, lean_object* v_inst_598_, lean_object* v_R_599_, lean_object* v_a_600_, lean_object* v_b_601_, lean_object* v_c_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___redArg(v___x_594_, v___x_595_, v_contents_597_, v_a_600_, v_b_601_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1___boxed(lean_object* v___x_604_, lean_object* v___x_605_, lean_object* v___x_606_, lean_object* v_contents_607_, lean_object* v_inst_608_, lean_object* v_R_609_, lean_object* v_a_610_, lean_object* v_b_611_, lean_object* v_c_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1_spec__1(v___x_604_, v___x_605_, v___x_606_, v_contents_607_, v_inst_608_, v_R_609_, v_a_610_, v_b_611_, v_c_612_);
lean_dec(v_b_611_);
lean_dec_ref(v_contents_607_);
lean_dec_ref(v___x_606_);
lean_dec(v___x_605_);
lean_dec(v___x_604_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(lean_object* v_as_614_, size_t v_i_615_, size_t v_stop_616_, lean_object* v_b_617_, lean_object* v___y_618_){
_start:
{
uint8_t v___x_620_; 
v___x_620_ = lean_usize_dec_eq(v_i_615_, v_stop_616_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; lean_object* v___x_622_; size_t v___x_623_; size_t v___x_624_; 
v___x_621_ = lean_array_uget_borrowed(v_as_614_, v_i_615_);
lean_inc_ref(v___y_618_);
lean_inc(v___x_621_);
v___x_622_ = lean_apply_2(v___y_618_, v___x_621_, lean_box(0));
v___x_623_ = ((size_t)1ULL);
v___x_624_ = lean_usize_add(v_i_615_, v___x_623_);
v_i_615_ = v___x_624_;
v_b_617_ = v___x_622_;
goto _start;
}
else
{
lean_object* v___x_626_; 
v___x_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_626_, 0, v_b_617_);
return v___x_626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0___boxed(lean_object* v_as_627_, lean_object* v_i_628_, lean_object* v_stop_629_, lean_object* v_b_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
size_t v_i_boxed_633_; size_t v_stop_boxed_634_; lean_object* v_res_635_; 
v_i_boxed_633_ = lean_unbox_usize(v_i_628_);
lean_dec(v_i_628_);
v_stop_boxed_634_ = lean_unbox_usize(v_stop_629_);
lean_dec(v_stop_629_);
v_res_635_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_as_627_, v_i_boxed_633_, v_stop_boxed_634_, v_b_630_, v___y_631_);
lean_dec_ref(v___y_631_);
lean_dec_ref(v_as_627_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(lean_object* v___x_636_, lean_object* v_contents_637_, lean_object* v_a_638_, lean_object* v_b_639_){
_start:
{
uint8_t v_decide_640_; 
v_decide_640_ = lean_nat_dec_eq(v_a_638_, v___x_636_);
if (v_decide_640_ == 0)
{
uint32_t v___x_641_; uint32_t v___x_642_; uint8_t v___x_643_; 
v___x_641_ = lean_string_utf8_get_fast(v_contents_637_, v_a_638_);
v___x_642_ = 10;
v___x_643_ = lean_uint32_dec_eq(v___x_641_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_box(0);
v___x_645_ = lean_string_utf8_next_fast(v_contents_637_, v_a_638_);
lean_dec(v_a_638_);
v_a_638_ = v___x_645_;
v_b_639_ = v___x_644_;
goto _start;
}
else
{
lean_object* v___x_647_; 
v___x_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_647_, 0, v_a_638_);
return v___x_647_;
}
}
else
{
lean_dec(v_a_638_);
lean_inc(v_b_639_);
return v_b_639_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg___boxed(lean_object* v___x_648_, lean_object* v_contents_649_, lean_object* v_a_650_, lean_object* v_b_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(v___x_648_, v_contents_649_, v_a_650_, v_b_651_);
lean_dec(v_b_651_);
lean_dec_ref(v_contents_649_);
lean_dec(v___x_648_);
return v_res_652_;
}
}
static lean_object* _init_l_Lake_CacheMap_parse___closed__0(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_653_ = lean_box(0);
v___x_654_ = lean_unsigned_to_nat(16u);
v___x_655_ = lean_mk_array(v___x_654_, v___x_653_);
return v___x_655_;
}
}
static lean_object* _init_l_Lake_CacheMap_parse___closed__1(void){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_656_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__0, &l_Lake_CacheMap_parse___closed__0_once, _init_l_Lake_CacheMap_parse___closed__0);
v___x_657_ = lean_unsigned_to_nat(0u);
v___x_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v___x_656_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse(lean_object* v_inputName_661_, lean_object* v_contents_662_, uint8_t v_platformIndependent_663_, lean_object* v_a_664_){
_start:
{
lean_object* v___y_667_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___y_688_; lean_object* v_searcher_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v_searcher_722_ = lean_unsigned_to_nat(0u);
v___x_723_ = lean_string_utf8_byte_size(v_contents_662_);
v___x_724_ = lean_box(0);
v___x_725_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(v___x_723_, v_contents_662_, v_searcher_722_, v___x_724_);
if (lean_obj_tag(v___x_725_) == 0)
{
v___y_688_ = v___x_723_;
goto v___jp_687_;
}
else
{
lean_object* v_val_726_; 
v_val_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc(v_val_726_);
lean_dec_ref_known(v___x_725_, 1);
v___y_688_ = v_val_726_;
goto v___jp_687_;
}
v___jp_666_:
{
lean_object* v___x_668_; uint8_t v_decide_669_; 
v___x_668_ = lean_string_utf8_byte_size(v_contents_662_);
v_decide_669_ = lean_nat_dec_eq(v___y_667_, v___x_668_);
if (v_decide_669_ == 0)
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_670_ = lean_unsigned_to_nat(2u);
v___x_671_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_672_ = lean_string_utf8_next_fast(v_contents_662_, v___y_667_);
lean_dec(v___y_667_);
v___x_673_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parse_loop_spec__1(v_a_664_, v_inputName_661_, v_platformIndependent_663_, v___x_670_, v___x_671_, v_contents_662_, v___x_672_);
return v___x_673_;
}
else
{
lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec(v___y_667_);
lean_dec_ref(v_contents_662_);
lean_dec_ref(v_inputName_661_);
v___x_674_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
}
v___jp_676_:
{
if (lean_obj_tag(v___y_678_) == 0)
{
lean_dec_ref_known(v___y_678_, 1);
v___y_667_ = v___y_677_;
goto v___jp_666_;
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
lean_dec(v___y_677_);
lean_dec_ref(v_contents_662_);
lean_dec_ref(v_inputName_661_);
v_a_679_ = lean_ctor_get(v___y_678_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___y_678_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___y_678_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___y_678_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_679_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
v___jp_687_:
{
lean_object* v___x_689_; lean_object* v_line_690_; lean_object* v___x_691_; lean_object* v_str_692_; lean_object* v_startInclusive_693_; lean_object* v_endExclusive_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_689_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_688_);
lean_inc_ref(v_contents_662_);
v_line_690_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_line_690_, 0, v_contents_662_);
lean_ctor_set(v_line_690_, 1, v___x_689_);
lean_ctor_set(v_line_690_, 2, v___y_688_);
v___x_691_ = l_String_Slice_trimAscii(v_line_690_);
v_str_692_ = lean_ctor_get(v___x_691_, 0);
lean_inc_ref(v_str_692_);
v_startInclusive_693_ = lean_ctor_get(v___x_691_, 1);
lean_inc(v_startInclusive_693_);
v_endExclusive_694_ = lean_ctor_get(v___x_691_, 2);
lean_inc(v_endExclusive_694_);
lean_dec_ref(v___x_691_);
v___x_695_ = lean_string_utf8_extract_fast(v_str_692_, v_startInclusive_693_, v_endExclusive_694_);
lean_dec(v_endExclusive_694_);
lean_dec(v_startInclusive_693_);
lean_dec_ref(v_str_692_);
v___x_696_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
lean_inc_ref(v_inputName_661_);
v___x_697_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_inputName_661_, v___x_695_, v___x_696_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_699_; uint8_t v___x_700_; 
v_a_698_ = lean_ctor_get(v___x_697_, 1);
lean_inc(v_a_698_);
lean_dec_ref_known(v___x_697_, 2);
v___x_699_ = lean_array_get_size(v_a_698_);
v___x_700_ = lean_nat_dec_lt(v___x_689_, v___x_699_);
if (v___x_700_ == 0)
{
lean_dec(v_a_698_);
v___y_667_ = v___y_688_;
goto v___jp_666_;
}
else
{
lean_object* v___x_701_; size_t v___x_702_; size_t v___x_703_; lean_object* v___x_704_; 
v___x_701_ = lean_box(0);
v___x_702_ = ((size_t)0ULL);
v___x_703_ = lean_usize_of_nat(v___x_699_);
v___x_704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_698_, v___x_702_, v___x_703_, v___x_701_, v_a_664_);
lean_dec(v_a_698_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_dec_ref_known(v___x_704_, 1);
v___y_667_ = v___y_688_;
goto v___jp_666_;
}
else
{
v___y_677_ = v___y_688_;
v___y_678_ = v___x_704_;
goto v___jp_676_;
}
}
}
else
{
lean_object* v_a_705_; lean_object* v___x_706_; uint8_t v___x_707_; 
v_a_705_ = lean_ctor_get(v___x_697_, 1);
lean_inc(v_a_705_);
lean_dec_ref_known(v___x_697_, 2);
v___x_706_ = lean_array_get_size(v_a_705_);
v___x_707_ = lean_nat_dec_lt(v___x_689_, v___x_706_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; lean_object* v___x_709_; 
lean_dec(v_a_705_);
lean_dec(v___y_688_);
lean_dec_ref(v_contents_662_);
lean_dec_ref(v_inputName_661_);
v___x_708_ = lean_box(0);
v___x_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
return v___x_709_;
}
else
{
lean_object* v___x_710_; size_t v___x_711_; size_t v___x_712_; lean_object* v___x_713_; 
v___x_710_ = lean_box(0);
v___x_711_ = ((size_t)0ULL);
v___x_712_ = lean_usize_of_nat(v___x_706_);
v___x_713_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_705_, v___x_711_, v___x_712_, v___x_710_, v_a_664_);
lean_dec(v_a_705_);
if (lean_obj_tag(v___x_713_) == 0)
{
lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_dec(v___y_688_);
lean_dec_ref(v_contents_662_);
lean_dec_ref(v_inputName_661_);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_713_);
if (v_isSharedCheck_720_ == 0)
{
lean_object* v_unused_721_; 
v_unused_721_ = lean_ctor_get(v___x_713_, 0);
lean_dec(v_unused_721_);
v___x_715_ = v___x_713_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_dec(v___x_713_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
lean_ctor_set_tag(v___x_715_, 1);
lean_ctor_set(v___x_715_, 0, v___x_710_);
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_710_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
else
{
v___y_677_ = v___y_688_;
v___y_678_ = v___x_713_;
goto v___jp_676_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_parse___boxed(lean_object* v_inputName_727_, lean_object* v_contents_728_, lean_object* v_platformIndependent_729_, lean_object* v_a_730_, lean_object* v___y_731_){
_start:
{
uint8_t v_platformIndependent_boxed_732_; lean_object* v_res_733_; 
v_platformIndependent_boxed_732_ = lean_unbox(v_platformIndependent_729_);
v_res_733_ = l_Lake_CacheMap_parse(v_inputName_727_, v_contents_728_, v_platformIndependent_boxed_732_, v_a_730_);
lean_dec_ref(v_a_730_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1(lean_object* v___x_734_, lean_object* v___x_735_, lean_object* v_contents_736_, lean_object* v_inst_737_, lean_object* v_R_738_, lean_object* v_a_739_, lean_object* v_b_740_, lean_object* v_c_741_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___redArg(v___x_734_, v_contents_736_, v_a_739_, v_b_740_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1___boxed(lean_object* v___x_743_, lean_object* v___x_744_, lean_object* v_contents_745_, lean_object* v_inst_746_, lean_object* v_R_747_, lean_object* v_a_748_, lean_object* v_b_749_, lean_object* v_c_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CacheMap_parse_spec__1(v___x_743_, v___x_744_, v_contents_745_, v_inst_746_, v_R_747_, v_a_748_, v_b_749_, v_c_750_);
lean_dec(v_b_749_);
lean_dec_ref(v_contents_745_);
lean_dec_ref(v___x_744_);
lean_dec(v___x_743_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(lean_object* v_inputName_752_, lean_object* v_lineNo_753_, lean_object* v_cache_754_, lean_object* v_line_755_, uint8_t v_platformIndependent_756_, lean_object* v___y_757_){
_start:
{
lean_object* v___x_759_; 
lean_inc_ref(v_cache_754_);
v___x_759_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go(v_cache_754_, v_line_755_, v_platformIndependent_756_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_760_);
lean_dec_ref_known(v___x_759_, 1);
v___x_761_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__0));
v___x_762_ = lean_string_append(v_inputName_752_, v___x_761_);
v___x_763_ = l_Nat_reprFast(v_lineNo_753_);
v___x_764_ = lean_string_append(v___x_762_, v___x_763_);
lean_dec_ref(v___x_763_);
v___x_765_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_766_ = lean_string_append(v___x_764_, v___x_765_);
v___x_767_ = lean_string_append(v___x_766_, v_a_760_);
lean_dec(v_a_760_);
v___x_768_ = 2;
v___x_769_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_769_, 0, v___x_767_);
lean_ctor_set_uint8(v___x_769_, sizeof(void*)*1, v___x_768_);
v___x_770_ = lean_array_push(v___y_757_, v___x_769_);
v___x_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_771_, 0, v_cache_754_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
return v___x_771_;
}
else
{
lean_object* v_a_772_; lean_object* v___x_773_; 
lean_dec_ref(v_cache_754_);
lean_dec(v_lineNo_753_);
lean_dec_ref(v_inputName_752_);
v_a_772_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_759_, 1);
v___x_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_773_, 0, v_a_772_);
lean_ctor_set(v___x_773_, 1, v___y_757_);
return v___x_773_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0___boxed(lean_object* v_inputName_774_, lean_object* v_lineNo_775_, lean_object* v_cache_776_, lean_object* v_line_777_, lean_object* v_platformIndependent_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
uint8_t v_platformIndependent_boxed_781_; lean_object* v_res_782_; 
v_platformIndependent_boxed_781_ = lean_unbox(v_platformIndependent_778_);
v_res_782_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(v_inputName_774_, v_lineNo_775_, v_cache_776_, v_line_777_, v_platformIndependent_boxed_781_, v___y_779_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(lean_object* v_h_783_, lean_object* v_fileName_784_, uint8_t v_platformIndependent_785_, lean_object* v_i_786_, lean_object* v_cache_787_, lean_object* v_a_788_){
_start:
{
lean_object* v___x_790_; 
v___x_790_ = lean_io_prim_handle_get_line(v_h_783_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v___x_792_; lean_object* v___x_793_; uint8_t v___x_794_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_a_791_);
lean_dec_ref_known(v___x_790_, 1);
v___x_792_ = lean_string_utf8_byte_size(v_a_791_);
v___x_793_ = lean_unsigned_to_nat(0u);
v___x_794_ = lean_nat_dec_eq(v___x_792_, v___x_793_);
if (v___x_794_ == 0)
{
lean_object* v___x_795_; 
lean_inc(v_i_786_);
lean_inc_ref(v_fileName_784_);
v___x_795_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(v_fileName_784_, v_i_786_, v_cache_787_, v_a_791_, v_platformIndependent_785_, v_a_788_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v_a_796_; lean_object* v_a_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_a_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_796_);
v_a_797_ = lean_ctor_get(v___x_795_, 1);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_795_, 2);
v___x_798_ = lean_unsigned_to_nat(1u);
v___x_799_ = lean_nat_add(v_i_786_, v___x_798_);
lean_dec(v_i_786_);
v_i_786_ = v___x_799_;
v_cache_787_ = v_a_796_;
v_a_788_ = v_a_797_;
goto _start;
}
else
{
lean_dec(v_i_786_);
lean_dec_ref(v_fileName_784_);
return v___x_795_;
}
}
else
{
lean_object* v___x_801_; 
lean_dec(v_a_791_);
lean_dec(v_i_786_);
lean_dec_ref(v_fileName_784_);
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v_cache_787_);
lean_ctor_set(v___x_801_, 1, v_a_788_);
return v___x_801_;
}
}
else
{
lean_object* v_a_802_; lean_object* v___x_803_; uint8_t v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
lean_dec_ref(v_cache_787_);
lean_dec(v_i_786_);
lean_dec_ref(v_fileName_784_);
v_a_802_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v___x_790_, 1);
v___x_803_ = lean_io_error_to_string(v_a_802_);
v___x_804_ = 3;
v___x_805_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_805_, 0, v___x_803_);
lean_ctor_set_uint8(v___x_805_, sizeof(void*)*1, v___x_804_);
v___x_806_ = lean_array_get_size(v_a_788_);
v___x_807_ = lean_array_push(v_a_788_, v___x_805_);
v___x_808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_806_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
return v___x_808_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop___boxed(lean_object* v_h_809_, lean_object* v_fileName_810_, lean_object* v_platformIndependent_811_, lean_object* v_i_812_, lean_object* v_cache_813_, lean_object* v_a_814_, lean_object* v___y_815_){
_start:
{
uint8_t v_platformIndependent_boxed_816_; lean_object* v_res_817_; 
v_platformIndependent_boxed_816_ = lean_unbox(v_platformIndependent_811_);
v_res_817_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_h_809_, v_fileName_810_, v_platformIndependent_boxed_816_, v_i_812_, v_cache_813_, v_a_814_);
lean_dec(v_h_809_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(lean_object* v_h_818_, lean_object* v_fileName_819_, uint8_t v_platformIndependent_820_, lean_object* v_a_821_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = lean_io_prim_handle_get_line(v_h_818_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_825_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v___x_823_, 1);
lean_inc_ref(v_fileName_819_);
v___x_825_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_fileName_819_, v_a_824_, v_a_821_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v_a_826_ = lean_ctor_get(v___x_825_, 1);
lean_inc(v_a_826_);
lean_dec_ref_known(v___x_825_, 2);
v___x_827_ = lean_unsigned_to_nat(2u);
v___x_828_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_829_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_h_818_, v_fileName_819_, v_platformIndependent_820_, v___x_827_, v___x_828_, v_a_826_);
return v___x_829_;
}
else
{
lean_object* v_a_830_; lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
lean_dec_ref(v_fileName_819_);
v_a_830_ = lean_ctor_get(v___x_825_, 0);
v_a_831_ = lean_ctor_get(v___x_825_, 1);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_825_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_inc(v_a_830_);
lean_dec(v___x_825_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_a_830_);
lean_ctor_set(v_reuseFailAlloc_837_, 1, v_a_831_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_840_; uint8_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
lean_dec_ref(v_fileName_819_);
v_a_839_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_839_);
lean_dec_ref_known(v___x_823_, 1);
v___x_840_ = lean_io_error_to_string(v_a_839_);
v___x_841_ = 3;
v___x_842_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_842_, 0, v___x_840_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*1, v___x_841_);
v___x_843_ = lean_array_get_size(v_a_821_);
v___x_844_ = lean_array_push(v_a_821_, v___x_842_);
v___x_845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_843_);
lean_ctor_set(v___x_845_, 1, v___x_844_);
return v___x_845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___boxed(lean_object* v_h_846_, lean_object* v_fileName_847_, lean_object* v_platformIndependent_848_, lean_object* v_a_849_, lean_object* v___y_850_){
_start:
{
uint8_t v_platformIndependent_boxed_851_; lean_object* v_res_852_; 
v_platformIndependent_boxed_851_ = lean_unbox(v_platformIndependent_848_);
v_res_852_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(v_h_846_, v_fileName_847_, v_platformIndependent_boxed_851_, v_a_849_);
lean_dec(v_h_846_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load(lean_object* v_file_854_, uint8_t v_platformIndependent_855_, lean_object* v_a_856_){
_start:
{
uint8_t v___x_858_; lean_object* v___x_859_; 
v___x_858_ = 0;
v___x_859_ = lean_io_prim_handle_mk(v_file_854_, v___x_858_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; uint8_t v___x_861_; lean_object* v___x_862_; 
v_a_860_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_a_860_);
lean_dec_ref_known(v___x_859_, 1);
v___x_861_ = 0;
v___x_862_ = lean_io_prim_handle_lock(v_a_860_, v___x_861_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v___x_863_; 
lean_dec_ref_known(v___x_862_, 1);
v___x_863_ = lean_io_prim_handle_get_line(v_a_860_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
lean_inc_ref(v_file_854_);
v___x_865_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_854_, v_a_864_, v_a_856_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_a_866_ = lean_ctor_get(v___x_865_, 1);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 2);
v___x_867_ = lean_unsigned_to_nat(2u);
v___x_868_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_869_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_860_, v_file_854_, v_platformIndependent_855_, v___x_867_, v___x_868_, v_a_866_);
lean_dec(v_a_860_);
return v___x_869_;
}
else
{
lean_object* v_a_870_; lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec(v_a_860_);
lean_dec_ref(v_file_854_);
v_a_870_ = lean_ctor_get(v___x_865_, 0);
v_a_871_ = lean_ctor_get(v___x_865_, 1);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_865_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_inc(v_a_870_);
lean_dec(v___x_865_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_870_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_a_871_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
}
}
}
}
else
{
lean_object* v_a_879_; lean_object* v___x_880_; uint8_t v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
lean_dec(v_a_860_);
lean_dec_ref(v_file_854_);
v_a_879_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_879_);
lean_dec_ref_known(v___x_863_, 1);
v___x_880_ = lean_io_error_to_string(v_a_879_);
v___x_881_ = 3;
v___x_882_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_882_, 0, v___x_880_);
lean_ctor_set_uint8(v___x_882_, sizeof(void*)*1, v___x_881_);
v___x_883_ = lean_array_get_size(v_a_856_);
v___x_884_ = lean_array_push(v_a_856_, v___x_882_);
v___x_885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_883_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
return v___x_885_;
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_887_; uint8_t v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
lean_dec(v_a_860_);
lean_dec_ref(v_file_854_);
v_a_886_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_862_, 1);
v___x_887_ = lean_io_error_to_string(v_a_886_);
v___x_888_ = 3;
v___x_889_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_889_, 0, v___x_887_);
lean_ctor_set_uint8(v___x_889_, sizeof(void*)*1, v___x_888_);
v___x_890_ = lean_array_get_size(v_a_856_);
v___x_891_ = lean_array_push(v_a_856_, v___x_889_);
v___x_892_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_892_, 0, v___x_890_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
return v___x_892_;
}
}
else
{
lean_object* v_a_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; uint8_t v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v_a_893_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_a_893_);
lean_dec_ref_known(v___x_859_, 1);
v___x_894_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_895_ = lean_string_append(v_file_854_, v___x_894_);
v___x_896_ = lean_io_error_to_string(v_a_893_);
v___x_897_ = lean_string_append(v___x_895_, v___x_896_);
lean_dec_ref(v___x_896_);
v___x_898_ = 3;
v___x_899_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_899_, 0, v___x_897_);
lean_ctor_set_uint8(v___x_899_, sizeof(void*)*1, v___x_898_);
v___x_900_ = lean_array_get_size(v_a_856_);
v___x_901_ = lean_array_push(v_a_856_, v___x_899_);
v___x_902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
return v___x_902_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load___boxed(lean_object* v_file_903_, lean_object* v_platformIndependent_904_, lean_object* v_a_905_, lean_object* v___y_906_){
_start:
{
uint8_t v_platformIndependent_boxed_907_; lean_object* v_res_908_; 
v_platformIndependent_boxed_907_ = lean_unbox(v_platformIndependent_904_);
v_res_908_ = l_Lake_CacheMap_load(v_file_903_, v_platformIndependent_boxed_907_, v_a_905_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f(lean_object* v_file_909_, uint8_t v_platformIndependent_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_a_914_; lean_object* v_a_915_; uint8_t v___x_917_; lean_object* v___x_918_; 
v___x_917_ = 0;
v___x_918_ = lean_io_prim_handle_mk(v_file_909_, v___x_917_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_919_; uint8_t v___x_920_; lean_object* v___x_921_; 
v_a_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_a_919_);
lean_dec_ref_known(v___x_918_, 1);
v___x_920_ = 0;
v___x_921_ = lean_io_prim_handle_lock(v_a_919_, v___x_920_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v___x_922_; 
lean_dec_ref_known(v___x_921_, 1);
v___x_922_ = lean_io_prim_handle_get_line(v_a_919_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_948_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_948_ == 0)
{
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_948_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_948_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_927_; 
lean_inc_ref(v_file_909_);
v___x_927_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_909_, v_a_923_, v_a_911_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v_a_928_ = lean_ctor_get(v___x_927_, 1);
lean_inc(v_a_928_);
lean_dec_ref_known(v___x_927_, 2);
v___x_929_ = lean_unsigned_to_nat(2u);
v___x_930_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_931_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_919_, v_file_909_, v_platformIndependent_910_, v___x_929_, v___x_930_, v_a_928_);
lean_dec(v_a_919_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_943_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
v_a_933_ = lean_ctor_get(v___x_931_, 1);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_943_ == 0)
{
v___x_935_ = v___x_931_;
v_isShared_936_ = v_isSharedCheck_943_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_inc(v_a_932_);
lean_dec(v___x_931_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_943_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_926_ == 0)
{
lean_ctor_set_tag(v___x_925_, 1);
lean_ctor_set(v___x_925_, 0, v_a_932_);
v___x_938_ = v___x_925_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_932_);
v___x_938_ = v_reuseFailAlloc_942_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
lean_object* v___x_940_; 
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 0, v___x_938_);
v___x_940_ = v___x_935_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v___x_938_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v_a_933_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
else
{
lean_object* v_a_944_; lean_object* v_a_945_; 
lean_del_object(v___x_925_);
v_a_944_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_a_944_);
v_a_945_ = lean_ctor_get(v___x_931_, 1);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_931_, 2);
v_a_914_ = v_a_944_;
v_a_915_ = v_a_945_;
goto v___jp_913_;
}
}
else
{
lean_object* v_a_946_; lean_object* v_a_947_; 
lean_del_object(v___x_925_);
lean_dec(v_a_919_);
lean_dec_ref(v_file_909_);
v_a_946_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_946_);
v_a_947_ = lean_ctor_get(v___x_927_, 1);
lean_inc(v_a_947_);
lean_dec_ref_known(v___x_927_, 2);
v_a_914_ = v_a_946_;
v_a_915_ = v_a_947_;
goto v___jp_913_;
}
}
}
else
{
lean_object* v_a_949_; lean_object* v___x_950_; uint8_t v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
lean_dec(v_a_919_);
lean_dec_ref(v_file_909_);
v_a_949_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_949_);
lean_dec_ref_known(v___x_922_, 1);
v___x_950_ = lean_io_error_to_string(v_a_949_);
v___x_951_ = 3;
v___x_952_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set_uint8(v___x_952_, sizeof(void*)*1, v___x_951_);
v___x_953_ = lean_array_get_size(v_a_911_);
v___x_954_ = lean_array_push(v_a_911_, v___x_952_);
v_a_914_ = v___x_953_;
v_a_915_ = v___x_954_;
goto v___jp_913_;
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_956_; uint8_t v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
lean_dec(v_a_919_);
lean_dec_ref(v_file_909_);
v_a_955_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_955_);
lean_dec_ref_known(v___x_921_, 1);
v___x_956_ = lean_io_error_to_string(v_a_955_);
v___x_957_ = 3;
v___x_958_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_958_, 0, v___x_956_);
lean_ctor_set_uint8(v___x_958_, sizeof(void*)*1, v___x_957_);
v___x_959_ = lean_array_get_size(v_a_911_);
v___x_960_ = lean_array_push(v_a_911_, v___x_958_);
v___x_961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_959_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
return v___x_961_;
}
}
else
{
lean_object* v_a_962_; 
v_a_962_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v___x_918_, 1);
if (lean_obj_tag(v_a_962_) == 11)
{
lean_object* v___x_963_; lean_object* v___x_964_; 
lean_dec_ref_known(v_a_962_, 2);
lean_dec_ref(v_file_909_);
v___x_963_ = lean_box(0);
v___x_964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
lean_ctor_set(v___x_964_, 1, v_a_911_);
return v___x_964_;
}
else
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; uint8_t v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_965_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_966_ = lean_string_append(v_file_909_, v___x_965_);
v___x_967_ = lean_io_error_to_string(v_a_962_);
v___x_968_ = lean_string_append(v___x_966_, v___x_967_);
lean_dec_ref(v___x_967_);
v___x_969_ = 3;
v___x_970_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_970_, 0, v___x_968_);
lean_ctor_set_uint8(v___x_970_, sizeof(void*)*1, v___x_969_);
v___x_971_ = lean_array_get_size(v_a_911_);
v___x_972_ = lean_array_push(v_a_911_, v___x_970_);
v___x_973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_971_);
lean_ctor_set(v___x_973_, 1, v___x_972_);
return v___x_973_;
}
}
v___jp_913_:
{
lean_object* v___x_916_; 
v___x_916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_916_, 0, v_a_914_);
lean_ctor_set(v___x_916_, 1, v_a_915_);
return v___x_916_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f___boxed(lean_object* v_file_974_, lean_object* v_platformIndependent_975_, lean_object* v_a_976_, lean_object* v___y_977_){
_start:
{
uint8_t v_platformIndependent_boxed_978_; lean_object* v_res_979_; 
v_platformIndependent_boxed_978_ = lean_unbox(v_platformIndependent_975_);
v_res_979_ = l_Lake_CacheMap_load_x3f(v_file_974_, v_platformIndependent_boxed_978_, v_a_976_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(lean_object* v_h_980_, lean_object* v_x_981_, lean_object* v_x_982_, lean_object* v___y_983_){
_start:
{
if (lean_obj_tag(v_x_982_) == 0)
{
lean_object* v___x_985_; 
v___x_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_985_, 0, v_x_981_);
lean_ctor_set(v___x_985_, 1, v___y_983_);
return v___x_985_;
}
else
{
lean_object* v_value_986_; lean_object* v_key_987_; lean_object* v_tail_988_; lean_object* v_out_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_1014_; 
v_value_986_ = lean_ctor_get(v_x_982_, 1);
lean_inc(v_value_986_);
v_key_987_ = lean_ctor_get(v_x_982_, 0);
lean_inc(v_key_987_);
v_tail_988_ = lean_ctor_get(v_x_982_, 2);
lean_inc(v_tail_988_);
lean_dec_ref_known(v_x_982_, 3);
v_out_989_ = lean_ctor_get(v_value_986_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v_value_986_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_991_ = v_value_986_;
v_isShared_992_ = v_isSharedCheck_1014_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_out_989_);
lean_dec(v_value_986_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_1014_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
uint64_t v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_993_ = lean_unbox_uint64(v_key_987_);
lean_dec(v_key_987_);
v___x_994_ = l_Lake_lowerHexUInt64(v___x_993_);
v___x_995_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
v___x_996_ = lean_unsigned_to_nat(2u);
v___x_997_ = lean_mk_empty_array_with_capacity(v___x_996_);
v___x_998_ = lean_array_push(v___x_997_, v___x_995_);
v___x_999_ = lean_array_push(v___x_998_, v_out_989_);
v___x_1000_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
v___x_1001_ = l_Lean_Json_compress(v___x_1000_);
v___x_1002_ = l_IO_FS_Handle_putStrLn(v_h_980_, v___x_1001_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; 
lean_del_object(v___x_991_);
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
lean_inc(v_a_1003_);
lean_dec_ref_known(v___x_1002_, 1);
v_x_981_ = v_a_1003_;
v_x_982_ = v_tail_988_;
goto _start;
}
else
{
lean_object* v_a_1005_; lean_object* v___x_1006_; uint8_t v___x_1007_; lean_object* v___x_1009_; 
lean_dec(v_tail_988_);
v_a_1005_ = lean_ctor_get(v___x_1002_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1002_, 1);
v___x_1006_ = lean_io_error_to_string(v_a_1005_);
v___x_1007_ = 3;
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 0, v___x_1006_);
v___x_1009_ = v___x_991_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v___x_1006_);
v___x_1009_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
lean_ctor_set_uint8(v___x_1009_, sizeof(void*)*1, v___x_1007_);
v___x_1010_ = lean_array_get_size(v___y_983_);
v___x_1011_ = lean_array_push(v___y_983_, v___x_1009_);
v___x_1012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1010_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
return v___x_1012_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1___boxed(lean_object* v_h_1015_, lean_object* v_x_1016_, lean_object* v_x_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(v_h_1015_, v_x_1016_, v_x_1017_, v___y_1018_);
lean_dec(v_h_1015_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(lean_object* v_h_1021_, lean_object* v_as_1022_, size_t v_i_1023_, size_t v_stop_1024_, lean_object* v_b_1025_, lean_object* v___y_1026_){
_start:
{
uint8_t v___x_1028_; 
v___x_1028_ = lean_usize_dec_eq(v_i_1023_, v_stop_1024_);
if (v___x_1028_ == 0)
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1029_ = lean_array_uget_borrowed(v_as_1022_, v_i_1023_);
v___x_1030_ = lean_box(0);
lean_inc(v___x_1029_);
v___x_1031_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__1(v_h_1021_, v___x_1030_, v___x_1029_, v___y_1026_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; lean_object* v_a_1033_; size_t v___x_1034_; size_t v___x_1035_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
v_a_1033_ = lean_ctor_get(v___x_1031_, 1);
lean_inc(v_a_1033_);
lean_dec_ref_known(v___x_1031_, 2);
v___x_1034_ = ((size_t)1ULL);
v___x_1035_ = lean_usize_add(v_i_1023_, v___x_1034_);
v_i_1023_ = v___x_1035_;
v_b_1025_ = v_a_1032_;
v___y_1026_ = v_a_1033_;
goto _start;
}
else
{
return v___x_1031_;
}
}
else
{
lean_object* v___x_1037_; 
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v_b_1025_);
lean_ctor_set(v___x_1037_, 1, v___y_1026_);
return v___x_1037_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2___boxed(lean_object* v_h_1038_, lean_object* v_as_1039_, lean_object* v_i_1040_, lean_object* v_stop_1041_, lean_object* v_b_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
size_t v_i_boxed_1045_; size_t v_stop_boxed_1046_; lean_object* v_res_1047_; 
v_i_boxed_1045_ = lean_unbox_usize(v_i_1040_);
lean_dec(v_i_1040_);
v_stop_boxed_1046_ = lean_unbox_usize(v_stop_1041_);
lean_dec(v_stop_1041_);
v_res_1047_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(v_h_1038_, v_as_1039_, v_i_boxed_1045_, v_stop_boxed_1046_, v_b_1042_, v___y_1043_);
lean_dec_ref(v_as_1039_);
lean_dec(v_h_1038_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(lean_object* v_h_1048_, lean_object* v_x_1049_, lean_object* v_x_1050_, lean_object* v___y_1051_){
_start:
{
if (lean_obj_tag(v_x_1050_) == 0)
{
lean_object* v___x_1053_; 
v___x_1053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1053_, 0, v_x_1049_);
lean_ctor_set(v___x_1053_, 1, v___y_1051_);
return v___x_1053_;
}
else
{
lean_object* v_value_1054_; uint8_t v_platformIndependent_1055_; 
v_value_1054_ = lean_ctor_get(v_x_1050_, 1);
lean_inc(v_value_1054_);
v_platformIndependent_1055_ = lean_ctor_get_uint8(v_value_1054_, sizeof(void*)*1);
if (v_platformIndependent_1055_ == 0)
{
lean_object* v_tail_1056_; lean_object* v___x_1057_; 
lean_dec(v_value_1054_);
v_tail_1056_ = lean_ctor_get(v_x_1050_, 2);
lean_inc(v_tail_1056_);
lean_dec_ref_known(v_x_1050_, 3);
v___x_1057_ = lean_box(0);
v_x_1049_ = v___x_1057_;
v_x_1050_ = v_tail_1056_;
goto _start;
}
else
{
lean_object* v_key_1059_; lean_object* v_tail_1060_; lean_object* v_out_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1086_; 
v_key_1059_ = lean_ctor_get(v_x_1050_, 0);
lean_inc(v_key_1059_);
v_tail_1060_ = lean_ctor_get(v_x_1050_, 2);
lean_inc(v_tail_1060_);
lean_dec_ref_known(v_x_1050_, 3);
v_out_1061_ = lean_ctor_get(v_value_1054_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v_value_1054_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1063_ = v_value_1054_;
v_isShared_1064_ = v_isSharedCheck_1086_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_out_1061_);
lean_dec(v_value_1054_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1086_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
uint64_t v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1065_ = lean_unbox_uint64(v_key_1059_);
lean_dec(v_key_1059_);
v___x_1066_ = l_Lake_lowerHexUInt64(v___x_1065_);
v___x_1067_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
v___x_1068_ = lean_unsigned_to_nat(2u);
v___x_1069_ = lean_mk_empty_array_with_capacity(v___x_1068_);
v___x_1070_ = lean_array_push(v___x_1069_, v___x_1067_);
v___x_1071_ = lean_array_push(v___x_1070_, v_out_1061_);
v___x_1072_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1071_);
v___x_1073_ = l_Lean_Json_compress(v___x_1072_);
v___x_1074_ = l_IO_FS_Handle_putStrLn(v_h_1048_, v___x_1073_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; 
lean_del_object(v___x_1063_);
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
lean_inc(v_a_1075_);
lean_dec_ref_known(v___x_1074_, 1);
v_x_1049_ = v_a_1075_;
v_x_1050_ = v_tail_1060_;
goto _start;
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1078_; uint8_t v___x_1079_; lean_object* v___x_1081_; 
lean_dec(v_tail_1060_);
v_a_1077_ = lean_ctor_get(v___x_1074_, 0);
lean_inc(v_a_1077_);
lean_dec_ref_known(v___x_1074_, 1);
v___x_1078_ = lean_io_error_to_string(v_a_1077_);
v___x_1079_ = 3;
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 0, v___x_1078_);
v___x_1081_ = v___x_1063_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1078_);
v___x_1081_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_ctor_set_uint8(v___x_1081_, sizeof(void*)*1, v___x_1079_);
v___x_1082_ = lean_array_get_size(v___y_1051_);
v___x_1083_ = lean_array_push(v___y_1051_, v___x_1081_);
v___x_1084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1082_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
return v___x_1084_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0___boxed(lean_object* v_h_1087_, lean_object* v_x_1088_, lean_object* v_x_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(v_h_1087_, v_x_1088_, v_x_1089_, v___y_1090_);
lean_dec(v_h_1087_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(lean_object* v_h_1093_, lean_object* v_as_1094_, size_t v_i_1095_, size_t v_stop_1096_, lean_object* v_b_1097_, lean_object* v___y_1098_){
_start:
{
uint8_t v___x_1100_; 
v___x_1100_ = lean_usize_dec_eq(v_i_1095_, v_stop_1096_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1101_ = lean_array_uget_borrowed(v_as_1094_, v_i_1095_);
v___x_1102_ = lean_box(0);
lean_inc(v___x_1101_);
v___x_1103_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__0(v_h_1093_, v___x_1102_, v___x_1101_, v___y_1098_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; lean_object* v_a_1105_; size_t v___x_1106_; size_t v___x_1107_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
v_a_1105_ = lean_ctor_get(v___x_1103_, 1);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1103_, 2);
v___x_1106_ = ((size_t)1ULL);
v___x_1107_ = lean_usize_add(v_i_1095_, v___x_1106_);
v_i_1095_ = v___x_1107_;
v_b_1097_ = v_a_1104_;
v___y_1098_ = v_a_1105_;
goto _start;
}
else
{
return v___x_1103_;
}
}
else
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1109_, 0, v_b_1097_);
lean_ctor_set(v___x_1109_, 1, v___y_1098_);
return v___x_1109_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3___boxed(lean_object* v_h_1110_, lean_object* v_as_1111_, lean_object* v_i_1112_, lean_object* v_stop_1113_, lean_object* v_b_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
size_t v_i_boxed_1117_; size_t v_stop_boxed_1118_; lean_object* v_res_1119_; 
v_i_boxed_1117_ = lean_unbox_usize(v_i_1112_);
lean_dec(v_i_1112_);
v_stop_boxed_1118_ = lean_unbox_usize(v_stop_1113_);
lean_dec(v_stop_1113_);
v_res_1119_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1110_, v_as_1111_, v_i_boxed_1117_, v_stop_boxed_1118_, v_b_1114_, v___y_1115_);
lean_dec_ref(v_as_1111_);
lean_dec(v_h_1110_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(lean_object* v_h_1120_, lean_object* v_cache_1121_, uint8_t v_platformIndependent_1122_, lean_object* v_a_1123_){
_start:
{
if (v_platformIndependent_1122_ == 0)
{
lean_object* v_buckets_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1139_; 
v_buckets_1125_ = lean_ctor_get(v_cache_1121_, 1);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_cache_1121_);
if (v_isSharedCheck_1139_ == 0)
{
lean_object* v_unused_1140_; 
v_unused_1140_ = lean_ctor_get(v_cache_1121_, 0);
lean_dec(v_unused_1140_);
v___x_1127_ = v_cache_1121_;
v_isShared_1128_ = v_isSharedCheck_1139_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_buckets_1125_);
lean_dec(v_cache_1121_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1139_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; 
v___x_1129_ = lean_unsigned_to_nat(0u);
v___x_1130_ = lean_array_get_size(v_buckets_1125_);
v___x_1131_ = lean_box(0);
v___x_1132_ = lean_nat_dec_lt(v___x_1129_, v___x_1130_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1134_; 
lean_dec_ref(v_buckets_1125_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 1, v_a_1123_);
lean_ctor_set(v___x_1127_, 0, v___x_1131_);
v___x_1134_ = v___x_1127_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1131_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_a_1123_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
else
{
size_t v___x_1136_; size_t v___x_1137_; lean_object* v___x_1138_; 
lean_del_object(v___x_1127_);
v___x_1136_ = ((size_t)0ULL);
v___x_1137_ = lean_usize_of_nat(v___x_1130_);
v___x_1138_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(v_h_1120_, v_buckets_1125_, v___x_1136_, v___x_1137_, v___x_1131_, v_a_1123_);
lean_dec_ref(v_buckets_1125_);
return v___x_1138_;
}
}
}
else
{
lean_object* v_buckets_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1155_; 
v_buckets_1141_ = lean_ctor_get(v_cache_1121_, 1);
v_isSharedCheck_1155_ = !lean_is_exclusive(v_cache_1121_);
if (v_isSharedCheck_1155_ == 0)
{
lean_object* v_unused_1156_; 
v_unused_1156_ = lean_ctor_get(v_cache_1121_, 0);
lean_dec(v_unused_1156_);
v___x_1143_ = v_cache_1121_;
v_isShared_1144_ = v_isSharedCheck_1155_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_buckets_1141_);
lean_dec(v_cache_1121_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1155_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; uint8_t v___x_1148_; 
v___x_1145_ = lean_unsigned_to_nat(0u);
v___x_1146_ = lean_array_get_size(v_buckets_1141_);
v___x_1147_ = lean_box(0);
v___x_1148_ = lean_nat_dec_lt(v___x_1145_, v___x_1146_);
if (v___x_1148_ == 0)
{
lean_object* v___x_1150_; 
lean_dec_ref(v_buckets_1141_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 1, v_a_1123_);
lean_ctor_set(v___x_1143_, 0, v___x_1147_);
v___x_1150_ = v___x_1143_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1147_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v_a_1123_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
else
{
size_t v___x_1152_; size_t v___x_1153_; lean_object* v___x_1154_; 
lean_del_object(v___x_1143_);
v___x_1152_ = ((size_t)0ULL);
v___x_1153_ = lean_usize_of_nat(v___x_1146_);
v___x_1154_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1120_, v_buckets_1141_, v___x_1152_, v___x_1153_, v___x_1147_, v_a_1123_);
lean_dec_ref(v_buckets_1141_);
return v___x_1154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries___boxed(lean_object* v_h_1157_, lean_object* v_cache_1158_, lean_object* v_platformIndependent_1159_, lean_object* v_a_1160_, lean_object* v___y_1161_){
_start:
{
uint8_t v_platformIndependent_boxed_1162_; lean_object* v_res_1163_; 
v_platformIndependent_boxed_1162_ = lean_unbox(v_platformIndependent_1159_);
v_res_1163_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_h_1157_, v_cache_1158_, v_platformIndependent_boxed_1162_, v_a_1160_);
lean_dec(v_h_1157_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_updateFile_spec__0(lean_object* v_x_1164_, lean_object* v_x_1165_){
_start:
{
if (lean_obj_tag(v_x_1165_) == 0)
{
return v_x_1164_;
}
else
{
lean_object* v_key_1166_; lean_object* v_value_1167_; lean_object* v_tail_1168_; uint64_t v___x_1169_; lean_object* v___x_1170_; 
v_key_1166_ = lean_ctor_get(v_x_1165_, 0);
lean_inc(v_key_1166_);
v_value_1167_ = lean_ctor_get(v_x_1165_, 1);
lean_inc(v_value_1167_);
v_tail_1168_ = lean_ctor_get(v_x_1165_, 2);
lean_inc(v_tail_1168_);
lean_dec_ref_known(v_x_1165_, 3);
v___x_1169_ = lean_unbox_uint64(v_key_1166_);
lean_dec(v_key_1166_);
v___x_1170_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_x_1164_, v___x_1169_, v_value_1167_);
v_x_1164_ = v___x_1170_;
v_x_1165_ = v_tail_1168_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(lean_object* v_as_1172_, size_t v_i_1173_, size_t v_stop_1174_, lean_object* v_b_1175_){
_start:
{
uint8_t v___x_1176_; 
v___x_1176_ = lean_usize_dec_eq(v_i_1173_, v_stop_1174_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1178_; size_t v___x_1179_; size_t v___x_1180_; 
v___x_1177_ = lean_array_uget_borrowed(v_as_1172_, v_i_1173_);
lean_inc(v___x_1177_);
v___x_1178_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_updateFile_spec__0(v_b_1175_, v___x_1177_);
v___x_1179_ = ((size_t)1ULL);
v___x_1180_ = lean_usize_add(v_i_1173_, v___x_1179_);
v_i_1173_ = v___x_1180_;
v_b_1175_ = v___x_1178_;
goto _start;
}
else
{
return v_b_1175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1___boxed(lean_object* v_as_1182_, lean_object* v_i_1183_, lean_object* v_stop_1184_, lean_object* v_b_1185_){
_start:
{
size_t v_i_boxed_1186_; size_t v_stop_boxed_1187_; lean_object* v_res_1188_; 
v_i_boxed_1186_ = lean_unbox_usize(v_i_1183_);
lean_dec(v_i_1183_);
v_stop_boxed_1187_ = lean_unbox_usize(v_stop_1184_);
lean_dec(v_stop_1184_);
v_res_1188_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(v_as_1182_, v_i_boxed_1186_, v_stop_boxed_1187_, v_b_1185_);
lean_dec_ref(v_as_1182_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile(lean_object* v_file_1189_, lean_object* v_cache_1190_, lean_object* v_a_1191_){
_start:
{
lean_object* v_a_1194_; lean_object* v_a_1195_; lean_object* v___x_1197_; 
lean_inc_ref(v_file_1189_);
v___x_1197_ = l_Lake_createParentDirs(v_file_1189_);
if (lean_obj_tag(v___x_1197_) == 0)
{
uint8_t v___x_1198_; lean_object* v___x_1199_; 
lean_dec_ref_known(v___x_1197_, 1);
v___x_1198_ = 4;
v___x_1199_ = lean_io_prim_handle_mk(v_file_1189_, v___x_1198_);
if (lean_obj_tag(v___x_1199_) == 0)
{
uint8_t v___x_1200_; lean_object* v___x_1201_; 
lean_dec_ref_known(v___x_1199_, 1);
v___x_1200_ = 3;
v___x_1201_ = lean_io_prim_handle_mk(v_file_1189_, v___x_1200_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; uint8_t v___x_1203_; lean_object* v___x_1204_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1202_);
lean_dec_ref_known(v___x_1201_, 1);
v___x_1203_ = 1;
v___x_1204_ = lean_io_prim_handle_lock(v_a_1202_, v___x_1203_);
if (lean_obj_tag(v___x_1204_) == 0)
{
uint8_t v___x_1205_; lean_object* v___x_1206_; 
lean_dec_ref_known(v___x_1204_, 1);
v___x_1205_ = 0;
v___x_1206_ = lean_io_prim_handle_get_line(v_a_1202_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1208_; 
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
lean_inc(v_a_1207_);
lean_dec_ref_known(v___x_1206_, 1);
lean_inc_ref(v_file_1189_);
v___x_1208_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_1189_, v_a_1207_, v_a_1191_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 1);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1208_, 2);
v___x_1210_ = lean_unsigned_to_nat(2u);
v___x_1211_ = lean_unsigned_to_nat(0u);
v___x_1212_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_1213_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_a_1202_, v_file_1189_, v___x_1205_, v___x_1210_, v___x_1212_, v_a_1209_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_a_1214_; lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1238_; 
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
v_a_1215_ = lean_ctor_get(v___x_1213_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1217_ = v___x_1213_;
v_isShared_1218_ = v_isSharedCheck_1238_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_inc(v_a_1214_);
lean_dec(v___x_1213_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1238_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___y_1220_; lean_object* v_buckets_1232_; lean_object* v___x_1233_; uint8_t v___x_1234_; 
v_buckets_1232_ = lean_ctor_get(v_cache_1190_, 1);
v___x_1233_ = lean_array_get_size(v_buckets_1232_);
v___x_1234_ = lean_nat_dec_lt(v___x_1211_, v___x_1233_);
if (v___x_1234_ == 0)
{
v___y_1220_ = v_a_1214_;
goto v___jp_1219_;
}
else
{
size_t v___x_1235_; size_t v___x_1236_; lean_object* v___x_1237_; 
v___x_1235_ = ((size_t)0ULL);
v___x_1236_ = lean_usize_of_nat(v___x_1233_);
v___x_1237_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_updateFile_spec__1(v_buckets_1232_, v___x_1235_, v___x_1236_, v_a_1214_);
v___y_1220_ = v___x_1237_;
goto v___jp_1219_;
}
v___jp_1219_:
{
lean_object* v___x_1221_; 
v___x_1221_ = lean_io_prim_handle_rewind(v_a_1202_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v___x_1222_; 
lean_dec_ref_known(v___x_1221_, 1);
lean_del_object(v___x_1217_);
v___x_1222_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_a_1202_, v___y_1220_, v___x_1205_, v_a_1215_);
lean_dec(v_a_1202_);
return v___x_1222_;
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1224_; uint8_t v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1230_; 
lean_dec_ref(v___y_1220_);
lean_dec(v_a_1202_);
v_a_1223_ = lean_ctor_get(v___x_1221_, 0);
lean_inc(v_a_1223_);
lean_dec_ref_known(v___x_1221_, 1);
v___x_1224_ = lean_io_error_to_string(v_a_1223_);
v___x_1225_ = 3;
v___x_1226_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1226_, 0, v___x_1224_);
lean_ctor_set_uint8(v___x_1226_, sizeof(void*)*1, v___x_1225_);
v___x_1227_ = lean_array_get_size(v_a_1215_);
v___x_1228_ = lean_array_push(v_a_1215_, v___x_1226_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set_tag(v___x_1217_, 1);
lean_ctor_set(v___x_1217_, 1, v___x_1228_);
lean_ctor_set(v___x_1217_, 0, v___x_1227_);
v___x_1230_ = v___x_1217_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___x_1227_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v___x_1228_);
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
else
{
lean_object* v_a_1239_; lean_object* v_a_1240_; 
lean_dec(v_a_1202_);
v_a_1239_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_a_1239_);
v_a_1240_ = lean_ctor_get(v___x_1213_, 1);
lean_inc(v_a_1240_);
lean_dec_ref_known(v___x_1213_, 2);
v_a_1194_ = v_a_1239_;
v_a_1195_ = v_a_1240_;
goto v___jp_1193_;
}
}
else
{
lean_object* v_a_1241_; lean_object* v_a_1242_; 
lean_dec(v_a_1202_);
lean_dec_ref(v_file_1189_);
v_a_1241_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1241_);
v_a_1242_ = lean_ctor_get(v___x_1208_, 1);
lean_inc(v_a_1242_);
lean_dec_ref_known(v___x_1208_, 2);
v_a_1194_ = v_a_1241_;
v_a_1195_ = v_a_1242_;
goto v___jp_1193_;
}
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1244_; uint8_t v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
lean_dec(v_a_1202_);
lean_dec_ref(v_file_1189_);
v_a_1243_ = lean_ctor_get(v___x_1206_, 0);
lean_inc(v_a_1243_);
lean_dec_ref_known(v___x_1206_, 1);
v___x_1244_ = lean_io_error_to_string(v_a_1243_);
v___x_1245_ = 3;
v___x_1246_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1246_, 0, v___x_1244_);
lean_ctor_set_uint8(v___x_1246_, sizeof(void*)*1, v___x_1245_);
v___x_1247_ = lean_array_get_size(v_a_1191_);
v___x_1248_ = lean_array_push(v_a_1191_, v___x_1246_);
v_a_1194_ = v___x_1247_;
v_a_1195_ = v___x_1248_;
goto v___jp_1193_;
}
}
else
{
lean_object* v_a_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
lean_dec(v_a_1202_);
lean_dec_ref(v_file_1189_);
v_a_1249_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1249_);
lean_dec_ref_known(v___x_1204_, 1);
v___x_1250_ = lean_io_error_to_string(v_a_1249_);
v___x_1251_ = 3;
v___x_1252_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1252_, 0, v___x_1250_);
lean_ctor_set_uint8(v___x_1252_, sizeof(void*)*1, v___x_1251_);
v___x_1253_ = lean_array_get_size(v_a_1191_);
v___x_1254_ = lean_array_push(v_a_1191_, v___x_1252_);
v___x_1255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1253_);
lean_ctor_set(v___x_1255_, 1, v___x_1254_);
return v___x_1255_;
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; uint8_t v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v_a_1256_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1256_);
lean_dec_ref_known(v___x_1201_, 1);
v___x_1257_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_1258_ = lean_string_append(v_file_1189_, v___x_1257_);
v___x_1259_ = lean_io_error_to_string(v_a_1256_);
v___x_1260_ = lean_string_append(v___x_1258_, v___x_1259_);
lean_dec_ref(v___x_1259_);
v___x_1261_ = 3;
v___x_1262_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1262_, 0, v___x_1260_);
lean_ctor_set_uint8(v___x_1262_, sizeof(void*)*1, v___x_1261_);
v___x_1263_ = lean_array_get_size(v_a_1191_);
v___x_1264_ = lean_array_push(v_a_1191_, v___x_1262_);
v___x_1265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1263_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
return v___x_1265_;
}
}
else
{
lean_object* v_a_1266_; lean_object* v___x_1267_; uint8_t v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
lean_dec_ref(v_file_1189_);
v_a_1266_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1266_);
lean_dec_ref_known(v___x_1199_, 1);
v___x_1267_ = lean_io_error_to_string(v_a_1266_);
v___x_1268_ = 3;
v___x_1269_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1269_, 0, v___x_1267_);
lean_ctor_set_uint8(v___x_1269_, sizeof(void*)*1, v___x_1268_);
v___x_1270_ = lean_array_get_size(v_a_1191_);
v___x_1271_ = lean_array_push(v_a_1191_, v___x_1269_);
v___x_1272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1270_);
lean_ctor_set(v___x_1272_, 1, v___x_1271_);
return v___x_1272_;
}
}
else
{
lean_object* v_a_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
lean_dec_ref(v_file_1189_);
v_a_1273_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1273_);
lean_dec_ref_known(v___x_1197_, 1);
v___x_1274_ = lean_io_error_to_string(v_a_1273_);
v___x_1275_ = 3;
v___x_1276_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1276_, 0, v___x_1274_);
lean_ctor_set_uint8(v___x_1276_, sizeof(void*)*1, v___x_1275_);
v___x_1277_ = lean_array_get_size(v_a_1191_);
v___x_1278_ = lean_array_push(v_a_1191_, v___x_1276_);
v___x_1279_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1277_);
lean_ctor_set(v___x_1279_, 1, v___x_1278_);
return v___x_1279_;
}
v___jp_1193_:
{
lean_object* v___x_1196_; 
v___x_1196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1196_, 0, v_a_1194_);
lean_ctor_set(v___x_1196_, 1, v_a_1195_);
return v___x_1196_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile___boxed(lean_object* v_file_1280_, lean_object* v_cache_1281_, lean_object* v_a_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lake_CacheMap_updateFile(v_file_1280_, v_cache_1281_, v_a_1282_);
lean_dec_ref(v_cache_1281_);
return v_res_1284_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__0(void){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = ((lean_object*)(l_Lake_CacheMap_schemaVersion));
v___x_1286_ = l_Lake_Date_toString(v___x_1285_);
return v___x_1286_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__1(void){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__0, &l_Lake_CacheMap_writeFile___closed__0_once, _init_l_Lake_CacheMap_writeFile___closed__0);
v___x_1288_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
return v___x_1288_;
}
}
static lean_object* _init_l_Lake_CacheMap_writeFile___closed__2(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__1, &l_Lake_CacheMap_writeFile___closed__1_once, _init_l_Lake_CacheMap_writeFile___closed__1);
v___x_1290_ = l_Lean_Json_compress(v___x_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile(lean_object* v_file_1291_, lean_object* v_cache_1292_, uint8_t v_platformIndependent_1293_, lean_object* v_a_1294_){
_start:
{
lean_object* v___x_1296_; 
lean_inc_ref(v_file_1291_);
v___x_1296_ = l_Lake_createParentDirs(v_file_1291_);
if (lean_obj_tag(v___x_1296_) == 0)
{
uint8_t v___x_1297_; lean_object* v___x_1298_; 
lean_dec_ref_known(v___x_1296_, 1);
v___x_1297_ = 1;
v___x_1298_ = lean_io_prim_handle_mk(v_file_1291_, v___x_1297_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; uint8_t v___x_1300_; lean_object* v___x_1301_; 
lean_dec_ref(v_file_1291_);
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1299_);
lean_dec_ref_known(v___x_1298_, 1);
v___x_1300_ = 1;
v___x_1301_ = lean_io_prim_handle_lock(v_a_1299_, v___x_1300_);
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
lean_dec_ref_known(v___x_1301_, 1);
v___x_1302_ = lean_obj_once(&l_Lake_CacheMap_writeFile___closed__2, &l_Lake_CacheMap_writeFile___closed__2_once, _init_l_Lake_CacheMap_writeFile___closed__2);
v___x_1303_ = l_IO_FS_Handle_putStrLn(v_a_1299_, v___x_1302_);
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_object* v___x_1304_; 
lean_dec_ref_known(v___x_1303_, 1);
v___x_1304_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_a_1299_, v_cache_1292_, v_platformIndependent_1293_, v_a_1294_);
lean_dec(v_a_1299_);
return v___x_1304_;
}
else
{
lean_object* v_a_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
lean_dec(v_a_1299_);
lean_dec_ref(v_cache_1292_);
v_a_1305_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_a_1305_);
lean_dec_ref_known(v___x_1303_, 1);
v___x_1306_ = lean_io_error_to_string(v_a_1305_);
v___x_1307_ = 3;
v___x_1308_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set_uint8(v___x_1308_, sizeof(void*)*1, v___x_1307_);
v___x_1309_ = lean_array_get_size(v_a_1294_);
v___x_1310_ = lean_array_push(v_a_1294_, v___x_1308_);
v___x_1311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
return v___x_1311_;
}
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
lean_dec(v_a_1299_);
lean_dec_ref(v_cache_1292_);
v_a_1312_ = lean_ctor_get(v___x_1301_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1301_, 1);
v___x_1313_ = lean_io_error_to_string(v_a_1312_);
v___x_1314_ = 3;
v___x_1315_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1315_, 0, v___x_1313_);
lean_ctor_set_uint8(v___x_1315_, sizeof(void*)*1, v___x_1314_);
v___x_1316_ = lean_array_get_size(v_a_1294_);
v___x_1317_ = lean_array_push(v_a_1294_, v___x_1315_);
v___x_1318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1316_);
lean_ctor_set(v___x_1318_, 1, v___x_1317_);
return v___x_1318_;
}
}
else
{
lean_object* v_a_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; uint8_t v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_dec_ref(v_cache_1292_);
v_a_1319_ = lean_ctor_get(v___x_1298_, 0);
lean_inc(v_a_1319_);
lean_dec_ref_known(v___x_1298_, 1);
v___x_1320_ = ((lean_object*)(l_Lake_CacheMap_load___closed__0));
v___x_1321_ = lean_string_append(v_file_1291_, v___x_1320_);
v___x_1322_ = lean_io_error_to_string(v_a_1319_);
v___x_1323_ = lean_string_append(v___x_1321_, v___x_1322_);
lean_dec_ref(v___x_1322_);
v___x_1324_ = 3;
v___x_1325_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1325_, 0, v___x_1323_);
lean_ctor_set_uint8(v___x_1325_, sizeof(void*)*1, v___x_1324_);
v___x_1326_ = lean_array_get_size(v_a_1294_);
v___x_1327_ = lean_array_push(v_a_1294_, v___x_1325_);
v___x_1328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
return v___x_1328_;
}
}
else
{
lean_object* v_a_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
lean_dec_ref(v_cache_1292_);
lean_dec_ref(v_file_1291_);
v_a_1329_ = lean_ctor_get(v___x_1296_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1296_, 1);
v___x_1330_ = lean_io_error_to_string(v_a_1329_);
v___x_1331_ = 3;
v___x_1332_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*1, v___x_1331_);
v___x_1333_ = lean_array_get_size(v_a_1294_);
v___x_1334_ = lean_array_push(v_a_1294_, v___x_1332_);
v___x_1335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1333_);
lean_ctor_set(v___x_1335_, 1, v___x_1334_);
return v___x_1335_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile___boxed(lean_object* v_file_1336_, lean_object* v_cache_1337_, lean_object* v_platformIndependent_1338_, lean_object* v_a_1339_, lean_object* v___y_1340_){
_start:
{
uint8_t v_platformIndependent_boxed_1341_; lean_object* v_res_1342_; 
v_platformIndependent_boxed_1341_ = lean_unbox(v_platformIndependent_1338_);
v_res_1342_ = l_Lake_CacheMap_writeFile(v_file_1336_, v_cache_1337_, v_platformIndependent_boxed_1341_, v_a_1339_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(uint64_t v_a_1343_, lean_object* v_x_1344_){
_start:
{
if (lean_obj_tag(v_x_1344_) == 0)
{
lean_object* v___x_1345_; 
v___x_1345_ = lean_box(0);
return v___x_1345_;
}
else
{
lean_object* v_key_1346_; lean_object* v_value_1347_; lean_object* v_tail_1348_; uint64_t v___x_1349_; uint8_t v___x_1350_; 
v_key_1346_ = lean_ctor_get(v_x_1344_, 0);
v_value_1347_ = lean_ctor_get(v_x_1344_, 1);
v_tail_1348_ = lean_ctor_get(v_x_1344_, 2);
v___x_1349_ = lean_unbox_uint64(v_key_1346_);
v___x_1350_ = lean_uint64_dec_eq(v___x_1349_, v_a_1343_);
if (v___x_1350_ == 0)
{
v_x_1344_ = v_tail_1348_;
goto _start;
}
else
{
lean_object* v___x_1352_; 
lean_inc(v_value_1347_);
v___x_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1352_, 0, v_value_1347_);
return v___x_1352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_1353_, lean_object* v_x_1354_){
_start:
{
uint64_t v_a_boxed_1355_; lean_object* v_res_1356_; 
v_a_boxed_1355_ = lean_unbox_uint64(v_a_1353_);
lean_dec_ref(v_a_1353_);
v_res_1356_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_boxed_1355_, v_x_1354_);
lean_dec(v_x_1354_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(lean_object* v_m_1357_, uint64_t v_a_1358_){
_start:
{
lean_object* v_buckets_1359_; lean_object* v___x_1360_; uint64_t v___x_1361_; uint64_t v___x_1362_; uint64_t v_fold_1363_; uint64_t v___x_1364_; uint64_t v___x_1365_; uint64_t v___x_1366_; size_t v___x_1367_; size_t v___x_1368_; size_t v___x_1369_; size_t v___x_1370_; size_t v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
v_buckets_1359_ = lean_ctor_get(v_m_1357_, 1);
v___x_1360_ = lean_array_get_size(v_buckets_1359_);
v___x_1361_ = 32ULL;
v___x_1362_ = lean_uint64_shift_right(v_a_1358_, v___x_1361_);
v_fold_1363_ = lean_uint64_xor(v_a_1358_, v___x_1362_);
v___x_1364_ = 16ULL;
v___x_1365_ = lean_uint64_shift_right(v_fold_1363_, v___x_1364_);
v___x_1366_ = lean_uint64_xor(v_fold_1363_, v___x_1365_);
v___x_1367_ = lean_uint64_to_usize(v___x_1366_);
v___x_1368_ = lean_usize_of_nat(v___x_1360_);
v___x_1369_ = ((size_t)1ULL);
v___x_1370_ = lean_usize_sub(v___x_1368_, v___x_1369_);
v___x_1371_ = lean_usize_land(v___x_1367_, v___x_1370_);
v___x_1372_ = lean_array_uget_borrowed(v_buckets_1359_, v___x_1371_);
v___x_1373_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_1358_, v___x_1372_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg___boxed(lean_object* v_m_1374_, lean_object* v_a_1375_){
_start:
{
uint64_t v_a_boxed_1376_; lean_object* v_res_1377_; 
v_a_boxed_1376_ = lean_unbox_uint64(v_a_1375_);
lean_dec_ref(v_a_1375_);
v_res_1377_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_m_1374_, v_a_boxed_1376_);
lean_dec_ref(v_m_1374_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f(uint64_t v_inputHash_1378_, lean_object* v_cache_1379_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_cache_1379_, v_inputHash_1378_);
if (lean_obj_tag(v___x_1380_) == 0)
{
lean_object* v___x_1381_; 
v___x_1381_ = lean_box(0);
return v___x_1381_;
}
else
{
lean_object* v_val_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1390_; 
v_val_1382_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1384_ = v___x_1380_;
v_isShared_1385_ = v_isSharedCheck_1390_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_val_1382_);
lean_dec(v___x_1380_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1390_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v_out_1386_; lean_object* v___x_1388_; 
v_out_1386_ = lean_ctor_get(v_val_1382_, 0);
lean_inc(v_out_1386_);
lean_dec(v_val_1382_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 0, v_out_1386_);
v___x_1388_ = v___x_1384_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_out_1386_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_get_x3f___boxed(lean_object* v_inputHash_1391_, lean_object* v_cache_1392_){
_start:
{
uint64_t v_inputHash_boxed_1393_; lean_object* v_res_1394_; 
v_inputHash_boxed_1393_ = lean_unbox_uint64(v_inputHash_1391_);
lean_dec_ref(v_inputHash_1391_);
v_res_1394_ = l_Lake_CacheMap_get_x3f(v_inputHash_boxed_1393_, v_cache_1392_);
lean_dec_ref(v_cache_1392_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0(lean_object* v_00_u03b2_1395_, lean_object* v_m_1396_, uint64_t v_a_1397_){
_start:
{
lean_object* v___x_1398_; 
v___x_1398_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_m_1396_, v_a_1397_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___boxed(lean_object* v_00_u03b2_1399_, lean_object* v_m_1400_, lean_object* v_a_1401_){
_start:
{
uint64_t v_a_boxed_1402_; lean_object* v_res_1403_; 
v_a_boxed_1402_ = lean_unbox_uint64(v_a_1401_);
lean_dec_ref(v_a_1401_);
v_res_1403_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0(v_00_u03b2_1399_, v_m_1400_, v_a_boxed_1402_);
lean_dec_ref(v_m_1400_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1404_, uint64_t v_a_1405_, lean_object* v_x_1406_){
_start:
{
lean_object* v___x_1407_; 
v___x_1407_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___redArg(v_a_1405_, v_x_1406_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1408_, lean_object* v_a_1409_, lean_object* v_x_1410_){
_start:
{
uint64_t v_a_boxed_1411_; lean_object* v_res_1412_; 
v_a_boxed_1411_ = lean_unbox_uint64(v_a_1409_);
lean_dec_ref(v_a_1409_);
v_res_1412_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0_spec__0(v_00_u03b2_1408_, v_a_boxed_1411_, v_x_1410_);
lean_dec(v_x_1410_);
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(uint64_t v_inputHash_1413_, lean_object* v_out_1414_, lean_object* v_cache_1415_, uint8_t v_platformIndependent_1416_){
_start:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1417_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1417_, 0, v_out_1414_);
lean_ctor_set_uint8(v___x_1417_, sizeof(void*)*1, v_platformIndependent_1416_);
v___x_1418_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_cache_1415_, v_inputHash_1413_, v___x_1417_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore___boxed(lean_object* v_inputHash_1419_, lean_object* v_out_1420_, lean_object* v_cache_1421_, lean_object* v_platformIndependent_1422_){
_start:
{
uint64_t v_inputHash_boxed_1423_; uint8_t v_platformIndependent_boxed_1424_; lean_object* v_res_1425_; 
v_inputHash_boxed_1423_ = lean_unbox_uint64(v_inputHash_1419_);
lean_dec_ref(v_inputHash_1419_);
v_platformIndependent_boxed_1424_ = lean_unbox(v_platformIndependent_1422_);
v_res_1425_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_boxed_1423_, v_out_1420_, v_cache_1421_, v_platformIndependent_boxed_1424_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg(lean_object* v_inst_1426_, uint64_t v_inputHash_1427_, lean_object* v_val_1428_, lean_object* v_cache_1429_, uint8_t v_platformIndependent_1430_){
_start:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1431_ = lean_apply_1(v_inst_1426_, v_val_1428_);
v___x_1432_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1427_, v___x_1431_, v_cache_1429_, v_platformIndependent_1430_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___redArg___boxed(lean_object* v_inst_1433_, lean_object* v_inputHash_1434_, lean_object* v_val_1435_, lean_object* v_cache_1436_, lean_object* v_platformIndependent_1437_){
_start:
{
uint64_t v_inputHash_boxed_1438_; uint8_t v_platformIndependent_boxed_1439_; lean_object* v_res_1440_; 
v_inputHash_boxed_1438_ = lean_unbox_uint64(v_inputHash_1434_);
lean_dec_ref(v_inputHash_1434_);
v_platformIndependent_boxed_1439_ = lean_unbox(v_platformIndependent_1437_);
v_res_1440_ = l_Lake_CacheMap_insert___redArg(v_inst_1433_, v_inputHash_boxed_1438_, v_val_1435_, v_cache_1436_, v_platformIndependent_boxed_1439_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert(lean_object* v_00_u03b1_1441_, lean_object* v_inst_1442_, uint64_t v_inputHash_1443_, lean_object* v_val_1444_, lean_object* v_cache_1445_, uint8_t v_platformIndependent_1446_){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1447_ = lean_apply_1(v_inst_1442_, v_val_1444_);
v___x_1448_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1443_, v___x_1447_, v_cache_1445_, v_platformIndependent_1446_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_insert___boxed(lean_object* v_00_u03b1_1449_, lean_object* v_inst_1450_, lean_object* v_inputHash_1451_, lean_object* v_val_1452_, lean_object* v_cache_1453_, lean_object* v_platformIndependent_1454_){
_start:
{
uint64_t v_inputHash_boxed_1455_; uint8_t v_platformIndependent_boxed_1456_; lean_object* v_res_1457_; 
v_inputHash_boxed_1455_ = lean_unbox_uint64(v_inputHash_1451_);
lean_dec_ref(v_inputHash_1451_);
v_platformIndependent_boxed_1456_ = lean_unbox(v_platformIndependent_1454_);
v_res_1457_ = l_Lake_CacheMap_insert(v_00_u03b1_1449_, v_inst_1450_, v_inputHash_boxed_1455_, v_val_1452_, v_cache_1453_, v_platformIndependent_boxed_1456_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(lean_object* v_init_1461_, lean_object* v_x_1462_, lean_object* v___y_1463_){
_start:
{
if (lean_obj_tag(v_x_1462_) == 0)
{
lean_object* v_v_1465_; lean_object* v_l_1466_; lean_object* v_r_1467_; lean_object* v___x_1468_; 
v_v_1465_ = lean_ctor_get(v_x_1462_, 2);
lean_inc(v_v_1465_);
v_l_1466_ = lean_ctor_get(v_x_1462_, 3);
lean_inc(v_l_1466_);
v_r_1467_ = lean_ctor_get(v_x_1462_, 4);
lean_inc(v_r_1467_);
lean_dec_ref_known(v_x_1462_, 5);
v___x_1468_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_init_1461_, v_l_1466_, v___y_1463_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v_a_1470_; lean_object* v___x_1471_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1469_);
v_a_1470_ = lean_ctor_get(v___x_1468_, 1);
lean_inc(v_a_1470_);
lean_dec_ref_known(v___x_1468_, 2);
v___x_1471_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_a_1469_, v_v_1465_, v_a_1470_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v_a_1472_; lean_object* v_a_1473_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_a_1472_);
v_a_1473_ = lean_ctor_get(v___x_1471_, 1);
lean_inc(v_a_1473_);
lean_dec_ref_known(v___x_1471_, 2);
v_init_1461_ = v_a_1472_;
v_x_1462_ = v_r_1467_;
v___y_1463_ = v_a_1473_;
goto _start;
}
else
{
lean_dec(v_r_1467_);
return v___x_1471_;
}
}
else
{
lean_dec(v_r_1467_);
lean_dec(v_v_1465_);
return v___x_1468_;
}
}
else
{
lean_object* v___x_1475_; 
v___x_1475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1475_, 0, v_init_1461_);
lean_ctor_set(v___x_1475_, 1, v___y_1463_);
return v___x_1475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(lean_object* v_as_1476_, lean_object* v_o_1477_, lean_object* v_a_1478_){
_start:
{
lean_object* v___y_1481_; 
switch(lean_obj_tag(v_o_1477_))
{
case 0:
{
v___y_1481_ = v_a_1478_;
goto v___jp_1480_;
}
case 1:
{
lean_object* v___x_1483_; 
lean_dec_ref_known(v_o_1477_, 0);
v___x_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1483_, 0, v_as_1476_);
lean_ctor_set(v___x_1483_, 1, v_a_1478_);
return v___x_1483_;
}
case 2:
{
lean_object* v_n_1484_; lean_object* v___x_1485_; 
v_n_1484_ = lean_ctor_get(v_o_1477_, 0);
lean_inc_ref(v_n_1484_);
lean_dec_ref_known(v_o_1477_, 1);
v___x_1485_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_1484_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_a_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; uint8_t v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; 
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_a_1486_);
lean_dec_ref_known(v___x_1485_, 1);
v___x_1487_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0));
v___x_1488_ = lean_string_append(v___x_1487_, v_a_1486_);
lean_dec(v_a_1486_);
v___x_1489_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_1490_ = lean_string_append(v___x_1488_, v___x_1489_);
v___x_1491_ = l_Lean_JsonNumber_toString(v_n_1484_);
v___x_1492_ = lean_string_append(v___x_1490_, v___x_1491_);
lean_dec_ref(v___x_1491_);
v___x_1493_ = 3;
v___x_1494_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1494_, 0, v___x_1492_);
lean_ctor_set_uint8(v___x_1494_, sizeof(void*)*1, v___x_1493_);
v___x_1495_ = lean_array_push(v_a_1478_, v___x_1494_);
v___y_1481_ = v___x_1495_;
goto v___jp_1480_;
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; uint64_t v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_dec_ref(v_n_1484_);
v_a_1496_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1485_, 1);
v___x_1497_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1));
v___x_1498_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1498_, 0, v___x_1497_);
v___x_1499_ = lean_unbox_uint64(v_a_1496_);
lean_dec(v_a_1496_);
lean_ctor_set_uint64(v___x_1498_, sizeof(void*)*1, v___x_1499_);
v___x_1500_ = lean_array_push(v_as_1476_, v___x_1498_);
v___x_1501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
lean_ctor_set(v___x_1501_, 1, v_a_1478_);
return v___x_1501_;
}
}
case 3:
{
lean_object* v_s_1502_; lean_object* v___x_1503_; 
v_s_1502_ = lean_ctor_get(v_o_1477_, 0);
lean_inc_ref(v_s_1502_);
lean_dec_ref_known(v_o_1477_, 1);
v___x_1503_ = l_Lake_ArtifactDescr_ofFilePath_x3f(v_s_1502_);
lean_dec_ref(v_s_1502_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1503_, 1);
v___x_1505_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2));
v___x_1506_ = lean_string_append(v___x_1505_, v_a_1504_);
lean_dec(v_a_1504_);
v___x_1507_ = 3;
v___x_1508_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1508_, 0, v___x_1506_);
lean_ctor_set_uint8(v___x_1508_, sizeof(void*)*1, v___x_1507_);
v___x_1509_ = lean_array_push(v_a_1478_, v___x_1508_);
v___y_1481_ = v___x_1509_;
goto v___jp_1480_;
}
else
{
lean_object* v_a_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; 
v_a_1510_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v___x_1503_, 1);
v___x_1511_ = lean_array_push(v_as_1476_, v_a_1510_);
v___x_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1511_);
lean_ctor_set(v___x_1512_, 1, v_a_1478_);
return v___x_1512_;
}
}
case 4:
{
lean_object* v_elems_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; uint8_t v___x_1516_; 
v_elems_1513_ = lean_ctor_get(v_o_1477_, 0);
lean_inc_ref(v_elems_1513_);
lean_dec_ref_known(v_o_1477_, 1);
v___x_1514_ = lean_unsigned_to_nat(0u);
v___x_1515_ = lean_array_get_size(v_elems_1513_);
v___x_1516_ = lean_nat_dec_lt(v___x_1514_, v___x_1515_);
if (v___x_1516_ == 0)
{
lean_object* v___x_1517_; 
lean_dec_ref(v_elems_1513_);
v___x_1517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1517_, 0, v_as_1476_);
lean_ctor_set(v___x_1517_, 1, v_a_1478_);
return v___x_1517_;
}
else
{
uint8_t v___x_1518_; 
v___x_1518_ = lean_nat_dec_le(v___x_1515_, v___x_1515_);
if (v___x_1518_ == 0)
{
if (v___x_1516_ == 0)
{
lean_object* v___x_1519_; 
lean_dec_ref(v_elems_1513_);
v___x_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1519_, 0, v_as_1476_);
lean_ctor_set(v___x_1519_, 1, v_a_1478_);
return v___x_1519_;
}
else
{
size_t v___x_1520_; size_t v___x_1521_; lean_object* v___x_1522_; 
v___x_1520_ = ((size_t)0ULL);
v___x_1521_ = lean_usize_of_nat(v___x_1515_);
v___x_1522_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_elems_1513_, v___x_1520_, v___x_1521_, v_as_1476_, v_a_1478_);
lean_dec_ref(v_elems_1513_);
return v___x_1522_;
}
}
else
{
size_t v___x_1523_; size_t v___x_1524_; lean_object* v___x_1525_; 
v___x_1523_ = ((size_t)0ULL);
v___x_1524_ = lean_usize_of_nat(v___x_1515_);
v___x_1525_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_elems_1513_, v___x_1523_, v___x_1524_, v_as_1476_, v_a_1478_);
lean_dec_ref(v_elems_1513_);
return v___x_1525_;
}
}
}
default: 
{
lean_object* v_kvPairs_1526_; lean_object* v___x_1527_; 
v_kvPairs_1526_ = lean_ctor_get(v_o_1477_, 0);
lean_inc(v_kvPairs_1526_);
lean_dec_ref_known(v_o_1477_, 1);
v___x_1527_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_as_1476_, v_kvPairs_1526_, v_a_1478_);
return v___x_1527_;
}
}
v___jp_1480_:
{
lean_object* v___x_1482_; 
v___x_1482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1482_, 0, v_as_1476_);
lean_ctor_set(v___x_1482_, 1, v___y_1481_);
return v___x_1482_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(lean_object* v_as_1528_, size_t v_i_1529_, size_t v_stop_1530_, lean_object* v_b_1531_, lean_object* v___y_1532_){
_start:
{
uint8_t v___x_1534_; 
v___x_1534_ = lean_usize_dec_eq(v_i_1529_, v_stop_1530_);
if (v___x_1534_ == 0)
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = lean_array_uget_borrowed(v_as_1528_, v_i_1529_);
lean_inc(v___x_1535_);
v___x_1536_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_b_1531_, v___x_1535_, v___y_1532_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v_a_1537_; lean_object* v_a_1538_; size_t v___x_1539_; size_t v___x_1540_; 
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
v_a_1538_ = lean_ctor_get(v___x_1536_, 1);
lean_inc(v_a_1538_);
lean_dec_ref_known(v___x_1536_, 2);
v___x_1539_ = ((size_t)1ULL);
v___x_1540_ = lean_usize_add(v_i_1529_, v___x_1539_);
v_i_1529_ = v___x_1540_;
v_b_1531_ = v_a_1537_;
v___y_1532_ = v_a_1538_;
goto _start;
}
else
{
return v___x_1536_;
}
}
else
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1542_, 0, v_b_1531_);
lean_ctor_set(v___x_1542_, 1, v___y_1532_);
return v___x_1542_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0___boxed(lean_object* v_as_1543_, lean_object* v_i_1544_, lean_object* v_stop_1545_, lean_object* v_b_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
size_t v_i_boxed_1549_; size_t v_stop_boxed_1550_; lean_object* v_res_1551_; 
v_i_boxed_1549_ = lean_unbox_usize(v_i_1544_);
lean_dec(v_i_1544_);
v_stop_boxed_1550_ = lean_unbox_usize(v_stop_1545_);
lean_dec(v_stop_1545_);
v_res_1551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_as_1543_, v_i_boxed_1549_, v_stop_boxed_1550_, v_b_1546_, v___y_1547_);
lean_dec_ref(v_as_1543_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1___boxed(lean_object* v_init_1552_, lean_object* v_x_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_init_1552_, v_x_1553_, v___y_1554_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___boxed(lean_object* v_as_1557_, lean_object* v_o_1558_, lean_object* v_a_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_as_1557_, v_o_1558_, v_a_1559_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(lean_object* v_x_1562_, lean_object* v_x_1563_, lean_object* v___y_1564_){
_start:
{
if (lean_obj_tag(v_x_1563_) == 0)
{
lean_object* v___x_1566_; 
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v_x_1562_);
lean_ctor_set(v___x_1566_, 1, v___y_1564_);
return v___x_1566_;
}
else
{
lean_object* v_value_1567_; lean_object* v_tail_1568_; lean_object* v_out_1569_; lean_object* v___x_1570_; 
v_value_1567_ = lean_ctor_get(v_x_1563_, 1);
lean_inc(v_value_1567_);
v_tail_1568_ = lean_ctor_get(v_x_1563_, 2);
lean_inc(v_tail_1568_);
lean_dec_ref_known(v_x_1563_, 3);
v_out_1569_ = lean_ctor_get(v_value_1567_, 0);
lean_inc(v_out_1569_);
lean_dec(v_value_1567_);
v___x_1570_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_x_1562_, v_out_1569_, v___y_1564_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v_a_1572_; 
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
lean_inc(v_a_1571_);
v_a_1572_ = lean_ctor_get(v___x_1570_, 1);
lean_inc(v_a_1572_);
lean_dec_ref_known(v___x_1570_, 2);
v_x_1562_ = v_a_1571_;
v_x_1563_ = v_tail_1568_;
v___y_1564_ = v_a_1572_;
goto _start;
}
else
{
lean_dec(v_tail_1568_);
return v___x_1570_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0___boxed(lean_object* v_x_1574_, lean_object* v_x_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(v_x_1574_, v_x_1575_, v___y_1576_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(lean_object* v_as_1579_, size_t v_i_1580_, size_t v_stop_1581_, lean_object* v_b_1582_, lean_object* v___y_1583_){
_start:
{
uint8_t v___x_1585_; 
v___x_1585_ = lean_usize_dec_eq(v_i_1580_, v_stop_1581_);
if (v___x_1585_ == 0)
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = lean_array_uget_borrowed(v_as_1579_, v_i_1580_);
lean_inc(v___x_1586_);
v___x_1587_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(v_b_1582_, v___x_1586_, v___y_1583_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; lean_object* v_a_1589_; size_t v___x_1590_; size_t v___x_1591_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
lean_inc(v_a_1588_);
v_a_1589_ = lean_ctor_get(v___x_1587_, 1);
lean_inc(v_a_1589_);
lean_dec_ref_known(v___x_1587_, 2);
v___x_1590_ = ((size_t)1ULL);
v___x_1591_ = lean_usize_add(v_i_1580_, v___x_1590_);
v_i_1580_ = v___x_1591_;
v_b_1582_ = v_a_1588_;
v___y_1583_ = v_a_1589_;
goto _start;
}
else
{
return v___x_1587_;
}
}
else
{
lean_object* v___x_1593_; 
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v_b_1582_);
lean_ctor_set(v___x_1593_, 1, v___y_1583_);
return v___x_1593_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1___boxed(lean_object* v_as_1594_, lean_object* v_i_1595_, lean_object* v_stop_1596_, lean_object* v_b_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
size_t v_i_boxed_1600_; size_t v_stop_boxed_1601_; lean_object* v_res_1602_; 
v_i_boxed_1600_ = lean_unbox_usize(v_i_1595_);
lean_dec(v_i_1595_);
v_stop_boxed_1601_ = lean_unbox_usize(v_stop_1596_);
lean_dec(v_stop_1596_);
v_res_1602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_as_1594_, v_i_boxed_1600_, v_stop_boxed_1601_, v_b_1597_, v___y_1598_);
lean_dec_ref(v_as_1594_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs(lean_object* v_map_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v_buckets_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1630_; 
v_buckets_1608_ = lean_ctor_get(v_map_1605_, 1);
v_isSharedCheck_1630_ = !lean_is_exclusive(v_map_1605_);
if (v_isSharedCheck_1630_ == 0)
{
lean_object* v_unused_1631_; 
v_unused_1631_ = lean_ctor_get(v_map_1605_, 0);
lean_dec(v_unused_1631_);
v___x_1610_ = v_map_1605_;
v_isShared_1611_ = v_isSharedCheck_1630_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_buckets_1608_);
lean_dec(v_map_1605_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1630_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___y_1616_; lean_object* v_a_1617_; lean_object* v___x_1623_; uint8_t v___x_1624_; 
v___x_1612_ = lean_unsigned_to_nat(0u);
v___x_1613_ = ((lean_object*)(l_Lake_CacheMap_collectOutputDescrs___closed__0));
v___x_1614_ = lean_array_get_size(v_a_1606_);
v___x_1623_ = lean_array_get_size(v_buckets_1608_);
v___x_1624_ = lean_nat_dec_lt(v___x_1612_, v___x_1623_);
if (v___x_1624_ == 0)
{
lean_object* v___x_1625_; 
lean_dec_ref(v_buckets_1608_);
lean_inc_ref(v_a_1606_);
v___x_1625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1613_);
lean_ctor_set(v___x_1625_, 1, v_a_1606_);
v___y_1616_ = v___x_1625_;
v_a_1617_ = v_a_1606_;
goto v___jp_1615_;
}
else
{
size_t v___x_1626_; size_t v___x_1627_; lean_object* v___x_1628_; 
v___x_1626_ = ((size_t)0ULL);
v___x_1627_ = lean_usize_of_nat(v___x_1623_);
v___x_1628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_buckets_1608_, v___x_1626_, v___x_1627_, v___x_1613_, v_a_1606_);
lean_dec_ref(v_buckets_1608_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_a_1629_; 
v_a_1629_ = lean_ctor_get(v___x_1628_, 1);
lean_inc(v_a_1629_);
v___y_1616_ = v___x_1628_;
v_a_1617_ = v_a_1629_;
goto v___jp_1615_;
}
else
{
lean_del_object(v___x_1610_);
return v___x_1628_;
}
}
v___jp_1615_:
{
lean_object* v___x_1618_; uint8_t v___x_1619_; 
v___x_1618_ = lean_array_get_size(v_a_1617_);
v___x_1619_ = lean_nat_dec_eq(v___x_1614_, v___x_1618_);
if (v___x_1619_ == 0)
{
lean_object* v___x_1621_; 
lean_dec_ref(v___y_1616_);
if (v_isShared_1611_ == 0)
{
lean_ctor_set_tag(v___x_1610_, 1);
lean_ctor_set(v___x_1610_, 1, v_a_1617_);
lean_ctor_set(v___x_1610_, 0, v___x_1614_);
v___x_1621_ = v___x_1610_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1614_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v_a_1617_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
else
{
lean_dec_ref(v_a_1617_);
lean_del_object(v___x_1610_);
return v___y_1616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs___boxed(lean_object* v_map_1632_, lean_object* v_a_1633_, lean_object* v___y_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lake_CacheMap_collectOutputDescrs(v_map_1632_, v_a_1633_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk(lean_object* v_init_1636_){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = lean_st_mk_ref(v_init_1636_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk___boxed(lean_object* v_init_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Lake_CacheRef_mk(v_init_1639_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f(uint64_t v_inputHash_1642_, lean_object* v_cache_1643_){
_start:
{
lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1645_ = lean_st_ref_take(v_cache_1643_);
v___x_1646_ = l_Lake_CacheMap_get_x3f(v_inputHash_1642_, v___x_1645_);
v___x_1647_ = lean_st_ref_put(v_cache_1643_, v___x_1645_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f___boxed(lean_object* v_inputHash_1648_, lean_object* v_cache_1649_, lean_object* v___y_1650_){
_start:
{
uint64_t v_inputHash_boxed_1651_; lean_object* v_res_1652_; 
v_inputHash_boxed_1651_ = lean_unbox_uint64(v_inputHash_1648_);
lean_dec_ref(v_inputHash_1648_);
v_res_1652_ = l_Lake_CacheRef_get_x3f(v_inputHash_boxed_1651_, v_cache_1649_);
lean_dec(v_cache_1649_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg(lean_object* v_inst_1653_, uint64_t v_inputHash_1654_, lean_object* v_val_1655_, lean_object* v_cache_1656_, uint8_t v_platformIndependent_1657_){
_start:
{
lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1659_ = lean_st_ref_take(v_cache_1656_);
v___x_1660_ = lean_apply_1(v_inst_1653_, v_val_1655_);
v___x_1661_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1654_, v___x_1660_, v___x_1659_, v_platformIndependent_1657_);
v___x_1662_ = lean_st_ref_put(v_cache_1656_, v___x_1661_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg___boxed(lean_object* v_inst_1663_, lean_object* v_inputHash_1664_, lean_object* v_val_1665_, lean_object* v_cache_1666_, lean_object* v_platformIndependent_1667_, lean_object* v___y_1668_){
_start:
{
uint64_t v_inputHash_boxed_1669_; uint8_t v_platformIndependent_boxed_1670_; lean_object* v_res_1671_; 
v_inputHash_boxed_1669_ = lean_unbox_uint64(v_inputHash_1664_);
lean_dec_ref(v_inputHash_1664_);
v_platformIndependent_boxed_1670_ = lean_unbox(v_platformIndependent_1667_);
v_res_1671_ = l_Lake_CacheRef_insert___redArg(v_inst_1663_, v_inputHash_boxed_1669_, v_val_1665_, v_cache_1666_, v_platformIndependent_boxed_1670_);
lean_dec(v_cache_1666_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert(lean_object* v_00_u03b1_1672_, lean_object* v_inst_1673_, uint64_t v_inputHash_1674_, lean_object* v_val_1675_, lean_object* v_cache_1676_, uint8_t v_platformIndependent_1677_){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1679_ = lean_st_ref_take(v_cache_1676_);
v___x_1680_ = lean_apply_1(v_inst_1673_, v_val_1675_);
v___x_1681_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1674_, v___x_1680_, v___x_1679_, v_platformIndependent_1677_);
v___x_1682_ = lean_st_ref_put(v_cache_1676_, v___x_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___boxed(lean_object* v_00_u03b1_1683_, lean_object* v_inst_1684_, lean_object* v_inputHash_1685_, lean_object* v_val_1686_, lean_object* v_cache_1687_, lean_object* v_platformIndependent_1688_, lean_object* v___y_1689_){
_start:
{
uint64_t v_inputHash_boxed_1690_; uint8_t v_platformIndependent_boxed_1691_; lean_object* v_res_1692_; 
v_inputHash_boxed_1690_ = lean_unbox_uint64(v_inputHash_1685_);
lean_dec_ref(v_inputHash_1685_);
v_platformIndependent_boxed_1691_ = lean_unbox(v_platformIndependent_1688_);
v_res_1692_ = l_Lake_CacheRef_insert(v_00_u03b1_1683_, v_inst_1684_, v_inputHash_boxed_1690_, v_val_1686_, v_cache_1687_, v_platformIndependent_boxed_1691_);
lean_dec(v_cache_1687_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString(lean_object* v_s_1695_){
_start:
{
lean_inc_ref(v_s_1695_);
return v_s_1695_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString___boxed(lean_object* v_s_1696_){
_start:
{
lean_object* v_res_1697_; 
v_res_1697_ = l_Lake_CacheServiceName_ofString(v_s_1696_);
lean_dec_ref(v_s_1696_);
return v_res_1697_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString(lean_object* v_self_1698_){
_start:
{
lean_inc_ref(v_self_1698_);
return v_self_1698_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString___boxed(lean_object* v_self_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_Lake_CacheServiceName_toString(v_self_1699_);
lean_dec_ref(v_self_1699_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_fromJson_x3f(lean_object* v_j_1703_){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l_Lean_Json_getStr_x3f(v_j_1703_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1712_; 
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1707_ = v___x_1704_;
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_dec(v___x_1704_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1710_; 
if (v_isShared_1708_ == 0)
{
v___x_1710_ = v___x_1707_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_a_1705_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
v_a_1713_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1704_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1704_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_toJson(lean_object* v_self_1723_){
_start:
{
lean_object* v___x_1724_; 
v___x_1724_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1724_, 0, v_self_1723_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(lean_object* v_x_1727_){
_start:
{
if (lean_obj_tag(v_x_1727_) == 0)
{
lean_object* v___x_1728_; 
v___x_1728_ = lean_unsigned_to_nat(0u);
return v___x_1728_;
}
else
{
lean_object* v___x_1729_; 
v___x_1729_ = lean_unsigned_to_nat(1u);
return v___x_1729_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx___boxed(lean_object* v_x_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(v_x_1730_);
lean_dec_ref(v_x_1730_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(lean_object* v_t_1732_, lean_object* v_k_1733_){
_start:
{
lean_object* v_s_1734_; lean_object* v___x_1735_; 
v_s_1734_ = lean_ctor_get(v_t_1732_, 0);
lean_inc_ref(v_s_1734_);
lean_dec_ref(v_t_1732_);
v___x_1735_ = lean_apply_1(v_k_1733_, v_s_1734_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(lean_object* v_motive_1736_, lean_object* v_ctorIdx_1737_, lean_object* v_t_1738_, lean_object* v_h_1739_, lean_object* v_k_1740_){
_start:
{
lean_object* v___x_1741_; 
v___x_1741_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1738_, v_k_1740_);
return v___x_1741_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___boxed(lean_object* v_motive_1742_, lean_object* v_ctorIdx_1743_, lean_object* v_t_1744_, lean_object* v_h_1745_, lean_object* v_k_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(v_motive_1742_, v_ctorIdx_1743_, v_t_1744_, v_h_1745_, v_k_1746_);
lean_dec(v_ctorIdx_1743_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim___redArg(lean_object* v_t_1748_, lean_object* v_str_1749_){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1748_, v_str_1749_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim(lean_object* v_motive_1751_, lean_object* v_t_1752_, lean_object* v_h_1753_, lean_object* v_str_1754_){
_start:
{
lean_object* v___x_1755_; 
v___x_1755_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1752_, v_str_1754_);
return v___x_1755_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim___redArg(lean_object* v_t_1756_, lean_object* v_repo_1757_){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1756_, v_repo_1757_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim(lean_object* v_motive_1759_, lean_object* v_t_1760_, lean_object* v_h_1761_, lean_object* v_repo_1762_){
_start:
{
lean_object* v___x_1763_; 
v___x_1763_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1760_, v_repo_1762_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofString(lean_object* v_s_1764_){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1765_, 0, v_s_1764_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofRepo(lean_object* v_fullName_1766_){
_start:
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1767_, 0, v_fullName_1766_);
return v___x_1767_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheServiceScope_isRepo(lean_object* v_self_1768_){
_start:
{
if (lean_obj_tag(v_self_1768_) == 1)
{
uint8_t v___x_1769_; 
v___x_1769_ = 1;
return v___x_1769_;
}
else
{
uint8_t v___x_1770_; 
v___x_1770_ = 0;
return v___x_1770_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_isRepo___boxed(lean_object* v_self_1771_){
_start:
{
uint8_t v_res_1772_; lean_object* v_r_1773_; 
v_res_1772_ = l_Lake_CacheServiceScope_isRepo(v_self_1771_);
lean_dec_ref(v_self_1771_);
v_r_1773_ = lean_box(v_res_1772_);
return v_r_1773_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString(lean_object* v_self_1774_){
_start:
{
lean_object* v_s_1775_; 
v_s_1775_ = lean_ctor_get(v_self_1774_, 0);
lean_inc_ref(v_s_1775_);
return v_s_1775_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString___boxed(lean_object* v_self_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lake_CacheServiceScope_toString(v_self_1776_);
lean_dec_ref(v_self_1776_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(lean_object* v_self_1780_){
_start:
{
lean_object* v_s_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
v_s_1781_ = lean_ctor_get(v_self_1780_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v_self_1780_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v_self_1780_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_s_1781_);
lean_dec(v_self_1780_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
lean_ctor_set_tag(v___x_1783_, 3);
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_s_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_ofData(lean_object* v_data_1798_){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = lean_box(0);
v___x_1800_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1800_, 0, v_data_1798_);
lean_ctor_set(v___x_1800_, 1, v___x_1799_);
lean_ctor_set(v___x_1800_, 2, v___x_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(lean_object* v_x_1801_){
_start:
{
if (lean_obj_tag(v_x_1801_) == 0)
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_box(0);
return v___x_1802_;
}
else
{
lean_object* v_val_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1810_; 
v_val_1803_ = lean_ctor_get(v_x_1801_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v_x_1801_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1805_ = v_x_1801_;
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_val_1803_);
lean_dec(v_x_1801_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1810_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1808_; 
if (v_isShared_1806_ == 0)
{
lean_ctor_set_tag(v___x_1805_, 3);
v___x_1808_ = v___x_1805_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_val_1803_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
}
}
}
static lean_object* _init_l_Lake_CacheOutput_toJson___closed__3(void){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1815_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__2));
v___x_1816_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__1));
v___x_1817_ = lean_box(1);
v___x_1818_ = l_Lake_JsonObject_insertJson(v___x_1817_, v___x_1816_, v___x_1815_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_toJson(lean_object* v_out_1822_){
_start:
{
lean_object* v_data_1823_; lean_object* v_service_x3f_1824_; lean_object* v_scope_x3f_1825_; lean_object* v_obj_1827_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v_obj_1834_; 
v_data_1823_ = lean_ctor_get(v_out_1822_, 0);
lean_inc(v_data_1823_);
v_service_x3f_1824_ = lean_ctor_get(v_out_1822_, 1);
lean_inc(v_service_x3f_1824_);
v_scope_x3f_1825_ = lean_ctor_get(v_out_1822_, 2);
lean_inc(v_scope_x3f_1825_);
lean_dec_ref(v_out_1822_);
v___x_1831_ = lean_obj_once(&l_Lake_CacheOutput_toJson___closed__3, &l_Lake_CacheOutput_toJson___closed__3_once, _init_l_Lake_CacheOutput_toJson___closed__3);
v___x_1832_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__4));
v___x_1833_ = l_Lean_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(v_service_x3f_1824_);
v_obj_1834_ = l_Lake_JsonObject_insertJson(v___x_1831_, v___x_1832_, v___x_1833_);
if (lean_obj_tag(v_scope_x3f_1825_) == 1)
{
lean_object* v_val_1835_; lean_object* v___y_1837_; uint8_t v___x_1840_; 
v_val_1835_ = lean_ctor_get(v_scope_x3f_1825_, 0);
lean_inc(v_val_1835_);
lean_dec_ref_known(v_scope_x3f_1825_, 1);
v___x_1840_ = l_Lake_CacheServiceScope_isRepo(v_val_1835_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; 
v___x_1841_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__5));
v___y_1837_ = v___x_1841_;
goto v___jp_1836_;
}
else
{
lean_object* v___x_1842_; 
v___x_1842_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__6));
v___y_1837_ = v___x_1842_;
goto v___jp_1836_;
}
v___jp_1836_:
{
lean_object* v___x_1838_; lean_object* v_obj_1839_; 
v___x_1838_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(v_val_1835_);
lean_inc_ref(v___y_1837_);
v_obj_1839_ = l_Lake_JsonObject_insertJson(v_obj_1834_, v___y_1837_, v___x_1838_);
v_obj_1827_ = v_obj_1839_;
goto v___jp_1826_;
}
}
else
{
lean_dec(v_scope_x3f_1825_);
v_obj_1827_ = v_obj_1834_;
goto v___jp_1826_;
}
v___jp_1826_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1828_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_1829_ = l_Lake_JsonObject_insertJson(v_obj_1827_, v___x_1828_, v_data_1823_);
v___x_1830_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
return v___x_1830_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(lean_object* v_x_1847_){
_start:
{
if (lean_obj_tag(v_x_1847_) == 0)
{
lean_object* v___x_1848_; 
v___x_1848_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0));
return v___x_1848_;
}
else
{
lean_object* v___x_1849_; 
v___x_1849_ = l_Lean_Json_getStr_x3f(v_x_1847_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1849_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1849_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
else
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1866_; 
v_a_1858_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1860_ = v___x_1849_;
v_isShared_1861_ = v_isSharedCheck_1866_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1849_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1866_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1862_; lean_object* v___x_1864_; 
v___x_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1862_, 0, v_a_1858_);
if (v_isShared_1861_ == 0)
{
lean_ctor_set(v___x_1860_, 0, v___x_1862_);
v___x_1864_ = v___x_1860_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v___x_1862_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(lean_object* v_x_1867_){
_start:
{
if (lean_obj_tag(v_x_1867_) == 0)
{
lean_object* v___x_1868_; 
v___x_1868_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0));
return v___x_1868_;
}
else
{
lean_object* v___x_1869_; 
v___x_1869_ = l_Lean_Json_getStr_x3f(v_x_1867_);
if (lean_obj_tag(v___x_1869_) == 0)
{
lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1877_; 
v_a_1870_ = lean_ctor_get(v___x_1869_, 0);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___x_1869_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_dec(v___x_1869_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1875_; 
if (v_isShared_1873_ == 0)
{
v___x_1875_ = v___x_1872_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1870_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1886_; 
v_a_1878_ = lean_ctor_get(v___x_1869_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1880_ = v___x_1869_;
v_isShared_1881_ = v_isSharedCheck_1886_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1869_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1886_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1882_; lean_object* v___x_1884_; 
v___x_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1882_, 0, v_a_1878_);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 0, v___x_1882_);
v___x_1884_ = v___x_1880_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v___x_1882_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(lean_object* v_k_1887_, lean_object* v_t_1888_){
_start:
{
if (lean_obj_tag(v_t_1888_) == 0)
{
lean_object* v_k_1889_; lean_object* v_l_1890_; lean_object* v_r_1891_; uint8_t v___x_1892_; 
v_k_1889_ = lean_ctor_get(v_t_1888_, 1);
v_l_1890_ = lean_ctor_get(v_t_1888_, 3);
v_r_1891_ = lean_ctor_get(v_t_1888_, 4);
v___x_1892_ = lean_string_compare(v_k_1887_, v_k_1889_);
switch(v___x_1892_)
{
case 0:
{
v_t_1888_ = v_l_1890_;
goto _start;
}
case 1:
{
uint8_t v___x_1894_; 
v___x_1894_ = 1;
return v___x_1894_;
}
default: 
{
v_t_1888_ = v_r_1891_;
goto _start;
}
}
}
else
{
uint8_t v___x_1896_; 
v___x_1896_ = 0;
return v___x_1896_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg___boxed(lean_object* v_k_1897_, lean_object* v_t_1898_){
_start:
{
uint8_t v_res_1899_; lean_object* v_r_1900_; 
v_res_1899_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v_k_1897_, v_t_1898_);
lean_dec(v_t_1898_);
lean_dec_ref(v_k_1897_);
v_r_1900_ = lean_box(v_res_1899_);
return v_r_1900_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_fromJson_x3f(lean_object* v_json_1907_){
_start:
{
if (lean_obj_tag(v_json_1907_) == 5)
{
lean_object* v_kvPairs_1912_; lean_object* v___x_1913_; uint8_t v___x_1914_; 
v_kvPairs_1912_ = lean_ctor_get(v_json_1907_, 0);
v___x_1913_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__1));
v___x_1914_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v___x_1913_, v_kvPairs_1912_);
if (v___x_1914_ == 0)
{
goto v___jp_1908_;
}
else
{
lean_object* v___x_1915_; lean_object* v___x_1916_; 
lean_inc(v_kvPairs_1912_);
lean_dec_ref_known(v_json_1907_, 1);
v___x_1915_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_1916_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1912_, v___x_1915_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v___x_1917_; 
lean_dec(v_kvPairs_1912_);
v___x_1917_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__1));
return v___x_1917_;
}
else
{
lean_object* v_val_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_2036_; 
v_val_1918_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_1920_ = v___x_1916_;
v_isShared_1921_ = v_isSharedCheck_2036_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_val_1918_);
lean_dec(v___x_1916_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_2036_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___y_1923_; lean_object* v_a_1924_; lean_object* v___y_1930_; lean_object* v___y_1933_; lean_object* v_a_1973_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__4));
v___x_2013_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1912_, v___x_2012_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v___x_2014_; 
v___x_2014_ = lean_box(0);
v_a_1973_ = v___x_2014_;
goto v___jp_1972_;
}
else
{
lean_object* v_val_2015_; lean_object* v___x_2016_; 
v_val_2015_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_val_2015_);
lean_dec_ref_known(v___x_2013_, 1);
v___x_2016_ = l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(v_val_2015_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2026_; 
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
lean_dec(v_kvPairs_1912_);
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2026_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2026_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2024_; 
v___x_2021_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__4));
v___x_2022_ = lean_string_append(v___x_2021_, v_a_2017_);
lean_dec(v_a_2017_);
if (v_isShared_2020_ == 0)
{
lean_ctor_set(v___x_2019_, 0, v___x_2022_);
v___x_2024_ = v___x_2019_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2022_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
else
{
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2034_; 
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
lean_dec(v_kvPairs_1912_);
v_a_2027_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2029_ = v___x_2016_;
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v___x_2016_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2032_; 
if (v_isShared_2030_ == 0)
{
lean_ctor_set_tag(v___x_2029_, 0);
v___x_2032_ = v___x_2029_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_a_2027_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
else
{
lean_object* v_a_2035_; 
v_a_2035_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_a_2035_);
lean_dec_ref_known(v___x_2016_, 1);
v_a_1973_ = v_a_2035_;
goto v___jp_1972_;
}
}
}
v___jp_1922_:
{
lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1925_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1925_, 0, v_val_1918_);
lean_ctor_set(v___x_1925_, 1, v___y_1923_);
lean_ctor_set(v___x_1925_, 2, v_a_1924_);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 0, v___x_1925_);
v___x_1927_ = v___x_1920_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1925_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
v___jp_1929_:
{
lean_object* v___x_1931_; 
v___x_1931_ = lean_box(0);
v___y_1923_ = v___y_1930_;
v_a_1924_ = v___x_1931_;
goto v___jp_1922_;
}
v___jp_1932_:
{
lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1934_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__5));
v___x_1935_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1912_, v___x_1934_);
lean_dec(v_kvPairs_1912_);
if (lean_obj_tag(v___x_1935_) == 0)
{
v___y_1930_ = v___y_1933_;
goto v___jp_1929_;
}
else
{
lean_object* v_val_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1971_; 
v_val_1936_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1938_ = v___x_1935_;
v_isShared_1939_ = v_isSharedCheck_1971_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_val_1936_);
lean_dec(v___x_1935_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1971_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; 
v___x_1940_ = l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(v_val_1936_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1950_; 
lean_del_object(v___x_1938_);
lean_dec(v___y_1933_);
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1943_ = v___x_1940_;
v_isShared_1944_ = v_isSharedCheck_1950_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1940_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1950_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1948_; 
v___x_1945_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__2));
v___x_1946_ = lean_string_append(v___x_1945_, v_a_1941_);
lean_dec(v_a_1941_);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 0, v___x_1946_);
v___x_1948_ = v___x_1943_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v___x_1946_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
else
{
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_del_object(v___x_1938_);
lean_dec(v___y_1933_);
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
v_a_1951_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1940_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1940_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
lean_ctor_set_tag(v___x_1953_, 0);
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
else
{
lean_object* v_a_1959_; 
v_a_1959_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1940_, 1);
if (lean_obj_tag(v_a_1959_) == 1)
{
lean_object* v_val_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1970_; 
v_val_1960_ = lean_ctor_get(v_a_1959_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v_a_1959_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1962_ = v_a_1959_;
v_isShared_1963_ = v_isSharedCheck_1970_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_val_1960_);
lean_dec(v_a_1959_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1970_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1965_; 
if (v_isShared_1939_ == 0)
{
lean_ctor_set_tag(v___x_1938_, 0);
lean_ctor_set(v___x_1938_, 0, v_val_1960_);
v___x_1965_ = v___x_1938_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_val_1960_);
v___x_1965_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
lean_object* v___x_1967_; 
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 0, v___x_1965_);
v___x_1967_ = v___x_1962_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v___x_1965_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
v___y_1923_ = v___y_1933_;
v_a_1924_ = v___x_1967_;
goto v___jp_1922_;
}
}
}
}
else
{
lean_dec(v_a_1959_);
lean_del_object(v___x_1938_);
v___y_1930_ = v___y_1933_;
goto v___jp_1929_;
}
}
}
}
}
}
v___jp_1972_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__6));
v___x_1975_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1912_, v___x_1974_);
if (lean_obj_tag(v___x_1975_) == 0)
{
v___y_1933_ = v_a_1973_;
goto v___jp_1932_;
}
else
{
lean_object* v_val_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_2011_; 
v_val_1976_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_1978_ = v___x_1975_;
v_isShared_1979_ = v_isSharedCheck_2011_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_val_1976_);
lean_dec(v___x_1975_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_2011_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1980_; 
v___x_1980_ = l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(v_val_1976_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1990_; 
lean_del_object(v___x_1978_);
lean_dec(v_a_1973_);
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
lean_dec(v_kvPairs_1912_);
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1983_ = v___x_1980_;
v_isShared_1984_ = v_isSharedCheck_1990_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___x_1980_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1990_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1988_; 
v___x_1985_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__3));
v___x_1986_ = lean_string_append(v___x_1985_, v_a_1981_);
lean_dec(v_a_1981_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_1986_);
v___x_1988_ = v___x_1983_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1986_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
else
{
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
lean_del_object(v___x_1978_);
lean_dec(v_a_1973_);
lean_del_object(v___x_1920_);
lean_dec(v_val_1918_);
lean_dec(v_kvPairs_1912_);
v_a_1991_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1993_ = v___x_1980_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1980_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
lean_ctor_set_tag(v___x_1993_, 0);
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1991_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
return v___x_1996_;
}
}
}
else
{
lean_object* v_a_1999_; 
v_a_1999_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___x_1980_, 1);
if (lean_obj_tag(v_a_1999_) == 1)
{
lean_object* v_val_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2010_; 
lean_dec(v_kvPairs_1912_);
v_val_2000_ = lean_ctor_get(v_a_1999_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v_a_1999_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2002_ = v_a_1999_;
v_isShared_2003_ = v_isSharedCheck_2010_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_val_2000_);
lean_dec(v_a_1999_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2010_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_1979_ == 0)
{
lean_ctor_set(v___x_1978_, 0, v_val_2000_);
v___x_2005_ = v___x_1978_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v_val_2000_);
v___x_2005_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
lean_object* v___x_2007_; 
if (v_isShared_2003_ == 0)
{
lean_ctor_set(v___x_2002_, 0, v___x_2005_);
v___x_2007_ = v___x_2002_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_2005_);
v___x_2007_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
v___y_1923_ = v_a_1973_;
v_a_1924_ = v___x_2007_;
goto v___jp_1922_;
}
}
}
}
else
{
lean_dec(v_a_1999_);
lean_del_object(v___x_1978_);
v___y_1933_ = v_a_1973_;
goto v___jp_1932_;
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
goto v___jp_1908_;
}
v___jp_1908_:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1909_ = lean_box(0);
v___x_1910_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1910_, 0, v_json_1907_);
lean_ctor_set(v___x_1910_, 1, v___x_1909_);
lean_ctor_set(v___x_1910_, 2, v___x_1909_);
v___x_1911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1910_);
return v___x_1911_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(lean_object* v_00_u03b2_2037_, lean_object* v_k_2038_, lean_object* v_t_2039_){
_start:
{
uint8_t v___x_2040_; 
v___x_2040_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v_k_2038_, v_t_2039_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___boxed(lean_object* v_00_u03b2_2041_, lean_object* v_k_2042_, lean_object* v_t_2043_){
_start:
{
uint8_t v_res_2044_; lean_object* v_r_2045_; 
v_res_2044_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(v_00_u03b2_2041_, v_k_2042_, v_t_2043_);
lean_dec(v_t_2043_);
lean_dec_ref(v_k_2042_);
v_r_2045_ = lean_box(v_res_2044_);
return v_r_2045_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactDir(lean_object* v_cache_2052_){
_start:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2053_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2054_ = l_System_FilePath_join(v_cache_2052_, v___x_2053_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath(lean_object* v_cache_2056_, uint64_t v_contentHash_2057_, lean_object* v_ext_2058_){
_start:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; uint8_t v___x_2063_; 
v___x_2059_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2060_ = l_System_FilePath_join(v_cache_2056_, v___x_2059_);
v___x_2061_ = lean_string_utf8_byte_size(v_ext_2058_);
v___x_2062_ = lean_unsigned_to_nat(0u);
v___x_2063_ = lean_nat_dec_eq(v___x_2061_, v___x_2062_);
if (v___x_2063_ == 0)
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2064_ = l_Lake_lowerHexUInt64(v_contentHash_2057_);
v___x_2065_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2066_ = lean_string_append(v___x_2064_, v___x_2065_);
v___x_2067_ = lean_string_append(v___x_2066_, v_ext_2058_);
v___x_2068_ = l_System_FilePath_join(v___x_2060_, v___x_2067_);
return v___x_2068_;
}
else
{
lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2069_ = l_Lake_lowerHexUInt64(v_contentHash_2057_);
v___x_2070_ = l_System_FilePath_join(v___x_2060_, v___x_2069_);
return v___x_2070_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath___boxed(lean_object* v_cache_2071_, lean_object* v_contentHash_2072_, lean_object* v_ext_2073_){
_start:
{
uint64_t v_contentHash_boxed_2074_; lean_object* v_res_2075_; 
v_contentHash_boxed_2074_ = lean_unbox_uint64(v_contentHash_2072_);
lean_dec_ref(v_contentHash_2072_);
v_res_2075_ = l_Lake_Cache_artifactPath(v_cache_2071_, v_contentHash_boxed_2074_, v_ext_2073_);
lean_dec_ref(v_ext_2073_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f(lean_object* v_cache_2076_, lean_object* v_descr_2077_){
_start:
{
uint64_t v_hash_2079_; lean_object* v_ext_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___y_2084_; lean_object* v___x_2098_; lean_object* v___x_2099_; uint8_t v___x_2100_; 
v_hash_2079_ = lean_ctor_get_uint64(v_descr_2077_, sizeof(void*)*1);
v_ext_2080_ = lean_ctor_get(v_descr_2077_, 0);
v___x_2081_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2082_ = l_System_FilePath_join(v_cache_2076_, v___x_2081_);
v___x_2098_ = lean_string_utf8_byte_size(v_ext_2080_);
v___x_2099_ = lean_unsigned_to_nat(0u);
v___x_2100_ = lean_nat_dec_eq(v___x_2098_, v___x_2099_);
if (v___x_2100_ == 0)
{
lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2101_ = l_Lake_lowerHexUInt64(v_hash_2079_);
v___x_2102_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2103_ = lean_string_append(v___x_2101_, v___x_2102_);
v___x_2104_ = lean_string_append(v___x_2103_, v_ext_2080_);
v___y_2084_ = v___x_2104_;
goto v___jp_2083_;
}
else
{
lean_object* v___x_2105_; 
v___x_2105_ = l_Lake_lowerHexUInt64(v_hash_2079_);
v___y_2084_ = v___x_2105_;
goto v___jp_2083_;
}
v___jp_2083_:
{
lean_object* v_path_2085_; lean_object* v___x_2086_; 
v_path_2085_ = l_System_FilePath_join(v___x_2082_, v___y_2084_);
v___x_2086_ = lean_io_metadata(v_path_2085_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2096_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2089_ = v___x_2086_;
v_isShared_2090_ = v_isSharedCheck_2096_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2086_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2096_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v_modified_2091_; lean_object* v___x_2092_; lean_object* v___x_2094_; 
v_modified_2091_ = lean_ctor_get(v_a_2087_, 1);
lean_inc_ref(v_modified_2091_);
lean_dec(v_a_2087_);
lean_inc_ref(v_path_2085_);
v___x_2092_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2092_, 0, v_descr_2077_);
lean_ctor_set(v___x_2092_, 1, v_path_2085_);
lean_ctor_set(v___x_2092_, 2, v_path_2085_);
lean_ctor_set(v___x_2092_, 3, v_modified_2091_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set_tag(v___x_2089_, 1);
lean_ctor_set(v___x_2089_, 0, v___x_2092_);
v___x_2094_ = v___x_2089_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
else
{
lean_object* v___x_2097_; 
lean_dec_ref_known(v___x_2086_, 1);
lean_dec_ref(v_path_2085_);
lean_dec_ref(v_descr_2077_);
v___x_2097_ = lean_box(0);
return v___x_2097_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f___boxed(lean_object* v_cache_2106_, lean_object* v_descr_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v_res_2109_; 
v_res_2109_ = l_Lake_Cache_getArtifact_x3f(v_cache_2106_, v_descr_2107_);
return v_res_2109_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact(lean_object* v_cache_2112_, lean_object* v_descr_2113_){
_start:
{
uint64_t v_hash_2115_; lean_object* v_ext_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___y_2120_; lean_object* v___x_2149_; lean_object* v___x_2150_; uint8_t v___x_2151_; 
v_hash_2115_ = lean_ctor_get_uint64(v_descr_2113_, sizeof(void*)*1);
v_ext_2116_ = lean_ctor_get(v_descr_2113_, 0);
v___x_2117_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2118_ = l_System_FilePath_join(v_cache_2112_, v___x_2117_);
v___x_2149_ = lean_string_utf8_byte_size(v_ext_2116_);
v___x_2150_ = lean_unsigned_to_nat(0u);
v___x_2151_ = lean_nat_dec_eq(v___x_2149_, v___x_2150_);
if (v___x_2151_ == 0)
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2152_ = l_Lake_lowerHexUInt64(v_hash_2115_);
v___x_2153_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2154_ = lean_string_append(v___x_2152_, v___x_2153_);
v___x_2155_ = lean_string_append(v___x_2154_, v_ext_2116_);
v___y_2120_ = v___x_2155_;
goto v___jp_2119_;
}
else
{
lean_object* v___x_2156_; 
v___x_2156_ = l_Lake_lowerHexUInt64(v_hash_2115_);
v___y_2120_ = v___x_2156_;
goto v___jp_2119_;
}
v___jp_2119_:
{
lean_object* v_path_2121_; lean_object* v___x_2122_; 
v_path_2121_ = l_System_FilePath_join(v___x_2118_, v___y_2120_);
v___x_2122_ = lean_io_metadata(v_path_2121_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2132_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2125_ = v___x_2122_;
v_isShared_2126_ = v_isSharedCheck_2132_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2122_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2132_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v_modified_2127_; lean_object* v___x_2128_; lean_object* v___x_2130_; 
v_modified_2127_ = lean_ctor_get(v_a_2123_, 1);
lean_inc_ref(v_modified_2127_);
lean_dec(v_a_2123_);
lean_inc_ref(v_path_2121_);
v___x_2128_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2128_, 0, v_descr_2113_);
lean_ctor_set(v___x_2128_, 1, v_path_2121_);
lean_ctor_set(v___x_2128_, 2, v_path_2121_);
lean_ctor_set(v___x_2128_, 3, v_modified_2127_);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 0, v___x_2128_);
v___x_2130_ = v___x_2125_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v___x_2128_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2148_; 
lean_dec_ref(v_descr_2113_);
v_a_2133_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2135_ = v___x_2122_;
v_isShared_2136_ = v_isSharedCheck_2148_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2122_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2148_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
if (lean_obj_tag(v_a_2133_) == 11)
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2140_; 
lean_dec_ref_known(v_a_2133_, 2);
v___x_2137_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__0));
v___x_2138_ = lean_string_append(v___x_2137_, v_path_2121_);
lean_dec_ref(v_path_2121_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set(v___x_2135_, 0, v___x_2138_);
v___x_2140_ = v___x_2135_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v___x_2138_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
else
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2146_; 
lean_dec_ref(v_path_2121_);
v___x_2142_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__1));
v___x_2143_ = lean_io_error_to_string(v_a_2133_);
v___x_2144_ = lean_string_append(v___x_2142_, v___x_2143_);
lean_dec_ref(v___x_2143_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set(v___x_2135_, 0, v___x_2144_);
v___x_2146_ = v___x_2135_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v___x_2144_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact___boxed(lean_object* v_cache_2157_, lean_object* v_descr_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_Lake_Cache_getArtifact(v_cache_2157_, v_descr_2158_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsDir(lean_object* v_cache_2162_){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2163_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2164_ = l_System_FilePath_join(v_cache_2162_, v___x_2163_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile(lean_object* v_cache_2166_, lean_object* v_scope_2167_, uint64_t v_inputHash_2168_){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2169_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2170_ = l_System_FilePath_join(v_cache_2166_, v___x_2169_);
v___x_2171_ = l_System_FilePath_join(v___x_2170_, v_scope_2167_);
v___x_2172_ = l_Lake_lowerHexUInt64(v_inputHash_2168_);
v___x_2173_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2174_ = lean_string_append(v___x_2172_, v___x_2173_);
v___x_2175_ = l_System_FilePath_join(v___x_2171_, v___x_2174_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile___boxed(lean_object* v_cache_2176_, lean_object* v_scope_2177_, lean_object* v_inputHash_2178_){
_start:
{
uint64_t v_inputHash_boxed_2179_; lean_object* v_res_2180_; 
v_inputHash_boxed_2179_ = lean_unbox_uint64(v_inputHash_2178_);
lean_dec_ref(v_inputHash_2178_);
v_res_2180_ = l_Lake_Cache_outputsFile(v_cache_2176_, v_scope_2177_, v_inputHash_boxed_2179_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(lean_object* v_cache_2181_, lean_object* v_scope_2182_, uint64_t v_inputHash_2183_, lean_object* v_out_2184_, lean_object* v_service_x3f_2185_, lean_object* v_remoteScope_x3f_2186_, uint8_t v_overwrite_2187_){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v_file_2195_; lean_object* v___x_2196_; 
v___x_2189_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2190_ = l_System_FilePath_join(v_cache_2181_, v___x_2189_);
v___x_2191_ = l_System_FilePath_join(v___x_2190_, v_scope_2182_);
v___x_2192_ = l_Lake_lowerHexUInt64(v_inputHash_2183_);
v___x_2193_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2194_ = lean_string_append(v___x_2192_, v___x_2193_);
v_file_2195_ = l_System_FilePath_join(v___x_2191_, v___x_2194_);
lean_inc_ref(v_file_2195_);
v___x_2196_ = l_Lake_createParentDirs(v_file_2195_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
lean_dec_ref_known(v___x_2196_, 1);
v___x_2197_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2197_, 0, v_out_2184_);
lean_ctor_set(v___x_2197_, 1, v_service_x3f_2185_);
lean_ctor_set(v___x_2197_, 2, v_remoteScope_x3f_2186_);
v___x_2198_ = l_Lake_CacheOutput_toJson(v___x_2197_);
v___x_2199_ = lean_unsigned_to_nat(80u);
v___x_2200_ = l_Lean_Json_pretty(v___x_2198_, v___x_2199_);
if (v_overwrite_2187_ == 0)
{
lean_object* v___x_2201_; 
v___x_2201_ = l_Lake_writeFileIfNew(v_file_2195_, v___x_2200_);
lean_dec_ref(v___x_2200_);
lean_dec_ref(v_file_2195_);
return v___x_2201_;
}
else
{
lean_object* v___x_2202_; 
v___x_2202_ = l_IO_FS_writeFile(v_file_2195_, v___x_2200_);
lean_dec_ref(v___x_2200_);
lean_dec_ref(v_file_2195_);
return v___x_2202_;
}
}
else
{
lean_dec_ref(v_file_2195_);
lean_dec(v_remoteScope_x3f_2186_);
lean_dec(v_service_x3f_2185_);
lean_dec(v_out_2184_);
return v___x_2196_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore___boxed(lean_object* v_cache_2203_, lean_object* v_scope_2204_, lean_object* v_inputHash_2205_, lean_object* v_out_2206_, lean_object* v_service_x3f_2207_, lean_object* v_remoteScope_x3f_2208_, lean_object* v_overwrite_2209_, lean_object* v___y_2210_){
_start:
{
uint64_t v_inputHash_boxed_2211_; uint8_t v_overwrite_boxed_2212_; lean_object* v_res_2213_; 
v_inputHash_boxed_2211_ = lean_unbox_uint64(v_inputHash_2205_);
lean_dec_ref(v_inputHash_2205_);
v_overwrite_boxed_2212_ = lean_unbox(v_overwrite_2209_);
v_res_2213_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2203_, v_scope_2204_, v_inputHash_boxed_2211_, v_out_2206_, v_service_x3f_2207_, v_remoteScope_x3f_2208_, v_overwrite_boxed_2212_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg(lean_object* v_inst_2214_, lean_object* v_cache_2215_, lean_object* v_scope_2216_, uint64_t v_inputHash_2217_, lean_object* v_outputs_2218_, lean_object* v_service_x3f_2219_, lean_object* v_remoteScope_x3f_2220_, uint8_t v_overwrite_2221_){
_start:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2223_ = lean_apply_1(v_inst_2214_, v_outputs_2218_);
v___x_2224_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2215_, v_scope_2216_, v_inputHash_2217_, v___x_2223_, v_service_x3f_2219_, v_remoteScope_x3f_2220_, v_overwrite_2221_);
return v___x_2224_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg___boxed(lean_object* v_inst_2225_, lean_object* v_cache_2226_, lean_object* v_scope_2227_, lean_object* v_inputHash_2228_, lean_object* v_outputs_2229_, lean_object* v_service_x3f_2230_, lean_object* v_remoteScope_x3f_2231_, lean_object* v_overwrite_2232_, lean_object* v___y_2233_){
_start:
{
uint64_t v_inputHash_boxed_2234_; uint8_t v_overwrite_boxed_2235_; lean_object* v_res_2236_; 
v_inputHash_boxed_2234_ = lean_unbox_uint64(v_inputHash_2228_);
lean_dec_ref(v_inputHash_2228_);
v_overwrite_boxed_2235_ = lean_unbox(v_overwrite_2232_);
v_res_2236_ = l_Lake_Cache_writeOutputs___redArg(v_inst_2225_, v_cache_2226_, v_scope_2227_, v_inputHash_boxed_2234_, v_outputs_2229_, v_service_x3f_2230_, v_remoteScope_x3f_2231_, v_overwrite_boxed_2235_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs(lean_object* v_00_u03b1_2237_, lean_object* v_inst_2238_, lean_object* v_cache_2239_, lean_object* v_scope_2240_, uint64_t v_inputHash_2241_, lean_object* v_outputs_2242_, lean_object* v_service_x3f_2243_, lean_object* v_remoteScope_x3f_2244_, uint8_t v_overwrite_2245_){
_start:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2247_ = lean_apply_1(v_inst_2238_, v_outputs_2242_);
v___x_2248_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2239_, v_scope_2240_, v_inputHash_2241_, v___x_2247_, v_service_x3f_2243_, v_remoteScope_x3f_2244_, v_overwrite_2245_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___boxed(lean_object* v_00_u03b1_2249_, lean_object* v_inst_2250_, lean_object* v_cache_2251_, lean_object* v_scope_2252_, lean_object* v_inputHash_2253_, lean_object* v_outputs_2254_, lean_object* v_service_x3f_2255_, lean_object* v_remoteScope_x3f_2256_, lean_object* v_overwrite_2257_, lean_object* v___y_2258_){
_start:
{
uint64_t v_inputHash_boxed_2259_; uint8_t v_overwrite_boxed_2260_; lean_object* v_res_2261_; 
v_inputHash_boxed_2259_ = lean_unbox_uint64(v_inputHash_2253_);
lean_dec_ref(v_inputHash_2253_);
v_overwrite_boxed_2260_ = lean_unbox(v_overwrite_2257_);
v_res_2261_ = l_Lake_Cache_writeOutputs(v_00_u03b1_2249_, v_inst_2250_, v_cache_2251_, v_scope_2252_, v_inputHash_boxed_2259_, v_outputs_2254_, v_service_x3f_2255_, v_remoteScope_x3f_2256_, v_overwrite_boxed_2260_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(lean_object* v_cache_2262_, lean_object* v_scope_2263_, lean_object* v_service_x3f_2264_, lean_object* v_remoteScope_x3f_2265_, uint8_t v_overwrite_2266_, lean_object* v_x_2267_, lean_object* v_x_2268_){
_start:
{
if (lean_obj_tag(v_x_2268_) == 0)
{
lean_object* v___x_2270_; 
lean_dec(v_remoteScope_x3f_2265_);
lean_dec(v_service_x3f_2264_);
lean_dec_ref(v_scope_2263_);
lean_dec_ref(v_cache_2262_);
v___x_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2270_, 0, v_x_2267_);
return v___x_2270_;
}
else
{
lean_object* v_value_2271_; lean_object* v_key_2272_; lean_object* v_tail_2273_; lean_object* v_out_2274_; uint64_t v___x_2275_; lean_object* v___x_2276_; 
v_value_2271_ = lean_ctor_get(v_x_2268_, 1);
lean_inc(v_value_2271_);
v_key_2272_ = lean_ctor_get(v_x_2268_, 0);
lean_inc(v_key_2272_);
v_tail_2273_ = lean_ctor_get(v_x_2268_, 2);
lean_inc(v_tail_2273_);
lean_dec_ref_known(v_x_2268_, 3);
v_out_2274_ = lean_ctor_get(v_value_2271_, 0);
lean_inc(v_out_2274_);
lean_dec(v_value_2271_);
v___x_2275_ = lean_unbox_uint64(v_key_2272_);
lean_dec(v_key_2272_);
lean_inc(v_remoteScope_x3f_2265_);
lean_inc(v_service_x3f_2264_);
lean_inc_ref(v_scope_2263_);
lean_inc_ref(v_cache_2262_);
v___x_2276_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2262_, v_scope_2263_, v___x_2275_, v_out_2274_, v_service_x3f_2264_, v_remoteScope_x3f_2265_, v_overwrite_2266_);
if (lean_obj_tag(v___x_2276_) == 0)
{
lean_object* v_a_2277_; 
v_a_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2277_);
lean_dec_ref_known(v___x_2276_, 1);
v_x_2267_ = v_a_2277_;
v_x_2268_ = v_tail_2273_;
goto _start;
}
else
{
lean_dec(v_tail_2273_);
lean_dec(v_remoteScope_x3f_2265_);
lean_dec(v_service_x3f_2264_);
lean_dec_ref(v_scope_2263_);
lean_dec_ref(v_cache_2262_);
return v___x_2276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0___boxed(lean_object* v_cache_2279_, lean_object* v_scope_2280_, lean_object* v_service_x3f_2281_, lean_object* v_remoteScope_x3f_2282_, lean_object* v_overwrite_2283_, lean_object* v_x_2284_, lean_object* v_x_2285_, lean_object* v___y_2286_){
_start:
{
uint8_t v_overwrite_boxed_2287_; lean_object* v_res_2288_; 
v_overwrite_boxed_2287_ = lean_unbox(v_overwrite_2283_);
v_res_2288_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(v_cache_2279_, v_scope_2280_, v_service_x3f_2281_, v_remoteScope_x3f_2282_, v_overwrite_boxed_2287_, v_x_2284_, v_x_2285_);
return v_res_2288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(lean_object* v_cache_2289_, lean_object* v_scope_2290_, lean_object* v_service_x3f_2291_, lean_object* v_remoteScope_x3f_2292_, uint8_t v_overwrite_2293_, lean_object* v_as_2294_, size_t v_i_2295_, size_t v_stop_2296_, lean_object* v_b_2297_){
_start:
{
uint8_t v___x_2299_; 
v___x_2299_ = lean_usize_dec_eq(v_i_2295_, v_stop_2296_);
if (v___x_2299_ == 0)
{
lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2300_ = lean_array_uget_borrowed(v_as_2294_, v_i_2295_);
v___x_2301_ = lean_box(0);
lean_inc(v___x_2300_);
lean_inc(v_remoteScope_x3f_2292_);
lean_inc(v_service_x3f_2291_);
lean_inc_ref(v_scope_2290_);
lean_inc_ref(v_cache_2289_);
v___x_2302_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(v_cache_2289_, v_scope_2290_, v_service_x3f_2291_, v_remoteScope_x3f_2292_, v_overwrite_2293_, v___x_2301_, v___x_2300_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_object* v_a_2303_; size_t v___x_2304_; size_t v___x_2305_; 
v_a_2303_ = lean_ctor_get(v___x_2302_, 0);
lean_inc(v_a_2303_);
lean_dec_ref_known(v___x_2302_, 1);
v___x_2304_ = ((size_t)1ULL);
v___x_2305_ = lean_usize_add(v_i_2295_, v___x_2304_);
v_i_2295_ = v___x_2305_;
v_b_2297_ = v_a_2303_;
goto _start;
}
else
{
lean_dec(v_remoteScope_x3f_2292_);
lean_dec(v_service_x3f_2291_);
lean_dec_ref(v_scope_2290_);
lean_dec_ref(v_cache_2289_);
return v___x_2302_;
}
}
else
{
lean_object* v___x_2307_; 
lean_dec(v_remoteScope_x3f_2292_);
lean_dec(v_service_x3f_2291_);
lean_dec_ref(v_scope_2290_);
lean_dec_ref(v_cache_2289_);
v___x_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2307_, 0, v_b_2297_);
return v___x_2307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1___boxed(lean_object* v_cache_2308_, lean_object* v_scope_2309_, lean_object* v_service_x3f_2310_, lean_object* v_remoteScope_x3f_2311_, lean_object* v_overwrite_2312_, lean_object* v_as_2313_, lean_object* v_i_2314_, lean_object* v_stop_2315_, lean_object* v_b_2316_, lean_object* v___y_2317_){
_start:
{
uint8_t v_overwrite_boxed_2318_; size_t v_i_boxed_2319_; size_t v_stop_boxed_2320_; lean_object* v_res_2321_; 
v_overwrite_boxed_2318_ = lean_unbox(v_overwrite_2312_);
v_i_boxed_2319_ = lean_unbox_usize(v_i_2314_);
lean_dec(v_i_2314_);
v_stop_boxed_2320_ = lean_unbox_usize(v_stop_2315_);
lean_dec(v_stop_2315_);
v_res_2321_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2308_, v_scope_2309_, v_service_x3f_2310_, v_remoteScope_x3f_2311_, v_overwrite_boxed_2318_, v_as_2313_, v_i_boxed_2319_, v_stop_boxed_2320_, v_b_2316_);
lean_dec_ref(v_as_2313_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap(lean_object* v_cache_2322_, lean_object* v_scope_2323_, lean_object* v_map_2324_, lean_object* v_service_x3f_2325_, lean_object* v_remoteScope_x3f_2326_, uint8_t v_overwrite_2327_){
_start:
{
lean_object* v_buckets_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; uint8_t v___x_2333_; 
v_buckets_2329_ = lean_ctor_get(v_map_2324_, 1);
v___x_2330_ = lean_unsigned_to_nat(0u);
v___x_2331_ = lean_array_get_size(v_buckets_2329_);
v___x_2332_ = lean_box(0);
v___x_2333_ = lean_nat_dec_lt(v___x_2330_, v___x_2331_);
if (v___x_2333_ == 0)
{
lean_object* v___x_2334_; 
lean_dec(v_remoteScope_x3f_2326_);
lean_dec(v_service_x3f_2325_);
lean_dec_ref(v_scope_2323_);
lean_dec_ref(v_cache_2322_);
v___x_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2332_);
return v___x_2334_;
}
else
{
size_t v___x_2335_; size_t v___x_2336_; lean_object* v___x_2337_; 
v___x_2335_ = ((size_t)0ULL);
v___x_2336_ = lean_usize_of_nat(v___x_2331_);
v___x_2337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2322_, v_scope_2323_, v_service_x3f_2325_, v_remoteScope_x3f_2326_, v_overwrite_2327_, v_buckets_2329_, v___x_2335_, v___x_2336_, v___x_2332_);
return v___x_2337_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap___boxed(lean_object* v_cache_2338_, lean_object* v_scope_2339_, lean_object* v_map_2340_, lean_object* v_service_x3f_2341_, lean_object* v_remoteScope_x3f_2342_, lean_object* v_overwrite_2343_, lean_object* v___y_2344_){
_start:
{
uint8_t v_overwrite_boxed_2345_; lean_object* v_res_2346_; 
v_overwrite_boxed_2345_ = lean_unbox(v_overwrite_2343_);
v_res_2346_ = l_Lake_Cache_writeMap(v_cache_2338_, v_scope_2339_, v_map_2340_, v_service_x3f_2341_, v_remoteScope_x3f_2342_, v_overwrite_boxed_2345_);
lean_dec_ref(v_map_2340_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f(lean_object* v_cache_2349_, lean_object* v_scope_2350_, uint64_t v_inputHash_2351_, lean_object* v_a_2352_){
_start:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v_path_2360_; lean_object* v___x_2361_; 
v___x_2354_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2355_ = l_System_FilePath_join(v_cache_2349_, v___x_2354_);
v___x_2356_ = l_System_FilePath_join(v___x_2355_, v_scope_2350_);
v___x_2357_ = l_Lake_lowerHexUInt64(v_inputHash_2351_);
v___x_2358_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2359_ = lean_string_append(v___x_2357_, v___x_2358_);
v_path_2360_ = l_System_FilePath_join(v___x_2356_, v___x_2359_);
v___x_2361_ = l_IO_FS_readFile(v_path_2360_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; lean_object* v_a_2364_; lean_object* v___x_2373_; 
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
lean_inc(v_a_2362_);
lean_dec_ref_known(v___x_2361_, 1);
v___x_2373_ = l_Lean_Json_parse(v_a_2362_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; 
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
lean_inc(v_a_2374_);
lean_dec_ref_known(v___x_2373_, 1);
v_a_2364_ = v_a_2374_;
goto v___jp_2363_;
}
else
{
lean_object* v_a_2375_; lean_object* v___x_2376_; 
v_a_2375_ = lean_ctor_get(v___x_2373_, 0);
lean_inc(v_a_2375_);
lean_dec_ref_known(v___x_2373_, 1);
v___x_2376_ = l_Lake_CacheOutput_fromJson_x3f(v_a_2375_);
if (lean_obj_tag(v___x_2376_) == 0)
{
lean_object* v_a_2377_; 
v_a_2377_ = lean_ctor_get(v___x_2376_, 0);
lean_inc(v_a_2377_);
lean_dec_ref_known(v___x_2376_, 1);
v_a_2364_ = v_a_2377_;
goto v___jp_2363_;
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2386_; 
lean_dec_ref(v_path_2360_);
v_a_2378_ = lean_ctor_get(v___x_2376_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2380_ = v___x_2376_;
v_isShared_2381_ = v_isSharedCheck_2386_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2376_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2386_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_a_2378_);
v___x_2383_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
lean_object* v___x_2384_; 
v___x_2384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2383_);
lean_ctor_set(v___x_2384_, 1, v_a_2352_);
return v___x_2384_;
}
}
}
}
v___jp_2363_:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; uint8_t v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2365_ = ((lean_object*)(l_Lake_Cache_readOutputs_x3f___closed__0));
v___x_2366_ = lean_string_append(v_path_2360_, v___x_2365_);
v___x_2367_ = lean_string_append(v___x_2366_, v_a_2364_);
lean_dec_ref(v_a_2364_);
v___x_2368_ = 3;
v___x_2369_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2369_, 0, v___x_2367_);
lean_ctor_set_uint8(v___x_2369_, sizeof(void*)*1, v___x_2368_);
v___x_2370_ = lean_array_get_size(v_a_2352_);
v___x_2371_ = lean_array_push(v_a_2352_, v___x_2369_);
v___x_2372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2372_, 0, v___x_2370_);
lean_ctor_set(v___x_2372_, 1, v___x_2371_);
return v___x_2372_;
}
}
else
{
lean_object* v_a_2387_; 
v_a_2387_ = lean_ctor_get(v___x_2361_, 0);
lean_inc(v_a_2387_);
lean_dec_ref_known(v___x_2361_, 1);
if (lean_obj_tag(v_a_2387_) == 11)
{
lean_object* v___x_2388_; lean_object* v___x_2389_; 
lean_dec_ref_known(v_a_2387_, 2);
lean_dec_ref(v_path_2360_);
v___x_2388_ = lean_box(0);
v___x_2389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2389_, 0, v___x_2388_);
lean_ctor_set(v___x_2389_, 1, v_a_2352_);
return v___x_2389_;
}
else
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; uint8_t v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2390_ = ((lean_object*)(l_Lake_Cache_readOutputs_x3f___closed__1));
v___x_2391_ = lean_string_append(v_path_2360_, v___x_2390_);
v___x_2392_ = lean_io_error_to_string(v_a_2387_);
v___x_2393_ = lean_string_append(v___x_2391_, v___x_2392_);
lean_dec_ref(v___x_2392_);
v___x_2394_ = 3;
v___x_2395_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2395_, 0, v___x_2393_);
lean_ctor_set_uint8(v___x_2395_, sizeof(void*)*1, v___x_2394_);
v___x_2396_ = lean_array_get_size(v_a_2352_);
v___x_2397_ = lean_array_push(v_a_2352_, v___x_2395_);
v___x_2398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2398_, 0, v___x_2396_);
lean_ctor_set(v___x_2398_, 1, v___x_2397_);
return v___x_2398_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f___boxed(lean_object* v_cache_2399_, lean_object* v_scope_2400_, lean_object* v_inputHash_2401_, lean_object* v_a_2402_, lean_object* v___y_2403_){
_start:
{
uint64_t v_inputHash_boxed_2404_; lean_object* v_res_2405_; 
v_inputHash_boxed_2404_ = lean_unbox_uint64(v_inputHash_2401_);
lean_dec_ref(v_inputHash_2401_);
v_res_2405_ = l_Lake_Cache_readOutputs_x3f(v_cache_2399_, v_scope_2400_, v_inputHash_boxed_2404_, v_a_2402_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_revisionDir(lean_object* v_cache_2407_){
_start:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_2409_ = l_System_FilePath_join(v_cache_2407_, v___x_2408_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_revisionPath(lean_object* v_cache_2411_, lean_object* v_scope_2412_, lean_object* v_rev_2413_){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2414_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_2415_ = l_System_FilePath_join(v_cache_2411_, v___x_2414_);
v___x_2416_ = l_System_FilePath_join(v___x_2415_, v_scope_2412_);
v___x_2417_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_2418_ = lean_string_append(v_rev_2413_, v___x_2417_);
v___x_2419_ = l_System_FilePath_join(v___x_2416_, v___x_2418_);
return v___x_2419_;
}
}
LEAN_EXPORT uint8_t l_Lake_CachePlatform_isNone(lean_object* v_self_2421_){
_start:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; uint8_t v___x_2424_; 
v___x_2422_ = lean_string_utf8_byte_size(v_self_2421_);
v___x_2423_ = lean_unsigned_to_nat(0u);
v___x_2424_ = lean_nat_dec_eq(v___x_2422_, v___x_2423_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_isNone___boxed(lean_object* v_self_2425_){
_start:
{
uint8_t v_res_2426_; lean_object* v_r_2427_; 
v_res_2426_ = l_Lake_CachePlatform_isNone(v_self_2425_);
lean_dec_ref(v_self_2425_);
v_r_2427_ = lean_box(v_res_2426_);
return v_r_2427_;
}
}
static lean_object* _init_l_Lake_CachePlatform_system(void){
_start:
{
lean_object* v___x_2428_; 
v___x_2428_ = l_System_Platform_target;
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString(lean_object* v_s_2429_){
_start:
{
lean_inc_ref(v_s_2429_);
return v_s_2429_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString___boxed(lean_object* v_s_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l_Lake_CachePlatform_ofString(v_s_2430_);
lean_dec_ref(v_s_2430_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(lean_object* v___x_2432_, lean_object* v___x_2433_, lean_object* v_a_2434_, lean_object* v_b_2435_){
_start:
{
uint8_t v_decide_2436_; 
v_decide_2436_ = lean_nat_dec_eq(v_a_2434_, v___x_2432_);
if (v_decide_2436_ == 0)
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2437_ = lean_string_utf8_next_fast(v___x_2433_, v_a_2434_);
lean_dec(v_a_2434_);
v___x_2438_ = lean_unsigned_to_nat(1u);
v___x_2439_ = lean_nat_add(v_b_2435_, v___x_2438_);
lean_dec(v_b_2435_);
v_a_2434_ = v___x_2437_;
v_b_2435_ = v___x_2439_;
goto _start;
}
else
{
lean_dec(v_a_2434_);
return v_b_2435_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg___boxed(lean_object* v___x_2441_, lean_object* v___x_2442_, lean_object* v_a_2443_, lean_object* v_b_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2441_, v___x_2442_, v_a_2443_, v_b_2444_);
lean_dec_ref(v___x_2442_);
lean_dec(v___x_2441_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length(lean_object* v_self_2446_){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2447_ = lean_unsigned_to_nat(0u);
v___x_2448_ = lean_string_utf8_byte_size(v_self_2446_);
v___x_2449_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2448_, v_self_2446_, v___x_2447_, v___x_2447_);
return v___x_2449_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length___boxed(lean_object* v_self_2450_){
_start:
{
lean_object* v_res_2451_; 
v_res_2451_ = l_Lake_CachePlatform_length(v_self_2450_);
lean_dec_ref(v_self_2450_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0(lean_object* v___x_2452_, lean_object* v___x_2453_, lean_object* v___x_2454_, lean_object* v_inst_2455_, lean_object* v_R_2456_, lean_object* v_a_2457_, lean_object* v_b_2458_, lean_object* v_c_2459_){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2452_, v___x_2454_, v_a_2457_, v_b_2458_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___boxed(lean_object* v___x_2461_, lean_object* v___x_2462_, lean_object* v___x_2463_, lean_object* v_inst_2464_, lean_object* v_R_2465_, lean_object* v_a_2466_, lean_object* v_b_2467_, lean_object* v_c_2468_){
_start:
{
lean_object* v_res_2469_; 
v_res_2469_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0(v___x_2461_, v___x_2462_, v___x_2463_, v_inst_2464_, v_R_2465_, v_a_2466_, v_b_2467_, v_c_2468_);
lean_dec_ref(v___x_2463_);
lean_dec_ref(v___x_2462_);
lean_dec(v___x_2461_);
return v_res_2469_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString(lean_object* v_self_2471_){
_start:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; uint8_t v___x_2474_; 
v___x_2472_ = lean_string_utf8_byte_size(v_self_2471_);
v___x_2473_ = lean_unsigned_to_nat(0u);
v___x_2474_ = lean_nat_dec_eq(v___x_2472_, v___x_2473_);
if (v___x_2474_ == 0)
{
lean_inc_ref(v_self_2471_);
return v_self_2471_;
}
else
{
lean_object* v___x_2475_; 
v___x_2475_ = ((lean_object*)(l_Lake_CachePlatform_toString___closed__0));
return v___x_2475_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString___boxed(lean_object* v_self_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_Lake_CachePlatform_toString(v_self_2476_);
lean_dec_ref(v_self_2476_);
return v_res_2477_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheToolchain_isNone(lean_object* v_self_2481_){
_start:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; uint8_t v___x_2484_; 
v___x_2482_ = lean_string_utf8_byte_size(v_self_2481_);
v___x_2483_ = lean_unsigned_to_nat(0u);
v___x_2484_ = lean_nat_dec_eq(v___x_2482_, v___x_2483_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_isNone___boxed(lean_object* v_self_2485_){
_start:
{
uint8_t v_res_2486_; lean_object* v_r_2487_; 
v_res_2486_ = l_Lake_CacheToolchain_isNone(v_self_2485_);
lean_dec_ref(v_self_2485_);
v_r_2487_ = lean_box(v_res_2486_);
return v_r_2487_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofString(lean_object* v_s_2488_){
_start:
{
lean_object* v___x_2489_; 
v___x_2489_ = l_Lake_normalizeToolchain(v_s_2488_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain(lean_object* v_s_2490_){
_start:
{
lean_inc_ref(v_s_2490_);
return v_s_2490_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain___boxed(lean_object* v_s_2491_){
_start:
{
lean_object* v_res_2492_; 
v_res_2492_ = l_Lake_CacheToolchain_ofElanToolchain(v_s_2491_);
lean_dec_ref(v_s_2491_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length(lean_object* v_self_2493_){
_start:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2494_ = lean_unsigned_to_nat(0u);
v___x_2495_ = lean_string_utf8_byte_size(v_self_2493_);
v___x_2496_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2495_, v_self_2493_, v___x_2494_, v___x_2494_);
return v___x_2496_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length___boxed(lean_object* v_self_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Lake_CacheToolchain_length(v_self_2497_);
lean_dec_ref(v_self_2497_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString(lean_object* v_self_2499_){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; uint8_t v___x_2502_; 
v___x_2500_ = lean_string_utf8_byte_size(v_self_2499_);
v___x_2501_ = lean_unsigned_to_nat(0u);
v___x_2502_ = lean_nat_dec_eq(v___x_2500_, v___x_2501_);
if (v___x_2502_ == 0)
{
lean_inc_ref(v_self_2499_);
return v_self_2499_;
}
else
{
lean_object* v___x_2503_; 
v___x_2503_ = ((lean_object*)(l_Lake_CachePlatform_toString___closed__0));
return v___x_2503_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString___boxed(lean_object* v_self_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l_Lake_CacheToolchain_toString(v_self_2504_);
lean_dec_ref(v_self_2504_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore(uint64_t v_hash_2511_, lean_object* v_url_2512_, lean_object* v_path_2513_, lean_object* v_a_2514_){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2516_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc_ref(v_path_2513_);
v___x_2517_ = l_Lake_download(v_url_2512_, v_path_2513_, v___x_2516_, v_a_2514_);
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_object* v_a_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2560_; 
v_a_2518_ = lean_ctor_get(v___x_2517_, 1);
v_isSharedCheck_2560_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2560_ == 0)
{
lean_object* v_unused_2561_; 
v_unused_2561_ = lean_ctor_get(v___x_2517_, 0);
lean_dec(v_unused_2561_);
v___x_2520_ = v___x_2517_;
v_isShared_2521_ = v_isSharedCheck_2560_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_a_2518_);
lean_dec(v___x_2517_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2560_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2522_; 
v___x_2522_ = l_Lake_computeBinFileHash(v_path_2513_);
if (lean_obj_tag(v___x_2522_) == 0)
{
lean_object* v_a_2523_; uint64_t v___x_2524_; uint8_t v___x_2525_; 
v_a_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc(v_a_2523_);
lean_dec_ref_known(v___x_2522_, 1);
v___x_2524_ = lean_unbox_uint64(v_a_2523_);
v___x_2525_ = lean_uint64_dec_eq(v___x_2524_, v_hash_2511_);
if (v___x_2525_ == 0)
{
lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; uint64_t v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; uint8_t v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2526_ = lean_array_get_size(v_a_2518_);
v___x_2527_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__1));
lean_inc_ref(v_path_2513_);
v___x_2528_ = lean_string_append(v_path_2513_, v___x_2527_);
v___x_2529_ = lean_unbox_uint64(v_a_2523_);
lean_dec(v_a_2523_);
v___x_2530_ = l_Lake_lowerHexUInt64(v___x_2529_);
v___x_2531_ = lean_string_append(v___x_2528_, v___x_2530_);
lean_dec_ref(v___x_2530_);
v___x_2532_ = 3;
v___x_2533_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2533_, 0, v___x_2531_);
lean_ctor_set_uint8(v___x_2533_, sizeof(void*)*1, v___x_2532_);
v___x_2534_ = lean_array_push(v_a_2518_, v___x_2533_);
v___x_2535_ = lean_io_remove_file(v_path_2513_);
lean_dec_ref(v_path_2513_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v___x_2537_; 
lean_dec_ref_known(v___x_2535_, 1);
if (v_isShared_2521_ == 0)
{
lean_ctor_set_tag(v___x_2520_, 1);
lean_ctor_set(v___x_2520_, 1, v___x_2534_);
lean_ctor_set(v___x_2520_, 0, v___x_2526_);
v___x_2537_ = v___x_2520_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v___x_2526_);
lean_ctor_set(v_reuseFailAlloc_2538_, 1, v___x_2534_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
else
{
lean_object* v_a_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2545_; 
v_a_2539_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2539_);
lean_dec_ref_known(v___x_2535_, 1);
v___x_2540_ = lean_io_error_to_string(v_a_2539_);
v___x_2541_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2541_, 0, v___x_2540_);
lean_ctor_set_uint8(v___x_2541_, sizeof(void*)*1, v___x_2532_);
v___x_2542_ = lean_array_get_size(v___x_2534_);
v___x_2543_ = lean_array_push(v___x_2534_, v___x_2541_);
if (v_isShared_2521_ == 0)
{
lean_ctor_set_tag(v___x_2520_, 1);
lean_ctor_set(v___x_2520_, 1, v___x_2543_);
lean_ctor_set(v___x_2520_, 0, v___x_2542_);
v___x_2545_ = v___x_2520_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v___x_2542_);
lean_ctor_set(v_reuseFailAlloc_2546_, 1, v___x_2543_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
else
{
lean_object* v___x_2547_; lean_object* v___x_2549_; 
lean_dec(v_a_2523_);
lean_dec_ref(v_path_2513_);
v___x_2547_ = lean_box(0);
if (v_isShared_2521_ == 0)
{
lean_ctor_set(v___x_2520_, 0, v___x_2547_);
v___x_2549_ = v___x_2520_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v___x_2547_);
lean_ctor_set(v_reuseFailAlloc_2550_, 1, v_a_2518_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
else
{
lean_object* v_a_2551_; lean_object* v___x_2552_; uint8_t v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2558_; 
lean_dec_ref(v_path_2513_);
v_a_2551_ = lean_ctor_get(v___x_2522_, 0);
lean_inc(v_a_2551_);
lean_dec_ref_known(v___x_2522_, 1);
v___x_2552_ = lean_io_error_to_string(v_a_2551_);
v___x_2553_ = 3;
v___x_2554_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2554_, 0, v___x_2552_);
lean_ctor_set_uint8(v___x_2554_, sizeof(void*)*1, v___x_2553_);
v___x_2555_ = lean_array_get_size(v_a_2518_);
v___x_2556_ = lean_array_push(v_a_2518_, v___x_2554_);
if (v_isShared_2521_ == 0)
{
lean_ctor_set_tag(v___x_2520_, 1);
lean_ctor_set(v___x_2520_, 1, v___x_2556_);
lean_ctor_set(v___x_2520_, 0, v___x_2555_);
v___x_2558_ = v___x_2520_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v___x_2555_);
lean_ctor_set(v_reuseFailAlloc_2559_, 1, v___x_2556_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
return v___x_2558_;
}
}
}
}
else
{
lean_dec_ref(v_path_2513_);
return v___x_2517_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore___boxed(lean_object* v_hash_2562_, lean_object* v_url_2563_, lean_object* v_path_2564_, lean_object* v_a_2565_, lean_object* v___y_2566_){
_start:
{
uint64_t v_hash_boxed_2567_; lean_object* v_res_2568_; 
v_hash_boxed_2567_ = lean_unbox_uint64(v_hash_2562_);
lean_dec_ref(v_hash_2562_);
v_res_2568_ = l_Lake_downloadArtifactCore(v_hash_boxed_2567_, v_url_2563_, v_path_2564_, v_a_2565_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(lean_object* v_x_2571_){
_start:
{
if (lean_obj_tag(v_x_2571_) == 0)
{
lean_object* v___x_2572_; 
v___x_2572_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0));
return v___x_2572_;
}
else
{
lean_object* v___x_2573_; 
v___x_2573_ = l_Lean_Json_getNat_x3f(v_x_2571_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2573_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2573_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
else
{
lean_object* v_a_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2590_; 
v_a_2582_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2584_ = v___x_2573_;
v_isShared_2585_ = v_isSharedCheck_2590_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_a_2582_);
lean_dec(v___x_2573_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2590_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2586_; lean_object* v___x_2588_; 
v___x_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_a_2582_);
if (v_isShared_2585_ == 0)
{
lean_ctor_set(v___x_2584_, 0, v___x_2586_);
v___x_2588_ = v___x_2584_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v___x_2586_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21(void){
_start:
{
lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2613_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_2614_ = lean_unsigned_to_nat(14u);
v___x_2615_ = lean_mk_empty_array_with_capacity(v___x_2614_);
v___x_2616_ = lean_array_push(v___x_2615_, v___x_2613_);
return v___x_2616_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22(void){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; 
v___x_2617_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_2618_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21);
v___x_2619_ = lean_array_push(v___x_2618_, v___x_2617_);
return v___x_2619_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23(void){
_start:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2620_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_2621_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22);
v___x_2622_ = lean_array_push(v___x_2621_, v___x_2620_);
return v___x_2622_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24(void){
_start:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2623_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13));
v___x_2624_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23);
v___x_2625_ = lean_array_push(v___x_2624_, v___x_2623_);
return v___x_2625_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25(void){
_start:
{
lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2626_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14));
v___x_2627_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24);
v___x_2628_ = lean_array_push(v___x_2627_, v___x_2626_);
return v___x_2628_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26(void){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2629_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15));
v___x_2630_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25);
v___x_2631_ = lean_array_push(v___x_2630_, v___x_2629_);
return v___x_2631_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28(void){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2634_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_2635_ = lean_array_get_size(v___x_2634_);
return v___x_2635_;
}
}
static uint8_t _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29(void){
_start:
{
lean_object* v___x_2636_; lean_object* v___x_2637_; uint8_t v___x_2638_; 
v___x_2636_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28);
v___x_2637_ = lean_unsigned_to_nat(0u);
v___x_2638_ = lean_nat_dec_lt(v___x_2637_, v___x_2636_);
return v___x_2638_;
}
}
static size_t _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30(void){
_start:
{
lean_object* v___x_2639_; size_t v___x_2640_; 
v___x_2639_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28);
v___x_2640_ = lean_usize_of_nat(v___x_2639_);
return v___x_2640_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3(lean_object* v_file_2643_, lean_object* v_contentType_2644_, lean_object* v_url_2645_, lean_object* v_key_2646_, lean_object* v_a_2647_){
_start:
{
lean_object* v_stderr_2650_; lean_object* v_a_2651_; lean_object* v_stderr_2663_; lean_object* v___y_2672_; lean_object* v___y_2675_; lean_object* v_a_2676_; lean_object* v___y_2703_; lean_object* v_a_2704_; lean_object* v___y_2717_; lean_object* v___y_2718_; lean_object* v_a_2729_; lean_object* v_a_2743_; lean_object* v___x_2792_; lean_object* v_val_2794_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2792_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_2800_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_2801_ = lean_io_getenv(v___x_2800_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v___x_2802_; 
v___x_2802_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v_val_2794_ = v___x_2802_;
goto v___jp_2793_;
}
else
{
lean_object* v_val_2803_; 
v_val_2803_ = lean_ctor_get(v___x_2801_, 0);
lean_inc(v_val_2803_);
lean_dec_ref_known(v___x_2801_, 1);
v_val_2794_ = v_val_2803_;
goto v___jp_2793_;
}
v___jp_2649_:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2652_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0));
v___x_2653_ = lean_string_append(v___x_2652_, v_a_2651_);
lean_dec_ref(v_a_2651_);
v___x_2654_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_2655_ = lean_string_append(v___x_2653_, v___x_2654_);
v___x_2656_ = lean_string_append(v___x_2655_, v_stderr_2650_);
lean_dec_ref(v_stderr_2650_);
v___x_2657_ = 3;
v___x_2658_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2658_, 0, v___x_2656_);
lean_ctor_set_uint8(v___x_2658_, sizeof(void*)*1, v___x_2657_);
lean_inc_ref(v_a_2647_);
v___x_2659_ = lean_apply_2(v_a_2647_, v___x_2658_, lean_box(0));
v___x_2660_ = lean_box(0);
v___x_2661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2660_);
return v___x_2661_;
}
v___jp_2662_:
{
lean_object* v___x_2664_; lean_object* v___x_2665_; uint8_t v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2664_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2));
v___x_2665_ = lean_string_append(v___x_2664_, v_stderr_2663_);
lean_dec_ref(v_stderr_2663_);
v___x_2666_ = 3;
v___x_2667_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2667_, 0, v___x_2665_);
lean_ctor_set_uint8(v___x_2667_, sizeof(void*)*1, v___x_2666_);
lean_inc_ref(v_a_2647_);
v___x_2668_ = lean_apply_2(v_a_2647_, v___x_2667_, lean_box(0));
v___x_2669_ = lean_box(0);
v___x_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2669_);
return v___x_2670_;
}
v___jp_2671_:
{
lean_object* v_stderr_2673_; 
v_stderr_2673_ = lean_ctor_get(v___y_2672_, 1);
lean_inc_ref(v_stderr_2673_);
lean_dec_ref(v___y_2672_);
v_stderr_2663_ = v_stderr_2673_;
goto v___jp_2662_;
}
v___jp_2674_:
{
if (lean_obj_tag(v_a_2676_) == 0)
{
v___y_2672_ = v___y_2675_;
goto v___jp_2671_;
}
else
{
lean_object* v_val_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2701_; 
v_val_2677_ = lean_ctor_get(v_a_2676_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v_a_2676_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2679_ = v_a_2676_;
v_isShared_2680_ = v_isSharedCheck_2701_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_val_2677_);
lean_dec(v_a_2676_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2701_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2681_; uint8_t v___x_2682_; 
v___x_2681_ = lean_unsigned_to_nat(200u);
v___x_2682_ = lean_nat_dec_eq(v_val_2677_, v___x_2681_);
if (v___x_2682_ == 0)
{
lean_object* v_stdout_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; uint8_t v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2695_; 
v_stdout_2683_ = lean_ctor_get(v___y_2675_, 0);
lean_inc_ref(v_stdout_2683_);
lean_dec_ref(v___y_2675_);
v___x_2684_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3));
v___x_2685_ = l_Nat_reprFast(v_val_2677_);
v___x_2686_ = lean_string_append(v___x_2684_, v___x_2685_);
lean_dec_ref(v___x_2685_);
v___x_2687_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_2688_ = lean_string_append(v___x_2686_, v___x_2687_);
v___x_2689_ = lean_string_append(v___x_2688_, v_stdout_2683_);
lean_dec_ref(v_stdout_2683_);
v___x_2690_ = 3;
v___x_2691_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2691_, 0, v___x_2689_);
lean_ctor_set_uint8(v___x_2691_, sizeof(void*)*1, v___x_2690_);
lean_inc_ref(v_a_2647_);
v___x_2692_ = lean_apply_2(v_a_2647_, v___x_2691_, lean_box(0));
v___x_2693_ = lean_box(0);
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 0, v___x_2693_);
v___x_2695_ = v___x_2679_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2693_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
else
{
lean_object* v___x_2697_; lean_object* v___x_2699_; 
lean_dec(v_val_2677_);
lean_dec_ref(v___y_2675_);
v___x_2697_ = lean_box(0);
if (v_isShared_2680_ == 0)
{
lean_ctor_set_tag(v___x_2679_, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2697_);
v___x_2699_ = v___x_2679_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v___x_2697_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
}
}
v___jp_2702_:
{
lean_object* v_stderr_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; uint8_t v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v_stderr_2705_ = lean_ctor_get(v___y_2703_, 1);
lean_inc_ref(v_stderr_2705_);
lean_dec_ref(v___y_2703_);
v___x_2706_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_2707_ = lean_string_append(v___x_2706_, v_a_2704_);
lean_dec_ref(v_a_2704_);
v___x_2708_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_2709_ = lean_string_append(v___x_2707_, v___x_2708_);
v___x_2710_ = lean_string_append(v___x_2709_, v_stderr_2705_);
lean_dec_ref(v_stderr_2705_);
v___x_2711_ = 3;
v___x_2712_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2712_, 0, v___x_2710_);
lean_ctor_set_uint8(v___x_2712_, sizeof(void*)*1, v___x_2711_);
lean_inc_ref(v_a_2647_);
v___x_2713_ = lean_apply_2(v_a_2647_, v___x_2712_, lean_box(0));
v___x_2714_ = lean_box(0);
v___x_2715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2714_);
return v___x_2715_;
}
v___jp_2716_:
{
lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2719_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_2720_ = l_Lake_JsonObject_getJson_x3f(v___y_2718_, v___x_2719_);
lean_dec(v___y_2718_);
if (lean_obj_tag(v___x_2720_) == 0)
{
v___y_2672_ = v___y_2717_;
goto v___jp_2671_;
}
else
{
lean_object* v_val_2721_; lean_object* v___x_2722_; 
v_val_2721_ = lean_ctor_get(v___x_2720_, 0);
lean_inc(v_val_2721_);
lean_dec_ref_known(v___x_2720_, 1);
v___x_2722_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_2721_);
if (lean_obj_tag(v___x_2722_) == 0)
{
lean_object* v_a_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v_a_2723_ = lean_ctor_get(v___x_2722_, 0);
lean_inc(v_a_2723_);
lean_dec_ref_known(v___x_2722_, 1);
v___x_2724_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_2725_ = lean_string_append(v___x_2724_, v_a_2723_);
lean_dec(v_a_2723_);
v___y_2703_ = v___y_2717_;
v_a_2704_ = v___x_2725_;
goto v___jp_2702_;
}
else
{
if (lean_obj_tag(v___x_2722_) == 0)
{
lean_object* v_a_2726_; 
v_a_2726_ = lean_ctor_get(v___x_2722_, 0);
lean_inc(v_a_2726_);
lean_dec_ref_known(v___x_2722_, 1);
v___y_2703_ = v___y_2717_;
v_a_2704_ = v_a_2726_;
goto v___jp_2702_;
}
else
{
lean_object* v_a_2727_; 
v_a_2727_ = lean_ctor_get(v___x_2722_, 0);
lean_inc(v_a_2727_);
lean_dec_ref_known(v___x_2722_, 1);
v___y_2675_ = v___y_2717_;
v_a_2676_ = v_a_2727_;
goto v___jp_2674_;
}
}
}
}
v___jp_2728_:
{
lean_object* v_stderr_2730_; lean_object* v___x_2731_; 
v_stderr_2730_ = lean_ctor_get(v_a_2729_, 1);
lean_inc_ref(v_stderr_2730_);
v___x_2731_ = l_Lean_Json_parse(v_stderr_2730_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; 
lean_inc_ref(v_stderr_2730_);
lean_dec_ref(v_a_2729_);
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
lean_inc(v_a_2732_);
lean_dec_ref_known(v___x_2731_, 1);
v_stderr_2650_ = v_stderr_2730_;
v_a_2651_ = v_a_2732_;
goto v___jp_2649_;
}
else
{
lean_object* v_a_2733_; lean_object* v___x_2734_; 
v_a_2733_ = lean_ctor_get(v___x_2731_, 0);
lean_inc(v_a_2733_);
lean_dec_ref_known(v___x_2731_, 1);
v___x_2734_ = l_Lean_Json_getObj_x3f(v_a_2733_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; 
lean_inc_ref(v_stderr_2730_);
lean_dec_ref(v_a_2729_);
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref_known(v___x_2734_, 1);
v_stderr_2650_ = v_stderr_2730_;
v_a_2651_ = v_a_2735_;
goto v___jp_2649_;
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v_a_2736_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2736_);
lean_dec_ref_known(v___x_2734_, 1);
v___x_2737_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8));
v___x_2738_ = l_Lake_JsonObject_getJson_x3f(v_a_2736_, v___x_2737_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_inc_ref(v_stderr_2730_);
lean_dec(v_a_2736_);
lean_dec_ref(v_a_2729_);
v_stderr_2663_ = v_stderr_2730_;
goto v___jp_2662_;
}
else
{
lean_object* v_val_2739_; lean_object* v___x_2740_; 
v_val_2739_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_val_2739_);
lean_dec_ref_known(v___x_2738_, 1);
v___x_2740_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_2739_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_dec_ref_known(v___x_2740_, 1);
v___y_2717_ = v_a_2729_;
v___y_2718_ = v_a_2736_;
goto v___jp_2716_;
}
else
{
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_dec_ref_known(v___x_2740_, 1);
v___y_2717_ = v_a_2729_;
v___y_2718_ = v_a_2736_;
goto v___jp_2716_;
}
else
{
lean_object* v_a_2741_; 
lean_dec(v_a_2736_);
v_a_2741_ = lean_ctor_get(v___x_2740_, 0);
lean_inc(v_a_2741_);
lean_dec_ref_known(v___x_2740_, 1);
v___y_2675_ = v_a_2729_;
v_a_2676_ = v_a_2741_;
goto v___jp_2674_;
}
}
}
}
}
}
v___jp_2742_:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; uint8_t v___x_2763_; uint8_t v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
v___x_2744_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_2745_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_2746_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_2747_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18));
v___x_2748_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_2749_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20));
v___x_2750_ = lean_string_append(v___x_2749_, v_contentType_2644_);
v___x_2751_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26);
v___x_2752_ = lean_array_push(v___x_2751_, v_key_2646_);
v___x_2753_ = lean_array_push(v___x_2752_, v___x_2745_);
v___x_2754_ = lean_array_push(v___x_2753_, v___x_2746_);
v___x_2755_ = lean_array_push(v___x_2754_, v___x_2747_);
v___x_2756_ = lean_array_push(v___x_2755_, v_file_2643_);
v___x_2757_ = lean_array_push(v___x_2756_, v_url_2645_);
v___x_2758_ = lean_array_push(v___x_2757_, v___x_2748_);
v___x_2759_ = lean_array_push(v___x_2758_, v___x_2750_);
v___x_2760_ = lean_box(0);
v___x_2761_ = lean_unsigned_to_nat(0u);
v___x_2762_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_2763_ = 1;
v___x_2764_ = 0;
v___x_2765_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2765_, 0, v___x_2744_);
lean_ctor_set(v___x_2765_, 1, v_a_2743_);
lean_ctor_set(v___x_2765_, 2, v___x_2759_);
lean_ctor_set(v___x_2765_, 3, v___x_2760_);
lean_ctor_set(v___x_2765_, 4, v___x_2762_);
lean_ctor_set_uint8(v___x_2765_, sizeof(void*)*5, v___x_2763_);
lean_ctor_set_uint8(v___x_2765_, sizeof(void*)*5 + 1, v___x_2764_);
v___x_2766_ = l_Lake_captureProc_x27(v___x_2765_, v___x_2762_);
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_object* v_a_2767_; lean_object* v_a_2768_; lean_object* v___x_2769_; uint8_t v___x_2770_; 
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
lean_inc(v_a_2767_);
v_a_2768_ = lean_ctor_get(v___x_2766_, 1);
lean_inc(v_a_2768_);
lean_dec_ref_known(v___x_2766_, 2);
v___x_2769_ = lean_array_get_size(v_a_2768_);
v___x_2770_ = lean_nat_dec_lt(v___x_2761_, v___x_2769_);
if (v___x_2770_ == 0)
{
lean_dec(v_a_2768_);
v_a_2729_ = v_a_2767_;
goto v___jp_2728_;
}
else
{
lean_object* v___x_2771_; size_t v___x_2772_; size_t v___x_2773_; lean_object* v___x_2774_; 
v___x_2771_ = lean_box(0);
v___x_2772_ = ((size_t)0ULL);
v___x_2773_ = lean_usize_of_nat(v___x_2769_);
v___x_2774_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2768_, v___x_2772_, v___x_2773_, v___x_2771_, v_a_2647_);
lean_dec(v_a_2768_);
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_dec_ref_known(v___x_2774_, 1);
v_a_2729_ = v_a_2767_;
goto v___jp_2728_;
}
else
{
lean_dec(v_a_2767_);
return v___x_2774_;
}
}
}
else
{
lean_object* v_a_2775_; lean_object* v___x_2776_; uint8_t v___x_2777_; 
v_a_2775_ = lean_ctor_get(v___x_2766_, 1);
lean_inc(v_a_2775_);
lean_dec_ref_known(v___x_2766_, 2);
v___x_2776_ = lean_array_get_size(v_a_2775_);
v___x_2777_ = lean_nat_dec_lt(v___x_2761_, v___x_2776_);
if (v___x_2777_ == 0)
{
lean_object* v___x_2778_; lean_object* v___x_2779_; 
lean_dec(v_a_2775_);
v___x_2778_ = lean_box(0);
v___x_2779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2778_);
return v___x_2779_;
}
else
{
lean_object* v___x_2780_; size_t v___x_2781_; size_t v___x_2782_; lean_object* v___x_2783_; 
v___x_2780_ = lean_box(0);
v___x_2781_ = ((size_t)0ULL);
v___x_2782_ = lean_usize_of_nat(v___x_2776_);
v___x_2783_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2775_, v___x_2781_, v___x_2782_, v___x_2780_, v_a_2647_);
lean_dec(v_a_2775_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2790_; 
v_isSharedCheck_2790_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2790_ == 0)
{
lean_object* v_unused_2791_; 
v_unused_2791_ = lean_ctor_get(v___x_2783_, 0);
lean_dec(v_unused_2791_);
v___x_2785_ = v___x_2783_;
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
else
{
lean_dec(v___x_2783_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2790_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2788_; 
if (v_isShared_2786_ == 0)
{
lean_ctor_set_tag(v___x_2785_, 1);
lean_ctor_set(v___x_2785_, 0, v___x_2780_);
v___x_2788_ = v___x_2785_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v___x_2780_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
else
{
return v___x_2783_;
}
}
}
}
v___jp_2793_:
{
uint8_t v___x_2795_; 
v___x_2795_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_2795_ == 0)
{
v_a_2743_ = v_val_2794_;
goto v___jp_2742_;
}
else
{
lean_object* v___x_2796_; size_t v___x_2797_; size_t v___x_2798_; lean_object* v___x_2799_; 
v___x_2796_ = lean_box(0);
v___x_2797_ = ((size_t)0ULL);
v___x_2798_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_2799_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_2792_, v___x_2797_, v___x_2798_, v___x_2796_, v_a_2647_);
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_dec_ref_known(v___x_2799_, 1);
v_a_2743_ = v_val_2794_;
goto v___jp_2742_;
}
else
{
lean_dec_ref(v_val_2794_);
lean_dec_ref(v_key_2646_);
lean_dec_ref(v_url_2645_);
lean_dec_ref(v_file_2643_);
return v___x_2799_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___boxed(lean_object* v_file_2804_, lean_object* v_contentType_2805_, lean_object* v_url_2806_, lean_object* v_key_2807_, lean_object* v_a_2808_, lean_object* v___y_2809_){
_start:
{
lean_object* v_res_2810_; 
v_res_2810_ = l___private_Lake_Config_Cache_0__Lake_uploadS3(v_file_2804_, v_contentType_2805_, v_url_2806_, v_key_2807_, v_a_2808_);
lean_dec_ref(v_a_2808_);
lean_dec_ref(v_contentType_2805_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f(lean_object* v_service_2811_){
_start:
{
lean_object* v_name_x3f_2812_; 
v_name_x3f_2812_ = lean_ctor_get(v_service_2811_, 0);
lean_inc(v_name_x3f_2812_);
return v_name_x3f_2812_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f___boxed(lean_object* v_service_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l_Lake_CacheService_name_x3f(v_service_2813_);
lean_dec_ref(v_service_2813_);
return v_res_2814_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheService_isReservoir(lean_object* v_service_2815_){
_start:
{
uint8_t v_isReservoir_2816_; 
v_isReservoir_2816_ = lean_ctor_get_uint8(v_service_2815_, sizeof(void*)*5);
return v_isReservoir_2816_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_isReservoir___boxed(lean_object* v_service_2817_){
_start:
{
uint8_t v_res_2818_; lean_object* v_r_2819_; 
v_res_2818_ = l_Lake_CacheService_isReservoir(v_service_2817_);
lean_dec_ref(v_service_2817_);
v_r_2819_ = lean_box(v_res_2818_);
return v_r_2819_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_reservoirService(lean_object* v_apiEndpoint_2820_, lean_object* v_name_x3f_2821_){
_start:
{
lean_object* v___x_2822_; uint8_t v___x_2823_; lean_object* v___x_2824_; 
v___x_2822_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2823_ = 1;
v___x_2824_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2824_, 0, v_name_x3f_2821_);
lean_ctor_set(v___x_2824_, 1, v___x_2822_);
lean_ctor_set(v___x_2824_, 2, v___x_2822_);
lean_ctor_set(v___x_2824_, 3, v___x_2822_);
lean_ctor_set(v___x_2824_, 4, v_apiEndpoint_2820_);
lean_ctor_set_uint8(v___x_2824_, sizeof(void*)*5, v___x_2823_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadService(lean_object* v_key_2825_, lean_object* v_artifactEndpoint_2826_, lean_object* v_revisionEndpoint_2827_){
_start:
{
lean_object* v___x_2828_; uint8_t v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2828_ = lean_box(0);
v___x_2829_ = 0;
v___x_2830_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2831_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2831_, 0, v___x_2828_);
lean_ctor_set(v___x_2831_, 1, v_key_2825_);
lean_ctor_set(v___x_2831_, 2, v_artifactEndpoint_2826_);
lean_ctor_set(v___x_2831_, 3, v_revisionEndpoint_2827_);
lean_ctor_set(v___x_2831_, 4, v___x_2830_);
lean_ctor_set_uint8(v___x_2831_, sizeof(void*)*5, v___x_2829_);
return v___x_2831_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadService(lean_object* v_artifactEndpoint_2832_, lean_object* v_revisionEndpoint_2833_, lean_object* v_name_x3f_2834_){
_start:
{
lean_object* v___x_2835_; uint8_t v___x_2836_; lean_object* v___x_2837_; 
v___x_2835_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2836_ = 0;
v___x_2837_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2837_, 0, v_name_x3f_2834_);
lean_ctor_set(v___x_2837_, 1, v___x_2835_);
lean_ctor_set(v___x_2837_, 2, v_artifactEndpoint_2832_);
lean_ctor_set(v___x_2837_, 3, v_revisionEndpoint_2833_);
lean_ctor_set(v___x_2837_, 4, v___x_2835_);
lean_ctor_set_uint8(v___x_2837_, sizeof(void*)*5, v___x_2836_);
return v___x_2837_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtsService(lean_object* v_artifactEndpoint_2838_, lean_object* v_name_x3f_2839_){
_start:
{
lean_object* v___x_2840_; uint8_t v___x_2841_; lean_object* v___x_2842_; 
v___x_2840_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2841_ = 0;
v___x_2842_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2842_, 0, v_name_x3f_2839_);
lean_ctor_set(v___x_2842_, 1, v___x_2840_);
lean_ctor_set(v___x_2842_, 2, v_artifactEndpoint_2838_);
lean_ctor_set(v___x_2842_, 3, v___x_2840_);
lean_ctor_set(v___x_2842_, 4, v___x_2840_);
lean_ctor_set_uint8(v___x_2842_, sizeof(void*)*5, v___x_2841_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_withKey(lean_object* v_service_2843_, lean_object* v_key_2844_){
_start:
{
lean_object* v_name_x3f_2845_; lean_object* v_artifactEndpoint_2846_; lean_object* v_revisionEndpoint_2847_; uint8_t v_isReservoir_2848_; lean_object* v_apiEndpoint_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
v_name_x3f_2845_ = lean_ctor_get(v_service_2843_, 0);
v_artifactEndpoint_2846_ = lean_ctor_get(v_service_2843_, 2);
v_revisionEndpoint_2847_ = lean_ctor_get(v_service_2843_, 3);
v_isReservoir_2848_ = lean_ctor_get_uint8(v_service_2843_, sizeof(void*)*5);
v_apiEndpoint_2849_ = lean_ctor_get(v_service_2843_, 4);
v_isSharedCheck_2856_ = !lean_is_exclusive(v_service_2843_);
if (v_isSharedCheck_2856_ == 0)
{
lean_object* v_unused_2857_; 
v_unused_2857_ = lean_ctor_get(v_service_2843_, 1);
lean_dec(v_unused_2857_);
v___x_2851_ = v_service_2843_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_apiEndpoint_2849_);
lean_inc(v_revisionEndpoint_2847_);
lean_inc(v_artifactEndpoint_2846_);
lean_inc(v_name_x3f_2845_);
lean_dec(v_service_2843_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
lean_ctor_set(v___x_2851_, 1, v_key_2844_);
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_name_x3f_2845_);
lean_ctor_set(v_reuseFailAlloc_2855_, 1, v_key_2844_);
lean_ctor_set(v_reuseFailAlloc_2855_, 2, v_artifactEndpoint_2846_);
lean_ctor_set(v_reuseFailAlloc_2855_, 3, v_revisionEndpoint_2847_);
lean_ctor_set(v_reuseFailAlloc_2855_, 4, v_apiEndpoint_2849_);
lean_ctor_set_uint8(v_reuseFailAlloc_2855_, sizeof(void*)*5, v_isReservoir_2848_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg(){
_start:
{
lean_object* v___x_2863_; 
v___x_2863_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg___closed__0));
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg___boxed(lean_object* v___dummy_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg();
return v_res_2865_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2866_; 
v___x_2866_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg();
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(lean_object* v_s_2867_){
_start:
{
lean_object* v___x_2868_; 
v___x_2868_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___boxed(lean_object* v_s_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(v_s_2869_);
lean_dec_ref(v_s_2869_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(lean_object* v_scope_2871_, lean_object* v___x_2872_, lean_object* v___x_2873_, lean_object* v_a_2874_, lean_object* v_b_2875_){
_start:
{
if (lean_obj_tag(v_a_2874_) == 0)
{
lean_object* v_currPos_2876_; lean_object* v_searcher_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2908_; 
v_currPos_2876_ = lean_ctor_get(v_a_2874_, 0);
v_searcher_2877_ = lean_ctor_get(v_a_2874_, 1);
v_isSharedCheck_2908_ = !lean_is_exclusive(v_a_2874_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2879_ = v_a_2874_;
v_isShared_2880_ = v_isSharedCheck_2908_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_searcher_2877_);
lean_inc(v_currPos_2876_);
lean_dec(v_a_2874_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2908_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
uint32_t v___x_2881_; lean_object* v_it_2883_; lean_object* v_startInclusive_2884_; lean_object* v_endExclusive_2885_; uint8_t v_decide_2890_; 
v___x_2881_ = 47;
v_decide_2890_ = lean_nat_dec_eq(v_searcher_2877_, v___x_2873_);
if (v_decide_2890_ == 0)
{
uint32_t v___x_2891_; uint8_t v___x_2892_; 
v___x_2891_ = lean_string_utf8_get_fast(v_scope_2871_, v_searcher_2877_);
v___x_2892_ = lean_uint32_dec_eq(v___x_2891_, v___x_2881_);
if (v___x_2892_ == 0)
{
lean_object* v___x_2893_; lean_object* v___x_2895_; 
v___x_2893_ = lean_string_utf8_next_fast(v_scope_2871_, v_searcher_2877_);
lean_dec(v_searcher_2877_);
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 1, v___x_2893_);
v___x_2895_ = v___x_2879_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_currPos_2876_);
lean_ctor_set(v_reuseFailAlloc_2897_, 1, v___x_2893_);
v___x_2895_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
v_a_2874_ = v___x_2895_;
goto _start;
}
}
else
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v_slice_2901_; lean_object* v_nextIt_2903_; 
v___x_2898_ = lean_string_utf8_next_fast(v_scope_2871_, v_searcher_2877_);
v___x_2899_ = lean_nat_sub(v___x_2898_, v_searcher_2877_);
v___x_2900_ = lean_nat_add(v_searcher_2877_, v___x_2899_);
lean_dec(v___x_2899_);
v_slice_2901_ = l_String_Slice_subslice_x21(v___x_2872_, v_currPos_2876_, v_searcher_2877_);
lean_inc(v___x_2900_);
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 1, v___x_2900_);
lean_ctor_set(v___x_2879_, 0, v___x_2900_);
v_nextIt_2903_ = v___x_2879_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v___x_2900_);
lean_ctor_set(v_reuseFailAlloc_2906_, 1, v___x_2900_);
v_nextIt_2903_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
lean_object* v_startInclusive_2904_; lean_object* v_endExclusive_2905_; 
v_startInclusive_2904_ = lean_ctor_get(v_slice_2901_, 0);
lean_inc(v_startInclusive_2904_);
v_endExclusive_2905_ = lean_ctor_get(v_slice_2901_, 1);
lean_inc(v_endExclusive_2905_);
lean_dec_ref(v_slice_2901_);
v_it_2883_ = v_nextIt_2903_;
v_startInclusive_2884_ = v_startInclusive_2904_;
v_endExclusive_2885_ = v_endExclusive_2905_;
goto v___jp_2882_;
}
}
}
else
{
lean_object* v___x_2907_; 
lean_del_object(v___x_2879_);
lean_dec(v_searcher_2877_);
v___x_2907_ = lean_box(1);
lean_inc(v___x_2873_);
v_it_2883_ = v___x_2907_;
v_startInclusive_2884_ = v_currPos_2876_;
v_endExclusive_2885_ = v___x_2873_;
goto v___jp_2882_;
}
v___jp_2882_:
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2886_ = lean_string_utf8_extract_fast(v_scope_2871_, v_startInclusive_2884_, v_endExclusive_2885_);
lean_dec(v_endExclusive_2885_);
lean_dec(v_startInclusive_2884_);
v___x_2887_ = lean_string_push(v_b_2875_, v___x_2881_);
v___x_2888_ = l_Lake_uriEncode(v___x_2886_, v___x_2887_);
lean_dec_ref(v___x_2886_);
v_a_2874_ = v_it_2883_;
v_b_2875_ = v___x_2888_;
goto _start;
}
}
}
else
{
lean_dec(v___x_2873_);
return v_b_2875_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg___boxed(lean_object* v_scope_2909_, lean_object* v___x_2910_, lean_object* v___x_2911_, lean_object* v_a_2912_, lean_object* v_b_2913_){
_start:
{
lean_object* v_res_2914_; 
v_res_2914_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2909_, v___x_2910_, v___x_2911_, v_a_2912_, v_b_2913_);
lean_dec_ref(v___x_2910_);
lean_dec_ref(v_scope_2909_);
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(lean_object* v_endpoint_2915_, lean_object* v_scope_2916_){
_start:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2917_ = lean_unsigned_to_nat(0u);
v___x_2918_ = lean_string_utf8_byte_size(v_scope_2916_);
lean_inc_ref(v_scope_2916_);
v___x_2919_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2919_, 0, v_scope_2916_);
lean_ctor_set(v___x_2919_, 1, v___x_2917_);
lean_ctor_set(v___x_2919_, 2, v___x_2918_);
v___x_2920_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0);
v___x_2921_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2916_, v___x_2919_, v___x_2918_, v___x_2920_, v_endpoint_2915_);
lean_dec_ref_known(v___x_2919_, 3);
lean_dec_ref(v_scope_2916_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(lean_object* v_scope_2922_, lean_object* v___x_2923_, lean_object* v___x_2924_, lean_object* v_inst_2925_, lean_object* v_R_2926_, lean_object* v_a_2927_, lean_object* v_b_2928_, lean_object* v_c_2929_){
_start:
{
lean_object* v___x_2930_; 
v___x_2930_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2922_, v___x_2923_, v___x_2924_, v_a_2927_, v_b_2928_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___boxed(lean_object* v_scope_2931_, lean_object* v___x_2932_, lean_object* v___x_2933_, lean_object* v_inst_2934_, lean_object* v_R_2935_, lean_object* v_a_2936_, lean_object* v_b_2937_, lean_object* v_c_2938_){
_start:
{
lean_object* v_res_2939_; 
v_res_2939_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(v_scope_2931_, v___x_2932_, v___x_2933_, v_inst_2934_, v_R_2935_, v_a_2936_, v_b_2937_, v_c_2938_);
lean_dec_ref(v___x_2932_);
lean_dec_ref(v_scope_2931_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(lean_object* v_service_2940_, lean_object* v_scope_2941_){
_start:
{
lean_object* v_artifactEndpoint_2942_; lean_object* v___x_2943_; 
v_artifactEndpoint_2942_ = lean_ctor_get(v_service_2940_, 2);
lean_inc_ref(v_artifactEndpoint_2942_);
lean_dec_ref(v_service_2940_);
v___x_2943_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_artifactEndpoint_2942_, v_scope_2941_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(uint64_t v_contentHash_2946_, lean_object* v_service_2947_, lean_object* v_scope_2948_){
_start:
{
lean_object* v___y_2950_; lean_object* v_s_2957_; lean_object* v___x_2958_; 
v_s_2957_ = lean_ctor_get(v_scope_2948_, 0);
lean_inc_ref(v_s_2957_);
lean_dec_ref(v_scope_2948_);
v___x_2958_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(v_service_2947_, v_s_2957_);
v___y_2950_ = v___x_2958_;
goto v___jp_2949_;
v___jp_2949_:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; 
v___x_2951_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_2952_ = lean_string_append(v___y_2950_, v___x_2951_);
v___x_2953_ = l_Lake_lowerHexUInt64(v_contentHash_2946_);
v___x_2954_ = lean_string_append(v___x_2952_, v___x_2953_);
lean_dec_ref(v___x_2953_);
v___x_2955_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1));
v___x_2956_ = lean_string_append(v___x_2954_, v___x_2955_);
return v___x_2956_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___boxed(lean_object* v_contentHash_2959_, lean_object* v_service_2960_, lean_object* v_scope_2961_){
_start:
{
uint64_t v_contentHash_boxed_2962_; lean_object* v_res_2963_; 
v_contentHash_boxed_2962_ = lean_unbox_uint64(v_contentHash_2959_);
lean_dec_ref(v_contentHash_2959_);
v_res_2963_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_boxed_2962_, v_service_2960_, v_scope_2961_);
return v_res_2963_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl(uint64_t v_contentHash_2967_, lean_object* v_service_2968_, lean_object* v_scope_2969_){
_start:
{
lean_object* v___y_2971_; uint8_t v_isReservoir_2978_; 
v_isReservoir_2978_ = lean_ctor_get_uint8(v_service_2968_, sizeof(void*)*5);
if (v_isReservoir_2978_ == 0)
{
lean_object* v___x_2979_; 
v___x_2979_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_2967_, v_service_2968_, v_scope_2969_);
return v___x_2979_;
}
else
{
if (lean_obj_tag(v_scope_2969_) == 0)
{
lean_object* v_apiEndpoint_2980_; lean_object* v_s_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v_apiEndpoint_2980_ = lean_ctor_get(v_service_2968_, 4);
lean_inc_ref(v_apiEndpoint_2980_);
lean_dec_ref(v_service_2968_);
v_s_2981_ = lean_ctor_get(v_scope_2969_, 0);
lean_inc_ref(v_s_2981_);
lean_dec_ref_known(v_scope_2969_, 1);
v___x_2982_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_2983_ = lean_string_append(v_apiEndpoint_2980_, v___x_2982_);
v___x_2984_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_2983_, v_s_2981_);
v___y_2971_ = v___x_2984_;
goto v___jp_2970_;
}
else
{
lean_object* v_apiEndpoint_2985_; lean_object* v_s_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; 
v_apiEndpoint_2985_ = lean_ctor_get(v_service_2968_, 4);
lean_inc_ref(v_apiEndpoint_2985_);
lean_dec_ref(v_service_2968_);
v_s_2986_ = lean_ctor_get(v_scope_2969_, 0);
lean_inc_ref(v_s_2986_);
lean_dec_ref_known(v_scope_2969_, 1);
v___x_2987_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_2988_ = lean_string_append(v_apiEndpoint_2985_, v___x_2987_);
v___x_2989_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_2988_, v_s_2986_);
v___y_2971_ = v___x_2989_;
goto v___jp_2970_;
}
}
v___jp_2970_:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; 
v___x_2972_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__0));
v___x_2973_ = lean_string_append(v___y_2971_, v___x_2972_);
v___x_2974_ = l_Lake_lowerHexUInt64(v_contentHash_2967_);
v___x_2975_ = lean_string_append(v___x_2973_, v___x_2974_);
lean_dec_ref(v___x_2974_);
v___x_2976_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1));
v___x_2977_ = lean_string_append(v___x_2975_, v___x_2976_);
return v___x_2977_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl___boxed(lean_object* v_contentHash_2990_, lean_object* v_service_2991_, lean_object* v_scope_2992_){
_start:
{
uint64_t v_contentHash_boxed_2993_; lean_object* v_res_2994_; 
v_contentHash_boxed_2993_ = lean_unbox_uint64(v_contentHash_2990_);
lean_dec_ref(v_contentHash_2990_);
v_res_2994_ = l_Lake_CacheService_artifactUrl(v_contentHash_boxed_2993_, v_service_2991_, v_scope_2992_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact(lean_object* v_descr_2998_, lean_object* v_cache_2999_, lean_object* v_service_3000_, lean_object* v_scope_3001_, uint8_t v_force_3002_, lean_object* v_a_3003_){
_start:
{
uint64_t v_hash_3005_; lean_object* v_ext_3006_; lean_object* v_url_3007_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3062_; lean_object* v___y_3065_; uint8_t v_a_3066_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___y_3072_; lean_object* v___x_3081_; lean_object* v___x_3082_; uint8_t v___x_3083_; 
v_hash_3005_ = lean_ctor_get_uint64(v_descr_2998_, sizeof(void*)*1);
v_ext_3006_ = lean_ctor_get(v_descr_2998_, 0);
lean_inc_ref(v_scope_3001_);
v_url_3007_ = l_Lake_CacheService_artifactUrl(v_hash_3005_, v_service_3000_, v_scope_3001_);
v___x_3069_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_3070_ = l_System_FilePath_join(v_cache_2999_, v___x_3069_);
v___x_3081_ = lean_string_utf8_byte_size(v_ext_3006_);
v___x_3082_ = lean_unsigned_to_nat(0u);
v___x_3083_ = lean_nat_dec_eq(v___x_3081_, v___x_3082_);
if (v___x_3083_ == 0)
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_3084_ = l_Lake_lowerHexUInt64(v_hash_3005_);
v___x_3085_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_3086_ = lean_string_append(v___x_3084_, v___x_3085_);
v___x_3087_ = lean_string_append(v___x_3086_, v_ext_3006_);
v___y_3072_ = v___x_3087_;
goto v___jp_3071_;
}
else
{
lean_object* v___x_3088_; 
v___x_3088_ = l_Lake_lowerHexUInt64(v_hash_3005_);
v___y_3072_ = v___x_3088_;
goto v___jp_3071_;
}
v___jp_3008_:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; uint8_t v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3011_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__0));
v___x_3012_ = lean_string_append(v___y_3010_, v___x_3011_);
v___x_3013_ = l_Lake_lowerHexUInt64(v_hash_3005_);
v___x_3014_ = lean_string_append(v___x_3012_, v___x_3013_);
lean_dec_ref(v___x_3013_);
v___x_3015_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3016_ = lean_string_append(v___x_3014_, v___x_3015_);
v___x_3017_ = lean_string_append(v___x_3016_, v___y_3009_);
v___x_3018_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3019_ = lean_string_append(v___x_3017_, v___x_3018_);
v___x_3020_ = lean_string_append(v___x_3019_, v_url_3007_);
v___x_3021_ = 1;
v___x_3022_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3022_, 0, v___x_3020_);
lean_ctor_set_uint8(v___x_3022_, sizeof(void*)*1, v___x_3021_);
lean_inc_ref(v_a_3003_);
v___x_3023_ = lean_apply_2(v_a_3003_, v___x_3022_, lean_box(0));
v___x_3024_ = lean_unsigned_to_nat(0u);
v___x_3025_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3026_ = l_Lake_downloadArtifactCore(v_hash_3005_, v_url_3007_, v___y_3009_, v___x_3025_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; lean_object* v_a_3028_; lean_object* v___x_3029_; uint8_t v___x_3030_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
lean_inc(v_a_3027_);
v_a_3028_ = lean_ctor_get(v___x_3026_, 1);
lean_inc(v_a_3028_);
lean_dec_ref_known(v___x_3026_, 2);
v___x_3029_ = lean_array_get_size(v_a_3028_);
v___x_3030_ = lean_nat_dec_lt(v___x_3024_, v___x_3029_);
if (v___x_3030_ == 0)
{
lean_object* v___x_3031_; 
lean_dec(v_a_3028_);
v___x_3031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3031_, 0, v_a_3027_);
return v___x_3031_;
}
else
{
lean_object* v___x_3032_; size_t v___x_3033_; size_t v___x_3034_; lean_object* v___x_3035_; 
v___x_3032_ = lean_box(0);
v___x_3033_ = ((size_t)0ULL);
v___x_3034_ = lean_usize_of_nat(v___x_3029_);
v___x_3035_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3028_, v___x_3033_, v___x_3034_, v___x_3032_, v_a_3003_);
lean_dec(v_a_3028_);
if (lean_obj_tag(v___x_3035_) == 0)
{
lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3042_; 
v_isSharedCheck_3042_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3042_ == 0)
{
lean_object* v_unused_3043_; 
v_unused_3043_ = lean_ctor_get(v___x_3035_, 0);
lean_dec(v_unused_3043_);
v___x_3037_ = v___x_3035_;
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
else
{
lean_dec(v___x_3035_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3042_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v___x_3040_; 
if (v_isShared_3038_ == 0)
{
lean_ctor_set(v___x_3037_, 0, v_a_3027_);
v___x_3040_ = v___x_3037_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_a_3027_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
}
}
}
else
{
lean_dec(v_a_3027_);
return v___x_3035_;
}
}
}
else
{
lean_object* v_a_3044_; lean_object* v___x_3045_; uint8_t v___x_3046_; 
v_a_3044_ = lean_ctor_get(v___x_3026_, 1);
lean_inc(v_a_3044_);
lean_dec_ref_known(v___x_3026_, 2);
v___x_3045_ = lean_array_get_size(v_a_3044_);
v___x_3046_ = lean_nat_dec_lt(v___x_3024_, v___x_3045_);
if (v___x_3046_ == 0)
{
lean_object* v___x_3047_; lean_object* v___x_3048_; 
lean_dec(v_a_3044_);
v___x_3047_ = lean_box(0);
v___x_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
return v___x_3048_;
}
else
{
lean_object* v___x_3049_; size_t v___x_3050_; size_t v___x_3051_; lean_object* v___x_3052_; 
v___x_3049_ = lean_box(0);
v___x_3050_ = ((size_t)0ULL);
v___x_3051_ = lean_usize_of_nat(v___x_3045_);
v___x_3052_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3044_, v___x_3050_, v___x_3051_, v___x_3049_, v_a_3003_);
lean_dec(v_a_3044_);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3059_; 
v_isSharedCheck_3059_ = !lean_is_exclusive(v___x_3052_);
if (v_isSharedCheck_3059_ == 0)
{
lean_object* v_unused_3060_; 
v_unused_3060_ = lean_ctor_get(v___x_3052_, 0);
lean_dec(v_unused_3060_);
v___x_3054_ = v___x_3052_;
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
else
{
lean_dec(v___x_3052_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v___x_3057_; 
if (v_isShared_3055_ == 0)
{
lean_ctor_set_tag(v___x_3054_, 1);
lean_ctor_set(v___x_3054_, 0, v___x_3049_);
v___x_3057_ = v___x_3054_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v___x_3049_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
}
else
{
return v___x_3052_;
}
}
}
}
v___jp_3061_:
{
lean_object* v_s_3063_; 
v_s_3063_ = lean_ctor_get(v_scope_3001_, 0);
lean_inc_ref(v_s_3063_);
lean_dec_ref(v_scope_3001_);
v___y_3009_ = v___y_3062_;
v___y_3010_ = v_s_3063_;
goto v___jp_3008_;
}
v___jp_3064_:
{
if (v_a_3066_ == 0)
{
v___y_3062_ = v___y_3065_;
goto v___jp_3061_;
}
else
{
if (v_force_3002_ == 0)
{
lean_object* v___x_3067_; lean_object* v___x_3068_; 
lean_dec_ref(v___y_3065_);
lean_dec_ref(v_url_3007_);
lean_dec_ref(v_scope_3001_);
v___x_3067_ = lean_box(0);
v___x_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3067_);
return v___x_3068_;
}
else
{
v___y_3062_ = v___y_3065_;
goto v___jp_3061_;
}
}
}
v___jp_3071_:
{
lean_object* v_path_3073_; lean_object* v___x_3074_; uint8_t v___x_3075_; uint8_t v___x_3076_; 
v_path_3073_ = l_System_FilePath_join(v___x_3070_, v___y_3072_);
v___x_3074_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3075_ = l_System_FilePath_pathExists(v_path_3073_);
v___x_3076_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_3076_ == 0)
{
v___y_3065_ = v_path_3073_;
v_a_3066_ = v___x_3075_;
goto v___jp_3064_;
}
else
{
lean_object* v___x_3077_; size_t v___x_3078_; size_t v___x_3079_; lean_object* v___x_3080_; 
v___x_3077_ = lean_box(0);
v___x_3078_ = ((size_t)0ULL);
v___x_3079_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_3080_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_3074_, v___x_3078_, v___x_3079_, v___x_3077_, v_a_3003_);
if (lean_obj_tag(v___x_3080_) == 0)
{
lean_dec_ref_known(v___x_3080_, 1);
v___y_3065_ = v_path_3073_;
v_a_3066_ = v___x_3075_;
goto v___jp_3064_;
}
else
{
lean_dec_ref(v_path_3073_);
lean_dec_ref(v_url_3007_);
lean_dec_ref(v_scope_3001_);
return v___x_3080_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact___boxed(lean_object* v_descr_3089_, lean_object* v_cache_3090_, lean_object* v_service_3091_, lean_object* v_scope_3092_, lean_object* v_force_3093_, lean_object* v_a_3094_, lean_object* v___y_3095_){
_start:
{
uint8_t v_force_boxed_3096_; lean_object* v_res_3097_; 
v_force_boxed_3096_ = lean_unbox(v_force_3093_);
v_res_3097_ = l_Lake_CacheService_downloadArtifact(v_descr_3089_, v_cache_3090_, v_service_3091_, v_scope_3092_, v_force_boxed_3096_, v_a_3094_);
lean_dec_ref(v_a_3094_);
lean_dec_ref(v_descr_3089_);
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(lean_object* v_a_3098_, lean_object* v_file_3099_, lean_object* v_contentType_3100_, lean_object* v_url_3101_, lean_object* v_key_3102_){
_start:
{
lean_object* v_stderr_3105_; lean_object* v_a_3106_; lean_object* v_stderr_3118_; lean_object* v___y_3127_; lean_object* v___y_3130_; lean_object* v_a_3131_; lean_object* v___y_3158_; lean_object* v_a_3159_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v_a_3184_; lean_object* v_a_3198_; lean_object* v___x_3249_; lean_object* v_val_3251_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v___x_3249_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3257_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_3258_ = lean_io_getenv(v___x_3257_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v___x_3259_; 
v___x_3259_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v_val_3251_ = v___x_3259_;
goto v___jp_3250_;
}
else
{
lean_object* v_val_3260_; 
v_val_3260_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_val_3260_);
lean_dec_ref_known(v___x_3258_, 1);
v_val_3251_ = v_val_3260_;
goto v___jp_3250_;
}
v___jp_3104_:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; uint8_t v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3107_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0));
v___x_3108_ = lean_string_append(v___x_3107_, v_a_3106_);
lean_dec_ref(v_a_3106_);
v___x_3109_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_3110_ = lean_string_append(v___x_3108_, v___x_3109_);
v___x_3111_ = lean_string_append(v___x_3110_, v_stderr_3105_);
lean_dec_ref(v_stderr_3105_);
v___x_3112_ = 3;
v___x_3113_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3113_, 0, v___x_3111_);
lean_ctor_set_uint8(v___x_3113_, sizeof(void*)*1, v___x_3112_);
lean_inc_ref(v_a_3098_);
v___x_3114_ = lean_apply_2(v_a_3098_, v___x_3113_, lean_box(0));
v___x_3115_ = lean_box(0);
v___x_3116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
return v___x_3116_;
}
v___jp_3117_:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; uint8_t v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3119_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2));
v___x_3120_ = lean_string_append(v___x_3119_, v_stderr_3118_);
lean_dec_ref(v_stderr_3118_);
v___x_3121_ = 3;
v___x_3122_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3122_, 0, v___x_3120_);
lean_ctor_set_uint8(v___x_3122_, sizeof(void*)*1, v___x_3121_);
lean_inc_ref(v_a_3098_);
v___x_3123_ = lean_apply_2(v_a_3098_, v___x_3122_, lean_box(0));
v___x_3124_ = lean_box(0);
v___x_3125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
return v___x_3125_;
}
v___jp_3126_:
{
lean_object* v_stderr_3128_; 
v_stderr_3128_ = lean_ctor_get(v___y_3127_, 1);
lean_inc_ref(v_stderr_3128_);
lean_dec_ref(v___y_3127_);
v_stderr_3118_ = v_stderr_3128_;
goto v___jp_3117_;
}
v___jp_3129_:
{
if (lean_obj_tag(v_a_3131_) == 0)
{
v___y_3127_ = v___y_3130_;
goto v___jp_3126_;
}
else
{
lean_object* v_val_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3156_; 
v_val_3132_ = lean_ctor_get(v_a_3131_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v_a_3131_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3134_ = v_a_3131_;
v_isShared_3135_ = v_isSharedCheck_3156_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_val_3132_);
lean_dec(v_a_3131_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3156_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3136_; uint8_t v___x_3137_; 
v___x_3136_ = lean_unsigned_to_nat(200u);
v___x_3137_ = lean_nat_dec_eq(v_val_3132_, v___x_3136_);
if (v___x_3137_ == 0)
{
lean_object* v_stdout_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; uint8_t v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3150_; 
v_stdout_3138_ = lean_ctor_get(v___y_3130_, 0);
lean_inc_ref(v_stdout_3138_);
lean_dec_ref(v___y_3130_);
v___x_3139_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3));
v___x_3140_ = l_Nat_reprFast(v_val_3132_);
v___x_3141_ = lean_string_append(v___x_3139_, v___x_3140_);
lean_dec_ref(v___x_3140_);
v___x_3142_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_3143_ = lean_string_append(v___x_3141_, v___x_3142_);
v___x_3144_ = lean_string_append(v___x_3143_, v_stdout_3138_);
lean_dec_ref(v_stdout_3138_);
v___x_3145_ = 3;
v___x_3146_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3146_, 0, v___x_3144_);
lean_ctor_set_uint8(v___x_3146_, sizeof(void*)*1, v___x_3145_);
lean_inc_ref(v_a_3098_);
v___x_3147_ = lean_apply_2(v_a_3098_, v___x_3146_, lean_box(0));
v___x_3148_ = lean_box(0);
if (v_isShared_3135_ == 0)
{
lean_ctor_set(v___x_3134_, 0, v___x_3148_);
v___x_3150_ = v___x_3134_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3148_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
else
{
lean_object* v___x_3152_; lean_object* v___x_3154_; 
lean_dec(v_val_3132_);
lean_dec_ref(v___y_3130_);
v___x_3152_ = lean_box(0);
if (v_isShared_3135_ == 0)
{
lean_ctor_set_tag(v___x_3134_, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3152_);
v___x_3154_ = v___x_3134_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3152_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
}
v___jp_3157_:
{
lean_object* v_stderr_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; uint8_t v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; 
v_stderr_3160_ = lean_ctor_get(v___y_3158_, 1);
lean_inc_ref(v_stderr_3160_);
lean_dec_ref(v___y_3158_);
v___x_3161_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_3162_ = lean_string_append(v___x_3161_, v_a_3159_);
lean_dec_ref(v_a_3159_);
v___x_3163_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_3164_ = lean_string_append(v___x_3162_, v___x_3163_);
v___x_3165_ = lean_string_append(v___x_3164_, v_stderr_3160_);
lean_dec_ref(v_stderr_3160_);
v___x_3166_ = 3;
v___x_3167_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3167_, 0, v___x_3165_);
lean_ctor_set_uint8(v___x_3167_, sizeof(void*)*1, v___x_3166_);
lean_inc_ref(v_a_3098_);
v___x_3168_ = lean_apply_2(v_a_3098_, v___x_3167_, lean_box(0));
v___x_3169_ = lean_box(0);
v___x_3170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3169_);
return v___x_3170_;
}
v___jp_3171_:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3174_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_3175_ = l_Lake_JsonObject_getJson_x3f(v___y_3172_, v___x_3174_);
lean_dec(v___y_3172_);
if (lean_obj_tag(v___x_3175_) == 0)
{
v___y_3127_ = v___y_3173_;
goto v___jp_3126_;
}
else
{
lean_object* v_val_3176_; lean_object* v___x_3177_; 
v_val_3176_ = lean_ctor_get(v___x_3175_, 0);
lean_inc(v_val_3176_);
lean_dec_ref_known(v___x_3175_, 1);
v___x_3177_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_3176_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_object* v_a_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; 
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
lean_inc(v_a_3178_);
lean_dec_ref_known(v___x_3177_, 1);
v___x_3179_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_3180_ = lean_string_append(v___x_3179_, v_a_3178_);
lean_dec(v_a_3178_);
v___y_3158_ = v___y_3173_;
v_a_3159_ = v___x_3180_;
goto v___jp_3157_;
}
else
{
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_object* v_a_3181_; 
v_a_3181_ = lean_ctor_get(v___x_3177_, 0);
lean_inc(v_a_3181_);
lean_dec_ref_known(v___x_3177_, 1);
v___y_3158_ = v___y_3173_;
v_a_3159_ = v_a_3181_;
goto v___jp_3157_;
}
else
{
lean_object* v_a_3182_; 
v_a_3182_ = lean_ctor_get(v___x_3177_, 0);
lean_inc(v_a_3182_);
lean_dec_ref_known(v___x_3177_, 1);
v___y_3130_ = v___y_3173_;
v_a_3131_ = v_a_3182_;
goto v___jp_3129_;
}
}
}
}
v___jp_3183_:
{
lean_object* v_stderr_3185_; lean_object* v___x_3186_; 
v_stderr_3185_ = lean_ctor_get(v_a_3184_, 1);
lean_inc_ref(v_stderr_3185_);
v___x_3186_ = l_Lean_Json_parse(v_stderr_3185_);
if (lean_obj_tag(v___x_3186_) == 0)
{
lean_object* v_a_3187_; 
lean_inc_ref(v_stderr_3185_);
lean_dec_ref(v_a_3184_);
v_a_3187_ = lean_ctor_get(v___x_3186_, 0);
lean_inc(v_a_3187_);
lean_dec_ref_known(v___x_3186_, 1);
v_stderr_3105_ = v_stderr_3185_;
v_a_3106_ = v_a_3187_;
goto v___jp_3104_;
}
else
{
lean_object* v_a_3188_; lean_object* v___x_3189_; 
v_a_3188_ = lean_ctor_get(v___x_3186_, 0);
lean_inc(v_a_3188_);
lean_dec_ref_known(v___x_3186_, 1);
v___x_3189_ = l_Lean_Json_getObj_x3f(v_a_3188_);
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_object* v_a_3190_; 
lean_inc_ref(v_stderr_3185_);
lean_dec_ref(v_a_3184_);
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
lean_inc(v_a_3190_);
lean_dec_ref_known(v___x_3189_, 1);
v_stderr_3105_ = v_stderr_3185_;
v_a_3106_ = v_a_3190_;
goto v___jp_3104_;
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v_a_3191_ = lean_ctor_get(v___x_3189_, 0);
lean_inc(v_a_3191_);
lean_dec_ref_known(v___x_3189_, 1);
v___x_3192_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8));
v___x_3193_ = l_Lake_JsonObject_getJson_x3f(v_a_3191_, v___x_3192_);
if (lean_obj_tag(v___x_3193_) == 0)
{
lean_inc_ref(v_stderr_3185_);
lean_dec(v_a_3191_);
lean_dec_ref(v_a_3184_);
v_stderr_3118_ = v_stderr_3185_;
goto v___jp_3117_;
}
else
{
lean_object* v_val_3194_; lean_object* v___x_3195_; 
v_val_3194_ = lean_ctor_get(v___x_3193_, 0);
lean_inc(v_val_3194_);
lean_dec_ref_known(v___x_3193_, 1);
v___x_3195_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_3194_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_dec_ref_known(v___x_3195_, 1);
v___y_3172_ = v_a_3191_;
v___y_3173_ = v_a_3184_;
goto v___jp_3171_;
}
else
{
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_dec_ref_known(v___x_3195_, 1);
v___y_3172_ = v_a_3191_;
v___y_3173_ = v_a_3184_;
goto v___jp_3171_;
}
else
{
lean_object* v_a_3196_; 
lean_dec(v_a_3191_);
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
lean_inc(v_a_3196_);
lean_dec_ref_known(v___x_3195_, 1);
v___y_3130_ = v_a_3184_;
v_a_3131_ = v_a_3196_;
goto v___jp_3129_;
}
}
}
}
}
}
v___jp_3197_:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; uint8_t v___x_3220_; uint8_t v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3199_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_3200_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_3201_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_3202_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18));
v___x_3203_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_3204_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20));
v___x_3205_ = lean_string_append(v___x_3204_, v_contentType_3100_);
v___x_3206_ = lean_unsigned_to_nat(14u);
v___x_3207_ = lean_mk_empty_array_with_capacity(v___x_3206_);
lean_dec_ref(v___x_3207_);
v___x_3208_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26);
v___x_3209_ = lean_array_push(v___x_3208_, v_key_3102_);
v___x_3210_ = lean_array_push(v___x_3209_, v___x_3200_);
v___x_3211_ = lean_array_push(v___x_3210_, v___x_3201_);
v___x_3212_ = lean_array_push(v___x_3211_, v___x_3202_);
v___x_3213_ = lean_array_push(v___x_3212_, v_file_3099_);
v___x_3214_ = lean_array_push(v___x_3213_, v_url_3101_);
v___x_3215_ = lean_array_push(v___x_3214_, v___x_3203_);
v___x_3216_ = lean_array_push(v___x_3215_, v___x_3205_);
v___x_3217_ = lean_box(0);
v___x_3218_ = lean_unsigned_to_nat(0u);
v___x_3219_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_3220_ = 1;
v___x_3221_ = 0;
v___x_3222_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_3222_, 0, v___x_3199_);
lean_ctor_set(v___x_3222_, 1, v_a_3198_);
lean_ctor_set(v___x_3222_, 2, v___x_3216_);
lean_ctor_set(v___x_3222_, 3, v___x_3217_);
lean_ctor_set(v___x_3222_, 4, v___x_3219_);
lean_ctor_set_uint8(v___x_3222_, sizeof(void*)*5, v___x_3220_);
lean_ctor_set_uint8(v___x_3222_, sizeof(void*)*5 + 1, v___x_3221_);
v___x_3223_ = l_Lake_captureProc_x27(v___x_3222_, v___x_3219_);
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_object* v_a_3224_; lean_object* v_a_3225_; lean_object* v___x_3226_; uint8_t v___x_3227_; 
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
lean_inc(v_a_3224_);
v_a_3225_ = lean_ctor_get(v___x_3223_, 1);
lean_inc(v_a_3225_);
lean_dec_ref_known(v___x_3223_, 2);
v___x_3226_ = lean_array_get_size(v_a_3225_);
v___x_3227_ = lean_nat_dec_lt(v___x_3218_, v___x_3226_);
if (v___x_3227_ == 0)
{
lean_dec(v_a_3225_);
v_a_3184_ = v_a_3224_;
goto v___jp_3183_;
}
else
{
lean_object* v___x_3228_; size_t v___x_3229_; size_t v___x_3230_; lean_object* v___x_3231_; 
v___x_3228_ = lean_box(0);
v___x_3229_ = ((size_t)0ULL);
v___x_3230_ = lean_usize_of_nat(v___x_3226_);
v___x_3231_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3225_, v___x_3229_, v___x_3230_, v___x_3228_, v_a_3098_);
lean_dec(v_a_3225_);
if (lean_obj_tag(v___x_3231_) == 0)
{
lean_dec_ref_known(v___x_3231_, 1);
v_a_3184_ = v_a_3224_;
goto v___jp_3183_;
}
else
{
lean_dec(v_a_3224_);
return v___x_3231_;
}
}
}
else
{
lean_object* v_a_3232_; lean_object* v___x_3233_; uint8_t v___x_3234_; 
v_a_3232_ = lean_ctor_get(v___x_3223_, 1);
lean_inc(v_a_3232_);
lean_dec_ref_known(v___x_3223_, 2);
v___x_3233_ = lean_array_get_size(v_a_3232_);
v___x_3234_ = lean_nat_dec_lt(v___x_3218_, v___x_3233_);
if (v___x_3234_ == 0)
{
lean_object* v___x_3235_; lean_object* v___x_3236_; 
lean_dec(v_a_3232_);
v___x_3235_ = lean_box(0);
v___x_3236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3235_);
return v___x_3236_;
}
else
{
lean_object* v___x_3237_; size_t v___x_3238_; size_t v___x_3239_; lean_object* v___x_3240_; 
v___x_3237_ = lean_box(0);
v___x_3238_ = ((size_t)0ULL);
v___x_3239_ = lean_usize_of_nat(v___x_3233_);
v___x_3240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_3232_, v___x_3238_, v___x_3239_, v___x_3237_, v_a_3098_);
lean_dec(v_a_3232_);
if (lean_obj_tag(v___x_3240_) == 0)
{
lean_object* v___x_3242_; uint8_t v_isShared_3243_; uint8_t v_isSharedCheck_3247_; 
v_isSharedCheck_3247_ = !lean_is_exclusive(v___x_3240_);
if (v_isSharedCheck_3247_ == 0)
{
lean_object* v_unused_3248_; 
v_unused_3248_ = lean_ctor_get(v___x_3240_, 0);
lean_dec(v_unused_3248_);
v___x_3242_ = v___x_3240_;
v_isShared_3243_ = v_isSharedCheck_3247_;
goto v_resetjp_3241_;
}
else
{
lean_dec(v___x_3240_);
v___x_3242_ = lean_box(0);
v_isShared_3243_ = v_isSharedCheck_3247_;
goto v_resetjp_3241_;
}
v_resetjp_3241_:
{
lean_object* v___x_3245_; 
if (v_isShared_3243_ == 0)
{
lean_ctor_set_tag(v___x_3242_, 1);
lean_ctor_set(v___x_3242_, 0, v___x_3237_);
v___x_3245_ = v___x_3242_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3237_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
}
else
{
return v___x_3240_;
}
}
}
}
v___jp_3250_:
{
uint8_t v___x_3252_; 
v___x_3252_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_3252_ == 0)
{
v_a_3198_ = v_val_3251_;
goto v___jp_3197_;
}
else
{
lean_object* v___x_3253_; size_t v___x_3254_; size_t v___x_3255_; lean_object* v___x_3256_; 
v___x_3253_ = lean_box(0);
v___x_3254_ = ((size_t)0ULL);
v___x_3255_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_3256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_3249_, v___x_3254_, v___x_3255_, v___x_3253_, v_a_3098_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_dec_ref_known(v___x_3256_, 1);
v_a_3198_ = v_val_3251_;
goto v___jp_3197_;
}
else
{
lean_dec_ref(v_val_3251_);
lean_dec_ref(v_key_3102_);
lean_dec_ref(v_url_3101_);
lean_dec_ref(v_file_3099_);
return v___x_3256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0___boxed(lean_object* v_a_3261_, lean_object* v_file_3262_, lean_object* v_contentType_3263_, lean_object* v_url_3264_, lean_object* v_key_3265_, lean_object* v___y_3266_){
_start:
{
lean_object* v_res_3267_; 
v_res_3267_ = l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(v_a_3261_, v_file_3262_, v_contentType_3263_, v_url_3264_, v_key_3265_);
lean_dec_ref(v_contentType_3263_);
lean_dec_ref(v_a_3261_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact(uint64_t v_contentHash_3269_, lean_object* v_art_3270_, lean_object* v_service_3271_, lean_object* v_scope_3272_, lean_object* v_a_3273_){
_start:
{
lean_object* v_url_3275_; lean_object* v___y_3277_; lean_object* v_s_3294_; 
lean_inc_ref(v_scope_3272_);
lean_inc_ref(v_service_3271_);
v_url_3275_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_3269_, v_service_3271_, v_scope_3272_);
v_s_3294_ = lean_ctor_get(v_scope_3272_, 0);
lean_inc_ref(v_s_3294_);
lean_dec_ref(v_scope_3272_);
v___y_3277_ = v_s_3294_;
goto v___jp_3276_;
v___jp_3276_:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; uint8_t v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v_key_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3278_ = ((lean_object*)(l_Lake_CacheService_uploadArtifact___closed__0));
v___x_3279_ = lean_string_append(v___y_3277_, v___x_3278_);
v___x_3280_ = l_Lake_lowerHexUInt64(v_contentHash_3269_);
v___x_3281_ = lean_string_append(v___x_3279_, v___x_3280_);
lean_dec_ref(v___x_3280_);
v___x_3282_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3283_ = lean_string_append(v___x_3281_, v___x_3282_);
v___x_3284_ = lean_string_append(v___x_3283_, v_art_3270_);
v___x_3285_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3286_ = lean_string_append(v___x_3284_, v___x_3285_);
v___x_3287_ = lean_string_append(v___x_3286_, v_url_3275_);
v___x_3288_ = 1;
v___x_3289_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3289_, 0, v___x_3287_);
lean_ctor_set_uint8(v___x_3289_, sizeof(void*)*1, v___x_3288_);
lean_inc_ref(v_a_3273_);
v___x_3290_ = lean_apply_2(v_a_3273_, v___x_3289_, lean_box(0));
v_key_3291_ = lean_ctor_get(v_service_3271_, 1);
lean_inc_ref(v_key_3291_);
lean_dec_ref(v_service_3271_);
v___x_3292_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_3293_ = l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(v_a_3273_, v_art_3270_, v___x_3292_, v_url_3275_, v_key_3291_);
return v___x_3293_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact___boxed(lean_object* v_contentHash_3295_, lean_object* v_art_3296_, lean_object* v_service_3297_, lean_object* v_scope_3298_, lean_object* v_a_3299_, lean_object* v___y_3300_){
_start:
{
uint64_t v_contentHash_boxed_3301_; lean_object* v_res_3302_; 
v_contentHash_boxed_3301_ = lean_unbox_uint64(v_contentHash_3295_);
lean_dec_ref(v_contentHash_3295_);
v_res_3302_ = l_Lake_CacheService_uploadArtifact(v_contentHash_boxed_3301_, v_art_3296_, v_service_3297_, v_scope_3298_, v_a_3299_);
lean_dec_ref(v_a_3299_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(uint8_t v_x_3303_){
_start:
{
if (v_x_3303_ == 0)
{
lean_object* v___x_3304_; 
v___x_3304_ = lean_unsigned_to_nat(0u);
return v___x_3304_;
}
else
{
lean_object* v___x_3305_; 
v___x_3305_ = lean_unsigned_to_nat(1u);
return v___x_3305_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx___boxed(lean_object* v_x_3306_){
_start:
{
uint8_t v_x_boxed_3307_; lean_object* v_res_3308_; 
v_x_boxed_3307_ = lean_unbox(v_x_3306_);
v_res_3308_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_boxed_3307_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(lean_object* v_k_3309_){
_start:
{
lean_inc(v_k_3309_);
return v_k_3309_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg___boxed(lean_object* v_k_3310_){
_start:
{
lean_object* v_res_3311_; 
v_res_3311_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(v_k_3310_);
lean_dec(v_k_3310_);
return v_res_3311_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(lean_object* v_motive_3312_, lean_object* v_ctorIdx_3313_, uint8_t v_t_3314_, lean_object* v_h_3315_, lean_object* v_k_3316_){
_start:
{
lean_inc(v_k_3316_);
return v_k_3316_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___boxed(lean_object* v_motive_3317_, lean_object* v_ctorIdx_3318_, lean_object* v_t_3319_, lean_object* v_h_3320_, lean_object* v_k_3321_){
_start:
{
uint8_t v_t_boxed_3322_; lean_object* v_res_3323_; 
v_t_boxed_3322_ = lean_unbox(v_t_3319_);
v_res_3323_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(v_motive_3317_, v_ctorIdx_3318_, v_t_boxed_3322_, v_h_3320_, v_k_3321_);
lean_dec(v_k_3321_);
lean_dec(v_ctorIdx_3318_);
return v_res_3323_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(lean_object* v_get_3324_){
_start:
{
lean_inc(v_get_3324_);
return v_get_3324_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg___boxed(lean_object* v_get_3325_){
_start:
{
lean_object* v_res_3326_; 
v_res_3326_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(v_get_3325_);
lean_dec(v_get_3325_);
return v_res_3326_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(lean_object* v_motive_3327_, uint8_t v_t_3328_, lean_object* v_h_3329_, lean_object* v_get_3330_){
_start:
{
lean_inc(v_get_3330_);
return v_get_3330_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___boxed(lean_object* v_motive_3331_, lean_object* v_t_3332_, lean_object* v_h_3333_, lean_object* v_get_3334_){
_start:
{
uint8_t v_t_boxed_3335_; lean_object* v_res_3336_; 
v_t_boxed_3335_ = lean_unbox(v_t_3332_);
v_res_3336_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(v_motive_3331_, v_t_boxed_3335_, v_h_3333_, v_get_3334_);
lean_dec(v_get_3334_);
return v_res_3336_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(lean_object* v_put_3337_){
_start:
{
lean_inc(v_put_3337_);
return v_put_3337_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg___boxed(lean_object* v_put_3338_){
_start:
{
lean_object* v_res_3339_; 
v_res_3339_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(v_put_3338_);
lean_dec(v_put_3338_);
return v_res_3339_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(lean_object* v_motive_3340_, uint8_t v_t_3341_, lean_object* v_h_3342_, lean_object* v_put_3343_){
_start:
{
lean_inc(v_put_3343_);
return v_put_3343_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___boxed(lean_object* v_motive_3344_, lean_object* v_t_3345_, lean_object* v_h_3346_, lean_object* v_put_3347_){
_start:
{
uint8_t v_t_boxed_3348_; lean_object* v_res_3349_; 
v_t_boxed_3348_ = lean_unbox(v_t_3345_);
v_res_3349_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(v_motive_3344_, v_t_boxed_3348_, v_h_3346_, v_put_3347_);
lean_dec(v_put_3347_);
return v_res_3349_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(lean_object* v_n_3350_){
_start:
{
lean_object* v___x_3351_; uint8_t v___x_3352_; 
v___x_3351_ = lean_unsigned_to_nat(0u);
v___x_3352_ = lean_nat_dec_le(v_n_3350_, v___x_3351_);
if (v___x_3352_ == 0)
{
uint8_t v___x_3353_; 
v___x_3353_ = 1;
return v___x_3353_;
}
else
{
uint8_t v___x_3354_; 
v___x_3354_ = 0;
return v___x_3354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat___boxed(lean_object* v_n_3355_){
_start:
{
uint8_t v_res_3356_; lean_object* v_r_3357_; 
v_res_3356_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(v_n_3355_);
lean_dec(v_n_3355_);
v_r_3357_ = lean_box(v_res_3356_);
return v_r_3357_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(uint8_t v_x_3358_, uint8_t v_y_3359_){
_start:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; uint8_t v___x_3362_; 
v___x_3360_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_3358_);
v___x_3361_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_y_3359_);
v___x_3362_ = lean_nat_dec_eq(v___x_3360_, v___x_3361_);
lean_dec(v___x_3361_);
lean_dec(v___x_3360_);
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind___boxed(lean_object* v_x_3363_, lean_object* v_y_3364_){
_start:
{
uint8_t v_x_20__boxed_3365_; uint8_t v_y_21__boxed_3366_; uint8_t v_res_3367_; lean_object* v_r_3368_; 
v_x_20__boxed_3365_ = lean_unbox(v_x_3363_);
v_y_21__boxed_3366_ = lean_unbox(v_y_3364_);
v_res_3367_ = l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(v_x_20__boxed_3365_, v_y_21__boxed_3366_);
v_r_3368_ = lean_box(v_res_3367_);
return v_r_3368_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath(lean_object* v_self_3369_, lean_object* v_path_3370_, uint8_t v_extra_3371_){
_start:
{
if (v_extra_3371_ == 0)
{
lean_object* v_url_3372_; uint64_t v_hash_3373_; lean_object* v_path_3374_; lean_object* v_extraPaths_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3383_; 
v_url_3372_ = lean_ctor_get(v_self_3369_, 0);
v_hash_3373_ = lean_ctor_get_uint64(v_self_3369_, sizeof(void*)*3);
v_path_3374_ = lean_ctor_get(v_self_3369_, 1);
v_extraPaths_3375_ = lean_ctor_get(v_self_3369_, 2);
v_isSharedCheck_3383_ = !lean_is_exclusive(v_self_3369_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3377_ = v_self_3369_;
v_isShared_3378_ = v_isSharedCheck_3383_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_extraPaths_3375_);
lean_inc(v_path_3374_);
lean_inc(v_url_3372_);
lean_dec(v_self_3369_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3383_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v___x_3379_; lean_object* v___x_3381_; 
v___x_3379_ = lean_array_push(v_extraPaths_3375_, v_path_3374_);
if (v_isShared_3378_ == 0)
{
lean_ctor_set(v___x_3377_, 2, v___x_3379_);
lean_ctor_set(v___x_3377_, 1, v_path_3370_);
v___x_3381_ = v___x_3377_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_url_3372_);
lean_ctor_set(v_reuseFailAlloc_3382_, 1, v_path_3370_);
lean_ctor_set(v_reuseFailAlloc_3382_, 2, v___x_3379_);
lean_ctor_set_uint64(v_reuseFailAlloc_3382_, sizeof(void*)*3, v_hash_3373_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
else
{
lean_object* v_url_3384_; uint64_t v_hash_3385_; lean_object* v_path_3386_; lean_object* v_extraPaths_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3395_; 
v_url_3384_ = lean_ctor_get(v_self_3369_, 0);
v_hash_3385_ = lean_ctor_get_uint64(v_self_3369_, sizeof(void*)*3);
v_path_3386_ = lean_ctor_get(v_self_3369_, 1);
v_extraPaths_3387_ = lean_ctor_get(v_self_3369_, 2);
v_isSharedCheck_3395_ = !lean_is_exclusive(v_self_3369_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3389_ = v_self_3369_;
v_isShared_3390_ = v_isSharedCheck_3395_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_extraPaths_3387_);
lean_inc(v_path_3386_);
lean_inc(v_url_3384_);
lean_dec(v_self_3369_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3395_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3391_; lean_object* v___x_3393_; 
v___x_3391_ = lean_array_push(v_extraPaths_3387_, v_path_3370_);
if (v_isShared_3390_ == 0)
{
lean_ctor_set(v___x_3389_, 2, v___x_3391_);
v___x_3393_ = v___x_3389_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v_url_3384_);
lean_ctor_set(v_reuseFailAlloc_3394_, 1, v_path_3386_);
lean_ctor_set(v_reuseFailAlloc_3394_, 2, v___x_3391_);
lean_ctor_set_uint64(v_reuseFailAlloc_3394_, sizeof(void*)*3, v_hash_3385_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath___boxed(lean_object* v_self_3396_, lean_object* v_path_3397_, lean_object* v_extra_3398_){
_start:
{
uint8_t v_extra_boxed_3399_; lean_object* v_res_3400_; 
v_extra_boxed_3399_ = lean_unbox(v_extra_3398_);
v_res_3400_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath(v_self_3396_, v_path_3397_, v_extra_boxed_3399_);
return v_res_3400_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1(void){
_start:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3403_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_3404_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__0));
v___x_3405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3404_);
lean_ctor_set(v___x_3405_, 1, v___x_3403_);
return v___x_3405_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty(void){
_start:
{
lean_object* v___x_3406_; 
v___x_3406_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1);
return v___x_3406_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1(void){
_start:
{
lean_object* v___x_3408_; lean_object* v___f_3409_; 
v___x_3408_ = lean_alloc_closure((void*)(l_Lake_instDecidableEqHash___boxed), 2, 0);
v___f_3409_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3409_, 0, v___x_3408_);
return v___f_3409_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push(lean_object* v_self_3410_, lean_object* v_url_3411_, uint64_t v_hash_3412_, lean_object* v_path_3413_){
_start:
{
lean_object* v_infos_3414_; lean_object* v_indices_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3430_; 
v_infos_3414_ = lean_ctor_get(v_self_3410_, 0);
v_indices_3415_ = lean_ctor_get(v_self_3410_, 1);
v_isSharedCheck_3430_ = !lean_is_exclusive(v_self_3410_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3417_ = v_self_3410_;
v_isShared_3418_ = v_isSharedCheck_3430_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_indices_3415_);
lean_inc(v_infos_3414_);
lean_dec(v_self_3410_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3430_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___f_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___f_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3428_; 
v___f_3419_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0));
v___x_3420_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_3421_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_3421_, 0, v_url_3411_);
lean_ctor_set(v___x_3421_, 1, v_path_3413_);
lean_ctor_set(v___x_3421_, 2, v___x_3420_);
lean_ctor_set_uint64(v___x_3421_, sizeof(void*)*3, v_hash_3412_);
lean_inc_ref(v_infos_3414_);
v___x_3422_ = lean_array_push(v_infos_3414_, v___x_3421_);
v___f_3423_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1);
v___x_3424_ = lean_array_get_size(v_infos_3414_);
lean_dec_ref(v_infos_3414_);
v___x_3425_ = lean_box_uint64(v_hash_3412_);
v___x_3426_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3423_, v___f_3419_, v_indices_3415_, v___x_3425_, v___x_3424_);
if (v_isShared_3418_ == 0)
{
lean_ctor_set(v___x_3417_, 1, v___x_3426_);
lean_ctor_set(v___x_3417_, 0, v___x_3422_);
v___x_3428_ = v___x_3417_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v___x_3422_);
lean_ctor_set(v_reuseFailAlloc_3429_, 1, v___x_3426_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___boxed(lean_object* v_self_3431_, lean_object* v_url_3432_, lean_object* v_hash_3433_, lean_object* v_path_3434_){
_start:
{
uint64_t v_hash_boxed_3435_; lean_object* v_res_3436_; 
v_hash_boxed_3435_ = lean_unbox_uint64(v_hash_3433_);
lean_dec_ref(v_hash_3433_);
v_res_3436_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push(v_self_3431_, v_url_3432_, v_hash_boxed_3435_, v_path_3434_);
return v_res_3436_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew(lean_object* v_self_3437_, lean_object* v_url_3438_, uint64_t v_hash_3439_, lean_object* v_path_3440_){
_start:
{
lean_object* v_infos_3441_; lean_object* v_indices_3442_; lean_object* v___f_3443_; lean_object* v___f_3444_; lean_object* v___x_3445_; uint8_t v___x_3446_; 
v_infos_3441_ = lean_ctor_get(v_self_3437_, 0);
v_indices_3442_ = lean_ctor_get(v_self_3437_, 1);
v___f_3443_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0));
v___f_3444_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1);
v___x_3445_ = lean_box_uint64(v_hash_3439_);
v___x_3446_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_3444_, v___f_3443_, v_indices_3442_, v___x_3445_);
if (v___x_3446_ == 0)
{
lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3459_; 
lean_inc_ref(v_indices_3442_);
lean_inc_ref(v_infos_3441_);
v_isSharedCheck_3459_ = !lean_is_exclusive(v_self_3437_);
if (v_isSharedCheck_3459_ == 0)
{
lean_object* v_unused_3460_; lean_object* v_unused_3461_; 
v_unused_3460_ = lean_ctor_get(v_self_3437_, 1);
lean_dec(v_unused_3460_);
v_unused_3461_ = lean_ctor_get(v_self_3437_, 0);
lean_dec(v_unused_3461_);
v___x_3448_ = v_self_3437_;
v_isShared_3449_ = v_isSharedCheck_3459_;
goto v_resetjp_3447_;
}
else
{
lean_dec(v_self_3437_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3459_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3457_; 
v___x_3450_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_3451_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_3451_, 0, v_url_3438_);
lean_ctor_set(v___x_3451_, 1, v_path_3440_);
lean_ctor_set(v___x_3451_, 2, v___x_3450_);
lean_ctor_set_uint64(v___x_3451_, sizeof(void*)*3, v_hash_3439_);
lean_inc_ref(v_infos_3441_);
v___x_3452_ = lean_array_push(v_infos_3441_, v___x_3451_);
v___x_3453_ = lean_array_get_size(v_infos_3441_);
lean_dec_ref(v_infos_3441_);
v___x_3454_ = lean_box_uint64(v_hash_3439_);
v___x_3455_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3444_, v___f_3443_, v_indices_3442_, v___x_3454_, v___x_3453_);
if (v_isShared_3449_ == 0)
{
lean_ctor_set(v___x_3448_, 1, v___x_3455_);
lean_ctor_set(v___x_3448_, 0, v___x_3452_);
v___x_3457_ = v___x_3448_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v___x_3452_);
lean_ctor_set(v_reuseFailAlloc_3458_, 1, v___x_3455_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
}
else
{
lean_dec_ref(v_path_3440_);
lean_dec_ref(v_url_3438_);
return v_self_3437_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew___boxed(lean_object* v_self_3462_, lean_object* v_url_3463_, lean_object* v_hash_3464_, lean_object* v_path_3465_){
_start:
{
uint64_t v_hash_boxed_3466_; lean_object* v_res_3467_; 
v_hash_boxed_3466_ = lean_unbox_uint64(v_hash_3464_);
lean_dec_ref(v_hash_3464_);
v_res_3467_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew(v_self_3462_, v_url_3463_, v_hash_boxed_3466_, v_path_3465_);
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add(lean_object* v_self_3468_, lean_object* v_url_3469_, uint64_t v_hash_3470_, lean_object* v_path_3471_, uint8_t v_extra_3472_){
_start:
{
lean_object* v_infos_3473_; lean_object* v_indices_3474_; lean_object* v___f_3475_; lean_object* v___f_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; 
v_infos_3473_ = lean_ctor_get(v_self_3468_, 0);
v_indices_3474_ = lean_ctor_get(v_self_3468_, 1);
v___f_3475_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0));
v___f_3476_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1);
v___x_3477_ = lean_box_uint64(v_hash_3470_);
v___x_3478_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_3476_, v___f_3475_, v_indices_3474_, v___x_3477_);
if (lean_obj_tag(v___x_3478_) == 1)
{
lean_object* v_val_3479_; lean_object* v___x_3480_; uint8_t v___x_3481_; 
lean_dec_ref(v_url_3469_);
v_val_3479_ = lean_ctor_get(v___x_3478_, 0);
lean_inc(v_val_3479_);
lean_dec_ref_known(v___x_3478_, 1);
v___x_3480_ = lean_array_get_size(v_infos_3473_);
v___x_3481_ = lean_nat_dec_lt(v_val_3479_, v___x_3480_);
if (v___x_3481_ == 0)
{
lean_dec(v_val_3479_);
lean_dec_ref(v_path_3471_);
return v_self_3468_;
}
else
{
lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3518_; 
lean_inc_ref(v_indices_3474_);
lean_inc_ref(v_infos_3473_);
v_isSharedCheck_3518_ = !lean_is_exclusive(v_self_3468_);
if (v_isSharedCheck_3518_ == 0)
{
lean_object* v_unused_3519_; lean_object* v_unused_3520_; 
v_unused_3519_ = lean_ctor_get(v_self_3468_, 1);
lean_dec(v_unused_3519_);
v_unused_3520_ = lean_ctor_get(v_self_3468_, 0);
lean_dec(v_unused_3520_);
v___x_3483_ = v_self_3468_;
v_isShared_3484_ = v_isSharedCheck_3518_;
goto v_resetjp_3482_;
}
else
{
lean_dec(v_self_3468_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3518_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v_v_3485_; lean_object* v___x_3486_; lean_object* v_xs_x27_3487_; lean_object* v___y_3489_; 
v_v_3485_ = lean_array_fget(v_infos_3473_, v_val_3479_);
v___x_3486_ = lean_box(0);
v_xs_x27_3487_ = lean_array_fset(v_infos_3473_, v_val_3479_, v___x_3486_);
if (v_extra_3472_ == 0)
{
lean_object* v_url_3494_; uint64_t v_hash_3495_; lean_object* v_path_3496_; lean_object* v_extraPaths_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3505_; 
v_url_3494_ = lean_ctor_get(v_v_3485_, 0);
v_hash_3495_ = lean_ctor_get_uint64(v_v_3485_, sizeof(void*)*3);
v_path_3496_ = lean_ctor_get(v_v_3485_, 1);
v_extraPaths_3497_ = lean_ctor_get(v_v_3485_, 2);
v_isSharedCheck_3505_ = !lean_is_exclusive(v_v_3485_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3499_ = v_v_3485_;
v_isShared_3500_ = v_isSharedCheck_3505_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_extraPaths_3497_);
lean_inc(v_path_3496_);
lean_inc(v_url_3494_);
lean_dec(v_v_3485_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3505_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v___x_3501_; lean_object* v___x_3503_; 
v___x_3501_ = lean_array_push(v_extraPaths_3497_, v_path_3496_);
if (v_isShared_3500_ == 0)
{
lean_ctor_set(v___x_3499_, 2, v___x_3501_);
lean_ctor_set(v___x_3499_, 1, v_path_3471_);
v___x_3503_ = v___x_3499_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_url_3494_);
lean_ctor_set(v_reuseFailAlloc_3504_, 1, v_path_3471_);
lean_ctor_set(v_reuseFailAlloc_3504_, 2, v___x_3501_);
lean_ctor_set_uint64(v_reuseFailAlloc_3504_, sizeof(void*)*3, v_hash_3495_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
v___y_3489_ = v___x_3503_;
goto v___jp_3488_;
}
}
}
else
{
lean_object* v_url_3506_; uint64_t v_hash_3507_; lean_object* v_path_3508_; lean_object* v_extraPaths_3509_; lean_object* v___x_3511_; uint8_t v_isShared_3512_; uint8_t v_isSharedCheck_3517_; 
v_url_3506_ = lean_ctor_get(v_v_3485_, 0);
v_hash_3507_ = lean_ctor_get_uint64(v_v_3485_, sizeof(void*)*3);
v_path_3508_ = lean_ctor_get(v_v_3485_, 1);
v_extraPaths_3509_ = lean_ctor_get(v_v_3485_, 2);
v_isSharedCheck_3517_ = !lean_is_exclusive(v_v_3485_);
if (v_isSharedCheck_3517_ == 0)
{
v___x_3511_ = v_v_3485_;
v_isShared_3512_ = v_isSharedCheck_3517_;
goto v_resetjp_3510_;
}
else
{
lean_inc(v_extraPaths_3509_);
lean_inc(v_path_3508_);
lean_inc(v_url_3506_);
lean_dec(v_v_3485_);
v___x_3511_ = lean_box(0);
v_isShared_3512_ = v_isSharedCheck_3517_;
goto v_resetjp_3510_;
}
v_resetjp_3510_:
{
lean_object* v___x_3513_; lean_object* v___x_3515_; 
v___x_3513_ = lean_array_push(v_extraPaths_3509_, v_path_3471_);
if (v_isShared_3512_ == 0)
{
lean_ctor_set(v___x_3511_, 2, v___x_3513_);
v___x_3515_ = v___x_3511_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_url_3506_);
lean_ctor_set(v_reuseFailAlloc_3516_, 1, v_path_3508_);
lean_ctor_set(v_reuseFailAlloc_3516_, 2, v___x_3513_);
lean_ctor_set_uint64(v_reuseFailAlloc_3516_, sizeof(void*)*3, v_hash_3507_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
v___y_3489_ = v___x_3515_;
goto v___jp_3488_;
}
}
}
v___jp_3488_:
{
lean_object* v___x_3490_; lean_object* v___x_3492_; 
v___x_3490_ = lean_array_fset(v_xs_x27_3487_, v_val_3479_, v___y_3489_);
lean_dec(v_val_3479_);
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 0, v___x_3490_);
v___x_3492_ = v___x_3483_;
goto v_reusejp_3491_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v___x_3490_);
lean_ctor_set(v_reuseFailAlloc_3493_, 1, v_indices_3474_);
v___x_3492_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3491_;
}
v_reusejp_3491_:
{
return v___x_3492_;
}
}
}
}
}
else
{
lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3533_; 
lean_inc_ref(v_indices_3474_);
lean_inc_ref(v_infos_3473_);
lean_dec(v___x_3478_);
v_isSharedCheck_3533_ = !lean_is_exclusive(v_self_3468_);
if (v_isSharedCheck_3533_ == 0)
{
lean_object* v_unused_3534_; lean_object* v_unused_3535_; 
v_unused_3534_ = lean_ctor_get(v_self_3468_, 1);
lean_dec(v_unused_3534_);
v_unused_3535_ = lean_ctor_get(v_self_3468_, 0);
lean_dec(v_unused_3535_);
v___x_3522_ = v_self_3468_;
v_isShared_3523_ = v_isSharedCheck_3533_;
goto v_resetjp_3521_;
}
else
{
lean_dec(v_self_3468_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3533_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3531_; 
v___x_3524_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_3525_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_3525_, 0, v_url_3469_);
lean_ctor_set(v___x_3525_, 1, v_path_3471_);
lean_ctor_set(v___x_3525_, 2, v___x_3524_);
lean_ctor_set_uint64(v___x_3525_, sizeof(void*)*3, v_hash_3470_);
lean_inc_ref(v_infos_3473_);
v___x_3526_ = lean_array_push(v_infos_3473_, v___x_3525_);
v___x_3527_ = lean_array_get_size(v_infos_3473_);
lean_dec_ref(v_infos_3473_);
v___x_3528_ = lean_box_uint64(v_hash_3470_);
v___x_3529_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3476_, v___f_3475_, v_indices_3474_, v___x_3528_, v___x_3527_);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 1, v___x_3529_);
lean_ctor_set(v___x_3522_, 0, v___x_3526_);
v___x_3531_ = v___x_3522_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v___x_3526_);
lean_ctor_set(v_reuseFailAlloc_3532_, 1, v___x_3529_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add___boxed(lean_object* v_self_3536_, lean_object* v_url_3537_, lean_object* v_hash_3538_, lean_object* v_path_3539_, lean_object* v_extra_3540_){
_start:
{
uint64_t v_hash_boxed_3541_; uint8_t v_extra_boxed_3542_; lean_object* v_res_3543_; 
v_hash_boxed_3541_ = lean_unbox_uint64(v_hash_3538_);
lean_dec_ref(v_hash_3538_);
v_extra_boxed_3542_ = lean_unbox(v_extra_3540_);
v_res_3543_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add(v_self_3536_, v_url_3537_, v_hash_boxed_3541_, v_path_3539_, v_extra_boxed_3542_);
return v_res_3543_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath(lean_object* v_path_3545_){
_start:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3546_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
v___x_3547_ = l_System_FilePath_addExtension(v_path_3545_, v___x_3546_);
return v___x_3547_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(lean_object* v_cfg_3549_, lean_object* v_out_3550_){
_start:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3551_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0));
v___x_3552_ = l_Lake_JsonObject_getJson_x3f(v_out_3550_, v___x_3551_);
if (lean_obj_tag(v___x_3552_) == 0)
{
lean_object* v___x_3553_; 
v___x_3553_ = lean_box(0);
return v___x_3553_;
}
else
{
lean_object* v_val_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3570_; 
v_val_3554_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3570_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3570_ == 0)
{
v___x_3556_ = v___x_3552_;
v_isShared_3557_ = v_isSharedCheck_3570_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_val_3554_);
lean_dec(v___x_3552_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3570_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3558_; 
v___x_3558_ = l_Lean_Json_getNat_x3f(v_val_3554_);
if (lean_obj_tag(v___x_3558_) == 0)
{
lean_object* v___x_3559_; 
lean_dec_ref_known(v___x_3558_, 1);
lean_del_object(v___x_3556_);
v___x_3559_ = lean_box(0);
return v___x_3559_;
}
else
{
if (lean_obj_tag(v___x_3558_) == 1)
{
lean_object* v_a_3560_; lean_object* v_infos_3561_; lean_object* v___x_3562_; uint8_t v___x_3563_; 
v_a_3560_ = lean_ctor_get(v___x_3558_, 0);
lean_inc(v_a_3560_);
lean_dec_ref_known(v___x_3558_, 1);
v_infos_3561_ = lean_ctor_get(v_cfg_3549_, 1);
v___x_3562_ = lean_array_get_size(v_infos_3561_);
v___x_3563_ = lean_nat_dec_lt(v_a_3560_, v___x_3562_);
if (v___x_3563_ == 0)
{
lean_object* v___x_3564_; 
lean_dec(v_a_3560_);
lean_del_object(v___x_3556_);
v___x_3564_ = lean_box(0);
return v___x_3564_;
}
else
{
lean_object* v___x_3565_; lean_object* v___x_3567_; 
v___x_3565_ = lean_array_fget_borrowed(v_infos_3561_, v_a_3560_);
lean_dec(v_a_3560_);
lean_inc(v___x_3565_);
if (v_isShared_3557_ == 0)
{
lean_ctor_set(v___x_3556_, 0, v___x_3565_);
v___x_3567_ = v___x_3556_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v___x_3565_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
return v___x_3567_;
}
}
}
else
{
lean_object* v___x_3569_; 
lean_dec_ref_known(v___x_3558_, 1);
lean_del_object(v___x_3556_);
v___x_3569_ = lean_box(0);
return v___x_3569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___boxed(lean_object* v_cfg_3571_, lean_object* v_out_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_3571_, v_out_3572_);
lean_dec(v_out_3572_);
lean_dec_ref(v_cfg_3571_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(lean_object* v_s_3574_, lean_object* v_pos_3575_){
_start:
{
lean_object* v_str_3576_; lean_object* v_startInclusive_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; uint8_t v_decide_3581_; 
v_str_3576_ = lean_ctor_get(v_s_3574_, 0);
v_startInclusive_3577_ = lean_ctor_get(v_s_3574_, 1);
v___x_3578_ = lean_nat_add(v_startInclusive_3577_, v_pos_3575_);
v___x_3579_ = lean_nat_sub(v___x_3578_, v_startInclusive_3577_);
v___x_3580_ = lean_unsigned_to_nat(0u);
v_decide_3581_ = lean_nat_dec_eq(v___x_3579_, v___x_3580_);
if (v_decide_3581_ == 0)
{
lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3590_; uint32_t v___x_3591_; uint32_t v___x_3592_; uint8_t v___x_3593_; 
lean_inc(v_startInclusive_3577_);
lean_inc_ref(v_str_3576_);
v___x_3582_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3582_, 0, v_str_3576_);
lean_ctor_set(v___x_3582_, 1, v_startInclusive_3577_);
lean_ctor_set(v___x_3582_, 2, v___x_3578_);
v___x_3583_ = lean_unsigned_to_nat(1u);
v___x_3584_ = lean_nat_sub(v___x_3579_, v___x_3583_);
lean_dec(v___x_3579_);
v___x_3585_ = l_String_Slice_posLE(v___x_3582_, v___x_3584_);
lean_dec_ref_known(v___x_3582_, 3);
v___x_3590_ = lean_nat_add(v_startInclusive_3577_, v___x_3585_);
v___x_3591_ = lean_string_utf8_get_fast(v_str_3576_, v___x_3590_);
lean_dec(v___x_3590_);
v___x_3592_ = 32;
v___x_3593_ = lean_uint32_dec_eq(v___x_3591_, v___x_3592_);
if (v___x_3593_ == 0)
{
uint32_t v___x_3594_; uint8_t v___x_3595_; 
v___x_3594_ = 9;
v___x_3595_ = lean_uint32_dec_eq(v___x_3591_, v___x_3594_);
if (v___x_3595_ == 0)
{
uint32_t v___x_3596_; uint8_t v___x_3597_; 
v___x_3596_ = 13;
v___x_3597_ = lean_uint32_dec_eq(v___x_3591_, v___x_3596_);
if (v___x_3597_ == 0)
{
uint32_t v___x_3598_; uint8_t v___x_3599_; 
v___x_3598_ = 10;
v___x_3599_ = lean_uint32_dec_eq(v___x_3591_, v___x_3598_);
if (v___x_3599_ == 0)
{
lean_dec(v___x_3585_);
return v_pos_3575_;
}
else
{
goto v___jp_3586_;
}
}
else
{
goto v___jp_3586_;
}
}
else
{
goto v___jp_3586_;
}
}
else
{
goto v___jp_3586_;
}
v___jp_3586_:
{
lean_object* v___x_3587_; uint8_t v___x_3588_; 
v___x_3587_ = lean_nat_add(v___x_3585_, v___x_3583_);
v___x_3588_ = lean_nat_dec_le(v___x_3587_, v_pos_3575_);
lean_dec(v___x_3587_);
if (v___x_3588_ == 0)
{
lean_dec(v___x_3585_);
return v_pos_3575_;
}
else
{
lean_dec(v_pos_3575_);
v_pos_3575_ = v___x_3585_;
goto _start;
}
}
}
else
{
lean_dec(v___x_3579_);
lean_dec(v___x_3578_);
return v_pos_3575_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0___boxed(lean_object* v_s_3600_, lean_object* v_pos_3601_){
_start:
{
lean_object* v_res_3602_; 
v_res_3602_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v_s_3600_, v_pos_3601_);
lean_dec_ref(v_s_3600_);
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(lean_object* v_cfg_3615_, lean_object* v_hOut_3616_, lean_object* v_info_3617_, lean_object* v_code_x3f_3618_, lean_object* v_out_3619_, lean_object* v_line_3620_, lean_object* v_a_3621_){
_start:
{
lean_object* v_msg_3624_; lean_object* v___y_3625_; lean_object* v___y_3642_; lean_object* v___y_3643_; lean_object* v_a_3644_; lean_object* v___y_3650_; lean_object* v___y_3651_; lean_object* v___y_3652_; lean_object* v___y_3653_; lean_object* v_val_3654_; lean_object* v___y_3662_; lean_object* v___y_3663_; lean_object* v___y_3664_; uint8_t v_kind_3693_; lean_object* v_scope_3694_; lean_object* v_msg_3696_; lean_object* v___y_3697_; lean_object* v_msg_3740_; lean_object* v___y_3741_; lean_object* v___y_3751_; lean_object* v___y_3752_; lean_object* v___y_3769_; 
v_kind_3693_ = lean_ctor_get_uint8(v_cfg_3615_, sizeof(void*)*3);
v_scope_3694_ = lean_ctor_get(v_cfg_3615_, 0);
lean_inc_ref(v_scope_3694_);
lean_dec_ref(v_cfg_3615_);
if (v_kind_3693_ == 0)
{
lean_object* v___x_3771_; 
v___x_3771_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___y_3769_ = v___x_3771_;
goto v___jp_3768_;
}
else
{
lean_object* v___x_3772_; 
v___x_3772_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___y_3769_ = v___x_3772_;
goto v___jp_3768_;
}
v___jp_3623_:
{
uint8_t v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; uint8_t v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; 
v___x_3626_ = 3;
v___x_3627_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3627_, 0, v_msg_3624_);
lean_ctor_set_uint8(v___x_3627_, sizeof(void*)*1, v___x_3626_);
lean_inc_ref_n(v___y_3625_, 2);
v___x_3628_ = lean_apply_2(v___y_3625_, v___x_3627_, lean_box(0));
v___x_3629_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0));
v___x_3630_ = lean_unsigned_to_nat(0u);
v___x_3631_ = lean_string_utf8_byte_size(v_line_3620_);
lean_inc_ref(v_line_3620_);
v___x_3632_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3632_, 0, v_line_3620_);
lean_ctor_set(v___x_3632_, 1, v___x_3630_);
lean_ctor_set(v___x_3632_, 2, v___x_3631_);
v___x_3633_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_3632_, v___x_3631_);
lean_dec_ref_known(v___x_3632_, 3);
v___x_3634_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3634_, 0, v_line_3620_);
lean_ctor_set(v___x_3634_, 1, v___x_3630_);
lean_ctor_set(v___x_3634_, 2, v___x_3633_);
v___x_3635_ = l_String_Slice_toString(v___x_3634_);
lean_dec_ref_known(v___x_3634_, 3);
v___x_3636_ = lean_string_append(v___x_3629_, v___x_3635_);
lean_dec_ref(v___x_3635_);
v___x_3637_ = 0;
v___x_3638_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3638_, 0, v___x_3636_);
lean_ctor_set_uint8(v___x_3638_, sizeof(void*)*1, v___x_3637_);
v___x_3639_ = lean_apply_2(v___y_3625_, v___x_3638_, lean_box(0));
v___x_3640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3640_, 0, v___x_3639_);
return v___x_3640_;
}
v___jp_3641_:
{
if (lean_obj_tag(v_a_3644_) == 1)
{
lean_object* v_a_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v_a_3645_ = lean_ctor_get(v_a_3644_, 0);
lean_inc(v_a_3645_);
lean_dec_ref_known(v_a_3644_, 1);
v___x_3646_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_3647_ = lean_string_append(v___y_3643_, v___x_3646_);
v___x_3648_ = lean_string_append(v___x_3647_, v_a_3645_);
lean_dec(v_a_3645_);
v_msg_3624_ = v___x_3648_;
v___y_3625_ = v___y_3642_;
goto v___jp_3623_;
}
else
{
lean_dec_ref(v_a_3644_);
v_msg_3624_ = v___y_3643_;
v___y_3625_ = v___y_3642_;
goto v___jp_3623_;
}
}
v___jp_3649_:
{
lean_object* v___x_3655_; uint8_t v___x_3656_; 
v___x_3655_ = lean_array_get_size(v___y_3650_);
v___x_3656_ = lean_nat_dec_lt(v___y_3652_, v___x_3655_);
if (v___x_3656_ == 0)
{
v___y_3642_ = v___y_3651_;
v___y_3643_ = v___y_3653_;
v_a_3644_ = v_val_3654_;
goto v___jp_3641_;
}
else
{
lean_object* v___x_3657_; size_t v___x_3658_; size_t v___x_3659_; lean_object* v___x_3660_; 
v___x_3657_ = lean_box(0);
v___x_3658_ = ((size_t)0ULL);
v___x_3659_ = lean_usize_of_nat(v___x_3655_);
v___x_3660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_3650_, v___x_3658_, v___x_3659_, v___x_3657_, v___y_3651_);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_dec_ref_known(v___x_3660_, 1);
v___y_3642_ = v___y_3651_;
v___y_3643_ = v___y_3653_;
v_a_3644_ = v_val_3654_;
goto v___jp_3641_;
}
else
{
lean_dec_ref(v_val_3654_);
lean_dec_ref(v___y_3653_);
lean_dec_ref(v_line_3620_);
return v___x_3660_;
}
}
}
v___jp_3661_:
{
lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3665_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_3666_ = l_Lake_JsonObject_getJson_x3f(v_out_3619_, v___x_3665_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_dec_ref(v___y_3662_);
v_msg_3624_ = v___y_3664_;
v___y_3625_ = v___y_3663_;
goto v___jp_3623_;
}
else
{
lean_object* v_val_3667_; lean_object* v___x_3668_; 
v_val_3667_ = lean_ctor_get(v___x_3666_, 0);
lean_inc(v_val_3667_);
lean_dec_ref_known(v___x_3666_, 1);
v___x_3668_ = l_Lean_Json_getNat_x3f(v_val_3667_);
if (lean_obj_tag(v___x_3668_) == 0)
{
lean_dec_ref_known(v___x_3668_, 1);
lean_dec_ref(v___y_3662_);
v_msg_3624_ = v___y_3664_;
v___y_3625_ = v___y_3663_;
goto v___jp_3623_;
}
else
{
if (lean_obj_tag(v___x_3668_) == 1)
{
lean_object* v_a_3669_; lean_object* v___x_3670_; uint8_t v___x_3671_; 
v_a_3669_ = lean_ctor_get(v___x_3668_, 0);
lean_inc(v_a_3669_);
lean_dec_ref_known(v___x_3668_, 1);
v___x_3670_ = lean_unsigned_to_nat(0u);
v___x_3671_ = lean_nat_dec_lt(v___x_3670_, v_a_3669_);
lean_dec(v_a_3669_);
if (v___x_3671_ == 0)
{
lean_dec_ref(v___y_3662_);
v_msg_3624_ = v___y_3664_;
v___y_3625_ = v___y_3663_;
goto v___jp_3623_;
}
else
{
lean_object* v___x_3672_; lean_object* v___x_3673_; 
v___x_3672_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3));
v___x_3673_ = l_Lake_JsonObject_getJson_x3f(v_out_3619_, v___x_3672_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_dec_ref(v___y_3662_);
v_msg_3624_ = v___y_3664_;
v___y_3625_ = v___y_3663_;
goto v___jp_3623_;
}
else
{
lean_object* v_val_3674_; lean_object* v___x_3675_; 
v_val_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_val_3674_);
lean_dec_ref_known(v___x_3673_, 1);
v___x_3675_ = l_Lean_Json_getStr_x3f(v_val_3674_);
if (lean_obj_tag(v___x_3675_) == 0)
{
lean_dec_ref_known(v___x_3675_, 1);
lean_dec_ref(v___y_3662_);
v_msg_3624_ = v___y_3664_;
v___y_3625_ = v___y_3663_;
goto v___jp_3623_;
}
else
{
if (lean_obj_tag(v___x_3675_) == 1)
{
lean_object* v_a_3676_; lean_object* v___x_3678_; uint8_t v_isShared_3679_; uint8_t v_isSharedCheck_3692_; 
v_a_3676_ = lean_ctor_get(v___x_3675_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3678_ = v___x_3675_;
v_isShared_3679_ = v_isSharedCheck_3692_;
goto v_resetjp_3677_;
}
else
{
lean_inc(v_a_3676_);
lean_dec(v___x_3675_);
v___x_3678_ = lean_box(0);
v_isShared_3679_ = v_isSharedCheck_3692_;
goto v_resetjp_3677_;
}
v_resetjp_3677_:
{
lean_object* v___x_3680_; uint8_t v___x_3681_; 
v___x_3680_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_3681_ = lean_string_dec_eq(v_a_3676_, v___x_3680_);
lean_dec(v_a_3676_);
if (v___x_3681_ == 0)
{
lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3682_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3683_ = l_IO_FS_readFile(v___y_3662_);
lean_dec_ref(v___y_3662_);
if (lean_obj_tag(v___x_3683_) == 0)
{
lean_object* v_a_3684_; lean_object* v___x_3686_; 
v_a_3684_ = lean_ctor_get(v___x_3683_, 0);
lean_inc(v_a_3684_);
lean_dec_ref_known(v___x_3683_, 1);
if (v_isShared_3679_ == 0)
{
lean_ctor_set(v___x_3678_, 0, v_a_3684_);
v___x_3686_ = v___x_3678_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_a_3684_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
v___y_3650_ = v___x_3682_;
v___y_3651_ = v___y_3663_;
v___y_3652_ = v___x_3670_;
v___y_3653_ = v___y_3664_;
v_val_3654_ = v___x_3686_;
goto v___jp_3649_;
}
}
else
{
lean_object* v_a_3688_; lean_object* v___x_3690_; 
v_a_3688_ = lean_ctor_get(v___x_3683_, 0);
lean_inc(v_a_3688_);
lean_dec_ref_known(v___x_3683_, 1);
if (v_isShared_3679_ == 0)
{
lean_ctor_set_tag(v___x_3678_, 0);
lean_ctor_set(v___x_3678_, 0, v_a_3688_);
v___x_3690_ = v___x_3678_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_a_3688_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
v___y_3650_ = v___x_3682_;
v___y_3651_ = v___y_3663_;
v___y_3652_ = v___x_3670_;
v___y_3653_ = v___y_3664_;
v_val_3654_ = v___x_3690_;
goto v___jp_3649_;
}
}
}
else
{
lean_del_object(v___x_3678_);
lean_dec_ref(v___y_3662_);
v_msg_3624_ = v___y_3664_;
v___y_3625_ = v___y_3663_;
goto v___jp_3623_;
}
}
}
else
{
lean_dec_ref_known(v___x_3675_, 1);
lean_dec_ref(v___y_3662_);
v_msg_3624_ = v___y_3664_;
v___y_3625_ = v___y_3663_;
goto v___jp_3623_;
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_3668_, 1);
lean_dec_ref(v___y_3662_);
v_msg_3624_ = v___y_3664_;
v___y_3625_ = v___y_3663_;
goto v___jp_3623_;
}
}
}
}
v___jp_3695_:
{
lean_object* v_url_3698_; lean_object* v_path_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v_msg_3705_; 
v_url_3698_ = lean_ctor_get(v_info_3617_, 0);
lean_inc_ref(v_url_3698_);
v_path_3699_ = lean_ctor_get(v_info_3617_, 1);
lean_inc_ref(v_path_3699_);
lean_dec_ref(v_info_3617_);
v___x_3700_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3701_ = lean_string_append(v_msg_3696_, v___x_3700_);
v___x_3702_ = lean_string_append(v___x_3701_, v_path_3699_);
v___x_3703_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3704_ = lean_string_append(v___x_3702_, v___x_3703_);
v_msg_3705_ = lean_string_append(v___x_3704_, v_url_3698_);
lean_dec_ref(v_url_3698_);
if (v_kind_3693_ == 0)
{
lean_object* v___x_3706_; lean_object* v_tmpPath_3707_; 
v___x_3706_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
v_tmpPath_3707_ = l_System_FilePath_addExtension(v_path_3699_, v___x_3706_);
if (lean_obj_tag(v_code_x3f_3618_) == 1)
{
lean_object* v_a_3708_; lean_object* v___x_3709_; uint8_t v___x_3710_; 
v_a_3708_ = lean_ctor_get(v_code_x3f_3618_, 0);
lean_inc(v_a_3708_);
lean_dec_ref_known(v_code_x3f_3618_, 1);
v___x_3709_ = lean_unsigned_to_nat(404u);
v___x_3710_ = lean_nat_dec_eq(v_a_3708_, v___x_3709_);
lean_dec(v_a_3708_);
if (v___x_3710_ == 0)
{
v___y_3662_ = v_tmpPath_3707_;
v___y_3663_ = v___y_3697_;
v___y_3664_ = v_msg_3705_;
goto v___jp_3661_;
}
else
{
lean_dec_ref(v_tmpPath_3707_);
v_msg_3624_ = v_msg_3705_;
v___y_3625_ = v___y_3697_;
goto v___jp_3623_;
}
}
else
{
lean_dec_ref(v_code_x3f_3618_);
v___y_3662_ = v_tmpPath_3707_;
v___y_3663_ = v___y_3697_;
v___y_3664_ = v_msg_3705_;
goto v___jp_3661_;
}
}
else
{
lean_object* v___x_3711_; lean_object* v___x_3712_; 
lean_dec_ref(v_path_3699_);
lean_dec_ref(v_code_x3f_3618_);
v___x_3711_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_3712_ = l_Lake_JsonObject_getJson_x3f(v_out_3619_, v___x_3711_);
if (lean_obj_tag(v___x_3712_) == 0)
{
v_msg_3624_ = v_msg_3705_;
v___y_3625_ = v___y_3697_;
goto v___jp_3623_;
}
else
{
lean_object* v_val_3713_; lean_object* v___x_3714_; 
v_val_3713_ = lean_ctor_get(v___x_3712_, 0);
lean_inc(v_val_3713_);
lean_dec_ref_known(v___x_3712_, 1);
v___x_3714_ = l_Lean_Json_getNat_x3f(v_val_3713_);
if (lean_obj_tag(v___x_3714_) == 0)
{
lean_dec_ref_known(v___x_3714_, 1);
v_msg_3624_ = v_msg_3705_;
v___y_3625_ = v___y_3697_;
goto v___jp_3623_;
}
else
{
if (lean_obj_tag(v___x_3714_) == 1)
{
lean_object* v_a_3715_; lean_object* v___x_3716_; uint8_t v___x_3717_; 
v_a_3715_ = lean_ctor_get(v___x_3714_, 0);
lean_inc(v_a_3715_);
lean_dec_ref_known(v___x_3714_, 1);
v___x_3716_ = lean_unsigned_to_nat(0u);
v___x_3717_ = lean_nat_dec_lt(v___x_3716_, v_a_3715_);
if (v___x_3717_ == 0)
{
lean_dec(v_a_3715_);
v_msg_3624_ = v_msg_3705_;
v___y_3625_ = v___y_3697_;
goto v___jp_3623_;
}
else
{
size_t v___x_3718_; lean_object* v___x_3719_; 
v___x_3718_ = lean_usize_of_nat(v_a_3715_);
lean_dec(v_a_3715_);
v___x_3719_ = lean_io_prim_handle_read(v_hOut_3616_, v___x_3718_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; uint8_t v___x_3721_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
lean_dec_ref_known(v___x_3719_, 1);
v___x_3721_ = lean_string_validate_utf8(v_a_3720_);
if (v___x_3721_ == 0)
{
lean_dec(v_a_3720_);
v_msg_3624_ = v_msg_3705_;
v___y_3625_ = v___y_3697_;
goto v___jp_3623_;
}
else
{
lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3722_ = lean_string_from_utf8_unchecked(v_a_3720_);
v___x_3723_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_3724_ = lean_string_append(v_msg_3705_, v___x_3723_);
v___x_3725_ = lean_string_append(v___x_3724_, v___x_3722_);
lean_dec_ref(v___x_3722_);
v_msg_3624_ = v___x_3725_;
v___y_3625_ = v___y_3697_;
goto v___jp_3623_;
}
}
else
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3738_; 
lean_dec_ref(v_msg_3705_);
lean_dec_ref(v_line_3620_);
v_a_3726_ = lean_ctor_get(v___x_3719_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3719_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3728_ = v___x_3719_;
v_isShared_3729_ = v_isSharedCheck_3738_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3719_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3738_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3730_; uint8_t v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3736_; 
v___x_3730_ = lean_io_error_to_string(v_a_3726_);
v___x_3731_ = 3;
v___x_3732_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3732_, 0, v___x_3730_);
lean_ctor_set_uint8(v___x_3732_, sizeof(void*)*1, v___x_3731_);
lean_inc_ref(v___y_3697_);
v___x_3733_ = lean_apply_2(v___y_3697_, v___x_3732_, lean_box(0));
v___x_3734_ = lean_box(0);
if (v_isShared_3729_ == 0)
{
lean_ctor_set(v___x_3728_, 0, v___x_3734_);
v___x_3736_ = v___x_3728_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(1, 1, 0);
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
lean_dec_ref_known(v___x_3714_, 1);
v_msg_3624_ = v_msg_3705_;
v___y_3625_ = v___y_3697_;
goto v___jp_3623_;
}
}
}
}
}
v___jp_3739_:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; 
v___x_3742_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4));
v___x_3743_ = l_Lake_JsonObject_getJson_x3f(v_out_3619_, v___x_3742_);
if (lean_obj_tag(v___x_3743_) == 0)
{
v_msg_3696_ = v_msg_3740_;
v___y_3697_ = v___y_3741_;
goto v___jp_3695_;
}
else
{
lean_object* v_val_3744_; lean_object* v___x_3745_; 
v_val_3744_ = lean_ctor_get(v___x_3743_, 0);
lean_inc(v_val_3744_);
lean_dec_ref_known(v___x_3743_, 1);
v___x_3745_ = l_Lean_Json_getStr_x3f(v_val_3744_);
if (lean_obj_tag(v___x_3745_) == 0)
{
lean_dec_ref_known(v___x_3745_, 1);
v_msg_3696_ = v_msg_3740_;
v___y_3697_ = v___y_3741_;
goto v___jp_3695_;
}
else
{
if (lean_obj_tag(v___x_3745_) == 1)
{
lean_object* v_a_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v_msg_3749_; 
v_a_3746_ = lean_ctor_get(v___x_3745_, 0);
lean_inc(v_a_3746_);
lean_dec_ref_known(v___x_3745_, 1);
v___x_3747_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5));
v___x_3748_ = lean_string_append(v_msg_3740_, v___x_3747_);
v_msg_3749_ = lean_string_append(v___x_3748_, v_a_3746_);
lean_dec(v_a_3746_);
v_msg_3696_ = v_msg_3749_;
v___y_3697_ = v___y_3741_;
goto v___jp_3695_;
}
else
{
lean_dec_ref_known(v___x_3745_, 1);
v_msg_3696_ = v_msg_3740_;
v___y_3697_ = v___y_3741_;
goto v___jp_3695_;
}
}
}
}
v___jp_3750_:
{
uint64_t v_hash_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v_msg_3760_; 
v_hash_3753_ = lean_ctor_get_uint64(v_info_3617_, sizeof(void*)*3);
v___x_3754_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_3755_ = lean_string_append(v___y_3752_, v___x_3754_);
v___x_3756_ = lean_string_append(v___x_3755_, v___y_3751_);
v___x_3757_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7));
v___x_3758_ = lean_string_append(v___x_3756_, v___x_3757_);
v___x_3759_ = l_Lake_lowerHexUInt64(v_hash_3753_);
v_msg_3760_ = lean_string_append(v___x_3758_, v___x_3759_);
lean_dec_ref(v___x_3759_);
if (lean_obj_tag(v_code_x3f_3618_) == 1)
{
lean_object* v_a_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v_msg_3767_; 
v_a_3761_ = lean_ctor_get(v_code_x3f_3618_, 0);
v___x_3762_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8));
v___x_3763_ = lean_string_append(v_msg_3760_, v___x_3762_);
lean_inc(v_a_3761_);
v___x_3764_ = l_Nat_reprFast(v_a_3761_);
v___x_3765_ = lean_string_append(v___x_3763_, v___x_3764_);
lean_dec_ref(v___x_3764_);
v___x_3766_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9));
v_msg_3767_ = lean_string_append(v___x_3765_, v___x_3766_);
v_msg_3740_ = v_msg_3767_;
v___y_3741_ = v_a_3621_;
goto v___jp_3739_;
}
else
{
v_msg_3740_ = v_msg_3760_;
v___y_3741_ = v_a_3621_;
goto v___jp_3739_;
}
}
v___jp_3768_:
{
lean_object* v_s_3770_; 
v_s_3770_ = lean_ctor_get(v_scope_3694_, 0);
lean_inc_ref(v_s_3770_);
lean_dec_ref(v_scope_3694_);
v___y_3751_ = v___y_3769_;
v___y_3752_ = v_s_3770_;
goto v___jp_3750_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___boxed(lean_object* v_cfg_3773_, lean_object* v_hOut_3774_, lean_object* v_info_3775_, lean_object* v_code_x3f_3776_, lean_object* v_out_3777_, lean_object* v_line_3778_, lean_object* v_a_3779_, lean_object* v___y_3780_){
_start:
{
lean_object* v_res_3781_; 
v_res_3781_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3773_, v_hOut_3774_, v_info_3775_, v_code_x3f_3776_, v_out_3777_, v_line_3778_, v_a_3779_);
lean_dec_ref(v_a_3779_);
lean_dec(v_out_3777_);
lean_dec(v_hOut_3774_);
return v_res_3781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0(uint64_t v___x_3783_, uint64_t v_hash_3784_, lean_object* v_a_3785_, lean_object* v_as_3786_, size_t v_sz_3787_, size_t v_i_3788_, lean_object* v_b_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_){
_start:
{
lean_object* v_a_3794_; lean_object* v_snd_3795_; uint8_t v___x_3799_; 
v___x_3799_ = lean_usize_dec_lt(v_i_3788_, v_sz_3787_);
if (v___x_3799_ == 0)
{
lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3800_, 0, v_b_3789_);
lean_ctor_set(v___x_3800_, 1, v___y_3790_);
v___x_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3800_);
return v___x_3801_;
}
else
{
uint8_t v___x_3802_; lean_object* v___x_3803_; lean_object* v_a_3804_; lean_object* v_fst_3806_; lean_object* v_snd_3807_; lean_object* v___x_3824_; lean_object* v_val_3826_; lean_object* v___x_3839_; 
v___x_3802_ = lean_uint64_dec_eq(v___x_3783_, v_hash_3784_);
v___x_3803_ = lean_box(0);
v_a_3804_ = lean_array_uget_borrowed(v_as_3786_, v_i_3788_);
v___x_3824_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3839_ = l_IO_FS_writeBinFile(v_a_3804_, v_a_3785_);
if (lean_obj_tag(v___x_3839_) == 0)
{
lean_object* v_a_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3847_; 
v_a_3840_ = lean_ctor_get(v___x_3839_, 0);
v_isSharedCheck_3847_ = !lean_is_exclusive(v___x_3839_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3842_ = v___x_3839_;
v_isShared_3843_ = v_isSharedCheck_3847_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_a_3840_);
lean_dec(v___x_3839_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3847_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v___x_3845_; 
if (v_isShared_3843_ == 0)
{
lean_ctor_set_tag(v___x_3842_, 1);
v___x_3845_ = v___x_3842_;
goto v_reusejp_3844_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v_a_3840_);
v___x_3845_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3844_;
}
v_reusejp_3844_:
{
v_val_3826_ = v___x_3845_;
goto v___jp_3825_;
}
}
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
v_a_3848_ = lean_ctor_get(v___x_3839_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3839_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3839_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3839_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
lean_ctor_set_tag(v___x_3850_, 0);
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
v_val_3826_ = v___x_3853_;
goto v___jp_3825_;
}
}
}
v___jp_3805_:
{
if (lean_obj_tag(v_fst_3806_) == 0)
{
lean_object* v_a_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; uint8_t v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v_numSuccesses_3816_; lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3823_; 
v_a_3808_ = lean_ctor_get(v_fst_3806_, 0);
lean_inc(v_a_3808_);
lean_dec_ref_known(v_fst_3806_, 1);
v___x_3809_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0___closed__0));
lean_inc(v_a_3804_);
v___x_3810_ = lean_string_append(v_a_3804_, v___x_3809_);
v___x_3811_ = lean_io_error_to_string(v_a_3808_);
v___x_3812_ = lean_string_append(v___x_3810_, v___x_3811_);
lean_dec_ref(v___x_3811_);
v___x_3813_ = 3;
v___x_3814_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3814_, 0, v___x_3812_);
lean_ctor_set_uint8(v___x_3814_, sizeof(void*)*1, v___x_3813_);
lean_inc_ref(v___y_3791_);
v___x_3815_ = lean_apply_2(v___y_3791_, v___x_3814_, lean_box(0));
v_numSuccesses_3816_ = lean_ctor_get(v_snd_3807_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v_snd_3807_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3818_ = v_snd_3807_;
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
else
{
lean_inc(v_numSuccesses_3816_);
lean_dec(v_snd_3807_);
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
v_reuseFailAlloc_3822_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_numSuccesses_3816_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
lean_ctor_set_uint8(v___x_3821_, sizeof(void*)*1, v___x_3802_);
v_a_3794_ = v___x_3803_;
v_snd_3795_ = v___x_3821_;
goto v___jp_3793_;
}
}
}
else
{
lean_dec_ref(v_fst_3806_);
v_a_3794_ = v___x_3803_;
v_snd_3795_ = v_snd_3807_;
goto v___jp_3793_;
}
}
v___jp_3825_:
{
uint8_t v___x_3827_; 
v___x_3827_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_3827_ == 0)
{
v_fst_3806_ = v_val_3826_;
v_snd_3807_ = v___y_3790_;
goto v___jp_3805_;
}
else
{
size_t v___x_3828_; size_t v___x_3829_; lean_object* v___x_3830_; 
v___x_3828_ = ((size_t)0ULL);
v___x_3829_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_3830_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_3824_, v___x_3828_, v___x_3829_, v___x_3803_, v___y_3791_);
if (lean_obj_tag(v___x_3830_) == 0)
{
lean_dec_ref_known(v___x_3830_, 1);
v_fst_3806_ = v_val_3826_;
v_snd_3807_ = v___y_3790_;
goto v___jp_3805_;
}
else
{
lean_object* v_a_3831_; lean_object* v___x_3833_; uint8_t v_isShared_3834_; uint8_t v_isSharedCheck_3838_; 
lean_dec_ref(v_val_3826_);
lean_dec_ref(v___y_3790_);
v_a_3831_ = lean_ctor_get(v___x_3830_, 0);
v_isSharedCheck_3838_ = !lean_is_exclusive(v___x_3830_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3833_ = v___x_3830_;
v_isShared_3834_ = v_isSharedCheck_3838_;
goto v_resetjp_3832_;
}
else
{
lean_inc(v_a_3831_);
lean_dec(v___x_3830_);
v___x_3833_ = lean_box(0);
v_isShared_3834_ = v_isSharedCheck_3838_;
goto v_resetjp_3832_;
}
v_resetjp_3832_:
{
lean_object* v___x_3836_; 
if (v_isShared_3834_ == 0)
{
v___x_3836_ = v___x_3833_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v_a_3831_);
v___x_3836_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
return v___x_3836_;
}
}
}
}
}
}
v___jp_3793_:
{
size_t v___x_3796_; size_t v___x_3797_; 
v___x_3796_ = ((size_t)1ULL);
v___x_3797_ = lean_usize_add(v_i_3788_, v___x_3796_);
v_i_3788_ = v___x_3797_;
v_b_3789_ = v_a_3794_;
v___y_3790_ = v_snd_3795_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0___boxed(lean_object* v___x_3856_, lean_object* v_hash_3857_, lean_object* v_a_3858_, lean_object* v_as_3859_, lean_object* v_sz_3860_, lean_object* v_i_3861_, lean_object* v_b_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_){
_start:
{
uint64_t v___x_20615__boxed_3866_; uint64_t v_hash_20616__boxed_3867_; size_t v_sz_boxed_3868_; size_t v_i_boxed_3869_; lean_object* v_res_3870_; 
v___x_20615__boxed_3866_ = lean_unbox_uint64(v___x_3856_);
lean_dec_ref(v___x_3856_);
v_hash_20616__boxed_3867_ = lean_unbox_uint64(v_hash_3857_);
lean_dec_ref(v_hash_3857_);
v_sz_boxed_3868_ = lean_unbox_usize(v_sz_3860_);
lean_dec(v_sz_3860_);
v_i_boxed_3869_ = lean_unbox_usize(v_i_3861_);
lean_dec(v_i_3861_);
v_res_3870_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0(v___x_20615__boxed_3866_, v_hash_20616__boxed_3867_, v_a_3858_, v_as_3859_, v_sz_boxed_3868_, v_i_boxed_3869_, v_b_3862_, v___y_3863_, v___y_3864_);
lean_dec_ref(v___y_3864_);
lean_dec_ref(v_as_3859_);
lean_dec_ref(v_a_3858_);
return v_res_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(lean_object* v_cfg_3875_, lean_object* v_hOut_3876_, lean_object* v_info_3877_, lean_object* v_code_3878_, lean_object* v_out_3879_, lean_object* v_line_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
lean_object* v___y_3885_; lean_object* v_url_3900_; uint64_t v_hash_3901_; lean_object* v_path_3902_; lean_object* v_extraPaths_3903_; uint8_t v___y_3905_; lean_object* v___y_3906_; uint64_t v___y_3907_; lean_object* v_fst_3908_; lean_object* v_snd_3909_; uint8_t v___y_3945_; lean_object* v___y_3946_; lean_object* v___y_3947_; lean_object* v___y_3948_; lean_object* v___y_3949_; uint64_t v___y_3950_; lean_object* v_val_3951_; lean_object* v___y_3967_; lean_object* v___y_3968_; lean_object* v_fst_3969_; lean_object* v_snd_3970_; lean_object* v___y_4068_; lean_object* v___y_4069_; lean_object* v___y_4070_; lean_object* v___y_4071_; lean_object* v_val_4072_; lean_object* v___y_4088_; lean_object* v___y_4117_; uint8_t v_kind_4151_; 
v_url_3900_ = lean_ctor_get(v_info_3877_, 0);
v_hash_3901_ = lean_ctor_get_uint64(v_info_3877_, sizeof(void*)*3);
v_path_3902_ = lean_ctor_get(v_info_3877_, 1);
v_extraPaths_3903_ = lean_ctor_get(v_info_3877_, 2);
v_kind_4151_ = lean_ctor_get_uint8(v_cfg_3875_, sizeof(void*)*3);
if (v_kind_4151_ == 0)
{
lean_object* v_scope_4152_; lean_object* v_s_4153_; 
v_scope_4152_ = lean_ctor_get(v_cfg_3875_, 0);
v_s_4153_ = lean_ctor_get(v_scope_4152_, 0);
lean_inc_ref(v_s_4153_);
v___y_4117_ = v_s_4153_;
goto v___jp_4116_;
}
else
{
lean_object* v_scope_4154_; lean_object* v_s_4155_; 
lean_inc_ref(v_path_3902_);
lean_inc_ref(v_url_3900_);
lean_dec_ref(v_line_3880_);
lean_dec(v_code_3878_);
lean_dec_ref(v_info_3877_);
v_scope_4154_ = lean_ctor_get(v_cfg_3875_, 0);
lean_inc_ref(v_scope_4154_);
lean_dec_ref(v_cfg_3875_);
v_s_4155_ = lean_ctor_get(v_scope_4154_, 0);
lean_inc_ref(v_s_4155_);
lean_dec_ref(v_scope_4154_);
v___y_4088_ = v_s_4155_;
goto v___jp_4087_;
}
v___jp_3884_:
{
uint8_t v_didError_3886_; lean_object* v_numSuccesses_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3899_; 
v_didError_3886_ = lean_ctor_get_uint8(v___y_3885_, sizeof(void*)*1);
v_numSuccesses_3887_ = lean_ctor_get(v___y_3885_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v___y_3885_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3889_ = v___y_3885_;
v_isShared_3890_ = v_isSharedCheck_3899_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_numSuccesses_3887_);
lean_dec(v___y_3885_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3899_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3895_; 
v___x_3891_ = lean_box(0);
v___x_3892_ = lean_unsigned_to_nat(1u);
v___x_3893_ = lean_nat_add(v_numSuccesses_3887_, v___x_3892_);
lean_dec(v_numSuccesses_3887_);
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 0, v___x_3893_);
v___x_3895_ = v___x_3889_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v___x_3893_);
lean_ctor_set_uint8(v_reuseFailAlloc_3898_, sizeof(void*)*1, v_didError_3886_);
v___x_3895_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
lean_object* v___x_3896_; lean_object* v___x_3897_; 
v___x_3896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3891_);
lean_ctor_set(v___x_3896_, 1, v___x_3895_);
v___x_3897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3897_, 0, v___x_3896_);
return v___x_3897_;
}
}
}
v___jp_3904_:
{
if (lean_obj_tag(v_fst_3908_) == 0)
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3934_; 
lean_dec_ref(v___y_3906_);
lean_dec_ref(v_extraPaths_3903_);
v_a_3910_ = lean_ctor_get(v_fst_3908_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v_fst_3908_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3912_ = v_fst_3908_;
v_isShared_3913_ = v_isSharedCheck_3934_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v_fst_3908_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3934_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; uint8_t v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v_numSuccesses_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3933_; 
v___x_3914_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__0));
v___x_3915_ = lean_string_append(v_path_3902_, v___x_3914_);
v___x_3916_ = lean_io_error_to_string(v_a_3910_);
v___x_3917_ = lean_string_append(v___x_3915_, v___x_3916_);
lean_dec_ref(v___x_3916_);
v___x_3918_ = 3;
v___x_3919_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3919_, 0, v___x_3917_);
lean_ctor_set_uint8(v___x_3919_, sizeof(void*)*1, v___x_3918_);
lean_inc_ref(v___y_3882_);
v___x_3920_ = lean_apply_2(v___y_3882_, v___x_3919_, lean_box(0));
v_numSuccesses_3921_ = lean_ctor_get(v_snd_3909_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v_snd_3909_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3923_ = v_snd_3909_;
v_isShared_3924_ = v_isSharedCheck_3933_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_numSuccesses_3921_);
lean_dec(v_snd_3909_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3933_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3925_; lean_object* v___x_3927_; 
v___x_3925_ = lean_box(0);
if (v_isShared_3924_ == 0)
{
v___x_3927_ = v___x_3923_;
goto v_reusejp_3926_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v_numSuccesses_3921_);
v___x_3927_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3926_;
}
v_reusejp_3926_:
{
lean_object* v___x_3928_; lean_object* v___x_3930_; 
lean_ctor_set_uint8(v___x_3927_, sizeof(void*)*1, v___y_3905_);
v___x_3928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3928_, 0, v___x_3925_);
lean_ctor_set(v___x_3928_, 1, v___x_3927_);
if (v_isShared_3913_ == 0)
{
lean_ctor_set(v___x_3912_, 0, v___x_3928_);
v___x_3930_ = v___x_3912_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v___x_3928_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
}
}
}
}
}
else
{
lean_object* v___x_3935_; lean_object* v___x_3936_; uint8_t v___x_3937_; 
lean_dec_ref(v_fst_3908_);
lean_dec_ref(v_path_3902_);
v___x_3935_ = lean_array_get_size(v_extraPaths_3903_);
v___x_3936_ = lean_unsigned_to_nat(0u);
v___x_3937_ = lean_nat_dec_eq(v___x_3935_, v___x_3936_);
if (v___x_3937_ == 0)
{
lean_object* v___x_3938_; size_t v_sz_3939_; size_t v___x_3940_; lean_object* v___x_3941_; 
v___x_3938_ = lean_box(0);
v_sz_3939_ = lean_array_size(v_extraPaths_3903_);
v___x_3940_ = ((size_t)0ULL);
v___x_3941_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0(v___y_3907_, v_hash_3901_, v___y_3906_, v_extraPaths_3903_, v_sz_3939_, v___x_3940_, v___x_3938_, v_snd_3909_, v___y_3882_);
lean_dec_ref(v_extraPaths_3903_);
lean_dec_ref(v___y_3906_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; lean_object* v_snd_3943_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
lean_inc(v_a_3942_);
lean_dec_ref_known(v___x_3941_, 1);
v_snd_3943_ = lean_ctor_get(v_a_3942_, 1);
lean_inc(v_snd_3943_);
lean_dec(v_a_3942_);
v___y_3885_ = v_snd_3943_;
goto v___jp_3884_;
}
else
{
return v___x_3941_;
}
}
else
{
lean_dec_ref(v___y_3906_);
lean_dec_ref(v_extraPaths_3903_);
v___y_3885_ = v_snd_3909_;
goto v___jp_3884_;
}
}
}
v___jp_3944_:
{
lean_object* v___x_3952_; uint8_t v___x_3953_; 
v___x_3952_ = lean_array_get_size(v___y_3946_);
v___x_3953_ = lean_nat_dec_lt(v___y_3947_, v___x_3952_);
if (v___x_3953_ == 0)
{
v___y_3905_ = v___y_3945_;
v___y_3906_ = v___y_3948_;
v___y_3907_ = v___y_3950_;
v_fst_3908_ = v_val_3951_;
v_snd_3909_ = v___y_3949_;
goto v___jp_3904_;
}
else
{
lean_object* v___x_3954_; size_t v___x_3955_; size_t v___x_3956_; lean_object* v___x_3957_; 
v___x_3954_ = lean_box(0);
v___x_3955_ = ((size_t)0ULL);
v___x_3956_ = lean_usize_of_nat(v___x_3952_);
v___x_3957_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_3946_, v___x_3955_, v___x_3956_, v___x_3954_, v___y_3882_);
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_dec_ref_known(v___x_3957_, 1);
v___y_3905_ = v___y_3945_;
v___y_3906_ = v___y_3948_;
v___y_3907_ = v___y_3950_;
v_fst_3908_ = v_val_3951_;
v_snd_3909_ = v___y_3949_;
goto v___jp_3904_;
}
else
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3965_; 
lean_dec_ref(v_val_3951_);
lean_dec_ref(v___y_3949_);
lean_dec_ref(v___y_3948_);
lean_dec_ref(v_extraPaths_3903_);
lean_dec_ref(v_path_3902_);
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3965_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3965_ == 0)
{
v___x_3960_ = v___x_3957_;
v_isShared_3961_ = v_isSharedCheck_3965_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v___x_3957_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3965_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3963_; 
if (v_isShared_3961_ == 0)
{
v___x_3963_ = v___x_3960_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3964_; 
v_reuseFailAlloc_3964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3964_, 0, v_a_3958_);
v___x_3963_ = v_reuseFailAlloc_3964_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
return v___x_3963_;
}
}
}
}
}
v___jp_3966_:
{
if (lean_obj_tag(v_fst_3969_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_4026_; 
v_a_3971_ = lean_ctor_get(v_fst_3969_, 0);
v_isSharedCheck_4026_ = !lean_is_exclusive(v_fst_3969_);
if (v_isSharedCheck_4026_ == 0)
{
v___x_3973_ = v_fst_3969_;
v_isShared_3974_ = v_isSharedCheck_4026_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v_fst_3969_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_4026_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
if (lean_obj_tag(v_a_3971_) == 11)
{
lean_object* v___x_3976_; 
lean_dec_ref_known(v_a_3971_, 2);
lean_dec_ref(v___y_3968_);
lean_dec_ref(v___y_3967_);
if (v_isShared_3974_ == 0)
{
lean_ctor_set_tag(v___x_3973_, 1);
lean_ctor_set(v___x_3973_, 0, v_code_3878_);
v___x_3976_ = v___x_3973_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_4005_; 
v_reuseFailAlloc_4005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4005_, 0, v_code_3878_);
v___x_3976_ = v_reuseFailAlloc_4005_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
lean_object* v___x_3977_; 
v___x_3977_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3875_, v_hOut_3876_, v_info_3877_, v___x_3976_, v_out_3879_, v_line_3880_, v___y_3882_);
if (lean_obj_tag(v___x_3977_) == 0)
{
lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3995_; 
v_isSharedCheck_3995_ = !lean_is_exclusive(v___x_3977_);
if (v_isSharedCheck_3995_ == 0)
{
lean_object* v_unused_3996_; 
v_unused_3996_ = lean_ctor_get(v___x_3977_, 0);
lean_dec(v_unused_3996_);
v___x_3979_ = v___x_3977_;
v_isShared_3980_ = v_isSharedCheck_3995_;
goto v_resetjp_3978_;
}
else
{
lean_dec(v___x_3977_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3995_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v_numSuccesses_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3994_; 
v_numSuccesses_3981_ = lean_ctor_get(v_snd_3970_, 0);
v_isSharedCheck_3994_ = !lean_is_exclusive(v_snd_3970_);
if (v_isSharedCheck_3994_ == 0)
{
v___x_3983_ = v_snd_3970_;
v_isShared_3984_ = v_isSharedCheck_3994_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_numSuccesses_3981_);
lean_dec(v_snd_3970_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3994_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3985_; uint8_t v___x_3986_; lean_object* v___x_3988_; 
v___x_3985_ = lean_box(0);
v___x_3986_ = 1;
if (v_isShared_3984_ == 0)
{
v___x_3988_ = v___x_3983_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v_numSuccesses_3981_);
v___x_3988_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
lean_object* v___x_3989_; lean_object* v___x_3991_; 
lean_ctor_set_uint8(v___x_3988_, sizeof(void*)*1, v___x_3986_);
v___x_3989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3989_, 0, v___x_3985_);
lean_ctor_set(v___x_3989_, 1, v___x_3988_);
if (v_isShared_3980_ == 0)
{
lean_ctor_set(v___x_3979_, 0, v___x_3989_);
v___x_3991_ = v___x_3979_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v___x_3989_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
}
}
else
{
lean_object* v_a_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4004_; 
lean_dec_ref(v_snd_3970_);
v_a_3997_ = lean_ctor_get(v___x_3977_, 0);
v_isSharedCheck_4004_ = !lean_is_exclusive(v___x_3977_);
if (v_isSharedCheck_4004_ == 0)
{
v___x_3999_ = v___x_3977_;
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_a_3997_);
lean_dec(v___x_3977_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
lean_object* v___x_4002_; 
if (v_isShared_4000_ == 0)
{
v___x_4002_ = v___x_3999_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4003_; 
v_reuseFailAlloc_4003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4003_, 0, v_a_3997_);
v___x_4002_ = v_reuseFailAlloc_4003_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
return v___x_4002_;
}
}
}
}
}
else
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; uint8_t v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v_numSuccesses_4014_; lean_object* v___x_4016_; uint8_t v_isShared_4017_; uint8_t v_isSharedCheck_4025_; 
lean_del_object(v___x_3973_);
lean_dec_ref(v_line_3880_);
lean_dec(v_code_3878_);
lean_dec_ref(v_info_3877_);
lean_dec_ref(v_cfg_3875_);
lean_inc_ref_n(v___y_3882_, 2);
v___x_4006_ = lean_apply_2(v___y_3882_, v___y_3968_, lean_box(0));
v___x_4007_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__1));
v___x_4008_ = lean_string_append(v___y_3967_, v___x_4007_);
v___x_4009_ = lean_io_error_to_string(v_a_3971_);
v___x_4010_ = lean_string_append(v___x_4008_, v___x_4009_);
lean_dec_ref(v___x_4009_);
v___x_4011_ = 3;
v___x_4012_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4012_, 0, v___x_4010_);
lean_ctor_set_uint8(v___x_4012_, sizeof(void*)*1, v___x_4011_);
v___x_4013_ = lean_apply_2(v___y_3882_, v___x_4012_, lean_box(0));
v_numSuccesses_4014_ = lean_ctor_get(v_snd_3970_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v_snd_3970_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4016_ = v_snd_3970_;
v_isShared_4017_ = v_isSharedCheck_4025_;
goto v_resetjp_4015_;
}
else
{
lean_inc(v_numSuccesses_4014_);
lean_dec(v_snd_3970_);
v___x_4016_ = lean_box(0);
v_isShared_4017_ = v_isSharedCheck_4025_;
goto v_resetjp_4015_;
}
v_resetjp_4015_:
{
lean_object* v___x_4018_; uint8_t v___x_4019_; lean_object* v___x_4021_; 
v___x_4018_ = lean_box(0);
v___x_4019_ = 1;
if (v_isShared_4017_ == 0)
{
v___x_4021_ = v___x_4016_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_numSuccesses_4014_);
v___x_4021_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; 
lean_ctor_set_uint8(v___x_4021_, sizeof(void*)*1, v___x_4019_);
v___x_4022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4022_, 0, v___x_4018_);
lean_ctor_set(v___x_4022_, 1, v___x_4021_);
v___x_4023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4023_, 0, v___x_4022_);
return v___x_4023_;
}
}
}
}
}
else
{
lean_object* v_a_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4066_; 
lean_inc_ref(v_extraPaths_3903_);
lean_inc_ref(v_path_3902_);
lean_dec_ref(v_line_3880_);
lean_dec(v_code_3878_);
lean_dec_ref(v_info_3877_);
lean_dec_ref(v_cfg_3875_);
v_a_4027_ = lean_ctor_get(v_fst_3969_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v_fst_3969_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4029_ = v_fst_3969_;
v_isShared_4030_ = v_isSharedCheck_4066_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_a_4027_);
lean_dec(v_fst_3969_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4066_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4031_; uint64_t v___x_4032_; uint64_t v___x_4033_; uint64_t v___x_4034_; uint8_t v___x_4035_; 
lean_inc_ref(v___y_3882_);
v___x_4031_ = lean_apply_2(v___y_3882_, v___y_3968_, lean_box(0));
v___x_4032_ = l_Lake_Hash_nil;
v___x_4033_ = lean_byte_array_hash(v_a_4027_);
v___x_4034_ = lean_uint64_mix_hash(v___x_4032_, v___x_4033_);
v___x_4035_ = lean_uint64_dec_eq(v___x_4034_, v_hash_3901_);
if (v___x_4035_ == 0)
{
uint8_t v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; uint8_t v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v_numSuccesses_4044_; lean_object* v___x_4046_; uint8_t v_isShared_4047_; uint8_t v_isSharedCheck_4054_; 
lean_del_object(v___x_4029_);
lean_dec(v_a_4027_);
lean_dec_ref(v_extraPaths_3903_);
lean_dec_ref(v_path_3902_);
v___x_4036_ = 1;
v___x_4037_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__1));
v___x_4038_ = lean_string_append(v___y_3967_, v___x_4037_);
v___x_4039_ = l_Lake_lowerHexUInt64(v___x_4034_);
v___x_4040_ = lean_string_append(v___x_4038_, v___x_4039_);
lean_dec_ref(v___x_4039_);
v___x_4041_ = 3;
v___x_4042_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4042_, 0, v___x_4040_);
lean_ctor_set_uint8(v___x_4042_, sizeof(void*)*1, v___x_4041_);
lean_inc_ref(v___y_3882_);
v___x_4043_ = lean_apply_2(v___y_3882_, v___x_4042_, lean_box(0));
v_numSuccesses_4044_ = lean_ctor_get(v_snd_3970_, 0);
v_isSharedCheck_4054_ = !lean_is_exclusive(v_snd_3970_);
if (v_isSharedCheck_4054_ == 0)
{
v___x_4046_ = v_snd_3970_;
v_isShared_4047_ = v_isSharedCheck_4054_;
goto v_resetjp_4045_;
}
else
{
lean_inc(v_numSuccesses_4044_);
lean_dec(v_snd_3970_);
v___x_4046_ = lean_box(0);
v_isShared_4047_ = v_isSharedCheck_4054_;
goto v_resetjp_4045_;
}
v_resetjp_4045_:
{
lean_object* v___x_4048_; lean_object* v___x_4050_; 
v___x_4048_ = lean_box(0);
if (v_isShared_4047_ == 0)
{
v___x_4050_ = v___x_4046_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4053_; 
v_reuseFailAlloc_4053_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4053_, 0, v_numSuccesses_4044_);
v___x_4050_ = v_reuseFailAlloc_4053_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
lean_object* v___x_4051_; lean_object* v___x_4052_; 
lean_ctor_set_uint8(v___x_4050_, sizeof(void*)*1, v___x_4036_);
v___x_4051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4051_, 0, v___x_4048_);
lean_ctor_set(v___x_4051_, 1, v___x_4050_);
v___x_4052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4052_, 0, v___x_4051_);
return v___x_4052_;
}
}
}
else
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; 
v___x_4055_ = lean_unsigned_to_nat(0u);
v___x_4056_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_4057_ = lean_io_rename(v___y_3967_, v_path_3902_);
lean_dec_ref(v___y_3967_);
if (lean_obj_tag(v___x_4057_) == 0)
{
lean_object* v_a_4058_; lean_object* v___x_4060_; 
v_a_4058_ = lean_ctor_get(v___x_4057_, 0);
lean_inc(v_a_4058_);
lean_dec_ref_known(v___x_4057_, 1);
if (v_isShared_4030_ == 0)
{
lean_ctor_set(v___x_4029_, 0, v_a_4058_);
v___x_4060_ = v___x_4029_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v_a_4058_);
v___x_4060_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
v___y_3945_ = v___x_4035_;
v___y_3946_ = v___x_4056_;
v___y_3947_ = v___x_4055_;
v___y_3948_ = v_a_4027_;
v___y_3949_ = v_snd_3970_;
v___y_3950_ = v___x_4034_;
v_val_3951_ = v___x_4060_;
goto v___jp_3944_;
}
}
else
{
lean_object* v_a_4062_; lean_object* v___x_4064_; 
v_a_4062_ = lean_ctor_get(v___x_4057_, 0);
lean_inc(v_a_4062_);
lean_dec_ref_known(v___x_4057_, 1);
if (v_isShared_4030_ == 0)
{
lean_ctor_set_tag(v___x_4029_, 0);
lean_ctor_set(v___x_4029_, 0, v_a_4062_);
v___x_4064_ = v___x_4029_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4065_; 
v_reuseFailAlloc_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4065_, 0, v_a_4062_);
v___x_4064_ = v_reuseFailAlloc_4065_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
v___y_3945_ = v___x_4035_;
v___y_3946_ = v___x_4056_;
v___y_3947_ = v___x_4055_;
v___y_3948_ = v_a_4027_;
v___y_3949_ = v_snd_3970_;
v___y_3950_ = v___x_4034_;
v_val_3951_ = v___x_4064_;
goto v___jp_3944_;
}
}
}
}
}
}
v___jp_4067_:
{
lean_object* v___x_4073_; uint8_t v___x_4074_; 
v___x_4073_ = lean_array_get_size(v___y_4071_);
v___x_4074_ = lean_nat_dec_lt(v___y_4068_, v___x_4073_);
if (v___x_4074_ == 0)
{
v___y_3967_ = v___y_4069_;
v___y_3968_ = v___y_4070_;
v_fst_3969_ = v_val_4072_;
v_snd_3970_ = v___y_3881_;
goto v___jp_3966_;
}
else
{
lean_object* v___x_4075_; size_t v___x_4076_; size_t v___x_4077_; lean_object* v___x_4078_; 
v___x_4075_ = lean_box(0);
v___x_4076_ = ((size_t)0ULL);
v___x_4077_ = lean_usize_of_nat(v___x_4073_);
v___x_4078_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_4071_, v___x_4076_, v___x_4077_, v___x_4075_, v___y_3882_);
if (lean_obj_tag(v___x_4078_) == 0)
{
lean_dec_ref_known(v___x_4078_, 1);
v___y_3967_ = v___y_4069_;
v___y_3968_ = v___y_4070_;
v_fst_3969_ = v_val_4072_;
v_snd_3970_ = v___y_3881_;
goto v___jp_3966_;
}
else
{
lean_object* v_a_4079_; lean_object* v___x_4081_; uint8_t v_isShared_4082_; uint8_t v_isSharedCheck_4086_; 
lean_dec_ref(v_val_4072_);
lean_dec_ref(v___y_4070_);
lean_dec_ref(v___y_4069_);
lean_dec_ref(v___y_3881_);
lean_dec_ref(v_line_3880_);
lean_dec(v_code_3878_);
lean_dec_ref(v_info_3877_);
lean_dec_ref(v_cfg_3875_);
v_a_4079_ = lean_ctor_get(v___x_4078_, 0);
v_isSharedCheck_4086_ = !lean_is_exclusive(v___x_4078_);
if (v_isSharedCheck_4086_ == 0)
{
v___x_4081_ = v___x_4078_;
v_isShared_4082_ = v_isSharedCheck_4086_;
goto v_resetjp_4080_;
}
else
{
lean_inc(v_a_4079_);
lean_dec(v___x_4078_);
v___x_4081_ = lean_box(0);
v_isShared_4082_ = v_isSharedCheck_4086_;
goto v_resetjp_4080_;
}
v_resetjp_4080_:
{
lean_object* v___x_4084_; 
if (v_isShared_4082_ == 0)
{
v___x_4084_ = v___x_4081_;
goto v_reusejp_4083_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v_a_4079_);
v___x_4084_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4083_;
}
v_reusejp_4083_:
{
return v___x_4084_;
}
}
}
}
}
v___jp_4087_:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; uint8_t v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; uint8_t v_didError_4102_; lean_object* v_numSuccesses_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4115_; 
v___x_4089_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__2));
v___x_4090_ = lean_string_append(v___y_4088_, v___x_4089_);
v___x_4091_ = l_Lake_lowerHexUInt64(v_hash_3901_);
v___x_4092_ = lean_string_append(v___x_4090_, v___x_4091_);
lean_dec_ref(v___x_4091_);
v___x_4093_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_4094_ = lean_string_append(v___x_4092_, v___x_4093_);
v___x_4095_ = lean_string_append(v___x_4094_, v_path_3902_);
lean_dec_ref(v_path_3902_);
v___x_4096_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_4097_ = lean_string_append(v___x_4095_, v___x_4096_);
v___x_4098_ = lean_string_append(v___x_4097_, v_url_3900_);
lean_dec_ref(v_url_3900_);
v___x_4099_ = 1;
v___x_4100_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4100_, 0, v___x_4098_);
lean_ctor_set_uint8(v___x_4100_, sizeof(void*)*1, v___x_4099_);
lean_inc_ref(v___y_3882_);
v___x_4101_ = lean_apply_2(v___y_3882_, v___x_4100_, lean_box(0));
v_didError_4102_ = lean_ctor_get_uint8(v___y_3881_, sizeof(void*)*1);
v_numSuccesses_4103_ = lean_ctor_get(v___y_3881_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v___y_3881_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4105_ = v___y_3881_;
v_isShared_4106_ = v_isSharedCheck_4115_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_numSuccesses_4103_);
lean_dec(v___y_3881_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4115_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4111_; 
v___x_4107_ = lean_box(0);
v___x_4108_ = lean_unsigned_to_nat(1u);
v___x_4109_ = lean_nat_add(v_numSuccesses_4103_, v___x_4108_);
lean_dec(v_numSuccesses_4103_);
if (v_isShared_4106_ == 0)
{
lean_ctor_set(v___x_4105_, 0, v___x_4109_);
v___x_4111_ = v___x_4105_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v___x_4109_);
lean_ctor_set_uint8(v_reuseFailAlloc_4114_, sizeof(void*)*1, v_didError_4102_);
v___x_4111_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4112_, 0, v___x_4107_);
lean_ctor_set(v___x_4112_, 1, v___x_4111_);
v___x_4113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4113_, 0, v___x_4112_);
return v___x_4113_;
}
}
}
v___jp_4116_:
{
lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; uint8_t v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v_tmpPath_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; 
v___x_4118_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__3));
v___x_4119_ = lean_string_append(v___y_4117_, v___x_4118_);
v___x_4120_ = l_Lake_lowerHexUInt64(v_hash_3901_);
v___x_4121_ = lean_string_append(v___x_4119_, v___x_4120_);
lean_dec_ref(v___x_4120_);
v___x_4122_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_4123_ = lean_string_append(v___x_4121_, v___x_4122_);
v___x_4124_ = lean_string_append(v___x_4123_, v_path_3902_);
v___x_4125_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_4126_ = lean_string_append(v___x_4124_, v___x_4125_);
v___x_4127_ = lean_string_append(v___x_4126_, v_url_3900_);
v___x_4128_ = 1;
v___x_4129_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4129_, 0, v___x_4127_);
lean_ctor_set_uint8(v___x_4129_, sizeof(void*)*1, v___x_4128_);
v___x_4130_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
lean_inc_ref(v_path_3902_);
v_tmpPath_4131_ = l_System_FilePath_addExtension(v_path_3902_, v___x_4130_);
v___x_4132_ = lean_unsigned_to_nat(0u);
v___x_4133_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_4134_ = l_IO_FS_readBinFile(v_tmpPath_4131_);
if (lean_obj_tag(v___x_4134_) == 0)
{
lean_object* v_a_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4142_; 
v_a_4135_ = lean_ctor_get(v___x_4134_, 0);
v_isSharedCheck_4142_ = !lean_is_exclusive(v___x_4134_);
if (v_isSharedCheck_4142_ == 0)
{
v___x_4137_ = v___x_4134_;
v_isShared_4138_ = v_isSharedCheck_4142_;
goto v_resetjp_4136_;
}
else
{
lean_inc(v_a_4135_);
lean_dec(v___x_4134_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4142_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
lean_object* v___x_4140_; 
if (v_isShared_4138_ == 0)
{
lean_ctor_set_tag(v___x_4137_, 1);
v___x_4140_ = v___x_4137_;
goto v_reusejp_4139_;
}
else
{
lean_object* v_reuseFailAlloc_4141_; 
v_reuseFailAlloc_4141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4141_, 0, v_a_4135_);
v___x_4140_ = v_reuseFailAlloc_4141_;
goto v_reusejp_4139_;
}
v_reusejp_4139_:
{
v___y_4068_ = v___x_4132_;
v___y_4069_ = v_tmpPath_4131_;
v___y_4070_ = v___x_4129_;
v___y_4071_ = v___x_4133_;
v_val_4072_ = v___x_4140_;
goto v___jp_4067_;
}
}
}
else
{
lean_object* v_a_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4150_; 
v_a_4143_ = lean_ctor_get(v___x_4134_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v___x_4134_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4145_ = v___x_4134_;
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_a_4143_);
lean_dec(v___x_4134_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4148_; 
if (v_isShared_4146_ == 0)
{
lean_ctor_set_tag(v___x_4145_, 0);
v___x_4148_ = v___x_4145_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v_a_4143_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
v___y_4068_ = v___x_4132_;
v___y_4069_ = v_tmpPath_4131_;
v___y_4070_ = v___x_4129_;
v___y_4071_ = v___x_4133_;
v_val_4072_ = v___x_4148_;
goto v___jp_4067_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___boxed(lean_object* v_cfg_4156_, lean_object* v_hOut_4157_, lean_object* v_info_4158_, lean_object* v_code_4159_, lean_object* v_out_4160_, lean_object* v_line_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_){
_start:
{
lean_object* v_res_4165_; 
v_res_4165_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(v_cfg_4156_, v_hOut_4157_, v_info_4158_, v_code_4159_, v_out_4160_, v_line_4161_, v___y_4162_, v___y_4163_);
lean_dec_ref(v___y_4163_);
lean_dec(v_out_4160_);
lean_dec(v_hOut_4157_);
return v_res_4165_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(lean_object* v_cfg_4169_, lean_object* v_hOut_4170_, lean_object* v_val_4171_, lean_object* v_a_4172_, lean_object* v_a_4173_, uint8_t v___x_4174_, lean_object* v_00___4175_, lean_object* v___y_4176_, lean_object* v___y_4177_){
_start:
{
lean_object* v_code_x3f_4180_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4208_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_4209_ = l_Lake_JsonObject_getJson_x3f(v_a_4172_, v___x_4208_);
if (lean_obj_tag(v___x_4209_) == 0)
{
lean_object* v___x_4210_; 
v___x_4210_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__1));
v_code_x3f_4180_ = v___x_4210_;
goto v___jp_4179_;
}
else
{
lean_object* v_val_4211_; lean_object* v___x_4212_; 
v_val_4211_ = lean_ctor_get(v___x_4209_, 0);
lean_inc(v_val_4211_);
lean_dec_ref_known(v___x_4209_, 1);
v___x_4212_ = l_Lean_Json_getNat_x3f(v_val_4211_);
if (lean_obj_tag(v___x_4212_) == 0)
{
lean_object* v_a_4213_; lean_object* v___x_4215_; uint8_t v_isShared_4216_; uint8_t v_isSharedCheck_4222_; 
v_a_4213_ = lean_ctor_get(v___x_4212_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v___x_4212_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4215_ = v___x_4212_;
v_isShared_4216_ = v_isSharedCheck_4222_;
goto v_resetjp_4214_;
}
else
{
lean_inc(v_a_4213_);
lean_dec(v___x_4212_);
v___x_4215_ = lean_box(0);
v_isShared_4216_ = v_isSharedCheck_4222_;
goto v_resetjp_4214_;
}
v_resetjp_4214_:
{
lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4220_; 
v___x_4217_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_4218_ = lean_string_append(v___x_4217_, v_a_4213_);
lean_dec(v_a_4213_);
if (v_isShared_4216_ == 0)
{
lean_ctor_set(v___x_4215_, 0, v___x_4218_);
v___x_4220_ = v___x_4215_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v___x_4218_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
v_code_x3f_4180_ = v___x_4220_;
goto v___jp_4179_;
}
}
}
else
{
if (lean_obj_tag(v___x_4212_) == 1)
{
lean_object* v_a_4223_; lean_object* v___x_4224_; uint8_t v___x_4225_; 
v_a_4223_ = lean_ctor_get(v___x_4212_, 0);
lean_inc(v_a_4223_);
v___x_4224_ = lean_unsigned_to_nat(200u);
v___x_4225_ = lean_nat_dec_eq(v_a_4223_, v___x_4224_);
if (v___x_4225_ == 0)
{
lean_object* v___x_4226_; uint8_t v___x_4227_; 
v___x_4226_ = lean_unsigned_to_nat(201u);
v___x_4227_ = lean_nat_dec_eq(v_a_4223_, v___x_4226_);
lean_dec(v_a_4223_);
if (v___x_4227_ == 0)
{
v_code_x3f_4180_ = v___x_4212_;
goto v___jp_4179_;
}
else
{
lean_object* v___x_4228_; 
lean_dec_ref_known(v___x_4212_, 1);
v___x_4228_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(v_cfg_4169_, v_hOut_4170_, v_val_4171_, v___x_4226_, v_a_4172_, v_a_4173_, v___y_4176_, v___y_4177_);
return v___x_4228_;
}
}
else
{
lean_object* v___x_4229_; 
lean_dec_ref_known(v___x_4212_, 1);
lean_dec(v_a_4223_);
v___x_4229_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(v_cfg_4169_, v_hOut_4170_, v_val_4171_, v___x_4224_, v_a_4172_, v_a_4173_, v___y_4176_, v___y_4177_);
return v___x_4229_;
}
}
else
{
v_code_x3f_4180_ = v___x_4212_;
goto v___jp_4179_;
}
}
}
v___jp_4179_:
{
lean_object* v___x_4181_; 
v___x_4181_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_4169_, v_hOut_4170_, v_val_4171_, v_code_x3f_4180_, v_a_4172_, v_a_4173_, v___y_4177_);
if (lean_obj_tag(v___x_4181_) == 0)
{
lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4198_; 
v_isSharedCheck_4198_ = !lean_is_exclusive(v___x_4181_);
if (v_isSharedCheck_4198_ == 0)
{
lean_object* v_unused_4199_; 
v_unused_4199_ = lean_ctor_get(v___x_4181_, 0);
lean_dec(v_unused_4199_);
v___x_4183_ = v___x_4181_;
v_isShared_4184_ = v_isSharedCheck_4198_;
goto v_resetjp_4182_;
}
else
{
lean_dec(v___x_4181_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4198_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
lean_object* v_numSuccesses_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4197_; 
v_numSuccesses_4185_ = lean_ctor_get(v___y_4176_, 0);
v_isSharedCheck_4197_ = !lean_is_exclusive(v___y_4176_);
if (v_isSharedCheck_4197_ == 0)
{
v___x_4187_ = v___y_4176_;
v_isShared_4188_ = v_isSharedCheck_4197_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_numSuccesses_4185_);
lean_dec(v___y_4176_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4197_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4189_; lean_object* v___x_4191_; 
v___x_4189_ = lean_box(0);
if (v_isShared_4188_ == 0)
{
v___x_4191_ = v___x_4187_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v_numSuccesses_4185_);
v___x_4191_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
lean_object* v___x_4192_; lean_object* v___x_4194_; 
lean_ctor_set_uint8(v___x_4191_, sizeof(void*)*1, v___x_4174_);
v___x_4192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4192_, 0, v___x_4189_);
lean_ctor_set(v___x_4192_, 1, v___x_4191_);
if (v_isShared_4184_ == 0)
{
lean_ctor_set(v___x_4183_, 0, v___x_4192_);
v___x_4194_ = v___x_4183_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v___x_4192_);
v___x_4194_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
return v___x_4194_;
}
}
}
}
}
else
{
lean_object* v_a_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4207_; 
lean_dec_ref(v___y_4176_);
v_a_4200_ = lean_ctor_get(v___x_4181_, 0);
v_isSharedCheck_4207_ = !lean_is_exclusive(v___x_4181_);
if (v_isSharedCheck_4207_ == 0)
{
v___x_4202_ = v___x_4181_;
v_isShared_4203_ = v_isSharedCheck_4207_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_a_4200_);
lean_dec(v___x_4181_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4207_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
lean_object* v___x_4205_; 
if (v_isShared_4203_ == 0)
{
v___x_4205_ = v___x_4202_;
goto v_reusejp_4204_;
}
else
{
lean_object* v_reuseFailAlloc_4206_; 
v_reuseFailAlloc_4206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4206_, 0, v_a_4200_);
v___x_4205_ = v_reuseFailAlloc_4206_;
goto v_reusejp_4204_;
}
v_reusejp_4204_:
{
return v___x_4205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___boxed(lean_object* v_cfg_4230_, lean_object* v_hOut_4231_, lean_object* v_val_4232_, lean_object* v_a_4233_, lean_object* v_a_4234_, lean_object* v___x_4235_, lean_object* v_00___4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_){
_start:
{
uint8_t v___x_12651__boxed_4240_; lean_object* v_res_4241_; 
v___x_12651__boxed_4240_ = lean_unbox(v___x_4235_);
v_res_4241_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_4230_, v_hOut_4231_, v_val_4232_, v_a_4233_, v_a_4234_, v___x_12651__boxed_4240_, v_00___4236_, v___y_4237_, v___y_4238_);
lean_dec_ref(v___y_4238_);
lean_dec(v_a_4233_);
lean_dec(v_hOut_4231_);
return v_res_4241_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(lean_object* v_cfg_4242_, lean_object* v_hOut_4243_, lean_object* v_val_4244_, lean_object* v_a_4245_, lean_object* v_a_4246_, uint8_t v___x_4247_, lean_object* v_x_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_){
_start:
{
lean_object* v___y_4253_; lean_object* v___x_4281_; lean_object* v___x_4282_; 
v___x_4281_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_4282_ = l_Lake_JsonObject_getJson_x3f(v_a_4245_, v___x_4281_);
if (lean_obj_tag(v___x_4282_) == 0)
{
lean_object* v___x_4283_; 
v___x_4283_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__1));
v___y_4253_ = v___x_4283_;
goto v___jp_4252_;
}
else
{
lean_object* v_val_4284_; lean_object* v___x_4285_; 
v_val_4284_ = lean_ctor_get(v___x_4282_, 0);
lean_inc(v_val_4284_);
lean_dec_ref_known(v___x_4282_, 1);
v___x_4285_ = l_Lean_Json_getNat_x3f(v_val_4284_);
if (lean_obj_tag(v___x_4285_) == 0)
{
lean_object* v_a_4286_; lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4295_; 
v_a_4286_ = lean_ctor_get(v___x_4285_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4288_ = v___x_4285_;
v_isShared_4289_ = v_isSharedCheck_4295_;
goto v_resetjp_4287_;
}
else
{
lean_inc(v_a_4286_);
lean_dec(v___x_4285_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4295_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4293_; 
v___x_4290_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_4291_ = lean_string_append(v___x_4290_, v_a_4286_);
lean_dec(v_a_4286_);
if (v_isShared_4289_ == 0)
{
lean_ctor_set(v___x_4288_, 0, v___x_4291_);
v___x_4293_ = v___x_4288_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v___x_4291_);
v___x_4293_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
v___y_4253_ = v___x_4293_;
goto v___jp_4252_;
}
}
}
else
{
v___y_4253_ = v___x_4285_;
goto v___jp_4252_;
}
}
v___jp_4252_:
{
lean_object* v___x_4254_; 
v___x_4254_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_4242_, v_hOut_4243_, v_val_4244_, v___y_4253_, v_a_4245_, v_a_4246_, v___y_4250_);
if (lean_obj_tag(v___x_4254_) == 0)
{
lean_object* v___x_4256_; uint8_t v_isShared_4257_; uint8_t v_isSharedCheck_4271_; 
v_isSharedCheck_4271_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4271_ == 0)
{
lean_object* v_unused_4272_; 
v_unused_4272_ = lean_ctor_get(v___x_4254_, 0);
lean_dec(v_unused_4272_);
v___x_4256_ = v___x_4254_;
v_isShared_4257_ = v_isSharedCheck_4271_;
goto v_resetjp_4255_;
}
else
{
lean_dec(v___x_4254_);
v___x_4256_ = lean_box(0);
v_isShared_4257_ = v_isSharedCheck_4271_;
goto v_resetjp_4255_;
}
v_resetjp_4255_:
{
lean_object* v_numSuccesses_4258_; lean_object* v___x_4260_; uint8_t v_isShared_4261_; uint8_t v_isSharedCheck_4270_; 
v_numSuccesses_4258_ = lean_ctor_get(v___y_4249_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___y_4249_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4260_ = v___y_4249_;
v_isShared_4261_ = v_isSharedCheck_4270_;
goto v_resetjp_4259_;
}
else
{
lean_inc(v_numSuccesses_4258_);
lean_dec(v___y_4249_);
v___x_4260_ = lean_box(0);
v_isShared_4261_ = v_isSharedCheck_4270_;
goto v_resetjp_4259_;
}
v_resetjp_4259_:
{
lean_object* v___x_4262_; lean_object* v___x_4264_; 
v___x_4262_ = lean_box(0);
if (v_isShared_4261_ == 0)
{
v___x_4264_ = v___x_4260_;
goto v_reusejp_4263_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_numSuccesses_4258_);
v___x_4264_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4263_;
}
v_reusejp_4263_:
{
lean_object* v___x_4265_; lean_object* v___x_4267_; 
lean_ctor_set_uint8(v___x_4264_, sizeof(void*)*1, v___x_4247_);
v___x_4265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4265_, 0, v___x_4262_);
lean_ctor_set(v___x_4265_, 1, v___x_4264_);
if (v_isShared_4257_ == 0)
{
lean_ctor_set(v___x_4256_, 0, v___x_4265_);
v___x_4267_ = v___x_4256_;
goto v_reusejp_4266_;
}
else
{
lean_object* v_reuseFailAlloc_4268_; 
v_reuseFailAlloc_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4268_, 0, v___x_4265_);
v___x_4267_ = v_reuseFailAlloc_4268_;
goto v_reusejp_4266_;
}
v_reusejp_4266_:
{
return v___x_4267_;
}
}
}
}
}
else
{
lean_object* v_a_4273_; lean_object* v___x_4275_; uint8_t v_isShared_4276_; uint8_t v_isSharedCheck_4280_; 
lean_dec_ref(v___y_4249_);
v_a_4273_ = lean_ctor_get(v___x_4254_, 0);
v_isSharedCheck_4280_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4280_ == 0)
{
v___x_4275_ = v___x_4254_;
v_isShared_4276_ = v_isSharedCheck_4280_;
goto v_resetjp_4274_;
}
else
{
lean_inc(v_a_4273_);
lean_dec(v___x_4254_);
v___x_4275_ = lean_box(0);
v_isShared_4276_ = v_isSharedCheck_4280_;
goto v_resetjp_4274_;
}
v_resetjp_4274_:
{
lean_object* v___x_4278_; 
if (v_isShared_4276_ == 0)
{
v___x_4278_ = v___x_4275_;
goto v_reusejp_4277_;
}
else
{
lean_object* v_reuseFailAlloc_4279_; 
v_reuseFailAlloc_4279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4279_, 0, v_a_4273_);
v___x_4278_ = v_reuseFailAlloc_4279_;
goto v_reusejp_4277_;
}
v_reusejp_4277_:
{
return v___x_4278_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___boxed(lean_object* v_cfg_4296_, lean_object* v_hOut_4297_, lean_object* v_val_4298_, lean_object* v_a_4299_, lean_object* v_a_4300_, lean_object* v___x_4301_, lean_object* v_x_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_){
_start:
{
uint8_t v___x_12778__boxed_4306_; lean_object* v_res_4307_; 
v___x_12778__boxed_4306_ = lean_unbox(v___x_4301_);
v_res_4307_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4296_, v_hOut_4297_, v_val_4298_, v_a_4299_, v_a_4300_, v___x_12778__boxed_4306_, v_x_4302_, v___y_4303_, v___y_4304_);
lean_dec_ref(v___y_4304_);
lean_dec_ref(v_x_4302_);
lean_dec(v_a_4299_);
lean_dec(v_hOut_4297_);
return v_res_4307_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(lean_object* v_a_4313_, lean_object* v_cfg_4314_, lean_object* v_h_4315_, lean_object* v_hOut_4316_, lean_object* v_s_4317_){
_start:
{
lean_object* v___y_4320_; lean_object* v___x_4332_; 
v___x_4332_ = lean_io_prim_handle_get_line(v_h_4315_);
if (lean_obj_tag(v___x_4332_) == 0)
{
lean_object* v_a_4333_; lean_object* v___x_4335_; uint8_t v_isShared_4336_; uint8_t v_isSharedCheck_4429_; 
v_a_4333_ = lean_ctor_get(v___x_4332_, 0);
v_isSharedCheck_4429_ = !lean_is_exclusive(v___x_4332_);
if (v_isSharedCheck_4429_ == 0)
{
v___x_4335_ = v___x_4332_;
v_isShared_4336_ = v_isSharedCheck_4429_;
goto v_resetjp_4334_;
}
else
{
lean_inc(v_a_4333_);
lean_dec(v___x_4332_);
v___x_4335_ = lean_box(0);
v_isShared_4336_ = v_isSharedCheck_4429_;
goto v_resetjp_4334_;
}
v_resetjp_4334_:
{
lean_object* v___y_4338_; lean_object* v___y_4342_; lean_object* v___y_4343_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v_startInclusive_4349_; lean_object* v_endExclusive_4350_; lean_object* v___x_4351_; uint8_t v___x_4352_; 
v___x_4345_ = lean_unsigned_to_nat(0u);
v___x_4346_ = lean_string_utf8_byte_size(v_a_4333_);
lean_inc(v_a_4333_);
v___x_4347_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4347_, 0, v_a_4333_);
lean_ctor_set(v___x_4347_, 1, v___x_4345_);
lean_ctor_set(v___x_4347_, 2, v___x_4346_);
v___x_4348_ = l_String_Slice_trimAscii(v___x_4347_);
v_startInclusive_4349_ = lean_ctor_get(v___x_4348_, 1);
lean_inc(v_startInclusive_4349_);
v_endExclusive_4350_ = lean_ctor_get(v___x_4348_, 2);
lean_inc(v_endExclusive_4350_);
v___x_4351_ = lean_nat_sub(v_endExclusive_4350_, v_startInclusive_4349_);
lean_dec(v_startInclusive_4349_);
lean_dec(v_endExclusive_4350_);
v___x_4352_ = lean_nat_dec_eq(v___x_4351_, v___x_4345_);
lean_dec(v___x_4351_);
if (v___x_4352_ == 0)
{
uint8_t v___x_4353_; lean_object* v___y_4355_; lean_object* v_a_4373_; lean_object* v___x_4392_; 
lean_del_object(v___x_4335_);
v___x_4353_ = 1;
lean_inc(v_a_4333_);
v___x_4392_ = l_Lean_Json_parse(v_a_4333_);
if (lean_obj_tag(v___x_4392_) == 0)
{
lean_object* v_a_4393_; 
lean_dec(v_a_4333_);
v_a_4393_ = lean_ctor_get(v___x_4392_, 0);
lean_inc(v_a_4393_);
lean_dec_ref_known(v___x_4392_, 1);
v_a_4373_ = v_a_4393_;
goto v___jp_4372_;
}
else
{
lean_object* v_a_4394_; lean_object* v___x_4395_; 
v_a_4394_ = lean_ctor_get(v___x_4392_, 0);
lean_inc(v_a_4394_);
lean_dec_ref_known(v___x_4392_, 1);
v___x_4395_ = l_Lean_Json_getObj_x3f(v_a_4394_);
if (lean_obj_tag(v___x_4395_) == 0)
{
lean_object* v_a_4396_; 
lean_dec(v_a_4333_);
v_a_4396_ = lean_ctor_get(v___x_4395_, 0);
lean_inc(v_a_4396_);
lean_dec_ref_known(v___x_4395_, 1);
v_a_4373_ = v_a_4396_;
goto v___jp_4372_;
}
else
{
lean_object* v_a_4397_; lean_object* v___x_4398_; 
v_a_4397_ = lean_ctor_get(v___x_4395_, 0);
lean_inc(v_a_4397_);
lean_dec_ref_known(v___x_4395_, 1);
v___x_4398_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_4314_, v_a_4397_);
if (lean_obj_tag(v___x_4398_) == 1)
{
lean_object* v_val_4399_; lean_object* v___x_4400_; lean_object* v___f_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; 
lean_dec_ref(v___x_4348_);
v_val_4399_ = lean_ctor_get(v___x_4398_, 0);
lean_inc_n(v_val_4399_, 2);
lean_dec_ref_known(v___x_4398_, 1);
v___x_4400_ = lean_box(v___x_4353_);
lean_inc(v_a_4333_);
lean_inc(v_a_4397_);
lean_inc(v_hOut_4316_);
lean_inc_ref(v_cfg_4314_);
v___f_4401_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___boxed), 10, 6);
lean_closure_set(v___f_4401_, 0, v_cfg_4314_);
lean_closure_set(v___f_4401_, 1, v_hOut_4316_);
lean_closure_set(v___f_4401_, 2, v_val_4399_);
lean_closure_set(v___f_4401_, 3, v_a_4397_);
lean_closure_set(v___f_4401_, 4, v_a_4333_);
lean_closure_set(v___f_4401_, 5, v___x_4400_);
v___x_4402_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__3));
v___x_4403_ = l_Lake_JsonObject_getJson_x3f(v_a_4397_, v___x_4402_);
if (lean_obj_tag(v___x_4403_) == 0)
{
lean_dec(v_val_4399_);
lean_dec(v_a_4397_);
lean_dec(v_a_4333_);
v___y_4338_ = v___f_4401_;
goto v___jp_4337_;
}
else
{
lean_object* v_val_4404_; lean_object* v___x_4405_; lean_object* v___f_4406_; lean_object* v___x_4407_; 
v_val_4404_ = lean_ctor_get(v___x_4403_, 0);
lean_inc(v_val_4404_);
lean_dec_ref_known(v___x_4403_, 1);
v___x_4405_ = lean_box(v___x_4353_);
lean_inc(v_a_4333_);
lean_inc(v_a_4397_);
lean_inc(v_val_4399_);
lean_inc(v_hOut_4316_);
lean_inc_ref(v_cfg_4314_);
v___f_4406_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___boxed), 10, 6);
lean_closure_set(v___f_4406_, 0, v_cfg_4314_);
lean_closure_set(v___f_4406_, 1, v_hOut_4316_);
lean_closure_set(v___f_4406_, 2, v_val_4399_);
lean_closure_set(v___f_4406_, 3, v_a_4397_);
lean_closure_set(v___f_4406_, 4, v_a_4333_);
lean_closure_set(v___f_4406_, 5, v___x_4405_);
v___x_4407_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_4404_);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_object* v_a_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4417_; 
lean_dec_ref(v___f_4401_);
lean_dec(v_val_4399_);
lean_dec(v_a_4397_);
lean_dec(v_a_4333_);
v_a_4408_ = lean_ctor_get(v___x_4407_, 0);
v_isSharedCheck_4417_ = !lean_is_exclusive(v___x_4407_);
if (v_isSharedCheck_4417_ == 0)
{
v___x_4410_ = v___x_4407_;
v_isShared_4411_ = v_isSharedCheck_4417_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_a_4408_);
lean_dec(v___x_4407_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4417_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4415_; 
v___x_4412_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__4));
v___x_4413_ = lean_string_append(v___x_4412_, v_a_4408_);
lean_dec(v_a_4408_);
if (v_isShared_4411_ == 0)
{
lean_ctor_set(v___x_4410_, 0, v___x_4413_);
v___x_4415_ = v___x_4410_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v___x_4413_);
v___x_4415_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
v___y_4342_ = v___f_4406_;
v___y_4343_ = v___x_4415_;
goto v___jp_4341_;
}
}
}
else
{
if (lean_obj_tag(v___x_4407_) == 1)
{
lean_object* v_a_4418_; 
lean_dec_ref(v___f_4406_);
v_a_4418_ = lean_ctor_get(v___x_4407_, 0);
lean_inc(v_a_4418_);
if (lean_obj_tag(v_a_4418_) == 0)
{
lean_dec_ref_known(v___x_4407_, 1);
lean_dec(v_val_4399_);
lean_dec(v_a_4397_);
lean_dec(v_a_4333_);
v___y_4338_ = v___f_4401_;
goto v___jp_4337_;
}
else
{
lean_object* v_val_4419_; uint8_t v___x_4420_; 
lean_dec_ref(v___f_4401_);
v_val_4419_ = lean_ctor_get(v_a_4418_, 0);
lean_inc(v_val_4419_);
lean_dec_ref_known(v_a_4418_, 1);
v___x_4420_ = lean_nat_dec_eq(v_val_4419_, v___x_4345_);
lean_dec(v_val_4419_);
if (v___x_4420_ == 0)
{
lean_object* v___x_4421_; 
lean_inc_ref(v_cfg_4314_);
v___x_4421_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4314_, v_hOut_4316_, v_val_4399_, v_a_4397_, v_a_4333_, v___x_4353_, v___x_4407_, v_s_4317_, v_a_4313_);
lean_dec_ref_known(v___x_4407_, 1);
lean_dec(v_a_4397_);
v___y_4320_ = v___x_4421_;
goto v___jp_4319_;
}
else
{
lean_object* v___x_4422_; lean_object* v___x_4423_; 
lean_dec_ref_known(v___x_4407_, 1);
v___x_4422_ = lean_box(0);
lean_inc_ref(v_cfg_4314_);
v___x_4423_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_4314_, v_hOut_4316_, v_val_4399_, v_a_4397_, v_a_4333_, v___x_4353_, v___x_4422_, v_s_4317_, v_a_4313_);
lean_dec(v_a_4397_);
v___y_4320_ = v___x_4423_;
goto v___jp_4319_;
}
}
}
else
{
lean_dec_ref(v___f_4401_);
lean_dec(v_val_4399_);
lean_dec(v_a_4397_);
lean_dec(v_a_4333_);
v___y_4342_ = v___f_4406_;
v___y_4343_ = v___x_4407_;
goto v___jp_4341_;
}
}
}
}
else
{
lean_object* v_scope_4424_; lean_object* v_s_4425_; 
lean_dec(v___x_4398_);
lean_dec(v_a_4397_);
lean_dec(v_a_4333_);
v_scope_4424_ = lean_ctor_get(v_cfg_4314_, 0);
v_s_4425_ = lean_ctor_get(v_scope_4424_, 0);
lean_inc_ref(v_s_4425_);
v___y_4355_ = v_s_4425_;
goto v___jp_4354_;
}
}
}
v___jp_4354_:
{
lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; uint8_t v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v_numSuccesses_4363_; lean_object* v___x_4365_; uint8_t v_isShared_4366_; uint8_t v_isSharedCheck_4371_; 
v___x_4356_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__0));
v___x_4357_ = lean_string_append(v___y_4355_, v___x_4356_);
v___x_4358_ = l_String_Slice_toString(v___x_4348_);
lean_dec_ref(v___x_4348_);
v___x_4359_ = lean_string_append(v___x_4357_, v___x_4358_);
lean_dec_ref(v___x_4358_);
v___x_4360_ = 3;
v___x_4361_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4361_, 0, v___x_4359_);
lean_ctor_set_uint8(v___x_4361_, sizeof(void*)*1, v___x_4360_);
lean_inc_ref(v_a_4313_);
v___x_4362_ = lean_apply_2(v_a_4313_, v___x_4361_, lean_box(0));
v_numSuccesses_4363_ = lean_ctor_get(v_s_4317_, 0);
v_isSharedCheck_4371_ = !lean_is_exclusive(v_s_4317_);
if (v_isSharedCheck_4371_ == 0)
{
v___x_4365_ = v_s_4317_;
v_isShared_4366_ = v_isSharedCheck_4371_;
goto v_resetjp_4364_;
}
else
{
lean_inc(v_numSuccesses_4363_);
lean_dec(v_s_4317_);
v___x_4365_ = lean_box(0);
v_isShared_4366_ = v_isSharedCheck_4371_;
goto v_resetjp_4364_;
}
v_resetjp_4364_:
{
lean_object* v___x_4368_; 
if (v_isShared_4366_ == 0)
{
v___x_4368_ = v___x_4365_;
goto v_reusejp_4367_;
}
else
{
lean_object* v_reuseFailAlloc_4370_; 
v_reuseFailAlloc_4370_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4370_, 0, v_numSuccesses_4363_);
v___x_4368_ = v_reuseFailAlloc_4370_;
goto v_reusejp_4367_;
}
v_reusejp_4367_:
{
lean_ctor_set_uint8(v___x_4368_, sizeof(void*)*1, v___x_4353_);
v_s_4317_ = v___x_4368_;
goto _start;
}
}
}
v___jp_4372_:
{
lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; uint8_t v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v_numSuccesses_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4391_; 
v___x_4374_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__1));
v___x_4375_ = lean_string_append(v___x_4374_, v_a_4373_);
lean_dec_ref(v_a_4373_);
v___x_4376_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2));
v___x_4377_ = lean_string_append(v___x_4375_, v___x_4376_);
v___x_4378_ = l_String_Slice_toString(v___x_4348_);
lean_dec_ref(v___x_4348_);
v___x_4379_ = lean_string_append(v___x_4377_, v___x_4378_);
lean_dec_ref(v___x_4378_);
v___x_4380_ = 3;
v___x_4381_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4381_, 0, v___x_4379_);
lean_ctor_set_uint8(v___x_4381_, sizeof(void*)*1, v___x_4380_);
lean_inc_ref(v_a_4313_);
v___x_4382_ = lean_apply_2(v_a_4313_, v___x_4381_, lean_box(0));
v_numSuccesses_4383_ = lean_ctor_get(v_s_4317_, 0);
v_isSharedCheck_4391_ = !lean_is_exclusive(v_s_4317_);
if (v_isSharedCheck_4391_ == 0)
{
v___x_4385_ = v_s_4317_;
v_isShared_4386_ = v_isSharedCheck_4391_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_numSuccesses_4383_);
lean_dec(v_s_4317_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4391_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4388_; 
if (v_isShared_4386_ == 0)
{
v___x_4388_ = v___x_4385_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4390_; 
v_reuseFailAlloc_4390_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4390_, 0, v_numSuccesses_4383_);
v___x_4388_ = v_reuseFailAlloc_4390_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
lean_ctor_set_uint8(v___x_4388_, sizeof(void*)*1, v___x_4353_);
v_s_4317_ = v___x_4388_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_4427_; 
lean_dec_ref(v___x_4348_);
lean_dec(v_a_4333_);
lean_dec(v_hOut_4316_);
lean_dec_ref(v_cfg_4314_);
if (v_isShared_4336_ == 0)
{
lean_ctor_set(v___x_4335_, 0, v_s_4317_);
v___x_4427_ = v___x_4335_;
goto v_reusejp_4426_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v_s_4317_);
v___x_4427_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4426_;
}
v_reusejp_4426_:
{
return v___x_4427_;
}
}
v___jp_4337_:
{
lean_object* v___x_4339_; lean_object* v___x_4340_; 
v___x_4339_ = lean_box(0);
lean_inc_ref(v_a_4313_);
v___x_4340_ = lean_apply_4(v___y_4338_, v___x_4339_, v_s_4317_, v_a_4313_, lean_box(0));
v___y_4320_ = v___x_4340_;
goto v___jp_4319_;
}
v___jp_4341_:
{
lean_object* v___x_4344_; 
lean_inc_ref(v_a_4313_);
v___x_4344_ = lean_apply_4(v___y_4342_, v___y_4343_, v_s_4317_, v_a_4313_, lean_box(0));
v___y_4320_ = v___x_4344_;
goto v___jp_4319_;
}
}
}
else
{
lean_object* v_a_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4442_; 
lean_dec_ref(v_s_4317_);
lean_dec(v_hOut_4316_);
lean_dec_ref(v_cfg_4314_);
v_a_4430_ = lean_ctor_get(v___x_4332_, 0);
v_isSharedCheck_4442_ = !lean_is_exclusive(v___x_4332_);
if (v_isSharedCheck_4442_ == 0)
{
v___x_4432_ = v___x_4332_;
v_isShared_4433_ = v_isSharedCheck_4442_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_a_4430_);
lean_dec(v___x_4332_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4442_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
lean_object* v___x_4434_; uint8_t v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4440_; 
v___x_4434_ = lean_io_error_to_string(v_a_4430_);
v___x_4435_ = 3;
v___x_4436_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4436_, 0, v___x_4434_);
lean_ctor_set_uint8(v___x_4436_, sizeof(void*)*1, v___x_4435_);
lean_inc_ref(v_a_4313_);
v___x_4437_ = lean_apply_2(v_a_4313_, v___x_4436_, lean_box(0));
v___x_4438_ = lean_box(0);
if (v_isShared_4433_ == 0)
{
lean_ctor_set(v___x_4432_, 0, v___x_4438_);
v___x_4440_ = v___x_4432_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v___x_4438_);
v___x_4440_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
return v___x_4440_;
}
}
}
v___jp_4319_:
{
if (lean_obj_tag(v___y_4320_) == 0)
{
lean_object* v_a_4321_; lean_object* v_snd_4322_; 
v_a_4321_ = lean_ctor_get(v___y_4320_, 0);
lean_inc(v_a_4321_);
lean_dec_ref_known(v___y_4320_, 1);
v_snd_4322_ = lean_ctor_get(v_a_4321_, 1);
lean_inc(v_snd_4322_);
lean_dec(v_a_4321_);
v_s_4317_ = v_snd_4322_;
goto _start;
}
else
{
lean_object* v_a_4324_; lean_object* v___x_4326_; uint8_t v_isShared_4327_; uint8_t v_isSharedCheck_4331_; 
lean_dec(v_hOut_4316_);
lean_dec_ref(v_cfg_4314_);
v_a_4324_ = lean_ctor_get(v___y_4320_, 0);
v_isSharedCheck_4331_ = !lean_is_exclusive(v___y_4320_);
if (v_isSharedCheck_4331_ == 0)
{
v___x_4326_ = v___y_4320_;
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
else
{
lean_inc(v_a_4324_);
lean_dec(v___y_4320_);
v___x_4326_ = lean_box(0);
v_isShared_4327_ = v_isSharedCheck_4331_;
goto v_resetjp_4325_;
}
v_resetjp_4325_:
{
lean_object* v___x_4329_; 
if (v_isShared_4327_ == 0)
{
v___x_4329_ = v___x_4326_;
goto v_reusejp_4328_;
}
else
{
lean_object* v_reuseFailAlloc_4330_; 
v_reuseFailAlloc_4330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4330_, 0, v_a_4324_);
v___x_4329_ = v_reuseFailAlloc_4330_;
goto v_reusejp_4328_;
}
v_reusejp_4328_:
{
return v___x_4329_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___boxed(lean_object* v_a_4443_, lean_object* v_cfg_4444_, lean_object* v_h_4445_, lean_object* v_hOut_4446_, lean_object* v_s_4447_, lean_object* v___y_4448_){
_start:
{
lean_object* v_res_4449_; 
v_res_4449_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(v_a_4443_, v_cfg_4444_, v_h_4445_, v_hOut_4446_, v_s_4447_);
lean_dec(v_h_4445_);
lean_dec_ref(v_a_4443_);
return v_res_4449_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(lean_object* v_cfg_4450_, lean_object* v_h_4451_, lean_object* v_hOut_4452_, lean_object* v_s_4453_, lean_object* v_a_4454_){
_start:
{
lean_object* v___y_4457_; lean_object* v___x_4469_; 
v___x_4469_ = lean_io_prim_handle_get_line(v_h_4451_);
if (lean_obj_tag(v___x_4469_) == 0)
{
lean_object* v_a_4470_; lean_object* v___x_4472_; uint8_t v_isShared_4473_; uint8_t v_isSharedCheck_4560_; 
v_a_4470_ = lean_ctor_get(v___x_4469_, 0);
v_isSharedCheck_4560_ = !lean_is_exclusive(v___x_4469_);
if (v_isSharedCheck_4560_ == 0)
{
v___x_4472_ = v___x_4469_;
v_isShared_4473_ = v_isSharedCheck_4560_;
goto v_resetjp_4471_;
}
else
{
lean_inc(v_a_4470_);
lean_dec(v___x_4469_);
v___x_4472_ = lean_box(0);
v_isShared_4473_ = v_isSharedCheck_4560_;
goto v_resetjp_4471_;
}
v_resetjp_4471_:
{
lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v_startInclusive_4478_; lean_object* v_endExclusive_4479_; lean_object* v___x_4480_; uint8_t v___x_4481_; 
v___x_4474_ = lean_unsigned_to_nat(0u);
v___x_4475_ = lean_string_utf8_byte_size(v_a_4470_);
lean_inc(v_a_4470_);
v___x_4476_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4476_, 0, v_a_4470_);
lean_ctor_set(v___x_4476_, 1, v___x_4474_);
lean_ctor_set(v___x_4476_, 2, v___x_4475_);
v___x_4477_ = l_String_Slice_trimAscii(v___x_4476_);
v_startInclusive_4478_ = lean_ctor_get(v___x_4477_, 1);
lean_inc(v_startInclusive_4478_);
v_endExclusive_4479_ = lean_ctor_get(v___x_4477_, 2);
lean_inc(v_endExclusive_4479_);
v___x_4480_ = lean_nat_sub(v_endExclusive_4479_, v_startInclusive_4478_);
lean_dec(v_startInclusive_4478_);
lean_dec(v_endExclusive_4479_);
v___x_4481_ = lean_nat_dec_eq(v___x_4480_, v___x_4474_);
lean_dec(v___x_4480_);
if (v___x_4481_ == 0)
{
uint8_t v___x_4482_; lean_object* v___y_4484_; lean_object* v_a_4502_; lean_object* v___x_4521_; 
lean_del_object(v___x_4472_);
v___x_4482_ = 1;
lean_inc(v_a_4470_);
v___x_4521_ = l_Lean_Json_parse(v_a_4470_);
if (lean_obj_tag(v___x_4521_) == 0)
{
lean_object* v_a_4522_; 
lean_dec(v_a_4470_);
v_a_4522_ = lean_ctor_get(v___x_4521_, 0);
lean_inc(v_a_4522_);
lean_dec_ref_known(v___x_4521_, 1);
v_a_4502_ = v_a_4522_;
goto v___jp_4501_;
}
else
{
lean_object* v_a_4523_; lean_object* v___x_4524_; 
v_a_4523_ = lean_ctor_get(v___x_4521_, 0);
lean_inc(v_a_4523_);
lean_dec_ref_known(v___x_4521_, 1);
v___x_4524_ = l_Lean_Json_getObj_x3f(v_a_4523_);
if (lean_obj_tag(v___x_4524_) == 0)
{
lean_object* v_a_4525_; 
lean_dec(v_a_4470_);
v_a_4525_ = lean_ctor_get(v___x_4524_, 0);
lean_inc(v_a_4525_);
lean_dec_ref_known(v___x_4524_, 1);
v_a_4502_ = v_a_4525_;
goto v___jp_4501_;
}
else
{
lean_object* v_a_4526_; lean_object* v___x_4527_; 
v_a_4526_ = lean_ctor_get(v___x_4524_, 0);
lean_inc(v_a_4526_);
lean_dec_ref_known(v___x_4524_, 1);
v___x_4527_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_4450_, v_a_4526_);
if (lean_obj_tag(v___x_4527_) == 1)
{
lean_object* v_val_4528_; lean_object* v___x_4532_; lean_object* v___x_4533_; 
lean_dec_ref(v___x_4477_);
v_val_4528_ = lean_ctor_get(v___x_4527_, 0);
lean_inc(v_val_4528_);
lean_dec_ref_known(v___x_4527_, 1);
v___x_4532_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__3));
v___x_4533_ = l_Lake_JsonObject_getJson_x3f(v_a_4526_, v___x_4532_);
if (lean_obj_tag(v___x_4533_) == 0)
{
goto v___jp_4529_;
}
else
{
lean_object* v_val_4534_; lean_object* v___y_4536_; lean_object* v___x_4538_; 
v_val_4534_ = lean_ctor_get(v___x_4533_, 0);
lean_inc(v_val_4534_);
lean_dec_ref_known(v___x_4533_, 1);
v___x_4538_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_4534_);
if (lean_obj_tag(v___x_4538_) == 0)
{
lean_object* v_a_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4548_; 
v_a_4539_ = lean_ctor_get(v___x_4538_, 0);
v_isSharedCheck_4548_ = !lean_is_exclusive(v___x_4538_);
if (v_isSharedCheck_4548_ == 0)
{
v___x_4541_ = v___x_4538_;
v_isShared_4542_ = v_isSharedCheck_4548_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_a_4539_);
lean_dec(v___x_4538_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4548_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4546_; 
v___x_4543_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__4));
v___x_4544_ = lean_string_append(v___x_4543_, v_a_4539_);
lean_dec(v_a_4539_);
if (v_isShared_4542_ == 0)
{
lean_ctor_set(v___x_4541_, 0, v___x_4544_);
v___x_4546_ = v___x_4541_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4547_; 
v_reuseFailAlloc_4547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4547_, 0, v___x_4544_);
v___x_4546_ = v_reuseFailAlloc_4547_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
v___y_4536_ = v___x_4546_;
goto v___jp_4535_;
}
}
}
else
{
if (lean_obj_tag(v___x_4538_) == 1)
{
lean_object* v_a_4549_; 
v_a_4549_ = lean_ctor_get(v___x_4538_, 0);
lean_inc(v_a_4549_);
if (lean_obj_tag(v_a_4549_) == 0)
{
lean_dec_ref_known(v___x_4538_, 1);
goto v___jp_4529_;
}
else
{
lean_object* v_val_4550_; uint8_t v___x_4551_; 
v_val_4550_ = lean_ctor_get(v_a_4549_, 0);
lean_inc(v_val_4550_);
lean_dec_ref_known(v_a_4549_, 1);
v___x_4551_ = lean_nat_dec_eq(v_val_4550_, v___x_4474_);
lean_dec(v_val_4550_);
if (v___x_4551_ == 0)
{
lean_object* v___x_4552_; 
lean_inc_ref(v_cfg_4450_);
v___x_4552_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4450_, v_hOut_4452_, v_val_4528_, v_a_4526_, v_a_4470_, v___x_4482_, v___x_4538_, v_s_4453_, v_a_4454_);
lean_dec_ref_known(v___x_4538_, 1);
lean_dec(v_a_4526_);
v___y_4457_ = v___x_4552_;
goto v___jp_4456_;
}
else
{
lean_object* v___x_4553_; lean_object* v___x_4554_; 
lean_dec_ref_known(v___x_4538_, 1);
v___x_4553_ = lean_box(0);
lean_inc_ref(v_cfg_4450_);
v___x_4554_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_4450_, v_hOut_4452_, v_val_4528_, v_a_4526_, v_a_4470_, v___x_4482_, v___x_4553_, v_s_4453_, v_a_4454_);
lean_dec(v_a_4526_);
v___y_4457_ = v___x_4554_;
goto v___jp_4456_;
}
}
}
else
{
v___y_4536_ = v___x_4538_;
goto v___jp_4535_;
}
}
v___jp_4535_:
{
lean_object* v___x_4537_; 
lean_inc_ref(v_cfg_4450_);
v___x_4537_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4450_, v_hOut_4452_, v_val_4528_, v_a_4526_, v_a_4470_, v___x_4482_, v___y_4536_, v_s_4453_, v_a_4454_);
lean_dec_ref(v___y_4536_);
lean_dec(v_a_4526_);
v___y_4457_ = v___x_4537_;
goto v___jp_4456_;
}
}
v___jp_4529_:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4530_ = lean_box(0);
lean_inc_ref(v_cfg_4450_);
v___x_4531_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_4450_, v_hOut_4452_, v_val_4528_, v_a_4526_, v_a_4470_, v___x_4482_, v___x_4530_, v_s_4453_, v_a_4454_);
lean_dec(v_a_4526_);
v___y_4457_ = v___x_4531_;
goto v___jp_4456_;
}
}
else
{
lean_object* v_scope_4555_; lean_object* v_s_4556_; 
lean_dec(v___x_4527_);
lean_dec(v_a_4526_);
lean_dec(v_a_4470_);
v_scope_4555_ = lean_ctor_get(v_cfg_4450_, 0);
v_s_4556_ = lean_ctor_get(v_scope_4555_, 0);
lean_inc_ref(v_s_4556_);
v___y_4484_ = v_s_4556_;
goto v___jp_4483_;
}
}
}
v___jp_4483_:
{
lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; uint8_t v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v_numSuccesses_4492_; lean_object* v___x_4494_; uint8_t v_isShared_4495_; uint8_t v_isSharedCheck_4500_; 
v___x_4485_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__0));
v___x_4486_ = lean_string_append(v___y_4484_, v___x_4485_);
v___x_4487_ = l_String_Slice_toString(v___x_4477_);
lean_dec_ref(v___x_4477_);
v___x_4488_ = lean_string_append(v___x_4486_, v___x_4487_);
lean_dec_ref(v___x_4487_);
v___x_4489_ = 3;
v___x_4490_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4490_, 0, v___x_4488_);
lean_ctor_set_uint8(v___x_4490_, sizeof(void*)*1, v___x_4489_);
lean_inc_ref(v_a_4454_);
v___x_4491_ = lean_apply_2(v_a_4454_, v___x_4490_, lean_box(0));
v_numSuccesses_4492_ = lean_ctor_get(v_s_4453_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v_s_4453_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4494_ = v_s_4453_;
v_isShared_4495_ = v_isSharedCheck_4500_;
goto v_resetjp_4493_;
}
else
{
lean_inc(v_numSuccesses_4492_);
lean_dec(v_s_4453_);
v___x_4494_ = lean_box(0);
v_isShared_4495_ = v_isSharedCheck_4500_;
goto v_resetjp_4493_;
}
v_resetjp_4493_:
{
lean_object* v___x_4497_; 
if (v_isShared_4495_ == 0)
{
v___x_4497_ = v___x_4494_;
goto v_reusejp_4496_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_numSuccesses_4492_);
v___x_4497_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4496_;
}
v_reusejp_4496_:
{
lean_object* v___x_4498_; 
lean_ctor_set_uint8(v___x_4497_, sizeof(void*)*1, v___x_4482_);
v___x_4498_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(v_a_4454_, v_cfg_4450_, v_h_4451_, v_hOut_4452_, v___x_4497_);
return v___x_4498_;
}
}
}
v___jp_4501_:
{
lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; uint8_t v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v_numSuccesses_4512_; lean_object* v___x_4514_; uint8_t v_isShared_4515_; uint8_t v_isSharedCheck_4520_; 
v___x_4503_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__1));
v___x_4504_ = lean_string_append(v___x_4503_, v_a_4502_);
lean_dec_ref(v_a_4502_);
v___x_4505_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2));
v___x_4506_ = lean_string_append(v___x_4504_, v___x_4505_);
v___x_4507_ = l_String_Slice_toString(v___x_4477_);
lean_dec_ref(v___x_4477_);
v___x_4508_ = lean_string_append(v___x_4506_, v___x_4507_);
lean_dec_ref(v___x_4507_);
v___x_4509_ = 3;
v___x_4510_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4510_, 0, v___x_4508_);
lean_ctor_set_uint8(v___x_4510_, sizeof(void*)*1, v___x_4509_);
lean_inc_ref(v_a_4454_);
v___x_4511_ = lean_apply_2(v_a_4454_, v___x_4510_, lean_box(0));
v_numSuccesses_4512_ = lean_ctor_get(v_s_4453_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v_s_4453_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4514_ = v_s_4453_;
v_isShared_4515_ = v_isSharedCheck_4520_;
goto v_resetjp_4513_;
}
else
{
lean_inc(v_numSuccesses_4512_);
lean_dec(v_s_4453_);
v___x_4514_ = lean_box(0);
v_isShared_4515_ = v_isSharedCheck_4520_;
goto v_resetjp_4513_;
}
v_resetjp_4513_:
{
lean_object* v___x_4517_; 
if (v_isShared_4515_ == 0)
{
v___x_4517_ = v___x_4514_;
goto v_reusejp_4516_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_numSuccesses_4512_);
v___x_4517_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4516_;
}
v_reusejp_4516_:
{
lean_object* v___x_4518_; 
lean_ctor_set_uint8(v___x_4517_, sizeof(void*)*1, v___x_4482_);
v___x_4518_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(v_a_4454_, v_cfg_4450_, v_h_4451_, v_hOut_4452_, v___x_4517_);
return v___x_4518_;
}
}
}
}
else
{
lean_object* v___x_4558_; 
lean_dec_ref(v___x_4477_);
lean_dec(v_a_4470_);
lean_dec(v_hOut_4452_);
lean_dec_ref(v_cfg_4450_);
if (v_isShared_4473_ == 0)
{
lean_ctor_set(v___x_4472_, 0, v_s_4453_);
v___x_4558_ = v___x_4472_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4559_; 
v_reuseFailAlloc_4559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4559_, 0, v_s_4453_);
v___x_4558_ = v_reuseFailAlloc_4559_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
return v___x_4558_;
}
}
}
}
else
{
lean_object* v_a_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4573_; 
lean_dec_ref(v_s_4453_);
lean_dec(v_hOut_4452_);
lean_dec_ref(v_cfg_4450_);
v_a_4561_ = lean_ctor_get(v___x_4469_, 0);
v_isSharedCheck_4573_ = !lean_is_exclusive(v___x_4469_);
if (v_isSharedCheck_4573_ == 0)
{
v___x_4563_ = v___x_4469_;
v_isShared_4564_ = v_isSharedCheck_4573_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_a_4561_);
lean_dec(v___x_4469_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4573_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4565_; uint8_t v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4571_; 
v___x_4565_ = lean_io_error_to_string(v_a_4561_);
v___x_4566_ = 3;
v___x_4567_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4567_, 0, v___x_4565_);
lean_ctor_set_uint8(v___x_4567_, sizeof(void*)*1, v___x_4566_);
lean_inc_ref(v_a_4454_);
v___x_4568_ = lean_apply_2(v_a_4454_, v___x_4567_, lean_box(0));
v___x_4569_ = lean_box(0);
if (v_isShared_4564_ == 0)
{
lean_ctor_set(v___x_4563_, 0, v___x_4569_);
v___x_4571_ = v___x_4563_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v___x_4569_);
v___x_4571_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
return v___x_4571_;
}
}
}
v___jp_4456_:
{
if (lean_obj_tag(v___y_4457_) == 0)
{
lean_object* v_a_4458_; lean_object* v_snd_4459_; lean_object* v___x_4460_; 
v_a_4458_ = lean_ctor_get(v___y_4457_, 0);
lean_inc(v_a_4458_);
lean_dec_ref_known(v___y_4457_, 1);
v_snd_4459_ = lean_ctor_get(v_a_4458_, 1);
lean_inc(v_snd_4459_);
lean_dec(v_a_4458_);
v___x_4460_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0(v_a_4454_, v_cfg_4450_, v_h_4451_, v_hOut_4452_, v_snd_4459_);
return v___x_4460_;
}
else
{
lean_object* v_a_4461_; lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4468_; 
lean_dec(v_hOut_4452_);
lean_dec_ref(v_cfg_4450_);
v_a_4461_ = lean_ctor_get(v___y_4457_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v___y_4457_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4463_ = v___y_4457_;
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
else
{
lean_inc(v_a_4461_);
lean_dec(v___y_4457_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4466_; 
if (v_isShared_4464_ == 0)
{
v___x_4466_ = v___x_4463_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v_a_4461_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___boxed(lean_object* v_cfg_4574_, lean_object* v_h_4575_, lean_object* v_hOut_4576_, lean_object* v_s_4577_, lean_object* v_a_4578_, lean_object* v___y_4579_){
_start:
{
lean_object* v_res_4580_; 
v_res_4580_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_4574_, v_h_4575_, v_hOut_4576_, v_s_4577_, v_a_4578_);
lean_dec_ref(v_a_4578_);
lean_dec(v_h_4575_);
return v_res_4580_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(lean_object* v_snd_4581_, lean_object* v___y_4582_, lean_object* v_a_x3f_4583_){
_start:
{
lean_object* v___x_4585_; 
v___x_4585_ = lean_io_remove_file(v_snd_4581_);
if (lean_obj_tag(v___x_4585_) == 0)
{
lean_object* v_a_4586_; lean_object* v___x_4588_; uint8_t v_isShared_4589_; uint8_t v_isSharedCheck_4593_; 
v_a_4586_ = lean_ctor_get(v___x_4585_, 0);
v_isSharedCheck_4593_ = !lean_is_exclusive(v___x_4585_);
if (v_isSharedCheck_4593_ == 0)
{
v___x_4588_ = v___x_4585_;
v_isShared_4589_ = v_isSharedCheck_4593_;
goto v_resetjp_4587_;
}
else
{
lean_inc(v_a_4586_);
lean_dec(v___x_4585_);
v___x_4588_ = lean_box(0);
v_isShared_4589_ = v_isSharedCheck_4593_;
goto v_resetjp_4587_;
}
v_resetjp_4587_:
{
lean_object* v___x_4591_; 
if (v_isShared_4589_ == 0)
{
v___x_4591_ = v___x_4588_;
goto v_reusejp_4590_;
}
else
{
lean_object* v_reuseFailAlloc_4592_; 
v_reuseFailAlloc_4592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4592_, 0, v_a_4586_);
v___x_4591_ = v_reuseFailAlloc_4592_;
goto v_reusejp_4590_;
}
v_reusejp_4590_:
{
return v___x_4591_;
}
}
}
else
{
lean_object* v_a_4594_; lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4606_; 
v_a_4594_ = lean_ctor_get(v___x_4585_, 0);
v_isSharedCheck_4606_ = !lean_is_exclusive(v___x_4585_);
if (v_isSharedCheck_4606_ == 0)
{
v___x_4596_ = v___x_4585_;
v_isShared_4597_ = v_isSharedCheck_4606_;
goto v_resetjp_4595_;
}
else
{
lean_inc(v_a_4594_);
lean_dec(v___x_4585_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4606_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v___x_4598_; uint8_t v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4604_; 
v___x_4598_ = lean_io_error_to_string(v_a_4594_);
v___x_4599_ = 3;
v___x_4600_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4600_, 0, v___x_4598_);
lean_ctor_set_uint8(v___x_4600_, sizeof(void*)*1, v___x_4599_);
lean_inc_ref(v___y_4582_);
v___x_4601_ = lean_apply_2(v___y_4582_, v___x_4600_, lean_box(0));
v___x_4602_ = lean_box(0);
if (v_isShared_4597_ == 0)
{
lean_ctor_set(v___x_4596_, 0, v___x_4602_);
v___x_4604_ = v___x_4596_;
goto v_reusejp_4603_;
}
else
{
lean_object* v_reuseFailAlloc_4605_; 
v_reuseFailAlloc_4605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4605_, 0, v___x_4602_);
v___x_4604_ = v_reuseFailAlloc_4605_;
goto v_reusejp_4603_;
}
v_reusejp_4603_:
{
return v___x_4604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0___boxed(lean_object* v_snd_4607_, lean_object* v___y_4608_, lean_object* v_a_x3f_4609_, lean_object* v___y_4610_){
_start:
{
lean_object* v_res_4611_; 
v_res_4611_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4607_, v___y_4608_, v_a_x3f_4609_);
lean_dec(v_a_x3f_4609_);
lean_dec_ref(v___y_4608_);
lean_dec_ref(v_snd_4607_);
return v_res_4611_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(lean_object* v_f_4612_, lean_object* v___y_4613_){
_start:
{
lean_object* v___x_4615_; 
v___x_4615_ = lean_io_create_tempfile();
if (lean_obj_tag(v___x_4615_) == 0)
{
lean_object* v_a_4616_; lean_object* v_fst_4617_; lean_object* v_snd_4618_; lean_object* v_r_4619_; 
v_a_4616_ = lean_ctor_get(v___x_4615_, 0);
lean_inc(v_a_4616_);
lean_dec_ref_known(v___x_4615_, 1);
v_fst_4617_ = lean_ctor_get(v_a_4616_, 0);
lean_inc(v_fst_4617_);
v_snd_4618_ = lean_ctor_get(v_a_4616_, 1);
lean_inc_n(v_snd_4618_, 2);
lean_dec(v_a_4616_);
lean_inc_ref(v___y_4613_);
v_r_4619_ = lean_apply_4(v_f_4612_, v_fst_4617_, v_snd_4618_, v___y_4613_, lean_box(0));
if (lean_obj_tag(v_r_4619_) == 0)
{
lean_object* v_a_4620_; lean_object* v___x_4622_; uint8_t v_isShared_4623_; uint8_t v_isSharedCheck_4644_; 
v_a_4620_ = lean_ctor_get(v_r_4619_, 0);
v_isSharedCheck_4644_ = !lean_is_exclusive(v_r_4619_);
if (v_isSharedCheck_4644_ == 0)
{
v___x_4622_ = v_r_4619_;
v_isShared_4623_ = v_isSharedCheck_4644_;
goto v_resetjp_4621_;
}
else
{
lean_inc(v_a_4620_);
lean_dec(v_r_4619_);
v___x_4622_ = lean_box(0);
v_isShared_4623_ = v_isSharedCheck_4644_;
goto v_resetjp_4621_;
}
v_resetjp_4621_:
{
lean_object* v___x_4625_; 
lean_inc(v_a_4620_);
if (v_isShared_4623_ == 0)
{
lean_ctor_set_tag(v___x_4622_, 1);
v___x_4625_ = v___x_4622_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4643_; 
v_reuseFailAlloc_4643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4643_, 0, v_a_4620_);
v___x_4625_ = v_reuseFailAlloc_4643_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
lean_object* v___x_4626_; 
v___x_4626_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4618_, v___y_4613_, v___x_4625_);
lean_dec_ref(v___x_4625_);
lean_dec(v_snd_4618_);
if (lean_obj_tag(v___x_4626_) == 0)
{
lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4633_; 
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4626_);
if (v_isSharedCheck_4633_ == 0)
{
lean_object* v_unused_4634_; 
v_unused_4634_ = lean_ctor_get(v___x_4626_, 0);
lean_dec(v_unused_4634_);
v___x_4628_ = v___x_4626_;
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
else
{
lean_dec(v___x_4626_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4631_; 
if (v_isShared_4629_ == 0)
{
lean_ctor_set(v___x_4628_, 0, v_a_4620_);
v___x_4631_ = v___x_4628_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v_a_4620_);
v___x_4631_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
return v___x_4631_;
}
}
}
else
{
lean_object* v_a_4635_; lean_object* v___x_4637_; uint8_t v_isShared_4638_; uint8_t v_isSharedCheck_4642_; 
lean_dec(v_a_4620_);
v_a_4635_ = lean_ctor_get(v___x_4626_, 0);
v_isSharedCheck_4642_ = !lean_is_exclusive(v___x_4626_);
if (v_isSharedCheck_4642_ == 0)
{
v___x_4637_ = v___x_4626_;
v_isShared_4638_ = v_isSharedCheck_4642_;
goto v_resetjp_4636_;
}
else
{
lean_inc(v_a_4635_);
lean_dec(v___x_4626_);
v___x_4637_ = lean_box(0);
v_isShared_4638_ = v_isSharedCheck_4642_;
goto v_resetjp_4636_;
}
v_resetjp_4636_:
{
lean_object* v___x_4640_; 
if (v_isShared_4638_ == 0)
{
v___x_4640_ = v___x_4637_;
goto v_reusejp_4639_;
}
else
{
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v_a_4635_);
v___x_4640_ = v_reuseFailAlloc_4641_;
goto v_reusejp_4639_;
}
v_reusejp_4639_:
{
return v___x_4640_;
}
}
}
}
}
}
else
{
lean_object* v_a_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; 
v_a_4645_ = lean_ctor_get(v_r_4619_, 0);
lean_inc(v_a_4645_);
lean_dec_ref_known(v_r_4619_, 1);
v___x_4646_ = lean_box(0);
v___x_4647_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4618_, v___y_4613_, v___x_4646_);
lean_dec(v_snd_4618_);
if (lean_obj_tag(v___x_4647_) == 0)
{
lean_object* v___x_4649_; uint8_t v_isShared_4650_; uint8_t v_isSharedCheck_4654_; 
v_isSharedCheck_4654_ = !lean_is_exclusive(v___x_4647_);
if (v_isSharedCheck_4654_ == 0)
{
lean_object* v_unused_4655_; 
v_unused_4655_ = lean_ctor_get(v___x_4647_, 0);
lean_dec(v_unused_4655_);
v___x_4649_ = v___x_4647_;
v_isShared_4650_ = v_isSharedCheck_4654_;
goto v_resetjp_4648_;
}
else
{
lean_dec(v___x_4647_);
v___x_4649_ = lean_box(0);
v_isShared_4650_ = v_isSharedCheck_4654_;
goto v_resetjp_4648_;
}
v_resetjp_4648_:
{
lean_object* v___x_4652_; 
if (v_isShared_4650_ == 0)
{
lean_ctor_set_tag(v___x_4649_, 1);
lean_ctor_set(v___x_4649_, 0, v_a_4645_);
v___x_4652_ = v___x_4649_;
goto v_reusejp_4651_;
}
else
{
lean_object* v_reuseFailAlloc_4653_; 
v_reuseFailAlloc_4653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4653_, 0, v_a_4645_);
v___x_4652_ = v_reuseFailAlloc_4653_;
goto v_reusejp_4651_;
}
v_reusejp_4651_:
{
return v___x_4652_;
}
}
}
else
{
lean_object* v_a_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4663_; 
lean_dec(v_a_4645_);
v_a_4656_ = lean_ctor_get(v___x_4647_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v___x_4647_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4658_ = v___x_4647_;
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_a_4656_);
lean_dec(v___x_4647_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v___x_4661_; 
if (v_isShared_4659_ == 0)
{
v___x_4661_ = v___x_4658_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_a_4656_);
v___x_4661_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
return v___x_4661_;
}
}
}
}
}
else
{
lean_object* v_a_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4676_; 
lean_dec_ref(v_f_4612_);
v_a_4664_ = lean_ctor_get(v___x_4615_, 0);
v_isSharedCheck_4676_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4676_ == 0)
{
v___x_4666_ = v___x_4615_;
v_isShared_4667_ = v_isSharedCheck_4676_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_a_4664_);
lean_dec(v___x_4615_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4676_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4668_; uint8_t v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4674_; 
v___x_4668_ = lean_io_error_to_string(v_a_4664_);
v___x_4669_ = 3;
v___x_4670_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4670_, 0, v___x_4668_);
lean_ctor_set_uint8(v___x_4670_, sizeof(void*)*1, v___x_4669_);
lean_inc_ref(v___y_4613_);
v___x_4671_ = lean_apply_2(v___y_4613_, v___x_4670_, lean_box(0));
v___x_4672_ = lean_box(0);
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 0, v___x_4672_);
v___x_4674_ = v___x_4666_;
goto v_reusejp_4673_;
}
else
{
lean_object* v_reuseFailAlloc_4675_; 
v_reuseFailAlloc_4675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4675_, 0, v___x_4672_);
v___x_4674_ = v_reuseFailAlloc_4675_;
goto v_reusejp_4673_;
}
v_reusejp_4673_:
{
return v___x_4674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___boxed(lean_object* v_f_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_){
_start:
{
lean_object* v_res_4680_; 
v_res_4680_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v_f_4677_, v___y_4678_);
lean_dec_ref(v___y_4678_);
return v_res_4680_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2(lean_object* v_00_u03b1_4681_, lean_object* v_f_4682_, lean_object* v___y_4683_){
_start:
{
lean_object* v___x_4685_; 
v___x_4685_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v_f_4682_, v___y_4683_);
return v___x_4685_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___boxed(lean_object* v_00_u03b1_4686_, lean_object* v_f_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_){
_start:
{
lean_object* v_res_4690_; 
v_res_4690_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2(v_00_u03b1_4686_, v_f_4687_, v___y_4688_);
lean_dec_ref(v___y_4688_);
return v_res_4690_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(lean_object* v_h_4693_, lean_object* v_as_4694_, size_t v_i_4695_, size_t v_stop_4696_, lean_object* v_b_4697_, lean_object* v___y_4698_){
_start:
{
uint8_t v___x_4700_; 
v___x_4700_ = lean_usize_dec_eq(v_i_4695_, v_stop_4696_);
if (v___x_4700_ == 0)
{
lean_object* v___x_4701_; lean_object* v_url_4702_; lean_object* v_path_4703_; lean_object* v___x_4704_; lean_object* v_tmpPath_4705_; lean_object* v___x_4706_; 
v___x_4701_ = lean_array_uget_borrowed(v_as_4694_, v_i_4695_);
v_url_4702_ = lean_ctor_get(v___x_4701_, 0);
v_path_4703_ = lean_ctor_get(v___x_4701_, 1);
v___x_4704_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
lean_inc_ref(v_path_4703_);
v_tmpPath_4705_ = l_System_FilePath_addExtension(v_path_4703_, v___x_4704_);
v___x_4706_ = l_Lake_removeFileIfExists(v_tmpPath_4705_);
if (lean_obj_tag(v___x_4706_) == 0)
{
lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; 
lean_dec_ref_known(v___x_4706_, 1);
v___x_4707_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0));
lean_inc_ref(v_url_4702_);
v___x_4708_ = l_String_quote(v_url_4702_);
v___x_4709_ = lean_string_append(v___x_4707_, v___x_4708_);
lean_dec_ref(v___x_4708_);
v___x_4710_ = l_IO_FS_Handle_putStrLn(v_h_4693_, v___x_4709_);
if (lean_obj_tag(v___x_4710_) == 0)
{
lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; 
lean_dec_ref_known(v___x_4710_, 1);
v___x_4711_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__1));
v___x_4712_ = l_String_quote(v_tmpPath_4705_);
v___x_4713_ = lean_string_append(v___x_4711_, v___x_4712_);
lean_dec_ref(v___x_4712_);
v___x_4714_ = l_IO_FS_Handle_putStrLn(v_h_4693_, v___x_4713_);
if (lean_obj_tag(v___x_4714_) == 0)
{
lean_object* v_a_4715_; size_t v___x_4716_; size_t v___x_4717_; 
v_a_4715_ = lean_ctor_get(v___x_4714_, 0);
lean_inc(v_a_4715_);
lean_dec_ref_known(v___x_4714_, 1);
v___x_4716_ = ((size_t)1ULL);
v___x_4717_ = lean_usize_add(v_i_4695_, v___x_4716_);
v_i_4695_ = v___x_4717_;
v_b_4697_ = v_a_4715_;
goto _start;
}
else
{
lean_object* v_a_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4731_; 
v_a_4719_ = lean_ctor_get(v___x_4714_, 0);
v_isSharedCheck_4731_ = !lean_is_exclusive(v___x_4714_);
if (v_isSharedCheck_4731_ == 0)
{
v___x_4721_ = v___x_4714_;
v_isShared_4722_ = v_isSharedCheck_4731_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_a_4719_);
lean_dec(v___x_4714_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4731_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4723_; uint8_t v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4729_; 
v___x_4723_ = lean_io_error_to_string(v_a_4719_);
v___x_4724_ = 3;
v___x_4725_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4725_, 0, v___x_4723_);
lean_ctor_set_uint8(v___x_4725_, sizeof(void*)*1, v___x_4724_);
lean_inc_ref(v___y_4698_);
v___x_4726_ = lean_apply_2(v___y_4698_, v___x_4725_, lean_box(0));
v___x_4727_ = lean_box(0);
if (v_isShared_4722_ == 0)
{
lean_ctor_set(v___x_4721_, 0, v___x_4727_);
v___x_4729_ = v___x_4721_;
goto v_reusejp_4728_;
}
else
{
lean_object* v_reuseFailAlloc_4730_; 
v_reuseFailAlloc_4730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4730_, 0, v___x_4727_);
v___x_4729_ = v_reuseFailAlloc_4730_;
goto v_reusejp_4728_;
}
v_reusejp_4728_:
{
return v___x_4729_;
}
}
}
}
else
{
lean_object* v_a_4732_; lean_object* v___x_4734_; uint8_t v_isShared_4735_; uint8_t v_isSharedCheck_4744_; 
lean_dec_ref(v_tmpPath_4705_);
v_a_4732_ = lean_ctor_get(v___x_4710_, 0);
v_isSharedCheck_4744_ = !lean_is_exclusive(v___x_4710_);
if (v_isSharedCheck_4744_ == 0)
{
v___x_4734_ = v___x_4710_;
v_isShared_4735_ = v_isSharedCheck_4744_;
goto v_resetjp_4733_;
}
else
{
lean_inc(v_a_4732_);
lean_dec(v___x_4710_);
v___x_4734_ = lean_box(0);
v_isShared_4735_ = v_isSharedCheck_4744_;
goto v_resetjp_4733_;
}
v_resetjp_4733_:
{
lean_object* v___x_4736_; uint8_t v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4742_; 
v___x_4736_ = lean_io_error_to_string(v_a_4732_);
v___x_4737_ = 3;
v___x_4738_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4738_, 0, v___x_4736_);
lean_ctor_set_uint8(v___x_4738_, sizeof(void*)*1, v___x_4737_);
lean_inc_ref(v___y_4698_);
v___x_4739_ = lean_apply_2(v___y_4698_, v___x_4738_, lean_box(0));
v___x_4740_ = lean_box(0);
if (v_isShared_4735_ == 0)
{
lean_ctor_set(v___x_4734_, 0, v___x_4740_);
v___x_4742_ = v___x_4734_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v___x_4740_);
v___x_4742_ = v_reuseFailAlloc_4743_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
return v___x_4742_;
}
}
}
}
else
{
lean_object* v_a_4745_; lean_object* v___x_4747_; uint8_t v_isShared_4748_; uint8_t v_isSharedCheck_4757_; 
lean_dec_ref(v_tmpPath_4705_);
v_a_4745_ = lean_ctor_get(v___x_4706_, 0);
v_isSharedCheck_4757_ = !lean_is_exclusive(v___x_4706_);
if (v_isSharedCheck_4757_ == 0)
{
v___x_4747_ = v___x_4706_;
v_isShared_4748_ = v_isSharedCheck_4757_;
goto v_resetjp_4746_;
}
else
{
lean_inc(v_a_4745_);
lean_dec(v___x_4706_);
v___x_4747_ = lean_box(0);
v_isShared_4748_ = v_isSharedCheck_4757_;
goto v_resetjp_4746_;
}
v_resetjp_4746_:
{
lean_object* v___x_4749_; uint8_t v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4755_; 
v___x_4749_ = lean_io_error_to_string(v_a_4745_);
v___x_4750_ = 3;
v___x_4751_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4751_, 0, v___x_4749_);
lean_ctor_set_uint8(v___x_4751_, sizeof(void*)*1, v___x_4750_);
lean_inc_ref(v___y_4698_);
v___x_4752_ = lean_apply_2(v___y_4698_, v___x_4751_, lean_box(0));
v___x_4753_ = lean_box(0);
if (v_isShared_4748_ == 0)
{
lean_ctor_set(v___x_4747_, 0, v___x_4753_);
v___x_4755_ = v___x_4747_;
goto v_reusejp_4754_;
}
else
{
lean_object* v_reuseFailAlloc_4756_; 
v_reuseFailAlloc_4756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4756_, 0, v___x_4753_);
v___x_4755_ = v_reuseFailAlloc_4756_;
goto v_reusejp_4754_;
}
v_reusejp_4754_:
{
return v___x_4755_;
}
}
}
}
else
{
lean_object* v___x_4758_; 
v___x_4758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4758_, 0, v_b_4697_);
return v___x_4758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___boxed(lean_object* v_h_4759_, lean_object* v_as_4760_, lean_object* v_i_4761_, lean_object* v_stop_4762_, lean_object* v_b_4763_, lean_object* v___y_4764_, lean_object* v___y_4765_){
_start:
{
size_t v_i_boxed_4766_; size_t v_stop_boxed_4767_; lean_object* v_res_4768_; 
v_i_boxed_4766_ = lean_unbox_usize(v_i_4761_);
lean_dec(v_i_4761_);
v_stop_boxed_4767_ = lean_unbox_usize(v_stop_4762_);
lean_dec(v_stop_4762_);
v_res_4768_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4759_, v_as_4760_, v_i_boxed_4766_, v_stop_boxed_4767_, v_b_4763_, v___y_4764_);
lean_dec_ref(v___y_4764_);
lean_dec_ref(v_as_4760_);
lean_dec(v_h_4759_);
return v_res_4768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(lean_object* v_h_4770_, lean_object* v_as_4771_, size_t v_i_4772_, size_t v_stop_4773_, lean_object* v_b_4774_, lean_object* v___y_4775_){
_start:
{
uint8_t v___x_4777_; 
v___x_4777_ = lean_usize_dec_eq(v_i_4772_, v_stop_4773_);
if (v___x_4777_ == 0)
{
lean_object* v___x_4778_; lean_object* v_url_4779_; lean_object* v_path_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; 
v___x_4778_ = lean_array_uget_borrowed(v_as_4771_, v_i_4772_);
v_url_4779_ = lean_ctor_get(v___x_4778_, 0);
v_path_4780_ = lean_ctor_get(v___x_4778_, 1);
v___x_4781_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___closed__0));
lean_inc_ref(v_path_4780_);
v___x_4782_ = l_String_quote(v_path_4780_);
v___x_4783_ = lean_string_append(v___x_4781_, v___x_4782_);
lean_dec_ref(v___x_4782_);
v___x_4784_ = l_IO_FS_Handle_putStrLn(v_h_4770_, v___x_4783_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; 
lean_dec_ref_known(v___x_4784_, 1);
v___x_4785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0));
lean_inc_ref(v_url_4779_);
v___x_4786_ = l_String_quote(v_url_4779_);
v___x_4787_ = lean_string_append(v___x_4785_, v___x_4786_);
lean_dec_ref(v___x_4786_);
v___x_4788_ = l_IO_FS_Handle_putStrLn(v_h_4770_, v___x_4787_);
if (lean_obj_tag(v___x_4788_) == 0)
{
lean_object* v_a_4789_; size_t v___x_4790_; size_t v___x_4791_; 
v_a_4789_ = lean_ctor_get(v___x_4788_, 0);
lean_inc(v_a_4789_);
lean_dec_ref_known(v___x_4788_, 1);
v___x_4790_ = ((size_t)1ULL);
v___x_4791_ = lean_usize_add(v_i_4772_, v___x_4790_);
v_i_4772_ = v___x_4791_;
v_b_4774_ = v_a_4789_;
goto _start;
}
else
{
lean_object* v_a_4793_; lean_object* v___x_4795_; uint8_t v_isShared_4796_; uint8_t v_isSharedCheck_4805_; 
v_a_4793_ = lean_ctor_get(v___x_4788_, 0);
v_isSharedCheck_4805_ = !lean_is_exclusive(v___x_4788_);
if (v_isSharedCheck_4805_ == 0)
{
v___x_4795_ = v___x_4788_;
v_isShared_4796_ = v_isSharedCheck_4805_;
goto v_resetjp_4794_;
}
else
{
lean_inc(v_a_4793_);
lean_dec(v___x_4788_);
v___x_4795_ = lean_box(0);
v_isShared_4796_ = v_isSharedCheck_4805_;
goto v_resetjp_4794_;
}
v_resetjp_4794_:
{
lean_object* v___x_4797_; uint8_t v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4803_; 
v___x_4797_ = lean_io_error_to_string(v_a_4793_);
v___x_4798_ = 3;
v___x_4799_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4799_, 0, v___x_4797_);
lean_ctor_set_uint8(v___x_4799_, sizeof(void*)*1, v___x_4798_);
lean_inc_ref(v___y_4775_);
v___x_4800_ = lean_apply_2(v___y_4775_, v___x_4799_, lean_box(0));
v___x_4801_ = lean_box(0);
if (v_isShared_4796_ == 0)
{
lean_ctor_set(v___x_4795_, 0, v___x_4801_);
v___x_4803_ = v___x_4795_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v___x_4801_);
v___x_4803_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
return v___x_4803_;
}
}
}
}
else
{
lean_object* v_a_4806_; lean_object* v___x_4808_; uint8_t v_isShared_4809_; uint8_t v_isSharedCheck_4818_; 
v_a_4806_ = lean_ctor_get(v___x_4784_, 0);
v_isSharedCheck_4818_ = !lean_is_exclusive(v___x_4784_);
if (v_isSharedCheck_4818_ == 0)
{
v___x_4808_ = v___x_4784_;
v_isShared_4809_ = v_isSharedCheck_4818_;
goto v_resetjp_4807_;
}
else
{
lean_inc(v_a_4806_);
lean_dec(v___x_4784_);
v___x_4808_ = lean_box(0);
v_isShared_4809_ = v_isSharedCheck_4818_;
goto v_resetjp_4807_;
}
v_resetjp_4807_:
{
lean_object* v___x_4810_; uint8_t v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4816_; 
v___x_4810_ = lean_io_error_to_string(v_a_4806_);
v___x_4811_ = 3;
v___x_4812_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4812_, 0, v___x_4810_);
lean_ctor_set_uint8(v___x_4812_, sizeof(void*)*1, v___x_4811_);
lean_inc_ref(v___y_4775_);
v___x_4813_ = lean_apply_2(v___y_4775_, v___x_4812_, lean_box(0));
v___x_4814_ = lean_box(0);
if (v_isShared_4809_ == 0)
{
lean_ctor_set(v___x_4808_, 0, v___x_4814_);
v___x_4816_ = v___x_4808_;
goto v_reusejp_4815_;
}
else
{
lean_object* v_reuseFailAlloc_4817_; 
v_reuseFailAlloc_4817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4817_, 0, v___x_4814_);
v___x_4816_ = v_reuseFailAlloc_4817_;
goto v_reusejp_4815_;
}
v_reusejp_4815_:
{
return v___x_4816_;
}
}
}
}
else
{
lean_object* v___x_4819_; 
v___x_4819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4819_, 0, v_b_4774_);
return v___x_4819_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___boxed(lean_object* v_h_4820_, lean_object* v_as_4821_, lean_object* v_i_4822_, lean_object* v_stop_4823_, lean_object* v_b_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_){
_start:
{
size_t v_i_boxed_4827_; size_t v_stop_boxed_4828_; lean_object* v_res_4829_; 
v_i_boxed_4827_ = lean_unbox_usize(v_i_4822_);
lean_dec(v_i_4822_);
v_stop_boxed_4828_ = lean_unbox_usize(v_stop_4823_);
lean_dec(v_stop_4823_);
v_res_4829_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4820_, v_as_4821_, v_i_boxed_4827_, v_stop_boxed_4828_, v_b_4824_, v___y_4825_);
lean_dec_ref(v___y_4825_);
lean_dec_ref(v_as_4821_);
lean_dec(v_h_4820_);
return v_res_4829_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11(void){
_start:
{
lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; 
v___x_4845_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5));
v___x_4846_ = lean_unsigned_to_nat(11u);
v___x_4847_ = lean_mk_empty_array_with_capacity(v___x_4846_);
v___x_4848_ = lean_array_push(v___x_4847_, v___x_4845_);
return v___x_4848_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12(void){
_start:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; 
v___x_4849_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_4850_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11);
v___x_4851_ = lean_array_push(v___x_4850_, v___x_4849_);
return v___x_4851_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13(void){
_start:
{
lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; 
v___x_4852_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__6));
v___x_4853_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12);
v___x_4854_ = lean_array_push(v___x_4853_, v___x_4852_);
return v___x_4854_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14(void){
_start:
{
lean_object* v___x_4855_; lean_object* v___x_4856_; lean_object* v___x_4857_; 
v___x_4855_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_4856_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13);
v___x_4857_ = lean_array_push(v___x_4856_, v___x_4855_);
return v___x_4857_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15(void){
_start:
{
lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; 
v___x_4858_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_4859_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14);
v___x_4860_ = lean_array_push(v___x_4859_, v___x_4858_);
return v___x_4860_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16(void){
_start:
{
lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; 
v___x_4861_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_4862_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15);
v___x_4863_ = lean_array_push(v___x_4862_, v___x_4861_);
return v___x_4863_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17(void){
_start:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; 
v___x_4864_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_4865_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16);
v___x_4866_ = lean_array_push(v___x_4865_, v___x_4864_);
return v___x_4866_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18(void){
_start:
{
lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4867_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_4868_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17);
v___x_4869_ = lean_array_push(v___x_4868_, v___x_4867_);
return v___x_4869_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19(void){
_start:
{
lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; 
v___x_4870_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_4871_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18);
v___x_4872_ = lean_array_push(v___x_4871_, v___x_4870_);
return v___x_4872_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20(void){
_start:
{
lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; 
v___x_4873_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10));
v___x_4874_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19);
v___x_4875_ = lean_array_push(v___x_4874_, v___x_4873_);
return v___x_4875_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22(void){
_start:
{
lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; 
v___x_4877_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5));
v___x_4878_ = lean_unsigned_to_nat(17u);
v___x_4879_ = lean_mk_empty_array_with_capacity(v___x_4878_);
v___x_4880_ = lean_array_push(v___x_4879_, v___x_4877_);
return v___x_4880_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23(void){
_start:
{
lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; 
v___x_4881_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_4882_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22);
v___x_4883_ = lean_array_push(v___x_4882_, v___x_4881_);
return v___x_4883_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24(void){
_start:
{
lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; 
v___x_4884_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_4885_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23);
v___x_4886_ = lean_array_push(v___x_4885_, v___x_4884_);
return v___x_4886_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25(void){
_start:
{
lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; 
v___x_4887_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_4888_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24);
v___x_4889_ = lean_array_push(v___x_4888_, v___x_4887_);
return v___x_4889_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26(void){
_start:
{
lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; 
v___x_4890_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_4891_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25);
v___x_4892_ = lean_array_push(v___x_4891_, v___x_4890_);
return v___x_4892_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27(void){
_start:
{
lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; 
v___x_4893_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__21));
v___x_4894_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26);
v___x_4895_ = lean_array_push(v___x_4894_, v___x_4893_);
return v___x_4895_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28(void){
_start:
{
lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; 
v___x_4896_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_4897_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27);
v___x_4898_ = lean_array_push(v___x_4897_, v___x_4896_);
return v___x_4898_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29(void){
_start:
{
lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; 
v___x_4899_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_4900_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28);
v___x_4901_ = lean_array_push(v___x_4900_, v___x_4899_);
return v___x_4901_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30(void){
_start:
{
lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; 
v___x_4902_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13));
v___x_4903_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29);
v___x_4904_ = lean_array_push(v___x_4903_, v___x_4902_);
return v___x_4904_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31(void){
_start:
{
lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; 
v___x_4905_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14));
v___x_4906_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30);
v___x_4907_ = lean_array_push(v___x_4906_, v___x_4905_);
return v___x_4907_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32(void){
_start:
{
lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; 
v___x_4908_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15));
v___x_4909_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31);
v___x_4910_ = lean_array_push(v___x_4909_, v___x_4908_);
return v___x_4910_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0(lean_object* v_cfg_4911_, lean_object* v_h_4912_, lean_object* v_path_4913_, lean_object* v___y_4914_){
_start:
{
uint32_t v___y_4920_; lean_object* v___y_4921_; lean_object* v___y_4922_; uint8_t v_kind_4931_; lean_object* v_scope_4932_; lean_object* v_infos_4933_; lean_object* v_key_4934_; uint8_t v___y_4936_; uint32_t v___y_4937_; lean_object* v___y_4938_; lean_object* v___y_4945_; uint8_t v___y_4946_; lean_object* v___y_4947_; lean_object* v___y_4948_; uint32_t v___y_4949_; lean_object* v___y_4950_; lean_object* v___y_4951_; lean_object* v___y_4963_; uint32_t v___y_4964_; lean_object* v___y_4965_; uint8_t v_didError_4966_; lean_object* v___y_4967_; lean_object* v___y_4972_; lean_object* v___y_4973_; uint8_t v___y_4974_; uint32_t v___y_4975_; lean_object* v___y_4976_; lean_object* v___y_4977_; lean_object* v___y_4987_; uint8_t v___y_4988_; uint32_t v___y_4989_; lean_object* v___y_4990_; lean_object* v___y_4991_; lean_object* v___y_4994_; lean_object* v_a_4995_; lean_object* v___y_5071_; lean_object* v___y_5072_; lean_object* v___y_5073_; lean_object* v_val_5074_; lean_object* v_a_5082_; lean_object* v___y_5107_; lean_object* v___y_5135_; 
v_kind_4931_ = lean_ctor_get_uint8(v_cfg_4911_, sizeof(void*)*3);
v_scope_4932_ = lean_ctor_get(v_cfg_4911_, 0);
lean_inc_ref(v_scope_4932_);
v_infos_4933_ = lean_ctor_get(v_cfg_4911_, 1);
lean_inc_ref(v_infos_4933_);
v_key_4934_ = lean_ctor_get(v_cfg_4911_, 2);
if (v_kind_4931_ == 0)
{
lean_object* v___x_5136_; lean_object* v___x_5137_; uint8_t v___x_5138_; 
v___x_5136_ = lean_unsigned_to_nat(0u);
v___x_5137_ = lean_array_get_size(v_infos_4933_);
v___x_5138_ = lean_nat_dec_lt(v___x_5136_, v___x_5137_);
if (v___x_5138_ == 0)
{
goto v___jp_5089_;
}
else
{
lean_object* v___x_5139_; uint8_t v___x_5140_; 
v___x_5139_ = lean_box(0);
v___x_5140_ = lean_nat_dec_le(v___x_5137_, v___x_5137_);
if (v___x_5140_ == 0)
{
if (v___x_5138_ == 0)
{
goto v___jp_5089_;
}
else
{
size_t v___x_5141_; size_t v___x_5142_; lean_object* v___x_5143_; 
v___x_5141_ = ((size_t)0ULL);
v___x_5142_ = lean_usize_of_nat(v___x_5137_);
v___x_5143_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4912_, v_infos_4933_, v___x_5141_, v___x_5142_, v___x_5139_, v___y_4914_);
v___y_5107_ = v___x_5143_;
goto v___jp_5106_;
}
}
else
{
size_t v___x_5144_; size_t v___x_5145_; lean_object* v___x_5146_; 
v___x_5144_ = ((size_t)0ULL);
v___x_5145_ = lean_usize_of_nat(v___x_5137_);
v___x_5146_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4912_, v_infos_4933_, v___x_5144_, v___x_5145_, v___x_5139_, v___y_4914_);
v___y_5107_ = v___x_5146_;
goto v___jp_5106_;
}
}
}
else
{
lean_object* v___x_5147_; lean_object* v___x_5148_; uint8_t v___x_5149_; 
v___x_5147_ = lean_unsigned_to_nat(0u);
v___x_5148_ = lean_array_get_size(v_infos_4933_);
v___x_5149_ = lean_nat_dec_lt(v___x_5147_, v___x_5148_);
if (v___x_5149_ == 0)
{
goto v___jp_5108_;
}
else
{
lean_object* v___x_5150_; uint8_t v___x_5151_; 
v___x_5150_ = lean_box(0);
v___x_5151_ = lean_nat_dec_le(v___x_5148_, v___x_5148_);
if (v___x_5151_ == 0)
{
if (v___x_5149_ == 0)
{
goto v___jp_5108_;
}
else
{
size_t v___x_5152_; size_t v___x_5153_; lean_object* v___x_5154_; 
v___x_5152_ = ((size_t)0ULL);
v___x_5153_ = lean_usize_of_nat(v___x_5148_);
v___x_5154_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4912_, v_infos_4933_, v___x_5152_, v___x_5153_, v___x_5150_, v___y_4914_);
v___y_5135_ = v___x_5154_;
goto v___jp_5134_;
}
}
else
{
size_t v___x_5155_; size_t v___x_5156_; lean_object* v___x_5157_; 
v___x_5155_ = ((size_t)0ULL);
v___x_5156_ = lean_usize_of_nat(v___x_5148_);
v___x_5157_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4912_, v_infos_4933_, v___x_5155_, v___x_5156_, v___x_5150_, v___y_4914_);
v___y_5135_ = v___x_5157_;
goto v___jp_5134_;
}
}
}
v___jp_4916_:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; 
v___x_4917_ = lean_box(0);
v___x_4918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4918_, 0, v___x_4917_);
return v___x_4918_;
}
v___jp_4919_:
{
lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; uint8_t v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; 
v___x_4923_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0));
v___x_4924_ = lean_string_append(v___y_4922_, v___x_4923_);
v___x_4925_ = lean_uint32_to_nat(v___y_4920_);
v___x_4926_ = l_Nat_reprFast(v___x_4925_);
v___x_4927_ = lean_string_append(v___x_4924_, v___x_4926_);
lean_dec_ref(v___x_4926_);
v___x_4928_ = 3;
v___x_4929_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4929_, 0, v___x_4927_);
lean_ctor_set_uint8(v___x_4929_, sizeof(void*)*1, v___x_4928_);
lean_inc_ref(v___y_4921_);
v___x_4930_ = lean_apply_2(v___y_4921_, v___x_4929_, lean_box(0));
goto v___jp_4916_;
}
v___jp_4935_:
{
uint32_t v___x_4939_; uint8_t v___x_4940_; 
v___x_4939_ = 0;
v___x_4940_ = lean_uint32_dec_eq(v___y_4937_, v___x_4939_);
if (v___x_4940_ == 0)
{
lean_object* v_s_4941_; 
v_s_4941_ = lean_ctor_get(v_scope_4932_, 0);
lean_inc_ref(v_s_4941_);
lean_dec_ref(v_scope_4932_);
v___y_4920_ = v___y_4937_;
v___y_4921_ = v___y_4938_;
v___y_4922_ = v_s_4941_;
goto v___jp_4919_;
}
else
{
lean_dec_ref(v_scope_4932_);
if (v___y_4936_ == 0)
{
lean_object* v___x_4942_; lean_object* v___x_4943_; 
v___x_4942_ = lean_box(0);
v___x_4943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4943_, 0, v___x_4942_);
return v___x_4943_;
}
else
{
goto v___jp_4916_;
}
}
}
v___jp_4944_:
{
lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; uint8_t v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; 
v___x_4952_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1));
v___x_4953_ = lean_string_append(v___y_4951_, v___x_4952_);
lean_inc(v___y_4948_);
lean_inc(v___y_4945_);
lean_inc_ref(v___y_4950_);
v___x_4954_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4954_, 0, v___y_4950_);
lean_ctor_set(v___x_4954_, 1, v___y_4945_);
lean_ctor_set(v___x_4954_, 2, v___y_4948_);
v___x_4955_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_4954_, v___y_4948_);
lean_dec_ref_known(v___x_4954_, 3);
v___x_4956_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4956_, 0, v___y_4950_);
lean_ctor_set(v___x_4956_, 1, v___y_4945_);
lean_ctor_set(v___x_4956_, 2, v___x_4955_);
v___x_4957_ = l_String_Slice_toString(v___x_4956_);
lean_dec_ref_known(v___x_4956_, 3);
v___x_4958_ = lean_string_append(v___x_4953_, v___x_4957_);
lean_dec_ref(v___x_4957_);
v___x_4959_ = 2;
v___x_4960_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4960_, 0, v___x_4958_);
lean_ctor_set_uint8(v___x_4960_, sizeof(void*)*1, v___x_4959_);
lean_inc_ref(v___y_4947_);
v___x_4961_ = lean_apply_2(v___y_4947_, v___x_4960_, lean_box(0));
v___y_4936_ = v___y_4946_;
v___y_4937_ = v___y_4949_;
v___y_4938_ = v___y_4947_;
goto v___jp_4935_;
}
v___jp_4962_:
{
lean_object* v___x_4968_; uint8_t v___x_4969_; 
v___x_4968_ = lean_string_utf8_byte_size(v___y_4965_);
v___x_4969_ = lean_nat_dec_eq(v___x_4968_, v___y_4963_);
if (v___x_4969_ == 0)
{
lean_object* v_s_4970_; 
v_s_4970_ = lean_ctor_get(v_scope_4932_, 0);
lean_inc_ref(v_s_4970_);
v___y_4945_ = v___y_4963_;
v___y_4946_ = v_didError_4966_;
v___y_4947_ = v___y_4967_;
v___y_4948_ = v___x_4968_;
v___y_4949_ = v___y_4964_;
v___y_4950_ = v___y_4965_;
v___y_4951_ = v_s_4970_;
goto v___jp_4944_;
}
else
{
lean_dec_ref(v___y_4965_);
lean_dec(v___y_4963_);
v___y_4936_ = v_didError_4966_;
v___y_4937_ = v___y_4964_;
v___y_4938_ = v___y_4967_;
goto v___jp_4935_;
}
}
v___jp_4971_:
{
lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; uint8_t v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; 
v___x_4978_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_4979_ = lean_string_append(v___y_4977_, v___x_4978_);
v___x_4980_ = lean_string_append(v___x_4979_, v___y_4972_);
v___x_4981_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2));
v___x_4982_ = lean_string_append(v___x_4980_, v___x_4981_);
v___x_4983_ = 3;
v___x_4984_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4984_, 0, v___x_4982_);
lean_ctor_set_uint8(v___x_4984_, sizeof(void*)*1, v___x_4983_);
lean_inc_ref(v___y_4914_);
v___x_4985_ = lean_apply_2(v___y_4914_, v___x_4984_, lean_box(0));
v___y_4963_ = v___y_4973_;
v___y_4964_ = v___y_4975_;
v___y_4965_ = v___y_4976_;
v_didError_4966_ = v___y_4974_;
v___y_4967_ = v___y_4914_;
goto v___jp_4962_;
}
v___jp_4986_:
{
lean_object* v_s_4992_; 
v_s_4992_ = lean_ctor_get(v_scope_4932_, 0);
lean_inc_ref(v_s_4992_);
v___y_4972_ = v___y_4991_;
v___y_4973_ = v___y_4987_;
v___y_4974_ = v___y_4988_;
v___y_4975_ = v___y_4989_;
v___y_4976_ = v___y_4990_;
v___y_4977_ = v_s_4992_;
goto v___jp_4971_;
}
v___jp_4993_:
{
lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; uint8_t v___x_5000_; uint8_t v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; 
v___x_4996_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3));
v___x_4997_ = lean_box(0);
v___x_4998_ = lean_unsigned_to_nat(0u);
v___x_4999_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_5000_ = 1;
v___x_5001_ = 0;
v___x_5002_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_5002_, 0, v___x_4996_);
lean_ctor_set(v___x_5002_, 1, v_a_4995_);
lean_ctor_set(v___x_5002_, 2, v___y_4994_);
lean_ctor_set(v___x_5002_, 3, v___x_4997_);
lean_ctor_set(v___x_5002_, 4, v___x_4999_);
lean_ctor_set_uint8(v___x_5002_, sizeof(void*)*5, v___x_5000_);
lean_ctor_set_uint8(v___x_5002_, sizeof(void*)*5 + 1, v___x_5001_);
v___x_5003_ = lean_io_process_spawn(v___x_5002_);
if (lean_obj_tag(v___x_5003_) == 0)
{
lean_object* v_a_5004_; lean_object* v_stdout_5005_; lean_object* v_stderr_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; 
v_a_5004_ = lean_ctor_get(v___x_5003_, 0);
lean_inc(v_a_5004_);
lean_dec_ref_known(v___x_5003_, 1);
v_stdout_5005_ = lean_ctor_get(v_a_5004_, 1);
lean_inc_n(v_stdout_5005_, 2);
v_stderr_5006_ = lean_ctor_get(v_a_5004_, 2);
v___x_5007_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4));
v___x_5008_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_4911_, v_stderr_5006_, v_stdout_5005_, v___x_5007_, v___y_4914_);
if (lean_obj_tag(v___x_5008_) == 0)
{
lean_object* v_a_5009_; lean_object* v___x_5010_; 
v_a_5009_ = lean_ctor_get(v___x_5008_, 0);
lean_inc(v_a_5009_);
lean_dec_ref_known(v___x_5008_, 1);
v___x_5010_ = lean_io_process_child_wait(v___x_4996_, v_a_5004_);
lean_dec(v_a_5004_);
if (lean_obj_tag(v___x_5010_) == 0)
{
lean_object* v_a_5011_; lean_object* v___x_5012_; 
v_a_5011_ = lean_ctor_get(v___x_5010_, 0);
lean_inc(v_a_5011_);
lean_dec_ref_known(v___x_5010_, 1);
v___x_5012_ = l_IO_FS_Handle_readToEnd(v_stdout_5005_);
lean_dec(v_stdout_5005_);
if (lean_obj_tag(v___x_5012_) == 0)
{
lean_object* v_a_5013_; uint8_t v_didError_5014_; lean_object* v_numSuccesses_5015_; lean_object* v___x_5016_; uint8_t v___x_5017_; 
v_a_5013_ = lean_ctor_get(v___x_5012_, 0);
lean_inc(v_a_5013_);
lean_dec_ref_known(v___x_5012_, 1);
v_didError_5014_ = lean_ctor_get_uint8(v_a_5009_, sizeof(void*)*1);
v_numSuccesses_5015_ = lean_ctor_get(v_a_5009_, 0);
lean_inc(v_numSuccesses_5015_);
lean_dec(v_a_5009_);
v___x_5016_ = lean_array_get_size(v_infos_4933_);
lean_dec_ref(v_infos_4933_);
v___x_5017_ = lean_nat_dec_lt(v_numSuccesses_5015_, v___x_5016_);
lean_dec(v_numSuccesses_5015_);
if (v___x_5017_ == 0)
{
uint32_t v___x_5018_; 
v___x_5018_ = lean_unbox_uint32(v_a_5011_);
lean_dec(v_a_5011_);
v___y_4963_ = v___x_4998_;
v___y_4964_ = v___x_5018_;
v___y_4965_ = v_a_5013_;
v_didError_4966_ = v_didError_5014_;
v___y_4967_ = v___y_4914_;
goto v___jp_4962_;
}
else
{
if (v_kind_4931_ == 0)
{
lean_object* v___x_5019_; uint32_t v___x_5020_; 
v___x_5019_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___x_5020_ = lean_unbox_uint32(v_a_5011_);
lean_dec(v_a_5011_);
v___y_4987_ = v___x_4998_;
v___y_4988_ = v___x_5000_;
v___y_4989_ = v___x_5020_;
v___y_4990_ = v_a_5013_;
v___y_4991_ = v___x_5019_;
goto v___jp_4986_;
}
else
{
lean_object* v___x_5021_; uint32_t v___x_5022_; 
v___x_5021_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___x_5022_ = lean_unbox_uint32(v_a_5011_);
lean_dec(v_a_5011_);
v___y_4987_ = v___x_4998_;
v___y_4988_ = v___x_5000_;
v___y_4989_ = v___x_5022_;
v___y_4990_ = v_a_5013_;
v___y_4991_ = v___x_5021_;
goto v___jp_4986_;
}
}
}
else
{
lean_object* v_a_5023_; lean_object* v___x_5025_; uint8_t v_isShared_5026_; uint8_t v_isSharedCheck_5035_; 
lean_dec(v_a_5011_);
lean_dec(v_a_5009_);
lean_dec_ref(v_infos_4933_);
lean_dec_ref(v_scope_4932_);
v_a_5023_ = lean_ctor_get(v___x_5012_, 0);
v_isSharedCheck_5035_ = !lean_is_exclusive(v___x_5012_);
if (v_isSharedCheck_5035_ == 0)
{
v___x_5025_ = v___x_5012_;
v_isShared_5026_ = v_isSharedCheck_5035_;
goto v_resetjp_5024_;
}
else
{
lean_inc(v_a_5023_);
lean_dec(v___x_5012_);
v___x_5025_ = lean_box(0);
v_isShared_5026_ = v_isSharedCheck_5035_;
goto v_resetjp_5024_;
}
v_resetjp_5024_:
{
lean_object* v___x_5027_; uint8_t v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5033_; 
v___x_5027_ = lean_io_error_to_string(v_a_5023_);
v___x_5028_ = 3;
v___x_5029_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5029_, 0, v___x_5027_);
lean_ctor_set_uint8(v___x_5029_, sizeof(void*)*1, v___x_5028_);
lean_inc_ref(v___y_4914_);
v___x_5030_ = lean_apply_2(v___y_4914_, v___x_5029_, lean_box(0));
v___x_5031_ = lean_box(0);
if (v_isShared_5026_ == 0)
{
lean_ctor_set(v___x_5025_, 0, v___x_5031_);
v___x_5033_ = v___x_5025_;
goto v_reusejp_5032_;
}
else
{
lean_object* v_reuseFailAlloc_5034_; 
v_reuseFailAlloc_5034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5034_, 0, v___x_5031_);
v___x_5033_ = v_reuseFailAlloc_5034_;
goto v_reusejp_5032_;
}
v_reusejp_5032_:
{
return v___x_5033_;
}
}
}
}
else
{
lean_object* v_a_5036_; lean_object* v___x_5038_; uint8_t v_isShared_5039_; uint8_t v_isSharedCheck_5048_; 
lean_dec(v_a_5009_);
lean_dec(v_stdout_5005_);
lean_dec_ref(v_infos_4933_);
lean_dec_ref(v_scope_4932_);
v_a_5036_ = lean_ctor_get(v___x_5010_, 0);
v_isSharedCheck_5048_ = !lean_is_exclusive(v___x_5010_);
if (v_isSharedCheck_5048_ == 0)
{
v___x_5038_ = v___x_5010_;
v_isShared_5039_ = v_isSharedCheck_5048_;
goto v_resetjp_5037_;
}
else
{
lean_inc(v_a_5036_);
lean_dec(v___x_5010_);
v___x_5038_ = lean_box(0);
v_isShared_5039_ = v_isSharedCheck_5048_;
goto v_resetjp_5037_;
}
v_resetjp_5037_:
{
lean_object* v___x_5040_; uint8_t v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5046_; 
v___x_5040_ = lean_io_error_to_string(v_a_5036_);
v___x_5041_ = 3;
v___x_5042_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5042_, 0, v___x_5040_);
lean_ctor_set_uint8(v___x_5042_, sizeof(void*)*1, v___x_5041_);
lean_inc_ref(v___y_4914_);
v___x_5043_ = lean_apply_2(v___y_4914_, v___x_5042_, lean_box(0));
v___x_5044_ = lean_box(0);
if (v_isShared_5039_ == 0)
{
lean_ctor_set(v___x_5038_, 0, v___x_5044_);
v___x_5046_ = v___x_5038_;
goto v_reusejp_5045_;
}
else
{
lean_object* v_reuseFailAlloc_5047_; 
v_reuseFailAlloc_5047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5047_, 0, v___x_5044_);
v___x_5046_ = v_reuseFailAlloc_5047_;
goto v_reusejp_5045_;
}
v_reusejp_5045_:
{
return v___x_5046_;
}
}
}
}
else
{
lean_object* v_a_5049_; lean_object* v___x_5051_; uint8_t v_isShared_5052_; uint8_t v_isSharedCheck_5056_; 
lean_dec(v_stdout_5005_);
lean_dec(v_a_5004_);
lean_dec_ref(v_infos_4933_);
lean_dec_ref(v_scope_4932_);
v_a_5049_ = lean_ctor_get(v___x_5008_, 0);
v_isSharedCheck_5056_ = !lean_is_exclusive(v___x_5008_);
if (v_isSharedCheck_5056_ == 0)
{
v___x_5051_ = v___x_5008_;
v_isShared_5052_ = v_isSharedCheck_5056_;
goto v_resetjp_5050_;
}
else
{
lean_inc(v_a_5049_);
lean_dec(v___x_5008_);
v___x_5051_ = lean_box(0);
v_isShared_5052_ = v_isSharedCheck_5056_;
goto v_resetjp_5050_;
}
v_resetjp_5050_:
{
lean_object* v___x_5054_; 
if (v_isShared_5052_ == 0)
{
v___x_5054_ = v___x_5051_;
goto v_reusejp_5053_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v_a_5049_);
v___x_5054_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5053_;
}
v_reusejp_5053_:
{
return v___x_5054_;
}
}
}
}
else
{
lean_object* v_a_5057_; lean_object* v___x_5059_; uint8_t v_isShared_5060_; uint8_t v_isSharedCheck_5069_; 
lean_dec_ref(v_infos_4933_);
lean_dec_ref(v_scope_4932_);
lean_dec_ref(v_cfg_4911_);
v_a_5057_ = lean_ctor_get(v___x_5003_, 0);
v_isSharedCheck_5069_ = !lean_is_exclusive(v___x_5003_);
if (v_isSharedCheck_5069_ == 0)
{
v___x_5059_ = v___x_5003_;
v_isShared_5060_ = v_isSharedCheck_5069_;
goto v_resetjp_5058_;
}
else
{
lean_inc(v_a_5057_);
lean_dec(v___x_5003_);
v___x_5059_ = lean_box(0);
v_isShared_5060_ = v_isSharedCheck_5069_;
goto v_resetjp_5058_;
}
v_resetjp_5058_:
{
lean_object* v___x_5061_; uint8_t v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; lean_object* v___x_5067_; 
v___x_5061_ = lean_io_error_to_string(v_a_5057_);
v___x_5062_ = 3;
v___x_5063_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5063_, 0, v___x_5061_);
lean_ctor_set_uint8(v___x_5063_, sizeof(void*)*1, v___x_5062_);
lean_inc_ref(v___y_4914_);
v___x_5064_ = lean_apply_2(v___y_4914_, v___x_5063_, lean_box(0));
v___x_5065_ = lean_box(0);
if (v_isShared_5060_ == 0)
{
lean_ctor_set(v___x_5059_, 0, v___x_5065_);
v___x_5067_ = v___x_5059_;
goto v_reusejp_5066_;
}
else
{
lean_object* v_reuseFailAlloc_5068_; 
v_reuseFailAlloc_5068_ = lean_alloc_ctor(1, 1, 0);
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
}
v___jp_5070_:
{
lean_object* v___x_5075_; uint8_t v___x_5076_; 
v___x_5075_ = lean_array_get_size(v___y_5072_);
v___x_5076_ = lean_nat_dec_lt(v___y_5071_, v___x_5075_);
if (v___x_5076_ == 0)
{
v___y_4994_ = v___y_5073_;
v_a_4995_ = v_val_5074_;
goto v___jp_4993_;
}
else
{
lean_object* v___x_5077_; size_t v___x_5078_; size_t v___x_5079_; lean_object* v___x_5080_; 
v___x_5077_ = lean_box(0);
v___x_5078_ = ((size_t)0ULL);
v___x_5079_ = lean_usize_of_nat(v___x_5075_);
v___x_5080_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_5072_, v___x_5078_, v___x_5079_, v___x_5077_, v___y_4914_);
if (lean_obj_tag(v___x_5080_) == 0)
{
lean_dec_ref_known(v___x_5080_, 1);
v___y_4994_ = v___y_5073_;
v_a_4995_ = v_val_5074_;
goto v___jp_4993_;
}
else
{
lean_dec_ref(v_val_5074_);
lean_dec_ref(v___y_5073_);
lean_dec_ref(v_infos_4933_);
lean_dec_ref(v_scope_4932_);
lean_dec_ref(v_cfg_4911_);
return v___x_5080_;
}
}
}
v___jp_5081_:
{
lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; 
v___x_5083_ = lean_unsigned_to_nat(0u);
v___x_5084_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5085_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_5086_ = lean_io_getenv(v___x_5085_);
if (lean_obj_tag(v___x_5086_) == 0)
{
lean_object* v___x_5087_; 
v___x_5087_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v___y_5071_ = v___x_5083_;
v___y_5072_ = v___x_5084_;
v___y_5073_ = v_a_5082_;
v_val_5074_ = v___x_5087_;
goto v___jp_5070_;
}
else
{
lean_object* v_val_5088_; 
v_val_5088_ = lean_ctor_get(v___x_5086_, 0);
lean_inc(v_val_5088_);
lean_dec_ref_known(v___x_5086_, 1);
v___y_5071_ = v___x_5083_;
v___y_5072_ = v___x_5084_;
v___y_5073_ = v_a_5082_;
v_val_5074_ = v_val_5088_;
goto v___jp_5070_;
}
}
v___jp_5089_:
{
lean_object* v___x_5090_; 
v___x_5090_ = lean_io_prim_handle_flush(v_h_4912_);
if (lean_obj_tag(v___x_5090_) == 0)
{
lean_object* v___x_5091_; lean_object* v___x_5092_; 
lean_dec_ref_known(v___x_5090_, 1);
v___x_5091_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20);
v___x_5092_ = lean_array_push(v___x_5091_, v_path_4913_);
v_a_5082_ = v___x_5092_;
goto v___jp_5081_;
}
else
{
lean_object* v_a_5093_; lean_object* v___x_5095_; uint8_t v_isShared_5096_; uint8_t v_isSharedCheck_5105_; 
lean_dec_ref(v_infos_4933_);
lean_dec_ref(v_scope_4932_);
lean_dec_ref(v_path_4913_);
lean_dec_ref(v_cfg_4911_);
v_a_5093_ = lean_ctor_get(v___x_5090_, 0);
v_isSharedCheck_5105_ = !lean_is_exclusive(v___x_5090_);
if (v_isSharedCheck_5105_ == 0)
{
v___x_5095_ = v___x_5090_;
v_isShared_5096_ = v_isSharedCheck_5105_;
goto v_resetjp_5094_;
}
else
{
lean_inc(v_a_5093_);
lean_dec(v___x_5090_);
v___x_5095_ = lean_box(0);
v_isShared_5096_ = v_isSharedCheck_5105_;
goto v_resetjp_5094_;
}
v_resetjp_5094_:
{
lean_object* v___x_5097_; uint8_t v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5103_; 
v___x_5097_ = lean_io_error_to_string(v_a_5093_);
v___x_5098_ = 3;
v___x_5099_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5099_, 0, v___x_5097_);
lean_ctor_set_uint8(v___x_5099_, sizeof(void*)*1, v___x_5098_);
lean_inc_ref(v___y_4914_);
v___x_5100_ = lean_apply_2(v___y_4914_, v___x_5099_, lean_box(0));
v___x_5101_ = lean_box(0);
if (v_isShared_5096_ == 0)
{
lean_ctor_set(v___x_5095_, 0, v___x_5101_);
v___x_5103_ = v___x_5095_;
goto v_reusejp_5102_;
}
else
{
lean_object* v_reuseFailAlloc_5104_; 
v_reuseFailAlloc_5104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5104_, 0, v___x_5101_);
v___x_5103_ = v_reuseFailAlloc_5104_;
goto v_reusejp_5102_;
}
v_reusejp_5102_:
{
return v___x_5103_;
}
}
}
}
v___jp_5106_:
{
if (lean_obj_tag(v___y_5107_) == 0)
{
lean_dec_ref_known(v___y_5107_, 1);
goto v___jp_5089_;
}
else
{
lean_dec_ref(v_infos_4933_);
lean_dec_ref(v_scope_4932_);
lean_dec_ref(v_path_4913_);
lean_dec_ref(v_cfg_4911_);
return v___y_5107_;
}
}
v___jp_5108_:
{
lean_object* v___x_5109_; 
v___x_5109_ = lean_io_prim_handle_flush(v_h_4912_);
if (lean_obj_tag(v___x_5109_) == 0)
{
lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; 
lean_dec_ref_known(v___x_5109_, 1);
v___x_5110_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_5111_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_5112_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_5113_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10));
v___x_5114_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32);
lean_inc_ref(v_key_4934_);
v___x_5115_ = lean_array_push(v___x_5114_, v_key_4934_);
v___x_5116_ = lean_array_push(v___x_5115_, v___x_5110_);
v___x_5117_ = lean_array_push(v___x_5116_, v___x_5111_);
v___x_5118_ = lean_array_push(v___x_5117_, v___x_5112_);
v___x_5119_ = lean_array_push(v___x_5118_, v___x_5113_);
v___x_5120_ = lean_array_push(v___x_5119_, v_path_4913_);
v_a_5082_ = v___x_5120_;
goto v___jp_5081_;
}
else
{
lean_object* v_a_5121_; lean_object* v___x_5123_; uint8_t v_isShared_5124_; uint8_t v_isSharedCheck_5133_; 
lean_dec_ref(v_infos_4933_);
lean_dec_ref(v_scope_4932_);
lean_dec_ref(v_path_4913_);
lean_dec_ref(v_cfg_4911_);
v_a_5121_ = lean_ctor_get(v___x_5109_, 0);
v_isSharedCheck_5133_ = !lean_is_exclusive(v___x_5109_);
if (v_isSharedCheck_5133_ == 0)
{
v___x_5123_ = v___x_5109_;
v_isShared_5124_ = v_isSharedCheck_5133_;
goto v_resetjp_5122_;
}
else
{
lean_inc(v_a_5121_);
lean_dec(v___x_5109_);
v___x_5123_ = lean_box(0);
v_isShared_5124_ = v_isSharedCheck_5133_;
goto v_resetjp_5122_;
}
v_resetjp_5122_:
{
lean_object* v___x_5125_; uint8_t v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5131_; 
v___x_5125_ = lean_io_error_to_string(v_a_5121_);
v___x_5126_ = 3;
v___x_5127_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5127_, 0, v___x_5125_);
lean_ctor_set_uint8(v___x_5127_, sizeof(void*)*1, v___x_5126_);
lean_inc_ref(v___y_4914_);
v___x_5128_ = lean_apply_2(v___y_4914_, v___x_5127_, lean_box(0));
v___x_5129_ = lean_box(0);
if (v_isShared_5124_ == 0)
{
lean_ctor_set(v___x_5123_, 0, v___x_5129_);
v___x_5131_ = v___x_5123_;
goto v_reusejp_5130_;
}
else
{
lean_object* v_reuseFailAlloc_5132_; 
v_reuseFailAlloc_5132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5132_, 0, v___x_5129_);
v___x_5131_ = v_reuseFailAlloc_5132_;
goto v_reusejp_5130_;
}
v_reusejp_5130_:
{
return v___x_5131_;
}
}
}
}
v___jp_5134_:
{
if (lean_obj_tag(v___y_5135_) == 0)
{
lean_dec_ref_known(v___y_5135_, 1);
goto v___jp_5108_;
}
else
{
lean_dec_ref(v_infos_4933_);
lean_dec_ref(v_scope_4932_);
lean_dec_ref(v_path_4913_);
lean_dec_ref(v_cfg_4911_);
return v___y_5135_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___boxed(lean_object* v_cfg_5158_, lean_object* v_h_5159_, lean_object* v_path_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_){
_start:
{
lean_object* v_res_5163_; 
v_res_5163_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0(v_cfg_5158_, v_h_5159_, v_path_5160_, v___y_5161_);
lean_dec_ref(v___y_5161_);
lean_dec(v_h_5159_);
return v_res_5163_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(lean_object* v_cfg_5164_, lean_object* v_a_5165_){
_start:
{
lean_object* v___f_5167_; lean_object* v___x_5168_; 
v___f_5167_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___boxed), 5, 1);
lean_closure_set(v___f_5167_, 0, v_cfg_5164_);
v___x_5168_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v___f_5167_, v_a_5165_);
return v___x_5168_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___boxed(lean_object* v_cfg_5169_, lean_object* v_a_5170_, lean_object* v___y_5171_){
_start:
{
lean_object* v_res_5172_; 
v_res_5172_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(v_cfg_5169_, v_a_5170_);
lean_dec_ref(v_a_5170_);
return v_res_5172_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl(lean_object* v_service_5174_, lean_object* v_scope_5175_){
_start:
{
lean_object* v___y_5177_; 
if (lean_obj_tag(v_scope_5175_) == 0)
{
lean_object* v_s_5180_; lean_object* v_apiEndpoint_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; 
v_s_5180_ = lean_ctor_get(v_scope_5175_, 0);
lean_inc_ref(v_s_5180_);
lean_dec_ref_known(v_scope_5175_, 1);
v_apiEndpoint_5181_ = lean_ctor_get(v_service_5174_, 4);
lean_inc_ref(v_apiEndpoint_5181_);
lean_dec_ref(v_service_5174_);
v___x_5182_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_5183_ = lean_string_append(v_apiEndpoint_5181_, v___x_5182_);
v___x_5184_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_5183_, v_s_5180_);
v___y_5177_ = v___x_5184_;
goto v___jp_5176_;
}
else
{
lean_object* v_s_5185_; lean_object* v_apiEndpoint_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; 
v_s_5185_ = lean_ctor_get(v_scope_5175_, 0);
lean_inc_ref(v_s_5185_);
lean_dec_ref_known(v_scope_5175_, 1);
v_apiEndpoint_5186_ = lean_ctor_get(v_service_5174_, 4);
lean_inc_ref(v_apiEndpoint_5186_);
lean_dec_ref(v_service_5174_);
v___x_5187_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_5188_ = lean_string_append(v_apiEndpoint_5186_, v___x_5187_);
v___x_5189_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_5188_, v_s_5185_);
v___y_5177_ = v___x_5189_;
goto v___jp_5176_;
}
v___jp_5176_:
{
lean_object* v___x_5178_; lean_object* v___x_5179_; 
v___x_5178_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl___closed__0));
v___x_5179_ = lean_string_append(v___y_5177_, v___x_5178_);
return v___x_5179_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0(lean_object* v_a_5190_, lean_object* v_as_5191_, size_t v_sz_5192_, size_t v_i_5193_, lean_object* v_b_5194_){
_start:
{
uint8_t v___x_5196_; 
v___x_5196_ = lean_usize_dec_lt(v_i_5193_, v_sz_5192_);
if (v___x_5196_ == 0)
{
lean_object* v___x_5197_; 
v___x_5197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5197_, 0, v_b_5194_);
return v___x_5197_;
}
else
{
lean_object* v___x_5198_; lean_object* v_a_5199_; lean_object* v___x_5200_; 
v___x_5198_ = lean_box(0);
v_a_5199_ = lean_array_uget_borrowed(v_as_5191_, v_i_5193_);
v___x_5200_ = l_IO_FS_writeBinFile(v_a_5199_, v_a_5190_);
if (lean_obj_tag(v___x_5200_) == 0)
{
size_t v___x_5201_; size_t v___x_5202_; 
lean_dec_ref_known(v___x_5200_, 1);
v___x_5201_ = ((size_t)1ULL);
v___x_5202_ = lean_usize_add(v_i_5193_, v___x_5201_);
v_i_5193_ = v___x_5202_;
v_b_5194_ = v___x_5198_;
goto _start;
}
else
{
return v___x_5200_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0___boxed(lean_object* v_a_5204_, lean_object* v_as_5205_, lean_object* v_sz_5206_, lean_object* v_i_5207_, lean_object* v_b_5208_, lean_object* v___y_5209_){
_start:
{
size_t v_sz_boxed_5210_; size_t v_i_boxed_5211_; lean_object* v_res_5212_; 
v_sz_boxed_5210_ = lean_unbox_usize(v_sz_5206_);
lean_dec(v_sz_5206_);
v_i_boxed_5211_ = lean_unbox_usize(v_i_5207_);
lean_dec(v_i_5207_);
v_res_5212_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0(v_a_5204_, v_as_5205_, v_sz_boxed_5210_, v_i_boxed_5211_, v_b_5208_);
lean_dec_ref(v_as_5205_);
lean_dec_ref(v_a_5204_);
return v_res_5212_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths(lean_object* v_path_5213_, lean_object* v_extraPaths_5214_){
_start:
{
lean_object* v___x_5216_; 
v___x_5216_ = l_IO_FS_readBinFile(v_path_5213_);
if (lean_obj_tag(v___x_5216_) == 0)
{
lean_object* v_a_5217_; lean_object* v___x_5218_; size_t v_sz_5219_; size_t v___x_5220_; lean_object* v___x_5221_; 
v_a_5217_ = lean_ctor_get(v___x_5216_, 0);
lean_inc(v_a_5217_);
lean_dec_ref_known(v___x_5216_, 1);
v___x_5218_ = lean_box(0);
v_sz_5219_ = lean_array_size(v_extraPaths_5214_);
v___x_5220_ = ((size_t)0ULL);
v___x_5221_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0(v_a_5217_, v_extraPaths_5214_, v_sz_5219_, v___x_5220_, v___x_5218_);
lean_dec(v_a_5217_);
if (lean_obj_tag(v___x_5221_) == 0)
{
lean_object* v___x_5223_; uint8_t v_isShared_5224_; uint8_t v_isSharedCheck_5228_; 
v_isSharedCheck_5228_ = !lean_is_exclusive(v___x_5221_);
if (v_isSharedCheck_5228_ == 0)
{
lean_object* v_unused_5229_; 
v_unused_5229_ = lean_ctor_get(v___x_5221_, 0);
lean_dec(v_unused_5229_);
v___x_5223_ = v___x_5221_;
v_isShared_5224_ = v_isSharedCheck_5228_;
goto v_resetjp_5222_;
}
else
{
lean_dec(v___x_5221_);
v___x_5223_ = lean_box(0);
v_isShared_5224_ = v_isSharedCheck_5228_;
goto v_resetjp_5222_;
}
v_resetjp_5222_:
{
lean_object* v___x_5226_; 
if (v_isShared_5224_ == 0)
{
lean_ctor_set(v___x_5223_, 0, v___x_5218_);
v___x_5226_ = v___x_5223_;
goto v_reusejp_5225_;
}
else
{
lean_object* v_reuseFailAlloc_5227_; 
v_reuseFailAlloc_5227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5227_, 0, v___x_5218_);
v___x_5226_ = v_reuseFailAlloc_5227_;
goto v_reusejp_5225_;
}
v_reusejp_5225_:
{
return v___x_5226_;
}
}
}
else
{
return v___x_5221_;
}
}
else
{
lean_object* v_a_5230_; lean_object* v___x_5232_; uint8_t v_isShared_5233_; uint8_t v_isSharedCheck_5237_; 
v_a_5230_ = lean_ctor_get(v___x_5216_, 0);
v_isSharedCheck_5237_ = !lean_is_exclusive(v___x_5216_);
if (v_isSharedCheck_5237_ == 0)
{
v___x_5232_ = v___x_5216_;
v_isShared_5233_ = v_isSharedCheck_5237_;
goto v_resetjp_5231_;
}
else
{
lean_inc(v_a_5230_);
lean_dec(v___x_5216_);
v___x_5232_ = lean_box(0);
v_isShared_5233_ = v_isSharedCheck_5237_;
goto v_resetjp_5231_;
}
v_resetjp_5231_:
{
lean_object* v___x_5235_; 
if (v_isShared_5233_ == 0)
{
v___x_5235_ = v___x_5232_;
goto v_reusejp_5234_;
}
else
{
lean_object* v_reuseFailAlloc_5236_; 
v_reuseFailAlloc_5236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5236_, 0, v_a_5230_);
v___x_5235_ = v_reuseFailAlloc_5236_;
goto v_reusejp_5234_;
}
v_reusejp_5234_:
{
return v___x_5235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths___boxed(lean_object* v_path_5238_, lean_object* v_extraPaths_5239_, lean_object* v___y_5240_){
_start:
{
lean_object* v_res_5241_; 
v_res_5241_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths(v_path_5238_, v_extraPaths_5239_);
lean_dec_ref(v_extraPaths_5239_);
lean_dec_ref(v_path_5238_);
return v_res_5241_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(size_t v_sz_5242_, size_t v_i_5243_, lean_object* v_bs_5244_){
_start:
{
uint8_t v___x_5245_; 
v___x_5245_ = lean_usize_dec_lt(v_i_5243_, v_sz_5242_);
if (v___x_5245_ == 0)
{
return v_bs_5244_;
}
else
{
lean_object* v_v_5246_; uint64_t v_hash_5247_; lean_object* v___x_5248_; lean_object* v_bs_x27_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; size_t v___x_5252_; size_t v___x_5253_; lean_object* v___x_5254_; 
v_v_5246_ = lean_array_uget_borrowed(v_bs_5244_, v_i_5243_);
v_hash_5247_ = lean_ctor_get_uint64(v_v_5246_, sizeof(void*)*3);
v___x_5248_ = lean_unsigned_to_nat(0u);
v_bs_x27_5249_ = lean_array_uset(v_bs_5244_, v_i_5243_, v___x_5248_);
v___x_5250_ = l_Lake_lowerHexUInt64(v_hash_5247_);
v___x_5251_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5251_, 0, v___x_5250_);
v___x_5252_ = ((size_t)1ULL);
v___x_5253_ = lean_usize_add(v_i_5243_, v___x_5252_);
v___x_5254_ = lean_array_uset(v_bs_x27_5249_, v_i_5243_, v___x_5251_);
v_i_5243_ = v___x_5253_;
v_bs_5244_ = v___x_5254_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0___boxed(lean_object* v_sz_5256_, lean_object* v_i_5257_, lean_object* v_bs_5258_){
_start:
{
size_t v_sz_boxed_5259_; size_t v_i_boxed_5260_; lean_object* v_res_5261_; 
v_sz_boxed_5259_ = lean_unbox_usize(v_sz_5256_);
lean_dec(v_sz_5256_);
v_i_boxed_5260_ = lean_unbox_usize(v_i_5257_);
lean_dec(v_i_5257_);
v_res_5261_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(v_sz_boxed_5259_, v_i_boxed_5260_, v_bs_5258_);
return v_res_5261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(lean_object* v_a_5262_, lean_object* v_n_5263_, lean_object* v_j_5264_, lean_object* v_a_5265_){
_start:
{
lean_object* v_zero_5266_; uint8_t v_isZero_5267_; 
v_zero_5266_ = lean_unsigned_to_nat(0u);
v_isZero_5267_ = lean_nat_dec_eq(v_j_5264_, v_zero_5266_);
if (v_isZero_5267_ == 1)
{
lean_dec(v_j_5264_);
return v_a_5265_;
}
else
{
lean_object* v___x_5268_; lean_object* v___x_5269_; uint64_t v_hash_5270_; lean_object* v_path_5271_; lean_object* v_extraPaths_5272_; lean_object* v___x_5274_; uint8_t v_isShared_5275_; uint8_t v_isSharedCheck_5284_; 
v___x_5268_ = lean_nat_sub(v_n_5263_, v_j_5264_);
v___x_5269_ = lean_array_fget(v_a_5265_, v___x_5268_);
v_hash_5270_ = lean_ctor_get_uint64(v___x_5269_, sizeof(void*)*3);
v_path_5271_ = lean_ctor_get(v___x_5269_, 1);
v_extraPaths_5272_ = lean_ctor_get(v___x_5269_, 2);
v_isSharedCheck_5284_ = !lean_is_exclusive(v___x_5269_);
if (v_isSharedCheck_5284_ == 0)
{
lean_object* v_unused_5285_; 
v_unused_5285_ = lean_ctor_get(v___x_5269_, 0);
lean_dec(v_unused_5285_);
v___x_5274_ = v___x_5269_;
v_isShared_5275_ = v_isSharedCheck_5284_;
goto v_resetjp_5273_;
}
else
{
lean_inc(v_extraPaths_5272_);
lean_inc(v_path_5271_);
lean_dec(v___x_5269_);
v___x_5274_ = lean_box(0);
v_isShared_5275_ = v_isSharedCheck_5284_;
goto v_resetjp_5273_;
}
v_resetjp_5273_:
{
lean_object* v_one_5276_; lean_object* v_n_5277_; lean_object* v___x_5278_; lean_object* v___x_5280_; 
v_one_5276_ = lean_unsigned_to_nat(1u);
v_n_5277_ = lean_nat_sub(v_j_5264_, v_one_5276_);
lean_dec(v_j_5264_);
v___x_5278_ = lean_array_fget_borrowed(v_a_5262_, v___x_5268_);
lean_inc(v___x_5278_);
if (v_isShared_5275_ == 0)
{
lean_ctor_set(v___x_5274_, 0, v___x_5278_);
v___x_5280_ = v___x_5274_;
goto v_reusejp_5279_;
}
else
{
lean_object* v_reuseFailAlloc_5283_; 
v_reuseFailAlloc_5283_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_5283_, 0, v___x_5278_);
lean_ctor_set(v_reuseFailAlloc_5283_, 1, v_path_5271_);
lean_ctor_set(v_reuseFailAlloc_5283_, 2, v_extraPaths_5272_);
lean_ctor_set_uint64(v_reuseFailAlloc_5283_, sizeof(void*)*3, v_hash_5270_);
v___x_5280_ = v_reuseFailAlloc_5283_;
goto v_reusejp_5279_;
}
v_reusejp_5279_:
{
lean_object* v___x_5281_; 
v___x_5281_ = lean_array_fset(v_a_5265_, v___x_5268_, v___x_5280_);
lean_dec(v___x_5268_);
v_j_5264_ = v_n_5277_;
v_a_5265_ = v___x_5281_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg___boxed(lean_object* v_a_5286_, lean_object* v_n_5287_, lean_object* v_j_5288_, lean_object* v_a_5289_){
_start:
{
lean_object* v_res_5290_; 
v_res_5290_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(v_a_5286_, v_n_5287_, v_j_5288_, v_a_5289_);
lean_dec(v_n_5287_);
lean_dec_ref(v_a_5286_);
return v_res_5290_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; 
v___x_5291_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_5292_ = lean_unsigned_to_nat(2u);
v___x_5293_ = lean_mk_empty_array_with_capacity(v___x_5292_);
v___x_5294_ = lean_array_push(v___x_5293_, v___x_5291_);
return v___x_5294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(lean_object* v_as_5295_, size_t v_i_5296_, size_t v_stop_5297_, lean_object* v_b_5298_){
_start:
{
uint8_t v___x_5299_; 
v___x_5299_ = lean_usize_dec_eq(v_i_5296_, v_stop_5297_);
if (v___x_5299_ == 0)
{
lean_object* v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; size_t v___x_5304_; size_t v___x_5305_; 
v___x_5300_ = lean_array_uget_borrowed(v_as_5295_, v_i_5296_);
v___x_5301_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0);
lean_inc(v___x_5300_);
v___x_5302_ = lean_array_push(v___x_5301_, v___x_5300_);
v___x_5303_ = l_Array_append___redArg(v_b_5298_, v___x_5302_);
lean_dec_ref(v___x_5302_);
v___x_5304_ = ((size_t)1ULL);
v___x_5305_ = lean_usize_add(v_i_5296_, v___x_5304_);
v_i_5296_ = v___x_5305_;
v_b_5298_ = v___x_5303_;
goto _start;
}
else
{
return v_b_5298_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___boxed(lean_object* v_as_5307_, lean_object* v_i_5308_, lean_object* v_stop_5309_, lean_object* v_b_5310_){
_start:
{
size_t v_i_boxed_5311_; size_t v_stop_boxed_5312_; lean_object* v_res_5313_; 
v_i_boxed_5311_ = lean_unbox_usize(v_i_5308_);
lean_dec(v_i_5308_);
v_stop_boxed_5312_ = lean_unbox_usize(v_stop_5309_);
lean_dec(v_stop_5309_);
v_res_5313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(v_as_5307_, v_i_boxed_5311_, v_stop_boxed_5312_, v_b_5310_);
lean_dec_ref(v_as_5307_);
return v_res_5313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2(lean_object* v_x_5316_){
_start:
{
if (lean_obj_tag(v_x_5316_) == 0)
{
lean_object* v___x_5317_; 
v___x_5317_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2___closed__0));
return v___x_5317_;
}
else
{
lean_object* v___x_5318_; lean_object* v___x_5319_; 
v___x_5318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5318_, 0, v_x_5316_);
v___x_5319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5319_, 0, v___x_5318_);
return v___x_5319_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3(lean_object* v_x_5322_){
_start:
{
if (lean_obj_tag(v_x_5322_) == 0)
{
lean_object* v___x_5323_; 
v___x_5323_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3___closed__0));
return v___x_5323_;
}
else
{
lean_object* v___x_5324_; 
v___x_5324_ = l_Lean_Json_getObj_x3f(v_x_5322_);
if (lean_obj_tag(v___x_5324_) == 0)
{
lean_object* v_a_5325_; lean_object* v___x_5327_; uint8_t v_isShared_5328_; uint8_t v_isSharedCheck_5332_; 
v_a_5325_ = lean_ctor_get(v___x_5324_, 0);
v_isSharedCheck_5332_ = !lean_is_exclusive(v___x_5324_);
if (v_isSharedCheck_5332_ == 0)
{
v___x_5327_ = v___x_5324_;
v_isShared_5328_ = v_isSharedCheck_5332_;
goto v_resetjp_5326_;
}
else
{
lean_inc(v_a_5325_);
lean_dec(v___x_5324_);
v___x_5327_ = lean_box(0);
v_isShared_5328_ = v_isSharedCheck_5332_;
goto v_resetjp_5326_;
}
v_resetjp_5326_:
{
lean_object* v___x_5330_; 
if (v_isShared_5328_ == 0)
{
v___x_5330_ = v___x_5327_;
goto v_reusejp_5329_;
}
else
{
lean_object* v_reuseFailAlloc_5331_; 
v_reuseFailAlloc_5331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5331_, 0, v_a_5325_);
v___x_5330_ = v_reuseFailAlloc_5331_;
goto v_reusejp_5329_;
}
v_reusejp_5329_:
{
return v___x_5330_;
}
}
}
else
{
lean_object* v_a_5333_; lean_object* v___x_5335_; uint8_t v_isShared_5336_; uint8_t v_isSharedCheck_5341_; 
v_a_5333_ = lean_ctor_get(v___x_5324_, 0);
v_isSharedCheck_5341_ = !lean_is_exclusive(v___x_5324_);
if (v_isSharedCheck_5341_ == 0)
{
v___x_5335_ = v___x_5324_;
v_isShared_5336_ = v_isSharedCheck_5341_;
goto v_resetjp_5334_;
}
else
{
lean_inc(v_a_5333_);
lean_dec(v___x_5324_);
v___x_5335_ = lean_box(0);
v_isShared_5336_ = v_isSharedCheck_5341_;
goto v_resetjp_5334_;
}
v_resetjp_5334_:
{
lean_object* v___x_5337_; lean_object* v___x_5339_; 
v___x_5337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5337_, 0, v_a_5333_);
if (v_isShared_5336_ == 0)
{
lean_ctor_set(v___x_5335_, 0, v___x_5337_);
v___x_5339_ = v___x_5335_;
goto v_reusejp_5338_;
}
else
{
lean_object* v_reuseFailAlloc_5340_; 
v_reuseFailAlloc_5340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5340_, 0, v___x_5337_);
v___x_5339_ = v_reuseFailAlloc_5340_;
goto v_reusejp_5338_;
}
v_reusejp_5338_:
{
return v___x_5339_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2(size_t v_sz_5342_, size_t v_i_5343_, lean_object* v_bs_5344_){
_start:
{
uint8_t v___x_5345_; 
v___x_5345_ = lean_usize_dec_lt(v_i_5343_, v_sz_5342_);
if (v___x_5345_ == 0)
{
lean_object* v___x_5346_; 
v___x_5346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5346_, 0, v_bs_5344_);
return v___x_5346_;
}
else
{
lean_object* v_v_5347_; lean_object* v___x_5348_; 
v_v_5347_ = lean_array_uget_borrowed(v_bs_5344_, v_i_5343_);
lean_inc(v_v_5347_);
v___x_5348_ = l_Lean_Json_getStr_x3f(v_v_5347_);
if (lean_obj_tag(v___x_5348_) == 0)
{
lean_object* v_a_5349_; lean_object* v___x_5351_; uint8_t v_isShared_5352_; uint8_t v_isSharedCheck_5356_; 
lean_dec_ref(v_bs_5344_);
v_a_5349_ = lean_ctor_get(v___x_5348_, 0);
v_isSharedCheck_5356_ = !lean_is_exclusive(v___x_5348_);
if (v_isSharedCheck_5356_ == 0)
{
v___x_5351_ = v___x_5348_;
v_isShared_5352_ = v_isSharedCheck_5356_;
goto v_resetjp_5350_;
}
else
{
lean_inc(v_a_5349_);
lean_dec(v___x_5348_);
v___x_5351_ = lean_box(0);
v_isShared_5352_ = v_isSharedCheck_5356_;
goto v_resetjp_5350_;
}
v_resetjp_5350_:
{
lean_object* v___x_5354_; 
if (v_isShared_5352_ == 0)
{
v___x_5354_ = v___x_5351_;
goto v_reusejp_5353_;
}
else
{
lean_object* v_reuseFailAlloc_5355_; 
v_reuseFailAlloc_5355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5355_, 0, v_a_5349_);
v___x_5354_ = v_reuseFailAlloc_5355_;
goto v_reusejp_5353_;
}
v_reusejp_5353_:
{
return v___x_5354_;
}
}
}
else
{
lean_object* v_a_5357_; lean_object* v___x_5358_; lean_object* v_bs_x27_5359_; size_t v___x_5360_; size_t v___x_5361_; lean_object* v___x_5362_; 
v_a_5357_ = lean_ctor_get(v___x_5348_, 0);
lean_inc(v_a_5357_);
lean_dec_ref_known(v___x_5348_, 1);
v___x_5358_ = lean_unsigned_to_nat(0u);
v_bs_x27_5359_ = lean_array_uset(v_bs_5344_, v_i_5343_, v___x_5358_);
v___x_5360_ = ((size_t)1ULL);
v___x_5361_ = lean_usize_add(v_i_5343_, v___x_5360_);
v___x_5362_ = lean_array_uset(v_bs_x27_5359_, v_i_5343_, v_a_5357_);
v_i_5343_ = v___x_5361_;
v_bs_5344_ = v___x_5362_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_5364_, lean_object* v_i_5365_, lean_object* v_bs_5366_){
_start:
{
size_t v_sz_boxed_5367_; size_t v_i_boxed_5368_; lean_object* v_res_5369_; 
v_sz_boxed_5367_ = lean_unbox_usize(v_sz_5364_);
lean_dec(v_sz_5364_);
v_i_boxed_5368_ = lean_unbox_usize(v_i_5365_);
lean_dec(v_i_5365_);
v_res_5369_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2(v_sz_boxed_5367_, v_i_boxed_5368_, v_bs_5366_);
return v_res_5369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(lean_object* v_x_5370_){
_start:
{
if (lean_obj_tag(v_x_5370_) == 4)
{
lean_object* v_elems_5371_; size_t v_sz_5372_; size_t v___x_5373_; lean_object* v___x_5374_; 
v_elems_5371_ = lean_ctor_get(v_x_5370_, 0);
lean_inc_ref(v_elems_5371_);
lean_dec_ref_known(v_x_5370_, 1);
v_sz_5372_ = lean_array_size(v_elems_5371_);
v___x_5373_ = ((size_t)0ULL);
v___x_5374_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2(v_sz_5372_, v___x_5373_, v_elems_5371_);
return v___x_5374_;
}
else
{
lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; 
v___x_5375_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0));
v___x_5376_ = lean_unsigned_to_nat(80u);
v___x_5377_ = l_Lean_Json_pretty(v_x_5370_, v___x_5376_);
v___x_5378_ = lean_string_append(v___x_5375_, v___x_5377_);
lean_dec_ref(v___x_5377_);
v___x_5379_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1));
v___x_5380_ = lean_string_append(v___x_5378_, v___x_5379_);
v___x_5381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5381_, 0, v___x_5380_);
return v___x_5381_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1(lean_object* v_val_5394_){
_start:
{
lean_object* v_a_5396_; lean_object* v___x_5440_; 
lean_inc(v_val_5394_);
v___x_5440_ = l_Lean_Json_getObj_x3f(v_val_5394_);
if (lean_obj_tag(v___x_5440_) == 1)
{
lean_object* v_a_5441_; lean_object* v___x_5448_; lean_object* v___x_5449_; 
v_a_5441_ = lean_ctor_get(v___x_5440_, 0);
lean_inc(v_a_5441_);
lean_dec_ref_known(v___x_5440_, 1);
v___x_5448_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__0));
v___x_5449_ = l_Lake_JsonObject_getJson_x3f(v_a_5441_, v___x_5448_);
if (lean_obj_tag(v___x_5449_) == 0)
{
goto v___jp_5442_;
}
else
{
lean_object* v_val_5450_; lean_object* v___x_5451_; 
v_val_5450_ = lean_ctor_get(v___x_5449_, 0);
lean_inc(v_val_5450_);
lean_dec_ref_known(v___x_5449_, 1);
v___x_5451_ = l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3(v_val_5450_);
if (lean_obj_tag(v___x_5451_) == 0)
{
lean_object* v_a_5452_; lean_object* v___x_5454_; uint8_t v_isShared_5455_; uint8_t v_isSharedCheck_5461_; 
lean_dec(v_a_5441_);
lean_dec(v_val_5394_);
v_a_5452_ = lean_ctor_get(v___x_5451_, 0);
v_isSharedCheck_5461_ = !lean_is_exclusive(v___x_5451_);
if (v_isSharedCheck_5461_ == 0)
{
v___x_5454_ = v___x_5451_;
v_isShared_5455_ = v_isSharedCheck_5461_;
goto v_resetjp_5453_;
}
else
{
lean_inc(v_a_5452_);
lean_dec(v___x_5451_);
v___x_5454_ = lean_box(0);
v_isShared_5455_ = v_isSharedCheck_5461_;
goto v_resetjp_5453_;
}
v_resetjp_5453_:
{
lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5459_; 
v___x_5456_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__1));
v___x_5457_ = lean_string_append(v___x_5456_, v_a_5452_);
lean_dec(v_a_5452_);
if (v_isShared_5455_ == 0)
{
lean_ctor_set(v___x_5454_, 0, v___x_5457_);
v___x_5459_ = v___x_5454_;
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
if (lean_obj_tag(v___x_5451_) == 0)
{
lean_object* v_a_5462_; lean_object* v___x_5464_; uint8_t v_isShared_5465_; uint8_t v_isSharedCheck_5469_; 
lean_dec(v_a_5441_);
lean_dec(v_val_5394_);
v_a_5462_ = lean_ctor_get(v___x_5451_, 0);
v_isSharedCheck_5469_ = !lean_is_exclusive(v___x_5451_);
if (v_isSharedCheck_5469_ == 0)
{
v___x_5464_ = v___x_5451_;
v_isShared_5465_ = v_isSharedCheck_5469_;
goto v_resetjp_5463_;
}
else
{
lean_inc(v_a_5462_);
lean_dec(v___x_5451_);
v___x_5464_ = lean_box(0);
v_isShared_5465_ = v_isSharedCheck_5469_;
goto v_resetjp_5463_;
}
v_resetjp_5463_:
{
lean_object* v___x_5467_; 
if (v_isShared_5465_ == 0)
{
lean_ctor_set_tag(v___x_5464_, 0);
v___x_5467_ = v___x_5464_;
goto v_reusejp_5466_;
}
else
{
lean_object* v_reuseFailAlloc_5468_; 
v_reuseFailAlloc_5468_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_5470_; 
v_a_5470_ = lean_ctor_get(v___x_5451_, 0);
lean_inc(v_a_5470_);
lean_dec_ref_known(v___x_5451_, 1);
if (lean_obj_tag(v_a_5470_) == 1)
{
lean_object* v_val_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; 
lean_dec(v_a_5441_);
lean_dec(v_val_5394_);
v_val_5471_ = lean_ctor_get(v_a_5470_, 0);
lean_inc(v_val_5471_);
lean_dec_ref_known(v_a_5470_, 1);
v___x_5472_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__2));
v___x_5473_ = l_Lake_JsonObject_getJson_x3f(v_val_5471_, v___x_5472_);
if (lean_obj_tag(v___x_5473_) == 0)
{
lean_object* v___x_5474_; 
lean_dec(v_val_5471_);
v___x_5474_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__4));
return v___x_5474_;
}
else
{
lean_object* v_val_5475_; lean_object* v___x_5476_; 
v_val_5475_ = lean_ctor_get(v___x_5473_, 0);
lean_inc(v_val_5475_);
lean_dec_ref_known(v___x_5473_, 1);
v___x_5476_ = l_Lean_Json_getNat_x3f(v_val_5475_);
if (lean_obj_tag(v___x_5476_) == 0)
{
lean_object* v_a_5477_; lean_object* v___x_5479_; uint8_t v_isShared_5480_; uint8_t v_isSharedCheck_5486_; 
lean_dec(v_val_5471_);
v_a_5477_ = lean_ctor_get(v___x_5476_, 0);
v_isSharedCheck_5486_ = !lean_is_exclusive(v___x_5476_);
if (v_isSharedCheck_5486_ == 0)
{
v___x_5479_ = v___x_5476_;
v_isShared_5480_ = v_isSharedCheck_5486_;
goto v_resetjp_5478_;
}
else
{
lean_inc(v_a_5477_);
lean_dec(v___x_5476_);
v___x_5479_ = lean_box(0);
v_isShared_5480_ = v_isSharedCheck_5486_;
goto v_resetjp_5478_;
}
v_resetjp_5478_:
{
lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5484_; 
v___x_5481_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__5));
v___x_5482_ = lean_string_append(v___x_5481_, v_a_5477_);
lean_dec(v_a_5477_);
if (v_isShared_5480_ == 0)
{
lean_ctor_set(v___x_5479_, 0, v___x_5482_);
v___x_5484_ = v___x_5479_;
goto v_reusejp_5483_;
}
else
{
lean_object* v_reuseFailAlloc_5485_; 
v_reuseFailAlloc_5485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5485_, 0, v___x_5482_);
v___x_5484_ = v_reuseFailAlloc_5485_;
goto v_reusejp_5483_;
}
v_reusejp_5483_:
{
return v___x_5484_;
}
}
}
else
{
if (lean_obj_tag(v___x_5476_) == 0)
{
lean_object* v_a_5487_; lean_object* v___x_5489_; uint8_t v_isShared_5490_; uint8_t v_isSharedCheck_5494_; 
lean_dec(v_val_5471_);
v_a_5487_ = lean_ctor_get(v___x_5476_, 0);
v_isSharedCheck_5494_ = !lean_is_exclusive(v___x_5476_);
if (v_isSharedCheck_5494_ == 0)
{
v___x_5489_ = v___x_5476_;
v_isShared_5490_ = v_isSharedCheck_5494_;
goto v_resetjp_5488_;
}
else
{
lean_inc(v_a_5487_);
lean_dec(v___x_5476_);
v___x_5489_ = lean_box(0);
v_isShared_5490_ = v_isSharedCheck_5494_;
goto v_resetjp_5488_;
}
v_resetjp_5488_:
{
lean_object* v___x_5492_; 
if (v_isShared_5490_ == 0)
{
lean_ctor_set_tag(v___x_5489_, 0);
v___x_5492_ = v___x_5489_;
goto v_reusejp_5491_;
}
else
{
lean_object* v_reuseFailAlloc_5493_; 
v_reuseFailAlloc_5493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5493_, 0, v_a_5487_);
v___x_5492_ = v_reuseFailAlloc_5493_;
goto v_reusejp_5491_;
}
v_reusejp_5491_:
{
return v___x_5492_;
}
}
}
else
{
lean_object* v_a_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; 
v_a_5495_ = lean_ctor_get(v___x_5476_, 0);
lean_inc(v_a_5495_);
lean_dec_ref_known(v___x_5476_, 1);
v___x_5496_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__6));
v___x_5497_ = l_Lake_JsonObject_getJson_x3f(v_val_5471_, v___x_5496_);
lean_dec(v_val_5471_);
if (lean_obj_tag(v___x_5497_) == 0)
{
lean_object* v___x_5498_; 
lean_dec(v_a_5495_);
v___x_5498_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__8));
return v___x_5498_;
}
else
{
lean_object* v_val_5499_; lean_object* v___x_5500_; 
v_val_5499_ = lean_ctor_get(v___x_5497_, 0);
lean_inc(v_val_5499_);
lean_dec_ref_known(v___x_5497_, 1);
v___x_5500_ = l_Lean_Json_getStr_x3f(v_val_5499_);
if (lean_obj_tag(v___x_5500_) == 0)
{
lean_object* v_a_5501_; lean_object* v___x_5503_; uint8_t v_isShared_5504_; uint8_t v_isSharedCheck_5510_; 
lean_dec(v_a_5495_);
v_a_5501_ = lean_ctor_get(v___x_5500_, 0);
v_isSharedCheck_5510_ = !lean_is_exclusive(v___x_5500_);
if (v_isSharedCheck_5510_ == 0)
{
v___x_5503_ = v___x_5500_;
v_isShared_5504_ = v_isSharedCheck_5510_;
goto v_resetjp_5502_;
}
else
{
lean_inc(v_a_5501_);
lean_dec(v___x_5500_);
v___x_5503_ = lean_box(0);
v_isShared_5504_ = v_isSharedCheck_5510_;
goto v_resetjp_5502_;
}
v_resetjp_5502_:
{
lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5508_; 
v___x_5505_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__9));
v___x_5506_ = lean_string_append(v___x_5505_, v_a_5501_);
lean_dec(v_a_5501_);
if (v_isShared_5504_ == 0)
{
lean_ctor_set(v___x_5503_, 0, v___x_5506_);
v___x_5508_ = v___x_5503_;
goto v_reusejp_5507_;
}
else
{
lean_object* v_reuseFailAlloc_5509_; 
v_reuseFailAlloc_5509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5509_, 0, v___x_5506_);
v___x_5508_ = v_reuseFailAlloc_5509_;
goto v_reusejp_5507_;
}
v_reusejp_5507_:
{
return v___x_5508_;
}
}
}
else
{
if (lean_obj_tag(v___x_5500_) == 0)
{
lean_object* v_a_5511_; lean_object* v___x_5513_; uint8_t v_isShared_5514_; uint8_t v_isSharedCheck_5518_; 
lean_dec(v_a_5495_);
v_a_5511_ = lean_ctor_get(v___x_5500_, 0);
v_isSharedCheck_5518_ = !lean_is_exclusive(v___x_5500_);
if (v_isSharedCheck_5518_ == 0)
{
v___x_5513_ = v___x_5500_;
v_isShared_5514_ = v_isSharedCheck_5518_;
goto v_resetjp_5512_;
}
else
{
lean_inc(v_a_5511_);
lean_dec(v___x_5500_);
v___x_5513_ = lean_box(0);
v_isShared_5514_ = v_isSharedCheck_5518_;
goto v_resetjp_5512_;
}
v_resetjp_5512_:
{
lean_object* v___x_5516_; 
if (v_isShared_5514_ == 0)
{
lean_ctor_set_tag(v___x_5513_, 0);
v___x_5516_ = v___x_5513_;
goto v_reusejp_5515_;
}
else
{
lean_object* v_reuseFailAlloc_5517_; 
v_reuseFailAlloc_5517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5517_, 0, v_a_5511_);
v___x_5516_ = v_reuseFailAlloc_5517_;
goto v_reusejp_5515_;
}
v_reusejp_5515_:
{
return v___x_5516_;
}
}
}
else
{
lean_object* v_a_5519_; lean_object* v___x_5521_; uint8_t v_isShared_5522_; uint8_t v_isSharedCheck_5527_; 
v_a_5519_ = lean_ctor_get(v___x_5500_, 0);
v_isSharedCheck_5527_ = !lean_is_exclusive(v___x_5500_);
if (v_isSharedCheck_5527_ == 0)
{
v___x_5521_ = v___x_5500_;
v_isShared_5522_ = v_isSharedCheck_5527_;
goto v_resetjp_5520_;
}
else
{
lean_inc(v_a_5519_);
lean_dec(v___x_5500_);
v___x_5521_ = lean_box(0);
v_isShared_5522_ = v_isSharedCheck_5527_;
goto v_resetjp_5520_;
}
v_resetjp_5520_:
{
lean_object* v___x_5523_; lean_object* v___x_5525_; 
v___x_5523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5523_, 0, v_a_5495_);
lean_ctor_set(v___x_5523_, 1, v_a_5519_);
if (v_isShared_5522_ == 0)
{
lean_ctor_set(v___x_5521_, 0, v___x_5523_);
v___x_5525_ = v___x_5521_;
goto v_reusejp_5524_;
}
else
{
lean_object* v_reuseFailAlloc_5526_; 
v_reuseFailAlloc_5526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5526_, 0, v___x_5523_);
v___x_5525_ = v_reuseFailAlloc_5526_;
goto v_reusejp_5524_;
}
v_reusejp_5524_:
{
return v___x_5525_;
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
lean_dec(v_a_5470_);
goto v___jp_5442_;
}
}
}
}
v___jp_5442_:
{
lean_object* v___x_5443_; lean_object* v___x_5444_; 
v___x_5443_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_5444_ = l_Lake_JsonObject_getJson_x3f(v_a_5441_, v___x_5443_);
lean_dec(v_a_5441_);
if (lean_obj_tag(v___x_5444_) == 0)
{
v_a_5396_ = v___x_5444_;
goto v___jp_5395_;
}
else
{
lean_object* v_val_5445_; lean_object* v___x_5446_; lean_object* v_a_5447_; 
v_val_5445_ = lean_ctor_get(v___x_5444_, 0);
lean_inc(v_val_5445_);
lean_dec_ref_known(v___x_5444_, 1);
v___x_5446_ = l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2(v_val_5445_);
v_a_5447_ = lean_ctor_get(v___x_5446_, 0);
lean_inc(v_a_5447_);
lean_dec_ref(v___x_5446_);
v_a_5396_ = v_a_5447_;
goto v___jp_5395_;
}
}
}
else
{
lean_object* v___x_5528_; 
lean_dec_ref(v___x_5440_);
v___x_5528_ = l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(v_val_5394_);
if (lean_obj_tag(v___x_5528_) == 0)
{
lean_object* v_a_5529_; lean_object* v___x_5531_; uint8_t v_isShared_5532_; uint8_t v_isSharedCheck_5536_; 
v_a_5529_ = lean_ctor_get(v___x_5528_, 0);
v_isSharedCheck_5536_ = !lean_is_exclusive(v___x_5528_);
if (v_isSharedCheck_5536_ == 0)
{
v___x_5531_ = v___x_5528_;
v_isShared_5532_ = v_isSharedCheck_5536_;
goto v_resetjp_5530_;
}
else
{
lean_inc(v_a_5529_);
lean_dec(v___x_5528_);
v___x_5531_ = lean_box(0);
v_isShared_5532_ = v_isSharedCheck_5536_;
goto v_resetjp_5530_;
}
v_resetjp_5530_:
{
lean_object* v___x_5534_; 
if (v_isShared_5532_ == 0)
{
v___x_5534_ = v___x_5531_;
goto v_reusejp_5533_;
}
else
{
lean_object* v_reuseFailAlloc_5535_; 
v_reuseFailAlloc_5535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5535_, 0, v_a_5529_);
v___x_5534_ = v_reuseFailAlloc_5535_;
goto v_reusejp_5533_;
}
v_reusejp_5533_:
{
return v___x_5534_;
}
}
}
else
{
lean_object* v_a_5537_; lean_object* v___x_5539_; uint8_t v_isShared_5540_; uint8_t v_isSharedCheck_5545_; 
v_a_5537_ = lean_ctor_get(v___x_5528_, 0);
v_isSharedCheck_5545_ = !lean_is_exclusive(v___x_5528_);
if (v_isSharedCheck_5545_ == 0)
{
v___x_5539_ = v___x_5528_;
v_isShared_5540_ = v_isSharedCheck_5545_;
goto v_resetjp_5538_;
}
else
{
lean_inc(v_a_5537_);
lean_dec(v___x_5528_);
v___x_5539_ = lean_box(0);
v_isShared_5540_ = v_isSharedCheck_5545_;
goto v_resetjp_5538_;
}
v_resetjp_5538_:
{
lean_object* v___x_5541_; lean_object* v___x_5543_; 
v___x_5541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5541_, 0, v_a_5537_);
if (v_isShared_5540_ == 0)
{
lean_ctor_set(v___x_5539_, 0, v___x_5541_);
v___x_5543_ = v___x_5539_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5544_; 
v_reuseFailAlloc_5544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5544_, 0, v___x_5541_);
v___x_5543_ = v_reuseFailAlloc_5544_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
return v___x_5543_;
}
}
}
}
v___jp_5395_:
{
if (lean_obj_tag(v_a_5396_) == 1)
{
lean_object* v_val_5397_; lean_object* v___x_5399_; uint8_t v_isShared_5400_; uint8_t v_isSharedCheck_5421_; 
lean_dec(v_val_5394_);
v_val_5397_ = lean_ctor_get(v_a_5396_, 0);
v_isSharedCheck_5421_ = !lean_is_exclusive(v_a_5396_);
if (v_isSharedCheck_5421_ == 0)
{
v___x_5399_ = v_a_5396_;
v_isShared_5400_ = v_isSharedCheck_5421_;
goto v_resetjp_5398_;
}
else
{
lean_inc(v_val_5397_);
lean_dec(v_a_5396_);
v___x_5399_ = lean_box(0);
v_isShared_5400_ = v_isSharedCheck_5421_;
goto v_resetjp_5398_;
}
v_resetjp_5398_:
{
lean_object* v___x_5401_; 
v___x_5401_ = l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(v_val_5397_);
if (lean_obj_tag(v___x_5401_) == 0)
{
lean_object* v_a_5402_; lean_object* v___x_5404_; uint8_t v_isShared_5405_; uint8_t v_isSharedCheck_5409_; 
lean_del_object(v___x_5399_);
v_a_5402_ = lean_ctor_get(v___x_5401_, 0);
v_isSharedCheck_5409_ = !lean_is_exclusive(v___x_5401_);
if (v_isSharedCheck_5409_ == 0)
{
v___x_5404_ = v___x_5401_;
v_isShared_5405_ = v_isSharedCheck_5409_;
goto v_resetjp_5403_;
}
else
{
lean_inc(v_a_5402_);
lean_dec(v___x_5401_);
v___x_5404_ = lean_box(0);
v_isShared_5405_ = v_isSharedCheck_5409_;
goto v_resetjp_5403_;
}
v_resetjp_5403_:
{
lean_object* v___x_5407_; 
if (v_isShared_5405_ == 0)
{
v___x_5407_ = v___x_5404_;
goto v_reusejp_5406_;
}
else
{
lean_object* v_reuseFailAlloc_5408_; 
v_reuseFailAlloc_5408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5408_, 0, v_a_5402_);
v___x_5407_ = v_reuseFailAlloc_5408_;
goto v_reusejp_5406_;
}
v_reusejp_5406_:
{
return v___x_5407_;
}
}
}
else
{
lean_object* v_a_5410_; lean_object* v___x_5412_; uint8_t v_isShared_5413_; uint8_t v_isSharedCheck_5420_; 
v_a_5410_ = lean_ctor_get(v___x_5401_, 0);
v_isSharedCheck_5420_ = !lean_is_exclusive(v___x_5401_);
if (v_isSharedCheck_5420_ == 0)
{
v___x_5412_ = v___x_5401_;
v_isShared_5413_ = v_isSharedCheck_5420_;
goto v_resetjp_5411_;
}
else
{
lean_inc(v_a_5410_);
lean_dec(v___x_5401_);
v___x_5412_ = lean_box(0);
v_isShared_5413_ = v_isSharedCheck_5420_;
goto v_resetjp_5411_;
}
v_resetjp_5411_:
{
lean_object* v___x_5415_; 
if (v_isShared_5400_ == 0)
{
lean_ctor_set_tag(v___x_5399_, 0);
lean_ctor_set(v___x_5399_, 0, v_a_5410_);
v___x_5415_ = v___x_5399_;
goto v_reusejp_5414_;
}
else
{
lean_object* v_reuseFailAlloc_5419_; 
v_reuseFailAlloc_5419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5419_, 0, v_a_5410_);
v___x_5415_ = v_reuseFailAlloc_5419_;
goto v_reusejp_5414_;
}
v_reusejp_5414_:
{
lean_object* v___x_5417_; 
if (v_isShared_5413_ == 0)
{
lean_ctor_set(v___x_5412_, 0, v___x_5415_);
v___x_5417_ = v___x_5412_;
goto v_reusejp_5416_;
}
else
{
lean_object* v_reuseFailAlloc_5418_; 
v_reuseFailAlloc_5418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5418_, 0, v___x_5415_);
v___x_5417_ = v_reuseFailAlloc_5418_;
goto v_reusejp_5416_;
}
v_reusejp_5416_:
{
return v___x_5417_;
}
}
}
}
}
}
else
{
lean_object* v___x_5422_; 
lean_dec(v_a_5396_);
v___x_5422_ = l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(v_val_5394_);
if (lean_obj_tag(v___x_5422_) == 0)
{
lean_object* v_a_5423_; lean_object* v___x_5425_; uint8_t v_isShared_5426_; uint8_t v_isSharedCheck_5430_; 
v_a_5423_ = lean_ctor_get(v___x_5422_, 0);
v_isSharedCheck_5430_ = !lean_is_exclusive(v___x_5422_);
if (v_isSharedCheck_5430_ == 0)
{
v___x_5425_ = v___x_5422_;
v_isShared_5426_ = v_isSharedCheck_5430_;
goto v_resetjp_5424_;
}
else
{
lean_inc(v_a_5423_);
lean_dec(v___x_5422_);
v___x_5425_ = lean_box(0);
v_isShared_5426_ = v_isSharedCheck_5430_;
goto v_resetjp_5424_;
}
v_resetjp_5424_:
{
lean_object* v___x_5428_; 
if (v_isShared_5426_ == 0)
{
v___x_5428_ = v___x_5425_;
goto v_reusejp_5427_;
}
else
{
lean_object* v_reuseFailAlloc_5429_; 
v_reuseFailAlloc_5429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5429_, 0, v_a_5423_);
v___x_5428_ = v_reuseFailAlloc_5429_;
goto v_reusejp_5427_;
}
v_reusejp_5427_:
{
return v___x_5428_;
}
}
}
else
{
lean_object* v_a_5431_; lean_object* v___x_5433_; uint8_t v_isShared_5434_; uint8_t v_isSharedCheck_5439_; 
v_a_5431_ = lean_ctor_get(v___x_5422_, 0);
v_isSharedCheck_5439_ = !lean_is_exclusive(v___x_5422_);
if (v_isSharedCheck_5439_ == 0)
{
v___x_5433_ = v___x_5422_;
v_isShared_5434_ = v_isSharedCheck_5439_;
goto v_resetjp_5432_;
}
else
{
lean_inc(v_a_5431_);
lean_dec(v___x_5422_);
v___x_5433_ = lean_box(0);
v_isShared_5434_ = v_isSharedCheck_5439_;
goto v_resetjp_5432_;
}
v_resetjp_5432_:
{
lean_object* v___x_5435_; lean_object* v___x_5437_; 
v___x_5435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5435_, 0, v_a_5431_);
if (v_isShared_5434_ == 0)
{
lean_ctor_set(v___x_5433_, 0, v___x_5435_);
v___x_5437_ = v___x_5433_;
goto v_reusejp_5436_;
}
else
{
lean_object* v_reuseFailAlloc_5438_; 
v_reuseFailAlloc_5438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5438_, 0, v___x_5435_);
v___x_5437_ = v_reuseFailAlloc_5438_;
goto v_reusejp_5436_;
}
v_reusejp_5436_:
{
return v___x_5437_;
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
lean_object* v___x_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; 
v___x_5564_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_5565_ = lean_unsigned_to_nat(12u);
v___x_5566_ = lean_mk_empty_array_with_capacity(v___x_5565_);
v___x_5567_ = lean_array_push(v___x_5566_, v___x_5564_);
return v___x_5567_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19(void){
_start:
{
lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; 
v___x_5568_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__14));
v___x_5569_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18);
v___x_5570_ = lean_array_push(v___x_5569_, v___x_5568_);
return v___x_5570_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20(void){
_start:
{
lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; 
v___x_5571_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_5572_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19);
v___x_5573_ = lean_array_push(v___x_5572_, v___x_5571_);
return v___x_5573_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21(void){
_start:
{
lean_object* v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; 
v___x_5574_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__15));
v___x_5575_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20);
v___x_5576_ = lean_array_push(v___x_5575_, v___x_5574_);
return v___x_5576_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22(void){
_start:
{
lean_object* v___x_5577_; lean_object* v___x_5578_; 
v___x_5577_ = l_Lake_Reservoir_lakeHeaders;
v___x_5578_ = lean_array_get_size(v___x_5577_);
return v___x_5578_;
}
}
static uint8_t _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23(void){
_start:
{
lean_object* v___x_5579_; lean_object* v___x_5580_; uint8_t v___x_5581_; 
v___x_5579_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22);
v___x_5580_ = lean_unsigned_to_nat(0u);
v___x_5581_ = lean_nat_dec_lt(v___x_5580_, v___x_5579_);
return v___x_5581_;
}
}
static uint8_t _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24(void){
_start:
{
lean_object* v___x_5582_; uint8_t v___x_5583_; 
v___x_5582_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22);
v___x_5583_ = lean_nat_dec_le(v___x_5582_, v___x_5582_);
return v___x_5583_;
}
}
static size_t _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25(void){
_start:
{
lean_object* v___x_5584_; size_t v___x_5585_; 
v___x_5584_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22);
v___x_5585_ = lean_usize_of_nat(v___x_5584_);
return v___x_5585_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0(lean_object* v_url_5586_, lean_object* v_infos_5587_, lean_object* v_h_5588_, lean_object* v_path_5589_, lean_object* v___y_5590_){
_start:
{
uint32_t v___y_5593_; lean_object* v___y_5594_; lean_object* v___y_5605_; lean_object* v___y_5606_; uint8_t v___y_5607_; uint32_t v___y_5608_; lean_object* v_msg_5609_; lean_object* v___y_5610_; lean_object* v___y_5624_; lean_object* v___y_5625_; uint8_t v___y_5626_; uint32_t v___y_5627_; lean_object* v___y_5628_; lean_object* v_msg_5629_; lean_object* v___y_5630_; lean_object* v___y_5641_; lean_object* v___y_5642_; lean_object* v___y_5643_; uint8_t v___y_5644_; uint32_t v___y_5645_; lean_object* v___y_5646_; lean_object* v_msg_5647_; lean_object* v___y_5660_; lean_object* v___y_5661_; uint32_t v___y_5662_; lean_object* v___y_5663_; lean_object* v_a_5664_; lean_object* v___y_5692_; lean_object* v___y_5693_; uint8_t v___y_5694_; uint32_t v___y_5695_; lean_object* v___y_5696_; lean_object* v___y_5715_; lean_object* v_a_5716_; size_t v_sz_5798_; size_t v___x_5799_; lean_object* v___y_5801_; lean_object* v___y_5802_; lean_object* v___y_5803_; lean_object* v_val_5804_; lean_object* v___x_5818_; lean_object* v_body_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; 
v_sz_5798_ = lean_array_size(v_infos_5587_);
v___x_5799_ = ((size_t)0ULL);
lean_inc_ref(v_infos_5587_);
v___x_5818_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(v_sz_5798_, v___x_5799_, v_infos_5587_);
v_body_5819_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_body_5819_, 0, v___x_5818_);
v___x_5820_ = l_Lean_Json_compress(v_body_5819_);
v___x_5821_ = lean_io_prim_handle_put_str(v_h_5588_, v___x_5820_);
lean_dec_ref(v___x_5820_);
if (lean_obj_tag(v___x_5821_) == 0)
{
lean_object* v___x_5822_; 
lean_dec_ref_known(v___x_5821_, 1);
v___x_5822_ = lean_io_prim_handle_flush(v_h_5588_);
if (lean_obj_tag(v___x_5822_) == 0)
{
lean_object* v___y_5824_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; lean_object* v___x_5838_; lean_object* v___x_5839_; lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; lean_object* v___x_5843_; lean_object* v___x_5844_; lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; uint8_t v___x_5850_; 
lean_dec_ref_known(v___x_5822_, 1);
v___x_5831_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__16));
v___x_5832_ = lean_string_append(v___x_5831_, v_path_5589_);
v___x_5833_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_5834_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_5835_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_5836_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_5837_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_5838_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_5839_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__17));
v___x_5840_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21);
v___x_5841_ = lean_array_push(v___x_5840_, v___x_5832_);
v___x_5842_ = lean_array_push(v___x_5841_, v___x_5833_);
v___x_5843_ = lean_array_push(v___x_5842_, v___x_5834_);
v___x_5844_ = lean_array_push(v___x_5843_, v___x_5835_);
v___x_5845_ = lean_array_push(v___x_5844_, v___x_5836_);
v___x_5846_ = lean_array_push(v___x_5845_, v___x_5837_);
v___x_5847_ = lean_array_push(v___x_5846_, v___x_5838_);
v___x_5848_ = lean_array_push(v___x_5847_, v___x_5839_);
v___x_5849_ = l_Lake_Reservoir_lakeHeaders;
v___x_5850_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23);
if (v___x_5850_ == 0)
{
v___y_5824_ = v___x_5848_;
goto v___jp_5823_;
}
else
{
uint8_t v___x_5851_; 
v___x_5851_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24);
if (v___x_5851_ == 0)
{
if (v___x_5850_ == 0)
{
v___y_5824_ = v___x_5848_;
goto v___jp_5823_;
}
else
{
size_t v___x_5852_; lean_object* v___x_5853_; 
v___x_5852_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25);
v___x_5853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(v___x_5849_, v___x_5799_, v___x_5852_, v___x_5848_);
v___y_5824_ = v___x_5853_;
goto v___jp_5823_;
}
}
else
{
size_t v___x_5854_; lean_object* v___x_5855_; 
v___x_5854_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25);
v___x_5855_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(v___x_5849_, v___x_5799_, v___x_5854_, v___x_5848_);
v___y_5824_ = v___x_5855_;
goto v___jp_5823_;
}
}
v___jp_5823_:
{
lean_object* v___x_5825_; lean_object* v___x_5826_; lean_object* v___x_5827_; lean_object* v___x_5828_; 
v___x_5825_ = lean_unsigned_to_nat(0u);
v___x_5826_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5827_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_5828_ = lean_io_getenv(v___x_5827_);
if (lean_obj_tag(v___x_5828_) == 0)
{
lean_object* v___x_5829_; 
v___x_5829_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v___y_5801_ = v___x_5825_;
v___y_5802_ = v___x_5826_;
v___y_5803_ = v___y_5824_;
v_val_5804_ = v___x_5829_;
goto v___jp_5800_;
}
else
{
lean_object* v_val_5830_; 
v_val_5830_ = lean_ctor_get(v___x_5828_, 0);
lean_inc(v_val_5830_);
lean_dec_ref_known(v___x_5828_, 1);
v___y_5801_ = v___x_5825_;
v___y_5802_ = v___x_5826_;
v___y_5803_ = v___y_5824_;
v_val_5804_ = v_val_5830_;
goto v___jp_5800_;
}
}
}
else
{
lean_object* v_a_5856_; lean_object* v___x_5858_; uint8_t v_isShared_5859_; uint8_t v_isSharedCheck_5868_; 
lean_dec_ref(v_infos_5587_);
lean_dec_ref(v_url_5586_);
v_a_5856_ = lean_ctor_get(v___x_5822_, 0);
v_isSharedCheck_5868_ = !lean_is_exclusive(v___x_5822_);
if (v_isSharedCheck_5868_ == 0)
{
v___x_5858_ = v___x_5822_;
v_isShared_5859_ = v_isSharedCheck_5868_;
goto v_resetjp_5857_;
}
else
{
lean_inc(v_a_5856_);
lean_dec(v___x_5822_);
v___x_5858_ = lean_box(0);
v_isShared_5859_ = v_isSharedCheck_5868_;
goto v_resetjp_5857_;
}
v_resetjp_5857_:
{
lean_object* v___x_5860_; uint8_t v___x_5861_; lean_object* v___x_5862_; lean_object* v___x_5863_; lean_object* v___x_5864_; lean_object* v___x_5866_; 
v___x_5860_ = lean_io_error_to_string(v_a_5856_);
v___x_5861_ = 3;
v___x_5862_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5862_, 0, v___x_5860_);
lean_ctor_set_uint8(v___x_5862_, sizeof(void*)*1, v___x_5861_);
lean_inc_ref(v___y_5590_);
v___x_5863_ = lean_apply_2(v___y_5590_, v___x_5862_, lean_box(0));
v___x_5864_ = lean_box(0);
if (v_isShared_5859_ == 0)
{
lean_ctor_set(v___x_5858_, 0, v___x_5864_);
v___x_5866_ = v___x_5858_;
goto v_reusejp_5865_;
}
else
{
lean_object* v_reuseFailAlloc_5867_; 
v_reuseFailAlloc_5867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5867_, 0, v___x_5864_);
v___x_5866_ = v_reuseFailAlloc_5867_;
goto v_reusejp_5865_;
}
v_reusejp_5865_:
{
return v___x_5866_;
}
}
}
}
else
{
lean_object* v_a_5869_; lean_object* v___x_5871_; uint8_t v_isShared_5872_; uint8_t v_isSharedCheck_5881_; 
lean_dec_ref(v_infos_5587_);
lean_dec_ref(v_url_5586_);
v_a_5869_ = lean_ctor_get(v___x_5821_, 0);
v_isSharedCheck_5881_ = !lean_is_exclusive(v___x_5821_);
if (v_isSharedCheck_5881_ == 0)
{
v___x_5871_ = v___x_5821_;
v_isShared_5872_ = v_isSharedCheck_5881_;
goto v_resetjp_5870_;
}
else
{
lean_inc(v_a_5869_);
lean_dec(v___x_5821_);
v___x_5871_ = lean_box(0);
v_isShared_5872_ = v_isSharedCheck_5881_;
goto v_resetjp_5870_;
}
v_resetjp_5870_:
{
lean_object* v___x_5873_; uint8_t v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5879_; 
v___x_5873_ = lean_io_error_to_string(v_a_5869_);
v___x_5874_ = 3;
v___x_5875_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5875_, 0, v___x_5873_);
lean_ctor_set_uint8(v___x_5875_, sizeof(void*)*1, v___x_5874_);
lean_inc_ref(v___y_5590_);
v___x_5876_ = lean_apply_2(v___y_5590_, v___x_5875_, lean_box(0));
v___x_5877_ = lean_box(0);
if (v_isShared_5872_ == 0)
{
lean_ctor_set(v___x_5871_, 0, v___x_5877_);
v___x_5879_ = v___x_5871_;
goto v_reusejp_5878_;
}
else
{
lean_object* v_reuseFailAlloc_5880_; 
v_reuseFailAlloc_5880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5880_, 0, v___x_5877_);
v___x_5879_ = v_reuseFailAlloc_5880_;
goto v_reusejp_5878_;
}
v_reusejp_5878_:
{
return v___x_5879_;
}
}
}
v___jp_5592_:
{
lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; uint8_t v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; lean_object* v___x_5603_; 
v___x_5595_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__0));
v___x_5596_ = lean_uint32_to_nat(v___y_5593_);
v___x_5597_ = l_Nat_reprFast(v___x_5596_);
v___x_5598_ = lean_string_append(v___x_5595_, v___x_5597_);
lean_dec_ref(v___x_5597_);
v___x_5599_ = 3;
v___x_5600_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5600_, 0, v___x_5598_);
lean_ctor_set_uint8(v___x_5600_, sizeof(void*)*1, v___x_5599_);
lean_inc_ref(v___y_5594_);
v___x_5601_ = lean_apply_2(v___y_5594_, v___x_5600_, lean_box(0));
v___x_5602_ = lean_box(0);
v___x_5603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5603_, 0, v___x_5602_);
return v___x_5603_;
}
v___jp_5604_:
{
uint8_t v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; 
v___x_5611_ = 3;
v___x_5612_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5612_, 0, v_msg_5609_);
lean_ctor_set_uint8(v___x_5612_, sizeof(void*)*1, v___x_5611_);
lean_inc_ref_n(v___y_5610_, 2);
v___x_5613_ = lean_apply_2(v___y_5610_, v___x_5612_, lean_box(0));
v___x_5614_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__1));
v___x_5615_ = lean_string_utf8_byte_size(v___y_5605_);
lean_inc(v___y_5606_);
lean_inc_ref(v___y_5605_);
v___x_5616_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5616_, 0, v___y_5605_);
lean_ctor_set(v___x_5616_, 1, v___y_5606_);
lean_ctor_set(v___x_5616_, 2, v___x_5615_);
v___x_5617_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5616_, v___x_5615_);
lean_dec_ref_known(v___x_5616_, 3);
v___x_5618_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5618_, 0, v___y_5605_);
lean_ctor_set(v___x_5618_, 1, v___y_5606_);
lean_ctor_set(v___x_5618_, 2, v___x_5617_);
v___x_5619_ = l_String_Slice_toString(v___x_5618_);
lean_dec_ref_known(v___x_5618_, 3);
v___x_5620_ = lean_string_append(v___x_5614_, v___x_5619_);
lean_dec_ref(v___x_5619_);
v___x_5621_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5621_, 0, v___x_5620_);
lean_ctor_set_uint8(v___x_5621_, sizeof(void*)*1, v___y_5607_);
v___x_5622_ = lean_apply_2(v___y_5610_, v___x_5621_, lean_box(0));
v___y_5593_ = v___y_5608_;
v___y_5594_ = v___y_5610_;
goto v___jp_5592_;
}
v___jp_5623_:
{
lean_object* v___x_5631_; uint8_t v___x_5632_; 
v___x_5631_ = lean_string_utf8_byte_size(v___y_5628_);
v___x_5632_ = lean_nat_dec_eq(v___x_5631_, v___y_5625_);
if (v___x_5632_ == 0)
{
lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; 
v___x_5633_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__2));
v___x_5634_ = lean_string_append(v_msg_5629_, v___x_5633_);
lean_inc_n(v___y_5625_, 2);
lean_inc_ref(v___y_5628_);
v___x_5635_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5635_, 0, v___y_5628_);
lean_ctor_set(v___x_5635_, 1, v___y_5625_);
lean_ctor_set(v___x_5635_, 2, v___x_5631_);
v___x_5636_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5635_, v___x_5631_);
lean_dec_ref_known(v___x_5635_, 3);
v___x_5637_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5637_, 0, v___y_5628_);
lean_ctor_set(v___x_5637_, 1, v___y_5625_);
lean_ctor_set(v___x_5637_, 2, v___x_5636_);
v___x_5638_ = l_String_Slice_toString(v___x_5637_);
lean_dec_ref_known(v___x_5637_, 3);
v___x_5639_ = lean_string_append(v___x_5634_, v___x_5638_);
lean_dec_ref(v___x_5638_);
v___y_5605_ = v___y_5624_;
v___y_5606_ = v___y_5625_;
v___y_5607_ = v___y_5626_;
v___y_5608_ = v___y_5627_;
v_msg_5609_ = v___x_5639_;
v___y_5610_ = v___y_5630_;
goto v___jp_5604_;
}
else
{
lean_dec_ref(v___y_5628_);
v___y_5605_ = v___y_5624_;
v___y_5606_ = v___y_5625_;
v___y_5607_ = v___y_5626_;
v___y_5608_ = v___y_5627_;
v_msg_5609_ = v_msg_5629_;
v___y_5610_ = v___y_5630_;
goto v___jp_5604_;
}
}
v___jp_5640_:
{
lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; 
v___x_5648_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__3));
v___x_5649_ = lean_string_append(v_msg_5647_, v___x_5648_);
v___x_5650_ = lean_string_append(v___x_5649_, v_url_5586_);
lean_dec_ref(v_url_5586_);
v___x_5651_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4));
v___x_5652_ = l_Lake_JsonObject_getJson_x3f(v___y_5642_, v___x_5651_);
lean_dec(v___y_5642_);
if (lean_obj_tag(v___x_5652_) == 0)
{
v___y_5624_ = v___y_5641_;
v___y_5625_ = v___y_5643_;
v___y_5626_ = v___y_5644_;
v___y_5627_ = v___y_5645_;
v___y_5628_ = v___y_5646_;
v_msg_5629_ = v___x_5650_;
v___y_5630_ = v___y_5590_;
goto v___jp_5623_;
}
else
{
lean_object* v_val_5653_; lean_object* v___x_5654_; 
v_val_5653_ = lean_ctor_get(v___x_5652_, 0);
lean_inc(v_val_5653_);
lean_dec_ref_known(v___x_5652_, 1);
v___x_5654_ = l_Lean_Json_getStr_x3f(v_val_5653_);
if (lean_obj_tag(v___x_5654_) == 0)
{
lean_dec_ref_known(v___x_5654_, 1);
v___y_5624_ = v___y_5641_;
v___y_5625_ = v___y_5643_;
v___y_5626_ = v___y_5644_;
v___y_5627_ = v___y_5645_;
v___y_5628_ = v___y_5646_;
v_msg_5629_ = v___x_5650_;
v___y_5630_ = v___y_5590_;
goto v___jp_5623_;
}
else
{
if (lean_obj_tag(v___x_5654_) == 1)
{
lean_object* v_a_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; 
v_a_5655_ = lean_ctor_get(v___x_5654_, 0);
lean_inc(v_a_5655_);
lean_dec_ref_known(v___x_5654_, 1);
v___x_5656_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__4));
v___x_5657_ = lean_string_append(v___x_5650_, v___x_5656_);
v___x_5658_ = lean_string_append(v___x_5657_, v_a_5655_);
lean_dec(v_a_5655_);
v___y_5624_ = v___y_5641_;
v___y_5625_ = v___y_5643_;
v___y_5626_ = v___y_5644_;
v___y_5627_ = v___y_5645_;
v___y_5628_ = v___y_5646_;
v_msg_5629_ = v___x_5658_;
v___y_5630_ = v___y_5590_;
goto v___jp_5623_;
}
else
{
lean_dec_ref_known(v___x_5654_, 1);
v___y_5624_ = v___y_5641_;
v___y_5625_ = v___y_5643_;
v___y_5626_ = v___y_5644_;
v___y_5627_ = v___y_5645_;
v___y_5628_ = v___y_5646_;
v_msg_5629_ = v___x_5650_;
v___y_5630_ = v___y_5590_;
goto v___jp_5623_;
}
}
}
}
v___jp_5659_:
{
lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; uint8_t v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; uint8_t v___x_5681_; 
v___x_5665_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5));
v___x_5666_ = lean_string_append(v___x_5665_, v_url_5586_);
lean_dec_ref(v_url_5586_);
v___x_5667_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__6));
v___x_5668_ = lean_string_append(v___x_5666_, v___x_5667_);
v___x_5669_ = lean_string_append(v___x_5668_, v_a_5664_);
lean_dec_ref(v_a_5664_);
v___x_5670_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2));
v___x_5671_ = lean_string_append(v___x_5669_, v___x_5670_);
v___x_5672_ = lean_string_utf8_byte_size(v___y_5660_);
lean_inc(v___y_5661_);
v___x_5673_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5673_, 0, v___y_5660_);
lean_ctor_set(v___x_5673_, 1, v___y_5661_);
lean_ctor_set(v___x_5673_, 2, v___x_5672_);
v___x_5674_ = l_String_Slice_trimAscii(v___x_5673_);
v___x_5675_ = l_String_Slice_toString(v___x_5674_);
lean_dec_ref(v___x_5674_);
v___x_5676_ = lean_string_append(v___x_5671_, v___x_5675_);
lean_dec_ref(v___x_5675_);
v___x_5677_ = 3;
v___x_5678_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5678_, 0, v___x_5676_);
lean_ctor_set_uint8(v___x_5678_, sizeof(void*)*1, v___x_5677_);
lean_inc_ref(v___y_5590_);
v___x_5679_ = lean_apply_2(v___y_5590_, v___x_5678_, lean_box(0));
v___x_5680_ = lean_string_utf8_byte_size(v___y_5663_);
v___x_5681_ = lean_nat_dec_eq(v___x_5680_, v___y_5661_);
if (v___x_5681_ == 0)
{
lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; lean_object* v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; uint8_t v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; 
v___x_5682_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__7));
lean_inc(v___y_5661_);
lean_inc_ref(v___y_5663_);
v___x_5683_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5683_, 0, v___y_5663_);
lean_ctor_set(v___x_5683_, 1, v___y_5661_);
lean_ctor_set(v___x_5683_, 2, v___x_5680_);
v___x_5684_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5683_, v___x_5680_);
lean_dec_ref_known(v___x_5683_, 3);
v___x_5685_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5685_, 0, v___y_5663_);
lean_ctor_set(v___x_5685_, 1, v___y_5661_);
lean_ctor_set(v___x_5685_, 2, v___x_5684_);
v___x_5686_ = l_String_Slice_toString(v___x_5685_);
lean_dec_ref_known(v___x_5685_, 3);
v___x_5687_ = lean_string_append(v___x_5682_, v___x_5686_);
lean_dec_ref(v___x_5686_);
v___x_5688_ = 2;
v___x_5689_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5689_, 0, v___x_5687_);
lean_ctor_set_uint8(v___x_5689_, sizeof(void*)*1, v___x_5688_);
lean_inc_ref(v___y_5590_);
v___x_5690_ = lean_apply_2(v___y_5590_, v___x_5689_, lean_box(0));
v___y_5593_ = v___y_5662_;
v___y_5594_ = v___y_5590_;
goto v___jp_5592_;
}
else
{
lean_dec_ref(v___y_5663_);
lean_dec(v___y_5661_);
v___y_5593_ = v___y_5662_;
v___y_5594_ = v___y_5590_;
goto v___jp_5592_;
}
}
v___jp_5691_:
{
lean_object* v___x_5697_; 
lean_inc_ref(v___y_5692_);
v___x_5697_ = l_Lean_Json_parse(v___y_5692_);
if (lean_obj_tag(v___x_5697_) == 0)
{
lean_object* v_a_5698_; 
v_a_5698_ = lean_ctor_get(v___x_5697_, 0);
lean_inc(v_a_5698_);
lean_dec_ref_known(v___x_5697_, 1);
v___y_5660_ = v___y_5692_;
v___y_5661_ = v___y_5693_;
v___y_5662_ = v___y_5695_;
v___y_5663_ = v___y_5696_;
v_a_5664_ = v_a_5698_;
goto v___jp_5659_;
}
else
{
lean_object* v_a_5699_; lean_object* v___x_5700_; 
v_a_5699_ = lean_ctor_get(v___x_5697_, 0);
lean_inc(v_a_5699_);
lean_dec_ref_known(v___x_5697_, 1);
v___x_5700_ = l_Lean_Json_getObj_x3f(v_a_5699_);
if (lean_obj_tag(v___x_5700_) == 0)
{
lean_object* v_a_5701_; 
v_a_5701_ = lean_ctor_get(v___x_5700_, 0);
lean_inc(v_a_5701_);
lean_dec_ref_known(v___x_5700_, 1);
v___y_5660_ = v___y_5692_;
v___y_5661_ = v___y_5693_;
v___y_5662_ = v___y_5695_;
v___y_5663_ = v___y_5696_;
v_a_5664_ = v_a_5701_;
goto v___jp_5659_;
}
else
{
lean_object* v_a_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; 
v_a_5702_ = lean_ctor_get(v___x_5700_, 0);
lean_inc(v_a_5702_);
lean_dec_ref_known(v___x_5700_, 1);
v___x_5703_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__8));
v___x_5704_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_5705_ = l_Lake_JsonObject_getJson_x3f(v_a_5702_, v___x_5704_);
if (lean_obj_tag(v___x_5705_) == 0)
{
v___y_5641_ = v___y_5692_;
v___y_5642_ = v_a_5702_;
v___y_5643_ = v___y_5693_;
v___y_5644_ = v___y_5694_;
v___y_5645_ = v___y_5695_;
v___y_5646_ = v___y_5696_;
v_msg_5647_ = v___x_5703_;
goto v___jp_5640_;
}
else
{
lean_object* v_val_5706_; lean_object* v___x_5707_; 
v_val_5706_ = lean_ctor_get(v___x_5705_, 0);
lean_inc(v_val_5706_);
lean_dec_ref_known(v___x_5705_, 1);
v___x_5707_ = l_Lean_Json_getNat_x3f(v_val_5706_);
if (lean_obj_tag(v___x_5707_) == 0)
{
lean_dec_ref_known(v___x_5707_, 1);
v___y_5641_ = v___y_5692_;
v___y_5642_ = v_a_5702_;
v___y_5643_ = v___y_5693_;
v___y_5644_ = v___y_5694_;
v___y_5645_ = v___y_5695_;
v___y_5646_ = v___y_5696_;
v_msg_5647_ = v___x_5703_;
goto v___jp_5640_;
}
else
{
if (lean_obj_tag(v___x_5707_) == 1)
{
lean_object* v_a_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; 
v_a_5708_ = lean_ctor_get(v___x_5707_, 0);
lean_inc(v_a_5708_);
lean_dec_ref_known(v___x_5707_, 1);
v___x_5709_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9));
v___x_5710_ = l_Nat_reprFast(v_a_5708_);
v___x_5711_ = lean_string_append(v___x_5709_, v___x_5710_);
lean_dec_ref(v___x_5710_);
v___x_5712_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9));
v___x_5713_ = lean_string_append(v___x_5711_, v___x_5712_);
v___y_5641_ = v___y_5692_;
v___y_5642_ = v_a_5702_;
v___y_5643_ = v___y_5693_;
v___y_5644_ = v___y_5694_;
v___y_5645_ = v___y_5695_;
v___y_5646_ = v___y_5696_;
v_msg_5647_ = v___x_5713_;
goto v___jp_5640_;
}
else
{
lean_dec_ref_known(v___x_5707_, 1);
v___y_5641_ = v___y_5692_;
v___y_5642_ = v_a_5702_;
v___y_5643_ = v___y_5693_;
v___y_5644_ = v___y_5694_;
v___y_5645_ = v___y_5695_;
v___y_5646_ = v___y_5696_;
v_msg_5647_ = v___x_5703_;
goto v___jp_5640_;
}
}
}
}
}
}
v___jp_5714_:
{
lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; uint8_t v___x_5722_; uint8_t v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; uint8_t v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; 
v___x_5717_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3));
lean_inc_ref(v_url_5586_);
v___x_5718_ = lean_array_push(v___y_5715_, v_url_5586_);
v___x_5719_ = lean_box(0);
v___x_5720_ = lean_unsigned_to_nat(0u);
v___x_5721_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_5722_ = 1;
v___x_5723_ = 0;
v___x_5724_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_5724_, 0, v___x_5717_);
lean_ctor_set(v___x_5724_, 1, v_a_5716_);
lean_ctor_set(v___x_5724_, 2, v___x_5718_);
lean_ctor_set(v___x_5724_, 3, v___x_5719_);
lean_ctor_set(v___x_5724_, 4, v___x_5721_);
lean_ctor_set_uint8(v___x_5724_, sizeof(void*)*5, v___x_5722_);
lean_ctor_set_uint8(v___x_5724_, sizeof(void*)*5 + 1, v___x_5723_);
lean_inc_ref(v___x_5724_);
v___x_5725_ = l_Lake_mkCmdLog(v___x_5724_);
v___x_5726_ = 0;
v___x_5727_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5727_, 0, v___x_5725_);
lean_ctor_set_uint8(v___x_5727_, sizeof(void*)*1, v___x_5726_);
lean_inc_ref(v___y_5590_);
v___x_5728_ = lean_apply_2(v___y_5590_, v___x_5727_, lean_box(0));
v___x_5729_ = l_IO_Process_output(v___x_5724_, v___x_5719_);
if (lean_obj_tag(v___x_5729_) == 0)
{
lean_object* v_a_5730_; lean_object* v___x_5732_; uint8_t v_isShared_5733_; uint8_t v_isSharedCheck_5784_; 
v_a_5730_ = lean_ctor_get(v___x_5729_, 0);
v_isSharedCheck_5784_ = !lean_is_exclusive(v___x_5729_);
if (v_isSharedCheck_5784_ == 0)
{
v___x_5732_ = v___x_5729_;
v_isShared_5733_ = v_isSharedCheck_5784_;
goto v_resetjp_5731_;
}
else
{
lean_inc(v_a_5730_);
lean_dec(v___x_5729_);
v___x_5732_ = lean_box(0);
v_isShared_5733_ = v_isSharedCheck_5784_;
goto v_resetjp_5731_;
}
v_resetjp_5731_:
{
uint32_t v_exitCode_5734_; lean_object* v_stdout_5735_; lean_object* v_stderr_5736_; lean_object* v___x_5737_; 
v_exitCode_5734_ = lean_ctor_get_uint32(v_a_5730_, sizeof(void*)*2);
v_stdout_5735_ = lean_ctor_get(v_a_5730_, 0);
lean_inc_ref_n(v_stdout_5735_, 2);
v_stderr_5736_ = lean_ctor_get(v_a_5730_, 1);
lean_inc_ref(v_stderr_5736_);
lean_dec(v_a_5730_);
v___x_5737_ = l_Lean_Json_parse(v_stdout_5735_);
if (lean_obj_tag(v___x_5737_) == 0)
{
lean_dec_ref_known(v___x_5737_, 1);
lean_del_object(v___x_5732_);
lean_dec_ref(v_infos_5587_);
v___y_5692_ = v_stderr_5736_;
v___y_5693_ = v___x_5720_;
v___y_5694_ = v___x_5726_;
v___y_5695_ = v_exitCode_5734_;
v___y_5696_ = v_stdout_5735_;
goto v___jp_5691_;
}
else
{
lean_object* v_a_5738_; lean_object* v___x_5739_; 
v_a_5738_ = lean_ctor_get(v___x_5737_, 0);
lean_inc(v_a_5738_);
lean_dec_ref_known(v___x_5737_, 1);
v___x_5739_ = l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1(v_a_5738_);
if (lean_obj_tag(v___x_5739_) == 0)
{
lean_dec_ref_known(v___x_5739_, 1);
lean_del_object(v___x_5732_);
lean_dec_ref(v_infos_5587_);
v___y_5692_ = v_stderr_5736_;
v___y_5693_ = v___x_5720_;
v___y_5694_ = v___x_5726_;
v___y_5695_ = v_exitCode_5734_;
v___y_5696_ = v_stdout_5735_;
goto v___jp_5691_;
}
else
{
lean_object* v_a_5740_; 
lean_dec_ref(v_stderr_5736_);
lean_dec_ref(v_stdout_5735_);
v_a_5740_ = lean_ctor_get(v___x_5739_, 0);
lean_inc(v_a_5740_);
lean_dec_ref_known(v___x_5739_, 1);
if (lean_obj_tag(v_a_5740_) == 0)
{
lean_object* v_a_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; uint8_t v___x_5744_; 
v_a_5741_ = lean_ctor_get(v_a_5740_, 0);
lean_inc(v_a_5741_);
lean_dec_ref_known(v_a_5740_, 1);
v___x_5742_ = lean_array_get_size(v_infos_5587_);
v___x_5743_ = lean_array_get_size(v_a_5741_);
v___x_5744_ = lean_nat_dec_eq(v___x_5742_, v___x_5743_);
if (v___x_5744_ == 0)
{
lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; uint8_t v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5760_; 
lean_dec(v_a_5741_);
lean_dec_ref(v_infos_5587_);
v___x_5745_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5));
v___x_5746_ = lean_string_append(v___x_5745_, v_url_5586_);
lean_dec_ref(v_url_5586_);
v___x_5747_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__10));
v___x_5748_ = lean_string_append(v___x_5746_, v___x_5747_);
v___x_5749_ = l_Nat_reprFast(v___x_5742_);
v___x_5750_ = lean_string_append(v___x_5748_, v___x_5749_);
lean_dec_ref(v___x_5749_);
v___x_5751_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__11));
v___x_5752_ = lean_string_append(v___x_5750_, v___x_5751_);
v___x_5753_ = l_Nat_reprFast(v___x_5743_);
v___x_5754_ = lean_string_append(v___x_5752_, v___x_5753_);
lean_dec_ref(v___x_5753_);
v___x_5755_ = 3;
v___x_5756_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5756_, 0, v___x_5754_);
lean_ctor_set_uint8(v___x_5756_, sizeof(void*)*1, v___x_5755_);
lean_inc_ref(v___y_5590_);
v___x_5757_ = lean_apply_2(v___y_5590_, v___x_5756_, lean_box(0));
v___x_5758_ = lean_box(0);
if (v_isShared_5733_ == 0)
{
lean_ctor_set_tag(v___x_5732_, 1);
lean_ctor_set(v___x_5732_, 0, v___x_5758_);
v___x_5760_ = v___x_5732_;
goto v_reusejp_5759_;
}
else
{
lean_object* v_reuseFailAlloc_5761_; 
v_reuseFailAlloc_5761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5761_, 0, v___x_5758_);
v___x_5760_ = v_reuseFailAlloc_5761_;
goto v_reusejp_5759_;
}
v_reusejp_5759_:
{
return v___x_5760_;
}
}
else
{
lean_object* v___x_5762_; lean_object* v___x_5764_; 
lean_dec_ref(v_url_5586_);
v___x_5762_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(v_a_5741_, v___x_5742_, v___x_5742_, v_infos_5587_);
lean_dec(v_a_5741_);
if (v_isShared_5733_ == 0)
{
lean_ctor_set(v___x_5732_, 0, v___x_5762_);
v___x_5764_ = v___x_5732_;
goto v_reusejp_5763_;
}
else
{
lean_object* v_reuseFailAlloc_5765_; 
v_reuseFailAlloc_5765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5765_, 0, v___x_5762_);
v___x_5764_ = v_reuseFailAlloc_5765_;
goto v_reusejp_5763_;
}
v_reusejp_5763_:
{
return v___x_5764_;
}
}
}
else
{
lean_object* v_status_5766_; lean_object* v_message_5767_; lean_object* v___x_5768_; lean_object* v___x_5769_; lean_object* v___x_5770_; lean_object* v___x_5771_; lean_object* v___x_5772_; lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v___x_5776_; uint8_t v___x_5777_; lean_object* v___x_5778_; lean_object* v___x_5779_; lean_object* v___x_5780_; lean_object* v___x_5782_; 
lean_dec_ref(v_infos_5587_);
v_status_5766_ = lean_ctor_get(v_a_5740_, 0);
lean_inc(v_status_5766_);
v_message_5767_ = lean_ctor_get(v_a_5740_, 1);
lean_inc_ref(v_message_5767_);
lean_dec_ref_known(v_a_5740_, 2);
v___x_5768_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9));
v___x_5769_ = l_Nat_reprFast(v_status_5766_);
v___x_5770_ = lean_string_append(v___x_5768_, v___x_5769_);
lean_dec_ref(v___x_5769_);
v___x_5771_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__12));
v___x_5772_ = lean_string_append(v___x_5770_, v___x_5771_);
v___x_5773_ = lean_string_append(v___x_5772_, v_url_5586_);
lean_dec_ref(v_url_5586_);
v___x_5774_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__13));
v___x_5775_ = lean_string_append(v___x_5773_, v___x_5774_);
v___x_5776_ = lean_string_append(v___x_5775_, v_message_5767_);
lean_dec_ref(v_message_5767_);
v___x_5777_ = 3;
v___x_5778_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5778_, 0, v___x_5776_);
lean_ctor_set_uint8(v___x_5778_, sizeof(void*)*1, v___x_5777_);
lean_inc_ref(v___y_5590_);
v___x_5779_ = lean_apply_2(v___y_5590_, v___x_5778_, lean_box(0));
v___x_5780_ = lean_box(0);
if (v_isShared_5733_ == 0)
{
lean_ctor_set_tag(v___x_5732_, 1);
lean_ctor_set(v___x_5732_, 0, v___x_5780_);
v___x_5782_ = v___x_5732_;
goto v_reusejp_5781_;
}
else
{
lean_object* v_reuseFailAlloc_5783_; 
v_reuseFailAlloc_5783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5783_, 0, v___x_5780_);
v___x_5782_ = v_reuseFailAlloc_5783_;
goto v_reusejp_5781_;
}
v_reusejp_5781_:
{
return v___x_5782_;
}
}
}
}
}
}
else
{
lean_object* v_a_5785_; lean_object* v___x_5787_; uint8_t v_isShared_5788_; uint8_t v_isSharedCheck_5797_; 
lean_dec_ref(v_infos_5587_);
lean_dec_ref(v_url_5586_);
v_a_5785_ = lean_ctor_get(v___x_5729_, 0);
v_isSharedCheck_5797_ = !lean_is_exclusive(v___x_5729_);
if (v_isSharedCheck_5797_ == 0)
{
v___x_5787_ = v___x_5729_;
v_isShared_5788_ = v_isSharedCheck_5797_;
goto v_resetjp_5786_;
}
else
{
lean_inc(v_a_5785_);
lean_dec(v___x_5729_);
v___x_5787_ = lean_box(0);
v_isShared_5788_ = v_isSharedCheck_5797_;
goto v_resetjp_5786_;
}
v_resetjp_5786_:
{
lean_object* v___x_5789_; uint8_t v___x_5790_; lean_object* v___x_5791_; lean_object* v___x_5792_; lean_object* v___x_5793_; lean_object* v___x_5795_; 
v___x_5789_ = lean_io_error_to_string(v_a_5785_);
v___x_5790_ = 3;
v___x_5791_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5791_, 0, v___x_5789_);
lean_ctor_set_uint8(v___x_5791_, sizeof(void*)*1, v___x_5790_);
lean_inc_ref(v___y_5590_);
v___x_5792_ = lean_apply_2(v___y_5590_, v___x_5791_, lean_box(0));
v___x_5793_ = lean_box(0);
if (v_isShared_5788_ == 0)
{
lean_ctor_set(v___x_5787_, 0, v___x_5793_);
v___x_5795_ = v___x_5787_;
goto v_reusejp_5794_;
}
else
{
lean_object* v_reuseFailAlloc_5796_; 
v_reuseFailAlloc_5796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5796_, 0, v___x_5793_);
v___x_5795_ = v_reuseFailAlloc_5796_;
goto v_reusejp_5794_;
}
v_reusejp_5794_:
{
return v___x_5795_;
}
}
}
}
v___jp_5800_:
{
lean_object* v___x_5805_; uint8_t v___x_5806_; 
v___x_5805_ = lean_array_get_size(v___y_5802_);
v___x_5806_ = lean_nat_dec_lt(v___y_5801_, v___x_5805_);
if (v___x_5806_ == 0)
{
v___y_5715_ = v___y_5803_;
v_a_5716_ = v_val_5804_;
goto v___jp_5714_;
}
else
{
lean_object* v___x_5807_; size_t v___x_5808_; lean_object* v___x_5809_; 
v___x_5807_ = lean_box(0);
v___x_5808_ = lean_usize_of_nat(v___x_5805_);
v___x_5809_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_5802_, v___x_5799_, v___x_5808_, v___x_5807_, v___y_5590_);
if (lean_obj_tag(v___x_5809_) == 0)
{
lean_dec_ref_known(v___x_5809_, 1);
v___y_5715_ = v___y_5803_;
v_a_5716_ = v_val_5804_;
goto v___jp_5714_;
}
else
{
lean_object* v_a_5810_; lean_object* v___x_5812_; uint8_t v_isShared_5813_; uint8_t v_isSharedCheck_5817_; 
lean_dec_ref(v_val_5804_);
lean_dec_ref(v___y_5803_);
lean_dec_ref(v_infos_5587_);
lean_dec_ref(v_url_5586_);
v_a_5810_ = lean_ctor_get(v___x_5809_, 0);
v_isSharedCheck_5817_ = !lean_is_exclusive(v___x_5809_);
if (v_isSharedCheck_5817_ == 0)
{
v___x_5812_ = v___x_5809_;
v_isShared_5813_ = v_isSharedCheck_5817_;
goto v_resetjp_5811_;
}
else
{
lean_inc(v_a_5810_);
lean_dec(v___x_5809_);
v___x_5812_ = lean_box(0);
v_isShared_5813_ = v_isSharedCheck_5817_;
goto v_resetjp_5811_;
}
v_resetjp_5811_:
{
lean_object* v___x_5815_; 
if (v_isShared_5813_ == 0)
{
v___x_5815_ = v___x_5812_;
goto v_reusejp_5814_;
}
else
{
lean_object* v_reuseFailAlloc_5816_; 
v_reuseFailAlloc_5816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5816_, 0, v_a_5810_);
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
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___boxed(lean_object* v_url_5882_, lean_object* v_infos_5883_, lean_object* v_h_5884_, lean_object* v_path_5885_, lean_object* v___y_5886_, lean_object* v___y_5887_){
_start:
{
lean_object* v_res_5888_; 
v_res_5888_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0(v_url_5882_, v_infos_5883_, v_h_5884_, v_path_5885_, v___y_5886_);
lean_dec_ref(v___y_5886_);
lean_dec_ref(v_path_5885_);
lean_dec(v_h_5884_);
return v_res_5888_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls(lean_object* v_url_5889_, lean_object* v_infos_5890_, lean_object* v_a_5891_){
_start:
{
lean_object* v___f_5893_; lean_object* v___x_5894_; 
v___f_5893_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___boxed), 6, 2);
lean_closure_set(v___f_5893_, 0, v_url_5889_);
lean_closure_set(v___f_5893_, 1, v_infos_5890_);
v___x_5894_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v___f_5893_, v_a_5891_);
return v___x_5894_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___boxed(lean_object* v_url_5895_, lean_object* v_infos_5896_, lean_object* v_a_5897_, lean_object* v___y_5898_){
_start:
{
lean_object* v_res_5899_; 
v_res_5899_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls(v_url_5895_, v_infos_5896_, v_a_5897_);
lean_dec_ref(v_a_5897_);
return v_res_5899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2(lean_object* v_a_5900_, lean_object* v___x_5901_, lean_object* v_n_5902_, lean_object* v_j_5903_, lean_object* v_a_5904_, lean_object* v_a_5905_){
_start:
{
lean_object* v___x_5906_; 
v___x_5906_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(v_a_5900_, v_n_5902_, v_j_5903_, v_a_5905_);
return v___x_5906_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___boxed(lean_object* v_a_5907_, lean_object* v___x_5908_, lean_object* v_n_5909_, lean_object* v_j_5910_, lean_object* v_a_5911_, lean_object* v_a_5912_){
_start:
{
lean_object* v_res_5913_; 
v_res_5913_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2(v_a_5907_, v___x_5908_, v_n_5909_, v_j_5910_, v_a_5911_, v_a_5912_);
lean_dec(v_n_5909_);
lean_dec(v___x_5908_);
lean_dec_ref(v_a_5907_);
return v_res_5913_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0(lean_object* v_cfg_5914_, lean_object* v_h_5915_, lean_object* v_path_5916_, lean_object* v___y_5917_){
_start:
{
uint32_t v___y_5923_; lean_object* v___y_5924_; lean_object* v___y_5925_; uint8_t v_kind_5934_; lean_object* v_scope_5935_; lean_object* v_infos_5936_; lean_object* v_key_5937_; uint32_t v___y_5939_; uint8_t v___y_5940_; lean_object* v___y_5941_; lean_object* v___y_5948_; uint32_t v___y_5949_; lean_object* v___y_5950_; lean_object* v___y_5951_; lean_object* v___y_5952_; uint8_t v___y_5953_; lean_object* v___y_5954_; uint32_t v___y_5966_; lean_object* v___y_5967_; lean_object* v___y_5968_; uint8_t v_didError_5969_; lean_object* v___y_5970_; uint32_t v___y_5975_; lean_object* v___y_5976_; lean_object* v___y_5977_; lean_object* v___y_5978_; uint8_t v___y_5979_; lean_object* v___y_5980_; uint32_t v___y_5990_; lean_object* v___y_5991_; lean_object* v___y_5992_; uint8_t v___y_5993_; lean_object* v___y_5994_; lean_object* v___y_5997_; lean_object* v_a_5998_; lean_object* v___y_6074_; lean_object* v___y_6075_; lean_object* v___y_6076_; lean_object* v_val_6077_; lean_object* v_a_6085_; 
v_kind_5934_ = lean_ctor_get_uint8(v_cfg_5914_, sizeof(void*)*3);
v_scope_5935_ = lean_ctor_get(v_cfg_5914_, 0);
lean_inc_ref(v_scope_5935_);
v_infos_5936_ = lean_ctor_get(v_cfg_5914_, 1);
lean_inc_ref(v_infos_5936_);
v_key_5937_ = lean_ctor_get(v_cfg_5914_, 2);
if (v_kind_5934_ == 0)
{
lean_object* v___x_6139_; lean_object* v___x_6140_; uint8_t v___x_6141_; 
v___x_6139_ = lean_unsigned_to_nat(0u);
v___x_6140_ = lean_array_get_size(v_infos_5936_);
v___x_6141_ = lean_nat_dec_lt(v___x_6139_, v___x_6140_);
if (v___x_6141_ == 0)
{
goto v___jp_6092_;
}
else
{
lean_object* v___x_6142_; size_t v___x_6143_; size_t v___x_6144_; lean_object* v___x_6145_; 
v___x_6142_ = lean_box(0);
v___x_6143_ = ((size_t)0ULL);
v___x_6144_ = lean_usize_of_nat(v___x_6140_);
v___x_6145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_5915_, v_infos_5936_, v___x_6143_, v___x_6144_, v___x_6142_, v___y_5917_);
if (lean_obj_tag(v___x_6145_) == 0)
{
lean_dec_ref_known(v___x_6145_, 1);
goto v___jp_6092_;
}
else
{
lean_dec_ref(v_infos_5936_);
lean_dec_ref(v_scope_5935_);
lean_dec_ref(v_path_5916_);
lean_dec_ref(v_cfg_5914_);
return v___x_6145_;
}
}
}
else
{
lean_object* v___x_6146_; lean_object* v___x_6147_; uint8_t v___x_6148_; 
v___x_6146_ = lean_unsigned_to_nat(0u);
v___x_6147_ = lean_array_get_size(v_infos_5936_);
v___x_6148_ = lean_nat_dec_lt(v___x_6146_, v___x_6147_);
if (v___x_6148_ == 0)
{
goto v___jp_6111_;
}
else
{
lean_object* v___x_6149_; size_t v___x_6150_; size_t v___x_6151_; lean_object* v___x_6152_; 
v___x_6149_ = lean_box(0);
v___x_6150_ = ((size_t)0ULL);
v___x_6151_ = lean_usize_of_nat(v___x_6147_);
v___x_6152_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_5915_, v_infos_5936_, v___x_6150_, v___x_6151_, v___x_6149_, v___y_5917_);
if (lean_obj_tag(v___x_6152_) == 0)
{
lean_dec_ref_known(v___x_6152_, 1);
goto v___jp_6111_;
}
else
{
lean_dec_ref(v_infos_5936_);
lean_dec_ref(v_scope_5935_);
lean_dec_ref(v_path_5916_);
lean_dec_ref(v_cfg_5914_);
return v___x_6152_;
}
}
}
v___jp_5919_:
{
lean_object* v___x_5920_; lean_object* v___x_5921_; 
v___x_5920_ = lean_box(0);
v___x_5921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5921_, 0, v___x_5920_);
return v___x_5921_;
}
v___jp_5922_:
{
lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; uint8_t v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; 
v___x_5926_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0));
v___x_5927_ = lean_string_append(v___y_5925_, v___x_5926_);
v___x_5928_ = lean_uint32_to_nat(v___y_5923_);
v___x_5929_ = l_Nat_reprFast(v___x_5928_);
v___x_5930_ = lean_string_append(v___x_5927_, v___x_5929_);
lean_dec_ref(v___x_5929_);
v___x_5931_ = 3;
v___x_5932_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5932_, 0, v___x_5930_);
lean_ctor_set_uint8(v___x_5932_, sizeof(void*)*1, v___x_5931_);
lean_inc_ref(v___y_5924_);
v___x_5933_ = lean_apply_2(v___y_5924_, v___x_5932_, lean_box(0));
goto v___jp_5919_;
}
v___jp_5938_:
{
uint32_t v___x_5942_; uint8_t v___x_5943_; 
v___x_5942_ = 0;
v___x_5943_ = lean_uint32_dec_eq(v___y_5939_, v___x_5942_);
if (v___x_5943_ == 0)
{
lean_object* v_s_5944_; 
v_s_5944_ = lean_ctor_get(v_scope_5935_, 0);
lean_inc_ref(v_s_5944_);
lean_dec_ref(v_scope_5935_);
v___y_5923_ = v___y_5939_;
v___y_5924_ = v___y_5941_;
v___y_5925_ = v_s_5944_;
goto v___jp_5922_;
}
else
{
lean_dec_ref(v_scope_5935_);
if (v___y_5940_ == 0)
{
lean_object* v___x_5945_; lean_object* v___x_5946_; 
v___x_5945_ = lean_box(0);
v___x_5946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5946_, 0, v___x_5945_);
return v___x_5946_;
}
else
{
goto v___jp_5919_;
}
}
}
v___jp_5947_:
{
lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; uint8_t v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; 
v___x_5955_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1));
v___x_5956_ = lean_string_append(v___y_5954_, v___x_5955_);
lean_inc(v___y_5948_);
lean_inc(v___y_5950_);
lean_inc_ref(v___y_5951_);
v___x_5957_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5957_, 0, v___y_5951_);
lean_ctor_set(v___x_5957_, 1, v___y_5950_);
lean_ctor_set(v___x_5957_, 2, v___y_5948_);
v___x_5958_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5957_, v___y_5948_);
lean_dec_ref_known(v___x_5957_, 3);
v___x_5959_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5959_, 0, v___y_5951_);
lean_ctor_set(v___x_5959_, 1, v___y_5950_);
lean_ctor_set(v___x_5959_, 2, v___x_5958_);
v___x_5960_ = l_String_Slice_toString(v___x_5959_);
lean_dec_ref_known(v___x_5959_, 3);
v___x_5961_ = lean_string_append(v___x_5956_, v___x_5960_);
lean_dec_ref(v___x_5960_);
v___x_5962_ = 2;
v___x_5963_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5963_, 0, v___x_5961_);
lean_ctor_set_uint8(v___x_5963_, sizeof(void*)*1, v___x_5962_);
lean_inc_ref(v___y_5952_);
v___x_5964_ = lean_apply_2(v___y_5952_, v___x_5963_, lean_box(0));
v___y_5939_ = v___y_5949_;
v___y_5940_ = v___y_5953_;
v___y_5941_ = v___y_5952_;
goto v___jp_5938_;
}
v___jp_5965_:
{
lean_object* v___x_5971_; uint8_t v___x_5972_; 
v___x_5971_ = lean_string_utf8_byte_size(v___y_5968_);
v___x_5972_ = lean_nat_dec_eq(v___x_5971_, v___y_5967_);
if (v___x_5972_ == 0)
{
lean_object* v_s_5973_; 
v_s_5973_ = lean_ctor_get(v_scope_5935_, 0);
lean_inc_ref(v_s_5973_);
v___y_5948_ = v___x_5971_;
v___y_5949_ = v___y_5966_;
v___y_5950_ = v___y_5967_;
v___y_5951_ = v___y_5968_;
v___y_5952_ = v___y_5970_;
v___y_5953_ = v_didError_5969_;
v___y_5954_ = v_s_5973_;
goto v___jp_5947_;
}
else
{
lean_dec_ref(v___y_5968_);
lean_dec(v___y_5967_);
v___y_5939_ = v___y_5966_;
v___y_5940_ = v_didError_5969_;
v___y_5941_ = v___y_5970_;
goto v___jp_5938_;
}
}
v___jp_5974_:
{
lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; uint8_t v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; 
v___x_5981_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_5982_ = lean_string_append(v___y_5980_, v___x_5981_);
v___x_5983_ = lean_string_append(v___x_5982_, v___y_5978_);
v___x_5984_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2));
v___x_5985_ = lean_string_append(v___x_5983_, v___x_5984_);
v___x_5986_ = 3;
v___x_5987_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5987_, 0, v___x_5985_);
lean_ctor_set_uint8(v___x_5987_, sizeof(void*)*1, v___x_5986_);
lean_inc_ref(v___y_5917_);
v___x_5988_ = lean_apply_2(v___y_5917_, v___x_5987_, lean_box(0));
v___y_5966_ = v___y_5975_;
v___y_5967_ = v___y_5976_;
v___y_5968_ = v___y_5977_;
v_didError_5969_ = v___y_5979_;
v___y_5970_ = v___y_5917_;
goto v___jp_5965_;
}
v___jp_5989_:
{
lean_object* v_s_5995_; 
v_s_5995_ = lean_ctor_get(v_scope_5935_, 0);
lean_inc_ref(v_s_5995_);
v___y_5975_ = v___y_5990_;
v___y_5976_ = v___y_5991_;
v___y_5977_ = v___y_5992_;
v___y_5978_ = v___y_5994_;
v___y_5979_ = v___y_5993_;
v___y_5980_ = v_s_5995_;
goto v___jp_5974_;
}
v___jp_5996_:
{
lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; lean_object* v___x_6002_; uint8_t v___x_6003_; uint8_t v___x_6004_; lean_object* v___x_6005_; lean_object* v___x_6006_; 
v___x_5999_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3));
v___x_6000_ = lean_box(0);
v___x_6001_ = lean_unsigned_to_nat(0u);
v___x_6002_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_6003_ = 1;
v___x_6004_ = 0;
v___x_6005_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_6005_, 0, v___x_5999_);
lean_ctor_set(v___x_6005_, 1, v_a_5998_);
lean_ctor_set(v___x_6005_, 2, v___y_5997_);
lean_ctor_set(v___x_6005_, 3, v___x_6000_);
lean_ctor_set(v___x_6005_, 4, v___x_6002_);
lean_ctor_set_uint8(v___x_6005_, sizeof(void*)*5, v___x_6003_);
lean_ctor_set_uint8(v___x_6005_, sizeof(void*)*5 + 1, v___x_6004_);
v___x_6006_ = lean_io_process_spawn(v___x_6005_);
if (lean_obj_tag(v___x_6006_) == 0)
{
lean_object* v_a_6007_; lean_object* v_stdout_6008_; lean_object* v_stderr_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; 
v_a_6007_ = lean_ctor_get(v___x_6006_, 0);
lean_inc(v_a_6007_);
lean_dec_ref_known(v___x_6006_, 1);
v_stdout_6008_ = lean_ctor_get(v_a_6007_, 1);
lean_inc_n(v_stdout_6008_, 2);
v_stderr_6009_ = lean_ctor_get(v_a_6007_, 2);
v___x_6010_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4));
v___x_6011_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_5914_, v_stderr_6009_, v_stdout_6008_, v___x_6010_, v___y_5917_);
if (lean_obj_tag(v___x_6011_) == 0)
{
lean_object* v_a_6012_; lean_object* v___x_6013_; 
v_a_6012_ = lean_ctor_get(v___x_6011_, 0);
lean_inc(v_a_6012_);
lean_dec_ref_known(v___x_6011_, 1);
v___x_6013_ = lean_io_process_child_wait(v___x_5999_, v_a_6007_);
lean_dec(v_a_6007_);
if (lean_obj_tag(v___x_6013_) == 0)
{
lean_object* v_a_6014_; lean_object* v___x_6015_; 
v_a_6014_ = lean_ctor_get(v___x_6013_, 0);
lean_inc(v_a_6014_);
lean_dec_ref_known(v___x_6013_, 1);
v___x_6015_ = l_IO_FS_Handle_readToEnd(v_stdout_6008_);
lean_dec(v_stdout_6008_);
if (lean_obj_tag(v___x_6015_) == 0)
{
lean_object* v_a_6016_; uint8_t v_didError_6017_; lean_object* v_numSuccesses_6018_; lean_object* v___x_6019_; uint8_t v___x_6020_; 
v_a_6016_ = lean_ctor_get(v___x_6015_, 0);
lean_inc(v_a_6016_);
lean_dec_ref_known(v___x_6015_, 1);
v_didError_6017_ = lean_ctor_get_uint8(v_a_6012_, sizeof(void*)*1);
v_numSuccesses_6018_ = lean_ctor_get(v_a_6012_, 0);
lean_inc(v_numSuccesses_6018_);
lean_dec(v_a_6012_);
v___x_6019_ = lean_array_get_size(v_infos_5936_);
lean_dec_ref(v_infos_5936_);
v___x_6020_ = lean_nat_dec_lt(v_numSuccesses_6018_, v___x_6019_);
lean_dec(v_numSuccesses_6018_);
if (v___x_6020_ == 0)
{
uint32_t v___x_6021_; 
v___x_6021_ = lean_unbox_uint32(v_a_6014_);
lean_dec(v_a_6014_);
v___y_5966_ = v___x_6021_;
v___y_5967_ = v___x_6001_;
v___y_5968_ = v_a_6016_;
v_didError_5969_ = v_didError_6017_;
v___y_5970_ = v___y_5917_;
goto v___jp_5965_;
}
else
{
if (v_kind_5934_ == 0)
{
lean_object* v___x_6022_; uint32_t v___x_6023_; 
v___x_6022_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___x_6023_ = lean_unbox_uint32(v_a_6014_);
lean_dec(v_a_6014_);
v___y_5990_ = v___x_6023_;
v___y_5991_ = v___x_6001_;
v___y_5992_ = v_a_6016_;
v___y_5993_ = v___x_6003_;
v___y_5994_ = v___x_6022_;
goto v___jp_5989_;
}
else
{
lean_object* v___x_6024_; uint32_t v___x_6025_; 
v___x_6024_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___x_6025_ = lean_unbox_uint32(v_a_6014_);
lean_dec(v_a_6014_);
v___y_5990_ = v___x_6025_;
v___y_5991_ = v___x_6001_;
v___y_5992_ = v_a_6016_;
v___y_5993_ = v___x_6003_;
v___y_5994_ = v___x_6024_;
goto v___jp_5989_;
}
}
}
else
{
lean_object* v_a_6026_; lean_object* v___x_6028_; uint8_t v_isShared_6029_; uint8_t v_isSharedCheck_6038_; 
lean_dec(v_a_6014_);
lean_dec(v_a_6012_);
lean_dec_ref(v_infos_5936_);
lean_dec_ref(v_scope_5935_);
v_a_6026_ = lean_ctor_get(v___x_6015_, 0);
v_isSharedCheck_6038_ = !lean_is_exclusive(v___x_6015_);
if (v_isSharedCheck_6038_ == 0)
{
v___x_6028_ = v___x_6015_;
v_isShared_6029_ = v_isSharedCheck_6038_;
goto v_resetjp_6027_;
}
else
{
lean_inc(v_a_6026_);
lean_dec(v___x_6015_);
v___x_6028_ = lean_box(0);
v_isShared_6029_ = v_isSharedCheck_6038_;
goto v_resetjp_6027_;
}
v_resetjp_6027_:
{
lean_object* v___x_6030_; uint8_t v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6036_; 
v___x_6030_ = lean_io_error_to_string(v_a_6026_);
v___x_6031_ = 3;
v___x_6032_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6032_, 0, v___x_6030_);
lean_ctor_set_uint8(v___x_6032_, sizeof(void*)*1, v___x_6031_);
lean_inc_ref(v___y_5917_);
v___x_6033_ = lean_apply_2(v___y_5917_, v___x_6032_, lean_box(0));
v___x_6034_ = lean_box(0);
if (v_isShared_6029_ == 0)
{
lean_ctor_set(v___x_6028_, 0, v___x_6034_);
v___x_6036_ = v___x_6028_;
goto v_reusejp_6035_;
}
else
{
lean_object* v_reuseFailAlloc_6037_; 
v_reuseFailAlloc_6037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6037_, 0, v___x_6034_);
v___x_6036_ = v_reuseFailAlloc_6037_;
goto v_reusejp_6035_;
}
v_reusejp_6035_:
{
return v___x_6036_;
}
}
}
}
else
{
lean_object* v_a_6039_; lean_object* v___x_6041_; uint8_t v_isShared_6042_; uint8_t v_isSharedCheck_6051_; 
lean_dec(v_a_6012_);
lean_dec(v_stdout_6008_);
lean_dec_ref(v_infos_5936_);
lean_dec_ref(v_scope_5935_);
v_a_6039_ = lean_ctor_get(v___x_6013_, 0);
v_isSharedCheck_6051_ = !lean_is_exclusive(v___x_6013_);
if (v_isSharedCheck_6051_ == 0)
{
v___x_6041_ = v___x_6013_;
v_isShared_6042_ = v_isSharedCheck_6051_;
goto v_resetjp_6040_;
}
else
{
lean_inc(v_a_6039_);
lean_dec(v___x_6013_);
v___x_6041_ = lean_box(0);
v_isShared_6042_ = v_isSharedCheck_6051_;
goto v_resetjp_6040_;
}
v_resetjp_6040_:
{
lean_object* v___x_6043_; uint8_t v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; lean_object* v___x_6049_; 
v___x_6043_ = lean_io_error_to_string(v_a_6039_);
v___x_6044_ = 3;
v___x_6045_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6045_, 0, v___x_6043_);
lean_ctor_set_uint8(v___x_6045_, sizeof(void*)*1, v___x_6044_);
lean_inc_ref(v___y_5917_);
v___x_6046_ = lean_apply_2(v___y_5917_, v___x_6045_, lean_box(0));
v___x_6047_ = lean_box(0);
if (v_isShared_6042_ == 0)
{
lean_ctor_set(v___x_6041_, 0, v___x_6047_);
v___x_6049_ = v___x_6041_;
goto v_reusejp_6048_;
}
else
{
lean_object* v_reuseFailAlloc_6050_; 
v_reuseFailAlloc_6050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6050_, 0, v___x_6047_);
v___x_6049_ = v_reuseFailAlloc_6050_;
goto v_reusejp_6048_;
}
v_reusejp_6048_:
{
return v___x_6049_;
}
}
}
}
else
{
lean_object* v_a_6052_; lean_object* v___x_6054_; uint8_t v_isShared_6055_; uint8_t v_isSharedCheck_6059_; 
lean_dec(v_stdout_6008_);
lean_dec(v_a_6007_);
lean_dec_ref(v_infos_5936_);
lean_dec_ref(v_scope_5935_);
v_a_6052_ = lean_ctor_get(v___x_6011_, 0);
v_isSharedCheck_6059_ = !lean_is_exclusive(v___x_6011_);
if (v_isSharedCheck_6059_ == 0)
{
v___x_6054_ = v___x_6011_;
v_isShared_6055_ = v_isSharedCheck_6059_;
goto v_resetjp_6053_;
}
else
{
lean_inc(v_a_6052_);
lean_dec(v___x_6011_);
v___x_6054_ = lean_box(0);
v_isShared_6055_ = v_isSharedCheck_6059_;
goto v_resetjp_6053_;
}
v_resetjp_6053_:
{
lean_object* v___x_6057_; 
if (v_isShared_6055_ == 0)
{
v___x_6057_ = v___x_6054_;
goto v_reusejp_6056_;
}
else
{
lean_object* v_reuseFailAlloc_6058_; 
v_reuseFailAlloc_6058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6058_, 0, v_a_6052_);
v___x_6057_ = v_reuseFailAlloc_6058_;
goto v_reusejp_6056_;
}
v_reusejp_6056_:
{
return v___x_6057_;
}
}
}
}
else
{
lean_object* v_a_6060_; lean_object* v___x_6062_; uint8_t v_isShared_6063_; uint8_t v_isSharedCheck_6072_; 
lean_dec_ref(v_infos_5936_);
lean_dec_ref(v_scope_5935_);
lean_dec_ref(v_cfg_5914_);
v_a_6060_ = lean_ctor_get(v___x_6006_, 0);
v_isSharedCheck_6072_ = !lean_is_exclusive(v___x_6006_);
if (v_isSharedCheck_6072_ == 0)
{
v___x_6062_ = v___x_6006_;
v_isShared_6063_ = v_isSharedCheck_6072_;
goto v_resetjp_6061_;
}
else
{
lean_inc(v_a_6060_);
lean_dec(v___x_6006_);
v___x_6062_ = lean_box(0);
v_isShared_6063_ = v_isSharedCheck_6072_;
goto v_resetjp_6061_;
}
v_resetjp_6061_:
{
lean_object* v___x_6064_; uint8_t v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___x_6070_; 
v___x_6064_ = lean_io_error_to_string(v_a_6060_);
v___x_6065_ = 3;
v___x_6066_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6066_, 0, v___x_6064_);
lean_ctor_set_uint8(v___x_6066_, sizeof(void*)*1, v___x_6065_);
lean_inc_ref(v___y_5917_);
v___x_6067_ = lean_apply_2(v___y_5917_, v___x_6066_, lean_box(0));
v___x_6068_ = lean_box(0);
if (v_isShared_6063_ == 0)
{
lean_ctor_set(v___x_6062_, 0, v___x_6068_);
v___x_6070_ = v___x_6062_;
goto v_reusejp_6069_;
}
else
{
lean_object* v_reuseFailAlloc_6071_; 
v_reuseFailAlloc_6071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6071_, 0, v___x_6068_);
v___x_6070_ = v_reuseFailAlloc_6071_;
goto v_reusejp_6069_;
}
v_reusejp_6069_:
{
return v___x_6070_;
}
}
}
}
v___jp_6073_:
{
lean_object* v___x_6078_; uint8_t v___x_6079_; 
v___x_6078_ = lean_array_get_size(v___y_6075_);
v___x_6079_ = lean_nat_dec_lt(v___y_6074_, v___x_6078_);
if (v___x_6079_ == 0)
{
v___y_5997_ = v___y_6076_;
v_a_5998_ = v_val_6077_;
goto v___jp_5996_;
}
else
{
lean_object* v___x_6080_; size_t v___x_6081_; size_t v___x_6082_; lean_object* v___x_6083_; 
v___x_6080_ = lean_box(0);
v___x_6081_ = ((size_t)0ULL);
v___x_6082_ = lean_usize_of_nat(v___x_6078_);
v___x_6083_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_6075_, v___x_6081_, v___x_6082_, v___x_6080_, v___y_5917_);
if (lean_obj_tag(v___x_6083_) == 0)
{
lean_dec_ref_known(v___x_6083_, 1);
v___y_5997_ = v___y_6076_;
v_a_5998_ = v_val_6077_;
goto v___jp_5996_;
}
else
{
lean_dec_ref(v_val_6077_);
lean_dec_ref(v___y_6076_);
lean_dec_ref(v_infos_5936_);
lean_dec_ref(v_scope_5935_);
lean_dec_ref(v_cfg_5914_);
return v___x_6083_;
}
}
}
v___jp_6084_:
{
lean_object* v___x_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; 
v___x_6086_ = lean_unsigned_to_nat(0u);
v___x_6087_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6088_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_6089_ = lean_io_getenv(v___x_6088_);
if (lean_obj_tag(v___x_6089_) == 0)
{
lean_object* v___x_6090_; 
v___x_6090_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v___y_6074_ = v___x_6086_;
v___y_6075_ = v___x_6087_;
v___y_6076_ = v_a_6085_;
v_val_6077_ = v___x_6090_;
goto v___jp_6073_;
}
else
{
lean_object* v_val_6091_; 
v_val_6091_ = lean_ctor_get(v___x_6089_, 0);
lean_inc(v_val_6091_);
lean_dec_ref_known(v___x_6089_, 1);
v___y_6074_ = v___x_6086_;
v___y_6075_ = v___x_6087_;
v___y_6076_ = v_a_6085_;
v_val_6077_ = v_val_6091_;
goto v___jp_6073_;
}
}
v___jp_6092_:
{
lean_object* v___x_6093_; 
v___x_6093_ = lean_io_prim_handle_flush(v_h_5915_);
if (lean_obj_tag(v___x_6093_) == 0)
{
lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; 
lean_dec_ref_known(v___x_6093_, 1);
v___x_6094_ = lean_unsigned_to_nat(11u);
v___x_6095_ = lean_mk_empty_array_with_capacity(v___x_6094_);
lean_dec_ref(v___x_6095_);
v___x_6096_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20);
v___x_6097_ = lean_array_push(v___x_6096_, v_path_5916_);
v_a_6085_ = v___x_6097_;
goto v___jp_6084_;
}
else
{
lean_object* v_a_6098_; lean_object* v___x_6100_; uint8_t v_isShared_6101_; uint8_t v_isSharedCheck_6110_; 
lean_dec_ref(v_infos_5936_);
lean_dec_ref(v_scope_5935_);
lean_dec_ref(v_path_5916_);
lean_dec_ref(v_cfg_5914_);
v_a_6098_ = lean_ctor_get(v___x_6093_, 0);
v_isSharedCheck_6110_ = !lean_is_exclusive(v___x_6093_);
if (v_isSharedCheck_6110_ == 0)
{
v___x_6100_ = v___x_6093_;
v_isShared_6101_ = v_isSharedCheck_6110_;
goto v_resetjp_6099_;
}
else
{
lean_inc(v_a_6098_);
lean_dec(v___x_6093_);
v___x_6100_ = lean_box(0);
v_isShared_6101_ = v_isSharedCheck_6110_;
goto v_resetjp_6099_;
}
v_resetjp_6099_:
{
lean_object* v___x_6102_; uint8_t v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6108_; 
v___x_6102_ = lean_io_error_to_string(v_a_6098_);
v___x_6103_ = 3;
v___x_6104_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6104_, 0, v___x_6102_);
lean_ctor_set_uint8(v___x_6104_, sizeof(void*)*1, v___x_6103_);
lean_inc_ref(v___y_5917_);
v___x_6105_ = lean_apply_2(v___y_5917_, v___x_6104_, lean_box(0));
v___x_6106_ = lean_box(0);
if (v_isShared_6101_ == 0)
{
lean_ctor_set(v___x_6100_, 0, v___x_6106_);
v___x_6108_ = v___x_6100_;
goto v_reusejp_6107_;
}
else
{
lean_object* v_reuseFailAlloc_6109_; 
v_reuseFailAlloc_6109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6109_, 0, v___x_6106_);
v___x_6108_ = v_reuseFailAlloc_6109_;
goto v_reusejp_6107_;
}
v_reusejp_6107_:
{
return v___x_6108_;
}
}
}
}
v___jp_6111_:
{
lean_object* v___x_6112_; 
v___x_6112_ = lean_io_prim_handle_flush(v_h_5915_);
if (lean_obj_tag(v___x_6112_) == 0)
{
lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___x_6122_; lean_object* v___x_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; 
lean_dec_ref_known(v___x_6112_, 1);
v___x_6113_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_6114_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_6115_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_6116_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10));
v___x_6117_ = lean_unsigned_to_nat(17u);
v___x_6118_ = lean_mk_empty_array_with_capacity(v___x_6117_);
lean_dec_ref(v___x_6118_);
v___x_6119_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32);
lean_inc_ref(v_key_5937_);
v___x_6120_ = lean_array_push(v___x_6119_, v_key_5937_);
v___x_6121_ = lean_array_push(v___x_6120_, v___x_6113_);
v___x_6122_ = lean_array_push(v___x_6121_, v___x_6114_);
v___x_6123_ = lean_array_push(v___x_6122_, v___x_6115_);
v___x_6124_ = lean_array_push(v___x_6123_, v___x_6116_);
v___x_6125_ = lean_array_push(v___x_6124_, v_path_5916_);
v_a_6085_ = v___x_6125_;
goto v___jp_6084_;
}
else
{
lean_object* v_a_6126_; lean_object* v___x_6128_; uint8_t v_isShared_6129_; uint8_t v_isSharedCheck_6138_; 
lean_dec_ref(v_infos_5936_);
lean_dec_ref(v_scope_5935_);
lean_dec_ref(v_path_5916_);
lean_dec_ref(v_cfg_5914_);
v_a_6126_ = lean_ctor_get(v___x_6112_, 0);
v_isSharedCheck_6138_ = !lean_is_exclusive(v___x_6112_);
if (v_isSharedCheck_6138_ == 0)
{
v___x_6128_ = v___x_6112_;
v_isShared_6129_ = v_isSharedCheck_6138_;
goto v_resetjp_6127_;
}
else
{
lean_inc(v_a_6126_);
lean_dec(v___x_6112_);
v___x_6128_ = lean_box(0);
v_isShared_6129_ = v_isSharedCheck_6138_;
goto v_resetjp_6127_;
}
v_resetjp_6127_:
{
lean_object* v___x_6130_; uint8_t v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6136_; 
v___x_6130_ = lean_io_error_to_string(v_a_6126_);
v___x_6131_ = 3;
v___x_6132_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6132_, 0, v___x_6130_);
lean_ctor_set_uint8(v___x_6132_, sizeof(void*)*1, v___x_6131_);
lean_inc_ref(v___y_5917_);
v___x_6133_ = lean_apply_2(v___y_5917_, v___x_6132_, lean_box(0));
v___x_6134_ = lean_box(0);
if (v_isShared_6129_ == 0)
{
lean_ctor_set(v___x_6128_, 0, v___x_6134_);
v___x_6136_ = v___x_6128_;
goto v_reusejp_6135_;
}
else
{
lean_object* v_reuseFailAlloc_6137_; 
v_reuseFailAlloc_6137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6137_, 0, v___x_6134_);
v___x_6136_ = v_reuseFailAlloc_6137_;
goto v_reusejp_6135_;
}
v_reusejp_6135_:
{
return v___x_6136_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0___boxed(lean_object* v_cfg_6153_, lean_object* v_h_6154_, lean_object* v_path_6155_, lean_object* v___y_6156_, lean_object* v___y_6157_){
_start:
{
lean_object* v_res_6158_; 
v_res_6158_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0(v_cfg_6153_, v_h_6154_, v_path_6155_, v___y_6156_);
lean_dec_ref(v___y_6156_);
lean_dec(v_h_6154_);
return v_res_6158_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(lean_object* v_a_6159_, lean_object* v_cfg_6160_){
_start:
{
lean_object* v___f_6162_; lean_object* v___x_6163_; 
v___f_6162_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___lam__0___boxed), 5, 1);
lean_closure_set(v___f_6162_, 0, v_cfg_6160_);
v___x_6163_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v___f_6162_, v_a_6159_);
return v___x_6163_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0___boxed(lean_object* v_a_6164_, lean_object* v_cfg_6165_, lean_object* v___y_6166_){
_start:
{
lean_object* v_res_6167_; 
v_res_6167_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(v_a_6164_, v_cfg_6165_);
lean_dec_ref(v_a_6164_);
return v_res_6167_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1___lam__0(lean_object* v_url_6168_, lean_object* v_infos_6169_, lean_object* v_h_6170_, lean_object* v_path_6171_, lean_object* v___y_6172_){
_start:
{
uint32_t v___y_6175_; lean_object* v___y_6176_; lean_object* v___y_6187_; lean_object* v___y_6188_; uint8_t v___y_6189_; uint32_t v___y_6190_; lean_object* v_msg_6191_; lean_object* v___y_6192_; lean_object* v___y_6206_; lean_object* v___y_6207_; lean_object* v___y_6208_; uint8_t v___y_6209_; uint32_t v___y_6210_; lean_object* v_msg_6211_; lean_object* v___y_6212_; lean_object* v___y_6223_; lean_object* v___y_6224_; lean_object* v___y_6225_; uint8_t v___y_6226_; lean_object* v___y_6227_; uint32_t v___y_6228_; lean_object* v_msg_6229_; lean_object* v___y_6242_; lean_object* v___y_6243_; lean_object* v___y_6244_; uint32_t v___y_6245_; lean_object* v_a_6246_; lean_object* v___y_6274_; lean_object* v___y_6275_; lean_object* v___y_6276_; uint8_t v___y_6277_; uint32_t v___y_6278_; lean_object* v___y_6297_; lean_object* v_a_6298_; size_t v_sz_6380_; size_t v___x_6381_; lean_object* v___y_6383_; lean_object* v___y_6384_; lean_object* v___y_6385_; lean_object* v_val_6386_; lean_object* v___x_6400_; lean_object* v_body_6401_; lean_object* v___x_6402_; lean_object* v___x_6403_; 
v_sz_6380_ = lean_array_size(v_infos_6169_);
v___x_6381_ = ((size_t)0ULL);
lean_inc_ref(v_infos_6169_);
v___x_6400_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(v_sz_6380_, v___x_6381_, v_infos_6169_);
v_body_6401_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_body_6401_, 0, v___x_6400_);
v___x_6402_ = l_Lean_Json_compress(v_body_6401_);
v___x_6403_ = lean_io_prim_handle_put_str(v_h_6170_, v___x_6402_);
lean_dec_ref(v___x_6402_);
if (lean_obj_tag(v___x_6403_) == 0)
{
lean_object* v___x_6404_; 
lean_dec_ref_known(v___x_6403_, 1);
v___x_6404_ = lean_io_prim_handle_flush(v_h_6170_);
if (lean_obj_tag(v___x_6404_) == 0)
{
lean_object* v___y_6406_; lean_object* v___x_6413_; lean_object* v___x_6414_; lean_object* v___x_6415_; lean_object* v___x_6416_; lean_object* v___x_6417_; lean_object* v___x_6418_; lean_object* v___x_6419_; lean_object* v___x_6420_; lean_object* v___x_6421_; lean_object* v___x_6422_; lean_object* v___x_6423_; lean_object* v___x_6424_; lean_object* v___x_6425_; lean_object* v___x_6426_; lean_object* v___x_6427_; lean_object* v___x_6428_; lean_object* v___x_6429_; lean_object* v___x_6430_; lean_object* v___x_6431_; lean_object* v___x_6432_; lean_object* v___x_6433_; uint8_t v___x_6434_; 
lean_dec_ref_known(v___x_6404_, 1);
v___x_6413_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__16));
v___x_6414_ = lean_string_append(v___x_6413_, v_path_6171_);
v___x_6415_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_6416_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_6417_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_6418_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_6419_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_6420_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_6421_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__17));
v___x_6422_ = lean_unsigned_to_nat(12u);
v___x_6423_ = lean_mk_empty_array_with_capacity(v___x_6422_);
lean_dec_ref(v___x_6423_);
v___x_6424_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21);
v___x_6425_ = lean_array_push(v___x_6424_, v___x_6414_);
v___x_6426_ = lean_array_push(v___x_6425_, v___x_6415_);
v___x_6427_ = lean_array_push(v___x_6426_, v___x_6416_);
v___x_6428_ = lean_array_push(v___x_6427_, v___x_6417_);
v___x_6429_ = lean_array_push(v___x_6428_, v___x_6418_);
v___x_6430_ = lean_array_push(v___x_6429_, v___x_6419_);
v___x_6431_ = lean_array_push(v___x_6430_, v___x_6420_);
v___x_6432_ = lean_array_push(v___x_6431_, v___x_6421_);
v___x_6433_ = l_Lake_Reservoir_lakeHeaders;
v___x_6434_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23);
if (v___x_6434_ == 0)
{
v___y_6406_ = v___x_6432_;
goto v___jp_6405_;
}
else
{
size_t v___x_6435_; lean_object* v___x_6436_; 
v___x_6435_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25);
v___x_6436_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(v___x_6433_, v___x_6381_, v___x_6435_, v___x_6432_);
v___y_6406_ = v___x_6436_;
goto v___jp_6405_;
}
v___jp_6405_:
{
lean_object* v___x_6407_; lean_object* v___x_6408_; lean_object* v___x_6409_; lean_object* v___x_6410_; 
v___x_6407_ = lean_unsigned_to_nat(0u);
v___x_6408_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6409_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_6410_ = lean_io_getenv(v___x_6409_);
if (lean_obj_tag(v___x_6410_) == 0)
{
lean_object* v___x_6411_; 
v___x_6411_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v___y_6383_ = v___x_6408_;
v___y_6384_ = v___y_6406_;
v___y_6385_ = v___x_6407_;
v_val_6386_ = v___x_6411_;
goto v___jp_6382_;
}
else
{
lean_object* v_val_6412_; 
v_val_6412_ = lean_ctor_get(v___x_6410_, 0);
lean_inc(v_val_6412_);
lean_dec_ref_known(v___x_6410_, 1);
v___y_6383_ = v___x_6408_;
v___y_6384_ = v___y_6406_;
v___y_6385_ = v___x_6407_;
v_val_6386_ = v_val_6412_;
goto v___jp_6382_;
}
}
}
else
{
lean_object* v_a_6437_; lean_object* v___x_6439_; uint8_t v_isShared_6440_; uint8_t v_isSharedCheck_6449_; 
lean_dec_ref(v_infos_6169_);
lean_dec_ref(v_url_6168_);
v_a_6437_ = lean_ctor_get(v___x_6404_, 0);
v_isSharedCheck_6449_ = !lean_is_exclusive(v___x_6404_);
if (v_isSharedCheck_6449_ == 0)
{
v___x_6439_ = v___x_6404_;
v_isShared_6440_ = v_isSharedCheck_6449_;
goto v_resetjp_6438_;
}
else
{
lean_inc(v_a_6437_);
lean_dec(v___x_6404_);
v___x_6439_ = lean_box(0);
v_isShared_6440_ = v_isSharedCheck_6449_;
goto v_resetjp_6438_;
}
v_resetjp_6438_:
{
lean_object* v___x_6441_; uint8_t v___x_6442_; lean_object* v___x_6443_; lean_object* v___x_6444_; lean_object* v___x_6445_; lean_object* v___x_6447_; 
v___x_6441_ = lean_io_error_to_string(v_a_6437_);
v___x_6442_ = 3;
v___x_6443_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6443_, 0, v___x_6441_);
lean_ctor_set_uint8(v___x_6443_, sizeof(void*)*1, v___x_6442_);
lean_inc_ref(v___y_6172_);
v___x_6444_ = lean_apply_2(v___y_6172_, v___x_6443_, lean_box(0));
v___x_6445_ = lean_box(0);
if (v_isShared_6440_ == 0)
{
lean_ctor_set(v___x_6439_, 0, v___x_6445_);
v___x_6447_ = v___x_6439_;
goto v_reusejp_6446_;
}
else
{
lean_object* v_reuseFailAlloc_6448_; 
v_reuseFailAlloc_6448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6448_, 0, v___x_6445_);
v___x_6447_ = v_reuseFailAlloc_6448_;
goto v_reusejp_6446_;
}
v_reusejp_6446_:
{
return v___x_6447_;
}
}
}
}
else
{
lean_object* v_a_6450_; lean_object* v___x_6452_; uint8_t v_isShared_6453_; uint8_t v_isSharedCheck_6462_; 
lean_dec_ref(v_infos_6169_);
lean_dec_ref(v_url_6168_);
v_a_6450_ = lean_ctor_get(v___x_6403_, 0);
v_isSharedCheck_6462_ = !lean_is_exclusive(v___x_6403_);
if (v_isSharedCheck_6462_ == 0)
{
v___x_6452_ = v___x_6403_;
v_isShared_6453_ = v_isSharedCheck_6462_;
goto v_resetjp_6451_;
}
else
{
lean_inc(v_a_6450_);
lean_dec(v___x_6403_);
v___x_6452_ = lean_box(0);
v_isShared_6453_ = v_isSharedCheck_6462_;
goto v_resetjp_6451_;
}
v_resetjp_6451_:
{
lean_object* v___x_6454_; uint8_t v___x_6455_; lean_object* v___x_6456_; lean_object* v___x_6457_; lean_object* v___x_6458_; lean_object* v___x_6460_; 
v___x_6454_ = lean_io_error_to_string(v_a_6450_);
v___x_6455_ = 3;
v___x_6456_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6456_, 0, v___x_6454_);
lean_ctor_set_uint8(v___x_6456_, sizeof(void*)*1, v___x_6455_);
lean_inc_ref(v___y_6172_);
v___x_6457_ = lean_apply_2(v___y_6172_, v___x_6456_, lean_box(0));
v___x_6458_ = lean_box(0);
if (v_isShared_6453_ == 0)
{
lean_ctor_set(v___x_6452_, 0, v___x_6458_);
v___x_6460_ = v___x_6452_;
goto v_reusejp_6459_;
}
else
{
lean_object* v_reuseFailAlloc_6461_; 
v_reuseFailAlloc_6461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6461_, 0, v___x_6458_);
v___x_6460_ = v_reuseFailAlloc_6461_;
goto v_reusejp_6459_;
}
v_reusejp_6459_:
{
return v___x_6460_;
}
}
}
v___jp_6174_:
{
lean_object* v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6180_; uint8_t v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; 
v___x_6177_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__0));
v___x_6178_ = lean_uint32_to_nat(v___y_6175_);
v___x_6179_ = l_Nat_reprFast(v___x_6178_);
v___x_6180_ = lean_string_append(v___x_6177_, v___x_6179_);
lean_dec_ref(v___x_6179_);
v___x_6181_ = 3;
v___x_6182_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6182_, 0, v___x_6180_);
lean_ctor_set_uint8(v___x_6182_, sizeof(void*)*1, v___x_6181_);
lean_inc_ref(v___y_6176_);
v___x_6183_ = lean_apply_2(v___y_6176_, v___x_6182_, lean_box(0));
v___x_6184_ = lean_box(0);
v___x_6185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6185_, 0, v___x_6184_);
return v___x_6185_;
}
v___jp_6186_:
{
uint8_t v___x_6193_; lean_object* v___x_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v___x_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; lean_object* v___x_6204_; 
v___x_6193_ = 3;
v___x_6194_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6194_, 0, v_msg_6191_);
lean_ctor_set_uint8(v___x_6194_, sizeof(void*)*1, v___x_6193_);
lean_inc_ref_n(v___y_6192_, 2);
v___x_6195_ = lean_apply_2(v___y_6192_, v___x_6194_, lean_box(0));
v___x_6196_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__1));
v___x_6197_ = lean_string_utf8_byte_size(v___y_6188_);
lean_inc(v___y_6187_);
lean_inc_ref(v___y_6188_);
v___x_6198_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6198_, 0, v___y_6188_);
lean_ctor_set(v___x_6198_, 1, v___y_6187_);
lean_ctor_set(v___x_6198_, 2, v___x_6197_);
v___x_6199_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_6198_, v___x_6197_);
lean_dec_ref_known(v___x_6198_, 3);
v___x_6200_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6200_, 0, v___y_6188_);
lean_ctor_set(v___x_6200_, 1, v___y_6187_);
lean_ctor_set(v___x_6200_, 2, v___x_6199_);
v___x_6201_ = l_String_Slice_toString(v___x_6200_);
lean_dec_ref_known(v___x_6200_, 3);
v___x_6202_ = lean_string_append(v___x_6196_, v___x_6201_);
lean_dec_ref(v___x_6201_);
v___x_6203_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6203_, 0, v___x_6202_);
lean_ctor_set_uint8(v___x_6203_, sizeof(void*)*1, v___y_6189_);
v___x_6204_ = lean_apply_2(v___y_6192_, v___x_6203_, lean_box(0));
v___y_6175_ = v___y_6190_;
v___y_6176_ = v___y_6192_;
goto v___jp_6174_;
}
v___jp_6205_:
{
lean_object* v___x_6213_; uint8_t v___x_6214_; 
v___x_6213_ = lean_string_utf8_byte_size(v___y_6206_);
v___x_6214_ = lean_nat_dec_eq(v___x_6213_, v___y_6208_);
if (v___x_6214_ == 0)
{
lean_object* v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v___x_6220_; lean_object* v___x_6221_; 
v___x_6215_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__2));
v___x_6216_ = lean_string_append(v_msg_6211_, v___x_6215_);
lean_inc_n(v___y_6208_, 2);
lean_inc_ref(v___y_6206_);
v___x_6217_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6217_, 0, v___y_6206_);
lean_ctor_set(v___x_6217_, 1, v___y_6208_);
lean_ctor_set(v___x_6217_, 2, v___x_6213_);
v___x_6218_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_6217_, v___x_6213_);
lean_dec_ref_known(v___x_6217_, 3);
v___x_6219_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6219_, 0, v___y_6206_);
lean_ctor_set(v___x_6219_, 1, v___y_6208_);
lean_ctor_set(v___x_6219_, 2, v___x_6218_);
v___x_6220_ = l_String_Slice_toString(v___x_6219_);
lean_dec_ref_known(v___x_6219_, 3);
v___x_6221_ = lean_string_append(v___x_6216_, v___x_6220_);
lean_dec_ref(v___x_6220_);
v___y_6187_ = v___y_6208_;
v___y_6188_ = v___y_6207_;
v___y_6189_ = v___y_6209_;
v___y_6190_ = v___y_6210_;
v_msg_6191_ = v___x_6221_;
v___y_6192_ = v___y_6212_;
goto v___jp_6186_;
}
else
{
lean_dec_ref(v___y_6206_);
v___y_6187_ = v___y_6208_;
v___y_6188_ = v___y_6207_;
v___y_6189_ = v___y_6209_;
v___y_6190_ = v___y_6210_;
v_msg_6191_ = v_msg_6211_;
v___y_6192_ = v___y_6212_;
goto v___jp_6186_;
}
}
v___jp_6222_:
{
lean_object* v___x_6230_; lean_object* v___x_6231_; lean_object* v___x_6232_; lean_object* v___x_6233_; lean_object* v___x_6234_; 
v___x_6230_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__3));
v___x_6231_ = lean_string_append(v_msg_6229_, v___x_6230_);
v___x_6232_ = lean_string_append(v___x_6231_, v_url_6168_);
lean_dec_ref(v_url_6168_);
v___x_6233_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4));
v___x_6234_ = l_Lake_JsonObject_getJson_x3f(v___y_6227_, v___x_6233_);
lean_dec(v___y_6227_);
if (lean_obj_tag(v___x_6234_) == 0)
{
v___y_6206_ = v___y_6223_;
v___y_6207_ = v___y_6225_;
v___y_6208_ = v___y_6224_;
v___y_6209_ = v___y_6226_;
v___y_6210_ = v___y_6228_;
v_msg_6211_ = v___x_6232_;
v___y_6212_ = v___y_6172_;
goto v___jp_6205_;
}
else
{
lean_object* v_val_6235_; lean_object* v___x_6236_; 
v_val_6235_ = lean_ctor_get(v___x_6234_, 0);
lean_inc(v_val_6235_);
lean_dec_ref_known(v___x_6234_, 1);
v___x_6236_ = l_Lean_Json_getStr_x3f(v_val_6235_);
if (lean_obj_tag(v___x_6236_) == 0)
{
lean_dec_ref_known(v___x_6236_, 1);
v___y_6206_ = v___y_6223_;
v___y_6207_ = v___y_6225_;
v___y_6208_ = v___y_6224_;
v___y_6209_ = v___y_6226_;
v___y_6210_ = v___y_6228_;
v_msg_6211_ = v___x_6232_;
v___y_6212_ = v___y_6172_;
goto v___jp_6205_;
}
else
{
if (lean_obj_tag(v___x_6236_) == 1)
{
lean_object* v_a_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; lean_object* v___x_6240_; 
v_a_6237_ = lean_ctor_get(v___x_6236_, 0);
lean_inc(v_a_6237_);
lean_dec_ref_known(v___x_6236_, 1);
v___x_6238_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__4));
v___x_6239_ = lean_string_append(v___x_6232_, v___x_6238_);
v___x_6240_ = lean_string_append(v___x_6239_, v_a_6237_);
lean_dec(v_a_6237_);
v___y_6206_ = v___y_6223_;
v___y_6207_ = v___y_6225_;
v___y_6208_ = v___y_6224_;
v___y_6209_ = v___y_6226_;
v___y_6210_ = v___y_6228_;
v_msg_6211_ = v___x_6240_;
v___y_6212_ = v___y_6172_;
goto v___jp_6205_;
}
else
{
lean_dec_ref_known(v___x_6236_, 1);
v___y_6206_ = v___y_6223_;
v___y_6207_ = v___y_6225_;
v___y_6208_ = v___y_6224_;
v___y_6209_ = v___y_6226_;
v___y_6210_ = v___y_6228_;
v_msg_6211_ = v___x_6232_;
v___y_6212_ = v___y_6172_;
goto v___jp_6205_;
}
}
}
}
v___jp_6241_:
{
lean_object* v___x_6247_; lean_object* v___x_6248_; lean_object* v___x_6249_; lean_object* v___x_6250_; lean_object* v___x_6251_; lean_object* v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6254_; lean_object* v___x_6255_; lean_object* v___x_6256_; lean_object* v___x_6257_; lean_object* v___x_6258_; uint8_t v___x_6259_; lean_object* v___x_6260_; lean_object* v___x_6261_; lean_object* v___x_6262_; uint8_t v___x_6263_; 
v___x_6247_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5));
v___x_6248_ = lean_string_append(v___x_6247_, v_url_6168_);
lean_dec_ref(v_url_6168_);
v___x_6249_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__6));
v___x_6250_ = lean_string_append(v___x_6248_, v___x_6249_);
v___x_6251_ = lean_string_append(v___x_6250_, v_a_6246_);
lean_dec_ref(v_a_6246_);
v___x_6252_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_spec__0___closed__2));
v___x_6253_ = lean_string_append(v___x_6251_, v___x_6252_);
v___x_6254_ = lean_string_utf8_byte_size(v___y_6244_);
lean_inc(v___y_6243_);
v___x_6255_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6255_, 0, v___y_6244_);
lean_ctor_set(v___x_6255_, 1, v___y_6243_);
lean_ctor_set(v___x_6255_, 2, v___x_6254_);
v___x_6256_ = l_String_Slice_trimAscii(v___x_6255_);
v___x_6257_ = l_String_Slice_toString(v___x_6256_);
lean_dec_ref(v___x_6256_);
v___x_6258_ = lean_string_append(v___x_6253_, v___x_6257_);
lean_dec_ref(v___x_6257_);
v___x_6259_ = 3;
v___x_6260_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6260_, 0, v___x_6258_);
lean_ctor_set_uint8(v___x_6260_, sizeof(void*)*1, v___x_6259_);
lean_inc_ref(v___y_6172_);
v___x_6261_ = lean_apply_2(v___y_6172_, v___x_6260_, lean_box(0));
v___x_6262_ = lean_string_utf8_byte_size(v___y_6242_);
v___x_6263_ = lean_nat_dec_eq(v___x_6262_, v___y_6243_);
if (v___x_6263_ == 0)
{
lean_object* v___x_6264_; lean_object* v___x_6265_; lean_object* v___x_6266_; lean_object* v___x_6267_; lean_object* v___x_6268_; lean_object* v___x_6269_; uint8_t v___x_6270_; lean_object* v___x_6271_; lean_object* v___x_6272_; 
v___x_6264_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__7));
lean_inc(v___y_6243_);
lean_inc_ref(v___y_6242_);
v___x_6265_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6265_, 0, v___y_6242_);
lean_ctor_set(v___x_6265_, 1, v___y_6243_);
lean_ctor_set(v___x_6265_, 2, v___x_6262_);
v___x_6266_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_6265_, v___x_6262_);
lean_dec_ref_known(v___x_6265_, 3);
v___x_6267_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6267_, 0, v___y_6242_);
lean_ctor_set(v___x_6267_, 1, v___y_6243_);
lean_ctor_set(v___x_6267_, 2, v___x_6266_);
v___x_6268_ = l_String_Slice_toString(v___x_6267_);
lean_dec_ref_known(v___x_6267_, 3);
v___x_6269_ = lean_string_append(v___x_6264_, v___x_6268_);
lean_dec_ref(v___x_6268_);
v___x_6270_ = 2;
v___x_6271_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6271_, 0, v___x_6269_);
lean_ctor_set_uint8(v___x_6271_, sizeof(void*)*1, v___x_6270_);
lean_inc_ref(v___y_6172_);
v___x_6272_ = lean_apply_2(v___y_6172_, v___x_6271_, lean_box(0));
v___y_6175_ = v___y_6245_;
v___y_6176_ = v___y_6172_;
goto v___jp_6174_;
}
else
{
lean_dec(v___y_6243_);
lean_dec_ref(v___y_6242_);
v___y_6175_ = v___y_6245_;
v___y_6176_ = v___y_6172_;
goto v___jp_6174_;
}
}
v___jp_6273_:
{
lean_object* v___x_6279_; 
lean_inc_ref(v___y_6276_);
v___x_6279_ = l_Lean_Json_parse(v___y_6276_);
if (lean_obj_tag(v___x_6279_) == 0)
{
lean_object* v_a_6280_; 
v_a_6280_ = lean_ctor_get(v___x_6279_, 0);
lean_inc(v_a_6280_);
lean_dec_ref_known(v___x_6279_, 1);
v___y_6242_ = v___y_6274_;
v___y_6243_ = v___y_6275_;
v___y_6244_ = v___y_6276_;
v___y_6245_ = v___y_6278_;
v_a_6246_ = v_a_6280_;
goto v___jp_6241_;
}
else
{
lean_object* v_a_6281_; lean_object* v___x_6282_; 
v_a_6281_ = lean_ctor_get(v___x_6279_, 0);
lean_inc(v_a_6281_);
lean_dec_ref_known(v___x_6279_, 1);
v___x_6282_ = l_Lean_Json_getObj_x3f(v_a_6281_);
if (lean_obj_tag(v___x_6282_) == 0)
{
lean_object* v_a_6283_; 
v_a_6283_ = lean_ctor_get(v___x_6282_, 0);
lean_inc(v_a_6283_);
lean_dec_ref_known(v___x_6282_, 1);
v___y_6242_ = v___y_6274_;
v___y_6243_ = v___y_6275_;
v___y_6244_ = v___y_6276_;
v___y_6245_ = v___y_6278_;
v_a_6246_ = v_a_6283_;
goto v___jp_6241_;
}
else
{
lean_object* v_a_6284_; lean_object* v___x_6285_; lean_object* v___x_6286_; lean_object* v___x_6287_; 
v_a_6284_ = lean_ctor_get(v___x_6282_, 0);
lean_inc(v_a_6284_);
lean_dec_ref_known(v___x_6282_, 1);
v___x_6285_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__8));
v___x_6286_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_6287_ = l_Lake_JsonObject_getJson_x3f(v_a_6284_, v___x_6286_);
if (lean_obj_tag(v___x_6287_) == 0)
{
v___y_6223_ = v___y_6274_;
v___y_6224_ = v___y_6275_;
v___y_6225_ = v___y_6276_;
v___y_6226_ = v___y_6277_;
v___y_6227_ = v_a_6284_;
v___y_6228_ = v___y_6278_;
v_msg_6229_ = v___x_6285_;
goto v___jp_6222_;
}
else
{
lean_object* v_val_6288_; lean_object* v___x_6289_; 
v_val_6288_ = lean_ctor_get(v___x_6287_, 0);
lean_inc(v_val_6288_);
lean_dec_ref_known(v___x_6287_, 1);
v___x_6289_ = l_Lean_Json_getNat_x3f(v_val_6288_);
if (lean_obj_tag(v___x_6289_) == 0)
{
lean_dec_ref_known(v___x_6289_, 1);
v___y_6223_ = v___y_6274_;
v___y_6224_ = v___y_6275_;
v___y_6225_ = v___y_6276_;
v___y_6226_ = v___y_6277_;
v___y_6227_ = v_a_6284_;
v___y_6228_ = v___y_6278_;
v_msg_6229_ = v___x_6285_;
goto v___jp_6222_;
}
else
{
if (lean_obj_tag(v___x_6289_) == 1)
{
lean_object* v_a_6290_; lean_object* v___x_6291_; lean_object* v___x_6292_; lean_object* v___x_6293_; lean_object* v___x_6294_; lean_object* v___x_6295_; 
v_a_6290_ = lean_ctor_get(v___x_6289_, 0);
lean_inc(v_a_6290_);
lean_dec_ref_known(v___x_6289_, 1);
v___x_6291_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9));
v___x_6292_ = l_Nat_reprFast(v_a_6290_);
v___x_6293_ = lean_string_append(v___x_6291_, v___x_6292_);
lean_dec_ref(v___x_6292_);
v___x_6294_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9));
v___x_6295_ = lean_string_append(v___x_6293_, v___x_6294_);
v___y_6223_ = v___y_6274_;
v___y_6224_ = v___y_6275_;
v___y_6225_ = v___y_6276_;
v___y_6226_ = v___y_6277_;
v___y_6227_ = v_a_6284_;
v___y_6228_ = v___y_6278_;
v_msg_6229_ = v___x_6295_;
goto v___jp_6222_;
}
else
{
lean_dec_ref_known(v___x_6289_, 1);
v___y_6223_ = v___y_6274_;
v___y_6224_ = v___y_6275_;
v___y_6225_ = v___y_6276_;
v___y_6226_ = v___y_6277_;
v___y_6227_ = v_a_6284_;
v___y_6228_ = v___y_6278_;
v_msg_6229_ = v___x_6285_;
goto v___jp_6222_;
}
}
}
}
}
}
v___jp_6296_:
{
lean_object* v___x_6299_; lean_object* v___x_6300_; lean_object* v___x_6301_; lean_object* v___x_6302_; lean_object* v___x_6303_; uint8_t v___x_6304_; uint8_t v___x_6305_; lean_object* v___x_6306_; lean_object* v___x_6307_; uint8_t v___x_6308_; lean_object* v___x_6309_; lean_object* v___x_6310_; lean_object* v___x_6311_; 
v___x_6299_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3));
lean_inc_ref(v_url_6168_);
v___x_6300_ = lean_array_push(v___y_6297_, v_url_6168_);
v___x_6301_ = lean_box(0);
v___x_6302_ = lean_unsigned_to_nat(0u);
v___x_6303_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_6304_ = 1;
v___x_6305_ = 0;
v___x_6306_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_6306_, 0, v___x_6299_);
lean_ctor_set(v___x_6306_, 1, v_a_6298_);
lean_ctor_set(v___x_6306_, 2, v___x_6300_);
lean_ctor_set(v___x_6306_, 3, v___x_6301_);
lean_ctor_set(v___x_6306_, 4, v___x_6303_);
lean_ctor_set_uint8(v___x_6306_, sizeof(void*)*5, v___x_6304_);
lean_ctor_set_uint8(v___x_6306_, sizeof(void*)*5 + 1, v___x_6305_);
lean_inc_ref(v___x_6306_);
v___x_6307_ = l_Lake_mkCmdLog(v___x_6306_);
v___x_6308_ = 0;
v___x_6309_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6309_, 0, v___x_6307_);
lean_ctor_set_uint8(v___x_6309_, sizeof(void*)*1, v___x_6308_);
lean_inc_ref(v___y_6172_);
v___x_6310_ = lean_apply_2(v___y_6172_, v___x_6309_, lean_box(0));
v___x_6311_ = l_IO_Process_output(v___x_6306_, v___x_6301_);
if (lean_obj_tag(v___x_6311_) == 0)
{
lean_object* v_a_6312_; lean_object* v___x_6314_; uint8_t v_isShared_6315_; uint8_t v_isSharedCheck_6366_; 
v_a_6312_ = lean_ctor_get(v___x_6311_, 0);
v_isSharedCheck_6366_ = !lean_is_exclusive(v___x_6311_);
if (v_isSharedCheck_6366_ == 0)
{
v___x_6314_ = v___x_6311_;
v_isShared_6315_ = v_isSharedCheck_6366_;
goto v_resetjp_6313_;
}
else
{
lean_inc(v_a_6312_);
lean_dec(v___x_6311_);
v___x_6314_ = lean_box(0);
v_isShared_6315_ = v_isSharedCheck_6366_;
goto v_resetjp_6313_;
}
v_resetjp_6313_:
{
uint32_t v_exitCode_6316_; lean_object* v_stdout_6317_; lean_object* v_stderr_6318_; lean_object* v___x_6319_; 
v_exitCode_6316_ = lean_ctor_get_uint32(v_a_6312_, sizeof(void*)*2);
v_stdout_6317_ = lean_ctor_get(v_a_6312_, 0);
lean_inc_ref_n(v_stdout_6317_, 2);
v_stderr_6318_ = lean_ctor_get(v_a_6312_, 1);
lean_inc_ref(v_stderr_6318_);
lean_dec(v_a_6312_);
v___x_6319_ = l_Lean_Json_parse(v_stdout_6317_);
if (lean_obj_tag(v___x_6319_) == 0)
{
lean_dec_ref_known(v___x_6319_, 1);
lean_del_object(v___x_6314_);
lean_dec_ref(v_infos_6169_);
v___y_6274_ = v_stdout_6317_;
v___y_6275_ = v___x_6302_;
v___y_6276_ = v_stderr_6318_;
v___y_6277_ = v___x_6308_;
v___y_6278_ = v_exitCode_6316_;
goto v___jp_6273_;
}
else
{
lean_object* v_a_6320_; lean_object* v___x_6321_; 
v_a_6320_ = lean_ctor_get(v___x_6319_, 0);
lean_inc(v_a_6320_);
lean_dec_ref_known(v___x_6319_, 1);
v___x_6321_ = l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1(v_a_6320_);
if (lean_obj_tag(v___x_6321_) == 0)
{
lean_dec_ref_known(v___x_6321_, 1);
lean_del_object(v___x_6314_);
lean_dec_ref(v_infos_6169_);
v___y_6274_ = v_stdout_6317_;
v___y_6275_ = v___x_6302_;
v___y_6276_ = v_stderr_6318_;
v___y_6277_ = v___x_6308_;
v___y_6278_ = v_exitCode_6316_;
goto v___jp_6273_;
}
else
{
lean_object* v_a_6322_; 
lean_dec_ref(v_stderr_6318_);
lean_dec_ref(v_stdout_6317_);
v_a_6322_ = lean_ctor_get(v___x_6321_, 0);
lean_inc(v_a_6322_);
lean_dec_ref_known(v___x_6321_, 1);
if (lean_obj_tag(v_a_6322_) == 0)
{
lean_object* v_a_6323_; lean_object* v___x_6324_; lean_object* v___x_6325_; uint8_t v___x_6326_; 
v_a_6323_ = lean_ctor_get(v_a_6322_, 0);
lean_inc(v_a_6323_);
lean_dec_ref_known(v_a_6322_, 1);
v___x_6324_ = lean_array_get_size(v_infos_6169_);
v___x_6325_ = lean_array_get_size(v_a_6323_);
v___x_6326_ = lean_nat_dec_eq(v___x_6324_, v___x_6325_);
if (v___x_6326_ == 0)
{
lean_object* v___x_6327_; lean_object* v___x_6328_; lean_object* v___x_6329_; lean_object* v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; uint8_t v___x_6337_; lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___x_6342_; 
lean_dec(v_a_6323_);
lean_dec_ref(v_infos_6169_);
v___x_6327_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5));
v___x_6328_ = lean_string_append(v___x_6327_, v_url_6168_);
lean_dec_ref(v_url_6168_);
v___x_6329_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__10));
v___x_6330_ = lean_string_append(v___x_6328_, v___x_6329_);
v___x_6331_ = l_Nat_reprFast(v___x_6324_);
v___x_6332_ = lean_string_append(v___x_6330_, v___x_6331_);
lean_dec_ref(v___x_6331_);
v___x_6333_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__11));
v___x_6334_ = lean_string_append(v___x_6332_, v___x_6333_);
v___x_6335_ = l_Nat_reprFast(v___x_6325_);
v___x_6336_ = lean_string_append(v___x_6334_, v___x_6335_);
lean_dec_ref(v___x_6335_);
v___x_6337_ = 3;
v___x_6338_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6338_, 0, v___x_6336_);
lean_ctor_set_uint8(v___x_6338_, sizeof(void*)*1, v___x_6337_);
lean_inc_ref(v___y_6172_);
v___x_6339_ = lean_apply_2(v___y_6172_, v___x_6338_, lean_box(0));
v___x_6340_ = lean_box(0);
if (v_isShared_6315_ == 0)
{
lean_ctor_set_tag(v___x_6314_, 1);
lean_ctor_set(v___x_6314_, 0, v___x_6340_);
v___x_6342_ = v___x_6314_;
goto v_reusejp_6341_;
}
else
{
lean_object* v_reuseFailAlloc_6343_; 
v_reuseFailAlloc_6343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6343_, 0, v___x_6340_);
v___x_6342_ = v_reuseFailAlloc_6343_;
goto v_reusejp_6341_;
}
v_reusejp_6341_:
{
return v___x_6342_;
}
}
else
{
lean_object* v___x_6344_; lean_object* v___x_6346_; 
lean_dec_ref(v_url_6168_);
v___x_6344_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(v_a_6323_, v___x_6324_, v___x_6324_, v_infos_6169_);
lean_dec(v_a_6323_);
if (v_isShared_6315_ == 0)
{
lean_ctor_set(v___x_6314_, 0, v___x_6344_);
v___x_6346_ = v___x_6314_;
goto v_reusejp_6345_;
}
else
{
lean_object* v_reuseFailAlloc_6347_; 
v_reuseFailAlloc_6347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6347_, 0, v___x_6344_);
v___x_6346_ = v_reuseFailAlloc_6347_;
goto v_reusejp_6345_;
}
v_reusejp_6345_:
{
return v___x_6346_;
}
}
}
else
{
lean_object* v_status_6348_; lean_object* v_message_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; lean_object* v___x_6354_; lean_object* v___x_6355_; lean_object* v___x_6356_; lean_object* v___x_6357_; lean_object* v___x_6358_; uint8_t v___x_6359_; lean_object* v___x_6360_; lean_object* v___x_6361_; lean_object* v___x_6362_; lean_object* v___x_6364_; 
lean_dec_ref(v_infos_6169_);
v_status_6348_ = lean_ctor_get(v_a_6322_, 0);
lean_inc(v_status_6348_);
v_message_6349_ = lean_ctor_get(v_a_6322_, 1);
lean_inc_ref(v_message_6349_);
lean_dec_ref_known(v_a_6322_, 2);
v___x_6350_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9));
v___x_6351_ = l_Nat_reprFast(v_status_6348_);
v___x_6352_ = lean_string_append(v___x_6350_, v___x_6351_);
lean_dec_ref(v___x_6351_);
v___x_6353_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__12));
v___x_6354_ = lean_string_append(v___x_6352_, v___x_6353_);
v___x_6355_ = lean_string_append(v___x_6354_, v_url_6168_);
lean_dec_ref(v_url_6168_);
v___x_6356_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__13));
v___x_6357_ = lean_string_append(v___x_6355_, v___x_6356_);
v___x_6358_ = lean_string_append(v___x_6357_, v_message_6349_);
lean_dec_ref(v_message_6349_);
v___x_6359_ = 3;
v___x_6360_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6360_, 0, v___x_6358_);
lean_ctor_set_uint8(v___x_6360_, sizeof(void*)*1, v___x_6359_);
lean_inc_ref(v___y_6172_);
v___x_6361_ = lean_apply_2(v___y_6172_, v___x_6360_, lean_box(0));
v___x_6362_ = lean_box(0);
if (v_isShared_6315_ == 0)
{
lean_ctor_set_tag(v___x_6314_, 1);
lean_ctor_set(v___x_6314_, 0, v___x_6362_);
v___x_6364_ = v___x_6314_;
goto v_reusejp_6363_;
}
else
{
lean_object* v_reuseFailAlloc_6365_; 
v_reuseFailAlloc_6365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6365_, 0, v___x_6362_);
v___x_6364_ = v_reuseFailAlloc_6365_;
goto v_reusejp_6363_;
}
v_reusejp_6363_:
{
return v___x_6364_;
}
}
}
}
}
}
else
{
lean_object* v_a_6367_; lean_object* v___x_6369_; uint8_t v_isShared_6370_; uint8_t v_isSharedCheck_6379_; 
lean_dec_ref(v_infos_6169_);
lean_dec_ref(v_url_6168_);
v_a_6367_ = lean_ctor_get(v___x_6311_, 0);
v_isSharedCheck_6379_ = !lean_is_exclusive(v___x_6311_);
if (v_isSharedCheck_6379_ == 0)
{
v___x_6369_ = v___x_6311_;
v_isShared_6370_ = v_isSharedCheck_6379_;
goto v_resetjp_6368_;
}
else
{
lean_inc(v_a_6367_);
lean_dec(v___x_6311_);
v___x_6369_ = lean_box(0);
v_isShared_6370_ = v_isSharedCheck_6379_;
goto v_resetjp_6368_;
}
v_resetjp_6368_:
{
lean_object* v___x_6371_; uint8_t v___x_6372_; lean_object* v___x_6373_; lean_object* v___x_6374_; lean_object* v___x_6375_; lean_object* v___x_6377_; 
v___x_6371_ = lean_io_error_to_string(v_a_6367_);
v___x_6372_ = 3;
v___x_6373_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6373_, 0, v___x_6371_);
lean_ctor_set_uint8(v___x_6373_, sizeof(void*)*1, v___x_6372_);
lean_inc_ref(v___y_6172_);
v___x_6374_ = lean_apply_2(v___y_6172_, v___x_6373_, lean_box(0));
v___x_6375_ = lean_box(0);
if (v_isShared_6370_ == 0)
{
lean_ctor_set(v___x_6369_, 0, v___x_6375_);
v___x_6377_ = v___x_6369_;
goto v_reusejp_6376_;
}
else
{
lean_object* v_reuseFailAlloc_6378_; 
v_reuseFailAlloc_6378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6378_, 0, v___x_6375_);
v___x_6377_ = v_reuseFailAlloc_6378_;
goto v_reusejp_6376_;
}
v_reusejp_6376_:
{
return v___x_6377_;
}
}
}
}
v___jp_6382_:
{
lean_object* v___x_6387_; uint8_t v___x_6388_; 
v___x_6387_ = lean_array_get_size(v___y_6383_);
v___x_6388_ = lean_nat_dec_lt(v___y_6385_, v___x_6387_);
if (v___x_6388_ == 0)
{
v___y_6297_ = v___y_6384_;
v_a_6298_ = v_val_6386_;
goto v___jp_6296_;
}
else
{
lean_object* v___x_6389_; size_t v___x_6390_; lean_object* v___x_6391_; 
v___x_6389_ = lean_box(0);
v___x_6390_ = lean_usize_of_nat(v___x_6387_);
v___x_6391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_6383_, v___x_6381_, v___x_6390_, v___x_6389_, v___y_6172_);
if (lean_obj_tag(v___x_6391_) == 0)
{
lean_dec_ref_known(v___x_6391_, 1);
v___y_6297_ = v___y_6384_;
v_a_6298_ = v_val_6386_;
goto v___jp_6296_;
}
else
{
lean_object* v_a_6392_; lean_object* v___x_6394_; uint8_t v_isShared_6395_; uint8_t v_isSharedCheck_6399_; 
lean_dec_ref(v_val_6386_);
lean_dec_ref(v___y_6384_);
lean_dec_ref(v_infos_6169_);
lean_dec_ref(v_url_6168_);
v_a_6392_ = lean_ctor_get(v___x_6391_, 0);
v_isSharedCheck_6399_ = !lean_is_exclusive(v___x_6391_);
if (v_isSharedCheck_6399_ == 0)
{
v___x_6394_ = v___x_6391_;
v_isShared_6395_ = v_isSharedCheck_6399_;
goto v_resetjp_6393_;
}
else
{
lean_inc(v_a_6392_);
lean_dec(v___x_6391_);
v___x_6394_ = lean_box(0);
v_isShared_6395_ = v_isSharedCheck_6399_;
goto v_resetjp_6393_;
}
v_resetjp_6393_:
{
lean_object* v___x_6397_; 
if (v_isShared_6395_ == 0)
{
v___x_6397_ = v___x_6394_;
goto v_reusejp_6396_;
}
else
{
lean_object* v_reuseFailAlloc_6398_; 
v_reuseFailAlloc_6398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6398_, 0, v_a_6392_);
v___x_6397_ = v_reuseFailAlloc_6398_;
goto v_reusejp_6396_;
}
v_reusejp_6396_:
{
return v___x_6397_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1___lam__0___boxed(lean_object* v_url_6463_, lean_object* v_infos_6464_, lean_object* v_h_6465_, lean_object* v_path_6466_, lean_object* v___y_6467_, lean_object* v___y_6468_){
_start:
{
lean_object* v_res_6469_; 
v_res_6469_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1___lam__0(v_url_6463_, v_infos_6464_, v_h_6465_, v_path_6466_, v___y_6467_);
lean_dec_ref(v___y_6467_);
lean_dec_ref(v_path_6466_);
lean_dec(v_h_6465_);
return v_res_6469_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1(lean_object* v_a_6470_, lean_object* v_url_6471_, lean_object* v_infos_6472_){
_start:
{
lean_object* v___f_6474_; lean_object* v___x_6475_; 
v___f_6474_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1___lam__0___boxed), 6, 2);
lean_closure_set(v___f_6474_, 0, v_url_6471_);
lean_closure_set(v___f_6474_, 1, v_infos_6472_);
v___x_6475_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v___f_6474_, v_a_6470_);
return v___x_6475_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1___boxed(lean_object* v_a_6476_, lean_object* v_url_6477_, lean_object* v_infos_6478_, lean_object* v___y_6479_){
_start:
{
lean_object* v_res_6480_; 
v_res_6480_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1(v_a_6476_, v_url_6477_, v_infos_6478_);
lean_dec_ref(v_a_6476_);
return v_res_6480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(lean_object* v_service_6481_, lean_object* v_scope_6482_, lean_object* v_cache_6483_, uint8_t v_force_6484_, lean_object* v_as_6485_, size_t v_i_6486_, size_t v_stop_6487_, lean_object* v_b_6488_, lean_object* v___y_6489_){
_start:
{
lean_object* v_a_6492_; lean_object* v___y_6497_; lean_object* v___y_6508_; lean_object* v___y_6519_; uint8_t v___x_6529_; 
v___x_6529_ = lean_usize_dec_eq(v_i_6486_, v_stop_6487_);
if (v___x_6529_ == 0)
{
lean_object* v___x_6530_; uint64_t v_hash_6531_; lean_object* v_ext_6532_; lean_object* v_url_6533_; lean_object* v___y_6535_; uint8_t v_a_6536_; lean_object* v___x_6609_; lean_object* v___x_6610_; lean_object* v___y_6612_; lean_object* v___x_6679_; lean_object* v___x_6680_; uint8_t v___x_6681_; 
v___x_6530_ = lean_array_uget_borrowed(v_as_6485_, v_i_6486_);
v_hash_6531_ = lean_ctor_get_uint64(v___x_6530_, sizeof(void*)*1);
v_ext_6532_ = lean_ctor_get(v___x_6530_, 0);
lean_inc_ref(v_scope_6482_);
lean_inc_ref(v_service_6481_);
v_url_6533_ = l_Lake_CacheService_artifactUrl(v_hash_6531_, v_service_6481_, v_scope_6482_);
v___x_6609_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
lean_inc_ref(v_cache_6483_);
v___x_6610_ = l_System_FilePath_join(v_cache_6483_, v___x_6609_);
v___x_6679_ = lean_string_utf8_byte_size(v_ext_6532_);
v___x_6680_ = lean_unsigned_to_nat(0u);
v___x_6681_ = lean_nat_dec_eq(v___x_6679_, v___x_6680_);
if (v___x_6681_ == 0)
{
lean_object* v___x_6682_; lean_object* v___x_6683_; lean_object* v___x_6684_; lean_object* v___x_6685_; 
v___x_6682_ = l_Lake_lowerHexUInt64(v_hash_6531_);
v___x_6683_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_6684_ = lean_string_append(v___x_6682_, v___x_6683_);
v___x_6685_ = lean_string_append(v___x_6684_, v_ext_6532_);
v___y_6612_ = v___x_6685_;
goto v___jp_6611_;
}
else
{
lean_object* v___x_6686_; 
v___x_6686_ = l_Lake_lowerHexUInt64(v_hash_6531_);
v___y_6612_ = v___x_6686_;
goto v___jp_6611_;
}
v___jp_6534_:
{
if (v_a_6536_ == 0)
{
lean_object* v_infos_6537_; lean_object* v_indices_6538_; lean_object* v___x_6539_; 
v_infos_6537_ = lean_ctor_get(v_b_6488_, 0);
v_indices_6538_ = lean_ctor_get(v_b_6488_, 1);
v___x_6539_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_indices_6538_, v_hash_6531_);
if (lean_obj_tag(v___x_6539_) == 1)
{
lean_object* v_val_6540_; lean_object* v___x_6541_; uint8_t v___x_6542_; 
lean_dec_ref(v_url_6533_);
v_val_6540_ = lean_ctor_get(v___x_6539_, 0);
lean_inc(v_val_6540_);
lean_dec_ref_known(v___x_6539_, 1);
v___x_6541_ = lean_array_get_size(v_infos_6537_);
v___x_6542_ = lean_nat_dec_lt(v_val_6540_, v___x_6541_);
if (v___x_6542_ == 0)
{
lean_dec(v_val_6540_);
lean_dec_ref(v___y_6535_);
lean_inc_ref(v_infos_6537_);
v___y_6508_ = v_infos_6537_;
goto v___jp_6507_;
}
else
{
lean_object* v_v_6543_; lean_object* v_url_6544_; uint64_t v_hash_6545_; lean_object* v_path_6546_; lean_object* v_extraPaths_6547_; lean_object* v___x_6549_; uint8_t v_isShared_6550_; uint8_t v_isSharedCheck_6558_; 
v_v_6543_ = lean_array_fget(v_infos_6537_, v_val_6540_);
v_url_6544_ = lean_ctor_get(v_v_6543_, 0);
v_hash_6545_ = lean_ctor_get_uint64(v_v_6543_, sizeof(void*)*3);
v_path_6546_ = lean_ctor_get(v_v_6543_, 1);
v_extraPaths_6547_ = lean_ctor_get(v_v_6543_, 2);
v_isSharedCheck_6558_ = !lean_is_exclusive(v_v_6543_);
if (v_isSharedCheck_6558_ == 0)
{
v___x_6549_ = v_v_6543_;
v_isShared_6550_ = v_isSharedCheck_6558_;
goto v_resetjp_6548_;
}
else
{
lean_inc(v_extraPaths_6547_);
lean_inc(v_path_6546_);
lean_inc(v_url_6544_);
lean_dec(v_v_6543_);
v___x_6549_ = lean_box(0);
v_isShared_6550_ = v_isSharedCheck_6558_;
goto v_resetjp_6548_;
}
v_resetjp_6548_:
{
lean_object* v___x_6551_; lean_object* v_xs_x27_6552_; lean_object* v___x_6553_; lean_object* v___x_6555_; 
v___x_6551_ = lean_box(0);
lean_inc_ref(v_infos_6537_);
v_xs_x27_6552_ = lean_array_fset(v_infos_6537_, v_val_6540_, v___x_6551_);
v___x_6553_ = lean_array_push(v_extraPaths_6547_, v___y_6535_);
if (v_isShared_6550_ == 0)
{
lean_ctor_set(v___x_6549_, 2, v___x_6553_);
v___x_6555_ = v___x_6549_;
goto v_reusejp_6554_;
}
else
{
lean_object* v_reuseFailAlloc_6557_; 
v_reuseFailAlloc_6557_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_6557_, 0, v_url_6544_);
lean_ctor_set(v_reuseFailAlloc_6557_, 1, v_path_6546_);
lean_ctor_set(v_reuseFailAlloc_6557_, 2, v___x_6553_);
lean_ctor_set_uint64(v_reuseFailAlloc_6557_, sizeof(void*)*3, v_hash_6545_);
v___x_6555_ = v_reuseFailAlloc_6557_;
goto v_reusejp_6554_;
}
v_reusejp_6554_:
{
lean_object* v___x_6556_; 
v___x_6556_ = lean_array_fset(v_xs_x27_6552_, v_val_6540_, v___x_6555_);
lean_dec(v_val_6540_);
v___y_6508_ = v___x_6556_;
goto v___jp_6507_;
}
}
}
}
else
{
lean_object* v___x_6560_; uint8_t v_isShared_6561_; uint8_t v_isSharedCheck_6570_; 
lean_inc_ref(v_indices_6538_);
lean_inc_ref(v_infos_6537_);
lean_dec(v___x_6539_);
v_isSharedCheck_6570_ = !lean_is_exclusive(v_b_6488_);
if (v_isSharedCheck_6570_ == 0)
{
lean_object* v_unused_6571_; lean_object* v_unused_6572_; 
v_unused_6571_ = lean_ctor_get(v_b_6488_, 1);
lean_dec(v_unused_6571_);
v_unused_6572_ = lean_ctor_get(v_b_6488_, 0);
lean_dec(v_unused_6572_);
v___x_6560_ = v_b_6488_;
v_isShared_6561_ = v_isSharedCheck_6570_;
goto v_resetjp_6559_;
}
else
{
lean_dec(v_b_6488_);
v___x_6560_ = lean_box(0);
v_isShared_6561_ = v_isSharedCheck_6570_;
goto v_resetjp_6559_;
}
v_resetjp_6559_:
{
lean_object* v___x_6562_; lean_object* v___x_6563_; lean_object* v___x_6564_; lean_object* v___x_6565_; lean_object* v___x_6566_; lean_object* v___x_6568_; 
v___x_6562_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_6563_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6563_, 0, v_url_6533_);
lean_ctor_set(v___x_6563_, 1, v___y_6535_);
lean_ctor_set(v___x_6563_, 2, v___x_6562_);
lean_ctor_set_uint64(v___x_6563_, sizeof(void*)*3, v_hash_6531_);
lean_inc_ref(v_infos_6537_);
v___x_6564_ = lean_array_push(v_infos_6537_, v___x_6563_);
v___x_6565_ = lean_array_get_size(v_infos_6537_);
lean_dec_ref(v_infos_6537_);
v___x_6566_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_6538_, v_hash_6531_, v___x_6565_);
if (v_isShared_6561_ == 0)
{
lean_ctor_set(v___x_6560_, 1, v___x_6566_);
lean_ctor_set(v___x_6560_, 0, v___x_6564_);
v___x_6568_ = v___x_6560_;
goto v_reusejp_6567_;
}
else
{
lean_object* v_reuseFailAlloc_6569_; 
v_reuseFailAlloc_6569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6569_, 0, v___x_6564_);
lean_ctor_set(v_reuseFailAlloc_6569_, 1, v___x_6566_);
v___x_6568_ = v_reuseFailAlloc_6569_;
goto v_reusejp_6567_;
}
v_reusejp_6567_:
{
v_a_6492_ = v___x_6568_;
goto v___jp_6491_;
}
}
}
}
else
{
lean_object* v_infos_6573_; lean_object* v_indices_6574_; lean_object* v___x_6575_; 
v_infos_6573_ = lean_ctor_get(v_b_6488_, 0);
v_indices_6574_ = lean_ctor_get(v_b_6488_, 1);
v___x_6575_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_indices_6574_, v_hash_6531_);
if (lean_obj_tag(v___x_6575_) == 1)
{
lean_object* v_val_6576_; lean_object* v___x_6577_; uint8_t v___x_6578_; 
lean_dec_ref(v_url_6533_);
v_val_6576_ = lean_ctor_get(v___x_6575_, 0);
lean_inc(v_val_6576_);
lean_dec_ref_known(v___x_6575_, 1);
v___x_6577_ = lean_array_get_size(v_infos_6573_);
v___x_6578_ = lean_nat_dec_lt(v_val_6576_, v___x_6577_);
if (v___x_6578_ == 0)
{
lean_dec(v_val_6576_);
lean_dec_ref(v___y_6535_);
lean_inc_ref(v_infos_6573_);
v___y_6497_ = v_infos_6573_;
goto v___jp_6496_;
}
else
{
lean_object* v_v_6579_; lean_object* v_url_6580_; uint64_t v_hash_6581_; lean_object* v_path_6582_; lean_object* v_extraPaths_6583_; lean_object* v___x_6585_; uint8_t v_isShared_6586_; uint8_t v_isSharedCheck_6594_; 
v_v_6579_ = lean_array_fget(v_infos_6573_, v_val_6576_);
v_url_6580_ = lean_ctor_get(v_v_6579_, 0);
v_hash_6581_ = lean_ctor_get_uint64(v_v_6579_, sizeof(void*)*3);
v_path_6582_ = lean_ctor_get(v_v_6579_, 1);
v_extraPaths_6583_ = lean_ctor_get(v_v_6579_, 2);
v_isSharedCheck_6594_ = !lean_is_exclusive(v_v_6579_);
if (v_isSharedCheck_6594_ == 0)
{
v___x_6585_ = v_v_6579_;
v_isShared_6586_ = v_isSharedCheck_6594_;
goto v_resetjp_6584_;
}
else
{
lean_inc(v_extraPaths_6583_);
lean_inc(v_path_6582_);
lean_inc(v_url_6580_);
lean_dec(v_v_6579_);
v___x_6585_ = lean_box(0);
v_isShared_6586_ = v_isSharedCheck_6594_;
goto v_resetjp_6584_;
}
v_resetjp_6584_:
{
lean_object* v___x_6587_; lean_object* v_xs_x27_6588_; lean_object* v___x_6589_; lean_object* v___x_6591_; 
v___x_6587_ = lean_box(0);
lean_inc_ref(v_infos_6573_);
v_xs_x27_6588_ = lean_array_fset(v_infos_6573_, v_val_6576_, v___x_6587_);
v___x_6589_ = lean_array_push(v_extraPaths_6583_, v_path_6582_);
if (v_isShared_6586_ == 0)
{
lean_ctor_set(v___x_6585_, 2, v___x_6589_);
lean_ctor_set(v___x_6585_, 1, v___y_6535_);
v___x_6591_ = v___x_6585_;
goto v_reusejp_6590_;
}
else
{
lean_object* v_reuseFailAlloc_6593_; 
v_reuseFailAlloc_6593_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_6593_, 0, v_url_6580_);
lean_ctor_set(v_reuseFailAlloc_6593_, 1, v___y_6535_);
lean_ctor_set(v_reuseFailAlloc_6593_, 2, v___x_6589_);
lean_ctor_set_uint64(v_reuseFailAlloc_6593_, sizeof(void*)*3, v_hash_6581_);
v___x_6591_ = v_reuseFailAlloc_6593_;
goto v_reusejp_6590_;
}
v_reusejp_6590_:
{
lean_object* v___x_6592_; 
v___x_6592_ = lean_array_fset(v_xs_x27_6588_, v_val_6576_, v___x_6591_);
lean_dec(v_val_6576_);
v___y_6497_ = v___x_6592_;
goto v___jp_6496_;
}
}
}
}
else
{
lean_object* v___x_6596_; uint8_t v_isShared_6597_; uint8_t v_isSharedCheck_6606_; 
lean_inc_ref(v_indices_6574_);
lean_inc_ref(v_infos_6573_);
lean_dec(v___x_6575_);
v_isSharedCheck_6606_ = !lean_is_exclusive(v_b_6488_);
if (v_isSharedCheck_6606_ == 0)
{
lean_object* v_unused_6607_; lean_object* v_unused_6608_; 
v_unused_6607_ = lean_ctor_get(v_b_6488_, 1);
lean_dec(v_unused_6607_);
v_unused_6608_ = lean_ctor_get(v_b_6488_, 0);
lean_dec(v_unused_6608_);
v___x_6596_ = v_b_6488_;
v_isShared_6597_ = v_isSharedCheck_6606_;
goto v_resetjp_6595_;
}
else
{
lean_dec(v_b_6488_);
v___x_6596_ = lean_box(0);
v_isShared_6597_ = v_isSharedCheck_6606_;
goto v_resetjp_6595_;
}
v_resetjp_6595_:
{
lean_object* v___x_6598_; lean_object* v___x_6599_; lean_object* v___x_6600_; lean_object* v___x_6601_; lean_object* v___x_6602_; lean_object* v___x_6604_; 
v___x_6598_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_6599_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6599_, 0, v_url_6533_);
lean_ctor_set(v___x_6599_, 1, v___y_6535_);
lean_ctor_set(v___x_6599_, 2, v___x_6598_);
lean_ctor_set_uint64(v___x_6599_, sizeof(void*)*3, v_hash_6531_);
lean_inc_ref(v_infos_6573_);
v___x_6600_ = lean_array_push(v_infos_6573_, v___x_6599_);
v___x_6601_ = lean_array_get_size(v_infos_6573_);
lean_dec_ref(v_infos_6573_);
v___x_6602_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_6574_, v_hash_6531_, v___x_6601_);
if (v_isShared_6597_ == 0)
{
lean_ctor_set(v___x_6596_, 1, v___x_6602_);
lean_ctor_set(v___x_6596_, 0, v___x_6600_);
v___x_6604_ = v___x_6596_;
goto v_reusejp_6603_;
}
else
{
lean_object* v_reuseFailAlloc_6605_; 
v_reuseFailAlloc_6605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6605_, 0, v___x_6600_);
lean_ctor_set(v_reuseFailAlloc_6605_, 1, v___x_6602_);
v___x_6604_ = v_reuseFailAlloc_6605_;
goto v_reusejp_6603_;
}
v_reusejp_6603_:
{
v_a_6492_ = v___x_6604_;
goto v___jp_6491_;
}
}
}
}
}
v___jp_6611_:
{
lean_object* v_path_6613_; 
v_path_6613_ = l_System_FilePath_join(v___x_6610_, v___y_6612_);
if (v_force_6484_ == 0)
{
lean_object* v___x_6614_; uint8_t v___x_6615_; uint8_t v___x_6616_; 
v___x_6614_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6615_ = l_System_FilePath_pathExists(v_path_6613_);
v___x_6616_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_6616_ == 0)
{
v___y_6535_ = v_path_6613_;
v_a_6536_ = v___x_6615_;
goto v___jp_6534_;
}
else
{
lean_object* v___x_6617_; size_t v___x_6618_; size_t v___x_6619_; lean_object* v___x_6620_; 
v___x_6617_ = lean_box(0);
v___x_6618_ = ((size_t)0ULL);
v___x_6619_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_6620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_6614_, v___x_6618_, v___x_6619_, v___x_6617_, v___y_6489_);
if (lean_obj_tag(v___x_6620_) == 0)
{
lean_dec_ref_known(v___x_6620_, 1);
v___y_6535_ = v_path_6613_;
v_a_6536_ = v___x_6615_;
goto v___jp_6534_;
}
else
{
lean_object* v_a_6621_; lean_object* v___x_6623_; uint8_t v_isShared_6624_; uint8_t v_isSharedCheck_6628_; 
lean_dec_ref(v_path_6613_);
lean_dec_ref(v_url_6533_);
lean_dec_ref(v_b_6488_);
lean_dec_ref(v_cache_6483_);
lean_dec_ref(v_scope_6482_);
lean_dec_ref(v_service_6481_);
v_a_6621_ = lean_ctor_get(v___x_6620_, 0);
v_isSharedCheck_6628_ = !lean_is_exclusive(v___x_6620_);
if (v_isSharedCheck_6628_ == 0)
{
v___x_6623_ = v___x_6620_;
v_isShared_6624_ = v_isSharedCheck_6628_;
goto v_resetjp_6622_;
}
else
{
lean_inc(v_a_6621_);
lean_dec(v___x_6620_);
v___x_6623_ = lean_box(0);
v_isShared_6624_ = v_isSharedCheck_6628_;
goto v_resetjp_6622_;
}
v_resetjp_6622_:
{
lean_object* v___x_6626_; 
if (v_isShared_6624_ == 0)
{
v___x_6626_ = v___x_6623_;
goto v_reusejp_6625_;
}
else
{
lean_object* v_reuseFailAlloc_6627_; 
v_reuseFailAlloc_6627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6627_, 0, v_a_6621_);
v___x_6626_ = v_reuseFailAlloc_6627_;
goto v_reusejp_6625_;
}
v_reusejp_6625_:
{
return v___x_6626_;
}
}
}
}
}
else
{
lean_object* v___x_6629_; 
v___x_6629_ = l_Lake_removeFileIfExists(v_path_6613_);
if (lean_obj_tag(v___x_6629_) == 0)
{
lean_object* v_infos_6630_; lean_object* v_indices_6631_; lean_object* v___x_6632_; 
lean_dec_ref_known(v___x_6629_, 1);
v_infos_6630_ = lean_ctor_get(v_b_6488_, 0);
v_indices_6631_ = lean_ctor_get(v_b_6488_, 1);
v___x_6632_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_indices_6631_, v_hash_6531_);
if (lean_obj_tag(v___x_6632_) == 1)
{
lean_object* v_val_6633_; lean_object* v___x_6634_; uint8_t v___x_6635_; 
lean_dec_ref(v_url_6533_);
v_val_6633_ = lean_ctor_get(v___x_6632_, 0);
lean_inc(v_val_6633_);
lean_dec_ref_known(v___x_6632_, 1);
v___x_6634_ = lean_array_get_size(v_infos_6630_);
v___x_6635_ = lean_nat_dec_lt(v_val_6633_, v___x_6634_);
if (v___x_6635_ == 0)
{
lean_dec(v_val_6633_);
lean_dec_ref(v_path_6613_);
lean_inc_ref(v_infos_6630_);
v___y_6519_ = v_infos_6630_;
goto v___jp_6518_;
}
else
{
lean_object* v_v_6636_; lean_object* v_url_6637_; uint64_t v_hash_6638_; lean_object* v_path_6639_; lean_object* v_extraPaths_6640_; lean_object* v___x_6642_; uint8_t v_isShared_6643_; uint8_t v_isSharedCheck_6651_; 
v_v_6636_ = lean_array_fget(v_infos_6630_, v_val_6633_);
v_url_6637_ = lean_ctor_get(v_v_6636_, 0);
v_hash_6638_ = lean_ctor_get_uint64(v_v_6636_, sizeof(void*)*3);
v_path_6639_ = lean_ctor_get(v_v_6636_, 1);
v_extraPaths_6640_ = lean_ctor_get(v_v_6636_, 2);
v_isSharedCheck_6651_ = !lean_is_exclusive(v_v_6636_);
if (v_isSharedCheck_6651_ == 0)
{
v___x_6642_ = v_v_6636_;
v_isShared_6643_ = v_isSharedCheck_6651_;
goto v_resetjp_6641_;
}
else
{
lean_inc(v_extraPaths_6640_);
lean_inc(v_path_6639_);
lean_inc(v_url_6637_);
lean_dec(v_v_6636_);
v___x_6642_ = lean_box(0);
v_isShared_6643_ = v_isSharedCheck_6651_;
goto v_resetjp_6641_;
}
v_resetjp_6641_:
{
lean_object* v___x_6644_; lean_object* v_xs_x27_6645_; lean_object* v___x_6646_; lean_object* v___x_6648_; 
v___x_6644_ = lean_box(0);
lean_inc_ref(v_infos_6630_);
v_xs_x27_6645_ = lean_array_fset(v_infos_6630_, v_val_6633_, v___x_6644_);
v___x_6646_ = lean_array_push(v_extraPaths_6640_, v_path_6613_);
if (v_isShared_6643_ == 0)
{
lean_ctor_set(v___x_6642_, 2, v___x_6646_);
v___x_6648_ = v___x_6642_;
goto v_reusejp_6647_;
}
else
{
lean_object* v_reuseFailAlloc_6650_; 
v_reuseFailAlloc_6650_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_6650_, 0, v_url_6637_);
lean_ctor_set(v_reuseFailAlloc_6650_, 1, v_path_6639_);
lean_ctor_set(v_reuseFailAlloc_6650_, 2, v___x_6646_);
lean_ctor_set_uint64(v_reuseFailAlloc_6650_, sizeof(void*)*3, v_hash_6638_);
v___x_6648_ = v_reuseFailAlloc_6650_;
goto v_reusejp_6647_;
}
v_reusejp_6647_:
{
lean_object* v___x_6649_; 
v___x_6649_ = lean_array_fset(v_xs_x27_6645_, v_val_6633_, v___x_6648_);
lean_dec(v_val_6633_);
v___y_6519_ = v___x_6649_;
goto v___jp_6518_;
}
}
}
}
else
{
lean_object* v___x_6653_; uint8_t v_isShared_6654_; uint8_t v_isSharedCheck_6663_; 
lean_inc_ref(v_indices_6631_);
lean_inc_ref(v_infos_6630_);
lean_dec(v___x_6632_);
v_isSharedCheck_6663_ = !lean_is_exclusive(v_b_6488_);
if (v_isSharedCheck_6663_ == 0)
{
lean_object* v_unused_6664_; lean_object* v_unused_6665_; 
v_unused_6664_ = lean_ctor_get(v_b_6488_, 1);
lean_dec(v_unused_6664_);
v_unused_6665_ = lean_ctor_get(v_b_6488_, 0);
lean_dec(v_unused_6665_);
v___x_6653_ = v_b_6488_;
v_isShared_6654_ = v_isSharedCheck_6663_;
goto v_resetjp_6652_;
}
else
{
lean_dec(v_b_6488_);
v___x_6653_ = lean_box(0);
v_isShared_6654_ = v_isSharedCheck_6663_;
goto v_resetjp_6652_;
}
v_resetjp_6652_:
{
lean_object* v___x_6655_; lean_object* v___x_6656_; lean_object* v___x_6657_; lean_object* v___x_6658_; lean_object* v___x_6659_; lean_object* v___x_6661_; 
v___x_6655_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_6656_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6656_, 0, v_url_6533_);
lean_ctor_set(v___x_6656_, 1, v_path_6613_);
lean_ctor_set(v___x_6656_, 2, v___x_6655_);
lean_ctor_set_uint64(v___x_6656_, sizeof(void*)*3, v_hash_6531_);
lean_inc_ref(v_infos_6630_);
v___x_6657_ = lean_array_push(v_infos_6630_, v___x_6656_);
v___x_6658_ = lean_array_get_size(v_infos_6630_);
lean_dec_ref(v_infos_6630_);
v___x_6659_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_6631_, v_hash_6531_, v___x_6658_);
if (v_isShared_6654_ == 0)
{
lean_ctor_set(v___x_6653_, 1, v___x_6659_);
lean_ctor_set(v___x_6653_, 0, v___x_6657_);
v___x_6661_ = v___x_6653_;
goto v_reusejp_6660_;
}
else
{
lean_object* v_reuseFailAlloc_6662_; 
v_reuseFailAlloc_6662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6662_, 0, v___x_6657_);
lean_ctor_set(v_reuseFailAlloc_6662_, 1, v___x_6659_);
v___x_6661_ = v_reuseFailAlloc_6662_;
goto v_reusejp_6660_;
}
v_reusejp_6660_:
{
v_a_6492_ = v___x_6661_;
goto v___jp_6491_;
}
}
}
}
else
{
lean_object* v_a_6666_; lean_object* v___x_6668_; uint8_t v_isShared_6669_; uint8_t v_isSharedCheck_6678_; 
lean_dec_ref(v_path_6613_);
lean_dec_ref(v_url_6533_);
lean_dec_ref(v_b_6488_);
lean_dec_ref(v_cache_6483_);
lean_dec_ref(v_scope_6482_);
lean_dec_ref(v_service_6481_);
v_a_6666_ = lean_ctor_get(v___x_6629_, 0);
v_isSharedCheck_6678_ = !lean_is_exclusive(v___x_6629_);
if (v_isSharedCheck_6678_ == 0)
{
v___x_6668_ = v___x_6629_;
v_isShared_6669_ = v_isSharedCheck_6678_;
goto v_resetjp_6667_;
}
else
{
lean_inc(v_a_6666_);
lean_dec(v___x_6629_);
v___x_6668_ = lean_box(0);
v_isShared_6669_ = v_isSharedCheck_6678_;
goto v_resetjp_6667_;
}
v_resetjp_6667_:
{
lean_object* v___x_6670_; uint8_t v___x_6671_; lean_object* v___x_6672_; lean_object* v___x_6673_; lean_object* v___x_6674_; lean_object* v___x_6676_; 
v___x_6670_ = lean_io_error_to_string(v_a_6666_);
v___x_6671_ = 3;
v___x_6672_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6672_, 0, v___x_6670_);
lean_ctor_set_uint8(v___x_6672_, sizeof(void*)*1, v___x_6671_);
lean_inc_ref(v___y_6489_);
v___x_6673_ = lean_apply_2(v___y_6489_, v___x_6672_, lean_box(0));
v___x_6674_ = lean_box(0);
if (v_isShared_6669_ == 0)
{
lean_ctor_set(v___x_6668_, 0, v___x_6674_);
v___x_6676_ = v___x_6668_;
goto v_reusejp_6675_;
}
else
{
lean_object* v_reuseFailAlloc_6677_; 
v_reuseFailAlloc_6677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6677_, 0, v___x_6674_);
v___x_6676_ = v_reuseFailAlloc_6677_;
goto v_reusejp_6675_;
}
v_reusejp_6675_:
{
return v___x_6676_;
}
}
}
}
}
}
else
{
lean_object* v___x_6687_; 
lean_dec_ref(v_cache_6483_);
lean_dec_ref(v_scope_6482_);
lean_dec_ref(v_service_6481_);
v___x_6687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6687_, 0, v_b_6488_);
return v___x_6687_;
}
v___jp_6491_:
{
size_t v___x_6493_; size_t v___x_6494_; 
v___x_6493_ = ((size_t)1ULL);
v___x_6494_ = lean_usize_add(v_i_6486_, v___x_6493_);
v_i_6486_ = v___x_6494_;
v_b_6488_ = v_a_6492_;
goto _start;
}
v___jp_6496_:
{
lean_object* v_indices_6498_; lean_object* v___x_6500_; uint8_t v_isShared_6501_; uint8_t v_isSharedCheck_6505_; 
v_indices_6498_ = lean_ctor_get(v_b_6488_, 1);
v_isSharedCheck_6505_ = !lean_is_exclusive(v_b_6488_);
if (v_isSharedCheck_6505_ == 0)
{
lean_object* v_unused_6506_; 
v_unused_6506_ = lean_ctor_get(v_b_6488_, 0);
lean_dec(v_unused_6506_);
v___x_6500_ = v_b_6488_;
v_isShared_6501_ = v_isSharedCheck_6505_;
goto v_resetjp_6499_;
}
else
{
lean_inc(v_indices_6498_);
lean_dec(v_b_6488_);
v___x_6500_ = lean_box(0);
v_isShared_6501_ = v_isSharedCheck_6505_;
goto v_resetjp_6499_;
}
v_resetjp_6499_:
{
lean_object* v___x_6503_; 
if (v_isShared_6501_ == 0)
{
lean_ctor_set(v___x_6500_, 0, v___y_6497_);
v___x_6503_ = v___x_6500_;
goto v_reusejp_6502_;
}
else
{
lean_object* v_reuseFailAlloc_6504_; 
v_reuseFailAlloc_6504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6504_, 0, v___y_6497_);
lean_ctor_set(v_reuseFailAlloc_6504_, 1, v_indices_6498_);
v___x_6503_ = v_reuseFailAlloc_6504_;
goto v_reusejp_6502_;
}
v_reusejp_6502_:
{
v_a_6492_ = v___x_6503_;
goto v___jp_6491_;
}
}
}
v___jp_6507_:
{
lean_object* v_indices_6509_; lean_object* v___x_6511_; uint8_t v_isShared_6512_; uint8_t v_isSharedCheck_6516_; 
v_indices_6509_ = lean_ctor_get(v_b_6488_, 1);
v_isSharedCheck_6516_ = !lean_is_exclusive(v_b_6488_);
if (v_isSharedCheck_6516_ == 0)
{
lean_object* v_unused_6517_; 
v_unused_6517_ = lean_ctor_get(v_b_6488_, 0);
lean_dec(v_unused_6517_);
v___x_6511_ = v_b_6488_;
v_isShared_6512_ = v_isSharedCheck_6516_;
goto v_resetjp_6510_;
}
else
{
lean_inc(v_indices_6509_);
lean_dec(v_b_6488_);
v___x_6511_ = lean_box(0);
v_isShared_6512_ = v_isSharedCheck_6516_;
goto v_resetjp_6510_;
}
v_resetjp_6510_:
{
lean_object* v___x_6514_; 
if (v_isShared_6512_ == 0)
{
lean_ctor_set(v___x_6511_, 0, v___y_6508_);
v___x_6514_ = v___x_6511_;
goto v_reusejp_6513_;
}
else
{
lean_object* v_reuseFailAlloc_6515_; 
v_reuseFailAlloc_6515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6515_, 0, v___y_6508_);
lean_ctor_set(v_reuseFailAlloc_6515_, 1, v_indices_6509_);
v___x_6514_ = v_reuseFailAlloc_6515_;
goto v_reusejp_6513_;
}
v_reusejp_6513_:
{
v_a_6492_ = v___x_6514_;
goto v___jp_6491_;
}
}
}
v___jp_6518_:
{
lean_object* v_indices_6520_; lean_object* v___x_6522_; uint8_t v_isShared_6523_; uint8_t v_isSharedCheck_6527_; 
v_indices_6520_ = lean_ctor_get(v_b_6488_, 1);
v_isSharedCheck_6527_ = !lean_is_exclusive(v_b_6488_);
if (v_isSharedCheck_6527_ == 0)
{
lean_object* v_unused_6528_; 
v_unused_6528_ = lean_ctor_get(v_b_6488_, 0);
lean_dec(v_unused_6528_);
v___x_6522_ = v_b_6488_;
v_isShared_6523_ = v_isSharedCheck_6527_;
goto v_resetjp_6521_;
}
else
{
lean_inc(v_indices_6520_);
lean_dec(v_b_6488_);
v___x_6522_ = lean_box(0);
v_isShared_6523_ = v_isSharedCheck_6527_;
goto v_resetjp_6521_;
}
v_resetjp_6521_:
{
lean_object* v___x_6525_; 
if (v_isShared_6523_ == 0)
{
lean_ctor_set(v___x_6522_, 0, v___y_6519_);
v___x_6525_ = v___x_6522_;
goto v_reusejp_6524_;
}
else
{
lean_object* v_reuseFailAlloc_6526_; 
v_reuseFailAlloc_6526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6526_, 0, v___y_6519_);
lean_ctor_set(v_reuseFailAlloc_6526_, 1, v_indices_6520_);
v___x_6525_ = v_reuseFailAlloc_6526_;
goto v_reusejp_6524_;
}
v_reusejp_6524_:
{
v_a_6492_ = v___x_6525_;
goto v___jp_6491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3___boxed(lean_object* v_service_6688_, lean_object* v_scope_6689_, lean_object* v_cache_6690_, lean_object* v_force_6691_, lean_object* v_as_6692_, lean_object* v_i_6693_, lean_object* v_stop_6694_, lean_object* v_b_6695_, lean_object* v___y_6696_, lean_object* v___y_6697_){
_start:
{
uint8_t v_force_boxed_6698_; size_t v_i_boxed_6699_; size_t v_stop_boxed_6700_; lean_object* v_res_6701_; 
v_force_boxed_6698_ = lean_unbox(v_force_6691_);
v_i_boxed_6699_ = lean_unbox_usize(v_i_6693_);
lean_dec(v_i_6693_);
v_stop_boxed_6700_ = lean_unbox_usize(v_stop_6694_);
lean_dec(v_stop_6694_);
v_res_6701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(v_service_6688_, v_scope_6689_, v_cache_6690_, v_force_boxed_6698_, v_as_6692_, v_i_boxed_6699_, v_stop_boxed_6700_, v_b_6695_, v___y_6696_);
lean_dec_ref(v___y_6696_);
lean_dec_ref(v_as_6692_);
return v_res_6701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2(lean_object* v_as_6703_, size_t v_i_6704_, size_t v_stop_6705_, lean_object* v_b_6706_, lean_object* v___y_6707_){
_start:
{
lean_object* v_a_6710_; uint8_t v___x_6714_; 
v___x_6714_ = lean_usize_dec_eq(v_i_6704_, v_stop_6705_);
if (v___x_6714_ == 0)
{
lean_object* v___x_6715_; lean_object* v_a_6719_; uint8_t v_a_6736_; lean_object* v_path_6737_; lean_object* v_extraPaths_6738_; lean_object* v___x_6739_; lean_object* v___x_6740_; uint8_t v___x_6741_; 
v___x_6715_ = lean_array_uget_borrowed(v_as_6703_, v_i_6704_);
v_path_6737_ = lean_ctor_get(v___x_6715_, 1);
v_extraPaths_6738_ = lean_ctor_get(v___x_6715_, 2);
v___x_6739_ = lean_array_get_size(v_extraPaths_6738_);
v___x_6740_ = lean_unsigned_to_nat(0u);
v___x_6741_ = lean_nat_dec_eq(v___x_6739_, v___x_6740_);
if (v___x_6741_ == 0)
{
lean_object* v___x_6742_; lean_object* v_val_6744_; lean_object* v___x_6758_; 
v___x_6742_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6758_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths(v_path_6737_, v_extraPaths_6738_);
if (lean_obj_tag(v___x_6758_) == 0)
{
lean_object* v_a_6759_; lean_object* v___x_6761_; uint8_t v_isShared_6762_; uint8_t v_isSharedCheck_6766_; 
v_a_6759_ = lean_ctor_get(v___x_6758_, 0);
v_isSharedCheck_6766_ = !lean_is_exclusive(v___x_6758_);
if (v_isSharedCheck_6766_ == 0)
{
v___x_6761_ = v___x_6758_;
v_isShared_6762_ = v_isSharedCheck_6766_;
goto v_resetjp_6760_;
}
else
{
lean_inc(v_a_6759_);
lean_dec(v___x_6758_);
v___x_6761_ = lean_box(0);
v_isShared_6762_ = v_isSharedCheck_6766_;
goto v_resetjp_6760_;
}
v_resetjp_6760_:
{
lean_object* v___x_6764_; 
if (v_isShared_6762_ == 0)
{
lean_ctor_set_tag(v___x_6761_, 1);
v___x_6764_ = v___x_6761_;
goto v_reusejp_6763_;
}
else
{
lean_object* v_reuseFailAlloc_6765_; 
v_reuseFailAlloc_6765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6765_, 0, v_a_6759_);
v___x_6764_ = v_reuseFailAlloc_6765_;
goto v_reusejp_6763_;
}
v_reusejp_6763_:
{
v_val_6744_ = v___x_6764_;
goto v___jp_6743_;
}
}
}
else
{
lean_object* v_a_6767_; lean_object* v___x_6769_; uint8_t v_isShared_6770_; uint8_t v_isSharedCheck_6774_; 
v_a_6767_ = lean_ctor_get(v___x_6758_, 0);
v_isSharedCheck_6774_ = !lean_is_exclusive(v___x_6758_);
if (v_isSharedCheck_6774_ == 0)
{
v___x_6769_ = v___x_6758_;
v_isShared_6770_ = v_isSharedCheck_6774_;
goto v_resetjp_6768_;
}
else
{
lean_inc(v_a_6767_);
lean_dec(v___x_6758_);
v___x_6769_ = lean_box(0);
v_isShared_6770_ = v_isSharedCheck_6774_;
goto v_resetjp_6768_;
}
v_resetjp_6768_:
{
lean_object* v___x_6772_; 
if (v_isShared_6770_ == 0)
{
lean_ctor_set_tag(v___x_6769_, 0);
v___x_6772_ = v___x_6769_;
goto v_reusejp_6771_;
}
else
{
lean_object* v_reuseFailAlloc_6773_; 
v_reuseFailAlloc_6773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6773_, 0, v_a_6767_);
v___x_6772_ = v_reuseFailAlloc_6773_;
goto v_reusejp_6771_;
}
v_reusejp_6771_:
{
v_val_6744_ = v___x_6772_;
goto v___jp_6743_;
}
}
}
v___jp_6743_:
{
uint8_t v___x_6745_; 
v___x_6745_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_6745_ == 0)
{
v_a_6719_ = v_val_6744_;
goto v___jp_6718_;
}
else
{
lean_object* v___x_6746_; size_t v___x_6747_; size_t v___x_6748_; lean_object* v___x_6749_; 
v___x_6746_ = lean_box(0);
v___x_6747_ = ((size_t)0ULL);
v___x_6748_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_6749_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_6742_, v___x_6747_, v___x_6748_, v___x_6746_, v___y_6707_);
if (lean_obj_tag(v___x_6749_) == 0)
{
lean_dec_ref_known(v___x_6749_, 1);
v_a_6719_ = v_val_6744_;
goto v___jp_6718_;
}
else
{
lean_object* v_a_6750_; lean_object* v___x_6752_; uint8_t v_isShared_6753_; uint8_t v_isSharedCheck_6757_; 
lean_dec_ref(v_val_6744_);
lean_dec_ref(v_b_6706_);
v_a_6750_ = lean_ctor_get(v___x_6749_, 0);
v_isSharedCheck_6757_ = !lean_is_exclusive(v___x_6749_);
if (v_isSharedCheck_6757_ == 0)
{
v___x_6752_ = v___x_6749_;
v_isShared_6753_ = v_isSharedCheck_6757_;
goto v_resetjp_6751_;
}
else
{
lean_inc(v_a_6750_);
lean_dec(v___x_6749_);
v___x_6752_ = lean_box(0);
v_isShared_6753_ = v_isSharedCheck_6757_;
goto v_resetjp_6751_;
}
v_resetjp_6751_:
{
lean_object* v___x_6755_; 
if (v_isShared_6753_ == 0)
{
v___x_6755_ = v___x_6752_;
goto v_reusejp_6754_;
}
else
{
lean_object* v_reuseFailAlloc_6756_; 
v_reuseFailAlloc_6756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6756_, 0, v_a_6750_);
v___x_6755_ = v_reuseFailAlloc_6756_;
goto v_reusejp_6754_;
}
v_reusejp_6754_:
{
return v___x_6755_;
}
}
}
}
}
}
else
{
lean_object* v___x_6775_; uint8_t v___x_6776_; uint8_t v___x_6777_; 
v___x_6775_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6776_ = l_System_FilePath_pathExists(v_path_6737_);
v___x_6777_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_6777_ == 0)
{
v_a_6736_ = v___x_6776_;
goto v___jp_6735_;
}
else
{
lean_object* v___x_6778_; size_t v___x_6779_; size_t v___x_6780_; lean_object* v___x_6781_; 
v___x_6778_ = lean_box(0);
v___x_6779_ = ((size_t)0ULL);
v___x_6780_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_6781_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_6775_, v___x_6779_, v___x_6780_, v___x_6778_, v___y_6707_);
if (lean_obj_tag(v___x_6781_) == 0)
{
lean_dec_ref_known(v___x_6781_, 1);
v_a_6736_ = v___x_6776_;
goto v___jp_6735_;
}
else
{
lean_object* v_a_6782_; lean_object* v___x_6784_; uint8_t v_isShared_6785_; uint8_t v_isSharedCheck_6789_; 
lean_dec_ref(v_b_6706_);
v_a_6782_ = lean_ctor_get(v___x_6781_, 0);
v_isSharedCheck_6789_ = !lean_is_exclusive(v___x_6781_);
if (v_isSharedCheck_6789_ == 0)
{
v___x_6784_ = v___x_6781_;
v_isShared_6785_ = v_isSharedCheck_6789_;
goto v_resetjp_6783_;
}
else
{
lean_inc(v_a_6782_);
lean_dec(v___x_6781_);
v___x_6784_ = lean_box(0);
v_isShared_6785_ = v_isSharedCheck_6789_;
goto v_resetjp_6783_;
}
v_resetjp_6783_:
{
lean_object* v___x_6787_; 
if (v_isShared_6785_ == 0)
{
v___x_6787_ = v___x_6784_;
goto v_reusejp_6786_;
}
else
{
lean_object* v_reuseFailAlloc_6788_; 
v_reuseFailAlloc_6788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6788_, 0, v_a_6782_);
v___x_6787_ = v_reuseFailAlloc_6788_;
goto v_reusejp_6786_;
}
v_reusejp_6786_:
{
return v___x_6787_;
}
}
}
}
}
v___jp_6716_:
{
lean_object* v___x_6717_; 
lean_inc(v___x_6715_);
v___x_6717_ = lean_array_push(v_b_6706_, v___x_6715_);
v_a_6710_ = v___x_6717_;
goto v___jp_6709_;
}
v___jp_6718_:
{
if (lean_obj_tag(v_a_6719_) == 0)
{
lean_object* v_a_6720_; lean_object* v___x_6722_; uint8_t v_isShared_6723_; uint8_t v_isSharedCheck_6734_; 
v_a_6720_ = lean_ctor_get(v_a_6719_, 0);
v_isSharedCheck_6734_ = !lean_is_exclusive(v_a_6719_);
if (v_isSharedCheck_6734_ == 0)
{
v___x_6722_ = v_a_6719_;
v_isShared_6723_ = v_isSharedCheck_6734_;
goto v_resetjp_6721_;
}
else
{
lean_inc(v_a_6720_);
lean_dec(v_a_6719_);
v___x_6722_ = lean_box(0);
v_isShared_6723_ = v_isSharedCheck_6734_;
goto v_resetjp_6721_;
}
v_resetjp_6721_:
{
if (lean_obj_tag(v_a_6720_) == 11)
{
lean_dec_ref_known(v_a_6720_, 2);
lean_del_object(v___x_6722_);
goto v___jp_6716_;
}
else
{
lean_object* v___x_6724_; lean_object* v___x_6725_; lean_object* v___x_6726_; uint8_t v___x_6727_; lean_object* v___x_6728_; lean_object* v___x_6729_; lean_object* v___x_6730_; lean_object* v___x_6732_; 
lean_dec_ref(v_b_6706_);
v___x_6724_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2___closed__0));
v___x_6725_ = lean_io_error_to_string(v_a_6720_);
v___x_6726_ = lean_string_append(v___x_6724_, v___x_6725_);
lean_dec_ref(v___x_6725_);
v___x_6727_ = 3;
v___x_6728_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6728_, 0, v___x_6726_);
lean_ctor_set_uint8(v___x_6728_, sizeof(void*)*1, v___x_6727_);
lean_inc_ref(v___y_6707_);
v___x_6729_ = lean_apply_2(v___y_6707_, v___x_6728_, lean_box(0));
v___x_6730_ = lean_box(0);
if (v_isShared_6723_ == 0)
{
lean_ctor_set_tag(v___x_6722_, 1);
lean_ctor_set(v___x_6722_, 0, v___x_6730_);
v___x_6732_ = v___x_6722_;
goto v_reusejp_6731_;
}
else
{
lean_object* v_reuseFailAlloc_6733_; 
v_reuseFailAlloc_6733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6733_, 0, v___x_6730_);
v___x_6732_ = v_reuseFailAlloc_6733_;
goto v_reusejp_6731_;
}
v_reusejp_6731_:
{
return v___x_6732_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_6719_, 1);
v_a_6710_ = v_b_6706_;
goto v___jp_6709_;
}
}
v___jp_6735_:
{
if (v_a_6736_ == 0)
{
goto v___jp_6716_;
}
else
{
v_a_6710_ = v_b_6706_;
goto v___jp_6709_;
}
}
}
else
{
lean_object* v___x_6790_; 
v___x_6790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6790_, 0, v_b_6706_);
return v___x_6790_;
}
v___jp_6709_:
{
size_t v___x_6711_; size_t v___x_6712_; 
v___x_6711_ = ((size_t)1ULL);
v___x_6712_ = lean_usize_add(v_i_6704_, v___x_6711_);
v_i_6704_ = v___x_6712_;
v_b_6706_ = v_a_6710_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2___boxed(lean_object* v_as_6791_, lean_object* v_i_6792_, lean_object* v_stop_6793_, lean_object* v_b_6794_, lean_object* v___y_6795_, lean_object* v___y_6796_){
_start:
{
size_t v_i_boxed_6797_; size_t v_stop_boxed_6798_; lean_object* v_res_6799_; 
v_i_boxed_6797_ = lean_unbox_usize(v_i_6792_);
lean_dec(v_i_6792_);
v_stop_boxed_6798_ = lean_unbox_usize(v_stop_6793_);
lean_dec(v_stop_6793_);
v_res_6799_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2(v_as_6791_, v_i_boxed_6797_, v_stop_boxed_6798_, v_b_6794_, v___y_6795_);
lean_dec_ref(v___y_6795_);
lean_dec_ref(v_as_6791_);
return v_res_6799_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts(lean_object* v_descrs_6804_, lean_object* v_cache_6805_, lean_object* v_service_6806_, lean_object* v_scope_6807_, uint8_t v_force_6808_, lean_object* v_a_6809_){
_start:
{
lean_object* v_a_6812_; lean_object* v_a_6834_; lean_object* v___y_6853_; lean_object* v___x_6863_; lean_object* v___x_6864_; uint8_t v___x_6865_; 
v___x_6863_ = lean_array_get_size(v_descrs_6804_);
v___x_6864_ = lean_unsigned_to_nat(0u);
v___x_6865_ = lean_nat_dec_eq(v___x_6863_, v___x_6864_);
if (v___x_6865_ == 0)
{
lean_object* v___x_6866_; lean_object* v_infos_6868_; lean_object* v___y_6879_; uint8_t v___x_6890_; 
v___x_6866_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__0));
v___x_6890_ = lean_nat_dec_lt(v___x_6864_, v___x_6863_);
if (v___x_6890_ == 0)
{
v_infos_6868_ = v___x_6866_;
goto v___jp_6867_;
}
else
{
lean_object* v___x_6891_; uint8_t v___x_6892_; 
v___x_6891_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1);
v___x_6892_ = lean_nat_dec_le(v___x_6863_, v___x_6863_);
if (v___x_6892_ == 0)
{
if (v___x_6890_ == 0)
{
v_infos_6868_ = v___x_6866_;
goto v___jp_6867_;
}
else
{
size_t v___x_6893_; size_t v___x_6894_; lean_object* v___x_6895_; 
v___x_6893_ = ((size_t)0ULL);
v___x_6894_ = lean_usize_of_nat(v___x_6863_);
lean_inc_ref(v_cache_6805_);
lean_inc_ref(v_scope_6807_);
lean_inc_ref(v_service_6806_);
v___x_6895_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(v_service_6806_, v_scope_6807_, v_cache_6805_, v_force_6808_, v_descrs_6804_, v___x_6893_, v___x_6894_, v___x_6891_, v_a_6809_);
v___y_6879_ = v___x_6895_;
goto v___jp_6878_;
}
}
else
{
size_t v___x_6896_; size_t v___x_6897_; lean_object* v___x_6898_; 
v___x_6896_ = ((size_t)0ULL);
v___x_6897_ = lean_usize_of_nat(v___x_6863_);
lean_inc_ref(v_cache_6805_);
lean_inc_ref(v_scope_6807_);
lean_inc_ref(v_service_6806_);
v___x_6898_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(v_service_6806_, v_scope_6807_, v_cache_6805_, v_force_6808_, v_descrs_6804_, v___x_6896_, v___x_6897_, v___x_6891_, v_a_6809_);
v___y_6879_ = v___x_6898_;
goto v___jp_6878_;
}
}
v___jp_6867_:
{
lean_object* v___x_6869_; uint8_t v___x_6870_; 
v___x_6869_ = lean_array_get_size(v_infos_6868_);
v___x_6870_ = lean_nat_dec_lt(v___x_6864_, v___x_6869_);
if (v___x_6870_ == 0)
{
lean_dec_ref(v_infos_6868_);
v_a_6834_ = v___x_6866_;
goto v___jp_6833_;
}
else
{
uint8_t v___x_6871_; 
v___x_6871_ = lean_nat_dec_le(v___x_6869_, v___x_6869_);
if (v___x_6871_ == 0)
{
if (v___x_6870_ == 0)
{
lean_dec_ref(v_infos_6868_);
v_a_6834_ = v___x_6866_;
goto v___jp_6833_;
}
else
{
size_t v___x_6872_; size_t v___x_6873_; lean_object* v___x_6874_; 
v___x_6872_ = ((size_t)0ULL);
v___x_6873_ = lean_usize_of_nat(v___x_6869_);
v___x_6874_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2(v_infos_6868_, v___x_6872_, v___x_6873_, v___x_6866_, v_a_6809_);
lean_dec_ref(v_infos_6868_);
v___y_6853_ = v___x_6874_;
goto v___jp_6852_;
}
}
else
{
size_t v___x_6875_; size_t v___x_6876_; lean_object* v___x_6877_; 
v___x_6875_ = ((size_t)0ULL);
v___x_6876_ = lean_usize_of_nat(v___x_6869_);
v___x_6877_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2(v_infos_6868_, v___x_6875_, v___x_6876_, v___x_6866_, v_a_6809_);
lean_dec_ref(v_infos_6868_);
v___y_6853_ = v___x_6877_;
goto v___jp_6852_;
}
}
}
v___jp_6878_:
{
if (lean_obj_tag(v___y_6879_) == 0)
{
lean_object* v_a_6880_; lean_object* v_infos_6881_; 
v_a_6880_ = lean_ctor_get(v___y_6879_, 0);
lean_inc(v_a_6880_);
lean_dec_ref_known(v___y_6879_, 1);
v_infos_6881_ = lean_ctor_get(v_a_6880_, 0);
lean_inc_ref(v_infos_6881_);
lean_dec(v_a_6880_);
v_infos_6868_ = v_infos_6881_;
goto v___jp_6867_;
}
else
{
lean_object* v_a_6882_; lean_object* v___x_6884_; uint8_t v_isShared_6885_; uint8_t v_isSharedCheck_6889_; 
lean_dec_ref(v_scope_6807_);
lean_dec_ref(v_service_6806_);
lean_dec_ref(v_cache_6805_);
v_a_6882_ = lean_ctor_get(v___y_6879_, 0);
v_isSharedCheck_6889_ = !lean_is_exclusive(v___y_6879_);
if (v_isSharedCheck_6889_ == 0)
{
v___x_6884_ = v___y_6879_;
v_isShared_6885_ = v_isSharedCheck_6889_;
goto v_resetjp_6883_;
}
else
{
lean_inc(v_a_6882_);
lean_dec(v___y_6879_);
v___x_6884_ = lean_box(0);
v_isShared_6885_ = v_isSharedCheck_6889_;
goto v_resetjp_6883_;
}
v_resetjp_6883_:
{
lean_object* v___x_6887_; 
if (v_isShared_6885_ == 0)
{
v___x_6887_ = v___x_6884_;
goto v_reusejp_6886_;
}
else
{
lean_object* v_reuseFailAlloc_6888_; 
v_reuseFailAlloc_6888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6888_, 0, v_a_6882_);
v___x_6887_ = v_reuseFailAlloc_6888_;
goto v_reusejp_6886_;
}
v_reusejp_6886_:
{
return v___x_6887_;
}
}
}
}
}
else
{
lean_object* v___x_6899_; lean_object* v___x_6900_; lean_object* v___x_6901_; lean_object* v___x_6902_; 
lean_dec_ref(v_scope_6807_);
lean_dec_ref(v_service_6806_);
lean_dec_ref(v_cache_6805_);
v___x_6899_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__1));
lean_inc_ref(v_a_6809_);
v___x_6900_ = lean_apply_2(v_a_6809_, v___x_6899_, lean_box(0));
v___x_6901_ = lean_box(0);
v___x_6902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6902_, 0, v___x_6901_);
return v___x_6902_;
}
v___jp_6811_:
{
lean_object* v___x_6813_; lean_object* v___x_6814_; lean_object* v___x_6815_; 
v___x_6813_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_6814_ = l_System_FilePath_join(v_cache_6805_, v___x_6813_);
v___x_6815_ = l_IO_FS_createDirAll(v___x_6814_);
if (lean_obj_tag(v___x_6815_) == 0)
{
uint8_t v___x_6816_; lean_object* v___x_6817_; lean_object* v___x_6818_; lean_object* v___x_6819_; 
lean_dec_ref_known(v___x_6815_, 1);
v___x_6816_ = 0;
v___x_6817_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_6818_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_6818_, 0, v_scope_6807_);
lean_ctor_set(v___x_6818_, 1, v_a_6812_);
lean_ctor_set(v___x_6818_, 2, v___x_6817_);
lean_ctor_set_uint8(v___x_6818_, sizeof(void*)*3, v___x_6816_);
v___x_6819_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(v_a_6809_, v___x_6818_);
return v___x_6819_;
}
else
{
lean_object* v_a_6820_; lean_object* v___x_6822_; uint8_t v_isShared_6823_; uint8_t v_isSharedCheck_6832_; 
lean_dec_ref(v_a_6812_);
lean_dec_ref(v_scope_6807_);
v_a_6820_ = lean_ctor_get(v___x_6815_, 0);
v_isSharedCheck_6832_ = !lean_is_exclusive(v___x_6815_);
if (v_isSharedCheck_6832_ == 0)
{
v___x_6822_ = v___x_6815_;
v_isShared_6823_ = v_isSharedCheck_6832_;
goto v_resetjp_6821_;
}
else
{
lean_inc(v_a_6820_);
lean_dec(v___x_6815_);
v___x_6822_ = lean_box(0);
v_isShared_6823_ = v_isSharedCheck_6832_;
goto v_resetjp_6821_;
}
v_resetjp_6821_:
{
lean_object* v___x_6824_; uint8_t v___x_6825_; lean_object* v___x_6826_; lean_object* v___x_6827_; lean_object* v___x_6828_; lean_object* v___x_6830_; 
v___x_6824_ = lean_io_error_to_string(v_a_6820_);
v___x_6825_ = 3;
v___x_6826_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6826_, 0, v___x_6824_);
lean_ctor_set_uint8(v___x_6826_, sizeof(void*)*1, v___x_6825_);
lean_inc_ref(v_a_6809_);
v___x_6827_ = lean_apply_2(v_a_6809_, v___x_6826_, lean_box(0));
v___x_6828_ = lean_box(0);
if (v_isShared_6823_ == 0)
{
lean_ctor_set(v___x_6822_, 0, v___x_6828_);
v___x_6830_ = v___x_6822_;
goto v_reusejp_6829_;
}
else
{
lean_object* v_reuseFailAlloc_6831_; 
v_reuseFailAlloc_6831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6831_, 0, v___x_6828_);
v___x_6830_ = v_reuseFailAlloc_6831_;
goto v_reusejp_6829_;
}
v_reusejp_6829_:
{
return v___x_6830_;
}
}
}
}
v___jp_6833_:
{
lean_object* v___x_6835_; lean_object* v___x_6836_; uint8_t v___x_6837_; 
v___x_6835_ = lean_array_get_size(v_a_6834_);
v___x_6836_ = lean_unsigned_to_nat(0u);
v___x_6837_ = lean_nat_dec_eq(v___x_6835_, v___x_6836_);
if (v___x_6837_ == 0)
{
uint8_t v_isReservoir_6838_; 
v_isReservoir_6838_ = lean_ctor_get_uint8(v_service_6806_, sizeof(void*)*5);
if (v_isReservoir_6838_ == 0)
{
lean_dec_ref(v_service_6806_);
v_a_6812_ = v_a_6834_;
goto v___jp_6811_;
}
else
{
lean_object* v___x_6839_; lean_object* v___x_6840_; 
lean_inc_ref(v_scope_6807_);
v___x_6839_ = l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl(v_service_6806_, v_scope_6807_);
v___x_6840_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1(v_a_6809_, v___x_6839_, v_a_6834_);
if (lean_obj_tag(v___x_6840_) == 0)
{
lean_object* v_a_6841_; 
v_a_6841_ = lean_ctor_get(v___x_6840_, 0);
lean_inc(v_a_6841_);
lean_dec_ref_known(v___x_6840_, 1);
v_a_6812_ = v_a_6841_;
goto v___jp_6811_;
}
else
{
lean_object* v_a_6842_; lean_object* v___x_6844_; uint8_t v_isShared_6845_; uint8_t v_isSharedCheck_6849_; 
lean_dec_ref(v_scope_6807_);
lean_dec_ref(v_cache_6805_);
v_a_6842_ = lean_ctor_get(v___x_6840_, 0);
v_isSharedCheck_6849_ = !lean_is_exclusive(v___x_6840_);
if (v_isSharedCheck_6849_ == 0)
{
v___x_6844_ = v___x_6840_;
v_isShared_6845_ = v_isSharedCheck_6849_;
goto v_resetjp_6843_;
}
else
{
lean_inc(v_a_6842_);
lean_dec(v___x_6840_);
v___x_6844_ = lean_box(0);
v_isShared_6845_ = v_isSharedCheck_6849_;
goto v_resetjp_6843_;
}
v_resetjp_6843_:
{
lean_object* v___x_6847_; 
if (v_isShared_6845_ == 0)
{
v___x_6847_ = v___x_6844_;
goto v_reusejp_6846_;
}
else
{
lean_object* v_reuseFailAlloc_6848_; 
v_reuseFailAlloc_6848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6848_, 0, v_a_6842_);
v___x_6847_ = v_reuseFailAlloc_6848_;
goto v_reusejp_6846_;
}
v_reusejp_6846_:
{
return v___x_6847_;
}
}
}
}
}
else
{
lean_object* v___x_6850_; lean_object* v___x_6851_; 
lean_dec_ref(v_a_6834_);
lean_dec_ref(v_scope_6807_);
lean_dec_ref(v_service_6806_);
lean_dec_ref(v_cache_6805_);
v___x_6850_ = lean_box(0);
v___x_6851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6851_, 0, v___x_6850_);
return v___x_6851_;
}
}
v___jp_6852_:
{
if (lean_obj_tag(v___y_6853_) == 0)
{
lean_object* v_a_6854_; 
v_a_6854_ = lean_ctor_get(v___y_6853_, 0);
lean_inc(v_a_6854_);
lean_dec_ref_known(v___y_6853_, 1);
v_a_6834_ = v_a_6854_;
goto v___jp_6833_;
}
else
{
lean_object* v_a_6855_; lean_object* v___x_6857_; uint8_t v_isShared_6858_; uint8_t v_isSharedCheck_6862_; 
lean_dec_ref(v_scope_6807_);
lean_dec_ref(v_service_6806_);
lean_dec_ref(v_cache_6805_);
v_a_6855_ = lean_ctor_get(v___y_6853_, 0);
v_isSharedCheck_6862_ = !lean_is_exclusive(v___y_6853_);
if (v_isSharedCheck_6862_ == 0)
{
v___x_6857_ = v___y_6853_;
v_isShared_6858_ = v_isSharedCheck_6862_;
goto v_resetjp_6856_;
}
else
{
lean_inc(v_a_6855_);
lean_dec(v___y_6853_);
v___x_6857_ = lean_box(0);
v_isShared_6858_ = v_isSharedCheck_6862_;
goto v_resetjp_6856_;
}
v_resetjp_6856_:
{
lean_object* v___x_6860_; 
if (v_isShared_6858_ == 0)
{
v___x_6860_ = v___x_6857_;
goto v_reusejp_6859_;
}
else
{
lean_object* v_reuseFailAlloc_6861_; 
v_reuseFailAlloc_6861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6861_, 0, v_a_6855_);
v___x_6860_ = v_reuseFailAlloc_6861_;
goto v_reusejp_6859_;
}
v_reusejp_6859_:
{
return v___x_6860_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___boxed(lean_object* v_descrs_6903_, lean_object* v_cache_6904_, lean_object* v_service_6905_, lean_object* v_scope_6906_, lean_object* v_force_6907_, lean_object* v_a_6908_, lean_object* v___y_6909_){
_start:
{
uint8_t v_force_boxed_6910_; lean_object* v_res_6911_; 
v_force_boxed_6910_ = lean_unbox(v_force_6907_);
v_res_6911_ = l_Lake_CacheService_downloadArtifacts(v_descrs_6903_, v_cache_6904_, v_service_6905_, v_scope_6906_, v_force_boxed_6910_, v_a_6908_);
lean_dec_ref(v_a_6908_);
lean_dec_ref(v_descrs_6903_);
return v_res_6911_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(lean_object* v_a_6912_, lean_object* v_descrs_6913_, lean_object* v_cache_6914_, lean_object* v_service_6915_, lean_object* v_scope_6916_, uint8_t v_force_6917_){
_start:
{
lean_object* v_a_6920_; lean_object* v_a_6942_; lean_object* v___x_6960_; lean_object* v___x_6961_; uint8_t v___x_6962_; 
v___x_6960_ = lean_array_get_size(v_descrs_6913_);
v___x_6961_ = lean_unsigned_to_nat(0u);
v___x_6962_ = lean_nat_dec_eq(v___x_6960_, v___x_6961_);
if (v___x_6962_ == 0)
{
lean_object* v___x_6963_; lean_object* v_infos_6965_; uint8_t v___x_6980_; 
v___x_6963_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__0));
v___x_6980_ = lean_nat_dec_lt(v___x_6961_, v___x_6960_);
if (v___x_6980_ == 0)
{
v_infos_6965_ = v___x_6963_;
goto v___jp_6964_;
}
else
{
lean_object* v___x_6981_; size_t v___x_6982_; size_t v___x_6983_; lean_object* v___x_6984_; 
v___x_6981_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1);
v___x_6982_ = ((size_t)0ULL);
v___x_6983_ = lean_usize_of_nat(v___x_6960_);
lean_inc_ref(v_cache_6914_);
lean_inc_ref(v_scope_6916_);
lean_inc_ref(v_service_6915_);
v___x_6984_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__3(v_service_6915_, v_scope_6916_, v_cache_6914_, v_force_6917_, v_descrs_6913_, v___x_6982_, v___x_6983_, v___x_6981_, v_a_6912_);
if (lean_obj_tag(v___x_6984_) == 0)
{
lean_object* v_a_6985_; lean_object* v_infos_6986_; 
v_a_6985_ = lean_ctor_get(v___x_6984_, 0);
lean_inc(v_a_6985_);
lean_dec_ref_known(v___x_6984_, 1);
v_infos_6986_ = lean_ctor_get(v_a_6985_, 0);
lean_inc_ref(v_infos_6986_);
lean_dec(v_a_6985_);
v_infos_6965_ = v_infos_6986_;
goto v___jp_6964_;
}
else
{
lean_object* v_a_6987_; lean_object* v___x_6989_; uint8_t v_isShared_6990_; uint8_t v_isSharedCheck_6994_; 
lean_dec_ref(v_scope_6916_);
lean_dec_ref(v_service_6915_);
lean_dec_ref(v_cache_6914_);
v_a_6987_ = lean_ctor_get(v___x_6984_, 0);
v_isSharedCheck_6994_ = !lean_is_exclusive(v___x_6984_);
if (v_isSharedCheck_6994_ == 0)
{
v___x_6989_ = v___x_6984_;
v_isShared_6990_ = v_isSharedCheck_6994_;
goto v_resetjp_6988_;
}
else
{
lean_inc(v_a_6987_);
lean_dec(v___x_6984_);
v___x_6989_ = lean_box(0);
v_isShared_6990_ = v_isSharedCheck_6994_;
goto v_resetjp_6988_;
}
v_resetjp_6988_:
{
lean_object* v___x_6992_; 
if (v_isShared_6990_ == 0)
{
v___x_6992_ = v___x_6989_;
goto v_reusejp_6991_;
}
else
{
lean_object* v_reuseFailAlloc_6993_; 
v_reuseFailAlloc_6993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6993_, 0, v_a_6987_);
v___x_6992_ = v_reuseFailAlloc_6993_;
goto v_reusejp_6991_;
}
v_reusejp_6991_:
{
return v___x_6992_;
}
}
}
}
v___jp_6964_:
{
lean_object* v___x_6966_; uint8_t v___x_6967_; 
v___x_6966_ = lean_array_get_size(v_infos_6965_);
v___x_6967_ = lean_nat_dec_lt(v___x_6961_, v___x_6966_);
if (v___x_6967_ == 0)
{
lean_dec_ref(v_infos_6965_);
v_a_6942_ = v___x_6963_;
goto v___jp_6941_;
}
else
{
size_t v___x_6968_; size_t v___x_6969_; lean_object* v___x_6970_; 
v___x_6968_ = ((size_t)0ULL);
v___x_6969_ = lean_usize_of_nat(v___x_6966_);
v___x_6970_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__2(v_infos_6965_, v___x_6968_, v___x_6969_, v___x_6963_, v_a_6912_);
lean_dec_ref(v_infos_6965_);
if (lean_obj_tag(v___x_6970_) == 0)
{
lean_object* v_a_6971_; 
v_a_6971_ = lean_ctor_get(v___x_6970_, 0);
lean_inc(v_a_6971_);
lean_dec_ref_known(v___x_6970_, 1);
v_a_6942_ = v_a_6971_;
goto v___jp_6941_;
}
else
{
lean_object* v_a_6972_; lean_object* v___x_6974_; uint8_t v_isShared_6975_; uint8_t v_isSharedCheck_6979_; 
lean_dec_ref(v_scope_6916_);
lean_dec_ref(v_service_6915_);
lean_dec_ref(v_cache_6914_);
v_a_6972_ = lean_ctor_get(v___x_6970_, 0);
v_isSharedCheck_6979_ = !lean_is_exclusive(v___x_6970_);
if (v_isSharedCheck_6979_ == 0)
{
v___x_6974_ = v___x_6970_;
v_isShared_6975_ = v_isSharedCheck_6979_;
goto v_resetjp_6973_;
}
else
{
lean_inc(v_a_6972_);
lean_dec(v___x_6970_);
v___x_6974_ = lean_box(0);
v_isShared_6975_ = v_isSharedCheck_6979_;
goto v_resetjp_6973_;
}
v_resetjp_6973_:
{
lean_object* v___x_6977_; 
if (v_isShared_6975_ == 0)
{
v___x_6977_ = v___x_6974_;
goto v_reusejp_6976_;
}
else
{
lean_object* v_reuseFailAlloc_6978_; 
v_reuseFailAlloc_6978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6978_, 0, v_a_6972_);
v___x_6977_ = v_reuseFailAlloc_6978_;
goto v_reusejp_6976_;
}
v_reusejp_6976_:
{
return v___x_6977_;
}
}
}
}
}
}
else
{
lean_object* v___x_6995_; lean_object* v___x_6996_; lean_object* v___x_6997_; lean_object* v___x_6998_; 
lean_dec_ref(v_scope_6916_);
lean_dec_ref(v_service_6915_);
lean_dec_ref(v_cache_6914_);
v___x_6995_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__1));
lean_inc_ref(v_a_6912_);
v___x_6996_ = lean_apply_2(v_a_6912_, v___x_6995_, lean_box(0));
v___x_6997_ = lean_box(0);
v___x_6998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6998_, 0, v___x_6997_);
return v___x_6998_;
}
v___jp_6919_:
{
lean_object* v___x_6921_; lean_object* v___x_6922_; lean_object* v___x_6923_; 
v___x_6921_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_6922_ = l_System_FilePath_join(v_cache_6914_, v___x_6921_);
v___x_6923_ = l_IO_FS_createDirAll(v___x_6922_);
if (lean_obj_tag(v___x_6923_) == 0)
{
uint8_t v___x_6924_; lean_object* v___x_6925_; lean_object* v___x_6926_; lean_object* v___x_6927_; 
lean_dec_ref_known(v___x_6923_, 1);
v___x_6924_ = 0;
v___x_6925_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_6926_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_6926_, 0, v_scope_6916_);
lean_ctor_set(v___x_6926_, 1, v_a_6920_);
lean_ctor_set(v___x_6926_, 2, v___x_6925_);
lean_ctor_set_uint8(v___x_6926_, sizeof(void*)*3, v___x_6924_);
v___x_6927_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(v_a_6912_, v___x_6926_);
return v___x_6927_;
}
else
{
lean_object* v_a_6928_; lean_object* v___x_6930_; uint8_t v_isShared_6931_; uint8_t v_isSharedCheck_6940_; 
lean_dec_ref(v_a_6920_);
lean_dec_ref(v_scope_6916_);
v_a_6928_ = lean_ctor_get(v___x_6923_, 0);
v_isSharedCheck_6940_ = !lean_is_exclusive(v___x_6923_);
if (v_isSharedCheck_6940_ == 0)
{
v___x_6930_ = v___x_6923_;
v_isShared_6931_ = v_isSharedCheck_6940_;
goto v_resetjp_6929_;
}
else
{
lean_inc(v_a_6928_);
lean_dec(v___x_6923_);
v___x_6930_ = lean_box(0);
v_isShared_6931_ = v_isSharedCheck_6940_;
goto v_resetjp_6929_;
}
v_resetjp_6929_:
{
lean_object* v___x_6932_; uint8_t v___x_6933_; lean_object* v___x_6934_; lean_object* v___x_6935_; lean_object* v___x_6936_; lean_object* v___x_6938_; 
v___x_6932_ = lean_io_error_to_string(v_a_6928_);
v___x_6933_ = 3;
v___x_6934_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6934_, 0, v___x_6932_);
lean_ctor_set_uint8(v___x_6934_, sizeof(void*)*1, v___x_6933_);
lean_inc_ref(v_a_6912_);
v___x_6935_ = lean_apply_2(v_a_6912_, v___x_6934_, lean_box(0));
v___x_6936_ = lean_box(0);
if (v_isShared_6931_ == 0)
{
lean_ctor_set(v___x_6930_, 0, v___x_6936_);
v___x_6938_ = v___x_6930_;
goto v_reusejp_6937_;
}
else
{
lean_object* v_reuseFailAlloc_6939_; 
v_reuseFailAlloc_6939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6939_, 0, v___x_6936_);
v___x_6938_ = v_reuseFailAlloc_6939_;
goto v_reusejp_6937_;
}
v_reusejp_6937_:
{
return v___x_6938_;
}
}
}
}
v___jp_6941_:
{
lean_object* v___x_6943_; lean_object* v___x_6944_; uint8_t v___x_6945_; 
v___x_6943_ = lean_array_get_size(v_a_6942_);
v___x_6944_ = lean_unsigned_to_nat(0u);
v___x_6945_ = lean_nat_dec_eq(v___x_6943_, v___x_6944_);
if (v___x_6945_ == 0)
{
uint8_t v_isReservoir_6946_; 
v_isReservoir_6946_ = lean_ctor_get_uint8(v_service_6915_, sizeof(void*)*5);
if (v_isReservoir_6946_ == 0)
{
lean_dec_ref(v_service_6915_);
v_a_6920_ = v_a_6942_;
goto v___jp_6919_;
}
else
{
lean_object* v___x_6947_; lean_object* v___x_6948_; 
lean_inc_ref(v_scope_6916_);
v___x_6947_ = l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl(v_service_6915_, v_scope_6916_);
v___x_6948_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___at___00Lake_CacheService_downloadArtifacts_spec__1(v_a_6912_, v___x_6947_, v_a_6942_);
if (lean_obj_tag(v___x_6948_) == 0)
{
lean_object* v_a_6949_; 
v_a_6949_ = lean_ctor_get(v___x_6948_, 0);
lean_inc(v_a_6949_);
lean_dec_ref_known(v___x_6948_, 1);
v_a_6920_ = v_a_6949_;
goto v___jp_6919_;
}
else
{
lean_object* v_a_6950_; lean_object* v___x_6952_; uint8_t v_isShared_6953_; uint8_t v_isSharedCheck_6957_; 
lean_dec_ref(v_scope_6916_);
lean_dec_ref(v_cache_6914_);
v_a_6950_ = lean_ctor_get(v___x_6948_, 0);
v_isSharedCheck_6957_ = !lean_is_exclusive(v___x_6948_);
if (v_isSharedCheck_6957_ == 0)
{
v___x_6952_ = v___x_6948_;
v_isShared_6953_ = v_isSharedCheck_6957_;
goto v_resetjp_6951_;
}
else
{
lean_inc(v_a_6950_);
lean_dec(v___x_6948_);
v___x_6952_ = lean_box(0);
v_isShared_6953_ = v_isSharedCheck_6957_;
goto v_resetjp_6951_;
}
v_resetjp_6951_:
{
lean_object* v___x_6955_; 
if (v_isShared_6953_ == 0)
{
v___x_6955_ = v___x_6952_;
goto v_reusejp_6954_;
}
else
{
lean_object* v_reuseFailAlloc_6956_; 
v_reuseFailAlloc_6956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6956_, 0, v_a_6950_);
v___x_6955_ = v_reuseFailAlloc_6956_;
goto v_reusejp_6954_;
}
v_reusejp_6954_:
{
return v___x_6955_;
}
}
}
}
}
else
{
lean_object* v___x_6958_; lean_object* v___x_6959_; 
lean_dec_ref(v_a_6942_);
lean_dec_ref(v_scope_6916_);
lean_dec_ref(v_service_6915_);
lean_dec_ref(v_cache_6914_);
v___x_6958_ = lean_box(0);
v___x_6959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6959_, 0, v___x_6958_);
return v___x_6959_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0___boxed(lean_object* v_a_6999_, lean_object* v_descrs_7000_, lean_object* v_cache_7001_, lean_object* v_service_7002_, lean_object* v_scope_7003_, lean_object* v_force_7004_, lean_object* v___y_7005_){
_start:
{
uint8_t v_force_boxed_7006_; lean_object* v_res_7007_; 
v_force_boxed_7006_ = lean_unbox(v_force_7004_);
v_res_7007_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_6999_, v_descrs_7000_, v_cache_7001_, v_service_7002_, v_scope_7003_, v_force_boxed_7006_);
lean_dec_ref(v_descrs_7000_);
lean_dec_ref(v_a_6999_);
return v_res_7007_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts(lean_object* v_map_7008_, lean_object* v_cache_7009_, lean_object* v_service_7010_, lean_object* v_localScope_7011_, lean_object* v_remoteScope_7012_, uint8_t v_force_7013_, lean_object* v_a_7014_){
_start:
{
lean_object* v_name_x3f_7016_; lean_object* v___x_7017_; uint8_t v___x_7018_; lean_object* v___x_7019_; 
v_name_x3f_7016_ = lean_ctor_get(v_service_7010_, 0);
lean_inc_ref(v_remoteScope_7012_);
v___x_7017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7017_, 0, v_remoteScope_7012_);
v___x_7018_ = 1;
lean_inc(v_name_x3f_7016_);
lean_inc_ref(v_cache_7009_);
v___x_7019_ = l_Lake_Cache_writeMap(v_cache_7009_, v_localScope_7011_, v_map_7008_, v_name_x3f_7016_, v___x_7017_, v___x_7018_);
if (lean_obj_tag(v___x_7019_) == 0)
{
lean_object* v___x_7021_; uint8_t v_isShared_7022_; uint8_t v_isSharedCheck_7055_; 
v_isSharedCheck_7055_ = !lean_is_exclusive(v___x_7019_);
if (v_isSharedCheck_7055_ == 0)
{
lean_object* v_unused_7056_; 
v_unused_7056_ = lean_ctor_get(v___x_7019_, 0);
lean_dec(v_unused_7056_);
v___x_7021_ = v___x_7019_;
v_isShared_7022_ = v_isSharedCheck_7055_;
goto v_resetjp_7020_;
}
else
{
lean_dec(v___x_7019_);
v___x_7021_ = lean_box(0);
v_isShared_7022_ = v_isSharedCheck_7055_;
goto v_resetjp_7020_;
}
v_resetjp_7020_:
{
lean_object* v___x_7023_; lean_object* v___x_7024_; lean_object* v___x_7025_; 
v___x_7023_ = lean_unsigned_to_nat(0u);
v___x_7024_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_7025_ = l_Lake_CacheMap_collectOutputDescrs(v_map_7008_, v___x_7024_);
if (lean_obj_tag(v___x_7025_) == 0)
{
lean_object* v_a_7026_; lean_object* v_a_7027_; lean_object* v___x_7028_; uint8_t v___x_7029_; 
lean_del_object(v___x_7021_);
v_a_7026_ = lean_ctor_get(v___x_7025_, 0);
lean_inc(v_a_7026_);
v_a_7027_ = lean_ctor_get(v___x_7025_, 1);
lean_inc(v_a_7027_);
lean_dec_ref_known(v___x_7025_, 2);
v___x_7028_ = lean_array_get_size(v_a_7027_);
v___x_7029_ = lean_nat_dec_lt(v___x_7023_, v___x_7028_);
if (v___x_7029_ == 0)
{
lean_object* v___x_7030_; 
lean_dec(v_a_7027_);
v___x_7030_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_7014_, v_a_7026_, v_cache_7009_, v_service_7010_, v_remoteScope_7012_, v_force_7013_);
lean_dec(v_a_7026_);
return v___x_7030_;
}
else
{
lean_object* v___x_7031_; size_t v___x_7032_; size_t v___x_7033_; lean_object* v___x_7034_; 
v___x_7031_ = lean_box(0);
v___x_7032_ = ((size_t)0ULL);
v___x_7033_ = lean_usize_of_nat(v___x_7028_);
v___x_7034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_7027_, v___x_7032_, v___x_7033_, v___x_7031_, v_a_7014_);
lean_dec(v_a_7027_);
if (lean_obj_tag(v___x_7034_) == 0)
{
lean_object* v___x_7035_; 
lean_dec_ref_known(v___x_7034_, 1);
v___x_7035_ = l_Lake_CacheService_downloadArtifacts___at___00Lake_CacheService_downloadOutputArtifacts_spec__0(v_a_7014_, v_a_7026_, v_cache_7009_, v_service_7010_, v_remoteScope_7012_, v_force_7013_);
lean_dec(v_a_7026_);
return v___x_7035_;
}
else
{
lean_dec(v_a_7026_);
lean_dec_ref(v_remoteScope_7012_);
lean_dec_ref(v_service_7010_);
lean_dec_ref(v_cache_7009_);
return v___x_7034_;
}
}
}
else
{
lean_object* v_a_7036_; lean_object* v___x_7037_; uint8_t v___x_7038_; 
lean_dec_ref(v_remoteScope_7012_);
lean_dec_ref(v_service_7010_);
lean_dec_ref(v_cache_7009_);
v_a_7036_ = lean_ctor_get(v___x_7025_, 1);
lean_inc(v_a_7036_);
lean_dec_ref_known(v___x_7025_, 2);
v___x_7037_ = lean_array_get_size(v_a_7036_);
v___x_7038_ = lean_nat_dec_lt(v___x_7023_, v___x_7037_);
if (v___x_7038_ == 0)
{
lean_object* v___x_7039_; lean_object* v___x_7041_; 
lean_dec(v_a_7036_);
v___x_7039_ = lean_box(0);
if (v_isShared_7022_ == 0)
{
lean_ctor_set_tag(v___x_7021_, 1);
lean_ctor_set(v___x_7021_, 0, v___x_7039_);
v___x_7041_ = v___x_7021_;
goto v_reusejp_7040_;
}
else
{
lean_object* v_reuseFailAlloc_7042_; 
v_reuseFailAlloc_7042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7042_, 0, v___x_7039_);
v___x_7041_ = v_reuseFailAlloc_7042_;
goto v_reusejp_7040_;
}
v_reusejp_7040_:
{
return v___x_7041_;
}
}
else
{
lean_object* v___x_7043_; size_t v___x_7044_; size_t v___x_7045_; lean_object* v___x_7046_; 
lean_del_object(v___x_7021_);
v___x_7043_ = lean_box(0);
v___x_7044_ = ((size_t)0ULL);
v___x_7045_ = lean_usize_of_nat(v___x_7037_);
v___x_7046_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_7036_, v___x_7044_, v___x_7045_, v___x_7043_, v_a_7014_);
lean_dec(v_a_7036_);
if (lean_obj_tag(v___x_7046_) == 0)
{
lean_object* v___x_7048_; uint8_t v_isShared_7049_; uint8_t v_isSharedCheck_7053_; 
v_isSharedCheck_7053_ = !lean_is_exclusive(v___x_7046_);
if (v_isSharedCheck_7053_ == 0)
{
lean_object* v_unused_7054_; 
v_unused_7054_ = lean_ctor_get(v___x_7046_, 0);
lean_dec(v_unused_7054_);
v___x_7048_ = v___x_7046_;
v_isShared_7049_ = v_isSharedCheck_7053_;
goto v_resetjp_7047_;
}
else
{
lean_dec(v___x_7046_);
v___x_7048_ = lean_box(0);
v_isShared_7049_ = v_isSharedCheck_7053_;
goto v_resetjp_7047_;
}
v_resetjp_7047_:
{
lean_object* v___x_7051_; 
if (v_isShared_7049_ == 0)
{
lean_ctor_set_tag(v___x_7048_, 1);
lean_ctor_set(v___x_7048_, 0, v___x_7043_);
v___x_7051_ = v___x_7048_;
goto v_reusejp_7050_;
}
else
{
lean_object* v_reuseFailAlloc_7052_; 
v_reuseFailAlloc_7052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7052_, 0, v___x_7043_);
v___x_7051_ = v_reuseFailAlloc_7052_;
goto v_reusejp_7050_;
}
v_reusejp_7050_:
{
return v___x_7051_;
}
}
}
else
{
return v___x_7046_;
}
}
}
}
}
else
{
lean_object* v_a_7057_; lean_object* v___x_7059_; uint8_t v_isShared_7060_; uint8_t v_isSharedCheck_7069_; 
lean_dec_ref(v_remoteScope_7012_);
lean_dec_ref(v_service_7010_);
lean_dec_ref(v_cache_7009_);
lean_dec_ref(v_map_7008_);
v_a_7057_ = lean_ctor_get(v___x_7019_, 0);
v_isSharedCheck_7069_ = !lean_is_exclusive(v___x_7019_);
if (v_isSharedCheck_7069_ == 0)
{
v___x_7059_ = v___x_7019_;
v_isShared_7060_ = v_isSharedCheck_7069_;
goto v_resetjp_7058_;
}
else
{
lean_inc(v_a_7057_);
lean_dec(v___x_7019_);
v___x_7059_ = lean_box(0);
v_isShared_7060_ = v_isSharedCheck_7069_;
goto v_resetjp_7058_;
}
v_resetjp_7058_:
{
lean_object* v___x_7061_; uint8_t v___x_7062_; lean_object* v___x_7063_; lean_object* v___x_7064_; lean_object* v___x_7065_; lean_object* v___x_7067_; 
v___x_7061_ = lean_io_error_to_string(v_a_7057_);
v___x_7062_ = 3;
v___x_7063_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7063_, 0, v___x_7061_);
lean_ctor_set_uint8(v___x_7063_, sizeof(void*)*1, v___x_7062_);
lean_inc_ref(v_a_7014_);
v___x_7064_ = lean_apply_2(v_a_7014_, v___x_7063_, lean_box(0));
v___x_7065_ = lean_box(0);
if (v_isShared_7060_ == 0)
{
lean_ctor_set(v___x_7059_, 0, v___x_7065_);
v___x_7067_ = v___x_7059_;
goto v_reusejp_7066_;
}
else
{
lean_object* v_reuseFailAlloc_7068_; 
v_reuseFailAlloc_7068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7068_, 0, v___x_7065_);
v___x_7067_ = v_reuseFailAlloc_7068_;
goto v_reusejp_7066_;
}
v_reusejp_7066_:
{
return v___x_7067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts___boxed(lean_object* v_map_7070_, lean_object* v_cache_7071_, lean_object* v_service_7072_, lean_object* v_localScope_7073_, lean_object* v_remoteScope_7074_, lean_object* v_force_7075_, lean_object* v_a_7076_, lean_object* v___y_7077_){
_start:
{
uint8_t v_force_boxed_7078_; lean_object* v_res_7079_; 
v_force_boxed_7078_ = lean_unbox(v_force_7075_);
v_res_7079_ = l_Lake_CacheService_downloadOutputArtifacts(v_map_7070_, v_cache_7071_, v_service_7072_, v_localScope_7073_, v_remoteScope_7074_, v_force_boxed_7078_, v_a_7076_);
lean_dec_ref(v_a_7076_);
return v_res_7079_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(lean_object* v_m_7080_, uint64_t v_a_7081_){
_start:
{
lean_object* v_buckets_7082_; lean_object* v___x_7083_; uint64_t v___x_7084_; uint64_t v___x_7085_; uint64_t v_fold_7086_; uint64_t v___x_7087_; uint64_t v___x_7088_; uint64_t v___x_7089_; size_t v___x_7090_; size_t v___x_7091_; size_t v___x_7092_; size_t v___x_7093_; size_t v___x_7094_; lean_object* v___x_7095_; uint8_t v___x_7096_; 
v_buckets_7082_ = lean_ctor_get(v_m_7080_, 1);
v___x_7083_ = lean_array_get_size(v_buckets_7082_);
v___x_7084_ = 32ULL;
v___x_7085_ = lean_uint64_shift_right(v_a_7081_, v___x_7084_);
v_fold_7086_ = lean_uint64_xor(v_a_7081_, v___x_7085_);
v___x_7087_ = 16ULL;
v___x_7088_ = lean_uint64_shift_right(v_fold_7086_, v___x_7087_);
v___x_7089_ = lean_uint64_xor(v_fold_7086_, v___x_7088_);
v___x_7090_ = lean_uint64_to_usize(v___x_7089_);
v___x_7091_ = lean_usize_of_nat(v___x_7083_);
v___x_7092_ = ((size_t)1ULL);
v___x_7093_ = lean_usize_sub(v___x_7091_, v___x_7092_);
v___x_7094_ = lean_usize_land(v___x_7090_, v___x_7093_);
v___x_7095_ = lean_array_uget_borrowed(v_buckets_7082_, v___x_7094_);
v___x_7096_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(v_a_7081_, v___x_7095_);
return v___x_7096_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg___boxed(lean_object* v_m_7097_, lean_object* v_a_7098_){
_start:
{
uint64_t v_a_boxed_7099_; uint8_t v_res_7100_; lean_object* v_r_7101_; 
v_a_boxed_7099_ = lean_unbox_uint64(v_a_7098_);
lean_dec_ref(v_a_7098_);
v_res_7100_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_m_7097_, v_a_boxed_7099_);
lean_dec_ref(v_m_7097_);
v_r_7101_ = lean_box(v_res_7100_);
return v_r_7101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(lean_object* v_descrs_7102_, lean_object* v_service_7103_, lean_object* v_scope_7104_, lean_object* v_paths_7105_, lean_object* v_n_7106_, lean_object* v_i_7107_, lean_object* v_a_7108_){
_start:
{
lean_object* v_zero_7110_; uint8_t v_isZero_7111_; 
v_zero_7110_ = lean_unsigned_to_nat(0u);
v_isZero_7111_ = lean_nat_dec_eq(v_i_7107_, v_zero_7110_);
if (v_isZero_7111_ == 1)
{
lean_object* v___x_7112_; 
lean_dec(v_i_7107_);
lean_dec_ref(v_scope_7104_);
lean_dec_ref(v_service_7103_);
v___x_7112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7112_, 0, v_a_7108_);
return v___x_7112_;
}
else
{
lean_object* v_one_7113_; lean_object* v_n_7114_; lean_object* v___x_7115_; lean_object* v___x_7116_; lean_object* v___x_7117_; uint64_t v_hash_7118_; lean_object* v_infos_7119_; lean_object* v_indices_7120_; lean_object* v_url_7121_; uint8_t v___x_7122_; 
v_one_7113_ = lean_unsigned_to_nat(1u);
v_n_7114_ = lean_nat_sub(v_i_7107_, v_one_7113_);
lean_dec(v_i_7107_);
v___x_7115_ = lean_nat_sub(v_n_7106_, v_n_7114_);
v___x_7116_ = lean_nat_sub(v___x_7115_, v_one_7113_);
lean_dec(v___x_7115_);
v___x_7117_ = lean_array_fget_borrowed(v_descrs_7102_, v___x_7116_);
v_hash_7118_ = lean_ctor_get_uint64(v___x_7117_, sizeof(void*)*1);
v_infos_7119_ = lean_ctor_get(v_a_7108_, 0);
v_indices_7120_ = lean_ctor_get(v_a_7108_, 1);
lean_inc_ref(v_scope_7104_);
lean_inc_ref(v_service_7103_);
v_url_7121_ = l_Lake_CacheService_artifactUrl(v_hash_7118_, v_service_7103_, v_scope_7104_);
v___x_7122_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_indices_7120_, v_hash_7118_);
if (v___x_7122_ == 0)
{
lean_object* v___x_7124_; uint8_t v_isShared_7125_; uint8_t v_isSharedCheck_7136_; 
lean_inc_ref(v_indices_7120_);
lean_inc_ref(v_infos_7119_);
v_isSharedCheck_7136_ = !lean_is_exclusive(v_a_7108_);
if (v_isSharedCheck_7136_ == 0)
{
lean_object* v_unused_7137_; lean_object* v_unused_7138_; 
v_unused_7137_ = lean_ctor_get(v_a_7108_, 1);
lean_dec(v_unused_7137_);
v_unused_7138_ = lean_ctor_get(v_a_7108_, 0);
lean_dec(v_unused_7138_);
v___x_7124_ = v_a_7108_;
v_isShared_7125_ = v_isSharedCheck_7136_;
goto v_resetjp_7123_;
}
else
{
lean_dec(v_a_7108_);
v___x_7124_ = lean_box(0);
v_isShared_7125_ = v_isSharedCheck_7136_;
goto v_resetjp_7123_;
}
v_resetjp_7123_:
{
lean_object* v___x_7126_; lean_object* v___x_7127_; lean_object* v___x_7128_; lean_object* v___x_7129_; lean_object* v___x_7130_; lean_object* v___x_7131_; lean_object* v___x_7133_; 
v___x_7126_ = lean_array_fget_borrowed(v_paths_7105_, v___x_7116_);
lean_dec(v___x_7116_);
v___x_7127_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc(v___x_7126_);
v___x_7128_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_7128_, 0, v_url_7121_);
lean_ctor_set(v___x_7128_, 1, v___x_7126_);
lean_ctor_set(v___x_7128_, 2, v___x_7127_);
lean_ctor_set_uint64(v___x_7128_, sizeof(void*)*3, v_hash_7118_);
lean_inc_ref(v_infos_7119_);
v___x_7129_ = lean_array_push(v_infos_7119_, v___x_7128_);
v___x_7130_ = lean_array_get_size(v_infos_7119_);
lean_dec_ref(v_infos_7119_);
v___x_7131_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_7120_, v_hash_7118_, v___x_7130_);
if (v_isShared_7125_ == 0)
{
lean_ctor_set(v___x_7124_, 1, v___x_7131_);
lean_ctor_set(v___x_7124_, 0, v___x_7129_);
v___x_7133_ = v___x_7124_;
goto v_reusejp_7132_;
}
else
{
lean_object* v_reuseFailAlloc_7135_; 
v_reuseFailAlloc_7135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7135_, 0, v___x_7129_);
lean_ctor_set(v_reuseFailAlloc_7135_, 1, v___x_7131_);
v___x_7133_ = v_reuseFailAlloc_7135_;
goto v_reusejp_7132_;
}
v_reusejp_7132_:
{
v_i_7107_ = v_n_7114_;
v_a_7108_ = v___x_7133_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_url_7121_);
lean_dec(v___x_7116_);
v_i_7107_ = v_n_7114_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg___boxed(lean_object* v_descrs_7140_, lean_object* v_service_7141_, lean_object* v_scope_7142_, lean_object* v_paths_7143_, lean_object* v_n_7144_, lean_object* v_i_7145_, lean_object* v_a_7146_, lean_object* v___y_7147_){
_start:
{
lean_object* v_res_7148_; 
v_res_7148_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_7140_, v_service_7141_, v_scope_7142_, v_paths_7143_, v_n_7144_, v_i_7145_, v_a_7146_);
lean_dec(v_n_7144_);
lean_dec_ref(v_paths_7143_);
lean_dec_ref(v_descrs_7140_);
return v_res_7148_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts(lean_object* v_n_7153_, lean_object* v_descrs_7154_, lean_object* v_paths_7155_, lean_object* v_service_7156_, lean_object* v_scope_7157_, lean_object* v_a_7158_){
_start:
{
lean_object* v___x_7160_; uint8_t v___x_7161_; 
v___x_7160_ = lean_unsigned_to_nat(0u);
v___x_7161_ = lean_nat_dec_eq(v_n_7153_, v___x_7160_);
if (v___x_7161_ == 0)
{
lean_object* v___x_7162_; lean_object* v___x_7163_; lean_object* v_a_7164_; lean_object* v_infos_7165_; lean_object* v_key_7166_; uint8_t v___x_7167_; lean_object* v___x_7168_; lean_object* v___x_7169_; 
v___x_7162_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1);
lean_inc(v_n_7153_);
lean_inc_ref(v_scope_7157_);
lean_inc_ref(v_service_7156_);
v___x_7163_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_7154_, v_service_7156_, v_scope_7157_, v_paths_7155_, v_n_7153_, v_n_7153_, v___x_7162_);
lean_dec(v_n_7153_);
v_a_7164_ = lean_ctor_get(v___x_7163_, 0);
lean_inc(v_a_7164_);
lean_dec_ref(v___x_7163_);
v_infos_7165_ = lean_ctor_get(v_a_7164_, 0);
lean_inc_ref(v_infos_7165_);
lean_dec(v_a_7164_);
v_key_7166_ = lean_ctor_get(v_service_7156_, 1);
lean_inc_ref(v_key_7166_);
lean_dec_ref(v_service_7156_);
v___x_7167_ = 1;
v___x_7168_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_7168_, 0, v_scope_7157_);
lean_ctor_set(v___x_7168_, 1, v_infos_7165_);
lean_ctor_set(v___x_7168_, 2, v_key_7166_);
lean_ctor_set_uint8(v___x_7168_, sizeof(void*)*3, v___x_7167_);
v___x_7169_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___at___00Lake_CacheService_downloadArtifacts_spec__0(v_a_7158_, v___x_7168_);
return v___x_7169_;
}
else
{
lean_object* v___x_7170_; lean_object* v___x_7171_; lean_object* v___x_7172_; lean_object* v___x_7173_; 
lean_dec_ref(v_scope_7157_);
lean_dec_ref(v_service_7156_);
lean_dec(v_n_7153_);
v___x_7170_ = ((lean_object*)(l_Lake_CacheService_uploadArtifacts___closed__1));
lean_inc_ref(v_a_7158_);
v___x_7171_ = lean_apply_2(v_a_7158_, v___x_7170_, lean_box(0));
v___x_7172_ = lean_box(0);
v___x_7173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7173_, 0, v___x_7172_);
return v___x_7173_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___boxed(lean_object* v_n_7174_, lean_object* v_descrs_7175_, lean_object* v_paths_7176_, lean_object* v_service_7177_, lean_object* v_scope_7178_, lean_object* v_a_7179_, lean_object* v___y_7180_){
_start:
{
lean_object* v_res_7181_; 
v_res_7181_ = l_Lake_CacheService_uploadArtifacts(v_n_7174_, v_descrs_7175_, v_paths_7176_, v_service_7177_, v_scope_7178_, v_a_7179_);
lean_dec_ref(v_a_7179_);
lean_dec_ref(v_paths_7176_);
lean_dec_ref(v_descrs_7175_);
return v_res_7181_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0(lean_object* v_00_u03b2_7182_, lean_object* v_m_7183_, uint64_t v_a_7184_){
_start:
{
uint8_t v___x_7185_; 
v___x_7185_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_m_7183_, v_a_7184_);
return v___x_7185_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___boxed(lean_object* v_00_u03b2_7186_, lean_object* v_m_7187_, lean_object* v_a_7188_){
_start:
{
uint64_t v_a_boxed_7189_; uint8_t v_res_7190_; lean_object* v_r_7191_; 
v_a_boxed_7189_ = lean_unbox_uint64(v_a_7188_);
lean_dec_ref(v_a_7188_);
v_res_7190_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0(v_00_u03b2_7186_, v_m_7187_, v_a_boxed_7189_);
lean_dec_ref(v_m_7187_);
v_r_7191_ = lean_box(v_res_7190_);
return v_r_7191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1(lean_object* v_descrs_7192_, lean_object* v_service_7193_, lean_object* v_scope_7194_, lean_object* v_paths_7195_, lean_object* v_n_7196_, lean_object* v_i_7197_, lean_object* v_a_7198_, lean_object* v_a_7199_, lean_object* v___y_7200_){
_start:
{
lean_object* v___x_7202_; 
v___x_7202_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_7192_, v_service_7193_, v_scope_7194_, v_paths_7195_, v_n_7196_, v_i_7197_, v_a_7199_);
return v___x_7202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___boxed(lean_object* v_descrs_7203_, lean_object* v_service_7204_, lean_object* v_scope_7205_, lean_object* v_paths_7206_, lean_object* v_n_7207_, lean_object* v_i_7208_, lean_object* v_a_7209_, lean_object* v_a_7210_, lean_object* v___y_7211_, lean_object* v___y_7212_){
_start:
{
lean_object* v_res_7213_; 
v_res_7213_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1(v_descrs_7203_, v_service_7204_, v_scope_7205_, v_paths_7206_, v_n_7207_, v_i_7208_, v_a_7209_, v_a_7210_, v___y_7211_);
lean_dec_ref(v___y_7211_);
lean_dec(v_n_7207_);
lean_dec_ref(v_paths_7206_);
lean_dec_ref(v_descrs_7203_);
return v_res_7213_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(lean_object* v_rev_7218_, lean_object* v_service_7219_, lean_object* v_scope_7220_, lean_object* v_platform_7221_, lean_object* v_toolchain_7222_){
_start:
{
lean_object* v_url_7224_; lean_object* v_url_7231_; 
if (lean_obj_tag(v_scope_7220_) == 0)
{
lean_object* v_s_7240_; lean_object* v_revisionEndpoint_7241_; lean_object* v___x_7242_; lean_object* v___x_7243_; lean_object* v___x_7244_; lean_object* v___x_7245_; lean_object* v___x_7246_; lean_object* v___x_7247_; 
v_s_7240_ = lean_ctor_get(v_scope_7220_, 0);
lean_inc_ref(v_s_7240_);
lean_dec_ref_known(v_scope_7220_, 1);
v_revisionEndpoint_7241_ = lean_ctor_get(v_service_7219_, 3);
lean_inc_ref(v_revisionEndpoint_7241_);
lean_dec_ref(v_service_7219_);
v___x_7242_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_revisionEndpoint_7241_, v_s_7240_);
v___x_7243_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_7244_ = lean_string_append(v___x_7243_, v_rev_7218_);
v___x_7245_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_7246_ = lean_string_append(v___x_7244_, v___x_7245_);
v___x_7247_ = lean_string_append(v___x_7242_, v___x_7246_);
lean_dec_ref(v___x_7246_);
return v___x_7247_;
}
else
{
lean_object* v_s_7248_; lean_object* v_revisionEndpoint_7249_; lean_object* v_url_7250_; lean_object* v___x_7251_; lean_object* v___x_7252_; uint8_t v___x_7253_; 
v_s_7248_ = lean_ctor_get(v_scope_7220_, 0);
lean_inc_ref(v_s_7248_);
lean_dec_ref_known(v_scope_7220_, 1);
v_revisionEndpoint_7249_ = lean_ctor_get(v_service_7219_, 3);
lean_inc_ref(v_revisionEndpoint_7249_);
lean_dec_ref(v_service_7219_);
v_url_7250_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_revisionEndpoint_7249_, v_s_7248_);
v___x_7251_ = lean_string_utf8_byte_size(v_platform_7221_);
v___x_7252_ = lean_unsigned_to_nat(0u);
v___x_7253_ = lean_nat_dec_eq(v___x_7251_, v___x_7252_);
if (v___x_7253_ == 0)
{
lean_object* v___x_7254_; lean_object* v___x_7255_; lean_object* v_url_7256_; 
v___x_7254_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1));
v___x_7255_ = lean_string_append(v_url_7250_, v___x_7254_);
v_url_7256_ = l_Lake_uriEncode(v_platform_7221_, v___x_7255_);
v_url_7231_ = v_url_7256_;
goto v___jp_7230_;
}
else
{
v_url_7231_ = v_url_7250_;
goto v___jp_7230_;
}
}
v___jp_7223_:
{
lean_object* v___x_7225_; lean_object* v___x_7226_; lean_object* v___x_7227_; lean_object* v___x_7228_; lean_object* v___x_7229_; 
v___x_7225_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_7226_ = lean_string_append(v_url_7224_, v___x_7225_);
v___x_7227_ = lean_string_append(v___x_7226_, v_rev_7218_);
v___x_7228_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_7229_ = lean_string_append(v___x_7227_, v___x_7228_);
return v___x_7229_;
}
v___jp_7230_:
{
lean_object* v___x_7232_; lean_object* v___x_7233_; uint8_t v___x_7234_; 
v___x_7232_ = lean_string_utf8_byte_size(v_toolchain_7222_);
v___x_7233_ = lean_unsigned_to_nat(0u);
v___x_7234_ = lean_nat_dec_eq(v___x_7232_, v___x_7233_);
if (v___x_7234_ == 0)
{
lean_object* v___x_7235_; lean_object* v___x_7236_; lean_object* v___x_7237_; lean_object* v___x_7238_; lean_object* v_url_7239_; 
v___x_7235_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_7236_ = l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(v_toolchain_7222_, v___x_7235_, v___x_7233_);
v___x_7237_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0));
v___x_7238_ = lean_string_append(v_url_7231_, v___x_7237_);
v_url_7239_ = l_Lake_uriEncode(v___x_7236_, v___x_7238_);
lean_dec_ref(v___x_7236_);
v_url_7224_ = v_url_7239_;
goto v___jp_7223_;
}
else
{
v_url_7224_ = v_url_7231_;
goto v___jp_7223_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___boxed(lean_object* v_rev_7257_, lean_object* v_service_7258_, lean_object* v_scope_7259_, lean_object* v_platform_7260_, lean_object* v_toolchain_7261_){
_start:
{
lean_object* v_res_7262_; 
v_res_7262_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_7257_, v_service_7258_, v_scope_7259_, v_platform_7260_, v_toolchain_7261_);
lean_dec_ref(v_toolchain_7261_);
lean_dec_ref(v_platform_7260_);
lean_dec_ref(v_rev_7257_);
return v_res_7262_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl(lean_object* v_rev_7266_, lean_object* v_service_7267_, lean_object* v_scope_7268_, lean_object* v_platform_7269_, lean_object* v_toolchain_7270_){
_start:
{
lean_object* v_url_7272_; lean_object* v___y_7280_; uint8_t v_isReservoir_7290_; 
v_isReservoir_7290_ = lean_ctor_get_uint8(v_service_7267_, sizeof(void*)*5);
if (v_isReservoir_7290_ == 0)
{
lean_object* v___x_7291_; 
v___x_7291_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_7266_, v_service_7267_, v_scope_7268_, v_platform_7269_, v_toolchain_7270_);
return v___x_7291_;
}
else
{
if (lean_obj_tag(v_scope_7268_) == 0)
{
lean_object* v_apiEndpoint_7292_; lean_object* v_s_7293_; lean_object* v___x_7294_; lean_object* v___x_7295_; lean_object* v___x_7296_; 
v_apiEndpoint_7292_ = lean_ctor_get(v_service_7267_, 4);
lean_inc_ref(v_apiEndpoint_7292_);
lean_dec_ref(v_service_7267_);
v_s_7293_ = lean_ctor_get(v_scope_7268_, 0);
lean_inc_ref(v_s_7293_);
lean_dec_ref_known(v_scope_7268_, 1);
v___x_7294_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_7295_ = lean_string_append(v_apiEndpoint_7292_, v___x_7294_);
v___x_7296_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_7295_, v_s_7293_);
v___y_7280_ = v___x_7296_;
goto v___jp_7279_;
}
else
{
lean_object* v_apiEndpoint_7297_; lean_object* v_s_7298_; lean_object* v___x_7299_; lean_object* v___x_7300_; lean_object* v___x_7301_; 
v_apiEndpoint_7297_ = lean_ctor_get(v_service_7267_, 4);
lean_inc_ref(v_apiEndpoint_7297_);
lean_dec_ref(v_service_7267_);
v_s_7298_ = lean_ctor_get(v_scope_7268_, 0);
lean_inc_ref(v_s_7298_);
lean_dec_ref_known(v_scope_7268_, 1);
v___x_7299_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_7300_ = lean_string_append(v_apiEndpoint_7297_, v___x_7299_);
v___x_7301_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_7300_, v_s_7298_);
v___y_7280_ = v___x_7301_;
goto v___jp_7279_;
}
}
v___jp_7271_:
{
lean_object* v___x_7273_; lean_object* v___x_7274_; uint8_t v___x_7275_; 
v___x_7273_ = lean_string_utf8_byte_size(v_toolchain_7270_);
v___x_7274_ = lean_unsigned_to_nat(0u);
v___x_7275_ = lean_nat_dec_eq(v___x_7273_, v___x_7274_);
if (v___x_7275_ == 0)
{
lean_object* v___x_7276_; lean_object* v___x_7277_; lean_object* v_url_7278_; 
v___x_7276_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__0));
v___x_7277_ = lean_string_append(v_url_7272_, v___x_7276_);
v_url_7278_ = l_Lake_uriEncode(v_toolchain_7270_, v___x_7277_);
return v_url_7278_;
}
else
{
return v_url_7272_;
}
}
v___jp_7279_:
{
lean_object* v___x_7281_; lean_object* v___x_7282_; lean_object* v_url_7283_; lean_object* v___x_7284_; lean_object* v___x_7285_; uint8_t v___x_7286_; 
v___x_7281_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__1));
v___x_7282_ = lean_string_append(v___y_7280_, v___x_7281_);
v_url_7283_ = lean_string_append(v___x_7282_, v_rev_7266_);
v___x_7284_ = lean_string_utf8_byte_size(v_platform_7269_);
v___x_7285_ = lean_unsigned_to_nat(0u);
v___x_7286_ = lean_nat_dec_eq(v___x_7284_, v___x_7285_);
if (v___x_7286_ == 0)
{
lean_object* v___x_7287_; lean_object* v___x_7288_; lean_object* v_url_7289_; 
v___x_7287_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__2));
v___x_7288_ = lean_string_append(v_url_7283_, v___x_7287_);
v_url_7289_ = l_Lake_uriEncode(v_platform_7269_, v___x_7288_);
v_url_7272_ = v_url_7289_;
goto v___jp_7271_;
}
else
{
v_url_7272_ = v_url_7283_;
goto v___jp_7271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl___boxed(lean_object* v_rev_7302_, lean_object* v_service_7303_, lean_object* v_scope_7304_, lean_object* v_platform_7305_, lean_object* v_toolchain_7306_){
_start:
{
lean_object* v_res_7307_; 
v_res_7307_ = l_Lake_CacheService_revisionUrl(v_rev_7302_, v_service_7303_, v_scope_7304_, v_platform_7305_, v_toolchain_7306_);
lean_dec_ref(v_toolchain_7306_);
lean_dec_ref(v_platform_7305_);
lean_dec_ref(v_rev_7302_);
return v_res_7307_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f(lean_object* v_rev_7312_, lean_object* v_cache_7313_, lean_object* v_service_7314_, lean_object* v_localScope_7315_, lean_object* v_remoteScope_7316_, lean_object* v_platform_7317_, lean_object* v_toolchain_7318_, uint8_t v_force_7319_, lean_object* v_a_7320_){
_start:
{
lean_object* v___y_7323_; lean_object* v___y_7324_; lean_object* v_a_7332_; lean_object* v_a_7335_; lean_object* v_a_7339_; lean_object* v___x_7342_; lean_object* v___x_7343_; lean_object* v___x_7344_; lean_object* v___x_7345_; lean_object* v___x_7346_; lean_object* v_path_7347_; lean_object* v_a_7349_; lean_object* v___y_7435_; lean_object* v___y_7436_; uint8_t v_a_7476_; lean_object* v___x_7523_; uint8_t v___x_7524_; uint8_t v___x_7525_; 
v___x_7342_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_7343_ = l_System_FilePath_join(v_cache_7313_, v___x_7342_);
lean_inc_ref(v_localScope_7315_);
v___x_7344_ = l_System_FilePath_join(v___x_7343_, v_localScope_7315_);
v___x_7345_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
lean_inc_ref(v_rev_7312_);
v___x_7346_ = lean_string_append(v_rev_7312_, v___x_7345_);
v_path_7347_ = l_System_FilePath_join(v___x_7344_, v___x_7346_);
v___x_7523_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_7524_ = l_System_FilePath_pathExists(v_path_7347_);
v___x_7525_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_7525_ == 0)
{
v_a_7476_ = v___x_7524_;
goto v___jp_7475_;
}
else
{
lean_object* v___x_7526_; size_t v___x_7527_; size_t v___x_7528_; lean_object* v___x_7529_; 
v___x_7526_ = lean_box(0);
v___x_7527_ = ((size_t)0ULL);
v___x_7528_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_7529_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_7523_, v___x_7527_, v___x_7528_, v___x_7526_, v_a_7320_);
if (lean_obj_tag(v___x_7529_) == 0)
{
lean_dec_ref_known(v___x_7529_, 1);
v_a_7476_ = v___x_7524_;
goto v___jp_7475_;
}
else
{
lean_object* v_a_7530_; lean_object* v___x_7532_; uint8_t v_isShared_7533_; uint8_t v_isSharedCheck_7537_; 
lean_dec_ref(v_path_7347_);
lean_dec_ref(v_remoteScope_7316_);
lean_dec_ref(v_localScope_7315_);
lean_dec_ref(v_service_7314_);
lean_dec_ref(v_rev_7312_);
v_a_7530_ = lean_ctor_get(v___x_7529_, 0);
v_isSharedCheck_7537_ = !lean_is_exclusive(v___x_7529_);
if (v_isSharedCheck_7537_ == 0)
{
v___x_7532_ = v___x_7529_;
v_isShared_7533_ = v_isSharedCheck_7537_;
goto v_resetjp_7531_;
}
else
{
lean_inc(v_a_7530_);
lean_dec(v___x_7529_);
v___x_7532_ = lean_box(0);
v_isShared_7533_ = v_isSharedCheck_7537_;
goto v_resetjp_7531_;
}
v_resetjp_7531_:
{
lean_object* v___x_7535_; 
if (v_isShared_7533_ == 0)
{
v___x_7535_ = v___x_7532_;
goto v_reusejp_7534_;
}
else
{
lean_object* v_reuseFailAlloc_7536_; 
v_reuseFailAlloc_7536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7536_, 0, v_a_7530_);
v___x_7535_ = v_reuseFailAlloc_7536_;
goto v_reusejp_7534_;
}
v_reusejp_7534_:
{
return v___x_7535_;
}
}
}
}
v___jp_7322_:
{
lean_object* v___x_7325_; lean_object* v___x_7326_; uint8_t v___x_7327_; lean_object* v___x_7328_; lean_object* v___x_7329_; lean_object* v___x_7330_; 
v___x_7325_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0));
v___x_7326_ = lean_string_append(v___y_7324_, v___x_7325_);
v___x_7327_ = 3;
v___x_7328_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7328_, 0, v___x_7326_);
lean_ctor_set_uint8(v___x_7328_, sizeof(void*)*1, v___x_7327_);
lean_inc_ref(v_a_7320_);
v___x_7329_ = lean_apply_2(v_a_7320_, v___x_7328_, lean_box(0));
v___x_7330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7330_, 0, v___y_7323_);
return v___x_7330_;
}
v___jp_7331_:
{
lean_object* v_s_7333_; 
v_s_7333_ = lean_ctor_get(v_remoteScope_7316_, 0);
lean_inc_ref(v_s_7333_);
lean_dec_ref(v_remoteScope_7316_);
v___y_7323_ = v_a_7332_;
v___y_7324_ = v_s_7333_;
goto v___jp_7322_;
}
v___jp_7334_:
{
lean_object* v___x_7336_; lean_object* v___x_7337_; 
v___x_7336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7336_, 0, v_a_7335_);
v___x_7337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7337_, 0, v___x_7336_);
return v___x_7337_;
}
v___jp_7338_:
{
lean_object* v___x_7340_; lean_object* v___x_7341_; 
v___x_7340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7340_, 0, v_a_7339_);
v___x_7341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7341_, 0, v___x_7340_);
return v___x_7341_;
}
v___jp_7348_:
{
if (lean_obj_tag(v_a_7349_) == 1)
{
lean_object* v_val_7350_; lean_object* v___x_7351_; 
v_val_7350_ = lean_ctor_get(v_a_7349_, 0);
lean_inc(v_val_7350_);
lean_dec_ref_known(v_a_7349_, 1);
lean_inc_ref(v_path_7347_);
v___x_7351_ = l_Lake_createParentDirs(v_path_7347_);
if (lean_obj_tag(v___x_7351_) == 0)
{
lean_object* v___x_7352_; 
lean_dec_ref_known(v___x_7351_, 1);
v___x_7352_ = l_IO_FS_writeFile(v_path_7347_, v_val_7350_);
lean_dec(v_val_7350_);
if (lean_obj_tag(v___x_7352_) == 0)
{
lean_object* v___x_7354_; uint8_t v_isShared_7355_; uint8_t v_isSharedCheck_7404_; 
v_isSharedCheck_7404_ = !lean_is_exclusive(v___x_7352_);
if (v_isSharedCheck_7404_ == 0)
{
lean_object* v_unused_7405_; 
v_unused_7405_ = lean_ctor_get(v___x_7352_, 0);
lean_dec(v_unused_7405_);
v___x_7354_ = v___x_7352_;
v_isShared_7355_ = v_isSharedCheck_7404_;
goto v_resetjp_7353_;
}
else
{
lean_dec(v___x_7352_);
v___x_7354_ = lean_box(0);
v_isShared_7355_ = v_isSharedCheck_7404_;
goto v_resetjp_7353_;
}
v_resetjp_7353_:
{
lean_object* v___x_7356_; lean_object* v___x_7357_; uint8_t v___x_7358_; lean_object* v___x_7359_; lean_object* v___x_7360_; 
v___x_7356_ = lean_string_utf8_byte_size(v_platform_7317_);
v___x_7357_ = lean_unsigned_to_nat(0u);
v___x_7358_ = lean_nat_dec_eq(v___x_7356_, v___x_7357_);
v___x_7359_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_7360_ = l_Lake_CacheMap_load(v_path_7347_, v___x_7358_, v___x_7359_);
if (lean_obj_tag(v___x_7360_) == 0)
{
lean_object* v_a_7361_; lean_object* v_a_7362_; lean_object* v___x_7363_; uint8_t v___x_7364_; 
lean_del_object(v___x_7354_);
v_a_7361_ = lean_ctor_get(v___x_7360_, 0);
lean_inc(v_a_7361_);
v_a_7362_ = lean_ctor_get(v___x_7360_, 1);
lean_inc(v_a_7362_);
lean_dec_ref_known(v___x_7360_, 2);
v___x_7363_ = lean_array_get_size(v_a_7362_);
v___x_7364_ = lean_nat_dec_lt(v___x_7357_, v___x_7363_);
if (v___x_7364_ == 0)
{
lean_dec(v_a_7362_);
v_a_7335_ = v_a_7361_;
goto v___jp_7334_;
}
else
{
lean_object* v___x_7365_; size_t v___x_7366_; size_t v___x_7367_; lean_object* v___x_7368_; 
v___x_7365_ = lean_box(0);
v___x_7366_ = ((size_t)0ULL);
v___x_7367_ = lean_usize_of_nat(v___x_7363_);
v___x_7368_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_7362_, v___x_7366_, v___x_7367_, v___x_7365_, v_a_7320_);
lean_dec(v_a_7362_);
if (lean_obj_tag(v___x_7368_) == 0)
{
lean_dec_ref_known(v___x_7368_, 1);
v_a_7335_ = v_a_7361_;
goto v___jp_7334_;
}
else
{
lean_object* v_a_7369_; lean_object* v___x_7371_; uint8_t v_isShared_7372_; uint8_t v_isSharedCheck_7376_; 
lean_dec(v_a_7361_);
v_a_7369_ = lean_ctor_get(v___x_7368_, 0);
v_isSharedCheck_7376_ = !lean_is_exclusive(v___x_7368_);
if (v_isSharedCheck_7376_ == 0)
{
v___x_7371_ = v___x_7368_;
v_isShared_7372_ = v_isSharedCheck_7376_;
goto v_resetjp_7370_;
}
else
{
lean_inc(v_a_7369_);
lean_dec(v___x_7368_);
v___x_7371_ = lean_box(0);
v_isShared_7372_ = v_isSharedCheck_7376_;
goto v_resetjp_7370_;
}
v_resetjp_7370_:
{
lean_object* v___x_7374_; 
if (v_isShared_7372_ == 0)
{
v___x_7374_ = v___x_7371_;
goto v_reusejp_7373_;
}
else
{
lean_object* v_reuseFailAlloc_7375_; 
v_reuseFailAlloc_7375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7375_, 0, v_a_7369_);
v___x_7374_ = v_reuseFailAlloc_7375_;
goto v_reusejp_7373_;
}
v_reusejp_7373_:
{
return v___x_7374_;
}
}
}
}
}
else
{
lean_object* v_a_7377_; lean_object* v___x_7378_; uint8_t v___x_7379_; 
v_a_7377_ = lean_ctor_get(v___x_7360_, 1);
lean_inc(v_a_7377_);
lean_dec_ref_known(v___x_7360_, 2);
v___x_7378_ = lean_array_get_size(v_a_7377_);
v___x_7379_ = lean_nat_dec_lt(v___x_7357_, v___x_7378_);
if (v___x_7379_ == 0)
{
lean_object* v___x_7380_; lean_object* v___x_7382_; 
lean_dec(v_a_7377_);
v___x_7380_ = lean_box(0);
if (v_isShared_7355_ == 0)
{
lean_ctor_set_tag(v___x_7354_, 1);
lean_ctor_set(v___x_7354_, 0, v___x_7380_);
v___x_7382_ = v___x_7354_;
goto v_reusejp_7381_;
}
else
{
lean_object* v_reuseFailAlloc_7383_; 
v_reuseFailAlloc_7383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7383_, 0, v___x_7380_);
v___x_7382_ = v_reuseFailAlloc_7383_;
goto v_reusejp_7381_;
}
v_reusejp_7381_:
{
return v___x_7382_;
}
}
else
{
lean_object* v___x_7384_; size_t v___x_7385_; size_t v___x_7386_; lean_object* v___x_7387_; 
lean_del_object(v___x_7354_);
v___x_7384_ = lean_box(0);
v___x_7385_ = ((size_t)0ULL);
v___x_7386_ = lean_usize_of_nat(v___x_7378_);
v___x_7387_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_7377_, v___x_7385_, v___x_7386_, v___x_7384_, v_a_7320_);
lean_dec(v_a_7377_);
if (lean_obj_tag(v___x_7387_) == 0)
{
lean_object* v___x_7389_; uint8_t v_isShared_7390_; uint8_t v_isSharedCheck_7394_; 
v_isSharedCheck_7394_ = !lean_is_exclusive(v___x_7387_);
if (v_isSharedCheck_7394_ == 0)
{
lean_object* v_unused_7395_; 
v_unused_7395_ = lean_ctor_get(v___x_7387_, 0);
lean_dec(v_unused_7395_);
v___x_7389_ = v___x_7387_;
v_isShared_7390_ = v_isSharedCheck_7394_;
goto v_resetjp_7388_;
}
else
{
lean_dec(v___x_7387_);
v___x_7389_ = lean_box(0);
v_isShared_7390_ = v_isSharedCheck_7394_;
goto v_resetjp_7388_;
}
v_resetjp_7388_:
{
lean_object* v___x_7392_; 
if (v_isShared_7390_ == 0)
{
lean_ctor_set_tag(v___x_7389_, 1);
lean_ctor_set(v___x_7389_, 0, v___x_7384_);
v___x_7392_ = v___x_7389_;
goto v_reusejp_7391_;
}
else
{
lean_object* v_reuseFailAlloc_7393_; 
v_reuseFailAlloc_7393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7393_, 0, v___x_7384_);
v___x_7392_ = v_reuseFailAlloc_7393_;
goto v_reusejp_7391_;
}
v_reusejp_7391_:
{
return v___x_7392_;
}
}
}
else
{
lean_object* v_a_7396_; lean_object* v___x_7398_; uint8_t v_isShared_7399_; uint8_t v_isSharedCheck_7403_; 
v_a_7396_ = lean_ctor_get(v___x_7387_, 0);
v_isSharedCheck_7403_ = !lean_is_exclusive(v___x_7387_);
if (v_isSharedCheck_7403_ == 0)
{
v___x_7398_ = v___x_7387_;
v_isShared_7399_ = v_isSharedCheck_7403_;
goto v_resetjp_7397_;
}
else
{
lean_inc(v_a_7396_);
lean_dec(v___x_7387_);
v___x_7398_ = lean_box(0);
v_isShared_7399_ = v_isSharedCheck_7403_;
goto v_resetjp_7397_;
}
v_resetjp_7397_:
{
lean_object* v___x_7401_; 
if (v_isShared_7399_ == 0)
{
v___x_7401_ = v___x_7398_;
goto v_reusejp_7400_;
}
else
{
lean_object* v_reuseFailAlloc_7402_; 
v_reuseFailAlloc_7402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7402_, 0, v_a_7396_);
v___x_7401_ = v_reuseFailAlloc_7402_;
goto v_reusejp_7400_;
}
v_reusejp_7400_:
{
return v___x_7401_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_7406_; lean_object* v___x_7408_; uint8_t v_isShared_7409_; uint8_t v_isSharedCheck_7418_; 
lean_dec_ref(v_path_7347_);
v_a_7406_ = lean_ctor_get(v___x_7352_, 0);
v_isSharedCheck_7418_ = !lean_is_exclusive(v___x_7352_);
if (v_isSharedCheck_7418_ == 0)
{
v___x_7408_ = v___x_7352_;
v_isShared_7409_ = v_isSharedCheck_7418_;
goto v_resetjp_7407_;
}
else
{
lean_inc(v_a_7406_);
lean_dec(v___x_7352_);
v___x_7408_ = lean_box(0);
v_isShared_7409_ = v_isSharedCheck_7418_;
goto v_resetjp_7407_;
}
v_resetjp_7407_:
{
lean_object* v___x_7410_; uint8_t v___x_7411_; lean_object* v___x_7412_; lean_object* v___x_7413_; lean_object* v___x_7414_; lean_object* v___x_7416_; 
v___x_7410_ = lean_io_error_to_string(v_a_7406_);
v___x_7411_ = 3;
v___x_7412_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7412_, 0, v___x_7410_);
lean_ctor_set_uint8(v___x_7412_, sizeof(void*)*1, v___x_7411_);
lean_inc_ref(v_a_7320_);
v___x_7413_ = lean_apply_2(v_a_7320_, v___x_7412_, lean_box(0));
v___x_7414_ = lean_box(0);
if (v_isShared_7409_ == 0)
{
lean_ctor_set(v___x_7408_, 0, v___x_7414_);
v___x_7416_ = v___x_7408_;
goto v_reusejp_7415_;
}
else
{
lean_object* v_reuseFailAlloc_7417_; 
v_reuseFailAlloc_7417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7417_, 0, v___x_7414_);
v___x_7416_ = v_reuseFailAlloc_7417_;
goto v_reusejp_7415_;
}
v_reusejp_7415_:
{
return v___x_7416_;
}
}
}
}
else
{
lean_object* v_a_7419_; lean_object* v___x_7421_; uint8_t v_isShared_7422_; uint8_t v_isSharedCheck_7431_; 
lean_dec(v_val_7350_);
lean_dec_ref(v_path_7347_);
v_a_7419_ = lean_ctor_get(v___x_7351_, 0);
v_isSharedCheck_7431_ = !lean_is_exclusive(v___x_7351_);
if (v_isSharedCheck_7431_ == 0)
{
v___x_7421_ = v___x_7351_;
v_isShared_7422_ = v_isSharedCheck_7431_;
goto v_resetjp_7420_;
}
else
{
lean_inc(v_a_7419_);
lean_dec(v___x_7351_);
v___x_7421_ = lean_box(0);
v_isShared_7422_ = v_isSharedCheck_7431_;
goto v_resetjp_7420_;
}
v_resetjp_7420_:
{
lean_object* v___x_7423_; uint8_t v___x_7424_; lean_object* v___x_7425_; lean_object* v___x_7426_; lean_object* v___x_7427_; lean_object* v___x_7429_; 
v___x_7423_ = lean_io_error_to_string(v_a_7419_);
v___x_7424_ = 3;
v___x_7425_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7425_, 0, v___x_7423_);
lean_ctor_set_uint8(v___x_7425_, sizeof(void*)*1, v___x_7424_);
lean_inc_ref(v_a_7320_);
v___x_7426_ = lean_apply_2(v_a_7320_, v___x_7425_, lean_box(0));
v___x_7427_ = lean_box(0);
if (v_isShared_7422_ == 0)
{
lean_ctor_set(v___x_7421_, 0, v___x_7427_);
v___x_7429_ = v___x_7421_;
goto v_reusejp_7428_;
}
else
{
lean_object* v_reuseFailAlloc_7430_; 
v_reuseFailAlloc_7430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7430_, 0, v___x_7427_);
v___x_7429_ = v_reuseFailAlloc_7430_;
goto v_reusejp_7428_;
}
v_reusejp_7428_:
{
return v___x_7429_;
}
}
}
}
else
{
lean_object* v___x_7432_; lean_object* v___x_7433_; 
lean_dec(v_a_7349_);
lean_dec_ref(v_path_7347_);
v___x_7432_ = lean_box(0);
v___x_7433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7433_, 0, v___x_7432_);
return v___x_7433_;
}
}
v___jp_7434_:
{
lean_object* v___x_7437_; lean_object* v___x_7438_; lean_object* v___x_7439_; 
v___x_7437_ = lean_unsigned_to_nat(0u);
v___x_7438_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_7439_ = l_Lake_getUrl_x3f(v___y_7435_, v___y_7436_, v___x_7438_);
if (lean_obj_tag(v___x_7439_) == 0)
{
lean_object* v_a_7440_; lean_object* v_a_7441_; lean_object* v___x_7442_; uint8_t v___x_7443_; 
v_a_7440_ = lean_ctor_get(v___x_7439_, 0);
lean_inc(v_a_7440_);
v_a_7441_ = lean_ctor_get(v___x_7439_, 1);
lean_inc(v_a_7441_);
lean_dec_ref_known(v___x_7439_, 2);
v___x_7442_ = lean_array_get_size(v_a_7441_);
v___x_7443_ = lean_nat_dec_lt(v___x_7437_, v___x_7442_);
if (v___x_7443_ == 0)
{
lean_dec(v_a_7441_);
lean_dec_ref(v_remoteScope_7316_);
v_a_7349_ = v_a_7440_;
goto v___jp_7348_;
}
else
{
lean_object* v___x_7444_; size_t v___x_7445_; size_t v___x_7446_; lean_object* v___x_7447_; 
v___x_7444_ = lean_box(0);
v___x_7445_ = ((size_t)0ULL);
v___x_7446_ = lean_usize_of_nat(v___x_7442_);
v___x_7447_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_7441_, v___x_7445_, v___x_7446_, v___x_7444_, v_a_7320_);
lean_dec(v_a_7441_);
if (lean_obj_tag(v___x_7447_) == 0)
{
lean_dec_ref_known(v___x_7447_, 1);
lean_dec_ref(v_remoteScope_7316_);
v_a_7349_ = v_a_7440_;
goto v___jp_7348_;
}
else
{
lean_object* v_a_7448_; 
lean_dec(v_a_7440_);
lean_dec_ref(v_path_7347_);
v_a_7448_ = lean_ctor_get(v___x_7447_, 0);
lean_inc(v_a_7448_);
lean_dec_ref_known(v___x_7447_, 1);
v_a_7332_ = v_a_7448_;
goto v___jp_7331_;
}
}
}
else
{
lean_object* v_a_7449_; lean_object* v___x_7450_; uint8_t v___x_7451_; 
lean_dec_ref(v_path_7347_);
v_a_7449_ = lean_ctor_get(v___x_7439_, 1);
lean_inc(v_a_7449_);
lean_dec_ref_known(v___x_7439_, 2);
v___x_7450_ = lean_array_get_size(v_a_7449_);
v___x_7451_ = lean_nat_dec_lt(v___x_7437_, v___x_7450_);
if (v___x_7451_ == 0)
{
lean_object* v___x_7452_; 
lean_dec(v_a_7449_);
v___x_7452_ = lean_box(0);
v_a_7332_ = v___x_7452_;
goto v___jp_7331_;
}
else
{
lean_object* v___x_7453_; size_t v___x_7454_; size_t v___x_7455_; lean_object* v___x_7456_; 
v___x_7453_ = lean_box(0);
v___x_7454_ = ((size_t)0ULL);
v___x_7455_ = lean_usize_of_nat(v___x_7450_);
v___x_7456_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_7449_, v___x_7454_, v___x_7455_, v___x_7453_, v_a_7320_);
lean_dec(v_a_7449_);
if (lean_obj_tag(v___x_7456_) == 0)
{
lean_dec_ref_known(v___x_7456_, 1);
v_a_7332_ = v___x_7453_;
goto v___jp_7331_;
}
else
{
lean_object* v_a_7457_; 
v_a_7457_ = lean_ctor_get(v___x_7456_, 0);
lean_inc(v_a_7457_);
lean_dec_ref_known(v___x_7456_, 1);
v_a_7332_ = v_a_7457_;
goto v___jp_7331_;
}
}
}
}
v___jp_7458_:
{
lean_object* v___x_7459_; lean_object* v___x_7460_; lean_object* v___x_7461_; lean_object* v___x_7462_; lean_object* v___x_7463_; lean_object* v___x_7464_; lean_object* v___x_7465_; lean_object* v___x_7466_; lean_object* v___x_7467_; lean_object* v___x_7468_; uint8_t v___x_7469_; lean_object* v___x_7470_; lean_object* v___x_7471_; uint8_t v_isReservoir_7472_; 
lean_inc_ref(v_remoteScope_7316_);
lean_inc_ref(v_service_7314_);
v___x_7459_ = l_Lake_CacheService_revisionUrl(v_rev_7312_, v_service_7314_, v_remoteScope_7316_, v_platform_7317_, v_toolchain_7318_);
v___x_7460_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1));
v___x_7461_ = lean_string_append(v_localScope_7315_, v___x_7460_);
v___x_7462_ = lean_string_append(v___x_7461_, v_rev_7312_);
lean_dec_ref(v_rev_7312_);
v___x_7463_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_7464_ = lean_string_append(v___x_7462_, v___x_7463_);
v___x_7465_ = lean_string_append(v___x_7464_, v_path_7347_);
v___x_7466_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_7467_ = lean_string_append(v___x_7465_, v___x_7466_);
v___x_7468_ = lean_string_append(v___x_7467_, v___x_7459_);
v___x_7469_ = 1;
v___x_7470_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7470_, 0, v___x_7468_);
lean_ctor_set_uint8(v___x_7470_, sizeof(void*)*1, v___x_7469_);
lean_inc_ref(v_a_7320_);
v___x_7471_ = lean_apply_2(v_a_7320_, v___x_7470_, lean_box(0));
v_isReservoir_7472_ = lean_ctor_get_uint8(v_service_7314_, sizeof(void*)*5);
lean_dec_ref(v_service_7314_);
if (v_isReservoir_7472_ == 0)
{
lean_object* v___x_7473_; 
v___x_7473_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2));
v___y_7435_ = v___x_7459_;
v___y_7436_ = v___x_7473_;
goto v___jp_7434_;
}
else
{
lean_object* v___x_7474_; 
v___x_7474_ = l_Lake_Reservoir_lakeHeaders;
v___y_7435_ = v___x_7459_;
v___y_7436_ = v___x_7474_;
goto v___jp_7434_;
}
}
v___jp_7475_:
{
if (v_a_7476_ == 0)
{
goto v___jp_7458_;
}
else
{
if (v_force_7319_ == 0)
{
lean_object* v___x_7477_; lean_object* v___x_7478_; uint8_t v___x_7479_; lean_object* v___x_7480_; lean_object* v___x_7481_; 
lean_dec_ref(v_remoteScope_7316_);
lean_dec_ref(v_localScope_7315_);
lean_dec_ref(v_service_7314_);
lean_dec_ref(v_rev_7312_);
v___x_7477_ = lean_string_utf8_byte_size(v_platform_7317_);
v___x_7478_ = lean_unsigned_to_nat(0u);
v___x_7479_ = lean_nat_dec_eq(v___x_7477_, v___x_7478_);
v___x_7480_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_7481_ = l_Lake_CacheMap_load(v_path_7347_, v___x_7479_, v___x_7480_);
if (lean_obj_tag(v___x_7481_) == 0)
{
lean_object* v_a_7482_; lean_object* v_a_7483_; lean_object* v___x_7484_; uint8_t v___x_7485_; 
v_a_7482_ = lean_ctor_get(v___x_7481_, 0);
lean_inc(v_a_7482_);
v_a_7483_ = lean_ctor_get(v___x_7481_, 1);
lean_inc(v_a_7483_);
lean_dec_ref_known(v___x_7481_, 2);
v___x_7484_ = lean_array_get_size(v_a_7483_);
v___x_7485_ = lean_nat_dec_lt(v___x_7478_, v___x_7484_);
if (v___x_7485_ == 0)
{
lean_dec(v_a_7483_);
v_a_7339_ = v_a_7482_;
goto v___jp_7338_;
}
else
{
lean_object* v___x_7486_; size_t v___x_7487_; size_t v___x_7488_; lean_object* v___x_7489_; 
v___x_7486_ = lean_box(0);
v___x_7487_ = ((size_t)0ULL);
v___x_7488_ = lean_usize_of_nat(v___x_7484_);
v___x_7489_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_7483_, v___x_7487_, v___x_7488_, v___x_7486_, v_a_7320_);
lean_dec(v_a_7483_);
if (lean_obj_tag(v___x_7489_) == 0)
{
lean_dec_ref_known(v___x_7489_, 1);
v_a_7339_ = v_a_7482_;
goto v___jp_7338_;
}
else
{
lean_object* v_a_7490_; lean_object* v___x_7492_; uint8_t v_isShared_7493_; uint8_t v_isSharedCheck_7497_; 
lean_dec(v_a_7482_);
v_a_7490_ = lean_ctor_get(v___x_7489_, 0);
v_isSharedCheck_7497_ = !lean_is_exclusive(v___x_7489_);
if (v_isSharedCheck_7497_ == 0)
{
v___x_7492_ = v___x_7489_;
v_isShared_7493_ = v_isSharedCheck_7497_;
goto v_resetjp_7491_;
}
else
{
lean_inc(v_a_7490_);
lean_dec(v___x_7489_);
v___x_7492_ = lean_box(0);
v_isShared_7493_ = v_isSharedCheck_7497_;
goto v_resetjp_7491_;
}
v_resetjp_7491_:
{
lean_object* v___x_7495_; 
if (v_isShared_7493_ == 0)
{
v___x_7495_ = v___x_7492_;
goto v_reusejp_7494_;
}
else
{
lean_object* v_reuseFailAlloc_7496_; 
v_reuseFailAlloc_7496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7496_, 0, v_a_7490_);
v___x_7495_ = v_reuseFailAlloc_7496_;
goto v_reusejp_7494_;
}
v_reusejp_7494_:
{
return v___x_7495_;
}
}
}
}
}
else
{
lean_object* v_a_7498_; lean_object* v___x_7499_; uint8_t v___x_7500_; 
v_a_7498_ = lean_ctor_get(v___x_7481_, 1);
lean_inc(v_a_7498_);
lean_dec_ref_known(v___x_7481_, 2);
v___x_7499_ = lean_array_get_size(v_a_7498_);
v___x_7500_ = lean_nat_dec_lt(v___x_7478_, v___x_7499_);
if (v___x_7500_ == 0)
{
lean_object* v___x_7501_; lean_object* v___x_7502_; 
lean_dec(v_a_7498_);
v___x_7501_ = lean_box(0);
v___x_7502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7502_, 0, v___x_7501_);
return v___x_7502_;
}
else
{
lean_object* v___x_7503_; size_t v___x_7504_; size_t v___x_7505_; lean_object* v___x_7506_; 
v___x_7503_ = lean_box(0);
v___x_7504_ = ((size_t)0ULL);
v___x_7505_ = lean_usize_of_nat(v___x_7499_);
v___x_7506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_7498_, v___x_7504_, v___x_7505_, v___x_7503_, v_a_7320_);
lean_dec(v_a_7498_);
if (lean_obj_tag(v___x_7506_) == 0)
{
lean_object* v___x_7508_; uint8_t v_isShared_7509_; uint8_t v_isSharedCheck_7513_; 
v_isSharedCheck_7513_ = !lean_is_exclusive(v___x_7506_);
if (v_isSharedCheck_7513_ == 0)
{
lean_object* v_unused_7514_; 
v_unused_7514_ = lean_ctor_get(v___x_7506_, 0);
lean_dec(v_unused_7514_);
v___x_7508_ = v___x_7506_;
v_isShared_7509_ = v_isSharedCheck_7513_;
goto v_resetjp_7507_;
}
else
{
lean_dec(v___x_7506_);
v___x_7508_ = lean_box(0);
v_isShared_7509_ = v_isSharedCheck_7513_;
goto v_resetjp_7507_;
}
v_resetjp_7507_:
{
lean_object* v___x_7511_; 
if (v_isShared_7509_ == 0)
{
lean_ctor_set_tag(v___x_7508_, 1);
lean_ctor_set(v___x_7508_, 0, v___x_7503_);
v___x_7511_ = v___x_7508_;
goto v_reusejp_7510_;
}
else
{
lean_object* v_reuseFailAlloc_7512_; 
v_reuseFailAlloc_7512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7512_, 0, v___x_7503_);
v___x_7511_ = v_reuseFailAlloc_7512_;
goto v_reusejp_7510_;
}
v_reusejp_7510_:
{
return v___x_7511_;
}
}
}
else
{
lean_object* v_a_7515_; lean_object* v___x_7517_; uint8_t v_isShared_7518_; uint8_t v_isSharedCheck_7522_; 
v_a_7515_ = lean_ctor_get(v___x_7506_, 0);
v_isSharedCheck_7522_ = !lean_is_exclusive(v___x_7506_);
if (v_isSharedCheck_7522_ == 0)
{
v___x_7517_ = v___x_7506_;
v_isShared_7518_ = v_isSharedCheck_7522_;
goto v_resetjp_7516_;
}
else
{
lean_inc(v_a_7515_);
lean_dec(v___x_7506_);
v___x_7517_ = lean_box(0);
v_isShared_7518_ = v_isSharedCheck_7522_;
goto v_resetjp_7516_;
}
v_resetjp_7516_:
{
lean_object* v___x_7520_; 
if (v_isShared_7518_ == 0)
{
v___x_7520_ = v___x_7517_;
goto v_reusejp_7519_;
}
else
{
lean_object* v_reuseFailAlloc_7521_; 
v_reuseFailAlloc_7521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7521_, 0, v_a_7515_);
v___x_7520_ = v_reuseFailAlloc_7521_;
goto v_reusejp_7519_;
}
v_reusejp_7519_:
{
return v___x_7520_;
}
}
}
}
}
}
else
{
goto v___jp_7458_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___boxed(lean_object* v_rev_7538_, lean_object* v_cache_7539_, lean_object* v_service_7540_, lean_object* v_localScope_7541_, lean_object* v_remoteScope_7542_, lean_object* v_platform_7543_, lean_object* v_toolchain_7544_, lean_object* v_force_7545_, lean_object* v_a_7546_, lean_object* v___y_7547_){
_start:
{
uint8_t v_force_boxed_7548_; lean_object* v_res_7549_; 
v_force_boxed_7548_ = lean_unbox(v_force_7545_);
v_res_7549_ = l_Lake_CacheService_downloadRevisionOutputs_x3f(v_rev_7538_, v_cache_7539_, v_service_7540_, v_localScope_7541_, v_remoteScope_7542_, v_platform_7543_, v_toolchain_7544_, v_force_boxed_7548_, v_a_7546_);
lean_dec_ref(v_a_7546_);
lean_dec_ref(v_toolchain_7544_);
lean_dec_ref(v_platform_7543_);
return v_res_7549_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs(lean_object* v_rev_7551_, lean_object* v_outputs_7552_, lean_object* v_service_7553_, lean_object* v_scope_7554_, lean_object* v_platform_7555_, lean_object* v_toolchain_7556_, lean_object* v_a_7557_){
_start:
{
lean_object* v_url_7559_; lean_object* v___y_7561_; lean_object* v_s_7577_; 
lean_inc_ref(v_scope_7554_);
lean_inc_ref(v_service_7553_);
v_url_7559_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_7551_, v_service_7553_, v_scope_7554_, v_platform_7555_, v_toolchain_7556_);
v_s_7577_ = lean_ctor_get(v_scope_7554_, 0);
lean_inc_ref(v_s_7577_);
lean_dec_ref(v_scope_7554_);
v___y_7561_ = v_s_7577_;
goto v___jp_7560_;
v___jp_7560_:
{
lean_object* v___x_7562_; lean_object* v___x_7563_; lean_object* v___x_7564_; lean_object* v___x_7565_; lean_object* v___x_7566_; lean_object* v___x_7567_; lean_object* v___x_7568_; lean_object* v___x_7569_; lean_object* v___x_7570_; uint8_t v___x_7571_; lean_object* v___x_7572_; lean_object* v___x_7573_; lean_object* v_key_7574_; lean_object* v___x_7575_; lean_object* v___x_7576_; 
v___x_7562_ = ((lean_object*)(l_Lake_CacheService_uploadRevisionOutputs___closed__0));
v___x_7563_ = lean_string_append(v___y_7561_, v___x_7562_);
v___x_7564_ = lean_string_append(v___x_7563_, v_rev_7551_);
v___x_7565_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_7566_ = lean_string_append(v___x_7564_, v___x_7565_);
v___x_7567_ = lean_string_append(v___x_7566_, v_outputs_7552_);
v___x_7568_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_7569_ = lean_string_append(v___x_7567_, v___x_7568_);
v___x_7570_ = lean_string_append(v___x_7569_, v_url_7559_);
v___x_7571_ = 1;
v___x_7572_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7572_, 0, v___x_7570_);
lean_ctor_set_uint8(v___x_7572_, sizeof(void*)*1, v___x_7571_);
lean_inc_ref(v_a_7557_);
v___x_7573_ = lean_apply_2(v_a_7557_, v___x_7572_, lean_box(0));
v_key_7574_ = lean_ctor_get(v_service_7553_, 1);
lean_inc_ref(v_key_7574_);
lean_dec_ref(v_service_7553_);
v___x_7575_ = ((lean_object*)(l_Lake_CacheService_mapContentType___closed__0));
v___x_7576_ = l___private_Lake_Config_Cache_0__Lake_uploadS3___at___00Lake_CacheService_uploadArtifact_spec__0(v_a_7557_, v_outputs_7552_, v___x_7575_, v_url_7559_, v_key_7574_);
return v___x_7576_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs___boxed(lean_object* v_rev_7578_, lean_object* v_outputs_7579_, lean_object* v_service_7580_, lean_object* v_scope_7581_, lean_object* v_platform_7582_, lean_object* v_toolchain_7583_, lean_object* v_a_7584_, lean_object* v___y_7585_){
_start:
{
lean_object* v_res_7586_; 
v_res_7586_ = l_Lake_CacheService_uploadRevisionOutputs(v_rev_7578_, v_outputs_7579_, v_service_7580_, v_scope_7581_, v_platform_7582_, v_toolchain_7583_, v_a_7584_);
lean_dec_ref(v_a_7584_);
lean_dec_ref(v_toolchain_7583_);
lean_dec_ref(v_platform_7582_);
lean_dec_ref(v_rev_7578_);
return v_res_7586_;
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
