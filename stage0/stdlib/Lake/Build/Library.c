// Lean compiler output
// Module: Lake.Build.Library
// Imports: public import Lake.Config.FacetConfig import Lake.Build.Common import Lake.Build.Targets import Lake.Build.Job.Register import Lake.Build.Target.Fetch import Lake.Build.Infos import Lake.Util.Proc
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
extern lean_object* l_Lake_instDataKindFilePath;
lean_object* l_Lake_Verbosity_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_modulesFacet;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lake_compileStaticLib(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
extern uint8_t l_System_Platform_isOSX;
extern uint8_t l_System_Platform_isWindows;
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* l_Lake_Job_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_PartialBuildKey_toString(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lake_LeanLib_libName(lean_object*);
lean_object* l_Lake_nameToStaticLib(lean_object*, uint8_t);
lean_object* l_Lake_Job_await___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_ModuleFacet_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_ensureJob___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lake_Job_renew___redArg(lean_object*);
extern lean_object* l_Lake_instDataKindDynlib;
lean_object* l_Lake_nameToSharedLib(lean_object*, uint8_t);
uint8_t l_Lake_LeanLib_isPlugin(lean_object*);
lean_object* l_Lake_buildLeanSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lake_ExternLib_dynlibFacet;
extern lean_object* l_Lake_ExternLib_keyword;
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_sharedFacet;
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* l_Lake_Module_transImportsFacet;
extern lean_object* l_Lake_Module_keyword;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Target_fetchIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
extern lean_object* l_Lake_instDataKindUnit;
lean_object* l_Lake_Job_mixArray___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_defaultFacet;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lake_LeanLib_getModuleArray(lean_object*);
extern lean_object* l_Lake_Module_importsFacet;
lean_object* lean_io_wait(lean_object*);
lean_object* lean_task_pure(lean_object*);
extern lean_object* l_Lake_Module_leanArtsFacet;
lean_object* l_Lake_Job_mix___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_leanArtsFacet;
lean_object* l_Lake_mkRelPathString(lean_object*);
extern lean_object* l_Lake_LeanLib_staticFacet;
extern lean_object* l_Lake_LeanLib_staticExportFacet;
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
extern lean_object* l_Lake_Package_extraDepFacet;
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Lake_Package_fetchTargetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_extraDepFacet;
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_EquipT_instMonad___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<nil>"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = ": some modules have bad imports or could not be read"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_leanArtsFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_leanArtsFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_leanArtsFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_leanArtsFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_leanArtsFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "filelist"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "libtool"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "-static"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-o"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "-filelist"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7;
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "objs"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "export"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1_value;
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed(lean_object**);
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0_value),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1_value)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__4 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__4_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instMonad___redArg___lam__1, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3_value)} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__5 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__5_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instMonad___redArg___lam__3, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3_value)} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__6 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__6_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instMonad___redArg___lam__5, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__5_value)} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__7 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__7_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instMonad___redArg___lam__9, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__4_value),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3_value)} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__8 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__8_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__9;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EStateT_instPure___redArg___lam__0, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value)} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__10 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__10_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__11;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__12;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__13;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__14;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__15;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__16;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__17;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__18;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":static"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__19 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__19_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " (without exports)"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__20 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__20_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " (with exports)"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__21 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "type mismatch in target '"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "': expected '"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1_value;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "', got "};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(uint8_t, lean_object*, uint8_t, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_staticFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_staticFacetConfig___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_staticFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_staticFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_staticFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_staticFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_staticExportFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticExportFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_staticExportFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_staticExportFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticExportFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0 = (const lean_object*)&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0_value;
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":shared"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_sharedFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_sharedFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_sharedFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_sharedFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_sharedFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_sharedFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ":extraDep"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_extraDepFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_extraDepFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_extraDepFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_extraDepFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_extraDepFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_extraDepFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "<collection>"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_defaultFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_defaultFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_defaultFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_defaultFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_defaultFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_defaultFacetConfig;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__0;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__1;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__2;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__3;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__4;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__5;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__6;
LEAN_EXPORT lean_object* l_Lake_LeanLib_initFacetConfigs;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_initLibraryFacetConfigs;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_key_4_; lean_object* v_tail_5_; lean_object* v_name_6_; lean_object* v_name_7_; uint8_t v___x_8_; 
v_key_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v_name_6_ = lean_ctor_get(v_key_4_, 1);
v_name_7_ = lean_ctor_get(v_a_1_, 1);
v___x_8_ = lean_name_eq(v_name_6_, v_name_7_);
if (v___x_8_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_10_, lean_object* v_x_11_){
_start:
{
uint8_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_10_, v_x_11_);
lean_dec(v_x_11_);
lean_dec_ref(v_a_10_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_14_, lean_object* v_x_15_){
_start:
{
if (lean_obj_tag(v_x_15_) == 0)
{
return v_x_14_;
}
else
{
lean_object* v_key_16_; lean_object* v_value_17_; lean_object* v_tail_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_45_; 
v_key_16_ = lean_ctor_get(v_x_15_, 0);
v_value_17_ = lean_ctor_get(v_x_15_, 1);
v_tail_18_ = lean_ctor_get(v_x_15_, 2);
v_isSharedCheck_45_ = !lean_is_exclusive(v_x_15_);
if (v_isSharedCheck_45_ == 0)
{
v___x_20_ = v_x_15_;
v_isShared_21_ = v_isSharedCheck_45_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_tail_18_);
lean_inc(v_value_17_);
lean_inc(v_key_16_);
lean_dec(v_x_15_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_45_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v_name_22_; lean_object* v___x_23_; uint64_t v___y_25_; 
v_name_22_ = lean_ctor_get(v_key_16_, 1);
v___x_23_ = lean_array_get_size(v_x_14_);
if (lean_obj_tag(v_name_22_) == 0)
{
uint64_t v___x_43_; 
v___x_43_ = 1723ULL;
v___y_25_ = v___x_43_;
goto v___jp_24_;
}
else
{
uint64_t v_hash_44_; 
v_hash_44_ = lean_ctor_get_uint64(v_name_22_, sizeof(void*)*2);
v___y_25_ = v_hash_44_;
goto v___jp_24_;
}
v___jp_24_:
{
uint64_t v___x_26_; uint64_t v___x_27_; uint64_t v_fold_28_; uint64_t v___x_29_; uint64_t v___x_30_; uint64_t v___x_31_; size_t v___x_32_; size_t v___x_33_; size_t v___x_34_; size_t v___x_35_; size_t v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_26_ = 32ULL;
v___x_27_ = lean_uint64_shift_right(v___y_25_, v___x_26_);
v_fold_28_ = lean_uint64_xor(v___y_25_, v___x_27_);
v___x_29_ = 16ULL;
v___x_30_ = lean_uint64_shift_right(v_fold_28_, v___x_29_);
v___x_31_ = lean_uint64_xor(v_fold_28_, v___x_30_);
v___x_32_ = lean_uint64_to_usize(v___x_31_);
v___x_33_ = lean_usize_of_nat(v___x_23_);
v___x_34_ = ((size_t)1ULL);
v___x_35_ = lean_usize_sub(v___x_33_, v___x_34_);
v___x_36_ = lean_usize_land(v___x_32_, v___x_35_);
v___x_37_ = lean_array_uget_borrowed(v_x_14_, v___x_36_);
lean_inc(v___x_37_);
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 2, v___x_37_);
v___x_39_ = v___x_20_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_key_16_);
lean_ctor_set(v_reuseFailAlloc_42_, 1, v_value_17_);
lean_ctor_set(v_reuseFailAlloc_42_, 2, v___x_37_);
v___x_39_ = v_reuseFailAlloc_42_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_40_; 
v___x_40_ = lean_array_uset(v_x_14_, v___x_36_, v___x_39_);
v_x_14_ = v___x_40_;
v_x_15_ = v_tail_18_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(lean_object* v_i_46_, lean_object* v_source_47_, lean_object* v_target_48_){
_start:
{
lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_49_ = lean_array_get_size(v_source_47_);
v___x_50_ = lean_nat_dec_lt(v_i_46_, v___x_49_);
if (v___x_50_ == 0)
{
lean_dec_ref(v_source_47_);
lean_dec(v_i_46_);
return v_target_48_;
}
else
{
lean_object* v_es_51_; lean_object* v___x_52_; lean_object* v_source_53_; lean_object* v_target_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v_es_51_ = lean_array_fget(v_source_47_, v_i_46_);
v___x_52_ = lean_box(0);
v_source_53_ = lean_array_fset(v_source_47_, v_i_46_, v___x_52_);
v_target_54_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(v_target_48_, v_es_51_);
v___x_55_ = lean_unsigned_to_nat(1u);
v___x_56_ = lean_nat_add(v_i_46_, v___x_55_);
lean_dec(v_i_46_);
v_i_46_ = v___x_56_;
v_source_47_ = v_source_53_;
v_target_48_ = v_target_54_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(lean_object* v_data_58_){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v_nbuckets_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_59_ = lean_array_get_size(v_data_58_);
v___x_60_ = lean_unsigned_to_nat(2u);
v_nbuckets_61_ = lean_nat_mul(v___x_59_, v___x_60_);
v___x_62_ = lean_unsigned_to_nat(0u);
v___x_63_ = lean_box(0);
v___x_64_ = lean_mk_array(v_nbuckets_61_, v___x_63_);
v___x_65_ = lean_array_propagate_mark(v_data_58_, v___x_64_);
v___x_66_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(v___x_62_, v_data_58_, v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(lean_object* v_m_67_, lean_object* v_a_68_, lean_object* v_b_69_){
_start:
{
lean_object* v_size_70_; lean_object* v_buckets_71_; lean_object* v_name_72_; lean_object* v___x_73_; uint64_t v___y_75_; 
v_size_70_ = lean_ctor_get(v_m_67_, 0);
v_buckets_71_ = lean_ctor_get(v_m_67_, 1);
v_name_72_ = lean_ctor_get(v_a_68_, 1);
v___x_73_ = lean_array_get_size(v_buckets_71_);
if (lean_obj_tag(v_name_72_) == 0)
{
uint64_t v___x_112_; 
v___x_112_ = 1723ULL;
v___y_75_ = v___x_112_;
goto v___jp_74_;
}
else
{
uint64_t v_hash_113_; 
v_hash_113_ = lean_ctor_get_uint64(v_name_72_, sizeof(void*)*2);
v___y_75_ = v_hash_113_;
goto v___jp_74_;
}
v___jp_74_:
{
uint64_t v___x_76_; uint64_t v___x_77_; uint64_t v_fold_78_; uint64_t v___x_79_; uint64_t v___x_80_; uint64_t v___x_81_; size_t v___x_82_; size_t v___x_83_; size_t v___x_84_; size_t v___x_85_; size_t v___x_86_; lean_object* v_bkt_87_; uint8_t v___x_88_; 
v___x_76_ = 32ULL;
v___x_77_ = lean_uint64_shift_right(v___y_75_, v___x_76_);
v_fold_78_ = lean_uint64_xor(v___y_75_, v___x_77_);
v___x_79_ = 16ULL;
v___x_80_ = lean_uint64_shift_right(v_fold_78_, v___x_79_);
v___x_81_ = lean_uint64_xor(v_fold_78_, v___x_80_);
v___x_82_ = lean_uint64_to_usize(v___x_81_);
v___x_83_ = lean_usize_of_nat(v___x_73_);
v___x_84_ = ((size_t)1ULL);
v___x_85_ = lean_usize_sub(v___x_83_, v___x_84_);
v___x_86_ = lean_usize_land(v___x_82_, v___x_85_);
v_bkt_87_ = lean_array_uget_borrowed(v_buckets_71_, v___x_86_);
v___x_88_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_68_, v_bkt_87_);
if (v___x_88_ == 0)
{
lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_109_; 
lean_inc_ref(v_buckets_71_);
lean_inc(v_size_70_);
v_isSharedCheck_109_ = !lean_is_exclusive(v_m_67_);
if (v_isSharedCheck_109_ == 0)
{
lean_object* v_unused_110_; lean_object* v_unused_111_; 
v_unused_110_ = lean_ctor_get(v_m_67_, 1);
lean_dec(v_unused_110_);
v_unused_111_ = lean_ctor_get(v_m_67_, 0);
lean_dec(v_unused_111_);
v___x_90_ = v_m_67_;
v_isShared_91_ = v_isSharedCheck_109_;
goto v_resetjp_89_;
}
else
{
lean_dec(v_m_67_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_109_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_92_; lean_object* v_size_x27_93_; lean_object* v___x_94_; lean_object* v_buckets_x27_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v___x_92_ = lean_unsigned_to_nat(1u);
v_size_x27_93_ = lean_nat_add(v_size_70_, v___x_92_);
lean_dec(v_size_70_);
lean_inc(v_bkt_87_);
v___x_94_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_94_, 0, v_a_68_);
lean_ctor_set(v___x_94_, 1, v_b_69_);
lean_ctor_set(v___x_94_, 2, v_bkt_87_);
v_buckets_x27_95_ = lean_array_uset(v_buckets_71_, v___x_86_, v___x_94_);
v___x_96_ = lean_unsigned_to_nat(4u);
v___x_97_ = lean_nat_mul(v_size_x27_93_, v___x_96_);
v___x_98_ = lean_unsigned_to_nat(3u);
v___x_99_ = lean_nat_div(v___x_97_, v___x_98_);
lean_dec(v___x_97_);
v___x_100_ = lean_array_get_size(v_buckets_x27_95_);
v___x_101_ = lean_nat_dec_le(v___x_99_, v___x_100_);
lean_dec(v___x_99_);
if (v___x_101_ == 0)
{
lean_object* v_val_102_; lean_object* v___x_104_; 
v_val_102_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(v_buckets_x27_95_);
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 1, v_val_102_);
lean_ctor_set(v___x_90_, 0, v_size_x27_93_);
v___x_104_ = v___x_90_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_size_x27_93_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v_val_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
else
{
lean_object* v___x_107_; 
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 1, v_buckets_x27_95_);
lean_ctor_set(v___x_90_, 0, v_size_x27_93_);
v___x_107_ = v___x_90_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_size_x27_93_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_buckets_x27_95_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
else
{
lean_dec(v_b_69_);
lean_dec_ref(v_a_68_);
return v_m_67_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(lean_object* v_m_114_, lean_object* v_a_115_){
_start:
{
lean_object* v_buckets_116_; lean_object* v_name_117_; lean_object* v___x_118_; uint64_t v___y_120_; 
v_buckets_116_ = lean_ctor_get(v_m_114_, 1);
v_name_117_ = lean_ctor_get(v_a_115_, 1);
v___x_118_ = lean_array_get_size(v_buckets_116_);
if (lean_obj_tag(v_name_117_) == 0)
{
uint64_t v___x_134_; 
v___x_134_ = 1723ULL;
v___y_120_ = v___x_134_;
goto v___jp_119_;
}
else
{
uint64_t v_hash_135_; 
v_hash_135_ = lean_ctor_get_uint64(v_name_117_, sizeof(void*)*2);
v___y_120_ = v_hash_135_;
goto v___jp_119_;
}
v___jp_119_:
{
uint64_t v___x_121_; uint64_t v___x_122_; uint64_t v_fold_123_; uint64_t v___x_124_; uint64_t v___x_125_; uint64_t v___x_126_; size_t v___x_127_; size_t v___x_128_; size_t v___x_129_; size_t v___x_130_; size_t v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_121_ = 32ULL;
v___x_122_ = lean_uint64_shift_right(v___y_120_, v___x_121_);
v_fold_123_ = lean_uint64_xor(v___y_120_, v___x_122_);
v___x_124_ = 16ULL;
v___x_125_ = lean_uint64_shift_right(v_fold_123_, v___x_124_);
v___x_126_ = lean_uint64_xor(v_fold_123_, v___x_125_);
v___x_127_ = lean_uint64_to_usize(v___x_126_);
v___x_128_ = lean_usize_of_nat(v___x_118_);
v___x_129_ = ((size_t)1ULL);
v___x_130_ = lean_usize_sub(v___x_128_, v___x_129_);
v___x_131_ = lean_usize_land(v___x_127_, v___x_130_);
v___x_132_ = lean_array_uget_borrowed(v_buckets_116_, v___x_131_);
v___x_133_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_115_, v___x_132_);
return v___x_133_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg___boxed(lean_object* v_m_136_, lean_object* v_a_137_){
_start:
{
uint8_t v_res_138_; lean_object* v_r_139_; 
v_res_138_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_m_136_, v_a_137_);
lean_dec_ref(v_a_137_);
lean_dec_ref(v_m_136_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(lean_object* v_self_140_, lean_object* v_root_141_, lean_object* v_col_142_, uint8_t v_viaImport_143_, lean_object* v_a_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v_col_152_; lean_object* v___y_153_; lean_object* v_mods_155_; lean_object* v_modSet_156_; uint8_t v_hasErrors_157_; uint8_t v___x_158_; 
v_mods_155_ = lean_ctor_get(v_col_142_, 0);
v_modSet_156_ = lean_ctor_get(v_col_142_, 1);
v_hasErrors_157_ = lean_ctor_get_uint8(v_col_142_, sizeof(void*)*2);
v___x_158_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_modSet_156_, v_root_141_);
if (v___x_158_ == 0)
{
lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_219_; 
lean_inc_ref(v_modSet_156_);
lean_inc_ref(v_mods_155_);
v_isSharedCheck_219_ = !lean_is_exclusive(v_col_142_);
if (v_isSharedCheck_219_ == 0)
{
lean_object* v_unused_220_; lean_object* v_unused_221_; 
v_unused_220_ = lean_ctor_get(v_col_142_, 1);
lean_dec(v_unused_220_);
v_unused_221_ = lean_ctor_get(v_col_142_, 0);
lean_dec(v_unused_221_);
v___x_160_ = v_col_142_;
v_isShared_161_ = v_isSharedCheck_219_;
goto v_resetjp_159_;
}
else
{
lean_dec(v_col_142_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_219_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v_lib_162_; lean_object* v_pkg_163_; lean_object* v_name_164_; lean_object* v_keyName_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v_col_170_; 
v_lib_162_ = lean_ctor_get(v_root_141_, 0);
v_pkg_163_ = lean_ctor_get(v_lib_162_, 0);
v_name_164_ = lean_ctor_get(v_root_141_, 1);
v_keyName_165_ = lean_ctor_get(v_pkg_163_, 2);
v___x_166_ = 1;
v___x_167_ = lean_box(0);
lean_inc_ref(v_root_141_);
v___x_168_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_modSet_156_, v_root_141_, v___x_167_);
lean_inc_ref(v___x_168_);
lean_inc_ref(v_mods_155_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v___x_168_);
v_col_170_ = v___x_160_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_mods_155_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v___x_168_);
lean_ctor_set_uint8(v_reuseFailAlloc_218_, sizeof(void*)*2, v_hasErrors_157_);
v_col_170_ = v_reuseFailAlloc_218_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_171_ = l_Lake_Module_importsFacet;
lean_inc(v_name_164_);
lean_inc(v_keyName_165_);
v___x_172_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_172_, 0, v_keyName_165_);
lean_ctor_set(v___x_172_, 1, v_name_164_);
v___x_173_ = l_Lake_Module_keyword;
lean_inc_ref(v_root_141_);
v___x_174_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_174_, 0, v___x_172_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
lean_ctor_set(v___x_174_, 2, v_root_141_);
lean_ctor_set(v___x_174_, 3, v___x_171_);
lean_inc_ref(v_a_144_);
lean_inc_ref(v___y_148_);
lean_inc(v___y_147_);
lean_inc(v___y_146_);
lean_inc(v___y_145_);
v___x_175_ = lean_apply_7(v_a_144_, v___x_174_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, lean_box(0));
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_208_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
v_a_177_ = lean_ctor_get(v___x_175_, 1);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_208_ == 0)
{
v___x_179_ = v___x_175_;
v_isShared_180_ = v_isSharedCheck_208_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_inc(v_a_176_);
lean_dec(v___x_175_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_208_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v_task_181_; lean_object* v___x_182_; lean_object* v___y_184_; 
v_task_181_ = lean_ctor_get(v_a_176_, 0);
lean_inc_ref(v_task_181_);
lean_dec(v_a_176_);
v___x_182_ = lean_io_wait(v_task_181_);
if (lean_obj_tag(v___x_182_) == 0)
{
lean_object* v_a_188_; size_t v_sz_189_; size_t v___x_190_; lean_object* v___x_191_; 
lean_del_object(v___x_179_);
lean_dec_ref(v___x_168_);
lean_dec_ref(v_mods_155_);
v_a_188_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_a_188_);
lean_dec_ref_known(v___x_182_, 2);
v_sz_189_ = lean_array_size(v_a_188_);
v___x_190_ = ((size_t)0ULL);
v___x_191_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(v_self_140_, v_a_188_, v_sz_189_, v___x_190_, v_col_170_, v_a_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v_a_177_);
lean_dec(v_a_188_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; lean_object* v_a_193_; lean_object* v_mods_194_; lean_object* v_modSet_195_; uint8_t v_hasErrors_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_204_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_192_);
v_a_193_ = lean_ctor_get(v___x_191_, 1);
lean_inc(v_a_193_);
lean_dec_ref_known(v___x_191_, 2);
v_mods_194_ = lean_ctor_get(v_a_192_, 0);
v_modSet_195_ = lean_ctor_get(v_a_192_, 1);
v_hasErrors_196_ = lean_ctor_get_uint8(v_a_192_, sizeof(void*)*2);
v_isSharedCheck_204_ = !lean_is_exclusive(v_a_192_);
if (v_isSharedCheck_204_ == 0)
{
v___x_198_ = v_a_192_;
v_isShared_199_ = v_isSharedCheck_204_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_modSet_195_);
lean_inc(v_mods_194_);
lean_dec(v_a_192_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_204_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v___x_202_; 
v___x_200_ = lean_array_push(v_mods_194_, v_root_141_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 0, v___x_200_);
v___x_202_ = v___x_198_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_200_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v_modSet_195_);
lean_ctor_set_uint8(v_reuseFailAlloc_203_, sizeof(void*)*2, v_hasErrors_196_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
v_col_152_ = v___x_202_;
v___y_153_ = v_a_193_;
goto v___jp_151_;
}
}
}
else
{
lean_dec_ref(v_root_141_);
return v___x_191_;
}
}
else
{
lean_dec_ref_known(v___x_182_, 2);
lean_dec_ref(v_col_170_);
lean_dec_ref(v_a_144_);
if (v_viaImport_143_ == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_array_push(v_mods_155_, v_root_141_);
v___x_206_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_206_, 0, v___x_205_);
lean_ctor_set(v___x_206_, 1, v___x_168_);
lean_ctor_set_uint8(v___x_206_, sizeof(void*)*2, v___x_166_);
v___y_184_ = v___x_206_;
goto v___jp_183_;
}
else
{
lean_object* v___x_207_; 
lean_dec_ref(v_root_141_);
v___x_207_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_207_, 0, v_mods_155_);
lean_ctor_set(v___x_207_, 1, v___x_168_);
lean_ctor_set_uint8(v___x_207_, sizeof(void*)*2, v___x_166_);
v___y_184_ = v___x_207_;
goto v___jp_183_;
}
}
v___jp_183_:
{
lean_object* v___x_186_; 
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 0, v___y_184_);
v___x_186_ = v___x_179_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___y_184_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_a_177_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
else
{
lean_object* v_a_209_; lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
lean_dec_ref(v_col_170_);
lean_dec_ref(v___x_168_);
lean_dec_ref(v_mods_155_);
lean_dec_ref(v_a_144_);
lean_dec_ref(v_root_141_);
v_a_209_ = lean_ctor_get(v___x_175_, 0);
v_a_210_ = lean_ctor_get(v___x_175_, 1);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_217_ == 0)
{
v___x_212_ = v___x_175_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_inc(v_a_209_);
lean_dec(v___x_175_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_215_; 
if (v_isShared_213_ == 0)
{
v___x_215_ = v___x_212_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_a_209_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v_a_210_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_a_144_);
lean_dec_ref(v_root_141_);
v_col_152_ = v_col_142_;
v___y_153_ = v___y_149_;
goto v___jp_151_;
}
v___jp_151_:
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v_col_152_);
lean_ctor_set(v___x_154_, 1, v___y_153_);
return v___x_154_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(lean_object* v_self_222_, lean_object* v_as_223_, size_t v_sz_224_, size_t v_i_225_, lean_object* v_b_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_a_235_; lean_object* v_a_236_; uint8_t v___x_240_; 
v___x_240_ = lean_usize_dec_lt(v_i_225_, v_sz_224_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; 
lean_dec_ref(v___y_227_);
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v_b_226_);
lean_ctor_set(v___x_241_, 1, v___y_232_);
return v___x_241_;
}
else
{
lean_object* v_a_242_; lean_object* v_lib_243_; lean_object* v_name_244_; lean_object* v_name_245_; uint8_t v___x_246_; 
v_a_242_ = lean_array_uget_borrowed(v_as_223_, v_i_225_);
v_lib_243_ = lean_ctor_get(v_a_242_, 0);
v_name_244_ = lean_ctor_get(v_lib_243_, 1);
v_name_245_ = lean_ctor_get(v_self_222_, 1);
v___x_246_ = lean_name_eq(v_name_244_, v_name_245_);
if (v___x_246_ == 0)
{
v_a_235_ = v_b_226_;
v_a_236_ = v___y_232_;
goto v___jp_234_;
}
else
{
lean_object* v___x_247_; 
lean_inc_ref(v___y_227_);
lean_inc(v_a_242_);
v___x_247_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_222_, v_a_242_, v_b_226_, v___x_246_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v_a_249_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_a_248_);
v_a_249_ = lean_ctor_get(v___x_247_, 1);
lean_inc(v_a_249_);
lean_dec_ref_known(v___x_247_, 2);
v_a_235_ = v_a_248_;
v_a_236_ = v_a_249_;
goto v___jp_234_;
}
else
{
lean_dec_ref(v___y_227_);
return v___x_247_;
}
}
}
v___jp_234_:
{
size_t v___x_237_; size_t v___x_238_; 
v___x_237_ = ((size_t)1ULL);
v___x_238_ = lean_usize_add(v_i_225_, v___x_237_);
v_i_225_ = v___x_238_;
v_b_226_ = v_a_235_;
v___y_232_ = v_a_236_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2___boxed(lean_object* v_self_250_, lean_object* v_as_251_, lean_object* v_sz_252_, lean_object* v_i_253_, lean_object* v_b_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
size_t v_sz_boxed_262_; size_t v_i_boxed_263_; lean_object* v_res_264_; 
v_sz_boxed_262_ = lean_unbox_usize(v_sz_252_);
lean_dec(v_sz_252_);
v_i_boxed_263_ = lean_unbox_usize(v_i_253_);
lean_dec(v_i_253_);
v_res_264_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(v_self_250_, v_as_251_, v_sz_boxed_262_, v_i_boxed_263_, v_b_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v_as_251_);
lean_dec_ref(v_self_250_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___boxed(lean_object* v_self_265_, lean_object* v_root_266_, lean_object* v_col_267_, lean_object* v_viaImport_268_, lean_object* v_a_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_){
_start:
{
uint8_t v_viaImport_boxed_276_; lean_object* v_res_277_; 
v_viaImport_boxed_276_ = lean_unbox(v_viaImport_268_);
v_res_277_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_265_, v_root_266_, v_col_267_, v_viaImport_boxed_276_, v_a_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
lean_dec_ref(v___y_273_);
lean_dec(v___y_272_);
lean_dec(v___y_271_);
lean_dec(v___y_270_);
lean_dec_ref(v_self_265_);
return v_res_277_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(lean_object* v_00_u03b2_278_, lean_object* v_m_279_, lean_object* v_a_280_){
_start:
{
uint8_t v___x_281_; 
v___x_281_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_m_279_, v_a_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___boxed(lean_object* v_00_u03b2_282_, lean_object* v_m_283_, lean_object* v_a_284_){
_start:
{
uint8_t v_res_285_; lean_object* v_r_286_; 
v_res_285_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(v_00_u03b2_282_, v_m_283_, v_a_284_);
lean_dec_ref(v_a_284_);
lean_dec_ref(v_m_283_);
v_r_286_ = lean_box(v_res_285_);
return v_r_286_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1(lean_object* v_00_u03b2_287_, lean_object* v_m_288_, lean_object* v_a_289_, lean_object* v_b_290_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_m_288_, v_a_289_, v_b_290_);
return v___x_291_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(lean_object* v_00_u03b2_292_, lean_object* v_a_293_, lean_object* v_x_294_){
_start:
{
uint8_t v___x_295_; 
v___x_295_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_293_, v_x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_296_, lean_object* v_a_297_, lean_object* v_x_298_){
_start:
{
uint8_t v_res_299_; lean_object* v_r_300_; 
v_res_299_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(v_00_u03b2_296_, v_a_297_, v_x_298_);
lean_dec(v_x_298_);
lean_dec_ref(v_a_297_);
v_r_300_ = lean_box(v_res_299_);
return v_r_300_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2(lean_object* v_00_u03b2_301_, lean_object* v_data_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(v_data_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_304_, lean_object* v_i_305_, lean_object* v_source_306_, lean_object* v_target_307_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(v_i_305_, v_source_306_, v_target_307_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_309_, lean_object* v_x_310_, lean_object* v_x_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(v_x_310_, v_x_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(lean_object* v_self_313_, lean_object* v_as_314_, size_t v_sz_315_, size_t v_i_316_, lean_object* v_b_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
uint8_t v___x_325_; 
v___x_325_ = lean_usize_dec_lt(v_i_316_, v_sz_315_);
if (v___x_325_ == 0)
{
lean_object* v___x_326_; 
lean_dec_ref(v___y_318_);
v___x_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_326_, 0, v_b_317_);
lean_ctor_set(v___x_326_, 1, v___y_323_);
return v___x_326_;
}
else
{
uint8_t v___x_327_; lean_object* v_a_328_; lean_object* v___x_329_; 
v___x_327_ = 0;
v_a_328_ = lean_array_uget_borrowed(v_as_314_, v_i_316_);
lean_inc_ref(v___y_318_);
lean_inc(v_a_328_);
v___x_329_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_313_, v_a_328_, v_b_317_, v___x_327_, v___y_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v_a_331_; size_t v___x_332_; size_t v___x_333_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
v_a_331_ = lean_ctor_get(v___x_329_, 1);
lean_inc(v_a_331_);
lean_dec_ref_known(v___x_329_, 2);
v___x_332_ = ((size_t)1ULL);
v___x_333_ = lean_usize_add(v_i_316_, v___x_332_);
v_i_316_ = v___x_333_;
v_b_317_ = v_a_330_;
v___y_323_ = v_a_331_;
goto _start;
}
else
{
lean_dec_ref(v___y_318_);
return v___x_329_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0___boxed(lean_object* v_self_335_, lean_object* v_as_336_, lean_object* v_sz_337_, lean_object* v_i_338_, lean_object* v_b_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
size_t v_sz_boxed_347_; size_t v_i_boxed_348_; lean_object* v_res_349_; 
v_sz_boxed_347_ = lean_unbox_usize(v_sz_337_);
lean_dec(v_sz_337_);
v_i_boxed_348_ = lean_unbox_usize(v_i_338_);
lean_dec(v_i_338_);
v_res_349_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(v_self_335_, v_as_336_, v_sz_boxed_347_, v_i_boxed_348_, v_b_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_);
lean_dec_ref(v___y_344_);
lean_dec(v___y_343_);
lean_dec(v___y_342_);
lean_dec(v___y_341_);
lean_dec_ref(v_as_336_);
lean_dec_ref(v_self_335_);
return v_res_349_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1));
v___x_353_ = l_Lake_BuildTrace_nil(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(lean_object* v_self_355_, lean_object* v_col_356_, lean_object* v___x_357_, uint8_t v___x_358_, lean_object* v___x_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
lean_object* v___x_367_; 
lean_inc_ref(v_self_355_);
v___x_367_ = l_Lake_LeanLib_getModuleArray(v_self_355_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; size_t v_sz_369_; size_t v___x_370_; lean_object* v___x_371_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_a_368_);
lean_dec_ref_known(v___x_367_, 1);
v_sz_369_ = lean_array_size(v_a_368_);
v___x_370_ = ((size_t)0ULL);
v___x_371_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(v_self_355_, v_a_368_, v_sz_369_, v___x_370_, v_col_356_, v___y_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_);
lean_dec(v_a_368_);
if (lean_obj_tag(v___x_371_) == 0)
{
lean_object* v_a_372_; lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_399_; 
v_a_372_ = lean_ctor_get(v___x_371_, 0);
v_a_373_ = lean_ctor_get(v___x_371_, 1);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_399_ == 0)
{
v___x_375_ = v___x_371_;
v_isShared_376_ = v_isSharedCheck_399_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_inc(v_a_372_);
lean_dec(v___x_371_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_399_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v_mods_377_; uint8_t v_hasErrors_378_; lean_object* v___y_380_; 
v_mods_377_ = lean_ctor_get(v_a_372_, 0);
lean_inc_ref(v_mods_377_);
v_hasErrors_378_ = lean_ctor_get_uint8(v_a_372_, sizeof(void*)*2);
lean_dec(v_a_372_);
if (v_hasErrors_378_ == 0)
{
lean_dec_ref(v_self_355_);
v___y_380_ = v_a_373_;
goto v___jp_379_;
}
else
{
lean_object* v_name_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v_name_392_ = lean_ctor_get(v_self_355_, 1);
lean_inc(v_name_392_);
lean_dec_ref(v_self_355_);
v___x_393_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_392_, v_hasErrors_378_);
v___x_394_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3));
v___x_395_ = lean_string_append(v___x_393_, v___x_394_);
v___x_396_ = 3;
v___x_397_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set_uint8(v___x_397_, sizeof(void*)*1, v___x_396_);
v___x_398_ = lean_array_push(v_a_373_, v___x_397_);
v___y_380_ = v___x_398_;
goto v___jp_379_;
}
v___jp_379_:
{
lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_381_ = lean_mk_empty_array_with_capacity(v___x_357_);
v___x_382_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_383_ = 0;
v___x_384_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_385_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_385_, 0, v___x_381_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
lean_ctor_set(v___x_385_, 2, v___x_357_);
lean_ctor_set_uint8(v___x_385_, sizeof(void*)*3, v___x_383_);
lean_ctor_set_uint8(v___x_385_, sizeof(void*)*3 + 1, v___x_358_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 1, v___x_385_);
lean_ctor_set(v___x_375_, 0, v_mods_377_);
v___x_387_ = v___x_375_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_mods_377_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v___x_385_);
v___x_387_ = v_reuseFailAlloc_391_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_388_ = lean_task_pure(v___x_387_);
v___x_389_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_389_, 0, v___x_388_);
lean_ctor_set(v___x_389_, 1, v___x_359_);
lean_ctor_set(v___x_389_, 2, v___x_382_);
lean_ctor_set_uint8(v___x_389_, sizeof(void*)*3, v___x_358_);
v___x_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_390_, 0, v___x_389_);
lean_ctor_set(v___x_390_, 1, v___y_380_);
return v___x_390_;
}
}
}
}
else
{
lean_object* v_a_400_; lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
lean_dec(v___x_359_);
lean_dec(v___x_357_);
lean_dec_ref(v_self_355_);
v_a_400_ = lean_ctor_get(v___x_371_, 0);
v_a_401_ = lean_ctor_get(v___x_371_, 1);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_371_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_371_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_inc(v_a_400_);
lean_dec(v___x_371_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_400_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
else
{
lean_object* v_a_409_; lean_object* v___x_410_; uint8_t v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
lean_dec_ref(v___y_360_);
lean_dec(v___x_359_);
lean_dec(v___x_357_);
lean_dec_ref(v_col_356_);
lean_dec_ref(v_self_355_);
v_a_409_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_a_409_);
lean_dec_ref_known(v___x_367_, 1);
v___x_410_ = lean_io_error_to_string(v_a_409_);
v___x_411_ = 3;
v___x_412_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_412_, 0, v___x_410_);
lean_ctor_set_uint8(v___x_412_, sizeof(void*)*1, v___x_411_);
v___x_413_ = lean_array_get_size(v___y_365_);
v___x_414_ = lean_array_push(v___y_365_, v___x_412_);
v___x_415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set(v___x_415_, 1, v___x_414_);
return v___x_415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed(lean_object* v_self_416_, lean_object* v_col_417_, lean_object* v___x_418_, lean_object* v___x_419_, lean_object* v___x_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
uint8_t v___x_9223__boxed_428_; lean_object* v_res_429_; 
v___x_9223__boxed_428_ = lean_unbox(v___x_419_);
v_res_429_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(v_self_416_, v_col_417_, v___x_418_, v___x_9223__boxed_428_, v___x_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v___y_424_);
lean_dec(v___y_423_);
lean_dec(v___y_422_);
return v_res_429_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = lean_box(0);
v___x_433_ = lean_unsigned_to_nat(16u);
v___x_434_ = lean_mk_array(v___x_433_, v___x_432_);
return v___x_434_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_435_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1);
v___x_436_ = lean_unsigned_to_nat(0u);
v___x_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_436_);
lean_ctor_set(v___x_437_, 1, v___x_435_);
return v___x_437_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3(void){
_start:
{
uint8_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v_col_441_; 
v___x_438_ = 0;
v___x_439_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2);
v___x_440_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0));
v_col_441_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_col_441_, 0, v___x_440_);
lean_ctor_set(v_col_441_, 1, v___x_439_);
lean_ctor_set_uint8(v_col_441_, sizeof(void*)*2, v___x_438_);
return v_col_441_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(lean_object* v_self_442_, lean_object* v_a_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; lean_object* v_col_453_; lean_object* v___x_454_; lean_object* v___f_455_; lean_object* v___x_456_; 
v___x_450_ = lean_box(0);
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = 0;
v_col_453_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3);
v___x_454_ = lean_box(v___x_452_);
v___f_455_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed), 12, 5);
lean_closure_set(v___f_455_, 0, v_self_442_);
lean_closure_set(v___f_455_, 1, v_col_453_);
lean_closure_set(v___f_455_, 2, v___x_451_);
lean_closure_set(v___f_455_, 3, v___x_454_);
lean_closure_set(v___f_455_, 4, v___x_450_);
v___x_456_ = l_Lake_ensureJob___redArg(v___x_450_, v___f_455_, v_a_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed(lean_object* v_self_457_, lean_object* v_a_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(v_self_457_, v_a_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec(v___y_460_);
lean_dec(v___y_459_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(lean_object* v_as_467_, size_t v_i_468_, size_t v_stop_469_, lean_object* v_b_470_){
_start:
{
uint8_t v___x_471_; 
v___x_471_ = lean_usize_dec_eq(v_i_468_, v_stop_469_);
if (v___x_471_ == 0)
{
lean_object* v___x_472_; lean_object* v_name_473_; uint8_t v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; size_t v___x_479_; size_t v___x_480_; 
v___x_472_ = lean_array_uget_borrowed(v_as_467_, v_i_468_);
v_name_473_ = lean_ctor_get(v___x_472_, 1);
v___x_474_ = 1;
lean_inc(v_name_473_);
v___x_475_ = l_Lean_Name_toString(v_name_473_, v___x_474_);
v___x_476_ = lean_string_append(v_b_470_, v___x_475_);
lean_dec_ref(v___x_475_);
v___x_477_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
v___x_478_ = lean_string_append(v___x_476_, v___x_477_);
v___x_479_ = ((size_t)1ULL);
v___x_480_ = lean_usize_add(v_i_468_, v___x_479_);
v_i_468_ = v___x_480_;
v_b_470_ = v___x_478_;
goto _start;
}
else
{
return v_b_470_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___boxed(lean_object* v_as_482_, lean_object* v_i_483_, lean_object* v_stop_484_, lean_object* v_b_485_){
_start:
{
size_t v_i_boxed_486_; size_t v_stop_boxed_487_; lean_object* v_res_488_; 
v_i_boxed_486_ = lean_unbox_usize(v_i_483_);
lean_dec(v_i_483_);
v_stop_boxed_487_ = lean_unbox_usize(v_stop_484_);
lean_dec(v_stop_484_);
v_res_488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(v_as_482_, v_i_boxed_486_, v_stop_boxed_487_, v_b_485_);
lean_dec_ref(v_as_482_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(size_t v_sz_489_, size_t v_i_490_, lean_object* v_bs_491_){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = lean_usize_dec_lt(v_i_490_, v_sz_489_);
if (v___x_492_ == 0)
{
return v_bs_491_;
}
else
{
lean_object* v_v_493_; lean_object* v_name_494_; lean_object* v___x_495_; lean_object* v_bs_x27_496_; lean_object* v___x_497_; lean_object* v___x_498_; size_t v___x_499_; size_t v___x_500_; lean_object* v___x_501_; 
v_v_493_ = lean_array_uget_borrowed(v_bs_491_, v_i_490_);
v_name_494_ = lean_ctor_get(v_v_493_, 1);
lean_inc(v_name_494_);
v___x_495_ = lean_unsigned_to_nat(0u);
v_bs_x27_496_ = lean_array_uset(v_bs_491_, v_i_490_, v___x_495_);
v___x_497_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_494_, v___x_492_);
v___x_498_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
v___x_499_ = ((size_t)1ULL);
v___x_500_ = lean_usize_add(v_i_490_, v___x_499_);
v___x_501_ = lean_array_uset(v_bs_x27_496_, v_i_490_, v___x_498_);
v_i_490_ = v___x_500_;
v_bs_491_ = v___x_501_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_503_, lean_object* v_i_504_, lean_object* v_bs_505_){
_start:
{
size_t v_sz_boxed_506_; size_t v_i_boxed_507_; lean_object* v_res_508_; 
v_sz_boxed_506_ = lean_unbox_usize(v_sz_503_);
lean_dec(v_sz_503_);
v_i_boxed_507_ = lean_unbox_usize(v_i_504_);
lean_dec(v_i_504_);
v_res_508_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(v_sz_boxed_506_, v_i_boxed_507_, v_bs_505_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(lean_object* v_a_509_){
_start:
{
size_t v_sz_510_; size_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v_sz_510_ = lean_array_size(v_a_509_);
v___x_511_ = ((size_t)0ULL);
v___x_512_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(v_sz_510_, v___x_511_, v_a_509_);
v___x_513_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(uint8_t v_fmt_514_, lean_object* v_a_515_){
_start:
{
lean_object* v___y_517_; 
if (v_fmt_514_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_524_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_525_ = lean_unsigned_to_nat(0u);
v___x_526_ = lean_array_get_size(v_a_515_);
v___x_527_ = lean_nat_dec_lt(v___x_525_, v___x_526_);
if (v___x_527_ == 0)
{
lean_dec_ref(v_a_515_);
v___y_517_ = v___x_524_;
goto v___jp_516_;
}
else
{
size_t v___x_528_; size_t v___x_529_; lean_object* v___x_530_; 
v___x_528_ = ((size_t)0ULL);
v___x_529_ = lean_usize_of_nat(v___x_526_);
v___x_530_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(v_a_515_, v___x_528_, v___x_529_, v___x_524_);
lean_dec_ref(v_a_515_);
v___y_517_ = v___x_530_;
goto v___jp_516_;
}
}
else
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(v_a_515_);
v___x_532_ = l_Lean_Json_compress(v___x_531_);
return v___x_532_;
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_518_ = lean_unsigned_to_nat(1u);
v___x_519_ = lean_unsigned_to_nat(0u);
v___x_520_ = lean_string_utf8_byte_size(v___y_517_);
lean_inc_ref(v___y_517_);
v___x_521_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_521_, 0, v___y_517_);
lean_ctor_set(v___x_521_, 1, v___x_519_);
lean_ctor_set(v___x_521_, 2, v___x_520_);
v___x_522_ = l_String_Slice_Pos_prevn(v___x_521_, v___x_520_, v___x_518_);
lean_dec_ref_known(v___x_521_, 3);
v___x_523_ = lean_string_utf8_extract_fast(v___y_517_, v___x_519_, v___x_522_);
lean_dec(v___x_522_);
lean_dec_ref(v___y_517_);
return v___x_523_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed(lean_object* v_fmt_533_, lean_object* v_a_534_){
_start:
{
uint8_t v_fmt_boxed_535_; lean_object* v_res_536_; 
v_fmt_boxed_535_ = lean_unbox(v_fmt_533_);
v_res_536_ = l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(v_fmt_boxed_535_, v_a_534_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(lean_object* v_as_550_, size_t v_i_551_, size_t v_stop_552_, lean_object* v_b_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_){
_start:
{
uint8_t v___x_561_; 
v___x_561_ = lean_usize_dec_eq(v_i_551_, v_stop_552_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; lean_object* v_lib_563_; lean_object* v_pkg_564_; lean_object* v_name_565_; lean_object* v_keyName_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_562_ = lean_array_uget_borrowed(v_as_550_, v_i_551_);
v_lib_563_ = lean_ctor_get(v___x_562_, 0);
v_pkg_564_ = lean_ctor_get(v_lib_563_, 0);
v_name_565_ = lean_ctor_get(v___x_562_, 1);
v_keyName_566_ = lean_ctor_get(v_pkg_564_, 2);
v___x_567_ = l_Lake_Module_leanArtsFacet;
lean_inc(v_name_565_);
lean_inc(v_keyName_566_);
v___x_568_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_568_, 0, v_keyName_566_);
lean_ctor_set(v___x_568_, 1, v_name_565_);
v___x_569_ = l_Lake_Module_keyword;
lean_inc(v___x_562_);
v___x_570_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_570_, 0, v___x_568_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
lean_ctor_set(v___x_570_, 2, v___x_562_);
lean_ctor_set(v___x_570_, 3, v___x_567_);
lean_inc_ref(v___y_554_);
lean_inc_ref(v___y_558_);
lean_inc(v___y_557_);
lean_inc(v___y_556_);
lean_inc(v___y_555_);
v___x_571_ = lean_apply_7(v___y_554_, v___x_570_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, lean_box(0));
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v_a_572_; lean_object* v_a_573_; lean_object* v___x_574_; size_t v___x_575_; size_t v___x_576_; 
v_a_572_ = lean_ctor_get(v___x_571_, 0);
lean_inc(v_a_572_);
v_a_573_ = lean_ctor_get(v___x_571_, 1);
lean_inc(v_a_573_);
lean_dec_ref_known(v___x_571_, 2);
v___x_574_ = l_Lake_Job_mix___redArg(v_b_553_, v_a_572_);
v___x_575_ = ((size_t)1ULL);
v___x_576_ = lean_usize_add(v_i_551_, v___x_575_);
v_i_551_ = v___x_576_;
v_b_553_ = v___x_574_;
v___y_559_ = v_a_573_;
goto _start;
}
else
{
lean_object* v_a_578_; lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
lean_dec_ref(v___y_554_);
lean_dec_ref(v_b_553_);
v_a_578_ = lean_ctor_get(v___x_571_, 0);
v_a_579_ = lean_ctor_get(v___x_571_, 1);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_571_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_inc(v_a_578_);
lean_dec(v___x_571_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_578_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v_a_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
else
{
lean_object* v___x_587_; 
lean_dec_ref(v___y_554_);
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v_b_553_);
lean_ctor_set(v___x_587_, 1, v___y_559_);
return v___x_587_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0___boxed(lean_object* v_as_588_, lean_object* v_i_589_, lean_object* v_stop_590_, lean_object* v_b_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
size_t v_i_boxed_599_; size_t v_stop_boxed_600_; lean_object* v_res_601_; 
v_i_boxed_599_ = lean_unbox_usize(v_i_589_);
lean_dec(v_i_589_);
v_stop_boxed_600_ = lean_unbox_usize(v_stop_590_);
lean_dec(v_stop_590_);
v_res_601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(v_as_588_, v_i_boxed_599_, v_stop_boxed_600_, v_b_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
lean_dec_ref(v___y_596_);
lean_dec(v___y_595_);
lean_dec(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v_as_588_);
return v_res_601_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1(void){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; uint8_t v___x_606_; uint8_t v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_604_ = lean_unsigned_to_nat(0u);
v___x_605_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_606_ = 0;
v___x_607_ = 0;
v___x_608_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0));
v___x_609_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_609_, 0, v___x_608_);
lean_ctor_set(v___x_609_, 1, v___x_605_);
lean_ctor_set(v___x_609_, 2, v___x_604_);
lean_ctor_set_uint8(v___x_609_, sizeof(void*)*3, v___x_607_);
lean_ctor_set_uint8(v___x_609_, sizeof(void*)*3 + 1, v___x_606_);
return v___x_609_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_610_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1);
v___x_611_ = lean_box(0);
v___x_612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
lean_ctor_set(v___x_612_, 1, v___x_610_);
return v___x_612_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2);
v___x_614_ = lean_task_pure(v___x_613_);
return v___x_614_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4(void){
_start:
{
uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_615_ = 0;
v___x_616_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_617_ = lean_box(0);
v___x_618_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3);
v___x_619_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v___x_617_);
lean_ctor_set(v___x_619_, 2, v___x_616_);
lean_ctor_set_uint8(v___x_619_, sizeof(void*)*3, v___x_615_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean(lean_object* v_self_620_, lean_object* v_a_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_pkg_628_; lean_object* v_name_629_; lean_object* v_keyName_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v_pkg_628_ = lean_ctor_get(v_self_620_, 0);
v_name_629_ = lean_ctor_get(v_self_620_, 1);
v_keyName_630_ = lean_ctor_get(v_pkg_628_, 2);
v___x_631_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_name_629_);
lean_inc(v_keyName_630_);
v___x_632_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_632_, 0, v_keyName_630_);
lean_ctor_set(v___x_632_, 1, v_name_629_);
v___x_633_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_634_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_634_, 0, v___x_632_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
lean_ctor_set(v___x_634_, 2, v_self_620_);
lean_ctor_set(v___x_634_, 3, v___x_631_);
lean_inc_ref(v_a_621_);
lean_inc_ref(v___y_625_);
lean_inc(v___y_624_);
lean_inc(v___y_623_);
lean_inc(v___y_622_);
v___x_635_ = lean_apply_7(v_a_621_, v___x_634_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, lean_box(0));
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v_a_637_; lean_object* v___x_638_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_636_);
v_a_637_ = lean_ctor_get(v___x_635_, 1);
lean_inc(v_a_637_);
lean_dec_ref_known(v___x_635_, 2);
v___x_638_ = l_Lake_Job_await___redArg(v_a_636_, v_a_637_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_661_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
v_a_640_ = lean_ctor_get(v___x_638_, 1);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_661_ == 0)
{
v___x_642_ = v___x_638_;
v_isShared_643_ = v_isSharedCheck_661_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_inc(v_a_639_);
lean_dec(v___x_638_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_661_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_644_ = lean_unsigned_to_nat(0u);
v___x_645_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4);
v___x_646_ = lean_array_get_size(v_a_639_);
v___x_647_ = lean_nat_dec_lt(v___x_644_, v___x_646_);
if (v___x_647_ == 0)
{
lean_object* v___x_649_; 
lean_dec(v_a_639_);
lean_dec_ref(v_a_621_);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v___x_645_);
v___x_649_ = v___x_642_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_650_, 1, v_a_640_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
else
{
uint8_t v___x_651_; 
v___x_651_ = lean_nat_dec_le(v___x_646_, v___x_646_);
if (v___x_651_ == 0)
{
if (v___x_647_ == 0)
{
lean_object* v___x_653_; 
lean_dec(v_a_639_);
lean_dec_ref(v_a_621_);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v___x_645_);
v___x_653_ = v___x_642_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v_a_640_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
else
{
size_t v___x_655_; size_t v___x_656_; lean_object* v___x_657_; 
lean_del_object(v___x_642_);
v___x_655_ = ((size_t)0ULL);
v___x_656_ = lean_usize_of_nat(v___x_646_);
v___x_657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(v_a_639_, v___x_655_, v___x_656_, v___x_645_, v_a_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v_a_640_);
lean_dec(v_a_639_);
return v___x_657_;
}
}
else
{
size_t v___x_658_; size_t v___x_659_; lean_object* v___x_660_; 
lean_del_object(v___x_642_);
v___x_658_ = ((size_t)0ULL);
v___x_659_ = lean_usize_of_nat(v___x_646_);
v___x_660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(v_a_639_, v___x_658_, v___x_659_, v___x_645_, v_a_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v_a_640_);
lean_dec(v_a_639_);
return v___x_660_;
}
}
}
}
else
{
lean_object* v_a_662_; lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
lean_dec_ref(v_a_621_);
v_a_662_ = lean_ctor_get(v___x_638_, 0);
v_a_663_ = lean_ctor_get(v___x_638_, 1);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_638_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_inc(v_a_662_);
lean_dec(v___x_638_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_662_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
else
{
lean_object* v_a_671_; lean_object* v_a_672_; lean_object* v___x_674_; uint8_t v_isShared_675_; uint8_t v_isSharedCheck_679_; 
lean_dec_ref(v_a_621_);
v_a_671_ = lean_ctor_get(v___x_635_, 0);
v_a_672_ = lean_ctor_get(v___x_635_, 1);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_679_ == 0)
{
v___x_674_ = v___x_635_;
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
else
{
lean_inc(v_a_672_);
lean_inc(v_a_671_);
lean_dec(v___x_635_);
v___x_674_ = lean_box(0);
v_isShared_675_ = v_isSharedCheck_679_;
goto v_resetjp_673_;
}
v_resetjp_673_:
{
lean_object* v___x_677_; 
if (v_isShared_675_ == 0)
{
v___x_677_ = v___x_674_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_a_671_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v_a_672_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___boxed(lean_object* v_self_680_, lean_object* v_a_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean(v_self_680_, v_a_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec(v___y_684_);
lean_dec(v___y_683_);
lean_dec(v___y_682_);
return v_res_688_;
}
}
static lean_object* _init_l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = lean_box(0);
v___x_690_ = l_Lean_Json_compress(v___x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(uint8_t v_fmt_691_){
_start:
{
if (v_fmt_691_ == 0)
{
lean_object* v___x_692_; 
v___x_692_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
return v___x_692_;
}
else
{
lean_object* v___x_693_; 
v___x_693_ = lean_obj_once(&l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0, &l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0_once, _init_l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0);
return v___x_693_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___boxed(lean_object* v_fmt_694_){
_start:
{
uint8_t v_fmt_boxed_695_; lean_object* v_res_696_; 
v_fmt_boxed_695_ = lean_unbox(v_fmt_694_);
v_res_696_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(v_fmt_boxed_695_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0(uint8_t v_fmt_697_, lean_object* v_a_698_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(v_fmt_697_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___boxed(lean_object* v_fmt_700_, lean_object* v_a_701_){
_start:
{
uint8_t v_fmt_boxed_702_; lean_object* v_res_703_; 
v_fmt_boxed_702_ = lean_unbox(v_fmt_700_);
v_res_703_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0(v_fmt_boxed_702_, v_a_701_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0(uint8_t v___y_704_, lean_object* v___y_705_){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(v___y_704_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed(lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
uint8_t v___y_68__boxed_709_; lean_object* v_res_710_; 
v___y_68__boxed_709_ = lean_unbox(v___y_707_);
v_res_710_ = l_Lake_LeanLib_leanArtsFacetConfig___lam__0(v___y_68__boxed_709_, v___y_708_);
return v_res_710_;
}
}
static lean_object* _init_l_Lake_LeanLib_leanArtsFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_713_; uint8_t v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___f_713_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_714_ = 1;
v___x_715_ = l_Lake_instDataKindUnit;
v___x_716_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__1));
v___x_717_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_718_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_718_, 0, v___x_717_);
lean_ctor_set(v___x_718_, 1, v___x_716_);
lean_ctor_set(v___x_718_, 2, v___x_715_);
lean_ctor_set(v___x_718_, 3, v___f_713_);
lean_ctor_set_uint8(v___x_718_, sizeof(void*)*4, v___x_714_);
lean_ctor_set_uint8(v___x_718_, sizeof(void*)*4 + 1, v___x_714_);
return v___x_718_;
}
}
static lean_object* _init_l_Lake_LeanLib_leanArtsFacetConfig(void){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = lean_obj_once(&l_Lake_LeanLib_leanArtsFacetConfig___closed__2, &l_Lake_LeanLib_leanArtsFacetConfig___closed__2_once, _init_l_Lake_LeanLib_leanArtsFacetConfig___closed__2);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(lean_object* v_a_720_, lean_object* v_x_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = l_Lake_ModuleFacet_fetch___redArg(v_x_721_, v_a_720_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed(lean_object* v_a_730_, lean_object* v_x_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(v_a_730_, v_x_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec(v___y_734_);
lean_dec(v___y_733_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(uint8_t v_shouldExport_740_, lean_object* v___x_741_, lean_object* v_bs_742_, lean_object* v_a_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_){
_start:
{
lean_object* v_lib_751_; lean_object* v_config_752_; lean_object* v_nativeFacets_753_; lean_object* v___f_754_; lean_object* v___x_755_; lean_object* v___x_756_; size_t v_sz_757_; size_t v___x_758_; lean_object* v___x_213563__overap_759_; lean_object* v___x_760_; 
v_lib_751_ = lean_ctor_get(v_a_743_, 0);
v_config_752_ = lean_ctor_get(v_lib_751_, 2);
v_nativeFacets_753_ = lean_ctor_get(v_config_752_, 8);
lean_inc_ref(v_nativeFacets_753_);
v___f_754_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed), 9, 1);
lean_closure_set(v___f_754_, 0, v_a_743_);
v___x_755_ = lean_box(v_shouldExport_740_);
v___x_756_ = lean_apply_1(v_nativeFacets_753_, v___x_755_);
v_sz_757_ = lean_array_size(v___x_756_);
v___x_758_ = ((size_t)0ULL);
v___x_213563__overap_759_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_741_, v___f_754_, v_sz_757_, v___x_758_, v___x_756_);
lean_inc_ref(v___y_748_);
lean_inc(v___y_747_);
lean_inc(v___y_746_);
lean_inc(v___y_745_);
v___x_760_ = lean_apply_7(v___x_213563__overap_759_, v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, lean_box(0));
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_a_761_; lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_770_; 
v_a_761_ = lean_ctor_get(v___x_760_, 0);
v_a_762_ = lean_ctor_get(v___x_760_, 1);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_770_ == 0)
{
v___x_764_ = v___x_760_;
v_isShared_765_ = v_isSharedCheck_770_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_inc(v_a_761_);
lean_dec(v___x_760_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_770_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_766_ = l_Array_append___redArg(v_bs_742_, v_a_761_);
lean_dec(v_a_761_);
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 0, v___x_766_);
v___x_768_ = v___x_764_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v_a_762_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
else
{
lean_dec_ref(v_bs_742_);
return v___x_760_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed(lean_object* v_shouldExport_771_, lean_object* v___x_772_, lean_object* v_bs_773_, lean_object* v_a_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_){
_start:
{
uint8_t v_shouldExport_boxed_782_; lean_object* v_res_783_; 
v_shouldExport_boxed_782_ = lean_unbox(v_shouldExport_771_);
v_res_783_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(v_shouldExport_boxed_782_, v___x_772_, v_bs_773_, v_a_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_);
lean_dec_ref(v___y_779_);
lean_dec(v___y_778_);
lean_dec(v___y_777_);
lean_dec(v___y_776_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(lean_object* v___x_784_, lean_object* v_pkg_785_, lean_object* v_x_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v___x_794_; 
v___x_794_ = l_Lake_Target_fetchIn___redArg(v___x_784_, v_pkg_785_, v_x_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed(lean_object* v___x_795_, lean_object* v_pkg_796_, lean_object* v_x_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(v___x_795_, v_pkg_796_, v_x_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
lean_dec_ref(v___y_802_);
lean_dec(v___y_801_);
lean_dec(v___y_800_);
lean_dec(v___y_799_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(lean_object* v_a_806_, lean_object* v_x_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_log_816_; uint8_t v_action_817_; uint8_t v_wantsRebuild_818_; lean_object* v_trace_819_; lean_object* v_buildTime_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v_log_816_ = lean_ctor_get(v___y_814_, 0);
v_action_817_ = lean_ctor_get_uint8(v___y_814_, sizeof(void*)*3);
v_wantsRebuild_818_ = lean_ctor_get_uint8(v___y_814_, sizeof(void*)*3 + 1);
v_trace_819_ = lean_ctor_get(v___y_814_, 1);
v_buildTime_820_ = lean_ctor_get(v___y_814_, 2);
v___x_821_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
v___x_822_ = lean_string_append(v___y_808_, v___x_821_);
v___x_823_ = lean_io_prim_handle_put_str(v_a_806_, v___x_822_);
lean_dec_ref(v___x_822_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_825_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v___x_823_, 1);
v___x_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_825_, 0, v_a_824_);
lean_ctor_set(v___x_825_, 1, v___y_814_);
return v___x_825_;
}
else
{
lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_839_; 
lean_inc(v_buildTime_820_);
lean_inc_ref(v_trace_819_);
lean_inc_ref(v_log_816_);
v_isSharedCheck_839_ = !lean_is_exclusive(v___y_814_);
if (v_isSharedCheck_839_ == 0)
{
lean_object* v_unused_840_; lean_object* v_unused_841_; lean_object* v_unused_842_; 
v_unused_840_ = lean_ctor_get(v___y_814_, 2);
lean_dec(v_unused_840_);
v_unused_841_ = lean_ctor_get(v___y_814_, 1);
lean_dec(v_unused_841_);
v_unused_842_ = lean_ctor_get(v___y_814_, 0);
lean_dec(v_unused_842_);
v___x_827_ = v___y_814_;
v_isShared_828_ = v_isSharedCheck_839_;
goto v_resetjp_826_;
}
else
{
lean_dec(v___y_814_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_839_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v_a_829_; lean_object* v___x_830_; uint8_t v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_836_; 
v_a_829_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_829_);
lean_dec_ref_known(v___x_823_, 1);
v___x_830_ = lean_io_error_to_string(v_a_829_);
v___x_831_ = 3;
v___x_832_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_832_, 0, v___x_830_);
lean_ctor_set_uint8(v___x_832_, sizeof(void*)*1, v___x_831_);
v___x_833_ = lean_array_get_size(v_log_816_);
v___x_834_ = lean_array_push(v_log_816_, v___x_832_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_834_);
v___x_836_ = v___x_827_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_834_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_trace_819_);
lean_ctor_set(v_reuseFailAlloc_838_, 2, v_buildTime_820_);
lean_ctor_set_uint8(v_reuseFailAlloc_838_, sizeof(void*)*3, v_action_817_);
lean_ctor_set_uint8(v_reuseFailAlloc_838_, sizeof(void*)*3 + 1, v_wantsRebuild_818_);
v___x_836_ = v_reuseFailAlloc_838_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
lean_object* v___x_837_; 
v___x_837_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_833_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
return v___x_837_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed(lean_object* v_a_843_, lean_object* v_x_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(v_a_843_, v_x_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v___y_849_);
lean_dec(v___y_848_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec(v_a_843_);
return v_res_853_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_861_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3));
v___x_862_ = lean_unsigned_to_nat(5u);
v___x_863_ = lean_mk_empty_array_with_capacity(v___x_862_);
v___x_864_ = lean_array_push(v___x_863_, v___x_861_);
return v___x_864_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7(void){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_865_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4));
v___x_866_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6);
v___x_867_ = lean_array_push(v___x_866_, v___x_865_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(uint8_t v_bootstrap_870_, lean_object* v___y_871_, lean_object* v_oFiles_872_, uint8_t v_shouldExport_873_, uint8_t v___x_874_, lean_object* v___x_875_, size_t v___x_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
if (v_bootstrap_870_ == 0)
{
lean_object* v_toContext_884_; lean_object* v_lakeEnv_885_; lean_object* v_lean_886_; lean_object* v_log_887_; uint8_t v_action_888_; uint8_t v_wantsRebuild_889_; lean_object* v_trace_890_; lean_object* v_buildTime_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_921_; 
lean_dec_ref(v___y_877_);
lean_dec_ref(v___x_875_);
v_toContext_884_ = lean_ctor_get(v___y_881_, 1);
v_lakeEnv_885_ = lean_ctor_get(v_toContext_884_, 0);
v_lean_886_ = lean_ctor_get(v_lakeEnv_885_, 1);
v_log_887_ = lean_ctor_get(v___y_882_, 0);
v_action_888_ = lean_ctor_get_uint8(v___y_882_, sizeof(void*)*3);
v_wantsRebuild_889_ = lean_ctor_get_uint8(v___y_882_, sizeof(void*)*3 + 1);
v_trace_890_ = lean_ctor_get(v___y_882_, 1);
v_buildTime_891_ = lean_ctor_get(v___y_882_, 2);
v_isSharedCheck_921_ = !lean_is_exclusive(v___y_882_);
if (v_isSharedCheck_921_ == 0)
{
v___x_893_ = v___y_882_;
v_isShared_894_ = v_isSharedCheck_921_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_buildTime_891_);
lean_inc(v_trace_890_);
lean_inc(v_log_887_);
lean_dec(v___y_882_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_921_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v_ar_895_; lean_object* v___x_896_; 
v_ar_895_ = lean_ctor_get(v_lean_886_, 13);
lean_inc_ref(v_ar_895_);
v___x_896_ = l_Lake_compileStaticLib(v___y_871_, v_oFiles_872_, v_ar_895_, v_bootstrap_870_, v_log_887_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_908_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
v_a_898_ = lean_ctor_get(v___x_896_, 1);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_908_ == 0)
{
v___x_900_ = v___x_896_;
v_isShared_901_ = v_isSharedCheck_908_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_inc(v_a_897_);
lean_dec(v___x_896_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_908_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v_a_898_);
v___x_903_ = v___x_893_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_898_);
lean_ctor_set(v_reuseFailAlloc_907_, 1, v_trace_890_);
lean_ctor_set(v_reuseFailAlloc_907_, 2, v_buildTime_891_);
lean_ctor_set_uint8(v_reuseFailAlloc_907_, sizeof(void*)*3, v_action_888_);
lean_ctor_set_uint8(v_reuseFailAlloc_907_, sizeof(void*)*3 + 1, v_wantsRebuild_889_);
v___x_903_ = v_reuseFailAlloc_907_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_905_; 
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 1, v___x_903_);
v___x_905_ = v___x_900_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_897_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v___x_903_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
else
{
lean_object* v_a_909_; lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_920_; 
v_a_909_ = lean_ctor_get(v___x_896_, 0);
v_a_910_ = lean_ctor_get(v___x_896_, 1);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_920_ == 0)
{
v___x_912_ = v___x_896_;
v_isShared_913_ = v_isSharedCheck_920_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_inc(v_a_909_);
lean_dec(v___x_896_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_920_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v_a_910_);
v___x_915_ = v___x_893_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_910_);
lean_ctor_set(v_reuseFailAlloc_919_, 1, v_trace_890_);
lean_ctor_set(v_reuseFailAlloc_919_, 2, v_buildTime_891_);
lean_ctor_set_uint8(v_reuseFailAlloc_919_, sizeof(void*)*3, v_action_888_);
lean_ctor_set_uint8(v_reuseFailAlloc_919_, sizeof(void*)*3 + 1, v_wantsRebuild_889_);
v___x_915_ = v_reuseFailAlloc_919_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
lean_object* v___x_917_; 
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 1, v___x_915_);
v___x_917_ = v___x_912_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_909_);
lean_ctor_set(v_reuseFailAlloc_918_, 1, v___x_915_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
}
}
else
{
uint8_t v___x_922_; 
v___x_922_ = l_System_Platform_isOSX;
if (v___x_922_ == 0)
{
uint8_t v___x_923_; 
lean_dec_ref(v___y_877_);
lean_dec_ref(v___x_875_);
v___x_923_ = l_System_Platform_isWindows;
if (v___x_923_ == 0)
{
lean_object* v_toContext_924_; lean_object* v_lakeEnv_925_; lean_object* v_lean_926_; lean_object* v_log_927_; uint8_t v_action_928_; uint8_t v_wantsRebuild_929_; lean_object* v_trace_930_; lean_object* v_buildTime_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_961_; 
v_toContext_924_ = lean_ctor_get(v___y_881_, 1);
v_lakeEnv_925_ = lean_ctor_get(v_toContext_924_, 0);
v_lean_926_ = lean_ctor_get(v_lakeEnv_925_, 1);
v_log_927_ = lean_ctor_get(v___y_882_, 0);
v_action_928_ = lean_ctor_get_uint8(v___y_882_, sizeof(void*)*3);
v_wantsRebuild_929_ = lean_ctor_get_uint8(v___y_882_, sizeof(void*)*3 + 1);
v_trace_930_ = lean_ctor_get(v___y_882_, 1);
v_buildTime_931_ = lean_ctor_get(v___y_882_, 2);
v_isSharedCheck_961_ = !lean_is_exclusive(v___y_882_);
if (v_isSharedCheck_961_ == 0)
{
v___x_933_ = v___y_882_;
v_isShared_934_ = v_isSharedCheck_961_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_buildTime_931_);
lean_inc(v_trace_930_);
lean_inc(v_log_927_);
lean_dec(v___y_882_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_961_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v_ar_935_; lean_object* v___x_936_; 
v_ar_935_ = lean_ctor_get(v_lean_926_, 13);
lean_inc_ref(v_ar_935_);
v___x_936_ = l_Lake_compileStaticLib(v___y_871_, v_oFiles_872_, v_ar_935_, v___x_923_, v_log_927_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_948_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
v_a_938_ = lean_ctor_get(v___x_936_, 1);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_948_ == 0)
{
v___x_940_ = v___x_936_;
v_isShared_941_ = v_isSharedCheck_948_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_inc(v_a_937_);
lean_dec(v___x_936_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_948_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v_a_938_);
v___x_943_ = v___x_933_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_938_);
lean_ctor_set(v_reuseFailAlloc_947_, 1, v_trace_930_);
lean_ctor_set(v_reuseFailAlloc_947_, 2, v_buildTime_931_);
lean_ctor_set_uint8(v_reuseFailAlloc_947_, sizeof(void*)*3, v_action_928_);
lean_ctor_set_uint8(v_reuseFailAlloc_947_, sizeof(void*)*3 + 1, v_wantsRebuild_929_);
v___x_943_ = v_reuseFailAlloc_947_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
lean_object* v___x_945_; 
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 1, v___x_943_);
v___x_945_ = v___x_940_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_937_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v___x_943_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
else
{
lean_object* v_a_949_; lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_960_; 
v_a_949_ = lean_ctor_get(v___x_936_, 0);
v_a_950_ = lean_ctor_get(v___x_936_, 1);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_960_ == 0)
{
v___x_952_ = v___x_936_;
v_isShared_953_ = v_isSharedCheck_960_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_inc(v_a_949_);
lean_dec(v___x_936_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_960_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v_a_950_);
v___x_955_ = v___x_933_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_950_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_trace_930_);
lean_ctor_set(v_reuseFailAlloc_959_, 2, v_buildTime_931_);
lean_ctor_set_uint8(v_reuseFailAlloc_959_, sizeof(void*)*3, v_action_928_);
lean_ctor_set_uint8(v_reuseFailAlloc_959_, sizeof(void*)*3 + 1, v_wantsRebuild_929_);
v___x_955_ = v_reuseFailAlloc_959_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
lean_object* v___x_957_; 
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 1, v___x_955_);
v___x_957_ = v___x_952_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_949_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v___x_955_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
}
}
else
{
lean_object* v_toContext_962_; lean_object* v_lakeEnv_963_; lean_object* v_lean_964_; lean_object* v_log_965_; uint8_t v_action_966_; uint8_t v_wantsRebuild_967_; lean_object* v_trace_968_; lean_object* v_buildTime_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_999_; 
v_toContext_962_ = lean_ctor_get(v___y_881_, 1);
v_lakeEnv_963_ = lean_ctor_get(v_toContext_962_, 0);
v_lean_964_ = lean_ctor_get(v_lakeEnv_963_, 1);
v_log_965_ = lean_ctor_get(v___y_882_, 0);
v_action_966_ = lean_ctor_get_uint8(v___y_882_, sizeof(void*)*3);
v_wantsRebuild_967_ = lean_ctor_get_uint8(v___y_882_, sizeof(void*)*3 + 1);
v_trace_968_ = lean_ctor_get(v___y_882_, 1);
v_buildTime_969_ = lean_ctor_get(v___y_882_, 2);
v_isSharedCheck_999_ = !lean_is_exclusive(v___y_882_);
if (v_isSharedCheck_999_ == 0)
{
v___x_971_ = v___y_882_;
v_isShared_972_ = v_isSharedCheck_999_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_buildTime_969_);
lean_inc(v_trace_968_);
lean_inc(v_log_965_);
lean_dec(v___y_882_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_999_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v_ar_973_; lean_object* v___x_974_; 
v_ar_973_ = lean_ctor_get(v_lean_964_, 13);
lean_inc_ref(v_ar_973_);
v___x_974_ = l_Lake_compileStaticLib(v___y_871_, v_oFiles_872_, v_ar_973_, v_shouldExport_873_, v_log_965_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_986_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
v_a_976_ = lean_ctor_get(v___x_974_, 1);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_986_ == 0)
{
v___x_978_ = v___x_974_;
v_isShared_979_ = v_isSharedCheck_986_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_inc(v_a_975_);
lean_dec(v___x_974_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_986_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v_a_976_);
v___x_981_ = v___x_971_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_976_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v_trace_968_);
lean_ctor_set(v_reuseFailAlloc_985_, 2, v_buildTime_969_);
lean_ctor_set_uint8(v_reuseFailAlloc_985_, sizeof(void*)*3, v_action_966_);
lean_ctor_set_uint8(v_reuseFailAlloc_985_, sizeof(void*)*3 + 1, v_wantsRebuild_967_);
v___x_981_ = v_reuseFailAlloc_985_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
lean_object* v___x_983_; 
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 1, v___x_981_);
v___x_983_ = v___x_978_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_975_);
lean_ctor_set(v_reuseFailAlloc_984_, 1, v___x_981_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
else
{
lean_object* v_a_987_; lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_998_; 
v_a_987_ = lean_ctor_get(v___x_974_, 0);
v_a_988_ = lean_ctor_get(v___x_974_, 1);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_998_ == 0)
{
v___x_990_ = v___x_974_;
v_isShared_991_ = v_isSharedCheck_998_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_inc(v_a_987_);
lean_dec(v___x_974_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_998_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 0, v_a_988_);
v___x_993_ = v___x_971_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_988_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v_trace_968_);
lean_ctor_set(v_reuseFailAlloc_997_, 2, v_buildTime_969_);
lean_ctor_set_uint8(v_reuseFailAlloc_997_, sizeof(void*)*3, v_action_966_);
lean_ctor_set_uint8(v_reuseFailAlloc_997_, sizeof(void*)*3 + 1, v_wantsRebuild_967_);
v___x_993_ = v_reuseFailAlloc_997_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
lean_object* v___x_995_; 
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 1, v___x_993_);
v___x_995_ = v___x_990_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_987_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
}
}
else
{
lean_object* v_log_1000_; uint8_t v_action_1001_; uint8_t v_wantsRebuild_1002_; lean_object* v_trace_1003_; lean_object* v_buildTime_1004_; lean_object* v___x_1005_; 
v_log_1000_ = lean_ctor_get(v___y_882_, 0);
v_action_1001_ = lean_ctor_get_uint8(v___y_882_, sizeof(void*)*3);
v_wantsRebuild_1002_ = lean_ctor_get_uint8(v___y_882_, sizeof(void*)*3 + 1);
v_trace_1003_ = lean_ctor_get(v___y_882_, 1);
v_buildTime_1004_ = lean_ctor_get(v___y_882_, 2);
lean_inc_ref(v___y_871_);
v___x_1005_ = l_Lake_createParentDirs(v___y_871_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v_a_1009_; lean_object* v___y_1056_; uint8_t v___x_1058_; lean_object* v___x_1059_; 
lean_dec_ref_known(v___x_1005_, 1);
v___x_1006_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0));
lean_inc_ref(v___y_871_);
v___x_1007_ = l_System_FilePath_addExtension(v___y_871_, v___x_1006_);
v___x_1058_ = 1;
v___x_1059_ = lean_io_prim_handle_mk(v___x_1007_, v___x_1058_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v_a_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v___x_1059_, 1);
v___x_1061_ = lean_unsigned_to_nat(0u);
v___x_1062_ = lean_array_get_size(v_oFiles_872_);
v___x_1063_ = lean_nat_dec_lt(v___x_1061_, v___x_1062_);
if (v___x_1063_ == 0)
{
lean_dec(v_a_1060_);
lean_dec_ref(v___y_877_);
lean_dec_ref(v___x_875_);
lean_dec_ref(v_oFiles_872_);
v_a_1009_ = v___y_882_;
goto v___jp_1008_;
}
else
{
lean_object* v___f_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
v___f_1064_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed), 10, 1);
lean_closure_set(v___f_1064_, 0, v_a_1060_);
v___x_1065_ = lean_box(0);
v___x_1066_ = lean_nat_dec_le(v___x_1062_, v___x_1062_);
if (v___x_1066_ == 0)
{
if (v___x_1063_ == 0)
{
lean_dec_ref(v___f_1064_);
lean_dec_ref(v___y_877_);
lean_dec_ref(v___x_875_);
lean_dec_ref(v_oFiles_872_);
v_a_1009_ = v___y_882_;
goto v___jp_1008_;
}
else
{
size_t v___x_1067_; lean_object* v___x_213721__overap_1068_; lean_object* v___x_1069_; 
v___x_1067_ = lean_usize_of_nat(v___x_1062_);
v___x_213721__overap_1068_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_875_, v___f_1064_, v_oFiles_872_, v___x_876_, v___x_1067_, v___x_1065_);
lean_inc_ref(v___y_881_);
lean_inc(v___y_880_);
lean_inc(v___y_879_);
lean_inc(v___y_878_);
v___x_1069_ = lean_apply_7(v___x_213721__overap_1068_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, lean_box(0));
v___y_1056_ = v___x_1069_;
goto v___jp_1055_;
}
}
else
{
size_t v___x_1070_; lean_object* v___x_213723__overap_1071_; lean_object* v___x_1072_; 
v___x_1070_ = lean_usize_of_nat(v___x_1062_);
v___x_213723__overap_1071_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_875_, v___f_1064_, v_oFiles_872_, v___x_876_, v___x_1070_, v___x_1065_);
lean_inc_ref(v___y_881_);
lean_inc(v___y_880_);
lean_inc(v___y_879_);
lean_inc(v___y_878_);
v___x_1072_ = lean_apply_7(v___x_213723__overap_1071_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, lean_box(0));
v___y_1056_ = v___x_1072_;
goto v___jp_1055_;
}
}
}
else
{
lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1086_; 
lean_inc(v_buildTime_1004_);
lean_inc_ref(v_trace_1003_);
lean_inc_ref(v_log_1000_);
lean_dec_ref(v___x_1007_);
lean_dec_ref(v___y_877_);
lean_dec_ref(v___x_875_);
lean_dec_ref(v_oFiles_872_);
lean_dec_ref(v___y_871_);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___y_882_);
if (v_isSharedCheck_1086_ == 0)
{
lean_object* v_unused_1087_; lean_object* v_unused_1088_; lean_object* v_unused_1089_; 
v_unused_1087_ = lean_ctor_get(v___y_882_, 2);
lean_dec(v_unused_1087_);
v_unused_1088_ = lean_ctor_get(v___y_882_, 1);
lean_dec(v_unused_1088_);
v_unused_1089_ = lean_ctor_get(v___y_882_, 0);
lean_dec(v_unused_1089_);
v___x_1074_ = v___y_882_;
v_isShared_1075_ = v_isSharedCheck_1086_;
goto v_resetjp_1073_;
}
else
{
lean_dec(v___y_882_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1086_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v_a_1076_; lean_object* v___x_1077_; uint8_t v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1083_; 
v_a_1076_ = lean_ctor_get(v___x_1059_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1059_, 1);
v___x_1077_ = lean_io_error_to_string(v_a_1076_);
v___x_1078_ = 3;
v___x_1079_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1079_, 0, v___x_1077_);
lean_ctor_set_uint8(v___x_1079_, sizeof(void*)*1, v___x_1078_);
v___x_1080_ = lean_array_get_size(v_log_1000_);
v___x_1081_ = lean_array_push(v_log_1000_, v___x_1079_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 0, v___x_1081_);
v___x_1083_ = v___x_1074_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_trace_1003_);
lean_ctor_set(v_reuseFailAlloc_1085_, 2, v_buildTime_1004_);
lean_ctor_set_uint8(v_reuseFailAlloc_1085_, sizeof(void*)*3, v_action_1001_);
lean_ctor_set_uint8(v_reuseFailAlloc_1085_, sizeof(void*)*3 + 1, v_wantsRebuild_1002_);
v___x_1083_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1080_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
return v___x_1084_;
}
}
}
v___jp_1008_:
{
lean_object* v___x_1010_; lean_object* v_log_1011_; uint8_t v_action_1012_; uint8_t v_wantsRebuild_1013_; lean_object* v_trace_1014_; lean_object* v_buildTime_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1054_; 
v___x_1010_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1));
v_log_1011_ = lean_ctor_get(v_a_1009_, 0);
v_action_1012_ = lean_ctor_get_uint8(v_a_1009_, sizeof(void*)*3);
v_wantsRebuild_1013_ = lean_ctor_get_uint8(v_a_1009_, sizeof(void*)*3 + 1);
v_trace_1014_ = lean_ctor_get(v_a_1009_, 1);
v_buildTime_1015_ = lean_ctor_get(v_a_1009_, 2);
v_isSharedCheck_1054_ = !lean_is_exclusive(v_a_1009_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1017_ = v_a_1009_;
v_isShared_1018_ = v_isSharedCheck_1054_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_buildTime_1015_);
lean_inc(v_trace_1014_);
lean_inc(v_log_1011_);
lean_dec(v_a_1009_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1054_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; uint8_t v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1019_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2));
v___x_1020_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5));
v___x_1021_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7);
v___x_1022_ = lean_array_push(v___x_1021_, v___y_871_);
v___x_1023_ = lean_array_push(v___x_1022_, v___x_1020_);
v___x_1024_ = lean_array_push(v___x_1023_, v___x_1007_);
v___x_1025_ = lean_box(0);
v___x_1026_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8));
v___x_1027_ = 0;
v___x_1028_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1028_, 0, v___x_1010_);
lean_ctor_set(v___x_1028_, 1, v___x_1019_);
lean_ctor_set(v___x_1028_, 2, v___x_1024_);
lean_ctor_set(v___x_1028_, 3, v___x_1025_);
lean_ctor_set(v___x_1028_, 4, v___x_1026_);
lean_ctor_set_uint8(v___x_1028_, sizeof(void*)*5, v___x_874_);
lean_ctor_set_uint8(v___x_1028_, sizeof(void*)*5 + 1, v___x_1027_);
v___x_1029_ = l_Lake_proc(v___x_1028_, v___x_1027_, v___x_1025_, v_log_1011_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1041_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
v_a_1031_ = lean_ctor_get(v___x_1029_, 1);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1033_ = v___x_1029_;
v_isShared_1034_ = v_isSharedCheck_1041_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_inc(v_a_1030_);
lean_dec(v___x_1029_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1041_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v_a_1031_);
v___x_1036_ = v___x_1017_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v_a_1031_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v_trace_1014_);
lean_ctor_set(v_reuseFailAlloc_1040_, 2, v_buildTime_1015_);
lean_ctor_set_uint8(v_reuseFailAlloc_1040_, sizeof(void*)*3, v_action_1012_);
lean_ctor_set_uint8(v_reuseFailAlloc_1040_, sizeof(void*)*3 + 1, v_wantsRebuild_1013_);
v___x_1036_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
lean_object* v___x_1038_; 
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 1, v___x_1036_);
v___x_1038_ = v___x_1033_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1030_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
else
{
lean_object* v_a_1042_; lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1053_; 
v_a_1042_ = lean_ctor_get(v___x_1029_, 0);
v_a_1043_ = lean_ctor_get(v___x_1029_, 1);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1045_ = v___x_1029_;
v_isShared_1046_ = v_isSharedCheck_1053_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_inc(v_a_1042_);
lean_dec(v___x_1029_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1053_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v_a_1043_);
v___x_1048_ = v___x_1017_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1043_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_trace_1014_);
lean_ctor_set(v_reuseFailAlloc_1052_, 2, v_buildTime_1015_);
lean_ctor_set_uint8(v_reuseFailAlloc_1052_, sizeof(void*)*3, v_action_1012_);
lean_ctor_set_uint8(v_reuseFailAlloc_1052_, sizeof(void*)*3 + 1, v_wantsRebuild_1013_);
v___x_1048_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1050_; 
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 1, v___x_1048_);
v___x_1050_ = v___x_1045_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1042_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
}
}
v___jp_1055_:
{
if (lean_obj_tag(v___y_1056_) == 0)
{
lean_object* v_a_1057_; 
v_a_1057_ = lean_ctor_get(v___y_1056_, 1);
lean_inc(v_a_1057_);
lean_dec_ref_known(v___y_1056_, 2);
v_a_1009_ = v_a_1057_;
goto v___jp_1008_;
}
else
{
lean_dec_ref(v___x_1007_);
lean_dec_ref(v___y_871_);
return v___y_1056_;
}
}
}
else
{
lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1103_; 
lean_inc(v_buildTime_1004_);
lean_inc_ref(v_trace_1003_);
lean_inc_ref(v_log_1000_);
lean_dec_ref(v___y_877_);
lean_dec_ref(v___x_875_);
lean_dec_ref(v_oFiles_872_);
lean_dec_ref(v___y_871_);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___y_882_);
if (v_isSharedCheck_1103_ == 0)
{
lean_object* v_unused_1104_; lean_object* v_unused_1105_; lean_object* v_unused_1106_; 
v_unused_1104_ = lean_ctor_get(v___y_882_, 2);
lean_dec(v_unused_1104_);
v_unused_1105_ = lean_ctor_get(v___y_882_, 1);
lean_dec(v_unused_1105_);
v_unused_1106_ = lean_ctor_get(v___y_882_, 0);
lean_dec(v_unused_1106_);
v___x_1091_ = v___y_882_;
v_isShared_1092_ = v_isSharedCheck_1103_;
goto v_resetjp_1090_;
}
else
{
lean_dec(v___y_882_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1103_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v_a_1093_; lean_object* v___x_1094_; uint8_t v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1100_; 
v_a_1093_ = lean_ctor_get(v___x_1005_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1005_, 1);
v___x_1094_ = lean_io_error_to_string(v_a_1093_);
v___x_1095_ = 3;
v___x_1096_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*1, v___x_1095_);
v___x_1097_ = lean_array_get_size(v_log_1000_);
v___x_1098_ = lean_array_push(v_log_1000_, v___x_1096_);
if (v_isShared_1092_ == 0)
{
lean_ctor_set(v___x_1091_, 0, v___x_1098_);
v___x_1100_ = v___x_1091_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v___x_1098_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v_trace_1003_);
lean_ctor_set(v_reuseFailAlloc_1102_, 2, v_buildTime_1004_);
lean_ctor_set_uint8(v_reuseFailAlloc_1102_, sizeof(void*)*3, v_action_1001_);
lean_ctor_set_uint8(v_reuseFailAlloc_1102_, sizeof(void*)*3 + 1, v_wantsRebuild_1002_);
v___x_1100_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1097_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
return v___x_1101_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed(lean_object* v_bootstrap_1107_, lean_object* v___y_1108_, lean_object* v_oFiles_1109_, lean_object* v_shouldExport_1110_, lean_object* v___x_1111_, lean_object* v___x_1112_, lean_object* v___x_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
uint8_t v_bootstrap_boxed_1121_; uint8_t v_shouldExport_boxed_1122_; uint8_t v___x_214091__boxed_1123_; size_t v___x_214093__boxed_1124_; lean_object* v_res_1125_; 
v_bootstrap_boxed_1121_ = lean_unbox(v_bootstrap_1107_);
v_shouldExport_boxed_1122_ = lean_unbox(v_shouldExport_1110_);
v___x_214091__boxed_1123_ = lean_unbox(v___x_1111_);
v___x_214093__boxed_1124_ = lean_unbox_usize(v___x_1113_);
lean_dec(v___x_1113_);
v_res_1125_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(v_bootstrap_boxed_1121_, v___y_1108_, v_oFiles_1109_, v_shouldExport_boxed_1122_, v___x_214091__boxed_1123_, v___x_1112_, v___x_214093__boxed_1124_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec(v___y_1115_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(uint8_t v_bootstrap_1127_, lean_object* v___y_1128_, uint8_t v_shouldExport_1129_, uint8_t v___x_1130_, lean_object* v___x_1131_, size_t v___x_1132_, lean_object* v_oFiles_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___y_1145_; uint8_t v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1141_ = lean_box(v_bootstrap_1127_);
v___x_1142_ = lean_box(v_shouldExport_1129_);
v___x_1143_ = lean_box(v___x_1130_);
v___x_1144_ = lean_box_usize(v___x_1132_);
lean_inc_ref(v___y_1128_);
v___y_1145_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed), 14, 7);
lean_closure_set(v___y_1145_, 0, v___x_1141_);
lean_closure_set(v___y_1145_, 1, v___y_1128_);
lean_closure_set(v___y_1145_, 2, v_oFiles_1133_);
lean_closure_set(v___y_1145_, 3, v___x_1142_);
lean_closure_set(v___y_1145_, 4, v___x_1143_);
lean_closure_set(v___y_1145_, 5, v___x_1131_);
lean_closure_set(v___y_1145_, 6, v___x_1144_);
v___x_1146_ = 0;
v___x_1147_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0));
v___x_1148_ = l_Lake_buildArtifactUnlessUpToDate(v___y_1128_, v___y_1145_, v___x_1146_, v___x_1147_, v___x_1130_, v___x_1146_, v___x_1146_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1158_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
v_a_1150_ = lean_ctor_get(v___x_1148_, 1);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1152_ = v___x_1148_;
v_isShared_1153_ = v_isSharedCheck_1158_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_inc(v_a_1149_);
lean_dec(v___x_1148_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1158_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v_path_1154_; lean_object* v___x_1156_; 
v_path_1154_ = lean_ctor_get(v_a_1149_, 1);
lean_inc_ref(v_path_1154_);
lean_dec(v_a_1149_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 0, v_path_1154_);
v___x_1156_ = v___x_1152_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_path_1154_);
lean_ctor_set(v_reuseFailAlloc_1157_, 1, v_a_1150_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1167_; 
v_a_1159_ = lean_ctor_get(v___x_1148_, 0);
v_a_1160_ = lean_ctor_get(v___x_1148_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1162_ = v___x_1148_;
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_inc(v_a_1159_);
lean_dec(v___x_1148_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1165_; 
if (v_isShared_1163_ == 0)
{
v___x_1165_ = v___x_1162_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1159_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v_a_1160_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed(lean_object* v_bootstrap_1168_, lean_object* v___y_1169_, lean_object* v_shouldExport_1170_, lean_object* v___x_1171_, lean_object* v___x_1172_, lean_object* v___x_1173_, lean_object* v_oFiles_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
uint8_t v_bootstrap_boxed_1182_; uint8_t v_shouldExport_boxed_1183_; uint8_t v___x_214514__boxed_1184_; size_t v___x_214516__boxed_1185_; lean_object* v_res_1186_; 
v_bootstrap_boxed_1182_ = lean_unbox(v_bootstrap_1168_);
v_shouldExport_boxed_1183_ = lean_unbox(v_shouldExport_1170_);
v___x_214514__boxed_1184_ = lean_unbox(v___x_1171_);
v___x_214516__boxed_1185_ = lean_unbox_usize(v___x_1173_);
lean_dec(v___x_1173_);
v_res_1186_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(v_bootstrap_boxed_1182_, v___y_1169_, v_shouldExport_boxed_1183_, v___x_214514__boxed_1184_, v___x_1172_, v___x_214516__boxed_1185_, v_oFiles_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec(v___y_1177_);
lean_dec(v___y_1176_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(lean_object* v_config_1191_, lean_object* v_config_1192_, uint8_t v_shouldExport_1193_, uint8_t v___x_1194_, lean_object* v___x_1195_, lean_object* v___x_1196_, lean_object* v___x_1197_, lean_object* v___x_1198_, lean_object* v___f_1199_, lean_object* v_dir_1200_, lean_object* v_self_1201_, lean_object* v___x_1202_, lean_object* v___f_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_){
_start:
{
uint8_t v___y_1212_; size_t v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1217_; lean_object* v_a_1232_; lean_object* v_a_1233_; lean_object* v___x_1276_; 
lean_inc_ref(v___y_1204_);
lean_inc_ref(v___y_1208_);
lean_inc(v___y_1207_);
lean_inc(v___y_1206_);
lean_inc(v___x_1197_);
v___x_1276_ = lean_apply_7(v___y_1204_, v___x_1202_, v___x_1197_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, lean_box(0));
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v_a_1277_; lean_object* v_a_1278_; lean_object* v___x_1279_; 
v_a_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1277_);
v_a_1278_ = lean_ctor_get(v___x_1276_, 1);
lean_inc(v_a_1278_);
lean_dec_ref_known(v___x_1276_, 2);
v___x_1279_ = l_Lake_Job_await___redArg(v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; lean_object* v_a_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; uint8_t v___x_1285_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
v_a_1281_ = lean_ctor_get(v___x_1279_, 1);
lean_inc(v_a_1281_);
lean_dec_ref_known(v___x_1279_, 2);
v___x_1282_ = lean_unsigned_to_nat(0u);
v___x_1283_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_1284_ = lean_array_get_size(v_a_1280_);
v___x_1285_ = lean_nat_dec_lt(v___x_1282_, v___x_1284_);
if (v___x_1285_ == 0)
{
lean_dec(v_a_1280_);
lean_dec_ref(v___f_1203_);
v_a_1232_ = v___x_1283_;
v_a_1233_ = v_a_1281_;
goto v___jp_1231_;
}
else
{
size_t v___x_1286_; size_t v___x_1287_; lean_object* v___x_213851__overap_1288_; lean_object* v___x_1289_; 
v___x_1286_ = ((size_t)0ULL);
v___x_1287_ = lean_usize_of_nat(v___x_1284_);
lean_inc_ref(v___x_1198_);
v___x_213851__overap_1288_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1198_, v___f_1203_, v_a_1280_, v___x_1286_, v___x_1287_, v___x_1283_);
lean_inc_ref(v___y_1208_);
lean_inc(v___y_1207_);
lean_inc(v___y_1206_);
lean_inc(v___x_1197_);
lean_inc_ref(v___y_1204_);
v___x_1289_ = lean_apply_7(v___x_213851__overap_1288_, v___y_1204_, v___x_1197_, v___y_1206_, v___y_1207_, v___y_1208_, v_a_1281_, lean_box(0));
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v_a_1291_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_a_1290_);
v_a_1291_ = lean_ctor_get(v___x_1289_, 1);
lean_inc(v_a_1291_);
lean_dec_ref_known(v___x_1289_, 2);
v_a_1232_ = v_a_1290_;
v_a_1233_ = v_a_1291_;
goto v___jp_1231_;
}
else
{
lean_object* v_a_1292_; lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
lean_dec_ref(v___y_1204_);
lean_dec_ref(v_self_1201_);
lean_dec_ref(v_dir_1200_);
lean_dec_ref(v___f_1199_);
lean_dec_ref(v___x_1198_);
lean_dec(v___x_1197_);
lean_dec(v___x_1196_);
lean_dec_ref(v___x_1195_);
lean_dec_ref(v_config_1191_);
v_a_1292_ = lean_ctor_get(v___x_1289_, 0);
v_a_1293_ = lean_ctor_get(v___x_1289_, 1);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1295_ = v___x_1289_;
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_inc(v_a_1292_);
lean_dec(v___x_1289_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1292_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v_a_1293_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
}
else
{
lean_object* v_a_1301_; lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
lean_dec_ref(v___y_1204_);
lean_dec_ref(v___f_1203_);
lean_dec_ref(v_self_1201_);
lean_dec_ref(v_dir_1200_);
lean_dec_ref(v___f_1199_);
lean_dec_ref(v___x_1198_);
lean_dec(v___x_1197_);
lean_dec(v___x_1196_);
lean_dec_ref(v___x_1195_);
lean_dec_ref(v_config_1191_);
v_a_1301_ = lean_ctor_get(v___x_1279_, 0);
v_a_1302_ = lean_ctor_get(v___x_1279_, 1);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1279_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_inc(v_a_1301_);
lean_dec(v___x_1279_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1301_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
else
{
lean_object* v_a_1310_; lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
lean_dec_ref(v___y_1204_);
lean_dec_ref(v___f_1203_);
lean_dec_ref(v_self_1201_);
lean_dec_ref(v_dir_1200_);
lean_dec_ref(v___f_1199_);
lean_dec_ref(v___x_1198_);
lean_dec(v___x_1197_);
lean_dec(v___x_1196_);
lean_dec_ref(v___x_1195_);
lean_dec_ref(v_config_1191_);
v_a_1310_ = lean_ctor_get(v___x_1276_, 0);
v_a_1311_ = lean_ctor_get(v___x_1276_, 1);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1276_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_inc(v_a_1310_);
lean_dec(v___x_1276_);
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
v_reuseFailAlloc_1317_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_a_1310_);
lean_ctor_set(v_reuseFailAlloc_1317_, 1, v_a_1311_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
v___jp_1211_:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___f_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1218_ = lean_box(v___y_1212_);
v___x_1219_ = lean_box(v_shouldExport_1193_);
v___x_1220_ = lean_box(v___x_1194_);
v___x_1221_ = lean_box_usize(v___y_1213_);
v___f_1222_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed), 14, 6);
lean_closure_set(v___f_1222_, 0, v___x_1218_);
lean_closure_set(v___f_1222_, 1, v___y_1217_);
lean_closure_set(v___f_1222_, 2, v___x_1219_);
lean_closure_set(v___f_1222_, 3, v___x_1220_);
lean_closure_set(v___f_1222_, 4, v___x_1195_);
lean_closure_set(v___f_1222_, 5, v___x_1221_);
v___x_1223_ = l_Array_append___redArg(v___y_1214_, v___y_1216_);
lean_dec_ref(v___y_1216_);
v___x_1224_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0));
v___x_1225_ = l_Lake_Job_collectArray___redArg(v___x_1223_, v___x_1224_);
lean_dec_ref(v___x_1223_);
v___x_1226_ = lean_unsigned_to_nat(0u);
v___x_1227_ = 0;
v___x_1228_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_1229_ = l_Lake_Job_mapM___redArg(v___x_1196_, v___x_1225_, v___f_1222_, v___x_1226_, v___x_1227_, v___y_1204_, v___x_1197_, v___y_1206_, v___y_1207_, v___y_1208_, v___x_1228_);
lean_dec(v___x_1197_);
v___x_1230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
lean_ctor_set(v___x_1230_, 1, v___y_1215_);
return v___x_1230_;
}
v___jp_1231_:
{
lean_object* v_toLeanConfig_1234_; lean_object* v_toLeanConfig_1235_; uint8_t v_bootstrap_1236_; lean_object* v_buildDir_1237_; lean_object* v_nativeLibDir_1238_; lean_object* v_moreLinkObjs_1239_; lean_object* v_moreLinkObjs_1240_; lean_object* v___x_1241_; size_t v_sz_1242_; size_t v___x_1243_; lean_object* v___x_213809__overap_1244_; lean_object* v___x_1245_; 
v_toLeanConfig_1234_ = lean_ctor_get(v_config_1191_, 1);
lean_inc_ref(v_toLeanConfig_1234_);
v_toLeanConfig_1235_ = lean_ctor_get(v_config_1192_, 0);
v_bootstrap_1236_ = lean_ctor_get_uint8(v_config_1191_, sizeof(void*)*28);
v_buildDir_1237_ = lean_ctor_get(v_config_1191_, 5);
lean_inc_ref(v_buildDir_1237_);
v_nativeLibDir_1238_ = lean_ctor_get(v_config_1191_, 7);
lean_inc_ref(v_nativeLibDir_1238_);
lean_dec_ref(v_config_1191_);
v_moreLinkObjs_1239_ = lean_ctor_get(v_toLeanConfig_1234_, 6);
lean_inc_ref(v_moreLinkObjs_1239_);
lean_dec_ref(v_toLeanConfig_1234_);
v_moreLinkObjs_1240_ = lean_ctor_get(v_toLeanConfig_1235_, 6);
v___x_1241_ = l_Array_append___redArg(v_moreLinkObjs_1239_, v_moreLinkObjs_1240_);
v_sz_1242_ = lean_array_size(v___x_1241_);
v___x_1243_ = ((size_t)0ULL);
v___x_213809__overap_1244_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1198_, v___f_1199_, v_sz_1242_, v___x_1243_, v___x_1241_);
lean_inc_ref(v___y_1208_);
lean_inc(v___y_1207_);
lean_inc(v___y_1206_);
lean_inc(v___x_1197_);
lean_inc_ref(v___y_1204_);
v___x_1245_ = lean_apply_7(v___x_213809__overap_1244_, v___y_1204_, v___x_1197_, v___y_1206_, v___y_1207_, v___y_1208_, v_a_1233_, lean_box(0));
if (lean_obj_tag(v___x_1245_) == 0)
{
if (v_shouldExport_1193_ == 0)
{
lean_object* v_a_1246_; lean_object* v_a_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
v_a_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1246_);
v_a_1247_ = lean_ctor_get(v___x_1245_, 1);
lean_inc(v_a_1247_);
lean_dec_ref_known(v___x_1245_, 2);
v___x_1248_ = l_System_FilePath_normalize(v_buildDir_1237_);
v___x_1249_ = l_Lake_joinRelative(v_dir_1200_, v___x_1248_);
v___x_1250_ = l_System_FilePath_normalize(v_nativeLibDir_1238_);
v___x_1251_ = l_Lake_joinRelative(v___x_1249_, v___x_1250_);
v___x_1252_ = l_Lake_LeanLib_libName(v_self_1201_);
v___x_1253_ = l_Lake_nameToStaticLib(v___x_1252_, v_shouldExport_1193_);
v___x_1254_ = l_Lake_joinRelative(v___x_1251_, v___x_1253_);
v___y_1212_ = v_bootstrap_1236_;
v___y_1213_ = v___x_1243_;
v___y_1214_ = v_a_1232_;
v___y_1215_ = v_a_1247_;
v___y_1216_ = v_a_1246_;
v___y_1217_ = v___x_1254_;
goto v___jp_1211_;
}
else
{
lean_object* v_a_1255_; lean_object* v_a_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; uint8_t v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v_a_1255_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_a_1255_);
v_a_1256_ = lean_ctor_get(v___x_1245_, 1);
lean_inc(v_a_1256_);
lean_dec_ref_known(v___x_1245_, 2);
v___x_1257_ = l_System_FilePath_normalize(v_buildDir_1237_);
v___x_1258_ = l_Lake_joinRelative(v_dir_1200_, v___x_1257_);
v___x_1259_ = l_System_FilePath_normalize(v_nativeLibDir_1238_);
v___x_1260_ = l_Lake_joinRelative(v___x_1258_, v___x_1259_);
v___x_1261_ = l_Lake_LeanLib_libName(v_self_1201_);
v___x_1262_ = 0;
v___x_1263_ = l_Lake_nameToStaticLib(v___x_1261_, v___x_1262_);
v___x_1264_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1));
v___x_1265_ = l_System_FilePath_addExtension(v___x_1263_, v___x_1264_);
v___x_1266_ = l_Lake_joinRelative(v___x_1260_, v___x_1265_);
v___y_1212_ = v_bootstrap_1236_;
v___y_1213_ = v___x_1243_;
v___y_1214_ = v_a_1232_;
v___y_1215_ = v_a_1256_;
v___y_1216_ = v_a_1255_;
v___y_1217_ = v___x_1266_;
goto v___jp_1211_;
}
}
else
{
lean_object* v_a_1267_; lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
lean_dec_ref(v_nativeLibDir_1238_);
lean_dec_ref(v_buildDir_1237_);
lean_dec_ref(v_a_1232_);
lean_dec_ref(v___y_1204_);
lean_dec_ref(v_self_1201_);
lean_dec_ref(v_dir_1200_);
lean_dec(v___x_1197_);
lean_dec(v___x_1196_);
lean_dec_ref(v___x_1195_);
v_a_1267_ = lean_ctor_get(v___x_1245_, 0);
v_a_1268_ = lean_ctor_get(v___x_1245_, 1);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1245_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1245_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_inc(v_a_1267_);
lean_dec(v___x_1245_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1267_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed(lean_object** _args){
lean_object* v_config_1319_ = _args[0];
lean_object* v_config_1320_ = _args[1];
lean_object* v_shouldExport_1321_ = _args[2];
lean_object* v___x_1322_ = _args[3];
lean_object* v___x_1323_ = _args[4];
lean_object* v___x_1324_ = _args[5];
lean_object* v___x_1325_ = _args[6];
lean_object* v___x_1326_ = _args[7];
lean_object* v___f_1327_ = _args[8];
lean_object* v_dir_1328_ = _args[9];
lean_object* v_self_1329_ = _args[10];
lean_object* v___x_1330_ = _args[11];
lean_object* v___f_1331_ = _args[12];
lean_object* v___y_1332_ = _args[13];
lean_object* v___y_1333_ = _args[14];
lean_object* v___y_1334_ = _args[15];
lean_object* v___y_1335_ = _args[16];
lean_object* v___y_1336_ = _args[17];
lean_object* v___y_1337_ = _args[18];
lean_object* v___y_1338_ = _args[19];
_start:
{
uint8_t v_shouldExport_boxed_1339_; uint8_t v___x_214612__boxed_1340_; lean_object* v_res_1341_; 
v_shouldExport_boxed_1339_ = lean_unbox(v_shouldExport_1321_);
v___x_214612__boxed_1340_ = lean_unbox(v___x_1322_);
v_res_1341_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(v_config_1319_, v_config_1320_, v_shouldExport_boxed_1339_, v___x_214612__boxed_1340_, v___x_1323_, v___x_1324_, v___x_1325_, v___x_1326_, v___f_1327_, v_dir_1328_, v_self_1329_, v___x_1330_, v___f_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec(v_config_1320_);
return v_res_1341_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__9(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__4));
v___x_1363_ = l_Lake_EStateT_instFunctor___redArg(v___x_1362_);
return v___x_1363_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__11(void){
_start:
{
lean_object* v___f_1366_; lean_object* v___f_1367_; lean_object* v___f_1368_; lean_object* v___f_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___f_1366_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__6));
v___f_1367_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__7));
v___f_1368_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__8));
v___f_1369_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__10));
v___x_1370_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__9, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__9_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__9);
v___x_1371_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1370_);
lean_ctor_set(v___x_1371_, 1, v___f_1369_);
lean_ctor_set(v___x_1371_, 2, v___f_1368_);
lean_ctor_set(v___x_1371_, 3, v___f_1367_);
lean_ctor_set(v___x_1371_, 4, v___f_1366_);
return v___x_1371_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__12(void){
_start:
{
lean_object* v___f_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___f_1372_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__5));
v___x_1373_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__11, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__11_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__11);
v___x_1374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
lean_ctor_set(v___x_1374_, 1, v___f_1372_);
return v___x_1374_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__13(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__12, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__12_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__12);
v___x_1376_ = l_ReaderT_instMonad___redArg(v___x_1375_);
return v___x_1376_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__14(void){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__13, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__13_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__13);
v___x_1378_ = l_StateRefT_x27_instMonad___redArg(v___x_1377_);
return v___x_1378_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__15(void){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__14, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__14_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__14);
v___x_1380_ = l_ReaderT_instMonad___redArg(v___x_1379_);
return v___x_1380_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__16(void){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1381_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__15, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__15_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__15);
v___x_1382_ = l_ReaderT_instMonad___redArg(v___x_1381_);
return v___x_1382_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__17(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__16, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__16_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__16);
v___x_1384_ = l_Lake_EquipT_instMonad___redArg(v___x_1383_);
return v___x_1384_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__18(void){
_start:
{
uint8_t v___x_1385_; lean_object* v___x_1386_; 
v___x_1385_ = 2;
v___x_1386_ = l_Lake_Verbosity_ctorIdx(v___x_1385_);
return v___x_1386_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(lean_object* v_self_1390_, uint8_t v_shouldExport_1391_, lean_object* v_a_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v___x_1399_; lean_object* v_toBuildConfig_1400_; lean_object* v_registeredJobs_1401_; uint8_t v_verbosity_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___f_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; uint8_t v___x_1409_; lean_object* v___y_1411_; 
v___x_1399_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__17, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__17_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__17);
v_toBuildConfig_1400_ = lean_ctor_get(v___y_1396_, 0);
v_registeredJobs_1401_ = lean_ctor_get(v___y_1396_, 4);
v_verbosity_1402_ = lean_ctor_get_uint8(v_toBuildConfig_1400_, sizeof(void*)*4 + 4);
v___x_1403_ = l_Lake_instDataKindFilePath;
v___x_1404_ = lean_box(v_shouldExport_1391_);
v___f_1405_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1405_, 0, v___x_1404_);
lean_closure_set(v___f_1405_, 1, v___x_1399_);
v___x_1406_ = l_Lake_Verbosity_ctorIdx(v_verbosity_1402_);
v___x_1407_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__18, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__18_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__18);
v___x_1408_ = lean_nat_dec_eq(v___x_1406_, v___x_1407_);
lean_dec(v___x_1406_);
v___x_1409_ = 1;
if (v___x_1408_ == 0)
{
lean_object* v___x_1457_; 
v___x_1457_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___y_1411_ = v___x_1457_;
goto v___jp_1410_;
}
else
{
if (v_shouldExport_1391_ == 0)
{
lean_object* v___x_1458_; 
v___x_1458_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__20));
v___y_1411_ = v___x_1458_;
goto v___jp_1410_;
}
else
{
lean_object* v___x_1459_; 
v___x_1459_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__21));
v___y_1411_ = v___x_1459_;
goto v___jp_1410_;
}
}
v___jp_1410_:
{
lean_object* v_pkg_1412_; lean_object* v_name_1413_; lean_object* v_config_1414_; lean_object* v_keyName_1415_; lean_object* v_dir_1416_; lean_object* v_config_1417_; lean_object* v___f_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___f_1430_; uint8_t v___x_1431_; lean_object* v___x_1432_; 
v_pkg_1412_ = lean_ctor_get(v_self_1390_, 0);
v_name_1413_ = lean_ctor_get(v_self_1390_, 1);
v_config_1414_ = lean_ctor_get(v_self_1390_, 2);
lean_inc(v_config_1414_);
v_keyName_1415_ = lean_ctor_get(v_pkg_1412_, 2);
v_dir_1416_ = lean_ctor_get(v_pkg_1412_, 4);
lean_inc_ref(v_dir_1416_);
v_config_1417_ = lean_ctor_get(v_pkg_1412_, 6);
lean_inc_ref(v_config_1417_);
lean_inc_ref_n(v_pkg_1412_, 2);
v___f_1418_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed), 10, 2);
lean_closure_set(v___f_1418_, 0, v___x_1403_);
lean_closure_set(v___f_1418_, 1, v_pkg_1412_);
lean_inc_n(v_name_1413_, 2);
v___x_1419_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1413_, v___x_1409_);
v___x_1420_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__19));
v___x_1421_ = lean_string_append(v___x_1419_, v___x_1420_);
v___x_1422_ = lean_string_append(v___x_1421_, v___y_1411_);
v___x_1423_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_1415_);
v___x_1424_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1424_, 0, v_keyName_1415_);
lean_ctor_set(v___x_1424_, 1, v_name_1413_);
v___x_1425_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_1390_);
v___x_1426_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1424_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
lean_ctor_set(v___x_1426_, 2, v_self_1390_);
lean_ctor_set(v___x_1426_, 3, v___x_1423_);
v___x_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1427_, 0, v_pkg_1412_);
v___x_1428_ = lean_box(v_shouldExport_1391_);
v___x_1429_ = lean_box(v___x_1409_);
v___f_1430_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed), 20, 13);
lean_closure_set(v___f_1430_, 0, v_config_1417_);
lean_closure_set(v___f_1430_, 1, v_config_1414_);
lean_closure_set(v___f_1430_, 2, v___x_1428_);
lean_closure_set(v___f_1430_, 3, v___x_1429_);
lean_closure_set(v___f_1430_, 4, v___x_1399_);
lean_closure_set(v___f_1430_, 5, v___x_1403_);
lean_closure_set(v___f_1430_, 6, v___x_1427_);
lean_closure_set(v___f_1430_, 7, v___x_1399_);
lean_closure_set(v___f_1430_, 8, v___f_1418_);
lean_closure_set(v___f_1430_, 9, v_dir_1416_);
lean_closure_set(v___f_1430_, 10, v_self_1390_);
lean_closure_set(v___f_1430_, 11, v___x_1426_);
lean_closure_set(v___f_1430_, 12, v___f_1405_);
v___x_1431_ = 0;
v___x_1432_ = l_Lake_ensureJob___redArg(v___x_1403_, v___f_1430_, v_a_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1456_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
v_a_1434_ = lean_ctor_get(v___x_1432_, 1);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1436_ = v___x_1432_;
v_isShared_1437_ = v_isSharedCheck_1456_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_inc(v_a_1433_);
lean_dec(v___x_1432_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1456_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v_task_1438_; lean_object* v_kind_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1454_; 
v_task_1438_ = lean_ctor_get(v_a_1433_, 0);
v_kind_1439_ = lean_ctor_get(v_a_1433_, 1);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_a_1433_);
if (v_isSharedCheck_1454_ == 0)
{
lean_object* v_unused_1455_; 
v_unused_1455_ = lean_ctor_get(v_a_1433_, 2);
lean_dec(v_unused_1455_);
v___x_1441_ = v_a_1433_;
v_isShared_1442_ = v_isSharedCheck_1454_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_kind_1439_);
lean_inc(v_task_1438_);
lean_dec(v_a_1433_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1454_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v_job_1444_; 
if (v_isShared_1442_ == 0)
{
lean_ctor_set(v___x_1441_, 2, v___x_1422_);
v_job_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_task_1438_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v_kind_1439_);
lean_ctor_set(v_reuseFailAlloc_1453_, 2, v___x_1422_);
v_job_1444_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1451_; 
lean_ctor_set_uint8(v_job_1444_, sizeof(void*)*3, v___x_1431_);
v___x_1445_ = lean_st_ref_take(v_registeredJobs_1401_);
lean_inc_ref(v_job_1444_);
v___x_1446_ = l_Lake_Job_toOpaque___redArg(v_job_1444_);
v___x_1447_ = lean_array_push(v___x_1445_, v___x_1446_);
v___x_1448_ = lean_st_ref_put(v_registeredJobs_1401_, v___x_1447_);
v___x_1449_ = l_Lake_Job_renew___redArg(v_job_1444_);
if (v_isShared_1437_ == 0)
{
lean_ctor_set(v___x_1436_, 0, v___x_1449_);
v___x_1451_ = v___x_1436_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1449_);
lean_ctor_set(v_reuseFailAlloc_1452_, 1, v_a_1434_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1422_);
return v___x_1432_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___boxed(lean_object* v_self_1460_, lean_object* v_shouldExport_1461_, lean_object* v_a_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
uint8_t v_shouldExport_boxed_1469_; lean_object* v_res_1470_; 
v_shouldExport_boxed_1469_ = lean_unbox(v_shouldExport_1461_);
v_res_1470_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(v_self_1460_, v_shouldExport_boxed_1469_, v_a_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec(v___y_1464_);
lean_dec(v___y_1463_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(uint8_t v_fmt_1471_, lean_object* v_a_1472_){
_start:
{
if (v_fmt_1471_ == 0)
{
return v_a_1472_;
}
else
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1473_ = l_Lake_mkRelPathString(v_a_1472_);
v___x_1474_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1473_);
v___x_1475_ = l_Lean_Json_compress(v___x_1474_);
return v___x_1475_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed(lean_object* v_fmt_1476_, lean_object* v_a_1477_){
_start:
{
uint8_t v_fmt_boxed_1478_; lean_object* v_res_1479_; 
v_fmt_boxed_1478_ = lean_unbox(v_fmt_1476_);
v_res_1479_ = l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(v_fmt_boxed_1478_, v_a_1477_);
return v_res_1479_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2(void){
_start:
{
uint8_t v___x_1482_; lean_object* v_name_1483_; lean_object* v___x_1484_; 
v___x_1482_ = 1;
v_name_1483_ = l_Lake_instDataKindFilePath;
v___x_1484_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1483_, v___x_1482_);
return v___x_1484_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(lean_object* v_defaultPkg_1488_, lean_object* v_self_1489_, lean_object* v_a_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_name_1497_; uint8_t v___x_1498_; lean_object* v___x_1499_; 
v_name_1497_ = l_Lake_instDataKindFilePath;
v___x_1498_ = 1;
lean_inc_ref_n(v_self_1489_, 2);
v___x_1499_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_1488_, v_self_1489_, v_self_1489_, v___x_1498_, v_a_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1541_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
v_a_1501_ = lean_ctor_get(v___x_1499_, 1);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1503_ = v___x_1499_;
v_isShared_1504_ = v_isSharedCheck_1541_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_inc(v_a_1500_);
lean_dec(v___x_1499_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1541_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___y_1506_; lean_object* v_snd_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1539_; 
v_snd_1524_ = lean_ctor_get(v_a_1500_, 1);
v_isSharedCheck_1539_ = !lean_is_exclusive(v_a_1500_);
if (v_isSharedCheck_1539_ == 0)
{
lean_object* v_unused_1540_; 
v_unused_1540_ = lean_ctor_get(v_a_1500_, 0);
lean_dec(v_unused_1540_);
v___x_1526_ = v_a_1500_;
v_isShared_1527_ = v_isSharedCheck_1539_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_snd_1524_);
lean_dec(v_a_1500_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1539_;
goto v_resetjp_1525_;
}
v___jp_1505_:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; uint8_t v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1522_; 
v___x_1507_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0));
v___x_1508_ = l_Lake_PartialBuildKey_toString(v_self_1489_);
v___x_1509_ = lean_string_append(v___x_1507_, v___x_1508_);
lean_dec_ref(v___x_1508_);
v___x_1510_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1));
v___x_1511_ = lean_string_append(v___x_1509_, v___x_1510_);
v___x_1512_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2);
v___x_1513_ = lean_string_append(v___x_1511_, v___x_1512_);
v___x_1514_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3));
v___x_1515_ = lean_string_append(v___x_1513_, v___x_1514_);
v___x_1516_ = lean_string_append(v___x_1515_, v___y_1506_);
lean_dec_ref(v___y_1506_);
v___x_1517_ = 3;
v___x_1518_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1518_, 0, v___x_1516_);
lean_ctor_set_uint8(v___x_1518_, sizeof(void*)*1, v___x_1517_);
v___x_1519_ = lean_array_get_size(v_a_1501_);
v___x_1520_ = lean_array_push(v_a_1501_, v___x_1518_);
if (v_isShared_1504_ == 0)
{
lean_ctor_set_tag(v___x_1503_, 1);
lean_ctor_set(v___x_1503_, 1, v___x_1520_);
lean_ctor_set(v___x_1503_, 0, v___x_1519_);
v___x_1522_ = v___x_1503_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1523_, 1, v___x_1520_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
v_resetjp_1525_:
{
lean_object* v_kind_1528_; uint8_t v___x_1529_; 
v_kind_1528_ = lean_ctor_get(v_snd_1524_, 1);
v___x_1529_ = lean_name_eq(v_kind_1528_, v_name_1497_);
if (v___x_1529_ == 0)
{
uint8_t v___x_1530_; 
lean_inc(v_kind_1528_);
lean_del_object(v___x_1526_);
lean_dec(v_snd_1524_);
v___x_1530_ = l_Lean_Name_isAnonymous(v_kind_1528_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1531_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4));
v___x_1532_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_1528_, v___x_1498_);
v___x_1533_ = lean_string_append(v___x_1531_, v___x_1532_);
lean_dec_ref(v___x_1532_);
v___x_1534_ = lean_string_append(v___x_1533_, v___x_1531_);
v___y_1506_ = v___x_1534_;
goto v___jp_1505_;
}
else
{
lean_object* v___x_1535_; 
lean_dec(v_kind_1528_);
v___x_1535_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5));
v___y_1506_ = v___x_1535_;
goto v___jp_1505_;
}
}
else
{
lean_object* v___x_1537_; 
lean_del_object(v___x_1503_);
lean_dec_ref(v_self_1489_);
if (v_isShared_1527_ == 0)
{
lean_ctor_set(v___x_1526_, 1, v_a_1501_);
lean_ctor_set(v___x_1526_, 0, v_snd_1524_);
v___x_1537_ = v___x_1526_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_snd_1524_);
lean_ctor_set(v_reuseFailAlloc_1538_, 1, v_a_1501_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
}
else
{
lean_object* v_a_1542_; lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
lean_dec_ref(v_self_1489_);
v_a_1542_ = lean_ctor_get(v___x_1499_, 0);
v_a_1543_ = lean_ctor_get(v___x_1499_, 1);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1499_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_inc(v_a_1542_);
lean_dec(v___x_1499_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1542_);
lean_ctor_set(v_reuseFailAlloc_1549_, 1, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___boxed(lean_object* v_defaultPkg_1551_, lean_object* v_self_1552_, lean_object* v_a_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v_defaultPkg_1551_, v_self_1552_, v_a_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
lean_dec_ref(v___y_1557_);
lean_dec(v___y_1556_);
lean_dec(v___y_1555_);
lean_dec(v___y_1554_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(lean_object* v___x_1561_, size_t v_sz_1562_, size_t v_i_1563_, lean_object* v_bs_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
uint8_t v___x_1572_; 
v___x_1572_ = lean_usize_dec_lt(v_i_1563_, v_sz_1562_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1573_; 
lean_dec_ref(v___y_1565_);
lean_dec_ref(v___x_1561_);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v_bs_1564_);
lean_ctor_set(v___x_1573_, 1, v___y_1570_);
return v___x_1573_;
}
else
{
lean_object* v_v_1574_; lean_object* v___x_1575_; lean_object* v_bs_x27_1576_; lean_object* v___x_1577_; 
v_v_1574_ = lean_array_uget(v_bs_1564_, v_i_1563_);
v___x_1575_ = lean_unsigned_to_nat(0u);
v_bs_x27_1576_ = lean_array_uset(v_bs_1564_, v_i_1563_, v___x_1575_);
lean_inc_ref(v___y_1565_);
lean_inc_ref(v___x_1561_);
v___x_1577_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v___x_1561_, v_v_1574_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
if (lean_obj_tag(v___x_1577_) == 0)
{
lean_object* v_a_1578_; lean_object* v_a_1579_; size_t v___x_1580_; size_t v___x_1581_; lean_object* v___x_1582_; 
v_a_1578_ = lean_ctor_get(v___x_1577_, 0);
lean_inc(v_a_1578_);
v_a_1579_ = lean_ctor_get(v___x_1577_, 1);
lean_inc(v_a_1579_);
lean_dec_ref_known(v___x_1577_, 2);
v___x_1580_ = ((size_t)1ULL);
v___x_1581_ = lean_usize_add(v_i_1563_, v___x_1580_);
v___x_1582_ = lean_array_uset(v_bs_x27_1576_, v_i_1563_, v_a_1578_);
v_i_1563_ = v___x_1581_;
v_bs_1564_ = v___x_1582_;
v___y_1570_ = v_a_1579_;
goto _start;
}
else
{
lean_object* v_a_1584_; lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1592_; 
lean_dec_ref(v_bs_x27_1576_);
lean_dec_ref(v___y_1565_);
lean_dec_ref(v___x_1561_);
v_a_1584_ = lean_ctor_get(v___x_1577_, 0);
v_a_1585_ = lean_ctor_get(v___x_1577_, 1);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1587_ = v___x_1577_;
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_inc(v_a_1584_);
lean_dec(v___x_1577_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1592_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___x_1590_; 
if (v_isShared_1588_ == 0)
{
v___x_1590_ = v___x_1587_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_a_1584_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v_a_1585_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2___boxed(lean_object* v___x_1593_, lean_object* v_sz_1594_, lean_object* v_i_1595_, lean_object* v_bs_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
size_t v_sz_boxed_1604_; size_t v_i_boxed_1605_; lean_object* v_res_1606_; 
v_sz_boxed_1604_ = lean_unbox_usize(v_sz_1594_);
lean_dec(v_sz_1594_);
v_i_boxed_1605_ = lean_unbox_usize(v_i_1595_);
lean_dec(v_i_1595_);
v_res_1606_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(v___x_1593_, v_sz_boxed_1604_, v_i_boxed_1605_, v_bs_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
lean_dec_ref(v___y_1601_);
lean_dec(v___y_1600_);
lean_dec(v___y_1599_);
lean_dec(v___y_1598_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(lean_object* v_a_1607_, lean_object* v_as_1608_, size_t v_i_1609_, size_t v_stop_1610_, lean_object* v_b_1611_, lean_object* v___y_1612_){
_start:
{
uint8_t v___x_1614_; 
v___x_1614_ = lean_usize_dec_eq(v_i_1609_, v_stop_1610_);
if (v___x_1614_ == 0)
{
lean_object* v_log_1615_; uint8_t v_action_1616_; uint8_t v_wantsRebuild_1617_; lean_object* v_trace_1618_; lean_object* v_buildTime_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v_log_1615_ = lean_ctor_get(v___y_1612_, 0);
v_action_1616_ = lean_ctor_get_uint8(v___y_1612_, sizeof(void*)*3);
v_wantsRebuild_1617_ = lean_ctor_get_uint8(v___y_1612_, sizeof(void*)*3 + 1);
v_trace_1618_ = lean_ctor_get(v___y_1612_, 1);
v_buildTime_1619_ = lean_ctor_get(v___y_1612_, 2);
v___x_1620_ = lean_array_uget_borrowed(v_as_1608_, v_i_1609_);
v___x_1621_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
lean_inc(v___x_1620_);
v___x_1622_ = lean_string_append(v___x_1620_, v___x_1621_);
v___x_1623_ = lean_io_prim_handle_put_str(v_a_1607_, v___x_1622_);
lean_dec_ref(v___x_1622_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; size_t v___x_1625_; size_t v___x_1626_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1625_ = ((size_t)1ULL);
v___x_1626_ = lean_usize_add(v_i_1609_, v___x_1625_);
v_i_1609_ = v___x_1626_;
v_b_1611_ = v_a_1624_;
goto _start;
}
else
{
lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1641_; 
lean_inc(v_buildTime_1619_);
lean_inc_ref(v_trace_1618_);
lean_inc_ref(v_log_1615_);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___y_1612_);
if (v_isSharedCheck_1641_ == 0)
{
lean_object* v_unused_1642_; lean_object* v_unused_1643_; lean_object* v_unused_1644_; 
v_unused_1642_ = lean_ctor_get(v___y_1612_, 2);
lean_dec(v_unused_1642_);
v_unused_1643_ = lean_ctor_get(v___y_1612_, 1);
lean_dec(v_unused_1643_);
v_unused_1644_ = lean_ctor_get(v___y_1612_, 0);
lean_dec(v_unused_1644_);
v___x_1629_ = v___y_1612_;
v_isShared_1630_ = v_isSharedCheck_1641_;
goto v_resetjp_1628_;
}
else
{
lean_dec(v___y_1612_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1641_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v_a_1631_; lean_object* v___x_1632_; uint8_t v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1638_; 
v_a_1631_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1631_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1632_ = lean_io_error_to_string(v_a_1631_);
v___x_1633_ = 3;
v___x_1634_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1634_, 0, v___x_1632_);
lean_ctor_set_uint8(v___x_1634_, sizeof(void*)*1, v___x_1633_);
v___x_1635_ = lean_array_get_size(v_log_1615_);
v___x_1636_ = lean_array_push(v_log_1615_, v___x_1634_);
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 0, v___x_1636_);
v___x_1638_ = v___x_1629_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_trace_1618_);
lean_ctor_set(v_reuseFailAlloc_1640_, 2, v_buildTime_1619_);
lean_ctor_set_uint8(v_reuseFailAlloc_1640_, sizeof(void*)*3, v_action_1616_);
lean_ctor_set_uint8(v_reuseFailAlloc_1640_, sizeof(void*)*3 + 1, v_wantsRebuild_1617_);
v___x_1638_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1639_; 
v___x_1639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1635_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
return v___x_1639_;
}
}
}
}
else
{
lean_object* v___x_1645_; 
v___x_1645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1645_, 0, v_b_1611_);
lean_ctor_set(v___x_1645_, 1, v___y_1612_);
return v___x_1645_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg___boxed(lean_object* v_a_1646_, lean_object* v_as_1647_, lean_object* v_i_1648_, lean_object* v_stop_1649_, lean_object* v_b_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
size_t v_i_boxed_1653_; size_t v_stop_boxed_1654_; lean_object* v_res_1655_; 
v_i_boxed_1653_ = lean_unbox_usize(v_i_1648_);
lean_dec(v_i_1648_);
v_stop_boxed_1654_ = lean_unbox_usize(v_stop_1649_);
lean_dec(v_stop_1649_);
v_res_1655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1646_, v_as_1647_, v_i_boxed_1653_, v_stop_boxed_1654_, v_b_1650_, v___y_1651_);
lean_dec_ref(v_as_1647_);
lean_dec(v_a_1646_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(uint8_t v_bootstrap_1656_, lean_object* v___y_1657_, lean_object* v_oFiles_1658_, uint8_t v_shouldExport_1659_, uint8_t v___x_1660_, size_t v___x_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
if (v_bootstrap_1656_ == 0)
{
lean_object* v_toContext_1669_; lean_object* v_lakeEnv_1670_; lean_object* v_lean_1671_; lean_object* v_log_1672_; uint8_t v_action_1673_; uint8_t v_wantsRebuild_1674_; lean_object* v_trace_1675_; lean_object* v_buildTime_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1706_; 
v_toContext_1669_ = lean_ctor_get(v___y_1666_, 1);
v_lakeEnv_1670_ = lean_ctor_get(v_toContext_1669_, 0);
v_lean_1671_ = lean_ctor_get(v_lakeEnv_1670_, 1);
v_log_1672_ = lean_ctor_get(v___y_1667_, 0);
v_action_1673_ = lean_ctor_get_uint8(v___y_1667_, sizeof(void*)*3);
v_wantsRebuild_1674_ = lean_ctor_get_uint8(v___y_1667_, sizeof(void*)*3 + 1);
v_trace_1675_ = lean_ctor_get(v___y_1667_, 1);
v_buildTime_1676_ = lean_ctor_get(v___y_1667_, 2);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___y_1667_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1678_ = v___y_1667_;
v_isShared_1679_ = v_isSharedCheck_1706_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_buildTime_1676_);
lean_inc(v_trace_1675_);
lean_inc(v_log_1672_);
lean_dec(v___y_1667_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1706_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v_ar_1680_; lean_object* v___x_1681_; 
v_ar_1680_ = lean_ctor_get(v_lean_1671_, 13);
lean_inc_ref(v_ar_1680_);
v___x_1681_ = l_Lake_compileStaticLib(v___y_1657_, v_oFiles_1658_, v_ar_1680_, v_bootstrap_1656_, v_log_1672_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v_a_1682_; lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1693_; 
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
v_a_1683_ = lean_ctor_get(v___x_1681_, 1);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1685_ = v___x_1681_;
v_isShared_1686_ = v_isSharedCheck_1693_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_inc(v_a_1682_);
lean_dec(v___x_1681_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1693_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v_a_1683_);
v___x_1688_ = v___x_1678_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1683_);
lean_ctor_set(v_reuseFailAlloc_1692_, 1, v_trace_1675_);
lean_ctor_set(v_reuseFailAlloc_1692_, 2, v_buildTime_1676_);
lean_ctor_set_uint8(v_reuseFailAlloc_1692_, sizeof(void*)*3, v_action_1673_);
lean_ctor_set_uint8(v_reuseFailAlloc_1692_, sizeof(void*)*3 + 1, v_wantsRebuild_1674_);
v___x_1688_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
lean_object* v___x_1690_; 
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 1, v___x_1688_);
v___x_1690_ = v___x_1685_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1682_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v___x_1688_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
}
else
{
lean_object* v_a_1694_; lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1705_; 
v_a_1694_ = lean_ctor_get(v___x_1681_, 0);
v_a_1695_ = lean_ctor_get(v___x_1681_, 1);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1697_ = v___x_1681_;
v_isShared_1698_ = v_isSharedCheck_1705_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_inc(v_a_1694_);
lean_dec(v___x_1681_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1705_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1700_; 
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v_a_1695_);
v___x_1700_ = v___x_1678_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1695_);
lean_ctor_set(v_reuseFailAlloc_1704_, 1, v_trace_1675_);
lean_ctor_set(v_reuseFailAlloc_1704_, 2, v_buildTime_1676_);
lean_ctor_set_uint8(v_reuseFailAlloc_1704_, sizeof(void*)*3, v_action_1673_);
lean_ctor_set_uint8(v_reuseFailAlloc_1704_, sizeof(void*)*3 + 1, v_wantsRebuild_1674_);
v___x_1700_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
lean_object* v___x_1702_; 
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 1, v___x_1700_);
v___x_1702_ = v___x_1697_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1694_);
lean_ctor_set(v_reuseFailAlloc_1703_, 1, v___x_1700_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
}
}
else
{
uint8_t v___x_1707_; 
v___x_1707_ = l_System_Platform_isOSX;
if (v___x_1707_ == 0)
{
uint8_t v___x_1708_; 
v___x_1708_ = l_System_Platform_isWindows;
if (v___x_1708_ == 0)
{
lean_object* v_toContext_1709_; lean_object* v_lakeEnv_1710_; lean_object* v_lean_1711_; lean_object* v_log_1712_; uint8_t v_action_1713_; uint8_t v_wantsRebuild_1714_; lean_object* v_trace_1715_; lean_object* v_buildTime_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1746_; 
v_toContext_1709_ = lean_ctor_get(v___y_1666_, 1);
v_lakeEnv_1710_ = lean_ctor_get(v_toContext_1709_, 0);
v_lean_1711_ = lean_ctor_get(v_lakeEnv_1710_, 1);
v_log_1712_ = lean_ctor_get(v___y_1667_, 0);
v_action_1713_ = lean_ctor_get_uint8(v___y_1667_, sizeof(void*)*3);
v_wantsRebuild_1714_ = lean_ctor_get_uint8(v___y_1667_, sizeof(void*)*3 + 1);
v_trace_1715_ = lean_ctor_get(v___y_1667_, 1);
v_buildTime_1716_ = lean_ctor_get(v___y_1667_, 2);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___y_1667_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1718_ = v___y_1667_;
v_isShared_1719_ = v_isSharedCheck_1746_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_buildTime_1716_);
lean_inc(v_trace_1715_);
lean_inc(v_log_1712_);
lean_dec(v___y_1667_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1746_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v_ar_1720_; lean_object* v___x_1721_; 
v_ar_1720_ = lean_ctor_get(v_lean_1711_, 13);
lean_inc_ref(v_ar_1720_);
v___x_1721_ = l_Lake_compileStaticLib(v___y_1657_, v_oFiles_1658_, v_ar_1720_, v___x_1708_, v_log_1712_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v_a_1722_; lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1733_; 
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
v_a_1723_ = lean_ctor_get(v___x_1721_, 1);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1721_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1725_ = v___x_1721_;
v_isShared_1726_ = v_isSharedCheck_1733_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_inc(v_a_1722_);
lean_dec(v___x_1721_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1733_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v_a_1723_);
v___x_1728_ = v___x_1718_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_a_1723_);
lean_ctor_set(v_reuseFailAlloc_1732_, 1, v_trace_1715_);
lean_ctor_set(v_reuseFailAlloc_1732_, 2, v_buildTime_1716_);
lean_ctor_set_uint8(v_reuseFailAlloc_1732_, sizeof(void*)*3, v_action_1713_);
lean_ctor_set_uint8(v_reuseFailAlloc_1732_, sizeof(void*)*3 + 1, v_wantsRebuild_1714_);
v___x_1728_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
lean_object* v___x_1730_; 
if (v_isShared_1726_ == 0)
{
lean_ctor_set(v___x_1725_, 1, v___x_1728_);
v___x_1730_ = v___x_1725_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1722_);
lean_ctor_set(v_reuseFailAlloc_1731_, 1, v___x_1728_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
else
{
lean_object* v_a_1734_; lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1745_; 
v_a_1734_ = lean_ctor_get(v___x_1721_, 0);
v_a_1735_ = lean_ctor_get(v___x_1721_, 1);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1721_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1737_ = v___x_1721_;
v_isShared_1738_ = v_isSharedCheck_1745_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_inc(v_a_1734_);
lean_dec(v___x_1721_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1745_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1740_; 
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v_a_1735_);
v___x_1740_ = v___x_1718_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1735_);
lean_ctor_set(v_reuseFailAlloc_1744_, 1, v_trace_1715_);
lean_ctor_set(v_reuseFailAlloc_1744_, 2, v_buildTime_1716_);
lean_ctor_set_uint8(v_reuseFailAlloc_1744_, sizeof(void*)*3, v_action_1713_);
lean_ctor_set_uint8(v_reuseFailAlloc_1744_, sizeof(void*)*3 + 1, v_wantsRebuild_1714_);
v___x_1740_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1742_; 
if (v_isShared_1738_ == 0)
{
lean_ctor_set(v___x_1737_, 1, v___x_1740_);
v___x_1742_ = v___x_1737_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1734_);
lean_ctor_set(v_reuseFailAlloc_1743_, 1, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
}
}
}
else
{
lean_object* v_toContext_1747_; lean_object* v_lakeEnv_1748_; lean_object* v_lean_1749_; lean_object* v_log_1750_; uint8_t v_action_1751_; uint8_t v_wantsRebuild_1752_; lean_object* v_trace_1753_; lean_object* v_buildTime_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1784_; 
v_toContext_1747_ = lean_ctor_get(v___y_1666_, 1);
v_lakeEnv_1748_ = lean_ctor_get(v_toContext_1747_, 0);
v_lean_1749_ = lean_ctor_get(v_lakeEnv_1748_, 1);
v_log_1750_ = lean_ctor_get(v___y_1667_, 0);
v_action_1751_ = lean_ctor_get_uint8(v___y_1667_, sizeof(void*)*3);
v_wantsRebuild_1752_ = lean_ctor_get_uint8(v___y_1667_, sizeof(void*)*3 + 1);
v_trace_1753_ = lean_ctor_get(v___y_1667_, 1);
v_buildTime_1754_ = lean_ctor_get(v___y_1667_, 2);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___y_1667_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1756_ = v___y_1667_;
v_isShared_1757_ = v_isSharedCheck_1784_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_buildTime_1754_);
lean_inc(v_trace_1753_);
lean_inc(v_log_1750_);
lean_dec(v___y_1667_);
v___x_1756_ = lean_box(0);
v_isShared_1757_ = v_isSharedCheck_1784_;
goto v_resetjp_1755_;
}
v_resetjp_1755_:
{
lean_object* v_ar_1758_; lean_object* v___x_1759_; 
v_ar_1758_ = lean_ctor_get(v_lean_1749_, 13);
lean_inc_ref(v_ar_1758_);
v___x_1759_ = l_Lake_compileStaticLib(v___y_1657_, v_oFiles_1658_, v_ar_1758_, v_shouldExport_1659_, v_log_1750_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1771_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
v_a_1761_ = lean_ctor_get(v___x_1759_, 1);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1763_ = v___x_1759_;
v_isShared_1764_ = v_isSharedCheck_1771_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_inc(v_a_1760_);
lean_dec(v___x_1759_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1771_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 0, v_a_1761_);
v___x_1766_ = v___x_1756_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1761_);
lean_ctor_set(v_reuseFailAlloc_1770_, 1, v_trace_1753_);
lean_ctor_set(v_reuseFailAlloc_1770_, 2, v_buildTime_1754_);
lean_ctor_set_uint8(v_reuseFailAlloc_1770_, sizeof(void*)*3, v_action_1751_);
lean_ctor_set_uint8(v_reuseFailAlloc_1770_, sizeof(void*)*3 + 1, v_wantsRebuild_1752_);
v___x_1766_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1768_; 
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 1, v___x_1766_);
v___x_1768_ = v___x_1763_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1760_);
lean_ctor_set(v_reuseFailAlloc_1769_, 1, v___x_1766_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
else
{
lean_object* v_a_1772_; lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1783_; 
v_a_1772_ = lean_ctor_get(v___x_1759_, 0);
v_a_1773_ = lean_ctor_get(v___x_1759_, 1);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1775_ = v___x_1759_;
v_isShared_1776_ = v_isSharedCheck_1783_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_inc(v_a_1772_);
lean_dec(v___x_1759_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1783_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1757_ == 0)
{
lean_ctor_set(v___x_1756_, 0, v_a_1773_);
v___x_1778_ = v___x_1756_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1773_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v_trace_1753_);
lean_ctor_set(v_reuseFailAlloc_1782_, 2, v_buildTime_1754_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*3, v_action_1751_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*3 + 1, v_wantsRebuild_1752_);
v___x_1778_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
lean_object* v___x_1780_; 
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 1, v___x_1778_);
v___x_1780_ = v___x_1775_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1772_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v___x_1778_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
}
}
}
else
{
lean_object* v_log_1785_; uint8_t v_action_1786_; uint8_t v_wantsRebuild_1787_; lean_object* v_trace_1788_; lean_object* v_buildTime_1789_; lean_object* v___x_1790_; 
v_log_1785_ = lean_ctor_get(v___y_1667_, 0);
v_action_1786_ = lean_ctor_get_uint8(v___y_1667_, sizeof(void*)*3);
v_wantsRebuild_1787_ = lean_ctor_get_uint8(v___y_1667_, sizeof(void*)*3 + 1);
v_trace_1788_ = lean_ctor_get(v___y_1667_, 1);
v_buildTime_1789_ = lean_ctor_get(v___y_1667_, 2);
lean_inc_ref(v___y_1657_);
v___x_1790_ = l_Lake_createParentDirs(v___y_1657_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v_a_1794_; uint8_t v___x_1842_; lean_object* v___x_1843_; 
lean_dec_ref_known(v___x_1790_, 1);
v___x_1791_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0));
lean_inc_ref(v___y_1657_);
v___x_1792_ = l_System_FilePath_addExtension(v___y_1657_, v___x_1791_);
v___x_1842_ = 1;
v___x_1843_ = lean_io_prim_handle_mk(v___x_1792_, v___x_1842_);
if (lean_obj_tag(v___x_1843_) == 0)
{
lean_object* v_a_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; uint8_t v___x_1847_; 
v_a_1844_ = lean_ctor_get(v___x_1843_, 0);
lean_inc(v_a_1844_);
lean_dec_ref_known(v___x_1843_, 1);
v___x_1845_ = lean_unsigned_to_nat(0u);
v___x_1846_ = lean_array_get_size(v_oFiles_1658_);
v___x_1847_ = lean_nat_dec_lt(v___x_1845_, v___x_1846_);
if (v___x_1847_ == 0)
{
lean_dec(v_a_1844_);
lean_dec_ref(v_oFiles_1658_);
v_a_1794_ = v___y_1667_;
goto v___jp_1793_;
}
else
{
lean_object* v___x_1848_; size_t v___x_1849_; lean_object* v___x_1850_; 
v___x_1848_ = lean_box(0);
v___x_1849_ = lean_usize_of_nat(v___x_1846_);
v___x_1850_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1844_, v_oFiles_1658_, v___x_1661_, v___x_1849_, v___x_1848_, v___y_1667_);
lean_dec_ref(v_oFiles_1658_);
lean_dec(v_a_1844_);
if (lean_obj_tag(v___x_1850_) == 0)
{
lean_object* v_a_1851_; 
v_a_1851_ = lean_ctor_get(v___x_1850_, 1);
lean_inc(v_a_1851_);
lean_dec_ref_known(v___x_1850_, 2);
v_a_1794_ = v_a_1851_;
goto v___jp_1793_;
}
else
{
lean_dec_ref(v___x_1792_);
lean_dec_ref(v___y_1657_);
return v___x_1850_;
}
}
}
else
{
lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1865_; 
lean_inc(v_buildTime_1789_);
lean_inc_ref(v_trace_1788_);
lean_inc_ref(v_log_1785_);
lean_dec_ref(v___x_1792_);
lean_dec_ref(v_oFiles_1658_);
lean_dec_ref(v___y_1657_);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___y_1667_);
if (v_isSharedCheck_1865_ == 0)
{
lean_object* v_unused_1866_; lean_object* v_unused_1867_; lean_object* v_unused_1868_; 
v_unused_1866_ = lean_ctor_get(v___y_1667_, 2);
lean_dec(v_unused_1866_);
v_unused_1867_ = lean_ctor_get(v___y_1667_, 1);
lean_dec(v_unused_1867_);
v_unused_1868_ = lean_ctor_get(v___y_1667_, 0);
lean_dec(v_unused_1868_);
v___x_1853_ = v___y_1667_;
v_isShared_1854_ = v_isSharedCheck_1865_;
goto v_resetjp_1852_;
}
else
{
lean_dec(v___y_1667_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1865_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v_a_1855_; lean_object* v___x_1856_; uint8_t v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1862_; 
v_a_1855_ = lean_ctor_get(v___x_1843_, 0);
lean_inc(v_a_1855_);
lean_dec_ref_known(v___x_1843_, 1);
v___x_1856_ = lean_io_error_to_string(v_a_1855_);
v___x_1857_ = 3;
v___x_1858_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1858_, 0, v___x_1856_);
lean_ctor_set_uint8(v___x_1858_, sizeof(void*)*1, v___x_1857_);
v___x_1859_ = lean_array_get_size(v_log_1785_);
v___x_1860_ = lean_array_push(v_log_1785_, v___x_1858_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 0, v___x_1860_);
v___x_1862_ = v___x_1853_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1860_);
lean_ctor_set(v_reuseFailAlloc_1864_, 1, v_trace_1788_);
lean_ctor_set(v_reuseFailAlloc_1864_, 2, v_buildTime_1789_);
lean_ctor_set_uint8(v_reuseFailAlloc_1864_, sizeof(void*)*3, v_action_1786_);
lean_ctor_set_uint8(v_reuseFailAlloc_1864_, sizeof(void*)*3 + 1, v_wantsRebuild_1787_);
v___x_1862_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
lean_object* v___x_1863_; 
v___x_1863_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1863_, 0, v___x_1859_);
lean_ctor_set(v___x_1863_, 1, v___x_1862_);
return v___x_1863_;
}
}
}
v___jp_1793_:
{
lean_object* v___x_1795_; lean_object* v_log_1796_; uint8_t v_action_1797_; uint8_t v_wantsRebuild_1798_; lean_object* v_trace_1799_; lean_object* v_buildTime_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1841_; 
v___x_1795_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1));
v_log_1796_ = lean_ctor_get(v_a_1794_, 0);
v_action_1797_ = lean_ctor_get_uint8(v_a_1794_, sizeof(void*)*3);
v_wantsRebuild_1798_ = lean_ctor_get_uint8(v_a_1794_, sizeof(void*)*3 + 1);
v_trace_1799_ = lean_ctor_get(v_a_1794_, 1);
v_buildTime_1800_ = lean_ctor_get(v_a_1794_, 2);
v_isSharedCheck_1841_ = !lean_is_exclusive(v_a_1794_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1802_ = v_a_1794_;
v_isShared_1803_ = v_isSharedCheck_1841_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_buildTime_1800_);
lean_inc(v_trace_1799_);
lean_inc(v_log_1796_);
lean_dec(v_a_1794_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1841_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; uint8_t v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1804_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2));
v___x_1805_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5));
v___x_1806_ = lean_unsigned_to_nat(5u);
v___x_1807_ = lean_mk_empty_array_with_capacity(v___x_1806_);
lean_dec_ref(v___x_1807_);
v___x_1808_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7);
v___x_1809_ = lean_array_push(v___x_1808_, v___y_1657_);
v___x_1810_ = lean_array_push(v___x_1809_, v___x_1805_);
v___x_1811_ = lean_array_push(v___x_1810_, v___x_1792_);
v___x_1812_ = lean_box(0);
v___x_1813_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8));
v___x_1814_ = 0;
v___x_1815_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1815_, 0, v___x_1795_);
lean_ctor_set(v___x_1815_, 1, v___x_1804_);
lean_ctor_set(v___x_1815_, 2, v___x_1811_);
lean_ctor_set(v___x_1815_, 3, v___x_1812_);
lean_ctor_set(v___x_1815_, 4, v___x_1813_);
lean_ctor_set_uint8(v___x_1815_, sizeof(void*)*5, v___x_1660_);
lean_ctor_set_uint8(v___x_1815_, sizeof(void*)*5 + 1, v___x_1814_);
v___x_1816_ = l_Lake_proc(v___x_1815_, v___x_1814_, v___x_1812_, v_log_1796_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1828_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
v_a_1818_ = lean_ctor_get(v___x_1816_, 1);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1820_ = v___x_1816_;
v_isShared_1821_ = v_isSharedCheck_1828_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_inc(v_a_1817_);
lean_dec(v___x_1816_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1828_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1823_; 
if (v_isShared_1803_ == 0)
{
lean_ctor_set(v___x_1802_, 0, v_a_1818_);
v___x_1823_ = v___x_1802_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1818_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v_trace_1799_);
lean_ctor_set(v_reuseFailAlloc_1827_, 2, v_buildTime_1800_);
lean_ctor_set_uint8(v_reuseFailAlloc_1827_, sizeof(void*)*3, v_action_1797_);
lean_ctor_set_uint8(v_reuseFailAlloc_1827_, sizeof(void*)*3 + 1, v_wantsRebuild_1798_);
v___x_1823_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
lean_object* v___x_1825_; 
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 1, v___x_1823_);
v___x_1825_ = v___x_1820_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1817_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v___x_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1840_; 
v_a_1829_ = lean_ctor_get(v___x_1816_, 0);
v_a_1830_ = lean_ctor_get(v___x_1816_, 1);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1832_ = v___x_1816_;
v_isShared_1833_ = v_isSharedCheck_1840_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_inc(v_a_1829_);
lean_dec(v___x_1816_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1840_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1835_; 
if (v_isShared_1803_ == 0)
{
lean_ctor_set(v___x_1802_, 0, v_a_1830_);
v___x_1835_ = v___x_1802_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1830_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v_trace_1799_);
lean_ctor_set(v_reuseFailAlloc_1839_, 2, v_buildTime_1800_);
lean_ctor_set_uint8(v_reuseFailAlloc_1839_, sizeof(void*)*3, v_action_1797_);
lean_ctor_set_uint8(v_reuseFailAlloc_1839_, sizeof(void*)*3 + 1, v_wantsRebuild_1798_);
v___x_1835_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1837_; 
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 1, v___x_1835_);
v___x_1837_ = v___x_1832_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1829_);
lean_ctor_set(v_reuseFailAlloc_1838_, 1, v___x_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1882_; 
lean_inc(v_buildTime_1789_);
lean_inc_ref(v_trace_1788_);
lean_inc_ref(v_log_1785_);
lean_dec_ref(v_oFiles_1658_);
lean_dec_ref(v___y_1657_);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___y_1667_);
if (v_isSharedCheck_1882_ == 0)
{
lean_object* v_unused_1883_; lean_object* v_unused_1884_; lean_object* v_unused_1885_; 
v_unused_1883_ = lean_ctor_get(v___y_1667_, 2);
lean_dec(v_unused_1883_);
v_unused_1884_ = lean_ctor_get(v___y_1667_, 1);
lean_dec(v_unused_1884_);
v_unused_1885_ = lean_ctor_get(v___y_1667_, 0);
lean_dec(v_unused_1885_);
v___x_1870_ = v___y_1667_;
v_isShared_1871_ = v_isSharedCheck_1882_;
goto v_resetjp_1869_;
}
else
{
lean_dec(v___y_1667_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1882_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v_a_1872_; lean_object* v___x_1873_; uint8_t v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1879_; 
v_a_1872_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_a_1872_);
lean_dec_ref_known(v___x_1790_, 1);
v___x_1873_ = lean_io_error_to_string(v_a_1872_);
v___x_1874_ = 3;
v___x_1875_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1875_, 0, v___x_1873_);
lean_ctor_set_uint8(v___x_1875_, sizeof(void*)*1, v___x_1874_);
v___x_1876_ = lean_array_get_size(v_log_1785_);
v___x_1877_ = lean_array_push(v_log_1785_, v___x_1875_);
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 0, v___x_1877_);
v___x_1879_ = v___x_1870_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v_trace_1788_);
lean_ctor_set(v_reuseFailAlloc_1881_, 2, v_buildTime_1789_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*3, v_action_1786_);
lean_ctor_set_uint8(v_reuseFailAlloc_1881_, sizeof(void*)*3 + 1, v_wantsRebuild_1787_);
v___x_1879_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
lean_object* v___x_1880_; 
v___x_1880_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1876_);
lean_ctor_set(v___x_1880_, 1, v___x_1879_);
return v___x_1880_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed(lean_object* v_bootstrap_1886_, lean_object* v___y_1887_, lean_object* v_oFiles_1888_, lean_object* v_shouldExport_1889_, lean_object* v___x_1890_, lean_object* v___x_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
uint8_t v_bootstrap_boxed_1899_; uint8_t v_shouldExport_boxed_1900_; uint8_t v___x_7293__boxed_1901_; size_t v___x_7294__boxed_1902_; lean_object* v_res_1903_; 
v_bootstrap_boxed_1899_ = lean_unbox(v_bootstrap_1886_);
v_shouldExport_boxed_1900_ = lean_unbox(v_shouldExport_1889_);
v___x_7293__boxed_1901_ = lean_unbox(v___x_1890_);
v___x_7294__boxed_1902_ = lean_unbox_usize(v___x_1891_);
lean_dec(v___x_1891_);
v_res_1903_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(v_bootstrap_boxed_1899_, v___y_1887_, v_oFiles_1888_, v_shouldExport_boxed_1900_, v___x_7293__boxed_1901_, v___x_7294__boxed_1902_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(uint8_t v_bootstrap_1904_, lean_object* v___y_1905_, uint8_t v_shouldExport_1906_, uint8_t v___x_1907_, size_t v___x_1908_, lean_object* v_oFiles_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___y_1921_; uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1917_ = lean_box(v_bootstrap_1904_);
v___x_1918_ = lean_box(v_shouldExport_1906_);
v___x_1919_ = lean_box(v___x_1907_);
v___x_1920_ = lean_box_usize(v___x_1908_);
lean_inc_ref(v___y_1905_);
v___y_1921_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed), 13, 6);
lean_closure_set(v___y_1921_, 0, v___x_1917_);
lean_closure_set(v___y_1921_, 1, v___y_1905_);
lean_closure_set(v___y_1921_, 2, v_oFiles_1909_);
lean_closure_set(v___y_1921_, 3, v___x_1918_);
lean_closure_set(v___y_1921_, 4, v___x_1919_);
lean_closure_set(v___y_1921_, 5, v___x_1920_);
v___x_1922_ = 0;
v___x_1923_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0));
v___x_1924_ = l_Lake_buildArtifactUnlessUpToDate(v___y_1905_, v___y_1921_, v___x_1922_, v___x_1923_, v___x_1907_, v___x_1922_, v___x_1922_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1934_; 
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
v_a_1926_ = lean_ctor_get(v___x_1924_, 1);
v_isSharedCheck_1934_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1928_ = v___x_1924_;
v_isShared_1929_ = v_isSharedCheck_1934_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_inc(v_a_1925_);
lean_dec(v___x_1924_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1934_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v_path_1930_; lean_object* v___x_1932_; 
v_path_1930_ = lean_ctor_get(v_a_1925_, 1);
lean_inc_ref(v_path_1930_);
lean_dec(v_a_1925_);
if (v_isShared_1929_ == 0)
{
lean_ctor_set(v___x_1928_, 0, v_path_1930_);
v___x_1932_ = v___x_1928_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_path_1930_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v_a_1926_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
}
else
{
lean_object* v_a_1935_; lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
v_a_1935_ = lean_ctor_get(v___x_1924_, 0);
v_a_1936_ = lean_ctor_get(v___x_1924_, 1);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1924_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_inc(v_a_1935_);
lean_dec(v___x_1924_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1935_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed(lean_object* v_bootstrap_1944_, lean_object* v___y_1945_, lean_object* v_shouldExport_1946_, lean_object* v___x_1947_, lean_object* v___x_1948_, lean_object* v_oFiles_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_){
_start:
{
uint8_t v_bootstrap_boxed_1957_; uint8_t v_shouldExport_boxed_1958_; uint8_t v___x_7693__boxed_1959_; size_t v___x_7694__boxed_1960_; lean_object* v_res_1961_; 
v_bootstrap_boxed_1957_ = lean_unbox(v_bootstrap_1944_);
v_shouldExport_boxed_1958_ = lean_unbox(v_shouldExport_1946_);
v___x_7693__boxed_1959_ = lean_unbox(v___x_1947_);
v___x_7694__boxed_1960_ = lean_unbox_usize(v___x_1948_);
lean_dec(v___x_1948_);
v_res_1961_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(v_bootstrap_boxed_1957_, v___y_1945_, v_shouldExport_boxed_1958_, v___x_7693__boxed_1959_, v___x_7694__boxed_1960_, v_oFiles_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_);
lean_dec_ref(v___y_1954_);
lean_dec(v___y_1953_);
lean_dec(v___y_1952_);
lean_dec(v___y_1951_);
return v_res_1961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(lean_object* v_a_1962_, size_t v_sz_1963_, size_t v_i_1964_, lean_object* v_bs_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
uint8_t v___x_1973_; 
v___x_1973_ = lean_usize_dec_lt(v_i_1964_, v_sz_1963_);
if (v___x_1973_ == 0)
{
lean_object* v___x_1974_; 
lean_dec_ref(v___y_1966_);
lean_dec_ref(v_a_1962_);
v___x_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1974_, 0, v_bs_1965_);
lean_ctor_set(v___x_1974_, 1, v___y_1971_);
return v___x_1974_;
}
else
{
lean_object* v_v_1975_; lean_object* v___x_1976_; lean_object* v_bs_x27_1977_; lean_object* v___x_1978_; 
v_v_1975_ = lean_array_uget(v_bs_1965_, v_i_1964_);
v___x_1976_ = lean_unsigned_to_nat(0u);
v_bs_x27_1977_ = lean_array_uset(v_bs_1965_, v_i_1964_, v___x_1976_);
lean_inc_ref(v___y_1966_);
lean_inc_ref(v_a_1962_);
v___x_1978_ = l_Lake_ModuleFacet_fetch___redArg(v_v_1975_, v_a_1962_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v_a_1980_; size_t v___x_1981_; size_t v___x_1982_; lean_object* v___x_1983_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_a_1979_);
v_a_1980_ = lean_ctor_get(v___x_1978_, 1);
lean_inc(v_a_1980_);
lean_dec_ref_known(v___x_1978_, 2);
v___x_1981_ = ((size_t)1ULL);
v___x_1982_ = lean_usize_add(v_i_1964_, v___x_1981_);
v___x_1983_ = lean_array_uset(v_bs_x27_1977_, v_i_1964_, v_a_1979_);
v_i_1964_ = v___x_1982_;
v_bs_1965_ = v___x_1983_;
v___y_1971_ = v_a_1980_;
goto _start;
}
else
{
lean_object* v_a_1985_; lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
lean_dec_ref(v_bs_x27_1977_);
lean_dec_ref(v___y_1966_);
lean_dec_ref(v_a_1962_);
v_a_1985_ = lean_ctor_get(v___x_1978_, 0);
v_a_1986_ = lean_ctor_get(v___x_1978_, 1);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1978_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_inc(v_a_1985_);
lean_dec(v___x_1978_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1985_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed(lean_object* v_a_1994_, lean_object* v_sz_1995_, lean_object* v_i_1996_, lean_object* v_bs_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_){
_start:
{
size_t v_sz_boxed_2005_; size_t v_i_boxed_2006_; lean_object* v_res_2007_; 
v_sz_boxed_2005_ = lean_unbox_usize(v_sz_1995_);
lean_dec(v_sz_1995_);
v_i_boxed_2006_ = lean_unbox_usize(v_i_1996_);
lean_dec(v_i_1996_);
v_res_2007_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v_a_1994_, v_sz_boxed_2005_, v_i_boxed_2006_, v_bs_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_);
lean_dec_ref(v___y_2002_);
lean_dec(v___y_2001_);
lean_dec(v___y_2000_);
lean_dec(v___y_1999_);
return v_res_2007_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(uint8_t v_shouldExport_2008_, lean_object* v_as_2009_, size_t v_i_2010_, size_t v_stop_2011_, lean_object* v_b_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_){
_start:
{
uint8_t v___x_2020_; 
v___x_2020_ = lean_usize_dec_eq(v_i_2010_, v_stop_2011_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; lean_object* v_lib_2022_; lean_object* v_config_2023_; lean_object* v_nativeFacets_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; size_t v_sz_2027_; size_t v___x_2028_; lean_object* v___x_2029_; 
v___x_2021_ = lean_array_uget_borrowed(v_as_2009_, v_i_2010_);
v_lib_2022_ = lean_ctor_get(v___x_2021_, 0);
v_config_2023_ = lean_ctor_get(v_lib_2022_, 2);
v_nativeFacets_2024_ = lean_ctor_get(v_config_2023_, 8);
v___x_2025_ = lean_box(v_shouldExport_2008_);
lean_inc_ref(v_nativeFacets_2024_);
v___x_2026_ = lean_apply_1(v_nativeFacets_2024_, v___x_2025_);
v_sz_2027_ = lean_array_size(v___x_2026_);
v___x_2028_ = ((size_t)0ULL);
lean_inc_ref(v___y_2013_);
lean_inc(v___x_2021_);
v___x_2029_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v___x_2021_, v_sz_2027_, v___x_2028_, v___x_2026_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_a_2030_; lean_object* v_a_2031_; lean_object* v___x_2032_; size_t v___x_2033_; size_t v___x_2034_; 
v_a_2030_ = lean_ctor_get(v___x_2029_, 0);
lean_inc(v_a_2030_);
v_a_2031_ = lean_ctor_get(v___x_2029_, 1);
lean_inc(v_a_2031_);
lean_dec_ref_known(v___x_2029_, 2);
v___x_2032_ = l_Array_append___redArg(v_b_2012_, v_a_2030_);
lean_dec(v_a_2030_);
v___x_2033_ = ((size_t)1ULL);
v___x_2034_ = lean_usize_add(v_i_2010_, v___x_2033_);
v_i_2010_ = v___x_2034_;
v_b_2012_ = v___x_2032_;
v___y_2018_ = v_a_2031_;
goto _start;
}
else
{
lean_dec_ref(v___y_2013_);
lean_dec_ref(v_b_2012_);
return v___x_2029_;
}
}
else
{
lean_object* v___x_2036_; 
lean_dec_ref(v___y_2013_);
v___x_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2036_, 0, v_b_2012_);
lean_ctor_set(v___x_2036_, 1, v___y_2018_);
return v___x_2036_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed(lean_object* v_shouldExport_2037_, lean_object* v_as_2038_, lean_object* v_i_2039_, lean_object* v_stop_2040_, lean_object* v_b_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
uint8_t v_shouldExport_boxed_2049_; size_t v_i_boxed_2050_; size_t v_stop_boxed_2051_; lean_object* v_res_2052_; 
v_shouldExport_boxed_2049_ = lean_unbox(v_shouldExport_2037_);
v_i_boxed_2050_ = lean_unbox_usize(v_i_2039_);
lean_dec(v_i_2039_);
v_stop_boxed_2051_ = lean_unbox_usize(v_stop_2040_);
lean_dec(v_stop_2040_);
v_res_2052_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_boxed_2049_, v_as_2038_, v_i_boxed_2050_, v_stop_boxed_2051_, v_b_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec(v___y_2045_);
lean_dec(v___y_2044_);
lean_dec(v___y_2043_);
lean_dec_ref(v_as_2038_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(lean_object* v_config_2053_, lean_object* v_config_2054_, uint8_t v_shouldExport_2055_, uint8_t v___x_2056_, lean_object* v___x_2057_, lean_object* v___x_2058_, lean_object* v_pkg_2059_, lean_object* v_dir_2060_, lean_object* v_self_2061_, lean_object* v___x_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
size_t v___y_2071_; uint8_t v___y_2072_; lean_object* v___y_2073_; lean_object* v___y_2074_; lean_object* v___y_2075_; lean_object* v___y_2076_; lean_object* v_a_2091_; lean_object* v_a_2092_; lean_object* v___x_2134_; 
lean_inc_ref(v___y_2063_);
lean_inc_ref(v___y_2067_);
lean_inc(v___y_2066_);
lean_inc(v___y_2065_);
lean_inc(v___x_2058_);
v___x_2134_ = lean_apply_7(v___y_2063_, v___x_2062_, v___x_2058_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, lean_box(0));
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v_a_2136_; lean_object* v___x_2137_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
v_a_2136_ = lean_ctor_get(v___x_2134_, 1);
lean_inc(v_a_2136_);
lean_dec_ref_known(v___x_2134_, 2);
v___x_2137_ = l_Lake_Job_await___redArg(v_a_2135_, v_a_2136_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v_a_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; uint8_t v___x_2143_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_a_2138_);
v_a_2139_ = lean_ctor_get(v___x_2137_, 1);
lean_inc(v_a_2139_);
lean_dec_ref_known(v___x_2137_, 2);
v___x_2140_ = lean_unsigned_to_nat(0u);
v___x_2141_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_2142_ = lean_array_get_size(v_a_2138_);
v___x_2143_ = lean_nat_dec_lt(v___x_2140_, v___x_2142_);
if (v___x_2143_ == 0)
{
lean_dec(v_a_2138_);
v_a_2091_ = v___x_2141_;
v_a_2092_ = v_a_2139_;
goto v___jp_2090_;
}
else
{
size_t v___x_2144_; size_t v___x_2145_; lean_object* v___x_2146_; 
v___x_2144_ = ((size_t)0ULL);
v___x_2145_ = lean_usize_of_nat(v___x_2142_);
lean_inc_ref(v___y_2063_);
v___x_2146_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_2055_, v_a_2138_, v___x_2144_, v___x_2145_, v___x_2141_, v___y_2063_, v___x_2058_, v___y_2065_, v___y_2066_, v___y_2067_, v_a_2139_);
lean_dec(v_a_2138_);
if (lean_obj_tag(v___x_2146_) == 0)
{
lean_object* v_a_2147_; lean_object* v_a_2148_; 
v_a_2147_ = lean_ctor_get(v___x_2146_, 0);
lean_inc(v_a_2147_);
v_a_2148_ = lean_ctor_get(v___x_2146_, 1);
lean_inc(v_a_2148_);
lean_dec_ref_known(v___x_2146_, 2);
v_a_2091_ = v_a_2147_;
v_a_2092_ = v_a_2148_;
goto v___jp_2090_;
}
else
{
lean_object* v_a_2149_; lean_object* v_a_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2157_; 
lean_dec_ref(v___y_2063_);
lean_dec_ref(v_self_2061_);
lean_dec_ref(v_dir_2060_);
lean_dec_ref(v_pkg_2059_);
lean_dec(v___x_2058_);
lean_dec(v___x_2057_);
lean_dec_ref(v_config_2053_);
v_a_2149_ = lean_ctor_get(v___x_2146_, 0);
v_a_2150_ = lean_ctor_get(v___x_2146_, 1);
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2157_ == 0)
{
v___x_2152_ = v___x_2146_;
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_a_2150_);
lean_inc(v_a_2149_);
lean_dec(v___x_2146_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2157_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2155_; 
if (v_isShared_2153_ == 0)
{
v___x_2155_ = v___x_2152_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v_a_2149_);
lean_ctor_set(v_reuseFailAlloc_2156_, 1, v_a_2150_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
return v___x_2155_;
}
}
}
}
}
else
{
lean_object* v_a_2158_; lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_dec_ref(v___y_2063_);
lean_dec_ref(v_self_2061_);
lean_dec_ref(v_dir_2060_);
lean_dec_ref(v_pkg_2059_);
lean_dec(v___x_2058_);
lean_dec(v___x_2057_);
lean_dec_ref(v_config_2053_);
v_a_2158_ = lean_ctor_get(v___x_2137_, 0);
v_a_2159_ = lean_ctor_get(v___x_2137_, 1);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2137_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_inc(v_a_2158_);
lean_dec(v___x_2137_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2158_);
lean_ctor_set(v_reuseFailAlloc_2165_, 1, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
}
else
{
lean_object* v_a_2167_; lean_object* v_a_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2175_; 
lean_dec_ref(v___y_2063_);
lean_dec_ref(v_self_2061_);
lean_dec_ref(v_dir_2060_);
lean_dec_ref(v_pkg_2059_);
lean_dec(v___x_2058_);
lean_dec(v___x_2057_);
lean_dec_ref(v_config_2053_);
v_a_2167_ = lean_ctor_get(v___x_2134_, 0);
v_a_2168_ = lean_ctor_get(v___x_2134_, 1);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2170_ = v___x_2134_;
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_a_2168_);
lean_inc(v_a_2167_);
lean_dec(v___x_2134_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___x_2173_; 
if (v_isShared_2171_ == 0)
{
v___x_2173_ = v___x_2170_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_a_2167_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v_a_2168_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
return v___x_2173_;
}
}
}
v___jp_2070_:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___f_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; uint8_t v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2077_ = lean_box(v___y_2072_);
v___x_2078_ = lean_box(v_shouldExport_2055_);
v___x_2079_ = lean_box(v___x_2056_);
v___x_2080_ = lean_box_usize(v___y_2071_);
v___f_2081_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed), 13, 5);
lean_closure_set(v___f_2081_, 0, v___x_2077_);
lean_closure_set(v___f_2081_, 1, v___y_2076_);
lean_closure_set(v___f_2081_, 2, v___x_2078_);
lean_closure_set(v___f_2081_, 3, v___x_2079_);
lean_closure_set(v___f_2081_, 4, v___x_2080_);
v___x_2082_ = l_Array_append___redArg(v___y_2075_, v___y_2074_);
lean_dec_ref(v___y_2074_);
v___x_2083_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0));
v___x_2084_ = l_Lake_Job_collectArray___redArg(v___x_2082_, v___x_2083_);
lean_dec_ref(v___x_2082_);
v___x_2085_ = lean_unsigned_to_nat(0u);
v___x_2086_ = 0;
v___x_2087_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_2088_ = l_Lake_Job_mapM___redArg(v___x_2057_, v___x_2084_, v___f_2081_, v___x_2085_, v___x_2086_, v___y_2063_, v___x_2058_, v___y_2065_, v___y_2066_, v___y_2067_, v___x_2087_);
lean_dec(v___x_2058_);
v___x_2089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2088_);
lean_ctor_set(v___x_2089_, 1, v___y_2073_);
return v___x_2089_;
}
v___jp_2090_:
{
lean_object* v_toLeanConfig_2093_; lean_object* v_toLeanConfig_2094_; uint8_t v_bootstrap_2095_; lean_object* v_buildDir_2096_; lean_object* v_nativeLibDir_2097_; lean_object* v_moreLinkObjs_2098_; lean_object* v_moreLinkObjs_2099_; lean_object* v___x_2100_; size_t v_sz_2101_; size_t v___x_2102_; lean_object* v___x_2103_; 
v_toLeanConfig_2093_ = lean_ctor_get(v_config_2053_, 1);
lean_inc_ref(v_toLeanConfig_2093_);
v_toLeanConfig_2094_ = lean_ctor_get(v_config_2054_, 0);
v_bootstrap_2095_ = lean_ctor_get_uint8(v_config_2053_, sizeof(void*)*28);
v_buildDir_2096_ = lean_ctor_get(v_config_2053_, 5);
lean_inc_ref(v_buildDir_2096_);
v_nativeLibDir_2097_ = lean_ctor_get(v_config_2053_, 7);
lean_inc_ref(v_nativeLibDir_2097_);
lean_dec_ref(v_config_2053_);
v_moreLinkObjs_2098_ = lean_ctor_get(v_toLeanConfig_2093_, 6);
lean_inc_ref(v_moreLinkObjs_2098_);
lean_dec_ref(v_toLeanConfig_2093_);
v_moreLinkObjs_2099_ = lean_ctor_get(v_toLeanConfig_2094_, 6);
v___x_2100_ = l_Array_append___redArg(v_moreLinkObjs_2098_, v_moreLinkObjs_2099_);
v_sz_2101_ = lean_array_size(v___x_2100_);
v___x_2102_ = ((size_t)0ULL);
lean_inc_ref(v___y_2063_);
v___x_2103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(v_pkg_2059_, v_sz_2101_, v___x_2102_, v___x_2100_, v___y_2063_, v___x_2058_, v___y_2065_, v___y_2066_, v___y_2067_, v_a_2092_);
if (lean_obj_tag(v___x_2103_) == 0)
{
if (v_shouldExport_2055_ == 0)
{
lean_object* v_a_2104_; lean_object* v_a_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
lean_inc(v_a_2104_);
v_a_2105_ = lean_ctor_get(v___x_2103_, 1);
lean_inc(v_a_2105_);
lean_dec_ref_known(v___x_2103_, 2);
v___x_2106_ = l_System_FilePath_normalize(v_buildDir_2096_);
v___x_2107_ = l_Lake_joinRelative(v_dir_2060_, v___x_2106_);
v___x_2108_ = l_System_FilePath_normalize(v_nativeLibDir_2097_);
v___x_2109_ = l_Lake_joinRelative(v___x_2107_, v___x_2108_);
v___x_2110_ = l_Lake_LeanLib_libName(v_self_2061_);
v___x_2111_ = l_Lake_nameToStaticLib(v___x_2110_, v_shouldExport_2055_);
v___x_2112_ = l_Lake_joinRelative(v___x_2109_, v___x_2111_);
v___y_2071_ = v___x_2102_;
v___y_2072_ = v_bootstrap_2095_;
v___y_2073_ = v_a_2105_;
v___y_2074_ = v_a_2104_;
v___y_2075_ = v_a_2091_;
v___y_2076_ = v___x_2112_;
goto v___jp_2070_;
}
else
{
lean_object* v_a_2113_; lean_object* v_a_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; uint8_t v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v_a_2113_ = lean_ctor_get(v___x_2103_, 0);
lean_inc(v_a_2113_);
v_a_2114_ = lean_ctor_get(v___x_2103_, 1);
lean_inc(v_a_2114_);
lean_dec_ref_known(v___x_2103_, 2);
v___x_2115_ = l_System_FilePath_normalize(v_buildDir_2096_);
v___x_2116_ = l_Lake_joinRelative(v_dir_2060_, v___x_2115_);
v___x_2117_ = l_System_FilePath_normalize(v_nativeLibDir_2097_);
v___x_2118_ = l_Lake_joinRelative(v___x_2116_, v___x_2117_);
v___x_2119_ = l_Lake_LeanLib_libName(v_self_2061_);
v___x_2120_ = 0;
v___x_2121_ = l_Lake_nameToStaticLib(v___x_2119_, v___x_2120_);
v___x_2122_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1));
v___x_2123_ = l_System_FilePath_addExtension(v___x_2121_, v___x_2122_);
v___x_2124_ = l_Lake_joinRelative(v___x_2118_, v___x_2123_);
v___y_2071_ = v___x_2102_;
v___y_2072_ = v_bootstrap_2095_;
v___y_2073_ = v_a_2114_;
v___y_2074_ = v_a_2113_;
v___y_2075_ = v_a_2091_;
v___y_2076_ = v___x_2124_;
goto v___jp_2070_;
}
}
else
{
lean_object* v_a_2125_; lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
lean_dec_ref(v_nativeLibDir_2097_);
lean_dec_ref(v_buildDir_2096_);
lean_dec_ref(v_a_2091_);
lean_dec_ref(v___y_2063_);
lean_dec_ref(v_self_2061_);
lean_dec_ref(v_dir_2060_);
lean_dec(v___x_2058_);
lean_dec(v___x_2057_);
v_a_2125_ = lean_ctor_get(v___x_2103_, 0);
v_a_2126_ = lean_ctor_get(v___x_2103_, 1);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v___x_2103_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_inc(v_a_2125_);
lean_dec(v___x_2103_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_a_2125_);
lean_ctor_set(v_reuseFailAlloc_2132_, 1, v_a_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed(lean_object** _args){
lean_object* v_config_2176_ = _args[0];
lean_object* v_config_2177_ = _args[1];
lean_object* v_shouldExport_2178_ = _args[2];
lean_object* v___x_2179_ = _args[3];
lean_object* v___x_2180_ = _args[4];
lean_object* v___x_2181_ = _args[5];
lean_object* v_pkg_2182_ = _args[6];
lean_object* v_dir_2183_ = _args[7];
lean_object* v_self_2184_ = _args[8];
lean_object* v___x_2185_ = _args[9];
lean_object* v___y_2186_ = _args[10];
lean_object* v___y_2187_ = _args[11];
lean_object* v___y_2188_ = _args[12];
lean_object* v___y_2189_ = _args[13];
lean_object* v___y_2190_ = _args[14];
lean_object* v___y_2191_ = _args[15];
lean_object* v___y_2192_ = _args[16];
_start:
{
uint8_t v_shouldExport_boxed_2193_; uint8_t v___x_7891__boxed_2194_; lean_object* v_res_2195_; 
v_shouldExport_boxed_2193_ = lean_unbox(v_shouldExport_2178_);
v___x_7891__boxed_2194_ = lean_unbox(v___x_2179_);
v_res_2195_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(v_config_2176_, v_config_2177_, v_shouldExport_boxed_2193_, v___x_7891__boxed_2194_, v___x_2180_, v___x_2181_, v_pkg_2182_, v_dir_2183_, v_self_2184_, v___x_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec(v_config_2177_);
return v_res_2195_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(lean_object* v___y_2196_, lean_object* v_self_2197_, uint8_t v_shouldExport_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v_toBuildConfig_2205_; lean_object* v_registeredJobs_2206_; uint8_t v_verbosity_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; uint8_t v___x_2211_; uint8_t v___x_2212_; lean_object* v___y_2214_; 
v_toBuildConfig_2205_ = lean_ctor_get(v___y_2202_, 0);
v_registeredJobs_2206_ = lean_ctor_get(v___y_2202_, 4);
v_verbosity_2207_ = lean_ctor_get_uint8(v_toBuildConfig_2205_, sizeof(void*)*4 + 4);
v___x_2208_ = l_Lake_instDataKindFilePath;
v___x_2209_ = l_Lake_Verbosity_ctorIdx(v_verbosity_2207_);
v___x_2210_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__18, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__18_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__18);
v___x_2211_ = lean_nat_dec_eq(v___x_2209_, v___x_2210_);
lean_dec(v___x_2209_);
v___x_2212_ = 1;
if (v___x_2211_ == 0)
{
lean_object* v___x_2259_; 
v___x_2259_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___y_2214_ = v___x_2259_;
goto v___jp_2213_;
}
else
{
if (v_shouldExport_2198_ == 0)
{
lean_object* v___x_2260_; 
v___x_2260_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__20));
v___y_2214_ = v___x_2260_;
goto v___jp_2213_;
}
else
{
lean_object* v___x_2261_; 
v___x_2261_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__21));
v___y_2214_ = v___x_2261_;
goto v___jp_2213_;
}
}
v___jp_2213_:
{
lean_object* v_pkg_2215_; lean_object* v_name_2216_; lean_object* v_config_2217_; lean_object* v_keyName_2218_; lean_object* v_dir_2219_; lean_object* v_config_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___f_2232_; uint8_t v___x_2233_; lean_object* v___x_2234_; 
v_pkg_2215_ = lean_ctor_get(v_self_2197_, 0);
lean_inc_ref_n(v_pkg_2215_, 2);
v_name_2216_ = lean_ctor_get(v_self_2197_, 1);
v_config_2217_ = lean_ctor_get(v_self_2197_, 2);
lean_inc(v_config_2217_);
v_keyName_2218_ = lean_ctor_get(v_pkg_2215_, 2);
v_dir_2219_ = lean_ctor_get(v_pkg_2215_, 4);
lean_inc_ref(v_dir_2219_);
v_config_2220_ = lean_ctor_get(v_pkg_2215_, 6);
lean_inc_ref(v_config_2220_);
lean_inc_n(v_name_2216_, 2);
v___x_2221_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2216_, v___x_2212_);
v___x_2222_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__19));
v___x_2223_ = lean_string_append(v___x_2221_, v___x_2222_);
v___x_2224_ = lean_string_append(v___x_2223_, v___y_2214_);
v___x_2225_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_2218_);
v___x_2226_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2226_, 0, v_keyName_2218_);
lean_ctor_set(v___x_2226_, 1, v_name_2216_);
v___x_2227_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_2197_);
v___x_2228_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2226_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
lean_ctor_set(v___x_2228_, 2, v_self_2197_);
lean_ctor_set(v___x_2228_, 3, v___x_2225_);
v___x_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2229_, 0, v_pkg_2215_);
v___x_2230_ = lean_box(v_shouldExport_2198_);
v___x_2231_ = lean_box(v___x_2212_);
v___f_2232_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed), 17, 10);
lean_closure_set(v___f_2232_, 0, v_config_2220_);
lean_closure_set(v___f_2232_, 1, v_config_2217_);
lean_closure_set(v___f_2232_, 2, v___x_2230_);
lean_closure_set(v___f_2232_, 3, v___x_2231_);
lean_closure_set(v___f_2232_, 4, v___x_2208_);
lean_closure_set(v___f_2232_, 5, v___x_2229_);
lean_closure_set(v___f_2232_, 6, v_pkg_2215_);
lean_closure_set(v___f_2232_, 7, v_dir_2219_);
lean_closure_set(v___f_2232_, 8, v_self_2197_);
lean_closure_set(v___f_2232_, 9, v___x_2228_);
v___x_2233_ = 0;
v___x_2234_ = l_Lake_ensureJob___redArg(v___x_2208_, v___f_2232_, v___y_2196_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2235_; lean_object* v_a_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2258_; 
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
v_a_2236_ = lean_ctor_get(v___x_2234_, 1);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2238_ = v___x_2234_;
v_isShared_2239_ = v_isSharedCheck_2258_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_a_2236_);
lean_inc(v_a_2235_);
lean_dec(v___x_2234_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2258_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v_task_2240_; lean_object* v_kind_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2256_; 
v_task_2240_ = lean_ctor_get(v_a_2235_, 0);
v_kind_2241_ = lean_ctor_get(v_a_2235_, 1);
v_isSharedCheck_2256_ = !lean_is_exclusive(v_a_2235_);
if (v_isSharedCheck_2256_ == 0)
{
lean_object* v_unused_2257_; 
v_unused_2257_ = lean_ctor_get(v_a_2235_, 2);
lean_dec(v_unused_2257_);
v___x_2243_ = v_a_2235_;
v_isShared_2244_ = v_isSharedCheck_2256_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_kind_2241_);
lean_inc(v_task_2240_);
lean_dec(v_a_2235_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2256_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v_job_2246_; 
if (v_isShared_2244_ == 0)
{
lean_ctor_set(v___x_2243_, 2, v___x_2224_);
v_job_2246_ = v___x_2243_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_task_2240_);
lean_ctor_set(v_reuseFailAlloc_2255_, 1, v_kind_2241_);
lean_ctor_set(v_reuseFailAlloc_2255_, 2, v___x_2224_);
v_job_2246_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2253_; 
lean_ctor_set_uint8(v_job_2246_, sizeof(void*)*3, v___x_2233_);
v___x_2247_ = lean_st_ref_take(v_registeredJobs_2206_);
lean_inc_ref(v_job_2246_);
v___x_2248_ = l_Lake_Job_toOpaque___redArg(v_job_2246_);
v___x_2249_ = lean_array_push(v___x_2247_, v___x_2248_);
v___x_2250_ = lean_st_ref_put(v_registeredJobs_2206_, v___x_2249_);
v___x_2251_ = l_Lake_Job_renew___redArg(v_job_2246_);
if (v_isShared_2239_ == 0)
{
lean_ctor_set(v___x_2238_, 0, v___x_2251_);
v___x_2253_ = v___x_2238_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v___x_2251_);
lean_ctor_set(v_reuseFailAlloc_2254_, 1, v_a_2236_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
return v___x_2253_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2224_);
return v___x_2234_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___boxed(lean_object* v___y_2262_, lean_object* v_self_2263_, lean_object* v_shouldExport_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_){
_start:
{
uint8_t v_shouldExport_boxed_2271_; lean_object* v_res_2272_; 
v_shouldExport_boxed_2271_ = lean_unbox(v_shouldExport_2264_);
v_res_2272_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2262_, v_self_2263_, v_shouldExport_boxed_2271_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_);
lean_dec_ref(v___y_2268_);
lean_dec(v___y_2267_);
lean_dec(v___y_2266_);
lean_dec(v___y_2265_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0(lean_object* v_x_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
uint8_t v___x_2281_; lean_object* v___x_2282_; 
v___x_2281_ = 0;
v___x_2282_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2274_, v_x_2273_, v___x_2281_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0___boxed(lean_object* v_x_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l_Lake_LeanLib_staticFacetConfig___lam__0(v_x_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2287_);
lean_dec(v___y_2286_);
lean_dec(v___y_2285_);
return v_res_2291_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_2294_; uint8_t v___x_2295_; lean_object* v___x_2296_; lean_object* v___f_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v___f_2294_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__1));
v___x_2295_ = 1;
v___x_2296_ = l_Lake_instDataKindFilePath;
v___f_2297_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__0));
v___x_2298_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2299_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
lean_ctor_set(v___x_2299_, 1, v___f_2297_);
lean_ctor_set(v___x_2299_, 2, v___x_2296_);
lean_ctor_set(v___x_2299_, 3, v___f_2294_);
lean_ctor_set_uint8(v___x_2299_, sizeof(void*)*4, v___x_2295_);
lean_ctor_set_uint8(v___x_2299_, sizeof(void*)*4 + 1, v___x_2295_);
return v___x_2299_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacetConfig(void){
_start:
{
lean_object* v___x_2300_; 
v___x_2300_ = lean_obj_once(&l_Lake_LeanLib_staticFacetConfig___closed__2, &l_Lake_LeanLib_staticFacetConfig___closed__2_once, _init_l_Lake_LeanLib_staticFacetConfig___closed__2);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(lean_object* v_a_2301_, lean_object* v_as_2302_, size_t v_i_2303_, size_t v_stop_2304_, lean_object* v_b_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
lean_object* v___x_2313_; 
v___x_2313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_2301_, v_as_2302_, v_i_2303_, v_stop_2304_, v_b_2305_, v___y_2311_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___boxed(lean_object* v_a_2314_, lean_object* v_as_2315_, lean_object* v_i_2316_, lean_object* v_stop_2317_, lean_object* v_b_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_){
_start:
{
size_t v_i_boxed_2326_; size_t v_stop_boxed_2327_; lean_object* v_res_2328_; 
v_i_boxed_2326_ = lean_unbox_usize(v_i_2316_);
lean_dec(v_i_2316_);
v_stop_boxed_2327_ = lean_unbox_usize(v_stop_2317_);
lean_dec(v_stop_2317_);
v_res_2328_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(v_a_2314_, v_as_2315_, v_i_boxed_2326_, v_stop_boxed_2327_, v_b_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_);
lean_dec_ref(v___y_2323_);
lean_dec(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec(v___y_2320_);
lean_dec_ref(v___y_2319_);
lean_dec_ref(v_as_2315_);
lean_dec(v_a_2314_);
return v_res_2328_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0(lean_object* v_x_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_){
_start:
{
uint8_t v___x_2337_; lean_object* v___x_2338_; 
v___x_2337_ = 1;
v___x_2338_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2330_, v_x_2329_, v___x_2337_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed(lean_object* v_x_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_){
_start:
{
lean_object* v_res_2347_; 
v_res_2347_ = l_Lake_LeanLib_staticExportFacetConfig___lam__0(v_x_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec(v___y_2342_);
lean_dec(v___y_2341_);
return v_res_2347_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_2349_; uint8_t v___x_2350_; lean_object* v___x_2351_; lean_object* v___f_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___f_2349_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__1));
v___x_2350_ = 1;
v___x_2351_ = l_Lake_instDataKindFilePath;
v___f_2352_ = ((lean_object*)(l_Lake_LeanLib_staticExportFacetConfig___closed__0));
v___x_2353_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2354_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2354_, 0, v___x_2353_);
lean_ctor_set(v___x_2354_, 1, v___f_2352_);
lean_ctor_set(v___x_2354_, 2, v___x_2351_);
lean_ctor_set(v___x_2354_, 3, v___f_2349_);
lean_ctor_set_uint8(v___x_2354_, sizeof(void*)*4, v___x_2350_);
lean_ctor_set_uint8(v___x_2354_, sizeof(void*)*4 + 1, v___x_2350_);
return v___x_2354_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacetConfig(void){
_start:
{
lean_object* v___x_2355_; 
v___x_2355_ = lean_obj_once(&l_Lake_LeanLib_staticExportFacetConfig___closed__1, &l_Lake_LeanLib_staticExportFacetConfig___closed__1_once, _init_l_Lake_LeanLib_staticExportFacetConfig___closed__1);
return v___x_2355_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0(void){
_start:
{
uint8_t v___x_2356_; lean_object* v_name_2357_; lean_object* v___x_2358_; 
v___x_2356_ = 1;
v_name_2357_ = l_Lake_instDataKindDynlib;
v___x_2358_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2357_, v___x_2356_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(lean_object* v_defaultPkg_2359_, lean_object* v_self_2360_, lean_object* v_a_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v_name_2368_; uint8_t v___x_2369_; lean_object* v___x_2370_; 
v_name_2368_ = l_Lake_instDataKindDynlib;
v___x_2369_ = 1;
lean_inc_ref_n(v_self_2360_, 2);
v___x_2370_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_2359_, v_self_2360_, v_self_2360_, v___x_2369_, v_a_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
if (lean_obj_tag(v___x_2370_) == 0)
{
lean_object* v_a_2371_; lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2412_; 
v_a_2371_ = lean_ctor_get(v___x_2370_, 0);
v_a_2372_ = lean_ctor_get(v___x_2370_, 1);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2374_ = v___x_2370_;
v_isShared_2375_ = v_isSharedCheck_2412_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_inc(v_a_2371_);
lean_dec(v___x_2370_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2412_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___y_2377_; lean_object* v_snd_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2410_; 
v_snd_2395_ = lean_ctor_get(v_a_2371_, 1);
v_isSharedCheck_2410_ = !lean_is_exclusive(v_a_2371_);
if (v_isSharedCheck_2410_ == 0)
{
lean_object* v_unused_2411_; 
v_unused_2411_ = lean_ctor_get(v_a_2371_, 0);
lean_dec(v_unused_2411_);
v___x_2397_ = v_a_2371_;
v_isShared_2398_ = v_isSharedCheck_2410_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_snd_2395_);
lean_dec(v_a_2371_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2410_;
goto v_resetjp_2396_;
}
v___jp_2376_:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; uint8_t v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2393_; 
v___x_2378_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0));
v___x_2379_ = l_Lake_PartialBuildKey_toString(v_self_2360_);
v___x_2380_ = lean_string_append(v___x_2378_, v___x_2379_);
lean_dec_ref(v___x_2379_);
v___x_2381_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1));
v___x_2382_ = lean_string_append(v___x_2380_, v___x_2381_);
v___x_2383_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0);
v___x_2384_ = lean_string_append(v___x_2382_, v___x_2383_);
v___x_2385_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3));
v___x_2386_ = lean_string_append(v___x_2384_, v___x_2385_);
v___x_2387_ = lean_string_append(v___x_2386_, v___y_2377_);
lean_dec_ref(v___y_2377_);
v___x_2388_ = 3;
v___x_2389_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2389_, 0, v___x_2387_);
lean_ctor_set_uint8(v___x_2389_, sizeof(void*)*1, v___x_2388_);
v___x_2390_ = lean_array_get_size(v_a_2372_);
v___x_2391_ = lean_array_push(v_a_2372_, v___x_2389_);
if (v_isShared_2375_ == 0)
{
lean_ctor_set_tag(v___x_2374_, 1);
lean_ctor_set(v___x_2374_, 1, v___x_2391_);
lean_ctor_set(v___x_2374_, 0, v___x_2390_);
v___x_2393_ = v___x_2374_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v___x_2390_);
lean_ctor_set(v_reuseFailAlloc_2394_, 1, v___x_2391_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
v_resetjp_2396_:
{
lean_object* v_kind_2399_; uint8_t v___x_2400_; 
v_kind_2399_ = lean_ctor_get(v_snd_2395_, 1);
v___x_2400_ = lean_name_eq(v_kind_2399_, v_name_2368_);
if (v___x_2400_ == 0)
{
uint8_t v___x_2401_; 
lean_inc(v_kind_2399_);
lean_del_object(v___x_2397_);
lean_dec(v_snd_2395_);
v___x_2401_ = l_Lean_Name_isAnonymous(v_kind_2399_);
if (v___x_2401_ == 0)
{
lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2402_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4));
v___x_2403_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_2399_, v___x_2369_);
v___x_2404_ = lean_string_append(v___x_2402_, v___x_2403_);
lean_dec_ref(v___x_2403_);
v___x_2405_ = lean_string_append(v___x_2404_, v___x_2402_);
v___y_2377_ = v___x_2405_;
goto v___jp_2376_;
}
else
{
lean_object* v___x_2406_; 
lean_dec(v_kind_2399_);
v___x_2406_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5));
v___y_2377_ = v___x_2406_;
goto v___jp_2376_;
}
}
else
{
lean_object* v___x_2408_; 
lean_del_object(v___x_2374_);
lean_dec_ref(v_self_2360_);
if (v_isShared_2398_ == 0)
{
lean_ctor_set(v___x_2397_, 1, v_a_2372_);
lean_ctor_set(v___x_2397_, 0, v_snd_2395_);
v___x_2408_ = v___x_2397_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_snd_2395_);
lean_ctor_set(v_reuseFailAlloc_2409_, 1, v_a_2372_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
}
else
{
lean_object* v_a_2413_; lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
lean_dec_ref(v_self_2360_);
v_a_2413_ = lean_ctor_get(v___x_2370_, 0);
v_a_2414_ = lean_ctor_get(v___x_2370_, 1);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2370_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2370_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_inc(v_a_2413_);
lean_dec(v___x_2370_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2413_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___boxed(lean_object* v_defaultPkg_2422_, lean_object* v_self_2423_, lean_object* v_a_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(v_defaultPkg_2422_, v_self_2423_, v_a_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v___y_2427_);
lean_dec(v___y_2426_);
lean_dec(v___y_2425_);
return v_res_2431_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2434_ = ((lean_object*)(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0));
v___x_2435_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2);
v___x_2436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
lean_ctor_set(v___x_2436_, 1, v___x_2434_);
return v___x_2436_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5(void){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(lean_object* v___x_2438_, lean_object* v_as_2439_, size_t v_i_2440_, size_t v_stop_2441_, lean_object* v_b_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_){
_start:
{
uint8_t v___x_2450_; 
v___x_2450_ = lean_usize_dec_eq(v_i_2440_, v_stop_2441_);
if (v___x_2450_ == 0)
{
lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2451_ = lean_array_uget_borrowed(v_as_2439_, v_i_2440_);
lean_inc_ref(v___y_2443_);
lean_inc(v___x_2451_);
lean_inc_ref(v___x_2438_);
v___x_2452_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v___x_2438_, v___x_2451_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; lean_object* v_a_2454_; lean_object* v___x_2455_; size_t v___x_2456_; size_t v___x_2457_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_a_2453_);
v_a_2454_ = lean_ctor_get(v___x_2452_, 1);
lean_inc(v_a_2454_);
lean_dec_ref_known(v___x_2452_, 2);
v___x_2455_ = lean_array_push(v_b_2442_, v_a_2453_);
v___x_2456_ = ((size_t)1ULL);
v___x_2457_ = lean_usize_add(v_i_2440_, v___x_2456_);
v_i_2440_ = v___x_2457_;
v_b_2442_ = v___x_2455_;
v___y_2448_ = v_a_2454_;
goto _start;
}
else
{
lean_object* v_a_2459_; lean_object* v_a_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2467_; 
lean_dec_ref(v___y_2443_);
lean_dec_ref(v_b_2442_);
lean_dec_ref(v___x_2438_);
v_a_2459_ = lean_ctor_get(v___x_2452_, 0);
v_a_2460_ = lean_ctor_get(v___x_2452_, 1);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2462_ = v___x_2452_;
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_a_2460_);
lean_inc(v_a_2459_);
lean_dec(v___x_2452_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2465_; 
if (v_isShared_2463_ == 0)
{
v___x_2465_ = v___x_2462_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_a_2459_);
lean_ctor_set(v_reuseFailAlloc_2466_, 1, v_a_2460_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
return v___x_2465_;
}
}
}
}
else
{
lean_object* v___x_2468_; 
lean_dec_ref(v___y_2443_);
lean_dec_ref(v___x_2438_);
v___x_2468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2468_, 0, v_b_2442_);
lean_ctor_set(v___x_2468_, 1, v___y_2448_);
return v___x_2468_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8___boxed(lean_object* v___x_2469_, lean_object* v_as_2470_, lean_object* v_i_2471_, lean_object* v_stop_2472_, lean_object* v_b_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
size_t v_i_boxed_2481_; size_t v_stop_boxed_2482_; lean_object* v_res_2483_; 
v_i_boxed_2481_ = lean_unbox_usize(v_i_2471_);
lean_dec(v_i_2471_);
v_stop_boxed_2482_ = lean_unbox_usize(v_stop_2472_);
lean_dec(v_stop_2472_);
v_res_2483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v___x_2469_, v_as_2470_, v_i_boxed_2481_, v_stop_boxed_2482_, v_b_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec(v___y_2476_);
lean_dec(v___y_2475_);
lean_dec_ref(v_as_2470_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(lean_object* v_self_2484_, lean_object* v_a_2485_){
_start:
{
lean_object* v_toHashSet_2486_; lean_object* v_toArray_2487_; uint8_t v___x_2488_; 
v_toHashSet_2486_ = lean_ctor_get(v_self_2484_, 0);
v_toArray_2487_ = lean_ctor_get(v_self_2484_, 1);
v___x_2488_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_toHashSet_2486_, v_a_2485_);
if (v___x_2488_ == 0)
{
lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2498_; 
lean_inc_ref(v_toArray_2487_);
lean_inc_ref(v_toHashSet_2486_);
v_isSharedCheck_2498_ = !lean_is_exclusive(v_self_2484_);
if (v_isSharedCheck_2498_ == 0)
{
lean_object* v_unused_2499_; lean_object* v_unused_2500_; 
v_unused_2499_ = lean_ctor_get(v_self_2484_, 1);
lean_dec(v_unused_2499_);
v_unused_2500_ = lean_ctor_get(v_self_2484_, 0);
lean_dec(v_unused_2500_);
v___x_2490_ = v_self_2484_;
v_isShared_2491_ = v_isSharedCheck_2498_;
goto v_resetjp_2489_;
}
else
{
lean_dec(v_self_2484_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2498_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2496_; 
v___x_2492_ = lean_box(0);
lean_inc_ref(v_a_2485_);
v___x_2493_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_toHashSet_2486_, v_a_2485_, v___x_2492_);
v___x_2494_ = lean_array_push(v_toArray_2487_, v_a_2485_);
if (v_isShared_2491_ == 0)
{
lean_ctor_set(v___x_2490_, 1, v___x_2494_);
lean_ctor_set(v___x_2490_, 0, v___x_2493_);
v___x_2496_ = v___x_2490_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v___x_2493_);
lean_ctor_set(v_reuseFailAlloc_2497_, 1, v___x_2494_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
else
{
lean_dec_ref(v_a_2485_);
return v_self_2484_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(lean_object* v_as_2501_, size_t v_i_2502_, size_t v_stop_2503_, lean_object* v_b_2504_){
_start:
{
uint8_t v___x_2505_; 
v___x_2505_ = lean_usize_dec_eq(v_i_2502_, v_stop_2503_);
if (v___x_2505_ == 0)
{
lean_object* v___x_2506_; lean_object* v___x_2507_; size_t v___x_2508_; size_t v___x_2509_; 
v___x_2506_ = lean_array_uget_borrowed(v_as_2501_, v_i_2502_);
lean_inc(v___x_2506_);
v___x_2507_ = l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(v_b_2504_, v___x_2506_);
v___x_2508_ = ((size_t)1ULL);
v___x_2509_ = lean_usize_add(v_i_2502_, v___x_2508_);
v_i_2502_ = v___x_2509_;
v_b_2504_ = v___x_2507_;
goto _start;
}
else
{
return v_b_2504_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1___boxed(lean_object* v_as_2511_, lean_object* v_i_2512_, lean_object* v_stop_2513_, lean_object* v_b_2514_){
_start:
{
size_t v_i_boxed_2515_; size_t v_stop_boxed_2516_; lean_object* v_res_2517_; 
v_i_boxed_2515_ = lean_unbox_usize(v_i_2512_);
lean_dec(v_i_2512_);
v_stop_boxed_2516_ = lean_unbox_usize(v_stop_2513_);
lean_dec(v_stop_2513_);
v_res_2517_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_as_2511_, v_i_boxed_2515_, v_stop_boxed_2516_, v_b_2514_);
lean_dec_ref(v_as_2511_);
return v_res_2517_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(lean_object* v_self_2518_, lean_object* v_arr_2519_){
_start:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; uint8_t v___x_2522_; 
v___x_2520_ = lean_unsigned_to_nat(0u);
v___x_2521_ = lean_array_get_size(v_arr_2519_);
v___x_2522_ = lean_nat_dec_lt(v___x_2520_, v___x_2521_);
if (v___x_2522_ == 0)
{
return v_self_2518_;
}
else
{
size_t v___x_2523_; size_t v___x_2524_; lean_object* v___x_2525_; 
v___x_2523_ = ((size_t)0ULL);
v___x_2524_ = lean_usize_of_nat(v___x_2521_);
v___x_2525_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_arr_2519_, v___x_2523_, v___x_2524_, v_self_2518_);
return v___x_2525_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0___boxed(lean_object* v_self_2526_, lean_object* v_arr_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(v_self_2526_, v_arr_2527_);
lean_dec_ref(v_arr_2527_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(lean_object* v_as_2529_, size_t v_i_2530_, size_t v_stop_2531_, lean_object* v_b_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_){
_start:
{
uint8_t v___x_2540_; 
v___x_2540_ = lean_usize_dec_eq(v_i_2530_, v_stop_2531_);
if (v___x_2540_ == 0)
{
lean_object* v___x_2541_; lean_object* v_lib_2542_; lean_object* v_pkg_2543_; lean_object* v_name_2544_; lean_object* v_keyName_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2541_ = lean_array_uget_borrowed(v_as_2529_, v_i_2530_);
v_lib_2542_ = lean_ctor_get(v___x_2541_, 0);
v_pkg_2543_ = lean_ctor_get(v_lib_2542_, 0);
v_name_2544_ = lean_ctor_get(v___x_2541_, 1);
v_keyName_2545_ = lean_ctor_get(v_pkg_2543_, 2);
v___x_2546_ = l_Lake_Module_transImportsFacet;
lean_inc(v_name_2544_);
lean_inc(v_keyName_2545_);
v___x_2547_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2547_, 0, v_keyName_2545_);
lean_ctor_set(v___x_2547_, 1, v_name_2544_);
v___x_2548_ = l_Lake_Module_keyword;
lean_inc(v___x_2541_);
v___x_2549_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2547_);
lean_ctor_set(v___x_2549_, 1, v___x_2548_);
lean_ctor_set(v___x_2549_, 2, v___x_2541_);
lean_ctor_set(v___x_2549_, 3, v___x_2546_);
lean_inc_ref(v___y_2533_);
lean_inc_ref(v___y_2537_);
lean_inc(v___y_2536_);
lean_inc(v___y_2535_);
lean_inc(v___y_2534_);
v___x_2550_ = lean_apply_7(v___y_2533_, v___x_2549_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, lean_box(0));
if (lean_obj_tag(v___x_2550_) == 0)
{
lean_object* v_a_2551_; lean_object* v_a_2552_; lean_object* v___x_2553_; 
v_a_2551_ = lean_ctor_get(v___x_2550_, 0);
lean_inc(v_a_2551_);
v_a_2552_ = lean_ctor_get(v___x_2550_, 1);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2550_, 2);
v___x_2553_ = l_Lake_Job_await___redArg(v_a_2551_, v_a_2552_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; lean_object* v_a_2555_; lean_object* v___x_2556_; size_t v___x_2557_; size_t v___x_2558_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
v_a_2555_ = lean_ctor_get(v___x_2553_, 1);
lean_inc(v_a_2555_);
lean_dec_ref_known(v___x_2553_, 2);
v___x_2556_ = l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(v_b_2532_, v_a_2554_);
lean_dec(v_a_2554_);
v___x_2557_ = ((size_t)1ULL);
v___x_2558_ = lean_usize_add(v_i_2530_, v___x_2557_);
v_i_2530_ = v___x_2558_;
v_b_2532_ = v___x_2556_;
v___y_2538_ = v_a_2555_;
goto _start;
}
else
{
lean_object* v_a_2560_; lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
lean_dec_ref(v___y_2533_);
lean_dec_ref(v_b_2532_);
v_a_2560_ = lean_ctor_get(v___x_2553_, 0);
v_a_2561_ = lean_ctor_get(v___x_2553_, 1);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v___x_2553_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_inc(v_a_2560_);
lean_dec(v___x_2553_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2566_; 
if (v_isShared_2564_ == 0)
{
v___x_2566_ = v___x_2563_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_a_2560_);
lean_ctor_set(v_reuseFailAlloc_2567_, 1, v_a_2561_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
lean_dec_ref(v___y_2533_);
lean_dec_ref(v_b_2532_);
v_a_2569_ = lean_ctor_get(v___x_2550_, 0);
v_a_2570_ = lean_ctor_get(v___x_2550_, 1);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2572_ = v___x_2550_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_inc(v_a_2569_);
lean_dec(v___x_2550_);
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
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2569_);
lean_ctor_set(v_reuseFailAlloc_2576_, 1, v_a_2570_);
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
else
{
lean_object* v___x_2578_; 
lean_dec_ref(v___y_2533_);
v___x_2578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2578_, 0, v_b_2532_);
lean_ctor_set(v___x_2578_, 1, v___y_2538_);
return v___x_2578_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7___boxed(lean_object* v_as_2579_, lean_object* v_i_2580_, lean_object* v_stop_2581_, lean_object* v_b_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_){
_start:
{
size_t v_i_boxed_2590_; size_t v_stop_boxed_2591_; lean_object* v_res_2592_; 
v_i_boxed_2590_ = lean_unbox_usize(v_i_2580_);
lean_dec(v_i_2580_);
v_stop_boxed_2591_ = lean_unbox_usize(v_stop_2581_);
lean_dec(v_stop_2581_);
v_res_2592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_as_2579_, v_i_boxed_2590_, v_stop_boxed_2591_, v_b_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
lean_dec_ref(v___y_2587_);
lean_dec(v___y_2586_);
lean_dec(v___y_2585_);
lean_dec(v___y_2584_);
lean_dec_ref(v_as_2579_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(lean_object* v_as_2593_, size_t v_i_2594_, size_t v_stop_2595_, lean_object* v_b_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_){
_start:
{
uint8_t v___x_2604_; 
v___x_2604_ = lean_usize_dec_eq(v_i_2594_, v_stop_2595_);
if (v___x_2604_ == 0)
{
lean_object* v___x_2605_; lean_object* v_pkg_2606_; lean_object* v_name_2607_; lean_object* v_keyName_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; 
v___x_2605_ = lean_array_uget_borrowed(v_as_2593_, v_i_2594_);
v_pkg_2606_ = lean_ctor_get(v___x_2605_, 0);
v_name_2607_ = lean_ctor_get(v___x_2605_, 1);
v_keyName_2608_ = lean_ctor_get(v_pkg_2606_, 2);
v___x_2609_ = l_Lake_ExternLib_dynlibFacet;
lean_inc(v_name_2607_);
lean_inc(v_keyName_2608_);
v___x_2610_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2610_, 0, v_keyName_2608_);
lean_ctor_set(v___x_2610_, 1, v_name_2607_);
v___x_2611_ = l_Lake_ExternLib_keyword;
lean_inc(v___x_2605_);
v___x_2612_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2610_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
lean_ctor_set(v___x_2612_, 2, v___x_2605_);
lean_ctor_set(v___x_2612_, 3, v___x_2609_);
lean_inc_ref(v___y_2597_);
lean_inc_ref(v___y_2601_);
lean_inc(v___y_2600_);
lean_inc(v___y_2599_);
lean_inc(v___y_2598_);
v___x_2613_ = lean_apply_7(v___y_2597_, v___x_2612_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, lean_box(0));
if (lean_obj_tag(v___x_2613_) == 0)
{
lean_object* v_a_2614_; lean_object* v_a_2615_; lean_object* v___x_2616_; size_t v___x_2617_; size_t v___x_2618_; 
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
lean_inc(v_a_2614_);
v_a_2615_ = lean_ctor_get(v___x_2613_, 1);
lean_inc(v_a_2615_);
lean_dec_ref_known(v___x_2613_, 2);
v___x_2616_ = lean_array_push(v_b_2596_, v_a_2614_);
v___x_2617_ = ((size_t)1ULL);
v___x_2618_ = lean_usize_add(v_i_2594_, v___x_2617_);
v_i_2594_ = v___x_2618_;
v_b_2596_ = v___x_2616_;
v___y_2602_ = v_a_2615_;
goto _start;
}
else
{
lean_object* v_a_2620_; lean_object* v_a_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2628_; 
lean_dec_ref(v___y_2597_);
lean_dec_ref(v_b_2596_);
v_a_2620_ = lean_ctor_get(v___x_2613_, 0);
v_a_2621_ = lean_ctor_get(v___x_2613_, 1);
v_isSharedCheck_2628_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2628_ == 0)
{
v___x_2623_ = v___x_2613_;
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_a_2621_);
lean_inc(v_a_2620_);
lean_dec(v___x_2613_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2628_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2626_; 
if (v_isShared_2624_ == 0)
{
v___x_2626_ = v___x_2623_;
goto v_reusejp_2625_;
}
else
{
lean_object* v_reuseFailAlloc_2627_; 
v_reuseFailAlloc_2627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2627_, 0, v_a_2620_);
lean_ctor_set(v_reuseFailAlloc_2627_, 1, v_a_2621_);
v___x_2626_ = v_reuseFailAlloc_2627_;
goto v_reusejp_2625_;
}
v_reusejp_2625_:
{
return v___x_2626_;
}
}
}
}
else
{
lean_object* v___x_2629_; 
lean_dec_ref(v___y_2597_);
v___x_2629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2629_, 0, v_b_2596_);
lean_ctor_set(v___x_2629_, 1, v___y_2602_);
return v___x_2629_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2___boxed(lean_object* v_as_2630_, lean_object* v_i_2631_, lean_object* v_stop_2632_, lean_object* v_b_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_){
_start:
{
size_t v_i_boxed_2641_; size_t v_stop_boxed_2642_; lean_object* v_res_2643_; 
v_i_boxed_2641_ = lean_unbox_usize(v_i_2631_);
lean_dec(v_i_2631_);
v_stop_boxed_2642_ = lean_unbox_usize(v_stop_2632_);
lean_dec(v_stop_2632_);
v_res_2643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v_as_2630_, v_i_boxed_2641_, v_stop_boxed_2642_, v_b_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_);
lean_dec_ref(v___y_2638_);
lean_dec(v___y_2637_);
lean_dec(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v_as_2630_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(lean_object* v_as_2644_, size_t v_i_2645_, size_t v_stop_2646_, lean_object* v_b_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v_a_2656_; lean_object* v_a_2657_; uint8_t v___x_2661_; 
v___x_2661_ = lean_usize_dec_eq(v_i_2645_, v_stop_2646_);
if (v___x_2661_ == 0)
{
lean_object* v_fst_2662_; lean_object* v_snd_2663_; lean_object* v___x_2664_; lean_object* v_lib_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2702_; 
v_fst_2662_ = lean_ctor_get(v_b_2647_, 0);
v_snd_2663_ = lean_ctor_get(v_b_2647_, 1);
v___x_2664_ = lean_array_uget(v_as_2644_, v_i_2645_);
v_lib_2665_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2702_ == 0)
{
lean_object* v_unused_2703_; 
v_unused_2703_ = lean_ctor_get(v___x_2664_, 1);
lean_dec(v_unused_2703_);
v___x_2667_ = v___x_2664_;
v_isShared_2668_ = v_isSharedCheck_2702_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_lib_2665_);
lean_dec(v___x_2664_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2702_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v_pkg_2669_; lean_object* v_name_2670_; uint8_t v___x_2671_; 
v_pkg_2669_ = lean_ctor_get(v_lib_2665_, 0);
v_name_2670_ = lean_ctor_get(v_lib_2665_, 1);
lean_inc(v_name_2670_);
v___x_2671_ = l_Lean_NameSet_contains(v_fst_2662_, v_name_2670_);
if (v___x_2671_ == 0)
{
lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2699_; 
lean_inc(v_snd_2663_);
lean_inc(v_fst_2662_);
v_isSharedCheck_2699_ = !lean_is_exclusive(v_b_2647_);
if (v_isSharedCheck_2699_ == 0)
{
lean_object* v_unused_2700_; lean_object* v_unused_2701_; 
v_unused_2700_ = lean_ctor_get(v_b_2647_, 1);
lean_dec(v_unused_2700_);
v_unused_2701_ = lean_ctor_get(v_b_2647_, 0);
lean_dec(v_unused_2701_);
v___x_2673_ = v_b_2647_;
v_isShared_2674_ = v_isSharedCheck_2699_;
goto v_resetjp_2672_;
}
else
{
lean_dec(v_b_2647_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2699_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v_keyName_2675_; lean_object* v___x_2676_; lean_object* v___x_2678_; 
v_keyName_2675_ = lean_ctor_get(v_pkg_2669_, 2);
v___x_2676_ = l_Lake_LeanLib_sharedFacet;
lean_inc(v_name_2670_);
lean_inc(v_keyName_2675_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set_tag(v___x_2667_, 3);
lean_ctor_set(v___x_2667_, 1, v_name_2670_);
lean_ctor_set(v___x_2667_, 0, v_keyName_2675_);
v___x_2678_ = v___x_2667_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_keyName_2675_);
lean_ctor_set(v_reuseFailAlloc_2698_, 1, v_name_2670_);
v___x_2678_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2679_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2680_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2678_);
lean_ctor_set(v___x_2680_, 1, v___x_2679_);
lean_ctor_set(v___x_2680_, 2, v_lib_2665_);
lean_ctor_set(v___x_2680_, 3, v___x_2676_);
lean_inc_ref(v___y_2648_);
lean_inc_ref(v___y_2652_);
lean_inc(v___y_2651_);
lean_inc(v___y_2650_);
lean_inc(v___y_2649_);
v___x_2681_ = lean_apply_7(v___y_2648_, v___x_2680_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, lean_box(0));
if (lean_obj_tag(v___x_2681_) == 0)
{
lean_object* v_a_2682_; lean_object* v_a_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2687_; 
v_a_2682_ = lean_ctor_get(v___x_2681_, 0);
lean_inc(v_a_2682_);
v_a_2683_ = lean_ctor_get(v___x_2681_, 1);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2681_, 2);
v___x_2684_ = lean_array_push(v_snd_2663_, v_a_2682_);
v___x_2685_ = l_Lean_NameSet_insert(v_fst_2662_, v_name_2670_);
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 1, v___x_2684_);
lean_ctor_set(v___x_2673_, 0, v___x_2685_);
v___x_2687_ = v___x_2673_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2685_);
lean_ctor_set(v_reuseFailAlloc_2688_, 1, v___x_2684_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
v_a_2656_ = v___x_2687_;
v_a_2657_ = v_a_2683_;
goto v___jp_2655_;
}
}
else
{
lean_object* v_a_2689_; lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
lean_del_object(v___x_2673_);
lean_dec(v_name_2670_);
lean_dec(v_snd_2663_);
lean_dec(v_fst_2662_);
lean_dec_ref(v___y_2648_);
v_a_2689_ = lean_ctor_get(v___x_2681_, 0);
v_a_2690_ = lean_ctor_get(v___x_2681_, 1);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2681_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2692_ = v___x_2681_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_inc(v_a_2689_);
lean_dec(v___x_2681_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2695_; 
if (v_isShared_2693_ == 0)
{
v___x_2695_ = v___x_2692_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_a_2689_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v_a_2690_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
}
}
else
{
lean_dec(v_name_2670_);
lean_del_object(v___x_2667_);
lean_dec_ref(v_lib_2665_);
v_a_2656_ = v_b_2647_;
v_a_2657_ = v___y_2653_;
goto v___jp_2655_;
}
}
}
else
{
lean_object* v___x_2704_; 
lean_dec_ref(v___y_2648_);
v___x_2704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2704_, 0, v_b_2647_);
lean_ctor_set(v___x_2704_, 1, v___y_2653_);
return v___x_2704_;
}
v___jp_2655_:
{
size_t v___x_2658_; size_t v___x_2659_; 
v___x_2658_ = ((size_t)1ULL);
v___x_2659_ = lean_usize_add(v_i_2645_, v___x_2658_);
v_i_2645_ = v___x_2659_;
v_b_2647_ = v_a_2656_;
v___y_2653_ = v_a_2657_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6___boxed(lean_object* v_as_2705_, lean_object* v_i_2706_, lean_object* v_stop_2707_, lean_object* v_b_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_){
_start:
{
size_t v_i_boxed_2716_; size_t v_stop_boxed_2717_; lean_object* v_res_2718_; 
v_i_boxed_2716_ = lean_unbox_usize(v_i_2706_);
lean_dec(v_i_2706_);
v_stop_boxed_2717_ = lean_unbox_usize(v_stop_2707_);
lean_dec(v_stop_2707_);
v_res_2718_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_as_2705_, v_i_boxed_2716_, v_stop_boxed_2717_, v_b_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
lean_dec_ref(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec(v___y_2711_);
lean_dec(v___y_2710_);
lean_dec_ref(v_as_2705_);
return v_res_2718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(lean_object* v___x_2719_, lean_object* v_as_2720_, size_t v_i_2721_, size_t v_stop_2722_, lean_object* v_b_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_){
_start:
{
uint8_t v___x_2731_; 
v___x_2731_ = lean_usize_dec_eq(v_i_2721_, v_stop_2722_);
if (v___x_2731_ == 0)
{
lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2732_ = lean_array_uget_borrowed(v_as_2720_, v_i_2721_);
lean_inc_ref(v___y_2724_);
lean_inc(v___x_2732_);
lean_inc_ref(v___x_2719_);
v___x_2733_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(v___x_2719_, v___x_2732_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
if (lean_obj_tag(v___x_2733_) == 0)
{
lean_object* v_a_2734_; lean_object* v_a_2735_; lean_object* v___x_2736_; size_t v___x_2737_; size_t v___x_2738_; 
v_a_2734_ = lean_ctor_get(v___x_2733_, 0);
lean_inc(v_a_2734_);
v_a_2735_ = lean_ctor_get(v___x_2733_, 1);
lean_inc(v_a_2735_);
lean_dec_ref_known(v___x_2733_, 2);
v___x_2736_ = lean_array_push(v_b_2723_, v_a_2734_);
v___x_2737_ = ((size_t)1ULL);
v___x_2738_ = lean_usize_add(v_i_2721_, v___x_2737_);
v_i_2721_ = v___x_2738_;
v_b_2723_ = v___x_2736_;
v___y_2729_ = v_a_2735_;
goto _start;
}
else
{
lean_object* v_a_2740_; lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2748_; 
lean_dec_ref(v___y_2724_);
lean_dec_ref(v_b_2723_);
lean_dec_ref(v___x_2719_);
v_a_2740_ = lean_ctor_get(v___x_2733_, 0);
v_a_2741_ = lean_ctor_get(v___x_2733_, 1);
v_isSharedCheck_2748_ = !lean_is_exclusive(v___x_2733_);
if (v_isSharedCheck_2748_ == 0)
{
v___x_2743_ = v___x_2733_;
v_isShared_2744_ = v_isSharedCheck_2748_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_inc(v_a_2740_);
lean_dec(v___x_2733_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2748_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2746_; 
if (v_isShared_2744_ == 0)
{
v___x_2746_ = v___x_2743_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2747_; 
v_reuseFailAlloc_2747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2747_, 0, v_a_2740_);
lean_ctor_set(v_reuseFailAlloc_2747_, 1, v_a_2741_);
v___x_2746_ = v_reuseFailAlloc_2747_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
return v___x_2746_;
}
}
}
}
else
{
lean_object* v___x_2749_; 
lean_dec_ref(v___y_2724_);
lean_dec_ref(v___x_2719_);
v___x_2749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2749_, 0, v_b_2723_);
lean_ctor_set(v___x_2749_, 1, v___y_2729_);
return v___x_2749_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4___boxed(lean_object* v___x_2750_, lean_object* v_as_2751_, lean_object* v_i_2752_, lean_object* v_stop_2753_, lean_object* v_b_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
size_t v_i_boxed_2762_; size_t v_stop_boxed_2763_; lean_object* v_res_2764_; 
v_i_boxed_2762_ = lean_unbox_usize(v_i_2752_);
lean_dec(v_i_2752_);
v_stop_boxed_2763_ = lean_unbox_usize(v_stop_2753_);
lean_dec(v_stop_2753_);
v_res_2764_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v___x_2750_, v_as_2751_, v_i_boxed_2762_, v_stop_boxed_2763_, v_b_2754_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec_ref(v___y_2759_);
lean_dec(v___y_2758_);
lean_dec(v___y_2757_);
lean_dec(v___y_2756_);
lean_dec_ref(v_as_2751_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(lean_object* v___x_2765_, lean_object* v_as_2766_, size_t v_i_2767_, size_t v_stop_2768_, lean_object* v_b_2769_){
_start:
{
lean_object* v___y_2771_; uint8_t v___x_2775_; 
v___x_2775_ = lean_usize_dec_eq(v_i_2767_, v_stop_2768_);
if (v___x_2775_ == 0)
{
lean_object* v_toConfigDecl_2776_; lean_object* v_name_2777_; lean_object* v_kind_2778_; lean_object* v_config_2779_; lean_object* v___x_2780_; uint8_t v___x_2781_; 
v_toConfigDecl_2776_ = lean_array_uget_borrowed(v_as_2766_, v_i_2767_);
v_name_2777_ = lean_ctor_get(v_toConfigDecl_2776_, 1);
v_kind_2778_ = lean_ctor_get(v_toConfigDecl_2776_, 2);
v_config_2779_ = lean_ctor_get(v_toConfigDecl_2776_, 3);
v___x_2780_ = l_Lake_ExternLib_keyword;
v___x_2781_ = lean_name_eq(v_kind_2778_, v___x_2780_);
if (v___x_2781_ == 0)
{
v___y_2771_ = v_b_2769_;
goto v___jp_2770_;
}
else
{
lean_object* v___x_2782_; lean_object* v___x_2783_; 
lean_inc(v_config_2779_);
lean_inc(v_name_2777_);
lean_inc_ref(v___x_2765_);
v___x_2782_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2765_);
lean_ctor_set(v___x_2782_, 1, v_name_2777_);
lean_ctor_set(v___x_2782_, 2, v_config_2779_);
v___x_2783_ = lean_array_push(v_b_2769_, v___x_2782_);
v___y_2771_ = v___x_2783_;
goto v___jp_2770_;
}
}
else
{
lean_dec_ref(v___x_2765_);
return v_b_2769_;
}
v___jp_2770_:
{
size_t v___x_2772_; size_t v___x_2773_; 
v___x_2772_ = ((size_t)1ULL);
v___x_2773_ = lean_usize_add(v_i_2767_, v___x_2772_);
v_i_2767_ = v___x_2773_;
v_b_2769_ = v___y_2771_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3___boxed(lean_object* v___x_2784_, lean_object* v_as_2785_, lean_object* v_i_2786_, lean_object* v_stop_2787_, lean_object* v_b_2788_){
_start:
{
size_t v_i_boxed_2789_; size_t v_stop_boxed_2790_; lean_object* v_res_2791_; 
v_i_boxed_2789_ = lean_unbox_usize(v_i_2786_);
lean_dec(v_i_2786_);
v_stop_boxed_2790_ = lean_unbox_usize(v_stop_2787_);
lean_dec(v_stop_2787_);
v_res_2791_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v___x_2784_, v_as_2785_, v_i_boxed_2789_, v_stop_boxed_2790_, v_b_2788_);
lean_dec_ref(v_as_2785_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(lean_object* v_as_2792_, size_t v_i_2793_, size_t v_stop_2794_, lean_object* v_b_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_){
_start:
{
uint8_t v___x_2803_; 
v___x_2803_ = lean_usize_dec_eq(v_i_2793_, v_stop_2794_);
if (v___x_2803_ == 0)
{
lean_object* v___x_2804_; lean_object* v_lib_2805_; lean_object* v_config_2806_; lean_object* v_nativeFacets_2807_; uint8_t v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; size_t v_sz_2811_; size_t v___x_2812_; lean_object* v___x_2813_; 
v___x_2804_ = lean_array_uget_borrowed(v_as_2792_, v_i_2793_);
v_lib_2805_ = lean_ctor_get(v___x_2804_, 0);
v_config_2806_ = lean_ctor_get(v_lib_2805_, 2);
v_nativeFacets_2807_ = lean_ctor_get(v_config_2806_, 8);
v___x_2808_ = 1;
v___x_2809_ = lean_box(v___x_2808_);
lean_inc_ref(v_nativeFacets_2807_);
v___x_2810_ = lean_apply_1(v_nativeFacets_2807_, v___x_2809_);
v_sz_2811_ = lean_array_size(v___x_2810_);
v___x_2812_ = ((size_t)0ULL);
lean_inc_ref(v___y_2796_);
lean_inc(v___x_2804_);
v___x_2813_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v___x_2804_, v_sz_2811_, v___x_2812_, v___x_2810_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v_a_2815_; lean_object* v___x_2816_; size_t v___x_2817_; size_t v___x_2818_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_a_2814_);
v_a_2815_ = lean_ctor_get(v___x_2813_, 1);
lean_inc(v_a_2815_);
lean_dec_ref_known(v___x_2813_, 2);
v___x_2816_ = l_Array_append___redArg(v_b_2795_, v_a_2814_);
lean_dec(v_a_2814_);
v___x_2817_ = ((size_t)1ULL);
v___x_2818_ = lean_usize_add(v_i_2793_, v___x_2817_);
v_i_2793_ = v___x_2818_;
v_b_2795_ = v___x_2816_;
v___y_2801_ = v_a_2815_;
goto _start;
}
else
{
lean_dec_ref(v___y_2796_);
lean_dec_ref(v_b_2795_);
return v___x_2813_;
}
}
else
{
lean_object* v___x_2820_; 
lean_dec_ref(v___y_2796_);
v___x_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2820_, 0, v_b_2795_);
lean_ctor_set(v___x_2820_, 1, v___y_2801_);
return v___x_2820_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9___boxed(lean_object* v_as_2821_, lean_object* v_i_2822_, lean_object* v_stop_2823_, lean_object* v_b_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
size_t v_i_boxed_2832_; size_t v_stop_boxed_2833_; lean_object* v_res_2834_; 
v_i_boxed_2832_ = lean_unbox_usize(v_i_2822_);
lean_dec(v_i_2822_);
v_stop_boxed_2833_ = lean_unbox_usize(v_stop_2823_);
lean_dec(v_stop_2823_);
v_res_2834_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_as_2821_, v_i_boxed_2832_, v_stop_boxed_2833_, v_b_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v___y_2828_);
lean_dec(v___y_2827_);
lean_dec(v___y_2826_);
lean_dec_ref(v_as_2821_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(lean_object* v_self_2835_, lean_object* v_dir_2836_, lean_object* v___x_2837_, lean_object* v_targetDecls_2838_, lean_object* v_pkg_2839_, lean_object* v_name_2840_, lean_object* v___x_2841_, lean_object* v_config_2842_, lean_object* v_config_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_){
_start:
{
lean_object* v_a_2852_; lean_object* v_a_2853_; lean_object* v___y_2856_; lean_object* v___y_2857_; lean_object* v___y_2858_; lean_object* v___y_2859_; lean_object* v___y_2860_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v_a_2863_; lean_object* v_a_2864_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___y_2887_; lean_object* v___y_2888_; lean_object* v___y_2889_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2900_; lean_object* v___y_2901_; lean_object* v___y_2902_; lean_object* v___y_2903_; lean_object* v___y_2904_; lean_object* v___y_2905_; lean_object* v___y_2916_; lean_object* v___y_2917_; lean_object* v___y_2918_; lean_object* v___y_2919_; lean_object* v___y_2920_; lean_object* v___y_2921_; lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v_a_2924_; lean_object* v_a_2925_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2949_; lean_object* v___y_2950_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2953_; lean_object* v___y_2954_; lean_object* v___y_2955_; lean_object* v___y_2956_; lean_object* v_snd_2957_; lean_object* v_a_2958_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v_a_2980_; lean_object* v_a_2981_; lean_object* v___y_3005_; lean_object* v___y_3006_; lean_object* v___y_3007_; lean_object* v___y_3008_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___x_3020_; 
lean_inc_ref(v___y_2844_);
lean_inc_ref(v___y_2848_);
lean_inc(v___y_2847_);
lean_inc(v___y_2846_);
lean_inc(v___x_2837_);
v___x_3020_ = lean_apply_7(v___y_2844_, v___x_2841_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, lean_box(0));
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v_a_3022_; lean_object* v___x_3023_; 
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3021_);
v_a_3022_ = lean_ctor_get(v___x_3020_, 1);
lean_inc(v_a_3022_);
lean_dec_ref_known(v___x_3020_, 2);
v___x_3023_ = l_Lake_Job_await___redArg(v_a_3021_, v_a_3022_);
if (lean_obj_tag(v___x_3023_) == 0)
{
lean_object* v_a_3024_; lean_object* v_a_3025_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v_a_3036_; lean_object* v_a_3037_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3056_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v_a_3071_; lean_object* v_a_3072_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; uint8_t v___x_3099_; 
v_a_3024_ = lean_ctor_get(v___x_3023_, 0);
lean_inc(v_a_3024_);
v_a_3025_ = lean_ctor_get(v___x_3023_, 1);
lean_inc(v_a_3025_);
lean_dec_ref_known(v___x_3023_, 2);
v___x_3096_ = lean_unsigned_to_nat(0u);
v___x_3097_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_3098_ = lean_array_get_size(v_a_3024_);
v___x_3099_ = lean_nat_dec_lt(v___x_3096_, v___x_3098_);
if (v___x_3099_ == 0)
{
v_a_3071_ = v___x_3097_;
v_a_3072_ = v_a_3025_;
goto v___jp_3070_;
}
else
{
size_t v___x_3100_; size_t v___x_3101_; lean_object* v___x_3102_; 
v___x_3100_ = ((size_t)0ULL);
v___x_3101_ = lean_usize_of_nat(v___x_3098_);
lean_inc_ref(v___y_2844_);
v___x_3102_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_a_3024_, v___x_3100_, v___x_3101_, v___x_3097_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v_a_3025_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_a_3103_; lean_object* v_a_3104_; 
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
lean_inc(v_a_3103_);
v_a_3104_ = lean_ctor_get(v___x_3102_, 1);
lean_inc(v_a_3104_);
lean_dec_ref_known(v___x_3102_, 2);
v_a_3071_ = v_a_3103_;
v_a_3072_ = v_a_3104_;
goto v___jp_3070_;
}
else
{
lean_object* v_a_3105_; lean_object* v_a_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3113_; 
lean_dec(v_a_3024_);
lean_dec_ref(v___y_2844_);
lean_dec_ref(v_config_2842_);
lean_dec(v_name_2840_);
lean_dec_ref(v_pkg_2839_);
lean_dec(v___x_2837_);
lean_dec_ref(v_dir_2836_);
lean_dec_ref(v_self_2835_);
v_a_3105_ = lean_ctor_get(v___x_3102_, 0);
v_a_3106_ = lean_ctor_get(v___x_3102_, 1);
v_isSharedCheck_3113_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3113_ == 0)
{
v___x_3108_ = v___x_3102_;
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_a_3106_);
lean_inc(v_a_3105_);
lean_dec(v___x_3102_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3113_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
lean_object* v___x_3111_; 
if (v_isShared_3109_ == 0)
{
v___x_3111_ = v___x_3108_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v_a_3105_);
lean_ctor_set(v_reuseFailAlloc_3112_, 1, v_a_3106_);
v___x_3111_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
return v___x_3111_;
}
}
}
}
v___jp_3026_:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; uint8_t v___x_3040_; 
v___x_3038_ = l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5;
v___x_3039_ = lean_array_get_size(v_a_3024_);
v___x_3040_ = lean_nat_dec_lt(v___y_3030_, v___x_3039_);
if (v___x_3040_ == 0)
{
lean_dec(v_a_3024_);
v___y_2970_ = v___y_3027_;
v___y_2971_ = v___y_3028_;
v___y_2972_ = v___y_3029_;
v___y_2973_ = v___y_3030_;
v___y_2974_ = v___y_3031_;
v___y_2975_ = v___y_3032_;
v___y_2976_ = v_a_3036_;
v___y_2977_ = v___y_3033_;
v___y_2978_ = v___y_3034_;
v___y_2979_ = v___y_3035_;
v_a_2980_ = v___x_3038_;
v_a_2981_ = v_a_3037_;
goto v___jp_2969_;
}
else
{
uint8_t v___x_3041_; 
v___x_3041_ = lean_nat_dec_le(v___x_3039_, v___x_3039_);
if (v___x_3041_ == 0)
{
if (v___x_3040_ == 0)
{
lean_dec(v_a_3024_);
v___y_2970_ = v___y_3027_;
v___y_2971_ = v___y_3028_;
v___y_2972_ = v___y_3029_;
v___y_2973_ = v___y_3030_;
v___y_2974_ = v___y_3031_;
v___y_2975_ = v___y_3032_;
v___y_2976_ = v_a_3036_;
v___y_2977_ = v___y_3033_;
v___y_2978_ = v___y_3034_;
v___y_2979_ = v___y_3035_;
v_a_2980_ = v___x_3038_;
v_a_2981_ = v_a_3037_;
goto v___jp_2969_;
}
else
{
size_t v___x_3042_; size_t v___x_3043_; lean_object* v___x_3044_; 
v___x_3042_ = ((size_t)0ULL);
v___x_3043_ = lean_usize_of_nat(v___x_3039_);
lean_inc_ref(v___y_2844_);
v___x_3044_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_a_3024_, v___x_3042_, v___x_3043_, v___x_3038_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v_a_3037_);
lean_dec(v_a_3024_);
v___y_3005_ = v___y_3028_;
v___y_3006_ = v___y_3027_;
v___y_3007_ = v___y_3029_;
v___y_3008_ = v___y_3030_;
v___y_3009_ = v___y_3031_;
v___y_3010_ = v___y_3032_;
v___y_3011_ = v_a_3036_;
v___y_3012_ = v___y_3034_;
v___y_3013_ = v___y_3033_;
v___y_3014_ = v___y_3035_;
v___y_3015_ = v___x_3044_;
goto v___jp_3004_;
}
}
else
{
size_t v___x_3045_; size_t v___x_3046_; lean_object* v___x_3047_; 
v___x_3045_ = ((size_t)0ULL);
v___x_3046_ = lean_usize_of_nat(v___x_3039_);
lean_inc_ref(v___y_2844_);
v___x_3047_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_a_3024_, v___x_3045_, v___x_3046_, v___x_3038_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v_a_3037_);
lean_dec(v_a_3024_);
v___y_3005_ = v___y_3028_;
v___y_3006_ = v___y_3027_;
v___y_3007_ = v___y_3029_;
v___y_3008_ = v___y_3030_;
v___y_3009_ = v___y_3031_;
v___y_3010_ = v___y_3032_;
v___y_3011_ = v_a_3036_;
v___y_3012_ = v___y_3034_;
v___y_3013_ = v___y_3033_;
v___y_3014_ = v___y_3035_;
v___y_3015_ = v___x_3047_;
goto v___jp_3004_;
}
}
}
v___jp_3048_:
{
if (lean_obj_tag(v___y_3058_) == 0)
{
lean_object* v_a_3059_; lean_object* v_a_3060_; 
v_a_3059_ = lean_ctor_get(v___y_3058_, 0);
lean_inc(v_a_3059_);
v_a_3060_ = lean_ctor_get(v___y_3058_, 1);
lean_inc(v_a_3060_);
lean_dec_ref_known(v___y_3058_, 2);
v___y_3027_ = v___y_3050_;
v___y_3028_ = v___y_3049_;
v___y_3029_ = v___y_3051_;
v___y_3030_ = v___y_3052_;
v___y_3031_ = v___y_3053_;
v___y_3032_ = v___y_3054_;
v___y_3033_ = v___y_3056_;
v___y_3034_ = v___y_3055_;
v___y_3035_ = v___y_3057_;
v_a_3036_ = v_a_3059_;
v_a_3037_ = v_a_3060_;
goto v___jp_3026_;
}
else
{
lean_object* v_a_3061_; lean_object* v_a_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3069_; 
lean_dec_ref(v___y_3057_);
lean_dec_ref(v___y_3054_);
lean_dec_ref(v___y_3053_);
lean_dec_ref(v___y_3051_);
lean_dec_ref(v___y_3049_);
lean_dec(v_a_3024_);
lean_dec_ref(v___y_2844_);
lean_dec(v_name_2840_);
lean_dec_ref(v_pkg_2839_);
lean_dec(v___x_2837_);
lean_dec_ref(v_dir_2836_);
lean_dec_ref(v_self_2835_);
v_a_3061_ = lean_ctor_get(v___y_3058_, 0);
v_a_3062_ = lean_ctor_get(v___y_3058_, 1);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___y_3058_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3064_ = v___y_3058_;
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_a_3062_);
lean_inc(v_a_3061_);
lean_dec(v___y_3058_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3067_; 
if (v_isShared_3065_ == 0)
{
v___x_3067_ = v___x_3064_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_a_3061_);
lean_ctor_set(v_reuseFailAlloc_3068_, 1, v_a_3062_);
v___x_3067_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
return v___x_3067_;
}
}
}
}
v___jp_3070_:
{
lean_object* v_toLeanConfig_3073_; lean_object* v_toLeanConfig_3074_; lean_object* v_buildDir_3075_; lean_object* v_nativeLibDir_3076_; lean_object* v_moreLinkObjs_3077_; lean_object* v_moreLinkLibs_3078_; lean_object* v_moreLinkArgs_3079_; lean_object* v_weakLinkArgs_3080_; lean_object* v_moreLinkObjs_3081_; lean_object* v_moreLinkLibs_3082_; lean_object* v_moreLinkArgs_3083_; lean_object* v_weakLinkArgs_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; uint8_t v___x_3088_; 
v_toLeanConfig_3073_ = lean_ctor_get(v_config_2842_, 1);
lean_inc_ref(v_toLeanConfig_3073_);
v_toLeanConfig_3074_ = lean_ctor_get(v_config_2843_, 0);
v_buildDir_3075_ = lean_ctor_get(v_config_2842_, 5);
lean_inc_ref(v_buildDir_3075_);
v_nativeLibDir_3076_ = lean_ctor_get(v_config_2842_, 7);
lean_inc_ref(v_nativeLibDir_3076_);
lean_dec_ref(v_config_2842_);
v_moreLinkObjs_3077_ = lean_ctor_get(v_toLeanConfig_3073_, 6);
lean_inc_ref(v_moreLinkObjs_3077_);
v_moreLinkLibs_3078_ = lean_ctor_get(v_toLeanConfig_3073_, 7);
lean_inc_ref(v_moreLinkLibs_3078_);
v_moreLinkArgs_3079_ = lean_ctor_get(v_toLeanConfig_3073_, 8);
lean_inc_ref(v_moreLinkArgs_3079_);
v_weakLinkArgs_3080_ = lean_ctor_get(v_toLeanConfig_3073_, 9);
lean_inc_ref(v_weakLinkArgs_3080_);
lean_dec_ref(v_toLeanConfig_3073_);
v_moreLinkObjs_3081_ = lean_ctor_get(v_toLeanConfig_3074_, 6);
v_moreLinkLibs_3082_ = lean_ctor_get(v_toLeanConfig_3074_, 7);
v_moreLinkArgs_3083_ = lean_ctor_get(v_toLeanConfig_3074_, 8);
v_weakLinkArgs_3084_ = lean_ctor_get(v_toLeanConfig_3074_, 9);
v___x_3085_ = l_Array_append___redArg(v_moreLinkObjs_3077_, v_moreLinkObjs_3081_);
v___x_3086_ = lean_unsigned_to_nat(0u);
v___x_3087_ = lean_array_get_size(v___x_3085_);
v___x_3088_ = lean_nat_dec_lt(v___x_3086_, v___x_3087_);
if (v___x_3088_ == 0)
{
lean_dec_ref(v___x_3085_);
v___y_3027_ = v_moreLinkLibs_3082_;
v___y_3028_ = v_nativeLibDir_3076_;
v___y_3029_ = v_moreLinkLibs_3078_;
v___y_3030_ = v___x_3086_;
v___y_3031_ = v_buildDir_3075_;
v___y_3032_ = v_weakLinkArgs_3080_;
v___y_3033_ = v_moreLinkArgs_3083_;
v___y_3034_ = v_weakLinkArgs_3084_;
v___y_3035_ = v_moreLinkArgs_3079_;
v_a_3036_ = v_a_3071_;
v_a_3037_ = v_a_3072_;
goto v___jp_3026_;
}
else
{
uint8_t v___x_3089_; 
v___x_3089_ = lean_nat_dec_le(v___x_3087_, v___x_3087_);
if (v___x_3089_ == 0)
{
if (v___x_3088_ == 0)
{
lean_dec_ref(v___x_3085_);
v___y_3027_ = v_moreLinkLibs_3082_;
v___y_3028_ = v_nativeLibDir_3076_;
v___y_3029_ = v_moreLinkLibs_3078_;
v___y_3030_ = v___x_3086_;
v___y_3031_ = v_buildDir_3075_;
v___y_3032_ = v_weakLinkArgs_3080_;
v___y_3033_ = v_moreLinkArgs_3083_;
v___y_3034_ = v_weakLinkArgs_3084_;
v___y_3035_ = v_moreLinkArgs_3079_;
v_a_3036_ = v_a_3071_;
v_a_3037_ = v_a_3072_;
goto v___jp_3026_;
}
else
{
size_t v___x_3090_; size_t v___x_3091_; lean_object* v___x_3092_; 
v___x_3090_ = ((size_t)0ULL);
v___x_3091_ = lean_usize_of_nat(v___x_3087_);
lean_inc_ref(v___y_2844_);
lean_inc_ref(v_pkg_2839_);
v___x_3092_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v_pkg_2839_, v___x_3085_, v___x_3090_, v___x_3091_, v_a_3071_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v_a_3072_);
lean_dec_ref(v___x_3085_);
v___y_3049_ = v_nativeLibDir_3076_;
v___y_3050_ = v_moreLinkLibs_3082_;
v___y_3051_ = v_moreLinkLibs_3078_;
v___y_3052_ = v___x_3086_;
v___y_3053_ = v_buildDir_3075_;
v___y_3054_ = v_weakLinkArgs_3080_;
v___y_3055_ = v_weakLinkArgs_3084_;
v___y_3056_ = v_moreLinkArgs_3083_;
v___y_3057_ = v_moreLinkArgs_3079_;
v___y_3058_ = v___x_3092_;
goto v___jp_3048_;
}
}
else
{
size_t v___x_3093_; size_t v___x_3094_; lean_object* v___x_3095_; 
v___x_3093_ = ((size_t)0ULL);
v___x_3094_ = lean_usize_of_nat(v___x_3087_);
lean_inc_ref(v___y_2844_);
lean_inc_ref(v_pkg_2839_);
v___x_3095_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v_pkg_2839_, v___x_3085_, v___x_3093_, v___x_3094_, v_a_3071_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v_a_3072_);
lean_dec_ref(v___x_3085_);
v___y_3049_ = v_nativeLibDir_3076_;
v___y_3050_ = v_moreLinkLibs_3082_;
v___y_3051_ = v_moreLinkLibs_3078_;
v___y_3052_ = v___x_3086_;
v___y_3053_ = v_buildDir_3075_;
v___y_3054_ = v_weakLinkArgs_3080_;
v___y_3055_ = v_weakLinkArgs_3084_;
v___y_3056_ = v_moreLinkArgs_3083_;
v___y_3057_ = v_moreLinkArgs_3079_;
v___y_3058_ = v___x_3095_;
goto v___jp_3048_;
}
}
}
}
else
{
lean_object* v_a_3114_; lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3122_; 
lean_dec_ref(v___y_2844_);
lean_dec_ref(v_config_2842_);
lean_dec(v_name_2840_);
lean_dec_ref(v_pkg_2839_);
lean_dec(v___x_2837_);
lean_dec_ref(v_dir_2836_);
lean_dec_ref(v_self_2835_);
v_a_3114_ = lean_ctor_get(v___x_3023_, 0);
v_a_3115_ = lean_ctor_get(v___x_3023_, 1);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_3023_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3117_ = v___x_3023_;
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_inc(v_a_3114_);
lean_dec(v___x_3023_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3120_; 
if (v_isShared_3118_ == 0)
{
v___x_3120_ = v___x_3117_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_a_3114_);
lean_ctor_set(v_reuseFailAlloc_3121_, 1, v_a_3115_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
else
{
lean_object* v_a_3123_; lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3131_; 
lean_dec_ref(v___y_2844_);
lean_dec_ref(v_config_2842_);
lean_dec(v_name_2840_);
lean_dec_ref(v_pkg_2839_);
lean_dec(v___x_2837_);
lean_dec_ref(v_dir_2836_);
lean_dec_ref(v_self_2835_);
v_a_3123_ = lean_ctor_get(v___x_3020_, 0);
v_a_3124_ = lean_ctor_get(v___x_3020_, 1);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3126_ = v___x_3020_;
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_inc(v_a_3123_);
lean_dec(v___x_3020_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v___x_3129_; 
if (v_isShared_3127_ == 0)
{
v___x_3129_ = v___x_3126_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_a_3123_);
lean_ctor_set(v_reuseFailAlloc_3130_, 1, v_a_3124_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
v___jp_2851_:
{
lean_object* v___x_2854_; 
v___x_2854_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2854_, 0, v_a_2852_);
lean_ctor_set(v___x_2854_, 1, v_a_2853_);
return v___x_2854_;
}
v___jp_2855_:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; uint8_t v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; uint8_t v___x_2875_; uint8_t v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
lean_inc_ref(v_self_2835_);
v___x_2865_ = l_Lake_LeanLib_libName(v_self_2835_);
v___x_2866_ = l_System_FilePath_normalize(v___y_2857_);
v___x_2867_ = l_Lake_joinRelative(v_dir_2836_, v___x_2866_);
v___x_2868_ = l_System_FilePath_normalize(v___y_2856_);
v___x_2869_ = l_Lake_joinRelative(v___x_2867_, v___x_2868_);
v___x_2870_ = 0;
v___x_2871_ = l_Lake_nameToSharedLib(v___x_2865_, v___x_2870_);
v___x_2872_ = l_Lake_joinRelative(v___x_2869_, v___x_2871_);
v___x_2873_ = l_Array_append___redArg(v___y_2858_, v___y_2861_);
v___x_2874_ = l_Array_append___redArg(v___y_2862_, v___y_2860_);
v___x_2875_ = l_Lake_LeanLib_isPlugin(v_self_2835_);
v___x_2876_ = l_System_Platform_isWindows;
v___x_2877_ = lean_box(0);
v___x_2878_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_2879_ = l_Lake_buildLeanSharedLib(v___x_2865_, v___x_2872_, v___y_2859_, v_a_2863_, v___x_2873_, v___x_2874_, v___x_2875_, v___x_2876_, v___x_2877_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v___x_2878_);
lean_dec(v___x_2837_);
lean_dec_ref(v___y_2859_);
v___x_2880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2879_);
lean_ctor_set(v___x_2880_, 1, v_a_2864_);
return v___x_2880_;
}
v___jp_2881_:
{
if (lean_obj_tag(v___y_2889_) == 0)
{
lean_object* v_a_2890_; lean_object* v_a_2891_; 
v_a_2890_ = lean_ctor_get(v___y_2889_, 0);
lean_inc(v_a_2890_);
v_a_2891_ = lean_ctor_get(v___y_2889_, 1);
lean_inc(v_a_2891_);
lean_dec_ref_known(v___y_2889_, 2);
v___y_2856_ = v___y_2882_;
v___y_2857_ = v___y_2883_;
v___y_2858_ = v___y_2884_;
v___y_2859_ = v___y_2885_;
v___y_2860_ = v___y_2887_;
v___y_2861_ = v___y_2886_;
v___y_2862_ = v___y_2888_;
v_a_2863_ = v_a_2890_;
v_a_2864_ = v_a_2891_;
goto v___jp_2855_;
}
else
{
lean_object* v_a_2892_; lean_object* v_a_2893_; 
lean_dec_ref(v___y_2888_);
lean_dec_ref(v___y_2885_);
lean_dec_ref(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec_ref(v___y_2882_);
lean_dec_ref(v___y_2844_);
lean_dec(v___x_2837_);
lean_dec_ref(v_dir_2836_);
lean_dec_ref(v_self_2835_);
v_a_2892_ = lean_ctor_get(v___y_2889_, 0);
lean_inc(v_a_2892_);
v_a_2893_ = lean_ctor_get(v___y_2889_, 1);
lean_inc(v_a_2893_);
lean_dec_ref_known(v___y_2889_, 2);
v_a_2852_ = v_a_2892_;
v_a_2853_ = v_a_2893_;
goto v___jp_2851_;
}
}
v___jp_2894_:
{
lean_object* v___x_2906_; uint8_t v___x_2907_; 
v___x_2906_ = lean_array_get_size(v___y_2905_);
v___x_2907_ = lean_nat_dec_lt(v___y_2898_, v___x_2906_);
if (v___x_2907_ == 0)
{
lean_dec_ref(v___y_2905_);
v___y_2856_ = v___y_2896_;
v___y_2857_ = v___y_2899_;
v___y_2858_ = v___y_2900_;
v___y_2859_ = v___y_2901_;
v___y_2860_ = v___y_2903_;
v___y_2861_ = v___y_2902_;
v___y_2862_ = v___y_2904_;
v_a_2863_ = v___y_2897_;
v_a_2864_ = v___y_2895_;
goto v___jp_2855_;
}
else
{
uint8_t v___x_2908_; 
v___x_2908_ = lean_nat_dec_le(v___x_2906_, v___x_2906_);
if (v___x_2908_ == 0)
{
if (v___x_2907_ == 0)
{
lean_dec_ref(v___y_2905_);
v___y_2856_ = v___y_2896_;
v___y_2857_ = v___y_2899_;
v___y_2858_ = v___y_2900_;
v___y_2859_ = v___y_2901_;
v___y_2860_ = v___y_2903_;
v___y_2861_ = v___y_2902_;
v___y_2862_ = v___y_2904_;
v_a_2863_ = v___y_2897_;
v_a_2864_ = v___y_2895_;
goto v___jp_2855_;
}
else
{
size_t v___x_2909_; size_t v___x_2910_; lean_object* v___x_2911_; 
v___x_2909_ = ((size_t)0ULL);
v___x_2910_ = lean_usize_of_nat(v___x_2906_);
lean_inc_ref(v___y_2844_);
v___x_2911_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v___y_2905_, v___x_2909_, v___x_2910_, v___y_2897_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2895_);
lean_dec_ref(v___y_2905_);
v___y_2882_ = v___y_2896_;
v___y_2883_ = v___y_2899_;
v___y_2884_ = v___y_2900_;
v___y_2885_ = v___y_2901_;
v___y_2886_ = v___y_2902_;
v___y_2887_ = v___y_2903_;
v___y_2888_ = v___y_2904_;
v___y_2889_ = v___x_2911_;
goto v___jp_2881_;
}
}
else
{
size_t v___x_2912_; size_t v___x_2913_; lean_object* v___x_2914_; 
v___x_2912_ = ((size_t)0ULL);
v___x_2913_ = lean_usize_of_nat(v___x_2906_);
lean_inc_ref(v___y_2844_);
v___x_2914_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v___y_2905_, v___x_2912_, v___x_2913_, v___y_2897_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2895_);
lean_dec_ref(v___y_2905_);
v___y_2882_ = v___y_2896_;
v___y_2883_ = v___y_2899_;
v___y_2884_ = v___y_2900_;
v___y_2885_ = v___y_2901_;
v___y_2886_ = v___y_2902_;
v___y_2887_ = v___y_2903_;
v___y_2888_ = v___y_2904_;
v___y_2889_ = v___x_2914_;
goto v___jp_2881_;
}
}
}
v___jp_2915_:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; uint8_t v___x_2928_; 
v___x_2926_ = lean_mk_empty_array_with_capacity(v___y_2917_);
v___x_2927_ = lean_array_get_size(v_targetDecls_2838_);
v___x_2928_ = lean_nat_dec_lt(v___y_2917_, v___x_2927_);
if (v___x_2928_ == 0)
{
lean_dec_ref(v_pkg_2839_);
v___y_2895_ = v_a_2925_;
v___y_2896_ = v___y_2916_;
v___y_2897_ = v_a_2924_;
v___y_2898_ = v___y_2917_;
v___y_2899_ = v___y_2918_;
v___y_2900_ = v___y_2919_;
v___y_2901_ = v___y_2920_;
v___y_2902_ = v___y_2922_;
v___y_2903_ = v___y_2921_;
v___y_2904_ = v___y_2923_;
v___y_2905_ = v___x_2926_;
goto v___jp_2894_;
}
else
{
size_t v___x_2929_; size_t v___x_2930_; lean_object* v___x_2931_; 
v___x_2929_ = ((size_t)0ULL);
v___x_2930_ = lean_usize_of_nat(v___x_2927_);
v___x_2931_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v_pkg_2839_, v_targetDecls_2838_, v___x_2929_, v___x_2930_, v___x_2926_);
v___y_2895_ = v_a_2925_;
v___y_2896_ = v___y_2916_;
v___y_2897_ = v_a_2924_;
v___y_2898_ = v___y_2917_;
v___y_2899_ = v___y_2918_;
v___y_2900_ = v___y_2919_;
v___y_2901_ = v___y_2920_;
v___y_2902_ = v___y_2922_;
v___y_2903_ = v___y_2921_;
v___y_2904_ = v___y_2923_;
v___y_2905_ = v___x_2931_;
goto v___jp_2894_;
}
}
v___jp_2932_:
{
if (lean_obj_tag(v___y_2941_) == 0)
{
lean_object* v_a_2942_; lean_object* v_a_2943_; 
v_a_2942_ = lean_ctor_get(v___y_2941_, 0);
lean_inc(v_a_2942_);
v_a_2943_ = lean_ctor_get(v___y_2941_, 1);
lean_inc(v_a_2943_);
lean_dec_ref_known(v___y_2941_, 2);
v___y_2916_ = v___y_2933_;
v___y_2917_ = v___y_2934_;
v___y_2918_ = v___y_2935_;
v___y_2919_ = v___y_2936_;
v___y_2920_ = v___y_2937_;
v___y_2921_ = v___y_2939_;
v___y_2922_ = v___y_2938_;
v___y_2923_ = v___y_2940_;
v_a_2924_ = v_a_2942_;
v_a_2925_ = v_a_2943_;
goto v___jp_2915_;
}
else
{
lean_object* v_a_2944_; lean_object* v_a_2945_; 
lean_dec_ref(v___y_2940_);
lean_dec_ref(v___y_2937_);
lean_dec_ref(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec_ref(v___y_2933_);
lean_dec_ref(v___y_2844_);
lean_dec_ref(v_pkg_2839_);
lean_dec(v___x_2837_);
lean_dec_ref(v_dir_2836_);
lean_dec_ref(v_self_2835_);
v_a_2944_ = lean_ctor_get(v___y_2941_, 0);
lean_inc(v_a_2944_);
v_a_2945_ = lean_ctor_get(v___y_2941_, 1);
lean_inc(v_a_2945_);
lean_dec_ref_known(v___y_2941_, 2);
v_a_2852_ = v_a_2944_;
v_a_2853_ = v_a_2945_;
goto v___jp_2851_;
}
}
v___jp_2946_:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; uint8_t v___x_2961_; 
v___x_2959_ = l_Array_append___redArg(v___y_2949_, v___y_2948_);
v___x_2960_ = lean_array_get_size(v___x_2959_);
v___x_2961_ = lean_nat_dec_lt(v___y_2950_, v___x_2960_);
if (v___x_2961_ == 0)
{
lean_dec_ref(v___x_2959_);
v___y_2916_ = v___y_2947_;
v___y_2917_ = v___y_2950_;
v___y_2918_ = v___y_2951_;
v___y_2919_ = v___y_2952_;
v___y_2920_ = v___y_2953_;
v___y_2921_ = v___y_2955_;
v___y_2922_ = v___y_2954_;
v___y_2923_ = v___y_2956_;
v_a_2924_ = v_snd_2957_;
v_a_2925_ = v_a_2958_;
goto v___jp_2915_;
}
else
{
uint8_t v___x_2962_; 
v___x_2962_ = lean_nat_dec_le(v___x_2960_, v___x_2960_);
if (v___x_2962_ == 0)
{
if (v___x_2961_ == 0)
{
lean_dec_ref(v___x_2959_);
v___y_2916_ = v___y_2947_;
v___y_2917_ = v___y_2950_;
v___y_2918_ = v___y_2951_;
v___y_2919_ = v___y_2952_;
v___y_2920_ = v___y_2953_;
v___y_2921_ = v___y_2955_;
v___y_2922_ = v___y_2954_;
v___y_2923_ = v___y_2956_;
v_a_2924_ = v_snd_2957_;
v_a_2925_ = v_a_2958_;
goto v___jp_2915_;
}
else
{
size_t v___x_2963_; size_t v___x_2964_; lean_object* v___x_2965_; 
v___x_2963_ = ((size_t)0ULL);
v___x_2964_ = lean_usize_of_nat(v___x_2960_);
lean_inc_ref(v___y_2844_);
lean_inc_ref(v_pkg_2839_);
v___x_2965_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v_pkg_2839_, v___x_2959_, v___x_2963_, v___x_2964_, v_snd_2957_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v_a_2958_);
lean_dec_ref(v___x_2959_);
v___y_2933_ = v___y_2947_;
v___y_2934_ = v___y_2950_;
v___y_2935_ = v___y_2951_;
v___y_2936_ = v___y_2952_;
v___y_2937_ = v___y_2953_;
v___y_2938_ = v___y_2954_;
v___y_2939_ = v___y_2955_;
v___y_2940_ = v___y_2956_;
v___y_2941_ = v___x_2965_;
goto v___jp_2932_;
}
}
else
{
size_t v___x_2966_; size_t v___x_2967_; lean_object* v___x_2968_; 
v___x_2966_ = ((size_t)0ULL);
v___x_2967_ = lean_usize_of_nat(v___x_2960_);
lean_inc_ref(v___y_2844_);
lean_inc_ref(v_pkg_2839_);
v___x_2968_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v_pkg_2839_, v___x_2959_, v___x_2966_, v___x_2967_, v_snd_2957_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v_a_2958_);
lean_dec_ref(v___x_2959_);
v___y_2933_ = v___y_2947_;
v___y_2934_ = v___y_2950_;
v___y_2935_ = v___y_2951_;
v___y_2936_ = v___y_2952_;
v___y_2937_ = v___y_2953_;
v___y_2938_ = v___y_2954_;
v___y_2939_ = v___y_2955_;
v___y_2940_ = v___y_2956_;
v___y_2941_ = v___x_2968_;
goto v___jp_2932_;
}
}
}
v___jp_2969_:
{
lean_object* v_toArray_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_3002_; 
v_toArray_2982_ = lean_ctor_get(v_a_2980_, 1);
v_isSharedCheck_3002_ = !lean_is_exclusive(v_a_2980_);
if (v_isSharedCheck_3002_ == 0)
{
lean_object* v_unused_3003_; 
v_unused_3003_ = lean_ctor_get(v_a_2980_, 0);
lean_dec(v_unused_3003_);
v___x_2984_ = v_a_2980_;
v_isShared_2985_ = v_isSharedCheck_3002_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_toArray_2982_);
lean_dec(v_a_2980_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_3002_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; uint8_t v___x_2988_; 
v___x_2986_ = lean_mk_empty_array_with_capacity(v___y_2973_);
v___x_2987_ = lean_array_get_size(v_toArray_2982_);
v___x_2988_ = lean_nat_dec_lt(v___y_2973_, v___x_2987_);
if (v___x_2988_ == 0)
{
lean_del_object(v___x_2984_);
lean_dec_ref(v_toArray_2982_);
lean_dec(v_name_2840_);
v___y_2947_ = v___y_2971_;
v___y_2948_ = v___y_2970_;
v___y_2949_ = v___y_2972_;
v___y_2950_ = v___y_2973_;
v___y_2951_ = v___y_2974_;
v___y_2952_ = v___y_2975_;
v___y_2953_ = v___y_2976_;
v___y_2954_ = v___y_2978_;
v___y_2955_ = v___y_2977_;
v___y_2956_ = v___y_2979_;
v_snd_2957_ = v___x_2986_;
v_a_2958_ = v_a_2981_;
goto v___jp_2946_;
}
else
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2992_; 
v___x_2989_ = l_Lean_NameSet_empty;
v___x_2990_ = l_Lean_NameSet_insert(v___x_2989_, v_name_2840_);
if (v_isShared_2985_ == 0)
{
lean_ctor_set(v___x_2984_, 1, v___x_2986_);
lean_ctor_set(v___x_2984_, 0, v___x_2990_);
v___x_2992_ = v___x_2984_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v___x_2990_);
lean_ctor_set(v_reuseFailAlloc_3001_, 1, v___x_2986_);
v___x_2992_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
size_t v___x_2993_; size_t v___x_2994_; lean_object* v___x_2995_; 
v___x_2993_ = ((size_t)0ULL);
v___x_2994_ = lean_usize_of_nat(v___x_2987_);
lean_inc_ref(v___y_2844_);
v___x_2995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_toArray_2982_, v___x_2993_, v___x_2994_, v___x_2992_, v___y_2844_, v___x_2837_, v___y_2846_, v___y_2847_, v___y_2848_, v_a_2981_);
lean_dec_ref(v_toArray_2982_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_a_2996_; lean_object* v_a_2997_; lean_object* v_snd_2998_; 
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
lean_inc(v_a_2996_);
v_a_2997_ = lean_ctor_get(v___x_2995_, 1);
lean_inc(v_a_2997_);
lean_dec_ref_known(v___x_2995_, 2);
v_snd_2998_ = lean_ctor_get(v_a_2996_, 1);
lean_inc(v_snd_2998_);
lean_dec(v_a_2996_);
v___y_2947_ = v___y_2971_;
v___y_2948_ = v___y_2970_;
v___y_2949_ = v___y_2972_;
v___y_2950_ = v___y_2973_;
v___y_2951_ = v___y_2974_;
v___y_2952_ = v___y_2975_;
v___y_2953_ = v___y_2976_;
v___y_2954_ = v___y_2978_;
v___y_2955_ = v___y_2977_;
v___y_2956_ = v___y_2979_;
v_snd_2957_ = v_snd_2998_;
v_a_2958_ = v_a_2997_;
goto v___jp_2946_;
}
else
{
lean_object* v_a_2999_; lean_object* v_a_3000_; 
lean_dec_ref(v___y_2979_);
lean_dec_ref(v___y_2976_);
lean_dec_ref(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec_ref(v___y_2844_);
lean_dec_ref(v_pkg_2839_);
lean_dec(v___x_2837_);
lean_dec_ref(v_dir_2836_);
lean_dec_ref(v_self_2835_);
v_a_2999_ = lean_ctor_get(v___x_2995_, 0);
lean_inc(v_a_2999_);
v_a_3000_ = lean_ctor_get(v___x_2995_, 1);
lean_inc(v_a_3000_);
lean_dec_ref_known(v___x_2995_, 2);
v_a_2852_ = v_a_2999_;
v_a_2853_ = v_a_3000_;
goto v___jp_2851_;
}
}
}
}
}
v___jp_3004_:
{
if (lean_obj_tag(v___y_3015_) == 0)
{
lean_object* v_a_3016_; lean_object* v_a_3017_; 
v_a_3016_ = lean_ctor_get(v___y_3015_, 0);
lean_inc(v_a_3016_);
v_a_3017_ = lean_ctor_get(v___y_3015_, 1);
lean_inc(v_a_3017_);
lean_dec_ref_known(v___y_3015_, 2);
v___y_2970_ = v___y_3006_;
v___y_2971_ = v___y_3005_;
v___y_2972_ = v___y_3007_;
v___y_2973_ = v___y_3008_;
v___y_2974_ = v___y_3009_;
v___y_2975_ = v___y_3010_;
v___y_2976_ = v___y_3011_;
v___y_2977_ = v___y_3013_;
v___y_2978_ = v___y_3012_;
v___y_2979_ = v___y_3014_;
v_a_2980_ = v_a_3016_;
v_a_2981_ = v_a_3017_;
goto v___jp_2969_;
}
else
{
lean_object* v_a_3018_; lean_object* v_a_3019_; 
lean_dec_ref(v___y_3014_);
lean_dec_ref(v___y_3011_);
lean_dec_ref(v___y_3010_);
lean_dec_ref(v___y_3009_);
lean_dec_ref(v___y_3007_);
lean_dec_ref(v___y_3005_);
lean_dec_ref(v___y_2844_);
lean_dec(v_name_2840_);
lean_dec_ref(v_pkg_2839_);
lean_dec(v___x_2837_);
lean_dec_ref(v_dir_2836_);
lean_dec_ref(v_self_2835_);
v_a_3018_ = lean_ctor_get(v___y_3015_, 0);
lean_inc(v_a_3018_);
v_a_3019_ = lean_ctor_get(v___y_3015_, 1);
lean_inc(v_a_3019_);
lean_dec_ref_known(v___y_3015_, 2);
v_a_2852_ = v_a_3018_;
v_a_2853_ = v_a_3019_;
goto v___jp_2851_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed(lean_object* v_self_3132_, lean_object* v_dir_3133_, lean_object* v___x_3134_, lean_object* v_targetDecls_3135_, lean_object* v_pkg_3136_, lean_object* v_name_3137_, lean_object* v___x_3138_, lean_object* v_config_3139_, lean_object* v_config_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(v_self_3132_, v_dir_3133_, v___x_3134_, v_targetDecls_3135_, v_pkg_3136_, v_name_3137_, v___x_3138_, v_config_3139_, v_config_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_);
lean_dec_ref(v___y_3145_);
lean_dec(v___y_3144_);
lean_dec(v___y_3143_);
lean_dec(v___y_3142_);
lean_dec(v_config_3140_);
lean_dec_ref(v_targetDecls_3135_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(lean_object* v_self_3150_, lean_object* v_a_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_){
_start:
{
lean_object* v_pkg_3158_; lean_object* v_name_3159_; lean_object* v_config_3160_; lean_object* v_keyName_3161_; lean_object* v_dir_3162_; lean_object* v_config_3163_; lean_object* v_targetDecls_3164_; lean_object* v___x_3165_; uint8_t v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___f_3175_; uint8_t v___x_3176_; lean_object* v___x_3177_; 
v_pkg_3158_ = lean_ctor_get(v_self_3150_, 0);
lean_inc_ref_n(v_pkg_3158_, 2);
v_name_3159_ = lean_ctor_get(v_self_3150_, 1);
lean_inc_n(v_name_3159_, 3);
v_config_3160_ = lean_ctor_get(v_self_3150_, 2);
lean_inc(v_config_3160_);
v_keyName_3161_ = lean_ctor_get(v_pkg_3158_, 2);
v_dir_3162_ = lean_ctor_get(v_pkg_3158_, 4);
lean_inc_ref(v_dir_3162_);
v_config_3163_ = lean_ctor_get(v_pkg_3158_, 6);
lean_inc_ref(v_config_3163_);
v_targetDecls_3164_ = lean_ctor_get(v_pkg_3158_, 15);
lean_inc_ref(v_targetDecls_3164_);
v___x_3165_ = l_Lake_instDataKindDynlib;
v___x_3166_ = 1;
v___x_3167_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3159_, v___x_3166_);
v___x_3168_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0));
v___x_3169_ = lean_string_append(v___x_3167_, v___x_3168_);
v___x_3170_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_3161_);
v___x_3171_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3171_, 0, v_keyName_3161_);
lean_ctor_set(v___x_3171_, 1, v_name_3159_);
v___x_3172_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_3150_);
v___x_3173_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3171_);
lean_ctor_set(v___x_3173_, 1, v___x_3172_);
lean_ctor_set(v___x_3173_, 2, v_self_3150_);
lean_ctor_set(v___x_3173_, 3, v___x_3170_);
v___x_3174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3174_, 0, v_pkg_3158_);
v___f_3175_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed), 16, 9);
lean_closure_set(v___f_3175_, 0, v_self_3150_);
lean_closure_set(v___f_3175_, 1, v_dir_3162_);
lean_closure_set(v___f_3175_, 2, v___x_3174_);
lean_closure_set(v___f_3175_, 3, v_targetDecls_3164_);
lean_closure_set(v___f_3175_, 4, v_pkg_3158_);
lean_closure_set(v___f_3175_, 5, v_name_3159_);
lean_closure_set(v___f_3175_, 6, v___x_3173_);
lean_closure_set(v___f_3175_, 7, v_config_3163_);
lean_closure_set(v___f_3175_, 8, v_config_3160_);
v___x_3176_ = 0;
v___x_3177_ = l_Lake_ensureJob___redArg(v___x_3165_, v___f_3175_, v_a_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_object* v_a_3178_; lean_object* v_a_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3202_; 
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
v_a_3179_ = lean_ctor_get(v___x_3177_, 1);
v_isSharedCheck_3202_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3202_ == 0)
{
v___x_3181_ = v___x_3177_;
v_isShared_3182_ = v_isSharedCheck_3202_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_a_3179_);
lean_inc(v_a_3178_);
lean_dec(v___x_3177_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3202_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v_task_3183_; lean_object* v_kind_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3200_; 
v_task_3183_ = lean_ctor_get(v_a_3178_, 0);
v_kind_3184_ = lean_ctor_get(v_a_3178_, 1);
v_isSharedCheck_3200_ = !lean_is_exclusive(v_a_3178_);
if (v_isSharedCheck_3200_ == 0)
{
lean_object* v_unused_3201_; 
v_unused_3201_ = lean_ctor_get(v_a_3178_, 2);
lean_dec(v_unused_3201_);
v___x_3186_ = v_a_3178_;
v_isShared_3187_ = v_isSharedCheck_3200_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_kind_3184_);
lean_inc(v_task_3183_);
lean_dec(v_a_3178_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3200_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v_registeredJobs_3188_; lean_object* v_job_3190_; 
v_registeredJobs_3188_ = lean_ctor_get(v___y_3155_, 4);
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 2, v___x_3169_);
v_job_3190_ = v___x_3186_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v_task_3183_);
lean_ctor_set(v_reuseFailAlloc_3199_, 1, v_kind_3184_);
lean_ctor_set(v_reuseFailAlloc_3199_, 2, v___x_3169_);
v_job_3190_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3197_; 
lean_ctor_set_uint8(v_job_3190_, sizeof(void*)*3, v___x_3176_);
v___x_3191_ = lean_st_ref_take(v_registeredJobs_3188_);
lean_inc_ref(v_job_3190_);
v___x_3192_ = l_Lake_Job_toOpaque___redArg(v_job_3190_);
v___x_3193_ = lean_array_push(v___x_3191_, v___x_3192_);
v___x_3194_ = lean_st_ref_put(v_registeredJobs_3188_, v___x_3193_);
v___x_3195_ = l_Lake_Job_renew___redArg(v_job_3190_);
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 0, v___x_3195_);
v___x_3197_ = v___x_3181_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3198_; 
v_reuseFailAlloc_3198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3198_, 0, v___x_3195_);
lean_ctor_set(v_reuseFailAlloc_3198_, 1, v_a_3179_);
v___x_3197_ = v_reuseFailAlloc_3198_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
return v___x_3197_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3169_);
return v___x_3177_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed(lean_object* v_self_3203_, lean_object* v_a_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_){
_start:
{
lean_object* v_res_3211_; 
v_res_3211_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(v_self_3203_, v_a_3204_, v___y_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_);
lean_dec_ref(v___y_3208_);
lean_dec(v___y_3207_);
lean_dec(v___y_3206_);
lean_dec(v___y_3205_);
return v_res_3211_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(uint8_t v_fmt_3212_, lean_object* v_a_3213_){
_start:
{
if (v_fmt_3212_ == 0)
{
lean_object* v_path_3214_; 
v_path_3214_ = lean_ctor_get(v_a_3213_, 0);
lean_inc_ref(v_path_3214_);
return v_path_3214_;
}
else
{
lean_object* v_path_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v_path_3215_ = lean_ctor_get(v_a_3213_, 0);
lean_inc_ref(v_path_3215_);
v___x_3216_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3216_, 0, v_path_3215_);
v___x_3217_ = l_Lean_Json_compress(v___x_3216_);
return v___x_3217_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed(lean_object* v_fmt_3218_, lean_object* v_a_3219_){
_start:
{
uint8_t v_fmt_boxed_3220_; lean_object* v_res_3221_; 
v_fmt_boxed_3220_ = lean_unbox(v_fmt_3218_);
v_res_3221_ = l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(v_fmt_boxed_3220_, v_a_3219_);
lean_dec_ref(v_a_3219_);
return v_res_3221_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_3224_; uint8_t v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; 
v___f_3224_ = ((lean_object*)(l_Lake_LeanLib_sharedFacetConfig___closed__0));
v___x_3225_ = 1;
v___x_3226_ = l_Lake_instDataKindDynlib;
v___x_3227_ = ((lean_object*)(l_Lake_LeanLib_sharedFacetConfig___closed__1));
v___x_3228_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3229_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3229_, 0, v___x_3228_);
lean_ctor_set(v___x_3229_, 1, v___x_3227_);
lean_ctor_set(v___x_3229_, 2, v___x_3226_);
lean_ctor_set(v___x_3229_, 3, v___f_3224_);
lean_ctor_set_uint8(v___x_3229_, sizeof(void*)*4, v___x_3225_);
lean_ctor_set_uint8(v___x_3229_, sizeof(void*)*4 + 1, v___x_3225_);
return v___x_3229_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacetConfig(void){
_start:
{
lean_object* v___x_3230_; 
v___x_3230_ = lean_obj_once(&l_Lake_LeanLib_sharedFacetConfig___closed__2, &l_Lake_LeanLib_sharedFacetConfig___closed__2_once, _init_l_Lake_LeanLib_sharedFacetConfig___closed__2);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(lean_object* v___x_3231_, lean_object* v_as_3232_, size_t v_sz_3233_, size_t v_i_3234_, lean_object* v_b_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_){
_start:
{
uint8_t v___x_3243_; 
v___x_3243_ = lean_usize_dec_lt(v_i_3234_, v_sz_3233_);
if (v___x_3243_ == 0)
{
lean_object* v___x_3244_; 
lean_dec_ref(v___y_3236_);
lean_dec_ref(v___x_3231_);
v___x_3244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3244_, 0, v_b_3235_);
lean_ctor_set(v___x_3244_, 1, v___y_3241_);
return v___x_3244_;
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3246_; 
v_a_3245_ = lean_array_uget_borrowed(v_as_3232_, v_i_3234_);
lean_inc_ref(v___y_3236_);
lean_inc_n(v_a_3245_, 2);
lean_inc_ref(v___x_3231_);
v___x_3246_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v___x_3231_, v_a_3245_, v_a_3245_, v___x_3243_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; lean_object* v_a_3248_; lean_object* v_snd_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; size_t v___x_3252_; size_t v___x_3253_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
lean_inc(v_a_3247_);
v_a_3248_ = lean_ctor_get(v___x_3246_, 1);
lean_inc(v_a_3248_);
lean_dec_ref_known(v___x_3246_, 2);
v_snd_3249_ = lean_ctor_get(v_a_3247_, 1);
lean_inc(v_snd_3249_);
lean_dec(v_a_3247_);
v___x_3250_ = l_Lake_Job_toOpaque___redArg(v_snd_3249_);
v___x_3251_ = l_Lake_Job_mix___redArg(v_b_3235_, v___x_3250_);
v___x_3252_ = ((size_t)1ULL);
v___x_3253_ = lean_usize_add(v_i_3234_, v___x_3252_);
v_i_3234_ = v___x_3253_;
v_b_3235_ = v___x_3251_;
v___y_3241_ = v_a_3248_;
goto _start;
}
else
{
lean_object* v_a_3255_; lean_object* v_a_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3263_; 
lean_dec_ref(v___y_3236_);
lean_dec_ref(v_b_3235_);
lean_dec_ref(v___x_3231_);
v_a_3255_ = lean_ctor_get(v___x_3246_, 0);
v_a_3256_ = lean_ctor_get(v___x_3246_, 1);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3258_ = v___x_3246_;
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_a_3256_);
lean_inc(v_a_3255_);
lean_dec(v___x_3246_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3261_; 
if (v_isShared_3259_ == 0)
{
v___x_3261_ = v___x_3258_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v_a_3255_);
lean_ctor_set(v_reuseFailAlloc_3262_, 1, v_a_3256_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
return v___x_3261_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1___boxed(lean_object* v___x_3264_, lean_object* v_as_3265_, lean_object* v_sz_3266_, lean_object* v_i_3267_, lean_object* v_b_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_){
_start:
{
size_t v_sz_boxed_3276_; size_t v_i_boxed_3277_; lean_object* v_res_3278_; 
v_sz_boxed_3276_ = lean_unbox_usize(v_sz_3266_);
lean_dec(v_sz_3266_);
v_i_boxed_3277_ = lean_unbox_usize(v_i_3267_);
lean_dec(v_i_3267_);
v_res_3278_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(v___x_3264_, v_as_3265_, v_sz_boxed_3276_, v_i_boxed_3277_, v_b_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_, v___y_3274_);
lean_dec_ref(v___y_3273_);
lean_dec(v___y_3272_);
lean_dec(v___y_3271_);
lean_dec(v___y_3270_);
lean_dec_ref(v_as_3265_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(lean_object* v___x_3279_, lean_object* v_as_3280_, size_t v_sz_3281_, size_t v_i_3282_, lean_object* v_b_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_){
_start:
{
uint8_t v___x_3291_; 
v___x_3291_ = lean_usize_dec_lt(v_i_3282_, v_sz_3281_);
if (v___x_3291_ == 0)
{
lean_object* v___x_3292_; 
lean_dec_ref(v___y_3284_);
lean_dec_ref(v___x_3279_);
v___x_3292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3292_, 0, v_b_3283_);
lean_ctor_set(v___x_3292_, 1, v___y_3289_);
return v___x_3292_;
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3294_; 
v_a_3293_ = lean_array_uget_borrowed(v_as_3280_, v_i_3282_);
lean_inc_ref(v___y_3284_);
lean_inc(v_a_3293_);
lean_inc_ref(v___x_3279_);
v___x_3294_ = l_Lake_Package_fetchTargetJob(v___x_3279_, v_a_3293_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; lean_object* v_a_3296_; lean_object* v___x_3297_; size_t v___x_3298_; size_t v___x_3299_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_a_3295_);
v_a_3296_ = lean_ctor_get(v___x_3294_, 1);
lean_inc(v_a_3296_);
lean_dec_ref_known(v___x_3294_, 2);
v___x_3297_ = l_Lake_Job_mix___redArg(v_b_3283_, v_a_3295_);
v___x_3298_ = ((size_t)1ULL);
v___x_3299_ = lean_usize_add(v_i_3282_, v___x_3298_);
v_i_3282_ = v___x_3299_;
v_b_3283_ = v___x_3297_;
v___y_3289_ = v_a_3296_;
goto _start;
}
else
{
lean_object* v_a_3301_; lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3309_; 
lean_dec_ref(v___y_3284_);
lean_dec_ref(v_b_3283_);
lean_dec_ref(v___x_3279_);
v_a_3301_ = lean_ctor_get(v___x_3294_, 0);
v_a_3302_ = lean_ctor_get(v___x_3294_, 1);
v_isSharedCheck_3309_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3309_ == 0)
{
v___x_3304_ = v___x_3294_;
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_inc(v_a_3301_);
lean_dec(v___x_3294_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3307_; 
if (v_isShared_3305_ == 0)
{
v___x_3307_ = v___x_3304_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v_a_3301_);
lean_ctor_set(v_reuseFailAlloc_3308_, 1, v_a_3302_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0___boxed(lean_object* v___x_3310_, lean_object* v_as_3311_, lean_object* v_sz_3312_, lean_object* v_i_3313_, lean_object* v_b_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_){
_start:
{
size_t v_sz_boxed_3322_; size_t v_i_boxed_3323_; lean_object* v_res_3324_; 
v_sz_boxed_3322_ = lean_unbox_usize(v_sz_3312_);
lean_dec(v_sz_3312_);
v_i_boxed_3323_ = lean_unbox_usize(v_i_3313_);
lean_dec(v_i_3313_);
v_res_3324_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(v___x_3310_, v_as_3311_, v_sz_boxed_3322_, v_i_boxed_3323_, v_b_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
lean_dec_ref(v___y_3319_);
lean_dec(v___y_3318_);
lean_dec(v___y_3317_);
lean_dec(v___y_3316_);
lean_dec_ref(v_as_3311_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(lean_object* v_self_3327_, lean_object* v_a_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_){
_start:
{
lean_object* v_pkg_3335_; lean_object* v_name_3336_; lean_object* v_config_3337_; lean_object* v_baseName_3338_; lean_object* v_keyName_3339_; uint8_t v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; uint8_t v___x_3352_; uint8_t v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v_job_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
v_pkg_3335_ = lean_ctor_get(v_self_3327_, 0);
lean_inc_ref_n(v_pkg_3335_, 2);
v_name_3336_ = lean_ctor_get(v_self_3327_, 1);
lean_inc(v_name_3336_);
v_config_3337_ = lean_ctor_get(v_self_3327_, 2);
lean_inc(v_config_3337_);
lean_dec_ref(v_self_3327_);
v_baseName_3338_ = lean_ctor_get(v_pkg_3335_, 1);
v_keyName_3339_ = lean_ctor_get(v_pkg_3335_, 2);
v___x_3340_ = 1;
lean_inc(v_baseName_3338_);
v___x_3341_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3338_, v___x_3340_);
v___x_3342_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0));
v___x_3343_ = lean_string_append(v___x_3341_, v___x_3342_);
v___x_3344_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3336_, v___x_3340_);
v___x_3345_ = lean_string_append(v___x_3343_, v___x_3344_);
lean_dec_ref(v___x_3344_);
v___x_3346_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1));
v___x_3347_ = lean_string_append(v___x_3345_, v___x_3346_);
v___x_3348_ = lean_box(0);
v___x_3349_ = lean_box(0);
v___x_3350_ = lean_unsigned_to_nat(0u);
v___x_3351_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0));
v___x_3352_ = 0;
v___x_3353_ = 0;
v___x_3354_ = l_Lake_BuildTrace_nil(v___x_3347_);
v___x_3355_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3355_, 0, v___x_3351_);
lean_ctor_set(v___x_3355_, 1, v___x_3354_);
lean_ctor_set(v___x_3355_, 2, v___x_3350_);
lean_ctor_set_uint8(v___x_3355_, sizeof(void*)*3, v___x_3352_);
lean_ctor_set_uint8(v___x_3355_, sizeof(void*)*3 + 1, v___x_3353_);
v___x_3356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3348_);
lean_ctor_set(v___x_3356_, 1, v___x_3355_);
v___x_3357_ = lean_task_pure(v___x_3356_);
v___x_3358_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v_job_3359_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_job_3359_, 0, v___x_3357_);
lean_ctor_set(v_job_3359_, 1, v___x_3349_);
lean_ctor_set(v_job_3359_, 2, v___x_3358_);
lean_ctor_set_uint8(v_job_3359_, sizeof(void*)*3, v___x_3353_);
v___x_3360_ = l_Lake_Package_extraDepFacet;
lean_inc(v_keyName_3339_);
v___x_3361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3361_, 0, v_keyName_3339_);
v___x_3362_ = l_Lake_Package_keyword;
v___x_3363_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3363_, 0, v___x_3361_);
lean_ctor_set(v___x_3363_, 1, v___x_3362_);
lean_ctor_set(v___x_3363_, 2, v_pkg_3335_);
lean_ctor_set(v___x_3363_, 3, v___x_3360_);
lean_inc_ref(v_a_3328_);
lean_inc_ref(v___y_3332_);
lean_inc(v___y_3331_);
lean_inc(v___y_3330_);
lean_inc(v___y_3329_);
v___x_3364_ = lean_apply_7(v_a_3328_, v___x_3363_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_, lean_box(0));
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_object* v_a_3365_; lean_object* v_a_3366_; lean_object* v_needs_3367_; lean_object* v_extraDepTargets_3368_; lean_object* v___x_3369_; size_t v_sz_3370_; size_t v___x_3371_; lean_object* v___x_3372_; 
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
lean_inc(v_a_3365_);
v_a_3366_ = lean_ctor_get(v___x_3364_, 1);
lean_inc(v_a_3366_);
lean_dec_ref_known(v___x_3364_, 2);
v_needs_3367_ = lean_ctor_get(v_config_3337_, 5);
lean_inc_ref(v_needs_3367_);
v_extraDepTargets_3368_ = lean_ctor_get(v_config_3337_, 6);
lean_inc_ref(v_extraDepTargets_3368_);
lean_dec(v_config_3337_);
v___x_3369_ = l_Lake_Job_mix___redArg(v_job_3359_, v_a_3365_);
v_sz_3370_ = lean_array_size(v_extraDepTargets_3368_);
v___x_3371_ = ((size_t)0ULL);
lean_inc_ref(v_a_3328_);
lean_inc_ref(v_pkg_3335_);
v___x_3372_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(v_pkg_3335_, v_extraDepTargets_3368_, v_sz_3370_, v___x_3371_, v___x_3369_, v_a_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v_a_3366_);
lean_dec_ref(v_extraDepTargets_3368_);
if (lean_obj_tag(v___x_3372_) == 0)
{
lean_object* v_a_3373_; lean_object* v_a_3374_; size_t v_sz_3375_; lean_object* v___x_3376_; 
v_a_3373_ = lean_ctor_get(v___x_3372_, 0);
lean_inc(v_a_3373_);
v_a_3374_ = lean_ctor_get(v___x_3372_, 1);
lean_inc(v_a_3374_);
lean_dec_ref_known(v___x_3372_, 2);
v_sz_3375_ = lean_array_size(v_needs_3367_);
v___x_3376_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(v_pkg_3335_, v_needs_3367_, v_sz_3375_, v___x_3371_, v_a_3373_, v_a_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v_a_3374_);
lean_dec_ref(v_needs_3367_);
return v___x_3376_;
}
else
{
lean_dec_ref(v_needs_3367_);
lean_dec_ref(v_pkg_3335_);
lean_dec_ref(v_a_3328_);
return v___x_3372_;
}
}
else
{
lean_dec_ref_known(v_job_3359_, 3);
lean_dec(v_config_3337_);
lean_dec_ref(v_pkg_3335_);
lean_dec_ref(v_a_3328_);
return v___x_3364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed(lean_object* v_self_3377_, lean_object* v_a_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
lean_object* v_res_3385_; 
v_res_3385_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(v_self_3377_, v_a_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec(v___y_3380_);
lean_dec(v___y_3379_);
return v_res_3385_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3387_; uint8_t v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___f_3387_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_3388_ = 1;
v___x_3389_ = l_Lake_instDataKindUnit;
v___x_3390_ = ((lean_object*)(l_Lake_LeanLib_extraDepFacetConfig___closed__0));
v___x_3391_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3392_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3392_, 0, v___x_3391_);
lean_ctor_set(v___x_3392_, 1, v___x_3390_);
lean_ctor_set(v___x_3392_, 2, v___x_3389_);
lean_ctor_set(v___x_3392_, 3, v___f_3387_);
lean_ctor_set_uint8(v___x_3392_, sizeof(void*)*4, v___x_3388_);
lean_ctor_set_uint8(v___x_3392_, sizeof(void*)*4 + 1, v___x_3388_);
return v___x_3392_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacetConfig(void){
_start:
{
lean_object* v___x_3393_; 
v___x_3393_ = lean_obj_once(&l_Lake_LeanLib_extraDepFacetConfig___closed__1, &l_Lake_LeanLib_extraDepFacetConfig___closed__1_once, _init_l_Lake_LeanLib_extraDepFacetConfig___closed__1);
return v___x_3393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(lean_object* v_self_3394_, size_t v_sz_3395_, size_t v_i_3396_, lean_object* v_bs_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
uint8_t v___x_3405_; 
v___x_3405_ = lean_usize_dec_lt(v_i_3396_, v_sz_3395_);
if (v___x_3405_ == 0)
{
lean_object* v___x_3406_; 
lean_dec_ref(v___y_3398_);
lean_dec_ref(v_self_3394_);
v___x_3406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3406_, 0, v_bs_3397_);
lean_ctor_set(v___x_3406_, 1, v___y_3403_);
return v___x_3406_;
}
else
{
lean_object* v_pkg_3407_; lean_object* v_name_3408_; lean_object* v_keyName_3409_; lean_object* v_v_3410_; lean_object* v___x_3411_; lean_object* v_bs_x27_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; 
v_pkg_3407_ = lean_ctor_get(v_self_3394_, 0);
v_name_3408_ = lean_ctor_get(v_self_3394_, 1);
v_keyName_3409_ = lean_ctor_get(v_pkg_3407_, 2);
v_v_3410_ = lean_array_uget(v_bs_3397_, v_i_3396_);
v___x_3411_ = lean_unsigned_to_nat(0u);
v_bs_x27_3412_ = lean_array_uset(v_bs_3397_, v_i_3396_, v___x_3411_);
lean_inc(v_name_3408_);
lean_inc(v_keyName_3409_);
v___x_3413_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3413_, 0, v_keyName_3409_);
lean_ctor_set(v___x_3413_, 1, v_name_3408_);
v___x_3414_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_3394_);
v___x_3415_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3413_);
lean_ctor_set(v___x_3415_, 1, v___x_3414_);
lean_ctor_set(v___x_3415_, 2, v_self_3394_);
lean_ctor_set(v___x_3415_, 3, v_v_3410_);
lean_inc_ref(v___y_3398_);
lean_inc_ref(v___y_3402_);
lean_inc(v___y_3401_);
lean_inc(v___y_3400_);
lean_inc(v___y_3399_);
v___x_3416_ = lean_apply_7(v___y_3398_, v___x_3415_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_, lean_box(0));
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; lean_object* v_a_3418_; lean_object* v___x_3419_; size_t v___x_3420_; size_t v___x_3421_; lean_object* v___x_3422_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3417_);
v_a_3418_ = lean_ctor_get(v___x_3416_, 1);
lean_inc(v_a_3418_);
lean_dec_ref_known(v___x_3416_, 2);
v___x_3419_ = l_Lake_Job_toOpaque___redArg(v_a_3417_);
v___x_3420_ = ((size_t)1ULL);
v___x_3421_ = lean_usize_add(v_i_3396_, v___x_3420_);
v___x_3422_ = lean_array_uset(v_bs_x27_3412_, v_i_3396_, v___x_3419_);
v_i_3396_ = v___x_3421_;
v_bs_3397_ = v___x_3422_;
v___y_3403_ = v_a_3418_;
goto _start;
}
else
{
lean_object* v_a_3424_; lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3432_; 
lean_dec_ref(v_bs_x27_3412_);
lean_dec_ref(v___y_3398_);
lean_dec_ref(v_self_3394_);
v_a_3424_ = lean_ctor_get(v___x_3416_, 0);
v_a_3425_ = lean_ctor_get(v___x_3416_, 1);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3427_ = v___x_3416_;
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_inc(v_a_3424_);
lean_dec(v___x_3416_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3424_);
lean_ctor_set(v_reuseFailAlloc_3431_, 1, v_a_3425_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0___boxed(lean_object* v_self_3433_, lean_object* v_sz_3434_, lean_object* v_i_3435_, lean_object* v_bs_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_){
_start:
{
size_t v_sz_boxed_3444_; size_t v_i_boxed_3445_; lean_object* v_res_3446_; 
v_sz_boxed_3444_ = lean_unbox_usize(v_sz_3434_);
lean_dec(v_sz_3434_);
v_i_boxed_3445_ = lean_unbox_usize(v_i_3435_);
lean_dec(v_i_3435_);
v_res_3446_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(v_self_3433_, v_sz_boxed_3444_, v_i_boxed_3445_, v_bs_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v___y_3440_);
lean_dec(v___y_3439_);
lean_dec(v___y_3438_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(lean_object* v_self_3448_, lean_object* v_a_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_){
_start:
{
lean_object* v_config_3456_; lean_object* v_defaultFacets_3457_; size_t v_sz_3458_; size_t v___x_3459_; lean_object* v___x_3460_; 
v_config_3456_ = lean_ctor_get(v_self_3448_, 2);
v_defaultFacets_3457_ = lean_ctor_get(v_config_3456_, 7);
lean_inc_ref(v_defaultFacets_3457_);
v_sz_3458_ = lean_array_size(v_defaultFacets_3457_);
v___x_3459_ = ((size_t)0ULL);
v___x_3460_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(v_self_3448_, v_sz_3458_, v___x_3459_, v_defaultFacets_3457_, v_a_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v_a_3461_; lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3471_; 
v_a_3461_ = lean_ctor_get(v___x_3460_, 0);
v_a_3462_ = lean_ctor_get(v___x_3460_, 1);
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3460_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3464_ = v___x_3460_;
v_isShared_3465_ = v_isSharedCheck_3471_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_inc(v_a_3461_);
lean_dec(v___x_3460_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3471_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3469_; 
v___x_3466_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0));
v___x_3467_ = l_Lake_Job_mixArray___redArg(v_a_3461_, v___x_3466_);
lean_dec(v_a_3461_);
if (v_isShared_3465_ == 0)
{
lean_ctor_set(v___x_3464_, 0, v___x_3467_);
v___x_3469_ = v___x_3464_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v___x_3467_);
lean_ctor_set(v_reuseFailAlloc_3470_, 1, v_a_3462_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
else
{
lean_object* v_a_3472_; lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3480_; 
v_a_3472_ = lean_ctor_get(v___x_3460_, 0);
v_a_3473_ = lean_ctor_get(v___x_3460_, 1);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3460_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3475_ = v___x_3460_;
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_inc(v_a_3472_);
lean_dec(v___x_3460_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v___x_3478_; 
if (v_isShared_3476_ == 0)
{
v___x_3478_ = v___x_3475_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v_a_3472_);
lean_ctor_set(v_reuseFailAlloc_3479_, 1, v_a_3473_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
return v___x_3478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed(lean_object* v_self_3481_, lean_object* v_a_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_){
_start:
{
lean_object* v_res_3489_; 
v_res_3489_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(v_self_3481_, v_a_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_, v___y_3487_);
lean_dec_ref(v___y_3486_);
lean_dec(v___y_3485_);
lean_dec(v___y_3484_);
lean_dec(v___y_3483_);
return v_res_3489_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3491_; uint8_t v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___f_3491_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_3492_ = 1;
v___x_3493_ = l_Lake_instDataKindUnit;
v___x_3494_ = ((lean_object*)(l_Lake_LeanLib_defaultFacetConfig___closed__0));
v___x_3495_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3496_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3496_, 0, v___x_3495_);
lean_ctor_set(v___x_3496_, 1, v___x_3494_);
lean_ctor_set(v___x_3496_, 2, v___x_3493_);
lean_ctor_set(v___x_3496_, 3, v___f_3491_);
lean_ctor_set_uint8(v___x_3496_, sizeof(void*)*4, v___x_3492_);
lean_ctor_set_uint8(v___x_3496_, sizeof(void*)*4 + 1, v___x_3492_);
return v___x_3496_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacetConfig(void){
_start:
{
lean_object* v___x_3497_; 
v___x_3497_ = lean_obj_once(&l_Lake_LeanLib_defaultFacetConfig___closed__1, &l_Lake_LeanLib_defaultFacetConfig___closed__1_once, _init_l_Lake_LeanLib_defaultFacetConfig___closed__1);
return v___x_3497_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(lean_object* v_k_3498_, lean_object* v_v_3499_, lean_object* v_t_3500_){
_start:
{
if (lean_obj_tag(v_t_3500_) == 0)
{
lean_object* v_size_3501_; lean_object* v_k_3502_; lean_object* v_v_3503_; lean_object* v_l_3504_; lean_object* v_r_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3785_; 
v_size_3501_ = lean_ctor_get(v_t_3500_, 0);
v_k_3502_ = lean_ctor_get(v_t_3500_, 1);
v_v_3503_ = lean_ctor_get(v_t_3500_, 2);
v_l_3504_ = lean_ctor_get(v_t_3500_, 3);
v_r_3505_ = lean_ctor_get(v_t_3500_, 4);
v_isSharedCheck_3785_ = !lean_is_exclusive(v_t_3500_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3507_ = v_t_3500_;
v_isShared_3508_ = v_isSharedCheck_3785_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_r_3505_);
lean_inc(v_l_3504_);
lean_inc(v_v_3503_);
lean_inc(v_k_3502_);
lean_inc(v_size_3501_);
lean_dec(v_t_3500_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3785_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
uint8_t v___x_3509_; 
v___x_3509_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3498_, v_k_3502_);
switch(v___x_3509_)
{
case 0:
{
lean_object* v_impl_3510_; lean_object* v___x_3511_; 
lean_dec(v_size_3501_);
v_impl_3510_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3498_, v_v_3499_, v_l_3504_);
v___x_3511_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_3505_) == 0)
{
lean_object* v_size_3512_; lean_object* v_size_3513_; lean_object* v_k_3514_; lean_object* v_v_3515_; lean_object* v_l_3516_; lean_object* v_r_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; uint8_t v___x_3520_; 
v_size_3512_ = lean_ctor_get(v_r_3505_, 0);
v_size_3513_ = lean_ctor_get(v_impl_3510_, 0);
lean_inc(v_size_3513_);
v_k_3514_ = lean_ctor_get(v_impl_3510_, 1);
lean_inc(v_k_3514_);
v_v_3515_ = lean_ctor_get(v_impl_3510_, 2);
lean_inc(v_v_3515_);
v_l_3516_ = lean_ctor_get(v_impl_3510_, 3);
lean_inc(v_l_3516_);
v_r_3517_ = lean_ctor_get(v_impl_3510_, 4);
lean_inc(v_r_3517_);
v___x_3518_ = lean_unsigned_to_nat(3u);
v___x_3519_ = lean_nat_mul(v___x_3518_, v_size_3512_);
v___x_3520_ = lean_nat_dec_lt(v___x_3519_, v_size_3513_);
lean_dec(v___x_3519_);
if (v___x_3520_ == 0)
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3524_; 
lean_dec(v_r_3517_);
lean_dec(v_l_3516_);
lean_dec(v_v_3515_);
lean_dec(v_k_3514_);
v___x_3521_ = lean_nat_add(v___x_3511_, v_size_3513_);
lean_dec(v_size_3513_);
v___x_3522_ = lean_nat_add(v___x_3521_, v_size_3512_);
lean_dec(v___x_3521_);
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 3, v_impl_3510_);
lean_ctor_set(v___x_3507_, 0, v___x_3522_);
v___x_3524_ = v___x_3507_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v___x_3522_);
lean_ctor_set(v_reuseFailAlloc_3525_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3525_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3525_, 3, v_impl_3510_);
lean_ctor_set(v_reuseFailAlloc_3525_, 4, v_r_3505_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
return v___x_3524_;
}
}
else
{
lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3591_; 
v_isSharedCheck_3591_ = !lean_is_exclusive(v_impl_3510_);
if (v_isSharedCheck_3591_ == 0)
{
lean_object* v_unused_3592_; lean_object* v_unused_3593_; lean_object* v_unused_3594_; lean_object* v_unused_3595_; lean_object* v_unused_3596_; 
v_unused_3592_ = lean_ctor_get(v_impl_3510_, 4);
lean_dec(v_unused_3592_);
v_unused_3593_ = lean_ctor_get(v_impl_3510_, 3);
lean_dec(v_unused_3593_);
v_unused_3594_ = lean_ctor_get(v_impl_3510_, 2);
lean_dec(v_unused_3594_);
v_unused_3595_ = lean_ctor_get(v_impl_3510_, 1);
lean_dec(v_unused_3595_);
v_unused_3596_ = lean_ctor_get(v_impl_3510_, 0);
lean_dec(v_unused_3596_);
v___x_3527_ = v_impl_3510_;
v_isShared_3528_ = v_isSharedCheck_3591_;
goto v_resetjp_3526_;
}
else
{
lean_dec(v_impl_3510_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3591_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v_size_3529_; lean_object* v_size_3530_; lean_object* v_k_3531_; lean_object* v_v_3532_; lean_object* v_l_3533_; lean_object* v_r_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; uint8_t v___x_3537_; 
v_size_3529_ = lean_ctor_get(v_l_3516_, 0);
v_size_3530_ = lean_ctor_get(v_r_3517_, 0);
v_k_3531_ = lean_ctor_get(v_r_3517_, 1);
v_v_3532_ = lean_ctor_get(v_r_3517_, 2);
v_l_3533_ = lean_ctor_get(v_r_3517_, 3);
v_r_3534_ = lean_ctor_get(v_r_3517_, 4);
v___x_3535_ = lean_unsigned_to_nat(2u);
v___x_3536_ = lean_nat_mul(v___x_3535_, v_size_3529_);
v___x_3537_ = lean_nat_dec_lt(v_size_3530_, v___x_3536_);
lean_dec(v___x_3536_);
if (v___x_3537_ == 0)
{
lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3566_; 
lean_inc(v_r_3534_);
lean_inc(v_l_3533_);
lean_inc(v_v_3532_);
lean_inc(v_k_3531_);
v_isSharedCheck_3566_ = !lean_is_exclusive(v_r_3517_);
if (v_isSharedCheck_3566_ == 0)
{
lean_object* v_unused_3567_; lean_object* v_unused_3568_; lean_object* v_unused_3569_; lean_object* v_unused_3570_; lean_object* v_unused_3571_; 
v_unused_3567_ = lean_ctor_get(v_r_3517_, 4);
lean_dec(v_unused_3567_);
v_unused_3568_ = lean_ctor_get(v_r_3517_, 3);
lean_dec(v_unused_3568_);
v_unused_3569_ = lean_ctor_get(v_r_3517_, 2);
lean_dec(v_unused_3569_);
v_unused_3570_ = lean_ctor_get(v_r_3517_, 1);
lean_dec(v_unused_3570_);
v_unused_3571_ = lean_ctor_get(v_r_3517_, 0);
lean_dec(v_unused_3571_);
v___x_3539_ = v_r_3517_;
v_isShared_3540_ = v_isSharedCheck_3566_;
goto v_resetjp_3538_;
}
else
{
lean_dec(v_r_3517_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3566_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___y_3544_; lean_object* v___y_3545_; lean_object* v___y_3546_; lean_object* v___x_3554_; lean_object* v___y_3556_; 
v___x_3541_ = lean_nat_add(v___x_3511_, v_size_3513_);
lean_dec(v_size_3513_);
v___x_3542_ = lean_nat_add(v___x_3541_, v_size_3512_);
lean_dec(v___x_3541_);
v___x_3554_ = lean_nat_add(v___x_3511_, v_size_3529_);
if (lean_obj_tag(v_l_3533_) == 0)
{
lean_object* v_size_3564_; 
v_size_3564_ = lean_ctor_get(v_l_3533_, 0);
lean_inc(v_size_3564_);
v___y_3556_ = v_size_3564_;
goto v___jp_3555_;
}
else
{
lean_object* v___x_3565_; 
v___x_3565_ = lean_unsigned_to_nat(0u);
v___y_3556_ = v___x_3565_;
goto v___jp_3555_;
}
v___jp_3543_:
{
lean_object* v___x_3547_; lean_object* v___x_3549_; 
v___x_3547_ = lean_nat_add(v___y_3545_, v___y_3546_);
lean_dec(v___y_3546_);
lean_dec(v___y_3545_);
if (v_isShared_3540_ == 0)
{
lean_ctor_set(v___x_3539_, 4, v_r_3505_);
lean_ctor_set(v___x_3539_, 3, v_r_3534_);
lean_ctor_set(v___x_3539_, 2, v_v_3503_);
lean_ctor_set(v___x_3539_, 1, v_k_3502_);
lean_ctor_set(v___x_3539_, 0, v___x_3547_);
v___x_3549_ = v___x_3539_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v___x_3547_);
lean_ctor_set(v_reuseFailAlloc_3553_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3553_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3553_, 3, v_r_3534_);
lean_ctor_set(v_reuseFailAlloc_3553_, 4, v_r_3505_);
v___x_3549_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
lean_object* v___x_3551_; 
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 4, v___x_3549_);
lean_ctor_set(v___x_3527_, 3, v___y_3544_);
lean_ctor_set(v___x_3527_, 2, v_v_3532_);
lean_ctor_set(v___x_3527_, 1, v_k_3531_);
lean_ctor_set(v___x_3527_, 0, v___x_3542_);
v___x_3551_ = v___x_3527_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v___x_3542_);
lean_ctor_set(v_reuseFailAlloc_3552_, 1, v_k_3531_);
lean_ctor_set(v_reuseFailAlloc_3552_, 2, v_v_3532_);
lean_ctor_set(v_reuseFailAlloc_3552_, 3, v___y_3544_);
lean_ctor_set(v_reuseFailAlloc_3552_, 4, v___x_3549_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
return v___x_3551_;
}
}
}
v___jp_3555_:
{
lean_object* v___x_3557_; lean_object* v___x_3559_; 
v___x_3557_ = lean_nat_add(v___x_3554_, v___y_3556_);
lean_dec(v___y_3556_);
lean_dec(v___x_3554_);
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v_l_3533_);
lean_ctor_set(v___x_3507_, 3, v_l_3516_);
lean_ctor_set(v___x_3507_, 2, v_v_3515_);
lean_ctor_set(v___x_3507_, 1, v_k_3514_);
lean_ctor_set(v___x_3507_, 0, v___x_3557_);
v___x_3559_ = v___x_3507_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v___x_3557_);
lean_ctor_set(v_reuseFailAlloc_3563_, 1, v_k_3514_);
lean_ctor_set(v_reuseFailAlloc_3563_, 2, v_v_3515_);
lean_ctor_set(v_reuseFailAlloc_3563_, 3, v_l_3516_);
lean_ctor_set(v_reuseFailAlloc_3563_, 4, v_l_3533_);
v___x_3559_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
lean_object* v___x_3560_; 
v___x_3560_ = lean_nat_add(v___x_3511_, v_size_3512_);
if (lean_obj_tag(v_r_3534_) == 0)
{
lean_object* v_size_3561_; 
v_size_3561_ = lean_ctor_get(v_r_3534_, 0);
lean_inc(v_size_3561_);
v___y_3544_ = v___x_3559_;
v___y_3545_ = v___x_3560_;
v___y_3546_ = v_size_3561_;
goto v___jp_3543_;
}
else
{
lean_object* v___x_3562_; 
v___x_3562_ = lean_unsigned_to_nat(0u);
v___y_3544_ = v___x_3559_;
v___y_3545_ = v___x_3560_;
v___y_3546_ = v___x_3562_;
goto v___jp_3543_;
}
}
}
}
}
else
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3577_; 
lean_del_object(v___x_3507_);
v___x_3572_ = lean_nat_add(v___x_3511_, v_size_3513_);
lean_dec(v_size_3513_);
v___x_3573_ = lean_nat_add(v___x_3572_, v_size_3512_);
lean_dec(v___x_3572_);
v___x_3574_ = lean_nat_add(v___x_3511_, v_size_3512_);
v___x_3575_ = lean_nat_add(v___x_3574_, v_size_3530_);
lean_dec(v___x_3574_);
lean_inc_ref(v_r_3505_);
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 4, v_r_3505_);
lean_ctor_set(v___x_3527_, 3, v_r_3517_);
lean_ctor_set(v___x_3527_, 2, v_v_3503_);
lean_ctor_set(v___x_3527_, 1, v_k_3502_);
lean_ctor_set(v___x_3527_, 0, v___x_3575_);
v___x_3577_ = v___x_3527_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v___x_3575_);
lean_ctor_set(v_reuseFailAlloc_3590_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3590_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3590_, 3, v_r_3517_);
lean_ctor_set(v_reuseFailAlloc_3590_, 4, v_r_3505_);
v___x_3577_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3584_; 
v_isSharedCheck_3584_ = !lean_is_exclusive(v_r_3505_);
if (v_isSharedCheck_3584_ == 0)
{
lean_object* v_unused_3585_; lean_object* v_unused_3586_; lean_object* v_unused_3587_; lean_object* v_unused_3588_; lean_object* v_unused_3589_; 
v_unused_3585_ = lean_ctor_get(v_r_3505_, 4);
lean_dec(v_unused_3585_);
v_unused_3586_ = lean_ctor_get(v_r_3505_, 3);
lean_dec(v_unused_3586_);
v_unused_3587_ = lean_ctor_get(v_r_3505_, 2);
lean_dec(v_unused_3587_);
v_unused_3588_ = lean_ctor_get(v_r_3505_, 1);
lean_dec(v_unused_3588_);
v_unused_3589_ = lean_ctor_get(v_r_3505_, 0);
lean_dec(v_unused_3589_);
v___x_3579_ = v_r_3505_;
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
else
{
lean_dec(v_r_3505_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3584_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3582_; 
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 4, v___x_3577_);
lean_ctor_set(v___x_3579_, 3, v_l_3516_);
lean_ctor_set(v___x_3579_, 2, v_v_3515_);
lean_ctor_set(v___x_3579_, 1, v_k_3514_);
lean_ctor_set(v___x_3579_, 0, v___x_3573_);
v___x_3582_ = v___x_3579_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v___x_3573_);
lean_ctor_set(v_reuseFailAlloc_3583_, 1, v_k_3514_);
lean_ctor_set(v_reuseFailAlloc_3583_, 2, v_v_3515_);
lean_ctor_set(v_reuseFailAlloc_3583_, 3, v_l_3516_);
lean_ctor_set(v_reuseFailAlloc_3583_, 4, v___x_3577_);
v___x_3582_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
return v___x_3582_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3597_; 
v_l_3597_ = lean_ctor_get(v_impl_3510_, 3);
lean_inc(v_l_3597_);
if (lean_obj_tag(v_l_3597_) == 0)
{
lean_object* v_r_3598_; lean_object* v_k_3599_; lean_object* v_v_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3611_; 
v_r_3598_ = lean_ctor_get(v_impl_3510_, 4);
v_k_3599_ = lean_ctor_get(v_impl_3510_, 1);
v_v_3600_ = lean_ctor_get(v_impl_3510_, 2);
v_isSharedCheck_3611_ = !lean_is_exclusive(v_impl_3510_);
if (v_isSharedCheck_3611_ == 0)
{
lean_object* v_unused_3612_; lean_object* v_unused_3613_; 
v_unused_3612_ = lean_ctor_get(v_impl_3510_, 3);
lean_dec(v_unused_3612_);
v_unused_3613_ = lean_ctor_get(v_impl_3510_, 0);
lean_dec(v_unused_3613_);
v___x_3602_ = v_impl_3510_;
v_isShared_3603_ = v_isSharedCheck_3611_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_r_3598_);
lean_inc(v_v_3600_);
lean_inc(v_k_3599_);
lean_dec(v_impl_3510_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3611_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3604_; lean_object* v___x_3606_; 
v___x_3604_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_3598_);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 3, v_r_3598_);
lean_ctor_set(v___x_3602_, 2, v_v_3503_);
lean_ctor_set(v___x_3602_, 1, v_k_3502_);
lean_ctor_set(v___x_3602_, 0, v___x_3511_);
v___x_3606_ = v___x_3602_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3511_);
lean_ctor_set(v_reuseFailAlloc_3610_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3610_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3610_, 3, v_r_3598_);
lean_ctor_set(v_reuseFailAlloc_3610_, 4, v_r_3598_);
v___x_3606_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
lean_object* v___x_3608_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v___x_3606_);
lean_ctor_set(v___x_3507_, 3, v_l_3597_);
lean_ctor_set(v___x_3507_, 2, v_v_3600_);
lean_ctor_set(v___x_3507_, 1, v_k_3599_);
lean_ctor_set(v___x_3507_, 0, v___x_3604_);
v___x_3608_ = v___x_3507_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v___x_3604_);
lean_ctor_set(v_reuseFailAlloc_3609_, 1, v_k_3599_);
lean_ctor_set(v_reuseFailAlloc_3609_, 2, v_v_3600_);
lean_ctor_set(v_reuseFailAlloc_3609_, 3, v_l_3597_);
lean_ctor_set(v_reuseFailAlloc_3609_, 4, v___x_3606_);
v___x_3608_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
return v___x_3608_;
}
}
}
}
else
{
lean_object* v_r_3614_; 
v_r_3614_ = lean_ctor_get(v_impl_3510_, 4);
lean_inc(v_r_3614_);
if (lean_obj_tag(v_r_3614_) == 0)
{
lean_object* v_k_3615_; lean_object* v_v_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3639_; 
v_k_3615_ = lean_ctor_get(v_impl_3510_, 1);
v_v_3616_ = lean_ctor_get(v_impl_3510_, 2);
v_isSharedCheck_3639_ = !lean_is_exclusive(v_impl_3510_);
if (v_isSharedCheck_3639_ == 0)
{
lean_object* v_unused_3640_; lean_object* v_unused_3641_; lean_object* v_unused_3642_; 
v_unused_3640_ = lean_ctor_get(v_impl_3510_, 4);
lean_dec(v_unused_3640_);
v_unused_3641_ = lean_ctor_get(v_impl_3510_, 3);
lean_dec(v_unused_3641_);
v_unused_3642_ = lean_ctor_get(v_impl_3510_, 0);
lean_dec(v_unused_3642_);
v___x_3618_ = v_impl_3510_;
v_isShared_3619_ = v_isSharedCheck_3639_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_v_3616_);
lean_inc(v_k_3615_);
lean_dec(v_impl_3510_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3639_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v_k_3620_; lean_object* v_v_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3635_; 
v_k_3620_ = lean_ctor_get(v_r_3614_, 1);
v_v_3621_ = lean_ctor_get(v_r_3614_, 2);
v_isSharedCheck_3635_ = !lean_is_exclusive(v_r_3614_);
if (v_isSharedCheck_3635_ == 0)
{
lean_object* v_unused_3636_; lean_object* v_unused_3637_; lean_object* v_unused_3638_; 
v_unused_3636_ = lean_ctor_get(v_r_3614_, 4);
lean_dec(v_unused_3636_);
v_unused_3637_ = lean_ctor_get(v_r_3614_, 3);
lean_dec(v_unused_3637_);
v_unused_3638_ = lean_ctor_get(v_r_3614_, 0);
lean_dec(v_unused_3638_);
v___x_3623_ = v_r_3614_;
v_isShared_3624_ = v_isSharedCheck_3635_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_v_3621_);
lean_inc(v_k_3620_);
lean_dec(v_r_3614_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3635_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
lean_object* v___x_3625_; lean_object* v___x_3627_; 
v___x_3625_ = lean_unsigned_to_nat(3u);
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 4, v_l_3597_);
lean_ctor_set(v___x_3623_, 3, v_l_3597_);
lean_ctor_set(v___x_3623_, 2, v_v_3616_);
lean_ctor_set(v___x_3623_, 1, v_k_3615_);
lean_ctor_set(v___x_3623_, 0, v___x_3511_);
v___x_3627_ = v___x_3623_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3634_; 
v_reuseFailAlloc_3634_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3634_, 0, v___x_3511_);
lean_ctor_set(v_reuseFailAlloc_3634_, 1, v_k_3615_);
lean_ctor_set(v_reuseFailAlloc_3634_, 2, v_v_3616_);
lean_ctor_set(v_reuseFailAlloc_3634_, 3, v_l_3597_);
lean_ctor_set(v_reuseFailAlloc_3634_, 4, v_l_3597_);
v___x_3627_ = v_reuseFailAlloc_3634_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
lean_object* v___x_3629_; 
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 4, v_l_3597_);
lean_ctor_set(v___x_3618_, 2, v_v_3503_);
lean_ctor_set(v___x_3618_, 1, v_k_3502_);
lean_ctor_set(v___x_3618_, 0, v___x_3511_);
v___x_3629_ = v___x_3618_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v___x_3511_);
lean_ctor_set(v_reuseFailAlloc_3633_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3633_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3633_, 3, v_l_3597_);
lean_ctor_set(v_reuseFailAlloc_3633_, 4, v_l_3597_);
v___x_3629_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
lean_object* v___x_3631_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v___x_3629_);
lean_ctor_set(v___x_3507_, 3, v___x_3627_);
lean_ctor_set(v___x_3507_, 2, v_v_3621_);
lean_ctor_set(v___x_3507_, 1, v_k_3620_);
lean_ctor_set(v___x_3507_, 0, v___x_3625_);
v___x_3631_ = v___x_3507_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v___x_3625_);
lean_ctor_set(v_reuseFailAlloc_3632_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3632_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3632_, 3, v___x_3627_);
lean_ctor_set(v_reuseFailAlloc_3632_, 4, v___x_3629_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
}
}
}
else
{
lean_object* v___x_3643_; lean_object* v___x_3645_; 
v___x_3643_ = lean_unsigned_to_nat(2u);
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v_r_3614_);
lean_ctor_set(v___x_3507_, 3, v_impl_3510_);
lean_ctor_set(v___x_3507_, 0, v___x_3643_);
v___x_3645_ = v___x_3507_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v___x_3643_);
lean_ctor_set(v_reuseFailAlloc_3646_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3646_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3646_, 3, v_impl_3510_);
lean_ctor_set(v_reuseFailAlloc_3646_, 4, v_r_3614_);
v___x_3645_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
return v___x_3645_;
}
}
}
}
}
case 1:
{
lean_object* v___x_3648_; 
lean_dec(v_v_3503_);
lean_dec(v_k_3502_);
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 2, v_v_3499_);
lean_ctor_set(v___x_3507_, 1, v_k_3498_);
v___x_3648_ = v___x_3507_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_size_3501_);
lean_ctor_set(v_reuseFailAlloc_3649_, 1, v_k_3498_);
lean_ctor_set(v_reuseFailAlloc_3649_, 2, v_v_3499_);
lean_ctor_set(v_reuseFailAlloc_3649_, 3, v_l_3504_);
lean_ctor_set(v_reuseFailAlloc_3649_, 4, v_r_3505_);
v___x_3648_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
return v___x_3648_;
}
}
default: 
{
lean_object* v_impl_3650_; lean_object* v___x_3651_; 
lean_dec(v_size_3501_);
v_impl_3650_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3498_, v_v_3499_, v_r_3505_);
v___x_3651_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_3504_) == 0)
{
lean_object* v_size_3652_; lean_object* v_size_3653_; lean_object* v_k_3654_; lean_object* v_v_3655_; lean_object* v_l_3656_; lean_object* v_r_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; uint8_t v___x_3660_; 
v_size_3652_ = lean_ctor_get(v_l_3504_, 0);
v_size_3653_ = lean_ctor_get(v_impl_3650_, 0);
lean_inc(v_size_3653_);
v_k_3654_ = lean_ctor_get(v_impl_3650_, 1);
lean_inc(v_k_3654_);
v_v_3655_ = lean_ctor_get(v_impl_3650_, 2);
lean_inc(v_v_3655_);
v_l_3656_ = lean_ctor_get(v_impl_3650_, 3);
lean_inc(v_l_3656_);
v_r_3657_ = lean_ctor_get(v_impl_3650_, 4);
lean_inc(v_r_3657_);
v___x_3658_ = lean_unsigned_to_nat(3u);
v___x_3659_ = lean_nat_mul(v___x_3658_, v_size_3652_);
v___x_3660_ = lean_nat_dec_lt(v___x_3659_, v_size_3653_);
lean_dec(v___x_3659_);
if (v___x_3660_ == 0)
{
lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3664_; 
lean_dec(v_r_3657_);
lean_dec(v_l_3656_);
lean_dec(v_v_3655_);
lean_dec(v_k_3654_);
v___x_3661_ = lean_nat_add(v___x_3651_, v_size_3652_);
v___x_3662_ = lean_nat_add(v___x_3661_, v_size_3653_);
lean_dec(v_size_3653_);
lean_dec(v___x_3661_);
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v_impl_3650_);
lean_ctor_set(v___x_3507_, 0, v___x_3662_);
v___x_3664_ = v___x_3507_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v___x_3662_);
lean_ctor_set(v_reuseFailAlloc_3665_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3665_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3665_, 3, v_l_3504_);
lean_ctor_set(v_reuseFailAlloc_3665_, 4, v_impl_3650_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
else
{
lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3729_; 
v_isSharedCheck_3729_ = !lean_is_exclusive(v_impl_3650_);
if (v_isSharedCheck_3729_ == 0)
{
lean_object* v_unused_3730_; lean_object* v_unused_3731_; lean_object* v_unused_3732_; lean_object* v_unused_3733_; lean_object* v_unused_3734_; 
v_unused_3730_ = lean_ctor_get(v_impl_3650_, 4);
lean_dec(v_unused_3730_);
v_unused_3731_ = lean_ctor_get(v_impl_3650_, 3);
lean_dec(v_unused_3731_);
v_unused_3732_ = lean_ctor_get(v_impl_3650_, 2);
lean_dec(v_unused_3732_);
v_unused_3733_ = lean_ctor_get(v_impl_3650_, 1);
lean_dec(v_unused_3733_);
v_unused_3734_ = lean_ctor_get(v_impl_3650_, 0);
lean_dec(v_unused_3734_);
v___x_3667_ = v_impl_3650_;
v_isShared_3668_ = v_isSharedCheck_3729_;
goto v_resetjp_3666_;
}
else
{
lean_dec(v_impl_3650_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3729_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v_size_3669_; lean_object* v_k_3670_; lean_object* v_v_3671_; lean_object* v_l_3672_; lean_object* v_r_3673_; lean_object* v_size_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; uint8_t v___x_3677_; 
v_size_3669_ = lean_ctor_get(v_l_3656_, 0);
v_k_3670_ = lean_ctor_get(v_l_3656_, 1);
v_v_3671_ = lean_ctor_get(v_l_3656_, 2);
v_l_3672_ = lean_ctor_get(v_l_3656_, 3);
v_r_3673_ = lean_ctor_get(v_l_3656_, 4);
v_size_3674_ = lean_ctor_get(v_r_3657_, 0);
v___x_3675_ = lean_unsigned_to_nat(2u);
v___x_3676_ = lean_nat_mul(v___x_3675_, v_size_3674_);
v___x_3677_ = lean_nat_dec_lt(v_size_3669_, v___x_3676_);
lean_dec(v___x_3676_);
if (v___x_3677_ == 0)
{
lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3705_; 
lean_inc(v_r_3673_);
lean_inc(v_l_3672_);
lean_inc(v_v_3671_);
lean_inc(v_k_3670_);
v_isSharedCheck_3705_ = !lean_is_exclusive(v_l_3656_);
if (v_isSharedCheck_3705_ == 0)
{
lean_object* v_unused_3706_; lean_object* v_unused_3707_; lean_object* v_unused_3708_; lean_object* v_unused_3709_; lean_object* v_unused_3710_; 
v_unused_3706_ = lean_ctor_get(v_l_3656_, 4);
lean_dec(v_unused_3706_);
v_unused_3707_ = lean_ctor_get(v_l_3656_, 3);
lean_dec(v_unused_3707_);
v_unused_3708_ = lean_ctor_get(v_l_3656_, 2);
lean_dec(v_unused_3708_);
v_unused_3709_ = lean_ctor_get(v_l_3656_, 1);
lean_dec(v_unused_3709_);
v_unused_3710_ = lean_ctor_get(v_l_3656_, 0);
lean_dec(v_unused_3710_);
v___x_3679_ = v_l_3656_;
v_isShared_3680_ = v_isSharedCheck_3705_;
goto v_resetjp_3678_;
}
else
{
lean_dec(v_l_3656_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3705_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___y_3684_; lean_object* v___y_3685_; lean_object* v___y_3686_; lean_object* v___y_3695_; 
v___x_3681_ = lean_nat_add(v___x_3651_, v_size_3652_);
v___x_3682_ = lean_nat_add(v___x_3681_, v_size_3653_);
lean_dec(v_size_3653_);
if (lean_obj_tag(v_l_3672_) == 0)
{
lean_object* v_size_3703_; 
v_size_3703_ = lean_ctor_get(v_l_3672_, 0);
lean_inc(v_size_3703_);
v___y_3695_ = v_size_3703_;
goto v___jp_3694_;
}
else
{
lean_object* v___x_3704_; 
v___x_3704_ = lean_unsigned_to_nat(0u);
v___y_3695_ = v___x_3704_;
goto v___jp_3694_;
}
v___jp_3683_:
{
lean_object* v___x_3687_; lean_object* v___x_3689_; 
v___x_3687_ = lean_nat_add(v___y_3685_, v___y_3686_);
lean_dec(v___y_3686_);
lean_dec(v___y_3685_);
if (v_isShared_3680_ == 0)
{
lean_ctor_set(v___x_3679_, 4, v_r_3657_);
lean_ctor_set(v___x_3679_, 3, v_r_3673_);
lean_ctor_set(v___x_3679_, 2, v_v_3655_);
lean_ctor_set(v___x_3679_, 1, v_k_3654_);
lean_ctor_set(v___x_3679_, 0, v___x_3687_);
v___x_3689_ = v___x_3679_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v___x_3687_);
lean_ctor_set(v_reuseFailAlloc_3693_, 1, v_k_3654_);
lean_ctor_set(v_reuseFailAlloc_3693_, 2, v_v_3655_);
lean_ctor_set(v_reuseFailAlloc_3693_, 3, v_r_3673_);
lean_ctor_set(v_reuseFailAlloc_3693_, 4, v_r_3657_);
v___x_3689_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
lean_object* v___x_3691_; 
if (v_isShared_3668_ == 0)
{
lean_ctor_set(v___x_3667_, 4, v___x_3689_);
lean_ctor_set(v___x_3667_, 3, v___y_3684_);
lean_ctor_set(v___x_3667_, 2, v_v_3671_);
lean_ctor_set(v___x_3667_, 1, v_k_3670_);
lean_ctor_set(v___x_3667_, 0, v___x_3682_);
v___x_3691_ = v___x_3667_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v___x_3682_);
lean_ctor_set(v_reuseFailAlloc_3692_, 1, v_k_3670_);
lean_ctor_set(v_reuseFailAlloc_3692_, 2, v_v_3671_);
lean_ctor_set(v_reuseFailAlloc_3692_, 3, v___y_3684_);
lean_ctor_set(v_reuseFailAlloc_3692_, 4, v___x_3689_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
v___jp_3694_:
{
lean_object* v___x_3696_; lean_object* v___x_3698_; 
v___x_3696_ = lean_nat_add(v___x_3681_, v___y_3695_);
lean_dec(v___y_3695_);
lean_dec(v___x_3681_);
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v_l_3672_);
lean_ctor_set(v___x_3507_, 0, v___x_3696_);
v___x_3698_ = v___x_3507_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v___x_3696_);
lean_ctor_set(v_reuseFailAlloc_3702_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3702_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3702_, 3, v_l_3504_);
lean_ctor_set(v_reuseFailAlloc_3702_, 4, v_l_3672_);
v___x_3698_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
lean_object* v___x_3699_; 
v___x_3699_ = lean_nat_add(v___x_3651_, v_size_3674_);
if (lean_obj_tag(v_r_3673_) == 0)
{
lean_object* v_size_3700_; 
v_size_3700_ = lean_ctor_get(v_r_3673_, 0);
lean_inc(v_size_3700_);
v___y_3684_ = v___x_3698_;
v___y_3685_ = v___x_3699_;
v___y_3686_ = v_size_3700_;
goto v___jp_3683_;
}
else
{
lean_object* v___x_3701_; 
v___x_3701_ = lean_unsigned_to_nat(0u);
v___y_3684_ = v___x_3698_;
v___y_3685_ = v___x_3699_;
v___y_3686_ = v___x_3701_;
goto v___jp_3683_;
}
}
}
}
}
else
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3715_; 
lean_del_object(v___x_3507_);
v___x_3711_ = lean_nat_add(v___x_3651_, v_size_3652_);
v___x_3712_ = lean_nat_add(v___x_3711_, v_size_3653_);
lean_dec(v_size_3653_);
v___x_3713_ = lean_nat_add(v___x_3711_, v_size_3669_);
lean_dec(v___x_3711_);
lean_inc_ref(v_l_3504_);
if (v_isShared_3668_ == 0)
{
lean_ctor_set(v___x_3667_, 4, v_l_3656_);
lean_ctor_set(v___x_3667_, 3, v_l_3504_);
lean_ctor_set(v___x_3667_, 2, v_v_3503_);
lean_ctor_set(v___x_3667_, 1, v_k_3502_);
lean_ctor_set(v___x_3667_, 0, v___x_3713_);
v___x_3715_ = v___x_3667_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v___x_3713_);
lean_ctor_set(v_reuseFailAlloc_3728_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3728_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3728_, 3, v_l_3504_);
lean_ctor_set(v_reuseFailAlloc_3728_, 4, v_l_3656_);
v___x_3715_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3722_; 
v_isSharedCheck_3722_ = !lean_is_exclusive(v_l_3504_);
if (v_isSharedCheck_3722_ == 0)
{
lean_object* v_unused_3723_; lean_object* v_unused_3724_; lean_object* v_unused_3725_; lean_object* v_unused_3726_; lean_object* v_unused_3727_; 
v_unused_3723_ = lean_ctor_get(v_l_3504_, 4);
lean_dec(v_unused_3723_);
v_unused_3724_ = lean_ctor_get(v_l_3504_, 3);
lean_dec(v_unused_3724_);
v_unused_3725_ = lean_ctor_get(v_l_3504_, 2);
lean_dec(v_unused_3725_);
v_unused_3726_ = lean_ctor_get(v_l_3504_, 1);
lean_dec(v_unused_3726_);
v_unused_3727_ = lean_ctor_get(v_l_3504_, 0);
lean_dec(v_unused_3727_);
v___x_3717_ = v_l_3504_;
v_isShared_3718_ = v_isSharedCheck_3722_;
goto v_resetjp_3716_;
}
else
{
lean_dec(v_l_3504_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3722_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
lean_object* v___x_3720_; 
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 4, v_r_3657_);
lean_ctor_set(v___x_3717_, 3, v___x_3715_);
lean_ctor_set(v___x_3717_, 2, v_v_3655_);
lean_ctor_set(v___x_3717_, 1, v_k_3654_);
lean_ctor_set(v___x_3717_, 0, v___x_3712_);
v___x_3720_ = v___x_3717_;
goto v_reusejp_3719_;
}
else
{
lean_object* v_reuseFailAlloc_3721_; 
v_reuseFailAlloc_3721_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3721_, 0, v___x_3712_);
lean_ctor_set(v_reuseFailAlloc_3721_, 1, v_k_3654_);
lean_ctor_set(v_reuseFailAlloc_3721_, 2, v_v_3655_);
lean_ctor_set(v_reuseFailAlloc_3721_, 3, v___x_3715_);
lean_ctor_set(v_reuseFailAlloc_3721_, 4, v_r_3657_);
v___x_3720_ = v_reuseFailAlloc_3721_;
goto v_reusejp_3719_;
}
v_reusejp_3719_:
{
return v___x_3720_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3735_; 
v_l_3735_ = lean_ctor_get(v_impl_3650_, 3);
lean_inc(v_l_3735_);
if (lean_obj_tag(v_l_3735_) == 0)
{
lean_object* v_r_3736_; lean_object* v_k_3737_; lean_object* v_v_3738_; lean_object* v___x_3740_; uint8_t v_isShared_3741_; uint8_t v_isSharedCheck_3761_; 
v_r_3736_ = lean_ctor_get(v_impl_3650_, 4);
v_k_3737_ = lean_ctor_get(v_impl_3650_, 1);
v_v_3738_ = lean_ctor_get(v_impl_3650_, 2);
v_isSharedCheck_3761_ = !lean_is_exclusive(v_impl_3650_);
if (v_isSharedCheck_3761_ == 0)
{
lean_object* v_unused_3762_; lean_object* v_unused_3763_; 
v_unused_3762_ = lean_ctor_get(v_impl_3650_, 3);
lean_dec(v_unused_3762_);
v_unused_3763_ = lean_ctor_get(v_impl_3650_, 0);
lean_dec(v_unused_3763_);
v___x_3740_ = v_impl_3650_;
v_isShared_3741_ = v_isSharedCheck_3761_;
goto v_resetjp_3739_;
}
else
{
lean_inc(v_r_3736_);
lean_inc(v_v_3738_);
lean_inc(v_k_3737_);
lean_dec(v_impl_3650_);
v___x_3740_ = lean_box(0);
v_isShared_3741_ = v_isSharedCheck_3761_;
goto v_resetjp_3739_;
}
v_resetjp_3739_:
{
lean_object* v_k_3742_; lean_object* v_v_3743_; lean_object* v___x_3745_; uint8_t v_isShared_3746_; uint8_t v_isSharedCheck_3757_; 
v_k_3742_ = lean_ctor_get(v_l_3735_, 1);
v_v_3743_ = lean_ctor_get(v_l_3735_, 2);
v_isSharedCheck_3757_ = !lean_is_exclusive(v_l_3735_);
if (v_isSharedCheck_3757_ == 0)
{
lean_object* v_unused_3758_; lean_object* v_unused_3759_; lean_object* v_unused_3760_; 
v_unused_3758_ = lean_ctor_get(v_l_3735_, 4);
lean_dec(v_unused_3758_);
v_unused_3759_ = lean_ctor_get(v_l_3735_, 3);
lean_dec(v_unused_3759_);
v_unused_3760_ = lean_ctor_get(v_l_3735_, 0);
lean_dec(v_unused_3760_);
v___x_3745_ = v_l_3735_;
v_isShared_3746_ = v_isSharedCheck_3757_;
goto v_resetjp_3744_;
}
else
{
lean_inc(v_v_3743_);
lean_inc(v_k_3742_);
lean_dec(v_l_3735_);
v___x_3745_ = lean_box(0);
v_isShared_3746_ = v_isSharedCheck_3757_;
goto v_resetjp_3744_;
}
v_resetjp_3744_:
{
lean_object* v___x_3747_; lean_object* v___x_3749_; 
v___x_3747_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_3736_, 2);
if (v_isShared_3746_ == 0)
{
lean_ctor_set(v___x_3745_, 4, v_r_3736_);
lean_ctor_set(v___x_3745_, 3, v_r_3736_);
lean_ctor_set(v___x_3745_, 2, v_v_3503_);
lean_ctor_set(v___x_3745_, 1, v_k_3502_);
lean_ctor_set(v___x_3745_, 0, v___x_3651_);
v___x_3749_ = v___x_3745_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v___x_3651_);
lean_ctor_set(v_reuseFailAlloc_3756_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3756_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3756_, 3, v_r_3736_);
lean_ctor_set(v_reuseFailAlloc_3756_, 4, v_r_3736_);
v___x_3749_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
lean_object* v___x_3751_; 
lean_inc(v_r_3736_);
if (v_isShared_3741_ == 0)
{
lean_ctor_set(v___x_3740_, 3, v_r_3736_);
lean_ctor_set(v___x_3740_, 0, v___x_3651_);
v___x_3751_ = v___x_3740_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3755_; 
v_reuseFailAlloc_3755_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3755_, 0, v___x_3651_);
lean_ctor_set(v_reuseFailAlloc_3755_, 1, v_k_3737_);
lean_ctor_set(v_reuseFailAlloc_3755_, 2, v_v_3738_);
lean_ctor_set(v_reuseFailAlloc_3755_, 3, v_r_3736_);
lean_ctor_set(v_reuseFailAlloc_3755_, 4, v_r_3736_);
v___x_3751_ = v_reuseFailAlloc_3755_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
lean_object* v___x_3753_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v___x_3751_);
lean_ctor_set(v___x_3507_, 3, v___x_3749_);
lean_ctor_set(v___x_3507_, 2, v_v_3743_);
lean_ctor_set(v___x_3507_, 1, v_k_3742_);
lean_ctor_set(v___x_3507_, 0, v___x_3747_);
v___x_3753_ = v___x_3507_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v___x_3747_);
lean_ctor_set(v_reuseFailAlloc_3754_, 1, v_k_3742_);
lean_ctor_set(v_reuseFailAlloc_3754_, 2, v_v_3743_);
lean_ctor_set(v_reuseFailAlloc_3754_, 3, v___x_3749_);
lean_ctor_set(v_reuseFailAlloc_3754_, 4, v___x_3751_);
v___x_3753_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
return v___x_3753_;
}
}
}
}
}
}
else
{
lean_object* v_r_3764_; 
v_r_3764_ = lean_ctor_get(v_impl_3650_, 4);
lean_inc(v_r_3764_);
if (lean_obj_tag(v_r_3764_) == 0)
{
lean_object* v_k_3765_; lean_object* v_v_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3777_; 
v_k_3765_ = lean_ctor_get(v_impl_3650_, 1);
v_v_3766_ = lean_ctor_get(v_impl_3650_, 2);
v_isSharedCheck_3777_ = !lean_is_exclusive(v_impl_3650_);
if (v_isSharedCheck_3777_ == 0)
{
lean_object* v_unused_3778_; lean_object* v_unused_3779_; lean_object* v_unused_3780_; 
v_unused_3778_ = lean_ctor_get(v_impl_3650_, 4);
lean_dec(v_unused_3778_);
v_unused_3779_ = lean_ctor_get(v_impl_3650_, 3);
lean_dec(v_unused_3779_);
v_unused_3780_ = lean_ctor_get(v_impl_3650_, 0);
lean_dec(v_unused_3780_);
v___x_3768_ = v_impl_3650_;
v_isShared_3769_ = v_isSharedCheck_3777_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_v_3766_);
lean_inc(v_k_3765_);
lean_dec(v_impl_3650_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3777_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3770_; lean_object* v___x_3772_; 
v___x_3770_ = lean_unsigned_to_nat(3u);
if (v_isShared_3769_ == 0)
{
lean_ctor_set(v___x_3768_, 4, v_l_3735_);
lean_ctor_set(v___x_3768_, 2, v_v_3503_);
lean_ctor_set(v___x_3768_, 1, v_k_3502_);
lean_ctor_set(v___x_3768_, 0, v___x_3651_);
v___x_3772_ = v___x_3768_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v___x_3651_);
lean_ctor_set(v_reuseFailAlloc_3776_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3776_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3776_, 3, v_l_3735_);
lean_ctor_set(v_reuseFailAlloc_3776_, 4, v_l_3735_);
v___x_3772_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
lean_object* v___x_3774_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v_r_3764_);
lean_ctor_set(v___x_3507_, 3, v___x_3772_);
lean_ctor_set(v___x_3507_, 2, v_v_3766_);
lean_ctor_set(v___x_3507_, 1, v_k_3765_);
lean_ctor_set(v___x_3507_, 0, v___x_3770_);
v___x_3774_ = v___x_3507_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v___x_3770_);
lean_ctor_set(v_reuseFailAlloc_3775_, 1, v_k_3765_);
lean_ctor_set(v_reuseFailAlloc_3775_, 2, v_v_3766_);
lean_ctor_set(v_reuseFailAlloc_3775_, 3, v___x_3772_);
lean_ctor_set(v_reuseFailAlloc_3775_, 4, v_r_3764_);
v___x_3774_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
return v___x_3774_;
}
}
}
}
else
{
lean_object* v___x_3781_; lean_object* v___x_3783_; 
v___x_3781_ = lean_unsigned_to_nat(2u);
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v_impl_3650_);
lean_ctor_set(v___x_3507_, 3, v_r_3764_);
lean_ctor_set(v___x_3507_, 0, v___x_3781_);
v___x_3783_ = v___x_3507_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v___x_3781_);
lean_ctor_set(v_reuseFailAlloc_3784_, 1, v_k_3502_);
lean_ctor_set(v_reuseFailAlloc_3784_, 2, v_v_3503_);
lean_ctor_set(v_reuseFailAlloc_3784_, 3, v_r_3764_);
lean_ctor_set(v_reuseFailAlloc_3784_, 4, v_impl_3650_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
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
lean_object* v___x_3786_; lean_object* v___x_3787_; 
v___x_3786_ = lean_unsigned_to_nat(1u);
v___x_3787_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3787_, 0, v___x_3786_);
lean_ctor_set(v___x_3787_, 1, v_k_3498_);
lean_ctor_set(v___x_3787_, 2, v_v_3499_);
lean_ctor_set(v___x_3787_, 3, v_t_3500_);
lean_ctor_set(v___x_3787_, 4, v_t_3500_);
return v___x_3787_;
}
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__0(void){
_start:
{
lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; 
v___x_3788_ = lean_box(1);
v___x_3789_ = l_Lake_LeanLib_defaultFacetConfig;
v___x_3790_ = l_Lake_LeanLib_defaultFacet;
v___x_3791_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3790_, v___x_3789_, v___x_3788_);
return v___x_3791_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__1(void){
_start:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
v___x_3792_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__0, &l_Lake_LeanLib_initFacetConfigs___closed__0_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__0);
v___x_3793_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig));
v___x_3794_ = l_Lake_LeanLib_modulesFacet;
v___x_3795_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3794_, v___x_3793_, v___x_3792_);
return v___x_3795_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__2(void){
_start:
{
lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3796_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__1, &l_Lake_LeanLib_initFacetConfigs___closed__1_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__1);
v___x_3797_ = l_Lake_LeanLib_leanArtsFacetConfig;
v___x_3798_ = l_Lake_LeanLib_leanArtsFacet;
v___x_3799_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3798_, v___x_3797_, v___x_3796_);
return v___x_3799_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__3(void){
_start:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; 
v___x_3800_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__2, &l_Lake_LeanLib_initFacetConfigs___closed__2_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__2);
v___x_3801_ = l_Lake_LeanLib_staticFacetConfig;
v___x_3802_ = l_Lake_LeanLib_staticFacet;
v___x_3803_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3802_, v___x_3801_, v___x_3800_);
return v___x_3803_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__4(void){
_start:
{
lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v___x_3804_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__3, &l_Lake_LeanLib_initFacetConfigs___closed__3_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__3);
v___x_3805_ = l_Lake_LeanLib_staticExportFacetConfig;
v___x_3806_ = l_Lake_LeanLib_staticExportFacet;
v___x_3807_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3806_, v___x_3805_, v___x_3804_);
return v___x_3807_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__5(void){
_start:
{
lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3808_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__4, &l_Lake_LeanLib_initFacetConfigs___closed__4_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__4);
v___x_3809_ = l_Lake_LeanLib_sharedFacetConfig;
v___x_3810_ = l_Lake_LeanLib_sharedFacet;
v___x_3811_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3810_, v___x_3809_, v___x_3808_);
return v___x_3811_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__6(void){
_start:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; 
v___x_3812_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__5, &l_Lake_LeanLib_initFacetConfigs___closed__5_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__5);
v___x_3813_ = l_Lake_LeanLib_extraDepFacetConfig;
v___x_3814_ = l_Lake_LeanLib_extraDepFacet;
v___x_3815_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3814_, v___x_3813_, v___x_3812_);
return v___x_3815_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs(void){
_start:
{
lean_object* v___x_3816_; 
v___x_3816_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__6, &l_Lake_LeanLib_initFacetConfigs___closed__6_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__6);
return v___x_3816_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0(lean_object* v_00_u03b2_3817_, lean_object* v_k_3818_, lean_object* v_v_3819_, lean_object* v_t_3820_, lean_object* v_hl_3821_){
_start:
{
lean_object* v___x_3822_; 
v___x_3822_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3818_, v_v_3819_, v_t_3820_);
return v___x_3822_;
}
}
static lean_object* _init_l_Lake_initLibraryFacetConfigs(void){
_start:
{
lean_object* v___x_3823_; 
v___x_3823_ = l_Lake_LeanLib_initFacetConfigs;
return v___x_3823_;
}
}
lean_object* runtime_initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Common(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Target_Fetch(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_LeanLib_leanArtsFacetConfig = _init_l_Lake_LeanLib_leanArtsFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_leanArtsFacetConfig);
l_Lake_LeanLib_staticFacetConfig = _init_l_Lake_LeanLib_staticFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_staticFacetConfig);
l_Lake_LeanLib_staticExportFacetConfig = _init_l_Lake_LeanLib_staticExportFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_staticExportFacetConfig);
l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5 = _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5();
lean_mark_persistent(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5);
l_Lake_LeanLib_sharedFacetConfig = _init_l_Lake_LeanLib_sharedFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_sharedFacetConfig);
l_Lake_LeanLib_extraDepFacetConfig = _init_l_Lake_LeanLib_extraDepFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_extraDepFacetConfig);
l_Lake_LeanLib_defaultFacetConfig = _init_l_Lake_LeanLib_defaultFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_defaultFacetConfig);
l_Lake_LeanLib_initFacetConfigs = _init_l_Lake_LeanLib_initFacetConfigs();
lean_mark_persistent(l_Lake_LeanLib_initFacetConfigs);
l_Lake_initLibraryFacetConfigs = _init_l_Lake_initLibraryFacetConfigs();
lean_mark_persistent(l_Lake_initLibraryFacetConfigs);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* initialize_Lake_Build_Common(uint8_t builtin);
lean_object* initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* initialize_Lake_Build_Target_Fetch(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Library(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Library(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Library(builtin);
}
#ifdef __cplusplus
}
#endif
