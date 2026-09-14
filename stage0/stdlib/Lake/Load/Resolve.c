// Lean compiler output
// Module: Lake.Load.Resolve
// Imports: public import Lake.Config.Workspace public import Lake.Load.Manifest import Lake.Util.IO import Lake.Util.StoreInsts import Lake.Config.Monad import Lake.Load.Materialize import Lake.Load.Lean.Eval import Lake.Load.Package import Init.Data.Vector.Lemmas import Init.Data.Range.Polymorphic.Iterators import Init.Data.Range.Polymorphic.Lemmas import Init.TacticsExtra import Lean.Runtime
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lake_resolveConfigFile(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_loadConfigFile___redArg(lean_object*, lean_object*);
lean_object* l_Lake_mkPackage(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_FacetConfigMap_insert(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lake_defaultManifestFile;
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_Dependency_materialize(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lake_PackageEntry_materialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Manifest_load(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_NameMap_isEmpty___redArg(lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_defaultLakeDir;
lean_object* l_Lake_Manifest_tryLoadEntries(lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lake_toolchainFileName;
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Env_noToolchainVars(lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_io_exit(uint8_t);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_ToolchainVer_ofFile_x3f(lean_object*);
uint8_t l_Lake_instDecidableEqToolchainVer_decEq(lean_object*, lean_object*);
uint8_t l_Lake_MaterializedDep_fixedToolchain(lean_object*);
uint8_t l_Lake_ToolchainVer_blt(lean_object*, lean_object*);
uint8_t l_Lake_ToolchainVer_ble(lean_object*, lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* lean_io_rename(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_isEmpty(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lake_Manifest_save(lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = ": package requires itself (or a package with the same name)"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "unknown package `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "could not rename workspace packages directory: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "workspace packages directory changed; renaming '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "' to '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3_value;
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = ": no previous manifest, creating one from scratch"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = ": ignoring previous manifest because it failed to load: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = ": ignoring missing manifest:\n  "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = ": ignoring manifest because it failed to load: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l___private_Lake_Load_Resolve_0__Lake_restartCode;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\n    from "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\n  "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " (fixed toolchain)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "toolchain not updated; multiple toolchain candidates:\n  "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "restarting Lake via Elan"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "run"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "--install"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "no Elan detected; you will need to manually restart Lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "cannot auto-restart; you will need to manually restart Lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "updating toolchain to '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "toolchain not updated; already up-to-date"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "toolchain not updated; no toolchain information found"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "toolchain not updated; multiple toolchain candidates:"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19_value;
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__5___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1___closed__0 = (const lean_object*)&l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1(lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": updating '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "' with "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = ": running post-update hooks"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "manifest out of date: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " of dependency '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "' changed; use `lake update "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "` to update it"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "git revision"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "source kind (git/path)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "git url"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dependency '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "' of '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 169, .m_capacity = 169, .m_length = 168, .m_data = "' not in manifest; this suggests that the manifest is corrupt; use `lake update` to generate a new, complete file (warning: this will update ALL workspace dependencies)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "' not in manifest; use `lake update "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` to add it"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "missing manifest; use `lake update` to generate one"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__0 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__0_value;
static const lean_ctor_object l_Lake_Workspace_materializeDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_materializeDeps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__1 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__1_value;
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "package-overrides.json"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__2 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__2_value;
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 147, .m_capacity = 147, .m_length = 146, .m_data = "manifest out of date: packages directory changed; use `lake update` to rebuild the manifest (warning: this will update ALL workspace dependencies)"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__3 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__3_value;
static const lean_ctor_object l_Lake_Workspace_materializeDeps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_materializeDeps___closed__3_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__4 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(lean_object* v_ws_3_, lean_object* v_dep_4_, lean_object* v_lakeOpts_5_, lean_object* v_leanOpts_6_, uint8_t v_reconfigure_7_){
_start:
{
lean_object* v_lakeEnv_8_; lean_object* v_packages_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v_manifestEntry_12_; lean_object* v_dir_13_; lean_object* v_pkgDir_14_; lean_object* v_relPkgDir_15_; lean_object* v_remoteUrl_16_; lean_object* v_name_17_; lean_object* v_scope_18_; lean_object* v_configFile_19_; lean_object* v_manifestFile_x3f_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___y_25_; 
v_lakeEnv_8_ = lean_ctor_get(v_ws_3_, 0);
v_packages_9_ = lean_ctor_get(v_ws_3_, 4);
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_array_fget_borrowed(v_packages_9_, v___x_10_);
v_manifestEntry_12_ = lean_ctor_get(v_dep_4_, 4);
lean_inc_ref(v_manifestEntry_12_);
v_dir_13_ = lean_ctor_get(v___x_11_, 4);
v_pkgDir_14_ = lean_ctor_get(v_dep_4_, 0);
lean_inc_ref_n(v_pkgDir_14_, 2);
v_relPkgDir_15_ = lean_ctor_get(v_dep_4_, 1);
lean_inc_ref(v_relPkgDir_15_);
v_remoteUrl_16_ = lean_ctor_get(v_dep_4_, 2);
lean_inc_ref(v_remoteUrl_16_);
lean_dec_ref(v_dep_4_);
v_name_17_ = lean_ctor_get(v_manifestEntry_12_, 0);
lean_inc(v_name_17_);
v_scope_18_ = lean_ctor_get(v_manifestEntry_12_, 1);
lean_inc_ref(v_scope_18_);
v_configFile_19_ = lean_ctor_get(v_manifestEntry_12_, 2);
lean_inc_ref_n(v_configFile_19_, 2);
v_manifestFile_x3f_20_ = lean_ctor_get(v_manifestEntry_12_, 3);
lean_inc(v_manifestFile_x3f_20_);
lean_dec_ref(v_manifestEntry_12_);
v___x_21_ = lean_box(0);
v___x_22_ = lean_array_get_size(v_packages_9_);
v___x_23_ = l_Lake_joinRelative(v_pkgDir_14_, v_configFile_19_);
if (lean_obj_tag(v_manifestFile_x3f_20_) == 0)
{
lean_object* v___x_30_; 
v___x_30_ = l_Lake_defaultManifestFile;
v___y_25_ = v___x_30_;
goto v___jp_24_;
}
else
{
lean_object* v_val_31_; 
v_val_31_ = lean_ctor_get(v_manifestFile_x3f_20_, 0);
lean_inc(v_val_31_);
lean_dec_ref_known(v_manifestFile_x3f_20_, 1);
v___y_25_ = v_val_31_;
goto v___jp_24_;
}
v___jp_24_:
{
lean_object* v___x_26_; uint8_t v___x_27_; uint8_t v___x_28_; lean_object* v___x_29_; 
v___x_26_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_27_ = 0;
v___x_28_ = 1;
lean_inc_ref(v_dir_13_);
lean_inc_ref(v_lakeEnv_8_);
v___x_29_ = lean_alloc_ctor(0, 16, 3);
lean_ctor_set(v___x_29_, 0, v_lakeEnv_8_);
lean_ctor_set(v___x_29_, 1, v___x_21_);
lean_ctor_set(v___x_29_, 2, v_dir_13_);
lean_ctor_set(v___x_29_, 3, v___x_22_);
lean_ctor_set(v___x_29_, 4, v_name_17_);
lean_ctor_set(v___x_29_, 5, v_relPkgDir_15_);
lean_ctor_set(v___x_29_, 6, v_pkgDir_14_);
lean_ctor_set(v___x_29_, 7, v_configFile_19_);
lean_ctor_set(v___x_29_, 8, v___x_23_);
lean_ctor_set(v___x_29_, 9, v___x_21_);
lean_ctor_set(v___x_29_, 10, v___y_25_);
lean_ctor_set(v___x_29_, 11, v___x_26_);
lean_ctor_set(v___x_29_, 12, v_lakeOpts_5_);
lean_ctor_set(v___x_29_, 13, v_leanOpts_6_);
lean_ctor_set(v___x_29_, 14, v_scope_18_);
lean_ctor_set(v___x_29_, 15, v_remoteUrl_16_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16, v_reconfigure_7_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16 + 1, v___x_27_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16 + 2, v___x_28_);
return v___x_29_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___boxed(lean_object* v_ws_32_, lean_object* v_dep_33_, lean_object* v_lakeOpts_34_, lean_object* v_leanOpts_35_, lean_object* v_reconfigure_36_){
_start:
{
uint8_t v_reconfigure_boxed_37_; lean_object* v_res_38_; 
v_reconfigure_boxed_37_ = lean_unbox(v_reconfigure_36_);
v_res_38_ = l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(v_ws_32_, v_dep_33_, v_lakeOpts_34_, v_leanOpts_35_, v_reconfigure_boxed_37_);
lean_dec_ref(v_ws_32_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(lean_object* v_as_39_, size_t v_i_40_, size_t v_stop_41_, lean_object* v_b_42_){
_start:
{
uint8_t v___x_43_; 
v___x_43_ = lean_usize_dec_eq(v_i_40_, v_stop_41_);
if (v___x_43_ == 0)
{
lean_object* v___x_44_; lean_object* v_name_45_; lean_object* v_config_46_; lean_object* v_lakeEnv_47_; lean_object* v_lakeConfig_48_; lean_object* v_lakeCache_49_; lean_object* v_lakeArgs_x3f_50_; lean_object* v_packages_51_; lean_object* v_packageMap_52_; lean_object* v_facetConfigs_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_64_; 
v___x_44_ = lean_array_uget_borrowed(v_as_39_, v_i_40_);
v_name_45_ = lean_ctor_get(v___x_44_, 0);
v_config_46_ = lean_ctor_get(v___x_44_, 1);
v_lakeEnv_47_ = lean_ctor_get(v_b_42_, 0);
v_lakeConfig_48_ = lean_ctor_get(v_b_42_, 1);
v_lakeCache_49_ = lean_ctor_get(v_b_42_, 2);
v_lakeArgs_x3f_50_ = lean_ctor_get(v_b_42_, 3);
v_packages_51_ = lean_ctor_get(v_b_42_, 4);
v_packageMap_52_ = lean_ctor_get(v_b_42_, 5);
v_facetConfigs_53_ = lean_ctor_get(v_b_42_, 6);
v_isSharedCheck_64_ = !lean_is_exclusive(v_b_42_);
if (v_isSharedCheck_64_ == 0)
{
v___x_55_ = v_b_42_;
v_isShared_56_ = v_isSharedCheck_64_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_facetConfigs_53_);
lean_inc(v_packageMap_52_);
lean_inc(v_packages_51_);
lean_inc(v_lakeArgs_x3f_50_);
lean_inc(v_lakeCache_49_);
lean_inc(v_lakeConfig_48_);
lean_inc(v_lakeEnv_47_);
lean_dec(v_b_42_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_64_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_59_; 
lean_inc(v_config_46_);
lean_inc(v_name_45_);
v___x_57_ = l_Lake_FacetConfigMap_insert(v_name_45_, v_config_46_, v_facetConfigs_53_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 6, v___x_57_);
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_lakeEnv_47_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_lakeConfig_48_);
lean_ctor_set(v_reuseFailAlloc_63_, 2, v_lakeCache_49_);
lean_ctor_set(v_reuseFailAlloc_63_, 3, v_lakeArgs_x3f_50_);
lean_ctor_set(v_reuseFailAlloc_63_, 4, v_packages_51_);
lean_ctor_set(v_reuseFailAlloc_63_, 5, v_packageMap_52_);
lean_ctor_set(v_reuseFailAlloc_63_, 6, v___x_57_);
v___x_59_ = v_reuseFailAlloc_63_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
size_t v___x_60_; size_t v___x_61_; 
v___x_60_ = ((size_t)1ULL);
v___x_61_ = lean_usize_add(v_i_40_, v___x_60_);
v_i_40_ = v___x_61_;
v_b_42_ = v___x_59_;
goto _start;
}
}
}
else
{
return v_b_42_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0___boxed(lean_object* v_as_65_, lean_object* v_i_66_, lean_object* v_stop_67_, lean_object* v_b_68_){
_start:
{
size_t v_i_boxed_69_; size_t v_stop_boxed_70_; lean_object* v_res_71_; 
v_i_boxed_69_ = lean_unbox_usize(v_i_66_);
lean_dec(v_i_66_);
v_stop_boxed_70_ = lean_unbox_usize(v_stop_67_);
lean_dec(v_stop_67_);
v_res_71_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_as_65_, v_i_boxed_69_, v_stop_boxed_70_, v_b_68_);
lean_dec_ref(v_as_65_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(lean_object* v_decls_72_, lean_object* v_self_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = lean_array_get_size(v_decls_72_);
v___x_76_ = lean_nat_dec_lt(v___x_74_, v___x_75_);
if (v___x_76_ == 0)
{
return v_self_73_;
}
else
{
uint8_t v___x_77_; 
v___x_77_ = lean_nat_dec_le(v___x_75_, v___x_75_);
if (v___x_77_ == 0)
{
if (v___x_76_ == 0)
{
return v_self_73_;
}
else
{
size_t v___x_78_; size_t v___x_79_; lean_object* v___x_80_; 
v___x_78_ = ((size_t)0ULL);
v___x_79_ = lean_usize_of_nat(v___x_75_);
v___x_80_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_decls_72_, v___x_78_, v___x_79_, v_self_73_);
return v___x_80_;
}
}
else
{
size_t v___x_81_; size_t v___x_82_; lean_object* v___x_83_; 
v___x_81_ = ((size_t)0ULL);
v___x_82_ = lean_usize_of_nat(v___x_75_);
v___x_83_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_decls_72_, v___x_81_, v___x_82_, v_self_73_);
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls___boxed(lean_object* v_decls_84_, lean_object* v_self_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(v_decls_84_, v_self_85_);
lean_dec_ref(v_decls_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(lean_object* v_k_87_, lean_object* v_v_88_, lean_object* v_t_89_){
_start:
{
if (lean_obj_tag(v_t_89_) == 0)
{
lean_object* v_size_90_; lean_object* v_k_91_; lean_object* v_v_92_; lean_object* v_l_93_; lean_object* v_r_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_374_; 
v_size_90_ = lean_ctor_get(v_t_89_, 0);
v_k_91_ = lean_ctor_get(v_t_89_, 1);
v_v_92_ = lean_ctor_get(v_t_89_, 2);
v_l_93_ = lean_ctor_get(v_t_89_, 3);
v_r_94_ = lean_ctor_get(v_t_89_, 4);
v_isSharedCheck_374_ = !lean_is_exclusive(v_t_89_);
if (v_isSharedCheck_374_ == 0)
{
v___x_96_ = v_t_89_;
v_isShared_97_ = v_isSharedCheck_374_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_r_94_);
lean_inc(v_l_93_);
lean_inc(v_v_92_);
lean_inc(v_k_91_);
lean_inc(v_size_90_);
lean_dec(v_t_89_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_374_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
uint8_t v___x_98_; 
v___x_98_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_87_, v_k_91_);
switch(v___x_98_)
{
case 0:
{
lean_object* v_impl_99_; lean_object* v___x_100_; 
lean_dec(v_size_90_);
v_impl_99_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_87_, v_v_88_, v_l_93_);
v___x_100_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_94_) == 0)
{
lean_object* v_size_101_; lean_object* v_size_102_; lean_object* v_k_103_; lean_object* v_v_104_; lean_object* v_l_105_; lean_object* v_r_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v_size_101_ = lean_ctor_get(v_r_94_, 0);
v_size_102_ = lean_ctor_get(v_impl_99_, 0);
lean_inc(v_size_102_);
v_k_103_ = lean_ctor_get(v_impl_99_, 1);
lean_inc(v_k_103_);
v_v_104_ = lean_ctor_get(v_impl_99_, 2);
lean_inc(v_v_104_);
v_l_105_ = lean_ctor_get(v_impl_99_, 3);
lean_inc(v_l_105_);
v_r_106_ = lean_ctor_get(v_impl_99_, 4);
lean_inc(v_r_106_);
v___x_107_ = lean_unsigned_to_nat(3u);
v___x_108_ = lean_nat_mul(v___x_107_, v_size_101_);
v___x_109_ = lean_nat_dec_lt(v___x_108_, v_size_102_);
lean_dec(v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_113_; 
lean_dec(v_r_106_);
lean_dec(v_l_105_);
lean_dec(v_v_104_);
lean_dec(v_k_103_);
v___x_110_ = lean_nat_add(v___x_100_, v_size_102_);
lean_dec(v_size_102_);
v___x_111_ = lean_nat_add(v___x_110_, v_size_101_);
lean_dec(v___x_110_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 3, v_impl_99_);
lean_ctor_set(v___x_96_, 0, v___x_111_);
v___x_113_ = v___x_96_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_111_);
lean_ctor_set(v_reuseFailAlloc_114_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_114_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_114_, 3, v_impl_99_);
lean_ctor_set(v_reuseFailAlloc_114_, 4, v_r_94_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
else
{
lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_180_; 
v_isSharedCheck_180_ = !lean_is_exclusive(v_impl_99_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; lean_object* v_unused_182_; lean_object* v_unused_183_; lean_object* v_unused_184_; lean_object* v_unused_185_; 
v_unused_181_ = lean_ctor_get(v_impl_99_, 4);
lean_dec(v_unused_181_);
v_unused_182_ = lean_ctor_get(v_impl_99_, 3);
lean_dec(v_unused_182_);
v_unused_183_ = lean_ctor_get(v_impl_99_, 2);
lean_dec(v_unused_183_);
v_unused_184_ = lean_ctor_get(v_impl_99_, 1);
lean_dec(v_unused_184_);
v_unused_185_ = lean_ctor_get(v_impl_99_, 0);
lean_dec(v_unused_185_);
v___x_116_ = v_impl_99_;
v_isShared_117_ = v_isSharedCheck_180_;
goto v_resetjp_115_;
}
else
{
lean_dec(v_impl_99_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_180_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v_size_118_; lean_object* v_size_119_; lean_object* v_k_120_; lean_object* v_v_121_; lean_object* v_l_122_; lean_object* v_r_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v_size_118_ = lean_ctor_get(v_l_105_, 0);
v_size_119_ = lean_ctor_get(v_r_106_, 0);
v_k_120_ = lean_ctor_get(v_r_106_, 1);
v_v_121_ = lean_ctor_get(v_r_106_, 2);
v_l_122_ = lean_ctor_get(v_r_106_, 3);
v_r_123_ = lean_ctor_get(v_r_106_, 4);
v___x_124_ = lean_unsigned_to_nat(2u);
v___x_125_ = lean_nat_mul(v___x_124_, v_size_118_);
v___x_126_ = lean_nat_dec_lt(v_size_119_, v___x_125_);
lean_dec(v___x_125_);
if (v___x_126_ == 0)
{
lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_155_; 
lean_inc(v_r_123_);
lean_inc(v_l_122_);
lean_inc(v_v_121_);
lean_inc(v_k_120_);
v_isSharedCheck_155_ = !lean_is_exclusive(v_r_106_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; lean_object* v_unused_157_; lean_object* v_unused_158_; lean_object* v_unused_159_; lean_object* v_unused_160_; 
v_unused_156_ = lean_ctor_get(v_r_106_, 4);
lean_dec(v_unused_156_);
v_unused_157_ = lean_ctor_get(v_r_106_, 3);
lean_dec(v_unused_157_);
v_unused_158_ = lean_ctor_get(v_r_106_, 2);
lean_dec(v_unused_158_);
v_unused_159_ = lean_ctor_get(v_r_106_, 1);
lean_dec(v_unused_159_);
v_unused_160_ = lean_ctor_get(v_r_106_, 0);
lean_dec(v_unused_160_);
v___x_128_ = v_r_106_;
v_isShared_129_ = v_isSharedCheck_155_;
goto v_resetjp_127_;
}
else
{
lean_dec(v_r_106_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_155_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___y_133_; lean_object* v___y_134_; lean_object* v___y_135_; lean_object* v___x_143_; lean_object* v___y_145_; 
v___x_130_ = lean_nat_add(v___x_100_, v_size_102_);
lean_dec(v_size_102_);
v___x_131_ = lean_nat_add(v___x_130_, v_size_101_);
lean_dec(v___x_130_);
v___x_143_ = lean_nat_add(v___x_100_, v_size_118_);
if (lean_obj_tag(v_l_122_) == 0)
{
lean_object* v_size_153_; 
v_size_153_ = lean_ctor_get(v_l_122_, 0);
lean_inc(v_size_153_);
v___y_145_ = v_size_153_;
goto v___jp_144_;
}
else
{
lean_object* v___x_154_; 
v___x_154_ = lean_unsigned_to_nat(0u);
v___y_145_ = v___x_154_;
goto v___jp_144_;
}
v___jp_132_:
{
lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_136_ = lean_nat_add(v___y_133_, v___y_135_);
lean_dec(v___y_135_);
lean_dec(v___y_133_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 4, v_r_94_);
lean_ctor_set(v___x_128_, 3, v_r_123_);
lean_ctor_set(v___x_128_, 2, v_v_92_);
lean_ctor_set(v___x_128_, 1, v_k_91_);
lean_ctor_set(v___x_128_, 0, v___x_136_);
v___x_138_ = v___x_128_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_136_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_142_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_142_, 3, v_r_123_);
lean_ctor_set(v_reuseFailAlloc_142_, 4, v_r_94_);
v___x_138_ = v_reuseFailAlloc_142_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_140_; 
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 4, v___x_138_);
lean_ctor_set(v___x_116_, 3, v___y_134_);
lean_ctor_set(v___x_116_, 2, v_v_121_);
lean_ctor_set(v___x_116_, 1, v_k_120_);
lean_ctor_set(v___x_116_, 0, v___x_131_);
v___x_140_ = v___x_116_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_131_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v_k_120_);
lean_ctor_set(v_reuseFailAlloc_141_, 2, v_v_121_);
lean_ctor_set(v_reuseFailAlloc_141_, 3, v___y_134_);
lean_ctor_set(v_reuseFailAlloc_141_, 4, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
v___jp_144_:
{
lean_object* v___x_146_; lean_object* v___x_148_; 
v___x_146_ = lean_nat_add(v___x_143_, v___y_145_);
lean_dec(v___y_145_);
lean_dec(v___x_143_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_l_122_);
lean_ctor_set(v___x_96_, 3, v_l_105_);
lean_ctor_set(v___x_96_, 2, v_v_104_);
lean_ctor_set(v___x_96_, 1, v_k_103_);
lean_ctor_set(v___x_96_, 0, v___x_146_);
v___x_148_ = v___x_96_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v___x_146_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_k_103_);
lean_ctor_set(v_reuseFailAlloc_152_, 2, v_v_104_);
lean_ctor_set(v_reuseFailAlloc_152_, 3, v_l_105_);
lean_ctor_set(v_reuseFailAlloc_152_, 4, v_l_122_);
v___x_148_ = v_reuseFailAlloc_152_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; 
v___x_149_ = lean_nat_add(v___x_100_, v_size_101_);
if (lean_obj_tag(v_r_123_) == 0)
{
lean_object* v_size_150_; 
v_size_150_ = lean_ctor_get(v_r_123_, 0);
lean_inc(v_size_150_);
v___y_133_ = v___x_149_;
v___y_134_ = v___x_148_;
v___y_135_ = v_size_150_;
goto v___jp_132_;
}
else
{
lean_object* v___x_151_; 
v___x_151_ = lean_unsigned_to_nat(0u);
v___y_133_ = v___x_149_;
v___y_134_ = v___x_148_;
v___y_135_ = v___x_151_;
goto v___jp_132_;
}
}
}
}
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_166_; 
lean_del_object(v___x_96_);
v___x_161_ = lean_nat_add(v___x_100_, v_size_102_);
lean_dec(v_size_102_);
v___x_162_ = lean_nat_add(v___x_161_, v_size_101_);
lean_dec(v___x_161_);
v___x_163_ = lean_nat_add(v___x_100_, v_size_101_);
v___x_164_ = lean_nat_add(v___x_163_, v_size_119_);
lean_dec(v___x_163_);
lean_inc_ref(v_r_94_);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 4, v_r_94_);
lean_ctor_set(v___x_116_, 3, v_r_106_);
lean_ctor_set(v___x_116_, 2, v_v_92_);
lean_ctor_set(v___x_116_, 1, v_k_91_);
lean_ctor_set(v___x_116_, 0, v___x_164_);
v___x_166_ = v___x_116_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_179_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_179_, 3, v_r_106_);
lean_ctor_set(v_reuseFailAlloc_179_, 4, v_r_94_);
v___x_166_ = v_reuseFailAlloc_179_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_173_; 
v_isSharedCheck_173_ = !lean_is_exclusive(v_r_94_);
if (v_isSharedCheck_173_ == 0)
{
lean_object* v_unused_174_; lean_object* v_unused_175_; lean_object* v_unused_176_; lean_object* v_unused_177_; lean_object* v_unused_178_; 
v_unused_174_ = lean_ctor_get(v_r_94_, 4);
lean_dec(v_unused_174_);
v_unused_175_ = lean_ctor_get(v_r_94_, 3);
lean_dec(v_unused_175_);
v_unused_176_ = lean_ctor_get(v_r_94_, 2);
lean_dec(v_unused_176_);
v_unused_177_ = lean_ctor_get(v_r_94_, 1);
lean_dec(v_unused_177_);
v_unused_178_ = lean_ctor_get(v_r_94_, 0);
lean_dec(v_unused_178_);
v___x_168_ = v_r_94_;
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
else
{
lean_dec(v_r_94_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_171_; 
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 4, v___x_166_);
lean_ctor_set(v___x_168_, 3, v_l_105_);
lean_ctor_set(v___x_168_, 2, v_v_104_);
lean_ctor_set(v___x_168_, 1, v_k_103_);
lean_ctor_set(v___x_168_, 0, v___x_162_);
v___x_171_ = v___x_168_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v_k_103_);
lean_ctor_set(v_reuseFailAlloc_172_, 2, v_v_104_);
lean_ctor_set(v_reuseFailAlloc_172_, 3, v_l_105_);
lean_ctor_set(v_reuseFailAlloc_172_, 4, v___x_166_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_186_; 
v_l_186_ = lean_ctor_get(v_impl_99_, 3);
lean_inc(v_l_186_);
if (lean_obj_tag(v_l_186_) == 0)
{
lean_object* v_r_187_; lean_object* v_k_188_; lean_object* v_v_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_200_; 
v_r_187_ = lean_ctor_get(v_impl_99_, 4);
v_k_188_ = lean_ctor_get(v_impl_99_, 1);
v_v_189_ = lean_ctor_get(v_impl_99_, 2);
v_isSharedCheck_200_ = !lean_is_exclusive(v_impl_99_);
if (v_isSharedCheck_200_ == 0)
{
lean_object* v_unused_201_; lean_object* v_unused_202_; 
v_unused_201_ = lean_ctor_get(v_impl_99_, 3);
lean_dec(v_unused_201_);
v_unused_202_ = lean_ctor_get(v_impl_99_, 0);
lean_dec(v_unused_202_);
v___x_191_ = v_impl_99_;
v_isShared_192_ = v_isSharedCheck_200_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_r_187_);
lean_inc(v_v_189_);
lean_inc(v_k_188_);
lean_dec(v_impl_99_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_200_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; lean_object* v___x_195_; 
v___x_193_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_187_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 3, v_r_187_);
lean_ctor_set(v___x_191_, 2, v_v_92_);
lean_ctor_set(v___x_191_, 1, v_k_91_);
lean_ctor_set(v___x_191_, 0, v___x_100_);
v___x_195_ = v___x_191_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_199_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_199_, 3, v_r_187_);
lean_ctor_set(v_reuseFailAlloc_199_, 4, v_r_187_);
v___x_195_ = v_reuseFailAlloc_199_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_197_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v___x_195_);
lean_ctor_set(v___x_96_, 3, v_l_186_);
lean_ctor_set(v___x_96_, 2, v_v_189_);
lean_ctor_set(v___x_96_, 1, v_k_188_);
lean_ctor_set(v___x_96_, 0, v___x_193_);
v___x_197_ = v___x_96_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v_k_188_);
lean_ctor_set(v_reuseFailAlloc_198_, 2, v_v_189_);
lean_ctor_set(v_reuseFailAlloc_198_, 3, v_l_186_);
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
else
{
lean_object* v_r_203_; 
v_r_203_ = lean_ctor_get(v_impl_99_, 4);
lean_inc(v_r_203_);
if (lean_obj_tag(v_r_203_) == 0)
{
lean_object* v_k_204_; lean_object* v_v_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_228_; 
v_k_204_ = lean_ctor_get(v_impl_99_, 1);
v_v_205_ = lean_ctor_get(v_impl_99_, 2);
v_isSharedCheck_228_ = !lean_is_exclusive(v_impl_99_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; lean_object* v_unused_230_; lean_object* v_unused_231_; 
v_unused_229_ = lean_ctor_get(v_impl_99_, 4);
lean_dec(v_unused_229_);
v_unused_230_ = lean_ctor_get(v_impl_99_, 3);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v_impl_99_, 0);
lean_dec(v_unused_231_);
v___x_207_ = v_impl_99_;
v_isShared_208_ = v_isSharedCheck_228_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_v_205_);
lean_inc(v_k_204_);
lean_dec(v_impl_99_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_228_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v_k_209_; lean_object* v_v_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_224_; 
v_k_209_ = lean_ctor_get(v_r_203_, 1);
v_v_210_ = lean_ctor_get(v_r_203_, 2);
v_isSharedCheck_224_ = !lean_is_exclusive(v_r_203_);
if (v_isSharedCheck_224_ == 0)
{
lean_object* v_unused_225_; lean_object* v_unused_226_; lean_object* v_unused_227_; 
v_unused_225_ = lean_ctor_get(v_r_203_, 4);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_r_203_, 3);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_r_203_, 0);
lean_dec(v_unused_227_);
v___x_212_ = v_r_203_;
v_isShared_213_ = v_isSharedCheck_224_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_v_210_);
lean_inc(v_k_209_);
lean_dec(v_r_203_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_224_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_214_; lean_object* v___x_216_; 
v___x_214_ = lean_unsigned_to_nat(3u);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 4, v_l_186_);
lean_ctor_set(v___x_212_, 3, v_l_186_);
lean_ctor_set(v___x_212_, 2, v_v_205_);
lean_ctor_set(v___x_212_, 1, v_k_204_);
lean_ctor_set(v___x_212_, 0, v___x_100_);
v___x_216_ = v___x_212_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v_k_204_);
lean_ctor_set(v_reuseFailAlloc_223_, 2, v_v_205_);
lean_ctor_set(v_reuseFailAlloc_223_, 3, v_l_186_);
lean_ctor_set(v_reuseFailAlloc_223_, 4, v_l_186_);
v___x_216_ = v_reuseFailAlloc_223_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
lean_object* v___x_218_; 
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 4, v_l_186_);
lean_ctor_set(v___x_207_, 2, v_v_92_);
lean_ctor_set(v___x_207_, 1, v_k_91_);
lean_ctor_set(v___x_207_, 0, v___x_100_);
v___x_218_ = v___x_207_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_222_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_222_, 3, v_l_186_);
lean_ctor_set(v_reuseFailAlloc_222_, 4, v_l_186_);
v___x_218_ = v_reuseFailAlloc_222_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
lean_object* v___x_220_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v___x_218_);
lean_ctor_set(v___x_96_, 3, v___x_216_);
lean_ctor_set(v___x_96_, 2, v_v_210_);
lean_ctor_set(v___x_96_, 1, v_k_209_);
lean_ctor_set(v___x_96_, 0, v___x_214_);
v___x_220_ = v___x_96_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_214_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v_k_209_);
lean_ctor_set(v_reuseFailAlloc_221_, 2, v_v_210_);
lean_ctor_set(v_reuseFailAlloc_221_, 3, v___x_216_);
lean_ctor_set(v_reuseFailAlloc_221_, 4, v___x_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
}
else
{
lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_232_ = lean_unsigned_to_nat(2u);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_r_203_);
lean_ctor_set(v___x_96_, 3, v_impl_99_);
lean_ctor_set(v___x_96_, 0, v___x_232_);
v___x_234_ = v___x_96_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_235_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_235_, 3, v_impl_99_);
lean_ctor_set(v_reuseFailAlloc_235_, 4, v_r_203_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
case 1:
{
lean_object* v___x_237_; 
lean_dec(v_v_92_);
lean_dec(v_k_91_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 2, v_v_88_);
lean_ctor_set(v___x_96_, 1, v_k_87_);
v___x_237_ = v___x_96_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_size_90_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_238_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_238_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_238_, 4, v_r_94_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
default: 
{
lean_object* v_impl_239_; lean_object* v___x_240_; 
lean_dec(v_size_90_);
v_impl_239_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_87_, v_v_88_, v_r_94_);
v___x_240_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_93_) == 0)
{
lean_object* v_size_241_; lean_object* v_size_242_; lean_object* v_k_243_; lean_object* v_v_244_; lean_object* v_l_245_; lean_object* v_r_246_; lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v_size_241_ = lean_ctor_get(v_l_93_, 0);
v_size_242_ = lean_ctor_get(v_impl_239_, 0);
lean_inc(v_size_242_);
v_k_243_ = lean_ctor_get(v_impl_239_, 1);
lean_inc(v_k_243_);
v_v_244_ = lean_ctor_get(v_impl_239_, 2);
lean_inc(v_v_244_);
v_l_245_ = lean_ctor_get(v_impl_239_, 3);
lean_inc(v_l_245_);
v_r_246_ = lean_ctor_get(v_impl_239_, 4);
lean_inc(v_r_246_);
v___x_247_ = lean_unsigned_to_nat(3u);
v___x_248_ = lean_nat_mul(v___x_247_, v_size_241_);
v___x_249_ = lean_nat_dec_lt(v___x_248_, v_size_242_);
lean_dec(v___x_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_253_; 
lean_dec(v_r_246_);
lean_dec(v_l_245_);
lean_dec(v_v_244_);
lean_dec(v_k_243_);
v___x_250_ = lean_nat_add(v___x_240_, v_size_241_);
v___x_251_ = lean_nat_add(v___x_250_, v_size_242_);
lean_dec(v_size_242_);
lean_dec(v___x_250_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_impl_239_);
lean_ctor_set(v___x_96_, 0, v___x_251_);
v___x_253_ = v___x_96_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_251_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_254_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_254_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_254_, 4, v_impl_239_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
else
{
lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_318_; 
v_isSharedCheck_318_ = !lean_is_exclusive(v_impl_239_);
if (v_isSharedCheck_318_ == 0)
{
lean_object* v_unused_319_; lean_object* v_unused_320_; lean_object* v_unused_321_; lean_object* v_unused_322_; lean_object* v_unused_323_; 
v_unused_319_ = lean_ctor_get(v_impl_239_, 4);
lean_dec(v_unused_319_);
v_unused_320_ = lean_ctor_get(v_impl_239_, 3);
lean_dec(v_unused_320_);
v_unused_321_ = lean_ctor_get(v_impl_239_, 2);
lean_dec(v_unused_321_);
v_unused_322_ = lean_ctor_get(v_impl_239_, 1);
lean_dec(v_unused_322_);
v_unused_323_ = lean_ctor_get(v_impl_239_, 0);
lean_dec(v_unused_323_);
v___x_256_ = v_impl_239_;
v_isShared_257_ = v_isSharedCheck_318_;
goto v_resetjp_255_;
}
else
{
lean_dec(v_impl_239_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_318_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_size_258_; lean_object* v_k_259_; lean_object* v_v_260_; lean_object* v_l_261_; lean_object* v_r_262_; lean_object* v_size_263_; lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v_size_258_ = lean_ctor_get(v_l_245_, 0);
v_k_259_ = lean_ctor_get(v_l_245_, 1);
v_v_260_ = lean_ctor_get(v_l_245_, 2);
v_l_261_ = lean_ctor_get(v_l_245_, 3);
v_r_262_ = lean_ctor_get(v_l_245_, 4);
v_size_263_ = lean_ctor_get(v_r_246_, 0);
v___x_264_ = lean_unsigned_to_nat(2u);
v___x_265_ = lean_nat_mul(v___x_264_, v_size_263_);
v___x_266_ = lean_nat_dec_lt(v_size_258_, v___x_265_);
lean_dec(v___x_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_294_; 
lean_inc(v_r_262_);
lean_inc(v_l_261_);
lean_inc(v_v_260_);
lean_inc(v_k_259_);
v_isSharedCheck_294_ = !lean_is_exclusive(v_l_245_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; lean_object* v_unused_296_; lean_object* v_unused_297_; lean_object* v_unused_298_; lean_object* v_unused_299_; 
v_unused_295_ = lean_ctor_get(v_l_245_, 4);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_l_245_, 3);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_l_245_, 2);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_l_245_, 1);
lean_dec(v_unused_298_);
v_unused_299_ = lean_ctor_get(v_l_245_, 0);
lean_dec(v_unused_299_);
v___x_268_ = v_l_245_;
v_isShared_269_ = v_isSharedCheck_294_;
goto v_resetjp_267_;
}
else
{
lean_dec(v_l_245_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_294_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___y_273_; lean_object* v___y_274_; lean_object* v___y_275_; lean_object* v___y_284_; 
v___x_270_ = lean_nat_add(v___x_240_, v_size_241_);
v___x_271_ = lean_nat_add(v___x_270_, v_size_242_);
lean_dec(v_size_242_);
if (lean_obj_tag(v_l_261_) == 0)
{
lean_object* v_size_292_; 
v_size_292_ = lean_ctor_get(v_l_261_, 0);
lean_inc(v_size_292_);
v___y_284_ = v_size_292_;
goto v___jp_283_;
}
else
{
lean_object* v___x_293_; 
v___x_293_ = lean_unsigned_to_nat(0u);
v___y_284_ = v___x_293_;
goto v___jp_283_;
}
v___jp_272_:
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = lean_nat_add(v___y_274_, v___y_275_);
lean_dec(v___y_275_);
lean_dec(v___y_274_);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 4, v_r_246_);
lean_ctor_set(v___x_268_, 3, v_r_262_);
lean_ctor_set(v___x_268_, 2, v_v_244_);
lean_ctor_set(v___x_268_, 1, v_k_243_);
lean_ctor_set(v___x_268_, 0, v___x_276_);
v___x_278_ = v___x_268_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_k_243_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_v_244_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_r_262_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v_r_246_);
v___x_278_ = v_reuseFailAlloc_282_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
lean_object* v___x_280_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 4, v___x_278_);
lean_ctor_set(v___x_256_, 3, v___y_273_);
lean_ctor_set(v___x_256_, 2, v_v_260_);
lean_ctor_set(v___x_256_, 1, v_k_259_);
lean_ctor_set(v___x_256_, 0, v___x_271_);
v___x_280_ = v___x_256_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_271_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v_k_259_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v_v_260_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v___y_273_);
lean_ctor_set(v_reuseFailAlloc_281_, 4, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
v___jp_283_:
{
lean_object* v___x_285_; lean_object* v___x_287_; 
v___x_285_ = lean_nat_add(v___x_270_, v___y_284_);
lean_dec(v___y_284_);
lean_dec(v___x_270_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_l_261_);
lean_ctor_set(v___x_96_, 0, v___x_285_);
v___x_287_ = v___x_96_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_291_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_291_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_291_, 4, v_l_261_);
v___x_287_ = v_reuseFailAlloc_291_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; 
v___x_288_ = lean_nat_add(v___x_240_, v_size_263_);
if (lean_obj_tag(v_r_262_) == 0)
{
lean_object* v_size_289_; 
v_size_289_ = lean_ctor_get(v_r_262_, 0);
lean_inc(v_size_289_);
v___y_273_ = v___x_287_;
v___y_274_ = v___x_288_;
v___y_275_ = v_size_289_;
goto v___jp_272_;
}
else
{
lean_object* v___x_290_; 
v___x_290_ = lean_unsigned_to_nat(0u);
v___y_273_ = v___x_287_;
v___y_274_ = v___x_288_;
v___y_275_ = v___x_290_;
goto v___jp_272_;
}
}
}
}
}
else
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_304_; 
lean_del_object(v___x_96_);
v___x_300_ = lean_nat_add(v___x_240_, v_size_241_);
v___x_301_ = lean_nat_add(v___x_300_, v_size_242_);
lean_dec(v_size_242_);
v___x_302_ = lean_nat_add(v___x_300_, v_size_258_);
lean_dec(v___x_300_);
lean_inc_ref(v_l_93_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 4, v_l_245_);
lean_ctor_set(v___x_256_, 3, v_l_93_);
lean_ctor_set(v___x_256_, 2, v_v_92_);
lean_ctor_set(v___x_256_, 1, v_k_91_);
lean_ctor_set(v___x_256_, 0, v___x_302_);
v___x_304_ = v___x_256_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_302_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_317_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_317_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_317_, 4, v_l_245_);
v___x_304_ = v_reuseFailAlloc_317_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
v_isSharedCheck_311_ = !lean_is_exclusive(v_l_93_);
if (v_isSharedCheck_311_ == 0)
{
lean_object* v_unused_312_; lean_object* v_unused_313_; lean_object* v_unused_314_; lean_object* v_unused_315_; lean_object* v_unused_316_; 
v_unused_312_ = lean_ctor_get(v_l_93_, 4);
lean_dec(v_unused_312_);
v_unused_313_ = lean_ctor_get(v_l_93_, 3);
lean_dec(v_unused_313_);
v_unused_314_ = lean_ctor_get(v_l_93_, 2);
lean_dec(v_unused_314_);
v_unused_315_ = lean_ctor_get(v_l_93_, 1);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_l_93_, 0);
lean_dec(v_unused_316_);
v___x_306_ = v_l_93_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_dec(v_l_93_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 4, v_r_246_);
lean_ctor_set(v___x_306_, 3, v___x_304_);
lean_ctor_set(v___x_306_, 2, v_v_244_);
lean_ctor_set(v___x_306_, 1, v_k_243_);
lean_ctor_set(v___x_306_, 0, v___x_301_);
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_301_);
lean_ctor_set(v_reuseFailAlloc_310_, 1, v_k_243_);
lean_ctor_set(v_reuseFailAlloc_310_, 2, v_v_244_);
lean_ctor_set(v_reuseFailAlloc_310_, 3, v___x_304_);
lean_ctor_set(v_reuseFailAlloc_310_, 4, v_r_246_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_324_; 
v_l_324_ = lean_ctor_get(v_impl_239_, 3);
lean_inc(v_l_324_);
if (lean_obj_tag(v_l_324_) == 0)
{
lean_object* v_r_325_; lean_object* v_k_326_; lean_object* v_v_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_350_; 
v_r_325_ = lean_ctor_get(v_impl_239_, 4);
v_k_326_ = lean_ctor_get(v_impl_239_, 1);
v_v_327_ = lean_ctor_get(v_impl_239_, 2);
v_isSharedCheck_350_ = !lean_is_exclusive(v_impl_239_);
if (v_isSharedCheck_350_ == 0)
{
lean_object* v_unused_351_; lean_object* v_unused_352_; 
v_unused_351_ = lean_ctor_get(v_impl_239_, 3);
lean_dec(v_unused_351_);
v_unused_352_ = lean_ctor_get(v_impl_239_, 0);
lean_dec(v_unused_352_);
v___x_329_ = v_impl_239_;
v_isShared_330_ = v_isSharedCheck_350_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_r_325_);
lean_inc(v_v_327_);
lean_inc(v_k_326_);
lean_dec(v_impl_239_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_350_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v_k_331_; lean_object* v_v_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_346_; 
v_k_331_ = lean_ctor_get(v_l_324_, 1);
v_v_332_ = lean_ctor_get(v_l_324_, 2);
v_isSharedCheck_346_ = !lean_is_exclusive(v_l_324_);
if (v_isSharedCheck_346_ == 0)
{
lean_object* v_unused_347_; lean_object* v_unused_348_; lean_object* v_unused_349_; 
v_unused_347_ = lean_ctor_get(v_l_324_, 4);
lean_dec(v_unused_347_);
v_unused_348_ = lean_ctor_get(v_l_324_, 3);
lean_dec(v_unused_348_);
v_unused_349_ = lean_ctor_get(v_l_324_, 0);
lean_dec(v_unused_349_);
v___x_334_ = v_l_324_;
v_isShared_335_ = v_isSharedCheck_346_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_v_332_);
lean_inc(v_k_331_);
lean_dec(v_l_324_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_346_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_338_; 
v___x_336_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_325_, 2);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 4, v_r_325_);
lean_ctor_set(v___x_334_, 3, v_r_325_);
lean_ctor_set(v___x_334_, 2, v_v_92_);
lean_ctor_set(v___x_334_, 1, v_k_91_);
lean_ctor_set(v___x_334_, 0, v___x_240_);
v___x_338_ = v___x_334_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_345_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_345_, 3, v_r_325_);
lean_ctor_set(v_reuseFailAlloc_345_, 4, v_r_325_);
v___x_338_ = v_reuseFailAlloc_345_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
lean_object* v___x_340_; 
lean_inc(v_r_325_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 3, v_r_325_);
lean_ctor_set(v___x_329_, 0, v___x_240_);
v___x_340_ = v___x_329_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_344_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_344_, 3, v_r_325_);
lean_ctor_set(v_reuseFailAlloc_344_, 4, v_r_325_);
v___x_340_ = v_reuseFailAlloc_344_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_342_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v___x_340_);
lean_ctor_set(v___x_96_, 3, v___x_338_);
lean_ctor_set(v___x_96_, 2, v_v_332_);
lean_ctor_set(v___x_96_, 1, v_k_331_);
lean_ctor_set(v___x_96_, 0, v___x_336_);
v___x_342_ = v___x_96_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v_k_331_);
lean_ctor_set(v_reuseFailAlloc_343_, 2, v_v_332_);
lean_ctor_set(v_reuseFailAlloc_343_, 3, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_343_, 4, v___x_340_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
}
}
else
{
lean_object* v_r_353_; 
v_r_353_ = lean_ctor_get(v_impl_239_, 4);
lean_inc(v_r_353_);
if (lean_obj_tag(v_r_353_) == 0)
{
lean_object* v_k_354_; lean_object* v_v_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_366_; 
v_k_354_ = lean_ctor_get(v_impl_239_, 1);
v_v_355_ = lean_ctor_get(v_impl_239_, 2);
v_isSharedCheck_366_ = !lean_is_exclusive(v_impl_239_);
if (v_isSharedCheck_366_ == 0)
{
lean_object* v_unused_367_; lean_object* v_unused_368_; lean_object* v_unused_369_; 
v_unused_367_ = lean_ctor_get(v_impl_239_, 4);
lean_dec(v_unused_367_);
v_unused_368_ = lean_ctor_get(v_impl_239_, 3);
lean_dec(v_unused_368_);
v_unused_369_ = lean_ctor_get(v_impl_239_, 0);
lean_dec(v_unused_369_);
v___x_357_ = v_impl_239_;
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_v_355_);
lean_inc(v_k_354_);
lean_dec(v_impl_239_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; lean_object* v___x_361_; 
v___x_359_ = lean_unsigned_to_nat(3u);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 4, v_l_324_);
lean_ctor_set(v___x_357_, 2, v_v_92_);
lean_ctor_set(v___x_357_, 1, v_k_91_);
lean_ctor_set(v___x_357_, 0, v___x_240_);
v___x_361_ = v___x_357_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_365_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_365_, 3, v_l_324_);
lean_ctor_set(v_reuseFailAlloc_365_, 4, v_l_324_);
v___x_361_ = v_reuseFailAlloc_365_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_363_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_r_353_);
lean_ctor_set(v___x_96_, 3, v___x_361_);
lean_ctor_set(v___x_96_, 2, v_v_355_);
lean_ctor_set(v___x_96_, 1, v_k_354_);
lean_ctor_set(v___x_96_, 0, v___x_359_);
v___x_363_ = v___x_96_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_359_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v_k_354_);
lean_ctor_set(v_reuseFailAlloc_364_, 2, v_v_355_);
lean_ctor_set(v_reuseFailAlloc_364_, 3, v___x_361_);
lean_ctor_set(v_reuseFailAlloc_364_, 4, v_r_353_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
else
{
lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_370_ = lean_unsigned_to_nat(2u);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_impl_239_);
lean_ctor_set(v___x_96_, 3, v_r_353_);
lean_ctor_set(v___x_96_, 0, v___x_370_);
v___x_372_ = v___x_96_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_373_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_373_, 3, v_r_353_);
lean_ctor_set(v_reuseFailAlloc_373_, 4, v_impl_239_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
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
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
lean_ctor_set(v___x_376_, 1, v_k_87_);
lean_ctor_set(v___x_376_, 2, v_v_88_);
lean_ctor_set(v___x_376_, 3, v_t_89_);
lean_ctor_set(v___x_376_, 4, v_t_89_);
return v___x_376_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(lean_object* v_ws_377_, lean_object* v_dep_378_, lean_object* v_lakeOpts_379_, lean_object* v_leanOpts_380_, uint8_t v_reconfigure_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_lakeEnv_384_; lean_object* v_lakeConfig_385_; lean_object* v_lakeCache_386_; lean_object* v_lakeArgs_x3f_387_; lean_object* v_packages_388_; lean_object* v_packageMap_389_; lean_object* v_facetConfigs_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_457_; 
v_lakeEnv_384_ = lean_ctor_get(v_ws_377_, 0);
v_lakeConfig_385_ = lean_ctor_get(v_ws_377_, 1);
v_lakeCache_386_ = lean_ctor_get(v_ws_377_, 2);
v_lakeArgs_x3f_387_ = lean_ctor_get(v_ws_377_, 3);
v_packages_388_ = lean_ctor_get(v_ws_377_, 4);
v_packageMap_389_ = lean_ctor_get(v_ws_377_, 5);
v_facetConfigs_390_ = lean_ctor_get(v_ws_377_, 6);
v_isSharedCheck_457_ = !lean_is_exclusive(v_ws_377_);
if (v_isSharedCheck_457_ == 0)
{
v___x_392_ = v_ws_377_;
v_isShared_393_ = v_isSharedCheck_457_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_facetConfigs_390_);
lean_inc(v_packageMap_389_);
lean_inc(v_packages_388_);
lean_inc(v_lakeArgs_x3f_387_);
lean_inc(v_lakeCache_386_);
lean_inc(v_lakeConfig_385_);
lean_inc(v_lakeEnv_384_);
lean_dec(v_ws_377_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_457_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v_manifestEntry_396_; lean_object* v_dir_397_; lean_object* v_pkgDir_398_; lean_object* v_relPkgDir_399_; lean_object* v_remoteUrl_400_; lean_object* v_name_401_; lean_object* v_scope_402_; lean_object* v_configFile_403_; lean_object* v_manifestFile_x3f_404_; lean_object* v_wsIdx_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___y_409_; 
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_array_fget_borrowed(v_packages_388_, v___x_394_);
v_manifestEntry_396_ = lean_ctor_get(v_dep_378_, 4);
lean_inc_ref(v_manifestEntry_396_);
v_dir_397_ = lean_ctor_get(v___x_395_, 4);
v_pkgDir_398_ = lean_ctor_get(v_dep_378_, 0);
lean_inc_ref_n(v_pkgDir_398_, 2);
v_relPkgDir_399_ = lean_ctor_get(v_dep_378_, 1);
lean_inc_ref(v_relPkgDir_399_);
v_remoteUrl_400_ = lean_ctor_get(v_dep_378_, 2);
lean_inc_ref(v_remoteUrl_400_);
lean_dec_ref(v_dep_378_);
v_name_401_ = lean_ctor_get(v_manifestEntry_396_, 0);
lean_inc(v_name_401_);
v_scope_402_ = lean_ctor_get(v_manifestEntry_396_, 1);
lean_inc_ref(v_scope_402_);
v_configFile_403_ = lean_ctor_get(v_manifestEntry_396_, 2);
lean_inc_ref_n(v_configFile_403_, 2);
v_manifestFile_x3f_404_ = lean_ctor_get(v_manifestEntry_396_, 3);
lean_inc(v_manifestFile_x3f_404_);
lean_dec_ref(v_manifestEntry_396_);
v_wsIdx_405_ = lean_array_get_size(v_packages_388_);
v___x_406_ = lean_box(0);
v___x_407_ = l_Lake_joinRelative(v_pkgDir_398_, v_configFile_403_);
if (lean_obj_tag(v_manifestFile_x3f_404_) == 0)
{
lean_object* v___x_455_; 
v___x_455_ = l_Lake_defaultManifestFile;
v___y_409_ = v___x_455_;
goto v___jp_408_;
}
else
{
lean_object* v_val_456_; 
v_val_456_ = lean_ctor_get(v_manifestFile_x3f_404_, 0);
lean_inc(v_val_456_);
lean_dec_ref_known(v_manifestFile_x3f_404_, 1);
v___y_409_ = v_val_456_;
goto v___jp_408_;
}
v___jp_408_:
{
lean_object* v___x_410_; uint8_t v___x_411_; uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_410_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_411_ = 0;
v___x_412_ = 1;
lean_inc(v_name_401_);
lean_inc_ref(v_dir_397_);
lean_inc_ref(v_lakeEnv_384_);
v___x_413_ = lean_alloc_ctor(0, 16, 3);
lean_ctor_set(v___x_413_, 0, v_lakeEnv_384_);
lean_ctor_set(v___x_413_, 1, v___x_406_);
lean_ctor_set(v___x_413_, 2, v_dir_397_);
lean_ctor_set(v___x_413_, 3, v_wsIdx_405_);
lean_ctor_set(v___x_413_, 4, v_name_401_);
lean_ctor_set(v___x_413_, 5, v_relPkgDir_399_);
lean_ctor_set(v___x_413_, 6, v_pkgDir_398_);
lean_ctor_set(v___x_413_, 7, v_configFile_403_);
lean_ctor_set(v___x_413_, 8, v___x_407_);
lean_ctor_set(v___x_413_, 9, v___x_406_);
lean_ctor_set(v___x_413_, 10, v___y_409_);
lean_ctor_set(v___x_413_, 11, v___x_410_);
lean_ctor_set(v___x_413_, 12, v_lakeOpts_379_);
lean_ctor_set(v___x_413_, 13, v_leanOpts_380_);
lean_ctor_set(v___x_413_, 14, v_scope_402_);
lean_ctor_set(v___x_413_, 15, v_remoteUrl_400_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*16, v_reconfigure_381_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*16 + 1, v___x_411_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*16 + 2, v___x_412_);
v___x_414_ = l_Lean_Name_toString(v_name_401_, v___x_411_);
v___x_415_ = l_Lake_resolveConfigFile(v___x_414_, v___x_413_, v_a_382_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v_a_417_; lean_object* v___x_418_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc_n(v_a_416_, 2);
v_a_417_ = lean_ctor_get(v___x_415_, 1);
lean_inc(v_a_417_);
lean_dec_ref_known(v___x_415_, 2);
v___x_418_ = l_Lake_loadConfigFile___redArg(v_a_416_, v_a_417_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v_a_419_; lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_436_; 
v_a_419_ = lean_ctor_get(v___x_418_, 0);
v_a_420_ = lean_ctor_get(v___x_418_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_436_ == 0)
{
v___x_422_ = v___x_418_;
v_isShared_423_ = v_isSharedCheck_436_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_inc(v_a_419_);
lean_dec(v___x_418_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_436_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v_facetDecls_424_; lean_object* v___x_425_; lean_object* v_keyName_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_430_; 
v_facetDecls_424_ = lean_ctor_get(v_a_419_, 2);
lean_inc_ref(v_facetDecls_424_);
v___x_425_ = l_Lake_mkPackage(v_a_416_, v_a_419_, v_wsIdx_405_);
lean_dec(v_a_416_);
v_keyName_426_ = lean_ctor_get(v___x_425_, 2);
lean_inc(v_keyName_426_);
lean_inc_ref(v___x_425_);
v___x_427_ = lean_array_push(v_packages_388_, v___x_425_);
v___x_428_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_keyName_426_, v___x_425_, v_packageMap_389_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 5, v___x_428_);
lean_ctor_set(v___x_392_, 4, v___x_427_);
v___x_430_ = v___x_392_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_lakeEnv_384_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_lakeConfig_385_);
lean_ctor_set(v_reuseFailAlloc_435_, 2, v_lakeCache_386_);
lean_ctor_set(v_reuseFailAlloc_435_, 3, v_lakeArgs_x3f_387_);
lean_ctor_set(v_reuseFailAlloc_435_, 4, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_435_, 5, v___x_428_);
lean_ctor_set(v_reuseFailAlloc_435_, 6, v_facetConfigs_390_);
v___x_430_ = v_reuseFailAlloc_435_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_431_; lean_object* v___x_433_; 
v___x_431_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(v_facetDecls_424_, v___x_430_);
lean_dec_ref(v_facetDecls_424_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_431_);
v___x_433_ = v___x_422_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_431_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_a_420_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
else
{
lean_object* v_a_437_; lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec(v_a_416_);
lean_del_object(v___x_392_);
lean_dec(v_facetConfigs_390_);
lean_dec(v_packageMap_389_);
lean_dec_ref(v_packages_388_);
lean_dec(v_lakeArgs_x3f_387_);
lean_dec_ref(v_lakeCache_386_);
lean_dec_ref(v_lakeConfig_385_);
lean_dec_ref(v_lakeEnv_384_);
v_a_437_ = lean_ctor_get(v___x_418_, 0);
v_a_438_ = lean_ctor_get(v___x_418_, 1);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_418_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_inc(v_a_437_);
lean_dec(v___x_418_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_437_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
else
{
lean_object* v_a_446_; lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_del_object(v___x_392_);
lean_dec(v_facetConfigs_390_);
lean_dec(v_packageMap_389_);
lean_dec_ref(v_packages_388_);
lean_dec(v_lakeArgs_x3f_387_);
lean_dec_ref(v_lakeCache_386_);
lean_dec_ref(v_lakeConfig_385_);
lean_dec_ref(v_lakeEnv_384_);
v_a_446_ = lean_ctor_get(v___x_415_, 0);
v_a_447_ = lean_ctor_get(v___x_415_, 1);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_415_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_inc(v_a_446_);
lean_dec(v___x_415_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27___boxed(lean_object* v_ws_458_, lean_object* v_dep_459_, lean_object* v_lakeOpts_460_, lean_object* v_leanOpts_461_, lean_object* v_reconfigure_462_, lean_object* v_a_463_, lean_object* v___y_464_){
_start:
{
uint8_t v_reconfigure_boxed_465_; lean_object* v_res_466_; 
v_reconfigure_boxed_465_ = lean_unbox(v_reconfigure_462_);
v_res_466_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_458_, v_dep_459_, v_lakeOpts_460_, v_leanOpts_461_, v_reconfigure_boxed_465_, v_a_463_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0(lean_object* v_00_u03b2_467_, lean_object* v_k_468_, lean_object* v_v_469_, lean_object* v_t_470_, lean_object* v_hl_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_468_, v_v_469_, v_t_470_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(lean_object* v_self_473_, lean_object* v_pkg_474_, lean_object* v_depIdxs_475_){
_start:
{
lean_object* v_wsIdx_476_; lean_object* v_baseName_477_; lean_object* v_keyName_478_; lean_object* v_origName_479_; lean_object* v_dir_480_; lean_object* v_relDir_481_; lean_object* v_config_482_; lean_object* v_configFile_483_; lean_object* v_relConfigFile_484_; lean_object* v_relManifestFile_485_; lean_object* v_scope_486_; lean_object* v_remoteUrl_487_; lean_object* v_depConfigs_488_; lean_object* v_depPkgs_489_; lean_object* v_targetDecls_490_; lean_object* v_targetDeclMap_491_; lean_object* v_defaultTargets_492_; lean_object* v_scripts_493_; lean_object* v_defaultScripts_494_; lean_object* v_postUpdateHooks_495_; lean_object* v_buildArchive_496_; lean_object* v_testDriver_497_; lean_object* v_lintDriver_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_521_; 
v_wsIdx_476_ = lean_ctor_get(v_pkg_474_, 0);
v_baseName_477_ = lean_ctor_get(v_pkg_474_, 1);
v_keyName_478_ = lean_ctor_get(v_pkg_474_, 2);
v_origName_479_ = lean_ctor_get(v_pkg_474_, 3);
v_dir_480_ = lean_ctor_get(v_pkg_474_, 4);
v_relDir_481_ = lean_ctor_get(v_pkg_474_, 5);
v_config_482_ = lean_ctor_get(v_pkg_474_, 6);
v_configFile_483_ = lean_ctor_get(v_pkg_474_, 7);
v_relConfigFile_484_ = lean_ctor_get(v_pkg_474_, 8);
v_relManifestFile_485_ = lean_ctor_get(v_pkg_474_, 9);
v_scope_486_ = lean_ctor_get(v_pkg_474_, 10);
v_remoteUrl_487_ = lean_ctor_get(v_pkg_474_, 11);
v_depConfigs_488_ = lean_ctor_get(v_pkg_474_, 12);
v_depPkgs_489_ = lean_ctor_get(v_pkg_474_, 14);
v_targetDecls_490_ = lean_ctor_get(v_pkg_474_, 15);
v_targetDeclMap_491_ = lean_ctor_get(v_pkg_474_, 16);
v_defaultTargets_492_ = lean_ctor_get(v_pkg_474_, 17);
v_scripts_493_ = lean_ctor_get(v_pkg_474_, 18);
v_defaultScripts_494_ = lean_ctor_get(v_pkg_474_, 19);
v_postUpdateHooks_495_ = lean_ctor_get(v_pkg_474_, 20);
v_buildArchive_496_ = lean_ctor_get(v_pkg_474_, 21);
v_testDriver_497_ = lean_ctor_get(v_pkg_474_, 22);
v_lintDriver_498_ = lean_ctor_get(v_pkg_474_, 23);
v_isSharedCheck_521_ = !lean_is_exclusive(v_pkg_474_);
if (v_isSharedCheck_521_ == 0)
{
lean_object* v_unused_522_; 
v_unused_522_ = lean_ctor_get(v_pkg_474_, 13);
lean_dec(v_unused_522_);
v___x_500_ = v_pkg_474_;
v_isShared_501_ = v_isSharedCheck_521_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_lintDriver_498_);
lean_inc(v_testDriver_497_);
lean_inc(v_buildArchive_496_);
lean_inc(v_postUpdateHooks_495_);
lean_inc(v_defaultScripts_494_);
lean_inc(v_scripts_493_);
lean_inc(v_defaultTargets_492_);
lean_inc(v_targetDeclMap_491_);
lean_inc(v_targetDecls_490_);
lean_inc(v_depPkgs_489_);
lean_inc(v_depConfigs_488_);
lean_inc(v_remoteUrl_487_);
lean_inc(v_scope_486_);
lean_inc(v_relManifestFile_485_);
lean_inc(v_relConfigFile_484_);
lean_inc(v_configFile_483_);
lean_inc(v_config_482_);
lean_inc(v_relDir_481_);
lean_inc(v_dir_480_);
lean_inc(v_origName_479_);
lean_inc(v_keyName_478_);
lean_inc(v_baseName_477_);
lean_inc(v_wsIdx_476_);
lean_dec(v_pkg_474_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_521_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v_lakeEnv_502_; lean_object* v_lakeConfig_503_; lean_object* v_lakeCache_504_; lean_object* v_lakeArgs_x3f_505_; lean_object* v_packages_506_; lean_object* v_packageMap_507_; lean_object* v_facetConfigs_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_520_; 
v_lakeEnv_502_ = lean_ctor_get(v_self_473_, 0);
v_lakeConfig_503_ = lean_ctor_get(v_self_473_, 1);
v_lakeCache_504_ = lean_ctor_get(v_self_473_, 2);
v_lakeArgs_x3f_505_ = lean_ctor_get(v_self_473_, 3);
v_packages_506_ = lean_ctor_get(v_self_473_, 4);
v_packageMap_507_ = lean_ctor_get(v_self_473_, 5);
v_facetConfigs_508_ = lean_ctor_get(v_self_473_, 6);
v_isSharedCheck_520_ = !lean_is_exclusive(v_self_473_);
if (v_isSharedCheck_520_ == 0)
{
v___x_510_ = v_self_473_;
v_isShared_511_ = v_isSharedCheck_520_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_facetConfigs_508_);
lean_inc(v_packageMap_507_);
lean_inc(v_packages_506_);
lean_inc(v_lakeArgs_x3f_505_);
lean_inc(v_lakeCache_504_);
lean_inc(v_lakeConfig_503_);
lean_inc(v_lakeEnv_502_);
lean_dec(v_self_473_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_520_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v_pkg_513_; 
lean_inc(v_keyName_478_);
lean_inc(v_wsIdx_476_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 13, v_depIdxs_475_);
v_pkg_513_ = v___x_500_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 24, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_wsIdx_476_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_baseName_477_);
lean_ctor_set(v_reuseFailAlloc_519_, 2, v_keyName_478_);
lean_ctor_set(v_reuseFailAlloc_519_, 3, v_origName_479_);
lean_ctor_set(v_reuseFailAlloc_519_, 4, v_dir_480_);
lean_ctor_set(v_reuseFailAlloc_519_, 5, v_relDir_481_);
lean_ctor_set(v_reuseFailAlloc_519_, 6, v_config_482_);
lean_ctor_set(v_reuseFailAlloc_519_, 7, v_configFile_483_);
lean_ctor_set(v_reuseFailAlloc_519_, 8, v_relConfigFile_484_);
lean_ctor_set(v_reuseFailAlloc_519_, 9, v_relManifestFile_485_);
lean_ctor_set(v_reuseFailAlloc_519_, 10, v_scope_486_);
lean_ctor_set(v_reuseFailAlloc_519_, 11, v_remoteUrl_487_);
lean_ctor_set(v_reuseFailAlloc_519_, 12, v_depConfigs_488_);
lean_ctor_set(v_reuseFailAlloc_519_, 13, v_depIdxs_475_);
lean_ctor_set(v_reuseFailAlloc_519_, 14, v_depPkgs_489_);
lean_ctor_set(v_reuseFailAlloc_519_, 15, v_targetDecls_490_);
lean_ctor_set(v_reuseFailAlloc_519_, 16, v_targetDeclMap_491_);
lean_ctor_set(v_reuseFailAlloc_519_, 17, v_defaultTargets_492_);
lean_ctor_set(v_reuseFailAlloc_519_, 18, v_scripts_493_);
lean_ctor_set(v_reuseFailAlloc_519_, 19, v_defaultScripts_494_);
lean_ctor_set(v_reuseFailAlloc_519_, 20, v_postUpdateHooks_495_);
lean_ctor_set(v_reuseFailAlloc_519_, 21, v_buildArchive_496_);
lean_ctor_set(v_reuseFailAlloc_519_, 22, v_testDriver_497_);
lean_ctor_set(v_reuseFailAlloc_519_, 23, v_lintDriver_498_);
v_pkg_513_ = v_reuseFailAlloc_519_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
lean_inc_ref(v_pkg_513_);
v___x_514_ = lean_array_fset(v_packages_506_, v_wsIdx_476_, v_pkg_513_);
lean_dec(v_wsIdx_476_);
v___x_515_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_keyName_478_, v_pkg_513_, v_packageMap_507_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 5, v___x_515_);
lean_ctor_set(v___x_510_, 4, v___x_514_);
v___x_517_ = v___x_510_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_lakeEnv_502_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v_lakeConfig_503_);
lean_ctor_set(v_reuseFailAlloc_518_, 2, v_lakeCache_504_);
lean_ctor_set(v_reuseFailAlloc_518_, 3, v_lakeArgs_x3f_505_);
lean_ctor_set(v_reuseFailAlloc_518_, 4, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_518_, 5, v___x_515_);
lean_ctor_set(v_reuseFailAlloc_518_, 6, v_facetConfigs_508_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs(lean_object* v_self_523_, lean_object* v_pkg_524_, lean_object* v_depIdxs_525_, lean_object* v_h__wsIdx_526_, lean_object* v_h__depIdxs_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_self_523_, v_pkg_524_, v_depIdxs_525_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(lean_object* v_val_529_, size_t v_sz_530_, size_t v_i_531_, lean_object* v_bs_532_){
_start:
{
uint8_t v___x_533_; 
v___x_533_ = lean_usize_dec_lt(v_i_531_, v_sz_530_);
if (v___x_533_ == 0)
{
return v_bs_532_;
}
else
{
lean_object* v_v_534_; lean_object* v___x_535_; lean_object* v_bs_x27_536_; lean_object* v___x_537_; size_t v___x_538_; size_t v___x_539_; lean_object* v___x_540_; 
v_v_534_ = lean_array_uget(v_bs_532_, v_i_531_);
v___x_535_ = lean_unsigned_to_nat(0u);
v_bs_x27_536_ = lean_array_uset(v_bs_532_, v_i_531_, v___x_535_);
v___x_537_ = lean_array_fget_borrowed(v_val_529_, v_v_534_);
lean_dec(v_v_534_);
v___x_538_ = ((size_t)1ULL);
v___x_539_ = lean_usize_add(v_i_531_, v___x_538_);
lean_inc(v___x_537_);
v___x_540_ = lean_array_uset(v_bs_x27_536_, v_i_531_, v___x_537_);
v_i_531_ = v___x_539_;
v_bs_532_ = v___x_540_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0___boxed(lean_object* v_val_542_, lean_object* v_sz_543_, lean_object* v_i_544_, lean_object* v_bs_545_){
_start:
{
size_t v_sz_boxed_546_; size_t v_i_boxed_547_; lean_object* v_res_548_; 
v_sz_boxed_546_ = lean_unbox_usize(v_sz_543_);
lean_dec(v_sz_543_);
v_i_boxed_547_ = lean_unbox_usize(v_i_544_);
lean_dec(v_i_544_);
v_res_548_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(v_val_542_, v_sz_boxed_546_, v_i_boxed_547_, v_bs_545_);
lean_dec_ref(v_val_542_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(lean_object* v_x_549_, lean_object* v_x_550_){
_start:
{
lean_object* v_zero_551_; uint8_t v_isZero_552_; 
v_zero_551_ = lean_unsigned_to_nat(0u);
v_isZero_552_ = lean_nat_dec_eq(v_x_549_, v_zero_551_);
if (v_isZero_552_ == 1)
{
lean_dec(v_x_549_);
return v_x_550_;
}
else
{
lean_object* v_one_553_; lean_object* v_n_554_; lean_object* v_pkg_555_; lean_object* v_wsIdx_556_; lean_object* v_baseName_557_; lean_object* v_keyName_558_; lean_object* v_origName_559_; lean_object* v_dir_560_; lean_object* v_relDir_561_; lean_object* v_config_562_; lean_object* v_configFile_563_; lean_object* v_relConfigFile_564_; lean_object* v_relManifestFile_565_; lean_object* v_scope_566_; lean_object* v_remoteUrl_567_; lean_object* v_depConfigs_568_; lean_object* v_depIdxs_569_; lean_object* v_targetDecls_570_; lean_object* v_targetDeclMap_571_; lean_object* v_defaultTargets_572_; lean_object* v_scripts_573_; lean_object* v_defaultScripts_574_; lean_object* v_postUpdateHooks_575_; lean_object* v_buildArchive_576_; lean_object* v_testDriver_577_; lean_object* v_lintDriver_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_590_; 
v_one_553_ = lean_unsigned_to_nat(1u);
v_n_554_ = lean_nat_sub(v_x_549_, v_one_553_);
lean_dec(v_x_549_);
v_pkg_555_ = lean_array_fget(v_x_550_, v_n_554_);
v_wsIdx_556_ = lean_ctor_get(v_pkg_555_, 0);
v_baseName_557_ = lean_ctor_get(v_pkg_555_, 1);
v_keyName_558_ = lean_ctor_get(v_pkg_555_, 2);
v_origName_559_ = lean_ctor_get(v_pkg_555_, 3);
v_dir_560_ = lean_ctor_get(v_pkg_555_, 4);
v_relDir_561_ = lean_ctor_get(v_pkg_555_, 5);
v_config_562_ = lean_ctor_get(v_pkg_555_, 6);
v_configFile_563_ = lean_ctor_get(v_pkg_555_, 7);
v_relConfigFile_564_ = lean_ctor_get(v_pkg_555_, 8);
v_relManifestFile_565_ = lean_ctor_get(v_pkg_555_, 9);
v_scope_566_ = lean_ctor_get(v_pkg_555_, 10);
v_remoteUrl_567_ = lean_ctor_get(v_pkg_555_, 11);
v_depConfigs_568_ = lean_ctor_get(v_pkg_555_, 12);
v_depIdxs_569_ = lean_ctor_get(v_pkg_555_, 13);
v_targetDecls_570_ = lean_ctor_get(v_pkg_555_, 15);
v_targetDeclMap_571_ = lean_ctor_get(v_pkg_555_, 16);
v_defaultTargets_572_ = lean_ctor_get(v_pkg_555_, 17);
v_scripts_573_ = lean_ctor_get(v_pkg_555_, 18);
v_defaultScripts_574_ = lean_ctor_get(v_pkg_555_, 19);
v_postUpdateHooks_575_ = lean_ctor_get(v_pkg_555_, 20);
v_buildArchive_576_ = lean_ctor_get(v_pkg_555_, 21);
v_testDriver_577_ = lean_ctor_get(v_pkg_555_, 22);
v_lintDriver_578_ = lean_ctor_get(v_pkg_555_, 23);
v_isSharedCheck_590_ = !lean_is_exclusive(v_pkg_555_);
if (v_isSharedCheck_590_ == 0)
{
lean_object* v_unused_591_; 
v_unused_591_ = lean_ctor_get(v_pkg_555_, 14);
lean_dec(v_unused_591_);
v___x_580_ = v_pkg_555_;
v_isShared_581_ = v_isSharedCheck_590_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_lintDriver_578_);
lean_inc(v_testDriver_577_);
lean_inc(v_buildArchive_576_);
lean_inc(v_postUpdateHooks_575_);
lean_inc(v_defaultScripts_574_);
lean_inc(v_scripts_573_);
lean_inc(v_defaultTargets_572_);
lean_inc(v_targetDeclMap_571_);
lean_inc(v_targetDecls_570_);
lean_inc(v_depIdxs_569_);
lean_inc(v_depConfigs_568_);
lean_inc(v_remoteUrl_567_);
lean_inc(v_scope_566_);
lean_inc(v_relManifestFile_565_);
lean_inc(v_relConfigFile_564_);
lean_inc(v_configFile_563_);
lean_inc(v_config_562_);
lean_inc(v_relDir_561_);
lean_inc(v_dir_560_);
lean_inc(v_origName_559_);
lean_inc(v_keyName_558_);
lean_inc(v_baseName_557_);
lean_inc(v_wsIdx_556_);
lean_dec(v_pkg_555_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_590_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
size_t v_sz_582_; size_t v___x_583_; lean_object* v_depPkgs_584_; lean_object* v___x_586_; 
v_sz_582_ = lean_array_size(v_depIdxs_569_);
v___x_583_ = ((size_t)0ULL);
lean_inc_ref(v_depIdxs_569_);
v_depPkgs_584_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(v_x_550_, v_sz_582_, v___x_583_, v_depIdxs_569_);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 14, v_depPkgs_584_);
v___x_586_ = v___x_580_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 24, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_wsIdx_556_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v_baseName_557_);
lean_ctor_set(v_reuseFailAlloc_589_, 2, v_keyName_558_);
lean_ctor_set(v_reuseFailAlloc_589_, 3, v_origName_559_);
lean_ctor_set(v_reuseFailAlloc_589_, 4, v_dir_560_);
lean_ctor_set(v_reuseFailAlloc_589_, 5, v_relDir_561_);
lean_ctor_set(v_reuseFailAlloc_589_, 6, v_config_562_);
lean_ctor_set(v_reuseFailAlloc_589_, 7, v_configFile_563_);
lean_ctor_set(v_reuseFailAlloc_589_, 8, v_relConfigFile_564_);
lean_ctor_set(v_reuseFailAlloc_589_, 9, v_relManifestFile_565_);
lean_ctor_set(v_reuseFailAlloc_589_, 10, v_scope_566_);
lean_ctor_set(v_reuseFailAlloc_589_, 11, v_remoteUrl_567_);
lean_ctor_set(v_reuseFailAlloc_589_, 12, v_depConfigs_568_);
lean_ctor_set(v_reuseFailAlloc_589_, 13, v_depIdxs_569_);
lean_ctor_set(v_reuseFailAlloc_589_, 14, v_depPkgs_584_);
lean_ctor_set(v_reuseFailAlloc_589_, 15, v_targetDecls_570_);
lean_ctor_set(v_reuseFailAlloc_589_, 16, v_targetDeclMap_571_);
lean_ctor_set(v_reuseFailAlloc_589_, 17, v_defaultTargets_572_);
lean_ctor_set(v_reuseFailAlloc_589_, 18, v_scripts_573_);
lean_ctor_set(v_reuseFailAlloc_589_, 19, v_defaultScripts_574_);
lean_ctor_set(v_reuseFailAlloc_589_, 20, v_postUpdateHooks_575_);
lean_ctor_set(v_reuseFailAlloc_589_, 21, v_buildArchive_576_);
lean_ctor_set(v_reuseFailAlloc_589_, 22, v_testDriver_577_);
lean_ctor_set(v_reuseFailAlloc_589_, 23, v_lintDriver_578_);
v___x_586_ = v_reuseFailAlloc_589_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
lean_object* v_pkgs_x27_587_; 
v_pkgs_x27_587_ = lean_array_fset(v_x_550_, v_n_554_, v___x_586_);
v_x_549_ = v_n_554_;
v_x_550_ = v_pkgs_x27_587_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(lean_object* v___x_592_, lean_object* v_x_593_, lean_object* v_x_594_){
_start:
{
lean_object* v_zero_595_; uint8_t v_isZero_596_; 
v_zero_595_ = lean_unsigned_to_nat(0u);
v_isZero_596_ = lean_nat_dec_eq(v_x_593_, v_zero_595_);
if (v_isZero_596_ == 1)
{
return v_x_594_;
}
else
{
lean_object* v_one_597_; lean_object* v_n_598_; lean_object* v_pkg_599_; lean_object* v_wsIdx_600_; lean_object* v_baseName_601_; lean_object* v_keyName_602_; lean_object* v_origName_603_; lean_object* v_dir_604_; lean_object* v_relDir_605_; lean_object* v_config_606_; lean_object* v_configFile_607_; lean_object* v_relConfigFile_608_; lean_object* v_relManifestFile_609_; lean_object* v_scope_610_; lean_object* v_remoteUrl_611_; lean_object* v_depConfigs_612_; lean_object* v_depIdxs_613_; lean_object* v_targetDecls_614_; lean_object* v_targetDeclMap_615_; lean_object* v_defaultTargets_616_; lean_object* v_scripts_617_; lean_object* v_defaultScripts_618_; lean_object* v_postUpdateHooks_619_; lean_object* v_buildArchive_620_; lean_object* v_testDriver_621_; lean_object* v_lintDriver_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_634_; 
v_one_597_ = lean_unsigned_to_nat(1u);
v_n_598_ = lean_nat_sub(v_x_593_, v_one_597_);
v_pkg_599_ = lean_array_fget(v_x_594_, v_n_598_);
v_wsIdx_600_ = lean_ctor_get(v_pkg_599_, 0);
v_baseName_601_ = lean_ctor_get(v_pkg_599_, 1);
v_keyName_602_ = lean_ctor_get(v_pkg_599_, 2);
v_origName_603_ = lean_ctor_get(v_pkg_599_, 3);
v_dir_604_ = lean_ctor_get(v_pkg_599_, 4);
v_relDir_605_ = lean_ctor_get(v_pkg_599_, 5);
v_config_606_ = lean_ctor_get(v_pkg_599_, 6);
v_configFile_607_ = lean_ctor_get(v_pkg_599_, 7);
v_relConfigFile_608_ = lean_ctor_get(v_pkg_599_, 8);
v_relManifestFile_609_ = lean_ctor_get(v_pkg_599_, 9);
v_scope_610_ = lean_ctor_get(v_pkg_599_, 10);
v_remoteUrl_611_ = lean_ctor_get(v_pkg_599_, 11);
v_depConfigs_612_ = lean_ctor_get(v_pkg_599_, 12);
v_depIdxs_613_ = lean_ctor_get(v_pkg_599_, 13);
v_targetDecls_614_ = lean_ctor_get(v_pkg_599_, 15);
v_targetDeclMap_615_ = lean_ctor_get(v_pkg_599_, 16);
v_defaultTargets_616_ = lean_ctor_get(v_pkg_599_, 17);
v_scripts_617_ = lean_ctor_get(v_pkg_599_, 18);
v_defaultScripts_618_ = lean_ctor_get(v_pkg_599_, 19);
v_postUpdateHooks_619_ = lean_ctor_get(v_pkg_599_, 20);
v_buildArchive_620_ = lean_ctor_get(v_pkg_599_, 21);
v_testDriver_621_ = lean_ctor_get(v_pkg_599_, 22);
v_lintDriver_622_ = lean_ctor_get(v_pkg_599_, 23);
v_isSharedCheck_634_ = !lean_is_exclusive(v_pkg_599_);
if (v_isSharedCheck_634_ == 0)
{
lean_object* v_unused_635_; 
v_unused_635_ = lean_ctor_get(v_pkg_599_, 14);
lean_dec(v_unused_635_);
v___x_624_ = v_pkg_599_;
v_isShared_625_ = v_isSharedCheck_634_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_lintDriver_622_);
lean_inc(v_testDriver_621_);
lean_inc(v_buildArchive_620_);
lean_inc(v_postUpdateHooks_619_);
lean_inc(v_defaultScripts_618_);
lean_inc(v_scripts_617_);
lean_inc(v_defaultTargets_616_);
lean_inc(v_targetDeclMap_615_);
lean_inc(v_targetDecls_614_);
lean_inc(v_depIdxs_613_);
lean_inc(v_depConfigs_612_);
lean_inc(v_remoteUrl_611_);
lean_inc(v_scope_610_);
lean_inc(v_relManifestFile_609_);
lean_inc(v_relConfigFile_608_);
lean_inc(v_configFile_607_);
lean_inc(v_config_606_);
lean_inc(v_relDir_605_);
lean_inc(v_dir_604_);
lean_inc(v_origName_603_);
lean_inc(v_keyName_602_);
lean_inc(v_baseName_601_);
lean_inc(v_wsIdx_600_);
lean_dec(v_pkg_599_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_634_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
size_t v_sz_626_; size_t v___x_627_; lean_object* v_depPkgs_628_; lean_object* v___x_630_; 
v_sz_626_ = lean_array_size(v_depIdxs_613_);
v___x_627_ = ((size_t)0ULL);
lean_inc_ref(v_depIdxs_613_);
v_depPkgs_628_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(v_x_594_, v_sz_626_, v___x_627_, v_depIdxs_613_);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 14, v_depPkgs_628_);
v___x_630_ = v___x_624_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 24, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_wsIdx_600_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_baseName_601_);
lean_ctor_set(v_reuseFailAlloc_633_, 2, v_keyName_602_);
lean_ctor_set(v_reuseFailAlloc_633_, 3, v_origName_603_);
lean_ctor_set(v_reuseFailAlloc_633_, 4, v_dir_604_);
lean_ctor_set(v_reuseFailAlloc_633_, 5, v_relDir_605_);
lean_ctor_set(v_reuseFailAlloc_633_, 6, v_config_606_);
lean_ctor_set(v_reuseFailAlloc_633_, 7, v_configFile_607_);
lean_ctor_set(v_reuseFailAlloc_633_, 8, v_relConfigFile_608_);
lean_ctor_set(v_reuseFailAlloc_633_, 9, v_relManifestFile_609_);
lean_ctor_set(v_reuseFailAlloc_633_, 10, v_scope_610_);
lean_ctor_set(v_reuseFailAlloc_633_, 11, v_remoteUrl_611_);
lean_ctor_set(v_reuseFailAlloc_633_, 12, v_depConfigs_612_);
lean_ctor_set(v_reuseFailAlloc_633_, 13, v_depIdxs_613_);
lean_ctor_set(v_reuseFailAlloc_633_, 14, v_depPkgs_628_);
lean_ctor_set(v_reuseFailAlloc_633_, 15, v_targetDecls_614_);
lean_ctor_set(v_reuseFailAlloc_633_, 16, v_targetDeclMap_615_);
lean_ctor_set(v_reuseFailAlloc_633_, 17, v_defaultTargets_616_);
lean_ctor_set(v_reuseFailAlloc_633_, 18, v_scripts_617_);
lean_ctor_set(v_reuseFailAlloc_633_, 19, v_defaultScripts_618_);
lean_ctor_set(v_reuseFailAlloc_633_, 20, v_postUpdateHooks_619_);
lean_ctor_set(v_reuseFailAlloc_633_, 21, v_buildArchive_620_);
lean_ctor_set(v_reuseFailAlloc_633_, 22, v_testDriver_621_);
lean_ctor_set(v_reuseFailAlloc_633_, 23, v_lintDriver_622_);
v___x_630_ = v_reuseFailAlloc_633_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v_pkgs_x27_631_; lean_object* v___x_632_; 
v_pkgs_x27_631_ = lean_array_fset(v_x_594_, v_n_598_, v___x_630_);
v___x_632_ = l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(v_n_598_, v_pkgs_x27_631_);
return v___x_632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1___boxed(lean_object* v___x_636_, lean_object* v_x_637_, lean_object* v_x_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(v___x_636_, v_x_637_, v_x_638_);
lean_dec(v_x_637_);
lean_dec(v___x_636_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(lean_object* v_as_640_, size_t v_i_641_, size_t v_stop_642_, lean_object* v_b_643_){
_start:
{
uint8_t v___x_644_; 
v___x_644_ = lean_usize_dec_eq(v_i_641_, v_stop_642_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; lean_object* v_keyName_646_; lean_object* v___x_647_; size_t v___x_648_; size_t v___x_649_; 
v___x_645_ = lean_array_uget_borrowed(v_as_640_, v_i_641_);
v_keyName_646_ = lean_ctor_get(v___x_645_, 2);
lean_inc(v___x_645_);
lean_inc(v_keyName_646_);
v___x_647_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_keyName_646_, v___x_645_, v_b_643_);
v___x_648_ = ((size_t)1ULL);
v___x_649_ = lean_usize_add(v_i_641_, v___x_648_);
v_i_641_ = v___x_649_;
v_b_643_ = v___x_647_;
goto _start;
}
else
{
return v_b_643_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2___boxed(lean_object* v_as_651_, lean_object* v_i_652_, lean_object* v_stop_653_, lean_object* v_b_654_){
_start:
{
size_t v_i_boxed_655_; size_t v_stop_boxed_656_; lean_object* v_res_657_; 
v_i_boxed_655_ = lean_unbox_usize(v_i_652_);
lean_dec(v_i_652_);
v_stop_boxed_656_ = lean_unbox_usize(v_stop_653_);
lean_dec(v_stop_653_);
v_res_657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(v_as_651_, v_i_boxed_655_, v_stop_boxed_656_, v_b_654_);
lean_dec_ref(v_as_651_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(lean_object* v_self_658_){
_start:
{
lean_object* v_lakeEnv_659_; lean_object* v_lakeConfig_660_; lean_object* v_lakeCache_661_; lean_object* v_lakeArgs_x3f_662_; lean_object* v_packages_663_; lean_object* v_facetConfigs_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_683_; 
v_lakeEnv_659_ = lean_ctor_get(v_self_658_, 0);
v_lakeConfig_660_ = lean_ctor_get(v_self_658_, 1);
v_lakeCache_661_ = lean_ctor_get(v_self_658_, 2);
v_lakeArgs_x3f_662_ = lean_ctor_get(v_self_658_, 3);
v_packages_663_ = lean_ctor_get(v_self_658_, 4);
v_facetConfigs_664_ = lean_ctor_get(v_self_658_, 6);
v_isSharedCheck_683_ = !lean_is_exclusive(v_self_658_);
if (v_isSharedCheck_683_ == 0)
{
lean_object* v_unused_684_; 
v_unused_684_ = lean_ctor_get(v_self_658_, 5);
lean_dec(v_unused_684_);
v___x_666_ = v_self_658_;
v_isShared_667_ = v_isSharedCheck_683_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_facetConfigs_664_);
lean_inc(v_packages_663_);
lean_inc(v_lakeArgs_x3f_662_);
lean_inc(v_lakeCache_661_);
lean_inc(v_lakeConfig_660_);
lean_inc(v_lakeEnv_659_);
lean_dec(v_self_658_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_683_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_668_; lean_object* v_val_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; uint8_t v___x_673_; 
v___x_668_ = lean_array_get_size(v_packages_663_);
v_val_669_ = l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(v___x_668_, v___x_668_, v_packages_663_);
v___x_670_ = lean_box(1);
v___x_671_ = lean_unsigned_to_nat(0u);
v___x_672_ = lean_array_get_size(v_val_669_);
v___x_673_ = lean_nat_dec_lt(v___x_671_, v___x_672_);
if (v___x_673_ == 0)
{
lean_object* v___x_675_; 
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 5, v___x_670_);
lean_ctor_set(v___x_666_, 4, v_val_669_);
v___x_675_ = v___x_666_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_lakeEnv_659_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v_lakeConfig_660_);
lean_ctor_set(v_reuseFailAlloc_676_, 2, v_lakeCache_661_);
lean_ctor_set(v_reuseFailAlloc_676_, 3, v_lakeArgs_x3f_662_);
lean_ctor_set(v_reuseFailAlloc_676_, 4, v_val_669_);
lean_ctor_set(v_reuseFailAlloc_676_, 5, v___x_670_);
lean_ctor_set(v_reuseFailAlloc_676_, 6, v_facetConfigs_664_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
else
{
size_t v___x_677_; size_t v___x_678_; lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_677_ = ((size_t)0ULL);
v___x_678_ = lean_usize_of_nat(v___x_672_);
v___x_679_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(v_val_669_, v___x_677_, v___x_678_, v___x_670_);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 5, v___x_679_);
lean_ctor_set(v___x_666_, 4, v_val_669_);
v___x_681_ = v___x_666_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_lakeEnv_659_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v_lakeConfig_660_);
lean_ctor_set(v_reuseFailAlloc_682_, 2, v_lakeCache_661_);
lean_ctor_set(v_reuseFailAlloc_682_, 3, v_lakeArgs_x3f_662_);
lean_ctor_set(v_reuseFailAlloc_682_, 4, v_val_669_);
lean_ctor_set(v_reuseFailAlloc_682_, 5, v___x_679_);
lean_ctor_set(v_reuseFailAlloc_682_, 6, v_facetConfigs_664_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1(lean_object* v___x_685_, lean_object* v_x_686_, lean_object* v_x_687_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(v_x_686_, v_x_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___boxed(lean_object* v___x_689_, lean_object* v_x_690_, lean_object* v_x_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1(v___x_689_, v_x_690_, v_x_691_);
lean_dec(v___x_689_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(lean_object* v_ws_693_, lean_object* v_size_694_){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = lean_mk_empty_array_with_capacity(v_size_694_);
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v_ws_693_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init___boxed(lean_object* v_ws_697_, lean_object* v_size_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(v_ws_697_, v_size_698_);
lean_dec(v_size_698_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___redArg(lean_object* v_s_700_, lean_object* v_wsIdx_701_){
_start:
{
lean_object* v_ws_702_; lean_object* v_depIdxs_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_711_; 
v_ws_702_ = lean_ctor_get(v_s_700_, 0);
v_depIdxs_703_ = lean_ctor_get(v_s_700_, 1);
v_isSharedCheck_711_ = !lean_is_exclusive(v_s_700_);
if (v_isSharedCheck_711_ == 0)
{
v___x_705_ = v_s_700_;
v_isShared_706_ = v_isSharedCheck_711_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_depIdxs_703_);
lean_inc(v_ws_702_);
lean_dec(v_s_700_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_711_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_707_; lean_object* v___x_709_; 
v___x_707_ = lean_array_push(v_depIdxs_703_, v_wsIdx_701_);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 1, v___x_707_);
v___x_709_ = v___x_705_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_ws_702_);
lean_ctor_set(v_reuseFailAlloc_710_, 1, v___x_707_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(lean_object* v_n_712_, lean_object* v_s_713_, lean_object* v_wsIdx_714_){
_start:
{
lean_object* v_ws_715_; lean_object* v_depIdxs_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_724_; 
v_ws_715_ = lean_ctor_get(v_s_713_, 0);
v_depIdxs_716_ = lean_ctor_get(v_s_713_, 1);
v_isSharedCheck_724_ = !lean_is_exclusive(v_s_713_);
if (v_isSharedCheck_724_ == 0)
{
v___x_718_ = v_s_713_;
v_isShared_719_ = v_isSharedCheck_724_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_depIdxs_716_);
lean_inc(v_ws_715_);
lean_dec(v_s_713_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_724_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_720_; lean_object* v___x_722_; 
v___x_720_ = lean_array_push(v_depIdxs_716_, v_wsIdx_714_);
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 1, v___x_720_);
v___x_722_ = v___x_718_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_ws_715_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v___x_720_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___boxed(lean_object* v_n_725_, lean_object* v_s_726_, lean_object* v_wsIdx_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(v_n_725_, v_s_726_, v_wsIdx_727_);
lean_dec(v_n_725_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(lean_object* v_s_729_, lean_object* v_dep_730_, lean_object* v_lakeOpts_731_, lean_object* v_leanOpts_732_, uint8_t v_reconfigure_733_, lean_object* v_a_734_){
_start:
{
lean_object* v_ws_736_; lean_object* v_depIdxs_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_766_; 
v_ws_736_ = lean_ctor_get(v_s_729_, 0);
v_depIdxs_737_ = lean_ctor_get(v_s_729_, 1);
v_isSharedCheck_766_ = !lean_is_exclusive(v_s_729_);
if (v_isSharedCheck_766_ == 0)
{
v___x_739_ = v_s_729_;
v_isShared_740_ = v_isSharedCheck_766_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_depIdxs_737_);
lean_inc(v_ws_736_);
lean_dec(v_s_729_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_766_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v_packages_741_; lean_object* v_wsIdx_742_; lean_object* v___x_743_; 
v_packages_741_ = lean_ctor_get(v_ws_736_, 4);
v_wsIdx_742_ = lean_array_get_size(v_packages_741_);
v___x_743_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_736_, v_dep_730_, v_lakeOpts_731_, v_leanOpts_732_, v_reconfigure_733_, v_a_734_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_756_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
v_a_745_ = lean_ctor_get(v___x_743_, 1);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_756_ == 0)
{
v___x_747_ = v___x_743_;
v_isShared_748_ = v_isSharedCheck_756_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_inc(v_a_744_);
lean_dec(v___x_743_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_756_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_749_; lean_object* v___x_751_; 
v___x_749_ = lean_array_push(v_depIdxs_737_, v_wsIdx_742_);
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 1, v___x_749_);
lean_ctor_set(v___x_739_, 0, v_a_744_);
v___x_751_ = v___x_739_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_744_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v___x_749_);
v___x_751_ = v_reuseFailAlloc_755_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_object* v___x_753_; 
if (v_isShared_748_ == 0)
{
lean_ctor_set(v___x_747_, 0, v___x_751_);
v___x_753_ = v___x_747_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_751_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v_a_745_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
else
{
lean_object* v_a_757_; lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
lean_del_object(v___x_739_);
lean_dec_ref(v_depIdxs_737_);
v_a_757_ = lean_ctor_get(v___x_743_, 0);
v_a_758_ = lean_ctor_get(v___x_743_, 1);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_743_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_inc(v_a_757_);
lean_dec(v___x_743_);
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
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_757_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg___boxed(lean_object* v_s_767_, lean_object* v_dep_768_, lean_object* v_lakeOpts_769_, lean_object* v_leanOpts_770_, lean_object* v_reconfigure_771_, lean_object* v_a_772_, lean_object* v___y_773_){
_start:
{
uint8_t v_reconfigure_boxed_774_; lean_object* v_res_775_; 
v_reconfigure_boxed_774_ = lean_unbox(v_reconfigure_771_);
v_res_775_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(v_s_767_, v_dep_768_, v_lakeOpts_769_, v_leanOpts_770_, v_reconfigure_boxed_774_, v_a_772_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(lean_object* v_n_776_, lean_object* v_s_777_, lean_object* v_dep_778_, lean_object* v_lakeOpts_779_, lean_object* v_leanOpts_780_, uint8_t v_reconfigure_781_, lean_object* v_a_782_){
_start:
{
lean_object* v_ws_784_; lean_object* v_depIdxs_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_814_; 
v_ws_784_ = lean_ctor_get(v_s_777_, 0);
v_depIdxs_785_ = lean_ctor_get(v_s_777_, 1);
v_isSharedCheck_814_ = !lean_is_exclusive(v_s_777_);
if (v_isSharedCheck_814_ == 0)
{
v___x_787_ = v_s_777_;
v_isShared_788_ = v_isSharedCheck_814_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_depIdxs_785_);
lean_inc(v_ws_784_);
lean_dec(v_s_777_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_814_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v_packages_789_; lean_object* v_wsIdx_790_; lean_object* v___x_791_; 
v_packages_789_ = lean_ctor_get(v_ws_784_, 4);
v_wsIdx_790_ = lean_array_get_size(v_packages_789_);
v___x_791_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_784_, v_dep_778_, v_lakeOpts_779_, v_leanOpts_780_, v_reconfigure_781_, v_a_782_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v_a_792_; lean_object* v_a_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_804_; 
v_a_792_ = lean_ctor_get(v___x_791_, 0);
v_a_793_ = lean_ctor_get(v___x_791_, 1);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_804_ == 0)
{
v___x_795_ = v___x_791_;
v_isShared_796_ = v_isSharedCheck_804_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_a_793_);
lean_inc(v_a_792_);
lean_dec(v___x_791_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_804_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_797_ = lean_array_push(v_depIdxs_785_, v_wsIdx_790_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 1, v___x_797_);
lean_ctor_set(v___x_787_, 0, v_a_792_);
v___x_799_ = v___x_787_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_792_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v___x_797_);
v___x_799_ = v_reuseFailAlloc_803_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
lean_object* v___x_801_; 
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_799_);
v___x_801_ = v___x_795_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_799_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_a_793_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
}
else
{
lean_object* v_a_805_; lean_object* v_a_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_813_; 
lean_del_object(v___x_787_);
lean_dec_ref(v_depIdxs_785_);
v_a_805_ = lean_ctor_get(v___x_791_, 0);
v_a_806_ = lean_ctor_get(v___x_791_, 1);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_813_ == 0)
{
v___x_808_ = v___x_791_;
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_a_806_);
lean_inc(v_a_805_);
lean_dec(v___x_791_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
if (v_isShared_809_ == 0)
{
v___x_811_ = v___x_808_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_805_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v_a_806_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed(lean_object* v_n_815_, lean_object* v_s_816_, lean_object* v_dep_817_, lean_object* v_lakeOpts_818_, lean_object* v_leanOpts_819_, lean_object* v_reconfigure_820_, lean_object* v_a_821_, lean_object* v___y_822_){
_start:
{
uint8_t v_reconfigure_boxed_823_; lean_object* v_res_824_; 
v_reconfigure_boxed_823_ = lean_unbox(v_reconfigure_820_);
v_res_824_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(v_n_815_, v_s_816_, v_dep_817_, v_lakeOpts_818_, v_leanOpts_819_, v_reconfigure_boxed_823_, v_a_821_);
lean_dec(v_n_815_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___redArg(lean_object* v_inst_825_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = lean_apply_2(v_inst_825_, lean_box(0), lean_box(0));
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl(lean_object* v_m_827_, lean_object* v_00_u03b1_828_, lean_object* v_inst_829_, lean_object* v_inst_830_, lean_object* v_as_831_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = lean_apply_2(v_inst_829_, lean_box(0), lean_box(0));
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___boxed(lean_object* v_m_833_, lean_object* v_00_u03b1_834_, lean_object* v_inst_835_, lean_object* v_inst_836_, lean_object* v_as_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl(v_m_833_, v_00_u03b1_834_, v_inst_835_, v_inst_836_, v_as_837_);
lean_dec_ref(v_as_837_);
lean_dec(v_inst_836_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(lean_object* v_resolve_839_, lean_object* v_pkg_840_, lean_object* v_dep_841_, lean_object* v_ws_842_, lean_object* v_toBind_843_, lean_object* v___f_844_, lean_object* v_____r_845_){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = lean_apply_3(v_resolve_839_, v_pkg_840_, v_dep_841_, v_ws_842_);
v___x_847_ = lean_apply_4(v_toBind_843_, lean_box(0), lean_box(0), v___x_846_, v___f_844_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(lean_object* v_start_848_, lean_object* v_s_849_, lean_object* v_opts_850_, lean_object* v_leanOpts_851_, uint8_t v_reconfigure_852_, lean_object* v_inst_853_, lean_object* v_matDep_854_){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_855_ = lean_box(v_reconfigure_852_);
v___x_856_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed), 8, 6);
lean_closure_set(v___x_856_, 0, v_start_848_);
lean_closure_set(v___x_856_, 1, v_s_849_);
lean_closure_set(v___x_856_, 2, v_matDep_854_);
lean_closure_set(v___x_856_, 3, v_opts_850_);
lean_closure_set(v___x_856_, 4, v_leanOpts_851_);
lean_closure_set(v___x_856_, 5, v___x_855_);
v___x_857_ = lean_apply_2(v_inst_853_, lean_box(0), v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed(lean_object* v_start_858_, lean_object* v_s_859_, lean_object* v_opts_860_, lean_object* v_leanOpts_861_, lean_object* v_reconfigure_862_, lean_object* v_inst_863_, lean_object* v_matDep_864_){
_start:
{
uint8_t v_reconfigure_boxed_865_; lean_object* v_res_866_; 
v_reconfigure_boxed_865_ = lean_unbox(v_reconfigure_862_);
v_res_866_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(v_start_858_, v_s_859_, v_opts_860_, v_leanOpts_861_, v_reconfigure_boxed_865_, v_inst_863_, v_matDep_864_);
return v_res_866_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(lean_object* v_dep_867_, lean_object* v_x_868_){
_start:
{
lean_object* v_baseName_869_; lean_object* v_name_870_; uint8_t v___x_871_; 
v_baseName_869_ = lean_ctor_get(v_x_868_, 1);
v_name_870_ = lean_ctor_get(v_dep_867_, 0);
v___x_871_ = lean_name_eq(v_baseName_869_, v_name_870_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed(lean_object* v_dep_872_, lean_object* v_x_873_){
_start:
{
uint8_t v_res_874_; lean_object* v_r_875_; 
v_res_874_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(v_dep_872_, v_x_873_);
lean_dec_ref(v_x_873_);
lean_dec_ref(v_dep_872_);
v_r_875_ = lean_box(v_res_874_);
return v_r_875_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5(lean_object* v___f_876_, lean_object* v_____r_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = lean_apply_1(v___f_876_, v_____r_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(lean_object* v_toPure_880_, lean_object* v_start_881_, lean_object* v_leanOpts_882_, uint8_t v_reconfigure_883_, lean_object* v_inst_884_, lean_object* v_resolve_885_, lean_object* v_pkg_886_, lean_object* v_toBind_887_, lean_object* v_baseName_888_, lean_object* v_inst_889_, lean_object* v_dep_890_, lean_object* v_s_891_){
_start:
{
lean_object* v_ws_892_; lean_object* v_depIdxs_893_; lean_object* v_packages_894_; lean_object* v___f_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_ws_892_ = lean_ctor_get(v_s_891_, 0);
lean_inc_ref(v_ws_892_);
v_depIdxs_893_ = lean_ctor_get(v_s_891_, 1);
v_packages_894_ = lean_ctor_get(v_ws_892_, 4);
lean_inc_ref(v_dep_890_);
v___f_895_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_895_, 0, v_dep_890_);
v___x_896_ = lean_unsigned_to_nat(0u);
v___x_897_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_895_, v_packages_894_, v___x_896_);
if (lean_obj_tag(v___x_897_) == 1)
{
lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_907_; 
lean_inc_ref(v_depIdxs_893_);
lean_dec_ref(v_dep_890_);
lean_dec(v_inst_889_);
lean_dec(v_baseName_888_);
lean_dec(v_toBind_887_);
lean_dec_ref(v_pkg_886_);
lean_dec(v_resolve_885_);
lean_dec(v_inst_884_);
lean_dec_ref(v_leanOpts_882_);
lean_dec(v_start_881_);
v_isSharedCheck_907_ = !lean_is_exclusive(v_s_891_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; lean_object* v_unused_909_; 
v_unused_908_ = lean_ctor_get(v_s_891_, 1);
lean_dec(v_unused_908_);
v_unused_909_ = lean_ctor_get(v_s_891_, 0);
lean_dec(v_unused_909_);
v___x_899_ = v_s_891_;
v_isShared_900_ = v_isSharedCheck_907_;
goto v_resetjp_898_;
}
else
{
lean_dec(v_s_891_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_907_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v_val_901_; lean_object* v___x_902_; lean_object* v___x_904_; 
v_val_901_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_val_901_);
lean_dec_ref_known(v___x_897_, 1);
v___x_902_ = lean_array_push(v_depIdxs_893_, v_val_901_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 1, v___x_902_);
v___x_904_ = v___x_899_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_ws_892_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v___x_902_);
v___x_904_ = v_reuseFailAlloc_906_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
lean_object* v___x_905_; 
v___x_905_ = lean_apply_2(v_toPure_880_, lean_box(0), v___x_904_);
return v___x_905_;
}
}
}
else
{
lean_object* v_name_910_; lean_object* v_opts_911_; lean_object* v___x_912_; lean_object* v___f_913_; lean_object* v___f_914_; uint8_t v___x_915_; 
lean_dec(v___x_897_);
lean_dec(v_toPure_880_);
v_name_910_ = lean_ctor_get(v_dep_890_, 0);
v_opts_911_ = lean_ctor_get(v_dep_890_, 4);
v___x_912_ = lean_box(v_reconfigure_883_);
lean_inc(v_opts_911_);
v___f_913_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_913_, 0, v_start_881_);
lean_closure_set(v___f_913_, 1, v_s_891_);
lean_closure_set(v___f_913_, 2, v_opts_911_);
lean_closure_set(v___f_913_, 3, v_leanOpts_882_);
lean_closure_set(v___f_913_, 4, v___x_912_);
lean_closure_set(v___f_913_, 5, v_inst_884_);
lean_inc_ref(v___f_913_);
lean_inc(v_toBind_887_);
lean_inc_ref(v_ws_892_);
lean_inc_ref(v_dep_890_);
lean_inc_ref(v_pkg_886_);
lean_inc(v_resolve_885_);
v___f_914_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4), 7, 6);
lean_closure_set(v___f_914_, 0, v_resolve_885_);
lean_closure_set(v___f_914_, 1, v_pkg_886_);
lean_closure_set(v___f_914_, 2, v_dep_890_);
lean_closure_set(v___f_914_, 3, v_ws_892_);
lean_closure_set(v___f_914_, 4, v_toBind_887_);
lean_closure_set(v___f_914_, 5, v___f_913_);
v___x_915_ = lean_name_eq(v_baseName_888_, v_name_910_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; lean_object* v___x_917_; 
lean_dec_ref(v___f_914_);
lean_dec(v_inst_889_);
lean_dec(v_baseName_888_);
v___x_916_ = lean_box(0);
v___x_917_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(v_resolve_885_, v_pkg_886_, v_dep_890_, v_ws_892_, v_toBind_887_, v___f_913_, v___x_916_);
return v___x_917_;
}
else
{
lean_object* v___f_918_; uint8_t v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
lean_dec_ref(v___f_913_);
lean_dec_ref(v_ws_892_);
lean_dec_ref(v_dep_890_);
lean_dec_ref(v_pkg_886_);
lean_dec(v_resolve_885_);
v___f_918_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5), 2, 1);
lean_closure_set(v___f_918_, 0, v___f_914_);
v___x_919_ = 0;
v___x_920_ = l_Lean_Name_toString(v_baseName_888_, v___x_919_);
v___x_921_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_922_ = lean_string_append(v___x_920_, v___x_921_);
v___x_923_ = lean_apply_2(v_inst_889_, lean_box(0), v___x_922_);
v___x_924_ = lean_apply_4(v_toBind_887_, lean_box(0), lean_box(0), v___x_923_, v___f_918_);
return v___x_924_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed(lean_object* v_toPure_925_, lean_object* v_start_926_, lean_object* v_leanOpts_927_, lean_object* v_reconfigure_928_, lean_object* v_inst_929_, lean_object* v_resolve_930_, lean_object* v_pkg_931_, lean_object* v_toBind_932_, lean_object* v_baseName_933_, lean_object* v_inst_934_, lean_object* v_dep_935_, lean_object* v_s_936_){
_start:
{
uint8_t v_reconfigure_boxed_937_; lean_object* v_res_938_; 
v_reconfigure_boxed_937_ = lean_unbox(v_reconfigure_928_);
v_res_938_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(v_toPure_925_, v_start_926_, v_leanOpts_927_, v_reconfigure_boxed_937_, v_inst_929_, v_resolve_930_, v_pkg_931_, v_toBind_932_, v_baseName_933_, v_inst_934_, v_dep_935_, v_s_936_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed(lean_object* v_next_939_, lean_object* v_inst_940_, lean_object* v_inst_941_, lean_object* v_inst_942_, lean_object* v_resolve_943_, lean_object* v_leanOpts_944_, lean_object* v_reconfigure_945_, lean_object* v_ws_946_, lean_object* v_____x_947_){
_start:
{
uint8_t v_reconfigure_boxed_948_; lean_object* v_res_949_; 
v_reconfigure_boxed_948_ = lean_unbox(v_reconfigure_945_);
v_res_949_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(v_next_939_, v_inst_940_, v_inst_941_, v_inst_942_, v_resolve_943_, v_leanOpts_944_, v_reconfigure_boxed_948_, v_ws_946_, v_____x_947_);
lean_dec(v_next_939_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(lean_object* v_pkg_950_, lean_object* v_next_951_, lean_object* v_toPure_952_, lean_object* v_inst_953_, lean_object* v_inst_954_, lean_object* v_inst_955_, lean_object* v_resolve_956_, lean_object* v_leanOpts_957_, uint8_t v_reconfigure_958_, lean_object* v_toBind_959_, lean_object* v_____x_960_){
_start:
{
lean_object* v_ws_961_; lean_object* v_depIdxs_962_; lean_object* v_ws_963_; lean_object* v_packages_964_; lean_object* v___x_965_; uint8_t v___x_966_; 
v_ws_961_ = lean_ctor_get(v_____x_960_, 0);
lean_inc_ref(v_ws_961_);
v_depIdxs_962_ = lean_ctor_get(v_____x_960_, 1);
lean_inc_ref(v_depIdxs_962_);
lean_dec_ref(v_____x_960_);
v_ws_963_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_961_, v_pkg_950_, v_depIdxs_962_);
v_packages_964_ = lean_ctor_get(v_ws_963_, 4);
lean_inc_ref(v_packages_964_);
v___x_965_ = lean_array_get_size(v_packages_964_);
lean_dec_ref(v_packages_964_);
v___x_966_ = lean_nat_dec_lt(v_next_951_, v___x_965_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; 
lean_dec(v_toBind_959_);
lean_dec_ref(v_leanOpts_957_);
lean_dec(v_resolve_956_);
lean_dec(v_inst_955_);
lean_dec(v_inst_954_);
lean_dec_ref(v_inst_953_);
lean_dec(v_next_951_);
v___x_967_ = lean_apply_2(v_toPure_952_, lean_box(0), v_ws_963_);
return v___x_967_;
}
else
{
lean_object* v___x_968_; lean_object* v___f_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_968_ = lean_box(v_reconfigure_958_);
v___f_969_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_969_, 0, v_next_951_);
lean_closure_set(v___f_969_, 1, v_inst_953_);
lean_closure_set(v___f_969_, 2, v_inst_954_);
lean_closure_set(v___f_969_, 3, v_inst_955_);
lean_closure_set(v___f_969_, 4, v_resolve_956_);
lean_closure_set(v___f_969_, 5, v_leanOpts_957_);
lean_closure_set(v___f_969_, 6, v___x_968_);
lean_closure_set(v___f_969_, 7, v_ws_963_);
v___x_970_ = lean_apply_2(v_toPure_952_, lean_box(0), lean_box(0));
v___x_971_ = lean_apply_4(v_toBind_959_, lean_box(0), lean_box(0), v___x_970_, v___f_969_);
return v___x_971_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed(lean_object* v_pkg_972_, lean_object* v_next_973_, lean_object* v_toPure_974_, lean_object* v_inst_975_, lean_object* v_inst_976_, lean_object* v_inst_977_, lean_object* v_resolve_978_, lean_object* v_leanOpts_979_, lean_object* v_reconfigure_980_, lean_object* v_toBind_981_, lean_object* v_____x_982_){
_start:
{
uint8_t v_reconfigure_boxed_983_; lean_object* v_res_984_; 
v_reconfigure_boxed_983_ = lean_unbox(v_reconfigure_980_);
v_res_984_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(v_pkg_972_, v_next_973_, v_toPure_974_, v_inst_975_, v_inst_976_, v_inst_977_, v_resolve_978_, v_leanOpts_979_, v_reconfigure_boxed_983_, v_toBind_981_, v_____x_982_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(lean_object* v_inst_985_, lean_object* v_inst_986_, lean_object* v_inst_987_, lean_object* v_resolve_988_, lean_object* v_leanOpts_989_, uint8_t v_reconfigure_990_, lean_object* v_ws_991_, lean_object* v_i_992_, lean_object* v_next_993_){
_start:
{
lean_object* v_packages_994_; lean_object* v_pkg_995_; lean_object* v_toApplicative_996_; lean_object* v_baseName_997_; lean_object* v_depConfigs_998_; lean_object* v_toBind_999_; lean_object* v_toPure_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v_s_1003_; lean_object* v___x_1004_; lean_object* v___f_1005_; lean_object* v___x_1006_; uint8_t v___x_1007_; 
v_packages_994_ = lean_ctor_get(v_ws_991_, 4);
lean_inc_ref(v_packages_994_);
v_pkg_995_ = lean_array_fget(v_packages_994_, v_i_992_);
v_toApplicative_996_ = lean_ctor_get(v_inst_985_, 0);
v_baseName_997_ = lean_ctor_get(v_pkg_995_, 1);
lean_inc(v_baseName_997_);
v_depConfigs_998_ = lean_ctor_get(v_pkg_995_, 12);
lean_inc_ref(v_depConfigs_998_);
v_toBind_999_ = lean_ctor_get(v_inst_985_, 1);
lean_inc_n(v_toBind_999_, 2);
v_toPure_1000_ = lean_ctor_get(v_toApplicative_996_, 1);
v___x_1001_ = lean_array_get_size(v_depConfigs_998_);
v___x_1002_ = lean_mk_empty_array_with_capacity(v___x_1001_);
v_s_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_1003_, 0, v_ws_991_);
lean_ctor_set(v_s_1003_, 1, v___x_1002_);
v___x_1004_ = lean_box(v_reconfigure_990_);
lean_inc_ref(v_leanOpts_989_);
lean_inc(v_resolve_988_);
lean_inc(v_inst_987_);
lean_inc(v_inst_986_);
lean_inc_ref(v_inst_985_);
lean_inc(v_toPure_1000_);
lean_inc(v_pkg_995_);
v___f_1005_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed), 11, 10);
lean_closure_set(v___f_1005_, 0, v_pkg_995_);
lean_closure_set(v___f_1005_, 1, v_next_993_);
lean_closure_set(v___f_1005_, 2, v_toPure_1000_);
lean_closure_set(v___f_1005_, 3, v_inst_985_);
lean_closure_set(v___f_1005_, 4, v_inst_986_);
lean_closure_set(v___f_1005_, 5, v_inst_987_);
lean_closure_set(v___f_1005_, 6, v_resolve_988_);
lean_closure_set(v___f_1005_, 7, v_leanOpts_989_);
lean_closure_set(v___f_1005_, 8, v___x_1004_);
lean_closure_set(v___f_1005_, 9, v_toBind_999_);
v___x_1006_ = lean_unsigned_to_nat(0u);
v___x_1007_ = lean_nat_dec_lt(v___x_1006_, v___x_1001_);
if (v___x_1007_ == 0)
{
lean_object* v___x_1008_; lean_object* v___x_1009_; 
lean_inc(v_toPure_1000_);
lean_dec_ref(v_depConfigs_998_);
lean_dec(v_baseName_997_);
lean_dec(v_pkg_995_);
lean_dec_ref(v_packages_994_);
lean_dec_ref(v_leanOpts_989_);
lean_dec(v_resolve_988_);
lean_dec(v_inst_987_);
lean_dec(v_inst_986_);
lean_dec_ref(v_inst_985_);
v___x_1008_ = lean_apply_2(v_toPure_1000_, lean_box(0), v_s_1003_);
v___x_1009_ = lean_apply_4(v_toBind_999_, lean_box(0), lean_box(0), v___x_1008_, v___f_1005_);
return v___x_1009_;
}
else
{
lean_object* v_start_1010_; lean_object* v___x_1011_; lean_object* v___f_1012_; size_t v___x_1013_; size_t v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_start_1010_ = lean_array_get_size(v_packages_994_);
lean_dec_ref(v_packages_994_);
v___x_1011_ = lean_box(v_reconfigure_990_);
lean_inc(v_toBind_999_);
lean_inc(v_toPure_1000_);
v___f_1012_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed), 12, 10);
lean_closure_set(v___f_1012_, 0, v_toPure_1000_);
lean_closure_set(v___f_1012_, 1, v_start_1010_);
lean_closure_set(v___f_1012_, 2, v_leanOpts_989_);
lean_closure_set(v___f_1012_, 3, v___x_1011_);
lean_closure_set(v___f_1012_, 4, v_inst_987_);
lean_closure_set(v___f_1012_, 5, v_resolve_988_);
lean_closure_set(v___f_1012_, 6, v_pkg_995_);
lean_closure_set(v___f_1012_, 7, v_toBind_999_);
lean_closure_set(v___f_1012_, 8, v_baseName_997_);
lean_closure_set(v___f_1012_, 9, v_inst_986_);
v___x_1013_ = lean_usize_of_nat(v___x_1001_);
v___x_1014_ = ((size_t)0ULL);
v___x_1015_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_985_, v___f_1012_, v_depConfigs_998_, v___x_1013_, v___x_1014_, v_s_1003_);
v___x_1016_ = lean_apply_4(v_toBind_999_, lean_box(0), lean_box(0), v___x_1015_, v___f_1005_);
return v___x_1016_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(lean_object* v_next_1017_, lean_object* v_inst_1018_, lean_object* v_inst_1019_, lean_object* v_inst_1020_, lean_object* v_resolve_1021_, lean_object* v_leanOpts_1022_, uint8_t v_reconfigure_1023_, lean_object* v_ws_1024_, lean_object* v_____x_1025_){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = lean_unsigned_to_nat(1u);
v___x_1027_ = lean_nat_add(v_next_1017_, v___x_1026_);
v___x_1028_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1018_, v_inst_1019_, v_inst_1020_, v_resolve_1021_, v_leanOpts_1022_, v_reconfigure_1023_, v_ws_1024_, v_next_1017_, v___x_1027_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___boxed(lean_object* v_inst_1029_, lean_object* v_inst_1030_, lean_object* v_inst_1031_, lean_object* v_resolve_1032_, lean_object* v_leanOpts_1033_, lean_object* v_reconfigure_1034_, lean_object* v_ws_1035_, lean_object* v_i_1036_, lean_object* v_next_1037_){
_start:
{
uint8_t v_reconfigure_boxed_1038_; lean_object* v_res_1039_; 
v_reconfigure_boxed_1038_ = lean_unbox(v_reconfigure_1034_);
v_res_1039_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1029_, v_inst_1030_, v_inst_1031_, v_resolve_1032_, v_leanOpts_1033_, v_reconfigure_boxed_1038_, v_ws_1035_, v_i_1036_, v_next_1037_);
lean_dec(v_i_1036_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(lean_object* v_m_1040_, lean_object* v_inst_1041_, lean_object* v_inst_1042_, lean_object* v_inst_1043_, lean_object* v_resolve_1044_, lean_object* v_leanOpts_1045_, uint8_t v_reconfigure_1046_, lean_object* v_ws_1047_, lean_object* v_i_1048_, lean_object* v_i__lt_1049_, lean_object* v_next_1050_, lean_object* v_lt__next_1051_){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1041_, v_inst_1042_, v_inst_1043_, v_resolve_1044_, v_leanOpts_1045_, v_reconfigure_1046_, v_ws_1047_, v_i_1048_, v_next_1050_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___boxed(lean_object* v_m_1053_, lean_object* v_inst_1054_, lean_object* v_inst_1055_, lean_object* v_inst_1056_, lean_object* v_resolve_1057_, lean_object* v_leanOpts_1058_, lean_object* v_reconfigure_1059_, lean_object* v_ws_1060_, lean_object* v_i_1061_, lean_object* v_i__lt_1062_, lean_object* v_next_1063_, lean_object* v_lt__next_1064_){
_start:
{
uint8_t v_reconfigure_boxed_1065_; lean_object* v_res_1066_; 
v_reconfigure_boxed_1065_ = lean_unbox(v_reconfigure_1059_);
v_res_1066_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(v_m_1053_, v_inst_1054_, v_inst_1055_, v_inst_1056_, v_resolve_1057_, v_leanOpts_1058_, v_reconfigure_boxed_1065_, v_ws_1060_, v_i_1061_, v_i__lt_1062_, v_next_1063_, v_lt__next_1064_);
lean_dec(v_i_1061_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___redArg(lean_object* v_x_1067_, lean_object* v_h__1_1068_, lean_object* v_h__2_1069_){
_start:
{
if (lean_obj_tag(v_x_1067_) == 1)
{
lean_object* v_val_1070_; lean_object* v___x_1071_; 
lean_dec(v_h__2_1069_);
v_val_1070_ = lean_ctor_get(v_x_1067_, 0);
lean_inc(v_val_1070_);
lean_dec_ref_known(v_x_1067_, 1);
v___x_1071_ = lean_apply_1(v_h__1_1068_, v_val_1070_);
return v___x_1071_;
}
else
{
lean_object* v___x_1072_; 
lean_dec(v_h__1_1068_);
v___x_1072_ = lean_apply_2(v_h__2_1069_, v_x_1067_, lean_box(0));
return v___x_1072_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter(lean_object* v_ws_1073_, lean_object* v_s_1074_, lean_object* v_motive_1075_, lean_object* v_x_1076_, lean_object* v_h__1_1077_, lean_object* v_h__2_1078_){
_start:
{
if (lean_obj_tag(v_x_1076_) == 1)
{
lean_object* v_val_1079_; lean_object* v___x_1080_; 
lean_dec(v_h__2_1078_);
v_val_1079_ = lean_ctor_get(v_x_1076_, 0);
lean_inc(v_val_1079_);
lean_dec_ref_known(v_x_1076_, 1);
v___x_1080_ = lean_apply_1(v_h__1_1077_, v_val_1079_);
return v___x_1080_;
}
else
{
lean_object* v___x_1081_; 
lean_dec(v_h__1_1077_);
v___x_1081_ = lean_apply_2(v_h__2_1078_, v_x_1076_, lean_box(0));
return v___x_1081_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___boxed(lean_object* v_ws_1082_, lean_object* v_s_1083_, lean_object* v_motive_1084_, lean_object* v_x_1085_, lean_object* v_h__1_1086_, lean_object* v_h__2_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter(v_ws_1082_, v_s_1083_, v_motive_1084_, v_x_1085_, v_h__1_1086_, v_h__2_1087_);
lean_dec_ref(v_s_1083_);
lean_dec_ref(v_ws_1082_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___redArg(lean_object* v_x_1089_, lean_object* v_h__1_1090_){
_start:
{
lean_object* v_ws_1091_; lean_object* v_depIdxs_1092_; lean_object* v___x_1093_; 
v_ws_1091_ = lean_ctor_get(v_x_1089_, 0);
lean_inc_ref(v_ws_1091_);
v_depIdxs_1092_ = lean_ctor_get(v_x_1089_, 1);
lean_inc_ref(v_depIdxs_1092_);
lean_dec_ref(v_x_1089_);
v___x_1093_ = lean_apply_4(v_h__1_1090_, v_ws_1091_, v_depIdxs_1092_, lean_box(0), lean_box(0));
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter(lean_object* v_ws_1094_, lean_object* v_motive_1095_, lean_object* v_x_1096_, lean_object* v_h__1_1097_){
_start:
{
lean_object* v_ws_1098_; lean_object* v_depIdxs_1099_; lean_object* v___x_1100_; 
v_ws_1098_ = lean_ctor_get(v_x_1096_, 0);
lean_inc_ref(v_ws_1098_);
v_depIdxs_1099_ = lean_ctor_get(v_x_1096_, 1);
lean_inc_ref(v_depIdxs_1099_);
lean_dec_ref(v_x_1096_);
v___x_1100_ = lean_apply_4(v_h__1_1097_, v_ws_1098_, v_depIdxs_1099_, lean_box(0), lean_box(0));
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___boxed(lean_object* v_ws_1101_, lean_object* v_motive_1102_, lean_object* v_x_1103_, lean_object* v_h__1_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter(v_ws_1101_, v_motive_1102_, v_x_1103_, v_h__1_1104_);
lean_dec_ref(v_ws_1101_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___redArg(lean_object* v_h__1_1106_){
_start:
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_apply_1(v_h__1_1106_, lean_box(0));
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter(lean_object* v_ws_1108_, lean_object* v_motive_1109_, lean_object* v_x_1110_, lean_object* v_h__1_1111_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_apply_1(v_h__1_1111_, lean_box(0));
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___boxed(lean_object* v_ws_1113_, lean_object* v_motive_1114_, lean_object* v_x_1115_, lean_object* v_h__1_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter(v_ws_1113_, v_motive_1114_, v_x_1115_, v_h__1_1116_);
lean_dec_ref(v_ws_1113_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(lean_object* v_inst_1119_, lean_object* v_inst_1120_, lean_object* v_inst_1121_, lean_object* v_ws_1122_, lean_object* v_resolve_1123_, lean_object* v_root_1124_, lean_object* v_next_1125_, lean_object* v_leanOpts_1126_, uint8_t v_reconfigure_1127_){
_start:
{
lean_object* v_toApplicative_1128_; lean_object* v_toFunctor_1129_; lean_object* v_map_1130_; lean_object* v___f_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v_toApplicative_1128_ = lean_ctor_get(v_inst_1119_, 0);
v_toFunctor_1129_ = lean_ctor_get(v_toApplicative_1128_, 0);
v_map_1130_ = lean_ctor_get(v_toFunctor_1129_, 0);
lean_inc(v_map_1130_);
v___f_1131_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0));
v___x_1132_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1119_, v_inst_1120_, v_inst_1121_, v_resolve_1123_, v_leanOpts_1126_, v_reconfigure_1127_, v_ws_1122_, v_root_1124_, v_next_1125_);
v___x_1133_ = lean_apply_4(v_map_1130_, lean_box(0), lean_box(0), v___f_1131_, v___x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___boxed(lean_object* v_inst_1134_, lean_object* v_inst_1135_, lean_object* v_inst_1136_, lean_object* v_ws_1137_, lean_object* v_resolve_1138_, lean_object* v_root_1139_, lean_object* v_next_1140_, lean_object* v_leanOpts_1141_, lean_object* v_reconfigure_1142_){
_start:
{
uint8_t v_reconfigure_boxed_1143_; lean_object* v_res_1144_; 
v_reconfigure_boxed_1143_ = lean_unbox(v_reconfigure_1142_);
v_res_1144_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(v_inst_1134_, v_inst_1135_, v_inst_1136_, v_ws_1137_, v_resolve_1138_, v_root_1139_, v_next_1140_, v_leanOpts_1141_, v_reconfigure_boxed_1143_);
lean_dec(v_root_1139_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(lean_object* v_m_1145_, lean_object* v_inst_1146_, lean_object* v_inst_1147_, lean_object* v_inst_1148_, lean_object* v_ws_1149_, lean_object* v_resolve_1150_, lean_object* v_root_1151_, lean_object* v_root__lt_1152_, lean_object* v_next_1153_, lean_object* v_next__lt_1154_, lean_object* v_leanOpts_1155_, uint8_t v_reconfigure_1156_){
_start:
{
lean_object* v_toApplicative_1157_; lean_object* v_toFunctor_1158_; lean_object* v_map_1159_; lean_object* v___f_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v_toApplicative_1157_ = lean_ctor_get(v_inst_1146_, 0);
v_toFunctor_1158_ = lean_ctor_get(v_toApplicative_1157_, 0);
v_map_1159_ = lean_ctor_get(v_toFunctor_1158_, 0);
lean_inc(v_map_1159_);
v___f_1160_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0));
v___x_1161_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1146_, v_inst_1147_, v_inst_1148_, v_resolve_1150_, v_leanOpts_1155_, v_reconfigure_1156_, v_ws_1149_, v_root_1151_, v_next_1153_);
v___x_1162_ = lean_apply_4(v_map_1159_, lean_box(0), lean_box(0), v___f_1160_, v___x_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___boxed(lean_object* v_m_1163_, lean_object* v_inst_1164_, lean_object* v_inst_1165_, lean_object* v_inst_1166_, lean_object* v_ws_1167_, lean_object* v_resolve_1168_, lean_object* v_root_1169_, lean_object* v_root__lt_1170_, lean_object* v_next_1171_, lean_object* v_next__lt_1172_, lean_object* v_leanOpts_1173_, lean_object* v_reconfigure_1174_){
_start:
{
uint8_t v_reconfigure_boxed_1175_; lean_object* v_res_1176_; 
v_reconfigure_boxed_1175_ = lean_unbox(v_reconfigure_1174_);
v_res_1176_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(v_m_1163_, v_inst_1164_, v_inst_1165_, v_inst_1166_, v_ws_1167_, v_resolve_1168_, v_root_1169_, v_root__lt_1170_, v_next_1171_, v_next__lt_1172_, v_leanOpts_1173_, v_reconfigure_boxed_1175_);
lean_dec(v_root_1169_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run___redArg(lean_object* v_x_1177_, lean_object* v_init_1178_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = lean_apply_1(v_x_1177_, v_init_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run(lean_object* v_m_1180_, lean_object* v_00_u03b1_1181_, lean_object* v_x_1182_, lean_object* v_init_1183_){
_start:
{
lean_object* v___x_1184_; 
v___x_1184_ = lean_apply_1(v_x_1182_, v_init_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(lean_object* v_as_1185_, size_t v_i_1186_, size_t v_stop_1187_, lean_object* v_b_1188_){
_start:
{
uint8_t v___x_1189_; 
v___x_1189_ = lean_usize_dec_eq(v_i_1186_, v_stop_1187_);
if (v___x_1189_ == 0)
{
lean_object* v___x_1190_; lean_object* v_name_1191_; lean_object* v___x_1192_; size_t v___x_1193_; size_t v___x_1194_; 
v___x_1190_ = lean_array_uget_borrowed(v_as_1185_, v_i_1186_);
v_name_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc(v_name_1191_);
v___x_1192_ = l_Lean_NameSet_insert(v_b_1188_, v_name_1191_);
v___x_1193_ = ((size_t)1ULL);
v___x_1194_ = lean_usize_add(v_i_1186_, v___x_1193_);
v_i_1186_ = v___x_1194_;
v_b_1188_ = v___x_1192_;
goto _start;
}
else
{
return v_b_1188_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2___boxed(lean_object* v_as_1196_, lean_object* v_i_1197_, lean_object* v_stop_1198_, lean_object* v_b_1199_){
_start:
{
size_t v_i_boxed_1200_; size_t v_stop_boxed_1201_; lean_object* v_res_1202_; 
v_i_boxed_1200_ = lean_unbox_usize(v_i_1197_);
lean_dec(v_i_1197_);
v_stop_boxed_1201_ = lean_unbox_usize(v_stop_1198_);
lean_dec(v_stop_1198_);
v_res_1202_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(v_as_1196_, v_i_boxed_1200_, v_stop_boxed_1201_, v_b_1199_);
lean_dec_ref(v_as_1196_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(lean_object* v_as_1203_, size_t v_sz_1204_, size_t v_i_1205_, lean_object* v_b_1206_, lean_object* v___y_1207_){
_start:
{
uint8_t v___x_1209_; 
v___x_1209_ = lean_usize_dec_lt(v_i_1205_, v_sz_1204_);
if (v___x_1209_ == 0)
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1210_, 0, v_b_1206_);
lean_ctor_set(v___x_1210_, 1, v___y_1207_);
v___x_1211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1210_);
return v___x_1211_;
}
else
{
lean_object* v_a_1212_; lean_object* v_name_1213_; lean_object* v___x_1214_; size_t v___x_1215_; size_t v___x_1216_; 
v_a_1212_ = lean_array_uget_borrowed(v_as_1203_, v_i_1205_);
v_name_1213_ = lean_ctor_get(v_a_1212_, 0);
lean_inc(v_name_1213_);
v___x_1214_ = l_Lean_NameSet_insert(v_b_1206_, v_name_1213_);
v___x_1215_ = ((size_t)1ULL);
v___x_1216_ = lean_usize_add(v_i_1205_, v___x_1215_);
v_i_1205_ = v___x_1216_;
v_b_1206_ = v___x_1214_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg___boxed(lean_object* v_as_1218_, lean_object* v_sz_1219_, lean_object* v_i_1220_, lean_object* v_b_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
size_t v_sz_boxed_1224_; size_t v_i_boxed_1225_; lean_object* v_res_1226_; 
v_sz_boxed_1224_ = lean_unbox_usize(v_sz_1219_);
lean_dec(v_sz_1219_);
v_i_boxed_1225_ = lean_unbox_usize(v_i_1220_);
lean_dec(v_i_1220_);
v_res_1226_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(v_as_1218_, v_sz_boxed_1224_, v_i_boxed_1225_, v_b_1221_, v___y_1222_);
lean_dec_ref(v_as_1218_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(lean_object* v_fst_1229_, lean_object* v_init_1230_, lean_object* v_x_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
if (lean_obj_tag(v_x_1231_) == 0)
{
lean_object* v_k_1235_; lean_object* v_l_1236_; lean_object* v_r_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v_k_1235_ = lean_ctor_get(v_x_1231_, 1);
lean_inc(v_k_1235_);
v_l_1236_ = lean_ctor_get(v_x_1231_, 3);
lean_inc(v_l_1236_);
v_r_1237_ = lean_ctor_get(v_x_1231_, 4);
lean_inc(v_r_1237_);
lean_dec_ref_known(v_x_1231_, 5);
v___x_1238_ = lean_box(0);
v___x_1239_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_fst_1229_, v_init_1230_, v_l_1236_, v___y_1232_, v___y_1233_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v_a_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1258_; 
v_a_1240_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1242_ = v___x_1239_;
v_isShared_1243_ = v_isSharedCheck_1258_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_a_1240_);
lean_dec(v___x_1239_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1258_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v_snd_1244_; uint8_t v___x_1245_; 
v_snd_1244_ = lean_ctor_get(v_a_1240_, 1);
lean_inc(v_snd_1244_);
lean_dec(v_a_1240_);
v___x_1245_ = l_Lean_NameSet_contains(v_fst_1229_, v_k_1235_);
if (v___x_1245_ == 0)
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; uint8_t v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1255_; 
lean_dec(v_snd_1244_);
lean_dec(v_r_1237_);
v___x_1246_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0));
v___x_1247_ = l_Lean_Name_toString(v_k_1235_, v___x_1245_);
v___x_1248_ = lean_string_append(v___x_1246_, v___x_1247_);
lean_dec_ref(v___x_1247_);
v___x_1249_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1));
v___x_1250_ = lean_string_append(v___x_1248_, v___x_1249_);
v___x_1251_ = 3;
v___x_1252_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1252_, 0, v___x_1250_);
lean_ctor_set_uint8(v___x_1252_, sizeof(void*)*1, v___x_1251_);
lean_inc_ref(v___y_1233_);
v___x_1253_ = lean_apply_2(v___y_1233_, v___x_1252_, lean_box(0));
if (v_isShared_1243_ == 0)
{
lean_ctor_set_tag(v___x_1242_, 1);
lean_ctor_set(v___x_1242_, 0, v___x_1238_);
v___x_1255_ = v___x_1242_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1238_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
else
{
lean_del_object(v___x_1242_);
lean_dec(v_k_1235_);
v_init_1230_ = v___x_1238_;
v_x_1231_ = v_r_1237_;
v___y_1232_ = v_snd_1244_;
goto _start;
}
}
}
else
{
lean_dec(v_r_1237_);
lean_dec(v_k_1235_);
return v___x_1239_;
}
}
else
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1259_, 0, v_init_1230_);
v___x_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
lean_ctor_set(v___x_1260_, 1, v___y_1232_);
v___x_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
return v___x_1261_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___boxed(lean_object* v_fst_1262_, lean_object* v_init_1263_, lean_object* v_x_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_fst_1262_, v_init_1263_, v_x_1264_, v___y_1265_, v___y_1266_);
lean_dec_ref(v___y_1266_);
lean_dec(v_fst_1262_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(lean_object* v_toUpdate_1269_, lean_object* v___x_1270_, lean_object* v___x_1271_, lean_object* v_entries_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
lean_object* v___y_1277_; uint8_t v___x_1319_; 
v___x_1319_ = l_Lean_NameSet_isEmpty(v_toUpdate_1269_);
if (v___x_1319_ == 0)
{
lean_object* v_depConfigs_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; uint8_t v___x_1323_; 
v_depConfigs_1320_ = lean_ctor_get(v___x_1270_, 12);
v___x_1321_ = l_Lean_NameSet_empty;
v___x_1322_ = lean_array_get_size(v_depConfigs_1320_);
v___x_1323_ = lean_nat_dec_lt(v___x_1271_, v___x_1322_);
if (v___x_1323_ == 0)
{
v___y_1277_ = v___x_1321_;
goto v___jp_1276_;
}
else
{
uint8_t v___x_1324_; 
v___x_1324_ = lean_nat_dec_le(v___x_1322_, v___x_1322_);
if (v___x_1324_ == 0)
{
if (v___x_1323_ == 0)
{
v___y_1277_ = v___x_1321_;
goto v___jp_1276_;
}
else
{
size_t v___x_1325_; size_t v___x_1326_; lean_object* v___x_1327_; 
v___x_1325_ = ((size_t)0ULL);
v___x_1326_ = lean_usize_of_nat(v___x_1322_);
v___x_1327_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(v_depConfigs_1320_, v___x_1325_, v___x_1326_, v___x_1321_);
v___y_1277_ = v___x_1327_;
goto v___jp_1276_;
}
}
else
{
size_t v___x_1328_; size_t v___x_1329_; lean_object* v___x_1330_; 
v___x_1328_ = ((size_t)0ULL);
v___x_1329_ = lean_usize_of_nat(v___x_1322_);
v___x_1330_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(v_depConfigs_1320_, v___x_1328_, v___x_1329_, v___x_1321_);
v___y_1277_ = v___x_1330_;
goto v___jp_1276_;
}
}
}
else
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
lean_dec(v_toUpdate_1269_);
v___x_1331_ = lean_box(0);
v___x_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1331_);
lean_ctor_set(v___x_1332_, 1, v___y_1273_);
v___x_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
return v___x_1333_;
}
v___jp_1276_:
{
size_t v_sz_1278_; size_t v___x_1279_; lean_object* v___x_1280_; 
v_sz_1278_ = lean_array_size(v_entries_1272_);
v___x_1279_ = ((size_t)0ULL);
v___x_1280_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(v_entries_1272_, v_sz_1278_, v___x_1279_, v___y_1277_, v___y_1273_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v_fst_1282_; lean_object* v_snd_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_a_1281_);
lean_dec_ref_known(v___x_1280_, 1);
v_fst_1282_ = lean_ctor_get(v_a_1281_, 0);
lean_inc(v_fst_1282_);
v_snd_1283_ = lean_ctor_get(v_a_1281_, 1);
lean_inc(v_snd_1283_);
lean_dec(v_a_1281_);
v___x_1284_ = lean_box(0);
v___x_1285_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_fst_1282_, v___x_1284_, v_toUpdate_1269_, v_snd_1283_, v___y_1274_);
lean_dec(v_fst_1282_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1302_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1288_ = v___x_1285_;
v_isShared_1289_ = v_isSharedCheck_1302_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1285_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1302_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v_snd_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1300_; 
v_snd_1290_ = lean_ctor_get(v_a_1286_, 1);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_a_1286_);
if (v_isSharedCheck_1300_ == 0)
{
lean_object* v_unused_1301_; 
v_unused_1301_ = lean_ctor_get(v_a_1286_, 0);
lean_dec(v_unused_1301_);
v___x_1292_ = v_a_1286_;
v_isShared_1293_ = v_isSharedCheck_1300_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_snd_1290_);
lean_dec(v_a_1286_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1300_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v___x_1284_);
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v___x_1284_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v_snd_1290_);
v___x_1295_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
lean_object* v___x_1297_; 
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1295_);
v___x_1297_ = v___x_1288_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
}
else
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
v_a_1303_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1285_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1285_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
lean_dec(v_toUpdate_1269_);
v_a_1311_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1280_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1280_);
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
v_reuseFailAlloc_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_a_1311_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0___boxed(lean_object* v_toUpdate_1334_, lean_object* v___x_1335_, lean_object* v___x_1336_, lean_object* v_entries_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_1334_, v___x_1335_, v___x_1336_, v_entries_1337_, v___y_1338_, v___y_1339_);
lean_dec_ref(v___y_1339_);
lean_dec_ref(v_entries_1337_);
lean_dec(v___x_1336_);
lean_dec_ref(v___x_1335_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(lean_object* v_as_1342_, size_t v_i_1343_, size_t v_stop_1344_, lean_object* v_b_1345_, lean_object* v___y_1346_){
_start:
{
uint8_t v___x_1348_; 
v___x_1348_ = lean_usize_dec_eq(v_i_1343_, v_stop_1344_);
if (v___x_1348_ == 0)
{
lean_object* v___x_1349_; lean_object* v___x_1350_; size_t v___x_1351_; size_t v___x_1352_; 
v___x_1349_ = lean_array_uget_borrowed(v_as_1342_, v_i_1343_);
lean_inc_ref(v___y_1346_);
lean_inc(v___x_1349_);
v___x_1350_ = lean_apply_2(v___y_1346_, v___x_1349_, lean_box(0));
v___x_1351_ = ((size_t)1ULL);
v___x_1352_ = lean_usize_add(v_i_1343_, v___x_1351_);
v_i_1343_ = v___x_1352_;
v_b_1345_ = v___x_1350_;
goto _start;
}
else
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1354_, 0, v_b_1345_);
return v___x_1354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3___boxed(lean_object* v_as_1355_, lean_object* v_i_1356_, lean_object* v_stop_1357_, lean_object* v_b_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
size_t v_i_boxed_1361_; size_t v_stop_boxed_1362_; lean_object* v_res_1363_; 
v_i_boxed_1361_ = lean_unbox_usize(v_i_1356_);
lean_dec(v_i_1356_);
v_stop_boxed_1362_ = lean_unbox_usize(v_stop_1357_);
lean_dec(v_stop_1357_);
v_res_1363_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_as_1355_, v_i_boxed_1361_, v_stop_boxed_1362_, v_b_1358_, v___y_1359_);
lean_dec_ref(v___y_1359_);
lean_dec_ref(v_as_1355_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(lean_object* v_toUpdate_1364_, lean_object* v_as_1365_, size_t v_i_1366_, size_t v_stop_1367_, lean_object* v_b_1368_, lean_object* v___y_1369_){
_start:
{
lean_object* v_fst_1372_; lean_object* v_snd_1373_; uint8_t v___x_1379_; 
v___x_1379_ = lean_usize_dec_eq(v_i_1366_, v_stop_1367_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; uint8_t v_inherited_1381_; 
v___x_1380_ = lean_array_uget_borrowed(v_as_1365_, v_i_1366_);
v_inherited_1381_ = lean_ctor_get_uint8(v___x_1380_, sizeof(void*)*5);
if (v_inherited_1381_ == 0)
{
lean_object* v_name_1382_; uint8_t v___x_1383_; 
v_name_1382_ = lean_ctor_get(v___x_1380_, 0);
v___x_1383_ = l_Lean_NameSet_contains(v_toUpdate_1364_, v_name_1382_);
if (v___x_1383_ == 0)
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = lean_box(0);
lean_inc(v___x_1380_);
lean_inc(v_name_1382_);
v___x_1385_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1382_, v___x_1380_, v___y_1369_);
v_fst_1372_ = v___x_1384_;
v_snd_1373_ = v___x_1385_;
goto v___jp_1371_;
}
else
{
goto v___jp_1377_;
}
}
else
{
goto v___jp_1377_;
}
}
else
{
lean_object* v___x_1386_; lean_object* v___x_1387_; 
v___x_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1386_, 0, v_b_1368_);
lean_ctor_set(v___x_1386_, 1, v___y_1369_);
v___x_1387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1386_);
return v___x_1387_;
}
v___jp_1371_:
{
size_t v___x_1374_; size_t v___x_1375_; 
v___x_1374_ = ((size_t)1ULL);
v___x_1375_ = lean_usize_add(v_i_1366_, v___x_1374_);
v_i_1366_ = v___x_1375_;
v_b_1368_ = v_fst_1372_;
v___y_1369_ = v_snd_1373_;
goto _start;
}
v___jp_1377_:
{
lean_object* v___x_1378_; 
v___x_1378_ = lean_box(0);
v_fst_1372_ = v___x_1378_;
v_snd_1373_ = v___y_1369_;
goto v___jp_1371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg___boxed(lean_object* v_toUpdate_1388_, lean_object* v_as_1389_, lean_object* v_i_1390_, lean_object* v_stop_1391_, lean_object* v_b_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_){
_start:
{
size_t v_i_boxed_1395_; size_t v_stop_boxed_1396_; lean_object* v_res_1397_; 
v_i_boxed_1395_ = lean_unbox_usize(v_i_1390_);
lean_dec(v_i_1390_);
v_stop_boxed_1396_ = lean_unbox_usize(v_stop_1391_);
lean_dec(v_stop_1391_);
v_res_1397_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1388_, v_as_1389_, v_i_boxed_1395_, v_stop_boxed_1396_, v_b_1392_, v___y_1393_);
lean_dec_ref(v_as_1389_);
lean_dec(v_toUpdate_1388_);
return v_res_1397_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5(void){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1404_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1405_ = lean_array_get_size(v___x_1404_);
return v___x_1405_;
}
}
static uint8_t _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6(void){
_start:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1406_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5);
v___x_1407_ = lean_unsigned_to_nat(0u);
v___x_1408_ = lean_nat_dec_lt(v___x_1407_, v___x_1406_);
return v___x_1408_;
}
}
static size_t _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7(void){
_start:
{
lean_object* v___x_1409_; size_t v___x_1410_; 
v___x_1409_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5);
v___x_1410_ = lean_usize_of_nat(v___x_1409_);
return v___x_1410_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest(lean_object* v_ws_1413_, lean_object* v_toUpdate_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v___y_1419_; lean_object* v___y_1424_; lean_object* v_fst_1425_; lean_object* v_snd_1426_; lean_object* v_packages_1445_; lean_object* v___x_1446_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v___y_1450_; lean_object* v_val_1451_; lean_object* v___y_1467_; lean_object* v___y_1468_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___x_1487_; lean_object* v_baseName_1488_; lean_object* v_dir_1489_; lean_object* v_config_1490_; lean_object* v_relManifestFile_1491_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; uint8_t v_fst_1496_; lean_object* v_snd_1497_; lean_object* v_packagesDir_x3f_1518_; lean_object* v___y_1519_; lean_object* v___y_1520_; lean_object* v___y_1542_; lean_object* v___y_1543_; uint8_t v___x_1547_; lean_object* v_rootName_1548_; lean_object* v_fst_1550_; lean_object* v_snd_1551_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v_val_1621_; lean_object* v___x_1635_; 
v_packages_1445_ = lean_ctor_get(v_ws_1413_, 4);
v___x_1446_ = lean_unsigned_to_nat(0u);
v___x_1487_ = lean_array_fget_borrowed(v_packages_1445_, v___x_1446_);
v_baseName_1488_ = lean_ctor_get(v___x_1487_, 1);
v_dir_1489_ = lean_ctor_get(v___x_1487_, 4);
v_config_1490_ = lean_ctor_get(v___x_1487_, 6);
v_relManifestFile_1491_ = lean_ctor_get(v___x_1487_, 9);
v___x_1547_ = 0;
lean_inc(v_baseName_1488_);
v_rootName_1548_ = l_Lean_Name_toString(v_baseName_1488_, v___x_1547_);
lean_inc_ref(v_relManifestFile_1491_);
lean_inc_ref(v_dir_1489_);
v___x_1618_ = l_Lake_joinRelative(v_dir_1489_, v_relManifestFile_1491_);
v___x_1619_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1635_ = l_Lake_Manifest_load(v___x_1618_);
if (lean_obj_tag(v___x_1635_) == 0)
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
lean_ctor_set_tag(v___x_1638_, 1);
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
v_val_1621_ = v___x_1641_;
goto v___jp_1620_;
}
}
}
else
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
v_a_1644_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1646_ = v___x_1635_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1635_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
lean_ctor_set_tag(v___x_1646_, 0);
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1644_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
v_val_1621_ = v___x_1649_;
goto v___jp_1620_;
}
}
}
v___jp_1418_:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1420_ = lean_box(0);
v___x_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
lean_ctor_set(v___x_1421_, 1, v___y_1419_);
v___x_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
return v___x_1422_;
}
v___jp_1423_:
{
if (lean_obj_tag(v_fst_1425_) == 0)
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1441_; 
lean_dec(v_snd_1426_);
v_a_1427_ = lean_ctor_get(v_fst_1425_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v_fst_1425_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1429_ = v_fst_1425_;
v_isShared_1430_ = v_isSharedCheck_1441_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v_fst_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1441_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; uint8_t v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1431_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0));
v___x_1432_ = lean_io_error_to_string(v_a_1427_);
v___x_1433_ = lean_string_append(v___x_1431_, v___x_1432_);
lean_dec_ref(v___x_1432_);
v___x_1434_ = 3;
v___x_1435_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1435_, 0, v___x_1433_);
lean_ctor_set_uint8(v___x_1435_, sizeof(void*)*1, v___x_1434_);
lean_inc_ref(v___y_1424_);
v___x_1436_ = lean_apply_2(v___y_1424_, v___x_1435_, lean_box(0));
v___x_1437_ = lean_box(0);
if (v_isShared_1430_ == 0)
{
lean_ctor_set_tag(v___x_1429_, 1);
lean_ctor_set(v___x_1429_, 0, v___x_1437_);
v___x_1439_ = v___x_1429_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
else
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; 
lean_dec_ref(v_fst_1425_);
v___x_1442_ = lean_box(0);
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
lean_ctor_set(v___x_1443_, 1, v_snd_1426_);
v___x_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
return v___x_1444_;
}
}
v___jp_1447_:
{
lean_object* v___x_1452_; uint8_t v___x_1453_; 
v___x_1452_ = lean_array_get_size(v___y_1449_);
v___x_1453_ = lean_nat_dec_lt(v___x_1446_, v___x_1452_);
if (v___x_1453_ == 0)
{
v___y_1424_ = v___y_1448_;
v_fst_1425_ = v_val_1451_;
v_snd_1426_ = v___y_1450_;
goto v___jp_1423_;
}
else
{
lean_object* v___x_1454_; size_t v___x_1455_; size_t v___x_1456_; lean_object* v___x_1457_; 
v___x_1454_ = lean_box(0);
v___x_1455_ = ((size_t)0ULL);
v___x_1456_ = lean_usize_of_nat(v___x_1452_);
v___x_1457_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___y_1449_, v___x_1455_, v___x_1456_, v___x_1454_, v___y_1448_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_dec_ref_known(v___x_1457_, 1);
v___y_1424_ = v___y_1448_;
v_fst_1425_ = v_val_1451_;
v_snd_1426_ = v___y_1450_;
goto v___jp_1423_;
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec_ref(v_val_1451_);
lean_dec(v___y_1450_);
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1457_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1457_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1457_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
v___jp_1466_:
{
if (lean_obj_tag(v___y_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
v_a_1471_ = lean_ctor_get(v___y_1470_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___y_1470_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___y_1470_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___y_1470_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
lean_ctor_set_tag(v___x_1473_, 1);
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
v___y_1448_ = v___y_1467_;
v___y_1449_ = v___y_1468_;
v___y_1450_ = v___y_1469_;
v_val_1451_ = v___x_1476_;
goto v___jp_1447_;
}
}
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
v_a_1479_ = lean_ctor_get(v___y_1470_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___y_1470_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___y_1470_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___y_1470_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set_tag(v___x_1481_, 0);
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
v___y_1448_ = v___y_1467_;
v___y_1449_ = v___y_1468_;
v___y_1450_ = v___y_1469_;
v_val_1451_ = v___x_1484_;
goto v___jp_1447_;
}
}
}
}
v___jp_1492_:
{
lean_object* v_toWorkspaceConfig_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; uint8_t v___x_1502_; 
v_toWorkspaceConfig_1498_ = lean_ctor_get(v_config_1490_, 0);
v___x_1499_ = l_System_FilePath_normalize(v___y_1494_);
lean_inc_ref(v_toWorkspaceConfig_1498_);
v___x_1500_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1498_);
lean_inc_ref(v___x_1500_);
v___x_1501_ = l_System_FilePath_normalize(v___x_1500_);
v___x_1502_ = lean_string_dec_eq(v___x_1499_, v___x_1501_);
lean_dec_ref(v___x_1501_);
lean_dec_ref(v___x_1499_);
if (v___x_1502_ == 0)
{
if (v_fst_1496_ == 0)
{
lean_dec_ref(v___x_1500_);
lean_dec_ref(v___y_1495_);
v___y_1419_ = v_snd_1497_;
goto v___jp_1418_;
}
else
{
lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1503_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1));
v___x_1504_ = lean_string_append(v___x_1503_, v___y_1495_);
v___x_1505_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2));
v___x_1506_ = lean_string_append(v___x_1504_, v___x_1505_);
lean_inc_ref(v_dir_1489_);
v___x_1507_ = l_Lake_joinRelative(v_dir_1489_, v___x_1500_);
v___x_1508_ = lean_string_append(v___x_1506_, v___x_1507_);
v___x_1509_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_1510_ = lean_string_append(v___x_1508_, v___x_1509_);
v___x_1511_ = 1;
v___x_1512_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1512_, 0, v___x_1510_);
lean_ctor_set_uint8(v___x_1512_, sizeof(void*)*1, v___x_1511_);
lean_inc_ref(v___y_1493_);
v___x_1513_ = lean_apply_2(v___y_1493_, v___x_1512_, lean_box(0));
v___x_1514_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___x_1507_);
v___x_1515_ = l_Lake_createParentDirs(v___x_1507_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v___x_1516_; 
lean_dec_ref_known(v___x_1515_, 1);
v___x_1516_ = lean_io_rename(v___y_1495_, v___x_1507_);
lean_dec_ref(v___x_1507_);
lean_dec_ref(v___y_1495_);
v___y_1467_ = v___y_1493_;
v___y_1468_ = v___x_1514_;
v___y_1469_ = v_snd_1497_;
v___y_1470_ = v___x_1516_;
goto v___jp_1466_;
}
else
{
lean_dec_ref(v___x_1507_);
lean_dec_ref(v___y_1495_);
v___y_1467_ = v___y_1493_;
v___y_1468_ = v___x_1514_;
v___y_1469_ = v_snd_1497_;
v___y_1470_ = v___x_1515_;
goto v___jp_1466_;
}
}
}
else
{
lean_dec_ref(v___x_1500_);
lean_dec_ref(v___y_1495_);
v___y_1419_ = v_snd_1497_;
goto v___jp_1418_;
}
}
v___jp_1517_:
{
if (lean_obj_tag(v_packagesDir_x3f_1518_) == 1)
{
lean_object* v_val_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; uint8_t v___x_1525_; 
v_val_1521_ = lean_ctor_get(v_packagesDir_x3f_1518_, 0);
lean_inc_n(v_val_1521_, 2);
lean_dec_ref_known(v_packagesDir_x3f_1518_, 1);
lean_inc_ref(v_dir_1489_);
v___x_1522_ = l_Lake_joinRelative(v_dir_1489_, v_val_1521_);
v___x_1523_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1524_ = l_System_FilePath_pathExists(v___x_1522_);
v___x_1525_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_1525_ == 0)
{
v___y_1493_ = v___y_1520_;
v___y_1494_ = v_val_1521_;
v___y_1495_ = v___x_1522_;
v_fst_1496_ = v___x_1524_;
v_snd_1497_ = v___y_1519_;
goto v___jp_1492_;
}
else
{
lean_object* v___x_1526_; size_t v___x_1527_; size_t v___x_1528_; lean_object* v___x_1529_; 
v___x_1526_ = lean_box(0);
v___x_1527_ = ((size_t)0ULL);
v___x_1528_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
v___x_1529_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___x_1523_, v___x_1527_, v___x_1528_, v___x_1526_, v___y_1520_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_dec_ref_known(v___x_1529_, 1);
v___y_1493_ = v___y_1520_;
v___y_1494_ = v_val_1521_;
v___y_1495_ = v___x_1522_;
v_fst_1496_ = v___x_1524_;
v_snd_1497_ = v___y_1519_;
goto v___jp_1492_;
}
else
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1537_; 
lean_dec_ref(v___x_1522_);
lean_dec(v_val_1521_);
lean_dec(v___y_1519_);
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1532_ = v___x_1529_;
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1529_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1537_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1535_; 
if (v_isShared_1533_ == 0)
{
v___x_1535_ = v___x_1532_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_a_1530_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
}
else
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
lean_dec(v_packagesDir_x3f_1518_);
v___x_1538_ = lean_box(0);
v___x_1539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1538_);
lean_ctor_set(v___x_1539_, 1, v___y_1519_);
v___x_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1539_);
return v___x_1540_;
}
}
v___jp_1541_:
{
if (lean_obj_tag(v___y_1543_) == 0)
{
lean_object* v_a_1544_; lean_object* v_snd_1545_; lean_object* v_packagesDir_x3f_1546_; 
v_a_1544_ = lean_ctor_get(v___y_1543_, 0);
lean_inc(v_a_1544_);
lean_dec_ref_known(v___y_1543_, 1);
v_snd_1545_ = lean_ctor_get(v_a_1544_, 1);
lean_inc(v_snd_1545_);
lean_dec(v_a_1544_);
v_packagesDir_x3f_1546_ = lean_ctor_get(v___y_1542_, 2);
lean_inc(v_packagesDir_x3f_1546_);
lean_dec_ref(v___y_1542_);
v_packagesDir_x3f_1518_ = v_packagesDir_x3f_1546_;
v___y_1519_ = v_snd_1545_;
v___y_1520_ = v___y_1416_;
goto v___jp_1517_;
}
else
{
lean_dec_ref(v___y_1542_);
return v___y_1543_;
}
}
v___jp_1549_:
{
if (lean_obj_tag(v_fst_1550_) == 0)
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1600_; 
v_a_1552_ = lean_ctor_get(v_fst_1550_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v_fst_1550_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1554_ = v_fst_1550_;
v_isShared_1555_ = v_isSharedCheck_1600_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v_fst_1550_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1600_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
if (lean_obj_tag(v_a_1552_) == 11)
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
lean_dec_ref_known(v_a_1552_, 2);
lean_del_object(v___x_1554_);
v___x_1556_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_1557_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_1414_, v___x_1487_, v___x_1446_, v___x_1556_, v_snd_1551_, v___y_1416_);
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1579_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1560_ = v___x_1557_;
v_isShared_1561_ = v_isSharedCheck_1579_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1557_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1579_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v_snd_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1577_; 
v_snd_1562_ = lean_ctor_get(v_a_1558_, 1);
v_isSharedCheck_1577_ = !lean_is_exclusive(v_a_1558_);
if (v_isSharedCheck_1577_ == 0)
{
lean_object* v_unused_1578_; 
v_unused_1578_ = lean_ctor_get(v_a_1558_, 0);
lean_dec(v_unused_1578_);
v___x_1564_ = v_a_1558_;
v_isShared_1565_ = v_isSharedCheck_1577_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_snd_1562_);
lean_dec(v_a_1558_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1577_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; uint8_t v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1572_; 
v___x_1566_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8));
v___x_1567_ = lean_string_append(v_rootName_1548_, v___x_1566_);
v___x_1568_ = 1;
v___x_1569_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1569_, 0, v___x_1567_);
lean_ctor_set_uint8(v___x_1569_, sizeof(void*)*1, v___x_1568_);
lean_inc_ref(v___y_1416_);
v___x_1570_ = lean_apply_2(v___y_1416_, v___x_1569_, lean_box(0));
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v___x_1570_);
v___x_1572_ = v___x_1564_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v___x_1570_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v_snd_1562_);
v___x_1572_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
lean_object* v___x_1574_; 
if (v_isShared_1561_ == 0)
{
lean_ctor_set(v___x_1560_, 0, v___x_1572_);
v___x_1574_ = v___x_1560_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v___x_1572_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
}
else
{
lean_dec_ref(v_rootName_1548_);
return v___x_1557_;
}
}
else
{
uint8_t v___x_1580_; 
v___x_1580_ = l_Lean_NameSet_isEmpty(v_toUpdate_1414_);
lean_dec(v_toUpdate_1414_);
if (v___x_1580_ == 0)
{
lean_object* v___x_1581_; uint8_t v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1587_; 
lean_dec(v_snd_1551_);
lean_dec_ref(v_rootName_1548_);
v___x_1581_ = lean_io_error_to_string(v_a_1552_);
v___x_1582_ = 3;
v___x_1583_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1583_, 0, v___x_1581_);
lean_ctor_set_uint8(v___x_1583_, sizeof(void*)*1, v___x_1582_);
lean_inc_ref(v___y_1416_);
v___x_1584_ = lean_apply_2(v___y_1416_, v___x_1583_, lean_box(0));
v___x_1585_ = lean_box(0);
if (v_isShared_1555_ == 0)
{
lean_ctor_set_tag(v___x_1554_, 1);
lean_ctor_set(v___x_1554_, 0, v___x_1585_);
v___x_1587_ = v___x_1554_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v___x_1585_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
else
{
lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1598_; 
v___x_1589_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9));
v___x_1590_ = lean_string_append(v_rootName_1548_, v___x_1589_);
v___x_1591_ = lean_io_error_to_string(v_a_1552_);
v___x_1592_ = lean_string_append(v___x_1590_, v___x_1591_);
lean_dec_ref(v___x_1591_);
v___x_1593_ = 2;
v___x_1594_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1594_, 0, v___x_1592_);
lean_ctor_set_uint8(v___x_1594_, sizeof(void*)*1, v___x_1593_);
lean_inc_ref(v___y_1416_);
v___x_1595_ = lean_apply_2(v___y_1416_, v___x_1594_, lean_box(0));
v___x_1596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1595_);
lean_ctor_set(v___x_1596_, 1, v_snd_1551_);
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 0, v___x_1596_);
v___x_1598_ = v___x_1554_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v___x_1596_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
return v___x_1598_;
}
}
}
}
}
else
{
lean_object* v_a_1601_; lean_object* v_packagesDir_x3f_1602_; lean_object* v_packages_1603_; lean_object* v___x_1604_; 
lean_dec_ref(v_rootName_1548_);
v_a_1601_ = lean_ctor_get(v_fst_1550_, 0);
lean_inc(v_a_1601_);
lean_dec_ref_known(v_fst_1550_, 1);
v_packagesDir_x3f_1602_ = lean_ctor_get(v_a_1601_, 2);
v_packages_1603_ = lean_ctor_get(v_a_1601_, 3);
lean_inc(v_toUpdate_1414_);
v___x_1604_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_1414_, v___x_1487_, v___x_1446_, v_packages_1603_, v_snd_1551_, v___y_1416_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_object* v_a_1605_; lean_object* v_snd_1606_; uint8_t v___x_1607_; 
v_a_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_a_1605_);
lean_dec_ref_known(v___x_1604_, 1);
v_snd_1606_ = lean_ctor_get(v_a_1605_, 1);
lean_inc(v_snd_1606_);
lean_dec(v_a_1605_);
v___x_1607_ = l_Lean_NameSet_isEmpty(v_toUpdate_1414_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; uint8_t v___x_1609_; 
v___x_1608_ = lean_array_get_size(v_packages_1603_);
v___x_1609_ = lean_nat_dec_lt(v___x_1446_, v___x_1608_);
if (v___x_1609_ == 0)
{
lean_inc(v_packagesDir_x3f_1602_);
lean_dec(v_a_1601_);
lean_dec(v_toUpdate_1414_);
v_packagesDir_x3f_1518_ = v_packagesDir_x3f_1602_;
v___y_1519_ = v_snd_1606_;
v___y_1520_ = v___y_1416_;
goto v___jp_1517_;
}
else
{
lean_object* v___x_1610_; uint8_t v___x_1611_; 
v___x_1610_ = lean_box(0);
v___x_1611_ = lean_nat_dec_le(v___x_1608_, v___x_1608_);
if (v___x_1611_ == 0)
{
if (v___x_1609_ == 0)
{
lean_inc(v_packagesDir_x3f_1602_);
lean_dec(v_a_1601_);
lean_dec(v_toUpdate_1414_);
v_packagesDir_x3f_1518_ = v_packagesDir_x3f_1602_;
v___y_1519_ = v_snd_1606_;
v___y_1520_ = v___y_1416_;
goto v___jp_1517_;
}
else
{
size_t v___x_1612_; size_t v___x_1613_; lean_object* v___x_1614_; 
v___x_1612_ = ((size_t)0ULL);
v___x_1613_ = lean_usize_of_nat(v___x_1608_);
v___x_1614_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1414_, v_packages_1603_, v___x_1612_, v___x_1613_, v___x_1610_, v_snd_1606_);
lean_dec(v_toUpdate_1414_);
v___y_1542_ = v_a_1601_;
v___y_1543_ = v___x_1614_;
goto v___jp_1541_;
}
}
else
{
size_t v___x_1615_; size_t v___x_1616_; lean_object* v___x_1617_; 
v___x_1615_ = ((size_t)0ULL);
v___x_1616_ = lean_usize_of_nat(v___x_1608_);
v___x_1617_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1414_, v_packages_1603_, v___x_1615_, v___x_1616_, v___x_1610_, v_snd_1606_);
lean_dec(v_toUpdate_1414_);
v___y_1542_ = v_a_1601_;
v___y_1543_ = v___x_1617_;
goto v___jp_1541_;
}
}
}
else
{
lean_inc(v_packagesDir_x3f_1602_);
lean_dec(v_a_1601_);
lean_dec(v_toUpdate_1414_);
v_packagesDir_x3f_1518_ = v_packagesDir_x3f_1602_;
v___y_1519_ = v_snd_1606_;
v___y_1520_ = v___y_1416_;
goto v___jp_1517_;
}
}
else
{
lean_dec(v_a_1601_);
lean_dec(v_toUpdate_1414_);
return v___x_1604_;
}
}
}
v___jp_1620_:
{
uint8_t v___x_1622_; 
v___x_1622_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_1622_ == 0)
{
v_fst_1550_ = v_val_1621_;
v_snd_1551_ = v___y_1415_;
goto v___jp_1549_;
}
else
{
lean_object* v___x_1623_; size_t v___x_1624_; size_t v___x_1625_; lean_object* v___x_1626_; 
v___x_1623_ = lean_box(0);
v___x_1624_ = ((size_t)0ULL);
v___x_1625_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
v___x_1626_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___x_1619_, v___x_1624_, v___x_1625_, v___x_1623_, v___y_1416_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_dec_ref_known(v___x_1626_, 1);
v_fst_1550_ = v_val_1621_;
v_snd_1551_ = v___y_1415_;
goto v___jp_1549_;
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_dec_ref(v_val_1621_);
lean_dec_ref(v_rootName_1548_);
lean_dec(v___y_1415_);
lean_dec(v_toUpdate_1414_);
v_a_1627_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1626_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1626_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___boxed(lean_object* v_ws_1652_, lean_object* v_toUpdate_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest(v_ws_1652_, v_toUpdate_1653_, v___y_1654_, v___y_1655_);
lean_dec_ref(v___y_1655_);
lean_dec_ref(v_ws_1652_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(lean_object* v_as_1658_, size_t v_sz_1659_, size_t v_i_1660_, lean_object* v_b_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(v_as_1658_, v_sz_1659_, v_i_1660_, v_b_1661_, v___y_1662_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___boxed(lean_object* v_as_1666_, lean_object* v_sz_1667_, lean_object* v_i_1668_, lean_object* v_b_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
size_t v_sz_boxed_1673_; size_t v_i_boxed_1674_; lean_object* v_res_1675_; 
v_sz_boxed_1673_ = lean_unbox_usize(v_sz_1667_);
lean_dec(v_sz_1667_);
v_i_boxed_1674_ = lean_unbox_usize(v_i_1668_);
lean_dec(v_i_1668_);
v_res_1675_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_as_1666_, v_sz_boxed_1673_, v_i_boxed_1674_, v_b_1669_, v___y_1670_, v___y_1671_);
lean_dec_ref(v___y_1671_);
lean_dec_ref(v_as_1666_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4(lean_object* v_toUpdate_1676_, lean_object* v_as_1677_, size_t v_i_1678_, size_t v_stop_1679_, lean_object* v_b_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v___x_1684_; 
v___x_1684_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1676_, v_as_1677_, v_i_1678_, v_stop_1679_, v_b_1680_, v___y_1681_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___boxed(lean_object* v_toUpdate_1685_, lean_object* v_as_1686_, lean_object* v_i_1687_, lean_object* v_stop_1688_, lean_object* v_b_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
size_t v_i_boxed_1693_; size_t v_stop_boxed_1694_; lean_object* v_res_1695_; 
v_i_boxed_1693_ = lean_unbox_usize(v_i_1687_);
lean_dec(v_i_1687_);
v_stop_boxed_1694_ = lean_unbox_usize(v_stop_1688_);
lean_dec(v_stop_1688_);
v_res_1695_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4(v_toUpdate_1685_, v_as_1686_, v_i_boxed_1693_, v_stop_boxed_1694_, v_b_1689_, v___y_1690_, v___y_1691_);
lean_dec_ref(v___y_1691_);
lean_dec_ref(v_as_1686_);
lean_dec(v_toUpdate_1685_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(lean_object* v_dep_1696_, lean_object* v_as_1697_, size_t v_i_1698_, size_t v_stop_1699_, lean_object* v_b_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v_fst_1704_; lean_object* v_snd_1705_; lean_object* v___y_1710_; lean_object* v_name_1711_; uint8_t v___x_1714_; 
v___x_1714_ = lean_usize_dec_eq(v_i_1698_, v_stop_1699_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; lean_object* v_name_1716_; lean_object* v_scope_1717_; lean_object* v_configFile_1718_; lean_object* v_manifestFile_x3f_1719_; lean_object* v_src_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1743_; 
v___x_1715_ = lean_array_uget(v_as_1697_, v_i_1698_);
v_name_1716_ = lean_ctor_get(v___x_1715_, 0);
v_scope_1717_ = lean_ctor_get(v___x_1715_, 1);
v_configFile_1718_ = lean_ctor_get(v___x_1715_, 2);
v_manifestFile_x3f_1719_ = lean_ctor_get(v___x_1715_, 3);
v_src_1720_ = lean_ctor_get(v___x_1715_, 4);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1722_ = v___x_1715_;
v_isShared_1723_ = v_isSharedCheck_1743_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_src_1720_);
lean_inc(v_manifestFile_x3f_1719_);
lean_inc(v_configFile_1718_);
lean_inc(v_scope_1717_);
lean_inc(v_name_1716_);
lean_dec(v___x_1715_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1743_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
uint8_t v___x_1724_; 
v___x_1724_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_name_1716_, v___y_1701_);
if (v___x_1724_ == 0)
{
uint8_t v___x_1725_; 
v___x_1725_ = 1;
if (lean_obj_tag(v_src_1720_) == 0)
{
lean_object* v_dir_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1738_; 
v_dir_1726_ = lean_ctor_get(v_src_1720_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v_src_1720_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1728_ = v_src_1720_;
v_isShared_1729_ = v_isSharedCheck_1738_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_dir_1726_);
lean_dec(v_src_1720_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1738_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v_relPkgDir_1730_; lean_object* v___x_1731_; lean_object* v___x_1733_; 
v_relPkgDir_1730_ = lean_ctor_get(v_dep_1696_, 1);
lean_inc_ref(v_relPkgDir_1730_);
v___x_1731_ = l_Lake_joinRelative(v_relPkgDir_1730_, v_dir_1726_);
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 0, v___x_1731_);
v___x_1733_ = v___x_1728_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
lean_object* v___x_1735_; 
lean_inc(v_name_1716_);
if (v_isShared_1723_ == 0)
{
lean_ctor_set(v___x_1722_, 4, v___x_1733_);
v___x_1735_ = v___x_1722_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_name_1716_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_scope_1717_);
lean_ctor_set(v_reuseFailAlloc_1736_, 2, v_configFile_1718_);
lean_ctor_set(v_reuseFailAlloc_1736_, 3, v_manifestFile_x3f_1719_);
lean_ctor_set(v_reuseFailAlloc_1736_, 4, v___x_1733_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
lean_ctor_set_uint8(v___x_1735_, sizeof(void*)*5, v___x_1725_);
v___y_1710_ = v___x_1735_;
v_name_1711_ = v_name_1716_;
goto v___jp_1709_;
}
}
}
}
else
{
lean_object* v___x_1740_; 
lean_inc(v_name_1716_);
if (v_isShared_1723_ == 0)
{
v___x_1740_ = v___x_1722_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_name_1716_);
lean_ctor_set(v_reuseFailAlloc_1741_, 1, v_scope_1717_);
lean_ctor_set(v_reuseFailAlloc_1741_, 2, v_configFile_1718_);
lean_ctor_set(v_reuseFailAlloc_1741_, 3, v_manifestFile_x3f_1719_);
lean_ctor_set(v_reuseFailAlloc_1741_, 4, v_src_1720_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_ctor_set_uint8(v___x_1740_, sizeof(void*)*5, v___x_1725_);
v___y_1710_ = v___x_1740_;
v_name_1711_ = v_name_1716_;
goto v___jp_1709_;
}
}
}
else
{
lean_object* v___x_1742_; 
lean_del_object(v___x_1722_);
lean_dec_ref(v_src_1720_);
lean_dec(v_manifestFile_x3f_1719_);
lean_dec_ref(v_configFile_1718_);
lean_dec_ref(v_scope_1717_);
lean_dec(v_name_1716_);
v___x_1742_ = lean_box(0);
v_fst_1704_ = v___x_1742_;
v_snd_1705_ = v___y_1701_;
goto v___jp_1703_;
}
}
}
else
{
lean_object* v___x_1744_; lean_object* v___x_1745_; 
lean_dec_ref(v_dep_1696_);
v___x_1744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1744_, 0, v_b_1700_);
lean_ctor_set(v___x_1744_, 1, v___y_1701_);
v___x_1745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1744_);
return v___x_1745_;
}
v___jp_1703_:
{
size_t v___x_1706_; size_t v___x_1707_; 
v___x_1706_ = ((size_t)1ULL);
v___x_1707_ = lean_usize_add(v_i_1698_, v___x_1706_);
v_i_1698_ = v___x_1707_;
v_b_1700_ = v_fst_1704_;
v___y_1701_ = v_snd_1705_;
goto _start;
}
v___jp_1709_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1712_ = lean_box(0);
v___x_1713_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1711_, v___y_1710_, v___y_1701_);
v_fst_1704_ = v___x_1712_;
v_snd_1705_ = v___x_1713_;
goto v___jp_1703_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg___boxed(lean_object* v_dep_1746_, lean_object* v_as_1747_, lean_object* v_i_1748_, lean_object* v_stop_1749_, lean_object* v_b_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_){
_start:
{
size_t v_i_boxed_1753_; size_t v_stop_boxed_1754_; lean_object* v_res_1755_; 
v_i_boxed_1753_ = lean_unbox_usize(v_i_1748_);
lean_dec(v_i_1748_);
v_stop_boxed_1754_ = lean_unbox_usize(v_stop_1749_);
lean_dec(v_stop_1749_);
v_res_1755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1746_, v_as_1747_, v_i_boxed_1753_, v_stop_boxed_1754_, v_b_1750_, v___y_1751_);
lean_dec_ref(v_as_1747_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(lean_object* v_dep_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v_manifestEntry_1762_; lean_object* v_pkgDir_1763_; lean_object* v_name_1764_; lean_object* v_manifestFile_x3f_1765_; lean_object* v___y_1767_; lean_object* v_fst_1768_; lean_object* v_snd_1769_; lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v___y_1828_; lean_object* v_val_1829_; lean_object* v___y_1845_; 
v_manifestEntry_1762_ = lean_ctor_get(v_dep_1758_, 4);
v_pkgDir_1763_ = lean_ctor_get(v_dep_1758_, 0);
v_name_1764_ = lean_ctor_get(v_manifestEntry_1762_, 0);
v_manifestFile_x3f_1765_ = lean_ctor_get(v_manifestEntry_1762_, 3);
if (lean_obj_tag(v_manifestFile_x3f_1765_) == 0)
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = l_Lake_defaultManifestFile;
lean_inc_ref(v_pkgDir_1763_);
v___x_1866_ = l_Lake_joinRelative(v_pkgDir_1763_, v___x_1865_);
v___y_1845_ = v___x_1866_;
goto v___jp_1844_;
}
else
{
lean_object* v_val_1867_; lean_object* v___x_1868_; 
v_val_1867_ = lean_ctor_get(v_manifestFile_x3f_1765_, 0);
lean_inc(v_val_1867_);
lean_inc_ref(v_pkgDir_1763_);
v___x_1868_ = l_Lake_joinRelative(v_pkgDir_1763_, v_val_1867_);
v___y_1845_ = v___x_1868_;
goto v___jp_1844_;
}
v___jp_1766_:
{
if (lean_obj_tag(v_fst_1768_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1799_; 
lean_inc(v_name_1764_);
lean_dec_ref(v_dep_1758_);
v_a_1770_ = lean_ctor_get(v_fst_1768_, 0);
v_isSharedCheck_1799_ = !lean_is_exclusive(v_fst_1768_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1772_ = v_fst_1768_;
v_isShared_1773_ = v_isSharedCheck_1799_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v_fst_1768_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1799_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
if (lean_obj_tag(v_a_1770_) == 11)
{
uint8_t v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; uint8_t v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1784_; 
lean_dec_ref_known(v_a_1770_, 2);
v___x_1774_ = 0;
v___x_1775_ = l_Lean_Name_toString(v_name_1764_, v___x_1774_);
v___x_1776_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0));
v___x_1777_ = lean_string_append(v___x_1775_, v___x_1776_);
v___x_1778_ = lean_string_append(v___x_1777_, v___y_1767_);
lean_dec_ref(v___y_1767_);
v___x_1779_ = 2;
v___x_1780_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1780_, 0, v___x_1778_);
lean_ctor_set_uint8(v___x_1780_, sizeof(void*)*1, v___x_1779_);
lean_inc_ref(v___y_1760_);
v___x_1781_ = lean_apply_2(v___y_1760_, v___x_1780_, lean_box(0));
v___x_1782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1781_);
lean_ctor_set(v___x_1782_, 1, v_snd_1769_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v___x_1782_);
v___x_1784_ = v___x_1772_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
else
{
uint8_t v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; uint8_t v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1797_; 
lean_dec_ref(v___y_1767_);
v___x_1786_ = 0;
v___x_1787_ = l_Lean_Name_toString(v_name_1764_, v___x_1786_);
v___x_1788_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1));
v___x_1789_ = lean_string_append(v___x_1787_, v___x_1788_);
v___x_1790_ = lean_io_error_to_string(v_a_1770_);
v___x_1791_ = lean_string_append(v___x_1789_, v___x_1790_);
lean_dec_ref(v___x_1790_);
v___x_1792_ = 2;
v___x_1793_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1793_, 0, v___x_1791_);
lean_ctor_set_uint8(v___x_1793_, sizeof(void*)*1, v___x_1792_);
lean_inc_ref(v___y_1760_);
v___x_1794_ = lean_apply_2(v___y_1760_, v___x_1793_, lean_box(0));
v___x_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
lean_ctor_set(v___x_1795_, 1, v_snd_1769_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v___x_1795_);
v___x_1797_ = v___x_1772_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v___x_1795_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
}
}
else
{
lean_object* v_a_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1824_; 
lean_dec_ref(v___y_1767_);
v_a_1800_ = lean_ctor_get(v_fst_1768_, 0);
v_isSharedCheck_1824_ = !lean_is_exclusive(v_fst_1768_);
if (v_isSharedCheck_1824_ == 0)
{
v___x_1802_ = v_fst_1768_;
v_isShared_1803_ = v_isSharedCheck_1824_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_a_1800_);
lean_dec(v_fst_1768_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1824_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v_packages_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; uint8_t v___x_1808_; 
v_packages_1804_ = lean_ctor_get(v_a_1800_, 3);
lean_inc_ref(v_packages_1804_);
lean_dec(v_a_1800_);
v___x_1805_ = lean_unsigned_to_nat(0u);
v___x_1806_ = lean_array_get_size(v_packages_1804_);
v___x_1807_ = lean_box(0);
v___x_1808_ = lean_nat_dec_lt(v___x_1805_, v___x_1806_);
if (v___x_1808_ == 0)
{
lean_object* v___x_1809_; lean_object* v___x_1811_; 
lean_dec_ref(v_packages_1804_);
lean_dec_ref(v_dep_1758_);
v___x_1809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1807_);
lean_ctor_set(v___x_1809_, 1, v_snd_1769_);
if (v_isShared_1803_ == 0)
{
lean_ctor_set_tag(v___x_1802_, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1809_);
v___x_1811_ = v___x_1802_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1809_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
else
{
uint8_t v___x_1813_; 
v___x_1813_ = lean_nat_dec_le(v___x_1806_, v___x_1806_);
if (v___x_1813_ == 0)
{
if (v___x_1808_ == 0)
{
lean_object* v___x_1814_; lean_object* v___x_1816_; 
lean_dec_ref(v_packages_1804_);
lean_dec_ref(v_dep_1758_);
v___x_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1807_);
lean_ctor_set(v___x_1814_, 1, v_snd_1769_);
if (v_isShared_1803_ == 0)
{
lean_ctor_set_tag(v___x_1802_, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1814_);
v___x_1816_ = v___x_1802_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v___x_1814_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
else
{
size_t v___x_1818_; size_t v___x_1819_; lean_object* v___x_1820_; 
lean_del_object(v___x_1802_);
v___x_1818_ = ((size_t)0ULL);
v___x_1819_ = lean_usize_of_nat(v___x_1806_);
v___x_1820_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1758_, v_packages_1804_, v___x_1818_, v___x_1819_, v___x_1807_, v_snd_1769_);
lean_dec_ref(v_packages_1804_);
return v___x_1820_;
}
}
else
{
size_t v___x_1821_; size_t v___x_1822_; lean_object* v___x_1823_; 
lean_del_object(v___x_1802_);
v___x_1821_ = ((size_t)0ULL);
v___x_1822_ = lean_usize_of_nat(v___x_1806_);
v___x_1823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1758_, v_packages_1804_, v___x_1821_, v___x_1822_, v___x_1807_, v_snd_1769_);
lean_dec_ref(v_packages_1804_);
return v___x_1823_;
}
}
}
}
}
v___jp_1825_:
{
lean_object* v___x_1830_; uint8_t v___x_1831_; 
v___x_1830_ = lean_array_get_size(v___y_1826_);
v___x_1831_ = lean_nat_dec_lt(v___y_1827_, v___x_1830_);
if (v___x_1831_ == 0)
{
v___y_1767_ = v___y_1828_;
v_fst_1768_ = v_val_1829_;
v_snd_1769_ = v___y_1759_;
goto v___jp_1766_;
}
else
{
lean_object* v___x_1832_; size_t v___x_1833_; size_t v___x_1834_; lean_object* v___x_1835_; 
v___x_1832_ = lean_box(0);
v___x_1833_ = ((size_t)0ULL);
v___x_1834_ = lean_usize_of_nat(v___x_1830_);
v___x_1835_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___y_1826_, v___x_1833_, v___x_1834_, v___x_1832_, v___y_1760_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_dec_ref_known(v___x_1835_, 1);
v___y_1767_ = v___y_1828_;
v_fst_1768_ = v_val_1829_;
v_snd_1769_ = v___y_1759_;
goto v___jp_1766_;
}
else
{
lean_object* v_a_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1843_; 
lean_dec_ref(v_val_1829_);
lean_dec_ref(v___y_1828_);
lean_dec(v___y_1759_);
lean_dec_ref(v_dep_1758_);
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1838_ = v___x_1835_;
v_isShared_1839_ = v_isSharedCheck_1843_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_a_1836_);
lean_dec(v___x_1835_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1843_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1841_; 
if (v_isShared_1839_ == 0)
{
v___x_1841_ = v___x_1838_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v_a_1836_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
}
}
}
v___jp_1844_:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1846_ = lean_unsigned_to_nat(0u);
v___x_1847_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___y_1845_);
v___x_1848_ = l_Lake_Manifest_load(v___y_1845_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
v_a_1849_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1848_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1848_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1854_; 
if (v_isShared_1852_ == 0)
{
lean_ctor_set_tag(v___x_1851_, 1);
v___x_1854_ = v___x_1851_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1849_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
v___y_1826_ = v___x_1847_;
v___y_1827_ = v___x_1846_;
v___y_1828_ = v___y_1845_;
v_val_1829_ = v___x_1854_;
goto v___jp_1825_;
}
}
}
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
v_a_1857_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1848_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1848_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
lean_ctor_set_tag(v___x_1859_, 0);
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
v___y_1826_ = v___x_1847_;
v___y_1827_ = v___x_1846_;
v___y_1828_ = v___y_1845_;
v_val_1829_ = v___x_1862_;
goto v___jp_1825_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___boxed(lean_object* v_dep_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_dep_1869_, v___y_1870_, v___y_1871_);
lean_dec_ref(v___y_1871_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(lean_object* v_dep_1874_, lean_object* v_as_1875_, size_t v_i_1876_, size_t v_stop_1877_, lean_object* v_b_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v___x_1882_; 
v___x_1882_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1874_, v_as_1875_, v_i_1876_, v_stop_1877_, v_b_1878_, v___y_1879_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___boxed(lean_object* v_dep_1883_, lean_object* v_as_1884_, lean_object* v_i_1885_, lean_object* v_stop_1886_, lean_object* v_b_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_){
_start:
{
size_t v_i_boxed_1891_; size_t v_stop_boxed_1892_; lean_object* v_res_1893_; 
v_i_boxed_1891_ = lean_unbox_usize(v_i_1885_);
lean_dec(v_i_1885_);
v_stop_boxed_1892_ = lean_unbox_usize(v_stop_1886_);
lean_dec(v_stop_1886_);
v_res_1893_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(v_dep_1883_, v_as_1884_, v_i_boxed_1891_, v_stop_boxed_1892_, v_b_1887_, v___y_1888_, v___y_1889_);
lean_dec_ref(v___y_1889_);
lean_dec_ref(v_as_1884_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(lean_object* v_ws_1895_, lean_object* v_pkg_1896_, lean_object* v_dep_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
uint8_t v___y_1902_; lean_object* v___y_1903_; lean_object* v_name_1933_; lean_object* v___x_1934_; 
v_name_1933_ = lean_ctor_get(v_dep_1897_, 0);
v___x_1934_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_1898_, v_name_1933_);
if (lean_obj_tag(v___x_1934_) == 1)
{
lean_object* v_val_1935_; lean_object* v_lakeEnv_1936_; lean_object* v_packages_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v_config_1940_; lean_object* v_dir_1941_; lean_object* v_toWorkspaceConfig_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
lean_dec_ref(v_dep_1897_);
lean_dec_ref(v_pkg_1896_);
v_val_1935_ = lean_ctor_get(v___x_1934_, 0);
lean_inc(v_val_1935_);
lean_dec_ref_known(v___x_1934_, 1);
v_lakeEnv_1936_ = lean_ctor_get(v_ws_1895_, 0);
lean_inc_ref(v_lakeEnv_1936_);
v_packages_1937_ = lean_ctor_get(v_ws_1895_, 4);
lean_inc_ref(v_packages_1937_);
lean_dec_ref(v_ws_1895_);
v___x_1938_ = lean_unsigned_to_nat(0u);
v___x_1939_ = lean_array_fget(v_packages_1937_, v___x_1938_);
lean_dec_ref(v_packages_1937_);
v_config_1940_ = lean_ctor_get(v___x_1939_, 6);
lean_inc_ref(v_config_1940_);
v_dir_1941_ = lean_ctor_get(v___x_1939_, 4);
lean_inc_ref(v_dir_1941_);
lean_dec(v___x_1939_);
v_toWorkspaceConfig_1942_ = lean_ctor_get(v_config_1940_, 0);
lean_inc_ref(v_toWorkspaceConfig_1942_);
lean_dec_ref(v_config_1940_);
v___x_1943_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1942_);
v___x_1944_ = l_Lake_PackageEntry_materialize(v_val_1935_, v_lakeEnv_1936_, v_dir_1941_, v___x_1943_, v___y_1899_);
lean_dec_ref(v_lakeEnv_1936_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1953_; 
v_a_1945_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1947_ = v___x_1944_;
v_isShared_1948_ = v_isSharedCheck_1953_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1944_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1953_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1949_; lean_object* v___x_1951_; 
v___x_1949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1949_, 0, v_a_1945_);
lean_ctor_set(v___x_1949_, 1, v___y_1898_);
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 0, v___x_1949_);
v___x_1951_ = v___x_1947_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec(v___y_1898_);
v_a_1954_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1944_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1944_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
else
{
lean_object* v_wsIdx_1962_; lean_object* v_relDir_1963_; uint8_t v___y_1965_; lean_object* v___x_1969_; uint8_t v___x_1970_; 
lean_dec(v___x_1934_);
v_wsIdx_1962_ = lean_ctor_get(v_pkg_1896_, 0);
lean_inc(v_wsIdx_1962_);
v_relDir_1963_ = lean_ctor_get(v_pkg_1896_, 5);
lean_inc_ref(v_relDir_1963_);
lean_dec_ref(v_pkg_1896_);
v___x_1969_ = lean_unsigned_to_nat(0u);
v___x_1970_ = lean_nat_dec_eq(v_wsIdx_1962_, v___x_1969_);
lean_dec(v_wsIdx_1962_);
if (v___x_1970_ == 0)
{
uint8_t v___x_1971_; 
v___x_1971_ = 1;
v___y_1965_ = v___x_1971_;
goto v___jp_1964_;
}
else
{
uint8_t v___x_1972_; 
v___x_1972_ = 0;
v___y_1965_ = v___x_1972_;
goto v___jp_1964_;
}
v___jp_1964_:
{
lean_object* v___x_1966_; uint8_t v___x_1967_; 
v___x_1966_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0));
v___x_1967_ = lean_string_dec_eq(v_relDir_1963_, v___x_1966_);
if (v___x_1967_ == 0)
{
lean_object* v___x_1968_; 
v___x_1968_ = l_Lake_joinRelative(v_relDir_1963_, v___x_1966_);
v___y_1902_ = v___y_1965_;
v___y_1903_ = v___x_1968_;
goto v___jp_1901_;
}
else
{
v___y_1902_ = v___y_1965_;
v___y_1903_ = v_relDir_1963_;
goto v___jp_1901_;
}
}
}
v___jp_1901_:
{
lean_object* v_lakeEnv_1904_; lean_object* v_packages_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v_config_1908_; lean_object* v_dir_1909_; lean_object* v_toWorkspaceConfig_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v_lakeEnv_1904_ = lean_ctor_get(v_ws_1895_, 0);
lean_inc_ref(v_lakeEnv_1904_);
v_packages_1905_ = lean_ctor_get(v_ws_1895_, 4);
lean_inc_ref(v_packages_1905_);
lean_dec_ref(v_ws_1895_);
v___x_1906_ = lean_unsigned_to_nat(0u);
v___x_1907_ = lean_array_fget(v_packages_1905_, v___x_1906_);
lean_dec_ref(v_packages_1905_);
v_config_1908_ = lean_ctor_get(v___x_1907_, 6);
lean_inc_ref(v_config_1908_);
v_dir_1909_ = lean_ctor_get(v___x_1907_, 4);
lean_inc_ref(v_dir_1909_);
lean_dec(v___x_1907_);
v_toWorkspaceConfig_1910_ = lean_ctor_get(v_config_1908_, 0);
lean_inc_ref(v_toWorkspaceConfig_1910_);
lean_dec_ref(v_config_1908_);
v___x_1911_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1910_);
v___x_1912_ = l_Lake_Dependency_materialize(v_dep_1897_, v___y_1902_, v_lakeEnv_1904_, v_dir_1909_, v___x_1911_, v___y_1903_, v___y_1899_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1924_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1915_ = v___x_1912_;
v_isShared_1916_ = v_isSharedCheck_1924_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_dec(v___x_1912_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1924_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v_manifestEntry_1917_; lean_object* v_name_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1922_; 
v_manifestEntry_1917_ = lean_ctor_get(v_a_1913_, 4);
v_name_1918_ = lean_ctor_get(v_manifestEntry_1917_, 0);
lean_inc_ref(v_manifestEntry_1917_);
lean_inc(v_name_1918_);
v___x_1919_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1918_, v_manifestEntry_1917_, v___y_1898_);
v___x_1920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1920_, 0, v_a_1913_);
lean_ctor_set(v___x_1920_, 1, v___x_1919_);
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 0, v___x_1920_);
v___x_1922_ = v___x_1915_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v___x_1920_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
else
{
lean_object* v_a_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1932_; 
lean_dec(v___y_1898_);
v_a_1925_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1927_ = v___x_1912_;
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_a_1925_);
lean_dec(v___x_1912_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1932_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1930_; 
if (v_isShared_1928_ == 0)
{
v___x_1930_ = v___x_1927_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v_a_1925_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___boxed(lean_object* v_ws_1973_, lean_object* v_pkg_1974_, lean_object* v_dep_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_1973_, v_pkg_1974_, v_dep_1975_, v___y_1976_, v___y_1977_);
lean_dec_ref(v___y_1977_);
return v_res_1979_;
}
}
static uint32_t _init_l___private_Lake_Load_Resolve_0__Lake_restartCode(void){
_start:
{
uint32_t v___x_1980_; 
v___x_1980_ = 4;
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(lean_object* v_src_1981_, lean_object* v_tc_x3f_1982_, uint8_t v_fixed_1983_, lean_object* v_self_1984_){
_start:
{
lean_object* v_clashes_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
v_clashes_1985_ = lean_ctor_get(v_self_1984_, 2);
v_isSharedCheck_1992_ = !lean_is_exclusive(v_self_1984_);
if (v_isSharedCheck_1992_ == 0)
{
lean_object* v_unused_1993_; lean_object* v_unused_1994_; 
v_unused_1993_ = lean_ctor_get(v_self_1984_, 1);
lean_dec(v_unused_1993_);
v_unused_1994_ = lean_ctor_get(v_self_1984_, 0);
lean_dec(v_unused_1994_);
v___x_1987_ = v_self_1984_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_clashes_1985_);
lean_dec(v_self_1984_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 1, v_tc_x3f_1982_);
lean_ctor_set(v___x_1987_, 0, v_src_1981_);
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_src_1981_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_tc_x3f_1982_);
lean_ctor_set(v_reuseFailAlloc_1991_, 2, v_clashes_1985_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
lean_ctor_set_uint8(v___x_1990_, sizeof(void*)*3, v_fixed_1983_);
return v___x_1990_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace___boxed(lean_object* v_src_1995_, lean_object* v_tc_x3f_1996_, lean_object* v_fixed_1997_, lean_object* v_self_1998_){
_start:
{
uint8_t v_fixed_boxed_1999_; lean_object* v_res_2000_; 
v_fixed_boxed_1999_ = lean_unbox(v_fixed_1997_);
v_res_2000_ = l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(v_src_1995_, v_tc_x3f_1996_, v_fixed_boxed_1999_, v_self_1998_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(lean_object* v_src_2001_, lean_object* v_ver_2002_, uint8_t v_fixed_2003_, lean_object* v_self_2004_){
_start:
{
lean_object* v_src_2005_; lean_object* v_tc_x3f_2006_; lean_object* v_clashes_2007_; uint8_t v_fixed_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2017_; 
v_src_2005_ = lean_ctor_get(v_self_2004_, 0);
v_tc_x3f_2006_ = lean_ctor_get(v_self_2004_, 1);
v_clashes_2007_ = lean_ctor_get(v_self_2004_, 2);
v_fixed_2008_ = lean_ctor_get_uint8(v_self_2004_, sizeof(void*)*3);
v_isSharedCheck_2017_ = !lean_is_exclusive(v_self_2004_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_2010_ = v_self_2004_;
v_isShared_2011_ = v_isSharedCheck_2017_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_clashes_2007_);
lean_inc(v_tc_x3f_2006_);
lean_inc(v_src_2005_);
lean_dec(v_self_2004_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2017_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2015_; 
v___x_2012_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2012_, 0, v_src_2001_);
lean_ctor_set(v___x_2012_, 1, v_ver_2002_);
lean_ctor_set_uint8(v___x_2012_, sizeof(void*)*2, v_fixed_2003_);
v___x_2013_ = lean_array_push(v_clashes_2007_, v___x_2012_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 2, v___x_2013_);
v___x_2015_ = v___x_2010_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v_src_2005_);
lean_ctor_set(v_reuseFailAlloc_2016_, 1, v_tc_x3f_2006_);
lean_ctor_set(v_reuseFailAlloc_2016_, 2, v___x_2013_);
lean_ctor_set_uint8(v_reuseFailAlloc_2016_, sizeof(void*)*3, v_fixed_2008_);
v___x_2015_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
return v___x_2015_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash___boxed(lean_object* v_src_2018_, lean_object* v_ver_2019_, lean_object* v_fixed_2020_, lean_object* v_self_2021_){
_start:
{
uint8_t v_fixed_boxed_2022_; lean_object* v_res_2023_; 
v_fixed_boxed_2022_ = lean_unbox(v_fixed_2020_);
v_res_2023_ = l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(v_src_2018_, v_ver_2019_, v_fixed_boxed_2022_, v_self_2021_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(lean_object* v___x_2028_, lean_object* v_as_2029_, size_t v_i_2030_, size_t v_stop_2031_, lean_object* v_b_2032_){
_start:
{
uint8_t v___x_2033_; 
v___x_2033_ = lean_usize_dec_eq(v_i_2030_, v_stop_2031_);
if (v___x_2033_ == 0)
{
lean_object* v___x_2034_; lean_object* v_src_2035_; lean_object* v_ver_2036_; uint8_t v_fixed_2037_; lean_object* v___x_2038_; uint8_t v___x_2039_; lean_object* v___y_2041_; lean_object* v___y_2042_; lean_object* v___y_2043_; lean_object* v___y_2054_; 
v___x_2034_ = lean_array_uget_borrowed(v_as_2029_, v_i_2030_);
v_src_2035_ = lean_ctor_get(v___x_2034_, 0);
v_ver_2036_ = lean_ctor_get(v___x_2034_, 1);
v_fixed_2037_ = lean_ctor_get_uint8(v___x_2034_, sizeof(void*)*2);
v___x_2038_ = lean_unsigned_to_nat(0u);
v___x_2039_ = lean_nat_dec_lt(v___x_2038_, v___x_2028_);
if (v_fixed_2037_ == 0)
{
lean_object* v___x_2058_; 
v___x_2058_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2054_ = v___x_2058_;
goto v___jp_2053_;
}
else
{
lean_object* v___x_2059_; 
v___x_2059_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2054_ = v___x_2059_;
goto v___jp_2053_;
}
v___jp_2040_:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; size_t v___x_2050_; size_t v___x_2051_; 
v___x_2044_ = lean_string_append(v___y_2042_, v___y_2043_);
lean_dec_ref(v___y_2043_);
v___x_2045_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2046_ = lean_string_append(v___x_2044_, v___x_2045_);
lean_inc(v_src_2035_);
v___x_2047_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_src_2035_, v___x_2039_);
v___x_2048_ = lean_string_append(v___x_2046_, v___x_2047_);
lean_dec_ref(v___x_2047_);
v___x_2049_ = lean_string_append(v___x_2048_, v___y_2041_);
v___x_2050_ = ((size_t)1ULL);
v___x_2051_ = lean_usize_add(v_i_2030_, v___x_2050_);
v_i_2030_ = v___x_2051_;
v_b_2032_ = v___x_2049_;
goto _start;
}
v___jp_2053_:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v_toString_2057_; 
v___x_2055_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1));
v___x_2056_ = lean_string_append(v_b_2032_, v___x_2055_);
v_toString_2057_ = lean_ctor_get(v_ver_2036_, 0);
lean_inc_ref(v_toString_2057_);
v___y_2041_ = v___y_2054_;
v___y_2042_ = v___x_2056_;
v___y_2043_ = v_toString_2057_;
goto v___jp_2040_;
}
}
else
{
return v_b_2032_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___boxed(lean_object* v___x_2060_, lean_object* v_as_2061_, lean_object* v_i_2062_, lean_object* v_stop_2063_, lean_object* v_b_2064_){
_start:
{
size_t v_i_boxed_2065_; size_t v_stop_boxed_2066_; lean_object* v_res_2067_; 
v_i_boxed_2065_ = lean_unbox_usize(v_i_2062_);
lean_dec(v_i_2062_);
v_stop_boxed_2066_ = lean_unbox_usize(v_stop_2063_);
lean_dec(v_stop_2063_);
v_res_2067_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(v___x_2060_, v_as_2061_, v_i_boxed_2065_, v_stop_boxed_2066_, v_b_2064_);
lean_dec_ref(v_as_2061_);
lean_dec(v___x_2060_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(lean_object* v___x_2068_, lean_object* v_as_2069_, size_t v_i_2070_, size_t v_stop_2071_, lean_object* v_b_2072_){
_start:
{
uint8_t v___x_2073_; 
v___x_2073_ = lean_usize_dec_eq(v_i_2070_, v_stop_2071_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; lean_object* v_src_2075_; lean_object* v_ver_2076_; uint8_t v_fixed_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; lean_object* v___y_2081_; lean_object* v___y_2082_; lean_object* v___y_2083_; lean_object* v___y_2094_; 
v___x_2074_ = lean_array_uget_borrowed(v_as_2069_, v_i_2070_);
v_src_2075_ = lean_ctor_get(v___x_2074_, 0);
v_ver_2076_ = lean_ctor_get(v___x_2074_, 1);
v_fixed_2077_ = lean_ctor_get_uint8(v___x_2074_, sizeof(void*)*2);
v___x_2078_ = lean_unsigned_to_nat(0u);
v___x_2079_ = lean_nat_dec_lt(v___x_2078_, v___x_2068_);
if (v_fixed_2077_ == 0)
{
lean_object* v___x_2098_; 
v___x_2098_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2094_ = v___x_2098_;
goto v___jp_2093_;
}
else
{
lean_object* v___x_2099_; 
v___x_2099_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2094_ = v___x_2099_;
goto v___jp_2093_;
}
v___jp_2080_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; size_t v___x_2090_; size_t v___x_2091_; lean_object* v___x_2092_; 
v___x_2084_ = lean_string_append(v___y_2081_, v___y_2083_);
lean_dec_ref(v___y_2083_);
v___x_2085_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2086_ = lean_string_append(v___x_2084_, v___x_2085_);
lean_inc(v_src_2075_);
v___x_2087_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_src_2075_, v___x_2079_);
v___x_2088_ = lean_string_append(v___x_2086_, v___x_2087_);
lean_dec_ref(v___x_2087_);
v___x_2089_ = lean_string_append(v___x_2088_, v___y_2082_);
v___x_2090_ = ((size_t)1ULL);
v___x_2091_ = lean_usize_add(v_i_2070_, v___x_2090_);
v___x_2092_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(v___x_2068_, v_as_2069_, v___x_2091_, v_stop_2071_, v___x_2089_);
return v___x_2092_;
}
v___jp_2093_:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v_toString_2097_; 
v___x_2095_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1));
v___x_2096_ = lean_string_append(v_b_2072_, v___x_2095_);
v_toString_2097_ = lean_ctor_get(v_ver_2076_, 0);
lean_inc_ref(v_toString_2097_);
v___y_2081_ = v___x_2096_;
v___y_2082_ = v___y_2094_;
v___y_2083_ = v_toString_2097_;
goto v___jp_2080_;
}
}
else
{
return v_b_2072_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0___boxed(lean_object* v___x_2100_, lean_object* v_as_2101_, lean_object* v_i_2102_, lean_object* v_stop_2103_, lean_object* v_b_2104_){
_start:
{
size_t v_i_boxed_2105_; size_t v_stop_boxed_2106_; lean_object* v_res_2107_; 
v_i_boxed_2105_ = lean_unbox_usize(v_i_2102_);
lean_dec(v_i_2102_);
v_stop_boxed_2106_ = lean_unbox_usize(v_stop_2103_);
lean_dec(v_stop_2103_);
v_res_2107_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___x_2100_, v_as_2101_, v_i_boxed_2105_, v_stop_boxed_2106_, v_b_2104_);
lean_dec_ref(v_as_2101_);
lean_dec(v___x_2100_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(lean_object* v___x_2108_, lean_object* v_as_2109_, size_t v_i_2110_, size_t v_stop_2111_, lean_object* v_b_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v_a_2116_; uint8_t v___x_2120_; 
v___x_2120_ = lean_usize_dec_eq(v_i_2110_, v_stop_2111_);
if (v___x_2120_ == 0)
{
lean_object* v___x_2121_; lean_object* v_relPkgDir_2122_; lean_object* v_manifestEntry_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v___x_2121_ = lean_array_uget_borrowed(v_as_2109_, v_i_2110_);
v_relPkgDir_2122_ = lean_ctor_get(v___x_2121_, 1);
v_manifestEntry_2123_ = lean_ctor_get(v___x_2121_, 4);
lean_inc_ref(v_relPkgDir_2122_);
lean_inc_ref(v___x_2108_);
v___x_2124_ = l_Lake_joinRelative(v___x_2108_, v_relPkgDir_2122_);
v___x_2125_ = l_Lake_toolchainFileName;
v___x_2126_ = l_System_FilePath_join(v___x_2124_, v___x_2125_);
v___x_2127_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_2126_);
lean_dec_ref(v___x_2126_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
lean_inc(v_a_2128_);
lean_dec_ref_known(v___x_2127_, 1);
if (lean_obj_tag(v_a_2128_) == 1)
{
lean_object* v_tc_x3f_2129_; 
v_tc_x3f_2129_ = lean_ctor_get(v_b_2112_, 1);
if (lean_obj_tag(v_tc_x3f_2129_) == 1)
{
lean_object* v_val_2130_; lean_object* v_src_2131_; lean_object* v_clashes_2132_; uint8_t v_fixed_2133_; lean_object* v_val_2134_; uint8_t v___x_2135_; uint8_t v___y_2137_; 
v_val_2130_ = lean_ctor_get(v_a_2128_, 0);
v_src_2131_ = lean_ctor_get(v_b_2112_, 0);
v_clashes_2132_ = lean_ctor_get(v_b_2112_, 2);
v_fixed_2133_ = lean_ctor_get_uint8(v_b_2112_, sizeof(void*)*3);
v_val_2134_ = lean_ctor_get(v_tc_x3f_2129_, 0);
v___x_2135_ = l_Lake_MaterializedDep_fixedToolchain(v___x_2121_);
if (v___x_2135_ == 0)
{
uint8_t v___x_2146_; 
v___x_2146_ = l_Lake_ToolchainVer_ble(v_val_2130_, v_val_2134_);
if (v___x_2146_ == 0)
{
lean_inc_ref(v_clashes_2132_);
lean_inc(v_src_2131_);
lean_inc_ref(v_tc_x3f_2129_);
lean_dec_ref(v_b_2112_);
if (v_fixed_2133_ == 0)
{
goto v___jp_2144_;
}
else
{
if (v___x_2146_ == 0)
{
v___y_2137_ = v___x_2146_;
goto v___jp_2136_;
}
else
{
goto v___jp_2144_;
}
}
}
else
{
lean_dec_ref_known(v_a_2128_, 1);
v_a_2116_ = v_b_2112_;
goto v___jp_2115_;
}
}
else
{
if (v_fixed_2133_ == 0)
{
lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2161_; 
lean_inc_ref(v_clashes_2132_);
lean_inc(v_src_2131_);
lean_inc_ref(v_tc_x3f_2129_);
v_isSharedCheck_2161_ = !lean_is_exclusive(v_b_2112_);
if (v_isSharedCheck_2161_ == 0)
{
lean_object* v_unused_2162_; lean_object* v_unused_2163_; lean_object* v_unused_2164_; 
v_unused_2162_ = lean_ctor_get(v_b_2112_, 2);
lean_dec(v_unused_2162_);
v_unused_2163_ = lean_ctor_get(v_b_2112_, 1);
lean_dec(v_unused_2163_);
v_unused_2164_ = lean_ctor_get(v_b_2112_, 0);
lean_dec(v_unused_2164_);
v___x_2148_ = v_b_2112_;
v_isShared_2149_ = v_isSharedCheck_2161_;
goto v_resetjp_2147_;
}
else
{
lean_dec(v_b_2112_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2161_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
uint8_t v___x_2150_; 
v___x_2150_ = l_Lake_ToolchainVer_ble(v_val_2134_, v_val_2130_);
if (v___x_2150_ == 0)
{
lean_object* v_name_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2155_; 
lean_inc(v_val_2130_);
lean_dec_ref_known(v_a_2128_, 1);
v_name_2151_ = lean_ctor_get(v_manifestEntry_2123_, 0);
lean_inc(v_name_2151_);
v___x_2152_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2152_, 0, v_name_2151_);
lean_ctor_set(v___x_2152_, 1, v_val_2130_);
lean_ctor_set_uint8(v___x_2152_, sizeof(void*)*2, v___x_2135_);
v___x_2153_ = lean_array_push(v_clashes_2132_, v___x_2152_);
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 2, v___x_2153_);
v___x_2155_ = v___x_2148_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v_src_2131_);
lean_ctor_set(v_reuseFailAlloc_2156_, 1, v_tc_x3f_2129_);
lean_ctor_set(v_reuseFailAlloc_2156_, 2, v___x_2153_);
lean_ctor_set_uint8(v_reuseFailAlloc_2156_, sizeof(void*)*3, v_fixed_2133_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
v_a_2116_ = v___x_2155_;
goto v___jp_2115_;
}
}
else
{
lean_object* v_name_2157_; lean_object* v___x_2159_; 
lean_dec(v_src_2131_);
lean_dec_ref_known(v_tc_x3f_2129_, 1);
v_name_2157_ = lean_ctor_get(v_manifestEntry_2123_, 0);
lean_inc(v_name_2157_);
if (v_isShared_2149_ == 0)
{
lean_ctor_set(v___x_2148_, 1, v_a_2128_);
lean_ctor_set(v___x_2148_, 0, v_name_2157_);
v___x_2159_ = v___x_2148_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_name_2157_);
lean_ctor_set(v_reuseFailAlloc_2160_, 1, v_a_2128_);
lean_ctor_set(v_reuseFailAlloc_2160_, 2, v_clashes_2132_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
lean_ctor_set_uint8(v___x_2159_, sizeof(void*)*3, v___x_2135_);
v_a_2116_ = v___x_2159_;
goto v___jp_2115_;
}
}
}
}
else
{
uint8_t v___x_2165_; 
lean_inc_n(v_val_2130_, 2);
lean_dec_ref_known(v_a_2128_, 1);
lean_inc(v_val_2134_);
v___x_2165_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_2134_, v_val_2130_);
if (v___x_2165_ == 0)
{
lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2175_; 
lean_inc_ref(v_clashes_2132_);
lean_inc(v_src_2131_);
lean_inc_ref(v_tc_x3f_2129_);
v_isSharedCheck_2175_ = !lean_is_exclusive(v_b_2112_);
if (v_isSharedCheck_2175_ == 0)
{
lean_object* v_unused_2176_; lean_object* v_unused_2177_; lean_object* v_unused_2178_; 
v_unused_2176_ = lean_ctor_get(v_b_2112_, 2);
lean_dec(v_unused_2176_);
v_unused_2177_ = lean_ctor_get(v_b_2112_, 1);
lean_dec(v_unused_2177_);
v_unused_2178_ = lean_ctor_get(v_b_2112_, 0);
lean_dec(v_unused_2178_);
v___x_2167_ = v_b_2112_;
v_isShared_2168_ = v_isSharedCheck_2175_;
goto v_resetjp_2166_;
}
else
{
lean_dec(v_b_2112_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2175_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v_name_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2173_; 
v_name_2169_ = lean_ctor_get(v_manifestEntry_2123_, 0);
lean_inc(v_name_2169_);
v___x_2170_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2170_, 0, v_name_2169_);
lean_ctor_set(v___x_2170_, 1, v_val_2130_);
lean_ctor_set_uint8(v___x_2170_, sizeof(void*)*2, v___x_2135_);
v___x_2171_ = lean_array_push(v_clashes_2132_, v___x_2170_);
if (v_isShared_2168_ == 0)
{
lean_ctor_set(v___x_2167_, 2, v___x_2171_);
v___x_2173_ = v___x_2167_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_src_2131_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v_tc_x3f_2129_);
lean_ctor_set(v_reuseFailAlloc_2174_, 2, v___x_2171_);
lean_ctor_set_uint8(v_reuseFailAlloc_2174_, sizeof(void*)*3, v_fixed_2133_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
v_a_2116_ = v___x_2173_;
goto v___jp_2115_;
}
}
}
else
{
lean_dec(v_val_2130_);
v_a_2116_ = v_b_2112_;
goto v___jp_2115_;
}
}
}
v___jp_2136_:
{
if (v___y_2137_ == 0)
{
lean_object* v_name_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
lean_inc(v_val_2130_);
lean_dec_ref_known(v_a_2128_, 1);
v_name_2138_ = lean_ctor_get(v_manifestEntry_2123_, 0);
lean_inc(v_name_2138_);
v___x_2139_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2139_, 0, v_name_2138_);
lean_ctor_set(v___x_2139_, 1, v_val_2130_);
lean_ctor_set_uint8(v___x_2139_, sizeof(void*)*2, v___x_2135_);
v___x_2140_ = lean_array_push(v_clashes_2132_, v___x_2139_);
v___x_2141_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2141_, 0, v_src_2131_);
lean_ctor_set(v___x_2141_, 1, v_tc_x3f_2129_);
lean_ctor_set(v___x_2141_, 2, v___x_2140_);
lean_ctor_set_uint8(v___x_2141_, sizeof(void*)*3, v_fixed_2133_);
v_a_2116_ = v___x_2141_;
goto v___jp_2115_;
}
else
{
lean_object* v_name_2142_; lean_object* v___x_2143_; 
lean_dec(v_src_2131_);
lean_dec_ref_known(v_tc_x3f_2129_, 1);
v_name_2142_ = lean_ctor_get(v_manifestEntry_2123_, 0);
lean_inc(v_name_2142_);
v___x_2143_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2143_, 0, v_name_2142_);
lean_ctor_set(v___x_2143_, 1, v_a_2128_);
lean_ctor_set(v___x_2143_, 2, v_clashes_2132_);
lean_ctor_set_uint8(v___x_2143_, sizeof(void*)*3, v___x_2135_);
v_a_2116_ = v___x_2143_;
goto v___jp_2115_;
}
}
v___jp_2144_:
{
uint8_t v___x_2145_; 
v___x_2145_ = l_Lake_ToolchainVer_blt(v_val_2134_, v_val_2130_);
v___y_2137_ = v___x_2145_;
goto v___jp_2136_;
}
}
else
{
lean_object* v_clashes_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2188_; 
v_clashes_2179_ = lean_ctor_get(v_b_2112_, 2);
v_isSharedCheck_2188_ = !lean_is_exclusive(v_b_2112_);
if (v_isSharedCheck_2188_ == 0)
{
lean_object* v_unused_2189_; lean_object* v_unused_2190_; 
v_unused_2189_ = lean_ctor_get(v_b_2112_, 1);
lean_dec(v_unused_2189_);
v_unused_2190_ = lean_ctor_get(v_b_2112_, 0);
lean_dec(v_unused_2190_);
v___x_2181_ = v_b_2112_;
v_isShared_2182_ = v_isSharedCheck_2188_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_clashes_2179_);
lean_dec(v_b_2112_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2188_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v_name_2183_; uint8_t v___x_2184_; lean_object* v___x_2186_; 
v_name_2183_ = lean_ctor_get(v_manifestEntry_2123_, 0);
v___x_2184_ = l_Lake_MaterializedDep_fixedToolchain(v___x_2121_);
lean_inc(v_name_2183_);
if (v_isShared_2182_ == 0)
{
lean_ctor_set(v___x_2181_, 1, v_a_2128_);
lean_ctor_set(v___x_2181_, 0, v_name_2183_);
v___x_2186_ = v___x_2181_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_name_2183_);
lean_ctor_set(v_reuseFailAlloc_2187_, 1, v_a_2128_);
lean_ctor_set(v_reuseFailAlloc_2187_, 2, v_clashes_2179_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
lean_ctor_set_uint8(v___x_2186_, sizeof(void*)*3, v___x_2184_);
v_a_2116_ = v___x_2186_;
goto v___jp_2115_;
}
}
}
}
else
{
lean_dec(v_a_2128_);
v_a_2116_ = v_b_2112_;
goto v___jp_2115_;
}
}
else
{
lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2203_; 
lean_dec_ref(v_b_2112_);
lean_dec_ref(v___x_2108_);
v_a_2191_ = lean_ctor_get(v___x_2127_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2127_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2193_ = v___x_2127_;
v_isShared_2194_ = v_isSharedCheck_2203_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_dec(v___x_2127_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2203_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2195_; uint8_t v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2201_; 
v___x_2195_ = lean_io_error_to_string(v_a_2191_);
v___x_2196_ = 3;
v___x_2197_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2197_, 0, v___x_2195_);
lean_ctor_set_uint8(v___x_2197_, sizeof(void*)*1, v___x_2196_);
lean_inc_ref(v___y_2113_);
v___x_2198_ = lean_apply_2(v___y_2113_, v___x_2197_, lean_box(0));
v___x_2199_ = lean_box(0);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 0, v___x_2199_);
v___x_2201_ = v___x_2193_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v___x_2199_);
v___x_2201_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
return v___x_2201_;
}
}
}
}
else
{
lean_object* v___x_2204_; 
lean_dec_ref(v___x_2108_);
v___x_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2204_, 0, v_b_2112_);
return v___x_2204_;
}
v___jp_2115_:
{
size_t v___x_2117_; size_t v___x_2118_; 
v___x_2117_ = ((size_t)1ULL);
v___x_2118_ = lean_usize_add(v_i_2110_, v___x_2117_);
v_i_2110_ = v___x_2118_;
v_b_2112_ = v_a_2116_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1___boxed(lean_object* v___x_2205_, lean_object* v_as_2206_, lean_object* v_i_2207_, lean_object* v_stop_2208_, lean_object* v_b_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
size_t v_i_boxed_2212_; size_t v_stop_boxed_2213_; lean_object* v_res_2214_; 
v_i_boxed_2212_ = lean_unbox_usize(v_i_2207_);
lean_dec(v_i_2207_);
v_stop_boxed_2213_ = lean_unbox_usize(v_stop_2208_);
lean_dec(v_stop_2208_);
v_res_2214_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v___x_2205_, v_as_2206_, v_i_boxed_2212_, v_stop_boxed_2213_, v_b_2209_, v___y_2210_);
lean_dec_ref(v___y_2210_);
lean_dec_ref(v_as_2206_);
return v_res_2214_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7(void){
_start:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2225_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4));
v___x_2226_ = lean_unsigned_to_nat(4u);
v___x_2227_ = lean_mk_empty_array_with_capacity(v___x_2226_);
v___x_2228_ = lean_array_push(v___x_2227_, v___x_2225_);
return v___x_2228_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2229_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5));
v___x_2230_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7);
v___x_2231_ = lean_array_push(v___x_2230_, v___x_2229_);
return v___x_2231_;
}
}
static uint8_t _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11(void){
_start:
{
uint32_t v___x_2236_; uint8_t v___x_2237_; 
v___x_2236_ = 4;
v___x_2237_ = lean_uint32_to_uint8(v___x_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(lean_object* v_ws_2254_, lean_object* v_rootDeps_2255_, lean_object* v_a_2256_){
_start:
{
lean_object* v___y_2259_; lean_object* v___y_2265_; lean_object* v___y_2266_; uint8_t v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; lean_object* v___y_2276_; uint8_t v___y_2277_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2287_; lean_object* v___y_2288_; lean_object* v___y_2289_; uint8_t v___y_2290_; lean_object* v___y_2291_; lean_object* v___y_2292_; lean_object* v_lakeEnv_2295_; lean_object* v_lakeArgs_x3f_2296_; lean_object* v_packages_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v_baseName_2300_; lean_object* v_dir_2301_; lean_object* v_config_2302_; lean_object* v___x_2303_; lean_object* v_rootToolchainFile_2304_; uint8_t v___y_2306_; uint8_t v___y_2307_; lean_object* v___y_2308_; lean_object* v___y_2309_; lean_object* v___y_2450_; uint8_t v___y_2451_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v_lakeEnv_2295_ = lean_ctor_get(v_ws_2254_, 0);
lean_inc_ref(v_lakeEnv_2295_);
v_lakeArgs_x3f_2296_ = lean_ctor_get(v_ws_2254_, 3);
lean_inc(v_lakeArgs_x3f_2296_);
v_packages_2297_ = lean_ctor_get(v_ws_2254_, 4);
lean_inc_ref(v_packages_2297_);
lean_dec_ref(v_ws_2254_);
v___x_2298_ = lean_unsigned_to_nat(0u);
v___x_2299_ = lean_array_fget(v_packages_2297_, v___x_2298_);
lean_dec_ref(v_packages_2297_);
v_baseName_2300_ = lean_ctor_get(v___x_2299_, 1);
lean_inc(v_baseName_2300_);
v_dir_2301_ = lean_ctor_get(v___x_2299_, 4);
lean_inc_ref_n(v_dir_2301_, 3);
v_config_2302_ = lean_ctor_get(v___x_2299_, 6);
lean_inc_ref(v_config_2302_);
lean_dec(v___x_2299_);
v___x_2303_ = l_Lake_toolchainFileName;
v_rootToolchainFile_2304_ = l_Lake_joinRelative(v_dir_2301_, v___x_2303_);
v___x_2455_ = l_System_FilePath_join(v_dir_2301_, v___x_2303_);
v___x_2456_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_2455_);
lean_dec_ref(v___x_2455_);
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v_a_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2515_; 
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2459_ = v___x_2456_;
v_isShared_2460_ = v_isSharedCheck_2515_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_a_2457_);
lean_dec(v___x_2456_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2515_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v_src_2462_; lean_object* v_tc_x3f_2463_; lean_object* v_clashes_2464_; uint8_t v_fixed_2465_; lean_object* v___y_2489_; uint8_t v_fixedToolchain_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; 
v_fixedToolchain_2503_ = lean_ctor_get_uint8(v_config_2302_, sizeof(void*)*28 + 6);
lean_dec_ref(v_config_2302_);
v___x_2504_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20));
v___x_2505_ = lean_array_get_size(v_rootDeps_2255_);
v___x_2506_ = lean_nat_dec_lt(v___x_2298_, v___x_2505_);
if (v___x_2506_ == 0)
{
lean_dec_ref(v_dir_2301_);
lean_inc(v_a_2457_);
v_src_2462_ = v_baseName_2300_;
v_tc_x3f_2463_ = v_a_2457_;
v_clashes_2464_ = v___x_2504_;
v_fixed_2465_ = v_fixedToolchain_2503_;
goto v___jp_2461_;
}
else
{
lean_object* v___x_2507_; uint8_t v___x_2508_; 
lean_inc(v_a_2457_);
lean_inc(v_baseName_2300_);
v___x_2507_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2507_, 0, v_baseName_2300_);
lean_ctor_set(v___x_2507_, 1, v_a_2457_);
lean_ctor_set(v___x_2507_, 2, v___x_2504_);
lean_ctor_set_uint8(v___x_2507_, sizeof(void*)*3, v_fixedToolchain_2503_);
v___x_2508_ = lean_nat_dec_le(v___x_2505_, v___x_2505_);
if (v___x_2508_ == 0)
{
if (v___x_2506_ == 0)
{
lean_dec_ref_known(v___x_2507_, 3);
lean_dec_ref(v_dir_2301_);
lean_inc(v_a_2457_);
v_src_2462_ = v_baseName_2300_;
v_tc_x3f_2463_ = v_a_2457_;
v_clashes_2464_ = v___x_2504_;
v_fixed_2465_ = v_fixedToolchain_2503_;
goto v___jp_2461_;
}
else
{
size_t v___x_2509_; size_t v___x_2510_; lean_object* v___x_2511_; 
lean_dec(v_baseName_2300_);
v___x_2509_ = ((size_t)0ULL);
v___x_2510_ = lean_usize_of_nat(v___x_2505_);
v___x_2511_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_2301_, v_rootDeps_2255_, v___x_2509_, v___x_2510_, v___x_2507_, v_a_2256_);
v___y_2489_ = v___x_2511_;
goto v___jp_2488_;
}
}
else
{
size_t v___x_2512_; size_t v___x_2513_; lean_object* v___x_2514_; 
lean_dec(v_baseName_2300_);
v___x_2512_ = ((size_t)0ULL);
v___x_2513_ = lean_usize_of_nat(v___x_2505_);
v___x_2514_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_2301_, v_rootDeps_2255_, v___x_2512_, v___x_2513_, v___x_2507_, v_a_2256_);
v___y_2489_ = v___x_2514_;
goto v___jp_2488_;
}
}
v___jp_2461_:
{
lean_object* v___x_2466_; uint8_t v___x_2467_; 
v___x_2466_ = lean_array_get_size(v_clashes_2464_);
v___x_2467_ = lean_nat_dec_lt(v___x_2298_, v___x_2466_);
if (v___x_2467_ == 0)
{
lean_dec_ref(v_clashes_2464_);
lean_dec(v_src_2462_);
if (lean_obj_tag(v_tc_x3f_2463_) == 1)
{
if (lean_obj_tag(v_a_2457_) == 0)
{
lean_object* v_val_2468_; 
lean_del_object(v___x_2459_);
v_val_2468_ = lean_ctor_get(v_tc_x3f_2463_, 0);
lean_inc(v_val_2468_);
lean_dec_ref_known(v_tc_x3f_2463_, 1);
v___y_2450_ = v_val_2468_;
v___y_2451_ = v___x_2467_;
goto v___jp_2449_;
}
else
{
lean_object* v_val_2469_; lean_object* v_val_2470_; uint8_t v___x_2471_; 
v_val_2469_ = lean_ctor_get(v_tc_x3f_2463_, 0);
lean_inc_n(v_val_2469_, 2);
lean_dec_ref_known(v_tc_x3f_2463_, 1);
v_val_2470_ = lean_ctor_get(v_a_2457_, 0);
lean_inc(v_val_2470_);
lean_dec_ref_known(v_a_2457_, 1);
v___x_2471_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_2470_, v_val_2469_);
if (v___x_2471_ == 0)
{
lean_del_object(v___x_2459_);
v___y_2450_ = v_val_2469_;
v___y_2451_ = v___x_2471_;
goto v___jp_2449_;
}
else
{
lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2476_; 
lean_dec(v_val_2469_);
lean_dec_ref(v_rootToolchainFile_2304_);
lean_dec(v_lakeArgs_x3f_2296_);
lean_dec_ref(v_lakeEnv_2295_);
v___x_2472_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16));
lean_inc_ref(v_a_2256_);
v___x_2473_ = lean_apply_2(v_a_2256_, v___x_2472_, lean_box(0));
v___x_2474_ = lean_box(0);
if (v_isShared_2460_ == 0)
{
lean_ctor_set(v___x_2459_, 0, v___x_2474_);
v___x_2476_ = v___x_2459_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v___x_2474_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
}
else
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2481_; 
lean_dec(v_tc_x3f_2463_);
lean_dec(v_a_2457_);
lean_dec_ref(v_rootToolchainFile_2304_);
lean_dec(v_lakeArgs_x3f_2296_);
lean_dec_ref(v_lakeEnv_2295_);
v___x_2478_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18));
lean_inc_ref(v_a_2256_);
v___x_2479_ = lean_apply_2(v_a_2256_, v___x_2478_, lean_box(0));
if (v_isShared_2460_ == 0)
{
lean_ctor_set(v___x_2459_, 0, v___x_2479_);
v___x_2481_ = v___x_2459_;
goto v_reusejp_2480_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v___x_2479_);
v___x_2481_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2480_;
}
v_reusejp_2480_:
{
return v___x_2481_;
}
}
}
else
{
lean_del_object(v___x_2459_);
lean_dec(v_a_2457_);
lean_dec_ref(v_rootToolchainFile_2304_);
lean_dec(v_lakeArgs_x3f_2296_);
lean_dec_ref(v_lakeEnv_2295_);
if (lean_obj_tag(v_tc_x3f_2463_) == 1)
{
if (v_fixed_2465_ == 0)
{
lean_object* v_val_2483_; lean_object* v___x_2484_; 
v_val_2483_ = lean_ctor_get(v_tc_x3f_2463_, 0);
lean_inc(v_val_2483_);
lean_dec_ref_known(v_tc_x3f_2463_, 1);
v___x_2484_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2287_ = v_clashes_2464_;
v___y_2288_ = v_src_2462_;
v___y_2289_ = v_val_2483_;
v___y_2290_ = v___x_2467_;
v___y_2291_ = v___x_2466_;
v___y_2292_ = v___x_2484_;
goto v___jp_2286_;
}
else
{
lean_object* v_val_2485_; lean_object* v___x_2486_; 
v_val_2485_ = lean_ctor_get(v_tc_x3f_2463_, 0);
lean_inc(v_val_2485_);
lean_dec_ref_known(v_tc_x3f_2463_, 1);
v___x_2486_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2287_ = v_clashes_2464_;
v___y_2288_ = v_src_2462_;
v___y_2289_ = v_val_2485_;
v___y_2290_ = v___x_2467_;
v___y_2291_ = v___x_2466_;
v___y_2292_ = v___x_2486_;
goto v___jp_2286_;
}
}
else
{
lean_object* v___x_2487_; 
lean_dec(v_tc_x3f_2463_);
lean_dec(v_src_2462_);
v___x_2487_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19));
v___y_2265_ = v_clashes_2464_;
v___y_2266_ = v___x_2466_;
v___y_2267_ = v___x_2467_;
v___y_2268_ = v___x_2487_;
goto v___jp_2264_;
}
}
}
v___jp_2488_:
{
if (lean_obj_tag(v___y_2489_) == 0)
{
lean_object* v_a_2490_; lean_object* v_src_2491_; lean_object* v_tc_x3f_2492_; lean_object* v_clashes_2493_; uint8_t v_fixed_2494_; 
v_a_2490_ = lean_ctor_get(v___y_2489_, 0);
lean_inc(v_a_2490_);
lean_dec_ref_known(v___y_2489_, 1);
v_src_2491_ = lean_ctor_get(v_a_2490_, 0);
lean_inc(v_src_2491_);
v_tc_x3f_2492_ = lean_ctor_get(v_a_2490_, 1);
lean_inc(v_tc_x3f_2492_);
v_clashes_2493_ = lean_ctor_get(v_a_2490_, 2);
lean_inc_ref(v_clashes_2493_);
v_fixed_2494_ = lean_ctor_get_uint8(v_a_2490_, sizeof(void*)*3);
lean_dec(v_a_2490_);
v_src_2462_ = v_src_2491_;
v_tc_x3f_2463_ = v_tc_x3f_2492_;
v_clashes_2464_ = v_clashes_2493_;
v_fixed_2465_ = v_fixed_2494_;
goto v___jp_2461_;
}
else
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
lean_del_object(v___x_2459_);
lean_dec(v_a_2457_);
lean_dec_ref(v_rootToolchainFile_2304_);
lean_dec(v_lakeArgs_x3f_2296_);
lean_dec_ref(v_lakeEnv_2295_);
v_a_2495_ = lean_ctor_get(v___y_2489_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___y_2489_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___y_2489_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___y_2489_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
}
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2528_; 
lean_dec_ref(v_rootToolchainFile_2304_);
lean_dec_ref(v_config_2302_);
lean_dec_ref(v_dir_2301_);
lean_dec(v_baseName_2300_);
lean_dec(v_lakeArgs_x3f_2296_);
lean_dec_ref(v_lakeEnv_2295_);
v_a_2516_ = lean_ctor_get(v___x_2456_, 0);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2528_ == 0)
{
v___x_2518_ = v___x_2456_;
v_isShared_2519_ = v_isSharedCheck_2528_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v___x_2456_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2528_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2520_; uint8_t v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2526_; 
v___x_2520_ = lean_io_error_to_string(v_a_2516_);
v___x_2521_ = 3;
v___x_2522_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2522_, 0, v___x_2520_);
lean_ctor_set_uint8(v___x_2522_, sizeof(void*)*1, v___x_2521_);
lean_inc_ref(v_a_2256_);
v___x_2523_ = lean_apply_2(v_a_2256_, v___x_2522_, lean_box(0));
v___x_2524_ = lean_box(0);
if (v_isShared_2519_ == 0)
{
lean_ctor_set(v___x_2518_, 0, v___x_2524_);
v___x_2526_ = v___x_2518_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v___x_2524_);
v___x_2526_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
return v___x_2526_;
}
}
}
v___jp_2258_:
{
uint8_t v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2260_ = 2;
v___x_2261_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2261_, 0, v___y_2259_);
lean_ctor_set_uint8(v___x_2261_, sizeof(void*)*1, v___x_2260_);
lean_inc_ref(v_a_2256_);
v___x_2262_ = lean_apply_2(v_a_2256_, v___x_2261_, lean_box(0));
v___x_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2262_);
return v___x_2263_;
}
v___jp_2264_:
{
if (v___y_2267_ == 0)
{
lean_dec(v___y_2266_);
lean_dec_ref(v___y_2265_);
v___y_2259_ = v___y_2268_;
goto v___jp_2258_;
}
else
{
size_t v___x_2269_; size_t v___x_2270_; lean_object* v___x_2271_; 
v___x_2269_ = ((size_t)0ULL);
v___x_2270_ = lean_usize_of_nat(v___y_2266_);
v___x_2271_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_2266_, v___y_2265_, v___x_2269_, v___x_2270_, v___y_2268_);
lean_dec_ref(v___y_2265_);
lean_dec(v___y_2266_);
v___y_2259_ = v___x_2271_;
goto v___jp_2258_;
}
}
v___jp_2272_:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
lean_inc_ref(v___y_2274_);
v___x_2280_ = lean_string_append(v___y_2274_, v___y_2279_);
lean_dec_ref(v___y_2279_);
v___x_2281_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2282_ = lean_string_append(v___x_2280_, v___x_2281_);
v___x_2283_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_2275_, v___y_2277_);
v___x_2284_ = lean_string_append(v___x_2282_, v___x_2283_);
lean_dec_ref(v___x_2283_);
v___x_2285_ = lean_string_append(v___x_2284_, v___y_2278_);
v___y_2265_ = v___y_2273_;
v___y_2266_ = v___y_2276_;
v___y_2267_ = v___y_2277_;
v___y_2268_ = v___x_2285_;
goto v___jp_2264_;
}
v___jp_2286_:
{
lean_object* v___x_2293_; lean_object* v_toString_2294_; 
v___x_2293_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0));
v_toString_2294_ = lean_ctor_get(v___y_2289_, 0);
lean_inc_ref(v_toString_2294_);
lean_dec_ref(v___y_2289_);
v___y_2273_ = v___y_2287_;
v___y_2274_ = v___x_2293_;
v___y_2275_ = v___y_2288_;
v___y_2276_ = v___y_2291_;
v___y_2277_ = v___y_2290_;
v___y_2278_ = v___y_2292_;
v___y_2279_ = v_toString_2294_;
goto v___jp_2272_;
}
v___jp_2305_:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; uint8_t v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
lean_inc_ref(v___y_2308_);
v___x_2310_ = lean_string_append(v___y_2308_, v___y_2309_);
v___x_2311_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_2312_ = lean_string_append(v___x_2310_, v___x_2311_);
v___x_2313_ = 1;
v___x_2314_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2314_, 0, v___x_2312_);
lean_ctor_set_uint8(v___x_2314_, sizeof(void*)*1, v___x_2313_);
lean_inc_ref(v_a_2256_);
v___x_2315_ = lean_apply_2(v_a_2256_, v___x_2314_, lean_box(0));
v___x_2316_ = l_IO_FS_writeFile(v_rootToolchainFile_2304_, v___y_2309_);
lean_dec_ref(v_rootToolchainFile_2304_);
if (lean_obj_tag(v___x_2316_) == 0)
{
lean_dec_ref_known(v___x_2316_, 1);
if (lean_obj_tag(v_lakeArgs_x3f_2296_) == 1)
{
lean_object* v_elan_x3f_2317_; 
v_elan_x3f_2317_ = lean_ctor_get(v_lakeEnv_2295_, 2);
if (lean_obj_tag(v_elan_x3f_2317_) == 1)
{
lean_object* v_val_2318_; lean_object* v_val_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v_elan_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v_val_2318_ = lean_ctor_get(v_lakeArgs_x3f_2296_, 0);
lean_inc(v_val_2318_);
lean_dec_ref_known(v_lakeArgs_x3f_2296_, 1);
v_val_2319_ = lean_ctor_get(v_elan_x3f_2317_, 0);
v___x_2320_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2));
lean_inc_ref(v_a_2256_);
v___x_2321_ = lean_apply_2(v_a_2256_, v___x_2320_, lean_box(0));
v___x_2322_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3));
v_elan_2323_ = lean_ctor_get(v_val_2319_, 1);
lean_inc_ref(v_elan_2323_);
v___x_2324_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6));
v___x_2325_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8);
v___x_2326_ = lean_array_push(v___x_2325_, v___y_2309_);
v___x_2327_ = lean_array_push(v___x_2326_, v___x_2324_);
v___x_2328_ = l_Array_append___redArg(v___x_2327_, v_val_2318_);
lean_dec(v_val_2318_);
v___x_2329_ = lean_box(0);
v___x_2330_ = l_Lake_Env_noToolchainVars(v_lakeEnv_2295_);
v___x_2331_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2331_, 0, v___x_2322_);
lean_ctor_set(v___x_2331_, 1, v_elan_2323_);
lean_ctor_set(v___x_2331_, 2, v___x_2328_);
lean_ctor_set(v___x_2331_, 3, v___x_2329_);
lean_ctor_set(v___x_2331_, 4, v___x_2330_);
lean_ctor_set_uint8(v___x_2331_, sizeof(void*)*5, v___y_2307_);
lean_ctor_set_uint8(v___x_2331_, sizeof(void*)*5 + 1, v___y_2306_);
v___x_2332_ = lean_io_process_spawn(v___x_2331_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; lean_object* v___x_2334_; 
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2333_);
lean_dec_ref_known(v___x_2332_, 1);
v___x_2334_ = lean_io_process_child_wait(v___x_2322_, v_a_2333_);
lean_dec(v_a_2333_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v_a_2335_; uint32_t v___x_2336_; uint8_t v___x_2337_; lean_object* v___x_2338_; 
v_a_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_a_2335_);
lean_dec_ref_known(v___x_2334_, 1);
v___x_2336_ = lean_unbox_uint32(v_a_2335_);
lean_dec(v_a_2335_);
v___x_2337_ = lean_uint32_to_uint8(v___x_2336_);
v___x_2338_ = lean_io_exit(v___x_2337_);
if (lean_obj_tag(v___x_2338_) == 0)
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2346_; 
v_a_2339_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2341_ = v___x_2338_;
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2338_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2339_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
else
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2359_; 
v_a_2347_ = lean_ctor_get(v___x_2338_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2338_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2349_ = v___x_2338_;
v_isShared_2350_ = v_isSharedCheck_2359_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v___x_2338_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2359_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2351_; uint8_t v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2357_; 
v___x_2351_ = lean_io_error_to_string(v_a_2347_);
v___x_2352_ = 3;
v___x_2353_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2353_, 0, v___x_2351_);
lean_ctor_set_uint8(v___x_2353_, sizeof(void*)*1, v___x_2352_);
lean_inc_ref(v_a_2256_);
v___x_2354_ = lean_apply_2(v_a_2256_, v___x_2353_, lean_box(0));
v___x_2355_ = lean_box(0);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v___x_2355_);
v___x_2357_ = v___x_2349_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v___x_2355_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2372_; 
v_a_2360_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2362_ = v___x_2334_;
v_isShared_2363_ = v_isSharedCheck_2372_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2334_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2372_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2364_; uint8_t v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2370_; 
v___x_2364_ = lean_io_error_to_string(v_a_2360_);
v___x_2365_ = 3;
v___x_2366_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2366_, 0, v___x_2364_);
lean_ctor_set_uint8(v___x_2366_, sizeof(void*)*1, v___x_2365_);
lean_inc_ref(v_a_2256_);
v___x_2367_ = lean_apply_2(v_a_2256_, v___x_2366_, lean_box(0));
v___x_2368_ = lean_box(0);
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 0, v___x_2368_);
v___x_2370_ = v___x_2362_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v___x_2368_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2385_; 
v_a_2373_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2375_ = v___x_2332_;
v_isShared_2376_ = v_isSharedCheck_2385_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2332_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2385_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2377_; uint8_t v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2383_; 
v___x_2377_ = lean_io_error_to_string(v_a_2373_);
v___x_2378_ = 3;
v___x_2379_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2379_, 0, v___x_2377_);
lean_ctor_set_uint8(v___x_2379_, sizeof(void*)*1, v___x_2378_);
lean_inc_ref(v_a_2256_);
v___x_2380_ = lean_apply_2(v_a_2256_, v___x_2379_, lean_box(0));
v___x_2381_ = lean_box(0);
if (v_isShared_2376_ == 0)
{
lean_ctor_set(v___x_2375_, 0, v___x_2381_);
v___x_2383_ = v___x_2375_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v___x_2381_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
else
{
lean_object* v___x_2386_; lean_object* v___x_2387_; uint8_t v___x_2388_; lean_object* v___x_2389_; 
lean_dec_ref_known(v_lakeArgs_x3f_2296_, 1);
lean_dec_ref(v___y_2309_);
lean_dec_ref(v_lakeEnv_2295_);
v___x_2386_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10));
lean_inc_ref(v_a_2256_);
v___x_2387_ = lean_apply_2(v_a_2256_, v___x_2386_, lean_box(0));
v___x_2388_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11);
v___x_2389_ = lean_io_exit(v___x_2388_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2397_; 
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2392_ = v___x_2389_;
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2389_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2395_; 
if (v_isShared_2393_ == 0)
{
v___x_2395_ = v___x_2392_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_a_2390_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
else
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2410_; 
v_a_2398_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2400_ = v___x_2389_;
v_isShared_2401_ = v_isSharedCheck_2410_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2389_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2410_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2402_; uint8_t v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2408_; 
v___x_2402_ = lean_io_error_to_string(v_a_2398_);
v___x_2403_ = 3;
v___x_2404_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2404_, 0, v___x_2402_);
lean_ctor_set_uint8(v___x_2404_, sizeof(void*)*1, v___x_2403_);
lean_inc_ref(v_a_2256_);
v___x_2405_ = lean_apply_2(v_a_2256_, v___x_2404_, lean_box(0));
v___x_2406_ = lean_box(0);
if (v_isShared_2401_ == 0)
{
lean_ctor_set(v___x_2400_, 0, v___x_2406_);
v___x_2408_ = v___x_2400_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v___x_2406_);
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
lean_object* v___x_2411_; lean_object* v___x_2412_; uint8_t v___x_2413_; lean_object* v___x_2414_; 
lean_dec_ref(v___y_2309_);
lean_dec(v_lakeArgs_x3f_2296_);
lean_dec_ref(v_lakeEnv_2295_);
v___x_2411_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13));
lean_inc_ref(v_a_2256_);
v___x_2412_ = lean_apply_2(v_a_2256_, v___x_2411_, lean_box(0));
v___x_2413_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11);
v___x_2414_ = lean_io_exit(v___x_2413_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2422_; 
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2417_ = v___x_2414_;
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2414_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2415_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2435_; 
v_a_2423_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2435_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2425_ = v___x_2414_;
v_isShared_2426_ = v_isSharedCheck_2435_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2414_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2435_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2427_; uint8_t v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2433_; 
v___x_2427_ = lean_io_error_to_string(v_a_2423_);
v___x_2428_ = 3;
v___x_2429_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2429_, 0, v___x_2427_);
lean_ctor_set_uint8(v___x_2429_, sizeof(void*)*1, v___x_2428_);
lean_inc_ref(v_a_2256_);
v___x_2430_ = lean_apply_2(v_a_2256_, v___x_2429_, lean_box(0));
v___x_2431_ = lean_box(0);
if (v_isShared_2426_ == 0)
{
lean_ctor_set(v___x_2425_, 0, v___x_2431_);
v___x_2433_ = v___x_2425_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v___x_2431_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
}
}
}
}
}
else
{
lean_object* v_a_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2448_; 
lean_dec_ref(v___y_2309_);
lean_dec(v_lakeArgs_x3f_2296_);
lean_dec_ref(v_lakeEnv_2295_);
v_a_2436_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2438_ = v___x_2316_;
v_isShared_2439_ = v_isSharedCheck_2448_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_a_2436_);
lean_dec(v___x_2316_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2448_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
lean_object* v___x_2440_; uint8_t v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2446_; 
v___x_2440_ = lean_io_error_to_string(v_a_2436_);
v___x_2441_ = 3;
v___x_2442_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2442_, 0, v___x_2440_);
lean_ctor_set_uint8(v___x_2442_, sizeof(void*)*1, v___x_2441_);
lean_inc_ref(v_a_2256_);
v___x_2443_ = lean_apply_2(v_a_2256_, v___x_2442_, lean_box(0));
v___x_2444_ = lean_box(0);
if (v_isShared_2439_ == 0)
{
lean_ctor_set(v___x_2438_, 0, v___x_2444_);
v___x_2446_ = v___x_2438_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v___x_2444_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
return v___x_2446_;
}
}
}
}
v___jp_2449_:
{
uint8_t v___x_2452_; lean_object* v___x_2453_; lean_object* v_toString_2454_; 
v___x_2452_ = 1;
v___x_2453_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14));
v_toString_2454_ = lean_ctor_get(v___y_2450_, 0);
lean_inc_ref(v_toString_2454_);
lean_dec_ref(v___y_2450_);
v___y_2306_ = v___y_2451_;
v___y_2307_ = v___x_2452_;
v___y_2308_ = v___x_2453_;
v___y_2309_ = v_toString_2454_;
goto v___jp_2305_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___boxed(lean_object* v_ws_2529_, lean_object* v_rootDeps_2530_, lean_object* v_a_2531_, lean_object* v___y_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(v_ws_2529_, v_rootDeps_2530_, v_a_2531_);
lean_dec_ref(v_a_2531_);
lean_dec_ref(v_rootDeps_2530_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(lean_object* v_pkg_2534_, lean_object* v_dep_2535_, lean_object* v_ws_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_){
_start:
{
lean_object* v___x_2540_; 
v___x_2540_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_2536_, v_pkg_2534_, v_dep_2535_, v___y_2537_, v___y_2538_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v_a_2541_; lean_object* v_fst_2542_; lean_object* v_snd_2543_; lean_object* v___x_2544_; 
v_a_2541_ = lean_ctor_get(v___x_2540_, 0);
lean_inc(v_a_2541_);
lean_dec_ref_known(v___x_2540_, 1);
v_fst_2542_ = lean_ctor_get(v_a_2541_, 0);
lean_inc_n(v_fst_2542_, 2);
v_snd_2543_ = lean_ctor_get(v_a_2541_, 1);
lean_inc(v_snd_2543_);
lean_dec(v_a_2541_);
v___x_2544_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_fst_2542_, v_snd_2543_, v___y_2538_);
if (lean_obj_tag(v___x_2544_) == 0)
{
lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2561_; 
v_a_2545_ = lean_ctor_get(v___x_2544_, 0);
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2547_ = v___x_2544_;
v_isShared_2548_ = v_isSharedCheck_2561_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___x_2544_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2561_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v_snd_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2559_; 
v_snd_2549_ = lean_ctor_get(v_a_2545_, 1);
v_isSharedCheck_2559_ = !lean_is_exclusive(v_a_2545_);
if (v_isSharedCheck_2559_ == 0)
{
lean_object* v_unused_2560_; 
v_unused_2560_ = lean_ctor_get(v_a_2545_, 0);
lean_dec(v_unused_2560_);
v___x_2551_ = v_a_2545_;
v_isShared_2552_ = v_isSharedCheck_2559_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_snd_2549_);
lean_dec(v_a_2545_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2559_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2554_; 
if (v_isShared_2552_ == 0)
{
lean_ctor_set(v___x_2551_, 0, v_fst_2542_);
v___x_2554_ = v___x_2551_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2558_; 
v_reuseFailAlloc_2558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2558_, 0, v_fst_2542_);
lean_ctor_set(v_reuseFailAlloc_2558_, 1, v_snd_2549_);
v___x_2554_ = v_reuseFailAlloc_2558_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
lean_object* v___x_2556_; 
if (v_isShared_2548_ == 0)
{
lean_ctor_set(v___x_2547_, 0, v___x_2554_);
v___x_2556_ = v___x_2547_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v___x_2554_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
}
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
lean_dec(v_fst_2542_);
v_a_2562_ = lean_ctor_get(v___x_2544_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2544_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2544_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
else
{
return v___x_2540_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep___boxed(lean_object* v_pkg_2570_, lean_object* v_dep_2571_, lean_object* v_ws_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(v_pkg_2570_, v_dep_2571_, v_ws_2572_, v___y_2573_, v___y_2574_);
lean_dec_ref(v___y_2574_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(lean_object* v_a_2577_, lean_object* v_ws_2578_, lean_object* v_rootDeps_2579_){
_start:
{
lean_object* v___y_2582_; lean_object* v___y_2588_; uint8_t v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2596_; lean_object* v___y_2597_; uint8_t v___y_2598_; lean_object* v___y_2599_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; uint8_t v___y_2613_; lean_object* v___y_2614_; lean_object* v___y_2615_; lean_object* v_lakeEnv_2618_; lean_object* v_lakeArgs_x3f_2619_; lean_object* v_packages_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v_baseName_2623_; lean_object* v_dir_2624_; lean_object* v_config_2625_; lean_object* v___x_2626_; lean_object* v_rootToolchainFile_2627_; lean_object* v___y_2629_; uint8_t v___y_2630_; uint8_t v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2775_; uint8_t v___y_2776_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v_lakeEnv_2618_ = lean_ctor_get(v_ws_2578_, 0);
lean_inc_ref(v_lakeEnv_2618_);
v_lakeArgs_x3f_2619_ = lean_ctor_get(v_ws_2578_, 3);
lean_inc(v_lakeArgs_x3f_2619_);
v_packages_2620_ = lean_ctor_get(v_ws_2578_, 4);
lean_inc_ref(v_packages_2620_);
lean_dec_ref(v_ws_2578_);
v___x_2621_ = lean_unsigned_to_nat(0u);
v___x_2622_ = lean_array_fget(v_packages_2620_, v___x_2621_);
lean_dec_ref(v_packages_2620_);
v_baseName_2623_ = lean_ctor_get(v___x_2622_, 1);
lean_inc(v_baseName_2623_);
v_dir_2624_ = lean_ctor_get(v___x_2622_, 4);
lean_inc_ref_n(v_dir_2624_, 3);
v_config_2625_ = lean_ctor_get(v___x_2622_, 6);
lean_inc_ref(v_config_2625_);
lean_dec(v___x_2622_);
v___x_2626_ = l_Lake_toolchainFileName;
v_rootToolchainFile_2627_ = l_Lake_joinRelative(v_dir_2624_, v___x_2626_);
v___x_2780_ = l_System_FilePath_join(v_dir_2624_, v___x_2626_);
v___x_2781_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_2780_);
lean_dec_ref(v___x_2780_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2834_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2784_ = v___x_2781_;
v_isShared_2785_ = v_isSharedCheck_2834_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2781_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2834_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v_src_2787_; lean_object* v_tc_x3f_2788_; lean_object* v_clashes_2789_; uint8_t v_fixed_2790_; uint8_t v_fixedToolchain_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; uint8_t v___x_2816_; 
v_fixedToolchain_2813_ = lean_ctor_get_uint8(v_config_2625_, sizeof(void*)*28 + 6);
lean_dec_ref(v_config_2625_);
v___x_2814_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20));
v___x_2815_ = lean_array_get_size(v_rootDeps_2579_);
v___x_2816_ = lean_nat_dec_lt(v___x_2621_, v___x_2815_);
if (v___x_2816_ == 0)
{
lean_dec_ref(v_dir_2624_);
lean_inc(v_a_2782_);
v_src_2787_ = v_baseName_2623_;
v_tc_x3f_2788_ = v_a_2782_;
v_clashes_2789_ = v___x_2814_;
v_fixed_2790_ = v_fixedToolchain_2813_;
goto v___jp_2786_;
}
else
{
lean_object* v___x_2817_; size_t v___x_2818_; size_t v___x_2819_; lean_object* v___x_2820_; 
lean_inc(v_a_2782_);
v___x_2817_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2817_, 0, v_baseName_2623_);
lean_ctor_set(v___x_2817_, 1, v_a_2782_);
lean_ctor_set(v___x_2817_, 2, v___x_2814_);
lean_ctor_set_uint8(v___x_2817_, sizeof(void*)*3, v_fixedToolchain_2813_);
v___x_2818_ = ((size_t)0ULL);
v___x_2819_ = lean_usize_of_nat(v___x_2815_);
v___x_2820_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_2624_, v_rootDeps_2579_, v___x_2818_, v___x_2819_, v___x_2817_, v_a_2577_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_object* v_a_2821_; lean_object* v_src_2822_; lean_object* v_tc_x3f_2823_; lean_object* v_clashes_2824_; uint8_t v_fixed_2825_; 
v_a_2821_ = lean_ctor_get(v___x_2820_, 0);
lean_inc(v_a_2821_);
lean_dec_ref_known(v___x_2820_, 1);
v_src_2822_ = lean_ctor_get(v_a_2821_, 0);
lean_inc(v_src_2822_);
v_tc_x3f_2823_ = lean_ctor_get(v_a_2821_, 1);
lean_inc(v_tc_x3f_2823_);
v_clashes_2824_ = lean_ctor_get(v_a_2821_, 2);
lean_inc_ref(v_clashes_2824_);
v_fixed_2825_ = lean_ctor_get_uint8(v_a_2821_, sizeof(void*)*3);
lean_dec(v_a_2821_);
v_src_2787_ = v_src_2822_;
v_tc_x3f_2788_ = v_tc_x3f_2823_;
v_clashes_2789_ = v_clashes_2824_;
v_fixed_2790_ = v_fixed_2825_;
goto v___jp_2786_;
}
else
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2833_; 
lean_del_object(v___x_2784_);
lean_dec(v_a_2782_);
lean_dec_ref(v_rootToolchainFile_2627_);
lean_dec(v_lakeArgs_x3f_2619_);
lean_dec_ref(v_lakeEnv_2618_);
v_a_2826_ = lean_ctor_get(v___x_2820_, 0);
v_isSharedCheck_2833_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2833_ == 0)
{
v___x_2828_ = v___x_2820_;
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v___x_2820_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2831_; 
if (v_isShared_2829_ == 0)
{
v___x_2831_ = v___x_2828_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_a_2826_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
}
}
v___jp_2786_:
{
lean_object* v___x_2791_; uint8_t v___x_2792_; 
v___x_2791_ = lean_array_get_size(v_clashes_2789_);
v___x_2792_ = lean_nat_dec_lt(v___x_2621_, v___x_2791_);
if (v___x_2792_ == 0)
{
lean_dec_ref(v_clashes_2789_);
lean_dec(v_src_2787_);
if (lean_obj_tag(v_tc_x3f_2788_) == 1)
{
if (lean_obj_tag(v_a_2782_) == 0)
{
lean_object* v_val_2793_; 
lean_del_object(v___x_2784_);
v_val_2793_ = lean_ctor_get(v_tc_x3f_2788_, 0);
lean_inc(v_val_2793_);
lean_dec_ref_known(v_tc_x3f_2788_, 1);
v___y_2775_ = v_val_2793_;
v___y_2776_ = v___x_2792_;
goto v___jp_2774_;
}
else
{
lean_object* v_val_2794_; lean_object* v_val_2795_; uint8_t v___x_2796_; 
v_val_2794_ = lean_ctor_get(v_tc_x3f_2788_, 0);
lean_inc_n(v_val_2794_, 2);
lean_dec_ref_known(v_tc_x3f_2788_, 1);
v_val_2795_ = lean_ctor_get(v_a_2782_, 0);
lean_inc(v_val_2795_);
lean_dec_ref_known(v_a_2782_, 1);
v___x_2796_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_2795_, v_val_2794_);
if (v___x_2796_ == 0)
{
lean_del_object(v___x_2784_);
v___y_2775_ = v_val_2794_;
v___y_2776_ = v___x_2796_;
goto v___jp_2774_;
}
else
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2801_; 
lean_dec(v_val_2794_);
lean_dec_ref(v_rootToolchainFile_2627_);
lean_dec(v_lakeArgs_x3f_2619_);
lean_dec_ref(v_lakeEnv_2618_);
v___x_2797_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16));
lean_inc_ref(v_a_2577_);
v___x_2798_ = lean_apply_2(v_a_2577_, v___x_2797_, lean_box(0));
v___x_2799_ = lean_box(0);
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 0, v___x_2799_);
v___x_2801_ = v___x_2784_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v___x_2799_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
else
{
lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2806_; 
lean_dec(v_tc_x3f_2788_);
lean_dec(v_a_2782_);
lean_dec_ref(v_rootToolchainFile_2627_);
lean_dec(v_lakeArgs_x3f_2619_);
lean_dec_ref(v_lakeEnv_2618_);
v___x_2803_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18));
lean_inc_ref(v_a_2577_);
v___x_2804_ = lean_apply_2(v_a_2577_, v___x_2803_, lean_box(0));
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 0, v___x_2804_);
v___x_2806_ = v___x_2784_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v___x_2804_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
else
{
lean_del_object(v___x_2784_);
lean_dec(v_a_2782_);
lean_dec_ref(v_rootToolchainFile_2627_);
lean_dec(v_lakeArgs_x3f_2619_);
lean_dec_ref(v_lakeEnv_2618_);
if (lean_obj_tag(v_tc_x3f_2788_) == 1)
{
if (v_fixed_2790_ == 0)
{
lean_object* v_val_2808_; lean_object* v___x_2809_; 
v_val_2808_ = lean_ctor_get(v_tc_x3f_2788_, 0);
lean_inc(v_val_2808_);
lean_dec_ref_known(v_tc_x3f_2788_, 1);
v___x_2809_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2610_ = v_val_2808_;
v___y_2611_ = v_clashes_2789_;
v___y_2612_ = v_src_2787_;
v___y_2613_ = v___x_2792_;
v___y_2614_ = v___x_2791_;
v___y_2615_ = v___x_2809_;
goto v___jp_2609_;
}
else
{
lean_object* v_val_2810_; lean_object* v___x_2811_; 
v_val_2810_ = lean_ctor_get(v_tc_x3f_2788_, 0);
lean_inc(v_val_2810_);
lean_dec_ref_known(v_tc_x3f_2788_, 1);
v___x_2811_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2610_ = v_val_2810_;
v___y_2611_ = v_clashes_2789_;
v___y_2612_ = v_src_2787_;
v___y_2613_ = v___x_2792_;
v___y_2614_ = v___x_2791_;
v___y_2615_ = v___x_2811_;
goto v___jp_2609_;
}
}
else
{
lean_object* v___x_2812_; 
lean_dec(v_tc_x3f_2788_);
lean_dec(v_src_2787_);
v___x_2812_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19));
v___y_2588_ = v_clashes_2789_;
v___y_2589_ = v___x_2792_;
v___y_2590_ = v___x_2791_;
v___y_2591_ = v___x_2812_;
goto v___jp_2587_;
}
}
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2847_; 
lean_dec_ref(v_rootToolchainFile_2627_);
lean_dec_ref(v_config_2625_);
lean_dec_ref(v_dir_2624_);
lean_dec(v_baseName_2623_);
lean_dec(v_lakeArgs_x3f_2619_);
lean_dec_ref(v_lakeEnv_2618_);
v_a_2835_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2837_ = v___x_2781_;
v_isShared_2838_ = v_isSharedCheck_2847_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2781_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2847_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2839_; uint8_t v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2845_; 
v___x_2839_ = lean_io_error_to_string(v_a_2835_);
v___x_2840_ = 3;
v___x_2841_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2841_, 0, v___x_2839_);
lean_ctor_set_uint8(v___x_2841_, sizeof(void*)*1, v___x_2840_);
lean_inc_ref(v_a_2577_);
v___x_2842_ = lean_apply_2(v_a_2577_, v___x_2841_, lean_box(0));
v___x_2843_ = lean_box(0);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 0, v___x_2843_);
v___x_2845_ = v___x_2837_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v___x_2843_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
v___jp_2581_:
{
uint8_t v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2583_ = 2;
v___x_2584_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2584_, 0, v___y_2582_);
lean_ctor_set_uint8(v___x_2584_, sizeof(void*)*1, v___x_2583_);
lean_inc_ref(v_a_2577_);
v___x_2585_ = lean_apply_2(v_a_2577_, v___x_2584_, lean_box(0));
v___x_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2585_);
return v___x_2586_;
}
v___jp_2587_:
{
if (v___y_2589_ == 0)
{
lean_dec(v___y_2590_);
lean_dec_ref(v___y_2588_);
v___y_2582_ = v___y_2591_;
goto v___jp_2581_;
}
else
{
size_t v___x_2592_; size_t v___x_2593_; lean_object* v___x_2594_; 
v___x_2592_ = ((size_t)0ULL);
v___x_2593_ = lean_usize_of_nat(v___y_2590_);
v___x_2594_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_2590_, v___y_2588_, v___x_2592_, v___x_2593_, v___y_2591_);
lean_dec_ref(v___y_2588_);
lean_dec(v___y_2590_);
v___y_2582_ = v___x_2594_;
goto v___jp_2581_;
}
}
v___jp_2595_:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
lean_inc_ref(v___y_2600_);
v___x_2603_ = lean_string_append(v___y_2600_, v___y_2602_);
lean_dec_ref(v___y_2602_);
v___x_2604_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2605_ = lean_string_append(v___x_2603_, v___x_2604_);
v___x_2606_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_2597_, v___y_2598_);
v___x_2607_ = lean_string_append(v___x_2605_, v___x_2606_);
lean_dec_ref(v___x_2606_);
v___x_2608_ = lean_string_append(v___x_2607_, v___y_2599_);
v___y_2588_ = v___y_2596_;
v___y_2589_ = v___y_2598_;
v___y_2590_ = v___y_2601_;
v___y_2591_ = v___x_2608_;
goto v___jp_2587_;
}
v___jp_2609_:
{
lean_object* v___x_2616_; lean_object* v_toString_2617_; 
v___x_2616_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0));
v_toString_2617_ = lean_ctor_get(v___y_2610_, 0);
lean_inc_ref(v_toString_2617_);
lean_dec_ref(v___y_2610_);
v___y_2596_ = v___y_2611_;
v___y_2597_ = v___y_2612_;
v___y_2598_ = v___y_2613_;
v___y_2599_ = v___y_2615_;
v___y_2600_ = v___x_2616_;
v___y_2601_ = v___y_2614_;
v___y_2602_ = v_toString_2617_;
goto v___jp_2595_;
}
v___jp_2628_:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; uint8_t v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
lean_inc_ref(v___y_2629_);
v___x_2633_ = lean_string_append(v___y_2629_, v___y_2632_);
v___x_2634_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_2635_ = lean_string_append(v___x_2633_, v___x_2634_);
v___x_2636_ = 1;
v___x_2637_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2637_, 0, v___x_2635_);
lean_ctor_set_uint8(v___x_2637_, sizeof(void*)*1, v___x_2636_);
lean_inc_ref(v_a_2577_);
v___x_2638_ = lean_apply_2(v_a_2577_, v___x_2637_, lean_box(0));
v___x_2639_ = l_IO_FS_writeFile(v_rootToolchainFile_2627_, v___y_2632_);
lean_dec_ref(v_rootToolchainFile_2627_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_dec_ref_known(v___x_2639_, 1);
if (lean_obj_tag(v_lakeArgs_x3f_2619_) == 1)
{
lean_object* v_elan_x3f_2640_; 
v_elan_x3f_2640_ = lean_ctor_get(v_lakeEnv_2618_, 2);
if (lean_obj_tag(v_elan_x3f_2640_) == 1)
{
lean_object* v_val_2641_; lean_object* v_val_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v_elan_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v_val_2641_ = lean_ctor_get(v_lakeArgs_x3f_2619_, 0);
lean_inc(v_val_2641_);
lean_dec_ref_known(v_lakeArgs_x3f_2619_, 1);
v_val_2642_ = lean_ctor_get(v_elan_x3f_2640_, 0);
v___x_2643_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2));
lean_inc_ref(v_a_2577_);
v___x_2644_ = lean_apply_2(v_a_2577_, v___x_2643_, lean_box(0));
v___x_2645_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3));
v_elan_2646_ = lean_ctor_get(v_val_2642_, 1);
lean_inc_ref(v_elan_2646_);
v___x_2647_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6));
v___x_2648_ = lean_unsigned_to_nat(4u);
v___x_2649_ = lean_mk_empty_array_with_capacity(v___x_2648_);
lean_dec_ref(v___x_2649_);
v___x_2650_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8);
v___x_2651_ = lean_array_push(v___x_2650_, v___y_2632_);
v___x_2652_ = lean_array_push(v___x_2651_, v___x_2647_);
v___x_2653_ = l_Array_append___redArg(v___x_2652_, v_val_2641_);
lean_dec(v_val_2641_);
v___x_2654_ = lean_box(0);
v___x_2655_ = l_Lake_Env_noToolchainVars(v_lakeEnv_2618_);
v___x_2656_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2656_, 0, v___x_2645_);
lean_ctor_set(v___x_2656_, 1, v_elan_2646_);
lean_ctor_set(v___x_2656_, 2, v___x_2653_);
lean_ctor_set(v___x_2656_, 3, v___x_2654_);
lean_ctor_set(v___x_2656_, 4, v___x_2655_);
lean_ctor_set_uint8(v___x_2656_, sizeof(void*)*5, v___y_2630_);
lean_ctor_set_uint8(v___x_2656_, sizeof(void*)*5 + 1, v___y_2631_);
v___x_2657_ = lean_io_process_spawn(v___x_2656_);
if (lean_obj_tag(v___x_2657_) == 0)
{
lean_object* v_a_2658_; lean_object* v___x_2659_; 
v_a_2658_ = lean_ctor_get(v___x_2657_, 0);
lean_inc(v_a_2658_);
lean_dec_ref_known(v___x_2657_, 1);
v___x_2659_ = lean_io_process_child_wait(v___x_2645_, v_a_2658_);
lean_dec(v_a_2658_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v_a_2660_; uint32_t v___x_2661_; uint8_t v___x_2662_; lean_object* v___x_2663_; 
v_a_2660_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_a_2660_);
lean_dec_ref_known(v___x_2659_, 1);
v___x_2661_ = lean_unbox_uint32(v_a_2660_);
lean_dec(v_a_2660_);
v___x_2662_ = lean_uint32_to_uint8(v___x_2661_);
v___x_2663_ = lean_io_exit(v___x_2662_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2671_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2666_ = v___x_2663_;
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_a_2664_);
lean_dec(v___x_2663_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2669_; 
if (v_isShared_2667_ == 0)
{
v___x_2669_ = v___x_2666_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_a_2664_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2684_; 
v_a_2672_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2674_ = v___x_2663_;
v_isShared_2675_ = v_isSharedCheck_2684_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2663_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2684_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2676_; uint8_t v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2682_; 
v___x_2676_ = lean_io_error_to_string(v_a_2672_);
v___x_2677_ = 3;
v___x_2678_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2678_, 0, v___x_2676_);
lean_ctor_set_uint8(v___x_2678_, sizeof(void*)*1, v___x_2677_);
lean_inc_ref(v_a_2577_);
v___x_2679_ = lean_apply_2(v_a_2577_, v___x_2678_, lean_box(0));
v___x_2680_ = lean_box(0);
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 0, v___x_2680_);
v___x_2682_ = v___x_2674_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2680_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
else
{
lean_object* v_a_2685_; lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2697_; 
v_a_2685_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2687_ = v___x_2659_;
v_isShared_2688_ = v_isSharedCheck_2697_;
goto v_resetjp_2686_;
}
else
{
lean_inc(v_a_2685_);
lean_dec(v___x_2659_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2697_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
lean_object* v___x_2689_; uint8_t v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2695_; 
v___x_2689_ = lean_io_error_to_string(v_a_2685_);
v___x_2690_ = 3;
v___x_2691_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2691_, 0, v___x_2689_);
lean_ctor_set_uint8(v___x_2691_, sizeof(void*)*1, v___x_2690_);
lean_inc_ref(v_a_2577_);
v___x_2692_ = lean_apply_2(v_a_2577_, v___x_2691_, lean_box(0));
v___x_2693_ = lean_box(0);
if (v_isShared_2688_ == 0)
{
lean_ctor_set(v___x_2687_, 0, v___x_2693_);
v___x_2695_ = v___x_2687_;
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
}
}
else
{
lean_object* v_a_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2710_; 
v_a_2698_ = lean_ctor_get(v___x_2657_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2657_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2700_ = v___x_2657_;
v_isShared_2701_ = v_isSharedCheck_2710_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_a_2698_);
lean_dec(v___x_2657_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2710_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
lean_object* v___x_2702_; uint8_t v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2708_; 
v___x_2702_ = lean_io_error_to_string(v_a_2698_);
v___x_2703_ = 3;
v___x_2704_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2704_, 0, v___x_2702_);
lean_ctor_set_uint8(v___x_2704_, sizeof(void*)*1, v___x_2703_);
lean_inc_ref(v_a_2577_);
v___x_2705_ = lean_apply_2(v_a_2577_, v___x_2704_, lean_box(0));
v___x_2706_ = lean_box(0);
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 0, v___x_2706_);
v___x_2708_ = v___x_2700_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v___x_2706_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
}
else
{
lean_object* v___x_2711_; lean_object* v___x_2712_; uint8_t v___x_2713_; lean_object* v___x_2714_; 
lean_dec_ref_known(v_lakeArgs_x3f_2619_, 1);
lean_dec_ref(v___y_2632_);
lean_dec_ref(v_lakeEnv_2618_);
v___x_2711_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10));
lean_inc_ref(v_a_2577_);
v___x_2712_ = lean_apply_2(v_a_2577_, v___x_2711_, lean_box(0));
v___x_2713_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11);
v___x_2714_ = lean_io_exit(v___x_2713_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_object* v_a_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2722_; 
v_a_2715_ = lean_ctor_get(v___x_2714_, 0);
v_isSharedCheck_2722_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2717_ = v___x_2714_;
v_isShared_2718_ = v_isSharedCheck_2722_;
goto v_resetjp_2716_;
}
else
{
lean_inc(v_a_2715_);
lean_dec(v___x_2714_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2722_;
goto v_resetjp_2716_;
}
v_resetjp_2716_:
{
lean_object* v___x_2720_; 
if (v_isShared_2718_ == 0)
{
v___x_2720_ = v___x_2717_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_a_2715_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
}
else
{
lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2735_; 
v_a_2723_ = lean_ctor_get(v___x_2714_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2725_ = v___x_2714_;
v_isShared_2726_ = v_isSharedCheck_2735_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2714_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2735_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2727_; uint8_t v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2733_; 
v___x_2727_ = lean_io_error_to_string(v_a_2723_);
v___x_2728_ = 3;
v___x_2729_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2729_, 0, v___x_2727_);
lean_ctor_set_uint8(v___x_2729_, sizeof(void*)*1, v___x_2728_);
lean_inc_ref(v_a_2577_);
v___x_2730_ = lean_apply_2(v_a_2577_, v___x_2729_, lean_box(0));
v___x_2731_ = lean_box(0);
if (v_isShared_2726_ == 0)
{
lean_ctor_set(v___x_2725_, 0, v___x_2731_);
v___x_2733_ = v___x_2725_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v___x_2731_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
}
}
else
{
lean_object* v___x_2736_; lean_object* v___x_2737_; uint8_t v___x_2738_; lean_object* v___x_2739_; 
lean_dec_ref(v___y_2632_);
lean_dec(v_lakeArgs_x3f_2619_);
lean_dec_ref(v_lakeEnv_2618_);
v___x_2736_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13));
lean_inc_ref(v_a_2577_);
v___x_2737_ = lean_apply_2(v_a_2577_, v___x_2736_, lean_box(0));
v___x_2738_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11);
v___x_2739_ = lean_io_exit(v___x_2738_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2747_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2742_ = v___x_2739_;
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_a_2740_);
lean_dec(v___x_2739_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2745_; 
if (v_isShared_2743_ == 0)
{
v___x_2745_ = v___x_2742_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_a_2740_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
else
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2760_; 
v_a_2748_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2750_ = v___x_2739_;
v_isShared_2751_ = v_isSharedCheck_2760_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___x_2739_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2760_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2752_; uint8_t v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2758_; 
v___x_2752_ = lean_io_error_to_string(v_a_2748_);
v___x_2753_ = 3;
v___x_2754_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2754_, 0, v___x_2752_);
lean_ctor_set_uint8(v___x_2754_, sizeof(void*)*1, v___x_2753_);
lean_inc_ref(v_a_2577_);
v___x_2755_ = lean_apply_2(v_a_2577_, v___x_2754_, lean_box(0));
v___x_2756_ = lean_box(0);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 0, v___x_2756_);
v___x_2758_ = v___x_2750_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v___x_2756_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
}
else
{
lean_object* v_a_2761_; lean_object* v___x_2763_; uint8_t v_isShared_2764_; uint8_t v_isSharedCheck_2773_; 
lean_dec_ref(v___y_2632_);
lean_dec(v_lakeArgs_x3f_2619_);
lean_dec_ref(v_lakeEnv_2618_);
v_a_2761_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2763_ = v___x_2639_;
v_isShared_2764_ = v_isSharedCheck_2773_;
goto v_resetjp_2762_;
}
else
{
lean_inc(v_a_2761_);
lean_dec(v___x_2639_);
v___x_2763_ = lean_box(0);
v_isShared_2764_ = v_isSharedCheck_2773_;
goto v_resetjp_2762_;
}
v_resetjp_2762_:
{
lean_object* v___x_2765_; uint8_t v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2771_; 
v___x_2765_ = lean_io_error_to_string(v_a_2761_);
v___x_2766_ = 3;
v___x_2767_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2767_, 0, v___x_2765_);
lean_ctor_set_uint8(v___x_2767_, sizeof(void*)*1, v___x_2766_);
lean_inc_ref(v_a_2577_);
v___x_2768_ = lean_apply_2(v_a_2577_, v___x_2767_, lean_box(0));
v___x_2769_ = lean_box(0);
if (v_isShared_2764_ == 0)
{
lean_ctor_set(v___x_2763_, 0, v___x_2769_);
v___x_2771_ = v___x_2763_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2769_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
v___jp_2774_:
{
uint8_t v___x_2777_; lean_object* v___x_2778_; lean_object* v_toString_2779_; 
v___x_2777_ = 1;
v___x_2778_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14));
v_toString_2779_ = lean_ctor_get(v___y_2775_, 0);
lean_inc_ref(v_toString_2779_);
lean_dec_ref(v___y_2775_);
v___y_2629_ = v___x_2778_;
v___y_2630_ = v___x_2777_;
v___y_2631_ = v___y_2776_;
v___y_2632_ = v_toString_2779_;
goto v___jp_2628_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___boxed(lean_object* v_a_2848_, lean_object* v_ws_2849_, lean_object* v_rootDeps_2850_, lean_object* v___y_2851_){
_start:
{
lean_object* v_res_2852_; 
v_res_2852_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_2848_, v_ws_2849_, v_rootDeps_2850_);
lean_dec_ref(v_rootDeps_2850_);
lean_dec_ref(v_a_2848_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__5___redArg(lean_object* v_msg_2853_){
_start:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2854_ = lean_box(1);
v___x_2855_ = lean_panic_fn_borrowed(v___x_2854_, v_msg_2853_);
return v___x_2855_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2859_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__2));
v___x_2860_ = lean_unsigned_to_nat(35u);
v___x_2861_ = lean_unsigned_to_nat(182u);
v___x_2862_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__1));
v___x_2863_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0));
v___x_2864_ = l_mkPanicMessageWithDecl(v___x_2863_, v___x_2862_, v___x_2861_, v___x_2860_, v___x_2859_);
return v___x_2864_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2865_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__2));
v___x_2866_ = lean_unsigned_to_nat(21u);
v___x_2867_ = lean_unsigned_to_nat(183u);
v___x_2868_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__1));
v___x_2869_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0));
v___x_2870_ = l_mkPanicMessageWithDecl(v___x_2869_, v___x_2868_, v___x_2867_, v___x_2866_, v___x_2865_);
return v___x_2870_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__7(void){
_start:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; 
v___x_2873_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__6));
v___x_2874_ = lean_unsigned_to_nat(35u);
v___x_2875_ = lean_unsigned_to_nat(276u);
v___x_2876_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__5));
v___x_2877_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0));
v___x_2878_ = l_mkPanicMessageWithDecl(v___x_2877_, v___x_2876_, v___x_2875_, v___x_2874_, v___x_2873_);
return v___x_2878_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__8(void){
_start:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2879_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__6));
v___x_2880_ = lean_unsigned_to_nat(21u);
v___x_2881_ = lean_unsigned_to_nat(277u);
v___x_2882_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__5));
v___x_2883_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0));
v___x_2884_ = l_mkPanicMessageWithDecl(v___x_2883_, v___x_2882_, v___x_2881_, v___x_2880_, v___x_2879_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(lean_object* v_k_2885_, lean_object* v_v_2886_, lean_object* v_t_2887_){
_start:
{
if (lean_obj_tag(v_t_2887_) == 0)
{
lean_object* v_size_2888_; lean_object* v_k_2889_; lean_object* v_v_2890_; lean_object* v_l_2891_; lean_object* v_r_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_3248_; 
v_size_2888_ = lean_ctor_get(v_t_2887_, 0);
v_k_2889_ = lean_ctor_get(v_t_2887_, 1);
v_v_2890_ = lean_ctor_get(v_t_2887_, 2);
v_l_2891_ = lean_ctor_get(v_t_2887_, 3);
v_r_2892_ = lean_ctor_get(v_t_2887_, 4);
v_isSharedCheck_3248_ = !lean_is_exclusive(v_t_2887_);
if (v_isSharedCheck_3248_ == 0)
{
v___x_2894_ = v_t_2887_;
v_isShared_2895_ = v_isSharedCheck_3248_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_r_2892_);
lean_inc(v_l_2891_);
lean_inc(v_v_2890_);
lean_inc(v_k_2889_);
lean_inc(v_size_2888_);
lean_dec(v_t_2887_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_3248_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
uint8_t v___x_2896_; 
v___x_2896_ = lean_string_compare(v_k_2885_, v_k_2889_);
switch(v___x_2896_)
{
case 0:
{
lean_object* v___x_2897_; 
lean_dec(v_size_2888_);
v___x_2897_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(v_k_2885_, v_v_2886_, v_l_2891_);
if (lean_obj_tag(v_r_2892_) == 0)
{
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_size_2898_; lean_object* v_size_2899_; lean_object* v_k_2900_; lean_object* v_v_2901_; lean_object* v_l_2902_; lean_object* v_r_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; uint8_t v___x_2906_; 
v_size_2898_ = lean_ctor_get(v_r_2892_, 0);
v_size_2899_ = lean_ctor_get(v___x_2897_, 0);
lean_inc(v_size_2899_);
v_k_2900_ = lean_ctor_get(v___x_2897_, 1);
lean_inc(v_k_2900_);
v_v_2901_ = lean_ctor_get(v___x_2897_, 2);
lean_inc(v_v_2901_);
v_l_2902_ = lean_ctor_get(v___x_2897_, 3);
lean_inc(v_l_2902_);
v_r_2903_ = lean_ctor_get(v___x_2897_, 4);
lean_inc(v_r_2903_);
v___x_2904_ = lean_unsigned_to_nat(3u);
v___x_2905_ = lean_nat_mul(v___x_2904_, v_size_2898_);
v___x_2906_ = lean_nat_dec_lt(v___x_2905_, v_size_2899_);
lean_dec(v___x_2905_);
if (v___x_2906_ == 0)
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2911_; 
lean_dec(v_r_2903_);
lean_dec(v_l_2902_);
lean_dec(v_v_2901_);
lean_dec(v_k_2900_);
v___x_2907_ = lean_unsigned_to_nat(1u);
v___x_2908_ = lean_nat_add(v___x_2907_, v_size_2899_);
lean_dec(v_size_2899_);
v___x_2909_ = lean_nat_add(v___x_2908_, v_size_2898_);
lean_dec(v___x_2908_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 3, v___x_2897_);
lean_ctor_set(v___x_2894_, 0, v___x_2909_);
v___x_2911_ = v___x_2894_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v___x_2909_);
lean_ctor_set(v_reuseFailAlloc_2912_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_2912_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_2912_, 3, v___x_2897_);
lean_ctor_set(v_reuseFailAlloc_2912_, 4, v_r_2892_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
else
{
lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2984_; 
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2984_ == 0)
{
lean_object* v_unused_2985_; lean_object* v_unused_2986_; lean_object* v_unused_2987_; lean_object* v_unused_2988_; lean_object* v_unused_2989_; 
v_unused_2985_ = lean_ctor_get(v___x_2897_, 4);
lean_dec(v_unused_2985_);
v_unused_2986_ = lean_ctor_get(v___x_2897_, 3);
lean_dec(v_unused_2986_);
v_unused_2987_ = lean_ctor_get(v___x_2897_, 2);
lean_dec(v_unused_2987_);
v_unused_2988_ = lean_ctor_get(v___x_2897_, 1);
lean_dec(v_unused_2988_);
v_unused_2989_ = lean_ctor_get(v___x_2897_, 0);
lean_dec(v_unused_2989_);
v___x_2914_ = v___x_2897_;
v_isShared_2915_ = v_isSharedCheck_2984_;
goto v_resetjp_2913_;
}
else
{
lean_dec(v___x_2897_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2984_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
if (lean_obj_tag(v_l_2902_) == 0)
{
if (lean_obj_tag(v_r_2903_) == 0)
{
lean_object* v_size_2916_; lean_object* v_size_2917_; lean_object* v_k_2918_; lean_object* v_v_2919_; lean_object* v_l_2920_; lean_object* v_r_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; uint8_t v___x_2924_; 
v_size_2916_ = lean_ctor_get(v_l_2902_, 0);
v_size_2917_ = lean_ctor_get(v_r_2903_, 0);
v_k_2918_ = lean_ctor_get(v_r_2903_, 1);
v_v_2919_ = lean_ctor_get(v_r_2903_, 2);
v_l_2920_ = lean_ctor_get(v_r_2903_, 3);
v_r_2921_ = lean_ctor_get(v_r_2903_, 4);
v___x_2922_ = lean_unsigned_to_nat(2u);
v___x_2923_ = lean_nat_mul(v___x_2922_, v_size_2916_);
v___x_2924_ = lean_nat_dec_lt(v_size_2917_, v___x_2923_);
lean_dec(v___x_2923_);
if (v___x_2924_ == 0)
{
lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_2954_; 
lean_inc(v_r_2921_);
lean_inc(v_l_2920_);
lean_inc(v_v_2919_);
lean_inc(v_k_2918_);
v_isSharedCheck_2954_ = !lean_is_exclusive(v_r_2903_);
if (v_isSharedCheck_2954_ == 0)
{
lean_object* v_unused_2955_; lean_object* v_unused_2956_; lean_object* v_unused_2957_; lean_object* v_unused_2958_; lean_object* v_unused_2959_; 
v_unused_2955_ = lean_ctor_get(v_r_2903_, 4);
lean_dec(v_unused_2955_);
v_unused_2956_ = lean_ctor_get(v_r_2903_, 3);
lean_dec(v_unused_2956_);
v_unused_2957_ = lean_ctor_get(v_r_2903_, 2);
lean_dec(v_unused_2957_);
v_unused_2958_ = lean_ctor_get(v_r_2903_, 1);
lean_dec(v_unused_2958_);
v_unused_2959_ = lean_ctor_get(v_r_2903_, 0);
lean_dec(v_unused_2959_);
v___x_2926_ = v_r_2903_;
v_isShared_2927_ = v_isSharedCheck_2954_;
goto v_resetjp_2925_;
}
else
{
lean_dec(v_r_2903_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_2954_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___x_2942_; lean_object* v___y_2944_; 
v___x_2928_ = lean_unsigned_to_nat(1u);
v___x_2929_ = lean_nat_add(v___x_2928_, v_size_2899_);
lean_dec(v_size_2899_);
v___x_2930_ = lean_nat_add(v___x_2929_, v_size_2898_);
lean_dec(v___x_2929_);
v___x_2942_ = lean_nat_add(v___x_2928_, v_size_2916_);
if (lean_obj_tag(v_l_2920_) == 0)
{
lean_object* v_size_2952_; 
v_size_2952_ = lean_ctor_get(v_l_2920_, 0);
lean_inc(v_size_2952_);
v___y_2944_ = v_size_2952_;
goto v___jp_2943_;
}
else
{
lean_object* v___x_2953_; 
v___x_2953_ = lean_unsigned_to_nat(0u);
v___y_2944_ = v___x_2953_;
goto v___jp_2943_;
}
v___jp_2931_:
{
lean_object* v___x_2935_; lean_object* v___x_2937_; 
v___x_2935_ = lean_nat_add(v___y_2932_, v___y_2934_);
lean_dec(v___y_2934_);
lean_dec(v___y_2932_);
if (v_isShared_2927_ == 0)
{
lean_ctor_set(v___x_2926_, 4, v_r_2892_);
lean_ctor_set(v___x_2926_, 3, v_r_2921_);
lean_ctor_set(v___x_2926_, 2, v_v_2890_);
lean_ctor_set(v___x_2926_, 1, v_k_2889_);
lean_ctor_set(v___x_2926_, 0, v___x_2935_);
v___x_2937_ = v___x_2926_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v___x_2935_);
lean_ctor_set(v_reuseFailAlloc_2941_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_2941_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_2941_, 3, v_r_2921_);
lean_ctor_set(v_reuseFailAlloc_2941_, 4, v_r_2892_);
v___x_2937_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
lean_object* v___x_2939_; 
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 4, v___x_2937_);
lean_ctor_set(v___x_2914_, 3, v___y_2933_);
lean_ctor_set(v___x_2914_, 2, v_v_2919_);
lean_ctor_set(v___x_2914_, 1, v_k_2918_);
lean_ctor_set(v___x_2914_, 0, v___x_2930_);
v___x_2939_ = v___x_2914_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v___x_2930_);
lean_ctor_set(v_reuseFailAlloc_2940_, 1, v_k_2918_);
lean_ctor_set(v_reuseFailAlloc_2940_, 2, v_v_2919_);
lean_ctor_set(v_reuseFailAlloc_2940_, 3, v___y_2933_);
lean_ctor_set(v_reuseFailAlloc_2940_, 4, v___x_2937_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
return v___x_2939_;
}
}
}
v___jp_2943_:
{
lean_object* v___x_2945_; lean_object* v___x_2947_; 
v___x_2945_ = lean_nat_add(v___x_2942_, v___y_2944_);
lean_dec(v___y_2944_);
lean_dec(v___x_2942_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v_l_2920_);
lean_ctor_set(v___x_2894_, 3, v_l_2902_);
lean_ctor_set(v___x_2894_, 2, v_v_2901_);
lean_ctor_set(v___x_2894_, 1, v_k_2900_);
lean_ctor_set(v___x_2894_, 0, v___x_2945_);
v___x_2947_ = v___x_2894_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v___x_2945_);
lean_ctor_set(v_reuseFailAlloc_2951_, 1, v_k_2900_);
lean_ctor_set(v_reuseFailAlloc_2951_, 2, v_v_2901_);
lean_ctor_set(v_reuseFailAlloc_2951_, 3, v_l_2902_);
lean_ctor_set(v_reuseFailAlloc_2951_, 4, v_l_2920_);
v___x_2947_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
lean_object* v___x_2948_; 
v___x_2948_ = lean_nat_add(v___x_2928_, v_size_2898_);
if (lean_obj_tag(v_r_2921_) == 0)
{
lean_object* v_size_2949_; 
v_size_2949_ = lean_ctor_get(v_r_2921_, 0);
lean_inc(v_size_2949_);
v___y_2932_ = v___x_2948_;
v___y_2933_ = v___x_2947_;
v___y_2934_ = v_size_2949_;
goto v___jp_2931_;
}
else
{
lean_object* v___x_2950_; 
v___x_2950_ = lean_unsigned_to_nat(0u);
v___y_2932_ = v___x_2948_;
v___y_2933_ = v___x_2947_;
v___y_2934_ = v___x_2950_;
goto v___jp_2931_;
}
}
}
}
}
else
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2966_; 
lean_del_object(v___x_2894_);
v___x_2960_ = lean_unsigned_to_nat(1u);
v___x_2961_ = lean_nat_add(v___x_2960_, v_size_2899_);
lean_dec(v_size_2899_);
v___x_2962_ = lean_nat_add(v___x_2961_, v_size_2898_);
lean_dec(v___x_2961_);
v___x_2963_ = lean_nat_add(v___x_2960_, v_size_2898_);
v___x_2964_ = lean_nat_add(v___x_2963_, v_size_2917_);
lean_dec(v___x_2963_);
lean_inc_ref(v_r_2892_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 4, v_r_2892_);
lean_ctor_set(v___x_2914_, 3, v_r_2903_);
lean_ctor_set(v___x_2914_, 2, v_v_2890_);
lean_ctor_set(v___x_2914_, 1, v_k_2889_);
lean_ctor_set(v___x_2914_, 0, v___x_2964_);
v___x_2966_ = v___x_2914_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v___x_2964_);
lean_ctor_set(v_reuseFailAlloc_2979_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_2979_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_2979_, 3, v_r_2903_);
lean_ctor_set(v_reuseFailAlloc_2979_, 4, v_r_2892_);
v___x_2966_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2973_; 
v_isSharedCheck_2973_ = !lean_is_exclusive(v_r_2892_);
if (v_isSharedCheck_2973_ == 0)
{
lean_object* v_unused_2974_; lean_object* v_unused_2975_; lean_object* v_unused_2976_; lean_object* v_unused_2977_; lean_object* v_unused_2978_; 
v_unused_2974_ = lean_ctor_get(v_r_2892_, 4);
lean_dec(v_unused_2974_);
v_unused_2975_ = lean_ctor_get(v_r_2892_, 3);
lean_dec(v_unused_2975_);
v_unused_2976_ = lean_ctor_get(v_r_2892_, 2);
lean_dec(v_unused_2976_);
v_unused_2977_ = lean_ctor_get(v_r_2892_, 1);
lean_dec(v_unused_2977_);
v_unused_2978_ = lean_ctor_get(v_r_2892_, 0);
lean_dec(v_unused_2978_);
v___x_2968_ = v_r_2892_;
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
else
{
lean_dec(v_r_2892_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2971_; 
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 4, v___x_2966_);
lean_ctor_set(v___x_2968_, 3, v_l_2902_);
lean_ctor_set(v___x_2968_, 2, v_v_2901_);
lean_ctor_set(v___x_2968_, 1, v_k_2900_);
lean_ctor_set(v___x_2968_, 0, v___x_2962_);
v___x_2971_ = v___x_2968_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v___x_2962_);
lean_ctor_set(v_reuseFailAlloc_2972_, 1, v_k_2900_);
lean_ctor_set(v_reuseFailAlloc_2972_, 2, v_v_2901_);
lean_ctor_set(v_reuseFailAlloc_2972_, 3, v_l_2902_);
lean_ctor_set(v_reuseFailAlloc_2972_, 4, v___x_2966_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
return v___x_2971_;
}
}
}
}
}
else
{
lean_object* v___x_2980_; lean_object* v___x_2981_; 
lean_dec_ref_known(v_l_2902_, 5);
lean_del_object(v___x_2914_);
lean_dec(v_v_2901_);
lean_dec(v_k_2900_);
lean_dec(v_size_2899_);
lean_dec_ref_known(v_r_2892_, 5);
lean_del_object(v___x_2894_);
lean_dec(v_v_2890_);
lean_dec(v_k_2889_);
v___x_2980_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__3);
v___x_2981_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__5___redArg(v___x_2980_);
return v___x_2981_;
}
}
else
{
lean_object* v___x_2982_; lean_object* v___x_2983_; 
lean_del_object(v___x_2914_);
lean_dec(v_r_2903_);
lean_dec(v_v_2901_);
lean_dec(v_k_2900_);
lean_dec(v_size_2899_);
lean_dec_ref_known(v_r_2892_, 5);
lean_del_object(v___x_2894_);
lean_dec(v_v_2890_);
lean_dec(v_k_2889_);
v___x_2982_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__4);
v___x_2983_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__5___redArg(v___x_2982_);
return v___x_2983_;
}
}
}
}
else
{
lean_object* v_size_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2994_; 
v_size_2990_ = lean_ctor_get(v_r_2892_, 0);
v___x_2991_ = lean_unsigned_to_nat(1u);
v___x_2992_ = lean_nat_add(v___x_2991_, v_size_2990_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 3, v___x_2897_);
lean_ctor_set(v___x_2894_, 0, v___x_2992_);
v___x_2994_ = v___x_2894_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v___x_2992_);
lean_ctor_set(v_reuseFailAlloc_2995_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_2995_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_2995_, 3, v___x_2897_);
lean_ctor_set(v_reuseFailAlloc_2995_, 4, v_r_2892_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
else
{
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_l_2996_; 
v_l_2996_ = lean_ctor_get(v___x_2897_, 3);
lean_inc(v_l_2996_);
if (lean_obj_tag(v_l_2996_) == 0)
{
lean_object* v_r_2997_; 
v_r_2997_ = lean_ctor_get(v___x_2897_, 4);
lean_inc(v_r_2997_);
if (lean_obj_tag(v_r_2997_) == 0)
{
lean_object* v_size_2998_; lean_object* v_k_2999_; lean_object* v_v_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3014_; 
v_size_2998_ = lean_ctor_get(v___x_2897_, 0);
v_k_2999_ = lean_ctor_get(v___x_2897_, 1);
v_v_3000_ = lean_ctor_get(v___x_2897_, 2);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_3014_ == 0)
{
lean_object* v_unused_3015_; lean_object* v_unused_3016_; 
v_unused_3015_ = lean_ctor_get(v___x_2897_, 4);
lean_dec(v_unused_3015_);
v_unused_3016_ = lean_ctor_get(v___x_2897_, 3);
lean_dec(v_unused_3016_);
v___x_3002_ = v___x_2897_;
v_isShared_3003_ = v_isSharedCheck_3014_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_v_3000_);
lean_inc(v_k_2999_);
lean_inc(v_size_2998_);
lean_dec(v___x_2897_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3014_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v_size_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3009_; 
v_size_3004_ = lean_ctor_get(v_r_2997_, 0);
v___x_3005_ = lean_unsigned_to_nat(1u);
v___x_3006_ = lean_nat_add(v___x_3005_, v_size_2998_);
lean_dec(v_size_2998_);
v___x_3007_ = lean_nat_add(v___x_3005_, v_size_3004_);
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 4, v_r_2892_);
lean_ctor_set(v___x_3002_, 3, v_r_2997_);
lean_ctor_set(v___x_3002_, 2, v_v_2890_);
lean_ctor_set(v___x_3002_, 1, v_k_2889_);
lean_ctor_set(v___x_3002_, 0, v___x_3007_);
v___x_3009_ = v___x_3002_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v___x_3007_);
lean_ctor_set(v_reuseFailAlloc_3013_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3013_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3013_, 3, v_r_2997_);
lean_ctor_set(v_reuseFailAlloc_3013_, 4, v_r_2892_);
v___x_3009_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
lean_object* v___x_3011_; 
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v___x_3009_);
lean_ctor_set(v___x_2894_, 3, v_l_2996_);
lean_ctor_set(v___x_2894_, 2, v_v_3000_);
lean_ctor_set(v___x_2894_, 1, v_k_2999_);
lean_ctor_set(v___x_2894_, 0, v___x_3006_);
v___x_3011_ = v___x_2894_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v___x_3006_);
lean_ctor_set(v_reuseFailAlloc_3012_, 1, v_k_2999_);
lean_ctor_set(v_reuseFailAlloc_3012_, 2, v_v_3000_);
lean_ctor_set(v_reuseFailAlloc_3012_, 3, v_l_2996_);
lean_ctor_set(v_reuseFailAlloc_3012_, 4, v___x_3009_);
v___x_3011_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
return v___x_3011_;
}
}
}
}
else
{
lean_object* v_k_3017_; lean_object* v_v_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3030_; 
v_k_3017_ = lean_ctor_get(v___x_2897_, 1);
v_v_3018_ = lean_ctor_get(v___x_2897_, 2);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_3030_ == 0)
{
lean_object* v_unused_3031_; lean_object* v_unused_3032_; lean_object* v_unused_3033_; 
v_unused_3031_ = lean_ctor_get(v___x_2897_, 4);
lean_dec(v_unused_3031_);
v_unused_3032_ = lean_ctor_get(v___x_2897_, 3);
lean_dec(v_unused_3032_);
v_unused_3033_ = lean_ctor_get(v___x_2897_, 0);
lean_dec(v_unused_3033_);
v___x_3020_ = v___x_2897_;
v_isShared_3021_ = v_isSharedCheck_3030_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_v_3018_);
lean_inc(v_k_3017_);
lean_dec(v___x_2897_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3030_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3025_; 
v___x_3022_ = lean_unsigned_to_nat(3u);
v___x_3023_ = lean_unsigned_to_nat(1u);
if (v_isShared_3021_ == 0)
{
lean_ctor_set(v___x_3020_, 3, v_r_2997_);
lean_ctor_set(v___x_3020_, 2, v_v_2890_);
lean_ctor_set(v___x_3020_, 1, v_k_2889_);
lean_ctor_set(v___x_3020_, 0, v___x_3023_);
v___x_3025_ = v___x_3020_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v___x_3023_);
lean_ctor_set(v_reuseFailAlloc_3029_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3029_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3029_, 3, v_r_2997_);
lean_ctor_set(v_reuseFailAlloc_3029_, 4, v_r_2997_);
v___x_3025_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
lean_object* v___x_3027_; 
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v___x_3025_);
lean_ctor_set(v___x_2894_, 3, v_l_2996_);
lean_ctor_set(v___x_2894_, 2, v_v_3018_);
lean_ctor_set(v___x_2894_, 1, v_k_3017_);
lean_ctor_set(v___x_2894_, 0, v___x_3022_);
v___x_3027_ = v___x_2894_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v___x_3022_);
lean_ctor_set(v_reuseFailAlloc_3028_, 1, v_k_3017_);
lean_ctor_set(v_reuseFailAlloc_3028_, 2, v_v_3018_);
lean_ctor_set(v_reuseFailAlloc_3028_, 3, v_l_2996_);
lean_ctor_set(v_reuseFailAlloc_3028_, 4, v___x_3025_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
}
}
}
else
{
lean_object* v_r_3034_; 
v_r_3034_ = lean_ctor_get(v___x_2897_, 4);
lean_inc(v_r_3034_);
if (lean_obj_tag(v_r_3034_) == 0)
{
lean_object* v_k_3035_; lean_object* v_v_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3060_; 
v_k_3035_ = lean_ctor_get(v___x_2897_, 1);
v_v_3036_ = lean_ctor_get(v___x_2897_, 2);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_3060_ == 0)
{
lean_object* v_unused_3061_; lean_object* v_unused_3062_; lean_object* v_unused_3063_; 
v_unused_3061_ = lean_ctor_get(v___x_2897_, 4);
lean_dec(v_unused_3061_);
v_unused_3062_ = lean_ctor_get(v___x_2897_, 3);
lean_dec(v_unused_3062_);
v_unused_3063_ = lean_ctor_get(v___x_2897_, 0);
lean_dec(v_unused_3063_);
v___x_3038_ = v___x_2897_;
v_isShared_3039_ = v_isSharedCheck_3060_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_v_3036_);
lean_inc(v_k_3035_);
lean_dec(v___x_2897_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3060_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v_k_3040_; lean_object* v_v_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3056_; 
v_k_3040_ = lean_ctor_get(v_r_3034_, 1);
v_v_3041_ = lean_ctor_get(v_r_3034_, 2);
v_isSharedCheck_3056_ = !lean_is_exclusive(v_r_3034_);
if (v_isSharedCheck_3056_ == 0)
{
lean_object* v_unused_3057_; lean_object* v_unused_3058_; lean_object* v_unused_3059_; 
v_unused_3057_ = lean_ctor_get(v_r_3034_, 4);
lean_dec(v_unused_3057_);
v_unused_3058_ = lean_ctor_get(v_r_3034_, 3);
lean_dec(v_unused_3058_);
v_unused_3059_ = lean_ctor_get(v_r_3034_, 0);
lean_dec(v_unused_3059_);
v___x_3043_ = v_r_3034_;
v_isShared_3044_ = v_isSharedCheck_3056_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_v_3041_);
lean_inc(v_k_3040_);
lean_dec(v_r_3034_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3056_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3048_; 
v___x_3045_ = lean_unsigned_to_nat(3u);
v___x_3046_ = lean_unsigned_to_nat(1u);
if (v_isShared_3044_ == 0)
{
lean_ctor_set(v___x_3043_, 4, v_l_2996_);
lean_ctor_set(v___x_3043_, 3, v_l_2996_);
lean_ctor_set(v___x_3043_, 2, v_v_3036_);
lean_ctor_set(v___x_3043_, 1, v_k_3035_);
lean_ctor_set(v___x_3043_, 0, v___x_3046_);
v___x_3048_ = v___x_3043_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v___x_3046_);
lean_ctor_set(v_reuseFailAlloc_3055_, 1, v_k_3035_);
lean_ctor_set(v_reuseFailAlloc_3055_, 2, v_v_3036_);
lean_ctor_set(v_reuseFailAlloc_3055_, 3, v_l_2996_);
lean_ctor_set(v_reuseFailAlloc_3055_, 4, v_l_2996_);
v___x_3048_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
lean_object* v___x_3050_; 
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 4, v_l_2996_);
lean_ctor_set(v___x_3038_, 2, v_v_2890_);
lean_ctor_set(v___x_3038_, 1, v_k_2889_);
lean_ctor_set(v___x_3038_, 0, v___x_3046_);
v___x_3050_ = v___x_3038_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v___x_3046_);
lean_ctor_set(v_reuseFailAlloc_3054_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3054_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3054_, 3, v_l_2996_);
lean_ctor_set(v_reuseFailAlloc_3054_, 4, v_l_2996_);
v___x_3050_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
lean_object* v___x_3052_; 
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v___x_3050_);
lean_ctor_set(v___x_2894_, 3, v___x_3048_);
lean_ctor_set(v___x_2894_, 2, v_v_3041_);
lean_ctor_set(v___x_2894_, 1, v_k_3040_);
lean_ctor_set(v___x_2894_, 0, v___x_3045_);
v___x_3052_ = v___x_2894_;
goto v_reusejp_3051_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v___x_3045_);
lean_ctor_set(v_reuseFailAlloc_3053_, 1, v_k_3040_);
lean_ctor_set(v_reuseFailAlloc_3053_, 2, v_v_3041_);
lean_ctor_set(v_reuseFailAlloc_3053_, 3, v___x_3048_);
lean_ctor_set(v_reuseFailAlloc_3053_, 4, v___x_3050_);
v___x_3052_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3051_;
}
v_reusejp_3051_:
{
return v___x_3052_;
}
}
}
}
}
}
else
{
lean_object* v___x_3064_; lean_object* v___x_3066_; 
v___x_3064_ = lean_unsigned_to_nat(2u);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v_r_3034_);
lean_ctor_set(v___x_2894_, 3, v___x_2897_);
lean_ctor_set(v___x_2894_, 0, v___x_3064_);
v___x_3066_ = v___x_2894_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3067_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3067_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3067_, 3, v___x_2897_);
lean_ctor_set(v_reuseFailAlloc_3067_, 4, v_r_3034_);
v___x_3066_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
return v___x_3066_;
}
}
}
}
else
{
lean_object* v___x_3068_; lean_object* v___x_3070_; 
v___x_3068_ = lean_unsigned_to_nat(1u);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v___x_2897_);
lean_ctor_set(v___x_2894_, 3, v___x_2897_);
lean_ctor_set(v___x_2894_, 0, v___x_3068_);
v___x_3070_ = v___x_2894_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v___x_3068_);
lean_ctor_set(v_reuseFailAlloc_3071_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3071_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3071_, 3, v___x_2897_);
lean_ctor_set(v_reuseFailAlloc_3071_, 4, v___x_2897_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
}
case 1:
{
lean_object* v___x_3073_; 
lean_dec(v_v_2890_);
lean_dec(v_k_2889_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 2, v_v_2886_);
lean_ctor_set(v___x_2894_, 1, v_k_2885_);
v___x_3073_ = v___x_2894_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_size_2888_);
lean_ctor_set(v_reuseFailAlloc_3074_, 1, v_k_2885_);
lean_ctor_set(v_reuseFailAlloc_3074_, 2, v_v_2886_);
lean_ctor_set(v_reuseFailAlloc_3074_, 3, v_l_2891_);
lean_ctor_set(v_reuseFailAlloc_3074_, 4, v_r_2892_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
default: 
{
lean_object* v___x_3075_; 
lean_dec(v_size_2888_);
v___x_3075_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(v_k_2885_, v_v_2886_, v_r_2892_);
if (lean_obj_tag(v_l_2891_) == 0)
{
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_size_3076_; lean_object* v_size_3077_; lean_object* v_k_3078_; lean_object* v_v_3079_; lean_object* v_l_3080_; lean_object* v_r_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; uint8_t v___x_3084_; 
v_size_3076_ = lean_ctor_get(v_l_2891_, 0);
v_size_3077_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_size_3077_);
v_k_3078_ = lean_ctor_get(v___x_3075_, 1);
lean_inc(v_k_3078_);
v_v_3079_ = lean_ctor_get(v___x_3075_, 2);
lean_inc(v_v_3079_);
v_l_3080_ = lean_ctor_get(v___x_3075_, 3);
lean_inc(v_l_3080_);
v_r_3081_ = lean_ctor_get(v___x_3075_, 4);
lean_inc(v_r_3081_);
v___x_3082_ = lean_unsigned_to_nat(3u);
v___x_3083_ = lean_nat_mul(v___x_3082_, v_size_3076_);
v___x_3084_ = lean_nat_dec_lt(v___x_3083_, v_size_3077_);
lean_dec(v___x_3083_);
if (v___x_3084_ == 0)
{
lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3089_; 
lean_dec(v_r_3081_);
lean_dec(v_l_3080_);
lean_dec(v_v_3079_);
lean_dec(v_k_3078_);
v___x_3085_ = lean_unsigned_to_nat(1u);
v___x_3086_ = lean_nat_add(v___x_3085_, v_size_3076_);
v___x_3087_ = lean_nat_add(v___x_3086_, v_size_3077_);
lean_dec(v_size_3077_);
lean_dec(v___x_3086_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v___x_3075_);
lean_ctor_set(v___x_2894_, 0, v___x_3087_);
v___x_3089_ = v___x_2894_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v___x_3087_);
lean_ctor_set(v_reuseFailAlloc_3090_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3090_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3090_, 3, v_l_2891_);
lean_ctor_set(v_reuseFailAlloc_3090_, 4, v___x_3075_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
return v___x_3089_;
}
}
else
{
lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3160_; 
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3160_ == 0)
{
lean_object* v_unused_3161_; lean_object* v_unused_3162_; lean_object* v_unused_3163_; lean_object* v_unused_3164_; lean_object* v_unused_3165_; 
v_unused_3161_ = lean_ctor_get(v___x_3075_, 4);
lean_dec(v_unused_3161_);
v_unused_3162_ = lean_ctor_get(v___x_3075_, 3);
lean_dec(v_unused_3162_);
v_unused_3163_ = lean_ctor_get(v___x_3075_, 2);
lean_dec(v_unused_3163_);
v_unused_3164_ = lean_ctor_get(v___x_3075_, 1);
lean_dec(v_unused_3164_);
v_unused_3165_ = lean_ctor_get(v___x_3075_, 0);
lean_dec(v_unused_3165_);
v___x_3092_ = v___x_3075_;
v_isShared_3093_ = v_isSharedCheck_3160_;
goto v_resetjp_3091_;
}
else
{
lean_dec(v___x_3075_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3160_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
if (lean_obj_tag(v_l_3080_) == 0)
{
if (lean_obj_tag(v_r_3081_) == 0)
{
lean_object* v_size_3094_; lean_object* v_k_3095_; lean_object* v_v_3096_; lean_object* v_l_3097_; lean_object* v_r_3098_; lean_object* v_size_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; uint8_t v___x_3102_; 
v_size_3094_ = lean_ctor_get(v_l_3080_, 0);
v_k_3095_ = lean_ctor_get(v_l_3080_, 1);
v_v_3096_ = lean_ctor_get(v_l_3080_, 2);
v_l_3097_ = lean_ctor_get(v_l_3080_, 3);
v_r_3098_ = lean_ctor_get(v_l_3080_, 4);
v_size_3099_ = lean_ctor_get(v_r_3081_, 0);
v___x_3100_ = lean_unsigned_to_nat(2u);
v___x_3101_ = lean_nat_mul(v___x_3100_, v_size_3099_);
v___x_3102_ = lean_nat_dec_lt(v_size_3094_, v___x_3101_);
lean_dec(v___x_3101_);
if (v___x_3102_ == 0)
{
lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3131_; 
lean_inc(v_r_3098_);
lean_inc(v_l_3097_);
lean_inc(v_v_3096_);
lean_inc(v_k_3095_);
v_isSharedCheck_3131_ = !lean_is_exclusive(v_l_3080_);
if (v_isSharedCheck_3131_ == 0)
{
lean_object* v_unused_3132_; lean_object* v_unused_3133_; lean_object* v_unused_3134_; lean_object* v_unused_3135_; lean_object* v_unused_3136_; 
v_unused_3132_ = lean_ctor_get(v_l_3080_, 4);
lean_dec(v_unused_3132_);
v_unused_3133_ = lean_ctor_get(v_l_3080_, 3);
lean_dec(v_unused_3133_);
v_unused_3134_ = lean_ctor_get(v_l_3080_, 2);
lean_dec(v_unused_3134_);
v_unused_3135_ = lean_ctor_get(v_l_3080_, 1);
lean_dec(v_unused_3135_);
v_unused_3136_ = lean_ctor_get(v_l_3080_, 0);
lean_dec(v_unused_3136_);
v___x_3104_ = v_l_3080_;
v_isShared_3105_ = v_isSharedCheck_3131_;
goto v_resetjp_3103_;
}
else
{
lean_dec(v_l_3080_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3131_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___y_3110_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3121_; 
v___x_3106_ = lean_unsigned_to_nat(1u);
v___x_3107_ = lean_nat_add(v___x_3106_, v_size_3076_);
v___x_3108_ = lean_nat_add(v___x_3107_, v_size_3077_);
lean_dec(v_size_3077_);
if (lean_obj_tag(v_l_3097_) == 0)
{
lean_object* v_size_3129_; 
v_size_3129_ = lean_ctor_get(v_l_3097_, 0);
lean_inc(v_size_3129_);
v___y_3121_ = v_size_3129_;
goto v___jp_3120_;
}
else
{
lean_object* v___x_3130_; 
v___x_3130_ = lean_unsigned_to_nat(0u);
v___y_3121_ = v___x_3130_;
goto v___jp_3120_;
}
v___jp_3109_:
{
lean_object* v___x_3113_; lean_object* v___x_3115_; 
v___x_3113_ = lean_nat_add(v___y_3110_, v___y_3112_);
lean_dec(v___y_3112_);
lean_dec(v___y_3110_);
if (v_isShared_3105_ == 0)
{
lean_ctor_set(v___x_3104_, 4, v_r_3081_);
lean_ctor_set(v___x_3104_, 3, v_r_3098_);
lean_ctor_set(v___x_3104_, 2, v_v_3079_);
lean_ctor_set(v___x_3104_, 1, v_k_3078_);
lean_ctor_set(v___x_3104_, 0, v___x_3113_);
v___x_3115_ = v___x_3104_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v___x_3113_);
lean_ctor_set(v_reuseFailAlloc_3119_, 1, v_k_3078_);
lean_ctor_set(v_reuseFailAlloc_3119_, 2, v_v_3079_);
lean_ctor_set(v_reuseFailAlloc_3119_, 3, v_r_3098_);
lean_ctor_set(v_reuseFailAlloc_3119_, 4, v_r_3081_);
v___x_3115_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
lean_object* v___x_3117_; 
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 4, v___x_3115_);
lean_ctor_set(v___x_3092_, 3, v___y_3111_);
lean_ctor_set(v___x_3092_, 2, v_v_3096_);
lean_ctor_set(v___x_3092_, 1, v_k_3095_);
lean_ctor_set(v___x_3092_, 0, v___x_3108_);
v___x_3117_ = v___x_3092_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v___x_3108_);
lean_ctor_set(v_reuseFailAlloc_3118_, 1, v_k_3095_);
lean_ctor_set(v_reuseFailAlloc_3118_, 2, v_v_3096_);
lean_ctor_set(v_reuseFailAlloc_3118_, 3, v___y_3111_);
lean_ctor_set(v_reuseFailAlloc_3118_, 4, v___x_3115_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
}
v___jp_3120_:
{
lean_object* v___x_3122_; lean_object* v___x_3124_; 
v___x_3122_ = lean_nat_add(v___x_3107_, v___y_3121_);
lean_dec(v___y_3121_);
lean_dec(v___x_3107_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v_l_3097_);
lean_ctor_set(v___x_2894_, 0, v___x_3122_);
v___x_3124_ = v___x_2894_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3128_; 
v_reuseFailAlloc_3128_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3128_, 0, v___x_3122_);
lean_ctor_set(v_reuseFailAlloc_3128_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3128_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3128_, 3, v_l_2891_);
lean_ctor_set(v_reuseFailAlloc_3128_, 4, v_l_3097_);
v___x_3124_ = v_reuseFailAlloc_3128_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
lean_object* v___x_3125_; 
v___x_3125_ = lean_nat_add(v___x_3106_, v_size_3099_);
if (lean_obj_tag(v_r_3098_) == 0)
{
lean_object* v_size_3126_; 
v_size_3126_ = lean_ctor_get(v_r_3098_, 0);
lean_inc(v_size_3126_);
v___y_3110_ = v___x_3125_;
v___y_3111_ = v___x_3124_;
v___y_3112_ = v_size_3126_;
goto v___jp_3109_;
}
else
{
lean_object* v___x_3127_; 
v___x_3127_ = lean_unsigned_to_nat(0u);
v___y_3110_ = v___x_3125_;
v___y_3111_ = v___x_3124_;
v___y_3112_ = v___x_3127_;
goto v___jp_3109_;
}
}
}
}
}
else
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3142_; 
lean_del_object(v___x_2894_);
v___x_3137_ = lean_unsigned_to_nat(1u);
v___x_3138_ = lean_nat_add(v___x_3137_, v_size_3076_);
v___x_3139_ = lean_nat_add(v___x_3138_, v_size_3077_);
lean_dec(v_size_3077_);
v___x_3140_ = lean_nat_add(v___x_3138_, v_size_3094_);
lean_dec(v___x_3138_);
lean_inc_ref(v_l_2891_);
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 4, v_l_3080_);
lean_ctor_set(v___x_3092_, 3, v_l_2891_);
lean_ctor_set(v___x_3092_, 2, v_v_2890_);
lean_ctor_set(v___x_3092_, 1, v_k_2889_);
lean_ctor_set(v___x_3092_, 0, v___x_3140_);
v___x_3142_ = v___x_3092_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3140_);
lean_ctor_set(v_reuseFailAlloc_3155_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3155_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3155_, 3, v_l_2891_);
lean_ctor_set(v_reuseFailAlloc_3155_, 4, v_l_3080_);
v___x_3142_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3149_; 
v_isSharedCheck_3149_ = !lean_is_exclusive(v_l_2891_);
if (v_isSharedCheck_3149_ == 0)
{
lean_object* v_unused_3150_; lean_object* v_unused_3151_; lean_object* v_unused_3152_; lean_object* v_unused_3153_; lean_object* v_unused_3154_; 
v_unused_3150_ = lean_ctor_get(v_l_2891_, 4);
lean_dec(v_unused_3150_);
v_unused_3151_ = lean_ctor_get(v_l_2891_, 3);
lean_dec(v_unused_3151_);
v_unused_3152_ = lean_ctor_get(v_l_2891_, 2);
lean_dec(v_unused_3152_);
v_unused_3153_ = lean_ctor_get(v_l_2891_, 1);
lean_dec(v_unused_3153_);
v_unused_3154_ = lean_ctor_get(v_l_2891_, 0);
lean_dec(v_unused_3154_);
v___x_3144_ = v_l_2891_;
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
else
{
lean_dec(v_l_2891_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
lean_object* v___x_3147_; 
if (v_isShared_3145_ == 0)
{
lean_ctor_set(v___x_3144_, 4, v_r_3081_);
lean_ctor_set(v___x_3144_, 3, v___x_3142_);
lean_ctor_set(v___x_3144_, 2, v_v_3079_);
lean_ctor_set(v___x_3144_, 1, v_k_3078_);
lean_ctor_set(v___x_3144_, 0, v___x_3139_);
v___x_3147_ = v___x_3144_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v___x_3139_);
lean_ctor_set(v_reuseFailAlloc_3148_, 1, v_k_3078_);
lean_ctor_set(v_reuseFailAlloc_3148_, 2, v_v_3079_);
lean_ctor_set(v_reuseFailAlloc_3148_, 3, v___x_3142_);
lean_ctor_set(v_reuseFailAlloc_3148_, 4, v_r_3081_);
v___x_3147_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
return v___x_3147_;
}
}
}
}
}
else
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
lean_dec_ref_known(v_l_3080_, 5);
lean_del_object(v___x_3092_);
lean_dec(v_v_3079_);
lean_dec(v_k_3078_);
lean_dec(v_size_3077_);
lean_dec_ref_known(v_l_2891_, 5);
lean_del_object(v___x_2894_);
lean_dec(v_v_2890_);
lean_dec(v_k_2889_);
v___x_3156_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__7);
v___x_3157_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__5___redArg(v___x_3156_);
return v___x_3157_;
}
}
else
{
lean_object* v___x_3158_; lean_object* v___x_3159_; 
lean_del_object(v___x_3092_);
lean_dec(v_r_3081_);
lean_dec(v_v_3079_);
lean_dec(v_k_3078_);
lean_dec(v_size_3077_);
lean_dec_ref_known(v_l_2891_, 5);
lean_del_object(v___x_2894_);
lean_dec(v_v_2890_);
lean_dec(v_k_2889_);
v___x_3158_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__8);
v___x_3159_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__5___redArg(v___x_3158_);
return v___x_3159_;
}
}
}
}
else
{
lean_object* v_size_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3170_; 
v_size_3166_ = lean_ctor_get(v_l_2891_, 0);
v___x_3167_ = lean_unsigned_to_nat(1u);
v___x_3168_ = lean_nat_add(v___x_3167_, v_size_3166_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v___x_3075_);
lean_ctor_set(v___x_2894_, 0, v___x_3168_);
v___x_3170_ = v___x_2894_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v___x_3168_);
lean_ctor_set(v_reuseFailAlloc_3171_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3171_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3171_, 3, v_l_2891_);
lean_ctor_set(v_reuseFailAlloc_3171_, 4, v___x_3075_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
else
{
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_l_3172_; 
v_l_3172_ = lean_ctor_get(v___x_3075_, 3);
lean_inc(v_l_3172_);
if (lean_obj_tag(v_l_3172_) == 0)
{
lean_object* v_r_3173_; 
v_r_3173_ = lean_ctor_get(v___x_3075_, 4);
lean_inc(v_r_3173_);
if (lean_obj_tag(v_r_3173_) == 0)
{
lean_object* v_size_3174_; lean_object* v_k_3175_; lean_object* v_v_3176_; lean_object* v___x_3178_; uint8_t v_isShared_3179_; uint8_t v_isSharedCheck_3190_; 
v_size_3174_ = lean_ctor_get(v___x_3075_, 0);
v_k_3175_ = lean_ctor_get(v___x_3075_, 1);
v_v_3176_ = lean_ctor_get(v___x_3075_, 2);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3190_ == 0)
{
lean_object* v_unused_3191_; lean_object* v_unused_3192_; 
v_unused_3191_ = lean_ctor_get(v___x_3075_, 4);
lean_dec(v_unused_3191_);
v_unused_3192_ = lean_ctor_get(v___x_3075_, 3);
lean_dec(v_unused_3192_);
v___x_3178_ = v___x_3075_;
v_isShared_3179_ = v_isSharedCheck_3190_;
goto v_resetjp_3177_;
}
else
{
lean_inc(v_v_3176_);
lean_inc(v_k_3175_);
lean_inc(v_size_3174_);
lean_dec(v___x_3075_);
v___x_3178_ = lean_box(0);
v_isShared_3179_ = v_isSharedCheck_3190_;
goto v_resetjp_3177_;
}
v_resetjp_3177_:
{
lean_object* v_size_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3185_; 
v_size_3180_ = lean_ctor_get(v_l_3172_, 0);
v___x_3181_ = lean_unsigned_to_nat(1u);
v___x_3182_ = lean_nat_add(v___x_3181_, v_size_3174_);
lean_dec(v_size_3174_);
v___x_3183_ = lean_nat_add(v___x_3181_, v_size_3180_);
if (v_isShared_3179_ == 0)
{
lean_ctor_set(v___x_3178_, 4, v_l_3172_);
lean_ctor_set(v___x_3178_, 3, v_l_2891_);
lean_ctor_set(v___x_3178_, 2, v_v_2890_);
lean_ctor_set(v___x_3178_, 1, v_k_2889_);
lean_ctor_set(v___x_3178_, 0, v___x_3183_);
v___x_3185_ = v___x_3178_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v___x_3183_);
lean_ctor_set(v_reuseFailAlloc_3189_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3189_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3189_, 3, v_l_2891_);
lean_ctor_set(v_reuseFailAlloc_3189_, 4, v_l_3172_);
v___x_3185_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
lean_object* v___x_3187_; 
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v_r_3173_);
lean_ctor_set(v___x_2894_, 3, v___x_3185_);
lean_ctor_set(v___x_2894_, 2, v_v_3176_);
lean_ctor_set(v___x_2894_, 1, v_k_3175_);
lean_ctor_set(v___x_2894_, 0, v___x_3182_);
v___x_3187_ = v___x_2894_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v___x_3182_);
lean_ctor_set(v_reuseFailAlloc_3188_, 1, v_k_3175_);
lean_ctor_set(v_reuseFailAlloc_3188_, 2, v_v_3176_);
lean_ctor_set(v_reuseFailAlloc_3188_, 3, v___x_3185_);
lean_ctor_set(v_reuseFailAlloc_3188_, 4, v_r_3173_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
}
else
{
lean_object* v_k_3193_; lean_object* v_v_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3218_; 
v_k_3193_ = lean_ctor_get(v___x_3075_, 1);
v_v_3194_ = lean_ctor_get(v___x_3075_, 2);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3218_ == 0)
{
lean_object* v_unused_3219_; lean_object* v_unused_3220_; lean_object* v_unused_3221_; 
v_unused_3219_ = lean_ctor_get(v___x_3075_, 4);
lean_dec(v_unused_3219_);
v_unused_3220_ = lean_ctor_get(v___x_3075_, 3);
lean_dec(v_unused_3220_);
v_unused_3221_ = lean_ctor_get(v___x_3075_, 0);
lean_dec(v_unused_3221_);
v___x_3196_ = v___x_3075_;
v_isShared_3197_ = v_isSharedCheck_3218_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_v_3194_);
lean_inc(v_k_3193_);
lean_dec(v___x_3075_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3218_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v_k_3198_; lean_object* v_v_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3214_; 
v_k_3198_ = lean_ctor_get(v_l_3172_, 1);
v_v_3199_ = lean_ctor_get(v_l_3172_, 2);
v_isSharedCheck_3214_ = !lean_is_exclusive(v_l_3172_);
if (v_isSharedCheck_3214_ == 0)
{
lean_object* v_unused_3215_; lean_object* v_unused_3216_; lean_object* v_unused_3217_; 
v_unused_3215_ = lean_ctor_get(v_l_3172_, 4);
lean_dec(v_unused_3215_);
v_unused_3216_ = lean_ctor_get(v_l_3172_, 3);
lean_dec(v_unused_3216_);
v_unused_3217_ = lean_ctor_get(v_l_3172_, 0);
lean_dec(v_unused_3217_);
v___x_3201_ = v_l_3172_;
v_isShared_3202_ = v_isSharedCheck_3214_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_v_3199_);
lean_inc(v_k_3198_);
lean_dec(v_l_3172_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3214_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3206_; 
v___x_3203_ = lean_unsigned_to_nat(3u);
v___x_3204_ = lean_unsigned_to_nat(1u);
if (v_isShared_3202_ == 0)
{
lean_ctor_set(v___x_3201_, 4, v_r_3173_);
lean_ctor_set(v___x_3201_, 3, v_r_3173_);
lean_ctor_set(v___x_3201_, 2, v_v_2890_);
lean_ctor_set(v___x_3201_, 1, v_k_2889_);
lean_ctor_set(v___x_3201_, 0, v___x_3204_);
v___x_3206_ = v___x_3201_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v___x_3204_);
lean_ctor_set(v_reuseFailAlloc_3213_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3213_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3213_, 3, v_r_3173_);
lean_ctor_set(v_reuseFailAlloc_3213_, 4, v_r_3173_);
v___x_3206_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
lean_object* v___x_3208_; 
if (v_isShared_3197_ == 0)
{
lean_ctor_set(v___x_3196_, 3, v_r_3173_);
lean_ctor_set(v___x_3196_, 0, v___x_3204_);
v___x_3208_ = v___x_3196_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v___x_3204_);
lean_ctor_set(v_reuseFailAlloc_3212_, 1, v_k_3193_);
lean_ctor_set(v_reuseFailAlloc_3212_, 2, v_v_3194_);
lean_ctor_set(v_reuseFailAlloc_3212_, 3, v_r_3173_);
lean_ctor_set(v_reuseFailAlloc_3212_, 4, v_r_3173_);
v___x_3208_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
lean_object* v___x_3210_; 
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v___x_3208_);
lean_ctor_set(v___x_2894_, 3, v___x_3206_);
lean_ctor_set(v___x_2894_, 2, v_v_3199_);
lean_ctor_set(v___x_2894_, 1, v_k_3198_);
lean_ctor_set(v___x_2894_, 0, v___x_3203_);
v___x_3210_ = v___x_2894_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v___x_3203_);
lean_ctor_set(v_reuseFailAlloc_3211_, 1, v_k_3198_);
lean_ctor_set(v_reuseFailAlloc_3211_, 2, v_v_3199_);
lean_ctor_set(v_reuseFailAlloc_3211_, 3, v___x_3206_);
lean_ctor_set(v_reuseFailAlloc_3211_, 4, v___x_3208_);
v___x_3210_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
return v___x_3210_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_3222_; 
v_r_3222_ = lean_ctor_get(v___x_3075_, 4);
lean_inc(v_r_3222_);
if (lean_obj_tag(v_r_3222_) == 0)
{
lean_object* v_k_3223_; lean_object* v_v_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3236_; 
v_k_3223_ = lean_ctor_get(v___x_3075_, 1);
v_v_3224_ = lean_ctor_get(v___x_3075_, 2);
v_isSharedCheck_3236_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3236_ == 0)
{
lean_object* v_unused_3237_; lean_object* v_unused_3238_; lean_object* v_unused_3239_; 
v_unused_3237_ = lean_ctor_get(v___x_3075_, 4);
lean_dec(v_unused_3237_);
v_unused_3238_ = lean_ctor_get(v___x_3075_, 3);
lean_dec(v_unused_3238_);
v_unused_3239_ = lean_ctor_get(v___x_3075_, 0);
lean_dec(v_unused_3239_);
v___x_3226_ = v___x_3075_;
v_isShared_3227_ = v_isSharedCheck_3236_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_v_3224_);
lean_inc(v_k_3223_);
lean_dec(v___x_3075_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3236_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3231_; 
v___x_3228_ = lean_unsigned_to_nat(3u);
v___x_3229_ = lean_unsigned_to_nat(1u);
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 4, v_l_3172_);
lean_ctor_set(v___x_3226_, 2, v_v_2890_);
lean_ctor_set(v___x_3226_, 1, v_k_2889_);
lean_ctor_set(v___x_3226_, 0, v___x_3229_);
v___x_3231_ = v___x_3226_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3235_; 
v_reuseFailAlloc_3235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3235_, 0, v___x_3229_);
lean_ctor_set(v_reuseFailAlloc_3235_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3235_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3235_, 3, v_l_3172_);
lean_ctor_set(v_reuseFailAlloc_3235_, 4, v_l_3172_);
v___x_3231_ = v_reuseFailAlloc_3235_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
lean_object* v___x_3233_; 
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v_r_3222_);
lean_ctor_set(v___x_2894_, 3, v___x_3231_);
lean_ctor_set(v___x_2894_, 2, v_v_3224_);
lean_ctor_set(v___x_2894_, 1, v_k_3223_);
lean_ctor_set(v___x_2894_, 0, v___x_3228_);
v___x_3233_ = v___x_2894_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v___x_3228_);
lean_ctor_set(v_reuseFailAlloc_3234_, 1, v_k_3223_);
lean_ctor_set(v_reuseFailAlloc_3234_, 2, v_v_3224_);
lean_ctor_set(v_reuseFailAlloc_3234_, 3, v___x_3231_);
lean_ctor_set(v_reuseFailAlloc_3234_, 4, v_r_3222_);
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
lean_object* v___x_3240_; lean_object* v___x_3242_; 
v___x_3240_ = lean_unsigned_to_nat(2u);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v___x_3075_);
lean_ctor_set(v___x_2894_, 3, v_r_3222_);
lean_ctor_set(v___x_2894_, 0, v___x_3240_);
v___x_3242_ = v___x_2894_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v___x_3240_);
lean_ctor_set(v_reuseFailAlloc_3243_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3243_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3243_, 3, v_r_3222_);
lean_ctor_set(v_reuseFailAlloc_3243_, 4, v___x_3075_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
return v___x_3242_;
}
}
}
}
else
{
lean_object* v___x_3244_; lean_object* v___x_3246_; 
v___x_3244_ = lean_unsigned_to_nat(1u);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v___x_3075_);
lean_ctor_set(v___x_2894_, 3, v___x_3075_);
lean_ctor_set(v___x_2894_, 0, v___x_3244_);
v___x_3246_ = v___x_2894_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v___x_3244_);
lean_ctor_set(v_reuseFailAlloc_3247_, 1, v_k_2889_);
lean_ctor_set(v_reuseFailAlloc_3247_, 2, v_v_2890_);
lean_ctor_set(v_reuseFailAlloc_3247_, 3, v___x_3075_);
lean_ctor_set(v_reuseFailAlloc_3247_, 4, v___x_3075_);
v___x_3246_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
return v___x_3246_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3249_ = lean_unsigned_to_nat(1u);
v___x_3250_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3249_);
lean_ctor_set(v___x_3250_, 1, v_k_2885_);
lean_ctor_set(v___x_3250_, 2, v_v_2886_);
lean_ctor_set(v___x_3250_, 3, v_t_2887_);
lean_ctor_set(v___x_3250_, 4, v_t_2887_);
return v___x_3250_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1___lam__0(lean_object* v_n_3251_, lean_object* v_k_3252_, lean_object* v_v_3253_){
_start:
{
uint8_t v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; 
v___x_3254_ = 1;
v___x_3255_ = l_Lean_Name_toString(v_k_3252_, v___x_3254_);
v___x_3256_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3256_, 0, v_v_3253_);
v___x_3257_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(v___x_3255_, v___x_3256_, v_n_3251_);
return v___x_3257_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1(lean_object* v_m_3259_){
_start:
{
lean_object* v___f_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
v___f_3260_ = ((lean_object*)(l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1___closed__0));
v___x_3261_ = lean_box(1);
v___x_3262_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v___f_3260_, v___x_3261_, v_m_3259_);
v___x_3263_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3262_);
return v___x_3263_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(lean_object* v___x_3266_, uint8_t v_updateToolchain_3267_, lean_object* v_ws_3268_, lean_object* v_dep_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_){
_start:
{
lean_object* v_baseName_3273_; lean_object* v_name_3274_; lean_object* v_opts_3275_; uint8_t v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; uint8_t v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
v_baseName_3273_ = lean_ctor_get(v___x_3266_, 1);
v_name_3274_ = lean_ctor_get(v_dep_3269_, 0);
v_opts_3275_ = lean_ctor_get(v_dep_3269_, 4);
v___x_3276_ = 0;
lean_inc(v_baseName_3273_);
v___x_3277_ = l_Lean_Name_toString(v_baseName_3273_, v___x_3276_);
v___x_3278_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0));
v___x_3279_ = lean_string_append(v___x_3277_, v___x_3278_);
lean_inc(v_name_3274_);
v___x_3280_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3274_, v_updateToolchain_3267_);
v___x_3281_ = lean_string_append(v___x_3279_, v___x_3280_);
lean_dec_ref(v___x_3280_);
v___x_3282_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1));
v___x_3283_ = lean_string_append(v___x_3281_, v___x_3282_);
lean_inc(v_opts_3275_);
v___x_3284_ = l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1(v_opts_3275_);
v___x_3285_ = lean_unsigned_to_nat(80u);
v___x_3286_ = l_Lean_Json_pretty(v___x_3284_, v___x_3285_);
v___x_3287_ = lean_string_append(v___x_3283_, v___x_3286_);
lean_dec_ref(v___x_3286_);
v___x_3288_ = 0;
v___x_3289_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3289_, 0, v___x_3287_);
lean_ctor_set_uint8(v___x_3289_, sizeof(void*)*1, v___x_3288_);
lean_inc_ref(v___y_3271_);
v___x_3290_ = lean_apply_2(v___y_3271_, v___x_3289_, lean_box(0));
v___x_3291_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_3268_, v___x_3266_, v_dep_3269_, v___y_3270_, v___y_3271_);
return v___x_3291_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed(lean_object* v___x_3292_, lean_object* v_updateToolchain_3293_, lean_object* v_ws_3294_, lean_object* v_dep_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_){
_start:
{
uint8_t v_updateToolchain_boxed_3299_; lean_object* v_res_3300_; 
v_updateToolchain_boxed_3299_ = lean_unbox(v_updateToolchain_3293_);
v_res_3300_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(v___x_3292_, v_updateToolchain_boxed_3299_, v_ws_3294_, v_dep_3295_, v___y_3296_, v___y_3297_);
lean_dec_ref(v___y_3297_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(lean_object* v_n_3301_, lean_object* v_f_3302_, lean_object* v_xs_3303_, lean_object* v_k_3304_, lean_object* v_acc_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_){
_start:
{
uint8_t v___x_3309_; 
v___x_3309_ = lean_nat_dec_lt(v_k_3304_, v_n_3301_);
if (v___x_3309_ == 0)
{
lean_object* v___x_3310_; lean_object* v___x_3311_; 
lean_dec(v_k_3304_);
lean_dec_ref(v_f_3302_);
v___x_3310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3310_, 0, v_acc_3305_);
lean_ctor_set(v___x_3310_, 1, v___y_3306_);
v___x_3311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3311_, 0, v___x_3310_);
return v___x_3311_;
}
else
{
lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3312_ = lean_array_fget_borrowed(v_xs_3303_, v_k_3304_);
lean_inc_ref(v_f_3302_);
lean_inc_ref(v___y_3307_);
lean_inc(v___x_3312_);
v___x_3313_ = lean_apply_4(v_f_3302_, v___x_3312_, v___y_3306_, v___y_3307_, lean_box(0));
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_object* v_a_3314_; lean_object* v_fst_3315_; lean_object* v_snd_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
lean_inc(v_a_3314_);
lean_dec_ref_known(v___x_3313_, 1);
v_fst_3315_ = lean_ctor_get(v_a_3314_, 0);
lean_inc(v_fst_3315_);
v_snd_3316_ = lean_ctor_get(v_a_3314_, 1);
lean_inc(v_snd_3316_);
lean_dec(v_a_3314_);
v___x_3317_ = lean_unsigned_to_nat(1u);
v___x_3318_ = lean_nat_add(v_k_3304_, v___x_3317_);
lean_dec(v_k_3304_);
v___x_3319_ = lean_array_push(v_acc_3305_, v_fst_3315_);
v_k_3304_ = v___x_3318_;
v_acc_3305_ = v___x_3319_;
v___y_3306_ = v_snd_3316_;
goto _start;
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
lean_dec_ref(v_acc_3305_);
lean_dec(v_k_3304_);
lean_dec_ref(v_f_3302_);
v_a_3321_ = lean_ctor_get(v___x_3313_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3313_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3313_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
if (v_isShared_3324_ == 0)
{
v___x_3326_ = v___x_3323_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_a_3321_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg___boxed(lean_object* v_n_3329_, lean_object* v_f_3330_, lean_object* v_xs_3331_, lean_object* v_k_3332_, lean_object* v_acc_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(v_n_3329_, v_f_3330_, v_xs_3331_, v_k_3332_, v_acc_3333_, v___y_3334_, v___y_3335_);
lean_dec_ref(v___y_3335_);
lean_dec_ref(v_xs_3331_);
lean_dec(v_n_3329_);
return v_res_3337_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(lean_object* v_upperBound_3338_, lean_object* v_fst_3339_, lean_object* v___x_3340_, lean_object* v_leanOpts_3341_, lean_object* v_a_3342_, lean_object* v_b_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_){
_start:
{
lean_object* v_fst_3348_; lean_object* v_snd_3349_; uint8_t v___x_3353_; 
v___x_3353_ = lean_nat_dec_lt(v_a_3342_, v_upperBound_3338_);
if (v___x_3353_ == 0)
{
lean_object* v___x_3354_; lean_object* v___x_3355_; 
lean_dec(v_a_3342_);
lean_dec_ref(v_leanOpts_3341_);
v___x_3354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3354_, 0, v_b_3343_);
lean_ctor_set(v___x_3354_, 1, v___y_3344_);
v___x_3355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3354_);
return v___x_3355_;
}
else
{
lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3356_ = lean_array_fget_borrowed(v_fst_3339_, v_a_3342_);
lean_inc(v___x_3356_);
v___x_3357_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v___x_3356_, v___y_3344_, v___y_3345_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_object* v_a_3358_; lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3411_; 
v_a_3358_ = lean_ctor_get(v___x_3357_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3360_ = v___x_3357_;
v_isShared_3361_ = v_isSharedCheck_3411_;
goto v_resetjp_3359_;
}
else
{
lean_inc(v_a_3358_);
lean_dec(v___x_3357_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3411_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
lean_object* v_snd_3362_; lean_object* v___x_3363_; lean_object* v_opts_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v_snd_3362_ = lean_ctor_get(v_a_3358_, 1);
lean_inc(v_snd_3362_);
lean_dec(v_a_3358_);
v___x_3363_ = lean_array_fget_borrowed(v___x_3340_, v_a_3342_);
v_opts_3364_ = lean_ctor_get(v___x_3363_, 4);
v___x_3365_ = lean_unsigned_to_nat(0u);
v___x_3366_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v_leanOpts_3341_);
lean_inc(v_opts_3364_);
lean_inc(v___x_3356_);
v___x_3367_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_b_3343_, v___x_3356_, v_opts_3364_, v_leanOpts_3341_, v___x_3353_, v___x_3366_);
if (lean_obj_tag(v___x_3367_) == 0)
{
lean_object* v_a_3368_; lean_object* v_a_3369_; lean_object* v___x_3370_; uint8_t v___x_3371_; 
lean_del_object(v___x_3360_);
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
lean_inc(v_a_3368_);
v_a_3369_ = lean_ctor_get(v___x_3367_, 1);
lean_inc(v_a_3369_);
lean_dec_ref_known(v___x_3367_, 2);
v___x_3370_ = lean_array_get_size(v_a_3369_);
v___x_3371_ = lean_nat_dec_lt(v___x_3365_, v___x_3370_);
if (v___x_3371_ == 0)
{
lean_dec(v_a_3369_);
v_fst_3348_ = v_a_3368_;
v_snd_3349_ = v_snd_3362_;
goto v___jp_3347_;
}
else
{
lean_object* v___x_3372_; size_t v___x_3373_; size_t v___x_3374_; lean_object* v___x_3375_; 
v___x_3372_ = lean_box(0);
v___x_3373_ = ((size_t)0ULL);
v___x_3374_ = lean_usize_of_nat(v___x_3370_);
v___x_3375_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3369_, v___x_3373_, v___x_3374_, v___x_3372_, v___y_3345_);
lean_dec(v_a_3369_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_dec_ref_known(v___x_3375_, 1);
v_fst_3348_ = v_a_3368_;
v_snd_3349_ = v_snd_3362_;
goto v___jp_3347_;
}
else
{
lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
lean_dec(v_a_3368_);
lean_dec(v_snd_3362_);
lean_dec(v_a_3342_);
lean_dec_ref(v_leanOpts_3341_);
v_a_3376_ = lean_ctor_get(v___x_3375_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3375_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3375_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v___x_3375_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
}
else
{
lean_object* v_a_3384_; lean_object* v___x_3385_; uint8_t v___x_3386_; 
lean_dec(v_snd_3362_);
lean_dec(v_a_3342_);
lean_dec_ref(v_leanOpts_3341_);
v_a_3384_ = lean_ctor_get(v___x_3367_, 1);
lean_inc(v_a_3384_);
lean_dec_ref_known(v___x_3367_, 2);
v___x_3385_ = lean_array_get_size(v_a_3384_);
v___x_3386_ = lean_nat_dec_lt(v___x_3365_, v___x_3385_);
if (v___x_3386_ == 0)
{
lean_object* v___x_3387_; lean_object* v___x_3389_; 
lean_dec(v_a_3384_);
v___x_3387_ = lean_box(0);
if (v_isShared_3361_ == 0)
{
lean_ctor_set_tag(v___x_3360_, 1);
lean_ctor_set(v___x_3360_, 0, v___x_3387_);
v___x_3389_ = v___x_3360_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v___x_3387_);
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
lean_object* v___x_3391_; size_t v___x_3392_; size_t v___x_3393_; lean_object* v___x_3394_; 
lean_del_object(v___x_3360_);
v___x_3391_ = lean_box(0);
v___x_3392_ = ((size_t)0ULL);
v___x_3393_ = lean_usize_of_nat(v___x_3385_);
v___x_3394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3384_, v___x_3392_, v___x_3393_, v___x_3391_, v___y_3345_);
lean_dec(v_a_3384_);
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3394_);
if (v_isSharedCheck_3401_ == 0)
{
lean_object* v_unused_3402_; 
v_unused_3402_ = lean_ctor_get(v___x_3394_, 0);
lean_dec(v_unused_3402_);
v___x_3396_ = v___x_3394_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_dec(v___x_3394_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3399_; 
if (v_isShared_3397_ == 0)
{
lean_ctor_set_tag(v___x_3396_, 1);
lean_ctor_set(v___x_3396_, 0, v___x_3391_);
v___x_3399_ = v___x_3396_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v___x_3391_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
v_a_3403_ = lean_ctor_get(v___x_3394_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3394_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3394_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3394_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
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
}
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_dec_ref(v_b_3343_);
lean_dec(v_a_3342_);
lean_dec_ref(v_leanOpts_3341_);
v_a_3412_ = lean_ctor_get(v___x_3357_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3357_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3357_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
}
v___jp_3347_:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3350_ = lean_unsigned_to_nat(1u);
v___x_3351_ = lean_nat_add(v_a_3342_, v___x_3350_);
lean_dec(v_a_3342_);
v_a_3342_ = v___x_3351_;
v_b_3343_ = v_fst_3348_;
v___y_3344_ = v_snd_3349_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg___boxed(lean_object* v_upperBound_3420_, lean_object* v_fst_3421_, lean_object* v___x_3422_, lean_object* v_leanOpts_3423_, lean_object* v_a_3424_, lean_object* v_b_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v_res_3429_; 
v_res_3429_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(v_upperBound_3420_, v_fst_3421_, v___x_3422_, v_leanOpts_3423_, v_a_3424_, v_b_3425_, v___y_3426_, v___y_3427_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___x_3422_);
lean_dec_ref(v_fst_3421_);
lean_dec(v_upperBound_3420_);
return v_res_3429_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0(lean_object* v___x_3430_, lean_object* v_x_3431_){
_start:
{
lean_object* v_baseName_3432_; lean_object* v_name_3433_; uint8_t v___x_3434_; 
v_baseName_3432_ = lean_ctor_get(v_x_3431_, 1);
v_name_3433_ = lean_ctor_get(v___x_3430_, 0);
v___x_3434_ = lean_name_eq(v_baseName_3432_, v_name_3433_);
return v___x_3434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed(lean_object* v___x_3435_, lean_object* v_x_3436_){
_start:
{
uint8_t v_res_3437_; lean_object* v_r_3438_; 
v_res_3437_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0(v___x_3435_, v_x_3436_);
lean_dec_ref(v_x_3436_);
lean_dec_ref(v___x_3435_);
v_r_3438_ = lean_box(v_res_3437_);
return v_r_3438_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___redArg(lean_object* v_pkg_3439_, lean_object* v_leanOpts_3440_, uint8_t v_reconfigure_3441_, lean_object* v_as_3442_, size_t v_i_3443_, size_t v_stop_3444_, lean_object* v_b_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_){
_start:
{
uint8_t v___x_3449_; 
v___x_3449_ = lean_usize_dec_eq(v_i_3443_, v_stop_3444_);
if (v___x_3449_ == 0)
{
lean_object* v_ws_3450_; lean_object* v_depIdxs_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3559_; 
v_ws_3450_ = lean_ctor_get(v_b_3445_, 0);
v_depIdxs_3451_ = lean_ctor_get(v_b_3445_, 1);
v_isSharedCheck_3559_ = !lean_is_exclusive(v_b_3445_);
if (v_isSharedCheck_3559_ == 0)
{
v___x_3453_ = v_b_3445_;
v_isShared_3454_ = v_isSharedCheck_3559_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_depIdxs_3451_);
lean_inc(v_ws_3450_);
lean_dec(v_b_3445_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3559_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v_packages_3455_; size_t v___x_3456_; size_t v___x_3457_; lean_object* v___x_3458_; lean_object* v___f_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; 
v_packages_3455_ = lean_ctor_get(v_ws_3450_, 4);
v___x_3456_ = ((size_t)1ULL);
v___x_3457_ = lean_usize_sub(v_i_3443_, v___x_3456_);
v___x_3458_ = lean_array_uget_borrowed(v_as_3442_, v___x_3457_);
lean_inc(v___x_3458_);
v___f_3459_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3459_, 0, v___x_3458_);
v___x_3460_ = lean_unsigned_to_nat(0u);
v___x_3461_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_3459_, v_packages_3455_, v___x_3460_);
if (lean_obj_tag(v___x_3461_) == 1)
{
lean_object* v_val_3462_; lean_object* v___x_3463_; lean_object* v___x_3465_; 
v_val_3462_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_val_3462_);
lean_dec_ref_known(v___x_3461_, 1);
v___x_3463_ = lean_array_push(v_depIdxs_3451_, v_val_3462_);
if (v_isShared_3454_ == 0)
{
lean_ctor_set(v___x_3453_, 1, v___x_3463_);
v___x_3465_ = v___x_3453_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_ws_3450_);
lean_ctor_set(v_reuseFailAlloc_3467_, 1, v___x_3463_);
v___x_3465_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
v_i_3443_ = v___x_3457_;
v_b_3445_ = v___x_3465_;
goto _start;
}
}
else
{
lean_object* v_baseName_3468_; lean_object* v_name_3469_; lean_object* v_opts_3470_; lean_object* v_fst_3472_; lean_object* v_snd_3473_; uint8_t v___x_3524_; 
lean_dec(v___x_3461_);
v_baseName_3468_ = lean_ctor_get(v_pkg_3439_, 1);
v_name_3469_ = lean_ctor_get(v___x_3458_, 0);
v_opts_3470_ = lean_ctor_get(v___x_3458_, 4);
v___x_3524_ = lean_name_eq(v_baseName_3468_, v_name_3469_);
if (v___x_3524_ == 0)
{
lean_object* v___x_3525_; 
lean_inc(v___x_3458_);
lean_inc_ref(v_pkg_3439_);
lean_inc_ref(v_ws_3450_);
v___x_3525_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_3450_, v_pkg_3439_, v___x_3458_, v___y_3446_, v___y_3447_);
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v_a_3526_; lean_object* v_fst_3527_; lean_object* v_snd_3528_; lean_object* v___x_3529_; 
v_a_3526_ = lean_ctor_get(v___x_3525_, 0);
lean_inc(v_a_3526_);
lean_dec_ref_known(v___x_3525_, 1);
v_fst_3527_ = lean_ctor_get(v_a_3526_, 0);
lean_inc_n(v_fst_3527_, 2);
v_snd_3528_ = lean_ctor_get(v_a_3526_, 1);
lean_inc(v_snd_3528_);
lean_dec(v_a_3526_);
v___x_3529_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_fst_3527_, v_snd_3528_, v___y_3447_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v_a_3530_; lean_object* v_snd_3531_; 
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
lean_inc(v_a_3530_);
lean_dec_ref_known(v___x_3529_, 1);
v_snd_3531_ = lean_ctor_get(v_a_3530_, 1);
lean_inc(v_snd_3531_);
lean_dec(v_a_3530_);
v_fst_3472_ = v_fst_3527_;
v_snd_3473_ = v_snd_3531_;
goto v___jp_3471_;
}
else
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3539_; 
lean_dec(v_fst_3527_);
lean_del_object(v___x_3453_);
lean_dec_ref(v_depIdxs_3451_);
lean_dec_ref(v_ws_3450_);
lean_dec_ref(v_leanOpts_3440_);
lean_dec_ref(v_pkg_3439_);
v_a_3532_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3534_ = v___x_3529_;
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3529_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3537_; 
if (v_isShared_3535_ == 0)
{
v___x_3537_ = v___x_3534_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3532_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
}
else
{
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v_a_3540_; lean_object* v_fst_3541_; lean_object* v_snd_3542_; 
v_a_3540_ = lean_ctor_get(v___x_3525_, 0);
lean_inc(v_a_3540_);
lean_dec_ref_known(v___x_3525_, 1);
v_fst_3541_ = lean_ctor_get(v_a_3540_, 0);
lean_inc(v_fst_3541_);
v_snd_3542_ = lean_ctor_get(v_a_3540_, 1);
lean_inc(v_snd_3542_);
lean_dec(v_a_3540_);
v_fst_3472_ = v_fst_3541_;
v_snd_3473_ = v_snd_3542_;
goto v___jp_3471_;
}
else
{
lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3550_; 
lean_del_object(v___x_3453_);
lean_dec_ref(v_depIdxs_3451_);
lean_dec_ref(v_ws_3450_);
lean_dec_ref(v_leanOpts_3440_);
lean_dec_ref(v_pkg_3439_);
v_a_3543_ = lean_ctor_get(v___x_3525_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3545_ = v___x_3525_;
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_dec(v___x_3525_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3548_; 
if (v_isShared_3546_ == 0)
{
v___x_3548_ = v___x_3545_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3543_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
}
else
{
lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; uint8_t v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; 
lean_inc(v_baseName_3468_);
lean_del_object(v___x_3453_);
lean_dec_ref(v_depIdxs_3451_);
lean_dec_ref(v_ws_3450_);
lean_dec(v___y_3446_);
lean_dec_ref(v_leanOpts_3440_);
lean_dec_ref(v_pkg_3439_);
v___x_3551_ = l_Lean_Name_toString(v_baseName_3468_, v___x_3449_);
v___x_3552_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_3553_ = lean_string_append(v___x_3551_, v___x_3552_);
v___x_3554_ = 3;
v___x_3555_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3555_, 0, v___x_3553_);
lean_ctor_set_uint8(v___x_3555_, sizeof(void*)*1, v___x_3554_);
lean_inc_ref(v___y_3447_);
v___x_3556_ = lean_apply_2(v___y_3447_, v___x_3555_, lean_box(0));
v___x_3557_ = lean_box(0);
v___x_3558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3558_, 0, v___x_3557_);
return v___x_3558_;
}
v___jp_3471_:
{
lean_object* v___x_3474_; lean_object* v_wsIdx_3475_; lean_object* v___x_3476_; 
v___x_3474_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_3475_ = lean_array_get_size(v_packages_3455_);
lean_inc_ref(v_leanOpts_3440_);
lean_inc(v_opts_3470_);
v___x_3476_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_3450_, v_fst_3472_, v_opts_3470_, v_leanOpts_3440_, v_reconfigure_3441_, v___x_3474_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; lean_object* v_a_3478_; lean_object* v___x_3479_; lean_object* v___x_3481_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3477_);
v_a_3478_ = lean_ctor_get(v___x_3476_, 1);
lean_inc(v_a_3478_);
lean_dec_ref_known(v___x_3476_, 2);
v___x_3479_ = lean_array_push(v_depIdxs_3451_, v_wsIdx_3475_);
if (v_isShared_3454_ == 0)
{
lean_ctor_set(v___x_3453_, 1, v___x_3479_);
lean_ctor_set(v___x_3453_, 0, v_a_3477_);
v___x_3481_ = v___x_3453_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_a_3477_);
lean_ctor_set(v_reuseFailAlloc_3498_, 1, v___x_3479_);
v___x_3481_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
lean_object* v___x_3482_; uint8_t v___x_3483_; 
v___x_3482_ = lean_array_get_size(v_a_3478_);
v___x_3483_ = lean_nat_dec_lt(v___x_3460_, v___x_3482_);
if (v___x_3483_ == 0)
{
lean_dec(v_a_3478_);
v_i_3443_ = v___x_3457_;
v_b_3445_ = v___x_3481_;
v___y_3446_ = v_snd_3473_;
goto _start;
}
else
{
lean_object* v___x_3485_; size_t v___x_3486_; size_t v___x_3487_; lean_object* v___x_3488_; 
v___x_3485_ = lean_box(0);
v___x_3486_ = ((size_t)0ULL);
v___x_3487_ = lean_usize_of_nat(v___x_3482_);
v___x_3488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3478_, v___x_3486_, v___x_3487_, v___x_3485_, v___y_3447_);
lean_dec(v_a_3478_);
if (lean_obj_tag(v___x_3488_) == 0)
{
lean_dec_ref_known(v___x_3488_, 1);
v_i_3443_ = v___x_3457_;
v_b_3445_ = v___x_3481_;
v___y_3446_ = v_snd_3473_;
goto _start;
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
lean_dec_ref(v___x_3481_);
lean_dec(v_snd_3473_);
lean_dec_ref(v_leanOpts_3440_);
lean_dec_ref(v_pkg_3439_);
v_a_3490_ = lean_ctor_get(v___x_3488_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3488_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v___x_3488_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3488_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
}
}
}
else
{
lean_object* v_a_3499_; lean_object* v___x_3500_; uint8_t v___x_3501_; 
lean_dec(v_snd_3473_);
lean_del_object(v___x_3453_);
lean_dec_ref(v_depIdxs_3451_);
lean_dec_ref(v_leanOpts_3440_);
lean_dec_ref(v_pkg_3439_);
v_a_3499_ = lean_ctor_get(v___x_3476_, 1);
lean_inc(v_a_3499_);
lean_dec_ref_known(v___x_3476_, 2);
v___x_3500_ = lean_array_get_size(v_a_3499_);
v___x_3501_ = lean_nat_dec_lt(v___x_3460_, v___x_3500_);
if (v___x_3501_ == 0)
{
lean_object* v___x_3502_; lean_object* v___x_3503_; 
lean_dec(v_a_3499_);
v___x_3502_ = lean_box(0);
v___x_3503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
return v___x_3503_;
}
else
{
lean_object* v___x_3504_; size_t v___x_3505_; size_t v___x_3506_; lean_object* v___x_3507_; 
v___x_3504_ = lean_box(0);
v___x_3505_ = ((size_t)0ULL);
v___x_3506_ = lean_usize_of_nat(v___x_3500_);
v___x_3507_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3499_, v___x_3505_, v___x_3506_, v___x_3504_, v___y_3447_);
lean_dec(v_a_3499_);
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3514_; 
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3514_ == 0)
{
lean_object* v_unused_3515_; 
v_unused_3515_ = lean_ctor_get(v___x_3507_, 0);
lean_dec(v_unused_3515_);
v___x_3509_ = v___x_3507_;
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
else
{
lean_dec(v___x_3507_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3512_; 
if (v_isShared_3510_ == 0)
{
lean_ctor_set_tag(v___x_3509_, 1);
lean_ctor_set(v___x_3509_, 0, v___x_3504_);
v___x_3512_ = v___x_3509_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v___x_3504_);
v___x_3512_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
return v___x_3512_;
}
}
}
else
{
lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3523_; 
v_a_3516_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3518_ = v___x_3507_;
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_dec(v___x_3507_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
return v___x_3521_;
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
lean_object* v___x_3560_; lean_object* v___x_3561_; 
lean_dec_ref(v_leanOpts_3440_);
lean_dec_ref(v_pkg_3439_);
v___x_3560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3560_, 0, v_b_3445_);
lean_ctor_set(v___x_3560_, 1, v___y_3446_);
v___x_3561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3561_, 0, v___x_3560_);
return v___x_3561_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_pkg_3562_, lean_object* v_leanOpts_3563_, lean_object* v_reconfigure_3564_, lean_object* v_as_3565_, lean_object* v_i_3566_, lean_object* v_stop_3567_, lean_object* v_b_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_){
_start:
{
uint8_t v_reconfigure_boxed_3572_; size_t v_i_boxed_3573_; size_t v_stop_boxed_3574_; lean_object* v_res_3575_; 
v_reconfigure_boxed_3572_ = lean_unbox(v_reconfigure_3564_);
v_i_boxed_3573_ = lean_unbox_usize(v_i_3566_);
lean_dec(v_i_3566_);
v_stop_boxed_3574_ = lean_unbox_usize(v_stop_3567_);
lean_dec(v_stop_3567_);
v_res_3575_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___redArg(v_pkg_3562_, v_leanOpts_3563_, v_reconfigure_boxed_3572_, v_as_3565_, v_i_boxed_3573_, v_stop_boxed_3574_, v_b_3568_, v___y_3569_, v___y_3570_);
lean_dec_ref(v___y_3570_);
lean_dec_ref(v_as_3565_);
return v_res_3575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0(lean_object* v_start_3576_, lean_object* v_pkg_3577_, lean_object* v_leanOpts_3578_, uint8_t v_reconfigure_3579_, lean_object* v_as_3580_, size_t v_i_3581_, size_t v_stop_3582_, lean_object* v_b_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_){
_start:
{
uint8_t v___x_3587_; 
v___x_3587_ = lean_usize_dec_eq(v_i_3581_, v_stop_3582_);
if (v___x_3587_ == 0)
{
lean_object* v_ws_3588_; lean_object* v_depIdxs_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3697_; 
v_ws_3588_ = lean_ctor_get(v_b_3583_, 0);
v_depIdxs_3589_ = lean_ctor_get(v_b_3583_, 1);
v_isSharedCheck_3697_ = !lean_is_exclusive(v_b_3583_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3591_ = v_b_3583_;
v_isShared_3592_ = v_isSharedCheck_3697_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_depIdxs_3589_);
lean_inc(v_ws_3588_);
lean_dec(v_b_3583_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3697_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v_packages_3593_; size_t v___x_3594_; size_t v___x_3595_; lean_object* v___x_3596_; lean_object* v___f_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; 
v_packages_3593_ = lean_ctor_get(v_ws_3588_, 4);
v___x_3594_ = ((size_t)1ULL);
v___x_3595_ = lean_usize_sub(v_i_3581_, v___x_3594_);
v___x_3596_ = lean_array_uget_borrowed(v_as_3580_, v___x_3595_);
lean_inc(v___x_3596_);
v___f_3597_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3597_, 0, v___x_3596_);
v___x_3598_ = lean_unsigned_to_nat(0u);
v___x_3599_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_3597_, v_packages_3593_, v___x_3598_);
if (lean_obj_tag(v___x_3599_) == 1)
{
lean_object* v_val_3600_; lean_object* v___x_3601_; lean_object* v___x_3603_; 
v_val_3600_ = lean_ctor_get(v___x_3599_, 0);
lean_inc(v_val_3600_);
lean_dec_ref_known(v___x_3599_, 1);
v___x_3601_ = lean_array_push(v_depIdxs_3589_, v_val_3600_);
if (v_isShared_3592_ == 0)
{
lean_ctor_set(v___x_3591_, 1, v___x_3601_);
v___x_3603_ = v___x_3591_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_ws_3588_);
lean_ctor_set(v_reuseFailAlloc_3605_, 1, v___x_3601_);
v___x_3603_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
lean_object* v___x_3604_; 
v___x_3604_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___redArg(v_pkg_3577_, v_leanOpts_3578_, v_reconfigure_3579_, v_as_3580_, v___x_3595_, v_stop_3582_, v___x_3603_, v___y_3584_, v___y_3585_);
return v___x_3604_;
}
}
else
{
lean_object* v_baseName_3606_; lean_object* v_name_3607_; lean_object* v_opts_3608_; lean_object* v_fst_3610_; lean_object* v_snd_3611_; uint8_t v___x_3662_; 
lean_dec(v___x_3599_);
v_baseName_3606_ = lean_ctor_get(v_pkg_3577_, 1);
v_name_3607_ = lean_ctor_get(v___x_3596_, 0);
v_opts_3608_ = lean_ctor_get(v___x_3596_, 4);
v___x_3662_ = lean_name_eq(v_baseName_3606_, v_name_3607_);
if (v___x_3662_ == 0)
{
lean_object* v___x_3663_; 
lean_inc(v___x_3596_);
lean_inc_ref(v_pkg_3577_);
lean_inc_ref(v_ws_3588_);
v___x_3663_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_3588_, v_pkg_3577_, v___x_3596_, v___y_3584_, v___y_3585_);
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_object* v_a_3664_; lean_object* v_fst_3665_; lean_object* v_snd_3666_; lean_object* v___x_3667_; 
v_a_3664_ = lean_ctor_get(v___x_3663_, 0);
lean_inc(v_a_3664_);
lean_dec_ref_known(v___x_3663_, 1);
v_fst_3665_ = lean_ctor_get(v_a_3664_, 0);
lean_inc_n(v_fst_3665_, 2);
v_snd_3666_ = lean_ctor_get(v_a_3664_, 1);
lean_inc(v_snd_3666_);
lean_dec(v_a_3664_);
v___x_3667_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_fst_3665_, v_snd_3666_, v___y_3585_);
if (lean_obj_tag(v___x_3667_) == 0)
{
lean_object* v_a_3668_; lean_object* v_snd_3669_; 
v_a_3668_ = lean_ctor_get(v___x_3667_, 0);
lean_inc(v_a_3668_);
lean_dec_ref_known(v___x_3667_, 1);
v_snd_3669_ = lean_ctor_get(v_a_3668_, 1);
lean_inc(v_snd_3669_);
lean_dec(v_a_3668_);
v_fst_3610_ = v_fst_3665_;
v_snd_3611_ = v_snd_3669_;
goto v___jp_3609_;
}
else
{
lean_object* v_a_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3677_; 
lean_dec(v_fst_3665_);
lean_del_object(v___x_3591_);
lean_dec_ref(v_depIdxs_3589_);
lean_dec_ref(v_ws_3588_);
lean_dec_ref(v_leanOpts_3578_);
lean_dec_ref(v_pkg_3577_);
v_a_3670_ = lean_ctor_get(v___x_3667_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v___x_3667_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3672_ = v___x_3667_;
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_a_3670_);
lean_dec(v___x_3667_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v___x_3675_; 
if (v_isShared_3673_ == 0)
{
v___x_3675_ = v___x_3672_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_a_3670_);
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
else
{
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_object* v_a_3678_; lean_object* v_fst_3679_; lean_object* v_snd_3680_; 
v_a_3678_ = lean_ctor_get(v___x_3663_, 0);
lean_inc(v_a_3678_);
lean_dec_ref_known(v___x_3663_, 1);
v_fst_3679_ = lean_ctor_get(v_a_3678_, 0);
lean_inc(v_fst_3679_);
v_snd_3680_ = lean_ctor_get(v_a_3678_, 1);
lean_inc(v_snd_3680_);
lean_dec(v_a_3678_);
v_fst_3610_ = v_fst_3679_;
v_snd_3611_ = v_snd_3680_;
goto v___jp_3609_;
}
else
{
lean_object* v_a_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3688_; 
lean_del_object(v___x_3591_);
lean_dec_ref(v_depIdxs_3589_);
lean_dec_ref(v_ws_3588_);
lean_dec_ref(v_leanOpts_3578_);
lean_dec_ref(v_pkg_3577_);
v_a_3681_ = lean_ctor_get(v___x_3663_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3683_ = v___x_3663_;
v_isShared_3684_ = v_isSharedCheck_3688_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_a_3681_);
lean_dec(v___x_3663_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3688_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
lean_object* v___x_3686_; 
if (v_isShared_3684_ == 0)
{
v___x_3686_ = v___x_3683_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_a_3681_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
}
}
else
{
lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; uint8_t v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
lean_inc(v_baseName_3606_);
lean_del_object(v___x_3591_);
lean_dec_ref(v_depIdxs_3589_);
lean_dec_ref(v_ws_3588_);
lean_dec(v___y_3584_);
lean_dec_ref(v_leanOpts_3578_);
lean_dec_ref(v_pkg_3577_);
v___x_3689_ = l_Lean_Name_toString(v_baseName_3606_, v___x_3587_);
v___x_3690_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_3691_ = lean_string_append(v___x_3689_, v___x_3690_);
v___x_3692_ = 3;
v___x_3693_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3693_, 0, v___x_3691_);
lean_ctor_set_uint8(v___x_3693_, sizeof(void*)*1, v___x_3692_);
lean_inc_ref(v___y_3585_);
v___x_3694_ = lean_apply_2(v___y_3585_, v___x_3693_, lean_box(0));
v___x_3695_ = lean_box(0);
v___x_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3696_, 0, v___x_3695_);
return v___x_3696_;
}
v___jp_3609_:
{
lean_object* v___x_3612_; lean_object* v_wsIdx_3613_; lean_object* v___x_3614_; 
v___x_3612_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_3613_ = lean_array_get_size(v_packages_3593_);
lean_inc_ref(v_leanOpts_3578_);
lean_inc(v_opts_3608_);
v___x_3614_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_3588_, v_fst_3610_, v_opts_3608_, v_leanOpts_3578_, v_reconfigure_3579_, v___x_3612_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; lean_object* v_a_3616_; lean_object* v___x_3617_; lean_object* v___x_3619_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
lean_inc(v_a_3615_);
v_a_3616_ = lean_ctor_get(v___x_3614_, 1);
lean_inc(v_a_3616_);
lean_dec_ref_known(v___x_3614_, 2);
v___x_3617_ = lean_array_push(v_depIdxs_3589_, v_wsIdx_3613_);
if (v_isShared_3592_ == 0)
{
lean_ctor_set(v___x_3591_, 1, v___x_3617_);
lean_ctor_set(v___x_3591_, 0, v_a_3615_);
v___x_3619_ = v___x_3591_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_a_3615_);
lean_ctor_set(v_reuseFailAlloc_3636_, 1, v___x_3617_);
v___x_3619_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
lean_object* v___x_3620_; uint8_t v___x_3621_; 
v___x_3620_ = lean_array_get_size(v_a_3616_);
v___x_3621_ = lean_nat_dec_lt(v___x_3598_, v___x_3620_);
if (v___x_3621_ == 0)
{
lean_object* v___x_3622_; 
lean_dec(v_a_3616_);
v___x_3622_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___redArg(v_pkg_3577_, v_leanOpts_3578_, v_reconfigure_3579_, v_as_3580_, v___x_3595_, v_stop_3582_, v___x_3619_, v_snd_3611_, v___y_3585_);
return v___x_3622_;
}
else
{
lean_object* v___x_3623_; size_t v___x_3624_; size_t v___x_3625_; lean_object* v___x_3626_; 
v___x_3623_ = lean_box(0);
v___x_3624_ = ((size_t)0ULL);
v___x_3625_ = lean_usize_of_nat(v___x_3620_);
v___x_3626_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3616_, v___x_3624_, v___x_3625_, v___x_3623_, v___y_3585_);
lean_dec(v_a_3616_);
if (lean_obj_tag(v___x_3626_) == 0)
{
lean_object* v___x_3627_; 
lean_dec_ref_known(v___x_3626_, 1);
v___x_3627_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___redArg(v_pkg_3577_, v_leanOpts_3578_, v_reconfigure_3579_, v_as_3580_, v___x_3595_, v_stop_3582_, v___x_3619_, v_snd_3611_, v___y_3585_);
return v___x_3627_;
}
else
{
lean_object* v_a_3628_; lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_3635_; 
lean_dec_ref(v___x_3619_);
lean_dec(v_snd_3611_);
lean_dec_ref(v_leanOpts_3578_);
lean_dec_ref(v_pkg_3577_);
v_a_3628_ = lean_ctor_get(v___x_3626_, 0);
v_isSharedCheck_3635_ = !lean_is_exclusive(v___x_3626_);
if (v_isSharedCheck_3635_ == 0)
{
v___x_3630_ = v___x_3626_;
v_isShared_3631_ = v_isSharedCheck_3635_;
goto v_resetjp_3629_;
}
else
{
lean_inc(v_a_3628_);
lean_dec(v___x_3626_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_3635_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
lean_object* v___x_3633_; 
if (v_isShared_3631_ == 0)
{
v___x_3633_ = v___x_3630_;
goto v_reusejp_3632_;
}
else
{
lean_object* v_reuseFailAlloc_3634_; 
v_reuseFailAlloc_3634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3634_, 0, v_a_3628_);
v___x_3633_ = v_reuseFailAlloc_3634_;
goto v_reusejp_3632_;
}
v_reusejp_3632_:
{
return v___x_3633_;
}
}
}
}
}
}
else
{
lean_object* v_a_3637_; lean_object* v___x_3638_; uint8_t v___x_3639_; 
lean_dec(v_snd_3611_);
lean_del_object(v___x_3591_);
lean_dec_ref(v_depIdxs_3589_);
lean_dec_ref(v_leanOpts_3578_);
lean_dec_ref(v_pkg_3577_);
v_a_3637_ = lean_ctor_get(v___x_3614_, 1);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3614_, 2);
v___x_3638_ = lean_array_get_size(v_a_3637_);
v___x_3639_ = lean_nat_dec_lt(v___x_3598_, v___x_3638_);
if (v___x_3639_ == 0)
{
lean_object* v___x_3640_; lean_object* v___x_3641_; 
lean_dec(v_a_3637_);
v___x_3640_ = lean_box(0);
v___x_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3641_, 0, v___x_3640_);
return v___x_3641_;
}
else
{
lean_object* v___x_3642_; size_t v___x_3643_; size_t v___x_3644_; lean_object* v___x_3645_; 
v___x_3642_ = lean_box(0);
v___x_3643_ = ((size_t)0ULL);
v___x_3644_ = lean_usize_of_nat(v___x_3638_);
v___x_3645_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3637_, v___x_3643_, v___x_3644_, v___x_3642_, v___y_3585_);
lean_dec(v_a_3637_);
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3652_ == 0)
{
lean_object* v_unused_3653_; 
v_unused_3653_ = lean_ctor_get(v___x_3645_, 0);
lean_dec(v_unused_3653_);
v___x_3647_ = v___x_3645_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_dec(v___x_3645_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
lean_ctor_set_tag(v___x_3647_, 1);
lean_ctor_set(v___x_3647_, 0, v___x_3642_);
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v___x_3642_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3661_; 
v_a_3654_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3656_ = v___x_3645_;
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3645_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
if (v_isShared_3657_ == 0)
{
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_a_3654_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
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
lean_object* v___x_3698_; lean_object* v___x_3699_; 
lean_dec_ref(v_leanOpts_3578_);
lean_dec_ref(v_pkg_3577_);
v___x_3698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3698_, 0, v_b_3583_);
lean_ctor_set(v___x_3698_, 1, v___y_3584_);
v___x_3699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3698_);
return v___x_3699_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___boxed(lean_object* v_start_3700_, lean_object* v_pkg_3701_, lean_object* v_leanOpts_3702_, lean_object* v_reconfigure_3703_, lean_object* v_as_3704_, lean_object* v_i_3705_, lean_object* v_stop_3706_, lean_object* v_b_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_){
_start:
{
uint8_t v_reconfigure_boxed_3711_; size_t v_i_boxed_3712_; size_t v_stop_boxed_3713_; lean_object* v_res_3714_; 
v_reconfigure_boxed_3711_ = lean_unbox(v_reconfigure_3703_);
v_i_boxed_3712_ = lean_unbox_usize(v_i_3705_);
lean_dec(v_i_3705_);
v_stop_boxed_3713_ = lean_unbox_usize(v_stop_3706_);
lean_dec(v_stop_3706_);
v_res_3714_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0(v_start_3700_, v_pkg_3701_, v_leanOpts_3702_, v_reconfigure_boxed_3711_, v_as_3704_, v_i_boxed_3712_, v_stop_boxed_3713_, v_b_3707_, v___y_3708_, v___y_3709_);
lean_dec_ref(v___y_3709_);
lean_dec_ref(v_as_3704_);
lean_dec(v_start_3700_);
return v_res_3714_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(lean_object* v_leanOpts_3715_, uint8_t v_reconfigure_3716_, lean_object* v_ws_3717_, lean_object* v_i_3718_, lean_object* v_next_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
lean_object* v_packages_3723_; lean_object* v_pkg_3724_; lean_object* v_ws_3726_; lean_object* v_depIdxs_3727_; lean_object* v___y_3728_; lean_object* v___y_3729_; lean_object* v_____x_3740_; lean_object* v___y_3741_; lean_object* v___y_3742_; lean_object* v_depConfigs_3745_; lean_object* v_start_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v_s_3749_; lean_object* v___x_3750_; uint8_t v___x_3751_; 
v_packages_3723_ = lean_ctor_get(v_ws_3717_, 4);
v_pkg_3724_ = lean_array_fget(v_packages_3723_, v_i_3718_);
lean_dec(v_i_3718_);
v_depConfigs_3745_ = lean_ctor_get(v_pkg_3724_, 12);
v_start_3746_ = lean_array_get_size(v_packages_3723_);
v___x_3747_ = lean_array_get_size(v_depConfigs_3745_);
v___x_3748_ = lean_mk_empty_array_with_capacity(v___x_3747_);
lean_inc_ref(v___x_3748_);
lean_inc_ref(v_ws_3717_);
v_s_3749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_3749_, 0, v_ws_3717_);
lean_ctor_set(v_s_3749_, 1, v___x_3748_);
v___x_3750_ = lean_unsigned_to_nat(0u);
v___x_3751_ = lean_nat_dec_le(v___x_3747_, v___x_3747_);
if (v___x_3751_ == 0)
{
uint8_t v___x_3752_; 
v___x_3752_ = lean_nat_dec_lt(v___x_3750_, v___x_3747_);
if (v___x_3752_ == 0)
{
lean_object* v_ws_3753_; lean_object* v_packages_3754_; lean_object* v___x_3755_; uint8_t v___x_3756_; 
lean_dec_ref_known(v_s_3749_, 2);
v_ws_3753_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_3717_, v_pkg_3724_, v___x_3748_);
v_packages_3754_ = lean_ctor_get(v_ws_3753_, 4);
lean_inc_ref(v_packages_3754_);
v___x_3755_ = lean_array_get_size(v_packages_3754_);
lean_dec_ref(v_packages_3754_);
v___x_3756_ = lean_nat_dec_lt(v_next_3719_, v___x_3755_);
if (v___x_3756_ == 0)
{
lean_object* v___x_3757_; lean_object* v___x_3758_; 
lean_dec(v_next_3719_);
lean_dec_ref(v_leanOpts_3715_);
v___x_3757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3757_, 0, v_ws_3753_);
lean_ctor_set(v___x_3757_, 1, v___y_3720_);
v___x_3758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3757_);
return v___x_3758_;
}
else
{
lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3759_ = lean_unsigned_to_nat(1u);
v___x_3760_ = lean_nat_add(v_next_3719_, v___x_3759_);
v_ws_3717_ = v_ws_3753_;
v_i_3718_ = v_next_3719_;
v_next_3719_ = v___x_3760_;
goto _start;
}
}
else
{
size_t v___x_3762_; size_t v___x_3763_; lean_object* v___x_3764_; 
lean_dec_ref(v___x_3748_);
lean_dec_ref(v_ws_3717_);
v___x_3762_ = lean_usize_of_nat(v___x_3747_);
v___x_3763_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_3715_);
lean_inc(v_pkg_3724_);
v___x_3764_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0(v_start_3746_, v_pkg_3724_, v_leanOpts_3715_, v_reconfigure_3716_, v_depConfigs_3745_, v___x_3762_, v___x_3763_, v_s_3749_, v___y_3720_, v___y_3721_);
if (lean_obj_tag(v___x_3764_) == 0)
{
lean_object* v_a_3765_; lean_object* v_fst_3766_; lean_object* v_snd_3767_; 
v_a_3765_ = lean_ctor_get(v___x_3764_, 0);
lean_inc(v_a_3765_);
lean_dec_ref_known(v___x_3764_, 1);
v_fst_3766_ = lean_ctor_get(v_a_3765_, 0);
lean_inc(v_fst_3766_);
v_snd_3767_ = lean_ctor_get(v_a_3765_, 1);
lean_inc(v_snd_3767_);
lean_dec(v_a_3765_);
v_____x_3740_ = v_fst_3766_;
v___y_3741_ = v_snd_3767_;
v___y_3742_ = v___y_3721_;
goto v___jp_3739_;
}
else
{
lean_object* v_a_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3775_; 
lean_dec(v_pkg_3724_);
lean_dec(v_next_3719_);
lean_dec_ref(v_leanOpts_3715_);
v_a_3768_ = lean_ctor_get(v___x_3764_, 0);
v_isSharedCheck_3775_ = !lean_is_exclusive(v___x_3764_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3770_ = v___x_3764_;
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_a_3768_);
lean_dec(v___x_3764_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v___x_3773_; 
if (v_isShared_3771_ == 0)
{
v___x_3773_ = v___x_3770_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v_a_3768_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
return v___x_3773_;
}
}
}
}
}
else
{
uint8_t v___x_3776_; 
v___x_3776_ = lean_nat_dec_lt(v___x_3750_, v___x_3747_);
if (v___x_3776_ == 0)
{
lean_dec_ref_known(v_s_3749_, 2);
v_ws_3726_ = v_ws_3717_;
v_depIdxs_3727_ = v___x_3748_;
v___y_3728_ = v___y_3720_;
v___y_3729_ = v___y_3721_;
goto v___jp_3725_;
}
else
{
size_t v___x_3777_; size_t v___x_3778_; lean_object* v___x_3779_; 
lean_dec_ref(v___x_3748_);
lean_dec_ref(v_ws_3717_);
v___x_3777_ = lean_usize_of_nat(v___x_3747_);
v___x_3778_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_3715_);
lean_inc(v_pkg_3724_);
v___x_3779_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0(v_start_3746_, v_pkg_3724_, v_leanOpts_3715_, v_reconfigure_3716_, v_depConfigs_3745_, v___x_3777_, v___x_3778_, v_s_3749_, v___y_3720_, v___y_3721_);
if (lean_obj_tag(v___x_3779_) == 0)
{
lean_object* v_a_3780_; lean_object* v_fst_3781_; lean_object* v_snd_3782_; 
v_a_3780_ = lean_ctor_get(v___x_3779_, 0);
lean_inc(v_a_3780_);
lean_dec_ref_known(v___x_3779_, 1);
v_fst_3781_ = lean_ctor_get(v_a_3780_, 0);
lean_inc(v_fst_3781_);
v_snd_3782_ = lean_ctor_get(v_a_3780_, 1);
lean_inc(v_snd_3782_);
lean_dec(v_a_3780_);
v_____x_3740_ = v_fst_3781_;
v___y_3741_ = v_snd_3782_;
v___y_3742_ = v___y_3721_;
goto v___jp_3739_;
}
else
{
lean_object* v_a_3783_; lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_3790_; 
lean_dec(v_pkg_3724_);
lean_dec(v_next_3719_);
lean_dec_ref(v_leanOpts_3715_);
v_a_3783_ = lean_ctor_get(v___x_3779_, 0);
v_isSharedCheck_3790_ = !lean_is_exclusive(v___x_3779_);
if (v_isSharedCheck_3790_ == 0)
{
v___x_3785_ = v___x_3779_;
v_isShared_3786_ = v_isSharedCheck_3790_;
goto v_resetjp_3784_;
}
else
{
lean_inc(v_a_3783_);
lean_dec(v___x_3779_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_3790_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
lean_object* v___x_3788_; 
if (v_isShared_3786_ == 0)
{
v___x_3788_ = v___x_3785_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3789_; 
v_reuseFailAlloc_3789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3789_, 0, v_a_3783_);
v___x_3788_ = v_reuseFailAlloc_3789_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
return v___x_3788_;
}
}
}
}
}
v___jp_3725_:
{
lean_object* v_ws_3730_; lean_object* v_packages_3731_; lean_object* v___x_3732_; uint8_t v___x_3733_; 
v_ws_3730_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_3726_, v_pkg_3724_, v_depIdxs_3727_);
v_packages_3731_ = lean_ctor_get(v_ws_3730_, 4);
lean_inc_ref(v_packages_3731_);
v___x_3732_ = lean_array_get_size(v_packages_3731_);
lean_dec_ref(v_packages_3731_);
v___x_3733_ = lean_nat_dec_lt(v_next_3719_, v___x_3732_);
if (v___x_3733_ == 0)
{
lean_object* v___x_3734_; lean_object* v___x_3735_; 
lean_dec(v_next_3719_);
lean_dec_ref(v_leanOpts_3715_);
v___x_3734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3734_, 0, v_ws_3730_);
lean_ctor_set(v___x_3734_, 1, v___y_3728_);
v___x_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3734_);
return v___x_3735_;
}
else
{
lean_object* v___x_3736_; lean_object* v___x_3737_; 
v___x_3736_ = lean_unsigned_to_nat(1u);
v___x_3737_ = lean_nat_add(v_next_3719_, v___x_3736_);
v_ws_3717_ = v_ws_3730_;
v_i_3718_ = v_next_3719_;
v_next_3719_ = v___x_3737_;
v___y_3720_ = v___y_3728_;
v___y_3721_ = v___y_3729_;
goto _start;
}
}
v___jp_3739_:
{
lean_object* v_ws_3743_; lean_object* v_depIdxs_3744_; 
v_ws_3743_ = lean_ctor_get(v_____x_3740_, 0);
lean_inc_ref(v_ws_3743_);
v_depIdxs_3744_ = lean_ctor_get(v_____x_3740_, 1);
lean_inc_ref(v_depIdxs_3744_);
lean_dec_ref(v_____x_3740_);
v_ws_3726_ = v_ws_3743_;
v_depIdxs_3727_ = v_depIdxs_3744_;
v___y_3728_ = v___y_3741_;
v___y_3729_ = v___y_3742_;
goto v___jp_3725_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg___boxed(lean_object* v_leanOpts_3791_, lean_object* v_reconfigure_3792_, lean_object* v_ws_3793_, lean_object* v_i_3794_, lean_object* v_next_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_){
_start:
{
uint8_t v_reconfigure_boxed_3799_; lean_object* v_res_3800_; 
v_reconfigure_boxed_3799_ = lean_unbox(v_reconfigure_3792_);
v_res_3800_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(v_leanOpts_3791_, v_reconfigure_boxed_3799_, v_ws_3793_, v_i_3794_, v_next_3795_, v___y_3796_, v___y_3797_);
lean_dec_ref(v___y_3797_);
return v_res_3800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(lean_object* v_a_3801_, lean_object* v_b_3802_){
_start:
{
lean_object* v_next_3803_; 
v_next_3803_ = lean_ctor_get(v_a_3801_, 0);
lean_inc(v_next_3803_);
if (lean_obj_tag(v_next_3803_) == 0)
{
lean_dec_ref(v_a_3801_);
return v_b_3802_;
}
else
{
lean_object* v_upperBound_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3824_; 
v_upperBound_3804_ = lean_ctor_get(v_a_3801_, 1);
v_isSharedCheck_3824_ = !lean_is_exclusive(v_a_3801_);
if (v_isSharedCheck_3824_ == 0)
{
lean_object* v_unused_3825_; 
v_unused_3825_ = lean_ctor_get(v_a_3801_, 0);
lean_dec(v_unused_3825_);
v___x_3806_ = v_a_3801_;
v_isShared_3807_ = v_isSharedCheck_3824_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_upperBound_3804_);
lean_dec(v_a_3801_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3824_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v_val_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3823_; 
v_val_3808_ = lean_ctor_get(v_next_3803_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v_next_3803_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3810_ = v_next_3803_;
v_isShared_3811_ = v_isSharedCheck_3823_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_val_3808_);
lean_dec(v_next_3803_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3823_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
uint8_t v___x_3812_; 
v___x_3812_ = lean_nat_dec_lt(v_val_3808_, v_upperBound_3804_);
if (v___x_3812_ == 0)
{
lean_del_object(v___x_3810_);
lean_dec(v_val_3808_);
lean_del_object(v___x_3806_);
lean_dec(v_upperBound_3804_);
return v_b_3802_;
}
else
{
lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3816_; 
v___x_3813_ = lean_unsigned_to_nat(1u);
v___x_3814_ = lean_nat_add(v_val_3808_, v___x_3813_);
if (v_isShared_3811_ == 0)
{
lean_ctor_set(v___x_3810_, 0, v___x_3814_);
v___x_3816_ = v___x_3810_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v___x_3814_);
v___x_3816_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
lean_object* v___x_3818_; 
if (v_isShared_3807_ == 0)
{
lean_ctor_set(v___x_3806_, 0, v___x_3816_);
v___x_3818_ = v___x_3806_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v___x_3816_);
lean_ctor_set(v_reuseFailAlloc_3821_, 1, v_upperBound_3804_);
v___x_3818_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
lean_object* v___x_3819_; 
v___x_3819_ = lean_array_push(v_b_3802_, v_val_3808_);
v_a_3801_ = v___x_3818_;
v_b_3802_ = v___x_3819_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(lean_object* v_ws_3828_, lean_object* v_toUpdate_3829_, lean_object* v_leanOpts_3830_, uint8_t v_updateToolchain_3831_, lean_object* v_a_3832_){
_start:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3834_ = lean_box(1);
v___x_3835_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest(v_ws_3828_, v_toUpdate_3829_, v___x_3834_, v_a_3832_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v_a_3836_; lean_object* v_snd_3837_; uint8_t v___x_3838_; 
v_a_3836_ = lean_ctor_get(v___x_3835_, 0);
lean_inc(v_a_3836_);
lean_dec_ref_known(v___x_3835_, 1);
v_snd_3837_ = lean_ctor_get(v_a_3836_, 1);
lean_inc(v_snd_3837_);
lean_dec(v_a_3836_);
v___x_3838_ = 1;
if (v_updateToolchain_3831_ == 0)
{
lean_object* v_packages_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v_wsIdx_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; 
v_packages_3839_ = lean_ctor_get(v_ws_3828_, 4);
v___x_3840_ = lean_unsigned_to_nat(0u);
v___x_3841_ = lean_array_fget_borrowed(v_packages_3839_, v___x_3840_);
v_wsIdx_3842_ = lean_ctor_get(v___x_3841_, 0);
lean_inc(v_wsIdx_3842_);
v___x_3843_ = lean_array_get_size(v_packages_3839_);
v___x_3844_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(v_leanOpts_3830_, v___x_3838_, v_ws_3828_, v_wsIdx_3842_, v___x_3843_, v_snd_3837_, v_a_3832_);
if (lean_obj_tag(v___x_3844_) == 0)
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3862_; 
v_a_3845_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3862_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3862_ == 0)
{
v___x_3847_ = v___x_3844_;
v_isShared_3848_ = v_isSharedCheck_3862_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3844_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3862_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v_fst_3849_; lean_object* v_snd_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3861_; 
v_fst_3849_ = lean_ctor_get(v_a_3845_, 0);
v_snd_3850_ = lean_ctor_get(v_a_3845_, 1);
v_isSharedCheck_3861_ = !lean_is_exclusive(v_a_3845_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3852_ = v_a_3845_;
v_isShared_3853_ = v_isSharedCheck_3861_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_snd_3850_);
lean_inc(v_fst_3849_);
lean_dec(v_a_3845_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3861_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v___x_3854_; lean_object* v___x_3856_; 
v___x_3854_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_3849_);
if (v_isShared_3853_ == 0)
{
lean_ctor_set(v___x_3852_, 0, v___x_3854_);
v___x_3856_ = v___x_3852_;
goto v_reusejp_3855_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v___x_3854_);
lean_ctor_set(v_reuseFailAlloc_3860_, 1, v_snd_3850_);
v___x_3856_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3855_;
}
v_reusejp_3855_:
{
lean_object* v___x_3858_; 
if (v_isShared_3848_ == 0)
{
lean_ctor_set(v___x_3847_, 0, v___x_3856_);
v___x_3858_ = v___x_3847_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v___x_3856_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
}
}
else
{
return v___x_3844_;
}
}
else
{
lean_object* v_packages_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v_depConfigs_3866_; lean_object* v___x_3867_; lean_object* v___f_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; 
v_packages_3863_ = lean_ctor_get(v_ws_3828_, 4);
v___x_3864_ = lean_unsigned_to_nat(0u);
v___x_3865_ = lean_array_fget_borrowed(v_packages_3863_, v___x_3864_);
v_depConfigs_3866_ = lean_ctor_get(v___x_3865_, 12);
v___x_3867_ = lean_box(v_updateToolchain_3831_);
lean_inc_ref(v_ws_3828_);
lean_inc(v___x_3865_);
v___f_3868_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed), 7, 3);
lean_closure_set(v___f_3868_, 0, v___x_3865_);
lean_closure_set(v___f_3868_, 1, v___x_3867_);
lean_closure_set(v___f_3868_, 2, v_ws_3828_);
v___x_3869_ = lean_array_get_size(v_depConfigs_3866_);
lean_inc_ref(v_depConfigs_3866_);
v___x_3870_ = l_Array_reverse___redArg(v_depConfigs_3866_);
v___x_3871_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0));
v___x_3872_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(v___x_3869_, v___f_3868_, v___x_3870_, v___x_3864_, v___x_3871_, v_snd_3837_, v_a_3832_);
if (lean_obj_tag(v___x_3872_) == 0)
{
lean_object* v_a_3873_; lean_object* v_fst_3874_; lean_object* v_snd_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3947_; 
v_a_3873_ = lean_ctor_get(v___x_3872_, 0);
lean_inc(v_a_3873_);
lean_dec_ref_known(v___x_3872_, 1);
v_fst_3874_ = lean_ctor_get(v_a_3873_, 0);
v_snd_3875_ = lean_ctor_get(v_a_3873_, 1);
v_isSharedCheck_3947_ = !lean_is_exclusive(v_a_3873_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3877_ = v_a_3873_;
v_isShared_3878_ = v_isSharedCheck_3947_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_snd_3875_);
lean_inc(v_fst_3874_);
lean_dec(v_a_3873_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3947_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3879_; 
lean_inc_ref(v_ws_3828_);
v___x_3879_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_3832_, v_ws_3828_, v_fst_3874_);
if (lean_obj_tag(v___x_3879_) == 0)
{
lean_object* v___x_3880_; lean_object* v___x_3881_; 
lean_dec_ref_known(v___x_3879_, 1);
v___x_3880_ = lean_array_get_size(v_packages_3863_);
lean_inc_ref(v_leanOpts_3830_);
v___x_3881_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(v___x_3869_, v_fst_3874_, v___x_3870_, v_leanOpts_3830_, v___x_3864_, v_ws_3828_, v_snd_3875_, v_a_3832_);
lean_dec_ref(v___x_3870_);
lean_dec(v_fst_3874_);
if (lean_obj_tag(v___x_3881_) == 0)
{
lean_object* v_a_3882_; lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3930_; 
v_a_3882_ = lean_ctor_get(v___x_3881_, 0);
v_isSharedCheck_3930_ = !lean_is_exclusive(v___x_3881_);
if (v_isSharedCheck_3930_ == 0)
{
v___x_3884_ = v___x_3881_;
v_isShared_3885_ = v_isSharedCheck_3930_;
goto v_resetjp_3883_;
}
else
{
lean_inc(v_a_3882_);
lean_dec(v___x_3881_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3930_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v_fst_3886_; lean_object* v_snd_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3929_; 
v_fst_3886_ = lean_ctor_get(v_a_3882_, 0);
v_snd_3887_ = lean_ctor_get(v_a_3882_, 1);
v_isSharedCheck_3929_ = !lean_is_exclusive(v_a_3882_);
if (v_isSharedCheck_3929_ == 0)
{
v___x_3889_ = v_a_3882_;
v_isShared_3890_ = v_isSharedCheck_3929_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_snd_3887_);
lean_inc(v_fst_3886_);
lean_dec(v_a_3882_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3929_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v_packages_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3896_; 
v_packages_3891_ = lean_ctor_get(v_fst_3886_, 4);
v___x_3892_ = lean_array_get_size(v_packages_3891_);
v___x_3893_ = lean_array_fget(v_packages_3891_, v___x_3864_);
v___x_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3880_);
if (v_isShared_3878_ == 0)
{
lean_ctor_set(v___x_3877_, 1, v___x_3892_);
lean_ctor_set(v___x_3877_, 0, v___x_3894_);
v___x_3896_ = v___x_3877_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3928_; 
v_reuseFailAlloc_3928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3928_, 0, v___x_3894_);
lean_ctor_set(v_reuseFailAlloc_3928_, 1, v___x_3892_);
v___x_3896_ = v_reuseFailAlloc_3928_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; uint8_t v___x_3899_; 
v___x_3897_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v___x_3896_, v___x_3871_);
v___x_3898_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_fst_3886_, v___x_3893_, v___x_3897_);
v___x_3899_ = lean_nat_dec_eq(v___x_3880_, v___x_3892_);
if (v___x_3899_ == 0)
{
lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; 
lean_del_object(v___x_3889_);
lean_del_object(v___x_3884_);
v___x_3900_ = lean_unsigned_to_nat(1u);
v___x_3901_ = lean_nat_add(v___x_3880_, v___x_3900_);
v___x_3902_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(v_leanOpts_3830_, v___x_3838_, v___x_3898_, v___x_3880_, v___x_3901_, v_snd_3887_, v_a_3832_);
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_a_3903_; lean_object* v___x_3905_; uint8_t v_isShared_3906_; uint8_t v_isSharedCheck_3920_; 
v_a_3903_ = lean_ctor_get(v___x_3902_, 0);
v_isSharedCheck_3920_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_3920_ == 0)
{
v___x_3905_ = v___x_3902_;
v_isShared_3906_ = v_isSharedCheck_3920_;
goto v_resetjp_3904_;
}
else
{
lean_inc(v_a_3903_);
lean_dec(v___x_3902_);
v___x_3905_ = lean_box(0);
v_isShared_3906_ = v_isSharedCheck_3920_;
goto v_resetjp_3904_;
}
v_resetjp_3904_:
{
lean_object* v_fst_3907_; lean_object* v_snd_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3919_; 
v_fst_3907_ = lean_ctor_get(v_a_3903_, 0);
v_snd_3908_ = lean_ctor_get(v_a_3903_, 1);
v_isSharedCheck_3919_ = !lean_is_exclusive(v_a_3903_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3910_ = v_a_3903_;
v_isShared_3911_ = v_isSharedCheck_3919_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_snd_3908_);
lean_inc(v_fst_3907_);
lean_dec(v_a_3903_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3919_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v___x_3912_; lean_object* v___x_3914_; 
v___x_3912_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_3907_);
if (v_isShared_3911_ == 0)
{
lean_ctor_set(v___x_3910_, 0, v___x_3912_);
v___x_3914_ = v___x_3910_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v___x_3912_);
lean_ctor_set(v_reuseFailAlloc_3918_, 1, v_snd_3908_);
v___x_3914_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
lean_object* v___x_3916_; 
if (v_isShared_3906_ == 0)
{
lean_ctor_set(v___x_3905_, 0, v___x_3914_);
v___x_3916_ = v___x_3905_;
goto v_reusejp_3915_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v___x_3914_);
v___x_3916_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3915_;
}
v_reusejp_3915_:
{
return v___x_3916_;
}
}
}
}
}
else
{
return v___x_3902_;
}
}
else
{
lean_object* v___x_3921_; lean_object* v___x_3923_; 
lean_dec_ref(v_leanOpts_3830_);
v___x_3921_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v___x_3898_);
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 0, v___x_3921_);
v___x_3923_ = v___x_3889_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v___x_3921_);
lean_ctor_set(v_reuseFailAlloc_3927_, 1, v_snd_3887_);
v___x_3923_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
lean_object* v___x_3925_; 
if (v_isShared_3885_ == 0)
{
lean_ctor_set(v___x_3884_, 0, v___x_3923_);
v___x_3925_ = v___x_3884_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v___x_3923_);
v___x_3925_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
return v___x_3925_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3938_; 
lean_del_object(v___x_3877_);
lean_dec_ref(v_leanOpts_3830_);
v_a_3931_ = lean_ctor_get(v___x_3881_, 0);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___x_3881_);
if (v_isSharedCheck_3938_ == 0)
{
v___x_3933_ = v___x_3881_;
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___x_3881_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3936_; 
if (v_isShared_3934_ == 0)
{
v___x_3936_ = v___x_3933_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v_a_3931_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
}
}
}
}
else
{
lean_object* v_a_3939_; lean_object* v___x_3941_; uint8_t v_isShared_3942_; uint8_t v_isSharedCheck_3946_; 
lean_del_object(v___x_3877_);
lean_dec(v_snd_3875_);
lean_dec(v_fst_3874_);
lean_dec_ref(v___x_3870_);
lean_dec_ref(v_leanOpts_3830_);
lean_dec_ref(v_ws_3828_);
v_a_3939_ = lean_ctor_get(v___x_3879_, 0);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3879_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3941_ = v___x_3879_;
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
else
{
lean_inc(v_a_3939_);
lean_dec(v___x_3879_);
v___x_3941_ = lean_box(0);
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
v_resetjp_3940_:
{
lean_object* v___x_3944_; 
if (v_isShared_3942_ == 0)
{
v___x_3944_ = v___x_3941_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_a_3939_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
return v___x_3944_;
}
}
}
}
}
else
{
lean_object* v_a_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3955_; 
lean_dec_ref(v___x_3870_);
lean_dec_ref(v_leanOpts_3830_);
lean_dec_ref(v_ws_3828_);
v_a_3948_ = lean_ctor_get(v___x_3872_, 0);
v_isSharedCheck_3955_ = !lean_is_exclusive(v___x_3872_);
if (v_isSharedCheck_3955_ == 0)
{
v___x_3950_ = v___x_3872_;
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_a_3948_);
lean_dec(v___x_3872_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v___x_3953_; 
if (v_isShared_3951_ == 0)
{
v___x_3953_ = v___x_3950_;
goto v_reusejp_3952_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v_a_3948_);
v___x_3953_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3952_;
}
v_reusejp_3952_:
{
return v___x_3953_;
}
}
}
}
}
else
{
lean_object* v_a_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3963_; 
lean_dec_ref(v_leanOpts_3830_);
lean_dec_ref(v_ws_3828_);
v_a_3956_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3963_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3958_ = v___x_3835_;
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_a_3956_);
lean_dec(v___x_3835_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3961_; 
if (v_isShared_3959_ == 0)
{
v___x_3961_ = v___x_3958_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v_a_3956_);
v___x_3961_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
return v___x_3961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___boxed(lean_object* v_ws_3964_, lean_object* v_toUpdate_3965_, lean_object* v_leanOpts_3966_, lean_object* v_updateToolchain_3967_, lean_object* v_a_3968_, lean_object* v___y_3969_){
_start:
{
uint8_t v_updateToolchain_boxed_3970_; lean_object* v_res_3971_; 
v_updateToolchain_boxed_3970_ = lean_unbox(v_updateToolchain_3967_);
v_res_3971_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(v_ws_3964_, v_toUpdate_3965_, v_leanOpts_3966_, v_updateToolchain_boxed_3970_, v_a_3968_);
lean_dec_ref(v_a_3968_);
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0(lean_object* v_leanOpts_3972_, uint8_t v_reconfigure_3973_, lean_object* v_ws_3974_, lean_object* v_i_3975_, lean_object* v_i__lt_3976_, lean_object* v_next_3977_, lean_object* v_lt__next_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_){
_start:
{
lean_object* v___x_3982_; 
v___x_3982_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(v_leanOpts_3972_, v_reconfigure_3973_, v_ws_3974_, v_i_3975_, v_next_3977_, v___y_3979_, v___y_3980_);
return v___x_3982_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___boxed(lean_object* v_leanOpts_3983_, lean_object* v_reconfigure_3984_, lean_object* v_ws_3985_, lean_object* v_i_3986_, lean_object* v_i__lt_3987_, lean_object* v_next_3988_, lean_object* v_lt__next_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_){
_start:
{
uint8_t v_reconfigure_boxed_3993_; lean_object* v_res_3994_; 
v_reconfigure_boxed_3993_ = lean_unbox(v_reconfigure_3984_);
v_res_3994_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0(v_leanOpts_3983_, v_reconfigure_boxed_3993_, v_ws_3985_, v_i_3986_, v_i__lt_3987_, v_next_3988_, v_lt__next_3989_, v___y_3990_, v___y_3991_);
lean_dec_ref(v___y_3991_);
return v_res_3994_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2(lean_object* v_00_u03b1_3995_, lean_object* v_00_u03b2_3996_, lean_object* v_n_3997_, lean_object* v_f_3998_, lean_object* v_xs_3999_, lean_object* v_k_4000_, lean_object* v_h_4001_, lean_object* v_acc_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_){
_start:
{
lean_object* v___x_4006_; 
v___x_4006_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(v_n_3997_, v_f_3998_, v_xs_3999_, v_k_4000_, v_acc_4002_, v___y_4003_, v___y_4004_);
return v___x_4006_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___boxed(lean_object* v_00_u03b1_4007_, lean_object* v_00_u03b2_4008_, lean_object* v_n_4009_, lean_object* v_f_4010_, lean_object* v_xs_4011_, lean_object* v_k_4012_, lean_object* v_h_4013_, lean_object* v_acc_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_){
_start:
{
lean_object* v_res_4018_; 
v_res_4018_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2(v_00_u03b1_4007_, v_00_u03b2_4008_, v_n_4009_, v_f_4010_, v_xs_4011_, v_k_4012_, v_h_4013_, v_acc_4014_, v___y_4015_, v___y_4016_);
lean_dec_ref(v___y_4016_);
lean_dec_ref(v_xs_4011_);
lean_dec(v_n_4009_);
return v_res_4018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(lean_object* v_inst_4019_, lean_object* v_R_4020_, lean_object* v_a_4021_, lean_object* v_b_4022_){
_start:
{
lean_object* v___x_4023_; 
v___x_4023_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v_a_4021_, v_b_4022_);
return v___x_4023_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(lean_object* v_upperBound_4024_, lean_object* v_fst_4025_, lean_object* v___x_4026_, lean_object* v_leanOpts_4027_, lean_object* v_inst_4028_, lean_object* v_R_4029_, lean_object* v_a_4030_, lean_object* v_b_4031_, lean_object* v_c_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_){
_start:
{
lean_object* v___x_4036_; 
v___x_4036_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(v_upperBound_4024_, v_fst_4025_, v___x_4026_, v_leanOpts_4027_, v_a_4030_, v_b_4031_, v___y_4033_, v___y_4034_);
return v___x_4036_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___boxed(lean_object* v_upperBound_4037_, lean_object* v_fst_4038_, lean_object* v___x_4039_, lean_object* v_leanOpts_4040_, lean_object* v_inst_4041_, lean_object* v_R_4042_, lean_object* v_a_4043_, lean_object* v_b_4044_, lean_object* v_c_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
lean_object* v_res_4049_; 
v_res_4049_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(v_upperBound_4037_, v_fst_4038_, v___x_4039_, v_leanOpts_4040_, v_inst_4041_, v_R_4042_, v_a_4043_, v_b_4044_, v_c_4045_, v___y_4046_, v___y_4047_);
lean_dec_ref(v___y_4047_);
lean_dec_ref(v___x_4039_);
lean_dec_ref(v_fst_4038_);
lean_dec(v_upperBound_4037_);
return v_res_4049_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_4050_, lean_object* v_msg_4051_){
_start:
{
lean_object* v___x_4052_; 
v___x_4052_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__5___redArg(v_msg_4051_);
return v___x_4052_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2(lean_object* v_00_u03b2_4053_, lean_object* v_k_4054_, lean_object* v_v_4055_, lean_object* v_t_4056_){
_start:
{
lean_object* v___x_4057_; 
v___x_4057_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(v_k_4054_, v_v_4055_, v_t_4056_);
return v___x_4057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2(lean_object* v_start_4058_, lean_object* v_pkg_4059_, lean_object* v_leanOpts_4060_, uint8_t v_reconfigure_4061_, lean_object* v_as_4062_, size_t v_i_4063_, size_t v_stop_4064_, lean_object* v_b_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_){
_start:
{
lean_object* v___x_4069_; 
v___x_4069_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___redArg(v_pkg_4059_, v_leanOpts_4060_, v_reconfigure_4061_, v_as_4062_, v_i_4063_, v_stop_4064_, v_b_4065_, v___y_4066_, v___y_4067_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2___boxed(lean_object* v_start_4070_, lean_object* v_pkg_4071_, lean_object* v_leanOpts_4072_, lean_object* v_reconfigure_4073_, lean_object* v_as_4074_, lean_object* v_i_4075_, lean_object* v_stop_4076_, lean_object* v_b_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_){
_start:
{
uint8_t v_reconfigure_boxed_4081_; size_t v_i_boxed_4082_; size_t v_stop_boxed_4083_; lean_object* v_res_4084_; 
v_reconfigure_boxed_4081_ = lean_unbox(v_reconfigure_4073_);
v_i_boxed_4082_ = lean_unbox_usize(v_i_4075_);
lean_dec(v_i_4075_);
v_stop_boxed_4083_ = lean_unbox_usize(v_stop_4076_);
lean_dec(v_stop_4076_);
v_res_4084_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__2(v_start_4070_, v_pkg_4071_, v_leanOpts_4072_, v_reconfigure_boxed_4081_, v_as_4074_, v_i_boxed_4082_, v_stop_boxed_4083_, v_b_4077_, v___y_4078_, v___y_4079_);
lean_dec_ref(v___y_4079_);
lean_dec_ref(v_as_4074_);
lean_dec(v_start_4070_);
return v_res_4084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(lean_object* v_entries_4085_, lean_object* v_as_4086_, size_t v_i_4087_, size_t v_stop_4088_, lean_object* v_b_4089_){
_start:
{
lean_object* v___y_4091_; uint8_t v___x_4095_; 
v___x_4095_ = lean_usize_dec_eq(v_i_4087_, v_stop_4088_);
if (v___x_4095_ == 0)
{
lean_object* v___x_4096_; lean_object* v_baseName_4097_; lean_object* v_relConfigFile_4098_; lean_object* v_relManifestFile_4099_; lean_object* v___x_4100_; 
v___x_4096_ = lean_array_uget_borrowed(v_as_4086_, v_i_4087_);
v_baseName_4097_ = lean_ctor_get(v___x_4096_, 1);
v_relConfigFile_4098_ = lean_ctor_get(v___x_4096_, 8);
v_relManifestFile_4099_ = lean_ctor_get(v___x_4096_, 9);
v___x_4100_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_entries_4085_, v_baseName_4097_);
if (lean_obj_tag(v___x_4100_) == 0)
{
v___y_4091_ = v_b_4089_;
goto v___jp_4090_;
}
else
{
lean_object* v_val_4101_; lean_object* v___x_4103_; uint8_t v_isShared_4104_; uint8_t v_isSharedCheck_4122_; 
v_val_4101_ = lean_ctor_get(v___x_4100_, 0);
v_isSharedCheck_4122_ = !lean_is_exclusive(v___x_4100_);
if (v_isSharedCheck_4122_ == 0)
{
v___x_4103_ = v___x_4100_;
v_isShared_4104_ = v_isSharedCheck_4122_;
goto v_resetjp_4102_;
}
else
{
lean_inc(v_val_4101_);
lean_dec(v___x_4100_);
v___x_4103_ = lean_box(0);
v_isShared_4104_ = v_isSharedCheck_4122_;
goto v_resetjp_4102_;
}
v_resetjp_4102_:
{
lean_object* v_name_4105_; lean_object* v_scope_4106_; uint8_t v_inherited_4107_; lean_object* v_src_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4119_; 
v_name_4105_ = lean_ctor_get(v_val_4101_, 0);
v_scope_4106_ = lean_ctor_get(v_val_4101_, 1);
v_inherited_4107_ = lean_ctor_get_uint8(v_val_4101_, sizeof(void*)*5);
v_src_4108_ = lean_ctor_get(v_val_4101_, 4);
v_isSharedCheck_4119_ = !lean_is_exclusive(v_val_4101_);
if (v_isSharedCheck_4119_ == 0)
{
lean_object* v_unused_4120_; lean_object* v_unused_4121_; 
v_unused_4120_ = lean_ctor_get(v_val_4101_, 3);
lean_dec(v_unused_4120_);
v_unused_4121_ = lean_ctor_get(v_val_4101_, 2);
lean_dec(v_unused_4121_);
v___x_4110_ = v_val_4101_;
v_isShared_4111_ = v_isSharedCheck_4119_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_src_4108_);
lean_inc(v_scope_4106_);
lean_inc(v_name_4105_);
lean_dec(v_val_4101_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4119_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4113_; 
lean_inc_ref(v_relManifestFile_4099_);
if (v_isShared_4104_ == 0)
{
lean_ctor_set(v___x_4103_, 0, v_relManifestFile_4099_);
v___x_4113_ = v___x_4103_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_relManifestFile_4099_);
v___x_4113_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
lean_object* v___x_4115_; 
lean_inc_ref(v_relConfigFile_4098_);
if (v_isShared_4111_ == 0)
{
lean_ctor_set(v___x_4110_, 3, v___x_4113_);
lean_ctor_set(v___x_4110_, 2, v_relConfigFile_4098_);
v___x_4115_ = v___x_4110_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_name_4105_);
lean_ctor_set(v_reuseFailAlloc_4117_, 1, v_scope_4106_);
lean_ctor_set(v_reuseFailAlloc_4117_, 2, v_relConfigFile_4098_);
lean_ctor_set(v_reuseFailAlloc_4117_, 3, v___x_4113_);
lean_ctor_set(v_reuseFailAlloc_4117_, 4, v_src_4108_);
lean_ctor_set_uint8(v_reuseFailAlloc_4117_, sizeof(void*)*5, v_inherited_4107_);
v___x_4115_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
lean_object* v___x_4116_; 
v___x_4116_ = lean_array_push(v_b_4089_, v___x_4115_);
v___y_4091_ = v___x_4116_;
goto v___jp_4090_;
}
}
}
}
}
}
else
{
return v_b_4089_;
}
v___jp_4090_:
{
size_t v___x_4092_; size_t v___x_4093_; 
v___x_4092_ = ((size_t)1ULL);
v___x_4093_ = lean_usize_add(v_i_4087_, v___x_4092_);
v_i_4087_ = v___x_4093_;
v_b_4089_ = v___y_4091_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0___boxed(lean_object* v_entries_4123_, lean_object* v_as_4124_, lean_object* v_i_4125_, lean_object* v_stop_4126_, lean_object* v_b_4127_){
_start:
{
size_t v_i_boxed_4128_; size_t v_stop_boxed_4129_; lean_object* v_res_4130_; 
v_i_boxed_4128_ = lean_unbox_usize(v_i_4125_);
lean_dec(v_i_4125_);
v_stop_boxed_4129_ = lean_unbox_usize(v_stop_4126_);
lean_dec(v_stop_4126_);
v_res_4130_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_4123_, v_as_4124_, v_i_boxed_4128_, v_stop_boxed_4129_, v_b_4127_);
lean_dec_ref(v_as_4124_);
lean_dec(v_entries_4123_);
return v_res_4130_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(lean_object* v_ws_4131_, lean_object* v_entries_4132_){
_start:
{
lean_object* v_packages_4134_; lean_object* v___y_4136_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; uint8_t v___x_4154_; 
v_packages_4134_ = lean_ctor_get(v_ws_4131_, 4);
v___x_4151_ = lean_unsigned_to_nat(0u);
v___x_4152_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_4153_ = lean_array_get_size(v_packages_4134_);
v___x_4154_ = lean_nat_dec_lt(v___x_4151_, v___x_4153_);
if (v___x_4154_ == 0)
{
v___y_4136_ = v___x_4152_;
goto v___jp_4135_;
}
else
{
uint8_t v___x_4155_; 
v___x_4155_ = lean_nat_dec_le(v___x_4153_, v___x_4153_);
if (v___x_4155_ == 0)
{
if (v___x_4154_ == 0)
{
v___y_4136_ = v___x_4152_;
goto v___jp_4135_;
}
else
{
size_t v___x_4156_; size_t v___x_4157_; lean_object* v___x_4158_; 
v___x_4156_ = ((size_t)0ULL);
v___x_4157_ = lean_usize_of_nat(v___x_4153_);
v___x_4158_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_4132_, v_packages_4134_, v___x_4156_, v___x_4157_, v___x_4152_);
v___y_4136_ = v___x_4158_;
goto v___jp_4135_;
}
}
else
{
size_t v___x_4159_; size_t v___x_4160_; lean_object* v___x_4161_; 
v___x_4159_ = ((size_t)0ULL);
v___x_4160_ = lean_usize_of_nat(v___x_4153_);
v___x_4161_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_4132_, v_packages_4134_, v___x_4159_, v___x_4160_, v___x_4152_);
v___y_4136_ = v___x_4161_;
goto v___jp_4135_;
}
}
v___jp_4135_:
{
lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v_config_4139_; lean_object* v_baseName_4140_; lean_object* v_dir_4141_; lean_object* v_relManifestFile_4142_; lean_object* v_toWorkspaceConfig_4143_; uint8_t v_fixedToolchain_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v_manifest_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; 
v___x_4137_ = lean_unsigned_to_nat(0u);
v___x_4138_ = lean_array_fget_borrowed(v_packages_4134_, v___x_4137_);
v_config_4139_ = lean_ctor_get(v___x_4138_, 6);
v_baseName_4140_ = lean_ctor_get(v___x_4138_, 1);
v_dir_4141_ = lean_ctor_get(v___x_4138_, 4);
v_relManifestFile_4142_ = lean_ctor_get(v___x_4138_, 9);
v_toWorkspaceConfig_4143_ = lean_ctor_get(v_config_4139_, 0);
v_fixedToolchain_4144_ = lean_ctor_get_uint8(v_config_4139_, sizeof(void*)*28 + 6);
v___x_4145_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_toWorkspaceConfig_4143_);
v___x_4146_ = l_System_FilePath_normalize(v_toWorkspaceConfig_4143_);
v___x_4147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4146_);
lean_inc(v_baseName_4140_);
v_manifest_4148_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_manifest_4148_, 0, v_baseName_4140_);
lean_ctor_set(v_manifest_4148_, 1, v___x_4145_);
lean_ctor_set(v_manifest_4148_, 2, v___x_4147_);
lean_ctor_set(v_manifest_4148_, 3, v___y_4136_);
lean_ctor_set_uint8(v_manifest_4148_, sizeof(void*)*4, v_fixedToolchain_4144_);
lean_inc_ref(v_relManifestFile_4142_);
lean_inc_ref(v_dir_4141_);
v___x_4149_ = l_Lake_joinRelative(v_dir_4141_, v_relManifestFile_4142_);
v___x_4150_ = l_Lake_Manifest_save(v_manifest_4148_, v___x_4149_);
lean_dec_ref(v___x_4149_);
return v___x_4150_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest___boxed(lean_object* v_ws_4162_, lean_object* v_entries_4163_, lean_object* v___y_4164_){
_start:
{
lean_object* v_res_4165_; 
v_res_4165_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(v_ws_4162_, v_entries_4163_);
lean_dec(v_entries_4163_);
lean_dec_ref(v_ws_4162_);
return v_res_4165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(lean_object* v_pkg_4166_, lean_object* v_as_4167_, size_t v_i_4168_, size_t v_stop_4169_, lean_object* v_b_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_){
_start:
{
lean_object* v_a_4175_; lean_object* v___y_4180_; uint8_t v___x_4182_; 
v___x_4182_ = lean_usize_dec_eq(v_i_4168_, v_stop_4169_);
if (v___x_4182_ == 0)
{
lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_7246__overap_4185_; lean_object* v___x_4186_; 
v___x_4183_ = lean_unsigned_to_nat(0u);
v___x_4184_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_7246__overap_4185_ = lean_array_uget_borrowed(v_as_4167_, v_i_4168_);
lean_inc(v___x_7246__overap_4185_);
lean_inc(v___y_4171_);
lean_inc_ref(v_pkg_4166_);
v___x_4186_ = lean_apply_4(v___x_7246__overap_4185_, v_pkg_4166_, v___y_4171_, v___x_4184_, lean_box(0));
if (lean_obj_tag(v___x_4186_) == 0)
{
lean_object* v_a_4187_; lean_object* v_a_4188_; lean_object* v___x_4189_; uint8_t v___x_4190_; 
v_a_4187_ = lean_ctor_get(v___x_4186_, 0);
lean_inc(v_a_4187_);
v_a_4188_ = lean_ctor_get(v___x_4186_, 1);
lean_inc(v_a_4188_);
lean_dec_ref_known(v___x_4186_, 2);
v___x_4189_ = lean_array_get_size(v_a_4188_);
v___x_4190_ = lean_nat_dec_lt(v___x_4183_, v___x_4189_);
if (v___x_4190_ == 0)
{
lean_dec(v_a_4188_);
v_a_4175_ = v_a_4187_;
goto v___jp_4174_;
}
else
{
lean_object* v___x_4191_; size_t v___x_4192_; size_t v___x_4193_; lean_object* v___x_4194_; 
v___x_4191_ = lean_box(0);
v___x_4192_ = ((size_t)0ULL);
v___x_4193_ = lean_usize_of_nat(v___x_4189_);
v___x_4194_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4188_, v___x_4192_, v___x_4193_, v___x_4191_, v___y_4172_);
lean_dec(v_a_4188_);
if (lean_obj_tag(v___x_4194_) == 0)
{
lean_dec_ref_known(v___x_4194_, 1);
v_a_4175_ = v_a_4187_;
goto v___jp_4174_;
}
else
{
lean_dec(v_a_4187_);
v___y_4180_ = v___x_4194_;
goto v___jp_4179_;
}
}
}
else
{
lean_object* v_a_4195_; lean_object* v___x_4196_; uint8_t v___x_4197_; 
v_a_4195_ = lean_ctor_get(v___x_4186_, 1);
lean_inc(v_a_4195_);
lean_dec_ref_known(v___x_4186_, 2);
v___x_4196_ = lean_array_get_size(v_a_4195_);
v___x_4197_ = lean_nat_dec_lt(v___x_4183_, v___x_4196_);
if (v___x_4197_ == 0)
{
lean_object* v___x_4198_; lean_object* v___x_4199_; 
lean_dec(v_a_4195_);
lean_dec_ref(v_pkg_4166_);
v___x_4198_ = lean_box(0);
v___x_4199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4199_, 0, v___x_4198_);
return v___x_4199_;
}
else
{
lean_object* v___x_4200_; size_t v___x_4201_; size_t v___x_4202_; lean_object* v___x_4203_; 
v___x_4200_ = lean_box(0);
v___x_4201_ = ((size_t)0ULL);
v___x_4202_ = lean_usize_of_nat(v___x_4196_);
v___x_4203_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4195_, v___x_4201_, v___x_4202_, v___x_4200_, v___y_4172_);
lean_dec(v_a_4195_);
if (lean_obj_tag(v___x_4203_) == 0)
{
lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4210_; 
lean_dec_ref(v_pkg_4166_);
v_isSharedCheck_4210_ = !lean_is_exclusive(v___x_4203_);
if (v_isSharedCheck_4210_ == 0)
{
lean_object* v_unused_4211_; 
v_unused_4211_ = lean_ctor_get(v___x_4203_, 0);
lean_dec(v_unused_4211_);
v___x_4205_ = v___x_4203_;
v_isShared_4206_ = v_isSharedCheck_4210_;
goto v_resetjp_4204_;
}
else
{
lean_dec(v___x_4203_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4210_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
lean_object* v___x_4208_; 
if (v_isShared_4206_ == 0)
{
lean_ctor_set_tag(v___x_4205_, 1);
lean_ctor_set(v___x_4205_, 0, v___x_4200_);
v___x_4208_ = v___x_4205_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v___x_4200_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
return v___x_4208_;
}
}
}
else
{
v___y_4180_ = v___x_4203_;
goto v___jp_4179_;
}
}
}
}
else
{
lean_object* v___x_4212_; 
lean_dec_ref(v_pkg_4166_);
v___x_4212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4212_, 0, v_b_4170_);
return v___x_4212_;
}
v___jp_4174_:
{
size_t v___x_4176_; size_t v___x_4177_; 
v___x_4176_ = ((size_t)1ULL);
v___x_4177_ = lean_usize_add(v_i_4168_, v___x_4176_);
v_i_4168_ = v___x_4177_;
v_b_4170_ = v_a_4175_;
goto _start;
}
v___jp_4179_:
{
if (lean_obj_tag(v___y_4180_) == 0)
{
lean_object* v_a_4181_; 
v_a_4181_ = lean_ctor_get(v___y_4180_, 0);
lean_inc(v_a_4181_);
lean_dec_ref_known(v___y_4180_, 1);
v_a_4175_ = v_a_4181_;
goto v___jp_4174_;
}
else
{
lean_dec_ref(v_pkg_4166_);
return v___y_4180_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0___boxed(lean_object* v_pkg_4213_, lean_object* v_as_4214_, lean_object* v_i_4215_, lean_object* v_stop_4216_, lean_object* v_b_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_){
_start:
{
size_t v_i_boxed_4221_; size_t v_stop_boxed_4222_; lean_object* v_res_4223_; 
v_i_boxed_4221_ = lean_unbox_usize(v_i_4215_);
lean_dec(v_i_4215_);
v_stop_boxed_4222_ = lean_unbox_usize(v_stop_4216_);
lean_dec(v_stop_4216_);
v_res_4223_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_4213_, v_as_4214_, v_i_boxed_4221_, v_stop_boxed_4222_, v_b_4217_, v___y_4218_, v___y_4219_);
lean_dec_ref(v___y_4219_);
lean_dec(v___y_4218_);
lean_dec_ref(v_as_4214_);
return v_res_4223_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(lean_object* v_pkg_4225_, lean_object* v_a_4226_, lean_object* v_a_4227_){
_start:
{
lean_object* v_baseName_4229_; lean_object* v_postUpdateHooks_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; uint8_t v___x_4233_; 
v_baseName_4229_ = lean_ctor_get(v_pkg_4225_, 1);
v_postUpdateHooks_4230_ = lean_ctor_get(v_pkg_4225_, 20);
lean_inc_ref(v_postUpdateHooks_4230_);
v___x_4231_ = lean_array_get_size(v_postUpdateHooks_4230_);
v___x_4232_ = lean_unsigned_to_nat(0u);
v___x_4233_ = lean_nat_dec_eq(v___x_4231_, v___x_4232_);
if (v___x_4233_ == 0)
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; uint8_t v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; uint8_t v___x_4241_; 
lean_inc(v_baseName_4229_);
v___x_4234_ = l_Lean_Name_toString(v_baseName_4229_, v___x_4233_);
v___x_4235_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0));
v___x_4236_ = lean_string_append(v___x_4234_, v___x_4235_);
v___x_4237_ = 1;
v___x_4238_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4238_, 0, v___x_4236_);
lean_ctor_set_uint8(v___x_4238_, sizeof(void*)*1, v___x_4237_);
lean_inc_ref(v_a_4227_);
v___x_4239_ = lean_apply_2(v_a_4227_, v___x_4238_, lean_box(0));
v___x_4240_ = lean_box(0);
v___x_4241_ = lean_nat_dec_lt(v___x_4232_, v___x_4231_);
if (v___x_4241_ == 0)
{
lean_object* v___x_4242_; 
lean_dec_ref(v_postUpdateHooks_4230_);
lean_dec_ref(v_pkg_4225_);
v___x_4242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4242_, 0, v___x_4240_);
return v___x_4242_;
}
else
{
uint8_t v___x_4243_; 
v___x_4243_ = lean_nat_dec_le(v___x_4231_, v___x_4231_);
if (v___x_4243_ == 0)
{
if (v___x_4241_ == 0)
{
lean_object* v___x_4244_; 
lean_dec_ref(v_postUpdateHooks_4230_);
lean_dec_ref(v_pkg_4225_);
v___x_4244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4244_, 0, v___x_4240_);
return v___x_4244_;
}
else
{
size_t v___x_4245_; size_t v___x_4246_; lean_object* v___x_4247_; 
v___x_4245_ = ((size_t)0ULL);
v___x_4246_ = lean_usize_of_nat(v___x_4231_);
v___x_4247_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_4225_, v_postUpdateHooks_4230_, v___x_4245_, v___x_4246_, v___x_4240_, v_a_4226_, v_a_4227_);
lean_dec_ref(v_postUpdateHooks_4230_);
return v___x_4247_;
}
}
else
{
size_t v___x_4248_; size_t v___x_4249_; lean_object* v___x_4250_; 
v___x_4248_ = ((size_t)0ULL);
v___x_4249_ = lean_usize_of_nat(v___x_4231_);
v___x_4250_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_4225_, v_postUpdateHooks_4230_, v___x_4248_, v___x_4249_, v___x_4240_, v_a_4226_, v_a_4227_);
lean_dec_ref(v_postUpdateHooks_4230_);
return v___x_4250_;
}
}
}
else
{
lean_object* v___x_4251_; lean_object* v___x_4252_; 
lean_dec_ref(v_postUpdateHooks_4230_);
lean_dec_ref(v_pkg_4225_);
v___x_4251_ = lean_box(0);
v___x_4252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4252_, 0, v___x_4251_);
return v___x_4252_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___boxed(lean_object* v_pkg_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_, lean_object* v___y_4256_){
_start:
{
lean_object* v_res_4257_; 
v_res_4257_ = l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(v_pkg_4253_, v_a_4254_, v_a_4255_);
lean_dec_ref(v_a_4255_);
lean_dec(v_a_4254_);
return v_res_4257_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(lean_object* v_a_4258_, lean_object* v_ws_4259_, lean_object* v_toUpdate_4260_, lean_object* v_leanOpts_4261_, uint8_t v_updateToolchain_4262_){
_start:
{
lean_object* v___x_4264_; lean_object* v___x_4265_; 
v___x_4264_ = lean_box(1);
v___x_4265_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest(v_ws_4259_, v_toUpdate_4260_, v___x_4264_, v_a_4258_);
if (lean_obj_tag(v___x_4265_) == 0)
{
lean_object* v_a_4266_; lean_object* v_snd_4267_; uint8_t v___x_4268_; 
v_a_4266_ = lean_ctor_get(v___x_4265_, 0);
lean_inc(v_a_4266_);
lean_dec_ref_known(v___x_4265_, 1);
v_snd_4267_ = lean_ctor_get(v_a_4266_, 1);
lean_inc(v_snd_4267_);
lean_dec(v_a_4266_);
v___x_4268_ = 1;
if (v_updateToolchain_4262_ == 0)
{
lean_object* v_packages_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v_wsIdx_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
v_packages_4269_ = lean_ctor_get(v_ws_4259_, 4);
v___x_4270_ = lean_unsigned_to_nat(0u);
v___x_4271_ = lean_array_fget_borrowed(v_packages_4269_, v___x_4270_);
v_wsIdx_4272_ = lean_ctor_get(v___x_4271_, 0);
lean_inc(v_wsIdx_4272_);
v___x_4273_ = lean_array_get_size(v_packages_4269_);
v___x_4274_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(v_leanOpts_4261_, v___x_4268_, v_ws_4259_, v_wsIdx_4272_, v___x_4273_, v_snd_4267_, v_a_4258_);
if (lean_obj_tag(v___x_4274_) == 0)
{
lean_object* v_a_4275_; lean_object* v___x_4277_; uint8_t v_isShared_4278_; uint8_t v_isSharedCheck_4292_; 
v_a_4275_ = lean_ctor_get(v___x_4274_, 0);
v_isSharedCheck_4292_ = !lean_is_exclusive(v___x_4274_);
if (v_isSharedCheck_4292_ == 0)
{
v___x_4277_ = v___x_4274_;
v_isShared_4278_ = v_isSharedCheck_4292_;
goto v_resetjp_4276_;
}
else
{
lean_inc(v_a_4275_);
lean_dec(v___x_4274_);
v___x_4277_ = lean_box(0);
v_isShared_4278_ = v_isSharedCheck_4292_;
goto v_resetjp_4276_;
}
v_resetjp_4276_:
{
lean_object* v_fst_4279_; lean_object* v_snd_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4291_; 
v_fst_4279_ = lean_ctor_get(v_a_4275_, 0);
v_snd_4280_ = lean_ctor_get(v_a_4275_, 1);
v_isSharedCheck_4291_ = !lean_is_exclusive(v_a_4275_);
if (v_isSharedCheck_4291_ == 0)
{
v___x_4282_ = v_a_4275_;
v_isShared_4283_ = v_isSharedCheck_4291_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_snd_4280_);
lean_inc(v_fst_4279_);
lean_dec(v_a_4275_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4291_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v___x_4284_; lean_object* v___x_4286_; 
v___x_4284_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_4279_);
if (v_isShared_4283_ == 0)
{
lean_ctor_set(v___x_4282_, 0, v___x_4284_);
v___x_4286_ = v___x_4282_;
goto v_reusejp_4285_;
}
else
{
lean_object* v_reuseFailAlloc_4290_; 
v_reuseFailAlloc_4290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4290_, 0, v___x_4284_);
lean_ctor_set(v_reuseFailAlloc_4290_, 1, v_snd_4280_);
v___x_4286_ = v_reuseFailAlloc_4290_;
goto v_reusejp_4285_;
}
v_reusejp_4285_:
{
lean_object* v___x_4288_; 
if (v_isShared_4278_ == 0)
{
lean_ctor_set(v___x_4277_, 0, v___x_4286_);
v___x_4288_ = v___x_4277_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v___x_4286_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
}
}
}
else
{
return v___x_4274_;
}
}
else
{
lean_object* v_packages_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v_depConfigs_4296_; lean_object* v___x_4297_; lean_object* v___f_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; 
v_packages_4293_ = lean_ctor_get(v_ws_4259_, 4);
v___x_4294_ = lean_unsigned_to_nat(0u);
v___x_4295_ = lean_array_fget_borrowed(v_packages_4293_, v___x_4294_);
v_depConfigs_4296_ = lean_ctor_get(v___x_4295_, 12);
v___x_4297_ = lean_box(v_updateToolchain_4262_);
lean_inc_ref(v_ws_4259_);
lean_inc(v___x_4295_);
v___f_4298_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed), 7, 3);
lean_closure_set(v___f_4298_, 0, v___x_4295_);
lean_closure_set(v___f_4298_, 1, v___x_4297_);
lean_closure_set(v___f_4298_, 2, v_ws_4259_);
v___x_4299_ = lean_array_get_size(v_depConfigs_4296_);
lean_inc_ref(v_depConfigs_4296_);
v___x_4300_ = l_Array_reverse___redArg(v_depConfigs_4296_);
v___x_4301_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0));
v___x_4302_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(v___x_4299_, v___f_4298_, v___x_4300_, v___x_4294_, v___x_4301_, v_snd_4267_, v_a_4258_);
if (lean_obj_tag(v___x_4302_) == 0)
{
lean_object* v_a_4303_; lean_object* v_fst_4304_; lean_object* v_snd_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4377_; 
v_a_4303_ = lean_ctor_get(v___x_4302_, 0);
lean_inc(v_a_4303_);
lean_dec_ref_known(v___x_4302_, 1);
v_fst_4304_ = lean_ctor_get(v_a_4303_, 0);
v_snd_4305_ = lean_ctor_get(v_a_4303_, 1);
v_isSharedCheck_4377_ = !lean_is_exclusive(v_a_4303_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4307_ = v_a_4303_;
v_isShared_4308_ = v_isSharedCheck_4377_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_snd_4305_);
lean_inc(v_fst_4304_);
lean_dec(v_a_4303_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4377_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
lean_object* v___x_4309_; 
lean_inc_ref(v_ws_4259_);
v___x_4309_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_4258_, v_ws_4259_, v_fst_4304_);
if (lean_obj_tag(v___x_4309_) == 0)
{
lean_object* v___x_4310_; lean_object* v___x_4311_; 
lean_dec_ref_known(v___x_4309_, 1);
v___x_4310_ = lean_array_get_size(v_packages_4293_);
lean_inc_ref(v_leanOpts_4261_);
v___x_4311_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5___redArg(v___x_4299_, v_fst_4304_, v___x_4300_, v_leanOpts_4261_, v___x_4294_, v_ws_4259_, v_snd_4305_, v_a_4258_);
lean_dec_ref(v___x_4300_);
lean_dec(v_fst_4304_);
if (lean_obj_tag(v___x_4311_) == 0)
{
lean_object* v_a_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4360_; 
v_a_4312_ = lean_ctor_get(v___x_4311_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4311_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4314_ = v___x_4311_;
v_isShared_4315_ = v_isSharedCheck_4360_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_a_4312_);
lean_dec(v___x_4311_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4360_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v_fst_4316_; lean_object* v_snd_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4359_; 
v_fst_4316_ = lean_ctor_get(v_a_4312_, 0);
v_snd_4317_ = lean_ctor_get(v_a_4312_, 1);
v_isSharedCheck_4359_ = !lean_is_exclusive(v_a_4312_);
if (v_isSharedCheck_4359_ == 0)
{
v___x_4319_ = v_a_4312_;
v_isShared_4320_ = v_isSharedCheck_4359_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_snd_4317_);
lean_inc(v_fst_4316_);
lean_dec(v_a_4312_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4359_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v_packages_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4326_; 
v_packages_4321_ = lean_ctor_get(v_fst_4316_, 4);
v___x_4322_ = lean_array_get_size(v_packages_4321_);
v___x_4323_ = lean_array_fget(v_packages_4321_, v___x_4294_);
v___x_4324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4324_, 0, v___x_4310_);
if (v_isShared_4308_ == 0)
{
lean_ctor_set(v___x_4307_, 1, v___x_4322_);
lean_ctor_set(v___x_4307_, 0, v___x_4324_);
v___x_4326_ = v___x_4307_;
goto v_reusejp_4325_;
}
else
{
lean_object* v_reuseFailAlloc_4358_; 
v_reuseFailAlloc_4358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4358_, 0, v___x_4324_);
lean_ctor_set(v_reuseFailAlloc_4358_, 1, v___x_4322_);
v___x_4326_ = v_reuseFailAlloc_4358_;
goto v_reusejp_4325_;
}
v_reusejp_4325_:
{
lean_object* v___x_4327_; lean_object* v___x_4328_; uint8_t v___x_4329_; 
v___x_4327_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v___x_4326_, v___x_4301_);
v___x_4328_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_fst_4316_, v___x_4323_, v___x_4327_);
v___x_4329_ = lean_nat_dec_eq(v___x_4310_, v___x_4322_);
if (v___x_4329_ == 0)
{
lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; 
lean_del_object(v___x_4319_);
lean_del_object(v___x_4314_);
v___x_4330_ = lean_unsigned_to_nat(1u);
v___x_4331_ = lean_nat_add(v___x_4310_, v___x_4330_);
v___x_4332_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(v_leanOpts_4261_, v___x_4268_, v___x_4328_, v___x_4310_, v___x_4331_, v_snd_4317_, v_a_4258_);
if (lean_obj_tag(v___x_4332_) == 0)
{
lean_object* v_a_4333_; lean_object* v___x_4335_; uint8_t v_isShared_4336_; uint8_t v_isSharedCheck_4350_; 
v_a_4333_ = lean_ctor_get(v___x_4332_, 0);
v_isSharedCheck_4350_ = !lean_is_exclusive(v___x_4332_);
if (v_isSharedCheck_4350_ == 0)
{
v___x_4335_ = v___x_4332_;
v_isShared_4336_ = v_isSharedCheck_4350_;
goto v_resetjp_4334_;
}
else
{
lean_inc(v_a_4333_);
lean_dec(v___x_4332_);
v___x_4335_ = lean_box(0);
v_isShared_4336_ = v_isSharedCheck_4350_;
goto v_resetjp_4334_;
}
v_resetjp_4334_:
{
lean_object* v_fst_4337_; lean_object* v_snd_4338_; lean_object* v___x_4340_; uint8_t v_isShared_4341_; uint8_t v_isSharedCheck_4349_; 
v_fst_4337_ = lean_ctor_get(v_a_4333_, 0);
v_snd_4338_ = lean_ctor_get(v_a_4333_, 1);
v_isSharedCheck_4349_ = !lean_is_exclusive(v_a_4333_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4340_ = v_a_4333_;
v_isShared_4341_ = v_isSharedCheck_4349_;
goto v_resetjp_4339_;
}
else
{
lean_inc(v_snd_4338_);
lean_inc(v_fst_4337_);
lean_dec(v_a_4333_);
v___x_4340_ = lean_box(0);
v_isShared_4341_ = v_isSharedCheck_4349_;
goto v_resetjp_4339_;
}
v_resetjp_4339_:
{
lean_object* v___x_4342_; lean_object* v___x_4344_; 
v___x_4342_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_4337_);
if (v_isShared_4341_ == 0)
{
lean_ctor_set(v___x_4340_, 0, v___x_4342_);
v___x_4344_ = v___x_4340_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v___x_4342_);
lean_ctor_set(v_reuseFailAlloc_4348_, 1, v_snd_4338_);
v___x_4344_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
lean_object* v___x_4346_; 
if (v_isShared_4336_ == 0)
{
lean_ctor_set(v___x_4335_, 0, v___x_4344_);
v___x_4346_ = v___x_4335_;
goto v_reusejp_4345_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v___x_4344_);
v___x_4346_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4345_;
}
v_reusejp_4345_:
{
return v___x_4346_;
}
}
}
}
}
else
{
return v___x_4332_;
}
}
else
{
lean_object* v___x_4351_; lean_object* v___x_4353_; 
lean_dec_ref(v_leanOpts_4261_);
v___x_4351_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v___x_4328_);
if (v_isShared_4320_ == 0)
{
lean_ctor_set(v___x_4319_, 0, v___x_4351_);
v___x_4353_ = v___x_4319_;
goto v_reusejp_4352_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v___x_4351_);
lean_ctor_set(v_reuseFailAlloc_4357_, 1, v_snd_4317_);
v___x_4353_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4352_;
}
v_reusejp_4352_:
{
lean_object* v___x_4355_; 
if (v_isShared_4315_ == 0)
{
lean_ctor_set(v___x_4314_, 0, v___x_4353_);
v___x_4355_ = v___x_4314_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v___x_4353_);
v___x_4355_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
return v___x_4355_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4368_; 
lean_del_object(v___x_4307_);
lean_dec_ref(v_leanOpts_4261_);
v_a_4361_ = lean_ctor_get(v___x_4311_, 0);
v_isSharedCheck_4368_ = !lean_is_exclusive(v___x_4311_);
if (v_isSharedCheck_4368_ == 0)
{
v___x_4363_ = v___x_4311_;
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_a_4361_);
lean_dec(v___x_4311_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4368_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v___x_4366_; 
if (v_isShared_4364_ == 0)
{
v___x_4366_ = v___x_4363_;
goto v_reusejp_4365_;
}
else
{
lean_object* v_reuseFailAlloc_4367_; 
v_reuseFailAlloc_4367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4367_, 0, v_a_4361_);
v___x_4366_ = v_reuseFailAlloc_4367_;
goto v_reusejp_4365_;
}
v_reusejp_4365_:
{
return v___x_4366_;
}
}
}
}
else
{
lean_object* v_a_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4376_; 
lean_del_object(v___x_4307_);
lean_dec(v_snd_4305_);
lean_dec(v_fst_4304_);
lean_dec_ref(v___x_4300_);
lean_dec_ref(v_leanOpts_4261_);
lean_dec_ref(v_ws_4259_);
v_a_4369_ = lean_ctor_get(v___x_4309_, 0);
v_isSharedCheck_4376_ = !lean_is_exclusive(v___x_4309_);
if (v_isSharedCheck_4376_ == 0)
{
v___x_4371_ = v___x_4309_;
v_isShared_4372_ = v_isSharedCheck_4376_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_a_4369_);
lean_dec(v___x_4309_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4376_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4374_; 
if (v_isShared_4372_ == 0)
{
v___x_4374_ = v___x_4371_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v_a_4369_);
v___x_4374_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4373_;
}
v_reusejp_4373_:
{
return v___x_4374_;
}
}
}
}
}
else
{
lean_object* v_a_4378_; lean_object* v___x_4380_; uint8_t v_isShared_4381_; uint8_t v_isSharedCheck_4385_; 
lean_dec_ref(v___x_4300_);
lean_dec_ref(v_leanOpts_4261_);
lean_dec_ref(v_ws_4259_);
v_a_4378_ = lean_ctor_get(v___x_4302_, 0);
v_isSharedCheck_4385_ = !lean_is_exclusive(v___x_4302_);
if (v_isSharedCheck_4385_ == 0)
{
v___x_4380_ = v___x_4302_;
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
else
{
lean_inc(v_a_4378_);
lean_dec(v___x_4302_);
v___x_4380_ = lean_box(0);
v_isShared_4381_ = v_isSharedCheck_4385_;
goto v_resetjp_4379_;
}
v_resetjp_4379_:
{
lean_object* v___x_4383_; 
if (v_isShared_4381_ == 0)
{
v___x_4383_ = v___x_4380_;
goto v_reusejp_4382_;
}
else
{
lean_object* v_reuseFailAlloc_4384_; 
v_reuseFailAlloc_4384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4384_, 0, v_a_4378_);
v___x_4383_ = v_reuseFailAlloc_4384_;
goto v_reusejp_4382_;
}
v_reusejp_4382_:
{
return v___x_4383_;
}
}
}
}
}
else
{
lean_object* v_a_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4393_; 
lean_dec_ref(v_leanOpts_4261_);
lean_dec_ref(v_ws_4259_);
v_a_4386_ = lean_ctor_get(v___x_4265_, 0);
v_isSharedCheck_4393_ = !lean_is_exclusive(v___x_4265_);
if (v_isSharedCheck_4393_ == 0)
{
v___x_4388_ = v___x_4265_;
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
else
{
lean_inc(v_a_4386_);
lean_dec(v___x_4265_);
v___x_4388_ = lean_box(0);
v_isShared_4389_ = v_isSharedCheck_4393_;
goto v_resetjp_4387_;
}
v_resetjp_4387_:
{
lean_object* v___x_4391_; 
if (v_isShared_4389_ == 0)
{
v___x_4391_ = v___x_4388_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v_a_4386_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
return v___x_4391_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0___boxed(lean_object* v_a_4394_, lean_object* v_ws_4395_, lean_object* v_toUpdate_4396_, lean_object* v_leanOpts_4397_, lean_object* v_updateToolchain_4398_, lean_object* v___y_4399_){
_start:
{
uint8_t v_updateToolchain_boxed_4400_; lean_object* v_res_4401_; 
v_updateToolchain_boxed_4400_ = lean_unbox(v_updateToolchain_4398_);
v_res_4401_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_a_4394_, v_ws_4395_, v_toUpdate_4396_, v_leanOpts_4397_, v_updateToolchain_boxed_4400_);
lean_dec_ref(v_a_4394_);
return v_res_4401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(lean_object* v_as_4402_, size_t v_i_4403_, size_t v_stop_4404_, lean_object* v_b_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_){
_start:
{
uint8_t v___x_4409_; 
v___x_4409_ = lean_usize_dec_eq(v_i_4403_, v_stop_4404_);
if (v___x_4409_ == 0)
{
lean_object* v___x_4410_; lean_object* v___x_4411_; 
v___x_4410_ = lean_array_uget_borrowed(v_as_4402_, v_i_4403_);
lean_inc(v___x_4410_);
v___x_4411_ = l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(v___x_4410_, v___y_4406_, v___y_4407_);
if (lean_obj_tag(v___x_4411_) == 0)
{
lean_object* v_a_4412_; size_t v___x_4413_; size_t v___x_4414_; 
v_a_4412_ = lean_ctor_get(v___x_4411_, 0);
lean_inc(v_a_4412_);
lean_dec_ref_known(v___x_4411_, 1);
v___x_4413_ = ((size_t)1ULL);
v___x_4414_ = lean_usize_add(v_i_4403_, v___x_4413_);
v_i_4403_ = v___x_4414_;
v_b_4405_ = v_a_4412_;
goto _start;
}
else
{
return v___x_4411_;
}
}
else
{
lean_object* v___x_4416_; 
v___x_4416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4416_, 0, v_b_4405_);
return v___x_4416_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1___boxed(lean_object* v_as_4417_, lean_object* v_i_4418_, lean_object* v_stop_4419_, lean_object* v_b_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_){
_start:
{
size_t v_i_boxed_4424_; size_t v_stop_boxed_4425_; lean_object* v_res_4426_; 
v_i_boxed_4424_ = lean_unbox_usize(v_i_4418_);
lean_dec(v_i_4418_);
v_stop_boxed_4425_ = lean_unbox_usize(v_stop_4419_);
lean_dec(v_stop_4419_);
v_res_4426_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_as_4417_, v_i_boxed_4424_, v_stop_boxed_4425_, v_b_4420_, v___y_4421_, v___y_4422_);
lean_dec_ref(v___y_4422_);
lean_dec(v___y_4421_);
lean_dec_ref(v_as_4417_);
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize(lean_object* v_ws_4427_, lean_object* v_toUpdate_4428_, lean_object* v_leanOpts_4429_, uint8_t v_updateToolchain_4430_, lean_object* v_a_4431_){
_start:
{
lean_object* v___x_4433_; 
v___x_4433_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_a_4431_, v_ws_4427_, v_toUpdate_4428_, v_leanOpts_4429_, v_updateToolchain_4430_);
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v_a_4434_; lean_object* v_fst_4435_; lean_object* v_snd_4436_; lean_object* v___y_4438_; lean_object* v___x_4455_; 
v_a_4434_ = lean_ctor_get(v___x_4433_, 0);
lean_inc(v_a_4434_);
lean_dec_ref_known(v___x_4433_, 1);
v_fst_4435_ = lean_ctor_get(v_a_4434_, 0);
lean_inc(v_fst_4435_);
v_snd_4436_ = lean_ctor_get(v_a_4434_, 1);
lean_inc(v_snd_4436_);
lean_dec(v_a_4434_);
v___x_4455_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(v_fst_4435_, v_snd_4436_);
lean_dec(v_snd_4436_);
if (lean_obj_tag(v___x_4455_) == 0)
{
lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4477_; 
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4455_);
if (v_isSharedCheck_4477_ == 0)
{
lean_object* v_unused_4478_; 
v_unused_4478_ = lean_ctor_get(v___x_4455_, 0);
lean_dec(v_unused_4478_);
v___x_4457_ = v___x_4455_;
v_isShared_4458_ = v_isSharedCheck_4477_;
goto v_resetjp_4456_;
}
else
{
lean_dec(v___x_4455_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4477_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v_packages_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; uint8_t v___x_4462_; 
v_packages_4459_ = lean_ctor_get(v_fst_4435_, 4);
v___x_4460_ = lean_unsigned_to_nat(0u);
v___x_4461_ = lean_array_get_size(v_packages_4459_);
v___x_4462_ = lean_nat_dec_lt(v___x_4460_, v___x_4461_);
if (v___x_4462_ == 0)
{
lean_object* v___x_4464_; 
if (v_isShared_4458_ == 0)
{
lean_ctor_set(v___x_4457_, 0, v_fst_4435_);
v___x_4464_ = v___x_4457_;
goto v_reusejp_4463_;
}
else
{
lean_object* v_reuseFailAlloc_4465_; 
v_reuseFailAlloc_4465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4465_, 0, v_fst_4435_);
v___x_4464_ = v_reuseFailAlloc_4465_;
goto v_reusejp_4463_;
}
v_reusejp_4463_:
{
return v___x_4464_;
}
}
else
{
lean_object* v___x_4466_; uint8_t v___x_4467_; 
v___x_4466_ = lean_box(0);
v___x_4467_ = lean_nat_dec_le(v___x_4461_, v___x_4461_);
if (v___x_4467_ == 0)
{
if (v___x_4462_ == 0)
{
lean_object* v___x_4469_; 
if (v_isShared_4458_ == 0)
{
lean_ctor_set(v___x_4457_, 0, v_fst_4435_);
v___x_4469_ = v___x_4457_;
goto v_reusejp_4468_;
}
else
{
lean_object* v_reuseFailAlloc_4470_; 
v_reuseFailAlloc_4470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4470_, 0, v_fst_4435_);
v___x_4469_ = v_reuseFailAlloc_4470_;
goto v_reusejp_4468_;
}
v_reusejp_4468_:
{
return v___x_4469_;
}
}
else
{
size_t v___x_4471_; size_t v___x_4472_; lean_object* v___x_4473_; 
lean_del_object(v___x_4457_);
v___x_4471_ = ((size_t)0ULL);
v___x_4472_ = lean_usize_of_nat(v___x_4461_);
v___x_4473_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_packages_4459_, v___x_4471_, v___x_4472_, v___x_4466_, v_fst_4435_, v_a_4431_);
v___y_4438_ = v___x_4473_;
goto v___jp_4437_;
}
}
else
{
size_t v___x_4474_; size_t v___x_4475_; lean_object* v___x_4476_; 
lean_del_object(v___x_4457_);
v___x_4474_ = ((size_t)0ULL);
v___x_4475_ = lean_usize_of_nat(v___x_4461_);
v___x_4476_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_packages_4459_, v___x_4474_, v___x_4475_, v___x_4466_, v_fst_4435_, v_a_4431_);
v___y_4438_ = v___x_4476_;
goto v___jp_4437_;
}
}
}
}
else
{
lean_object* v_a_4479_; lean_object* v___x_4481_; uint8_t v_isShared_4482_; uint8_t v_isSharedCheck_4491_; 
lean_dec(v_fst_4435_);
v_a_4479_ = lean_ctor_get(v___x_4455_, 0);
v_isSharedCheck_4491_ = !lean_is_exclusive(v___x_4455_);
if (v_isSharedCheck_4491_ == 0)
{
v___x_4481_ = v___x_4455_;
v_isShared_4482_ = v_isSharedCheck_4491_;
goto v_resetjp_4480_;
}
else
{
lean_inc(v_a_4479_);
lean_dec(v___x_4455_);
v___x_4481_ = lean_box(0);
v_isShared_4482_ = v_isSharedCheck_4491_;
goto v_resetjp_4480_;
}
v_resetjp_4480_:
{
lean_object* v___x_4483_; uint8_t v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4489_; 
v___x_4483_ = lean_io_error_to_string(v_a_4479_);
v___x_4484_ = 3;
v___x_4485_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4485_, 0, v___x_4483_);
lean_ctor_set_uint8(v___x_4485_, sizeof(void*)*1, v___x_4484_);
lean_inc_ref(v_a_4431_);
v___x_4486_ = lean_apply_2(v_a_4431_, v___x_4485_, lean_box(0));
v___x_4487_ = lean_box(0);
if (v_isShared_4482_ == 0)
{
lean_ctor_set(v___x_4481_, 0, v___x_4487_);
v___x_4489_ = v___x_4481_;
goto v_reusejp_4488_;
}
else
{
lean_object* v_reuseFailAlloc_4490_; 
v_reuseFailAlloc_4490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4490_, 0, v___x_4487_);
v___x_4489_ = v_reuseFailAlloc_4490_;
goto v_reusejp_4488_;
}
v_reusejp_4488_:
{
return v___x_4489_;
}
}
}
v___jp_4437_:
{
if (lean_obj_tag(v___y_4438_) == 0)
{
lean_object* v___x_4440_; uint8_t v_isShared_4441_; uint8_t v_isSharedCheck_4445_; 
v_isSharedCheck_4445_ = !lean_is_exclusive(v___y_4438_);
if (v_isSharedCheck_4445_ == 0)
{
lean_object* v_unused_4446_; 
v_unused_4446_ = lean_ctor_get(v___y_4438_, 0);
lean_dec(v_unused_4446_);
v___x_4440_ = v___y_4438_;
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
else
{
lean_dec(v___y_4438_);
v___x_4440_ = lean_box(0);
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
v_resetjp_4439_:
{
lean_object* v___x_4443_; 
if (v_isShared_4441_ == 0)
{
lean_ctor_set(v___x_4440_, 0, v_fst_4435_);
v___x_4443_ = v___x_4440_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_fst_4435_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
}
}
}
else
{
lean_object* v_a_4447_; lean_object* v___x_4449_; uint8_t v_isShared_4450_; uint8_t v_isSharedCheck_4454_; 
lean_dec(v_fst_4435_);
v_a_4447_ = lean_ctor_get(v___y_4438_, 0);
v_isSharedCheck_4454_ = !lean_is_exclusive(v___y_4438_);
if (v_isSharedCheck_4454_ == 0)
{
v___x_4449_ = v___y_4438_;
v_isShared_4450_ = v_isSharedCheck_4454_;
goto v_resetjp_4448_;
}
else
{
lean_inc(v_a_4447_);
lean_dec(v___y_4438_);
v___x_4449_ = lean_box(0);
v_isShared_4450_ = v_isSharedCheck_4454_;
goto v_resetjp_4448_;
}
v_resetjp_4448_:
{
lean_object* v___x_4452_; 
if (v_isShared_4450_ == 0)
{
v___x_4452_ = v___x_4449_;
goto v_reusejp_4451_;
}
else
{
lean_object* v_reuseFailAlloc_4453_; 
v_reuseFailAlloc_4453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4453_, 0, v_a_4447_);
v___x_4452_ = v_reuseFailAlloc_4453_;
goto v_reusejp_4451_;
}
v_reusejp_4451_:
{
return v___x_4452_;
}
}
}
}
}
else
{
lean_object* v_a_4492_; lean_object* v___x_4494_; uint8_t v_isShared_4495_; uint8_t v_isSharedCheck_4499_; 
v_a_4492_ = lean_ctor_get(v___x_4433_, 0);
v_isSharedCheck_4499_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4499_ == 0)
{
v___x_4494_ = v___x_4433_;
v_isShared_4495_ = v_isSharedCheck_4499_;
goto v_resetjp_4493_;
}
else
{
lean_inc(v_a_4492_);
lean_dec(v___x_4433_);
v___x_4494_ = lean_box(0);
v_isShared_4495_ = v_isSharedCheck_4499_;
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
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v_a_4492_);
v___x_4497_ = v_reuseFailAlloc_4498_;
goto v_reusejp_4496_;
}
v_reusejp_4496_:
{
return v___x_4497_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize___boxed(lean_object* v_ws_4500_, lean_object* v_toUpdate_4501_, lean_object* v_leanOpts_4502_, lean_object* v_updateToolchain_4503_, lean_object* v_a_4504_, lean_object* v___y_4505_){
_start:
{
uint8_t v_updateToolchain_boxed_4506_; lean_object* v_res_4507_; 
v_updateToolchain_boxed_4506_ = lean_unbox(v_updateToolchain_4503_);
v_res_4507_ = l_Lake_Workspace_updateAndMaterialize(v_ws_4500_, v_toUpdate_4501_, v_leanOpts_4502_, v_updateToolchain_boxed_4506_, v_a_4504_);
lean_dec_ref(v_a_4504_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(lean_object* v___x_4512_, lean_object* v_what_4513_, lean_object* v___y_4514_){
_start:
{
lean_object* v_name_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; uint8_t v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; uint8_t v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; 
v_name_4516_ = lean_ctor_get(v___x_4512_, 0);
lean_inc(v_name_4516_);
lean_dec_ref(v___x_4512_);
v___x_4517_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0));
v___x_4518_ = lean_string_append(v___x_4517_, v_what_4513_);
v___x_4519_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1));
v___x_4520_ = lean_string_append(v___x_4518_, v___x_4519_);
v___x_4521_ = 1;
v___x_4522_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4516_, v___x_4521_);
v___x_4523_ = lean_string_append(v___x_4520_, v___x_4522_);
v___x_4524_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2));
v___x_4525_ = lean_string_append(v___x_4523_, v___x_4524_);
v___x_4526_ = lean_string_append(v___x_4525_, v___x_4522_);
lean_dec_ref(v___x_4522_);
v___x_4527_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3));
v___x_4528_ = lean_string_append(v___x_4526_, v___x_4527_);
v___x_4529_ = 2;
v___x_4530_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4530_, 0, v___x_4528_);
lean_ctor_set_uint8(v___x_4530_, sizeof(void*)*1, v___x_4529_);
lean_inc_ref(v___y_4514_);
v___x_4531_ = lean_apply_2(v___y_4514_, v___x_4530_, lean_box(0));
v___x_4532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4532_, 0, v___x_4531_);
return v___x_4532_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___boxed(lean_object* v___x_4533_, lean_object* v_what_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_){
_start:
{
lean_object* v_res_4537_; 
v_res_4537_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4533_, v_what_4534_, v___y_4535_);
lean_dec_ref(v___y_4535_);
lean_dec_ref(v_what_4534_);
return v_res_4537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(lean_object* v_pkgEntries_4541_, lean_object* v_as_4542_, size_t v_i_4543_, size_t v_stop_4544_, lean_object* v_b_4545_, lean_object* v___y_4546_){
_start:
{
lean_object* v_a_4549_; lean_object* v___y_4554_; uint8_t v___x_4556_; 
v___x_4556_ = lean_usize_dec_eq(v_i_4543_, v_stop_4544_);
if (v___x_4556_ == 0)
{
lean_object* v___x_4557_; lean_object* v_src_x3f_4558_; 
v___x_4557_ = lean_array_uget_borrowed(v_as_4542_, v_i_4543_);
v_src_x3f_4558_ = lean_ctor_get(v___x_4557_, 3);
if (lean_obj_tag(v_src_x3f_4558_) == 1)
{
lean_object* v_name_4559_; lean_object* v_val_4560_; lean_object* v___x_4561_; 
v_name_4559_ = lean_ctor_get(v___x_4557_, 0);
v_val_4560_ = lean_ctor_get(v_src_x3f_4558_, 0);
v___x_4561_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_pkgEntries_4541_, v_name_4559_);
if (lean_obj_tag(v___x_4561_) == 1)
{
lean_object* v_val_4562_; lean_object* v___y_4564_; lean_object* v___y_4568_; 
v_val_4562_ = lean_ctor_get(v___x_4561_, 0);
lean_inc(v_val_4562_);
lean_dec_ref_known(v___x_4561_, 1);
if (lean_obj_tag(v_val_4560_) == 0)
{
lean_object* v_src_4571_; 
v_src_4571_ = lean_ctor_get(v_val_4562_, 4);
lean_inc_ref(v_src_4571_);
lean_dec(v_val_4562_);
if (lean_obj_tag(v_src_4571_) == 0)
{
lean_object* v___x_4572_; 
lean_dec_ref_known(v_src_4571_, 1);
v___x_4572_ = lean_box(0);
v_a_4549_ = v___x_4572_;
goto v___jp_4548_;
}
else
{
lean_dec_ref(v_src_4571_);
v___y_4568_ = v___y_4546_;
goto v___jp_4567_;
}
}
else
{
lean_object* v_src_4573_; 
v_src_4573_ = lean_ctor_get(v_val_4562_, 4);
lean_inc_ref(v_src_4573_);
lean_dec(v_val_4562_);
if (lean_obj_tag(v_src_4573_) == 1)
{
lean_object* v_url_4574_; lean_object* v_rev_4575_; lean_object* v_url_4576_; lean_object* v_inputRev_x3f_4577_; lean_object* v___y_4579_; uint8_t v___x_4586_; 
v_url_4574_ = lean_ctor_get(v_val_4560_, 0);
v_rev_4575_ = lean_ctor_get(v_val_4560_, 1);
v_url_4576_ = lean_ctor_get(v_src_4573_, 0);
lean_inc_ref(v_url_4576_);
v_inputRev_x3f_4577_ = lean_ctor_get(v_src_4573_, 2);
lean_inc(v_inputRev_x3f_4577_);
lean_dec_ref_known(v_src_4573_, 4);
v___x_4586_ = lean_string_dec_eq(v_url_4574_, v_url_4576_);
lean_dec_ref(v_url_4576_);
if (v___x_4586_ == 0)
{
goto v___jp_4583_;
}
else
{
if (v___x_4556_ == 0)
{
v___y_4579_ = v___y_4546_;
goto v___jp_4578_;
}
else
{
goto v___jp_4583_;
}
}
v___jp_4578_:
{
lean_object* v___x_4580_; uint8_t v___x_4581_; 
v___x_4580_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
lean_inc(v_rev_4575_);
v___x_4581_ = l_Option_instDecidableEq___redArg(v___x_4580_, v_rev_4575_, v_inputRev_x3f_4577_);
if (v___x_4581_ == 0)
{
v___y_4564_ = v___y_4579_;
goto v___jp_4563_;
}
else
{
if (v___x_4556_ == 0)
{
lean_object* v___x_4582_; 
v___x_4582_ = lean_box(0);
v_a_4549_ = v___x_4582_;
goto v___jp_4548_;
}
else
{
v___y_4564_ = v___y_4579_;
goto v___jp_4563_;
}
}
}
v___jp_4583_:
{
lean_object* v___x_4584_; lean_object* v___x_4585_; 
v___x_4584_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2));
lean_inc(v___x_4557_);
v___x_4585_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4557_, v___x_4584_, v___y_4546_);
if (lean_obj_tag(v___x_4585_) == 0)
{
lean_dec_ref_known(v___x_4585_, 1);
v___y_4579_ = v___y_4546_;
goto v___jp_4578_;
}
else
{
lean_dec(v_inputRev_x3f_4577_);
return v___x_4585_;
}
}
}
else
{
lean_dec_ref(v_src_4573_);
v___y_4568_ = v___y_4546_;
goto v___jp_4567_;
}
}
v___jp_4563_:
{
lean_object* v___x_4565_; lean_object* v___x_4566_; 
v___x_4565_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0));
lean_inc(v___x_4557_);
v___x_4566_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4557_, v___x_4565_, v___y_4564_);
v___y_4554_ = v___x_4566_;
goto v___jp_4553_;
}
v___jp_4567_:
{
lean_object* v___x_4569_; lean_object* v___x_4570_; 
v___x_4569_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1));
lean_inc(v___x_4557_);
v___x_4570_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4557_, v___x_4569_, v___y_4568_);
v___y_4554_ = v___x_4570_;
goto v___jp_4553_;
}
}
else
{
lean_object* v___x_4587_; 
lean_dec(v___x_4561_);
v___x_4587_ = lean_box(0);
v_a_4549_ = v___x_4587_;
goto v___jp_4548_;
}
}
else
{
lean_object* v___x_4588_; 
v___x_4588_ = lean_box(0);
v_a_4549_ = v___x_4588_;
goto v___jp_4548_;
}
}
else
{
lean_object* v___x_4589_; 
v___x_4589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4589_, 0, v_b_4545_);
return v___x_4589_;
}
v___jp_4548_:
{
size_t v___x_4550_; size_t v___x_4551_; 
v___x_4550_ = ((size_t)1ULL);
v___x_4551_ = lean_usize_add(v_i_4543_, v___x_4550_);
v_i_4543_ = v___x_4551_;
v_b_4545_ = v_a_4549_;
goto _start;
}
v___jp_4553_:
{
if (lean_obj_tag(v___y_4554_) == 0)
{
lean_object* v_a_4555_; 
v_a_4555_ = lean_ctor_get(v___y_4554_, 0);
lean_inc(v_a_4555_);
lean_dec_ref_known(v___y_4554_, 1);
v_a_4549_ = v_a_4555_;
goto v___jp_4548_;
}
else
{
return v___y_4554_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___boxed(lean_object* v_pkgEntries_4590_, lean_object* v_as_4591_, lean_object* v_i_4592_, lean_object* v_stop_4593_, lean_object* v_b_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_){
_start:
{
size_t v_i_boxed_4597_; size_t v_stop_boxed_4598_; lean_object* v_res_4599_; 
v_i_boxed_4597_ = lean_unbox_usize(v_i_4592_);
lean_dec(v_i_4592_);
v_stop_boxed_4598_ = lean_unbox_usize(v_stop_4593_);
lean_dec(v_stop_4593_);
v_res_4599_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4590_, v_as_4591_, v_i_boxed_4597_, v_stop_boxed_4598_, v_b_4594_, v___y_4595_);
lean_dec_ref(v___y_4595_);
lean_dec_ref(v_as_4591_);
lean_dec(v_pkgEntries_4590_);
return v_res_4599_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest(lean_object* v_pkgEntries_4600_, lean_object* v_deps_4601_, lean_object* v_a_4602_){
_start:
{
lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; uint8_t v___x_4607_; 
v___x_4604_ = lean_unsigned_to_nat(0u);
v___x_4605_ = lean_array_get_size(v_deps_4601_);
v___x_4606_ = lean_box(0);
v___x_4607_ = lean_nat_dec_lt(v___x_4604_, v___x_4605_);
if (v___x_4607_ == 0)
{
lean_object* v___x_4608_; 
v___x_4608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4608_, 0, v___x_4606_);
return v___x_4608_;
}
else
{
uint8_t v___x_4609_; 
v___x_4609_ = lean_nat_dec_le(v___x_4605_, v___x_4605_);
if (v___x_4609_ == 0)
{
if (v___x_4607_ == 0)
{
lean_object* v___x_4610_; 
v___x_4610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4610_, 0, v___x_4606_);
return v___x_4610_;
}
else
{
size_t v___x_4611_; size_t v___x_4612_; lean_object* v___x_4613_; 
v___x_4611_ = ((size_t)0ULL);
v___x_4612_ = lean_usize_of_nat(v___x_4605_);
v___x_4613_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4600_, v_deps_4601_, v___x_4611_, v___x_4612_, v___x_4606_, v_a_4602_);
return v___x_4613_;
}
}
else
{
size_t v___x_4614_; size_t v___x_4615_; lean_object* v___x_4616_; 
v___x_4614_ = ((size_t)0ULL);
v___x_4615_ = lean_usize_of_nat(v___x_4605_);
v___x_4616_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4600_, v_deps_4601_, v___x_4614_, v___x_4615_, v___x_4606_, v_a_4602_);
return v___x_4616_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest___boxed(lean_object* v_pkgEntries_4617_, lean_object* v_deps_4618_, lean_object* v_a_4619_, lean_object* v___y_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l___private_Lake_Load_Resolve_0__Lake_validateManifest(v_pkgEntries_4617_, v_deps_4618_, v_a_4619_);
lean_dec_ref(v_a_4619_);
lean_dec_ref(v_deps_4618_);
lean_dec(v_pkgEntries_4617_);
return v_res_4621_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(lean_object* v_x_4622_, lean_object* v_x_4623_){
_start:
{
if (lean_obj_tag(v_x_4622_) == 0)
{
if (lean_obj_tag(v_x_4623_) == 0)
{
uint8_t v___x_4624_; 
v___x_4624_ = 1;
return v___x_4624_;
}
else
{
uint8_t v___x_4625_; 
v___x_4625_ = 0;
return v___x_4625_;
}
}
else
{
if (lean_obj_tag(v_x_4623_) == 0)
{
uint8_t v___x_4626_; 
v___x_4626_ = 0;
return v___x_4626_;
}
else
{
lean_object* v_val_4627_; lean_object* v_val_4628_; uint8_t v___x_4629_; 
v_val_4627_ = lean_ctor_get(v_x_4622_, 0);
v_val_4628_ = lean_ctor_get(v_x_4623_, 0);
v___x_4629_ = lean_string_dec_eq(v_val_4627_, v_val_4628_);
return v___x_4629_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2___boxed(lean_object* v_x_4630_, lean_object* v_x_4631_){
_start:
{
uint8_t v_res_4632_; lean_object* v_r_4633_; 
v_res_4632_ = l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(v_x_4630_, v_x_4631_);
lean_dec(v_x_4631_);
lean_dec(v_x_4630_);
v_r_4633_ = lean_box(v_res_4632_);
return v_r_4633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(lean_object* v_pkg_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_, lean_object* v_leanOpts_4642_, uint8_t v_reconfigure_4643_, lean_object* v_as_4644_, size_t v_i_4645_, size_t v_stop_4646_, lean_object* v_b_4647_, lean_object* v___y_4648_){
_start:
{
uint8_t v___x_4650_; 
v___x_4650_ = lean_usize_dec_eq(v_i_4645_, v_stop_4646_);
if (v___x_4650_ == 0)
{
lean_object* v_ws_4651_; lean_object* v_depIdxs_4652_; lean_object* v___x_4654_; uint8_t v_isShared_4655_; uint8_t v_isSharedCheck_4782_; 
v_ws_4651_ = lean_ctor_get(v_b_4647_, 0);
v_depIdxs_4652_ = lean_ctor_get(v_b_4647_, 1);
v_isSharedCheck_4782_ = !lean_is_exclusive(v_b_4647_);
if (v_isSharedCheck_4782_ == 0)
{
v___x_4654_ = v_b_4647_;
v_isShared_4655_ = v_isSharedCheck_4782_;
goto v_resetjp_4653_;
}
else
{
lean_inc(v_depIdxs_4652_);
lean_inc(v_ws_4651_);
lean_dec(v_b_4647_);
v___x_4654_ = lean_box(0);
v_isShared_4655_ = v_isSharedCheck_4782_;
goto v_resetjp_4653_;
}
v_resetjp_4653_:
{
lean_object* v_lakeEnv_4656_; lean_object* v_packages_4657_; size_t v___x_4658_; size_t v___x_4659_; lean_object* v___x_4660_; lean_object* v___f_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; 
v_lakeEnv_4656_ = lean_ctor_get(v_ws_4651_, 0);
v_packages_4657_ = lean_ctor_get(v_ws_4651_, 4);
v___x_4658_ = ((size_t)1ULL);
v___x_4659_ = lean_usize_sub(v_i_4645_, v___x_4658_);
v___x_4660_ = lean_array_uget_borrowed(v_as_4644_, v___x_4659_);
lean_inc(v___x_4660_);
v___f_4661_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4661_, 0, v___x_4660_);
v___x_4662_ = lean_unsigned_to_nat(0u);
v___x_4663_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_4661_, v_packages_4657_, v___x_4662_);
if (lean_obj_tag(v___x_4663_) == 1)
{
lean_object* v_val_4664_; lean_object* v___x_4665_; lean_object* v___x_4667_; 
v_val_4664_ = lean_ctor_get(v___x_4663_, 0);
lean_inc(v_val_4664_);
lean_dec_ref_known(v___x_4663_, 1);
v___x_4665_ = lean_array_push(v_depIdxs_4652_, v_val_4664_);
if (v_isShared_4655_ == 0)
{
lean_ctor_set(v___x_4654_, 1, v___x_4665_);
v___x_4667_ = v___x_4654_;
goto v_reusejp_4666_;
}
else
{
lean_object* v_reuseFailAlloc_4669_; 
v_reuseFailAlloc_4669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4669_, 0, v_ws_4651_);
lean_ctor_set(v_reuseFailAlloc_4669_, 1, v___x_4665_);
v___x_4667_ = v_reuseFailAlloc_4669_;
goto v_reusejp_4666_;
}
v_reusejp_4666_:
{
v_i_4645_ = v___x_4659_;
v_b_4647_ = v___x_4667_;
goto _start;
}
}
else
{
lean_object* v_wsIdx_4670_; lean_object* v_baseName_4671_; lean_object* v_name_4672_; lean_object* v_opts_4673_; uint8_t v___x_4674_; 
lean_dec(v___x_4663_);
v_wsIdx_4670_ = lean_ctor_get(v_pkg_4639_, 0);
v_baseName_4671_ = lean_ctor_get(v_pkg_4639_, 1);
v_name_4672_ = lean_ctor_get(v___x_4660_, 0);
v_opts_4673_ = lean_ctor_get(v___x_4660_, 4);
v___x_4674_ = lean_name_eq(v_baseName_4671_, v_name_4672_);
if (v___x_4674_ == 0)
{
lean_object* v___x_4675_; 
v___x_4675_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_4640_, v_name_4672_);
if (lean_obj_tag(v___x_4675_) == 1)
{
lean_object* v_val_4676_; lean_object* v___x_4677_; lean_object* v_dir_4678_; lean_object* v___x_4679_; 
v_val_4676_ = lean_ctor_get(v___x_4675_, 0);
lean_inc(v_val_4676_);
lean_dec_ref_known(v___x_4675_, 1);
v___x_4677_ = lean_array_fget_borrowed(v_packages_4657_, v___x_4662_);
v_dir_4678_ = lean_ctor_get(v___x_4677_, 4);
lean_inc_ref(v___y_4641_);
lean_inc_ref(v_dir_4678_);
v___x_4679_ = l_Lake_PackageEntry_materialize(v_val_4676_, v_lakeEnv_4656_, v_dir_4678_, v___y_4641_, v___y_4648_);
if (lean_obj_tag(v___x_4679_) == 0)
{
lean_object* v_a_4680_; lean_object* v___x_4682_; uint8_t v_isShared_4683_; uint8_t v_isSharedCheck_4736_; 
v_a_4680_ = lean_ctor_get(v___x_4679_, 0);
v_isSharedCheck_4736_ = !lean_is_exclusive(v___x_4679_);
if (v_isSharedCheck_4736_ == 0)
{
v___x_4682_ = v___x_4679_;
v_isShared_4683_ = v_isSharedCheck_4736_;
goto v_resetjp_4681_;
}
else
{
lean_inc(v_a_4680_);
lean_dec(v___x_4679_);
v___x_4682_ = lean_box(0);
v_isShared_4683_ = v_isSharedCheck_4736_;
goto v_resetjp_4681_;
}
v_resetjp_4681_:
{
lean_object* v___x_4684_; lean_object* v_wsIdx_4685_; lean_object* v___x_4686_; 
v___x_4684_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_4685_ = lean_array_get_size(v_packages_4657_);
lean_inc_ref(v_leanOpts_4642_);
lean_inc(v_opts_4673_);
v___x_4686_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_4651_, v_a_4680_, v_opts_4673_, v_leanOpts_4642_, v_reconfigure_4643_, v___x_4684_);
if (lean_obj_tag(v___x_4686_) == 0)
{
lean_object* v_a_4687_; lean_object* v_a_4688_; lean_object* v___x_4689_; lean_object* v___x_4691_; 
lean_del_object(v___x_4682_);
v_a_4687_ = lean_ctor_get(v___x_4686_, 0);
lean_inc(v_a_4687_);
v_a_4688_ = lean_ctor_get(v___x_4686_, 1);
lean_inc(v_a_4688_);
lean_dec_ref_known(v___x_4686_, 2);
v___x_4689_ = lean_array_push(v_depIdxs_4652_, v_wsIdx_4685_);
if (v_isShared_4655_ == 0)
{
lean_ctor_set(v___x_4654_, 1, v___x_4689_);
lean_ctor_set(v___x_4654_, 0, v_a_4687_);
v___x_4691_ = v___x_4654_;
goto v_reusejp_4690_;
}
else
{
lean_object* v_reuseFailAlloc_4708_; 
v_reuseFailAlloc_4708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4708_, 0, v_a_4687_);
lean_ctor_set(v_reuseFailAlloc_4708_, 1, v___x_4689_);
v___x_4691_ = v_reuseFailAlloc_4708_;
goto v_reusejp_4690_;
}
v_reusejp_4690_:
{
lean_object* v___x_4692_; uint8_t v___x_4693_; 
v___x_4692_ = lean_array_get_size(v_a_4688_);
v___x_4693_ = lean_nat_dec_lt(v___x_4662_, v___x_4692_);
if (v___x_4693_ == 0)
{
lean_dec(v_a_4688_);
v_i_4645_ = v___x_4659_;
v_b_4647_ = v___x_4691_;
goto _start;
}
else
{
lean_object* v___x_4695_; size_t v___x_4696_; size_t v___x_4697_; lean_object* v___x_4698_; 
v___x_4695_ = lean_box(0);
v___x_4696_ = ((size_t)0ULL);
v___x_4697_ = lean_usize_of_nat(v___x_4692_);
v___x_4698_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4688_, v___x_4696_, v___x_4697_, v___x_4695_, v___y_4648_);
lean_dec(v_a_4688_);
if (lean_obj_tag(v___x_4698_) == 0)
{
lean_dec_ref_known(v___x_4698_, 1);
v_i_4645_ = v___x_4659_;
v_b_4647_ = v___x_4691_;
goto _start;
}
else
{
lean_object* v_a_4700_; lean_object* v___x_4702_; uint8_t v_isShared_4703_; uint8_t v_isSharedCheck_4707_; 
lean_dec_ref(v___x_4691_);
lean_dec_ref(v_leanOpts_4642_);
lean_dec_ref(v___y_4641_);
lean_dec_ref(v_pkg_4639_);
v_a_4700_ = lean_ctor_get(v___x_4698_, 0);
v_isSharedCheck_4707_ = !lean_is_exclusive(v___x_4698_);
if (v_isSharedCheck_4707_ == 0)
{
v___x_4702_ = v___x_4698_;
v_isShared_4703_ = v_isSharedCheck_4707_;
goto v_resetjp_4701_;
}
else
{
lean_inc(v_a_4700_);
lean_dec(v___x_4698_);
v___x_4702_ = lean_box(0);
v_isShared_4703_ = v_isSharedCheck_4707_;
goto v_resetjp_4701_;
}
v_resetjp_4701_:
{
lean_object* v___x_4705_; 
if (v_isShared_4703_ == 0)
{
v___x_4705_ = v___x_4702_;
goto v_reusejp_4704_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v_a_4700_);
v___x_4705_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4704_;
}
v_reusejp_4704_:
{
return v___x_4705_;
}
}
}
}
}
}
else
{
lean_object* v_a_4709_; lean_object* v___x_4710_; uint8_t v___x_4711_; 
lean_del_object(v___x_4654_);
lean_dec_ref(v_depIdxs_4652_);
lean_dec_ref(v_leanOpts_4642_);
lean_dec_ref(v___y_4641_);
lean_dec_ref(v_pkg_4639_);
v_a_4709_ = lean_ctor_get(v___x_4686_, 1);
lean_inc(v_a_4709_);
lean_dec_ref_known(v___x_4686_, 2);
v___x_4710_ = lean_array_get_size(v_a_4709_);
v___x_4711_ = lean_nat_dec_lt(v___x_4662_, v___x_4710_);
if (v___x_4711_ == 0)
{
lean_object* v___x_4712_; lean_object* v___x_4714_; 
lean_dec(v_a_4709_);
v___x_4712_ = lean_box(0);
if (v_isShared_4683_ == 0)
{
lean_ctor_set_tag(v___x_4682_, 1);
lean_ctor_set(v___x_4682_, 0, v___x_4712_);
v___x_4714_ = v___x_4682_;
goto v_reusejp_4713_;
}
else
{
lean_object* v_reuseFailAlloc_4715_; 
v_reuseFailAlloc_4715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4715_, 0, v___x_4712_);
v___x_4714_ = v_reuseFailAlloc_4715_;
goto v_reusejp_4713_;
}
v_reusejp_4713_:
{
return v___x_4714_;
}
}
else
{
lean_object* v___x_4716_; size_t v___x_4717_; size_t v___x_4718_; lean_object* v___x_4719_; 
lean_del_object(v___x_4682_);
v___x_4716_ = lean_box(0);
v___x_4717_ = ((size_t)0ULL);
v___x_4718_ = lean_usize_of_nat(v___x_4710_);
v___x_4719_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4709_, v___x_4717_, v___x_4718_, v___x_4716_, v___y_4648_);
lean_dec(v_a_4709_);
if (lean_obj_tag(v___x_4719_) == 0)
{
lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4726_; 
v_isSharedCheck_4726_ = !lean_is_exclusive(v___x_4719_);
if (v_isSharedCheck_4726_ == 0)
{
lean_object* v_unused_4727_; 
v_unused_4727_ = lean_ctor_get(v___x_4719_, 0);
lean_dec(v_unused_4727_);
v___x_4721_ = v___x_4719_;
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
else
{
lean_dec(v___x_4719_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4724_; 
if (v_isShared_4722_ == 0)
{
lean_ctor_set_tag(v___x_4721_, 1);
lean_ctor_set(v___x_4721_, 0, v___x_4716_);
v___x_4724_ = v___x_4721_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v___x_4716_);
v___x_4724_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
return v___x_4724_;
}
}
}
else
{
lean_object* v_a_4728_; lean_object* v___x_4730_; uint8_t v_isShared_4731_; uint8_t v_isSharedCheck_4735_; 
v_a_4728_ = lean_ctor_get(v___x_4719_, 0);
v_isSharedCheck_4735_ = !lean_is_exclusive(v___x_4719_);
if (v_isSharedCheck_4735_ == 0)
{
v___x_4730_ = v___x_4719_;
v_isShared_4731_ = v_isSharedCheck_4735_;
goto v_resetjp_4729_;
}
else
{
lean_inc(v_a_4728_);
lean_dec(v___x_4719_);
v___x_4730_ = lean_box(0);
v_isShared_4731_ = v_isSharedCheck_4735_;
goto v_resetjp_4729_;
}
v_resetjp_4729_:
{
lean_object* v___x_4733_; 
if (v_isShared_4731_ == 0)
{
v___x_4733_ = v___x_4730_;
goto v_reusejp_4732_;
}
else
{
lean_object* v_reuseFailAlloc_4734_; 
v_reuseFailAlloc_4734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4734_, 0, v_a_4728_);
v___x_4733_ = v_reuseFailAlloc_4734_;
goto v_reusejp_4732_;
}
v_reusejp_4732_:
{
return v___x_4733_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4744_; 
lean_del_object(v___x_4654_);
lean_dec_ref(v_depIdxs_4652_);
lean_dec_ref(v_ws_4651_);
lean_dec_ref(v_leanOpts_4642_);
lean_dec_ref(v___y_4641_);
lean_dec_ref(v_pkg_4639_);
v_a_4737_ = lean_ctor_get(v___x_4679_, 0);
v_isSharedCheck_4744_ = !lean_is_exclusive(v___x_4679_);
if (v_isSharedCheck_4744_ == 0)
{
v___x_4739_ = v___x_4679_;
v_isShared_4740_ = v_isSharedCheck_4744_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_a_4737_);
lean_dec(v___x_4679_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4744_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4742_; 
if (v_isShared_4740_ == 0)
{
v___x_4742_ = v___x_4739_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v_a_4737_);
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
uint8_t v___x_4745_; 
lean_inc(v_baseName_4671_);
lean_inc(v_wsIdx_4670_);
lean_dec(v___x_4675_);
lean_del_object(v___x_4654_);
lean_dec_ref(v_depIdxs_4652_);
lean_dec_ref(v_ws_4651_);
lean_dec_ref(v_leanOpts_4642_);
lean_dec_ref(v___y_4641_);
lean_dec_ref(v_pkg_4639_);
v___x_4745_ = lean_nat_dec_eq(v_wsIdx_4670_, v___x_4662_);
lean_dec(v_wsIdx_4670_);
if (v___x_4745_ == 0)
{
lean_object* v___x_4746_; uint8_t v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; uint8_t v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
v___x_4746_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_4747_ = 1;
lean_inc(v_name_4672_);
v___x_4748_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4672_, v___x_4747_);
v___x_4749_ = lean_string_append(v___x_4746_, v___x_4748_);
lean_dec_ref(v___x_4748_);
v___x_4750_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1));
v___x_4751_ = lean_string_append(v___x_4749_, v___x_4750_);
v___x_4752_ = l_Lean_Name_toString(v_baseName_4671_, v___x_4745_);
v___x_4753_ = lean_string_append(v___x_4751_, v___x_4752_);
lean_dec_ref(v___x_4752_);
v___x_4754_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_4755_ = lean_string_append(v___x_4753_, v___x_4754_);
v___x_4756_ = 3;
v___x_4757_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4757_, 0, v___x_4755_);
lean_ctor_set_uint8(v___x_4757_, sizeof(void*)*1, v___x_4756_);
lean_inc_ref(v___y_4648_);
v___x_4758_ = lean_apply_2(v___y_4648_, v___x_4757_, lean_box(0));
v___x_4759_ = lean_box(0);
v___x_4760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4760_, 0, v___x_4759_);
return v___x_4760_;
}
else
{
lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; uint8_t v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; 
lean_dec(v_baseName_4671_);
v___x_4761_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
lean_inc(v_name_4672_);
v___x_4762_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4672_, v___x_4745_);
v___x_4763_ = lean_string_append(v___x_4761_, v___x_4762_);
v___x_4764_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3));
v___x_4765_ = lean_string_append(v___x_4763_, v___x_4764_);
v___x_4766_ = lean_string_append(v___x_4765_, v___x_4762_);
lean_dec_ref(v___x_4762_);
v___x_4767_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4));
v___x_4768_ = lean_string_append(v___x_4766_, v___x_4767_);
v___x_4769_ = 3;
v___x_4770_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4770_, 0, v___x_4768_);
lean_ctor_set_uint8(v___x_4770_, sizeof(void*)*1, v___x_4769_);
lean_inc_ref(v___y_4648_);
v___x_4771_ = lean_apply_2(v___y_4648_, v___x_4770_, lean_box(0));
v___x_4772_ = lean_box(0);
v___x_4773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4773_, 0, v___x_4772_);
return v___x_4773_;
}
}
}
else
{
lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; uint8_t v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; 
lean_inc(v_baseName_4671_);
lean_del_object(v___x_4654_);
lean_dec_ref(v_depIdxs_4652_);
lean_dec_ref(v_ws_4651_);
lean_dec_ref(v_leanOpts_4642_);
lean_dec_ref(v___y_4641_);
lean_dec_ref(v_pkg_4639_);
v___x_4774_ = l_Lean_Name_toString(v_baseName_4671_, v___x_4650_);
v___x_4775_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_4776_ = lean_string_append(v___x_4774_, v___x_4775_);
v___x_4777_ = 3;
v___x_4778_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4778_, 0, v___x_4776_);
lean_ctor_set_uint8(v___x_4778_, sizeof(void*)*1, v___x_4777_);
lean_inc_ref(v___y_4648_);
v___x_4779_ = lean_apply_2(v___y_4648_, v___x_4778_, lean_box(0));
v___x_4780_ = lean_box(0);
v___x_4781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4781_, 0, v___x_4780_);
return v___x_4781_;
}
}
}
}
else
{
lean_object* v___x_4783_; 
lean_dec_ref(v_leanOpts_4642_);
lean_dec_ref(v___y_4641_);
lean_dec_ref(v_pkg_4639_);
v___x_4783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4783_, 0, v_b_4647_);
return v___x_4783_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_pkg_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_, lean_object* v_leanOpts_4787_, lean_object* v_reconfigure_4788_, lean_object* v_as_4789_, lean_object* v_i_4790_, lean_object* v_stop_4791_, lean_object* v_b_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_){
_start:
{
uint8_t v_reconfigure_boxed_4795_; size_t v_i_boxed_4796_; size_t v_stop_boxed_4797_; lean_object* v_res_4798_; 
v_reconfigure_boxed_4795_ = lean_unbox(v_reconfigure_4788_);
v_i_boxed_4796_ = lean_unbox_usize(v_i_4790_);
lean_dec(v_i_4790_);
v_stop_boxed_4797_ = lean_unbox_usize(v_stop_4791_);
lean_dec(v_stop_4791_);
v_res_4798_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_4784_, v___y_4785_, v___y_4786_, v_leanOpts_4787_, v_reconfigure_boxed_4795_, v_as_4789_, v_i_boxed_4796_, v_stop_boxed_4797_, v_b_4792_, v___y_4793_);
lean_dec_ref(v___y_4793_);
lean_dec_ref(v_as_4789_);
lean_dec(v___y_4785_);
return v_res_4798_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(lean_object* v_start_4799_, lean_object* v_pkg_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v_leanOpts_4803_, uint8_t v_reconfigure_4804_, lean_object* v_as_4805_, size_t v_i_4806_, size_t v_stop_4807_, lean_object* v_b_4808_, lean_object* v___y_4809_){
_start:
{
uint8_t v___x_4811_; 
v___x_4811_ = lean_usize_dec_eq(v_i_4806_, v_stop_4807_);
if (v___x_4811_ == 0)
{
lean_object* v_ws_4812_; lean_object* v_depIdxs_4813_; lean_object* v___x_4815_; uint8_t v_isShared_4816_; uint8_t v_isSharedCheck_4943_; 
v_ws_4812_ = lean_ctor_get(v_b_4808_, 0);
v_depIdxs_4813_ = lean_ctor_get(v_b_4808_, 1);
v_isSharedCheck_4943_ = !lean_is_exclusive(v_b_4808_);
if (v_isSharedCheck_4943_ == 0)
{
v___x_4815_ = v_b_4808_;
v_isShared_4816_ = v_isSharedCheck_4943_;
goto v_resetjp_4814_;
}
else
{
lean_inc(v_depIdxs_4813_);
lean_inc(v_ws_4812_);
lean_dec(v_b_4808_);
v___x_4815_ = lean_box(0);
v_isShared_4816_ = v_isSharedCheck_4943_;
goto v_resetjp_4814_;
}
v_resetjp_4814_:
{
lean_object* v_lakeEnv_4817_; lean_object* v_packages_4818_; size_t v___x_4819_; size_t v___x_4820_; lean_object* v___x_4821_; lean_object* v___f_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; 
v_lakeEnv_4817_ = lean_ctor_get(v_ws_4812_, 0);
v_packages_4818_ = lean_ctor_get(v_ws_4812_, 4);
v___x_4819_ = ((size_t)1ULL);
v___x_4820_ = lean_usize_sub(v_i_4806_, v___x_4819_);
v___x_4821_ = lean_array_uget_borrowed(v_as_4805_, v___x_4820_);
lean_inc(v___x_4821_);
v___f_4822_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4822_, 0, v___x_4821_);
v___x_4823_ = lean_unsigned_to_nat(0u);
v___x_4824_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_4822_, v_packages_4818_, v___x_4823_);
if (lean_obj_tag(v___x_4824_) == 1)
{
lean_object* v_val_4825_; lean_object* v___x_4826_; lean_object* v___x_4828_; 
v_val_4825_ = lean_ctor_get(v___x_4824_, 0);
lean_inc(v_val_4825_);
lean_dec_ref_known(v___x_4824_, 1);
v___x_4826_ = lean_array_push(v_depIdxs_4813_, v_val_4825_);
if (v_isShared_4816_ == 0)
{
lean_ctor_set(v___x_4815_, 1, v___x_4826_);
v___x_4828_ = v___x_4815_;
goto v_reusejp_4827_;
}
else
{
lean_object* v_reuseFailAlloc_4830_; 
v_reuseFailAlloc_4830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4830_, 0, v_ws_4812_);
lean_ctor_set(v_reuseFailAlloc_4830_, 1, v___x_4826_);
v___x_4828_ = v_reuseFailAlloc_4830_;
goto v_reusejp_4827_;
}
v_reusejp_4827_:
{
lean_object* v___x_4829_; 
v___x_4829_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_4800_, v___y_4801_, v___y_4802_, v_leanOpts_4803_, v_reconfigure_4804_, v_as_4805_, v___x_4820_, v_stop_4807_, v___x_4828_, v___y_4809_);
return v___x_4829_;
}
}
else
{
lean_object* v_wsIdx_4831_; lean_object* v_baseName_4832_; lean_object* v_name_4833_; lean_object* v_opts_4834_; uint8_t v___x_4835_; 
lean_dec(v___x_4824_);
v_wsIdx_4831_ = lean_ctor_get(v_pkg_4800_, 0);
v_baseName_4832_ = lean_ctor_get(v_pkg_4800_, 1);
v_name_4833_ = lean_ctor_get(v___x_4821_, 0);
v_opts_4834_ = lean_ctor_get(v___x_4821_, 4);
v___x_4835_ = lean_name_eq(v_baseName_4832_, v_name_4833_);
if (v___x_4835_ == 0)
{
lean_object* v___x_4836_; 
v___x_4836_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_4801_, v_name_4833_);
if (lean_obj_tag(v___x_4836_) == 1)
{
lean_object* v_val_4837_; lean_object* v___x_4838_; lean_object* v_dir_4839_; lean_object* v___x_4840_; 
v_val_4837_ = lean_ctor_get(v___x_4836_, 0);
lean_inc(v_val_4837_);
lean_dec_ref_known(v___x_4836_, 1);
v___x_4838_ = lean_array_fget_borrowed(v_packages_4818_, v___x_4823_);
v_dir_4839_ = lean_ctor_get(v___x_4838_, 4);
lean_inc_ref(v___y_4802_);
lean_inc_ref(v_dir_4839_);
v___x_4840_ = l_Lake_PackageEntry_materialize(v_val_4837_, v_lakeEnv_4817_, v_dir_4839_, v___y_4802_, v___y_4809_);
if (lean_obj_tag(v___x_4840_) == 0)
{
lean_object* v_a_4841_; lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4897_; 
v_a_4841_ = lean_ctor_get(v___x_4840_, 0);
v_isSharedCheck_4897_ = !lean_is_exclusive(v___x_4840_);
if (v_isSharedCheck_4897_ == 0)
{
v___x_4843_ = v___x_4840_;
v_isShared_4844_ = v_isSharedCheck_4897_;
goto v_resetjp_4842_;
}
else
{
lean_inc(v_a_4841_);
lean_dec(v___x_4840_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4897_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v___x_4845_; lean_object* v_wsIdx_4846_; lean_object* v___x_4847_; 
v___x_4845_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_4846_ = lean_array_get_size(v_packages_4818_);
lean_inc_ref(v_leanOpts_4803_);
lean_inc(v_opts_4834_);
v___x_4847_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_4812_, v_a_4841_, v_opts_4834_, v_leanOpts_4803_, v_reconfigure_4804_, v___x_4845_);
if (lean_obj_tag(v___x_4847_) == 0)
{
lean_object* v_a_4848_; lean_object* v_a_4849_; lean_object* v___x_4850_; lean_object* v___x_4852_; 
lean_del_object(v___x_4843_);
v_a_4848_ = lean_ctor_get(v___x_4847_, 0);
lean_inc(v_a_4848_);
v_a_4849_ = lean_ctor_get(v___x_4847_, 1);
lean_inc(v_a_4849_);
lean_dec_ref_known(v___x_4847_, 2);
v___x_4850_ = lean_array_push(v_depIdxs_4813_, v_wsIdx_4846_);
if (v_isShared_4816_ == 0)
{
lean_ctor_set(v___x_4815_, 1, v___x_4850_);
lean_ctor_set(v___x_4815_, 0, v_a_4848_);
v___x_4852_ = v___x_4815_;
goto v_reusejp_4851_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v_a_4848_);
lean_ctor_set(v_reuseFailAlloc_4869_, 1, v___x_4850_);
v___x_4852_ = v_reuseFailAlloc_4869_;
goto v_reusejp_4851_;
}
v_reusejp_4851_:
{
lean_object* v___x_4853_; uint8_t v___x_4854_; 
v___x_4853_ = lean_array_get_size(v_a_4849_);
v___x_4854_ = lean_nat_dec_lt(v___x_4823_, v___x_4853_);
if (v___x_4854_ == 0)
{
lean_object* v___x_4855_; 
lean_dec(v_a_4849_);
v___x_4855_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_4800_, v___y_4801_, v___y_4802_, v_leanOpts_4803_, v_reconfigure_4804_, v_as_4805_, v___x_4820_, v_stop_4807_, v___x_4852_, v___y_4809_);
return v___x_4855_;
}
else
{
lean_object* v___x_4856_; size_t v___x_4857_; size_t v___x_4858_; lean_object* v___x_4859_; 
v___x_4856_ = lean_box(0);
v___x_4857_ = ((size_t)0ULL);
v___x_4858_ = lean_usize_of_nat(v___x_4853_);
v___x_4859_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4849_, v___x_4857_, v___x_4858_, v___x_4856_, v___y_4809_);
lean_dec(v_a_4849_);
if (lean_obj_tag(v___x_4859_) == 0)
{
lean_object* v___x_4860_; 
lean_dec_ref_known(v___x_4859_, 1);
v___x_4860_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_4800_, v___y_4801_, v___y_4802_, v_leanOpts_4803_, v_reconfigure_4804_, v_as_4805_, v___x_4820_, v_stop_4807_, v___x_4852_, v___y_4809_);
return v___x_4860_;
}
else
{
lean_object* v_a_4861_; lean_object* v___x_4863_; uint8_t v_isShared_4864_; uint8_t v_isSharedCheck_4868_; 
lean_dec_ref(v___x_4852_);
lean_dec_ref(v_leanOpts_4803_);
lean_dec_ref(v___y_4802_);
lean_dec_ref(v_pkg_4800_);
v_a_4861_ = lean_ctor_get(v___x_4859_, 0);
v_isSharedCheck_4868_ = !lean_is_exclusive(v___x_4859_);
if (v_isSharedCheck_4868_ == 0)
{
v___x_4863_ = v___x_4859_;
v_isShared_4864_ = v_isSharedCheck_4868_;
goto v_resetjp_4862_;
}
else
{
lean_inc(v_a_4861_);
lean_dec(v___x_4859_);
v___x_4863_ = lean_box(0);
v_isShared_4864_ = v_isSharedCheck_4868_;
goto v_resetjp_4862_;
}
v_resetjp_4862_:
{
lean_object* v___x_4866_; 
if (v_isShared_4864_ == 0)
{
v___x_4866_ = v___x_4863_;
goto v_reusejp_4865_;
}
else
{
lean_object* v_reuseFailAlloc_4867_; 
v_reuseFailAlloc_4867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4867_, 0, v_a_4861_);
v___x_4866_ = v_reuseFailAlloc_4867_;
goto v_reusejp_4865_;
}
v_reusejp_4865_:
{
return v___x_4866_;
}
}
}
}
}
}
else
{
lean_object* v_a_4870_; lean_object* v___x_4871_; uint8_t v___x_4872_; 
lean_del_object(v___x_4815_);
lean_dec_ref(v_depIdxs_4813_);
lean_dec_ref(v_leanOpts_4803_);
lean_dec_ref(v___y_4802_);
lean_dec_ref(v_pkg_4800_);
v_a_4870_ = lean_ctor_get(v___x_4847_, 1);
lean_inc(v_a_4870_);
lean_dec_ref_known(v___x_4847_, 2);
v___x_4871_ = lean_array_get_size(v_a_4870_);
v___x_4872_ = lean_nat_dec_lt(v___x_4823_, v___x_4871_);
if (v___x_4872_ == 0)
{
lean_object* v___x_4873_; lean_object* v___x_4875_; 
lean_dec(v_a_4870_);
v___x_4873_ = lean_box(0);
if (v_isShared_4844_ == 0)
{
lean_ctor_set_tag(v___x_4843_, 1);
lean_ctor_set(v___x_4843_, 0, v___x_4873_);
v___x_4875_ = v___x_4843_;
goto v_reusejp_4874_;
}
else
{
lean_object* v_reuseFailAlloc_4876_; 
v_reuseFailAlloc_4876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4876_, 0, v___x_4873_);
v___x_4875_ = v_reuseFailAlloc_4876_;
goto v_reusejp_4874_;
}
v_reusejp_4874_:
{
return v___x_4875_;
}
}
else
{
lean_object* v___x_4877_; size_t v___x_4878_; size_t v___x_4879_; lean_object* v___x_4880_; 
lean_del_object(v___x_4843_);
v___x_4877_ = lean_box(0);
v___x_4878_ = ((size_t)0ULL);
v___x_4879_ = lean_usize_of_nat(v___x_4871_);
v___x_4880_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4870_, v___x_4878_, v___x_4879_, v___x_4877_, v___y_4809_);
lean_dec(v_a_4870_);
if (lean_obj_tag(v___x_4880_) == 0)
{
lean_object* v___x_4882_; uint8_t v_isShared_4883_; uint8_t v_isSharedCheck_4887_; 
v_isSharedCheck_4887_ = !lean_is_exclusive(v___x_4880_);
if (v_isSharedCheck_4887_ == 0)
{
lean_object* v_unused_4888_; 
v_unused_4888_ = lean_ctor_get(v___x_4880_, 0);
lean_dec(v_unused_4888_);
v___x_4882_ = v___x_4880_;
v_isShared_4883_ = v_isSharedCheck_4887_;
goto v_resetjp_4881_;
}
else
{
lean_dec(v___x_4880_);
v___x_4882_ = lean_box(0);
v_isShared_4883_ = v_isSharedCheck_4887_;
goto v_resetjp_4881_;
}
v_resetjp_4881_:
{
lean_object* v___x_4885_; 
if (v_isShared_4883_ == 0)
{
lean_ctor_set_tag(v___x_4882_, 1);
lean_ctor_set(v___x_4882_, 0, v___x_4877_);
v___x_4885_ = v___x_4882_;
goto v_reusejp_4884_;
}
else
{
lean_object* v_reuseFailAlloc_4886_; 
v_reuseFailAlloc_4886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4886_, 0, v___x_4877_);
v___x_4885_ = v_reuseFailAlloc_4886_;
goto v_reusejp_4884_;
}
v_reusejp_4884_:
{
return v___x_4885_;
}
}
}
else
{
lean_object* v_a_4889_; lean_object* v___x_4891_; uint8_t v_isShared_4892_; uint8_t v_isSharedCheck_4896_; 
v_a_4889_ = lean_ctor_get(v___x_4880_, 0);
v_isSharedCheck_4896_ = !lean_is_exclusive(v___x_4880_);
if (v_isSharedCheck_4896_ == 0)
{
v___x_4891_ = v___x_4880_;
v_isShared_4892_ = v_isSharedCheck_4896_;
goto v_resetjp_4890_;
}
else
{
lean_inc(v_a_4889_);
lean_dec(v___x_4880_);
v___x_4891_ = lean_box(0);
v_isShared_4892_ = v_isSharedCheck_4896_;
goto v_resetjp_4890_;
}
v_resetjp_4890_:
{
lean_object* v___x_4894_; 
if (v_isShared_4892_ == 0)
{
v___x_4894_ = v___x_4891_;
goto v_reusejp_4893_;
}
else
{
lean_object* v_reuseFailAlloc_4895_; 
v_reuseFailAlloc_4895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4895_, 0, v_a_4889_);
v___x_4894_ = v_reuseFailAlloc_4895_;
goto v_reusejp_4893_;
}
v_reusejp_4893_:
{
return v___x_4894_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4898_; lean_object* v___x_4900_; uint8_t v_isShared_4901_; uint8_t v_isSharedCheck_4905_; 
lean_del_object(v___x_4815_);
lean_dec_ref(v_depIdxs_4813_);
lean_dec_ref(v_ws_4812_);
lean_dec_ref(v_leanOpts_4803_);
lean_dec_ref(v___y_4802_);
lean_dec_ref(v_pkg_4800_);
v_a_4898_ = lean_ctor_get(v___x_4840_, 0);
v_isSharedCheck_4905_ = !lean_is_exclusive(v___x_4840_);
if (v_isSharedCheck_4905_ == 0)
{
v___x_4900_ = v___x_4840_;
v_isShared_4901_ = v_isSharedCheck_4905_;
goto v_resetjp_4899_;
}
else
{
lean_inc(v_a_4898_);
lean_dec(v___x_4840_);
v___x_4900_ = lean_box(0);
v_isShared_4901_ = v_isSharedCheck_4905_;
goto v_resetjp_4899_;
}
v_resetjp_4899_:
{
lean_object* v___x_4903_; 
if (v_isShared_4901_ == 0)
{
v___x_4903_ = v___x_4900_;
goto v_reusejp_4902_;
}
else
{
lean_object* v_reuseFailAlloc_4904_; 
v_reuseFailAlloc_4904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4904_, 0, v_a_4898_);
v___x_4903_ = v_reuseFailAlloc_4904_;
goto v_reusejp_4902_;
}
v_reusejp_4902_:
{
return v___x_4903_;
}
}
}
}
else
{
uint8_t v___x_4906_; 
lean_inc(v_baseName_4832_);
lean_inc(v_wsIdx_4831_);
lean_dec(v___x_4836_);
lean_del_object(v___x_4815_);
lean_dec_ref(v_depIdxs_4813_);
lean_dec_ref(v_ws_4812_);
lean_dec_ref(v_leanOpts_4803_);
lean_dec_ref(v___y_4802_);
lean_dec_ref(v_pkg_4800_);
v___x_4906_ = lean_nat_dec_eq(v_wsIdx_4831_, v___x_4823_);
lean_dec(v_wsIdx_4831_);
if (v___x_4906_ == 0)
{
lean_object* v___x_4907_; uint8_t v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; uint8_t v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; 
v___x_4907_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_4908_ = 1;
lean_inc(v_name_4833_);
v___x_4909_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4833_, v___x_4908_);
v___x_4910_ = lean_string_append(v___x_4907_, v___x_4909_);
lean_dec_ref(v___x_4909_);
v___x_4911_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1));
v___x_4912_ = lean_string_append(v___x_4910_, v___x_4911_);
v___x_4913_ = l_Lean_Name_toString(v_baseName_4832_, v___x_4906_);
v___x_4914_ = lean_string_append(v___x_4912_, v___x_4913_);
lean_dec_ref(v___x_4913_);
v___x_4915_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_4916_ = lean_string_append(v___x_4914_, v___x_4915_);
v___x_4917_ = 3;
v___x_4918_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4918_, 0, v___x_4916_);
lean_ctor_set_uint8(v___x_4918_, sizeof(void*)*1, v___x_4917_);
lean_inc_ref(v___y_4809_);
v___x_4919_ = lean_apply_2(v___y_4809_, v___x_4918_, lean_box(0));
v___x_4920_ = lean_box(0);
v___x_4921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4921_, 0, v___x_4920_);
return v___x_4921_;
}
else
{
lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; uint8_t v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; 
lean_dec(v_baseName_4832_);
v___x_4922_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
lean_inc(v_name_4833_);
v___x_4923_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4833_, v___x_4906_);
v___x_4924_ = lean_string_append(v___x_4922_, v___x_4923_);
v___x_4925_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3));
v___x_4926_ = lean_string_append(v___x_4924_, v___x_4925_);
v___x_4927_ = lean_string_append(v___x_4926_, v___x_4923_);
lean_dec_ref(v___x_4923_);
v___x_4928_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4));
v___x_4929_ = lean_string_append(v___x_4927_, v___x_4928_);
v___x_4930_ = 3;
v___x_4931_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4931_, 0, v___x_4929_);
lean_ctor_set_uint8(v___x_4931_, sizeof(void*)*1, v___x_4930_);
lean_inc_ref(v___y_4809_);
v___x_4932_ = lean_apply_2(v___y_4809_, v___x_4931_, lean_box(0));
v___x_4933_ = lean_box(0);
v___x_4934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4934_, 0, v___x_4933_);
return v___x_4934_;
}
}
}
else
{
lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; uint8_t v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; 
lean_inc(v_baseName_4832_);
lean_del_object(v___x_4815_);
lean_dec_ref(v_depIdxs_4813_);
lean_dec_ref(v_ws_4812_);
lean_dec_ref(v_leanOpts_4803_);
lean_dec_ref(v___y_4802_);
lean_dec_ref(v_pkg_4800_);
v___x_4935_ = l_Lean_Name_toString(v_baseName_4832_, v___x_4811_);
v___x_4936_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_4937_ = lean_string_append(v___x_4935_, v___x_4936_);
v___x_4938_ = 3;
v___x_4939_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4939_, 0, v___x_4937_);
lean_ctor_set_uint8(v___x_4939_, sizeof(void*)*1, v___x_4938_);
lean_inc_ref(v___y_4809_);
v___x_4940_ = lean_apply_2(v___y_4809_, v___x_4939_, lean_box(0));
v___x_4941_ = lean_box(0);
v___x_4942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4942_, 0, v___x_4941_);
return v___x_4942_;
}
}
}
}
else
{
lean_object* v___x_4944_; 
lean_dec_ref(v_leanOpts_4803_);
lean_dec_ref(v___y_4802_);
lean_dec_ref(v_pkg_4800_);
v___x_4944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4944_, 0, v_b_4808_);
return v___x_4944_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0___boxed(lean_object* v_start_4945_, lean_object* v_pkg_4946_, lean_object* v___y_4947_, lean_object* v___y_4948_, lean_object* v_leanOpts_4949_, lean_object* v_reconfigure_4950_, lean_object* v_as_4951_, lean_object* v_i_4952_, lean_object* v_stop_4953_, lean_object* v_b_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_){
_start:
{
uint8_t v_reconfigure_boxed_4957_; size_t v_i_boxed_4958_; size_t v_stop_boxed_4959_; lean_object* v_res_4960_; 
v_reconfigure_boxed_4957_ = lean_unbox(v_reconfigure_4950_);
v_i_boxed_4958_ = lean_unbox_usize(v_i_4952_);
lean_dec(v_i_4952_);
v_stop_boxed_4959_ = lean_unbox_usize(v_stop_4953_);
lean_dec(v_stop_4953_);
v_res_4960_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_4945_, v_pkg_4946_, v___y_4947_, v___y_4948_, v_leanOpts_4949_, v_reconfigure_boxed_4957_, v_as_4951_, v_i_boxed_4958_, v_stop_boxed_4959_, v_b_4954_, v___y_4955_);
lean_dec_ref(v___y_4955_);
lean_dec_ref(v_as_4951_);
lean_dec(v___y_4947_);
lean_dec(v_start_4945_);
return v_res_4960_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(lean_object* v___y_4961_, lean_object* v___y_4962_, lean_object* v_leanOpts_4963_, uint8_t v_reconfigure_4964_, lean_object* v_ws_4965_, lean_object* v_i_4966_, lean_object* v_next_4967_, lean_object* v___y_4968_){
_start:
{
lean_object* v_packages_4970_; lean_object* v_pkg_4971_; lean_object* v_ws_4973_; lean_object* v_depIdxs_4974_; lean_object* v___y_4975_; lean_object* v_____x_4985_; lean_object* v___y_4986_; lean_object* v_depConfigs_4989_; lean_object* v_start_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v_s_4993_; lean_object* v___x_4994_; uint8_t v___x_4995_; 
v_packages_4970_ = lean_ctor_get(v_ws_4965_, 4);
v_pkg_4971_ = lean_array_fget(v_packages_4970_, v_i_4966_);
lean_dec(v_i_4966_);
v_depConfigs_4989_ = lean_ctor_get(v_pkg_4971_, 12);
v_start_4990_ = lean_array_get_size(v_packages_4970_);
v___x_4991_ = lean_array_get_size(v_depConfigs_4989_);
v___x_4992_ = lean_mk_empty_array_with_capacity(v___x_4991_);
lean_inc_ref(v___x_4992_);
lean_inc_ref(v_ws_4965_);
v_s_4993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_4993_, 0, v_ws_4965_);
lean_ctor_set(v_s_4993_, 1, v___x_4992_);
v___x_4994_ = lean_unsigned_to_nat(0u);
v___x_4995_ = lean_nat_dec_le(v___x_4991_, v___x_4991_);
if (v___x_4995_ == 0)
{
uint8_t v___x_4996_; 
v___x_4996_ = lean_nat_dec_lt(v___x_4994_, v___x_4991_);
if (v___x_4996_ == 0)
{
lean_object* v_ws_4997_; lean_object* v_packages_4998_; lean_object* v___x_4999_; uint8_t v___x_5000_; 
lean_dec_ref_known(v_s_4993_, 2);
v_ws_4997_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_4965_, v_pkg_4971_, v___x_4992_);
v_packages_4998_ = lean_ctor_get(v_ws_4997_, 4);
lean_inc_ref(v_packages_4998_);
v___x_4999_ = lean_array_get_size(v_packages_4998_);
lean_dec_ref(v_packages_4998_);
v___x_5000_ = lean_nat_dec_lt(v_next_4967_, v___x_4999_);
if (v___x_5000_ == 0)
{
lean_object* v___x_5001_; 
lean_dec(v_next_4967_);
lean_dec_ref(v_leanOpts_4963_);
lean_dec_ref(v___y_4962_);
v___x_5001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5001_, 0, v_ws_4997_);
return v___x_5001_;
}
else
{
lean_object* v___x_5002_; lean_object* v___x_5003_; 
v___x_5002_ = lean_unsigned_to_nat(1u);
v___x_5003_ = lean_nat_add(v_next_4967_, v___x_5002_);
v_ws_4965_ = v_ws_4997_;
v_i_4966_ = v_next_4967_;
v_next_4967_ = v___x_5003_;
goto _start;
}
}
else
{
size_t v___x_5005_; size_t v___x_5006_; lean_object* v___x_5007_; 
lean_dec_ref(v___x_4992_);
lean_dec_ref(v_ws_4965_);
v___x_5005_ = lean_usize_of_nat(v___x_4991_);
v___x_5006_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_4963_);
lean_inc_ref(v___y_4962_);
lean_inc(v_pkg_4971_);
v___x_5007_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_4990_, v_pkg_4971_, v___y_4961_, v___y_4962_, v_leanOpts_4963_, v_reconfigure_4964_, v_depConfigs_4989_, v___x_5005_, v___x_5006_, v_s_4993_, v___y_4968_);
if (lean_obj_tag(v___x_5007_) == 0)
{
lean_object* v_a_5008_; 
v_a_5008_ = lean_ctor_get(v___x_5007_, 0);
lean_inc(v_a_5008_);
lean_dec_ref_known(v___x_5007_, 1);
v_____x_4985_ = v_a_5008_;
v___y_4986_ = v___y_4968_;
goto v___jp_4984_;
}
else
{
lean_object* v_a_5009_; lean_object* v___x_5011_; uint8_t v_isShared_5012_; uint8_t v_isSharedCheck_5016_; 
lean_dec(v_pkg_4971_);
lean_dec(v_next_4967_);
lean_dec_ref(v_leanOpts_4963_);
lean_dec_ref(v___y_4962_);
v_a_5009_ = lean_ctor_get(v___x_5007_, 0);
v_isSharedCheck_5016_ = !lean_is_exclusive(v___x_5007_);
if (v_isSharedCheck_5016_ == 0)
{
v___x_5011_ = v___x_5007_;
v_isShared_5012_ = v_isSharedCheck_5016_;
goto v_resetjp_5010_;
}
else
{
lean_inc(v_a_5009_);
lean_dec(v___x_5007_);
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
v_reuseFailAlloc_5015_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
uint8_t v___x_5017_; 
v___x_5017_ = lean_nat_dec_lt(v___x_4994_, v___x_4991_);
if (v___x_5017_ == 0)
{
lean_dec_ref_known(v_s_4993_, 2);
v_ws_4973_ = v_ws_4965_;
v_depIdxs_4974_ = v___x_4992_;
v___y_4975_ = v___y_4968_;
goto v___jp_4972_;
}
else
{
size_t v___x_5018_; size_t v___x_5019_; lean_object* v___x_5020_; 
lean_dec_ref(v___x_4992_);
lean_dec_ref(v_ws_4965_);
v___x_5018_ = lean_usize_of_nat(v___x_4991_);
v___x_5019_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_4963_);
lean_inc_ref(v___y_4962_);
lean_inc(v_pkg_4971_);
v___x_5020_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_4990_, v_pkg_4971_, v___y_4961_, v___y_4962_, v_leanOpts_4963_, v_reconfigure_4964_, v_depConfigs_4989_, v___x_5018_, v___x_5019_, v_s_4993_, v___y_4968_);
if (lean_obj_tag(v___x_5020_) == 0)
{
lean_object* v_a_5021_; 
v_a_5021_ = lean_ctor_get(v___x_5020_, 0);
lean_inc(v_a_5021_);
lean_dec_ref_known(v___x_5020_, 1);
v_____x_4985_ = v_a_5021_;
v___y_4986_ = v___y_4968_;
goto v___jp_4984_;
}
else
{
lean_object* v_a_5022_; lean_object* v___x_5024_; uint8_t v_isShared_5025_; uint8_t v_isSharedCheck_5029_; 
lean_dec(v_pkg_4971_);
lean_dec(v_next_4967_);
lean_dec_ref(v_leanOpts_4963_);
lean_dec_ref(v___y_4962_);
v_a_5022_ = lean_ctor_get(v___x_5020_, 0);
v_isSharedCheck_5029_ = !lean_is_exclusive(v___x_5020_);
if (v_isSharedCheck_5029_ == 0)
{
v___x_5024_ = v___x_5020_;
v_isShared_5025_ = v_isSharedCheck_5029_;
goto v_resetjp_5023_;
}
else
{
lean_inc(v_a_5022_);
lean_dec(v___x_5020_);
v___x_5024_ = lean_box(0);
v_isShared_5025_ = v_isSharedCheck_5029_;
goto v_resetjp_5023_;
}
v_resetjp_5023_:
{
lean_object* v___x_5027_; 
if (v_isShared_5025_ == 0)
{
v___x_5027_ = v___x_5024_;
goto v_reusejp_5026_;
}
else
{
lean_object* v_reuseFailAlloc_5028_; 
v_reuseFailAlloc_5028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5028_, 0, v_a_5022_);
v___x_5027_ = v_reuseFailAlloc_5028_;
goto v_reusejp_5026_;
}
v_reusejp_5026_:
{
return v___x_5027_;
}
}
}
}
}
v___jp_4972_:
{
lean_object* v_ws_4976_; lean_object* v_packages_4977_; lean_object* v___x_4978_; uint8_t v___x_4979_; 
v_ws_4976_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_4973_, v_pkg_4971_, v_depIdxs_4974_);
v_packages_4977_ = lean_ctor_get(v_ws_4976_, 4);
lean_inc_ref(v_packages_4977_);
v___x_4978_ = lean_array_get_size(v_packages_4977_);
lean_dec_ref(v_packages_4977_);
v___x_4979_ = lean_nat_dec_lt(v_next_4967_, v___x_4978_);
if (v___x_4979_ == 0)
{
lean_object* v___x_4980_; 
lean_dec(v_next_4967_);
lean_dec_ref(v_leanOpts_4963_);
lean_dec_ref(v___y_4962_);
v___x_4980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4980_, 0, v_ws_4976_);
return v___x_4980_;
}
else
{
lean_object* v___x_4981_; lean_object* v___x_4982_; 
v___x_4981_ = lean_unsigned_to_nat(1u);
v___x_4982_ = lean_nat_add(v_next_4967_, v___x_4981_);
v_ws_4965_ = v_ws_4976_;
v_i_4966_ = v_next_4967_;
v_next_4967_ = v___x_4982_;
v___y_4968_ = v___y_4975_;
goto _start;
}
}
v___jp_4984_:
{
lean_object* v_ws_4987_; lean_object* v_depIdxs_4988_; 
v_ws_4987_ = lean_ctor_get(v_____x_4985_, 0);
lean_inc_ref(v_ws_4987_);
v_depIdxs_4988_ = lean_ctor_get(v_____x_4985_, 1);
lean_inc_ref(v_depIdxs_4988_);
lean_dec_ref(v_____x_4985_);
v_ws_4973_ = v_ws_4987_;
v_depIdxs_4974_ = v_depIdxs_4988_;
v___y_4975_ = v___y_4986_;
goto v___jp_4972_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg___boxed(lean_object* v___y_5030_, lean_object* v___y_5031_, lean_object* v_leanOpts_5032_, lean_object* v_reconfigure_5033_, lean_object* v_ws_5034_, lean_object* v_i_5035_, lean_object* v_next_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_){
_start:
{
uint8_t v_reconfigure_boxed_5039_; lean_object* v_res_5040_; 
v_reconfigure_boxed_5039_ = lean_unbox(v_reconfigure_5033_);
v_res_5040_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_5030_, v___y_5031_, v_leanOpts_5032_, v_reconfigure_boxed_5039_, v_ws_5034_, v_i_5035_, v_next_5036_, v___y_5037_);
lean_dec_ref(v___y_5037_);
lean_dec(v___y_5030_);
return v_res_5040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(lean_object* v_as_5041_, size_t v_i_5042_, size_t v_stop_5043_, lean_object* v_b_5044_){
_start:
{
uint8_t v___x_5045_; 
v___x_5045_ = lean_usize_dec_eq(v_i_5042_, v_stop_5043_);
if (v___x_5045_ == 0)
{
lean_object* v___x_5046_; lean_object* v_name_5047_; lean_object* v___x_5048_; size_t v___x_5049_; size_t v___x_5050_; 
v___x_5046_ = lean_array_uget_borrowed(v_as_5041_, v_i_5042_);
v_name_5047_ = lean_ctor_get(v___x_5046_, 0);
lean_inc(v___x_5046_);
lean_inc(v_name_5047_);
v___x_5048_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_5047_, v___x_5046_, v_b_5044_);
v___x_5049_ = ((size_t)1ULL);
v___x_5050_ = lean_usize_add(v_i_5042_, v___x_5049_);
v_i_5042_ = v___x_5050_;
v_b_5044_ = v___x_5048_;
goto _start;
}
else
{
return v_b_5044_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2___boxed(lean_object* v_as_5052_, lean_object* v_i_5053_, lean_object* v_stop_5054_, lean_object* v_b_5055_){
_start:
{
size_t v_i_boxed_5056_; size_t v_stop_boxed_5057_; lean_object* v_res_5058_; 
v_i_boxed_5056_ = lean_unbox_usize(v_i_5053_);
lean_dec(v_i_5053_);
v_stop_boxed_5057_ = lean_unbox_usize(v_stop_5054_);
lean_dec(v_stop_5054_);
v_res_5058_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(v_as_5052_, v_i_boxed_5056_, v_stop_boxed_5057_, v_b_5055_);
lean_dec_ref(v_as_5052_);
return v_res_5058_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(lean_object* v_as_5059_, size_t v_i_5060_, size_t v_stop_5061_, lean_object* v_b_5062_){
_start:
{
uint8_t v___x_5063_; 
v___x_5063_ = lean_usize_dec_eq(v_i_5060_, v_stop_5061_);
if (v___x_5063_ == 0)
{
lean_object* v___x_5064_; lean_object* v_name_5065_; lean_object* v___x_5066_; size_t v___x_5067_; size_t v___x_5068_; lean_object* v___x_5069_; 
v___x_5064_ = lean_array_uget_borrowed(v_as_5059_, v_i_5060_);
v_name_5065_ = lean_ctor_get(v___x_5064_, 0);
lean_inc(v___x_5064_);
lean_inc(v_name_5065_);
v___x_5066_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_5065_, v___x_5064_, v_b_5062_);
v___x_5067_ = ((size_t)1ULL);
v___x_5068_ = lean_usize_add(v_i_5060_, v___x_5067_);
v___x_5069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(v_as_5059_, v___x_5068_, v_stop_5061_, v___x_5066_);
return v___x_5069_;
}
else
{
return v_b_5062_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1___boxed(lean_object* v_as_5070_, lean_object* v_i_5071_, lean_object* v_stop_5072_, lean_object* v_b_5073_){
_start:
{
size_t v_i_boxed_5074_; size_t v_stop_boxed_5075_; lean_object* v_res_5076_; 
v_i_boxed_5074_ = lean_unbox_usize(v_i_5071_);
lean_dec(v_i_5071_);
v_stop_boxed_5075_ = lean_unbox_usize(v_stop_5072_);
lean_dec(v_stop_5072_);
v_res_5076_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_as_5070_, v_i_boxed_5074_, v_stop_boxed_5075_, v_b_5073_);
lean_dec_ref(v_as_5070_);
return v_res_5076_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps(lean_object* v_ws_5086_, lean_object* v_manifest_5087_, lean_object* v_leanOpts_5088_, uint8_t v_reconfigure_5089_, lean_object* v_overrides_5090_, lean_object* v_a_5091_){
_start:
{
lean_object* v___y_5094_; lean_object* v___y_5095_; lean_object* v___y_5096_; lean_object* v___y_5097_; lean_object* v___y_5098_; lean_object* v___y_5111_; lean_object* v___y_5112_; lean_object* v___y_5113_; lean_object* v___y_5114_; lean_object* v___y_5115_; uint8_t v___y_5116_; lean_object* v___y_5122_; lean_object* v___y_5123_; lean_object* v___y_5124_; lean_object* v___y_5125_; lean_object* v___y_5126_; lean_object* v___y_5127_; lean_object* v___y_5128_; lean_object* v___y_5133_; lean_object* v___y_5134_; lean_object* v___y_5135_; lean_object* v___y_5136_; lean_object* v___y_5137_; lean_object* v___y_5138_; lean_object* v___y_5139_; lean_object* v___y_5150_; lean_object* v___y_5151_; lean_object* v___y_5152_; lean_object* v___y_5153_; lean_object* v_packagesDir_x3f_5196_; lean_object* v_packages_5197_; lean_object* v___y_5199_; lean_object* v___y_5200_; lean_object* v___y_5213_; lean_object* v___x_5221_; lean_object* v___x_5222_; uint8_t v___x_5223_; 
v_packagesDir_x3f_5196_ = lean_ctor_get(v_manifest_5087_, 2);
lean_inc(v_packagesDir_x3f_5196_);
v_packages_5197_ = lean_ctor_get(v_manifest_5087_, 3);
lean_inc_ref(v_packages_5197_);
lean_dec_ref(v_manifest_5087_);
v___x_5221_ = lean_array_get_size(v_packages_5197_);
v___x_5222_ = lean_unsigned_to_nat(0u);
v___x_5223_ = lean_nat_dec_eq(v___x_5221_, v___x_5222_);
if (v___x_5223_ == 0)
{
lean_object* v_packages_5224_; lean_object* v___x_5225_; lean_object* v_config_5226_; lean_object* v_toWorkspaceConfig_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; uint8_t v___x_5231_; 
v_packages_5224_ = lean_ctor_get(v_ws_5086_, 4);
v___x_5225_ = lean_array_fget_borrowed(v_packages_5224_, v___x_5222_);
v_config_5226_ = lean_ctor_get(v___x_5225_, 6);
v_toWorkspaceConfig_5227_ = lean_ctor_get(v_config_5226_, 0);
lean_inc_ref(v_toWorkspaceConfig_5227_);
v___x_5228_ = l_System_FilePath_normalize(v_toWorkspaceConfig_5227_);
v___x_5229_ = l_Lake_mkRelPathString(v___x_5228_);
v___x_5230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5230_, 0, v___x_5229_);
v___x_5231_ = l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(v_packagesDir_x3f_5196_, v___x_5230_);
lean_dec_ref_known(v___x_5230_, 1);
if (v___x_5231_ == 0)
{
lean_object* v___x_5232_; lean_object* v___x_5233_; 
v___x_5232_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__4));
lean_inc_ref(v_a_5091_);
v___x_5233_ = lean_apply_2(v_a_5091_, v___x_5232_, lean_box(0));
v___y_5213_ = v_a_5091_;
goto v___jp_5212_;
}
else
{
v___y_5213_ = v_a_5091_;
goto v___jp_5212_;
}
}
else
{
v___y_5213_ = v_a_5091_;
goto v___jp_5212_;
}
v___jp_5093_:
{
lean_object* v___x_5099_; lean_object* v___x_5100_; 
v___x_5099_ = lean_array_get_size(v___y_5094_);
lean_dec_ref(v___y_5094_);
v___x_5100_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_5097_, v___y_5096_, v_leanOpts_5088_, v_reconfigure_5089_, v_ws_5086_, v___y_5095_, v___x_5099_, v___y_5098_);
lean_dec(v___y_5097_);
if (lean_obj_tag(v___x_5100_) == 0)
{
lean_object* v_a_5101_; lean_object* v___x_5103_; uint8_t v_isShared_5104_; uint8_t v_isSharedCheck_5109_; 
v_a_5101_ = lean_ctor_get(v___x_5100_, 0);
v_isSharedCheck_5109_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5109_ == 0)
{
v___x_5103_ = v___x_5100_;
v_isShared_5104_ = v_isSharedCheck_5109_;
goto v_resetjp_5102_;
}
else
{
lean_inc(v_a_5101_);
lean_dec(v___x_5100_);
v___x_5103_ = lean_box(0);
v_isShared_5104_ = v_isSharedCheck_5109_;
goto v_resetjp_5102_;
}
v_resetjp_5102_:
{
lean_object* v___x_5105_; lean_object* v___x_5107_; 
v___x_5105_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_a_5101_);
if (v_isShared_5104_ == 0)
{
lean_ctor_set(v___x_5103_, 0, v___x_5105_);
v___x_5107_ = v___x_5103_;
goto v_reusejp_5106_;
}
else
{
lean_object* v_reuseFailAlloc_5108_; 
v_reuseFailAlloc_5108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5108_, 0, v___x_5105_);
v___x_5107_ = v_reuseFailAlloc_5108_;
goto v_reusejp_5106_;
}
v_reusejp_5106_:
{
return v___x_5107_;
}
}
}
else
{
return v___x_5100_;
}
}
v___jp_5110_:
{
if (v___y_5116_ == 0)
{
v___y_5094_ = v___y_5111_;
v___y_5095_ = v___y_5112_;
v___y_5096_ = v___y_5113_;
v___y_5097_ = v___y_5114_;
v___y_5098_ = v___y_5115_;
goto v___jp_5093_;
}
else
{
lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; 
lean_dec(v___y_5114_);
lean_dec_ref(v___y_5113_);
lean_dec(v___y_5112_);
lean_dec_ref(v___y_5111_);
lean_dec_ref(v_leanOpts_5088_);
lean_dec_ref(v_ws_5086_);
v___x_5117_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__1));
lean_inc_ref(v___y_5115_);
v___x_5118_ = lean_apply_2(v___y_5115_, v___x_5117_, lean_box(0));
v___x_5119_ = lean_box(0);
v___x_5120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5120_, 0, v___x_5119_);
return v___x_5120_;
}
}
v___jp_5121_:
{
uint8_t v___x_5129_; 
v___x_5129_ = l_Lean_NameMap_isEmpty___redArg(v___y_5128_);
if (v___x_5129_ == 0)
{
lean_dec_ref(v___y_5126_);
v___y_5111_ = v___y_5122_;
v___y_5112_ = v___y_5124_;
v___y_5113_ = v___y_5125_;
v___y_5114_ = v___y_5128_;
v___y_5115_ = v___y_5127_;
v___y_5116_ = v___x_5129_;
goto v___jp_5110_;
}
else
{
lean_object* v___x_5130_; uint8_t v___x_5131_; 
v___x_5130_ = lean_array_get_size(v___y_5126_);
lean_dec_ref(v___y_5126_);
v___x_5131_ = lean_nat_dec_eq(v___x_5130_, v___y_5123_);
if (v___x_5131_ == 0)
{
v___y_5111_ = v___y_5122_;
v___y_5112_ = v___y_5124_;
v___y_5113_ = v___y_5125_;
v___y_5114_ = v___y_5128_;
v___y_5115_ = v___y_5127_;
v___y_5116_ = v___x_5129_;
goto v___jp_5110_;
}
else
{
v___y_5094_ = v___y_5122_;
v___y_5095_ = v___y_5124_;
v___y_5096_ = v___y_5125_;
v___y_5097_ = v___y_5128_;
v___y_5098_ = v___y_5127_;
goto v___jp_5093_;
}
}
}
v___jp_5132_:
{
lean_object* v___x_5140_; uint8_t v___x_5141_; 
v___x_5140_ = lean_array_get_size(v_overrides_5090_);
v___x_5141_ = lean_nat_dec_lt(v___y_5135_, v___x_5140_);
if (v___x_5141_ == 0)
{
v___y_5122_ = v___y_5133_;
v___y_5123_ = v___y_5135_;
v___y_5124_ = v___y_5134_;
v___y_5125_ = v___y_5136_;
v___y_5126_ = v___y_5138_;
v___y_5127_ = v___y_5137_;
v___y_5128_ = v___y_5139_;
goto v___jp_5121_;
}
else
{
uint8_t v___x_5142_; 
v___x_5142_ = lean_nat_dec_le(v___x_5140_, v___x_5140_);
if (v___x_5142_ == 0)
{
if (v___x_5141_ == 0)
{
v___y_5122_ = v___y_5133_;
v___y_5123_ = v___y_5135_;
v___y_5124_ = v___y_5134_;
v___y_5125_ = v___y_5136_;
v___y_5126_ = v___y_5138_;
v___y_5127_ = v___y_5137_;
v___y_5128_ = v___y_5139_;
goto v___jp_5121_;
}
else
{
size_t v___x_5143_; size_t v___x_5144_; lean_object* v___x_5145_; 
v___x_5143_ = ((size_t)0ULL);
v___x_5144_ = lean_usize_of_nat(v___x_5140_);
v___x_5145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_overrides_5090_, v___x_5143_, v___x_5144_, v___y_5139_);
v___y_5122_ = v___y_5133_;
v___y_5123_ = v___y_5135_;
v___y_5124_ = v___y_5134_;
v___y_5125_ = v___y_5136_;
v___y_5126_ = v___y_5138_;
v___y_5127_ = v___y_5137_;
v___y_5128_ = v___x_5145_;
goto v___jp_5121_;
}
}
else
{
size_t v___x_5146_; size_t v___x_5147_; lean_object* v___x_5148_; 
v___x_5146_ = ((size_t)0ULL);
v___x_5147_ = lean_usize_of_nat(v___x_5140_);
v___x_5148_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_overrides_5090_, v___x_5146_, v___x_5147_, v___y_5139_);
v___y_5122_ = v___y_5133_;
v___y_5123_ = v___y_5135_;
v___y_5124_ = v___y_5134_;
v___y_5125_ = v___y_5136_;
v___y_5126_ = v___y_5138_;
v___y_5127_ = v___y_5137_;
v___y_5128_ = v___x_5148_;
goto v___jp_5121_;
}
}
}
v___jp_5149_:
{
lean_object* v_packages_5154_; lean_object* v___x_5155_; lean_object* v_wsIdx_5156_; lean_object* v_dir_5157_; lean_object* v_depConfigs_5158_; lean_object* v___x_5159_; 
v_packages_5154_ = lean_ctor_get(v_ws_5086_, 4);
v___x_5155_ = lean_array_fget_borrowed(v_packages_5154_, v___y_5150_);
v_wsIdx_5156_ = lean_ctor_get(v___x_5155_, 0);
v_dir_5157_ = lean_ctor_get(v___x_5155_, 4);
v_depConfigs_5158_ = lean_ctor_get(v___x_5155_, 12);
v___x_5159_ = l___private_Lake_Load_Resolve_0__Lake_validateManifest(v___y_5153_, v_depConfigs_5158_, v___y_5152_);
if (lean_obj_tag(v___x_5159_) == 0)
{
lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; 
lean_dec_ref_known(v___x_5159_, 1);
v___x_5160_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_dir_5157_);
v___x_5161_ = l_Lake_joinRelative(v_dir_5157_, v___x_5160_);
v___x_5162_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__2));
v___x_5163_ = l_Lake_joinRelative(v___x_5161_, v___x_5162_);
v___x_5164_ = l_Lake_Manifest_tryLoadEntries(v___x_5163_);
if (lean_obj_tag(v___x_5164_) == 0)
{
lean_object* v_a_5165_; lean_object* v___x_5166_; uint8_t v___x_5167_; 
v_a_5165_ = lean_ctor_get(v___x_5164_, 0);
lean_inc(v_a_5165_);
lean_dec_ref_known(v___x_5164_, 1);
v___x_5166_ = lean_array_get_size(v_a_5165_);
v___x_5167_ = lean_nat_dec_lt(v___y_5150_, v___x_5166_);
if (v___x_5167_ == 0)
{
lean_dec(v_a_5165_);
lean_inc_ref(v_depConfigs_5158_);
lean_inc(v_wsIdx_5156_);
lean_inc_ref(v_packages_5154_);
v___y_5133_ = v_packages_5154_;
v___y_5134_ = v_wsIdx_5156_;
v___y_5135_ = v___y_5150_;
v___y_5136_ = v___y_5151_;
v___y_5137_ = v___y_5152_;
v___y_5138_ = v_depConfigs_5158_;
v___y_5139_ = v___y_5153_;
goto v___jp_5132_;
}
else
{
uint8_t v___x_5168_; 
v___x_5168_ = lean_nat_dec_le(v___x_5166_, v___x_5166_);
if (v___x_5168_ == 0)
{
if (v___x_5167_ == 0)
{
lean_dec(v_a_5165_);
lean_inc_ref(v_depConfigs_5158_);
lean_inc(v_wsIdx_5156_);
lean_inc_ref(v_packages_5154_);
v___y_5133_ = v_packages_5154_;
v___y_5134_ = v_wsIdx_5156_;
v___y_5135_ = v___y_5150_;
v___y_5136_ = v___y_5151_;
v___y_5137_ = v___y_5152_;
v___y_5138_ = v_depConfigs_5158_;
v___y_5139_ = v___y_5153_;
goto v___jp_5132_;
}
else
{
size_t v___x_5169_; size_t v___x_5170_; lean_object* v___x_5171_; 
v___x_5169_ = ((size_t)0ULL);
v___x_5170_ = lean_usize_of_nat(v___x_5166_);
v___x_5171_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_a_5165_, v___x_5169_, v___x_5170_, v___y_5153_);
lean_dec(v_a_5165_);
lean_inc_ref(v_depConfigs_5158_);
lean_inc(v_wsIdx_5156_);
lean_inc_ref(v_packages_5154_);
v___y_5133_ = v_packages_5154_;
v___y_5134_ = v_wsIdx_5156_;
v___y_5135_ = v___y_5150_;
v___y_5136_ = v___y_5151_;
v___y_5137_ = v___y_5152_;
v___y_5138_ = v_depConfigs_5158_;
v___y_5139_ = v___x_5171_;
goto v___jp_5132_;
}
}
else
{
size_t v___x_5172_; size_t v___x_5173_; lean_object* v___x_5174_; 
v___x_5172_ = ((size_t)0ULL);
v___x_5173_ = lean_usize_of_nat(v___x_5166_);
v___x_5174_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_a_5165_, v___x_5172_, v___x_5173_, v___y_5153_);
lean_dec(v_a_5165_);
lean_inc_ref(v_depConfigs_5158_);
lean_inc(v_wsIdx_5156_);
lean_inc_ref(v_packages_5154_);
v___y_5133_ = v_packages_5154_;
v___y_5134_ = v_wsIdx_5156_;
v___y_5135_ = v___y_5150_;
v___y_5136_ = v___y_5151_;
v___y_5137_ = v___y_5152_;
v___y_5138_ = v_depConfigs_5158_;
v___y_5139_ = v___x_5174_;
goto v___jp_5132_;
}
}
}
else
{
lean_object* v_a_5175_; lean_object* v___x_5177_; uint8_t v_isShared_5178_; uint8_t v_isSharedCheck_5187_; 
lean_dec(v___y_5153_);
lean_dec_ref(v___y_5151_);
lean_dec_ref(v_leanOpts_5088_);
lean_dec_ref(v_ws_5086_);
v_a_5175_ = lean_ctor_get(v___x_5164_, 0);
v_isSharedCheck_5187_ = !lean_is_exclusive(v___x_5164_);
if (v_isSharedCheck_5187_ == 0)
{
v___x_5177_ = v___x_5164_;
v_isShared_5178_ = v_isSharedCheck_5187_;
goto v_resetjp_5176_;
}
else
{
lean_inc(v_a_5175_);
lean_dec(v___x_5164_);
v___x_5177_ = lean_box(0);
v_isShared_5178_ = v_isSharedCheck_5187_;
goto v_resetjp_5176_;
}
v_resetjp_5176_:
{
lean_object* v___x_5179_; uint8_t v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5185_; 
v___x_5179_ = lean_io_error_to_string(v_a_5175_);
v___x_5180_ = 3;
v___x_5181_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5181_, 0, v___x_5179_);
lean_ctor_set_uint8(v___x_5181_, sizeof(void*)*1, v___x_5180_);
lean_inc_ref(v___y_5152_);
v___x_5182_ = lean_apply_2(v___y_5152_, v___x_5181_, lean_box(0));
v___x_5183_ = lean_box(0);
if (v_isShared_5178_ == 0)
{
lean_ctor_set(v___x_5177_, 0, v___x_5183_);
v___x_5185_ = v___x_5177_;
goto v_reusejp_5184_;
}
else
{
lean_object* v_reuseFailAlloc_5186_; 
v_reuseFailAlloc_5186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5186_, 0, v___x_5183_);
v___x_5185_ = v_reuseFailAlloc_5186_;
goto v_reusejp_5184_;
}
v_reusejp_5184_:
{
return v___x_5185_;
}
}
}
}
else
{
lean_object* v_a_5188_; lean_object* v___x_5190_; uint8_t v_isShared_5191_; uint8_t v_isSharedCheck_5195_; 
lean_dec(v___y_5153_);
lean_dec_ref(v___y_5151_);
lean_dec_ref(v_leanOpts_5088_);
lean_dec_ref(v_ws_5086_);
v_a_5188_ = lean_ctor_get(v___x_5159_, 0);
v_isSharedCheck_5195_ = !lean_is_exclusive(v___x_5159_);
if (v_isSharedCheck_5195_ == 0)
{
v___x_5190_ = v___x_5159_;
v_isShared_5191_ = v_isSharedCheck_5195_;
goto v_resetjp_5189_;
}
else
{
lean_inc(v_a_5188_);
lean_dec(v___x_5159_);
v___x_5190_ = lean_box(0);
v_isShared_5191_ = v_isSharedCheck_5195_;
goto v_resetjp_5189_;
}
v_resetjp_5189_:
{
lean_object* v___x_5193_; 
if (v_isShared_5191_ == 0)
{
v___x_5193_ = v___x_5190_;
goto v_reusejp_5192_;
}
else
{
lean_object* v_reuseFailAlloc_5194_; 
v_reuseFailAlloc_5194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5194_, 0, v_a_5188_);
v___x_5193_ = v_reuseFailAlloc_5194_;
goto v_reusejp_5192_;
}
v_reusejp_5192_:
{
return v___x_5193_;
}
}
}
}
v___jp_5198_:
{
lean_object* v_pkgEntries_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; uint8_t v___x_5204_; 
v_pkgEntries_5201_ = lean_box(1);
v___x_5202_ = lean_unsigned_to_nat(0u);
v___x_5203_ = lean_array_get_size(v_packages_5197_);
v___x_5204_ = lean_nat_dec_lt(v___x_5202_, v___x_5203_);
if (v___x_5204_ == 0)
{
lean_dec_ref(v_packages_5197_);
v___y_5150_ = v___x_5202_;
v___y_5151_ = v___y_5200_;
v___y_5152_ = v___y_5199_;
v___y_5153_ = v_pkgEntries_5201_;
goto v___jp_5149_;
}
else
{
uint8_t v___x_5205_; 
v___x_5205_ = lean_nat_dec_le(v___x_5203_, v___x_5203_);
if (v___x_5205_ == 0)
{
if (v___x_5204_ == 0)
{
lean_dec_ref(v_packages_5197_);
v___y_5150_ = v___x_5202_;
v___y_5151_ = v___y_5200_;
v___y_5152_ = v___y_5199_;
v___y_5153_ = v_pkgEntries_5201_;
goto v___jp_5149_;
}
else
{
size_t v___x_5206_; size_t v___x_5207_; lean_object* v___x_5208_; 
v___x_5206_ = ((size_t)0ULL);
v___x_5207_ = lean_usize_of_nat(v___x_5203_);
v___x_5208_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_packages_5197_, v___x_5206_, v___x_5207_, v_pkgEntries_5201_);
lean_dec_ref(v_packages_5197_);
v___y_5150_ = v___x_5202_;
v___y_5151_ = v___y_5200_;
v___y_5152_ = v___y_5199_;
v___y_5153_ = v___x_5208_;
goto v___jp_5149_;
}
}
else
{
size_t v___x_5209_; size_t v___x_5210_; lean_object* v___x_5211_; 
v___x_5209_ = ((size_t)0ULL);
v___x_5210_ = lean_usize_of_nat(v___x_5203_);
v___x_5211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_packages_5197_, v___x_5209_, v___x_5210_, v_pkgEntries_5201_);
lean_dec_ref(v_packages_5197_);
v___y_5150_ = v___x_5202_;
v___y_5151_ = v___y_5200_;
v___y_5152_ = v___y_5199_;
v___y_5153_ = v___x_5211_;
goto v___jp_5149_;
}
}
}
v___jp_5212_:
{
if (lean_obj_tag(v_packagesDir_x3f_5196_) == 0)
{
lean_object* v_packages_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v_config_5217_; lean_object* v_toWorkspaceConfig_5218_; lean_object* v___x_5219_; 
v_packages_5214_ = lean_ctor_get(v_ws_5086_, 4);
v___x_5215_ = lean_unsigned_to_nat(0u);
v___x_5216_ = lean_array_fget_borrowed(v_packages_5214_, v___x_5215_);
v_config_5217_ = lean_ctor_get(v___x_5216_, 6);
v_toWorkspaceConfig_5218_ = lean_ctor_get(v_config_5217_, 0);
lean_inc_ref(v_toWorkspaceConfig_5218_);
v___x_5219_ = l_System_FilePath_normalize(v_toWorkspaceConfig_5218_);
v___y_5199_ = v___y_5213_;
v___y_5200_ = v___x_5219_;
goto v___jp_5198_;
}
else
{
lean_object* v_val_5220_; 
v_val_5220_ = lean_ctor_get(v_packagesDir_x3f_5196_, 0);
lean_inc(v_val_5220_);
lean_dec_ref_known(v_packagesDir_x3f_5196_, 1);
v___y_5199_ = v___y_5213_;
v___y_5200_ = v_val_5220_;
goto v___jp_5198_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps___boxed(lean_object* v_ws_5234_, lean_object* v_manifest_5235_, lean_object* v_leanOpts_5236_, lean_object* v_reconfigure_5237_, lean_object* v_overrides_5238_, lean_object* v_a_5239_, lean_object* v___y_5240_){
_start:
{
uint8_t v_reconfigure_boxed_5241_; lean_object* v_res_5242_; 
v_reconfigure_boxed_5241_ = lean_unbox(v_reconfigure_5237_);
v_res_5242_ = l_Lake_Workspace_materializeDeps(v_ws_5234_, v_manifest_5235_, v_leanOpts_5236_, v_reconfigure_boxed_5241_, v_overrides_5238_, v_a_5239_);
lean_dec_ref(v_a_5239_);
lean_dec_ref(v_overrides_5238_);
return v_res_5242_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v_leanOpts_5245_, uint8_t v_reconfigure_5246_, lean_object* v_ws_5247_, lean_object* v_i_5248_, lean_object* v_i__lt_5249_, lean_object* v_next_5250_, lean_object* v_lt__next_5251_, lean_object* v___y_5252_){
_start:
{
lean_object* v___x_5254_; 
v___x_5254_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_5243_, v___y_5244_, v_leanOpts_5245_, v_reconfigure_5246_, v_ws_5247_, v_i_5248_, v_next_5250_, v___y_5252_);
return v___x_5254_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___boxed(lean_object* v___y_5255_, lean_object* v___y_5256_, lean_object* v_leanOpts_5257_, lean_object* v_reconfigure_5258_, lean_object* v_ws_5259_, lean_object* v_i_5260_, lean_object* v_i__lt_5261_, lean_object* v_next_5262_, lean_object* v_lt__next_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_){
_start:
{
uint8_t v_reconfigure_boxed_5266_; lean_object* v_res_5267_; 
v_reconfigure_boxed_5266_ = lean_unbox(v_reconfigure_5258_);
v_res_5267_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(v___y_5255_, v___y_5256_, v_leanOpts_5257_, v_reconfigure_boxed_5266_, v_ws_5259_, v_i_5260_, v_i__lt_5261_, v_next_5262_, v_lt__next_5263_, v___y_5264_);
lean_dec_ref(v___y_5264_);
lean_dec(v___y_5255_);
return v_res_5267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(lean_object* v_start_5268_, lean_object* v_pkg_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_, lean_object* v_leanOpts_5272_, uint8_t v_reconfigure_5273_, lean_object* v_as_5274_, size_t v_i_5275_, size_t v_stop_5276_, lean_object* v_b_5277_, lean_object* v___y_5278_){
_start:
{
lean_object* v___x_5280_; 
v___x_5280_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5269_, v___y_5270_, v___y_5271_, v_leanOpts_5272_, v_reconfigure_5273_, v_as_5274_, v_i_5275_, v_stop_5276_, v_b_5277_, v___y_5278_);
return v___x_5280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___boxed(lean_object* v_start_5281_, lean_object* v_pkg_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v_leanOpts_5285_, lean_object* v_reconfigure_5286_, lean_object* v_as_5287_, lean_object* v_i_5288_, lean_object* v_stop_5289_, lean_object* v_b_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_){
_start:
{
uint8_t v_reconfigure_boxed_5293_; size_t v_i_boxed_5294_; size_t v_stop_boxed_5295_; lean_object* v_res_5296_; 
v_reconfigure_boxed_5293_ = lean_unbox(v_reconfigure_5286_);
v_i_boxed_5294_ = lean_unbox_usize(v_i_5288_);
lean_dec(v_i_5288_);
v_stop_boxed_5295_ = lean_unbox_usize(v_stop_5289_);
lean_dec(v_stop_5289_);
v_res_5296_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(v_start_5281_, v_pkg_5282_, v___y_5283_, v___y_5284_, v_leanOpts_5285_, v_reconfigure_boxed_5293_, v_as_5287_, v_i_boxed_5294_, v_stop_boxed_5295_, v_b_5290_, v___y_5291_);
lean_dec_ref(v___y_5291_);
lean_dec_ref(v_as_5287_);
lean_dec(v___y_5283_);
lean_dec(v_start_5281_);
return v_res_5296_;
}
}
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_StoreInsts(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Materialize(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Lean_Eval(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Package(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_TacticsExtra(uint8_t builtin);
lean_object* runtime_initialize_Lean_Runtime(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Materialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Lean_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lake_Load_Resolve_0__Lake_restartCode = _init_l___private_Lake_Load_Resolve_0__Lake_restartCode();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Util_StoreInsts(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Load_Materialize(uint8_t builtin);
lean_object* initialize_Lake_Load_Lean_Eval(uint8_t builtin);
lean_object* initialize_Lake_Load_Package(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Lemmas(uint8_t builtin);
lean_object* initialize_Init_TacticsExtra(uint8_t builtin);
lean_object* initialize_Lean_Runtime(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Materialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Lean_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Resolve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Load_Resolve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Load_Resolve(builtin);
}
#ifdef __cplusplus
}
#endif
