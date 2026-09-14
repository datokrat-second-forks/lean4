// Lean compiler output
// Module: Lake.CLI.Build
// Imports: public import Lake.CLI.Error public import Lake.Config.Workspace import Lake.Build.Infos import Lake.Build.Job.Monad public import Lake.Build.Job.Register import Lake.Util.IO import Init.Data.Iterators.Consumers
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lake_FacetConfigMap_get_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lake_Package_findTargetModule_x3f(lean_object*, lean_object*);
extern lean_object* l_Lake_Module_keyword;
lean_object* l_Lake_Workspace_findModuleFacetConfig_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
extern lean_object* l_Lake_Module_leanArtsFacet;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lake_BuildInfo_key(lean_object*);
lean_object* l_Lake_BuildKey_toSimpleString(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lake_Job_renew___redArg(lean_object*);
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lake_resolvePath(lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* l_Lake_Workspace_findModuleBySrc_x3f(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_stringToLegalOrSimpleName(lean_object*);
lean_object* l_Lake_Workspace_findTargetModule_x3f(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findTargetDecl_x3f(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Lake_Workspace_findPackageFacetConfig_x3f(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* l_Lake_formatQuery___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Job_mixArray___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findLeanExe_x3f(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanExe_keyword;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildSpecs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "<collection>"};
static const lean_object* l_Lake_buildSpecs___closed__0 = (const lean_object*)&l_Lake_buildSpecs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_buildSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildSpecs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_querySpecs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_querySpecs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0 = (const lean_object*)&l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0_value;
static const lean_closure_object l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveCustomTarget(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0_value;
static const lean_ctor_object l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 214, 131, 210, 10, 90, 37, 134)}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0_value;
static const lean_ctor_object l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0_value)}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "package"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1_value;
static lean_once_cell_t l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0 = (const lean_object*)&l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0_value;
static lean_once_cell_t l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_parseTargetSpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_parseTargetSpec___closed__0 = (const lean_object*)&l_Lake_parseTargetSpec___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_parseTargetSpecs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_parseTargetSpecs___closed__0 = (const lean_object*)&l_Lake_parseTargetSpecs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec___redArg(lean_object* v_info_1_, lean_object* v_inst_2_){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = 1;
v___x_4_ = lean_alloc_closure((void*)(l_Lake_formatQuery___boxed), 4, 2);
lean_closure_set(v___x_4_, 0, lean_box(0));
lean_closure_set(v___x_4_, 1, v_inst_2_);
v___x_5_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_5_, 0, v_info_1_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
lean_ctor_set_uint8(v___x_5_, sizeof(void*)*2, v___x_3_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_mkBuildSpec(lean_object* v_00_u03b1_6_, lean_object* v_info_7_, lean_object* v_inst_8_, lean_object* v_h_9_){
_start:
{
uint8_t v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_10_ = 1;
v___x_11_ = lean_alloc_closure((void*)(l_Lake_formatQuery___boxed), 4, 2);
lean_closure_set(v___x_11_, 0, lean_box(0));
lean_closure_set(v___x_11_, 1, v_inst_8_);
v___x_12_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_12_, 0, v_info_7_);
lean_ctor_set(v___x_12_, 1, v___x_11_);
lean_ctor_set_uint8(v___x_12_, sizeof(void*)*2, v___x_10_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg(lean_object* v_info_13_, lean_object* v_config_14_){
_start:
{
uint8_t v_buildable_15_; lean_object* v_format_16_; lean_object* v___x_17_; 
v_buildable_15_ = lean_ctor_get_uint8(v_config_14_, sizeof(void*)*4);
v_format_16_ = lean_ctor_get(v_config_14_, 3);
lean_inc_ref(v_format_16_);
v___x_17_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_17_, 0, v_info_13_);
lean_ctor_set(v___x_17_, 1, v_format_16_);
lean_ctor_set_uint8(v___x_17_, sizeof(void*)*2, v_buildable_15_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___redArg___boxed(lean_object* v_info_18_, lean_object* v_config_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lake_mkConfigBuildSpec___redArg(v_info_18_, v_config_19_);
lean_dec_ref(v_config_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec(lean_object* v_facet_21_, lean_object* v_info_22_, lean_object* v_config_23_, lean_object* v_h_24_){
_start:
{
uint8_t v_buildable_25_; lean_object* v_format_26_; lean_object* v___x_27_; 
v_buildable_25_ = lean_ctor_get_uint8(v_config_23_, sizeof(void*)*4);
v_format_26_ = lean_ctor_get(v_config_23_, 3);
lean_inc_ref(v_format_26_);
v___x_27_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_27_, 0, v_info_22_);
lean_ctor_set(v___x_27_, 1, v_format_26_);
lean_ctor_set_uint8(v___x_27_, sizeof(void*)*2, v_buildable_25_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkConfigBuildSpec___boxed(lean_object* v_facet_28_, lean_object* v_info_29_, lean_object* v_config_30_, lean_object* v_h_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lake_mkConfigBuildSpec(v_facet_28_, v_info_29_, v_config_30_, v_h_31_);
lean_dec_ref(v_config_30_);
lean_dec(v_facet_28_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch(lean_object* v_self_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v_info_41_; lean_object* v___x_42_; 
v_info_41_ = lean_ctor_get(v_self_33_, 0);
lean_inc_ref_n(v_info_41_, 2);
lean_dec_ref(v_self_33_);
lean_inc_ref(v_a_38_);
lean_inc(v_a_37_);
lean_inc(v_a_36_);
lean_inc(v_a_35_);
v___x_42_ = lean_apply_7(v_a_34_, v_info_41_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, lean_box(0));
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v_a_43_; lean_object* v_a_44_; lean_object* v_task_45_; lean_object* v_kind_46_; lean_object* v_caption_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_75_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
lean_inc(v_a_43_);
v_a_44_ = lean_ctor_get(v___x_42_, 1);
lean_inc(v_a_44_);
v_task_45_ = lean_ctor_get(v_a_43_, 0);
v_kind_46_ = lean_ctor_get(v_a_43_, 1);
v_caption_47_ = lean_ctor_get(v_a_43_, 2);
v_isSharedCheck_75_ = !lean_is_exclusive(v_a_43_);
if (v_isSharedCheck_75_ == 0)
{
v___x_49_ = v_a_43_;
v_isShared_50_ = v_isSharedCheck_75_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_caption_47_);
lean_inc(v_kind_46_);
lean_inc(v_task_45_);
lean_dec(v_a_43_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_75_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_51_ = lean_string_utf8_byte_size(v_caption_47_);
lean_dec_ref(v_caption_47_);
v___x_52_ = lean_unsigned_to_nat(0u);
v___x_53_ = lean_nat_dec_eq(v___x_51_, v___x_52_);
if (v___x_53_ == 0)
{
lean_del_object(v___x_49_);
lean_dec(v_kind_46_);
lean_dec_ref(v_task_45_);
lean_dec(v_a_44_);
lean_dec_ref(v_info_41_);
return v___x_42_;
}
else
{
lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_72_; 
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_72_ == 0)
{
lean_object* v_unused_73_; lean_object* v_unused_74_; 
v_unused_73_ = lean_ctor_get(v___x_42_, 1);
lean_dec(v_unused_73_);
v_unused_74_ = lean_ctor_get(v___x_42_, 0);
lean_dec(v_unused_74_);
v___x_55_ = v___x_42_;
v_isShared_56_ = v_isSharedCheck_72_;
goto v_resetjp_54_;
}
else
{
lean_dec(v___x_42_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_72_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v_registeredJobs_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; lean_object* v_job_62_; 
v_registeredJobs_57_ = lean_ctor_get(v_a_38_, 4);
v___x_58_ = l_Lake_BuildInfo_key(v_info_41_);
v___x_59_ = l_Lake_BuildKey_toSimpleString(v___x_58_);
v___x_60_ = 0;
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 2, v___x_59_);
v_job_62_ = v___x_49_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_task_45_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_kind_46_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v___x_59_);
v_job_62_ = v_reuseFailAlloc_71_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_69_; 
lean_ctor_set_uint8(v_job_62_, sizeof(void*)*3, v___x_60_);
v___x_63_ = lean_st_ref_take(v_registeredJobs_57_);
lean_inc_ref(v_job_62_);
v___x_64_ = l_Lake_Job_toOpaque___redArg(v_job_62_);
v___x_65_ = lean_array_push(v___x_63_, v___x_64_);
v___x_66_ = lean_st_ref_put(v_registeredJobs_57_, v___x_65_);
v___x_67_ = l_Lake_Job_renew___redArg(v_job_62_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_67_);
v___x_69_ = v___x_55_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v___x_67_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v_a_44_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_info_41_);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_fetch___boxed(lean_object* v_self_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v___y_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lake_BuildSpec_fetch(v_self_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec(v_a_79_);
lean_dec(v_a_78_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build(lean_object* v_self_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
lean_object* v_a_94_; lean_object* v_a_95_; lean_object* v_info_98_; lean_object* v___x_99_; 
v_info_98_ = lean_ctor_get(v_self_85_, 0);
lean_inc_ref_n(v_info_98_, 2);
lean_dec_ref(v_self_85_);
lean_inc_ref(v_a_90_);
lean_inc(v_a_89_);
lean_inc(v_a_88_);
lean_inc(v_a_87_);
v___x_99_ = lean_apply_7(v_a_86_, v_info_98_, v_a_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_, lean_box(0));
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v_a_101_; lean_object* v_task_102_; lean_object* v_kind_103_; lean_object* v_caption_104_; lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc(v_a_100_);
v_a_101_ = lean_ctor_get(v___x_99_, 1);
lean_inc(v_a_101_);
lean_dec_ref_known(v___x_99_, 2);
v_task_102_ = lean_ctor_get(v_a_100_, 0);
v_kind_103_ = lean_ctor_get(v_a_100_, 1);
v_caption_104_ = lean_ctor_get(v_a_100_, 2);
v___x_105_ = lean_string_utf8_byte_size(v_caption_104_);
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = lean_nat_dec_eq(v___x_105_, v___x_106_);
if (v___x_107_ == 0)
{
lean_dec_ref(v_info_98_);
v_a_94_ = v_a_100_;
v_a_95_ = v_a_101_;
goto v___jp_93_;
}
else
{
lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_123_; 
lean_inc(v_kind_103_);
lean_inc_ref(v_task_102_);
v_isSharedCheck_123_ = !lean_is_exclusive(v_a_100_);
if (v_isSharedCheck_123_ == 0)
{
lean_object* v_unused_124_; lean_object* v_unused_125_; lean_object* v_unused_126_; 
v_unused_124_ = lean_ctor_get(v_a_100_, 2);
lean_dec(v_unused_124_);
v_unused_125_ = lean_ctor_get(v_a_100_, 1);
lean_dec(v_unused_125_);
v_unused_126_ = lean_ctor_get(v_a_100_, 0);
lean_dec(v_unused_126_);
v___x_109_ = v_a_100_;
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
else
{
lean_dec(v_a_100_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v_registeredJobs_111_; lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v_job_116_; 
v_registeredJobs_111_ = lean_ctor_get(v_a_90_, 4);
v___x_112_ = l_Lake_BuildInfo_key(v_info_98_);
v___x_113_ = l_Lake_BuildKey_toSimpleString(v___x_112_);
v___x_114_ = 0;
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 2, v___x_113_);
v_job_116_ = v___x_109_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_task_102_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v_kind_103_);
lean_ctor_set(v_reuseFailAlloc_122_, 2, v___x_113_);
v_job_116_ = v_reuseFailAlloc_122_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
lean_ctor_set_uint8(v_job_116_, sizeof(void*)*3, v___x_114_);
v___x_117_ = lean_st_ref_take(v_registeredJobs_111_);
lean_inc_ref(v_job_116_);
v___x_118_ = l_Lake_Job_toOpaque___redArg(v_job_116_);
v___x_119_ = lean_array_push(v___x_117_, v___x_118_);
v___x_120_ = lean_st_ref_put(v_registeredJobs_111_, v___x_119_);
v___x_121_ = l_Lake_Job_renew___redArg(v_job_116_);
v_a_94_ = v___x_121_;
v_a_95_ = v_a_101_;
goto v___jp_93_;
}
}
}
}
else
{
lean_object* v_a_127_; lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
lean_dec_ref(v_info_98_);
v_a_127_ = lean_ctor_get(v___x_99_, 0);
v_a_128_ = lean_ctor_get(v___x_99_, 1);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_99_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_inc(v_a_127_);
lean_dec(v___x_99_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_127_);
lean_ctor_set(v_reuseFailAlloc_134_, 1, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
v___jp_93_:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = l_Lake_Job_toOpaque___redArg(v_a_94_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v_a_95_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_build___boxed(lean_object* v_self_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lake_BuildSpec_build(v_self_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
lean_dec_ref(v_a_141_);
lean_dec(v_a_140_);
lean_dec(v_a_139_);
lean_dec(v_a_138_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0(lean_object* v_format_145_, uint8_t v_fmt_146_, lean_object* v_x_147_){
_start:
{
if (lean_obj_tag(v_x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_158_; 
v_a_148_ = lean_ctor_get(v_x_147_, 0);
v_a_149_ = lean_ctor_get(v_x_147_, 1);
v_isSharedCheck_158_ = !lean_is_exclusive(v_x_147_);
if (v_isSharedCheck_158_ == 0)
{
v___x_151_ = v_x_147_;
v_isShared_152_ = v_isSharedCheck_158_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_inc(v_a_148_);
lean_dec(v_x_147_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_158_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_153_ = lean_box(v_fmt_146_);
v___x_154_ = lean_apply_2(v_format_145_, v___x_153_, v_a_148_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 0, v___x_154_);
v___x_156_ = v___x_151_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_154_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v_a_149_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
else
{
lean_object* v_a_159_; lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
lean_dec_ref(v_format_145_);
v_a_159_ = lean_ctor_get(v_x_147_, 0);
v_a_160_ = lean_ctor_get(v_x_147_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v_x_147_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v_x_147_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_inc(v_a_159_);
lean_dec(v_x_147_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_159_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___lam__0___boxed(lean_object* v_format_168_, lean_object* v_fmt_169_, lean_object* v_x_170_){
_start:
{
uint8_t v_fmt_boxed_171_; lean_object* v_res_172_; 
v_fmt_boxed_171_ = lean_unbox(v_fmt_169_);
v_res_172_ = l_Lake_BuildSpec_query___lam__0(v_format_168_, v_fmt_boxed_171_, v_x_170_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query(lean_object* v_self_173_, uint8_t v_fmt_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v_info_182_; lean_object* v_format_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___f_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v_info_182_ = lean_ctor_get(v_self_173_, 0);
lean_inc_ref_n(v_info_182_, 2);
v_format_183_ = lean_ctor_get(v_self_173_, 1);
lean_inc_ref(v_format_183_);
lean_dec_ref(v_self_173_);
v___x_184_ = lean_box(0);
v___x_185_ = lean_box(v_fmt_174_);
v___f_186_ = lean_alloc_closure((void*)(l_Lake_BuildSpec_query___lam__0___boxed), 3, 2);
lean_closure_set(v___f_186_, 0, v_format_183_);
lean_closure_set(v___f_186_, 1, v___x_185_);
v___x_187_ = l_Lake_BuildInfo_key(v_info_182_);
v___x_188_ = l_Lake_BuildKey_toSimpleString(v___x_187_);
lean_inc_ref(v_a_179_);
lean_inc(v_a_178_);
lean_inc(v_a_177_);
lean_inc(v_a_176_);
v___x_189_ = lean_apply_7(v_a_175_, v_info_182_, v_a_176_, v_a_177_, v_a_178_, v_a_179_, v_a_180_, lean_box(0));
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v_a_190_; lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_226_; 
v_a_190_ = lean_ctor_get(v___x_189_, 0);
v_a_191_ = lean_ctor_get(v___x_189_, 1);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_226_ == 0)
{
v___x_193_ = v___x_189_;
v_isShared_194_ = v_isSharedCheck_226_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_inc(v_a_190_);
lean_dec(v___x_189_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_226_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v_task_195_; lean_object* v_caption_196_; uint8_t v_optional_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_224_; 
v_task_195_ = lean_ctor_get(v_a_190_, 0);
v_caption_196_ = lean_ctor_get(v_a_190_, 2);
v_optional_197_ = lean_ctor_get_uint8(v_a_190_, sizeof(void*)*3);
v_isSharedCheck_224_ = !lean_is_exclusive(v_a_190_);
if (v_isSharedCheck_224_ == 0)
{
lean_object* v_unused_225_; 
v_unused_225_ = lean_ctor_get(v_a_190_, 1);
lean_dec(v_unused_225_);
v___x_199_ = v_a_190_;
v_isShared_200_ = v_isSharedCheck_224_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_caption_196_);
lean_inc(v_task_195_);
lean_dec(v_a_190_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_224_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; uint8_t v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_201_ = lean_unsigned_to_nat(0u);
v___x_202_ = 0;
v___x_203_ = lean_task_map(v___f_186_, v_task_195_, v___x_201_, v___x_202_);
v___x_204_ = lean_string_utf8_byte_size(v_caption_196_);
v___x_205_ = lean_nat_dec_eq(v___x_204_, v___x_201_);
if (v___x_205_ == 0)
{
lean_object* v___x_207_; 
lean_dec_ref(v___x_188_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v___x_184_);
lean_ctor_set(v___x_199_, 0, v___x_203_);
v___x_207_ = v___x_199_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_211_, 2, v_caption_196_);
lean_ctor_set_uint8(v_reuseFailAlloc_211_, sizeof(void*)*3, v_optional_197_);
v___x_207_ = v_reuseFailAlloc_211_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
lean_object* v___x_209_; 
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 0, v___x_207_);
v___x_209_ = v___x_193_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_207_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v_a_191_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
else
{
lean_object* v_registeredJobs_212_; lean_object* v_job_214_; 
lean_dec_ref(v_caption_196_);
v_registeredJobs_212_ = lean_ctor_get(v_a_179_, 4);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 2, v___x_188_);
lean_ctor_set(v___x_199_, 1, v___x_184_);
lean_ctor_set(v___x_199_, 0, v___x_203_);
v_job_214_ = v___x_199_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v___x_184_);
lean_ctor_set(v_reuseFailAlloc_223_, 2, v___x_188_);
v_job_214_ = v_reuseFailAlloc_223_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_221_; 
lean_ctor_set_uint8(v_job_214_, sizeof(void*)*3, v___x_202_);
v___x_215_ = lean_st_ref_take(v_registeredJobs_212_);
lean_inc_ref(v_job_214_);
v___x_216_ = l_Lake_Job_toOpaque___redArg(v_job_214_);
v___x_217_ = lean_array_push(v___x_215_, v___x_216_);
v___x_218_ = lean_st_ref_put(v_registeredJobs_212_, v___x_217_);
v___x_219_ = l_Lake_Job_renew___redArg(v_job_214_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 0, v___x_219_);
v___x_221_ = v___x_193_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v_a_191_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
}
}
else
{
lean_object* v_a_227_; lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
lean_dec_ref(v___x_188_);
lean_dec_ref(v___f_186_);
v_a_227_ = lean_ctor_get(v___x_189_, 0);
v_a_228_ = lean_ctor_get(v___x_189_, 1);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_235_ == 0)
{
v___x_230_ = v___x_189_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_inc(v_a_227_);
lean_dec(v___x_189_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_a_227_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v_a_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildSpec_query___boxed(lean_object* v_self_236_, lean_object* v_fmt_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v___y_244_){
_start:
{
uint8_t v_fmt_boxed_245_; lean_object* v_res_246_; 
v_fmt_boxed_245_ = lean_unbox(v_fmt_237_);
v_res_246_ = l_Lake_BuildSpec_query(v_self_236_, v_fmt_boxed_245_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec(v_a_240_);
lean_dec(v_a_239_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(size_t v_sz_247_, size_t v_i_248_, lean_object* v_bs_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
uint8_t v___x_257_; 
v___x_257_ = lean_usize_dec_lt(v_i_248_, v_sz_247_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; 
lean_dec_ref(v___y_250_);
v___x_258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_258_, 0, v_bs_249_);
lean_ctor_set(v___x_258_, 1, v___y_255_);
return v___x_258_;
}
else
{
lean_object* v_v_259_; lean_object* v_info_260_; lean_object* v___x_261_; lean_object* v_bs_x27_262_; lean_object* v_a_264_; lean_object* v_a_265_; lean_object* v___x_271_; 
v_v_259_ = lean_array_uget_borrowed(v_bs_249_, v_i_248_);
v_info_260_ = lean_ctor_get(v_v_259_, 0);
lean_inc_ref_n(v_info_260_, 2);
v___x_261_ = lean_unsigned_to_nat(0u);
v_bs_x27_262_ = lean_array_uset(v_bs_249_, v_i_248_, v___x_261_);
lean_inc_ref(v___y_250_);
lean_inc_ref(v___y_254_);
lean_inc(v___y_253_);
lean_inc(v___y_252_);
lean_inc(v___y_251_);
v___x_271_ = lean_apply_7(v___y_250_, v_info_260_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_, lean_box(0));
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v_a_273_; lean_object* v_task_274_; lean_object* v_kind_275_; lean_object* v_caption_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v_a_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_a_272_);
v_a_273_ = lean_ctor_get(v___x_271_, 1);
lean_inc(v_a_273_);
lean_dec_ref_known(v___x_271_, 2);
v_task_274_ = lean_ctor_get(v_a_272_, 0);
v_kind_275_ = lean_ctor_get(v_a_272_, 1);
v_caption_276_ = lean_ctor_get(v_a_272_, 2);
v___x_277_ = lean_string_utf8_byte_size(v_caption_276_);
v___x_278_ = lean_nat_dec_eq(v___x_277_, v___x_261_);
if (v___x_278_ == 0)
{
lean_dec_ref(v_info_260_);
v_a_264_ = v_a_272_;
v_a_265_ = v_a_273_;
goto v___jp_263_;
}
else
{
lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_294_; 
lean_inc(v_kind_275_);
lean_inc_ref(v_task_274_);
v_isSharedCheck_294_ = !lean_is_exclusive(v_a_272_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; lean_object* v_unused_296_; lean_object* v_unused_297_; 
v_unused_295_ = lean_ctor_get(v_a_272_, 2);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_a_272_, 1);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_a_272_, 0);
lean_dec(v_unused_297_);
v___x_280_ = v_a_272_;
v_isShared_281_ = v_isSharedCheck_294_;
goto v_resetjp_279_;
}
else
{
lean_dec(v_a_272_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_294_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v_registeredJobs_282_; lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v_job_287_; 
v_registeredJobs_282_ = lean_ctor_get(v___y_254_, 4);
v___x_283_ = l_Lake_BuildInfo_key(v_info_260_);
v___x_284_ = l_Lake_BuildKey_toSimpleString(v___x_283_);
v___x_285_ = 0;
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 2, v___x_284_);
v_job_287_ = v___x_280_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_task_274_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v_kind_275_);
lean_ctor_set(v_reuseFailAlloc_293_, 2, v___x_284_);
v_job_287_ = v_reuseFailAlloc_293_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
lean_ctor_set_uint8(v_job_287_, sizeof(void*)*3, v___x_285_);
v___x_288_ = lean_st_ref_take(v_registeredJobs_282_);
lean_inc_ref(v_job_287_);
v___x_289_ = l_Lake_Job_toOpaque___redArg(v_job_287_);
v___x_290_ = lean_array_push(v___x_288_, v___x_289_);
v___x_291_ = lean_st_ref_put(v_registeredJobs_282_, v___x_290_);
v___x_292_ = l_Lake_Job_renew___redArg(v_job_287_);
v_a_264_ = v___x_292_;
v_a_265_ = v_a_273_;
goto v___jp_263_;
}
}
}
}
else
{
lean_object* v_a_298_; lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_306_; 
lean_dec_ref(v_bs_x27_262_);
lean_dec_ref(v_info_260_);
lean_dec_ref(v___y_250_);
v_a_298_ = lean_ctor_get(v___x_271_, 0);
v_a_299_ = lean_ctor_get(v___x_271_, 1);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_306_ == 0)
{
v___x_301_ = v___x_271_;
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_inc(v_a_298_);
lean_dec(v___x_271_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_302_ == 0)
{
v___x_304_ = v___x_301_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_a_298_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v_a_299_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
v___jp_263_:
{
lean_object* v___x_266_; size_t v___x_267_; size_t v___x_268_; lean_object* v___x_269_; 
v___x_266_ = l_Lake_Job_toOpaque___redArg(v_a_264_);
v___x_267_ = ((size_t)1ULL);
v___x_268_ = lean_usize_add(v_i_248_, v___x_267_);
v___x_269_ = lean_array_uset(v_bs_x27_262_, v_i_248_, v___x_266_);
v_i_248_ = v___x_268_;
v_bs_249_ = v___x_269_;
v___y_255_ = v_a_265_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0___boxed(lean_object* v_sz_307_, lean_object* v_i_308_, lean_object* v_bs_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
size_t v_sz_boxed_317_; size_t v_i_boxed_318_; lean_object* v_res_319_; 
v_sz_boxed_317_ = lean_unbox_usize(v_sz_307_);
lean_dec(v_sz_307_);
v_i_boxed_318_ = lean_unbox_usize(v_i_308_);
lean_dec(v_i_308_);
v_res_319_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(v_sz_boxed_317_, v_i_boxed_318_, v_bs_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
lean_dec_ref(v___y_314_);
lean_dec(v___y_313_);
lean_dec(v___y_312_);
lean_dec(v___y_311_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildSpecs(lean_object* v_specs_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
size_t v_sz_329_; size_t v___x_330_; lean_object* v___x_331_; 
v_sz_329_ = lean_array_size(v_specs_321_);
v___x_330_ = ((size_t)0ULL);
v___x_331_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_buildSpecs_spec__0(v_sz_329_, v___x_330_, v_specs_321_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_342_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
v_a_333_ = lean_ctor_get(v___x_331_, 1);
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_342_ == 0)
{
v___x_335_ = v___x_331_;
v_isShared_336_ = v_isSharedCheck_342_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_inc(v_a_332_);
lean_dec(v___x_331_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_342_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_340_; 
v___x_337_ = ((lean_object*)(l_Lake_buildSpecs___closed__0));
v___x_338_ = l_Lake_Job_mixArray___redArg(v_a_332_, v___x_337_);
lean_dec(v_a_332_);
if (v_isShared_336_ == 0)
{
lean_ctor_set(v___x_335_, 0, v___x_338_);
v___x_340_ = v___x_335_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_a_333_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
else
{
lean_object* v_a_343_; lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_343_ = lean_ctor_get(v___x_331_, 0);
v_a_344_ = lean_ctor_get(v___x_331_, 1);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_331_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_inc(v_a_343_);
lean_dec(v___x_331_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_343_);
lean_ctor_set(v_reuseFailAlloc_350_, 1, v_a_344_);
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
LEAN_EXPORT lean_object* l_Lake_buildSpecs___boxed(lean_object* v_specs_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v___y_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lake_buildSpecs(v_specs_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
lean_dec_ref(v_a_357_);
lean_dec(v_a_356_);
lean_dec(v_a_355_);
lean_dec(v_a_354_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0(lean_object* v_format_361_, uint8_t v_fmt_362_, lean_object* v_x_363_){
_start:
{
if (lean_obj_tag(v_x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_374_; 
v_a_364_ = lean_ctor_get(v_x_363_, 0);
v_a_365_ = lean_ctor_get(v_x_363_, 1);
v_isSharedCheck_374_ = !lean_is_exclusive(v_x_363_);
if (v_isSharedCheck_374_ == 0)
{
v___x_367_ = v_x_363_;
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_inc(v_a_364_);
lean_dec(v_x_363_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_369_ = lean_box(v_fmt_362_);
v___x_370_ = lean_apply_2(v_format_361_, v___x_369_, v_a_364_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_370_);
v___x_372_ = v___x_367_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_a_365_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
else
{
lean_object* v_a_375_; lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_dec_ref(v_format_361_);
v_a_375_ = lean_ctor_get(v_x_363_, 0);
v_a_376_ = lean_ctor_get(v_x_363_, 1);
v_isSharedCheck_383_ = !lean_is_exclusive(v_x_363_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v_x_363_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_inc(v_a_375_);
lean_dec(v_x_363_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_375_);
lean_ctor_set(v_reuseFailAlloc_382_, 1, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0___boxed(lean_object* v_format_384_, lean_object* v_fmt_385_, lean_object* v_x_386_){
_start:
{
uint8_t v_fmt_boxed_387_; lean_object* v_res_388_; 
v_fmt_boxed_387_ = lean_unbox(v_fmt_385_);
v_res_388_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0(v_format_384_, v_fmt_boxed_387_, v_x_386_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(uint8_t v_fmt_389_, size_t v_sz_390_, size_t v_i_391_, lean_object* v_bs_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
uint8_t v___x_400_; 
v___x_400_ = lean_usize_dec_lt(v_i_391_, v_sz_390_);
if (v___x_400_ == 0)
{
lean_object* v___x_401_; 
lean_dec_ref(v___y_393_);
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v_bs_392_);
lean_ctor_set(v___x_401_, 1, v___y_398_);
return v___x_401_;
}
else
{
lean_object* v_v_402_; lean_object* v_info_403_; lean_object* v_format_404_; lean_object* v___x_405_; lean_object* v_bs_x27_406_; lean_object* v_a_408_; lean_object* v_a_409_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___f_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v_v_402_ = lean_array_uget_borrowed(v_bs_392_, v_i_391_);
v_info_403_ = lean_ctor_get(v_v_402_, 0);
lean_inc_ref_n(v_info_403_, 2);
v_format_404_ = lean_ctor_get(v_v_402_, 1);
lean_inc_ref(v_format_404_);
v___x_405_ = lean_unsigned_to_nat(0u);
v_bs_x27_406_ = lean_array_uset(v_bs_392_, v_i_391_, v___x_405_);
v___x_414_ = lean_box(0);
v___x_415_ = lean_box(v_fmt_389_);
v___f_416_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_416_, 0, v_format_404_);
lean_closure_set(v___f_416_, 1, v___x_415_);
v___x_417_ = l_Lake_BuildInfo_key(v_info_403_);
v___x_418_ = l_Lake_BuildKey_toSimpleString(v___x_417_);
lean_inc_ref(v___y_393_);
lean_inc_ref(v___y_397_);
lean_inc(v___y_396_);
lean_inc(v___y_395_);
lean_inc(v___y_394_);
v___x_419_ = lean_apply_7(v___y_393_, v_info_403_, v___y_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_, lean_box(0));
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v_a_421_; lean_object* v_task_422_; lean_object* v_caption_423_; uint8_t v_optional_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_444_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_a_420_);
v_a_421_ = lean_ctor_get(v___x_419_, 1);
lean_inc(v_a_421_);
lean_dec_ref_known(v___x_419_, 2);
v_task_422_ = lean_ctor_get(v_a_420_, 0);
v_caption_423_ = lean_ctor_get(v_a_420_, 2);
v_optional_424_ = lean_ctor_get_uint8(v_a_420_, sizeof(void*)*3);
v_isSharedCheck_444_ = !lean_is_exclusive(v_a_420_);
if (v_isSharedCheck_444_ == 0)
{
lean_object* v_unused_445_; 
v_unused_445_ = lean_ctor_get(v_a_420_, 1);
lean_dec(v_unused_445_);
v___x_426_ = v_a_420_;
v_isShared_427_ = v_isSharedCheck_444_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_caption_423_);
lean_inc(v_task_422_);
lean_dec(v_a_420_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_444_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
uint8_t v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_428_ = 0;
v___x_429_ = lean_task_map(v___f_416_, v_task_422_, v___x_405_, v___x_428_);
v___x_430_ = lean_string_utf8_byte_size(v_caption_423_);
v___x_431_ = lean_nat_dec_eq(v___x_430_, v___x_405_);
if (v___x_431_ == 0)
{
lean_object* v___x_433_; 
lean_dec_ref(v___x_418_);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 1, v___x_414_);
lean_ctor_set(v___x_426_, 0, v___x_429_);
v___x_433_ = v___x_426_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_429_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v___x_414_);
lean_ctor_set(v_reuseFailAlloc_434_, 2, v_caption_423_);
lean_ctor_set_uint8(v_reuseFailAlloc_434_, sizeof(void*)*3, v_optional_424_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
v_a_408_ = v___x_433_;
v_a_409_ = v_a_421_;
goto v___jp_407_;
}
}
else
{
lean_object* v_registeredJobs_435_; lean_object* v_job_437_; 
lean_dec_ref(v_caption_423_);
v_registeredJobs_435_ = lean_ctor_get(v___y_397_, 4);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 2, v___x_418_);
lean_ctor_set(v___x_426_, 1, v___x_414_);
lean_ctor_set(v___x_426_, 0, v___x_429_);
v_job_437_ = v___x_426_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_429_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v___x_414_);
lean_ctor_set(v_reuseFailAlloc_443_, 2, v___x_418_);
v_job_437_ = v_reuseFailAlloc_443_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
lean_ctor_set_uint8(v_job_437_, sizeof(void*)*3, v___x_428_);
v___x_438_ = lean_st_ref_take(v_registeredJobs_435_);
lean_inc_ref(v_job_437_);
v___x_439_ = l_Lake_Job_toOpaque___redArg(v_job_437_);
v___x_440_ = lean_array_push(v___x_438_, v___x_439_);
v___x_441_ = lean_st_ref_put(v_registeredJobs_435_, v___x_440_);
v___x_442_ = l_Lake_Job_renew___redArg(v_job_437_);
v_a_408_ = v___x_442_;
v_a_409_ = v_a_421_;
goto v___jp_407_;
}
}
}
}
else
{
lean_object* v_a_446_; lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_dec_ref(v___x_418_);
lean_dec_ref(v___f_416_);
lean_dec_ref(v_bs_x27_406_);
lean_dec_ref(v___y_393_);
v_a_446_ = lean_ctor_get(v___x_419_, 0);
v_a_447_ = lean_ctor_get(v___x_419_, 1);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_419_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_inc(v_a_446_);
lean_dec(v___x_419_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_446_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
v___jp_407_:
{
size_t v___x_410_; size_t v___x_411_; lean_object* v___x_412_; 
v___x_410_ = ((size_t)1ULL);
v___x_411_ = lean_usize_add(v_i_391_, v___x_410_);
v___x_412_ = lean_array_uset(v_bs_x27_406_, v_i_391_, v_a_408_);
v_i_391_ = v___x_411_;
v_bs_392_ = v___x_412_;
v___y_398_ = v_a_409_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0___boxed(lean_object* v_fmt_455_, lean_object* v_sz_456_, lean_object* v_i_457_, lean_object* v_bs_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
uint8_t v_fmt_boxed_466_; size_t v_sz_boxed_467_; size_t v_i_boxed_468_; lean_object* v_res_469_; 
v_fmt_boxed_466_ = lean_unbox(v_fmt_455_);
v_sz_boxed_467_ = lean_unbox_usize(v_sz_456_);
lean_dec(v_sz_456_);
v_i_boxed_468_ = lean_unbox_usize(v_i_457_);
lean_dec(v_i_457_);
v_res_469_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(v_fmt_boxed_466_, v_sz_boxed_467_, v_i_boxed_468_, v_bs_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec(v___y_462_);
lean_dec(v___y_461_);
lean_dec(v___y_460_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lake_querySpecs(lean_object* v_specs_470_, uint8_t v_fmt_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_){
_start:
{
size_t v_sz_479_; size_t v___x_480_; lean_object* v___x_481_; 
v_sz_479_ = lean_array_size(v_specs_470_);
v___x_480_ = ((size_t)0ULL);
v___x_481_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_querySpecs_spec__0(v_fmt_471_, v_sz_479_, v___x_480_, v_specs_470_, v_a_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v_a_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_492_; 
v_a_482_ = lean_ctor_get(v___x_481_, 0);
v_a_483_ = lean_ctor_get(v___x_481_, 1);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_492_ == 0)
{
v___x_485_ = v___x_481_;
v_isShared_486_ = v_isSharedCheck_492_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_a_483_);
lean_inc(v_a_482_);
lean_dec(v___x_481_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_492_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_490_; 
v___x_487_ = ((lean_object*)(l_Lake_buildSpecs___closed__0));
v___x_488_ = l_Lake_Job_collectArray___redArg(v_a_482_, v___x_487_);
lean_dec(v_a_482_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v___x_488_);
v___x_490_ = v___x_485_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v___x_488_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_a_483_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
else
{
lean_object* v_a_493_; lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
v_a_493_ = lean_ctor_get(v___x_481_, 0);
v_a_494_ = lean_ctor_get(v___x_481_, 1);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___x_481_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_inc(v_a_493_);
lean_dec(v___x_481_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_493_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_a_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_querySpecs___boxed(lean_object* v_specs_502_, lean_object* v_fmt_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v___y_510_){
_start:
{
uint8_t v_fmt_boxed_511_; lean_object* v_res_512_; 
v_fmt_boxed_511_ = lean_unbox(v_fmt_503_);
v_res_512_ = l_Lake_querySpecs(v_specs_502_, v_fmt_boxed_511_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
lean_dec_ref(v_a_508_);
lean_dec(v_a_507_);
lean_dec(v_a_506_);
lean_dec(v_a_505_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(lean_object* v___x_516_, lean_object* v_as_517_, size_t v_sz_518_, size_t v_i_519_, lean_object* v_b_520_){
_start:
{
uint8_t v___x_521_; 
v___x_521_ = lean_usize_dec_lt(v_i_519_, v_sz_518_);
if (v___x_521_ == 0)
{
lean_inc_ref(v_b_520_);
return v_b_520_;
}
else
{
lean_object* v_a_522_; lean_object* v_baseName_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
v_a_522_ = lean_array_uget_borrowed(v_as_517_, v_i_519_);
v_baseName_523_ = lean_ctor_get(v_a_522_, 1);
v___x_524_ = lean_box(0);
v___x_525_ = lean_name_eq(v_baseName_523_, v___x_516_);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; size_t v___x_527_; size_t v___x_528_; 
v___x_526_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0));
v___x_527_ = ((size_t)1ULL);
v___x_528_ = lean_usize_add(v_i_519_, v___x_527_);
v_i_519_ = v___x_528_;
v_b_520_ = v___x_526_;
goto _start;
}
else
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
lean_inc(v_a_522_);
v___x_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_530_, 0, v_a_522_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
v___x_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
lean_ctor_set(v___x_532_, 1, v___x_524_);
return v___x_532_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___boxed(lean_object* v___x_533_, lean_object* v_as_534_, lean_object* v_sz_535_, lean_object* v_i_536_, lean_object* v_b_537_){
_start:
{
size_t v_sz_boxed_538_; size_t v_i_boxed_539_; lean_object* v_res_540_; 
v_sz_boxed_538_ = lean_unbox_usize(v_sz_535_);
lean_dec(v_sz_535_);
v_i_boxed_539_ = lean_unbox_usize(v_i_536_);
lean_dec(v_i_536_);
v_res_540_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(v___x_533_, v_as_534_, v_sz_boxed_538_, v_i_boxed_539_, v_b_537_);
lean_dec_ref(v_b_537_);
lean_dec_ref(v_as_534_);
lean_dec(v___x_533_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec(lean_object* v_ws_541_, lean_object* v_spec_542_){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; 
v___x_546_ = lean_string_utf8_byte_size(v_spec_542_);
v___x_547_ = lean_unsigned_to_nat(0u);
v___x_548_ = lean_nat_dec_eq(v___x_546_, v___x_547_);
if (v___x_548_ == 0)
{
lean_object* v_packages_549_; lean_object* v___x_550_; lean_object* v___x_551_; size_t v_sz_552_; size_t v___x_553_; lean_object* v___x_554_; lean_object* v_fst_555_; 
v_packages_549_ = lean_ctor_get(v_ws_541_, 4);
lean_inc_ref(v_spec_542_);
v___x_550_ = l_Lake_stringToLegalOrSimpleName(v_spec_542_);
v___x_551_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0));
v_sz_552_ = lean_array_size(v_packages_549_);
v___x_553_ = ((size_t)0ULL);
v___x_554_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(v___x_550_, v_packages_549_, v_sz_552_, v___x_553_, v___x_551_);
lean_dec(v___x_550_);
v_fst_555_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_fst_555_);
lean_dec_ref(v___x_554_);
if (lean_obj_tag(v_fst_555_) == 0)
{
goto v___jp_543_;
}
else
{
lean_object* v_val_556_; 
v_val_556_ = lean_ctor_get(v_fst_555_, 0);
lean_inc(v_val_556_);
lean_dec_ref_known(v_fst_555_, 1);
if (lean_obj_tag(v_val_556_) == 0)
{
goto v___jp_543_;
}
else
{
lean_object* v_val_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v_spec_542_);
v_val_557_ = lean_ctor_get(v_val_556_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v_val_556_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v_val_556_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_val_557_);
lean_dec(v_val_556_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_val_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
}
else
{
lean_object* v_packages_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
lean_dec_ref(v_spec_542_);
v_packages_565_ = lean_ctor_get(v_ws_541_, 4);
v___x_566_ = lean_array_fget_borrowed(v_packages_565_, v___x_547_);
lean_inc(v___x_566_);
v___x_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
return v___x_567_;
}
v___jp_543_:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(v___x_544_, 0, v_spec_542_);
v___x_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_545_, 0, v___x_544_);
return v___x_545_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parsePackageSpec___boxed(lean_object* v_ws_568_, lean_object* v_spec_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lake_parsePackageSpec(v_ws_568_, v_spec_569_);
lean_dec_ref(v_ws_568_);
return v_res_570_;
}
}
static lean_object* _init_l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = lean_box(0);
v___x_573_ = l_Lean_Json_compress(v___x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(uint8_t v_fmt_574_){
_start:
{
if (v_fmt_574_ == 0)
{
lean_object* v___x_575_; 
v___x_575_ = ((lean_object*)(l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__0));
return v___x_575_;
}
else
{
lean_object* v___x_576_; 
v___x_576_ = lean_obj_once(&l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1, &l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1_once, _init_l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___closed__1);
return v___x_576_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg___boxed(lean_object* v_fmt_577_){
_start:
{
uint8_t v_fmt_boxed_578_; lean_object* v_res_579_; 
v_fmt_boxed_578_ = lean_unbox(v_fmt_577_);
v_res_579_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(v_fmt_boxed_578_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0(uint8_t v_fmt_580_, lean_object* v_a_581_){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(v_fmt_580_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___boxed(lean_object* v_fmt_583_, lean_object* v_a_584_){
_start:
{
uint8_t v_fmt_boxed_585_; lean_object* v_res_586_; 
v_fmt_boxed_585_ = lean_unbox(v_fmt_583_);
v_res_586_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0(v_fmt_boxed_585_, v_a_584_);
lean_dec_ref(v_a_584_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0(uint8_t v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lake_formatQuery___at___00__private_Lake_CLI_Build_0__Lake_resolveModuleTarget_spec__0___redArg(v___y_587_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0___boxed(lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
uint8_t v___y_282__boxed_592_; lean_object* v_res_593_; 
v___y_282__boxed_592_ = lean_unbox(v___y_590_);
v_res_593_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___lam__0(v___y_282__boxed_592_, v___y_591_);
lean_dec_ref(v___y_591_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(lean_object* v_ws_596_, lean_object* v_mod_597_, lean_object* v_facet_598_){
_start:
{
uint8_t v___x_599_; 
v___x_599_ = l_Lean_Name_isAnonymous(v_facet_598_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_600_ = l_Lake_Module_keyword;
lean_inc(v_facet_598_);
v___x_601_ = l_Lean_Name_append(v___x_600_, v_facet_598_);
v___x_602_ = l_Lake_Workspace_findModuleFacetConfig_x3f(v___x_601_, v_ws_596_);
if (lean_obj_tag(v___x_602_) == 1)
{
lean_object* v_lib_603_; lean_object* v_pkg_604_; lean_object* v_val_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_619_; 
lean_dec(v_facet_598_);
v_lib_603_ = lean_ctor_get(v_mod_597_, 0);
v_pkg_604_ = lean_ctor_get(v_lib_603_, 0);
v_val_605_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_619_ == 0)
{
v___x_607_ = v___x_602_;
v_isShared_608_ = v_isSharedCheck_619_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_val_605_);
lean_dec(v___x_602_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_619_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v_name_609_; lean_object* v_keyName_610_; uint8_t v_buildable_611_; lean_object* v_format_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_617_; 
v_name_609_ = lean_ctor_get(v_mod_597_, 1);
v_keyName_610_ = lean_ctor_get(v_pkg_604_, 2);
v_buildable_611_ = lean_ctor_get_uint8(v_val_605_, sizeof(void*)*4);
v_format_612_ = lean_ctor_get(v_val_605_, 3);
lean_inc_ref(v_format_612_);
lean_dec(v_val_605_);
lean_inc(v_name_609_);
lean_inc(v_keyName_610_);
v___x_613_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_613_, 0, v_keyName_610_);
lean_ctor_set(v___x_613_, 1, v_name_609_);
v___x_614_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
lean_ctor_set(v___x_614_, 1, v___x_600_);
lean_ctor_set(v___x_614_, 2, v_mod_597_);
lean_ctor_set(v___x_614_, 3, v___x_601_);
v___x_615_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_615_, 0, v___x_614_);
lean_ctor_set(v___x_615_, 1, v_format_612_);
lean_ctor_set_uint8(v___x_615_, sizeof(void*)*2, v_buildable_611_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_615_);
v___x_617_ = v___x_607_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_615_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
else
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
lean_dec(v___x_602_);
lean_dec(v___x_601_);
lean_dec_ref(v_mod_597_);
v___x_620_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__0));
v___x_621_ = lean_alloc_ctor(14, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
lean_ctor_set(v___x_621_, 1, v_facet_598_);
v___x_622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
return v___x_622_;
}
}
else
{
lean_object* v_lib_623_; lean_object* v_pkg_624_; lean_object* v_name_625_; lean_object* v_keyName_626_; lean_object* v___f_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
lean_dec(v_facet_598_);
v_lib_623_ = lean_ctor_get(v_mod_597_, 0);
v_pkg_624_ = lean_ctor_get(v_lib_623_, 0);
v_name_625_ = lean_ctor_get(v_mod_597_, 1);
v_keyName_626_ = lean_ctor_get(v_pkg_624_, 2);
v___f_627_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___closed__1));
v___x_628_ = l_Lake_Module_leanArtsFacet;
lean_inc(v_name_625_);
lean_inc(v_keyName_626_);
v___x_629_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_629_, 0, v_keyName_626_);
lean_ctor_set(v___x_629_, 1, v_name_625_);
v___x_630_ = l_Lake_Module_keyword;
v___x_631_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
lean_ctor_set(v___x_631_, 2, v_mod_597_);
lean_ctor_set(v___x_631_, 3, v___x_628_);
v___x_632_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_632_, 0, v___x_631_);
lean_ctor_set(v___x_632_, 1, v___f_627_);
lean_ctor_set_uint8(v___x_632_, sizeof(void*)*2, v___x_599_);
v___x_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
return v___x_633_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget___boxed(lean_object* v_ws_634_, lean_object* v_mod_635_, lean_object* v_facet_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_634_, v_mod_635_, v_facet_636_);
lean_dec_ref(v_ws_634_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveCustomTarget(lean_object* v_pkg_638_, lean_object* v_name_639_, lean_object* v_facet_640_, lean_object* v_config_641_){
_start:
{
uint8_t v___x_642_; 
v___x_642_ = l_Lean_Name_isAnonymous(v_facet_640_);
if (v___x_642_ == 0)
{
lean_object* v___x_643_; lean_object* v___x_644_; 
lean_dec_ref(v_config_641_);
lean_dec_ref(v_pkg_638_);
v___x_643_ = lean_alloc_ctor(20, 2, 0);
lean_ctor_set(v___x_643_, 0, v_name_639_);
lean_ctor_set(v___x_643_, 1, v_facet_640_);
v___x_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
return v___x_644_;
}
else
{
lean_object* v_format_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_654_; 
lean_dec(v_facet_640_);
v_format_645_ = lean_ctor_get(v_config_641_, 1);
v_isSharedCheck_654_ = !lean_is_exclusive(v_config_641_);
if (v_isSharedCheck_654_ == 0)
{
lean_object* v_unused_655_; 
v_unused_655_ = lean_ctor_get(v_config_641_, 0);
lean_dec(v_unused_655_);
v___x_647_ = v_config_641_;
v_isShared_648_ = v_isSharedCheck_654_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_format_645_);
lean_dec(v_config_641_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_654_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v_name_639_);
lean_ctor_set(v___x_647_, 0, v_pkg_638_);
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_pkg_638_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_name_639_);
v___x_650_ = v_reuseFailAlloc_653_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_651_, 0, v___x_650_);
lean_ctor_set(v___x_651_, 1, v_format_645_);
lean_ctor_set_uint8(v___x_651_, sizeof(void*)*2, v___x_642_);
v___x_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(lean_object* v_ws_659_, lean_object* v_pkg_660_, lean_object* v_target_661_, lean_object* v_decl_662_, lean_object* v_facet_663_){
_start:
{
lean_object* v_name_664_; lean_object* v_kind_665_; lean_object* v_config_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_722_; 
v_name_664_ = lean_ctor_get(v_decl_662_, 1);
v_kind_665_ = lean_ctor_get(v_decl_662_, 2);
v_config_666_ = lean_ctor_get(v_decl_662_, 3);
v_isSharedCheck_722_ = !lean_is_exclusive(v_decl_662_);
if (v_isSharedCheck_722_ == 0)
{
lean_object* v_unused_723_; 
v_unused_723_ = lean_ctor_get(v_decl_662_, 0);
lean_dec(v_unused_723_);
v___x_668_ = v_decl_662_;
v_isShared_669_ = v_isSharedCheck_722_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_config_666_);
lean_inc(v_kind_665_);
lean_inc(v_name_664_);
lean_dec(v_decl_662_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_722_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
uint8_t v___x_670_; 
v___x_670_ = l_Lean_Name_isAnonymous(v_kind_665_);
if (v___x_670_ == 0)
{
uint8_t v___x_671_; lean_object* v___y_673_; uint8_t v___x_700_; 
lean_dec(v_target_661_);
v___x_671_ = 1;
v___x_700_ = l_Lean_Name_isAnonymous(v_facet_663_);
if (v___x_700_ == 0)
{
v___y_673_ = v_facet_663_;
goto v___jp_672_;
}
else
{
lean_object* v___x_701_; 
lean_dec(v_facet_663_);
v___x_701_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___closed__1));
v___y_673_ = v___x_701_;
goto v___jp_672_;
}
v___jp_672_:
{
lean_object* v_facetConfigs_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v_facetConfigs_674_ = lean_ctor_get(v_ws_659_, 6);
lean_inc(v___y_673_);
lean_inc(v_kind_665_);
v___x_675_ = l_Lean_Name_append(v_kind_665_, v___y_673_);
v___x_676_ = l_Lake_FacetConfigMap_get_x3f(v___x_675_, v_facetConfigs_674_);
if (lean_obj_tag(v___x_676_) == 1)
{
lean_object* v_val_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_696_; 
lean_dec(v___y_673_);
v_val_677_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_696_ == 0)
{
v___x_679_ = v___x_676_;
v_isShared_680_ = v_isSharedCheck_696_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_val_677_);
lean_dec(v___x_676_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_696_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v_keyName_681_; uint8_t v_buildable_682_; lean_object* v_format_683_; lean_object* v_tgt_684_; lean_object* v___x_685_; lean_object* v_info_687_; 
v_keyName_681_ = lean_ctor_get(v_pkg_660_, 2);
lean_inc(v_keyName_681_);
v_buildable_682_ = lean_ctor_get_uint8(v_val_677_, sizeof(void*)*4);
v_format_683_ = lean_ctor_get(v_val_677_, 3);
lean_inc_ref(v_format_683_);
lean_dec(v_val_677_);
lean_inc(v_name_664_);
v_tgt_684_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_tgt_684_, 0, v_pkg_660_);
lean_ctor_set(v_tgt_684_, 1, v_name_664_);
lean_ctor_set(v_tgt_684_, 2, v_config_666_);
v___x_685_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_685_, 0, v_keyName_681_);
lean_ctor_set(v___x_685_, 1, v_name_664_);
if (v_isShared_669_ == 0)
{
lean_ctor_set_tag(v___x_668_, 1);
lean_ctor_set(v___x_668_, 3, v___x_675_);
lean_ctor_set(v___x_668_, 2, v_tgt_684_);
lean_ctor_set(v___x_668_, 1, v_kind_665_);
lean_ctor_set(v___x_668_, 0, v___x_685_);
v_info_687_ = v___x_668_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v_kind_665_);
lean_ctor_set(v_reuseFailAlloc_695_, 2, v_tgt_684_);
lean_ctor_set(v_reuseFailAlloc_695_, 3, v___x_675_);
v_info_687_ = v_reuseFailAlloc_695_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_693_; 
v___x_688_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_688_, 0, v_info_687_);
lean_ctor_set(v___x_688_, 1, v_format_683_);
lean_ctor_set_uint8(v___x_688_, sizeof(void*)*2, v_buildable_682_);
v___x_689_ = lean_unsigned_to_nat(1u);
v___x_690_ = lean_mk_empty_array_with_capacity(v___x_689_);
v___x_691_ = lean_array_push(v___x_690_, v___x_688_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v___x_691_);
v___x_693_ = v___x_679_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_691_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
lean_dec(v___x_676_);
lean_dec(v___x_675_);
lean_del_object(v___x_668_);
lean_dec(v_config_666_);
lean_dec(v_name_664_);
lean_dec_ref(v_pkg_660_);
v___x_697_ = l_Lean_Name_toString(v_kind_665_, v___x_671_);
v___x_698_ = lean_alloc_ctor(14, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
lean_ctor_set(v___x_698_, 1, v___y_673_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
}
else
{
lean_object* v___x_702_; 
lean_del_object(v___x_668_);
lean_dec(v_kind_665_);
lean_dec(v_name_664_);
v___x_702_ = l___private_Lake_CLI_Build_0__Lake_resolveCustomTarget(v_pkg_660_, v_target_661_, v_facet_663_, v_config_666_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_702_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_702_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_721_; 
v_a_711_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_721_ == 0)
{
v___x_713_ = v___x_702_;
v_isShared_714_ = v_isSharedCheck_721_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_702_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_721_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_719_; 
v___x_715_ = lean_unsigned_to_nat(1u);
v___x_716_ = lean_mk_empty_array_with_capacity(v___x_715_);
v___x_717_ = lean_array_push(v___x_716_, v_a_711_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v___x_717_);
v___x_719_ = v___x_713_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_717_);
v___x_719_ = v_reuseFailAlloc_720_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
return v___x_719_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget___boxed(lean_object* v_ws_724_, lean_object* v_pkg_725_, lean_object* v_target_726_, lean_object* v_decl_727_, lean_object* v_facet_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(v_ws_724_, v_pkg_725_, v_target_726_, v_decl_727_, v_facet_728_);
lean_dec_ref(v_ws_724_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(lean_object* v_ws_730_, lean_object* v_pkg_731_, lean_object* v_target_732_, lean_object* v_facet_733_){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = l_Lake_Package_findTargetDecl_x3f(v_target_732_, v_pkg_731_);
if (lean_obj_tag(v___x_734_) == 1)
{
lean_object* v_val_735_; lean_object* v___x_736_; 
v_val_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_val_735_);
lean_dec_ref_known(v___x_734_, 1);
v___x_736_ = l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(v_ws_730_, v_pkg_731_, v_target_732_, v_val_735_, v_facet_733_);
return v___x_736_;
}
else
{
lean_object* v___x_737_; 
lean_dec(v___x_734_);
lean_inc_ref(v_pkg_731_);
lean_inc(v_target_732_);
v___x_737_ = l_Lake_Package_findTargetModule_x3f(v_target_732_, v_pkg_731_);
if (lean_obj_tag(v___x_737_) == 1)
{
lean_object* v_val_738_; lean_object* v___x_739_; 
lean_dec(v_target_732_);
lean_dec_ref(v_pkg_731_);
v_val_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_val_738_);
lean_dec_ref_known(v___x_737_, 1);
v___x_739_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_730_, v_val_738_, v_facet_733_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_739_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_739_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
else
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_758_; 
v_a_748_ = lean_ctor_get(v___x_739_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_758_ == 0)
{
v___x_750_ = v___x_739_;
v_isShared_751_ = v_isSharedCheck_758_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_739_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_758_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_756_; 
v___x_752_ = lean_unsigned_to_nat(1u);
v___x_753_ = lean_mk_empty_array_with_capacity(v___x_752_);
v___x_754_ = lean_array_push(v___x_753_, v_a_748_);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v___x_754_);
v___x_756_ = v___x_750_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_754_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
else
{
lean_object* v_baseName_759_; uint8_t v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
lean_dec(v___x_737_);
lean_dec(v_facet_733_);
v_baseName_759_ = lean_ctor_get(v_pkg_731_, 1);
lean_inc(v_baseName_759_);
lean_dec_ref(v_pkg_731_);
v___x_760_ = 0;
v___x_761_ = l_Lean_Name_toString(v_target_732_, v___x_760_);
v___x_762_ = lean_alloc_ctor(17, 2, 0);
lean_ctor_set(v___x_762_, 0, v_baseName_759_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
return v___x_763_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage___boxed(lean_object* v_ws_764_, lean_object* v_pkg_765_, lean_object* v_target_766_, lean_object* v_facet_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(v_ws_764_, v_pkg_765_, v_target_766_, v_facet_767_);
lean_dec_ref(v_ws_764_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(lean_object* v_ws_769_, lean_object* v_pkg_770_, lean_object* v_as_771_, size_t v_i_772_, size_t v_stop_773_, lean_object* v_b_774_){
_start:
{
lean_object* v_a_776_; uint8_t v___x_780_; 
v___x_780_ = lean_usize_dec_eq(v_i_772_, v_stop_773_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_781_ = lean_array_uget_borrowed(v_as_771_, v_i_772_);
v___x_782_ = lean_box(0);
lean_inc(v___x_781_);
lean_inc_ref(v_pkg_770_);
v___x_783_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(v_ws_769_, v_pkg_770_, v___x_781_, v___x_782_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_dec_ref(v_b_774_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_dec_ref(v_pkg_770_);
return v___x_783_;
}
else
{
lean_object* v_a_784_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_784_);
lean_dec_ref_known(v___x_783_, 1);
v_a_776_ = v_a_784_;
goto v___jp_775_;
}
}
else
{
lean_object* v_a_785_; lean_object* v___x_786_; 
v_a_785_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v___x_783_, 1);
v___x_786_ = l_Array_append___redArg(v_b_774_, v_a_785_);
lean_dec(v_a_785_);
v_a_776_ = v___x_786_;
goto v___jp_775_;
}
}
else
{
lean_object* v___x_787_; 
lean_dec_ref(v_pkg_770_);
v___x_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_787_, 0, v_b_774_);
return v___x_787_;
}
v___jp_775_:
{
size_t v___x_777_; size_t v___x_778_; 
v___x_777_ = ((size_t)1ULL);
v___x_778_ = lean_usize_add(v_i_772_, v___x_777_);
v_i_772_ = v___x_778_;
v_b_774_ = v_a_776_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0___boxed(lean_object* v_ws_788_, lean_object* v_pkg_789_, lean_object* v_as_790_, lean_object* v_i_791_, lean_object* v_stop_792_, lean_object* v_b_793_){
_start:
{
size_t v_i_boxed_794_; size_t v_stop_boxed_795_; lean_object* v_res_796_; 
v_i_boxed_794_ = lean_unbox_usize(v_i_791_);
lean_dec(v_i_791_);
v_stop_boxed_795_ = lean_unbox_usize(v_stop_792_);
lean_dec(v_stop_792_);
v_res_796_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(v_ws_788_, v_pkg_789_, v_as_790_, v_i_boxed_794_, v_stop_boxed_795_, v_b_793_);
lean_dec_ref(v_as_790_);
lean_dec_ref(v_ws_788_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(lean_object* v_ws_801_, lean_object* v_pkg_802_){
_start:
{
lean_object* v_defaultTargets_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; 
v_defaultTargets_803_ = lean_ctor_get(v_pkg_802_, 17);
lean_inc_ref(v_defaultTargets_803_);
v___x_804_ = lean_unsigned_to_nat(0u);
v___x_805_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__0));
v___x_806_ = lean_array_get_size(v_defaultTargets_803_);
v___x_807_ = lean_nat_dec_lt(v___x_804_, v___x_806_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; 
lean_dec_ref(v_defaultTargets_803_);
lean_dec_ref(v_pkg_802_);
v___x_808_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___closed__1));
return v___x_808_;
}
else
{
size_t v___x_809_; size_t v___x_810_; lean_object* v___x_811_; 
v___x_809_ = ((size_t)0ULL);
v___x_810_ = lean_usize_of_nat(v___x_806_);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget_spec__0(v_ws_801_, v_pkg_802_, v_defaultTargets_803_, v___x_809_, v___x_810_, v___x_805_);
lean_dec_ref(v_defaultTargets_803_);
return v___x_811_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget___boxed(lean_object* v_ws_812_, lean_object* v_pkg_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(v_ws_812_, v_pkg_813_);
lean_dec_ref(v_ws_812_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(lean_object* v_ws_816_, lean_object* v_pkg_817_, lean_object* v_facet_818_){
_start:
{
uint8_t v___x_819_; 
v___x_819_ = l_Lean_Name_isAnonymous(v_facet_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_820_ = l_Lake_Package_keyword;
lean_inc(v_facet_818_);
v___x_821_ = l_Lean_Name_append(v___x_820_, v_facet_818_);
v___x_822_ = l_Lake_Workspace_findPackageFacetConfig_x3f(v___x_821_, v_ws_816_);
if (lean_obj_tag(v___x_822_) == 1)
{
lean_object* v_val_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_839_; 
lean_dec(v_facet_818_);
v_val_823_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_839_ == 0)
{
v___x_825_ = v___x_822_;
v_isShared_826_ = v_isSharedCheck_839_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_val_823_);
lean_dec(v___x_822_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_839_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v_keyName_827_; uint8_t v_buildable_828_; lean_object* v_format_829_; lean_object* v___x_831_; 
v_keyName_827_ = lean_ctor_get(v_pkg_817_, 2);
v_buildable_828_ = lean_ctor_get_uint8(v_val_823_, sizeof(void*)*4);
v_format_829_ = lean_ctor_get(v_val_823_, 3);
lean_inc_ref(v_format_829_);
lean_dec(v_val_823_);
lean_inc(v_keyName_827_);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 0, v_keyName_827_);
v___x_831_ = v___x_825_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_keyName_827_);
v___x_831_ = v_reuseFailAlloc_838_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_832_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
lean_ctor_set(v___x_832_, 1, v___x_820_);
lean_ctor_set(v___x_832_, 2, v_pkg_817_);
lean_ctor_set(v___x_832_, 3, v___x_821_);
v___x_833_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_833_, 0, v___x_832_);
lean_ctor_set(v___x_833_, 1, v_format_829_);
lean_ctor_set_uint8(v___x_833_, sizeof(void*)*2, v_buildable_828_);
v___x_834_ = lean_unsigned_to_nat(1u);
v___x_835_ = lean_mk_empty_array_with_capacity(v___x_834_);
v___x_836_ = lean_array_push(v___x_835_, v___x_833_);
v___x_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
return v___x_837_;
}
}
}
else
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
lean_dec(v___x_822_);
lean_dec(v___x_821_);
lean_dec_ref(v_pkg_817_);
v___x_840_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___closed__0));
v___x_841_ = lean_alloc_ctor(14, 2, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
lean_ctor_set(v___x_841_, 1, v_facet_818_);
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
return v___x_842_;
}
}
else
{
lean_object* v___x_843_; 
lean_dec(v_facet_818_);
v___x_843_ = l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(v_ws_816_, v_pkg_817_);
return v___x_843_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget___boxed(lean_object* v_ws_844_, lean_object* v_pkg_845_, lean_object* v_facet_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_844_, v_pkg_845_, v_facet_846_);
lean_dec_ref(v_ws_844_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(lean_object* v_ws_848_, lean_object* v_target_849_, lean_object* v_facet_850_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l_Lake_Workspace_findTargetDecl_x3f(v_target_849_, v_ws_848_);
if (lean_obj_tag(v___x_876_) == 1)
{
lean_object* v_val_877_; lean_object* v_fst_878_; lean_object* v_snd_879_; lean_object* v___x_880_; 
v_val_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_val_877_);
lean_dec_ref_known(v___x_876_, 1);
v_fst_878_ = lean_ctor_get(v_val_877_, 0);
lean_inc(v_fst_878_);
v_snd_879_ = lean_ctor_get(v_val_877_, 1);
lean_inc(v_snd_879_);
lean_dec(v_val_877_);
v___x_880_ = l___private_Lake_CLI_Build_0__Lake_resolveConfigDeclTarget(v_ws_848_, v_fst_878_, v_target_849_, v_snd_879_, v_facet_850_);
return v___x_880_;
}
else
{
lean_object* v_packages_881_; lean_object* v___x_882_; size_t v_sz_883_; size_t v___x_884_; lean_object* v___x_885_; lean_object* v_fst_886_; 
lean_dec(v___x_876_);
v_packages_881_ = lean_ctor_get(v_ws_848_, 4);
v___x_882_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0___closed__0));
v_sz_883_ = lean_array_size(v_packages_881_);
v___x_884_ = ((size_t)0ULL);
v___x_885_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_parsePackageSpec_spec__0(v_target_849_, v_packages_881_, v_sz_883_, v___x_884_, v___x_882_);
v_fst_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_fst_886_);
lean_dec_ref(v___x_885_);
if (lean_obj_tag(v_fst_886_) == 0)
{
goto v___jp_851_;
}
else
{
lean_object* v_val_887_; 
v_val_887_ = lean_ctor_get(v_fst_886_, 0);
lean_inc(v_val_887_);
lean_dec_ref_known(v_fst_886_, 1);
if (lean_obj_tag(v_val_887_) == 1)
{
lean_object* v_val_888_; lean_object* v___x_889_; 
lean_dec(v_target_849_);
v_val_888_ = lean_ctor_get(v_val_887_, 0);
lean_inc(v_val_888_);
lean_dec_ref_known(v_val_887_, 1);
v___x_889_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_848_, v_val_888_, v_facet_850_);
return v___x_889_;
}
else
{
lean_dec(v_val_887_);
goto v___jp_851_;
}
}
}
v___jp_851_:
{
lean_object* v___x_852_; 
lean_inc(v_target_849_);
v___x_852_ = l_Lake_Workspace_findTargetModule_x3f(v_target_849_, v_ws_848_);
if (lean_obj_tag(v___x_852_) == 1)
{
lean_object* v_val_853_; lean_object* v___x_854_; 
lean_dec(v_target_849_);
v_val_853_ = lean_ctor_get(v___x_852_, 0);
lean_inc(v_val_853_);
lean_dec_ref_known(v___x_852_, 1);
v___x_854_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_848_, v_val_853_, v_facet_850_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_854_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_873_; 
v_a_863_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_873_ == 0)
{
v___x_865_ = v___x_854_;
v_isShared_866_ = v_isSharedCheck_873_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_854_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_873_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_871_; 
v___x_867_ = lean_unsigned_to_nat(1u);
v___x_868_ = lean_mk_empty_array_with_capacity(v___x_867_);
v___x_869_ = lean_array_push(v___x_868_, v_a_863_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v___x_869_);
v___x_871_ = v___x_865_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_869_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
}
else
{
lean_object* v___x_874_; lean_object* v___x_875_; 
lean_dec(v___x_852_);
lean_dec(v_facet_850_);
v___x_874_ = lean_alloc_ctor(15, 1, 0);
lean_ctor_set(v___x_874_, 0, v_target_849_);
v___x_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
return v___x_875_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace___boxed(lean_object* v_ws_890_, lean_object* v_target_891_, lean_object* v_facet_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(v_ws_890_, v_target_891_, v_facet_892_);
lean_dec_ref(v_ws_890_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg(){
_start:
{
lean_object* v___x_897_; 
v___x_897_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0));
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___boxed(lean_object* v___dummy_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg();
return v_res_899_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0(void){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg();
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0(lean_object* v_s_901_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___boxed(lean_object* v_s_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0(v_s_903_);
lean_dec_ref(v_s_903_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(lean_object* v_spec_905_, lean_object* v___x_906_, lean_object* v___x_907_, lean_object* v_a_908_, lean_object* v_b_909_){
_start:
{
lean_object* v_it_911_; lean_object* v_startInclusive_912_; lean_object* v_endExclusive_913_; 
if (lean_obj_tag(v_a_908_) == 0)
{
lean_object* v_currPos_917_; lean_object* v_searcher_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_941_; 
v_currPos_917_ = lean_ctor_get(v_a_908_, 0);
v_searcher_918_ = lean_ctor_get(v_a_908_, 1);
v_isSharedCheck_941_ = !lean_is_exclusive(v_a_908_);
if (v_isSharedCheck_941_ == 0)
{
v___x_920_ = v_a_908_;
v_isShared_921_ = v_isSharedCheck_941_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_searcher_918_);
lean_inc(v_currPos_917_);
lean_dec(v_a_908_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_941_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
uint8_t v_decide_922_; 
v_decide_922_ = lean_nat_dec_eq(v_searcher_918_, v___x_907_);
if (v_decide_922_ == 0)
{
uint32_t v___x_923_; uint32_t v___x_924_; uint8_t v___x_925_; 
v___x_923_ = 47;
v___x_924_ = lean_string_utf8_get_fast(v_spec_905_, v_searcher_918_);
v___x_925_ = lean_uint32_dec_eq(v___x_924_, v___x_923_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_926_ = lean_string_utf8_next_fast(v_spec_905_, v_searcher_918_);
lean_dec(v_searcher_918_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 1, v___x_926_);
v___x_928_ = v___x_920_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_currPos_917_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v___x_926_);
v___x_928_ = v_reuseFailAlloc_930_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
v_a_908_ = v___x_928_;
goto _start;
}
}
else
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v_slice_934_; lean_object* v_nextIt_936_; 
v___x_931_ = lean_string_utf8_next_fast(v_spec_905_, v_searcher_918_);
v___x_932_ = lean_nat_sub(v___x_931_, v_searcher_918_);
v___x_933_ = lean_nat_add(v_searcher_918_, v___x_932_);
lean_dec(v___x_932_);
v_slice_934_ = l_String_Slice_subslice_x21(v___x_906_, v_currPos_917_, v_searcher_918_);
lean_inc(v___x_933_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 1, v___x_933_);
lean_ctor_set(v___x_920_, 0, v___x_933_);
v_nextIt_936_ = v___x_920_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v___x_933_);
lean_ctor_set(v_reuseFailAlloc_939_, 1, v___x_933_);
v_nextIt_936_ = v_reuseFailAlloc_939_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
lean_object* v_startInclusive_937_; lean_object* v_endExclusive_938_; 
v_startInclusive_937_ = lean_ctor_get(v_slice_934_, 0);
lean_inc(v_startInclusive_937_);
v_endExclusive_938_ = lean_ctor_get(v_slice_934_, 1);
lean_inc(v_endExclusive_938_);
lean_dec_ref(v_slice_934_);
v_it_911_ = v_nextIt_936_;
v_startInclusive_912_ = v_startInclusive_937_;
v_endExclusive_913_ = v_endExclusive_938_;
goto v___jp_910_;
}
}
}
else
{
lean_object* v___x_940_; 
lean_del_object(v___x_920_);
lean_dec(v_searcher_918_);
v___x_940_ = lean_box(1);
lean_inc(v___x_907_);
v_it_911_ = v___x_940_;
v_startInclusive_912_ = v_currPos_917_;
v_endExclusive_913_ = v___x_907_;
goto v___jp_910_;
}
}
}
else
{
lean_dec(v___x_907_);
lean_dec_ref(v_spec_905_);
return v_b_909_;
}
v___jp_910_:
{
lean_object* v___x_914_; lean_object* v___x_915_; 
lean_inc_ref(v_spec_905_);
v___x_914_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_914_, 0, v_spec_905_);
lean_ctor_set(v___x_914_, 1, v_startInclusive_912_);
lean_ctor_set(v___x_914_, 2, v_endExclusive_913_);
v___x_915_ = lean_array_push(v_b_909_, v___x_914_);
v_a_908_ = v_it_911_;
v_b_909_ = v___x_915_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg___boxed(lean_object* v_spec_942_, lean_object* v___x_943_, lean_object* v___x_944_, lean_object* v_a_945_, lean_object* v_b_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_942_, v___x_943_, v___x_944_, v_a_945_, v_b_946_);
lean_dec_ref(v___x_943_);
return v_res_947_;
}
}
static lean_object* _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2(void){
_start:
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1));
v___x_952_ = lean_string_utf8_byte_size(v___x_951_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(lean_object* v_ws_953_, lean_object* v_spec_954_, lean_object* v_facet_955_, uint8_t v_isMaybePath_956_, uint8_t v_explicit_957_){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_964_ = lean_unsigned_to_nat(0u);
v___x_965_ = lean_string_utf8_byte_size(v_spec_954_);
lean_inc_ref_n(v_spec_954_, 2);
v___x_966_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_966_, 0, v_spec_954_);
lean_ctor_set(v___x_966_, 1, v___x_964_);
lean_ctor_set(v___x_966_, 2, v___x_965_);
v___x_967_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0);
v___x_968_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0));
v___x_969_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_954_, v___x_966_, v___x_965_, v___x_967_, v___x_968_);
lean_dec_ref_known(v___x_966_, 3);
v___x_970_ = lean_array_to_list(v___x_969_);
if (lean_obj_tag(v___x_970_) == 1)
{
lean_object* v_tail_971_; 
v_tail_971_ = lean_ctor_get(v___x_970_, 1);
lean_inc(v_tail_971_);
if (lean_obj_tag(v_tail_971_) == 0)
{
lean_object* v_head_972_; lean_object* v_str_973_; lean_object* v_startInclusive_974_; lean_object* v_endExclusive_975_; lean_object* v___x_976_; uint8_t v___x_977_; 
lean_dec_ref(v_spec_954_);
v_head_972_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_head_972_);
lean_dec_ref_known(v___x_970_, 2);
v_str_973_ = lean_ctor_get(v_head_972_, 0);
lean_inc_ref(v_str_973_);
v_startInclusive_974_ = lean_ctor_get(v_head_972_, 1);
lean_inc(v_startInclusive_974_);
v_endExclusive_975_ = lean_ctor_get(v_head_972_, 2);
lean_inc(v_endExclusive_975_);
lean_dec(v_head_972_);
v___x_976_ = lean_nat_sub(v_endExclusive_975_, v_startInclusive_974_);
v___x_977_ = lean_nat_dec_eq(v___x_976_, v___x_964_);
lean_dec(v___x_976_);
if (v___x_977_ == 0)
{
if (v_explicit_957_ == 0)
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_978_ = lean_string_utf8_extract_fast(v_str_973_, v_startInclusive_974_, v_endExclusive_975_);
lean_dec(v_endExclusive_975_);
lean_dec(v_startInclusive_974_);
lean_dec_ref(v_str_973_);
v___x_979_ = l_Lake_stringToLegalOrSimpleName(v___x_978_);
v___x_980_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInWorkspace(v_ws_953_, v___x_979_, v_facet_955_);
return v___x_980_;
}
else
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_string_utf8_extract_fast(v_str_973_, v_startInclusive_974_, v_endExclusive_975_);
lean_dec(v_endExclusive_975_);
lean_dec(v_startInclusive_974_);
lean_dec_ref(v_str_973_);
v___x_982_ = l_Lake_parsePackageSpec(v_ws_953_, v___x_981_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v_facet_955_);
v_a_983_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_982_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_982_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_992_; 
v_a_991_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_991_);
lean_dec_ref_known(v___x_982_, 1);
v___x_992_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_953_, v_a_991_, v_facet_955_);
return v___x_992_;
}
}
}
else
{
lean_object* v_packages_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
lean_dec(v_endExclusive_975_);
lean_dec(v_startInclusive_974_);
lean_dec_ref(v_str_973_);
v_packages_993_ = lean_ctor_get(v_ws_953_, 4);
v___x_994_ = lean_array_fget_borrowed(v_packages_993_, v___x_964_);
lean_inc(v___x_994_);
v___x_995_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_953_, v___x_994_, v_facet_955_);
return v___x_995_;
}
}
else
{
lean_object* v_tail_996_; 
v_tail_996_ = lean_ctor_get(v_tail_971_, 1);
if (lean_obj_tag(v_tail_996_) == 0)
{
lean_object* v_head_997_; lean_object* v_head_998_; lean_object* v_str_999_; lean_object* v_startInclusive_1000_; lean_object* v_endExclusive_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
lean_dec_ref(v_spec_954_);
v_head_997_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_head_997_);
lean_dec_ref_known(v___x_970_, 2);
v_head_998_ = lean_ctor_get(v_tail_971_, 0);
lean_inc(v_head_998_);
lean_dec_ref_known(v_tail_971_, 2);
v_str_999_ = lean_ctor_get(v_head_997_, 0);
lean_inc_ref(v_str_999_);
v_startInclusive_1000_ = lean_ctor_get(v_head_997_, 1);
lean_inc(v_startInclusive_1000_);
v_endExclusive_1001_ = lean_ctor_get(v_head_997_, 2);
lean_inc(v_endExclusive_1001_);
lean_dec(v_head_997_);
v___x_1002_ = lean_string_utf8_extract_fast(v_str_999_, v_startInclusive_1000_, v_endExclusive_1001_);
lean_dec(v_endExclusive_1001_);
lean_dec(v_startInclusive_1000_);
lean_dec_ref(v_str_999_);
v___x_1003_ = l_Lake_parsePackageSpec(v_ws_953_, v___x_1002_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec(v_head_998_);
lean_dec(v_facet_955_);
v_a_1004_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_1003_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_1003_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1060_; 
v_a_1012_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1014_ = v___x_1003_;
v_isShared_1015_ = v_isSharedCheck_1060_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_1003_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1060_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v_str_1016_; lean_object* v_startInclusive_1017_; lean_object* v_endExclusive_1018_; lean_object* v___x_1023_; uint8_t v___x_1024_; 
v_str_1016_ = lean_ctor_get(v_head_998_, 0);
lean_inc_ref(v_str_1016_);
v_startInclusive_1017_ = lean_ctor_get(v_head_998_, 1);
lean_inc(v_startInclusive_1017_);
v_endExclusive_1018_ = lean_ctor_get(v_head_998_, 2);
lean_inc(v_endExclusive_1018_);
v___x_1023_ = lean_nat_sub(v_endExclusive_1018_, v_startInclusive_1017_);
v___x_1024_ = lean_nat_dec_eq(v___x_1023_, v___x_964_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; lean_object* v___x_1026_; uint8_t v___x_1027_; 
v___x_1025_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1));
v___x_1026_ = lean_obj_once(&l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2, &l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2_once, _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2);
v___x_1027_ = lean_nat_dec_le(v___x_1026_, v___x_1023_);
lean_dec(v___x_1023_);
if (v___x_1027_ == 0)
{
lean_del_object(v___x_1014_);
lean_dec(v_head_998_);
goto v___jp_1019_;
}
else
{
uint8_t v___x_1028_; 
v___x_1028_ = lean_string_memcmp(v_str_1016_, v___x_1025_, v_startInclusive_1017_, v___x_964_, v___x_1026_);
if (v___x_1028_ == 0)
{
lean_del_object(v___x_1014_);
lean_dec(v_head_998_);
goto v___jp_1019_;
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1029_ = lean_unsigned_to_nat(1u);
v___x_1030_ = l_String_Slice_Pos_nextn(v_head_998_, v___x_964_, v___x_1029_);
lean_dec(v_head_998_);
v___x_1031_ = lean_nat_add(v_startInclusive_1017_, v___x_1030_);
lean_dec(v___x_1030_);
lean_dec(v_startInclusive_1017_);
v___x_1032_ = lean_string_utf8_extract_fast(v_str_1016_, v___x_1031_, v_endExclusive_1018_);
lean_dec(v_endExclusive_1018_);
lean_dec(v___x_1031_);
lean_dec_ref(v_str_1016_);
v___x_1033_ = l_String_toName(v___x_1032_);
lean_inc(v___x_1033_);
v___x_1034_ = l_Lake_Package_findTargetModule_x3f(v___x_1033_, v_a_1012_);
if (lean_obj_tag(v___x_1034_) == 1)
{
lean_object* v_val_1035_; lean_object* v___x_1036_; 
lean_dec(v___x_1033_);
lean_del_object(v___x_1014_);
v_val_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_val_1035_);
lean_dec_ref_known(v___x_1034_, 1);
v___x_1036_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_953_, v_val_1035_, v_facet_955_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_1036_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1036_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
else
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1054_; 
v_a_1045_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1047_ = v___x_1036_;
v_isShared_1048_ = v_isSharedCheck_1054_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1036_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1054_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1049_ = lean_mk_empty_array_with_capacity(v___x_1029_);
v___x_1050_ = lean_array_push(v___x_1049_, v_a_1045_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 0, v___x_1050_);
v___x_1052_ = v___x_1047_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v___x_1050_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
else
{
lean_object* v___x_1055_; lean_object* v___x_1057_; 
lean_dec(v___x_1034_);
lean_dec(v_facet_955_);
v___x_1055_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1033_);
if (v_isShared_1015_ == 0)
{
lean_ctor_set_tag(v___x_1014_, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1055_);
v___x_1057_ = v___x_1014_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
}
else
{
lean_object* v___x_1059_; 
lean_dec(v___x_1023_);
lean_dec(v_endExclusive_1018_);
lean_dec(v_startInclusive_1017_);
lean_dec_ref(v_str_1016_);
lean_del_object(v___x_1014_);
lean_dec(v_head_998_);
v___x_1059_ = l___private_Lake_CLI_Build_0__Lake_resolvePackageTarget(v_ws_953_, v_a_1012_, v_facet_955_);
return v___x_1059_;
}
v___jp_1019_:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1020_ = lean_string_utf8_extract_fast(v_str_1016_, v_startInclusive_1017_, v_endExclusive_1018_);
lean_dec(v_endExclusive_1018_);
lean_dec(v_startInclusive_1017_);
lean_dec_ref(v_str_1016_);
v___x_1021_ = l_Lake_stringToLegalOrSimpleName(v___x_1020_);
v___x_1022_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetInPackage(v_ws_953_, v_a_1012_, v___x_1021_, v_facet_955_);
return v___x_1022_;
}
}
}
}
else
{
lean_dec_ref_known(v_tail_971_, 2);
lean_dec_ref_known(v___x_970_, 2);
lean_dec(v_facet_955_);
goto v___jp_958_;
}
}
}
else
{
lean_dec(v___x_970_);
lean_dec(v_facet_955_);
goto v___jp_958_;
}
v___jp_958_:
{
if (v_isMaybePath_956_ == 0)
{
uint32_t v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_959_ = 47;
v___x_960_ = lean_alloc_ctor(19, 1, 4);
lean_ctor_set(v___x_960_, 0, v_spec_954_);
lean_ctor_set_uint32(v___x_960_, sizeof(void*)*1, v___x_959_);
v___x_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
return v___x_961_;
}
else
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(v___x_962_, 0, v_spec_954_);
v___x_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
return v___x_963_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___boxed(lean_object* v_ws_1061_, lean_object* v_spec_1062_, lean_object* v_facet_1063_, lean_object* v_isMaybePath_1064_, lean_object* v_explicit_1065_){
_start:
{
uint8_t v_isMaybePath_boxed_1066_; uint8_t v_explicit_boxed_1067_; lean_object* v_res_1068_; 
v_isMaybePath_boxed_1066_ = lean_unbox(v_isMaybePath_1064_);
v_explicit_boxed_1067_ = lean_unbox(v_explicit_1065_);
v_res_1068_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1061_, v_spec_1062_, v_facet_1063_, v_isMaybePath_boxed_1066_, v_explicit_boxed_1067_);
lean_dec_ref(v_ws_1061_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1(lean_object* v_spec_1069_, lean_object* v___x_1070_, lean_object* v___x_1071_, lean_object* v_inst_1072_, lean_object* v_R_1073_, lean_object* v_a_1074_, lean_object* v_b_1075_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_1069_, v___x_1070_, v___x_1071_, v_a_1074_, v_b_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___boxed(lean_object* v_spec_1077_, lean_object* v___x_1078_, lean_object* v___x_1079_, lean_object* v_inst_1080_, lean_object* v_R_1081_, lean_object* v_a_1082_, lean_object* v_b_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1(v_spec_1077_, v___x_1078_, v___x_1079_, v_inst_1080_, v_R_1081_, v_a_1082_, v_b_1083_);
lean_dec_ref(v___x_1078_);
return v_res_1084_;
}
}
static lean_object* _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0));
v___x_1087_ = lean_string_utf8_byte_size(v___x_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(lean_object* v_ws_1088_, lean_object* v_spec_1089_, lean_object* v_facet_1090_){
_start:
{
uint8_t v___y_1093_; uint8_t v___y_1094_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; uint8_t v___x_1212_; 
v___x_1209_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0));
v___x_1210_ = lean_string_utf8_byte_size(v_spec_1089_);
v___x_1211_ = lean_obj_once(&l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1, &l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1_once, _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1);
v___x_1212_ = lean_nat_dec_le(v___x_1211_, v___x_1210_);
if (v___x_1212_ == 0)
{
goto v___jp_1173_;
}
else
{
lean_object* v___x_1213_; uint8_t v___x_1214_; 
v___x_1213_ = lean_unsigned_to_nat(0u);
v___x_1214_ = lean_string_memcmp(v_spec_1089_, v___x_1209_, v___x_1213_, v___x_1213_, v___x_1211_);
if (v___x_1214_ == 0)
{
goto v___jp_1173_;
}
else
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; uint8_t v___x_1219_; lean_object* v___x_1220_; 
v___x_1215_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_spec_1089_);
v___x_1216_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1216_, 0, v_spec_1089_);
lean_ctor_set(v___x_1216_, 1, v___x_1213_);
lean_ctor_set(v___x_1216_, 2, v___x_1210_);
v___x_1217_ = l_String_Slice_Pos_nextn(v___x_1216_, v___x_1213_, v___x_1215_);
lean_dec_ref_known(v___x_1216_, 3);
v___x_1218_ = lean_string_utf8_extract_fast(v_spec_1089_, v___x_1217_, v___x_1210_);
lean_dec(v___x_1217_);
lean_dec_ref(v_spec_1089_);
v___x_1219_ = 0;
v___x_1220_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1088_, v___x_1218_, v_facet_1090_, v___x_1219_, v___x_1212_);
if (lean_obj_tag(v___x_1220_) == 0)
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
v_a_1221_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1223_ = v___x_1220_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1220_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
lean_ctor_set_tag(v___x_1223_, 1);
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_a_1221_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
else
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
v_a_1229_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1231_ = v___x_1220_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1220_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
lean_ctor_set_tag(v___x_1231_, 0);
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1229_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
}
}
v___jp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; 
lean_inc_ref(v_spec_1089_);
v___x_1095_ = l_Lake_resolvePath(v_spec_1089_);
v___x_1096_ = lean_string_utf8_byte_size(v___x_1095_);
v___x_1097_ = lean_unsigned_to_nat(0u);
v___x_1098_ = lean_nat_dec_eq(v___x_1096_, v___x_1097_);
if (v___x_1098_ == 0)
{
uint8_t v___x_1099_; 
v___x_1099_ = l_System_FilePath_isDir(v___x_1095_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; 
v___x_1100_ = l_Lake_Workspace_findModuleBySrc_x3f(v___x_1095_, v_ws_1088_);
if (lean_obj_tag(v___x_1100_) == 1)
{
lean_object* v_val_1101_; lean_object* v___x_1102_; 
lean_dec_ref(v_spec_1089_);
v_val_1101_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_val_1101_);
lean_dec_ref_known(v___x_1100_, 1);
v___x_1102_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_1088_, v_val_1101_, v_facet_1090_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1102_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1102_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
lean_ctor_set_tag(v___x_1105_, 1);
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1121_; 
v_a_1111_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1113_ = v___x_1102_;
v_isShared_1114_ = v_isSharedCheck_1121_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1102_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1121_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1119_; 
v___x_1115_ = lean_unsigned_to_nat(1u);
v___x_1116_ = lean_mk_empty_array_with_capacity(v___x_1115_);
v___x_1117_ = lean_array_push(v___x_1116_, v_a_1111_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set_tag(v___x_1113_, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1117_);
v___x_1119_ = v___x_1113_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1117_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
else
{
lean_object* v___x_1122_; 
lean_dec(v___x_1100_);
v___x_1122_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1088_, v_spec_1089_, v_facet_1090_, v___y_1093_, v___x_1099_);
if (lean_obj_tag(v___x_1122_) == 0)
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
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
lean_ctor_set_tag(v___x_1125_, 1);
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(1, 1, 0);
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
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
v_a_1131_ = lean_ctor_get(v___x_1122_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1122_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1122_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1122_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
lean_ctor_set_tag(v___x_1133_, 0);
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
}
else
{
lean_object* v___x_1139_; 
lean_dec_ref(v___x_1095_);
v___x_1139_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1088_, v_spec_1089_, v_facet_1090_, v___y_1094_, v___y_1094_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v___x_1139_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1139_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
lean_ctor_set_tag(v___x_1142_, 1);
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_a_1140_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
else
{
lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
v_a_1148_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1150_ = v___x_1139_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_dec(v___x_1139_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
lean_ctor_set_tag(v___x_1150_, 0);
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_a_1148_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
}
else
{
lean_object* v___x_1156_; 
lean_dec_ref(v___x_1095_);
v___x_1156_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec(v_ws_1088_, v_spec_1089_, v_facet_1090_, v___y_1093_, v___y_1094_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set_tag(v___x_1159_, 1);
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
else
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
v_a_1165_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1167_ = v___x_1156_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1156_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
lean_ctor_set_tag(v___x_1167_, 0);
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
}
v___jp_1173_:
{
uint8_t v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; uint8_t v___x_1178_; 
v___x_1174_ = 1;
v___x_1175_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__1));
v___x_1176_ = lean_string_utf8_byte_size(v_spec_1089_);
v___x_1177_ = lean_obj_once(&l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2, &l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2_once, _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__2);
v___x_1178_ = lean_nat_dec_le(v___x_1177_, v___x_1176_);
if (v___x_1178_ == 0)
{
v___y_1093_ = v___x_1174_;
v___y_1094_ = v___x_1178_;
goto v___jp_1092_;
}
else
{
lean_object* v___x_1179_; uint8_t v___x_1180_; 
v___x_1179_ = lean_unsigned_to_nat(0u);
v___x_1180_ = lean_string_memcmp(v_spec_1089_, v___x_1175_, v___x_1179_, v___x_1179_, v___x_1177_);
if (v___x_1180_ == 0)
{
v___y_1093_ = v___x_1174_;
v___y_1094_ = v___x_1180_;
goto v___jp_1092_;
}
else
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v_mod_1185_; lean_object* v___x_1186_; 
v___x_1181_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_spec_1089_);
v___x_1182_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1182_, 0, v_spec_1089_);
lean_ctor_set(v___x_1182_, 1, v___x_1179_);
lean_ctor_set(v___x_1182_, 2, v___x_1176_);
v___x_1183_ = l_String_Slice_Pos_nextn(v___x_1182_, v___x_1179_, v___x_1181_);
lean_dec_ref_known(v___x_1182_, 3);
v___x_1184_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1184_, 0, v_spec_1089_);
lean_ctor_set(v___x_1184_, 1, v___x_1183_);
lean_ctor_set(v___x_1184_, 2, v___x_1176_);
v_mod_1185_ = l_String_Slice_toName(v___x_1184_);
lean_dec_ref_known(v___x_1184_, 3);
lean_inc(v_mod_1185_);
v___x_1186_ = l_Lake_Workspace_findTargetModule_x3f(v_mod_1185_, v_ws_1088_);
if (lean_obj_tag(v___x_1186_) == 1)
{
lean_object* v_val_1187_; lean_object* v___x_1188_; 
lean_dec(v_mod_1185_);
v_val_1187_ = lean_ctor_get(v___x_1186_, 0);
lean_inc(v_val_1187_);
lean_dec_ref_known(v___x_1186_, 1);
v___x_1188_ = l___private_Lake_CLI_Build_0__Lake_resolveModuleTarget(v_ws_1088_, v_val_1187_, v_facet_1090_);
if (lean_obj_tag(v___x_1188_) == 0)
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
v_a_1189_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1191_ = v___x_1188_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1188_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set_tag(v___x_1191_, 1);
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_a_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
else
{
lean_object* v_a_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1206_; 
v_a_1197_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1199_ = v___x_1188_;
v_isShared_1200_ = v_isSharedCheck_1206_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_a_1197_);
lean_dec(v___x_1188_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1206_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1204_; 
v___x_1201_ = lean_mk_empty_array_with_capacity(v___x_1181_);
v___x_1202_ = lean_array_push(v___x_1201_, v_a_1197_);
if (v_isShared_1200_ == 0)
{
lean_ctor_set_tag(v___x_1199_, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1202_);
v___x_1204_ = v___x_1199_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v___x_1202_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
}
else
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
lean_dec(v___x_1186_);
lean_dec(v_facet_1090_);
v___x_1207_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v___x_1207_, 0, v_mod_1185_);
v___x_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
return v___x_1208_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___boxed(lean_object* v_ws_1237_, lean_object* v_spec_1238_, lean_object* v_facet_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(v_ws_1237_, v_spec_1238_, v_facet_1239_);
lean_dec_ref(v_ws_1237_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec(lean_object* v_ws_1242_, lean_object* v_spec_1243_){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1251_ = lean_unsigned_to_nat(0u);
v___x_1252_ = lean_string_utf8_byte_size(v_spec_1243_);
lean_inc_ref_n(v_spec_1243_, 2);
v___x_1253_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1253_, 0, v_spec_1243_);
lean_ctor_set(v___x_1253_, 1, v___x_1251_);
lean_ctor_set(v___x_1253_, 2, v___x_1252_);
v___x_1254_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___closed__0);
v___x_1255_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec___closed__0));
v___x_1256_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__1___redArg(v_spec_1243_, v___x_1253_, v___x_1252_, v___x_1254_, v___x_1255_);
lean_dec_ref_known(v___x_1253_, 3);
v___x_1257_ = lean_array_to_list(v___x_1256_);
if (lean_obj_tag(v___x_1257_) == 1)
{
lean_object* v_tail_1258_; 
v_tail_1258_ = lean_ctor_get(v___x_1257_, 1);
lean_inc(v_tail_1258_);
if (lean_obj_tag(v_tail_1258_) == 0)
{
lean_object* v_head_1259_; lean_object* v_str_1260_; lean_object* v_startInclusive_1261_; lean_object* v_endExclusive_1262_; lean_object* v___x_1263_; lean_object* v_targetName_1264_; lean_object* v___x_1265_; 
v_head_1259_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_head_1259_);
lean_dec_ref_known(v___x_1257_, 2);
v_str_1260_ = lean_ctor_get(v_head_1259_, 0);
lean_inc_ref(v_str_1260_);
v_startInclusive_1261_ = lean_ctor_get(v_head_1259_, 1);
lean_inc(v_startInclusive_1261_);
v_endExclusive_1262_ = lean_ctor_get(v_head_1259_, 2);
lean_inc(v_endExclusive_1262_);
lean_dec(v_head_1259_);
v___x_1263_ = lean_string_utf8_extract_fast(v_str_1260_, v_startInclusive_1261_, v_endExclusive_1262_);
lean_dec(v_endExclusive_1262_);
lean_dec(v_startInclusive_1261_);
lean_dec_ref(v_str_1260_);
v_targetName_1264_ = l_Lake_stringToLegalOrSimpleName(v___x_1263_);
v___x_1265_ = l_Lake_Workspace_findLeanExe_x3f(v_targetName_1264_, v_ws_1242_);
lean_dec(v_targetName_1264_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = lean_alloc_ctor(21, 1, 0);
lean_ctor_set(v___x_1266_, 0, v_spec_1243_);
v___x_1267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
return v___x_1267_;
}
else
{
lean_object* v_val_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
lean_dec_ref(v_spec_1243_);
v_val_1268_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1265_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_val_1268_);
lean_dec(v___x_1265_);
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
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_val_1268_);
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
else
{
lean_object* v_head_1276_; lean_object* v_head_1277_; lean_object* v_tail_1278_; lean_object* v_str_1280_; lean_object* v_startInclusive_1281_; lean_object* v_endExclusive_1282_; 
v_head_1276_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_head_1276_);
lean_dec_ref_known(v___x_1257_, 2);
v_head_1277_ = lean_ctor_get(v_tail_1258_, 0);
lean_inc(v_head_1277_);
v_tail_1278_ = lean_ctor_get(v_tail_1258_, 1);
lean_inc(v_tail_1278_);
lean_dec_ref_known(v_tail_1258_, 2);
if (lean_obj_tag(v_tail_1278_) == 0)
{
lean_object* v_str_1320_; lean_object* v_startInclusive_1321_; lean_object* v_endExclusive_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; uint8_t v___x_1326_; 
v_str_1320_ = lean_ctor_get(v_head_1276_, 0);
lean_inc_ref(v_str_1320_);
v_startInclusive_1321_ = lean_ctor_get(v_head_1276_, 1);
lean_inc(v_startInclusive_1321_);
v_endExclusive_1322_ = lean_ctor_get(v_head_1276_, 2);
lean_inc(v_endExclusive_1322_);
v___x_1323_ = ((lean_object*)(l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__0));
v___x_1324_ = lean_obj_once(&l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1, &l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1_once, _init_l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec___closed__1);
v___x_1325_ = lean_nat_sub(v_endExclusive_1322_, v_startInclusive_1321_);
v___x_1326_ = lean_nat_dec_le(v___x_1324_, v___x_1325_);
lean_dec(v___x_1325_);
if (v___x_1326_ == 0)
{
lean_dec(v_head_1276_);
v_str_1280_ = v_str_1320_;
v_startInclusive_1281_ = v_startInclusive_1321_;
v_endExclusive_1282_ = v_endExclusive_1322_;
goto v___jp_1279_;
}
else
{
uint8_t v___x_1327_; 
v___x_1327_ = lean_string_memcmp(v_str_1320_, v___x_1323_, v_startInclusive_1321_, v___x_1251_, v___x_1324_);
if (v___x_1327_ == 0)
{
lean_dec(v_head_1276_);
v_str_1280_ = v_str_1320_;
v_startInclusive_1281_ = v_startInclusive_1321_;
v_endExclusive_1282_ = v_endExclusive_1322_;
goto v___jp_1279_;
}
else
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1328_ = lean_unsigned_to_nat(1u);
v___x_1329_ = l_String_Slice_Pos_nextn(v_head_1276_, v___x_1251_, v___x_1328_);
lean_dec(v_head_1276_);
v___x_1330_ = lean_nat_add(v_startInclusive_1321_, v___x_1329_);
lean_dec(v___x_1329_);
lean_dec(v_startInclusive_1321_);
v_str_1280_ = v_str_1320_;
v_startInclusive_1281_ = v___x_1330_;
v_endExclusive_1282_ = v_endExclusive_1322_;
goto v___jp_1279_;
}
}
}
else
{
lean_dec(v_tail_1278_);
lean_dec(v_head_1277_);
lean_dec(v_head_1276_);
goto v___jp_1247_;
}
v___jp_1279_:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1283_ = lean_string_utf8_extract_fast(v_str_1280_, v_startInclusive_1281_, v_endExclusive_1282_);
lean_dec(v_endExclusive_1282_);
lean_dec(v_startInclusive_1281_);
lean_dec_ref(v_str_1280_);
v___x_1284_ = l_Lake_parsePackageSpec(v_ws_1242_, v___x_1283_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1292_; 
lean_dec(v_head_1277_);
lean_dec_ref(v_spec_1243_);
v_a_1285_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1287_ = v___x_1284_;
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1284_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_a_1285_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
else
{
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1319_; 
v_a_1293_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1295_ = v___x_1284_;
v_isShared_1296_ = v_isSharedCheck_1319_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_dec(v___x_1284_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1319_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v_str_1297_; lean_object* v_startInclusive_1298_; lean_object* v_endExclusive_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1318_; 
v_str_1297_ = lean_ctor_get(v_head_1277_, 0);
v_startInclusive_1298_ = lean_ctor_get(v_head_1277_, 1);
v_endExclusive_1299_ = lean_ctor_get(v_head_1277_, 2);
v_isSharedCheck_1318_ = !lean_is_exclusive(v_head_1277_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1301_ = v_head_1277_;
v_isShared_1302_ = v_isSharedCheck_1318_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_endExclusive_1299_);
lean_inc(v_startInclusive_1298_);
lean_inc(v_str_1297_);
lean_dec(v_head_1277_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1318_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1303_ = lean_string_utf8_extract_fast(v_str_1297_, v_startInclusive_1298_, v_endExclusive_1299_);
lean_dec(v_endExclusive_1299_);
lean_dec(v_startInclusive_1298_);
lean_dec_ref(v_str_1297_);
v___x_1304_ = l_Lake_stringToLegalOrSimpleName(v___x_1303_);
v___x_1305_ = l_Lake_Package_findTargetDecl_x3f(v___x_1304_, v_a_1293_);
lean_dec(v___x_1304_);
if (lean_obj_tag(v___x_1305_) == 0)
{
lean_del_object(v___x_1301_);
lean_del_object(v___x_1295_);
lean_dec(v_a_1293_);
goto v___jp_1244_;
}
else
{
lean_object* v_val_1306_; lean_object* v_name_1307_; lean_object* v_kind_1308_; lean_object* v_config_1309_; lean_object* v___x_1310_; uint8_t v___x_1311_; 
v_val_1306_ = lean_ctor_get(v___x_1305_, 0);
lean_inc(v_val_1306_);
lean_dec_ref_known(v___x_1305_, 1);
v_name_1307_ = lean_ctor_get(v_val_1306_, 1);
lean_inc(v_name_1307_);
v_kind_1308_ = lean_ctor_get(v_val_1306_, 2);
lean_inc(v_kind_1308_);
v_config_1309_ = lean_ctor_get(v_val_1306_, 3);
lean_inc(v_config_1309_);
lean_dec(v_val_1306_);
v___x_1310_ = l_Lake_LeanExe_keyword;
v___x_1311_ = lean_name_eq(v_kind_1308_, v___x_1310_);
lean_dec(v_kind_1308_);
if (v___x_1311_ == 0)
{
lean_dec(v_config_1309_);
lean_dec(v_name_1307_);
lean_del_object(v___x_1301_);
lean_del_object(v___x_1295_);
lean_dec(v_a_1293_);
goto v___jp_1244_;
}
else
{
lean_object* v___x_1313_; 
lean_dec_ref(v_spec_1243_);
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 2, v_config_1309_);
lean_ctor_set(v___x_1301_, 1, v_name_1307_);
lean_ctor_set(v___x_1301_, 0, v_a_1293_);
v___x_1313_ = v___x_1301_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_a_1293_);
lean_ctor_set(v_reuseFailAlloc_1317_, 1, v_name_1307_);
lean_ctor_set(v_reuseFailAlloc_1317_, 2, v_config_1309_);
v___x_1313_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
lean_object* v___x_1315_; 
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 0, v___x_1313_);
v___x_1315_ = v___x_1295_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v___x_1313_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
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
lean_dec(v___x_1257_);
goto v___jp_1247_;
}
v___jp_1244_:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1245_ = lean_alloc_ctor(21, 1, 0);
lean_ctor_set(v___x_1245_, 0, v_spec_1243_);
v___x_1246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1245_);
return v___x_1246_;
}
v___jp_1247_:
{
uint32_t v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v___x_1248_ = 47;
v___x_1249_ = lean_alloc_ctor(19, 1, 4);
lean_ctor_set(v___x_1249_, 0, v_spec_1243_);
lean_ctor_set_uint32(v___x_1249_, sizeof(void*)*1, v___x_1248_);
v___x_1250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1249_);
return v___x_1250_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parseExeTargetSpec___boxed(lean_object* v_ws_1331_, lean_object* v_spec_1332_){
_start:
{
lean_object* v_res_1333_; 
v_res_1333_ = l_Lake_parseExeTargetSpec(v_ws_1331_, v_spec_1332_);
lean_dec_ref(v_ws_1331_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg(){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Build_0__Lake_resolveTargetLikeSpec_spec__0___redArg___closed__0));
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg___boxed(lean_object* v___dummy_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg();
return v_res_1337_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___redArg();
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0(lean_object* v_s_1339_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___boxed(lean_object* v_s_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0(v_s_1341_);
lean_dec_ref(v_s_1341_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(lean_object* v_spec_1343_, lean_object* v___x_1344_, lean_object* v___x_1345_, lean_object* v_a_1346_, lean_object* v_b_1347_){
_start:
{
lean_object* v_it_1349_; lean_object* v_startInclusive_1350_; lean_object* v_endExclusive_1351_; 
if (lean_obj_tag(v_a_1346_) == 0)
{
lean_object* v_currPos_1356_; lean_object* v_searcher_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1380_; 
v_currPos_1356_ = lean_ctor_get(v_a_1346_, 0);
v_searcher_1357_ = lean_ctor_get(v_a_1346_, 1);
v_isSharedCheck_1380_ = !lean_is_exclusive(v_a_1346_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1359_ = v_a_1346_;
v_isShared_1360_ = v_isSharedCheck_1380_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_searcher_1357_);
lean_inc(v_currPos_1356_);
lean_dec(v_a_1346_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1380_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
uint8_t v_decide_1361_; 
v_decide_1361_ = lean_nat_dec_eq(v_searcher_1357_, v___x_1345_);
if (v_decide_1361_ == 0)
{
uint32_t v___x_1362_; uint32_t v___x_1363_; uint8_t v___x_1364_; 
v___x_1362_ = 58;
v___x_1363_ = lean_string_utf8_get_fast(v_spec_1343_, v_searcher_1357_);
v___x_1364_ = lean_uint32_dec_eq(v___x_1363_, v___x_1362_);
if (v___x_1364_ == 0)
{
lean_object* v___x_1365_; lean_object* v___x_1367_; 
v___x_1365_ = lean_string_utf8_next_fast(v_spec_1343_, v_searcher_1357_);
lean_dec(v_searcher_1357_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 1, v___x_1365_);
v___x_1367_ = v___x_1359_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_currPos_1356_);
lean_ctor_set(v_reuseFailAlloc_1369_, 1, v___x_1365_);
v___x_1367_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
v_a_1346_ = v___x_1367_;
goto _start;
}
}
else
{
lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v_slice_1373_; lean_object* v_nextIt_1375_; 
v___x_1370_ = lean_string_utf8_next_fast(v_spec_1343_, v_searcher_1357_);
v___x_1371_ = lean_nat_sub(v___x_1370_, v_searcher_1357_);
v___x_1372_ = lean_nat_add(v_searcher_1357_, v___x_1371_);
lean_dec(v___x_1371_);
v_slice_1373_ = l_String_Slice_subslice_x21(v___x_1344_, v_currPos_1356_, v_searcher_1357_);
lean_inc(v___x_1372_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 1, v___x_1372_);
lean_ctor_set(v___x_1359_, 0, v___x_1372_);
v_nextIt_1375_ = v___x_1359_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1372_);
lean_ctor_set(v_reuseFailAlloc_1378_, 1, v___x_1372_);
v_nextIt_1375_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
lean_object* v_startInclusive_1376_; lean_object* v_endExclusive_1377_; 
v_startInclusive_1376_ = lean_ctor_get(v_slice_1373_, 0);
lean_inc(v_startInclusive_1376_);
v_endExclusive_1377_ = lean_ctor_get(v_slice_1373_, 1);
lean_inc(v_endExclusive_1377_);
lean_dec_ref(v_slice_1373_);
v_it_1349_ = v_nextIt_1375_;
v_startInclusive_1350_ = v_startInclusive_1376_;
v_endExclusive_1351_ = v_endExclusive_1377_;
goto v___jp_1348_;
}
}
}
else
{
lean_object* v___x_1379_; 
lean_del_object(v___x_1359_);
lean_dec(v_searcher_1357_);
v___x_1379_ = lean_box(1);
lean_inc(v___x_1345_);
v_it_1349_ = v___x_1379_;
v_startInclusive_1350_ = v_currPos_1356_;
v_endExclusive_1351_ = v___x_1345_;
goto v___jp_1348_;
}
}
}
else
{
lean_dec(v___x_1345_);
lean_dec_ref(v_spec_1343_);
return v_b_1347_;
}
v___jp_1348_:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
lean_inc_ref(v_spec_1343_);
v___x_1352_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1352_, 0, v_spec_1343_);
lean_ctor_set(v___x_1352_, 1, v_startInclusive_1350_);
lean_ctor_set(v___x_1352_, 2, v_endExclusive_1351_);
v___x_1353_ = l_String_Slice_toString(v___x_1352_);
lean_dec_ref_known(v___x_1352_, 3);
v___x_1354_ = lean_array_push(v_b_1347_, v___x_1353_);
v_a_1346_ = v_it_1349_;
v_b_1347_ = v___x_1354_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg___boxed(lean_object* v_spec_1381_, lean_object* v___x_1382_, lean_object* v___x_1383_, lean_object* v_a_1384_, lean_object* v_b_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(v_spec_1381_, v___x_1382_, v___x_1383_, v_a_1384_, v_b_1385_);
lean_dec_ref(v___x_1382_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec(lean_object* v_ws_1389_, lean_object* v_spec_1390_){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1396_ = lean_unsigned_to_nat(0u);
v___x_1397_ = lean_string_utf8_byte_size(v_spec_1390_);
lean_inc_ref_n(v_spec_1390_, 2);
v___x_1398_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1398_, 0, v_spec_1390_);
lean_ctor_set(v___x_1398_, 1, v___x_1396_);
lean_ctor_set(v___x_1398_, 2, v___x_1397_);
v___x_1399_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_parseTargetSpec_spec__0___closed__0);
v___x_1400_ = ((lean_object*)(l_Lake_parseTargetSpec___closed__0));
v___x_1401_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(v_spec_1390_, v___x_1398_, v___x_1397_, v___x_1399_, v___x_1400_);
lean_dec_ref_known(v___x_1398_, 3);
v___x_1402_ = lean_array_to_list(v___x_1401_);
if (lean_obj_tag(v___x_1402_) == 1)
{
lean_object* v_tail_1403_; 
v_tail_1403_ = lean_ctor_get(v___x_1402_, 1);
lean_inc(v_tail_1403_);
if (lean_obj_tag(v_tail_1403_) == 0)
{
lean_object* v_head_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_dec_ref(v_spec_1390_);
v_head_1404_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_head_1404_);
lean_dec_ref_known(v___x_1402_, 2);
v___x_1405_ = lean_box(0);
v___x_1406_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(v_ws_1389_, v_head_1404_, v___x_1405_);
return v___x_1406_;
}
else
{
lean_object* v_tail_1407_; 
v_tail_1407_ = lean_ctor_get(v_tail_1403_, 1);
if (lean_obj_tag(v_tail_1407_) == 0)
{
lean_object* v_head_1408_; lean_object* v_head_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
lean_dec_ref(v_spec_1390_);
v_head_1408_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_head_1408_);
lean_dec_ref_known(v___x_1402_, 2);
v_head_1409_ = lean_ctor_get(v_tail_1403_, 0);
lean_inc(v_head_1409_);
lean_dec_ref_known(v_tail_1403_, 2);
v___x_1410_ = l_String_toName(v_head_1409_);
v___x_1411_ = l___private_Lake_CLI_Build_0__Lake_resolveTargetBaseSpec(v_ws_1389_, v_head_1408_, v___x_1410_);
return v___x_1411_;
}
else
{
lean_dec_ref_known(v_tail_1403_, 2);
lean_dec_ref_known(v___x_1402_, 2);
goto v___jp_1392_;
}
}
}
else
{
lean_dec(v___x_1402_);
goto v___jp_1392_;
}
v___jp_1392_:
{
uint32_t v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1393_ = 58;
v___x_1394_ = lean_alloc_ctor(19, 1, 4);
lean_ctor_set(v___x_1394_, 0, v_spec_1390_);
lean_ctor_set_uint32(v___x_1394_, sizeof(void*)*1, v___x_1393_);
v___x_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
return v___x_1395_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpec___boxed(lean_object* v_ws_1412_, lean_object* v_spec_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lake_parseTargetSpec(v_ws_1412_, v_spec_1413_);
lean_dec_ref(v_ws_1412_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1(lean_object* v_spec_1416_, lean_object* v___x_1417_, lean_object* v___x_1418_, lean_object* v_inst_1419_, lean_object* v_R_1420_, lean_object* v_a_1421_, lean_object* v_b_1422_){
_start:
{
lean_object* v___x_1423_; 
v___x_1423_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___redArg(v_spec_1416_, v___x_1417_, v___x_1418_, v_a_1421_, v_b_1422_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1___boxed(lean_object* v_spec_1424_, lean_object* v___x_1425_, lean_object* v___x_1426_, lean_object* v_inst_1427_, lean_object* v_R_1428_, lean_object* v_a_1429_, lean_object* v_b_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_parseTargetSpec_spec__1(v_spec_1424_, v___x_1425_, v___x_1426_, v_inst_1427_, v_R_1428_, v_a_1429_, v_b_1430_);
lean_dec_ref(v___x_1425_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(lean_object* v_ws_1432_, lean_object* v_as_x27_1433_, lean_object* v_b_1434_){
_start:
{
if (lean_obj_tag(v_as_x27_1433_) == 0)
{
lean_object* v___x_1436_; 
v___x_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1436_, 0, v_b_1434_);
return v___x_1436_;
}
else
{
lean_object* v_head_1437_; lean_object* v_tail_1438_; lean_object* v___x_1439_; 
v_head_1437_ = lean_ctor_get(v_as_x27_1433_, 0);
v_tail_1438_ = lean_ctor_get(v_as_x27_1433_, 1);
lean_inc(v_head_1437_);
v___x_1439_ = l_Lake_parseTargetSpec(v_ws_1432_, v_head_1437_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; lean_object* v___x_1441_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1439_, 1);
v___x_1441_ = l_Array_append___redArg(v_b_1434_, v_a_1440_);
lean_dec(v_a_1440_);
v_as_x27_1433_ = v_tail_1438_;
v_b_1434_ = v___x_1441_;
goto _start;
}
else
{
lean_dec_ref(v_b_1434_);
return v___x_1439_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg___boxed(lean_object* v_ws_1443_, lean_object* v_as_x27_1444_, lean_object* v_b_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(v_ws_1443_, v_as_x27_1444_, v_b_1445_);
lean_dec(v_as_x27_1444_);
lean_dec_ref(v_ws_1443_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs(lean_object* v_ws_1450_, lean_object* v_specs_1451_){
_start:
{
lean_object* v___x_1453_; lean_object* v_results_1454_; lean_object* v___x_1455_; 
v___x_1453_ = lean_unsigned_to_nat(0u);
v_results_1454_ = ((lean_object*)(l_Lake_parseTargetSpecs___closed__0));
v___x_1455_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(v_ws_1450_, v_specs_1451_, v_results_1454_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; lean_object* v___x_1457_; uint8_t v___x_1458_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1456_);
v___x_1457_ = lean_array_get_size(v_a_1456_);
lean_dec(v_a_1456_);
v___x_1458_ = lean_nat_dec_eq(v___x_1457_, v___x_1453_);
if (v___x_1458_ == 0)
{
return v___x_1455_;
}
else
{
lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1473_; 
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1473_ == 0)
{
lean_object* v_unused_1474_; 
v_unused_1474_ = lean_ctor_get(v___x_1455_, 0);
lean_dec(v_unused_1474_);
v___x_1460_ = v___x_1455_;
v_isShared_1461_ = v_isSharedCheck_1473_;
goto v_resetjp_1459_;
}
else
{
lean_dec(v___x_1455_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1473_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v_packages_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v_packages_1462_ = lean_ctor_get(v_ws_1450_, 4);
v___x_1463_ = lean_array_fget_borrowed(v_packages_1462_, v___x_1453_);
lean_inc(v___x_1463_);
v___x_1464_ = l___private_Lake_CLI_Build_0__Lake_resolveDefaultPackageTarget(v_ws_1450_, v___x_1463_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; lean_object* v___x_1467_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
if (v_isShared_1461_ == 0)
{
lean_ctor_set_tag(v___x_1460_, 1);
lean_ctor_set(v___x_1460_, 0, v_a_1465_);
v___x_1467_ = v___x_1460_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; 
v_a_1469_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1469_);
lean_dec_ref_known(v___x_1464_, 1);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v_a_1469_);
v___x_1471_ = v___x_1460_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1469_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
}
}
else
{
return v___x_1455_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_parseTargetSpecs___boxed(lean_object* v_ws_1475_, lean_object* v_specs_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lake_parseTargetSpecs(v_ws_1475_, v_specs_1476_);
lean_dec(v_specs_1476_);
lean_dec_ref(v_ws_1475_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0(lean_object* v_ws_1479_, lean_object* v_as_1480_, lean_object* v_as_x27_1481_, lean_object* v_b_1482_, lean_object* v_a_1483_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___redArg(v_ws_1479_, v_as_x27_1481_, v_b_1482_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0___boxed(lean_object* v_ws_1486_, lean_object* v_as_1487_, lean_object* v_as_x27_1488_, lean_object* v_b_1489_, lean_object* v_a_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_List_forIn_x27_loop___at___00Lake_parseTargetSpecs_spec__0(v_ws_1486_, v_as_1487_, v_as_x27_1488_, v_b_1489_, v_a_1490_);
lean_dec(v_as_x27_1488_);
lean_dec(v_as_1487_);
lean_dec_ref(v_ws_1486_);
return v_res_1492_;
}
}
lean_object* runtime_initialize_Lake_CLI_Error(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_Build(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_CLI_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_Build(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_CLI_Error(uint8_t builtin);
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_Build(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_CLI_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Build(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_Build(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_Build(builtin);
}
#ifdef __cplusplus
}
#endif
