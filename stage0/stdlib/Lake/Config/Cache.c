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
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(lean_object* v_inputName_10_, lean_object* v_line_11_, lean_object* v___y_12_){
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
lean_ctor_set(v___x_48_, 1, v___y_12_);
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
v___x_43_ = lean_array_push(v___y_12_, v___x_41_);
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
v___x_53_ = lean_array_get_size(v___y_12_);
v___x_54_ = lean_array_push(v___y_12_, v___x_52_);
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
v___x_22_ = lean_array_push(v___y_12_, v___x_20_);
v___x_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_21_);
lean_ctor_set(v___x_23_, 1, v___x_22_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion___boxed(lean_object* v_inputName_56_, lean_object* v_line_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_inputName_56_, v_line_57_, v___y_58_);
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
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(lean_object* v_h_698_, lean_object* v_fileName_699_, uint8_t v_platformIndependent_700_, lean_object* v_i_701_, lean_object* v_cache_702_, lean_object* v___y_703_){
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
v___x_710_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop_spec__0(v_fileName_699_, v_i_701_, v_cache_702_, v_a_706_, v_platformIndependent_700_, v___y_703_);
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
v___y_703_ = v_a_712_;
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
lean_ctor_set(v___x_716_, 1, v___y_703_);
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
v___x_721_ = lean_array_get_size(v___y_703_);
v___x_722_ = lean_array_push(v___y_703_, v___x_720_);
v___x_723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_721_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
return v___x_723_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop___boxed(lean_object* v_h_724_, lean_object* v_fileName_725_, lean_object* v_platformIndependent_726_, lean_object* v_i_727_, lean_object* v_cache_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
uint8_t v_platformIndependent_boxed_731_; lean_object* v_res_732_; 
v_platformIndependent_boxed_731_ = lean_unbox(v_platformIndependent_726_);
v_res_732_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore_loop(v_h_724_, v_fileName_725_, v_platformIndependent_boxed_731_, v_i_727_, v_cache_728_, v___y_729_);
lean_dec(v_h_724_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(lean_object* v_h_733_, lean_object* v_fileName_734_, uint8_t v_platformIndependent_735_, lean_object* v___y_736_){
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
v___x_740_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_fileName_734_, v_a_739_, v___y_736_);
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
v___x_758_ = lean_array_get_size(v___y_736_);
v___x_759_ = lean_array_push(v___y_736_, v___x_757_);
v___x_760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_760_, 0, v___x_758_);
lean_ctor_set(v___x_760_, 1, v___x_759_);
return v___x_760_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore___boxed(lean_object* v_h_761_, lean_object* v_fileName_762_, lean_object* v_platformIndependent_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
uint8_t v_platformIndependent_boxed_766_; lean_object* v_res_767_; 
v_platformIndependent_boxed_766_ = lean_unbox(v_platformIndependent_763_);
v_res_767_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_loadCore(v_h_761_, v_fileName_762_, v_platformIndependent_boxed_766_, v___y_764_);
lean_dec(v_h_761_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load(lean_object* v_file_769_, uint8_t v_platformIndependent_770_, lean_object* v___y_771_){
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
v___x_780_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_769_, v_a_779_, v___y_771_);
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
v___x_798_ = lean_array_get_size(v___y_771_);
v___x_799_ = lean_array_push(v___y_771_, v___x_797_);
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
v___x_805_ = lean_array_get_size(v___y_771_);
v___x_806_ = lean_array_push(v___y_771_, v___x_804_);
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
v___x_815_ = lean_array_get_size(v___y_771_);
v___x_816_ = lean_array_push(v___y_771_, v___x_814_);
v___x_817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_815_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
return v___x_817_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load___boxed(lean_object* v_file_818_, lean_object* v_platformIndependent_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
uint8_t v_platformIndependent_boxed_822_; lean_object* v_res_823_; 
v_platformIndependent_boxed_822_ = lean_unbox(v_platformIndependent_819_);
v_res_823_ = l_Lake_CacheMap_load(v_file_818_, v_platformIndependent_boxed_822_, v___y_820_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f(lean_object* v_file_824_, uint8_t v_platformIndependent_825_, lean_object* v___y_826_){
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
v___x_842_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_824_, v_a_838_, v___y_826_);
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
v___x_868_ = lean_array_get_size(v___y_826_);
v___x_869_ = lean_array_push(v___y_826_, v___x_867_);
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
v___x_874_ = lean_array_get_size(v___y_826_);
v___x_875_ = lean_array_push(v___y_826_, v___x_873_);
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
lean_ctor_set(v___x_879_, 1, v___y_826_);
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
v___x_886_ = lean_array_get_size(v___y_826_);
v___x_887_ = lean_array_push(v___y_826_, v___x_885_);
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
LEAN_EXPORT lean_object* l_Lake_CacheMap_load_x3f___boxed(lean_object* v_file_889_, lean_object* v_platformIndependent_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
uint8_t v_platformIndependent_boxed_893_; lean_object* v_res_894_; 
v_platformIndependent_boxed_893_ = lean_unbox(v_platformIndependent_890_);
v_res_894_ = l_Lake_CacheMap_load_x3f(v_file_889_, v_platformIndependent_boxed_893_, v___y_891_);
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
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(lean_object* v_h_1035_, lean_object* v_cache_1036_, uint8_t v_platformIndependent_1037_, lean_object* v___y_1038_){
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
lean_ctor_set(v___x_1042_, 1, v___y_1038_);
lean_ctor_set(v___x_1042_, 0, v___x_1046_);
v___x_1049_ = v___x_1042_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v___x_1046_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v___y_1038_);
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
v___x_1053_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__2(v_h_1035_, v_buckets_1040_, v___x_1051_, v___x_1052_, v___x_1046_, v___y_1038_);
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
lean_ctor_set(v___x_1058_, 1, v___y_1038_);
lean_ctor_set(v___x_1058_, 0, v___x_1062_);
v___x_1065_ = v___x_1058_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v___x_1062_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v___y_1038_);
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
v___x_1069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries_spec__3(v_h_1035_, v_buckets_1056_, v___x_1067_, v___x_1068_, v___x_1062_, v___y_1038_);
lean_dec_ref(v_buckets_1056_);
return v___x_1069_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries___boxed(lean_object* v_h_1072_, lean_object* v_cache_1073_, lean_object* v_platformIndependent_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
uint8_t v_platformIndependent_boxed_1077_; lean_object* v_res_1078_; 
v_platformIndependent_boxed_1077_ = lean_unbox(v_platformIndependent_1074_);
v_res_1078_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_h_1072_, v_cache_1073_, v_platformIndependent_boxed_1077_, v___y_1075_);
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
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile(lean_object* v_file_1104_, lean_object* v_cache_1105_, lean_object* v___y_1106_){
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
v___x_1123_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_checkSchemaVersion(v_file_1104_, v_a_1122_, v___y_1106_);
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
v___x_1162_ = lean_array_get_size(v___y_1106_);
v___x_1163_ = lean_array_push(v___y_1106_, v___x_1161_);
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
v___x_1168_ = lean_array_get_size(v___y_1106_);
v___x_1169_ = lean_array_push(v___y_1106_, v___x_1167_);
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
v___x_1178_ = lean_array_get_size(v___y_1106_);
v___x_1179_ = lean_array_push(v___y_1106_, v___x_1177_);
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
v___x_1185_ = lean_array_get_size(v___y_1106_);
v___x_1186_ = lean_array_push(v___y_1106_, v___x_1184_);
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
v___x_1192_ = lean_array_get_size(v___y_1106_);
v___x_1193_ = lean_array_push(v___y_1106_, v___x_1191_);
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
LEAN_EXPORT lean_object* l_Lake_CacheMap_updateFile___boxed(lean_object* v_file_1195_, lean_object* v_cache_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lake_CacheMap_updateFile(v_file_1195_, v_cache_1196_, v___y_1197_);
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
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile(lean_object* v_file_1206_, lean_object* v_cache_1207_, uint8_t v_platformIndependent_1208_, lean_object* v___y_1209_){
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
v___x_1219_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_writeCacheEntries(v_a_1214_, v_cache_1207_, v_platformIndependent_1208_, v___y_1209_);
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
v___x_1224_ = lean_array_get_size(v___y_1209_);
v___x_1225_ = lean_array_push(v___y_1209_, v___x_1223_);
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
v___x_1231_ = lean_array_get_size(v___y_1209_);
v___x_1232_ = lean_array_push(v___y_1209_, v___x_1230_);
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
v___x_1241_ = lean_array_get_size(v___y_1209_);
v___x_1242_ = lean_array_push(v___y_1209_, v___x_1240_);
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
v___x_1248_ = lean_array_get_size(v___y_1209_);
v___x_1249_ = lean_array_push(v___y_1209_, v___x_1247_);
v___x_1250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1248_);
lean_ctor_set(v___x_1250_, 1, v___x_1249_);
return v___x_1250_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_writeFile___boxed(lean_object* v_file_1251_, lean_object* v_cache_1252_, lean_object* v_platformIndependent_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
uint8_t v_platformIndependent_boxed_1256_; lean_object* v_res_1257_; 
v_platformIndependent_boxed_1256_ = lean_unbox(v_platformIndependent_1253_);
v_res_1257_ = l_Lake_CacheMap_writeFile(v_file_1251_, v_cache_1252_, v_platformIndependent_boxed_1256_, v___y_1254_);
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
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(lean_object* v_as_1391_, lean_object* v_o_1392_, lean_object* v___y_1393_){
_start:
{
switch(lean_obj_tag(v_o_1392_))
{
case 2:
{
lean_object* v_n_1395_; lean_object* v___x_1396_; 
v_n_1395_ = lean_ctor_get(v_o_1392_, 0);
lean_inc_ref(v_n_1395_);
lean_dec_ref_known(v_o_1392_, 1);
v___x_1396_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_1395_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; uint8_t v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_a_1397_);
lean_dec_ref_known(v___x_1396_, 1);
v___x_1398_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__0));
v___x_1399_ = lean_string_append(v___x_1398_, v_a_1397_);
lean_dec(v_a_1397_);
v___x_1400_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry___redArg___closed__1));
v___x_1401_ = lean_string_append(v___x_1399_, v___x_1400_);
v___x_1402_ = l_Lean_JsonNumber_toString(v_n_1395_);
v___x_1403_ = lean_string_append(v___x_1401_, v___x_1402_);
lean_dec_ref(v___x_1402_);
v___x_1404_ = 3;
v___x_1405_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1405_, 0, v___x_1403_);
lean_ctor_set_uint8(v___x_1405_, sizeof(void*)*1, v___x_1404_);
v___x_1406_ = lean_array_push(v___y_1393_, v___x_1405_);
v___x_1407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1407_, 0, v_as_1391_);
lean_ctor_set(v___x_1407_, 1, v___x_1406_);
return v___x_1407_;
}
else
{
lean_object* v_a_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; uint64_t v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
lean_dec_ref(v_n_1395_);
v_a_1408_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_a_1408_);
lean_dec_ref_known(v___x_1396_, 1);
v___x_1409_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__1));
v___x_1410_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
v___x_1411_ = lean_unbox_uint64(v_a_1408_);
lean_dec(v_a_1408_);
lean_ctor_set_uint64(v___x_1410_, sizeof(void*)*1, v___x_1411_);
v___x_1412_ = lean_array_push(v_as_1391_, v___x_1410_);
v___x_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
lean_ctor_set(v___x_1413_, 1, v___y_1393_);
return v___x_1413_;
}
}
case 3:
{
lean_object* v_s_1414_; lean_object* v___x_1415_; 
v_s_1414_ = lean_ctor_get(v_o_1392_, 0);
lean_inc_ref(v_s_1414_);
lean_dec_ref_known(v_o_1392_, 1);
v___x_1415_ = l_Lake_ArtifactDescr_ofFilePath_x3f(v_s_1414_);
lean_dec_ref(v_s_1414_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v_a_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; uint8_t v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
lean_inc(v_a_1416_);
lean_dec_ref_known(v___x_1415_, 1);
v___x_1417_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___closed__2));
v___x_1418_ = lean_string_append(v___x_1417_, v_a_1416_);
lean_dec(v_a_1416_);
v___x_1419_ = 3;
v___x_1420_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1420_, 0, v___x_1418_);
lean_ctor_set_uint8(v___x_1420_, sizeof(void*)*1, v___x_1419_);
v___x_1421_ = lean_array_push(v___y_1393_, v___x_1420_);
v___x_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1422_, 0, v_as_1391_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
return v___x_1422_;
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v_a_1423_ = lean_ctor_get(v___x_1415_, 0);
lean_inc(v_a_1423_);
lean_dec_ref_known(v___x_1415_, 1);
v___x_1424_ = lean_array_push(v_as_1391_, v_a_1423_);
v___x_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
lean_ctor_set(v___x_1425_, 1, v___y_1393_);
return v___x_1425_;
}
}
case 4:
{
lean_object* v_elems_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; 
v_elems_1426_ = lean_ctor_get(v_o_1392_, 0);
lean_inc_ref(v_elems_1426_);
lean_dec_ref_known(v_o_1392_, 1);
v___x_1427_ = lean_unsigned_to_nat(0u);
v___x_1428_ = lean_array_get_size(v_elems_1426_);
v___x_1429_ = lean_nat_dec_lt(v___x_1427_, v___x_1428_);
if (v___x_1429_ == 0)
{
lean_object* v___x_1430_; 
lean_dec_ref(v_elems_1426_);
v___x_1430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1430_, 0, v_as_1391_);
lean_ctor_set(v___x_1430_, 1, v___y_1393_);
return v___x_1430_;
}
else
{
uint8_t v___x_1431_; 
v___x_1431_ = lean_nat_dec_le(v___x_1428_, v___x_1428_);
if (v___x_1431_ == 0)
{
if (v___x_1429_ == 0)
{
lean_object* v___x_1432_; 
lean_dec_ref(v_elems_1426_);
v___x_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1432_, 0, v_as_1391_);
lean_ctor_set(v___x_1432_, 1, v___y_1393_);
return v___x_1432_;
}
else
{
size_t v___x_1433_; size_t v___x_1434_; lean_object* v___x_1435_; 
v___x_1433_ = ((size_t)0ULL);
v___x_1434_ = lean_usize_of_nat(v___x_1428_);
v___x_1435_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_elems_1426_, v___x_1433_, v___x_1434_, v_as_1391_, v___y_1393_);
lean_dec_ref(v_elems_1426_);
return v___x_1435_;
}
}
else
{
size_t v___x_1436_; size_t v___x_1437_; lean_object* v___x_1438_; 
v___x_1436_ = ((size_t)0ULL);
v___x_1437_ = lean_usize_of_nat(v___x_1428_);
v___x_1438_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_elems_1426_, v___x_1436_, v___x_1437_, v_as_1391_, v___y_1393_);
lean_dec_ref(v_elems_1426_);
return v___x_1438_;
}
}
}
case 5:
{
lean_object* v_kvPairs_1439_; lean_object* v___x_1440_; 
v_kvPairs_1439_ = lean_ctor_get(v_o_1392_, 0);
lean_inc(v_kvPairs_1439_);
lean_dec_ref_known(v_o_1392_, 1);
v___x_1440_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_as_1391_, v_kvPairs_1439_, v___y_1393_);
return v___x_1440_;
}
default: 
{
lean_object* v___x_1441_; 
lean_dec(v_o_1392_);
v___x_1441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1441_, 0, v_as_1391_);
lean_ctor_set(v___x_1441_, 1, v___y_1393_);
return v___x_1441_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(lean_object* v_as_1442_, size_t v_i_1443_, size_t v_stop_1444_, lean_object* v_b_1445_, lean_object* v___y_1446_){
_start:
{
uint8_t v___x_1448_; 
v___x_1448_ = lean_usize_dec_eq(v_i_1443_, v_stop_1444_);
if (v___x_1448_ == 0)
{
lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1449_ = lean_array_uget_borrowed(v_as_1442_, v_i_1443_);
lean_inc(v___x_1449_);
v___x_1450_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_b_1445_, v___x_1449_, v___y_1446_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v_a_1452_; size_t v___x_1453_; size_t v___x_1454_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_a_1451_);
v_a_1452_ = lean_ctor_get(v___x_1450_, 1);
lean_inc(v_a_1452_);
lean_dec_ref_known(v___x_1450_, 2);
v___x_1453_ = ((size_t)1ULL);
v___x_1454_ = lean_usize_add(v_i_1443_, v___x_1453_);
v_i_1443_ = v___x_1454_;
v_b_1445_ = v_a_1451_;
v___y_1446_ = v_a_1452_;
goto _start;
}
else
{
return v___x_1450_;
}
}
else
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1456_, 0, v_b_1445_);
lean_ctor_set(v___x_1456_, 1, v___y_1446_);
return v___x_1456_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0___boxed(lean_object* v_as_1457_, lean_object* v_i_1458_, lean_object* v_stop_1459_, lean_object* v_b_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_){
_start:
{
size_t v_i_boxed_1463_; size_t v_stop_boxed_1464_; lean_object* v_res_1465_; 
v_i_boxed_1463_ = lean_unbox_usize(v_i_1458_);
lean_dec(v_i_1458_);
v_stop_boxed_1464_ = lean_unbox_usize(v_stop_1459_);
lean_dec(v_stop_1459_);
v_res_1465_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__0(v_as_1457_, v_i_boxed_1463_, v_stop_boxed_1464_, v_b_1460_, v___y_1461_);
lean_dec_ref(v_as_1457_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1___boxed(lean_object* v_init_1466_, lean_object* v_x_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go_spec__1(v_init_1466_, v_x_1467_, v___y_1468_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go___boxed(lean_object* v_as_1471_, lean_object* v_o_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_as_1471_, v_o_1472_, v___y_1473_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(lean_object* v_x_1476_, lean_object* v_x_1477_, lean_object* v___y_1478_){
_start:
{
if (lean_obj_tag(v_x_1477_) == 0)
{
lean_object* v___x_1480_; 
v___x_1480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1480_, 0, v_x_1476_);
lean_ctor_set(v___x_1480_, 1, v___y_1478_);
return v___x_1480_;
}
else
{
lean_object* v_value_1481_; lean_object* v_tail_1482_; lean_object* v_out_1483_; lean_object* v___x_1484_; 
v_value_1481_ = lean_ctor_get(v_x_1477_, 1);
lean_inc(v_value_1481_);
v_tail_1482_ = lean_ctor_get(v_x_1477_, 2);
lean_inc(v_tail_1482_);
lean_dec_ref_known(v_x_1477_, 3);
v_out_1483_ = lean_ctor_get(v_value_1481_, 0);
lean_inc(v_out_1483_);
lean_dec(v_value_1481_);
v___x_1484_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_collectOutputDescrs_go(v_x_1476_, v_out_1483_, v___y_1478_);
if (lean_obj_tag(v___x_1484_) == 0)
{
lean_object* v_a_1485_; lean_object* v_a_1486_; 
v_a_1485_ = lean_ctor_get(v___x_1484_, 0);
lean_inc(v_a_1485_);
v_a_1486_ = lean_ctor_get(v___x_1484_, 1);
lean_inc(v_a_1486_);
lean_dec_ref_known(v___x_1484_, 2);
v_x_1476_ = v_a_1485_;
v_x_1477_ = v_tail_1482_;
v___y_1478_ = v_a_1486_;
goto _start;
}
else
{
lean_dec(v_tail_1482_);
return v___x_1484_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0___boxed(lean_object* v_x_1488_, lean_object* v_x_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(v_x_1488_, v_x_1489_, v___y_1490_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(lean_object* v_as_1493_, size_t v_i_1494_, size_t v_stop_1495_, lean_object* v_b_1496_, lean_object* v___y_1497_){
_start:
{
uint8_t v___x_1499_; 
v___x_1499_ = lean_usize_dec_eq(v_i_1494_, v_stop_1495_);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1500_ = lean_array_uget_borrowed(v_as_1493_, v_i_1494_);
lean_inc(v___x_1500_);
v___x_1501_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_CacheMap_collectOutputDescrs_spec__0(v_b_1496_, v___x_1500_, v___y_1497_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v_a_1503_; size_t v___x_1504_; size_t v___x_1505_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
v_a_1503_ = lean_ctor_get(v___x_1501_, 1);
lean_inc(v_a_1503_);
lean_dec_ref_known(v___x_1501_, 2);
v___x_1504_ = ((size_t)1ULL);
v___x_1505_ = lean_usize_add(v_i_1494_, v___x_1504_);
v_i_1494_ = v___x_1505_;
v_b_1496_ = v_a_1502_;
v___y_1497_ = v_a_1503_;
goto _start;
}
else
{
return v___x_1501_;
}
}
else
{
lean_object* v___x_1507_; 
v___x_1507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1507_, 0, v_b_1496_);
lean_ctor_set(v___x_1507_, 1, v___y_1497_);
return v___x_1507_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1___boxed(lean_object* v_as_1508_, lean_object* v_i_1509_, lean_object* v_stop_1510_, lean_object* v_b_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
size_t v_i_boxed_1514_; size_t v_stop_boxed_1515_; lean_object* v_res_1516_; 
v_i_boxed_1514_ = lean_unbox_usize(v_i_1509_);
lean_dec(v_i_1509_);
v_stop_boxed_1515_ = lean_unbox_usize(v_stop_1510_);
lean_dec(v_stop_1510_);
v_res_1516_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_as_1508_, v_i_boxed_1514_, v_stop_boxed_1515_, v_b_1511_, v___y_1512_);
lean_dec_ref(v_as_1508_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs(lean_object* v_map_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v_buckets_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1544_; 
v_buckets_1522_ = lean_ctor_get(v_map_1519_, 1);
v_isSharedCheck_1544_ = !lean_is_exclusive(v_map_1519_);
if (v_isSharedCheck_1544_ == 0)
{
lean_object* v_unused_1545_; 
v_unused_1545_ = lean_ctor_get(v_map_1519_, 0);
lean_dec(v_unused_1545_);
v___x_1524_ = v_map_1519_;
v_isShared_1525_ = v_isSharedCheck_1544_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_buckets_1522_);
lean_dec(v_map_1519_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1544_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___y_1530_; lean_object* v_a_1531_; lean_object* v___x_1537_; uint8_t v___x_1538_; 
v___x_1526_ = lean_unsigned_to_nat(0u);
v___x_1527_ = ((lean_object*)(l_Lake_CacheMap_collectOutputDescrs___closed__0));
v___x_1528_ = lean_array_get_size(v___y_1520_);
v___x_1537_ = lean_array_get_size(v_buckets_1522_);
v___x_1538_ = lean_nat_dec_lt(v___x_1526_, v___x_1537_);
if (v___x_1538_ == 0)
{
lean_object* v___x_1539_; 
lean_dec_ref(v_buckets_1522_);
lean_inc_ref(v___y_1520_);
v___x_1539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1527_);
lean_ctor_set(v___x_1539_, 1, v___y_1520_);
v___y_1530_ = v___x_1539_;
v_a_1531_ = v___y_1520_;
goto v___jp_1529_;
}
else
{
size_t v___x_1540_; size_t v___x_1541_; lean_object* v___x_1542_; 
v___x_1540_ = ((size_t)0ULL);
v___x_1541_ = lean_usize_of_nat(v___x_1537_);
v___x_1542_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_collectOutputDescrs_spec__1(v_buckets_1522_, v___x_1540_, v___x_1541_, v___x_1527_, v___y_1520_);
lean_dec_ref(v_buckets_1522_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; 
v_a_1543_ = lean_ctor_get(v___x_1542_, 1);
lean_inc(v_a_1543_);
v___y_1530_ = v___x_1542_;
v_a_1531_ = v_a_1543_;
goto v___jp_1529_;
}
else
{
lean_del_object(v___x_1524_);
return v___x_1542_;
}
}
v___jp_1529_:
{
lean_object* v___x_1532_; uint8_t v___x_1533_; 
v___x_1532_ = lean_array_get_size(v_a_1531_);
v___x_1533_ = lean_nat_dec_eq(v___x_1528_, v___x_1532_);
if (v___x_1533_ == 0)
{
lean_object* v___x_1535_; 
lean_dec_ref(v___y_1530_);
if (v_isShared_1525_ == 0)
{
lean_ctor_set_tag(v___x_1524_, 1);
lean_ctor_set(v___x_1524_, 1, v_a_1531_);
lean_ctor_set(v___x_1524_, 0, v___x_1528_);
v___x_1535_ = v___x_1524_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1528_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v_a_1531_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
else
{
lean_dec_ref(v_a_1531_);
lean_del_object(v___x_1524_);
return v___y_1530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheMap_collectOutputDescrs___boxed(lean_object* v_map_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Lake_CacheMap_collectOutputDescrs(v_map_1546_, v___y_1547_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk(lean_object* v_init_1550_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = lean_st_mk_ref(v_init_1550_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_mk___boxed(lean_object* v_init_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l_Lake_CacheRef_mk(v_init_1553_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f(uint64_t v_inputHash_1556_, lean_object* v_cache_1557_){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1559_ = lean_st_ref_take(v_cache_1557_);
v___x_1560_ = l_Lake_CacheMap_get_x3f(v_inputHash_1556_, v___x_1559_);
v___x_1561_ = lean_st_ref_put(v_cache_1557_, v___x_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_get_x3f___boxed(lean_object* v_inputHash_1562_, lean_object* v_cache_1563_, lean_object* v___y_1564_){
_start:
{
uint64_t v_inputHash_boxed_1565_; lean_object* v_res_1566_; 
v_inputHash_boxed_1565_ = lean_unbox_uint64(v_inputHash_1562_);
lean_dec_ref(v_inputHash_1562_);
v_res_1566_ = l_Lake_CacheRef_get_x3f(v_inputHash_boxed_1565_, v_cache_1563_);
lean_dec(v_cache_1563_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg(lean_object* v_inst_1567_, uint64_t v_inputHash_1568_, lean_object* v_val_1569_, lean_object* v_cache_1570_, uint8_t v_platformIndependent_1571_){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; 
v___x_1573_ = lean_st_ref_take(v_cache_1570_);
v___x_1574_ = lean_apply_1(v_inst_1567_, v_val_1569_);
v___x_1575_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1568_, v___x_1574_, v___x_1573_, v_platformIndependent_1571_);
v___x_1576_ = lean_st_ref_put(v_cache_1570_, v___x_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___redArg___boxed(lean_object* v_inst_1577_, lean_object* v_inputHash_1578_, lean_object* v_val_1579_, lean_object* v_cache_1580_, lean_object* v_platformIndependent_1581_, lean_object* v___y_1582_){
_start:
{
uint64_t v_inputHash_boxed_1583_; uint8_t v_platformIndependent_boxed_1584_; lean_object* v_res_1585_; 
v_inputHash_boxed_1583_ = lean_unbox_uint64(v_inputHash_1578_);
lean_dec_ref(v_inputHash_1578_);
v_platformIndependent_boxed_1584_ = lean_unbox(v_platformIndependent_1581_);
v_res_1585_ = l_Lake_CacheRef_insert___redArg(v_inst_1577_, v_inputHash_boxed_1583_, v_val_1579_, v_cache_1580_, v_platformIndependent_boxed_1584_);
lean_dec(v_cache_1580_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert(lean_object* v_00_u03b1_1586_, lean_object* v_inst_1587_, uint64_t v_inputHash_1588_, lean_object* v_val_1589_, lean_object* v_cache_1590_, uint8_t v_platformIndependent_1591_){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1593_ = lean_st_ref_take(v_cache_1590_);
v___x_1594_ = lean_apply_1(v_inst_1587_, v_val_1589_);
v___x_1595_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_inputHash_1588_, v___x_1594_, v___x_1593_, v_platformIndependent_1591_);
v___x_1596_ = lean_st_ref_put(v_cache_1590_, v___x_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheRef_insert___boxed(lean_object* v_00_u03b1_1597_, lean_object* v_inst_1598_, lean_object* v_inputHash_1599_, lean_object* v_val_1600_, lean_object* v_cache_1601_, lean_object* v_platformIndependent_1602_, lean_object* v___y_1603_){
_start:
{
uint64_t v_inputHash_boxed_1604_; uint8_t v_platformIndependent_boxed_1605_; lean_object* v_res_1606_; 
v_inputHash_boxed_1604_ = lean_unbox_uint64(v_inputHash_1599_);
lean_dec_ref(v_inputHash_1599_);
v_platformIndependent_boxed_1605_ = lean_unbox(v_platformIndependent_1602_);
v_res_1606_ = l_Lake_CacheRef_insert(v_00_u03b1_1597_, v_inst_1598_, v_inputHash_boxed_1604_, v_val_1600_, v_cache_1601_, v_platformIndependent_boxed_1605_);
lean_dec(v_cache_1601_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString(lean_object* v_s_1609_){
_start:
{
lean_inc_ref(v_s_1609_);
return v_s_1609_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_ofString___boxed(lean_object* v_s_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lake_CacheServiceName_ofString(v_s_1610_);
lean_dec_ref(v_s_1610_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString(lean_object* v_self_1612_){
_start:
{
lean_inc_ref(v_self_1612_);
return v_self_1612_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceName_toString___boxed(lean_object* v_self_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Lake_CacheServiceName_toString(v_self_1613_);
lean_dec_ref(v_self_1613_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_fromJson_x3f(lean_object* v_j_1617_){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = l_Lean_Json_getStr_x3f(v_j_1617_);
if (lean_obj_tag(v___x_1618_) == 0)
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1626_; 
v_a_1619_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1621_ = v___x_1618_;
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1618_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1624_; 
if (v_isShared_1622_ == 0)
{
v___x_1624_ = v___x_1621_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1619_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
v_a_1627_ = lean_ctor_get(v___x_1618_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1618_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1618_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1618_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceName_toJson(lean_object* v_self_1637_){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1638_, 0, v_self_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(lean_object* v_x_1641_){
_start:
{
if (lean_obj_tag(v_x_1641_) == 0)
{
lean_object* v___x_1642_; 
v___x_1642_ = lean_unsigned_to_nat(0u);
return v___x_1642_;
}
else
{
lean_object* v___x_1643_; 
v___x_1643_ = lean_unsigned_to_nat(1u);
return v___x_1643_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx___boxed(lean_object* v_x_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorIdx(v_x_1644_);
lean_dec_ref(v_x_1644_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(lean_object* v_t_1646_, lean_object* v_k_1647_){
_start:
{
lean_object* v_s_1648_; lean_object* v___x_1649_; 
v_s_1648_ = lean_ctor_get(v_t_1646_, 0);
lean_inc_ref(v_s_1648_);
lean_dec_ref(v_t_1646_);
v___x_1649_ = lean_apply_1(v_k_1647_, v_s_1648_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(lean_object* v_motive_1650_, lean_object* v_ctorIdx_1651_, lean_object* v_t_1652_, lean_object* v_h_1653_, lean_object* v_k_1654_){
_start:
{
lean_object* v___x_1655_; 
v___x_1655_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1652_, v_k_1654_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___boxed(lean_object* v_motive_1656_, lean_object* v_ctorIdx_1657_, lean_object* v_t_1658_, lean_object* v_h_1659_, lean_object* v_k_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim(v_motive_1656_, v_ctorIdx_1657_, v_t_1658_, v_h_1659_, v_k_1660_);
lean_dec(v_ctorIdx_1657_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim___redArg(lean_object* v_t_1662_, lean_object* v_str_1663_){
_start:
{
lean_object* v___x_1664_; 
v___x_1664_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1662_, v_str_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_str_elim(lean_object* v_motive_1665_, lean_object* v_t_1666_, lean_object* v_h_1667_, lean_object* v_str_1668_){
_start:
{
lean_object* v___x_1669_; 
v___x_1669_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1666_, v_str_1668_);
return v___x_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim___redArg(lean_object* v_t_1670_, lean_object* v_repo_1671_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1670_, v_repo_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_repo_elim(lean_object* v_motive_1673_, lean_object* v_t_1674_, lean_object* v_h_1675_, lean_object* v_repo_1676_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScopeImpl_ctorElim___redArg(v_t_1674_, v_repo_1676_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofString(lean_object* v_s_1678_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v_s_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_ofRepo(lean_object* v_fullName_1680_){
_start:
{
lean_object* v___x_1681_; 
v___x_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1681_, 0, v_fullName_1680_);
return v___x_1681_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheServiceScope_isRepo(lean_object* v_self_1682_){
_start:
{
if (lean_obj_tag(v_self_1682_) == 1)
{
uint8_t v___x_1683_; 
v___x_1683_ = 1;
return v___x_1683_;
}
else
{
uint8_t v___x_1684_; 
v___x_1684_ = 0;
return v___x_1684_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_isRepo___boxed(lean_object* v_self_1685_){
_start:
{
uint8_t v_res_1686_; lean_object* v_r_1687_; 
v_res_1686_ = l_Lake_CacheServiceScope_isRepo(v_self_1685_);
lean_dec_ref(v_self_1685_);
v_r_1687_ = lean_box(v_res_1686_);
return v_r_1687_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString(lean_object* v_self_1688_){
_start:
{
lean_object* v_s_1689_; 
v_s_1689_ = lean_ctor_get(v_self_1688_, 0);
lean_inc_ref(v_s_1689_);
return v_s_1689_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheServiceScope_toString___boxed(lean_object* v_self_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = l_Lake_CacheServiceScope_toString(v_self_1690_);
lean_dec_ref(v_self_1690_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(lean_object* v_self_1694_){
_start:
{
lean_object* v_s_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1702_; 
v_s_1695_ = lean_ctor_get(v_self_1694_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v_self_1694_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1697_ = v_self_1694_;
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_s_1695_);
lean_dec(v_self_1694_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1700_; 
if (v_isShared_1698_ == 0)
{
lean_ctor_set_tag(v___x_1697_, 3);
v___x_1700_ = v___x_1697_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_s_1695_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_ofData(lean_object* v_data_1712_){
_start:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1713_ = lean_box(0);
v___x_1714_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1714_, 0, v_data_1712_);
lean_ctor_set(v___x_1714_, 1, v___x_1713_);
lean_ctor_set(v___x_1714_, 2, v___x_1713_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(lean_object* v_x_1715_){
_start:
{
if (lean_obj_tag(v_x_1715_) == 0)
{
lean_object* v___x_1716_; 
v___x_1716_ = lean_box(0);
return v___x_1716_;
}
else
{
lean_object* v_val_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
v_val_1717_ = lean_ctor_get(v_x_1715_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v_x_1715_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v_x_1715_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_val_1717_);
lean_dec(v_x_1715_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
lean_ctor_set_tag(v___x_1719_, 3);
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_val_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
static lean_object* _init_l_Lake_CacheOutput_toJson___closed__3(void){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1729_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__2));
v___x_1730_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__1));
v___x_1731_ = lean_box(1);
v___x_1732_ = l_Lake_JsonObject_insertJson(v___x_1731_, v___x_1730_, v___x_1729_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_toJson(lean_object* v_out_1736_){
_start:
{
lean_object* v_data_1737_; lean_object* v_service_x3f_1738_; lean_object* v_scope_x3f_1739_; lean_object* v_obj_1741_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v_obj_1748_; 
v_data_1737_ = lean_ctor_get(v_out_1736_, 0);
lean_inc(v_data_1737_);
v_service_x3f_1738_ = lean_ctor_get(v_out_1736_, 1);
lean_inc(v_service_x3f_1738_);
v_scope_x3f_1739_ = lean_ctor_get(v_out_1736_, 2);
lean_inc(v_scope_x3f_1739_);
lean_dec_ref(v_out_1736_);
v___x_1745_ = lean_obj_once(&l_Lake_CacheOutput_toJson___closed__3, &l_Lake_CacheOutput_toJson___closed__3_once, _init_l_Lake_CacheOutput_toJson___closed__3);
v___x_1746_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__4));
v___x_1747_ = l_Lean_Option_toJson___at___00Lake_CacheOutput_toJson_spec__0(v_service_x3f_1738_);
v_obj_1748_ = l_Lake_JsonObject_insertJson(v___x_1745_, v___x_1746_, v___x_1747_);
if (lean_obj_tag(v_scope_x3f_1739_) == 1)
{
lean_object* v_val_1749_; lean_object* v___y_1751_; uint8_t v___x_1754_; 
v_val_1749_ = lean_ctor_get(v_scope_x3f_1739_, 0);
lean_inc(v_val_1749_);
lean_dec_ref_known(v_scope_x3f_1739_, 1);
v___x_1754_ = l_Lake_CacheServiceScope_isRepo(v_val_1749_);
if (v___x_1754_ == 0)
{
lean_object* v___x_1755_; 
v___x_1755_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__5));
v___y_1751_ = v___x_1755_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1756_; 
v___x_1756_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__6));
v___y_1751_ = v___x_1756_;
goto v___jp_1750_;
}
v___jp_1750_:
{
lean_object* v___x_1752_; lean_object* v_obj_1753_; 
v___x_1752_ = l___private_Lake_Config_Cache_0__Lake_CacheServiceScope_toJson(v_val_1749_);
lean_inc_ref(v___y_1751_);
v_obj_1753_ = l_Lake_JsonObject_insertJson(v_obj_1748_, v___y_1751_, v___x_1752_);
v_obj_1741_ = v_obj_1753_;
goto v___jp_1740_;
}
}
else
{
lean_dec(v_scope_x3f_1739_);
v_obj_1741_ = v_obj_1748_;
goto v___jp_1740_;
}
v___jp_1740_:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1742_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_1743_ = l_Lake_JsonObject_insertJson(v_obj_1741_, v___x_1742_, v_data_1737_);
v___x_1744_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1743_);
return v___x_1744_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(lean_object* v_x_1761_){
_start:
{
if (lean_obj_tag(v_x_1761_) == 0)
{
lean_object* v___x_1762_; 
v___x_1762_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0));
return v___x_1762_;
}
else
{
lean_object* v___x_1763_; 
v___x_1763_ = l_Lean_Json_getStr_x3f(v_x_1761_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1763_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1763_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
else
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1780_; 
v_a_1772_ = lean_ctor_get(v___x_1763_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1774_ = v___x_1763_;
v_isShared_1775_ = v_isSharedCheck_1780_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v___x_1763_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1780_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1776_; lean_object* v___x_1778_; 
v___x_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1776_, 0, v_a_1772_);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 0, v___x_1776_);
v___x_1778_ = v___x_1774_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1776_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(lean_object* v_x_1781_){
_start:
{
if (lean_obj_tag(v_x_1781_) == 0)
{
lean_object* v___x_1782_; 
v___x_1782_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1___closed__0));
return v___x_1782_;
}
else
{
lean_object* v___x_1783_; 
v___x_1783_ = l_Lean_Json_getStr_x3f(v_x_1781_);
if (lean_obj_tag(v___x_1783_) == 0)
{
lean_object* v_a_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1791_; 
v_a_1784_ = lean_ctor_get(v___x_1783_, 0);
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1791_ == 0)
{
v___x_1786_ = v___x_1783_;
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_a_1784_);
lean_dec(v___x_1783_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___x_1789_; 
if (v_isShared_1787_ == 0)
{
v___x_1789_ = v___x_1786_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_a_1784_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
return v___x_1789_;
}
}
}
else
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1800_; 
v_a_1792_ = lean_ctor_get(v___x_1783_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1794_ = v___x_1783_;
v_isShared_1795_ = v_isSharedCheck_1800_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v___x_1783_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1800_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1796_; lean_object* v___x_1798_; 
v___x_1796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1796_, 0, v_a_1792_);
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 0, v___x_1796_);
v___x_1798_ = v___x_1794_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v___x_1796_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(lean_object* v_k_1801_, lean_object* v_t_1802_){
_start:
{
if (lean_obj_tag(v_t_1802_) == 0)
{
lean_object* v_k_1803_; lean_object* v_l_1804_; lean_object* v_r_1805_; uint8_t v___x_1806_; 
v_k_1803_ = lean_ctor_get(v_t_1802_, 1);
v_l_1804_ = lean_ctor_get(v_t_1802_, 3);
v_r_1805_ = lean_ctor_get(v_t_1802_, 4);
v___x_1806_ = lean_string_compare(v_k_1801_, v_k_1803_);
switch(v___x_1806_)
{
case 0:
{
v_t_1802_ = v_l_1804_;
goto _start;
}
case 1:
{
uint8_t v___x_1808_; 
v___x_1808_ = 1;
return v___x_1808_;
}
default: 
{
v_t_1802_ = v_r_1805_;
goto _start;
}
}
}
else
{
uint8_t v___x_1810_; 
v___x_1810_ = 0;
return v___x_1810_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg___boxed(lean_object* v_k_1811_, lean_object* v_t_1812_){
_start:
{
uint8_t v_res_1813_; lean_object* v_r_1814_; 
v_res_1813_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v_k_1811_, v_t_1812_);
lean_dec(v_t_1812_);
lean_dec_ref(v_k_1811_);
v_r_1814_ = lean_box(v_res_1813_);
return v_r_1814_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheOutput_fromJson_x3f(lean_object* v_json_1821_){
_start:
{
if (lean_obj_tag(v_json_1821_) == 5)
{
lean_object* v_kvPairs_1826_; lean_object* v___x_1827_; uint8_t v___x_1828_; 
v_kvPairs_1826_ = lean_ctor_get(v_json_1821_, 0);
v___x_1827_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__1));
v___x_1828_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v___x_1827_, v_kvPairs_1826_);
if (v___x_1828_ == 0)
{
goto v___jp_1822_;
}
else
{
lean_object* v___x_1829_; lean_object* v___x_1830_; 
lean_inc(v_kvPairs_1826_);
lean_dec_ref_known(v_json_1821_, 1);
v___x_1829_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_1830_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1826_, v___x_1829_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v___x_1831_; 
lean_dec(v_kvPairs_1826_);
v___x_1831_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__1));
return v___x_1831_;
}
else
{
lean_object* v_val_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1950_; 
v_val_1832_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1834_ = v___x_1830_;
v_isShared_1835_ = v_isSharedCheck_1950_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_val_1832_);
lean_dec(v___x_1830_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1950_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___y_1837_; lean_object* v_a_1838_; lean_object* v___y_1844_; lean_object* v___y_1847_; lean_object* v_a_1887_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1926_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__4));
v___x_1927_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1826_, v___x_1926_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v___x_1928_; 
v___x_1928_ = lean_box(0);
v_a_1887_ = v___x_1928_;
goto v___jp_1886_;
}
else
{
lean_object* v_val_1929_; lean_object* v___x_1930_; 
v_val_1929_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_val_1929_);
lean_dec_ref_known(v___x_1927_, 1);
v___x_1930_ = l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__2(v_val_1929_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1940_; 
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
lean_dec(v_kvPairs_1826_);
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1933_ = v___x_1930_;
v_isShared_1934_ = v_isSharedCheck_1940_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1930_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1940_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1938_; 
v___x_1935_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__4));
v___x_1936_ = lean_string_append(v___x_1935_, v_a_1931_);
lean_dec(v_a_1931_);
if (v_isShared_1934_ == 0)
{
lean_ctor_set(v___x_1933_, 0, v___x_1936_);
v___x_1938_ = v___x_1933_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v___x_1936_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
else
{
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
lean_dec(v_kvPairs_1826_);
v_a_1941_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1930_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1930_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
lean_ctor_set_tag(v___x_1943_, 0);
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
else
{
lean_object* v_a_1949_; 
v_a_1949_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1949_);
lean_dec_ref_known(v___x_1930_, 1);
v_a_1887_ = v_a_1949_;
goto v___jp_1886_;
}
}
}
v___jp_1836_:
{
lean_object* v___x_1839_; lean_object* v___x_1841_; 
v___x_1839_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1839_, 0, v_val_1832_);
lean_ctor_set(v___x_1839_, 1, v___y_1837_);
lean_ctor_set(v___x_1839_, 2, v_a_1838_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v___x_1839_);
v___x_1841_ = v___x_1834_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
v___jp_1843_:
{
lean_object* v___x_1845_; 
v___x_1845_ = lean_box(0);
v___y_1837_ = v___y_1844_;
v_a_1838_ = v___x_1845_;
goto v___jp_1836_;
}
v___jp_1846_:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1848_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__5));
v___x_1849_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1826_, v___x_1848_);
lean_dec(v_kvPairs_1826_);
if (lean_obj_tag(v___x_1849_) == 0)
{
v___y_1844_ = v___y_1847_;
goto v___jp_1843_;
}
else
{
lean_object* v_val_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1885_; 
v_val_1850_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1852_ = v___x_1849_;
v_isShared_1853_ = v_isSharedCheck_1885_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_val_1850_);
lean_dec(v___x_1849_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1885_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1854_; 
v___x_1854_ = l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(v_val_1850_);
if (lean_obj_tag(v___x_1854_) == 0)
{
lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1864_; 
lean_del_object(v___x_1852_);
lean_dec(v___y_1847_);
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
v_a_1855_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1857_ = v___x_1854_;
v_isShared_1858_ = v_isSharedCheck_1864_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_dec(v___x_1854_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1864_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1862_; 
v___x_1859_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__2));
v___x_1860_ = lean_string_append(v___x_1859_, v_a_1855_);
lean_dec(v_a_1855_);
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 0, v___x_1860_);
v___x_1862_ = v___x_1857_;
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
}
else
{
if (lean_obj_tag(v___x_1854_) == 0)
{
lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1872_; 
lean_del_object(v___x_1852_);
lean_dec(v___y_1847_);
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
v_a_1865_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1867_ = v___x_1854_;
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1854_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1872_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1870_; 
if (v_isShared_1868_ == 0)
{
lean_ctor_set_tag(v___x_1867_, 0);
v___x_1870_ = v___x_1867_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_a_1865_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
return v___x_1870_;
}
}
}
else
{
lean_object* v_a_1873_; 
v_a_1873_ = lean_ctor_get(v___x_1854_, 0);
lean_inc(v_a_1873_);
lean_dec_ref_known(v___x_1854_, 1);
if (lean_obj_tag(v_a_1873_) == 1)
{
lean_object* v_val_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1884_; 
v_val_1874_ = lean_ctor_get(v_a_1873_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v_a_1873_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1876_ = v_a_1873_;
v_isShared_1877_ = v_isSharedCheck_1884_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_val_1874_);
lean_dec(v_a_1873_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1884_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1853_ == 0)
{
lean_ctor_set_tag(v___x_1852_, 0);
lean_ctor_set(v___x_1852_, 0, v_val_1874_);
v___x_1879_ = v___x_1852_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_val_1874_);
v___x_1879_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
lean_object* v___x_1881_; 
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 0, v___x_1879_);
v___x_1881_ = v___x_1876_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v___x_1879_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
v___y_1837_ = v___y_1847_;
v_a_1838_ = v___x_1881_;
goto v___jp_1836_;
}
}
}
}
else
{
lean_dec(v_a_1873_);
lean_del_object(v___x_1852_);
v___y_1844_ = v___y_1847_;
goto v___jp_1843_;
}
}
}
}
}
}
v___jp_1886_:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1888_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__6));
v___x_1889_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_1826_, v___x_1888_);
if (lean_obj_tag(v___x_1889_) == 0)
{
v___y_1847_ = v_a_1887_;
goto v___jp_1846_;
}
else
{
lean_object* v_val_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1925_; 
v_val_1890_ = lean_ctor_get(v___x_1889_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1889_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1892_ = v___x_1889_;
v_isShared_1893_ = v_isSharedCheck_1925_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_val_1890_);
lean_dec(v___x_1889_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1925_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lean_Option_fromJson_x3f___at___00Lake_CacheOutput_fromJson_x3f_spec__1(v_val_1890_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1904_; 
lean_del_object(v___x_1892_);
lean_dec(v_a_1887_);
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
lean_dec(v_kvPairs_1826_);
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1897_ = v___x_1894_;
v_isShared_1898_ = v_isSharedCheck_1904_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1894_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1904_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1902_; 
v___x_1899_ = ((lean_object*)(l_Lake_CacheOutput_fromJson_x3f___closed__3));
v___x_1900_ = lean_string_append(v___x_1899_, v_a_1895_);
lean_dec(v_a_1895_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v___x_1900_);
v___x_1902_ = v___x_1897_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
else
{
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1912_; 
lean_del_object(v___x_1892_);
lean_dec(v_a_1887_);
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
lean_dec(v_kvPairs_1826_);
v_a_1905_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1907_ = v___x_1894_;
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1894_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1910_; 
if (v_isShared_1908_ == 0)
{
lean_ctor_set_tag(v___x_1907_, 0);
v___x_1910_ = v___x_1907_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_a_1905_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
else
{
lean_object* v_a_1913_; 
v_a_1913_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1894_, 1);
if (lean_obj_tag(v_a_1913_) == 1)
{
lean_object* v_val_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1924_; 
lean_dec(v_kvPairs_1826_);
v_val_1914_ = lean_ctor_get(v_a_1913_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v_a_1913_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1916_ = v_a_1913_;
v_isShared_1917_ = v_isSharedCheck_1924_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_val_1914_);
lean_dec(v_a_1913_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1924_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 0, v_val_1914_);
v___x_1919_ = v___x_1892_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_val_1914_);
v___x_1919_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
lean_object* v___x_1921_; 
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 0, v___x_1919_);
v___x_1921_ = v___x_1916_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v___x_1919_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
v___y_1837_ = v_a_1887_;
v_a_1838_ = v___x_1921_;
goto v___jp_1836_;
}
}
}
}
else
{
lean_dec(v_a_1913_);
lean_del_object(v___x_1892_);
v___y_1847_ = v_a_1887_;
goto v___jp_1846_;
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
goto v___jp_1822_;
}
v___jp_1822_:
{
lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1823_ = lean_box(0);
v___x_1824_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1824_, 0, v_json_1821_);
lean_ctor_set(v___x_1824_, 1, v___x_1823_);
lean_ctor_set(v___x_1824_, 2, v___x_1823_);
v___x_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
return v___x_1825_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(lean_object* v_00_u03b2_1951_, lean_object* v_k_1952_, lean_object* v_t_1953_){
_start:
{
uint8_t v___x_1954_; 
v___x_1954_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___redArg(v_k_1952_, v_t_1953_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0___boxed(lean_object* v_00_u03b2_1955_, lean_object* v_k_1956_, lean_object* v_t_1957_){
_start:
{
uint8_t v_res_1958_; lean_object* v_r_1959_; 
v_res_1958_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lake_CacheOutput_fromJson_x3f_spec__0(v_00_u03b2_1955_, v_k_1956_, v_t_1957_);
lean_dec(v_t_1957_);
lean_dec_ref(v_k_1956_);
v_r_1959_ = lean_box(v_res_1958_);
return v_r_1959_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactDir(lean_object* v_cache_1966_){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_1968_ = l_System_FilePath_join(v_cache_1966_, v___x_1967_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath(lean_object* v_cache_1970_, uint64_t v_contentHash_1971_, lean_object* v_ext_1972_){
_start:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; 
v___x_1973_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_1974_ = l_System_FilePath_join(v_cache_1970_, v___x_1973_);
v___x_1975_ = lean_string_utf8_byte_size(v_ext_1972_);
v___x_1976_ = lean_unsigned_to_nat(0u);
v___x_1977_ = lean_nat_dec_eq(v___x_1975_, v___x_1976_);
if (v___x_1977_ == 0)
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
v___x_1978_ = l_Lake_lowerHexUInt64(v_contentHash_1971_);
v___x_1979_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_1980_ = lean_string_append(v___x_1978_, v___x_1979_);
v___x_1981_ = lean_string_append(v___x_1980_, v_ext_1972_);
v___x_1982_ = l_System_FilePath_join(v___x_1974_, v___x_1981_);
return v___x_1982_;
}
else
{
lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1983_ = l_Lake_lowerHexUInt64(v_contentHash_1971_);
v___x_1984_ = l_System_FilePath_join(v___x_1974_, v___x_1983_);
return v___x_1984_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_artifactPath___boxed(lean_object* v_cache_1985_, lean_object* v_contentHash_1986_, lean_object* v_ext_1987_){
_start:
{
uint64_t v_contentHash_boxed_1988_; lean_object* v_res_1989_; 
v_contentHash_boxed_1988_ = lean_unbox_uint64(v_contentHash_1986_);
lean_dec_ref(v_contentHash_1986_);
v_res_1989_ = l_Lake_Cache_artifactPath(v_cache_1985_, v_contentHash_boxed_1988_, v_ext_1987_);
lean_dec_ref(v_ext_1987_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f(lean_object* v_cache_1990_, lean_object* v_descr_1991_){
_start:
{
uint64_t v_hash_1993_; lean_object* v_ext_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___y_1998_; lean_object* v___x_2012_; lean_object* v___x_2013_; uint8_t v___x_2014_; 
v_hash_1993_ = lean_ctor_get_uint64(v_descr_1991_, sizeof(void*)*1);
v_ext_1994_ = lean_ctor_get(v_descr_1991_, 0);
v___x_1995_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_1996_ = l_System_FilePath_join(v_cache_1990_, v___x_1995_);
v___x_2012_ = lean_string_utf8_byte_size(v_ext_1994_);
v___x_2013_ = lean_unsigned_to_nat(0u);
v___x_2014_ = lean_nat_dec_eq(v___x_2012_, v___x_2013_);
if (v___x_2014_ == 0)
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2015_ = l_Lake_lowerHexUInt64(v_hash_1993_);
v___x_2016_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2017_ = lean_string_append(v___x_2015_, v___x_2016_);
v___x_2018_ = lean_string_append(v___x_2017_, v_ext_1994_);
v___y_1998_ = v___x_2018_;
goto v___jp_1997_;
}
else
{
lean_object* v___x_2019_; 
v___x_2019_ = l_Lake_lowerHexUInt64(v_hash_1993_);
v___y_1998_ = v___x_2019_;
goto v___jp_1997_;
}
v___jp_1997_:
{
lean_object* v_path_1999_; lean_object* v___x_2000_; 
v_path_1999_ = l_System_FilePath_join(v___x_1996_, v___y_1998_);
v___x_2000_ = lean_io_metadata(v_path_1999_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2010_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2003_ = v___x_2000_;
v_isShared_2004_ = v_isSharedCheck_2010_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_a_2001_);
lean_dec(v___x_2000_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2010_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v_modified_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
v_modified_2005_ = lean_ctor_get(v_a_2001_, 1);
lean_inc_ref(v_modified_2005_);
lean_dec(v_a_2001_);
lean_inc_ref(v_path_1999_);
v___x_2006_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2006_, 0, v_descr_1991_);
lean_ctor_set(v___x_2006_, 1, v_path_1999_);
lean_ctor_set(v___x_2006_, 2, v_path_1999_);
lean_ctor_set(v___x_2006_, 3, v_modified_2005_);
if (v_isShared_2004_ == 0)
{
lean_ctor_set_tag(v___x_2003_, 1);
lean_ctor_set(v___x_2003_, 0, v___x_2006_);
v___x_2008_ = v___x_2003_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_2006_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
}
else
{
lean_object* v___x_2011_; 
lean_dec_ref_known(v___x_2000_, 1);
lean_dec_ref(v_path_1999_);
lean_dec_ref(v_descr_1991_);
v___x_2011_ = lean_box(0);
return v___x_2011_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact_x3f___boxed(lean_object* v_cache_2020_, lean_object* v_descr_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Lake_Cache_getArtifact_x3f(v_cache_2020_, v_descr_2021_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact(lean_object* v_cache_2026_, lean_object* v_descr_2027_){
_start:
{
uint64_t v_hash_2029_; lean_object* v_ext_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___y_2034_; lean_object* v___x_2063_; lean_object* v___x_2064_; uint8_t v___x_2065_; 
v_hash_2029_ = lean_ctor_get_uint64(v_descr_2027_, sizeof(void*)*1);
v_ext_2030_ = lean_ctor_get(v_descr_2027_, 0);
v___x_2031_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2032_ = l_System_FilePath_join(v_cache_2026_, v___x_2031_);
v___x_2063_ = lean_string_utf8_byte_size(v_ext_2030_);
v___x_2064_ = lean_unsigned_to_nat(0u);
v___x_2065_ = lean_nat_dec_eq(v___x_2063_, v___x_2064_);
if (v___x_2065_ == 0)
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2066_ = l_Lake_lowerHexUInt64(v_hash_2029_);
v___x_2067_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_2068_ = lean_string_append(v___x_2066_, v___x_2067_);
v___x_2069_ = lean_string_append(v___x_2068_, v_ext_2030_);
v___y_2034_ = v___x_2069_;
goto v___jp_2033_;
}
else
{
lean_object* v___x_2070_; 
v___x_2070_ = l_Lake_lowerHexUInt64(v_hash_2029_);
v___y_2034_ = v___x_2070_;
goto v___jp_2033_;
}
v___jp_2033_:
{
lean_object* v_path_2035_; lean_object* v___x_2036_; 
v_path_2035_ = l_System_FilePath_join(v___x_2032_, v___y_2034_);
v___x_2036_ = lean_io_metadata(v_path_2035_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2046_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2039_ = v___x_2036_;
v_isShared_2040_ = v_isSharedCheck_2046_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v___x_2036_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2046_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v_modified_2041_; lean_object* v___x_2042_; lean_object* v___x_2044_; 
v_modified_2041_ = lean_ctor_get(v_a_2037_, 1);
lean_inc_ref(v_modified_2041_);
lean_dec(v_a_2037_);
lean_inc_ref(v_path_2035_);
v___x_2042_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2042_, 0, v_descr_2027_);
lean_ctor_set(v___x_2042_, 1, v_path_2035_);
lean_ctor_set(v___x_2042_, 2, v_path_2035_);
lean_ctor_set(v___x_2042_, 3, v_modified_2041_);
if (v_isShared_2040_ == 0)
{
lean_ctor_set(v___x_2039_, 0, v___x_2042_);
v___x_2044_ = v___x_2039_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2042_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2062_; 
lean_dec_ref(v_descr_2027_);
v_a_2047_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2049_ = v___x_2036_;
v_isShared_2050_ = v_isSharedCheck_2062_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2036_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2062_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
if (lean_obj_tag(v_a_2047_) == 11)
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2054_; 
lean_dec_ref_known(v_a_2047_, 2);
v___x_2051_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__0));
v___x_2052_ = lean_string_append(v___x_2051_, v_path_2035_);
lean_dec_ref(v_path_2035_);
if (v_isShared_2050_ == 0)
{
lean_ctor_set(v___x_2049_, 0, v___x_2052_);
v___x_2054_ = v___x_2049_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v___x_2052_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
else
{
lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2060_; 
lean_dec_ref(v_path_2035_);
v___x_2056_ = ((lean_object*)(l_Lake_Cache_getArtifact___closed__1));
v___x_2057_ = lean_io_error_to_string(v_a_2047_);
v___x_2058_ = lean_string_append(v___x_2056_, v___x_2057_);
lean_dec_ref(v___x_2057_);
if (v_isShared_2050_ == 0)
{
lean_ctor_set(v___x_2049_, 0, v___x_2058_);
v___x_2060_ = v___x_2049_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2058_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_getArtifact___boxed(lean_object* v_cache_2071_, lean_object* v_descr_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Lake_Cache_getArtifact(v_cache_2071_, v_descr_2072_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsDir(lean_object* v_cache_2076_){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2077_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2078_ = l_System_FilePath_join(v_cache_2076_, v___x_2077_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile(lean_object* v_cache_2080_, lean_object* v_scope_2081_, uint64_t v_inputHash_2082_){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2083_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2084_ = l_System_FilePath_join(v_cache_2080_, v___x_2083_);
v___x_2085_ = l_System_FilePath_join(v___x_2084_, v_scope_2081_);
v___x_2086_ = l_Lake_lowerHexUInt64(v_inputHash_2082_);
v___x_2087_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2088_ = lean_string_append(v___x_2086_, v___x_2087_);
v___x_2089_ = l_System_FilePath_join(v___x_2085_, v___x_2088_);
return v___x_2089_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_outputsFile___boxed(lean_object* v_cache_2090_, lean_object* v_scope_2091_, lean_object* v_inputHash_2092_){
_start:
{
uint64_t v_inputHash_boxed_2093_; lean_object* v_res_2094_; 
v_inputHash_boxed_2093_ = lean_unbox_uint64(v_inputHash_2092_);
lean_dec_ref(v_inputHash_2092_);
v_res_2094_ = l_Lake_Cache_outputsFile(v_cache_2090_, v_scope_2091_, v_inputHash_boxed_2093_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(lean_object* v_cache_2095_, lean_object* v_scope_2096_, uint64_t v_inputHash_2097_, lean_object* v_out_2098_, lean_object* v_service_x3f_2099_, lean_object* v_remoteScope_x3f_2100_, uint8_t v_overwrite_2101_){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v_file_2109_; lean_object* v___x_2110_; 
v___x_2103_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2104_ = l_System_FilePath_join(v_cache_2095_, v___x_2103_);
v___x_2105_ = l_System_FilePath_join(v___x_2104_, v_scope_2096_);
v___x_2106_ = l_Lake_lowerHexUInt64(v_inputHash_2097_);
v___x_2107_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2108_ = lean_string_append(v___x_2106_, v___x_2107_);
v_file_2109_ = l_System_FilePath_join(v___x_2105_, v___x_2108_);
lean_inc_ref(v_file_2109_);
v___x_2110_ = l_Lake_createParentDirs(v_file_2109_);
if (lean_obj_tag(v___x_2110_) == 0)
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
lean_dec_ref_known(v___x_2110_, 1);
v___x_2111_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2111_, 0, v_out_2098_);
lean_ctor_set(v___x_2111_, 1, v_service_x3f_2099_);
lean_ctor_set(v___x_2111_, 2, v_remoteScope_x3f_2100_);
v___x_2112_ = l_Lake_CacheOutput_toJson(v___x_2111_);
v___x_2113_ = lean_unsigned_to_nat(80u);
v___x_2114_ = l_Lean_Json_pretty(v___x_2112_, v___x_2113_);
if (v_overwrite_2101_ == 0)
{
lean_object* v___x_2115_; 
v___x_2115_ = l_Lake_writeFileIfNew(v_file_2109_, v___x_2114_);
lean_dec_ref(v___x_2114_);
lean_dec_ref(v_file_2109_);
return v___x_2115_;
}
else
{
lean_object* v___x_2116_; 
v___x_2116_ = l_IO_FS_writeFile(v_file_2109_, v___x_2114_);
lean_dec_ref(v___x_2114_);
lean_dec_ref(v_file_2109_);
return v___x_2116_;
}
}
else
{
lean_dec_ref(v_file_2109_);
lean_dec(v_remoteScope_x3f_2100_);
lean_dec(v_service_x3f_2099_);
lean_dec(v_out_2098_);
return v___x_2110_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore___boxed(lean_object* v_cache_2117_, lean_object* v_scope_2118_, lean_object* v_inputHash_2119_, lean_object* v_out_2120_, lean_object* v_service_x3f_2121_, lean_object* v_remoteScope_x3f_2122_, lean_object* v_overwrite_2123_, lean_object* v___y_2124_){
_start:
{
uint64_t v_inputHash_boxed_2125_; uint8_t v_overwrite_boxed_2126_; lean_object* v_res_2127_; 
v_inputHash_boxed_2125_ = lean_unbox_uint64(v_inputHash_2119_);
lean_dec_ref(v_inputHash_2119_);
v_overwrite_boxed_2126_ = lean_unbox(v_overwrite_2123_);
v_res_2127_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2117_, v_scope_2118_, v_inputHash_boxed_2125_, v_out_2120_, v_service_x3f_2121_, v_remoteScope_x3f_2122_, v_overwrite_boxed_2126_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg(lean_object* v_inst_2128_, lean_object* v_cache_2129_, lean_object* v_scope_2130_, uint64_t v_inputHash_2131_, lean_object* v_outputs_2132_, lean_object* v_service_x3f_2133_, lean_object* v_remoteScope_x3f_2134_, uint8_t v_overwrite_2135_){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2137_ = lean_apply_1(v_inst_2128_, v_outputs_2132_);
v___x_2138_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2129_, v_scope_2130_, v_inputHash_2131_, v___x_2137_, v_service_x3f_2133_, v_remoteScope_x3f_2134_, v_overwrite_2135_);
return v___x_2138_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___redArg___boxed(lean_object* v_inst_2139_, lean_object* v_cache_2140_, lean_object* v_scope_2141_, lean_object* v_inputHash_2142_, lean_object* v_outputs_2143_, lean_object* v_service_x3f_2144_, lean_object* v_remoteScope_x3f_2145_, lean_object* v_overwrite_2146_, lean_object* v___y_2147_){
_start:
{
uint64_t v_inputHash_boxed_2148_; uint8_t v_overwrite_boxed_2149_; lean_object* v_res_2150_; 
v_inputHash_boxed_2148_ = lean_unbox_uint64(v_inputHash_2142_);
lean_dec_ref(v_inputHash_2142_);
v_overwrite_boxed_2149_ = lean_unbox(v_overwrite_2146_);
v_res_2150_ = l_Lake_Cache_writeOutputs___redArg(v_inst_2139_, v_cache_2140_, v_scope_2141_, v_inputHash_boxed_2148_, v_outputs_2143_, v_service_x3f_2144_, v_remoteScope_x3f_2145_, v_overwrite_boxed_2149_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs(lean_object* v_00_u03b1_2151_, lean_object* v_inst_2152_, lean_object* v_cache_2153_, lean_object* v_scope_2154_, uint64_t v_inputHash_2155_, lean_object* v_outputs_2156_, lean_object* v_service_x3f_2157_, lean_object* v_remoteScope_x3f_2158_, uint8_t v_overwrite_2159_){
_start:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___x_2161_ = lean_apply_1(v_inst_2152_, v_outputs_2156_);
v___x_2162_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2153_, v_scope_2154_, v_inputHash_2155_, v___x_2161_, v_service_x3f_2157_, v_remoteScope_x3f_2158_, v_overwrite_2159_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeOutputs___boxed(lean_object* v_00_u03b1_2163_, lean_object* v_inst_2164_, lean_object* v_cache_2165_, lean_object* v_scope_2166_, lean_object* v_inputHash_2167_, lean_object* v_outputs_2168_, lean_object* v_service_x3f_2169_, lean_object* v_remoteScope_x3f_2170_, lean_object* v_overwrite_2171_, lean_object* v___y_2172_){
_start:
{
uint64_t v_inputHash_boxed_2173_; uint8_t v_overwrite_boxed_2174_; lean_object* v_res_2175_; 
v_inputHash_boxed_2173_ = lean_unbox_uint64(v_inputHash_2167_);
lean_dec_ref(v_inputHash_2167_);
v_overwrite_boxed_2174_ = lean_unbox(v_overwrite_2171_);
v_res_2175_ = l_Lake_Cache_writeOutputs(v_00_u03b1_2163_, v_inst_2164_, v_cache_2165_, v_scope_2166_, v_inputHash_boxed_2173_, v_outputs_2168_, v_service_x3f_2169_, v_remoteScope_x3f_2170_, v_overwrite_boxed_2174_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(lean_object* v_cache_2176_, lean_object* v_scope_2177_, lean_object* v_service_x3f_2178_, lean_object* v_remoteScope_x3f_2179_, uint8_t v_overwrite_2180_, lean_object* v_x_2181_, lean_object* v_x_2182_){
_start:
{
if (lean_obj_tag(v_x_2182_) == 0)
{
lean_object* v___x_2184_; 
lean_dec(v_remoteScope_x3f_2179_);
lean_dec(v_service_x3f_2178_);
lean_dec_ref(v_scope_2177_);
lean_dec_ref(v_cache_2176_);
v___x_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2184_, 0, v_x_2181_);
return v___x_2184_;
}
else
{
lean_object* v_value_2185_; lean_object* v_key_2186_; lean_object* v_tail_2187_; lean_object* v_out_2188_; uint64_t v___x_2189_; lean_object* v___x_2190_; 
v_value_2185_ = lean_ctor_get(v_x_2182_, 1);
lean_inc(v_value_2185_);
v_key_2186_ = lean_ctor_get(v_x_2182_, 0);
lean_inc(v_key_2186_);
v_tail_2187_ = lean_ctor_get(v_x_2182_, 2);
lean_inc(v_tail_2187_);
lean_dec_ref_known(v_x_2182_, 3);
v_out_2188_ = lean_ctor_get(v_value_2185_, 0);
lean_inc(v_out_2188_);
lean_dec(v_value_2185_);
v___x_2189_ = lean_unbox_uint64(v_key_2186_);
lean_dec(v_key_2186_);
lean_inc(v_remoteScope_x3f_2179_);
lean_inc(v_service_x3f_2178_);
lean_inc_ref(v_scope_2177_);
lean_inc_ref(v_cache_2176_);
v___x_2190_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_cache_2176_, v_scope_2177_, v___x_2189_, v_out_2188_, v_service_x3f_2178_, v_remoteScope_x3f_2179_, v_overwrite_2180_);
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v_a_2191_; 
v_a_2191_ = lean_ctor_get(v___x_2190_, 0);
lean_inc(v_a_2191_);
lean_dec_ref_known(v___x_2190_, 1);
v_x_2181_ = v_a_2191_;
v_x_2182_ = v_tail_2187_;
goto _start;
}
else
{
lean_dec(v_tail_2187_);
lean_dec(v_remoteScope_x3f_2179_);
lean_dec(v_service_x3f_2178_);
lean_dec_ref(v_scope_2177_);
lean_dec_ref(v_cache_2176_);
return v___x_2190_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0___boxed(lean_object* v_cache_2193_, lean_object* v_scope_2194_, lean_object* v_service_x3f_2195_, lean_object* v_remoteScope_x3f_2196_, lean_object* v_overwrite_2197_, lean_object* v_x_2198_, lean_object* v_x_2199_, lean_object* v___y_2200_){
_start:
{
uint8_t v_overwrite_boxed_2201_; lean_object* v_res_2202_; 
v_overwrite_boxed_2201_ = lean_unbox(v_overwrite_2197_);
v_res_2202_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(v_cache_2193_, v_scope_2194_, v_service_x3f_2195_, v_remoteScope_x3f_2196_, v_overwrite_boxed_2201_, v_x_2198_, v_x_2199_);
return v_res_2202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(lean_object* v_cache_2203_, lean_object* v_scope_2204_, lean_object* v_service_x3f_2205_, lean_object* v_remoteScope_x3f_2206_, uint8_t v_overwrite_2207_, lean_object* v_as_2208_, size_t v_i_2209_, size_t v_stop_2210_, lean_object* v_b_2211_){
_start:
{
uint8_t v___x_2213_; 
v___x_2213_ = lean_usize_dec_eq(v_i_2209_, v_stop_2210_);
if (v___x_2213_ == 0)
{
lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2214_ = lean_array_uget_borrowed(v_as_2208_, v_i_2209_);
v___x_2215_ = lean_box(0);
lean_inc(v___x_2214_);
lean_inc(v_remoteScope_x3f_2206_);
lean_inc(v_service_x3f_2205_);
lean_inc_ref(v_scope_2204_);
lean_inc_ref(v_cache_2203_);
v___x_2216_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lake_Cache_writeMap_spec__0(v_cache_2203_, v_scope_2204_, v_service_x3f_2205_, v_remoteScope_x3f_2206_, v_overwrite_2207_, v___x_2215_, v___x_2214_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; size_t v___x_2218_; size_t v___x_2219_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
lean_inc(v_a_2217_);
lean_dec_ref_known(v___x_2216_, 1);
v___x_2218_ = ((size_t)1ULL);
v___x_2219_ = lean_usize_add(v_i_2209_, v___x_2218_);
v_i_2209_ = v___x_2219_;
v_b_2211_ = v_a_2217_;
goto _start;
}
else
{
lean_dec(v_remoteScope_x3f_2206_);
lean_dec(v_service_x3f_2205_);
lean_dec_ref(v_scope_2204_);
lean_dec_ref(v_cache_2203_);
return v___x_2216_;
}
}
else
{
lean_object* v___x_2221_; 
lean_dec(v_remoteScope_x3f_2206_);
lean_dec(v_service_x3f_2205_);
lean_dec_ref(v_scope_2204_);
lean_dec_ref(v_cache_2203_);
v___x_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2221_, 0, v_b_2211_);
return v___x_2221_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1___boxed(lean_object* v_cache_2222_, lean_object* v_scope_2223_, lean_object* v_service_x3f_2224_, lean_object* v_remoteScope_x3f_2225_, lean_object* v_overwrite_2226_, lean_object* v_as_2227_, lean_object* v_i_2228_, lean_object* v_stop_2229_, lean_object* v_b_2230_, lean_object* v___y_2231_){
_start:
{
uint8_t v_overwrite_boxed_2232_; size_t v_i_boxed_2233_; size_t v_stop_boxed_2234_; lean_object* v_res_2235_; 
v_overwrite_boxed_2232_ = lean_unbox(v_overwrite_2226_);
v_i_boxed_2233_ = lean_unbox_usize(v_i_2228_);
lean_dec(v_i_2228_);
v_stop_boxed_2234_ = lean_unbox_usize(v_stop_2229_);
lean_dec(v_stop_2229_);
v_res_2235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2222_, v_scope_2223_, v_service_x3f_2224_, v_remoteScope_x3f_2225_, v_overwrite_boxed_2232_, v_as_2227_, v_i_boxed_2233_, v_stop_boxed_2234_, v_b_2230_);
lean_dec_ref(v_as_2227_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap(lean_object* v_cache_2236_, lean_object* v_scope_2237_, lean_object* v_map_2238_, lean_object* v_service_x3f_2239_, lean_object* v_remoteScope_x3f_2240_, uint8_t v_overwrite_2241_){
_start:
{
lean_object* v_buckets_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; uint8_t v___x_2247_; 
v_buckets_2243_ = lean_ctor_get(v_map_2238_, 1);
v___x_2244_ = lean_unsigned_to_nat(0u);
v___x_2245_ = lean_array_get_size(v_buckets_2243_);
v___x_2246_ = lean_box(0);
v___x_2247_ = lean_nat_dec_lt(v___x_2244_, v___x_2245_);
if (v___x_2247_ == 0)
{
lean_object* v___x_2248_; 
lean_dec(v_remoteScope_x3f_2240_);
lean_dec(v_service_x3f_2239_);
lean_dec_ref(v_scope_2237_);
lean_dec_ref(v_cache_2236_);
v___x_2248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2246_);
return v___x_2248_;
}
else
{
size_t v___x_2249_; size_t v___x_2250_; lean_object* v___x_2251_; 
v___x_2249_ = ((size_t)0ULL);
v___x_2250_ = lean_usize_of_nat(v___x_2245_);
v___x_2251_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Cache_writeMap_spec__1(v_cache_2236_, v_scope_2237_, v_service_x3f_2239_, v_remoteScope_x3f_2240_, v_overwrite_2241_, v_buckets_2243_, v___x_2249_, v___x_2250_, v___x_2246_);
return v___x_2251_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_writeMap___boxed(lean_object* v_cache_2252_, lean_object* v_scope_2253_, lean_object* v_map_2254_, lean_object* v_service_x3f_2255_, lean_object* v_remoteScope_x3f_2256_, lean_object* v_overwrite_2257_, lean_object* v___y_2258_){
_start:
{
uint8_t v_overwrite_boxed_2259_; lean_object* v_res_2260_; 
v_overwrite_boxed_2259_ = lean_unbox(v_overwrite_2257_);
v_res_2260_ = l_Lake_Cache_writeMap(v_cache_2252_, v_scope_2253_, v_map_2254_, v_service_x3f_2255_, v_remoteScope_x3f_2256_, v_overwrite_boxed_2259_);
lean_dec_ref(v_map_2254_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f(lean_object* v_cache_2263_, lean_object* v_scope_2264_, uint64_t v_inputHash_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v_path_2274_; lean_object* v___x_2275_; 
v___x_2268_ = ((lean_object*)(l_Lake_Cache_outputsDir___closed__0));
v___x_2269_ = l_System_FilePath_join(v_cache_2263_, v___x_2268_);
v___x_2270_ = l_System_FilePath_join(v___x_2269_, v_scope_2264_);
v___x_2271_ = l_Lake_lowerHexUInt64(v_inputHash_2265_);
v___x_2272_ = ((lean_object*)(l_Lake_Cache_outputsFile___closed__0));
v___x_2273_ = lean_string_append(v___x_2271_, v___x_2272_);
v_path_2274_ = l_System_FilePath_join(v___x_2270_, v___x_2273_);
v___x_2275_ = l_IO_FS_readFile(v_path_2274_);
if (lean_obj_tag(v___x_2275_) == 0)
{
lean_object* v_a_2276_; lean_object* v_a_2278_; lean_object* v___x_2287_; 
v_a_2276_ = lean_ctor_get(v___x_2275_, 0);
lean_inc(v_a_2276_);
lean_dec_ref_known(v___x_2275_, 1);
v___x_2287_ = l_Lean_Json_parse(v_a_2276_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_a_2288_);
lean_dec_ref_known(v___x_2287_, 1);
v_a_2278_ = v_a_2288_;
goto v___jp_2277_;
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2290_; 
v_a_2289_ = lean_ctor_get(v___x_2287_, 0);
lean_inc(v_a_2289_);
lean_dec_ref_known(v___x_2287_, 1);
v___x_2290_ = l_Lake_CacheOutput_fromJson_x3f(v_a_2289_);
if (lean_obj_tag(v___x_2290_) == 0)
{
lean_object* v_a_2291_; 
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc(v_a_2291_);
lean_dec_ref_known(v___x_2290_, 1);
v_a_2278_ = v_a_2291_;
goto v___jp_2277_;
}
else
{
lean_object* v_a_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2300_; 
lean_dec_ref(v_path_2274_);
v_a_2292_ = lean_ctor_get(v___x_2290_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2294_ = v___x_2290_;
v_isShared_2295_ = v_isSharedCheck_2300_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_a_2292_);
lean_dec(v___x_2290_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2300_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2297_; 
if (v_isShared_2295_ == 0)
{
v___x_2297_ = v___x_2294_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2292_);
v___x_2297_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
lean_object* v___x_2298_; 
v___x_2298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2297_);
lean_ctor_set(v___x_2298_, 1, v___y_2266_);
return v___x_2298_;
}
}
}
}
v___jp_2277_:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; uint8_t v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2279_ = ((lean_object*)(l_Lake_Cache_readOutputs_x3f___closed__0));
v___x_2280_ = lean_string_append(v_path_2274_, v___x_2279_);
v___x_2281_ = lean_string_append(v___x_2280_, v_a_2278_);
lean_dec_ref(v_a_2278_);
v___x_2282_ = 3;
v___x_2283_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2283_, 0, v___x_2281_);
lean_ctor_set_uint8(v___x_2283_, sizeof(void*)*1, v___x_2282_);
v___x_2284_ = lean_array_get_size(v___y_2266_);
v___x_2285_ = lean_array_push(v___y_2266_, v___x_2283_);
v___x_2286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
return v___x_2286_;
}
}
else
{
lean_object* v_a_2301_; 
v_a_2301_ = lean_ctor_get(v___x_2275_, 0);
lean_inc(v_a_2301_);
lean_dec_ref_known(v___x_2275_, 1);
if (lean_obj_tag(v_a_2301_) == 11)
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
lean_dec_ref_known(v_a_2301_, 2);
lean_dec_ref(v_path_2274_);
v___x_2302_ = lean_box(0);
v___x_2303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
lean_ctor_set(v___x_2303_, 1, v___y_2266_);
return v___x_2303_;
}
else
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; uint8_t v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2304_ = ((lean_object*)(l_Lake_Cache_readOutputs_x3f___closed__1));
v___x_2305_ = lean_string_append(v_path_2274_, v___x_2304_);
v___x_2306_ = lean_io_error_to_string(v_a_2301_);
v___x_2307_ = lean_string_append(v___x_2305_, v___x_2306_);
lean_dec_ref(v___x_2306_);
v___x_2308_ = 3;
v___x_2309_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2309_, 0, v___x_2307_);
lean_ctor_set_uint8(v___x_2309_, sizeof(void*)*1, v___x_2308_);
v___x_2310_ = lean_array_get_size(v___y_2266_);
v___x_2311_ = lean_array_push(v___y_2266_, v___x_2309_);
v___x_2312_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2310_);
lean_ctor_set(v___x_2312_, 1, v___x_2311_);
return v___x_2312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_readOutputs_x3f___boxed(lean_object* v_cache_2313_, lean_object* v_scope_2314_, lean_object* v_inputHash_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_){
_start:
{
uint64_t v_inputHash_boxed_2318_; lean_object* v_res_2319_; 
v_inputHash_boxed_2318_ = lean_unbox_uint64(v_inputHash_2315_);
lean_dec_ref(v_inputHash_2315_);
v_res_2319_ = l_Lake_Cache_readOutputs_x3f(v_cache_2313_, v_scope_2314_, v_inputHash_boxed_2318_, v___y_2316_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_revisionDir(lean_object* v_cache_2321_){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_2323_ = l_System_FilePath_join(v_cache_2321_, v___x_2322_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_revisionPath(lean_object* v_cache_2325_, lean_object* v_scope_2326_, lean_object* v_rev_2327_){
_start:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2328_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_2329_ = l_System_FilePath_join(v_cache_2325_, v___x_2328_);
v___x_2330_ = l_System_FilePath_join(v___x_2329_, v_scope_2326_);
v___x_2331_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_2332_ = lean_string_append(v_rev_2327_, v___x_2331_);
v___x_2333_ = l_System_FilePath_join(v___x_2330_, v___x_2332_);
return v___x_2333_;
}
}
LEAN_EXPORT uint8_t l_Lake_CachePlatform_isNone(lean_object* v_self_2335_){
_start:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; uint8_t v___x_2338_; 
v___x_2336_ = lean_string_utf8_byte_size(v_self_2335_);
v___x_2337_ = lean_unsigned_to_nat(0u);
v___x_2338_ = lean_nat_dec_eq(v___x_2336_, v___x_2337_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_isNone___boxed(lean_object* v_self_2339_){
_start:
{
uint8_t v_res_2340_; lean_object* v_r_2341_; 
v_res_2340_ = l_Lake_CachePlatform_isNone(v_self_2339_);
lean_dec_ref(v_self_2339_);
v_r_2341_ = lean_box(v_res_2340_);
return v_r_2341_;
}
}
static lean_object* _init_l_Lake_CachePlatform_system(void){
_start:
{
lean_object* v___x_2342_; 
v___x_2342_ = l_System_Platform_target;
return v___x_2342_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString(lean_object* v_s_2343_){
_start:
{
lean_inc_ref(v_s_2343_);
return v_s_2343_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_ofString___boxed(lean_object* v_s_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Lake_CachePlatform_ofString(v_s_2344_);
lean_dec_ref(v_s_2344_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(lean_object* v___x_2346_, lean_object* v___x_2347_, lean_object* v_a_2348_, lean_object* v_b_2349_){
_start:
{
uint8_t v_decide_2350_; 
v_decide_2350_ = lean_nat_dec_eq(v_a_2348_, v___x_2346_);
if (v_decide_2350_ == 0)
{
lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2351_ = lean_string_utf8_next_fast(v___x_2347_, v_a_2348_);
lean_dec(v_a_2348_);
v___x_2352_ = lean_unsigned_to_nat(1u);
v___x_2353_ = lean_nat_add(v_b_2349_, v___x_2352_);
lean_dec(v_b_2349_);
v_a_2348_ = v___x_2351_;
v_b_2349_ = v___x_2353_;
goto _start;
}
else
{
lean_dec(v_a_2348_);
return v_b_2349_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg___boxed(lean_object* v___x_2355_, lean_object* v___x_2356_, lean_object* v_a_2357_, lean_object* v_b_2358_){
_start:
{
lean_object* v_res_2359_; 
v_res_2359_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2355_, v___x_2356_, v_a_2357_, v_b_2358_);
lean_dec_ref(v___x_2356_);
lean_dec(v___x_2355_);
return v_res_2359_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length(lean_object* v_self_2360_){
_start:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2361_ = lean_unsigned_to_nat(0u);
v___x_2362_ = lean_string_utf8_byte_size(v_self_2360_);
v___x_2363_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2362_, v_self_2360_, v___x_2361_, v___x_2361_);
return v___x_2363_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_length___boxed(lean_object* v_self_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l_Lake_CachePlatform_length(v_self_2364_);
lean_dec_ref(v_self_2364_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0(lean_object* v___x_2366_, lean_object* v___x_2367_, lean_object* v___x_2368_, lean_object* v_inst_2369_, lean_object* v_R_2370_, lean_object* v_a_2371_, lean_object* v_b_2372_, lean_object* v_c_2373_){
_start:
{
lean_object* v___x_2374_; 
v___x_2374_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2366_, v___x_2368_, v_a_2371_, v_b_2372_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___boxed(lean_object* v___x_2375_, lean_object* v___x_2376_, lean_object* v___x_2377_, lean_object* v_inst_2378_, lean_object* v_R_2379_, lean_object* v_a_2380_, lean_object* v_b_2381_, lean_object* v_c_2382_){
_start:
{
lean_object* v_res_2383_; 
v_res_2383_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0(v___x_2375_, v___x_2376_, v___x_2377_, v_inst_2378_, v_R_2379_, v_a_2380_, v_b_2381_, v_c_2382_);
lean_dec_ref(v___x_2377_);
lean_dec_ref(v___x_2376_);
lean_dec(v___x_2375_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString(lean_object* v_self_2385_){
_start:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; uint8_t v___x_2388_; 
v___x_2386_ = lean_string_utf8_byte_size(v_self_2385_);
v___x_2387_ = lean_unsigned_to_nat(0u);
v___x_2388_ = lean_nat_dec_eq(v___x_2386_, v___x_2387_);
if (v___x_2388_ == 0)
{
lean_inc_ref(v_self_2385_);
return v_self_2385_;
}
else
{
lean_object* v___x_2389_; 
v___x_2389_ = ((lean_object*)(l_Lake_CachePlatform_toString___closed__0));
return v___x_2389_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CachePlatform_toString___boxed(lean_object* v_self_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_Lake_CachePlatform_toString(v_self_2390_);
lean_dec_ref(v_self_2390_);
return v_res_2391_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheToolchain_isNone(lean_object* v_self_2395_){
_start:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; 
v___x_2396_ = lean_string_utf8_byte_size(v_self_2395_);
v___x_2397_ = lean_unsigned_to_nat(0u);
v___x_2398_ = lean_nat_dec_eq(v___x_2396_, v___x_2397_);
return v___x_2398_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_isNone___boxed(lean_object* v_self_2399_){
_start:
{
uint8_t v_res_2400_; lean_object* v_r_2401_; 
v_res_2400_ = l_Lake_CacheToolchain_isNone(v_self_2399_);
lean_dec_ref(v_self_2399_);
v_r_2401_ = lean_box(v_res_2400_);
return v_r_2401_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofString(lean_object* v_s_2402_){
_start:
{
lean_object* v___x_2403_; 
v___x_2403_ = l_Lake_normalizeToolchain(v_s_2402_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain(lean_object* v_s_2404_){
_start:
{
lean_inc_ref(v_s_2404_);
return v_s_2404_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_ofElanToolchain___boxed(lean_object* v_s_2405_){
_start:
{
lean_object* v_res_2406_; 
v_res_2406_ = l_Lake_CacheToolchain_ofElanToolchain(v_s_2405_);
lean_dec_ref(v_s_2405_);
return v_res_2406_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length(lean_object* v_self_2407_){
_start:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2408_ = lean_unsigned_to_nat(0u);
v___x_2409_ = lean_string_utf8_byte_size(v_self_2407_);
v___x_2410_ = l_WellFounded_opaqueFix_u2083___at___00Lake_CachePlatform_length_spec__0___redArg(v___x_2409_, v_self_2407_, v___x_2408_, v___x_2408_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_length___boxed(lean_object* v_self_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_Lake_CacheToolchain_length(v_self_2411_);
lean_dec_ref(v_self_2411_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString(lean_object* v_self_2413_){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; uint8_t v___x_2416_; 
v___x_2414_ = lean_string_utf8_byte_size(v_self_2413_);
v___x_2415_ = lean_unsigned_to_nat(0u);
v___x_2416_ = lean_nat_dec_eq(v___x_2414_, v___x_2415_);
if (v___x_2416_ == 0)
{
lean_inc_ref(v_self_2413_);
return v_self_2413_;
}
else
{
lean_object* v___x_2417_; 
v___x_2417_ = ((lean_object*)(l_Lake_CachePlatform_toString___closed__0));
return v___x_2417_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheToolchain_toString___boxed(lean_object* v_self_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Lake_CacheToolchain_toString(v_self_2418_);
lean_dec_ref(v_self_2418_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore(uint64_t v_hash_2425_, lean_object* v_url_2426_, lean_object* v_path_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2430_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc_ref(v_path_2427_);
v___x_2431_ = l_Lake_download(v_url_2426_, v_path_2427_, v___x_2430_, v___y_2428_);
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_object* v_a_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2474_; 
v_a_2432_ = lean_ctor_get(v___x_2431_, 1);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2474_ == 0)
{
lean_object* v_unused_2475_; 
v_unused_2475_ = lean_ctor_get(v___x_2431_, 0);
lean_dec(v_unused_2475_);
v___x_2434_ = v___x_2431_;
v_isShared_2435_ = v_isSharedCheck_2474_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_a_2432_);
lean_dec(v___x_2431_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2474_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2436_; 
v___x_2436_ = l_Lake_computeBinFileHash(v_path_2427_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; uint64_t v___x_2438_; uint8_t v___x_2439_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2437_);
lean_dec_ref_known(v___x_2436_, 1);
v___x_2438_ = lean_unbox_uint64(v_a_2437_);
v___x_2439_ = lean_uint64_dec_eq(v___x_2438_, v_hash_2425_);
if (v___x_2439_ == 0)
{
lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; uint64_t v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; uint8_t v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2440_ = lean_array_get_size(v_a_2432_);
v___x_2441_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__1));
lean_inc_ref(v_path_2427_);
v___x_2442_ = lean_string_append(v_path_2427_, v___x_2441_);
v___x_2443_ = lean_unbox_uint64(v_a_2437_);
lean_dec(v_a_2437_);
v___x_2444_ = l_Lake_lowerHexUInt64(v___x_2443_);
v___x_2445_ = lean_string_append(v___x_2442_, v___x_2444_);
lean_dec_ref(v___x_2444_);
v___x_2446_ = 3;
v___x_2447_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2447_, 0, v___x_2445_);
lean_ctor_set_uint8(v___x_2447_, sizeof(void*)*1, v___x_2446_);
v___x_2448_ = lean_array_push(v_a_2432_, v___x_2447_);
v___x_2449_ = lean_io_remove_file(v_path_2427_);
lean_dec_ref(v_path_2427_);
if (lean_obj_tag(v___x_2449_) == 0)
{
lean_object* v___x_2451_; 
lean_dec_ref_known(v___x_2449_, 1);
if (v_isShared_2435_ == 0)
{
lean_ctor_set_tag(v___x_2434_, 1);
lean_ctor_set(v___x_2434_, 1, v___x_2448_);
lean_ctor_set(v___x_2434_, 0, v___x_2440_);
v___x_2451_ = v___x_2434_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v___x_2440_);
lean_ctor_set(v_reuseFailAlloc_2452_, 1, v___x_2448_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
else
{
lean_object* v_a_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2459_; 
v_a_2453_ = lean_ctor_get(v___x_2449_, 0);
lean_inc(v_a_2453_);
lean_dec_ref_known(v___x_2449_, 1);
v___x_2454_ = lean_io_error_to_string(v_a_2453_);
v___x_2455_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2455_, 0, v___x_2454_);
lean_ctor_set_uint8(v___x_2455_, sizeof(void*)*1, v___x_2446_);
v___x_2456_ = lean_array_get_size(v___x_2448_);
v___x_2457_ = lean_array_push(v___x_2448_, v___x_2455_);
if (v_isShared_2435_ == 0)
{
lean_ctor_set_tag(v___x_2434_, 1);
lean_ctor_set(v___x_2434_, 1, v___x_2457_);
lean_ctor_set(v___x_2434_, 0, v___x_2456_);
v___x_2459_ = v___x_2434_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v___x_2456_);
lean_ctor_set(v_reuseFailAlloc_2460_, 1, v___x_2457_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
else
{
lean_object* v___x_2461_; lean_object* v___x_2463_; 
lean_dec(v_a_2437_);
lean_dec_ref(v_path_2427_);
v___x_2461_ = lean_box(0);
if (v_isShared_2435_ == 0)
{
lean_ctor_set(v___x_2434_, 0, v___x_2461_);
v___x_2463_ = v___x_2434_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v___x_2461_);
lean_ctor_set(v_reuseFailAlloc_2464_, 1, v_a_2432_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
else
{
lean_object* v_a_2465_; lean_object* v___x_2466_; uint8_t v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2472_; 
lean_dec_ref(v_path_2427_);
v_a_2465_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2465_);
lean_dec_ref_known(v___x_2436_, 1);
v___x_2466_ = lean_io_error_to_string(v_a_2465_);
v___x_2467_ = 3;
v___x_2468_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2468_, 0, v___x_2466_);
lean_ctor_set_uint8(v___x_2468_, sizeof(void*)*1, v___x_2467_);
v___x_2469_ = lean_array_get_size(v_a_2432_);
v___x_2470_ = lean_array_push(v_a_2432_, v___x_2468_);
if (v_isShared_2435_ == 0)
{
lean_ctor_set_tag(v___x_2434_, 1);
lean_ctor_set(v___x_2434_, 1, v___x_2470_);
lean_ctor_set(v___x_2434_, 0, v___x_2469_);
v___x_2472_ = v___x_2434_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v___x_2469_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v___x_2470_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
else
{
lean_dec_ref(v_path_2427_);
return v___x_2431_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_downloadArtifactCore___boxed(lean_object* v_hash_2476_, lean_object* v_url_2477_, lean_object* v_path_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
uint64_t v_hash_boxed_2481_; lean_object* v_res_2482_; 
v_hash_boxed_2481_ = lean_unbox_uint64(v_hash_2476_);
lean_dec_ref(v_hash_2476_);
v_res_2482_ = l_Lake_downloadArtifactCore(v_hash_boxed_2481_, v_url_2477_, v_path_2478_, v___y_2479_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(lean_object* v_x_2485_){
_start:
{
if (lean_obj_tag(v_x_2485_) == 0)
{
lean_object* v___x_2486_; 
v___x_2486_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0___closed__0));
return v___x_2486_;
}
else
{
lean_object* v___x_2487_; 
v___x_2487_ = l_Lean_Json_getNat_x3f(v_x_2485_);
if (lean_obj_tag(v___x_2487_) == 0)
{
lean_object* v_a_2488_; lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2495_; 
v_a_2488_ = lean_ctor_get(v___x_2487_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2490_ = v___x_2487_;
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
else
{
lean_inc(v_a_2488_);
lean_dec(v___x_2487_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2495_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2493_; 
if (v_isShared_2491_ == 0)
{
v___x_2493_ = v___x_2490_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_a_2488_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2504_; 
v_a_2496_ = lean_ctor_get(v___x_2487_, 0);
v_isSharedCheck_2504_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2498_ = v___x_2487_;
v_isShared_2499_ = v_isSharedCheck_2504_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2487_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2504_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2500_; lean_object* v___x_2502_; 
v___x_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2500_, 0, v_a_2496_);
if (v_isShared_2499_ == 0)
{
lean_ctor_set(v___x_2498_, 0, v___x_2500_);
v___x_2502_ = v___x_2498_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v___x_2500_);
v___x_2502_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
return v___x_2502_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21(void){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2527_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_2528_ = lean_unsigned_to_nat(14u);
v___x_2529_ = lean_mk_empty_array_with_capacity(v___x_2528_);
v___x_2530_ = lean_array_push(v___x_2529_, v___x_2527_);
return v___x_2530_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22(void){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2531_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_2532_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__21);
v___x_2533_ = lean_array_push(v___x_2532_, v___x_2531_);
return v___x_2533_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23(void){
_start:
{
lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2534_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_2535_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__22);
v___x_2536_ = lean_array_push(v___x_2535_, v___x_2534_);
return v___x_2536_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24(void){
_start:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2537_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13));
v___x_2538_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__23);
v___x_2539_ = lean_array_push(v___x_2538_, v___x_2537_);
return v___x_2539_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25(void){
_start:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2540_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14));
v___x_2541_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__24);
v___x_2542_ = lean_array_push(v___x_2541_, v___x_2540_);
return v___x_2542_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26(void){
_start:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; 
v___x_2543_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15));
v___x_2544_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__25);
v___x_2545_ = lean_array_push(v___x_2544_, v___x_2543_);
return v___x_2545_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28(void){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_2549_ = lean_array_get_size(v___x_2548_);
return v___x_2549_;
}
}
static uint8_t _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29(void){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; uint8_t v___x_2552_; 
v___x_2550_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28);
v___x_2551_ = lean_unsigned_to_nat(0u);
v___x_2552_ = lean_nat_dec_lt(v___x_2551_, v___x_2550_);
return v___x_2552_;
}
}
static size_t _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30(void){
_start:
{
lean_object* v___x_2553_; size_t v___x_2554_; 
v___x_2553_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__28);
v___x_2554_ = lean_usize_of_nat(v___x_2553_);
return v___x_2554_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3(lean_object* v_file_2557_, lean_object* v_contentType_2558_, lean_object* v_url_2559_, lean_object* v_key_2560_, lean_object* v___y_2561_){
_start:
{
lean_object* v_stderr_2564_; lean_object* v_a_2565_; lean_object* v_stderr_2577_; lean_object* v___y_2586_; lean_object* v___y_2589_; lean_object* v_a_2590_; lean_object* v___y_2617_; lean_object* v_a_2618_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v_a_2643_; lean_object* v_a_2657_; lean_object* v___x_2706_; lean_object* v_val_2708_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v___x_2706_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_2714_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_2715_ = lean_io_getenv(v___x_2714_);
if (lean_obj_tag(v___x_2715_) == 0)
{
lean_object* v___x_2716_; 
v___x_2716_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v_val_2708_ = v___x_2716_;
goto v___jp_2707_;
}
else
{
lean_object* v_val_2717_; 
v_val_2717_ = lean_ctor_get(v___x_2715_, 0);
lean_inc(v_val_2717_);
lean_dec_ref_known(v___x_2715_, 1);
v_val_2708_ = v_val_2717_;
goto v___jp_2707_;
}
v___jp_2563_:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; uint8_t v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2566_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__0));
v___x_2567_ = lean_string_append(v___x_2566_, v_a_2565_);
lean_dec_ref(v_a_2565_);
v___x_2568_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_2569_ = lean_string_append(v___x_2567_, v___x_2568_);
v___x_2570_ = lean_string_append(v___x_2569_, v_stderr_2564_);
lean_dec_ref(v_stderr_2564_);
v___x_2571_ = 3;
v___x_2572_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2572_, 0, v___x_2570_);
lean_ctor_set_uint8(v___x_2572_, sizeof(void*)*1, v___x_2571_);
lean_inc_ref(v___y_2561_);
v___x_2573_ = lean_apply_2(v___y_2561_, v___x_2572_, lean_box(0));
v___x_2574_ = lean_box(0);
v___x_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2574_);
return v___x_2575_;
}
v___jp_2576_:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; uint8_t v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2578_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__2));
v___x_2579_ = lean_string_append(v___x_2578_, v_stderr_2577_);
lean_dec_ref(v_stderr_2577_);
v___x_2580_ = 3;
v___x_2581_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2581_, 0, v___x_2579_);
lean_ctor_set_uint8(v___x_2581_, sizeof(void*)*1, v___x_2580_);
lean_inc_ref(v___y_2561_);
v___x_2582_ = lean_apply_2(v___y_2561_, v___x_2581_, lean_box(0));
v___x_2583_ = lean_box(0);
v___x_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2583_);
return v___x_2584_;
}
v___jp_2585_:
{
lean_object* v_stderr_2587_; 
v_stderr_2587_ = lean_ctor_get(v___y_2586_, 1);
lean_inc_ref(v_stderr_2587_);
lean_dec_ref(v___y_2586_);
v_stderr_2577_ = v_stderr_2587_;
goto v___jp_2576_;
}
v___jp_2588_:
{
if (lean_obj_tag(v_a_2590_) == 0)
{
v___y_2586_ = v___y_2589_;
goto v___jp_2585_;
}
else
{
lean_object* v_val_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2615_; 
v_val_2591_ = lean_ctor_get(v_a_2590_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v_a_2590_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2593_ = v_a_2590_;
v_isShared_2594_ = v_isSharedCheck_2615_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_val_2591_);
lean_dec(v_a_2590_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2615_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2595_; uint8_t v___x_2596_; 
v___x_2595_ = lean_unsigned_to_nat(200u);
v___x_2596_ = lean_nat_dec_eq(v_val_2591_, v___x_2595_);
if (v___x_2596_ == 0)
{
lean_object* v_stdout_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; uint8_t v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2609_; 
v_stdout_2597_ = lean_ctor_get(v___y_2589_, 0);
lean_inc_ref(v_stdout_2597_);
lean_dec_ref(v___y_2589_);
v___x_2598_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__3));
v___x_2599_ = l_Nat_reprFast(v_val_2591_);
v___x_2600_ = lean_string_append(v___x_2598_, v___x_2599_);
lean_dec_ref(v___x_2599_);
v___x_2601_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__1));
v___x_2602_ = lean_string_append(v___x_2600_, v___x_2601_);
v___x_2603_ = lean_string_append(v___x_2602_, v_stdout_2597_);
lean_dec_ref(v_stdout_2597_);
v___x_2604_ = 3;
v___x_2605_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2605_, 0, v___x_2603_);
lean_ctor_set_uint8(v___x_2605_, sizeof(void*)*1, v___x_2604_);
lean_inc_ref(v___y_2561_);
v___x_2606_ = lean_apply_2(v___y_2561_, v___x_2605_, lean_box(0));
v___x_2607_ = lean_box(0);
if (v_isShared_2594_ == 0)
{
lean_ctor_set(v___x_2593_, 0, v___x_2607_);
v___x_2609_ = v___x_2593_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v___x_2607_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
else
{
lean_object* v___x_2611_; lean_object* v___x_2613_; 
lean_dec(v_val_2591_);
lean_dec_ref(v___y_2589_);
v___x_2611_ = lean_box(0);
if (v_isShared_2594_ == 0)
{
lean_ctor_set_tag(v___x_2593_, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2611_);
v___x_2613_ = v___x_2593_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v___x_2611_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
}
}
v___jp_2616_:
{
lean_object* v_stderr_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; uint8_t v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v_stderr_2619_ = lean_ctor_get(v___y_2617_, 1);
lean_inc_ref(v_stderr_2619_);
lean_dec_ref(v___y_2617_);
v___x_2620_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__4));
v___x_2621_ = lean_string_append(v___x_2620_, v_a_2618_);
lean_dec_ref(v_a_2618_);
v___x_2622_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__5));
v___x_2623_ = lean_string_append(v___x_2621_, v___x_2622_);
v___x_2624_ = lean_string_append(v___x_2623_, v_stderr_2619_);
lean_dec_ref(v_stderr_2619_);
v___x_2625_ = 3;
v___x_2626_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2626_, 0, v___x_2624_);
lean_ctor_set_uint8(v___x_2626_, sizeof(void*)*1, v___x_2625_);
lean_inc_ref(v___y_2561_);
v___x_2627_ = lean_apply_2(v___y_2561_, v___x_2626_, lean_box(0));
v___x_2628_ = lean_box(0);
v___x_2629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2628_);
return v___x_2629_;
}
v___jp_2630_:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2633_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_2634_ = l_Lake_JsonObject_getJson_x3f(v___y_2631_, v___x_2633_);
lean_dec(v___y_2631_);
if (lean_obj_tag(v___x_2634_) == 0)
{
v___y_2586_ = v___y_2632_;
goto v___jp_2585_;
}
else
{
lean_object* v_val_2635_; lean_object* v___x_2636_; 
v_val_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc(v_val_2635_);
lean_dec_ref_known(v___x_2634_, 1);
v___x_2636_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_2635_);
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
lean_inc(v_a_2637_);
lean_dec_ref_known(v___x_2636_, 1);
v___x_2638_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_2639_ = lean_string_append(v___x_2638_, v_a_2637_);
lean_dec(v_a_2637_);
v___y_2617_ = v___y_2632_;
v_a_2618_ = v___x_2639_;
goto v___jp_2616_;
}
else
{
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2640_; 
v_a_2640_ = lean_ctor_get(v___x_2636_, 0);
lean_inc(v_a_2640_);
lean_dec_ref_known(v___x_2636_, 1);
v___y_2617_ = v___y_2632_;
v_a_2618_ = v_a_2640_;
goto v___jp_2616_;
}
else
{
lean_object* v_a_2641_; 
v_a_2641_ = lean_ctor_get(v___x_2636_, 0);
lean_inc(v_a_2641_);
lean_dec_ref_known(v___x_2636_, 1);
v___y_2589_ = v___y_2632_;
v_a_2590_ = v_a_2641_;
goto v___jp_2588_;
}
}
}
}
v___jp_2642_:
{
lean_object* v_stderr_2644_; lean_object* v___x_2645_; 
v_stderr_2644_ = lean_ctor_get(v_a_2643_, 1);
lean_inc_ref(v_stderr_2644_);
v___x_2645_ = l_Lean_Json_parse(v_stderr_2644_);
if (lean_obj_tag(v___x_2645_) == 0)
{
lean_object* v_a_2646_; 
lean_inc_ref(v_stderr_2644_);
lean_dec_ref(v_a_2643_);
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_a_2646_);
lean_dec_ref_known(v___x_2645_, 1);
v_stderr_2564_ = v_stderr_2644_;
v_a_2565_ = v_a_2646_;
goto v___jp_2563_;
}
else
{
lean_object* v_a_2647_; lean_object* v___x_2648_; 
v_a_2647_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_a_2647_);
lean_dec_ref_known(v___x_2645_, 1);
v___x_2648_ = l_Lean_Json_getObj_x3f(v_a_2647_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; 
lean_inc_ref(v_stderr_2644_);
lean_dec_ref(v_a_2643_);
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
lean_inc(v_a_2649_);
lean_dec_ref_known(v___x_2648_, 1);
v_stderr_2564_ = v_stderr_2644_;
v_a_2565_ = v_a_2649_;
goto v___jp_2563_;
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v_a_2650_ = lean_ctor_get(v___x_2648_, 0);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2648_, 1);
v___x_2651_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__8));
v___x_2652_ = l_Lake_JsonObject_getJson_x3f(v_a_2650_, v___x_2651_);
if (lean_obj_tag(v___x_2652_) == 0)
{
lean_inc_ref(v_stderr_2644_);
lean_dec(v_a_2650_);
lean_dec_ref(v_a_2643_);
v_stderr_2577_ = v_stderr_2644_;
goto v___jp_2576_;
}
else
{
lean_object* v_val_2653_; lean_object* v___x_2654_; 
v_val_2653_ = lean_ctor_get(v___x_2652_, 0);
lean_inc(v_val_2653_);
lean_dec_ref_known(v___x_2652_, 1);
v___x_2654_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_2653_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_dec_ref_known(v___x_2654_, 1);
v___y_2631_ = v_a_2650_;
v___y_2632_ = v_a_2643_;
goto v___jp_2630_;
}
else
{
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_dec_ref_known(v___x_2654_, 1);
v___y_2631_ = v_a_2650_;
v___y_2632_ = v_a_2643_;
goto v___jp_2630_;
}
else
{
lean_object* v_a_2655_; 
lean_dec(v_a_2650_);
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2654_, 1);
v___y_2589_ = v_a_2643_;
v_a_2590_ = v_a_2655_;
goto v___jp_2588_;
}
}
}
}
}
}
v___jp_2656_:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; uint8_t v___x_2677_; uint8_t v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2658_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__9));
v___x_2659_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_2660_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_2661_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__18));
v___x_2662_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_2663_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__20));
v___x_2664_ = lean_string_append(v___x_2663_, v_contentType_2558_);
v___x_2665_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__26);
v___x_2666_ = lean_array_push(v___x_2665_, v_key_2560_);
v___x_2667_ = lean_array_push(v___x_2666_, v___x_2659_);
v___x_2668_ = lean_array_push(v___x_2667_, v___x_2660_);
v___x_2669_ = lean_array_push(v___x_2668_, v___x_2661_);
v___x_2670_ = lean_array_push(v___x_2669_, v_file_2557_);
v___x_2671_ = lean_array_push(v___x_2670_, v_url_2559_);
v___x_2672_ = lean_array_push(v___x_2671_, v___x_2662_);
v___x_2673_ = lean_array_push(v___x_2672_, v___x_2664_);
v___x_2674_ = lean_box(0);
v___x_2675_ = lean_unsigned_to_nat(0u);
v___x_2676_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_2677_ = 1;
v___x_2678_ = 0;
v___x_2679_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2679_, 0, v___x_2658_);
lean_ctor_set(v___x_2679_, 1, v_a_2657_);
lean_ctor_set(v___x_2679_, 2, v___x_2673_);
lean_ctor_set(v___x_2679_, 3, v___x_2674_);
lean_ctor_set(v___x_2679_, 4, v___x_2676_);
lean_ctor_set_uint8(v___x_2679_, sizeof(void*)*5, v___x_2677_);
lean_ctor_set_uint8(v___x_2679_, sizeof(void*)*5 + 1, v___x_2678_);
v___x_2680_ = l_Lake_captureProc_x27(v___x_2679_, v___x_2676_);
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v_a_2681_; lean_object* v_a_2682_; lean_object* v___x_2683_; uint8_t v___x_2684_; 
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
lean_inc(v_a_2681_);
v_a_2682_ = lean_ctor_get(v___x_2680_, 1);
lean_inc(v_a_2682_);
lean_dec_ref_known(v___x_2680_, 2);
v___x_2683_ = lean_array_get_size(v_a_2682_);
v___x_2684_ = lean_nat_dec_lt(v___x_2675_, v___x_2683_);
if (v___x_2684_ == 0)
{
lean_dec(v_a_2682_);
v_a_2643_ = v_a_2681_;
goto v___jp_2642_;
}
else
{
lean_object* v___x_2685_; size_t v___x_2686_; size_t v___x_2687_; lean_object* v___x_2688_; 
v___x_2685_ = lean_box(0);
v___x_2686_ = ((size_t)0ULL);
v___x_2687_ = lean_usize_of_nat(v___x_2683_);
v___x_2688_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2682_, v___x_2686_, v___x_2687_, v___x_2685_, v___y_2561_);
lean_dec(v_a_2682_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_dec_ref_known(v___x_2688_, 1);
v_a_2643_ = v_a_2681_;
goto v___jp_2642_;
}
else
{
lean_dec(v_a_2681_);
return v___x_2688_;
}
}
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2690_; uint8_t v___x_2691_; 
v_a_2689_ = lean_ctor_get(v___x_2680_, 1);
lean_inc(v_a_2689_);
lean_dec_ref_known(v___x_2680_, 2);
v___x_2690_ = lean_array_get_size(v_a_2689_);
v___x_2691_ = lean_nat_dec_lt(v___x_2675_, v___x_2690_);
if (v___x_2691_ == 0)
{
lean_object* v___x_2692_; lean_object* v___x_2693_; 
lean_dec(v_a_2689_);
v___x_2692_ = lean_box(0);
v___x_2693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2692_);
return v___x_2693_;
}
else
{
lean_object* v___x_2694_; size_t v___x_2695_; size_t v___x_2696_; lean_object* v___x_2697_; 
v___x_2694_ = lean_box(0);
v___x_2695_ = ((size_t)0ULL);
v___x_2696_ = lean_usize_of_nat(v___x_2690_);
v___x_2697_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2689_, v___x_2695_, v___x_2696_, v___x_2694_, v___y_2561_);
lean_dec(v_a_2689_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2704_; 
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2704_ == 0)
{
lean_object* v_unused_2705_; 
v_unused_2705_ = lean_ctor_get(v___x_2697_, 0);
lean_dec(v_unused_2705_);
v___x_2699_ = v___x_2697_;
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
else
{
lean_dec(v___x_2697_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2702_; 
if (v_isShared_2700_ == 0)
{
lean_ctor_set_tag(v___x_2699_, 1);
lean_ctor_set(v___x_2699_, 0, v___x_2694_);
v___x_2702_ = v___x_2699_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v___x_2694_);
v___x_2702_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
return v___x_2702_;
}
}
}
else
{
return v___x_2697_;
}
}
}
}
v___jp_2707_:
{
uint8_t v___x_2709_; 
v___x_2709_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_2709_ == 0)
{
v_a_2657_ = v_val_2708_;
goto v___jp_2656_;
}
else
{
lean_object* v___x_2710_; size_t v___x_2711_; size_t v___x_2712_; lean_object* v___x_2713_; 
v___x_2710_ = lean_box(0);
v___x_2711_ = ((size_t)0ULL);
v___x_2712_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_2713_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_2706_, v___x_2711_, v___x_2712_, v___x_2710_, v___y_2561_);
if (lean_obj_tag(v___x_2713_) == 0)
{
lean_dec_ref_known(v___x_2713_, 1);
v_a_2657_ = v_val_2708_;
goto v___jp_2656_;
}
else
{
lean_dec_ref(v_val_2708_);
lean_dec_ref(v_key_2560_);
lean_dec_ref(v_url_2559_);
lean_dec_ref(v_file_2557_);
return v___x_2713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_uploadS3___boxed(lean_object* v_file_2718_, lean_object* v_contentType_2719_, lean_object* v_url_2720_, lean_object* v_key_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l___private_Lake_Config_Cache_0__Lake_uploadS3(v_file_2718_, v_contentType_2719_, v_url_2720_, v_key_2721_, v___y_2722_);
lean_dec_ref(v___y_2722_);
lean_dec_ref(v_contentType_2719_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f(lean_object* v_service_2725_){
_start:
{
lean_object* v_name_x3f_2726_; 
v_name_x3f_2726_ = lean_ctor_get(v_service_2725_, 0);
lean_inc(v_name_x3f_2726_);
return v_name_x3f_2726_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_name_x3f___boxed(lean_object* v_service_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Lake_CacheService_name_x3f(v_service_2727_);
lean_dec_ref(v_service_2727_);
return v_res_2728_;
}
}
LEAN_EXPORT uint8_t l_Lake_CacheService_isReservoir(lean_object* v_service_2729_){
_start:
{
uint8_t v_isReservoir_2730_; 
v_isReservoir_2730_ = lean_ctor_get_uint8(v_service_2729_, sizeof(void*)*5);
return v_isReservoir_2730_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_isReservoir___boxed(lean_object* v_service_2731_){
_start:
{
uint8_t v_res_2732_; lean_object* v_r_2733_; 
v_res_2732_ = l_Lake_CacheService_isReservoir(v_service_2731_);
lean_dec_ref(v_service_2731_);
v_r_2733_ = lean_box(v_res_2732_);
return v_r_2733_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_reservoirService(lean_object* v_apiEndpoint_2734_, lean_object* v_name_x3f_2735_){
_start:
{
lean_object* v___x_2736_; uint8_t v___x_2737_; lean_object* v___x_2738_; 
v___x_2736_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2737_ = 1;
v___x_2738_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2738_, 0, v_name_x3f_2735_);
lean_ctor_set(v___x_2738_, 1, v___x_2736_);
lean_ctor_set(v___x_2738_, 2, v___x_2736_);
lean_ctor_set(v___x_2738_, 3, v___x_2736_);
lean_ctor_set(v___x_2738_, 4, v_apiEndpoint_2734_);
lean_ctor_set_uint8(v___x_2738_, sizeof(void*)*5, v___x_2737_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadService(lean_object* v_key_2739_, lean_object* v_artifactEndpoint_2740_, lean_object* v_revisionEndpoint_2741_){
_start:
{
lean_object* v___x_2742_; uint8_t v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; 
v___x_2742_ = lean_box(0);
v___x_2743_ = 0;
v___x_2744_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2745_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2745_, 0, v___x_2742_);
lean_ctor_set(v___x_2745_, 1, v_key_2739_);
lean_ctor_set(v___x_2745_, 2, v_artifactEndpoint_2740_);
lean_ctor_set(v___x_2745_, 3, v_revisionEndpoint_2741_);
lean_ctor_set(v___x_2745_, 4, v___x_2744_);
lean_ctor_set_uint8(v___x_2745_, sizeof(void*)*5, v___x_2743_);
return v___x_2745_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadService(lean_object* v_artifactEndpoint_2746_, lean_object* v_revisionEndpoint_2747_, lean_object* v_name_x3f_2748_){
_start:
{
lean_object* v___x_2749_; uint8_t v___x_2750_; lean_object* v___x_2751_; 
v___x_2749_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2750_ = 0;
v___x_2751_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2751_, 0, v_name_x3f_2748_);
lean_ctor_set(v___x_2751_, 1, v___x_2749_);
lean_ctor_set(v___x_2751_, 2, v_artifactEndpoint_2746_);
lean_ctor_set(v___x_2751_, 3, v_revisionEndpoint_2747_);
lean_ctor_set(v___x_2751_, 4, v___x_2749_);
lean_ctor_set_uint8(v___x_2751_, sizeof(void*)*5, v___x_2750_);
return v___x_2751_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtsService(lean_object* v_artifactEndpoint_2752_, lean_object* v_name_x3f_2753_){
_start:
{
lean_object* v___x_2754_; uint8_t v___x_2755_; lean_object* v___x_2756_; 
v___x_2754_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_2755_ = 0;
v___x_2756_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2756_, 0, v_name_x3f_2753_);
lean_ctor_set(v___x_2756_, 1, v___x_2754_);
lean_ctor_set(v___x_2756_, 2, v_artifactEndpoint_2752_);
lean_ctor_set(v___x_2756_, 3, v___x_2754_);
lean_ctor_set(v___x_2756_, 4, v___x_2754_);
lean_ctor_set_uint8(v___x_2756_, sizeof(void*)*5, v___x_2755_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_withKey(lean_object* v_service_2757_, lean_object* v_key_2758_){
_start:
{
lean_object* v_name_x3f_2759_; lean_object* v_artifactEndpoint_2760_; lean_object* v_revisionEndpoint_2761_; uint8_t v_isReservoir_2762_; lean_object* v_apiEndpoint_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
v_name_x3f_2759_ = lean_ctor_get(v_service_2757_, 0);
v_artifactEndpoint_2760_ = lean_ctor_get(v_service_2757_, 2);
v_revisionEndpoint_2761_ = lean_ctor_get(v_service_2757_, 3);
v_isReservoir_2762_ = lean_ctor_get_uint8(v_service_2757_, sizeof(void*)*5);
v_apiEndpoint_2763_ = lean_ctor_get(v_service_2757_, 4);
v_isSharedCheck_2770_ = !lean_is_exclusive(v_service_2757_);
if (v_isSharedCheck_2770_ == 0)
{
lean_object* v_unused_2771_; 
v_unused_2771_ = lean_ctor_get(v_service_2757_, 1);
lean_dec(v_unused_2771_);
v___x_2765_ = v_service_2757_;
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_apiEndpoint_2763_);
lean_inc(v_revisionEndpoint_2761_);
lean_inc(v_artifactEndpoint_2760_);
lean_inc(v_name_x3f_2759_);
lean_dec(v_service_2757_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
lean_ctor_set(v___x_2765_, 1, v_key_2758_);
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_name_x3f_2759_);
lean_ctor_set(v_reuseFailAlloc_2769_, 1, v_key_2758_);
lean_ctor_set(v_reuseFailAlloc_2769_, 2, v_artifactEndpoint_2760_);
lean_ctor_set(v_reuseFailAlloc_2769_, 3, v_revisionEndpoint_2761_);
lean_ctor_set(v_reuseFailAlloc_2769_, 4, v_apiEndpoint_2763_);
lean_ctor_set_uint8(v_reuseFailAlloc_2769_, sizeof(void*)*5, v_isReservoir_2762_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg(){
_start:
{
lean_object* v___x_2777_; 
v___x_2777_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg___closed__0));
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg___boxed(lean_object* v___dummy_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg();
return v_res_2779_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2780_; 
v___x_2780_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___redArg();
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(lean_object* v_s_2781_){
_start:
{
lean_object* v___x_2782_; 
v___x_2782_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___boxed(lean_object* v_s_2783_){
_start:
{
lean_object* v_res_2784_; 
v_res_2784_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0(v_s_2783_);
lean_dec_ref(v_s_2783_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(lean_object* v_scope_2785_, lean_object* v___x_2786_, lean_object* v___x_2787_, lean_object* v_a_2788_, lean_object* v_b_2789_){
_start:
{
if (lean_obj_tag(v_a_2788_) == 0)
{
lean_object* v_currPos_2790_; lean_object* v_searcher_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2822_; 
v_currPos_2790_ = lean_ctor_get(v_a_2788_, 0);
v_searcher_2791_ = lean_ctor_get(v_a_2788_, 1);
v_isSharedCheck_2822_ = !lean_is_exclusive(v_a_2788_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2793_ = v_a_2788_;
v_isShared_2794_ = v_isSharedCheck_2822_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_searcher_2791_);
lean_inc(v_currPos_2790_);
lean_dec(v_a_2788_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2822_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
uint32_t v___x_2795_; lean_object* v_it_2797_; lean_object* v_startInclusive_2798_; lean_object* v_endExclusive_2799_; uint8_t v_decide_2804_; 
v___x_2795_ = 47;
v_decide_2804_ = lean_nat_dec_eq(v_searcher_2791_, v___x_2787_);
if (v_decide_2804_ == 0)
{
uint32_t v___x_2805_; uint8_t v___x_2806_; 
v___x_2805_ = lean_string_utf8_get_fast(v_scope_2785_, v_searcher_2791_);
v___x_2806_ = lean_uint32_dec_eq(v___x_2805_, v___x_2795_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; lean_object* v___x_2809_; 
v___x_2807_ = lean_string_utf8_next_fast(v_scope_2785_, v_searcher_2791_);
lean_dec(v_searcher_2791_);
if (v_isShared_2794_ == 0)
{
lean_ctor_set(v___x_2793_, 1, v___x_2807_);
v___x_2809_ = v___x_2793_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v_currPos_2790_);
lean_ctor_set(v_reuseFailAlloc_2811_, 1, v___x_2807_);
v___x_2809_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
v_a_2788_ = v___x_2809_;
goto _start;
}
}
else
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v_slice_2815_; lean_object* v_nextIt_2817_; 
v___x_2812_ = lean_string_utf8_next_fast(v_scope_2785_, v_searcher_2791_);
v___x_2813_ = lean_nat_sub(v___x_2812_, v_searcher_2791_);
v___x_2814_ = lean_nat_add(v_searcher_2791_, v___x_2813_);
lean_dec(v___x_2813_);
v_slice_2815_ = l_String_Slice_subslice_x21(v___x_2786_, v_currPos_2790_, v_searcher_2791_);
lean_inc(v___x_2814_);
if (v_isShared_2794_ == 0)
{
lean_ctor_set(v___x_2793_, 1, v___x_2814_);
lean_ctor_set(v___x_2793_, 0, v___x_2814_);
v_nextIt_2817_ = v___x_2793_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v___x_2814_);
lean_ctor_set(v_reuseFailAlloc_2820_, 1, v___x_2814_);
v_nextIt_2817_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
lean_object* v_startInclusive_2818_; lean_object* v_endExclusive_2819_; 
v_startInclusive_2818_ = lean_ctor_get(v_slice_2815_, 0);
lean_inc(v_startInclusive_2818_);
v_endExclusive_2819_ = lean_ctor_get(v_slice_2815_, 1);
lean_inc(v_endExclusive_2819_);
lean_dec_ref(v_slice_2815_);
v_it_2797_ = v_nextIt_2817_;
v_startInclusive_2798_ = v_startInclusive_2818_;
v_endExclusive_2799_ = v_endExclusive_2819_;
goto v___jp_2796_;
}
}
}
else
{
lean_object* v___x_2821_; 
lean_del_object(v___x_2793_);
lean_dec(v_searcher_2791_);
v___x_2821_ = lean_box(1);
lean_inc(v___x_2787_);
v_it_2797_ = v___x_2821_;
v_startInclusive_2798_ = v_currPos_2790_;
v_endExclusive_2799_ = v___x_2787_;
goto v___jp_2796_;
}
v___jp_2796_:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___x_2800_ = lean_string_utf8_extract_fast(v_scope_2785_, v_startInclusive_2798_, v_endExclusive_2799_);
lean_dec(v_endExclusive_2799_);
lean_dec(v_startInclusive_2798_);
v___x_2801_ = lean_string_push(v_b_2789_, v___x_2795_);
v___x_2802_ = l_Lake_uriEncode(v___x_2800_, v___x_2801_);
lean_dec_ref(v___x_2800_);
v_a_2788_ = v_it_2797_;
v_b_2789_ = v___x_2802_;
goto _start;
}
}
}
else
{
lean_dec(v___x_2787_);
return v_b_2789_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg___boxed(lean_object* v_scope_2823_, lean_object* v___x_2824_, lean_object* v___x_2825_, lean_object* v_a_2826_, lean_object* v_b_2827_){
_start:
{
lean_object* v_res_2828_; 
v_res_2828_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2823_, v___x_2824_, v___x_2825_, v_a_2826_, v_b_2827_);
lean_dec_ref(v___x_2824_);
lean_dec_ref(v_scope_2823_);
return v_res_2828_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(lean_object* v_endpoint_2829_, lean_object* v_scope_2830_){
_start:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2831_ = lean_unsigned_to_nat(0u);
v___x_2832_ = lean_string_utf8_byte_size(v_scope_2830_);
lean_inc_ref(v_scope_2830_);
v___x_2833_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2833_, 0, v_scope_2830_);
lean_ctor_set(v___x_2833_, 1, v___x_2831_);
lean_ctor_set(v___x_2833_, 2, v___x_2832_);
v___x_2834_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__0___closed__0);
v___x_2835_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2830_, v___x_2833_, v___x_2832_, v___x_2834_, v_endpoint_2829_);
lean_dec_ref_known(v___x_2833_, 3);
lean_dec_ref(v_scope_2830_);
return v___x_2835_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(lean_object* v_scope_2836_, lean_object* v___x_2837_, lean_object* v___x_2838_, lean_object* v_inst_2839_, lean_object* v_R_2840_, lean_object* v_a_2841_, lean_object* v_b_2842_, lean_object* v_c_2843_){
_start:
{
lean_object* v___x_2844_; 
v___x_2844_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___redArg(v_scope_2836_, v___x_2837_, v___x_2838_, v_a_2841_, v_b_2842_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1___boxed(lean_object* v_scope_2845_, lean_object* v___x_2846_, lean_object* v___x_2847_, lean_object* v_inst_2848_, lean_object* v_R_2849_, lean_object* v_a_2850_, lean_object* v_b_2851_, lean_object* v_c_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Config_Cache_0__Lake_CacheService_appendScope_spec__1(v_scope_2845_, v___x_2846_, v___x_2847_, v_inst_2848_, v_R_2849_, v_a_2850_, v_b_2851_, v_c_2852_);
lean_dec_ref(v___x_2846_);
lean_dec_ref(v_scope_2845_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(lean_object* v_service_2854_, lean_object* v_scope_2855_){
_start:
{
lean_object* v_artifactEndpoint_2856_; lean_object* v___x_2857_; 
v_artifactEndpoint_2856_ = lean_ctor_get(v_service_2854_, 2);
lean_inc_ref(v_artifactEndpoint_2856_);
lean_dec_ref(v_service_2854_);
v___x_2857_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_artifactEndpoint_2856_, v_scope_2855_);
return v___x_2857_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(uint64_t v_contentHash_2860_, lean_object* v_service_2861_, lean_object* v_scope_2862_){
_start:
{
lean_object* v___y_2864_; lean_object* v_s_2871_; lean_object* v___x_2872_; 
v_s_2871_ = lean_ctor_get(v_scope_2862_, 0);
lean_inc_ref(v_s_2871_);
lean_dec_ref(v_scope_2862_);
v___x_2872_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___lam__0(v_service_2861_, v_s_2871_);
v___y_2864_ = v___x_2872_;
goto v___jp_2863_;
v___jp_2863_:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2865_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_2866_ = lean_string_append(v___y_2864_, v___x_2865_);
v___x_2867_ = l_Lake_lowerHexUInt64(v_contentHash_2860_);
v___x_2868_ = lean_string_append(v___x_2866_, v___x_2867_);
lean_dec_ref(v___x_2867_);
v___x_2869_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1));
v___x_2870_ = lean_string_append(v___x_2868_, v___x_2869_);
return v___x_2870_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___boxed(lean_object* v_contentHash_2873_, lean_object* v_service_2874_, lean_object* v_scope_2875_){
_start:
{
uint64_t v_contentHash_boxed_2876_; lean_object* v_res_2877_; 
v_contentHash_boxed_2876_ = lean_unbox_uint64(v_contentHash_2873_);
lean_dec_ref(v_contentHash_2873_);
v_res_2877_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_boxed_2876_, v_service_2874_, v_scope_2875_);
return v_res_2877_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl(uint64_t v_contentHash_2881_, lean_object* v_service_2882_, lean_object* v_scope_2883_){
_start:
{
lean_object* v___y_2885_; uint8_t v_isReservoir_2892_; 
v_isReservoir_2892_ = lean_ctor_get_uint8(v_service_2882_, sizeof(void*)*5);
if (v_isReservoir_2892_ == 0)
{
lean_object* v___x_2893_; 
v___x_2893_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_2881_, v_service_2882_, v_scope_2883_);
return v___x_2893_;
}
else
{
if (lean_obj_tag(v_scope_2883_) == 0)
{
lean_object* v_apiEndpoint_2894_; lean_object* v_s_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
v_apiEndpoint_2894_ = lean_ctor_get(v_service_2882_, 4);
lean_inc_ref(v_apiEndpoint_2894_);
lean_dec_ref(v_service_2882_);
v_s_2895_ = lean_ctor_get(v_scope_2883_, 0);
lean_inc_ref(v_s_2895_);
lean_dec_ref_known(v_scope_2883_, 1);
v___x_2896_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_2897_ = lean_string_append(v_apiEndpoint_2894_, v___x_2896_);
v___x_2898_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_2897_, v_s_2895_);
v___y_2885_ = v___x_2898_;
goto v___jp_2884_;
}
else
{
lean_object* v_apiEndpoint_2899_; lean_object* v_s_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v_apiEndpoint_2899_ = lean_ctor_get(v_service_2882_, 4);
lean_inc_ref(v_apiEndpoint_2899_);
lean_dec_ref(v_service_2882_);
v_s_2900_ = lean_ctor_get(v_scope_2883_, 0);
lean_inc_ref(v_s_2900_);
lean_dec_ref_known(v_scope_2883_, 1);
v___x_2901_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_2902_ = lean_string_append(v_apiEndpoint_2899_, v___x_2901_);
v___x_2903_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_2902_, v_s_2900_);
v___y_2885_ = v___x_2903_;
goto v___jp_2884_;
}
}
v___jp_2884_:
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2886_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__0));
v___x_2887_ = lean_string_append(v___y_2885_, v___x_2886_);
v___x_2888_ = l_Lake_lowerHexUInt64(v_contentHash_2881_);
v___x_2889_ = lean_string_append(v___x_2887_, v___x_2888_);
lean_dec_ref(v___x_2888_);
v___x_2890_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__1));
v___x_2891_ = lean_string_append(v___x_2889_, v___x_2890_);
return v___x_2891_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_artifactUrl___boxed(lean_object* v_contentHash_2904_, lean_object* v_service_2905_, lean_object* v_scope_2906_){
_start:
{
uint64_t v_contentHash_boxed_2907_; lean_object* v_res_2908_; 
v_contentHash_boxed_2907_ = lean_unbox_uint64(v_contentHash_2904_);
lean_dec_ref(v_contentHash_2904_);
v_res_2908_ = l_Lake_CacheService_artifactUrl(v_contentHash_boxed_2907_, v_service_2905_, v_scope_2906_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact(lean_object* v_descr_2912_, lean_object* v_cache_2913_, lean_object* v_service_2914_, lean_object* v_scope_2915_, uint8_t v_force_2916_, lean_object* v___y_2917_){
_start:
{
uint64_t v_hash_2919_; lean_object* v_ext_2920_; lean_object* v_url_2921_; lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___y_2976_; lean_object* v___y_2979_; uint8_t v_a_2980_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___y_2986_; lean_object* v___x_2995_; lean_object* v___x_2996_; uint8_t v___x_2997_; 
v_hash_2919_ = lean_ctor_get_uint64(v_descr_2912_, sizeof(void*)*1);
v_ext_2920_ = lean_ctor_get(v_descr_2912_, 0);
lean_inc_ref(v_scope_2915_);
v_url_2921_ = l_Lake_CacheService_artifactUrl(v_hash_2919_, v_service_2914_, v_scope_2915_);
v___x_2983_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_2984_ = l_System_FilePath_join(v_cache_2913_, v___x_2983_);
v___x_2995_ = lean_string_utf8_byte_size(v_ext_2920_);
v___x_2996_ = lean_unsigned_to_nat(0u);
v___x_2997_ = lean_nat_dec_eq(v___x_2995_, v___x_2996_);
if (v___x_2997_ == 0)
{
lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_2998_ = l_Lake_lowerHexUInt64(v_hash_2919_);
v___x_2999_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_3000_ = lean_string_append(v___x_2998_, v___x_2999_);
v___x_3001_ = lean_string_append(v___x_3000_, v_ext_2920_);
v___y_2986_ = v___x_3001_;
goto v___jp_2985_;
}
else
{
lean_object* v___x_3002_; 
v___x_3002_ = l_Lake_lowerHexUInt64(v_hash_2919_);
v___y_2986_ = v___x_3002_;
goto v___jp_2985_;
}
v___jp_2922_:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; uint8_t v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; 
v___x_2925_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__0));
v___x_2926_ = lean_string_append(v___y_2924_, v___x_2925_);
v___x_2927_ = l_Lake_lowerHexUInt64(v_hash_2919_);
v___x_2928_ = lean_string_append(v___x_2926_, v___x_2927_);
lean_dec_ref(v___x_2927_);
v___x_2929_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_2930_ = lean_string_append(v___x_2928_, v___x_2929_);
v___x_2931_ = lean_string_append(v___x_2930_, v___y_2923_);
v___x_2932_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_2933_ = lean_string_append(v___x_2931_, v___x_2932_);
v___x_2934_ = lean_string_append(v___x_2933_, v_url_2921_);
v___x_2935_ = 1;
v___x_2936_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2936_, 0, v___x_2934_);
lean_ctor_set_uint8(v___x_2936_, sizeof(void*)*1, v___x_2935_);
lean_inc_ref(v___y_2917_);
v___x_2937_ = lean_apply_2(v___y_2917_, v___x_2936_, lean_box(0));
v___x_2938_ = lean_unsigned_to_nat(0u);
v___x_2939_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_2940_ = l_Lake_downloadArtifactCore(v_hash_2919_, v_url_2921_, v___y_2923_, v___x_2939_);
if (lean_obj_tag(v___x_2940_) == 0)
{
lean_object* v_a_2941_; lean_object* v_a_2942_; lean_object* v___x_2943_; uint8_t v___x_2944_; 
v_a_2941_ = lean_ctor_get(v___x_2940_, 0);
lean_inc(v_a_2941_);
v_a_2942_ = lean_ctor_get(v___x_2940_, 1);
lean_inc(v_a_2942_);
lean_dec_ref_known(v___x_2940_, 2);
v___x_2943_ = lean_array_get_size(v_a_2942_);
v___x_2944_ = lean_nat_dec_lt(v___x_2938_, v___x_2943_);
if (v___x_2944_ == 0)
{
lean_object* v___x_2945_; 
lean_dec(v_a_2942_);
v___x_2945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2945_, 0, v_a_2941_);
return v___x_2945_;
}
else
{
lean_object* v___x_2946_; size_t v___x_2947_; size_t v___x_2948_; lean_object* v___x_2949_; 
v___x_2946_ = lean_box(0);
v___x_2947_ = ((size_t)0ULL);
v___x_2948_ = lean_usize_of_nat(v___x_2943_);
v___x_2949_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2942_, v___x_2947_, v___x_2948_, v___x_2946_, v___y_2917_);
lean_dec(v_a_2942_);
if (lean_obj_tag(v___x_2949_) == 0)
{
lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2956_; 
v_isSharedCheck_2956_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_2956_ == 0)
{
lean_object* v_unused_2957_; 
v_unused_2957_ = lean_ctor_get(v___x_2949_, 0);
lean_dec(v_unused_2957_);
v___x_2951_ = v___x_2949_;
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
else
{
lean_dec(v___x_2949_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2954_; 
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 0, v_a_2941_);
v___x_2954_ = v___x_2951_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2955_; 
v_reuseFailAlloc_2955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2955_, 0, v_a_2941_);
v___x_2954_ = v_reuseFailAlloc_2955_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
return v___x_2954_;
}
}
}
else
{
lean_dec(v_a_2941_);
return v___x_2949_;
}
}
}
else
{
lean_object* v_a_2958_; lean_object* v___x_2959_; uint8_t v___x_2960_; 
v_a_2958_ = lean_ctor_get(v___x_2940_, 1);
lean_inc(v_a_2958_);
lean_dec_ref_known(v___x_2940_, 2);
v___x_2959_ = lean_array_get_size(v_a_2958_);
v___x_2960_ = lean_nat_dec_lt(v___x_2938_, v___x_2959_);
if (v___x_2960_ == 0)
{
lean_object* v___x_2961_; lean_object* v___x_2962_; 
lean_dec(v_a_2958_);
v___x_2961_ = lean_box(0);
v___x_2962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
return v___x_2962_;
}
else
{
lean_object* v___x_2963_; size_t v___x_2964_; size_t v___x_2965_; lean_object* v___x_2966_; 
v___x_2963_ = lean_box(0);
v___x_2964_ = ((size_t)0ULL);
v___x_2965_ = lean_usize_of_nat(v___x_2959_);
v___x_2966_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_2958_, v___x_2964_, v___x_2965_, v___x_2963_, v___y_2917_);
lean_dec(v_a_2958_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2973_; 
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_2973_ == 0)
{
lean_object* v_unused_2974_; 
v_unused_2974_ = lean_ctor_get(v___x_2966_, 0);
lean_dec(v_unused_2974_);
v___x_2968_ = v___x_2966_;
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
else
{
lean_dec(v___x_2966_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2971_; 
if (v_isShared_2969_ == 0)
{
lean_ctor_set_tag(v___x_2968_, 1);
lean_ctor_set(v___x_2968_, 0, v___x_2963_);
v___x_2971_ = v___x_2968_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2963_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
return v___x_2971_;
}
}
}
else
{
return v___x_2966_;
}
}
}
}
v___jp_2975_:
{
lean_object* v_s_2977_; 
v_s_2977_ = lean_ctor_get(v_scope_2915_, 0);
lean_inc_ref(v_s_2977_);
lean_dec_ref(v_scope_2915_);
v___y_2923_ = v___y_2976_;
v___y_2924_ = v_s_2977_;
goto v___jp_2922_;
}
v___jp_2978_:
{
if (v_a_2980_ == 0)
{
v___y_2976_ = v___y_2979_;
goto v___jp_2975_;
}
else
{
if (v_force_2916_ == 0)
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
lean_dec_ref(v___y_2979_);
lean_dec_ref(v_url_2921_);
lean_dec_ref(v_scope_2915_);
v___x_2981_ = lean_box(0);
v___x_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2981_);
return v___x_2982_;
}
else
{
v___y_2976_ = v___y_2979_;
goto v___jp_2975_;
}
}
}
v___jp_2985_:
{
lean_object* v_path_2987_; lean_object* v___x_2988_; uint8_t v___x_2989_; uint8_t v___x_2990_; 
v_path_2987_ = l_System_FilePath_join(v___x_2984_, v___y_2986_);
v___x_2988_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_2989_ = l_System_FilePath_pathExists(v_path_2987_);
v___x_2990_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_2990_ == 0)
{
v___y_2979_ = v_path_2987_;
v_a_2980_ = v___x_2989_;
goto v___jp_2978_;
}
else
{
lean_object* v___x_2991_; size_t v___x_2992_; size_t v___x_2993_; lean_object* v___x_2994_; 
v___x_2991_ = lean_box(0);
v___x_2992_ = ((size_t)0ULL);
v___x_2993_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_2994_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_2988_, v___x_2992_, v___x_2993_, v___x_2991_, v___y_2917_);
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_dec_ref_known(v___x_2994_, 1);
v___y_2979_ = v_path_2987_;
v_a_2980_ = v___x_2989_;
goto v___jp_2978_;
}
else
{
lean_dec_ref(v_path_2987_);
lean_dec_ref(v_url_2921_);
lean_dec_ref(v_scope_2915_);
return v___x_2994_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifact___boxed(lean_object* v_descr_3003_, lean_object* v_cache_3004_, lean_object* v_service_3005_, lean_object* v_scope_3006_, lean_object* v_force_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_){
_start:
{
uint8_t v_force_boxed_3010_; lean_object* v_res_3011_; 
v_force_boxed_3010_ = lean_unbox(v_force_3007_);
v_res_3011_ = l_Lake_CacheService_downloadArtifact(v_descr_3003_, v_cache_3004_, v_service_3005_, v_scope_3006_, v_force_boxed_3010_, v___y_3008_);
lean_dec_ref(v___y_3008_);
lean_dec_ref(v_descr_3003_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact(uint64_t v_contentHash_3013_, lean_object* v_art_3014_, lean_object* v_service_3015_, lean_object* v_scope_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v_url_3019_; lean_object* v___y_3021_; lean_object* v_s_3038_; 
lean_inc_ref(v_scope_3016_);
lean_inc_ref(v_service_3015_);
v_url_3019_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl(v_contentHash_3013_, v_service_3015_, v_scope_3016_);
v_s_3038_ = lean_ctor_get(v_scope_3016_, 0);
lean_inc_ref(v_s_3038_);
lean_dec_ref(v_scope_3016_);
v___y_3021_ = v_s_3038_;
goto v___jp_3020_;
v___jp_3020_:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; uint8_t v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v_key_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3022_ = ((lean_object*)(l_Lake_CacheService_uploadArtifact___closed__0));
v___x_3023_ = lean_string_append(v___y_3021_, v___x_3022_);
v___x_3024_ = l_Lake_lowerHexUInt64(v_contentHash_3013_);
v___x_3025_ = lean_string_append(v___x_3023_, v___x_3024_);
lean_dec_ref(v___x_3024_);
v___x_3026_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3027_ = lean_string_append(v___x_3025_, v___x_3026_);
v___x_3028_ = lean_string_append(v___x_3027_, v_art_3014_);
v___x_3029_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3030_ = lean_string_append(v___x_3028_, v___x_3029_);
v___x_3031_ = lean_string_append(v___x_3030_, v_url_3019_);
v___x_3032_ = 1;
v___x_3033_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3033_, 0, v___x_3031_);
lean_ctor_set_uint8(v___x_3033_, sizeof(void*)*1, v___x_3032_);
lean_inc_ref(v___y_3017_);
v___x_3034_ = lean_apply_2(v___y_3017_, v___x_3033_, lean_box(0));
v_key_3035_ = lean_ctor_get(v_service_3015_, 1);
lean_inc_ref(v_key_3035_);
lean_dec_ref(v_service_3015_);
v___x_3036_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_3037_ = l___private_Lake_Config_Cache_0__Lake_uploadS3(v_art_3014_, v___x_3036_, v_url_3019_, v_key_3035_, v___y_3017_);
return v___x_3037_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifact___boxed(lean_object* v_contentHash_3039_, lean_object* v_art_3040_, lean_object* v_service_3041_, lean_object* v_scope_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_){
_start:
{
uint64_t v_contentHash_boxed_3045_; lean_object* v_res_3046_; 
v_contentHash_boxed_3045_ = lean_unbox_uint64(v_contentHash_3039_);
lean_dec_ref(v_contentHash_3039_);
v_res_3046_ = l_Lake_CacheService_uploadArtifact(v_contentHash_boxed_3045_, v_art_3040_, v_service_3041_, v_scope_3042_, v___y_3043_);
lean_dec_ref(v___y_3043_);
return v_res_3046_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(uint8_t v_x_3047_){
_start:
{
if (v_x_3047_ == 0)
{
lean_object* v___x_3048_; 
v___x_3048_ = lean_unsigned_to_nat(0u);
return v___x_3048_;
}
else
{
lean_object* v___x_3049_; 
v___x_3049_ = lean_unsigned_to_nat(1u);
return v___x_3049_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx___boxed(lean_object* v_x_3050_){
_start:
{
uint8_t v_x_boxed_3051_; lean_object* v_res_3052_; 
v_x_boxed_3051_ = lean_unbox(v_x_3050_);
v_res_3052_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_boxed_3051_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(lean_object* v_k_3053_){
_start:
{
lean_inc(v_k_3053_);
return v_k_3053_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg___boxed(lean_object* v_k_3054_){
_start:
{
lean_object* v_res_3055_; 
v_res_3055_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___redArg(v_k_3054_);
lean_dec(v_k_3054_);
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(lean_object* v_motive_3056_, lean_object* v_ctorIdx_3057_, uint8_t v_t_3058_, lean_object* v_h_3059_, lean_object* v_k_3060_){
_start:
{
lean_inc(v_k_3060_);
return v_k_3060_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim___boxed(lean_object* v_motive_3061_, lean_object* v_ctorIdx_3062_, lean_object* v_t_3063_, lean_object* v_h_3064_, lean_object* v_k_3065_){
_start:
{
uint8_t v_t_boxed_3066_; lean_object* v_res_3067_; 
v_t_boxed_3066_ = lean_unbox(v_t_3063_);
v_res_3067_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorElim(v_motive_3061_, v_ctorIdx_3062_, v_t_boxed_3066_, v_h_3064_, v_k_3065_);
lean_dec(v_k_3065_);
lean_dec(v_ctorIdx_3062_);
return v_res_3067_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(lean_object* v_get_3068_){
_start:
{
lean_inc(v_get_3068_);
return v_get_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg___boxed(lean_object* v_get_3069_){
_start:
{
lean_object* v_res_3070_; 
v_res_3070_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___redArg(v_get_3069_);
lean_dec(v_get_3069_);
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(lean_object* v_motive_3071_, uint8_t v_t_3072_, lean_object* v_h_3073_, lean_object* v_get_3074_){
_start:
{
lean_inc(v_get_3074_);
return v_get_3074_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim___boxed(lean_object* v_motive_3075_, lean_object* v_t_3076_, lean_object* v_h_3077_, lean_object* v_get_3078_){
_start:
{
uint8_t v_t_boxed_3079_; lean_object* v_res_3080_; 
v_t_boxed_3079_ = lean_unbox(v_t_3076_);
v_res_3080_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_get_elim(v_motive_3075_, v_t_boxed_3079_, v_h_3077_, v_get_3078_);
lean_dec(v_get_3078_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(lean_object* v_put_3081_){
_start:
{
lean_inc(v_put_3081_);
return v_put_3081_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg___boxed(lean_object* v_put_3082_){
_start:
{
lean_object* v_res_3083_; 
v_res_3083_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___redArg(v_put_3082_);
lean_dec(v_put_3082_);
return v_res_3083_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(lean_object* v_motive_3084_, uint8_t v_t_3085_, lean_object* v_h_3086_, lean_object* v_put_3087_){
_start:
{
lean_inc(v_put_3087_);
return v_put_3087_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim___boxed(lean_object* v_motive_3088_, lean_object* v_t_3089_, lean_object* v_h_3090_, lean_object* v_put_3091_){
_start:
{
uint8_t v_t_boxed_3092_; lean_object* v_res_3093_; 
v_t_boxed_3092_ = lean_unbox(v_t_3089_);
v_res_3093_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_put_elim(v_motive_3088_, v_t_boxed_3092_, v_h_3090_, v_put_3091_);
lean_dec(v_put_3091_);
return v_res_3093_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(lean_object* v_n_3094_){
_start:
{
lean_object* v___x_3095_; uint8_t v___x_3096_; 
v___x_3095_ = lean_unsigned_to_nat(0u);
v___x_3096_ = lean_nat_dec_le(v_n_3094_, v___x_3095_);
if (v___x_3096_ == 0)
{
uint8_t v___x_3097_; 
v___x_3097_ = 1;
return v___x_3097_;
}
else
{
uint8_t v___x_3098_; 
v___x_3098_ = 0;
return v___x_3098_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat___boxed(lean_object* v_n_3099_){
_start:
{
uint8_t v_res_3100_; lean_object* v_r_3101_; 
v_res_3100_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ofNat(v_n_3099_);
lean_dec(v_n_3099_);
v_r_3101_ = lean_box(v_res_3100_);
return v_r_3101_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(uint8_t v_x_3102_, uint8_t v_y_3103_){
_start:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; uint8_t v___x_3106_; 
v___x_3104_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_x_3102_);
v___x_3105_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferKind_ctorIdx(v_y_3103_);
v___x_3106_ = lean_nat_dec_eq(v___x_3104_, v___x_3105_);
lean_dec(v___x_3105_);
lean_dec(v___x_3104_);
return v___x_3106_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind___boxed(lean_object* v_x_3107_, lean_object* v_y_3108_){
_start:
{
uint8_t v_x_20__boxed_3109_; uint8_t v_y_21__boxed_3110_; uint8_t v_res_3111_; lean_object* v_r_3112_; 
v_x_20__boxed_3109_ = lean_unbox(v_x_3107_);
v_y_21__boxed_3110_ = lean_unbox(v_y_3108_);
v_res_3111_ = l___private_Lake_Config_Cache_0__Lake_CacheService_instDecidableEqTransferKind(v_x_20__boxed_3109_, v_y_21__boxed_3110_);
v_r_3112_ = lean_box(v_res_3111_);
return v_r_3112_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath(lean_object* v_self_3113_, lean_object* v_path_3114_, uint8_t v_extra_3115_){
_start:
{
if (v_extra_3115_ == 0)
{
lean_object* v_url_3116_; uint64_t v_hash_3117_; lean_object* v_path_3118_; lean_object* v_extraPaths_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3127_; 
v_url_3116_ = lean_ctor_get(v_self_3113_, 0);
v_hash_3117_ = lean_ctor_get_uint64(v_self_3113_, sizeof(void*)*3);
v_path_3118_ = lean_ctor_get(v_self_3113_, 1);
v_extraPaths_3119_ = lean_ctor_get(v_self_3113_, 2);
v_isSharedCheck_3127_ = !lean_is_exclusive(v_self_3113_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3121_ = v_self_3113_;
v_isShared_3122_ = v_isSharedCheck_3127_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_extraPaths_3119_);
lean_inc(v_path_3118_);
lean_inc(v_url_3116_);
lean_dec(v_self_3113_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3127_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3123_; lean_object* v___x_3125_; 
v___x_3123_ = lean_array_push(v_extraPaths_3119_, v_path_3118_);
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 2, v___x_3123_);
lean_ctor_set(v___x_3121_, 1, v_path_3114_);
v___x_3125_ = v___x_3121_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_url_3116_);
lean_ctor_set(v_reuseFailAlloc_3126_, 1, v_path_3114_);
lean_ctor_set(v_reuseFailAlloc_3126_, 2, v___x_3123_);
lean_ctor_set_uint64(v_reuseFailAlloc_3126_, sizeof(void*)*3, v_hash_3117_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
else
{
lean_object* v_url_3128_; uint64_t v_hash_3129_; lean_object* v_path_3130_; lean_object* v_extraPaths_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3139_; 
v_url_3128_ = lean_ctor_get(v_self_3113_, 0);
v_hash_3129_ = lean_ctor_get_uint64(v_self_3113_, sizeof(void*)*3);
v_path_3130_ = lean_ctor_get(v_self_3113_, 1);
v_extraPaths_3131_ = lean_ctor_get(v_self_3113_, 2);
v_isSharedCheck_3139_ = !lean_is_exclusive(v_self_3113_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3133_ = v_self_3113_;
v_isShared_3134_ = v_isSharedCheck_3139_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_extraPaths_3131_);
lean_inc(v_path_3130_);
lean_inc(v_url_3128_);
lean_dec(v_self_3113_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3139_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
lean_object* v___x_3135_; lean_object* v___x_3137_; 
v___x_3135_ = lean_array_push(v_extraPaths_3131_, v_path_3114_);
if (v_isShared_3134_ == 0)
{
lean_ctor_set(v___x_3133_, 2, v___x_3135_);
v___x_3137_ = v___x_3133_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_url_3128_);
lean_ctor_set(v_reuseFailAlloc_3138_, 1, v_path_3130_);
lean_ctor_set(v_reuseFailAlloc_3138_, 2, v___x_3135_);
lean_ctor_set_uint64(v_reuseFailAlloc_3138_, sizeof(void*)*3, v_hash_3129_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath___boxed(lean_object* v_self_3140_, lean_object* v_path_3141_, lean_object* v_extra_3142_){
_start:
{
uint8_t v_extra_boxed_3143_; lean_object* v_res_3144_; 
v_extra_boxed_3143_ = lean_unbox(v_extra_3142_);
v_res_3144_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferInfo_addPath(v_self_3140_, v_path_3141_, v_extra_boxed_3143_);
return v_res_3144_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1(void){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3147_ = lean_obj_once(&l_Lake_CacheMap_parse___closed__1, &l_Lake_CacheMap_parse___closed__1_once, _init_l_Lake_CacheMap_parse___closed__1);
v___x_3148_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__0));
v___x_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
lean_ctor_set(v___x_3149_, 1, v___x_3147_);
return v___x_3149_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty(void){
_start:
{
lean_object* v___x_3150_; 
v___x_3150_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1);
return v___x_3150_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1(void){
_start:
{
lean_object* v___x_3152_; lean_object* v___f_3153_; 
v___x_3152_ = lean_alloc_closure((void*)(l_Lake_instDecidableEqHash___boxed), 2, 0);
v___f_3153_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3153_, 0, v___x_3152_);
return v___f_3153_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push(lean_object* v_self_3154_, lean_object* v_url_3155_, uint64_t v_hash_3156_, lean_object* v_path_3157_){
_start:
{
lean_object* v_infos_3158_; lean_object* v_indices_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3174_; 
v_infos_3158_ = lean_ctor_get(v_self_3154_, 0);
v_indices_3159_ = lean_ctor_get(v_self_3154_, 1);
v_isSharedCheck_3174_ = !lean_is_exclusive(v_self_3154_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3161_ = v_self_3154_;
v_isShared_3162_ = v_isSharedCheck_3174_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_indices_3159_);
lean_inc(v_infos_3158_);
lean_dec(v_self_3154_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3174_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v___f_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___f_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3172_; 
v___f_3163_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0));
v___x_3164_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_3165_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_3165_, 0, v_url_3155_);
lean_ctor_set(v___x_3165_, 1, v_path_3157_);
lean_ctor_set(v___x_3165_, 2, v___x_3164_);
lean_ctor_set_uint64(v___x_3165_, sizeof(void*)*3, v_hash_3156_);
lean_inc_ref(v_infos_3158_);
v___x_3166_ = lean_array_push(v_infos_3158_, v___x_3165_);
v___f_3167_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1);
v___x_3168_ = lean_array_get_size(v_infos_3158_);
lean_dec_ref(v_infos_3158_);
v___x_3169_ = lean_box_uint64(v_hash_3156_);
v___x_3170_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3167_, v___f_3163_, v_indices_3159_, v___x_3169_, v___x_3168_);
if (v_isShared_3162_ == 0)
{
lean_ctor_set(v___x_3161_, 1, v___x_3170_);
lean_ctor_set(v___x_3161_, 0, v___x_3166_);
v___x_3172_ = v___x_3161_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v___x_3166_);
lean_ctor_set(v_reuseFailAlloc_3173_, 1, v___x_3170_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
return v___x_3172_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___boxed(lean_object* v_self_3175_, lean_object* v_url_3176_, lean_object* v_hash_3177_, lean_object* v_path_3178_){
_start:
{
uint64_t v_hash_boxed_3179_; lean_object* v_res_3180_; 
v_hash_boxed_3179_ = lean_unbox_uint64(v_hash_3177_);
lean_dec_ref(v_hash_3177_);
v_res_3180_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push(v_self_3175_, v_url_3176_, v_hash_boxed_3179_, v_path_3178_);
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew(lean_object* v_self_3181_, lean_object* v_url_3182_, uint64_t v_hash_3183_, lean_object* v_path_3184_){
_start:
{
lean_object* v_infos_3185_; lean_object* v_indices_3186_; lean_object* v___f_3187_; lean_object* v___f_3188_; lean_object* v___x_3189_; uint8_t v___x_3190_; 
v_infos_3185_ = lean_ctor_get(v_self_3181_, 0);
v_indices_3186_ = lean_ctor_get(v_self_3181_, 1);
v___f_3187_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0));
v___f_3188_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1);
v___x_3189_ = lean_box_uint64(v_hash_3183_);
v___x_3190_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___f_3188_, v___f_3187_, v_indices_3186_, v___x_3189_);
if (v___x_3190_ == 0)
{
lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3203_; 
lean_inc_ref(v_indices_3186_);
lean_inc_ref(v_infos_3185_);
v_isSharedCheck_3203_ = !lean_is_exclusive(v_self_3181_);
if (v_isSharedCheck_3203_ == 0)
{
lean_object* v_unused_3204_; lean_object* v_unused_3205_; 
v_unused_3204_ = lean_ctor_get(v_self_3181_, 1);
lean_dec(v_unused_3204_);
v_unused_3205_ = lean_ctor_get(v_self_3181_, 0);
lean_dec(v_unused_3205_);
v___x_3192_ = v_self_3181_;
v_isShared_3193_ = v_isSharedCheck_3203_;
goto v_resetjp_3191_;
}
else
{
lean_dec(v_self_3181_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3203_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3201_; 
v___x_3194_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_3195_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_3195_, 0, v_url_3182_);
lean_ctor_set(v___x_3195_, 1, v_path_3184_);
lean_ctor_set(v___x_3195_, 2, v___x_3194_);
lean_ctor_set_uint64(v___x_3195_, sizeof(void*)*3, v_hash_3183_);
lean_inc_ref(v_infos_3185_);
v___x_3196_ = lean_array_push(v_infos_3185_, v___x_3195_);
v___x_3197_ = lean_array_get_size(v_infos_3185_);
lean_dec_ref(v_infos_3185_);
v___x_3198_ = lean_box_uint64(v_hash_3183_);
v___x_3199_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3188_, v___f_3187_, v_indices_3186_, v___x_3198_, v___x_3197_);
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 1, v___x_3199_);
lean_ctor_set(v___x_3192_, 0, v___x_3196_);
v___x_3201_ = v___x_3192_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v___x_3196_);
lean_ctor_set(v_reuseFailAlloc_3202_, 1, v___x_3199_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
else
{
lean_dec_ref(v_path_3184_);
lean_dec_ref(v_url_3182_);
return v_self_3181_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew___boxed(lean_object* v_self_3206_, lean_object* v_url_3207_, lean_object* v_hash_3208_, lean_object* v_path_3209_){
_start:
{
uint64_t v_hash_boxed_3210_; lean_object* v_res_3211_; 
v_hash_boxed_3210_ = lean_unbox_uint64(v_hash_3208_);
lean_dec_ref(v_hash_3208_);
v_res_3211_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_addIfNew(v_self_3206_, v_url_3207_, v_hash_boxed_3210_, v_path_3209_);
return v_res_3211_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add(lean_object* v_self_3212_, lean_object* v_url_3213_, uint64_t v_hash_3214_, lean_object* v_path_3215_, uint8_t v_extra_3216_){
_start:
{
lean_object* v_infos_3217_; lean_object* v_indices_3218_; lean_object* v___f_3219_; lean_object* v___f_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v_infos_3217_ = lean_ctor_get(v_self_3212_, 0);
v_indices_3218_ = lean_ctor_get(v_self_3212_, 1);
v___f_3219_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__0));
v___f_3220_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_push___closed__1);
v___x_3221_ = lean_box_uint64(v_hash_3214_);
v___x_3222_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_3220_, v___f_3219_, v_indices_3218_, v___x_3221_);
if (lean_obj_tag(v___x_3222_) == 1)
{
lean_object* v_val_3223_; lean_object* v___x_3224_; uint8_t v___x_3225_; 
lean_dec_ref(v_url_3213_);
v_val_3223_ = lean_ctor_get(v___x_3222_, 0);
lean_inc(v_val_3223_);
lean_dec_ref_known(v___x_3222_, 1);
v___x_3224_ = lean_array_get_size(v_infos_3217_);
v___x_3225_ = lean_nat_dec_lt(v_val_3223_, v___x_3224_);
if (v___x_3225_ == 0)
{
lean_dec(v_val_3223_);
lean_dec_ref(v_path_3215_);
return v_self_3212_;
}
else
{
lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3262_; 
lean_inc_ref(v_indices_3218_);
lean_inc_ref(v_infos_3217_);
v_isSharedCheck_3262_ = !lean_is_exclusive(v_self_3212_);
if (v_isSharedCheck_3262_ == 0)
{
lean_object* v_unused_3263_; lean_object* v_unused_3264_; 
v_unused_3263_ = lean_ctor_get(v_self_3212_, 1);
lean_dec(v_unused_3263_);
v_unused_3264_ = lean_ctor_get(v_self_3212_, 0);
lean_dec(v_unused_3264_);
v___x_3227_ = v_self_3212_;
v_isShared_3228_ = v_isSharedCheck_3262_;
goto v_resetjp_3226_;
}
else
{
lean_dec(v_self_3212_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3262_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v_v_3229_; lean_object* v___x_3230_; lean_object* v_xs_x27_3231_; lean_object* v___y_3233_; 
v_v_3229_ = lean_array_fget(v_infos_3217_, v_val_3223_);
v___x_3230_ = lean_box(0);
v_xs_x27_3231_ = lean_array_fset(v_infos_3217_, v_val_3223_, v___x_3230_);
if (v_extra_3216_ == 0)
{
lean_object* v_url_3238_; uint64_t v_hash_3239_; lean_object* v_path_3240_; lean_object* v_extraPaths_3241_; lean_object* v___x_3243_; uint8_t v_isShared_3244_; uint8_t v_isSharedCheck_3249_; 
v_url_3238_ = lean_ctor_get(v_v_3229_, 0);
v_hash_3239_ = lean_ctor_get_uint64(v_v_3229_, sizeof(void*)*3);
v_path_3240_ = lean_ctor_get(v_v_3229_, 1);
v_extraPaths_3241_ = lean_ctor_get(v_v_3229_, 2);
v_isSharedCheck_3249_ = !lean_is_exclusive(v_v_3229_);
if (v_isSharedCheck_3249_ == 0)
{
v___x_3243_ = v_v_3229_;
v_isShared_3244_ = v_isSharedCheck_3249_;
goto v_resetjp_3242_;
}
else
{
lean_inc(v_extraPaths_3241_);
lean_inc(v_path_3240_);
lean_inc(v_url_3238_);
lean_dec(v_v_3229_);
v___x_3243_ = lean_box(0);
v_isShared_3244_ = v_isSharedCheck_3249_;
goto v_resetjp_3242_;
}
v_resetjp_3242_:
{
lean_object* v___x_3245_; lean_object* v___x_3247_; 
v___x_3245_ = lean_array_push(v_extraPaths_3241_, v_path_3240_);
if (v_isShared_3244_ == 0)
{
lean_ctor_set(v___x_3243_, 2, v___x_3245_);
lean_ctor_set(v___x_3243_, 1, v_path_3215_);
v___x_3247_ = v___x_3243_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v_url_3238_);
lean_ctor_set(v_reuseFailAlloc_3248_, 1, v_path_3215_);
lean_ctor_set(v_reuseFailAlloc_3248_, 2, v___x_3245_);
lean_ctor_set_uint64(v_reuseFailAlloc_3248_, sizeof(void*)*3, v_hash_3239_);
v___x_3247_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
v___y_3233_ = v___x_3247_;
goto v___jp_3232_;
}
}
}
else
{
lean_object* v_url_3250_; uint64_t v_hash_3251_; lean_object* v_path_3252_; lean_object* v_extraPaths_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3261_; 
v_url_3250_ = lean_ctor_get(v_v_3229_, 0);
v_hash_3251_ = lean_ctor_get_uint64(v_v_3229_, sizeof(void*)*3);
v_path_3252_ = lean_ctor_get(v_v_3229_, 1);
v_extraPaths_3253_ = lean_ctor_get(v_v_3229_, 2);
v_isSharedCheck_3261_ = !lean_is_exclusive(v_v_3229_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3255_ = v_v_3229_;
v_isShared_3256_ = v_isSharedCheck_3261_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_extraPaths_3253_);
lean_inc(v_path_3252_);
lean_inc(v_url_3250_);
lean_dec(v_v_3229_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3261_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3257_; lean_object* v___x_3259_; 
v___x_3257_ = lean_array_push(v_extraPaths_3253_, v_path_3215_);
if (v_isShared_3256_ == 0)
{
lean_ctor_set(v___x_3255_, 2, v___x_3257_);
v___x_3259_ = v___x_3255_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_url_3250_);
lean_ctor_set(v_reuseFailAlloc_3260_, 1, v_path_3252_);
lean_ctor_set(v_reuseFailAlloc_3260_, 2, v___x_3257_);
lean_ctor_set_uint64(v_reuseFailAlloc_3260_, sizeof(void*)*3, v_hash_3251_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
v___y_3233_ = v___x_3259_;
goto v___jp_3232_;
}
}
}
v___jp_3232_:
{
lean_object* v___x_3234_; lean_object* v___x_3236_; 
v___x_3234_ = lean_array_fset(v_xs_x27_3231_, v_val_3223_, v___y_3233_);
lean_dec(v_val_3223_);
if (v_isShared_3228_ == 0)
{
lean_ctor_set(v___x_3227_, 0, v___x_3234_);
v___x_3236_ = v___x_3227_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v___x_3234_);
lean_ctor_set(v_reuseFailAlloc_3237_, 1, v_indices_3218_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
}
}
}
else
{
lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3277_; 
lean_inc_ref(v_indices_3218_);
lean_inc_ref(v_infos_3217_);
lean_dec(v___x_3222_);
v_isSharedCheck_3277_ = !lean_is_exclusive(v_self_3212_);
if (v_isSharedCheck_3277_ == 0)
{
lean_object* v_unused_3278_; lean_object* v_unused_3279_; 
v_unused_3278_ = lean_ctor_get(v_self_3212_, 1);
lean_dec(v_unused_3278_);
v_unused_3279_ = lean_ctor_get(v_self_3212_, 0);
lean_dec(v_unused_3279_);
v___x_3266_ = v_self_3212_;
v_isShared_3267_ = v_isSharedCheck_3277_;
goto v_resetjp_3265_;
}
else
{
lean_dec(v_self_3212_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3277_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3275_; 
v___x_3268_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_3269_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_3269_, 0, v_url_3213_);
lean_ctor_set(v___x_3269_, 1, v_path_3215_);
lean_ctor_set(v___x_3269_, 2, v___x_3268_);
lean_ctor_set_uint64(v___x_3269_, sizeof(void*)*3, v_hash_3214_);
lean_inc_ref(v_infos_3217_);
v___x_3270_ = lean_array_push(v_infos_3217_, v___x_3269_);
v___x_3271_ = lean_array_get_size(v_infos_3217_);
lean_dec_ref(v_infos_3217_);
v___x_3272_ = lean_box_uint64(v_hash_3214_);
v___x_3273_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3220_, v___f_3219_, v_indices_3218_, v___x_3272_, v___x_3271_);
if (v_isShared_3267_ == 0)
{
lean_ctor_set(v___x_3266_, 1, v___x_3273_);
lean_ctor_set(v___x_3266_, 0, v___x_3270_);
v___x_3275_ = v___x_3266_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v___x_3270_);
lean_ctor_set(v_reuseFailAlloc_3276_, 1, v___x_3273_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add___boxed(lean_object* v_self_3280_, lean_object* v_url_3281_, lean_object* v_hash_3282_, lean_object* v_path_3283_, lean_object* v_extra_3284_){
_start:
{
uint64_t v_hash_boxed_3285_; uint8_t v_extra_boxed_3286_; lean_object* v_res_3287_; 
v_hash_boxed_3285_ = lean_unbox_uint64(v_hash_3282_);
lean_dec_ref(v_hash_3282_);
v_extra_boxed_3286_ = lean_unbox(v_extra_3284_);
v_res_3287_ = l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_add(v_self_3280_, v_url_3281_, v_hash_boxed_3285_, v_path_3283_, v_extra_boxed_3286_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath(lean_object* v_path_3289_){
_start:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; 
v___x_3290_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
v___x_3291_ = l_System_FilePath_addExtension(v_path_3289_, v___x_3290_);
return v___x_3291_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(lean_object* v_cfg_3293_, lean_object* v_out_3294_){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3295_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___closed__0));
v___x_3296_ = l_Lake_JsonObject_getJson_x3f(v_out_3294_, v___x_3295_);
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_object* v___x_3297_; 
v___x_3297_ = lean_box(0);
return v___x_3297_;
}
else
{
lean_object* v_val_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3314_; 
v_val_3298_ = lean_ctor_get(v___x_3296_, 0);
v_isSharedCheck_3314_ = !lean_is_exclusive(v___x_3296_);
if (v_isSharedCheck_3314_ == 0)
{
v___x_3300_ = v___x_3296_;
v_isShared_3301_ = v_isSharedCheck_3314_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_val_3298_);
lean_dec(v___x_3296_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3314_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3302_; 
v___x_3302_ = l_Lean_Json_getNat_x3f(v_val_3298_);
if (lean_obj_tag(v___x_3302_) == 0)
{
lean_object* v___x_3303_; 
lean_dec_ref_known(v___x_3302_, 1);
lean_del_object(v___x_3300_);
v___x_3303_ = lean_box(0);
return v___x_3303_;
}
else
{
if (lean_obj_tag(v___x_3302_) == 1)
{
lean_object* v_a_3304_; lean_object* v_infos_3305_; lean_object* v___x_3306_; uint8_t v___x_3307_; 
v_a_3304_ = lean_ctor_get(v___x_3302_, 0);
lean_inc(v_a_3304_);
lean_dec_ref_known(v___x_3302_, 1);
v_infos_3305_ = lean_ctor_get(v_cfg_3293_, 1);
v___x_3306_ = lean_array_get_size(v_infos_3305_);
v___x_3307_ = lean_nat_dec_lt(v_a_3304_, v___x_3306_);
if (v___x_3307_ == 0)
{
lean_object* v___x_3308_; 
lean_dec(v_a_3304_);
lean_del_object(v___x_3300_);
v___x_3308_ = lean_box(0);
return v___x_3308_;
}
else
{
lean_object* v___x_3309_; lean_object* v___x_3311_; 
v___x_3309_ = lean_array_fget_borrowed(v_infos_3305_, v_a_3304_);
lean_dec(v_a_3304_);
lean_inc(v___x_3309_);
if (v_isShared_3301_ == 0)
{
lean_ctor_set(v___x_3300_, 0, v___x_3309_);
v___x_3311_ = v___x_3300_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3312_; 
v_reuseFailAlloc_3312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3312_, 0, v___x_3309_);
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
lean_object* v___x_3313_; 
lean_dec_ref_known(v___x_3302_, 1);
lean_del_object(v___x_3300_);
v___x_3313_ = lean_box(0);
return v___x_3313_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f___boxed(lean_object* v_cfg_3315_, lean_object* v_out_3316_){
_start:
{
lean_object* v_res_3317_; 
v_res_3317_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_3315_, v_out_3316_);
lean_dec(v_out_3316_);
lean_dec_ref(v_cfg_3315_);
return v_res_3317_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(lean_object* v_s_3318_, lean_object* v_pos_3319_){
_start:
{
lean_object* v_str_3320_; lean_object* v_startInclusive_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; uint8_t v_decide_3325_; 
v_str_3320_ = lean_ctor_get(v_s_3318_, 0);
v_startInclusive_3321_ = lean_ctor_get(v_s_3318_, 1);
v___x_3322_ = lean_nat_add(v_startInclusive_3321_, v_pos_3319_);
v___x_3323_ = lean_nat_sub(v___x_3322_, v_startInclusive_3321_);
v___x_3324_ = lean_unsigned_to_nat(0u);
v_decide_3325_ = lean_nat_dec_eq(v___x_3323_, v___x_3324_);
if (v_decide_3325_ == 0)
{
lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3334_; uint32_t v___x_3335_; uint32_t v___x_3336_; uint8_t v___x_3337_; 
lean_inc(v_startInclusive_3321_);
lean_inc_ref(v_str_3320_);
v___x_3326_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3326_, 0, v_str_3320_);
lean_ctor_set(v___x_3326_, 1, v_startInclusive_3321_);
lean_ctor_set(v___x_3326_, 2, v___x_3322_);
v___x_3327_ = lean_unsigned_to_nat(1u);
v___x_3328_ = lean_nat_sub(v___x_3323_, v___x_3327_);
lean_dec(v___x_3323_);
v___x_3329_ = l_String_Slice_posLE(v___x_3326_, v___x_3328_);
lean_dec_ref_known(v___x_3326_, 3);
v___x_3334_ = lean_nat_add(v_startInclusive_3321_, v___x_3329_);
v___x_3335_ = lean_string_utf8_get_fast(v_str_3320_, v___x_3334_);
lean_dec(v___x_3334_);
v___x_3336_ = 32;
v___x_3337_ = lean_uint32_dec_eq(v___x_3335_, v___x_3336_);
if (v___x_3337_ == 0)
{
uint32_t v___x_3338_; uint8_t v___x_3339_; 
v___x_3338_ = 9;
v___x_3339_ = lean_uint32_dec_eq(v___x_3335_, v___x_3338_);
if (v___x_3339_ == 0)
{
uint32_t v___x_3340_; uint8_t v___x_3341_; 
v___x_3340_ = 13;
v___x_3341_ = lean_uint32_dec_eq(v___x_3335_, v___x_3340_);
if (v___x_3341_ == 0)
{
uint32_t v___x_3342_; uint8_t v___x_3343_; 
v___x_3342_ = 10;
v___x_3343_ = lean_uint32_dec_eq(v___x_3335_, v___x_3342_);
if (v___x_3343_ == 0)
{
lean_dec(v___x_3329_);
return v_pos_3319_;
}
else
{
goto v___jp_3330_;
}
}
else
{
goto v___jp_3330_;
}
}
else
{
goto v___jp_3330_;
}
}
else
{
goto v___jp_3330_;
}
v___jp_3330_:
{
lean_object* v___x_3331_; uint8_t v___x_3332_; 
v___x_3331_ = lean_nat_add(v___x_3329_, v___x_3327_);
v___x_3332_ = lean_nat_dec_le(v___x_3331_, v_pos_3319_);
lean_dec(v___x_3331_);
if (v___x_3332_ == 0)
{
lean_dec(v___x_3329_);
return v_pos_3319_;
}
else
{
lean_dec(v_pos_3319_);
v_pos_3319_ = v___x_3329_;
goto _start;
}
}
}
else
{
lean_dec(v___x_3323_);
lean_dec(v___x_3322_);
return v_pos_3319_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0___boxed(lean_object* v_s_3344_, lean_object* v_pos_3345_){
_start:
{
lean_object* v_res_3346_; 
v_res_3346_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v_s_3344_, v_pos_3345_);
lean_dec_ref(v_s_3344_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(lean_object* v_cfg_3359_, lean_object* v_hOut_3360_, lean_object* v_info_3361_, lean_object* v_code_x3f_3362_, lean_object* v_out_3363_, lean_object* v_line_3364_, lean_object* v___y_3365_){
_start:
{
lean_object* v_msg_3368_; lean_object* v___y_3369_; lean_object* v___y_3386_; lean_object* v___y_3387_; lean_object* v_a_3388_; lean_object* v___y_3394_; lean_object* v___y_3395_; lean_object* v___y_3396_; lean_object* v___y_3397_; lean_object* v_val_3398_; lean_object* v___y_3406_; lean_object* v___y_3407_; lean_object* v___y_3408_; uint8_t v_kind_3437_; lean_object* v_scope_3438_; lean_object* v_msg_3440_; lean_object* v___y_3441_; lean_object* v_msg_3484_; lean_object* v___y_3485_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3513_; 
v_kind_3437_ = lean_ctor_get_uint8(v_cfg_3359_, sizeof(void*)*3);
v_scope_3438_ = lean_ctor_get(v_cfg_3359_, 0);
lean_inc_ref(v_scope_3438_);
lean_dec_ref(v_cfg_3359_);
if (v_kind_3437_ == 0)
{
lean_object* v___x_3515_; 
v___x_3515_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___y_3513_ = v___x_3515_;
goto v___jp_3512_;
}
else
{
lean_object* v___x_3516_; 
v___x_3516_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___y_3513_ = v___x_3516_;
goto v___jp_3512_;
}
v___jp_3367_:
{
uint8_t v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; uint8_t v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3370_ = 3;
v___x_3371_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3371_, 0, v_msg_3368_);
lean_ctor_set_uint8(v___x_3371_, sizeof(void*)*1, v___x_3370_);
lean_inc_ref_n(v___y_3369_, 2);
v___x_3372_ = lean_apply_2(v___y_3369_, v___x_3371_, lean_box(0));
v___x_3373_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__0));
v___x_3374_ = lean_unsigned_to_nat(0u);
v___x_3375_ = lean_string_utf8_byte_size(v_line_3364_);
lean_inc_ref(v_line_3364_);
v___x_3376_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3376_, 0, v_line_3364_);
lean_ctor_set(v___x_3376_, 1, v___x_3374_);
lean_ctor_set(v___x_3376_, 2, v___x_3375_);
v___x_3377_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_3376_, v___x_3375_);
lean_dec_ref_known(v___x_3376_, 3);
v___x_3378_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3378_, 0, v_line_3364_);
lean_ctor_set(v___x_3378_, 1, v___x_3374_);
lean_ctor_set(v___x_3378_, 2, v___x_3377_);
v___x_3379_ = l_String_Slice_toString(v___x_3378_);
lean_dec_ref_known(v___x_3378_, 3);
v___x_3380_ = lean_string_append(v___x_3373_, v___x_3379_);
lean_dec_ref(v___x_3379_);
v___x_3381_ = 0;
v___x_3382_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3382_, 0, v___x_3380_);
lean_ctor_set_uint8(v___x_3382_, sizeof(void*)*1, v___x_3381_);
v___x_3383_ = lean_apply_2(v___y_3369_, v___x_3382_, lean_box(0));
v___x_3384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3383_);
return v___x_3384_;
}
v___jp_3385_:
{
if (lean_obj_tag(v_a_3388_) == 1)
{
lean_object* v_a_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; 
v_a_3389_ = lean_ctor_get(v_a_3388_, 0);
lean_inc(v_a_3389_);
lean_dec_ref_known(v_a_3388_, 1);
v___x_3390_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_3391_ = lean_string_append(v___y_3387_, v___x_3390_);
v___x_3392_ = lean_string_append(v___x_3391_, v_a_3389_);
lean_dec(v_a_3389_);
v_msg_3368_ = v___x_3392_;
v___y_3369_ = v___y_3386_;
goto v___jp_3367_;
}
else
{
lean_dec_ref(v_a_3388_);
v_msg_3368_ = v___y_3387_;
v___y_3369_ = v___y_3386_;
goto v___jp_3367_;
}
}
v___jp_3393_:
{
lean_object* v___x_3399_; uint8_t v___x_3400_; 
v___x_3399_ = lean_array_get_size(v___y_3394_);
v___x_3400_ = lean_nat_dec_lt(v___y_3397_, v___x_3399_);
if (v___x_3400_ == 0)
{
v___y_3386_ = v___y_3395_;
v___y_3387_ = v___y_3396_;
v_a_3388_ = v_val_3398_;
goto v___jp_3385_;
}
else
{
lean_object* v___x_3401_; size_t v___x_3402_; size_t v___x_3403_; lean_object* v___x_3404_; 
v___x_3401_ = lean_box(0);
v___x_3402_ = ((size_t)0ULL);
v___x_3403_ = lean_usize_of_nat(v___x_3399_);
v___x_3404_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_3394_, v___x_3402_, v___x_3403_, v___x_3401_, v___y_3395_);
if (lean_obj_tag(v___x_3404_) == 0)
{
lean_dec_ref_known(v___x_3404_, 1);
v___y_3386_ = v___y_3395_;
v___y_3387_ = v___y_3396_;
v_a_3388_ = v_val_3398_;
goto v___jp_3385_;
}
else
{
lean_dec_ref(v_val_3398_);
lean_dec_ref(v___y_3396_);
lean_dec_ref(v_line_3364_);
return v___x_3404_;
}
}
}
v___jp_3405_:
{
lean_object* v___x_3409_; lean_object* v___x_3410_; 
v___x_3409_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_3410_ = l_Lake_JsonObject_getJson_x3f(v_out_3363_, v___x_3409_);
if (lean_obj_tag(v___x_3410_) == 0)
{
lean_dec_ref(v___y_3407_);
v_msg_3368_ = v___y_3408_;
v___y_3369_ = v___y_3406_;
goto v___jp_3367_;
}
else
{
lean_object* v_val_3411_; lean_object* v___x_3412_; 
v_val_3411_ = lean_ctor_get(v___x_3410_, 0);
lean_inc(v_val_3411_);
lean_dec_ref_known(v___x_3410_, 1);
v___x_3412_ = l_Lean_Json_getNat_x3f(v_val_3411_);
if (lean_obj_tag(v___x_3412_) == 0)
{
lean_dec_ref_known(v___x_3412_, 1);
lean_dec_ref(v___y_3407_);
v_msg_3368_ = v___y_3408_;
v___y_3369_ = v___y_3406_;
goto v___jp_3367_;
}
else
{
if (lean_obj_tag(v___x_3412_) == 1)
{
lean_object* v_a_3413_; lean_object* v___x_3414_; uint8_t v___x_3415_; 
v_a_3413_ = lean_ctor_get(v___x_3412_, 0);
lean_inc(v_a_3413_);
lean_dec_ref_known(v___x_3412_, 1);
v___x_3414_ = lean_unsigned_to_nat(0u);
v___x_3415_ = lean_nat_dec_lt(v___x_3414_, v_a_3413_);
lean_dec(v_a_3413_);
if (v___x_3415_ == 0)
{
lean_dec_ref(v___y_3407_);
v_msg_3368_ = v___y_3408_;
v___y_3369_ = v___y_3406_;
goto v___jp_3367_;
}
else
{
lean_object* v___x_3416_; lean_object* v___x_3417_; 
v___x_3416_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__3));
v___x_3417_ = l_Lake_JsonObject_getJson_x3f(v_out_3363_, v___x_3416_);
if (lean_obj_tag(v___x_3417_) == 0)
{
lean_dec_ref(v___y_3407_);
v_msg_3368_ = v___y_3408_;
v___y_3369_ = v___y_3406_;
goto v___jp_3367_;
}
else
{
lean_object* v_val_3418_; lean_object* v___x_3419_; 
v_val_3418_ = lean_ctor_get(v___x_3417_, 0);
lean_inc(v_val_3418_);
lean_dec_ref_known(v___x_3417_, 1);
v___x_3419_ = l_Lean_Json_getStr_x3f(v_val_3418_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_dec_ref_known(v___x_3419_, 1);
lean_dec_ref(v___y_3407_);
v_msg_3368_ = v___y_3408_;
v___y_3369_ = v___y_3406_;
goto v___jp_3367_;
}
else
{
if (lean_obj_tag(v___x_3419_) == 1)
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3436_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3436_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3436_ == 0)
{
v___x_3422_ = v___x_3419_;
v_isShared_3423_ = v_isSharedCheck_3436_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3419_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3436_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3424_; uint8_t v___x_3425_; 
v___x_3424_ = ((lean_object*)(l_Lake_CacheService_artifactContentType___closed__0));
v___x_3425_ = lean_string_dec_eq(v_a_3420_, v___x_3424_);
lean_dec(v_a_3420_);
if (v___x_3425_ == 0)
{
lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3426_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3427_ = l_IO_FS_readFile(v___y_3407_);
lean_dec_ref(v___y_3407_);
if (lean_obj_tag(v___x_3427_) == 0)
{
lean_object* v_a_3428_; lean_object* v___x_3430_; 
v_a_3428_ = lean_ctor_get(v___x_3427_, 0);
lean_inc(v_a_3428_);
lean_dec_ref_known(v___x_3427_, 1);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 0, v_a_3428_);
v___x_3430_ = v___x_3422_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3428_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
v___y_3394_ = v___x_3426_;
v___y_3395_ = v___y_3406_;
v___y_3396_ = v___y_3408_;
v___y_3397_ = v___x_3414_;
v_val_3398_ = v___x_3430_;
goto v___jp_3393_;
}
}
else
{
lean_object* v_a_3432_; lean_object* v___x_3434_; 
v_a_3432_ = lean_ctor_get(v___x_3427_, 0);
lean_inc(v_a_3432_);
lean_dec_ref_known(v___x_3427_, 1);
if (v_isShared_3423_ == 0)
{
lean_ctor_set_tag(v___x_3422_, 0);
lean_ctor_set(v___x_3422_, 0, v_a_3432_);
v___x_3434_ = v___x_3422_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v_a_3432_);
v___x_3434_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
v___y_3394_ = v___x_3426_;
v___y_3395_ = v___y_3406_;
v___y_3396_ = v___y_3408_;
v___y_3397_ = v___x_3414_;
v_val_3398_ = v___x_3434_;
goto v___jp_3393_;
}
}
}
else
{
lean_del_object(v___x_3422_);
lean_dec_ref(v___y_3407_);
v_msg_3368_ = v___y_3408_;
v___y_3369_ = v___y_3406_;
goto v___jp_3367_;
}
}
}
else
{
lean_dec_ref_known(v___x_3419_, 1);
lean_dec_ref(v___y_3407_);
v_msg_3368_ = v___y_3408_;
v___y_3369_ = v___y_3406_;
goto v___jp_3367_;
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_3412_, 1);
lean_dec_ref(v___y_3407_);
v_msg_3368_ = v___y_3408_;
v___y_3369_ = v___y_3406_;
goto v___jp_3367_;
}
}
}
}
v___jp_3439_:
{
lean_object* v_url_3442_; lean_object* v_path_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v_msg_3449_; 
v_url_3442_ = lean_ctor_get(v_info_3361_, 0);
lean_inc_ref(v_url_3442_);
v_path_3443_ = lean_ctor_get(v_info_3361_, 1);
lean_inc_ref(v_path_3443_);
lean_dec_ref(v_info_3361_);
v___x_3444_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3445_ = lean_string_append(v_msg_3440_, v___x_3444_);
v___x_3446_ = lean_string_append(v___x_3445_, v_path_3443_);
v___x_3447_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3448_ = lean_string_append(v___x_3446_, v___x_3447_);
v_msg_3449_ = lean_string_append(v___x_3448_, v_url_3442_);
lean_dec_ref(v_url_3442_);
if (v_kind_3437_ == 0)
{
lean_object* v___x_3450_; lean_object* v_tmpPath_3451_; 
v___x_3450_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
v_tmpPath_3451_ = l_System_FilePath_addExtension(v_path_3443_, v___x_3450_);
if (lean_obj_tag(v_code_x3f_3362_) == 1)
{
lean_object* v_a_3452_; lean_object* v___x_3453_; uint8_t v___x_3454_; 
v_a_3452_ = lean_ctor_get(v_code_x3f_3362_, 0);
lean_inc(v_a_3452_);
lean_dec_ref_known(v_code_x3f_3362_, 1);
v___x_3453_ = lean_unsigned_to_nat(404u);
v___x_3454_ = lean_nat_dec_eq(v_a_3452_, v___x_3453_);
lean_dec(v_a_3452_);
if (v___x_3454_ == 0)
{
v___y_3406_ = v___y_3441_;
v___y_3407_ = v_tmpPath_3451_;
v___y_3408_ = v_msg_3449_;
goto v___jp_3405_;
}
else
{
lean_dec_ref(v_tmpPath_3451_);
v_msg_3368_ = v_msg_3449_;
v___y_3369_ = v___y_3441_;
goto v___jp_3367_;
}
}
else
{
lean_dec_ref(v_code_x3f_3362_);
v___y_3406_ = v___y_3441_;
v___y_3407_ = v_tmpPath_3451_;
v___y_3408_ = v_msg_3449_;
goto v___jp_3405_;
}
}
else
{
lean_object* v___x_3455_; lean_object* v___x_3456_; 
lean_dec_ref(v_path_3443_);
lean_dec_ref(v_code_x3f_3362_);
v___x_3455_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__2));
v___x_3456_ = l_Lake_JsonObject_getJson_x3f(v_out_3363_, v___x_3455_);
if (lean_obj_tag(v___x_3456_) == 0)
{
v_msg_3368_ = v_msg_3449_;
v___y_3369_ = v___y_3441_;
goto v___jp_3367_;
}
else
{
lean_object* v_val_3457_; lean_object* v___x_3458_; 
v_val_3457_ = lean_ctor_get(v___x_3456_, 0);
lean_inc(v_val_3457_);
lean_dec_ref_known(v___x_3456_, 1);
v___x_3458_ = l_Lean_Json_getNat_x3f(v_val_3457_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_dec_ref_known(v___x_3458_, 1);
v_msg_3368_ = v_msg_3449_;
v___y_3369_ = v___y_3441_;
goto v___jp_3367_;
}
else
{
if (lean_obj_tag(v___x_3458_) == 1)
{
lean_object* v_a_3459_; lean_object* v___x_3460_; uint8_t v___x_3461_; 
v_a_3459_ = lean_ctor_get(v___x_3458_, 0);
lean_inc(v_a_3459_);
lean_dec_ref_known(v___x_3458_, 1);
v___x_3460_ = lean_unsigned_to_nat(0u);
v___x_3461_ = lean_nat_dec_lt(v___x_3460_, v_a_3459_);
if (v___x_3461_ == 0)
{
lean_dec(v_a_3459_);
v_msg_3368_ = v_msg_3449_;
v___y_3369_ = v___y_3441_;
goto v___jp_3367_;
}
else
{
size_t v___x_3462_; lean_object* v___x_3463_; 
v___x_3462_ = lean_usize_of_nat(v_a_3459_);
lean_dec(v_a_3459_);
v___x_3463_ = lean_io_prim_handle_read(v_hOut_3360_, v___x_3462_);
if (lean_obj_tag(v___x_3463_) == 0)
{
lean_object* v_a_3464_; uint8_t v___x_3465_; 
v_a_3464_ = lean_ctor_get(v___x_3463_, 0);
lean_inc(v_a_3464_);
lean_dec_ref_known(v___x_3463_, 1);
v___x_3465_ = lean_string_validate_utf8(v_a_3464_);
if (v___x_3465_ == 0)
{
lean_dec(v_a_3464_);
v_msg_3368_ = v_msg_3449_;
v___y_3369_ = v___y_3441_;
goto v___jp_3367_;
}
else
{
lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
v___x_3466_ = lean_string_from_utf8_unchecked(v_a_3464_);
v___x_3467_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__1));
v___x_3468_ = lean_string_append(v_msg_3449_, v___x_3467_);
v___x_3469_ = lean_string_append(v___x_3468_, v___x_3466_);
lean_dec_ref(v___x_3466_);
v_msg_3368_ = v___x_3469_;
v___y_3369_ = v___y_3441_;
goto v___jp_3367_;
}
}
else
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3482_; 
lean_dec_ref(v_msg_3449_);
lean_dec_ref(v_line_3364_);
v_a_3470_ = lean_ctor_get(v___x_3463_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3463_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3472_ = v___x_3463_;
v_isShared_3473_ = v_isSharedCheck_3482_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3463_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3482_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3474_; uint8_t v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3480_; 
v___x_3474_ = lean_io_error_to_string(v_a_3470_);
v___x_3475_ = 3;
v___x_3476_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3476_, 0, v___x_3474_);
lean_ctor_set_uint8(v___x_3476_, sizeof(void*)*1, v___x_3475_);
lean_inc_ref(v___y_3441_);
v___x_3477_ = lean_apply_2(v___y_3441_, v___x_3476_, lean_box(0));
v___x_3478_ = lean_box(0);
if (v_isShared_3473_ == 0)
{
lean_ctor_set(v___x_3472_, 0, v___x_3478_);
v___x_3480_ = v___x_3472_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v___x_3478_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_3458_, 1);
v_msg_3368_ = v_msg_3449_;
v___y_3369_ = v___y_3441_;
goto v___jp_3367_;
}
}
}
}
}
v___jp_3483_:
{
lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3486_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4));
v___x_3487_ = l_Lake_JsonObject_getJson_x3f(v_out_3363_, v___x_3486_);
if (lean_obj_tag(v___x_3487_) == 0)
{
v_msg_3440_ = v_msg_3484_;
v___y_3441_ = v___y_3485_;
goto v___jp_3439_;
}
else
{
lean_object* v_val_3488_; lean_object* v___x_3489_; 
v_val_3488_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_val_3488_);
lean_dec_ref_known(v___x_3487_, 1);
v___x_3489_ = l_Lean_Json_getStr_x3f(v_val_3488_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_dec_ref_known(v___x_3489_, 1);
v_msg_3440_ = v_msg_3484_;
v___y_3441_ = v___y_3485_;
goto v___jp_3439_;
}
else
{
if (lean_obj_tag(v___x_3489_) == 1)
{
lean_object* v_a_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v_msg_3493_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3489_, 1);
v___x_3491_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__5));
v___x_3492_ = lean_string_append(v_msg_3484_, v___x_3491_);
v_msg_3493_ = lean_string_append(v___x_3492_, v_a_3490_);
lean_dec(v_a_3490_);
v_msg_3440_ = v_msg_3493_;
v___y_3441_ = v___y_3485_;
goto v___jp_3439_;
}
else
{
lean_dec_ref_known(v___x_3489_, 1);
v_msg_3440_ = v_msg_3484_;
v___y_3441_ = v___y_3485_;
goto v___jp_3439_;
}
}
}
}
v___jp_3494_:
{
uint64_t v_hash_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v_msg_3504_; 
v_hash_3497_ = lean_ctor_get_uint64(v_info_3361_, sizeof(void*)*3);
v___x_3498_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_3499_ = lean_string_append(v___y_3496_, v___x_3498_);
v___x_3500_ = lean_string_append(v___x_3499_, v___y_3495_);
v___x_3501_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__7));
v___x_3502_ = lean_string_append(v___x_3500_, v___x_3501_);
v___x_3503_ = l_Lake_lowerHexUInt64(v_hash_3497_);
v_msg_3504_ = lean_string_append(v___x_3502_, v___x_3503_);
lean_dec_ref(v___x_3503_);
if (lean_obj_tag(v_code_x3f_3362_) == 1)
{
lean_object* v_a_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v_msg_3511_; 
v_a_3505_ = lean_ctor_get(v_code_x3f_3362_, 0);
v___x_3506_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__8));
v___x_3507_ = lean_string_append(v_msg_3504_, v___x_3506_);
lean_inc(v_a_3505_);
v___x_3508_ = l_Nat_reprFast(v_a_3505_);
v___x_3509_ = lean_string_append(v___x_3507_, v___x_3508_);
lean_dec_ref(v___x_3508_);
v___x_3510_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9));
v_msg_3511_ = lean_string_append(v___x_3509_, v___x_3510_);
v_msg_3484_ = v_msg_3511_;
v___y_3485_ = v___y_3365_;
goto v___jp_3483_;
}
else
{
v_msg_3484_ = v_msg_3504_;
v___y_3485_ = v___y_3365_;
goto v___jp_3483_;
}
}
v___jp_3512_:
{
lean_object* v_s_3514_; 
v_s_3514_ = lean_ctor_get(v_scope_3438_, 0);
lean_inc_ref(v_s_3514_);
lean_dec_ref(v_scope_3438_);
v___y_3495_ = v___y_3513_;
v___y_3496_ = v_s_3514_;
goto v___jp_3494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___boxed(lean_object* v_cfg_3517_, lean_object* v_hOut_3518_, lean_object* v_info_3519_, lean_object* v_code_x3f_3520_, lean_object* v_out_3521_, lean_object* v_line_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_){
_start:
{
lean_object* v_res_3525_; 
v_res_3525_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3517_, v_hOut_3518_, v_info_3519_, v_code_x3f_3520_, v_out_3521_, v_line_3522_, v___y_3523_);
lean_dec_ref(v___y_3523_);
lean_dec(v_out_3521_);
lean_dec(v_hOut_3518_);
return v_res_3525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0(uint64_t v___x_3527_, uint64_t v_hash_3528_, lean_object* v_a_3529_, lean_object* v_as_3530_, size_t v_sz_3531_, size_t v_i_3532_, lean_object* v_b_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_){
_start:
{
lean_object* v_a_3538_; lean_object* v_snd_3539_; uint8_t v___x_3543_; 
v___x_3543_ = lean_usize_dec_lt(v_i_3532_, v_sz_3531_);
if (v___x_3543_ == 0)
{
lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3544_, 0, v_b_3533_);
lean_ctor_set(v___x_3544_, 1, v___y_3534_);
v___x_3545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3544_);
return v___x_3545_;
}
else
{
uint8_t v___x_3546_; lean_object* v___x_3547_; lean_object* v_a_3548_; lean_object* v_fst_3550_; lean_object* v_snd_3551_; lean_object* v___x_3568_; lean_object* v_val_3570_; lean_object* v___x_3583_; 
v___x_3546_ = lean_uint64_dec_eq(v___x_3527_, v_hash_3528_);
v___x_3547_ = lean_box(0);
v_a_3548_ = lean_array_uget_borrowed(v_as_3530_, v_i_3532_);
v___x_3568_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3583_ = l_IO_FS_writeBinFile(v_a_3548_, v_a_3529_);
if (lean_obj_tag(v___x_3583_) == 0)
{
lean_object* v_a_3584_; lean_object* v___x_3586_; uint8_t v_isShared_3587_; uint8_t v_isSharedCheck_3591_; 
v_a_3584_ = lean_ctor_get(v___x_3583_, 0);
v_isSharedCheck_3591_ = !lean_is_exclusive(v___x_3583_);
if (v_isSharedCheck_3591_ == 0)
{
v___x_3586_ = v___x_3583_;
v_isShared_3587_ = v_isSharedCheck_3591_;
goto v_resetjp_3585_;
}
else
{
lean_inc(v_a_3584_);
lean_dec(v___x_3583_);
v___x_3586_ = lean_box(0);
v_isShared_3587_ = v_isSharedCheck_3591_;
goto v_resetjp_3585_;
}
v_resetjp_3585_:
{
lean_object* v___x_3589_; 
if (v_isShared_3587_ == 0)
{
lean_ctor_set_tag(v___x_3586_, 1);
v___x_3589_ = v___x_3586_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v_a_3584_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
v_val_3570_ = v___x_3589_;
goto v___jp_3569_;
}
}
}
else
{
lean_object* v_a_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3599_; 
v_a_3592_ = lean_ctor_get(v___x_3583_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v___x_3583_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3594_ = v___x_3583_;
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_a_3592_);
lean_dec(v___x_3583_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___x_3597_; 
if (v_isShared_3595_ == 0)
{
lean_ctor_set_tag(v___x_3594_, 0);
v___x_3597_ = v___x_3594_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v_a_3592_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
v_val_3570_ = v___x_3597_;
goto v___jp_3569_;
}
}
}
v___jp_3549_:
{
if (lean_obj_tag(v_fst_3550_) == 0)
{
lean_object* v_a_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; uint8_t v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v_numSuccesses_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
v_a_3552_ = lean_ctor_get(v_fst_3550_, 0);
lean_inc(v_a_3552_);
lean_dec_ref_known(v_fst_3550_, 1);
v___x_3553_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0___closed__0));
lean_inc(v_a_3548_);
v___x_3554_ = lean_string_append(v_a_3548_, v___x_3553_);
v___x_3555_ = lean_io_error_to_string(v_a_3552_);
v___x_3556_ = lean_string_append(v___x_3554_, v___x_3555_);
lean_dec_ref(v___x_3555_);
v___x_3557_ = 3;
v___x_3558_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3558_, 0, v___x_3556_);
lean_ctor_set_uint8(v___x_3558_, sizeof(void*)*1, v___x_3557_);
lean_inc_ref(v___y_3535_);
v___x_3559_ = lean_apply_2(v___y_3535_, v___x_3558_, lean_box(0));
v_numSuccesses_3560_ = lean_ctor_get(v_snd_3551_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v_snd_3551_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v_snd_3551_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_numSuccesses_3560_);
lean_dec(v_snd_3551_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_numSuccesses_3560_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
lean_ctor_set_uint8(v___x_3565_, sizeof(void*)*1, v___x_3546_);
v_a_3538_ = v___x_3547_;
v_snd_3539_ = v___x_3565_;
goto v___jp_3537_;
}
}
}
else
{
lean_dec_ref(v_fst_3550_);
v_a_3538_ = v___x_3547_;
v_snd_3539_ = v_snd_3551_;
goto v___jp_3537_;
}
}
v___jp_3569_:
{
uint8_t v___x_3571_; 
v___x_3571_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_3571_ == 0)
{
v_fst_3550_ = v_val_3570_;
v_snd_3551_ = v___y_3534_;
goto v___jp_3549_;
}
else
{
size_t v___x_3572_; size_t v___x_3573_; lean_object* v___x_3574_; 
v___x_3572_ = ((size_t)0ULL);
v___x_3573_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_3574_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_3568_, v___x_3572_, v___x_3573_, v___x_3547_, v___y_3535_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_dec_ref_known(v___x_3574_, 1);
v_fst_3550_ = v_val_3570_;
v_snd_3551_ = v___y_3534_;
goto v___jp_3549_;
}
else
{
lean_object* v_a_3575_; lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3582_; 
lean_dec_ref(v_val_3570_);
lean_dec_ref(v___y_3534_);
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3577_ = v___x_3574_;
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
else
{
lean_inc(v_a_3575_);
lean_dec(v___x_3574_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3582_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3580_; 
if (v_isShared_3578_ == 0)
{
v___x_3580_ = v___x_3577_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v_a_3575_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
}
}
}
v___jp_3537_:
{
size_t v___x_3540_; size_t v___x_3541_; 
v___x_3540_ = ((size_t)1ULL);
v___x_3541_ = lean_usize_add(v_i_3532_, v___x_3540_);
v_i_3532_ = v___x_3541_;
v_b_3533_ = v_a_3538_;
v___y_3534_ = v_snd_3539_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0___boxed(lean_object* v___x_3600_, lean_object* v_hash_3601_, lean_object* v_a_3602_, lean_object* v_as_3603_, lean_object* v_sz_3604_, lean_object* v_i_3605_, lean_object* v_b_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_){
_start:
{
uint64_t v___x_31856__boxed_3610_; uint64_t v_hash_31857__boxed_3611_; size_t v_sz_boxed_3612_; size_t v_i_boxed_3613_; lean_object* v_res_3614_; 
v___x_31856__boxed_3610_ = lean_unbox_uint64(v___x_3600_);
lean_dec_ref(v___x_3600_);
v_hash_31857__boxed_3611_ = lean_unbox_uint64(v_hash_3601_);
lean_dec_ref(v_hash_3601_);
v_sz_boxed_3612_ = lean_unbox_usize(v_sz_3604_);
lean_dec(v_sz_3604_);
v_i_boxed_3613_ = lean_unbox_usize(v_i_3605_);
lean_dec(v_i_3605_);
v_res_3614_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0(v___x_31856__boxed_3610_, v_hash_31857__boxed_3611_, v_a_3602_, v_as_3603_, v_sz_boxed_3612_, v_i_boxed_3613_, v_b_3606_, v___y_3607_, v___y_3608_);
lean_dec_ref(v___y_3608_);
lean_dec_ref(v_as_3603_);
lean_dec_ref(v_a_3602_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(lean_object* v_cfg_3619_, lean_object* v_hOut_3620_, lean_object* v_info_3621_, lean_object* v_code_3622_, lean_object* v_out_3623_, lean_object* v_line_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_){
_start:
{
lean_object* v___y_3629_; lean_object* v_url_3644_; uint64_t v_hash_3645_; lean_object* v_path_3646_; lean_object* v_extraPaths_3647_; lean_object* v___y_3649_; uint64_t v___y_3650_; uint8_t v___y_3651_; lean_object* v_fst_3652_; lean_object* v_snd_3653_; lean_object* v___y_3689_; lean_object* v___y_3690_; lean_object* v___y_3691_; lean_object* v___y_3692_; uint8_t v___y_3693_; uint64_t v___y_3694_; lean_object* v_val_3695_; lean_object* v___y_3711_; lean_object* v___y_3712_; lean_object* v_fst_3713_; lean_object* v_snd_3714_; lean_object* v___y_3812_; lean_object* v___y_3813_; lean_object* v___y_3814_; lean_object* v___y_3815_; lean_object* v_val_3816_; lean_object* v___y_3832_; lean_object* v___y_3861_; uint8_t v_kind_3895_; 
v_url_3644_ = lean_ctor_get(v_info_3621_, 0);
v_hash_3645_ = lean_ctor_get_uint64(v_info_3621_, sizeof(void*)*3);
v_path_3646_ = lean_ctor_get(v_info_3621_, 1);
v_extraPaths_3647_ = lean_ctor_get(v_info_3621_, 2);
v_kind_3895_ = lean_ctor_get_uint8(v_cfg_3619_, sizeof(void*)*3);
if (v_kind_3895_ == 0)
{
lean_object* v_scope_3896_; lean_object* v_s_3897_; 
v_scope_3896_ = lean_ctor_get(v_cfg_3619_, 0);
v_s_3897_ = lean_ctor_get(v_scope_3896_, 0);
lean_inc_ref(v_s_3897_);
v___y_3861_ = v_s_3897_;
goto v___jp_3860_;
}
else
{
lean_object* v_scope_3898_; lean_object* v_s_3899_; 
lean_inc_ref(v_path_3646_);
lean_inc_ref(v_url_3644_);
lean_dec_ref(v_line_3624_);
lean_dec(v_code_3622_);
lean_dec_ref(v_info_3621_);
v_scope_3898_ = lean_ctor_get(v_cfg_3619_, 0);
lean_inc_ref(v_scope_3898_);
lean_dec_ref(v_cfg_3619_);
v_s_3899_ = lean_ctor_get(v_scope_3898_, 0);
lean_inc_ref(v_s_3899_);
lean_dec_ref(v_scope_3898_);
v___y_3832_ = v_s_3899_;
goto v___jp_3831_;
}
v___jp_3628_:
{
uint8_t v_didError_3630_; lean_object* v_numSuccesses_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3643_; 
v_didError_3630_ = lean_ctor_get_uint8(v___y_3629_, sizeof(void*)*1);
v_numSuccesses_3631_ = lean_ctor_get(v___y_3629_, 0);
v_isSharedCheck_3643_ = !lean_is_exclusive(v___y_3629_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3633_ = v___y_3629_;
v_isShared_3634_ = v_isSharedCheck_3643_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_numSuccesses_3631_);
lean_dec(v___y_3629_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3643_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3639_; 
v___x_3635_ = lean_box(0);
v___x_3636_ = lean_unsigned_to_nat(1u);
v___x_3637_ = lean_nat_add(v_numSuccesses_3631_, v___x_3636_);
lean_dec(v_numSuccesses_3631_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 0, v___x_3637_);
v___x_3639_ = v___x_3633_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v___x_3637_);
lean_ctor_set_uint8(v_reuseFailAlloc_3642_, sizeof(void*)*1, v_didError_3630_);
v___x_3639_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; 
v___x_3640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3640_, 0, v___x_3635_);
lean_ctor_set(v___x_3640_, 1, v___x_3639_);
v___x_3641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3641_, 0, v___x_3640_);
return v___x_3641_;
}
}
}
v___jp_3648_:
{
if (lean_obj_tag(v_fst_3652_) == 0)
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3678_; 
lean_dec_ref(v___y_3649_);
lean_dec_ref(v_extraPaths_3647_);
v_a_3654_ = lean_ctor_get(v_fst_3652_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v_fst_3652_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3656_ = v_fst_3652_;
v_isShared_3657_ = v_isSharedCheck_3678_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v_fst_3652_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3678_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; uint8_t v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v_numSuccesses_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3677_; 
v___x_3658_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__0));
v___x_3659_ = lean_string_append(v_path_3646_, v___x_3658_);
v___x_3660_ = lean_io_error_to_string(v_a_3654_);
v___x_3661_ = lean_string_append(v___x_3659_, v___x_3660_);
lean_dec_ref(v___x_3660_);
v___x_3662_ = 3;
v___x_3663_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3663_, 0, v___x_3661_);
lean_ctor_set_uint8(v___x_3663_, sizeof(void*)*1, v___x_3662_);
lean_inc_ref(v___y_3626_);
v___x_3664_ = lean_apply_2(v___y_3626_, v___x_3663_, lean_box(0));
v_numSuccesses_3665_ = lean_ctor_get(v_snd_3653_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v_snd_3653_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3667_ = v_snd_3653_;
v_isShared_3668_ = v_isSharedCheck_3677_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_numSuccesses_3665_);
lean_dec(v_snd_3653_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3677_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3669_; lean_object* v___x_3671_; 
v___x_3669_ = lean_box(0);
if (v_isShared_3668_ == 0)
{
v___x_3671_ = v___x_3667_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_numSuccesses_3665_);
v___x_3671_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
lean_object* v___x_3672_; lean_object* v___x_3674_; 
lean_ctor_set_uint8(v___x_3671_, sizeof(void*)*1, v___y_3651_);
v___x_3672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3672_, 0, v___x_3669_);
lean_ctor_set(v___x_3672_, 1, v___x_3671_);
if (v_isShared_3657_ == 0)
{
lean_ctor_set(v___x_3656_, 0, v___x_3672_);
v___x_3674_ = v___x_3656_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v___x_3672_);
v___x_3674_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
return v___x_3674_;
}
}
}
}
}
else
{
lean_object* v___x_3679_; lean_object* v___x_3680_; uint8_t v___x_3681_; 
lean_dec_ref(v_fst_3652_);
lean_dec_ref(v_path_3646_);
v___x_3679_ = lean_array_get_size(v_extraPaths_3647_);
v___x_3680_ = lean_unsigned_to_nat(0u);
v___x_3681_ = lean_nat_dec_eq(v___x_3679_, v___x_3680_);
if (v___x_3681_ == 0)
{
lean_object* v___x_3682_; size_t v_sz_3683_; size_t v___x_3684_; lean_object* v___x_3685_; 
v___x_3682_ = lean_box(0);
v_sz_3683_ = lean_array_size(v_extraPaths_3647_);
v___x_3684_ = ((size_t)0ULL);
v___x_3685_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer_spec__0(v___y_3650_, v_hash_3645_, v___y_3649_, v_extraPaths_3647_, v_sz_3683_, v___x_3684_, v___x_3682_, v_snd_3653_, v___y_3626_);
lean_dec_ref(v_extraPaths_3647_);
lean_dec_ref(v___y_3649_);
if (lean_obj_tag(v___x_3685_) == 0)
{
lean_object* v_a_3686_; lean_object* v_snd_3687_; 
v_a_3686_ = lean_ctor_get(v___x_3685_, 0);
lean_inc(v_a_3686_);
lean_dec_ref_known(v___x_3685_, 1);
v_snd_3687_ = lean_ctor_get(v_a_3686_, 1);
lean_inc(v_snd_3687_);
lean_dec(v_a_3686_);
v___y_3629_ = v_snd_3687_;
goto v___jp_3628_;
}
else
{
return v___x_3685_;
}
}
else
{
lean_dec_ref(v___y_3649_);
lean_dec_ref(v_extraPaths_3647_);
v___y_3629_ = v_snd_3653_;
goto v___jp_3628_;
}
}
}
v___jp_3688_:
{
lean_object* v___x_3696_; uint8_t v___x_3697_; 
v___x_3696_ = lean_array_get_size(v___y_3689_);
v___x_3697_ = lean_nat_dec_lt(v___y_3691_, v___x_3696_);
if (v___x_3697_ == 0)
{
v___y_3649_ = v___y_3690_;
v___y_3650_ = v___y_3694_;
v___y_3651_ = v___y_3693_;
v_fst_3652_ = v_val_3695_;
v_snd_3653_ = v___y_3692_;
goto v___jp_3648_;
}
else
{
lean_object* v___x_3698_; size_t v___x_3699_; size_t v___x_3700_; lean_object* v___x_3701_; 
v___x_3698_ = lean_box(0);
v___x_3699_ = ((size_t)0ULL);
v___x_3700_ = lean_usize_of_nat(v___x_3696_);
v___x_3701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_3689_, v___x_3699_, v___x_3700_, v___x_3698_, v___y_3626_);
if (lean_obj_tag(v___x_3701_) == 0)
{
lean_dec_ref_known(v___x_3701_, 1);
v___y_3649_ = v___y_3690_;
v___y_3650_ = v___y_3694_;
v___y_3651_ = v___y_3693_;
v_fst_3652_ = v_val_3695_;
v_snd_3653_ = v___y_3692_;
goto v___jp_3648_;
}
else
{
lean_object* v_a_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3709_; 
lean_dec_ref(v_val_3695_);
lean_dec_ref(v___y_3692_);
lean_dec_ref(v___y_3690_);
lean_dec_ref(v_extraPaths_3647_);
lean_dec_ref(v_path_3646_);
v_a_3702_ = lean_ctor_get(v___x_3701_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v___x_3701_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3704_ = v___x_3701_;
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_a_3702_);
lean_dec(v___x_3701_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3707_; 
if (v_isShared_3705_ == 0)
{
v___x_3707_ = v___x_3704_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_a_3702_);
v___x_3707_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
return v___x_3707_;
}
}
}
}
}
v___jp_3710_:
{
if (lean_obj_tag(v_fst_3713_) == 0)
{
lean_object* v_a_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3770_; 
v_a_3715_ = lean_ctor_get(v_fst_3713_, 0);
v_isSharedCheck_3770_ = !lean_is_exclusive(v_fst_3713_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3717_ = v_fst_3713_;
v_isShared_3718_ = v_isSharedCheck_3770_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_a_3715_);
lean_dec(v_fst_3713_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3770_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
if (lean_obj_tag(v_a_3715_) == 11)
{
lean_object* v___x_3720_; 
lean_dec_ref_known(v_a_3715_, 2);
lean_dec_ref(v___y_3712_);
lean_dec_ref(v___y_3711_);
if (v_isShared_3718_ == 0)
{
lean_ctor_set_tag(v___x_3717_, 1);
lean_ctor_set(v___x_3717_, 0, v_code_3622_);
v___x_3720_ = v___x_3717_;
goto v_reusejp_3719_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_code_3622_);
v___x_3720_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3719_;
}
v_reusejp_3719_:
{
lean_object* v___x_3721_; 
v___x_3721_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3619_, v_hOut_3620_, v_info_3621_, v___x_3720_, v_out_3623_, v_line_3624_, v___y_3626_);
if (lean_obj_tag(v___x_3721_) == 0)
{
lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3739_; 
v_isSharedCheck_3739_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3739_ == 0)
{
lean_object* v_unused_3740_; 
v_unused_3740_ = lean_ctor_get(v___x_3721_, 0);
lean_dec(v_unused_3740_);
v___x_3723_ = v___x_3721_;
v_isShared_3724_ = v_isSharedCheck_3739_;
goto v_resetjp_3722_;
}
else
{
lean_dec(v___x_3721_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3739_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v_numSuccesses_3725_; lean_object* v___x_3727_; uint8_t v_isShared_3728_; uint8_t v_isSharedCheck_3738_; 
v_numSuccesses_3725_ = lean_ctor_get(v_snd_3714_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v_snd_3714_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3727_ = v_snd_3714_;
v_isShared_3728_ = v_isSharedCheck_3738_;
goto v_resetjp_3726_;
}
else
{
lean_inc(v_numSuccesses_3725_);
lean_dec(v_snd_3714_);
v___x_3727_ = lean_box(0);
v_isShared_3728_ = v_isSharedCheck_3738_;
goto v_resetjp_3726_;
}
v_resetjp_3726_:
{
lean_object* v___x_3729_; uint8_t v___x_3730_; lean_object* v___x_3732_; 
v___x_3729_ = lean_box(0);
v___x_3730_ = 1;
if (v_isShared_3728_ == 0)
{
v___x_3732_ = v___x_3727_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v_numSuccesses_3725_);
v___x_3732_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
lean_object* v___x_3733_; lean_object* v___x_3735_; 
lean_ctor_set_uint8(v___x_3732_, sizeof(void*)*1, v___x_3730_);
v___x_3733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3729_);
lean_ctor_set(v___x_3733_, 1, v___x_3732_);
if (v_isShared_3724_ == 0)
{
lean_ctor_set(v___x_3723_, 0, v___x_3733_);
v___x_3735_ = v___x_3723_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v___x_3733_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
}
}
else
{
lean_object* v_a_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3748_; 
lean_dec_ref(v_snd_3714_);
v_a_3741_ = lean_ctor_get(v___x_3721_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3743_ = v___x_3721_;
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_a_3741_);
lean_dec(v___x_3721_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3746_; 
if (v_isShared_3744_ == 0)
{
v___x_3746_ = v___x_3743_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v_a_3741_);
v___x_3746_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
return v___x_3746_;
}
}
}
}
}
else
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; uint8_t v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v_numSuccesses_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3769_; 
lean_del_object(v___x_3717_);
lean_dec_ref(v_line_3624_);
lean_dec(v_code_3622_);
lean_dec_ref(v_info_3621_);
lean_dec_ref(v_cfg_3619_);
lean_inc_ref_n(v___y_3626_, 2);
v___x_3750_ = lean_apply_2(v___y_3626_, v___y_3712_, lean_box(0));
v___x_3751_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__1));
v___x_3752_ = lean_string_append(v___y_3711_, v___x_3751_);
v___x_3753_ = lean_io_error_to_string(v_a_3715_);
v___x_3754_ = lean_string_append(v___x_3752_, v___x_3753_);
lean_dec_ref(v___x_3753_);
v___x_3755_ = 3;
v___x_3756_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3756_, 0, v___x_3754_);
lean_ctor_set_uint8(v___x_3756_, sizeof(void*)*1, v___x_3755_);
v___x_3757_ = lean_apply_2(v___y_3626_, v___x_3756_, lean_box(0));
v_numSuccesses_3758_ = lean_ctor_get(v_snd_3714_, 0);
v_isSharedCheck_3769_ = !lean_is_exclusive(v_snd_3714_);
if (v_isSharedCheck_3769_ == 0)
{
v___x_3760_ = v_snd_3714_;
v_isShared_3761_ = v_isSharedCheck_3769_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_numSuccesses_3758_);
lean_dec(v_snd_3714_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3769_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3762_; uint8_t v___x_3763_; lean_object* v___x_3765_; 
v___x_3762_ = lean_box(0);
v___x_3763_ = 1;
if (v_isShared_3761_ == 0)
{
v___x_3765_ = v___x_3760_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3768_; 
v_reuseFailAlloc_3768_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3768_, 0, v_numSuccesses_3758_);
v___x_3765_ = v_reuseFailAlloc_3768_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; 
lean_ctor_set_uint8(v___x_3765_, sizeof(void*)*1, v___x_3763_);
v___x_3766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3766_, 0, v___x_3762_);
lean_ctor_set(v___x_3766_, 1, v___x_3765_);
v___x_3767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3767_, 0, v___x_3766_);
return v___x_3767_;
}
}
}
}
}
else
{
lean_object* v_a_3771_; lean_object* v___x_3773_; uint8_t v_isShared_3774_; uint8_t v_isSharedCheck_3810_; 
lean_inc_ref(v_extraPaths_3647_);
lean_inc_ref(v_path_3646_);
lean_dec_ref(v_line_3624_);
lean_dec(v_code_3622_);
lean_dec_ref(v_info_3621_);
lean_dec_ref(v_cfg_3619_);
v_a_3771_ = lean_ctor_get(v_fst_3713_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v_fst_3713_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3773_ = v_fst_3713_;
v_isShared_3774_ = v_isSharedCheck_3810_;
goto v_resetjp_3772_;
}
else
{
lean_inc(v_a_3771_);
lean_dec(v_fst_3713_);
v___x_3773_ = lean_box(0);
v_isShared_3774_ = v_isSharedCheck_3810_;
goto v_resetjp_3772_;
}
v_resetjp_3772_:
{
lean_object* v___x_3775_; uint64_t v___x_3776_; uint64_t v___x_3777_; uint64_t v___x_3778_; uint8_t v___x_3779_; 
lean_inc_ref(v___y_3626_);
v___x_3775_ = lean_apply_2(v___y_3626_, v___y_3712_, lean_box(0));
v___x_3776_ = l_Lake_Hash_nil;
v___x_3777_ = lean_byte_array_hash(v_a_3771_);
v___x_3778_ = lean_uint64_mix_hash(v___x_3776_, v___x_3777_);
v___x_3779_ = lean_uint64_dec_eq(v___x_3778_, v_hash_3645_);
if (v___x_3779_ == 0)
{
uint8_t v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; uint8_t v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v_numSuccesses_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3798_; 
lean_del_object(v___x_3773_);
lean_dec(v_a_3771_);
lean_dec_ref(v_extraPaths_3647_);
lean_dec_ref(v_path_3646_);
v___x_3780_ = 1;
v___x_3781_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__1));
v___x_3782_ = lean_string_append(v___y_3711_, v___x_3781_);
v___x_3783_ = l_Lake_lowerHexUInt64(v___x_3778_);
v___x_3784_ = lean_string_append(v___x_3782_, v___x_3783_);
lean_dec_ref(v___x_3783_);
v___x_3785_ = 3;
v___x_3786_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3786_, 0, v___x_3784_);
lean_ctor_set_uint8(v___x_3786_, sizeof(void*)*1, v___x_3785_);
lean_inc_ref(v___y_3626_);
v___x_3787_ = lean_apply_2(v___y_3626_, v___x_3786_, lean_box(0));
v_numSuccesses_3788_ = lean_ctor_get(v_snd_3714_, 0);
v_isSharedCheck_3798_ = !lean_is_exclusive(v_snd_3714_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3790_ = v_snd_3714_;
v_isShared_3791_ = v_isSharedCheck_3798_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_numSuccesses_3788_);
lean_dec(v_snd_3714_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3798_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3792_; lean_object* v___x_3794_; 
v___x_3792_ = lean_box(0);
if (v_isShared_3791_ == 0)
{
v___x_3794_ = v___x_3790_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v_numSuccesses_3788_);
v___x_3794_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
lean_object* v___x_3795_; lean_object* v___x_3796_; 
lean_ctor_set_uint8(v___x_3794_, sizeof(void*)*1, v___x_3780_);
v___x_3795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3792_);
lean_ctor_set(v___x_3795_, 1, v___x_3794_);
v___x_3796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3795_);
return v___x_3796_;
}
}
}
else
{
lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3799_ = lean_unsigned_to_nat(0u);
v___x_3800_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3801_ = lean_io_rename(v___y_3711_, v_path_3646_);
lean_dec_ref(v___y_3711_);
if (lean_obj_tag(v___x_3801_) == 0)
{
lean_object* v_a_3802_; lean_object* v___x_3804_; 
v_a_3802_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_a_3802_);
lean_dec_ref_known(v___x_3801_, 1);
if (v_isShared_3774_ == 0)
{
lean_ctor_set(v___x_3773_, 0, v_a_3802_);
v___x_3804_ = v___x_3773_;
goto v_reusejp_3803_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v_a_3802_);
v___x_3804_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3803_;
}
v_reusejp_3803_:
{
v___y_3689_ = v___x_3800_;
v___y_3690_ = v_a_3771_;
v___y_3691_ = v___x_3799_;
v___y_3692_ = v_snd_3714_;
v___y_3693_ = v___x_3779_;
v___y_3694_ = v___x_3778_;
v_val_3695_ = v___x_3804_;
goto v___jp_3688_;
}
}
else
{
lean_object* v_a_3806_; lean_object* v___x_3808_; 
v_a_3806_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_a_3806_);
lean_dec_ref_known(v___x_3801_, 1);
if (v_isShared_3774_ == 0)
{
lean_ctor_set_tag(v___x_3773_, 0);
lean_ctor_set(v___x_3773_, 0, v_a_3806_);
v___x_3808_ = v___x_3773_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3806_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
v___y_3689_ = v___x_3800_;
v___y_3690_ = v_a_3771_;
v___y_3691_ = v___x_3799_;
v___y_3692_ = v_snd_3714_;
v___y_3693_ = v___x_3779_;
v___y_3694_ = v___x_3778_;
v_val_3695_ = v___x_3808_;
goto v___jp_3688_;
}
}
}
}
}
}
v___jp_3811_:
{
lean_object* v___x_3817_; uint8_t v___x_3818_; 
v___x_3817_ = lean_array_get_size(v___y_3814_);
v___x_3818_ = lean_nat_dec_lt(v___y_3813_, v___x_3817_);
if (v___x_3818_ == 0)
{
v___y_3711_ = v___y_3812_;
v___y_3712_ = v___y_3815_;
v_fst_3713_ = v_val_3816_;
v_snd_3714_ = v___y_3625_;
goto v___jp_3710_;
}
else
{
lean_object* v___x_3819_; size_t v___x_3820_; size_t v___x_3821_; lean_object* v___x_3822_; 
v___x_3819_ = lean_box(0);
v___x_3820_ = ((size_t)0ULL);
v___x_3821_ = lean_usize_of_nat(v___x_3817_);
v___x_3822_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_3814_, v___x_3820_, v___x_3821_, v___x_3819_, v___y_3626_);
if (lean_obj_tag(v___x_3822_) == 0)
{
lean_dec_ref_known(v___x_3822_, 1);
v___y_3711_ = v___y_3812_;
v___y_3712_ = v___y_3815_;
v_fst_3713_ = v_val_3816_;
v_snd_3714_ = v___y_3625_;
goto v___jp_3710_;
}
else
{
lean_object* v_a_3823_; lean_object* v___x_3825_; uint8_t v_isShared_3826_; uint8_t v_isSharedCheck_3830_; 
lean_dec_ref(v_val_3816_);
lean_dec_ref(v___y_3815_);
lean_dec_ref(v___y_3812_);
lean_dec_ref(v___y_3625_);
lean_dec_ref(v_line_3624_);
lean_dec(v_code_3622_);
lean_dec_ref(v_info_3621_);
lean_dec_ref(v_cfg_3619_);
v_a_3823_ = lean_ctor_get(v___x_3822_, 0);
v_isSharedCheck_3830_ = !lean_is_exclusive(v___x_3822_);
if (v_isSharedCheck_3830_ == 0)
{
v___x_3825_ = v___x_3822_;
v_isShared_3826_ = v_isSharedCheck_3830_;
goto v_resetjp_3824_;
}
else
{
lean_inc(v_a_3823_);
lean_dec(v___x_3822_);
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
v___jp_3831_:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; uint8_t v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; uint8_t v_didError_3846_; lean_object* v_numSuccesses_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3859_; 
v___x_3833_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__2));
v___x_3834_ = lean_string_append(v___y_3832_, v___x_3833_);
v___x_3835_ = l_Lake_lowerHexUInt64(v_hash_3645_);
v___x_3836_ = lean_string_append(v___x_3834_, v___x_3835_);
lean_dec_ref(v___x_3835_);
v___x_3837_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3838_ = lean_string_append(v___x_3836_, v___x_3837_);
v___x_3839_ = lean_string_append(v___x_3838_, v_path_3646_);
lean_dec_ref(v_path_3646_);
v___x_3840_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3841_ = lean_string_append(v___x_3839_, v___x_3840_);
v___x_3842_ = lean_string_append(v___x_3841_, v_url_3644_);
lean_dec_ref(v_url_3644_);
v___x_3843_ = 1;
v___x_3844_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3844_, 0, v___x_3842_);
lean_ctor_set_uint8(v___x_3844_, sizeof(void*)*1, v___x_3843_);
lean_inc_ref(v___y_3626_);
v___x_3845_ = lean_apply_2(v___y_3626_, v___x_3844_, lean_box(0));
v_didError_3846_ = lean_ctor_get_uint8(v___y_3625_, sizeof(void*)*1);
v_numSuccesses_3847_ = lean_ctor_get(v___y_3625_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___y_3625_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3849_ = v___y_3625_;
v_isShared_3850_ = v_isSharedCheck_3859_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_numSuccesses_3847_);
lean_dec(v___y_3625_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3859_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3855_; 
v___x_3851_ = lean_box(0);
v___x_3852_ = lean_unsigned_to_nat(1u);
v___x_3853_ = lean_nat_add(v_numSuccesses_3847_, v___x_3852_);
lean_dec(v_numSuccesses_3847_);
if (v_isShared_3850_ == 0)
{
lean_ctor_set(v___x_3849_, 0, v___x_3853_);
v___x_3855_ = v___x_3849_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v___x_3853_);
lean_ctor_set_uint8(v_reuseFailAlloc_3858_, sizeof(void*)*1, v_didError_3846_);
v___x_3855_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
lean_object* v___x_3856_; lean_object* v___x_3857_; 
v___x_3856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3856_, 0, v___x_3851_);
lean_ctor_set(v___x_3856_, 1, v___x_3855_);
v___x_3857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3857_, 0, v___x_3856_);
return v___x_3857_;
}
}
}
v___jp_3860_:
{
lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; uint8_t v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v_tmpPath_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; 
v___x_3862_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___closed__3));
v___x_3863_ = lean_string_append(v___y_3861_, v___x_3862_);
v___x_3864_ = l_Lake_lowerHexUInt64(v_hash_3645_);
v___x_3865_ = lean_string_append(v___x_3863_, v___x_3864_);
lean_dec_ref(v___x_3864_);
v___x_3866_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_3867_ = lean_string_append(v___x_3865_, v___x_3866_);
v___x_3868_ = lean_string_append(v___x_3867_, v_path_3646_);
v___x_3869_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_3870_ = lean_string_append(v___x_3868_, v___x_3869_);
v___x_3871_ = lean_string_append(v___x_3870_, v_url_3644_);
v___x_3872_ = 1;
v___x_3873_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3873_, 0, v___x_3871_);
lean_ctor_set_uint8(v___x_3873_, sizeof(void*)*1, v___x_3872_);
v___x_3874_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
lean_inc_ref(v_path_3646_);
v_tmpPath_3875_ = l_System_FilePath_addExtension(v_path_3646_, v___x_3874_);
v___x_3876_ = lean_unsigned_to_nat(0u);
v___x_3877_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_3878_ = l_IO_FS_readBinFile(v_tmpPath_3875_);
if (lean_obj_tag(v___x_3878_) == 0)
{
lean_object* v_a_3879_; lean_object* v___x_3881_; uint8_t v_isShared_3882_; uint8_t v_isSharedCheck_3886_; 
v_a_3879_ = lean_ctor_get(v___x_3878_, 0);
v_isSharedCheck_3886_ = !lean_is_exclusive(v___x_3878_);
if (v_isSharedCheck_3886_ == 0)
{
v___x_3881_ = v___x_3878_;
v_isShared_3882_ = v_isSharedCheck_3886_;
goto v_resetjp_3880_;
}
else
{
lean_inc(v_a_3879_);
lean_dec(v___x_3878_);
v___x_3881_ = lean_box(0);
v_isShared_3882_ = v_isSharedCheck_3886_;
goto v_resetjp_3880_;
}
v_resetjp_3880_:
{
lean_object* v___x_3884_; 
if (v_isShared_3882_ == 0)
{
lean_ctor_set_tag(v___x_3881_, 1);
v___x_3884_ = v___x_3881_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v_a_3879_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
v___y_3812_ = v_tmpPath_3875_;
v___y_3813_ = v___x_3876_;
v___y_3814_ = v___x_3877_;
v___y_3815_ = v___x_3873_;
v_val_3816_ = v___x_3884_;
goto v___jp_3811_;
}
}
}
else
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3894_; 
v_a_3887_ = lean_ctor_get(v___x_3878_, 0);
v_isSharedCheck_3894_ = !lean_is_exclusive(v___x_3878_);
if (v_isSharedCheck_3894_ == 0)
{
v___x_3889_ = v___x_3878_;
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v___x_3878_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3892_; 
if (v_isShared_3890_ == 0)
{
lean_ctor_set_tag(v___x_3889_, 0);
v___x_3892_ = v___x_3889_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v_a_3887_);
v___x_3892_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
v___y_3812_ = v_tmpPath_3875_;
v___y_3813_ = v___x_3876_;
v___y_3814_ = v___x_3877_;
v___y_3815_ = v___x_3873_;
v_val_3816_ = v___x_3892_;
goto v___jp_3811_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer___boxed(lean_object* v_cfg_3900_, lean_object* v_hOut_3901_, lean_object* v_info_3902_, lean_object* v_code_3903_, lean_object* v_out_3904_, lean_object* v_line_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_){
_start:
{
lean_object* v_res_3909_; 
v_res_3909_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(v_cfg_3900_, v_hOut_3901_, v_info_3902_, v_code_3903_, v_out_3904_, v_line_3905_, v___y_3906_, v___y_3907_);
lean_dec_ref(v___y_3907_);
lean_dec(v_out_3904_);
lean_dec(v_hOut_3901_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(lean_object* v_cfg_3913_, lean_object* v_hOut_3914_, lean_object* v_val_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_, uint8_t v___x_3918_, lean_object* v_00___3919_, lean_object* v___y_3920_, lean_object* v___y_3921_){
_start:
{
lean_object* v_code_x3f_3924_; lean_object* v___x_3952_; lean_object* v___x_3953_; 
v___x_3952_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_3953_ = l_Lake_JsonObject_getJson_x3f(v_a_3916_, v___x_3952_);
if (lean_obj_tag(v___x_3953_) == 0)
{
lean_object* v___x_3954_; 
v___x_3954_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__1));
v_code_x3f_3924_ = v___x_3954_;
goto v___jp_3923_;
}
else
{
lean_object* v_val_3955_; lean_object* v___x_3956_; 
v_val_3955_ = lean_ctor_get(v___x_3953_, 0);
lean_inc(v_val_3955_);
lean_dec_ref_known(v___x_3953_, 1);
v___x_3956_ = l_Lean_Json_getNat_x3f(v_val_3955_);
if (lean_obj_tag(v___x_3956_) == 0)
{
lean_object* v_a_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3966_; 
v_a_3957_ = lean_ctor_get(v___x_3956_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3959_ = v___x_3956_;
v_isShared_3960_ = v_isSharedCheck_3966_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_a_3957_);
lean_dec(v___x_3956_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3966_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3964_; 
v___x_3961_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_3962_ = lean_string_append(v___x_3961_, v_a_3957_);
lean_dec(v_a_3957_);
if (v_isShared_3960_ == 0)
{
lean_ctor_set(v___x_3959_, 0, v___x_3962_);
v___x_3964_ = v___x_3959_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v___x_3962_);
v___x_3964_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
v_code_x3f_3924_ = v___x_3964_;
goto v___jp_3923_;
}
}
}
else
{
if (lean_obj_tag(v___x_3956_) == 1)
{
lean_object* v_a_3967_; lean_object* v___x_3968_; uint8_t v___x_3969_; 
v_a_3967_ = lean_ctor_get(v___x_3956_, 0);
lean_inc(v_a_3967_);
v___x_3968_ = lean_unsigned_to_nat(200u);
v___x_3969_ = lean_nat_dec_eq(v_a_3967_, v___x_3968_);
if (v___x_3969_ == 0)
{
lean_object* v___x_3970_; uint8_t v___x_3971_; 
v___x_3970_ = lean_unsigned_to_nat(201u);
v___x_3971_ = lean_nat_dec_eq(v_a_3967_, v___x_3970_);
lean_dec(v_a_3967_);
if (v___x_3971_ == 0)
{
v_code_x3f_3924_ = v___x_3956_;
goto v___jp_3923_;
}
else
{
lean_object* v___x_3972_; 
lean_dec_ref_known(v___x_3956_, 1);
v___x_3972_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(v_cfg_3913_, v_hOut_3914_, v_val_3915_, v___x_3970_, v_a_3916_, v_a_3917_, v___y_3920_, v___y_3921_);
return v___x_3972_;
}
}
else
{
lean_object* v___x_3973_; 
lean_dec(v_a_3967_);
lean_dec_ref_known(v___x_3956_, 1);
v___x_3973_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleTransfer(v_cfg_3913_, v_hOut_3914_, v_val_3915_, v___x_3968_, v_a_3916_, v_a_3917_, v___y_3920_, v___y_3921_);
return v___x_3973_;
}
}
else
{
v_code_x3f_3924_ = v___x_3956_;
goto v___jp_3923_;
}
}
}
v___jp_3923_:
{
lean_object* v___x_3925_; 
v___x_3925_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3913_, v_hOut_3914_, v_val_3915_, v_code_x3f_3924_, v_a_3916_, v_a_3917_, v___y_3921_);
if (lean_obj_tag(v___x_3925_) == 0)
{
lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3942_; 
v_isSharedCheck_3942_ = !lean_is_exclusive(v___x_3925_);
if (v_isSharedCheck_3942_ == 0)
{
lean_object* v_unused_3943_; 
v_unused_3943_ = lean_ctor_get(v___x_3925_, 0);
lean_dec(v_unused_3943_);
v___x_3927_ = v___x_3925_;
v_isShared_3928_ = v_isSharedCheck_3942_;
goto v_resetjp_3926_;
}
else
{
lean_dec(v___x_3925_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3942_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v_numSuccesses_3929_; lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3941_; 
v_numSuccesses_3929_ = lean_ctor_get(v___y_3920_, 0);
v_isSharedCheck_3941_ = !lean_is_exclusive(v___y_3920_);
if (v_isSharedCheck_3941_ == 0)
{
v___x_3931_ = v___y_3920_;
v_isShared_3932_ = v_isSharedCheck_3941_;
goto v_resetjp_3930_;
}
else
{
lean_inc(v_numSuccesses_3929_);
lean_dec(v___y_3920_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3941_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v___x_3933_; lean_object* v___x_3935_; 
v___x_3933_ = lean_box(0);
if (v_isShared_3932_ == 0)
{
v___x_3935_ = v___x_3931_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v_numSuccesses_3929_);
v___x_3935_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
lean_object* v___x_3936_; lean_object* v___x_3938_; 
lean_ctor_set_uint8(v___x_3935_, sizeof(void*)*1, v___x_3918_);
v___x_3936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3936_, 0, v___x_3933_);
lean_ctor_set(v___x_3936_, 1, v___x_3935_);
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 0, v___x_3936_);
v___x_3938_ = v___x_3927_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v___x_3936_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
return v___x_3938_;
}
}
}
}
}
else
{
lean_object* v_a_3944_; lean_object* v___x_3946_; uint8_t v_isShared_3947_; uint8_t v_isSharedCheck_3951_; 
lean_dec_ref(v___y_3920_);
v_a_3944_ = lean_ctor_get(v___x_3925_, 0);
v_isSharedCheck_3951_ = !lean_is_exclusive(v___x_3925_);
if (v_isSharedCheck_3951_ == 0)
{
v___x_3946_ = v___x_3925_;
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
else
{
lean_inc(v_a_3944_);
lean_dec(v___x_3925_);
v___x_3946_ = lean_box(0);
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
v_resetjp_3945_:
{
lean_object* v___x_3949_; 
if (v_isShared_3947_ == 0)
{
v___x_3949_ = v___x_3946_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v_a_3944_);
v___x_3949_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
return v___x_3949_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___boxed(lean_object* v_cfg_3974_, lean_object* v_hOut_3975_, lean_object* v_val_3976_, lean_object* v_a_3977_, lean_object* v_a_3978_, lean_object* v___x_3979_, lean_object* v_00___3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_){
_start:
{
uint8_t v___x_10934__boxed_3984_; lean_object* v_res_3985_; 
v___x_10934__boxed_3984_ = lean_unbox(v___x_3979_);
v_res_3985_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_3974_, v_hOut_3975_, v_val_3976_, v_a_3977_, v_a_3978_, v___x_10934__boxed_3984_, v_00___3980_, v___y_3981_, v___y_3982_);
lean_dec_ref(v___y_3982_);
lean_dec(v_a_3977_);
lean_dec(v_hOut_3975_);
return v_res_3985_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(lean_object* v_cfg_3986_, lean_object* v_hOut_3987_, lean_object* v_val_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, uint8_t v___x_3991_, lean_object* v_x_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_){
_start:
{
lean_object* v___y_3997_; lean_object* v___x_4025_; lean_object* v___x_4026_; 
v___x_4025_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_4026_ = l_Lake_JsonObject_getJson_x3f(v_a_3989_, v___x_4025_);
if (lean_obj_tag(v___x_4026_) == 0)
{
lean_object* v___x_4027_; 
v___x_4027_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0___closed__1));
v___y_3997_ = v___x_4027_;
goto v___jp_3996_;
}
else
{
lean_object* v_val_4028_; lean_object* v___x_4029_; 
v_val_4028_ = lean_ctor_get(v___x_4026_, 0);
lean_inc(v_val_4028_);
lean_dec_ref_known(v___x_4026_, 1);
v___x_4029_ = l_Lean_Json_getNat_x3f(v_val_4028_);
if (lean_obj_tag(v___x_4029_) == 0)
{
lean_object* v_a_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4039_; 
v_a_4030_ = lean_ctor_get(v___x_4029_, 0);
v_isSharedCheck_4039_ = !lean_is_exclusive(v___x_4029_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_4032_ = v___x_4029_;
v_isShared_4033_ = v_isSharedCheck_4039_;
goto v_resetjp_4031_;
}
else
{
lean_inc(v_a_4030_);
lean_dec(v___x_4029_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4039_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4037_; 
v___x_4034_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__7));
v___x_4035_ = lean_string_append(v___x_4034_, v_a_4030_);
lean_dec(v_a_4030_);
if (v_isShared_4033_ == 0)
{
lean_ctor_set(v___x_4032_, 0, v___x_4035_);
v___x_4037_ = v___x_4032_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v___x_4035_);
v___x_4037_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
v___y_3997_ = v___x_4037_;
goto v___jp_3996_;
}
}
}
else
{
v___y_3997_ = v___x_4029_;
goto v___jp_3996_;
}
}
v___jp_3996_:
{
lean_object* v___x_3998_; 
v___x_3998_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure(v_cfg_3986_, v_hOut_3987_, v_val_3988_, v___y_3997_, v_a_3989_, v_a_3990_, v___y_3994_);
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_object* v___x_4000_; uint8_t v_isShared_4001_; uint8_t v_isSharedCheck_4015_; 
v_isSharedCheck_4015_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4015_ == 0)
{
lean_object* v_unused_4016_; 
v_unused_4016_ = lean_ctor_get(v___x_3998_, 0);
lean_dec(v_unused_4016_);
v___x_4000_ = v___x_3998_;
v_isShared_4001_ = v_isSharedCheck_4015_;
goto v_resetjp_3999_;
}
else
{
lean_dec(v___x_3998_);
v___x_4000_ = lean_box(0);
v_isShared_4001_ = v_isSharedCheck_4015_;
goto v_resetjp_3999_;
}
v_resetjp_3999_:
{
lean_object* v_numSuccesses_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4014_; 
v_numSuccesses_4002_ = lean_ctor_get(v___y_3993_, 0);
v_isSharedCheck_4014_ = !lean_is_exclusive(v___y_3993_);
if (v_isSharedCheck_4014_ == 0)
{
v___x_4004_ = v___y_3993_;
v_isShared_4005_ = v_isSharedCheck_4014_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_numSuccesses_4002_);
lean_dec(v___y_3993_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4014_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4006_; lean_object* v___x_4008_; 
v___x_4006_ = lean_box(0);
if (v_isShared_4005_ == 0)
{
v___x_4008_ = v___x_4004_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v_numSuccesses_4002_);
v___x_4008_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
lean_object* v___x_4009_; lean_object* v___x_4011_; 
lean_ctor_set_uint8(v___x_4008_, sizeof(void*)*1, v___x_3991_);
v___x_4009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4009_, 0, v___x_4006_);
lean_ctor_set(v___x_4009_, 1, v___x_4008_);
if (v_isShared_4001_ == 0)
{
lean_ctor_set(v___x_4000_, 0, v___x_4009_);
v___x_4011_ = v___x_4000_;
goto v_reusejp_4010_;
}
else
{
lean_object* v_reuseFailAlloc_4012_; 
v_reuseFailAlloc_4012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4012_, 0, v___x_4009_);
v___x_4011_ = v_reuseFailAlloc_4012_;
goto v_reusejp_4010_;
}
v_reusejp_4010_:
{
return v___x_4011_;
}
}
}
}
}
else
{
lean_object* v_a_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4024_; 
lean_dec_ref(v___y_3993_);
v_a_4017_ = lean_ctor_get(v___x_3998_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_3998_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4019_ = v___x_3998_;
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_a_4017_);
lean_dec(v___x_3998_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v___x_4022_; 
if (v_isShared_4020_ == 0)
{
v___x_4022_ = v___x_4019_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4017_);
v___x_4022_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
return v___x_4022_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1___boxed(lean_object* v_cfg_4040_, lean_object* v_hOut_4041_, lean_object* v_val_4042_, lean_object* v_a_4043_, lean_object* v_a_4044_, lean_object* v___x_4045_, lean_object* v_x_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_){
_start:
{
uint8_t v___x_11061__boxed_4050_; lean_object* v_res_4051_; 
v___x_11061__boxed_4050_ = lean_unbox(v___x_4045_);
v_res_4051_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4040_, v_hOut_4041_, v_val_4042_, v_a_4043_, v_a_4044_, v___x_11061__boxed_4050_, v_x_4046_, v___y_4047_, v___y_4048_);
lean_dec_ref(v___y_4048_);
lean_dec_ref(v_x_4046_);
lean_dec(v_a_4043_);
lean_dec(v_hOut_4041_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(lean_object* v_cfg_4057_, lean_object* v_h_4058_, lean_object* v_hOut_4059_, lean_object* v_s_4060_, lean_object* v___y_4061_){
_start:
{
lean_object* v___y_4064_; lean_object* v___x_4076_; 
v___x_4076_ = lean_io_prim_handle_get_line(v_h_4058_);
if (lean_obj_tag(v___x_4076_) == 0)
{
lean_object* v_a_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4167_; 
v_a_4077_ = lean_ctor_get(v___x_4076_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v___x_4076_);
if (v_isSharedCheck_4167_ == 0)
{
v___x_4079_ = v___x_4076_;
v_isShared_4080_ = v_isSharedCheck_4167_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_a_4077_);
lean_dec(v___x_4076_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4167_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v_startInclusive_4085_; lean_object* v_endExclusive_4086_; lean_object* v___x_4087_; uint8_t v___x_4088_; 
v___x_4081_ = lean_unsigned_to_nat(0u);
v___x_4082_ = lean_string_utf8_byte_size(v_a_4077_);
lean_inc(v_a_4077_);
v___x_4083_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4083_, 0, v_a_4077_);
lean_ctor_set(v___x_4083_, 1, v___x_4081_);
lean_ctor_set(v___x_4083_, 2, v___x_4082_);
v___x_4084_ = l_String_Slice_trimAscii(v___x_4083_);
v_startInclusive_4085_ = lean_ctor_get(v___x_4084_, 1);
lean_inc(v_startInclusive_4085_);
v_endExclusive_4086_ = lean_ctor_get(v___x_4084_, 2);
lean_inc(v_endExclusive_4086_);
v___x_4087_ = lean_nat_sub(v_endExclusive_4086_, v_startInclusive_4085_);
lean_dec(v_startInclusive_4085_);
lean_dec(v_endExclusive_4086_);
v___x_4088_ = lean_nat_dec_eq(v___x_4087_, v___x_4081_);
lean_dec(v___x_4087_);
if (v___x_4088_ == 0)
{
uint8_t v___x_4089_; lean_object* v___y_4091_; lean_object* v_a_4109_; lean_object* v___x_4128_; 
lean_del_object(v___x_4079_);
v___x_4089_ = 1;
lean_inc(v_a_4077_);
v___x_4128_ = l_Lean_Json_parse(v_a_4077_);
if (lean_obj_tag(v___x_4128_) == 0)
{
lean_object* v_a_4129_; 
lean_dec(v_a_4077_);
v_a_4129_ = lean_ctor_get(v___x_4128_, 0);
lean_inc(v_a_4129_);
lean_dec_ref_known(v___x_4128_, 1);
v_a_4109_ = v_a_4129_;
goto v___jp_4108_;
}
else
{
lean_object* v_a_4130_; lean_object* v___x_4131_; 
v_a_4130_ = lean_ctor_get(v___x_4128_, 0);
lean_inc(v_a_4130_);
lean_dec_ref_known(v___x_4128_, 1);
v___x_4131_ = l_Lean_Json_getObj_x3f(v_a_4130_);
if (lean_obj_tag(v___x_4131_) == 0)
{
lean_object* v_a_4132_; 
lean_dec(v_a_4077_);
v_a_4132_ = lean_ctor_get(v___x_4131_, 0);
lean_inc(v_a_4132_);
lean_dec_ref_known(v___x_4131_, 1);
v_a_4109_ = v_a_4132_;
goto v___jp_4108_;
}
else
{
lean_object* v_a_4133_; lean_object* v___x_4134_; 
v_a_4133_ = lean_ctor_get(v___x_4131_, 0);
lean_inc(v_a_4133_);
lean_dec_ref_known(v___x_4131_, 1);
v___x_4134_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_getInfo_x3f(v_cfg_4057_, v_a_4133_);
if (lean_obj_tag(v___x_4134_) == 1)
{
lean_object* v_val_4135_; lean_object* v___x_4139_; lean_object* v___x_4140_; 
lean_dec_ref(v___x_4084_);
v_val_4135_ = lean_ctor_get(v___x_4134_, 0);
lean_inc(v_val_4135_);
lean_dec_ref_known(v___x_4134_, 1);
v___x_4139_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__3));
v___x_4140_ = l_Lake_JsonObject_getJson_x3f(v_a_4133_, v___x_4139_);
if (lean_obj_tag(v___x_4140_) == 0)
{
goto v___jp_4136_;
}
else
{
lean_object* v_val_4141_; lean_object* v___y_4143_; lean_object* v___x_4145_; 
v_val_4141_ = lean_ctor_get(v___x_4140_, 0);
lean_inc(v_val_4141_);
lean_dec_ref_known(v___x_4140_, 1);
v___x_4145_ = l_Lean_Option_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_uploadS3_spec__0(v_val_4141_);
if (lean_obj_tag(v___x_4145_) == 0)
{
lean_object* v_a_4146_; lean_object* v___x_4148_; uint8_t v_isShared_4149_; uint8_t v_isSharedCheck_4155_; 
v_a_4146_ = lean_ctor_get(v___x_4145_, 0);
v_isSharedCheck_4155_ = !lean_is_exclusive(v___x_4145_);
if (v_isSharedCheck_4155_ == 0)
{
v___x_4148_ = v___x_4145_;
v_isShared_4149_ = v_isSharedCheck_4155_;
goto v_resetjp_4147_;
}
else
{
lean_inc(v_a_4146_);
lean_dec(v___x_4145_);
v___x_4148_ = lean_box(0);
v_isShared_4149_ = v_isSharedCheck_4155_;
goto v_resetjp_4147_;
}
v_resetjp_4147_:
{
lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4153_; 
v___x_4150_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__4));
v___x_4151_ = lean_string_append(v___x_4150_, v_a_4146_);
lean_dec(v_a_4146_);
if (v_isShared_4149_ == 0)
{
lean_ctor_set(v___x_4148_, 0, v___x_4151_);
v___x_4153_ = v___x_4148_;
goto v_reusejp_4152_;
}
else
{
lean_object* v_reuseFailAlloc_4154_; 
v_reuseFailAlloc_4154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4154_, 0, v___x_4151_);
v___x_4153_ = v_reuseFailAlloc_4154_;
goto v_reusejp_4152_;
}
v_reusejp_4152_:
{
v___y_4143_ = v___x_4153_;
goto v___jp_4142_;
}
}
}
else
{
if (lean_obj_tag(v___x_4145_) == 1)
{
lean_object* v_a_4156_; 
v_a_4156_ = lean_ctor_get(v___x_4145_, 0);
lean_inc(v_a_4156_);
if (lean_obj_tag(v_a_4156_) == 0)
{
lean_dec_ref_known(v___x_4145_, 1);
goto v___jp_4136_;
}
else
{
lean_object* v_val_4157_; uint8_t v___x_4158_; 
v_val_4157_ = lean_ctor_get(v_a_4156_, 0);
lean_inc(v_val_4157_);
lean_dec_ref_known(v_a_4156_, 1);
v___x_4158_ = lean_nat_dec_eq(v_val_4157_, v___x_4081_);
lean_dec(v_val_4157_);
if (v___x_4158_ == 0)
{
lean_object* v___x_4159_; 
lean_inc_ref(v_cfg_4057_);
v___x_4159_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4057_, v_hOut_4059_, v_val_4135_, v_a_4133_, v_a_4077_, v___x_4089_, v___x_4145_, v_s_4060_, v___y_4061_);
lean_dec_ref_known(v___x_4145_, 1);
lean_dec(v_a_4133_);
v___y_4064_ = v___x_4159_;
goto v___jp_4063_;
}
else
{
lean_object* v___x_4160_; lean_object* v___x_4161_; 
lean_dec_ref_known(v___x_4145_, 1);
v___x_4160_ = lean_box(0);
lean_inc_ref(v_cfg_4057_);
v___x_4161_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_4057_, v_hOut_4059_, v_val_4135_, v_a_4133_, v_a_4077_, v___x_4089_, v___x_4160_, v_s_4060_, v___y_4061_);
lean_dec(v_a_4133_);
v___y_4064_ = v___x_4161_;
goto v___jp_4063_;
}
}
}
else
{
v___y_4143_ = v___x_4145_;
goto v___jp_4142_;
}
}
v___jp_4142_:
{
lean_object* v___x_4144_; 
lean_inc_ref(v_cfg_4057_);
v___x_4144_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__1(v_cfg_4057_, v_hOut_4059_, v_val_4135_, v_a_4133_, v_a_4077_, v___x_4089_, v___y_4143_, v_s_4060_, v___y_4061_);
lean_dec_ref(v___y_4143_);
lean_dec(v_a_4133_);
v___y_4064_ = v___x_4144_;
goto v___jp_4063_;
}
}
v___jp_4136_:
{
lean_object* v___x_4137_; lean_object* v___x_4138_; 
v___x_4137_ = lean_box(0);
lean_inc_ref(v_cfg_4057_);
v___x_4138_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___lam__0(v_cfg_4057_, v_hOut_4059_, v_val_4135_, v_a_4133_, v_a_4077_, v___x_4089_, v___x_4137_, v_s_4060_, v___y_4061_);
lean_dec(v_a_4133_);
v___y_4064_ = v___x_4138_;
goto v___jp_4063_;
}
}
else
{
lean_object* v_scope_4162_; lean_object* v_s_4163_; 
lean_dec(v___x_4134_);
lean_dec(v_a_4133_);
lean_dec(v_a_4077_);
v_scope_4162_ = lean_ctor_get(v_cfg_4057_, 0);
v_s_4163_ = lean_ctor_get(v_scope_4162_, 0);
lean_inc_ref(v_s_4163_);
v___y_4091_ = v_s_4163_;
goto v___jp_4090_;
}
}
}
v___jp_4090_:
{
lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; uint8_t v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v_numSuccesses_4099_; lean_object* v___x_4101_; uint8_t v_isShared_4102_; uint8_t v_isSharedCheck_4107_; 
v___x_4092_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__0));
v___x_4093_ = lean_string_append(v___y_4091_, v___x_4092_);
v___x_4094_ = l_String_Slice_toString(v___x_4084_);
lean_dec_ref(v___x_4084_);
v___x_4095_ = lean_string_append(v___x_4093_, v___x_4094_);
lean_dec_ref(v___x_4094_);
v___x_4096_ = 3;
v___x_4097_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4097_, 0, v___x_4095_);
lean_ctor_set_uint8(v___x_4097_, sizeof(void*)*1, v___x_4096_);
lean_inc_ref(v___y_4061_);
v___x_4098_ = lean_apply_2(v___y_4061_, v___x_4097_, lean_box(0));
v_numSuccesses_4099_ = lean_ctor_get(v_s_4060_, 0);
v_isSharedCheck_4107_ = !lean_is_exclusive(v_s_4060_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4101_ = v_s_4060_;
v_isShared_4102_ = v_isSharedCheck_4107_;
goto v_resetjp_4100_;
}
else
{
lean_inc(v_numSuccesses_4099_);
lean_dec(v_s_4060_);
v___x_4101_ = lean_box(0);
v_isShared_4102_ = v_isSharedCheck_4107_;
goto v_resetjp_4100_;
}
v_resetjp_4100_:
{
lean_object* v___x_4104_; 
if (v_isShared_4102_ == 0)
{
v___x_4104_ = v___x_4101_;
goto v_reusejp_4103_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_numSuccesses_4099_);
v___x_4104_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4103_;
}
v_reusejp_4103_:
{
lean_ctor_set_uint8(v___x_4104_, sizeof(void*)*1, v___x_4089_);
v_s_4060_ = v___x_4104_;
goto _start;
}
}
}
v___jp_4108_:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; uint8_t v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v_numSuccesses_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4127_; 
v___x_4110_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__1));
v___x_4111_ = lean_string_append(v___x_4110_, v_a_4109_);
lean_dec_ref(v_a_4109_);
v___x_4112_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__2));
v___x_4113_ = lean_string_append(v___x_4111_, v___x_4112_);
v___x_4114_ = l_String_Slice_toString(v___x_4084_);
lean_dec_ref(v___x_4084_);
v___x_4115_ = lean_string_append(v___x_4113_, v___x_4114_);
lean_dec_ref(v___x_4114_);
v___x_4116_ = 3;
v___x_4117_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4117_, 0, v___x_4115_);
lean_ctor_set_uint8(v___x_4117_, sizeof(void*)*1, v___x_4116_);
lean_inc_ref(v___y_4061_);
v___x_4118_ = lean_apply_2(v___y_4061_, v___x_4117_, lean_box(0));
v_numSuccesses_4119_ = lean_ctor_get(v_s_4060_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v_s_4060_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4121_ = v_s_4060_;
v_isShared_4122_ = v_isSharedCheck_4127_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_numSuccesses_4119_);
lean_dec(v_s_4060_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4127_;
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
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_numSuccesses_4119_);
v___x_4124_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
lean_ctor_set_uint8(v___x_4124_, sizeof(void*)*1, v___x_4089_);
v_s_4060_ = v___x_4124_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_4165_; 
lean_dec_ref(v___x_4084_);
lean_dec(v_a_4077_);
lean_dec_ref(v_cfg_4057_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 0, v_s_4060_);
v___x_4165_ = v___x_4079_;
goto v_reusejp_4164_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_s_4060_);
v___x_4165_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4164_;
}
v_reusejp_4164_:
{
return v___x_4165_;
}
}
}
}
else
{
lean_object* v_a_4168_; lean_object* v___x_4170_; uint8_t v_isShared_4171_; uint8_t v_isSharedCheck_4180_; 
lean_dec_ref(v_s_4060_);
lean_dec_ref(v_cfg_4057_);
v_a_4168_ = lean_ctor_get(v___x_4076_, 0);
v_isSharedCheck_4180_ = !lean_is_exclusive(v___x_4076_);
if (v_isSharedCheck_4180_ == 0)
{
v___x_4170_ = v___x_4076_;
v_isShared_4171_ = v_isSharedCheck_4180_;
goto v_resetjp_4169_;
}
else
{
lean_inc(v_a_4168_);
lean_dec(v___x_4076_);
v___x_4170_ = lean_box(0);
v_isShared_4171_ = v_isSharedCheck_4180_;
goto v_resetjp_4169_;
}
v_resetjp_4169_:
{
lean_object* v___x_4172_; uint8_t v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4178_; 
v___x_4172_ = lean_io_error_to_string(v_a_4168_);
v___x_4173_ = 3;
v___x_4174_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4174_, 0, v___x_4172_);
lean_ctor_set_uint8(v___x_4174_, sizeof(void*)*1, v___x_4173_);
lean_inc_ref(v___y_4061_);
v___x_4175_ = lean_apply_2(v___y_4061_, v___x_4174_, lean_box(0));
v___x_4176_ = lean_box(0);
if (v_isShared_4171_ == 0)
{
lean_ctor_set(v___x_4170_, 0, v___x_4176_);
v___x_4178_ = v___x_4170_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v___x_4176_);
v___x_4178_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
return v___x_4178_;
}
}
}
v___jp_4063_:
{
if (lean_obj_tag(v___y_4064_) == 0)
{
lean_object* v_a_4065_; lean_object* v_snd_4066_; 
v_a_4065_ = lean_ctor_get(v___y_4064_, 0);
lean_inc(v_a_4065_);
lean_dec_ref_known(v___y_4064_, 1);
v_snd_4066_ = lean_ctor_get(v_a_4065_, 1);
lean_inc(v_snd_4066_);
lean_dec(v_a_4065_);
v_s_4060_ = v_snd_4066_;
goto _start;
}
else
{
lean_object* v_a_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4075_; 
lean_dec_ref(v_cfg_4057_);
v_a_4068_ = lean_ctor_get(v___y_4064_, 0);
v_isSharedCheck_4075_ = !lean_is_exclusive(v___y_4064_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_4070_ = v___y_4064_;
v_isShared_4071_ = v_isSharedCheck_4075_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_a_4068_);
lean_dec(v___y_4064_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4075_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4073_; 
if (v_isShared_4071_ == 0)
{
v___x_4073_ = v___x_4070_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v_a_4068_);
v___x_4073_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
return v___x_4073_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___boxed(lean_object* v_cfg_4181_, lean_object* v_h_4182_, lean_object* v_hOut_4183_, lean_object* v_s_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_){
_start:
{
lean_object* v_res_4187_; 
v_res_4187_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_4181_, v_h_4182_, v_hOut_4183_, v_s_4184_, v___y_4185_);
lean_dec_ref(v___y_4185_);
lean_dec(v_hOut_4183_);
lean_dec(v_h_4182_);
return v_res_4187_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(lean_object* v_snd_4188_, lean_object* v___y_4189_, lean_object* v_a_x3f_4190_){
_start:
{
lean_object* v___x_4192_; 
v___x_4192_ = lean_io_remove_file(v_snd_4188_);
if (lean_obj_tag(v___x_4192_) == 0)
{
lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4200_; 
v_a_4193_ = lean_ctor_get(v___x_4192_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4192_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4195_ = v___x_4192_;
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v___x_4192_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v___x_4198_; 
if (v_isShared_4196_ == 0)
{
v___x_4198_ = v___x_4195_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_a_4193_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
}
else
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4213_; 
v_a_4201_ = lean_ctor_get(v___x_4192_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v___x_4192_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4203_ = v___x_4192_;
v_isShared_4204_ = v_isSharedCheck_4213_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_4192_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4213_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4205_; uint8_t v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4211_; 
v___x_4205_ = lean_io_error_to_string(v_a_4201_);
v___x_4206_ = 3;
v___x_4207_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4207_, 0, v___x_4205_);
lean_ctor_set_uint8(v___x_4207_, sizeof(void*)*1, v___x_4206_);
lean_inc_ref(v___y_4189_);
v___x_4208_ = lean_apply_2(v___y_4189_, v___x_4207_, lean_box(0));
v___x_4209_ = lean_box(0);
if (v_isShared_4204_ == 0)
{
lean_ctor_set(v___x_4203_, 0, v___x_4209_);
v___x_4211_ = v___x_4203_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v___x_4209_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
return v___x_4211_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0___boxed(lean_object* v_snd_4214_, lean_object* v___y_4215_, lean_object* v_a_x3f_4216_, lean_object* v___y_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4214_, v___y_4215_, v_a_x3f_4216_);
lean_dec(v_a_x3f_4216_);
lean_dec_ref(v___y_4215_);
lean_dec_ref(v_snd_4214_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(lean_object* v_f_4219_, lean_object* v___y_4220_){
_start:
{
lean_object* v___x_4222_; 
v___x_4222_ = lean_io_create_tempfile();
if (lean_obj_tag(v___x_4222_) == 0)
{
lean_object* v_a_4223_; lean_object* v_fst_4224_; lean_object* v_snd_4225_; lean_object* v___x_4226_; 
v_a_4223_ = lean_ctor_get(v___x_4222_, 0);
lean_inc(v_a_4223_);
lean_dec_ref_known(v___x_4222_, 1);
v_fst_4224_ = lean_ctor_get(v_a_4223_, 0);
lean_inc(v_fst_4224_);
v_snd_4225_ = lean_ctor_get(v_a_4223_, 1);
lean_inc_n(v_snd_4225_, 2);
lean_dec(v_a_4223_);
lean_inc_ref(v___y_4220_);
v___x_4226_ = lean_apply_4(v_f_4219_, v_fst_4224_, v_snd_4225_, v___y_4220_, lean_box(0));
if (lean_obj_tag(v___x_4226_) == 0)
{
lean_object* v_a_4227_; lean_object* v___x_4229_; uint8_t v_isShared_4230_; uint8_t v_isSharedCheck_4251_; 
v_a_4227_ = lean_ctor_get(v___x_4226_, 0);
v_isSharedCheck_4251_ = !lean_is_exclusive(v___x_4226_);
if (v_isSharedCheck_4251_ == 0)
{
v___x_4229_ = v___x_4226_;
v_isShared_4230_ = v_isSharedCheck_4251_;
goto v_resetjp_4228_;
}
else
{
lean_inc(v_a_4227_);
lean_dec(v___x_4226_);
v___x_4229_ = lean_box(0);
v_isShared_4230_ = v_isSharedCheck_4251_;
goto v_resetjp_4228_;
}
v_resetjp_4228_:
{
lean_object* v___x_4232_; 
lean_inc(v_a_4227_);
if (v_isShared_4230_ == 0)
{
lean_ctor_set_tag(v___x_4229_, 1);
v___x_4232_ = v___x_4229_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4250_; 
v_reuseFailAlloc_4250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4250_, 0, v_a_4227_);
v___x_4232_ = v_reuseFailAlloc_4250_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
lean_object* v___x_4233_; 
v___x_4233_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4225_, v___y_4220_, v___x_4232_);
lean_dec_ref(v___x_4232_);
lean_dec(v_snd_4225_);
if (lean_obj_tag(v___x_4233_) == 0)
{
lean_object* v___x_4235_; uint8_t v_isShared_4236_; uint8_t v_isSharedCheck_4240_; 
v_isSharedCheck_4240_ = !lean_is_exclusive(v___x_4233_);
if (v_isSharedCheck_4240_ == 0)
{
lean_object* v_unused_4241_; 
v_unused_4241_ = lean_ctor_get(v___x_4233_, 0);
lean_dec(v_unused_4241_);
v___x_4235_ = v___x_4233_;
v_isShared_4236_ = v_isSharedCheck_4240_;
goto v_resetjp_4234_;
}
else
{
lean_dec(v___x_4233_);
v___x_4235_ = lean_box(0);
v_isShared_4236_ = v_isSharedCheck_4240_;
goto v_resetjp_4234_;
}
v_resetjp_4234_:
{
lean_object* v___x_4238_; 
if (v_isShared_4236_ == 0)
{
lean_ctor_set(v___x_4235_, 0, v_a_4227_);
v___x_4238_ = v___x_4235_;
goto v_reusejp_4237_;
}
else
{
lean_object* v_reuseFailAlloc_4239_; 
v_reuseFailAlloc_4239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4239_, 0, v_a_4227_);
v___x_4238_ = v_reuseFailAlloc_4239_;
goto v_reusejp_4237_;
}
v_reusejp_4237_:
{
return v___x_4238_;
}
}
}
else
{
lean_object* v_a_4242_; lean_object* v___x_4244_; uint8_t v_isShared_4245_; uint8_t v_isSharedCheck_4249_; 
lean_dec(v_a_4227_);
v_a_4242_ = lean_ctor_get(v___x_4233_, 0);
v_isSharedCheck_4249_ = !lean_is_exclusive(v___x_4233_);
if (v_isSharedCheck_4249_ == 0)
{
v___x_4244_ = v___x_4233_;
v_isShared_4245_ = v_isSharedCheck_4249_;
goto v_resetjp_4243_;
}
else
{
lean_inc(v_a_4242_);
lean_dec(v___x_4233_);
v___x_4244_ = lean_box(0);
v_isShared_4245_ = v_isSharedCheck_4249_;
goto v_resetjp_4243_;
}
v_resetjp_4243_:
{
lean_object* v___x_4247_; 
if (v_isShared_4245_ == 0)
{
v___x_4247_ = v___x_4244_;
goto v_reusejp_4246_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v_a_4242_);
v___x_4247_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4246_;
}
v_reusejp_4246_:
{
return v___x_4247_;
}
}
}
}
}
}
else
{
lean_object* v_a_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; 
v_a_4252_ = lean_ctor_get(v___x_4226_, 0);
lean_inc(v_a_4252_);
lean_dec_ref_known(v___x_4226_, 1);
v___x_4253_ = lean_box(0);
v___x_4254_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___lam__0(v_snd_4225_, v___y_4220_, v___x_4253_);
lean_dec(v_snd_4225_);
if (lean_obj_tag(v___x_4254_) == 0)
{
lean_object* v___x_4256_; uint8_t v_isShared_4257_; uint8_t v_isSharedCheck_4261_; 
v_isSharedCheck_4261_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4261_ == 0)
{
lean_object* v_unused_4262_; 
v_unused_4262_ = lean_ctor_get(v___x_4254_, 0);
lean_dec(v_unused_4262_);
v___x_4256_ = v___x_4254_;
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
else
{
lean_dec(v___x_4254_);
v___x_4256_ = lean_box(0);
v_isShared_4257_ = v_isSharedCheck_4261_;
goto v_resetjp_4255_;
}
v_resetjp_4255_:
{
lean_object* v___x_4259_; 
if (v_isShared_4257_ == 0)
{
lean_ctor_set_tag(v___x_4256_, 1);
lean_ctor_set(v___x_4256_, 0, v_a_4252_);
v___x_4259_ = v___x_4256_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_a_4252_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
}
else
{
lean_object* v_a_4263_; lean_object* v___x_4265_; uint8_t v_isShared_4266_; uint8_t v_isSharedCheck_4270_; 
lean_dec(v_a_4252_);
v_a_4263_ = lean_ctor_get(v___x_4254_, 0);
v_isSharedCheck_4270_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4270_ == 0)
{
v___x_4265_ = v___x_4254_;
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
else
{
lean_inc(v_a_4263_);
lean_dec(v___x_4254_);
v___x_4265_ = lean_box(0);
v_isShared_4266_ = v_isSharedCheck_4270_;
goto v_resetjp_4264_;
}
v_resetjp_4264_:
{
lean_object* v___x_4268_; 
if (v_isShared_4266_ == 0)
{
v___x_4268_ = v___x_4265_;
goto v_reusejp_4267_;
}
else
{
lean_object* v_reuseFailAlloc_4269_; 
v_reuseFailAlloc_4269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4269_, 0, v_a_4263_);
v___x_4268_ = v_reuseFailAlloc_4269_;
goto v_reusejp_4267_;
}
v_reusejp_4267_:
{
return v___x_4268_;
}
}
}
}
}
else
{
lean_object* v_a_4271_; lean_object* v___x_4273_; uint8_t v_isShared_4274_; uint8_t v_isSharedCheck_4283_; 
lean_dec_ref(v_f_4219_);
v_a_4271_ = lean_ctor_get(v___x_4222_, 0);
v_isSharedCheck_4283_ = !lean_is_exclusive(v___x_4222_);
if (v_isSharedCheck_4283_ == 0)
{
v___x_4273_ = v___x_4222_;
v_isShared_4274_ = v_isSharedCheck_4283_;
goto v_resetjp_4272_;
}
else
{
lean_inc(v_a_4271_);
lean_dec(v___x_4222_);
v___x_4273_ = lean_box(0);
v_isShared_4274_ = v_isSharedCheck_4283_;
goto v_resetjp_4272_;
}
v_resetjp_4272_:
{
lean_object* v___x_4275_; uint8_t v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4281_; 
v___x_4275_ = lean_io_error_to_string(v_a_4271_);
v___x_4276_ = 3;
v___x_4277_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4277_, 0, v___x_4275_);
lean_ctor_set_uint8(v___x_4277_, sizeof(void*)*1, v___x_4276_);
lean_inc_ref(v___y_4220_);
v___x_4278_ = lean_apply_2(v___y_4220_, v___x_4277_, lean_box(0));
v___x_4279_ = lean_box(0);
if (v_isShared_4274_ == 0)
{
lean_ctor_set(v___x_4273_, 0, v___x_4279_);
v___x_4281_ = v___x_4273_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4282_; 
v_reuseFailAlloc_4282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4282_, 0, v___x_4279_);
v___x_4281_ = v_reuseFailAlloc_4282_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
return v___x_4281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg___boxed(lean_object* v_f_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_){
_start:
{
lean_object* v_res_4287_; 
v_res_4287_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v_f_4284_, v___y_4285_);
lean_dec_ref(v___y_4285_);
return v_res_4287_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2(lean_object* v_00_u03b1_4288_, lean_object* v_f_4289_, lean_object* v___y_4290_){
_start:
{
lean_object* v___x_4292_; 
v___x_4292_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v_f_4289_, v___y_4290_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___boxed(lean_object* v_00_u03b1_4293_, lean_object* v_f_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2(v_00_u03b1_4293_, v_f_4294_, v___y_4295_);
lean_dec_ref(v___y_4295_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(lean_object* v_h_4300_, lean_object* v_as_4301_, size_t v_i_4302_, size_t v_stop_4303_, lean_object* v_b_4304_, lean_object* v___y_4305_){
_start:
{
uint8_t v___x_4307_; 
v___x_4307_ = lean_usize_dec_eq(v_i_4302_, v_stop_4303_);
if (v___x_4307_ == 0)
{
lean_object* v___x_4308_; lean_object* v_url_4309_; lean_object* v_path_4310_; lean_object* v___x_4311_; lean_object* v_tmpPath_4312_; lean_object* v___x_4313_; 
v___x_4308_ = lean_array_uget_borrowed(v_as_4301_, v_i_4302_);
v_url_4309_ = lean_ctor_get(v___x_4308_, 0);
v_path_4310_ = lean_ctor_get(v___x_4308_, 1);
v___x_4311_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_tmpPath___closed__0));
lean_inc_ref(v_path_4310_);
v_tmpPath_4312_ = l_System_FilePath_addExtension(v_path_4310_, v___x_4311_);
v___x_4313_ = l_Lake_removeFileIfExists(v_tmpPath_4312_);
if (lean_obj_tag(v___x_4313_) == 0)
{
lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; 
lean_dec_ref_known(v___x_4313_, 1);
v___x_4314_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0));
lean_inc_ref(v_url_4309_);
v___x_4315_ = l_String_quote(v_url_4309_);
v___x_4316_ = lean_string_append(v___x_4314_, v___x_4315_);
lean_dec_ref(v___x_4315_);
v___x_4317_ = l_IO_FS_Handle_putStrLn(v_h_4300_, v___x_4316_);
if (lean_obj_tag(v___x_4317_) == 0)
{
lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; 
lean_dec_ref_known(v___x_4317_, 1);
v___x_4318_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__1));
v___x_4319_ = l_String_quote(v_tmpPath_4312_);
v___x_4320_ = lean_string_append(v___x_4318_, v___x_4319_);
lean_dec_ref(v___x_4319_);
v___x_4321_ = l_IO_FS_Handle_putStrLn(v_h_4300_, v___x_4320_);
if (lean_obj_tag(v___x_4321_) == 0)
{
lean_object* v_a_4322_; size_t v___x_4323_; size_t v___x_4324_; 
v_a_4322_ = lean_ctor_get(v___x_4321_, 0);
lean_inc(v_a_4322_);
lean_dec_ref_known(v___x_4321_, 1);
v___x_4323_ = ((size_t)1ULL);
v___x_4324_ = lean_usize_add(v_i_4302_, v___x_4323_);
v_i_4302_ = v___x_4324_;
v_b_4304_ = v_a_4322_;
goto _start;
}
else
{
lean_object* v_a_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4338_; 
v_a_4326_ = lean_ctor_get(v___x_4321_, 0);
v_isSharedCheck_4338_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4338_ == 0)
{
v___x_4328_ = v___x_4321_;
v_isShared_4329_ = v_isSharedCheck_4338_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_a_4326_);
lean_dec(v___x_4321_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4338_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v___x_4330_; uint8_t v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4336_; 
v___x_4330_ = lean_io_error_to_string(v_a_4326_);
v___x_4331_ = 3;
v___x_4332_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4332_, 0, v___x_4330_);
lean_ctor_set_uint8(v___x_4332_, sizeof(void*)*1, v___x_4331_);
lean_inc_ref(v___y_4305_);
v___x_4333_ = lean_apply_2(v___y_4305_, v___x_4332_, lean_box(0));
v___x_4334_ = lean_box(0);
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 0, v___x_4334_);
v___x_4336_ = v___x_4328_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v___x_4334_);
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
else
{
lean_object* v_a_4339_; lean_object* v___x_4341_; uint8_t v_isShared_4342_; uint8_t v_isSharedCheck_4351_; 
lean_dec_ref(v_tmpPath_4312_);
v_a_4339_ = lean_ctor_get(v___x_4317_, 0);
v_isSharedCheck_4351_ = !lean_is_exclusive(v___x_4317_);
if (v_isSharedCheck_4351_ == 0)
{
v___x_4341_ = v___x_4317_;
v_isShared_4342_ = v_isSharedCheck_4351_;
goto v_resetjp_4340_;
}
else
{
lean_inc(v_a_4339_);
lean_dec(v___x_4317_);
v___x_4341_ = lean_box(0);
v_isShared_4342_ = v_isSharedCheck_4351_;
goto v_resetjp_4340_;
}
v_resetjp_4340_:
{
lean_object* v___x_4343_; uint8_t v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4349_; 
v___x_4343_ = lean_io_error_to_string(v_a_4339_);
v___x_4344_ = 3;
v___x_4345_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4345_, 0, v___x_4343_);
lean_ctor_set_uint8(v___x_4345_, sizeof(void*)*1, v___x_4344_);
lean_inc_ref(v___y_4305_);
v___x_4346_ = lean_apply_2(v___y_4305_, v___x_4345_, lean_box(0));
v___x_4347_ = lean_box(0);
if (v_isShared_4342_ == 0)
{
lean_ctor_set(v___x_4341_, 0, v___x_4347_);
v___x_4349_ = v___x_4341_;
goto v_reusejp_4348_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v___x_4347_);
v___x_4349_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4348_;
}
v_reusejp_4348_:
{
return v___x_4349_;
}
}
}
}
else
{
lean_object* v_a_4352_; lean_object* v___x_4354_; uint8_t v_isShared_4355_; uint8_t v_isSharedCheck_4364_; 
lean_dec_ref(v_tmpPath_4312_);
v_a_4352_ = lean_ctor_get(v___x_4313_, 0);
v_isSharedCheck_4364_ = !lean_is_exclusive(v___x_4313_);
if (v_isSharedCheck_4364_ == 0)
{
v___x_4354_ = v___x_4313_;
v_isShared_4355_ = v_isSharedCheck_4364_;
goto v_resetjp_4353_;
}
else
{
lean_inc(v_a_4352_);
lean_dec(v___x_4313_);
v___x_4354_ = lean_box(0);
v_isShared_4355_ = v_isSharedCheck_4364_;
goto v_resetjp_4353_;
}
v_resetjp_4353_:
{
lean_object* v___x_4356_; uint8_t v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4362_; 
v___x_4356_ = lean_io_error_to_string(v_a_4352_);
v___x_4357_ = 3;
v___x_4358_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4358_, 0, v___x_4356_);
lean_ctor_set_uint8(v___x_4358_, sizeof(void*)*1, v___x_4357_);
lean_inc_ref(v___y_4305_);
v___x_4359_ = lean_apply_2(v___y_4305_, v___x_4358_, lean_box(0));
v___x_4360_ = lean_box(0);
if (v_isShared_4355_ == 0)
{
lean_ctor_set(v___x_4354_, 0, v___x_4360_);
v___x_4362_ = v___x_4354_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4363_; 
v_reuseFailAlloc_4363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4363_, 0, v___x_4360_);
v___x_4362_ = v_reuseFailAlloc_4363_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
return v___x_4362_;
}
}
}
}
else
{
lean_object* v___x_4365_; 
v___x_4365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4365_, 0, v_b_4304_);
return v___x_4365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___boxed(lean_object* v_h_4366_, lean_object* v_as_4367_, lean_object* v_i_4368_, lean_object* v_stop_4369_, lean_object* v_b_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_){
_start:
{
size_t v_i_boxed_4373_; size_t v_stop_boxed_4374_; lean_object* v_res_4375_; 
v_i_boxed_4373_ = lean_unbox_usize(v_i_4368_);
lean_dec(v_i_4368_);
v_stop_boxed_4374_ = lean_unbox_usize(v_stop_4369_);
lean_dec(v_stop_4369_);
v_res_4375_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4366_, v_as_4367_, v_i_boxed_4373_, v_stop_boxed_4374_, v_b_4370_, v___y_4371_);
lean_dec_ref(v___y_4371_);
lean_dec_ref(v_as_4367_);
lean_dec(v_h_4366_);
return v_res_4375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(lean_object* v_h_4377_, lean_object* v_as_4378_, size_t v_i_4379_, size_t v_stop_4380_, lean_object* v_b_4381_, lean_object* v___y_4382_){
_start:
{
uint8_t v___x_4384_; 
v___x_4384_ = lean_usize_dec_eq(v_i_4379_, v_stop_4380_);
if (v___x_4384_ == 0)
{
lean_object* v___x_4385_; lean_object* v_url_4386_; lean_object* v_path_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; 
v___x_4385_ = lean_array_uget_borrowed(v_as_4378_, v_i_4379_);
v_url_4386_ = lean_ctor_get(v___x_4385_, 0);
v_path_4387_ = lean_ctor_get(v___x_4385_, 1);
v___x_4388_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___closed__0));
lean_inc_ref(v_path_4387_);
v___x_4389_ = l_String_quote(v_path_4387_);
v___x_4390_ = lean_string_append(v___x_4388_, v___x_4389_);
lean_dec_ref(v___x_4389_);
v___x_4391_ = l_IO_FS_Handle_putStrLn(v_h_4377_, v___x_4390_);
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; 
lean_dec_ref_known(v___x_4391_, 1);
v___x_4392_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0___closed__0));
lean_inc_ref(v_url_4386_);
v___x_4393_ = l_String_quote(v_url_4386_);
v___x_4394_ = lean_string_append(v___x_4392_, v___x_4393_);
lean_dec_ref(v___x_4393_);
v___x_4395_ = l_IO_FS_Handle_putStrLn(v_h_4377_, v___x_4394_);
if (lean_obj_tag(v___x_4395_) == 0)
{
lean_object* v_a_4396_; size_t v___x_4397_; size_t v___x_4398_; 
v_a_4396_ = lean_ctor_get(v___x_4395_, 0);
lean_inc(v_a_4396_);
lean_dec_ref_known(v___x_4395_, 1);
v___x_4397_ = ((size_t)1ULL);
v___x_4398_ = lean_usize_add(v_i_4379_, v___x_4397_);
v_i_4379_ = v___x_4398_;
v_b_4381_ = v_a_4396_;
goto _start;
}
else
{
lean_object* v_a_4400_; lean_object* v___x_4402_; uint8_t v_isShared_4403_; uint8_t v_isSharedCheck_4412_; 
v_a_4400_ = lean_ctor_get(v___x_4395_, 0);
v_isSharedCheck_4412_ = !lean_is_exclusive(v___x_4395_);
if (v_isSharedCheck_4412_ == 0)
{
v___x_4402_ = v___x_4395_;
v_isShared_4403_ = v_isSharedCheck_4412_;
goto v_resetjp_4401_;
}
else
{
lean_inc(v_a_4400_);
lean_dec(v___x_4395_);
v___x_4402_ = lean_box(0);
v_isShared_4403_ = v_isSharedCheck_4412_;
goto v_resetjp_4401_;
}
v_resetjp_4401_:
{
lean_object* v___x_4404_; uint8_t v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4410_; 
v___x_4404_ = lean_io_error_to_string(v_a_4400_);
v___x_4405_ = 3;
v___x_4406_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4406_, 0, v___x_4404_);
lean_ctor_set_uint8(v___x_4406_, sizeof(void*)*1, v___x_4405_);
lean_inc_ref(v___y_4382_);
v___x_4407_ = lean_apply_2(v___y_4382_, v___x_4406_, lean_box(0));
v___x_4408_ = lean_box(0);
if (v_isShared_4403_ == 0)
{
lean_ctor_set(v___x_4402_, 0, v___x_4408_);
v___x_4410_ = v___x_4402_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4411_; 
v_reuseFailAlloc_4411_ = lean_alloc_ctor(1, 1, 0);
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
lean_object* v_a_4413_; lean_object* v___x_4415_; uint8_t v_isShared_4416_; uint8_t v_isSharedCheck_4425_; 
v_a_4413_ = lean_ctor_get(v___x_4391_, 0);
v_isSharedCheck_4425_ = !lean_is_exclusive(v___x_4391_);
if (v_isSharedCheck_4425_ == 0)
{
v___x_4415_ = v___x_4391_;
v_isShared_4416_ = v_isSharedCheck_4425_;
goto v_resetjp_4414_;
}
else
{
lean_inc(v_a_4413_);
lean_dec(v___x_4391_);
v___x_4415_ = lean_box(0);
v_isShared_4416_ = v_isSharedCheck_4425_;
goto v_resetjp_4414_;
}
v_resetjp_4414_:
{
lean_object* v___x_4417_; uint8_t v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4423_; 
v___x_4417_ = lean_io_error_to_string(v_a_4413_);
v___x_4418_ = 3;
v___x_4419_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4419_, 0, v___x_4417_);
lean_ctor_set_uint8(v___x_4419_, sizeof(void*)*1, v___x_4418_);
lean_inc_ref(v___y_4382_);
v___x_4420_ = lean_apply_2(v___y_4382_, v___x_4419_, lean_box(0));
v___x_4421_ = lean_box(0);
if (v_isShared_4416_ == 0)
{
lean_ctor_set(v___x_4415_, 0, v___x_4421_);
v___x_4423_ = v___x_4415_;
goto v_reusejp_4422_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v___x_4421_);
v___x_4423_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4422_;
}
v_reusejp_4422_:
{
return v___x_4423_;
}
}
}
}
else
{
lean_object* v___x_4426_; 
v___x_4426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4426_, 0, v_b_4381_);
return v___x_4426_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1___boxed(lean_object* v_h_4427_, lean_object* v_as_4428_, lean_object* v_i_4429_, lean_object* v_stop_4430_, lean_object* v_b_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_){
_start:
{
size_t v_i_boxed_4434_; size_t v_stop_boxed_4435_; lean_object* v_res_4436_; 
v_i_boxed_4434_ = lean_unbox_usize(v_i_4429_);
lean_dec(v_i_4429_);
v_stop_boxed_4435_ = lean_unbox_usize(v_stop_4430_);
lean_dec(v_stop_4430_);
v_res_4436_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4427_, v_as_4428_, v_i_boxed_4434_, v_stop_boxed_4435_, v_b_4431_, v___y_4432_);
lean_dec_ref(v___y_4432_);
lean_dec_ref(v_as_4428_);
lean_dec(v_h_4427_);
return v_res_4436_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11(void){
_start:
{
lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; 
v___x_4452_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5));
v___x_4453_ = lean_unsigned_to_nat(11u);
v___x_4454_ = lean_mk_empty_array_with_capacity(v___x_4453_);
v___x_4455_ = lean_array_push(v___x_4454_, v___x_4452_);
return v___x_4455_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12(void){
_start:
{
lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; 
v___x_4456_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_4457_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__11);
v___x_4458_ = lean_array_push(v___x_4457_, v___x_4456_);
return v___x_4458_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13(void){
_start:
{
lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; 
v___x_4459_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__6));
v___x_4460_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__12);
v___x_4461_ = lean_array_push(v___x_4460_, v___x_4459_);
return v___x_4461_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14(void){
_start:
{
lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4462_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_4463_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__13);
v___x_4464_ = lean_array_push(v___x_4463_, v___x_4462_);
return v___x_4464_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15(void){
_start:
{
lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; 
v___x_4465_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_4466_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__14);
v___x_4467_ = lean_array_push(v___x_4466_, v___x_4465_);
return v___x_4467_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16(void){
_start:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; 
v___x_4468_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_4469_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__15);
v___x_4470_ = lean_array_push(v___x_4469_, v___x_4468_);
return v___x_4470_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17(void){
_start:
{
lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
v___x_4471_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_4472_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__16);
v___x_4473_ = lean_array_push(v___x_4472_, v___x_4471_);
return v___x_4473_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18(void){
_start:
{
lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; 
v___x_4474_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_4475_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__17);
v___x_4476_ = lean_array_push(v___x_4475_, v___x_4474_);
return v___x_4476_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19(void){
_start:
{
lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; 
v___x_4477_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_4478_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__18);
v___x_4479_ = lean_array_push(v___x_4478_, v___x_4477_);
return v___x_4479_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20(void){
_start:
{
lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; 
v___x_4480_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10));
v___x_4481_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__19);
v___x_4482_ = lean_array_push(v___x_4481_, v___x_4480_);
return v___x_4482_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22(void){
_start:
{
lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; 
v___x_4484_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__5));
v___x_4485_ = lean_unsigned_to_nat(17u);
v___x_4486_ = lean_mk_empty_array_with_capacity(v___x_4485_);
v___x_4487_ = lean_array_push(v___x_4486_, v___x_4484_);
return v___x_4487_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23(void){
_start:
{
lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; 
v___x_4488_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_4489_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__22);
v___x_4490_ = lean_array_push(v___x_4489_, v___x_4488_);
return v___x_4490_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24(void){
_start:
{
lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; 
v___x_4491_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__17));
v___x_4492_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__23);
v___x_4493_ = lean_array_push(v___x_4492_, v___x_4491_);
return v___x_4493_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25(void){
_start:
{
lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; 
v___x_4494_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_4495_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__24);
v___x_4496_ = lean_array_push(v___x_4495_, v___x_4494_);
return v___x_4496_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26(void){
_start:
{
lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; 
v___x_4497_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_4498_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__25);
v___x_4499_ = lean_array_push(v___x_4498_, v___x_4497_);
return v___x_4499_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27(void){
_start:
{
lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; 
v___x_4500_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__21));
v___x_4501_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__26);
v___x_4502_ = lean_array_push(v___x_4501_, v___x_4500_);
return v___x_4502_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28(void){
_start:
{
lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; 
v___x_4503_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_4504_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__27);
v___x_4505_ = lean_array_push(v___x_4504_, v___x_4503_);
return v___x_4505_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29(void){
_start:
{
lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; 
v___x_4506_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_4507_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__28);
v___x_4508_ = lean_array_push(v___x_4507_, v___x_4506_);
return v___x_4508_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30(void){
_start:
{
lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; 
v___x_4509_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__13));
v___x_4510_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__29);
v___x_4511_ = lean_array_push(v___x_4510_, v___x_4509_);
return v___x_4511_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31(void){
_start:
{
lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; 
v___x_4512_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__14));
v___x_4513_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__30);
v___x_4514_ = lean_array_push(v___x_4513_, v___x_4512_);
return v___x_4514_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32(void){
_start:
{
lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; 
v___x_4515_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__15));
v___x_4516_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__31);
v___x_4517_ = lean_array_push(v___x_4516_, v___x_4515_);
return v___x_4517_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0(lean_object* v_cfg_4518_, lean_object* v_h_4519_, lean_object* v_path_4520_, lean_object* v___y_4521_){
_start:
{
lean_object* v___y_4527_; uint32_t v___y_4528_; lean_object* v___y_4529_; uint8_t v_kind_4538_; lean_object* v_scope_4539_; lean_object* v_infos_4540_; lean_object* v_key_4541_; uint32_t v___y_4543_; uint8_t v___y_4544_; lean_object* v___y_4545_; lean_object* v___y_4552_; uint32_t v___y_4553_; lean_object* v___y_4554_; lean_object* v___y_4555_; uint8_t v___y_4556_; lean_object* v___y_4557_; lean_object* v___y_4558_; lean_object* v___y_4570_; uint32_t v___y_4571_; lean_object* v___y_4572_; uint8_t v_didError_4573_; lean_object* v___y_4574_; lean_object* v___y_4579_; lean_object* v___y_4580_; uint32_t v___y_4581_; uint8_t v___y_4582_; lean_object* v___y_4583_; lean_object* v___y_4584_; lean_object* v___y_4594_; uint8_t v___y_4595_; uint32_t v___y_4596_; lean_object* v___y_4597_; lean_object* v___y_4598_; lean_object* v___y_4601_; lean_object* v_a_4602_; lean_object* v___y_4678_; lean_object* v___y_4679_; lean_object* v___y_4680_; lean_object* v_val_4681_; lean_object* v_a_4689_; lean_object* v___y_4714_; lean_object* v___y_4742_; 
v_kind_4538_ = lean_ctor_get_uint8(v_cfg_4518_, sizeof(void*)*3);
v_scope_4539_ = lean_ctor_get(v_cfg_4518_, 0);
lean_inc_ref(v_scope_4539_);
v_infos_4540_ = lean_ctor_get(v_cfg_4518_, 1);
lean_inc_ref(v_infos_4540_);
v_key_4541_ = lean_ctor_get(v_cfg_4518_, 2);
if (v_kind_4538_ == 0)
{
lean_object* v___x_4743_; lean_object* v___x_4744_; uint8_t v___x_4745_; 
v___x_4743_ = lean_unsigned_to_nat(0u);
v___x_4744_ = lean_array_get_size(v_infos_4540_);
v___x_4745_ = lean_nat_dec_lt(v___x_4743_, v___x_4744_);
if (v___x_4745_ == 0)
{
goto v___jp_4696_;
}
else
{
lean_object* v___x_4746_; uint8_t v___x_4747_; 
v___x_4746_ = lean_box(0);
v___x_4747_ = lean_nat_dec_le(v___x_4744_, v___x_4744_);
if (v___x_4747_ == 0)
{
if (v___x_4745_ == 0)
{
goto v___jp_4696_;
}
else
{
size_t v___x_4748_; size_t v___x_4749_; lean_object* v___x_4750_; 
v___x_4748_ = ((size_t)0ULL);
v___x_4749_ = lean_usize_of_nat(v___x_4744_);
v___x_4750_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4519_, v_infos_4540_, v___x_4748_, v___x_4749_, v___x_4746_, v___y_4521_);
v___y_4714_ = v___x_4750_;
goto v___jp_4713_;
}
}
else
{
size_t v___x_4751_; size_t v___x_4752_; lean_object* v___x_4753_; 
v___x_4751_ = ((size_t)0ULL);
v___x_4752_ = lean_usize_of_nat(v___x_4744_);
v___x_4753_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__0(v_h_4519_, v_infos_4540_, v___x_4751_, v___x_4752_, v___x_4746_, v___y_4521_);
v___y_4714_ = v___x_4753_;
goto v___jp_4713_;
}
}
}
else
{
lean_object* v___x_4754_; lean_object* v___x_4755_; uint8_t v___x_4756_; 
v___x_4754_ = lean_unsigned_to_nat(0u);
v___x_4755_ = lean_array_get_size(v_infos_4540_);
v___x_4756_ = lean_nat_dec_lt(v___x_4754_, v___x_4755_);
if (v___x_4756_ == 0)
{
goto v___jp_4715_;
}
else
{
lean_object* v___x_4757_; uint8_t v___x_4758_; 
v___x_4757_ = lean_box(0);
v___x_4758_ = lean_nat_dec_le(v___x_4755_, v___x_4755_);
if (v___x_4758_ == 0)
{
if (v___x_4756_ == 0)
{
goto v___jp_4715_;
}
else
{
size_t v___x_4759_; size_t v___x_4760_; lean_object* v___x_4761_; 
v___x_4759_ = ((size_t)0ULL);
v___x_4760_ = lean_usize_of_nat(v___x_4755_);
v___x_4761_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4519_, v_infos_4540_, v___x_4759_, v___x_4760_, v___x_4757_, v___y_4521_);
v___y_4742_ = v___x_4761_;
goto v___jp_4741_;
}
}
else
{
size_t v___x_4762_; size_t v___x_4763_; lean_object* v___x_4764_; 
v___x_4762_ = ((size_t)0ULL);
v___x_4763_ = lean_usize_of_nat(v___x_4755_);
v___x_4764_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__1(v_h_4519_, v_infos_4540_, v___x_4762_, v___x_4763_, v___x_4757_, v___y_4521_);
v___y_4742_ = v___x_4764_;
goto v___jp_4741_;
}
}
}
v___jp_4523_:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; 
v___x_4524_ = lean_box(0);
v___x_4525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4524_);
return v___x_4525_;
}
v___jp_4526_:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; uint8_t v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4530_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__0));
v___x_4531_ = lean_string_append(v___y_4529_, v___x_4530_);
v___x_4532_ = lean_uint32_to_nat(v___y_4528_);
v___x_4533_ = l_Nat_reprFast(v___x_4532_);
v___x_4534_ = lean_string_append(v___x_4531_, v___x_4533_);
lean_dec_ref(v___x_4533_);
v___x_4535_ = 3;
v___x_4536_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4536_, 0, v___x_4534_);
lean_ctor_set_uint8(v___x_4536_, sizeof(void*)*1, v___x_4535_);
lean_inc_ref(v___y_4527_);
v___x_4537_ = lean_apply_2(v___y_4527_, v___x_4536_, lean_box(0));
goto v___jp_4523_;
}
v___jp_4542_:
{
uint32_t v___x_4546_; uint8_t v___x_4547_; 
v___x_4546_ = 0;
v___x_4547_ = lean_uint32_dec_eq(v___y_4543_, v___x_4546_);
if (v___x_4547_ == 0)
{
lean_object* v_s_4548_; 
v_s_4548_ = lean_ctor_get(v_scope_4539_, 0);
lean_inc_ref(v_s_4548_);
lean_dec_ref(v_scope_4539_);
v___y_4527_ = v___y_4545_;
v___y_4528_ = v___y_4543_;
v___y_4529_ = v_s_4548_;
goto v___jp_4526_;
}
else
{
lean_dec_ref(v_scope_4539_);
if (v___y_4544_ == 0)
{
lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4549_ = lean_box(0);
v___x_4550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4550_, 0, v___x_4549_);
return v___x_4550_;
}
else
{
goto v___jp_4523_;
}
}
}
v___jp_4551_:
{
lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; uint8_t v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; 
v___x_4559_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__1));
v___x_4560_ = lean_string_append(v___y_4558_, v___x_4559_);
lean_inc(v___y_4555_);
lean_inc(v___y_4552_);
lean_inc_ref(v___y_4554_);
v___x_4561_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4561_, 0, v___y_4554_);
lean_ctor_set(v___x_4561_, 1, v___y_4552_);
lean_ctor_set(v___x_4561_, 2, v___y_4555_);
v___x_4562_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_4561_, v___y_4555_);
lean_dec_ref_known(v___x_4561_, 3);
v___x_4563_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4563_, 0, v___y_4554_);
lean_ctor_set(v___x_4563_, 1, v___y_4552_);
lean_ctor_set(v___x_4563_, 2, v___x_4562_);
v___x_4564_ = l_String_Slice_toString(v___x_4563_);
lean_dec_ref_known(v___x_4563_, 3);
v___x_4565_ = lean_string_append(v___x_4560_, v___x_4564_);
lean_dec_ref(v___x_4564_);
v___x_4566_ = 2;
v___x_4567_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4567_, 0, v___x_4565_);
lean_ctor_set_uint8(v___x_4567_, sizeof(void*)*1, v___x_4566_);
lean_inc_ref(v___y_4557_);
v___x_4568_ = lean_apply_2(v___y_4557_, v___x_4567_, lean_box(0));
v___y_4543_ = v___y_4553_;
v___y_4544_ = v___y_4556_;
v___y_4545_ = v___y_4557_;
goto v___jp_4542_;
}
v___jp_4569_:
{
lean_object* v___x_4575_; uint8_t v___x_4576_; 
v___x_4575_ = lean_string_utf8_byte_size(v___y_4572_);
v___x_4576_ = lean_nat_dec_eq(v___x_4575_, v___y_4570_);
if (v___x_4576_ == 0)
{
lean_object* v_s_4577_; 
v_s_4577_ = lean_ctor_get(v_scope_4539_, 0);
lean_inc_ref(v_s_4577_);
v___y_4552_ = v___y_4570_;
v___y_4553_ = v___y_4571_;
v___y_4554_ = v___y_4572_;
v___y_4555_ = v___x_4575_;
v___y_4556_ = v_didError_4573_;
v___y_4557_ = v___y_4574_;
v___y_4558_ = v_s_4577_;
goto v___jp_4551_;
}
else
{
lean_dec_ref(v___y_4572_);
lean_dec(v___y_4570_);
v___y_4543_ = v___y_4571_;
v___y_4544_ = v_didError_4573_;
v___y_4545_ = v___y_4574_;
goto v___jp_4542_;
}
}
v___jp_4578_:
{
lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; uint8_t v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; 
v___x_4585_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__6));
v___x_4586_ = lean_string_append(v___y_4584_, v___x_4585_);
v___x_4587_ = lean_string_append(v___x_4586_, v___y_4579_);
v___x_4588_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__2));
v___x_4589_ = lean_string_append(v___x_4587_, v___x_4588_);
v___x_4590_ = 3;
v___x_4591_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4591_, 0, v___x_4589_);
lean_ctor_set_uint8(v___x_4591_, sizeof(void*)*1, v___x_4590_);
lean_inc_ref(v___y_4521_);
v___x_4592_ = lean_apply_2(v___y_4521_, v___x_4591_, lean_box(0));
v___y_4570_ = v___y_4580_;
v___y_4571_ = v___y_4581_;
v___y_4572_ = v___y_4583_;
v_didError_4573_ = v___y_4582_;
v___y_4574_ = v___y_4521_;
goto v___jp_4569_;
}
v___jp_4593_:
{
lean_object* v_s_4599_; 
v_s_4599_ = lean_ctor_get(v_scope_4539_, 0);
lean_inc_ref(v_s_4599_);
v___y_4579_ = v___y_4598_;
v___y_4580_ = v___y_4594_;
v___y_4581_ = v___y_4596_;
v___y_4582_ = v___y_4595_;
v___y_4583_ = v___y_4597_;
v___y_4584_ = v_s_4599_;
goto v___jp_4578_;
}
v___jp_4600_:
{
lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; uint8_t v___x_4607_; uint8_t v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; 
v___x_4603_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3));
v___x_4604_ = lean_box(0);
v___x_4605_ = lean_unsigned_to_nat(0u);
v___x_4606_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_4607_ = 1;
v___x_4608_ = 0;
v___x_4609_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_4609_, 0, v___x_4603_);
lean_ctor_set(v___x_4609_, 1, v_a_4602_);
lean_ctor_set(v___x_4609_, 2, v___y_4601_);
lean_ctor_set(v___x_4609_, 3, v___x_4604_);
lean_ctor_set(v___x_4609_, 4, v___x_4606_);
lean_ctor_set_uint8(v___x_4609_, sizeof(void*)*5, v___x_4607_);
lean_ctor_set_uint8(v___x_4609_, sizeof(void*)*5 + 1, v___x_4608_);
v___x_4610_ = lean_io_process_spawn(v___x_4609_);
if (lean_obj_tag(v___x_4610_) == 0)
{
lean_object* v_a_4611_; lean_object* v_stdout_4612_; lean_object* v_stderr_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; 
v_a_4611_ = lean_ctor_get(v___x_4610_, 0);
lean_inc(v_a_4611_);
lean_dec_ref_known(v___x_4610_, 1);
v_stdout_4612_ = lean_ctor_get(v_a_4611_, 1);
lean_inc(v_stdout_4612_);
v_stderr_4613_ = lean_ctor_get(v_a_4611_, 2);
v___x_4614_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__4));
v___x_4615_ = l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer(v_cfg_4518_, v_stderr_4613_, v_stdout_4612_, v___x_4614_, v___y_4521_);
if (lean_obj_tag(v___x_4615_) == 0)
{
lean_object* v_a_4616_; lean_object* v___x_4617_; 
v_a_4616_ = lean_ctor_get(v___x_4615_, 0);
lean_inc(v_a_4616_);
lean_dec_ref_known(v___x_4615_, 1);
v___x_4617_ = lean_io_process_child_wait(v___x_4603_, v_a_4611_);
lean_dec(v_a_4611_);
if (lean_obj_tag(v___x_4617_) == 0)
{
lean_object* v_a_4618_; lean_object* v___x_4619_; 
v_a_4618_ = lean_ctor_get(v___x_4617_, 0);
lean_inc(v_a_4618_);
lean_dec_ref_known(v___x_4617_, 1);
v___x_4619_ = l_IO_FS_Handle_readToEnd(v_stdout_4612_);
lean_dec(v_stdout_4612_);
if (lean_obj_tag(v___x_4619_) == 0)
{
lean_object* v_a_4620_; uint8_t v_didError_4621_; lean_object* v_numSuccesses_4622_; lean_object* v___x_4623_; uint8_t v___x_4624_; 
v_a_4620_ = lean_ctor_get(v___x_4619_, 0);
lean_inc(v_a_4620_);
lean_dec_ref_known(v___x_4619_, 1);
v_didError_4621_ = lean_ctor_get_uint8(v_a_4616_, sizeof(void*)*1);
v_numSuccesses_4622_ = lean_ctor_get(v_a_4616_, 0);
lean_inc(v_numSuccesses_4622_);
lean_dec(v_a_4616_);
v___x_4623_ = lean_array_get_size(v_infos_4540_);
lean_dec_ref(v_infos_4540_);
v___x_4624_ = lean_nat_dec_lt(v_numSuccesses_4622_, v___x_4623_);
lean_dec(v_numSuccesses_4622_);
if (v___x_4624_ == 0)
{
uint32_t v___x_4625_; 
v___x_4625_ = lean_unbox_uint32(v_a_4618_);
lean_dec(v_a_4618_);
v___y_4570_ = v___x_4605_;
v___y_4571_ = v___x_4625_;
v___y_4572_ = v_a_4620_;
v_didError_4573_ = v_didError_4621_;
v___y_4574_ = v___y_4521_;
goto v___jp_4569_;
}
else
{
if (v_kind_4538_ == 0)
{
lean_object* v___x_4626_; uint32_t v___x_4627_; 
v___x_4626_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__10));
v___x_4627_ = lean_unbox_uint32(v_a_4618_);
lean_dec(v_a_4618_);
v___y_4594_ = v___x_4605_;
v___y_4595_ = v___x_4607_;
v___y_4596_ = v___x_4627_;
v___y_4597_ = v_a_4620_;
v___y_4598_ = v___x_4626_;
goto v___jp_4593_;
}
else
{
lean_object* v___x_4628_; uint32_t v___x_4629_; 
v___x_4628_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__11));
v___x_4629_ = lean_unbox_uint32(v_a_4618_);
lean_dec(v_a_4618_);
v___y_4594_ = v___x_4605_;
v___y_4595_ = v___x_4607_;
v___y_4596_ = v___x_4629_;
v___y_4597_ = v_a_4620_;
v___y_4598_ = v___x_4628_;
goto v___jp_4593_;
}
}
}
else
{
lean_object* v_a_4630_; lean_object* v___x_4632_; uint8_t v_isShared_4633_; uint8_t v_isSharedCheck_4642_; 
lean_dec(v_a_4618_);
lean_dec(v_a_4616_);
lean_dec_ref(v_infos_4540_);
lean_dec_ref(v_scope_4539_);
v_a_4630_ = lean_ctor_get(v___x_4619_, 0);
v_isSharedCheck_4642_ = !lean_is_exclusive(v___x_4619_);
if (v_isSharedCheck_4642_ == 0)
{
v___x_4632_ = v___x_4619_;
v_isShared_4633_ = v_isSharedCheck_4642_;
goto v_resetjp_4631_;
}
else
{
lean_inc(v_a_4630_);
lean_dec(v___x_4619_);
v___x_4632_ = lean_box(0);
v_isShared_4633_ = v_isSharedCheck_4642_;
goto v_resetjp_4631_;
}
v_resetjp_4631_:
{
lean_object* v___x_4634_; uint8_t v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4640_; 
v___x_4634_ = lean_io_error_to_string(v_a_4630_);
v___x_4635_ = 3;
v___x_4636_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4636_, 0, v___x_4634_);
lean_ctor_set_uint8(v___x_4636_, sizeof(void*)*1, v___x_4635_);
lean_inc_ref(v___y_4521_);
v___x_4637_ = lean_apply_2(v___y_4521_, v___x_4636_, lean_box(0));
v___x_4638_ = lean_box(0);
if (v_isShared_4633_ == 0)
{
lean_ctor_set(v___x_4632_, 0, v___x_4638_);
v___x_4640_ = v___x_4632_;
goto v_reusejp_4639_;
}
else
{
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v___x_4638_);
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
else
{
lean_object* v_a_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4655_; 
lean_dec(v_a_4616_);
lean_dec(v_stdout_4612_);
lean_dec_ref(v_infos_4540_);
lean_dec_ref(v_scope_4539_);
v_a_4643_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4655_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4655_ == 0)
{
v___x_4645_ = v___x_4617_;
v_isShared_4646_ = v_isSharedCheck_4655_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_a_4643_);
lean_dec(v___x_4617_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4655_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v___x_4647_; uint8_t v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4653_; 
v___x_4647_ = lean_io_error_to_string(v_a_4643_);
v___x_4648_ = 3;
v___x_4649_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4649_, 0, v___x_4647_);
lean_ctor_set_uint8(v___x_4649_, sizeof(void*)*1, v___x_4648_);
lean_inc_ref(v___y_4521_);
v___x_4650_ = lean_apply_2(v___y_4521_, v___x_4649_, lean_box(0));
v___x_4651_ = lean_box(0);
if (v_isShared_4646_ == 0)
{
lean_ctor_set(v___x_4645_, 0, v___x_4651_);
v___x_4653_ = v___x_4645_;
goto v_reusejp_4652_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v___x_4651_);
v___x_4653_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4652_;
}
v_reusejp_4652_:
{
return v___x_4653_;
}
}
}
}
else
{
lean_object* v_a_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4663_; 
lean_dec(v_stdout_4612_);
lean_dec(v_a_4611_);
lean_dec_ref(v_infos_4540_);
lean_dec_ref(v_scope_4539_);
v_a_4656_ = lean_ctor_get(v___x_4615_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4658_ = v___x_4615_;
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_a_4656_);
lean_dec(v___x_4615_);
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
else
{
lean_object* v_a_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4676_; 
lean_dec_ref(v_infos_4540_);
lean_dec_ref(v_scope_4539_);
lean_dec_ref(v_cfg_4518_);
v_a_4664_ = lean_ctor_get(v___x_4610_, 0);
v_isSharedCheck_4676_ = !lean_is_exclusive(v___x_4610_);
if (v_isSharedCheck_4676_ == 0)
{
v___x_4666_ = v___x_4610_;
v_isShared_4667_ = v_isSharedCheck_4676_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_a_4664_);
lean_dec(v___x_4610_);
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
lean_inc_ref(v___y_4521_);
v___x_4671_ = lean_apply_2(v___y_4521_, v___x_4670_, lean_box(0));
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
v___jp_4677_:
{
lean_object* v___x_4682_; uint8_t v___x_4683_; 
v___x_4682_ = lean_array_get_size(v___y_4678_);
v___x_4683_ = lean_nat_dec_lt(v___y_4680_, v___x_4682_);
if (v___x_4683_ == 0)
{
v___y_4601_ = v___y_4679_;
v_a_4602_ = v_val_4681_;
goto v___jp_4600_;
}
else
{
lean_object* v___x_4684_; size_t v___x_4685_; size_t v___x_4686_; lean_object* v___x_4687_; 
v___x_4684_ = lean_box(0);
v___x_4685_ = ((size_t)0ULL);
v___x_4686_ = lean_usize_of_nat(v___x_4682_);
v___x_4687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_4678_, v___x_4685_, v___x_4686_, v___x_4684_, v___y_4521_);
if (lean_obj_tag(v___x_4687_) == 0)
{
lean_dec_ref_known(v___x_4687_, 1);
v___y_4601_ = v___y_4679_;
v_a_4602_ = v_val_4681_;
goto v___jp_4600_;
}
else
{
lean_dec_ref(v_val_4681_);
lean_dec_ref(v___y_4679_);
lean_dec_ref(v_infos_4540_);
lean_dec_ref(v_scope_4539_);
lean_dec_ref(v_cfg_4518_);
return v___x_4687_;
}
}
}
v___jp_4688_:
{
lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; 
v___x_4690_ = lean_unsigned_to_nat(0u);
v___x_4691_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_4692_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_4693_ = lean_io_getenv(v___x_4692_);
if (lean_obj_tag(v___x_4693_) == 0)
{
lean_object* v___x_4694_; 
v___x_4694_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v___y_4678_ = v___x_4691_;
v___y_4679_ = v_a_4689_;
v___y_4680_ = v___x_4690_;
v_val_4681_ = v___x_4694_;
goto v___jp_4677_;
}
else
{
lean_object* v_val_4695_; 
v_val_4695_ = lean_ctor_get(v___x_4693_, 0);
lean_inc(v_val_4695_);
lean_dec_ref_known(v___x_4693_, 1);
v___y_4678_ = v___x_4691_;
v___y_4679_ = v_a_4689_;
v___y_4680_ = v___x_4690_;
v_val_4681_ = v_val_4695_;
goto v___jp_4677_;
}
}
v___jp_4696_:
{
lean_object* v___x_4697_; 
v___x_4697_ = lean_io_prim_handle_flush(v_h_4519_);
if (lean_obj_tag(v___x_4697_) == 0)
{
lean_object* v___x_4698_; lean_object* v___x_4699_; 
lean_dec_ref_known(v___x_4697_, 1);
v___x_4698_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__20);
v___x_4699_ = lean_array_push(v___x_4698_, v_path_4520_);
v_a_4689_ = v___x_4699_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4700_; lean_object* v___x_4702_; uint8_t v_isShared_4703_; uint8_t v_isSharedCheck_4712_; 
lean_dec_ref(v_infos_4540_);
lean_dec_ref(v_scope_4539_);
lean_dec_ref(v_path_4520_);
lean_dec_ref(v_cfg_4518_);
v_a_4700_ = lean_ctor_get(v___x_4697_, 0);
v_isSharedCheck_4712_ = !lean_is_exclusive(v___x_4697_);
if (v_isSharedCheck_4712_ == 0)
{
v___x_4702_ = v___x_4697_;
v_isShared_4703_ = v_isSharedCheck_4712_;
goto v_resetjp_4701_;
}
else
{
lean_inc(v_a_4700_);
lean_dec(v___x_4697_);
v___x_4702_ = lean_box(0);
v_isShared_4703_ = v_isSharedCheck_4712_;
goto v_resetjp_4701_;
}
v_resetjp_4701_:
{
lean_object* v___x_4704_; uint8_t v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4710_; 
v___x_4704_ = lean_io_error_to_string(v_a_4700_);
v___x_4705_ = 3;
v___x_4706_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4706_, 0, v___x_4704_);
lean_ctor_set_uint8(v___x_4706_, sizeof(void*)*1, v___x_4705_);
lean_inc_ref(v___y_4521_);
v___x_4707_ = lean_apply_2(v___y_4521_, v___x_4706_, lean_box(0));
v___x_4708_ = lean_box(0);
if (v_isShared_4703_ == 0)
{
lean_ctor_set(v___x_4702_, 0, v___x_4708_);
v___x_4710_ = v___x_4702_;
goto v_reusejp_4709_;
}
else
{
lean_object* v_reuseFailAlloc_4711_; 
v_reuseFailAlloc_4711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4711_, 0, v___x_4708_);
v___x_4710_ = v_reuseFailAlloc_4711_;
goto v_reusejp_4709_;
}
v_reusejp_4709_:
{
return v___x_4710_;
}
}
}
}
v___jp_4713_:
{
if (lean_obj_tag(v___y_4714_) == 0)
{
lean_dec_ref_known(v___y_4714_, 1);
goto v___jp_4696_;
}
else
{
lean_dec_ref(v_infos_4540_);
lean_dec_ref(v_scope_4539_);
lean_dec_ref(v_path_4520_);
lean_dec_ref(v_cfg_4518_);
return v___y_4714_;
}
}
v___jp_4715_:
{
lean_object* v___x_4716_; 
v___x_4716_ = lean_io_prim_handle_flush(v_h_4519_);
if (lean_obj_tag(v___x_4716_) == 0)
{
lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; 
lean_dec_ref_known(v___x_4716_, 1);
v___x_4717_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_4718_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_4719_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_4720_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__10));
v___x_4721_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32, &l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__32);
lean_inc_ref(v_key_4541_);
v___x_4722_ = lean_array_push(v___x_4721_, v_key_4541_);
v___x_4723_ = lean_array_push(v___x_4722_, v___x_4717_);
v___x_4724_ = lean_array_push(v___x_4723_, v___x_4718_);
v___x_4725_ = lean_array_push(v___x_4724_, v___x_4719_);
v___x_4726_ = lean_array_push(v___x_4725_, v___x_4720_);
v___x_4727_ = lean_array_push(v___x_4726_, v_path_4520_);
v_a_4689_ = v___x_4727_;
goto v___jp_4688_;
}
else
{
lean_object* v_a_4728_; lean_object* v___x_4730_; uint8_t v_isShared_4731_; uint8_t v_isSharedCheck_4740_; 
lean_dec_ref(v_infos_4540_);
lean_dec_ref(v_scope_4539_);
lean_dec_ref(v_path_4520_);
lean_dec_ref(v_cfg_4518_);
v_a_4728_ = lean_ctor_get(v___x_4716_, 0);
v_isSharedCheck_4740_ = !lean_is_exclusive(v___x_4716_);
if (v_isSharedCheck_4740_ == 0)
{
v___x_4730_ = v___x_4716_;
v_isShared_4731_ = v_isSharedCheck_4740_;
goto v_resetjp_4729_;
}
else
{
lean_inc(v_a_4728_);
lean_dec(v___x_4716_);
v___x_4730_ = lean_box(0);
v_isShared_4731_ = v_isSharedCheck_4740_;
goto v_resetjp_4729_;
}
v_resetjp_4729_:
{
lean_object* v___x_4732_; uint8_t v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4738_; 
v___x_4732_ = lean_io_error_to_string(v_a_4728_);
v___x_4733_ = 3;
v___x_4734_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4734_, 0, v___x_4732_);
lean_ctor_set_uint8(v___x_4734_, sizeof(void*)*1, v___x_4733_);
lean_inc_ref(v___y_4521_);
v___x_4735_ = lean_apply_2(v___y_4521_, v___x_4734_, lean_box(0));
v___x_4736_ = lean_box(0);
if (v_isShared_4731_ == 0)
{
lean_ctor_set(v___x_4730_, 0, v___x_4736_);
v___x_4738_ = v___x_4730_;
goto v_reusejp_4737_;
}
else
{
lean_object* v_reuseFailAlloc_4739_; 
v_reuseFailAlloc_4739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4739_, 0, v___x_4736_);
v___x_4738_ = v_reuseFailAlloc_4739_;
goto v_reusejp_4737_;
}
v_reusejp_4737_:
{
return v___x_4738_;
}
}
}
}
v___jp_4741_:
{
if (lean_obj_tag(v___y_4742_) == 0)
{
lean_dec_ref_known(v___y_4742_, 1);
goto v___jp_4715_;
}
else
{
lean_dec_ref(v_infos_4540_);
lean_dec_ref(v_scope_4539_);
lean_dec_ref(v_path_4520_);
lean_dec_ref(v_cfg_4518_);
return v___y_4742_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___boxed(lean_object* v_cfg_4765_, lean_object* v_h_4766_, lean_object* v_path_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_){
_start:
{
lean_object* v_res_4770_; 
v_res_4770_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0(v_cfg_4765_, v_h_4766_, v_path_4767_, v___y_4768_);
lean_dec_ref(v___y_4768_);
lean_dec(v_h_4766_);
return v_res_4770_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(lean_object* v_cfg_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v___f_4774_; lean_object* v___x_4775_; 
v___f_4774_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___boxed), 5, 1);
lean_closure_set(v___f_4774_, 0, v_cfg_4771_);
v___x_4775_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v___f_4774_, v___y_4772_);
return v___x_4775_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___boxed(lean_object* v_cfg_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_){
_start:
{
lean_object* v_res_4779_; 
v_res_4779_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(v_cfg_4776_, v___y_4777_);
lean_dec_ref(v___y_4777_);
return v_res_4779_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl(lean_object* v_service_4781_, lean_object* v_scope_4782_){
_start:
{
lean_object* v___y_4784_; 
if (lean_obj_tag(v_scope_4782_) == 0)
{
lean_object* v_s_4787_; lean_object* v_apiEndpoint_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; 
v_s_4787_ = lean_ctor_get(v_scope_4782_, 0);
lean_inc_ref(v_s_4787_);
lean_dec_ref_known(v_scope_4782_, 1);
v_apiEndpoint_4788_ = lean_ctor_get(v_service_4781_, 4);
lean_inc_ref(v_apiEndpoint_4788_);
lean_dec_ref(v_service_4781_);
v___x_4789_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_4790_ = lean_string_append(v_apiEndpoint_4788_, v___x_4789_);
v___x_4791_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_4790_, v_s_4787_);
v___y_4784_ = v___x_4791_;
goto v___jp_4783_;
}
else
{
lean_object* v_s_4792_; lean_object* v_apiEndpoint_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; 
v_s_4792_ = lean_ctor_get(v_scope_4782_, 0);
lean_inc_ref(v_s_4792_);
lean_dec_ref_known(v_scope_4782_, 1);
v_apiEndpoint_4793_ = lean_ctor_get(v_service_4781_, 4);
lean_inc_ref(v_apiEndpoint_4793_);
lean_dec_ref(v_service_4781_);
v___x_4794_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_4795_ = lean_string_append(v_apiEndpoint_4793_, v___x_4794_);
v___x_4796_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_4795_, v_s_4792_);
v___y_4784_ = v___x_4796_;
goto v___jp_4783_;
}
v___jp_4783_:
{
lean_object* v___x_4785_; lean_object* v___x_4786_; 
v___x_4785_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl___closed__0));
v___x_4786_ = lean_string_append(v___y_4784_, v___x_4785_);
return v___x_4786_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0(lean_object* v_a_4797_, lean_object* v_as_4798_, size_t v_sz_4799_, size_t v_i_4800_, lean_object* v_b_4801_){
_start:
{
uint8_t v___x_4803_; 
v___x_4803_ = lean_usize_dec_lt(v_i_4800_, v_sz_4799_);
if (v___x_4803_ == 0)
{
lean_object* v___x_4804_; 
v___x_4804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4804_, 0, v_b_4801_);
return v___x_4804_;
}
else
{
lean_object* v___x_4805_; lean_object* v_a_4806_; lean_object* v___x_4807_; 
v___x_4805_ = lean_box(0);
v_a_4806_ = lean_array_uget_borrowed(v_as_4798_, v_i_4800_);
v___x_4807_ = l_IO_FS_writeBinFile(v_a_4806_, v_a_4797_);
if (lean_obj_tag(v___x_4807_) == 0)
{
size_t v___x_4808_; size_t v___x_4809_; 
lean_dec_ref_known(v___x_4807_, 1);
v___x_4808_ = ((size_t)1ULL);
v___x_4809_ = lean_usize_add(v_i_4800_, v___x_4808_);
v_i_4800_ = v___x_4809_;
v_b_4801_ = v___x_4805_;
goto _start;
}
else
{
return v___x_4807_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0___boxed(lean_object* v_a_4811_, lean_object* v_as_4812_, lean_object* v_sz_4813_, lean_object* v_i_4814_, lean_object* v_b_4815_, lean_object* v___y_4816_){
_start:
{
size_t v_sz_boxed_4817_; size_t v_i_boxed_4818_; lean_object* v_res_4819_; 
v_sz_boxed_4817_ = lean_unbox_usize(v_sz_4813_);
lean_dec(v_sz_4813_);
v_i_boxed_4818_ = lean_unbox_usize(v_i_4814_);
lean_dec(v_i_4814_);
v_res_4819_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0(v_a_4811_, v_as_4812_, v_sz_boxed_4817_, v_i_boxed_4818_, v_b_4815_);
lean_dec_ref(v_as_4812_);
lean_dec_ref(v_a_4811_);
return v_res_4819_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths(lean_object* v_path_4820_, lean_object* v_extraPaths_4821_){
_start:
{
lean_object* v___x_4823_; 
v___x_4823_ = l_IO_FS_readBinFile(v_path_4820_);
if (lean_obj_tag(v___x_4823_) == 0)
{
lean_object* v_a_4824_; lean_object* v___x_4825_; size_t v_sz_4826_; size_t v___x_4827_; lean_object* v___x_4828_; 
v_a_4824_ = lean_ctor_get(v___x_4823_, 0);
lean_inc(v_a_4824_);
lean_dec_ref_known(v___x_4823_, 1);
v___x_4825_ = lean_box(0);
v_sz_4826_ = lean_array_size(v_extraPaths_4821_);
v___x_4827_ = ((size_t)0ULL);
v___x_4828_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths_spec__0(v_a_4824_, v_extraPaths_4821_, v_sz_4826_, v___x_4827_, v___x_4825_);
lean_dec(v_a_4824_);
if (lean_obj_tag(v___x_4828_) == 0)
{
lean_object* v___x_4830_; uint8_t v_isShared_4831_; uint8_t v_isSharedCheck_4835_; 
v_isSharedCheck_4835_ = !lean_is_exclusive(v___x_4828_);
if (v_isSharedCheck_4835_ == 0)
{
lean_object* v_unused_4836_; 
v_unused_4836_ = lean_ctor_get(v___x_4828_, 0);
lean_dec(v_unused_4836_);
v___x_4830_ = v___x_4828_;
v_isShared_4831_ = v_isSharedCheck_4835_;
goto v_resetjp_4829_;
}
else
{
lean_dec(v___x_4828_);
v___x_4830_ = lean_box(0);
v_isShared_4831_ = v_isSharedCheck_4835_;
goto v_resetjp_4829_;
}
v_resetjp_4829_:
{
lean_object* v___x_4833_; 
if (v_isShared_4831_ == 0)
{
lean_ctor_set(v___x_4830_, 0, v___x_4825_);
v___x_4833_ = v___x_4830_;
goto v_reusejp_4832_;
}
else
{
lean_object* v_reuseFailAlloc_4834_; 
v_reuseFailAlloc_4834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4834_, 0, v___x_4825_);
v___x_4833_ = v_reuseFailAlloc_4834_;
goto v_reusejp_4832_;
}
v_reusejp_4832_:
{
return v___x_4833_;
}
}
}
else
{
return v___x_4828_;
}
}
else
{
lean_object* v_a_4837_; lean_object* v___x_4839_; uint8_t v_isShared_4840_; uint8_t v_isSharedCheck_4844_; 
v_a_4837_ = lean_ctor_get(v___x_4823_, 0);
v_isSharedCheck_4844_ = !lean_is_exclusive(v___x_4823_);
if (v_isSharedCheck_4844_ == 0)
{
v___x_4839_ = v___x_4823_;
v_isShared_4840_ = v_isSharedCheck_4844_;
goto v_resetjp_4838_;
}
else
{
lean_inc(v_a_4837_);
lean_dec(v___x_4823_);
v___x_4839_ = lean_box(0);
v_isShared_4840_ = v_isSharedCheck_4844_;
goto v_resetjp_4838_;
}
v_resetjp_4838_:
{
lean_object* v___x_4842_; 
if (v_isShared_4840_ == 0)
{
v___x_4842_ = v___x_4839_;
goto v_reusejp_4841_;
}
else
{
lean_object* v_reuseFailAlloc_4843_; 
v_reuseFailAlloc_4843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4843_, 0, v_a_4837_);
v___x_4842_ = v_reuseFailAlloc_4843_;
goto v_reusejp_4841_;
}
v_reusejp_4841_:
{
return v___x_4842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths___boxed(lean_object* v_path_4845_, lean_object* v_extraPaths_4846_, lean_object* v___y_4847_){
_start:
{
lean_object* v_res_4848_; 
v_res_4848_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths(v_path_4845_, v_extraPaths_4846_);
lean_dec_ref(v_extraPaths_4846_);
lean_dec_ref(v_path_4845_);
return v_res_4848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(size_t v_sz_4849_, size_t v_i_4850_, lean_object* v_bs_4851_){
_start:
{
uint8_t v___x_4852_; 
v___x_4852_ = lean_usize_dec_lt(v_i_4850_, v_sz_4849_);
if (v___x_4852_ == 0)
{
return v_bs_4851_;
}
else
{
lean_object* v_v_4853_; uint64_t v_hash_4854_; lean_object* v___x_4855_; lean_object* v_bs_x27_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; size_t v___x_4859_; size_t v___x_4860_; lean_object* v___x_4861_; 
v_v_4853_ = lean_array_uget_borrowed(v_bs_4851_, v_i_4850_);
v_hash_4854_ = lean_ctor_get_uint64(v_v_4853_, sizeof(void*)*3);
v___x_4855_ = lean_unsigned_to_nat(0u);
v_bs_x27_4856_ = lean_array_uset(v_bs_4851_, v_i_4850_, v___x_4855_);
v___x_4857_ = l_Lake_lowerHexUInt64(v_hash_4854_);
v___x_4858_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4858_, 0, v___x_4857_);
v___x_4859_ = ((size_t)1ULL);
v___x_4860_ = lean_usize_add(v_i_4850_, v___x_4859_);
v___x_4861_ = lean_array_uset(v_bs_x27_4856_, v_i_4850_, v___x_4858_);
v_i_4850_ = v___x_4860_;
v_bs_4851_ = v___x_4861_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0___boxed(lean_object* v_sz_4863_, lean_object* v_i_4864_, lean_object* v_bs_4865_){
_start:
{
size_t v_sz_boxed_4866_; size_t v_i_boxed_4867_; lean_object* v_res_4868_; 
v_sz_boxed_4866_ = lean_unbox_usize(v_sz_4863_);
lean_dec(v_sz_4863_);
v_i_boxed_4867_ = lean_unbox_usize(v_i_4864_);
lean_dec(v_i_4864_);
v_res_4868_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(v_sz_boxed_4866_, v_i_boxed_4867_, v_bs_4865_);
return v_res_4868_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(lean_object* v_a_4869_, lean_object* v_n_4870_, lean_object* v_j_4871_, lean_object* v_a_4872_){
_start:
{
lean_object* v_zero_4873_; uint8_t v_isZero_4874_; 
v_zero_4873_ = lean_unsigned_to_nat(0u);
v_isZero_4874_ = lean_nat_dec_eq(v_j_4871_, v_zero_4873_);
if (v_isZero_4874_ == 1)
{
lean_dec(v_j_4871_);
return v_a_4872_;
}
else
{
lean_object* v___x_4875_; lean_object* v___x_4876_; uint64_t v_hash_4877_; lean_object* v_path_4878_; lean_object* v_extraPaths_4879_; lean_object* v___x_4881_; uint8_t v_isShared_4882_; uint8_t v_isSharedCheck_4891_; 
v___x_4875_ = lean_nat_sub(v_n_4870_, v_j_4871_);
v___x_4876_ = lean_array_fget(v_a_4872_, v___x_4875_);
v_hash_4877_ = lean_ctor_get_uint64(v___x_4876_, sizeof(void*)*3);
v_path_4878_ = lean_ctor_get(v___x_4876_, 1);
v_extraPaths_4879_ = lean_ctor_get(v___x_4876_, 2);
v_isSharedCheck_4891_ = !lean_is_exclusive(v___x_4876_);
if (v_isSharedCheck_4891_ == 0)
{
lean_object* v_unused_4892_; 
v_unused_4892_ = lean_ctor_get(v___x_4876_, 0);
lean_dec(v_unused_4892_);
v___x_4881_ = v___x_4876_;
v_isShared_4882_ = v_isSharedCheck_4891_;
goto v_resetjp_4880_;
}
else
{
lean_inc(v_extraPaths_4879_);
lean_inc(v_path_4878_);
lean_dec(v___x_4876_);
v___x_4881_ = lean_box(0);
v_isShared_4882_ = v_isSharedCheck_4891_;
goto v_resetjp_4880_;
}
v_resetjp_4880_:
{
lean_object* v_one_4883_; lean_object* v_n_4884_; lean_object* v___x_4885_; lean_object* v___x_4887_; 
v_one_4883_ = lean_unsigned_to_nat(1u);
v_n_4884_ = lean_nat_sub(v_j_4871_, v_one_4883_);
lean_dec(v_j_4871_);
v___x_4885_ = lean_array_fget_borrowed(v_a_4869_, v___x_4875_);
lean_inc(v___x_4885_);
if (v_isShared_4882_ == 0)
{
lean_ctor_set(v___x_4881_, 0, v___x_4885_);
v___x_4887_ = v___x_4881_;
goto v_reusejp_4886_;
}
else
{
lean_object* v_reuseFailAlloc_4890_; 
v_reuseFailAlloc_4890_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_4890_, 0, v___x_4885_);
lean_ctor_set(v_reuseFailAlloc_4890_, 1, v_path_4878_);
lean_ctor_set(v_reuseFailAlloc_4890_, 2, v_extraPaths_4879_);
lean_ctor_set_uint64(v_reuseFailAlloc_4890_, sizeof(void*)*3, v_hash_4877_);
v___x_4887_ = v_reuseFailAlloc_4890_;
goto v_reusejp_4886_;
}
v_reusejp_4886_:
{
lean_object* v___x_4888_; 
v___x_4888_ = lean_array_fset(v_a_4872_, v___x_4875_, v___x_4887_);
lean_dec(v___x_4875_);
v_j_4871_ = v_n_4884_;
v_a_4872_ = v___x_4888_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg___boxed(lean_object* v_a_4893_, lean_object* v_n_4894_, lean_object* v_j_4895_, lean_object* v_a_4896_){
_start:
{
lean_object* v_res_4897_; 
v_res_4897_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(v_a_4893_, v_n_4894_, v_j_4895_, v_a_4896_);
lean_dec(v_n_4894_);
lean_dec_ref(v_a_4893_);
return v_res_4897_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0(void){
_start:
{
lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; lean_object* v___x_4901_; 
v___x_4898_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_4899_ = lean_unsigned_to_nat(2u);
v___x_4900_ = lean_mk_empty_array_with_capacity(v___x_4899_);
v___x_4901_ = lean_array_push(v___x_4900_, v___x_4898_);
return v___x_4901_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(lean_object* v_as_4902_, size_t v_i_4903_, size_t v_stop_4904_, lean_object* v_b_4905_){
_start:
{
uint8_t v___x_4906_; 
v___x_4906_ = lean_usize_dec_eq(v_i_4903_, v_stop_4904_);
if (v___x_4906_ == 0)
{
lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; size_t v___x_4911_; size_t v___x_4912_; 
v___x_4907_ = lean_array_uget_borrowed(v_as_4902_, v_i_4903_);
v___x_4908_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___closed__0);
lean_inc(v___x_4907_);
v___x_4909_ = lean_array_push(v___x_4908_, v___x_4907_);
v___x_4910_ = l_Array_append___redArg(v_b_4905_, v___x_4909_);
lean_dec_ref(v___x_4909_);
v___x_4911_ = ((size_t)1ULL);
v___x_4912_ = lean_usize_add(v_i_4903_, v___x_4911_);
v_i_4903_ = v___x_4912_;
v_b_4905_ = v___x_4910_;
goto _start;
}
else
{
return v_b_4905_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3___boxed(lean_object* v_as_4914_, lean_object* v_i_4915_, lean_object* v_stop_4916_, lean_object* v_b_4917_){
_start:
{
size_t v_i_boxed_4918_; size_t v_stop_boxed_4919_; lean_object* v_res_4920_; 
v_i_boxed_4918_ = lean_unbox_usize(v_i_4915_);
lean_dec(v_i_4915_);
v_stop_boxed_4919_ = lean_unbox_usize(v_stop_4916_);
lean_dec(v_stop_4916_);
v_res_4920_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(v_as_4914_, v_i_boxed_4918_, v_stop_boxed_4919_, v_b_4917_);
lean_dec_ref(v_as_4914_);
return v_res_4920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2(lean_object* v_x_4923_){
_start:
{
if (lean_obj_tag(v_x_4923_) == 0)
{
lean_object* v___x_4924_; 
v___x_4924_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2___closed__0));
return v___x_4924_;
}
else
{
lean_object* v___x_4925_; lean_object* v___x_4926_; 
v___x_4925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4925_, 0, v_x_4923_);
v___x_4926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4926_, 0, v___x_4925_);
return v___x_4926_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3(lean_object* v_x_4929_){
_start:
{
if (lean_obj_tag(v_x_4929_) == 0)
{
lean_object* v___x_4930_; 
v___x_4930_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3___closed__0));
return v___x_4930_;
}
else
{
lean_object* v___x_4931_; 
v___x_4931_ = l_Lean_Json_getObj_x3f(v_x_4929_);
if (lean_obj_tag(v___x_4931_) == 0)
{
lean_object* v_a_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_4939_; 
v_a_4932_ = lean_ctor_get(v___x_4931_, 0);
v_isSharedCheck_4939_ = !lean_is_exclusive(v___x_4931_);
if (v_isSharedCheck_4939_ == 0)
{
v___x_4934_ = v___x_4931_;
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_a_4932_);
lean_dec(v___x_4931_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_4939_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
lean_object* v___x_4937_; 
if (v_isShared_4935_ == 0)
{
v___x_4937_ = v___x_4934_;
goto v_reusejp_4936_;
}
else
{
lean_object* v_reuseFailAlloc_4938_; 
v_reuseFailAlloc_4938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4938_, 0, v_a_4932_);
v___x_4937_ = v_reuseFailAlloc_4938_;
goto v_reusejp_4936_;
}
v_reusejp_4936_:
{
return v___x_4937_;
}
}
}
else
{
lean_object* v_a_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4948_; 
v_a_4940_ = lean_ctor_get(v___x_4931_, 0);
v_isSharedCheck_4948_ = !lean_is_exclusive(v___x_4931_);
if (v_isSharedCheck_4948_ == 0)
{
v___x_4942_ = v___x_4931_;
v_isShared_4943_ = v_isSharedCheck_4948_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_a_4940_);
lean_dec(v___x_4931_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4948_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4944_; lean_object* v___x_4946_; 
v___x_4944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4944_, 0, v_a_4940_);
if (v_isShared_4943_ == 0)
{
lean_ctor_set(v___x_4942_, 0, v___x_4944_);
v___x_4946_ = v___x_4942_;
goto v_reusejp_4945_;
}
else
{
lean_object* v_reuseFailAlloc_4947_; 
v_reuseFailAlloc_4947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4947_, 0, v___x_4944_);
v___x_4946_ = v_reuseFailAlloc_4947_;
goto v_reusejp_4945_;
}
v_reusejp_4945_:
{
return v___x_4946_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2(size_t v_sz_4949_, size_t v_i_4950_, lean_object* v_bs_4951_){
_start:
{
uint8_t v___x_4952_; 
v___x_4952_ = lean_usize_dec_lt(v_i_4950_, v_sz_4949_);
if (v___x_4952_ == 0)
{
lean_object* v___x_4953_; 
v___x_4953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4953_, 0, v_bs_4951_);
return v___x_4953_;
}
else
{
lean_object* v_v_4954_; lean_object* v___x_4955_; 
v_v_4954_ = lean_array_uget_borrowed(v_bs_4951_, v_i_4950_);
lean_inc(v_v_4954_);
v___x_4955_ = l_Lean_Json_getStr_x3f(v_v_4954_);
if (lean_obj_tag(v___x_4955_) == 0)
{
lean_object* v_a_4956_; lean_object* v___x_4958_; uint8_t v_isShared_4959_; uint8_t v_isSharedCheck_4963_; 
lean_dec_ref(v_bs_4951_);
v_a_4956_ = lean_ctor_get(v___x_4955_, 0);
v_isSharedCheck_4963_ = !lean_is_exclusive(v___x_4955_);
if (v_isSharedCheck_4963_ == 0)
{
v___x_4958_ = v___x_4955_;
v_isShared_4959_ = v_isSharedCheck_4963_;
goto v_resetjp_4957_;
}
else
{
lean_inc(v_a_4956_);
lean_dec(v___x_4955_);
v___x_4958_ = lean_box(0);
v_isShared_4959_ = v_isSharedCheck_4963_;
goto v_resetjp_4957_;
}
v_resetjp_4957_:
{
lean_object* v___x_4961_; 
if (v_isShared_4959_ == 0)
{
v___x_4961_ = v___x_4958_;
goto v_reusejp_4960_;
}
else
{
lean_object* v_reuseFailAlloc_4962_; 
v_reuseFailAlloc_4962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4962_, 0, v_a_4956_);
v___x_4961_ = v_reuseFailAlloc_4962_;
goto v_reusejp_4960_;
}
v_reusejp_4960_:
{
return v___x_4961_;
}
}
}
else
{
lean_object* v_a_4964_; lean_object* v___x_4965_; lean_object* v_bs_x27_4966_; size_t v___x_4967_; size_t v___x_4968_; lean_object* v___x_4969_; 
v_a_4964_ = lean_ctor_get(v___x_4955_, 0);
lean_inc(v_a_4964_);
lean_dec_ref_known(v___x_4955_, 1);
v___x_4965_ = lean_unsigned_to_nat(0u);
v_bs_x27_4966_ = lean_array_uset(v_bs_4951_, v_i_4950_, v___x_4965_);
v___x_4967_ = ((size_t)1ULL);
v___x_4968_ = lean_usize_add(v_i_4950_, v___x_4967_);
v___x_4969_ = lean_array_uset(v_bs_x27_4966_, v_i_4950_, v_a_4964_);
v_i_4950_ = v___x_4968_;
v_bs_4951_ = v___x_4969_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_4971_, lean_object* v_i_4972_, lean_object* v_bs_4973_){
_start:
{
size_t v_sz_boxed_4974_; size_t v_i_boxed_4975_; lean_object* v_res_4976_; 
v_sz_boxed_4974_ = lean_unbox_usize(v_sz_4971_);
lean_dec(v_sz_4971_);
v_i_boxed_4975_ = lean_unbox_usize(v_i_4972_);
lean_dec(v_i_4972_);
v_res_4976_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2(v_sz_boxed_4974_, v_i_boxed_4975_, v_bs_4973_);
return v_res_4976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(lean_object* v_x_4977_){
_start:
{
if (lean_obj_tag(v_x_4977_) == 4)
{
lean_object* v_elems_4978_; size_t v_sz_4979_; size_t v___x_4980_; lean_object* v___x_4981_; 
v_elems_4978_ = lean_ctor_get(v_x_4977_, 0);
lean_inc_ref(v_elems_4978_);
lean_dec_ref_known(v_x_4977_, 1);
v_sz_4979_ = lean_array_size(v_elems_4978_);
v___x_4980_ = ((size_t)0ULL);
v___x_4981_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1_spec__2(v_sz_4979_, v___x_4980_, v_elems_4978_);
return v___x_4981_;
}
else
{
lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; 
v___x_4982_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__0));
v___x_4983_ = lean_unsigned_to_nat(80u);
v___x_4984_ = l_Lean_Json_pretty(v_x_4977_, v___x_4983_);
v___x_4985_ = lean_string_append(v___x_4982_, v___x_4984_);
lean_dec_ref(v___x_4984_);
v___x_4986_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__0___closed__1));
v___x_4987_ = lean_string_append(v___x_4985_, v___x_4986_);
v___x_4988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4988_, 0, v___x_4987_);
return v___x_4988_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1(lean_object* v_val_5001_){
_start:
{
lean_object* v_a_5003_; lean_object* v___x_5047_; 
lean_inc(v_val_5001_);
v___x_5047_ = l_Lean_Json_getObj_x3f(v_val_5001_);
if (lean_obj_tag(v___x_5047_) == 1)
{
lean_object* v_a_5048_; lean_object* v___x_5055_; lean_object* v___x_5056_; 
v_a_5048_ = lean_ctor_get(v___x_5047_, 0);
lean_inc(v_a_5048_);
lean_dec_ref_known(v___x_5047_, 1);
v___x_5055_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__0));
v___x_5056_ = l_Lake_JsonObject_getJson_x3f(v_a_5048_, v___x_5055_);
if (lean_obj_tag(v___x_5056_) == 0)
{
goto v___jp_5049_;
}
else
{
lean_object* v_val_5057_; lean_object* v___x_5058_; 
v_val_5057_ = lean_ctor_get(v___x_5056_, 0);
lean_inc(v_val_5057_);
lean_dec_ref_known(v___x_5056_, 1);
v___x_5058_ = l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__3(v_val_5057_);
if (lean_obj_tag(v___x_5058_) == 0)
{
lean_object* v_a_5059_; lean_object* v___x_5061_; uint8_t v_isShared_5062_; uint8_t v_isSharedCheck_5068_; 
lean_dec(v_a_5048_);
lean_dec(v_val_5001_);
v_a_5059_ = lean_ctor_get(v___x_5058_, 0);
v_isSharedCheck_5068_ = !lean_is_exclusive(v___x_5058_);
if (v_isSharedCheck_5068_ == 0)
{
v___x_5061_ = v___x_5058_;
v_isShared_5062_ = v_isSharedCheck_5068_;
goto v_resetjp_5060_;
}
else
{
lean_inc(v_a_5059_);
lean_dec(v___x_5058_);
v___x_5061_ = lean_box(0);
v_isShared_5062_ = v_isSharedCheck_5068_;
goto v_resetjp_5060_;
}
v_resetjp_5060_:
{
lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5066_; 
v___x_5063_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__1));
v___x_5064_ = lean_string_append(v___x_5063_, v_a_5059_);
lean_dec(v_a_5059_);
if (v_isShared_5062_ == 0)
{
lean_ctor_set(v___x_5061_, 0, v___x_5064_);
v___x_5066_ = v___x_5061_;
goto v_reusejp_5065_;
}
else
{
lean_object* v_reuseFailAlloc_5067_; 
v_reuseFailAlloc_5067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5067_, 0, v___x_5064_);
v___x_5066_ = v_reuseFailAlloc_5067_;
goto v_reusejp_5065_;
}
v_reusejp_5065_:
{
return v___x_5066_;
}
}
}
else
{
if (lean_obj_tag(v___x_5058_) == 0)
{
lean_object* v_a_5069_; lean_object* v___x_5071_; uint8_t v_isShared_5072_; uint8_t v_isSharedCheck_5076_; 
lean_dec(v_a_5048_);
lean_dec(v_val_5001_);
v_a_5069_ = lean_ctor_get(v___x_5058_, 0);
v_isSharedCheck_5076_ = !lean_is_exclusive(v___x_5058_);
if (v_isSharedCheck_5076_ == 0)
{
v___x_5071_ = v___x_5058_;
v_isShared_5072_ = v_isSharedCheck_5076_;
goto v_resetjp_5070_;
}
else
{
lean_inc(v_a_5069_);
lean_dec(v___x_5058_);
v___x_5071_ = lean_box(0);
v_isShared_5072_ = v_isSharedCheck_5076_;
goto v_resetjp_5070_;
}
v_resetjp_5070_:
{
lean_object* v___x_5074_; 
if (v_isShared_5072_ == 0)
{
lean_ctor_set_tag(v___x_5071_, 0);
v___x_5074_ = v___x_5071_;
goto v_reusejp_5073_;
}
else
{
lean_object* v_reuseFailAlloc_5075_; 
v_reuseFailAlloc_5075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5075_, 0, v_a_5069_);
v___x_5074_ = v_reuseFailAlloc_5075_;
goto v_reusejp_5073_;
}
v_reusejp_5073_:
{
return v___x_5074_;
}
}
}
else
{
lean_object* v_a_5077_; 
v_a_5077_ = lean_ctor_get(v___x_5058_, 0);
lean_inc(v_a_5077_);
lean_dec_ref_known(v___x_5058_, 1);
if (lean_obj_tag(v_a_5077_) == 1)
{
lean_object* v_val_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; 
lean_dec(v_a_5048_);
lean_dec(v_val_5001_);
v_val_5078_ = lean_ctor_get(v_a_5077_, 0);
lean_inc(v_val_5078_);
lean_dec_ref_known(v_a_5077_, 1);
v___x_5079_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__2));
v___x_5080_ = l_Lake_JsonObject_getJson_x3f(v_val_5078_, v___x_5079_);
if (lean_obj_tag(v___x_5080_) == 0)
{
lean_object* v___x_5081_; 
lean_dec(v_val_5078_);
v___x_5081_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__4));
return v___x_5081_;
}
else
{
lean_object* v_val_5082_; lean_object* v___x_5083_; 
v_val_5082_ = lean_ctor_get(v___x_5080_, 0);
lean_inc(v_val_5082_);
lean_dec_ref_known(v___x_5080_, 1);
v___x_5083_ = l_Lean_Json_getNat_x3f(v_val_5082_);
if (lean_obj_tag(v___x_5083_) == 0)
{
lean_object* v_a_5084_; lean_object* v___x_5086_; uint8_t v_isShared_5087_; uint8_t v_isSharedCheck_5093_; 
lean_dec(v_val_5078_);
v_a_5084_ = lean_ctor_get(v___x_5083_, 0);
v_isSharedCheck_5093_ = !lean_is_exclusive(v___x_5083_);
if (v_isSharedCheck_5093_ == 0)
{
v___x_5086_ = v___x_5083_;
v_isShared_5087_ = v_isSharedCheck_5093_;
goto v_resetjp_5085_;
}
else
{
lean_inc(v_a_5084_);
lean_dec(v___x_5083_);
v___x_5086_ = lean_box(0);
v_isShared_5087_ = v_isSharedCheck_5093_;
goto v_resetjp_5085_;
}
v_resetjp_5085_:
{
lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5091_; 
v___x_5088_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__5));
v___x_5089_ = lean_string_append(v___x_5088_, v_a_5084_);
lean_dec(v_a_5084_);
if (v_isShared_5087_ == 0)
{
lean_ctor_set(v___x_5086_, 0, v___x_5089_);
v___x_5091_ = v___x_5086_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5092_; 
v_reuseFailAlloc_5092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5092_, 0, v___x_5089_);
v___x_5091_ = v_reuseFailAlloc_5092_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
return v___x_5091_;
}
}
}
else
{
if (lean_obj_tag(v___x_5083_) == 0)
{
lean_object* v_a_5094_; lean_object* v___x_5096_; uint8_t v_isShared_5097_; uint8_t v_isSharedCheck_5101_; 
lean_dec(v_val_5078_);
v_a_5094_ = lean_ctor_get(v___x_5083_, 0);
v_isSharedCheck_5101_ = !lean_is_exclusive(v___x_5083_);
if (v_isSharedCheck_5101_ == 0)
{
v___x_5096_ = v___x_5083_;
v_isShared_5097_ = v_isSharedCheck_5101_;
goto v_resetjp_5095_;
}
else
{
lean_inc(v_a_5094_);
lean_dec(v___x_5083_);
v___x_5096_ = lean_box(0);
v_isShared_5097_ = v_isSharedCheck_5101_;
goto v_resetjp_5095_;
}
v_resetjp_5095_:
{
lean_object* v___x_5099_; 
if (v_isShared_5097_ == 0)
{
lean_ctor_set_tag(v___x_5096_, 0);
v___x_5099_ = v___x_5096_;
goto v_reusejp_5098_;
}
else
{
lean_object* v_reuseFailAlloc_5100_; 
v_reuseFailAlloc_5100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5100_, 0, v_a_5094_);
v___x_5099_ = v_reuseFailAlloc_5100_;
goto v_reusejp_5098_;
}
v_reusejp_5098_:
{
return v___x_5099_;
}
}
}
else
{
lean_object* v_a_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; 
v_a_5102_ = lean_ctor_get(v___x_5083_, 0);
lean_inc(v_a_5102_);
lean_dec_ref_known(v___x_5083_, 1);
v___x_5103_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__6));
v___x_5104_ = l_Lake_JsonObject_getJson_x3f(v_val_5078_, v___x_5103_);
lean_dec(v_val_5078_);
if (lean_obj_tag(v___x_5104_) == 0)
{
lean_object* v___x_5105_; 
lean_dec(v_a_5102_);
v___x_5105_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__8));
return v___x_5105_;
}
else
{
lean_object* v_val_5106_; lean_object* v___x_5107_; 
v_val_5106_ = lean_ctor_get(v___x_5104_, 0);
lean_inc(v_val_5106_);
lean_dec_ref_known(v___x_5104_, 1);
v___x_5107_ = l_Lean_Json_getStr_x3f(v_val_5106_);
if (lean_obj_tag(v___x_5107_) == 0)
{
lean_object* v_a_5108_; lean_object* v___x_5110_; uint8_t v_isShared_5111_; uint8_t v_isSharedCheck_5117_; 
lean_dec(v_a_5102_);
v_a_5108_ = lean_ctor_get(v___x_5107_, 0);
v_isSharedCheck_5117_ = !lean_is_exclusive(v___x_5107_);
if (v_isSharedCheck_5117_ == 0)
{
v___x_5110_ = v___x_5107_;
v_isShared_5111_ = v_isSharedCheck_5117_;
goto v_resetjp_5109_;
}
else
{
lean_inc(v_a_5108_);
lean_dec(v___x_5107_);
v___x_5110_ = lean_box(0);
v_isShared_5111_ = v_isSharedCheck_5117_;
goto v_resetjp_5109_;
}
v_resetjp_5109_:
{
lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5115_; 
v___x_5112_ = ((lean_object*)(l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1___closed__9));
v___x_5113_ = lean_string_append(v___x_5112_, v_a_5108_);
lean_dec(v_a_5108_);
if (v_isShared_5111_ == 0)
{
lean_ctor_set(v___x_5110_, 0, v___x_5113_);
v___x_5115_ = v___x_5110_;
goto v_reusejp_5114_;
}
else
{
lean_object* v_reuseFailAlloc_5116_; 
v_reuseFailAlloc_5116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5116_, 0, v___x_5113_);
v___x_5115_ = v_reuseFailAlloc_5116_;
goto v_reusejp_5114_;
}
v_reusejp_5114_:
{
return v___x_5115_;
}
}
}
else
{
if (lean_obj_tag(v___x_5107_) == 0)
{
lean_object* v_a_5118_; lean_object* v___x_5120_; uint8_t v_isShared_5121_; uint8_t v_isSharedCheck_5125_; 
lean_dec(v_a_5102_);
v_a_5118_ = lean_ctor_get(v___x_5107_, 0);
v_isSharedCheck_5125_ = !lean_is_exclusive(v___x_5107_);
if (v_isSharedCheck_5125_ == 0)
{
v___x_5120_ = v___x_5107_;
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
else
{
lean_inc(v_a_5118_);
lean_dec(v___x_5107_);
v___x_5120_ = lean_box(0);
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
v_resetjp_5119_:
{
lean_object* v___x_5123_; 
if (v_isShared_5121_ == 0)
{
lean_ctor_set_tag(v___x_5120_, 0);
v___x_5123_ = v___x_5120_;
goto v_reusejp_5122_;
}
else
{
lean_object* v_reuseFailAlloc_5124_; 
v_reuseFailAlloc_5124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5124_, 0, v_a_5118_);
v___x_5123_ = v_reuseFailAlloc_5124_;
goto v_reusejp_5122_;
}
v_reusejp_5122_:
{
return v___x_5123_;
}
}
}
else
{
lean_object* v_a_5126_; lean_object* v___x_5128_; uint8_t v_isShared_5129_; uint8_t v_isSharedCheck_5134_; 
v_a_5126_ = lean_ctor_get(v___x_5107_, 0);
v_isSharedCheck_5134_ = !lean_is_exclusive(v___x_5107_);
if (v_isSharedCheck_5134_ == 0)
{
v___x_5128_ = v___x_5107_;
v_isShared_5129_ = v_isSharedCheck_5134_;
goto v_resetjp_5127_;
}
else
{
lean_inc(v_a_5126_);
lean_dec(v___x_5107_);
v___x_5128_ = lean_box(0);
v_isShared_5129_ = v_isSharedCheck_5134_;
goto v_resetjp_5127_;
}
v_resetjp_5127_:
{
lean_object* v___x_5130_; lean_object* v___x_5132_; 
v___x_5130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5130_, 0, v_a_5102_);
lean_ctor_set(v___x_5130_, 1, v_a_5126_);
if (v_isShared_5129_ == 0)
{
lean_ctor_set(v___x_5128_, 0, v___x_5130_);
v___x_5132_ = v___x_5128_;
goto v_reusejp_5131_;
}
else
{
lean_object* v_reuseFailAlloc_5133_; 
v_reuseFailAlloc_5133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5133_, 0, v___x_5130_);
v___x_5132_ = v_reuseFailAlloc_5133_;
goto v_reusejp_5131_;
}
v_reusejp_5131_:
{
return v___x_5132_;
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
lean_dec(v_a_5077_);
goto v___jp_5049_;
}
}
}
}
v___jp_5049_:
{
lean_object* v___x_5050_; lean_object* v___x_5051_; 
v___x_5050_ = ((lean_object*)(l_Lake_CacheOutput_toJson___closed__0));
v___x_5051_ = l_Lake_JsonObject_getJson_x3f(v_a_5048_, v___x_5050_);
lean_dec(v_a_5048_);
if (lean_obj_tag(v___x_5051_) == 0)
{
v_a_5003_ = v___x_5051_;
goto v___jp_5002_;
}
else
{
lean_object* v_val_5052_; lean_object* v___x_5053_; lean_object* v_a_5054_; 
v_val_5052_ = lean_ctor_get(v___x_5051_, 0);
lean_inc(v_val_5052_);
lean_dec_ref_known(v___x_5051_, 1);
v___x_5053_ = l_Lean_Option_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__2(v_val_5052_);
v_a_5054_ = lean_ctor_get(v___x_5053_, 0);
lean_inc(v_a_5054_);
lean_dec_ref(v___x_5053_);
v_a_5003_ = v_a_5054_;
goto v___jp_5002_;
}
}
}
else
{
lean_object* v___x_5135_; 
lean_dec_ref(v___x_5047_);
v___x_5135_ = l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(v_val_5001_);
if (lean_obj_tag(v___x_5135_) == 0)
{
lean_object* v_a_5136_; lean_object* v___x_5138_; uint8_t v_isShared_5139_; uint8_t v_isSharedCheck_5143_; 
v_a_5136_ = lean_ctor_get(v___x_5135_, 0);
v_isSharedCheck_5143_ = !lean_is_exclusive(v___x_5135_);
if (v_isSharedCheck_5143_ == 0)
{
v___x_5138_ = v___x_5135_;
v_isShared_5139_ = v_isSharedCheck_5143_;
goto v_resetjp_5137_;
}
else
{
lean_inc(v_a_5136_);
lean_dec(v___x_5135_);
v___x_5138_ = lean_box(0);
v_isShared_5139_ = v_isSharedCheck_5143_;
goto v_resetjp_5137_;
}
v_resetjp_5137_:
{
lean_object* v___x_5141_; 
if (v_isShared_5139_ == 0)
{
v___x_5141_ = v___x_5138_;
goto v_reusejp_5140_;
}
else
{
lean_object* v_reuseFailAlloc_5142_; 
v_reuseFailAlloc_5142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5142_, 0, v_a_5136_);
v___x_5141_ = v_reuseFailAlloc_5142_;
goto v_reusejp_5140_;
}
v_reusejp_5140_:
{
return v___x_5141_;
}
}
}
else
{
lean_object* v_a_5144_; lean_object* v___x_5146_; uint8_t v_isShared_5147_; uint8_t v_isSharedCheck_5152_; 
v_a_5144_ = lean_ctor_get(v___x_5135_, 0);
v_isSharedCheck_5152_ = !lean_is_exclusive(v___x_5135_);
if (v_isSharedCheck_5152_ == 0)
{
v___x_5146_ = v___x_5135_;
v_isShared_5147_ = v_isSharedCheck_5152_;
goto v_resetjp_5145_;
}
else
{
lean_inc(v_a_5144_);
lean_dec(v___x_5135_);
v___x_5146_ = lean_box(0);
v_isShared_5147_ = v_isSharedCheck_5152_;
goto v_resetjp_5145_;
}
v_resetjp_5145_:
{
lean_object* v___x_5148_; lean_object* v___x_5150_; 
v___x_5148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5148_, 0, v_a_5144_);
if (v_isShared_5147_ == 0)
{
lean_ctor_set(v___x_5146_, 0, v___x_5148_);
v___x_5150_ = v___x_5146_;
goto v_reusejp_5149_;
}
else
{
lean_object* v_reuseFailAlloc_5151_; 
v_reuseFailAlloc_5151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5151_, 0, v___x_5148_);
v___x_5150_ = v_reuseFailAlloc_5151_;
goto v_reusejp_5149_;
}
v_reusejp_5149_:
{
return v___x_5150_;
}
}
}
}
v___jp_5002_:
{
if (lean_obj_tag(v_a_5003_) == 1)
{
lean_object* v_val_5004_; lean_object* v___x_5006_; uint8_t v_isShared_5007_; uint8_t v_isSharedCheck_5028_; 
lean_dec(v_val_5001_);
v_val_5004_ = lean_ctor_get(v_a_5003_, 0);
v_isSharedCheck_5028_ = !lean_is_exclusive(v_a_5003_);
if (v_isSharedCheck_5028_ == 0)
{
v___x_5006_ = v_a_5003_;
v_isShared_5007_ = v_isSharedCheck_5028_;
goto v_resetjp_5005_;
}
else
{
lean_inc(v_val_5004_);
lean_dec(v_a_5003_);
v___x_5006_ = lean_box(0);
v_isShared_5007_ = v_isSharedCheck_5028_;
goto v_resetjp_5005_;
}
v_resetjp_5005_:
{
lean_object* v___x_5008_; 
v___x_5008_ = l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(v_val_5004_);
if (lean_obj_tag(v___x_5008_) == 0)
{
lean_object* v_a_5009_; lean_object* v___x_5011_; uint8_t v_isShared_5012_; uint8_t v_isSharedCheck_5016_; 
lean_del_object(v___x_5006_);
v_a_5009_ = lean_ctor_get(v___x_5008_, 0);
v_isSharedCheck_5016_ = !lean_is_exclusive(v___x_5008_);
if (v_isSharedCheck_5016_ == 0)
{
v___x_5011_ = v___x_5008_;
v_isShared_5012_ = v_isSharedCheck_5016_;
goto v_resetjp_5010_;
}
else
{
lean_inc(v_a_5009_);
lean_dec(v___x_5008_);
v___x_5011_ = lean_box(0);
v_isShared_5012_ = v_isSharedCheck_5016_;
goto v_resetjp_5010_;
}
v_resetjp_5010_:
{
lean_object* v___x_5014_; 
if (v_isShared_5012_ == 0)
{
v___x_5014_ = v___x_5011_;
goto v_reusejp_5013_;
}
else
{
lean_object* v_reuseFailAlloc_5015_; 
v_reuseFailAlloc_5015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5015_, 0, v_a_5009_);
v___x_5014_ = v_reuseFailAlloc_5015_;
goto v_reusejp_5013_;
}
v_reusejp_5013_:
{
return v___x_5014_;
}
}
}
else
{
lean_object* v_a_5017_; lean_object* v___x_5019_; uint8_t v_isShared_5020_; uint8_t v_isSharedCheck_5027_; 
v_a_5017_ = lean_ctor_get(v___x_5008_, 0);
v_isSharedCheck_5027_ = !lean_is_exclusive(v___x_5008_);
if (v_isSharedCheck_5027_ == 0)
{
v___x_5019_ = v___x_5008_;
v_isShared_5020_ = v_isSharedCheck_5027_;
goto v_resetjp_5018_;
}
else
{
lean_inc(v_a_5017_);
lean_dec(v___x_5008_);
v___x_5019_ = lean_box(0);
v_isShared_5020_ = v_isSharedCheck_5027_;
goto v_resetjp_5018_;
}
v_resetjp_5018_:
{
lean_object* v___x_5022_; 
if (v_isShared_5007_ == 0)
{
lean_ctor_set_tag(v___x_5006_, 0);
lean_ctor_set(v___x_5006_, 0, v_a_5017_);
v___x_5022_ = v___x_5006_;
goto v_reusejp_5021_;
}
else
{
lean_object* v_reuseFailAlloc_5026_; 
v_reuseFailAlloc_5026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5026_, 0, v_a_5017_);
v___x_5022_ = v_reuseFailAlloc_5026_;
goto v_reusejp_5021_;
}
v_reusejp_5021_:
{
lean_object* v___x_5024_; 
if (v_isShared_5020_ == 0)
{
lean_ctor_set(v___x_5019_, 0, v___x_5022_);
v___x_5024_ = v___x_5019_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v___x_5022_);
v___x_5024_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
return v___x_5024_;
}
}
}
}
}
}
else
{
lean_object* v___x_5029_; 
lean_dec(v_a_5003_);
v___x_5029_ = l_Lean_Array_fromJson_x3f___at___00Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1_spec__1(v_val_5001_);
if (lean_obj_tag(v___x_5029_) == 0)
{
lean_object* v_a_5030_; lean_object* v___x_5032_; uint8_t v_isShared_5033_; uint8_t v_isSharedCheck_5037_; 
v_a_5030_ = lean_ctor_get(v___x_5029_, 0);
v_isSharedCheck_5037_ = !lean_is_exclusive(v___x_5029_);
if (v_isSharedCheck_5037_ == 0)
{
v___x_5032_ = v___x_5029_;
v_isShared_5033_ = v_isSharedCheck_5037_;
goto v_resetjp_5031_;
}
else
{
lean_inc(v_a_5030_);
lean_dec(v___x_5029_);
v___x_5032_ = lean_box(0);
v_isShared_5033_ = v_isSharedCheck_5037_;
goto v_resetjp_5031_;
}
v_resetjp_5031_:
{
lean_object* v___x_5035_; 
if (v_isShared_5033_ == 0)
{
v___x_5035_ = v___x_5032_;
goto v_reusejp_5034_;
}
else
{
lean_object* v_reuseFailAlloc_5036_; 
v_reuseFailAlloc_5036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5036_, 0, v_a_5030_);
v___x_5035_ = v_reuseFailAlloc_5036_;
goto v_reusejp_5034_;
}
v_reusejp_5034_:
{
return v___x_5035_;
}
}
}
else
{
lean_object* v_a_5038_; lean_object* v___x_5040_; uint8_t v_isShared_5041_; uint8_t v_isSharedCheck_5046_; 
v_a_5038_ = lean_ctor_get(v___x_5029_, 0);
v_isSharedCheck_5046_ = !lean_is_exclusive(v___x_5029_);
if (v_isSharedCheck_5046_ == 0)
{
v___x_5040_ = v___x_5029_;
v_isShared_5041_ = v_isSharedCheck_5046_;
goto v_resetjp_5039_;
}
else
{
lean_inc(v_a_5038_);
lean_dec(v___x_5029_);
v___x_5040_ = lean_box(0);
v_isShared_5041_ = v_isSharedCheck_5046_;
goto v_resetjp_5039_;
}
v_resetjp_5039_:
{
lean_object* v___x_5042_; lean_object* v___x_5044_; 
v___x_5042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5042_, 0, v_a_5038_);
if (v_isShared_5041_ == 0)
{
lean_ctor_set(v___x_5040_, 0, v___x_5042_);
v___x_5044_ = v___x_5040_;
goto v_reusejp_5043_;
}
else
{
lean_object* v_reuseFailAlloc_5045_; 
v_reuseFailAlloc_5045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5045_, 0, v___x_5042_);
v___x_5044_ = v_reuseFailAlloc_5045_;
goto v_reusejp_5043_;
}
v_reusejp_5043_:
{
return v___x_5044_;
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
lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; 
v___x_5171_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__16));
v___x_5172_ = lean_unsigned_to_nat(12u);
v___x_5173_ = lean_mk_empty_array_with_capacity(v___x_5172_);
v___x_5174_ = lean_array_push(v___x_5173_, v___x_5171_);
return v___x_5174_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19(void){
_start:
{
lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; 
v___x_5175_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__14));
v___x_5176_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__18);
v___x_5177_ = lean_array_push(v___x_5176_, v___x_5175_);
return v___x_5177_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20(void){
_start:
{
lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; 
v___x_5178_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__7));
v___x_5179_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__19);
v___x_5180_ = lean_array_push(v___x_5179_, v___x_5178_);
return v___x_5180_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21(void){
_start:
{
lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; 
v___x_5181_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__15));
v___x_5182_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__20);
v___x_5183_ = lean_array_push(v___x_5182_, v___x_5181_);
return v___x_5183_;
}
}
static lean_object* _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22(void){
_start:
{
lean_object* v___x_5184_; lean_object* v___x_5185_; 
v___x_5184_ = l_Lake_Reservoir_lakeHeaders;
v___x_5185_ = lean_array_get_size(v___x_5184_);
return v___x_5185_;
}
}
static uint8_t _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23(void){
_start:
{
lean_object* v___x_5186_; lean_object* v___x_5187_; uint8_t v___x_5188_; 
v___x_5186_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22);
v___x_5187_ = lean_unsigned_to_nat(0u);
v___x_5188_ = lean_nat_dec_lt(v___x_5187_, v___x_5186_);
return v___x_5188_;
}
}
static uint8_t _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24(void){
_start:
{
lean_object* v___x_5189_; uint8_t v___x_5190_; 
v___x_5189_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22);
v___x_5190_ = lean_nat_dec_le(v___x_5189_, v___x_5189_);
return v___x_5190_;
}
}
static size_t _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25(void){
_start:
{
lean_object* v___x_5191_; size_t v___x_5192_; 
v___x_5191_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__22);
v___x_5192_ = lean_usize_of_nat(v___x_5191_);
return v___x_5192_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0(lean_object* v_url_5193_, lean_object* v_infos_5194_, lean_object* v_h_5195_, lean_object* v_path_5196_, lean_object* v___y_5197_){
_start:
{
uint32_t v___y_5200_; lean_object* v___y_5201_; uint8_t v___y_5212_; lean_object* v___y_5213_; lean_object* v___y_5214_; uint32_t v___y_5215_; lean_object* v_msg_5216_; lean_object* v___y_5217_; uint8_t v___y_5231_; lean_object* v___y_5232_; lean_object* v___y_5233_; uint32_t v___y_5234_; lean_object* v___y_5235_; lean_object* v_msg_5236_; lean_object* v___y_5237_; uint8_t v___y_5248_; lean_object* v___y_5249_; lean_object* v___y_5250_; lean_object* v___y_5251_; uint32_t v___y_5252_; lean_object* v___y_5253_; lean_object* v_msg_5254_; lean_object* v___y_5267_; lean_object* v___y_5268_; uint32_t v___y_5269_; lean_object* v___y_5270_; lean_object* v_a_5271_; uint8_t v___y_5299_; lean_object* v___y_5300_; lean_object* v___y_5301_; uint32_t v___y_5302_; lean_object* v___y_5303_; lean_object* v___y_5322_; lean_object* v_a_5323_; size_t v_sz_5405_; size_t v___x_5406_; lean_object* v___y_5408_; lean_object* v___y_5409_; lean_object* v___y_5410_; lean_object* v_val_5411_; lean_object* v___x_5425_; lean_object* v_body_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; 
v_sz_5405_ = lean_array_size(v_infos_5194_);
v___x_5406_ = ((size_t)0ULL);
lean_inc_ref(v_infos_5194_);
v___x_5425_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__0(v_sz_5405_, v___x_5406_, v_infos_5194_);
v_body_5426_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_body_5426_, 0, v___x_5425_);
v___x_5427_ = l_Lean_Json_compress(v_body_5426_);
v___x_5428_ = lean_io_prim_handle_put_str(v_h_5195_, v___x_5427_);
lean_dec_ref(v___x_5427_);
if (lean_obj_tag(v___x_5428_) == 0)
{
lean_object* v___x_5429_; 
lean_dec_ref_known(v___x_5428_, 1);
v___x_5429_ = lean_io_prim_handle_flush(v_h_5195_);
if (lean_obj_tag(v___x_5429_) == 0)
{
lean_object* v___y_5431_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; uint8_t v___x_5457_; 
lean_dec_ref_known(v___x_5429_, 1);
v___x_5438_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__16));
v___x_5439_ = lean_string_append(v___x_5438_, v_path_5196_);
v___x_5440_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__8));
v___x_5441_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__9));
v___x_5442_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__10));
v___x_5443_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__11));
v___x_5444_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__12));
v___x_5445_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__19));
v___x_5446_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__17));
v___x_5447_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__21);
v___x_5448_ = lean_array_push(v___x_5447_, v___x_5439_);
v___x_5449_ = lean_array_push(v___x_5448_, v___x_5440_);
v___x_5450_ = lean_array_push(v___x_5449_, v___x_5441_);
v___x_5451_ = lean_array_push(v___x_5450_, v___x_5442_);
v___x_5452_ = lean_array_push(v___x_5451_, v___x_5443_);
v___x_5453_ = lean_array_push(v___x_5452_, v___x_5444_);
v___x_5454_ = lean_array_push(v___x_5453_, v___x_5445_);
v___x_5455_ = lean_array_push(v___x_5454_, v___x_5446_);
v___x_5456_ = l_Lake_Reservoir_lakeHeaders;
v___x_5457_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__23);
if (v___x_5457_ == 0)
{
v___y_5431_ = v___x_5455_;
goto v___jp_5430_;
}
else
{
uint8_t v___x_5458_; 
v___x_5458_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__24);
if (v___x_5458_ == 0)
{
if (v___x_5457_ == 0)
{
v___y_5431_ = v___x_5455_;
goto v___jp_5430_;
}
else
{
size_t v___x_5459_; lean_object* v___x_5460_; 
v___x_5459_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25);
v___x_5460_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(v___x_5456_, v___x_5406_, v___x_5459_, v___x_5455_);
v___y_5431_ = v___x_5460_;
goto v___jp_5430_;
}
}
else
{
size_t v___x_5461_; lean_object* v___x_5462_; 
v___x_5461_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25, &l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__25);
v___x_5462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__3(v___x_5456_, v___x_5406_, v___x_5461_, v___x_5455_);
v___y_5431_ = v___x_5462_;
goto v___jp_5430_;
}
}
v___jp_5430_:
{
lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; 
v___x_5432_ = lean_unsigned_to_nat(0u);
v___x_5433_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5434_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__31));
v___x_5435_ = lean_io_getenv(v___x_5434_);
if (lean_obj_tag(v___x_5435_) == 0)
{
lean_object* v___x_5436_; 
v___x_5436_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__32));
v___y_5408_ = v___y_5431_;
v___y_5409_ = v___x_5433_;
v___y_5410_ = v___x_5432_;
v_val_5411_ = v___x_5436_;
goto v___jp_5407_;
}
else
{
lean_object* v_val_5437_; 
v_val_5437_ = lean_ctor_get(v___x_5435_, 0);
lean_inc(v_val_5437_);
lean_dec_ref_known(v___x_5435_, 1);
v___y_5408_ = v___y_5431_;
v___y_5409_ = v___x_5433_;
v___y_5410_ = v___x_5432_;
v_val_5411_ = v_val_5437_;
goto v___jp_5407_;
}
}
}
else
{
lean_object* v_a_5463_; lean_object* v___x_5465_; uint8_t v_isShared_5466_; uint8_t v_isSharedCheck_5475_; 
lean_dec_ref(v_infos_5194_);
lean_dec_ref(v_url_5193_);
v_a_5463_ = lean_ctor_get(v___x_5429_, 0);
v_isSharedCheck_5475_ = !lean_is_exclusive(v___x_5429_);
if (v_isSharedCheck_5475_ == 0)
{
v___x_5465_ = v___x_5429_;
v_isShared_5466_ = v_isSharedCheck_5475_;
goto v_resetjp_5464_;
}
else
{
lean_inc(v_a_5463_);
lean_dec(v___x_5429_);
v___x_5465_ = lean_box(0);
v_isShared_5466_ = v_isSharedCheck_5475_;
goto v_resetjp_5464_;
}
v_resetjp_5464_:
{
lean_object* v___x_5467_; uint8_t v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___x_5473_; 
v___x_5467_ = lean_io_error_to_string(v_a_5463_);
v___x_5468_ = 3;
v___x_5469_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5469_, 0, v___x_5467_);
lean_ctor_set_uint8(v___x_5469_, sizeof(void*)*1, v___x_5468_);
lean_inc_ref(v___y_5197_);
v___x_5470_ = lean_apply_2(v___y_5197_, v___x_5469_, lean_box(0));
v___x_5471_ = lean_box(0);
if (v_isShared_5466_ == 0)
{
lean_ctor_set(v___x_5465_, 0, v___x_5471_);
v___x_5473_ = v___x_5465_;
goto v_reusejp_5472_;
}
else
{
lean_object* v_reuseFailAlloc_5474_; 
v_reuseFailAlloc_5474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5474_, 0, v___x_5471_);
v___x_5473_ = v_reuseFailAlloc_5474_;
goto v_reusejp_5472_;
}
v_reusejp_5472_:
{
return v___x_5473_;
}
}
}
}
else
{
lean_object* v_a_5476_; lean_object* v___x_5478_; uint8_t v_isShared_5479_; uint8_t v_isSharedCheck_5488_; 
lean_dec_ref(v_infos_5194_);
lean_dec_ref(v_url_5193_);
v_a_5476_ = lean_ctor_get(v___x_5428_, 0);
v_isSharedCheck_5488_ = !lean_is_exclusive(v___x_5428_);
if (v_isSharedCheck_5488_ == 0)
{
v___x_5478_ = v___x_5428_;
v_isShared_5479_ = v_isSharedCheck_5488_;
goto v_resetjp_5477_;
}
else
{
lean_inc(v_a_5476_);
lean_dec(v___x_5428_);
v___x_5478_ = lean_box(0);
v_isShared_5479_ = v_isSharedCheck_5488_;
goto v_resetjp_5477_;
}
v_resetjp_5477_:
{
lean_object* v___x_5480_; uint8_t v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5486_; 
v___x_5480_ = lean_io_error_to_string(v_a_5476_);
v___x_5481_ = 3;
v___x_5482_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5482_, 0, v___x_5480_);
lean_ctor_set_uint8(v___x_5482_, sizeof(void*)*1, v___x_5481_);
lean_inc_ref(v___y_5197_);
v___x_5483_ = lean_apply_2(v___y_5197_, v___x_5482_, lean_box(0));
v___x_5484_ = lean_box(0);
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 0, v___x_5484_);
v___x_5486_ = v___x_5478_;
goto v_reusejp_5485_;
}
else
{
lean_object* v_reuseFailAlloc_5487_; 
v_reuseFailAlloc_5487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5487_, 0, v___x_5484_);
v___x_5486_ = v_reuseFailAlloc_5487_;
goto v_reusejp_5485_;
}
v_reusejp_5485_:
{
return v___x_5486_;
}
}
}
v___jp_5199_:
{
lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; uint8_t v___x_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; 
v___x_5202_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__0));
v___x_5203_ = lean_uint32_to_nat(v___y_5200_);
v___x_5204_ = l_Nat_reprFast(v___x_5203_);
v___x_5205_ = lean_string_append(v___x_5202_, v___x_5204_);
lean_dec_ref(v___x_5204_);
v___x_5206_ = 3;
v___x_5207_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5207_, 0, v___x_5205_);
lean_ctor_set_uint8(v___x_5207_, sizeof(void*)*1, v___x_5206_);
lean_inc_ref(v___y_5201_);
v___x_5208_ = lean_apply_2(v___y_5201_, v___x_5207_, lean_box(0));
v___x_5209_ = lean_box(0);
v___x_5210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5210_, 0, v___x_5209_);
return v___x_5210_;
}
v___jp_5211_:
{
uint8_t v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; 
v___x_5218_ = 3;
v___x_5219_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5219_, 0, v_msg_5216_);
lean_ctor_set_uint8(v___x_5219_, sizeof(void*)*1, v___x_5218_);
lean_inc_ref_n(v___y_5217_, 2);
v___x_5220_ = lean_apply_2(v___y_5217_, v___x_5219_, lean_box(0));
v___x_5221_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__1));
v___x_5222_ = lean_string_utf8_byte_size(v___y_5213_);
lean_inc(v___y_5214_);
lean_inc_ref(v___y_5213_);
v___x_5223_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5223_, 0, v___y_5213_);
lean_ctor_set(v___x_5223_, 1, v___y_5214_);
lean_ctor_set(v___x_5223_, 2, v___x_5222_);
v___x_5224_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5223_, v___x_5222_);
lean_dec_ref_known(v___x_5223_, 3);
v___x_5225_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5225_, 0, v___y_5213_);
lean_ctor_set(v___x_5225_, 1, v___y_5214_);
lean_ctor_set(v___x_5225_, 2, v___x_5224_);
v___x_5226_ = l_String_Slice_toString(v___x_5225_);
lean_dec_ref_known(v___x_5225_, 3);
v___x_5227_ = lean_string_append(v___x_5221_, v___x_5226_);
lean_dec_ref(v___x_5226_);
v___x_5228_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5228_, 0, v___x_5227_);
lean_ctor_set_uint8(v___x_5228_, sizeof(void*)*1, v___y_5212_);
v___x_5229_ = lean_apply_2(v___y_5217_, v___x_5228_, lean_box(0));
v___y_5200_ = v___y_5215_;
v___y_5201_ = v___y_5217_;
goto v___jp_5199_;
}
v___jp_5230_:
{
lean_object* v___x_5238_; uint8_t v___x_5239_; 
v___x_5238_ = lean_string_utf8_byte_size(v___y_5235_);
v___x_5239_ = lean_nat_dec_eq(v___x_5238_, v___y_5233_);
if (v___x_5239_ == 0)
{
lean_object* v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; 
v___x_5240_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__2));
v___x_5241_ = lean_string_append(v_msg_5236_, v___x_5240_);
lean_inc_n(v___y_5233_, 2);
lean_inc_ref(v___y_5235_);
v___x_5242_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5242_, 0, v___y_5235_);
lean_ctor_set(v___x_5242_, 1, v___y_5233_);
lean_ctor_set(v___x_5242_, 2, v___x_5238_);
v___x_5243_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5242_, v___x_5238_);
lean_dec_ref_known(v___x_5242_, 3);
v___x_5244_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5244_, 0, v___y_5235_);
lean_ctor_set(v___x_5244_, 1, v___y_5233_);
lean_ctor_set(v___x_5244_, 2, v___x_5243_);
v___x_5245_ = l_String_Slice_toString(v___x_5244_);
lean_dec_ref_known(v___x_5244_, 3);
v___x_5246_ = lean_string_append(v___x_5241_, v___x_5245_);
lean_dec_ref(v___x_5245_);
v___y_5212_ = v___y_5231_;
v___y_5213_ = v___y_5232_;
v___y_5214_ = v___y_5233_;
v___y_5215_ = v___y_5234_;
v_msg_5216_ = v___x_5246_;
v___y_5217_ = v___y_5237_;
goto v___jp_5211_;
}
else
{
lean_dec_ref(v___y_5235_);
v___y_5212_ = v___y_5231_;
v___y_5213_ = v___y_5232_;
v___y_5214_ = v___y_5233_;
v___y_5215_ = v___y_5234_;
v_msg_5216_ = v_msg_5236_;
v___y_5217_ = v___y_5237_;
goto v___jp_5211_;
}
}
v___jp_5247_:
{
lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; 
v___x_5255_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__3));
v___x_5256_ = lean_string_append(v_msg_5254_, v___x_5255_);
v___x_5257_ = lean_string_append(v___x_5256_, v_url_5193_);
lean_dec_ref(v_url_5193_);
v___x_5258_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__4));
v___x_5259_ = l_Lake_JsonObject_getJson_x3f(v___y_5249_, v___x_5258_);
lean_dec(v___y_5249_);
if (lean_obj_tag(v___x_5259_) == 0)
{
v___y_5231_ = v___y_5248_;
v___y_5232_ = v___y_5250_;
v___y_5233_ = v___y_5251_;
v___y_5234_ = v___y_5252_;
v___y_5235_ = v___y_5253_;
v_msg_5236_ = v___x_5257_;
v___y_5237_ = v___y_5197_;
goto v___jp_5230_;
}
else
{
lean_object* v_val_5260_; lean_object* v___x_5261_; 
v_val_5260_ = lean_ctor_get(v___x_5259_, 0);
lean_inc(v_val_5260_);
lean_dec_ref_known(v___x_5259_, 1);
v___x_5261_ = l_Lean_Json_getStr_x3f(v_val_5260_);
if (lean_obj_tag(v___x_5261_) == 0)
{
lean_dec_ref_known(v___x_5261_, 1);
v___y_5231_ = v___y_5248_;
v___y_5232_ = v___y_5250_;
v___y_5233_ = v___y_5251_;
v___y_5234_ = v___y_5252_;
v___y_5235_ = v___y_5253_;
v_msg_5236_ = v___x_5257_;
v___y_5237_ = v___y_5197_;
goto v___jp_5230_;
}
else
{
if (lean_obj_tag(v___x_5261_) == 1)
{
lean_object* v_a_5262_; lean_object* v___x_5263_; lean_object* v___x_5264_; lean_object* v___x_5265_; 
v_a_5262_ = lean_ctor_get(v___x_5261_, 0);
lean_inc(v_a_5262_);
lean_dec_ref_known(v___x_5261_, 1);
v___x_5263_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__4));
v___x_5264_ = lean_string_append(v___x_5257_, v___x_5263_);
v___x_5265_ = lean_string_append(v___x_5264_, v_a_5262_);
lean_dec(v_a_5262_);
v___y_5231_ = v___y_5248_;
v___y_5232_ = v___y_5250_;
v___y_5233_ = v___y_5251_;
v___y_5234_ = v___y_5252_;
v___y_5235_ = v___y_5253_;
v_msg_5236_ = v___x_5265_;
v___y_5237_ = v___y_5197_;
goto v___jp_5230_;
}
else
{
lean_dec_ref_known(v___x_5261_, 1);
v___y_5231_ = v___y_5248_;
v___y_5232_ = v___y_5250_;
v___y_5233_ = v___y_5251_;
v___y_5234_ = v___y_5252_;
v___y_5235_ = v___y_5253_;
v_msg_5236_ = v___x_5257_;
v___y_5237_ = v___y_5197_;
goto v___jp_5230_;
}
}
}
}
v___jp_5266_:
{
lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; uint8_t v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; uint8_t v___x_5288_; 
v___x_5272_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5));
v___x_5273_ = lean_string_append(v___x_5272_, v_url_5193_);
lean_dec_ref(v_url_5193_);
v___x_5274_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__6));
v___x_5275_ = lean_string_append(v___x_5273_, v___x_5274_);
v___x_5276_ = lean_string_append(v___x_5275_, v_a_5271_);
lean_dec_ref(v_a_5271_);
v___x_5277_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer___closed__2));
v___x_5278_ = lean_string_append(v___x_5276_, v___x_5277_);
v___x_5279_ = lean_string_utf8_byte_size(v___y_5267_);
lean_inc(v___y_5268_);
v___x_5280_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5280_, 0, v___y_5267_);
lean_ctor_set(v___x_5280_, 1, v___y_5268_);
lean_ctor_set(v___x_5280_, 2, v___x_5279_);
v___x_5281_ = l_String_Slice_trimAscii(v___x_5280_);
v___x_5282_ = l_String_Slice_toString(v___x_5281_);
lean_dec_ref(v___x_5281_);
v___x_5283_ = lean_string_append(v___x_5278_, v___x_5282_);
lean_dec_ref(v___x_5282_);
v___x_5284_ = 3;
v___x_5285_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5285_, 0, v___x_5283_);
lean_ctor_set_uint8(v___x_5285_, sizeof(void*)*1, v___x_5284_);
lean_inc_ref(v___y_5197_);
v___x_5286_ = lean_apply_2(v___y_5197_, v___x_5285_, lean_box(0));
v___x_5287_ = lean_string_utf8_byte_size(v___y_5270_);
v___x_5288_ = lean_nat_dec_eq(v___x_5287_, v___y_5268_);
if (v___x_5288_ == 0)
{
lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; uint8_t v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; 
v___x_5289_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__7));
lean_inc(v___y_5268_);
lean_inc_ref(v___y_5270_);
v___x_5290_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5290_, 0, v___y_5270_);
lean_ctor_set(v___x_5290_, 1, v___y_5268_);
lean_ctor_set(v___x_5290_, 2, v___x_5287_);
v___x_5291_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure_spec__0(v___x_5290_, v___x_5287_);
lean_dec_ref_known(v___x_5290_, 3);
v___x_5292_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5292_, 0, v___y_5270_);
lean_ctor_set(v___x_5292_, 1, v___y_5268_);
lean_ctor_set(v___x_5292_, 2, v___x_5291_);
v___x_5293_ = l_String_Slice_toString(v___x_5292_);
lean_dec_ref_known(v___x_5292_, 3);
v___x_5294_ = lean_string_append(v___x_5289_, v___x_5293_);
lean_dec_ref(v___x_5293_);
v___x_5295_ = 2;
v___x_5296_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5296_, 0, v___x_5294_);
lean_ctor_set_uint8(v___x_5296_, sizeof(void*)*1, v___x_5295_);
lean_inc_ref(v___y_5197_);
v___x_5297_ = lean_apply_2(v___y_5197_, v___x_5296_, lean_box(0));
v___y_5200_ = v___y_5269_;
v___y_5201_ = v___y_5197_;
goto v___jp_5199_;
}
else
{
lean_dec_ref(v___y_5270_);
lean_dec(v___y_5268_);
v___y_5200_ = v___y_5269_;
v___y_5201_ = v___y_5197_;
goto v___jp_5199_;
}
}
v___jp_5298_:
{
lean_object* v___x_5304_; 
lean_inc_ref(v___y_5300_);
v___x_5304_ = l_Lean_Json_parse(v___y_5300_);
if (lean_obj_tag(v___x_5304_) == 0)
{
lean_object* v_a_5305_; 
v_a_5305_ = lean_ctor_get(v___x_5304_, 0);
lean_inc(v_a_5305_);
lean_dec_ref_known(v___x_5304_, 1);
v___y_5267_ = v___y_5300_;
v___y_5268_ = v___y_5301_;
v___y_5269_ = v___y_5302_;
v___y_5270_ = v___y_5303_;
v_a_5271_ = v_a_5305_;
goto v___jp_5266_;
}
else
{
lean_object* v_a_5306_; lean_object* v___x_5307_; 
v_a_5306_ = lean_ctor_get(v___x_5304_, 0);
lean_inc(v_a_5306_);
lean_dec_ref_known(v___x_5304_, 1);
v___x_5307_ = l_Lean_Json_getObj_x3f(v_a_5306_);
if (lean_obj_tag(v___x_5307_) == 0)
{
lean_object* v_a_5308_; 
v_a_5308_ = lean_ctor_get(v___x_5307_, 0);
lean_inc(v_a_5308_);
lean_dec_ref_known(v___x_5307_, 1);
v___y_5267_ = v___y_5300_;
v___y_5268_ = v___y_5301_;
v___y_5269_ = v___y_5302_;
v___y_5270_ = v___y_5303_;
v_a_5271_ = v_a_5308_;
goto v___jp_5266_;
}
else
{
lean_object* v_a_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; 
v_a_5309_ = lean_ctor_get(v___x_5307_, 0);
lean_inc(v_a_5309_);
lean_dec_ref_known(v___x_5307_, 1);
v___x_5310_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__8));
v___x_5311_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__6));
v___x_5312_ = l_Lake_JsonObject_getJson_x3f(v_a_5309_, v___x_5311_);
if (lean_obj_tag(v___x_5312_) == 0)
{
v___y_5248_ = v___y_5299_;
v___y_5249_ = v_a_5309_;
v___y_5250_ = v___y_5300_;
v___y_5251_ = v___y_5301_;
v___y_5252_ = v___y_5302_;
v___y_5253_ = v___y_5303_;
v_msg_5254_ = v___x_5310_;
goto v___jp_5247_;
}
else
{
lean_object* v_val_5313_; lean_object* v___x_5314_; 
v_val_5313_ = lean_ctor_get(v___x_5312_, 0);
lean_inc(v_val_5313_);
lean_dec_ref_known(v___x_5312_, 1);
v___x_5314_ = l_Lean_Json_getNat_x3f(v_val_5313_);
if (lean_obj_tag(v___x_5314_) == 0)
{
lean_dec_ref_known(v___x_5314_, 1);
v___y_5248_ = v___y_5299_;
v___y_5249_ = v_a_5309_;
v___y_5250_ = v___y_5300_;
v___y_5251_ = v___y_5301_;
v___y_5252_ = v___y_5302_;
v___y_5253_ = v___y_5303_;
v_msg_5254_ = v___x_5310_;
goto v___jp_5247_;
}
else
{
if (lean_obj_tag(v___x_5314_) == 1)
{
lean_object* v_a_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; 
v_a_5315_ = lean_ctor_get(v___x_5314_, 0);
lean_inc(v_a_5315_);
lean_dec_ref_known(v___x_5314_, 1);
v___x_5316_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9));
v___x_5317_ = l_Nat_reprFast(v_a_5315_);
v___x_5318_ = lean_string_append(v___x_5316_, v___x_5317_);
lean_dec_ref(v___x_5317_);
v___x_5319_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_monitorTransfer_handleFailure___closed__9));
v___x_5320_ = lean_string_append(v___x_5318_, v___x_5319_);
v___y_5248_ = v___y_5299_;
v___y_5249_ = v_a_5309_;
v___y_5250_ = v___y_5300_;
v___y_5251_ = v___y_5301_;
v___y_5252_ = v___y_5302_;
v___y_5253_ = v___y_5303_;
v_msg_5254_ = v___x_5320_;
goto v___jp_5247_;
}
else
{
lean_dec_ref_known(v___x_5314_, 1);
v___y_5248_ = v___y_5299_;
v___y_5249_ = v_a_5309_;
v___y_5250_ = v___y_5300_;
v___y_5251_ = v___y_5301_;
v___y_5252_ = v___y_5302_;
v___y_5253_ = v___y_5303_;
v_msg_5254_ = v___x_5310_;
goto v___jp_5247_;
}
}
}
}
}
}
v___jp_5321_:
{
lean_object* v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; uint8_t v___x_5329_; uint8_t v___x_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; uint8_t v___x_5333_; lean_object* v___x_5334_; lean_object* v___x_5335_; lean_object* v___x_5336_; 
v___x_5324_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts___lam__0___closed__3));
lean_inc_ref(v_url_5193_);
v___x_5325_ = lean_array_push(v___y_5322_, v_url_5193_);
v___x_5326_ = lean_box(0);
v___x_5327_ = lean_unsigned_to_nat(0u);
v___x_5328_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__27));
v___x_5329_ = 1;
v___x_5330_ = 0;
v___x_5331_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_5331_, 0, v___x_5324_);
lean_ctor_set(v___x_5331_, 1, v_a_5323_);
lean_ctor_set(v___x_5331_, 2, v___x_5325_);
lean_ctor_set(v___x_5331_, 3, v___x_5326_);
lean_ctor_set(v___x_5331_, 4, v___x_5328_);
lean_ctor_set_uint8(v___x_5331_, sizeof(void*)*5, v___x_5329_);
lean_ctor_set_uint8(v___x_5331_, sizeof(void*)*5 + 1, v___x_5330_);
lean_inc_ref(v___x_5331_);
v___x_5332_ = l_Lake_mkCmdLog(v___x_5331_);
v___x_5333_ = 0;
v___x_5334_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5334_, 0, v___x_5332_);
lean_ctor_set_uint8(v___x_5334_, sizeof(void*)*1, v___x_5333_);
lean_inc_ref(v___y_5197_);
v___x_5335_ = lean_apply_2(v___y_5197_, v___x_5334_, lean_box(0));
v___x_5336_ = l_IO_Process_output(v___x_5331_, v___x_5326_);
if (lean_obj_tag(v___x_5336_) == 0)
{
lean_object* v_a_5337_; lean_object* v___x_5339_; uint8_t v_isShared_5340_; uint8_t v_isSharedCheck_5391_; 
v_a_5337_ = lean_ctor_get(v___x_5336_, 0);
v_isSharedCheck_5391_ = !lean_is_exclusive(v___x_5336_);
if (v_isSharedCheck_5391_ == 0)
{
v___x_5339_ = v___x_5336_;
v_isShared_5340_ = v_isSharedCheck_5391_;
goto v_resetjp_5338_;
}
else
{
lean_inc(v_a_5337_);
lean_dec(v___x_5336_);
v___x_5339_ = lean_box(0);
v_isShared_5340_ = v_isSharedCheck_5391_;
goto v_resetjp_5338_;
}
v_resetjp_5338_:
{
uint32_t v_exitCode_5341_; lean_object* v_stdout_5342_; lean_object* v_stderr_5343_; lean_object* v___x_5344_; 
v_exitCode_5341_ = lean_ctor_get_uint32(v_a_5337_, sizeof(void*)*2);
v_stdout_5342_ = lean_ctor_get(v_a_5337_, 0);
lean_inc_ref_n(v_stdout_5342_, 2);
v_stderr_5343_ = lean_ctor_get(v_a_5337_, 1);
lean_inc_ref(v_stderr_5343_);
lean_dec(v_a_5337_);
v___x_5344_ = l_Lean_Json_parse(v_stdout_5342_);
if (lean_obj_tag(v___x_5344_) == 0)
{
lean_dec_ref_known(v___x_5344_, 1);
lean_del_object(v___x_5339_);
lean_dec_ref(v_infos_5194_);
v___y_5299_ = v___x_5333_;
v___y_5300_ = v_stderr_5343_;
v___y_5301_ = v___x_5327_;
v___y_5302_ = v_exitCode_5341_;
v___y_5303_ = v_stdout_5342_;
goto v___jp_5298_;
}
else
{
lean_object* v_a_5345_; lean_object* v___x_5346_; 
v_a_5345_ = lean_ctor_get(v___x_5344_, 0);
lean_inc(v_a_5345_);
lean_dec_ref_known(v___x_5344_, 1);
v___x_5346_ = l_Lake_ReservoirResp_fromJson_x3f___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__1(v_a_5345_);
if (lean_obj_tag(v___x_5346_) == 0)
{
lean_dec_ref_known(v___x_5346_, 1);
lean_del_object(v___x_5339_);
lean_dec_ref(v_infos_5194_);
v___y_5299_ = v___x_5333_;
v___y_5300_ = v_stderr_5343_;
v___y_5301_ = v___x_5327_;
v___y_5302_ = v_exitCode_5341_;
v___y_5303_ = v_stdout_5342_;
goto v___jp_5298_;
}
else
{
lean_object* v_a_5347_; 
lean_dec_ref(v_stderr_5343_);
lean_dec_ref(v_stdout_5342_);
v_a_5347_ = lean_ctor_get(v___x_5346_, 0);
lean_inc(v_a_5347_);
lean_dec_ref_known(v___x_5346_, 1);
if (lean_obj_tag(v_a_5347_) == 0)
{
lean_object* v_a_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; uint8_t v___x_5351_; 
v_a_5348_ = lean_ctor_get(v_a_5347_, 0);
lean_inc(v_a_5348_);
lean_dec_ref_known(v_a_5347_, 1);
v___x_5349_ = lean_array_get_size(v_infos_5194_);
v___x_5350_ = lean_array_get_size(v_a_5348_);
v___x_5351_ = lean_nat_dec_eq(v___x_5349_, v___x_5350_);
if (v___x_5351_ == 0)
{
lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; uint8_t v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5367_; 
lean_dec(v_a_5348_);
lean_dec_ref(v_infos_5194_);
v___x_5352_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__5));
v___x_5353_ = lean_string_append(v___x_5352_, v_url_5193_);
lean_dec_ref(v_url_5193_);
v___x_5354_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__10));
v___x_5355_ = lean_string_append(v___x_5353_, v___x_5354_);
v___x_5356_ = l_Nat_reprFast(v___x_5349_);
v___x_5357_ = lean_string_append(v___x_5355_, v___x_5356_);
lean_dec_ref(v___x_5356_);
v___x_5358_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__11));
v___x_5359_ = lean_string_append(v___x_5357_, v___x_5358_);
v___x_5360_ = l_Nat_reprFast(v___x_5350_);
v___x_5361_ = lean_string_append(v___x_5359_, v___x_5360_);
lean_dec_ref(v___x_5360_);
v___x_5362_ = 3;
v___x_5363_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5363_, 0, v___x_5361_);
lean_ctor_set_uint8(v___x_5363_, sizeof(void*)*1, v___x_5362_);
lean_inc_ref(v___y_5197_);
v___x_5364_ = lean_apply_2(v___y_5197_, v___x_5363_, lean_box(0));
v___x_5365_ = lean_box(0);
if (v_isShared_5340_ == 0)
{
lean_ctor_set_tag(v___x_5339_, 1);
lean_ctor_set(v___x_5339_, 0, v___x_5365_);
v___x_5367_ = v___x_5339_;
goto v_reusejp_5366_;
}
else
{
lean_object* v_reuseFailAlloc_5368_; 
v_reuseFailAlloc_5368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5368_, 0, v___x_5365_);
v___x_5367_ = v_reuseFailAlloc_5368_;
goto v_reusejp_5366_;
}
v_reusejp_5366_:
{
return v___x_5367_;
}
}
else
{
lean_object* v___x_5369_; lean_object* v___x_5371_; 
lean_dec_ref(v_url_5193_);
v___x_5369_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(v_a_5348_, v___x_5349_, v___x_5349_, v_infos_5194_);
lean_dec(v_a_5348_);
if (v_isShared_5340_ == 0)
{
lean_ctor_set(v___x_5339_, 0, v___x_5369_);
v___x_5371_ = v___x_5339_;
goto v_reusejp_5370_;
}
else
{
lean_object* v_reuseFailAlloc_5372_; 
v_reuseFailAlloc_5372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5372_, 0, v___x_5369_);
v___x_5371_ = v_reuseFailAlloc_5372_;
goto v_reusejp_5370_;
}
v_reusejp_5370_:
{
return v___x_5371_;
}
}
}
else
{
lean_object* v_status_5373_; lean_object* v_message_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; uint8_t v___x_5384_; lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5389_; 
lean_dec_ref(v_infos_5194_);
v_status_5373_ = lean_ctor_get(v_a_5347_, 0);
lean_inc(v_status_5373_);
v_message_5374_ = lean_ctor_get(v_a_5347_, 1);
lean_inc_ref(v_message_5374_);
lean_dec_ref_known(v_a_5347_, 2);
v___x_5375_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__9));
v___x_5376_ = l_Nat_reprFast(v_status_5373_);
v___x_5377_ = lean_string_append(v___x_5375_, v___x_5376_);
lean_dec_ref(v___x_5376_);
v___x_5378_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__12));
v___x_5379_ = lean_string_append(v___x_5377_, v___x_5378_);
v___x_5380_ = lean_string_append(v___x_5379_, v_url_5193_);
lean_dec_ref(v_url_5193_);
v___x_5381_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___closed__13));
v___x_5382_ = lean_string_append(v___x_5380_, v___x_5381_);
v___x_5383_ = lean_string_append(v___x_5382_, v_message_5374_);
lean_dec_ref(v_message_5374_);
v___x_5384_ = 3;
v___x_5385_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5385_, 0, v___x_5383_);
lean_ctor_set_uint8(v___x_5385_, sizeof(void*)*1, v___x_5384_);
lean_inc_ref(v___y_5197_);
v___x_5386_ = lean_apply_2(v___y_5197_, v___x_5385_, lean_box(0));
v___x_5387_ = lean_box(0);
if (v_isShared_5340_ == 0)
{
lean_ctor_set_tag(v___x_5339_, 1);
lean_ctor_set(v___x_5339_, 0, v___x_5387_);
v___x_5389_ = v___x_5339_;
goto v_reusejp_5388_;
}
else
{
lean_object* v_reuseFailAlloc_5390_; 
v_reuseFailAlloc_5390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5390_, 0, v___x_5387_);
v___x_5389_ = v_reuseFailAlloc_5390_;
goto v_reusejp_5388_;
}
v_reusejp_5388_:
{
return v___x_5389_;
}
}
}
}
}
}
else
{
lean_object* v_a_5392_; lean_object* v___x_5394_; uint8_t v_isShared_5395_; uint8_t v_isSharedCheck_5404_; 
lean_dec_ref(v_infos_5194_);
lean_dec_ref(v_url_5193_);
v_a_5392_ = lean_ctor_get(v___x_5336_, 0);
v_isSharedCheck_5404_ = !lean_is_exclusive(v___x_5336_);
if (v_isSharedCheck_5404_ == 0)
{
v___x_5394_ = v___x_5336_;
v_isShared_5395_ = v_isSharedCheck_5404_;
goto v_resetjp_5393_;
}
else
{
lean_inc(v_a_5392_);
lean_dec(v___x_5336_);
v___x_5394_ = lean_box(0);
v_isShared_5395_ = v_isSharedCheck_5404_;
goto v_resetjp_5393_;
}
v_resetjp_5393_:
{
lean_object* v___x_5396_; uint8_t v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5402_; 
v___x_5396_ = lean_io_error_to_string(v_a_5392_);
v___x_5397_ = 3;
v___x_5398_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5398_, 0, v___x_5396_);
lean_ctor_set_uint8(v___x_5398_, sizeof(void*)*1, v___x_5397_);
lean_inc_ref(v___y_5197_);
v___x_5399_ = lean_apply_2(v___y_5197_, v___x_5398_, lean_box(0));
v___x_5400_ = lean_box(0);
if (v_isShared_5395_ == 0)
{
lean_ctor_set(v___x_5394_, 0, v___x_5400_);
v___x_5402_ = v___x_5394_;
goto v_reusejp_5401_;
}
else
{
lean_object* v_reuseFailAlloc_5403_; 
v_reuseFailAlloc_5403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5403_, 0, v___x_5400_);
v___x_5402_ = v_reuseFailAlloc_5403_;
goto v_reusejp_5401_;
}
v_reusejp_5401_:
{
return v___x_5402_;
}
}
}
}
v___jp_5407_:
{
lean_object* v___x_5412_; uint8_t v___x_5413_; 
v___x_5412_ = lean_array_get_size(v___y_5409_);
v___x_5413_ = lean_nat_dec_lt(v___y_5410_, v___x_5412_);
if (v___x_5413_ == 0)
{
v___y_5322_ = v___y_5408_;
v_a_5323_ = v_val_5411_;
goto v___jp_5321_;
}
else
{
lean_object* v___x_5414_; size_t v___x_5415_; lean_object* v___x_5416_; 
v___x_5414_ = lean_box(0);
v___x_5415_ = lean_usize_of_nat(v___x_5412_);
v___x_5416_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___y_5409_, v___x_5406_, v___x_5415_, v___x_5414_, v___y_5197_);
if (lean_obj_tag(v___x_5416_) == 0)
{
lean_dec_ref_known(v___x_5416_, 1);
v___y_5322_ = v___y_5408_;
v_a_5323_ = v_val_5411_;
goto v___jp_5321_;
}
else
{
lean_object* v_a_5417_; lean_object* v___x_5419_; uint8_t v_isShared_5420_; uint8_t v_isSharedCheck_5424_; 
lean_dec_ref(v_val_5411_);
lean_dec_ref(v___y_5408_);
lean_dec_ref(v_infos_5194_);
lean_dec_ref(v_url_5193_);
v_a_5417_ = lean_ctor_get(v___x_5416_, 0);
v_isSharedCheck_5424_ = !lean_is_exclusive(v___x_5416_);
if (v_isSharedCheck_5424_ == 0)
{
v___x_5419_ = v___x_5416_;
v_isShared_5420_ = v_isSharedCheck_5424_;
goto v_resetjp_5418_;
}
else
{
lean_inc(v_a_5417_);
lean_dec(v___x_5416_);
v___x_5419_ = lean_box(0);
v_isShared_5420_ = v_isSharedCheck_5424_;
goto v_resetjp_5418_;
}
v_resetjp_5418_:
{
lean_object* v___x_5422_; 
if (v_isShared_5420_ == 0)
{
v___x_5422_ = v___x_5419_;
goto v_reusejp_5421_;
}
else
{
lean_object* v_reuseFailAlloc_5423_; 
v_reuseFailAlloc_5423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5423_, 0, v_a_5417_);
v___x_5422_ = v_reuseFailAlloc_5423_;
goto v_reusejp_5421_;
}
v_reusejp_5421_:
{
return v___x_5422_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___boxed(lean_object* v_url_5489_, lean_object* v_infos_5490_, lean_object* v_h_5491_, lean_object* v_path_5492_, lean_object* v___y_5493_, lean_object* v___y_5494_){
_start:
{
lean_object* v_res_5495_; 
v_res_5495_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0(v_url_5489_, v_infos_5490_, v_h_5491_, v_path_5492_, v___y_5493_);
lean_dec_ref(v___y_5493_);
lean_dec_ref(v_path_5492_);
lean_dec(v_h_5491_);
return v_res_5495_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls(lean_object* v_url_5496_, lean_object* v_infos_5497_, lean_object* v___y_5498_){
_start:
{
lean_object* v___f_5500_; lean_object* v___x_5501_; 
v___f_5500_ = lean_alloc_closure((void*)(l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___lam__0___boxed), 6, 2);
lean_closure_set(v___f_5500_, 0, v_url_5496_);
lean_closure_set(v___f_5500_, 1, v_infos_5497_);
v___x_5501_ = l_IO_FS_withTempFile___at___00__private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts_spec__2___redArg(v___f_5500_, v___y_5498_);
return v___x_5501_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls___boxed(lean_object* v_url_5502_, lean_object* v_infos_5503_, lean_object* v___y_5504_, lean_object* v___y_5505_){
_start:
{
lean_object* v_res_5506_; 
v_res_5506_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls(v_url_5502_, v_infos_5503_, v___y_5504_);
lean_dec_ref(v___y_5504_);
return v_res_5506_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2(lean_object* v_a_5507_, lean_object* v___x_5508_, lean_object* v_n_5509_, lean_object* v_j_5510_, lean_object* v_a_5511_, lean_object* v_a_5512_){
_start:
{
lean_object* v___x_5513_; 
v___x_5513_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___redArg(v_a_5507_, v_n_5509_, v_j_5510_, v_a_5512_);
return v___x_5513_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2___boxed(lean_object* v_a_5514_, lean_object* v___x_5515_, lean_object* v_n_5516_, lean_object* v_j_5517_, lean_object* v_a_5518_, lean_object* v_a_5519_){
_start:
{
lean_object* v_res_5520_; 
v_res_5520_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls_spec__2(v_a_5514_, v___x_5515_, v_n_5516_, v_j_5517_, v_a_5518_, v_a_5519_);
lean_dec(v_n_5516_);
lean_dec(v___x_5515_);
lean_dec_ref(v_a_5514_);
return v_res_5520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0(lean_object* v_as_5522_, size_t v_i_5523_, size_t v_stop_5524_, lean_object* v_b_5525_, lean_object* v___y_5526_){
_start:
{
lean_object* v_a_5529_; uint8_t v___x_5533_; 
v___x_5533_ = lean_usize_dec_eq(v_i_5523_, v_stop_5524_);
if (v___x_5533_ == 0)
{
lean_object* v___x_5534_; lean_object* v_a_5538_; uint8_t v_a_5555_; lean_object* v_path_5556_; lean_object* v_extraPaths_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; uint8_t v___x_5560_; 
v___x_5534_ = lean_array_uget_borrowed(v_as_5522_, v_i_5523_);
v_path_5556_ = lean_ctor_get(v___x_5534_, 1);
v_extraPaths_5557_ = lean_ctor_get(v___x_5534_, 2);
v___x_5558_ = lean_array_get_size(v_extraPaths_5557_);
v___x_5559_ = lean_unsigned_to_nat(0u);
v___x_5560_ = lean_nat_dec_eq(v___x_5558_, v___x_5559_);
if (v___x_5560_ == 0)
{
lean_object* v___x_5561_; lean_object* v_val_5563_; lean_object* v___x_5577_; 
v___x_5561_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5577_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_createExtraPaths(v_path_5556_, v_extraPaths_5557_);
if (lean_obj_tag(v___x_5577_) == 0)
{
lean_object* v_a_5578_; lean_object* v___x_5580_; uint8_t v_isShared_5581_; uint8_t v_isSharedCheck_5585_; 
v_a_5578_ = lean_ctor_get(v___x_5577_, 0);
v_isSharedCheck_5585_ = !lean_is_exclusive(v___x_5577_);
if (v_isSharedCheck_5585_ == 0)
{
v___x_5580_ = v___x_5577_;
v_isShared_5581_ = v_isSharedCheck_5585_;
goto v_resetjp_5579_;
}
else
{
lean_inc(v_a_5578_);
lean_dec(v___x_5577_);
v___x_5580_ = lean_box(0);
v_isShared_5581_ = v_isSharedCheck_5585_;
goto v_resetjp_5579_;
}
v_resetjp_5579_:
{
lean_object* v___x_5583_; 
if (v_isShared_5581_ == 0)
{
lean_ctor_set_tag(v___x_5580_, 1);
v___x_5583_ = v___x_5580_;
goto v_reusejp_5582_;
}
else
{
lean_object* v_reuseFailAlloc_5584_; 
v_reuseFailAlloc_5584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5584_, 0, v_a_5578_);
v___x_5583_ = v_reuseFailAlloc_5584_;
goto v_reusejp_5582_;
}
v_reusejp_5582_:
{
v_val_5563_ = v___x_5583_;
goto v___jp_5562_;
}
}
}
else
{
lean_object* v_a_5586_; lean_object* v___x_5588_; uint8_t v_isShared_5589_; uint8_t v_isSharedCheck_5593_; 
v_a_5586_ = lean_ctor_get(v___x_5577_, 0);
v_isSharedCheck_5593_ = !lean_is_exclusive(v___x_5577_);
if (v_isSharedCheck_5593_ == 0)
{
v___x_5588_ = v___x_5577_;
v_isShared_5589_ = v_isSharedCheck_5593_;
goto v_resetjp_5587_;
}
else
{
lean_inc(v_a_5586_);
lean_dec(v___x_5577_);
v___x_5588_ = lean_box(0);
v_isShared_5589_ = v_isSharedCheck_5593_;
goto v_resetjp_5587_;
}
v_resetjp_5587_:
{
lean_object* v___x_5591_; 
if (v_isShared_5589_ == 0)
{
lean_ctor_set_tag(v___x_5588_, 0);
v___x_5591_ = v___x_5588_;
goto v_reusejp_5590_;
}
else
{
lean_object* v_reuseFailAlloc_5592_; 
v_reuseFailAlloc_5592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5592_, 0, v_a_5586_);
v___x_5591_ = v_reuseFailAlloc_5592_;
goto v_reusejp_5590_;
}
v_reusejp_5590_:
{
v_val_5563_ = v___x_5591_;
goto v___jp_5562_;
}
}
}
v___jp_5562_:
{
uint8_t v___x_5564_; 
v___x_5564_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_5564_ == 0)
{
v_a_5538_ = v_val_5563_;
goto v___jp_5537_;
}
else
{
lean_object* v___x_5565_; size_t v___x_5566_; size_t v___x_5567_; lean_object* v___x_5568_; 
v___x_5565_ = lean_box(0);
v___x_5566_ = ((size_t)0ULL);
v___x_5567_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_5568_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_5561_, v___x_5566_, v___x_5567_, v___x_5565_, v___y_5526_);
if (lean_obj_tag(v___x_5568_) == 0)
{
lean_dec_ref_known(v___x_5568_, 1);
v_a_5538_ = v_val_5563_;
goto v___jp_5537_;
}
else
{
lean_object* v_a_5569_; lean_object* v___x_5571_; uint8_t v_isShared_5572_; uint8_t v_isSharedCheck_5576_; 
lean_dec_ref(v_val_5563_);
lean_dec_ref(v_b_5525_);
v_a_5569_ = lean_ctor_get(v___x_5568_, 0);
v_isSharedCheck_5576_ = !lean_is_exclusive(v___x_5568_);
if (v_isSharedCheck_5576_ == 0)
{
v___x_5571_ = v___x_5568_;
v_isShared_5572_ = v_isSharedCheck_5576_;
goto v_resetjp_5570_;
}
else
{
lean_inc(v_a_5569_);
lean_dec(v___x_5568_);
v___x_5571_ = lean_box(0);
v_isShared_5572_ = v_isSharedCheck_5576_;
goto v_resetjp_5570_;
}
v_resetjp_5570_:
{
lean_object* v___x_5574_; 
if (v_isShared_5572_ == 0)
{
v___x_5574_ = v___x_5571_;
goto v_reusejp_5573_;
}
else
{
lean_object* v_reuseFailAlloc_5575_; 
v_reuseFailAlloc_5575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5575_, 0, v_a_5569_);
v___x_5574_ = v_reuseFailAlloc_5575_;
goto v_reusejp_5573_;
}
v_reusejp_5573_:
{
return v___x_5574_;
}
}
}
}
}
}
else
{
lean_object* v___x_5594_; uint8_t v___x_5595_; uint8_t v___x_5596_; 
v___x_5594_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5595_ = l_System_FilePath_pathExists(v_path_5556_);
v___x_5596_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_5596_ == 0)
{
v_a_5555_ = v___x_5595_;
goto v___jp_5554_;
}
else
{
lean_object* v___x_5597_; size_t v___x_5598_; size_t v___x_5599_; lean_object* v___x_5600_; 
v___x_5597_ = lean_box(0);
v___x_5598_ = ((size_t)0ULL);
v___x_5599_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_5600_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_5594_, v___x_5598_, v___x_5599_, v___x_5597_, v___y_5526_);
if (lean_obj_tag(v___x_5600_) == 0)
{
lean_dec_ref_known(v___x_5600_, 1);
v_a_5555_ = v___x_5595_;
goto v___jp_5554_;
}
else
{
lean_object* v_a_5601_; lean_object* v___x_5603_; uint8_t v_isShared_5604_; uint8_t v_isSharedCheck_5608_; 
lean_dec_ref(v_b_5525_);
v_a_5601_ = lean_ctor_get(v___x_5600_, 0);
v_isSharedCheck_5608_ = !lean_is_exclusive(v___x_5600_);
if (v_isSharedCheck_5608_ == 0)
{
v___x_5603_ = v___x_5600_;
v_isShared_5604_ = v_isSharedCheck_5608_;
goto v_resetjp_5602_;
}
else
{
lean_inc(v_a_5601_);
lean_dec(v___x_5600_);
v___x_5603_ = lean_box(0);
v_isShared_5604_ = v_isSharedCheck_5608_;
goto v_resetjp_5602_;
}
v_resetjp_5602_:
{
lean_object* v___x_5606_; 
if (v_isShared_5604_ == 0)
{
v___x_5606_ = v___x_5603_;
goto v_reusejp_5605_;
}
else
{
lean_object* v_reuseFailAlloc_5607_; 
v_reuseFailAlloc_5607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5607_, 0, v_a_5601_);
v___x_5606_ = v_reuseFailAlloc_5607_;
goto v_reusejp_5605_;
}
v_reusejp_5605_:
{
return v___x_5606_;
}
}
}
}
}
v___jp_5535_:
{
lean_object* v___x_5536_; 
lean_inc(v___x_5534_);
v___x_5536_ = lean_array_push(v_b_5525_, v___x_5534_);
v_a_5529_ = v___x_5536_;
goto v___jp_5528_;
}
v___jp_5537_:
{
if (lean_obj_tag(v_a_5538_) == 0)
{
lean_object* v_a_5539_; lean_object* v___x_5541_; uint8_t v_isShared_5542_; uint8_t v_isSharedCheck_5553_; 
v_a_5539_ = lean_ctor_get(v_a_5538_, 0);
v_isSharedCheck_5553_ = !lean_is_exclusive(v_a_5538_);
if (v_isSharedCheck_5553_ == 0)
{
v___x_5541_ = v_a_5538_;
v_isShared_5542_ = v_isSharedCheck_5553_;
goto v_resetjp_5540_;
}
else
{
lean_inc(v_a_5539_);
lean_dec(v_a_5538_);
v___x_5541_ = lean_box(0);
v_isShared_5542_ = v_isSharedCheck_5553_;
goto v_resetjp_5540_;
}
v_resetjp_5540_:
{
if (lean_obj_tag(v_a_5539_) == 11)
{
lean_dec_ref_known(v_a_5539_, 2);
lean_del_object(v___x_5541_);
goto v___jp_5535_;
}
else
{
lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; uint8_t v___x_5546_; lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5551_; 
lean_dec_ref(v_b_5525_);
v___x_5543_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0___closed__0));
v___x_5544_ = lean_io_error_to_string(v_a_5539_);
v___x_5545_ = lean_string_append(v___x_5543_, v___x_5544_);
lean_dec_ref(v___x_5544_);
v___x_5546_ = 3;
v___x_5547_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5547_, 0, v___x_5545_);
lean_ctor_set_uint8(v___x_5547_, sizeof(void*)*1, v___x_5546_);
lean_inc_ref(v___y_5526_);
v___x_5548_ = lean_apply_2(v___y_5526_, v___x_5547_, lean_box(0));
v___x_5549_ = lean_box(0);
if (v_isShared_5542_ == 0)
{
lean_ctor_set_tag(v___x_5541_, 1);
lean_ctor_set(v___x_5541_, 0, v___x_5549_);
v___x_5551_ = v___x_5541_;
goto v_reusejp_5550_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v___x_5549_);
v___x_5551_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5550_;
}
v_reusejp_5550_:
{
return v___x_5551_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_5538_, 1);
v_a_5529_ = v_b_5525_;
goto v___jp_5528_;
}
}
v___jp_5554_:
{
if (v_a_5555_ == 0)
{
goto v___jp_5535_;
}
else
{
v_a_5529_ = v_b_5525_;
goto v___jp_5528_;
}
}
}
else
{
lean_object* v___x_5609_; 
v___x_5609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5609_, 0, v_b_5525_);
return v___x_5609_;
}
v___jp_5528_:
{
size_t v___x_5530_; size_t v___x_5531_; 
v___x_5530_ = ((size_t)1ULL);
v___x_5531_ = lean_usize_add(v_i_5523_, v___x_5530_);
v_i_5523_ = v___x_5531_;
v_b_5525_ = v_a_5529_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0___boxed(lean_object* v_as_5610_, lean_object* v_i_5611_, lean_object* v_stop_5612_, lean_object* v_b_5613_, lean_object* v___y_5614_, lean_object* v___y_5615_){
_start:
{
size_t v_i_boxed_5616_; size_t v_stop_boxed_5617_; lean_object* v_res_5618_; 
v_i_boxed_5616_ = lean_unbox_usize(v_i_5611_);
lean_dec(v_i_5611_);
v_stop_boxed_5617_ = lean_unbox_usize(v_stop_5612_);
lean_dec(v_stop_5612_);
v_res_5618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0(v_as_5610_, v_i_boxed_5616_, v_stop_boxed_5617_, v_b_5613_, v___y_5614_);
lean_dec_ref(v___y_5614_);
lean_dec_ref(v_as_5610_);
return v_res_5618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(lean_object* v_service_5619_, lean_object* v_scope_5620_, lean_object* v_cache_5621_, uint8_t v_force_5622_, lean_object* v_as_5623_, size_t v_i_5624_, size_t v_stop_5625_, lean_object* v_b_5626_, lean_object* v___y_5627_){
_start:
{
lean_object* v_a_5630_; lean_object* v___y_5635_; lean_object* v___y_5646_; lean_object* v___y_5657_; uint8_t v___x_5667_; 
v___x_5667_ = lean_usize_dec_eq(v_i_5624_, v_stop_5625_);
if (v___x_5667_ == 0)
{
lean_object* v___x_5668_; uint64_t v_hash_5669_; lean_object* v_ext_5670_; lean_object* v_url_5671_; lean_object* v___y_5673_; uint8_t v_a_5674_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___y_5750_; lean_object* v___x_5817_; lean_object* v___x_5818_; uint8_t v___x_5819_; 
v___x_5668_ = lean_array_uget_borrowed(v_as_5623_, v_i_5624_);
v_hash_5669_ = lean_ctor_get_uint64(v___x_5668_, sizeof(void*)*1);
v_ext_5670_ = lean_ctor_get(v___x_5668_, 0);
lean_inc_ref(v_scope_5620_);
lean_inc_ref(v_service_5619_);
v_url_5671_ = l_Lake_CacheService_artifactUrl(v_hash_5669_, v_service_5619_, v_scope_5620_);
v___x_5747_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
lean_inc_ref(v_cache_5621_);
v___x_5748_ = l_System_FilePath_join(v_cache_5621_, v___x_5747_);
v___x_5817_ = lean_string_utf8_byte_size(v_ext_5670_);
v___x_5818_ = lean_unsigned_to_nat(0u);
v___x_5819_ = lean_nat_dec_eq(v___x_5817_, v___x_5818_);
if (v___x_5819_ == 0)
{
lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; 
v___x_5820_ = l_Lake_lowerHexUInt64(v_hash_5669_);
v___x_5821_ = ((lean_object*)(l_Lake_Cache_artifactPath___closed__0));
v___x_5822_ = lean_string_append(v___x_5820_, v___x_5821_);
v___x_5823_ = lean_string_append(v___x_5822_, v_ext_5670_);
v___y_5750_ = v___x_5823_;
goto v___jp_5749_;
}
else
{
lean_object* v___x_5824_; 
v___x_5824_ = l_Lake_lowerHexUInt64(v_hash_5669_);
v___y_5750_ = v___x_5824_;
goto v___jp_5749_;
}
v___jp_5672_:
{
if (v_a_5674_ == 0)
{
lean_object* v_infos_5675_; lean_object* v_indices_5676_; lean_object* v___x_5677_; 
v_infos_5675_ = lean_ctor_get(v_b_5626_, 0);
v_indices_5676_ = lean_ctor_get(v_b_5626_, 1);
v___x_5677_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_indices_5676_, v_hash_5669_);
if (lean_obj_tag(v___x_5677_) == 1)
{
lean_object* v_val_5678_; lean_object* v___x_5679_; uint8_t v___x_5680_; 
lean_dec_ref(v_url_5671_);
v_val_5678_ = lean_ctor_get(v___x_5677_, 0);
lean_inc(v_val_5678_);
lean_dec_ref_known(v___x_5677_, 1);
v___x_5679_ = lean_array_get_size(v_infos_5675_);
v___x_5680_ = lean_nat_dec_lt(v_val_5678_, v___x_5679_);
if (v___x_5680_ == 0)
{
lean_dec(v_val_5678_);
lean_dec_ref(v___y_5673_);
lean_inc_ref(v_infos_5675_);
v___y_5646_ = v_infos_5675_;
goto v___jp_5645_;
}
else
{
lean_object* v_v_5681_; lean_object* v_url_5682_; uint64_t v_hash_5683_; lean_object* v_path_5684_; lean_object* v_extraPaths_5685_; lean_object* v___x_5687_; uint8_t v_isShared_5688_; uint8_t v_isSharedCheck_5696_; 
v_v_5681_ = lean_array_fget(v_infos_5675_, v_val_5678_);
v_url_5682_ = lean_ctor_get(v_v_5681_, 0);
v_hash_5683_ = lean_ctor_get_uint64(v_v_5681_, sizeof(void*)*3);
v_path_5684_ = lean_ctor_get(v_v_5681_, 1);
v_extraPaths_5685_ = lean_ctor_get(v_v_5681_, 2);
v_isSharedCheck_5696_ = !lean_is_exclusive(v_v_5681_);
if (v_isSharedCheck_5696_ == 0)
{
v___x_5687_ = v_v_5681_;
v_isShared_5688_ = v_isSharedCheck_5696_;
goto v_resetjp_5686_;
}
else
{
lean_inc(v_extraPaths_5685_);
lean_inc(v_path_5684_);
lean_inc(v_url_5682_);
lean_dec(v_v_5681_);
v___x_5687_ = lean_box(0);
v_isShared_5688_ = v_isSharedCheck_5696_;
goto v_resetjp_5686_;
}
v_resetjp_5686_:
{
lean_object* v___x_5689_; lean_object* v_xs_x27_5690_; lean_object* v___x_5691_; lean_object* v___x_5693_; 
v___x_5689_ = lean_box(0);
lean_inc_ref(v_infos_5675_);
v_xs_x27_5690_ = lean_array_fset(v_infos_5675_, v_val_5678_, v___x_5689_);
v___x_5691_ = lean_array_push(v_extraPaths_5685_, v___y_5673_);
if (v_isShared_5688_ == 0)
{
lean_ctor_set(v___x_5687_, 2, v___x_5691_);
v___x_5693_ = v___x_5687_;
goto v_reusejp_5692_;
}
else
{
lean_object* v_reuseFailAlloc_5695_; 
v_reuseFailAlloc_5695_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_5695_, 0, v_url_5682_);
lean_ctor_set(v_reuseFailAlloc_5695_, 1, v_path_5684_);
lean_ctor_set(v_reuseFailAlloc_5695_, 2, v___x_5691_);
lean_ctor_set_uint64(v_reuseFailAlloc_5695_, sizeof(void*)*3, v_hash_5683_);
v___x_5693_ = v_reuseFailAlloc_5695_;
goto v_reusejp_5692_;
}
v_reusejp_5692_:
{
lean_object* v___x_5694_; 
v___x_5694_ = lean_array_fset(v_xs_x27_5690_, v_val_5678_, v___x_5693_);
lean_dec(v_val_5678_);
v___y_5646_ = v___x_5694_;
goto v___jp_5645_;
}
}
}
}
else
{
lean_object* v___x_5698_; uint8_t v_isShared_5699_; uint8_t v_isSharedCheck_5708_; 
lean_inc_ref(v_indices_5676_);
lean_inc_ref(v_infos_5675_);
lean_dec(v___x_5677_);
v_isSharedCheck_5708_ = !lean_is_exclusive(v_b_5626_);
if (v_isSharedCheck_5708_ == 0)
{
lean_object* v_unused_5709_; lean_object* v_unused_5710_; 
v_unused_5709_ = lean_ctor_get(v_b_5626_, 1);
lean_dec(v_unused_5709_);
v_unused_5710_ = lean_ctor_get(v_b_5626_, 0);
lean_dec(v_unused_5710_);
v___x_5698_ = v_b_5626_;
v_isShared_5699_ = v_isSharedCheck_5708_;
goto v_resetjp_5697_;
}
else
{
lean_dec(v_b_5626_);
v___x_5698_ = lean_box(0);
v_isShared_5699_ = v_isSharedCheck_5708_;
goto v_resetjp_5697_;
}
v_resetjp_5697_:
{
lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5706_; 
v___x_5700_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_5701_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5701_, 0, v_url_5671_);
lean_ctor_set(v___x_5701_, 1, v___y_5673_);
lean_ctor_set(v___x_5701_, 2, v___x_5700_);
lean_ctor_set_uint64(v___x_5701_, sizeof(void*)*3, v_hash_5669_);
lean_inc_ref(v_infos_5675_);
v___x_5702_ = lean_array_push(v_infos_5675_, v___x_5701_);
v___x_5703_ = lean_array_get_size(v_infos_5675_);
lean_dec_ref(v_infos_5675_);
v___x_5704_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_5676_, v_hash_5669_, v___x_5703_);
if (v_isShared_5699_ == 0)
{
lean_ctor_set(v___x_5698_, 1, v___x_5704_);
lean_ctor_set(v___x_5698_, 0, v___x_5702_);
v___x_5706_ = v___x_5698_;
goto v_reusejp_5705_;
}
else
{
lean_object* v_reuseFailAlloc_5707_; 
v_reuseFailAlloc_5707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5707_, 0, v___x_5702_);
lean_ctor_set(v_reuseFailAlloc_5707_, 1, v___x_5704_);
v___x_5706_ = v_reuseFailAlloc_5707_;
goto v_reusejp_5705_;
}
v_reusejp_5705_:
{
v_a_5630_ = v___x_5706_;
goto v___jp_5629_;
}
}
}
}
else
{
lean_object* v_infos_5711_; lean_object* v_indices_5712_; lean_object* v___x_5713_; 
v_infos_5711_ = lean_ctor_get(v_b_5626_, 0);
v_indices_5712_ = lean_ctor_get(v_b_5626_, 1);
v___x_5713_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_indices_5712_, v_hash_5669_);
if (lean_obj_tag(v___x_5713_) == 1)
{
lean_object* v_val_5714_; lean_object* v___x_5715_; uint8_t v___x_5716_; 
lean_dec_ref(v_url_5671_);
v_val_5714_ = lean_ctor_get(v___x_5713_, 0);
lean_inc(v_val_5714_);
lean_dec_ref_known(v___x_5713_, 1);
v___x_5715_ = lean_array_get_size(v_infos_5711_);
v___x_5716_ = lean_nat_dec_lt(v_val_5714_, v___x_5715_);
if (v___x_5716_ == 0)
{
lean_dec(v_val_5714_);
lean_dec_ref(v___y_5673_);
lean_inc_ref(v_infos_5711_);
v___y_5635_ = v_infos_5711_;
goto v___jp_5634_;
}
else
{
lean_object* v_v_5717_; lean_object* v_url_5718_; uint64_t v_hash_5719_; lean_object* v_path_5720_; lean_object* v_extraPaths_5721_; lean_object* v___x_5723_; uint8_t v_isShared_5724_; uint8_t v_isSharedCheck_5732_; 
v_v_5717_ = lean_array_fget(v_infos_5711_, v_val_5714_);
v_url_5718_ = lean_ctor_get(v_v_5717_, 0);
v_hash_5719_ = lean_ctor_get_uint64(v_v_5717_, sizeof(void*)*3);
v_path_5720_ = lean_ctor_get(v_v_5717_, 1);
v_extraPaths_5721_ = lean_ctor_get(v_v_5717_, 2);
v_isSharedCheck_5732_ = !lean_is_exclusive(v_v_5717_);
if (v_isSharedCheck_5732_ == 0)
{
v___x_5723_ = v_v_5717_;
v_isShared_5724_ = v_isSharedCheck_5732_;
goto v_resetjp_5722_;
}
else
{
lean_inc(v_extraPaths_5721_);
lean_inc(v_path_5720_);
lean_inc(v_url_5718_);
lean_dec(v_v_5717_);
v___x_5723_ = lean_box(0);
v_isShared_5724_ = v_isSharedCheck_5732_;
goto v_resetjp_5722_;
}
v_resetjp_5722_:
{
lean_object* v___x_5725_; lean_object* v_xs_x27_5726_; lean_object* v___x_5727_; lean_object* v___x_5729_; 
v___x_5725_ = lean_box(0);
lean_inc_ref(v_infos_5711_);
v_xs_x27_5726_ = lean_array_fset(v_infos_5711_, v_val_5714_, v___x_5725_);
v___x_5727_ = lean_array_push(v_extraPaths_5721_, v_path_5720_);
if (v_isShared_5724_ == 0)
{
lean_ctor_set(v___x_5723_, 2, v___x_5727_);
lean_ctor_set(v___x_5723_, 1, v___y_5673_);
v___x_5729_ = v___x_5723_;
goto v_reusejp_5728_;
}
else
{
lean_object* v_reuseFailAlloc_5731_; 
v_reuseFailAlloc_5731_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_5731_, 0, v_url_5718_);
lean_ctor_set(v_reuseFailAlloc_5731_, 1, v___y_5673_);
lean_ctor_set(v_reuseFailAlloc_5731_, 2, v___x_5727_);
lean_ctor_set_uint64(v_reuseFailAlloc_5731_, sizeof(void*)*3, v_hash_5719_);
v___x_5729_ = v_reuseFailAlloc_5731_;
goto v_reusejp_5728_;
}
v_reusejp_5728_:
{
lean_object* v___x_5730_; 
v___x_5730_ = lean_array_fset(v_xs_x27_5726_, v_val_5714_, v___x_5729_);
lean_dec(v_val_5714_);
v___y_5635_ = v___x_5730_;
goto v___jp_5634_;
}
}
}
}
else
{
lean_object* v___x_5734_; uint8_t v_isShared_5735_; uint8_t v_isSharedCheck_5744_; 
lean_inc_ref(v_indices_5712_);
lean_inc_ref(v_infos_5711_);
lean_dec(v___x_5713_);
v_isSharedCheck_5744_ = !lean_is_exclusive(v_b_5626_);
if (v_isSharedCheck_5744_ == 0)
{
lean_object* v_unused_5745_; lean_object* v_unused_5746_; 
v_unused_5745_ = lean_ctor_get(v_b_5626_, 1);
lean_dec(v_unused_5745_);
v_unused_5746_ = lean_ctor_get(v_b_5626_, 0);
lean_dec(v_unused_5746_);
v___x_5734_ = v_b_5626_;
v_isShared_5735_ = v_isSharedCheck_5744_;
goto v_resetjp_5733_;
}
else
{
lean_dec(v_b_5626_);
v___x_5734_ = lean_box(0);
v_isShared_5735_ = v_isSharedCheck_5744_;
goto v_resetjp_5733_;
}
v_resetjp_5733_:
{
lean_object* v___x_5736_; lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5742_; 
v___x_5736_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_5737_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5737_, 0, v_url_5671_);
lean_ctor_set(v___x_5737_, 1, v___y_5673_);
lean_ctor_set(v___x_5737_, 2, v___x_5736_);
lean_ctor_set_uint64(v___x_5737_, sizeof(void*)*3, v_hash_5669_);
lean_inc_ref(v_infos_5711_);
v___x_5738_ = lean_array_push(v_infos_5711_, v___x_5737_);
v___x_5739_ = lean_array_get_size(v_infos_5711_);
lean_dec_ref(v_infos_5711_);
v___x_5740_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_5712_, v_hash_5669_, v___x_5739_);
if (v_isShared_5735_ == 0)
{
lean_ctor_set(v___x_5734_, 1, v___x_5740_);
lean_ctor_set(v___x_5734_, 0, v___x_5738_);
v___x_5742_ = v___x_5734_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5743_; 
v_reuseFailAlloc_5743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5743_, 0, v___x_5738_);
lean_ctor_set(v_reuseFailAlloc_5743_, 1, v___x_5740_);
v___x_5742_ = v_reuseFailAlloc_5743_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
v_a_5630_ = v___x_5742_;
goto v___jp_5629_;
}
}
}
}
}
v___jp_5749_:
{
lean_object* v_path_5751_; 
v_path_5751_ = l_System_FilePath_join(v___x_5748_, v___y_5750_);
if (v_force_5622_ == 0)
{
lean_object* v___x_5752_; uint8_t v___x_5753_; uint8_t v___x_5754_; 
v___x_5752_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5753_ = l_System_FilePath_pathExists(v_path_5751_);
v___x_5754_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_5754_ == 0)
{
v___y_5673_ = v_path_5751_;
v_a_5674_ = v___x_5753_;
goto v___jp_5672_;
}
else
{
lean_object* v___x_5755_; size_t v___x_5756_; size_t v___x_5757_; lean_object* v___x_5758_; 
v___x_5755_ = lean_box(0);
v___x_5756_ = ((size_t)0ULL);
v___x_5757_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_5758_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_5752_, v___x_5756_, v___x_5757_, v___x_5755_, v___y_5627_);
if (lean_obj_tag(v___x_5758_) == 0)
{
lean_dec_ref_known(v___x_5758_, 1);
v___y_5673_ = v_path_5751_;
v_a_5674_ = v___x_5753_;
goto v___jp_5672_;
}
else
{
lean_object* v_a_5759_; lean_object* v___x_5761_; uint8_t v_isShared_5762_; uint8_t v_isSharedCheck_5766_; 
lean_dec_ref(v_path_5751_);
lean_dec_ref(v_url_5671_);
lean_dec_ref(v_b_5626_);
lean_dec_ref(v_cache_5621_);
lean_dec_ref(v_scope_5620_);
lean_dec_ref(v_service_5619_);
v_a_5759_ = lean_ctor_get(v___x_5758_, 0);
v_isSharedCheck_5766_ = !lean_is_exclusive(v___x_5758_);
if (v_isSharedCheck_5766_ == 0)
{
v___x_5761_ = v___x_5758_;
v_isShared_5762_ = v_isSharedCheck_5766_;
goto v_resetjp_5760_;
}
else
{
lean_inc(v_a_5759_);
lean_dec(v___x_5758_);
v___x_5761_ = lean_box(0);
v_isShared_5762_ = v_isSharedCheck_5766_;
goto v_resetjp_5760_;
}
v_resetjp_5760_:
{
lean_object* v___x_5764_; 
if (v_isShared_5762_ == 0)
{
v___x_5764_ = v___x_5761_;
goto v_reusejp_5763_;
}
else
{
lean_object* v_reuseFailAlloc_5765_; 
v_reuseFailAlloc_5765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5765_, 0, v_a_5759_);
v___x_5764_ = v_reuseFailAlloc_5765_;
goto v_reusejp_5763_;
}
v_reusejp_5763_:
{
return v___x_5764_;
}
}
}
}
}
else
{
lean_object* v___x_5767_; 
v___x_5767_ = l_Lake_removeFileIfExists(v_path_5751_);
if (lean_obj_tag(v___x_5767_) == 0)
{
lean_object* v_infos_5768_; lean_object* v_indices_5769_; lean_object* v___x_5770_; 
lean_dec_ref_known(v___x_5767_, 1);
v_infos_5768_ = lean_ctor_get(v_b_5626_, 0);
v_indices_5769_ = lean_ctor_get(v_b_5626_, 1);
v___x_5770_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lake_CacheMap_get_x3f_spec__0___redArg(v_indices_5769_, v_hash_5669_);
if (lean_obj_tag(v___x_5770_) == 1)
{
lean_object* v_val_5771_; lean_object* v___x_5772_; uint8_t v___x_5773_; 
lean_dec_ref(v_url_5671_);
v_val_5771_ = lean_ctor_get(v___x_5770_, 0);
lean_inc(v_val_5771_);
lean_dec_ref_known(v___x_5770_, 1);
v___x_5772_ = lean_array_get_size(v_infos_5768_);
v___x_5773_ = lean_nat_dec_lt(v_val_5771_, v___x_5772_);
if (v___x_5773_ == 0)
{
lean_dec(v_val_5771_);
lean_dec_ref(v_path_5751_);
lean_inc_ref(v_infos_5768_);
v___y_5657_ = v_infos_5768_;
goto v___jp_5656_;
}
else
{
lean_object* v_v_5774_; lean_object* v_url_5775_; uint64_t v_hash_5776_; lean_object* v_path_5777_; lean_object* v_extraPaths_5778_; lean_object* v___x_5780_; uint8_t v_isShared_5781_; uint8_t v_isSharedCheck_5789_; 
v_v_5774_ = lean_array_fget(v_infos_5768_, v_val_5771_);
v_url_5775_ = lean_ctor_get(v_v_5774_, 0);
v_hash_5776_ = lean_ctor_get_uint64(v_v_5774_, sizeof(void*)*3);
v_path_5777_ = lean_ctor_get(v_v_5774_, 1);
v_extraPaths_5778_ = lean_ctor_get(v_v_5774_, 2);
v_isSharedCheck_5789_ = !lean_is_exclusive(v_v_5774_);
if (v_isSharedCheck_5789_ == 0)
{
v___x_5780_ = v_v_5774_;
v_isShared_5781_ = v_isSharedCheck_5789_;
goto v_resetjp_5779_;
}
else
{
lean_inc(v_extraPaths_5778_);
lean_inc(v_path_5777_);
lean_inc(v_url_5775_);
lean_dec(v_v_5774_);
v___x_5780_ = lean_box(0);
v_isShared_5781_ = v_isSharedCheck_5789_;
goto v_resetjp_5779_;
}
v_resetjp_5779_:
{
lean_object* v___x_5782_; lean_object* v_xs_x27_5783_; lean_object* v___x_5784_; lean_object* v___x_5786_; 
v___x_5782_ = lean_box(0);
lean_inc_ref(v_infos_5768_);
v_xs_x27_5783_ = lean_array_fset(v_infos_5768_, v_val_5771_, v___x_5782_);
v___x_5784_ = lean_array_push(v_extraPaths_5778_, v_path_5751_);
if (v_isShared_5781_ == 0)
{
lean_ctor_set(v___x_5780_, 2, v___x_5784_);
v___x_5786_ = v___x_5780_;
goto v_reusejp_5785_;
}
else
{
lean_object* v_reuseFailAlloc_5788_; 
v_reuseFailAlloc_5788_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_5788_, 0, v_url_5775_);
lean_ctor_set(v_reuseFailAlloc_5788_, 1, v_path_5777_);
lean_ctor_set(v_reuseFailAlloc_5788_, 2, v___x_5784_);
lean_ctor_set_uint64(v_reuseFailAlloc_5788_, sizeof(void*)*3, v_hash_5776_);
v___x_5786_ = v_reuseFailAlloc_5788_;
goto v_reusejp_5785_;
}
v_reusejp_5785_:
{
lean_object* v___x_5787_; 
v___x_5787_ = lean_array_fset(v_xs_x27_5783_, v_val_5771_, v___x_5786_);
lean_dec(v_val_5771_);
v___y_5657_ = v___x_5787_;
goto v___jp_5656_;
}
}
}
}
else
{
lean_object* v___x_5791_; uint8_t v_isShared_5792_; uint8_t v_isSharedCheck_5801_; 
lean_inc_ref(v_indices_5769_);
lean_inc_ref(v_infos_5768_);
lean_dec(v___x_5770_);
v_isSharedCheck_5801_ = !lean_is_exclusive(v_b_5626_);
if (v_isSharedCheck_5801_ == 0)
{
lean_object* v_unused_5802_; lean_object* v_unused_5803_; 
v_unused_5802_ = lean_ctor_get(v_b_5626_, 1);
lean_dec(v_unused_5802_);
v_unused_5803_ = lean_ctor_get(v_b_5626_, 0);
lean_dec(v_unused_5803_);
v___x_5791_ = v_b_5626_;
v_isShared_5792_ = v_isSharedCheck_5801_;
goto v_resetjp_5790_;
}
else
{
lean_dec(v_b_5626_);
v___x_5791_ = lean_box(0);
v_isShared_5792_ = v_isSharedCheck_5801_;
goto v_resetjp_5790_;
}
v_resetjp_5790_:
{
lean_object* v___x_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5799_; 
v___x_5793_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
v___x_5794_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5794_, 0, v_url_5671_);
lean_ctor_set(v___x_5794_, 1, v_path_5751_);
lean_ctor_set(v___x_5794_, 2, v___x_5793_);
lean_ctor_set_uint64(v___x_5794_, sizeof(void*)*3, v_hash_5669_);
lean_inc_ref(v_infos_5768_);
v___x_5795_ = lean_array_push(v_infos_5768_, v___x_5794_);
v___x_5796_ = lean_array_get_size(v_infos_5768_);
lean_dec_ref(v_infos_5768_);
v___x_5797_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_5769_, v_hash_5669_, v___x_5796_);
if (v_isShared_5792_ == 0)
{
lean_ctor_set(v___x_5791_, 1, v___x_5797_);
lean_ctor_set(v___x_5791_, 0, v___x_5795_);
v___x_5799_ = v___x_5791_;
goto v_reusejp_5798_;
}
else
{
lean_object* v_reuseFailAlloc_5800_; 
v_reuseFailAlloc_5800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5800_, 0, v___x_5795_);
lean_ctor_set(v_reuseFailAlloc_5800_, 1, v___x_5797_);
v___x_5799_ = v_reuseFailAlloc_5800_;
goto v_reusejp_5798_;
}
v_reusejp_5798_:
{
v_a_5630_ = v___x_5799_;
goto v___jp_5629_;
}
}
}
}
else
{
lean_object* v_a_5804_; lean_object* v___x_5806_; uint8_t v_isShared_5807_; uint8_t v_isSharedCheck_5816_; 
lean_dec_ref(v_path_5751_);
lean_dec_ref(v_url_5671_);
lean_dec_ref(v_b_5626_);
lean_dec_ref(v_cache_5621_);
lean_dec_ref(v_scope_5620_);
lean_dec_ref(v_service_5619_);
v_a_5804_ = lean_ctor_get(v___x_5767_, 0);
v_isSharedCheck_5816_ = !lean_is_exclusive(v___x_5767_);
if (v_isSharedCheck_5816_ == 0)
{
v___x_5806_ = v___x_5767_;
v_isShared_5807_ = v_isSharedCheck_5816_;
goto v_resetjp_5805_;
}
else
{
lean_inc(v_a_5804_);
lean_dec(v___x_5767_);
v___x_5806_ = lean_box(0);
v_isShared_5807_ = v_isSharedCheck_5816_;
goto v_resetjp_5805_;
}
v_resetjp_5805_:
{
lean_object* v___x_5808_; uint8_t v___x_5809_; lean_object* v___x_5810_; lean_object* v___x_5811_; lean_object* v___x_5812_; lean_object* v___x_5814_; 
v___x_5808_ = lean_io_error_to_string(v_a_5804_);
v___x_5809_ = 3;
v___x_5810_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5810_, 0, v___x_5808_);
lean_ctor_set_uint8(v___x_5810_, sizeof(void*)*1, v___x_5809_);
lean_inc_ref(v___y_5627_);
v___x_5811_ = lean_apply_2(v___y_5627_, v___x_5810_, lean_box(0));
v___x_5812_ = lean_box(0);
if (v_isShared_5807_ == 0)
{
lean_ctor_set(v___x_5806_, 0, v___x_5812_);
v___x_5814_ = v___x_5806_;
goto v_reusejp_5813_;
}
else
{
lean_object* v_reuseFailAlloc_5815_; 
v_reuseFailAlloc_5815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5815_, 0, v___x_5812_);
v___x_5814_ = v_reuseFailAlloc_5815_;
goto v_reusejp_5813_;
}
v_reusejp_5813_:
{
return v___x_5814_;
}
}
}
}
}
}
else
{
lean_object* v___x_5825_; 
lean_dec_ref(v_cache_5621_);
lean_dec_ref(v_scope_5620_);
lean_dec_ref(v_service_5619_);
v___x_5825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5825_, 0, v_b_5626_);
return v___x_5825_;
}
v___jp_5629_:
{
size_t v___x_5631_; size_t v___x_5632_; 
v___x_5631_ = ((size_t)1ULL);
v___x_5632_ = lean_usize_add(v_i_5624_, v___x_5631_);
v_i_5624_ = v___x_5632_;
v_b_5626_ = v_a_5630_;
goto _start;
}
v___jp_5634_:
{
lean_object* v_indices_5636_; lean_object* v___x_5638_; uint8_t v_isShared_5639_; uint8_t v_isSharedCheck_5643_; 
v_indices_5636_ = lean_ctor_get(v_b_5626_, 1);
v_isSharedCheck_5643_ = !lean_is_exclusive(v_b_5626_);
if (v_isSharedCheck_5643_ == 0)
{
lean_object* v_unused_5644_; 
v_unused_5644_ = lean_ctor_get(v_b_5626_, 0);
lean_dec(v_unused_5644_);
v___x_5638_ = v_b_5626_;
v_isShared_5639_ = v_isSharedCheck_5643_;
goto v_resetjp_5637_;
}
else
{
lean_inc(v_indices_5636_);
lean_dec(v_b_5626_);
v___x_5638_ = lean_box(0);
v_isShared_5639_ = v_isSharedCheck_5643_;
goto v_resetjp_5637_;
}
v_resetjp_5637_:
{
lean_object* v___x_5641_; 
if (v_isShared_5639_ == 0)
{
lean_ctor_set(v___x_5638_, 0, v___y_5635_);
v___x_5641_ = v___x_5638_;
goto v_reusejp_5640_;
}
else
{
lean_object* v_reuseFailAlloc_5642_; 
v_reuseFailAlloc_5642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5642_, 0, v___y_5635_);
lean_ctor_set(v_reuseFailAlloc_5642_, 1, v_indices_5636_);
v___x_5641_ = v_reuseFailAlloc_5642_;
goto v_reusejp_5640_;
}
v_reusejp_5640_:
{
v_a_5630_ = v___x_5641_;
goto v___jp_5629_;
}
}
}
v___jp_5645_:
{
lean_object* v_indices_5647_; lean_object* v___x_5649_; uint8_t v_isShared_5650_; uint8_t v_isSharedCheck_5654_; 
v_indices_5647_ = lean_ctor_get(v_b_5626_, 1);
v_isSharedCheck_5654_ = !lean_is_exclusive(v_b_5626_);
if (v_isSharedCheck_5654_ == 0)
{
lean_object* v_unused_5655_; 
v_unused_5655_ = lean_ctor_get(v_b_5626_, 0);
lean_dec(v_unused_5655_);
v___x_5649_ = v_b_5626_;
v_isShared_5650_ = v_isSharedCheck_5654_;
goto v_resetjp_5648_;
}
else
{
lean_inc(v_indices_5647_);
lean_dec(v_b_5626_);
v___x_5649_ = lean_box(0);
v_isShared_5650_ = v_isSharedCheck_5654_;
goto v_resetjp_5648_;
}
v_resetjp_5648_:
{
lean_object* v___x_5652_; 
if (v_isShared_5650_ == 0)
{
lean_ctor_set(v___x_5649_, 0, v___y_5646_);
v___x_5652_ = v___x_5649_;
goto v_reusejp_5651_;
}
else
{
lean_object* v_reuseFailAlloc_5653_; 
v_reuseFailAlloc_5653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5653_, 0, v___y_5646_);
lean_ctor_set(v_reuseFailAlloc_5653_, 1, v_indices_5647_);
v___x_5652_ = v_reuseFailAlloc_5653_;
goto v_reusejp_5651_;
}
v_reusejp_5651_:
{
v_a_5630_ = v___x_5652_;
goto v___jp_5629_;
}
}
}
v___jp_5656_:
{
lean_object* v_indices_5658_; lean_object* v___x_5660_; uint8_t v_isShared_5661_; uint8_t v_isSharedCheck_5665_; 
v_indices_5658_ = lean_ctor_get(v_b_5626_, 1);
v_isSharedCheck_5665_ = !lean_is_exclusive(v_b_5626_);
if (v_isSharedCheck_5665_ == 0)
{
lean_object* v_unused_5666_; 
v_unused_5666_ = lean_ctor_get(v_b_5626_, 0);
lean_dec(v_unused_5666_);
v___x_5660_ = v_b_5626_;
v_isShared_5661_ = v_isSharedCheck_5665_;
goto v_resetjp_5659_;
}
else
{
lean_inc(v_indices_5658_);
lean_dec(v_b_5626_);
v___x_5660_ = lean_box(0);
v_isShared_5661_ = v_isSharedCheck_5665_;
goto v_resetjp_5659_;
}
v_resetjp_5659_:
{
lean_object* v___x_5663_; 
if (v_isShared_5661_ == 0)
{
lean_ctor_set(v___x_5660_, 0, v___y_5657_);
v___x_5663_ = v___x_5660_;
goto v_reusejp_5662_;
}
else
{
lean_object* v_reuseFailAlloc_5664_; 
v_reuseFailAlloc_5664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5664_, 0, v___y_5657_);
lean_ctor_set(v_reuseFailAlloc_5664_, 1, v_indices_5658_);
v___x_5663_ = v_reuseFailAlloc_5664_;
goto v_reusejp_5662_;
}
v_reusejp_5662_:
{
v_a_5630_ = v___x_5663_;
goto v___jp_5629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1___boxed(lean_object* v_service_5826_, lean_object* v_scope_5827_, lean_object* v_cache_5828_, lean_object* v_force_5829_, lean_object* v_as_5830_, lean_object* v_i_5831_, lean_object* v_stop_5832_, lean_object* v_b_5833_, lean_object* v___y_5834_, lean_object* v___y_5835_){
_start:
{
uint8_t v_force_boxed_5836_; size_t v_i_boxed_5837_; size_t v_stop_boxed_5838_; lean_object* v_res_5839_; 
v_force_boxed_5836_ = lean_unbox(v_force_5829_);
v_i_boxed_5837_ = lean_unbox_usize(v_i_5831_);
lean_dec(v_i_5831_);
v_stop_boxed_5838_ = lean_unbox_usize(v_stop_5832_);
lean_dec(v_stop_5832_);
v_res_5839_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_service_5826_, v_scope_5827_, v_cache_5828_, v_force_boxed_5836_, v_as_5830_, v_i_boxed_5837_, v_stop_boxed_5838_, v_b_5833_, v___y_5834_);
lean_dec_ref(v___y_5834_);
lean_dec_ref(v_as_5830_);
return v_res_5839_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts(lean_object* v_descrs_5844_, lean_object* v_cache_5845_, lean_object* v_service_5846_, lean_object* v_scope_5847_, uint8_t v_force_5848_, lean_object* v___y_5849_){
_start:
{
lean_object* v_a_5852_; lean_object* v_a_5874_; lean_object* v___y_5893_; lean_object* v___x_5903_; lean_object* v___x_5904_; uint8_t v___x_5905_; 
v___x_5903_ = lean_array_get_size(v_descrs_5844_);
v___x_5904_ = lean_unsigned_to_nat(0u);
v___x_5905_ = lean_nat_dec_eq(v___x_5903_, v___x_5904_);
if (v___x_5905_ == 0)
{
lean_object* v___x_5906_; lean_object* v_infos_5908_; lean_object* v___y_5919_; uint8_t v___x_5930_; 
v___x_5906_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__0));
v___x_5930_ = lean_nat_dec_lt(v___x_5904_, v___x_5903_);
if (v___x_5930_ == 0)
{
v_infos_5908_ = v___x_5906_;
goto v___jp_5907_;
}
else
{
lean_object* v___x_5931_; uint8_t v___x_5932_; 
v___x_5931_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1);
v___x_5932_ = lean_nat_dec_le(v___x_5903_, v___x_5903_);
if (v___x_5932_ == 0)
{
if (v___x_5930_ == 0)
{
v_infos_5908_ = v___x_5906_;
goto v___jp_5907_;
}
else
{
size_t v___x_5933_; size_t v___x_5934_; lean_object* v___x_5935_; 
v___x_5933_ = ((size_t)0ULL);
v___x_5934_ = lean_usize_of_nat(v___x_5903_);
lean_inc_ref(v_cache_5845_);
lean_inc_ref(v_scope_5847_);
lean_inc_ref(v_service_5846_);
v___x_5935_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_service_5846_, v_scope_5847_, v_cache_5845_, v_force_5848_, v_descrs_5844_, v___x_5933_, v___x_5934_, v___x_5931_, v___y_5849_);
v___y_5919_ = v___x_5935_;
goto v___jp_5918_;
}
}
else
{
size_t v___x_5936_; size_t v___x_5937_; lean_object* v___x_5938_; 
v___x_5936_ = ((size_t)0ULL);
v___x_5937_ = lean_usize_of_nat(v___x_5903_);
lean_inc_ref(v_cache_5845_);
lean_inc_ref(v_scope_5847_);
lean_inc_ref(v_service_5846_);
v___x_5938_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__1(v_service_5846_, v_scope_5847_, v_cache_5845_, v_force_5848_, v_descrs_5844_, v___x_5936_, v___x_5937_, v___x_5931_, v___y_5849_);
v___y_5919_ = v___x_5938_;
goto v___jp_5918_;
}
}
v___jp_5907_:
{
lean_object* v___x_5909_; uint8_t v___x_5910_; 
v___x_5909_ = lean_array_get_size(v_infos_5908_);
v___x_5910_ = lean_nat_dec_lt(v___x_5904_, v___x_5909_);
if (v___x_5910_ == 0)
{
lean_dec_ref(v_infos_5908_);
v_a_5874_ = v___x_5906_;
goto v___jp_5873_;
}
else
{
uint8_t v___x_5911_; 
v___x_5911_ = lean_nat_dec_le(v___x_5909_, v___x_5909_);
if (v___x_5911_ == 0)
{
if (v___x_5910_ == 0)
{
lean_dec_ref(v_infos_5908_);
v_a_5874_ = v___x_5906_;
goto v___jp_5873_;
}
else
{
size_t v___x_5912_; size_t v___x_5913_; lean_object* v___x_5914_; 
v___x_5912_ = ((size_t)0ULL);
v___x_5913_ = lean_usize_of_nat(v___x_5909_);
v___x_5914_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0(v_infos_5908_, v___x_5912_, v___x_5913_, v___x_5906_, v___y_5849_);
lean_dec_ref(v_infos_5908_);
v___y_5893_ = v___x_5914_;
goto v___jp_5892_;
}
}
else
{
size_t v___x_5915_; size_t v___x_5916_; lean_object* v___x_5917_; 
v___x_5915_ = ((size_t)0ULL);
v___x_5916_ = lean_usize_of_nat(v___x_5909_);
v___x_5917_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheService_downloadArtifacts_spec__0(v_infos_5908_, v___x_5915_, v___x_5916_, v___x_5906_, v___y_5849_);
lean_dec_ref(v_infos_5908_);
v___y_5893_ = v___x_5917_;
goto v___jp_5892_;
}
}
}
v___jp_5918_:
{
if (lean_obj_tag(v___y_5919_) == 0)
{
lean_object* v_a_5920_; lean_object* v_infos_5921_; 
v_a_5920_ = lean_ctor_get(v___y_5919_, 0);
lean_inc(v_a_5920_);
lean_dec_ref_known(v___y_5919_, 1);
v_infos_5921_ = lean_ctor_get(v_a_5920_, 0);
lean_inc_ref(v_infos_5921_);
lean_dec(v_a_5920_);
v_infos_5908_ = v_infos_5921_;
goto v___jp_5907_;
}
else
{
lean_object* v_a_5922_; lean_object* v___x_5924_; uint8_t v_isShared_5925_; uint8_t v_isSharedCheck_5929_; 
lean_dec_ref(v_scope_5847_);
lean_dec_ref(v_service_5846_);
lean_dec_ref(v_cache_5845_);
v_a_5922_ = lean_ctor_get(v___y_5919_, 0);
v_isSharedCheck_5929_ = !lean_is_exclusive(v___y_5919_);
if (v_isSharedCheck_5929_ == 0)
{
v___x_5924_ = v___y_5919_;
v_isShared_5925_ = v_isSharedCheck_5929_;
goto v_resetjp_5923_;
}
else
{
lean_inc(v_a_5922_);
lean_dec(v___y_5919_);
v___x_5924_ = lean_box(0);
v_isShared_5925_ = v_isSharedCheck_5929_;
goto v_resetjp_5923_;
}
v_resetjp_5923_:
{
lean_object* v___x_5927_; 
if (v_isShared_5925_ == 0)
{
v___x_5927_ = v___x_5924_;
goto v_reusejp_5926_;
}
else
{
lean_object* v_reuseFailAlloc_5928_; 
v_reuseFailAlloc_5928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5928_, 0, v_a_5922_);
v___x_5927_ = v_reuseFailAlloc_5928_;
goto v_reusejp_5926_;
}
v_reusejp_5926_:
{
return v___x_5927_;
}
}
}
}
}
else
{
lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; 
lean_dec_ref(v_scope_5847_);
lean_dec_ref(v_service_5846_);
lean_dec_ref(v_cache_5845_);
v___x_5939_ = ((lean_object*)(l_Lake_CacheService_downloadArtifacts___closed__1));
lean_inc_ref(v___y_5849_);
v___x_5940_ = lean_apply_2(v___y_5849_, v___x_5939_, lean_box(0));
v___x_5941_ = lean_box(0);
v___x_5942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5942_, 0, v___x_5941_);
return v___x_5942_;
}
v___jp_5851_:
{
lean_object* v___x_5853_; lean_object* v___x_5854_; lean_object* v___x_5855_; 
v___x_5853_ = ((lean_object*)(l_Lake_Cache_artifactDir___closed__0));
v___x_5854_ = l_System_FilePath_join(v_cache_5845_, v___x_5853_);
v___x_5855_ = l_IO_FS_createDirAll(v___x_5854_);
if (lean_obj_tag(v___x_5855_) == 0)
{
uint8_t v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; lean_object* v___x_5859_; 
lean_dec_ref_known(v___x_5855_, 1);
v___x_5856_ = 0;
v___x_5857_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_5858_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_5858_, 0, v_scope_5847_);
lean_ctor_set(v___x_5858_, 1, v_a_5852_);
lean_ctor_set(v___x_5858_, 2, v___x_5857_);
lean_ctor_set_uint8(v___x_5858_, sizeof(void*)*3, v___x_5856_);
v___x_5859_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(v___x_5858_, v___y_5849_);
return v___x_5859_;
}
else
{
lean_object* v_a_5860_; lean_object* v___x_5862_; uint8_t v_isShared_5863_; uint8_t v_isSharedCheck_5872_; 
lean_dec_ref(v_a_5852_);
lean_dec_ref(v_scope_5847_);
v_a_5860_ = lean_ctor_get(v___x_5855_, 0);
v_isSharedCheck_5872_ = !lean_is_exclusive(v___x_5855_);
if (v_isSharedCheck_5872_ == 0)
{
v___x_5862_ = v___x_5855_;
v_isShared_5863_ = v_isSharedCheck_5872_;
goto v_resetjp_5861_;
}
else
{
lean_inc(v_a_5860_);
lean_dec(v___x_5855_);
v___x_5862_ = lean_box(0);
v_isShared_5863_ = v_isSharedCheck_5872_;
goto v_resetjp_5861_;
}
v_resetjp_5861_:
{
lean_object* v___x_5864_; uint8_t v___x_5865_; lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; lean_object* v___x_5870_; 
v___x_5864_ = lean_io_error_to_string(v_a_5860_);
v___x_5865_ = 3;
v___x_5866_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5866_, 0, v___x_5864_);
lean_ctor_set_uint8(v___x_5866_, sizeof(void*)*1, v___x_5865_);
lean_inc_ref(v___y_5849_);
v___x_5867_ = lean_apply_2(v___y_5849_, v___x_5866_, lean_box(0));
v___x_5868_ = lean_box(0);
if (v_isShared_5863_ == 0)
{
lean_ctor_set(v___x_5862_, 0, v___x_5868_);
v___x_5870_ = v___x_5862_;
goto v_reusejp_5869_;
}
else
{
lean_object* v_reuseFailAlloc_5871_; 
v_reuseFailAlloc_5871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5871_, 0, v___x_5868_);
v___x_5870_ = v_reuseFailAlloc_5871_;
goto v_reusejp_5869_;
}
v_reusejp_5869_:
{
return v___x_5870_;
}
}
}
}
v___jp_5873_:
{
lean_object* v___x_5875_; lean_object* v___x_5876_; uint8_t v___x_5877_; 
v___x_5875_ = lean_array_get_size(v_a_5874_);
v___x_5876_ = lean_unsigned_to_nat(0u);
v___x_5877_ = lean_nat_dec_eq(v___x_5875_, v___x_5876_);
if (v___x_5877_ == 0)
{
uint8_t v_isReservoir_5878_; 
v_isReservoir_5878_ = lean_ctor_get_uint8(v_service_5846_, sizeof(void*)*5);
if (v_isReservoir_5878_ == 0)
{
lean_dec_ref(v_service_5846_);
v_a_5852_ = v_a_5874_;
goto v___jp_5851_;
}
else
{
lean_object* v___x_5879_; lean_object* v___x_5880_; 
lean_inc_ref(v_scope_5847_);
v___x_5879_ = l___private_Lake_Config_Cache_0__Lake_CacheService_reservoirArtifactsUrl(v_service_5846_, v_scope_5847_);
v___x_5880_ = l___private_Lake_Config_Cache_0__Lake_CacheService_downloadArtifacts_fetchUrls(v___x_5879_, v_a_5874_, v___y_5849_);
if (lean_obj_tag(v___x_5880_) == 0)
{
lean_object* v_a_5881_; 
v_a_5881_ = lean_ctor_get(v___x_5880_, 0);
lean_inc(v_a_5881_);
lean_dec_ref_known(v___x_5880_, 1);
v_a_5852_ = v_a_5881_;
goto v___jp_5851_;
}
else
{
lean_object* v_a_5882_; lean_object* v___x_5884_; uint8_t v_isShared_5885_; uint8_t v_isSharedCheck_5889_; 
lean_dec_ref(v_scope_5847_);
lean_dec_ref(v_cache_5845_);
v_a_5882_ = lean_ctor_get(v___x_5880_, 0);
v_isSharedCheck_5889_ = !lean_is_exclusive(v___x_5880_);
if (v_isSharedCheck_5889_ == 0)
{
v___x_5884_ = v___x_5880_;
v_isShared_5885_ = v_isSharedCheck_5889_;
goto v_resetjp_5883_;
}
else
{
lean_inc(v_a_5882_);
lean_dec(v___x_5880_);
v___x_5884_ = lean_box(0);
v_isShared_5885_ = v_isSharedCheck_5889_;
goto v_resetjp_5883_;
}
v_resetjp_5883_:
{
lean_object* v___x_5887_; 
if (v_isShared_5885_ == 0)
{
v___x_5887_ = v___x_5884_;
goto v_reusejp_5886_;
}
else
{
lean_object* v_reuseFailAlloc_5888_; 
v_reuseFailAlloc_5888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5888_, 0, v_a_5882_);
v___x_5887_ = v_reuseFailAlloc_5888_;
goto v_reusejp_5886_;
}
v_reusejp_5886_:
{
return v___x_5887_;
}
}
}
}
}
else
{
lean_object* v___x_5890_; lean_object* v___x_5891_; 
lean_dec_ref(v_a_5874_);
lean_dec_ref(v_scope_5847_);
lean_dec_ref(v_service_5846_);
lean_dec_ref(v_cache_5845_);
v___x_5890_ = lean_box(0);
v___x_5891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5891_, 0, v___x_5890_);
return v___x_5891_;
}
}
v___jp_5892_:
{
if (lean_obj_tag(v___y_5893_) == 0)
{
lean_object* v_a_5894_; 
v_a_5894_ = lean_ctor_get(v___y_5893_, 0);
lean_inc(v_a_5894_);
lean_dec_ref_known(v___y_5893_, 1);
v_a_5874_ = v_a_5894_;
goto v___jp_5873_;
}
else
{
lean_object* v_a_5895_; lean_object* v___x_5897_; uint8_t v_isShared_5898_; uint8_t v_isSharedCheck_5902_; 
lean_dec_ref(v_scope_5847_);
lean_dec_ref(v_service_5846_);
lean_dec_ref(v_cache_5845_);
v_a_5895_ = lean_ctor_get(v___y_5893_, 0);
v_isSharedCheck_5902_ = !lean_is_exclusive(v___y_5893_);
if (v_isSharedCheck_5902_ == 0)
{
v___x_5897_ = v___y_5893_;
v_isShared_5898_ = v_isSharedCheck_5902_;
goto v_resetjp_5896_;
}
else
{
lean_inc(v_a_5895_);
lean_dec(v___y_5893_);
v___x_5897_ = lean_box(0);
v_isShared_5898_ = v_isSharedCheck_5902_;
goto v_resetjp_5896_;
}
v_resetjp_5896_:
{
lean_object* v___x_5900_; 
if (v_isShared_5898_ == 0)
{
v___x_5900_ = v___x_5897_;
goto v_reusejp_5899_;
}
else
{
lean_object* v_reuseFailAlloc_5901_; 
v_reuseFailAlloc_5901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5901_, 0, v_a_5895_);
v___x_5900_ = v_reuseFailAlloc_5901_;
goto v_reusejp_5899_;
}
v_reusejp_5899_:
{
return v___x_5900_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadArtifacts___boxed(lean_object* v_descrs_5943_, lean_object* v_cache_5944_, lean_object* v_service_5945_, lean_object* v_scope_5946_, lean_object* v_force_5947_, lean_object* v___y_5948_, lean_object* v___y_5949_){
_start:
{
uint8_t v_force_boxed_5950_; lean_object* v_res_5951_; 
v_force_boxed_5950_ = lean_unbox(v_force_5947_);
v_res_5951_ = l_Lake_CacheService_downloadArtifacts(v_descrs_5943_, v_cache_5944_, v_service_5945_, v_scope_5946_, v_force_boxed_5950_, v___y_5948_);
lean_dec_ref(v___y_5948_);
lean_dec_ref(v_descrs_5943_);
return v_res_5951_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts(lean_object* v_map_5952_, lean_object* v_cache_5953_, lean_object* v_service_5954_, lean_object* v_localScope_5955_, lean_object* v_remoteScope_5956_, uint8_t v_force_5957_, lean_object* v___y_5958_){
_start:
{
lean_object* v_name_x3f_5960_; lean_object* v___x_5961_; uint8_t v___x_5962_; lean_object* v___x_5963_; 
v_name_x3f_5960_ = lean_ctor_get(v_service_5954_, 0);
lean_inc_ref(v_remoteScope_5956_);
v___x_5961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5961_, 0, v_remoteScope_5956_);
v___x_5962_ = 1;
lean_inc(v_name_x3f_5960_);
lean_inc_ref(v_cache_5953_);
v___x_5963_ = l_Lake_Cache_writeMap(v_cache_5953_, v_localScope_5955_, v_map_5952_, v_name_x3f_5960_, v___x_5961_, v___x_5962_);
if (lean_obj_tag(v___x_5963_) == 0)
{
lean_object* v___x_5965_; uint8_t v_isShared_5966_; uint8_t v_isSharedCheck_5999_; 
v_isSharedCheck_5999_ = !lean_is_exclusive(v___x_5963_);
if (v_isSharedCheck_5999_ == 0)
{
lean_object* v_unused_6000_; 
v_unused_6000_ = lean_ctor_get(v___x_5963_, 0);
lean_dec(v_unused_6000_);
v___x_5965_ = v___x_5963_;
v_isShared_5966_ = v_isSharedCheck_5999_;
goto v_resetjp_5964_;
}
else
{
lean_dec(v___x_5963_);
v___x_5965_ = lean_box(0);
v_isShared_5966_ = v_isSharedCheck_5999_;
goto v_resetjp_5964_;
}
v_resetjp_5964_:
{
lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; 
v___x_5967_ = lean_unsigned_to_nat(0u);
v___x_5968_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_5969_ = l_Lake_CacheMap_collectOutputDescrs(v_map_5952_, v___x_5968_);
if (lean_obj_tag(v___x_5969_) == 0)
{
lean_object* v_a_5970_; lean_object* v_a_5971_; lean_object* v___x_5972_; uint8_t v___x_5973_; 
lean_del_object(v___x_5965_);
v_a_5970_ = lean_ctor_get(v___x_5969_, 0);
lean_inc(v_a_5970_);
v_a_5971_ = lean_ctor_get(v___x_5969_, 1);
lean_inc(v_a_5971_);
lean_dec_ref_known(v___x_5969_, 2);
v___x_5972_ = lean_array_get_size(v_a_5971_);
v___x_5973_ = lean_nat_dec_lt(v___x_5967_, v___x_5972_);
if (v___x_5973_ == 0)
{
lean_object* v___x_5974_; 
lean_dec(v_a_5971_);
v___x_5974_ = l_Lake_CacheService_downloadArtifacts(v_a_5970_, v_cache_5953_, v_service_5954_, v_remoteScope_5956_, v_force_5957_, v___y_5958_);
lean_dec(v_a_5970_);
return v___x_5974_;
}
else
{
lean_object* v___x_5975_; size_t v___x_5976_; size_t v___x_5977_; lean_object* v___x_5978_; 
v___x_5975_ = lean_box(0);
v___x_5976_ = ((size_t)0ULL);
v___x_5977_ = lean_usize_of_nat(v___x_5972_);
v___x_5978_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5971_, v___x_5976_, v___x_5977_, v___x_5975_, v___y_5958_);
lean_dec(v_a_5971_);
if (lean_obj_tag(v___x_5978_) == 0)
{
lean_object* v___x_5979_; 
lean_dec_ref_known(v___x_5978_, 1);
v___x_5979_ = l_Lake_CacheService_downloadArtifacts(v_a_5970_, v_cache_5953_, v_service_5954_, v_remoteScope_5956_, v_force_5957_, v___y_5958_);
lean_dec(v_a_5970_);
return v___x_5979_;
}
else
{
lean_dec(v_a_5970_);
lean_dec_ref(v_remoteScope_5956_);
lean_dec_ref(v_service_5954_);
lean_dec_ref(v_cache_5953_);
return v___x_5978_;
}
}
}
else
{
lean_object* v_a_5980_; lean_object* v___x_5981_; uint8_t v___x_5982_; 
lean_dec_ref(v_remoteScope_5956_);
lean_dec_ref(v_service_5954_);
lean_dec_ref(v_cache_5953_);
v_a_5980_ = lean_ctor_get(v___x_5969_, 1);
lean_inc(v_a_5980_);
lean_dec_ref_known(v___x_5969_, 2);
v___x_5981_ = lean_array_get_size(v_a_5980_);
v___x_5982_ = lean_nat_dec_lt(v___x_5967_, v___x_5981_);
if (v___x_5982_ == 0)
{
lean_object* v___x_5983_; lean_object* v___x_5985_; 
lean_dec(v_a_5980_);
v___x_5983_ = lean_box(0);
if (v_isShared_5966_ == 0)
{
lean_ctor_set_tag(v___x_5965_, 1);
lean_ctor_set(v___x_5965_, 0, v___x_5983_);
v___x_5985_ = v___x_5965_;
goto v_reusejp_5984_;
}
else
{
lean_object* v_reuseFailAlloc_5986_; 
v_reuseFailAlloc_5986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5986_, 0, v___x_5983_);
v___x_5985_ = v_reuseFailAlloc_5986_;
goto v_reusejp_5984_;
}
v_reusejp_5984_:
{
return v___x_5985_;
}
}
else
{
lean_object* v___x_5987_; size_t v___x_5988_; size_t v___x_5989_; lean_object* v___x_5990_; 
lean_del_object(v___x_5965_);
v___x_5987_ = lean_box(0);
v___x_5988_ = ((size_t)0ULL);
v___x_5989_ = lean_usize_of_nat(v___x_5981_);
v___x_5990_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_5980_, v___x_5988_, v___x_5989_, v___x_5987_, v___y_5958_);
lean_dec(v_a_5980_);
if (lean_obj_tag(v___x_5990_) == 0)
{
lean_object* v___x_5992_; uint8_t v_isShared_5993_; uint8_t v_isSharedCheck_5997_; 
v_isSharedCheck_5997_ = !lean_is_exclusive(v___x_5990_);
if (v_isSharedCheck_5997_ == 0)
{
lean_object* v_unused_5998_; 
v_unused_5998_ = lean_ctor_get(v___x_5990_, 0);
lean_dec(v_unused_5998_);
v___x_5992_ = v___x_5990_;
v_isShared_5993_ = v_isSharedCheck_5997_;
goto v_resetjp_5991_;
}
else
{
lean_dec(v___x_5990_);
v___x_5992_ = lean_box(0);
v_isShared_5993_ = v_isSharedCheck_5997_;
goto v_resetjp_5991_;
}
v_resetjp_5991_:
{
lean_object* v___x_5995_; 
if (v_isShared_5993_ == 0)
{
lean_ctor_set_tag(v___x_5992_, 1);
lean_ctor_set(v___x_5992_, 0, v___x_5987_);
v___x_5995_ = v___x_5992_;
goto v_reusejp_5994_;
}
else
{
lean_object* v_reuseFailAlloc_5996_; 
v_reuseFailAlloc_5996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5996_, 0, v___x_5987_);
v___x_5995_ = v_reuseFailAlloc_5996_;
goto v_reusejp_5994_;
}
v_reusejp_5994_:
{
return v___x_5995_;
}
}
}
else
{
return v___x_5990_;
}
}
}
}
}
else
{
lean_object* v_a_6001_; lean_object* v___x_6003_; uint8_t v_isShared_6004_; uint8_t v_isSharedCheck_6013_; 
lean_dec_ref(v_remoteScope_5956_);
lean_dec_ref(v_service_5954_);
lean_dec_ref(v_cache_5953_);
lean_dec_ref(v_map_5952_);
v_a_6001_ = lean_ctor_get(v___x_5963_, 0);
v_isSharedCheck_6013_ = !lean_is_exclusive(v___x_5963_);
if (v_isSharedCheck_6013_ == 0)
{
v___x_6003_ = v___x_5963_;
v_isShared_6004_ = v_isSharedCheck_6013_;
goto v_resetjp_6002_;
}
else
{
lean_inc(v_a_6001_);
lean_dec(v___x_5963_);
v___x_6003_ = lean_box(0);
v_isShared_6004_ = v_isSharedCheck_6013_;
goto v_resetjp_6002_;
}
v_resetjp_6002_:
{
lean_object* v___x_6005_; uint8_t v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6011_; 
v___x_6005_ = lean_io_error_to_string(v_a_6001_);
v___x_6006_ = 3;
v___x_6007_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6007_, 0, v___x_6005_);
lean_ctor_set_uint8(v___x_6007_, sizeof(void*)*1, v___x_6006_);
lean_inc_ref(v___y_5958_);
v___x_6008_ = lean_apply_2(v___y_5958_, v___x_6007_, lean_box(0));
v___x_6009_ = lean_box(0);
if (v_isShared_6004_ == 0)
{
lean_ctor_set(v___x_6003_, 0, v___x_6009_);
v___x_6011_ = v___x_6003_;
goto v_reusejp_6010_;
}
else
{
lean_object* v_reuseFailAlloc_6012_; 
v_reuseFailAlloc_6012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6012_, 0, v___x_6009_);
v___x_6011_ = v_reuseFailAlloc_6012_;
goto v_reusejp_6010_;
}
v_reusejp_6010_:
{
return v___x_6011_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadOutputArtifacts___boxed(lean_object* v_map_6014_, lean_object* v_cache_6015_, lean_object* v_service_6016_, lean_object* v_localScope_6017_, lean_object* v_remoteScope_6018_, lean_object* v_force_6019_, lean_object* v___y_6020_, lean_object* v___y_6021_){
_start:
{
uint8_t v_force_boxed_6022_; lean_object* v_res_6023_; 
v_force_boxed_6022_ = lean_unbox(v_force_6019_);
v_res_6023_ = l_Lake_CacheService_downloadOutputArtifacts(v_map_6014_, v_cache_6015_, v_service_6016_, v_localScope_6017_, v_remoteScope_6018_, v_force_boxed_6022_, v___y_6020_);
lean_dec_ref(v___y_6020_);
return v_res_6023_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(lean_object* v_m_6024_, uint64_t v_a_6025_){
_start:
{
lean_object* v_buckets_6026_; lean_object* v___x_6027_; uint64_t v___x_6028_; uint64_t v___x_6029_; uint64_t v_fold_6030_; uint64_t v___x_6031_; uint64_t v___x_6032_; uint64_t v___x_6033_; size_t v___x_6034_; size_t v___x_6035_; size_t v___x_6036_; size_t v___x_6037_; size_t v___x_6038_; lean_object* v___x_6039_; uint8_t v___x_6040_; 
v_buckets_6026_ = lean_ctor_get(v_m_6024_, 1);
v___x_6027_ = lean_array_get_size(v_buckets_6026_);
v___x_6028_ = 32ULL;
v___x_6029_ = lean_uint64_shift_right(v_a_6025_, v___x_6028_);
v_fold_6030_ = lean_uint64_xor(v_a_6025_, v___x_6029_);
v___x_6031_ = 16ULL;
v___x_6032_ = lean_uint64_shift_right(v_fold_6030_, v___x_6031_);
v___x_6033_ = lean_uint64_xor(v_fold_6030_, v___x_6032_);
v___x_6034_ = lean_uint64_to_usize(v___x_6033_);
v___x_6035_ = lean_usize_of_nat(v___x_6027_);
v___x_6036_ = ((size_t)1ULL);
v___x_6037_ = lean_usize_sub(v___x_6035_, v___x_6036_);
v___x_6038_ = lean_usize_land(v___x_6034_, v___x_6037_);
v___x_6039_ = lean_array_uget_borrowed(v_buckets_6026_, v___x_6038_);
v___x_6040_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1_spec__2___redArg(v_a_6025_, v___x_6039_);
return v___x_6040_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg___boxed(lean_object* v_m_6041_, lean_object* v_a_6042_){
_start:
{
uint64_t v_a_boxed_6043_; uint8_t v_res_6044_; lean_object* v_r_6045_; 
v_a_boxed_6043_ = lean_unbox_uint64(v_a_6042_);
lean_dec_ref(v_a_6042_);
v_res_6044_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_m_6041_, v_a_boxed_6043_);
lean_dec_ref(v_m_6041_);
v_r_6045_ = lean_box(v_res_6044_);
return v_r_6045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(lean_object* v_descrs_6046_, lean_object* v_service_6047_, lean_object* v_scope_6048_, lean_object* v_paths_6049_, lean_object* v_n_6050_, lean_object* v_i_6051_, lean_object* v_a_6052_){
_start:
{
lean_object* v_zero_6054_; uint8_t v_isZero_6055_; 
v_zero_6054_ = lean_unsigned_to_nat(0u);
v_isZero_6055_ = lean_nat_dec_eq(v_i_6051_, v_zero_6054_);
if (v_isZero_6055_ == 1)
{
lean_object* v___x_6056_; 
lean_dec(v_i_6051_);
lean_dec_ref(v_scope_6048_);
lean_dec_ref(v_service_6047_);
v___x_6056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6056_, 0, v_a_6052_);
return v___x_6056_;
}
else
{
lean_object* v_one_6057_; lean_object* v_n_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; uint64_t v_hash_6062_; lean_object* v_infos_6063_; lean_object* v_indices_6064_; lean_object* v_url_6065_; uint8_t v___x_6066_; 
v_one_6057_ = lean_unsigned_to_nat(1u);
v_n_6058_ = lean_nat_sub(v_i_6051_, v_one_6057_);
lean_dec(v_i_6051_);
v___x_6059_ = lean_nat_sub(v_n_6050_, v_n_6058_);
v___x_6060_ = lean_nat_sub(v___x_6059_, v_one_6057_);
lean_dec(v___x_6059_);
v___x_6061_ = lean_array_fget_borrowed(v_descrs_6046_, v___x_6060_);
v_hash_6062_ = lean_ctor_get_uint64(v___x_6061_, sizeof(void*)*1);
v_infos_6063_ = lean_ctor_get(v_a_6052_, 0);
v_indices_6064_ = lean_ctor_get(v_a_6052_, 1);
lean_inc_ref(v_scope_6048_);
lean_inc_ref(v_service_6047_);
v_url_6065_ = l_Lake_CacheService_artifactUrl(v_hash_6062_, v_service_6047_, v_scope_6048_);
v___x_6066_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_indices_6064_, v_hash_6062_);
if (v___x_6066_ == 0)
{
lean_object* v___x_6068_; uint8_t v_isShared_6069_; uint8_t v_isSharedCheck_6080_; 
lean_inc_ref(v_indices_6064_);
lean_inc_ref(v_infos_6063_);
v_isSharedCheck_6080_ = !lean_is_exclusive(v_a_6052_);
if (v_isSharedCheck_6080_ == 0)
{
lean_object* v_unused_6081_; lean_object* v_unused_6082_; 
v_unused_6081_ = lean_ctor_get(v_a_6052_, 1);
lean_dec(v_unused_6081_);
v_unused_6082_ = lean_ctor_get(v_a_6052_, 0);
lean_dec(v_unused_6082_);
v___x_6068_ = v_a_6052_;
v_isShared_6069_ = v_isSharedCheck_6080_;
goto v_resetjp_6067_;
}
else
{
lean_dec(v_a_6052_);
v___x_6068_ = lean_box(0);
v_isShared_6069_ = v_isSharedCheck_6080_;
goto v_resetjp_6067_;
}
v_resetjp_6067_:
{
lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6077_; 
v___x_6070_ = lean_array_fget_borrowed(v_paths_6049_, v___x_6060_);
lean_dec(v___x_6060_);
v___x_6071_ = ((lean_object*)(l_Lake_downloadArtifactCore___closed__0));
lean_inc(v___x_6070_);
v___x_6072_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6072_, 0, v_url_6065_);
lean_ctor_set(v___x_6072_, 1, v___x_6070_);
lean_ctor_set(v___x_6072_, 2, v___x_6071_);
lean_ctor_set_uint64(v___x_6072_, sizeof(void*)*3, v_hash_6062_);
lean_inc_ref(v_infos_6063_);
v___x_6073_ = lean_array_push(v_infos_6063_, v___x_6072_);
v___x_6074_ = lean_array_get_size(v_infos_6063_);
lean_dec_ref(v_infos_6063_);
v___x_6075_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lake_Config_Cache_0__Lake_CacheMap_parseCacheEntry_go_spec__1___redArg(v_indices_6064_, v_hash_6062_, v___x_6074_);
if (v_isShared_6069_ == 0)
{
lean_ctor_set(v___x_6068_, 1, v___x_6075_);
lean_ctor_set(v___x_6068_, 0, v___x_6073_);
v___x_6077_ = v___x_6068_;
goto v_reusejp_6076_;
}
else
{
lean_object* v_reuseFailAlloc_6079_; 
v_reuseFailAlloc_6079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6079_, 0, v___x_6073_);
lean_ctor_set(v_reuseFailAlloc_6079_, 1, v___x_6075_);
v___x_6077_ = v_reuseFailAlloc_6079_;
goto v_reusejp_6076_;
}
v_reusejp_6076_:
{
v_i_6051_ = v_n_6058_;
v_a_6052_ = v___x_6077_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_url_6065_);
lean_dec(v___x_6060_);
v_i_6051_ = v_n_6058_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg___boxed(lean_object* v_descrs_6084_, lean_object* v_service_6085_, lean_object* v_scope_6086_, lean_object* v_paths_6087_, lean_object* v_n_6088_, lean_object* v_i_6089_, lean_object* v_a_6090_, lean_object* v___y_6091_){
_start:
{
lean_object* v_res_6092_; 
v_res_6092_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_6084_, v_service_6085_, v_scope_6086_, v_paths_6087_, v_n_6088_, v_i_6089_, v_a_6090_);
lean_dec(v_n_6088_);
lean_dec_ref(v_paths_6087_);
lean_dec_ref(v_descrs_6084_);
return v_res_6092_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts(lean_object* v_n_6097_, lean_object* v_descrs_6098_, lean_object* v_paths_6099_, lean_object* v_service_6100_, lean_object* v_scope_6101_, lean_object* v___y_6102_){
_start:
{
lean_object* v___x_6104_; uint8_t v___x_6105_; 
v___x_6104_ = lean_unsigned_to_nat(0u);
v___x_6105_ = lean_nat_dec_eq(v_n_6097_, v___x_6104_);
if (v___x_6105_ == 0)
{
lean_object* v___x_6106_; lean_object* v___x_6107_; lean_object* v_a_6108_; lean_object* v_infos_6109_; lean_object* v_key_6110_; uint8_t v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; 
v___x_6106_ = lean_obj_once(&l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1, &l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1_once, _init_l___private_Lake_Config_Cache_0__Lake_CacheService_TransferDict_empty___closed__1);
lean_inc(v_n_6097_);
lean_inc_ref(v_scope_6101_);
lean_inc_ref(v_service_6100_);
v___x_6107_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_6098_, v_service_6100_, v_scope_6101_, v_paths_6099_, v_n_6097_, v_n_6097_, v___x_6106_);
lean_dec(v_n_6097_);
v_a_6108_ = lean_ctor_get(v___x_6107_, 0);
lean_inc(v_a_6108_);
lean_dec_ref(v___x_6107_);
v_infos_6109_ = lean_ctor_get(v_a_6108_, 0);
lean_inc_ref(v_infos_6109_);
lean_dec(v_a_6108_);
v_key_6110_ = lean_ctor_get(v_service_6100_, 1);
lean_inc_ref(v_key_6110_);
lean_dec_ref(v_service_6100_);
v___x_6111_ = 1;
v___x_6112_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_6112_, 0, v_scope_6101_);
lean_ctor_set(v___x_6112_, 1, v_infos_6109_);
lean_ctor_set(v___x_6112_, 2, v_key_6110_);
lean_ctor_set_uint8(v___x_6112_, sizeof(void*)*3, v___x_6111_);
v___x_6113_ = l___private_Lake_Config_Cache_0__Lake_CacheService_transferArtifacts(v___x_6112_, v___y_6102_);
return v___x_6113_;
}
else
{
lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; 
lean_dec_ref(v_scope_6101_);
lean_dec_ref(v_service_6100_);
lean_dec(v_n_6097_);
v___x_6114_ = ((lean_object*)(l_Lake_CacheService_uploadArtifacts___closed__1));
lean_inc_ref(v___y_6102_);
v___x_6115_ = lean_apply_2(v___y_6102_, v___x_6114_, lean_box(0));
v___x_6116_ = lean_box(0);
v___x_6117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6117_, 0, v___x_6116_);
return v___x_6117_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadArtifacts___boxed(lean_object* v_n_6118_, lean_object* v_descrs_6119_, lean_object* v_paths_6120_, lean_object* v_service_6121_, lean_object* v_scope_6122_, lean_object* v___y_6123_, lean_object* v___y_6124_){
_start:
{
lean_object* v_res_6125_; 
v_res_6125_ = l_Lake_CacheService_uploadArtifacts(v_n_6118_, v_descrs_6119_, v_paths_6120_, v_service_6121_, v_scope_6122_, v___y_6123_);
lean_dec_ref(v___y_6123_);
lean_dec_ref(v_paths_6120_);
lean_dec_ref(v_descrs_6119_);
return v_res_6125_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0(lean_object* v_00_u03b2_6126_, lean_object* v_m_6127_, uint64_t v_a_6128_){
_start:
{
uint8_t v___x_6129_; 
v___x_6129_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___redArg(v_m_6127_, v_a_6128_);
return v___x_6129_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0___boxed(lean_object* v_00_u03b2_6130_, lean_object* v_m_6131_, lean_object* v_a_6132_){
_start:
{
uint64_t v_a_boxed_6133_; uint8_t v_res_6134_; lean_object* v_r_6135_; 
v_a_boxed_6133_ = lean_unbox_uint64(v_a_6132_);
lean_dec_ref(v_a_6132_);
v_res_6134_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_CacheService_uploadArtifacts_spec__0(v_00_u03b2_6130_, v_m_6131_, v_a_boxed_6133_);
lean_dec_ref(v_m_6131_);
v_r_6135_ = lean_box(v_res_6134_);
return v_r_6135_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1(lean_object* v_descrs_6136_, lean_object* v_service_6137_, lean_object* v_scope_6138_, lean_object* v_paths_6139_, lean_object* v_n_6140_, lean_object* v_i_6141_, lean_object* v_a_6142_, lean_object* v_a_6143_, lean_object* v___y_6144_){
_start:
{
lean_object* v___x_6146_; 
v___x_6146_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___redArg(v_descrs_6136_, v_service_6137_, v_scope_6138_, v_paths_6139_, v_n_6140_, v_i_6141_, v_a_6143_);
return v___x_6146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1___boxed(lean_object* v_descrs_6147_, lean_object* v_service_6148_, lean_object* v_scope_6149_, lean_object* v_paths_6150_, lean_object* v_n_6151_, lean_object* v_i_6152_, lean_object* v_a_6153_, lean_object* v_a_6154_, lean_object* v___y_6155_, lean_object* v___y_6156_){
_start:
{
lean_object* v_res_6157_; 
v_res_6157_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lake_CacheService_uploadArtifacts_spec__1(v_descrs_6147_, v_service_6148_, v_scope_6149_, v_paths_6150_, v_n_6151_, v_i_6152_, v_a_6153_, v_a_6154_, v___y_6155_);
lean_dec_ref(v___y_6155_);
lean_dec(v_n_6151_);
lean_dec_ref(v_paths_6150_);
lean_dec_ref(v_descrs_6147_);
return v_res_6157_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(lean_object* v_rev_6162_, lean_object* v_service_6163_, lean_object* v_scope_6164_, lean_object* v_platform_6165_, lean_object* v_toolchain_6166_){
_start:
{
lean_object* v_url_6168_; lean_object* v_url_6175_; 
if (lean_obj_tag(v_scope_6164_) == 0)
{
lean_object* v_s_6184_; lean_object* v_revisionEndpoint_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; 
v_s_6184_ = lean_ctor_get(v_scope_6164_, 0);
lean_inc_ref(v_s_6184_);
lean_dec_ref_known(v_scope_6164_, 1);
v_revisionEndpoint_6185_ = lean_ctor_get(v_service_6163_, 3);
lean_inc_ref(v_revisionEndpoint_6185_);
lean_dec_ref(v_service_6163_);
v___x_6186_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_revisionEndpoint_6185_, v_s_6184_);
v___x_6187_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_6188_ = lean_string_append(v___x_6187_, v_rev_6162_);
v___x_6189_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_6190_ = lean_string_append(v___x_6188_, v___x_6189_);
v___x_6191_ = lean_string_append(v___x_6186_, v___x_6190_);
lean_dec_ref(v___x_6190_);
return v___x_6191_;
}
else
{
lean_object* v_s_6192_; lean_object* v_revisionEndpoint_6193_; lean_object* v_url_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; uint8_t v___x_6197_; 
v_s_6192_ = lean_ctor_get(v_scope_6164_, 0);
lean_inc_ref(v_s_6192_);
lean_dec_ref_known(v_scope_6164_, 1);
v_revisionEndpoint_6193_ = lean_ctor_get(v_service_6163_, 3);
lean_inc_ref(v_revisionEndpoint_6193_);
lean_dec_ref(v_service_6163_);
v_url_6194_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v_revisionEndpoint_6193_, v_s_6192_);
v___x_6195_ = lean_string_utf8_byte_size(v_platform_6165_);
v___x_6196_ = lean_unsigned_to_nat(0u);
v___x_6197_ = lean_nat_dec_eq(v___x_6195_, v___x_6196_);
if (v___x_6197_ == 0)
{
lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v_url_6200_; 
v___x_6198_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__1));
v___x_6199_ = lean_string_append(v_url_6194_, v___x_6198_);
v_url_6200_ = l_Lake_uriEncode(v_platform_6165_, v___x_6199_);
v_url_6175_ = v_url_6200_;
goto v___jp_6174_;
}
else
{
v_url_6175_ = v_url_6194_;
goto v___jp_6174_;
}
}
v___jp_6167_:
{
lean_object* v___x_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; 
v___x_6169_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3ArtifactUrl___closed__0));
v___x_6170_ = lean_string_append(v_url_6168_, v___x_6169_);
v___x_6171_ = lean_string_append(v___x_6170_, v_rev_6162_);
v___x_6172_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
v___x_6173_ = lean_string_append(v___x_6171_, v___x_6172_);
return v___x_6173_;
}
v___jp_6174_:
{
lean_object* v___x_6176_; lean_object* v___x_6177_; uint8_t v___x_6178_; 
v___x_6176_ = lean_string_utf8_byte_size(v_toolchain_6166_);
v___x_6177_ = lean_unsigned_to_nat(0u);
v___x_6178_ = lean_nat_dec_eq(v___x_6176_, v___x_6177_);
if (v___x_6178_ == 0)
{
lean_object* v___x_6179_; lean_object* v___x_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v_url_6183_; 
v___x_6179_ = ((lean_object*)(l_Lake_instInhabitedCache_default___closed__0));
v___x_6180_ = l___private_Lake_Config_InstallPath_0__Lake_toolchain2Dir_go(v_toolchain_6166_, v___x_6179_, v___x_6177_);
v___x_6181_ = ((lean_object*)(l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___closed__0));
v___x_6182_ = lean_string_append(v_url_6175_, v___x_6181_);
v_url_6183_ = l_Lake_uriEncode(v___x_6180_, v___x_6182_);
lean_dec_ref(v___x_6180_);
v_url_6168_ = v_url_6183_;
goto v___jp_6167_;
}
else
{
v_url_6168_ = v_url_6175_;
goto v___jp_6167_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl___boxed(lean_object* v_rev_6201_, lean_object* v_service_6202_, lean_object* v_scope_6203_, lean_object* v_platform_6204_, lean_object* v_toolchain_6205_){
_start:
{
lean_object* v_res_6206_; 
v_res_6206_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_6201_, v_service_6202_, v_scope_6203_, v_platform_6204_, v_toolchain_6205_);
lean_dec_ref(v_toolchain_6205_);
lean_dec_ref(v_platform_6204_);
lean_dec_ref(v_rev_6201_);
return v_res_6206_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl(lean_object* v_rev_6210_, lean_object* v_service_6211_, lean_object* v_scope_6212_, lean_object* v_platform_6213_, lean_object* v_toolchain_6214_){
_start:
{
lean_object* v_url_6216_; lean_object* v___y_6224_; uint8_t v_isReservoir_6234_; 
v_isReservoir_6234_ = lean_ctor_get_uint8(v_service_6211_, sizeof(void*)*5);
if (v_isReservoir_6234_ == 0)
{
lean_object* v___x_6235_; 
v___x_6235_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_6210_, v_service_6211_, v_scope_6212_, v_platform_6213_, v_toolchain_6214_);
return v___x_6235_;
}
else
{
if (lean_obj_tag(v_scope_6212_) == 0)
{
lean_object* v_apiEndpoint_6236_; lean_object* v_s_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; lean_object* v___x_6240_; 
v_apiEndpoint_6236_ = lean_ctor_get(v_service_6211_, 4);
lean_inc_ref(v_apiEndpoint_6236_);
lean_dec_ref(v_service_6211_);
v_s_6237_ = lean_ctor_get(v_scope_6212_, 0);
lean_inc_ref(v_s_6237_);
lean_dec_ref_known(v_scope_6212_, 1);
v___x_6238_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__1));
v___x_6239_ = lean_string_append(v_apiEndpoint_6236_, v___x_6238_);
v___x_6240_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_6239_, v_s_6237_);
v___y_6224_ = v___x_6240_;
goto v___jp_6223_;
}
else
{
lean_object* v_apiEndpoint_6241_; lean_object* v_s_6242_; lean_object* v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; 
v_apiEndpoint_6241_ = lean_ctor_get(v_service_6211_, 4);
lean_inc_ref(v_apiEndpoint_6241_);
lean_dec_ref(v_service_6211_);
v_s_6242_ = lean_ctor_get(v_scope_6212_, 0);
lean_inc_ref(v_s_6242_);
lean_dec_ref_known(v_scope_6212_, 1);
v___x_6243_ = ((lean_object*)(l_Lake_CacheService_artifactUrl___closed__2));
v___x_6244_ = lean_string_append(v_apiEndpoint_6241_, v___x_6243_);
v___x_6245_ = l___private_Lake_Config_Cache_0__Lake_CacheService_appendScope(v___x_6244_, v_s_6242_);
v___y_6224_ = v___x_6245_;
goto v___jp_6223_;
}
}
v___jp_6215_:
{
lean_object* v___x_6217_; lean_object* v___x_6218_; uint8_t v___x_6219_; 
v___x_6217_ = lean_string_utf8_byte_size(v_toolchain_6214_);
v___x_6218_ = lean_unsigned_to_nat(0u);
v___x_6219_ = lean_nat_dec_eq(v___x_6217_, v___x_6218_);
if (v___x_6219_ == 0)
{
lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v_url_6222_; 
v___x_6220_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__0));
v___x_6221_ = lean_string_append(v_url_6216_, v___x_6220_);
v_url_6222_ = l_Lake_uriEncode(v_toolchain_6214_, v___x_6221_);
return v_url_6222_;
}
else
{
return v_url_6216_;
}
}
v___jp_6223_:
{
lean_object* v___x_6225_; lean_object* v___x_6226_; lean_object* v_url_6227_; lean_object* v___x_6228_; lean_object* v___x_6229_; uint8_t v___x_6230_; 
v___x_6225_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__1));
v___x_6226_ = lean_string_append(v___y_6224_, v___x_6225_);
v_url_6227_ = lean_string_append(v___x_6226_, v_rev_6210_);
v___x_6228_ = lean_string_utf8_byte_size(v_platform_6213_);
v___x_6229_ = lean_unsigned_to_nat(0u);
v___x_6230_ = lean_nat_dec_eq(v___x_6228_, v___x_6229_);
if (v___x_6230_ == 0)
{
lean_object* v___x_6231_; lean_object* v___x_6232_; lean_object* v_url_6233_; 
v___x_6231_ = ((lean_object*)(l_Lake_CacheService_revisionUrl___closed__2));
v___x_6232_ = lean_string_append(v_url_6227_, v___x_6231_);
v_url_6233_ = l_Lake_uriEncode(v_platform_6213_, v___x_6232_);
v_url_6216_ = v_url_6233_;
goto v___jp_6215_;
}
else
{
v_url_6216_ = v_url_6227_;
goto v___jp_6215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_revisionUrl___boxed(lean_object* v_rev_6246_, lean_object* v_service_6247_, lean_object* v_scope_6248_, lean_object* v_platform_6249_, lean_object* v_toolchain_6250_){
_start:
{
lean_object* v_res_6251_; 
v_res_6251_ = l_Lake_CacheService_revisionUrl(v_rev_6246_, v_service_6247_, v_scope_6248_, v_platform_6249_, v_toolchain_6250_);
lean_dec_ref(v_toolchain_6250_);
lean_dec_ref(v_platform_6249_);
lean_dec_ref(v_rev_6246_);
return v_res_6251_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f(lean_object* v_rev_6256_, lean_object* v_cache_6257_, lean_object* v_service_6258_, lean_object* v_localScope_6259_, lean_object* v_remoteScope_6260_, lean_object* v_platform_6261_, lean_object* v_toolchain_6262_, uint8_t v_force_6263_, lean_object* v___y_6264_){
_start:
{
lean_object* v___y_6267_; lean_object* v___y_6268_; lean_object* v_a_6276_; lean_object* v_a_6279_; lean_object* v_a_6283_; lean_object* v___x_6286_; lean_object* v___x_6287_; lean_object* v___x_6288_; lean_object* v___x_6289_; lean_object* v___x_6290_; lean_object* v_path_6291_; lean_object* v_a_6293_; lean_object* v___y_6379_; lean_object* v___y_6380_; uint8_t v_a_6420_; lean_object* v___x_6467_; uint8_t v___x_6468_; uint8_t v___x_6469_; 
v___x_6286_ = ((lean_object*)(l_Lake_Cache_revisionDir___closed__0));
v___x_6287_ = l_System_FilePath_join(v_cache_6257_, v___x_6286_);
lean_inc_ref(v_localScope_6259_);
v___x_6288_ = l_System_FilePath_join(v___x_6287_, v_localScope_6259_);
v___x_6289_ = ((lean_object*)(l_Lake_Cache_revisionPath___closed__0));
lean_inc_ref(v_rev_6256_);
v___x_6290_ = lean_string_append(v_rev_6256_, v___x_6289_);
v_path_6291_ = l_System_FilePath_join(v___x_6288_, v___x_6290_);
v___x_6467_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6468_ = l_System_FilePath_pathExists(v_path_6291_);
v___x_6469_ = lean_uint8_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__29);
if (v___x_6469_ == 0)
{
v_a_6420_ = v___x_6468_;
goto v___jp_6419_;
}
else
{
lean_object* v___x_6470_; size_t v___x_6471_; size_t v___x_6472_; lean_object* v___x_6473_; 
v___x_6470_ = lean_box(0);
v___x_6471_ = ((size_t)0ULL);
v___x_6472_ = lean_usize_once(&l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30, &l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30_once, _init_l___private_Lake_Config_Cache_0__Lake_uploadS3___closed__30);
v___x_6473_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v___x_6467_, v___x_6471_, v___x_6472_, v___x_6470_, v___y_6264_);
if (lean_obj_tag(v___x_6473_) == 0)
{
lean_dec_ref_known(v___x_6473_, 1);
v_a_6420_ = v___x_6468_;
goto v___jp_6419_;
}
else
{
lean_object* v_a_6474_; lean_object* v___x_6476_; uint8_t v_isShared_6477_; uint8_t v_isSharedCheck_6481_; 
lean_dec_ref(v_path_6291_);
lean_dec_ref(v_remoteScope_6260_);
lean_dec_ref(v_localScope_6259_);
lean_dec_ref(v_service_6258_);
lean_dec_ref(v_rev_6256_);
v_a_6474_ = lean_ctor_get(v___x_6473_, 0);
v_isSharedCheck_6481_ = !lean_is_exclusive(v___x_6473_);
if (v_isSharedCheck_6481_ == 0)
{
v___x_6476_ = v___x_6473_;
v_isShared_6477_ = v_isSharedCheck_6481_;
goto v_resetjp_6475_;
}
else
{
lean_inc(v_a_6474_);
lean_dec(v___x_6473_);
v___x_6476_ = lean_box(0);
v_isShared_6477_ = v_isSharedCheck_6481_;
goto v_resetjp_6475_;
}
v_resetjp_6475_:
{
lean_object* v___x_6479_; 
if (v_isShared_6477_ == 0)
{
v___x_6479_ = v___x_6476_;
goto v_reusejp_6478_;
}
else
{
lean_object* v_reuseFailAlloc_6480_; 
v_reuseFailAlloc_6480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6480_, 0, v_a_6474_);
v___x_6479_ = v_reuseFailAlloc_6480_;
goto v_reusejp_6478_;
}
v_reusejp_6478_:
{
return v___x_6479_;
}
}
}
}
v___jp_6266_:
{
lean_object* v___x_6269_; lean_object* v___x_6270_; uint8_t v___x_6271_; lean_object* v___x_6272_; lean_object* v___x_6273_; lean_object* v___x_6274_; 
v___x_6269_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__0));
v___x_6270_ = lean_string_append(v___y_6268_, v___x_6269_);
v___x_6271_ = 3;
v___x_6272_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6272_, 0, v___x_6270_);
lean_ctor_set_uint8(v___x_6272_, sizeof(void*)*1, v___x_6271_);
lean_inc_ref(v___y_6264_);
v___x_6273_ = lean_apply_2(v___y_6264_, v___x_6272_, lean_box(0));
v___x_6274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6274_, 0, v___y_6267_);
return v___x_6274_;
}
v___jp_6275_:
{
lean_object* v_s_6277_; 
v_s_6277_ = lean_ctor_get(v_remoteScope_6260_, 0);
lean_inc_ref(v_s_6277_);
lean_dec_ref(v_remoteScope_6260_);
v___y_6267_ = v_a_6276_;
v___y_6268_ = v_s_6277_;
goto v___jp_6266_;
}
v___jp_6278_:
{
lean_object* v___x_6280_; lean_object* v___x_6281_; 
v___x_6280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6280_, 0, v_a_6279_);
v___x_6281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6281_, 0, v___x_6280_);
return v___x_6281_;
}
v___jp_6282_:
{
lean_object* v___x_6284_; lean_object* v___x_6285_; 
v___x_6284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6284_, 0, v_a_6283_);
v___x_6285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6285_, 0, v___x_6284_);
return v___x_6285_;
}
v___jp_6292_:
{
if (lean_obj_tag(v_a_6293_) == 1)
{
lean_object* v_val_6294_; lean_object* v___x_6295_; 
v_val_6294_ = lean_ctor_get(v_a_6293_, 0);
lean_inc(v_val_6294_);
lean_dec_ref_known(v_a_6293_, 1);
lean_inc_ref(v_path_6291_);
v___x_6295_ = l_Lake_createParentDirs(v_path_6291_);
if (lean_obj_tag(v___x_6295_) == 0)
{
lean_object* v___x_6296_; 
lean_dec_ref_known(v___x_6295_, 1);
v___x_6296_ = l_IO_FS_writeFile(v_path_6291_, v_val_6294_);
lean_dec(v_val_6294_);
if (lean_obj_tag(v___x_6296_) == 0)
{
lean_object* v___x_6298_; uint8_t v_isShared_6299_; uint8_t v_isSharedCheck_6348_; 
v_isSharedCheck_6348_ = !lean_is_exclusive(v___x_6296_);
if (v_isSharedCheck_6348_ == 0)
{
lean_object* v_unused_6349_; 
v_unused_6349_ = lean_ctor_get(v___x_6296_, 0);
lean_dec(v_unused_6349_);
v___x_6298_ = v___x_6296_;
v_isShared_6299_ = v_isSharedCheck_6348_;
goto v_resetjp_6297_;
}
else
{
lean_dec(v___x_6296_);
v___x_6298_ = lean_box(0);
v_isShared_6299_ = v_isSharedCheck_6348_;
goto v_resetjp_6297_;
}
v_resetjp_6297_:
{
lean_object* v___x_6300_; lean_object* v___x_6301_; uint8_t v___x_6302_; lean_object* v___x_6303_; lean_object* v___x_6304_; 
v___x_6300_ = lean_string_utf8_byte_size(v_platform_6261_);
v___x_6301_ = lean_unsigned_to_nat(0u);
v___x_6302_ = lean_nat_dec_eq(v___x_6300_, v___x_6301_);
v___x_6303_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6304_ = l_Lake_CacheMap_load(v_path_6291_, v___x_6302_, v___x_6303_);
if (lean_obj_tag(v___x_6304_) == 0)
{
lean_object* v_a_6305_; lean_object* v_a_6306_; lean_object* v___x_6307_; uint8_t v___x_6308_; 
lean_del_object(v___x_6298_);
v_a_6305_ = lean_ctor_get(v___x_6304_, 0);
lean_inc(v_a_6305_);
v_a_6306_ = lean_ctor_get(v___x_6304_, 1);
lean_inc(v_a_6306_);
lean_dec_ref_known(v___x_6304_, 2);
v___x_6307_ = lean_array_get_size(v_a_6306_);
v___x_6308_ = lean_nat_dec_lt(v___x_6301_, v___x_6307_);
if (v___x_6308_ == 0)
{
lean_dec(v_a_6306_);
v_a_6279_ = v_a_6305_;
goto v___jp_6278_;
}
else
{
lean_object* v___x_6309_; size_t v___x_6310_; size_t v___x_6311_; lean_object* v___x_6312_; 
v___x_6309_ = lean_box(0);
v___x_6310_ = ((size_t)0ULL);
v___x_6311_ = lean_usize_of_nat(v___x_6307_);
v___x_6312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6306_, v___x_6310_, v___x_6311_, v___x_6309_, v___y_6264_);
lean_dec(v_a_6306_);
if (lean_obj_tag(v___x_6312_) == 0)
{
lean_dec_ref_known(v___x_6312_, 1);
v_a_6279_ = v_a_6305_;
goto v___jp_6278_;
}
else
{
lean_object* v_a_6313_; lean_object* v___x_6315_; uint8_t v_isShared_6316_; uint8_t v_isSharedCheck_6320_; 
lean_dec(v_a_6305_);
v_a_6313_ = lean_ctor_get(v___x_6312_, 0);
v_isSharedCheck_6320_ = !lean_is_exclusive(v___x_6312_);
if (v_isSharedCheck_6320_ == 0)
{
v___x_6315_ = v___x_6312_;
v_isShared_6316_ = v_isSharedCheck_6320_;
goto v_resetjp_6314_;
}
else
{
lean_inc(v_a_6313_);
lean_dec(v___x_6312_);
v___x_6315_ = lean_box(0);
v_isShared_6316_ = v_isSharedCheck_6320_;
goto v_resetjp_6314_;
}
v_resetjp_6314_:
{
lean_object* v___x_6318_; 
if (v_isShared_6316_ == 0)
{
v___x_6318_ = v___x_6315_;
goto v_reusejp_6317_;
}
else
{
lean_object* v_reuseFailAlloc_6319_; 
v_reuseFailAlloc_6319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6319_, 0, v_a_6313_);
v___x_6318_ = v_reuseFailAlloc_6319_;
goto v_reusejp_6317_;
}
v_reusejp_6317_:
{
return v___x_6318_;
}
}
}
}
}
else
{
lean_object* v_a_6321_; lean_object* v___x_6322_; uint8_t v___x_6323_; 
v_a_6321_ = lean_ctor_get(v___x_6304_, 1);
lean_inc(v_a_6321_);
lean_dec_ref_known(v___x_6304_, 2);
v___x_6322_ = lean_array_get_size(v_a_6321_);
v___x_6323_ = lean_nat_dec_lt(v___x_6301_, v___x_6322_);
if (v___x_6323_ == 0)
{
lean_object* v___x_6324_; lean_object* v___x_6326_; 
lean_dec(v_a_6321_);
v___x_6324_ = lean_box(0);
if (v_isShared_6299_ == 0)
{
lean_ctor_set_tag(v___x_6298_, 1);
lean_ctor_set(v___x_6298_, 0, v___x_6324_);
v___x_6326_ = v___x_6298_;
goto v_reusejp_6325_;
}
else
{
lean_object* v_reuseFailAlloc_6327_; 
v_reuseFailAlloc_6327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6327_, 0, v___x_6324_);
v___x_6326_ = v_reuseFailAlloc_6327_;
goto v_reusejp_6325_;
}
v_reusejp_6325_:
{
return v___x_6326_;
}
}
else
{
lean_object* v___x_6328_; size_t v___x_6329_; size_t v___x_6330_; lean_object* v___x_6331_; 
lean_del_object(v___x_6298_);
v___x_6328_ = lean_box(0);
v___x_6329_ = ((size_t)0ULL);
v___x_6330_ = lean_usize_of_nat(v___x_6322_);
v___x_6331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6321_, v___x_6329_, v___x_6330_, v___x_6328_, v___y_6264_);
lean_dec(v_a_6321_);
if (lean_obj_tag(v___x_6331_) == 0)
{
lean_object* v___x_6333_; uint8_t v_isShared_6334_; uint8_t v_isSharedCheck_6338_; 
v_isSharedCheck_6338_ = !lean_is_exclusive(v___x_6331_);
if (v_isSharedCheck_6338_ == 0)
{
lean_object* v_unused_6339_; 
v_unused_6339_ = lean_ctor_get(v___x_6331_, 0);
lean_dec(v_unused_6339_);
v___x_6333_ = v___x_6331_;
v_isShared_6334_ = v_isSharedCheck_6338_;
goto v_resetjp_6332_;
}
else
{
lean_dec(v___x_6331_);
v___x_6333_ = lean_box(0);
v_isShared_6334_ = v_isSharedCheck_6338_;
goto v_resetjp_6332_;
}
v_resetjp_6332_:
{
lean_object* v___x_6336_; 
if (v_isShared_6334_ == 0)
{
lean_ctor_set_tag(v___x_6333_, 1);
lean_ctor_set(v___x_6333_, 0, v___x_6328_);
v___x_6336_ = v___x_6333_;
goto v_reusejp_6335_;
}
else
{
lean_object* v_reuseFailAlloc_6337_; 
v_reuseFailAlloc_6337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6337_, 0, v___x_6328_);
v___x_6336_ = v_reuseFailAlloc_6337_;
goto v_reusejp_6335_;
}
v_reusejp_6335_:
{
return v___x_6336_;
}
}
}
else
{
lean_object* v_a_6340_; lean_object* v___x_6342_; uint8_t v_isShared_6343_; uint8_t v_isSharedCheck_6347_; 
v_a_6340_ = lean_ctor_get(v___x_6331_, 0);
v_isSharedCheck_6347_ = !lean_is_exclusive(v___x_6331_);
if (v_isSharedCheck_6347_ == 0)
{
v___x_6342_ = v___x_6331_;
v_isShared_6343_ = v_isSharedCheck_6347_;
goto v_resetjp_6341_;
}
else
{
lean_inc(v_a_6340_);
lean_dec(v___x_6331_);
v___x_6342_ = lean_box(0);
v_isShared_6343_ = v_isSharedCheck_6347_;
goto v_resetjp_6341_;
}
v_resetjp_6341_:
{
lean_object* v___x_6345_; 
if (v_isShared_6343_ == 0)
{
v___x_6345_ = v___x_6342_;
goto v_reusejp_6344_;
}
else
{
lean_object* v_reuseFailAlloc_6346_; 
v_reuseFailAlloc_6346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6346_, 0, v_a_6340_);
v___x_6345_ = v_reuseFailAlloc_6346_;
goto v_reusejp_6344_;
}
v_reusejp_6344_:
{
return v___x_6345_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6350_; lean_object* v___x_6352_; uint8_t v_isShared_6353_; uint8_t v_isSharedCheck_6362_; 
lean_dec_ref(v_path_6291_);
v_a_6350_ = lean_ctor_get(v___x_6296_, 0);
v_isSharedCheck_6362_ = !lean_is_exclusive(v___x_6296_);
if (v_isSharedCheck_6362_ == 0)
{
v___x_6352_ = v___x_6296_;
v_isShared_6353_ = v_isSharedCheck_6362_;
goto v_resetjp_6351_;
}
else
{
lean_inc(v_a_6350_);
lean_dec(v___x_6296_);
v___x_6352_ = lean_box(0);
v_isShared_6353_ = v_isSharedCheck_6362_;
goto v_resetjp_6351_;
}
v_resetjp_6351_:
{
lean_object* v___x_6354_; uint8_t v___x_6355_; lean_object* v___x_6356_; lean_object* v___x_6357_; lean_object* v___x_6358_; lean_object* v___x_6360_; 
v___x_6354_ = lean_io_error_to_string(v_a_6350_);
v___x_6355_ = 3;
v___x_6356_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6356_, 0, v___x_6354_);
lean_ctor_set_uint8(v___x_6356_, sizeof(void*)*1, v___x_6355_);
lean_inc_ref(v___y_6264_);
v___x_6357_ = lean_apply_2(v___y_6264_, v___x_6356_, lean_box(0));
v___x_6358_ = lean_box(0);
if (v_isShared_6353_ == 0)
{
lean_ctor_set(v___x_6352_, 0, v___x_6358_);
v___x_6360_ = v___x_6352_;
goto v_reusejp_6359_;
}
else
{
lean_object* v_reuseFailAlloc_6361_; 
v_reuseFailAlloc_6361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6361_, 0, v___x_6358_);
v___x_6360_ = v_reuseFailAlloc_6361_;
goto v_reusejp_6359_;
}
v_reusejp_6359_:
{
return v___x_6360_;
}
}
}
}
else
{
lean_object* v_a_6363_; lean_object* v___x_6365_; uint8_t v_isShared_6366_; uint8_t v_isSharedCheck_6375_; 
lean_dec(v_val_6294_);
lean_dec_ref(v_path_6291_);
v_a_6363_ = lean_ctor_get(v___x_6295_, 0);
v_isSharedCheck_6375_ = !lean_is_exclusive(v___x_6295_);
if (v_isSharedCheck_6375_ == 0)
{
v___x_6365_ = v___x_6295_;
v_isShared_6366_ = v_isSharedCheck_6375_;
goto v_resetjp_6364_;
}
else
{
lean_inc(v_a_6363_);
lean_dec(v___x_6295_);
v___x_6365_ = lean_box(0);
v_isShared_6366_ = v_isSharedCheck_6375_;
goto v_resetjp_6364_;
}
v_resetjp_6364_:
{
lean_object* v___x_6367_; uint8_t v___x_6368_; lean_object* v___x_6369_; lean_object* v___x_6370_; lean_object* v___x_6371_; lean_object* v___x_6373_; 
v___x_6367_ = lean_io_error_to_string(v_a_6363_);
v___x_6368_ = 3;
v___x_6369_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6369_, 0, v___x_6367_);
lean_ctor_set_uint8(v___x_6369_, sizeof(void*)*1, v___x_6368_);
lean_inc_ref(v___y_6264_);
v___x_6370_ = lean_apply_2(v___y_6264_, v___x_6369_, lean_box(0));
v___x_6371_ = lean_box(0);
if (v_isShared_6366_ == 0)
{
lean_ctor_set(v___x_6365_, 0, v___x_6371_);
v___x_6373_ = v___x_6365_;
goto v_reusejp_6372_;
}
else
{
lean_object* v_reuseFailAlloc_6374_; 
v_reuseFailAlloc_6374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6374_, 0, v___x_6371_);
v___x_6373_ = v_reuseFailAlloc_6374_;
goto v_reusejp_6372_;
}
v_reusejp_6372_:
{
return v___x_6373_;
}
}
}
}
else
{
lean_object* v___x_6376_; lean_object* v___x_6377_; 
lean_dec(v_a_6293_);
lean_dec_ref(v_path_6291_);
v___x_6376_ = lean_box(0);
v___x_6377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6377_, 0, v___x_6376_);
return v___x_6377_;
}
}
v___jp_6378_:
{
lean_object* v___x_6381_; lean_object* v___x_6382_; lean_object* v___x_6383_; 
v___x_6381_ = lean_unsigned_to_nat(0u);
v___x_6382_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6383_ = l_Lake_getUrl_x3f(v___y_6379_, v___y_6380_, v___x_6382_);
if (lean_obj_tag(v___x_6383_) == 0)
{
lean_object* v_a_6384_; lean_object* v_a_6385_; lean_object* v___x_6386_; uint8_t v___x_6387_; 
v_a_6384_ = lean_ctor_get(v___x_6383_, 0);
lean_inc(v_a_6384_);
v_a_6385_ = lean_ctor_get(v___x_6383_, 1);
lean_inc(v_a_6385_);
lean_dec_ref_known(v___x_6383_, 2);
v___x_6386_ = lean_array_get_size(v_a_6385_);
v___x_6387_ = lean_nat_dec_lt(v___x_6381_, v___x_6386_);
if (v___x_6387_ == 0)
{
lean_dec(v_a_6385_);
lean_dec_ref(v_remoteScope_6260_);
v_a_6293_ = v_a_6384_;
goto v___jp_6292_;
}
else
{
lean_object* v___x_6388_; size_t v___x_6389_; size_t v___x_6390_; lean_object* v___x_6391_; 
v___x_6388_ = lean_box(0);
v___x_6389_ = ((size_t)0ULL);
v___x_6390_ = lean_usize_of_nat(v___x_6386_);
v___x_6391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6385_, v___x_6389_, v___x_6390_, v___x_6388_, v___y_6264_);
lean_dec(v_a_6385_);
if (lean_obj_tag(v___x_6391_) == 0)
{
lean_dec_ref_known(v___x_6391_, 1);
lean_dec_ref(v_remoteScope_6260_);
v_a_6293_ = v_a_6384_;
goto v___jp_6292_;
}
else
{
lean_object* v_a_6392_; 
lean_dec(v_a_6384_);
lean_dec_ref(v_path_6291_);
v_a_6392_ = lean_ctor_get(v___x_6391_, 0);
lean_inc(v_a_6392_);
lean_dec_ref_known(v___x_6391_, 1);
v_a_6276_ = v_a_6392_;
goto v___jp_6275_;
}
}
}
else
{
lean_object* v_a_6393_; lean_object* v___x_6394_; uint8_t v___x_6395_; 
lean_dec_ref(v_path_6291_);
v_a_6393_ = lean_ctor_get(v___x_6383_, 1);
lean_inc(v_a_6393_);
lean_dec_ref_known(v___x_6383_, 2);
v___x_6394_ = lean_array_get_size(v_a_6393_);
v___x_6395_ = lean_nat_dec_lt(v___x_6381_, v___x_6394_);
if (v___x_6395_ == 0)
{
lean_object* v___x_6396_; 
lean_dec(v_a_6393_);
v___x_6396_ = lean_box(0);
v_a_6276_ = v___x_6396_;
goto v___jp_6275_;
}
else
{
lean_object* v___x_6397_; size_t v___x_6398_; size_t v___x_6399_; lean_object* v___x_6400_; 
v___x_6397_ = lean_box(0);
v___x_6398_ = ((size_t)0ULL);
v___x_6399_ = lean_usize_of_nat(v___x_6394_);
v___x_6400_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6393_, v___x_6398_, v___x_6399_, v___x_6397_, v___y_6264_);
lean_dec(v_a_6393_);
if (lean_obj_tag(v___x_6400_) == 0)
{
lean_dec_ref_known(v___x_6400_, 1);
v_a_6276_ = v___x_6397_;
goto v___jp_6275_;
}
else
{
lean_object* v_a_6401_; 
v_a_6401_ = lean_ctor_get(v___x_6400_, 0);
lean_inc(v_a_6401_);
lean_dec_ref_known(v___x_6400_, 1);
v_a_6276_ = v_a_6401_;
goto v___jp_6275_;
}
}
}
}
v___jp_6402_:
{
lean_object* v___x_6403_; lean_object* v___x_6404_; lean_object* v___x_6405_; lean_object* v___x_6406_; lean_object* v___x_6407_; lean_object* v___x_6408_; lean_object* v___x_6409_; lean_object* v___x_6410_; lean_object* v___x_6411_; lean_object* v___x_6412_; uint8_t v___x_6413_; lean_object* v___x_6414_; lean_object* v___x_6415_; uint8_t v_isReservoir_6416_; 
lean_inc_ref(v_remoteScope_6260_);
lean_inc_ref(v_service_6258_);
v___x_6403_ = l_Lake_CacheService_revisionUrl(v_rev_6256_, v_service_6258_, v_remoteScope_6260_, v_platform_6261_, v_toolchain_6262_);
v___x_6404_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__1));
v___x_6405_ = lean_string_append(v_localScope_6259_, v___x_6404_);
v___x_6406_ = lean_string_append(v___x_6405_, v_rev_6256_);
lean_dec_ref(v_rev_6256_);
v___x_6407_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_6408_ = lean_string_append(v___x_6406_, v___x_6407_);
v___x_6409_ = lean_string_append(v___x_6408_, v_path_6291_);
v___x_6410_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_6411_ = lean_string_append(v___x_6409_, v___x_6410_);
v___x_6412_ = lean_string_append(v___x_6411_, v___x_6403_);
v___x_6413_ = 1;
v___x_6414_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6414_, 0, v___x_6412_);
lean_ctor_set_uint8(v___x_6414_, sizeof(void*)*1, v___x_6413_);
lean_inc_ref(v___y_6264_);
v___x_6415_ = lean_apply_2(v___y_6264_, v___x_6414_, lean_box(0));
v_isReservoir_6416_ = lean_ctor_get_uint8(v_service_6258_, sizeof(void*)*5);
lean_dec_ref(v_service_6258_);
if (v_isReservoir_6416_ == 0)
{
lean_object* v___x_6417_; 
v___x_6417_ = ((lean_object*)(l_Lake_CacheService_downloadRevisionOutputs_x3f___closed__2));
v___y_6379_ = v___x_6403_;
v___y_6380_ = v___x_6417_;
goto v___jp_6378_;
}
else
{
lean_object* v___x_6418_; 
v___x_6418_ = l_Lake_Reservoir_lakeHeaders;
v___y_6379_ = v___x_6403_;
v___y_6380_ = v___x_6418_;
goto v___jp_6378_;
}
}
v___jp_6419_:
{
if (v_a_6420_ == 0)
{
goto v___jp_6402_;
}
else
{
if (v_force_6263_ == 0)
{
lean_object* v___x_6421_; lean_object* v___x_6422_; uint8_t v___x_6423_; lean_object* v___x_6424_; lean_object* v___x_6425_; 
lean_dec_ref(v_remoteScope_6260_);
lean_dec_ref(v_localScope_6259_);
lean_dec_ref(v_service_6258_);
lean_dec_ref(v_rev_6256_);
v___x_6421_ = lean_string_utf8_byte_size(v_platform_6261_);
v___x_6422_ = lean_unsigned_to_nat(0u);
v___x_6423_ = lean_nat_dec_eq(v___x_6421_, v___x_6422_);
v___x_6424_ = ((lean_object*)(l_Lake_CacheMap_parse___closed__2));
v___x_6425_ = l_Lake_CacheMap_load(v_path_6291_, v___x_6423_, v___x_6424_);
if (lean_obj_tag(v___x_6425_) == 0)
{
lean_object* v_a_6426_; lean_object* v_a_6427_; lean_object* v___x_6428_; uint8_t v___x_6429_; 
v_a_6426_ = lean_ctor_get(v___x_6425_, 0);
lean_inc(v_a_6426_);
v_a_6427_ = lean_ctor_get(v___x_6425_, 1);
lean_inc(v_a_6427_);
lean_dec_ref_known(v___x_6425_, 2);
v___x_6428_ = lean_array_get_size(v_a_6427_);
v___x_6429_ = lean_nat_dec_lt(v___x_6422_, v___x_6428_);
if (v___x_6429_ == 0)
{
lean_dec(v_a_6427_);
v_a_6283_ = v_a_6426_;
goto v___jp_6282_;
}
else
{
lean_object* v___x_6430_; size_t v___x_6431_; size_t v___x_6432_; lean_object* v___x_6433_; 
v___x_6430_ = lean_box(0);
v___x_6431_ = ((size_t)0ULL);
v___x_6432_ = lean_usize_of_nat(v___x_6428_);
v___x_6433_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6427_, v___x_6431_, v___x_6432_, v___x_6430_, v___y_6264_);
lean_dec(v_a_6427_);
if (lean_obj_tag(v___x_6433_) == 0)
{
lean_dec_ref_known(v___x_6433_, 1);
v_a_6283_ = v_a_6426_;
goto v___jp_6282_;
}
else
{
lean_object* v_a_6434_; lean_object* v___x_6436_; uint8_t v_isShared_6437_; uint8_t v_isSharedCheck_6441_; 
lean_dec(v_a_6426_);
v_a_6434_ = lean_ctor_get(v___x_6433_, 0);
v_isSharedCheck_6441_ = !lean_is_exclusive(v___x_6433_);
if (v_isSharedCheck_6441_ == 0)
{
v___x_6436_ = v___x_6433_;
v_isShared_6437_ = v_isSharedCheck_6441_;
goto v_resetjp_6435_;
}
else
{
lean_inc(v_a_6434_);
lean_dec(v___x_6433_);
v___x_6436_ = lean_box(0);
v_isShared_6437_ = v_isSharedCheck_6441_;
goto v_resetjp_6435_;
}
v_resetjp_6435_:
{
lean_object* v___x_6439_; 
if (v_isShared_6437_ == 0)
{
v___x_6439_ = v___x_6436_;
goto v_reusejp_6438_;
}
else
{
lean_object* v_reuseFailAlloc_6440_; 
v_reuseFailAlloc_6440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6440_, 0, v_a_6434_);
v___x_6439_ = v_reuseFailAlloc_6440_;
goto v_reusejp_6438_;
}
v_reusejp_6438_:
{
return v___x_6439_;
}
}
}
}
}
else
{
lean_object* v_a_6442_; lean_object* v___x_6443_; uint8_t v___x_6444_; 
v_a_6442_ = lean_ctor_get(v___x_6425_, 1);
lean_inc(v_a_6442_);
lean_dec_ref_known(v___x_6425_, 2);
v___x_6443_ = lean_array_get_size(v_a_6442_);
v___x_6444_ = lean_nat_dec_lt(v___x_6422_, v___x_6443_);
if (v___x_6444_ == 0)
{
lean_object* v___x_6445_; lean_object* v___x_6446_; 
lean_dec(v_a_6442_);
v___x_6445_ = lean_box(0);
v___x_6446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6446_, 0, v___x_6445_);
return v___x_6446_;
}
else
{
lean_object* v___x_6447_; size_t v___x_6448_; size_t v___x_6449_; lean_object* v___x_6450_; 
v___x_6447_ = lean_box(0);
v___x_6448_ = ((size_t)0ULL);
v___x_6449_ = lean_usize_of_nat(v___x_6443_);
v___x_6450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_CacheMap_parse_spec__0(v_a_6442_, v___x_6448_, v___x_6449_, v___x_6447_, v___y_6264_);
lean_dec(v_a_6442_);
if (lean_obj_tag(v___x_6450_) == 0)
{
lean_object* v___x_6452_; uint8_t v_isShared_6453_; uint8_t v_isSharedCheck_6457_; 
v_isSharedCheck_6457_ = !lean_is_exclusive(v___x_6450_);
if (v_isSharedCheck_6457_ == 0)
{
lean_object* v_unused_6458_; 
v_unused_6458_ = lean_ctor_get(v___x_6450_, 0);
lean_dec(v_unused_6458_);
v___x_6452_ = v___x_6450_;
v_isShared_6453_ = v_isSharedCheck_6457_;
goto v_resetjp_6451_;
}
else
{
lean_dec(v___x_6450_);
v___x_6452_ = lean_box(0);
v_isShared_6453_ = v_isSharedCheck_6457_;
goto v_resetjp_6451_;
}
v_resetjp_6451_:
{
lean_object* v___x_6455_; 
if (v_isShared_6453_ == 0)
{
lean_ctor_set_tag(v___x_6452_, 1);
lean_ctor_set(v___x_6452_, 0, v___x_6447_);
v___x_6455_ = v___x_6452_;
goto v_reusejp_6454_;
}
else
{
lean_object* v_reuseFailAlloc_6456_; 
v_reuseFailAlloc_6456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6456_, 0, v___x_6447_);
v___x_6455_ = v_reuseFailAlloc_6456_;
goto v_reusejp_6454_;
}
v_reusejp_6454_:
{
return v___x_6455_;
}
}
}
else
{
lean_object* v_a_6459_; lean_object* v___x_6461_; uint8_t v_isShared_6462_; uint8_t v_isSharedCheck_6466_; 
v_a_6459_ = lean_ctor_get(v___x_6450_, 0);
v_isSharedCheck_6466_ = !lean_is_exclusive(v___x_6450_);
if (v_isSharedCheck_6466_ == 0)
{
v___x_6461_ = v___x_6450_;
v_isShared_6462_ = v_isSharedCheck_6466_;
goto v_resetjp_6460_;
}
else
{
lean_inc(v_a_6459_);
lean_dec(v___x_6450_);
v___x_6461_ = lean_box(0);
v_isShared_6462_ = v_isSharedCheck_6466_;
goto v_resetjp_6460_;
}
v_resetjp_6460_:
{
lean_object* v___x_6464_; 
if (v_isShared_6462_ == 0)
{
v___x_6464_ = v___x_6461_;
goto v_reusejp_6463_;
}
else
{
lean_object* v_reuseFailAlloc_6465_; 
v_reuseFailAlloc_6465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6465_, 0, v_a_6459_);
v___x_6464_ = v_reuseFailAlloc_6465_;
goto v_reusejp_6463_;
}
v_reusejp_6463_:
{
return v___x_6464_;
}
}
}
}
}
}
else
{
goto v___jp_6402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_downloadRevisionOutputs_x3f___boxed(lean_object* v_rev_6482_, lean_object* v_cache_6483_, lean_object* v_service_6484_, lean_object* v_localScope_6485_, lean_object* v_remoteScope_6486_, lean_object* v_platform_6487_, lean_object* v_toolchain_6488_, lean_object* v_force_6489_, lean_object* v___y_6490_, lean_object* v___y_6491_){
_start:
{
uint8_t v_force_boxed_6492_; lean_object* v_res_6493_; 
v_force_boxed_6492_ = lean_unbox(v_force_6489_);
v_res_6493_ = l_Lake_CacheService_downloadRevisionOutputs_x3f(v_rev_6482_, v_cache_6483_, v_service_6484_, v_localScope_6485_, v_remoteScope_6486_, v_platform_6487_, v_toolchain_6488_, v_force_boxed_6492_, v___y_6490_);
lean_dec_ref(v___y_6490_);
lean_dec_ref(v_toolchain_6488_);
lean_dec_ref(v_platform_6487_);
return v_res_6493_;
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs(lean_object* v_rev_6495_, lean_object* v_outputs_6496_, lean_object* v_service_6497_, lean_object* v_scope_6498_, lean_object* v_platform_6499_, lean_object* v_toolchain_6500_, lean_object* v___y_6501_){
_start:
{
lean_object* v_url_6503_; lean_object* v___y_6505_; lean_object* v_s_6521_; 
lean_inc_ref(v_scope_6498_);
lean_inc_ref(v_service_6497_);
v_url_6503_ = l___private_Lake_Config_Cache_0__Lake_CacheService_s3RevisionUrl(v_rev_6495_, v_service_6497_, v_scope_6498_, v_platform_6499_, v_toolchain_6500_);
v_s_6521_ = lean_ctor_get(v_scope_6498_, 0);
lean_inc_ref(v_s_6521_);
lean_dec_ref(v_scope_6498_);
v___y_6505_ = v_s_6521_;
goto v___jp_6504_;
v___jp_6504_:
{
lean_object* v___x_6506_; lean_object* v___x_6507_; lean_object* v___x_6508_; lean_object* v___x_6509_; lean_object* v___x_6510_; lean_object* v___x_6511_; lean_object* v___x_6512_; lean_object* v___x_6513_; lean_object* v___x_6514_; uint8_t v___x_6515_; lean_object* v___x_6516_; lean_object* v___x_6517_; lean_object* v_key_6518_; lean_object* v___x_6519_; lean_object* v___x_6520_; 
v___x_6506_ = ((lean_object*)(l_Lake_CacheService_uploadRevisionOutputs___closed__0));
v___x_6507_ = lean_string_append(v___y_6505_, v___x_6506_);
v___x_6508_ = lean_string_append(v___x_6507_, v_rev_6495_);
v___x_6509_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__1));
v___x_6510_ = lean_string_append(v___x_6508_, v___x_6509_);
v___x_6511_ = lean_string_append(v___x_6510_, v_outputs_6496_);
v___x_6512_ = ((lean_object*)(l_Lake_CacheService_downloadArtifact___closed__2));
v___x_6513_ = lean_string_append(v___x_6511_, v___x_6512_);
v___x_6514_ = lean_string_append(v___x_6513_, v_url_6503_);
v___x_6515_ = 1;
v___x_6516_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6516_, 0, v___x_6514_);
lean_ctor_set_uint8(v___x_6516_, sizeof(void*)*1, v___x_6515_);
lean_inc_ref(v___y_6501_);
v___x_6517_ = lean_apply_2(v___y_6501_, v___x_6516_, lean_box(0));
v_key_6518_ = lean_ctor_get(v_service_6497_, 1);
lean_inc_ref(v_key_6518_);
lean_dec_ref(v_service_6497_);
v___x_6519_ = ((lean_object*)(l_Lake_CacheService_mapContentType___closed__0));
v___x_6520_ = l___private_Lake_Config_Cache_0__Lake_uploadS3(v_outputs_6496_, v___x_6519_, v_url_6503_, v_key_6518_, v___y_6501_);
return v___x_6520_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_CacheService_uploadRevisionOutputs___boxed(lean_object* v_rev_6522_, lean_object* v_outputs_6523_, lean_object* v_service_6524_, lean_object* v_scope_6525_, lean_object* v_platform_6526_, lean_object* v_toolchain_6527_, lean_object* v___y_6528_, lean_object* v___y_6529_){
_start:
{
lean_object* v_res_6530_; 
v_res_6530_ = l_Lake_CacheService_uploadRevisionOutputs(v_rev_6522_, v_outputs_6523_, v_service_6524_, v_scope_6525_, v_platform_6526_, v_toolchain_6527_, v___y_6528_);
lean_dec_ref(v___y_6528_);
lean_dec_ref(v_toolchain_6527_);
lean_dec_ref(v_platform_6526_);
lean_dec_ref(v_rev_6522_);
return v_res_6530_;
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
