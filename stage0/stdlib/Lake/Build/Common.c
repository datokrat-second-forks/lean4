// Lean compiler output
// Module: Lake.Build.Common
// Imports: public import Lake.Build.Job.Monad public import Lake.Config.Monad public import Lake.Util.JsonObject public import Lake.Util.IO public import Lake.Build.Actions
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
extern lean_object* l_instMonadBaseIO;
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instAlternativeELogTOfMonad___redArg(lean_object*);
lean_object* l_ReaderT_instAlternativeOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_instAlternativeOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_ReaderT_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(lean_object*, lean_object*);
lean_object* l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__0(lean_object*);
lean_object* l_instMonadBaseIO___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EquipT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EquipT_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_JobM_runFetchM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_lowerHexUInt64(uint64_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
extern lean_object* l_System_Platform_target;
uint64_t lean_string_hash(lean_object*);
extern uint64_t l_Lake_Hash_nil;
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_Lake_BuildTrace_mix(lean_object*, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lake_compileStaticLib(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lake_Artifact_trace(lean_object*);
lean_object* lean_io_metadata(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lake_Hash_ofJsonNumber_x3f(lean_object*);
lean_object* l_Lake_JsonObject_getJson_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lake_instFromJsonLogEntry_fromJson(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lake_Hash_ofDecimal_x3f(lean_object*);
lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
lean_object* l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(uint64_t, lean_object*, lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* lean_io_hard_link(lean_object*, lean_object*);
lean_object* l_IO_setAccessRights(lean_object*, lean_object*);
lean_object* l_Lake_copyFile(lean_object*, lean_object*);
lean_object* l_Lake_JsonObject_insertJson(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instToJsonLogEntry_toJson(lean_object*);
uint8_t l_Lake_JobAction_merge(uint8_t, uint8_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* l_Lake_removeFileIfExists(lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* l_Lake_ArtifactDescr_fromJson_x3f(lean_object*);
lean_object* l_Lean_Json_render(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lake_CacheService_artifactUrl(uint64_t, lean_object*, lean_object*);
lean_object* l_Lake_downloadArtifactCore(uint64_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Package_cacheScope(lean_object*);
lean_object* l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_Lake_Cache_readOutputs_x3f(lean_object*, lean_object*, uint64_t, lean_object*);
uint8_t l_IO_FS_instOrdSystemTime_ord(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
uint64_t lean_byte_array_hash(lean_object*);
lean_object* l_Lake_writeBinFileIfNew(lean_object*, lean_object*);
lean_object* l_String_crlfToLf(lean_object*);
lean_object* l_Lake_writeFileIfNew(lean_object*, lean_object*);
lean_object* l_Lake_computeBinFileHash(lean_object*);
lean_object* l_Lake_computeTextFileHash(lean_object*);
lean_object* l_Lake_Hash_load_x3f(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lake_instDataKindFilePath;
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Job_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instDecidableEqHash___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lake_MTime_checkUpToDate___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_sharedLibExt;
lean_object* l_Lake_Dynlib_dir_x3f(lean_object*);
lean_object* l_Lake_compileSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Lake_compileO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_LeanInstall_ccLinkFlags(uint8_t, lean_object*);
lean_object* l_Lake_Job_async___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* l_System_FilePath_walkDir(lean_object*, lean_object*);
extern lean_object* l_System_FilePath_exeExtension;
lean_object* l_Lake_compileExe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lake_Job_bindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_instDataKindDynlib;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__0 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__0_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__1 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__1_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__2 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__2_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__3 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__3_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__4 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__4_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__5 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__5_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__6 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__6_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__0_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__1_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__7 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__7_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__7_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__2_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__3_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__4_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__5_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__8 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__8_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__8_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__6_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__9 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__9_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__7_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__10 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__10_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__7_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__11 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__11_value;
static const lean_ctor_object l_Lake_instMonadWorkspaceJobM___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__10_value),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__11_value)}};
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__12 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__12_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_read___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__9_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__13 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__13_value;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__14;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__15;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__16 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__16_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__8___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__16_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__17 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__17_value;
static const lean_closure_object l_Lake_instMonadWorkspaceJobM___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instPure___redArg___lam__0, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__17_value)} };
static const lean_object* l_Lake_instMonadWorkspaceJobM___closed__18 = (const lean_object*)&l_Lake_instMonadWorkspaceJobM___closed__18_value;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__19;
static lean_once_cell_t l_Lake_instMonadWorkspaceJobM___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instMonadWorkspaceJobM___closed__20;
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceJobM;
static lean_once_cell_t l_Lake_platformTrace___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_platformTrace___closed__0;
static lean_once_cell_t l_Lake_platformTrace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_platformTrace___closed__1;
static const lean_array_object l_Lake_platformTrace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_platformTrace___closed__2 = (const lean_object*)&l_Lake_platformTrace___closed__2_value;
static lean_once_cell_t l_Lake_platformTrace___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_platformTrace___closed__3;
static lean_once_cell_t l_Lake_platformTrace___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_platformTrace___closed__4;
static lean_once_cell_t l_Lake_platformTrace___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_platformTrace___closed__5;
LEAN_EXPORT lean_object* l_Lake_platformTrace;
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_addPureTrace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lake_addPureTrace___redArg___closed__0 = (const lean_object*)&l_Lake_addPureTrace___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPureTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_addPureTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "2025-09-10"};
static const lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Prod_toJson___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(lean_object*);
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "schemaVersion"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__0 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__0_value;
static const lean_ctor_object l_Lake_BuildMetadata_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0_value)}};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__1 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__1_value;
static lean_once_cell_t l_Lake_BuildMetadata_toJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildMetadata_toJson___closed__2;
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "depHash"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__3 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__3_value;
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inputs"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__4 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__4_value;
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "outputs"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__5 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__5_value;
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "log"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__6 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__6_value;
static const lean_string_object l_Lake_BuildMetadata_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "synthetic"};
static const lean_object* l_Lake_BuildMetadata_toJson___closed__7 = (const lean_object*)&l_Lake_BuildMetadata_toJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_toJson(lean_object*);
static const lean_closure_object l_Lake_instToJsonBuildMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildMetadata_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToJsonBuildMetadata___closed__0 = (const lean_object*)&l_Lake_instToJsonBuildMetadata___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonBuildMetadata = (const lean_object*)&l_Lake_instToJsonBuildMetadata___closed__0_value;
static const lean_array_object l_Lake_BuildMetadata_ofStub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuildMetadata_ofStub___closed__0 = (const lean_object*)&l_Lake_BuildMetadata_ofStub___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub(uint64_t);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub___boxed(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected pair, got '"};
static const lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0 = (const lean_object*)&l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0_value;
static const lean_string_object l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__1 = (const lean_object*)&l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(lean_object*);
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "synthetic: "};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0_value;
static const lean_array_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "log: "};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "outputs: "};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3_value;
static const lean_array_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "inputs: "};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "property not found: depHash"};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6_value;
static const lean_ctor_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__6_value)}};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "depHash: "};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8_value;
static const lean_string_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "invalid trace: expected string 'depHash' of decimal digits"};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9_value;
static const lean_ctor_object l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__9_value)}};
static const lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10 = (const lean_object*)&l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10_value;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___boxed(lean_object*);
static const lean_string_object l_Lake_BuildMetadata_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid trace stub: "};
static const lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__0 = (const lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__0_value;
static const lean_string_object l_Lake_BuildMetadata_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "unknown trace format: "};
static const lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__1 = (const lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lake_BuildMetadata_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invalid trace: "};
static const lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__2 = (const lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__2_value;
static const lean_string_object l_Lake_BuildMetadata_fromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "unknown trace format: expected JSON number or object"};
static const lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__3 = (const lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__3_value;
static const lean_ctor_object l_Lake_BuildMetadata_fromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__3_value)}};
static const lean_object* l_Lake_BuildMetadata_fromJson_x3f___closed__4 = (const lean_object*)&l_Lake_BuildMetadata_fromJson_x3f___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f___boxed(lean_object*);
static const lean_closure_object l_Lake_instFromJsonBuildMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildMetadata_fromJson_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instFromJsonBuildMetadata___closed__0 = (const lean_object*)&l_Lake_instFromJsonBuildMetadata___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instFromJsonBuildMetadata = (const lean_object*)&l_Lake_instFromJsonBuildMetadata___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_parse(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_readTraceFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ": read failed: "};
static const lean_object* l_Lake_readTraceFile___closed__0 = (const lean_object*)&l_Lake_readTraceFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_readTraceFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_readTraceFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace(lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqOutputStatus(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqOutputStatus___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofHashCheck(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofHashCheck___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofMTimeCheck(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofMTimeCheck___boxed(lean_object*);
static lean_once_cell_t l_Lake_OutputStatus_isUpToDate___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OutputStatus_isUpToDate___closed__0;
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isUpToDate(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isUpToDate___boxed(lean_object*);
static lean_once_cell_t l_Lake_OutputStatus_isCacheable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OutputStatus_isCacheable___closed__0;
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isCacheable(uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isCacheable___boxed(lean_object*);
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonPUnit___lam__0(lean_object*);
static const lean_closure_object l_Lake_instToOutputJsonPUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToOutputJsonPUnit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToOutputJsonPUnit___closed__0 = (const lean_object*)&l_Lake_instToOutputJsonPUnit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToOutputJsonPUnit = (const lean_object*)&l_Lake_instToOutputJsonPUnit___closed__0_value;
static const lean_string_object l_Lake_instToOutputJsonArtifact___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_instToOutputJsonArtifact___lam__0___closed__0 = (const lean_object*)&l_Lake_instToOutputJsonArtifact___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instToOutputJsonArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToOutputJsonArtifact___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToOutputJsonArtifact___closed__0 = (const lean_object*)&l_Lake_instToOutputJsonArtifact___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToOutputJsonArtifact = (const lean_object*)&l_Lake_instToOutputJsonArtifact___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildAction___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "target is out-of-date and needs to be rebuilt"};
static const lean_object* l_Lake_buildAction___redArg___closed__0 = (const lean_object*)&l_Lake_buildAction___redArg___closed__0_value;
static const lean_ctor_object l_Lake_buildAction___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_buildAction___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_buildAction___redArg___closed__1 = (const lean_object*)&l_Lake_buildAction___redArg___closed__1_value;
static const lean_string_object l_Lake_buildAction___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nobuild"};
static const lean_object* l_Lake_buildAction___redArg___closed__2 = (const lean_object*)&l_Lake_buildAction___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_writeFileHash___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".hash"};
static const lean_object* l_Lake_writeFileHash___closed__0 = (const lean_object*)&l_Lake_writeFileHash___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_writeFileHash(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lake_writeFileHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheFileHash(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_cacheFileHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_clearFileHash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_clearFileHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildFileUnlessUpToDate_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ".trace"};
static const lean_object* l_Lake_buildFileUnlessUpToDate_x27___closed__0 = (const lean_object*)&l_Lake_buildFileUnlessUpToDate_x27___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Cache_saveArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "failed to cache artifact: "};
static const lean_object* l_Lake_Cache_saveArtifact___closed__0 = (const lean_object*)&l_Lake_Cache_saveArtifact___closed__0_value;
static const lean_string_object l_Lake_Cache_saveArtifact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "artifacts"};
static const lean_object* l_Lake_Cache_saveArtifact___closed__1 = (const lean_object*)&l_Lake_Cache_saveArtifact___closed__1_value;
static const lean_ctor_object l_Lake_Cache_saveArtifact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Cache_saveArtifact___closed__2 = (const lean_object*)&l_Lake_Cache_saveArtifact___closed__2_value;
static const lean_ctor_object l_Lake_Cache_saveArtifact___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Cache_saveArtifact___closed__2_value),((lean_object*)&l_Lake_Cache_saveArtifact___closed__2_value),((lean_object*)&l_Lake_Cache_saveArtifact___closed__2_value)}};
static const lean_object* l_Lake_Cache_saveArtifact___closed__3 = (const lean_object*)&l_Lake_Cache_saveArtifact___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_cacheArtifact___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_cacheArtifact___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_cacheArtifact___redArg___closed__0 = (const lean_object*)&l_Lake_cacheArtifact___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\n- "};
static const lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "input '"};
static const lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "' found in package artifact cache, but some output(s) have issues:"};
static const lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "could not write outputs to cache: "};
static const lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg(lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_resolveArtifact___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "download succeeded, but artifact failed to resolve: "};
static const lean_object* l_Lake_resolveArtifact___lam__1___closed__0 = (const lean_object*)&l_Lake_resolveArtifact___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_resolveArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "downloaded artifact "};
static const lean_object* l_Lake_resolveArtifact___closed__0 = (const lean_object*)&l_Lake_resolveArtifact___closed__0_value;
static const lean_string_object l_Lake_resolveArtifact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n  local path: "};
static const lean_object* l_Lake_resolveArtifact___closed__1 = (const lean_object*)&l_Lake_resolveArtifact___closed__1_value;
static const lean_string_object l_Lake_resolveArtifact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n  remote URL: "};
static const lean_object* l_Lake_resolveArtifact___closed__2 = (const lean_object*)&l_Lake_resolveArtifact___closed__2_value;
static const lean_string_object l_Lake_resolveArtifact___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "could not mark downloaded artifact read-only: "};
static const lean_object* l_Lake_resolveArtifact___closed__3 = (const lean_object*)&l_Lake_resolveArtifact___closed__3_value;
static const lean_string_object l_Lake_resolveArtifact___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "artifact with associated cache service but no scope"};
static const lean_object* l_Lake_resolveArtifact___closed__4 = (const lean_object*)&l_Lake_resolveArtifact___closed__4_value;
static const lean_ctor_object l_Lake_resolveArtifact___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_resolveArtifact___closed__4_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_resolveArtifact___closed__5 = (const lean_object*)&l_Lake_resolveArtifact___closed__5_value;
static const lean_string_object l_Lake_resolveArtifact___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "artifact cache service is not configured: "};
static const lean_object* l_Lake_resolveArtifact___closed__6 = (const lean_object*)&l_Lake_resolveArtifact___closed__6_value;
static const lean_string_object l_Lake_resolveArtifact___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "artifact not found in cache:\n  "};
static const lean_object* l_Lake_resolveArtifact___closed__7 = (const lean_object*)&l_Lake_resolveArtifact___closed__7_value;
static const lean_string_object l_Lake_resolveArtifact___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "failed to retrieve artifact from cache: "};
static const lean_object* l_Lake_resolveArtifact___closed__8 = (const lean_object*)&l_Lake_resolveArtifact___closed__8_value;
LEAN_EXPORT lean_object* l_Lake_resolveArtifact(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_resolveArtifactOutput___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "ill-formed artifact output:\n"};
static const lean_object* l_Lake_resolveArtifactOutput___closed__0 = (const lean_object*)&l_Lake_resolveArtifactOutput___closed__0_value;
static const lean_string_object l_Lake_resolveArtifactOutput___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lake_resolveArtifactOutput___closed__1 = (const lean_object*)&l_Lake_resolveArtifactOutput___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_restoreArtifact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "restored artifact from cache to: "};
static const lean_object* l_Lake_restoreArtifact___closed__0 = (const lean_object*)&l_Lake_restoreArtifact___closed__0_value;
static const lean_string_object l_Lake_restoreArtifact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "found artifact in cache: "};
static const lean_object* l_Lake_restoreArtifact___closed__1 = (const lean_object*)&l_Lake_restoreArtifact___closed__1_value;
static const lean_string_object l_Lake_restoreArtifact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "could not hard link artifact, copying from cache instead; error: "};
static const lean_object* l_Lake_restoreArtifact___closed__2 = (const lean_object*)&l_Lake_restoreArtifact___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_restoreArtifact(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_restoreArtifact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "failed to retrieve artifact modification time: "};
static const lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(uint8_t, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(uint8_t, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0(lean_object*, uint8_t, uint64_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, uint64_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildFileAfterDep___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "art"};
static const lean_object* l_Lake_buildFileAfterDep___redArg___lam__0___closed__0 = (const lean_object*)&l_Lake_buildFileAfterDep___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_inputBinFile___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_inputBinFile___redArg___closed__0 = (const lean_object*)&l_Lake_inputBinFile___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputBinFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputTextFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_inputDir___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_inputDir___lam__2___closed__0 = (const lean_object*)&l_Lake_inputDir___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_inputDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_inputDir___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_inputDir___closed__0 = (const lean_object*)&l_Lake_inputDir___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_inputDir(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inputDir___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_buildO___lam__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildO___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "traceArgs: "};
static const lean_object* l_Lake_buildO___lam__2___closed__0 = (const lean_object*)&l_Lake_buildO___lam__2___closed__0_value;
static const lean_string_object l_Lake_buildO___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lake_buildO___lam__2___closed__1 = (const lean_object*)&l_Lake_buildO___lam__2___closed__1_value;
static const lean_string_object l_Lake_buildO___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "o"};
static const lean_object* l_Lake_buildO___lam__2___closed__2 = (const lean_object*)&l_Lake_buildO___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_buildO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_buildO___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_buildO___closed__0 = (const lean_object*)&l_Lake_buildO___closed__0_value;
static const lean_closure_object l_Lake_buildO___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_buildO___closed__1 = (const lean_object*)&l_Lake_buildO___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_buildO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Internal_buildLeanO___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-I"};
static const lean_object* l_Lake_Internal_buildLeanO___lam__0___closed__0 = (const lean_object*)&l_Lake_Internal_buildLeanO___lam__0___closed__0_value;
static lean_once_cell_t l_Lake_Internal_buildLeanO___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Internal_buildLeanO___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lake_Internal_buildLeanO_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lake_Internal_buildLeanO_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lake_Internal_buildLeanO_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_Internal_buildLeanO_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_Internal_buildLeanO_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_Internal_buildLeanO_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Internal_buildLeanO_spec__1(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Internal_buildLeanO_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildStaticLib___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lake_buildStaticLib___lam__1___closed__0 = (const lean_object*)&l_Lake_buildStaticLib___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildStaticLib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "objs"};
static const lean_object* l_Lake_buildStaticLib___closed__0 = (const lean_object*)&l_Lake_buildStaticLib___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildStaticLib(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-l"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-L"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lake_formatCycle___at___00Lake_mkLinkOrder_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00Lake_mkLinkOrder_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lake_formatCycle___at___00Lake_mkLinkOrder_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00Lake_mkLinkOrder_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatCycle___at___00Lake_mkLinkOrder_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkLinkOrder_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkLinkOrder_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_mkLinkOrder___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "library dependency cycle:\n"};
static const lean_object* l_Lake_mkLinkOrder___redArg___closed__0 = (const lean_object*)&l_Lake_mkLinkOrder___redArg___closed__0_value;
static const lean_array_object l_Lake_mkLinkOrder___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_mkLinkOrder___redArg___closed__1 = (const lean_object*)&l_Lake_mkLinkOrder___redArg___closed__1_value;
static const lean_ctor_object l_Lake_mkLinkOrder___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lake_mkLinkOrder___redArg___closed__1_value)}};
static const lean_object* l_Lake_mkLinkOrder___redArg___closed__2 = (const lean_object*)&l_Lake_mkLinkOrder___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_mkLinkOrder___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkLinkOrder___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkLinkOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkLinkOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkLinkArgs___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkLinkArgs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkLinkArgs(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkLinkArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLibSync___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLibSync___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildSharedLibSync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "MACOSX_DEPLOYMENT_TARGET: "};
static const lean_object* l_Lake_buildSharedLibSync___closed__0 = (const lean_object*)&l_Lake_buildSharedLibSync___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildSharedLibSync(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLibSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0___boxed(lean_object**);
static const lean_string_object l_Lake_buildSharedLib___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "linkLibs"};
static const lean_object* l_Lake_buildSharedLib___lam__1___closed__0 = (const lean_object*)&l_Lake_buildSharedLib___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1___boxed(lean_object**);
static const lean_string_object l_Lake_buildSharedLib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "linkObjs"};
static const lean_object* l_Lake_buildSharedLib___closed__0 = (const lean_object*)&l_Lake_buildSharedLib___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibSync___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibSync___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibSync(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExeSync___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExeSync___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExeSync(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExeSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__14(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__12));
v___x_30_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__13));
v___x_31_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_30_, v___x_29_);
return v___x_31_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__15(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = l_instMonadBaseIO;
v___x_33_ = l_Lake_instAlternativeELogTOfMonad___redArg(v___x_32_);
return v___x_33_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__19(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__12));
v___x_40_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__14, &l_Lake_instMonadWorkspaceJobM___closed__14_once, _init_l_Lake_instMonadWorkspaceJobM___closed__14);
v___x_41_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM___closed__20(void){
_start:
{
lean_object* v___x_42_; lean_object* v___f_43_; lean_object* v___x_44_; 
v___x_42_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__19, &l_Lake_instMonadWorkspaceJobM___closed__19_once, _init_l_Lake_instMonadWorkspaceJobM___closed__19);
v___f_43_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__18));
v___x_44_ = lean_alloc_closure((void*)(l_Lake_instMonadLiftLakeMBuildTOfPure___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___x_44_, 0, v___f_43_);
lean_closure_set(v___x_44_, 1, lean_box(0));
lean_closure_set(v___x_44_, 2, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Lake_instMonadWorkspaceJobM(void){
_start:
{
lean_object* v___x_45_; lean_object* v_toApplicative_46_; lean_object* v_toBind_47_; lean_object* v_toFunctor_48_; lean_object* v_toPure_49_; lean_object* v___f_50_; lean_object* v___f_51_; lean_object* v___f_52_; lean_object* v___f_53_; lean_object* v___x_54_; lean_object* v___f_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___f_58_; lean_object* v___f_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v_toApplicative_65_; lean_object* v_toFunctor_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v_toApplicative_70_; lean_object* v_toFunctor_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___f_75_; lean_object* v___f_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v_toApplicative_79_; lean_object* v_toFunctor_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___f_86_; lean_object* v___f_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v_toApplicative_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_108_; 
v___x_45_ = l_instMonadBaseIO;
v_toApplicative_46_ = lean_ctor_get(v___x_45_, 0);
v_toBind_47_ = lean_ctor_get(v___x_45_, 1);
v_toFunctor_48_ = lean_ctor_get(v_toApplicative_46_, 0);
v_toPure_49_ = lean_ctor_get(v_toApplicative_46_, 1);
lean_inc_n(v_toBind_47_, 3);
lean_inc_n(v_toPure_49_, 5);
v___f_50_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_50_, 0, v_toPure_49_);
lean_closure_set(v___f_50_, 1, v_toBind_47_);
v___f_51_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_51_, 0, v_toPure_49_);
lean_closure_set(v___f_51_, 1, v_toBind_47_);
lean_inc_ref(v___f_50_);
v___f_52_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_52_, 0, v_toPure_49_);
lean_closure_set(v___f_52_, 1, v___f_50_);
lean_inc_ref_n(v_toFunctor_48_, 2);
v___f_53_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_53_, 0, v_toFunctor_48_);
lean_closure_set(v___f_53_, 1, v_toPure_49_);
lean_closure_set(v___f_53_, 2, v_toBind_47_);
v___x_54_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_48_);
v___f_55_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_55_, 0, v_toPure_49_);
lean_inc_ref_n(v___x_54_, 2);
v___x_56_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_56_, 0, v___x_54_);
lean_ctor_set(v___x_56_, 1, v___f_55_);
lean_ctor_set(v___x_56_, 2, v___f_53_);
lean_ctor_set(v___x_56_, 3, v___f_52_);
lean_ctor_set(v___x_56_, 4, v___f_51_);
v___x_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
lean_ctor_set(v___x_57_, 1, v___f_50_);
v___f_58_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_58_, 0, v___x_54_);
v___f_59_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_59_, 0, v___x_54_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v___f_58_);
lean_ctor_set(v___x_60_, 1, v___f_59_);
v___x_61_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__15, &l_Lake_instMonadWorkspaceJobM___closed__15_once, _init_l_Lake_instMonadWorkspaceJobM___closed__15);
lean_inc_ref(v___x_57_);
v___x_62_ = l_ReaderT_instAlternativeOfMonad___redArg(v___x_61_, v___x_57_);
v___x_63_ = l_ReaderT_instMonad___redArg(v___x_57_);
lean_inc_ref(v___x_63_);
v___x_64_ = l_StateRefT_x27_instAlternativeOfMonad___redArg(v___x_62_, v___x_63_);
v_toApplicative_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc_ref(v_toApplicative_65_);
lean_dec_ref(v___x_64_);
v_toFunctor_66_ = lean_ctor_get(v_toApplicative_65_, 0);
lean_inc_ref_n(v_toFunctor_66_, 2);
lean_dec_ref(v_toApplicative_65_);
v___x_67_ = lean_obj_once(&l_Lake_instMonadWorkspaceJobM___closed__20, &l_Lake_instMonadWorkspaceJobM___closed__20_once, _init_l_Lake_instMonadWorkspaceJobM___closed__20);
lean_inc_ref(v___x_60_);
v___x_68_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_67_, v___x_60_);
v___x_69_ = l_StateRefT_x27_instMonad___redArg(v___x_63_);
v_toApplicative_70_ = lean_ctor_get(v___x_69_, 0);
lean_inc_ref(v_toApplicative_70_);
v_toFunctor_71_ = lean_ctor_get(v_toApplicative_70_, 0);
lean_inc_ref_n(v_toFunctor_71_, 2);
lean_dec_ref(v_toApplicative_70_);
v___x_72_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_68_, v___x_60_);
v___x_73_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_73_, 0, lean_box(0));
lean_closure_set(v___x_73_, 1, lean_box(0));
lean_closure_set(v___x_73_, 2, lean_box(0));
lean_closure_set(v___x_73_, 3, lean_box(0));
lean_closure_set(v___x_73_, 4, v___x_72_);
v___x_74_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_73_, v_toFunctor_66_);
v___f_75_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_75_, 0, v_toFunctor_71_);
v___f_76_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_76_, 0, v_toFunctor_71_);
v___x_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_77_, 0, v___f_75_);
lean_ctor_set(v___x_77_, 1, v___f_76_);
v___x_78_ = l_ReaderT_instMonad___redArg(v___x_69_);
v_toApplicative_79_ = lean_ctor_get(v___x_78_, 0);
lean_inc_ref(v_toApplicative_79_);
v_toFunctor_80_ = lean_ctor_get(v_toApplicative_79_, 0);
lean_inc_ref_n(v_toFunctor_80_, 2);
lean_dec_ref(v_toApplicative_79_);
v___x_81_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_74_, v_toFunctor_66_);
v___x_82_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_82_, 0, lean_box(0));
lean_closure_set(v___x_82_, 1, v___x_81_);
lean_inc_ref(v___x_77_);
v___x_83_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_82_, v___x_77_);
v___x_84_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_83_, v___x_77_);
v___x_85_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_85_, 0, lean_box(0));
lean_closure_set(v___x_85_, 1, v___x_84_);
v___f_86_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_86_, 0, v_toFunctor_80_);
v___f_87_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_87_, 0, v_toFunctor_80_);
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v___f_86_);
lean_ctor_set(v___x_88_, 1, v___f_87_);
lean_inc_ref_n(v___x_88_, 2);
v___x_89_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_85_, v___x_88_);
v___x_90_ = l_Lake_EquipT_instFunctor___redArg(v___x_88_);
v_toApplicative_91_ = lean_ctor_get(v___x_78_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_78_);
if (v_isSharedCheck_108_ == 0)
{
lean_object* v_unused_109_; 
v_unused_109_ = lean_ctor_get(v___x_78_, 1);
lean_dec(v_unused_109_);
v___x_93_ = v___x_78_;
v_isShared_94_ = v_isSharedCheck_108_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_toApplicative_91_);
lean_dec(v___x_78_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_108_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v_toFunctor_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___f_101_; lean_object* v___f_102_; lean_object* v___x_104_; 
v_toFunctor_95_ = lean_ctor_get(v_toApplicative_91_, 0);
lean_inc_ref_n(v_toFunctor_95_, 2);
lean_dec_ref(v_toApplicative_91_);
v___x_96_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_89_, v___x_88_);
v___x_97_ = lean_alloc_closure((void*)(l_Lake_EquipT_lift___boxed), 5, 4);
lean_closure_set(v___x_97_, 0, lean_box(0));
lean_closure_set(v___x_97_, 1, lean_box(0));
lean_closure_set(v___x_97_, 2, lean_box(0));
lean_closure_set(v___x_97_, 3, v___x_96_);
lean_inc_ref(v___x_90_);
v___x_98_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_97_, v___x_90_);
v___x_99_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v___x_98_, v___x_90_);
v___x_100_ = lean_alloc_closure((void*)(l_Lake_JobM_runFetchM___boxed), 9, 2);
lean_closure_set(v___x_100_, 0, lean_box(0));
lean_closure_set(v___x_100_, 1, v___x_99_);
v___f_101_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_101_, 0, v_toFunctor_95_);
v___f_102_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_102_, 0, v_toFunctor_95_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v___f_102_);
lean_ctor_set(v___x_93_, 0, v___f_101_);
v___x_104_ = v___x_93_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___f_101_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v___f_102_);
v___x_104_ = v_reuseFailAlloc_107_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = l_Lake_EquipT_instFunctor___redArg(v___x_104_);
v___x_106_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v___x_100_, v___x_105_);
return v___x_106_;
}
}
}
}
static uint64_t _init_l_Lake_platformTrace___closed__0(void){
_start:
{
lean_object* v___x_110_; uint64_t v___x_111_; 
v___x_110_ = l_System_Platform_target;
v___x_111_ = lean_string_hash(v___x_110_);
return v___x_111_;
}
}
static uint64_t _init_l_Lake_platformTrace___closed__1(void){
_start:
{
uint64_t v___x_112_; uint64_t v___x_113_; uint64_t v___x_114_; 
v___x_112_ = lean_uint64_once(&l_Lake_platformTrace___closed__0, &l_Lake_platformTrace___closed__0_once, _init_l_Lake_platformTrace___closed__0);
v___x_113_ = l_Lake_Hash_nil;
v___x_114_ = lean_uint64_mix_hash(v___x_113_, v___x_112_);
return v___x_114_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__3(void){
_start:
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_nat_to_int(v___x_117_);
return v___x_118_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__4(void){
_start:
{
uint32_t v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = 0;
v___x_120_ = lean_obj_once(&l_Lake_platformTrace___closed__3, &l_Lake_platformTrace___closed__3_once, _init_l_Lake_platformTrace___closed__3);
v___x_121_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set_uint32(v___x_121_, sizeof(void*)*1, v___x_119_);
return v___x_121_;
}
}
static lean_object* _init_l_Lake_platformTrace___closed__5(void){
_start:
{
lean_object* v___x_122_; uint64_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_122_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_123_ = lean_uint64_once(&l_Lake_platformTrace___closed__1, &l_Lake_platformTrace___closed__1_once, _init_l_Lake_platformTrace___closed__1);
v___x_124_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_125_ = l_System_Platform_target;
v___x_126_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_124_);
lean_ctor_set(v___x_126_, 2, v___x_122_);
lean_ctor_set_uint64(v___x_126_, sizeof(void*)*3, v___x_123_);
return v___x_126_;
}
}
static lean_object* _init_l_Lake_platformTrace(void){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&l_Lake_platformTrace___closed__5, &l_Lake_platformTrace___closed__5_once, _init_l_Lake_platformTrace___closed__5);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg(lean_object* v___y_128_){
_start:
{
lean_object* v_log_130_; uint8_t v_action_131_; uint8_t v_wantsRebuild_132_; lean_object* v_trace_133_; lean_object* v_buildTime_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_145_; 
v_log_130_ = lean_ctor_get(v___y_128_, 0);
v_action_131_ = lean_ctor_get_uint8(v___y_128_, sizeof(void*)*3);
v_wantsRebuild_132_ = lean_ctor_get_uint8(v___y_128_, sizeof(void*)*3 + 1);
v_trace_133_ = lean_ctor_get(v___y_128_, 1);
v_buildTime_134_ = lean_ctor_get(v___y_128_, 2);
v_isSharedCheck_145_ = !lean_is_exclusive(v___y_128_);
if (v_isSharedCheck_145_ == 0)
{
v___x_136_ = v___y_128_;
v_isShared_137_ = v_isSharedCheck_145_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_buildTime_134_);
lean_inc(v_trace_133_);
lean_inc(v_log_130_);
lean_dec(v___y_128_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_145_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_138_ = l_Lake_platformTrace;
v___x_139_ = lean_box(0);
v___x_140_ = l_Lake_BuildTrace_mix(v_trace_133_, v___x_138_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 1, v___x_140_);
v___x_142_ = v___x_136_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_log_130_);
lean_ctor_set(v_reuseFailAlloc_144_, 1, v___x_140_);
lean_ctor_set(v_reuseFailAlloc_144_, 2, v_buildTime_134_);
lean_ctor_set_uint8(v_reuseFailAlloc_144_, sizeof(void*)*3, v_action_131_);
lean_ctor_set_uint8(v_reuseFailAlloc_144_, sizeof(void*)*3 + 1, v_wantsRebuild_132_);
v___x_142_ = v_reuseFailAlloc_144_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; 
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v___x_139_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
return v___x_143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___redArg___boxed(lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lake_addPlatformTrace___redArg(v___y_146_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace(lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_){
_start:
{
lean_object* v_log_156_; uint8_t v_action_157_; uint8_t v_wantsRebuild_158_; lean_object* v_trace_159_; lean_object* v_buildTime_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_171_; 
v_log_156_ = lean_ctor_get(v___y_154_, 0);
v_action_157_ = lean_ctor_get_uint8(v___y_154_, sizeof(void*)*3);
v_wantsRebuild_158_ = lean_ctor_get_uint8(v___y_154_, sizeof(void*)*3 + 1);
v_trace_159_ = lean_ctor_get(v___y_154_, 1);
v_buildTime_160_ = lean_ctor_get(v___y_154_, 2);
v_isSharedCheck_171_ = !lean_is_exclusive(v___y_154_);
if (v_isSharedCheck_171_ == 0)
{
v___x_162_ = v___y_154_;
v_isShared_163_ = v_isSharedCheck_171_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_buildTime_160_);
lean_inc(v_trace_159_);
lean_inc(v_log_156_);
lean_dec(v___y_154_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_171_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_168_; 
v___x_164_ = l_Lake_platformTrace;
v___x_165_ = lean_box(0);
v___x_166_ = l_Lake_BuildTrace_mix(v_trace_159_, v___x_164_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 1, v___x_166_);
v___x_168_ = v___x_162_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_log_156_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___x_166_);
lean_ctor_set(v_reuseFailAlloc_170_, 2, v_buildTime_160_);
lean_ctor_set_uint8(v_reuseFailAlloc_170_, sizeof(void*)*3, v_action_157_);
lean_ctor_set_uint8(v_reuseFailAlloc_170_, sizeof(void*)*3 + 1, v_wantsRebuild_158_);
v___x_168_ = v_reuseFailAlloc_170_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
lean_object* v___x_169_; 
v___x_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_165_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
return v___x_169_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPlatformTrace___boxed(lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lake_addPlatformTrace(v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg(lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
lean_object* v_log_183_; uint8_t v_action_184_; uint8_t v_wantsRebuild_185_; lean_object* v_trace_186_; lean_object* v_buildTime_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_198_; 
v_log_183_ = lean_ctor_get(v___y_181_, 0);
v_action_184_ = lean_ctor_get_uint8(v___y_181_, sizeof(void*)*3);
v_wantsRebuild_185_ = lean_ctor_get_uint8(v___y_181_, sizeof(void*)*3 + 1);
v_trace_186_ = lean_ctor_get(v___y_181_, 1);
v_buildTime_187_ = lean_ctor_get(v___y_181_, 2);
v_isSharedCheck_198_ = !lean_is_exclusive(v___y_181_);
if (v_isSharedCheck_198_ == 0)
{
v___x_189_ = v___y_181_;
v_isShared_190_ = v_isSharedCheck_198_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_buildTime_187_);
lean_inc(v_trace_186_);
lean_inc(v_log_183_);
lean_dec(v___y_181_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_198_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v_leanTrace_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_195_; 
v_leanTrace_191_ = lean_ctor_get(v___y_180_, 2);
v___x_192_ = lean_box(0);
lean_inc_ref(v_leanTrace_191_);
v___x_193_ = l_Lake_BuildTrace_mix(v_trace_186_, v_leanTrace_191_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 1, v___x_193_);
v___x_195_ = v___x_189_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_log_183_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_197_, 2, v_buildTime_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_197_, sizeof(void*)*3, v_action_184_);
lean_ctor_set_uint8(v_reuseFailAlloc_197_, sizeof(void*)*3 + 1, v_wantsRebuild_185_);
v___x_195_ = v_reuseFailAlloc_197_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_196_; 
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_192_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
return v___x_196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___redArg___boxed(lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lake_addLeanTrace___redArg(v___y_199_, v___y_200_);
lean_dec_ref(v___y_199_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace(lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_log_210_; uint8_t v_action_211_; uint8_t v_wantsRebuild_212_; lean_object* v_trace_213_; lean_object* v_buildTime_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_225_; 
v_log_210_ = lean_ctor_get(v___y_208_, 0);
v_action_211_ = lean_ctor_get_uint8(v___y_208_, sizeof(void*)*3);
v_wantsRebuild_212_ = lean_ctor_get_uint8(v___y_208_, sizeof(void*)*3 + 1);
v_trace_213_ = lean_ctor_get(v___y_208_, 1);
v_buildTime_214_ = lean_ctor_get(v___y_208_, 2);
v_isSharedCheck_225_ = !lean_is_exclusive(v___y_208_);
if (v_isSharedCheck_225_ == 0)
{
v___x_216_ = v___y_208_;
v_isShared_217_ = v_isSharedCheck_225_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_buildTime_214_);
lean_inc(v_trace_213_);
lean_inc(v_log_210_);
lean_dec(v___y_208_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_225_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v_leanTrace_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_222_; 
v_leanTrace_218_ = lean_ctor_get(v___y_207_, 2);
v___x_219_ = lean_box(0);
lean_inc_ref(v_leanTrace_218_);
v___x_220_ = l_Lake_BuildTrace_mix(v_trace_213_, v_leanTrace_218_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 1, v___x_220_);
v___x_222_ = v___x_216_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v_log_210_);
lean_ctor_set(v_reuseFailAlloc_224_, 1, v___x_220_);
lean_ctor_set(v_reuseFailAlloc_224_, 2, v_buildTime_214_);
lean_ctor_set_uint8(v_reuseFailAlloc_224_, sizeof(void*)*3, v_action_211_);
lean_ctor_set_uint8(v_reuseFailAlloc_224_, sizeof(void*)*3 + 1, v_wantsRebuild_212_);
v___x_222_ = v_reuseFailAlloc_224_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
lean_object* v___x_223_; 
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_219_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
return v___x_223_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addLeanTrace___boxed(lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lake_addLeanTrace(v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
lean_dec(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg(lean_object* v_inst_235_, lean_object* v_inst_236_, lean_object* v_a_237_, lean_object* v_caption_238_, lean_object* v___y_239_){
_start:
{
lean_object* v_log_241_; uint8_t v_action_242_; uint8_t v_wantsRebuild_243_; lean_object* v_trace_244_; lean_object* v_buildTime_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_264_; 
v_log_241_ = lean_ctor_get(v___y_239_, 0);
v_action_242_ = lean_ctor_get_uint8(v___y_239_, sizeof(void*)*3);
v_wantsRebuild_243_ = lean_ctor_get_uint8(v___y_239_, sizeof(void*)*3 + 1);
v_trace_244_ = lean_ctor_get(v___y_239_, 1);
v_buildTime_245_ = lean_ctor_get(v___y_239_, 2);
v_isSharedCheck_264_ = !lean_is_exclusive(v___y_239_);
if (v_isSharedCheck_264_ == 0)
{
v___x_247_ = v___y_239_;
v_isShared_248_ = v_isSharedCheck_264_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_buildTime_245_);
lean_inc(v_trace_244_);
lean_inc(v_log_241_);
lean_dec(v___y_239_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_264_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; uint64_t v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_261_; 
lean_inc(v_a_237_);
v___x_249_ = lean_apply_1(v_inst_236_, v_a_237_);
v___x_250_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_251_ = ((lean_object*)(l_Lake_addPureTrace___redArg___closed__0));
v___x_252_ = lean_string_append(v_caption_238_, v___x_251_);
v___x_253_ = lean_apply_1(v_inst_235_, v_a_237_);
v___x_254_ = lean_string_append(v___x_252_, v___x_253_);
lean_dec_ref(v___x_253_);
v___x_255_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_256_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_250_);
lean_ctor_set(v___x_256_, 2, v___x_255_);
v___x_257_ = lean_unbox_uint64(v___x_249_);
lean_dec_ref(v___x_249_);
lean_ctor_set_uint64(v___x_256_, sizeof(void*)*3, v___x_257_);
v___x_258_ = lean_box(0);
v___x_259_ = l_Lake_BuildTrace_mix(v_trace_244_, v___x_256_);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 1, v___x_259_);
v___x_261_ = v___x_247_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_log_241_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v___x_259_);
lean_ctor_set(v_reuseFailAlloc_263_, 2, v_buildTime_245_);
lean_ctor_set_uint8(v_reuseFailAlloc_263_, sizeof(void*)*3, v_action_242_);
lean_ctor_set_uint8(v_reuseFailAlloc_263_, sizeof(void*)*3 + 1, v_wantsRebuild_243_);
v___x_261_ = v_reuseFailAlloc_263_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
lean_object* v___x_262_; 
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_258_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
return v___x_262_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___redArg___boxed(lean_object* v_inst_265_, lean_object* v_inst_266_, lean_object* v_a_267_, lean_object* v_caption_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Lake_addPureTrace___redArg(v_inst_265_, v_inst_266_, v_a_267_, v_caption_268_, v___y_269_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace(lean_object* v_00_u03b1_272_, lean_object* v_inst_273_, lean_object* v_inst_274_, lean_object* v_a_275_, lean_object* v_caption_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_log_284_; uint8_t v_action_285_; uint8_t v_wantsRebuild_286_; lean_object* v_trace_287_; lean_object* v_buildTime_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_307_; 
v_log_284_ = lean_ctor_get(v___y_282_, 0);
v_action_285_ = lean_ctor_get_uint8(v___y_282_, sizeof(void*)*3);
v_wantsRebuild_286_ = lean_ctor_get_uint8(v___y_282_, sizeof(void*)*3 + 1);
v_trace_287_ = lean_ctor_get(v___y_282_, 1);
v_buildTime_288_ = lean_ctor_get(v___y_282_, 2);
v_isSharedCheck_307_ = !lean_is_exclusive(v___y_282_);
if (v_isSharedCheck_307_ == 0)
{
v___x_290_ = v___y_282_;
v_isShared_291_ = v_isSharedCheck_307_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_buildTime_288_);
lean_inc(v_trace_287_);
lean_inc(v_log_284_);
lean_dec(v___y_282_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_307_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; uint64_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_304_; 
lean_inc(v_a_275_);
v___x_292_ = lean_apply_1(v_inst_274_, v_a_275_);
v___x_293_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_294_ = ((lean_object*)(l_Lake_addPureTrace___redArg___closed__0));
v___x_295_ = lean_string_append(v_caption_276_, v___x_294_);
v___x_296_ = lean_apply_1(v_inst_273_, v_a_275_);
v___x_297_ = lean_string_append(v___x_295_, v___x_296_);
lean_dec_ref(v___x_296_);
v___x_298_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_299_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_299_, 0, v___x_297_);
lean_ctor_set(v___x_299_, 1, v___x_293_);
lean_ctor_set(v___x_299_, 2, v___x_298_);
v___x_300_ = lean_unbox_uint64(v___x_292_);
lean_dec_ref(v___x_292_);
lean_ctor_set_uint64(v___x_299_, sizeof(void*)*3, v___x_300_);
v___x_301_ = lean_box(0);
v___x_302_ = l_Lake_BuildTrace_mix(v_trace_287_, v___x_299_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 1, v___x_302_);
v___x_304_ = v___x_290_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_log_284_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v___x_302_);
lean_ctor_set(v_reuseFailAlloc_306_, 2, v_buildTime_288_);
lean_ctor_set_uint8(v_reuseFailAlloc_306_, sizeof(void*)*3, v_action_285_);
lean_ctor_set_uint8(v_reuseFailAlloc_306_, sizeof(void*)*3 + 1, v_wantsRebuild_286_);
v___x_304_ = v_reuseFailAlloc_306_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
lean_object* v___x_305_; 
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_301_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
return v___x_305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_addPureTrace___boxed(lean_object* v_00_u03b1_308_, lean_object* v_inst_309_, lean_object* v_inst_310_, lean_object* v_a_311_, lean_object* v_caption_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lake_addPureTrace(v_00_u03b1_308_, v_inst_309_, v_inst_310_, v_a_311_, v_caption_312_, v___y_313_, v___y_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
lean_dec_ref(v___y_317_);
lean_dec(v___y_316_);
lean_dec(v___y_315_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(lean_object* v_x_323_){
_start:
{
if (lean_obj_tag(v_x_323_) == 0)
{
lean_object* v___x_324_; 
v___x_324_ = lean_box(0);
return v___x_324_;
}
else
{
lean_object* v_val_325_; 
v_val_325_ = lean_ctor_get(v_x_323_, 0);
lean_inc(v_val_325_);
return v_val_325_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1___boxed(lean_object* v_x_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(v_x_326_);
lean_dec(v_x_326_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(size_t v_sz_328_, size_t v_i_329_, lean_object* v_bs_330_){
_start:
{
uint8_t v___x_331_; 
v___x_331_ = lean_usize_dec_lt(v_i_329_, v_sz_328_);
if (v___x_331_ == 0)
{
return v_bs_330_;
}
else
{
lean_object* v_v_332_; lean_object* v___x_333_; lean_object* v_bs_x27_334_; lean_object* v___x_335_; size_t v___x_336_; size_t v___x_337_; lean_object* v___x_338_; 
v_v_332_ = lean_array_uget(v_bs_330_, v_i_329_);
v___x_333_ = lean_unsigned_to_nat(0u);
v_bs_x27_334_ = lean_array_uset(v_bs_330_, v_i_329_, v___x_333_);
v___x_335_ = l_Lake_instToJsonLogEntry_toJson(v_v_332_);
lean_dec(v_v_332_);
v___x_336_ = ((size_t)1ULL);
v___x_337_ = lean_usize_add(v_i_329_, v___x_336_);
v___x_338_ = lean_array_uset(v_bs_x27_334_, v_i_329_, v___x_335_);
v_i_329_ = v___x_337_;
v_bs_330_ = v___x_338_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4___boxed(lean_object* v_sz_340_, lean_object* v_i_341_, lean_object* v_bs_342_){
_start:
{
size_t v_sz_boxed_343_; size_t v_i_boxed_344_; lean_object* v_res_345_; 
v_sz_boxed_343_ = lean_unbox_usize(v_sz_340_);
lean_dec(v_sz_340_);
v_i_boxed_344_ = lean_unbox_usize(v_i_341_);
lean_dec(v_i_341_);
v_res_345_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(v_sz_boxed_343_, v_i_boxed_344_, v_bs_342_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(lean_object* v_a_346_){
_start:
{
size_t v_sz_347_; size_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_sz_347_ = lean_array_size(v_a_346_);
v___x_348_ = ((size_t)0ULL);
v___x_349_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2_spec__4(v_sz_347_, v___x_348_, v_a_346_);
v___x_350_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_toJson___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(lean_object* v_x_351_){
_start:
{
lean_object* v_fst_352_; lean_object* v_snd_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_fst_352_ = lean_ctor_get(v_x_351_, 0);
lean_inc(v_fst_352_);
v_snd_353_ = lean_ctor_get(v_x_351_, 1);
lean_inc(v_snd_353_);
lean_dec_ref(v_x_351_);
v___x_354_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_354_, 0, v_fst_352_);
v___x_355_ = lean_unsigned_to_nat(2u);
v___x_356_ = lean_mk_empty_array_with_capacity(v___x_355_);
v___x_357_ = lean_array_push(v___x_356_, v___x_354_);
v___x_358_ = lean_array_push(v___x_357_, v_snd_353_);
v___x_359_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(size_t v_sz_360_, size_t v_i_361_, lean_object* v_bs_362_){
_start:
{
uint8_t v___x_363_; 
v___x_363_ = lean_usize_dec_lt(v_i_361_, v_sz_360_);
if (v___x_363_ == 0)
{
return v_bs_362_;
}
else
{
lean_object* v_v_364_; lean_object* v___x_365_; lean_object* v_bs_x27_366_; lean_object* v___x_367_; size_t v___x_368_; size_t v___x_369_; lean_object* v___x_370_; 
v_v_364_ = lean_array_uget(v_bs_362_, v_i_361_);
v___x_365_ = lean_unsigned_to_nat(0u);
v_bs_x27_366_ = lean_array_uset(v_bs_362_, v_i_361_, v___x_365_);
v___x_367_ = l_Lean_Prod_toJson___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__0(v_v_364_);
v___x_368_ = ((size_t)1ULL);
v___x_369_ = lean_usize_add(v_i_361_, v___x_368_);
v___x_370_ = lean_array_uset(v_bs_x27_366_, v_i_361_, v___x_367_);
v_i_361_ = v___x_369_;
v_bs_362_ = v___x_370_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1___boxed(lean_object* v_sz_372_, lean_object* v_i_373_, lean_object* v_bs_374_){
_start:
{
size_t v_sz_boxed_375_; size_t v_i_boxed_376_; lean_object* v_res_377_; 
v_sz_boxed_375_ = lean_unbox_usize(v_sz_372_);
lean_dec(v_sz_372_);
v_i_boxed_376_ = lean_unbox_usize(v_i_373_);
lean_dec(v_i_373_);
v_res_377_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(v_sz_boxed_375_, v_i_boxed_376_, v_bs_374_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(lean_object* v_a_378_){
_start:
{
size_t v_sz_379_; size_t v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_sz_379_ = lean_array_size(v_a_378_);
v___x_380_ = ((size_t)0ULL);
v___x_381_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0_spec__1(v_sz_379_, v___x_380_, v_a_378_);
v___x_382_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
return v___x_382_;
}
}
static lean_object* _init_l_Lake_BuildMetadata_toJson___closed__2(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_386_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__1));
v___x_387_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__0));
v___x_388_ = lean_box(1);
v___x_389_ = l_Lake_JsonObject_insertJson(v___x_388_, v___x_387_, v___x_386_);
return v___x_389_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_toJson(lean_object* v_self_395_){
_start:
{
uint64_t v_depHash_396_; lean_object* v_inputs_397_; lean_object* v_outputs_x3f_398_; lean_object* v_log_399_; uint8_t v_synthetic_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v_depHash_396_ = lean_ctor_get_uint64(v_self_395_, sizeof(void*)*3);
v_inputs_397_ = lean_ctor_get(v_self_395_, 0);
lean_inc_ref(v_inputs_397_);
v_outputs_x3f_398_ = lean_ctor_get(v_self_395_, 1);
lean_inc(v_outputs_x3f_398_);
v_log_399_ = lean_ctor_get(v_self_395_, 2);
lean_inc_ref(v_log_399_);
v_synthetic_400_ = lean_ctor_get_uint8(v_self_395_, sizeof(void*)*3 + 8);
lean_dec_ref(v_self_395_);
v___x_401_ = lean_obj_once(&l_Lake_BuildMetadata_toJson___closed__2, &l_Lake_BuildMetadata_toJson___closed__2_once, _init_l_Lake_BuildMetadata_toJson___closed__2);
v___x_402_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__3));
v___x_403_ = l_Lake_lowerHexUInt64(v_depHash_396_);
v___x_404_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
v___x_405_ = l_Lake_JsonObject_insertJson(v___x_401_, v___x_402_, v___x_404_);
v___x_406_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__4));
v___x_407_ = l_Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(v_inputs_397_);
v___x_408_ = l_Lake_JsonObject_insertJson(v___x_405_, v___x_406_, v___x_407_);
v___x_409_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__5));
v___x_410_ = l_Lean_Option_toJson___at___00Lake_BuildMetadata_toJson_spec__1(v_outputs_x3f_398_);
lean_dec(v_outputs_x3f_398_);
v___x_411_ = l_Lake_JsonObject_insertJson(v___x_408_, v___x_409_, v___x_410_);
v___x_412_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__6));
v___x_413_ = l_Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__2(v_log_399_);
v___x_414_ = l_Lake_JsonObject_insertJson(v___x_411_, v___x_412_, v___x_413_);
v___x_415_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__7));
v___x_416_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_416_, 0, v_synthetic_400_);
v___x_417_ = l_Lake_JsonObject_insertJson(v___x_414_, v___x_415_, v___x_416_);
v___x_418_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub(uint64_t v_hash_423_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; lean_object* v___x_427_; 
v___x_424_ = ((lean_object*)(l_Lake_BuildMetadata_ofStub___closed__0));
v___x_425_ = lean_box(0);
v___x_426_ = 0;
v___x_427_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_427_, 0, v___x_424_);
lean_ctor_set(v___x_427_, 1, v___x_425_);
lean_ctor_set(v___x_427_, 2, v___x_424_);
lean_ctor_set_uint64(v___x_427_, sizeof(void*)*3, v_hash_423_);
lean_ctor_set_uint8(v___x_427_, sizeof(void*)*3 + 8, v___x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofStub___boxed(lean_object* v_hash_428_){
_start:
{
uint64_t v_hash_boxed_429_; lean_object* v_res_430_; 
v_hash_boxed_429_ = lean_unbox_uint64(v_hash_428_);
lean_dec_ref(v_hash_428_);
v_res_430_ = l_Lake_BuildMetadata_ofStub(v_hash_boxed_429_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(lean_object* v_x_433_){
_start:
{
if (lean_obj_tag(v_x_433_) == 0)
{
lean_object* v___x_434_; 
v___x_434_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___closed__0));
return v___x_434_;
}
else
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_Json_getBool_x3f(v_x_433_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_435_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_435_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
else
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_452_; 
v_a_444_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_452_ == 0)
{
v___x_446_ = v___x_435_;
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_435_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_452_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_448_; lean_object* v___x_450_; 
v___x_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_448_, 0, v_a_444_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v___x_448_);
v___x_450_ = v___x_446_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v___x_448_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0___boxed(lean_object* v_x_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(v_x_453_);
lean_dec(v_x_453_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(lean_object* v_x_457_){
_start:
{
lean_object* v_j_459_; 
if (lean_obj_tag(v_x_457_) == 4)
{
lean_object* v_elems_467_; lean_object* v___x_468_; lean_object* v___x_469_; uint8_t v___x_470_; 
v_elems_467_ = lean_ctor_get(v_x_457_, 0);
v___x_468_ = lean_array_get_size(v_elems_467_);
v___x_469_ = lean_unsigned_to_nat(2u);
v___x_470_ = lean_nat_dec_eq(v___x_468_, v___x_469_);
if (v___x_470_ == 0)
{
v_j_459_ = v_x_457_;
goto v___jp_458_;
}
else
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
lean_inc_ref(v_elems_467_);
lean_dec_ref_known(v_x_457_, 1);
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = lean_array_fget_borrowed(v_elems_467_, v___x_471_);
lean_inc(v___x_472_);
v___x_473_ = l_Lean_Json_getStr_x3f(v___x_472_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
lean_dec_ref(v_elems_467_);
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_492_; 
v_a_482_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_492_ == 0)
{
v___x_484_ = v___x_473_;
v_isShared_485_ = v_isSharedCheck_492_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_473_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_492_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_490_; 
v___x_486_ = lean_unsigned_to_nat(1u);
v___x_487_ = lean_array_fget(v_elems_467_, v___x_486_);
lean_dec_ref(v_elems_467_);
v___x_488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_488_, 0, v_a_482_);
lean_ctor_set(v___x_488_, 1, v___x_487_);
if (v_isShared_485_ == 0)
{
lean_ctor_set(v___x_484_, 0, v___x_488_);
v___x_490_ = v___x_484_;
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
else
{
v_j_459_ = v_x_457_;
goto v___jp_458_;
}
v___jp_458_:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_460_ = ((lean_object*)(l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__0));
v___x_461_ = lean_unsigned_to_nat(80u);
v___x_462_ = l_Lean_Json_pretty(v_j_459_, v___x_461_);
v___x_463_ = lean_string_append(v___x_460_, v___x_462_);
lean_dec_ref(v___x_462_);
v___x_464_ = ((lean_object*)(l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__1));
v___x_465_ = lean_string_append(v___x_463_, v___x_464_);
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(size_t v_sz_493_, size_t v_i_494_, lean_object* v_bs_495_){
_start:
{
uint8_t v___x_496_; 
v___x_496_ = lean_usize_dec_lt(v_i_494_, v_sz_493_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; 
v___x_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_497_, 0, v_bs_495_);
return v___x_497_;
}
else
{
lean_object* v_v_498_; lean_object* v___x_499_; 
v_v_498_ = lean_array_uget_borrowed(v_bs_495_, v_i_494_);
lean_inc(v_v_498_);
v___x_499_ = l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7(v_v_498_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
lean_dec_ref(v_bs_495_);
v_a_500_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v___x_499_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_499_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_500_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_509_; lean_object* v_bs_x27_510_; size_t v___x_511_; size_t v___x_512_; lean_object* v___x_513_; 
v_a_508_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_a_508_);
lean_dec_ref_known(v___x_499_, 1);
v___x_509_ = lean_unsigned_to_nat(0u);
v_bs_x27_510_ = lean_array_uset(v_bs_495_, v_i_494_, v___x_509_);
v___x_511_ = ((size_t)1ULL);
v___x_512_ = lean_usize_add(v_i_494_, v___x_511_);
v___x_513_ = lean_array_uset(v_bs_x27_510_, v_i_494_, v_a_508_);
v_i_494_ = v___x_512_;
v_bs_495_ = v___x_513_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8___boxed(lean_object* v_sz_515_, lean_object* v_i_516_, lean_object* v_bs_517_){
_start:
{
size_t v_sz_boxed_518_; size_t v_i_boxed_519_; lean_object* v_res_520_; 
v_sz_boxed_518_ = lean_unbox_usize(v_sz_515_);
lean_dec(v_sz_515_);
v_i_boxed_519_ = lean_unbox_usize(v_i_516_);
lean_dec(v_i_516_);
v_res_520_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(v_sz_boxed_518_, v_i_boxed_519_, v_bs_517_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(lean_object* v_x_522_){
_start:
{
if (lean_obj_tag(v_x_522_) == 4)
{
lean_object* v_elems_523_; size_t v_sz_524_; size_t v___x_525_; lean_object* v___x_526_; 
v_elems_523_ = lean_ctor_get(v_x_522_, 0);
lean_inc_ref(v_elems_523_);
lean_dec_ref_known(v_x_522_, 1);
v_sz_524_ = lean_array_size(v_elems_523_);
v___x_525_ = ((size_t)0ULL);
v___x_526_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__8(v_sz_524_, v___x_525_, v_elems_523_);
return v___x_526_;
}
else
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_527_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5___closed__0));
v___x_528_ = lean_unsigned_to_nat(80u);
v___x_529_ = l_Lean_Json_pretty(v_x_522_, v___x_528_);
v___x_530_ = lean_string_append(v___x_527_, v___x_529_);
lean_dec_ref(v___x_529_);
v___x_531_ = ((lean_object*)(l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__1));
v___x_532_ = lean_string_append(v___x_530_, v___x_531_);
v___x_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
return v___x_533_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(lean_object* v_x_536_){
_start:
{
if (lean_obj_tag(v_x_536_) == 0)
{
lean_object* v___x_537_; 
v___x_537_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3___closed__0));
return v___x_537_;
}
else
{
lean_object* v___x_538_; 
v___x_538_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5(v_x_536_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_546_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_546_ == 0)
{
v___x_541_ = v___x_538_;
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_546_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_544_; 
if (v_isShared_542_ == 0)
{
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_a_539_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
else
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_555_; 
v_a_547_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_555_ == 0)
{
v___x_549_ = v___x_538_;
v_isShared_550_ = v_isSharedCheck_555_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_538_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_555_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v___x_553_; 
v___x_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_551_, 0, v_a_547_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v___x_551_);
v___x_553_ = v___x_549_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_551_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(size_t v_sz_556_, size_t v_i_557_, lean_object* v_bs_558_){
_start:
{
uint8_t v___x_559_; 
v___x_559_ = lean_usize_dec_lt(v_i_557_, v_sz_556_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; 
v___x_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_560_, 0, v_bs_558_);
return v___x_560_;
}
else
{
lean_object* v_v_561_; lean_object* v___x_562_; 
v_v_561_ = lean_array_uget_borrowed(v_bs_558_, v_i_557_);
lean_inc(v_v_561_);
v___x_562_ = l_Lake_instFromJsonLogEntry_fromJson(v_v_561_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
lean_dec_ref(v_bs_558_);
v_a_563_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_562_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_562_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
else
{
lean_object* v_a_571_; lean_object* v___x_572_; lean_object* v_bs_x27_573_; size_t v___x_574_; size_t v___x_575_; lean_object* v___x_576_; 
v_a_571_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_a_571_);
lean_dec_ref_known(v___x_562_, 1);
v___x_572_ = lean_unsigned_to_nat(0u);
v_bs_x27_573_ = lean_array_uset(v_bs_558_, v_i_557_, v___x_572_);
v___x_574_ = ((size_t)1ULL);
v___x_575_ = lean_usize_add(v_i_557_, v___x_574_);
v___x_576_ = lean_array_uset(v_bs_x27_573_, v_i_557_, v_a_571_);
v_i_557_ = v___x_575_;
v_bs_558_ = v___x_576_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_578_, lean_object* v_i_579_, lean_object* v_bs_580_){
_start:
{
size_t v_sz_boxed_581_; size_t v_i_boxed_582_; lean_object* v_res_583_; 
v_sz_boxed_581_ = lean_unbox_usize(v_sz_578_);
lean_dec(v_sz_578_);
v_i_boxed_582_ = lean_unbox_usize(v_i_579_);
lean_dec(v_i_579_);
v_res_583_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(v_sz_boxed_581_, v_i_boxed_582_, v_bs_580_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(lean_object* v_x_584_){
_start:
{
if (lean_obj_tag(v_x_584_) == 4)
{
lean_object* v_elems_585_; size_t v_sz_586_; size_t v___x_587_; lean_object* v___x_588_; 
v_elems_585_ = lean_ctor_get(v_x_584_, 0);
lean_inc_ref(v_elems_585_);
lean_dec_ref_known(v_x_584_, 1);
v_sz_586_ = lean_array_size(v_elems_585_);
v___x_587_ = ((size_t)0ULL);
v___x_588_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1_spec__2(v_sz_586_, v___x_587_, v_elems_585_);
return v___x_588_;
}
else
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_589_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5___closed__0));
v___x_590_ = lean_unsigned_to_nat(80u);
v___x_591_ = l_Lean_Json_pretty(v_x_584_, v___x_590_);
v___x_592_ = lean_string_append(v___x_589_, v___x_591_);
lean_dec_ref(v___x_591_);
v___x_593_ = ((lean_object*)(l_Lean_Prod_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3_spec__5_spec__7___closed__1));
v___x_594_ = lean_string_append(v___x_592_, v___x_593_);
v___x_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_595_, 0, v___x_594_);
return v___x_595_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(lean_object* v_x_598_){
_start:
{
if (lean_obj_tag(v_x_598_) == 0)
{
lean_object* v___x_599_; 
v___x_599_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1___closed__0));
return v___x_599_;
}
else
{
lean_object* v___x_600_; 
v___x_600_ = l_Lean_Array_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1_spec__1(v_x_598_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_601_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
else
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_617_; 
v_a_609_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_617_ == 0)
{
v___x_611_ = v___x_600_;
v_isShared_612_ = v_isSharedCheck_617_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_600_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_617_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; lean_object* v___x_615_; 
v___x_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_613_, 0, v_a_609_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 0, v___x_613_);
v___x_615_ = v___x_611_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_613_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(lean_object* v_x_620_){
_start:
{
if (lean_obj_tag(v_x_620_) == 0)
{
lean_object* v___x_621_; 
v___x_621_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3___closed__0));
return v___x_621_;
}
else
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_622_, 0, v_x_620_);
v___x_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
return v___x_623_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(lean_object* v_x_626_){
_start:
{
if (lean_obj_tag(v_x_626_) == 0)
{
lean_object* v___x_627_; 
v___x_627_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2___closed__0));
return v___x_627_;
}
else
{
lean_object* v___x_628_; lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_637_; 
v___x_628_ = l_Lean_Option_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2_spec__3(v_x_626_);
v_a_629_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_637_ == 0)
{
v___x_631_ = v___x_628_;
v_isShared_632_ = v_isSharedCheck_637_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_628_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_637_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_633_; lean_object* v___x_635_; 
v___x_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_633_, 0, v_a_629_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v___x_633_);
v___x_635_ = v___x_631_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_633_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f(lean_object* v_obj_653_){
_start:
{
lean_object* v___y_655_; uint64_t v___y_656_; lean_object* v___y_657_; lean_object* v___y_658_; uint8_t v_a_659_; lean_object* v___y_663_; uint64_t v___y_664_; lean_object* v___y_665_; lean_object* v___y_666_; lean_object* v___y_669_; uint64_t v___y_670_; lean_object* v___y_671_; lean_object* v_a_672_; lean_object* v___y_699_; uint64_t v___y_700_; lean_object* v___y_701_; uint64_t v___y_704_; lean_object* v___y_705_; lean_object* v_a_706_; uint64_t v___y_732_; lean_object* v___y_733_; uint64_t v___y_736_; lean_object* v_a_737_; uint64_t v___y_763_; uint64_t v_depHash_766_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_791_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__0));
v___x_792_ = l_Lake_JsonObject_getJson_x3f(v_obj_653_, v___x_791_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__3));
v___x_794_ = l_Lake_JsonObject_getJson_x3f(v_obj_653_, v___x_793_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v___x_795_; 
v___x_795_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7));
return v___x_795_;
}
else
{
lean_object* v_val_796_; lean_object* v___x_797_; 
v_val_796_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_val_796_);
lean_dec_ref_known(v___x_794_, 1);
v___x_797_ = l_Lean_Json_getStr_x3f(v_val_796_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_807_; 
v_a_798_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_807_ == 0)
{
v___x_800_ = v___x_797_;
v_isShared_801_ = v_isSharedCheck_807_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_797_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_807_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_805_; 
v___x_802_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8));
v___x_803_ = lean_string_append(v___x_802_, v_a_798_);
lean_dec(v_a_798_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v___x_803_);
v___x_805_ = v___x_800_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
else
{
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
v_a_808_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_797_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_797_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set_tag(v___x_810_, 0);
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
else
{
lean_object* v_a_816_; lean_object* v___x_817_; 
v_a_816_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_a_816_);
lean_dec_ref_known(v___x_797_, 1);
v___x_817_ = l_Lake_Hash_ofDecimal_x3f(v_a_816_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v___x_818_; 
v___x_818_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__10));
return v___x_818_;
}
else
{
lean_object* v_val_819_; uint64_t v___x_820_; 
v_val_819_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_val_819_);
lean_dec_ref_known(v___x_817_, 1);
v___x_820_ = lean_unbox_uint64(v_val_819_);
lean_dec(v_val_819_);
v_depHash_766_ = v___x_820_;
goto v___jp_765_;
}
}
}
}
}
else
{
lean_object* v___x_821_; lean_object* v___x_822_; 
lean_dec_ref_known(v___x_792_, 1);
v___x_821_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__3));
v___x_822_ = l_Lake_JsonObject_getJson_x3f(v_obj_653_, v___x_821_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v___x_823_; 
v___x_823_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__7));
return v___x_823_;
}
else
{
lean_object* v_val_824_; lean_object* v___x_825_; 
v_val_824_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_val_824_);
lean_dec_ref_known(v___x_822_, 1);
v___x_825_ = l_Lake_Hash_fromJson_x3f(v_val_824_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_835_; 
v_a_826_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_835_ == 0)
{
v___x_828_ = v___x_825_;
v_isShared_829_ = v_isSharedCheck_835_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_825_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_835_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_833_; 
v___x_830_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__8));
v___x_831_ = lean_string_append(v___x_830_, v_a_826_);
lean_dec(v_a_826_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 0, v___x_831_);
v___x_833_ = v___x_828_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_831_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
else
{
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
v_a_836_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_825_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_825_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
lean_ctor_set_tag(v___x_838_, 0);
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
else
{
lean_object* v_a_844_; uint64_t v___x_845_; 
v_a_844_ = lean_ctor_get(v___x_825_, 0);
lean_inc(v_a_844_);
lean_dec_ref_known(v___x_825_, 1);
v___x_845_ = lean_unbox_uint64(v_a_844_);
lean_dec(v_a_844_);
v_depHash_766_ = v___x_845_;
goto v___jp_765_;
}
}
}
}
v___jp_654_:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_660_, 0, v___y_658_);
lean_ctor_set(v___x_660_, 1, v___y_655_);
lean_ctor_set(v___x_660_, 2, v___y_657_);
lean_ctor_set_uint64(v___x_660_, sizeof(void*)*3, v___y_656_);
lean_ctor_set_uint8(v___x_660_, sizeof(void*)*3 + 8, v_a_659_);
v___x_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
return v___x_661_;
}
v___jp_662_:
{
uint8_t v___x_667_; 
v___x_667_ = 0;
v___y_655_ = v___y_663_;
v___y_656_ = v___y_664_;
v___y_657_ = v___y_665_;
v___y_658_ = v___y_666_;
v_a_659_ = v___x_667_;
goto v___jp_654_;
}
v___jp_668_:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__7));
v___x_674_ = l_Lake_JsonObject_getJson_x3f(v_obj_653_, v___x_673_);
if (lean_obj_tag(v___x_674_) == 0)
{
v___y_663_ = v___y_669_;
v___y_664_ = v___y_670_;
v___y_665_ = v_a_672_;
v___y_666_ = v___y_671_;
goto v___jp_662_;
}
else
{
lean_object* v_val_675_; lean_object* v___x_676_; 
v_val_675_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_val_675_);
lean_dec_ref_known(v___x_674_, 1);
v___x_676_ = l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__0(v_val_675_);
lean_dec(v_val_675_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_686_; 
lean_dec_ref(v_a_672_);
lean_dec_ref(v___y_671_);
lean_dec(v___y_669_);
v_a_677_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_686_ == 0)
{
v___x_679_ = v___x_676_;
v_isShared_680_ = v_isSharedCheck_686_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_676_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_686_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_684_; 
v___x_681_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__0));
v___x_682_ = lean_string_append(v___x_681_, v_a_677_);
lean_dec(v_a_677_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_682_);
v___x_684_ = v___x_679_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___x_682_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
else
{
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
lean_dec_ref(v_a_672_);
lean_dec_ref(v___y_671_);
lean_dec(v___y_669_);
v_a_687_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_676_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_676_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
lean_ctor_set_tag(v___x_689_, 0);
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
else
{
lean_object* v_a_695_; 
v_a_695_ = lean_ctor_get(v___x_676_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_676_, 1);
if (lean_obj_tag(v_a_695_) == 0)
{
v___y_663_ = v___y_669_;
v___y_664_ = v___y_670_;
v___y_665_ = v_a_672_;
v___y_666_ = v___y_671_;
goto v___jp_662_;
}
else
{
lean_object* v_val_696_; uint8_t v___x_697_; 
v_val_696_ = lean_ctor_get(v_a_695_, 0);
lean_inc(v_val_696_);
lean_dec_ref_known(v_a_695_, 1);
v___x_697_ = lean_unbox(v_val_696_);
lean_dec(v_val_696_);
v___y_655_ = v___y_669_;
v___y_656_ = v___y_670_;
v___y_657_ = v_a_672_;
v___y_658_ = v___y_671_;
v_a_659_ = v___x_697_;
goto v___jp_654_;
}
}
}
}
}
v___jp_698_:
{
lean_object* v___x_702_; 
v___x_702_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___y_669_ = v___y_699_;
v___y_670_ = v___y_700_;
v___y_671_ = v___y_701_;
v_a_672_ = v___x_702_;
goto v___jp_668_;
}
v___jp_703_:
{
lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_707_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__6));
v___x_708_ = l_Lake_JsonObject_getJson_x3f(v_obj_653_, v___x_707_);
if (lean_obj_tag(v___x_708_) == 0)
{
v___y_699_ = v_a_706_;
v___y_700_ = v___y_704_;
v___y_701_ = v___y_705_;
goto v___jp_698_;
}
else
{
lean_object* v_val_709_; lean_object* v___x_710_; 
v_val_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_val_709_);
lean_dec_ref_known(v___x_708_, 1);
v___x_710_ = l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__1(v_val_709_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_720_; 
lean_dec(v_a_706_);
lean_dec_ref(v___y_705_);
v_a_711_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_720_ == 0)
{
v___x_713_ = v___x_710_;
v_isShared_714_ = v_isSharedCheck_720_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_710_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_720_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_715_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__2));
v___x_716_ = lean_string_append(v___x_715_, v_a_711_);
lean_dec(v_a_711_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v___x_716_);
v___x_718_ = v___x_713_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
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
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_728_; 
lean_dec(v_a_706_);
lean_dec_ref(v___y_705_);
v_a_721_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_728_ == 0)
{
v___x_723_ = v___x_710_;
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_710_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
lean_ctor_set_tag(v___x_723_, 0);
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_721_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
else
{
lean_object* v_a_729_; 
v_a_729_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_729_);
lean_dec_ref_known(v___x_710_, 1);
if (lean_obj_tag(v_a_729_) == 0)
{
v___y_699_ = v_a_706_;
v___y_700_ = v___y_704_;
v___y_701_ = v___y_705_;
goto v___jp_698_;
}
else
{
lean_object* v_val_730_; 
v_val_730_ = lean_ctor_get(v_a_729_, 0);
lean_inc(v_val_730_);
lean_dec_ref_known(v_a_729_, 1);
v___y_669_ = v_a_706_;
v___y_670_ = v___y_704_;
v___y_671_ = v___y_705_;
v_a_672_ = v_val_730_;
goto v___jp_668_;
}
}
}
}
}
v___jp_731_:
{
lean_object* v___x_734_; 
v___x_734_ = lean_box(0);
v___y_704_ = v___y_732_;
v___y_705_ = v___y_733_;
v_a_706_ = v___x_734_;
goto v___jp_703_;
}
v___jp_735_:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__5));
v___x_739_ = l_Lake_JsonObject_getJson_x3f(v_obj_653_, v___x_738_);
if (lean_obj_tag(v___x_739_) == 0)
{
v___y_732_ = v___y_736_;
v___y_733_ = v_a_737_;
goto v___jp_731_;
}
else
{
lean_object* v_val_740_; lean_object* v___x_741_; 
v_val_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_val_740_);
lean_dec_ref_known(v___x_739_, 1);
v___x_741_ = l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__2(v_val_740_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_751_; 
lean_dec_ref(v_a_737_);
v_a_742_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_751_ == 0)
{
v___x_744_ = v___x_741_;
v_isShared_745_ = v_isSharedCheck_751_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_741_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_751_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_749_; 
v___x_746_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__3));
v___x_747_ = lean_string_append(v___x_746_, v_a_742_);
lean_dec(v_a_742_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v___x_747_);
v___x_749_ = v___x_744_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_747_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
else
{
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
lean_dec_ref(v_a_737_);
v_a_752_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_741_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_741_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
lean_ctor_set_tag(v___x_754_, 0);
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
else
{
lean_object* v_a_760_; 
v_a_760_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_760_);
lean_dec_ref_known(v___x_741_, 1);
if (lean_obj_tag(v_a_760_) == 0)
{
v___y_732_ = v___y_736_;
v___y_733_ = v_a_737_;
goto v___jp_731_;
}
else
{
lean_object* v_val_761_; 
v_val_761_ = lean_ctor_get(v_a_760_, 0);
lean_inc(v_val_761_);
lean_dec_ref_known(v_a_760_, 1);
v___y_704_ = v___y_736_;
v___y_705_ = v_a_737_;
v_a_706_ = v_val_761_;
goto v___jp_703_;
}
}
}
}
}
v___jp_762_:
{
lean_object* v___x_764_; 
v___x_764_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4));
v___y_736_ = v___y_763_;
v_a_737_ = v___x_764_;
goto v___jp_735_;
}
v___jp_765_:
{
lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_767_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__4));
v___x_768_ = l_Lake_JsonObject_getJson_x3f(v_obj_653_, v___x_767_);
if (lean_obj_tag(v___x_768_) == 0)
{
v___y_763_ = v_depHash_766_;
goto v___jp_762_;
}
else
{
lean_object* v_val_769_; lean_object* v___x_770_; 
v_val_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_val_769_);
lean_dec_ref_known(v___x_768_, 1);
v___x_770_ = l_Lean_Option_fromJson_x3f___at___00Lake_BuildMetadata_fromJsonObject_x3f_spec__3(v_val_769_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_780_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_780_ == 0)
{
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_780_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_770_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_780_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_778_; 
v___x_775_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__5));
v___x_776_ = lean_string_append(v___x_775_, v_a_771_);
lean_dec(v_a_771_);
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v___x_776_);
v___x_778_ = v___x_773_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
else
{
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
v_a_781_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_770_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_770_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
lean_ctor_set_tag(v___x_783_, 0);
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
else
{
lean_object* v_a_789_; 
v_a_789_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_770_, 1);
if (lean_obj_tag(v_a_789_) == 0)
{
v___y_763_ = v_depHash_766_;
goto v___jp_762_;
}
else
{
lean_object* v_val_790_; 
v_val_790_ = lean_ctor_get(v_a_789_, 0);
lean_inc(v_val_790_);
lean_dec_ref_known(v_a_789_, 1);
v___y_736_ = v_depHash_766_;
v_a_737_ = v_val_790_;
goto v___jp_735_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJsonObject_x3f___boxed(lean_object* v_obj_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lake_BuildMetadata_fromJsonObject_x3f(v_obj_846_);
lean_dec(v_obj_846_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f(lean_object* v_json_854_){
_start:
{
switch(lean_obj_tag(v_json_854_))
{
case 2:
{
lean_object* v_n_855_; lean_object* v___x_856_; 
v_n_855_ = lean_ctor_get(v_json_854_, 0);
v___x_856_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_855_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_866_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_866_ == 0)
{
v___x_859_ = v___x_856_;
v_isShared_860_ = v_isSharedCheck_866_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_856_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_866_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_864_; 
v___x_861_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__0));
v___x_862_ = lean_string_append(v___x_861_, v_a_857_);
lean_dec(v_a_857_);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 0, v___x_862_);
v___x_864_ = v___x_859_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_862_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_876_; 
v_a_867_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_876_ == 0)
{
v___x_869_ = v___x_856_;
v_isShared_870_ = v_isSharedCheck_876_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_856_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_876_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
uint64_t v___x_871_; lean_object* v___x_872_; lean_object* v___x_874_; 
v___x_871_ = lean_unbox_uint64(v_a_867_);
lean_dec(v_a_867_);
v___x_872_ = l_Lake_BuildMetadata_ofStub(v___x_871_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 0, v___x_872_);
v___x_874_ = v___x_869_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
case 5:
{
lean_object* v_kvPairs_877_; lean_object* v___x_878_; 
v_kvPairs_877_ = lean_ctor_get(v_json_854_, 0);
v___x_878_ = l_Lake_BuildMetadata_fromJsonObject_x3f(v_kvPairs_877_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_904_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_904_ == 0)
{
v___x_881_ = v___x_878_;
v_isShared_882_ = v_isSharedCheck_904_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_878_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_904_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_889_ = ((lean_object*)(l_Lake_BuildMetadata_toJson___closed__0));
v___x_890_ = l_Lake_JsonObject_getJson_x3f(v_kvPairs_877_, v___x_889_);
if (lean_obj_tag(v___x_890_) == 1)
{
lean_object* v_val_891_; 
v_val_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_val_891_);
lean_dec_ref_known(v___x_890_, 1);
if (lean_obj_tag(v_val_891_) == 3)
{
lean_object* v_s_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_903_; 
v_s_892_ = lean_ctor_get(v_val_891_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v_val_891_);
if (v_isSharedCheck_903_ == 0)
{
v___x_894_ = v_val_891_;
v_isShared_895_ = v_isSharedCheck_903_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_s_892_);
lean_dec(v_val_891_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_903_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_896_; uint8_t v___x_897_; 
v___x_896_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_BuildMetadata_schemaVersion___closed__0));
v___x_897_ = lean_string_dec_eq(v_s_892_, v___x_896_);
lean_dec_ref(v_s_892_);
if (v___x_897_ == 0)
{
lean_del_object(v___x_894_);
goto v___jp_883_;
}
else
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_901_; 
lean_del_object(v___x_881_);
v___x_898_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__2));
v___x_899_ = lean_string_append(v___x_898_, v_a_879_);
lean_dec(v_a_879_);
if (v_isShared_895_ == 0)
{
lean_ctor_set_tag(v___x_894_, 0);
lean_ctor_set(v___x_894_, 0, v___x_899_);
v___x_901_ = v___x_894_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 1, 0);
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
lean_dec(v_val_891_);
goto v___jp_883_;
}
}
else
{
lean_dec(v___x_890_);
goto v___jp_883_;
}
v___jp_883_:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_884_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__1));
v___x_885_ = lean_string_append(v___x_884_, v_a_879_);
lean_dec(v_a_879_);
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 0, v___x_885_);
v___x_887_ = v___x_881_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
else
{
return v___x_878_;
}
}
default: 
{
lean_object* v___x_905_; 
v___x_905_ = ((lean_object*)(l_Lake_BuildMetadata_fromJson_x3f___closed__4));
return v___x_905_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_fromJson_x3f___boxed(lean_object* v_json_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lake_BuildMetadata_fromJson_x3f(v_json_906_);
lean_dec(v_json_906_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_parse(lean_object* v_contents_910_){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = l_Lean_Json_parse(v_contents_910_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_911_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_911_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_921_; 
v_a_920_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_911_, 1);
v___x_921_ = l_Lake_BuildMetadata_fromJson_x3f(v_a_920_);
lean_dec(v_a_920_);
return v___x_921_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch(uint64_t v_inputHash_922_, lean_object* v_outputs_923_){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; lean_object* v___x_927_; 
v___x_924_ = ((lean_object*)(l_Lake_BuildMetadata_ofStub___closed__0));
v___x_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_925_, 0, v_outputs_923_);
v___x_926_ = 1;
v___x_927_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_927_, 0, v___x_924_);
lean_ctor_set(v___x_927_, 1, v___x_925_);
lean_ctor_set(v___x_927_, 2, v___x_924_);
lean_ctor_set_uint64(v___x_927_, sizeof(void*)*3, v_inputHash_922_);
lean_ctor_set_uint8(v___x_927_, sizeof(void*)*3 + 8, v___x_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofFetch___boxed(lean_object* v_inputHash_928_, lean_object* v_outputs_929_){
_start:
{
uint64_t v_inputHash_boxed_930_; lean_object* v_res_931_; 
v_inputHash_boxed_930_ = lean_unbox_uint64(v_inputHash_928_);
lean_dec_ref(v_inputHash_928_);
v_res_931_ = l_Lake_BuildMetadata_ofFetch(v_inputHash_boxed_930_, v_outputs_929_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(lean_object* v_as_932_, size_t v_i_933_, size_t v_stop_934_, lean_object* v_b_935_){
_start:
{
uint8_t v___x_936_; 
v___x_936_ = lean_usize_dec_eq(v_i_933_, v_stop_934_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; lean_object* v___y_939_; lean_object* v_inputs_946_; uint64_t v_hash_947_; lean_object* v___x_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_937_ = lean_array_uget_borrowed(v_as_932_, v_i_933_);
v_inputs_946_ = lean_ctor_get(v___x_937_, 1);
v_hash_947_ = lean_ctor_get_uint64(v___x_937_, sizeof(void*)*3);
v___x_948_ = lean_array_get_size(v_inputs_946_);
v___x_949_ = lean_unsigned_to_nat(0u);
v___x_950_ = lean_nat_dec_eq(v___x_948_, v___x_949_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_946_);
v___x_952_ = l_Lean_Array_toJson___at___00Lake_BuildMetadata_toJson_spec__0(v___x_951_);
v___y_939_ = v___x_952_;
goto v___jp_938_;
}
else
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = l_Lake_lowerHexUInt64(v_hash_947_);
v___x_954_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
v___y_939_ = v___x_954_;
goto v___jp_938_;
}
v___jp_938_:
{
lean_object* v_caption_940_; lean_object* v___x_941_; lean_object* v___x_942_; size_t v___x_943_; size_t v___x_944_; 
v_caption_940_ = lean_ctor_get(v___x_937_, 0);
lean_inc_ref(v_caption_940_);
v___x_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_941_, 0, v_caption_940_);
lean_ctor_set(v___x_941_, 1, v___y_939_);
v___x_942_ = lean_array_push(v_b_935_, v___x_941_);
v___x_943_ = ((size_t)1ULL);
v___x_944_ = lean_usize_add(v_i_933_, v___x_943_);
v_i_933_ = v___x_944_;
v_b_935_ = v___x_942_;
goto _start;
}
}
else
{
return v_b_935_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs(lean_object* v_inputs_955_){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_956_ = lean_unsigned_to_nat(0u);
v___x_957_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__4));
v___x_958_ = lean_array_get_size(v_inputs_955_);
v___x_959_ = lean_nat_dec_lt(v___x_956_, v___x_958_);
if (v___x_959_ == 0)
{
return v___x_957_;
}
else
{
uint8_t v___x_960_; 
v___x_960_ = lean_nat_dec_le(v___x_958_, v___x_958_);
if (v___x_960_ == 0)
{
if (v___x_959_ == 0)
{
return v___x_957_;
}
else
{
size_t v___x_961_; size_t v___x_962_; lean_object* v___x_963_; 
v___x_961_ = ((size_t)0ULL);
v___x_962_ = lean_usize_of_nat(v___x_958_);
v___x_963_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_inputs_955_, v___x_961_, v___x_962_, v___x_957_);
return v___x_963_;
}
}
else
{
size_t v___x_964_; size_t v___x_965_; lean_object* v___x_966_; 
v___x_964_ = ((size_t)0ULL);
v___x_965_ = lean_usize_of_nat(v___x_958_);
v___x_966_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_inputs_955_, v___x_964_, v___x_965_, v___x_957_);
return v___x_966_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_serializeInputs___boxed(lean_object* v_inputs_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_967_);
lean_dec_ref(v_inputs_967_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0___boxed(lean_object* v_as_969_, lean_object* v_i_970_, lean_object* v_stop_971_, lean_object* v_b_972_){
_start:
{
size_t v_i_boxed_973_; size_t v_stop_boxed_974_; lean_object* v_res_975_; 
v_i_boxed_973_ = lean_unbox_usize(v_i_970_);
lean_dec(v_i_970_);
v_stop_boxed_974_ = lean_unbox_usize(v_stop_971_);
lean_dec(v_stop_971_);
v_res_975_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_serializeInputs_spec__0(v_as_969_, v_i_boxed_973_, v_stop_boxed_974_, v_b_972_);
lean_dec_ref(v_as_969_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(lean_object* v_depTrace_976_, lean_object* v_outputs_977_, lean_object* v_log_978_){
_start:
{
lean_object* v_inputs_979_; uint64_t v_hash_980_; lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; lean_object* v___x_984_; 
v_inputs_979_ = lean_ctor_get(v_depTrace_976_, 1);
v_hash_980_ = lean_ctor_get_uint64(v_depTrace_976_, sizeof(void*)*3);
v___x_981_ = l___private_Lake_Build_Common_0__Lake_serializeInputs(v_inputs_979_);
v___x_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_982_, 0, v_outputs_977_);
v___x_983_ = 0;
v___x_984_ = lean_alloc_ctor(0, 3, 9);
lean_ctor_set(v___x_984_, 0, v___x_981_);
lean_ctor_set(v___x_984_, 1, v___x_982_);
lean_ctor_set(v___x_984_, 2, v_log_978_);
lean_ctor_set_uint64(v___x_984_, sizeof(void*)*3, v_hash_980_);
lean_ctor_set_uint8(v___x_984_, sizeof(void*)*3 + 8, v___x_983_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore___boxed(lean_object* v_depTrace_985_, lean_object* v_outputs_986_, lean_object* v_log_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_985_, v_outputs_986_, v_log_987_);
lean_dec_ref(v_depTrace_985_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg(lean_object* v_inst_989_, lean_object* v_depTrace_990_, lean_object* v_outputs_991_, lean_object* v_log_992_){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = lean_apply_1(v_inst_989_, v_outputs_991_);
v___x_994_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_990_, v___x_993_, v_log_992_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___redArg___boxed(lean_object* v_inst_995_, lean_object* v_depTrace_996_, lean_object* v_outputs_997_, lean_object* v_log_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = l_Lake_BuildMetadata_ofBuild___redArg(v_inst_995_, v_depTrace_996_, v_outputs_997_, v_log_998_);
lean_dec_ref(v_depTrace_996_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild(lean_object* v_00_u03b1_1000_, lean_object* v_inst_1001_, lean_object* v_depTrace_1002_, lean_object* v_outputs_1003_, lean_object* v_log_1004_){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_apply_1(v_inst_1001_, v_outputs_1003_);
v___x_1006_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1002_, v___x_1005_, v_log_1004_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_ofBuild___boxed(lean_object* v_00_u03b1_1007_, lean_object* v_inst_1008_, lean_object* v_depTrace_1009_, lean_object* v_outputs_1010_, lean_object* v_log_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Lake_BuildMetadata_ofBuild(v_00_u03b1_1007_, v_inst_1008_, v_depTrace_1009_, v_outputs_1010_, v_log_1011_);
lean_dec_ref(v_depTrace_1009_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx(lean_object* v_x_1013_){
_start:
{
switch(lean_obj_tag(v_x_1013_))
{
case 0:
{
lean_object* v___x_1014_; 
v___x_1014_ = lean_unsigned_to_nat(0u);
return v___x_1014_;
}
case 1:
{
lean_object* v___x_1015_; 
v___x_1015_ = lean_unsigned_to_nat(1u);
return v___x_1015_;
}
default: 
{
lean_object* v___x_1016_; 
v___x_1016_ = lean_unsigned_to_nat(2u);
return v___x_1016_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorIdx___boxed(lean_object* v_x_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lake_SavedTrace_ctorIdx(v_x_1017_);
lean_dec(v_x_1017_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___redArg(lean_object* v_t_1019_, lean_object* v_k_1020_){
_start:
{
if (lean_obj_tag(v_t_1019_) == 2)
{
lean_object* v_data_1021_; lean_object* v___x_1022_; 
v_data_1021_ = lean_ctor_get(v_t_1019_, 0);
lean_inc_ref(v_data_1021_);
lean_dec_ref_known(v_t_1019_, 1);
v___x_1022_ = lean_apply_1(v_k_1020_, v_data_1021_);
return v___x_1022_;
}
else
{
lean_dec(v_t_1019_);
return v_k_1020_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim(lean_object* v_motive_1023_, lean_object* v_ctorIdx_1024_, lean_object* v_t_1025_, lean_object* v_h_1026_, lean_object* v_k_1027_){
_start:
{
lean_object* v___x_1028_; 
v___x_1028_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1025_, v_k_1027_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ctorElim___boxed(lean_object* v_motive_1029_, lean_object* v_ctorIdx_1030_, lean_object* v_t_1031_, lean_object* v_h_1032_, lean_object* v_k_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_Lake_SavedTrace_ctorElim(v_motive_1029_, v_ctorIdx_1030_, v_t_1031_, v_h_1032_, v_k_1033_);
lean_dec(v_ctorIdx_1030_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim___redArg(lean_object* v_t_1035_, lean_object* v_missing_1036_){
_start:
{
lean_object* v___x_1037_; 
v___x_1037_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1035_, v_missing_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_missing_elim(lean_object* v_motive_1038_, lean_object* v_t_1039_, lean_object* v_h_1040_, lean_object* v_missing_1041_){
_start:
{
lean_object* v___x_1042_; 
v___x_1042_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1039_, v_missing_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim___redArg(lean_object* v_t_1043_, lean_object* v_invalid_1044_){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1043_, v_invalid_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_invalid_elim(lean_object* v_motive_1046_, lean_object* v_t_1047_, lean_object* v_h_1048_, lean_object* v_invalid_1049_){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1047_, v_invalid_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim___redArg(lean_object* v_t_1051_, lean_object* v_ok_1052_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1051_, v_ok_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_ok_elim(lean_object* v_motive_1054_, lean_object* v_t_1055_, lean_object* v_h_1056_, lean_object* v_ok_1057_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l_Lake_SavedTrace_ctorElim___redArg(v_t_1055_, v_ok_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lake_readTraceFile(lean_object* v_path_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_IO_FS_readFile(v_path_1060_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v_a_1064_; lean_object* v_a_1066_; lean_object* v___x_1075_; 
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1064_);
lean_dec_ref_known(v___x_1063_, 1);
v___x_1075_ = l_Lean_Json_parse(v_a_1064_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
v_a_1066_ = v_a_1076_;
goto v___jp_1065_;
}
else
{
lean_object* v_a_1077_; lean_object* v___x_1078_; 
v_a_1077_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1077_);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1078_ = l_Lake_BuildMetadata_fromJson_x3f(v_a_1077_);
lean_dec(v_a_1077_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; 
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
lean_inc(v_a_1079_);
lean_dec_ref_known(v___x_1078_, 1);
v_a_1066_ = v_a_1079_;
goto v___jp_1065_;
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1088_; 
lean_dec_ref(v_path_1060_);
v_a_1080_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1082_ = v___x_1078_;
v_isShared_1083_ = v_isSharedCheck_1088_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1078_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1088_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
lean_ctor_set_tag(v___x_1082_, 2);
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
lean_object* v___x_1086_; 
v___x_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
lean_ctor_set(v___x_1086_, 1, v___y_1061_);
return v___x_1086_;
}
}
}
}
v___jp_1065_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; uint8_t v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1067_ = ((lean_object*)(l_Lake_addPureTrace___redArg___closed__0));
v___x_1068_ = lean_string_append(v_path_1060_, v___x_1067_);
v___x_1069_ = lean_string_append(v___x_1068_, v_a_1066_);
lean_dec_ref(v_a_1066_);
v___x_1070_ = 2;
v___x_1071_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1071_, 0, v___x_1069_);
lean_ctor_set_uint8(v___x_1071_, sizeof(void*)*1, v___x_1070_);
v___x_1072_ = lean_array_push(v___y_1061_, v___x_1071_);
v___x_1073_ = lean_box(1);
v___x_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
lean_ctor_set(v___x_1074_, 1, v___x_1072_);
return v___x_1074_;
}
}
else
{
lean_object* v_a_1089_; 
v_a_1089_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v___x_1063_, 1);
if (lean_obj_tag(v_a_1089_) == 11)
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
lean_dec_ref_known(v_a_1089_, 2);
lean_dec_ref(v_path_1060_);
v___x_1090_ = lean_box(0);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set(v___x_1091_, 1, v___y_1061_);
return v___x_1091_;
}
else
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; uint8_t v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1092_ = ((lean_object*)(l_Lake_readTraceFile___closed__0));
v___x_1093_ = lean_string_append(v_path_1060_, v___x_1092_);
v___x_1094_ = lean_io_error_to_string(v_a_1089_);
v___x_1095_ = lean_string_append(v___x_1093_, v___x_1094_);
lean_dec_ref(v___x_1094_);
v___x_1096_ = 3;
v___x_1097_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set_uint8(v___x_1097_, sizeof(void*)*1, v___x_1096_);
v___x_1098_ = lean_array_get_size(v___y_1061_);
v___x_1099_ = lean_array_push(v___y_1061_, v___x_1097_);
v___x_1100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
return v___x_1100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_readTraceFile___boxed(lean_object* v_path_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lake_readTraceFile(v_path_1101_, v___y_1102_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile(lean_object* v_path_1105_, lean_object* v_data_1106_){
_start:
{
lean_object* v___x_1108_; 
lean_inc_ref(v_path_1105_);
v___x_1108_ = l_Lake_createParentDirs(v_path_1105_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
lean_dec_ref_known(v___x_1108_, 1);
v___x_1109_ = l_Lake_BuildMetadata_toJson(v_data_1106_);
v___x_1110_ = lean_unsigned_to_nat(80u);
v___x_1111_ = l_Lean_Json_pretty(v___x_1109_, v___x_1110_);
v___x_1112_ = l_IO_FS_writeFile(v_path_1105_, v___x_1111_);
lean_dec_ref(v___x_1111_);
lean_dec_ref(v_path_1105_);
return v___x_1112_;
}
else
{
lean_dec_ref(v_data_1106_);
lean_dec_ref(v_path_1105_);
return v___x_1108_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildMetadata_writeFile___boxed(lean_object* v_path_1113_, lean_object* v_data_1114_, lean_object* v___y_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_Lake_BuildMetadata_writeFile(v_path_1113_, v_data_1114_);
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace(lean_object* v_path_1117_, uint64_t v_inputHash_1118_, lean_object* v_outputs_1119_){
_start:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; 
v___x_1121_ = l_Lake_BuildMetadata_ofFetch(v_inputHash_1118_, v_outputs_1119_);
v___x_1122_ = l_Lake_BuildMetadata_writeFile(v_path_1117_, v___x_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFetchTrace___boxed(lean_object* v_path_1123_, lean_object* v_inputHash_1124_, lean_object* v_outputs_1125_, lean_object* v___y_1126_){
_start:
{
uint64_t v_inputHash_boxed_1127_; lean_object* v_res_1128_; 
v_inputHash_boxed_1127_ = lean_unbox_uint64(v_inputHash_1124_);
lean_dec_ref(v_inputHash_1124_);
v_res_1128_ = l_Lake_writeFetchTrace(v_path_1123_, v_inputHash_boxed_1127_, v_outputs_1125_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg(lean_object* v_inst_1129_, lean_object* v_path_1130_, lean_object* v_depTrace_1131_, lean_object* v_outputs_1132_, lean_object* v_log_1133_){
_start:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1135_ = lean_apply_1(v_inst_1129_, v_outputs_1132_);
v___x_1136_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1131_, v___x_1135_, v_log_1133_);
v___x_1137_ = l_Lake_BuildMetadata_writeFile(v_path_1130_, v___x_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___redArg___boxed(lean_object* v_inst_1138_, lean_object* v_path_1139_, lean_object* v_depTrace_1140_, lean_object* v_outputs_1141_, lean_object* v_log_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lake_writeBuildTrace___redArg(v_inst_1138_, v_path_1139_, v_depTrace_1140_, v_outputs_1141_, v_log_1142_);
lean_dec_ref(v_depTrace_1140_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace(lean_object* v_00_u03b1_1145_, lean_object* v_inst_1146_, lean_object* v_path_1147_, lean_object* v_depTrace_1148_, lean_object* v_outputs_1149_, lean_object* v_log_1150_){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1152_ = lean_apply_1(v_inst_1146_, v_outputs_1149_);
v___x_1153_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1148_, v___x_1152_, v_log_1150_);
v___x_1154_ = l_Lake_BuildMetadata_writeFile(v_path_1147_, v___x_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeBuildTrace___boxed(lean_object* v_00_u03b1_1155_, lean_object* v_inst_1156_, lean_object* v_path_1157_, lean_object* v_depTrace_1158_, lean_object* v_outputs_1159_, lean_object* v_log_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lake_writeBuildTrace(v_00_u03b1_1155_, v_inst_1156_, v_path_1157_, v_depTrace_1158_, v_outputs_1159_, v_log_1160_);
lean_dec_ref(v_depTrace_1158_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx(uint8_t v_x_1163_){
_start:
{
switch(v_x_1163_)
{
case 0:
{
lean_object* v___x_1164_; 
v___x_1164_ = lean_unsigned_to_nat(0u);
return v___x_1164_;
}
case 1:
{
lean_object* v___x_1165_; 
v___x_1165_ = lean_unsigned_to_nat(1u);
return v___x_1165_;
}
default: 
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_unsigned_to_nat(2u);
return v___x_1166_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorIdx___boxed(lean_object* v_x_1167_){
_start:
{
uint8_t v_x_boxed_1168_; lean_object* v_res_1169_; 
v_x_boxed_1168_ = lean_unbox(v_x_1167_);
v_res_1169_ = l_Lake_OutputStatus_ctorIdx(v_x_boxed_1168_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg(lean_object* v_k_1170_){
_start:
{
lean_inc(v_k_1170_);
return v_k_1170_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___redArg___boxed(lean_object* v_k_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lake_OutputStatus_ctorElim___redArg(v_k_1171_);
lean_dec(v_k_1171_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim(lean_object* v_motive_1173_, lean_object* v_ctorIdx_1174_, uint8_t v_t_1175_, lean_object* v_h_1176_, lean_object* v_k_1177_){
_start:
{
lean_inc(v_k_1177_);
return v_k_1177_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ctorElim___boxed(lean_object* v_motive_1178_, lean_object* v_ctorIdx_1179_, lean_object* v_t_1180_, lean_object* v_h_1181_, lean_object* v_k_1182_){
_start:
{
uint8_t v_t_boxed_1183_; lean_object* v_res_1184_; 
v_t_boxed_1183_ = lean_unbox(v_t_1180_);
v_res_1184_ = l_Lake_OutputStatus_ctorElim(v_motive_1178_, v_ctorIdx_1179_, v_t_boxed_1183_, v_h_1181_, v_k_1182_);
lean_dec(v_k_1182_);
lean_dec(v_ctorIdx_1179_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg(lean_object* v_outOfDate_1185_){
_start:
{
lean_inc(v_outOfDate_1185_);
return v_outOfDate_1185_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___redArg___boxed(lean_object* v_outOfDate_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lake_OutputStatus_outOfDate_elim___redArg(v_outOfDate_1186_);
lean_dec(v_outOfDate_1186_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim(lean_object* v_motive_1188_, uint8_t v_t_1189_, lean_object* v_h_1190_, lean_object* v_outOfDate_1191_){
_start:
{
lean_inc(v_outOfDate_1191_);
return v_outOfDate_1191_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_outOfDate_elim___boxed(lean_object* v_motive_1192_, lean_object* v_t_1193_, lean_object* v_h_1194_, lean_object* v_outOfDate_1195_){
_start:
{
uint8_t v_t_boxed_1196_; lean_object* v_res_1197_; 
v_t_boxed_1196_ = lean_unbox(v_t_1193_);
v_res_1197_ = l_Lake_OutputStatus_outOfDate_elim(v_motive_1192_, v_t_boxed_1196_, v_h_1194_, v_outOfDate_1195_);
lean_dec(v_outOfDate_1195_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(lean_object* v_mtimeUpToDate_1198_){
_start:
{
lean_inc(v_mtimeUpToDate_1198_);
return v_mtimeUpToDate_1198_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___redArg___boxed(lean_object* v_mtimeUpToDate_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lake_OutputStatus_mtimeUpToDate_elim___redArg(v_mtimeUpToDate_1199_);
lean_dec(v_mtimeUpToDate_1199_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim(lean_object* v_motive_1201_, uint8_t v_t_1202_, lean_object* v_h_1203_, lean_object* v_mtimeUpToDate_1204_){
_start:
{
lean_inc(v_mtimeUpToDate_1204_);
return v_mtimeUpToDate_1204_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_mtimeUpToDate_elim___boxed(lean_object* v_motive_1205_, lean_object* v_t_1206_, lean_object* v_h_1207_, lean_object* v_mtimeUpToDate_1208_){
_start:
{
uint8_t v_t_boxed_1209_; lean_object* v_res_1210_; 
v_t_boxed_1209_ = lean_unbox(v_t_1206_);
v_res_1210_ = l_Lake_OutputStatus_mtimeUpToDate_elim(v_motive_1205_, v_t_boxed_1209_, v_h_1207_, v_mtimeUpToDate_1208_);
lean_dec(v_mtimeUpToDate_1208_);
return v_res_1210_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg(lean_object* v_hashUpToDate_1211_){
_start:
{
lean_inc(v_hashUpToDate_1211_);
return v_hashUpToDate_1211_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___redArg___boxed(lean_object* v_hashUpToDate_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lake_OutputStatus_hashUpToDate_elim___redArg(v_hashUpToDate_1212_);
lean_dec(v_hashUpToDate_1212_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim(lean_object* v_motive_1214_, uint8_t v_t_1215_, lean_object* v_h_1216_, lean_object* v_hashUpToDate_1217_){
_start:
{
lean_inc(v_hashUpToDate_1217_);
return v_hashUpToDate_1217_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_hashUpToDate_elim___boxed(lean_object* v_motive_1218_, lean_object* v_t_1219_, lean_object* v_h_1220_, lean_object* v_hashUpToDate_1221_){
_start:
{
uint8_t v_t_boxed_1222_; lean_object* v_res_1223_; 
v_t_boxed_1222_ = lean_unbox(v_t_1219_);
v_res_1223_ = l_Lake_OutputStatus_hashUpToDate_elim(v_motive_1218_, v_t_boxed_1222_, v_h_1220_, v_hashUpToDate_1221_);
lean_dec(v_hashUpToDate_1221_);
return v_res_1223_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofNat(lean_object* v_n_1224_){
_start:
{
lean_object* v___x_1225_; uint8_t v___x_1226_; 
v___x_1225_ = lean_unsigned_to_nat(0u);
v___x_1226_ = lean_nat_dec_le(v_n_1224_, v___x_1225_);
if (v___x_1226_ == 0)
{
lean_object* v___x_1227_; uint8_t v___x_1228_; 
v___x_1227_ = lean_unsigned_to_nat(1u);
v___x_1228_ = lean_nat_dec_le(v_n_1224_, v___x_1227_);
if (v___x_1228_ == 0)
{
uint8_t v___x_1229_; 
v___x_1229_ = 2;
return v___x_1229_;
}
else
{
uint8_t v___x_1230_; 
v___x_1230_ = 1;
return v___x_1230_;
}
}
else
{
uint8_t v___x_1231_; 
v___x_1231_ = 0;
return v___x_1231_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofNat___boxed(lean_object* v_n_1232_){
_start:
{
uint8_t v_res_1233_; lean_object* v_r_1234_; 
v_res_1233_ = l_Lake_OutputStatus_ofNat(v_n_1232_);
lean_dec(v_n_1232_);
v_r_1234_ = lean_box(v_res_1233_);
return v_r_1234_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqOutputStatus(uint8_t v_x_1235_, uint8_t v_y_1236_){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v___x_1237_ = l_Lake_OutputStatus_ctorIdx(v_x_1235_);
v___x_1238_ = l_Lake_OutputStatus_ctorIdx(v_y_1236_);
v___x_1239_ = lean_nat_dec_eq(v___x_1237_, v___x_1238_);
lean_dec(v___x_1238_);
lean_dec(v___x_1237_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqOutputStatus___boxed(lean_object* v_x_1240_, lean_object* v_y_1241_){
_start:
{
uint8_t v_x_20__boxed_1242_; uint8_t v_y_21__boxed_1243_; uint8_t v_res_1244_; lean_object* v_r_1245_; 
v_x_20__boxed_1242_ = lean_unbox(v_x_1240_);
v_y_21__boxed_1243_ = lean_unbox(v_y_1241_);
v_res_1244_ = l_Lake_instDecidableEqOutputStatus(v_x_20__boxed_1242_, v_y_21__boxed_1243_);
v_r_1245_ = lean_box(v_res_1244_);
return v_r_1245_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofHashCheck(uint8_t v_upToDate_1246_){
_start:
{
if (v_upToDate_1246_ == 0)
{
uint8_t v___x_1247_; 
v___x_1247_ = 0;
return v___x_1247_;
}
else
{
uint8_t v___x_1248_; 
v___x_1248_ = 2;
return v___x_1248_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofHashCheck___boxed(lean_object* v_upToDate_1249_){
_start:
{
uint8_t v_upToDate_boxed_1250_; uint8_t v_res_1251_; lean_object* v_r_1252_; 
v_upToDate_boxed_1250_ = lean_unbox(v_upToDate_1249_);
v_res_1251_ = l_Lake_OutputStatus_ofHashCheck(v_upToDate_boxed_1250_);
v_r_1252_ = lean_box(v_res_1251_);
return v_r_1252_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_ofMTimeCheck(uint8_t v_upToDate_1253_){
_start:
{
if (v_upToDate_1253_ == 0)
{
uint8_t v___x_1254_; 
v___x_1254_ = 0;
return v___x_1254_;
}
else
{
uint8_t v___x_1255_; 
v___x_1255_ = 1;
return v___x_1255_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_ofMTimeCheck___boxed(lean_object* v_upToDate_1256_){
_start:
{
uint8_t v_upToDate_boxed_1257_; uint8_t v_res_1258_; lean_object* v_r_1259_; 
v_upToDate_boxed_1257_ = lean_unbox(v_upToDate_1256_);
v_res_1258_ = l_Lake_OutputStatus_ofMTimeCheck(v_upToDate_boxed_1257_);
v_r_1259_ = lean_box(v_res_1258_);
return v_r_1259_;
}
}
static lean_object* _init_l_Lake_OutputStatus_isUpToDate___closed__0(void){
_start:
{
uint8_t v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = 0;
v___x_1261_ = l_Lake_OutputStatus_ctorIdx(v___x_1260_);
return v___x_1261_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isUpToDate(uint8_t v_status_1262_){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; uint8_t v___x_1265_; 
v___x_1263_ = l_Lake_OutputStatus_ctorIdx(v_status_1262_);
v___x_1264_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_1265_ = lean_nat_dec_eq(v___x_1263_, v___x_1264_);
lean_dec(v___x_1263_);
if (v___x_1265_ == 0)
{
uint8_t v___x_1266_; 
v___x_1266_ = 1;
return v___x_1266_;
}
else
{
uint8_t v___x_1267_; 
v___x_1267_ = 0;
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isUpToDate___boxed(lean_object* v_status_1268_){
_start:
{
uint8_t v_status_boxed_1269_; uint8_t v_res_1270_; lean_object* v_r_1271_; 
v_status_boxed_1269_ = lean_unbox(v_status_1268_);
v_res_1270_ = l_Lake_OutputStatus_isUpToDate(v_status_boxed_1269_);
v_r_1271_ = lean_box(v_res_1270_);
return v_r_1271_;
}
}
static lean_object* _init_l_Lake_OutputStatus_isCacheable___closed__0(void){
_start:
{
uint8_t v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = 1;
v___x_1273_ = l_Lake_OutputStatus_ctorIdx(v___x_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT uint8_t l_Lake_OutputStatus_isCacheable(uint8_t v_status_1274_){
_start:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1275_ = l_Lake_OutputStatus_ctorIdx(v_status_1274_);
v___x_1276_ = lean_obj_once(&l_Lake_OutputStatus_isCacheable___closed__0, &l_Lake_OutputStatus_isCacheable___closed__0_once, _init_l_Lake_OutputStatus_isCacheable___closed__0);
v___x_1277_ = lean_nat_dec_eq(v___x_1275_, v___x_1276_);
lean_dec(v___x_1275_);
if (v___x_1277_ == 0)
{
uint8_t v___x_1278_; 
v___x_1278_ = 1;
return v___x_1278_;
}
else
{
uint8_t v___x_1279_; 
v___x_1279_ = 0;
return v___x_1279_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutputStatus_isCacheable___boxed(lean_object* v_status_1280_){
_start:
{
uint8_t v_status_boxed_1281_; uint8_t v_res_1282_; lean_object* v_r_1283_; 
v_status_boxed_1281_ = lean_unbox(v_status_1280_);
v_res_1282_ = l_Lake_OutputStatus_isCacheable(v_status_boxed_1281_);
v_r_1283_ = lean_box(v_res_1282_);
return v_r_1283_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_1284_; lean_object* v___f_1285_; 
v___x_1284_ = lean_alloc_closure((void*)(l_Lake_instDecidableEqHash___boxed), 2, 0);
v___f_1285_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1285_, 0, v___x_1284_);
return v___f_1285_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(lean_object* v_inst_1286_, lean_object* v_inst_1287_, lean_object* v_info_1288_, lean_object* v_depTrace_1289_, lean_object* v_depHash_1290_, lean_object* v_oldTrace_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
uint64_t v_hash_1295_; lean_object* v___f_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; 
v_hash_1295_ = lean_ctor_get_uint64(v_depTrace_1289_, sizeof(void*)*3);
v___f_1296_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___closed__0);
v___x_1297_ = lean_box_uint64(v_hash_1295_);
v___x_1298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
v___x_1299_ = l_Option_instBEq_beq___redArg(v___f_1296_, v___x_1298_, v_depHash_1290_);
if (v___x_1299_ == 0)
{
lean_object* v_toBuildConfig_1300_; uint8_t v_oldMode_1301_; 
lean_dec_ref(v_inst_1286_);
v_toBuildConfig_1300_ = lean_ctor_get(v___y_1292_, 0);
v_oldMode_1301_ = lean_ctor_get_uint8(v_toBuildConfig_1300_, sizeof(void*)*4);
if (v_oldMode_1301_ == 0)
{
uint8_t v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
lean_dec(v_info_1288_);
lean_dec_ref(v_inst_1287_);
v___x_1302_ = 0;
v___x_1303_ = lean_box(v___x_1302_);
v___x_1304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set(v___x_1304_, 1, v___y_1293_);
return v___x_1304_;
}
else
{
uint8_t v___x_1305_; 
v___x_1305_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1287_, v_info_1288_, v_oldTrace_1291_);
if (v___x_1305_ == 0)
{
uint8_t v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = 0;
v___x_1307_ = lean_box(v___x_1306_);
v___x_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1307_);
lean_ctor_set(v___x_1308_, 1, v___y_1293_);
return v___x_1308_;
}
else
{
uint8_t v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = 1;
v___x_1310_ = lean_box(v___x_1309_);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v___y_1293_);
return v___x_1311_;
}
}
}
else
{
lean_object* v___x_1312_; uint8_t v___x_1313_; 
lean_dec_ref(v_inst_1287_);
v___x_1312_ = lean_apply_2(v_inst_1286_, v_info_1288_, lean_box(0));
v___x_1313_ = lean_unbox(v___x_1312_);
if (v___x_1313_ == 0)
{
uint8_t v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1314_ = 0;
v___x_1315_ = lean_box(v___x_1314_);
v___x_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
lean_ctor_set(v___x_1316_, 1, v___y_1293_);
return v___x_1316_;
}
else
{
uint8_t v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1317_ = 2;
v___x_1318_ = lean_box(v___x_1317_);
v___x_1319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
lean_ctor_set(v___x_1319_, 1, v___y_1293_);
return v___x_1319_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg___boxed(lean_object* v_inst_1320_, lean_object* v_inst_1321_, lean_object* v_info_1322_, lean_object* v_depTrace_1323_, lean_object* v_depHash_1324_, lean_object* v_oldTrace_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1320_, v_inst_1321_, v_info_1322_, v_depTrace_1323_, v_depHash_1324_, v_oldTrace_1325_, v___y_1326_, v___y_1327_);
lean_dec_ref(v___y_1326_);
lean_dec_ref(v_oldTrace_1325_);
lean_dec_ref(v_depTrace_1323_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(lean_object* v_00_u03b9_1330_, lean_object* v_inst_1331_, lean_object* v_inst_1332_, lean_object* v_info_1333_, lean_object* v_depTrace_1334_, lean_object* v_depHash_1335_, lean_object* v_oldTrace_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1331_, v_inst_1332_, v_info_1333_, v_depTrace_1334_, v_depHash_1335_, v_oldTrace_1336_, v___y_1341_, v___y_1342_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___boxed(lean_object* v_00_u03b9_1345_, lean_object* v_inst_1346_, lean_object* v_inst_1347_, lean_object* v_info_1348_, lean_object* v_depTrace_1349_, lean_object* v_depHash_1350_, lean_object* v_oldTrace_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27(v_00_u03b9_1345_, v_inst_1346_, v_inst_1347_, v_info_1348_, v_depTrace_1349_, v_depHash_1350_, v_oldTrace_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_);
lean_dec_ref(v___y_1356_);
lean_dec(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec(v___y_1353_);
lean_dec_ref(v___y_1352_);
lean_dec_ref(v_oldTrace_1351_);
lean_dec_ref(v_depTrace_1349_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg(lean_object* v_inst_1360_, lean_object* v_inst_1361_, lean_object* v_info_1362_, lean_object* v_depTrace_1363_, lean_object* v_depHash_1364_, lean_object* v_oldTrace_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v___x_1369_; lean_object* v_a_1370_; lean_object* v_a_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1389_; 
v___x_1369_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1360_, v_inst_1361_, v_info_1362_, v_depTrace_1363_, v_depHash_1364_, v_oldTrace_1365_, v___y_1366_, v___y_1367_);
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
v_a_1371_ = lean_ctor_get(v___x_1369_, 1);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1373_ = v___x_1369_;
v_isShared_1374_ = v_isSharedCheck_1389_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_a_1371_);
lean_inc(v_a_1370_);
lean_dec(v___x_1369_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1389_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
uint8_t v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1375_ = lean_unbox(v_a_1370_);
lean_dec(v_a_1370_);
v___x_1376_ = l_Lake_OutputStatus_ctorIdx(v___x_1375_);
v___x_1377_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_1378_ = lean_nat_dec_eq(v___x_1376_, v___x_1377_);
lean_dec(v___x_1376_);
if (v___x_1378_ == 0)
{
uint8_t v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1382_; 
v___x_1379_ = 1;
v___x_1380_ = lean_box(v___x_1379_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 0, v___x_1380_);
v___x_1382_ = v___x_1373_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1383_, 1, v_a_1371_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
else
{
uint8_t v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1387_; 
v___x_1384_ = 0;
v___x_1385_ = lean_box(v___x_1384_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 0, v___x_1385_);
v___x_1387_ = v___x_1373_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_a_1371_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___redArg___boxed(lean_object* v_inst_1390_, lean_object* v_inst_1391_, lean_object* v_info_1392_, lean_object* v_depTrace_1393_, lean_object* v_depHash_1394_, lean_object* v_oldTrace_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_){
_start:
{
lean_object* v_res_1399_; 
v_res_1399_ = l_Lake_checkHashUpToDate___redArg(v_inst_1390_, v_inst_1391_, v_info_1392_, v_depTrace_1393_, v_depHash_1394_, v_oldTrace_1395_, v___y_1396_, v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec_ref(v_oldTrace_1395_);
lean_dec_ref(v_depTrace_1393_);
return v_res_1399_;
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate(lean_object* v_00_u03b9_1400_, lean_object* v_inst_1401_, lean_object* v_inst_1402_, lean_object* v_info_1403_, lean_object* v_depTrace_1404_, lean_object* v_depHash_1405_, lean_object* v_oldTrace_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
lean_object* v___x_1414_; lean_object* v_a_1415_; lean_object* v_a_1416_; lean_object* v___x_1418_; uint8_t v_isShared_1419_; uint8_t v_isSharedCheck_1434_; 
v___x_1414_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1401_, v_inst_1402_, v_info_1403_, v_depTrace_1404_, v_depHash_1405_, v_oldTrace_1406_, v___y_1411_, v___y_1412_);
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
v_a_1416_ = lean_ctor_get(v___x_1414_, 1);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1418_ = v___x_1414_;
v_isShared_1419_ = v_isSharedCheck_1434_;
goto v_resetjp_1417_;
}
else
{
lean_inc(v_a_1416_);
lean_inc(v_a_1415_);
lean_dec(v___x_1414_);
v___x_1418_ = lean_box(0);
v_isShared_1419_ = v_isSharedCheck_1434_;
goto v_resetjp_1417_;
}
v_resetjp_1417_:
{
uint8_t v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; 
v___x_1420_ = lean_unbox(v_a_1415_);
lean_dec(v_a_1415_);
v___x_1421_ = l_Lake_OutputStatus_ctorIdx(v___x_1420_);
v___x_1422_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_1423_ = lean_nat_dec_eq(v___x_1421_, v___x_1422_);
lean_dec(v___x_1421_);
if (v___x_1423_ == 0)
{
uint8_t v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1427_; 
v___x_1424_ = 1;
v___x_1425_ = lean_box(v___x_1424_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 0, v___x_1425_);
v___x_1427_ = v___x_1418_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1425_);
lean_ctor_set(v_reuseFailAlloc_1428_, 1, v_a_1416_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
else
{
uint8_t v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1432_; 
v___x_1429_ = 0;
v___x_1430_ = lean_box(v___x_1429_);
if (v_isShared_1419_ == 0)
{
lean_ctor_set(v___x_1418_, 0, v___x_1430_);
v___x_1432_ = v___x_1418_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1430_);
lean_ctor_set(v_reuseFailAlloc_1433_, 1, v_a_1416_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_checkHashUpToDate___boxed(lean_object* v_00_u03b9_1435_, lean_object* v_inst_1436_, lean_object* v_inst_1437_, lean_object* v_info_1438_, lean_object* v_depTrace_1439_, lean_object* v_depHash_1440_, lean_object* v_oldTrace_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_Lake_checkHashUpToDate(v_00_u03b9_1435_, v_inst_1436_, v_inst_1437_, v_info_1438_, v_depTrace_1439_, v_depHash_1440_, v_oldTrace_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec_ref(v_oldTrace_1441_);
lean_dec_ref(v_depTrace_1439_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(lean_object* v_as_1450_, size_t v_i_1451_, size_t v_stop_1452_, lean_object* v_b_1453_, lean_object* v___y_1454_){
_start:
{
uint8_t v___x_1456_; 
v___x_1456_ = lean_usize_dec_eq(v_i_1451_, v_stop_1452_);
if (v___x_1456_ == 0)
{
lean_object* v_log_1457_; uint8_t v_action_1458_; uint8_t v_wantsRebuild_1459_; lean_object* v_trace_1460_; lean_object* v_buildTime_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1474_; 
v_log_1457_ = lean_ctor_get(v___y_1454_, 0);
v_action_1458_ = lean_ctor_get_uint8(v___y_1454_, sizeof(void*)*3);
v_wantsRebuild_1459_ = lean_ctor_get_uint8(v___y_1454_, sizeof(void*)*3 + 1);
v_trace_1460_ = lean_ctor_get(v___y_1454_, 1);
v_buildTime_1461_ = lean_ctor_get(v___y_1454_, 2);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___y_1454_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1463_ = v___y_1454_;
v_isShared_1464_ = v_isSharedCheck_1474_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_buildTime_1461_);
lean_inc(v_trace_1460_);
lean_inc(v_log_1457_);
lean_dec(v___y_1454_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1474_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1469_; 
v___x_1465_ = lean_array_uget_borrowed(v_as_1450_, v_i_1451_);
v___x_1466_ = lean_box(0);
lean_inc(v___x_1465_);
v___x_1467_ = lean_array_push(v_log_1457_, v___x_1465_);
if (v_isShared_1464_ == 0)
{
lean_ctor_set(v___x_1463_, 0, v___x_1467_);
v___x_1469_ = v___x_1463_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1467_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v_trace_1460_);
lean_ctor_set(v_reuseFailAlloc_1473_, 2, v_buildTime_1461_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*3, v_action_1458_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*3 + 1, v_wantsRebuild_1459_);
v___x_1469_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
size_t v___x_1470_; size_t v___x_1471_; 
v___x_1470_ = ((size_t)1ULL);
v___x_1471_ = lean_usize_add(v_i_1451_, v___x_1470_);
v_i_1451_ = v___x_1471_;
v_b_1453_ = v___x_1466_;
v___y_1454_ = v___x_1469_;
goto _start;
}
}
}
else
{
lean_object* v___x_1475_; 
v___x_1475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1475_, 0, v_b_1453_);
lean_ctor_set(v___x_1475_, 1, v___y_1454_);
return v___x_1475_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg___boxed(lean_object* v_as_1476_, lean_object* v_i_1477_, lean_object* v_stop_1478_, lean_object* v_b_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
size_t v_i_boxed_1482_; size_t v_stop_boxed_1483_; lean_object* v_res_1484_; 
v_i_boxed_1482_ = lean_unbox_usize(v_i_1477_);
lean_dec(v_i_1477_);
v_stop_boxed_1483_ = lean_unbox_usize(v_stop_1478_);
lean_dec(v_stop_1478_);
v_res_1484_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_as_1476_, v_i_boxed_1482_, v_stop_boxed_1483_, v_b_1479_, v___y_1480_);
lean_dec_ref(v_as_1476_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(lean_object* v_log_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; 
v___x_1493_ = lean_unsigned_to_nat(0u);
v___x_1494_ = lean_array_get_size(v_log_1485_);
v___x_1495_ = lean_box(0);
v___x_1496_ = lean_nat_dec_lt(v___x_1493_, v___x_1494_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; 
v___x_1497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1495_);
lean_ctor_set(v___x_1497_, 1, v___y_1491_);
return v___x_1497_;
}
else
{
size_t v___x_1498_; size_t v___x_1499_; lean_object* v___x_1500_; 
v___x_1498_ = ((size_t)0ULL);
v___x_1499_ = lean_usize_of_nat(v___x_1494_);
v___x_1500_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1485_, v___x_1498_, v___x_1499_, v___x_1495_, v___y_1491_);
return v___x_1500_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay___boxed(lean_object* v_log_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
lean_object* v_res_1509_; 
v_res_1509_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec(v___y_1505_);
lean_dec(v___y_1504_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec_ref(v_log_1501_);
return v_res_1509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(lean_object* v_as_1510_, size_t v_i_1511_, size_t v_stop_1512_, lean_object* v_b_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_as_1510_, v_i_1511_, v_stop_1512_, v_b_1513_, v___y_1519_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___boxed(lean_object* v_as_1522_, lean_object* v_i_1523_, lean_object* v_stop_1524_, lean_object* v_b_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
size_t v_i_boxed_1533_; size_t v_stop_boxed_1534_; lean_object* v_res_1535_; 
v_i_boxed_1533_ = lean_unbox_usize(v_i_1523_);
lean_dec(v_i_1523_);
v_stop_boxed_1534_ = lean_unbox_usize(v_stop_1524_);
lean_dec(v_stop_1524_);
v_res_1535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0(v_as_1522_, v_i_boxed_1533_, v_stop_boxed_1534_, v_b_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec(v___y_1528_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec_ref(v_as_1522_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(lean_object* v_inst_1536_, lean_object* v_inst_1537_, lean_object* v_info_1538_, lean_object* v_depTrace_1539_, lean_object* v_savedTrace_1540_, lean_object* v_oldTrace_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
if (lean_obj_tag(v_savedTrace_1540_) == 2)
{
lean_object* v_data_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1600_; 
v_data_1549_ = lean_ctor_get(v_savedTrace_1540_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v_savedTrace_1540_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1551_ = v_savedTrace_1540_;
v_isShared_1552_ = v_isSharedCheck_1600_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_data_1549_);
lean_dec(v_savedTrace_1540_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1600_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
uint64_t v_depHash_1553_; lean_object* v_log_1554_; lean_object* v___x_1555_; lean_object* v___x_1557_; 
v_depHash_1553_ = lean_ctor_get_uint64(v_data_1549_, sizeof(void*)*3);
v_log_1554_ = lean_ctor_get(v_data_1549_, 2);
lean_inc_ref(v_log_1554_);
lean_dec_ref(v_data_1549_);
v___x_1555_ = lean_box_uint64(v_depHash_1553_);
if (v_isShared_1552_ == 0)
{
lean_ctor_set_tag(v___x_1551_, 1);
lean_ctor_set(v___x_1551_, 0, v___x_1555_);
v___x_1557_ = v___x_1551_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v___x_1555_);
v___x_1557_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1558_; lean_object* v_a_1559_; lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1598_; 
v___x_1558_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___redArg(v_inst_1536_, v_inst_1537_, v_info_1538_, v_depTrace_1539_, v___x_1557_, v_oldTrace_1541_, v___y_1546_, v___y_1547_);
v_a_1559_ = lean_ctor_get(v___x_1558_, 0);
v_a_1560_ = lean_ctor_get(v___x_1558_, 1);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1558_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1562_ = v___x_1558_;
v_isShared_1563_ = v_isSharedCheck_1598_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_inc(v_a_1559_);
lean_dec(v___x_1558_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1598_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___y_1565_; uint8_t v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v___x_1569_ = lean_unbox(v_a_1559_);
v___x_1570_ = l_Lake_OutputStatus_ctorIdx(v___x_1569_);
v___x_1571_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_1572_ = lean_nat_dec_eq(v___x_1570_, v___x_1571_);
lean_dec(v___x_1570_);
if (v___x_1572_ == 0)
{
lean_object* v_log_1573_; uint8_t v_action_1574_; uint8_t v_wantsRebuild_1575_; lean_object* v_trace_1576_; lean_object* v_buildTime_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1597_; 
v_log_1573_ = lean_ctor_get(v_a_1560_, 0);
v_action_1574_ = lean_ctor_get_uint8(v_a_1560_, sizeof(void*)*3);
v_wantsRebuild_1575_ = lean_ctor_get_uint8(v_a_1560_, sizeof(void*)*3 + 1);
v_trace_1576_ = lean_ctor_get(v_a_1560_, 1);
v_buildTime_1577_ = lean_ctor_get(v_a_1560_, 2);
v_isSharedCheck_1597_ = !lean_is_exclusive(v_a_1560_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1579_ = v_a_1560_;
v_isShared_1580_ = v_isSharedCheck_1597_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_buildTime_1577_);
lean_inc(v_trace_1576_);
lean_inc(v_log_1573_);
lean_dec(v_a_1560_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1597_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
uint8_t v___x_1581_; uint8_t v___x_1582_; lean_object* v___x_1584_; 
v___x_1581_ = 2;
v___x_1582_ = l_Lake_JobAction_merge(v_action_1574_, v___x_1581_);
if (v_isShared_1580_ == 0)
{
v___x_1584_ = v___x_1579_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_log_1573_);
lean_ctor_set(v_reuseFailAlloc_1596_, 1, v_trace_1576_);
lean_ctor_set(v_reuseFailAlloc_1596_, 2, v_buildTime_1577_);
lean_ctor_set_uint8(v_reuseFailAlloc_1596_, sizeof(void*)*3 + 1, v_wantsRebuild_1575_);
v___x_1584_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
lean_object* v___x_1585_; 
lean_ctor_set_uint8(v___x_1584_, sizeof(void*)*3, v___x_1582_);
v___x_1585_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_1554_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___x_1584_);
lean_dec_ref(v_log_1554_);
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 1);
lean_inc(v_a_1586_);
lean_dec_ref_known(v___x_1585_, 2);
v___y_1565_ = v_a_1586_;
goto v___jp_1564_;
}
else
{
lean_object* v_a_1587_; lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1595_; 
lean_del_object(v___x_1562_);
lean_dec(v_a_1559_);
v_a_1587_ = lean_ctor_get(v___x_1585_, 0);
v_a_1588_ = lean_ctor_get(v___x_1585_, 1);
v_isSharedCheck_1595_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1590_ = v___x_1585_;
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_inc(v_a_1587_);
lean_dec(v___x_1585_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1593_; 
if (v_isShared_1591_ == 0)
{
v___x_1593_ = v___x_1590_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_a_1587_);
lean_ctor_set(v_reuseFailAlloc_1594_, 1, v_a_1588_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_log_1554_);
v___y_1565_ = v_a_1560_;
goto v___jp_1564_;
}
v___jp_1564_:
{
lean_object* v___x_1567_; 
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 1, v___y_1565_);
v___x_1567_ = v___x_1562_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1559_);
lean_ctor_set(v_reuseFailAlloc_1568_, 1, v___y_1565_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
}
}
else
{
lean_object* v_toBuildConfig_1601_; uint8_t v_oldMode_1602_; 
lean_dec(v_savedTrace_1540_);
lean_dec_ref(v_inst_1536_);
v_toBuildConfig_1601_ = lean_ctor_get(v___y_1546_, 0);
v_oldMode_1602_ = lean_ctor_get_uint8(v_toBuildConfig_1601_, sizeof(void*)*4);
if (v_oldMode_1602_ == 0)
{
uint8_t v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; 
lean_dec(v_info_1538_);
lean_dec_ref(v_inst_1537_);
v___x_1603_ = 0;
v___x_1604_ = lean_box(v___x_1603_);
v___x_1605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1604_);
lean_ctor_set(v___x_1605_, 1, v___y_1547_);
return v___x_1605_;
}
else
{
uint8_t v___x_1606_; 
v___x_1606_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1537_, v_info_1538_, v_oldTrace_1541_);
if (v___x_1606_ == 0)
{
uint8_t v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1607_ = 0;
v___x_1608_ = lean_box(v___x_1607_);
v___x_1609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
lean_ctor_set(v___x_1609_, 1, v___y_1547_);
return v___x_1609_;
}
else
{
uint8_t v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1610_ = 1;
v___x_1611_ = lean_box(v___x_1610_);
v___x_1612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1611_);
lean_ctor_set(v___x_1612_, 1, v___y_1547_);
return v___x_1612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___redArg___boxed(lean_object* v_inst_1613_, lean_object* v_inst_1614_, lean_object* v_info_1615_, lean_object* v_depTrace_1616_, lean_object* v_savedTrace_1617_, lean_object* v_oldTrace_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1613_, v_inst_1614_, v_info_1615_, v_depTrace_1616_, v_savedTrace_1617_, v_oldTrace_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec_ref(v_oldTrace_1618_);
lean_dec_ref(v_depTrace_1616_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27(lean_object* v_00_u03b9_1627_, lean_object* v_inst_1628_, lean_object* v_inst_1629_, lean_object* v_info_1630_, lean_object* v_depTrace_1631_, lean_object* v_savedTrace_1632_, lean_object* v_oldTrace_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_){
_start:
{
lean_object* v___x_1641_; 
v___x_1641_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1628_, v_inst_1629_, v_info_1630_, v_depTrace_1631_, v_savedTrace_1632_, v_oldTrace_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___boxed(lean_object* v_00_u03b9_1642_, lean_object* v_inst_1643_, lean_object* v_inst_1644_, lean_object* v_info_1645_, lean_object* v_depTrace_1646_, lean_object* v_savedTrace_1647_, lean_object* v_oldTrace_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l_Lake_SavedTrace_replayIfUpToDate_x27(v_00_u03b9_1642_, v_inst_1643_, v_inst_1644_, v_info_1645_, v_depTrace_1646_, v_savedTrace_1647_, v_oldTrace_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec(v___y_1652_);
lean_dec(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
lean_dec_ref(v_oldTrace_1648_);
lean_dec_ref(v_depTrace_1646_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg(lean_object* v_inst_1657_, lean_object* v_inst_1658_, lean_object* v_info_1659_, lean_object* v_depTrace_1660_, lean_object* v_savedTrace_1661_, lean_object* v_oldTrace_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1657_, v_inst_1658_, v_info_1659_, v_depTrace_1660_, v_savedTrace_1661_, v_oldTrace_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1690_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
v_a_1672_ = lean_ctor_get(v___x_1670_, 1);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1674_ = v___x_1670_;
v_isShared_1675_ = v_isSharedCheck_1690_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_inc(v_a_1671_);
lean_dec(v___x_1670_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1690_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
uint8_t v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; uint8_t v___x_1679_; 
v___x_1676_ = lean_unbox(v_a_1671_);
lean_dec(v_a_1671_);
v___x_1677_ = l_Lake_OutputStatus_ctorIdx(v___x_1676_);
v___x_1678_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_1679_ = lean_nat_dec_eq(v___x_1677_, v___x_1678_);
lean_dec(v___x_1677_);
if (v___x_1679_ == 0)
{
uint8_t v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1683_; 
v___x_1680_ = 1;
v___x_1681_ = lean_box(v___x_1680_);
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 0, v___x_1681_);
v___x_1683_ = v___x_1674_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v___x_1681_);
lean_ctor_set(v_reuseFailAlloc_1684_, 1, v_a_1672_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
else
{
uint8_t v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1688_; 
v___x_1685_ = 0;
v___x_1686_ = lean_box(v___x_1685_);
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 0, v___x_1686_);
v___x_1688_ = v___x_1674_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v___x_1686_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v_a_1672_);
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
else
{
lean_object* v_a_1691_; lean_object* v_a_1692_; lean_object* v___x_1694_; uint8_t v_isShared_1695_; uint8_t v_isSharedCheck_1699_; 
v_a_1691_ = lean_ctor_get(v___x_1670_, 0);
v_a_1692_ = lean_ctor_get(v___x_1670_, 1);
v_isSharedCheck_1699_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1694_ = v___x_1670_;
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
else
{
lean_inc(v_a_1692_);
lean_inc(v_a_1691_);
lean_dec(v___x_1670_);
v___x_1694_ = lean_box(0);
v_isShared_1695_ = v_isSharedCheck_1699_;
goto v_resetjp_1693_;
}
v_resetjp_1693_:
{
lean_object* v___x_1697_; 
if (v_isShared_1695_ == 0)
{
v___x_1697_ = v___x_1694_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_a_1691_);
lean_ctor_set(v_reuseFailAlloc_1698_, 1, v_a_1692_);
v___x_1697_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
return v___x_1697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___redArg___boxed(lean_object* v_inst_1700_, lean_object* v_inst_1701_, lean_object* v_info_1702_, lean_object* v_depTrace_1703_, lean_object* v_savedTrace_1704_, lean_object* v_oldTrace_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lake_SavedTrace_replayIfUpToDate___redArg(v_inst_1700_, v_inst_1701_, v_info_1702_, v_depTrace_1703_, v_savedTrace_1704_, v_oldTrace_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v___y_1709_);
lean_dec(v___y_1708_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec_ref(v_oldTrace_1705_);
lean_dec_ref(v_depTrace_1703_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate(lean_object* v_00_u03b9_1714_, lean_object* v_inst_1715_, lean_object* v_inst_1716_, lean_object* v_info_1717_, lean_object* v_depTrace_1718_, lean_object* v_savedTrace_1719_, lean_object* v_oldTrace_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_){
_start:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_1715_, v_inst_1716_, v_info_1717_, v_depTrace_1718_, v_savedTrace_1719_, v_oldTrace_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v_a_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1748_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
v_a_1730_ = lean_ctor_get(v___x_1728_, 1);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1732_ = v___x_1728_;
v_isShared_1733_ = v_isSharedCheck_1748_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_a_1730_);
lean_inc(v_a_1729_);
lean_dec(v___x_1728_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1748_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
uint8_t v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; uint8_t v___x_1737_; 
v___x_1734_ = lean_unbox(v_a_1729_);
lean_dec(v_a_1729_);
v___x_1735_ = l_Lake_OutputStatus_ctorIdx(v___x_1734_);
v___x_1736_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_1737_ = lean_nat_dec_eq(v___x_1735_, v___x_1736_);
lean_dec(v___x_1735_);
if (v___x_1737_ == 0)
{
uint8_t v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1741_; 
v___x_1738_ = 1;
v___x_1739_ = lean_box(v___x_1738_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 0, v___x_1739_);
v___x_1741_ = v___x_1732_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1739_);
lean_ctor_set(v_reuseFailAlloc_1742_, 1, v_a_1730_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
else
{
uint8_t v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1746_; 
v___x_1743_ = 0;
v___x_1744_ = lean_box(v___x_1743_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 0, v___x_1744_);
v___x_1746_ = v___x_1732_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1744_);
lean_ctor_set(v_reuseFailAlloc_1747_, 1, v_a_1730_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
else
{
lean_object* v_a_1749_; lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
v_a_1749_ = lean_ctor_get(v___x_1728_, 0);
v_a_1750_ = lean_ctor_get(v___x_1728_, 1);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1728_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_inc(v_a_1749_);
lean_dec(v___x_1728_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1749_);
lean_ctor_set(v_reuseFailAlloc_1756_, 1, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate___boxed(lean_object* v_00_u03b9_1758_, lean_object* v_inst_1759_, lean_object* v_inst_1760_, lean_object* v_info_1761_, lean_object* v_depTrace_1762_, lean_object* v_savedTrace_1763_, lean_object* v_oldTrace_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l_Lake_SavedTrace_replayIfUpToDate(v_00_u03b9_1758_, v_inst_1759_, v_inst_1760_, v_info_1761_, v_depTrace_1762_, v_savedTrace_1763_, v_oldTrace_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec(v___y_1768_);
lean_dec(v___y_1767_);
lean_dec(v___y_1766_);
lean_dec_ref(v___y_1765_);
lean_dec_ref(v_oldTrace_1764_);
lean_dec_ref(v_depTrace_1762_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(uint64_t v_inputHash_1773_, lean_object* v_self_1774_, lean_object* v___y_1775_){
_start:
{
lean_object* v___y_1778_; 
if (lean_obj_tag(v_self_1774_) == 2)
{
lean_object* v_data_1796_; uint64_t v_depHash_1797_; lean_object* v_log_1798_; uint8_t v_synthetic_1799_; uint8_t v___x_1800_; lean_object* v___y_1802_; 
v_data_1796_ = lean_ctor_get(v_self_1774_, 0);
v_depHash_1797_ = lean_ctor_get_uint64(v_data_1796_, sizeof(void*)*3);
v_log_1798_ = lean_ctor_get(v_data_1796_, 2);
v_synthetic_1799_ = lean_ctor_get_uint8(v_data_1796_, sizeof(void*)*3 + 8);
v___x_1800_ = lean_uint64_dec_eq(v_depHash_1797_, v_inputHash_1773_);
if (v___x_1800_ == 0)
{
v___y_1778_ = v___y_1775_;
goto v___jp_1777_;
}
else
{
if (v_synthetic_1799_ == 0)
{
goto v___jp_1805_;
}
else
{
lean_object* v___x_1837_; lean_object* v___x_1838_; uint8_t v___x_1839_; 
v___x_1837_ = lean_array_get_size(v_log_1798_);
v___x_1838_ = lean_unsigned_to_nat(0u);
v___x_1839_ = lean_nat_dec_eq(v___x_1837_, v___x_1838_);
if (v___x_1839_ == 0)
{
goto v___jp_1805_;
}
else
{
lean_object* v_log_1840_; uint8_t v_action_1841_; uint8_t v_wantsRebuild_1842_; lean_object* v_trace_1843_; lean_object* v_buildTime_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1853_; 
v_log_1840_ = lean_ctor_get(v___y_1775_, 0);
v_action_1841_ = lean_ctor_get_uint8(v___y_1775_, sizeof(void*)*3);
v_wantsRebuild_1842_ = lean_ctor_get_uint8(v___y_1775_, sizeof(void*)*3 + 1);
v_trace_1843_ = lean_ctor_get(v___y_1775_, 1);
v_buildTime_1844_ = lean_ctor_get(v___y_1775_, 2);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___y_1775_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1846_ = v___y_1775_;
v_isShared_1847_ = v_isSharedCheck_1853_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_buildTime_1844_);
lean_inc(v_trace_1843_);
lean_inc(v_log_1840_);
lean_dec(v___y_1775_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1853_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
uint8_t v___x_1848_; uint8_t v___x_1849_; lean_object* v___x_1851_; 
v___x_1848_ = 1;
v___x_1849_ = l_Lake_JobAction_merge(v_action_1841_, v___x_1848_);
if (v_isShared_1847_ == 0)
{
v___x_1851_ = v___x_1846_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_log_1840_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v_trace_1843_);
lean_ctor_set(v_reuseFailAlloc_1852_, 2, v_buildTime_1844_);
lean_ctor_set_uint8(v_reuseFailAlloc_1852_, sizeof(void*)*3 + 1, v_wantsRebuild_1842_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
lean_ctor_set_uint8(v___x_1851_, sizeof(void*)*3, v___x_1849_);
v___y_1802_ = v___x_1851_;
goto v___jp_1801_;
}
}
}
}
}
v___jp_1801_:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1803_ = lean_box(v___x_1800_);
v___x_1804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
lean_ctor_set(v___x_1804_, 1, v___y_1802_);
return v___x_1804_;
}
v___jp_1805_:
{
lean_object* v_log_1806_; uint8_t v_action_1807_; uint8_t v_wantsRebuild_1808_; lean_object* v_trace_1809_; lean_object* v_buildTime_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1836_; 
v_log_1806_ = lean_ctor_get(v___y_1775_, 0);
v_action_1807_ = lean_ctor_get_uint8(v___y_1775_, sizeof(void*)*3);
v_wantsRebuild_1808_ = lean_ctor_get_uint8(v___y_1775_, sizeof(void*)*3 + 1);
v_trace_1809_ = lean_ctor_get(v___y_1775_, 1);
v_buildTime_1810_ = lean_ctor_get(v___y_1775_, 2);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___y_1775_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1812_ = v___y_1775_;
v_isShared_1813_ = v_isSharedCheck_1836_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_buildTime_1810_);
lean_inc(v_trace_1809_);
lean_inc(v_log_1806_);
lean_dec(v___y_1775_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1836_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
uint8_t v___x_1814_; uint8_t v___x_1815_; lean_object* v___x_1817_; 
v___x_1814_ = 2;
v___x_1815_ = l_Lake_JobAction_merge(v_action_1807_, v___x_1814_);
if (v_isShared_1813_ == 0)
{
v___x_1817_ = v___x_1812_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_log_1806_);
lean_ctor_set(v_reuseFailAlloc_1835_, 1, v_trace_1809_);
lean_ctor_set(v_reuseFailAlloc_1835_, 2, v_buildTime_1810_);
lean_ctor_set_uint8(v_reuseFailAlloc_1835_, sizeof(void*)*3 + 1, v_wantsRebuild_1808_);
v___x_1817_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; uint8_t v___x_1820_; 
lean_ctor_set_uint8(v___x_1817_, sizeof(void*)*3, v___x_1815_);
v___x_1818_ = lean_unsigned_to_nat(0u);
v___x_1819_ = lean_array_get_size(v_log_1798_);
v___x_1820_ = lean_nat_dec_lt(v___x_1818_, v___x_1819_);
if (v___x_1820_ == 0)
{
v___y_1802_ = v___x_1817_;
goto v___jp_1801_;
}
else
{
lean_object* v___x_1821_; size_t v___x_1822_; size_t v___x_1823_; lean_object* v___x_1824_; 
v___x_1821_ = lean_box(0);
v___x_1822_ = ((size_t)0ULL);
v___x_1823_ = lean_usize_of_nat(v___x_1819_);
v___x_1824_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay_spec__0___redArg(v_log_1798_, v___x_1822_, v___x_1823_, v___x_1821_, v___x_1817_);
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; 
v_a_1825_ = lean_ctor_get(v___x_1824_, 1);
lean_inc(v_a_1825_);
lean_dec_ref_known(v___x_1824_, 2);
v___y_1802_ = v_a_1825_;
goto v___jp_1801_;
}
else
{
lean_object* v_a_1826_; lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
v_a_1826_ = lean_ctor_get(v___x_1824_, 0);
v_a_1827_ = lean_ctor_get(v___x_1824_, 1);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1829_ = v___x_1824_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_inc(v_a_1826_);
lean_dec(v___x_1824_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v_a_1826_);
lean_ctor_set(v_reuseFailAlloc_1833_, 1, v_a_1827_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
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
v___y_1778_ = v___y_1775_;
goto v___jp_1777_;
}
v___jp_1777_:
{
lean_object* v_log_1779_; uint8_t v_action_1780_; uint8_t v_wantsRebuild_1781_; lean_object* v_trace_1782_; lean_object* v_buildTime_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1795_; 
v_log_1779_ = lean_ctor_get(v___y_1778_, 0);
v_action_1780_ = lean_ctor_get_uint8(v___y_1778_, sizeof(void*)*3);
v_wantsRebuild_1781_ = lean_ctor_get_uint8(v___y_1778_, sizeof(void*)*3 + 1);
v_trace_1782_ = lean_ctor_get(v___y_1778_, 1);
v_buildTime_1783_ = lean_ctor_get(v___y_1778_, 2);
v_isSharedCheck_1795_ = !lean_is_exclusive(v___y_1778_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1785_ = v___y_1778_;
v_isShared_1786_ = v_isSharedCheck_1795_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_buildTime_1783_);
lean_inc(v_trace_1782_);
lean_inc(v_log_1779_);
lean_dec(v___y_1778_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1795_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
uint8_t v___x_1787_; uint8_t v___x_1788_; lean_object* v___x_1790_; 
v___x_1787_ = 1;
v___x_1788_ = l_Lake_JobAction_merge(v_action_1780_, v___x_1787_);
if (v_isShared_1786_ == 0)
{
v___x_1790_ = v___x_1785_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_log_1779_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v_trace_1782_);
lean_ctor_set(v_reuseFailAlloc_1794_, 2, v_buildTime_1783_);
lean_ctor_set_uint8(v_reuseFailAlloc_1794_, sizeof(void*)*3 + 1, v_wantsRebuild_1781_);
v___x_1790_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
uint8_t v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
lean_ctor_set_uint8(v___x_1790_, sizeof(void*)*3, v___x_1788_);
v___x_1791_ = 0;
v___x_1792_ = lean_box(v___x_1791_);
v___x_1793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1792_);
lean_ctor_set(v___x_1793_, 1, v___x_1790_);
return v___x_1793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___redArg___boxed(lean_object* v_inputHash_1854_, lean_object* v_self_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_){
_start:
{
uint64_t v_inputHash_boxed_1858_; lean_object* v_res_1859_; 
v_inputHash_boxed_1858_ = lean_unbox_uint64(v_inputHash_1854_);
lean_dec_ref(v_inputHash_1854_);
v_res_1859_ = l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(v_inputHash_boxed_1858_, v_self_1855_, v___y_1856_);
lean_dec(v_self_1855_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate(uint64_t v_inputHash_1860_, lean_object* v_self_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v___x_1869_; 
v___x_1869_ = l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(v_inputHash_1860_, v_self_1861_, v___y_1867_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayCachedIfUpToDate___boxed(lean_object* v_inputHash_1870_, lean_object* v_self_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
uint64_t v_inputHash_boxed_1879_; lean_object* v_res_1880_; 
v_inputHash_boxed_1879_ = lean_unbox_uint64(v_inputHash_1870_);
lean_dec_ref(v_inputHash_1870_);
v_res_1880_ = l_Lake_SavedTrace_replayCachedIfUpToDate(v_inputHash_boxed_1879_, v_self_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v_self_1871_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(uint64_t v_inputHash_1881_, lean_object* v_self_1882_, lean_object* v___y_1883_){
_start:
{
lean_object* v___x_1885_; 
v___x_1885_ = l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(v_inputHash_1881_, v_self_1882_, v___y_1883_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg___boxed(lean_object* v_inputHash_1886_, lean_object* v_self_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
uint64_t v_inputHash_boxed_1890_; lean_object* v_res_1891_; 
v_inputHash_boxed_1890_ = lean_unbox_uint64(v_inputHash_1886_);
lean_dec_ref(v_inputHash_1886_);
v_res_1891_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate___redArg(v_inputHash_boxed_1890_, v_self_1887_, v___y_1888_);
lean_dec(v_self_1887_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate(uint64_t v_inputHash_1892_, lean_object* v_self_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v___x_1901_; 
v___x_1901_ = l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(v_inputHash_1892_, v_self_1893_, v___y_1899_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayOrFetchIfUpToDate___boxed(lean_object* v_inputHash_1902_, lean_object* v_self_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
uint64_t v_inputHash_boxed_1911_; lean_object* v_res_1912_; 
v_inputHash_boxed_1911_ = lean_unbox_uint64(v_inputHash_1902_);
lean_dec_ref(v_inputHash_1902_);
v_res_1912_ = l_Lake_SavedTrace_replayOrFetchIfUpToDate(v_inputHash_boxed_1911_, v_self_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec(v___y_1905_);
lean_dec_ref(v___y_1904_);
lean_dec(v_self_1903_);
return v_res_1912_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonPUnit___lam__0(lean_object* v_x_1913_){
_start:
{
lean_object* v___x_1914_; 
v___x_1914_ = lean_box(0);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0(lean_object* v_x_1918_){
_start:
{
lean_object* v_descr_1919_; uint64_t v_hash_1920_; lean_object* v_ext_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; uint8_t v___x_1924_; 
v_descr_1919_ = lean_ctor_get(v_x_1918_, 0);
v_hash_1920_ = lean_ctor_get_uint64(v_descr_1919_, sizeof(void*)*1);
v_ext_1921_ = lean_ctor_get(v_descr_1919_, 0);
v___x_1922_ = lean_string_utf8_byte_size(v_ext_1921_);
v___x_1923_ = lean_unsigned_to_nat(0u);
v___x_1924_ = lean_nat_dec_eq(v___x_1922_, v___x_1923_);
if (v___x_1924_ == 0)
{
lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1925_ = l_Lake_lowerHexUInt64(v_hash_1920_);
v___x_1926_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_1927_ = lean_string_append(v___x_1925_, v___x_1926_);
v___x_1928_ = lean_string_append(v___x_1927_, v_ext_1921_);
v___x_1929_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1928_);
return v___x_1929_;
}
else
{
lean_object* v___x_1930_; lean_object* v___x_1931_; 
v___x_1930_ = l_Lake_lowerHexUInt64(v_hash_1920_);
v___x_1931_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
return v___x_1931_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToOutputJsonArtifact___lam__0___boxed(lean_object* v_x_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l_Lake_instToOutputJsonArtifact___lam__0(v_x_1932_);
lean_dec_ref(v_x_1932_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0(lean_object* v_val_1936_, lean_object* v_a_x3f_1937_, lean_object* v___y_1938_){
_start:
{
lean_object* v_log_1940_; uint8_t v_action_1941_; uint8_t v_wantsRebuild_1942_; lean_object* v_trace_1943_; lean_object* v_buildTime_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1956_; 
v_log_1940_ = lean_ctor_get(v___y_1938_, 0);
v_action_1941_ = lean_ctor_get_uint8(v___y_1938_, sizeof(void*)*3);
v_wantsRebuild_1942_ = lean_ctor_get_uint8(v___y_1938_, sizeof(void*)*3 + 1);
v_trace_1943_ = lean_ctor_get(v___y_1938_, 1);
v_buildTime_1944_ = lean_ctor_get(v___y_1938_, 2);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___y_1938_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1946_ = v___y_1938_;
v_isShared_1947_ = v_isSharedCheck_1956_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_buildTime_1944_);
lean_inc(v_trace_1943_);
lean_inc(v_log_1940_);
lean_dec(v___y_1938_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1956_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1953_; 
v___x_1948_ = lean_io_mono_ms_now();
v___x_1949_ = lean_nat_sub(v___x_1948_, v_val_1936_);
lean_dec(v___x_1948_);
v___x_1950_ = lean_box(0);
v___x_1951_ = lean_nat_add(v_buildTime_1944_, v___x_1949_);
lean_dec(v___x_1949_);
lean_dec(v_buildTime_1944_);
if (v_isShared_1947_ == 0)
{
lean_ctor_set(v___x_1946_, 2, v___x_1951_);
v___x_1953_ = v___x_1946_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_log_1940_);
lean_ctor_set(v_reuseFailAlloc_1955_, 1, v_trace_1943_);
lean_ctor_set(v_reuseFailAlloc_1955_, 2, v___x_1951_);
lean_ctor_set_uint8(v_reuseFailAlloc_1955_, sizeof(void*)*3, v_action_1941_);
lean_ctor_set_uint8(v_reuseFailAlloc_1955_, sizeof(void*)*3 + 1, v_wantsRebuild_1942_);
v___x_1953_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
lean_object* v___x_1954_; 
v___x_1954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1950_);
lean_ctor_set(v___x_1954_, 1, v___x_1953_);
return v___x_1954_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___lam__0___boxed(lean_object* v_val_1957_, lean_object* v_a_x3f_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l_Lake_buildAction___redArg___lam__0(v_val_1957_, v_a_x3f_1958_, v___y_1959_);
lean_dec(v_a_x3f_1958_);
lean_dec(v_val_1957_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg(lean_object* v_inst_1967_, lean_object* v_depTrace_1968_, lean_object* v_traceFile_1969_, lean_object* v_build_1970_, uint8_t v_action_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_){
_start:
{
lean_object* v_a_1980_; lean_object* v_a_1981_; lean_object* v_log_1984_; uint8_t v_action_1985_; uint8_t v_wantsRebuild_1986_; lean_object* v_trace_1987_; lean_object* v_buildTime_1988_; lean_object* v_toBuildConfig_1994_; lean_object* v_log_1995_; uint8_t v_action_1996_; uint8_t v_wantsRebuild_1997_; lean_object* v_trace_1998_; lean_object* v_buildTime_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2105_; 
v_toBuildConfig_1994_ = lean_ctor_get(v___y_1976_, 0);
v_log_1995_ = lean_ctor_get(v___y_1977_, 0);
v_action_1996_ = lean_ctor_get_uint8(v___y_1977_, sizeof(void*)*3);
v_wantsRebuild_1997_ = lean_ctor_get_uint8(v___y_1977_, sizeof(void*)*3 + 1);
v_trace_1998_ = lean_ctor_get(v___y_1977_, 1);
v_buildTime_1999_ = lean_ctor_get(v___y_1977_, 2);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___y_1977_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2001_ = v___y_1977_;
v_isShared_2002_ = v_isSharedCheck_2105_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_buildTime_1999_);
lean_inc(v_trace_1998_);
lean_inc(v_log_1995_);
lean_dec(v___y_1977_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2105_;
goto v_resetjp_2000_;
}
v___jp_1979_:
{
lean_object* v___x_1982_; 
v___x_1982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1982_, 0, v_a_1980_);
lean_ctor_set(v___x_1982_, 1, v_a_1981_);
return v___x_1982_;
}
v___jp_1983_:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1989_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__1));
v___x_1990_ = lean_array_get_size(v_log_1984_);
v___x_1991_ = lean_array_push(v_log_1984_, v___x_1989_);
v___x_1992_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1992_, 0, v___x_1991_);
lean_ctor_set(v___x_1992_, 1, v_trace_1987_);
lean_ctor_set(v___x_1992_, 2, v_buildTime_1988_);
lean_ctor_set_uint8(v___x_1992_, sizeof(void*)*3, v_action_1985_);
lean_ctor_set_uint8(v___x_1992_, sizeof(void*)*3 + 1, v_wantsRebuild_1986_);
v___x_1993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1990_);
lean_ctor_set(v___x_1993_, 1, v___x_1992_);
return v___x_1993_;
}
v_resetjp_2000_:
{
uint8_t v_noBuild_2003_; uint8_t v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; 
v_noBuild_2003_ = lean_ctor_get_uint8(v_toBuildConfig_1994_, sizeof(void*)*4 + 2);
v___x_2004_ = l_Lake_JobAction_merge(v_action_1996_, v_action_1971_);
v___x_2005_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__2));
lean_inc_ref(v_traceFile_1969_);
v___x_2006_ = l_System_FilePath_addExtension(v_traceFile_1969_, v___x_2005_);
if (v_noBuild_2003_ == 0)
{
lean_object* v___x_2007_; lean_object* v_a_2009_; lean_object* v_a_2010_; lean_object* v___x_2015_; 
v___x_2007_ = lean_io_mono_ms_now();
lean_inc_ref(v_log_1995_);
if (v_isShared_2002_ == 0)
{
v___x_2015_ = v___x_2001_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_log_1995_);
lean_ctor_set(v_reuseFailAlloc_2089_, 1, v_trace_1998_);
lean_ctor_set(v_reuseFailAlloc_2089_, 2, v_buildTime_1999_);
lean_ctor_set_uint8(v_reuseFailAlloc_2089_, sizeof(void*)*3 + 1, v_wantsRebuild_1997_);
v___x_2015_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2014_;
}
v___jp_2008_:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v_a_2013_; 
v___x_2011_ = lean_box(0);
v___x_2012_ = l_Lake_buildAction___redArg___lam__0(v___x_2007_, v___x_2011_, v_a_2010_);
lean_dec(v___x_2007_);
v_a_2013_ = lean_ctor_get(v___x_2012_, 1);
lean_inc(v_a_2013_);
lean_dec_ref(v___x_2012_);
v_a_1980_ = v_a_2009_;
v_a_1981_ = v_a_2013_;
goto v___jp_1979_;
}
v_reusejp_2014_:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
lean_ctor_set_uint8(v___x_2015_, sizeof(void*)*3, v___x_2004_);
v___x_2016_ = lean_array_get_size(v_log_1995_);
lean_dec_ref(v_log_1995_);
lean_inc_ref(v___y_1976_);
lean_inc(v___y_1975_);
lean_inc(v___y_1974_);
lean_inc(v___y_1973_);
v___x_2017_ = lean_apply_7(v_build_1970_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___x_2015_, lean_box(0));
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_object* v_a_2018_; lean_object* v_a_2019_; lean_object* v_log_2020_; uint8_t v_action_2021_; uint8_t v_wantsRebuild_2022_; lean_object* v_trace_2023_; lean_object* v_buildTime_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v_a_2018_ = lean_ctor_get(v___x_2017_, 1);
lean_inc(v_a_2018_);
v_a_2019_ = lean_ctor_get(v___x_2017_, 0);
lean_inc_n(v_a_2019_, 2);
lean_dec_ref_known(v___x_2017_, 2);
v_log_2020_ = lean_ctor_get(v_a_2018_, 0);
v_action_2021_ = lean_ctor_get_uint8(v_a_2018_, sizeof(void*)*3);
v_wantsRebuild_2022_ = lean_ctor_get_uint8(v_a_2018_, sizeof(void*)*3 + 1);
v_trace_2023_ = lean_ctor_get(v_a_2018_, 1);
v_buildTime_2024_ = lean_ctor_get(v_a_2018_, 2);
v___x_2025_ = lean_array_get_size(v_log_2020_);
v___x_2026_ = l_Array_extract___redArg(v_log_2020_, v___x_2016_, v___x_2025_);
v___x_2027_ = lean_apply_1(v_inst_1967_, v_a_2019_);
v___x_2028_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1968_, v___x_2027_, v___x_2026_);
v___x_2029_ = l_Lake_BuildMetadata_writeFile(v_traceFile_1969_, v___x_2028_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2070_; 
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2070_ == 0)
{
lean_object* v_unused_2071_; 
v_unused_2071_ = lean_ctor_get(v___x_2029_, 0);
lean_dec(v_unused_2071_);
v___x_2031_ = v___x_2029_;
v_isShared_2032_ = v_isSharedCheck_2070_;
goto v_resetjp_2030_;
}
else
{
lean_dec(v___x_2029_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2070_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2033_; 
v___x_2033_ = l_Lake_removeFileIfExists(v___x_2006_);
lean_dec_ref(v___x_2006_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2053_; 
v_isSharedCheck_2053_ = !lean_is_exclusive(v___x_2033_);
if (v_isSharedCheck_2053_ == 0)
{
lean_object* v_unused_2054_; 
v_unused_2054_ = lean_ctor_get(v___x_2033_, 0);
lean_dec(v_unused_2054_);
v___x_2035_ = v___x_2033_;
v_isShared_2036_ = v_isSharedCheck_2053_;
goto v_resetjp_2034_;
}
else
{
lean_dec(v___x_2033_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2053_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
lean_inc(v_a_2019_);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 0, v_a_2019_);
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_a_2019_);
v___x_2038_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
lean_object* v___x_2040_; 
if (v_isShared_2032_ == 0)
{
lean_ctor_set_tag(v___x_2031_, 1);
lean_ctor_set(v___x_2031_, 0, v___x_2038_);
v___x_2040_ = v___x_2031_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2038_);
v___x_2040_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
lean_object* v___x_2041_; lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2049_; 
v___x_2041_ = l_Lake_buildAction___redArg___lam__0(v___x_2007_, v___x_2040_, v_a_2018_);
lean_dec_ref(v___x_2040_);
lean_dec(v___x_2007_);
v_a_2042_ = lean_ctor_get(v___x_2041_, 1);
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2049_ == 0)
{
lean_object* v_unused_2050_; 
v_unused_2050_ = lean_ctor_get(v___x_2041_, 0);
lean_dec(v_unused_2050_);
v___x_2044_ = v___x_2041_;
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_dec(v___x_2041_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2047_; 
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 0, v_a_2019_);
v___x_2047_ = v___x_2044_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v_a_2019_);
lean_ctor_set(v_reuseFailAlloc_2048_, 1, v_a_2042_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
}
}
}
else
{
lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2066_; 
lean_inc(v_buildTime_2024_);
lean_inc_ref(v_trace_2023_);
lean_inc_ref(v_log_2020_);
lean_del_object(v___x_2031_);
lean_dec(v_a_2019_);
v_isSharedCheck_2066_ = !lean_is_exclusive(v_a_2018_);
if (v_isSharedCheck_2066_ == 0)
{
lean_object* v_unused_2067_; lean_object* v_unused_2068_; lean_object* v_unused_2069_; 
v_unused_2067_ = lean_ctor_get(v_a_2018_, 2);
lean_dec(v_unused_2067_);
v_unused_2068_ = lean_ctor_get(v_a_2018_, 1);
lean_dec(v_unused_2068_);
v_unused_2069_ = lean_ctor_get(v_a_2018_, 0);
lean_dec(v_unused_2069_);
v___x_2056_ = v_a_2018_;
v_isShared_2057_ = v_isSharedCheck_2066_;
goto v_resetjp_2055_;
}
else
{
lean_dec(v_a_2018_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2066_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v_a_2058_; lean_object* v___x_2059_; uint8_t v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2064_; 
v_a_2058_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2058_);
lean_dec_ref_known(v___x_2033_, 1);
v___x_2059_ = lean_io_error_to_string(v_a_2058_);
v___x_2060_ = 3;
v___x_2061_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2061_, 0, v___x_2059_);
lean_ctor_set_uint8(v___x_2061_, sizeof(void*)*1, v___x_2060_);
v___x_2062_ = lean_array_push(v_log_2020_, v___x_2061_);
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 0, v___x_2062_);
v___x_2064_ = v___x_2056_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v___x_2062_);
lean_ctor_set(v_reuseFailAlloc_2065_, 1, v_trace_2023_);
lean_ctor_set(v_reuseFailAlloc_2065_, 2, v_buildTime_2024_);
lean_ctor_set_uint8(v_reuseFailAlloc_2065_, sizeof(void*)*3, v_action_2021_);
lean_ctor_set_uint8(v_reuseFailAlloc_2065_, sizeof(void*)*3 + 1, v_wantsRebuild_2022_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
v_a_2009_ = v___x_2025_;
v_a_2010_ = v___x_2064_;
goto v___jp_2008_;
}
}
}
}
}
else
{
lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2083_; 
lean_inc(v_buildTime_2024_);
lean_inc_ref(v_trace_2023_);
lean_inc_ref(v_log_2020_);
lean_dec(v_a_2019_);
lean_dec_ref(v___x_2006_);
v_isSharedCheck_2083_ = !lean_is_exclusive(v_a_2018_);
if (v_isSharedCheck_2083_ == 0)
{
lean_object* v_unused_2084_; lean_object* v_unused_2085_; lean_object* v_unused_2086_; 
v_unused_2084_ = lean_ctor_get(v_a_2018_, 2);
lean_dec(v_unused_2084_);
v_unused_2085_ = lean_ctor_get(v_a_2018_, 1);
lean_dec(v_unused_2085_);
v_unused_2086_ = lean_ctor_get(v_a_2018_, 0);
lean_dec(v_unused_2086_);
v___x_2073_ = v_a_2018_;
v_isShared_2074_ = v_isSharedCheck_2083_;
goto v_resetjp_2072_;
}
else
{
lean_dec(v_a_2018_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2083_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v_a_2075_; lean_object* v___x_2076_; uint8_t v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2081_; 
v_a_2075_ = lean_ctor_get(v___x_2029_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2029_, 1);
v___x_2076_ = lean_io_error_to_string(v_a_2075_);
v___x_2077_ = 3;
v___x_2078_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2078_, 0, v___x_2076_);
lean_ctor_set_uint8(v___x_2078_, sizeof(void*)*1, v___x_2077_);
v___x_2079_ = lean_array_push(v_log_2020_, v___x_2078_);
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 0, v___x_2079_);
v___x_2081_ = v___x_2073_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v___x_2079_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v_trace_2023_);
lean_ctor_set(v_reuseFailAlloc_2082_, 2, v_buildTime_2024_);
lean_ctor_set_uint8(v_reuseFailAlloc_2082_, sizeof(void*)*3, v_action_2021_);
lean_ctor_set_uint8(v_reuseFailAlloc_2082_, sizeof(void*)*3 + 1, v_wantsRebuild_2022_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
v_a_2009_ = v___x_2025_;
v_a_2010_ = v___x_2081_;
goto v___jp_2008_;
}
}
}
}
else
{
lean_object* v_a_2087_; lean_object* v_a_2088_; 
lean_dec_ref(v___x_2006_);
lean_dec_ref(v_traceFile_1969_);
lean_dec_ref(v_inst_1967_);
v_a_2087_ = lean_ctor_get(v___x_2017_, 0);
lean_inc(v_a_2087_);
v_a_2088_ = lean_ctor_get(v___x_2017_, 1);
lean_inc(v_a_2088_);
lean_dec_ref_known(v___x_2017_, 2);
v_a_2009_ = v_a_2087_;
v_a_2010_ = v_a_2088_;
goto v___jp_2008_;
}
}
}
else
{
uint8_t v___x_2090_; 
lean_dec_ref(v___y_1972_);
lean_dec_ref(v_build_1970_);
lean_dec_ref(v_inst_1967_);
v___x_2090_ = l_System_FilePath_pathExists(v_traceFile_1969_);
lean_dec_ref(v_traceFile_1969_);
if (v___x_2090_ == 0)
{
lean_dec_ref(v___x_2006_);
lean_del_object(v___x_2001_);
v_log_1984_ = v_log_1995_;
v_action_1985_ = v___x_2004_;
v_wantsRebuild_1986_ = v_noBuild_2003_;
v_trace_1987_ = v_trace_1998_;
v_buildTime_1988_ = v_buildTime_1999_;
goto v___jp_1983_;
}
else
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2091_ = lean_box(0);
v___x_2092_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___x_2093_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1968_, v___x_2091_, v___x_2092_);
v___x_2094_ = l_Lake_BuildMetadata_writeFile(v___x_2006_, v___x_2093_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_dec_ref_known(v___x_2094_, 1);
lean_del_object(v___x_2001_);
v_log_1984_ = v_log_1995_;
v_action_1985_ = v___x_2004_;
v_wantsRebuild_1986_ = v_noBuild_2003_;
v_trace_1987_ = v_trace_1998_;
v_buildTime_1988_ = v_buildTime_1999_;
goto v___jp_1983_;
}
else
{
lean_object* v_a_2095_; lean_object* v___x_2096_; uint8_t v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2102_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
lean_inc(v_a_2095_);
lean_dec_ref_known(v___x_2094_, 1);
v___x_2096_ = lean_io_error_to_string(v_a_2095_);
v___x_2097_ = 3;
v___x_2098_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2098_, 0, v___x_2096_);
lean_ctor_set_uint8(v___x_2098_, sizeof(void*)*1, v___x_2097_);
v___x_2099_ = lean_array_get_size(v_log_1995_);
v___x_2100_ = lean_array_push(v_log_1995_, v___x_2098_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v___x_2100_);
v___x_2102_ = v___x_2001_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v___x_2100_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v_trace_1998_);
lean_ctor_set(v_reuseFailAlloc_2104_, 2, v_buildTime_1999_);
v___x_2102_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
lean_object* v___x_2103_; 
lean_ctor_set_uint8(v___x_2102_, sizeof(void*)*3, v___x_2004_);
lean_ctor_set_uint8(v___x_2102_, sizeof(void*)*3 + 1, v_noBuild_2003_);
v___x_2103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2099_);
lean_ctor_set(v___x_2103_, 1, v___x_2102_);
return v___x_2103_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___redArg___boxed(lean_object* v_inst_2106_, lean_object* v_depTrace_2107_, lean_object* v_traceFile_2108_, lean_object* v_build_2109_, lean_object* v_action_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
uint8_t v_action_boxed_2118_; lean_object* v_res_2119_; 
v_action_boxed_2118_ = lean_unbox(v_action_2110_);
v_res_2119_ = l_Lake_buildAction___redArg(v_inst_2106_, v_depTrace_2107_, v_traceFile_2108_, v_build_2109_, v_action_boxed_2118_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_);
lean_dec_ref(v___y_2115_);
lean_dec(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec(v___y_2112_);
lean_dec_ref(v_depTrace_2107_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction(lean_object* v_00_u03b1_2120_, lean_object* v_inst_2121_, lean_object* v_depTrace_2122_, lean_object* v_traceFile_2123_, lean_object* v_build_2124_, uint8_t v_action_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v___x_2133_; 
v___x_2133_ = l_Lake_buildAction___redArg(v_inst_2121_, v_depTrace_2122_, v_traceFile_2123_, v_build_2124_, v_action_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_);
return v___x_2133_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___boxed(lean_object* v_00_u03b1_2134_, lean_object* v_inst_2135_, lean_object* v_depTrace_2136_, lean_object* v_traceFile_2137_, lean_object* v_build_2138_, lean_object* v_action_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_){
_start:
{
uint8_t v_action_boxed_2147_; lean_object* v_res_2148_; 
v_action_boxed_2147_ = lean_unbox(v_action_2139_);
v_res_2148_ = l_Lake_buildAction(v_00_u03b1_2134_, v_inst_2135_, v_depTrace_2136_, v_traceFile_2137_, v_build_2138_, v_action_boxed_2147_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_);
lean_dec_ref(v___y_2144_);
lean_dec(v___y_2143_);
lean_dec(v___y_2142_);
lean_dec(v___y_2141_);
lean_dec_ref(v_depTrace_2136_);
return v_res_2148_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg(lean_object* v_inst_2149_, lean_object* v_inst_2150_, lean_object* v_info_2151_, lean_object* v_depTrace_2152_, lean_object* v_traceFile_2153_, lean_object* v_build_2154_, uint8_t v_action_2155_, lean_object* v_oldTrace_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_){
_start:
{
lean_object* v_log_2164_; uint8_t v_action_2165_; uint8_t v_wantsRebuild_2166_; lean_object* v_trace_2167_; lean_object* v_buildTime_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2237_; 
v_log_2164_ = lean_ctor_get(v___y_2162_, 0);
v_action_2165_ = lean_ctor_get_uint8(v___y_2162_, sizeof(void*)*3);
v_wantsRebuild_2166_ = lean_ctor_get_uint8(v___y_2162_, sizeof(void*)*3 + 1);
v_trace_2167_ = lean_ctor_get(v___y_2162_, 1);
v_buildTime_2168_ = lean_ctor_get(v___y_2162_, 2);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___y_2162_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2170_ = v___y_2162_;
v_isShared_2171_ = v_isSharedCheck_2237_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_buildTime_2168_);
lean_inc(v_trace_2167_);
lean_inc(v_log_2164_);
lean_dec(v___y_2162_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2237_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___f_2172_; lean_object* v___x_2173_; 
v___f_2172_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
lean_inc_ref(v_traceFile_2153_);
v___x_2173_ = l_Lake_readTraceFile(v_traceFile_2153_, v_log_2164_);
if (lean_obj_tag(v___x_2173_) == 0)
{
lean_object* v_a_2174_; lean_object* v_a_2175_; lean_object* v___x_2177_; 
v_a_2174_ = lean_ctor_get(v___x_2173_, 0);
lean_inc(v_a_2174_);
v_a_2175_ = lean_ctor_get(v___x_2173_, 1);
lean_inc(v_a_2175_);
lean_dec_ref_known(v___x_2173_, 2);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 0, v_a_2175_);
v___x_2177_ = v___x_2170_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_a_2175_);
lean_ctor_set(v_reuseFailAlloc_2224_, 1, v_trace_2167_);
lean_ctor_set(v_reuseFailAlloc_2224_, 2, v_buildTime_2168_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*3, v_action_2165_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*3 + 1, v_wantsRebuild_2166_);
v___x_2177_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
lean_object* v___x_2178_; 
v___x_2178_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2149_, v_inst_2150_, v_info_2151_, v_depTrace_2152_, v_a_2174_, v_oldTrace_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___x_2177_);
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_object* v_a_2179_; lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2214_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
v_a_2180_ = lean_ctor_get(v___x_2178_, 1);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2182_ = v___x_2178_;
v_isShared_2183_ = v_isSharedCheck_2214_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_inc(v_a_2179_);
lean_dec(v___x_2178_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2214_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
uint8_t v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; uint8_t v___x_2187_; 
v___x_2184_ = lean_unbox(v_a_2179_);
lean_dec(v_a_2179_);
v___x_2185_ = l_Lake_OutputStatus_ctorIdx(v___x_2184_);
v___x_2186_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_2187_ = lean_nat_dec_eq(v___x_2185_, v___x_2186_);
lean_dec(v___x_2185_);
if (v___x_2187_ == 0)
{
uint8_t v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2191_; 
lean_dec_ref(v___y_2157_);
lean_dec_ref(v_build_2154_);
lean_dec_ref(v_traceFile_2153_);
v___x_2188_ = 1;
v___x_2189_ = lean_box(v___x_2188_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 0, v___x_2189_);
v___x_2191_ = v___x_2182_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v___x_2189_);
lean_ctor_set(v_reuseFailAlloc_2192_, 1, v_a_2180_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
else
{
uint8_t v___x_2193_; lean_object* v___x_2194_; 
lean_del_object(v___x_2182_);
v___x_2193_ = 0;
v___x_2194_ = l_Lake_buildAction___redArg(v___f_2172_, v_depTrace_2152_, v_traceFile_2153_, v_build_2154_, v_action_2155_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v_a_2180_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2203_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 1);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2203_ == 0)
{
lean_object* v_unused_2204_; 
v_unused_2204_ = lean_ctor_get(v___x_2194_, 0);
lean_dec(v_unused_2204_);
v___x_2197_ = v___x_2194_;
v_isShared_2198_ = v_isSharedCheck_2203_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2194_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2203_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2199_; lean_object* v___x_2201_; 
v___x_2199_ = lean_box(v___x_2193_);
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 0, v___x_2199_);
v___x_2201_ = v___x_2197_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v___x_2199_);
lean_ctor_set(v_reuseFailAlloc_2202_, 1, v_a_2195_);
v___x_2201_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
return v___x_2201_;
}
}
}
else
{
lean_object* v_a_2205_; lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
v_a_2205_ = lean_ctor_get(v___x_2194_, 0);
v_a_2206_ = lean_ctor_get(v___x_2194_, 1);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2194_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_inc(v_a_2205_);
lean_dec(v___x_2194_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2205_);
lean_ctor_set(v_reuseFailAlloc_2212_, 1, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
}
}
}
else
{
lean_object* v_a_2215_; lean_object* v_a_2216_; lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2223_; 
lean_dec_ref(v___y_2157_);
lean_dec_ref(v_build_2154_);
lean_dec_ref(v_traceFile_2153_);
v_a_2215_ = lean_ctor_get(v___x_2178_, 0);
v_a_2216_ = lean_ctor_get(v___x_2178_, 1);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2218_ = v___x_2178_;
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
else
{
lean_inc(v_a_2216_);
lean_inc(v_a_2215_);
lean_dec(v___x_2178_);
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
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2215_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v_a_2216_);
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
else
{
lean_object* v_a_2225_; lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2236_; 
lean_dec_ref(v___y_2157_);
lean_dec_ref(v_build_2154_);
lean_dec_ref(v_traceFile_2153_);
lean_dec(v_info_2151_);
lean_dec_ref(v_inst_2150_);
lean_dec_ref(v_inst_2149_);
v_a_2225_ = lean_ctor_get(v___x_2173_, 0);
v_a_2226_ = lean_ctor_get(v___x_2173_, 1);
v_isSharedCheck_2236_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2228_ = v___x_2173_;
v_isShared_2229_ = v_isSharedCheck_2236_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_inc(v_a_2225_);
lean_dec(v___x_2173_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2236_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 0, v_a_2226_);
v___x_2231_ = v___x_2170_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v_a_2226_);
lean_ctor_set(v_reuseFailAlloc_2235_, 1, v_trace_2167_);
lean_ctor_set(v_reuseFailAlloc_2235_, 2, v_buildTime_2168_);
lean_ctor_set_uint8(v_reuseFailAlloc_2235_, sizeof(void*)*3, v_action_2165_);
lean_ctor_set_uint8(v_reuseFailAlloc_2235_, sizeof(void*)*3 + 1, v_wantsRebuild_2166_);
v___x_2231_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
lean_object* v___x_2233_; 
if (v_isShared_2229_ == 0)
{
lean_ctor_set(v___x_2228_, 1, v___x_2231_);
v___x_2233_ = v___x_2228_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_a_2225_);
lean_ctor_set(v_reuseFailAlloc_2234_, 1, v___x_2231_);
v___x_2233_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
return v___x_2233_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___redArg___boxed(lean_object* v_inst_2238_, lean_object* v_inst_2239_, lean_object* v_info_2240_, lean_object* v_depTrace_2241_, lean_object* v_traceFile_2242_, lean_object* v_build_2243_, lean_object* v_action_2244_, lean_object* v_oldTrace_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_){
_start:
{
uint8_t v_action_boxed_2253_; lean_object* v_res_2254_; 
v_action_boxed_2253_ = lean_unbox(v_action_2244_);
v_res_2254_ = l_Lake_buildUnlessUpToDate_x3f___redArg(v_inst_2238_, v_inst_2239_, v_info_2240_, v_depTrace_2241_, v_traceFile_2242_, v_build_2243_, v_action_boxed_2253_, v_oldTrace_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
lean_dec_ref(v___y_2250_);
lean_dec(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec(v___y_2247_);
lean_dec_ref(v_oldTrace_2245_);
lean_dec_ref(v_depTrace_2241_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f(lean_object* v_00_u03b9_2255_, lean_object* v_inst_2256_, lean_object* v_inst_2257_, lean_object* v_info_2258_, lean_object* v_depTrace_2259_, lean_object* v_traceFile_2260_, lean_object* v_build_2261_, uint8_t v_action_2262_, lean_object* v_oldTrace_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_){
_start:
{
lean_object* v_log_2271_; uint8_t v_action_2272_; uint8_t v_wantsRebuild_2273_; lean_object* v_trace_2274_; lean_object* v_buildTime_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2344_; 
v_log_2271_ = lean_ctor_get(v___y_2269_, 0);
v_action_2272_ = lean_ctor_get_uint8(v___y_2269_, sizeof(void*)*3);
v_wantsRebuild_2273_ = lean_ctor_get_uint8(v___y_2269_, sizeof(void*)*3 + 1);
v_trace_2274_ = lean_ctor_get(v___y_2269_, 1);
v_buildTime_2275_ = lean_ctor_get(v___y_2269_, 2);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___y_2269_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2277_ = v___y_2269_;
v_isShared_2278_ = v_isSharedCheck_2344_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_buildTime_2275_);
lean_inc(v_trace_2274_);
lean_inc(v_log_2271_);
lean_dec(v___y_2269_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2344_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___f_2279_; lean_object* v___x_2280_; 
v___f_2279_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
lean_inc_ref(v_traceFile_2260_);
v___x_2280_ = l_Lake_readTraceFile(v_traceFile_2260_, v_log_2271_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v_a_2282_; lean_object* v___x_2284_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_a_2281_);
v_a_2282_ = lean_ctor_get(v___x_2280_, 1);
lean_inc(v_a_2282_);
lean_dec_ref_known(v___x_2280_, 2);
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v_a_2282_);
v___x_2284_ = v___x_2277_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_a_2282_);
lean_ctor_set(v_reuseFailAlloc_2331_, 1, v_trace_2274_);
lean_ctor_set(v_reuseFailAlloc_2331_, 2, v_buildTime_2275_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*3, v_action_2272_);
lean_ctor_set_uint8(v_reuseFailAlloc_2331_, sizeof(void*)*3 + 1, v_wantsRebuild_2273_);
v___x_2284_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
lean_object* v___x_2285_; 
v___x_2285_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2256_, v_inst_2257_, v_info_2258_, v_depTrace_2259_, v_a_2281_, v_oldTrace_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___x_2284_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v_a_2287_; lean_object* v___x_2289_; uint8_t v_isShared_2290_; uint8_t v_isSharedCheck_2321_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
v_a_2287_ = lean_ctor_get(v___x_2285_, 1);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2289_ = v___x_2285_;
v_isShared_2290_ = v_isSharedCheck_2321_;
goto v_resetjp_2288_;
}
else
{
lean_inc(v_a_2287_);
lean_inc(v_a_2286_);
lean_dec(v___x_2285_);
v___x_2289_ = lean_box(0);
v_isShared_2290_ = v_isSharedCheck_2321_;
goto v_resetjp_2288_;
}
v_resetjp_2288_:
{
uint8_t v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; uint8_t v___x_2294_; 
v___x_2291_ = lean_unbox(v_a_2286_);
lean_dec(v_a_2286_);
v___x_2292_ = l_Lake_OutputStatus_ctorIdx(v___x_2291_);
v___x_2293_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_2294_ = lean_nat_dec_eq(v___x_2292_, v___x_2293_);
lean_dec(v___x_2292_);
if (v___x_2294_ == 0)
{
uint8_t v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2298_; 
lean_dec_ref(v___y_2264_);
lean_dec_ref(v_build_2261_);
lean_dec_ref(v_traceFile_2260_);
v___x_2295_ = 1;
v___x_2296_ = lean_box(v___x_2295_);
if (v_isShared_2290_ == 0)
{
lean_ctor_set(v___x_2289_, 0, v___x_2296_);
v___x_2298_ = v___x_2289_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v___x_2296_);
lean_ctor_set(v_reuseFailAlloc_2299_, 1, v_a_2287_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
else
{
uint8_t v___x_2300_; lean_object* v___x_2301_; 
lean_del_object(v___x_2289_);
v___x_2300_ = 0;
v___x_2301_ = l_Lake_buildAction___redArg(v___f_2279_, v_depTrace_2259_, v_traceFile_2260_, v_build_2261_, v_action_2262_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v_a_2287_);
if (lean_obj_tag(v___x_2301_) == 0)
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2310_; 
v_a_2302_ = lean_ctor_get(v___x_2301_, 1);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2310_ == 0)
{
lean_object* v_unused_2311_; 
v_unused_2311_ = lean_ctor_get(v___x_2301_, 0);
lean_dec(v_unused_2311_);
v___x_2304_ = v___x_2301_;
v_isShared_2305_ = v_isSharedCheck_2310_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2301_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2310_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2306_; lean_object* v___x_2308_; 
v___x_2306_ = lean_box(v___x_2300_);
if (v_isShared_2305_ == 0)
{
lean_ctor_set(v___x_2304_, 0, v___x_2306_);
v___x_2308_ = v___x_2304_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v___x_2306_);
lean_ctor_set(v_reuseFailAlloc_2309_, 1, v_a_2302_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
else
{
lean_object* v_a_2312_; lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2320_; 
v_a_2312_ = lean_ctor_get(v___x_2301_, 0);
v_a_2313_ = lean_ctor_get(v___x_2301_, 1);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2315_ = v___x_2301_;
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_inc(v_a_2312_);
lean_dec(v___x_2301_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2312_);
lean_ctor_set(v_reuseFailAlloc_2319_, 1, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2330_; 
lean_dec_ref(v___y_2264_);
lean_dec_ref(v_build_2261_);
lean_dec_ref(v_traceFile_2260_);
v_a_2322_ = lean_ctor_get(v___x_2285_, 0);
v_a_2323_ = lean_ctor_get(v___x_2285_, 1);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2325_ = v___x_2285_;
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_inc(v_a_2322_);
lean_dec(v___x_2285_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2328_; 
if (v_isShared_2326_ == 0)
{
v___x_2328_ = v___x_2325_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2322_);
lean_ctor_set(v_reuseFailAlloc_2329_, 1, v_a_2323_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
}
else
{
lean_object* v_a_2332_; lean_object* v_a_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2343_; 
lean_dec_ref(v___y_2264_);
lean_dec_ref(v_build_2261_);
lean_dec_ref(v_traceFile_2260_);
lean_dec(v_info_2258_);
lean_dec_ref(v_inst_2257_);
lean_dec_ref(v_inst_2256_);
v_a_2332_ = lean_ctor_get(v___x_2280_, 0);
v_a_2333_ = lean_ctor_get(v___x_2280_, 1);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2335_ = v___x_2280_;
v_isShared_2336_ = v_isSharedCheck_2343_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_a_2333_);
lean_inc(v_a_2332_);
lean_dec(v___x_2280_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2343_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v___x_2338_; 
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v_a_2333_);
v___x_2338_ = v___x_2277_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2333_);
lean_ctor_set(v_reuseFailAlloc_2342_, 1, v_trace_2274_);
lean_ctor_set(v_reuseFailAlloc_2342_, 2, v_buildTime_2275_);
lean_ctor_set_uint8(v_reuseFailAlloc_2342_, sizeof(void*)*3, v_action_2272_);
lean_ctor_set_uint8(v_reuseFailAlloc_2342_, sizeof(void*)*3 + 1, v_wantsRebuild_2273_);
v___x_2338_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
lean_object* v___x_2340_; 
if (v_isShared_2336_ == 0)
{
lean_ctor_set(v___x_2335_, 1, v___x_2338_);
v___x_2340_ = v___x_2335_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_a_2332_);
lean_ctor_set(v_reuseFailAlloc_2341_, 1, v___x_2338_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate_x3f___boxed(lean_object* v_00_u03b9_2345_, lean_object* v_inst_2346_, lean_object* v_inst_2347_, lean_object* v_info_2348_, lean_object* v_depTrace_2349_, lean_object* v_traceFile_2350_, lean_object* v_build_2351_, lean_object* v_action_2352_, lean_object* v_oldTrace_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_){
_start:
{
uint8_t v_action_boxed_2361_; lean_object* v_res_2362_; 
v_action_boxed_2361_ = lean_unbox(v_action_2352_);
v_res_2362_ = l_Lake_buildUnlessUpToDate_x3f(v_00_u03b9_2345_, v_inst_2346_, v_inst_2347_, v_info_2348_, v_depTrace_2349_, v_traceFile_2350_, v_build_2351_, v_action_boxed_2361_, v_oldTrace_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_);
lean_dec_ref(v___y_2358_);
lean_dec(v___y_2357_);
lean_dec(v___y_2356_);
lean_dec(v___y_2355_);
lean_dec_ref(v_oldTrace_2353_);
lean_dec_ref(v_depTrace_2349_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg(lean_object* v_inst_2363_, lean_object* v_inst_2364_, lean_object* v_info_2365_, lean_object* v_depTrace_2366_, lean_object* v_traceFile_2367_, lean_object* v_build_2368_, uint8_t v_action_2369_, lean_object* v_oldTrace_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_){
_start:
{
lean_object* v_a_2379_; lean_object* v_a_2380_; lean_object* v_log_2382_; uint8_t v_action_2383_; uint8_t v_wantsRebuild_2384_; lean_object* v_trace_2385_; lean_object* v_buildTime_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2419_; 
v_log_2382_ = lean_ctor_get(v___y_2376_, 0);
v_action_2383_ = lean_ctor_get_uint8(v___y_2376_, sizeof(void*)*3);
v_wantsRebuild_2384_ = lean_ctor_get_uint8(v___y_2376_, sizeof(void*)*3 + 1);
v_trace_2385_ = lean_ctor_get(v___y_2376_, 1);
v_buildTime_2386_ = lean_ctor_get(v___y_2376_, 2);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___y_2376_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2388_ = v___y_2376_;
v_isShared_2389_ = v_isSharedCheck_2419_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_buildTime_2386_);
lean_inc(v_trace_2385_);
lean_inc(v_log_2382_);
lean_dec(v___y_2376_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2419_;
goto v_resetjp_2387_;
}
v___jp_2378_:
{
lean_object* v___x_2381_; 
v___x_2381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2381_, 0, v_a_2379_);
lean_ctor_set(v___x_2381_, 1, v_a_2380_);
return v___x_2381_;
}
v_resetjp_2387_:
{
lean_object* v___x_2390_; lean_object* v_a_2392_; lean_object* v___f_2394_; lean_object* v___x_2395_; 
v___x_2390_ = lean_box(0);
v___f_2394_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
lean_inc_ref(v_traceFile_2367_);
v___x_2395_ = l_Lake_readTraceFile(v_traceFile_2367_, v_log_2382_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; lean_object* v_a_2397_; lean_object* v___x_2399_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2396_);
v_a_2397_ = lean_ctor_get(v___x_2395_, 1);
lean_inc(v_a_2397_);
lean_dec_ref_known(v___x_2395_, 2);
if (v_isShared_2389_ == 0)
{
lean_ctor_set(v___x_2388_, 0, v_a_2397_);
v___x_2399_ = v___x_2388_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2397_);
lean_ctor_set(v_reuseFailAlloc_2413_, 1, v_trace_2385_);
lean_ctor_set(v_reuseFailAlloc_2413_, 2, v_buildTime_2386_);
lean_ctor_set_uint8(v_reuseFailAlloc_2413_, sizeof(void*)*3, v_action_2383_);
lean_ctor_set_uint8(v_reuseFailAlloc_2413_, sizeof(void*)*3 + 1, v_wantsRebuild_2384_);
v___x_2399_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
lean_object* v___x_2400_; 
v___x_2400_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2363_, v_inst_2364_, v_info_2365_, v_depTrace_2366_, v_a_2396_, v_oldTrace_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___x_2399_);
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v_a_2401_; lean_object* v_a_2402_; uint8_t v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; uint8_t v___x_2406_; 
v_a_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_a_2401_);
v_a_2402_ = lean_ctor_get(v___x_2400_, 1);
lean_inc(v_a_2402_);
lean_dec_ref_known(v___x_2400_, 2);
v___x_2403_ = lean_unbox(v_a_2401_);
lean_dec(v_a_2401_);
v___x_2404_ = l_Lake_OutputStatus_ctorIdx(v___x_2403_);
v___x_2405_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_2406_ = lean_nat_dec_eq(v___x_2404_, v___x_2405_);
lean_dec(v___x_2404_);
if (v___x_2406_ == 0)
{
lean_dec_ref(v___y_2371_);
lean_dec_ref(v_build_2368_);
lean_dec_ref(v_traceFile_2367_);
v_a_2392_ = v_a_2402_;
goto v___jp_2391_;
}
else
{
lean_object* v___x_2407_; 
v___x_2407_ = l_Lake_buildAction___redArg(v___f_2394_, v_depTrace_2366_, v_traceFile_2367_, v_build_2368_, v_action_2369_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v_a_2402_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 1);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 2);
v_a_2392_ = v_a_2408_;
goto v___jp_2391_;
}
else
{
lean_object* v_a_2409_; lean_object* v_a_2410_; 
v_a_2409_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2409_);
v_a_2410_ = lean_ctor_get(v___x_2407_, 1);
lean_inc(v_a_2410_);
lean_dec_ref_known(v___x_2407_, 2);
v_a_2379_ = v_a_2409_;
v_a_2380_ = v_a_2410_;
goto v___jp_2378_;
}
}
}
else
{
lean_object* v_a_2411_; lean_object* v_a_2412_; 
lean_dec_ref(v___y_2371_);
lean_dec_ref(v_build_2368_);
lean_dec_ref(v_traceFile_2367_);
v_a_2411_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_a_2411_);
v_a_2412_ = lean_ctor_get(v___x_2400_, 1);
lean_inc(v_a_2412_);
lean_dec_ref_known(v___x_2400_, 2);
v_a_2379_ = v_a_2411_;
v_a_2380_ = v_a_2412_;
goto v___jp_2378_;
}
}
}
else
{
lean_object* v_a_2414_; lean_object* v_a_2415_; lean_object* v___x_2417_; 
lean_dec_ref(v___y_2371_);
lean_dec_ref(v_build_2368_);
lean_dec_ref(v_traceFile_2367_);
lean_dec(v_info_2365_);
lean_dec_ref(v_inst_2364_);
lean_dec_ref(v_inst_2363_);
v_a_2414_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2414_);
v_a_2415_ = lean_ctor_get(v___x_2395_, 1);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2395_, 2);
if (v_isShared_2389_ == 0)
{
lean_ctor_set(v___x_2388_, 0, v_a_2415_);
v___x_2417_ = v___x_2388_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2415_);
lean_ctor_set(v_reuseFailAlloc_2418_, 1, v_trace_2385_);
lean_ctor_set(v_reuseFailAlloc_2418_, 2, v_buildTime_2386_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, sizeof(void*)*3, v_action_2383_);
lean_ctor_set_uint8(v_reuseFailAlloc_2418_, sizeof(void*)*3 + 1, v_wantsRebuild_2384_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
v_a_2379_ = v_a_2414_;
v_a_2380_ = v___x_2417_;
goto v___jp_2378_;
}
}
v___jp_2391_:
{
lean_object* v___x_2393_; 
v___x_2393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2390_);
lean_ctor_set(v___x_2393_, 1, v_a_2392_);
return v___x_2393_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___redArg___boxed(lean_object* v_inst_2420_, lean_object* v_inst_2421_, lean_object* v_info_2422_, lean_object* v_depTrace_2423_, lean_object* v_traceFile_2424_, lean_object* v_build_2425_, lean_object* v_action_2426_, lean_object* v_oldTrace_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_){
_start:
{
uint8_t v_action_boxed_2435_; lean_object* v_res_2436_; 
v_action_boxed_2435_ = lean_unbox(v_action_2426_);
v_res_2436_ = l_Lake_buildUnlessUpToDate___redArg(v_inst_2420_, v_inst_2421_, v_info_2422_, v_depTrace_2423_, v_traceFile_2424_, v_build_2425_, v_action_boxed_2435_, v_oldTrace_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v_oldTrace_2427_);
lean_dec_ref(v_depTrace_2423_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate(lean_object* v_00_u03b9_2437_, lean_object* v_inst_2438_, lean_object* v_inst_2439_, lean_object* v_info_2440_, lean_object* v_depTrace_2441_, lean_object* v_traceFile_2442_, lean_object* v_build_2443_, uint8_t v_action_2444_, lean_object* v_oldTrace_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_){
_start:
{
lean_object* v_a_2454_; lean_object* v_a_2455_; lean_object* v_log_2457_; uint8_t v_action_2458_; uint8_t v_wantsRebuild_2459_; lean_object* v_trace_2460_; lean_object* v_buildTime_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2494_; 
v_log_2457_ = lean_ctor_get(v___y_2451_, 0);
v_action_2458_ = lean_ctor_get_uint8(v___y_2451_, sizeof(void*)*3);
v_wantsRebuild_2459_ = lean_ctor_get_uint8(v___y_2451_, sizeof(void*)*3 + 1);
v_trace_2460_ = lean_ctor_get(v___y_2451_, 1);
v_buildTime_2461_ = lean_ctor_get(v___y_2451_, 2);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___y_2451_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2463_ = v___y_2451_;
v_isShared_2464_ = v_isSharedCheck_2494_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_buildTime_2461_);
lean_inc(v_trace_2460_);
lean_inc(v_log_2457_);
lean_dec(v___y_2451_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2494_;
goto v_resetjp_2462_;
}
v___jp_2453_:
{
lean_object* v___x_2456_; 
v___x_2456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2456_, 0, v_a_2454_);
lean_ctor_set(v___x_2456_, 1, v_a_2455_);
return v___x_2456_;
}
v_resetjp_2462_:
{
lean_object* v___x_2465_; lean_object* v_a_2467_; lean_object* v___f_2469_; lean_object* v___x_2470_; 
v___x_2465_ = lean_box(0);
v___f_2469_ = ((lean_object*)(l_Lake_instToOutputJsonPUnit___closed__0));
lean_inc_ref(v_traceFile_2442_);
v___x_2470_ = l_Lake_readTraceFile(v_traceFile_2442_, v_log_2457_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v_a_2471_; lean_object* v_a_2472_; lean_object* v___x_2474_; 
v_a_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2471_);
v_a_2472_ = lean_ctor_get(v___x_2470_, 1);
lean_inc(v_a_2472_);
lean_dec_ref_known(v___x_2470_, 2);
if (v_isShared_2464_ == 0)
{
lean_ctor_set(v___x_2463_, 0, v_a_2472_);
v___x_2474_ = v___x_2463_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2472_);
lean_ctor_set(v_reuseFailAlloc_2488_, 1, v_trace_2460_);
lean_ctor_set(v_reuseFailAlloc_2488_, 2, v_buildTime_2461_);
lean_ctor_set_uint8(v_reuseFailAlloc_2488_, sizeof(void*)*3, v_action_2458_);
lean_ctor_set_uint8(v_reuseFailAlloc_2488_, sizeof(void*)*3 + 1, v_wantsRebuild_2459_);
v___x_2474_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
lean_object* v___x_2475_; 
v___x_2475_ = l_Lake_SavedTrace_replayIfUpToDate_x27___redArg(v_inst_2438_, v_inst_2439_, v_info_2440_, v_depTrace_2441_, v_a_2471_, v_oldTrace_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v___x_2474_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v_a_2477_; uint8_t v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; uint8_t v___x_2481_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2476_);
v_a_2477_ = lean_ctor_get(v___x_2475_, 1);
lean_inc(v_a_2477_);
lean_dec_ref_known(v___x_2475_, 2);
v___x_2478_ = lean_unbox(v_a_2476_);
lean_dec(v_a_2476_);
v___x_2479_ = l_Lake_OutputStatus_ctorIdx(v___x_2478_);
v___x_2480_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_2481_ = lean_nat_dec_eq(v___x_2479_, v___x_2480_);
lean_dec(v___x_2479_);
if (v___x_2481_ == 0)
{
lean_dec_ref(v___y_2446_);
lean_dec_ref(v_build_2443_);
lean_dec_ref(v_traceFile_2442_);
v_a_2467_ = v_a_2477_;
goto v___jp_2466_;
}
else
{
lean_object* v___x_2482_; 
v___x_2482_ = l_Lake_buildAction___redArg(v___f_2469_, v_depTrace_2441_, v_traceFile_2442_, v_build_2443_, v_action_2444_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_, v_a_2477_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; 
v_a_2483_ = lean_ctor_get(v___x_2482_, 1);
lean_inc(v_a_2483_);
lean_dec_ref_known(v___x_2482_, 2);
v_a_2467_ = v_a_2483_;
goto v___jp_2466_;
}
else
{
lean_object* v_a_2484_; lean_object* v_a_2485_; 
v_a_2484_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_a_2484_);
v_a_2485_ = lean_ctor_get(v___x_2482_, 1);
lean_inc(v_a_2485_);
lean_dec_ref_known(v___x_2482_, 2);
v_a_2454_ = v_a_2484_;
v_a_2455_ = v_a_2485_;
goto v___jp_2453_;
}
}
}
else
{
lean_object* v_a_2486_; lean_object* v_a_2487_; 
lean_dec_ref(v___y_2446_);
lean_dec_ref(v_build_2443_);
lean_dec_ref(v_traceFile_2442_);
v_a_2486_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2486_);
v_a_2487_ = lean_ctor_get(v___x_2475_, 1);
lean_inc(v_a_2487_);
lean_dec_ref_known(v___x_2475_, 2);
v_a_2454_ = v_a_2486_;
v_a_2455_ = v_a_2487_;
goto v___jp_2453_;
}
}
}
else
{
lean_object* v_a_2489_; lean_object* v_a_2490_; lean_object* v___x_2492_; 
lean_dec_ref(v___y_2446_);
lean_dec_ref(v_build_2443_);
lean_dec_ref(v_traceFile_2442_);
lean_dec(v_info_2440_);
lean_dec_ref(v_inst_2439_);
lean_dec_ref(v_inst_2438_);
v_a_2489_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_a_2489_);
v_a_2490_ = lean_ctor_get(v___x_2470_, 1);
lean_inc(v_a_2490_);
lean_dec_ref_known(v___x_2470_, 2);
if (v_isShared_2464_ == 0)
{
lean_ctor_set(v___x_2463_, 0, v_a_2490_);
v___x_2492_ = v___x_2463_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_a_2490_);
lean_ctor_set(v_reuseFailAlloc_2493_, 1, v_trace_2460_);
lean_ctor_set(v_reuseFailAlloc_2493_, 2, v_buildTime_2461_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*3, v_action_2458_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*3 + 1, v_wantsRebuild_2459_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
v_a_2454_ = v_a_2489_;
v_a_2455_ = v___x_2492_;
goto v___jp_2453_;
}
}
v___jp_2466_:
{
lean_object* v___x_2468_; 
v___x_2468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2465_);
lean_ctor_set(v___x_2468_, 1, v_a_2467_);
return v___x_2468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildUnlessUpToDate___boxed(lean_object* v_00_u03b9_2495_, lean_object* v_inst_2496_, lean_object* v_inst_2497_, lean_object* v_info_2498_, lean_object* v_depTrace_2499_, lean_object* v_traceFile_2500_, lean_object* v_build_2501_, lean_object* v_action_2502_, lean_object* v_oldTrace_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_){
_start:
{
uint8_t v_action_boxed_2511_; lean_object* v_res_2512_; 
v_action_boxed_2511_ = lean_unbox(v_action_2502_);
v_res_2512_ = l_Lake_buildUnlessUpToDate(v_00_u03b9_2495_, v_inst_2496_, v_inst_2497_, v_info_2498_, v_depTrace_2499_, v_traceFile_2500_, v_build_2501_, v_action_boxed_2511_, v_oldTrace_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___y_2507_);
lean_dec(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v_oldTrace_2503_);
lean_dec_ref(v_depTrace_2499_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* l_Lake_writeFileHash(lean_object* v_file_2514_, uint64_t v_hash_2515_){
_start:
{
lean_object* v___x_2517_; lean_object* v_hashFile_2518_; lean_object* v___x_2519_; 
v___x_2517_ = ((lean_object*)(l_Lake_writeFileHash___closed__0));
v_hashFile_2518_ = lean_string_append(v_file_2514_, v___x_2517_);
lean_inc_ref(v_hashFile_2518_);
v___x_2519_ = l_Lake_createParentDirs(v_hashFile_2518_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v___x_2520_; lean_object* v___x_2521_; 
lean_dec_ref_known(v___x_2519_, 1);
v___x_2520_ = l_Lake_lowerHexUInt64(v_hash_2515_);
v___x_2521_ = l_IO_FS_writeFile(v_hashFile_2518_, v___x_2520_);
lean_dec_ref(v___x_2520_);
lean_dec_ref(v_hashFile_2518_);
return v___x_2521_;
}
else
{
lean_dec_ref(v_hashFile_2518_);
return v___x_2519_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_writeFileHash___boxed(lean_object* v_file_2522_, lean_object* v_hash_2523_, lean_object* v___y_2524_){
_start:
{
uint64_t v_hash_boxed_2525_; lean_object* v_res_2526_; 
v_hash_boxed_2525_ = lean_unbox_uint64(v_hash_2523_);
lean_dec_ref(v_hash_2523_);
v_res_2526_ = l_Lake_writeFileHash(v_file_2522_, v_hash_boxed_2525_);
return v_res_2526_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheFileHash(lean_object* v_file_2527_, uint8_t v_text_2528_){
_start:
{
lean_object* v___y_2531_; 
if (v_text_2528_ == 0)
{
lean_object* v___x_2543_; 
v___x_2543_ = l_Lake_computeBinFileHash(v_file_2527_);
v___y_2531_ = v___x_2543_;
goto v___jp_2530_;
}
else
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lake_computeTextFileHash(v_file_2527_);
v___y_2531_ = v___x_2544_;
goto v___jp_2530_;
}
v___jp_2530_:
{
if (lean_obj_tag(v___y_2531_) == 0)
{
lean_object* v_a_2532_; uint64_t v___x_2533_; lean_object* v___x_2534_; 
v_a_2532_ = lean_ctor_get(v___y_2531_, 0);
lean_inc(v_a_2532_);
lean_dec_ref_known(v___y_2531_, 1);
v___x_2533_ = lean_unbox_uint64(v_a_2532_);
lean_dec(v_a_2532_);
v___x_2534_ = l_Lake_writeFileHash(v_file_2527_, v___x_2533_);
return v___x_2534_;
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2542_; 
lean_dec_ref(v_file_2527_);
v_a_2535_ = lean_ctor_get(v___y_2531_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___y_2531_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2537_ = v___y_2531_;
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___y_2531_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_cacheFileHash___boxed(lean_object* v_file_2545_, lean_object* v_text_2546_, lean_object* v___y_2547_){
_start:
{
uint8_t v_text_boxed_2548_; lean_object* v_res_2549_; 
v_text_boxed_2548_ = lean_unbox(v_text_2546_);
v_res_2549_ = l_Lake_cacheFileHash(v_file_2545_, v_text_boxed_2548_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lake_clearFileHash(lean_object* v_file_2550_){
_start:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2552_ = ((lean_object*)(l_Lake_writeFileHash___closed__0));
v___x_2553_ = lean_string_append(v_file_2550_, v___x_2552_);
v___x_2554_ = l_Lake_removeFileIfExists(v___x_2553_);
lean_dec_ref(v___x_2553_);
return v___x_2554_;
}
}
LEAN_EXPORT lean_object* l_Lake_clearFileHash___boxed(lean_object* v_file_2555_, lean_object* v___y_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l_Lake_clearFileHash(v_file_2555_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg(lean_object* v_file_2558_, uint8_t v_text_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
lean_object* v_toBuildConfig_2563_; uint8_t v_trustHash_2564_; lean_object* v___x_2565_; lean_object* v_hashFile_2566_; lean_object* v___y_2568_; lean_object* v___y_2569_; uint8_t v___y_2570_; lean_object* v___y_2571_; uint8_t v___y_2572_; lean_object* v___y_2573_; lean_object* v___y_2606_; 
v_toBuildConfig_2563_ = lean_ctor_get(v___y_2560_, 0);
v_trustHash_2564_ = lean_ctor_get_uint8(v_toBuildConfig_2563_, sizeof(void*)*4 + 1);
v___x_2565_ = ((lean_object*)(l_Lake_writeFileHash___closed__0));
lean_inc_ref(v_file_2558_);
v_hashFile_2566_ = lean_string_append(v_file_2558_, v___x_2565_);
if (v_trustHash_2564_ == 0)
{
v___y_2606_ = v___y_2561_;
goto v___jp_2605_;
}
else
{
lean_object* v___x_2619_; 
v___x_2619_ = l_Lake_Hash_load_x3f(v_hashFile_2566_);
if (lean_obj_tag(v___x_2619_) == 1)
{
lean_object* v_val_2620_; lean_object* v___x_2621_; 
lean_dec_ref(v_hashFile_2566_);
lean_dec_ref(v_file_2558_);
v_val_2620_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_val_2620_);
lean_dec_ref_known(v___x_2619_, 1);
v___x_2621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2621_, 0, v_val_2620_);
lean_ctor_set(v___x_2621_, 1, v___y_2561_);
return v___x_2621_;
}
else
{
lean_dec(v___x_2619_);
v___y_2606_ = v___y_2561_;
goto v___jp_2605_;
}
}
v___jp_2567_:
{
if (lean_obj_tag(v___y_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2575_; 
v_a_2574_ = lean_ctor_get(v___y_2573_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v___y_2573_, 1);
lean_inc_ref(v_hashFile_2566_);
v___x_2575_ = l_Lake_createParentDirs(v_hashFile_2566_);
if (lean_obj_tag(v___x_2575_) == 0)
{
uint64_t v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
lean_dec_ref_known(v___x_2575_, 1);
v___x_2576_ = lean_unbox_uint64(v_a_2574_);
v___x_2577_ = l_Lake_lowerHexUInt64(v___x_2576_);
v___x_2578_ = l_IO_FS_writeFile(v_hashFile_2566_, v___x_2577_);
lean_dec_ref(v___x_2577_);
lean_dec_ref(v_hashFile_2566_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v___x_2579_; lean_object* v___x_2580_; 
lean_dec_ref_known(v___x_2578_, 1);
v___x_2579_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2579_, 0, v___y_2568_);
lean_ctor_set(v___x_2579_, 1, v___y_2571_);
lean_ctor_set(v___x_2579_, 2, v___y_2569_);
lean_ctor_set_uint8(v___x_2579_, sizeof(void*)*3, v___y_2570_);
lean_ctor_set_uint8(v___x_2579_, sizeof(void*)*3 + 1, v___y_2572_);
v___x_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2580_, 0, v_a_2574_);
lean_ctor_set(v___x_2580_, 1, v___x_2579_);
return v___x_2580_;
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2582_; uint8_t v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; 
lean_dec(v_a_2574_);
v_a_2581_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2581_);
lean_dec_ref_known(v___x_2578_, 1);
v___x_2582_ = lean_io_error_to_string(v_a_2581_);
v___x_2583_ = 3;
v___x_2584_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2584_, 0, v___x_2582_);
lean_ctor_set_uint8(v___x_2584_, sizeof(void*)*1, v___x_2583_);
v___x_2585_ = lean_array_get_size(v___y_2568_);
v___x_2586_ = lean_array_push(v___y_2568_, v___x_2584_);
v___x_2587_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2587_, 0, v___x_2586_);
lean_ctor_set(v___x_2587_, 1, v___y_2571_);
lean_ctor_set(v___x_2587_, 2, v___y_2569_);
lean_ctor_set_uint8(v___x_2587_, sizeof(void*)*3, v___y_2570_);
lean_ctor_set_uint8(v___x_2587_, sizeof(void*)*3 + 1, v___y_2572_);
v___x_2588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2585_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
return v___x_2588_;
}
}
else
{
lean_object* v_a_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
lean_dec(v_a_2574_);
lean_dec_ref(v_hashFile_2566_);
v_a_2589_ = lean_ctor_get(v___x_2575_, 0);
lean_inc(v_a_2589_);
lean_dec_ref_known(v___x_2575_, 1);
v___x_2590_ = lean_io_error_to_string(v_a_2589_);
v___x_2591_ = 3;
v___x_2592_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2592_, 0, v___x_2590_);
lean_ctor_set_uint8(v___x_2592_, sizeof(void*)*1, v___x_2591_);
v___x_2593_ = lean_array_get_size(v___y_2568_);
v___x_2594_ = lean_array_push(v___y_2568_, v___x_2592_);
v___x_2595_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
lean_ctor_set(v___x_2595_, 1, v___y_2571_);
lean_ctor_set(v___x_2595_, 2, v___y_2569_);
lean_ctor_set_uint8(v___x_2595_, sizeof(void*)*3, v___y_2570_);
lean_ctor_set_uint8(v___x_2595_, sizeof(void*)*3 + 1, v___y_2572_);
v___x_2596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2593_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
return v___x_2596_;
}
}
else
{
lean_object* v_a_2597_; lean_object* v___x_2598_; uint8_t v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
lean_dec_ref(v_hashFile_2566_);
v_a_2597_ = lean_ctor_get(v___y_2573_, 0);
lean_inc(v_a_2597_);
lean_dec_ref_known(v___y_2573_, 1);
v___x_2598_ = lean_io_error_to_string(v_a_2597_);
v___x_2599_ = 3;
v___x_2600_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2600_, 0, v___x_2598_);
lean_ctor_set_uint8(v___x_2600_, sizeof(void*)*1, v___x_2599_);
v___x_2601_ = lean_array_get_size(v___y_2568_);
v___x_2602_ = lean_array_push(v___y_2568_, v___x_2600_);
v___x_2603_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2603_, 0, v___x_2602_);
lean_ctor_set(v___x_2603_, 1, v___y_2571_);
lean_ctor_set(v___x_2603_, 2, v___y_2569_);
lean_ctor_set_uint8(v___x_2603_, sizeof(void*)*3, v___y_2570_);
lean_ctor_set_uint8(v___x_2603_, sizeof(void*)*3 + 1, v___y_2572_);
v___x_2604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2601_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
return v___x_2604_;
}
}
v___jp_2605_:
{
if (v_text_2559_ == 0)
{
lean_object* v_log_2607_; uint8_t v_action_2608_; uint8_t v_wantsRebuild_2609_; lean_object* v_trace_2610_; lean_object* v_buildTime_2611_; lean_object* v___x_2612_; 
v_log_2607_ = lean_ctor_get(v___y_2606_, 0);
lean_inc_ref(v_log_2607_);
v_action_2608_ = lean_ctor_get_uint8(v___y_2606_, sizeof(void*)*3);
v_wantsRebuild_2609_ = lean_ctor_get_uint8(v___y_2606_, sizeof(void*)*3 + 1);
v_trace_2610_ = lean_ctor_get(v___y_2606_, 1);
lean_inc_ref(v_trace_2610_);
v_buildTime_2611_ = lean_ctor_get(v___y_2606_, 2);
lean_inc(v_buildTime_2611_);
lean_dec_ref(v___y_2606_);
v___x_2612_ = l_Lake_computeBinFileHash(v_file_2558_);
lean_dec_ref(v_file_2558_);
v___y_2568_ = v_log_2607_;
v___y_2569_ = v_buildTime_2611_;
v___y_2570_ = v_action_2608_;
v___y_2571_ = v_trace_2610_;
v___y_2572_ = v_wantsRebuild_2609_;
v___y_2573_ = v___x_2612_;
goto v___jp_2567_;
}
else
{
lean_object* v_log_2613_; uint8_t v_action_2614_; uint8_t v_wantsRebuild_2615_; lean_object* v_trace_2616_; lean_object* v_buildTime_2617_; lean_object* v___x_2618_; 
v_log_2613_ = lean_ctor_get(v___y_2606_, 0);
lean_inc_ref(v_log_2613_);
v_action_2614_ = lean_ctor_get_uint8(v___y_2606_, sizeof(void*)*3);
v_wantsRebuild_2615_ = lean_ctor_get_uint8(v___y_2606_, sizeof(void*)*3 + 1);
v_trace_2616_ = lean_ctor_get(v___y_2606_, 1);
lean_inc_ref(v_trace_2616_);
v_buildTime_2617_ = lean_ctor_get(v___y_2606_, 2);
lean_inc(v_buildTime_2617_);
lean_dec_ref(v___y_2606_);
v___x_2618_ = l_Lake_computeTextFileHash(v_file_2558_);
lean_dec_ref(v_file_2558_);
v___y_2568_ = v_log_2613_;
v___y_2569_ = v_buildTime_2617_;
v___y_2570_ = v_action_2614_;
v___y_2571_ = v_trace_2616_;
v___y_2572_ = v_wantsRebuild_2615_;
v___y_2573_ = v___x_2618_;
goto v___jp_2567_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___redArg___boxed(lean_object* v_file_2622_, lean_object* v_text_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
uint8_t v_text_boxed_2627_; lean_object* v_res_2628_; 
v_text_boxed_2627_ = lean_unbox(v_text_2623_);
v_res_2628_ = l_Lake_fetchFileHash___redArg(v_file_2622_, v_text_boxed_2627_, v___y_2624_, v___y_2625_);
lean_dec_ref(v___y_2624_);
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash(lean_object* v_file_2629_, uint8_t v_text_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_){
_start:
{
lean_object* v___x_2638_; 
v___x_2638_ = l_Lake_fetchFileHash___redArg(v_file_2629_, v_text_2630_, v___y_2635_, v___y_2636_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileHash___boxed(lean_object* v_file_2639_, lean_object* v_text_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
uint8_t v_text_boxed_2648_; lean_object* v_res_2649_; 
v_text_boxed_2648_ = lean_unbox(v_text_2640_);
v_res_2649_ = l_Lake_fetchFileHash(v_file_2639_, v_text_boxed_2648_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
return v_res_2649_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg(lean_object* v_file_2650_, uint8_t v_text_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v___x_2655_; 
lean_inc_ref(v_file_2650_);
v___x_2655_ = l_Lake_fetchFileHash___redArg(v_file_2650_, v_text_2651_, v___y_2652_, v___y_2653_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; lean_object* v_a_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2694_; 
v_a_2656_ = lean_ctor_get(v___x_2655_, 1);
v_a_2657_ = lean_ctor_get(v___x_2655_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2659_ = v___x_2655_;
v_isShared_2660_ = v_isSharedCheck_2694_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_a_2656_);
lean_inc(v_a_2657_);
lean_dec(v___x_2655_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2694_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v_log_2661_; uint8_t v_action_2662_; uint8_t v_wantsRebuild_2663_; lean_object* v_trace_2664_; lean_object* v_buildTime_2665_; lean_object* v___x_2666_; 
v_log_2661_ = lean_ctor_get(v_a_2656_, 0);
v_action_2662_ = lean_ctor_get_uint8(v_a_2656_, sizeof(void*)*3);
v_wantsRebuild_2663_ = lean_ctor_get_uint8(v_a_2656_, sizeof(void*)*3 + 1);
v_trace_2664_ = lean_ctor_get(v_a_2656_, 1);
v_buildTime_2665_ = lean_ctor_get(v_a_2656_, 2);
v___x_2666_ = lean_io_metadata(v_file_2650_);
if (lean_obj_tag(v___x_2666_) == 0)
{
lean_object* v_a_2667_; lean_object* v_modified_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; uint64_t v___x_2671_; lean_object* v___x_2673_; 
v_a_2667_ = lean_ctor_get(v___x_2666_, 0);
lean_inc(v_a_2667_);
lean_dec_ref_known(v___x_2666_, 1);
v_modified_2668_ = lean_ctor_get(v_a_2667_, 1);
lean_inc_ref(v_modified_2668_);
lean_dec(v_a_2667_);
v___x_2669_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_2670_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_2670_, 0, v_file_2650_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
lean_ctor_set(v___x_2670_, 2, v_modified_2668_);
v___x_2671_ = lean_unbox_uint64(v_a_2657_);
lean_dec(v_a_2657_);
lean_ctor_set_uint64(v___x_2670_, sizeof(void*)*3, v___x_2671_);
if (v_isShared_2660_ == 0)
{
lean_ctor_set(v___x_2659_, 0, v___x_2670_);
v___x_2673_ = v___x_2659_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v___x_2670_);
lean_ctor_set(v_reuseFailAlloc_2674_, 1, v_a_2656_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
else
{
lean_object* v___x_2676_; uint8_t v_isShared_2677_; uint8_t v_isSharedCheck_2690_; 
lean_inc(v_buildTime_2665_);
lean_inc_ref(v_trace_2664_);
lean_inc_ref(v_log_2661_);
lean_dec(v_a_2657_);
lean_dec_ref(v_file_2650_);
v_isSharedCheck_2690_ = !lean_is_exclusive(v_a_2656_);
if (v_isSharedCheck_2690_ == 0)
{
lean_object* v_unused_2691_; lean_object* v_unused_2692_; lean_object* v_unused_2693_; 
v_unused_2691_ = lean_ctor_get(v_a_2656_, 2);
lean_dec(v_unused_2691_);
v_unused_2692_ = lean_ctor_get(v_a_2656_, 1);
lean_dec(v_unused_2692_);
v_unused_2693_ = lean_ctor_get(v_a_2656_, 0);
lean_dec(v_unused_2693_);
v___x_2676_ = v_a_2656_;
v_isShared_2677_ = v_isSharedCheck_2690_;
goto v_resetjp_2675_;
}
else
{
lean_dec(v_a_2656_);
v___x_2676_ = lean_box(0);
v_isShared_2677_ = v_isSharedCheck_2690_;
goto v_resetjp_2675_;
}
v_resetjp_2675_:
{
lean_object* v_a_2678_; lean_object* v___x_2679_; uint8_t v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2685_; 
v_a_2678_ = lean_ctor_get(v___x_2666_, 0);
lean_inc(v_a_2678_);
lean_dec_ref_known(v___x_2666_, 1);
v___x_2679_ = lean_io_error_to_string(v_a_2678_);
v___x_2680_ = 3;
v___x_2681_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2681_, 0, v___x_2679_);
lean_ctor_set_uint8(v___x_2681_, sizeof(void*)*1, v___x_2680_);
v___x_2682_ = lean_array_get_size(v_log_2661_);
v___x_2683_ = lean_array_push(v_log_2661_, v___x_2681_);
if (v_isShared_2677_ == 0)
{
lean_ctor_set(v___x_2676_, 0, v___x_2683_);
v___x_2685_ = v___x_2676_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2683_);
lean_ctor_set(v_reuseFailAlloc_2689_, 1, v_trace_2664_);
lean_ctor_set(v_reuseFailAlloc_2689_, 2, v_buildTime_2665_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*3, v_action_2662_);
lean_ctor_set_uint8(v_reuseFailAlloc_2689_, sizeof(void*)*3 + 1, v_wantsRebuild_2663_);
v___x_2685_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2687_; 
if (v_isShared_2660_ == 0)
{
lean_ctor_set_tag(v___x_2659_, 1);
lean_ctor_set(v___x_2659_, 1, v___x_2685_);
lean_ctor_set(v___x_2659_, 0, v___x_2682_);
v___x_2687_ = v___x_2659_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2682_);
lean_ctor_set(v_reuseFailAlloc_2688_, 1, v___x_2685_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
}
}
else
{
lean_object* v_a_2695_; lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2703_; 
lean_dec_ref(v_file_2650_);
v_a_2695_ = lean_ctor_get(v___x_2655_, 0);
v_a_2696_ = lean_ctor_get(v___x_2655_, 1);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2698_ = v___x_2655_;
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_inc(v_a_2695_);
lean_dec(v___x_2655_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2701_; 
if (v_isShared_2699_ == 0)
{
v___x_2701_ = v___x_2698_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_a_2695_);
lean_ctor_set(v_reuseFailAlloc_2702_, 1, v_a_2696_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___redArg___boxed(lean_object* v_file_2704_, lean_object* v_text_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_){
_start:
{
uint8_t v_text_boxed_2709_; lean_object* v_res_2710_; 
v_text_boxed_2709_ = lean_unbox(v_text_2705_);
v_res_2710_ = l_Lake_fetchFileTrace___redArg(v_file_2704_, v_text_boxed_2709_, v___y_2706_, v___y_2707_);
lean_dec_ref(v___y_2706_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace(lean_object* v_file_2711_, uint8_t v_text_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_){
_start:
{
lean_object* v___x_2720_; 
v___x_2720_ = l_Lake_fetchFileTrace___redArg(v_file_2711_, v_text_2712_, v___y_2717_, v___y_2718_);
return v___x_2720_;
}
}
LEAN_EXPORT lean_object* l_Lake_fetchFileTrace___boxed(lean_object* v_file_2721_, lean_object* v_text_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_){
_start:
{
uint8_t v_text_boxed_2730_; lean_object* v_res_2731_; 
v_text_boxed_2730_ = lean_unbox(v_text_2722_);
v_res_2731_ = l_Lake_fetchFileTrace(v_file_2721_, v_text_boxed_2730_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec(v___y_2726_);
lean_dec(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(lean_object* v_val_2732_, lean_object* v_a_x3f_2733_, lean_object* v___y_2734_){
_start:
{
lean_object* v_log_2736_; uint8_t v_action_2737_; uint8_t v_wantsRebuild_2738_; lean_object* v_trace_2739_; lean_object* v_buildTime_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2752_; 
v_log_2736_ = lean_ctor_get(v___y_2734_, 0);
v_action_2737_ = lean_ctor_get_uint8(v___y_2734_, sizeof(void*)*3);
v_wantsRebuild_2738_ = lean_ctor_get_uint8(v___y_2734_, sizeof(void*)*3 + 1);
v_trace_2739_ = lean_ctor_get(v___y_2734_, 1);
v_buildTime_2740_ = lean_ctor_get(v___y_2734_, 2);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___y_2734_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2742_ = v___y_2734_;
v_isShared_2743_ = v_isSharedCheck_2752_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_buildTime_2740_);
lean_inc(v_trace_2739_);
lean_inc(v_log_2736_);
lean_dec(v___y_2734_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2752_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2749_; 
v___x_2744_ = lean_io_mono_ms_now();
v___x_2745_ = lean_nat_sub(v___x_2744_, v_val_2732_);
lean_dec(v___x_2744_);
v___x_2746_ = lean_box(0);
v___x_2747_ = lean_nat_add(v_buildTime_2740_, v___x_2745_);
lean_dec(v___x_2745_);
lean_dec(v_buildTime_2740_);
if (v_isShared_2743_ == 0)
{
lean_ctor_set(v___x_2742_, 2, v___x_2747_);
v___x_2749_ = v___x_2742_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_log_2736_);
lean_ctor_set(v_reuseFailAlloc_2751_, 1, v_trace_2739_);
lean_ctor_set(v_reuseFailAlloc_2751_, 2, v___x_2747_);
lean_ctor_set_uint8(v_reuseFailAlloc_2751_, sizeof(void*)*3, v_action_2737_);
lean_ctor_set_uint8(v_reuseFailAlloc_2751_, sizeof(void*)*3 + 1, v_wantsRebuild_2738_);
v___x_2749_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
lean_object* v___x_2750_; 
v___x_2750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2746_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
return v___x_2750_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0___boxed(lean_object* v_val_2753_, lean_object* v_a_x3f_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_){
_start:
{
lean_object* v_res_2757_; 
v_res_2757_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v_val_2753_, v_a_x3f_2754_, v___y_2755_);
lean_dec(v_a_x3f_2754_);
lean_dec(v_val_2753_);
return v_res_2757_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(lean_object* v_build_2758_, lean_object* v_file_2759_, lean_object* v___y_2760_, lean_object* v_depTrace_2761_, lean_object* v_traceFile_2762_, uint8_t v_action_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_){
_start:
{
lean_object* v_a_2771_; lean_object* v_a_2772_; lean_object* v_log_2775_; uint8_t v_action_2776_; uint8_t v_wantsRebuild_2777_; lean_object* v_trace_2778_; lean_object* v_buildTime_2779_; lean_object* v_toBuildConfig_2785_; lean_object* v_log_2786_; uint8_t v_action_2787_; uint8_t v_wantsRebuild_2788_; lean_object* v_trace_2789_; lean_object* v_buildTime_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2913_; 
v_toBuildConfig_2785_ = lean_ctor_get(v___y_2767_, 0);
v_log_2786_ = lean_ctor_get(v___y_2768_, 0);
v_action_2787_ = lean_ctor_get_uint8(v___y_2768_, sizeof(void*)*3);
v_wantsRebuild_2788_ = lean_ctor_get_uint8(v___y_2768_, sizeof(void*)*3 + 1);
v_trace_2789_ = lean_ctor_get(v___y_2768_, 1);
v_buildTime_2790_ = lean_ctor_get(v___y_2768_, 2);
v_isSharedCheck_2913_ = !lean_is_exclusive(v___y_2768_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2792_ = v___y_2768_;
v_isShared_2793_ = v_isSharedCheck_2913_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_buildTime_2790_);
lean_inc(v_trace_2789_);
lean_inc(v_log_2786_);
lean_dec(v___y_2768_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2913_;
goto v_resetjp_2791_;
}
v___jp_2770_:
{
lean_object* v___x_2773_; 
v___x_2773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2773_, 0, v_a_2771_);
lean_ctor_set(v___x_2773_, 1, v_a_2772_);
return v___x_2773_;
}
v___jp_2774_:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2780_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__1));
v___x_2781_ = lean_array_get_size(v_log_2775_);
v___x_2782_ = lean_array_push(v_log_2775_, v___x_2780_);
v___x_2783_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2783_, 0, v___x_2782_);
lean_ctor_set(v___x_2783_, 1, v_trace_2778_);
lean_ctor_set(v___x_2783_, 2, v_buildTime_2779_);
lean_ctor_set_uint8(v___x_2783_, sizeof(void*)*3, v_action_2776_);
lean_ctor_set_uint8(v___x_2783_, sizeof(void*)*3 + 1, v_wantsRebuild_2777_);
v___x_2784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2781_);
lean_ctor_set(v___x_2784_, 1, v___x_2783_);
return v___x_2784_;
}
v_resetjp_2791_:
{
uint8_t v_noBuild_2794_; uint8_t v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; 
v_noBuild_2794_ = lean_ctor_get_uint8(v_toBuildConfig_2785_, sizeof(void*)*4 + 2);
v___x_2795_ = l_Lake_JobAction_merge(v_action_2787_, v_action_2763_);
v___x_2796_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__2));
lean_inc_ref(v_traceFile_2762_);
v___x_2797_ = l_System_FilePath_addExtension(v_traceFile_2762_, v___x_2796_);
if (v_noBuild_2794_ == 0)
{
lean_object* v___x_2798_; lean_object* v_a_2800_; lean_object* v_a_2801_; lean_object* v___x_2806_; 
v___x_2798_ = lean_io_mono_ms_now();
lean_inc_ref(v_log_2786_);
if (v_isShared_2793_ == 0)
{
v___x_2806_ = v___x_2792_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_log_2786_);
lean_ctor_set(v_reuseFailAlloc_2897_, 1, v_trace_2789_);
lean_ctor_set(v_reuseFailAlloc_2897_, 2, v_buildTime_2790_);
lean_ctor_set_uint8(v_reuseFailAlloc_2897_, sizeof(void*)*3 + 1, v_wantsRebuild_2788_);
v___x_2806_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2805_;
}
v___jp_2799_:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v_a_2804_; 
v___x_2802_ = lean_box(0);
v___x_2803_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v___x_2798_, v___x_2802_, v_a_2801_);
lean_dec(v___x_2798_);
v_a_2804_ = lean_ctor_get(v___x_2803_, 1);
lean_inc(v_a_2804_);
lean_dec_ref(v___x_2803_);
v_a_2771_ = v_a_2800_;
v_a_2772_ = v_a_2804_;
goto v___jp_2770_;
}
v_reusejp_2805_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
lean_ctor_set_uint8(v___x_2806_, sizeof(void*)*3, v___x_2795_);
v___x_2807_ = lean_array_get_size(v_log_2786_);
lean_dec_ref(v_log_2786_);
lean_inc_ref(v___y_2767_);
lean_inc(v___y_2766_);
lean_inc(v___y_2765_);
lean_inc(v___y_2764_);
v___x_2808_ = lean_apply_7(v_build_2758_, v___y_2760_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___x_2806_, lean_box(0));
if (lean_obj_tag(v___x_2808_) == 0)
{
lean_object* v_a_2809_; lean_object* v_log_2810_; uint8_t v_action_2811_; uint8_t v_wantsRebuild_2812_; lean_object* v_trace_2813_; lean_object* v_buildTime_2814_; lean_object* v___x_2815_; 
v_a_2809_ = lean_ctor_get(v___x_2808_, 1);
lean_inc(v_a_2809_);
lean_dec_ref_known(v___x_2808_, 2);
v_log_2810_ = lean_ctor_get(v_a_2809_, 0);
v_action_2811_ = lean_ctor_get_uint8(v_a_2809_, sizeof(void*)*3);
v_wantsRebuild_2812_ = lean_ctor_get_uint8(v_a_2809_, sizeof(void*)*3 + 1);
v_trace_2813_ = lean_ctor_get(v_a_2809_, 1);
v_buildTime_2814_ = lean_ctor_get(v_a_2809_, 2);
v___x_2815_ = l_Lake_clearFileHash(v_file_2759_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v_a_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_a_2816_);
lean_dec_ref_known(v___x_2815_, 1);
v___x_2817_ = lean_array_get_size(v_log_2810_);
v___x_2818_ = l_Array_extract___redArg(v_log_2810_, v___x_2807_, v___x_2817_);
v___x_2819_ = lean_box(0);
v___x_2820_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_2761_, v___x_2819_, v___x_2818_);
v___x_2821_ = l_Lake_BuildMetadata_writeFile(v_traceFile_2762_, v___x_2820_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2862_; 
v_isSharedCheck_2862_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2862_ == 0)
{
lean_object* v_unused_2863_; 
v_unused_2863_ = lean_ctor_get(v___x_2821_, 0);
lean_dec(v_unused_2863_);
v___x_2823_ = v___x_2821_;
v_isShared_2824_ = v_isSharedCheck_2862_;
goto v_resetjp_2822_;
}
else
{
lean_dec(v___x_2821_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2862_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2825_; 
v___x_2825_ = l_Lake_removeFileIfExists(v___x_2797_);
lean_dec_ref(v___x_2797_);
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2845_; 
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2825_);
if (v_isSharedCheck_2845_ == 0)
{
lean_object* v_unused_2846_; 
v_unused_2846_ = lean_ctor_get(v___x_2825_, 0);
lean_dec(v_unused_2846_);
v___x_2827_ = v___x_2825_;
v_isShared_2828_ = v_isSharedCheck_2845_;
goto v_resetjp_2826_;
}
else
{
lean_dec(v___x_2825_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2845_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
lean_inc(v_a_2816_);
if (v_isShared_2828_ == 0)
{
lean_ctor_set(v___x_2827_, 0, v_a_2816_);
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_a_2816_);
v___x_2830_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
lean_object* v___x_2832_; 
if (v_isShared_2824_ == 0)
{
lean_ctor_set_tag(v___x_2823_, 1);
lean_ctor_set(v___x_2823_, 0, v___x_2830_);
v___x_2832_ = v___x_2823_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2830_);
v___x_2832_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
lean_object* v___x_2833_; lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
v___x_2833_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___lam__0(v___x_2798_, v___x_2832_, v_a_2809_);
lean_dec_ref(v___x_2832_);
lean_dec(v___x_2798_);
v_a_2834_ = lean_ctor_get(v___x_2833_, 1);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2841_ == 0)
{
lean_object* v_unused_2842_; 
v_unused_2842_ = lean_ctor_get(v___x_2833_, 0);
lean_dec(v_unused_2842_);
v___x_2836_ = v___x_2833_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2833_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 0, v_a_2816_);
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2816_);
lean_ctor_set(v_reuseFailAlloc_2840_, 1, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
}
}
else
{
lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2858_; 
lean_inc(v_buildTime_2814_);
lean_inc_ref(v_trace_2813_);
lean_inc_ref(v_log_2810_);
lean_del_object(v___x_2823_);
lean_dec(v_a_2816_);
v_isSharedCheck_2858_ = !lean_is_exclusive(v_a_2809_);
if (v_isSharedCheck_2858_ == 0)
{
lean_object* v_unused_2859_; lean_object* v_unused_2860_; lean_object* v_unused_2861_; 
v_unused_2859_ = lean_ctor_get(v_a_2809_, 2);
lean_dec(v_unused_2859_);
v_unused_2860_ = lean_ctor_get(v_a_2809_, 1);
lean_dec(v_unused_2860_);
v_unused_2861_ = lean_ctor_get(v_a_2809_, 0);
lean_dec(v_unused_2861_);
v___x_2848_ = v_a_2809_;
v_isShared_2849_ = v_isSharedCheck_2858_;
goto v_resetjp_2847_;
}
else
{
lean_dec(v_a_2809_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2858_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v_a_2850_; lean_object* v___x_2851_; uint8_t v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2856_; 
v_a_2850_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_a_2850_);
lean_dec_ref_known(v___x_2825_, 1);
v___x_2851_ = lean_io_error_to_string(v_a_2850_);
v___x_2852_ = 3;
v___x_2853_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2853_, 0, v___x_2851_);
lean_ctor_set_uint8(v___x_2853_, sizeof(void*)*1, v___x_2852_);
v___x_2854_ = lean_array_push(v_log_2810_, v___x_2853_);
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 0, v___x_2854_);
v___x_2856_ = v___x_2848_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v___x_2854_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v_trace_2813_);
lean_ctor_set(v_reuseFailAlloc_2857_, 2, v_buildTime_2814_);
lean_ctor_set_uint8(v_reuseFailAlloc_2857_, sizeof(void*)*3, v_action_2811_);
lean_ctor_set_uint8(v_reuseFailAlloc_2857_, sizeof(void*)*3 + 1, v_wantsRebuild_2812_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
v_a_2800_ = v___x_2817_;
v_a_2801_ = v___x_2856_;
goto v___jp_2799_;
}
}
}
}
}
else
{
lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2875_; 
lean_inc(v_buildTime_2814_);
lean_inc_ref(v_trace_2813_);
lean_inc_ref(v_log_2810_);
lean_dec(v_a_2816_);
lean_dec_ref(v___x_2797_);
v_isSharedCheck_2875_ = !lean_is_exclusive(v_a_2809_);
if (v_isSharedCheck_2875_ == 0)
{
lean_object* v_unused_2876_; lean_object* v_unused_2877_; lean_object* v_unused_2878_; 
v_unused_2876_ = lean_ctor_get(v_a_2809_, 2);
lean_dec(v_unused_2876_);
v_unused_2877_ = lean_ctor_get(v_a_2809_, 1);
lean_dec(v_unused_2877_);
v_unused_2878_ = lean_ctor_get(v_a_2809_, 0);
lean_dec(v_unused_2878_);
v___x_2865_ = v_a_2809_;
v_isShared_2866_ = v_isSharedCheck_2875_;
goto v_resetjp_2864_;
}
else
{
lean_dec(v_a_2809_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2875_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v_a_2867_; lean_object* v___x_2868_; uint8_t v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2873_; 
v_a_2867_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_a_2867_);
lean_dec_ref_known(v___x_2821_, 1);
v___x_2868_ = lean_io_error_to_string(v_a_2867_);
v___x_2869_ = 3;
v___x_2870_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2870_, 0, v___x_2868_);
lean_ctor_set_uint8(v___x_2870_, sizeof(void*)*1, v___x_2869_);
v___x_2871_ = lean_array_push(v_log_2810_, v___x_2870_);
if (v_isShared_2866_ == 0)
{
lean_ctor_set(v___x_2865_, 0, v___x_2871_);
v___x_2873_ = v___x_2865_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v___x_2871_);
lean_ctor_set(v_reuseFailAlloc_2874_, 1, v_trace_2813_);
lean_ctor_set(v_reuseFailAlloc_2874_, 2, v_buildTime_2814_);
lean_ctor_set_uint8(v_reuseFailAlloc_2874_, sizeof(void*)*3, v_action_2811_);
lean_ctor_set_uint8(v_reuseFailAlloc_2874_, sizeof(void*)*3 + 1, v_wantsRebuild_2812_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
v_a_2800_ = v___x_2817_;
v_a_2801_ = v___x_2873_;
goto v___jp_2799_;
}
}
}
}
else
{
lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2891_; 
lean_inc(v_buildTime_2814_);
lean_inc_ref(v_trace_2813_);
lean_inc_ref(v_log_2810_);
lean_dec_ref(v___x_2797_);
lean_dec_ref(v_traceFile_2762_);
v_isSharedCheck_2891_ = !lean_is_exclusive(v_a_2809_);
if (v_isSharedCheck_2891_ == 0)
{
lean_object* v_unused_2892_; lean_object* v_unused_2893_; lean_object* v_unused_2894_; 
v_unused_2892_ = lean_ctor_get(v_a_2809_, 2);
lean_dec(v_unused_2892_);
v_unused_2893_ = lean_ctor_get(v_a_2809_, 1);
lean_dec(v_unused_2893_);
v_unused_2894_ = lean_ctor_get(v_a_2809_, 0);
lean_dec(v_unused_2894_);
v___x_2880_ = v_a_2809_;
v_isShared_2881_ = v_isSharedCheck_2891_;
goto v_resetjp_2879_;
}
else
{
lean_dec(v_a_2809_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2891_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v_a_2882_; lean_object* v___x_2883_; uint8_t v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2889_; 
v_a_2882_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_a_2882_);
lean_dec_ref_known(v___x_2815_, 1);
v___x_2883_ = lean_io_error_to_string(v_a_2882_);
v___x_2884_ = 3;
v___x_2885_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2885_, 0, v___x_2883_);
lean_ctor_set_uint8(v___x_2885_, sizeof(void*)*1, v___x_2884_);
v___x_2886_ = lean_array_get_size(v_log_2810_);
v___x_2887_ = lean_array_push(v_log_2810_, v___x_2885_);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 0, v___x_2887_);
v___x_2889_ = v___x_2880_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v___x_2887_);
lean_ctor_set(v_reuseFailAlloc_2890_, 1, v_trace_2813_);
lean_ctor_set(v_reuseFailAlloc_2890_, 2, v_buildTime_2814_);
lean_ctor_set_uint8(v_reuseFailAlloc_2890_, sizeof(void*)*3, v_action_2811_);
lean_ctor_set_uint8(v_reuseFailAlloc_2890_, sizeof(void*)*3 + 1, v_wantsRebuild_2812_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
v_a_2800_ = v___x_2886_;
v_a_2801_ = v___x_2889_;
goto v___jp_2799_;
}
}
}
}
else
{
lean_object* v_a_2895_; lean_object* v_a_2896_; 
lean_dec_ref(v___x_2797_);
lean_dec_ref(v_traceFile_2762_);
lean_dec_ref(v_file_2759_);
v_a_2895_ = lean_ctor_get(v___x_2808_, 0);
lean_inc(v_a_2895_);
v_a_2896_ = lean_ctor_get(v___x_2808_, 1);
lean_inc(v_a_2896_);
lean_dec_ref_known(v___x_2808_, 2);
v_a_2800_ = v_a_2895_;
v_a_2801_ = v_a_2896_;
goto v___jp_2799_;
}
}
}
else
{
uint8_t v___x_2898_; 
lean_dec_ref(v___y_2760_);
lean_dec_ref(v_file_2759_);
lean_dec_ref(v_build_2758_);
v___x_2898_ = l_System_FilePath_pathExists(v_traceFile_2762_);
lean_dec_ref(v_traceFile_2762_);
if (v___x_2898_ == 0)
{
lean_dec_ref(v___x_2797_);
lean_del_object(v___x_2792_);
v_log_2775_ = v_log_2786_;
v_action_2776_ = v___x_2795_;
v_wantsRebuild_2777_ = v_noBuild_2794_;
v_trace_2778_ = v_trace_2789_;
v_buildTime_2779_ = v_buildTime_2790_;
goto v___jp_2774_;
}
else
{
lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
v___x_2899_ = lean_box(0);
v___x_2900_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___x_2901_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_2761_, v___x_2899_, v___x_2900_);
v___x_2902_ = l_Lake_BuildMetadata_writeFile(v___x_2797_, v___x_2901_);
if (lean_obj_tag(v___x_2902_) == 0)
{
lean_dec_ref_known(v___x_2902_, 1);
lean_del_object(v___x_2792_);
v_log_2775_ = v_log_2786_;
v_action_2776_ = v___x_2795_;
v_wantsRebuild_2777_ = v_noBuild_2794_;
v_trace_2778_ = v_trace_2789_;
v_buildTime_2779_ = v_buildTime_2790_;
goto v___jp_2774_;
}
else
{
lean_object* v_a_2903_; lean_object* v___x_2904_; uint8_t v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2910_; 
v_a_2903_ = lean_ctor_get(v___x_2902_, 0);
lean_inc(v_a_2903_);
lean_dec_ref_known(v___x_2902_, 1);
v___x_2904_ = lean_io_error_to_string(v_a_2903_);
v___x_2905_ = 3;
v___x_2906_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2906_, 0, v___x_2904_);
lean_ctor_set_uint8(v___x_2906_, sizeof(void*)*1, v___x_2905_);
v___x_2907_ = lean_array_get_size(v_log_2786_);
v___x_2908_ = lean_array_push(v_log_2786_, v___x_2906_);
if (v_isShared_2793_ == 0)
{
lean_ctor_set(v___x_2792_, 0, v___x_2908_);
v___x_2910_ = v___x_2792_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v___x_2908_);
lean_ctor_set(v_reuseFailAlloc_2912_, 1, v_trace_2789_);
lean_ctor_set(v_reuseFailAlloc_2912_, 2, v_buildTime_2790_);
v___x_2910_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v___x_2911_; 
lean_ctor_set_uint8(v___x_2910_, sizeof(void*)*3, v___x_2795_);
lean_ctor_set_uint8(v___x_2910_, sizeof(void*)*3 + 1, v_noBuild_2794_);
v___x_2911_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2907_);
lean_ctor_set(v___x_2911_, 1, v___x_2910_);
return v___x_2911_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1___boxed(lean_object* v_build_2914_, lean_object* v_file_2915_, lean_object* v___y_2916_, lean_object* v_depTrace_2917_, lean_object* v_traceFile_2918_, lean_object* v_action_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_){
_start:
{
uint8_t v_action_boxed_2926_; lean_object* v_res_2927_; 
v_action_boxed_2926_ = lean_unbox(v_action_2919_);
v_res_2927_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(v_build_2914_, v_file_2915_, v___y_2916_, v_depTrace_2917_, v_traceFile_2918_, v_action_boxed_2926_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec_ref(v_depTrace_2917_);
return v_res_2927_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(lean_object* v_info_2928_, lean_object* v_self_2929_){
_start:
{
lean_object* v___x_2931_; 
v___x_2931_ = lean_io_metadata(v_info_2928_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v_modified_2933_; uint8_t v___x_2934_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
lean_inc(v_a_2932_);
lean_dec_ref_known(v___x_2931_, 1);
v_modified_2933_ = lean_ctor_get(v_a_2932_, 1);
lean_inc_ref(v_modified_2933_);
lean_dec(v_a_2932_);
v___x_2934_ = l_IO_FS_instOrdSystemTime_ord(v_self_2929_, v_modified_2933_);
lean_dec_ref(v_modified_2933_);
if (v___x_2934_ == 0)
{
uint8_t v___x_2935_; 
v___x_2935_ = 1;
return v___x_2935_;
}
else
{
uint8_t v___x_2936_; 
v___x_2936_ = 0;
return v___x_2936_;
}
}
else
{
uint8_t v___x_2937_; 
lean_dec_ref_known(v___x_2931_, 1);
v___x_2937_ = 0;
return v___x_2937_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1___boxed(lean_object* v_info_2938_, lean_object* v_self_2939_, lean_object* v___y_2940_){
_start:
{
uint8_t v_res_2941_; lean_object* v_r_2942_; 
v_res_2941_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_2938_, v_self_2939_);
lean_dec_ref(v_self_2939_);
lean_dec_ref(v_info_2938_);
v_r_2942_ = lean_box(v_res_2941_);
return v_r_2942_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(lean_object* v_x_2943_, lean_object* v_x_2944_){
_start:
{
if (lean_obj_tag(v_x_2943_) == 0)
{
if (lean_obj_tag(v_x_2944_) == 0)
{
uint8_t v___x_2945_; 
v___x_2945_ = 1;
return v___x_2945_;
}
else
{
uint8_t v___x_2946_; 
v___x_2946_ = 0;
return v___x_2946_;
}
}
else
{
if (lean_obj_tag(v_x_2944_) == 0)
{
uint8_t v___x_2947_; 
v___x_2947_ = 0;
return v___x_2947_;
}
else
{
lean_object* v_val_2948_; lean_object* v_val_2949_; uint64_t v___x_2950_; uint64_t v___x_2951_; uint8_t v___x_2952_; 
v_val_2948_ = lean_ctor_get(v_x_2943_, 0);
v_val_2949_ = lean_ctor_get(v_x_2944_, 0);
v___x_2950_ = lean_unbox_uint64(v_val_2948_);
v___x_2951_ = lean_unbox_uint64(v_val_2949_);
v___x_2952_ = lean_uint64_dec_eq(v___x_2950_, v___x_2951_);
return v___x_2952_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2___boxed(lean_object* v_x_2953_, lean_object* v_x_2954_){
_start:
{
uint8_t v_res_2955_; lean_object* v_r_2956_; 
v_res_2955_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(v_x_2953_, v_x_2954_);
lean_dec(v_x_2954_);
lean_dec(v_x_2953_);
v_r_2956_ = lean_box(v_res_2955_);
return v_r_2956_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(lean_object* v_info_2957_, lean_object* v_depTrace_2958_, lean_object* v_depHash_2959_, lean_object* v_oldTrace_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_){
_start:
{
uint64_t v_hash_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; uint8_t v___x_2967_; 
v_hash_2964_ = lean_ctor_get_uint64(v_depTrace_2958_, sizeof(void*)*3);
v___x_2965_ = lean_box_uint64(v_hash_2964_);
v___x_2966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2966_, 0, v___x_2965_);
v___x_2967_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0_spec__2(v___x_2966_, v_depHash_2959_);
lean_dec_ref_known(v___x_2966_, 1);
if (v___x_2967_ == 0)
{
lean_object* v_toBuildConfig_2968_; uint8_t v_oldMode_2969_; 
v_toBuildConfig_2968_ = lean_ctor_get(v___y_2961_, 0);
v_oldMode_2969_ = lean_ctor_get_uint8(v_toBuildConfig_2968_, sizeof(void*)*4);
if (v_oldMode_2969_ == 0)
{
uint8_t v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2970_ = 0;
v___x_2971_ = lean_box(v___x_2970_);
v___x_2972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2971_);
lean_ctor_set(v___x_2972_, 1, v___y_2962_);
return v___x_2972_;
}
else
{
uint8_t v___x_2973_; 
v___x_2973_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_2957_, v_oldTrace_2960_);
if (v___x_2973_ == 0)
{
uint8_t v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2974_ = 0;
v___x_2975_ = lean_box(v___x_2974_);
v___x_2976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2976_, 0, v___x_2975_);
lean_ctor_set(v___x_2976_, 1, v___y_2962_);
return v___x_2976_;
}
else
{
uint8_t v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2977_ = 1;
v___x_2978_ = lean_box(v___x_2977_);
v___x_2979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2978_);
lean_ctor_set(v___x_2979_, 1, v___y_2962_);
return v___x_2979_;
}
}
}
else
{
uint8_t v___x_2980_; 
v___x_2980_ = l_System_FilePath_pathExists(v_info_2957_);
if (v___x_2980_ == 0)
{
uint8_t v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v___x_2981_ = 0;
v___x_2982_ = lean_box(v___x_2981_);
v___x_2983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
lean_ctor_set(v___x_2983_, 1, v___y_2962_);
return v___x_2983_;
}
else
{
uint8_t v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2984_ = 2;
v___x_2985_ = lean_box(v___x_2984_);
v___x_2986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2985_);
lean_ctor_set(v___x_2986_, 1, v___y_2962_);
return v___x_2986_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg___boxed(lean_object* v_info_2987_, lean_object* v_depTrace_2988_, lean_object* v_depHash_2989_, lean_object* v_oldTrace_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_){
_start:
{
lean_object* v_res_2994_; 
v_res_2994_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_2987_, v_depTrace_2988_, v_depHash_2989_, v_oldTrace_2990_, v___y_2991_, v___y_2992_);
lean_dec_ref(v___y_2991_);
lean_dec_ref(v_oldTrace_2990_);
lean_dec(v_depHash_2989_);
lean_dec_ref(v_depTrace_2988_);
lean_dec_ref(v_info_2987_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(lean_object* v___y_2995_, lean_object* v_info_2996_, lean_object* v_depTrace_2997_, lean_object* v_savedTrace_2998_, lean_object* v_oldTrace_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_){
_start:
{
if (lean_obj_tag(v_savedTrace_2998_) == 2)
{
lean_object* v_data_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3057_; 
v_data_3006_ = lean_ctor_get(v_savedTrace_2998_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v_savedTrace_2998_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3008_ = v_savedTrace_2998_;
v_isShared_3009_ = v_isSharedCheck_3057_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_data_3006_);
lean_dec(v_savedTrace_2998_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3057_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
uint64_t v_depHash_3010_; lean_object* v_log_3011_; lean_object* v___x_3012_; lean_object* v___x_3014_; 
v_depHash_3010_ = lean_ctor_get_uint64(v_data_3006_, sizeof(void*)*3);
v_log_3011_ = lean_ctor_get(v_data_3006_, 2);
lean_inc_ref(v_log_3011_);
lean_dec_ref(v_data_3006_);
v___x_3012_ = lean_box_uint64(v_depHash_3010_);
if (v_isShared_3009_ == 0)
{
lean_ctor_set_tag(v___x_3008_, 1);
lean_ctor_set(v___x_3008_, 0, v___x_3012_);
v___x_3014_ = v___x_3008_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v___x_3012_);
v___x_3014_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3015_; lean_object* v_a_3016_; lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3055_; 
v___x_3015_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_2996_, v_depTrace_2997_, v___x_3014_, v_oldTrace_2999_, v___y_3003_, v___y_3004_);
lean_dec_ref(v___x_3014_);
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
v_a_3017_ = lean_ctor_get(v___x_3015_, 1);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3019_ = v___x_3015_;
v_isShared_3020_ = v_isSharedCheck_3055_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_inc(v_a_3016_);
lean_dec(v___x_3015_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3055_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
lean_object* v___y_3022_; uint8_t v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; uint8_t v___x_3029_; 
v___x_3026_ = lean_unbox(v_a_3016_);
v___x_3027_ = l_Lake_OutputStatus_ctorIdx(v___x_3026_);
v___x_3028_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_3029_ = lean_nat_dec_eq(v___x_3027_, v___x_3028_);
lean_dec(v___x_3027_);
if (v___x_3029_ == 0)
{
lean_object* v_log_3030_; uint8_t v_action_3031_; uint8_t v_wantsRebuild_3032_; lean_object* v_trace_3033_; lean_object* v_buildTime_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3054_; 
v_log_3030_ = lean_ctor_get(v_a_3017_, 0);
v_action_3031_ = lean_ctor_get_uint8(v_a_3017_, sizeof(void*)*3);
v_wantsRebuild_3032_ = lean_ctor_get_uint8(v_a_3017_, sizeof(void*)*3 + 1);
v_trace_3033_ = lean_ctor_get(v_a_3017_, 1);
v_buildTime_3034_ = lean_ctor_get(v_a_3017_, 2);
v_isSharedCheck_3054_ = !lean_is_exclusive(v_a_3017_);
if (v_isSharedCheck_3054_ == 0)
{
v___x_3036_ = v_a_3017_;
v_isShared_3037_ = v_isSharedCheck_3054_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_buildTime_3034_);
lean_inc(v_trace_3033_);
lean_inc(v_log_3030_);
lean_dec(v_a_3017_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3054_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
uint8_t v___x_3038_; uint8_t v___x_3039_; lean_object* v___x_3041_; 
v___x_3038_ = 2;
v___x_3039_ = l_Lake_JobAction_merge(v_action_3031_, v___x_3038_);
if (v_isShared_3037_ == 0)
{
v___x_3041_ = v___x_3036_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v_log_3030_);
lean_ctor_set(v_reuseFailAlloc_3053_, 1, v_trace_3033_);
lean_ctor_set(v_reuseFailAlloc_3053_, 2, v_buildTime_3034_);
lean_ctor_set_uint8(v_reuseFailAlloc_3053_, sizeof(void*)*3 + 1, v_wantsRebuild_3032_);
v___x_3041_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
lean_object* v___x_3042_; 
lean_ctor_set_uint8(v___x_3041_, sizeof(void*)*3, v___x_3039_);
v___x_3042_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_3011_, v___y_2995_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___x_3041_);
lean_dec_ref(v_log_3011_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 1);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3042_, 2);
v___y_3022_ = v_a_3043_;
goto v___jp_3021_;
}
else
{
lean_object* v_a_3044_; lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3052_; 
lean_del_object(v___x_3019_);
lean_dec(v_a_3016_);
v_a_3044_ = lean_ctor_get(v___x_3042_, 0);
v_a_3045_ = lean_ctor_get(v___x_3042_, 1);
v_isSharedCheck_3052_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3047_ = v___x_3042_;
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_inc(v_a_3044_);
lean_dec(v___x_3042_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3050_; 
if (v_isShared_3048_ == 0)
{
v___x_3050_ = v___x_3047_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_a_3044_);
lean_ctor_set(v_reuseFailAlloc_3051_, 1, v_a_3045_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_log_3011_);
v___y_3022_ = v_a_3017_;
goto v___jp_3021_;
}
v___jp_3021_:
{
lean_object* v___x_3024_; 
if (v_isShared_3020_ == 0)
{
lean_ctor_set(v___x_3019_, 1, v___y_3022_);
v___x_3024_ = v___x_3019_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3016_);
lean_ctor_set(v_reuseFailAlloc_3025_, 1, v___y_3022_);
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
else
{
lean_object* v_toBuildConfig_3058_; uint8_t v_oldMode_3059_; 
lean_dec(v_savedTrace_2998_);
v_toBuildConfig_3058_ = lean_ctor_get(v___y_3003_, 0);
v_oldMode_3059_ = lean_ctor_get_uint8(v_toBuildConfig_3058_, sizeof(void*)*4);
if (v_oldMode_3059_ == 0)
{
uint8_t v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; 
v___x_3060_ = 0;
v___x_3061_ = lean_box(v___x_3060_);
v___x_3062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3061_);
lean_ctor_set(v___x_3062_, 1, v___y_3004_);
return v___x_3062_;
}
else
{
uint8_t v___x_3063_; 
v___x_3063_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__1(v_info_2996_, v_oldTrace_2999_);
if (v___x_3063_ == 0)
{
uint8_t v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3064_ = 0;
v___x_3065_ = lean_box(v___x_3064_);
v___x_3066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3065_);
lean_ctor_set(v___x_3066_, 1, v___y_3004_);
return v___x_3066_;
}
else
{
uint8_t v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___x_3067_ = 1;
v___x_3068_ = lean_box(v___x_3067_);
v___x_3069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3068_);
lean_ctor_set(v___x_3069_, 1, v___y_3004_);
return v___x_3069_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0___boxed(lean_object* v___y_3070_, lean_object* v_info_3071_, lean_object* v_depTrace_3072_, lean_object* v_savedTrace_3073_, lean_object* v_oldTrace_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_){
_start:
{
lean_object* v_res_3081_; 
v_res_3081_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v___y_3070_, v_info_3071_, v_depTrace_3072_, v_savedTrace_3073_, v_oldTrace_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_);
lean_dec_ref(v___y_3078_);
lean_dec(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec(v___y_3075_);
lean_dec_ref(v_oldTrace_3074_);
lean_dec_ref(v_depTrace_3072_);
lean_dec_ref(v_info_3071_);
lean_dec_ref(v___y_3070_);
return v_res_3081_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27(lean_object* v_file_3083_, lean_object* v_build_3084_, uint8_t v_text_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_){
_start:
{
lean_object* v_a_3094_; lean_object* v_a_3128_; lean_object* v_a_3129_; lean_object* v_trace_3131_; lean_object* v_log_3132_; uint8_t v_action_3133_; uint8_t v_wantsRebuild_3134_; lean_object* v_buildTime_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3167_; 
v_trace_3131_ = lean_ctor_get(v___y_3091_, 1);
v_log_3132_ = lean_ctor_get(v___y_3091_, 0);
v_action_3133_ = lean_ctor_get_uint8(v___y_3091_, sizeof(void*)*3);
v_wantsRebuild_3134_ = lean_ctor_get_uint8(v___y_3091_, sizeof(void*)*3 + 1);
v_buildTime_3135_ = lean_ctor_get(v___y_3091_, 2);
v_isSharedCheck_3167_ = !lean_is_exclusive(v___y_3091_);
if (v_isSharedCheck_3167_ == 0)
{
v___x_3137_ = v___y_3091_;
v_isShared_3138_ = v_isSharedCheck_3167_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_buildTime_3135_);
lean_inc(v_trace_3131_);
lean_inc(v_log_3132_);
lean_dec(v___y_3091_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3167_;
goto v_resetjp_3136_;
}
v___jp_3093_:
{
lean_object* v___x_3095_; 
v___x_3095_ = l_Lake_fetchFileTrace___redArg(v_file_3083_, v_text_3085_, v___y_3090_, v_a_3094_);
if (lean_obj_tag(v___x_3095_) == 0)
{
lean_object* v_a_3096_; lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3117_; 
v_a_3096_ = lean_ctor_get(v___x_3095_, 1);
v_a_3097_ = lean_ctor_get(v___x_3095_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3099_ = v___x_3095_;
v_isShared_3100_ = v_isSharedCheck_3117_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3096_);
lean_inc(v_a_3097_);
lean_dec(v___x_3095_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3117_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v_log_3101_; uint8_t v_action_3102_; uint8_t v_wantsRebuild_3103_; lean_object* v_buildTime_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3115_; 
v_log_3101_ = lean_ctor_get(v_a_3096_, 0);
v_action_3102_ = lean_ctor_get_uint8(v_a_3096_, sizeof(void*)*3);
v_wantsRebuild_3103_ = lean_ctor_get_uint8(v_a_3096_, sizeof(void*)*3 + 1);
v_buildTime_3104_ = lean_ctor_get(v_a_3096_, 2);
v_isSharedCheck_3115_ = !lean_is_exclusive(v_a_3096_);
if (v_isSharedCheck_3115_ == 0)
{
lean_object* v_unused_3116_; 
v_unused_3116_ = lean_ctor_get(v_a_3096_, 1);
lean_dec(v_unused_3116_);
v___x_3106_ = v_a_3096_;
v_isShared_3107_ = v_isSharedCheck_3115_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_buildTime_3104_);
lean_inc(v_log_3101_);
lean_dec(v_a_3096_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3115_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v___x_3108_; lean_object* v___x_3110_; 
v___x_3108_ = lean_box(0);
if (v_isShared_3107_ == 0)
{
lean_ctor_set(v___x_3106_, 1, v_a_3097_);
v___x_3110_ = v___x_3106_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v_log_3101_);
lean_ctor_set(v_reuseFailAlloc_3114_, 1, v_a_3097_);
lean_ctor_set(v_reuseFailAlloc_3114_, 2, v_buildTime_3104_);
lean_ctor_set_uint8(v_reuseFailAlloc_3114_, sizeof(void*)*3, v_action_3102_);
lean_ctor_set_uint8(v_reuseFailAlloc_3114_, sizeof(void*)*3 + 1, v_wantsRebuild_3103_);
v___x_3110_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
lean_object* v___x_3112_; 
if (v_isShared_3100_ == 0)
{
lean_ctor_set(v___x_3099_, 1, v___x_3110_);
lean_ctor_set(v___x_3099_, 0, v___x_3108_);
v___x_3112_ = v___x_3099_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v___x_3108_);
lean_ctor_set(v_reuseFailAlloc_3113_, 1, v___x_3110_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
}
}
else
{
lean_object* v_a_3118_; lean_object* v_a_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3126_; 
v_a_3118_ = lean_ctor_get(v___x_3095_, 0);
v_a_3119_ = lean_ctor_get(v___x_3095_, 1);
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_3095_);
if (v_isSharedCheck_3126_ == 0)
{
v___x_3121_ = v___x_3095_;
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_a_3119_);
lean_inc(v_a_3118_);
lean_dec(v___x_3095_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3124_; 
if (v_isShared_3122_ == 0)
{
v___x_3124_ = v___x_3121_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v_a_3118_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v_a_3119_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
return v___x_3124_;
}
}
}
}
v___jp_3127_:
{
lean_object* v___x_3130_; 
v___x_3130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3130_, 0, v_a_3128_);
lean_ctor_set(v___x_3130_, 1, v_a_3129_);
return v___x_3130_;
}
v_resetjp_3136_:
{
lean_object* v_mtime_3139_; lean_object* v___x_3140_; lean_object* v_traceFile_3141_; uint8_t v___x_3142_; lean_object* v___x_3143_; 
v_mtime_3139_ = lean_ctor_get(v_trace_3131_, 2);
v___x_3140_ = ((lean_object*)(l_Lake_buildFileUnlessUpToDate_x27___closed__0));
lean_inc_ref(v_file_3083_);
v_traceFile_3141_ = lean_string_append(v_file_3083_, v___x_3140_);
v___x_3142_ = 5;
lean_inc_ref(v_traceFile_3141_);
v___x_3143_ = l_Lake_readTraceFile(v_traceFile_3141_, v_log_3132_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v_a_3144_; lean_object* v_a_3145_; lean_object* v___x_3147_; 
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3144_);
v_a_3145_ = lean_ctor_get(v___x_3143_, 1);
lean_inc(v_a_3145_);
lean_dec_ref_known(v___x_3143_, 2);
lean_inc_ref(v_trace_3131_);
if (v_isShared_3138_ == 0)
{
lean_ctor_set(v___x_3137_, 0, v_a_3145_);
v___x_3147_ = v___x_3137_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_a_3145_);
lean_ctor_set(v_reuseFailAlloc_3161_, 1, v_trace_3131_);
lean_ctor_set(v_reuseFailAlloc_3161_, 2, v_buildTime_3135_);
lean_ctor_set_uint8(v_reuseFailAlloc_3161_, sizeof(void*)*3, v_action_3133_);
lean_ctor_set_uint8(v_reuseFailAlloc_3161_, sizeof(void*)*3 + 1, v_wantsRebuild_3134_);
v___x_3147_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
lean_object* v___x_3148_; 
v___x_3148_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v___y_3086_, v_file_3083_, v_trace_3131_, v_a_3144_, v_mtime_3139_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___x_3147_);
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_object* v_a_3149_; lean_object* v_a_3150_; uint8_t v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; uint8_t v___x_3154_; 
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
lean_inc(v_a_3149_);
v_a_3150_ = lean_ctor_get(v___x_3148_, 1);
lean_inc(v_a_3150_);
lean_dec_ref_known(v___x_3148_, 2);
v___x_3151_ = lean_unbox(v_a_3149_);
lean_dec(v_a_3149_);
v___x_3152_ = l_Lake_OutputStatus_ctorIdx(v___x_3151_);
v___x_3153_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_3154_ = lean_nat_dec_eq(v___x_3152_, v___x_3153_);
lean_dec(v___x_3152_);
if (v___x_3154_ == 0)
{
lean_dec_ref(v_traceFile_3141_);
lean_dec_ref(v_trace_3131_);
lean_dec_ref(v___y_3086_);
lean_dec_ref(v_build_3084_);
v_a_3094_ = v_a_3150_;
goto v___jp_3093_;
}
else
{
lean_object* v___x_3155_; 
lean_inc_ref(v_file_3083_);
v___x_3155_ = l_Lake_buildAction___at___00Lake_buildFileUnlessUpToDate_x27_spec__1(v_build_3084_, v_file_3083_, v___y_3086_, v_trace_3131_, v_traceFile_3141_, v___x_3142_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v_a_3150_);
lean_dec_ref(v_trace_3131_);
if (lean_obj_tag(v___x_3155_) == 0)
{
lean_object* v_a_3156_; 
v_a_3156_ = lean_ctor_get(v___x_3155_, 1);
lean_inc(v_a_3156_);
lean_dec_ref_known(v___x_3155_, 2);
v_a_3094_ = v_a_3156_;
goto v___jp_3093_;
}
else
{
lean_object* v_a_3157_; lean_object* v_a_3158_; 
lean_dec_ref(v_file_3083_);
v_a_3157_ = lean_ctor_get(v___x_3155_, 0);
lean_inc(v_a_3157_);
v_a_3158_ = lean_ctor_get(v___x_3155_, 1);
lean_inc(v_a_3158_);
lean_dec_ref_known(v___x_3155_, 2);
v_a_3128_ = v_a_3157_;
v_a_3129_ = v_a_3158_;
goto v___jp_3127_;
}
}
}
else
{
lean_object* v_a_3159_; lean_object* v_a_3160_; 
lean_dec_ref(v_traceFile_3141_);
lean_dec_ref(v_trace_3131_);
lean_dec_ref(v___y_3086_);
lean_dec_ref(v_build_3084_);
lean_dec_ref(v_file_3083_);
v_a_3159_ = lean_ctor_get(v___x_3148_, 0);
lean_inc(v_a_3159_);
v_a_3160_ = lean_ctor_get(v___x_3148_, 1);
lean_inc(v_a_3160_);
lean_dec_ref_known(v___x_3148_, 2);
v_a_3128_ = v_a_3159_;
v_a_3129_ = v_a_3160_;
goto v___jp_3127_;
}
}
}
else
{
lean_object* v_a_3162_; lean_object* v_a_3163_; lean_object* v___x_3165_; 
lean_dec_ref(v_traceFile_3141_);
lean_dec_ref(v___y_3086_);
lean_dec_ref(v_build_3084_);
lean_dec_ref(v_file_3083_);
v_a_3162_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3162_);
v_a_3163_ = lean_ctor_get(v___x_3143_, 1);
lean_inc(v_a_3163_);
lean_dec_ref_known(v___x_3143_, 2);
if (v_isShared_3138_ == 0)
{
lean_ctor_set(v___x_3137_, 0, v_a_3163_);
v___x_3165_ = v___x_3137_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v_a_3163_);
lean_ctor_set(v_reuseFailAlloc_3166_, 1, v_trace_3131_);
lean_ctor_set(v_reuseFailAlloc_3166_, 2, v_buildTime_3135_);
lean_ctor_set_uint8(v_reuseFailAlloc_3166_, sizeof(void*)*3, v_action_3133_);
lean_ctor_set_uint8(v_reuseFailAlloc_3166_, sizeof(void*)*3 + 1, v_wantsRebuild_3134_);
v___x_3165_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
v_a_3128_ = v_a_3162_;
v_a_3129_ = v___x_3165_;
goto v___jp_3127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileUnlessUpToDate_x27___boxed(lean_object* v_file_3168_, lean_object* v_build_3169_, lean_object* v_text_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_){
_start:
{
uint8_t v_text_boxed_3178_; lean_object* v_res_3179_; 
v_text_boxed_3178_ = lean_unbox(v_text_3170_);
v_res_3179_ = l_Lake_buildFileUnlessUpToDate_x27(v_file_3168_, v_build_3169_, v_text_boxed_3178_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_);
lean_dec_ref(v___y_3175_);
lean_dec(v___y_3174_);
lean_dec(v___y_3173_);
lean_dec(v___y_3172_);
return v_res_3179_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(lean_object* v___y_3180_, lean_object* v_info_3181_, lean_object* v_depTrace_3182_, lean_object* v_depHash_3183_, lean_object* v_oldTrace_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
lean_object* v___x_3191_; 
v___x_3191_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___redArg(v_info_3181_, v_depTrace_3182_, v_depHash_3183_, v_oldTrace_3184_, v___y_3188_, v___y_3189_);
return v___x_3191_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0___boxed(lean_object* v___y_3192_, lean_object* v_info_3193_, lean_object* v_depTrace_3194_, lean_object* v_depHash_3195_, lean_object* v_oldTrace_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_){
_start:
{
lean_object* v_res_3203_; 
v_res_3203_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0_spec__0(v___y_3192_, v_info_3193_, v_depTrace_3194_, v_depHash_3195_, v_oldTrace_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v_oldTrace_3196_);
lean_dec(v_depHash_3195_);
lean_dec_ref(v_depTrace_3194_);
lean_dec_ref(v_info_3193_);
lean_dec_ref(v___y_3192_);
return v_res_3203_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0(lean_object* v___x_3204_, lean_object* v___x_3205_, lean_object* v_file_3206_, uint64_t v___x_3207_, lean_object* v___x_3208_, uint8_t v_useLocalFile_3209_, lean_object* v_____r_3210_){
_start:
{
lean_object* v___x_3212_; 
v___x_3212_ = l_IO_setAccessRights(v___x_3204_, v___x_3205_);
if (lean_obj_tag(v___x_3212_) == 0)
{
lean_object* v___x_3213_; 
lean_dec_ref_known(v___x_3212_, 1);
lean_inc_ref(v_file_3206_);
v___x_3213_ = l_Lake_writeFileHash(v_file_3206_, v___x_3207_);
if (lean_obj_tag(v___x_3213_) == 0)
{
lean_object* v___x_3214_; 
lean_dec_ref_known(v___x_3213_, 1);
v___x_3214_ = lean_io_metadata(v___x_3204_);
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v_a_3215_; lean_object* v___x_3217_; uint8_t v_isShared_3218_; uint8_t v_isSharedCheck_3227_; 
v_a_3215_ = lean_ctor_get(v___x_3214_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3214_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3217_ = v___x_3214_;
v_isShared_3218_ = v_isSharedCheck_3227_;
goto v_resetjp_3216_;
}
else
{
lean_inc(v_a_3215_);
lean_dec(v___x_3214_);
v___x_3217_ = lean_box(0);
v_isShared_3218_ = v_isSharedCheck_3227_;
goto v_resetjp_3216_;
}
v_resetjp_3216_:
{
lean_object* v_modified_3219_; lean_object* v___y_3221_; 
v_modified_3219_ = lean_ctor_get(v_a_3215_, 1);
lean_inc_ref(v_modified_3219_);
lean_dec(v_a_3215_);
if (v_useLocalFile_3209_ == 0)
{
v___y_3221_ = v___x_3204_;
goto v___jp_3220_;
}
else
{
lean_dec_ref(v___x_3204_);
lean_inc_ref(v_file_3206_);
v___y_3221_ = v_file_3206_;
goto v___jp_3220_;
}
v___jp_3220_:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3225_; 
v___x_3222_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3208_);
lean_ctor_set(v___x_3222_, 1, v___y_3221_);
lean_ctor_set(v___x_3222_, 2, v_file_3206_);
lean_ctor_set(v___x_3222_, 3, v_modified_3219_);
v___x_3223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3222_);
if (v_isShared_3218_ == 0)
{
lean_ctor_set(v___x_3217_, 0, v___x_3223_);
v___x_3225_ = v___x_3217_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v___x_3223_);
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
else
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3235_; 
lean_dec_ref(v___x_3208_);
lean_dec_ref(v_file_3206_);
lean_dec_ref(v___x_3204_);
v_a_3228_ = lean_ctor_get(v___x_3214_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3214_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3230_ = v___x_3214_;
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3214_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3233_; 
if (v_isShared_3231_ == 0)
{
v___x_3233_ = v___x_3230_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_a_3228_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
lean_dec_ref(v___x_3208_);
lean_dec_ref(v_file_3206_);
lean_dec_ref(v___x_3204_);
v_a_3236_ = lean_ctor_get(v___x_3213_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3213_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3213_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v___x_3213_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
else
{
lean_object* v_a_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3251_; 
lean_dec_ref(v___x_3208_);
lean_dec_ref(v_file_3206_);
lean_dec_ref(v___x_3204_);
v_a_3244_ = lean_ctor_get(v___x_3212_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3212_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3246_ = v___x_3212_;
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_a_3244_);
lean_dec(v___x_3212_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3249_; 
if (v_isShared_3247_ == 0)
{
v___x_3249_ = v___x_3246_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_a_3244_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___lam__0___boxed(lean_object* v___x_3252_, lean_object* v___x_3253_, lean_object* v_file_3254_, lean_object* v___x_3255_, lean_object* v___x_3256_, lean_object* v_useLocalFile_3257_, lean_object* v_____r_3258_, lean_object* v___y_3259_){
_start:
{
uint64_t v___x_6309__boxed_3260_; uint8_t v_useLocalFile_boxed_3261_; lean_object* v_res_3262_; 
v___x_6309__boxed_3260_ = lean_unbox_uint64(v___x_3255_);
lean_dec_ref(v___x_3255_);
v_useLocalFile_boxed_3261_ = lean_unbox(v_useLocalFile_3257_);
v_res_3262_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3252_, v___x_3253_, v_file_3254_, v___x_6309__boxed_3260_, v___x_3256_, v_useLocalFile_boxed_3261_, v_____r_3258_);
lean_dec_ref(v___x_3253_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact(lean_object* v_cache_3270_, lean_object* v_file_3271_, lean_object* v_ext_3272_, uint8_t v_text_3273_, uint8_t v_exe_3274_, uint8_t v_useLocalFile_3275_){
_start:
{
lean_object* v_a_3278_; lean_object* v___y_3285_; uint8_t v___x_3296_; 
v___x_3296_ = 1;
if (v_text_3273_ == 0)
{
lean_object* v___x_3297_; 
v___x_3297_ = l_IO_FS_readBinFile(v_file_3271_);
if (lean_obj_tag(v___x_3297_) == 0)
{
lean_object* v_a_3298_; uint64_t v___x_3299_; uint64_t v___x_3300_; uint64_t v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___y_3306_; lean_object* v___x_3327_; lean_object* v___x_3328_; uint8_t v___x_3329_; 
v_a_3298_ = lean_ctor_get(v___x_3297_, 0);
lean_inc(v_a_3298_);
lean_dec_ref_known(v___x_3297_, 1);
v___x_3299_ = l_Lake_Hash_nil;
v___x_3300_ = lean_byte_array_hash(v_a_3298_);
v___x_3301_ = lean_uint64_mix_hash(v___x_3299_, v___x_3300_);
lean_inc_ref(v_ext_3272_);
v___x_3302_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3302_, 0, v_ext_3272_);
lean_ctor_set_uint64(v___x_3302_, sizeof(void*)*1, v___x_3301_);
v___x_3303_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__1));
v___x_3304_ = l_System_FilePath_join(v_cache_3270_, v___x_3303_);
v___x_3327_ = lean_string_utf8_byte_size(v_ext_3272_);
v___x_3328_ = lean_unsigned_to_nat(0u);
v___x_3329_ = lean_nat_dec_eq(v___x_3327_, v___x_3328_);
if (v___x_3329_ == 0)
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; 
v___x_3330_ = l_Lake_lowerHexUInt64(v___x_3301_);
v___x_3331_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_3332_ = lean_string_append(v___x_3330_, v___x_3331_);
v___x_3333_ = lean_string_append(v___x_3332_, v_ext_3272_);
lean_dec_ref(v_ext_3272_);
v___y_3306_ = v___x_3333_;
goto v___jp_3305_;
}
else
{
lean_object* v___x_3334_; 
lean_dec_ref(v_ext_3272_);
v___x_3334_ = l_Lake_lowerHexUInt64(v___x_3301_);
v___y_3306_ = v___x_3334_;
goto v___jp_3305_;
}
v___jp_3305_:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3307_ = l_Lake_joinRelative(v___x_3304_, v___y_3306_);
v___x_3308_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_3308_, 0, v___x_3296_);
lean_ctor_set_uint8(v___x_3308_, 1, v_text_3273_);
lean_ctor_set_uint8(v___x_3308_, 2, v_exe_3274_);
lean_inc_ref_n(v___x_3308_, 2);
v___x_3309_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3308_);
lean_ctor_set(v___x_3309_, 1, v___x_3308_);
lean_ctor_set(v___x_3309_, 2, v___x_3308_);
v___x_3310_ = l_IO_setAccessRights(v_file_3271_, v___x_3309_);
if (lean_obj_tag(v___x_3310_) == 0)
{
uint8_t v___x_3311_; 
lean_dec_ref_known(v___x_3310_, 1);
v___x_3311_ = l_System_FilePath_pathExists(v___x_3307_);
if (v___x_3311_ == 0)
{
lean_object* v___x_3312_; 
lean_inc_ref(v___x_3307_);
v___x_3312_ = l_Lake_createParentDirs(v___x_3307_);
if (lean_obj_tag(v___x_3312_) == 0)
{
lean_object* v___x_3313_; 
lean_dec_ref_known(v___x_3312_, 1);
v___x_3313_ = lean_io_hard_link(v_file_3271_, v___x_3307_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v___x_3314_; lean_object* v___x_3315_; 
lean_dec_ref_known(v___x_3313_, 1);
lean_dec(v_a_3298_);
v___x_3314_ = lean_box(0);
v___x_3315_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3307_, v___x_3309_, v_file_3271_, v___x_3301_, v___x_3302_, v_useLocalFile_3275_, v___x_3314_);
lean_dec_ref_known(v___x_3309_, 3);
v___y_3285_ = v___x_3315_;
goto v___jp_3284_;
}
else
{
lean_object* v_a_3316_; 
v_a_3316_ = lean_ctor_get(v___x_3313_, 0);
lean_inc(v_a_3316_);
lean_dec_ref_known(v___x_3313_, 1);
if (lean_obj_tag(v_a_3316_) == 0)
{
lean_object* v___x_3317_; lean_object* v___x_3318_; 
lean_dec_ref_known(v_a_3316_, 2);
lean_dec(v_a_3298_);
v___x_3317_ = lean_box(0);
v___x_3318_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3307_, v___x_3309_, v_file_3271_, v___x_3301_, v___x_3302_, v_useLocalFile_3275_, v___x_3317_);
lean_dec_ref_known(v___x_3309_, 3);
v___y_3285_ = v___x_3318_;
goto v___jp_3284_;
}
else
{
lean_object* v___x_3319_; 
lean_dec(v_a_3316_);
v___x_3319_ = l_Lake_writeBinFileIfNew(v___x_3307_, v_a_3298_);
lean_dec(v_a_3298_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_object* v_a_3320_; lean_object* v___x_3321_; 
v_a_3320_ = lean_ctor_get(v___x_3319_, 0);
lean_inc(v_a_3320_);
lean_dec_ref_known(v___x_3319_, 1);
v___x_3321_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3307_, v___x_3309_, v_file_3271_, v___x_3301_, v___x_3302_, v_useLocalFile_3275_, v_a_3320_);
lean_dec_ref_known(v___x_3309_, 3);
v___y_3285_ = v___x_3321_;
goto v___jp_3284_;
}
else
{
lean_object* v_a_3322_; 
lean_dec_ref_known(v___x_3309_, 3);
lean_dec_ref(v___x_3307_);
lean_dec_ref_known(v___x_3302_, 1);
lean_dec_ref(v_file_3271_);
v_a_3322_ = lean_ctor_get(v___x_3319_, 0);
lean_inc(v_a_3322_);
lean_dec_ref_known(v___x_3319_, 1);
v_a_3278_ = v_a_3322_;
goto v___jp_3277_;
}
}
}
}
else
{
lean_object* v_a_3323_; 
lean_dec_ref_known(v___x_3309_, 3);
lean_dec_ref(v___x_3307_);
lean_dec_ref_known(v___x_3302_, 1);
lean_dec(v_a_3298_);
lean_dec_ref(v_file_3271_);
v_a_3323_ = lean_ctor_get(v___x_3312_, 0);
lean_inc(v_a_3323_);
lean_dec_ref_known(v___x_3312_, 1);
v_a_3278_ = v_a_3323_;
goto v___jp_3277_;
}
}
else
{
lean_object* v___x_3324_; lean_object* v___x_3325_; 
lean_dec(v_a_3298_);
v___x_3324_ = lean_box(0);
v___x_3325_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3307_, v___x_3309_, v_file_3271_, v___x_3301_, v___x_3302_, v_useLocalFile_3275_, v___x_3324_);
lean_dec_ref_known(v___x_3309_, 3);
v___y_3285_ = v___x_3325_;
goto v___jp_3284_;
}
}
else
{
lean_object* v_a_3326_; 
lean_dec_ref_known(v___x_3309_, 3);
lean_dec_ref(v___x_3307_);
lean_dec_ref_known(v___x_3302_, 1);
lean_dec(v_a_3298_);
lean_dec_ref(v_file_3271_);
v_a_3326_ = lean_ctor_get(v___x_3310_, 0);
lean_inc(v_a_3326_);
lean_dec_ref_known(v___x_3310_, 1);
v_a_3278_ = v_a_3326_;
goto v___jp_3277_;
}
}
}
else
{
lean_object* v_a_3335_; 
lean_dec_ref(v_ext_3272_);
lean_dec_ref(v_file_3271_);
lean_dec_ref(v_cache_3270_);
v_a_3335_ = lean_ctor_get(v___x_3297_, 0);
lean_inc(v_a_3335_);
lean_dec_ref_known(v___x_3297_, 1);
v_a_3278_ = v_a_3335_;
goto v___jp_3277_;
}
}
else
{
lean_object* v___x_3336_; 
v___x_3336_ = l_IO_FS_readFile(v_file_3271_);
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_object* v_a_3337_; lean_object* v___x_3338_; uint64_t v___x_3339_; uint64_t v___x_3340_; uint64_t v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___y_3346_; lean_object* v___x_3360_; lean_object* v___x_3361_; uint8_t v___x_3362_; 
v_a_3337_ = lean_ctor_get(v___x_3336_, 0);
lean_inc(v_a_3337_);
lean_dec_ref_known(v___x_3336_, 1);
v___x_3338_ = l_String_crlfToLf(v_a_3337_);
lean_dec(v_a_3337_);
v___x_3339_ = l_Lake_Hash_nil;
v___x_3340_ = lean_string_hash(v___x_3338_);
v___x_3341_ = lean_uint64_mix_hash(v___x_3339_, v___x_3340_);
lean_inc_ref(v_ext_3272_);
v___x_3342_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3342_, 0, v_ext_3272_);
lean_ctor_set_uint64(v___x_3342_, sizeof(void*)*1, v___x_3341_);
v___x_3343_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__1));
v___x_3344_ = l_System_FilePath_join(v_cache_3270_, v___x_3343_);
v___x_3360_ = lean_string_utf8_byte_size(v_ext_3272_);
v___x_3361_ = lean_unsigned_to_nat(0u);
v___x_3362_ = lean_nat_dec_eq(v___x_3360_, v___x_3361_);
if (v___x_3362_ == 0)
{
lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3363_ = l_Lake_lowerHexUInt64(v___x_3341_);
v___x_3364_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_3365_ = lean_string_append(v___x_3363_, v___x_3364_);
v___x_3366_ = lean_string_append(v___x_3365_, v_ext_3272_);
lean_dec_ref(v_ext_3272_);
v___y_3346_ = v___x_3366_;
goto v___jp_3345_;
}
else
{
lean_object* v___x_3367_; 
lean_dec_ref(v_ext_3272_);
v___x_3367_ = l_Lake_lowerHexUInt64(v___x_3341_);
v___y_3346_ = v___x_3367_;
goto v___jp_3345_;
}
v___jp_3345_:
{
lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___x_3347_ = l_Lake_joinRelative(v___x_3344_, v___y_3346_);
v___x_3348_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__3));
v___x_3349_ = l_IO_setAccessRights(v_file_3271_, v___x_3348_);
if (lean_obj_tag(v___x_3349_) == 0)
{
uint8_t v___x_3350_; 
lean_dec_ref_known(v___x_3349_, 1);
v___x_3350_ = l_System_FilePath_pathExists(v___x_3347_);
if (v___x_3350_ == 0)
{
lean_object* v___x_3351_; 
lean_inc_ref(v___x_3347_);
v___x_3351_ = l_Lake_createParentDirs(v___x_3347_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v___x_3352_; 
lean_dec_ref_known(v___x_3351_, 1);
v___x_3352_ = l_Lake_writeFileIfNew(v___x_3347_, v___x_3338_);
lean_dec_ref(v___x_3338_);
if (lean_obj_tag(v___x_3352_) == 0)
{
lean_object* v_a_3353_; lean_object* v___x_3354_; 
v_a_3353_ = lean_ctor_get(v___x_3352_, 0);
lean_inc(v_a_3353_);
lean_dec_ref_known(v___x_3352_, 1);
v___x_3354_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3347_, v___x_3348_, v_file_3271_, v___x_3341_, v___x_3342_, v_useLocalFile_3275_, v_a_3353_);
v___y_3285_ = v___x_3354_;
goto v___jp_3284_;
}
else
{
lean_object* v_a_3355_; 
lean_dec_ref(v___x_3347_);
lean_dec_ref_known(v___x_3342_, 1);
lean_dec_ref(v_file_3271_);
v_a_3355_ = lean_ctor_get(v___x_3352_, 0);
lean_inc(v_a_3355_);
lean_dec_ref_known(v___x_3352_, 1);
v_a_3278_ = v_a_3355_;
goto v___jp_3277_;
}
}
else
{
lean_object* v_a_3356_; 
lean_dec_ref(v___x_3347_);
lean_dec_ref_known(v___x_3342_, 1);
lean_dec_ref(v___x_3338_);
lean_dec_ref(v_file_3271_);
v_a_3356_ = lean_ctor_get(v___x_3351_, 0);
lean_inc(v_a_3356_);
lean_dec_ref_known(v___x_3351_, 1);
v_a_3278_ = v_a_3356_;
goto v___jp_3277_;
}
}
else
{
lean_object* v___x_3357_; lean_object* v___x_3358_; 
lean_dec_ref(v___x_3338_);
v___x_3357_ = lean_box(0);
v___x_3358_ = l_Lake_Cache_saveArtifact___lam__0(v___x_3347_, v___x_3348_, v_file_3271_, v___x_3341_, v___x_3342_, v_useLocalFile_3275_, v___x_3357_);
v___y_3285_ = v___x_3358_;
goto v___jp_3284_;
}
}
else
{
lean_object* v_a_3359_; 
lean_dec_ref(v___x_3347_);
lean_dec_ref_known(v___x_3342_, 1);
lean_dec_ref(v___x_3338_);
lean_dec_ref(v_file_3271_);
v_a_3359_ = lean_ctor_get(v___x_3349_, 0);
lean_inc(v_a_3359_);
lean_dec_ref_known(v___x_3349_, 1);
v_a_3278_ = v_a_3359_;
goto v___jp_3277_;
}
}
}
else
{
lean_object* v_a_3368_; 
lean_dec_ref(v_ext_3272_);
lean_dec_ref(v_file_3271_);
lean_dec_ref(v_cache_3270_);
v_a_3368_ = lean_ctor_get(v___x_3336_, 0);
lean_inc(v_a_3368_);
lean_dec_ref_known(v___x_3336_, 1);
v_a_3278_ = v_a_3368_;
goto v___jp_3277_;
}
}
v___jp_3277_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3279_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__0));
v___x_3280_ = lean_io_error_to_string(v_a_3278_);
v___x_3281_ = lean_string_append(v___x_3279_, v___x_3280_);
lean_dec_ref(v___x_3280_);
v___x_3282_ = lean_mk_io_user_error(v___x_3281_);
v___x_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
return v___x_3283_;
}
v___jp_3284_:
{
if (lean_obj_tag(v___y_3285_) == 0)
{
lean_object* v_a_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3294_; 
v_a_3286_ = lean_ctor_get(v___y_3285_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___y_3285_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3288_ = v___y_3285_;
v_isShared_3289_ = v_isSharedCheck_3294_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_a_3286_);
lean_dec(v___y_3285_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3294_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v_a_3290_; lean_object* v___x_3292_; 
v_a_3290_ = lean_ctor_get(v_a_3286_, 0);
lean_inc(v_a_3290_);
lean_dec(v_a_3286_);
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 0, v_a_3290_);
v___x_3292_ = v___x_3288_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3290_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
else
{
lean_object* v_a_3295_; 
v_a_3295_ = lean_ctor_get(v___y_3285_, 0);
lean_inc(v_a_3295_);
lean_dec_ref_known(v___y_3285_, 1);
v_a_3278_ = v_a_3295_;
goto v___jp_3277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Cache_saveArtifact___boxed(lean_object* v_cache_3369_, lean_object* v_file_3370_, lean_object* v_ext_3371_, lean_object* v_text_3372_, lean_object* v_exe_3373_, lean_object* v_useLocalFile_3374_, lean_object* v___y_3375_){
_start:
{
uint8_t v_text_boxed_3376_; uint8_t v_exe_boxed_3377_; uint8_t v_useLocalFile_boxed_3378_; lean_object* v_res_3379_; 
v_text_boxed_3376_ = lean_unbox(v_text_3372_);
v_exe_boxed_3377_ = lean_unbox(v_exe_3373_);
v_useLocalFile_boxed_3378_ = lean_unbox(v_useLocalFile_3374_);
v_res_3379_ = l_Lake_Cache_saveArtifact(v_cache_3369_, v_file_3370_, v_ext_3371_, v_text_boxed_3376_, v_exe_boxed_3377_, v_useLocalFile_boxed_3378_);
return v_res_3379_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0(lean_object* v_x_3380_){
_start:
{
lean_object* v_lakeCache_3381_; 
v_lakeCache_3381_ = lean_ctor_get(v_x_3380_, 2);
lean_inc_ref(v_lakeCache_3381_);
return v_lakeCache_3381_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__0___boxed(lean_object* v_x_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l_Lake_cacheArtifact___redArg___lam__0(v_x_3382_);
lean_dec_ref(v_x_3382_);
return v_res_3383_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1(lean_object* v_file_3384_, lean_object* v_ext_3385_, uint8_t v_text_3386_, uint8_t v_exe_3387_, uint8_t v_useLocalFile_3388_, lean_object* v_inst_3389_, lean_object* v_____do__lift_3390_){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3391_ = lean_box(v_text_3386_);
v___x_3392_ = lean_box(v_exe_3387_);
v___x_3393_ = lean_box(v_useLocalFile_3388_);
v___x_3394_ = lean_alloc_closure((void*)(l_Lake_Cache_saveArtifact___boxed), 7, 6);
lean_closure_set(v___x_3394_, 0, v_____do__lift_3390_);
lean_closure_set(v___x_3394_, 1, v_file_3384_);
lean_closure_set(v___x_3394_, 2, v_ext_3385_);
lean_closure_set(v___x_3394_, 3, v___x_3391_);
lean_closure_set(v___x_3394_, 4, v___x_3392_);
lean_closure_set(v___x_3394_, 5, v___x_3393_);
v___x_3395_ = lean_apply_2(v_inst_3389_, lean_box(0), v___x_3394_);
return v___x_3395_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___lam__1___boxed(lean_object* v_file_3396_, lean_object* v_ext_3397_, lean_object* v_text_3398_, lean_object* v_exe_3399_, lean_object* v_useLocalFile_3400_, lean_object* v_inst_3401_, lean_object* v_____do__lift_3402_){
_start:
{
uint8_t v_text_boxed_3403_; uint8_t v_exe_boxed_3404_; uint8_t v_useLocalFile_boxed_3405_; lean_object* v_res_3406_; 
v_text_boxed_3403_ = lean_unbox(v_text_3398_);
v_exe_boxed_3404_ = lean_unbox(v_exe_3399_);
v_useLocalFile_boxed_3405_ = lean_unbox(v_useLocalFile_3400_);
v_res_3406_ = l_Lake_cacheArtifact___redArg___lam__1(v_file_3396_, v_ext_3397_, v_text_boxed_3403_, v_exe_boxed_3404_, v_useLocalFile_boxed_3405_, v_inst_3401_, v_____do__lift_3402_);
return v_res_3406_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg(lean_object* v_inst_3408_, lean_object* v_inst_3409_, lean_object* v_inst_3410_, lean_object* v_file_3411_, lean_object* v_ext_3412_, uint8_t v_text_3413_, uint8_t v_exe_3414_, uint8_t v_useLocalFile_3415_){
_start:
{
lean_object* v_toApplicative_3416_; lean_object* v_toFunctor_3417_; lean_object* v_toBind_3418_; lean_object* v_map_3419_; lean_object* v___f_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___f_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v_toApplicative_3416_ = lean_ctor_get(v_inst_3410_, 0);
v_toFunctor_3417_ = lean_ctor_get(v_toApplicative_3416_, 0);
lean_inc_ref(v_toFunctor_3417_);
v_toBind_3418_ = lean_ctor_get(v_inst_3410_, 1);
lean_inc(v_toBind_3418_);
lean_dec_ref(v_inst_3410_);
v_map_3419_ = lean_ctor_get(v_toFunctor_3417_, 0);
lean_inc(v_map_3419_);
lean_dec_ref(v_toFunctor_3417_);
v___f_3420_ = ((lean_object*)(l_Lake_cacheArtifact___redArg___closed__0));
v___x_3421_ = lean_box(v_text_3413_);
v___x_3422_ = lean_box(v_exe_3414_);
v___x_3423_ = lean_box(v_useLocalFile_3415_);
v___f_3424_ = lean_alloc_closure((void*)(l_Lake_cacheArtifact___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_3424_, 0, v_file_3411_);
lean_closure_set(v___f_3424_, 1, v_ext_3412_);
lean_closure_set(v___f_3424_, 2, v___x_3421_);
lean_closure_set(v___f_3424_, 3, v___x_3422_);
lean_closure_set(v___f_3424_, 4, v___x_3423_);
lean_closure_set(v___f_3424_, 5, v_inst_3409_);
v___x_3425_ = lean_apply_4(v_map_3419_, lean_box(0), lean_box(0), v___f_3420_, v_inst_3408_);
v___x_3426_ = lean_apply_4(v_toBind_3418_, lean_box(0), lean_box(0), v___x_3425_, v___f_3424_);
return v___x_3426_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___redArg___boxed(lean_object* v_inst_3427_, lean_object* v_inst_3428_, lean_object* v_inst_3429_, lean_object* v_file_3430_, lean_object* v_ext_3431_, lean_object* v_text_3432_, lean_object* v_exe_3433_, lean_object* v_useLocalFile_3434_){
_start:
{
uint8_t v_text_boxed_3435_; uint8_t v_exe_boxed_3436_; uint8_t v_useLocalFile_boxed_3437_; lean_object* v_res_3438_; 
v_text_boxed_3435_ = lean_unbox(v_text_3432_);
v_exe_boxed_3436_ = lean_unbox(v_exe_3433_);
v_useLocalFile_boxed_3437_ = lean_unbox(v_useLocalFile_3434_);
v_res_3438_ = l_Lake_cacheArtifact___redArg(v_inst_3427_, v_inst_3428_, v_inst_3429_, v_file_3430_, v_ext_3431_, v_text_boxed_3435_, v_exe_boxed_3436_, v_useLocalFile_boxed_3437_);
return v_res_3438_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact(lean_object* v_m_3439_, lean_object* v_inst_3440_, lean_object* v_inst_3441_, lean_object* v_inst_3442_, lean_object* v_file_3443_, lean_object* v_ext_3444_, uint8_t v_text_3445_, uint8_t v_exe_3446_, uint8_t v_useLocalFile_3447_){
_start:
{
lean_object* v_toApplicative_3448_; lean_object* v_toFunctor_3449_; lean_object* v_toBind_3450_; lean_object* v_map_3451_; lean_object* v___f_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___f_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
v_toApplicative_3448_ = lean_ctor_get(v_inst_3442_, 0);
v_toFunctor_3449_ = lean_ctor_get(v_toApplicative_3448_, 0);
lean_inc_ref(v_toFunctor_3449_);
v_toBind_3450_ = lean_ctor_get(v_inst_3442_, 1);
lean_inc(v_toBind_3450_);
lean_dec_ref(v_inst_3442_);
v_map_3451_ = lean_ctor_get(v_toFunctor_3449_, 0);
lean_inc(v_map_3451_);
lean_dec_ref(v_toFunctor_3449_);
v___f_3452_ = ((lean_object*)(l_Lake_cacheArtifact___redArg___closed__0));
v___x_3453_ = lean_box(v_text_3445_);
v___x_3454_ = lean_box(v_exe_3446_);
v___x_3455_ = lean_box(v_useLocalFile_3447_);
v___f_3456_ = lean_alloc_closure((void*)(l_Lake_cacheArtifact___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_3456_, 0, v_file_3443_);
lean_closure_set(v___f_3456_, 1, v_ext_3444_);
lean_closure_set(v___f_3456_, 2, v___x_3453_);
lean_closure_set(v___f_3456_, 3, v___x_3454_);
lean_closure_set(v___f_3456_, 4, v___x_3455_);
lean_closure_set(v___f_3456_, 5, v_inst_3441_);
v___x_3457_ = lean_apply_4(v_map_3451_, lean_box(0), lean_box(0), v___f_3452_, v_inst_3440_);
v___x_3458_ = lean_apply_4(v_toBind_3450_, lean_box(0), lean_box(0), v___x_3457_, v___f_3456_);
return v___x_3458_;
}
}
LEAN_EXPORT lean_object* l_Lake_cacheArtifact___boxed(lean_object* v_m_3459_, lean_object* v_inst_3460_, lean_object* v_inst_3461_, lean_object* v_inst_3462_, lean_object* v_file_3463_, lean_object* v_ext_3464_, lean_object* v_text_3465_, lean_object* v_exe_3466_, lean_object* v_useLocalFile_3467_){
_start:
{
uint8_t v_text_boxed_3468_; uint8_t v_exe_boxed_3469_; uint8_t v_useLocalFile_boxed_3470_; lean_object* v_res_3471_; 
v_text_boxed_3468_ = lean_unbox(v_text_3465_);
v_exe_boxed_3469_ = lean_unbox(v_exe_3466_);
v_useLocalFile_boxed_3470_ = lean_unbox(v_useLocalFile_3467_);
v_res_3471_ = l_Lake_cacheArtifact(v_m_3459_, v_inst_3460_, v_inst_3461_, v_inst_3462_, v_file_3463_, v_ext_3464_, v_text_boxed_3468_, v_exe_boxed_3469_, v_useLocalFile_boxed_3470_);
return v_res_3471_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(lean_object* v_x1_3473_, lean_object* v_x2_3474_){
_start:
{
lean_object* v_message_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; 
v_message_3475_ = lean_ctor_get(v_x2_3474_, 0);
v___x_3476_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0));
v___x_3477_ = lean_string_append(v_x1_3473_, v___x_3476_);
v___x_3478_ = lean_string_append(v___x_3477_, v_message_3475_);
return v___x_3478_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___boxed(lean_object* v_x1_3479_, lean_object* v_x2_3480_){
_start:
{
lean_object* v_res_3481_; 
v_res_3481_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0(v_x1_3479_, v_x2_3480_);
lean_dec_ref(v_x2_3480_);
return v_res_3481_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(lean_object* v_inst_3485_, uint64_t v_inputHash_3486_, lean_object* v_pkg_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_){
_start:
{
lean_object* v_r_3496_; lean_object* v___y_3497_; uint8_t v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3502_; lean_object* v___y_3503_; uint8_t v___y_3504_; lean_object* v___y_3505_; lean_object* v_toContext_3511_; lean_object* v_log_3512_; uint8_t v_action_3513_; uint8_t v_wantsRebuild_3514_; lean_object* v_trace_3515_; lean_object* v_buildTime_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3582_; 
v_toContext_3511_ = lean_ctor_get(v___y_3492_, 1);
v_log_3512_ = lean_ctor_get(v___y_3493_, 0);
v_action_3513_ = lean_ctor_get_uint8(v___y_3493_, sizeof(void*)*3);
v_wantsRebuild_3514_ = lean_ctor_get_uint8(v___y_3493_, sizeof(void*)*3 + 1);
v_trace_3515_ = lean_ctor_get(v___y_3493_, 1);
v_buildTime_3516_ = lean_ctor_get(v___y_3493_, 2);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___y_3493_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3518_ = v___y_3493_;
v_isShared_3519_ = v_isSharedCheck_3582_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_buildTime_3516_);
lean_inc(v_trace_3515_);
lean_inc(v_log_3512_);
lean_dec(v___y_3493_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3582_;
goto v_resetjp_3517_;
}
v___jp_3495_:
{
lean_object* v___x_3498_; 
v___x_3498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3498_, 0, v_r_3496_);
lean_ctor_set(v___x_3498_, 1, v___y_3497_);
return v___x_3498_;
}
v___jp_3499_:
{
uint8_t v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3506_ = 0;
v___x_3507_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3507_, 0, v___y_3505_);
lean_ctor_set_uint8(v___x_3507_, sizeof(void*)*1, v___x_3506_);
v___x_3508_ = lean_array_push(v___y_3501_, v___x_3507_);
v___x_3509_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3509_, 0, v___x_3508_);
lean_ctor_set(v___x_3509_, 1, v___y_3503_);
lean_ctor_set(v___x_3509_, 2, v___y_3502_);
lean_ctor_set_uint8(v___x_3509_, sizeof(void*)*3, v___y_3504_);
lean_ctor_set_uint8(v___x_3509_, sizeof(void*)*3 + 1, v___y_3500_);
v___x_3510_ = lean_box(0);
v_r_3496_ = v___x_3510_;
v___y_3497_ = v___x_3509_;
goto v___jp_3495_;
}
v_resetjp_3517_:
{
lean_object* v_lakeCache_3520_; lean_object* v___f_3521_; lean_object* v_a_3523_; lean_object* v_log_3524_; uint8_t v_action_3525_; uint8_t v_wantsRebuild_3526_; lean_object* v_trace_3527_; lean_object* v_buildTime_3528_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v_lakeCache_3520_ = lean_ctor_get(v_toContext_3511_, 2);
v___f_3521_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__0));
v___x_3554_ = l_Lake_Package_cacheScope(v_pkg_3487_);
lean_inc_ref(v_lakeCache_3520_);
v___x_3555_ = l_Lake_Cache_readOutputs_x3f(v_lakeCache_3520_, v___x_3554_, v_inputHash_3486_, v_log_3512_);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v_a_3556_; lean_object* v_a_3557_; lean_object* v___x_3559_; 
v_a_3556_ = lean_ctor_get(v___x_3555_, 0);
lean_inc(v_a_3556_);
v_a_3557_ = lean_ctor_get(v___x_3555_, 1);
lean_inc(v_a_3557_);
lean_dec_ref_known(v___x_3555_, 2);
if (v_isShared_3519_ == 0)
{
lean_ctor_set(v___x_3518_, 0, v_a_3557_);
v___x_3559_ = v___x_3518_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v_a_3557_);
lean_ctor_set(v_reuseFailAlloc_3579_, 1, v_trace_3515_);
lean_ctor_set(v_reuseFailAlloc_3579_, 2, v_buildTime_3516_);
lean_ctor_set_uint8(v_reuseFailAlloc_3579_, sizeof(void*)*3, v_action_3513_);
lean_ctor_set_uint8(v_reuseFailAlloc_3579_, sizeof(void*)*3 + 1, v_wantsRebuild_3514_);
v___x_3559_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
if (lean_obj_tag(v_a_3556_) == 0)
{
lean_object* v___x_3560_; 
lean_dec_ref(v___y_3488_);
lean_dec_ref(v_inst_3485_);
v___x_3560_ = lean_box(0);
v_r_3496_ = v___x_3560_;
v___y_3497_ = v___x_3559_;
goto v___jp_3495_;
}
else
{
lean_object* v_val_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3578_; 
v_val_3561_ = lean_ctor_get(v_a_3556_, 0);
v_isSharedCheck_3578_ = !lean_is_exclusive(v_a_3556_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3563_ = v_a_3556_;
v_isShared_3564_ = v_isSharedCheck_3578_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_val_3561_);
lean_dec(v_a_3556_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3578_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___x_3565_; 
lean_inc_ref(v___y_3492_);
lean_inc(v___y_3491_);
lean_inc(v___y_3490_);
lean_inc(v___y_3489_);
v___x_3565_ = lean_apply_8(v_inst_3485_, v_val_3561_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_, v___x_3559_, lean_box(0));
if (lean_obj_tag(v___x_3565_) == 0)
{
lean_object* v_a_3566_; lean_object* v_a_3567_; lean_object* v___x_3569_; 
v_a_3566_ = lean_ctor_get(v___x_3565_, 0);
lean_inc(v_a_3566_);
v_a_3567_ = lean_ctor_get(v___x_3565_, 1);
lean_inc(v_a_3567_);
lean_dec_ref_known(v___x_3565_, 2);
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 0, v_a_3566_);
v___x_3569_ = v___x_3563_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v_a_3566_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
v_r_3496_ = v___x_3569_;
v___y_3497_ = v_a_3567_;
goto v___jp_3495_;
}
}
else
{
lean_object* v_a_3571_; lean_object* v_a_3572_; lean_object* v_log_3573_; uint8_t v_action_3574_; uint8_t v_wantsRebuild_3575_; lean_object* v_trace_3576_; lean_object* v_buildTime_3577_; 
lean_del_object(v___x_3563_);
v_a_3571_ = lean_ctor_get(v___x_3565_, 1);
lean_inc(v_a_3571_);
v_a_3572_ = lean_ctor_get(v___x_3565_, 0);
lean_inc(v_a_3572_);
lean_dec_ref_known(v___x_3565_, 2);
v_log_3573_ = lean_ctor_get(v_a_3571_, 0);
lean_inc_ref(v_log_3573_);
v_action_3574_ = lean_ctor_get_uint8(v_a_3571_, sizeof(void*)*3);
v_wantsRebuild_3575_ = lean_ctor_get_uint8(v_a_3571_, sizeof(void*)*3 + 1);
v_trace_3576_ = lean_ctor_get(v_a_3571_, 1);
lean_inc_ref(v_trace_3576_);
v_buildTime_3577_ = lean_ctor_get(v_a_3571_, 2);
lean_inc(v_buildTime_3577_);
lean_dec(v_a_3571_);
v_a_3523_ = v_a_3572_;
v_log_3524_ = v_log_3573_;
v_action_3525_ = v_action_3574_;
v_wantsRebuild_3526_ = v_wantsRebuild_3575_;
v_trace_3527_ = v_trace_3576_;
v_buildTime_3528_ = v_buildTime_3577_;
goto v___jp_3522_;
}
}
}
}
}
else
{
lean_object* v_a_3580_; lean_object* v_a_3581_; 
lean_del_object(v___x_3518_);
lean_dec_ref(v___y_3488_);
lean_dec_ref(v_inst_3485_);
v_a_3580_ = lean_ctor_get(v___x_3555_, 0);
lean_inc(v_a_3580_);
v_a_3581_ = lean_ctor_get(v___x_3555_, 1);
lean_inc(v_a_3581_);
lean_dec_ref_known(v___x_3555_, 2);
v_a_3523_ = v_a_3580_;
v_log_3524_ = v_a_3581_;
v_action_3525_ = v_action_3513_;
v_wantsRebuild_3526_ = v_wantsRebuild_3514_;
v_trace_3527_ = v_trace_3515_;
v_buildTime_3528_ = v_buildTime_3516_;
goto v___jp_3522_;
}
v___jp_3522_:
{
lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; uint8_t v___x_3546_; 
v___x_3529_ = lean_array_get_size(v_log_3524_);
lean_inc(v_a_3523_);
v___x_3530_ = l_Array_extract___redArg(v_log_3524_, v_a_3523_, v___x_3529_);
v___x_3531_ = l_Array_shrink___redArg(v_log_3524_, v_a_3523_);
lean_dec(v_a_3523_);
v___x_3532_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1));
v___x_3533_ = l_Lake_lowerHexUInt64(v_inputHash_3486_);
v___x_3534_ = lean_unsigned_to_nat(7u);
v___x_3535_ = lean_unsigned_to_nat(0u);
v___x_3536_ = lean_string_utf8_byte_size(v___x_3533_);
lean_inc_ref(v___x_3533_);
v___x_3537_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3533_);
lean_ctor_set(v___x_3537_, 1, v___x_3535_);
lean_ctor_set(v___x_3537_, 2, v___x_3536_);
v___x_3538_ = l_String_Slice_Pos_nextn(v___x_3537_, v___x_3535_, v___x_3534_);
lean_dec_ref_known(v___x_3537_, 3);
v___x_3539_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3533_);
lean_ctor_set(v___x_3539_, 1, v___x_3535_);
lean_ctor_set(v___x_3539_, 2, v___x_3538_);
v___x_3540_ = l_String_Slice_toString(v___x_3539_);
lean_dec_ref_known(v___x_3539_, 3);
v___x_3541_ = lean_string_append(v___x_3532_, v___x_3540_);
lean_dec_ref(v___x_3540_);
v___x_3542_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2));
v___x_3543_ = lean_string_append(v___x_3541_, v___x_3542_);
v___x_3544_ = lean_array_get_size(v___x_3530_);
v___x_3545_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__9));
v___x_3546_ = lean_nat_dec_lt(v___x_3535_, v___x_3544_);
if (v___x_3546_ == 0)
{
lean_dec_ref(v___x_3530_);
v___y_3500_ = v_wantsRebuild_3526_;
v___y_3501_ = v___x_3531_;
v___y_3502_ = v_buildTime_3528_;
v___y_3503_ = v_trace_3527_;
v___y_3504_ = v_action_3525_;
v___y_3505_ = v___x_3543_;
goto v___jp_3499_;
}
else
{
uint8_t v___x_3547_; 
v___x_3547_ = lean_nat_dec_le(v___x_3544_, v___x_3544_);
if (v___x_3547_ == 0)
{
if (v___x_3546_ == 0)
{
lean_dec_ref(v___x_3530_);
v___y_3500_ = v_wantsRebuild_3526_;
v___y_3501_ = v___x_3531_;
v___y_3502_ = v_buildTime_3528_;
v___y_3503_ = v_trace_3527_;
v___y_3504_ = v_action_3525_;
v___y_3505_ = v___x_3543_;
goto v___jp_3499_;
}
else
{
size_t v___x_3548_; size_t v___x_3549_; lean_object* v___x_3550_; 
v___x_3548_ = ((size_t)0ULL);
v___x_3549_ = lean_usize_of_nat(v___x_3544_);
v___x_3550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3545_, v___f_3521_, v___x_3530_, v___x_3548_, v___x_3549_, v___x_3543_);
v___y_3500_ = v_wantsRebuild_3526_;
v___y_3501_ = v___x_3531_;
v___y_3502_ = v_buildTime_3528_;
v___y_3503_ = v_trace_3527_;
v___y_3504_ = v_action_3525_;
v___y_3505_ = v___x_3550_;
goto v___jp_3499_;
}
}
else
{
size_t v___x_3551_; size_t v___x_3552_; lean_object* v___x_3553_; 
v___x_3551_ = ((size_t)0ULL);
v___x_3552_ = lean_usize_of_nat(v___x_3544_);
v___x_3553_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3545_, v___f_3521_, v___x_3530_, v___x_3551_, v___x_3552_, v___x_3543_);
v___y_3500_ = v_wantsRebuild_3526_;
v___y_3501_ = v___x_3531_;
v___y_3502_ = v_buildTime_3528_;
v___y_3503_ = v_trace_3527_;
v___y_3504_ = v_action_3525_;
v___y_3505_ = v___x_3553_;
goto v___jp_3499_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___boxed(lean_object* v_inst_3583_, lean_object* v_inputHash_3584_, lean_object* v_pkg_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_){
_start:
{
uint64_t v_inputHash_boxed_3593_; lean_object* v_res_3594_; 
v_inputHash_boxed_3593_ = lean_unbox_uint64(v_inputHash_3584_);
lean_dec_ref(v_inputHash_3584_);
v_res_3594_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3583_, v_inputHash_boxed_3593_, v_pkg_3585_, v___y_3586_, v___y_3587_, v___y_3588_, v___y_3589_, v___y_3590_, v___y_3591_);
lean_dec_ref(v___y_3590_);
lean_dec(v___y_3589_);
lean_dec(v___y_3588_);
lean_dec(v___y_3587_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(lean_object* v_00_u03b1_3595_, lean_object* v_inst_3596_, uint64_t v_inputHash_3597_, lean_object* v_pkg_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_){
_start:
{
lean_object* v___x_3606_; 
v___x_3606_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3596_, v_inputHash_3597_, v_pkg_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_);
return v___x_3606_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___boxed(lean_object* v_00_u03b1_3607_, lean_object* v_inst_3608_, lean_object* v_inputHash_3609_, lean_object* v_pkg_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_){
_start:
{
uint64_t v_inputHash_boxed_3618_; lean_object* v_res_3619_; 
v_inputHash_boxed_3618_ = lean_unbox_uint64(v_inputHash_3609_);
lean_dec_ref(v_inputHash_3609_);
v_res_3619_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f(v_00_u03b1_3607_, v_inst_3608_, v_inputHash_boxed_3618_, v_pkg_3610_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_);
lean_dec_ref(v___y_3615_);
lean_dec(v___y_3614_);
lean_dec(v___y_3613_);
lean_dec(v___y_3612_);
return v_res_3619_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(lean_object* v_a_3620_, lean_object* v_____r_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_){
_start:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; 
v___x_3629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3629_, 0, v_a_3620_);
v___x_3630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3629_);
v___x_3631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3631_, 0, v___x_3630_);
lean_ctor_set(v___x_3631_, 1, v___y_3627_);
return v___x_3631_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0___boxed(lean_object* v_a_3632_, lean_object* v_____r_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_){
_start:
{
lean_object* v_res_3641_; 
v_res_3641_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3632_, v_____r_3633_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_, v___y_3639_);
lean_dec_ref(v___y_3638_);
lean_dec(v___y_3637_);
lean_dec(v___y_3636_);
lean_dec(v___y_3635_);
lean_dec_ref(v___y_3634_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg(lean_object* v_inst_3643_, uint64_t v_inputHash_3644_, lean_object* v_savedTrace_3645_, lean_object* v_pkg_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_){
_start:
{
lean_object* v___y_3655_; lean_object* v_a_3659_; lean_object* v_a_3660_; lean_object* v___y_3675_; 
if (lean_obj_tag(v_savedTrace_3645_) == 2)
{
lean_object* v_data_3690_; uint64_t v_depHash_3691_; lean_object* v_outputs_x3f_3692_; uint8_t v___x_3693_; 
v_data_3690_ = lean_ctor_get(v_savedTrace_3645_, 0);
lean_inc_ref(v_data_3690_);
lean_dec_ref_known(v_savedTrace_3645_, 1);
v_depHash_3691_ = lean_ctor_get_uint64(v_data_3690_, sizeof(void*)*3);
v_outputs_x3f_3692_ = lean_ctor_get(v_data_3690_, 1);
lean_inc(v_outputs_x3f_3692_);
lean_dec_ref(v_data_3690_);
v___x_3693_ = lean_uint64_dec_eq(v_depHash_3691_, v_inputHash_3644_);
if (v___x_3693_ == 0)
{
lean_dec(v_outputs_x3f_3692_);
lean_dec_ref(v___y_3647_);
lean_dec_ref(v_pkg_3646_);
lean_dec_ref(v_inst_3643_);
v___y_3655_ = v___y_3652_;
goto v___jp_3654_;
}
else
{
if (lean_obj_tag(v_outputs_x3f_3692_) == 1)
{
lean_object* v_val_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; 
v_val_3694_ = lean_ctor_get(v_outputs_x3f_3692_, 0);
lean_inc_n(v_val_3694_, 2);
lean_dec_ref_known(v_outputs_x3f_3692_, 1);
v___x_3695_ = lean_box(0);
v___x_3696_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3696_, 0, v_val_3694_);
lean_ctor_set(v___x_3696_, 1, v___x_3695_);
lean_ctor_set(v___x_3696_, 2, v___x_3695_);
lean_inc_ref(v___y_3651_);
lean_inc(v___y_3650_);
lean_inc(v___y_3649_);
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
v___x_3697_ = lean_apply_8(v_inst_3643_, v___x_3696_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_, lean_box(0));
if (lean_obj_tag(v___x_3697_) == 0)
{
lean_object* v_config_3698_; lean_object* v_a_3699_; lean_object* v_a_3700_; lean_object* v_enableArtifactCache_x3f_3701_; lean_object* v_a_3703_; uint8_t v_a_3707_; lean_object* v_a_3708_; 
v_config_3698_ = lean_ctor_get(v_pkg_3646_, 6);
v_a_3699_ = lean_ctor_get(v___x_3697_, 0);
lean_inc(v_a_3699_);
v_a_3700_ = lean_ctor_get(v___x_3697_, 1);
lean_inc(v_a_3700_);
lean_dec_ref_known(v___x_3697_, 2);
v_enableArtifactCache_x3f_3701_ = lean_ctor_get(v_config_3698_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_3701_) == 0)
{
lean_object* v_toContext_3740_; lean_object* v_lakeEnv_3741_; lean_object* v_enableArtifactCache_x3f_3742_; 
v_toContext_3740_ = lean_ctor_get(v___y_3651_, 1);
v_lakeEnv_3741_ = lean_ctor_get(v_toContext_3740_, 0);
v_enableArtifactCache_x3f_3742_ = lean_ctor_get(v_lakeEnv_3741_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_3742_) == 0)
{
lean_object* v_packages_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v_config_3746_; lean_object* v_enableArtifactCache_x3f_3747_; 
v_packages_3743_ = lean_ctor_get(v_toContext_3740_, 4);
v___x_3744_ = lean_unsigned_to_nat(0u);
v___x_3745_ = lean_array_fget_borrowed(v_packages_3743_, v___x_3744_);
v_config_3746_ = lean_ctor_get(v___x_3745_, 6);
v_enableArtifactCache_x3f_3747_ = lean_ctor_get(v_config_3746_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_3747_) == 0)
{
lean_dec(v_val_3694_);
lean_dec_ref(v_pkg_3646_);
v_a_3703_ = v_a_3700_;
goto v___jp_3702_;
}
else
{
lean_object* v_val_3748_; uint8_t v___x_3749_; 
v_val_3748_ = lean_ctor_get(v_enableArtifactCache_x3f_3747_, 0);
v___x_3749_ = lean_unbox(v_val_3748_);
v_a_3707_ = v___x_3749_;
v_a_3708_ = v_a_3700_;
goto v___jp_3706_;
}
}
else
{
lean_object* v_val_3750_; uint8_t v___x_3751_; 
v_val_3750_ = lean_ctor_get(v_enableArtifactCache_x3f_3742_, 0);
v___x_3751_ = lean_unbox(v_val_3750_);
v_a_3707_ = v___x_3751_;
v_a_3708_ = v_a_3700_;
goto v___jp_3706_;
}
}
else
{
lean_object* v_val_3752_; uint8_t v___x_3753_; 
v_val_3752_ = lean_ctor_get(v_enableArtifactCache_x3f_3701_, 0);
v___x_3753_ = lean_unbox(v_val_3752_);
v_a_3707_ = v___x_3753_;
v_a_3708_ = v_a_3700_;
goto v___jp_3706_;
}
v___jp_3702_:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; 
v___x_3704_ = lean_box(0);
v___x_3705_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3699_, v___x_3704_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v_a_3703_);
lean_dec_ref(v___y_3647_);
v___y_3675_ = v___x_3705_;
goto v___jp_3674_;
}
v___jp_3706_:
{
if (v_a_3707_ == 0)
{
lean_dec(v_val_3694_);
lean_dec_ref(v_pkg_3646_);
v_a_3703_ = v_a_3708_;
goto v___jp_3702_;
}
else
{
lean_object* v_toContext_3709_; lean_object* v_log_3710_; uint8_t v_action_3711_; uint8_t v_wantsRebuild_3712_; lean_object* v_trace_3713_; lean_object* v_buildTime_3714_; lean_object* v_lakeCache_3715_; lean_object* v___x_3716_; uint8_t v___x_3717_; lean_object* v___x_3718_; 
v_toContext_3709_ = lean_ctor_get(v___y_3651_, 1);
v_log_3710_ = lean_ctor_get(v_a_3708_, 0);
v_action_3711_ = lean_ctor_get_uint8(v_a_3708_, sizeof(void*)*3);
v_wantsRebuild_3712_ = lean_ctor_get_uint8(v_a_3708_, sizeof(void*)*3 + 1);
v_trace_3713_ = lean_ctor_get(v_a_3708_, 1);
v_buildTime_3714_ = lean_ctor_get(v_a_3708_, 2);
v_lakeCache_3715_ = lean_ctor_get(v_toContext_3709_, 2);
v___x_3716_ = l_Lake_Package_cacheScope(v_pkg_3646_);
v___x_3717_ = 0;
lean_inc_ref(v_lakeCache_3715_);
v___x_3718_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_3715_, v___x_3716_, v_inputHash_3644_, v_val_3694_, v___x_3695_, v___x_3695_, v___x_3717_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_object* v___x_3719_; lean_object* v___x_3720_; 
lean_dec_ref_known(v___x_3718_, 1);
v___x_3719_ = lean_box(0);
v___x_3720_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3699_, v___x_3719_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v_a_3708_);
lean_dec_ref(v___y_3647_);
v___y_3675_ = v___x_3720_;
goto v___jp_3674_;
}
else
{
lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3736_; 
lean_inc(v_buildTime_3714_);
lean_inc_ref(v_trace_3713_);
lean_inc_ref(v_log_3710_);
v_isSharedCheck_3736_ = !lean_is_exclusive(v_a_3708_);
if (v_isSharedCheck_3736_ == 0)
{
lean_object* v_unused_3737_; lean_object* v_unused_3738_; lean_object* v_unused_3739_; 
v_unused_3737_ = lean_ctor_get(v_a_3708_, 2);
lean_dec(v_unused_3737_);
v_unused_3738_ = lean_ctor_get(v_a_3708_, 1);
lean_dec(v_unused_3738_);
v_unused_3739_ = lean_ctor_get(v_a_3708_, 0);
lean_dec(v_unused_3739_);
v___x_3722_ = v_a_3708_;
v_isShared_3723_ = v_isSharedCheck_3736_;
goto v_resetjp_3721_;
}
else
{
lean_dec(v_a_3708_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3736_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
lean_object* v_a_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; uint8_t v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3733_; 
v_a_3724_ = lean_ctor_get(v___x_3718_, 0);
lean_inc(v_a_3724_);
lean_dec_ref_known(v___x_3718_, 1);
v___x_3725_ = ((lean_object*)(l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0));
v___x_3726_ = lean_io_error_to_string(v_a_3724_);
v___x_3727_ = lean_string_append(v___x_3725_, v___x_3726_);
lean_dec_ref(v___x_3726_);
v___x_3728_ = 2;
v___x_3729_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3729_, 0, v___x_3727_);
lean_ctor_set_uint8(v___x_3729_, sizeof(void*)*1, v___x_3728_);
v___x_3730_ = lean_box(0);
v___x_3731_ = lean_array_push(v_log_3710_, v___x_3729_);
if (v_isShared_3723_ == 0)
{
lean_ctor_set(v___x_3722_, 0, v___x_3731_);
v___x_3733_ = v___x_3722_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v___x_3731_);
lean_ctor_set(v_reuseFailAlloc_3735_, 1, v_trace_3713_);
lean_ctor_set(v_reuseFailAlloc_3735_, 2, v_buildTime_3714_);
lean_ctor_set_uint8(v_reuseFailAlloc_3735_, sizeof(void*)*3, v_action_3711_);
lean_ctor_set_uint8(v_reuseFailAlloc_3735_, sizeof(void*)*3 + 1, v_wantsRebuild_3712_);
v___x_3733_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
lean_object* v___x_3734_; 
v___x_3734_ = l_Lake_getArtifactsUsingTrace_x3f___redArg___lam__0(v_a_3699_, v___x_3730_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___x_3733_);
lean_dec_ref(v___y_3647_);
v___y_3675_ = v___x_3734_;
goto v___jp_3674_;
}
}
}
}
}
}
else
{
lean_object* v_a_3754_; lean_object* v_a_3755_; 
lean_dec(v_val_3694_);
lean_dec_ref(v___y_3647_);
lean_dec_ref(v_pkg_3646_);
v_a_3754_ = lean_ctor_get(v___x_3697_, 0);
lean_inc(v_a_3754_);
v_a_3755_ = lean_ctor_get(v___x_3697_, 1);
lean_inc(v_a_3755_);
lean_dec_ref_known(v___x_3697_, 2);
v_a_3659_ = v_a_3754_;
v_a_3660_ = v_a_3755_;
goto v___jp_3658_;
}
}
else
{
lean_dec(v_outputs_x3f_3692_);
lean_dec_ref(v___y_3647_);
lean_dec_ref(v_pkg_3646_);
lean_dec_ref(v_inst_3643_);
v___y_3655_ = v___y_3652_;
goto v___jp_3654_;
}
}
}
else
{
lean_dec_ref(v___y_3647_);
lean_dec_ref(v_pkg_3646_);
lean_dec(v_savedTrace_3645_);
lean_dec_ref(v_inst_3643_);
v___y_3655_ = v___y_3652_;
goto v___jp_3654_;
}
v___jp_3654_:
{
lean_object* v___x_3656_; lean_object* v___x_3657_; 
v___x_3656_ = lean_box(0);
v___x_3657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3657_, 0, v___x_3656_);
lean_ctor_set(v___x_3657_, 1, v___y_3655_);
return v___x_3657_;
}
v___jp_3658_:
{
lean_object* v_log_3661_; uint8_t v_action_3662_; uint8_t v_wantsRebuild_3663_; lean_object* v_trace_3664_; lean_object* v_buildTime_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3673_; 
v_log_3661_ = lean_ctor_get(v_a_3660_, 0);
v_action_3662_ = lean_ctor_get_uint8(v_a_3660_, sizeof(void*)*3);
v_wantsRebuild_3663_ = lean_ctor_get_uint8(v_a_3660_, sizeof(void*)*3 + 1);
v_trace_3664_ = lean_ctor_get(v_a_3660_, 1);
v_buildTime_3665_ = lean_ctor_get(v_a_3660_, 2);
v_isSharedCheck_3673_ = !lean_is_exclusive(v_a_3660_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3667_ = v_a_3660_;
v_isShared_3668_ = v_isSharedCheck_3673_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_buildTime_3665_);
lean_inc(v_trace_3664_);
lean_inc(v_log_3661_);
lean_dec(v_a_3660_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3673_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3669_; lean_object* v___x_3671_; 
v___x_3669_ = l_Array_shrink___redArg(v_log_3661_, v_a_3659_);
lean_dec(v_a_3659_);
if (v_isShared_3668_ == 0)
{
lean_ctor_set(v___x_3667_, 0, v___x_3669_);
v___x_3671_ = v___x_3667_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v___x_3669_);
lean_ctor_set(v_reuseFailAlloc_3672_, 1, v_trace_3664_);
lean_ctor_set(v_reuseFailAlloc_3672_, 2, v_buildTime_3665_);
lean_ctor_set_uint8(v_reuseFailAlloc_3672_, sizeof(void*)*3, v_action_3662_);
lean_ctor_set_uint8(v_reuseFailAlloc_3672_, sizeof(void*)*3 + 1, v_wantsRebuild_3663_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
v___y_3655_ = v___x_3671_;
goto v___jp_3654_;
}
}
}
v___jp_3674_:
{
if (lean_obj_tag(v___y_3675_) == 0)
{
lean_object* v_a_3676_; 
v_a_3676_ = lean_ctor_get(v___y_3675_, 0);
if (lean_obj_tag(v_a_3676_) == 0)
{
lean_object* v_a_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3685_; 
lean_inc_ref(v_a_3676_);
v_a_3677_ = lean_ctor_get(v___y_3675_, 1);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___y_3675_);
if (v_isSharedCheck_3685_ == 0)
{
lean_object* v_unused_3686_; 
v_unused_3686_ = lean_ctor_get(v___y_3675_, 0);
lean_dec(v_unused_3686_);
v___x_3679_ = v___y_3675_;
v_isShared_3680_ = v_isSharedCheck_3685_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_a_3677_);
lean_dec(v___y_3675_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3685_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v_a_3681_; lean_object* v___x_3683_; 
v_a_3681_ = lean_ctor_get(v_a_3676_, 0);
lean_inc(v_a_3681_);
lean_dec_ref_known(v_a_3676_, 1);
if (v_isShared_3680_ == 0)
{
lean_ctor_set(v___x_3679_, 0, v_a_3681_);
v___x_3683_ = v___x_3679_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v_a_3681_);
lean_ctor_set(v_reuseFailAlloc_3684_, 1, v_a_3677_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
else
{
lean_object* v_a_3687_; 
v_a_3687_ = lean_ctor_get(v___y_3675_, 1);
lean_inc(v_a_3687_);
lean_dec_ref_known(v___y_3675_, 2);
v___y_3655_ = v_a_3687_;
goto v___jp_3654_;
}
}
else
{
lean_object* v_a_3688_; lean_object* v_a_3689_; 
v_a_3688_ = lean_ctor_get(v___y_3675_, 0);
lean_inc(v_a_3688_);
v_a_3689_ = lean_ctor_get(v___y_3675_, 1);
lean_inc(v_a_3689_);
lean_dec_ref_known(v___y_3675_, 2);
v_a_3659_ = v_a_3688_;
v_a_3660_ = v_a_3689_;
goto v___jp_3658_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___redArg___boxed(lean_object* v_inst_3756_, lean_object* v_inputHash_3757_, lean_object* v_savedTrace_3758_, lean_object* v_pkg_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_){
_start:
{
uint64_t v_inputHash_boxed_3767_; lean_object* v_res_3768_; 
v_inputHash_boxed_3767_ = lean_unbox_uint64(v_inputHash_3757_);
lean_dec_ref(v_inputHash_3757_);
v_res_3768_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3756_, v_inputHash_boxed_3767_, v_savedTrace_3758_, v_pkg_3759_, v___y_3760_, v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_, v___y_3765_);
lean_dec_ref(v___y_3764_);
lean_dec(v___y_3763_);
lean_dec(v___y_3762_);
lean_dec(v___y_3761_);
return v_res_3768_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f(lean_object* v_00_u03b1_3769_, lean_object* v_inst_3770_, uint64_t v_inputHash_3771_, lean_object* v_savedTrace_3772_, lean_object* v_pkg_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_){
_start:
{
lean_object* v___x_3781_; 
v___x_3781_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3770_, v_inputHash_3771_, v_savedTrace_3772_, v_pkg_3773_, v___y_3774_, v___y_3775_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___boxed(lean_object* v_00_u03b1_3782_, lean_object* v_inst_3783_, lean_object* v_inputHash_3784_, lean_object* v_savedTrace_3785_, lean_object* v_pkg_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
uint64_t v_inputHash_boxed_3794_; lean_object* v_res_3795_; 
v_inputHash_boxed_3794_ = lean_unbox_uint64(v_inputHash_3784_);
lean_dec_ref(v_inputHash_3784_);
v_res_3795_ = l_Lake_getArtifactsUsingTrace_x3f(v_00_u03b1_3782_, v_inst_3783_, v_inputHash_boxed_3794_, v_savedTrace_3785_, v_pkg_3786_, v___y_3787_, v___y_3788_, v___y_3789_, v___y_3790_, v___y_3791_, v___y_3792_);
lean_dec_ref(v___y_3791_);
lean_dec(v___y_3790_);
lean_dec(v___y_3789_);
lean_dec(v___y_3788_);
return v_res_3795_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg(lean_object* v_inst_3796_, uint64_t v_inputHash_3797_, lean_object* v_savedTrace_3798_, lean_object* v_pkg_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_){
_start:
{
lean_object* v_a_3808_; lean_object* v___y_3809_; lean_object* v___x_3812_; lean_object* v_a_3813_; 
lean_inc_ref(v___y_3800_);
lean_inc_ref(v_pkg_3799_);
lean_inc_ref(v_inst_3796_);
v___x_3812_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3796_, v_inputHash_3797_, v_savedTrace_3798_, v_pkg_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_);
v_a_3813_ = lean_ctor_get(v___x_3812_, 0);
lean_inc(v_a_3813_);
if (lean_obj_tag(v_a_3813_) == 1)
{
lean_object* v_a_3814_; lean_object* v_val_3815_; 
lean_dec_ref(v___y_3800_);
lean_dec_ref(v_pkg_3799_);
lean_dec_ref(v_inst_3796_);
v_a_3814_ = lean_ctor_get(v___x_3812_, 1);
lean_inc(v_a_3814_);
lean_dec_ref(v___x_3812_);
v_val_3815_ = lean_ctor_get(v_a_3813_, 0);
lean_inc(v_val_3815_);
lean_dec_ref_known(v_a_3813_, 1);
v_a_3808_ = v_val_3815_;
v___y_3809_ = v_a_3814_;
goto v___jp_3807_;
}
else
{
lean_object* v_a_3816_; lean_object* v___x_3817_; lean_object* v_a_3818_; 
lean_dec(v_a_3813_);
v_a_3816_ = lean_ctor_get(v___x_3812_, 1);
lean_inc(v_a_3816_);
lean_dec_ref(v___x_3812_);
v___x_3817_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3796_, v_inputHash_3797_, v_pkg_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v_a_3816_);
v_a_3818_ = lean_ctor_get(v___x_3817_, 0);
lean_inc(v_a_3818_);
if (lean_obj_tag(v_a_3818_) == 1)
{
lean_object* v_a_3819_; lean_object* v_val_3820_; 
v_a_3819_ = lean_ctor_get(v___x_3817_, 1);
lean_inc(v_a_3819_);
lean_dec_ref(v___x_3817_);
v_val_3820_ = lean_ctor_get(v_a_3818_, 0);
lean_inc(v_val_3820_);
lean_dec_ref_known(v_a_3818_, 1);
v_a_3808_ = v_val_3820_;
v___y_3809_ = v_a_3819_;
goto v___jp_3807_;
}
else
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3829_; 
lean_dec(v_a_3818_);
v_a_3821_ = lean_ctor_get(v___x_3817_, 1);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3829_ == 0)
{
lean_object* v_unused_3830_; 
v_unused_3830_ = lean_ctor_get(v___x_3817_, 0);
lean_dec(v_unused_3830_);
v___x_3823_ = v___x_3817_;
v_isShared_3824_ = v_isSharedCheck_3829_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3817_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3829_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3825_; lean_object* v___x_3827_; 
v___x_3825_ = lean_box(0);
if (v_isShared_3824_ == 0)
{
lean_ctor_set(v___x_3823_, 0, v___x_3825_);
v___x_3827_ = v___x_3823_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v___x_3825_);
lean_ctor_set(v_reuseFailAlloc_3828_, 1, v_a_3821_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
v___jp_3807_:
{
lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3810_, 0, v_a_3808_);
v___x_3811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
lean_ctor_set(v___x_3811_, 1, v___y_3809_);
return v___x_3811_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___redArg___boxed(lean_object* v_inst_3831_, lean_object* v_inputHash_3832_, lean_object* v_savedTrace_3833_, lean_object* v_pkg_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_){
_start:
{
uint64_t v_inputHash_boxed_3842_; lean_object* v_res_3843_; 
v_inputHash_boxed_3842_ = lean_unbox_uint64(v_inputHash_3832_);
lean_dec_ref(v_inputHash_3832_);
v_res_3843_ = l_Lake_getArtifacts_x3f___redArg(v_inst_3831_, v_inputHash_boxed_3842_, v_savedTrace_3833_, v_pkg_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_);
lean_dec_ref(v___y_3839_);
lean_dec(v___y_3838_);
lean_dec(v___y_3837_);
lean_dec(v___y_3836_);
return v_res_3843_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f(lean_object* v_00_u03b1_3844_, lean_object* v_inst_3845_, uint64_t v_inputHash_3846_, lean_object* v_savedTrace_3847_, lean_object* v_pkg_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_){
_start:
{
lean_object* v_a_3857_; lean_object* v___y_3858_; lean_object* v___x_3861_; lean_object* v_a_3862_; 
lean_inc_ref(v___y_3849_);
lean_inc_ref(v_pkg_3848_);
lean_inc_ref(v_inst_3845_);
v___x_3861_ = l_Lake_getArtifactsUsingTrace_x3f___redArg(v_inst_3845_, v_inputHash_3846_, v_savedTrace_3847_, v_pkg_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_);
v_a_3862_ = lean_ctor_get(v___x_3861_, 0);
lean_inc(v_a_3862_);
if (lean_obj_tag(v_a_3862_) == 1)
{
lean_object* v_a_3863_; lean_object* v_val_3864_; 
lean_dec_ref(v___y_3849_);
lean_dec_ref(v_pkg_3848_);
lean_dec_ref(v_inst_3845_);
v_a_3863_ = lean_ctor_get(v___x_3861_, 1);
lean_inc(v_a_3863_);
lean_dec_ref(v___x_3861_);
v_val_3864_ = lean_ctor_get(v_a_3862_, 0);
lean_inc(v_val_3864_);
lean_dec_ref_known(v_a_3862_, 1);
v_a_3857_ = v_val_3864_;
v___y_3858_ = v_a_3863_;
goto v___jp_3856_;
}
else
{
lean_object* v_a_3865_; lean_object* v___x_3866_; lean_object* v_a_3867_; 
lean_dec(v_a_3862_);
v_a_3865_ = lean_ctor_get(v___x_3861_, 1);
lean_inc(v_a_3865_);
lean_dec_ref(v___x_3861_);
v___x_3866_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg(v_inst_3845_, v_inputHash_3846_, v_pkg_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v_a_3865_);
v_a_3867_ = lean_ctor_get(v___x_3866_, 0);
lean_inc(v_a_3867_);
if (lean_obj_tag(v_a_3867_) == 1)
{
lean_object* v_a_3868_; lean_object* v_val_3869_; 
v_a_3868_ = lean_ctor_get(v___x_3866_, 1);
lean_inc(v_a_3868_);
lean_dec_ref(v___x_3866_);
v_val_3869_ = lean_ctor_get(v_a_3867_, 0);
lean_inc(v_val_3869_);
lean_dec_ref_known(v_a_3867_, 1);
v_a_3857_ = v_val_3869_;
v___y_3858_ = v_a_3868_;
goto v___jp_3856_;
}
else
{
lean_object* v_a_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3878_; 
lean_dec(v_a_3867_);
v_a_3870_ = lean_ctor_get(v___x_3866_, 1);
v_isSharedCheck_3878_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3878_ == 0)
{
lean_object* v_unused_3879_; 
v_unused_3879_ = lean_ctor_get(v___x_3866_, 0);
lean_dec(v_unused_3879_);
v___x_3872_ = v___x_3866_;
v_isShared_3873_ = v_isSharedCheck_3878_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_a_3870_);
lean_dec(v___x_3866_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3878_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3874_; lean_object* v___x_3876_; 
v___x_3874_ = lean_box(0);
if (v_isShared_3873_ == 0)
{
lean_ctor_set(v___x_3872_, 0, v___x_3874_);
v___x_3876_ = v___x_3872_;
goto v_reusejp_3875_;
}
else
{
lean_object* v_reuseFailAlloc_3877_; 
v_reuseFailAlloc_3877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3877_, 0, v___x_3874_);
lean_ctor_set(v_reuseFailAlloc_3877_, 1, v_a_3870_);
v___x_3876_ = v_reuseFailAlloc_3877_;
goto v_reusejp_3875_;
}
v_reusejp_3875_:
{
return v___x_3876_;
}
}
}
}
v___jp_3856_:
{
lean_object* v___x_3859_; lean_object* v___x_3860_; 
v___x_3859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3859_, 0, v_a_3857_);
v___x_3860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3859_);
lean_ctor_set(v___x_3860_, 1, v___y_3858_);
return v___x_3860_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifacts_x3f___boxed(lean_object* v_00_u03b1_3880_, lean_object* v_inst_3881_, lean_object* v_inputHash_3882_, lean_object* v_savedTrace_3883_, lean_object* v_pkg_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_){
_start:
{
uint64_t v_inputHash_boxed_3892_; lean_object* v_res_3893_; 
v_inputHash_boxed_3892_ = lean_unbox_uint64(v_inputHash_3882_);
lean_dec_ref(v_inputHash_3882_);
v_res_3893_ = l_Lake_getArtifacts_x3f(v_00_u03b1_3880_, v_inst_3881_, v_inputHash_boxed_3892_, v_savedTrace_3883_, v_pkg_3884_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_);
lean_dec_ref(v___y_3889_);
lean_dec(v___y_3888_);
lean_dec(v___y_3887_);
lean_dec(v___y_3886_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0(lean_object* v_descr_3894_, lean_object* v___x_3895_, lean_object* v_mtime_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_){
_start:
{
lean_object* v___x_3904_; lean_object* v___x_3905_; 
lean_inc_ref(v___x_3895_);
v___x_3904_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3904_, 0, v_descr_3894_);
lean_ctor_set(v___x_3904_, 1, v___x_3895_);
lean_ctor_set(v___x_3904_, 2, v___x_3895_);
lean_ctor_set(v___x_3904_, 3, v_mtime_3896_);
v___x_3905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3905_, 0, v___x_3904_);
lean_ctor_set(v___x_3905_, 1, v___y_3902_);
return v___x_3905_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__0___boxed(lean_object* v_descr_3906_, lean_object* v___x_3907_, lean_object* v_mtime_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Lake_resolveArtifact___lam__0(v_descr_3906_, v___x_3907_, v_mtime_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
lean_dec_ref(v___y_3913_);
lean_dec(v___y_3912_);
lean_dec(v___y_3911_);
lean_dec(v___y_3910_);
lean_dec_ref(v___y_3909_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1(lean_object* v___x_3918_, lean_object* v___f_3919_, lean_object* v_____r_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_){
_start:
{
lean_object* v_log_3928_; uint8_t v_action_3929_; uint8_t v_wantsRebuild_3930_; lean_object* v_trace_3931_; lean_object* v_buildTime_3932_; lean_object* v___x_3933_; 
v_log_3928_ = lean_ctor_get(v___y_3926_, 0);
v_action_3929_ = lean_ctor_get_uint8(v___y_3926_, sizeof(void*)*3);
v_wantsRebuild_3930_ = lean_ctor_get_uint8(v___y_3926_, sizeof(void*)*3 + 1);
v_trace_3931_ = lean_ctor_get(v___y_3926_, 1);
v_buildTime_3932_ = lean_ctor_get(v___y_3926_, 2);
v___x_3933_ = lean_io_metadata(v___x_3918_);
if (lean_obj_tag(v___x_3933_) == 0)
{
lean_object* v_a_3934_; lean_object* v_modified_3935_; lean_object* v___x_3936_; 
v_a_3934_ = lean_ctor_get(v___x_3933_, 0);
lean_inc(v_a_3934_);
lean_dec_ref_known(v___x_3933_, 1);
v_modified_3935_ = lean_ctor_get(v_a_3934_, 1);
lean_inc_ref(v_modified_3935_);
lean_dec(v_a_3934_);
lean_inc_ref(v___y_3925_);
lean_inc(v___y_3924_);
lean_inc(v___y_3923_);
lean_inc(v___y_3922_);
v___x_3936_ = lean_apply_8(v___f_3919_, v_modified_3935_, v___y_3921_, v___y_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_, lean_box(0));
return v___x_3936_;
}
else
{
lean_object* v___x_3938_; uint8_t v_isShared_3939_; uint8_t v_isSharedCheck_3952_; 
lean_inc(v_buildTime_3932_);
lean_inc_ref(v_trace_3931_);
lean_inc_ref(v_log_3928_);
lean_dec_ref(v___y_3921_);
lean_dec_ref(v___f_3919_);
v_isSharedCheck_3952_ = !lean_is_exclusive(v___y_3926_);
if (v_isSharedCheck_3952_ == 0)
{
lean_object* v_unused_3953_; lean_object* v_unused_3954_; lean_object* v_unused_3955_; 
v_unused_3953_ = lean_ctor_get(v___y_3926_, 2);
lean_dec(v_unused_3953_);
v_unused_3954_ = lean_ctor_get(v___y_3926_, 1);
lean_dec(v_unused_3954_);
v_unused_3955_ = lean_ctor_get(v___y_3926_, 0);
lean_dec(v_unused_3955_);
v___x_3938_ = v___y_3926_;
v_isShared_3939_ = v_isSharedCheck_3952_;
goto v_resetjp_3937_;
}
else
{
lean_dec(v___y_3926_);
v___x_3938_ = lean_box(0);
v_isShared_3939_ = v_isSharedCheck_3952_;
goto v_resetjp_3937_;
}
v_resetjp_3937_:
{
lean_object* v_a_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; uint8_t v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3949_; 
v_a_3940_ = lean_ctor_get(v___x_3933_, 0);
lean_inc(v_a_3940_);
lean_dec_ref_known(v___x_3933_, 1);
v___x_3941_ = ((lean_object*)(l_Lake_resolveArtifact___lam__1___closed__0));
v___x_3942_ = lean_io_error_to_string(v_a_3940_);
v___x_3943_ = lean_string_append(v___x_3941_, v___x_3942_);
lean_dec_ref(v___x_3942_);
v___x_3944_ = 3;
v___x_3945_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3945_, 0, v___x_3943_);
lean_ctor_set_uint8(v___x_3945_, sizeof(void*)*1, v___x_3944_);
v___x_3946_ = lean_array_get_size(v_log_3928_);
v___x_3947_ = lean_array_push(v_log_3928_, v___x_3945_);
if (v_isShared_3939_ == 0)
{
lean_ctor_set(v___x_3938_, 0, v___x_3947_);
v___x_3949_ = v___x_3938_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v___x_3947_);
lean_ctor_set(v_reuseFailAlloc_3951_, 1, v_trace_3931_);
lean_ctor_set(v_reuseFailAlloc_3951_, 2, v_buildTime_3932_);
lean_ctor_set_uint8(v_reuseFailAlloc_3951_, sizeof(void*)*3, v_action_3929_);
lean_ctor_set_uint8(v_reuseFailAlloc_3951_, sizeof(void*)*3 + 1, v_wantsRebuild_3930_);
v___x_3949_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
lean_object* v___x_3950_; 
v___x_3950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3946_);
lean_ctor_set(v___x_3950_, 1, v___x_3949_);
return v___x_3950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___lam__1___boxed(lean_object* v___x_3956_, lean_object* v___f_3957_, lean_object* v_____r_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l_Lake_resolveArtifact___lam__1(v___x_3956_, v___f_3957_, v_____r_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_);
lean_dec_ref(v___y_3963_);
lean_dec(v___y_3962_);
lean_dec(v___y_3961_);
lean_dec(v___y_3960_);
lean_dec_ref(v___x_3956_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact(lean_object* v_descr_3978_, lean_object* v_service_x3f_3979_, lean_object* v_scope_x3f_3980_, uint8_t v_exe_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v___y_3990_; lean_object* v_a_3991_; lean_object* v___y_3994_; lean_object* v___y_3995_; lean_object* v_toContext_3997_; lean_object* v_log_3998_; uint8_t v_action_3999_; uint8_t v_wantsRebuild_4000_; lean_object* v_trace_4001_; lean_object* v_buildTime_4002_; lean_object* v_lakeConfig_4003_; lean_object* v_lakeCache_4004_; uint64_t v_hash_4005_; lean_object* v_ext_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___y_4010_; lean_object* v___x_4108_; lean_object* v___x_4109_; uint8_t v___x_4110_; 
v_toContext_3997_ = lean_ctor_get(v___y_3986_, 1);
v_log_3998_ = lean_ctor_get(v___y_3987_, 0);
v_action_3999_ = lean_ctor_get_uint8(v___y_3987_, sizeof(void*)*3);
v_wantsRebuild_4000_ = lean_ctor_get_uint8(v___y_3987_, sizeof(void*)*3 + 1);
v_trace_4001_ = lean_ctor_get(v___y_3987_, 1);
v_buildTime_4002_ = lean_ctor_get(v___y_3987_, 2);
v_lakeConfig_4003_ = lean_ctor_get(v_toContext_3997_, 1);
v_lakeCache_4004_ = lean_ctor_get(v_toContext_3997_, 2);
v_hash_4005_ = lean_ctor_get_uint64(v_descr_3978_, sizeof(void*)*1);
v_ext_4006_ = lean_ctor_get(v_descr_3978_, 0);
v___x_4007_ = ((lean_object*)(l_Lake_Cache_saveArtifact___closed__1));
lean_inc_ref(v_lakeCache_4004_);
v___x_4008_ = l_System_FilePath_join(v_lakeCache_4004_, v___x_4007_);
v___x_4108_ = lean_string_utf8_byte_size(v_ext_4006_);
v___x_4109_ = lean_unsigned_to_nat(0u);
v___x_4110_ = lean_nat_dec_eq(v___x_4108_, v___x_4109_);
if (v___x_4110_ == 0)
{
lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; 
v___x_4111_ = l_Lake_lowerHexUInt64(v_hash_4005_);
v___x_4112_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_4113_ = lean_string_append(v___x_4111_, v___x_4112_);
v___x_4114_ = lean_string_append(v___x_4113_, v_ext_4006_);
v___y_4010_ = v___x_4114_;
goto v___jp_4009_;
}
else
{
lean_object* v___x_4115_; 
v___x_4115_ = l_Lake_lowerHexUInt64(v_hash_4005_);
v___y_4010_ = v___x_4115_;
goto v___jp_4009_;
}
v___jp_3989_:
{
lean_object* v___x_3992_; 
v___x_3992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3992_, 0, v___y_3990_);
lean_ctor_set(v___x_3992_, 1, v_a_3991_);
return v___x_3992_;
}
v___jp_3993_:
{
if (lean_obj_tag(v___y_3995_) == 0)
{
lean_dec(v___y_3994_);
return v___y_3995_;
}
else
{
lean_object* v_a_3996_; 
v_a_3996_ = lean_ctor_get(v___y_3995_, 1);
lean_inc(v_a_3996_);
lean_dec_ref_known(v___y_3995_, 2);
v___y_3990_ = v___y_3994_;
v_a_3991_ = v_a_3996_;
goto v___jp_3989_;
}
}
v___jp_4009_:
{
lean_object* v___x_4011_; lean_object* v___f_4012_; lean_object* v___x_4013_; 
v___x_4011_ = l_Lake_joinRelative(v___x_4008_, v___y_4010_);
lean_inc_ref(v___x_4011_);
lean_inc_ref(v_descr_3978_);
v___f_4012_ = lean_alloc_closure((void*)(l_Lake_resolveArtifact___lam__0___boxed), 10, 2);
lean_closure_set(v___f_4012_, 0, v_descr_3978_);
lean_closure_set(v___f_4012_, 1, v___x_4011_);
v___x_4013_ = lean_io_metadata(v___x_4011_);
if (lean_obj_tag(v___x_4013_) == 0)
{
lean_object* v_a_4014_; lean_object* v_modified_4015_; lean_object* v___x_4016_; 
lean_dec_ref(v___f_4012_);
lean_dec(v_scope_x3f_3980_);
lean_dec(v_service_x3f_3979_);
v_a_4014_ = lean_ctor_get(v___x_4013_, 0);
lean_inc(v_a_4014_);
lean_dec_ref_known(v___x_4013_, 1);
v_modified_4015_ = lean_ctor_get(v_a_4014_, 1);
lean_inc_ref(v_modified_4015_);
lean_dec(v_a_4014_);
v___x_4016_ = l_Lake_resolveArtifact___lam__0(v_descr_3978_, v___x_4011_, v_modified_4015_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_);
lean_dec_ref(v___y_3982_);
return v___x_4016_;
}
else
{
lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4104_; 
lean_inc(v_buildTime_4002_);
lean_inc_ref(v_trace_4001_);
lean_inc_ref(v_log_3998_);
lean_dec_ref(v_descr_3978_);
v_isSharedCheck_4104_ = !lean_is_exclusive(v___y_3987_);
if (v_isSharedCheck_4104_ == 0)
{
lean_object* v_unused_4105_; lean_object* v_unused_4106_; lean_object* v_unused_4107_; 
v_unused_4105_ = lean_ctor_get(v___y_3987_, 2);
lean_dec(v_unused_4105_);
v_unused_4106_ = lean_ctor_get(v___y_3987_, 1);
lean_dec(v_unused_4106_);
v_unused_4107_ = lean_ctor_get(v___y_3987_, 0);
lean_dec(v_unused_4107_);
v___x_4018_ = v___y_3987_;
v_isShared_4019_ = v_isSharedCheck_4104_;
goto v_resetjp_4017_;
}
else
{
lean_dec(v___y_3987_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4104_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v_a_4020_; 
v_a_4020_ = lean_ctor_get(v___x_4013_, 0);
lean_inc(v_a_4020_);
lean_dec_ref_known(v___x_4013_, 1);
if (lean_obj_tag(v_a_4020_) == 11)
{
lean_object* v___x_4021_; 
lean_dec_ref_known(v_a_4020_, 2);
v___x_4021_ = lean_array_get_size(v_log_3998_);
if (lean_obj_tag(v_service_x3f_3979_) == 1)
{
lean_object* v_val_4022_; lean_object* v_cacheServices_4023_; uint8_t v___x_4024_; uint8_t v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v_val_4022_ = lean_ctor_get(v_service_x3f_3979_, 0);
lean_inc_n(v_val_4022_, 2);
lean_dec_ref_known(v_service_x3f_3979_, 1);
v_cacheServices_4023_ = lean_ctor_get(v_lakeConfig_4003_, 3);
v___x_4024_ = 4;
v___x_4025_ = l_Lake_JobAction_merge(v_action_3999_, v___x_4024_);
v___x_4026_ = lean_box(0);
v___x_4027_ = l_Lean_Name_str___override(v___x_4026_, v_val_4022_);
v___x_4028_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_cacheServices_4023_, v___x_4027_);
lean_dec(v___x_4027_);
if (lean_obj_tag(v___x_4028_) == 1)
{
lean_dec(v_val_4022_);
if (lean_obj_tag(v_scope_x3f_3980_) == 1)
{
lean_object* v_val_4029_; lean_object* v_val_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; uint8_t v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; 
v_val_4029_ = lean_ctor_get(v___x_4028_, 0);
lean_inc(v_val_4029_);
lean_dec_ref_known(v___x_4028_, 1);
v_val_4030_ = lean_ctor_get(v_scope_x3f_3980_, 0);
lean_inc(v_val_4030_);
lean_dec_ref_known(v_scope_x3f_3980_, 1);
v___x_4031_ = l_Lake_CacheService_artifactUrl(v_hash_4005_, v_val_4029_, v_val_4030_);
v___x_4032_ = ((lean_object*)(l_Lake_resolveArtifact___closed__0));
v___x_4033_ = l_Lake_lowerHexUInt64(v_hash_4005_);
v___x_4034_ = lean_string_append(v___x_4032_, v___x_4033_);
lean_dec_ref(v___x_4033_);
v___x_4035_ = ((lean_object*)(l_Lake_resolveArtifact___closed__1));
v___x_4036_ = lean_string_append(v___x_4034_, v___x_4035_);
v___x_4037_ = lean_string_append(v___x_4036_, v___x_4011_);
v___x_4038_ = ((lean_object*)(l_Lake_resolveArtifact___closed__2));
v___x_4039_ = lean_string_append(v___x_4037_, v___x_4038_);
v___x_4040_ = lean_string_append(v___x_4039_, v___x_4031_);
v___x_4041_ = 0;
v___x_4042_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4042_, 0, v___x_4040_);
lean_ctor_set_uint8(v___x_4042_, sizeof(void*)*1, v___x_4041_);
v___x_4043_ = lean_array_push(v_log_3998_, v___x_4042_);
lean_inc_ref(v___x_4011_);
v___x_4044_ = l_Lake_downloadArtifactCore(v_hash_4005_, v___x_4031_, v___x_4011_, v___x_4043_);
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_object* v_a_4045_; uint8_t v___x_4046_; uint8_t v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; 
v_a_4045_ = lean_ctor_get(v___x_4044_, 1);
lean_inc(v_a_4045_);
lean_dec_ref_known(v___x_4044_, 2);
v___x_4046_ = 1;
v___x_4047_ = 0;
v___x_4048_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_4048_, 0, v___x_4046_);
lean_ctor_set_uint8(v___x_4048_, 1, v___x_4047_);
lean_ctor_set_uint8(v___x_4048_, 2, v_exe_3981_);
lean_inc_ref_n(v___x_4048_, 2);
v___x_4049_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4049_, 0, v___x_4048_);
lean_ctor_set(v___x_4049_, 1, v___x_4048_);
lean_ctor_set(v___x_4049_, 2, v___x_4048_);
v___x_4050_ = l_IO_setAccessRights(v___x_4011_, v___x_4049_);
lean_dec_ref_known(v___x_4049_, 3);
if (lean_obj_tag(v___x_4050_) == 0)
{
lean_object* v___x_4052_; 
lean_dec_ref_known(v___x_4050_, 1);
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 0, v_a_4045_);
v___x_4052_ = v___x_4018_;
goto v_reusejp_4051_;
}
else
{
lean_object* v_reuseFailAlloc_4055_; 
v_reuseFailAlloc_4055_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4055_, 0, v_a_4045_);
lean_ctor_set(v_reuseFailAlloc_4055_, 1, v_trace_4001_);
lean_ctor_set(v_reuseFailAlloc_4055_, 2, v_buildTime_4002_);
lean_ctor_set_uint8(v_reuseFailAlloc_4055_, sizeof(void*)*3 + 1, v_wantsRebuild_4000_);
v___x_4052_ = v_reuseFailAlloc_4055_;
goto v_reusejp_4051_;
}
v_reusejp_4051_:
{
lean_object* v___x_4053_; lean_object* v___x_4054_; 
lean_ctor_set_uint8(v___x_4052_, sizeof(void*)*3, v___x_4025_);
v___x_4053_ = lean_box(0);
v___x_4054_ = l_Lake_resolveArtifact___lam__1(v___x_4011_, v___f_4012_, v___x_4053_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___x_4052_);
lean_dec_ref(v___x_4011_);
v___y_3994_ = v___x_4021_;
v___y_3995_ = v___x_4054_;
goto v___jp_3993_;
}
}
else
{
lean_object* v_a_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; uint8_t v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4065_; 
v_a_4056_ = lean_ctor_get(v___x_4050_, 0);
lean_inc(v_a_4056_);
lean_dec_ref_known(v___x_4050_, 1);
v___x_4057_ = ((lean_object*)(l_Lake_resolveArtifact___closed__3));
v___x_4058_ = lean_io_error_to_string(v_a_4056_);
v___x_4059_ = lean_string_append(v___x_4057_, v___x_4058_);
lean_dec_ref(v___x_4058_);
v___x_4060_ = 2;
v___x_4061_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4061_, 0, v___x_4059_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*1, v___x_4060_);
v___x_4062_ = lean_box(0);
v___x_4063_ = lean_array_push(v_a_4045_, v___x_4061_);
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 0, v___x_4063_);
v___x_4065_ = v___x_4018_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v___x_4063_);
lean_ctor_set(v_reuseFailAlloc_4067_, 1, v_trace_4001_);
lean_ctor_set(v_reuseFailAlloc_4067_, 2, v_buildTime_4002_);
lean_ctor_set_uint8(v_reuseFailAlloc_4067_, sizeof(void*)*3 + 1, v_wantsRebuild_4000_);
v___x_4065_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
lean_object* v___x_4066_; 
lean_ctor_set_uint8(v___x_4065_, sizeof(void*)*3, v___x_4025_);
v___x_4066_ = l_Lake_resolveArtifact___lam__1(v___x_4011_, v___f_4012_, v___x_4062_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___x_4065_);
lean_dec_ref(v___x_4011_);
v___y_3994_ = v___x_4021_;
v___y_3995_ = v___x_4066_;
goto v___jp_3993_;
}
}
}
else
{
lean_object* v_a_4068_; lean_object* v___x_4070_; 
lean_dec_ref(v___f_4012_);
lean_dec_ref(v___x_4011_);
lean_dec_ref(v___y_3982_);
v_a_4068_ = lean_ctor_get(v___x_4044_, 1);
lean_inc(v_a_4068_);
lean_dec_ref_known(v___x_4044_, 2);
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 0, v_a_4068_);
v___x_4070_ = v___x_4018_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_a_4068_);
lean_ctor_set(v_reuseFailAlloc_4071_, 1, v_trace_4001_);
lean_ctor_set(v_reuseFailAlloc_4071_, 2, v_buildTime_4002_);
lean_ctor_set_uint8(v_reuseFailAlloc_4071_, sizeof(void*)*3 + 1, v_wantsRebuild_4000_);
v___x_4070_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
lean_ctor_set_uint8(v___x_4070_, sizeof(void*)*3, v___x_4025_);
v___y_3990_ = v___x_4021_;
v_a_3991_ = v___x_4070_;
goto v___jp_3989_;
}
}
}
else
{
lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4075_; 
lean_dec_ref_known(v___x_4028_, 1);
lean_dec_ref(v___f_4012_);
lean_dec_ref(v___x_4011_);
lean_dec_ref(v___y_3982_);
lean_dec(v_scope_x3f_3980_);
v___x_4072_ = ((lean_object*)(l_Lake_resolveArtifact___closed__5));
v___x_4073_ = lean_array_push(v_log_3998_, v___x_4072_);
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 0, v___x_4073_);
v___x_4075_ = v___x_4018_;
goto v_reusejp_4074_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v___x_4073_);
lean_ctor_set(v_reuseFailAlloc_4076_, 1, v_trace_4001_);
lean_ctor_set(v_reuseFailAlloc_4076_, 2, v_buildTime_4002_);
lean_ctor_set_uint8(v_reuseFailAlloc_4076_, sizeof(void*)*3 + 1, v_wantsRebuild_4000_);
v___x_4075_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4074_;
}
v_reusejp_4074_:
{
lean_ctor_set_uint8(v___x_4075_, sizeof(void*)*3, v___x_4025_);
v___y_3990_ = v___x_4021_;
v_a_3991_ = v___x_4075_;
goto v___jp_3989_;
}
}
}
else
{
lean_object* v___x_4077_; lean_object* v___x_4078_; uint8_t v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4083_; 
lean_dec(v___x_4028_);
lean_dec_ref(v___f_4012_);
lean_dec_ref(v___x_4011_);
lean_dec_ref(v___y_3982_);
lean_dec(v_scope_x3f_3980_);
v___x_4077_ = ((lean_object*)(l_Lake_resolveArtifact___closed__6));
v___x_4078_ = lean_string_append(v___x_4077_, v_val_4022_);
lean_dec(v_val_4022_);
v___x_4079_ = 3;
v___x_4080_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4080_, 0, v___x_4078_);
lean_ctor_set_uint8(v___x_4080_, sizeof(void*)*1, v___x_4079_);
v___x_4081_ = lean_array_push(v_log_3998_, v___x_4080_);
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 0, v___x_4081_);
v___x_4083_ = v___x_4018_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v___x_4081_);
lean_ctor_set(v_reuseFailAlloc_4084_, 1, v_trace_4001_);
lean_ctor_set(v_reuseFailAlloc_4084_, 2, v_buildTime_4002_);
lean_ctor_set_uint8(v_reuseFailAlloc_4084_, sizeof(void*)*3 + 1, v_wantsRebuild_4000_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
lean_ctor_set_uint8(v___x_4083_, sizeof(void*)*3, v___x_4025_);
v___y_3990_ = v___x_4021_;
v_a_3991_ = v___x_4083_;
goto v___jp_3989_;
}
}
}
else
{
lean_object* v___x_4085_; lean_object* v___x_4086_; uint8_t v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4091_; 
lean_dec_ref(v___f_4012_);
lean_dec_ref(v___y_3982_);
lean_dec(v_scope_x3f_3980_);
lean_dec(v_service_x3f_3979_);
v___x_4085_ = ((lean_object*)(l_Lake_resolveArtifact___closed__7));
v___x_4086_ = lean_string_append(v___x_4085_, v___x_4011_);
lean_dec_ref(v___x_4011_);
v___x_4087_ = 3;
v___x_4088_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4088_, 0, v___x_4086_);
lean_ctor_set_uint8(v___x_4088_, sizeof(void*)*1, v___x_4087_);
v___x_4089_ = lean_array_push(v_log_3998_, v___x_4088_);
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 0, v___x_4089_);
v___x_4091_ = v___x_4018_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v___x_4089_);
lean_ctor_set(v_reuseFailAlloc_4092_, 1, v_trace_4001_);
lean_ctor_set(v_reuseFailAlloc_4092_, 2, v_buildTime_4002_);
lean_ctor_set_uint8(v_reuseFailAlloc_4092_, sizeof(void*)*3, v_action_3999_);
lean_ctor_set_uint8(v_reuseFailAlloc_4092_, sizeof(void*)*3 + 1, v_wantsRebuild_4000_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
v___y_3990_ = v___x_4021_;
v_a_3991_ = v___x_4091_;
goto v___jp_3989_;
}
}
}
else
{
lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; uint8_t v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4101_; 
lean_dec_ref(v___f_4012_);
lean_dec_ref(v___x_4011_);
lean_dec_ref(v___y_3982_);
lean_dec(v_scope_x3f_3980_);
lean_dec(v_service_x3f_3979_);
v___x_4093_ = ((lean_object*)(l_Lake_resolveArtifact___closed__8));
v___x_4094_ = lean_io_error_to_string(v_a_4020_);
v___x_4095_ = lean_string_append(v___x_4093_, v___x_4094_);
lean_dec_ref(v___x_4094_);
v___x_4096_ = 3;
v___x_4097_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4097_, 0, v___x_4095_);
lean_ctor_set_uint8(v___x_4097_, sizeof(void*)*1, v___x_4096_);
v___x_4098_ = lean_array_get_size(v_log_3998_);
v___x_4099_ = lean_array_push(v_log_3998_, v___x_4097_);
if (v_isShared_4019_ == 0)
{
lean_ctor_set(v___x_4018_, 0, v___x_4099_);
v___x_4101_ = v___x_4018_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v___x_4099_);
lean_ctor_set(v_reuseFailAlloc_4103_, 1, v_trace_4001_);
lean_ctor_set(v_reuseFailAlloc_4103_, 2, v_buildTime_4002_);
lean_ctor_set_uint8(v_reuseFailAlloc_4103_, sizeof(void*)*3, v_action_3999_);
lean_ctor_set_uint8(v_reuseFailAlloc_4103_, sizeof(void*)*3 + 1, v_wantsRebuild_4000_);
v___x_4101_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
lean_object* v___x_4102_; 
v___x_4102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4102_, 0, v___x_4098_);
lean_ctor_set(v___x_4102_, 1, v___x_4101_);
return v___x_4102_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifact___boxed(lean_object* v_descr_4116_, lean_object* v_service_x3f_4117_, lean_object* v_scope_x3f_4118_, lean_object* v_exe_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_){
_start:
{
uint8_t v_exe_boxed_4127_; lean_object* v_res_4128_; 
v_exe_boxed_4127_ = lean_unbox(v_exe_4119_);
v_res_4128_ = l_Lake_resolveArtifact(v_descr_4116_, v_service_x3f_4117_, v_scope_x3f_4118_, v_exe_boxed_4127_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
lean_dec_ref(v___y_4124_);
lean_dec(v___y_4123_);
lean_dec(v___y_4122_);
lean_dec(v___y_4121_);
return v_res_4128_;
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput(lean_object* v_out_4131_, uint8_t v_exe_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_){
_start:
{
lean_object* v_data_4140_; lean_object* v_service_x3f_4141_; lean_object* v_scope_x3f_4142_; lean_object* v___x_4143_; 
v_data_4140_ = lean_ctor_get(v_out_4131_, 0);
lean_inc_n(v_data_4140_, 2);
v_service_x3f_4141_ = lean_ctor_get(v_out_4131_, 1);
lean_inc(v_service_x3f_4141_);
v_scope_x3f_4142_ = lean_ctor_get(v_out_4131_, 2);
lean_inc(v_scope_x3f_4142_);
lean_dec_ref(v_out_4131_);
v___x_4143_ = l_Lake_ArtifactDescr_fromJson_x3f(v_data_4140_);
if (lean_obj_tag(v___x_4143_) == 0)
{
lean_object* v_a_4144_; lean_object* v_log_4145_; uint8_t v_action_4146_; uint8_t v_wantsRebuild_4147_; lean_object* v_trace_4148_; lean_object* v_buildTime_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4171_; 
lean_dec(v_scope_x3f_4142_);
lean_dec(v_service_x3f_4141_);
lean_dec_ref(v___y_4133_);
v_a_4144_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_a_4144_);
lean_dec_ref_known(v___x_4143_, 1);
v_log_4145_ = lean_ctor_get(v___y_4138_, 0);
v_action_4146_ = lean_ctor_get_uint8(v___y_4138_, sizeof(void*)*3);
v_wantsRebuild_4147_ = lean_ctor_get_uint8(v___y_4138_, sizeof(void*)*3 + 1);
v_trace_4148_ = lean_ctor_get(v___y_4138_, 1);
v_buildTime_4149_ = lean_ctor_get(v___y_4138_, 2);
v_isSharedCheck_4171_ = !lean_is_exclusive(v___y_4138_);
if (v_isSharedCheck_4171_ == 0)
{
v___x_4151_ = v___y_4138_;
v_isShared_4152_ = v_isSharedCheck_4171_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_buildTime_4149_);
lean_inc(v_trace_4148_);
lean_inc(v_log_4145_);
lean_dec(v___y_4138_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4171_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; uint8_t v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4168_; 
v___x_4153_ = ((lean_object*)(l_Lake_resolveArtifactOutput___closed__0));
v___x_4154_ = l_Lean_Json_render(v_data_4140_);
v___x_4155_ = lean_unsigned_to_nat(80u);
v___x_4156_ = lean_unsigned_to_nat(2u);
v___x_4157_ = lean_unsigned_to_nat(0u);
v___x_4158_ = l_Std_Format_pretty(v___x_4154_, v___x_4155_, v___x_4156_, v___x_4157_);
v___x_4159_ = lean_string_append(v___x_4153_, v___x_4158_);
lean_dec_ref(v___x_4158_);
v___x_4160_ = ((lean_object*)(l_Lake_resolveArtifactOutput___closed__1));
v___x_4161_ = lean_string_append(v___x_4159_, v___x_4160_);
v___x_4162_ = lean_string_append(v___x_4161_, v_a_4144_);
lean_dec(v_a_4144_);
v___x_4163_ = 3;
v___x_4164_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4164_, 0, v___x_4162_);
lean_ctor_set_uint8(v___x_4164_, sizeof(void*)*1, v___x_4163_);
v___x_4165_ = lean_array_get_size(v_log_4145_);
v___x_4166_ = lean_array_push(v_log_4145_, v___x_4164_);
if (v_isShared_4152_ == 0)
{
lean_ctor_set(v___x_4151_, 0, v___x_4166_);
v___x_4168_ = v___x_4151_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v___x_4166_);
lean_ctor_set(v_reuseFailAlloc_4170_, 1, v_trace_4148_);
lean_ctor_set(v_reuseFailAlloc_4170_, 2, v_buildTime_4149_);
lean_ctor_set_uint8(v_reuseFailAlloc_4170_, sizeof(void*)*3, v_action_4146_);
lean_ctor_set_uint8(v_reuseFailAlloc_4170_, sizeof(void*)*3 + 1, v_wantsRebuild_4147_);
v___x_4168_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
lean_object* v___x_4169_; 
v___x_4169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4169_, 0, v___x_4165_);
lean_ctor_set(v___x_4169_, 1, v___x_4168_);
return v___x_4169_;
}
}
}
else
{
lean_object* v_a_4172_; lean_object* v___x_4173_; 
lean_dec(v_data_4140_);
v_a_4172_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_a_4172_);
lean_dec_ref_known(v___x_4143_, 1);
v___x_4173_ = l_Lake_resolveArtifact(v_a_4172_, v_service_x3f_4141_, v_scope_x3f_4142_, v_exe_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_);
return v___x_4173_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_resolveArtifactOutput___boxed(lean_object* v_out_4174_, lean_object* v_exe_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_){
_start:
{
uint8_t v_exe_boxed_4183_; lean_object* v_res_4184_; 
v_exe_boxed_4183_ = lean_unbox(v_exe_4175_);
v_res_4184_ = l_Lake_resolveArtifactOutput(v_out_4174_, v_exe_boxed_4183_, v___y_4176_, v___y_4177_, v___y_4178_, v___y_4179_, v___y_4180_, v___y_4181_);
lean_dec_ref(v___y_4180_);
lean_dec(v___y_4179_);
lean_dec(v___y_4178_);
lean_dec(v___y_4177_);
return v_res_4184_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(uint8_t v_exe_4185_, lean_object* v_out_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_){
_start:
{
lean_object* v___x_4194_; 
v___x_4194_ = l_Lake_resolveArtifactOutput(v_out_4186_, v_exe_4185_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_);
return v___x_4194_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed(lean_object* v_exe_4195_, lean_object* v_out_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_){
_start:
{
uint8_t v_exe_boxed_4204_; lean_object* v_res_4205_; 
v_exe_boxed_4204_ = lean_unbox(v_exe_4195_);
v_res_4205_ = l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0(v_exe_boxed_4204_, v_out_4196_, v___y_4197_, v___y_4198_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_);
lean_dec_ref(v___y_4201_);
lean_dec(v___y_4200_);
lean_dec(v___y_4199_);
lean_dec(v___y_4198_);
return v_res_4205_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(uint8_t v_exe_4206_){
_start:
{
lean_object* v___x_4207_; lean_object* v___f_4208_; 
v___x_4207_ = lean_box(v_exe_4206_);
v___f_4208_ = lean_alloc_closure((void*)(l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___lam__0___boxed), 9, 1);
lean_closure_set(v___f_4208_, 0, v___x_4207_);
return v___f_4208_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact___boxed(lean_object* v_exe_4209_){
_start:
{
uint8_t v_exe_boxed_4210_; lean_object* v_res_4211_; 
v_exe_boxed_4210_ = lean_unbox(v_exe_4209_);
v_res_4211_ = l___private_Lake_Build_Common_0__Lake_instResolveOutputsXArtifact(v_exe_boxed_4210_);
return v_res_4211_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg(lean_object* v_path_4212_, lean_object* v_ext_4213_, uint8_t v_text_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_){
_start:
{
lean_object* v___x_4218_; 
lean_inc_ref(v_path_4212_);
v___x_4218_ = l_Lake_fetchFileHash___redArg(v_path_4212_, v_text_4214_, v___y_4215_, v___y_4216_);
if (lean_obj_tag(v___x_4218_) == 0)
{
lean_object* v_a_4219_; lean_object* v_a_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4237_; 
v_a_4219_ = lean_ctor_get(v___x_4218_, 0);
v_a_4220_ = lean_ctor_get(v___x_4218_, 1);
v_isSharedCheck_4237_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4237_ == 0)
{
v___x_4222_ = v___x_4218_;
v_isShared_4223_ = v_isSharedCheck_4237_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_a_4220_);
lean_inc(v_a_4219_);
lean_dec(v___x_4218_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4237_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___x_4233_; 
v___x_4233_ = lean_io_metadata(v_path_4212_);
if (lean_obj_tag(v___x_4233_) == 0)
{
lean_object* v_a_4234_; lean_object* v_modified_4235_; 
v_a_4234_ = lean_ctor_get(v___x_4233_, 0);
lean_inc(v_a_4234_);
lean_dec_ref_known(v___x_4233_, 1);
v_modified_4235_ = lean_ctor_get(v_a_4234_, 1);
lean_inc_ref(v_modified_4235_);
lean_dec(v_a_4234_);
v___y_4225_ = v_a_4220_;
v___y_4226_ = v_modified_4235_;
goto v___jp_4224_;
}
else
{
lean_object* v___x_4236_; 
lean_dec_ref_known(v___x_4233_, 1);
v___x_4236_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___y_4225_ = v_a_4220_;
v___y_4226_ = v___x_4236_;
goto v___jp_4224_;
}
v___jp_4224_:
{
lean_object* v___x_4227_; uint64_t v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4231_; 
v___x_4227_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4227_, 0, v_ext_4213_);
v___x_4228_ = lean_unbox_uint64(v_a_4219_);
lean_dec(v_a_4219_);
lean_ctor_set_uint64(v___x_4227_, sizeof(void*)*1, v___x_4228_);
lean_inc_ref(v_path_4212_);
v___x_4229_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4229_, 0, v___x_4227_);
lean_ctor_set(v___x_4229_, 1, v_path_4212_);
lean_ctor_set(v___x_4229_, 2, v_path_4212_);
lean_ctor_set(v___x_4229_, 3, v___y_4226_);
if (v_isShared_4223_ == 0)
{
lean_ctor_set(v___x_4222_, 1, v___y_4225_);
lean_ctor_set(v___x_4222_, 0, v___x_4229_);
v___x_4231_ = v___x_4222_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v___x_4229_);
lean_ctor_set(v_reuseFailAlloc_4232_, 1, v___y_4225_);
v___x_4231_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
return v___x_4231_;
}
}
}
}
else
{
lean_object* v_a_4238_; lean_object* v_a_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4246_; 
lean_dec_ref(v_ext_4213_);
lean_dec_ref(v_path_4212_);
v_a_4238_ = lean_ctor_get(v___x_4218_, 0);
v_a_4239_ = lean_ctor_get(v___x_4218_, 1);
v_isSharedCheck_4246_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4241_ = v___x_4218_;
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_a_4239_);
lean_inc(v_a_4238_);
lean_dec(v___x_4218_);
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
v_reuseFailAlloc_4245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v_a_4238_);
lean_ctor_set(v_reuseFailAlloc_4245_, 1, v_a_4239_);
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
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___redArg___boxed(lean_object* v_path_4247_, lean_object* v_ext_4248_, lean_object* v_text_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_){
_start:
{
uint8_t v_text_boxed_4253_; lean_object* v_res_4254_; 
v_text_boxed_4253_ = lean_unbox(v_text_4249_);
v_res_4254_ = l_Lake_computeArtifact___redArg(v_path_4247_, v_ext_4248_, v_text_boxed_4253_, v___y_4250_, v___y_4251_);
lean_dec_ref(v___y_4250_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact(lean_object* v_path_4255_, lean_object* v_ext_4256_, uint8_t v_text_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v___x_4265_; 
v___x_4265_ = l_Lake_computeArtifact___redArg(v_path_4255_, v_ext_4256_, v_text_4257_, v___y_4262_, v___y_4263_);
return v___x_4265_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArtifact___boxed(lean_object* v_path_4266_, lean_object* v_ext_4267_, lean_object* v_text_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_){
_start:
{
uint8_t v_text_boxed_4276_; lean_object* v_res_4277_; 
v_text_boxed_4276_ = lean_unbox(v_text_4268_);
v_res_4277_ = l_Lake_computeArtifact(v_path_4266_, v_ext_4267_, v_text_boxed_4276_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_);
lean_dec_ref(v___y_4273_);
lean_dec(v___y_4272_);
lean_dec(v___y_4271_);
lean_dec(v___y_4270_);
lean_dec_ref(v___y_4269_);
return v_res_4277_;
}
}
LEAN_EXPORT lean_object* l_Lake_restoreArtifact(lean_object* v_file_4281_, lean_object* v_art_4282_, uint8_t v_exe_4283_, lean_object* v___y_4284_){
_start:
{
lean_object* v___y_4287_; lean_object* v___y_4301_; uint8_t v___x_4317_; 
v___x_4317_ = l_System_FilePath_pathExists(v_file_4281_);
if (v___x_4317_ == 0)
{
lean_object* v_path_4318_; uint8_t v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; uint8_t v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; 
v_path_4318_ = lean_ctor_get(v_art_4282_, 1);
v___x_4319_ = 1;
v___x_4320_ = ((lean_object*)(l_Lake_restoreArtifact___closed__1));
v___x_4321_ = lean_string_append(v___x_4320_, v_path_4318_);
v___x_4322_ = 0;
v___x_4323_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4323_, 0, v___x_4321_);
lean_ctor_set_uint8(v___x_4323_, sizeof(void*)*1, v___x_4322_);
v___x_4324_ = lean_array_push(v___y_4284_, v___x_4323_);
lean_inc_ref(v_file_4281_);
v___x_4325_ = l_Lake_createParentDirs(v_file_4281_);
if (lean_obj_tag(v___x_4325_) == 0)
{
lean_object* v___x_4326_; 
lean_dec_ref_known(v___x_4325_, 1);
v___x_4326_ = lean_io_hard_link(v_path_4318_, v_file_4281_);
if (lean_obj_tag(v___x_4326_) == 0)
{
lean_dec_ref_known(v___x_4326_, 1);
if (v_exe_4283_ == 0)
{
v___y_4301_ = v___x_4324_;
goto v___jp_4300_;
}
else
{
lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; 
v___x_4327_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_4327_, 0, v___x_4319_);
lean_ctor_set_uint8(v___x_4327_, 1, v___x_4317_);
lean_ctor_set_uint8(v___x_4327_, 2, v_exe_4283_);
lean_inc_ref_n(v___x_4327_, 2);
v___x_4328_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4327_);
lean_ctor_set(v___x_4328_, 1, v___x_4327_);
lean_ctor_set(v___x_4328_, 2, v___x_4327_);
v___x_4329_ = l_IO_setAccessRights(v_file_4281_, v___x_4328_);
lean_dec_ref_known(v___x_4328_, 3);
if (lean_obj_tag(v___x_4329_) == 0)
{
lean_dec_ref_known(v___x_4329_, 1);
v___y_4301_ = v___x_4324_;
goto v___jp_4300_;
}
else
{
lean_object* v_a_4330_; lean_object* v___x_4331_; uint8_t v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
lean_dec_ref(v_art_4282_);
lean_dec_ref(v_file_4281_);
v_a_4330_ = lean_ctor_get(v___x_4329_, 0);
lean_inc(v_a_4330_);
lean_dec_ref_known(v___x_4329_, 1);
v___x_4331_ = lean_io_error_to_string(v_a_4330_);
v___x_4332_ = 3;
v___x_4333_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4333_, 0, v___x_4331_);
lean_ctor_set_uint8(v___x_4333_, sizeof(void*)*1, v___x_4332_);
v___x_4334_ = lean_array_get_size(v___x_4324_);
v___x_4335_ = lean_array_push(v___x_4324_, v___x_4333_);
v___x_4336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4336_, 0, v___x_4334_);
lean_ctor_set(v___x_4336_, 1, v___x_4335_);
return v___x_4336_;
}
}
}
else
{
lean_object* v_a_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; 
v_a_4337_ = lean_ctor_get(v___x_4326_, 0);
lean_inc(v_a_4337_);
lean_dec_ref_known(v___x_4326_, 1);
v___x_4338_ = ((lean_object*)(l_Lake_restoreArtifact___closed__2));
v___x_4339_ = lean_io_error_to_string(v_a_4337_);
v___x_4340_ = lean_string_append(v___x_4338_, v___x_4339_);
lean_dec_ref(v___x_4339_);
v___x_4341_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4341_, 0, v___x_4340_);
lean_ctor_set_uint8(v___x_4341_, sizeof(void*)*1, v___x_4322_);
v___x_4342_ = lean_array_push(v___x_4324_, v___x_4341_);
v___x_4343_ = l_Lake_copyFile(v_path_4318_, v_file_4281_);
if (lean_obj_tag(v___x_4343_) == 0)
{
lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; 
lean_dec_ref_known(v___x_4343_, 1);
v___x_4344_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_4344_, 0, v___x_4319_);
lean_ctor_set_uint8(v___x_4344_, 1, v___x_4317_);
lean_ctor_set_uint8(v___x_4344_, 2, v_exe_4283_);
lean_inc_ref_n(v___x_4344_, 2);
v___x_4345_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4345_, 0, v___x_4344_);
lean_ctor_set(v___x_4345_, 1, v___x_4344_);
lean_ctor_set(v___x_4345_, 2, v___x_4344_);
v___x_4346_ = l_IO_setAccessRights(v_file_4281_, v___x_4345_);
lean_dec_ref_known(v___x_4345_, 3);
if (lean_obj_tag(v___x_4346_) == 0)
{
lean_dec_ref_known(v___x_4346_, 1);
v___y_4301_ = v___x_4342_;
goto v___jp_4300_;
}
else
{
lean_object* v_a_4347_; lean_object* v___x_4348_; uint8_t v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
lean_dec_ref(v_art_4282_);
lean_dec_ref(v_file_4281_);
v_a_4347_ = lean_ctor_get(v___x_4346_, 0);
lean_inc(v_a_4347_);
lean_dec_ref_known(v___x_4346_, 1);
v___x_4348_ = lean_io_error_to_string(v_a_4347_);
v___x_4349_ = 3;
v___x_4350_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4350_, 0, v___x_4348_);
lean_ctor_set_uint8(v___x_4350_, sizeof(void*)*1, v___x_4349_);
v___x_4351_ = lean_array_get_size(v___x_4342_);
v___x_4352_ = lean_array_push(v___x_4342_, v___x_4350_);
v___x_4353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4353_, 0, v___x_4351_);
lean_ctor_set(v___x_4353_, 1, v___x_4352_);
return v___x_4353_;
}
}
else
{
lean_object* v_a_4354_; lean_object* v___x_4355_; uint8_t v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; 
lean_dec_ref(v_art_4282_);
lean_dec_ref(v_file_4281_);
v_a_4354_ = lean_ctor_get(v___x_4343_, 0);
lean_inc(v_a_4354_);
lean_dec_ref_known(v___x_4343_, 1);
v___x_4355_ = lean_io_error_to_string(v_a_4354_);
v___x_4356_ = 3;
v___x_4357_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4357_, 0, v___x_4355_);
lean_ctor_set_uint8(v___x_4357_, sizeof(void*)*1, v___x_4356_);
v___x_4358_ = lean_array_get_size(v___x_4342_);
v___x_4359_ = lean_array_push(v___x_4342_, v___x_4357_);
v___x_4360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4360_, 0, v___x_4358_);
lean_ctor_set(v___x_4360_, 1, v___x_4359_);
return v___x_4360_;
}
}
}
else
{
lean_object* v_a_4361_; lean_object* v___x_4362_; uint8_t v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; 
lean_dec_ref(v_art_4282_);
lean_dec_ref(v_file_4281_);
v_a_4361_ = lean_ctor_get(v___x_4325_, 0);
lean_inc(v_a_4361_);
lean_dec_ref_known(v___x_4325_, 1);
v___x_4362_ = lean_io_error_to_string(v_a_4361_);
v___x_4363_ = 3;
v___x_4364_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4364_, 0, v___x_4362_);
lean_ctor_set_uint8(v___x_4364_, sizeof(void*)*1, v___x_4363_);
v___x_4365_ = lean_array_get_size(v___x_4324_);
v___x_4366_ = lean_array_push(v___x_4324_, v___x_4364_);
v___x_4367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4367_, 0, v___x_4365_);
lean_ctor_set(v___x_4367_, 1, v___x_4366_);
return v___x_4367_;
}
}
else
{
v___y_4287_ = v___y_4284_;
goto v___jp_4286_;
}
v___jp_4286_:
{
lean_object* v_descr_4288_; lean_object* v_mtime_4289_; lean_object* v___x_4291_; uint8_t v_isShared_4292_; uint8_t v_isSharedCheck_4297_; 
v_descr_4288_ = lean_ctor_get(v_art_4282_, 0);
v_mtime_4289_ = lean_ctor_get(v_art_4282_, 3);
v_isSharedCheck_4297_ = !lean_is_exclusive(v_art_4282_);
if (v_isSharedCheck_4297_ == 0)
{
lean_object* v_unused_4298_; lean_object* v_unused_4299_; 
v_unused_4298_ = lean_ctor_get(v_art_4282_, 2);
lean_dec(v_unused_4298_);
v_unused_4299_ = lean_ctor_get(v_art_4282_, 1);
lean_dec(v_unused_4299_);
v___x_4291_ = v_art_4282_;
v_isShared_4292_ = v_isSharedCheck_4297_;
goto v_resetjp_4290_;
}
else
{
lean_inc(v_mtime_4289_);
lean_inc(v_descr_4288_);
lean_dec(v_art_4282_);
v___x_4291_ = lean_box(0);
v_isShared_4292_ = v_isSharedCheck_4297_;
goto v_resetjp_4290_;
}
v_resetjp_4290_:
{
lean_object* v___x_4294_; 
lean_inc_ref(v_file_4281_);
if (v_isShared_4292_ == 0)
{
lean_ctor_set(v___x_4291_, 2, v_file_4281_);
lean_ctor_set(v___x_4291_, 1, v_file_4281_);
v___x_4294_ = v___x_4291_;
goto v_reusejp_4293_;
}
else
{
lean_object* v_reuseFailAlloc_4296_; 
v_reuseFailAlloc_4296_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4296_, 0, v_descr_4288_);
lean_ctor_set(v_reuseFailAlloc_4296_, 1, v_file_4281_);
lean_ctor_set(v_reuseFailAlloc_4296_, 2, v_file_4281_);
lean_ctor_set(v_reuseFailAlloc_4296_, 3, v_mtime_4289_);
v___x_4294_ = v_reuseFailAlloc_4296_;
goto v_reusejp_4293_;
}
v_reusejp_4293_:
{
lean_object* v___x_4295_; 
v___x_4295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4295_, 0, v___x_4294_);
lean_ctor_set(v___x_4295_, 1, v___y_4287_);
return v___x_4295_;
}
}
}
v___jp_4300_:
{
lean_object* v_descr_4302_; uint64_t v_hash_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; uint8_t v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; 
v_descr_4302_ = lean_ctor_get(v_art_4282_, 0);
v_hash_4303_ = lean_ctor_get_uint64(v_descr_4302_, sizeof(void*)*1);
v___x_4304_ = ((lean_object*)(l_Lake_restoreArtifact___closed__0));
v___x_4305_ = lean_string_append(v___x_4304_, v_file_4281_);
v___x_4306_ = 0;
v___x_4307_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4307_, 0, v___x_4305_);
lean_ctor_set_uint8(v___x_4307_, sizeof(void*)*1, v___x_4306_);
v___x_4308_ = lean_array_push(v___y_4301_, v___x_4307_);
lean_inc_ref(v_file_4281_);
v___x_4309_ = l_Lake_writeFileHash(v_file_4281_, v_hash_4303_);
if (lean_obj_tag(v___x_4309_) == 0)
{
lean_dec_ref_known(v___x_4309_, 1);
v___y_4287_ = v___x_4308_;
goto v___jp_4286_;
}
else
{
lean_object* v_a_4310_; lean_object* v___x_4311_; uint8_t v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; 
lean_dec_ref(v_art_4282_);
lean_dec_ref(v_file_4281_);
v_a_4310_ = lean_ctor_get(v___x_4309_, 0);
lean_inc(v_a_4310_);
lean_dec_ref_known(v___x_4309_, 1);
v___x_4311_ = lean_io_error_to_string(v_a_4310_);
v___x_4312_ = 3;
v___x_4313_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4313_, 0, v___x_4311_);
lean_ctor_set_uint8(v___x_4313_, sizeof(void*)*1, v___x_4312_);
v___x_4314_ = lean_array_get_size(v___x_4308_);
v___x_4315_ = lean_array_push(v___x_4308_, v___x_4313_);
v___x_4316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4316_, 0, v___x_4314_);
lean_ctor_set(v___x_4316_, 1, v___x_4315_);
return v___x_4316_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_restoreArtifact___boxed(lean_object* v_file_4368_, lean_object* v_art_4369_, lean_object* v_exe_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_){
_start:
{
uint8_t v_exe_boxed_4373_; lean_object* v_res_4374_; 
v_exe_boxed_4373_ = lean_unbox(v_exe_4370_);
v_res_4374_ = l_Lake_restoreArtifact(v_file_4368_, v_art_4369_, v_exe_boxed_4373_, v___y_4371_);
return v_res_4374_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___lam__0(lean_object* v_val_4375_, lean_object* v_a_x3f_4376_, lean_object* v___y_4377_){
_start:
{
lean_object* v_log_4379_; uint8_t v_action_4380_; uint8_t v_wantsRebuild_4381_; lean_object* v_trace_4382_; lean_object* v_buildTime_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4395_; 
v_log_4379_ = lean_ctor_get(v___y_4377_, 0);
v_action_4380_ = lean_ctor_get_uint8(v___y_4377_, sizeof(void*)*3);
v_wantsRebuild_4381_ = lean_ctor_get_uint8(v___y_4377_, sizeof(void*)*3 + 1);
v_trace_4382_ = lean_ctor_get(v___y_4377_, 1);
v_buildTime_4383_ = lean_ctor_get(v___y_4377_, 2);
v_isSharedCheck_4395_ = !lean_is_exclusive(v___y_4377_);
if (v_isSharedCheck_4395_ == 0)
{
v___x_4385_ = v___y_4377_;
v_isShared_4386_ = v_isSharedCheck_4395_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_buildTime_4383_);
lean_inc(v_trace_4382_);
lean_inc(v_log_4379_);
lean_dec(v___y_4377_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4395_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4392_; 
v___x_4387_ = lean_io_mono_ms_now();
v___x_4388_ = lean_nat_sub(v___x_4387_, v_val_4375_);
lean_dec(v___x_4387_);
v___x_4389_ = lean_box(0);
v___x_4390_ = lean_nat_add(v_buildTime_4383_, v___x_4388_);
lean_dec(v___x_4388_);
lean_dec(v_buildTime_4383_);
if (v_isShared_4386_ == 0)
{
lean_ctor_set(v___x_4385_, 2, v___x_4390_);
v___x_4392_ = v___x_4385_;
goto v_reusejp_4391_;
}
else
{
lean_object* v_reuseFailAlloc_4394_; 
v_reuseFailAlloc_4394_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4394_, 0, v_log_4379_);
lean_ctor_set(v_reuseFailAlloc_4394_, 1, v_trace_4382_);
lean_ctor_set(v_reuseFailAlloc_4394_, 2, v___x_4390_);
lean_ctor_set_uint8(v_reuseFailAlloc_4394_, sizeof(void*)*3, v_action_4380_);
lean_ctor_set_uint8(v_reuseFailAlloc_4394_, sizeof(void*)*3 + 1, v_wantsRebuild_4381_);
v___x_4392_ = v_reuseFailAlloc_4394_;
goto v_reusejp_4391_;
}
v_reusejp_4391_:
{
lean_object* v___x_4393_; 
v___x_4393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4393_, 0, v___x_4389_);
lean_ctor_set(v___x_4393_, 1, v___x_4392_);
return v___x_4393_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___lam__0___boxed(lean_object* v_val_4396_, lean_object* v_a_x3f_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_){
_start:
{
lean_object* v_res_4400_; 
v_res_4400_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___lam__0(v_val_4396_, v_a_x3f_4397_, v___y_4398_);
lean_dec(v_a_x3f_4397_);
lean_dec(v_val_4396_);
return v_res_4400_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(lean_object* v_file_4401_, lean_object* v_build_4402_, uint8_t v_text_4403_, lean_object* v_ext_4404_, lean_object* v_depTrace_4405_, lean_object* v_traceFile_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_){
_start:
{
lean_object* v_a_4415_; lean_object* v_a_4416_; lean_object* v_log_4419_; uint8_t v_action_4420_; uint8_t v_wantsRebuild_4421_; lean_object* v_trace_4422_; lean_object* v_buildTime_4423_; lean_object* v_toBuildConfig_4429_; lean_object* v_log_4430_; uint8_t v_action_4431_; uint8_t v_wantsRebuild_4432_; lean_object* v_trace_4433_; lean_object* v_buildTime_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4613_; 
v_toBuildConfig_4429_ = lean_ctor_get(v___y_4411_, 0);
v_log_4430_ = lean_ctor_get(v___y_4412_, 0);
v_action_4431_ = lean_ctor_get_uint8(v___y_4412_, sizeof(void*)*3);
v_wantsRebuild_4432_ = lean_ctor_get_uint8(v___y_4412_, sizeof(void*)*3 + 1);
v_trace_4433_ = lean_ctor_get(v___y_4412_, 1);
v_buildTime_4434_ = lean_ctor_get(v___y_4412_, 2);
v_isSharedCheck_4613_ = !lean_is_exclusive(v___y_4412_);
if (v_isSharedCheck_4613_ == 0)
{
v___x_4436_ = v___y_4412_;
v_isShared_4437_ = v_isSharedCheck_4613_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_buildTime_4434_);
lean_inc(v_trace_4433_);
lean_inc(v_log_4430_);
lean_dec(v___y_4412_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4613_;
goto v_resetjp_4435_;
}
v___jp_4414_:
{
lean_object* v___x_4417_; 
v___x_4417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4417_, 0, v_a_4415_);
lean_ctor_set(v___x_4417_, 1, v_a_4416_);
return v___x_4417_;
}
v___jp_4418_:
{
lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; 
v___x_4424_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__1));
v___x_4425_ = lean_array_get_size(v_log_4419_);
v___x_4426_ = lean_array_push(v_log_4419_, v___x_4424_);
v___x_4427_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4427_, 0, v___x_4426_);
lean_ctor_set(v___x_4427_, 1, v_trace_4422_);
lean_ctor_set(v___x_4427_, 2, v_buildTime_4423_);
lean_ctor_set_uint8(v___x_4427_, sizeof(void*)*3, v_action_4420_);
lean_ctor_set_uint8(v___x_4427_, sizeof(void*)*3 + 1, v_wantsRebuild_4421_);
v___x_4428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4428_, 0, v___x_4425_);
lean_ctor_set(v___x_4428_, 1, v___x_4427_);
return v___x_4428_;
}
v_resetjp_4435_:
{
uint8_t v_noBuild_4438_; uint8_t v___x_4439_; uint8_t v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; 
v_noBuild_4438_ = lean_ctor_get_uint8(v_toBuildConfig_4429_, sizeof(void*)*4 + 2);
v___x_4439_ = 5;
v___x_4440_ = l_Lake_JobAction_merge(v_action_4431_, v___x_4439_);
v___x_4441_ = ((lean_object*)(l_Lake_buildAction___redArg___closed__2));
lean_inc_ref(v_traceFile_4406_);
v___x_4442_ = l_System_FilePath_addExtension(v_traceFile_4406_, v___x_4441_);
if (v_noBuild_4438_ == 0)
{
lean_object* v___x_4443_; lean_object* v_a_4445_; lean_object* v_a_4446_; lean_object* v___x_4450_; lean_object* v___x_4451_; 
v___x_4443_ = lean_io_mono_ms_now();
v___x_4450_ = lean_array_get_size(v_log_4430_);
v___x_4451_ = l_Lake_removeFileIfExists(v_file_4401_);
if (lean_obj_tag(v___x_4451_) == 0)
{
lean_object* v___x_4453_; 
lean_dec_ref_known(v___x_4451_, 1);
if (v_isShared_4437_ == 0)
{
v___x_4453_ = v___x_4436_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4589_; 
v_reuseFailAlloc_4589_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4589_, 0, v_log_4430_);
lean_ctor_set(v_reuseFailAlloc_4589_, 1, v_trace_4433_);
lean_ctor_set(v_reuseFailAlloc_4589_, 2, v_buildTime_4434_);
lean_ctor_set_uint8(v_reuseFailAlloc_4589_, sizeof(void*)*3 + 1, v_wantsRebuild_4432_);
v___x_4453_ = v_reuseFailAlloc_4589_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
lean_object* v___x_4454_; 
lean_ctor_set_uint8(v___x_4453_, sizeof(void*)*3, v___x_4440_);
lean_inc_ref(v___y_4411_);
lean_inc(v___y_4410_);
lean_inc(v___y_4409_);
lean_inc(v___y_4408_);
v___x_4454_ = lean_apply_7(v_build_4402_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___x_4453_, lean_box(0));
if (lean_obj_tag(v___x_4454_) == 0)
{
lean_object* v_a_4455_; lean_object* v_log_4456_; uint8_t v_action_4457_; uint8_t v_wantsRebuild_4458_; lean_object* v_trace_4459_; lean_object* v_buildTime_4460_; lean_object* v___x_4461_; 
v_a_4455_ = lean_ctor_get(v___x_4454_, 1);
lean_inc(v_a_4455_);
lean_dec_ref_known(v___x_4454_, 2);
v_log_4456_ = lean_ctor_get(v_a_4455_, 0);
v_action_4457_ = lean_ctor_get_uint8(v_a_4455_, sizeof(void*)*3);
v_wantsRebuild_4458_ = lean_ctor_get_uint8(v_a_4455_, sizeof(void*)*3 + 1);
v_trace_4459_ = lean_ctor_get(v_a_4455_, 1);
v_buildTime_4460_ = lean_ctor_get(v_a_4455_, 2);
lean_inc_ref(v_file_4401_);
v___x_4461_ = l_Lake_clearFileHash(v_file_4401_);
if (lean_obj_tag(v___x_4461_) == 0)
{
lean_object* v___x_4462_; 
lean_dec_ref_known(v___x_4461_, 1);
v___x_4462_ = l_Lake_removeFileIfExists(v_traceFile_4406_);
if (lean_obj_tag(v___x_4462_) == 0)
{
lean_object* v___x_4464_; uint8_t v_isShared_4465_; uint8_t v_isSharedCheck_4553_; 
v_isSharedCheck_4553_ = !lean_is_exclusive(v___x_4462_);
if (v_isSharedCheck_4553_ == 0)
{
lean_object* v_unused_4554_; 
v_unused_4554_ = lean_ctor_get(v___x_4462_, 0);
lean_dec(v_unused_4554_);
v___x_4464_ = v___x_4462_;
v_isShared_4465_ = v_isSharedCheck_4553_;
goto v_resetjp_4463_;
}
else
{
lean_dec(v___x_4462_);
v___x_4464_ = lean_box(0);
v_isShared_4465_ = v_isSharedCheck_4553_;
goto v_resetjp_4463_;
}
v_resetjp_4463_:
{
lean_object* v___x_4466_; 
v___x_4466_ = l_Lake_computeArtifact___redArg(v_file_4401_, v_ext_4404_, v_text_4403_, v___y_4411_, v_a_4455_);
if (lean_obj_tag(v___x_4466_) == 0)
{
lean_object* v_a_4467_; lean_object* v_a_4468_; lean_object* v_descr_4469_; lean_object* v_log_4470_; uint8_t v_action_4471_; uint8_t v_wantsRebuild_4472_; lean_object* v_trace_4473_; lean_object* v_buildTime_4474_; uint64_t v_hash_4475_; lean_object* v_ext_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___y_4480_; lean_object* v___x_4543_; lean_object* v___x_4544_; uint8_t v___x_4545_; 
v_a_4467_ = lean_ctor_get(v___x_4466_, 1);
lean_inc(v_a_4467_);
v_a_4468_ = lean_ctor_get(v___x_4466_, 0);
lean_inc(v_a_4468_);
lean_dec_ref_known(v___x_4466_, 2);
v_descr_4469_ = lean_ctor_get(v_a_4468_, 0);
v_log_4470_ = lean_ctor_get(v_a_4467_, 0);
v_action_4471_ = lean_ctor_get_uint8(v_a_4467_, sizeof(void*)*3);
v_wantsRebuild_4472_ = lean_ctor_get_uint8(v_a_4467_, sizeof(void*)*3 + 1);
v_trace_4473_ = lean_ctor_get(v_a_4467_, 1);
v_buildTime_4474_ = lean_ctor_get(v_a_4467_, 2);
v_hash_4475_ = lean_ctor_get_uint64(v_descr_4469_, sizeof(void*)*1);
v_ext_4476_ = lean_ctor_get(v_descr_4469_, 0);
v___x_4477_ = lean_array_get_size(v_log_4470_);
v___x_4478_ = l_Array_extract___redArg(v_log_4470_, v___x_4450_, v___x_4477_);
v___x_4543_ = lean_string_utf8_byte_size(v_ext_4476_);
v___x_4544_ = lean_unsigned_to_nat(0u);
v___x_4545_ = lean_nat_dec_eq(v___x_4543_, v___x_4544_);
if (v___x_4545_ == 0)
{
lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; 
v___x_4546_ = l_Lake_lowerHexUInt64(v_hash_4475_);
v___x_4547_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_4548_ = lean_string_append(v___x_4546_, v___x_4547_);
v___x_4549_ = lean_string_append(v___x_4548_, v_ext_4476_);
v___y_4480_ = v___x_4549_;
goto v___jp_4479_;
}
else
{
lean_object* v___x_4550_; 
v___x_4550_ = l_Lake_lowerHexUInt64(v_hash_4475_);
v___y_4480_ = v___x_4550_;
goto v___jp_4479_;
}
v___jp_4479_:
{
lean_object* v___x_4482_; 
if (v_isShared_4465_ == 0)
{
lean_ctor_set_tag(v___x_4464_, 3);
lean_ctor_set(v___x_4464_, 0, v___y_4480_);
v___x_4482_ = v___x_4464_;
goto v_reusejp_4481_;
}
else
{
lean_object* v_reuseFailAlloc_4542_; 
v_reuseFailAlloc_4542_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4542_, 0, v___y_4480_);
v___x_4482_ = v_reuseFailAlloc_4542_;
goto v_reusejp_4481_;
}
v_reusejp_4481_:
{
lean_object* v___x_4483_; lean_object* v___x_4484_; 
v___x_4483_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_4405_, v___x_4482_, v___x_4478_);
v___x_4484_ = l_Lake_BuildMetadata_writeFile(v_traceFile_4406_, v___x_4483_);
if (lean_obj_tag(v___x_4484_) == 0)
{
lean_object* v___x_4486_; uint8_t v_isShared_4487_; uint8_t v_isSharedCheck_4525_; 
v_isSharedCheck_4525_ = !lean_is_exclusive(v___x_4484_);
if (v_isSharedCheck_4525_ == 0)
{
lean_object* v_unused_4526_; 
v_unused_4526_ = lean_ctor_get(v___x_4484_, 0);
lean_dec(v_unused_4526_);
v___x_4486_ = v___x_4484_;
v_isShared_4487_ = v_isSharedCheck_4525_;
goto v_resetjp_4485_;
}
else
{
lean_dec(v___x_4484_);
v___x_4486_ = lean_box(0);
v_isShared_4487_ = v_isSharedCheck_4525_;
goto v_resetjp_4485_;
}
v_resetjp_4485_:
{
lean_object* v___x_4488_; 
v___x_4488_ = l_Lake_removeFileIfExists(v___x_4442_);
lean_dec_ref(v___x_4442_);
if (lean_obj_tag(v___x_4488_) == 0)
{
lean_object* v___x_4490_; uint8_t v_isShared_4491_; uint8_t v_isSharedCheck_4508_; 
v_isSharedCheck_4508_ = !lean_is_exclusive(v___x_4488_);
if (v_isSharedCheck_4508_ == 0)
{
lean_object* v_unused_4509_; 
v_unused_4509_ = lean_ctor_get(v___x_4488_, 0);
lean_dec(v_unused_4509_);
v___x_4490_ = v___x_4488_;
v_isShared_4491_ = v_isSharedCheck_4508_;
goto v_resetjp_4489_;
}
else
{
lean_dec(v___x_4488_);
v___x_4490_ = lean_box(0);
v_isShared_4491_ = v_isSharedCheck_4508_;
goto v_resetjp_4489_;
}
v_resetjp_4489_:
{
lean_object* v___x_4493_; 
lean_inc(v_a_4468_);
if (v_isShared_4491_ == 0)
{
lean_ctor_set(v___x_4490_, 0, v_a_4468_);
v___x_4493_ = v___x_4490_;
goto v_reusejp_4492_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v_a_4468_);
v___x_4493_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4492_;
}
v_reusejp_4492_:
{
lean_object* v___x_4495_; 
if (v_isShared_4487_ == 0)
{
lean_ctor_set_tag(v___x_4486_, 1);
lean_ctor_set(v___x_4486_, 0, v___x_4493_);
v___x_4495_ = v___x_4486_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4506_; 
v_reuseFailAlloc_4506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4506_, 0, v___x_4493_);
v___x_4495_ = v_reuseFailAlloc_4506_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
lean_object* v___x_4496_; lean_object* v_a_4497_; lean_object* v___x_4499_; uint8_t v_isShared_4500_; uint8_t v_isSharedCheck_4504_; 
v___x_4496_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___lam__0(v___x_4443_, v___x_4495_, v_a_4467_);
lean_dec_ref(v___x_4495_);
lean_dec(v___x_4443_);
v_a_4497_ = lean_ctor_get(v___x_4496_, 1);
v_isSharedCheck_4504_ = !lean_is_exclusive(v___x_4496_);
if (v_isSharedCheck_4504_ == 0)
{
lean_object* v_unused_4505_; 
v_unused_4505_ = lean_ctor_get(v___x_4496_, 0);
lean_dec(v_unused_4505_);
v___x_4499_ = v___x_4496_;
v_isShared_4500_ = v_isSharedCheck_4504_;
goto v_resetjp_4498_;
}
else
{
lean_inc(v_a_4497_);
lean_dec(v___x_4496_);
v___x_4499_ = lean_box(0);
v_isShared_4500_ = v_isSharedCheck_4504_;
goto v_resetjp_4498_;
}
v_resetjp_4498_:
{
lean_object* v___x_4502_; 
if (v_isShared_4500_ == 0)
{
lean_ctor_set(v___x_4499_, 0, v_a_4468_);
v___x_4502_ = v___x_4499_;
goto v_reusejp_4501_;
}
else
{
lean_object* v_reuseFailAlloc_4503_; 
v_reuseFailAlloc_4503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4503_, 0, v_a_4468_);
lean_ctor_set(v_reuseFailAlloc_4503_, 1, v_a_4497_);
v___x_4502_ = v_reuseFailAlloc_4503_;
goto v_reusejp_4501_;
}
v_reusejp_4501_:
{
return v___x_4502_;
}
}
}
}
}
}
else
{
lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4521_; 
lean_inc(v_buildTime_4474_);
lean_inc_ref(v_trace_4473_);
lean_inc_ref(v_log_4470_);
lean_del_object(v___x_4486_);
lean_dec(v_a_4468_);
v_isSharedCheck_4521_ = !lean_is_exclusive(v_a_4467_);
if (v_isSharedCheck_4521_ == 0)
{
lean_object* v_unused_4522_; lean_object* v_unused_4523_; lean_object* v_unused_4524_; 
v_unused_4522_ = lean_ctor_get(v_a_4467_, 2);
lean_dec(v_unused_4522_);
v_unused_4523_ = lean_ctor_get(v_a_4467_, 1);
lean_dec(v_unused_4523_);
v_unused_4524_ = lean_ctor_get(v_a_4467_, 0);
lean_dec(v_unused_4524_);
v___x_4511_ = v_a_4467_;
v_isShared_4512_ = v_isSharedCheck_4521_;
goto v_resetjp_4510_;
}
else
{
lean_dec(v_a_4467_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4521_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v_a_4513_; lean_object* v___x_4514_; uint8_t v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4519_; 
v_a_4513_ = lean_ctor_get(v___x_4488_, 0);
lean_inc(v_a_4513_);
lean_dec_ref_known(v___x_4488_, 1);
v___x_4514_ = lean_io_error_to_string(v_a_4513_);
v___x_4515_ = 3;
v___x_4516_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4516_, 0, v___x_4514_);
lean_ctor_set_uint8(v___x_4516_, sizeof(void*)*1, v___x_4515_);
v___x_4517_ = lean_array_push(v_log_4470_, v___x_4516_);
if (v_isShared_4512_ == 0)
{
lean_ctor_set(v___x_4511_, 0, v___x_4517_);
v___x_4519_ = v___x_4511_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4520_; 
v_reuseFailAlloc_4520_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4520_, 0, v___x_4517_);
lean_ctor_set(v_reuseFailAlloc_4520_, 1, v_trace_4473_);
lean_ctor_set(v_reuseFailAlloc_4520_, 2, v_buildTime_4474_);
lean_ctor_set_uint8(v_reuseFailAlloc_4520_, sizeof(void*)*3, v_action_4471_);
lean_ctor_set_uint8(v_reuseFailAlloc_4520_, sizeof(void*)*3 + 1, v_wantsRebuild_4472_);
v___x_4519_ = v_reuseFailAlloc_4520_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
v_a_4445_ = v___x_4477_;
v_a_4446_ = v___x_4519_;
goto v___jp_4444_;
}
}
}
}
}
else
{
lean_object* v___x_4528_; uint8_t v_isShared_4529_; uint8_t v_isSharedCheck_4538_; 
lean_inc(v_buildTime_4474_);
lean_inc_ref(v_trace_4473_);
lean_inc_ref(v_log_4470_);
lean_dec(v_a_4468_);
lean_dec_ref(v___x_4442_);
v_isSharedCheck_4538_ = !lean_is_exclusive(v_a_4467_);
if (v_isSharedCheck_4538_ == 0)
{
lean_object* v_unused_4539_; lean_object* v_unused_4540_; lean_object* v_unused_4541_; 
v_unused_4539_ = lean_ctor_get(v_a_4467_, 2);
lean_dec(v_unused_4539_);
v_unused_4540_ = lean_ctor_get(v_a_4467_, 1);
lean_dec(v_unused_4540_);
v_unused_4541_ = lean_ctor_get(v_a_4467_, 0);
lean_dec(v_unused_4541_);
v___x_4528_ = v_a_4467_;
v_isShared_4529_ = v_isSharedCheck_4538_;
goto v_resetjp_4527_;
}
else
{
lean_dec(v_a_4467_);
v___x_4528_ = lean_box(0);
v_isShared_4529_ = v_isSharedCheck_4538_;
goto v_resetjp_4527_;
}
v_resetjp_4527_:
{
lean_object* v_a_4530_; lean_object* v___x_4531_; uint8_t v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4536_; 
v_a_4530_ = lean_ctor_get(v___x_4484_, 0);
lean_inc(v_a_4530_);
lean_dec_ref_known(v___x_4484_, 1);
v___x_4531_ = lean_io_error_to_string(v_a_4530_);
v___x_4532_ = 3;
v___x_4533_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4533_, 0, v___x_4531_);
lean_ctor_set_uint8(v___x_4533_, sizeof(void*)*1, v___x_4532_);
v___x_4534_ = lean_array_push(v_log_4470_, v___x_4533_);
if (v_isShared_4529_ == 0)
{
lean_ctor_set(v___x_4528_, 0, v___x_4534_);
v___x_4536_ = v___x_4528_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4537_; 
v_reuseFailAlloc_4537_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4537_, 0, v___x_4534_);
lean_ctor_set(v_reuseFailAlloc_4537_, 1, v_trace_4473_);
lean_ctor_set(v_reuseFailAlloc_4537_, 2, v_buildTime_4474_);
lean_ctor_set_uint8(v_reuseFailAlloc_4537_, sizeof(void*)*3, v_action_4471_);
lean_ctor_set_uint8(v_reuseFailAlloc_4537_, sizeof(void*)*3 + 1, v_wantsRebuild_4472_);
v___x_4536_ = v_reuseFailAlloc_4537_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
v_a_4445_ = v___x_4477_;
v_a_4446_ = v___x_4536_;
goto v___jp_4444_;
}
}
}
}
}
}
else
{
lean_object* v_a_4551_; lean_object* v_a_4552_; 
lean_del_object(v___x_4464_);
lean_dec_ref(v___x_4442_);
lean_dec_ref(v_traceFile_4406_);
v_a_4551_ = lean_ctor_get(v___x_4466_, 0);
lean_inc(v_a_4551_);
v_a_4552_ = lean_ctor_get(v___x_4466_, 1);
lean_inc(v_a_4552_);
lean_dec_ref_known(v___x_4466_, 2);
v_a_4445_ = v_a_4551_;
v_a_4446_ = v_a_4552_;
goto v___jp_4444_;
}
}
}
else
{
lean_object* v___x_4556_; uint8_t v_isShared_4557_; uint8_t v_isSharedCheck_4567_; 
lean_inc(v_buildTime_4460_);
lean_inc_ref(v_trace_4459_);
lean_inc_ref(v_log_4456_);
lean_dec_ref(v___x_4442_);
lean_dec_ref(v_traceFile_4406_);
lean_dec_ref(v_ext_4404_);
lean_dec_ref(v_file_4401_);
v_isSharedCheck_4567_ = !lean_is_exclusive(v_a_4455_);
if (v_isSharedCheck_4567_ == 0)
{
lean_object* v_unused_4568_; lean_object* v_unused_4569_; lean_object* v_unused_4570_; 
v_unused_4568_ = lean_ctor_get(v_a_4455_, 2);
lean_dec(v_unused_4568_);
v_unused_4569_ = lean_ctor_get(v_a_4455_, 1);
lean_dec(v_unused_4569_);
v_unused_4570_ = lean_ctor_get(v_a_4455_, 0);
lean_dec(v_unused_4570_);
v___x_4556_ = v_a_4455_;
v_isShared_4557_ = v_isSharedCheck_4567_;
goto v_resetjp_4555_;
}
else
{
lean_dec(v_a_4455_);
v___x_4556_ = lean_box(0);
v_isShared_4557_ = v_isSharedCheck_4567_;
goto v_resetjp_4555_;
}
v_resetjp_4555_:
{
lean_object* v_a_4558_; lean_object* v___x_4559_; uint8_t v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4565_; 
v_a_4558_ = lean_ctor_get(v___x_4462_, 0);
lean_inc(v_a_4558_);
lean_dec_ref_known(v___x_4462_, 1);
v___x_4559_ = lean_io_error_to_string(v_a_4558_);
v___x_4560_ = 3;
v___x_4561_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4561_, 0, v___x_4559_);
lean_ctor_set_uint8(v___x_4561_, sizeof(void*)*1, v___x_4560_);
v___x_4562_ = lean_array_get_size(v_log_4456_);
v___x_4563_ = lean_array_push(v_log_4456_, v___x_4561_);
if (v_isShared_4557_ == 0)
{
lean_ctor_set(v___x_4556_, 0, v___x_4563_);
v___x_4565_ = v___x_4556_;
goto v_reusejp_4564_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v___x_4563_);
lean_ctor_set(v_reuseFailAlloc_4566_, 1, v_trace_4459_);
lean_ctor_set(v_reuseFailAlloc_4566_, 2, v_buildTime_4460_);
lean_ctor_set_uint8(v_reuseFailAlloc_4566_, sizeof(void*)*3, v_action_4457_);
lean_ctor_set_uint8(v_reuseFailAlloc_4566_, sizeof(void*)*3 + 1, v_wantsRebuild_4458_);
v___x_4565_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4564_;
}
v_reusejp_4564_:
{
v_a_4445_ = v___x_4562_;
v_a_4446_ = v___x_4565_;
goto v___jp_4444_;
}
}
}
}
else
{
lean_object* v___x_4572_; uint8_t v_isShared_4573_; uint8_t v_isSharedCheck_4583_; 
lean_inc(v_buildTime_4460_);
lean_inc_ref(v_trace_4459_);
lean_inc_ref(v_log_4456_);
lean_dec_ref(v___x_4442_);
lean_dec_ref(v_traceFile_4406_);
lean_dec_ref(v_ext_4404_);
lean_dec_ref(v_file_4401_);
v_isSharedCheck_4583_ = !lean_is_exclusive(v_a_4455_);
if (v_isSharedCheck_4583_ == 0)
{
lean_object* v_unused_4584_; lean_object* v_unused_4585_; lean_object* v_unused_4586_; 
v_unused_4584_ = lean_ctor_get(v_a_4455_, 2);
lean_dec(v_unused_4584_);
v_unused_4585_ = lean_ctor_get(v_a_4455_, 1);
lean_dec(v_unused_4585_);
v_unused_4586_ = lean_ctor_get(v_a_4455_, 0);
lean_dec(v_unused_4586_);
v___x_4572_ = v_a_4455_;
v_isShared_4573_ = v_isSharedCheck_4583_;
goto v_resetjp_4571_;
}
else
{
lean_dec(v_a_4455_);
v___x_4572_ = lean_box(0);
v_isShared_4573_ = v_isSharedCheck_4583_;
goto v_resetjp_4571_;
}
v_resetjp_4571_:
{
lean_object* v_a_4574_; lean_object* v___x_4575_; uint8_t v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4581_; 
v_a_4574_ = lean_ctor_get(v___x_4461_, 0);
lean_inc(v_a_4574_);
lean_dec_ref_known(v___x_4461_, 1);
v___x_4575_ = lean_io_error_to_string(v_a_4574_);
v___x_4576_ = 3;
v___x_4577_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4577_, 0, v___x_4575_);
lean_ctor_set_uint8(v___x_4577_, sizeof(void*)*1, v___x_4576_);
v___x_4578_ = lean_array_get_size(v_log_4456_);
v___x_4579_ = lean_array_push(v_log_4456_, v___x_4577_);
if (v_isShared_4573_ == 0)
{
lean_ctor_set(v___x_4572_, 0, v___x_4579_);
v___x_4581_ = v___x_4572_;
goto v_reusejp_4580_;
}
else
{
lean_object* v_reuseFailAlloc_4582_; 
v_reuseFailAlloc_4582_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4582_, 0, v___x_4579_);
lean_ctor_set(v_reuseFailAlloc_4582_, 1, v_trace_4459_);
lean_ctor_set(v_reuseFailAlloc_4582_, 2, v_buildTime_4460_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*3, v_action_4457_);
lean_ctor_set_uint8(v_reuseFailAlloc_4582_, sizeof(void*)*3 + 1, v_wantsRebuild_4458_);
v___x_4581_ = v_reuseFailAlloc_4582_;
goto v_reusejp_4580_;
}
v_reusejp_4580_:
{
v_a_4445_ = v___x_4578_;
v_a_4446_ = v___x_4581_;
goto v___jp_4444_;
}
}
}
}
else
{
lean_object* v_a_4587_; lean_object* v_a_4588_; 
lean_dec_ref(v___x_4442_);
lean_dec_ref(v_traceFile_4406_);
lean_dec_ref(v_ext_4404_);
lean_dec_ref(v_file_4401_);
v_a_4587_ = lean_ctor_get(v___x_4454_, 0);
lean_inc(v_a_4587_);
v_a_4588_ = lean_ctor_get(v___x_4454_, 1);
lean_inc(v_a_4588_);
lean_dec_ref_known(v___x_4454_, 2);
v_a_4445_ = v_a_4587_;
v_a_4446_ = v_a_4588_;
goto v___jp_4444_;
}
}
}
else
{
lean_object* v_a_4590_; lean_object* v___x_4591_; uint8_t v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4596_; 
lean_dec_ref(v___x_4442_);
lean_dec_ref(v___y_4407_);
lean_dec_ref(v_traceFile_4406_);
lean_dec_ref(v_ext_4404_);
lean_dec_ref(v_build_4402_);
lean_dec_ref(v_file_4401_);
v_a_4590_ = lean_ctor_get(v___x_4451_, 0);
lean_inc(v_a_4590_);
lean_dec_ref_known(v___x_4451_, 1);
v___x_4591_ = lean_io_error_to_string(v_a_4590_);
v___x_4592_ = 3;
v___x_4593_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4593_, 0, v___x_4591_);
lean_ctor_set_uint8(v___x_4593_, sizeof(void*)*1, v___x_4592_);
v___x_4594_ = lean_array_push(v_log_4430_, v___x_4593_);
if (v_isShared_4437_ == 0)
{
lean_ctor_set(v___x_4436_, 0, v___x_4594_);
v___x_4596_ = v___x_4436_;
goto v_reusejp_4595_;
}
else
{
lean_object* v_reuseFailAlloc_4597_; 
v_reuseFailAlloc_4597_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4597_, 0, v___x_4594_);
lean_ctor_set(v_reuseFailAlloc_4597_, 1, v_trace_4433_);
lean_ctor_set(v_reuseFailAlloc_4597_, 2, v_buildTime_4434_);
lean_ctor_set_uint8(v_reuseFailAlloc_4597_, sizeof(void*)*3 + 1, v_wantsRebuild_4432_);
v___x_4596_ = v_reuseFailAlloc_4597_;
goto v_reusejp_4595_;
}
v_reusejp_4595_:
{
lean_ctor_set_uint8(v___x_4596_, sizeof(void*)*3, v___x_4440_);
v_a_4445_ = v___x_4450_;
v_a_4446_ = v___x_4596_;
goto v___jp_4444_;
}
}
v___jp_4444_:
{
lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v_a_4449_; 
v___x_4447_ = lean_box(0);
v___x_4448_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___lam__0(v___x_4443_, v___x_4447_, v_a_4446_);
lean_dec(v___x_4443_);
v_a_4449_ = lean_ctor_get(v___x_4448_, 1);
lean_inc(v_a_4449_);
lean_dec_ref(v___x_4448_);
v_a_4415_ = v_a_4445_;
v_a_4416_ = v_a_4449_;
goto v___jp_4414_;
}
}
else
{
uint8_t v___x_4598_; 
lean_dec_ref(v___y_4407_);
lean_dec_ref(v_ext_4404_);
lean_dec_ref(v_build_4402_);
lean_dec_ref(v_file_4401_);
v___x_4598_ = l_System_FilePath_pathExists(v_traceFile_4406_);
lean_dec_ref(v_traceFile_4406_);
if (v___x_4598_ == 0)
{
lean_dec_ref(v___x_4442_);
lean_del_object(v___x_4436_);
v_log_4419_ = v_log_4430_;
v_action_4420_ = v___x_4440_;
v_wantsRebuild_4421_ = v_noBuild_4438_;
v_trace_4422_ = v_trace_4433_;
v_buildTime_4423_ = v_buildTime_4434_;
goto v___jp_4418_;
}
else
{
lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4599_ = lean_box(0);
v___x_4600_ = ((lean_object*)(l_Lake_BuildMetadata_fromJsonObject_x3f___closed__1));
v___x_4601_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_4405_, v___x_4599_, v___x_4600_);
v___x_4602_ = l_Lake_BuildMetadata_writeFile(v___x_4442_, v___x_4601_);
if (lean_obj_tag(v___x_4602_) == 0)
{
lean_dec_ref_known(v___x_4602_, 1);
lean_del_object(v___x_4436_);
v_log_4419_ = v_log_4430_;
v_action_4420_ = v___x_4440_;
v_wantsRebuild_4421_ = v_noBuild_4438_;
v_trace_4422_ = v_trace_4433_;
v_buildTime_4423_ = v_buildTime_4434_;
goto v___jp_4418_;
}
else
{
lean_object* v_a_4603_; lean_object* v___x_4604_; uint8_t v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4610_; 
v_a_4603_ = lean_ctor_get(v___x_4602_, 0);
lean_inc(v_a_4603_);
lean_dec_ref_known(v___x_4602_, 1);
v___x_4604_ = lean_io_error_to_string(v_a_4603_);
v___x_4605_ = 3;
v___x_4606_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4606_, 0, v___x_4604_);
lean_ctor_set_uint8(v___x_4606_, sizeof(void*)*1, v___x_4605_);
v___x_4607_ = lean_array_get_size(v_log_4430_);
v___x_4608_ = lean_array_push(v_log_4430_, v___x_4606_);
if (v_isShared_4437_ == 0)
{
lean_ctor_set(v___x_4436_, 0, v___x_4608_);
v___x_4610_ = v___x_4436_;
goto v_reusejp_4609_;
}
else
{
lean_object* v_reuseFailAlloc_4612_; 
v_reuseFailAlloc_4612_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4612_, 0, v___x_4608_);
lean_ctor_set(v_reuseFailAlloc_4612_, 1, v_trace_4433_);
lean_ctor_set(v_reuseFailAlloc_4612_, 2, v_buildTime_4434_);
v___x_4610_ = v_reuseFailAlloc_4612_;
goto v_reusejp_4609_;
}
v_reusejp_4609_:
{
lean_object* v___x_4611_; 
lean_ctor_set_uint8(v___x_4610_, sizeof(void*)*3, v___x_4440_);
lean_ctor_set_uint8(v___x_4610_, sizeof(void*)*3 + 1, v_noBuild_4438_);
v___x_4611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4611_, 0, v___x_4607_);
lean_ctor_set(v___x_4611_, 1, v___x_4610_);
return v___x_4611_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild___boxed(lean_object* v_file_4614_, lean_object* v_build_4615_, lean_object* v_text_4616_, lean_object* v_ext_4617_, lean_object* v_depTrace_4618_, lean_object* v_traceFile_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_){
_start:
{
uint8_t v_text_boxed_4627_; lean_object* v_res_4628_; 
v_text_boxed_4627_ = lean_unbox(v_text_4616_);
v_res_4628_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_4614_, v_build_4615_, v_text_boxed_4627_, v_ext_4617_, v_depTrace_4618_, v_traceFile_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_);
lean_dec_ref(v___y_4624_);
lean_dec(v___y_4623_);
lean_dec(v___y_4622_);
lean_dec(v___y_4621_);
lean_dec_ref(v_depTrace_4618_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(lean_object* v_art_4630_, lean_object* v_traceFile_4631_, lean_object* v___y_4632_){
_start:
{
lean_object* v_log_4634_; uint8_t v_action_4635_; uint8_t v_wantsRebuild_4636_; lean_object* v_trace_4637_; lean_object* v_buildTime_4638_; lean_object* v___x_4639_; 
v_log_4634_ = lean_ctor_get(v___y_4632_, 0);
v_action_4635_ = lean_ctor_get_uint8(v___y_4632_, sizeof(void*)*3);
v_wantsRebuild_4636_ = lean_ctor_get_uint8(v___y_4632_, sizeof(void*)*3 + 1);
v_trace_4637_ = lean_ctor_get(v___y_4632_, 1);
v_buildTime_4638_ = lean_ctor_get(v___y_4632_, 2);
v___x_4639_ = lean_io_metadata(v_traceFile_4631_);
if (lean_obj_tag(v___x_4639_) == 0)
{
lean_object* v_a_4640_; lean_object* v_modified_4641_; lean_object* v_descr_4642_; lean_object* v_path_4643_; lean_object* v_name_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4652_; 
v_a_4640_ = lean_ctor_get(v___x_4639_, 0);
lean_inc(v_a_4640_);
lean_dec_ref_known(v___x_4639_, 1);
v_modified_4641_ = lean_ctor_get(v_a_4640_, 1);
lean_inc_ref(v_modified_4641_);
lean_dec(v_a_4640_);
v_descr_4642_ = lean_ctor_get(v_art_4630_, 0);
v_path_4643_ = lean_ctor_get(v_art_4630_, 1);
v_name_4644_ = lean_ctor_get(v_art_4630_, 2);
v_isSharedCheck_4652_ = !lean_is_exclusive(v_art_4630_);
if (v_isSharedCheck_4652_ == 0)
{
lean_object* v_unused_4653_; 
v_unused_4653_ = lean_ctor_get(v_art_4630_, 3);
lean_dec(v_unused_4653_);
v___x_4646_ = v_art_4630_;
v_isShared_4647_ = v_isSharedCheck_4652_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_name_4644_);
lean_inc(v_path_4643_);
lean_inc(v_descr_4642_);
lean_dec(v_art_4630_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4652_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
lean_object* v___x_4649_; 
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 3, v_modified_4641_);
v___x_4649_ = v___x_4646_;
goto v_reusejp_4648_;
}
else
{
lean_object* v_reuseFailAlloc_4651_; 
v_reuseFailAlloc_4651_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4651_, 0, v_descr_4642_);
lean_ctor_set(v_reuseFailAlloc_4651_, 1, v_path_4643_);
lean_ctor_set(v_reuseFailAlloc_4651_, 2, v_name_4644_);
lean_ctor_set(v_reuseFailAlloc_4651_, 3, v_modified_4641_);
v___x_4649_ = v_reuseFailAlloc_4651_;
goto v_reusejp_4648_;
}
v_reusejp_4648_:
{
lean_object* v___x_4650_; 
v___x_4650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4650_, 0, v___x_4649_);
lean_ctor_set(v___x_4650_, 1, v___y_4632_);
return v___x_4650_;
}
}
}
else
{
lean_object* v_a_4654_; 
v_a_4654_ = lean_ctor_get(v___x_4639_, 0);
lean_inc(v_a_4654_);
lean_dec_ref_known(v___x_4639_, 1);
if (lean_obj_tag(v_a_4654_) == 11)
{
lean_object* v___x_4655_; 
lean_dec_ref_known(v_a_4654_, 2);
v___x_4655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4655_, 0, v_art_4630_);
lean_ctor_set(v___x_4655_, 1, v___y_4632_);
return v___x_4655_;
}
else
{
lean_object* v___x_4657_; uint8_t v_isShared_4658_; uint8_t v_isSharedCheck_4670_; 
lean_inc(v_buildTime_4638_);
lean_inc_ref(v_trace_4637_);
lean_inc_ref(v_log_4634_);
lean_dec_ref(v_art_4630_);
v_isSharedCheck_4670_ = !lean_is_exclusive(v___y_4632_);
if (v_isSharedCheck_4670_ == 0)
{
lean_object* v_unused_4671_; lean_object* v_unused_4672_; lean_object* v_unused_4673_; 
v_unused_4671_ = lean_ctor_get(v___y_4632_, 2);
lean_dec(v_unused_4671_);
v_unused_4672_ = lean_ctor_get(v___y_4632_, 1);
lean_dec(v_unused_4672_);
v_unused_4673_ = lean_ctor_get(v___y_4632_, 0);
lean_dec(v_unused_4673_);
v___x_4657_ = v___y_4632_;
v_isShared_4658_ = v_isSharedCheck_4670_;
goto v_resetjp_4656_;
}
else
{
lean_dec(v___y_4632_);
v___x_4657_ = lean_box(0);
v_isShared_4658_ = v_isSharedCheck_4670_;
goto v_resetjp_4656_;
}
v_resetjp_4656_:
{
lean_object* v___x_4659_; lean_object* v___x_4660_; lean_object* v___x_4661_; uint8_t v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4667_; 
v___x_4659_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___closed__0));
v___x_4660_ = lean_io_error_to_string(v_a_4654_);
v___x_4661_ = lean_string_append(v___x_4659_, v___x_4660_);
lean_dec_ref(v___x_4660_);
v___x_4662_ = 3;
v___x_4663_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4663_, 0, v___x_4661_);
lean_ctor_set_uint8(v___x_4663_, sizeof(void*)*1, v___x_4662_);
v___x_4664_ = lean_array_get_size(v_log_4634_);
v___x_4665_ = lean_array_push(v_log_4634_, v___x_4663_);
if (v_isShared_4658_ == 0)
{
lean_ctor_set(v___x_4657_, 0, v___x_4665_);
v___x_4667_ = v___x_4657_;
goto v_reusejp_4666_;
}
else
{
lean_object* v_reuseFailAlloc_4669_; 
v_reuseFailAlloc_4669_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4669_, 0, v___x_4665_);
lean_ctor_set(v_reuseFailAlloc_4669_, 1, v_trace_4637_);
lean_ctor_set(v_reuseFailAlloc_4669_, 2, v_buildTime_4638_);
lean_ctor_set_uint8(v_reuseFailAlloc_4669_, sizeof(void*)*3, v_action_4635_);
lean_ctor_set_uint8(v_reuseFailAlloc_4669_, sizeof(void*)*3 + 1, v_wantsRebuild_4636_);
v___x_4667_ = v_reuseFailAlloc_4669_;
goto v_reusejp_4666_;
}
v_reusejp_4666_:
{
lean_object* v___x_4668_; 
v___x_4668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4668_, 0, v___x_4664_);
lean_ctor_set(v___x_4668_, 1, v___x_4667_);
return v___x_4668_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg___boxed(lean_object* v_art_4674_, lean_object* v_traceFile_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_){
_start:
{
lean_object* v_res_4678_; 
v_res_4678_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_4674_, v_traceFile_4675_, v___y_4676_);
lean_dec_ref(v_traceFile_4675_);
return v_res_4678_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(lean_object* v_art_4679_, lean_object* v_traceFile_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_){
_start:
{
lean_object* v___x_4688_; 
v___x_4688_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_4679_, v_traceFile_4680_, v___y_4686_);
return v___x_4688_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___boxed(lean_object* v_art_4689_, lean_object* v_traceFile_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_){
_start:
{
lean_object* v_res_4698_; 
v_res_4698_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime(v_art_4689_, v_traceFile_4690_, v___y_4691_, v___y_4692_, v___y_4693_, v___y_4694_, v___y_4695_, v___y_4696_);
lean_dec_ref(v___y_4695_);
lean_dec(v___y_4694_);
lean_dec(v___y_4693_);
lean_dec(v___y_4692_);
lean_dec_ref(v___y_4691_);
lean_dec_ref(v_traceFile_4690_);
return v_res_4698_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___lam__0(lean_object* v_a_4699_, lean_object* v_____r_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_){
_start:
{
lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; 
v___x_4708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4708_, 0, v_a_4699_);
v___x_4709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4709_, 0, v___x_4708_);
v___x_4710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4710_, 0, v___x_4709_);
lean_ctor_set(v___x_4710_, 1, v___y_4706_);
return v___x_4710_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___lam__0___boxed(lean_object* v_a_4711_, lean_object* v_____r_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_){
_start:
{
lean_object* v_res_4720_; 
v_res_4720_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___lam__0(v_a_4711_, v_____r_4712_, v___y_4713_, v___y_4714_, v___y_4715_, v___y_4716_, v___y_4717_, v___y_4718_);
lean_dec_ref(v___y_4717_);
lean_dec(v___y_4716_);
lean_dec(v___y_4715_);
lean_dec(v___y_4714_);
lean_dec_ref(v___y_4713_);
return v_res_4720_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(uint8_t v_exe_4721_, lean_object* v___y_4722_, uint64_t v_inputHash_4723_, lean_object* v_savedTrace_4724_, lean_object* v_pkg_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_){
_start:
{
lean_object* v___y_4733_; lean_object* v_a_4737_; lean_object* v_a_4738_; lean_object* v___y_4753_; 
if (lean_obj_tag(v_savedTrace_4724_) == 2)
{
lean_object* v_data_4768_; uint64_t v_depHash_4769_; lean_object* v_outputs_x3f_4770_; uint8_t v___x_4771_; 
v_data_4768_ = lean_ctor_get(v_savedTrace_4724_, 0);
lean_inc_ref(v_data_4768_);
lean_dec_ref_known(v_savedTrace_4724_, 1);
v_depHash_4769_ = lean_ctor_get_uint64(v_data_4768_, sizeof(void*)*3);
v_outputs_x3f_4770_ = lean_ctor_get(v_data_4768_, 1);
lean_inc(v_outputs_x3f_4770_);
lean_dec_ref(v_data_4768_);
v___x_4771_ = lean_uint64_dec_eq(v_depHash_4769_, v_inputHash_4723_);
if (v___x_4771_ == 0)
{
lean_dec(v_outputs_x3f_4770_);
lean_dec_ref(v_pkg_4725_);
lean_dec_ref(v___y_4722_);
v___y_4733_ = v___y_4730_;
goto v___jp_4732_;
}
else
{
if (lean_obj_tag(v_outputs_x3f_4770_) == 1)
{
lean_object* v_val_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; 
v_val_4772_ = lean_ctor_get(v_outputs_x3f_4770_, 0);
lean_inc_n(v_val_4772_, 2);
lean_dec_ref_known(v_outputs_x3f_4770_, 1);
v___x_4773_ = lean_box(0);
v___x_4774_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4774_, 0, v_val_4772_);
lean_ctor_set(v___x_4774_, 1, v___x_4773_);
lean_ctor_set(v___x_4774_, 2, v___x_4773_);
lean_inc_ref(v___y_4722_);
v___x_4775_ = l_Lake_resolveArtifactOutput(v___x_4774_, v_exe_4721_, v___y_4722_, v___y_4726_, v___y_4727_, v___y_4728_, v___y_4729_, v___y_4730_);
if (lean_obj_tag(v___x_4775_) == 0)
{
lean_object* v_config_4776_; lean_object* v_a_4777_; lean_object* v_a_4778_; lean_object* v_enableArtifactCache_x3f_4779_; lean_object* v_a_4781_; uint8_t v_a_4785_; lean_object* v_a_4786_; 
v_config_4776_ = lean_ctor_get(v_pkg_4725_, 6);
v_a_4777_ = lean_ctor_get(v___x_4775_, 0);
lean_inc(v_a_4777_);
v_a_4778_ = lean_ctor_get(v___x_4775_, 1);
lean_inc(v_a_4778_);
lean_dec_ref_known(v___x_4775_, 2);
v_enableArtifactCache_x3f_4779_ = lean_ctor_get(v_config_4776_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_4779_) == 0)
{
lean_object* v_toContext_4818_; lean_object* v_lakeEnv_4819_; lean_object* v_enableArtifactCache_x3f_4820_; 
v_toContext_4818_ = lean_ctor_get(v___y_4729_, 1);
v_lakeEnv_4819_ = lean_ctor_get(v_toContext_4818_, 0);
v_enableArtifactCache_x3f_4820_ = lean_ctor_get(v_lakeEnv_4819_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_4820_) == 0)
{
lean_object* v_packages_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v_config_4824_; lean_object* v_enableArtifactCache_x3f_4825_; 
v_packages_4821_ = lean_ctor_get(v_toContext_4818_, 4);
v___x_4822_ = lean_unsigned_to_nat(0u);
v___x_4823_ = lean_array_fget_borrowed(v_packages_4821_, v___x_4822_);
v_config_4824_ = lean_ctor_get(v___x_4823_, 6);
v_enableArtifactCache_x3f_4825_ = lean_ctor_get(v_config_4824_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_4825_) == 0)
{
lean_dec(v_val_4772_);
lean_dec_ref(v_pkg_4725_);
v_a_4781_ = v_a_4778_;
goto v___jp_4780_;
}
else
{
lean_object* v_val_4826_; uint8_t v___x_4827_; 
v_val_4826_ = lean_ctor_get(v_enableArtifactCache_x3f_4825_, 0);
v___x_4827_ = lean_unbox(v_val_4826_);
v_a_4785_ = v___x_4827_;
v_a_4786_ = v_a_4778_;
goto v___jp_4784_;
}
}
else
{
lean_object* v_val_4828_; uint8_t v___x_4829_; 
v_val_4828_ = lean_ctor_get(v_enableArtifactCache_x3f_4820_, 0);
v___x_4829_ = lean_unbox(v_val_4828_);
v_a_4785_ = v___x_4829_;
v_a_4786_ = v_a_4778_;
goto v___jp_4784_;
}
}
else
{
lean_object* v_val_4830_; uint8_t v___x_4831_; 
v_val_4830_ = lean_ctor_get(v_enableArtifactCache_x3f_4779_, 0);
v___x_4831_ = lean_unbox(v_val_4830_);
v_a_4785_ = v___x_4831_;
v_a_4786_ = v_a_4778_;
goto v___jp_4784_;
}
v___jp_4780_:
{
lean_object* v___x_4782_; lean_object* v___x_4783_; 
v___x_4782_ = lean_box(0);
v___x_4783_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___lam__0(v_a_4777_, v___x_4782_, v___y_4722_, v___y_4726_, v___y_4727_, v___y_4728_, v___y_4729_, v_a_4781_);
lean_dec_ref(v___y_4722_);
v___y_4753_ = v___x_4783_;
goto v___jp_4752_;
}
v___jp_4784_:
{
if (v_a_4785_ == 0)
{
lean_dec(v_val_4772_);
lean_dec_ref(v_pkg_4725_);
v_a_4781_ = v_a_4786_;
goto v___jp_4780_;
}
else
{
lean_object* v_toContext_4787_; lean_object* v_log_4788_; uint8_t v_action_4789_; uint8_t v_wantsRebuild_4790_; lean_object* v_trace_4791_; lean_object* v_buildTime_4792_; lean_object* v_lakeCache_4793_; lean_object* v___x_4794_; uint8_t v___x_4795_; lean_object* v___x_4796_; 
v_toContext_4787_ = lean_ctor_get(v___y_4729_, 1);
v_log_4788_ = lean_ctor_get(v_a_4786_, 0);
v_action_4789_ = lean_ctor_get_uint8(v_a_4786_, sizeof(void*)*3);
v_wantsRebuild_4790_ = lean_ctor_get_uint8(v_a_4786_, sizeof(void*)*3 + 1);
v_trace_4791_ = lean_ctor_get(v_a_4786_, 1);
v_buildTime_4792_ = lean_ctor_get(v_a_4786_, 2);
v_lakeCache_4793_ = lean_ctor_get(v_toContext_4787_, 2);
v___x_4794_ = l_Lake_Package_cacheScope(v_pkg_4725_);
v___x_4795_ = 0;
lean_inc_ref(v_lakeCache_4793_);
v___x_4796_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_4793_, v___x_4794_, v_inputHash_4723_, v_val_4772_, v___x_4773_, v___x_4773_, v___x_4795_);
if (lean_obj_tag(v___x_4796_) == 0)
{
lean_object* v___x_4797_; lean_object* v___x_4798_; 
lean_dec_ref_known(v___x_4796_, 1);
v___x_4797_ = lean_box(0);
v___x_4798_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___lam__0(v_a_4777_, v___x_4797_, v___y_4722_, v___y_4726_, v___y_4727_, v___y_4728_, v___y_4729_, v_a_4786_);
lean_dec_ref(v___y_4722_);
v___y_4753_ = v___x_4798_;
goto v___jp_4752_;
}
else
{
lean_object* v___x_4800_; uint8_t v_isShared_4801_; uint8_t v_isSharedCheck_4814_; 
lean_inc(v_buildTime_4792_);
lean_inc_ref(v_trace_4791_);
lean_inc_ref(v_log_4788_);
v_isSharedCheck_4814_ = !lean_is_exclusive(v_a_4786_);
if (v_isSharedCheck_4814_ == 0)
{
lean_object* v_unused_4815_; lean_object* v_unused_4816_; lean_object* v_unused_4817_; 
v_unused_4815_ = lean_ctor_get(v_a_4786_, 2);
lean_dec(v_unused_4815_);
v_unused_4816_ = lean_ctor_get(v_a_4786_, 1);
lean_dec(v_unused_4816_);
v_unused_4817_ = lean_ctor_get(v_a_4786_, 0);
lean_dec(v_unused_4817_);
v___x_4800_ = v_a_4786_;
v_isShared_4801_ = v_isSharedCheck_4814_;
goto v_resetjp_4799_;
}
else
{
lean_dec(v_a_4786_);
v___x_4800_ = lean_box(0);
v_isShared_4801_ = v_isSharedCheck_4814_;
goto v_resetjp_4799_;
}
v_resetjp_4799_:
{
lean_object* v_a_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; uint8_t v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4811_; 
v_a_4802_ = lean_ctor_get(v___x_4796_, 0);
lean_inc(v_a_4802_);
lean_dec_ref_known(v___x_4796_, 1);
v___x_4803_ = ((lean_object*)(l_Lake_getArtifactsUsingTrace_x3f___redArg___closed__0));
v___x_4804_ = lean_io_error_to_string(v_a_4802_);
v___x_4805_ = lean_string_append(v___x_4803_, v___x_4804_);
lean_dec_ref(v___x_4804_);
v___x_4806_ = 2;
v___x_4807_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4807_, 0, v___x_4805_);
lean_ctor_set_uint8(v___x_4807_, sizeof(void*)*1, v___x_4806_);
v___x_4808_ = lean_box(0);
v___x_4809_ = lean_array_push(v_log_4788_, v___x_4807_);
if (v_isShared_4801_ == 0)
{
lean_ctor_set(v___x_4800_, 0, v___x_4809_);
v___x_4811_ = v___x_4800_;
goto v_reusejp_4810_;
}
else
{
lean_object* v_reuseFailAlloc_4813_; 
v_reuseFailAlloc_4813_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4813_, 0, v___x_4809_);
lean_ctor_set(v_reuseFailAlloc_4813_, 1, v_trace_4791_);
lean_ctor_set(v_reuseFailAlloc_4813_, 2, v_buildTime_4792_);
lean_ctor_set_uint8(v_reuseFailAlloc_4813_, sizeof(void*)*3, v_action_4789_);
lean_ctor_set_uint8(v_reuseFailAlloc_4813_, sizeof(void*)*3 + 1, v_wantsRebuild_4790_);
v___x_4811_ = v_reuseFailAlloc_4813_;
goto v_reusejp_4810_;
}
v_reusejp_4810_:
{
lean_object* v___x_4812_; 
v___x_4812_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___lam__0(v_a_4777_, v___x_4808_, v___y_4722_, v___y_4726_, v___y_4727_, v___y_4728_, v___y_4729_, v___x_4811_);
lean_dec_ref(v___y_4722_);
v___y_4753_ = v___x_4812_;
goto v___jp_4752_;
}
}
}
}
}
}
else
{
lean_object* v_a_4832_; lean_object* v_a_4833_; 
lean_dec(v_val_4772_);
lean_dec_ref(v_pkg_4725_);
lean_dec_ref(v___y_4722_);
v_a_4832_ = lean_ctor_get(v___x_4775_, 0);
lean_inc(v_a_4832_);
v_a_4833_ = lean_ctor_get(v___x_4775_, 1);
lean_inc(v_a_4833_);
lean_dec_ref_known(v___x_4775_, 2);
v_a_4737_ = v_a_4832_;
v_a_4738_ = v_a_4833_;
goto v___jp_4736_;
}
}
else
{
lean_dec(v_outputs_x3f_4770_);
lean_dec_ref(v_pkg_4725_);
lean_dec_ref(v___y_4722_);
v___y_4733_ = v___y_4730_;
goto v___jp_4732_;
}
}
}
else
{
lean_dec_ref(v_pkg_4725_);
lean_dec(v_savedTrace_4724_);
lean_dec_ref(v___y_4722_);
v___y_4733_ = v___y_4730_;
goto v___jp_4732_;
}
v___jp_4732_:
{
lean_object* v___x_4734_; lean_object* v___x_4735_; 
v___x_4734_ = lean_box(0);
v___x_4735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4735_, 0, v___x_4734_);
lean_ctor_set(v___x_4735_, 1, v___y_4733_);
return v___x_4735_;
}
v___jp_4736_:
{
lean_object* v_log_4739_; uint8_t v_action_4740_; uint8_t v_wantsRebuild_4741_; lean_object* v_trace_4742_; lean_object* v_buildTime_4743_; lean_object* v___x_4745_; uint8_t v_isShared_4746_; uint8_t v_isSharedCheck_4751_; 
v_log_4739_ = lean_ctor_get(v_a_4738_, 0);
v_action_4740_ = lean_ctor_get_uint8(v_a_4738_, sizeof(void*)*3);
v_wantsRebuild_4741_ = lean_ctor_get_uint8(v_a_4738_, sizeof(void*)*3 + 1);
v_trace_4742_ = lean_ctor_get(v_a_4738_, 1);
v_buildTime_4743_ = lean_ctor_get(v_a_4738_, 2);
v_isSharedCheck_4751_ = !lean_is_exclusive(v_a_4738_);
if (v_isSharedCheck_4751_ == 0)
{
v___x_4745_ = v_a_4738_;
v_isShared_4746_ = v_isSharedCheck_4751_;
goto v_resetjp_4744_;
}
else
{
lean_inc(v_buildTime_4743_);
lean_inc(v_trace_4742_);
lean_inc(v_log_4739_);
lean_dec(v_a_4738_);
v___x_4745_ = lean_box(0);
v_isShared_4746_ = v_isSharedCheck_4751_;
goto v_resetjp_4744_;
}
v_resetjp_4744_:
{
lean_object* v___x_4747_; lean_object* v___x_4749_; 
v___x_4747_ = l_Array_shrink___redArg(v_log_4739_, v_a_4737_);
lean_dec(v_a_4737_);
if (v_isShared_4746_ == 0)
{
lean_ctor_set(v___x_4745_, 0, v___x_4747_);
v___x_4749_ = v___x_4745_;
goto v_reusejp_4748_;
}
else
{
lean_object* v_reuseFailAlloc_4750_; 
v_reuseFailAlloc_4750_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4750_, 0, v___x_4747_);
lean_ctor_set(v_reuseFailAlloc_4750_, 1, v_trace_4742_);
lean_ctor_set(v_reuseFailAlloc_4750_, 2, v_buildTime_4743_);
lean_ctor_set_uint8(v_reuseFailAlloc_4750_, sizeof(void*)*3, v_action_4740_);
lean_ctor_set_uint8(v_reuseFailAlloc_4750_, sizeof(void*)*3 + 1, v_wantsRebuild_4741_);
v___x_4749_ = v_reuseFailAlloc_4750_;
goto v_reusejp_4748_;
}
v_reusejp_4748_:
{
v___y_4733_ = v___x_4749_;
goto v___jp_4732_;
}
}
}
v___jp_4752_:
{
if (lean_obj_tag(v___y_4753_) == 0)
{
lean_object* v_a_4754_; 
v_a_4754_ = lean_ctor_get(v___y_4753_, 0);
if (lean_obj_tag(v_a_4754_) == 0)
{
lean_object* v_a_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4763_; 
lean_inc_ref(v_a_4754_);
v_a_4755_ = lean_ctor_get(v___y_4753_, 1);
v_isSharedCheck_4763_ = !lean_is_exclusive(v___y_4753_);
if (v_isSharedCheck_4763_ == 0)
{
lean_object* v_unused_4764_; 
v_unused_4764_ = lean_ctor_get(v___y_4753_, 0);
lean_dec(v_unused_4764_);
v___x_4757_ = v___y_4753_;
v_isShared_4758_ = v_isSharedCheck_4763_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_a_4755_);
lean_dec(v___y_4753_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4763_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v_a_4759_; lean_object* v___x_4761_; 
v_a_4759_ = lean_ctor_get(v_a_4754_, 0);
lean_inc(v_a_4759_);
lean_dec_ref_known(v_a_4754_, 1);
if (v_isShared_4758_ == 0)
{
lean_ctor_set(v___x_4757_, 0, v_a_4759_);
v___x_4761_ = v___x_4757_;
goto v_reusejp_4760_;
}
else
{
lean_object* v_reuseFailAlloc_4762_; 
v_reuseFailAlloc_4762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4762_, 0, v_a_4759_);
lean_ctor_set(v_reuseFailAlloc_4762_, 1, v_a_4755_);
v___x_4761_ = v_reuseFailAlloc_4762_;
goto v_reusejp_4760_;
}
v_reusejp_4760_:
{
return v___x_4761_;
}
}
}
else
{
lean_object* v_a_4765_; 
v_a_4765_ = lean_ctor_get(v___y_4753_, 1);
lean_inc(v_a_4765_);
lean_dec_ref_known(v___y_4753_, 2);
v___y_4733_ = v_a_4765_;
goto v___jp_4732_;
}
}
else
{
lean_object* v_a_4766_; lean_object* v_a_4767_; 
v_a_4766_ = lean_ctor_get(v___y_4753_, 0);
lean_inc(v_a_4766_);
v_a_4767_ = lean_ctor_get(v___y_4753_, 1);
lean_inc(v_a_4767_);
lean_dec_ref_known(v___y_4753_, 2);
v_a_4737_ = v_a_4766_;
v_a_4738_ = v_a_4767_;
goto v___jp_4736_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0___boxed(lean_object* v_exe_4834_, lean_object* v___y_4835_, lean_object* v_inputHash_4836_, lean_object* v_savedTrace_4837_, lean_object* v_pkg_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_){
_start:
{
uint8_t v_exe_boxed_4845_; uint64_t v_inputHash_boxed_4846_; lean_object* v_res_4847_; 
v_exe_boxed_4845_ = lean_unbox(v_exe_4834_);
v_inputHash_boxed_4846_ = lean_unbox_uint64(v_inputHash_4836_);
lean_dec_ref(v_inputHash_4836_);
v_res_4847_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(v_exe_boxed_4845_, v___y_4835_, v_inputHash_boxed_4846_, v_savedTrace_4837_, v_pkg_4838_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_, v___y_4843_);
lean_dec_ref(v___y_4842_);
lean_dec(v___y_4841_);
lean_dec(v___y_4840_);
lean_dec(v___y_4839_);
return v_res_4847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1_spec__1(lean_object* v_as_4848_, size_t v_i_4849_, size_t v_stop_4850_, lean_object* v_b_4851_){
_start:
{
uint8_t v___x_4852_; 
v___x_4852_ = lean_usize_dec_eq(v_i_4849_, v_stop_4850_);
if (v___x_4852_ == 0)
{
lean_object* v___x_4853_; lean_object* v_message_4854_; lean_object* v___x_4855_; lean_object* v___x_4856_; lean_object* v___x_4857_; size_t v___x_4858_; size_t v___x_4859_; 
v___x_4853_ = lean_array_uget_borrowed(v_as_4848_, v_i_4849_);
v_message_4854_ = lean_ctor_get(v___x_4853_, 0);
v___x_4855_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___lam__0___closed__0));
v___x_4856_ = lean_string_append(v_b_4851_, v___x_4855_);
v___x_4857_ = lean_string_append(v___x_4856_, v_message_4854_);
v___x_4858_ = ((size_t)1ULL);
v___x_4859_ = lean_usize_add(v_i_4849_, v___x_4858_);
v_i_4849_ = v___x_4859_;
v_b_4851_ = v___x_4857_;
goto _start;
}
else
{
return v_b_4851_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1_spec__1___boxed(lean_object* v_as_4861_, lean_object* v_i_4862_, lean_object* v_stop_4863_, lean_object* v_b_4864_){
_start:
{
size_t v_i_boxed_4865_; size_t v_stop_boxed_4866_; lean_object* v_res_4867_; 
v_i_boxed_4865_ = lean_unbox_usize(v_i_4862_);
lean_dec(v_i_4862_);
v_stop_boxed_4866_ = lean_unbox_usize(v_stop_4863_);
lean_dec(v_stop_4863_);
v_res_4867_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1_spec__1(v_as_4861_, v_i_boxed_4865_, v_stop_boxed_4866_, v_b_4864_);
lean_dec_ref(v_as_4861_);
return v_res_4867_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(uint8_t v_exe_4868_, lean_object* v___y_4869_, uint64_t v_inputHash_4870_, lean_object* v_pkg_4871_, lean_object* v___y_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_){
_start:
{
lean_object* v_r_4879_; lean_object* v___y_4880_; lean_object* v___y_4883_; uint8_t v___y_4884_; uint8_t v___y_4885_; lean_object* v___y_4886_; lean_object* v___y_4887_; lean_object* v___y_4888_; lean_object* v_a_4895_; lean_object* v_log_4896_; uint8_t v_action_4897_; uint8_t v_wantsRebuild_4898_; lean_object* v_trace_4899_; lean_object* v_buildTime_4900_; lean_object* v_toContext_4921_; lean_object* v_log_4922_; uint8_t v_action_4923_; uint8_t v_wantsRebuild_4924_; lean_object* v_trace_4925_; lean_object* v_buildTime_4926_; lean_object* v___x_4928_; uint8_t v_isShared_4929_; uint8_t v_isSharedCheck_4959_; 
v_toContext_4921_ = lean_ctor_get(v___y_4875_, 1);
v_log_4922_ = lean_ctor_get(v___y_4876_, 0);
v_action_4923_ = lean_ctor_get_uint8(v___y_4876_, sizeof(void*)*3);
v_wantsRebuild_4924_ = lean_ctor_get_uint8(v___y_4876_, sizeof(void*)*3 + 1);
v_trace_4925_ = lean_ctor_get(v___y_4876_, 1);
v_buildTime_4926_ = lean_ctor_get(v___y_4876_, 2);
v_isSharedCheck_4959_ = !lean_is_exclusive(v___y_4876_);
if (v_isSharedCheck_4959_ == 0)
{
v___x_4928_ = v___y_4876_;
v_isShared_4929_ = v_isSharedCheck_4959_;
goto v_resetjp_4927_;
}
else
{
lean_inc(v_buildTime_4926_);
lean_inc(v_trace_4925_);
lean_inc(v_log_4922_);
lean_dec(v___y_4876_);
v___x_4928_ = lean_box(0);
v_isShared_4929_ = v_isSharedCheck_4959_;
goto v_resetjp_4927_;
}
v___jp_4878_:
{
lean_object* v___x_4881_; 
v___x_4881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4881_, 0, v_r_4879_);
lean_ctor_set(v___x_4881_, 1, v___y_4880_);
return v___x_4881_;
}
v___jp_4882_:
{
uint8_t v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; 
v___x_4889_ = 0;
v___x_4890_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4890_, 0, v___y_4888_);
lean_ctor_set_uint8(v___x_4890_, sizeof(void*)*1, v___x_4889_);
v___x_4891_ = lean_array_push(v___y_4887_, v___x_4890_);
v___x_4892_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4892_, 0, v___x_4891_);
lean_ctor_set(v___x_4892_, 1, v___y_4886_);
lean_ctor_set(v___x_4892_, 2, v___y_4883_);
lean_ctor_set_uint8(v___x_4892_, sizeof(void*)*3, v___y_4885_);
lean_ctor_set_uint8(v___x_4892_, sizeof(void*)*3 + 1, v___y_4884_);
v___x_4893_ = lean_box(0);
v_r_4879_ = v___x_4893_;
v___y_4880_ = v___x_4892_;
goto v___jp_4878_;
}
v___jp_4894_:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; uint8_t v___x_4917_; 
v___x_4901_ = lean_array_get_size(v_log_4896_);
lean_inc(v_a_4895_);
v___x_4902_ = l_Array_extract___redArg(v_log_4896_, v_a_4895_, v___x_4901_);
v___x_4903_ = l_Array_shrink___redArg(v_log_4896_, v_a_4895_);
lean_dec(v_a_4895_);
v___x_4904_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__1));
v___x_4905_ = l_Lake_lowerHexUInt64(v_inputHash_4870_);
v___x_4906_ = lean_unsigned_to_nat(7u);
v___x_4907_ = lean_unsigned_to_nat(0u);
v___x_4908_ = lean_string_utf8_byte_size(v___x_4905_);
lean_inc_ref(v___x_4905_);
v___x_4909_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4909_, 0, v___x_4905_);
lean_ctor_set(v___x_4909_, 1, v___x_4907_);
lean_ctor_set(v___x_4909_, 2, v___x_4908_);
v___x_4910_ = l_String_Slice_Pos_nextn(v___x_4909_, v___x_4907_, v___x_4906_);
lean_dec_ref_known(v___x_4909_, 3);
v___x_4911_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4911_, 0, v___x_4905_);
lean_ctor_set(v___x_4911_, 1, v___x_4907_);
lean_ctor_set(v___x_4911_, 2, v___x_4910_);
v___x_4912_ = l_String_Slice_toString(v___x_4911_);
lean_dec_ref_known(v___x_4911_, 3);
v___x_4913_ = lean_string_append(v___x_4904_, v___x_4912_);
lean_dec_ref(v___x_4912_);
v___x_4914_ = ((lean_object*)(l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___redArg___closed__2));
v___x_4915_ = lean_string_append(v___x_4913_, v___x_4914_);
v___x_4916_ = lean_array_get_size(v___x_4902_);
v___x_4917_ = lean_nat_dec_lt(v___x_4907_, v___x_4916_);
if (v___x_4917_ == 0)
{
lean_dec_ref(v___x_4902_);
v___y_4883_ = v_buildTime_4900_;
v___y_4884_ = v_wantsRebuild_4898_;
v___y_4885_ = v_action_4897_;
v___y_4886_ = v_trace_4899_;
v___y_4887_ = v___x_4903_;
v___y_4888_ = v___x_4915_;
goto v___jp_4882_;
}
else
{
size_t v___x_4918_; size_t v___x_4919_; lean_object* v___x_4920_; 
v___x_4918_ = ((size_t)0ULL);
v___x_4919_ = lean_usize_of_nat(v___x_4916_);
v___x_4920_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1_spec__1(v___x_4902_, v___x_4918_, v___x_4919_, v___x_4915_);
lean_dec_ref(v___x_4902_);
v___y_4883_ = v_buildTime_4900_;
v___y_4884_ = v_wantsRebuild_4898_;
v___y_4885_ = v_action_4897_;
v___y_4886_ = v_trace_4899_;
v___y_4887_ = v___x_4903_;
v___y_4888_ = v___x_4920_;
goto v___jp_4882_;
}
}
v_resetjp_4927_:
{
lean_object* v_lakeCache_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; 
v_lakeCache_4930_ = lean_ctor_get(v_toContext_4921_, 2);
v___x_4931_ = l_Lake_Package_cacheScope(v_pkg_4871_);
lean_inc_ref(v_lakeCache_4930_);
v___x_4932_ = l_Lake_Cache_readOutputs_x3f(v_lakeCache_4930_, v___x_4931_, v_inputHash_4870_, v_log_4922_);
if (lean_obj_tag(v___x_4932_) == 0)
{
lean_object* v_a_4933_; lean_object* v_a_4934_; lean_object* v___x_4936_; 
v_a_4933_ = lean_ctor_get(v___x_4932_, 0);
lean_inc(v_a_4933_);
v_a_4934_ = lean_ctor_get(v___x_4932_, 1);
lean_inc(v_a_4934_);
lean_dec_ref_known(v___x_4932_, 2);
if (v_isShared_4929_ == 0)
{
lean_ctor_set(v___x_4928_, 0, v_a_4934_);
v___x_4936_ = v___x_4928_;
goto v_reusejp_4935_;
}
else
{
lean_object* v_reuseFailAlloc_4956_; 
v_reuseFailAlloc_4956_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4956_, 0, v_a_4934_);
lean_ctor_set(v_reuseFailAlloc_4956_, 1, v_trace_4925_);
lean_ctor_set(v_reuseFailAlloc_4956_, 2, v_buildTime_4926_);
lean_ctor_set_uint8(v_reuseFailAlloc_4956_, sizeof(void*)*3, v_action_4923_);
lean_ctor_set_uint8(v_reuseFailAlloc_4956_, sizeof(void*)*3 + 1, v_wantsRebuild_4924_);
v___x_4936_ = v_reuseFailAlloc_4956_;
goto v_reusejp_4935_;
}
v_reusejp_4935_:
{
if (lean_obj_tag(v_a_4933_) == 0)
{
lean_object* v___x_4937_; 
lean_dec_ref(v___y_4869_);
v___x_4937_ = lean_box(0);
v_r_4879_ = v___x_4937_;
v___y_4880_ = v___x_4936_;
goto v___jp_4878_;
}
else
{
lean_object* v_val_4938_; lean_object* v___x_4940_; uint8_t v_isShared_4941_; uint8_t v_isSharedCheck_4955_; 
v_val_4938_ = lean_ctor_get(v_a_4933_, 0);
v_isSharedCheck_4955_ = !lean_is_exclusive(v_a_4933_);
if (v_isSharedCheck_4955_ == 0)
{
v___x_4940_ = v_a_4933_;
v_isShared_4941_ = v_isSharedCheck_4955_;
goto v_resetjp_4939_;
}
else
{
lean_inc(v_val_4938_);
lean_dec(v_a_4933_);
v___x_4940_ = lean_box(0);
v_isShared_4941_ = v_isSharedCheck_4955_;
goto v_resetjp_4939_;
}
v_resetjp_4939_:
{
lean_object* v___x_4942_; 
v___x_4942_ = l_Lake_resolveArtifactOutput(v_val_4938_, v_exe_4868_, v___y_4869_, v___y_4872_, v___y_4873_, v___y_4874_, v___y_4875_, v___x_4936_);
if (lean_obj_tag(v___x_4942_) == 0)
{
lean_object* v_a_4943_; lean_object* v_a_4944_; lean_object* v___x_4946_; 
v_a_4943_ = lean_ctor_get(v___x_4942_, 0);
lean_inc(v_a_4943_);
v_a_4944_ = lean_ctor_get(v___x_4942_, 1);
lean_inc(v_a_4944_);
lean_dec_ref_known(v___x_4942_, 2);
if (v_isShared_4941_ == 0)
{
lean_ctor_set(v___x_4940_, 0, v_a_4943_);
v___x_4946_ = v___x_4940_;
goto v_reusejp_4945_;
}
else
{
lean_object* v_reuseFailAlloc_4947_; 
v_reuseFailAlloc_4947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4947_, 0, v_a_4943_);
v___x_4946_ = v_reuseFailAlloc_4947_;
goto v_reusejp_4945_;
}
v_reusejp_4945_:
{
v_r_4879_ = v___x_4946_;
v___y_4880_ = v_a_4944_;
goto v___jp_4878_;
}
}
else
{
lean_object* v_a_4948_; lean_object* v_a_4949_; lean_object* v_log_4950_; uint8_t v_action_4951_; uint8_t v_wantsRebuild_4952_; lean_object* v_trace_4953_; lean_object* v_buildTime_4954_; 
lean_del_object(v___x_4940_);
v_a_4948_ = lean_ctor_get(v___x_4942_, 1);
lean_inc(v_a_4948_);
v_a_4949_ = lean_ctor_get(v___x_4942_, 0);
lean_inc(v_a_4949_);
lean_dec_ref_known(v___x_4942_, 2);
v_log_4950_ = lean_ctor_get(v_a_4948_, 0);
lean_inc_ref(v_log_4950_);
v_action_4951_ = lean_ctor_get_uint8(v_a_4948_, sizeof(void*)*3);
v_wantsRebuild_4952_ = lean_ctor_get_uint8(v_a_4948_, sizeof(void*)*3 + 1);
v_trace_4953_ = lean_ctor_get(v_a_4948_, 1);
lean_inc_ref(v_trace_4953_);
v_buildTime_4954_ = lean_ctor_get(v_a_4948_, 2);
lean_inc(v_buildTime_4954_);
lean_dec(v_a_4948_);
v_a_4895_ = v_a_4949_;
v_log_4896_ = v_log_4950_;
v_action_4897_ = v_action_4951_;
v_wantsRebuild_4898_ = v_wantsRebuild_4952_;
v_trace_4899_ = v_trace_4953_;
v_buildTime_4900_ = v_buildTime_4954_;
goto v___jp_4894_;
}
}
}
}
}
else
{
lean_object* v_a_4957_; lean_object* v_a_4958_; 
lean_del_object(v___x_4928_);
lean_dec_ref(v___y_4869_);
v_a_4957_ = lean_ctor_get(v___x_4932_, 0);
lean_inc(v_a_4957_);
v_a_4958_ = lean_ctor_get(v___x_4932_, 1);
lean_inc(v_a_4958_);
lean_dec_ref_known(v___x_4932_, 2);
v_a_4895_ = v_a_4957_;
v_log_4896_ = v_a_4958_;
v_action_4897_ = v_action_4923_;
v_wantsRebuild_4898_ = v_wantsRebuild_4924_;
v_trace_4899_ = v_trace_4925_;
v_buildTime_4900_ = v_buildTime_4926_;
goto v___jp_4894_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1___boxed(lean_object* v_exe_4960_, lean_object* v___y_4961_, lean_object* v_inputHash_4962_, lean_object* v_pkg_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_){
_start:
{
uint8_t v_exe_boxed_4970_; uint64_t v_inputHash_boxed_4971_; lean_object* v_res_4972_; 
v_exe_boxed_4970_ = lean_unbox(v_exe_4960_);
v_inputHash_boxed_4971_ = lean_unbox_uint64(v_inputHash_4962_);
lean_dec_ref(v_inputHash_4962_);
v_res_4972_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(v_exe_boxed_4970_, v___y_4961_, v_inputHash_boxed_4971_, v_pkg_4963_, v___y_4964_, v___y_4965_, v___y_4966_, v___y_4967_, v___y_4968_);
lean_dec_ref(v___y_4967_);
lean_dec(v___y_4966_);
lean_dec(v___y_4965_);
lean_dec(v___y_4964_);
return v_res_4972_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0(lean_object* v_file_4973_, uint8_t v_exe_4974_, uint64_t v_hash_4975_, lean_object* v___x_4976_, lean_object* v_a_4977_, lean_object* v_val_4978_, uint8_t v_restore_4979_, lean_object* v___y_4980_, lean_object* v___y_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_){
_start:
{
lean_object* v_a_4988_; lean_object* v___y_4992_; lean_object* v___y_4993_; lean_object* v___y_4994_; uint8_t v___y_5032_; lean_object* v___y_5033_; lean_object* v___y_5034_; lean_object* v___y_5035_; uint8_t v___y_5036_; lean_object* v___y_5037_; lean_object* v___y_5038_; lean_object* v___y_5039_; lean_object* v_a_5053_; lean_object* v_val_5054_; lean_object* v_a_5055_; lean_object* v_a_5109_; lean_object* v___y_5110_; lean_object* v___x_5112_; lean_object* v_a_5113_; 
lean_inc_ref(v_val_4978_);
lean_inc(v_a_4977_);
lean_inc_ref(v___y_4980_);
v___x_5112_ = l_Lake_getArtifactsUsingTrace_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__0(v_exe_4974_, v___y_4980_, v_hash_4975_, v_a_4977_, v_val_4978_, v___y_4981_, v___y_4982_, v___y_4983_, v___y_4984_, v___y_4985_);
v_a_5113_ = lean_ctor_get(v___x_5112_, 0);
lean_inc(v_a_5113_);
if (lean_obj_tag(v_a_5113_) == 1)
{
lean_object* v_a_5114_; lean_object* v_val_5115_; 
lean_dec_ref(v___y_4980_);
lean_dec_ref(v_val_4978_);
v_a_5114_ = lean_ctor_get(v___x_5112_, 1);
lean_inc(v_a_5114_);
lean_dec_ref(v___x_5112_);
v_val_5115_ = lean_ctor_get(v_a_5113_, 0);
lean_inc(v_val_5115_);
lean_dec_ref_known(v_a_5113_, 1);
v_a_5109_ = v_val_5115_;
v___y_5110_ = v_a_5114_;
goto v___jp_5108_;
}
else
{
lean_object* v_a_5116_; lean_object* v___x_5117_; lean_object* v_a_5118_; 
lean_dec(v_a_5113_);
v_a_5116_ = lean_ctor_get(v___x_5112_, 1);
lean_inc(v_a_5116_);
lean_dec_ref(v___x_5112_);
v___x_5117_ = l___private_Lake_Build_Common_0__Lake_getArtifactsUsingCache_x3f___at___00Lake_buildArtifactUnlessUpToDate_spec__1(v_exe_4974_, v___y_4980_, v_hash_4975_, v_val_4978_, v___y_4981_, v___y_4982_, v___y_4983_, v___y_4984_, v_a_5116_);
v_a_5118_ = lean_ctor_get(v___x_5117_, 0);
lean_inc(v_a_5118_);
if (lean_obj_tag(v_a_5118_) == 1)
{
lean_object* v_a_5119_; lean_object* v_val_5120_; 
v_a_5119_ = lean_ctor_get(v___x_5117_, 1);
lean_inc(v_a_5119_);
lean_dec_ref(v___x_5117_);
v_val_5120_ = lean_ctor_get(v_a_5118_, 0);
lean_inc(v_val_5120_);
lean_dec_ref_known(v_a_5118_, 1);
v_a_5109_ = v_val_5120_;
v___y_5110_ = v_a_5119_;
goto v___jp_5108_;
}
else
{
lean_object* v_a_5121_; 
lean_dec(v_a_5118_);
lean_dec(v_a_4977_);
lean_dec_ref(v___x_4976_);
lean_dec_ref(v_file_4973_);
v_a_5121_ = lean_ctor_get(v___x_5117_, 1);
lean_inc(v_a_5121_);
lean_dec_ref(v___x_5117_);
v_a_4988_ = v_a_5121_;
goto v___jp_4987_;
}
}
v___jp_4987_:
{
lean_object* v___x_4989_; lean_object* v___x_4990_; 
v___x_4989_ = lean_box(0);
v___x_4990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4990_, 0, v___x_4989_);
lean_ctor_set(v___x_4990_, 1, v_a_4988_);
return v___x_4990_;
}
v___jp_4991_:
{
if (v_restore_4979_ == 0)
{
lean_object* v___x_4995_; 
lean_dec_ref(v___y_4992_);
lean_dec_ref(v_file_4973_);
v___x_4995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4995_, 0, v___y_4993_);
lean_ctor_set(v___x_4995_, 1, v___y_4994_);
return v___x_4995_;
}
else
{
lean_object* v_log_4996_; uint8_t v_action_4997_; uint8_t v_wantsRebuild_4998_; lean_object* v_trace_4999_; lean_object* v_buildTime_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5030_; 
lean_dec(v___y_4993_);
v_log_4996_ = lean_ctor_get(v___y_4994_, 0);
v_action_4997_ = lean_ctor_get_uint8(v___y_4994_, sizeof(void*)*3);
v_wantsRebuild_4998_ = lean_ctor_get_uint8(v___y_4994_, sizeof(void*)*3 + 1);
v_trace_4999_ = lean_ctor_get(v___y_4994_, 1);
v_buildTime_5000_ = lean_ctor_get(v___y_4994_, 2);
v_isSharedCheck_5030_ = !lean_is_exclusive(v___y_4994_);
if (v_isSharedCheck_5030_ == 0)
{
v___x_5002_ = v___y_4994_;
v_isShared_5003_ = v_isSharedCheck_5030_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_buildTime_5000_);
lean_inc(v_trace_4999_);
lean_inc(v_log_4996_);
lean_dec(v___y_4994_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5030_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v___x_5004_; 
v___x_5004_ = l_Lake_restoreArtifact(v_file_4973_, v___y_4992_, v_exe_4974_, v_log_4996_);
if (lean_obj_tag(v___x_5004_) == 0)
{
lean_object* v_a_5005_; lean_object* v_a_5006_; lean_object* v___x_5008_; uint8_t v_isShared_5009_; uint8_t v_isSharedCheck_5017_; 
v_a_5005_ = lean_ctor_get(v___x_5004_, 0);
v_a_5006_ = lean_ctor_get(v___x_5004_, 1);
v_isSharedCheck_5017_ = !lean_is_exclusive(v___x_5004_);
if (v_isSharedCheck_5017_ == 0)
{
v___x_5008_ = v___x_5004_;
v_isShared_5009_ = v_isSharedCheck_5017_;
goto v_resetjp_5007_;
}
else
{
lean_inc(v_a_5006_);
lean_inc(v_a_5005_);
lean_dec(v___x_5004_);
v___x_5008_ = lean_box(0);
v_isShared_5009_ = v_isSharedCheck_5017_;
goto v_resetjp_5007_;
}
v_resetjp_5007_:
{
lean_object* v___x_5011_; 
if (v_isShared_5003_ == 0)
{
lean_ctor_set(v___x_5002_, 0, v_a_5006_);
v___x_5011_ = v___x_5002_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5016_; 
v_reuseFailAlloc_5016_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5016_, 0, v_a_5006_);
lean_ctor_set(v_reuseFailAlloc_5016_, 1, v_trace_4999_);
lean_ctor_set(v_reuseFailAlloc_5016_, 2, v_buildTime_5000_);
lean_ctor_set_uint8(v_reuseFailAlloc_5016_, sizeof(void*)*3, v_action_4997_);
lean_ctor_set_uint8(v_reuseFailAlloc_5016_, sizeof(void*)*3 + 1, v_wantsRebuild_4998_);
v___x_5011_ = v_reuseFailAlloc_5016_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
lean_object* v___x_5012_; lean_object* v___x_5014_; 
v___x_5012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5012_, 0, v_a_5005_);
if (v_isShared_5009_ == 0)
{
lean_ctor_set(v___x_5008_, 1, v___x_5011_);
lean_ctor_set(v___x_5008_, 0, v___x_5012_);
v___x_5014_ = v___x_5008_;
goto v_reusejp_5013_;
}
else
{
lean_object* v_reuseFailAlloc_5015_; 
v_reuseFailAlloc_5015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5015_, 0, v___x_5012_);
lean_ctor_set(v_reuseFailAlloc_5015_, 1, v___x_5011_);
v___x_5014_ = v_reuseFailAlloc_5015_;
goto v_reusejp_5013_;
}
v_reusejp_5013_:
{
return v___x_5014_;
}
}
}
}
else
{
lean_object* v_a_5018_; lean_object* v_a_5019_; lean_object* v___x_5021_; uint8_t v_isShared_5022_; uint8_t v_isSharedCheck_5029_; 
v_a_5018_ = lean_ctor_get(v___x_5004_, 0);
v_a_5019_ = lean_ctor_get(v___x_5004_, 1);
v_isSharedCheck_5029_ = !lean_is_exclusive(v___x_5004_);
if (v_isSharedCheck_5029_ == 0)
{
v___x_5021_ = v___x_5004_;
v_isShared_5022_ = v_isSharedCheck_5029_;
goto v_resetjp_5020_;
}
else
{
lean_inc(v_a_5019_);
lean_inc(v_a_5018_);
lean_dec(v___x_5004_);
v___x_5021_ = lean_box(0);
v_isShared_5022_ = v_isSharedCheck_5029_;
goto v_resetjp_5020_;
}
v_resetjp_5020_:
{
lean_object* v___x_5024_; 
if (v_isShared_5003_ == 0)
{
lean_ctor_set(v___x_5002_, 0, v_a_5019_);
v___x_5024_ = v___x_5002_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5028_; 
v_reuseFailAlloc_5028_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5028_, 0, v_a_5019_);
lean_ctor_set(v_reuseFailAlloc_5028_, 1, v_trace_4999_);
lean_ctor_set(v_reuseFailAlloc_5028_, 2, v_buildTime_5000_);
lean_ctor_set_uint8(v_reuseFailAlloc_5028_, sizeof(void*)*3, v_action_4997_);
lean_ctor_set_uint8(v_reuseFailAlloc_5028_, sizeof(void*)*3 + 1, v_wantsRebuild_4998_);
v___x_5024_ = v_reuseFailAlloc_5028_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
lean_object* v___x_5026_; 
if (v_isShared_5022_ == 0)
{
lean_ctor_set(v___x_5021_, 1, v___x_5024_);
v___x_5026_ = v___x_5021_;
goto v_reusejp_5025_;
}
else
{
lean_object* v_reuseFailAlloc_5027_; 
v_reuseFailAlloc_5027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5027_, 0, v_a_5018_);
lean_ctor_set(v_reuseFailAlloc_5027_, 1, v___x_5024_);
v___x_5026_ = v_reuseFailAlloc_5027_;
goto v_reusejp_5025_;
}
v_reusejp_5025_:
{
return v___x_5026_;
}
}
}
}
}
}
}
v___jp_5031_:
{
lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; 
v___x_5040_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5040_, 0, v___y_5039_);
v___x_5041_ = l_Lake_BuildMetadata_ofFetch(v_hash_4975_, v___x_5040_);
v___x_5042_ = l_Lake_BuildMetadata_writeFile(v___x_4976_, v___x_5041_);
if (lean_obj_tag(v___x_5042_) == 0)
{
lean_object* v___x_5043_; 
lean_dec_ref_known(v___x_5042_, 1);
v___x_5043_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5043_, 0, v___y_5033_);
lean_ctor_set(v___x_5043_, 1, v___y_5038_);
lean_ctor_set(v___x_5043_, 2, v___y_5037_);
lean_ctor_set_uint8(v___x_5043_, sizeof(void*)*3, v___y_5036_);
lean_ctor_set_uint8(v___x_5043_, sizeof(void*)*3 + 1, v___y_5032_);
v___y_4992_ = v___y_5034_;
v___y_4993_ = v___y_5035_;
v___y_4994_ = v___x_5043_;
goto v___jp_4991_;
}
else
{
lean_object* v_a_5044_; lean_object* v___x_5045_; uint8_t v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; 
lean_dec(v___y_5035_);
lean_dec_ref(v___y_5034_);
lean_dec_ref(v_file_4973_);
v_a_5044_ = lean_ctor_get(v___x_5042_, 0);
lean_inc(v_a_5044_);
lean_dec_ref_known(v___x_5042_, 1);
v___x_5045_ = lean_io_error_to_string(v_a_5044_);
v___x_5046_ = 3;
v___x_5047_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5047_, 0, v___x_5045_);
lean_ctor_set_uint8(v___x_5047_, sizeof(void*)*1, v___x_5046_);
v___x_5048_ = lean_array_get_size(v___y_5033_);
v___x_5049_ = lean_array_push(v___y_5033_, v___x_5047_);
v___x_5050_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5050_, 0, v___x_5049_);
lean_ctor_set(v___x_5050_, 1, v___y_5038_);
lean_ctor_set(v___x_5050_, 2, v___y_5037_);
lean_ctor_set_uint8(v___x_5050_, sizeof(void*)*3, v___y_5036_);
lean_ctor_set_uint8(v___x_5050_, sizeof(void*)*3 + 1, v___y_5032_);
v___x_5051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5051_, 0, v___x_5048_);
lean_ctor_set(v___x_5051_, 1, v___x_5050_);
return v___x_5051_;
}
}
v___jp_5052_:
{
lean_object* v___x_5056_; 
v___x_5056_ = l_Lake_SavedTrace_replayCachedIfUpToDate___redArg(v_hash_4975_, v_a_4977_, v_a_5055_);
lean_dec(v_a_4977_);
if (lean_obj_tag(v___x_5056_) == 0)
{
lean_object* v_a_5057_; uint8_t v___x_5058_; 
v_a_5057_ = lean_ctor_get(v___x_5056_, 0);
lean_inc(v_a_5057_);
v___x_5058_ = lean_unbox(v_a_5057_);
lean_dec(v_a_5057_);
if (v___x_5058_ == 0)
{
lean_object* v_a_5059_; lean_object* v___x_5061_; uint8_t v_isShared_5062_; uint8_t v_isSharedCheck_5096_; 
v_a_5059_ = lean_ctor_get(v___x_5056_, 1);
v_isSharedCheck_5096_ = !lean_is_exclusive(v___x_5056_);
if (v_isSharedCheck_5096_ == 0)
{
lean_object* v_unused_5097_; 
v_unused_5097_ = lean_ctor_get(v___x_5056_, 0);
lean_dec(v_unused_5097_);
v___x_5061_ = v___x_5056_;
v_isShared_5062_ = v_isSharedCheck_5096_;
goto v_resetjp_5060_;
}
else
{
lean_inc(v_a_5059_);
lean_dec(v___x_5056_);
v___x_5061_ = lean_box(0);
v_isShared_5062_ = v_isSharedCheck_5096_;
goto v_resetjp_5060_;
}
v_resetjp_5060_:
{
lean_object* v_log_5063_; uint8_t v_action_5064_; uint8_t v_wantsRebuild_5065_; lean_object* v_trace_5066_; lean_object* v_buildTime_5067_; lean_object* v___x_5069_; uint8_t v_isShared_5070_; uint8_t v_isSharedCheck_5095_; 
v_log_5063_ = lean_ctor_get(v_a_5059_, 0);
v_action_5064_ = lean_ctor_get_uint8(v_a_5059_, sizeof(void*)*3);
v_wantsRebuild_5065_ = lean_ctor_get_uint8(v_a_5059_, sizeof(void*)*3 + 1);
v_trace_5066_ = lean_ctor_get(v_a_5059_, 1);
v_buildTime_5067_ = lean_ctor_get(v_a_5059_, 2);
v_isSharedCheck_5095_ = !lean_is_exclusive(v_a_5059_);
if (v_isSharedCheck_5095_ == 0)
{
v___x_5069_ = v_a_5059_;
v_isShared_5070_ = v_isSharedCheck_5095_;
goto v_resetjp_5068_;
}
else
{
lean_inc(v_buildTime_5067_);
lean_inc(v_trace_5066_);
lean_inc(v_log_5063_);
lean_dec(v_a_5059_);
v___x_5069_ = lean_box(0);
v_isShared_5070_ = v_isSharedCheck_5095_;
goto v_resetjp_5068_;
}
v_resetjp_5068_:
{
lean_object* v___x_5071_; 
v___x_5071_ = l_Lake_removeFileIfExists(v_file_4973_);
if (lean_obj_tag(v___x_5071_) == 0)
{
lean_object* v_descr_5072_; uint64_t v_hash_5073_; lean_object* v_ext_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; uint8_t v___x_5077_; 
lean_dec_ref_known(v___x_5071_, 1);
lean_del_object(v___x_5069_);
lean_del_object(v___x_5061_);
v_descr_5072_ = lean_ctor_get(v_val_5054_, 0);
v_hash_5073_ = lean_ctor_get_uint64(v_descr_5072_, sizeof(void*)*1);
v_ext_5074_ = lean_ctor_get(v_descr_5072_, 0);
v___x_5075_ = lean_string_utf8_byte_size(v_ext_5074_);
v___x_5076_ = lean_unsigned_to_nat(0u);
v___x_5077_ = lean_nat_dec_eq(v___x_5075_, v___x_5076_);
if (v___x_5077_ == 0)
{
lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; 
v___x_5078_ = l_Lake_lowerHexUInt64(v_hash_5073_);
v___x_5079_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_5080_ = lean_string_append(v___x_5078_, v___x_5079_);
v___x_5081_ = lean_string_append(v___x_5080_, v_ext_5074_);
v___y_5032_ = v_wantsRebuild_5065_;
v___y_5033_ = v_log_5063_;
v___y_5034_ = v_val_5054_;
v___y_5035_ = v_a_5053_;
v___y_5036_ = v_action_5064_;
v___y_5037_ = v_buildTime_5067_;
v___y_5038_ = v_trace_5066_;
v___y_5039_ = v___x_5081_;
goto v___jp_5031_;
}
else
{
lean_object* v___x_5082_; 
v___x_5082_ = l_Lake_lowerHexUInt64(v_hash_5073_);
v___y_5032_ = v_wantsRebuild_5065_;
v___y_5033_ = v_log_5063_;
v___y_5034_ = v_val_5054_;
v___y_5035_ = v_a_5053_;
v___y_5036_ = v_action_5064_;
v___y_5037_ = v_buildTime_5067_;
v___y_5038_ = v_trace_5066_;
v___y_5039_ = v___x_5082_;
goto v___jp_5031_;
}
}
else
{
lean_object* v_a_5083_; lean_object* v___x_5084_; uint8_t v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5090_; 
lean_dec_ref(v_val_5054_);
lean_dec(v_a_5053_);
lean_dec_ref(v___x_4976_);
lean_dec_ref(v_file_4973_);
v_a_5083_ = lean_ctor_get(v___x_5071_, 0);
lean_inc(v_a_5083_);
lean_dec_ref_known(v___x_5071_, 1);
v___x_5084_ = lean_io_error_to_string(v_a_5083_);
v___x_5085_ = 3;
v___x_5086_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5086_, 0, v___x_5084_);
lean_ctor_set_uint8(v___x_5086_, sizeof(void*)*1, v___x_5085_);
v___x_5087_ = lean_array_get_size(v_log_5063_);
v___x_5088_ = lean_array_push(v_log_5063_, v___x_5086_);
if (v_isShared_5070_ == 0)
{
lean_ctor_set(v___x_5069_, 0, v___x_5088_);
v___x_5090_ = v___x_5069_;
goto v_reusejp_5089_;
}
else
{
lean_object* v_reuseFailAlloc_5094_; 
v_reuseFailAlloc_5094_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5094_, 0, v___x_5088_);
lean_ctor_set(v_reuseFailAlloc_5094_, 1, v_trace_5066_);
lean_ctor_set(v_reuseFailAlloc_5094_, 2, v_buildTime_5067_);
lean_ctor_set_uint8(v_reuseFailAlloc_5094_, sizeof(void*)*3, v_action_5064_);
lean_ctor_set_uint8(v_reuseFailAlloc_5094_, sizeof(void*)*3 + 1, v_wantsRebuild_5065_);
v___x_5090_ = v_reuseFailAlloc_5094_;
goto v_reusejp_5089_;
}
v_reusejp_5089_:
{
lean_object* v___x_5092_; 
if (v_isShared_5062_ == 0)
{
lean_ctor_set_tag(v___x_5061_, 1);
lean_ctor_set(v___x_5061_, 1, v___x_5090_);
lean_ctor_set(v___x_5061_, 0, v___x_5087_);
v___x_5092_ = v___x_5061_;
goto v_reusejp_5091_;
}
else
{
lean_object* v_reuseFailAlloc_5093_; 
v_reuseFailAlloc_5093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5093_, 0, v___x_5087_);
lean_ctor_set(v_reuseFailAlloc_5093_, 1, v___x_5090_);
v___x_5092_ = v_reuseFailAlloc_5093_;
goto v_reusejp_5091_;
}
v_reusejp_5091_:
{
return v___x_5092_;
}
}
}
}
}
}
else
{
lean_object* v_a_5098_; 
lean_dec_ref(v___x_4976_);
v_a_5098_ = lean_ctor_get(v___x_5056_, 1);
lean_inc(v_a_5098_);
lean_dec_ref_known(v___x_5056_, 2);
v___y_4992_ = v_val_5054_;
v___y_4993_ = v_a_5053_;
v___y_4994_ = v_a_5098_;
goto v___jp_4991_;
}
}
else
{
lean_object* v_a_5099_; lean_object* v_a_5100_; lean_object* v___x_5102_; uint8_t v_isShared_5103_; uint8_t v_isSharedCheck_5107_; 
lean_dec_ref(v_val_5054_);
lean_dec(v_a_5053_);
lean_dec_ref(v___x_4976_);
lean_dec_ref(v_file_4973_);
v_a_5099_ = lean_ctor_get(v___x_5056_, 0);
v_a_5100_ = lean_ctor_get(v___x_5056_, 1);
v_isSharedCheck_5107_ = !lean_is_exclusive(v___x_5056_);
if (v_isSharedCheck_5107_ == 0)
{
v___x_5102_ = v___x_5056_;
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
else
{
lean_inc(v_a_5100_);
lean_inc(v_a_5099_);
lean_dec(v___x_5056_);
v___x_5102_ = lean_box(0);
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
v_resetjp_5101_:
{
lean_object* v___x_5105_; 
if (v_isShared_5103_ == 0)
{
v___x_5105_ = v___x_5102_;
goto v_reusejp_5104_;
}
else
{
lean_object* v_reuseFailAlloc_5106_; 
v_reuseFailAlloc_5106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5106_, 0, v_a_5099_);
lean_ctor_set(v_reuseFailAlloc_5106_, 1, v_a_5100_);
v___x_5105_ = v_reuseFailAlloc_5106_;
goto v_reusejp_5104_;
}
v_reusejp_5104_:
{
return v___x_5105_;
}
}
}
}
v___jp_5108_:
{
lean_object* v___x_5111_; 
lean_inc_ref(v_a_5109_);
v___x_5111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5111_, 0, v_a_5109_);
v_a_5053_ = v___x_5111_;
v_val_5054_ = v_a_5109_;
v_a_5055_ = v___y_5110_;
goto v___jp_5052_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__0___boxed(lean_object* v_file_5122_, lean_object* v_exe_5123_, lean_object* v_hash_5124_, lean_object* v___x_5125_, lean_object* v_a_5126_, lean_object* v_val_5127_, lean_object* v_restore_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_, lean_object* v___y_5134_, lean_object* v___y_5135_){
_start:
{
uint8_t v_exe_boxed_5136_; uint64_t v_hash_boxed_5137_; uint8_t v_restore_boxed_5138_; lean_object* v_res_5139_; 
v_exe_boxed_5136_ = lean_unbox(v_exe_5123_);
v_hash_boxed_5137_ = lean_unbox_uint64(v_hash_5124_);
lean_dec_ref(v_hash_5124_);
v_restore_boxed_5138_ = lean_unbox(v_restore_5128_);
v_res_5139_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_file_5122_, v_exe_boxed_5136_, v_hash_boxed_5137_, v___x_5125_, v_a_5126_, v_val_5127_, v_restore_boxed_5138_, v___y_5129_, v___y_5130_, v___y_5131_, v___y_5132_, v___y_5133_, v___y_5134_);
lean_dec_ref(v___y_5133_);
lean_dec(v___y_5132_);
lean_dec(v___y_5131_);
lean_dec(v___y_5130_);
return v_res_5139_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1(uint8_t v_a_5140_, lean_object* v_file_5141_, lean_object* v_ext_5142_, uint8_t v_text_5143_, uint8_t v_exe_5144_, uint8_t v___y_5145_, lean_object* v_val_5146_, uint64_t v_hash_5147_, uint8_t v_a_5148_, lean_object* v_____r_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_){
_start:
{
lean_object* v___x_5157_; lean_object* v___x_5158_; uint8_t v___x_5159_; 
v___x_5157_ = l_Lake_OutputStatus_ctorIdx(v_a_5140_);
v___x_5158_ = lean_obj_once(&l_Lake_OutputStatus_isCacheable___closed__0, &l_Lake_OutputStatus_isCacheable___closed__0_once, _init_l_Lake_OutputStatus_isCacheable___closed__0);
v___x_5159_ = lean_nat_dec_eq(v___x_5157_, v___x_5158_);
lean_dec(v___x_5157_);
if (v___x_5159_ == 0)
{
lean_object* v_toContext_5160_; lean_object* v_log_5161_; uint8_t v_action_5162_; uint8_t v_wantsRebuild_5163_; lean_object* v_trace_5164_; lean_object* v_buildTime_5165_; lean_object* v_lakeCache_5166_; lean_object* v___x_5167_; 
v_toContext_5160_ = lean_ctor_get(v___y_5154_, 1);
v_log_5161_ = lean_ctor_get(v___y_5155_, 0);
v_action_5162_ = lean_ctor_get_uint8(v___y_5155_, sizeof(void*)*3);
v_wantsRebuild_5163_ = lean_ctor_get_uint8(v___y_5155_, sizeof(void*)*3 + 1);
v_trace_5164_ = lean_ctor_get(v___y_5155_, 1);
v_buildTime_5165_ = lean_ctor_get(v___y_5155_, 2);
v_lakeCache_5166_ = lean_ctor_get(v_toContext_5160_, 2);
lean_inc_ref(v_lakeCache_5166_);
v___x_5167_ = l_Lake_Cache_saveArtifact(v_lakeCache_5166_, v_file_5141_, v_ext_5142_, v_text_5143_, v_exe_5144_, v___y_5145_);
if (lean_obj_tag(v___x_5167_) == 0)
{
lean_object* v_a_5168_; lean_object* v___x_5170_; uint8_t v_isShared_5171_; uint8_t v_isSharedCheck_5209_; 
v_a_5168_ = lean_ctor_get(v___x_5167_, 0);
v_isSharedCheck_5209_ = !lean_is_exclusive(v___x_5167_);
if (v_isSharedCheck_5209_ == 0)
{
v___x_5170_ = v___x_5167_;
v_isShared_5171_ = v_isSharedCheck_5209_;
goto v_resetjp_5169_;
}
else
{
lean_inc(v_a_5168_);
lean_dec(v___x_5167_);
v___x_5170_ = lean_box(0);
v_isShared_5171_ = v_isSharedCheck_5209_;
goto v_resetjp_5169_;
}
v_resetjp_5169_:
{
lean_object* v_descr_5172_; uint64_t v_hash_5173_; lean_object* v_ext_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___y_5178_; lean_object* v___x_5201_; lean_object* v___x_5202_; uint8_t v___x_5203_; 
v_descr_5172_ = lean_ctor_get(v_a_5168_, 0);
v_hash_5173_ = lean_ctor_get_uint64(v_descr_5172_, sizeof(void*)*1);
v_ext_5174_ = lean_ctor_get(v_descr_5172_, 0);
v___x_5175_ = l_Lake_Package_cacheScope(v_val_5146_);
v___x_5176_ = lean_box(0);
v___x_5201_ = lean_string_utf8_byte_size(v_ext_5174_);
v___x_5202_ = lean_unsigned_to_nat(0u);
v___x_5203_ = lean_nat_dec_eq(v___x_5201_, v___x_5202_);
if (v___x_5203_ == 0)
{
lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; 
v___x_5204_ = l_Lake_lowerHexUInt64(v_hash_5173_);
v___x_5205_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_5206_ = lean_string_append(v___x_5204_, v___x_5205_);
v___x_5207_ = lean_string_append(v___x_5206_, v_ext_5174_);
v___y_5178_ = v___x_5207_;
goto v___jp_5177_;
}
else
{
lean_object* v___x_5208_; 
v___x_5208_ = l_Lake_lowerHexUInt64(v_hash_5173_);
v___y_5178_ = v___x_5208_;
goto v___jp_5177_;
}
v___jp_5177_:
{
lean_object* v___x_5180_; 
if (v_isShared_5171_ == 0)
{
lean_ctor_set_tag(v___x_5170_, 3);
lean_ctor_set(v___x_5170_, 0, v___y_5178_);
v___x_5180_ = v___x_5170_;
goto v_reusejp_5179_;
}
else
{
lean_object* v_reuseFailAlloc_5200_; 
v_reuseFailAlloc_5200_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5200_, 0, v___y_5178_);
v___x_5180_ = v_reuseFailAlloc_5200_;
goto v_reusejp_5179_;
}
v_reusejp_5179_:
{
lean_object* v___x_5181_; 
lean_inc_ref(v_lakeCache_5166_);
v___x_5181_ = l___private_Lake_Config_Cache_0__Lake_Cache_writeOutputsCore(v_lakeCache_5166_, v___x_5175_, v_hash_5147_, v___x_5180_, v___x_5176_, v___x_5176_, v_a_5148_);
if (lean_obj_tag(v___x_5181_) == 0)
{
lean_object* v___x_5182_; 
lean_dec_ref_known(v___x_5181_, 1);
v___x_5182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5182_, 0, v_a_5168_);
lean_ctor_set(v___x_5182_, 1, v___y_5155_);
return v___x_5182_;
}
else
{
lean_object* v___x_5184_; uint8_t v_isShared_5185_; uint8_t v_isSharedCheck_5196_; 
lean_inc(v_buildTime_5165_);
lean_inc_ref(v_trace_5164_);
lean_inc_ref(v_log_5161_);
lean_dec(v_a_5168_);
v_isSharedCheck_5196_ = !lean_is_exclusive(v___y_5155_);
if (v_isSharedCheck_5196_ == 0)
{
lean_object* v_unused_5197_; lean_object* v_unused_5198_; lean_object* v_unused_5199_; 
v_unused_5197_ = lean_ctor_get(v___y_5155_, 2);
lean_dec(v_unused_5197_);
v_unused_5198_ = lean_ctor_get(v___y_5155_, 1);
lean_dec(v_unused_5198_);
v_unused_5199_ = lean_ctor_get(v___y_5155_, 0);
lean_dec(v_unused_5199_);
v___x_5184_ = v___y_5155_;
v_isShared_5185_ = v_isSharedCheck_5196_;
goto v_resetjp_5183_;
}
else
{
lean_dec(v___y_5155_);
v___x_5184_ = lean_box(0);
v_isShared_5185_ = v_isSharedCheck_5196_;
goto v_resetjp_5183_;
}
v_resetjp_5183_:
{
lean_object* v_a_5186_; lean_object* v___x_5187_; uint8_t v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5193_; 
v_a_5186_ = lean_ctor_get(v___x_5181_, 0);
lean_inc(v_a_5186_);
lean_dec_ref_known(v___x_5181_, 1);
v___x_5187_ = lean_io_error_to_string(v_a_5186_);
v___x_5188_ = 3;
v___x_5189_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5189_, 0, v___x_5187_);
lean_ctor_set_uint8(v___x_5189_, sizeof(void*)*1, v___x_5188_);
v___x_5190_ = lean_array_get_size(v_log_5161_);
v___x_5191_ = lean_array_push(v_log_5161_, v___x_5189_);
if (v_isShared_5185_ == 0)
{
lean_ctor_set(v___x_5184_, 0, v___x_5191_);
v___x_5193_ = v___x_5184_;
goto v_reusejp_5192_;
}
else
{
lean_object* v_reuseFailAlloc_5195_; 
v_reuseFailAlloc_5195_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5195_, 0, v___x_5191_);
lean_ctor_set(v_reuseFailAlloc_5195_, 1, v_trace_5164_);
lean_ctor_set(v_reuseFailAlloc_5195_, 2, v_buildTime_5165_);
lean_ctor_set_uint8(v_reuseFailAlloc_5195_, sizeof(void*)*3, v_action_5162_);
lean_ctor_set_uint8(v_reuseFailAlloc_5195_, sizeof(void*)*3 + 1, v_wantsRebuild_5163_);
v___x_5193_ = v_reuseFailAlloc_5195_;
goto v_reusejp_5192_;
}
v_reusejp_5192_:
{
lean_object* v___x_5194_; 
v___x_5194_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5194_, 0, v___x_5190_);
lean_ctor_set(v___x_5194_, 1, v___x_5193_);
return v___x_5194_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5211_; uint8_t v_isShared_5212_; uint8_t v_isSharedCheck_5223_; 
lean_inc(v_buildTime_5165_);
lean_inc_ref(v_trace_5164_);
lean_inc_ref(v_log_5161_);
lean_dec_ref(v_val_5146_);
v_isSharedCheck_5223_ = !lean_is_exclusive(v___y_5155_);
if (v_isSharedCheck_5223_ == 0)
{
lean_object* v_unused_5224_; lean_object* v_unused_5225_; lean_object* v_unused_5226_; 
v_unused_5224_ = lean_ctor_get(v___y_5155_, 2);
lean_dec(v_unused_5224_);
v_unused_5225_ = lean_ctor_get(v___y_5155_, 1);
lean_dec(v_unused_5225_);
v_unused_5226_ = lean_ctor_get(v___y_5155_, 0);
lean_dec(v_unused_5226_);
v___x_5211_ = v___y_5155_;
v_isShared_5212_ = v_isSharedCheck_5223_;
goto v_resetjp_5210_;
}
else
{
lean_dec(v___y_5155_);
v___x_5211_ = lean_box(0);
v_isShared_5212_ = v_isSharedCheck_5223_;
goto v_resetjp_5210_;
}
v_resetjp_5210_:
{
lean_object* v_a_5213_; lean_object* v___x_5214_; uint8_t v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5220_; 
v_a_5213_ = lean_ctor_get(v___x_5167_, 0);
lean_inc(v_a_5213_);
lean_dec_ref_known(v___x_5167_, 1);
v___x_5214_ = lean_io_error_to_string(v_a_5213_);
v___x_5215_ = 3;
v___x_5216_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5216_, 0, v___x_5214_);
lean_ctor_set_uint8(v___x_5216_, sizeof(void*)*1, v___x_5215_);
v___x_5217_ = lean_array_get_size(v_log_5161_);
v___x_5218_ = lean_array_push(v_log_5161_, v___x_5216_);
if (v_isShared_5212_ == 0)
{
lean_ctor_set(v___x_5211_, 0, v___x_5218_);
v___x_5220_ = v___x_5211_;
goto v_reusejp_5219_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v___x_5218_);
lean_ctor_set(v_reuseFailAlloc_5222_, 1, v_trace_5164_);
lean_ctor_set(v_reuseFailAlloc_5222_, 2, v_buildTime_5165_);
lean_ctor_set_uint8(v_reuseFailAlloc_5222_, sizeof(void*)*3, v_action_5162_);
lean_ctor_set_uint8(v_reuseFailAlloc_5222_, sizeof(void*)*3 + 1, v_wantsRebuild_5163_);
v___x_5220_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5219_;
}
v_reusejp_5219_:
{
lean_object* v___x_5221_; 
v___x_5221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5221_, 0, v___x_5217_);
lean_ctor_set(v___x_5221_, 1, v___x_5220_);
return v___x_5221_;
}
}
}
}
else
{
lean_object* v___x_5227_; 
lean_dec_ref(v_val_5146_);
v___x_5227_ = l_Lake_computeArtifact___redArg(v_file_5141_, v_ext_5142_, v_text_5143_, v___y_5154_, v___y_5155_);
return v___x_5227_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___lam__1___boxed(lean_object** _args){
lean_object* v_a_5228_ = _args[0];
lean_object* v_file_5229_ = _args[1];
lean_object* v_ext_5230_ = _args[2];
lean_object* v_text_5231_ = _args[3];
lean_object* v_exe_5232_ = _args[4];
lean_object* v___y_5233_ = _args[5];
lean_object* v_val_5234_ = _args[6];
lean_object* v_hash_5235_ = _args[7];
lean_object* v_a_5236_ = _args[8];
lean_object* v_____r_5237_ = _args[9];
lean_object* v___y_5238_ = _args[10];
lean_object* v___y_5239_ = _args[11];
lean_object* v___y_5240_ = _args[12];
lean_object* v___y_5241_ = _args[13];
lean_object* v___y_5242_ = _args[14];
lean_object* v___y_5243_ = _args[15];
lean_object* v___y_5244_ = _args[16];
_start:
{
uint8_t v_a_355586__boxed_5245_; uint8_t v_text_boxed_5246_; uint8_t v_exe_boxed_5247_; uint8_t v___y_355587__boxed_5248_; uint64_t v_hash_boxed_5249_; uint8_t v_a_355589__boxed_5250_; lean_object* v_res_5251_; 
v_a_355586__boxed_5245_ = lean_unbox(v_a_5228_);
v_text_boxed_5246_ = lean_unbox(v_text_5231_);
v_exe_boxed_5247_ = lean_unbox(v_exe_5232_);
v___y_355587__boxed_5248_ = lean_unbox(v___y_5233_);
v_hash_boxed_5249_ = lean_unbox_uint64(v_hash_5235_);
lean_dec_ref(v_hash_5235_);
v_a_355589__boxed_5250_ = lean_unbox(v_a_5236_);
v_res_5251_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v_a_355586__boxed_5245_, v_file_5229_, v_ext_5230_, v_text_boxed_5246_, v_exe_boxed_5247_, v___y_355587__boxed_5248_, v_val_5234_, v_hash_boxed_5249_, v_a_355589__boxed_5250_, v_____r_5237_, v___y_5238_, v___y_5239_, v___y_5240_, v___y_5241_, v___y_5242_, v___y_5243_);
lean_dec_ref(v___y_5242_);
lean_dec(v___y_5241_);
lean_dec(v___y_5240_);
lean_dec(v___y_5239_);
lean_dec_ref(v___y_5238_);
return v_res_5251_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object* v_file_5252_, lean_object* v_build_5253_, uint8_t v_text_5254_, lean_object* v_ext_5255_, uint8_t v_restore_5256_, uint8_t v_exe_5257_, uint8_t v_platformIndependent_5258_, lean_object* v___y_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_){
_start:
{
lean_object* v_log_5266_; uint8_t v_action_5267_; uint8_t v_wantsRebuild_5268_; lean_object* v_trace_5269_; lean_object* v_buildTime_5270_; lean_object* v___x_5272_; uint8_t v_isShared_5273_; uint8_t v_isSharedCheck_5535_; 
v_log_5266_ = lean_ctor_get(v___y_5264_, 0);
v_action_5267_ = lean_ctor_get_uint8(v___y_5264_, sizeof(void*)*3);
v_wantsRebuild_5268_ = lean_ctor_get_uint8(v___y_5264_, sizeof(void*)*3 + 1);
v_trace_5269_ = lean_ctor_get(v___y_5264_, 1);
v_buildTime_5270_ = lean_ctor_get(v___y_5264_, 2);
v_isSharedCheck_5535_ = !lean_is_exclusive(v___y_5264_);
if (v_isSharedCheck_5535_ == 0)
{
v___x_5272_ = v___y_5264_;
v_isShared_5273_ = v_isSharedCheck_5535_;
goto v_resetjp_5271_;
}
else
{
lean_inc(v_buildTime_5270_);
lean_inc(v_trace_5269_);
lean_inc(v_log_5266_);
lean_dec(v___y_5264_);
v___x_5272_ = lean_box(0);
v_isShared_5273_ = v_isSharedCheck_5535_;
goto v_resetjp_5271_;
}
v_resetjp_5271_:
{
lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___y_5277_; lean_object* v_log_5278_; uint8_t v_action_5279_; uint8_t v_wantsRebuild_5280_; lean_object* v_buildTime_5281_; lean_object* v_art_5288_; lean_object* v___y_5289_; lean_object* v___x_5304_; 
v___x_5274_ = ((lean_object*)(l_Lake_buildFileUnlessUpToDate_x27___closed__0));
lean_inc_ref(v_file_5252_);
v___x_5275_ = lean_string_append(v_file_5252_, v___x_5274_);
lean_inc_ref(v___x_5275_);
v___x_5304_ = l_Lake_readTraceFile(v___x_5275_, v_log_5266_);
if (lean_obj_tag(v___x_5304_) == 0)
{
if (lean_obj_tag(v___y_5260_) == 1)
{
lean_object* v_a_5305_; lean_object* v_a_5306_; lean_object* v_val_5307_; uint64_t v_hash_5308_; lean_object* v_mtime_5309_; lean_object* v___y_5311_; uint8_t v___y_5312_; lean_object* v___y_5313_; lean_object* v___y_5314_; lean_object* v___y_5315_; lean_object* v___y_5316_; uint8_t v___y_5317_; lean_object* v___y_5318_; lean_object* v___y_5319_; lean_object* v_wsIdx_5323_; lean_object* v_config_5324_; lean_object* v_a_5326_; lean_object* v_a_5327_; lean_object* v___y_5357_; lean_object* v_enableArtifactCache_x3f_5360_; lean_object* v_restoreAllArtifacts_x3f_5361_; uint8_t v___y_5363_; lean_object* v___y_5364_; uint8_t v___y_5365_; uint8_t v___y_5405_; uint8_t v___y_5406_; uint8_t v_a_5407_; lean_object* v_a_5408_; uint8_t v___y_5410_; lean_object* v_a_5411_; uint8_t v___y_5428_; uint8_t v_a_5429_; lean_object* v_a_5430_; lean_object* v_a_5433_; uint8_t v_a_5467_; lean_object* v_a_5468_; lean_object* v___x_5484_; 
v_a_5305_ = lean_ctor_get(v___x_5304_, 0);
lean_inc(v_a_5305_);
v_a_5306_ = lean_ctor_get(v___x_5304_, 1);
lean_inc(v_a_5306_);
lean_dec_ref_known(v___x_5304_, 2);
v_val_5307_ = lean_ctor_get(v___y_5260_, 0);
v_hash_5308_ = lean_ctor_get_uint64(v_trace_5269_, sizeof(void*)*3);
v_mtime_5309_ = lean_ctor_get(v_trace_5269_, 2);
v_wsIdx_5323_ = lean_ctor_get(v_val_5307_, 0);
v_config_5324_ = lean_ctor_get(v_val_5307_, 6);
v_enableArtifactCache_x3f_5360_ = lean_ctor_get(v_config_5324_, 24);
v_restoreAllArtifacts_x3f_5361_ = lean_ctor_get(v_config_5324_, 25);
lean_inc_ref(v_trace_5269_);
v___x_5484_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5484_, 0, v_a_5306_);
lean_ctor_set(v___x_5484_, 1, v_trace_5269_);
lean_ctor_set(v___x_5484_, 2, v_buildTime_5270_);
lean_ctor_set_uint8(v___x_5484_, sizeof(void*)*3, v_action_5267_);
lean_ctor_set_uint8(v___x_5484_, sizeof(void*)*3 + 1, v_wantsRebuild_5268_);
if (lean_obj_tag(v_enableArtifactCache_x3f_5360_) == 0)
{
lean_object* v_toContext_5485_; lean_object* v_lakeEnv_5486_; lean_object* v_enableArtifactCache_x3f_5487_; 
v_toContext_5485_ = lean_ctor_get(v___y_5263_, 1);
v_lakeEnv_5486_ = lean_ctor_get(v_toContext_5485_, 0);
v_enableArtifactCache_x3f_5487_ = lean_ctor_get(v_lakeEnv_5486_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_5487_) == 0)
{
lean_object* v_packages_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v_config_5491_; lean_object* v_enableArtifactCache_x3f_5492_; 
v_packages_5488_ = lean_ctor_get(v_toContext_5485_, 4);
v___x_5489_ = lean_unsigned_to_nat(0u);
v___x_5490_ = lean_array_fget_borrowed(v_packages_5488_, v___x_5489_);
v_config_5491_ = lean_ctor_get(v___x_5490_, 6);
v_enableArtifactCache_x3f_5492_ = lean_ctor_get(v_config_5491_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_5492_) == 0)
{
v_a_5433_ = v___x_5484_;
goto v___jp_5432_;
}
else
{
lean_object* v_val_5493_; uint8_t v___x_5494_; 
v_val_5493_ = lean_ctor_get(v_enableArtifactCache_x3f_5492_, 0);
v___x_5494_ = lean_unbox(v_val_5493_);
v_a_5467_ = v___x_5494_;
v_a_5468_ = v___x_5484_;
goto v___jp_5466_;
}
}
else
{
lean_object* v_val_5495_; uint8_t v___x_5496_; 
v_val_5495_ = lean_ctor_get(v_enableArtifactCache_x3f_5487_, 0);
v___x_5496_ = lean_unbox(v_val_5495_);
v_a_5467_ = v___x_5496_;
v_a_5468_ = v___x_5484_;
goto v___jp_5466_;
}
}
else
{
lean_object* v_val_5497_; uint8_t v___x_5498_; 
v_val_5497_ = lean_ctor_get(v_enableArtifactCache_x3f_5360_, 0);
v___x_5498_ = lean_unbox(v_val_5497_);
v_a_5467_ = v___x_5498_;
v_a_5468_ = v___x_5484_;
goto v___jp_5466_;
}
v___jp_5310_:
{
lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; 
lean_dec_ref(v___y_5313_);
v___x_5320_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5320_, 0, v___y_5319_);
v___x_5321_ = l___private_Lake_Config_Cache_0__Lake_CacheMap_insertCore(v_hash_5308_, v___x_5320_, v___y_5316_, v_platformIndependent_5258_);
v___x_5322_ = lean_st_ref_put(v___y_5314_, v___x_5321_);
v___y_5277_ = v___y_5318_;
v_log_5278_ = v___y_5315_;
v_action_5279_ = v___y_5312_;
v_wantsRebuild_5280_ = v___y_5317_;
v_buildTime_5281_ = v___y_5311_;
goto v___jp_5276_;
}
v___jp_5325_:
{
lean_object* v___x_5328_; uint8_t v___x_5329_; 
v___x_5328_ = lean_unsigned_to_nat(0u);
v___x_5329_ = lean_nat_dec_eq(v_wsIdx_5323_, v___x_5328_);
if (v___x_5329_ == 0)
{
lean_object* v_log_5330_; uint8_t v_action_5331_; uint8_t v_wantsRebuild_5332_; lean_object* v_buildTime_5333_; 
v_log_5330_ = lean_ctor_get(v_a_5327_, 0);
lean_inc_ref(v_log_5330_);
v_action_5331_ = lean_ctor_get_uint8(v_a_5327_, sizeof(void*)*3);
v_wantsRebuild_5332_ = lean_ctor_get_uint8(v_a_5327_, sizeof(void*)*3 + 1);
v_buildTime_5333_ = lean_ctor_get(v_a_5327_, 2);
lean_inc(v_buildTime_5333_);
lean_dec_ref(v_a_5327_);
v___y_5277_ = v_a_5326_;
v_log_5278_ = v_log_5330_;
v_action_5279_ = v_action_5331_;
v_wantsRebuild_5280_ = v_wantsRebuild_5332_;
v_buildTime_5281_ = v_buildTime_5333_;
goto v___jp_5276_;
}
else
{
lean_object* v_outputsRef_x3f_5334_; 
v_outputsRef_x3f_5334_ = lean_ctor_get(v___y_5263_, 5);
if (lean_obj_tag(v_outputsRef_x3f_5334_) == 1)
{
lean_object* v_log_5335_; uint8_t v_action_5336_; uint8_t v_wantsRebuild_5337_; lean_object* v_trace_5338_; lean_object* v_buildTime_5339_; lean_object* v_val_5340_; lean_object* v_descr_5341_; lean_object* v___x_5342_; uint64_t v_hash_5343_; lean_object* v_ext_5344_; lean_object* v___x_5345_; uint8_t v___x_5346_; 
v_log_5335_ = lean_ctor_get(v_a_5327_, 0);
lean_inc_ref(v_log_5335_);
v_action_5336_ = lean_ctor_get_uint8(v_a_5327_, sizeof(void*)*3);
v_wantsRebuild_5337_ = lean_ctor_get_uint8(v_a_5327_, sizeof(void*)*3 + 1);
v_trace_5338_ = lean_ctor_get(v_a_5327_, 1);
lean_inc_ref(v_trace_5338_);
v_buildTime_5339_ = lean_ctor_get(v_a_5327_, 2);
lean_inc(v_buildTime_5339_);
lean_dec_ref(v_a_5327_);
v_val_5340_ = lean_ctor_get(v_outputsRef_x3f_5334_, 0);
v_descr_5341_ = lean_ctor_get(v_a_5326_, 0);
v___x_5342_ = lean_st_ref_take(v_val_5340_);
v_hash_5343_ = lean_ctor_get_uint64(v_descr_5341_, sizeof(void*)*1);
v_ext_5344_ = lean_ctor_get(v_descr_5341_, 0);
v___x_5345_ = lean_string_utf8_byte_size(v_ext_5344_);
v___x_5346_ = lean_nat_dec_eq(v___x_5345_, v___x_5328_);
if (v___x_5346_ == 0)
{
lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; 
v___x_5347_ = l_Lake_lowerHexUInt64(v_hash_5343_);
v___x_5348_ = ((lean_object*)(l_Lake_instToOutputJsonArtifact___lam__0___closed__0));
v___x_5349_ = lean_string_append(v___x_5347_, v___x_5348_);
v___x_5350_ = lean_string_append(v___x_5349_, v_ext_5344_);
v___y_5311_ = v_buildTime_5339_;
v___y_5312_ = v_action_5336_;
v___y_5313_ = v_trace_5338_;
v___y_5314_ = v_val_5340_;
v___y_5315_ = v_log_5335_;
v___y_5316_ = v___x_5342_;
v___y_5317_ = v_wantsRebuild_5337_;
v___y_5318_ = v_a_5326_;
v___y_5319_ = v___x_5350_;
goto v___jp_5310_;
}
else
{
lean_object* v___x_5351_; 
v___x_5351_ = l_Lake_lowerHexUInt64(v_hash_5343_);
v___y_5311_ = v_buildTime_5339_;
v___y_5312_ = v_action_5336_;
v___y_5313_ = v_trace_5338_;
v___y_5314_ = v_val_5340_;
v___y_5315_ = v_log_5335_;
v___y_5316_ = v___x_5342_;
v___y_5317_ = v_wantsRebuild_5337_;
v___y_5318_ = v_a_5326_;
v___y_5319_ = v___x_5351_;
goto v___jp_5310_;
}
}
else
{
lean_object* v_log_5352_; uint8_t v_action_5353_; uint8_t v_wantsRebuild_5354_; lean_object* v_buildTime_5355_; 
v_log_5352_ = lean_ctor_get(v_a_5327_, 0);
lean_inc_ref(v_log_5352_);
v_action_5353_ = lean_ctor_get_uint8(v_a_5327_, sizeof(void*)*3);
v_wantsRebuild_5354_ = lean_ctor_get_uint8(v_a_5327_, sizeof(void*)*3 + 1);
v_buildTime_5355_ = lean_ctor_get(v_a_5327_, 2);
lean_inc(v_buildTime_5355_);
lean_dec_ref(v_a_5327_);
v___y_5277_ = v_a_5326_;
v_log_5278_ = v_log_5352_;
v_action_5279_ = v_action_5353_;
v_wantsRebuild_5280_ = v_wantsRebuild_5354_;
v_buildTime_5281_ = v_buildTime_5355_;
goto v___jp_5276_;
}
}
}
v___jp_5356_:
{
if (lean_obj_tag(v___y_5357_) == 0)
{
lean_object* v_a_5358_; lean_object* v_a_5359_; 
v_a_5358_ = lean_ctor_get(v___y_5357_, 0);
lean_inc(v_a_5358_);
v_a_5359_ = lean_ctor_get(v___y_5357_, 1);
lean_inc(v_a_5359_);
lean_dec_ref_known(v___y_5357_, 2);
v_a_5326_ = v_a_5358_;
v_a_5327_ = v_a_5359_;
goto v___jp_5325_;
}
else
{
lean_dec_ref(v___x_5275_);
lean_del_object(v___x_5272_);
return v___y_5357_;
}
}
v___jp_5362_:
{
lean_object* v___x_5366_; 
lean_inc_ref(v___y_5259_);
lean_inc(v_val_5307_);
lean_inc(v_a_5305_);
lean_inc_ref(v___x_5275_);
lean_inc_ref(v_file_5252_);
v___x_5366_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_file_5252_, v_exe_5257_, v_hash_5308_, v___x_5275_, v_a_5305_, v_val_5307_, v___y_5365_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v___y_5364_);
if (lean_obj_tag(v___x_5366_) == 0)
{
lean_object* v_a_5367_; 
v_a_5367_ = lean_ctor_get(v___x_5366_, 0);
lean_inc(v_a_5367_);
if (lean_obj_tag(v_a_5367_) == 1)
{
lean_object* v_a_5368_; lean_object* v_val_5369_; 
lean_dec(v_a_5305_);
lean_dec_ref(v_trace_5269_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_ext_5255_);
lean_dec_ref(v_build_5253_);
lean_dec_ref(v_file_5252_);
v_a_5368_ = lean_ctor_get(v___x_5366_, 1);
lean_inc(v_a_5368_);
lean_dec_ref_known(v___x_5366_, 2);
v_val_5369_ = lean_ctor_get(v_a_5367_, 0);
lean_inc(v_val_5369_);
lean_dec_ref_known(v_a_5367_, 1);
v_a_5326_ = v_val_5369_;
v_a_5327_ = v_a_5368_;
goto v___jp_5325_;
}
else
{
lean_object* v_a_5370_; lean_object* v___x_5371_; 
lean_dec(v_a_5367_);
v_a_5370_ = lean_ctor_get(v___x_5366_, 1);
lean_inc(v_a_5370_);
lean_dec_ref_known(v___x_5366_, 2);
v___x_5371_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v___y_5259_, v_file_5252_, v_trace_5269_, v_a_5305_, v_mtime_5309_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v_a_5370_);
if (lean_obj_tag(v___x_5371_) == 0)
{
lean_object* v_a_5372_; lean_object* v_a_5373_; uint8_t v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; uint8_t v___x_5377_; 
v_a_5372_ = lean_ctor_get(v___x_5371_, 0);
lean_inc(v_a_5372_);
v_a_5373_ = lean_ctor_get(v___x_5371_, 1);
lean_inc(v_a_5373_);
lean_dec_ref_known(v___x_5371_, 2);
v___x_5374_ = lean_unbox(v_a_5372_);
v___x_5375_ = l_Lake_OutputStatus_ctorIdx(v___x_5374_);
v___x_5376_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_5377_ = lean_nat_dec_eq(v___x_5375_, v___x_5376_);
lean_dec(v___x_5375_);
if (v___x_5377_ == 0)
{
lean_object* v___x_5378_; uint8_t v___x_5379_; lean_object* v___x_5380_; 
lean_dec_ref(v_trace_5269_);
lean_dec_ref(v_build_5253_);
v___x_5378_ = lean_box(0);
v___x_5379_ = lean_unbox(v_a_5372_);
lean_dec(v_a_5372_);
lean_inc(v_val_5307_);
v___x_5380_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v___x_5379_, v_file_5252_, v_ext_5255_, v_text_5254_, v_exe_5257_, v___y_5365_, v_val_5307_, v_hash_5308_, v___y_5363_, v___x_5378_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v_a_5373_);
lean_dec_ref(v___y_5259_);
v___y_5357_ = v___x_5380_;
goto v___jp_5356_;
}
else
{
lean_object* v___x_5381_; lean_object* v___x_5382_; 
v___x_5381_ = lean_box(0);
lean_inc_ref(v___y_5259_);
lean_inc_ref(v___x_5275_);
lean_inc_ref(v_ext_5255_);
lean_inc_ref(v_file_5252_);
v___x_5382_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5252_, v_build_5253_, v_text_5254_, v_ext_5255_, v_trace_5269_, v___x_5275_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v_a_5373_);
lean_dec_ref(v_trace_5269_);
if (lean_obj_tag(v___x_5382_) == 0)
{
lean_object* v_a_5383_; uint8_t v___x_5384_; lean_object* v___x_5385_; 
v_a_5383_ = lean_ctor_get(v___x_5382_, 1);
lean_inc(v_a_5383_);
lean_dec_ref_known(v___x_5382_, 2);
v___x_5384_ = lean_unbox(v_a_5372_);
lean_dec(v_a_5372_);
lean_inc(v_val_5307_);
v___x_5385_ = l_Lake_buildArtifactUnlessUpToDate___lam__1(v___x_5384_, v_file_5252_, v_ext_5255_, v_text_5254_, v_exe_5257_, v___y_5365_, v_val_5307_, v_hash_5308_, v___y_5363_, v___x_5381_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v_a_5383_);
lean_dec_ref(v___y_5259_);
v___y_5357_ = v___x_5385_;
goto v___jp_5356_;
}
else
{
lean_dec(v_a_5372_);
lean_dec_ref(v___x_5275_);
lean_del_object(v___x_5272_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_ext_5255_);
lean_dec_ref(v_file_5252_);
return v___x_5382_;
}
}
}
else
{
lean_object* v_a_5386_; lean_object* v_a_5387_; lean_object* v___x_5389_; uint8_t v_isShared_5390_; uint8_t v_isSharedCheck_5394_; 
lean_dec_ref(v___x_5275_);
lean_del_object(v___x_5272_);
lean_dec_ref(v_trace_5269_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_ext_5255_);
lean_dec_ref(v_build_5253_);
lean_dec_ref(v_file_5252_);
v_a_5386_ = lean_ctor_get(v___x_5371_, 0);
v_a_5387_ = lean_ctor_get(v___x_5371_, 1);
v_isSharedCheck_5394_ = !lean_is_exclusive(v___x_5371_);
if (v_isSharedCheck_5394_ == 0)
{
v___x_5389_ = v___x_5371_;
v_isShared_5390_ = v_isSharedCheck_5394_;
goto v_resetjp_5388_;
}
else
{
lean_inc(v_a_5387_);
lean_inc(v_a_5386_);
lean_dec(v___x_5371_);
v___x_5389_ = lean_box(0);
v_isShared_5390_ = v_isSharedCheck_5394_;
goto v_resetjp_5388_;
}
v_resetjp_5388_:
{
lean_object* v___x_5392_; 
if (v_isShared_5390_ == 0)
{
v___x_5392_ = v___x_5389_;
goto v_reusejp_5391_;
}
else
{
lean_object* v_reuseFailAlloc_5393_; 
v_reuseFailAlloc_5393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5393_, 0, v_a_5386_);
lean_ctor_set(v_reuseFailAlloc_5393_, 1, v_a_5387_);
v___x_5392_ = v_reuseFailAlloc_5393_;
goto v_reusejp_5391_;
}
v_reusejp_5391_:
{
return v___x_5392_;
}
}
}
}
}
else
{
lean_object* v_a_5395_; lean_object* v_a_5396_; lean_object* v___x_5398_; uint8_t v_isShared_5399_; uint8_t v_isSharedCheck_5403_; 
lean_dec(v_a_5305_);
lean_dec_ref(v___x_5275_);
lean_del_object(v___x_5272_);
lean_dec_ref(v_trace_5269_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_ext_5255_);
lean_dec_ref(v_build_5253_);
lean_dec_ref(v_file_5252_);
v_a_5395_ = lean_ctor_get(v___x_5366_, 0);
v_a_5396_ = lean_ctor_get(v___x_5366_, 1);
v_isSharedCheck_5403_ = !lean_is_exclusive(v___x_5366_);
if (v_isSharedCheck_5403_ == 0)
{
v___x_5398_ = v___x_5366_;
v_isShared_5399_ = v_isSharedCheck_5403_;
goto v_resetjp_5397_;
}
else
{
lean_inc(v_a_5396_);
lean_inc(v_a_5395_);
lean_dec(v___x_5366_);
v___x_5398_ = lean_box(0);
v_isShared_5399_ = v_isSharedCheck_5403_;
goto v_resetjp_5397_;
}
v_resetjp_5397_:
{
lean_object* v___x_5401_; 
if (v_isShared_5399_ == 0)
{
v___x_5401_ = v___x_5398_;
goto v_reusejp_5400_;
}
else
{
lean_object* v_reuseFailAlloc_5402_; 
v_reuseFailAlloc_5402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5402_, 0, v_a_5395_);
lean_ctor_set(v_reuseFailAlloc_5402_, 1, v_a_5396_);
v___x_5401_ = v_reuseFailAlloc_5402_;
goto v_reusejp_5400_;
}
v_reusejp_5400_:
{
return v___x_5401_;
}
}
}
}
v___jp_5404_:
{
if (v_restore_5256_ == 0)
{
v___y_5363_ = v___y_5405_;
v___y_5364_ = v_a_5408_;
v___y_5365_ = v_a_5407_;
goto v___jp_5362_;
}
else
{
v___y_5363_ = v___y_5405_;
v___y_5364_ = v_a_5408_;
v___y_5365_ = v___y_5406_;
goto v___jp_5362_;
}
}
v___jp_5409_:
{
lean_object* v___x_5412_; 
lean_inc_ref(v___y_5259_);
lean_inc(v_val_5307_);
lean_inc_ref(v___x_5275_);
lean_inc_ref(v_file_5252_);
v___x_5412_ = l_Lake_buildArtifactUnlessUpToDate___lam__0(v_file_5252_, v_exe_5257_, v_hash_5308_, v___x_5275_, v_a_5305_, v_val_5307_, v___y_5410_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v_a_5411_);
if (lean_obj_tag(v___x_5412_) == 0)
{
lean_object* v_a_5413_; 
v_a_5413_ = lean_ctor_get(v___x_5412_, 0);
lean_inc(v_a_5413_);
if (lean_obj_tag(v_a_5413_) == 1)
{
lean_object* v_a_5414_; lean_object* v_val_5415_; 
lean_dec_ref(v_trace_5269_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_ext_5255_);
lean_dec_ref(v_build_5253_);
lean_dec_ref(v_file_5252_);
v_a_5414_ = lean_ctor_get(v___x_5412_, 1);
lean_inc(v_a_5414_);
lean_dec_ref_known(v___x_5412_, 2);
v_val_5415_ = lean_ctor_get(v_a_5413_, 0);
lean_inc(v_val_5415_);
lean_dec_ref_known(v_a_5413_, 1);
v_a_5326_ = v_val_5415_;
v_a_5327_ = v_a_5414_;
goto v___jp_5325_;
}
else
{
lean_object* v_a_5416_; lean_object* v___x_5417_; 
lean_dec(v_a_5413_);
v_a_5416_ = lean_ctor_get(v___x_5412_, 1);
lean_inc(v_a_5416_);
lean_dec_ref_known(v___x_5412_, 2);
lean_inc_ref(v___x_5275_);
v___x_5417_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5252_, v_build_5253_, v_text_5254_, v_ext_5255_, v_trace_5269_, v___x_5275_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v_a_5416_);
lean_dec_ref(v_trace_5269_);
v___y_5357_ = v___x_5417_;
goto v___jp_5356_;
}
}
else
{
lean_object* v_a_5418_; lean_object* v_a_5419_; lean_object* v___x_5421_; uint8_t v_isShared_5422_; uint8_t v_isSharedCheck_5426_; 
lean_dec_ref(v___x_5275_);
lean_del_object(v___x_5272_);
lean_dec_ref(v_trace_5269_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_ext_5255_);
lean_dec_ref(v_build_5253_);
lean_dec_ref(v_file_5252_);
v_a_5418_ = lean_ctor_get(v___x_5412_, 0);
v_a_5419_ = lean_ctor_get(v___x_5412_, 1);
v_isSharedCheck_5426_ = !lean_is_exclusive(v___x_5412_);
if (v_isSharedCheck_5426_ == 0)
{
v___x_5421_ = v___x_5412_;
v_isShared_5422_ = v_isSharedCheck_5426_;
goto v_resetjp_5420_;
}
else
{
lean_inc(v_a_5419_);
lean_inc(v_a_5418_);
lean_dec(v___x_5412_);
v___x_5421_ = lean_box(0);
v_isShared_5422_ = v_isSharedCheck_5426_;
goto v_resetjp_5420_;
}
v_resetjp_5420_:
{
lean_object* v___x_5424_; 
if (v_isShared_5422_ == 0)
{
v___x_5424_ = v___x_5421_;
goto v_reusejp_5423_;
}
else
{
lean_object* v_reuseFailAlloc_5425_; 
v_reuseFailAlloc_5425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5425_, 0, v_a_5418_);
lean_ctor_set(v_reuseFailAlloc_5425_, 1, v_a_5419_);
v___x_5424_ = v_reuseFailAlloc_5425_;
goto v_reusejp_5423_;
}
v_reusejp_5423_:
{
return v___x_5424_;
}
}
}
}
v___jp_5427_:
{
if (v_a_5429_ == 0)
{
lean_object* v___x_5431_; 
lean_dec(v_a_5305_);
lean_inc_ref(v___x_5275_);
v___x_5431_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5252_, v_build_5253_, v_text_5254_, v_ext_5255_, v_trace_5269_, v___x_5275_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v_a_5430_);
lean_dec_ref(v_trace_5269_);
v___y_5357_ = v___x_5431_;
goto v___jp_5356_;
}
else
{
v___y_5410_ = v___y_5428_;
v_a_5411_ = v_a_5430_;
goto v___jp_5409_;
}
}
v___jp_5432_:
{
uint8_t v___x_5434_; lean_object* v___x_5435_; 
v___x_5434_ = 1;
lean_inc(v_a_5305_);
v___x_5435_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v___y_5259_, v_file_5252_, v_trace_5269_, v_a_5305_, v_mtime_5309_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v_a_5433_);
if (lean_obj_tag(v___x_5435_) == 0)
{
lean_object* v_a_5436_; lean_object* v_a_5437_; uint8_t v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; uint8_t v___x_5441_; 
v_a_5436_ = lean_ctor_get(v___x_5435_, 0);
lean_inc(v_a_5436_);
v_a_5437_ = lean_ctor_get(v___x_5435_, 1);
lean_inc(v_a_5437_);
lean_dec_ref_known(v___x_5435_, 2);
v___x_5438_ = lean_unbox(v_a_5436_);
lean_dec(v_a_5436_);
v___x_5439_ = l_Lake_OutputStatus_ctorIdx(v___x_5438_);
v___x_5440_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_5441_ = lean_nat_dec_eq(v___x_5439_, v___x_5440_);
lean_dec(v___x_5439_);
if (v___x_5441_ == 0)
{
lean_object* v___x_5442_; 
lean_dec(v_a_5305_);
lean_dec_ref(v_trace_5269_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_build_5253_);
v___x_5442_ = l_Lake_computeArtifact___redArg(v_file_5252_, v_ext_5255_, v_text_5254_, v___y_5263_, v_a_5437_);
v___y_5357_ = v___x_5442_;
goto v___jp_5356_;
}
else
{
if (lean_obj_tag(v_enableArtifactCache_x3f_5360_) == 0)
{
lean_object* v_toContext_5443_; lean_object* v_lakeEnv_5444_; lean_object* v_enableArtifactCache_x3f_5445_; 
v_toContext_5443_ = lean_ctor_get(v___y_5263_, 1);
v_lakeEnv_5444_ = lean_ctor_get(v_toContext_5443_, 0);
v_enableArtifactCache_x3f_5445_ = lean_ctor_get(v_lakeEnv_5444_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_5445_) == 0)
{
lean_object* v_packages_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v_config_5449_; lean_object* v_enableArtifactCache_x3f_5450_; 
v_packages_5446_ = lean_ctor_get(v_toContext_5443_, 4);
v___x_5447_ = lean_unsigned_to_nat(0u);
v___x_5448_ = lean_array_fget_borrowed(v_packages_5446_, v___x_5447_);
v_config_5449_ = lean_ctor_get(v___x_5448_, 6);
v_enableArtifactCache_x3f_5450_ = lean_ctor_get(v_config_5449_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_5450_) == 0)
{
v___y_5410_ = v___x_5434_;
v_a_5411_ = v_a_5437_;
goto v___jp_5409_;
}
else
{
lean_object* v_val_5451_; uint8_t v___x_5452_; 
v_val_5451_ = lean_ctor_get(v_enableArtifactCache_x3f_5450_, 0);
v___x_5452_ = lean_unbox(v_val_5451_);
v___y_5428_ = v___x_5434_;
v_a_5429_ = v___x_5452_;
v_a_5430_ = v_a_5437_;
goto v___jp_5427_;
}
}
else
{
lean_object* v_val_5453_; uint8_t v___x_5454_; 
v_val_5453_ = lean_ctor_get(v_enableArtifactCache_x3f_5445_, 0);
v___x_5454_ = lean_unbox(v_val_5453_);
v___y_5428_ = v___x_5434_;
v_a_5429_ = v___x_5454_;
v_a_5430_ = v_a_5437_;
goto v___jp_5427_;
}
}
else
{
lean_object* v_val_5455_; uint8_t v___x_5456_; 
v_val_5455_ = lean_ctor_get(v_enableArtifactCache_x3f_5360_, 0);
v___x_5456_ = lean_unbox(v_val_5455_);
v___y_5428_ = v___x_5434_;
v_a_5429_ = v___x_5456_;
v_a_5430_ = v_a_5437_;
goto v___jp_5427_;
}
}
}
else
{
lean_object* v_a_5457_; lean_object* v_a_5458_; lean_object* v___x_5460_; uint8_t v_isShared_5461_; uint8_t v_isSharedCheck_5465_; 
lean_dec(v_a_5305_);
lean_dec_ref(v___x_5275_);
lean_del_object(v___x_5272_);
lean_dec_ref(v_trace_5269_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_ext_5255_);
lean_dec_ref(v_build_5253_);
lean_dec_ref(v_file_5252_);
v_a_5457_ = lean_ctor_get(v___x_5435_, 0);
v_a_5458_ = lean_ctor_get(v___x_5435_, 1);
v_isSharedCheck_5465_ = !lean_is_exclusive(v___x_5435_);
if (v_isSharedCheck_5465_ == 0)
{
v___x_5460_ = v___x_5435_;
v_isShared_5461_ = v_isSharedCheck_5465_;
goto v_resetjp_5459_;
}
else
{
lean_inc(v_a_5458_);
lean_inc(v_a_5457_);
lean_dec(v___x_5435_);
v___x_5460_ = lean_box(0);
v_isShared_5461_ = v_isSharedCheck_5465_;
goto v_resetjp_5459_;
}
v_resetjp_5459_:
{
lean_object* v___x_5463_; 
if (v_isShared_5461_ == 0)
{
v___x_5463_ = v___x_5460_;
goto v_reusejp_5462_;
}
else
{
lean_object* v_reuseFailAlloc_5464_; 
v_reuseFailAlloc_5464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5464_, 0, v_a_5457_);
lean_ctor_set(v_reuseFailAlloc_5464_, 1, v_a_5458_);
v___x_5463_ = v_reuseFailAlloc_5464_;
goto v_reusejp_5462_;
}
v_reusejp_5462_:
{
return v___x_5463_;
}
}
}
}
v___jp_5466_:
{
if (v_a_5467_ == 0)
{
v_a_5433_ = v_a_5468_;
goto v___jp_5432_;
}
else
{
if (lean_obj_tag(v_restoreAllArtifacts_x3f_5361_) == 0)
{
lean_object* v_toContext_5469_; lean_object* v_lakeEnv_5470_; lean_object* v_restoreAllArtifacts_x3f_5471_; 
v_toContext_5469_ = lean_ctor_get(v___y_5263_, 1);
v_lakeEnv_5470_ = lean_ctor_get(v_toContext_5469_, 0);
v_restoreAllArtifacts_x3f_5471_ = lean_ctor_get(v_lakeEnv_5470_, 7);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_5471_) == 0)
{
lean_object* v_packages_5472_; lean_object* v___x_5473_; lean_object* v___x_5474_; lean_object* v_config_5475_; lean_object* v_restoreAllArtifacts_x3f_5476_; 
v_packages_5472_ = lean_ctor_get(v_toContext_5469_, 4);
v___x_5473_ = lean_unsigned_to_nat(0u);
v___x_5474_ = lean_array_fget_borrowed(v_packages_5472_, v___x_5473_);
v_config_5475_ = lean_ctor_get(v___x_5474_, 6);
v_restoreAllArtifacts_x3f_5476_ = lean_ctor_get(v_config_5475_, 25);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_5476_) == 0)
{
uint8_t v___x_5477_; 
v___x_5477_ = 0;
v___y_5405_ = v_a_5467_;
v___y_5406_ = v_a_5467_;
v_a_5407_ = v___x_5477_;
v_a_5408_ = v_a_5468_;
goto v___jp_5404_;
}
else
{
lean_object* v_val_5478_; uint8_t v___x_5479_; 
v_val_5478_ = lean_ctor_get(v_restoreAllArtifacts_x3f_5476_, 0);
v___x_5479_ = lean_unbox(v_val_5478_);
v___y_5405_ = v_a_5467_;
v___y_5406_ = v_a_5467_;
v_a_5407_ = v___x_5479_;
v_a_5408_ = v_a_5468_;
goto v___jp_5404_;
}
}
else
{
lean_object* v_val_5480_; uint8_t v___x_5481_; 
v_val_5480_ = lean_ctor_get(v_restoreAllArtifacts_x3f_5471_, 0);
v___x_5481_ = lean_unbox(v_val_5480_);
v___y_5405_ = v_a_5467_;
v___y_5406_ = v_a_5467_;
v_a_5407_ = v___x_5481_;
v_a_5408_ = v_a_5468_;
goto v___jp_5404_;
}
}
else
{
lean_object* v_val_5482_; uint8_t v___x_5483_; 
v_val_5482_ = lean_ctor_get(v_restoreAllArtifacts_x3f_5361_, 0);
v___x_5483_ = lean_unbox(v_val_5482_);
v___y_5405_ = v_a_5467_;
v___y_5406_ = v_a_5467_;
v_a_5407_ = v___x_5483_;
v_a_5408_ = v_a_5468_;
goto v___jp_5404_;
}
}
}
}
else
{
lean_object* v_a_5499_; lean_object* v_a_5500_; lean_object* v_mtime_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; 
lean_del_object(v___x_5272_);
v_a_5499_ = lean_ctor_get(v___x_5304_, 0);
lean_inc(v_a_5499_);
v_a_5500_ = lean_ctor_get(v___x_5304_, 1);
lean_inc(v_a_5500_);
lean_dec_ref_known(v___x_5304_, 2);
v_mtime_5501_ = lean_ctor_get(v_trace_5269_, 2);
lean_inc_ref(v_trace_5269_);
v___x_5502_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5502_, 0, v_a_5500_);
lean_ctor_set(v___x_5502_, 1, v_trace_5269_);
lean_ctor_set(v___x_5502_, 2, v_buildTime_5270_);
lean_ctor_set_uint8(v___x_5502_, sizeof(void*)*3, v_action_5267_);
lean_ctor_set_uint8(v___x_5502_, sizeof(void*)*3 + 1, v_wantsRebuild_5268_);
v___x_5503_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00Lake_buildFileUnlessUpToDate_x27_spec__0(v___y_5259_, v_file_5252_, v_trace_5269_, v_a_5499_, v_mtime_5501_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v___x_5502_);
if (lean_obj_tag(v___x_5503_) == 0)
{
lean_object* v_a_5504_; lean_object* v_a_5505_; uint8_t v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; uint8_t v___x_5509_; 
v_a_5504_ = lean_ctor_get(v___x_5503_, 0);
lean_inc(v_a_5504_);
v_a_5505_ = lean_ctor_get(v___x_5503_, 1);
lean_inc(v_a_5505_);
lean_dec_ref_known(v___x_5503_, 2);
v___x_5506_ = lean_unbox(v_a_5504_);
lean_dec(v_a_5504_);
v___x_5507_ = l_Lake_OutputStatus_ctorIdx(v___x_5506_);
v___x_5508_ = lean_obj_once(&l_Lake_OutputStatus_isUpToDate___closed__0, &l_Lake_OutputStatus_isUpToDate___closed__0_once, _init_l_Lake_OutputStatus_isUpToDate___closed__0);
v___x_5509_ = lean_nat_dec_eq(v___x_5507_, v___x_5508_);
lean_dec(v___x_5507_);
if (v___x_5509_ == 0)
{
lean_object* v___x_5510_; 
lean_dec_ref(v_trace_5269_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_build_5253_);
v___x_5510_ = l_Lake_computeArtifact___redArg(v_file_5252_, v_ext_5255_, v_text_5254_, v___y_5263_, v_a_5505_);
if (lean_obj_tag(v___x_5510_) == 0)
{
lean_object* v_a_5511_; lean_object* v_a_5512_; 
v_a_5511_ = lean_ctor_get(v___x_5510_, 0);
lean_inc(v_a_5511_);
v_a_5512_ = lean_ctor_get(v___x_5510_, 1);
lean_inc(v_a_5512_);
lean_dec_ref_known(v___x_5510_, 2);
v_art_5288_ = v_a_5511_;
v___y_5289_ = v_a_5512_;
goto v___jp_5287_;
}
else
{
lean_dec_ref(v___x_5275_);
return v___x_5510_;
}
}
else
{
lean_object* v___x_5513_; 
lean_inc_ref(v___x_5275_);
v___x_5513_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_doBuild(v_file_5252_, v_build_5253_, v_text_5254_, v_ext_5255_, v_trace_5269_, v___x_5275_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v_a_5505_);
lean_dec_ref(v_trace_5269_);
if (lean_obj_tag(v___x_5513_) == 0)
{
lean_object* v_a_5514_; lean_object* v_a_5515_; 
v_a_5514_ = lean_ctor_get(v___x_5513_, 0);
lean_inc(v_a_5514_);
v_a_5515_ = lean_ctor_get(v___x_5513_, 1);
lean_inc(v_a_5515_);
lean_dec_ref_known(v___x_5513_, 2);
v_art_5288_ = v_a_5514_;
v___y_5289_ = v_a_5515_;
goto v___jp_5287_;
}
else
{
lean_dec_ref(v___x_5275_);
return v___x_5513_;
}
}
}
else
{
lean_object* v_a_5516_; lean_object* v_a_5517_; lean_object* v___x_5519_; uint8_t v_isShared_5520_; uint8_t v_isSharedCheck_5524_; 
lean_dec_ref(v___x_5275_);
lean_dec_ref(v_trace_5269_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_ext_5255_);
lean_dec_ref(v_build_5253_);
lean_dec_ref(v_file_5252_);
v_a_5516_ = lean_ctor_get(v___x_5503_, 0);
v_a_5517_ = lean_ctor_get(v___x_5503_, 1);
v_isSharedCheck_5524_ = !lean_is_exclusive(v___x_5503_);
if (v_isSharedCheck_5524_ == 0)
{
v___x_5519_ = v___x_5503_;
v_isShared_5520_ = v_isSharedCheck_5524_;
goto v_resetjp_5518_;
}
else
{
lean_inc(v_a_5517_);
lean_inc(v_a_5516_);
lean_dec(v___x_5503_);
v___x_5519_ = lean_box(0);
v_isShared_5520_ = v_isSharedCheck_5524_;
goto v_resetjp_5518_;
}
v_resetjp_5518_:
{
lean_object* v___x_5522_; 
if (v_isShared_5520_ == 0)
{
v___x_5522_ = v___x_5519_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v_a_5516_);
lean_ctor_set(v_reuseFailAlloc_5523_, 1, v_a_5517_);
v___x_5522_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
return v___x_5522_;
}
}
}
}
}
else
{
lean_object* v_a_5525_; lean_object* v_a_5526_; lean_object* v___x_5528_; uint8_t v_isShared_5529_; uint8_t v_isSharedCheck_5534_; 
lean_dec_ref(v___x_5275_);
lean_del_object(v___x_5272_);
lean_dec_ref(v___y_5259_);
lean_dec_ref(v_ext_5255_);
lean_dec_ref(v_build_5253_);
lean_dec_ref(v_file_5252_);
v_a_5525_ = lean_ctor_get(v___x_5304_, 0);
v_a_5526_ = lean_ctor_get(v___x_5304_, 1);
v_isSharedCheck_5534_ = !lean_is_exclusive(v___x_5304_);
if (v_isSharedCheck_5534_ == 0)
{
v___x_5528_ = v___x_5304_;
v_isShared_5529_ = v_isSharedCheck_5534_;
goto v_resetjp_5527_;
}
else
{
lean_inc(v_a_5526_);
lean_inc(v_a_5525_);
lean_dec(v___x_5304_);
v___x_5528_ = lean_box(0);
v_isShared_5529_ = v_isSharedCheck_5534_;
goto v_resetjp_5527_;
}
v_resetjp_5527_:
{
lean_object* v___x_5530_; lean_object* v___x_5532_; 
v___x_5530_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5530_, 0, v_a_5526_);
lean_ctor_set(v___x_5530_, 1, v_trace_5269_);
lean_ctor_set(v___x_5530_, 2, v_buildTime_5270_);
lean_ctor_set_uint8(v___x_5530_, sizeof(void*)*3, v_action_5267_);
lean_ctor_set_uint8(v___x_5530_, sizeof(void*)*3 + 1, v_wantsRebuild_5268_);
if (v_isShared_5529_ == 0)
{
lean_ctor_set(v___x_5528_, 1, v___x_5530_);
v___x_5532_ = v___x_5528_;
goto v_reusejp_5531_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v_a_5525_);
lean_ctor_set(v_reuseFailAlloc_5533_, 1, v___x_5530_);
v___x_5532_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
return v___x_5532_;
}
}
}
v___jp_5276_:
{
lean_object* v___x_5282_; lean_object* v___x_5284_; 
v___x_5282_ = l_Lake_Artifact_trace(v___y_5277_);
if (v_isShared_5273_ == 0)
{
lean_ctor_set(v___x_5272_, 2, v_buildTime_5281_);
lean_ctor_set(v___x_5272_, 1, v___x_5282_);
lean_ctor_set(v___x_5272_, 0, v_log_5278_);
v___x_5284_ = v___x_5272_;
goto v_reusejp_5283_;
}
else
{
lean_object* v_reuseFailAlloc_5286_; 
v_reuseFailAlloc_5286_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5286_, 0, v_log_5278_);
lean_ctor_set(v_reuseFailAlloc_5286_, 1, v___x_5282_);
lean_ctor_set(v_reuseFailAlloc_5286_, 2, v_buildTime_5281_);
v___x_5284_ = v_reuseFailAlloc_5286_;
goto v_reusejp_5283_;
}
v_reusejp_5283_:
{
lean_object* v___x_5285_; 
lean_ctor_set_uint8(v___x_5284_, sizeof(void*)*3, v_action_5279_);
lean_ctor_set_uint8(v___x_5284_, sizeof(void*)*3 + 1, v_wantsRebuild_5280_);
v___x_5285_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v___y_5277_, v___x_5275_, v___x_5284_);
lean_dec_ref(v___x_5275_);
return v___x_5285_;
}
}
v___jp_5287_:
{
lean_object* v_log_5290_; uint8_t v_action_5291_; uint8_t v_wantsRebuild_5292_; lean_object* v_buildTime_5293_; lean_object* v___x_5295_; uint8_t v_isShared_5296_; uint8_t v_isSharedCheck_5302_; 
v_log_5290_ = lean_ctor_get(v___y_5289_, 0);
v_action_5291_ = lean_ctor_get_uint8(v___y_5289_, sizeof(void*)*3);
v_wantsRebuild_5292_ = lean_ctor_get_uint8(v___y_5289_, sizeof(void*)*3 + 1);
v_buildTime_5293_ = lean_ctor_get(v___y_5289_, 2);
v_isSharedCheck_5302_ = !lean_is_exclusive(v___y_5289_);
if (v_isSharedCheck_5302_ == 0)
{
lean_object* v_unused_5303_; 
v_unused_5303_ = lean_ctor_get(v___y_5289_, 1);
lean_dec(v_unused_5303_);
v___x_5295_ = v___y_5289_;
v_isShared_5296_ = v_isSharedCheck_5302_;
goto v_resetjp_5294_;
}
else
{
lean_inc(v_buildTime_5293_);
lean_inc(v_log_5290_);
lean_dec(v___y_5289_);
v___x_5295_ = lean_box(0);
v_isShared_5296_ = v_isSharedCheck_5302_;
goto v_resetjp_5294_;
}
v_resetjp_5294_:
{
lean_object* v___x_5297_; lean_object* v___x_5299_; 
v___x_5297_ = l_Lake_Artifact_trace(v_art_5288_);
if (v_isShared_5296_ == 0)
{
lean_ctor_set(v___x_5295_, 1, v___x_5297_);
v___x_5299_ = v___x_5295_;
goto v_reusejp_5298_;
}
else
{
lean_object* v_reuseFailAlloc_5301_; 
v_reuseFailAlloc_5301_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5301_, 0, v_log_5290_);
lean_ctor_set(v_reuseFailAlloc_5301_, 1, v___x_5297_);
lean_ctor_set(v_reuseFailAlloc_5301_, 2, v_buildTime_5293_);
lean_ctor_set_uint8(v_reuseFailAlloc_5301_, sizeof(void*)*3, v_action_5291_);
lean_ctor_set_uint8(v_reuseFailAlloc_5301_, sizeof(void*)*3 + 1, v_wantsRebuild_5292_);
v___x_5299_ = v_reuseFailAlloc_5301_;
goto v_reusejp_5298_;
}
v_reusejp_5298_:
{
lean_object* v___x_5300_; 
v___x_5300_ = l___private_Lake_Build_Common_0__Lake_buildArtifactUnlessUpToDate_setMTime___redArg(v_art_5288_, v___x_5275_, v___x_5299_);
lean_dec_ref(v___x_5275_);
return v___x_5300_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildArtifactUnlessUpToDate___boxed(lean_object* v_file_5536_, lean_object* v_build_5537_, lean_object* v_text_5538_, lean_object* v_ext_5539_, lean_object* v_restore_5540_, lean_object* v_exe_5541_, lean_object* v_platformIndependent_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_, lean_object* v___y_5545_, lean_object* v___y_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_){
_start:
{
uint8_t v_text_boxed_5550_; uint8_t v_restore_boxed_5551_; uint8_t v_exe_boxed_5552_; uint8_t v_platformIndependent_boxed_5553_; lean_object* v_res_5554_; 
v_text_boxed_5550_ = lean_unbox(v_text_5538_);
v_restore_boxed_5551_ = lean_unbox(v_restore_5540_);
v_exe_boxed_5552_ = lean_unbox(v_exe_5541_);
v_platformIndependent_boxed_5553_ = lean_unbox(v_platformIndependent_5542_);
v_res_5554_ = l_Lake_buildArtifactUnlessUpToDate(v_file_5536_, v_build_5537_, v_text_boxed_5550_, v_ext_5539_, v_restore_boxed_5551_, v_exe_boxed_5552_, v_platformIndependent_boxed_5553_, v___y_5543_, v___y_5544_, v___y_5545_, v___y_5546_, v___y_5547_, v___y_5548_);
lean_dec_ref(v___y_5547_);
lean_dec(v___y_5546_);
lean_dec(v___y_5545_);
lean_dec(v___y_5544_);
return v_res_5554_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0(lean_object* v_extraDepTrace_5556_, lean_object* v_build_5557_, lean_object* v_file_5558_, uint8_t v_text_5559_, lean_object* v_depInfo_5560_, lean_object* v___y_5561_, lean_object* v___y_5562_, lean_object* v___y_5563_, lean_object* v___y_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_){
_start:
{
lean_object* v___x_5568_; 
lean_inc_ref(v___y_5565_);
lean_inc(v___y_5564_);
lean_inc(v___y_5563_);
lean_inc(v___y_5562_);
lean_inc_ref(v___y_5561_);
v___x_5568_ = lean_apply_7(v_extraDepTrace_5556_, v___y_5561_, v___y_5562_, v___y_5563_, v___y_5564_, v___y_5565_, v___y_5566_, lean_box(0));
if (lean_obj_tag(v___x_5568_) == 0)
{
lean_object* v_a_5569_; lean_object* v_a_5570_; lean_object* v_log_5571_; uint8_t v_action_5572_; uint8_t v_wantsRebuild_5573_; lean_object* v_trace_5574_; lean_object* v_buildTime_5575_; lean_object* v___x_5577_; uint8_t v_isShared_5578_; uint8_t v_isSharedCheck_5606_; 
v_a_5569_ = lean_ctor_get(v___x_5568_, 1);
lean_inc(v_a_5569_);
v_a_5570_ = lean_ctor_get(v___x_5568_, 0);
lean_inc(v_a_5570_);
lean_dec_ref_known(v___x_5568_, 2);
v_log_5571_ = lean_ctor_get(v_a_5569_, 0);
v_action_5572_ = lean_ctor_get_uint8(v_a_5569_, sizeof(void*)*3);
v_wantsRebuild_5573_ = lean_ctor_get_uint8(v_a_5569_, sizeof(void*)*3 + 1);
v_trace_5574_ = lean_ctor_get(v_a_5569_, 1);
v_buildTime_5575_ = lean_ctor_get(v_a_5569_, 2);
v_isSharedCheck_5606_ = !lean_is_exclusive(v_a_5569_);
if (v_isSharedCheck_5606_ == 0)
{
v___x_5577_ = v_a_5569_;
v_isShared_5578_ = v_isSharedCheck_5606_;
goto v_resetjp_5576_;
}
else
{
lean_inc(v_buildTime_5575_);
lean_inc(v_trace_5574_);
lean_inc(v_log_5571_);
lean_dec(v_a_5569_);
v___x_5577_ = lean_box(0);
v_isShared_5578_ = v_isSharedCheck_5606_;
goto v_resetjp_5576_;
}
v_resetjp_5576_:
{
lean_object* v___x_5579_; lean_object* v___x_5581_; 
v___x_5579_ = l_Lake_BuildTrace_mix(v_trace_5574_, v_a_5570_);
if (v_isShared_5578_ == 0)
{
lean_ctor_set(v___x_5577_, 1, v___x_5579_);
v___x_5581_ = v___x_5577_;
goto v_reusejp_5580_;
}
else
{
lean_object* v_reuseFailAlloc_5605_; 
v_reuseFailAlloc_5605_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5605_, 0, v_log_5571_);
lean_ctor_set(v_reuseFailAlloc_5605_, 1, v___x_5579_);
lean_ctor_set(v_reuseFailAlloc_5605_, 2, v_buildTime_5575_);
lean_ctor_set_uint8(v_reuseFailAlloc_5605_, sizeof(void*)*3, v_action_5572_);
lean_ctor_set_uint8(v_reuseFailAlloc_5605_, sizeof(void*)*3 + 1, v_wantsRebuild_5573_);
v___x_5581_ = v_reuseFailAlloc_5605_;
goto v_reusejp_5580_;
}
v_reusejp_5580_:
{
lean_object* v___x_5582_; lean_object* v___x_5583_; uint8_t v___x_5584_; lean_object* v___x_5585_; 
v___x_5582_ = lean_apply_1(v_build_5557_, v_depInfo_5560_);
v___x_5583_ = ((lean_object*)(l_Lake_buildFileAfterDep___redArg___lam__0___closed__0));
v___x_5584_ = 0;
v___x_5585_ = l_Lake_buildArtifactUnlessUpToDate(v_file_5558_, v___x_5582_, v_text_5559_, v___x_5583_, v___x_5584_, v___x_5584_, v___x_5584_, v___y_5561_, v___y_5562_, v___y_5563_, v___y_5564_, v___y_5565_, v___x_5581_);
if (lean_obj_tag(v___x_5585_) == 0)
{
lean_object* v_a_5586_; lean_object* v_a_5587_; lean_object* v___x_5589_; uint8_t v_isShared_5590_; uint8_t v_isSharedCheck_5595_; 
v_a_5586_ = lean_ctor_get(v___x_5585_, 0);
v_a_5587_ = lean_ctor_get(v___x_5585_, 1);
v_isSharedCheck_5595_ = !lean_is_exclusive(v___x_5585_);
if (v_isSharedCheck_5595_ == 0)
{
v___x_5589_ = v___x_5585_;
v_isShared_5590_ = v_isSharedCheck_5595_;
goto v_resetjp_5588_;
}
else
{
lean_inc(v_a_5587_);
lean_inc(v_a_5586_);
lean_dec(v___x_5585_);
v___x_5589_ = lean_box(0);
v_isShared_5590_ = v_isSharedCheck_5595_;
goto v_resetjp_5588_;
}
v_resetjp_5588_:
{
lean_object* v_path_5591_; lean_object* v___x_5593_; 
v_path_5591_ = lean_ctor_get(v_a_5586_, 1);
lean_inc_ref(v_path_5591_);
lean_dec(v_a_5586_);
if (v_isShared_5590_ == 0)
{
lean_ctor_set(v___x_5589_, 0, v_path_5591_);
v___x_5593_ = v___x_5589_;
goto v_reusejp_5592_;
}
else
{
lean_object* v_reuseFailAlloc_5594_; 
v_reuseFailAlloc_5594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5594_, 0, v_path_5591_);
lean_ctor_set(v_reuseFailAlloc_5594_, 1, v_a_5587_);
v___x_5593_ = v_reuseFailAlloc_5594_;
goto v_reusejp_5592_;
}
v_reusejp_5592_:
{
return v___x_5593_;
}
}
}
else
{
lean_object* v_a_5596_; lean_object* v_a_5597_; lean_object* v___x_5599_; uint8_t v_isShared_5600_; uint8_t v_isSharedCheck_5604_; 
v_a_5596_ = lean_ctor_get(v___x_5585_, 0);
v_a_5597_ = lean_ctor_get(v___x_5585_, 1);
v_isSharedCheck_5604_ = !lean_is_exclusive(v___x_5585_);
if (v_isSharedCheck_5604_ == 0)
{
v___x_5599_ = v___x_5585_;
v_isShared_5600_ = v_isSharedCheck_5604_;
goto v_resetjp_5598_;
}
else
{
lean_inc(v_a_5597_);
lean_inc(v_a_5596_);
lean_dec(v___x_5585_);
v___x_5599_ = lean_box(0);
v_isShared_5600_ = v_isSharedCheck_5604_;
goto v_resetjp_5598_;
}
v_resetjp_5598_:
{
lean_object* v___x_5602_; 
if (v_isShared_5600_ == 0)
{
v___x_5602_ = v___x_5599_;
goto v_reusejp_5601_;
}
else
{
lean_object* v_reuseFailAlloc_5603_; 
v_reuseFailAlloc_5603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5603_, 0, v_a_5596_);
lean_ctor_set(v_reuseFailAlloc_5603_, 1, v_a_5597_);
v___x_5602_ = v_reuseFailAlloc_5603_;
goto v_reusejp_5601_;
}
v_reusejp_5601_:
{
return v___x_5602_;
}
}
}
}
}
}
else
{
lean_object* v_a_5607_; lean_object* v_a_5608_; lean_object* v___x_5610_; uint8_t v_isShared_5611_; uint8_t v_isSharedCheck_5615_; 
lean_dec_ref(v___y_5561_);
lean_dec(v_depInfo_5560_);
lean_dec_ref(v_file_5558_);
lean_dec_ref(v_build_5557_);
v_a_5607_ = lean_ctor_get(v___x_5568_, 0);
v_a_5608_ = lean_ctor_get(v___x_5568_, 1);
v_isSharedCheck_5615_ = !lean_is_exclusive(v___x_5568_);
if (v_isSharedCheck_5615_ == 0)
{
v___x_5610_ = v___x_5568_;
v_isShared_5611_ = v_isSharedCheck_5615_;
goto v_resetjp_5609_;
}
else
{
lean_inc(v_a_5608_);
lean_inc(v_a_5607_);
lean_dec(v___x_5568_);
v___x_5610_ = lean_box(0);
v_isShared_5611_ = v_isSharedCheck_5615_;
goto v_resetjp_5609_;
}
v_resetjp_5609_:
{
lean_object* v___x_5613_; 
if (v_isShared_5611_ == 0)
{
v___x_5613_ = v___x_5610_;
goto v_reusejp_5612_;
}
else
{
lean_object* v_reuseFailAlloc_5614_; 
v_reuseFailAlloc_5614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5614_, 0, v_a_5607_);
lean_ctor_set(v_reuseFailAlloc_5614_, 1, v_a_5608_);
v___x_5613_ = v_reuseFailAlloc_5614_;
goto v_reusejp_5612_;
}
v_reusejp_5612_:
{
return v___x_5613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___lam__0___boxed(lean_object* v_extraDepTrace_5616_, lean_object* v_build_5617_, lean_object* v_file_5618_, lean_object* v_text_5619_, lean_object* v_depInfo_5620_, lean_object* v___y_5621_, lean_object* v___y_5622_, lean_object* v___y_5623_, lean_object* v___y_5624_, lean_object* v___y_5625_, lean_object* v___y_5626_, lean_object* v___y_5627_){
_start:
{
uint8_t v_text_boxed_5628_; lean_object* v_res_5629_; 
v_text_boxed_5628_ = lean_unbox(v_text_5619_);
v_res_5629_ = l_Lake_buildFileAfterDep___redArg___lam__0(v_extraDepTrace_5616_, v_build_5617_, v_file_5618_, v_text_boxed_5628_, v_depInfo_5620_, v___y_5621_, v___y_5622_, v___y_5623_, v___y_5624_, v___y_5625_, v___y_5626_);
lean_dec_ref(v___y_5625_);
lean_dec(v___y_5624_);
lean_dec(v___y_5623_);
lean_dec(v___y_5622_);
return v_res_5629_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg(lean_object* v_file_5630_, lean_object* v_dep_5631_, lean_object* v_build_5632_, lean_object* v_extraDepTrace_5633_, uint8_t v_text_5634_, lean_object* v___y_5635_, lean_object* v___y_5636_, lean_object* v___y_5637_, lean_object* v___y_5638_, lean_object* v___y_5639_, lean_object* v___y_5640_){
_start:
{
lean_object* v___x_5642_; lean_object* v___f_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; uint8_t v___x_5646_; lean_object* v___x_5647_; 
v___x_5642_ = lean_box(v_text_5634_);
v___f_5643_ = lean_alloc_closure((void*)(l_Lake_buildFileAfterDep___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_5643_, 0, v_extraDepTrace_5633_);
lean_closure_set(v___f_5643_, 1, v_build_5632_);
lean_closure_set(v___f_5643_, 2, v_file_5630_);
lean_closure_set(v___f_5643_, 3, v___x_5642_);
v___x_5644_ = l_Lake_instDataKindFilePath;
v___x_5645_ = lean_unsigned_to_nat(0u);
v___x_5646_ = 0;
v___x_5647_ = l_Lake_Job_mapM___redArg(v___x_5644_, v_dep_5631_, v___f_5643_, v___x_5645_, v___x_5646_, v___y_5635_, v___y_5636_, v___y_5637_, v___y_5638_, v___y_5639_, v___y_5640_);
return v___x_5647_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___redArg___boxed(lean_object* v_file_5648_, lean_object* v_dep_5649_, lean_object* v_build_5650_, lean_object* v_extraDepTrace_5651_, lean_object* v_text_5652_, lean_object* v___y_5653_, lean_object* v___y_5654_, lean_object* v___y_5655_, lean_object* v___y_5656_, lean_object* v___y_5657_, lean_object* v___y_5658_, lean_object* v___y_5659_){
_start:
{
uint8_t v_text_boxed_5660_; lean_object* v_res_5661_; 
v_text_boxed_5660_ = lean_unbox(v_text_5652_);
v_res_5661_ = l_Lake_buildFileAfterDep___redArg(v_file_5648_, v_dep_5649_, v_build_5650_, v_extraDepTrace_5651_, v_text_boxed_5660_, v___y_5653_, v___y_5654_, v___y_5655_, v___y_5656_, v___y_5657_, v___y_5658_);
lean_dec_ref(v___y_5658_);
lean_dec_ref(v___y_5657_);
lean_dec(v___y_5656_);
lean_dec(v___y_5655_);
lean_dec(v___y_5654_);
return v_res_5661_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep(lean_object* v_00_u03b1_5662_, lean_object* v_file_5663_, lean_object* v_dep_5664_, lean_object* v_build_5665_, lean_object* v_extraDepTrace_5666_, uint8_t v_text_5667_, lean_object* v___y_5668_, lean_object* v___y_5669_, lean_object* v___y_5670_, lean_object* v___y_5671_, lean_object* v___y_5672_, lean_object* v___y_5673_){
_start:
{
lean_object* v___x_5675_; lean_object* v___f_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; uint8_t v___x_5679_; lean_object* v___x_5680_; 
v___x_5675_ = lean_box(v_text_5667_);
v___f_5676_ = lean_alloc_closure((void*)(l_Lake_buildFileAfterDep___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_5676_, 0, v_extraDepTrace_5666_);
lean_closure_set(v___f_5676_, 1, v_build_5665_);
lean_closure_set(v___f_5676_, 2, v_file_5663_);
lean_closure_set(v___f_5676_, 3, v___x_5675_);
v___x_5677_ = l_Lake_instDataKindFilePath;
v___x_5678_ = lean_unsigned_to_nat(0u);
v___x_5679_ = 0;
v___x_5680_ = l_Lake_Job_mapM___redArg(v___x_5677_, v_dep_5664_, v___f_5676_, v___x_5678_, v___x_5679_, v___y_5668_, v___y_5669_, v___y_5670_, v___y_5671_, v___y_5672_, v___y_5673_);
return v___x_5680_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildFileAfterDep___boxed(lean_object* v_00_u03b1_5681_, lean_object* v_file_5682_, lean_object* v_dep_5683_, lean_object* v_build_5684_, lean_object* v_extraDepTrace_5685_, lean_object* v_text_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_, lean_object* v___y_5691_, lean_object* v___y_5692_, lean_object* v___y_5693_){
_start:
{
uint8_t v_text_boxed_5694_; lean_object* v_res_5695_; 
v_text_boxed_5694_ = lean_unbox(v_text_5686_);
v_res_5695_ = l_Lake_buildFileAfterDep(v_00_u03b1_5681_, v_file_5682_, v_dep_5683_, v_build_5684_, v_extraDepTrace_5685_, v_text_boxed_5694_, v___y_5687_, v___y_5688_, v___y_5689_, v___y_5690_, v___y_5691_, v___y_5692_);
lean_dec_ref(v___y_5692_);
lean_dec_ref(v___y_5691_);
lean_dec(v___y_5690_);
lean_dec(v___y_5689_);
lean_dec(v___y_5688_);
return v_res_5695_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(lean_object* v_info_5696_){
_start:
{
lean_object* v___x_5698_; 
v___x_5698_ = l_Lake_computeBinFileHash(v_info_5696_);
if (lean_obj_tag(v___x_5698_) == 0)
{
lean_object* v_a_5699_; lean_object* v___x_5700_; 
v_a_5699_ = lean_ctor_get(v___x_5698_, 0);
lean_inc(v_a_5699_);
lean_dec_ref_known(v___x_5698_, 1);
v___x_5700_ = lean_io_metadata(v_info_5696_);
if (lean_obj_tag(v___x_5700_) == 0)
{
lean_object* v_a_5701_; lean_object* v___x_5703_; uint8_t v_isShared_5704_; uint8_t v_isSharedCheck_5712_; 
v_a_5701_ = lean_ctor_get(v___x_5700_, 0);
v_isSharedCheck_5712_ = !lean_is_exclusive(v___x_5700_);
if (v_isSharedCheck_5712_ == 0)
{
v___x_5703_ = v___x_5700_;
v_isShared_5704_ = v_isSharedCheck_5712_;
goto v_resetjp_5702_;
}
else
{
lean_inc(v_a_5701_);
lean_dec(v___x_5700_);
v___x_5703_ = lean_box(0);
v_isShared_5704_ = v_isSharedCheck_5712_;
goto v_resetjp_5702_;
}
v_resetjp_5702_:
{
lean_object* v_modified_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; uint64_t v___x_5708_; lean_object* v___x_5710_; 
v_modified_5705_ = lean_ctor_get(v_a_5701_, 1);
lean_inc_ref(v_modified_5705_);
lean_dec(v_a_5701_);
v___x_5706_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_5707_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5707_, 0, v_info_5696_);
lean_ctor_set(v___x_5707_, 1, v___x_5706_);
lean_ctor_set(v___x_5707_, 2, v_modified_5705_);
v___x_5708_ = lean_unbox_uint64(v_a_5699_);
lean_dec(v_a_5699_);
lean_ctor_set_uint64(v___x_5707_, sizeof(void*)*3, v___x_5708_);
if (v_isShared_5704_ == 0)
{
lean_ctor_set(v___x_5703_, 0, v___x_5707_);
v___x_5710_ = v___x_5703_;
goto v_reusejp_5709_;
}
else
{
lean_object* v_reuseFailAlloc_5711_; 
v_reuseFailAlloc_5711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5711_, 0, v___x_5707_);
v___x_5710_ = v_reuseFailAlloc_5711_;
goto v_reusejp_5709_;
}
v_reusejp_5709_:
{
return v___x_5710_;
}
}
}
else
{
lean_object* v_a_5713_; lean_object* v___x_5715_; uint8_t v_isShared_5716_; uint8_t v_isSharedCheck_5720_; 
lean_dec(v_a_5699_);
lean_dec_ref(v_info_5696_);
v_a_5713_ = lean_ctor_get(v___x_5700_, 0);
v_isSharedCheck_5720_ = !lean_is_exclusive(v___x_5700_);
if (v_isSharedCheck_5720_ == 0)
{
v___x_5715_ = v___x_5700_;
v_isShared_5716_ = v_isSharedCheck_5720_;
goto v_resetjp_5714_;
}
else
{
lean_inc(v_a_5713_);
lean_dec(v___x_5700_);
v___x_5715_ = lean_box(0);
v_isShared_5716_ = v_isSharedCheck_5720_;
goto v_resetjp_5714_;
}
v_resetjp_5714_:
{
lean_object* v___x_5718_; 
if (v_isShared_5716_ == 0)
{
v___x_5718_ = v___x_5715_;
goto v_reusejp_5717_;
}
else
{
lean_object* v_reuseFailAlloc_5719_; 
v_reuseFailAlloc_5719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5719_, 0, v_a_5713_);
v___x_5718_ = v_reuseFailAlloc_5719_;
goto v_reusejp_5717_;
}
v_reusejp_5717_:
{
return v___x_5718_;
}
}
}
}
else
{
lean_object* v_a_5721_; lean_object* v___x_5723_; uint8_t v_isShared_5724_; uint8_t v_isSharedCheck_5728_; 
lean_dec_ref(v_info_5696_);
v_a_5721_ = lean_ctor_get(v___x_5698_, 0);
v_isSharedCheck_5728_ = !lean_is_exclusive(v___x_5698_);
if (v_isSharedCheck_5728_ == 0)
{
v___x_5723_ = v___x_5698_;
v_isShared_5724_ = v_isSharedCheck_5728_;
goto v_resetjp_5722_;
}
else
{
lean_inc(v_a_5721_);
lean_dec(v___x_5698_);
v___x_5723_ = lean_box(0);
v_isShared_5724_ = v_isSharedCheck_5728_;
goto v_resetjp_5722_;
}
v_resetjp_5722_:
{
lean_object* v___x_5726_; 
if (v_isShared_5724_ == 0)
{
v___x_5726_ = v___x_5723_;
goto v_reusejp_5725_;
}
else
{
lean_object* v_reuseFailAlloc_5727_; 
v_reuseFailAlloc_5727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5727_, 0, v_a_5721_);
v___x_5726_ = v_reuseFailAlloc_5727_;
goto v_reusejp_5725_;
}
v_reusejp_5725_:
{
return v___x_5726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0___boxed(lean_object* v_info_5729_, lean_object* v___y_5730_){
_start:
{
lean_object* v_res_5731_; 
v_res_5731_ = l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(v_info_5729_);
return v_res_5731_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0(lean_object* v_path_5732_, lean_object* v___y_5733_, lean_object* v___y_5734_, lean_object* v___y_5735_, lean_object* v___y_5736_, lean_object* v___y_5737_, lean_object* v___y_5738_){
_start:
{
lean_object* v_log_5740_; uint8_t v_action_5741_; uint8_t v_wantsRebuild_5742_; lean_object* v_trace_5743_; lean_object* v_buildTime_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5764_; 
v_log_5740_ = lean_ctor_get(v___y_5738_, 0);
v_action_5741_ = lean_ctor_get_uint8(v___y_5738_, sizeof(void*)*3);
v_wantsRebuild_5742_ = lean_ctor_get_uint8(v___y_5738_, sizeof(void*)*3 + 1);
v_trace_5743_ = lean_ctor_get(v___y_5738_, 1);
v_buildTime_5744_ = lean_ctor_get(v___y_5738_, 2);
v_isSharedCheck_5764_ = !lean_is_exclusive(v___y_5738_);
if (v_isSharedCheck_5764_ == 0)
{
v___x_5746_ = v___y_5738_;
v_isShared_5747_ = v_isSharedCheck_5764_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_buildTime_5744_);
lean_inc(v_trace_5743_);
lean_inc(v_log_5740_);
lean_dec(v___y_5738_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5764_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
lean_object* v___x_5748_; 
lean_inc_ref(v_path_5732_);
v___x_5748_ = l_Lake_BuildTrace_compute___at___00Lake_inputBinFile_spec__0(v_path_5732_);
if (lean_obj_tag(v___x_5748_) == 0)
{
lean_object* v_a_5749_; lean_object* v___x_5751_; 
lean_dec_ref(v_trace_5743_);
v_a_5749_ = lean_ctor_get(v___x_5748_, 0);
lean_inc(v_a_5749_);
lean_dec_ref_known(v___x_5748_, 1);
if (v_isShared_5747_ == 0)
{
lean_ctor_set(v___x_5746_, 1, v_a_5749_);
v___x_5751_ = v___x_5746_;
goto v_reusejp_5750_;
}
else
{
lean_object* v_reuseFailAlloc_5753_; 
v_reuseFailAlloc_5753_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5753_, 0, v_log_5740_);
lean_ctor_set(v_reuseFailAlloc_5753_, 1, v_a_5749_);
lean_ctor_set(v_reuseFailAlloc_5753_, 2, v_buildTime_5744_);
lean_ctor_set_uint8(v_reuseFailAlloc_5753_, sizeof(void*)*3, v_action_5741_);
lean_ctor_set_uint8(v_reuseFailAlloc_5753_, sizeof(void*)*3 + 1, v_wantsRebuild_5742_);
v___x_5751_ = v_reuseFailAlloc_5753_;
goto v_reusejp_5750_;
}
v_reusejp_5750_:
{
lean_object* v___x_5752_; 
v___x_5752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5752_, 0, v_path_5732_);
lean_ctor_set(v___x_5752_, 1, v___x_5751_);
return v___x_5752_;
}
}
else
{
lean_object* v_a_5754_; lean_object* v___x_5755_; uint8_t v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5761_; 
lean_dec_ref(v_path_5732_);
v_a_5754_ = lean_ctor_get(v___x_5748_, 0);
lean_inc(v_a_5754_);
lean_dec_ref_known(v___x_5748_, 1);
v___x_5755_ = lean_io_error_to_string(v_a_5754_);
v___x_5756_ = 3;
v___x_5757_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5757_, 0, v___x_5755_);
lean_ctor_set_uint8(v___x_5757_, sizeof(void*)*1, v___x_5756_);
v___x_5758_ = lean_array_get_size(v_log_5740_);
v___x_5759_ = lean_array_push(v_log_5740_, v___x_5757_);
if (v_isShared_5747_ == 0)
{
lean_ctor_set(v___x_5746_, 0, v___x_5759_);
v___x_5761_ = v___x_5746_;
goto v_reusejp_5760_;
}
else
{
lean_object* v_reuseFailAlloc_5763_; 
v_reuseFailAlloc_5763_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5763_, 0, v___x_5759_);
lean_ctor_set(v_reuseFailAlloc_5763_, 1, v_trace_5743_);
lean_ctor_set(v_reuseFailAlloc_5763_, 2, v_buildTime_5744_);
lean_ctor_set_uint8(v_reuseFailAlloc_5763_, sizeof(void*)*3, v_action_5741_);
lean_ctor_set_uint8(v_reuseFailAlloc_5763_, sizeof(void*)*3 + 1, v_wantsRebuild_5742_);
v___x_5761_ = v_reuseFailAlloc_5763_;
goto v_reusejp_5760_;
}
v_reusejp_5760_:
{
lean_object* v___x_5762_; 
v___x_5762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5762_, 0, v___x_5758_);
lean_ctor_set(v___x_5762_, 1, v___x_5761_);
return v___x_5762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___lam__0___boxed(lean_object* v_path_5765_, lean_object* v___y_5766_, lean_object* v___y_5767_, lean_object* v___y_5768_, lean_object* v___y_5769_, lean_object* v___y_5770_, lean_object* v___y_5771_, lean_object* v___y_5772_){
_start:
{
lean_object* v_res_5773_; 
v_res_5773_ = l_Lake_inputBinFile___redArg___lam__0(v_path_5765_, v___y_5766_, v___y_5767_, v___y_5768_, v___y_5769_, v___y_5770_, v___y_5771_);
lean_dec_ref(v___y_5770_);
lean_dec(v___y_5769_);
lean_dec(v___y_5768_);
lean_dec(v___y_5767_);
lean_dec_ref(v___y_5766_);
return v_res_5773_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg(lean_object* v_path_5775_, lean_object* v___y_5776_, lean_object* v___y_5777_, lean_object* v___y_5778_, lean_object* v___y_5779_, lean_object* v___y_5780_){
_start:
{
lean_object* v___f_5782_; lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; 
v___f_5782_ = lean_alloc_closure((void*)(l_Lake_inputBinFile___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5782_, 0, v_path_5775_);
v___x_5783_ = l_Lake_instDataKindFilePath;
v___x_5784_ = lean_unsigned_to_nat(0u);
v___x_5785_ = ((lean_object*)(l_Lake_inputBinFile___redArg___closed__0));
v___x_5786_ = l_Lake_Job_async___redArg(v___x_5783_, v___f_5782_, v___x_5784_, v___x_5785_, v___y_5776_, v___y_5777_, v___y_5778_, v___y_5779_, v___y_5780_);
return v___x_5786_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___redArg___boxed(lean_object* v_path_5787_, lean_object* v___y_5788_, lean_object* v___y_5789_, lean_object* v___y_5790_, lean_object* v___y_5791_, lean_object* v___y_5792_, lean_object* v___y_5793_){
_start:
{
lean_object* v_res_5794_; 
v_res_5794_ = l_Lake_inputBinFile___redArg(v_path_5787_, v___y_5788_, v___y_5789_, v___y_5790_, v___y_5791_, v___y_5792_);
lean_dec_ref(v___y_5792_);
lean_dec(v___y_5791_);
lean_dec(v___y_5790_);
lean_dec(v___y_5789_);
return v_res_5794_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile(lean_object* v_path_5795_, lean_object* v___y_5796_, lean_object* v___y_5797_, lean_object* v___y_5798_, lean_object* v___y_5799_, lean_object* v___y_5800_, lean_object* v___y_5801_){
_start:
{
lean_object* v___x_5803_; 
v___x_5803_ = l_Lake_inputBinFile___redArg(v_path_5795_, v___y_5796_, v___y_5797_, v___y_5798_, v___y_5799_, v___y_5800_);
return v___x_5803_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputBinFile___boxed(lean_object* v_path_5804_, lean_object* v___y_5805_, lean_object* v___y_5806_, lean_object* v___y_5807_, lean_object* v___y_5808_, lean_object* v___y_5809_, lean_object* v___y_5810_, lean_object* v___y_5811_){
_start:
{
lean_object* v_res_5812_; 
v_res_5812_ = l_Lake_inputBinFile(v_path_5804_, v___y_5805_, v___y_5806_, v___y_5807_, v___y_5808_, v___y_5809_, v___y_5810_);
lean_dec_ref(v___y_5810_);
lean_dec_ref(v___y_5809_);
lean_dec(v___y_5808_);
lean_dec(v___y_5807_);
lean_dec(v___y_5806_);
return v_res_5812_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(lean_object* v_info_5813_){
_start:
{
lean_object* v___x_5815_; 
v___x_5815_ = l_Lake_computeTextFileHash(v_info_5813_);
if (lean_obj_tag(v___x_5815_) == 0)
{
lean_object* v_a_5816_; lean_object* v___x_5817_; 
v_a_5816_ = lean_ctor_get(v___x_5815_, 0);
lean_inc(v_a_5816_);
lean_dec_ref_known(v___x_5815_, 1);
v___x_5817_ = lean_io_metadata(v_info_5813_);
if (lean_obj_tag(v___x_5817_) == 0)
{
lean_object* v_a_5818_; lean_object* v___x_5820_; uint8_t v_isShared_5821_; uint8_t v_isSharedCheck_5829_; 
v_a_5818_ = lean_ctor_get(v___x_5817_, 0);
v_isSharedCheck_5829_ = !lean_is_exclusive(v___x_5817_);
if (v_isSharedCheck_5829_ == 0)
{
v___x_5820_ = v___x_5817_;
v_isShared_5821_ = v_isSharedCheck_5829_;
goto v_resetjp_5819_;
}
else
{
lean_inc(v_a_5818_);
lean_dec(v___x_5817_);
v___x_5820_ = lean_box(0);
v_isShared_5821_ = v_isSharedCheck_5829_;
goto v_resetjp_5819_;
}
v_resetjp_5819_:
{
lean_object* v_modified_5822_; lean_object* v___x_5823_; lean_object* v___x_5824_; uint64_t v___x_5825_; lean_object* v___x_5827_; 
v_modified_5822_ = lean_ctor_get(v_a_5818_, 1);
lean_inc_ref(v_modified_5822_);
lean_dec(v_a_5818_);
v___x_5823_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_5824_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_5824_, 0, v_info_5813_);
lean_ctor_set(v___x_5824_, 1, v___x_5823_);
lean_ctor_set(v___x_5824_, 2, v_modified_5822_);
v___x_5825_ = lean_unbox_uint64(v_a_5816_);
lean_dec(v_a_5816_);
lean_ctor_set_uint64(v___x_5824_, sizeof(void*)*3, v___x_5825_);
if (v_isShared_5821_ == 0)
{
lean_ctor_set(v___x_5820_, 0, v___x_5824_);
v___x_5827_ = v___x_5820_;
goto v_reusejp_5826_;
}
else
{
lean_object* v_reuseFailAlloc_5828_; 
v_reuseFailAlloc_5828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5828_, 0, v___x_5824_);
v___x_5827_ = v_reuseFailAlloc_5828_;
goto v_reusejp_5826_;
}
v_reusejp_5826_:
{
return v___x_5827_;
}
}
}
else
{
lean_object* v_a_5830_; lean_object* v___x_5832_; uint8_t v_isShared_5833_; uint8_t v_isSharedCheck_5837_; 
lean_dec(v_a_5816_);
lean_dec_ref(v_info_5813_);
v_a_5830_ = lean_ctor_get(v___x_5817_, 0);
v_isSharedCheck_5837_ = !lean_is_exclusive(v___x_5817_);
if (v_isSharedCheck_5837_ == 0)
{
v___x_5832_ = v___x_5817_;
v_isShared_5833_ = v_isSharedCheck_5837_;
goto v_resetjp_5831_;
}
else
{
lean_inc(v_a_5830_);
lean_dec(v___x_5817_);
v___x_5832_ = lean_box(0);
v_isShared_5833_ = v_isSharedCheck_5837_;
goto v_resetjp_5831_;
}
v_resetjp_5831_:
{
lean_object* v___x_5835_; 
if (v_isShared_5833_ == 0)
{
v___x_5835_ = v___x_5832_;
goto v_reusejp_5834_;
}
else
{
lean_object* v_reuseFailAlloc_5836_; 
v_reuseFailAlloc_5836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5836_, 0, v_a_5830_);
v___x_5835_ = v_reuseFailAlloc_5836_;
goto v_reusejp_5834_;
}
v_reusejp_5834_:
{
return v___x_5835_;
}
}
}
}
else
{
lean_object* v_a_5838_; lean_object* v___x_5840_; uint8_t v_isShared_5841_; uint8_t v_isSharedCheck_5845_; 
lean_dec_ref(v_info_5813_);
v_a_5838_ = lean_ctor_get(v___x_5815_, 0);
v_isSharedCheck_5845_ = !lean_is_exclusive(v___x_5815_);
if (v_isSharedCheck_5845_ == 0)
{
v___x_5840_ = v___x_5815_;
v_isShared_5841_ = v_isSharedCheck_5845_;
goto v_resetjp_5839_;
}
else
{
lean_inc(v_a_5838_);
lean_dec(v___x_5815_);
v___x_5840_ = lean_box(0);
v_isShared_5841_ = v_isSharedCheck_5845_;
goto v_resetjp_5839_;
}
v_resetjp_5839_:
{
lean_object* v___x_5843_; 
if (v_isShared_5841_ == 0)
{
v___x_5843_ = v___x_5840_;
goto v_reusejp_5842_;
}
else
{
lean_object* v_reuseFailAlloc_5844_; 
v_reuseFailAlloc_5844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5844_, 0, v_a_5838_);
v___x_5843_ = v_reuseFailAlloc_5844_;
goto v_reusejp_5842_;
}
v_reusejp_5842_:
{
return v___x_5843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0___boxed(lean_object* v_info_5846_, lean_object* v___y_5847_){
_start:
{
lean_object* v_res_5848_; 
v_res_5848_ = l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(v_info_5846_);
return v_res_5848_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0(lean_object* v_path_5849_, lean_object* v___y_5850_, lean_object* v___y_5851_, lean_object* v___y_5852_, lean_object* v___y_5853_, lean_object* v___y_5854_, lean_object* v___y_5855_){
_start:
{
lean_object* v_log_5857_; uint8_t v_action_5858_; uint8_t v_wantsRebuild_5859_; lean_object* v_trace_5860_; lean_object* v_buildTime_5861_; lean_object* v___x_5863_; uint8_t v_isShared_5864_; uint8_t v_isSharedCheck_5881_; 
v_log_5857_ = lean_ctor_get(v___y_5855_, 0);
v_action_5858_ = lean_ctor_get_uint8(v___y_5855_, sizeof(void*)*3);
v_wantsRebuild_5859_ = lean_ctor_get_uint8(v___y_5855_, sizeof(void*)*3 + 1);
v_trace_5860_ = lean_ctor_get(v___y_5855_, 1);
v_buildTime_5861_ = lean_ctor_get(v___y_5855_, 2);
v_isSharedCheck_5881_ = !lean_is_exclusive(v___y_5855_);
if (v_isSharedCheck_5881_ == 0)
{
v___x_5863_ = v___y_5855_;
v_isShared_5864_ = v_isSharedCheck_5881_;
goto v_resetjp_5862_;
}
else
{
lean_inc(v_buildTime_5861_);
lean_inc(v_trace_5860_);
lean_inc(v_log_5857_);
lean_dec(v___y_5855_);
v___x_5863_ = lean_box(0);
v_isShared_5864_ = v_isSharedCheck_5881_;
goto v_resetjp_5862_;
}
v_resetjp_5862_:
{
lean_object* v___x_5865_; 
lean_inc_ref(v_path_5849_);
v___x_5865_ = l_Lake_BuildTrace_compute___at___00Lake_inputTextFile_spec__0(v_path_5849_);
if (lean_obj_tag(v___x_5865_) == 0)
{
lean_object* v_a_5866_; lean_object* v___x_5868_; 
lean_dec_ref(v_trace_5860_);
v_a_5866_ = lean_ctor_get(v___x_5865_, 0);
lean_inc(v_a_5866_);
lean_dec_ref_known(v___x_5865_, 1);
if (v_isShared_5864_ == 0)
{
lean_ctor_set(v___x_5863_, 1, v_a_5866_);
v___x_5868_ = v___x_5863_;
goto v_reusejp_5867_;
}
else
{
lean_object* v_reuseFailAlloc_5870_; 
v_reuseFailAlloc_5870_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5870_, 0, v_log_5857_);
lean_ctor_set(v_reuseFailAlloc_5870_, 1, v_a_5866_);
lean_ctor_set(v_reuseFailAlloc_5870_, 2, v_buildTime_5861_);
lean_ctor_set_uint8(v_reuseFailAlloc_5870_, sizeof(void*)*3, v_action_5858_);
lean_ctor_set_uint8(v_reuseFailAlloc_5870_, sizeof(void*)*3 + 1, v_wantsRebuild_5859_);
v___x_5868_ = v_reuseFailAlloc_5870_;
goto v_reusejp_5867_;
}
v_reusejp_5867_:
{
lean_object* v___x_5869_; 
v___x_5869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5869_, 0, v_path_5849_);
lean_ctor_set(v___x_5869_, 1, v___x_5868_);
return v___x_5869_;
}
}
else
{
lean_object* v_a_5871_; lean_object* v___x_5872_; uint8_t v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5878_; 
lean_dec_ref(v_path_5849_);
v_a_5871_ = lean_ctor_get(v___x_5865_, 0);
lean_inc(v_a_5871_);
lean_dec_ref_known(v___x_5865_, 1);
v___x_5872_ = lean_io_error_to_string(v_a_5871_);
v___x_5873_ = 3;
v___x_5874_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5874_, 0, v___x_5872_);
lean_ctor_set_uint8(v___x_5874_, sizeof(void*)*1, v___x_5873_);
v___x_5875_ = lean_array_get_size(v_log_5857_);
v___x_5876_ = lean_array_push(v_log_5857_, v___x_5874_);
if (v_isShared_5864_ == 0)
{
lean_ctor_set(v___x_5863_, 0, v___x_5876_);
v___x_5878_ = v___x_5863_;
goto v_reusejp_5877_;
}
else
{
lean_object* v_reuseFailAlloc_5880_; 
v_reuseFailAlloc_5880_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_5880_, 0, v___x_5876_);
lean_ctor_set(v_reuseFailAlloc_5880_, 1, v_trace_5860_);
lean_ctor_set(v_reuseFailAlloc_5880_, 2, v_buildTime_5861_);
lean_ctor_set_uint8(v_reuseFailAlloc_5880_, sizeof(void*)*3, v_action_5858_);
lean_ctor_set_uint8(v_reuseFailAlloc_5880_, sizeof(void*)*3 + 1, v_wantsRebuild_5859_);
v___x_5878_ = v_reuseFailAlloc_5880_;
goto v_reusejp_5877_;
}
v_reusejp_5877_:
{
lean_object* v___x_5879_; 
v___x_5879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5879_, 0, v___x_5875_);
lean_ctor_set(v___x_5879_, 1, v___x_5878_);
return v___x_5879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___lam__0___boxed(lean_object* v_path_5882_, lean_object* v___y_5883_, lean_object* v___y_5884_, lean_object* v___y_5885_, lean_object* v___y_5886_, lean_object* v___y_5887_, lean_object* v___y_5888_, lean_object* v___y_5889_){
_start:
{
lean_object* v_res_5890_; 
v_res_5890_ = l_Lake_inputTextFile___redArg___lam__0(v_path_5882_, v___y_5883_, v___y_5884_, v___y_5885_, v___y_5886_, v___y_5887_, v___y_5888_);
lean_dec_ref(v___y_5887_);
lean_dec(v___y_5886_);
lean_dec(v___y_5885_);
lean_dec(v___y_5884_);
lean_dec_ref(v___y_5883_);
return v_res_5890_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg(lean_object* v_path_5891_, lean_object* v___y_5892_, lean_object* v___y_5893_, lean_object* v___y_5894_, lean_object* v___y_5895_, lean_object* v___y_5896_){
_start:
{
lean_object* v___f_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; 
v___f_5898_ = lean_alloc_closure((void*)(l_Lake_inputTextFile___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_5898_, 0, v_path_5891_);
v___x_5899_ = l_Lake_instDataKindFilePath;
v___x_5900_ = lean_unsigned_to_nat(0u);
v___x_5901_ = ((lean_object*)(l_Lake_inputBinFile___redArg___closed__0));
v___x_5902_ = l_Lake_Job_async___redArg(v___x_5899_, v___f_5898_, v___x_5900_, v___x_5901_, v___y_5892_, v___y_5893_, v___y_5894_, v___y_5895_, v___y_5896_);
return v___x_5902_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___redArg___boxed(lean_object* v_path_5903_, lean_object* v___y_5904_, lean_object* v___y_5905_, lean_object* v___y_5906_, lean_object* v___y_5907_, lean_object* v___y_5908_, lean_object* v___y_5909_){
_start:
{
lean_object* v_res_5910_; 
v_res_5910_ = l_Lake_inputTextFile___redArg(v_path_5903_, v___y_5904_, v___y_5905_, v___y_5906_, v___y_5907_, v___y_5908_);
lean_dec_ref(v___y_5908_);
lean_dec(v___y_5907_);
lean_dec(v___y_5906_);
lean_dec(v___y_5905_);
return v_res_5910_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile(lean_object* v_path_5911_, lean_object* v___y_5912_, lean_object* v___y_5913_, lean_object* v___y_5914_, lean_object* v___y_5915_, lean_object* v___y_5916_, lean_object* v___y_5917_){
_start:
{
lean_object* v___x_5919_; 
v___x_5919_ = l_Lake_inputTextFile___redArg(v_path_5911_, v___y_5912_, v___y_5913_, v___y_5914_, v___y_5915_, v___y_5916_);
return v___x_5919_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputTextFile___boxed(lean_object* v_path_5920_, lean_object* v___y_5921_, lean_object* v___y_5922_, lean_object* v___y_5923_, lean_object* v___y_5924_, lean_object* v___y_5925_, lean_object* v___y_5926_, lean_object* v___y_5927_){
_start:
{
lean_object* v_res_5928_; 
v_res_5928_ = l_Lake_inputTextFile(v_path_5920_, v___y_5921_, v___y_5922_, v___y_5923_, v___y_5924_, v___y_5925_, v___y_5926_);
lean_dec_ref(v___y_5926_);
lean_dec_ref(v___y_5925_);
lean_dec(v___y_5924_);
lean_dec(v___y_5923_);
lean_dec(v___y_5922_);
return v_res_5928_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg(lean_object* v_path_5929_, uint8_t v_text_5930_, lean_object* v___y_5931_, lean_object* v___y_5932_, lean_object* v___y_5933_, lean_object* v___y_5934_, lean_object* v___y_5935_){
_start:
{
if (v_text_5930_ == 0)
{
lean_object* v___x_5937_; 
v___x_5937_ = l_Lake_inputBinFile___redArg(v_path_5929_, v___y_5931_, v___y_5932_, v___y_5933_, v___y_5934_, v___y_5935_);
return v___x_5937_;
}
else
{
lean_object* v___x_5938_; 
v___x_5938_ = l_Lake_inputTextFile___redArg(v_path_5929_, v___y_5931_, v___y_5932_, v___y_5933_, v___y_5934_, v___y_5935_);
return v___x_5938_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___redArg___boxed(lean_object* v_path_5939_, lean_object* v_text_5940_, lean_object* v___y_5941_, lean_object* v___y_5942_, lean_object* v___y_5943_, lean_object* v___y_5944_, lean_object* v___y_5945_, lean_object* v___y_5946_){
_start:
{
uint8_t v_text_boxed_5947_; lean_object* v_res_5948_; 
v_text_boxed_5947_ = lean_unbox(v_text_5940_);
v_res_5948_ = l_Lake_inputFile___redArg(v_path_5939_, v_text_boxed_5947_, v___y_5941_, v___y_5942_, v___y_5943_, v___y_5944_, v___y_5945_);
lean_dec_ref(v___y_5945_);
lean_dec(v___y_5944_);
lean_dec(v___y_5943_);
lean_dec(v___y_5942_);
return v_res_5948_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile(lean_object* v_path_5949_, uint8_t v_text_5950_, lean_object* v___y_5951_, lean_object* v___y_5952_, lean_object* v___y_5953_, lean_object* v___y_5954_, lean_object* v___y_5955_, lean_object* v___y_5956_){
_start:
{
if (v_text_5950_ == 0)
{
lean_object* v___x_5958_; 
v___x_5958_ = l_Lake_inputBinFile___redArg(v_path_5949_, v___y_5951_, v___y_5952_, v___y_5953_, v___y_5954_, v___y_5955_);
return v___x_5958_;
}
else
{
lean_object* v___x_5959_; 
v___x_5959_ = l_Lake_inputTextFile___redArg(v_path_5949_, v___y_5951_, v___y_5952_, v___y_5953_, v___y_5954_, v___y_5955_);
return v___x_5959_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputFile___boxed(lean_object* v_path_5960_, lean_object* v_text_5961_, lean_object* v___y_5962_, lean_object* v___y_5963_, lean_object* v___y_5964_, lean_object* v___y_5965_, lean_object* v___y_5966_, lean_object* v___y_5967_, lean_object* v___y_5968_){
_start:
{
uint8_t v_text_boxed_5969_; lean_object* v_res_5970_; 
v_text_boxed_5969_ = lean_unbox(v_text_5961_);
v_res_5970_ = l_Lake_inputFile(v_path_5960_, v_text_boxed_5969_, v___y_5962_, v___y_5963_, v___y_5964_, v___y_5965_, v___y_5966_, v___y_5967_);
lean_dec_ref(v___y_5967_);
lean_dec_ref(v___y_5966_);
lean_dec(v___y_5965_);
lean_dec(v___y_5964_);
lean_dec(v___y_5963_);
return v_res_5970_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0(lean_object* v_x_5971_){
_start:
{
uint8_t v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; 
v___x_5973_ = 1;
v___x_5974_ = lean_box(v___x_5973_);
v___x_5975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5975_, 0, v___x_5974_);
return v___x_5975_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__0___boxed(lean_object* v_x_5976_, lean_object* v___y_5977_){
_start:
{
lean_object* v_res_5978_; 
v_res_5978_ = l_Lake_inputDir___lam__0(v_x_5976_);
lean_dec_ref(v_x_5976_);
return v_res_5978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(uint8_t v_text_5979_, size_t v_sz_5980_, size_t v_i_5981_, lean_object* v_bs_5982_, lean_object* v___y_5983_, lean_object* v___y_5984_, lean_object* v___y_5985_, lean_object* v___y_5986_, lean_object* v___y_5987_, lean_object* v___y_5988_){
_start:
{
uint8_t v___x_5990_; 
v___x_5990_ = lean_usize_dec_lt(v_i_5981_, v_sz_5980_);
if (v___x_5990_ == 0)
{
lean_object* v___x_5991_; 
lean_dec_ref(v___y_5983_);
v___x_5991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5991_, 0, v_bs_5982_);
lean_ctor_set(v___x_5991_, 1, v___y_5988_);
return v___x_5991_;
}
else
{
lean_object* v_v_5992_; lean_object* v___x_5993_; lean_object* v_bs_x27_5994_; lean_object* v___y_5996_; 
v_v_5992_ = lean_array_uget(v_bs_5982_, v_i_5981_);
v___x_5993_ = lean_unsigned_to_nat(0u);
v_bs_x27_5994_ = lean_array_uset(v_bs_5982_, v_i_5981_, v___x_5993_);
if (v_text_5979_ == 0)
{
lean_object* v___x_6001_; 
lean_inc_ref(v___y_5983_);
v___x_6001_ = l_Lake_inputBinFile___redArg(v_v_5992_, v___y_5983_, v___y_5984_, v___y_5985_, v___y_5986_, v___y_5987_);
v___y_5996_ = v___x_6001_;
goto v___jp_5995_;
}
else
{
lean_object* v___x_6002_; 
lean_inc_ref(v___y_5983_);
v___x_6002_ = l_Lake_inputTextFile___redArg(v_v_5992_, v___y_5983_, v___y_5984_, v___y_5985_, v___y_5986_, v___y_5987_);
v___y_5996_ = v___x_6002_;
goto v___jp_5995_;
}
v___jp_5995_:
{
size_t v___x_5997_; size_t v___x_5998_; lean_object* v___x_5999_; 
v___x_5997_ = ((size_t)1ULL);
v___x_5998_ = lean_usize_add(v_i_5981_, v___x_5997_);
v___x_5999_ = lean_array_uset(v_bs_x27_5994_, v_i_5981_, v___y_5996_);
v_i_5981_ = v___x_5998_;
v_bs_5982_ = v___x_5999_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0___boxed(lean_object* v_text_6003_, lean_object* v_sz_6004_, lean_object* v_i_6005_, lean_object* v_bs_6006_, lean_object* v___y_6007_, lean_object* v___y_6008_, lean_object* v___y_6009_, lean_object* v___y_6010_, lean_object* v___y_6011_, lean_object* v___y_6012_, lean_object* v___y_6013_){
_start:
{
uint8_t v_text_boxed_6014_; size_t v_sz_boxed_6015_; size_t v_i_boxed_6016_; lean_object* v_res_6017_; 
v_text_boxed_6014_ = lean_unbox(v_text_6003_);
v_sz_boxed_6015_ = lean_unbox_usize(v_sz_6004_);
lean_dec(v_sz_6004_);
v_i_boxed_6016_ = lean_unbox_usize(v_i_6005_);
lean_dec(v_i_6005_);
v_res_6017_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(v_text_boxed_6014_, v_sz_boxed_6015_, v_i_boxed_6016_, v_bs_6006_, v___y_6007_, v___y_6008_, v___y_6009_, v___y_6010_, v___y_6011_, v___y_6012_);
lean_dec_ref(v___y_6011_);
lean_dec(v___y_6010_);
lean_dec(v___y_6009_);
lean_dec(v___y_6008_);
return v_res_6017_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1(uint8_t v_text_6018_, lean_object* v_path_6019_, lean_object* v_ps_6020_, lean_object* v___y_6021_, lean_object* v___y_6022_, lean_object* v___y_6023_, lean_object* v___y_6024_, lean_object* v___y_6025_, lean_object* v___y_6026_){
_start:
{
size_t v_sz_6028_; size_t v___x_6029_; lean_object* v___x_6030_; 
v_sz_6028_ = lean_array_size(v_ps_6020_);
v___x_6029_ = ((size_t)0ULL);
v___x_6030_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_inputDir_spec__0(v_text_6018_, v_sz_6028_, v___x_6029_, v_ps_6020_, v___y_6021_, v___y_6022_, v___y_6023_, v___y_6024_, v___y_6025_, v___y_6026_);
if (lean_obj_tag(v___x_6030_) == 0)
{
lean_object* v_a_6031_; lean_object* v_a_6032_; lean_object* v___x_6034_; uint8_t v_isShared_6035_; uint8_t v_isSharedCheck_6040_; 
v_a_6031_ = lean_ctor_get(v___x_6030_, 0);
v_a_6032_ = lean_ctor_get(v___x_6030_, 1);
v_isSharedCheck_6040_ = !lean_is_exclusive(v___x_6030_);
if (v_isSharedCheck_6040_ == 0)
{
v___x_6034_ = v___x_6030_;
v_isShared_6035_ = v_isSharedCheck_6040_;
goto v_resetjp_6033_;
}
else
{
lean_inc(v_a_6032_);
lean_inc(v_a_6031_);
lean_dec(v___x_6030_);
v___x_6034_ = lean_box(0);
v_isShared_6035_ = v_isSharedCheck_6040_;
goto v_resetjp_6033_;
}
v_resetjp_6033_:
{
lean_object* v___x_6036_; lean_object* v___x_6038_; 
v___x_6036_ = l_Lake_Job_collectArray___redArg(v_a_6031_, v_path_6019_);
lean_dec(v_a_6031_);
if (v_isShared_6035_ == 0)
{
lean_ctor_set(v___x_6034_, 0, v___x_6036_);
v___x_6038_ = v___x_6034_;
goto v_reusejp_6037_;
}
else
{
lean_object* v_reuseFailAlloc_6039_; 
v_reuseFailAlloc_6039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6039_, 0, v___x_6036_);
lean_ctor_set(v_reuseFailAlloc_6039_, 1, v_a_6032_);
v___x_6038_ = v_reuseFailAlloc_6039_;
goto v_reusejp_6037_;
}
v_reusejp_6037_:
{
return v___x_6038_;
}
}
}
else
{
lean_object* v_a_6041_; lean_object* v_a_6042_; lean_object* v___x_6044_; uint8_t v_isShared_6045_; uint8_t v_isSharedCheck_6049_; 
lean_dec_ref(v_path_6019_);
v_a_6041_ = lean_ctor_get(v___x_6030_, 0);
v_a_6042_ = lean_ctor_get(v___x_6030_, 1);
v_isSharedCheck_6049_ = !lean_is_exclusive(v___x_6030_);
if (v_isSharedCheck_6049_ == 0)
{
v___x_6044_ = v___x_6030_;
v_isShared_6045_ = v_isSharedCheck_6049_;
goto v_resetjp_6043_;
}
else
{
lean_inc(v_a_6042_);
lean_inc(v_a_6041_);
lean_dec(v___x_6030_);
v___x_6044_ = lean_box(0);
v_isShared_6045_ = v_isSharedCheck_6049_;
goto v_resetjp_6043_;
}
v_resetjp_6043_:
{
lean_object* v___x_6047_; 
if (v_isShared_6045_ == 0)
{
v___x_6047_ = v___x_6044_;
goto v_reusejp_6046_;
}
else
{
lean_object* v_reuseFailAlloc_6048_; 
v_reuseFailAlloc_6048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6048_, 0, v_a_6041_);
lean_ctor_set(v_reuseFailAlloc_6048_, 1, v_a_6042_);
v___x_6047_ = v_reuseFailAlloc_6048_;
goto v_reusejp_6046_;
}
v_reusejp_6046_:
{
return v___x_6047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__1___boxed(lean_object* v_text_6050_, lean_object* v_path_6051_, lean_object* v_ps_6052_, lean_object* v___y_6053_, lean_object* v___y_6054_, lean_object* v___y_6055_, lean_object* v___y_6056_, lean_object* v___y_6057_, lean_object* v___y_6058_, lean_object* v___y_6059_){
_start:
{
uint8_t v_text_boxed_6060_; lean_object* v_res_6061_; 
v_text_boxed_6060_ = lean_unbox(v_text_6050_);
v_res_6061_ = l_Lake_inputDir___lam__1(v_text_boxed_6060_, v_path_6051_, v_ps_6052_, v___y_6053_, v___y_6054_, v___y_6055_, v___y_6056_, v___y_6057_, v___y_6058_);
lean_dec_ref(v___y_6057_);
lean_dec(v___y_6056_);
lean_dec(v___y_6055_);
lean_dec(v___y_6054_);
return v_res_6061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(lean_object* v_filter_6062_, lean_object* v_as_6063_, size_t v_i_6064_, size_t v_stop_6065_, lean_object* v_b_6066_, lean_object* v___y_6067_){
_start:
{
lean_object* v_a_6070_; lean_object* v_a_6071_; uint8_t v___x_6075_; 
v___x_6075_ = lean_usize_dec_eq(v_i_6064_, v_stop_6065_);
if (v___x_6075_ == 0)
{
lean_object* v___x_6076_; uint8_t v___x_6077_; 
v___x_6076_ = lean_array_uget_borrowed(v_as_6063_, v_i_6064_);
v___x_6077_ = l_System_FilePath_isDir(v___x_6076_);
if (v___x_6077_ == 0)
{
lean_object* v___x_6078_; uint8_t v___x_6079_; 
lean_inc_ref(v_filter_6062_);
lean_inc(v___x_6076_);
v___x_6078_ = lean_apply_1(v_filter_6062_, v___x_6076_);
v___x_6079_ = lean_unbox(v___x_6078_);
if (v___x_6079_ == 0)
{
v_a_6070_ = v_b_6066_;
v_a_6071_ = v___y_6067_;
goto v___jp_6069_;
}
else
{
lean_object* v___x_6080_; 
lean_inc(v___x_6076_);
v___x_6080_ = lean_array_push(v_b_6066_, v___x_6076_);
v_a_6070_ = v___x_6080_;
v_a_6071_ = v___y_6067_;
goto v___jp_6069_;
}
}
else
{
v_a_6070_ = v_b_6066_;
v_a_6071_ = v___y_6067_;
goto v___jp_6069_;
}
}
else
{
lean_object* v___x_6081_; 
lean_dec_ref(v_filter_6062_);
v___x_6081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6081_, 0, v_b_6066_);
lean_ctor_set(v___x_6081_, 1, v___y_6067_);
return v___x_6081_;
}
v___jp_6069_:
{
size_t v___x_6072_; size_t v___x_6073_; 
v___x_6072_ = ((size_t)1ULL);
v___x_6073_ = lean_usize_add(v_i_6064_, v___x_6072_);
v_i_6064_ = v___x_6073_;
v_b_6066_ = v_a_6070_;
v___y_6067_ = v_a_6071_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg___boxed(lean_object* v_filter_6082_, lean_object* v_as_6083_, lean_object* v_i_6084_, lean_object* v_stop_6085_, lean_object* v_b_6086_, lean_object* v___y_6087_, lean_object* v___y_6088_){
_start:
{
size_t v_i_boxed_6089_; size_t v_stop_boxed_6090_; lean_object* v_res_6091_; 
v_i_boxed_6089_ = lean_unbox_usize(v_i_6084_);
lean_dec(v_i_6084_);
v_stop_boxed_6090_ = lean_unbox_usize(v_stop_6085_);
lean_dec(v_stop_6085_);
v_res_6091_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6082_, v_as_6083_, v_i_boxed_6089_, v_stop_boxed_6090_, v_b_6086_, v___y_6087_);
lean_dec_ref(v_as_6083_);
return v_res_6091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg(lean_object* v_hi_6092_, lean_object* v_pivot_6093_, lean_object* v_as_6094_, lean_object* v_i_6095_, lean_object* v_k_6096_){
_start:
{
uint8_t v___x_6097_; 
v___x_6097_ = lean_nat_dec_lt(v_k_6096_, v_hi_6092_);
if (v___x_6097_ == 0)
{
lean_object* v___x_6098_; lean_object* v___x_6099_; 
lean_dec(v_k_6096_);
v___x_6098_ = lean_array_fswap(v_as_6094_, v_i_6095_, v_hi_6092_);
v___x_6099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6099_, 0, v_i_6095_);
lean_ctor_set(v___x_6099_, 1, v___x_6098_);
return v___x_6099_;
}
else
{
lean_object* v___x_6100_; uint8_t v___x_6101_; 
v___x_6100_ = lean_array_fget_borrowed(v_as_6094_, v_k_6096_);
v___x_6101_ = lean_string_dec_lt(v___x_6100_, v_pivot_6093_);
if (v___x_6101_ == 0)
{
lean_object* v___x_6102_; lean_object* v___x_6103_; 
v___x_6102_ = lean_unsigned_to_nat(1u);
v___x_6103_ = lean_nat_add(v_k_6096_, v___x_6102_);
lean_dec(v_k_6096_);
v_k_6096_ = v___x_6103_;
goto _start;
}
else
{
lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; 
v___x_6105_ = lean_array_fswap(v_as_6094_, v_i_6095_, v_k_6096_);
v___x_6106_ = lean_unsigned_to_nat(1u);
v___x_6107_ = lean_nat_add(v_i_6095_, v___x_6106_);
lean_dec(v_i_6095_);
v___x_6108_ = lean_nat_add(v_k_6096_, v___x_6106_);
lean_dec(v_k_6096_);
v_as_6094_ = v___x_6105_;
v_i_6095_ = v___x_6107_;
v_k_6096_ = v___x_6108_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg___boxed(lean_object* v_hi_6110_, lean_object* v_pivot_6111_, lean_object* v_as_6112_, lean_object* v_i_6113_, lean_object* v_k_6114_){
_start:
{
lean_object* v_res_6115_; 
v_res_6115_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg(v_hi_6110_, v_pivot_6111_, v_as_6112_, v_i_6113_, v_k_6114_);
lean_dec_ref(v_pivot_6111_);
lean_dec(v_hi_6110_);
return v_res_6115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(lean_object* v_n_6116_, lean_object* v_as_6117_, lean_object* v_lo_6118_, lean_object* v_hi_6119_){
_start:
{
lean_object* v___y_6121_; uint8_t v___x_6131_; 
v___x_6131_ = lean_nat_dec_lt(v_lo_6118_, v_hi_6119_);
if (v___x_6131_ == 0)
{
lean_dec(v_lo_6118_);
return v_as_6117_;
}
else
{
lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v_mid_6134_; lean_object* v___y_6136_; lean_object* v___y_6142_; lean_object* v___x_6147_; lean_object* v___x_6148_; uint8_t v___x_6149_; 
v___x_6132_ = lean_nat_add(v_lo_6118_, v_hi_6119_);
v___x_6133_ = lean_unsigned_to_nat(1u);
v_mid_6134_ = lean_nat_shiftr(v___x_6132_, v___x_6133_);
lean_dec(v___x_6132_);
v___x_6147_ = lean_array_fget_borrowed(v_as_6117_, v_mid_6134_);
v___x_6148_ = lean_array_fget_borrowed(v_as_6117_, v_lo_6118_);
v___x_6149_ = lean_string_dec_lt(v___x_6147_, v___x_6148_);
if (v___x_6149_ == 0)
{
v___y_6142_ = v_as_6117_;
goto v___jp_6141_;
}
else
{
lean_object* v___x_6150_; 
v___x_6150_ = lean_array_fswap(v_as_6117_, v_lo_6118_, v_mid_6134_);
v___y_6142_ = v___x_6150_;
goto v___jp_6141_;
}
v___jp_6135_:
{
lean_object* v___x_6137_; lean_object* v___x_6138_; uint8_t v___x_6139_; 
v___x_6137_ = lean_array_fget_borrowed(v___y_6136_, v_mid_6134_);
v___x_6138_ = lean_array_fget_borrowed(v___y_6136_, v_hi_6119_);
v___x_6139_ = lean_string_dec_lt(v___x_6137_, v___x_6138_);
if (v___x_6139_ == 0)
{
lean_dec(v_mid_6134_);
v___y_6121_ = v___y_6136_;
goto v___jp_6120_;
}
else
{
lean_object* v___x_6140_; 
v___x_6140_ = lean_array_fswap(v___y_6136_, v_mid_6134_, v_hi_6119_);
lean_dec(v_mid_6134_);
v___y_6121_ = v___x_6140_;
goto v___jp_6120_;
}
}
v___jp_6141_:
{
lean_object* v___x_6143_; lean_object* v___x_6144_; uint8_t v___x_6145_; 
v___x_6143_ = lean_array_fget_borrowed(v___y_6142_, v_hi_6119_);
v___x_6144_ = lean_array_fget_borrowed(v___y_6142_, v_lo_6118_);
v___x_6145_ = lean_string_dec_lt(v___x_6143_, v___x_6144_);
if (v___x_6145_ == 0)
{
v___y_6136_ = v___y_6142_;
goto v___jp_6135_;
}
else
{
lean_object* v___x_6146_; 
v___x_6146_ = lean_array_fswap(v___y_6142_, v_lo_6118_, v_hi_6119_);
v___y_6136_ = v___x_6146_;
goto v___jp_6135_;
}
}
}
v___jp_6120_:
{
lean_object* v_pivot_6122_; lean_object* v___x_6123_; lean_object* v_fst_6124_; lean_object* v_snd_6125_; uint8_t v___x_6126_; 
v_pivot_6122_ = lean_array_fget(v___y_6121_, v_hi_6119_);
lean_inc_n(v_lo_6118_, 2);
v___x_6123_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg(v_hi_6119_, v_pivot_6122_, v___y_6121_, v_lo_6118_, v_lo_6118_);
lean_dec(v_pivot_6122_);
v_fst_6124_ = lean_ctor_get(v___x_6123_, 0);
lean_inc(v_fst_6124_);
v_snd_6125_ = lean_ctor_get(v___x_6123_, 1);
lean_inc(v_snd_6125_);
lean_dec_ref(v___x_6123_);
v___x_6126_ = lean_nat_dec_le(v_hi_6119_, v_fst_6124_);
if (v___x_6126_ == 0)
{
lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; 
v___x_6127_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_n_6116_, v_snd_6125_, v_lo_6118_, v_fst_6124_);
v___x_6128_ = lean_unsigned_to_nat(1u);
v___x_6129_ = lean_nat_add(v_fst_6124_, v___x_6128_);
lean_dec(v_fst_6124_);
v_as_6117_ = v___x_6127_;
v_lo_6118_ = v___x_6129_;
goto _start;
}
else
{
lean_dec(v_fst_6124_);
lean_dec(v_lo_6118_);
return v_snd_6125_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg___boxed(lean_object* v_n_6151_, lean_object* v_as_6152_, lean_object* v_lo_6153_, lean_object* v_hi_6154_){
_start:
{
lean_object* v_res_6155_; 
v_res_6155_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_n_6151_, v_as_6152_, v_lo_6153_, v_hi_6154_);
lean_dec(v_hi_6154_);
lean_dec(v_n_6151_);
return v_res_6155_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2(lean_object* v_path_6158_, lean_object* v___f_6159_, lean_object* v_filter_6160_, lean_object* v___y_6161_, lean_object* v___y_6162_, lean_object* v___y_6163_, lean_object* v___y_6164_, lean_object* v___y_6165_, lean_object* v___y_6166_){
_start:
{
lean_object* v___y_6169_; lean_object* v___y_6170_; lean_object* v___y_6173_; lean_object* v___y_6174_; lean_object* v___y_6175_; lean_object* v___y_6176_; lean_object* v___y_6177_; lean_object* v___y_6180_; lean_object* v___y_6181_; lean_object* v___y_6182_; lean_object* v___y_6183_; lean_object* v___y_6184_; lean_object* v_log_6186_; uint8_t v_action_6187_; uint8_t v_wantsRebuild_6188_; lean_object* v_trace_6189_; lean_object* v_buildTime_6190_; lean_object* v___x_6191_; 
v_log_6186_ = lean_ctor_get(v___y_6166_, 0);
v_action_6187_ = lean_ctor_get_uint8(v___y_6166_, sizeof(void*)*3);
v_wantsRebuild_6188_ = lean_ctor_get_uint8(v___y_6166_, sizeof(void*)*3 + 1);
v_trace_6189_ = lean_ctor_get(v___y_6166_, 1);
v_buildTime_6190_ = lean_ctor_get(v___y_6166_, 2);
v___x_6191_ = l_System_FilePath_walkDir(v_path_6158_, v___f_6159_);
if (lean_obj_tag(v___x_6191_) == 0)
{
lean_object* v_a_6192_; lean_object* v___x_6193_; lean_object* v_a_6195_; lean_object* v_a_6196_; lean_object* v___y_6203_; lean_object* v___x_6206_; lean_object* v___x_6207_; uint8_t v___x_6208_; 
v_a_6192_ = lean_ctor_get(v___x_6191_, 0);
lean_inc(v_a_6192_);
lean_dec_ref_known(v___x_6191_, 1);
v___x_6193_ = lean_unsigned_to_nat(0u);
v___x_6206_ = lean_array_get_size(v_a_6192_);
v___x_6207_ = ((lean_object*)(l_Lake_inputDir___lam__2___closed__0));
v___x_6208_ = lean_nat_dec_lt(v___x_6193_, v___x_6206_);
if (v___x_6208_ == 0)
{
lean_dec(v_a_6192_);
lean_dec_ref(v_filter_6160_);
v_a_6195_ = v___x_6207_;
v_a_6196_ = v___y_6166_;
goto v___jp_6194_;
}
else
{
uint8_t v___x_6209_; 
v___x_6209_ = lean_nat_dec_le(v___x_6206_, v___x_6206_);
if (v___x_6209_ == 0)
{
if (v___x_6208_ == 0)
{
lean_dec(v_a_6192_);
lean_dec_ref(v_filter_6160_);
v_a_6195_ = v___x_6207_;
v_a_6196_ = v___y_6166_;
goto v___jp_6194_;
}
else
{
size_t v___x_6210_; size_t v___x_6211_; lean_object* v___x_6212_; 
v___x_6210_ = ((size_t)0ULL);
v___x_6211_ = lean_usize_of_nat(v___x_6206_);
v___x_6212_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6160_, v_a_6192_, v___x_6210_, v___x_6211_, v___x_6207_, v___y_6166_);
lean_dec(v_a_6192_);
v___y_6203_ = v___x_6212_;
goto v___jp_6202_;
}
}
else
{
size_t v___x_6213_; size_t v___x_6214_; lean_object* v___x_6215_; 
v___x_6213_ = ((size_t)0ULL);
v___x_6214_ = lean_usize_of_nat(v___x_6206_);
v___x_6215_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6160_, v_a_6192_, v___x_6213_, v___x_6214_, v___x_6207_, v___y_6166_);
lean_dec(v_a_6192_);
v___y_6203_ = v___x_6215_;
goto v___jp_6202_;
}
}
v___jp_6194_:
{
lean_object* v___x_6197_; uint8_t v___x_6198_; 
v___x_6197_ = lean_array_get_size(v_a_6195_);
v___x_6198_ = lean_nat_dec_eq(v___x_6197_, v___x_6193_);
if (v___x_6198_ == 0)
{
lean_object* v___x_6199_; lean_object* v___x_6200_; uint8_t v___x_6201_; 
v___x_6199_ = lean_unsigned_to_nat(1u);
v___x_6200_ = lean_nat_sub(v___x_6197_, v___x_6199_);
v___x_6201_ = lean_nat_dec_le(v___x_6193_, v___x_6200_);
if (v___x_6201_ == 0)
{
lean_inc(v___x_6200_);
v___y_6180_ = v_a_6196_;
v___y_6181_ = v_a_6195_;
v___y_6182_ = v___x_6197_;
v___y_6183_ = v___x_6200_;
v___y_6184_ = v___x_6200_;
goto v___jp_6179_;
}
else
{
v___y_6180_ = v_a_6196_;
v___y_6181_ = v_a_6195_;
v___y_6182_ = v___x_6197_;
v___y_6183_ = v___x_6200_;
v___y_6184_ = v___x_6193_;
goto v___jp_6179_;
}
}
else
{
v___y_6169_ = v_a_6196_;
v___y_6170_ = v_a_6195_;
goto v___jp_6168_;
}
}
v___jp_6202_:
{
if (lean_obj_tag(v___y_6203_) == 0)
{
lean_object* v_a_6204_; lean_object* v_a_6205_; 
v_a_6204_ = lean_ctor_get(v___y_6203_, 0);
lean_inc(v_a_6204_);
v_a_6205_ = lean_ctor_get(v___y_6203_, 1);
lean_inc(v_a_6205_);
lean_dec_ref_known(v___y_6203_, 2);
v_a_6195_ = v_a_6204_;
v_a_6196_ = v_a_6205_;
goto v___jp_6194_;
}
else
{
return v___y_6203_;
}
}
}
else
{
lean_object* v___x_6217_; uint8_t v_isShared_6218_; uint8_t v_isSharedCheck_6229_; 
lean_inc(v_buildTime_6190_);
lean_inc_ref(v_trace_6189_);
lean_inc_ref(v_log_6186_);
lean_dec_ref(v_filter_6160_);
v_isSharedCheck_6229_ = !lean_is_exclusive(v___y_6166_);
if (v_isSharedCheck_6229_ == 0)
{
lean_object* v_unused_6230_; lean_object* v_unused_6231_; lean_object* v_unused_6232_; 
v_unused_6230_ = lean_ctor_get(v___y_6166_, 2);
lean_dec(v_unused_6230_);
v_unused_6231_ = lean_ctor_get(v___y_6166_, 1);
lean_dec(v_unused_6231_);
v_unused_6232_ = lean_ctor_get(v___y_6166_, 0);
lean_dec(v_unused_6232_);
v___x_6217_ = v___y_6166_;
v_isShared_6218_ = v_isSharedCheck_6229_;
goto v_resetjp_6216_;
}
else
{
lean_dec(v___y_6166_);
v___x_6217_ = lean_box(0);
v_isShared_6218_ = v_isSharedCheck_6229_;
goto v_resetjp_6216_;
}
v_resetjp_6216_:
{
lean_object* v_a_6219_; lean_object* v___x_6220_; uint8_t v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; lean_object* v___x_6224_; lean_object* v___x_6226_; 
v_a_6219_ = lean_ctor_get(v___x_6191_, 0);
lean_inc(v_a_6219_);
lean_dec_ref_known(v___x_6191_, 1);
v___x_6220_ = lean_io_error_to_string(v_a_6219_);
v___x_6221_ = 3;
v___x_6222_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6222_, 0, v___x_6220_);
lean_ctor_set_uint8(v___x_6222_, sizeof(void*)*1, v___x_6221_);
v___x_6223_ = lean_array_get_size(v_log_6186_);
v___x_6224_ = lean_array_push(v_log_6186_, v___x_6222_);
if (v_isShared_6218_ == 0)
{
lean_ctor_set(v___x_6217_, 0, v___x_6224_);
v___x_6226_ = v___x_6217_;
goto v_reusejp_6225_;
}
else
{
lean_object* v_reuseFailAlloc_6228_; 
v_reuseFailAlloc_6228_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6228_, 0, v___x_6224_);
lean_ctor_set(v_reuseFailAlloc_6228_, 1, v_trace_6189_);
lean_ctor_set(v_reuseFailAlloc_6228_, 2, v_buildTime_6190_);
lean_ctor_set_uint8(v_reuseFailAlloc_6228_, sizeof(void*)*3, v_action_6187_);
lean_ctor_set_uint8(v_reuseFailAlloc_6228_, sizeof(void*)*3 + 1, v_wantsRebuild_6188_);
v___x_6226_ = v_reuseFailAlloc_6228_;
goto v_reusejp_6225_;
}
v_reusejp_6225_:
{
lean_object* v___x_6227_; 
v___x_6227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6227_, 0, v___x_6223_);
lean_ctor_set(v___x_6227_, 1, v___x_6226_);
return v___x_6227_;
}
}
}
v___jp_6168_:
{
lean_object* v___x_6171_; 
v___x_6171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6171_, 0, v___y_6170_);
lean_ctor_set(v___x_6171_, 1, v___y_6169_);
return v___x_6171_;
}
v___jp_6172_:
{
lean_object* v___x_6178_; 
v___x_6178_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v___y_6176_, v___y_6175_, v___y_6174_, v___y_6177_);
lean_dec(v___y_6177_);
lean_dec(v___y_6176_);
v___y_6169_ = v___y_6173_;
v___y_6170_ = v___x_6178_;
goto v___jp_6168_;
}
v___jp_6179_:
{
uint8_t v___x_6185_; 
v___x_6185_ = lean_nat_dec_le(v___y_6184_, v___y_6183_);
if (v___x_6185_ == 0)
{
lean_dec(v___y_6183_);
lean_inc(v___y_6184_);
v___y_6173_ = v___y_6180_;
v___y_6174_ = v___y_6184_;
v___y_6175_ = v___y_6181_;
v___y_6176_ = v___y_6182_;
v___y_6177_ = v___y_6184_;
goto v___jp_6172_;
}
else
{
v___y_6173_ = v___y_6180_;
v___y_6174_ = v___y_6184_;
v___y_6175_ = v___y_6181_;
v___y_6176_ = v___y_6182_;
v___y_6177_ = v___y_6183_;
goto v___jp_6172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___lam__2___boxed(lean_object* v_path_6233_, lean_object* v___f_6234_, lean_object* v_filter_6235_, lean_object* v___y_6236_, lean_object* v___y_6237_, lean_object* v___y_6238_, lean_object* v___y_6239_, lean_object* v___y_6240_, lean_object* v___y_6241_, lean_object* v___y_6242_){
_start:
{
lean_object* v_res_6243_; 
v_res_6243_ = l_Lake_inputDir___lam__2(v_path_6233_, v___f_6234_, v_filter_6235_, v___y_6236_, v___y_6237_, v___y_6238_, v___y_6239_, v___y_6240_, v___y_6241_);
lean_dec_ref(v___y_6240_);
lean_dec(v___y_6239_);
lean_dec(v___y_6238_);
lean_dec(v___y_6237_);
lean_dec_ref(v___y_6236_);
return v_res_6243_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir(lean_object* v_path_6245_, uint8_t v_text_6246_, lean_object* v_filter_6247_, lean_object* v___y_6248_, lean_object* v___y_6249_, lean_object* v___y_6250_, lean_object* v___y_6251_, lean_object* v___y_6252_, lean_object* v___y_6253_){
_start:
{
lean_object* v___f_6255_; lean_object* v___x_6256_; lean_object* v___f_6257_; lean_object* v___f_6258_; lean_object* v___x_6259_; lean_object* v___x_6260_; lean_object* v___x_6261_; lean_object* v___x_6262_; uint8_t v___x_6263_; lean_object* v___x_6264_; 
v___f_6255_ = ((lean_object*)(l_Lake_inputDir___closed__0));
v___x_6256_ = lean_box(v_text_6246_);
lean_inc_ref(v_path_6245_);
v___f_6257_ = lean_alloc_closure((void*)(l_Lake_inputDir___lam__1___boxed), 10, 2);
lean_closure_set(v___f_6257_, 0, v___x_6256_);
lean_closure_set(v___f_6257_, 1, v_path_6245_);
v___f_6258_ = lean_alloc_closure((void*)(l_Lake_inputDir___lam__2___boxed), 10, 3);
lean_closure_set(v___f_6258_, 0, v_path_6245_);
lean_closure_set(v___f_6258_, 1, v___f_6255_);
lean_closure_set(v___f_6258_, 2, v_filter_6247_);
v___x_6259_ = lean_box(0);
v___x_6260_ = lean_unsigned_to_nat(0u);
v___x_6261_ = ((lean_object*)(l_Lake_inputBinFile___redArg___closed__0));
lean_inc_ref(v___y_6248_);
v___x_6262_ = l_Lake_Job_async___redArg(v___x_6259_, v___f_6258_, v___x_6260_, v___x_6261_, v___y_6248_, v___y_6249_, v___y_6250_, v___y_6251_, v___y_6252_);
v___x_6263_ = 0;
v___x_6264_ = l_Lake_Job_bindM___redArg(v___x_6259_, v___x_6262_, v___f_6257_, v___x_6260_, v___x_6263_, v___y_6248_, v___y_6249_, v___y_6250_, v___y_6251_, v___y_6252_, v___y_6253_);
return v___x_6264_;
}
}
LEAN_EXPORT lean_object* l_Lake_inputDir___boxed(lean_object* v_path_6265_, lean_object* v_text_6266_, lean_object* v_filter_6267_, lean_object* v___y_6268_, lean_object* v___y_6269_, lean_object* v___y_6270_, lean_object* v___y_6271_, lean_object* v___y_6272_, lean_object* v___y_6273_, lean_object* v___y_6274_){
_start:
{
uint8_t v_text_boxed_6275_; lean_object* v_res_6276_; 
v_text_boxed_6275_ = lean_unbox(v_text_6266_);
v_res_6276_ = l_Lake_inputDir(v_path_6265_, v_text_boxed_6275_, v_filter_6267_, v___y_6268_, v___y_6269_, v___y_6270_, v___y_6271_, v___y_6272_, v___y_6273_);
lean_dec_ref(v___y_6273_);
lean_dec_ref(v___y_6272_);
lean_dec(v___y_6271_);
lean_dec(v___y_6270_);
lean_dec(v___y_6269_);
return v_res_6276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(lean_object* v_n_6277_, lean_object* v_as_6278_, lean_object* v_lo_6279_, lean_object* v_hi_6280_, lean_object* v_w_6281_, lean_object* v_hlo_6282_, lean_object* v_hhi_6283_){
_start:
{
lean_object* v___x_6284_; 
v___x_6284_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___redArg(v_n_6277_, v_as_6278_, v_lo_6279_, v_hi_6280_);
return v___x_6284_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1___boxed(lean_object* v_n_6285_, lean_object* v_as_6286_, lean_object* v_lo_6287_, lean_object* v_hi_6288_, lean_object* v_w_6289_, lean_object* v_hlo_6290_, lean_object* v_hhi_6291_){
_start:
{
lean_object* v_res_6292_; 
v_res_6292_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1(v_n_6285_, v_as_6286_, v_lo_6287_, v_hi_6288_, v_w_6289_, v_hlo_6290_, v_hhi_6291_);
lean_dec(v_hi_6288_);
lean_dec(v_n_6285_);
return v_res_6292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(lean_object* v_filter_6293_, lean_object* v_as_6294_, size_t v_i_6295_, size_t v_stop_6296_, lean_object* v_b_6297_, lean_object* v___y_6298_, lean_object* v___y_6299_, lean_object* v___y_6300_, lean_object* v___y_6301_, lean_object* v___y_6302_, lean_object* v___y_6303_){
_start:
{
lean_object* v___x_6305_; 
v___x_6305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___redArg(v_filter_6293_, v_as_6294_, v_i_6295_, v_stop_6296_, v_b_6297_, v___y_6303_);
return v___x_6305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2___boxed(lean_object* v_filter_6306_, lean_object* v_as_6307_, lean_object* v_i_6308_, lean_object* v_stop_6309_, lean_object* v_b_6310_, lean_object* v___y_6311_, lean_object* v___y_6312_, lean_object* v___y_6313_, lean_object* v___y_6314_, lean_object* v___y_6315_, lean_object* v___y_6316_, lean_object* v___y_6317_){
_start:
{
size_t v_i_boxed_6318_; size_t v_stop_boxed_6319_; lean_object* v_res_6320_; 
v_i_boxed_6318_ = lean_unbox_usize(v_i_6308_);
lean_dec(v_i_6308_);
v_stop_boxed_6319_ = lean_unbox_usize(v_stop_6309_);
lean_dec(v_stop_6309_);
v_res_6320_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_inputDir_spec__2(v_filter_6306_, v_as_6307_, v_i_boxed_6318_, v_stop_boxed_6319_, v_b_6310_, v___y_6311_, v___y_6312_, v___y_6313_, v___y_6314_, v___y_6315_, v___y_6316_);
lean_dec_ref(v___y_6315_);
lean_dec(v___y_6314_);
lean_dec(v___y_6313_);
lean_dec(v___y_6312_);
lean_dec_ref(v___y_6311_);
lean_dec_ref(v_as_6307_);
return v_res_6320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1(lean_object* v_n_6321_, lean_object* v_lo_6322_, lean_object* v_hi_6323_, lean_object* v_hhi_6324_, lean_object* v_pivot_6325_, lean_object* v_as_6326_, lean_object* v_i_6327_, lean_object* v_k_6328_, lean_object* v_ilo_6329_, lean_object* v_ik_6330_, lean_object* v_w_6331_){
_start:
{
lean_object* v___x_6332_; 
v___x_6332_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___redArg(v_hi_6323_, v_pivot_6325_, v_as_6326_, v_i_6327_, v_k_6328_);
return v___x_6332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1___boxed(lean_object* v_n_6333_, lean_object* v_lo_6334_, lean_object* v_hi_6335_, lean_object* v_hhi_6336_, lean_object* v_pivot_6337_, lean_object* v_as_6338_, lean_object* v_i_6339_, lean_object* v_k_6340_, lean_object* v_ilo_6341_, lean_object* v_ik_6342_, lean_object* v_w_6343_){
_start:
{
lean_object* v_res_6344_; 
v_res_6344_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lake_inputDir_spec__1_spec__1(v_n_6333_, v_lo_6334_, v_hi_6335_, v_hhi_6336_, v_pivot_6337_, v_as_6338_, v_i_6339_, v_k_6340_, v_ilo_6341_, v_ik_6342_, v_w_6343_);
lean_dec_ref(v_pivot_6337_);
lean_dec(v_hi_6335_);
lean_dec(v_lo_6334_);
lean_dec(v_n_6333_);
return v_res_6344_;
}
}
LEAN_EXPORT uint64_t l_Lake_buildO___lam__0(uint64_t v_ts_6345_, lean_object* v_t_6346_){
_start:
{
uint64_t v___x_6347_; uint64_t v___x_6348_; uint64_t v___x_6349_; uint64_t v___x_6350_; 
v___x_6347_ = l_Lake_Hash_nil;
v___x_6348_ = lean_string_hash(v_t_6346_);
v___x_6349_ = lean_uint64_mix_hash(v___x_6347_, v___x_6348_);
v___x_6350_ = lean_uint64_mix_hash(v_ts_6345_, v___x_6349_);
return v___x_6350_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__0___boxed(lean_object* v_ts_6351_, lean_object* v_t_6352_){
_start:
{
uint64_t v_ts_boxed_6353_; uint64_t v_res_6354_; lean_object* v_r_6355_; 
v_ts_boxed_6353_ = lean_unbox_uint64(v_ts_6351_);
lean_dec_ref(v_ts_6351_);
v_res_6354_ = l_Lake_buildO___lam__0(v_ts_boxed_6353_, v_t_6352_);
lean_dec_ref(v_t_6352_);
v_r_6355_ = lean_box_uint64(v_res_6354_);
return v_r_6355_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1(lean_object* v_oFile_6356_, lean_object* v_srcFile_6357_, lean_object* v___x_6358_, lean_object* v_compiler_6359_, lean_object* v___y_6360_, lean_object* v___y_6361_, lean_object* v___y_6362_, lean_object* v___y_6363_, lean_object* v___y_6364_, lean_object* v___y_6365_){
_start:
{
lean_object* v_log_6367_; uint8_t v_action_6368_; uint8_t v_wantsRebuild_6369_; lean_object* v_trace_6370_; lean_object* v_buildTime_6371_; lean_object* v___x_6373_; uint8_t v_isShared_6374_; uint8_t v_isSharedCheck_6400_; 
v_log_6367_ = lean_ctor_get(v___y_6365_, 0);
v_action_6368_ = lean_ctor_get_uint8(v___y_6365_, sizeof(void*)*3);
v_wantsRebuild_6369_ = lean_ctor_get_uint8(v___y_6365_, sizeof(void*)*3 + 1);
v_trace_6370_ = lean_ctor_get(v___y_6365_, 1);
v_buildTime_6371_ = lean_ctor_get(v___y_6365_, 2);
v_isSharedCheck_6400_ = !lean_is_exclusive(v___y_6365_);
if (v_isSharedCheck_6400_ == 0)
{
v___x_6373_ = v___y_6365_;
v_isShared_6374_ = v_isSharedCheck_6400_;
goto v_resetjp_6372_;
}
else
{
lean_inc(v_buildTime_6371_);
lean_inc(v_trace_6370_);
lean_inc(v_log_6367_);
lean_dec(v___y_6365_);
v___x_6373_ = lean_box(0);
v_isShared_6374_ = v_isSharedCheck_6400_;
goto v_resetjp_6372_;
}
v_resetjp_6372_:
{
lean_object* v___x_6375_; 
v___x_6375_ = l_Lake_compileO(v_oFile_6356_, v_srcFile_6357_, v___x_6358_, v_compiler_6359_, v_log_6367_);
if (lean_obj_tag(v___x_6375_) == 0)
{
lean_object* v_a_6376_; lean_object* v_a_6377_; lean_object* v___x_6379_; uint8_t v_isShared_6380_; uint8_t v_isSharedCheck_6387_; 
v_a_6376_ = lean_ctor_get(v___x_6375_, 0);
v_a_6377_ = lean_ctor_get(v___x_6375_, 1);
v_isSharedCheck_6387_ = !lean_is_exclusive(v___x_6375_);
if (v_isSharedCheck_6387_ == 0)
{
v___x_6379_ = v___x_6375_;
v_isShared_6380_ = v_isSharedCheck_6387_;
goto v_resetjp_6378_;
}
else
{
lean_inc(v_a_6377_);
lean_inc(v_a_6376_);
lean_dec(v___x_6375_);
v___x_6379_ = lean_box(0);
v_isShared_6380_ = v_isSharedCheck_6387_;
goto v_resetjp_6378_;
}
v_resetjp_6378_:
{
lean_object* v___x_6382_; 
if (v_isShared_6374_ == 0)
{
lean_ctor_set(v___x_6373_, 0, v_a_6377_);
v___x_6382_ = v___x_6373_;
goto v_reusejp_6381_;
}
else
{
lean_object* v_reuseFailAlloc_6386_; 
v_reuseFailAlloc_6386_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6386_, 0, v_a_6377_);
lean_ctor_set(v_reuseFailAlloc_6386_, 1, v_trace_6370_);
lean_ctor_set(v_reuseFailAlloc_6386_, 2, v_buildTime_6371_);
lean_ctor_set_uint8(v_reuseFailAlloc_6386_, sizeof(void*)*3, v_action_6368_);
lean_ctor_set_uint8(v_reuseFailAlloc_6386_, sizeof(void*)*3 + 1, v_wantsRebuild_6369_);
v___x_6382_ = v_reuseFailAlloc_6386_;
goto v_reusejp_6381_;
}
v_reusejp_6381_:
{
lean_object* v___x_6384_; 
if (v_isShared_6380_ == 0)
{
lean_ctor_set(v___x_6379_, 1, v___x_6382_);
v___x_6384_ = v___x_6379_;
goto v_reusejp_6383_;
}
else
{
lean_object* v_reuseFailAlloc_6385_; 
v_reuseFailAlloc_6385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6385_, 0, v_a_6376_);
lean_ctor_set(v_reuseFailAlloc_6385_, 1, v___x_6382_);
v___x_6384_ = v_reuseFailAlloc_6385_;
goto v_reusejp_6383_;
}
v_reusejp_6383_:
{
return v___x_6384_;
}
}
}
}
else
{
lean_object* v_a_6388_; lean_object* v_a_6389_; lean_object* v___x_6391_; uint8_t v_isShared_6392_; uint8_t v_isSharedCheck_6399_; 
v_a_6388_ = lean_ctor_get(v___x_6375_, 0);
v_a_6389_ = lean_ctor_get(v___x_6375_, 1);
v_isSharedCheck_6399_ = !lean_is_exclusive(v___x_6375_);
if (v_isSharedCheck_6399_ == 0)
{
v___x_6391_ = v___x_6375_;
v_isShared_6392_ = v_isSharedCheck_6399_;
goto v_resetjp_6390_;
}
else
{
lean_inc(v_a_6389_);
lean_inc(v_a_6388_);
lean_dec(v___x_6375_);
v___x_6391_ = lean_box(0);
v_isShared_6392_ = v_isSharedCheck_6399_;
goto v_resetjp_6390_;
}
v_resetjp_6390_:
{
lean_object* v___x_6394_; 
if (v_isShared_6374_ == 0)
{
lean_ctor_set(v___x_6373_, 0, v_a_6389_);
v___x_6394_ = v___x_6373_;
goto v_reusejp_6393_;
}
else
{
lean_object* v_reuseFailAlloc_6398_; 
v_reuseFailAlloc_6398_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6398_, 0, v_a_6389_);
lean_ctor_set(v_reuseFailAlloc_6398_, 1, v_trace_6370_);
lean_ctor_set(v_reuseFailAlloc_6398_, 2, v_buildTime_6371_);
lean_ctor_set_uint8(v_reuseFailAlloc_6398_, sizeof(void*)*3, v_action_6368_);
lean_ctor_set_uint8(v_reuseFailAlloc_6398_, sizeof(void*)*3 + 1, v_wantsRebuild_6369_);
v___x_6394_ = v_reuseFailAlloc_6398_;
goto v_reusejp_6393_;
}
v_reusejp_6393_:
{
lean_object* v___x_6396_; 
if (v_isShared_6392_ == 0)
{
lean_ctor_set(v___x_6391_, 1, v___x_6394_);
v___x_6396_ = v___x_6391_;
goto v_reusejp_6395_;
}
else
{
lean_object* v_reuseFailAlloc_6397_; 
v_reuseFailAlloc_6397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6397_, 0, v_a_6388_);
lean_ctor_set(v_reuseFailAlloc_6397_, 1, v___x_6394_);
v___x_6396_ = v_reuseFailAlloc_6397_;
goto v_reusejp_6395_;
}
v_reusejp_6395_:
{
return v___x_6396_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__1___boxed(lean_object* v_oFile_6401_, lean_object* v_srcFile_6402_, lean_object* v___x_6403_, lean_object* v_compiler_6404_, lean_object* v___y_6405_, lean_object* v___y_6406_, lean_object* v___y_6407_, lean_object* v___y_6408_, lean_object* v___y_6409_, lean_object* v___y_6410_, lean_object* v___y_6411_){
_start:
{
lean_object* v_res_6412_; 
v_res_6412_ = l_Lake_buildO___lam__1(v_oFile_6401_, v_srcFile_6402_, v___x_6403_, v_compiler_6404_, v___y_6405_, v___y_6406_, v___y_6407_, v___y_6408_, v___y_6409_, v___y_6410_);
lean_dec_ref(v___y_6409_);
lean_dec(v___y_6408_);
lean_dec(v___y_6407_);
lean_dec(v___y_6406_);
lean_dec_ref(v___y_6405_);
lean_dec_ref(v___x_6403_);
return v_res_6412_;
}
}
static lean_object* _init_l_Lake_buildO___lam__2___boxed__const__1(void){
_start:
{
uint64_t v___x_6416_; lean_object* v___x_6417_; 
v___x_6416_ = l_Lake_Hash_nil;
v___x_6417_ = lean_box_uint64(v___x_6416_);
return v___x_6417_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2(lean_object* v_traceArgs_6418_, lean_object* v___f_6419_, lean_object* v_extraDepTrace_6420_, lean_object* v_weakArgs_6421_, lean_object* v_oFile_6422_, lean_object* v_compiler_6423_, lean_object* v___x_6424_, lean_object* v___f_6425_, lean_object* v_srcFile_6426_, lean_object* v___y_6427_, lean_object* v___y_6428_, lean_object* v___y_6429_, lean_object* v___y_6430_, lean_object* v___y_6431_, lean_object* v___y_6432_){
_start:
{
lean_object* v_log_6434_; uint8_t v_action_6435_; uint8_t v_wantsRebuild_6436_; lean_object* v_trace_6437_; lean_object* v_buildTime_6438_; lean_object* v___x_6440_; uint8_t v_isShared_6441_; uint8_t v_isSharedCheck_6517_; 
v_log_6434_ = lean_ctor_get(v___y_6432_, 0);
v_action_6435_ = lean_ctor_get_uint8(v___y_6432_, sizeof(void*)*3);
v_wantsRebuild_6436_ = lean_ctor_get_uint8(v___y_6432_, sizeof(void*)*3 + 1);
v_trace_6437_ = lean_ctor_get(v___y_6432_, 1);
v_buildTime_6438_ = lean_ctor_get(v___y_6432_, 2);
v_isSharedCheck_6517_ = !lean_is_exclusive(v___y_6432_);
if (v_isSharedCheck_6517_ == 0)
{
v___x_6440_ = v___y_6432_;
v_isShared_6441_ = v_isSharedCheck_6517_;
goto v_resetjp_6439_;
}
else
{
lean_inc(v_buildTime_6438_);
lean_inc(v_trace_6437_);
lean_inc(v_log_6434_);
lean_dec(v___y_6432_);
v___x_6440_ = lean_box(0);
v_isShared_6441_ = v_isSharedCheck_6517_;
goto v_resetjp_6439_;
}
v_resetjp_6439_:
{
lean_object* v___x_6442_; lean_object* v___x_6443_; uint64_t v___y_6445_; uint64_t v___x_6508_; lean_object* v___x_6509_; lean_object* v___x_6510_; uint8_t v___x_6511_; 
v___x_6442_ = l_Lake_platformTrace;
v___x_6443_ = l_Lake_BuildTrace_mix(v_trace_6437_, v___x_6442_);
v___x_6508_ = l_Lake_Hash_nil;
v___x_6509_ = lean_unsigned_to_nat(0u);
v___x_6510_ = lean_array_get_size(v_traceArgs_6418_);
v___x_6511_ = lean_nat_dec_lt(v___x_6509_, v___x_6510_);
if (v___x_6511_ == 0)
{
lean_dec_ref(v___f_6425_);
lean_dec_ref(v___x_6424_);
v___y_6445_ = v___x_6508_;
goto v___jp_6444_;
}
else
{
size_t v___x_6512_; size_t v___x_6513_; lean_object* v___x_6514_; lean_object* v___x_6515_; uint64_t v___x_6516_; 
v___x_6512_ = ((size_t)0ULL);
v___x_6513_ = lean_usize_of_nat(v___x_6510_);
v___x_6514_ = l_Lake_buildO___lam__2___boxed__const__1;
lean_inc_ref(v_traceArgs_6418_);
v___x_6515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_6424_, v___f_6425_, v_traceArgs_6418_, v___x_6512_, v___x_6513_, v___x_6514_);
v___x_6516_ = lean_unbox_uint64(v___x_6515_);
lean_dec(v___x_6515_);
v___y_6445_ = v___x_6516_;
goto v___jp_6444_;
}
v___jp_6444_:
{
lean_object* v___x_6446_; lean_object* v___x_6447_; lean_object* v___x_6448_; lean_object* v___x_6449_; lean_object* v___x_6450_; lean_object* v___x_6451_; lean_object* v___x_6452_; lean_object* v___x_6453_; lean_object* v___x_6454_; lean_object* v___x_6455_; lean_object* v___x_6457_; 
v___x_6446_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_6447_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
lean_inc_ref(v_traceArgs_6418_);
v___x_6448_ = lean_array_to_list(v_traceArgs_6418_);
v___x_6449_ = l_List_toString___redArg(v___f_6419_, v___x_6448_);
v___x_6450_ = lean_string_append(v___x_6447_, v___x_6449_);
lean_dec_ref(v___x_6449_);
v___x_6451_ = lean_string_append(v___x_6446_, v___x_6450_);
lean_dec_ref(v___x_6450_);
v___x_6452_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_6453_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_6454_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6454_, 0, v___x_6451_);
lean_ctor_set(v___x_6454_, 1, v___x_6452_);
lean_ctor_set(v___x_6454_, 2, v___x_6453_);
lean_ctor_set_uint64(v___x_6454_, sizeof(void*)*3, v___y_6445_);
v___x_6455_ = l_Lake_BuildTrace_mix(v___x_6443_, v___x_6454_);
if (v_isShared_6441_ == 0)
{
lean_ctor_set(v___x_6440_, 1, v___x_6455_);
v___x_6457_ = v___x_6440_;
goto v_reusejp_6456_;
}
else
{
lean_object* v_reuseFailAlloc_6507_; 
v_reuseFailAlloc_6507_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6507_, 0, v_log_6434_);
lean_ctor_set(v_reuseFailAlloc_6507_, 1, v___x_6455_);
lean_ctor_set(v_reuseFailAlloc_6507_, 2, v_buildTime_6438_);
lean_ctor_set_uint8(v_reuseFailAlloc_6507_, sizeof(void*)*3, v_action_6435_);
lean_ctor_set_uint8(v_reuseFailAlloc_6507_, sizeof(void*)*3 + 1, v_wantsRebuild_6436_);
v___x_6457_ = v_reuseFailAlloc_6507_;
goto v_reusejp_6456_;
}
v_reusejp_6456_:
{
lean_object* v___x_6458_; 
lean_inc_ref(v___y_6431_);
lean_inc(v___y_6430_);
lean_inc(v___y_6429_);
lean_inc(v___y_6428_);
lean_inc_ref(v___y_6427_);
v___x_6458_ = lean_apply_7(v_extraDepTrace_6420_, v___y_6427_, v___y_6428_, v___y_6429_, v___y_6430_, v___y_6431_, v___x_6457_, lean_box(0));
if (lean_obj_tag(v___x_6458_) == 0)
{
lean_object* v_a_6459_; lean_object* v_a_6460_; lean_object* v_log_6461_; uint8_t v_action_6462_; uint8_t v_wantsRebuild_6463_; lean_object* v_trace_6464_; lean_object* v_buildTime_6465_; lean_object* v___x_6467_; uint8_t v_isShared_6468_; uint8_t v_isSharedCheck_6497_; 
v_a_6459_ = lean_ctor_get(v___x_6458_, 1);
lean_inc(v_a_6459_);
v_a_6460_ = lean_ctor_get(v___x_6458_, 0);
lean_inc(v_a_6460_);
lean_dec_ref_known(v___x_6458_, 2);
v_log_6461_ = lean_ctor_get(v_a_6459_, 0);
v_action_6462_ = lean_ctor_get_uint8(v_a_6459_, sizeof(void*)*3);
v_wantsRebuild_6463_ = lean_ctor_get_uint8(v_a_6459_, sizeof(void*)*3 + 1);
v_trace_6464_ = lean_ctor_get(v_a_6459_, 1);
v_buildTime_6465_ = lean_ctor_get(v_a_6459_, 2);
v_isSharedCheck_6497_ = !lean_is_exclusive(v_a_6459_);
if (v_isSharedCheck_6497_ == 0)
{
v___x_6467_ = v_a_6459_;
v_isShared_6468_ = v_isSharedCheck_6497_;
goto v_resetjp_6466_;
}
else
{
lean_inc(v_buildTime_6465_);
lean_inc(v_trace_6464_);
lean_inc(v_log_6461_);
lean_dec(v_a_6459_);
v___x_6467_ = lean_box(0);
v_isShared_6468_ = v_isSharedCheck_6497_;
goto v_resetjp_6466_;
}
v_resetjp_6466_:
{
lean_object* v___x_6469_; lean_object* v___x_6471_; 
v___x_6469_ = l_Lake_BuildTrace_mix(v_trace_6464_, v_a_6460_);
if (v_isShared_6468_ == 0)
{
lean_ctor_set(v___x_6467_, 1, v___x_6469_);
v___x_6471_ = v___x_6467_;
goto v_reusejp_6470_;
}
else
{
lean_object* v_reuseFailAlloc_6496_; 
v_reuseFailAlloc_6496_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6496_, 0, v_log_6461_);
lean_ctor_set(v_reuseFailAlloc_6496_, 1, v___x_6469_);
lean_ctor_set(v_reuseFailAlloc_6496_, 2, v_buildTime_6465_);
lean_ctor_set_uint8(v_reuseFailAlloc_6496_, sizeof(void*)*3, v_action_6462_);
lean_ctor_set_uint8(v_reuseFailAlloc_6496_, sizeof(void*)*3 + 1, v_wantsRebuild_6463_);
v___x_6471_ = v_reuseFailAlloc_6496_;
goto v_reusejp_6470_;
}
v_reusejp_6470_:
{
lean_object* v___x_6472_; lean_object* v___f_6473_; uint8_t v___x_6474_; lean_object* v___x_6475_; lean_object* v___x_6476_; 
v___x_6472_ = l_Array_append___redArg(v_weakArgs_6421_, v_traceArgs_6418_);
lean_dec_ref(v_traceArgs_6418_);
lean_inc_ref(v_oFile_6422_);
v___f_6473_ = lean_alloc_closure((void*)(l_Lake_buildO___lam__1___boxed), 11, 4);
lean_closure_set(v___f_6473_, 0, v_oFile_6422_);
lean_closure_set(v___f_6473_, 1, v_srcFile_6426_);
lean_closure_set(v___f_6473_, 2, v___x_6472_);
lean_closure_set(v___f_6473_, 3, v_compiler_6423_);
v___x_6474_ = 0;
v___x_6475_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__2));
v___x_6476_ = l_Lake_buildArtifactUnlessUpToDate(v_oFile_6422_, v___f_6473_, v___x_6474_, v___x_6475_, v___x_6474_, v___x_6474_, v___x_6474_, v___y_6427_, v___y_6428_, v___y_6429_, v___y_6430_, v___y_6431_, v___x_6471_);
if (lean_obj_tag(v___x_6476_) == 0)
{
lean_object* v_a_6477_; lean_object* v_a_6478_; lean_object* v___x_6480_; uint8_t v_isShared_6481_; uint8_t v_isSharedCheck_6486_; 
v_a_6477_ = lean_ctor_get(v___x_6476_, 0);
v_a_6478_ = lean_ctor_get(v___x_6476_, 1);
v_isSharedCheck_6486_ = !lean_is_exclusive(v___x_6476_);
if (v_isSharedCheck_6486_ == 0)
{
v___x_6480_ = v___x_6476_;
v_isShared_6481_ = v_isSharedCheck_6486_;
goto v_resetjp_6479_;
}
else
{
lean_inc(v_a_6478_);
lean_inc(v_a_6477_);
lean_dec(v___x_6476_);
v___x_6480_ = lean_box(0);
v_isShared_6481_ = v_isSharedCheck_6486_;
goto v_resetjp_6479_;
}
v_resetjp_6479_:
{
lean_object* v_path_6482_; lean_object* v___x_6484_; 
v_path_6482_ = lean_ctor_get(v_a_6477_, 1);
lean_inc_ref(v_path_6482_);
lean_dec(v_a_6477_);
if (v_isShared_6481_ == 0)
{
lean_ctor_set(v___x_6480_, 0, v_path_6482_);
v___x_6484_ = v___x_6480_;
goto v_reusejp_6483_;
}
else
{
lean_object* v_reuseFailAlloc_6485_; 
v_reuseFailAlloc_6485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6485_, 0, v_path_6482_);
lean_ctor_set(v_reuseFailAlloc_6485_, 1, v_a_6478_);
v___x_6484_ = v_reuseFailAlloc_6485_;
goto v_reusejp_6483_;
}
v_reusejp_6483_:
{
return v___x_6484_;
}
}
}
else
{
lean_object* v_a_6487_; lean_object* v_a_6488_; lean_object* v___x_6490_; uint8_t v_isShared_6491_; uint8_t v_isSharedCheck_6495_; 
v_a_6487_ = lean_ctor_get(v___x_6476_, 0);
v_a_6488_ = lean_ctor_get(v___x_6476_, 1);
v_isSharedCheck_6495_ = !lean_is_exclusive(v___x_6476_);
if (v_isSharedCheck_6495_ == 0)
{
v___x_6490_ = v___x_6476_;
v_isShared_6491_ = v_isSharedCheck_6495_;
goto v_resetjp_6489_;
}
else
{
lean_inc(v_a_6488_);
lean_inc(v_a_6487_);
lean_dec(v___x_6476_);
v___x_6490_ = lean_box(0);
v_isShared_6491_ = v_isSharedCheck_6495_;
goto v_resetjp_6489_;
}
v_resetjp_6489_:
{
lean_object* v___x_6493_; 
if (v_isShared_6491_ == 0)
{
v___x_6493_ = v___x_6490_;
goto v_reusejp_6492_;
}
else
{
lean_object* v_reuseFailAlloc_6494_; 
v_reuseFailAlloc_6494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6494_, 0, v_a_6487_);
lean_ctor_set(v_reuseFailAlloc_6494_, 1, v_a_6488_);
v___x_6493_ = v_reuseFailAlloc_6494_;
goto v_reusejp_6492_;
}
v_reusejp_6492_:
{
return v___x_6493_;
}
}
}
}
}
}
else
{
lean_object* v_a_6498_; lean_object* v_a_6499_; lean_object* v___x_6501_; uint8_t v_isShared_6502_; uint8_t v_isSharedCheck_6506_; 
lean_dec_ref(v___y_6427_);
lean_dec_ref(v_srcFile_6426_);
lean_dec_ref(v_compiler_6423_);
lean_dec_ref(v_oFile_6422_);
lean_dec_ref(v_weakArgs_6421_);
lean_dec_ref(v_traceArgs_6418_);
v_a_6498_ = lean_ctor_get(v___x_6458_, 0);
v_a_6499_ = lean_ctor_get(v___x_6458_, 1);
v_isSharedCheck_6506_ = !lean_is_exclusive(v___x_6458_);
if (v_isSharedCheck_6506_ == 0)
{
v___x_6501_ = v___x_6458_;
v_isShared_6502_ = v_isSharedCheck_6506_;
goto v_resetjp_6500_;
}
else
{
lean_inc(v_a_6499_);
lean_inc(v_a_6498_);
lean_dec(v___x_6458_);
v___x_6501_ = lean_box(0);
v_isShared_6502_ = v_isSharedCheck_6506_;
goto v_resetjp_6500_;
}
v_resetjp_6500_:
{
lean_object* v___x_6504_; 
if (v_isShared_6502_ == 0)
{
v___x_6504_ = v___x_6501_;
goto v_reusejp_6503_;
}
else
{
lean_object* v_reuseFailAlloc_6505_; 
v_reuseFailAlloc_6505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6505_, 0, v_a_6498_);
lean_ctor_set(v_reuseFailAlloc_6505_, 1, v_a_6499_);
v___x_6504_ = v_reuseFailAlloc_6505_;
goto v_reusejp_6503_;
}
v_reusejp_6503_:
{
return v___x_6504_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___lam__2___boxed(lean_object* v_traceArgs_6518_, lean_object* v___f_6519_, lean_object* v_extraDepTrace_6520_, lean_object* v_weakArgs_6521_, lean_object* v_oFile_6522_, lean_object* v_compiler_6523_, lean_object* v___x_6524_, lean_object* v___f_6525_, lean_object* v_srcFile_6526_, lean_object* v___y_6527_, lean_object* v___y_6528_, lean_object* v___y_6529_, lean_object* v___y_6530_, lean_object* v___y_6531_, lean_object* v___y_6532_, lean_object* v___y_6533_){
_start:
{
lean_object* v_res_6534_; 
v_res_6534_ = l_Lake_buildO___lam__2(v_traceArgs_6518_, v___f_6519_, v_extraDepTrace_6520_, v_weakArgs_6521_, v_oFile_6522_, v_compiler_6523_, v___x_6524_, v___f_6525_, v_srcFile_6526_, v___y_6527_, v___y_6528_, v___y_6529_, v___y_6530_, v___y_6531_, v___y_6532_);
lean_dec_ref(v___y_6531_);
lean_dec(v___y_6530_);
lean_dec(v___y_6529_);
lean_dec(v___y_6528_);
return v_res_6534_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO(lean_object* v_oFile_6537_, lean_object* v_srcJob_6538_, lean_object* v_weakArgs_6539_, lean_object* v_traceArgs_6540_, lean_object* v_compiler_6541_, lean_object* v_extraDepTrace_6542_, lean_object* v___y_6543_, lean_object* v___y_6544_, lean_object* v___y_6545_, lean_object* v___y_6546_, lean_object* v___y_6547_, lean_object* v___y_6548_){
_start:
{
lean_object* v___f_6550_; lean_object* v___x_6551_; lean_object* v___f_6552_; lean_object* v___x_6553_; lean_object* v___f_6554_; lean_object* v___x_6555_; uint8_t v___x_6556_; lean_object* v___x_6557_; 
v___f_6550_ = ((lean_object*)(l_Lake_buildO___closed__0));
v___x_6551_ = l_Lake_instDataKindFilePath;
v___f_6552_ = ((lean_object*)(l_Lake_buildO___closed__1));
v___x_6553_ = ((lean_object*)(l_Lake_instMonadWorkspaceJobM___closed__9));
v___f_6554_ = lean_alloc_closure((void*)(l_Lake_buildO___lam__2___boxed), 16, 8);
lean_closure_set(v___f_6554_, 0, v_traceArgs_6540_);
lean_closure_set(v___f_6554_, 1, v___f_6552_);
lean_closure_set(v___f_6554_, 2, v_extraDepTrace_6542_);
lean_closure_set(v___f_6554_, 3, v_weakArgs_6539_);
lean_closure_set(v___f_6554_, 4, v_oFile_6537_);
lean_closure_set(v___f_6554_, 5, v_compiler_6541_);
lean_closure_set(v___f_6554_, 6, v___x_6553_);
lean_closure_set(v___f_6554_, 7, v___f_6550_);
v___x_6555_ = lean_unsigned_to_nat(0u);
v___x_6556_ = 0;
v___x_6557_ = l_Lake_Job_mapM___redArg(v___x_6551_, v_srcJob_6538_, v___f_6554_, v___x_6555_, v___x_6556_, v___y_6543_, v___y_6544_, v___y_6545_, v___y_6546_, v___y_6547_, v___y_6548_);
return v___x_6557_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildO___boxed(lean_object* v_oFile_6558_, lean_object* v_srcJob_6559_, lean_object* v_weakArgs_6560_, lean_object* v_traceArgs_6561_, lean_object* v_compiler_6562_, lean_object* v_extraDepTrace_6563_, lean_object* v___y_6564_, lean_object* v___y_6565_, lean_object* v___y_6566_, lean_object* v___y_6567_, lean_object* v___y_6568_, lean_object* v___y_6569_, lean_object* v___y_6570_){
_start:
{
lean_object* v_res_6571_; 
v_res_6571_ = l_Lake_buildO(v_oFile_6558_, v_srcJob_6559_, v_weakArgs_6560_, v_traceArgs_6561_, v_compiler_6562_, v_extraDepTrace_6563_, v___y_6564_, v___y_6565_, v___y_6566_, v___y_6567_, v___y_6568_, v___y_6569_);
lean_dec_ref(v___y_6569_);
lean_dec_ref(v___y_6568_);
lean_dec(v___y_6567_);
lean_dec(v___y_6566_);
lean_dec(v___y_6565_);
return v_res_6571_;
}
}
static lean_object* _init_l_Lake_Internal_buildLeanO___lam__0___closed__1(void){
_start:
{
lean_object* v___x_6573_; lean_object* v___x_6574_; lean_object* v___x_6575_; lean_object* v___x_6576_; 
v___x_6573_ = ((lean_object*)(l_Lake_Internal_buildLeanO___lam__0___closed__0));
v___x_6574_ = lean_unsigned_to_nat(2u);
v___x_6575_ = lean_mk_empty_array_with_capacity(v___x_6574_);
v___x_6576_ = lean_array_push(v___x_6575_, v___x_6573_);
return v___x_6576_;
}
}
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO___lam__0(lean_object* v_weakArgs_6577_, lean_object* v_traceArgs_6578_, lean_object* v_oFile_6579_, lean_object* v_srcFile_6580_, lean_object* v_leanIncludeDir_x3f_6581_, lean_object* v___y_6582_, lean_object* v___y_6583_, lean_object* v___y_6584_, lean_object* v___y_6585_, lean_object* v___y_6586_, lean_object* v___y_6587_){
_start:
{
lean_object* v_toContext_6589_; lean_object* v_lakeEnv_6590_; lean_object* v_log_6591_; uint8_t v_action_6592_; uint8_t v_wantsRebuild_6593_; lean_object* v_trace_6594_; lean_object* v_buildTime_6595_; lean_object* v___x_6597_; uint8_t v_isShared_6598_; uint8_t v_isSharedCheck_6637_; 
v_toContext_6589_ = lean_ctor_get(v___y_6586_, 1);
v_lakeEnv_6590_ = lean_ctor_get(v_toContext_6589_, 0);
v_log_6591_ = lean_ctor_get(v___y_6587_, 0);
v_action_6592_ = lean_ctor_get_uint8(v___y_6587_, sizeof(void*)*3);
v_wantsRebuild_6593_ = lean_ctor_get_uint8(v___y_6587_, sizeof(void*)*3 + 1);
v_trace_6594_ = lean_ctor_get(v___y_6587_, 1);
v_buildTime_6595_ = lean_ctor_get(v___y_6587_, 2);
v_isSharedCheck_6637_ = !lean_is_exclusive(v___y_6587_);
if (v_isSharedCheck_6637_ == 0)
{
v___x_6597_ = v___y_6587_;
v_isShared_6598_ = v_isSharedCheck_6637_;
goto v_resetjp_6596_;
}
else
{
lean_inc(v_buildTime_6595_);
lean_inc(v_trace_6594_);
lean_inc(v_log_6591_);
lean_dec(v___y_6587_);
v___x_6597_ = lean_box(0);
v_isShared_6598_ = v_isSharedCheck_6637_;
goto v_resetjp_6596_;
}
v_resetjp_6596_:
{
lean_object* v_lean_6599_; lean_object* v___y_6601_; 
v_lean_6599_ = lean_ctor_get(v_lakeEnv_6590_, 1);
if (lean_obj_tag(v_leanIncludeDir_x3f_6581_) == 0)
{
lean_object* v_includeDir_6634_; 
v_includeDir_6634_ = lean_ctor_get(v_lean_6599_, 4);
lean_inc_ref(v_includeDir_6634_);
v___y_6601_ = v_includeDir_6634_;
goto v___jp_6600_;
}
else
{
lean_object* v_val_6635_; lean_object* v_fst_6636_; 
v_val_6635_ = lean_ctor_get(v_leanIncludeDir_x3f_6581_, 0);
lean_inc(v_val_6635_);
lean_dec_ref_known(v_leanIncludeDir_x3f_6581_, 1);
v_fst_6636_ = lean_ctor_get(v_val_6635_, 0);
lean_inc(v_fst_6636_);
lean_dec(v_val_6635_);
v___y_6601_ = v_fst_6636_;
goto v___jp_6600_;
}
v___jp_6600_:
{
lean_object* v_cc_6602_; lean_object* v_ccFlags_6603_; lean_object* v___x_6604_; lean_object* v___x_6605_; lean_object* v___x_6606_; lean_object* v___x_6607_; lean_object* v___x_6608_; lean_object* v___x_6609_; 
v_cc_6602_ = lean_ctor_get(v_lean_6599_, 14);
v_ccFlags_6603_ = lean_ctor_get(v_lean_6599_, 18);
v___x_6604_ = lean_obj_once(&l_Lake_Internal_buildLeanO___lam__0___closed__1, &l_Lake_Internal_buildLeanO___lam__0___closed__1_once, _init_l_Lake_Internal_buildLeanO___lam__0___closed__1);
v___x_6605_ = lean_array_push(v___x_6604_, v___y_6601_);
v___x_6606_ = l_Array_append___redArg(v___x_6605_, v_ccFlags_6603_);
v___x_6607_ = l_Array_append___redArg(v___x_6606_, v_weakArgs_6577_);
v___x_6608_ = l_Array_append___redArg(v___x_6607_, v_traceArgs_6578_);
lean_inc_ref(v_cc_6602_);
v___x_6609_ = l_Lake_compileO(v_oFile_6579_, v_srcFile_6580_, v___x_6608_, v_cc_6602_, v_log_6591_);
lean_dec_ref(v___x_6608_);
if (lean_obj_tag(v___x_6609_) == 0)
{
lean_object* v_a_6610_; lean_object* v_a_6611_; lean_object* v___x_6613_; uint8_t v_isShared_6614_; uint8_t v_isSharedCheck_6621_; 
v_a_6610_ = lean_ctor_get(v___x_6609_, 0);
v_a_6611_ = lean_ctor_get(v___x_6609_, 1);
v_isSharedCheck_6621_ = !lean_is_exclusive(v___x_6609_);
if (v_isSharedCheck_6621_ == 0)
{
v___x_6613_ = v___x_6609_;
v_isShared_6614_ = v_isSharedCheck_6621_;
goto v_resetjp_6612_;
}
else
{
lean_inc(v_a_6611_);
lean_inc(v_a_6610_);
lean_dec(v___x_6609_);
v___x_6613_ = lean_box(0);
v_isShared_6614_ = v_isSharedCheck_6621_;
goto v_resetjp_6612_;
}
v_resetjp_6612_:
{
lean_object* v___x_6616_; 
if (v_isShared_6598_ == 0)
{
lean_ctor_set(v___x_6597_, 0, v_a_6611_);
v___x_6616_ = v___x_6597_;
goto v_reusejp_6615_;
}
else
{
lean_object* v_reuseFailAlloc_6620_; 
v_reuseFailAlloc_6620_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6620_, 0, v_a_6611_);
lean_ctor_set(v_reuseFailAlloc_6620_, 1, v_trace_6594_);
lean_ctor_set(v_reuseFailAlloc_6620_, 2, v_buildTime_6595_);
lean_ctor_set_uint8(v_reuseFailAlloc_6620_, sizeof(void*)*3, v_action_6592_);
lean_ctor_set_uint8(v_reuseFailAlloc_6620_, sizeof(void*)*3 + 1, v_wantsRebuild_6593_);
v___x_6616_ = v_reuseFailAlloc_6620_;
goto v_reusejp_6615_;
}
v_reusejp_6615_:
{
lean_object* v___x_6618_; 
if (v_isShared_6614_ == 0)
{
lean_ctor_set(v___x_6613_, 1, v___x_6616_);
v___x_6618_ = v___x_6613_;
goto v_reusejp_6617_;
}
else
{
lean_object* v_reuseFailAlloc_6619_; 
v_reuseFailAlloc_6619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6619_, 0, v_a_6610_);
lean_ctor_set(v_reuseFailAlloc_6619_, 1, v___x_6616_);
v___x_6618_ = v_reuseFailAlloc_6619_;
goto v_reusejp_6617_;
}
v_reusejp_6617_:
{
return v___x_6618_;
}
}
}
}
else
{
lean_object* v_a_6622_; lean_object* v_a_6623_; lean_object* v___x_6625_; uint8_t v_isShared_6626_; uint8_t v_isSharedCheck_6633_; 
v_a_6622_ = lean_ctor_get(v___x_6609_, 0);
v_a_6623_ = lean_ctor_get(v___x_6609_, 1);
v_isSharedCheck_6633_ = !lean_is_exclusive(v___x_6609_);
if (v_isSharedCheck_6633_ == 0)
{
v___x_6625_ = v___x_6609_;
v_isShared_6626_ = v_isSharedCheck_6633_;
goto v_resetjp_6624_;
}
else
{
lean_inc(v_a_6623_);
lean_inc(v_a_6622_);
lean_dec(v___x_6609_);
v___x_6625_ = lean_box(0);
v_isShared_6626_ = v_isSharedCheck_6633_;
goto v_resetjp_6624_;
}
v_resetjp_6624_:
{
lean_object* v___x_6628_; 
if (v_isShared_6598_ == 0)
{
lean_ctor_set(v___x_6597_, 0, v_a_6623_);
v___x_6628_ = v___x_6597_;
goto v_reusejp_6627_;
}
else
{
lean_object* v_reuseFailAlloc_6632_; 
v_reuseFailAlloc_6632_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6632_, 0, v_a_6623_);
lean_ctor_set(v_reuseFailAlloc_6632_, 1, v_trace_6594_);
lean_ctor_set(v_reuseFailAlloc_6632_, 2, v_buildTime_6595_);
lean_ctor_set_uint8(v_reuseFailAlloc_6632_, sizeof(void*)*3, v_action_6592_);
lean_ctor_set_uint8(v_reuseFailAlloc_6632_, sizeof(void*)*3 + 1, v_wantsRebuild_6593_);
v___x_6628_ = v_reuseFailAlloc_6632_;
goto v_reusejp_6627_;
}
v_reusejp_6627_:
{
lean_object* v___x_6630_; 
if (v_isShared_6626_ == 0)
{
lean_ctor_set(v___x_6625_, 1, v___x_6628_);
v___x_6630_ = v___x_6625_;
goto v_reusejp_6629_;
}
else
{
lean_object* v_reuseFailAlloc_6631_; 
v_reuseFailAlloc_6631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6631_, 0, v_a_6622_);
lean_ctor_set(v_reuseFailAlloc_6631_, 1, v___x_6628_);
v___x_6630_ = v_reuseFailAlloc_6631_;
goto v_reusejp_6629_;
}
v_reusejp_6629_:
{
return v___x_6630_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO___lam__0___boxed(lean_object* v_weakArgs_6638_, lean_object* v_traceArgs_6639_, lean_object* v_oFile_6640_, lean_object* v_srcFile_6641_, lean_object* v_leanIncludeDir_x3f_6642_, lean_object* v___y_6643_, lean_object* v___y_6644_, lean_object* v___y_6645_, lean_object* v___y_6646_, lean_object* v___y_6647_, lean_object* v___y_6648_, lean_object* v___y_6649_){
_start:
{
lean_object* v_res_6650_; 
v_res_6650_ = l_Lake_Internal_buildLeanO___lam__0(v_weakArgs_6638_, v_traceArgs_6639_, v_oFile_6640_, v_srcFile_6641_, v_leanIncludeDir_x3f_6642_, v___y_6643_, v___y_6644_, v___y_6645_, v___y_6646_, v___y_6647_, v___y_6648_);
lean_dec_ref(v___y_6647_);
lean_dec(v___y_6646_);
lean_dec(v___y_6645_);
lean_dec(v___y_6644_);
lean_dec_ref(v___y_6643_);
lean_dec_ref(v_traceArgs_6639_);
lean_dec_ref(v_weakArgs_6638_);
return v_res_6650_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_Internal_buildLeanO_spec__0_spec__0(lean_object* v_x_6652_, lean_object* v_x_6653_){
_start:
{
if (lean_obj_tag(v_x_6653_) == 0)
{
return v_x_6652_;
}
else
{
lean_object* v_head_6654_; lean_object* v_tail_6655_; lean_object* v___x_6656_; lean_object* v___x_6657_; lean_object* v___x_6658_; 
v_head_6654_ = lean_ctor_get(v_x_6653_, 0);
v_tail_6655_ = lean_ctor_get(v_x_6653_, 1);
v___x_6656_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lake_Internal_buildLeanO_spec__0_spec__0___closed__0));
v___x_6657_ = lean_string_append(v_x_6652_, v___x_6656_);
v___x_6658_ = lean_string_append(v___x_6657_, v_head_6654_);
v_x_6652_ = v___x_6658_;
v_x_6653_ = v_tail_6655_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lake_Internal_buildLeanO_spec__0_spec__0___boxed(lean_object* v_x_6660_, lean_object* v_x_6661_){
_start:
{
lean_object* v_res_6662_; 
v_res_6662_ = l_List_foldl___at___00List_toString___at___00Lake_Internal_buildLeanO_spec__0_spec__0(v_x_6660_, v_x_6661_);
lean_dec(v_x_6661_);
return v_res_6662_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_Internal_buildLeanO_spec__0(lean_object* v_x_6666_){
_start:
{
if (lean_obj_tag(v_x_6666_) == 0)
{
lean_object* v___x_6667_; 
v___x_6667_ = ((lean_object*)(l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__0));
return v___x_6667_;
}
else
{
lean_object* v_tail_6668_; 
v_tail_6668_ = lean_ctor_get(v_x_6666_, 1);
if (lean_obj_tag(v_tail_6668_) == 0)
{
lean_object* v_head_6669_; lean_object* v___x_6670_; lean_object* v___x_6671_; lean_object* v___x_6672_; lean_object* v___x_6673_; 
v_head_6669_ = lean_ctor_get(v_x_6666_, 0);
v___x_6670_ = ((lean_object*)(l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__1));
v___x_6671_ = lean_string_append(v___x_6670_, v_head_6669_);
v___x_6672_ = ((lean_object*)(l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__2));
v___x_6673_ = lean_string_append(v___x_6671_, v___x_6672_);
return v___x_6673_;
}
else
{
lean_object* v_head_6674_; lean_object* v___x_6675_; lean_object* v___x_6676_; lean_object* v___x_6677_; uint32_t v___x_6678_; lean_object* v___x_6679_; 
v_head_6674_ = lean_ctor_get(v_x_6666_, 0);
v___x_6675_ = ((lean_object*)(l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___closed__1));
v___x_6676_ = lean_string_append(v___x_6675_, v_head_6674_);
v___x_6677_ = l_List_foldl___at___00List_toString___at___00Lake_Internal_buildLeanO_spec__0_spec__0(v___x_6676_, v_tail_6668_);
v___x_6678_ = 93;
v___x_6679_ = lean_string_push(v___x_6677_, v___x_6678_);
return v___x_6679_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lake_Internal_buildLeanO_spec__0___boxed(lean_object* v_x_6680_){
_start:
{
lean_object* v_res_6681_; 
v_res_6681_ = l_List_toString___at___00Lake_Internal_buildLeanO_spec__0(v_x_6680_);
lean_dec(v_x_6680_);
return v_res_6681_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Internal_buildLeanO_spec__1(lean_object* v_as_6682_, size_t v_i_6683_, size_t v_stop_6684_, uint64_t v_b_6685_){
_start:
{
uint8_t v___x_6686_; 
v___x_6686_ = lean_usize_dec_eq(v_i_6683_, v_stop_6684_);
if (v___x_6686_ == 0)
{
lean_object* v___x_6687_; uint64_t v___x_6688_; uint64_t v___x_6689_; uint64_t v___x_6690_; uint64_t v___x_6691_; size_t v___x_6692_; size_t v___x_6693_; 
v___x_6687_ = lean_array_uget_borrowed(v_as_6682_, v_i_6683_);
v___x_6688_ = l_Lake_Hash_nil;
v___x_6689_ = lean_string_hash(v___x_6687_);
v___x_6690_ = lean_uint64_mix_hash(v___x_6688_, v___x_6689_);
v___x_6691_ = lean_uint64_mix_hash(v_b_6685_, v___x_6690_);
v___x_6692_ = ((size_t)1ULL);
v___x_6693_ = lean_usize_add(v_i_6683_, v___x_6692_);
v_i_6683_ = v___x_6693_;
v_b_6685_ = v___x_6691_;
goto _start;
}
else
{
return v_b_6685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Internal_buildLeanO_spec__1___boxed(lean_object* v_as_6695_, lean_object* v_i_6696_, lean_object* v_stop_6697_, lean_object* v_b_6698_){
_start:
{
size_t v_i_boxed_6699_; size_t v_stop_boxed_6700_; uint64_t v_b_boxed_6701_; uint64_t v_res_6702_; lean_object* v_r_6703_; 
v_i_boxed_6699_ = lean_unbox_usize(v_i_6696_);
lean_dec(v_i_6696_);
v_stop_boxed_6700_ = lean_unbox_usize(v_stop_6697_);
lean_dec(v_stop_6697_);
v_b_boxed_6701_ = lean_unbox_uint64(v_b_6698_);
lean_dec_ref(v_b_6698_);
v_res_6702_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Internal_buildLeanO_spec__1(v_as_6695_, v_i_boxed_6699_, v_stop_boxed_6700_, v_b_boxed_6701_);
lean_dec_ref(v_as_6695_);
v_r_6703_ = lean_box_uint64(v_res_6702_);
return v_r_6703_;
}
}
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO___lam__1(lean_object* v_weakArgs_6704_, lean_object* v_traceArgs_6705_, lean_object* v_oFile_6706_, lean_object* v_leanIncludeDir_x3f_6707_, lean_object* v_srcFile_6708_, lean_object* v___y_6709_, lean_object* v___y_6710_, lean_object* v___y_6711_, lean_object* v___y_6712_, lean_object* v___y_6713_, lean_object* v___y_6714_){
_start:
{
lean_object* v_log_6716_; uint8_t v_action_6717_; uint8_t v_wantsRebuild_6718_; lean_object* v_trace_6719_; lean_object* v_buildTime_6720_; lean_object* v___x_6722_; uint8_t v_isShared_6723_; uint8_t v_isSharedCheck_6804_; 
v_log_6716_ = lean_ctor_get(v___y_6714_, 0);
v_action_6717_ = lean_ctor_get_uint8(v___y_6714_, sizeof(void*)*3);
v_wantsRebuild_6718_ = lean_ctor_get_uint8(v___y_6714_, sizeof(void*)*3 + 1);
v_trace_6719_ = lean_ctor_get(v___y_6714_, 1);
v_buildTime_6720_ = lean_ctor_get(v___y_6714_, 2);
v_isSharedCheck_6804_ = !lean_is_exclusive(v___y_6714_);
if (v_isSharedCheck_6804_ == 0)
{
v___x_6722_ = v___y_6714_;
v_isShared_6723_ = v_isSharedCheck_6804_;
goto v_resetjp_6721_;
}
else
{
lean_inc(v_buildTime_6720_);
lean_inc(v_trace_6719_);
lean_inc(v_log_6716_);
lean_dec(v___y_6714_);
v___x_6722_ = lean_box(0);
v_isShared_6723_ = v_isSharedCheck_6804_;
goto v_resetjp_6721_;
}
v_resetjp_6721_:
{
lean_object* v_leanTrace_6724_; lean_object* v___f_6725_; lean_object* v___y_6727_; lean_object* v___y_6728_; lean_object* v___y_6729_; lean_object* v___y_6730_; lean_object* v___y_6731_; lean_object* v___y_6732_; uint64_t v___y_6733_; lean_object* v___y_6781_; lean_object* v___y_6782_; lean_object* v___y_6783_; lean_object* v___y_6784_; lean_object* v___y_6785_; lean_object* v___y_6786_; lean_object* v___x_6794_; 
v_leanTrace_6724_ = lean_ctor_get(v___y_6713_, 2);
lean_inc(v_leanIncludeDir_x3f_6707_);
lean_inc_ref(v_oFile_6706_);
lean_inc_ref(v_traceArgs_6705_);
v___f_6725_ = lean_alloc_closure((void*)(l_Lake_Internal_buildLeanO___lam__0___boxed), 12, 5);
lean_closure_set(v___f_6725_, 0, v_weakArgs_6704_);
lean_closure_set(v___f_6725_, 1, v_traceArgs_6705_);
lean_closure_set(v___f_6725_, 2, v_oFile_6706_);
lean_closure_set(v___f_6725_, 3, v_srcFile_6708_);
lean_closure_set(v___f_6725_, 4, v_leanIncludeDir_x3f_6707_);
lean_inc_ref(v_leanTrace_6724_);
v___x_6794_ = l_Lake_BuildTrace_mix(v_trace_6719_, v_leanTrace_6724_);
if (lean_obj_tag(v_leanIncludeDir_x3f_6707_) == 1)
{
lean_object* v_val_6795_; lean_object* v_snd_6796_; lean_object* v___x_6797_; lean_object* v___x_6799_; 
v_val_6795_ = lean_ctor_get(v_leanIncludeDir_x3f_6707_, 0);
lean_inc(v_val_6795_);
lean_dec_ref_known(v_leanIncludeDir_x3f_6707_, 1);
v_snd_6796_ = lean_ctor_get(v_val_6795_, 1);
lean_inc(v_snd_6796_);
lean_dec(v_val_6795_);
v___x_6797_ = l_Lake_BuildTrace_mix(v___x_6794_, v_snd_6796_);
if (v_isShared_6723_ == 0)
{
lean_ctor_set(v___x_6722_, 1, v___x_6797_);
v___x_6799_ = v___x_6722_;
goto v_reusejp_6798_;
}
else
{
lean_object* v_reuseFailAlloc_6800_; 
v_reuseFailAlloc_6800_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6800_, 0, v_log_6716_);
lean_ctor_set(v_reuseFailAlloc_6800_, 1, v___x_6797_);
lean_ctor_set(v_reuseFailAlloc_6800_, 2, v_buildTime_6720_);
lean_ctor_set_uint8(v_reuseFailAlloc_6800_, sizeof(void*)*3, v_action_6717_);
lean_ctor_set_uint8(v_reuseFailAlloc_6800_, sizeof(void*)*3 + 1, v_wantsRebuild_6718_);
v___x_6799_ = v_reuseFailAlloc_6800_;
goto v_reusejp_6798_;
}
v_reusejp_6798_:
{
v___y_6781_ = v___y_6709_;
v___y_6782_ = v___y_6710_;
v___y_6783_ = v___y_6711_;
v___y_6784_ = v___y_6712_;
v___y_6785_ = v___y_6713_;
v___y_6786_ = v___x_6799_;
goto v___jp_6780_;
}
}
else
{
lean_object* v___x_6802_; 
lean_dec(v_leanIncludeDir_x3f_6707_);
if (v_isShared_6723_ == 0)
{
lean_ctor_set(v___x_6722_, 1, v___x_6794_);
v___x_6802_ = v___x_6722_;
goto v_reusejp_6801_;
}
else
{
lean_object* v_reuseFailAlloc_6803_; 
v_reuseFailAlloc_6803_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6803_, 0, v_log_6716_);
lean_ctor_set(v_reuseFailAlloc_6803_, 1, v___x_6794_);
lean_ctor_set(v_reuseFailAlloc_6803_, 2, v_buildTime_6720_);
lean_ctor_set_uint8(v_reuseFailAlloc_6803_, sizeof(void*)*3, v_action_6717_);
lean_ctor_set_uint8(v_reuseFailAlloc_6803_, sizeof(void*)*3 + 1, v_wantsRebuild_6718_);
v___x_6802_ = v_reuseFailAlloc_6803_;
goto v_reusejp_6801_;
}
v_reusejp_6801_:
{
v___y_6781_ = v___y_6709_;
v___y_6782_ = v___y_6710_;
v___y_6783_ = v___y_6711_;
v___y_6784_ = v___y_6712_;
v___y_6785_ = v___y_6713_;
v___y_6786_ = v___x_6802_;
goto v___jp_6780_;
}
}
v___jp_6726_:
{
lean_object* v_log_6734_; uint8_t v_action_6735_; uint8_t v_wantsRebuild_6736_; lean_object* v_trace_6737_; lean_object* v_buildTime_6738_; lean_object* v___x_6740_; uint8_t v_isShared_6741_; uint8_t v_isSharedCheck_6779_; 
v_log_6734_ = lean_ctor_get(v___y_6731_, 0);
v_action_6735_ = lean_ctor_get_uint8(v___y_6731_, sizeof(void*)*3);
v_wantsRebuild_6736_ = lean_ctor_get_uint8(v___y_6731_, sizeof(void*)*3 + 1);
v_trace_6737_ = lean_ctor_get(v___y_6731_, 1);
v_buildTime_6738_ = lean_ctor_get(v___y_6731_, 2);
v_isSharedCheck_6779_ = !lean_is_exclusive(v___y_6731_);
if (v_isSharedCheck_6779_ == 0)
{
v___x_6740_ = v___y_6731_;
v_isShared_6741_ = v_isSharedCheck_6779_;
goto v_resetjp_6739_;
}
else
{
lean_inc(v_buildTime_6738_);
lean_inc(v_trace_6737_);
lean_inc(v_log_6734_);
lean_dec(v___y_6731_);
v___x_6740_ = lean_box(0);
v_isShared_6741_ = v_isSharedCheck_6779_;
goto v_resetjp_6739_;
}
v_resetjp_6739_:
{
lean_object* v___x_6742_; lean_object* v___x_6743_; lean_object* v___x_6744_; lean_object* v___x_6745_; lean_object* v___x_6746_; lean_object* v___x_6747_; lean_object* v___x_6748_; lean_object* v___x_6749_; lean_object* v___x_6750_; lean_object* v___x_6751_; lean_object* v___x_6752_; lean_object* v___x_6753_; lean_object* v___x_6755_; 
v___x_6742_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_6743_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_6744_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
v___x_6745_ = lean_array_to_list(v_traceArgs_6705_);
v___x_6746_ = l_List_toString___at___00Lake_Internal_buildLeanO_spec__0(v___x_6745_);
lean_dec(v___x_6745_);
v___x_6747_ = lean_string_append(v___x_6744_, v___x_6746_);
lean_dec_ref(v___x_6746_);
v___x_6748_ = lean_string_append(v___x_6743_, v___x_6747_);
lean_dec_ref(v___x_6747_);
v___x_6749_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_6750_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_6750_, 0, v___x_6748_);
lean_ctor_set(v___x_6750_, 1, v___x_6742_);
lean_ctor_set(v___x_6750_, 2, v___x_6749_);
lean_ctor_set_uint64(v___x_6750_, sizeof(void*)*3, v___y_6733_);
v___x_6751_ = l_Lake_BuildTrace_mix(v_trace_6737_, v___x_6750_);
v___x_6752_ = l_Lake_platformTrace;
v___x_6753_ = l_Lake_BuildTrace_mix(v___x_6751_, v___x_6752_);
if (v_isShared_6741_ == 0)
{
lean_ctor_set(v___x_6740_, 1, v___x_6753_);
v___x_6755_ = v___x_6740_;
goto v_reusejp_6754_;
}
else
{
lean_object* v_reuseFailAlloc_6778_; 
v_reuseFailAlloc_6778_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6778_, 0, v_log_6734_);
lean_ctor_set(v_reuseFailAlloc_6778_, 1, v___x_6753_);
lean_ctor_set(v_reuseFailAlloc_6778_, 2, v_buildTime_6738_);
lean_ctor_set_uint8(v_reuseFailAlloc_6778_, sizeof(void*)*3, v_action_6735_);
lean_ctor_set_uint8(v_reuseFailAlloc_6778_, sizeof(void*)*3 + 1, v_wantsRebuild_6736_);
v___x_6755_ = v_reuseFailAlloc_6778_;
goto v_reusejp_6754_;
}
v_reusejp_6754_:
{
uint8_t v___x_6756_; lean_object* v___x_6757_; lean_object* v___x_6758_; 
v___x_6756_ = 0;
v___x_6757_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__2));
v___x_6758_ = l_Lake_buildArtifactUnlessUpToDate(v_oFile_6706_, v___f_6725_, v___x_6756_, v___x_6757_, v___x_6756_, v___x_6756_, v___x_6756_, v___y_6732_, v___y_6730_, v___y_6727_, v___y_6729_, v___y_6728_, v___x_6755_);
if (lean_obj_tag(v___x_6758_) == 0)
{
lean_object* v_a_6759_; lean_object* v_a_6760_; lean_object* v___x_6762_; uint8_t v_isShared_6763_; uint8_t v_isSharedCheck_6768_; 
v_a_6759_ = lean_ctor_get(v___x_6758_, 0);
v_a_6760_ = lean_ctor_get(v___x_6758_, 1);
v_isSharedCheck_6768_ = !lean_is_exclusive(v___x_6758_);
if (v_isSharedCheck_6768_ == 0)
{
v___x_6762_ = v___x_6758_;
v_isShared_6763_ = v_isSharedCheck_6768_;
goto v_resetjp_6761_;
}
else
{
lean_inc(v_a_6760_);
lean_inc(v_a_6759_);
lean_dec(v___x_6758_);
v___x_6762_ = lean_box(0);
v_isShared_6763_ = v_isSharedCheck_6768_;
goto v_resetjp_6761_;
}
v_resetjp_6761_:
{
lean_object* v_path_6764_; lean_object* v___x_6766_; 
v_path_6764_ = lean_ctor_get(v_a_6759_, 1);
lean_inc_ref(v_path_6764_);
lean_dec(v_a_6759_);
if (v_isShared_6763_ == 0)
{
lean_ctor_set(v___x_6762_, 0, v_path_6764_);
v___x_6766_ = v___x_6762_;
goto v_reusejp_6765_;
}
else
{
lean_object* v_reuseFailAlloc_6767_; 
v_reuseFailAlloc_6767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6767_, 0, v_path_6764_);
lean_ctor_set(v_reuseFailAlloc_6767_, 1, v_a_6760_);
v___x_6766_ = v_reuseFailAlloc_6767_;
goto v_reusejp_6765_;
}
v_reusejp_6765_:
{
return v___x_6766_;
}
}
}
else
{
lean_object* v_a_6769_; lean_object* v_a_6770_; lean_object* v___x_6772_; uint8_t v_isShared_6773_; uint8_t v_isSharedCheck_6777_; 
v_a_6769_ = lean_ctor_get(v___x_6758_, 0);
v_a_6770_ = lean_ctor_get(v___x_6758_, 1);
v_isSharedCheck_6777_ = !lean_is_exclusive(v___x_6758_);
if (v_isSharedCheck_6777_ == 0)
{
v___x_6772_ = v___x_6758_;
v_isShared_6773_ = v_isSharedCheck_6777_;
goto v_resetjp_6771_;
}
else
{
lean_inc(v_a_6770_);
lean_inc(v_a_6769_);
lean_dec(v___x_6758_);
v___x_6772_ = lean_box(0);
v_isShared_6773_ = v_isSharedCheck_6777_;
goto v_resetjp_6771_;
}
v_resetjp_6771_:
{
lean_object* v___x_6775_; 
if (v_isShared_6773_ == 0)
{
v___x_6775_ = v___x_6772_;
goto v_reusejp_6774_;
}
else
{
lean_object* v_reuseFailAlloc_6776_; 
v_reuseFailAlloc_6776_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6776_, 0, v_a_6769_);
lean_ctor_set(v_reuseFailAlloc_6776_, 1, v_a_6770_);
v___x_6775_ = v_reuseFailAlloc_6776_;
goto v_reusejp_6774_;
}
v_reusejp_6774_:
{
return v___x_6775_;
}
}
}
}
}
}
v___jp_6780_:
{
uint64_t v___x_6787_; lean_object* v___x_6788_; lean_object* v___x_6789_; uint8_t v___x_6790_; 
v___x_6787_ = l_Lake_Hash_nil;
v___x_6788_ = lean_unsigned_to_nat(0u);
v___x_6789_ = lean_array_get_size(v_traceArgs_6705_);
v___x_6790_ = lean_nat_dec_lt(v___x_6788_, v___x_6789_);
if (v___x_6790_ == 0)
{
v___y_6727_ = v___y_6783_;
v___y_6728_ = v___y_6785_;
v___y_6729_ = v___y_6784_;
v___y_6730_ = v___y_6782_;
v___y_6731_ = v___y_6786_;
v___y_6732_ = v___y_6781_;
v___y_6733_ = v___x_6787_;
goto v___jp_6726_;
}
else
{
size_t v___x_6791_; size_t v___x_6792_; uint64_t v___x_6793_; 
v___x_6791_ = ((size_t)0ULL);
v___x_6792_ = lean_usize_of_nat(v___x_6789_);
v___x_6793_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Internal_buildLeanO_spec__1(v_traceArgs_6705_, v___x_6791_, v___x_6792_, v___x_6787_);
v___y_6727_ = v___y_6783_;
v___y_6728_ = v___y_6785_;
v___y_6729_ = v___y_6784_;
v___y_6730_ = v___y_6782_;
v___y_6731_ = v___y_6786_;
v___y_6732_ = v___y_6781_;
v___y_6733_ = v___x_6793_;
goto v___jp_6726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO___lam__1___boxed(lean_object* v_weakArgs_6805_, lean_object* v_traceArgs_6806_, lean_object* v_oFile_6807_, lean_object* v_leanIncludeDir_x3f_6808_, lean_object* v_srcFile_6809_, lean_object* v___y_6810_, lean_object* v___y_6811_, lean_object* v___y_6812_, lean_object* v___y_6813_, lean_object* v___y_6814_, lean_object* v___y_6815_, lean_object* v___y_6816_){
_start:
{
lean_object* v_res_6817_; 
v_res_6817_ = l_Lake_Internal_buildLeanO___lam__1(v_weakArgs_6805_, v_traceArgs_6806_, v_oFile_6807_, v_leanIncludeDir_x3f_6808_, v_srcFile_6809_, v___y_6810_, v___y_6811_, v___y_6812_, v___y_6813_, v___y_6814_, v___y_6815_);
lean_dec_ref(v___y_6814_);
lean_dec(v___y_6813_);
lean_dec(v___y_6812_);
lean_dec(v___y_6811_);
return v_res_6817_;
}
}
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO(lean_object* v_oFile_6818_, lean_object* v_srcJob_6819_, lean_object* v_weakArgs_6820_, lean_object* v_traceArgs_6821_, lean_object* v_leanIncludeDir_x3f_6822_, lean_object* v___y_6823_, lean_object* v___y_6824_, lean_object* v___y_6825_, lean_object* v___y_6826_, lean_object* v___y_6827_, lean_object* v___y_6828_){
_start:
{
lean_object* v___f_6830_; lean_object* v___x_6831_; lean_object* v___x_6832_; uint8_t v___x_6833_; lean_object* v___x_6834_; 
v___f_6830_ = lean_alloc_closure((void*)(l_Lake_Internal_buildLeanO___lam__1___boxed), 12, 4);
lean_closure_set(v___f_6830_, 0, v_weakArgs_6820_);
lean_closure_set(v___f_6830_, 1, v_traceArgs_6821_);
lean_closure_set(v___f_6830_, 2, v_oFile_6818_);
lean_closure_set(v___f_6830_, 3, v_leanIncludeDir_x3f_6822_);
v___x_6831_ = l_Lake_instDataKindFilePath;
v___x_6832_ = lean_unsigned_to_nat(0u);
v___x_6833_ = 0;
v___x_6834_ = l_Lake_Job_mapM___redArg(v___x_6831_, v_srcJob_6819_, v___f_6830_, v___x_6832_, v___x_6833_, v___y_6823_, v___y_6824_, v___y_6825_, v___y_6826_, v___y_6827_, v___y_6828_);
return v___x_6834_;
}
}
LEAN_EXPORT lean_object* l_Lake_Internal_buildLeanO___boxed(lean_object* v_oFile_6835_, lean_object* v_srcJob_6836_, lean_object* v_weakArgs_6837_, lean_object* v_traceArgs_6838_, lean_object* v_leanIncludeDir_x3f_6839_, lean_object* v___y_6840_, lean_object* v___y_6841_, lean_object* v___y_6842_, lean_object* v___y_6843_, lean_object* v___y_6844_, lean_object* v___y_6845_, lean_object* v___y_6846_){
_start:
{
lean_object* v_res_6847_; 
v_res_6847_ = l_Lake_Internal_buildLeanO(v_oFile_6835_, v_srcJob_6836_, v_weakArgs_6837_, v_traceArgs_6838_, v_leanIncludeDir_x3f_6839_, v___y_6840_, v___y_6841_, v___y_6842_, v___y_6843_, v___y_6844_, v___y_6845_);
lean_dec_ref(v___y_6845_);
lean_dec_ref(v___y_6844_);
lean_dec(v___y_6843_);
lean_dec(v___y_6842_);
lean_dec(v___y_6841_);
return v_res_6847_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO(lean_object* v_oFile_6848_, lean_object* v_srcJob_6849_, lean_object* v_weakArgs_6850_, lean_object* v_traceArgs_6851_, lean_object* v___y_6852_, lean_object* v___y_6853_, lean_object* v___y_6854_, lean_object* v___y_6855_, lean_object* v___y_6856_, lean_object* v___y_6857_){
_start:
{
lean_object* v___x_6859_; lean_object* v___x_6860_; 
v___x_6859_ = lean_box(0);
v___x_6860_ = l_Lake_Internal_buildLeanO(v_oFile_6848_, v_srcJob_6849_, v_weakArgs_6850_, v_traceArgs_6851_, v___x_6859_, v___y_6852_, v___y_6853_, v___y_6854_, v___y_6855_, v___y_6856_, v___y_6857_);
return v___x_6860_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanO___boxed(lean_object* v_oFile_6861_, lean_object* v_srcJob_6862_, lean_object* v_weakArgs_6863_, lean_object* v_traceArgs_6864_, lean_object* v___y_6865_, lean_object* v___y_6866_, lean_object* v___y_6867_, lean_object* v___y_6868_, lean_object* v___y_6869_, lean_object* v___y_6870_, lean_object* v___y_6871_){
_start:
{
lean_object* v_res_6872_; 
v_res_6872_ = l_Lake_buildLeanO(v_oFile_6861_, v_srcJob_6862_, v_weakArgs_6863_, v_traceArgs_6864_, v___y_6865_, v___y_6866_, v___y_6867_, v___y_6868_, v___y_6869_, v___y_6870_);
lean_dec_ref(v___y_6870_);
lean_dec_ref(v___y_6869_);
lean_dec(v___y_6868_);
lean_dec(v___y_6867_);
lean_dec(v___y_6866_);
return v_res_6872_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0(lean_object* v_libFile_6873_, lean_object* v_oFiles_6874_, uint8_t v_thin_6875_, lean_object* v___y_6876_, lean_object* v___y_6877_, lean_object* v___y_6878_, lean_object* v___y_6879_, lean_object* v___y_6880_, lean_object* v___y_6881_){
_start:
{
lean_object* v_toContext_6883_; lean_object* v_lakeEnv_6884_; lean_object* v_lean_6885_; lean_object* v_log_6886_; uint8_t v_action_6887_; uint8_t v_wantsRebuild_6888_; lean_object* v_trace_6889_; lean_object* v_buildTime_6890_; lean_object* v___x_6892_; uint8_t v_isShared_6893_; uint8_t v_isSharedCheck_6920_; 
v_toContext_6883_ = lean_ctor_get(v___y_6880_, 1);
v_lakeEnv_6884_ = lean_ctor_get(v_toContext_6883_, 0);
v_lean_6885_ = lean_ctor_get(v_lakeEnv_6884_, 1);
v_log_6886_ = lean_ctor_get(v___y_6881_, 0);
v_action_6887_ = lean_ctor_get_uint8(v___y_6881_, sizeof(void*)*3);
v_wantsRebuild_6888_ = lean_ctor_get_uint8(v___y_6881_, sizeof(void*)*3 + 1);
v_trace_6889_ = lean_ctor_get(v___y_6881_, 1);
v_buildTime_6890_ = lean_ctor_get(v___y_6881_, 2);
v_isSharedCheck_6920_ = !lean_is_exclusive(v___y_6881_);
if (v_isSharedCheck_6920_ == 0)
{
v___x_6892_ = v___y_6881_;
v_isShared_6893_ = v_isSharedCheck_6920_;
goto v_resetjp_6891_;
}
else
{
lean_inc(v_buildTime_6890_);
lean_inc(v_trace_6889_);
lean_inc(v_log_6886_);
lean_dec(v___y_6881_);
v___x_6892_ = lean_box(0);
v_isShared_6893_ = v_isSharedCheck_6920_;
goto v_resetjp_6891_;
}
v_resetjp_6891_:
{
lean_object* v_ar_6894_; lean_object* v___x_6895_; 
v_ar_6894_ = lean_ctor_get(v_lean_6885_, 13);
lean_inc_ref(v_ar_6894_);
v___x_6895_ = l_Lake_compileStaticLib(v_libFile_6873_, v_oFiles_6874_, v_ar_6894_, v_thin_6875_, v_log_6886_);
if (lean_obj_tag(v___x_6895_) == 0)
{
lean_object* v_a_6896_; lean_object* v_a_6897_; lean_object* v___x_6899_; uint8_t v_isShared_6900_; uint8_t v_isSharedCheck_6907_; 
v_a_6896_ = lean_ctor_get(v___x_6895_, 0);
v_a_6897_ = lean_ctor_get(v___x_6895_, 1);
v_isSharedCheck_6907_ = !lean_is_exclusive(v___x_6895_);
if (v_isSharedCheck_6907_ == 0)
{
v___x_6899_ = v___x_6895_;
v_isShared_6900_ = v_isSharedCheck_6907_;
goto v_resetjp_6898_;
}
else
{
lean_inc(v_a_6897_);
lean_inc(v_a_6896_);
lean_dec(v___x_6895_);
v___x_6899_ = lean_box(0);
v_isShared_6900_ = v_isSharedCheck_6907_;
goto v_resetjp_6898_;
}
v_resetjp_6898_:
{
lean_object* v___x_6902_; 
if (v_isShared_6893_ == 0)
{
lean_ctor_set(v___x_6892_, 0, v_a_6897_);
v___x_6902_ = v___x_6892_;
goto v_reusejp_6901_;
}
else
{
lean_object* v_reuseFailAlloc_6906_; 
v_reuseFailAlloc_6906_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6906_, 0, v_a_6897_);
lean_ctor_set(v_reuseFailAlloc_6906_, 1, v_trace_6889_);
lean_ctor_set(v_reuseFailAlloc_6906_, 2, v_buildTime_6890_);
lean_ctor_set_uint8(v_reuseFailAlloc_6906_, sizeof(void*)*3, v_action_6887_);
lean_ctor_set_uint8(v_reuseFailAlloc_6906_, sizeof(void*)*3 + 1, v_wantsRebuild_6888_);
v___x_6902_ = v_reuseFailAlloc_6906_;
goto v_reusejp_6901_;
}
v_reusejp_6901_:
{
lean_object* v___x_6904_; 
if (v_isShared_6900_ == 0)
{
lean_ctor_set(v___x_6899_, 1, v___x_6902_);
v___x_6904_ = v___x_6899_;
goto v_reusejp_6903_;
}
else
{
lean_object* v_reuseFailAlloc_6905_; 
v_reuseFailAlloc_6905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6905_, 0, v_a_6896_);
lean_ctor_set(v_reuseFailAlloc_6905_, 1, v___x_6902_);
v___x_6904_ = v_reuseFailAlloc_6905_;
goto v_reusejp_6903_;
}
v_reusejp_6903_:
{
return v___x_6904_;
}
}
}
}
else
{
lean_object* v_a_6908_; lean_object* v_a_6909_; lean_object* v___x_6911_; uint8_t v_isShared_6912_; uint8_t v_isSharedCheck_6919_; 
v_a_6908_ = lean_ctor_get(v___x_6895_, 0);
v_a_6909_ = lean_ctor_get(v___x_6895_, 1);
v_isSharedCheck_6919_ = !lean_is_exclusive(v___x_6895_);
if (v_isSharedCheck_6919_ == 0)
{
v___x_6911_ = v___x_6895_;
v_isShared_6912_ = v_isSharedCheck_6919_;
goto v_resetjp_6910_;
}
else
{
lean_inc(v_a_6909_);
lean_inc(v_a_6908_);
lean_dec(v___x_6895_);
v___x_6911_ = lean_box(0);
v_isShared_6912_ = v_isSharedCheck_6919_;
goto v_resetjp_6910_;
}
v_resetjp_6910_:
{
lean_object* v___x_6914_; 
if (v_isShared_6893_ == 0)
{
lean_ctor_set(v___x_6892_, 0, v_a_6909_);
v___x_6914_ = v___x_6892_;
goto v_reusejp_6913_;
}
else
{
lean_object* v_reuseFailAlloc_6918_; 
v_reuseFailAlloc_6918_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_6918_, 0, v_a_6909_);
lean_ctor_set(v_reuseFailAlloc_6918_, 1, v_trace_6889_);
lean_ctor_set(v_reuseFailAlloc_6918_, 2, v_buildTime_6890_);
lean_ctor_set_uint8(v_reuseFailAlloc_6918_, sizeof(void*)*3, v_action_6887_);
lean_ctor_set_uint8(v_reuseFailAlloc_6918_, sizeof(void*)*3 + 1, v_wantsRebuild_6888_);
v___x_6914_ = v_reuseFailAlloc_6918_;
goto v_reusejp_6913_;
}
v_reusejp_6913_:
{
lean_object* v___x_6916_; 
if (v_isShared_6912_ == 0)
{
lean_ctor_set(v___x_6911_, 1, v___x_6914_);
v___x_6916_ = v___x_6911_;
goto v_reusejp_6915_;
}
else
{
lean_object* v_reuseFailAlloc_6917_; 
v_reuseFailAlloc_6917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6917_, 0, v_a_6908_);
lean_ctor_set(v_reuseFailAlloc_6917_, 1, v___x_6914_);
v___x_6916_ = v_reuseFailAlloc_6917_;
goto v_reusejp_6915_;
}
v_reusejp_6915_:
{
return v___x_6916_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__0___boxed(lean_object* v_libFile_6921_, lean_object* v_oFiles_6922_, lean_object* v_thin_6923_, lean_object* v___y_6924_, lean_object* v___y_6925_, lean_object* v___y_6926_, lean_object* v___y_6927_, lean_object* v___y_6928_, lean_object* v___y_6929_, lean_object* v___y_6930_){
_start:
{
uint8_t v_thin_boxed_6931_; lean_object* v_res_6932_; 
v_thin_boxed_6931_ = lean_unbox(v_thin_6923_);
v_res_6932_ = l_Lake_buildStaticLib___lam__0(v_libFile_6921_, v_oFiles_6922_, v_thin_boxed_6931_, v___y_6924_, v___y_6925_, v___y_6926_, v___y_6927_, v___y_6928_, v___y_6929_);
lean_dec_ref(v___y_6928_);
lean_dec(v___y_6927_);
lean_dec(v___y_6926_);
lean_dec(v___y_6925_);
lean_dec_ref(v___y_6924_);
return v_res_6932_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1(lean_object* v_libFile_6934_, uint8_t v_thin_6935_, lean_object* v_oFiles_6936_, lean_object* v___y_6937_, lean_object* v___y_6938_, lean_object* v___y_6939_, lean_object* v___y_6940_, lean_object* v___y_6941_, lean_object* v___y_6942_){
_start:
{
lean_object* v___x_6944_; lean_object* v___f_6945_; uint8_t v___x_6946_; lean_object* v___x_6947_; uint8_t v___x_6948_; lean_object* v___x_6949_; 
v___x_6944_ = lean_box(v_thin_6935_);
lean_inc_ref(v_libFile_6934_);
v___f_6945_ = lean_alloc_closure((void*)(l_Lake_buildStaticLib___lam__0___boxed), 10, 3);
lean_closure_set(v___f_6945_, 0, v_libFile_6934_);
lean_closure_set(v___f_6945_, 1, v_oFiles_6936_);
lean_closure_set(v___f_6945_, 2, v___x_6944_);
v___x_6946_ = 0;
v___x_6947_ = ((lean_object*)(l_Lake_buildStaticLib___lam__1___closed__0));
v___x_6948_ = 1;
v___x_6949_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_6934_, v___f_6945_, v___x_6946_, v___x_6947_, v___x_6948_, v___x_6946_, v___x_6946_, v___y_6937_, v___y_6938_, v___y_6939_, v___y_6940_, v___y_6941_, v___y_6942_);
if (lean_obj_tag(v___x_6949_) == 0)
{
lean_object* v_a_6950_; lean_object* v_a_6951_; lean_object* v___x_6953_; uint8_t v_isShared_6954_; uint8_t v_isSharedCheck_6959_; 
v_a_6950_ = lean_ctor_get(v___x_6949_, 0);
v_a_6951_ = lean_ctor_get(v___x_6949_, 1);
v_isSharedCheck_6959_ = !lean_is_exclusive(v___x_6949_);
if (v_isSharedCheck_6959_ == 0)
{
v___x_6953_ = v___x_6949_;
v_isShared_6954_ = v_isSharedCheck_6959_;
goto v_resetjp_6952_;
}
else
{
lean_inc(v_a_6951_);
lean_inc(v_a_6950_);
lean_dec(v___x_6949_);
v___x_6953_ = lean_box(0);
v_isShared_6954_ = v_isSharedCheck_6959_;
goto v_resetjp_6952_;
}
v_resetjp_6952_:
{
lean_object* v_path_6955_; lean_object* v___x_6957_; 
v_path_6955_ = lean_ctor_get(v_a_6950_, 1);
lean_inc_ref(v_path_6955_);
lean_dec(v_a_6950_);
if (v_isShared_6954_ == 0)
{
lean_ctor_set(v___x_6953_, 0, v_path_6955_);
v___x_6957_ = v___x_6953_;
goto v_reusejp_6956_;
}
else
{
lean_object* v_reuseFailAlloc_6958_; 
v_reuseFailAlloc_6958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6958_, 0, v_path_6955_);
lean_ctor_set(v_reuseFailAlloc_6958_, 1, v_a_6951_);
v___x_6957_ = v_reuseFailAlloc_6958_;
goto v_reusejp_6956_;
}
v_reusejp_6956_:
{
return v___x_6957_;
}
}
}
else
{
lean_object* v_a_6960_; lean_object* v_a_6961_; lean_object* v___x_6963_; uint8_t v_isShared_6964_; uint8_t v_isSharedCheck_6968_; 
v_a_6960_ = lean_ctor_get(v___x_6949_, 0);
v_a_6961_ = lean_ctor_get(v___x_6949_, 1);
v_isSharedCheck_6968_ = !lean_is_exclusive(v___x_6949_);
if (v_isSharedCheck_6968_ == 0)
{
v___x_6963_ = v___x_6949_;
v_isShared_6964_ = v_isSharedCheck_6968_;
goto v_resetjp_6962_;
}
else
{
lean_inc(v_a_6961_);
lean_inc(v_a_6960_);
lean_dec(v___x_6949_);
v___x_6963_ = lean_box(0);
v_isShared_6964_ = v_isSharedCheck_6968_;
goto v_resetjp_6962_;
}
v_resetjp_6962_:
{
lean_object* v___x_6966_; 
if (v_isShared_6964_ == 0)
{
v___x_6966_ = v___x_6963_;
goto v_reusejp_6965_;
}
else
{
lean_object* v_reuseFailAlloc_6967_; 
v_reuseFailAlloc_6967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6967_, 0, v_a_6960_);
lean_ctor_set(v_reuseFailAlloc_6967_, 1, v_a_6961_);
v___x_6966_ = v_reuseFailAlloc_6967_;
goto v_reusejp_6965_;
}
v_reusejp_6965_:
{
return v___x_6966_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___lam__1___boxed(lean_object* v_libFile_6969_, lean_object* v_thin_6970_, lean_object* v_oFiles_6971_, lean_object* v___y_6972_, lean_object* v___y_6973_, lean_object* v___y_6974_, lean_object* v___y_6975_, lean_object* v___y_6976_, lean_object* v___y_6977_, lean_object* v___y_6978_){
_start:
{
uint8_t v_thin_boxed_6979_; lean_object* v_res_6980_; 
v_thin_boxed_6979_ = lean_unbox(v_thin_6970_);
v_res_6980_ = l_Lake_buildStaticLib___lam__1(v_libFile_6969_, v_thin_boxed_6979_, v_oFiles_6971_, v___y_6972_, v___y_6973_, v___y_6974_, v___y_6975_, v___y_6976_, v___y_6977_);
lean_dec_ref(v___y_6976_);
lean_dec(v___y_6975_);
lean_dec(v___y_6974_);
lean_dec(v___y_6973_);
return v_res_6980_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib(lean_object* v_libFile_6982_, lean_object* v_oFileJobs_6983_, uint8_t v_thin_6984_, lean_object* v___y_6985_, lean_object* v___y_6986_, lean_object* v___y_6987_, lean_object* v___y_6988_, lean_object* v___y_6989_, lean_object* v___y_6990_){
_start:
{
lean_object* v___x_6992_; lean_object* v___f_6993_; lean_object* v___x_6994_; lean_object* v___x_6995_; lean_object* v___x_6996_; lean_object* v___x_6997_; uint8_t v___x_6998_; lean_object* v___x_6999_; 
v___x_6992_ = lean_box(v_thin_6984_);
v___f_6993_ = lean_alloc_closure((void*)(l_Lake_buildStaticLib___lam__1___boxed), 10, 2);
lean_closure_set(v___f_6993_, 0, v_libFile_6982_);
lean_closure_set(v___f_6993_, 1, v___x_6992_);
v___x_6994_ = l_Lake_instDataKindFilePath;
v___x_6995_ = ((lean_object*)(l_Lake_buildStaticLib___closed__0));
v___x_6996_ = l_Lake_Job_collectArray___redArg(v_oFileJobs_6983_, v___x_6995_);
v___x_6997_ = lean_unsigned_to_nat(0u);
v___x_6998_ = 0;
v___x_6999_ = l_Lake_Job_mapM___redArg(v___x_6994_, v___x_6996_, v___f_6993_, v___x_6997_, v___x_6998_, v___y_6985_, v___y_6986_, v___y_6987_, v___y_6988_, v___y_6989_, v___y_6990_);
return v___x_6999_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildStaticLib___boxed(lean_object* v_libFile_7000_, lean_object* v_oFileJobs_7001_, lean_object* v_thin_7002_, lean_object* v___y_7003_, lean_object* v___y_7004_, lean_object* v___y_7005_, lean_object* v___y_7006_, lean_object* v___y_7007_, lean_object* v___y_7008_, lean_object* v___y_7009_){
_start:
{
uint8_t v_thin_boxed_7010_; lean_object* v_res_7011_; 
v_thin_boxed_7010_ = lean_unbox(v_thin_7002_);
v_res_7011_ = l_Lake_buildStaticLib(v_libFile_7000_, v_oFileJobs_7001_, v_thin_boxed_7010_, v___y_7003_, v___y_7004_, v___y_7005_, v___y_7006_, v___y_7007_, v___y_7008_);
lean_dec_ref(v___y_7008_);
lean_dec_ref(v___y_7007_);
lean_dec(v___y_7006_);
lean_dec(v___y_7005_);
lean_dec(v___y_7004_);
lean_dec_ref(v_oFileJobs_7001_);
return v_res_7011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(lean_object* v_as_7012_, size_t v_sz_7013_, size_t v_i_7014_, lean_object* v_b_7015_){
_start:
{
uint8_t v___x_7016_; 
v___x_7016_ = lean_usize_dec_lt(v_i_7014_, v_sz_7013_);
if (v___x_7016_ == 0)
{
return v_b_7015_;
}
else
{
lean_object* v_a_7017_; lean_object* v___x_7018_; size_t v___x_7019_; size_t v___x_7020_; 
v_a_7017_ = lean_array_uget_borrowed(v_as_7012_, v_i_7014_);
lean_inc(v_a_7017_);
v___x_7018_ = lean_array_push(v_b_7015_, v_a_7017_);
v___x_7019_ = ((size_t)1ULL);
v___x_7020_ = lean_usize_add(v_i_7014_, v___x_7019_);
v_i_7014_ = v___x_7020_;
v_b_7015_ = v___x_7018_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0___boxed(lean_object* v_as_7022_, lean_object* v_sz_7023_, lean_object* v_i_7024_, lean_object* v_b_7025_){
_start:
{
size_t v_sz_boxed_7026_; size_t v_i_boxed_7027_; lean_object* v_res_7028_; 
v_sz_boxed_7026_ = lean_unbox_usize(v_sz_7023_);
lean_dec(v_sz_7023_);
v_i_boxed_7027_ = lean_unbox_usize(v_i_7024_);
lean_dec(v_i_7024_);
v_res_7028_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(v_as_7022_, v_sz_boxed_7026_, v_i_boxed_7027_, v_b_7025_);
lean_dec_ref(v_as_7022_);
return v_res_7028_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(lean_object* v_as_7031_, size_t v_sz_7032_, size_t v_i_7033_, lean_object* v_b_7034_){
_start:
{
uint8_t v___x_7035_; 
v___x_7035_ = lean_usize_dec_lt(v_i_7033_, v_sz_7032_);
if (v___x_7035_ == 0)
{
return v_b_7034_;
}
else
{
lean_object* v_a_7036_; lean_object* v_args_7038_; lean_object* v___x_7046_; 
v_a_7036_ = lean_array_uget_borrowed(v_as_7031_, v_i_7033_);
lean_inc(v_a_7036_);
v___x_7046_ = l_Lake_Dynlib_dir_x3f(v_a_7036_);
if (lean_obj_tag(v___x_7046_) == 1)
{
lean_object* v_val_7047_; lean_object* v___x_7048_; lean_object* v___x_7049_; lean_object* v___x_7050_; 
v_val_7047_ = lean_ctor_get(v___x_7046_, 0);
lean_inc(v_val_7047_);
lean_dec_ref_known(v___x_7046_, 1);
v___x_7048_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1));
v___x_7049_ = lean_string_append(v___x_7048_, v_val_7047_);
lean_dec(v_val_7047_);
v___x_7050_ = lean_array_push(v_b_7034_, v___x_7049_);
v_args_7038_ = v___x_7050_;
goto v___jp_7037_;
}
else
{
lean_dec(v___x_7046_);
v_args_7038_ = v_b_7034_;
goto v___jp_7037_;
}
v___jp_7037_:
{
lean_object* v_name_7039_; lean_object* v___x_7040_; lean_object* v___x_7041_; lean_object* v___x_7042_; size_t v___x_7043_; size_t v___x_7044_; 
v_name_7039_ = lean_ctor_get(v_a_7036_, 1);
v___x_7040_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__0));
v___x_7041_ = lean_string_append(v___x_7040_, v_name_7039_);
v___x_7042_ = lean_array_push(v_args_7038_, v___x_7041_);
v___x_7043_ = ((size_t)1ULL);
v___x_7044_ = lean_usize_add(v_i_7033_, v___x_7043_);
v_i_7033_ = v___x_7044_;
v_b_7034_ = v___x_7042_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___boxed(lean_object* v_as_7051_, lean_object* v_sz_7052_, lean_object* v_i_7053_, lean_object* v_b_7054_){
_start:
{
size_t v_sz_boxed_7055_; size_t v_i_boxed_7056_; lean_object* v_res_7057_; 
v_sz_boxed_7055_ = lean_unbox_usize(v_sz_7052_);
lean_dec(v_sz_7052_);
v_i_boxed_7056_ = lean_unbox_usize(v_i_7053_);
lean_dec(v_i_7053_);
v_res_7057_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(v_as_7051_, v_sz_boxed_7055_, v_i_boxed_7056_, v_b_7054_);
lean_dec_ref(v_as_7051_);
return v_res_7057_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(lean_object* v_objs_7058_, lean_object* v_libs_7059_){
_start:
{
lean_object* v_args_7060_; size_t v_sz_7061_; size_t v___x_7062_; lean_object* v___x_7063_; size_t v_sz_7064_; lean_object* v___x_7065_; 
v_args_7060_ = ((lean_object*)(l_Lake_inputDir___lam__2___closed__0));
v_sz_7061_ = lean_array_size(v_objs_7058_);
v___x_7062_ = ((size_t)0ULL);
v___x_7063_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__0(v_objs_7058_, v_sz_7061_, v___x_7062_, v_args_7060_);
v_sz_7064_ = lean_array_size(v_libs_7059_);
v___x_7065_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1(v_libs_7059_, v_sz_7064_, v___x_7062_, v___x_7063_);
return v___x_7065_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs___boxed(lean_object* v_objs_7066_, lean_object* v_libs_7067_){
_start:
{
lean_object* v_res_7068_; 
v_res_7068_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7066_, v_libs_7067_);
lean_dec_ref(v_libs_7067_);
lean_dec_ref(v_objs_7066_);
return v_res_7068_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(lean_object* v_k_7069_, lean_object* v_t_7070_){
_start:
{
if (lean_obj_tag(v_t_7070_) == 0)
{
lean_object* v_k_7071_; lean_object* v_l_7072_; lean_object* v_r_7073_; uint8_t v___x_7074_; 
v_k_7071_ = lean_ctor_get(v_t_7070_, 1);
v_l_7072_ = lean_ctor_get(v_t_7070_, 3);
v_r_7073_ = lean_ctor_get(v_t_7070_, 4);
v___x_7074_ = lean_string_compare(v_k_7069_, v_k_7071_);
switch(v___x_7074_)
{
case 0:
{
v_t_7070_ = v_l_7072_;
goto _start;
}
case 1:
{
uint8_t v___x_7076_; 
v___x_7076_ = 1;
return v___x_7076_;
}
default: 
{
v_t_7070_ = v_r_7073_;
goto _start;
}
}
}
else
{
uint8_t v___x_7078_; 
v___x_7078_ = 0;
return v___x_7078_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg___boxed(lean_object* v_k_7079_, lean_object* v_t_7080_){
_start:
{
uint8_t v_res_7081_; lean_object* v_r_7082_; 
v_res_7081_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_k_7079_, v_t_7080_);
lean_dec(v_t_7080_);
lean_dec_ref(v_k_7079_);
v_r_7082_ = lean_box(v_res_7081_);
return v_r_7082_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(lean_object* v_a_7083_, lean_object* v_x_7084_){
_start:
{
if (lean_obj_tag(v_x_7084_) == 0)
{
uint8_t v___x_7085_; 
v___x_7085_ = 0;
return v___x_7085_;
}
else
{
lean_object* v_head_7086_; lean_object* v_tail_7087_; uint8_t v___x_7088_; 
v_head_7086_ = lean_ctor_get(v_x_7084_, 0);
v_tail_7087_ = lean_ctor_get(v_x_7084_, 1);
v___x_7088_ = lean_string_dec_eq(v_a_7083_, v_head_7086_);
if (v___x_7088_ == 0)
{
v_x_7084_ = v_tail_7087_;
goto _start;
}
else
{
return v___x_7088_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1___boxed(lean_object* v_a_7090_, lean_object* v_x_7091_){
_start:
{
uint8_t v_res_7092_; lean_object* v_r_7093_; 
v_res_7092_ = l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(v_a_7090_, v_x_7091_);
lean_dec(v_x_7091_);
lean_dec_ref(v_a_7090_);
v_r_7093_ = lean_box(v_res_7092_);
return v_r_7093_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(lean_object* v_k_7094_, lean_object* v_v_7095_, lean_object* v_t_7096_){
_start:
{
if (lean_obj_tag(v_t_7096_) == 0)
{
lean_object* v_size_7097_; lean_object* v_k_7098_; lean_object* v_v_7099_; lean_object* v_l_7100_; lean_object* v_r_7101_; lean_object* v___x_7103_; uint8_t v_isShared_7104_; uint8_t v_isSharedCheck_7381_; 
v_size_7097_ = lean_ctor_get(v_t_7096_, 0);
v_k_7098_ = lean_ctor_get(v_t_7096_, 1);
v_v_7099_ = lean_ctor_get(v_t_7096_, 2);
v_l_7100_ = lean_ctor_get(v_t_7096_, 3);
v_r_7101_ = lean_ctor_get(v_t_7096_, 4);
v_isSharedCheck_7381_ = !lean_is_exclusive(v_t_7096_);
if (v_isSharedCheck_7381_ == 0)
{
v___x_7103_ = v_t_7096_;
v_isShared_7104_ = v_isSharedCheck_7381_;
goto v_resetjp_7102_;
}
else
{
lean_inc(v_r_7101_);
lean_inc(v_l_7100_);
lean_inc(v_v_7099_);
lean_inc(v_k_7098_);
lean_inc(v_size_7097_);
lean_dec(v_t_7096_);
v___x_7103_ = lean_box(0);
v_isShared_7104_ = v_isSharedCheck_7381_;
goto v_resetjp_7102_;
}
v_resetjp_7102_:
{
uint8_t v___x_7105_; 
v___x_7105_ = lean_string_compare(v_k_7094_, v_k_7098_);
switch(v___x_7105_)
{
case 0:
{
lean_object* v_impl_7106_; lean_object* v___x_7107_; 
lean_dec(v_size_7097_);
v_impl_7106_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_7094_, v_v_7095_, v_l_7100_);
v___x_7107_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_7101_) == 0)
{
lean_object* v_size_7108_; lean_object* v_size_7109_; lean_object* v_k_7110_; lean_object* v_v_7111_; lean_object* v_l_7112_; lean_object* v_r_7113_; lean_object* v___x_7114_; lean_object* v___x_7115_; uint8_t v___x_7116_; 
v_size_7108_ = lean_ctor_get(v_r_7101_, 0);
v_size_7109_ = lean_ctor_get(v_impl_7106_, 0);
lean_inc(v_size_7109_);
v_k_7110_ = lean_ctor_get(v_impl_7106_, 1);
lean_inc(v_k_7110_);
v_v_7111_ = lean_ctor_get(v_impl_7106_, 2);
lean_inc(v_v_7111_);
v_l_7112_ = lean_ctor_get(v_impl_7106_, 3);
lean_inc(v_l_7112_);
v_r_7113_ = lean_ctor_get(v_impl_7106_, 4);
lean_inc(v_r_7113_);
v___x_7114_ = lean_unsigned_to_nat(3u);
v___x_7115_ = lean_nat_mul(v___x_7114_, v_size_7108_);
v___x_7116_ = lean_nat_dec_lt(v___x_7115_, v_size_7109_);
lean_dec(v___x_7115_);
if (v___x_7116_ == 0)
{
lean_object* v___x_7117_; lean_object* v___x_7118_; lean_object* v___x_7120_; 
lean_dec(v_r_7113_);
lean_dec(v_l_7112_);
lean_dec(v_v_7111_);
lean_dec(v_k_7110_);
v___x_7117_ = lean_nat_add(v___x_7107_, v_size_7109_);
lean_dec(v_size_7109_);
v___x_7118_ = lean_nat_add(v___x_7117_, v_size_7108_);
lean_dec(v___x_7117_);
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 3, v_impl_7106_);
lean_ctor_set(v___x_7103_, 0, v___x_7118_);
v___x_7120_ = v___x_7103_;
goto v_reusejp_7119_;
}
else
{
lean_object* v_reuseFailAlloc_7121_; 
v_reuseFailAlloc_7121_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7121_, 0, v___x_7118_);
lean_ctor_set(v_reuseFailAlloc_7121_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7121_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7121_, 3, v_impl_7106_);
lean_ctor_set(v_reuseFailAlloc_7121_, 4, v_r_7101_);
v___x_7120_ = v_reuseFailAlloc_7121_;
goto v_reusejp_7119_;
}
v_reusejp_7119_:
{
return v___x_7120_;
}
}
else
{
lean_object* v___x_7123_; uint8_t v_isShared_7124_; uint8_t v_isSharedCheck_7187_; 
v_isSharedCheck_7187_ = !lean_is_exclusive(v_impl_7106_);
if (v_isSharedCheck_7187_ == 0)
{
lean_object* v_unused_7188_; lean_object* v_unused_7189_; lean_object* v_unused_7190_; lean_object* v_unused_7191_; lean_object* v_unused_7192_; 
v_unused_7188_ = lean_ctor_get(v_impl_7106_, 4);
lean_dec(v_unused_7188_);
v_unused_7189_ = lean_ctor_get(v_impl_7106_, 3);
lean_dec(v_unused_7189_);
v_unused_7190_ = lean_ctor_get(v_impl_7106_, 2);
lean_dec(v_unused_7190_);
v_unused_7191_ = lean_ctor_get(v_impl_7106_, 1);
lean_dec(v_unused_7191_);
v_unused_7192_ = lean_ctor_get(v_impl_7106_, 0);
lean_dec(v_unused_7192_);
v___x_7123_ = v_impl_7106_;
v_isShared_7124_ = v_isSharedCheck_7187_;
goto v_resetjp_7122_;
}
else
{
lean_dec(v_impl_7106_);
v___x_7123_ = lean_box(0);
v_isShared_7124_ = v_isSharedCheck_7187_;
goto v_resetjp_7122_;
}
v_resetjp_7122_:
{
lean_object* v_size_7125_; lean_object* v_size_7126_; lean_object* v_k_7127_; lean_object* v_v_7128_; lean_object* v_l_7129_; lean_object* v_r_7130_; lean_object* v___x_7131_; lean_object* v___x_7132_; uint8_t v___x_7133_; 
v_size_7125_ = lean_ctor_get(v_l_7112_, 0);
v_size_7126_ = lean_ctor_get(v_r_7113_, 0);
v_k_7127_ = lean_ctor_get(v_r_7113_, 1);
v_v_7128_ = lean_ctor_get(v_r_7113_, 2);
v_l_7129_ = lean_ctor_get(v_r_7113_, 3);
v_r_7130_ = lean_ctor_get(v_r_7113_, 4);
v___x_7131_ = lean_unsigned_to_nat(2u);
v___x_7132_ = lean_nat_mul(v___x_7131_, v_size_7125_);
v___x_7133_ = lean_nat_dec_lt(v_size_7126_, v___x_7132_);
lean_dec(v___x_7132_);
if (v___x_7133_ == 0)
{
lean_object* v___x_7135_; uint8_t v_isShared_7136_; uint8_t v_isSharedCheck_7162_; 
lean_inc(v_r_7130_);
lean_inc(v_l_7129_);
lean_inc(v_v_7128_);
lean_inc(v_k_7127_);
v_isSharedCheck_7162_ = !lean_is_exclusive(v_r_7113_);
if (v_isSharedCheck_7162_ == 0)
{
lean_object* v_unused_7163_; lean_object* v_unused_7164_; lean_object* v_unused_7165_; lean_object* v_unused_7166_; lean_object* v_unused_7167_; 
v_unused_7163_ = lean_ctor_get(v_r_7113_, 4);
lean_dec(v_unused_7163_);
v_unused_7164_ = lean_ctor_get(v_r_7113_, 3);
lean_dec(v_unused_7164_);
v_unused_7165_ = lean_ctor_get(v_r_7113_, 2);
lean_dec(v_unused_7165_);
v_unused_7166_ = lean_ctor_get(v_r_7113_, 1);
lean_dec(v_unused_7166_);
v_unused_7167_ = lean_ctor_get(v_r_7113_, 0);
lean_dec(v_unused_7167_);
v___x_7135_ = v_r_7113_;
v_isShared_7136_ = v_isSharedCheck_7162_;
goto v_resetjp_7134_;
}
else
{
lean_dec(v_r_7113_);
v___x_7135_ = lean_box(0);
v_isShared_7136_ = v_isSharedCheck_7162_;
goto v_resetjp_7134_;
}
v_resetjp_7134_:
{
lean_object* v___x_7137_; lean_object* v___x_7138_; lean_object* v___y_7140_; lean_object* v___y_7141_; lean_object* v___y_7142_; lean_object* v___x_7150_; lean_object* v___y_7152_; 
v___x_7137_ = lean_nat_add(v___x_7107_, v_size_7109_);
lean_dec(v_size_7109_);
v___x_7138_ = lean_nat_add(v___x_7137_, v_size_7108_);
lean_dec(v___x_7137_);
v___x_7150_ = lean_nat_add(v___x_7107_, v_size_7125_);
if (lean_obj_tag(v_l_7129_) == 0)
{
lean_object* v_size_7160_; 
v_size_7160_ = lean_ctor_get(v_l_7129_, 0);
lean_inc(v_size_7160_);
v___y_7152_ = v_size_7160_;
goto v___jp_7151_;
}
else
{
lean_object* v___x_7161_; 
v___x_7161_ = lean_unsigned_to_nat(0u);
v___y_7152_ = v___x_7161_;
goto v___jp_7151_;
}
v___jp_7139_:
{
lean_object* v___x_7143_; lean_object* v___x_7145_; 
v___x_7143_ = lean_nat_add(v___y_7140_, v___y_7142_);
lean_dec(v___y_7142_);
lean_dec(v___y_7140_);
if (v_isShared_7136_ == 0)
{
lean_ctor_set(v___x_7135_, 4, v_r_7101_);
lean_ctor_set(v___x_7135_, 3, v_r_7130_);
lean_ctor_set(v___x_7135_, 2, v_v_7099_);
lean_ctor_set(v___x_7135_, 1, v_k_7098_);
lean_ctor_set(v___x_7135_, 0, v___x_7143_);
v___x_7145_ = v___x_7135_;
goto v_reusejp_7144_;
}
else
{
lean_object* v_reuseFailAlloc_7149_; 
v_reuseFailAlloc_7149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7149_, 0, v___x_7143_);
lean_ctor_set(v_reuseFailAlloc_7149_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7149_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7149_, 3, v_r_7130_);
lean_ctor_set(v_reuseFailAlloc_7149_, 4, v_r_7101_);
v___x_7145_ = v_reuseFailAlloc_7149_;
goto v_reusejp_7144_;
}
v_reusejp_7144_:
{
lean_object* v___x_7147_; 
if (v_isShared_7124_ == 0)
{
lean_ctor_set(v___x_7123_, 4, v___x_7145_);
lean_ctor_set(v___x_7123_, 3, v___y_7141_);
lean_ctor_set(v___x_7123_, 2, v_v_7128_);
lean_ctor_set(v___x_7123_, 1, v_k_7127_);
lean_ctor_set(v___x_7123_, 0, v___x_7138_);
v___x_7147_ = v___x_7123_;
goto v_reusejp_7146_;
}
else
{
lean_object* v_reuseFailAlloc_7148_; 
v_reuseFailAlloc_7148_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7148_, 0, v___x_7138_);
lean_ctor_set(v_reuseFailAlloc_7148_, 1, v_k_7127_);
lean_ctor_set(v_reuseFailAlloc_7148_, 2, v_v_7128_);
lean_ctor_set(v_reuseFailAlloc_7148_, 3, v___y_7141_);
lean_ctor_set(v_reuseFailAlloc_7148_, 4, v___x_7145_);
v___x_7147_ = v_reuseFailAlloc_7148_;
goto v_reusejp_7146_;
}
v_reusejp_7146_:
{
return v___x_7147_;
}
}
}
v___jp_7151_:
{
lean_object* v___x_7153_; lean_object* v___x_7155_; 
v___x_7153_ = lean_nat_add(v___x_7150_, v___y_7152_);
lean_dec(v___y_7152_);
lean_dec(v___x_7150_);
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 4, v_l_7129_);
lean_ctor_set(v___x_7103_, 3, v_l_7112_);
lean_ctor_set(v___x_7103_, 2, v_v_7111_);
lean_ctor_set(v___x_7103_, 1, v_k_7110_);
lean_ctor_set(v___x_7103_, 0, v___x_7153_);
v___x_7155_ = v___x_7103_;
goto v_reusejp_7154_;
}
else
{
lean_object* v_reuseFailAlloc_7159_; 
v_reuseFailAlloc_7159_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7159_, 0, v___x_7153_);
lean_ctor_set(v_reuseFailAlloc_7159_, 1, v_k_7110_);
lean_ctor_set(v_reuseFailAlloc_7159_, 2, v_v_7111_);
lean_ctor_set(v_reuseFailAlloc_7159_, 3, v_l_7112_);
lean_ctor_set(v_reuseFailAlloc_7159_, 4, v_l_7129_);
v___x_7155_ = v_reuseFailAlloc_7159_;
goto v_reusejp_7154_;
}
v_reusejp_7154_:
{
lean_object* v___x_7156_; 
v___x_7156_ = lean_nat_add(v___x_7107_, v_size_7108_);
if (lean_obj_tag(v_r_7130_) == 0)
{
lean_object* v_size_7157_; 
v_size_7157_ = lean_ctor_get(v_r_7130_, 0);
lean_inc(v_size_7157_);
v___y_7140_ = v___x_7156_;
v___y_7141_ = v___x_7155_;
v___y_7142_ = v_size_7157_;
goto v___jp_7139_;
}
else
{
lean_object* v___x_7158_; 
v___x_7158_ = lean_unsigned_to_nat(0u);
v___y_7140_ = v___x_7156_;
v___y_7141_ = v___x_7155_;
v___y_7142_ = v___x_7158_;
goto v___jp_7139_;
}
}
}
}
}
else
{
lean_object* v___x_7168_; lean_object* v___x_7169_; lean_object* v___x_7170_; lean_object* v___x_7171_; lean_object* v___x_7173_; 
lean_del_object(v___x_7103_);
v___x_7168_ = lean_nat_add(v___x_7107_, v_size_7109_);
lean_dec(v_size_7109_);
v___x_7169_ = lean_nat_add(v___x_7168_, v_size_7108_);
lean_dec(v___x_7168_);
v___x_7170_ = lean_nat_add(v___x_7107_, v_size_7108_);
v___x_7171_ = lean_nat_add(v___x_7170_, v_size_7126_);
lean_dec(v___x_7170_);
lean_inc_ref(v_r_7101_);
if (v_isShared_7124_ == 0)
{
lean_ctor_set(v___x_7123_, 4, v_r_7101_);
lean_ctor_set(v___x_7123_, 3, v_r_7113_);
lean_ctor_set(v___x_7123_, 2, v_v_7099_);
lean_ctor_set(v___x_7123_, 1, v_k_7098_);
lean_ctor_set(v___x_7123_, 0, v___x_7171_);
v___x_7173_ = v___x_7123_;
goto v_reusejp_7172_;
}
else
{
lean_object* v_reuseFailAlloc_7186_; 
v_reuseFailAlloc_7186_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7186_, 0, v___x_7171_);
lean_ctor_set(v_reuseFailAlloc_7186_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7186_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7186_, 3, v_r_7113_);
lean_ctor_set(v_reuseFailAlloc_7186_, 4, v_r_7101_);
v___x_7173_ = v_reuseFailAlloc_7186_;
goto v_reusejp_7172_;
}
v_reusejp_7172_:
{
lean_object* v___x_7175_; uint8_t v_isShared_7176_; uint8_t v_isSharedCheck_7180_; 
v_isSharedCheck_7180_ = !lean_is_exclusive(v_r_7101_);
if (v_isSharedCheck_7180_ == 0)
{
lean_object* v_unused_7181_; lean_object* v_unused_7182_; lean_object* v_unused_7183_; lean_object* v_unused_7184_; lean_object* v_unused_7185_; 
v_unused_7181_ = lean_ctor_get(v_r_7101_, 4);
lean_dec(v_unused_7181_);
v_unused_7182_ = lean_ctor_get(v_r_7101_, 3);
lean_dec(v_unused_7182_);
v_unused_7183_ = lean_ctor_get(v_r_7101_, 2);
lean_dec(v_unused_7183_);
v_unused_7184_ = lean_ctor_get(v_r_7101_, 1);
lean_dec(v_unused_7184_);
v_unused_7185_ = lean_ctor_get(v_r_7101_, 0);
lean_dec(v_unused_7185_);
v___x_7175_ = v_r_7101_;
v_isShared_7176_ = v_isSharedCheck_7180_;
goto v_resetjp_7174_;
}
else
{
lean_dec(v_r_7101_);
v___x_7175_ = lean_box(0);
v_isShared_7176_ = v_isSharedCheck_7180_;
goto v_resetjp_7174_;
}
v_resetjp_7174_:
{
lean_object* v___x_7178_; 
if (v_isShared_7176_ == 0)
{
lean_ctor_set(v___x_7175_, 4, v___x_7173_);
lean_ctor_set(v___x_7175_, 3, v_l_7112_);
lean_ctor_set(v___x_7175_, 2, v_v_7111_);
lean_ctor_set(v___x_7175_, 1, v_k_7110_);
lean_ctor_set(v___x_7175_, 0, v___x_7169_);
v___x_7178_ = v___x_7175_;
goto v_reusejp_7177_;
}
else
{
lean_object* v_reuseFailAlloc_7179_; 
v_reuseFailAlloc_7179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7179_, 0, v___x_7169_);
lean_ctor_set(v_reuseFailAlloc_7179_, 1, v_k_7110_);
lean_ctor_set(v_reuseFailAlloc_7179_, 2, v_v_7111_);
lean_ctor_set(v_reuseFailAlloc_7179_, 3, v_l_7112_);
lean_ctor_set(v_reuseFailAlloc_7179_, 4, v___x_7173_);
v___x_7178_ = v_reuseFailAlloc_7179_;
goto v_reusejp_7177_;
}
v_reusejp_7177_:
{
return v___x_7178_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_7193_; 
v_l_7193_ = lean_ctor_get(v_impl_7106_, 3);
lean_inc(v_l_7193_);
if (lean_obj_tag(v_l_7193_) == 0)
{
lean_object* v_r_7194_; lean_object* v_k_7195_; lean_object* v_v_7196_; lean_object* v___x_7198_; uint8_t v_isShared_7199_; uint8_t v_isSharedCheck_7207_; 
v_r_7194_ = lean_ctor_get(v_impl_7106_, 4);
v_k_7195_ = lean_ctor_get(v_impl_7106_, 1);
v_v_7196_ = lean_ctor_get(v_impl_7106_, 2);
v_isSharedCheck_7207_ = !lean_is_exclusive(v_impl_7106_);
if (v_isSharedCheck_7207_ == 0)
{
lean_object* v_unused_7208_; lean_object* v_unused_7209_; 
v_unused_7208_ = lean_ctor_get(v_impl_7106_, 3);
lean_dec(v_unused_7208_);
v_unused_7209_ = lean_ctor_get(v_impl_7106_, 0);
lean_dec(v_unused_7209_);
v___x_7198_ = v_impl_7106_;
v_isShared_7199_ = v_isSharedCheck_7207_;
goto v_resetjp_7197_;
}
else
{
lean_inc(v_r_7194_);
lean_inc(v_v_7196_);
lean_inc(v_k_7195_);
lean_dec(v_impl_7106_);
v___x_7198_ = lean_box(0);
v_isShared_7199_ = v_isSharedCheck_7207_;
goto v_resetjp_7197_;
}
v_resetjp_7197_:
{
lean_object* v___x_7200_; lean_object* v___x_7202_; 
v___x_7200_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_7194_);
if (v_isShared_7199_ == 0)
{
lean_ctor_set(v___x_7198_, 3, v_r_7194_);
lean_ctor_set(v___x_7198_, 2, v_v_7099_);
lean_ctor_set(v___x_7198_, 1, v_k_7098_);
lean_ctor_set(v___x_7198_, 0, v___x_7107_);
v___x_7202_ = v___x_7198_;
goto v_reusejp_7201_;
}
else
{
lean_object* v_reuseFailAlloc_7206_; 
v_reuseFailAlloc_7206_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7206_, 0, v___x_7107_);
lean_ctor_set(v_reuseFailAlloc_7206_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7206_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7206_, 3, v_r_7194_);
lean_ctor_set(v_reuseFailAlloc_7206_, 4, v_r_7194_);
v___x_7202_ = v_reuseFailAlloc_7206_;
goto v_reusejp_7201_;
}
v_reusejp_7201_:
{
lean_object* v___x_7204_; 
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 4, v___x_7202_);
lean_ctor_set(v___x_7103_, 3, v_l_7193_);
lean_ctor_set(v___x_7103_, 2, v_v_7196_);
lean_ctor_set(v___x_7103_, 1, v_k_7195_);
lean_ctor_set(v___x_7103_, 0, v___x_7200_);
v___x_7204_ = v___x_7103_;
goto v_reusejp_7203_;
}
else
{
lean_object* v_reuseFailAlloc_7205_; 
v_reuseFailAlloc_7205_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7205_, 0, v___x_7200_);
lean_ctor_set(v_reuseFailAlloc_7205_, 1, v_k_7195_);
lean_ctor_set(v_reuseFailAlloc_7205_, 2, v_v_7196_);
lean_ctor_set(v_reuseFailAlloc_7205_, 3, v_l_7193_);
lean_ctor_set(v_reuseFailAlloc_7205_, 4, v___x_7202_);
v___x_7204_ = v_reuseFailAlloc_7205_;
goto v_reusejp_7203_;
}
v_reusejp_7203_:
{
return v___x_7204_;
}
}
}
}
else
{
lean_object* v_r_7210_; 
v_r_7210_ = lean_ctor_get(v_impl_7106_, 4);
lean_inc(v_r_7210_);
if (lean_obj_tag(v_r_7210_) == 0)
{
lean_object* v_k_7211_; lean_object* v_v_7212_; lean_object* v___x_7214_; uint8_t v_isShared_7215_; uint8_t v_isSharedCheck_7235_; 
v_k_7211_ = lean_ctor_get(v_impl_7106_, 1);
v_v_7212_ = lean_ctor_get(v_impl_7106_, 2);
v_isSharedCheck_7235_ = !lean_is_exclusive(v_impl_7106_);
if (v_isSharedCheck_7235_ == 0)
{
lean_object* v_unused_7236_; lean_object* v_unused_7237_; lean_object* v_unused_7238_; 
v_unused_7236_ = lean_ctor_get(v_impl_7106_, 4);
lean_dec(v_unused_7236_);
v_unused_7237_ = lean_ctor_get(v_impl_7106_, 3);
lean_dec(v_unused_7237_);
v_unused_7238_ = lean_ctor_get(v_impl_7106_, 0);
lean_dec(v_unused_7238_);
v___x_7214_ = v_impl_7106_;
v_isShared_7215_ = v_isSharedCheck_7235_;
goto v_resetjp_7213_;
}
else
{
lean_inc(v_v_7212_);
lean_inc(v_k_7211_);
lean_dec(v_impl_7106_);
v___x_7214_ = lean_box(0);
v_isShared_7215_ = v_isSharedCheck_7235_;
goto v_resetjp_7213_;
}
v_resetjp_7213_:
{
lean_object* v_k_7216_; lean_object* v_v_7217_; lean_object* v___x_7219_; uint8_t v_isShared_7220_; uint8_t v_isSharedCheck_7231_; 
v_k_7216_ = lean_ctor_get(v_r_7210_, 1);
v_v_7217_ = lean_ctor_get(v_r_7210_, 2);
v_isSharedCheck_7231_ = !lean_is_exclusive(v_r_7210_);
if (v_isSharedCheck_7231_ == 0)
{
lean_object* v_unused_7232_; lean_object* v_unused_7233_; lean_object* v_unused_7234_; 
v_unused_7232_ = lean_ctor_get(v_r_7210_, 4);
lean_dec(v_unused_7232_);
v_unused_7233_ = lean_ctor_get(v_r_7210_, 3);
lean_dec(v_unused_7233_);
v_unused_7234_ = lean_ctor_get(v_r_7210_, 0);
lean_dec(v_unused_7234_);
v___x_7219_ = v_r_7210_;
v_isShared_7220_ = v_isSharedCheck_7231_;
goto v_resetjp_7218_;
}
else
{
lean_inc(v_v_7217_);
lean_inc(v_k_7216_);
lean_dec(v_r_7210_);
v___x_7219_ = lean_box(0);
v_isShared_7220_ = v_isSharedCheck_7231_;
goto v_resetjp_7218_;
}
v_resetjp_7218_:
{
lean_object* v___x_7221_; lean_object* v___x_7223_; 
v___x_7221_ = lean_unsigned_to_nat(3u);
if (v_isShared_7220_ == 0)
{
lean_ctor_set(v___x_7219_, 4, v_l_7193_);
lean_ctor_set(v___x_7219_, 3, v_l_7193_);
lean_ctor_set(v___x_7219_, 2, v_v_7212_);
lean_ctor_set(v___x_7219_, 1, v_k_7211_);
lean_ctor_set(v___x_7219_, 0, v___x_7107_);
v___x_7223_ = v___x_7219_;
goto v_reusejp_7222_;
}
else
{
lean_object* v_reuseFailAlloc_7230_; 
v_reuseFailAlloc_7230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7230_, 0, v___x_7107_);
lean_ctor_set(v_reuseFailAlloc_7230_, 1, v_k_7211_);
lean_ctor_set(v_reuseFailAlloc_7230_, 2, v_v_7212_);
lean_ctor_set(v_reuseFailAlloc_7230_, 3, v_l_7193_);
lean_ctor_set(v_reuseFailAlloc_7230_, 4, v_l_7193_);
v___x_7223_ = v_reuseFailAlloc_7230_;
goto v_reusejp_7222_;
}
v_reusejp_7222_:
{
lean_object* v___x_7225_; 
if (v_isShared_7215_ == 0)
{
lean_ctor_set(v___x_7214_, 4, v_l_7193_);
lean_ctor_set(v___x_7214_, 2, v_v_7099_);
lean_ctor_set(v___x_7214_, 1, v_k_7098_);
lean_ctor_set(v___x_7214_, 0, v___x_7107_);
v___x_7225_ = v___x_7214_;
goto v_reusejp_7224_;
}
else
{
lean_object* v_reuseFailAlloc_7229_; 
v_reuseFailAlloc_7229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7229_, 0, v___x_7107_);
lean_ctor_set(v_reuseFailAlloc_7229_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7229_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7229_, 3, v_l_7193_);
lean_ctor_set(v_reuseFailAlloc_7229_, 4, v_l_7193_);
v___x_7225_ = v_reuseFailAlloc_7229_;
goto v_reusejp_7224_;
}
v_reusejp_7224_:
{
lean_object* v___x_7227_; 
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 4, v___x_7225_);
lean_ctor_set(v___x_7103_, 3, v___x_7223_);
lean_ctor_set(v___x_7103_, 2, v_v_7217_);
lean_ctor_set(v___x_7103_, 1, v_k_7216_);
lean_ctor_set(v___x_7103_, 0, v___x_7221_);
v___x_7227_ = v___x_7103_;
goto v_reusejp_7226_;
}
else
{
lean_object* v_reuseFailAlloc_7228_; 
v_reuseFailAlloc_7228_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7228_, 0, v___x_7221_);
lean_ctor_set(v_reuseFailAlloc_7228_, 1, v_k_7216_);
lean_ctor_set(v_reuseFailAlloc_7228_, 2, v_v_7217_);
lean_ctor_set(v_reuseFailAlloc_7228_, 3, v___x_7223_);
lean_ctor_set(v_reuseFailAlloc_7228_, 4, v___x_7225_);
v___x_7227_ = v_reuseFailAlloc_7228_;
goto v_reusejp_7226_;
}
v_reusejp_7226_:
{
return v___x_7227_;
}
}
}
}
}
}
else
{
lean_object* v___x_7239_; lean_object* v___x_7241_; 
v___x_7239_ = lean_unsigned_to_nat(2u);
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 4, v_r_7210_);
lean_ctor_set(v___x_7103_, 3, v_impl_7106_);
lean_ctor_set(v___x_7103_, 0, v___x_7239_);
v___x_7241_ = v___x_7103_;
goto v_reusejp_7240_;
}
else
{
lean_object* v_reuseFailAlloc_7242_; 
v_reuseFailAlloc_7242_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7242_, 0, v___x_7239_);
lean_ctor_set(v_reuseFailAlloc_7242_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7242_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7242_, 3, v_impl_7106_);
lean_ctor_set(v_reuseFailAlloc_7242_, 4, v_r_7210_);
v___x_7241_ = v_reuseFailAlloc_7242_;
goto v_reusejp_7240_;
}
v_reusejp_7240_:
{
return v___x_7241_;
}
}
}
}
}
case 1:
{
lean_object* v___x_7244_; 
lean_dec(v_v_7099_);
lean_dec(v_k_7098_);
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 2, v_v_7095_);
lean_ctor_set(v___x_7103_, 1, v_k_7094_);
v___x_7244_ = v___x_7103_;
goto v_reusejp_7243_;
}
else
{
lean_object* v_reuseFailAlloc_7245_; 
v_reuseFailAlloc_7245_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7245_, 0, v_size_7097_);
lean_ctor_set(v_reuseFailAlloc_7245_, 1, v_k_7094_);
lean_ctor_set(v_reuseFailAlloc_7245_, 2, v_v_7095_);
lean_ctor_set(v_reuseFailAlloc_7245_, 3, v_l_7100_);
lean_ctor_set(v_reuseFailAlloc_7245_, 4, v_r_7101_);
v___x_7244_ = v_reuseFailAlloc_7245_;
goto v_reusejp_7243_;
}
v_reusejp_7243_:
{
return v___x_7244_;
}
}
default: 
{
lean_object* v_impl_7246_; lean_object* v___x_7247_; 
lean_dec(v_size_7097_);
v_impl_7246_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_7094_, v_v_7095_, v_r_7101_);
v___x_7247_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_7100_) == 0)
{
lean_object* v_size_7248_; lean_object* v_size_7249_; lean_object* v_k_7250_; lean_object* v_v_7251_; lean_object* v_l_7252_; lean_object* v_r_7253_; lean_object* v___x_7254_; lean_object* v___x_7255_; uint8_t v___x_7256_; 
v_size_7248_ = lean_ctor_get(v_l_7100_, 0);
v_size_7249_ = lean_ctor_get(v_impl_7246_, 0);
lean_inc(v_size_7249_);
v_k_7250_ = lean_ctor_get(v_impl_7246_, 1);
lean_inc(v_k_7250_);
v_v_7251_ = lean_ctor_get(v_impl_7246_, 2);
lean_inc(v_v_7251_);
v_l_7252_ = lean_ctor_get(v_impl_7246_, 3);
lean_inc(v_l_7252_);
v_r_7253_ = lean_ctor_get(v_impl_7246_, 4);
lean_inc(v_r_7253_);
v___x_7254_ = lean_unsigned_to_nat(3u);
v___x_7255_ = lean_nat_mul(v___x_7254_, v_size_7248_);
v___x_7256_ = lean_nat_dec_lt(v___x_7255_, v_size_7249_);
lean_dec(v___x_7255_);
if (v___x_7256_ == 0)
{
lean_object* v___x_7257_; lean_object* v___x_7258_; lean_object* v___x_7260_; 
lean_dec(v_r_7253_);
lean_dec(v_l_7252_);
lean_dec(v_v_7251_);
lean_dec(v_k_7250_);
v___x_7257_ = lean_nat_add(v___x_7247_, v_size_7248_);
v___x_7258_ = lean_nat_add(v___x_7257_, v_size_7249_);
lean_dec(v_size_7249_);
lean_dec(v___x_7257_);
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 4, v_impl_7246_);
lean_ctor_set(v___x_7103_, 0, v___x_7258_);
v___x_7260_ = v___x_7103_;
goto v_reusejp_7259_;
}
else
{
lean_object* v_reuseFailAlloc_7261_; 
v_reuseFailAlloc_7261_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7261_, 0, v___x_7258_);
lean_ctor_set(v_reuseFailAlloc_7261_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7261_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7261_, 3, v_l_7100_);
lean_ctor_set(v_reuseFailAlloc_7261_, 4, v_impl_7246_);
v___x_7260_ = v_reuseFailAlloc_7261_;
goto v_reusejp_7259_;
}
v_reusejp_7259_:
{
return v___x_7260_;
}
}
else
{
lean_object* v___x_7263_; uint8_t v_isShared_7264_; uint8_t v_isSharedCheck_7325_; 
v_isSharedCheck_7325_ = !lean_is_exclusive(v_impl_7246_);
if (v_isSharedCheck_7325_ == 0)
{
lean_object* v_unused_7326_; lean_object* v_unused_7327_; lean_object* v_unused_7328_; lean_object* v_unused_7329_; lean_object* v_unused_7330_; 
v_unused_7326_ = lean_ctor_get(v_impl_7246_, 4);
lean_dec(v_unused_7326_);
v_unused_7327_ = lean_ctor_get(v_impl_7246_, 3);
lean_dec(v_unused_7327_);
v_unused_7328_ = lean_ctor_get(v_impl_7246_, 2);
lean_dec(v_unused_7328_);
v_unused_7329_ = lean_ctor_get(v_impl_7246_, 1);
lean_dec(v_unused_7329_);
v_unused_7330_ = lean_ctor_get(v_impl_7246_, 0);
lean_dec(v_unused_7330_);
v___x_7263_ = v_impl_7246_;
v_isShared_7264_ = v_isSharedCheck_7325_;
goto v_resetjp_7262_;
}
else
{
lean_dec(v_impl_7246_);
v___x_7263_ = lean_box(0);
v_isShared_7264_ = v_isSharedCheck_7325_;
goto v_resetjp_7262_;
}
v_resetjp_7262_:
{
lean_object* v_size_7265_; lean_object* v_k_7266_; lean_object* v_v_7267_; lean_object* v_l_7268_; lean_object* v_r_7269_; lean_object* v_size_7270_; lean_object* v___x_7271_; lean_object* v___x_7272_; uint8_t v___x_7273_; 
v_size_7265_ = lean_ctor_get(v_l_7252_, 0);
v_k_7266_ = lean_ctor_get(v_l_7252_, 1);
v_v_7267_ = lean_ctor_get(v_l_7252_, 2);
v_l_7268_ = lean_ctor_get(v_l_7252_, 3);
v_r_7269_ = lean_ctor_get(v_l_7252_, 4);
v_size_7270_ = lean_ctor_get(v_r_7253_, 0);
v___x_7271_ = lean_unsigned_to_nat(2u);
v___x_7272_ = lean_nat_mul(v___x_7271_, v_size_7270_);
v___x_7273_ = lean_nat_dec_lt(v_size_7265_, v___x_7272_);
lean_dec(v___x_7272_);
if (v___x_7273_ == 0)
{
lean_object* v___x_7275_; uint8_t v_isShared_7276_; uint8_t v_isSharedCheck_7301_; 
lean_inc(v_r_7269_);
lean_inc(v_l_7268_);
lean_inc(v_v_7267_);
lean_inc(v_k_7266_);
v_isSharedCheck_7301_ = !lean_is_exclusive(v_l_7252_);
if (v_isSharedCheck_7301_ == 0)
{
lean_object* v_unused_7302_; lean_object* v_unused_7303_; lean_object* v_unused_7304_; lean_object* v_unused_7305_; lean_object* v_unused_7306_; 
v_unused_7302_ = lean_ctor_get(v_l_7252_, 4);
lean_dec(v_unused_7302_);
v_unused_7303_ = lean_ctor_get(v_l_7252_, 3);
lean_dec(v_unused_7303_);
v_unused_7304_ = lean_ctor_get(v_l_7252_, 2);
lean_dec(v_unused_7304_);
v_unused_7305_ = lean_ctor_get(v_l_7252_, 1);
lean_dec(v_unused_7305_);
v_unused_7306_ = lean_ctor_get(v_l_7252_, 0);
lean_dec(v_unused_7306_);
v___x_7275_ = v_l_7252_;
v_isShared_7276_ = v_isSharedCheck_7301_;
goto v_resetjp_7274_;
}
else
{
lean_dec(v_l_7252_);
v___x_7275_ = lean_box(0);
v_isShared_7276_ = v_isSharedCheck_7301_;
goto v_resetjp_7274_;
}
v_resetjp_7274_:
{
lean_object* v___x_7277_; lean_object* v___x_7278_; lean_object* v___y_7280_; lean_object* v___y_7281_; lean_object* v___y_7282_; lean_object* v___y_7291_; 
v___x_7277_ = lean_nat_add(v___x_7247_, v_size_7248_);
v___x_7278_ = lean_nat_add(v___x_7277_, v_size_7249_);
lean_dec(v_size_7249_);
if (lean_obj_tag(v_l_7268_) == 0)
{
lean_object* v_size_7299_; 
v_size_7299_ = lean_ctor_get(v_l_7268_, 0);
lean_inc(v_size_7299_);
v___y_7291_ = v_size_7299_;
goto v___jp_7290_;
}
else
{
lean_object* v___x_7300_; 
v___x_7300_ = lean_unsigned_to_nat(0u);
v___y_7291_ = v___x_7300_;
goto v___jp_7290_;
}
v___jp_7279_:
{
lean_object* v___x_7283_; lean_object* v___x_7285_; 
v___x_7283_ = lean_nat_add(v___y_7281_, v___y_7282_);
lean_dec(v___y_7282_);
lean_dec(v___y_7281_);
if (v_isShared_7276_ == 0)
{
lean_ctor_set(v___x_7275_, 4, v_r_7253_);
lean_ctor_set(v___x_7275_, 3, v_r_7269_);
lean_ctor_set(v___x_7275_, 2, v_v_7251_);
lean_ctor_set(v___x_7275_, 1, v_k_7250_);
lean_ctor_set(v___x_7275_, 0, v___x_7283_);
v___x_7285_ = v___x_7275_;
goto v_reusejp_7284_;
}
else
{
lean_object* v_reuseFailAlloc_7289_; 
v_reuseFailAlloc_7289_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7289_, 0, v___x_7283_);
lean_ctor_set(v_reuseFailAlloc_7289_, 1, v_k_7250_);
lean_ctor_set(v_reuseFailAlloc_7289_, 2, v_v_7251_);
lean_ctor_set(v_reuseFailAlloc_7289_, 3, v_r_7269_);
lean_ctor_set(v_reuseFailAlloc_7289_, 4, v_r_7253_);
v___x_7285_ = v_reuseFailAlloc_7289_;
goto v_reusejp_7284_;
}
v_reusejp_7284_:
{
lean_object* v___x_7287_; 
if (v_isShared_7264_ == 0)
{
lean_ctor_set(v___x_7263_, 4, v___x_7285_);
lean_ctor_set(v___x_7263_, 3, v___y_7280_);
lean_ctor_set(v___x_7263_, 2, v_v_7267_);
lean_ctor_set(v___x_7263_, 1, v_k_7266_);
lean_ctor_set(v___x_7263_, 0, v___x_7278_);
v___x_7287_ = v___x_7263_;
goto v_reusejp_7286_;
}
else
{
lean_object* v_reuseFailAlloc_7288_; 
v_reuseFailAlloc_7288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7288_, 0, v___x_7278_);
lean_ctor_set(v_reuseFailAlloc_7288_, 1, v_k_7266_);
lean_ctor_set(v_reuseFailAlloc_7288_, 2, v_v_7267_);
lean_ctor_set(v_reuseFailAlloc_7288_, 3, v___y_7280_);
lean_ctor_set(v_reuseFailAlloc_7288_, 4, v___x_7285_);
v___x_7287_ = v_reuseFailAlloc_7288_;
goto v_reusejp_7286_;
}
v_reusejp_7286_:
{
return v___x_7287_;
}
}
}
v___jp_7290_:
{
lean_object* v___x_7292_; lean_object* v___x_7294_; 
v___x_7292_ = lean_nat_add(v___x_7277_, v___y_7291_);
lean_dec(v___y_7291_);
lean_dec(v___x_7277_);
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 4, v_l_7268_);
lean_ctor_set(v___x_7103_, 0, v___x_7292_);
v___x_7294_ = v___x_7103_;
goto v_reusejp_7293_;
}
else
{
lean_object* v_reuseFailAlloc_7298_; 
v_reuseFailAlloc_7298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7298_, 0, v___x_7292_);
lean_ctor_set(v_reuseFailAlloc_7298_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7298_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7298_, 3, v_l_7100_);
lean_ctor_set(v_reuseFailAlloc_7298_, 4, v_l_7268_);
v___x_7294_ = v_reuseFailAlloc_7298_;
goto v_reusejp_7293_;
}
v_reusejp_7293_:
{
lean_object* v___x_7295_; 
v___x_7295_ = lean_nat_add(v___x_7247_, v_size_7270_);
if (lean_obj_tag(v_r_7269_) == 0)
{
lean_object* v_size_7296_; 
v_size_7296_ = lean_ctor_get(v_r_7269_, 0);
lean_inc(v_size_7296_);
v___y_7280_ = v___x_7294_;
v___y_7281_ = v___x_7295_;
v___y_7282_ = v_size_7296_;
goto v___jp_7279_;
}
else
{
lean_object* v___x_7297_; 
v___x_7297_ = lean_unsigned_to_nat(0u);
v___y_7280_ = v___x_7294_;
v___y_7281_ = v___x_7295_;
v___y_7282_ = v___x_7297_;
goto v___jp_7279_;
}
}
}
}
}
else
{
lean_object* v___x_7307_; lean_object* v___x_7308_; lean_object* v___x_7309_; lean_object* v___x_7311_; 
lean_del_object(v___x_7103_);
v___x_7307_ = lean_nat_add(v___x_7247_, v_size_7248_);
v___x_7308_ = lean_nat_add(v___x_7307_, v_size_7249_);
lean_dec(v_size_7249_);
v___x_7309_ = lean_nat_add(v___x_7307_, v_size_7265_);
lean_dec(v___x_7307_);
lean_inc_ref(v_l_7100_);
if (v_isShared_7264_ == 0)
{
lean_ctor_set(v___x_7263_, 4, v_l_7252_);
lean_ctor_set(v___x_7263_, 3, v_l_7100_);
lean_ctor_set(v___x_7263_, 2, v_v_7099_);
lean_ctor_set(v___x_7263_, 1, v_k_7098_);
lean_ctor_set(v___x_7263_, 0, v___x_7309_);
v___x_7311_ = v___x_7263_;
goto v_reusejp_7310_;
}
else
{
lean_object* v_reuseFailAlloc_7324_; 
v_reuseFailAlloc_7324_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7324_, 0, v___x_7309_);
lean_ctor_set(v_reuseFailAlloc_7324_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7324_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7324_, 3, v_l_7100_);
lean_ctor_set(v_reuseFailAlloc_7324_, 4, v_l_7252_);
v___x_7311_ = v_reuseFailAlloc_7324_;
goto v_reusejp_7310_;
}
v_reusejp_7310_:
{
lean_object* v___x_7313_; uint8_t v_isShared_7314_; uint8_t v_isSharedCheck_7318_; 
v_isSharedCheck_7318_ = !lean_is_exclusive(v_l_7100_);
if (v_isSharedCheck_7318_ == 0)
{
lean_object* v_unused_7319_; lean_object* v_unused_7320_; lean_object* v_unused_7321_; lean_object* v_unused_7322_; lean_object* v_unused_7323_; 
v_unused_7319_ = lean_ctor_get(v_l_7100_, 4);
lean_dec(v_unused_7319_);
v_unused_7320_ = lean_ctor_get(v_l_7100_, 3);
lean_dec(v_unused_7320_);
v_unused_7321_ = lean_ctor_get(v_l_7100_, 2);
lean_dec(v_unused_7321_);
v_unused_7322_ = lean_ctor_get(v_l_7100_, 1);
lean_dec(v_unused_7322_);
v_unused_7323_ = lean_ctor_get(v_l_7100_, 0);
lean_dec(v_unused_7323_);
v___x_7313_ = v_l_7100_;
v_isShared_7314_ = v_isSharedCheck_7318_;
goto v_resetjp_7312_;
}
else
{
lean_dec(v_l_7100_);
v___x_7313_ = lean_box(0);
v_isShared_7314_ = v_isSharedCheck_7318_;
goto v_resetjp_7312_;
}
v_resetjp_7312_:
{
lean_object* v___x_7316_; 
if (v_isShared_7314_ == 0)
{
lean_ctor_set(v___x_7313_, 4, v_r_7253_);
lean_ctor_set(v___x_7313_, 3, v___x_7311_);
lean_ctor_set(v___x_7313_, 2, v_v_7251_);
lean_ctor_set(v___x_7313_, 1, v_k_7250_);
lean_ctor_set(v___x_7313_, 0, v___x_7308_);
v___x_7316_ = v___x_7313_;
goto v_reusejp_7315_;
}
else
{
lean_object* v_reuseFailAlloc_7317_; 
v_reuseFailAlloc_7317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7317_, 0, v___x_7308_);
lean_ctor_set(v_reuseFailAlloc_7317_, 1, v_k_7250_);
lean_ctor_set(v_reuseFailAlloc_7317_, 2, v_v_7251_);
lean_ctor_set(v_reuseFailAlloc_7317_, 3, v___x_7311_);
lean_ctor_set(v_reuseFailAlloc_7317_, 4, v_r_7253_);
v___x_7316_ = v_reuseFailAlloc_7317_;
goto v_reusejp_7315_;
}
v_reusejp_7315_:
{
return v___x_7316_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_7331_; 
v_l_7331_ = lean_ctor_get(v_impl_7246_, 3);
lean_inc(v_l_7331_);
if (lean_obj_tag(v_l_7331_) == 0)
{
lean_object* v_r_7332_; lean_object* v_k_7333_; lean_object* v_v_7334_; lean_object* v___x_7336_; uint8_t v_isShared_7337_; uint8_t v_isSharedCheck_7357_; 
v_r_7332_ = lean_ctor_get(v_impl_7246_, 4);
v_k_7333_ = lean_ctor_get(v_impl_7246_, 1);
v_v_7334_ = lean_ctor_get(v_impl_7246_, 2);
v_isSharedCheck_7357_ = !lean_is_exclusive(v_impl_7246_);
if (v_isSharedCheck_7357_ == 0)
{
lean_object* v_unused_7358_; lean_object* v_unused_7359_; 
v_unused_7358_ = lean_ctor_get(v_impl_7246_, 3);
lean_dec(v_unused_7358_);
v_unused_7359_ = lean_ctor_get(v_impl_7246_, 0);
lean_dec(v_unused_7359_);
v___x_7336_ = v_impl_7246_;
v_isShared_7337_ = v_isSharedCheck_7357_;
goto v_resetjp_7335_;
}
else
{
lean_inc(v_r_7332_);
lean_inc(v_v_7334_);
lean_inc(v_k_7333_);
lean_dec(v_impl_7246_);
v___x_7336_ = lean_box(0);
v_isShared_7337_ = v_isSharedCheck_7357_;
goto v_resetjp_7335_;
}
v_resetjp_7335_:
{
lean_object* v_k_7338_; lean_object* v_v_7339_; lean_object* v___x_7341_; uint8_t v_isShared_7342_; uint8_t v_isSharedCheck_7353_; 
v_k_7338_ = lean_ctor_get(v_l_7331_, 1);
v_v_7339_ = lean_ctor_get(v_l_7331_, 2);
v_isSharedCheck_7353_ = !lean_is_exclusive(v_l_7331_);
if (v_isSharedCheck_7353_ == 0)
{
lean_object* v_unused_7354_; lean_object* v_unused_7355_; lean_object* v_unused_7356_; 
v_unused_7354_ = lean_ctor_get(v_l_7331_, 4);
lean_dec(v_unused_7354_);
v_unused_7355_ = lean_ctor_get(v_l_7331_, 3);
lean_dec(v_unused_7355_);
v_unused_7356_ = lean_ctor_get(v_l_7331_, 0);
lean_dec(v_unused_7356_);
v___x_7341_ = v_l_7331_;
v_isShared_7342_ = v_isSharedCheck_7353_;
goto v_resetjp_7340_;
}
else
{
lean_inc(v_v_7339_);
lean_inc(v_k_7338_);
lean_dec(v_l_7331_);
v___x_7341_ = lean_box(0);
v_isShared_7342_ = v_isSharedCheck_7353_;
goto v_resetjp_7340_;
}
v_resetjp_7340_:
{
lean_object* v___x_7343_; lean_object* v___x_7345_; 
v___x_7343_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_7332_, 2);
if (v_isShared_7342_ == 0)
{
lean_ctor_set(v___x_7341_, 4, v_r_7332_);
lean_ctor_set(v___x_7341_, 3, v_r_7332_);
lean_ctor_set(v___x_7341_, 2, v_v_7099_);
lean_ctor_set(v___x_7341_, 1, v_k_7098_);
lean_ctor_set(v___x_7341_, 0, v___x_7247_);
v___x_7345_ = v___x_7341_;
goto v_reusejp_7344_;
}
else
{
lean_object* v_reuseFailAlloc_7352_; 
v_reuseFailAlloc_7352_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7352_, 0, v___x_7247_);
lean_ctor_set(v_reuseFailAlloc_7352_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7352_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7352_, 3, v_r_7332_);
lean_ctor_set(v_reuseFailAlloc_7352_, 4, v_r_7332_);
v___x_7345_ = v_reuseFailAlloc_7352_;
goto v_reusejp_7344_;
}
v_reusejp_7344_:
{
lean_object* v___x_7347_; 
lean_inc(v_r_7332_);
if (v_isShared_7337_ == 0)
{
lean_ctor_set(v___x_7336_, 3, v_r_7332_);
lean_ctor_set(v___x_7336_, 0, v___x_7247_);
v___x_7347_ = v___x_7336_;
goto v_reusejp_7346_;
}
else
{
lean_object* v_reuseFailAlloc_7351_; 
v_reuseFailAlloc_7351_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7351_, 0, v___x_7247_);
lean_ctor_set(v_reuseFailAlloc_7351_, 1, v_k_7333_);
lean_ctor_set(v_reuseFailAlloc_7351_, 2, v_v_7334_);
lean_ctor_set(v_reuseFailAlloc_7351_, 3, v_r_7332_);
lean_ctor_set(v_reuseFailAlloc_7351_, 4, v_r_7332_);
v___x_7347_ = v_reuseFailAlloc_7351_;
goto v_reusejp_7346_;
}
v_reusejp_7346_:
{
lean_object* v___x_7349_; 
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 4, v___x_7347_);
lean_ctor_set(v___x_7103_, 3, v___x_7345_);
lean_ctor_set(v___x_7103_, 2, v_v_7339_);
lean_ctor_set(v___x_7103_, 1, v_k_7338_);
lean_ctor_set(v___x_7103_, 0, v___x_7343_);
v___x_7349_ = v___x_7103_;
goto v_reusejp_7348_;
}
else
{
lean_object* v_reuseFailAlloc_7350_; 
v_reuseFailAlloc_7350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7350_, 0, v___x_7343_);
lean_ctor_set(v_reuseFailAlloc_7350_, 1, v_k_7338_);
lean_ctor_set(v_reuseFailAlloc_7350_, 2, v_v_7339_);
lean_ctor_set(v_reuseFailAlloc_7350_, 3, v___x_7345_);
lean_ctor_set(v_reuseFailAlloc_7350_, 4, v___x_7347_);
v___x_7349_ = v_reuseFailAlloc_7350_;
goto v_reusejp_7348_;
}
v_reusejp_7348_:
{
return v___x_7349_;
}
}
}
}
}
}
else
{
lean_object* v_r_7360_; 
v_r_7360_ = lean_ctor_get(v_impl_7246_, 4);
lean_inc(v_r_7360_);
if (lean_obj_tag(v_r_7360_) == 0)
{
lean_object* v_k_7361_; lean_object* v_v_7362_; lean_object* v___x_7364_; uint8_t v_isShared_7365_; uint8_t v_isSharedCheck_7373_; 
v_k_7361_ = lean_ctor_get(v_impl_7246_, 1);
v_v_7362_ = lean_ctor_get(v_impl_7246_, 2);
v_isSharedCheck_7373_ = !lean_is_exclusive(v_impl_7246_);
if (v_isSharedCheck_7373_ == 0)
{
lean_object* v_unused_7374_; lean_object* v_unused_7375_; lean_object* v_unused_7376_; 
v_unused_7374_ = lean_ctor_get(v_impl_7246_, 4);
lean_dec(v_unused_7374_);
v_unused_7375_ = lean_ctor_get(v_impl_7246_, 3);
lean_dec(v_unused_7375_);
v_unused_7376_ = lean_ctor_get(v_impl_7246_, 0);
lean_dec(v_unused_7376_);
v___x_7364_ = v_impl_7246_;
v_isShared_7365_ = v_isSharedCheck_7373_;
goto v_resetjp_7363_;
}
else
{
lean_inc(v_v_7362_);
lean_inc(v_k_7361_);
lean_dec(v_impl_7246_);
v___x_7364_ = lean_box(0);
v_isShared_7365_ = v_isSharedCheck_7373_;
goto v_resetjp_7363_;
}
v_resetjp_7363_:
{
lean_object* v___x_7366_; lean_object* v___x_7368_; 
v___x_7366_ = lean_unsigned_to_nat(3u);
if (v_isShared_7365_ == 0)
{
lean_ctor_set(v___x_7364_, 4, v_l_7331_);
lean_ctor_set(v___x_7364_, 2, v_v_7099_);
lean_ctor_set(v___x_7364_, 1, v_k_7098_);
lean_ctor_set(v___x_7364_, 0, v___x_7247_);
v___x_7368_ = v___x_7364_;
goto v_reusejp_7367_;
}
else
{
lean_object* v_reuseFailAlloc_7372_; 
v_reuseFailAlloc_7372_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7372_, 0, v___x_7247_);
lean_ctor_set(v_reuseFailAlloc_7372_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7372_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7372_, 3, v_l_7331_);
lean_ctor_set(v_reuseFailAlloc_7372_, 4, v_l_7331_);
v___x_7368_ = v_reuseFailAlloc_7372_;
goto v_reusejp_7367_;
}
v_reusejp_7367_:
{
lean_object* v___x_7370_; 
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 4, v_r_7360_);
lean_ctor_set(v___x_7103_, 3, v___x_7368_);
lean_ctor_set(v___x_7103_, 2, v_v_7362_);
lean_ctor_set(v___x_7103_, 1, v_k_7361_);
lean_ctor_set(v___x_7103_, 0, v___x_7366_);
v___x_7370_ = v___x_7103_;
goto v_reusejp_7369_;
}
else
{
lean_object* v_reuseFailAlloc_7371_; 
v_reuseFailAlloc_7371_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7371_, 0, v___x_7366_);
lean_ctor_set(v_reuseFailAlloc_7371_, 1, v_k_7361_);
lean_ctor_set(v_reuseFailAlloc_7371_, 2, v_v_7362_);
lean_ctor_set(v_reuseFailAlloc_7371_, 3, v___x_7368_);
lean_ctor_set(v_reuseFailAlloc_7371_, 4, v_r_7360_);
v___x_7370_ = v_reuseFailAlloc_7371_;
goto v_reusejp_7369_;
}
v_reusejp_7369_:
{
return v___x_7370_;
}
}
}
}
else
{
lean_object* v___x_7377_; lean_object* v___x_7379_; 
v___x_7377_ = lean_unsigned_to_nat(2u);
if (v_isShared_7104_ == 0)
{
lean_ctor_set(v___x_7103_, 4, v_impl_7246_);
lean_ctor_set(v___x_7103_, 3, v_r_7360_);
lean_ctor_set(v___x_7103_, 0, v___x_7377_);
v___x_7379_ = v___x_7103_;
goto v_reusejp_7378_;
}
else
{
lean_object* v_reuseFailAlloc_7380_; 
v_reuseFailAlloc_7380_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_7380_, 0, v___x_7377_);
lean_ctor_set(v_reuseFailAlloc_7380_, 1, v_k_7098_);
lean_ctor_set(v_reuseFailAlloc_7380_, 2, v_v_7099_);
lean_ctor_set(v_reuseFailAlloc_7380_, 3, v_r_7360_);
lean_ctor_set(v_reuseFailAlloc_7380_, 4, v_impl_7246_);
v___x_7379_ = v_reuseFailAlloc_7380_;
goto v_reusejp_7378_;
}
v_reusejp_7378_:
{
return v___x_7379_;
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
lean_object* v___x_7382_; lean_object* v___x_7383_; 
v___x_7382_ = lean_unsigned_to_nat(1u);
v___x_7383_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_7383_, 0, v___x_7382_);
lean_ctor_set(v___x_7383_, 1, v_k_7094_);
lean_ctor_set(v___x_7383_, 2, v_v_7095_);
lean_ctor_set(v___x_7383_, 3, v_t_7096_);
lean_ctor_set(v___x_7383_, 4, v_t_7096_);
return v___x_7383_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(lean_object* v_lib_7384_, lean_object* v_ps_7385_, lean_object* v_v_7386_, lean_object* v_o_7387_){
_start:
{
lean_object* v_name_7388_; lean_object* v_deps_7389_; lean_object* v_o_7390_; uint8_t v___x_7391_; 
v_name_7388_ = lean_ctor_get(v_lib_7384_, 1);
lean_inc_ref(v_name_7388_);
v_deps_7389_ = lean_ctor_get(v_lib_7384_, 2);
lean_inc_ref(v_deps_7389_);
v_o_7390_ = lean_array_push(v_o_7387_, v_lib_7384_);
v___x_7391_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_name_7388_, v_v_7386_);
if (v___x_7391_ == 0)
{
uint8_t v___x_7392_; 
v___x_7392_ = l_List_elem___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__1(v_name_7388_, v_ps_7385_);
if (v___x_7392_ == 0)
{
lean_object* v_ps_7393_; lean_object* v___y_7395_; 
lean_inc_ref(v_name_7388_);
v_ps_7393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_ps_7393_, 0, v_name_7388_);
lean_ctor_set(v_ps_7393_, 1, v_ps_7385_);
if (v___x_7391_ == 0)
{
lean_object* v___x_7409_; lean_object* v___x_7410_; 
v___x_7409_ = lean_box(0);
v___x_7410_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_name_7388_, v___x_7409_, v_v_7386_);
v___y_7395_ = v___x_7410_;
goto v___jp_7394_;
}
else
{
lean_dec_ref(v_name_7388_);
v___y_7395_ = v_v_7386_;
goto v___jp_7394_;
}
v___jp_7394_:
{
lean_object* v___x_7396_; lean_object* v___x_7397_; lean_object* v___x_7398_; uint8_t v___x_7399_; 
v___x_7396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7396_, 0, v___y_7395_);
lean_ctor_set(v___x_7396_, 1, v_o_7390_);
v___x_7397_ = lean_unsigned_to_nat(0u);
v___x_7398_ = lean_array_get_size(v_deps_7389_);
v___x_7399_ = lean_nat_dec_lt(v___x_7397_, v___x_7398_);
if (v___x_7399_ == 0)
{
lean_object* v___x_7400_; 
lean_dec_ref_known(v_ps_7393_, 2);
lean_dec_ref(v_deps_7389_);
v___x_7400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7400_, 0, v___x_7396_);
return v___x_7400_;
}
else
{
uint8_t v___x_7401_; 
v___x_7401_ = lean_nat_dec_le(v___x_7398_, v___x_7398_);
if (v___x_7401_ == 0)
{
if (v___x_7399_ == 0)
{
lean_object* v___x_7402_; 
lean_dec_ref_known(v_ps_7393_, 2);
lean_dec_ref(v_deps_7389_);
v___x_7402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7402_, 0, v___x_7396_);
return v___x_7402_;
}
else
{
size_t v___x_7403_; size_t v___x_7404_; lean_object* v___x_7405_; 
v___x_7403_ = ((size_t)0ULL);
v___x_7404_ = lean_usize_of_nat(v___x_7398_);
v___x_7405_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7393_, v_deps_7389_, v___x_7403_, v___x_7404_, v___x_7396_);
lean_dec_ref(v_deps_7389_);
return v___x_7405_;
}
}
else
{
size_t v___x_7406_; size_t v___x_7407_; lean_object* v___x_7408_; 
v___x_7406_ = ((size_t)0ULL);
v___x_7407_ = lean_usize_of_nat(v___x_7398_);
v___x_7408_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7393_, v_deps_7389_, v___x_7406_, v___x_7407_, v___x_7396_);
lean_dec_ref(v_deps_7389_);
return v___x_7408_;
}
}
}
}
else
{
lean_object* v___x_7411_; lean_object* v___x_7412_; 
lean_dec_ref(v_o_7390_);
lean_dec_ref(v_deps_7389_);
lean_dec(v_v_7386_);
v___x_7411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_7411_, 0, v_name_7388_);
lean_ctor_set(v___x_7411_, 1, v_ps_7385_);
v___x_7412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7412_, 0, v___x_7411_);
return v___x_7412_;
}
}
else
{
lean_object* v___x_7413_; lean_object* v___x_7414_; 
lean_dec_ref(v_deps_7389_);
lean_dec_ref(v_name_7388_);
lean_dec(v_ps_7385_);
v___x_7413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7413_, 0, v_v_7386_);
lean_ctor_set(v___x_7413_, 1, v_o_7390_);
v___x_7414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7414_, 0, v___x_7413_);
return v___x_7414_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(lean_object* v_ps_7415_, lean_object* v_as_7416_, size_t v_i_7417_, size_t v_stop_7418_, lean_object* v_b_7419_){
_start:
{
uint8_t v___x_7420_; 
v___x_7420_ = lean_usize_dec_eq(v_i_7417_, v_stop_7418_);
if (v___x_7420_ == 0)
{
lean_object* v_fst_7421_; lean_object* v_snd_7422_; lean_object* v___x_7423_; lean_object* v___x_7424_; 
v_fst_7421_ = lean_ctor_get(v_b_7419_, 0);
lean_inc(v_fst_7421_);
v_snd_7422_ = lean_ctor_get(v_b_7419_, 1);
lean_inc(v_snd_7422_);
lean_dec_ref(v_b_7419_);
v___x_7423_ = lean_array_uget_borrowed(v_as_7416_, v_i_7417_);
lean_inc(v_ps_7415_);
lean_inc(v___x_7423_);
v___x_7424_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(v___x_7423_, v_ps_7415_, v_fst_7421_, v_snd_7422_);
if (lean_obj_tag(v___x_7424_) == 0)
{
lean_dec(v_ps_7415_);
return v___x_7424_;
}
else
{
lean_object* v_a_7425_; size_t v___x_7426_; size_t v___x_7427_; 
v_a_7425_ = lean_ctor_get(v___x_7424_, 0);
lean_inc(v_a_7425_);
lean_dec_ref_known(v___x_7424_, 1);
v___x_7426_ = ((size_t)1ULL);
v___x_7427_ = lean_usize_add(v_i_7417_, v___x_7426_);
v_i_7417_ = v___x_7427_;
v_b_7419_ = v_a_7425_;
goto _start;
}
}
else
{
lean_object* v___x_7429_; 
lean_dec(v_ps_7415_);
v___x_7429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7429_, 0, v_b_7419_);
return v___x_7429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2___boxed(lean_object* v_ps_7430_, lean_object* v_as_7431_, lean_object* v_i_7432_, lean_object* v_stop_7433_, lean_object* v_b_7434_){
_start:
{
size_t v_i_boxed_7435_; size_t v_stop_boxed_7436_; lean_object* v_res_7437_; 
v_i_boxed_7435_ = lean_unbox_usize(v_i_7432_);
lean_dec(v_i_7432_);
v_stop_boxed_7436_ = lean_unbox_usize(v_stop_7433_);
lean_dec(v_stop_7433_);
v_res_7437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__2(v_ps_7430_, v_as_7431_, v_i_boxed_7435_, v_stop_boxed_7436_, v_b_7434_);
lean_dec_ref(v_as_7431_);
return v_res_7437_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(lean_object* v_00_u03b2_7438_, lean_object* v_k_7439_, lean_object* v_t_7440_){
_start:
{
uint8_t v___x_7441_; 
v___x_7441_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___redArg(v_k_7439_, v_t_7440_);
return v___x_7441_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0___boxed(lean_object* v_00_u03b2_7442_, lean_object* v_k_7443_, lean_object* v_t_7444_){
_start:
{
uint8_t v_res_7445_; lean_object* v_r_7446_; 
v_res_7445_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__0(v_00_u03b2_7442_, v_k_7443_, v_t_7444_);
lean_dec(v_t_7444_);
lean_dec_ref(v_k_7443_);
v_r_7446_ = lean_box(v_res_7445_);
return v_r_7446_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3(lean_object* v_00_u03b2_7447_, lean_object* v_k_7448_, lean_object* v_v_7449_, lean_object* v_t_7450_, lean_object* v_hl_7451_){
_start:
{
lean_object* v___x_7452_; 
v___x_7452_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Build_Common_0__Lake_mkLinkOrder_go_spec__3___redArg(v_k_7448_, v_v_7449_, v_t_7450_);
return v___x_7452_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_formatCycle___at___00Lake_mkLinkOrder_spec__0_spec__0(lean_object* v_a_7454_, lean_object* v_a_7455_){
_start:
{
if (lean_obj_tag(v_a_7454_) == 0)
{
lean_object* v___x_7456_; 
v___x_7456_ = l_List_reverse___redArg(v_a_7455_);
return v___x_7456_;
}
else
{
lean_object* v_head_7457_; lean_object* v_tail_7458_; lean_object* v___x_7460_; uint8_t v_isShared_7461_; uint8_t v_isSharedCheck_7468_; 
v_head_7457_ = lean_ctor_get(v_a_7454_, 0);
v_tail_7458_ = lean_ctor_get(v_a_7454_, 1);
v_isSharedCheck_7468_ = !lean_is_exclusive(v_a_7454_);
if (v_isSharedCheck_7468_ == 0)
{
v___x_7460_ = v_a_7454_;
v_isShared_7461_ = v_isSharedCheck_7468_;
goto v_resetjp_7459_;
}
else
{
lean_inc(v_tail_7458_);
lean_inc(v_head_7457_);
lean_dec(v_a_7454_);
v___x_7460_ = lean_box(0);
v_isShared_7461_ = v_isSharedCheck_7468_;
goto v_resetjp_7459_;
}
v_resetjp_7459_:
{
lean_object* v___x_7462_; lean_object* v___x_7463_; lean_object* v___x_7465_; 
v___x_7462_ = ((lean_object*)(l_List_mapTR_loop___at___00Lake_formatCycle___at___00Lake_mkLinkOrder_spec__0_spec__0___closed__0));
v___x_7463_ = lean_string_append(v___x_7462_, v_head_7457_);
lean_dec(v_head_7457_);
if (v_isShared_7461_ == 0)
{
lean_ctor_set(v___x_7460_, 1, v_a_7455_);
lean_ctor_set(v___x_7460_, 0, v___x_7463_);
v___x_7465_ = v___x_7460_;
goto v_reusejp_7464_;
}
else
{
lean_object* v_reuseFailAlloc_7467_; 
v_reuseFailAlloc_7467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7467_, 0, v___x_7463_);
lean_ctor_set(v_reuseFailAlloc_7467_, 1, v_a_7455_);
v___x_7465_ = v_reuseFailAlloc_7467_;
goto v_reusejp_7464_;
}
v_reusejp_7464_:
{
v_a_7454_ = v_tail_7458_;
v_a_7455_ = v___x_7465_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatCycle___at___00Lake_mkLinkOrder_spec__0(lean_object* v_cycle_7469_){
_start:
{
lean_object* v___x_7470_; lean_object* v___x_7471_; lean_object* v___x_7472_; lean_object* v___x_7473_; 
v___x_7470_ = ((lean_object*)(l_Lake_resolveArtifactOutput___closed__1));
v___x_7471_ = lean_box(0);
v___x_7472_ = l_List_mapTR_loop___at___00Lake_formatCycle___at___00Lake_mkLinkOrder_spec__0_spec__0(v_cycle_7469_, v___x_7471_);
v___x_7473_ = l_String_intercalate(v___x_7470_, v___x_7472_);
return v___x_7473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkLinkOrder_spec__1(lean_object* v_as_7474_, size_t v_i_7475_, size_t v_stop_7476_, lean_object* v_b_7477_){
_start:
{
uint8_t v___x_7478_; 
v___x_7478_ = lean_usize_dec_eq(v_i_7475_, v_stop_7476_);
if (v___x_7478_ == 0)
{
lean_object* v_fst_7479_; lean_object* v_snd_7480_; lean_object* v___x_7481_; lean_object* v___x_7482_; lean_object* v___x_7483_; 
v_fst_7479_ = lean_ctor_get(v_b_7477_, 0);
lean_inc(v_fst_7479_);
v_snd_7480_ = lean_ctor_get(v_b_7477_, 1);
lean_inc(v_snd_7480_);
lean_dec_ref(v_b_7477_);
v___x_7481_ = lean_array_uget_borrowed(v_as_7474_, v_i_7475_);
v___x_7482_ = lean_box(0);
lean_inc(v___x_7481_);
v___x_7483_ = l___private_Lake_Build_Common_0__Lake_mkLinkOrder_go(v___x_7481_, v___x_7482_, v_fst_7479_, v_snd_7480_);
if (lean_obj_tag(v___x_7483_) == 0)
{
return v___x_7483_;
}
else
{
lean_object* v_a_7484_; size_t v___x_7485_; size_t v___x_7486_; 
v_a_7484_ = lean_ctor_get(v___x_7483_, 0);
lean_inc(v_a_7484_);
lean_dec_ref_known(v___x_7483_, 1);
v___x_7485_ = ((size_t)1ULL);
v___x_7486_ = lean_usize_add(v_i_7475_, v___x_7485_);
v_i_7475_ = v___x_7486_;
v_b_7477_ = v_a_7484_;
goto _start;
}
}
else
{
lean_object* v___x_7488_; 
v___x_7488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_7488_, 0, v_b_7477_);
return v___x_7488_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkLinkOrder_spec__1___boxed(lean_object* v_as_7489_, lean_object* v_i_7490_, lean_object* v_stop_7491_, lean_object* v_b_7492_){
_start:
{
size_t v_i_boxed_7493_; size_t v_stop_boxed_7494_; lean_object* v_res_7495_; 
v_i_boxed_7493_ = lean_unbox_usize(v_i_7490_);
lean_dec(v_i_7490_);
v_stop_boxed_7494_ = lean_unbox_usize(v_stop_7491_);
lean_dec(v_stop_7491_);
v_res_7495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkLinkOrder_spec__1(v_as_7489_, v_i_boxed_7493_, v_stop_boxed_7494_, v_b_7492_);
lean_dec_ref(v_as_7489_);
return v_res_7495_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkLinkOrder___redArg(lean_object* v_libs_7502_, lean_object* v___y_7503_){
_start:
{
lean_object* v_snd_7506_; lean_object* v___y_7509_; lean_object* v___x_7533_; lean_object* v___x_7534_; lean_object* v___x_7535_; uint8_t v___x_7536_; 
v___x_7533_ = lean_unsigned_to_nat(0u);
v___x_7534_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__1));
v___x_7535_ = lean_array_get_size(v_libs_7502_);
v___x_7536_ = lean_nat_dec_lt(v___x_7533_, v___x_7535_);
if (v___x_7536_ == 0)
{
v_snd_7506_ = v___x_7534_;
goto v___jp_7505_;
}
else
{
lean_object* v___x_7537_; uint8_t v___x_7538_; 
v___x_7537_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__2));
v___x_7538_ = lean_nat_dec_le(v___x_7535_, v___x_7535_);
if (v___x_7538_ == 0)
{
if (v___x_7536_ == 0)
{
v_snd_7506_ = v___x_7534_;
goto v___jp_7505_;
}
else
{
size_t v___x_7539_; size_t v___x_7540_; lean_object* v___x_7541_; 
v___x_7539_ = ((size_t)0ULL);
v___x_7540_ = lean_usize_of_nat(v___x_7535_);
v___x_7541_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkLinkOrder_spec__1(v_libs_7502_, v___x_7539_, v___x_7540_, v___x_7537_);
v___y_7509_ = v___x_7541_;
goto v___jp_7508_;
}
}
else
{
size_t v___x_7542_; size_t v___x_7543_; lean_object* v___x_7544_; 
v___x_7542_ = ((size_t)0ULL);
v___x_7543_ = lean_usize_of_nat(v___x_7535_);
v___x_7544_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkLinkOrder_spec__1(v_libs_7502_, v___x_7542_, v___x_7543_, v___x_7537_);
v___y_7509_ = v___x_7544_;
goto v___jp_7508_;
}
}
v___jp_7505_:
{
lean_object* v___x_7507_; 
v___x_7507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7507_, 0, v_snd_7506_);
lean_ctor_set(v___x_7507_, 1, v___y_7503_);
return v___x_7507_;
}
v___jp_7508_:
{
if (lean_obj_tag(v___y_7509_) == 0)
{
lean_object* v_a_7510_; lean_object* v_log_7511_; uint8_t v_action_7512_; uint8_t v_wantsRebuild_7513_; lean_object* v_trace_7514_; lean_object* v_buildTime_7515_; lean_object* v___x_7517_; uint8_t v_isShared_7518_; uint8_t v_isSharedCheck_7530_; 
v_a_7510_ = lean_ctor_get(v___y_7509_, 0);
lean_inc(v_a_7510_);
lean_dec_ref_known(v___y_7509_, 1);
v_log_7511_ = lean_ctor_get(v___y_7503_, 0);
v_action_7512_ = lean_ctor_get_uint8(v___y_7503_, sizeof(void*)*3);
v_wantsRebuild_7513_ = lean_ctor_get_uint8(v___y_7503_, sizeof(void*)*3 + 1);
v_trace_7514_ = lean_ctor_get(v___y_7503_, 1);
v_buildTime_7515_ = lean_ctor_get(v___y_7503_, 2);
v_isSharedCheck_7530_ = !lean_is_exclusive(v___y_7503_);
if (v_isSharedCheck_7530_ == 0)
{
v___x_7517_ = v___y_7503_;
v_isShared_7518_ = v_isSharedCheck_7530_;
goto v_resetjp_7516_;
}
else
{
lean_inc(v_buildTime_7515_);
lean_inc(v_trace_7514_);
lean_inc(v_log_7511_);
lean_dec(v___y_7503_);
v___x_7517_ = lean_box(0);
v_isShared_7518_ = v_isSharedCheck_7530_;
goto v_resetjp_7516_;
}
v_resetjp_7516_:
{
lean_object* v___x_7519_; lean_object* v___x_7520_; lean_object* v___x_7521_; uint8_t v___x_7522_; lean_object* v___x_7523_; lean_object* v___x_7524_; lean_object* v___x_7525_; lean_object* v___x_7527_; 
v___x_7519_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__0));
v___x_7520_ = l_Lake_formatCycle___at___00Lake_mkLinkOrder_spec__0(v_a_7510_);
v___x_7521_ = lean_string_append(v___x_7519_, v___x_7520_);
lean_dec_ref(v___x_7520_);
v___x_7522_ = 3;
v___x_7523_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_7523_, 0, v___x_7521_);
lean_ctor_set_uint8(v___x_7523_, sizeof(void*)*1, v___x_7522_);
v___x_7524_ = lean_array_get_size(v_log_7511_);
v___x_7525_ = lean_array_push(v_log_7511_, v___x_7523_);
if (v_isShared_7518_ == 0)
{
lean_ctor_set(v___x_7517_, 0, v___x_7525_);
v___x_7527_ = v___x_7517_;
goto v_reusejp_7526_;
}
else
{
lean_object* v_reuseFailAlloc_7529_; 
v_reuseFailAlloc_7529_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7529_, 0, v___x_7525_);
lean_ctor_set(v_reuseFailAlloc_7529_, 1, v_trace_7514_);
lean_ctor_set(v_reuseFailAlloc_7529_, 2, v_buildTime_7515_);
lean_ctor_set_uint8(v_reuseFailAlloc_7529_, sizeof(void*)*3, v_action_7512_);
lean_ctor_set_uint8(v_reuseFailAlloc_7529_, sizeof(void*)*3 + 1, v_wantsRebuild_7513_);
v___x_7527_ = v_reuseFailAlloc_7529_;
goto v_reusejp_7526_;
}
v_reusejp_7526_:
{
lean_object* v___x_7528_; 
v___x_7528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_7528_, 0, v___x_7524_);
lean_ctor_set(v___x_7528_, 1, v___x_7527_);
return v___x_7528_;
}
}
}
else
{
lean_object* v_a_7531_; lean_object* v_snd_7532_; 
v_a_7531_ = lean_ctor_get(v___y_7509_, 0);
lean_inc(v_a_7531_);
lean_dec_ref_known(v___y_7509_, 1);
v_snd_7532_ = lean_ctor_get(v_a_7531_, 1);
lean_inc(v_snd_7532_);
lean_dec(v_a_7531_);
v_snd_7506_ = v_snd_7532_;
goto v___jp_7505_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_mkLinkOrder___redArg___boxed(lean_object* v_libs_7545_, lean_object* v___y_7546_, lean_object* v___y_7547_){
_start:
{
lean_object* v_res_7548_; 
v_res_7548_ = l_Lake_mkLinkOrder___redArg(v_libs_7545_, v___y_7546_);
lean_dec_ref(v_libs_7545_);
return v_res_7548_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkLinkOrder(lean_object* v_libs_7549_, lean_object* v___y_7550_, lean_object* v___y_7551_, lean_object* v___y_7552_, lean_object* v___y_7553_, lean_object* v___y_7554_, lean_object* v___y_7555_){
_start:
{
lean_object* v___x_7557_; 
v___x_7557_ = l_Lake_mkLinkOrder___redArg(v_libs_7549_, v___y_7555_);
return v___x_7557_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkLinkOrder___boxed(lean_object* v_libs_7558_, lean_object* v___y_7559_, lean_object* v___y_7560_, lean_object* v___y_7561_, lean_object* v___y_7562_, lean_object* v___y_7563_, lean_object* v___y_7564_, lean_object* v___y_7565_){
_start:
{
lean_object* v_res_7566_; 
v_res_7566_ = l_Lake_mkLinkOrder(v_libs_7558_, v___y_7559_, v___y_7560_, v___y_7561_, v___y_7562_, v___y_7563_, v___y_7564_);
lean_dec_ref(v___y_7563_);
lean_dec(v___y_7562_);
lean_dec(v___y_7561_);
lean_dec(v___y_7560_);
lean_dec_ref(v___y_7559_);
lean_dec_ref(v_libs_7558_);
return v_res_7566_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkLinkArgs___redArg(lean_object* v_objs_7567_, lean_object* v_libs_7568_, uint8_t v_linkDeps_7569_, lean_object* v___y_7570_){
_start:
{
lean_object* v_libs_7573_; lean_object* v___y_7574_; 
if (v_linkDeps_7569_ == 0)
{
lean_object* v___x_7577_; 
v___x_7577_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__1));
v_libs_7573_ = v___x_7577_;
v___y_7574_ = v___y_7570_;
goto v___jp_7572_;
}
else
{
lean_object* v___x_7578_; 
v___x_7578_ = l_Lake_mkLinkOrder___redArg(v_libs_7568_, v___y_7570_);
if (lean_obj_tag(v___x_7578_) == 0)
{
lean_object* v_a_7579_; lean_object* v_a_7580_; 
v_a_7579_ = lean_ctor_get(v___x_7578_, 0);
lean_inc(v_a_7579_);
v_a_7580_ = lean_ctor_get(v___x_7578_, 1);
lean_inc(v_a_7580_);
lean_dec_ref_known(v___x_7578_, 2);
v_libs_7573_ = v_a_7579_;
v___y_7574_ = v_a_7580_;
goto v___jp_7572_;
}
else
{
lean_object* v_a_7581_; lean_object* v_a_7582_; lean_object* v___x_7584_; uint8_t v_isShared_7585_; uint8_t v_isSharedCheck_7589_; 
v_a_7581_ = lean_ctor_get(v___x_7578_, 0);
v_a_7582_ = lean_ctor_get(v___x_7578_, 1);
v_isSharedCheck_7589_ = !lean_is_exclusive(v___x_7578_);
if (v_isSharedCheck_7589_ == 0)
{
v___x_7584_ = v___x_7578_;
v_isShared_7585_ = v_isSharedCheck_7589_;
goto v_resetjp_7583_;
}
else
{
lean_inc(v_a_7582_);
lean_inc(v_a_7581_);
lean_dec(v___x_7578_);
v___x_7584_ = lean_box(0);
v_isShared_7585_ = v_isSharedCheck_7589_;
goto v_resetjp_7583_;
}
v_resetjp_7583_:
{
lean_object* v___x_7587_; 
if (v_isShared_7585_ == 0)
{
v___x_7587_ = v___x_7584_;
goto v_reusejp_7586_;
}
else
{
lean_object* v_reuseFailAlloc_7588_; 
v_reuseFailAlloc_7588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7588_, 0, v_a_7581_);
lean_ctor_set(v_reuseFailAlloc_7588_, 1, v_a_7582_);
v___x_7587_ = v_reuseFailAlloc_7588_;
goto v_reusejp_7586_;
}
v_reusejp_7586_:
{
return v___x_7587_;
}
}
}
}
v___jp_7572_:
{
lean_object* v___x_7575_; lean_object* v___x_7576_; 
v___x_7575_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7567_, v_libs_7573_);
lean_dec_ref(v_libs_7573_);
v___x_7576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7576_, 0, v___x_7575_);
lean_ctor_set(v___x_7576_, 1, v___y_7574_);
return v___x_7576_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_mkLinkArgs___redArg___boxed(lean_object* v_objs_7590_, lean_object* v_libs_7591_, lean_object* v_linkDeps_7592_, lean_object* v___y_7593_, lean_object* v___y_7594_){
_start:
{
uint8_t v_linkDeps_boxed_7595_; lean_object* v_res_7596_; 
v_linkDeps_boxed_7595_ = lean_unbox(v_linkDeps_7592_);
v_res_7596_ = l_Lake_mkLinkArgs___redArg(v_objs_7590_, v_libs_7591_, v_linkDeps_boxed_7595_, v___y_7593_);
lean_dec_ref(v_libs_7591_);
lean_dec_ref(v_objs_7590_);
return v_res_7596_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkLinkArgs(lean_object* v_objs_7597_, lean_object* v_libs_7598_, uint8_t v_linkDeps_7599_, lean_object* v___y_7600_, lean_object* v___y_7601_, lean_object* v___y_7602_, lean_object* v___y_7603_, lean_object* v___y_7604_, lean_object* v___y_7605_){
_start:
{
lean_object* v_libs_7608_; lean_object* v___y_7609_; 
if (v_linkDeps_7599_ == 0)
{
lean_object* v___x_7612_; 
v___x_7612_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__1));
v_libs_7608_ = v___x_7612_;
v___y_7609_ = v___y_7605_;
goto v___jp_7607_;
}
else
{
lean_object* v___x_7613_; 
v___x_7613_ = l_Lake_mkLinkOrder___redArg(v_libs_7598_, v___y_7605_);
if (lean_obj_tag(v___x_7613_) == 0)
{
lean_object* v_a_7614_; lean_object* v_a_7615_; 
v_a_7614_ = lean_ctor_get(v___x_7613_, 0);
lean_inc(v_a_7614_);
v_a_7615_ = lean_ctor_get(v___x_7613_, 1);
lean_inc(v_a_7615_);
lean_dec_ref_known(v___x_7613_, 2);
v_libs_7608_ = v_a_7614_;
v___y_7609_ = v_a_7615_;
goto v___jp_7607_;
}
else
{
lean_object* v_a_7616_; lean_object* v_a_7617_; lean_object* v___x_7619_; uint8_t v_isShared_7620_; uint8_t v_isSharedCheck_7624_; 
v_a_7616_ = lean_ctor_get(v___x_7613_, 0);
v_a_7617_ = lean_ctor_get(v___x_7613_, 1);
v_isSharedCheck_7624_ = !lean_is_exclusive(v___x_7613_);
if (v_isSharedCheck_7624_ == 0)
{
v___x_7619_ = v___x_7613_;
v_isShared_7620_ = v_isSharedCheck_7624_;
goto v_resetjp_7618_;
}
else
{
lean_inc(v_a_7617_);
lean_inc(v_a_7616_);
lean_dec(v___x_7613_);
v___x_7619_ = lean_box(0);
v_isShared_7620_ = v_isSharedCheck_7624_;
goto v_resetjp_7618_;
}
v_resetjp_7618_:
{
lean_object* v___x_7622_; 
if (v_isShared_7620_ == 0)
{
v___x_7622_ = v___x_7619_;
goto v_reusejp_7621_;
}
else
{
lean_object* v_reuseFailAlloc_7623_; 
v_reuseFailAlloc_7623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7623_, 0, v_a_7616_);
lean_ctor_set(v_reuseFailAlloc_7623_, 1, v_a_7617_);
v___x_7622_ = v_reuseFailAlloc_7623_;
goto v_reusejp_7621_;
}
v_reusejp_7621_:
{
return v___x_7622_;
}
}
}
}
v___jp_7607_:
{
lean_object* v___x_7610_; lean_object* v___x_7611_; 
v___x_7610_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7597_, v_libs_7608_);
lean_dec_ref(v_libs_7608_);
v___x_7611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7611_, 0, v___x_7610_);
lean_ctor_set(v___x_7611_, 1, v___y_7609_);
return v___x_7611_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_mkLinkArgs___boxed(lean_object* v_objs_7625_, lean_object* v_libs_7626_, lean_object* v_linkDeps_7627_, lean_object* v___y_7628_, lean_object* v___y_7629_, lean_object* v___y_7630_, lean_object* v___y_7631_, lean_object* v___y_7632_, lean_object* v___y_7633_, lean_object* v___y_7634_){
_start:
{
uint8_t v_linkDeps_boxed_7635_; lean_object* v_res_7636_; 
v_linkDeps_boxed_7635_ = lean_unbox(v_linkDeps_7627_);
v_res_7636_ = l_Lake_mkLinkArgs(v_objs_7625_, v_libs_7626_, v_linkDeps_boxed_7635_, v___y_7628_, v___y_7629_, v___y_7630_, v___y_7631_, v___y_7632_, v___y_7633_);
lean_dec_ref(v___y_7632_);
lean_dec(v___y_7631_);
lean_dec(v___y_7630_);
lean_dec(v___y_7629_);
lean_dec_ref(v___y_7628_);
lean_dec_ref(v_libs_7626_);
lean_dec_ref(v_objs_7625_);
return v_res_7636_;
}
}
static lean_object* _init_l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0(void){
_start:
{
lean_object* v___x_7637_; lean_object* v___x_7638_; lean_object* v___x_7639_; lean_object* v___x_7640_; 
v___x_7637_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Common_0__Lake_mkLinkObjArgs_spec__1___closed__1));
v___x_7638_ = lean_unsigned_to_nat(2u);
v___x_7639_ = lean_mk_empty_array_with_capacity(v___x_7638_);
v___x_7640_ = lean_array_push(v___x_7639_, v___x_7637_);
return v___x_7640_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg(lean_object* v_objs_7641_, lean_object* v_libs_7642_, lean_object* v_args_7643_, uint8_t v_linkDeps_7644_, uint8_t v_sharedLean_7645_, lean_object* v___y_7646_, lean_object* v___y_7647_){
_start:
{
lean_object* v_toContext_7649_; lean_object* v_lakeEnv_7650_; lean_object* v_lean_7651_; lean_object* v_libs_7653_; lean_object* v___y_7654_; 
v_toContext_7649_ = lean_ctor_get(v___y_7646_, 1);
v_lakeEnv_7650_ = lean_ctor_get(v_toContext_7649_, 0);
v_lean_7651_ = lean_ctor_get(v_lakeEnv_7650_, 1);
if (v_linkDeps_7644_ == 0)
{
lean_object* v___x_7664_; 
v___x_7664_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__1));
v_libs_7653_ = v___x_7664_;
v___y_7654_ = v___y_7647_;
goto v___jp_7652_;
}
else
{
lean_object* v___x_7665_; 
v___x_7665_ = l_Lake_mkLinkOrder___redArg(v_libs_7642_, v___y_7647_);
if (lean_obj_tag(v___x_7665_) == 0)
{
lean_object* v_a_7666_; lean_object* v_a_7667_; 
v_a_7666_ = lean_ctor_get(v___x_7665_, 0);
lean_inc(v_a_7666_);
v_a_7667_ = lean_ctor_get(v___x_7665_, 1);
lean_inc(v_a_7667_);
lean_dec_ref_known(v___x_7665_, 2);
v_libs_7653_ = v_a_7666_;
v___y_7654_ = v_a_7667_;
goto v___jp_7652_;
}
else
{
lean_object* v_a_7668_; lean_object* v_a_7669_; lean_object* v___x_7671_; uint8_t v_isShared_7672_; uint8_t v_isSharedCheck_7676_; 
v_a_7668_ = lean_ctor_get(v___x_7665_, 0);
v_a_7669_ = lean_ctor_get(v___x_7665_, 1);
v_isSharedCheck_7676_ = !lean_is_exclusive(v___x_7665_);
if (v_isSharedCheck_7676_ == 0)
{
v___x_7671_ = v___x_7665_;
v_isShared_7672_ = v_isSharedCheck_7676_;
goto v_resetjp_7670_;
}
else
{
lean_inc(v_a_7669_);
lean_inc(v_a_7668_);
lean_dec(v___x_7665_);
v___x_7671_ = lean_box(0);
v_isShared_7672_ = v_isSharedCheck_7676_;
goto v_resetjp_7670_;
}
v_resetjp_7670_:
{
lean_object* v___x_7674_; 
if (v_isShared_7672_ == 0)
{
v___x_7674_ = v___x_7671_;
goto v_reusejp_7673_;
}
else
{
lean_object* v_reuseFailAlloc_7675_; 
v_reuseFailAlloc_7675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7675_, 0, v_a_7668_);
lean_ctor_set(v_reuseFailAlloc_7675_, 1, v_a_7669_);
v___x_7674_ = v_reuseFailAlloc_7675_;
goto v_reusejp_7673_;
}
v_reusejp_7673_:
{
return v___x_7674_;
}
}
}
}
v___jp_7652_:
{
lean_object* v_leanLibDir_7655_; lean_object* v___x_7656_; lean_object* v___x_7657_; lean_object* v___x_7658_; lean_object* v___x_7659_; lean_object* v___x_7660_; lean_object* v___x_7661_; lean_object* v___x_7662_; lean_object* v___x_7663_; 
v_leanLibDir_7655_ = lean_ctor_get(v_lean_7651_, 3);
v___x_7656_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7641_, v_libs_7653_);
lean_dec_ref(v_libs_7653_);
v___x_7657_ = l_Array_append___redArg(v___x_7656_, v_args_7643_);
v___x_7658_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0);
lean_inc_ref(v_leanLibDir_7655_);
v___x_7659_ = lean_array_push(v___x_7658_, v_leanLibDir_7655_);
v___x_7660_ = l_Array_append___redArg(v___x_7657_, v___x_7659_);
lean_dec_ref(v___x_7659_);
v___x_7661_ = l_Lake_LeanInstall_ccLinkFlags(v_sharedLean_7645_, v_lean_7651_);
v___x_7662_ = l_Array_append___redArg(v___x_7660_, v___x_7661_);
lean_dec_ref(v___x_7661_);
v___x_7663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7663_, 0, v___x_7662_);
lean_ctor_set(v___x_7663_, 1, v___y_7654_);
return v___x_7663_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___boxed(lean_object* v_objs_7677_, lean_object* v_libs_7678_, lean_object* v_args_7679_, lean_object* v_linkDeps_7680_, lean_object* v_sharedLean_7681_, lean_object* v___y_7682_, lean_object* v___y_7683_, lean_object* v___y_7684_){
_start:
{
uint8_t v_linkDeps_boxed_7685_; uint8_t v_sharedLean_boxed_7686_; lean_object* v_res_7687_; 
v_linkDeps_boxed_7685_ = lean_unbox(v_linkDeps_7680_);
v_sharedLean_boxed_7686_ = lean_unbox(v_sharedLean_7681_);
v_res_7687_ = l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg(v_objs_7677_, v_libs_7678_, v_args_7679_, v_linkDeps_boxed_7685_, v_sharedLean_boxed_7686_, v___y_7682_, v___y_7683_);
lean_dec_ref(v___y_7682_);
lean_dec_ref(v_args_7679_);
lean_dec_ref(v_libs_7678_);
lean_dec_ref(v_objs_7677_);
return v_res_7687_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs(lean_object* v_objs_7688_, lean_object* v_libs_7689_, lean_object* v_args_7690_, uint8_t v_linkDeps_7691_, uint8_t v_sharedLean_7692_, lean_object* v___y_7693_, lean_object* v___y_7694_, lean_object* v___y_7695_, lean_object* v___y_7696_, lean_object* v___y_7697_, lean_object* v___y_7698_){
_start:
{
lean_object* v_toContext_7700_; lean_object* v_lakeEnv_7701_; lean_object* v_lean_7702_; lean_object* v_libs_7704_; lean_object* v___y_7705_; 
v_toContext_7700_ = lean_ctor_get(v___y_7697_, 1);
v_lakeEnv_7701_ = lean_ctor_get(v_toContext_7700_, 0);
v_lean_7702_ = lean_ctor_get(v_lakeEnv_7701_, 1);
if (v_linkDeps_7691_ == 0)
{
lean_object* v___x_7717_; 
v___x_7717_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__1));
v_libs_7704_ = v___x_7717_;
v___y_7705_ = v___y_7698_;
goto v___jp_7703_;
}
else
{
lean_object* v___x_7718_; 
v___x_7718_ = l_Lake_mkLinkOrder___redArg(v_libs_7689_, v___y_7698_);
if (lean_obj_tag(v___x_7718_) == 0)
{
lean_object* v_a_7719_; lean_object* v_a_7720_; 
v_a_7719_ = lean_ctor_get(v___x_7718_, 0);
lean_inc(v_a_7719_);
v_a_7720_ = lean_ctor_get(v___x_7718_, 1);
lean_inc(v_a_7720_);
lean_dec_ref_known(v___x_7718_, 2);
v_libs_7704_ = v_a_7719_;
v___y_7705_ = v_a_7720_;
goto v___jp_7703_;
}
else
{
lean_object* v_a_7721_; lean_object* v_a_7722_; lean_object* v___x_7724_; uint8_t v_isShared_7725_; uint8_t v_isSharedCheck_7729_; 
v_a_7721_ = lean_ctor_get(v___x_7718_, 0);
v_a_7722_ = lean_ctor_get(v___x_7718_, 1);
v_isSharedCheck_7729_ = !lean_is_exclusive(v___x_7718_);
if (v_isSharedCheck_7729_ == 0)
{
v___x_7724_ = v___x_7718_;
v_isShared_7725_ = v_isSharedCheck_7729_;
goto v_resetjp_7723_;
}
else
{
lean_inc(v_a_7722_);
lean_inc(v_a_7721_);
lean_dec(v___x_7718_);
v___x_7724_ = lean_box(0);
v_isShared_7725_ = v_isSharedCheck_7729_;
goto v_resetjp_7723_;
}
v_resetjp_7723_:
{
lean_object* v___x_7727_; 
if (v_isShared_7725_ == 0)
{
v___x_7727_ = v___x_7724_;
goto v_reusejp_7726_;
}
else
{
lean_object* v_reuseFailAlloc_7728_; 
v_reuseFailAlloc_7728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7728_, 0, v_a_7721_);
lean_ctor_set(v_reuseFailAlloc_7728_, 1, v_a_7722_);
v___x_7727_ = v_reuseFailAlloc_7728_;
goto v_reusejp_7726_;
}
v_reusejp_7726_:
{
return v___x_7727_;
}
}
}
}
v___jp_7703_:
{
lean_object* v_leanLibDir_7706_; lean_object* v___x_7707_; lean_object* v___x_7708_; lean_object* v___x_7709_; lean_object* v___x_7710_; lean_object* v___x_7711_; lean_object* v___x_7712_; lean_object* v___x_7713_; lean_object* v___x_7714_; lean_object* v___x_7715_; lean_object* v___x_7716_; 
v_leanLibDir_7706_ = lean_ctor_get(v_lean_7702_, 3);
v___x_7707_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_objs_7688_, v_libs_7704_);
lean_dec_ref(v_libs_7704_);
v___x_7708_ = l_Array_append___redArg(v___x_7707_, v_args_7690_);
v___x_7709_ = lean_unsigned_to_nat(2u);
v___x_7710_ = lean_mk_empty_array_with_capacity(v___x_7709_);
lean_dec_ref(v___x_7710_);
v___x_7711_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0);
lean_inc_ref(v_leanLibDir_7706_);
v___x_7712_ = lean_array_push(v___x_7711_, v_leanLibDir_7706_);
v___x_7713_ = l_Array_append___redArg(v___x_7708_, v___x_7712_);
lean_dec_ref(v___x_7712_);
v___x_7714_ = l_Lake_LeanInstall_ccLinkFlags(v_sharedLean_7692_, v_lean_7702_);
v___x_7715_ = l_Array_append___redArg(v___x_7713_, v___x_7714_);
lean_dec_ref(v___x_7714_);
v___x_7716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7716_, 0, v___x_7715_);
lean_ctor_set(v___x_7716_, 1, v___y_7705_);
return v___x_7716_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___boxed(lean_object* v_objs_7730_, lean_object* v_libs_7731_, lean_object* v_args_7732_, lean_object* v_linkDeps_7733_, lean_object* v_sharedLean_7734_, lean_object* v___y_7735_, lean_object* v___y_7736_, lean_object* v___y_7737_, lean_object* v___y_7738_, lean_object* v___y_7739_, lean_object* v___y_7740_, lean_object* v___y_7741_){
_start:
{
uint8_t v_linkDeps_boxed_7742_; uint8_t v_sharedLean_boxed_7743_; lean_object* v_res_7744_; 
v_linkDeps_boxed_7742_ = lean_unbox(v_linkDeps_7733_);
v_sharedLean_boxed_7743_ = lean_unbox(v_sharedLean_7734_);
v_res_7744_ = l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs(v_objs_7730_, v_libs_7731_, v_args_7732_, v_linkDeps_boxed_7742_, v_sharedLean_boxed_7743_, v___y_7735_, v___y_7736_, v___y_7737_, v___y_7738_, v___y_7739_, v___y_7740_);
lean_dec_ref(v___y_7739_);
lean_dec(v___y_7738_);
lean_dec(v___y_7737_);
lean_dec(v___y_7736_);
lean_dec_ref(v___y_7735_);
lean_dec_ref(v_args_7732_);
lean_dec_ref(v_libs_7731_);
lean_dec_ref(v_objs_7730_);
return v_res_7744_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLibSync___lam__0(lean_object* v_linkObjs_7745_, lean_object* v_args_7746_, lean_object* v_libFile_7747_, lean_object* v_linker_7748_, lean_object* v___y_7749_, uint8_t v_linkDeps_7750_, lean_object* v_linkLibs_7751_, lean_object* v___y_7752_, lean_object* v___y_7753_, lean_object* v___y_7754_, lean_object* v___y_7755_, lean_object* v___y_7756_, lean_object* v___y_7757_){
_start:
{
lean_object* v_libs_7760_; lean_object* v___y_7761_; 
if (v_linkDeps_7750_ == 0)
{
lean_object* v___x_7798_; 
v___x_7798_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__1));
v_libs_7760_ = v___x_7798_;
v___y_7761_ = v___y_7757_;
goto v___jp_7759_;
}
else
{
lean_object* v___x_7799_; 
v___x_7799_ = l_Lake_mkLinkOrder___redArg(v_linkLibs_7751_, v___y_7757_);
if (lean_obj_tag(v___x_7799_) == 0)
{
lean_object* v_a_7800_; lean_object* v_a_7801_; 
v_a_7800_ = lean_ctor_get(v___x_7799_, 0);
lean_inc(v_a_7800_);
v_a_7801_ = lean_ctor_get(v___x_7799_, 1);
lean_inc(v_a_7801_);
lean_dec_ref_known(v___x_7799_, 2);
v_libs_7760_ = v_a_7800_;
v___y_7761_ = v_a_7801_;
goto v___jp_7759_;
}
else
{
lean_object* v_a_7802_; lean_object* v_a_7803_; lean_object* v___x_7805_; uint8_t v_isShared_7806_; uint8_t v_isSharedCheck_7810_; 
lean_dec(v___y_7749_);
lean_dec_ref(v_linker_7748_);
lean_dec_ref(v_libFile_7747_);
v_a_7802_ = lean_ctor_get(v___x_7799_, 0);
v_a_7803_ = lean_ctor_get(v___x_7799_, 1);
v_isSharedCheck_7810_ = !lean_is_exclusive(v___x_7799_);
if (v_isSharedCheck_7810_ == 0)
{
v___x_7805_ = v___x_7799_;
v_isShared_7806_ = v_isSharedCheck_7810_;
goto v_resetjp_7804_;
}
else
{
lean_inc(v_a_7803_);
lean_inc(v_a_7802_);
lean_dec(v___x_7799_);
v___x_7805_ = lean_box(0);
v_isShared_7806_ = v_isSharedCheck_7810_;
goto v_resetjp_7804_;
}
v_resetjp_7804_:
{
lean_object* v___x_7808_; 
if (v_isShared_7806_ == 0)
{
v___x_7808_ = v___x_7805_;
goto v_reusejp_7807_;
}
else
{
lean_object* v_reuseFailAlloc_7809_; 
v_reuseFailAlloc_7809_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7809_, 0, v_a_7802_);
lean_ctor_set(v_reuseFailAlloc_7809_, 1, v_a_7803_);
v___x_7808_ = v_reuseFailAlloc_7809_;
goto v_reusejp_7807_;
}
v_reusejp_7807_:
{
return v___x_7808_;
}
}
}
}
v___jp_7759_:
{
lean_object* v_log_7762_; uint8_t v_action_7763_; uint8_t v_wantsRebuild_7764_; lean_object* v_trace_7765_; lean_object* v_buildTime_7766_; lean_object* v___x_7768_; uint8_t v_isShared_7769_; uint8_t v_isSharedCheck_7797_; 
v_log_7762_ = lean_ctor_get(v___y_7761_, 0);
v_action_7763_ = lean_ctor_get_uint8(v___y_7761_, sizeof(void*)*3);
v_wantsRebuild_7764_ = lean_ctor_get_uint8(v___y_7761_, sizeof(void*)*3 + 1);
v_trace_7765_ = lean_ctor_get(v___y_7761_, 1);
v_buildTime_7766_ = lean_ctor_get(v___y_7761_, 2);
v_isSharedCheck_7797_ = !lean_is_exclusive(v___y_7761_);
if (v_isSharedCheck_7797_ == 0)
{
v___x_7768_ = v___y_7761_;
v_isShared_7769_ = v_isSharedCheck_7797_;
goto v_resetjp_7767_;
}
else
{
lean_inc(v_buildTime_7766_);
lean_inc(v_trace_7765_);
lean_inc(v_log_7762_);
lean_dec(v___y_7761_);
v___x_7768_ = lean_box(0);
v_isShared_7769_ = v_isSharedCheck_7797_;
goto v_resetjp_7767_;
}
v_resetjp_7767_:
{
lean_object* v___x_7770_; lean_object* v___x_7771_; lean_object* v___x_7772_; 
v___x_7770_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_linkObjs_7745_, v_libs_7760_);
lean_dec_ref(v_libs_7760_);
v___x_7771_ = l_Array_append___redArg(v___x_7770_, v_args_7746_);
v___x_7772_ = l_Lake_compileSharedLib(v_libFile_7747_, v___x_7771_, v_linker_7748_, v___y_7749_, v_log_7762_);
lean_dec_ref(v___x_7771_);
if (lean_obj_tag(v___x_7772_) == 0)
{
lean_object* v_a_7773_; lean_object* v_a_7774_; lean_object* v___x_7776_; uint8_t v_isShared_7777_; uint8_t v_isSharedCheck_7784_; 
v_a_7773_ = lean_ctor_get(v___x_7772_, 0);
v_a_7774_ = lean_ctor_get(v___x_7772_, 1);
v_isSharedCheck_7784_ = !lean_is_exclusive(v___x_7772_);
if (v_isSharedCheck_7784_ == 0)
{
v___x_7776_ = v___x_7772_;
v_isShared_7777_ = v_isSharedCheck_7784_;
goto v_resetjp_7775_;
}
else
{
lean_inc(v_a_7774_);
lean_inc(v_a_7773_);
lean_dec(v___x_7772_);
v___x_7776_ = lean_box(0);
v_isShared_7777_ = v_isSharedCheck_7784_;
goto v_resetjp_7775_;
}
v_resetjp_7775_:
{
lean_object* v___x_7779_; 
if (v_isShared_7769_ == 0)
{
lean_ctor_set(v___x_7768_, 0, v_a_7774_);
v___x_7779_ = v___x_7768_;
goto v_reusejp_7778_;
}
else
{
lean_object* v_reuseFailAlloc_7783_; 
v_reuseFailAlloc_7783_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7783_, 0, v_a_7774_);
lean_ctor_set(v_reuseFailAlloc_7783_, 1, v_trace_7765_);
lean_ctor_set(v_reuseFailAlloc_7783_, 2, v_buildTime_7766_);
lean_ctor_set_uint8(v_reuseFailAlloc_7783_, sizeof(void*)*3, v_action_7763_);
lean_ctor_set_uint8(v_reuseFailAlloc_7783_, sizeof(void*)*3 + 1, v_wantsRebuild_7764_);
v___x_7779_ = v_reuseFailAlloc_7783_;
goto v_reusejp_7778_;
}
v_reusejp_7778_:
{
lean_object* v___x_7781_; 
if (v_isShared_7777_ == 0)
{
lean_ctor_set(v___x_7776_, 1, v___x_7779_);
v___x_7781_ = v___x_7776_;
goto v_reusejp_7780_;
}
else
{
lean_object* v_reuseFailAlloc_7782_; 
v_reuseFailAlloc_7782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7782_, 0, v_a_7773_);
lean_ctor_set(v_reuseFailAlloc_7782_, 1, v___x_7779_);
v___x_7781_ = v_reuseFailAlloc_7782_;
goto v_reusejp_7780_;
}
v_reusejp_7780_:
{
return v___x_7781_;
}
}
}
}
else
{
lean_object* v_a_7785_; lean_object* v_a_7786_; lean_object* v___x_7788_; uint8_t v_isShared_7789_; uint8_t v_isSharedCheck_7796_; 
v_a_7785_ = lean_ctor_get(v___x_7772_, 0);
v_a_7786_ = lean_ctor_get(v___x_7772_, 1);
v_isSharedCheck_7796_ = !lean_is_exclusive(v___x_7772_);
if (v_isSharedCheck_7796_ == 0)
{
v___x_7788_ = v___x_7772_;
v_isShared_7789_ = v_isSharedCheck_7796_;
goto v_resetjp_7787_;
}
else
{
lean_inc(v_a_7786_);
lean_inc(v_a_7785_);
lean_dec(v___x_7772_);
v___x_7788_ = lean_box(0);
v_isShared_7789_ = v_isSharedCheck_7796_;
goto v_resetjp_7787_;
}
v_resetjp_7787_:
{
lean_object* v___x_7791_; 
if (v_isShared_7769_ == 0)
{
lean_ctor_set(v___x_7768_, 0, v_a_7786_);
v___x_7791_ = v___x_7768_;
goto v_reusejp_7790_;
}
else
{
lean_object* v_reuseFailAlloc_7795_; 
v_reuseFailAlloc_7795_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7795_, 0, v_a_7786_);
lean_ctor_set(v_reuseFailAlloc_7795_, 1, v_trace_7765_);
lean_ctor_set(v_reuseFailAlloc_7795_, 2, v_buildTime_7766_);
lean_ctor_set_uint8(v_reuseFailAlloc_7795_, sizeof(void*)*3, v_action_7763_);
lean_ctor_set_uint8(v_reuseFailAlloc_7795_, sizeof(void*)*3 + 1, v_wantsRebuild_7764_);
v___x_7791_ = v_reuseFailAlloc_7795_;
goto v_reusejp_7790_;
}
v_reusejp_7790_:
{
lean_object* v___x_7793_; 
if (v_isShared_7789_ == 0)
{
lean_ctor_set(v___x_7788_, 1, v___x_7791_);
v___x_7793_ = v___x_7788_;
goto v_reusejp_7792_;
}
else
{
lean_object* v_reuseFailAlloc_7794_; 
v_reuseFailAlloc_7794_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7794_, 0, v_a_7785_);
lean_ctor_set(v_reuseFailAlloc_7794_, 1, v___x_7791_);
v___x_7793_ = v_reuseFailAlloc_7794_;
goto v_reusejp_7792_;
}
v_reusejp_7792_:
{
return v___x_7793_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLibSync___lam__0___boxed(lean_object* v_linkObjs_7811_, lean_object* v_args_7812_, lean_object* v_libFile_7813_, lean_object* v_linker_7814_, lean_object* v___y_7815_, lean_object* v_linkDeps_7816_, lean_object* v_linkLibs_7817_, lean_object* v___y_7818_, lean_object* v___y_7819_, lean_object* v___y_7820_, lean_object* v___y_7821_, lean_object* v___y_7822_, lean_object* v___y_7823_, lean_object* v___y_7824_){
_start:
{
uint8_t v_linkDeps_boxed_7825_; lean_object* v_res_7826_; 
v_linkDeps_boxed_7825_ = lean_unbox(v_linkDeps_7816_);
v_res_7826_ = l_Lake_buildSharedLibSync___lam__0(v_linkObjs_7811_, v_args_7812_, v_libFile_7813_, v_linker_7814_, v___y_7815_, v_linkDeps_boxed_7825_, v_linkLibs_7817_, v___y_7818_, v___y_7819_, v___y_7820_, v___y_7821_, v___y_7822_, v___y_7823_);
lean_dec_ref(v___y_7822_);
lean_dec(v___y_7821_);
lean_dec(v___y_7820_);
lean_dec(v___y_7819_);
lean_dec_ref(v___y_7818_);
lean_dec_ref(v_linkLibs_7817_);
lean_dec_ref(v_args_7812_);
lean_dec_ref(v_linkObjs_7811_);
return v_res_7826_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLibSync(lean_object* v_libName_7828_, lean_object* v_libFile_7829_, lean_object* v_linkObjs_7830_, lean_object* v_linkLibs_7831_, lean_object* v_args_7832_, lean_object* v_linker_7833_, uint8_t v_plugin_7834_, uint8_t v_linkDeps_7835_, lean_object* v_macosxDeploymentTarget_x3f_7836_, lean_object* v___y_7837_, lean_object* v___y_7838_, lean_object* v___y_7839_, lean_object* v___y_7840_, lean_object* v___y_7841_, lean_object* v___y_7842_){
_start:
{
lean_object* v___y_7845_; lean_object* v___y_7846_; lean_object* v___y_7847_; lean_object* v___y_7848_; lean_object* v___y_7849_; lean_object* v___y_7850_; lean_object* v___y_7851_; lean_object* v_log_7877_; uint8_t v_action_7878_; uint8_t v_wantsRebuild_7879_; lean_object* v_trace_7880_; lean_object* v_buildTime_7881_; lean_object* v___x_7883_; uint8_t v_isShared_7884_; uint8_t v_isSharedCheck_7911_; 
v_log_7877_ = lean_ctor_get(v___y_7842_, 0);
v_action_7878_ = lean_ctor_get_uint8(v___y_7842_, sizeof(void*)*3);
v_wantsRebuild_7879_ = lean_ctor_get_uint8(v___y_7842_, sizeof(void*)*3 + 1);
v_trace_7880_ = lean_ctor_get(v___y_7842_, 1);
v_buildTime_7881_ = lean_ctor_get(v___y_7842_, 2);
v_isSharedCheck_7911_ = !lean_is_exclusive(v___y_7842_);
if (v_isSharedCheck_7911_ == 0)
{
v___x_7883_ = v___y_7842_;
v_isShared_7884_ = v_isSharedCheck_7911_;
goto v_resetjp_7882_;
}
else
{
lean_inc(v_buildTime_7881_);
lean_inc(v_trace_7880_);
lean_inc(v_log_7877_);
lean_dec(v___y_7842_);
v___x_7883_ = lean_box(0);
v_isShared_7884_ = v_isSharedCheck_7911_;
goto v_resetjp_7882_;
}
v___jp_7844_:
{
uint8_t v___x_7852_; lean_object* v___x_7853_; uint8_t v___x_7854_; lean_object* v___x_7855_; 
v___x_7852_ = 0;
v___x_7853_ = l_Lake_sharedLibExt;
v___x_7854_ = 1;
v___x_7855_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_7829_, v___y_7845_, v___x_7852_, v___x_7853_, v___x_7854_, v___x_7852_, v___x_7852_, v___y_7846_, v___y_7847_, v___y_7848_, v___y_7849_, v___y_7850_, v___y_7851_);
if (lean_obj_tag(v___x_7855_) == 0)
{
lean_object* v_a_7856_; lean_object* v_a_7857_; lean_object* v___x_7859_; uint8_t v_isShared_7860_; uint8_t v_isSharedCheck_7867_; 
v_a_7856_ = lean_ctor_get(v___x_7855_, 0);
v_a_7857_ = lean_ctor_get(v___x_7855_, 1);
v_isSharedCheck_7867_ = !lean_is_exclusive(v___x_7855_);
if (v_isSharedCheck_7867_ == 0)
{
v___x_7859_ = v___x_7855_;
v_isShared_7860_ = v_isSharedCheck_7867_;
goto v_resetjp_7858_;
}
else
{
lean_inc(v_a_7857_);
lean_inc(v_a_7856_);
lean_dec(v___x_7855_);
v___x_7859_ = lean_box(0);
v_isShared_7860_ = v_isSharedCheck_7867_;
goto v_resetjp_7858_;
}
v_resetjp_7858_:
{
lean_object* v_path_7861_; lean_object* v___x_7862_; lean_object* v___x_7863_; lean_object* v___x_7865_; 
v_path_7861_ = lean_ctor_get(v_a_7856_, 1);
lean_inc_ref(v_path_7861_);
lean_dec(v_a_7856_);
v___x_7862_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__1));
v___x_7863_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_7863_, 0, v_path_7861_);
lean_ctor_set(v___x_7863_, 1, v_libName_7828_);
lean_ctor_set(v___x_7863_, 2, v_linkLibs_7831_);
lean_ctor_set(v___x_7863_, 3, v___x_7862_);
lean_ctor_set_uint8(v___x_7863_, sizeof(void*)*4, v_plugin_7834_);
if (v_isShared_7860_ == 0)
{
lean_ctor_set(v___x_7859_, 0, v___x_7863_);
v___x_7865_ = v___x_7859_;
goto v_reusejp_7864_;
}
else
{
lean_object* v_reuseFailAlloc_7866_; 
v_reuseFailAlloc_7866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7866_, 0, v___x_7863_);
lean_ctor_set(v_reuseFailAlloc_7866_, 1, v_a_7857_);
v___x_7865_ = v_reuseFailAlloc_7866_;
goto v_reusejp_7864_;
}
v_reusejp_7864_:
{
return v___x_7865_;
}
}
}
else
{
lean_object* v_a_7868_; lean_object* v_a_7869_; lean_object* v___x_7871_; uint8_t v_isShared_7872_; uint8_t v_isSharedCheck_7876_; 
lean_dec_ref(v_linkLibs_7831_);
lean_dec_ref(v_libName_7828_);
v_a_7868_ = lean_ctor_get(v___x_7855_, 0);
v_a_7869_ = lean_ctor_get(v___x_7855_, 1);
v_isSharedCheck_7876_ = !lean_is_exclusive(v___x_7855_);
if (v_isSharedCheck_7876_ == 0)
{
v___x_7871_ = v___x_7855_;
v_isShared_7872_ = v_isSharedCheck_7876_;
goto v_resetjp_7870_;
}
else
{
lean_inc(v_a_7869_);
lean_inc(v_a_7868_);
lean_dec(v___x_7855_);
v___x_7871_ = lean_box(0);
v_isShared_7872_ = v_isSharedCheck_7876_;
goto v_resetjp_7870_;
}
v_resetjp_7870_:
{
lean_object* v___x_7874_; 
if (v_isShared_7872_ == 0)
{
v___x_7874_ = v___x_7871_;
goto v_reusejp_7873_;
}
else
{
lean_object* v_reuseFailAlloc_7875_; 
v_reuseFailAlloc_7875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7875_, 0, v_a_7868_);
lean_ctor_set(v_reuseFailAlloc_7875_, 1, v_a_7869_);
v___x_7874_ = v_reuseFailAlloc_7875_;
goto v_reusejp_7873_;
}
v_reusejp_7873_:
{
return v___x_7874_;
}
}
}
}
v_resetjp_7882_:
{
lean_object* v___x_7885_; lean_object* v___x_7886_; lean_object* v___x_7888_; 
v___x_7885_ = l_Lake_platformTrace;
v___x_7886_ = l_Lake_BuildTrace_mix(v_trace_7880_, v___x_7885_);
lean_inc(v_buildTime_7881_);
lean_inc_ref(v___x_7886_);
lean_inc_ref(v_log_7877_);
if (v_isShared_7884_ == 0)
{
lean_ctor_set(v___x_7883_, 1, v___x_7886_);
v___x_7888_ = v___x_7883_;
goto v_reusejp_7887_;
}
else
{
lean_object* v_reuseFailAlloc_7910_; 
v_reuseFailAlloc_7910_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7910_, 0, v_log_7877_);
lean_ctor_set(v_reuseFailAlloc_7910_, 1, v___x_7886_);
lean_ctor_set(v_reuseFailAlloc_7910_, 2, v_buildTime_7881_);
lean_ctor_set_uint8(v_reuseFailAlloc_7910_, sizeof(void*)*3, v_action_7878_);
lean_ctor_set_uint8(v_reuseFailAlloc_7910_, sizeof(void*)*3 + 1, v_wantsRebuild_7879_);
v___x_7888_ = v_reuseFailAlloc_7910_;
goto v_reusejp_7887_;
}
v_reusejp_7887_:
{
lean_object* v___y_7890_; lean_object* v_val_7891_; 
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_7836_) == 0)
{
lean_object* v_toBuildConfig_7904_; lean_object* v_macosxDeploymentTarget_x3f_7905_; lean_object* v___x_7906_; lean_object* v___f_7907_; 
v_toBuildConfig_7904_ = lean_ctor_get(v___y_7841_, 0);
v_macosxDeploymentTarget_x3f_7905_ = lean_ctor_get(v_toBuildConfig_7904_, 3);
v___x_7906_ = lean_box(v_linkDeps_7835_);
lean_inc_ref(v_linkLibs_7831_);
lean_inc(v_macosxDeploymentTarget_x3f_7905_);
lean_inc_ref(v_linker_7833_);
lean_inc_ref(v_libFile_7829_);
lean_inc_ref(v_args_7832_);
lean_inc_ref(v_linkObjs_7830_);
v___f_7907_ = lean_alloc_closure((void*)(l_Lake_buildSharedLibSync___lam__0___boxed), 14, 7);
lean_closure_set(v___f_7907_, 0, v_linkObjs_7830_);
lean_closure_set(v___f_7907_, 1, v_args_7832_);
lean_closure_set(v___f_7907_, 2, v_libFile_7829_);
lean_closure_set(v___f_7907_, 3, v_linker_7833_);
lean_closure_set(v___f_7907_, 4, v_macosxDeploymentTarget_x3f_7905_);
lean_closure_set(v___f_7907_, 5, v___x_7906_);
lean_closure_set(v___f_7907_, 6, v_linkLibs_7831_);
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_7905_) == 1)
{
lean_object* v_val_7908_; 
lean_dec_ref(v___f_7907_);
lean_dec_ref(v___x_7888_);
v_val_7908_ = lean_ctor_get(v_macosxDeploymentTarget_x3f_7905_, 0);
lean_inc(v_val_7908_);
lean_inc_ref(v_macosxDeploymentTarget_x3f_7905_);
v___y_7890_ = v_macosxDeploymentTarget_x3f_7905_;
v_val_7891_ = v_val_7908_;
goto v___jp_7889_;
}
else
{
lean_dec_ref(v___x_7886_);
lean_dec(v_buildTime_7881_);
lean_dec_ref(v_log_7877_);
lean_dec_ref(v_linker_7833_);
lean_dec_ref(v_args_7832_);
lean_dec_ref(v_linkObjs_7830_);
v___y_7845_ = v___f_7907_;
v___y_7846_ = v___y_7837_;
v___y_7847_ = v___y_7838_;
v___y_7848_ = v___y_7839_;
v___y_7849_ = v___y_7840_;
v___y_7850_ = v___y_7841_;
v___y_7851_ = v___x_7888_;
goto v___jp_7844_;
}
}
else
{
lean_object* v_val_7909_; 
lean_dec_ref(v___x_7888_);
v_val_7909_ = lean_ctor_get(v_macosxDeploymentTarget_x3f_7836_, 0);
lean_inc(v_val_7909_);
v___y_7890_ = v_macosxDeploymentTarget_x3f_7836_;
v_val_7891_ = v_val_7909_;
goto v___jp_7889_;
}
v___jp_7889_:
{
lean_object* v___x_7892_; lean_object* v___f_7893_; uint64_t v___x_7894_; uint64_t v___x_7895_; uint64_t v___x_7896_; lean_object* v___x_7897_; lean_object* v___x_7898_; lean_object* v___x_7899_; lean_object* v___x_7900_; lean_object* v___x_7901_; lean_object* v___x_7902_; lean_object* v___x_7903_; 
v___x_7892_ = lean_box(v_linkDeps_7835_);
lean_inc_ref(v_linkLibs_7831_);
lean_inc_ref(v_libFile_7829_);
v___f_7893_ = lean_alloc_closure((void*)(l_Lake_buildSharedLibSync___lam__0___boxed), 14, 7);
lean_closure_set(v___f_7893_, 0, v_linkObjs_7830_);
lean_closure_set(v___f_7893_, 1, v_args_7832_);
lean_closure_set(v___f_7893_, 2, v_libFile_7829_);
lean_closure_set(v___f_7893_, 3, v_linker_7833_);
lean_closure_set(v___f_7893_, 4, v___y_7890_);
lean_closure_set(v___f_7893_, 5, v___x_7892_);
lean_closure_set(v___f_7893_, 6, v_linkLibs_7831_);
v___x_7894_ = l_Lake_Hash_nil;
v___x_7895_ = lean_string_hash(v_val_7891_);
v___x_7896_ = lean_uint64_mix_hash(v___x_7894_, v___x_7895_);
v___x_7897_ = ((lean_object*)(l_Lake_buildSharedLibSync___closed__0));
v___x_7898_ = lean_string_append(v___x_7897_, v_val_7891_);
lean_dec_ref(v_val_7891_);
v___x_7899_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_7900_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_7901_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_7901_, 0, v___x_7898_);
lean_ctor_set(v___x_7901_, 1, v___x_7899_);
lean_ctor_set(v___x_7901_, 2, v___x_7900_);
lean_ctor_set_uint64(v___x_7901_, sizeof(void*)*3, v___x_7896_);
v___x_7902_ = l_Lake_BuildTrace_mix(v___x_7886_, v___x_7901_);
v___x_7903_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_7903_, 0, v_log_7877_);
lean_ctor_set(v___x_7903_, 1, v___x_7902_);
lean_ctor_set(v___x_7903_, 2, v_buildTime_7881_);
lean_ctor_set_uint8(v___x_7903_, sizeof(void*)*3, v_action_7878_);
lean_ctor_set_uint8(v___x_7903_, sizeof(void*)*3 + 1, v_wantsRebuild_7879_);
v___y_7845_ = v___f_7893_;
v___y_7846_ = v___y_7837_;
v___y_7847_ = v___y_7838_;
v___y_7848_ = v___y_7839_;
v___y_7849_ = v___y_7840_;
v___y_7850_ = v___y_7841_;
v___y_7851_ = v___x_7903_;
goto v___jp_7844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLibSync___boxed(lean_object* v_libName_7912_, lean_object* v_libFile_7913_, lean_object* v_linkObjs_7914_, lean_object* v_linkLibs_7915_, lean_object* v_args_7916_, lean_object* v_linker_7917_, lean_object* v_plugin_7918_, lean_object* v_linkDeps_7919_, lean_object* v_macosxDeploymentTarget_x3f_7920_, lean_object* v___y_7921_, lean_object* v___y_7922_, lean_object* v___y_7923_, lean_object* v___y_7924_, lean_object* v___y_7925_, lean_object* v___y_7926_, lean_object* v___y_7927_){
_start:
{
uint8_t v_plugin_boxed_7928_; uint8_t v_linkDeps_boxed_7929_; lean_object* v_res_7930_; 
v_plugin_boxed_7928_ = lean_unbox(v_plugin_7918_);
v_linkDeps_boxed_7929_ = lean_unbox(v_linkDeps_7919_);
v_res_7930_ = l_Lake_buildSharedLibSync(v_libName_7912_, v_libFile_7913_, v_linkObjs_7914_, v_linkLibs_7915_, v_args_7916_, v_linker_7917_, v_plugin_boxed_7928_, v_linkDeps_boxed_7929_, v_macosxDeploymentTarget_x3f_7920_, v___y_7921_, v___y_7922_, v___y_7923_, v___y_7924_, v___y_7925_, v___y_7926_);
lean_dec_ref(v___y_7925_);
lean_dec(v___y_7924_);
lean_dec(v___y_7923_);
lean_dec(v___y_7922_);
return v_res_7930_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0(lean_object* v_extraDepTrace_7931_, lean_object* v_traceArgs_7932_, lean_object* v_weakArgs_7933_, lean_object* v_libName_7934_, lean_object* v_libFile_7935_, lean_object* v_objs_7936_, lean_object* v_linker_7937_, uint8_t v_plugin_7938_, uint8_t v_linkDeps_7939_, lean_object* v_macosxDeploymentTarget_x3f_7940_, lean_object* v_libs_7941_, lean_object* v___y_7942_, lean_object* v___y_7943_, lean_object* v___y_7944_, lean_object* v___y_7945_, lean_object* v___y_7946_, lean_object* v___y_7947_){
_start:
{
lean_object* v___x_7949_; 
lean_inc_ref(v___y_7946_);
lean_inc(v___y_7945_);
lean_inc(v___y_7944_);
lean_inc(v___y_7943_);
lean_inc_ref(v___y_7942_);
v___x_7949_ = lean_apply_7(v_extraDepTrace_7931_, v___y_7942_, v___y_7943_, v___y_7944_, v___y_7945_, v___y_7946_, v___y_7947_, lean_box(0));
if (lean_obj_tag(v___x_7949_) == 0)
{
lean_object* v_a_7950_; lean_object* v_a_7951_; lean_object* v_log_7952_; uint8_t v_action_7953_; uint8_t v_wantsRebuild_7954_; lean_object* v_trace_7955_; lean_object* v_buildTime_7956_; lean_object* v___x_7958_; uint8_t v_isShared_7959_; uint8_t v_isSharedCheck_7985_; 
v_a_7950_ = lean_ctor_get(v___x_7949_, 1);
lean_inc(v_a_7950_);
v_a_7951_ = lean_ctor_get(v___x_7949_, 0);
lean_inc(v_a_7951_);
lean_dec_ref_known(v___x_7949_, 2);
v_log_7952_ = lean_ctor_get(v_a_7950_, 0);
v_action_7953_ = lean_ctor_get_uint8(v_a_7950_, sizeof(void*)*3);
v_wantsRebuild_7954_ = lean_ctor_get_uint8(v_a_7950_, sizeof(void*)*3 + 1);
v_trace_7955_ = lean_ctor_get(v_a_7950_, 1);
v_buildTime_7956_ = lean_ctor_get(v_a_7950_, 2);
v_isSharedCheck_7985_ = !lean_is_exclusive(v_a_7950_);
if (v_isSharedCheck_7985_ == 0)
{
v___x_7958_ = v_a_7950_;
v_isShared_7959_ = v_isSharedCheck_7985_;
goto v_resetjp_7957_;
}
else
{
lean_inc(v_buildTime_7956_);
lean_inc(v_trace_7955_);
lean_inc(v_log_7952_);
lean_dec(v_a_7950_);
v___x_7958_ = lean_box(0);
v_isShared_7959_ = v_isSharedCheck_7985_;
goto v_resetjp_7957_;
}
v_resetjp_7957_:
{
lean_object* v___x_7960_; uint64_t v___y_7962_; uint64_t v___x_7978_; lean_object* v___x_7979_; lean_object* v___x_7980_; uint8_t v___x_7981_; 
v___x_7960_ = l_Lake_BuildTrace_mix(v_trace_7955_, v_a_7951_);
v___x_7978_ = l_Lake_Hash_nil;
v___x_7979_ = lean_unsigned_to_nat(0u);
v___x_7980_ = lean_array_get_size(v_traceArgs_7932_);
v___x_7981_ = lean_nat_dec_lt(v___x_7979_, v___x_7980_);
if (v___x_7981_ == 0)
{
v___y_7962_ = v___x_7978_;
goto v___jp_7961_;
}
else
{
size_t v___x_7982_; size_t v___x_7983_; uint64_t v___x_7984_; 
v___x_7982_ = ((size_t)0ULL);
v___x_7983_ = lean_usize_of_nat(v___x_7980_);
v___x_7984_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Internal_buildLeanO_spec__1(v_traceArgs_7932_, v___x_7982_, v___x_7983_, v___x_7978_);
v___y_7962_ = v___x_7984_;
goto v___jp_7961_;
}
v___jp_7961_:
{
lean_object* v___x_7963_; lean_object* v___x_7964_; lean_object* v___x_7965_; lean_object* v___x_7966_; lean_object* v___x_7967_; lean_object* v___x_7968_; lean_object* v___x_7969_; lean_object* v___x_7970_; lean_object* v___x_7971_; lean_object* v___x_7972_; lean_object* v___x_7974_; 
v___x_7963_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_7964_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
lean_inc_ref(v_traceArgs_7932_);
v___x_7965_ = lean_array_to_list(v_traceArgs_7932_);
v___x_7966_ = l_List_toString___at___00Lake_Internal_buildLeanO_spec__0(v___x_7965_);
lean_dec(v___x_7965_);
v___x_7967_ = lean_string_append(v___x_7964_, v___x_7966_);
lean_dec_ref(v___x_7966_);
v___x_7968_ = lean_string_append(v___x_7963_, v___x_7967_);
lean_dec_ref(v___x_7967_);
v___x_7969_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_7970_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_7971_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_7971_, 0, v___x_7968_);
lean_ctor_set(v___x_7971_, 1, v___x_7969_);
lean_ctor_set(v___x_7971_, 2, v___x_7970_);
lean_ctor_set_uint64(v___x_7971_, sizeof(void*)*3, v___y_7962_);
v___x_7972_ = l_Lake_BuildTrace_mix(v___x_7960_, v___x_7971_);
if (v_isShared_7959_ == 0)
{
lean_ctor_set(v___x_7958_, 1, v___x_7972_);
v___x_7974_ = v___x_7958_;
goto v_reusejp_7973_;
}
else
{
lean_object* v_reuseFailAlloc_7977_; 
v_reuseFailAlloc_7977_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_7977_, 0, v_log_7952_);
lean_ctor_set(v_reuseFailAlloc_7977_, 1, v___x_7972_);
lean_ctor_set(v_reuseFailAlloc_7977_, 2, v_buildTime_7956_);
lean_ctor_set_uint8(v_reuseFailAlloc_7977_, sizeof(void*)*3, v_action_7953_);
lean_ctor_set_uint8(v_reuseFailAlloc_7977_, sizeof(void*)*3 + 1, v_wantsRebuild_7954_);
v___x_7974_ = v_reuseFailAlloc_7977_;
goto v_reusejp_7973_;
}
v_reusejp_7973_:
{
lean_object* v___x_7975_; lean_object* v___x_7976_; 
v___x_7975_ = l_Array_append___redArg(v_weakArgs_7933_, v_traceArgs_7932_);
lean_dec_ref(v_traceArgs_7932_);
v___x_7976_ = l_Lake_buildSharedLibSync(v_libName_7934_, v_libFile_7935_, v_objs_7936_, v_libs_7941_, v___x_7975_, v_linker_7937_, v_plugin_7938_, v_linkDeps_7939_, v_macosxDeploymentTarget_x3f_7940_, v___y_7942_, v___y_7943_, v___y_7944_, v___y_7945_, v___y_7946_, v___x_7974_);
return v___x_7976_;
}
}
}
}
else
{
lean_object* v_a_7986_; lean_object* v_a_7987_; lean_object* v___x_7989_; uint8_t v_isShared_7990_; uint8_t v_isSharedCheck_7994_; 
lean_dec_ref(v___y_7942_);
lean_dec_ref(v_libs_7941_);
lean_dec(v_macosxDeploymentTarget_x3f_7940_);
lean_dec_ref(v_linker_7937_);
lean_dec_ref(v_objs_7936_);
lean_dec_ref(v_libFile_7935_);
lean_dec_ref(v_libName_7934_);
lean_dec_ref(v_weakArgs_7933_);
lean_dec_ref(v_traceArgs_7932_);
v_a_7986_ = lean_ctor_get(v___x_7949_, 0);
v_a_7987_ = lean_ctor_get(v___x_7949_, 1);
v_isSharedCheck_7994_ = !lean_is_exclusive(v___x_7949_);
if (v_isSharedCheck_7994_ == 0)
{
v___x_7989_ = v___x_7949_;
v_isShared_7990_ = v_isSharedCheck_7994_;
goto v_resetjp_7988_;
}
else
{
lean_inc(v_a_7987_);
lean_inc(v_a_7986_);
lean_dec(v___x_7949_);
v___x_7989_ = lean_box(0);
v_isShared_7990_ = v_isSharedCheck_7994_;
goto v_resetjp_7988_;
}
v_resetjp_7988_:
{
lean_object* v___x_7992_; 
if (v_isShared_7990_ == 0)
{
v___x_7992_ = v___x_7989_;
goto v_reusejp_7991_;
}
else
{
lean_object* v_reuseFailAlloc_7993_; 
v_reuseFailAlloc_7993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_7993_, 0, v_a_7986_);
lean_ctor_set(v_reuseFailAlloc_7993_, 1, v_a_7987_);
v___x_7992_ = v_reuseFailAlloc_7993_;
goto v_reusejp_7991_;
}
v_reusejp_7991_:
{
return v___x_7992_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__0___boxed(lean_object** _args){
lean_object* v_extraDepTrace_7995_ = _args[0];
lean_object* v_traceArgs_7996_ = _args[1];
lean_object* v_weakArgs_7997_ = _args[2];
lean_object* v_libName_7998_ = _args[3];
lean_object* v_libFile_7999_ = _args[4];
lean_object* v_objs_8000_ = _args[5];
lean_object* v_linker_8001_ = _args[6];
lean_object* v_plugin_8002_ = _args[7];
lean_object* v_linkDeps_8003_ = _args[8];
lean_object* v_macosxDeploymentTarget_x3f_8004_ = _args[9];
lean_object* v_libs_8005_ = _args[10];
lean_object* v___y_8006_ = _args[11];
lean_object* v___y_8007_ = _args[12];
lean_object* v___y_8008_ = _args[13];
lean_object* v___y_8009_ = _args[14];
lean_object* v___y_8010_ = _args[15];
lean_object* v___y_8011_ = _args[16];
lean_object* v___y_8012_ = _args[17];
_start:
{
uint8_t v_plugin_boxed_8013_; uint8_t v_linkDeps_boxed_8014_; lean_object* v_res_8015_; 
v_plugin_boxed_8013_ = lean_unbox(v_plugin_8002_);
v_linkDeps_boxed_8014_ = lean_unbox(v_linkDeps_8003_);
v_res_8015_ = l_Lake_buildSharedLib___lam__0(v_extraDepTrace_7995_, v_traceArgs_7996_, v_weakArgs_7997_, v_libName_7998_, v_libFile_7999_, v_objs_8000_, v_linker_8001_, v_plugin_boxed_8013_, v_linkDeps_boxed_8014_, v_macosxDeploymentTarget_x3f_8004_, v_libs_8005_, v___y_8006_, v___y_8007_, v___y_8008_, v___y_8009_, v___y_8010_, v___y_8011_);
lean_dec_ref(v___y_8010_);
lean_dec(v___y_8009_);
lean_dec(v___y_8008_);
lean_dec(v___y_8007_);
return v_res_8015_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1(lean_object* v_extraDepTrace_8017_, lean_object* v_traceArgs_8018_, lean_object* v_weakArgs_8019_, lean_object* v_libName_8020_, lean_object* v_libFile_8021_, lean_object* v_linker_8022_, uint8_t v_plugin_8023_, uint8_t v_linkDeps_8024_, lean_object* v_macosxDeploymentTarget_x3f_8025_, lean_object* v_linkLibs_8026_, lean_object* v___x_8027_, lean_object* v_objs_8028_, lean_object* v___y_8029_, lean_object* v___y_8030_, lean_object* v___y_8031_, lean_object* v___y_8032_, lean_object* v___y_8033_, lean_object* v___y_8034_){
_start:
{
lean_object* v_trace_8036_; lean_object* v___x_8037_; lean_object* v___x_8038_; lean_object* v___f_8039_; lean_object* v___x_8040_; lean_object* v___x_8041_; lean_object* v___x_8042_; uint8_t v___x_8043_; lean_object* v___x_8044_; lean_object* v___x_8045_; 
v_trace_8036_ = lean_ctor_get(v___y_8034_, 1);
v___x_8037_ = lean_box(v_plugin_8023_);
v___x_8038_ = lean_box(v_linkDeps_8024_);
v___f_8039_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__0___boxed), 18, 10);
lean_closure_set(v___f_8039_, 0, v_extraDepTrace_8017_);
lean_closure_set(v___f_8039_, 1, v_traceArgs_8018_);
lean_closure_set(v___f_8039_, 2, v_weakArgs_8019_);
lean_closure_set(v___f_8039_, 3, v_libName_8020_);
lean_closure_set(v___f_8039_, 4, v_libFile_8021_);
lean_closure_set(v___f_8039_, 5, v_objs_8028_);
lean_closure_set(v___f_8039_, 6, v_linker_8022_);
lean_closure_set(v___f_8039_, 7, v___x_8037_);
lean_closure_set(v___f_8039_, 8, v___x_8038_);
lean_closure_set(v___f_8039_, 9, v_macosxDeploymentTarget_x3f_8025_);
v___x_8040_ = ((lean_object*)(l_Lake_buildSharedLib___lam__1___closed__0));
v___x_8041_ = l_Lake_Job_collectArray___redArg(v_linkLibs_8026_, v___x_8040_);
v___x_8042_ = lean_unsigned_to_nat(0u);
v___x_8043_ = 0;
v___x_8044_ = l_Lake_Job_mapM___redArg(v___x_8027_, v___x_8041_, v___f_8039_, v___x_8042_, v___x_8043_, v___y_8029_, v___y_8030_, v___y_8031_, v___y_8032_, v___y_8033_, v_trace_8036_);
v___x_8045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8045_, 0, v___x_8044_);
lean_ctor_set(v___x_8045_, 1, v___y_8034_);
return v___x_8045_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___lam__1___boxed(lean_object** _args){
lean_object* v_extraDepTrace_8046_ = _args[0];
lean_object* v_traceArgs_8047_ = _args[1];
lean_object* v_weakArgs_8048_ = _args[2];
lean_object* v_libName_8049_ = _args[3];
lean_object* v_libFile_8050_ = _args[4];
lean_object* v_linker_8051_ = _args[5];
lean_object* v_plugin_8052_ = _args[6];
lean_object* v_linkDeps_8053_ = _args[7];
lean_object* v_macosxDeploymentTarget_x3f_8054_ = _args[8];
lean_object* v_linkLibs_8055_ = _args[9];
lean_object* v___x_8056_ = _args[10];
lean_object* v_objs_8057_ = _args[11];
lean_object* v___y_8058_ = _args[12];
lean_object* v___y_8059_ = _args[13];
lean_object* v___y_8060_ = _args[14];
lean_object* v___y_8061_ = _args[15];
lean_object* v___y_8062_ = _args[16];
lean_object* v___y_8063_ = _args[17];
lean_object* v___y_8064_ = _args[18];
_start:
{
uint8_t v_plugin_boxed_8065_; uint8_t v_linkDeps_boxed_8066_; lean_object* v_res_8067_; 
v_plugin_boxed_8065_ = lean_unbox(v_plugin_8052_);
v_linkDeps_boxed_8066_ = lean_unbox(v_linkDeps_8053_);
v_res_8067_ = l_Lake_buildSharedLib___lam__1(v_extraDepTrace_8046_, v_traceArgs_8047_, v_weakArgs_8048_, v_libName_8049_, v_libFile_8050_, v_linker_8051_, v_plugin_boxed_8065_, v_linkDeps_boxed_8066_, v_macosxDeploymentTarget_x3f_8054_, v_linkLibs_8055_, v___x_8056_, v_objs_8057_, v___y_8058_, v___y_8059_, v___y_8060_, v___y_8061_, v___y_8062_, v___y_8063_);
lean_dec_ref(v___y_8062_);
lean_dec(v___y_8061_);
lean_dec(v___y_8060_);
lean_dec(v___y_8059_);
lean_dec_ref(v_linkLibs_8055_);
return v_res_8067_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib(lean_object* v_libName_8069_, lean_object* v_libFile_8070_, lean_object* v_linkObjs_8071_, lean_object* v_linkLibs_8072_, lean_object* v_weakArgs_8073_, lean_object* v_traceArgs_8074_, lean_object* v_linker_8075_, lean_object* v_extraDepTrace_8076_, uint8_t v_plugin_8077_, uint8_t v_linkDeps_8078_, lean_object* v_macosxDeploymentTarget_x3f_8079_, lean_object* v___y_8080_, lean_object* v___y_8081_, lean_object* v___y_8082_, lean_object* v___y_8083_, lean_object* v___y_8084_, lean_object* v___y_8085_){
_start:
{
lean_object* v___x_8087_; lean_object* v___x_8088_; lean_object* v___x_8089_; lean_object* v___f_8090_; lean_object* v___x_8091_; lean_object* v___x_8092_; lean_object* v___x_8093_; uint8_t v___x_8094_; lean_object* v___x_8095_; 
v___x_8087_ = l_Lake_instDataKindDynlib;
v___x_8088_ = lean_box(v_plugin_8077_);
v___x_8089_ = lean_box(v_linkDeps_8078_);
v___f_8090_ = lean_alloc_closure((void*)(l_Lake_buildSharedLib___lam__1___boxed), 19, 11);
lean_closure_set(v___f_8090_, 0, v_extraDepTrace_8076_);
lean_closure_set(v___f_8090_, 1, v_traceArgs_8074_);
lean_closure_set(v___f_8090_, 2, v_weakArgs_8073_);
lean_closure_set(v___f_8090_, 3, v_libName_8069_);
lean_closure_set(v___f_8090_, 4, v_libFile_8070_);
lean_closure_set(v___f_8090_, 5, v_linker_8075_);
lean_closure_set(v___f_8090_, 6, v___x_8088_);
lean_closure_set(v___f_8090_, 7, v___x_8089_);
lean_closure_set(v___f_8090_, 8, v_macosxDeploymentTarget_x3f_8079_);
lean_closure_set(v___f_8090_, 9, v_linkLibs_8072_);
lean_closure_set(v___f_8090_, 10, v___x_8087_);
v___x_8091_ = ((lean_object*)(l_Lake_buildSharedLib___closed__0));
v___x_8092_ = l_Lake_Job_collectArray___redArg(v_linkObjs_8071_, v___x_8091_);
v___x_8093_ = lean_unsigned_to_nat(0u);
v___x_8094_ = 1;
v___x_8095_ = l_Lake_Job_bindM___redArg(v___x_8087_, v___x_8092_, v___f_8090_, v___x_8093_, v___x_8094_, v___y_8080_, v___y_8081_, v___y_8082_, v___y_8083_, v___y_8084_, v___y_8085_);
return v___x_8095_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSharedLib___boxed(lean_object** _args){
lean_object* v_libName_8096_ = _args[0];
lean_object* v_libFile_8097_ = _args[1];
lean_object* v_linkObjs_8098_ = _args[2];
lean_object* v_linkLibs_8099_ = _args[3];
lean_object* v_weakArgs_8100_ = _args[4];
lean_object* v_traceArgs_8101_ = _args[5];
lean_object* v_linker_8102_ = _args[6];
lean_object* v_extraDepTrace_8103_ = _args[7];
lean_object* v_plugin_8104_ = _args[8];
lean_object* v_linkDeps_8105_ = _args[9];
lean_object* v_macosxDeploymentTarget_x3f_8106_ = _args[10];
lean_object* v___y_8107_ = _args[11];
lean_object* v___y_8108_ = _args[12];
lean_object* v___y_8109_ = _args[13];
lean_object* v___y_8110_ = _args[14];
lean_object* v___y_8111_ = _args[15];
lean_object* v___y_8112_ = _args[16];
lean_object* v___y_8113_ = _args[17];
_start:
{
uint8_t v_plugin_boxed_8114_; uint8_t v_linkDeps_boxed_8115_; lean_object* v_res_8116_; 
v_plugin_boxed_8114_ = lean_unbox(v_plugin_8104_);
v_linkDeps_boxed_8115_ = lean_unbox(v_linkDeps_8105_);
v_res_8116_ = l_Lake_buildSharedLib(v_libName_8096_, v_libFile_8097_, v_linkObjs_8098_, v_linkLibs_8099_, v_weakArgs_8100_, v_traceArgs_8101_, v_linker_8102_, v_extraDepTrace_8103_, v_plugin_boxed_8114_, v_linkDeps_boxed_8115_, v_macosxDeploymentTarget_x3f_8106_, v___y_8107_, v___y_8108_, v___y_8109_, v___y_8110_, v___y_8111_, v___y_8112_);
lean_dec_ref(v___y_8112_);
lean_dec_ref(v___y_8111_);
lean_dec(v___y_8110_);
lean_dec(v___y_8109_);
lean_dec(v___y_8108_);
lean_dec_ref(v_linkObjs_8098_);
return v_res_8116_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibSync___lam__0(lean_object* v_linkObjs_8117_, lean_object* v_args_8118_, uint8_t v___x_8119_, lean_object* v_libFile_8120_, lean_object* v_macosxDeploymentTarget_x3f_8121_, uint8_t v_linkDeps_8122_, lean_object* v_linkLibs_8123_, lean_object* v___y_8124_, lean_object* v___y_8125_, lean_object* v___y_8126_, lean_object* v___y_8127_, lean_object* v___y_8128_, lean_object* v___y_8129_){
_start:
{
lean_object* v_toContext_8131_; lean_object* v_lakeEnv_8132_; lean_object* v_lean_8133_; lean_object* v_libs_8135_; lean_object* v___y_8136_; 
v_toContext_8131_ = lean_ctor_get(v___y_8128_, 1);
v_lakeEnv_8132_ = lean_ctor_get(v_toContext_8131_, 0);
v_lean_8133_ = lean_ctor_get(v_lakeEnv_8132_, 1);
if (v_linkDeps_8122_ == 0)
{
lean_object* v___x_8182_; 
v___x_8182_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__1));
v_libs_8135_ = v___x_8182_;
v___y_8136_ = v___y_8129_;
goto v___jp_8134_;
}
else
{
lean_object* v___x_8183_; 
v___x_8183_ = l_Lake_mkLinkOrder___redArg(v_linkLibs_8123_, v___y_8129_);
if (lean_obj_tag(v___x_8183_) == 0)
{
lean_object* v_a_8184_; lean_object* v_a_8185_; 
v_a_8184_ = lean_ctor_get(v___x_8183_, 0);
lean_inc(v_a_8184_);
v_a_8185_ = lean_ctor_get(v___x_8183_, 1);
lean_inc(v_a_8185_);
lean_dec_ref_known(v___x_8183_, 2);
v_libs_8135_ = v_a_8184_;
v___y_8136_ = v_a_8185_;
goto v___jp_8134_;
}
else
{
lean_object* v_a_8186_; lean_object* v_a_8187_; lean_object* v___x_8189_; uint8_t v_isShared_8190_; uint8_t v_isSharedCheck_8194_; 
lean_dec(v_macosxDeploymentTarget_x3f_8121_);
lean_dec_ref(v_libFile_8120_);
v_a_8186_ = lean_ctor_get(v___x_8183_, 0);
v_a_8187_ = lean_ctor_get(v___x_8183_, 1);
v_isSharedCheck_8194_ = !lean_is_exclusive(v___x_8183_);
if (v_isSharedCheck_8194_ == 0)
{
v___x_8189_ = v___x_8183_;
v_isShared_8190_ = v_isSharedCheck_8194_;
goto v_resetjp_8188_;
}
else
{
lean_inc(v_a_8187_);
lean_inc(v_a_8186_);
lean_dec(v___x_8183_);
v___x_8189_ = lean_box(0);
v_isShared_8190_ = v_isSharedCheck_8194_;
goto v_resetjp_8188_;
}
v_resetjp_8188_:
{
lean_object* v___x_8192_; 
if (v_isShared_8190_ == 0)
{
v___x_8192_ = v___x_8189_;
goto v_reusejp_8191_;
}
else
{
lean_object* v_reuseFailAlloc_8193_; 
v_reuseFailAlloc_8193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8193_, 0, v_a_8186_);
lean_ctor_set(v_reuseFailAlloc_8193_, 1, v_a_8187_);
v___x_8192_ = v_reuseFailAlloc_8193_;
goto v_reusejp_8191_;
}
v_reusejp_8191_:
{
return v___x_8192_;
}
}
}
}
v___jp_8134_:
{
lean_object* v_leanLibDir_8137_; lean_object* v_cc_8138_; lean_object* v_log_8139_; uint8_t v_action_8140_; uint8_t v_wantsRebuild_8141_; lean_object* v_trace_8142_; lean_object* v_buildTime_8143_; lean_object* v___x_8145_; uint8_t v_isShared_8146_; uint8_t v_isSharedCheck_8181_; 
v_leanLibDir_8137_ = lean_ctor_get(v_lean_8133_, 3);
v_cc_8138_ = lean_ctor_get(v_lean_8133_, 14);
v_log_8139_ = lean_ctor_get(v___y_8136_, 0);
v_action_8140_ = lean_ctor_get_uint8(v___y_8136_, sizeof(void*)*3);
v_wantsRebuild_8141_ = lean_ctor_get_uint8(v___y_8136_, sizeof(void*)*3 + 1);
v_trace_8142_ = lean_ctor_get(v___y_8136_, 1);
v_buildTime_8143_ = lean_ctor_get(v___y_8136_, 2);
v_isSharedCheck_8181_ = !lean_is_exclusive(v___y_8136_);
if (v_isSharedCheck_8181_ == 0)
{
v___x_8145_ = v___y_8136_;
v_isShared_8146_ = v_isSharedCheck_8181_;
goto v_resetjp_8144_;
}
else
{
lean_inc(v_buildTime_8143_);
lean_inc(v_trace_8142_);
lean_inc(v_log_8139_);
lean_dec(v___y_8136_);
v___x_8145_ = lean_box(0);
v_isShared_8146_ = v_isSharedCheck_8181_;
goto v_resetjp_8144_;
}
v_resetjp_8144_:
{
lean_object* v___x_8147_; lean_object* v___x_8148_; lean_object* v___x_8149_; lean_object* v___x_8150_; lean_object* v___x_8151_; lean_object* v___x_8152_; lean_object* v___x_8153_; lean_object* v___x_8154_; lean_object* v___x_8155_; lean_object* v___x_8156_; 
v___x_8147_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_linkObjs_8117_, v_libs_8135_);
lean_dec_ref(v_libs_8135_);
v___x_8148_ = l_Array_append___redArg(v___x_8147_, v_args_8118_);
v___x_8149_ = lean_unsigned_to_nat(2u);
v___x_8150_ = lean_mk_empty_array_with_capacity(v___x_8149_);
lean_dec_ref(v___x_8150_);
v___x_8151_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0);
lean_inc_ref(v_leanLibDir_8137_);
v___x_8152_ = lean_array_push(v___x_8151_, v_leanLibDir_8137_);
v___x_8153_ = l_Array_append___redArg(v___x_8148_, v___x_8152_);
lean_dec_ref(v___x_8152_);
v___x_8154_ = l_Lake_LeanInstall_ccLinkFlags(v___x_8119_, v_lean_8133_);
v___x_8155_ = l_Array_append___redArg(v___x_8153_, v___x_8154_);
lean_dec_ref(v___x_8154_);
lean_inc_ref(v_cc_8138_);
v___x_8156_ = l_Lake_compileSharedLib(v_libFile_8120_, v___x_8155_, v_cc_8138_, v_macosxDeploymentTarget_x3f_8121_, v_log_8139_);
lean_dec_ref(v___x_8155_);
if (lean_obj_tag(v___x_8156_) == 0)
{
lean_object* v_a_8157_; lean_object* v_a_8158_; lean_object* v___x_8160_; uint8_t v_isShared_8161_; uint8_t v_isSharedCheck_8168_; 
v_a_8157_ = lean_ctor_get(v___x_8156_, 0);
v_a_8158_ = lean_ctor_get(v___x_8156_, 1);
v_isSharedCheck_8168_ = !lean_is_exclusive(v___x_8156_);
if (v_isSharedCheck_8168_ == 0)
{
v___x_8160_ = v___x_8156_;
v_isShared_8161_ = v_isSharedCheck_8168_;
goto v_resetjp_8159_;
}
else
{
lean_inc(v_a_8158_);
lean_inc(v_a_8157_);
lean_dec(v___x_8156_);
v___x_8160_ = lean_box(0);
v_isShared_8161_ = v_isSharedCheck_8168_;
goto v_resetjp_8159_;
}
v_resetjp_8159_:
{
lean_object* v___x_8163_; 
if (v_isShared_8146_ == 0)
{
lean_ctor_set(v___x_8145_, 0, v_a_8158_);
v___x_8163_ = v___x_8145_;
goto v_reusejp_8162_;
}
else
{
lean_object* v_reuseFailAlloc_8167_; 
v_reuseFailAlloc_8167_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8167_, 0, v_a_8158_);
lean_ctor_set(v_reuseFailAlloc_8167_, 1, v_trace_8142_);
lean_ctor_set(v_reuseFailAlloc_8167_, 2, v_buildTime_8143_);
lean_ctor_set_uint8(v_reuseFailAlloc_8167_, sizeof(void*)*3, v_action_8140_);
lean_ctor_set_uint8(v_reuseFailAlloc_8167_, sizeof(void*)*3 + 1, v_wantsRebuild_8141_);
v___x_8163_ = v_reuseFailAlloc_8167_;
goto v_reusejp_8162_;
}
v_reusejp_8162_:
{
lean_object* v___x_8165_; 
if (v_isShared_8161_ == 0)
{
lean_ctor_set(v___x_8160_, 1, v___x_8163_);
v___x_8165_ = v___x_8160_;
goto v_reusejp_8164_;
}
else
{
lean_object* v_reuseFailAlloc_8166_; 
v_reuseFailAlloc_8166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8166_, 0, v_a_8157_);
lean_ctor_set(v_reuseFailAlloc_8166_, 1, v___x_8163_);
v___x_8165_ = v_reuseFailAlloc_8166_;
goto v_reusejp_8164_;
}
v_reusejp_8164_:
{
return v___x_8165_;
}
}
}
}
else
{
lean_object* v_a_8169_; lean_object* v_a_8170_; lean_object* v___x_8172_; uint8_t v_isShared_8173_; uint8_t v_isSharedCheck_8180_; 
v_a_8169_ = lean_ctor_get(v___x_8156_, 0);
v_a_8170_ = lean_ctor_get(v___x_8156_, 1);
v_isSharedCheck_8180_ = !lean_is_exclusive(v___x_8156_);
if (v_isSharedCheck_8180_ == 0)
{
v___x_8172_ = v___x_8156_;
v_isShared_8173_ = v_isSharedCheck_8180_;
goto v_resetjp_8171_;
}
else
{
lean_inc(v_a_8170_);
lean_inc(v_a_8169_);
lean_dec(v___x_8156_);
v___x_8172_ = lean_box(0);
v_isShared_8173_ = v_isSharedCheck_8180_;
goto v_resetjp_8171_;
}
v_resetjp_8171_:
{
lean_object* v___x_8175_; 
if (v_isShared_8146_ == 0)
{
lean_ctor_set(v___x_8145_, 0, v_a_8170_);
v___x_8175_ = v___x_8145_;
goto v_reusejp_8174_;
}
else
{
lean_object* v_reuseFailAlloc_8179_; 
v_reuseFailAlloc_8179_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8179_, 0, v_a_8170_);
lean_ctor_set(v_reuseFailAlloc_8179_, 1, v_trace_8142_);
lean_ctor_set(v_reuseFailAlloc_8179_, 2, v_buildTime_8143_);
lean_ctor_set_uint8(v_reuseFailAlloc_8179_, sizeof(void*)*3, v_action_8140_);
lean_ctor_set_uint8(v_reuseFailAlloc_8179_, sizeof(void*)*3 + 1, v_wantsRebuild_8141_);
v___x_8175_ = v_reuseFailAlloc_8179_;
goto v_reusejp_8174_;
}
v_reusejp_8174_:
{
lean_object* v___x_8177_; 
if (v_isShared_8173_ == 0)
{
lean_ctor_set(v___x_8172_, 1, v___x_8175_);
v___x_8177_ = v___x_8172_;
goto v_reusejp_8176_;
}
else
{
lean_object* v_reuseFailAlloc_8178_; 
v_reuseFailAlloc_8178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8178_, 0, v_a_8169_);
lean_ctor_set(v_reuseFailAlloc_8178_, 1, v___x_8175_);
v___x_8177_ = v_reuseFailAlloc_8178_;
goto v_reusejp_8176_;
}
v_reusejp_8176_:
{
return v___x_8177_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibSync___lam__0___boxed(lean_object* v_linkObjs_8195_, lean_object* v_args_8196_, lean_object* v___x_8197_, lean_object* v_libFile_8198_, lean_object* v_macosxDeploymentTarget_x3f_8199_, lean_object* v_linkDeps_8200_, lean_object* v_linkLibs_8201_, lean_object* v___y_8202_, lean_object* v___y_8203_, lean_object* v___y_8204_, lean_object* v___y_8205_, lean_object* v___y_8206_, lean_object* v___y_8207_, lean_object* v___y_8208_){
_start:
{
uint8_t v___x_46528__boxed_8209_; uint8_t v_linkDeps_boxed_8210_; lean_object* v_res_8211_; 
v___x_46528__boxed_8209_ = lean_unbox(v___x_8197_);
v_linkDeps_boxed_8210_ = lean_unbox(v_linkDeps_8200_);
v_res_8211_ = l_Lake_buildLeanSharedLibSync___lam__0(v_linkObjs_8195_, v_args_8196_, v___x_46528__boxed_8209_, v_libFile_8198_, v_macosxDeploymentTarget_x3f_8199_, v_linkDeps_boxed_8210_, v_linkLibs_8201_, v___y_8202_, v___y_8203_, v___y_8204_, v___y_8205_, v___y_8206_, v___y_8207_);
lean_dec_ref(v___y_8206_);
lean_dec(v___y_8205_);
lean_dec(v___y_8204_);
lean_dec(v___y_8203_);
lean_dec_ref(v___y_8202_);
lean_dec_ref(v_linkLibs_8201_);
lean_dec_ref(v_args_8196_);
lean_dec_ref(v_linkObjs_8195_);
return v_res_8211_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibSync(lean_object* v_libName_8212_, lean_object* v_libFile_8213_, lean_object* v_linkObjs_8214_, lean_object* v_linkLibs_8215_, lean_object* v_args_8216_, uint8_t v_plugin_8217_, uint8_t v_linkDeps_8218_, lean_object* v_macosxDeploymentTarget_x3f_8219_, lean_object* v___y_8220_, lean_object* v___y_8221_, lean_object* v___y_8222_, lean_object* v___y_8223_, lean_object* v___y_8224_, lean_object* v___y_8225_){
_start:
{
lean_object* v_log_8227_; uint8_t v_action_8228_; uint8_t v_wantsRebuild_8229_; lean_object* v_trace_8230_; lean_object* v_buildTime_8231_; lean_object* v___x_8233_; uint8_t v_isShared_8234_; uint8_t v_isSharedCheck_8270_; 
v_log_8227_ = lean_ctor_get(v___y_8225_, 0);
v_action_8228_ = lean_ctor_get_uint8(v___y_8225_, sizeof(void*)*3);
v_wantsRebuild_8229_ = lean_ctor_get_uint8(v___y_8225_, sizeof(void*)*3 + 1);
v_trace_8230_ = lean_ctor_get(v___y_8225_, 1);
v_buildTime_8231_ = lean_ctor_get(v___y_8225_, 2);
v_isSharedCheck_8270_ = !lean_is_exclusive(v___y_8225_);
if (v_isSharedCheck_8270_ == 0)
{
v___x_8233_ = v___y_8225_;
v_isShared_8234_ = v_isSharedCheck_8270_;
goto v_resetjp_8232_;
}
else
{
lean_inc(v_buildTime_8231_);
lean_inc(v_trace_8230_);
lean_inc(v_log_8227_);
lean_dec(v___y_8225_);
v___x_8233_ = lean_box(0);
v_isShared_8234_ = v_isSharedCheck_8270_;
goto v_resetjp_8232_;
}
v_resetjp_8232_:
{
lean_object* v_leanTrace_8235_; lean_object* v___x_8236_; lean_object* v___x_8237_; lean_object* v___x_8238_; lean_object* v___x_8240_; 
v_leanTrace_8235_ = lean_ctor_get(v___y_8224_, 2);
lean_inc_ref(v_leanTrace_8235_);
v___x_8236_ = l_Lake_BuildTrace_mix(v_trace_8230_, v_leanTrace_8235_);
v___x_8237_ = l_Lake_platformTrace;
v___x_8238_ = l_Lake_BuildTrace_mix(v___x_8236_, v___x_8237_);
if (v_isShared_8234_ == 0)
{
lean_ctor_set(v___x_8233_, 1, v___x_8238_);
v___x_8240_ = v___x_8233_;
goto v_reusejp_8239_;
}
else
{
lean_object* v_reuseFailAlloc_8269_; 
v_reuseFailAlloc_8269_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8269_, 0, v_log_8227_);
lean_ctor_set(v_reuseFailAlloc_8269_, 1, v___x_8238_);
lean_ctor_set(v_reuseFailAlloc_8269_, 2, v_buildTime_8231_);
lean_ctor_set_uint8(v_reuseFailAlloc_8269_, sizeof(void*)*3, v_action_8228_);
lean_ctor_set_uint8(v_reuseFailAlloc_8269_, sizeof(void*)*3 + 1, v_wantsRebuild_8229_);
v___x_8240_ = v_reuseFailAlloc_8269_;
goto v_reusejp_8239_;
}
v_reusejp_8239_:
{
uint8_t v___x_8241_; lean_object* v___x_8242_; lean_object* v___x_8243_; lean_object* v___f_8244_; uint8_t v___x_8245_; lean_object* v___x_8246_; lean_object* v___x_8247_; 
v___x_8241_ = 1;
v___x_8242_ = lean_box(v___x_8241_);
v___x_8243_ = lean_box(v_linkDeps_8218_);
lean_inc_ref(v_linkLibs_8215_);
lean_inc_ref(v_libFile_8213_);
v___f_8244_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLibSync___lam__0___boxed), 14, 7);
lean_closure_set(v___f_8244_, 0, v_linkObjs_8214_);
lean_closure_set(v___f_8244_, 1, v_args_8216_);
lean_closure_set(v___f_8244_, 2, v___x_8242_);
lean_closure_set(v___f_8244_, 3, v_libFile_8213_);
lean_closure_set(v___f_8244_, 4, v_macosxDeploymentTarget_x3f_8219_);
lean_closure_set(v___f_8244_, 5, v___x_8243_);
lean_closure_set(v___f_8244_, 6, v_linkLibs_8215_);
v___x_8245_ = 0;
v___x_8246_ = l_Lake_sharedLibExt;
v___x_8247_ = l_Lake_buildArtifactUnlessUpToDate(v_libFile_8213_, v___f_8244_, v___x_8245_, v___x_8246_, v___x_8241_, v___x_8245_, v___x_8245_, v___y_8220_, v___y_8221_, v___y_8222_, v___y_8223_, v___y_8224_, v___x_8240_);
if (lean_obj_tag(v___x_8247_) == 0)
{
lean_object* v_a_8248_; lean_object* v_a_8249_; lean_object* v___x_8251_; uint8_t v_isShared_8252_; uint8_t v_isSharedCheck_8259_; 
v_a_8248_ = lean_ctor_get(v___x_8247_, 0);
v_a_8249_ = lean_ctor_get(v___x_8247_, 1);
v_isSharedCheck_8259_ = !lean_is_exclusive(v___x_8247_);
if (v_isSharedCheck_8259_ == 0)
{
v___x_8251_ = v___x_8247_;
v_isShared_8252_ = v_isSharedCheck_8259_;
goto v_resetjp_8250_;
}
else
{
lean_inc(v_a_8249_);
lean_inc(v_a_8248_);
lean_dec(v___x_8247_);
v___x_8251_ = lean_box(0);
v_isShared_8252_ = v_isSharedCheck_8259_;
goto v_resetjp_8250_;
}
v_resetjp_8250_:
{
lean_object* v_path_8253_; lean_object* v___x_8254_; lean_object* v___x_8255_; lean_object* v___x_8257_; 
v_path_8253_ = lean_ctor_get(v_a_8248_, 1);
lean_inc_ref(v_path_8253_);
lean_dec(v_a_8248_);
v___x_8254_ = ((lean_object*)(l_Lake_mkLinkOrder___redArg___closed__1));
v___x_8255_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_8255_, 0, v_path_8253_);
lean_ctor_set(v___x_8255_, 1, v_libName_8212_);
lean_ctor_set(v___x_8255_, 2, v_linkLibs_8215_);
lean_ctor_set(v___x_8255_, 3, v___x_8254_);
lean_ctor_set_uint8(v___x_8255_, sizeof(void*)*4, v_plugin_8217_);
if (v_isShared_8252_ == 0)
{
lean_ctor_set(v___x_8251_, 0, v___x_8255_);
v___x_8257_ = v___x_8251_;
goto v_reusejp_8256_;
}
else
{
lean_object* v_reuseFailAlloc_8258_; 
v_reuseFailAlloc_8258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8258_, 0, v___x_8255_);
lean_ctor_set(v_reuseFailAlloc_8258_, 1, v_a_8249_);
v___x_8257_ = v_reuseFailAlloc_8258_;
goto v_reusejp_8256_;
}
v_reusejp_8256_:
{
return v___x_8257_;
}
}
}
else
{
lean_object* v_a_8260_; lean_object* v_a_8261_; lean_object* v___x_8263_; uint8_t v_isShared_8264_; uint8_t v_isSharedCheck_8268_; 
lean_dec_ref(v_linkLibs_8215_);
lean_dec_ref(v_libName_8212_);
v_a_8260_ = lean_ctor_get(v___x_8247_, 0);
v_a_8261_ = lean_ctor_get(v___x_8247_, 1);
v_isSharedCheck_8268_ = !lean_is_exclusive(v___x_8247_);
if (v_isSharedCheck_8268_ == 0)
{
v___x_8263_ = v___x_8247_;
v_isShared_8264_ = v_isSharedCheck_8268_;
goto v_resetjp_8262_;
}
else
{
lean_inc(v_a_8261_);
lean_inc(v_a_8260_);
lean_dec(v___x_8247_);
v___x_8263_ = lean_box(0);
v_isShared_8264_ = v_isSharedCheck_8268_;
goto v_resetjp_8262_;
}
v_resetjp_8262_:
{
lean_object* v___x_8266_; 
if (v_isShared_8264_ == 0)
{
v___x_8266_ = v___x_8263_;
goto v_reusejp_8265_;
}
else
{
lean_object* v_reuseFailAlloc_8267_; 
v_reuseFailAlloc_8267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8267_, 0, v_a_8260_);
lean_ctor_set(v_reuseFailAlloc_8267_, 1, v_a_8261_);
v___x_8266_ = v_reuseFailAlloc_8267_;
goto v_reusejp_8265_;
}
v_reusejp_8265_:
{
return v___x_8266_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLibSync___boxed(lean_object* v_libName_8271_, lean_object* v_libFile_8272_, lean_object* v_linkObjs_8273_, lean_object* v_linkLibs_8274_, lean_object* v_args_8275_, lean_object* v_plugin_8276_, lean_object* v_linkDeps_8277_, lean_object* v_macosxDeploymentTarget_x3f_8278_, lean_object* v___y_8279_, lean_object* v___y_8280_, lean_object* v___y_8281_, lean_object* v___y_8282_, lean_object* v___y_8283_, lean_object* v___y_8284_, lean_object* v___y_8285_){
_start:
{
uint8_t v_plugin_boxed_8286_; uint8_t v_linkDeps_boxed_8287_; lean_object* v_res_8288_; 
v_plugin_boxed_8286_ = lean_unbox(v_plugin_8276_);
v_linkDeps_boxed_8287_ = lean_unbox(v_linkDeps_8277_);
v_res_8288_ = l_Lake_buildLeanSharedLibSync(v_libName_8271_, v_libFile_8272_, v_linkObjs_8273_, v_linkLibs_8274_, v_args_8275_, v_plugin_boxed_8286_, v_linkDeps_boxed_8287_, v_macosxDeploymentTarget_x3f_8278_, v___y_8279_, v___y_8280_, v___y_8281_, v___y_8282_, v___y_8283_, v___y_8284_);
lean_dec_ref(v___y_8283_);
lean_dec(v___y_8282_);
lean_dec(v___y_8281_);
lean_dec(v___y_8280_);
return v_res_8288_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0(lean_object* v_traceArgs_8289_, lean_object* v_weakArgs_8290_, lean_object* v_libName_8291_, lean_object* v_libFile_8292_, lean_object* v_objs_8293_, uint8_t v_plugin_8294_, uint8_t v_linkDeps_8295_, lean_object* v_macosxDeploymentTarget_x3f_8296_, lean_object* v_libs_8297_, lean_object* v___y_8298_, lean_object* v___y_8299_, lean_object* v___y_8300_, lean_object* v___y_8301_, lean_object* v___y_8302_, lean_object* v___y_8303_){
_start:
{
uint64_t v___y_8306_; uint64_t v___x_8331_; lean_object* v___x_8332_; lean_object* v___x_8333_; uint8_t v___x_8334_; 
v___x_8331_ = l_Lake_Hash_nil;
v___x_8332_ = lean_unsigned_to_nat(0u);
v___x_8333_ = lean_array_get_size(v_traceArgs_8289_);
v___x_8334_ = lean_nat_dec_lt(v___x_8332_, v___x_8333_);
if (v___x_8334_ == 0)
{
v___y_8306_ = v___x_8331_;
goto v___jp_8305_;
}
else
{
size_t v___x_8335_; size_t v___x_8336_; uint64_t v___x_8337_; 
v___x_8335_ = ((size_t)0ULL);
v___x_8336_ = lean_usize_of_nat(v___x_8333_);
v___x_8337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Internal_buildLeanO_spec__1(v_traceArgs_8289_, v___x_8335_, v___x_8336_, v___x_8331_);
v___y_8306_ = v___x_8337_;
goto v___jp_8305_;
}
v___jp_8305_:
{
lean_object* v_log_8307_; uint8_t v_action_8308_; uint8_t v_wantsRebuild_8309_; lean_object* v_trace_8310_; lean_object* v_buildTime_8311_; lean_object* v___x_8313_; uint8_t v_isShared_8314_; uint8_t v_isSharedCheck_8330_; 
v_log_8307_ = lean_ctor_get(v___y_8303_, 0);
v_action_8308_ = lean_ctor_get_uint8(v___y_8303_, sizeof(void*)*3);
v_wantsRebuild_8309_ = lean_ctor_get_uint8(v___y_8303_, sizeof(void*)*3 + 1);
v_trace_8310_ = lean_ctor_get(v___y_8303_, 1);
v_buildTime_8311_ = lean_ctor_get(v___y_8303_, 2);
v_isSharedCheck_8330_ = !lean_is_exclusive(v___y_8303_);
if (v_isSharedCheck_8330_ == 0)
{
v___x_8313_ = v___y_8303_;
v_isShared_8314_ = v_isSharedCheck_8330_;
goto v_resetjp_8312_;
}
else
{
lean_inc(v_buildTime_8311_);
lean_inc(v_trace_8310_);
lean_inc(v_log_8307_);
lean_dec(v___y_8303_);
v___x_8313_ = lean_box(0);
v_isShared_8314_ = v_isSharedCheck_8330_;
goto v_resetjp_8312_;
}
v_resetjp_8312_:
{
lean_object* v___x_8315_; lean_object* v___x_8316_; lean_object* v___x_8317_; lean_object* v___x_8318_; lean_object* v___x_8319_; lean_object* v___x_8320_; lean_object* v___x_8321_; lean_object* v___x_8322_; lean_object* v___x_8323_; lean_object* v___x_8324_; lean_object* v___x_8326_; 
v___x_8315_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_8316_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_8317_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
lean_inc_ref(v_traceArgs_8289_);
v___x_8318_ = lean_array_to_list(v_traceArgs_8289_);
v___x_8319_ = l_List_toString___at___00Lake_Internal_buildLeanO_spec__0(v___x_8318_);
lean_dec(v___x_8318_);
v___x_8320_ = lean_string_append(v___x_8317_, v___x_8319_);
lean_dec_ref(v___x_8319_);
v___x_8321_ = lean_string_append(v___x_8316_, v___x_8320_);
lean_dec_ref(v___x_8320_);
v___x_8322_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_8323_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_8323_, 0, v___x_8321_);
lean_ctor_set(v___x_8323_, 1, v___x_8315_);
lean_ctor_set(v___x_8323_, 2, v___x_8322_);
lean_ctor_set_uint64(v___x_8323_, sizeof(void*)*3, v___y_8306_);
v___x_8324_ = l_Lake_BuildTrace_mix(v_trace_8310_, v___x_8323_);
if (v_isShared_8314_ == 0)
{
lean_ctor_set(v___x_8313_, 1, v___x_8324_);
v___x_8326_ = v___x_8313_;
goto v_reusejp_8325_;
}
else
{
lean_object* v_reuseFailAlloc_8329_; 
v_reuseFailAlloc_8329_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8329_, 0, v_log_8307_);
lean_ctor_set(v_reuseFailAlloc_8329_, 1, v___x_8324_);
lean_ctor_set(v_reuseFailAlloc_8329_, 2, v_buildTime_8311_);
lean_ctor_set_uint8(v_reuseFailAlloc_8329_, sizeof(void*)*3, v_action_8308_);
lean_ctor_set_uint8(v_reuseFailAlloc_8329_, sizeof(void*)*3 + 1, v_wantsRebuild_8309_);
v___x_8326_ = v_reuseFailAlloc_8329_;
goto v_reusejp_8325_;
}
v_reusejp_8325_:
{
lean_object* v___x_8327_; lean_object* v___x_8328_; 
v___x_8327_ = l_Array_append___redArg(v_weakArgs_8290_, v_traceArgs_8289_);
lean_dec_ref(v_traceArgs_8289_);
v___x_8328_ = l_Lake_buildLeanSharedLibSync(v_libName_8291_, v_libFile_8292_, v_objs_8293_, v_libs_8297_, v___x_8327_, v_plugin_8294_, v_linkDeps_8295_, v_macosxDeploymentTarget_x3f_8296_, v___y_8298_, v___y_8299_, v___y_8300_, v___y_8301_, v___y_8302_, v___x_8326_);
return v___x_8328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__0___boxed(lean_object* v_traceArgs_8338_, lean_object* v_weakArgs_8339_, lean_object* v_libName_8340_, lean_object* v_libFile_8341_, lean_object* v_objs_8342_, lean_object* v_plugin_8343_, lean_object* v_linkDeps_8344_, lean_object* v_macosxDeploymentTarget_x3f_8345_, lean_object* v_libs_8346_, lean_object* v___y_8347_, lean_object* v___y_8348_, lean_object* v___y_8349_, lean_object* v___y_8350_, lean_object* v___y_8351_, lean_object* v___y_8352_, lean_object* v___y_8353_){
_start:
{
uint8_t v_plugin_boxed_8354_; uint8_t v_linkDeps_boxed_8355_; lean_object* v_res_8356_; 
v_plugin_boxed_8354_ = lean_unbox(v_plugin_8343_);
v_linkDeps_boxed_8355_ = lean_unbox(v_linkDeps_8344_);
v_res_8356_ = l_Lake_buildLeanSharedLib___lam__0(v_traceArgs_8338_, v_weakArgs_8339_, v_libName_8340_, v_libFile_8341_, v_objs_8342_, v_plugin_boxed_8354_, v_linkDeps_boxed_8355_, v_macosxDeploymentTarget_x3f_8345_, v_libs_8346_, v___y_8347_, v___y_8348_, v___y_8349_, v___y_8350_, v___y_8351_, v___y_8352_);
lean_dec_ref(v___y_8351_);
lean_dec(v___y_8350_);
lean_dec(v___y_8349_);
lean_dec(v___y_8348_);
return v_res_8356_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1(lean_object* v_traceArgs_8357_, lean_object* v_weakArgs_8358_, lean_object* v_libName_8359_, lean_object* v_libFile_8360_, uint8_t v_plugin_8361_, uint8_t v_linkDeps_8362_, lean_object* v_macosxDeploymentTarget_x3f_8363_, lean_object* v_linkLibs_8364_, lean_object* v___x_8365_, lean_object* v_objs_8366_, lean_object* v___y_8367_, lean_object* v___y_8368_, lean_object* v___y_8369_, lean_object* v___y_8370_, lean_object* v___y_8371_, lean_object* v___y_8372_){
_start:
{
lean_object* v_trace_8374_; lean_object* v___x_8375_; lean_object* v___x_8376_; lean_object* v___f_8377_; lean_object* v___x_8378_; lean_object* v___x_8379_; lean_object* v___x_8380_; uint8_t v___x_8381_; lean_object* v___x_8382_; lean_object* v___x_8383_; 
v_trace_8374_ = lean_ctor_get(v___y_8372_, 1);
v___x_8375_ = lean_box(v_plugin_8361_);
v___x_8376_ = lean_box(v_linkDeps_8362_);
v___f_8377_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__0___boxed), 16, 8);
lean_closure_set(v___f_8377_, 0, v_traceArgs_8357_);
lean_closure_set(v___f_8377_, 1, v_weakArgs_8358_);
lean_closure_set(v___f_8377_, 2, v_libName_8359_);
lean_closure_set(v___f_8377_, 3, v_libFile_8360_);
lean_closure_set(v___f_8377_, 4, v_objs_8366_);
lean_closure_set(v___f_8377_, 5, v___x_8375_);
lean_closure_set(v___f_8377_, 6, v___x_8376_);
lean_closure_set(v___f_8377_, 7, v_macosxDeploymentTarget_x3f_8363_);
v___x_8378_ = ((lean_object*)(l_Lake_buildSharedLib___lam__1___closed__0));
v___x_8379_ = l_Lake_Job_collectArray___redArg(v_linkLibs_8364_, v___x_8378_);
v___x_8380_ = lean_unsigned_to_nat(0u);
v___x_8381_ = 0;
v___x_8382_ = l_Lake_Job_mapM___redArg(v___x_8365_, v___x_8379_, v___f_8377_, v___x_8380_, v___x_8381_, v___y_8367_, v___y_8368_, v___y_8369_, v___y_8370_, v___y_8371_, v_trace_8374_);
v___x_8383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8383_, 0, v___x_8382_);
lean_ctor_set(v___x_8383_, 1, v___y_8372_);
return v___x_8383_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___lam__1___boxed(lean_object** _args){
lean_object* v_traceArgs_8384_ = _args[0];
lean_object* v_weakArgs_8385_ = _args[1];
lean_object* v_libName_8386_ = _args[2];
lean_object* v_libFile_8387_ = _args[3];
lean_object* v_plugin_8388_ = _args[4];
lean_object* v_linkDeps_8389_ = _args[5];
lean_object* v_macosxDeploymentTarget_x3f_8390_ = _args[6];
lean_object* v_linkLibs_8391_ = _args[7];
lean_object* v___x_8392_ = _args[8];
lean_object* v_objs_8393_ = _args[9];
lean_object* v___y_8394_ = _args[10];
lean_object* v___y_8395_ = _args[11];
lean_object* v___y_8396_ = _args[12];
lean_object* v___y_8397_ = _args[13];
lean_object* v___y_8398_ = _args[14];
lean_object* v___y_8399_ = _args[15];
lean_object* v___y_8400_ = _args[16];
_start:
{
uint8_t v_plugin_boxed_8401_; uint8_t v_linkDeps_boxed_8402_; lean_object* v_res_8403_; 
v_plugin_boxed_8401_ = lean_unbox(v_plugin_8388_);
v_linkDeps_boxed_8402_ = lean_unbox(v_linkDeps_8389_);
v_res_8403_ = l_Lake_buildLeanSharedLib___lam__1(v_traceArgs_8384_, v_weakArgs_8385_, v_libName_8386_, v_libFile_8387_, v_plugin_boxed_8401_, v_linkDeps_boxed_8402_, v_macosxDeploymentTarget_x3f_8390_, v_linkLibs_8391_, v___x_8392_, v_objs_8393_, v___y_8394_, v___y_8395_, v___y_8396_, v___y_8397_, v___y_8398_, v___y_8399_);
lean_dec_ref(v___y_8398_);
lean_dec(v___y_8397_);
lean_dec(v___y_8396_);
lean_dec(v___y_8395_);
lean_dec_ref(v_linkLibs_8391_);
return v_res_8403_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib(lean_object* v_libName_8404_, lean_object* v_libFile_8405_, lean_object* v_linkObjs_8406_, lean_object* v_linkLibs_8407_, lean_object* v_weakArgs_8408_, lean_object* v_traceArgs_8409_, uint8_t v_plugin_8410_, uint8_t v_linkDeps_8411_, lean_object* v_macosxDeploymentTarget_x3f_8412_, lean_object* v___y_8413_, lean_object* v___y_8414_, lean_object* v___y_8415_, lean_object* v___y_8416_, lean_object* v___y_8417_, lean_object* v___y_8418_){
_start:
{
lean_object* v___x_8420_; lean_object* v___x_8421_; lean_object* v___x_8422_; lean_object* v___f_8423_; lean_object* v___x_8424_; lean_object* v___x_8425_; lean_object* v___x_8426_; uint8_t v___x_8427_; lean_object* v___x_8428_; 
v___x_8420_ = l_Lake_instDataKindDynlib;
v___x_8421_ = lean_box(v_plugin_8410_);
v___x_8422_ = lean_box(v_linkDeps_8411_);
v___f_8423_ = lean_alloc_closure((void*)(l_Lake_buildLeanSharedLib___lam__1___boxed), 17, 9);
lean_closure_set(v___f_8423_, 0, v_traceArgs_8409_);
lean_closure_set(v___f_8423_, 1, v_weakArgs_8408_);
lean_closure_set(v___f_8423_, 2, v_libName_8404_);
lean_closure_set(v___f_8423_, 3, v_libFile_8405_);
lean_closure_set(v___f_8423_, 4, v___x_8421_);
lean_closure_set(v___f_8423_, 5, v___x_8422_);
lean_closure_set(v___f_8423_, 6, v_macosxDeploymentTarget_x3f_8412_);
lean_closure_set(v___f_8423_, 7, v_linkLibs_8407_);
lean_closure_set(v___f_8423_, 8, v___x_8420_);
v___x_8424_ = ((lean_object*)(l_Lake_buildSharedLib___closed__0));
v___x_8425_ = l_Lake_Job_collectArray___redArg(v_linkObjs_8406_, v___x_8424_);
v___x_8426_ = lean_unsigned_to_nat(0u);
v___x_8427_ = 1;
v___x_8428_ = l_Lake_Job_bindM___redArg(v___x_8420_, v___x_8425_, v___f_8423_, v___x_8426_, v___x_8427_, v___y_8413_, v___y_8414_, v___y_8415_, v___y_8416_, v___y_8417_, v___y_8418_);
return v___x_8428_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanSharedLib___boxed(lean_object* v_libName_8429_, lean_object* v_libFile_8430_, lean_object* v_linkObjs_8431_, lean_object* v_linkLibs_8432_, lean_object* v_weakArgs_8433_, lean_object* v_traceArgs_8434_, lean_object* v_plugin_8435_, lean_object* v_linkDeps_8436_, lean_object* v_macosxDeploymentTarget_x3f_8437_, lean_object* v___y_8438_, lean_object* v___y_8439_, lean_object* v___y_8440_, lean_object* v___y_8441_, lean_object* v___y_8442_, lean_object* v___y_8443_, lean_object* v___y_8444_){
_start:
{
uint8_t v_plugin_boxed_8445_; uint8_t v_linkDeps_boxed_8446_; lean_object* v_res_8447_; 
v_plugin_boxed_8445_ = lean_unbox(v_plugin_8435_);
v_linkDeps_boxed_8446_ = lean_unbox(v_linkDeps_8436_);
v_res_8447_ = l_Lake_buildLeanSharedLib(v_libName_8429_, v_libFile_8430_, v_linkObjs_8431_, v_linkLibs_8432_, v_weakArgs_8433_, v_traceArgs_8434_, v_plugin_boxed_8445_, v_linkDeps_boxed_8446_, v_macosxDeploymentTarget_x3f_8437_, v___y_8438_, v___y_8439_, v___y_8440_, v___y_8441_, v___y_8442_, v___y_8443_);
lean_dec_ref(v___y_8443_);
lean_dec_ref(v___y_8442_);
lean_dec(v___y_8441_);
lean_dec(v___y_8440_);
lean_dec(v___y_8439_);
lean_dec_ref(v_linkObjs_8431_);
return v_res_8447_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExeSync___lam__0(lean_object* v_linkLibs_8448_, lean_object* v_linkObjs_8449_, lean_object* v_args_8450_, uint8_t v_sharedLean_8451_, lean_object* v_exeFile_8452_, lean_object* v___y_8453_, lean_object* v___y_8454_, lean_object* v___y_8455_, lean_object* v___y_8456_, lean_object* v___y_8457_, lean_object* v___y_8458_, lean_object* v___y_8459_){
_start:
{
lean_object* v_toContext_8461_; lean_object* v_lakeEnv_8462_; lean_object* v_lean_8463_; lean_object* v___x_8464_; 
v_toContext_8461_ = lean_ctor_get(v___y_8458_, 1);
v_lakeEnv_8462_ = lean_ctor_get(v_toContext_8461_, 0);
v_lean_8463_ = lean_ctor_get(v_lakeEnv_8462_, 1);
v___x_8464_ = l_Lake_mkLinkOrder___redArg(v_linkLibs_8448_, v___y_8459_);
if (lean_obj_tag(v___x_8464_) == 0)
{
lean_object* v_a_8465_; lean_object* v_a_8466_; lean_object* v_leanLibDir_8467_; lean_object* v_cc_8468_; lean_object* v_log_8469_; uint8_t v_action_8470_; uint8_t v_wantsRebuild_8471_; lean_object* v_trace_8472_; lean_object* v_buildTime_8473_; lean_object* v___x_8475_; uint8_t v_isShared_8476_; uint8_t v_isSharedCheck_8511_; 
v_a_8465_ = lean_ctor_get(v___x_8464_, 1);
lean_inc(v_a_8465_);
v_a_8466_ = lean_ctor_get(v___x_8464_, 0);
lean_inc(v_a_8466_);
lean_dec_ref_known(v___x_8464_, 2);
v_leanLibDir_8467_ = lean_ctor_get(v_lean_8463_, 3);
v_cc_8468_ = lean_ctor_get(v_lean_8463_, 14);
v_log_8469_ = lean_ctor_get(v_a_8465_, 0);
v_action_8470_ = lean_ctor_get_uint8(v_a_8465_, sizeof(void*)*3);
v_wantsRebuild_8471_ = lean_ctor_get_uint8(v_a_8465_, sizeof(void*)*3 + 1);
v_trace_8472_ = lean_ctor_get(v_a_8465_, 1);
v_buildTime_8473_ = lean_ctor_get(v_a_8465_, 2);
v_isSharedCheck_8511_ = !lean_is_exclusive(v_a_8465_);
if (v_isSharedCheck_8511_ == 0)
{
v___x_8475_ = v_a_8465_;
v_isShared_8476_ = v_isSharedCheck_8511_;
goto v_resetjp_8474_;
}
else
{
lean_inc(v_buildTime_8473_);
lean_inc(v_trace_8472_);
lean_inc(v_log_8469_);
lean_dec(v_a_8465_);
v___x_8475_ = lean_box(0);
v_isShared_8476_ = v_isSharedCheck_8511_;
goto v_resetjp_8474_;
}
v_resetjp_8474_:
{
lean_object* v___x_8477_; lean_object* v___x_8478_; lean_object* v___x_8479_; lean_object* v___x_8480_; lean_object* v___x_8481_; lean_object* v___x_8482_; lean_object* v___x_8483_; lean_object* v___x_8484_; lean_object* v___x_8485_; lean_object* v___x_8486_; 
v___x_8477_ = l___private_Lake_Build_Common_0__Lake_mkLinkObjArgs(v_linkObjs_8449_, v_a_8466_);
lean_dec(v_a_8466_);
v___x_8478_ = l_Array_append___redArg(v___x_8477_, v_args_8450_);
v___x_8479_ = lean_unsigned_to_nat(2u);
v___x_8480_ = lean_mk_empty_array_with_capacity(v___x_8479_);
lean_dec_ref(v___x_8480_);
v___x_8481_ = lean_obj_once(&l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0, &l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0_once, _init_l___private_Lake_Build_Common_0__Lake_mkLeanLinkArgs___redArg___closed__0);
lean_inc_ref(v_leanLibDir_8467_);
v___x_8482_ = lean_array_push(v___x_8481_, v_leanLibDir_8467_);
v___x_8483_ = l_Array_append___redArg(v___x_8478_, v___x_8482_);
lean_dec_ref(v___x_8482_);
v___x_8484_ = l_Lake_LeanInstall_ccLinkFlags(v_sharedLean_8451_, v_lean_8463_);
v___x_8485_ = l_Array_append___redArg(v___x_8483_, v___x_8484_);
lean_dec_ref(v___x_8484_);
lean_inc_ref(v_cc_8468_);
v___x_8486_ = l_Lake_compileExe(v_exeFile_8452_, v___x_8485_, v_cc_8468_, v___y_8453_, v_log_8469_);
lean_dec_ref(v___x_8485_);
if (lean_obj_tag(v___x_8486_) == 0)
{
lean_object* v_a_8487_; lean_object* v_a_8488_; lean_object* v___x_8490_; uint8_t v_isShared_8491_; uint8_t v_isSharedCheck_8498_; 
v_a_8487_ = lean_ctor_get(v___x_8486_, 0);
v_a_8488_ = lean_ctor_get(v___x_8486_, 1);
v_isSharedCheck_8498_ = !lean_is_exclusive(v___x_8486_);
if (v_isSharedCheck_8498_ == 0)
{
v___x_8490_ = v___x_8486_;
v_isShared_8491_ = v_isSharedCheck_8498_;
goto v_resetjp_8489_;
}
else
{
lean_inc(v_a_8488_);
lean_inc(v_a_8487_);
lean_dec(v___x_8486_);
v___x_8490_ = lean_box(0);
v_isShared_8491_ = v_isSharedCheck_8498_;
goto v_resetjp_8489_;
}
v_resetjp_8489_:
{
lean_object* v___x_8493_; 
if (v_isShared_8476_ == 0)
{
lean_ctor_set(v___x_8475_, 0, v_a_8488_);
v___x_8493_ = v___x_8475_;
goto v_reusejp_8492_;
}
else
{
lean_object* v_reuseFailAlloc_8497_; 
v_reuseFailAlloc_8497_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8497_, 0, v_a_8488_);
lean_ctor_set(v_reuseFailAlloc_8497_, 1, v_trace_8472_);
lean_ctor_set(v_reuseFailAlloc_8497_, 2, v_buildTime_8473_);
lean_ctor_set_uint8(v_reuseFailAlloc_8497_, sizeof(void*)*3, v_action_8470_);
lean_ctor_set_uint8(v_reuseFailAlloc_8497_, sizeof(void*)*3 + 1, v_wantsRebuild_8471_);
v___x_8493_ = v_reuseFailAlloc_8497_;
goto v_reusejp_8492_;
}
v_reusejp_8492_:
{
lean_object* v___x_8495_; 
if (v_isShared_8491_ == 0)
{
lean_ctor_set(v___x_8490_, 1, v___x_8493_);
v___x_8495_ = v___x_8490_;
goto v_reusejp_8494_;
}
else
{
lean_object* v_reuseFailAlloc_8496_; 
v_reuseFailAlloc_8496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8496_, 0, v_a_8487_);
lean_ctor_set(v_reuseFailAlloc_8496_, 1, v___x_8493_);
v___x_8495_ = v_reuseFailAlloc_8496_;
goto v_reusejp_8494_;
}
v_reusejp_8494_:
{
return v___x_8495_;
}
}
}
}
else
{
lean_object* v_a_8499_; lean_object* v_a_8500_; lean_object* v___x_8502_; uint8_t v_isShared_8503_; uint8_t v_isSharedCheck_8510_; 
v_a_8499_ = lean_ctor_get(v___x_8486_, 0);
v_a_8500_ = lean_ctor_get(v___x_8486_, 1);
v_isSharedCheck_8510_ = !lean_is_exclusive(v___x_8486_);
if (v_isSharedCheck_8510_ == 0)
{
v___x_8502_ = v___x_8486_;
v_isShared_8503_ = v_isSharedCheck_8510_;
goto v_resetjp_8501_;
}
else
{
lean_inc(v_a_8500_);
lean_inc(v_a_8499_);
lean_dec(v___x_8486_);
v___x_8502_ = lean_box(0);
v_isShared_8503_ = v_isSharedCheck_8510_;
goto v_resetjp_8501_;
}
v_resetjp_8501_:
{
lean_object* v___x_8505_; 
if (v_isShared_8476_ == 0)
{
lean_ctor_set(v___x_8475_, 0, v_a_8500_);
v___x_8505_ = v___x_8475_;
goto v_reusejp_8504_;
}
else
{
lean_object* v_reuseFailAlloc_8509_; 
v_reuseFailAlloc_8509_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8509_, 0, v_a_8500_);
lean_ctor_set(v_reuseFailAlloc_8509_, 1, v_trace_8472_);
lean_ctor_set(v_reuseFailAlloc_8509_, 2, v_buildTime_8473_);
lean_ctor_set_uint8(v_reuseFailAlloc_8509_, sizeof(void*)*3, v_action_8470_);
lean_ctor_set_uint8(v_reuseFailAlloc_8509_, sizeof(void*)*3 + 1, v_wantsRebuild_8471_);
v___x_8505_ = v_reuseFailAlloc_8509_;
goto v_reusejp_8504_;
}
v_reusejp_8504_:
{
lean_object* v___x_8507_; 
if (v_isShared_8503_ == 0)
{
lean_ctor_set(v___x_8502_, 1, v___x_8505_);
v___x_8507_ = v___x_8502_;
goto v_reusejp_8506_;
}
else
{
lean_object* v_reuseFailAlloc_8508_; 
v_reuseFailAlloc_8508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8508_, 0, v_a_8499_);
lean_ctor_set(v_reuseFailAlloc_8508_, 1, v___x_8505_);
v___x_8507_ = v_reuseFailAlloc_8508_;
goto v_reusejp_8506_;
}
v_reusejp_8506_:
{
return v___x_8507_;
}
}
}
}
}
}
else
{
lean_object* v_a_8512_; lean_object* v_a_8513_; lean_object* v___x_8515_; uint8_t v_isShared_8516_; uint8_t v_isSharedCheck_8520_; 
lean_dec(v___y_8453_);
lean_dec_ref(v_exeFile_8452_);
v_a_8512_ = lean_ctor_get(v___x_8464_, 0);
v_a_8513_ = lean_ctor_get(v___x_8464_, 1);
v_isSharedCheck_8520_ = !lean_is_exclusive(v___x_8464_);
if (v_isSharedCheck_8520_ == 0)
{
v___x_8515_ = v___x_8464_;
v_isShared_8516_ = v_isSharedCheck_8520_;
goto v_resetjp_8514_;
}
else
{
lean_inc(v_a_8513_);
lean_inc(v_a_8512_);
lean_dec(v___x_8464_);
v___x_8515_ = lean_box(0);
v_isShared_8516_ = v_isSharedCheck_8520_;
goto v_resetjp_8514_;
}
v_resetjp_8514_:
{
lean_object* v___x_8518_; 
if (v_isShared_8516_ == 0)
{
v___x_8518_ = v___x_8515_;
goto v_reusejp_8517_;
}
else
{
lean_object* v_reuseFailAlloc_8519_; 
v_reuseFailAlloc_8519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8519_, 0, v_a_8512_);
lean_ctor_set(v_reuseFailAlloc_8519_, 1, v_a_8513_);
v___x_8518_ = v_reuseFailAlloc_8519_;
goto v_reusejp_8517_;
}
v_reusejp_8517_:
{
return v___x_8518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExeSync___lam__0___boxed(lean_object* v_linkLibs_8521_, lean_object* v_linkObjs_8522_, lean_object* v_args_8523_, lean_object* v_sharedLean_8524_, lean_object* v_exeFile_8525_, lean_object* v___y_8526_, lean_object* v___y_8527_, lean_object* v___y_8528_, lean_object* v___y_8529_, lean_object* v___y_8530_, lean_object* v___y_8531_, lean_object* v___y_8532_, lean_object* v___y_8533_){
_start:
{
uint8_t v_sharedLean_boxed_8534_; lean_object* v_res_8535_; 
v_sharedLean_boxed_8534_ = lean_unbox(v_sharedLean_8524_);
v_res_8535_ = l_Lake_buildLeanExeSync___lam__0(v_linkLibs_8521_, v_linkObjs_8522_, v_args_8523_, v_sharedLean_boxed_8534_, v_exeFile_8525_, v___y_8526_, v___y_8527_, v___y_8528_, v___y_8529_, v___y_8530_, v___y_8531_, v___y_8532_);
lean_dec_ref(v___y_8531_);
lean_dec(v___y_8530_);
lean_dec(v___y_8529_);
lean_dec(v___y_8528_);
lean_dec_ref(v___y_8527_);
lean_dec_ref(v_args_8523_);
lean_dec_ref(v_linkObjs_8522_);
lean_dec_ref(v_linkLibs_8521_);
return v_res_8535_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExeSync(lean_object* v_exeFile_8536_, lean_object* v_linkObjs_8537_, lean_object* v_linkLibs_8538_, lean_object* v_args_8539_, uint8_t v_sharedLean_8540_, lean_object* v_macosxDeploymentTarget_x3f_8541_, lean_object* v___y_8542_, lean_object* v___y_8543_, lean_object* v___y_8544_, lean_object* v___y_8545_, lean_object* v___y_8546_, lean_object* v___y_8547_){
_start:
{
lean_object* v___y_8550_; lean_object* v___y_8551_; lean_object* v___y_8552_; lean_object* v___y_8553_; lean_object* v___y_8554_; lean_object* v___y_8555_; lean_object* v___y_8556_; lean_object* v_log_8580_; uint8_t v_action_8581_; uint8_t v_wantsRebuild_8582_; lean_object* v_trace_8583_; lean_object* v_buildTime_8584_; lean_object* v___x_8586_; uint8_t v_isShared_8587_; uint8_t v_isSharedCheck_8616_; 
v_log_8580_ = lean_ctor_get(v___y_8547_, 0);
v_action_8581_ = lean_ctor_get_uint8(v___y_8547_, sizeof(void*)*3);
v_wantsRebuild_8582_ = lean_ctor_get_uint8(v___y_8547_, sizeof(void*)*3 + 1);
v_trace_8583_ = lean_ctor_get(v___y_8547_, 1);
v_buildTime_8584_ = lean_ctor_get(v___y_8547_, 2);
v_isSharedCheck_8616_ = !lean_is_exclusive(v___y_8547_);
if (v_isSharedCheck_8616_ == 0)
{
v___x_8586_ = v___y_8547_;
v_isShared_8587_ = v_isSharedCheck_8616_;
goto v_resetjp_8585_;
}
else
{
lean_inc(v_buildTime_8584_);
lean_inc(v_trace_8583_);
lean_inc(v_log_8580_);
lean_dec(v___y_8547_);
v___x_8586_ = lean_box(0);
v_isShared_8587_ = v_isSharedCheck_8616_;
goto v_resetjp_8585_;
}
v___jp_8549_:
{
uint8_t v___x_8557_; uint8_t v___x_8558_; lean_object* v___x_8559_; lean_object* v___x_8560_; 
v___x_8557_ = 1;
v___x_8558_ = 0;
v___x_8559_ = l_System_FilePath_exeExtension;
v___x_8560_ = l_Lake_buildArtifactUnlessUpToDate(v_exeFile_8536_, v___y_8550_, v___x_8558_, v___x_8559_, v___x_8557_, v___x_8557_, v___x_8558_, v___y_8551_, v___y_8552_, v___y_8553_, v___y_8554_, v___y_8555_, v___y_8556_);
if (lean_obj_tag(v___x_8560_) == 0)
{
lean_object* v_a_8561_; lean_object* v_a_8562_; lean_object* v___x_8564_; uint8_t v_isShared_8565_; uint8_t v_isSharedCheck_8570_; 
v_a_8561_ = lean_ctor_get(v___x_8560_, 0);
v_a_8562_ = lean_ctor_get(v___x_8560_, 1);
v_isSharedCheck_8570_ = !lean_is_exclusive(v___x_8560_);
if (v_isSharedCheck_8570_ == 0)
{
v___x_8564_ = v___x_8560_;
v_isShared_8565_ = v_isSharedCheck_8570_;
goto v_resetjp_8563_;
}
else
{
lean_inc(v_a_8562_);
lean_inc(v_a_8561_);
lean_dec(v___x_8560_);
v___x_8564_ = lean_box(0);
v_isShared_8565_ = v_isSharedCheck_8570_;
goto v_resetjp_8563_;
}
v_resetjp_8563_:
{
lean_object* v_path_8566_; lean_object* v___x_8568_; 
v_path_8566_ = lean_ctor_get(v_a_8561_, 1);
lean_inc_ref(v_path_8566_);
lean_dec(v_a_8561_);
if (v_isShared_8565_ == 0)
{
lean_ctor_set(v___x_8564_, 0, v_path_8566_);
v___x_8568_ = v___x_8564_;
goto v_reusejp_8567_;
}
else
{
lean_object* v_reuseFailAlloc_8569_; 
v_reuseFailAlloc_8569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8569_, 0, v_path_8566_);
lean_ctor_set(v_reuseFailAlloc_8569_, 1, v_a_8562_);
v___x_8568_ = v_reuseFailAlloc_8569_;
goto v_reusejp_8567_;
}
v_reusejp_8567_:
{
return v___x_8568_;
}
}
}
else
{
lean_object* v_a_8571_; lean_object* v_a_8572_; lean_object* v___x_8574_; uint8_t v_isShared_8575_; uint8_t v_isSharedCheck_8579_; 
v_a_8571_ = lean_ctor_get(v___x_8560_, 0);
v_a_8572_ = lean_ctor_get(v___x_8560_, 1);
v_isSharedCheck_8579_ = !lean_is_exclusive(v___x_8560_);
if (v_isSharedCheck_8579_ == 0)
{
v___x_8574_ = v___x_8560_;
v_isShared_8575_ = v_isSharedCheck_8579_;
goto v_resetjp_8573_;
}
else
{
lean_inc(v_a_8572_);
lean_inc(v_a_8571_);
lean_dec(v___x_8560_);
v___x_8574_ = lean_box(0);
v_isShared_8575_ = v_isSharedCheck_8579_;
goto v_resetjp_8573_;
}
v_resetjp_8573_:
{
lean_object* v___x_8577_; 
if (v_isShared_8575_ == 0)
{
v___x_8577_ = v___x_8574_;
goto v_reusejp_8576_;
}
else
{
lean_object* v_reuseFailAlloc_8578_; 
v_reuseFailAlloc_8578_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_8578_, 0, v_a_8571_);
lean_ctor_set(v_reuseFailAlloc_8578_, 1, v_a_8572_);
v___x_8577_ = v_reuseFailAlloc_8578_;
goto v_reusejp_8576_;
}
v_reusejp_8576_:
{
return v___x_8577_;
}
}
}
}
v_resetjp_8585_:
{
lean_object* v_toBuildConfig_8588_; lean_object* v_leanTrace_8589_; lean_object* v___x_8590_; lean_object* v___x_8591_; lean_object* v___x_8592_; lean_object* v___x_8594_; 
v_toBuildConfig_8588_ = lean_ctor_get(v___y_8546_, 0);
v_leanTrace_8589_ = lean_ctor_get(v___y_8546_, 2);
lean_inc_ref(v_leanTrace_8589_);
v___x_8590_ = l_Lake_BuildTrace_mix(v_trace_8583_, v_leanTrace_8589_);
v___x_8591_ = l_Lake_platformTrace;
v___x_8592_ = l_Lake_BuildTrace_mix(v___x_8590_, v___x_8591_);
lean_inc(v_buildTime_8584_);
lean_inc_ref(v___x_8592_);
lean_inc_ref(v_log_8580_);
if (v_isShared_8587_ == 0)
{
lean_ctor_set(v___x_8586_, 1, v___x_8592_);
v___x_8594_ = v___x_8586_;
goto v_reusejp_8593_;
}
else
{
lean_object* v_reuseFailAlloc_8615_; 
v_reuseFailAlloc_8615_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8615_, 0, v_log_8580_);
lean_ctor_set(v_reuseFailAlloc_8615_, 1, v___x_8592_);
lean_ctor_set(v_reuseFailAlloc_8615_, 2, v_buildTime_8584_);
lean_ctor_set_uint8(v_reuseFailAlloc_8615_, sizeof(void*)*3, v_action_8581_);
lean_ctor_set_uint8(v_reuseFailAlloc_8615_, sizeof(void*)*3 + 1, v_wantsRebuild_8582_);
v___x_8594_ = v_reuseFailAlloc_8615_;
goto v_reusejp_8593_;
}
v_reusejp_8593_:
{
lean_object* v___y_8596_; lean_object* v_val_8597_; 
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_8541_) == 0)
{
lean_object* v_macosxDeploymentTarget_x3f_8610_; lean_object* v___x_8611_; lean_object* v___f_8612_; 
v_macosxDeploymentTarget_x3f_8610_ = lean_ctor_get(v_toBuildConfig_8588_, 3);
v___x_8611_ = lean_box(v_sharedLean_8540_);
lean_inc(v_macosxDeploymentTarget_x3f_8610_);
lean_inc_ref(v_exeFile_8536_);
lean_inc_ref(v_args_8539_);
lean_inc_ref(v_linkObjs_8537_);
lean_inc_ref(v_linkLibs_8538_);
v___f_8612_ = lean_alloc_closure((void*)(l_Lake_buildLeanExeSync___lam__0___boxed), 13, 6);
lean_closure_set(v___f_8612_, 0, v_linkLibs_8538_);
lean_closure_set(v___f_8612_, 1, v_linkObjs_8537_);
lean_closure_set(v___f_8612_, 2, v_args_8539_);
lean_closure_set(v___f_8612_, 3, v___x_8611_);
lean_closure_set(v___f_8612_, 4, v_exeFile_8536_);
lean_closure_set(v___f_8612_, 5, v_macosxDeploymentTarget_x3f_8610_);
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_8610_) == 1)
{
lean_object* v_val_8613_; 
lean_dec_ref(v___f_8612_);
lean_dec_ref(v___x_8594_);
v_val_8613_ = lean_ctor_get(v_macosxDeploymentTarget_x3f_8610_, 0);
lean_inc(v_val_8613_);
lean_inc_ref(v_macosxDeploymentTarget_x3f_8610_);
v___y_8596_ = v_macosxDeploymentTarget_x3f_8610_;
v_val_8597_ = v_val_8613_;
goto v___jp_8595_;
}
else
{
lean_dec_ref(v___x_8592_);
lean_dec(v_buildTime_8584_);
lean_dec_ref(v_log_8580_);
lean_dec_ref(v_args_8539_);
lean_dec_ref(v_linkLibs_8538_);
lean_dec_ref(v_linkObjs_8537_);
v___y_8550_ = v___f_8612_;
v___y_8551_ = v___y_8542_;
v___y_8552_ = v___y_8543_;
v___y_8553_ = v___y_8544_;
v___y_8554_ = v___y_8545_;
v___y_8555_ = v___y_8546_;
v___y_8556_ = v___x_8594_;
goto v___jp_8549_;
}
}
else
{
lean_object* v_val_8614_; 
lean_dec_ref(v___x_8594_);
v_val_8614_ = lean_ctor_get(v_macosxDeploymentTarget_x3f_8541_, 0);
lean_inc(v_val_8614_);
v___y_8596_ = v_macosxDeploymentTarget_x3f_8541_;
v_val_8597_ = v_val_8614_;
goto v___jp_8595_;
}
v___jp_8595_:
{
lean_object* v___x_8598_; lean_object* v___f_8599_; uint64_t v___x_8600_; uint64_t v___x_8601_; uint64_t v___x_8602_; lean_object* v___x_8603_; lean_object* v___x_8604_; lean_object* v___x_8605_; lean_object* v___x_8606_; lean_object* v___x_8607_; lean_object* v___x_8608_; lean_object* v___x_8609_; 
v___x_8598_ = lean_box(v_sharedLean_8540_);
lean_inc_ref(v_exeFile_8536_);
v___f_8599_ = lean_alloc_closure((void*)(l_Lake_buildLeanExeSync___lam__0___boxed), 13, 6);
lean_closure_set(v___f_8599_, 0, v_linkLibs_8538_);
lean_closure_set(v___f_8599_, 1, v_linkObjs_8537_);
lean_closure_set(v___f_8599_, 2, v_args_8539_);
lean_closure_set(v___f_8599_, 3, v___x_8598_);
lean_closure_set(v___f_8599_, 4, v_exeFile_8536_);
lean_closure_set(v___f_8599_, 5, v___y_8596_);
v___x_8600_ = l_Lake_Hash_nil;
v___x_8601_ = lean_string_hash(v_val_8597_);
v___x_8602_ = lean_uint64_mix_hash(v___x_8600_, v___x_8601_);
v___x_8603_ = ((lean_object*)(l_Lake_buildSharedLibSync___closed__0));
v___x_8604_ = lean_string_append(v___x_8603_, v_val_8597_);
lean_dec_ref(v_val_8597_);
v___x_8605_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_8606_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_8607_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_8607_, 0, v___x_8604_);
lean_ctor_set(v___x_8607_, 1, v___x_8605_);
lean_ctor_set(v___x_8607_, 2, v___x_8606_);
lean_ctor_set_uint64(v___x_8607_, sizeof(void*)*3, v___x_8602_);
v___x_8608_ = l_Lake_BuildTrace_mix(v___x_8592_, v___x_8607_);
v___x_8609_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_8609_, 0, v_log_8580_);
lean_ctor_set(v___x_8609_, 1, v___x_8608_);
lean_ctor_set(v___x_8609_, 2, v_buildTime_8584_);
lean_ctor_set_uint8(v___x_8609_, sizeof(void*)*3, v_action_8581_);
lean_ctor_set_uint8(v___x_8609_, sizeof(void*)*3 + 1, v_wantsRebuild_8582_);
v___y_8550_ = v___f_8599_;
v___y_8551_ = v___y_8542_;
v___y_8552_ = v___y_8543_;
v___y_8553_ = v___y_8544_;
v___y_8554_ = v___y_8545_;
v___y_8555_ = v___y_8546_;
v___y_8556_ = v___x_8609_;
goto v___jp_8549_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExeSync___boxed(lean_object* v_exeFile_8617_, lean_object* v_linkObjs_8618_, lean_object* v_linkLibs_8619_, lean_object* v_args_8620_, lean_object* v_sharedLean_8621_, lean_object* v_macosxDeploymentTarget_x3f_8622_, lean_object* v___y_8623_, lean_object* v___y_8624_, lean_object* v___y_8625_, lean_object* v___y_8626_, lean_object* v___y_8627_, lean_object* v___y_8628_, lean_object* v___y_8629_){
_start:
{
uint8_t v_sharedLean_boxed_8630_; lean_object* v_res_8631_; 
v_sharedLean_boxed_8630_ = lean_unbox(v_sharedLean_8621_);
v_res_8631_ = l_Lake_buildLeanExeSync(v_exeFile_8617_, v_linkObjs_8618_, v_linkLibs_8619_, v_args_8620_, v_sharedLean_boxed_8630_, v_macosxDeploymentTarget_x3f_8622_, v___y_8623_, v___y_8624_, v___y_8625_, v___y_8626_, v___y_8627_, v___y_8628_);
lean_dec_ref(v___y_8627_);
lean_dec(v___y_8626_);
lean_dec(v___y_8625_);
lean_dec(v___y_8624_);
return v_res_8631_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0(lean_object* v_traceArgs_8632_, lean_object* v_weakArgs_8633_, lean_object* v_exeFile_8634_, lean_object* v_objs_8635_, uint8_t v_sharedLean_8636_, lean_object* v_macosxDeploymentTarget_x3f_8637_, lean_object* v_libs_8638_, lean_object* v___y_8639_, lean_object* v___y_8640_, lean_object* v___y_8641_, lean_object* v___y_8642_, lean_object* v___y_8643_, lean_object* v___y_8644_){
_start:
{
uint64_t v___y_8647_; uint64_t v___x_8672_; lean_object* v___x_8673_; lean_object* v___x_8674_; uint8_t v___x_8675_; 
v___x_8672_ = l_Lake_Hash_nil;
v___x_8673_ = lean_unsigned_to_nat(0u);
v___x_8674_ = lean_array_get_size(v_traceArgs_8632_);
v___x_8675_ = lean_nat_dec_lt(v___x_8673_, v___x_8674_);
if (v___x_8675_ == 0)
{
v___y_8647_ = v___x_8672_;
goto v___jp_8646_;
}
else
{
size_t v___x_8676_; size_t v___x_8677_; uint64_t v___x_8678_; 
v___x_8676_ = ((size_t)0ULL);
v___x_8677_ = lean_usize_of_nat(v___x_8674_);
v___x_8678_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Internal_buildLeanO_spec__1(v_traceArgs_8632_, v___x_8676_, v___x_8677_, v___x_8672_);
v___y_8647_ = v___x_8678_;
goto v___jp_8646_;
}
v___jp_8646_:
{
lean_object* v_log_8648_; uint8_t v_action_8649_; uint8_t v_wantsRebuild_8650_; lean_object* v_trace_8651_; lean_object* v_buildTime_8652_; lean_object* v___x_8654_; uint8_t v_isShared_8655_; uint8_t v_isSharedCheck_8671_; 
v_log_8648_ = lean_ctor_get(v___y_8644_, 0);
v_action_8649_ = lean_ctor_get_uint8(v___y_8644_, sizeof(void*)*3);
v_wantsRebuild_8650_ = lean_ctor_get_uint8(v___y_8644_, sizeof(void*)*3 + 1);
v_trace_8651_ = lean_ctor_get(v___y_8644_, 1);
v_buildTime_8652_ = lean_ctor_get(v___y_8644_, 2);
v_isSharedCheck_8671_ = !lean_is_exclusive(v___y_8644_);
if (v_isSharedCheck_8671_ == 0)
{
v___x_8654_ = v___y_8644_;
v_isShared_8655_ = v_isSharedCheck_8671_;
goto v_resetjp_8653_;
}
else
{
lean_inc(v_buildTime_8652_);
lean_inc(v_trace_8651_);
lean_inc(v_log_8648_);
lean_dec(v___y_8644_);
v___x_8654_ = lean_box(0);
v_isShared_8655_ = v_isSharedCheck_8671_;
goto v_resetjp_8653_;
}
v_resetjp_8653_:
{
lean_object* v___x_8656_; lean_object* v___x_8657_; lean_object* v___x_8658_; lean_object* v___x_8659_; lean_object* v___x_8660_; lean_object* v___x_8661_; lean_object* v___x_8662_; lean_object* v___x_8663_; lean_object* v___x_8664_; lean_object* v___x_8665_; lean_object* v___x_8667_; 
v___x_8656_ = ((lean_object*)(l_Lake_platformTrace___closed__2));
v___x_8657_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__0));
v___x_8658_ = ((lean_object*)(l_Lake_buildO___lam__2___closed__1));
lean_inc_ref(v_traceArgs_8632_);
v___x_8659_ = lean_array_to_list(v_traceArgs_8632_);
v___x_8660_ = l_List_toString___at___00Lake_Internal_buildLeanO_spec__0(v___x_8659_);
lean_dec(v___x_8659_);
v___x_8661_ = lean_string_append(v___x_8658_, v___x_8660_);
lean_dec_ref(v___x_8660_);
v___x_8662_ = lean_string_append(v___x_8657_, v___x_8661_);
lean_dec_ref(v___x_8661_);
v___x_8663_ = lean_obj_once(&l_Lake_platformTrace___closed__4, &l_Lake_platformTrace___closed__4_once, _init_l_Lake_platformTrace___closed__4);
v___x_8664_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_8664_, 0, v___x_8662_);
lean_ctor_set(v___x_8664_, 1, v___x_8656_);
lean_ctor_set(v___x_8664_, 2, v___x_8663_);
lean_ctor_set_uint64(v___x_8664_, sizeof(void*)*3, v___y_8647_);
v___x_8665_ = l_Lake_BuildTrace_mix(v_trace_8651_, v___x_8664_);
if (v_isShared_8655_ == 0)
{
lean_ctor_set(v___x_8654_, 1, v___x_8665_);
v___x_8667_ = v___x_8654_;
goto v_reusejp_8666_;
}
else
{
lean_object* v_reuseFailAlloc_8670_; 
v_reuseFailAlloc_8670_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_8670_, 0, v_log_8648_);
lean_ctor_set(v_reuseFailAlloc_8670_, 1, v___x_8665_);
lean_ctor_set(v_reuseFailAlloc_8670_, 2, v_buildTime_8652_);
lean_ctor_set_uint8(v_reuseFailAlloc_8670_, sizeof(void*)*3, v_action_8649_);
lean_ctor_set_uint8(v_reuseFailAlloc_8670_, sizeof(void*)*3 + 1, v_wantsRebuild_8650_);
v___x_8667_ = v_reuseFailAlloc_8670_;
goto v_reusejp_8666_;
}
v_reusejp_8666_:
{
lean_object* v___x_8668_; lean_object* v___x_8669_; 
v___x_8668_ = l_Array_append___redArg(v_weakArgs_8633_, v_traceArgs_8632_);
lean_dec_ref(v_traceArgs_8632_);
v___x_8669_ = l_Lake_buildLeanExeSync(v_exeFile_8634_, v_objs_8635_, v_libs_8638_, v___x_8668_, v_sharedLean_8636_, v_macosxDeploymentTarget_x3f_8637_, v___y_8639_, v___y_8640_, v___y_8641_, v___y_8642_, v___y_8643_, v___x_8667_);
return v___x_8669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__0___boxed(lean_object* v_traceArgs_8679_, lean_object* v_weakArgs_8680_, lean_object* v_exeFile_8681_, lean_object* v_objs_8682_, lean_object* v_sharedLean_8683_, lean_object* v_macosxDeploymentTarget_x3f_8684_, lean_object* v_libs_8685_, lean_object* v___y_8686_, lean_object* v___y_8687_, lean_object* v___y_8688_, lean_object* v___y_8689_, lean_object* v___y_8690_, lean_object* v___y_8691_, lean_object* v___y_8692_){
_start:
{
uint8_t v_sharedLean_boxed_8693_; lean_object* v_res_8694_; 
v_sharedLean_boxed_8693_ = lean_unbox(v_sharedLean_8683_);
v_res_8694_ = l_Lake_buildLeanExe___lam__0(v_traceArgs_8679_, v_weakArgs_8680_, v_exeFile_8681_, v_objs_8682_, v_sharedLean_boxed_8693_, v_macosxDeploymentTarget_x3f_8684_, v_libs_8685_, v___y_8686_, v___y_8687_, v___y_8688_, v___y_8689_, v___y_8690_, v___y_8691_);
lean_dec_ref(v___y_8690_);
lean_dec(v___y_8689_);
lean_dec(v___y_8688_);
lean_dec(v___y_8687_);
return v_res_8694_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1(lean_object* v_traceArgs_8695_, lean_object* v_weakArgs_8696_, lean_object* v_exeFile_8697_, uint8_t v_sharedLean_8698_, lean_object* v_macosxDeploymentTarget_x3f_8699_, lean_object* v_linkLibs_8700_, lean_object* v___x_8701_, lean_object* v_objs_8702_, lean_object* v___y_8703_, lean_object* v___y_8704_, lean_object* v___y_8705_, lean_object* v___y_8706_, lean_object* v___y_8707_, lean_object* v___y_8708_){
_start:
{
lean_object* v_trace_8710_; lean_object* v___x_8711_; lean_object* v___f_8712_; lean_object* v___x_8713_; lean_object* v___x_8714_; lean_object* v___x_8715_; uint8_t v___x_8716_; lean_object* v___x_8717_; lean_object* v___x_8718_; 
v_trace_8710_ = lean_ctor_get(v___y_8708_, 1);
v___x_8711_ = lean_box(v_sharedLean_8698_);
v___f_8712_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__0___boxed), 14, 6);
lean_closure_set(v___f_8712_, 0, v_traceArgs_8695_);
lean_closure_set(v___f_8712_, 1, v_weakArgs_8696_);
lean_closure_set(v___f_8712_, 2, v_exeFile_8697_);
lean_closure_set(v___f_8712_, 3, v_objs_8702_);
lean_closure_set(v___f_8712_, 4, v___x_8711_);
lean_closure_set(v___f_8712_, 5, v_macosxDeploymentTarget_x3f_8699_);
v___x_8713_ = ((lean_object*)(l_Lake_buildSharedLib___lam__1___closed__0));
v___x_8714_ = l_Lake_Job_collectArray___redArg(v_linkLibs_8700_, v___x_8713_);
v___x_8715_ = lean_unsigned_to_nat(0u);
v___x_8716_ = 0;
v___x_8717_ = l_Lake_Job_mapM___redArg(v___x_8701_, v___x_8714_, v___f_8712_, v___x_8715_, v___x_8716_, v___y_8703_, v___y_8704_, v___y_8705_, v___y_8706_, v___y_8707_, v_trace_8710_);
v___x_8718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8718_, 0, v___x_8717_);
lean_ctor_set(v___x_8718_, 1, v___y_8708_);
return v___x_8718_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___lam__1___boxed(lean_object* v_traceArgs_8719_, lean_object* v_weakArgs_8720_, lean_object* v_exeFile_8721_, lean_object* v_sharedLean_8722_, lean_object* v_macosxDeploymentTarget_x3f_8723_, lean_object* v_linkLibs_8724_, lean_object* v___x_8725_, lean_object* v_objs_8726_, lean_object* v___y_8727_, lean_object* v___y_8728_, lean_object* v___y_8729_, lean_object* v___y_8730_, lean_object* v___y_8731_, lean_object* v___y_8732_, lean_object* v___y_8733_){
_start:
{
uint8_t v_sharedLean_boxed_8734_; lean_object* v_res_8735_; 
v_sharedLean_boxed_8734_ = lean_unbox(v_sharedLean_8722_);
v_res_8735_ = l_Lake_buildLeanExe___lam__1(v_traceArgs_8719_, v_weakArgs_8720_, v_exeFile_8721_, v_sharedLean_boxed_8734_, v_macosxDeploymentTarget_x3f_8723_, v_linkLibs_8724_, v___x_8725_, v_objs_8726_, v___y_8727_, v___y_8728_, v___y_8729_, v___y_8730_, v___y_8731_, v___y_8732_);
lean_dec_ref(v___y_8731_);
lean_dec(v___y_8730_);
lean_dec(v___y_8729_);
lean_dec(v___y_8728_);
lean_dec_ref(v_linkLibs_8724_);
return v_res_8735_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe(lean_object* v_exeFile_8736_, lean_object* v_linkObjs_8737_, lean_object* v_linkLibs_8738_, lean_object* v_weakArgs_8739_, lean_object* v_traceArgs_8740_, uint8_t v_sharedLean_8741_, lean_object* v_macosxDeploymentTarget_x3f_8742_, lean_object* v___y_8743_, lean_object* v___y_8744_, lean_object* v___y_8745_, lean_object* v___y_8746_, lean_object* v___y_8747_, lean_object* v___y_8748_){
_start:
{
lean_object* v___x_8750_; lean_object* v___x_8751_; lean_object* v___f_8752_; lean_object* v___x_8753_; lean_object* v___x_8754_; lean_object* v___x_8755_; uint8_t v___x_8756_; lean_object* v___x_8757_; 
v___x_8750_ = l_Lake_instDataKindFilePath;
v___x_8751_ = lean_box(v_sharedLean_8741_);
v___f_8752_ = lean_alloc_closure((void*)(l_Lake_buildLeanExe___lam__1___boxed), 15, 7);
lean_closure_set(v___f_8752_, 0, v_traceArgs_8740_);
lean_closure_set(v___f_8752_, 1, v_weakArgs_8739_);
lean_closure_set(v___f_8752_, 2, v_exeFile_8736_);
lean_closure_set(v___f_8752_, 3, v___x_8751_);
lean_closure_set(v___f_8752_, 4, v_macosxDeploymentTarget_x3f_8742_);
lean_closure_set(v___f_8752_, 5, v_linkLibs_8738_);
lean_closure_set(v___f_8752_, 6, v___x_8750_);
v___x_8753_ = ((lean_object*)(l_Lake_buildSharedLib___closed__0));
v___x_8754_ = l_Lake_Job_collectArray___redArg(v_linkObjs_8737_, v___x_8753_);
v___x_8755_ = lean_unsigned_to_nat(0u);
v___x_8756_ = 1;
v___x_8757_ = l_Lake_Job_bindM___redArg(v___x_8750_, v___x_8754_, v___f_8752_, v___x_8755_, v___x_8756_, v___y_8743_, v___y_8744_, v___y_8745_, v___y_8746_, v___y_8747_, v___y_8748_);
return v___x_8757_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildLeanExe___boxed(lean_object* v_exeFile_8758_, lean_object* v_linkObjs_8759_, lean_object* v_linkLibs_8760_, lean_object* v_weakArgs_8761_, lean_object* v_traceArgs_8762_, lean_object* v_sharedLean_8763_, lean_object* v_macosxDeploymentTarget_x3f_8764_, lean_object* v___y_8765_, lean_object* v___y_8766_, lean_object* v___y_8767_, lean_object* v___y_8768_, lean_object* v___y_8769_, lean_object* v___y_8770_, lean_object* v___y_8771_){
_start:
{
uint8_t v_sharedLean_boxed_8772_; lean_object* v_res_8773_; 
v_sharedLean_boxed_8772_ = lean_unbox(v_sharedLean_8763_);
v_res_8773_ = l_Lake_buildLeanExe(v_exeFile_8758_, v_linkObjs_8759_, v_linkLibs_8760_, v_weakArgs_8761_, v_traceArgs_8762_, v_sharedLean_boxed_8772_, v_macosxDeploymentTarget_x3f_8764_, v___y_8765_, v___y_8766_, v___y_8767_, v___y_8768_, v___y_8769_, v___y_8770_);
lean_dec_ref(v___y_8770_);
lean_dec_ref(v___y_8769_);
lean_dec(v___y_8768_);
lean_dec(v___y_8767_);
lean_dec(v___y_8766_);
lean_dec_ref(v_linkObjs_8759_);
return v_res_8773_;
}
}
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Actions(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Common(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instMonadWorkspaceJobM = _init_l_Lake_instMonadWorkspaceJobM();
lean_mark_persistent(l_Lake_instMonadWorkspaceJobM);
l_Lake_platformTrace = _init_l_Lake_platformTrace();
lean_mark_persistent(l_Lake_platformTrace);
l_Lake_buildO___lam__2___boxed__const__1 = _init_l_Lake_buildO___lam__2___boxed__const__1();
lean_mark_persistent(l_Lake_buildO___lam__2___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Common(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Util_JsonObject(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Build_Actions(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Common(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Common(builtin);
}
#ifdef __cplusplus
}
#endif
