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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lake_Manifest_save(lean_object*, lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* lean_io_rename(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
uint8_t l_Lean_NameSet_isEmpty(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lake_toolchainFileName;
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_ToolchainVer_ofFile_x3f(lean_object*);
uint8_t l_Lake_MaterializedDep_fixedToolchain(lean_object*);
uint8_t l_Lake_ToolchainVer_blt(lean_object*, lean_object*);
uint8_t l_Lake_ToolchainVer_ble(lean_object*, lean_object*);
uint8_t l_Lake_instDecidableEqToolchainVer_decEq(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Env_noToolchainVars(lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
lean_object* lean_io_exit(uint8_t);
lean_object* l_Array_reverse___redArg(lean_object*);
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
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__4___redArg(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
v___x_276_ = lean_nat_add(v___y_273_, v___y_275_);
lean_dec(v___y_275_);
lean_dec(v___y_273_);
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
lean_ctor_set(v___x_256_, 3, v___y_274_);
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
lean_ctor_set(v_reuseFailAlloc_281_, 3, v___y_274_);
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
v___y_273_ = v___x_288_;
v___y_274_ = v___x_287_;
v___y_275_ = v_size_289_;
goto v___jp_272_;
}
else
{
lean_object* v___x_290_; 
v___x_290_ = lean_unsigned_to_nat(0u);
v___y_273_ = v___x_288_;
v___y_274_ = v___x_287_;
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
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(lean_object* v_ws_377_, lean_object* v_dep_378_, lean_object* v_lakeOpts_379_, lean_object* v_leanOpts_380_, uint8_t v_reconfigure_381_, lean_object* v___y_382_){
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
v___x_415_ = l_Lake_resolveConfigFile(v___x_414_, v___x_413_, v___y_382_);
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
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27___boxed(lean_object* v_ws_458_, lean_object* v_dep_459_, lean_object* v_lakeOpts_460_, lean_object* v_leanOpts_461_, lean_object* v_reconfigure_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
uint8_t v_reconfigure_boxed_465_; lean_object* v_res_466_; 
v_reconfigure_boxed_465_ = lean_unbox(v_reconfigure_462_);
v_res_466_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_458_, v_dep_459_, v_lakeOpts_460_, v_leanOpts_461_, v_reconfigure_boxed_465_, v___y_463_);
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
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(lean_object* v_s_729_, lean_object* v_dep_730_, lean_object* v_lakeOpts_731_, lean_object* v_leanOpts_732_, uint8_t v_reconfigure_733_, lean_object* v___y_734_){
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
v___x_743_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_736_, v_dep_730_, v_lakeOpts_731_, v_leanOpts_732_, v_reconfigure_733_, v___y_734_);
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
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg___boxed(lean_object* v_s_767_, lean_object* v_dep_768_, lean_object* v_lakeOpts_769_, lean_object* v_leanOpts_770_, lean_object* v_reconfigure_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
uint8_t v_reconfigure_boxed_774_; lean_object* v_res_775_; 
v_reconfigure_boxed_774_ = lean_unbox(v_reconfigure_771_);
v_res_775_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(v_s_767_, v_dep_768_, v_lakeOpts_769_, v_leanOpts_770_, v_reconfigure_boxed_774_, v___y_772_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(lean_object* v_n_776_, lean_object* v_s_777_, lean_object* v_dep_778_, lean_object* v_lakeOpts_779_, lean_object* v_leanOpts_780_, uint8_t v_reconfigure_781_, lean_object* v___y_782_){
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
v___x_791_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_784_, v_dep_778_, v_lakeOpts_779_, v_leanOpts_780_, v_reconfigure_781_, v___y_782_);
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
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed(lean_object* v_n_815_, lean_object* v_s_816_, lean_object* v_dep_817_, lean_object* v_lakeOpts_818_, lean_object* v_leanOpts_819_, lean_object* v_reconfigure_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
uint8_t v_reconfigure_boxed_823_; lean_object* v_res_824_; 
v_reconfigure_boxed_823_ = lean_unbox(v_reconfigure_820_);
v_res_824_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(v_n_815_, v_s_816_, v_dep_817_, v_lakeOpts_818_, v_leanOpts_819_, v_reconfigure_boxed_823_, v___y_821_);
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
v___x_1499_ = l_System_FilePath_normalize(v___y_1495_);
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
lean_dec_ref(v___y_1493_);
v___y_1419_ = v_snd_1497_;
goto v___jp_1418_;
}
else
{
lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1503_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1));
v___x_1504_ = lean_string_append(v___x_1503_, v___y_1493_);
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
lean_inc_ref(v___y_1494_);
v___x_1513_ = lean_apply_2(v___y_1494_, v___x_1512_, lean_box(0));
v___x_1514_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___x_1507_);
v___x_1515_ = l_Lake_createParentDirs(v___x_1507_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v___x_1516_; 
lean_dec_ref_known(v___x_1515_, 1);
v___x_1516_ = lean_io_rename(v___y_1493_, v___x_1507_);
lean_dec_ref(v___x_1507_);
lean_dec_ref(v___y_1493_);
v___y_1467_ = v___y_1494_;
v___y_1468_ = v___x_1514_;
v___y_1469_ = v_snd_1497_;
v___y_1470_ = v___x_1516_;
goto v___jp_1466_;
}
else
{
lean_dec_ref(v___x_1507_);
lean_dec_ref(v___y_1493_);
v___y_1467_ = v___y_1494_;
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
lean_dec_ref(v___y_1493_);
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
v___y_1493_ = v___x_1522_;
v___y_1494_ = v___y_1520_;
v___y_1495_ = v_val_1521_;
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
v___y_1493_ = v___x_1522_;
v___y_1494_ = v___y_1520_;
v___y_1495_ = v_val_1521_;
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
v___x_1831_ = lean_nat_dec_lt(v___y_1828_, v___x_1830_);
if (v___x_1831_ == 0)
{
v___y_1767_ = v___y_1827_;
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
v___y_1767_ = v___y_1827_;
v_fst_1768_ = v_val_1829_;
v_snd_1769_ = v___y_1759_;
goto v___jp_1766_;
}
else
{
lean_object* v_a_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1843_; 
lean_dec_ref(v_val_1829_);
lean_dec_ref(v___y_1827_);
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
v___y_1827_ = v___y_1845_;
v___y_1828_ = v___x_1846_;
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
v___y_1827_ = v___y_1845_;
v___y_1828_ = v___x_1846_;
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
v___x_2044_ = lean_string_append(v___y_2041_, v___y_2043_);
lean_dec_ref(v___y_2043_);
v___x_2045_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2046_ = lean_string_append(v___x_2044_, v___x_2045_);
lean_inc(v_src_2035_);
v___x_2047_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_src_2035_, v___x_2039_);
v___x_2048_ = lean_string_append(v___x_2046_, v___x_2047_);
lean_dec_ref(v___x_2047_);
v___x_2049_ = lean_string_append(v___x_2048_, v___y_2042_);
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
v___y_2041_ = v___x_2056_;
v___y_2042_ = v___y_2054_;
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
v___x_2084_ = lean_string_append(v___y_2082_, v___y_2083_);
lean_dec_ref(v___y_2083_);
v___x_2085_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2086_ = lean_string_append(v___x_2084_, v___x_2085_);
lean_inc(v_src_2075_);
v___x_2087_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_src_2075_, v___x_2079_);
v___x_2088_ = lean_string_append(v___x_2086_, v___x_2087_);
lean_dec_ref(v___x_2087_);
v___x_2089_ = lean_string_append(v___x_2088_, v___y_2081_);
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
v___y_2081_ = v___y_2094_;
v___y_2082_ = v___x_2096_;
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
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(lean_object* v_ws_2254_, lean_object* v_rootDeps_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v___y_2259_; lean_object* v___y_2265_; uint8_t v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2273_; lean_object* v___y_2274_; uint8_t v___y_2275_; lean_object* v___y_2276_; lean_object* v___y_2277_; lean_object* v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2287_; lean_object* v___y_2288_; lean_object* v___y_2289_; uint8_t v___y_2290_; lean_object* v___y_2291_; lean_object* v___y_2292_; lean_object* v_lakeEnv_2295_; lean_object* v_lakeArgs_x3f_2296_; lean_object* v_packages_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v_baseName_2300_; lean_object* v_dir_2301_; lean_object* v_config_2302_; lean_object* v___x_2303_; lean_object* v_rootToolchainFile_2304_; uint8_t v___y_2306_; uint8_t v___y_2307_; lean_object* v___y_2308_; lean_object* v___y_2309_; lean_object* v___y_2450_; uint8_t v___y_2451_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
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
v___x_2511_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_2301_, v_rootDeps_2255_, v___x_2509_, v___x_2510_, v___x_2507_, v___y_2256_);
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
v___x_2514_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_2301_, v_rootDeps_2255_, v___x_2512_, v___x_2513_, v___x_2507_, v___y_2256_);
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
lean_inc_ref(v___y_2256_);
v___x_2473_ = lean_apply_2(v___y_2256_, v___x_2472_, lean_box(0));
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
lean_inc_ref(v___y_2256_);
v___x_2479_ = lean_apply_2(v___y_2256_, v___x_2478_, lean_box(0));
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
v___y_2287_ = v___x_2466_;
v___y_2288_ = v_val_2483_;
v___y_2289_ = v_src_2462_;
v___y_2290_ = v___x_2467_;
v___y_2291_ = v_clashes_2464_;
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
v___y_2287_ = v___x_2466_;
v___y_2288_ = v_val_2485_;
v___y_2289_ = v_src_2462_;
v___y_2290_ = v___x_2467_;
v___y_2291_ = v_clashes_2464_;
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
v___y_2265_ = v___x_2466_;
v___y_2266_ = v___x_2467_;
v___y_2267_ = v_clashes_2464_;
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
lean_inc_ref(v___y_2256_);
v___x_2523_ = lean_apply_2(v___y_2256_, v___x_2522_, lean_box(0));
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
lean_inc_ref(v___y_2256_);
v___x_2262_ = lean_apply_2(v___y_2256_, v___x_2261_, lean_box(0));
v___x_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2262_);
return v___x_2263_;
}
v___jp_2264_:
{
if (v___y_2266_ == 0)
{
lean_dec_ref(v___y_2267_);
lean_dec(v___y_2265_);
v___y_2259_ = v___y_2268_;
goto v___jp_2258_;
}
else
{
size_t v___x_2269_; size_t v___x_2270_; lean_object* v___x_2271_; 
v___x_2269_ = ((size_t)0ULL);
v___x_2270_ = lean_usize_of_nat(v___y_2265_);
v___x_2271_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_2265_, v___y_2267_, v___x_2269_, v___x_2270_, v___y_2268_);
lean_dec_ref(v___y_2267_);
lean_dec(v___y_2265_);
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
v___x_2283_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_2276_, v___y_2275_);
v___x_2284_ = lean_string_append(v___x_2282_, v___x_2283_);
lean_dec_ref(v___x_2283_);
v___x_2285_ = lean_string_append(v___x_2284_, v___y_2278_);
v___y_2265_ = v___y_2273_;
v___y_2266_ = v___y_2275_;
v___y_2267_ = v___y_2277_;
v___y_2268_ = v___x_2285_;
goto v___jp_2264_;
}
v___jp_2286_:
{
lean_object* v___x_2293_; lean_object* v_toString_2294_; 
v___x_2293_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0));
v_toString_2294_ = lean_ctor_get(v___y_2288_, 0);
lean_inc_ref(v_toString_2294_);
lean_dec_ref(v___y_2288_);
v___y_2273_ = v___y_2287_;
v___y_2274_ = v___x_2293_;
v___y_2275_ = v___y_2290_;
v___y_2276_ = v___y_2289_;
v___y_2277_ = v___y_2291_;
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
lean_inc_ref(v___y_2256_);
v___x_2315_ = lean_apply_2(v___y_2256_, v___x_2314_, lean_box(0));
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
lean_inc_ref(v___y_2256_);
v___x_2321_ = lean_apply_2(v___y_2256_, v___x_2320_, lean_box(0));
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
lean_ctor_set_uint8(v___x_2331_, sizeof(void*)*5, v___y_2306_);
lean_ctor_set_uint8(v___x_2331_, sizeof(void*)*5 + 1, v___y_2307_);
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
lean_inc_ref(v___y_2256_);
v___x_2354_ = lean_apply_2(v___y_2256_, v___x_2353_, lean_box(0));
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
lean_inc_ref(v___y_2256_);
v___x_2367_ = lean_apply_2(v___y_2256_, v___x_2366_, lean_box(0));
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
lean_inc_ref(v___y_2256_);
v___x_2380_ = lean_apply_2(v___y_2256_, v___x_2379_, lean_box(0));
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
lean_inc_ref(v___y_2256_);
v___x_2387_ = lean_apply_2(v___y_2256_, v___x_2386_, lean_box(0));
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
lean_inc_ref(v___y_2256_);
v___x_2405_ = lean_apply_2(v___y_2256_, v___x_2404_, lean_box(0));
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
lean_inc_ref(v___y_2256_);
v___x_2412_ = lean_apply_2(v___y_2256_, v___x_2411_, lean_box(0));
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
lean_inc_ref(v___y_2256_);
v___x_2430_ = lean_apply_2(v___y_2256_, v___x_2429_, lean_box(0));
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
lean_inc_ref(v___y_2256_);
v___x_2443_ = lean_apply_2(v___y_2256_, v___x_2442_, lean_box(0));
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
v___y_2306_ = v___x_2452_;
v___y_2307_ = v___y_2451_;
v___y_2308_ = v___x_2453_;
v___y_2309_ = v_toString_2454_;
goto v___jp_2305_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___boxed(lean_object* v_ws_2529_, lean_object* v_rootDeps_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(v_ws_2529_, v_rootDeps_2530_, v___y_2531_);
lean_dec_ref(v___y_2531_);
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
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__4___redArg(lean_object* v_msg_2577_){
_start:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2578_ = lean_box(1);
v___x_2579_ = lean_panic_fn_borrowed(v___x_2578_, v_msg_2577_);
return v___x_2579_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; 
v___x_2583_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__2));
v___x_2584_ = lean_unsigned_to_nat(35u);
v___x_2585_ = lean_unsigned_to_nat(182u);
v___x_2586_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__1));
v___x_2587_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0));
v___x_2588_ = l_mkPanicMessageWithDecl(v___x_2587_, v___x_2586_, v___x_2585_, v___x_2584_, v___x_2583_);
return v___x_2588_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2589_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__2));
v___x_2590_ = lean_unsigned_to_nat(21u);
v___x_2591_ = lean_unsigned_to_nat(183u);
v___x_2592_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__1));
v___x_2593_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0));
v___x_2594_ = l_mkPanicMessageWithDecl(v___x_2593_, v___x_2592_, v___x_2591_, v___x_2590_, v___x_2589_);
return v___x_2594_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__7(void){
_start:
{
lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v___x_2597_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__6));
v___x_2598_ = lean_unsigned_to_nat(35u);
v___x_2599_ = lean_unsigned_to_nat(276u);
v___x_2600_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__5));
v___x_2601_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0));
v___x_2602_ = l_mkPanicMessageWithDecl(v___x_2601_, v___x_2600_, v___x_2599_, v___x_2598_, v___x_2597_);
return v___x_2602_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__8(void){
_start:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2603_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__6));
v___x_2604_ = lean_unsigned_to_nat(21u);
v___x_2605_ = lean_unsigned_to_nat(277u);
v___x_2606_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__5));
v___x_2607_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__0));
v___x_2608_ = l_mkPanicMessageWithDecl(v___x_2607_, v___x_2606_, v___x_2605_, v___x_2604_, v___x_2603_);
return v___x_2608_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(lean_object* v_k_2609_, lean_object* v_v_2610_, lean_object* v_t_2611_){
_start:
{
if (lean_obj_tag(v_t_2611_) == 0)
{
lean_object* v_size_2612_; lean_object* v_k_2613_; lean_object* v_v_2614_; lean_object* v_l_2615_; lean_object* v_r_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2972_; 
v_size_2612_ = lean_ctor_get(v_t_2611_, 0);
v_k_2613_ = lean_ctor_get(v_t_2611_, 1);
v_v_2614_ = lean_ctor_get(v_t_2611_, 2);
v_l_2615_ = lean_ctor_get(v_t_2611_, 3);
v_r_2616_ = lean_ctor_get(v_t_2611_, 4);
v_isSharedCheck_2972_ = !lean_is_exclusive(v_t_2611_);
if (v_isSharedCheck_2972_ == 0)
{
v___x_2618_ = v_t_2611_;
v_isShared_2619_ = v_isSharedCheck_2972_;
goto v_resetjp_2617_;
}
else
{
lean_inc(v_r_2616_);
lean_inc(v_l_2615_);
lean_inc(v_v_2614_);
lean_inc(v_k_2613_);
lean_inc(v_size_2612_);
lean_dec(v_t_2611_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2972_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
uint8_t v___x_2620_; 
v___x_2620_ = lean_string_compare(v_k_2609_, v_k_2613_);
switch(v___x_2620_)
{
case 0:
{
lean_object* v___x_2621_; 
lean_dec(v_size_2612_);
v___x_2621_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(v_k_2609_, v_v_2610_, v_l_2615_);
if (lean_obj_tag(v_r_2616_) == 0)
{
if (lean_obj_tag(v___x_2621_) == 0)
{
lean_object* v_size_2622_; lean_object* v_size_2623_; lean_object* v_k_2624_; lean_object* v_v_2625_; lean_object* v_l_2626_; lean_object* v_r_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; uint8_t v___x_2630_; 
v_size_2622_ = lean_ctor_get(v_r_2616_, 0);
v_size_2623_ = lean_ctor_get(v___x_2621_, 0);
lean_inc(v_size_2623_);
v_k_2624_ = lean_ctor_get(v___x_2621_, 1);
lean_inc(v_k_2624_);
v_v_2625_ = lean_ctor_get(v___x_2621_, 2);
lean_inc(v_v_2625_);
v_l_2626_ = lean_ctor_get(v___x_2621_, 3);
lean_inc(v_l_2626_);
v_r_2627_ = lean_ctor_get(v___x_2621_, 4);
lean_inc(v_r_2627_);
v___x_2628_ = lean_unsigned_to_nat(3u);
v___x_2629_ = lean_nat_mul(v___x_2628_, v_size_2622_);
v___x_2630_ = lean_nat_dec_lt(v___x_2629_, v_size_2623_);
lean_dec(v___x_2629_);
if (v___x_2630_ == 0)
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2635_; 
lean_dec(v_r_2627_);
lean_dec(v_l_2626_);
lean_dec(v_v_2625_);
lean_dec(v_k_2624_);
v___x_2631_ = lean_unsigned_to_nat(1u);
v___x_2632_ = lean_nat_add(v___x_2631_, v_size_2623_);
lean_dec(v_size_2623_);
v___x_2633_ = lean_nat_add(v___x_2632_, v_size_2622_);
lean_dec(v___x_2632_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 3, v___x_2621_);
lean_ctor_set(v___x_2618_, 0, v___x_2633_);
v___x_2635_ = v___x_2618_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v___x_2633_);
lean_ctor_set(v_reuseFailAlloc_2636_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2636_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2636_, 3, v___x_2621_);
lean_ctor_set(v_reuseFailAlloc_2636_, 4, v_r_2616_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
else
{
lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2708_; 
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2621_);
if (v_isSharedCheck_2708_ == 0)
{
lean_object* v_unused_2709_; lean_object* v_unused_2710_; lean_object* v_unused_2711_; lean_object* v_unused_2712_; lean_object* v_unused_2713_; 
v_unused_2709_ = lean_ctor_get(v___x_2621_, 4);
lean_dec(v_unused_2709_);
v_unused_2710_ = lean_ctor_get(v___x_2621_, 3);
lean_dec(v_unused_2710_);
v_unused_2711_ = lean_ctor_get(v___x_2621_, 2);
lean_dec(v_unused_2711_);
v_unused_2712_ = lean_ctor_get(v___x_2621_, 1);
lean_dec(v_unused_2712_);
v_unused_2713_ = lean_ctor_get(v___x_2621_, 0);
lean_dec(v_unused_2713_);
v___x_2638_ = v___x_2621_;
v_isShared_2639_ = v_isSharedCheck_2708_;
goto v_resetjp_2637_;
}
else
{
lean_dec(v___x_2621_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2708_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
if (lean_obj_tag(v_l_2626_) == 0)
{
if (lean_obj_tag(v_r_2627_) == 0)
{
lean_object* v_size_2640_; lean_object* v_size_2641_; lean_object* v_k_2642_; lean_object* v_v_2643_; lean_object* v_l_2644_; lean_object* v_r_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; uint8_t v___x_2648_; 
v_size_2640_ = lean_ctor_get(v_l_2626_, 0);
v_size_2641_ = lean_ctor_get(v_r_2627_, 0);
v_k_2642_ = lean_ctor_get(v_r_2627_, 1);
v_v_2643_ = lean_ctor_get(v_r_2627_, 2);
v_l_2644_ = lean_ctor_get(v_r_2627_, 3);
v_r_2645_ = lean_ctor_get(v_r_2627_, 4);
v___x_2646_ = lean_unsigned_to_nat(2u);
v___x_2647_ = lean_nat_mul(v___x_2646_, v_size_2640_);
v___x_2648_ = lean_nat_dec_lt(v_size_2641_, v___x_2647_);
lean_dec(v___x_2647_);
if (v___x_2648_ == 0)
{
lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2678_; 
lean_inc(v_r_2645_);
lean_inc(v_l_2644_);
lean_inc(v_v_2643_);
lean_inc(v_k_2642_);
v_isSharedCheck_2678_ = !lean_is_exclusive(v_r_2627_);
if (v_isSharedCheck_2678_ == 0)
{
lean_object* v_unused_2679_; lean_object* v_unused_2680_; lean_object* v_unused_2681_; lean_object* v_unused_2682_; lean_object* v_unused_2683_; 
v_unused_2679_ = lean_ctor_get(v_r_2627_, 4);
lean_dec(v_unused_2679_);
v_unused_2680_ = lean_ctor_get(v_r_2627_, 3);
lean_dec(v_unused_2680_);
v_unused_2681_ = lean_ctor_get(v_r_2627_, 2);
lean_dec(v_unused_2681_);
v_unused_2682_ = lean_ctor_get(v_r_2627_, 1);
lean_dec(v_unused_2682_);
v_unused_2683_ = lean_ctor_get(v_r_2627_, 0);
lean_dec(v_unused_2683_);
v___x_2650_ = v_r_2627_;
v_isShared_2651_ = v_isSharedCheck_2678_;
goto v_resetjp_2649_;
}
else
{
lean_dec(v_r_2627_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2678_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; lean_object* v___x_2666_; lean_object* v___y_2668_; 
v___x_2652_ = lean_unsigned_to_nat(1u);
v___x_2653_ = lean_nat_add(v___x_2652_, v_size_2623_);
lean_dec(v_size_2623_);
v___x_2654_ = lean_nat_add(v___x_2653_, v_size_2622_);
lean_dec(v___x_2653_);
v___x_2666_ = lean_nat_add(v___x_2652_, v_size_2640_);
if (lean_obj_tag(v_l_2644_) == 0)
{
lean_object* v_size_2676_; 
v_size_2676_ = lean_ctor_get(v_l_2644_, 0);
lean_inc(v_size_2676_);
v___y_2668_ = v_size_2676_;
goto v___jp_2667_;
}
else
{
lean_object* v___x_2677_; 
v___x_2677_ = lean_unsigned_to_nat(0u);
v___y_2668_ = v___x_2677_;
goto v___jp_2667_;
}
v___jp_2655_:
{
lean_object* v___x_2659_; lean_object* v___x_2661_; 
v___x_2659_ = lean_nat_add(v___y_2657_, v___y_2658_);
lean_dec(v___y_2658_);
lean_dec(v___y_2657_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set(v___x_2650_, 4, v_r_2616_);
lean_ctor_set(v___x_2650_, 3, v_r_2645_);
lean_ctor_set(v___x_2650_, 2, v_v_2614_);
lean_ctor_set(v___x_2650_, 1, v_k_2613_);
lean_ctor_set(v___x_2650_, 0, v___x_2659_);
v___x_2661_ = v___x_2650_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v___x_2659_);
lean_ctor_set(v_reuseFailAlloc_2665_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2665_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2665_, 3, v_r_2645_);
lean_ctor_set(v_reuseFailAlloc_2665_, 4, v_r_2616_);
v___x_2661_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
lean_object* v___x_2663_; 
if (v_isShared_2639_ == 0)
{
lean_ctor_set(v___x_2638_, 4, v___x_2661_);
lean_ctor_set(v___x_2638_, 3, v___y_2656_);
lean_ctor_set(v___x_2638_, 2, v_v_2643_);
lean_ctor_set(v___x_2638_, 1, v_k_2642_);
lean_ctor_set(v___x_2638_, 0, v___x_2654_);
v___x_2663_ = v___x_2638_;
goto v_reusejp_2662_;
}
else
{
lean_object* v_reuseFailAlloc_2664_; 
v_reuseFailAlloc_2664_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2664_, 0, v___x_2654_);
lean_ctor_set(v_reuseFailAlloc_2664_, 1, v_k_2642_);
lean_ctor_set(v_reuseFailAlloc_2664_, 2, v_v_2643_);
lean_ctor_set(v_reuseFailAlloc_2664_, 3, v___y_2656_);
lean_ctor_set(v_reuseFailAlloc_2664_, 4, v___x_2661_);
v___x_2663_ = v_reuseFailAlloc_2664_;
goto v_reusejp_2662_;
}
v_reusejp_2662_:
{
return v___x_2663_;
}
}
}
v___jp_2667_:
{
lean_object* v___x_2669_; lean_object* v___x_2671_; 
v___x_2669_ = lean_nat_add(v___x_2666_, v___y_2668_);
lean_dec(v___y_2668_);
lean_dec(v___x_2666_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v_l_2644_);
lean_ctor_set(v___x_2618_, 3, v_l_2626_);
lean_ctor_set(v___x_2618_, 2, v_v_2625_);
lean_ctor_set(v___x_2618_, 1, v_k_2624_);
lean_ctor_set(v___x_2618_, 0, v___x_2669_);
v___x_2671_ = v___x_2618_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v___x_2669_);
lean_ctor_set(v_reuseFailAlloc_2675_, 1, v_k_2624_);
lean_ctor_set(v_reuseFailAlloc_2675_, 2, v_v_2625_);
lean_ctor_set(v_reuseFailAlloc_2675_, 3, v_l_2626_);
lean_ctor_set(v_reuseFailAlloc_2675_, 4, v_l_2644_);
v___x_2671_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_nat_add(v___x_2652_, v_size_2622_);
if (lean_obj_tag(v_r_2645_) == 0)
{
lean_object* v_size_2673_; 
v_size_2673_ = lean_ctor_get(v_r_2645_, 0);
lean_inc(v_size_2673_);
v___y_2656_ = v___x_2671_;
v___y_2657_ = v___x_2672_;
v___y_2658_ = v_size_2673_;
goto v___jp_2655_;
}
else
{
lean_object* v___x_2674_; 
v___x_2674_ = lean_unsigned_to_nat(0u);
v___y_2656_ = v___x_2671_;
v___y_2657_ = v___x_2672_;
v___y_2658_ = v___x_2674_;
goto v___jp_2655_;
}
}
}
}
}
else
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2690_; 
lean_del_object(v___x_2618_);
v___x_2684_ = lean_unsigned_to_nat(1u);
v___x_2685_ = lean_nat_add(v___x_2684_, v_size_2623_);
lean_dec(v_size_2623_);
v___x_2686_ = lean_nat_add(v___x_2685_, v_size_2622_);
lean_dec(v___x_2685_);
v___x_2687_ = lean_nat_add(v___x_2684_, v_size_2622_);
v___x_2688_ = lean_nat_add(v___x_2687_, v_size_2641_);
lean_dec(v___x_2687_);
lean_inc_ref(v_r_2616_);
if (v_isShared_2639_ == 0)
{
lean_ctor_set(v___x_2638_, 4, v_r_2616_);
lean_ctor_set(v___x_2638_, 3, v_r_2627_);
lean_ctor_set(v___x_2638_, 2, v_v_2614_);
lean_ctor_set(v___x_2638_, 1, v_k_2613_);
lean_ctor_set(v___x_2638_, 0, v___x_2688_);
v___x_2690_ = v___x_2638_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v___x_2688_);
lean_ctor_set(v_reuseFailAlloc_2703_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2703_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2703_, 3, v_r_2627_);
lean_ctor_set(v_reuseFailAlloc_2703_, 4, v_r_2616_);
v___x_2690_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
v_isSharedCheck_2697_ = !lean_is_exclusive(v_r_2616_);
if (v_isSharedCheck_2697_ == 0)
{
lean_object* v_unused_2698_; lean_object* v_unused_2699_; lean_object* v_unused_2700_; lean_object* v_unused_2701_; lean_object* v_unused_2702_; 
v_unused_2698_ = lean_ctor_get(v_r_2616_, 4);
lean_dec(v_unused_2698_);
v_unused_2699_ = lean_ctor_get(v_r_2616_, 3);
lean_dec(v_unused_2699_);
v_unused_2700_ = lean_ctor_get(v_r_2616_, 2);
lean_dec(v_unused_2700_);
v_unused_2701_ = lean_ctor_get(v_r_2616_, 1);
lean_dec(v_unused_2701_);
v_unused_2702_ = lean_ctor_get(v_r_2616_, 0);
lean_dec(v_unused_2702_);
v___x_2692_ = v_r_2616_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_dec(v_r_2616_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2695_; 
if (v_isShared_2693_ == 0)
{
lean_ctor_set(v___x_2692_, 4, v___x_2690_);
lean_ctor_set(v___x_2692_, 3, v_l_2626_);
lean_ctor_set(v___x_2692_, 2, v_v_2625_);
lean_ctor_set(v___x_2692_, 1, v_k_2624_);
lean_ctor_set(v___x_2692_, 0, v___x_2686_);
v___x_2695_ = v___x_2692_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v___x_2686_);
lean_ctor_set(v_reuseFailAlloc_2696_, 1, v_k_2624_);
lean_ctor_set(v_reuseFailAlloc_2696_, 2, v_v_2625_);
lean_ctor_set(v_reuseFailAlloc_2696_, 3, v_l_2626_);
lean_ctor_set(v_reuseFailAlloc_2696_, 4, v___x_2690_);
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
else
{
lean_object* v___x_2704_; lean_object* v___x_2705_; 
lean_dec_ref_known(v_l_2626_, 5);
lean_del_object(v___x_2638_);
lean_dec(v_v_2625_);
lean_dec(v_k_2624_);
lean_dec(v_size_2623_);
lean_dec_ref_known(v_r_2616_, 5);
lean_del_object(v___x_2618_);
lean_dec(v_v_2614_);
lean_dec(v_k_2613_);
v___x_2704_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__3);
v___x_2705_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__4___redArg(v___x_2704_);
return v___x_2705_;
}
}
else
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
lean_del_object(v___x_2638_);
lean_dec(v_r_2627_);
lean_dec(v_v_2625_);
lean_dec(v_k_2624_);
lean_dec(v_size_2623_);
lean_dec_ref_known(v_r_2616_, 5);
lean_del_object(v___x_2618_);
lean_dec(v_v_2614_);
lean_dec(v_k_2613_);
v___x_2706_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__4);
v___x_2707_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__4___redArg(v___x_2706_);
return v___x_2707_;
}
}
}
}
else
{
lean_object* v_size_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2718_; 
v_size_2714_ = lean_ctor_get(v_r_2616_, 0);
v___x_2715_ = lean_unsigned_to_nat(1u);
v___x_2716_ = lean_nat_add(v___x_2715_, v_size_2714_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 3, v___x_2621_);
lean_ctor_set(v___x_2618_, 0, v___x_2716_);
v___x_2718_ = v___x_2618_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v___x_2716_);
lean_ctor_set(v_reuseFailAlloc_2719_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2719_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2719_, 3, v___x_2621_);
lean_ctor_set(v_reuseFailAlloc_2719_, 4, v_r_2616_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
else
{
if (lean_obj_tag(v___x_2621_) == 0)
{
lean_object* v_l_2720_; 
v_l_2720_ = lean_ctor_get(v___x_2621_, 3);
lean_inc(v_l_2720_);
if (lean_obj_tag(v_l_2720_) == 0)
{
lean_object* v_r_2721_; 
v_r_2721_ = lean_ctor_get(v___x_2621_, 4);
lean_inc(v_r_2721_);
if (lean_obj_tag(v_r_2721_) == 0)
{
lean_object* v_size_2722_; lean_object* v_k_2723_; lean_object* v_v_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2738_; 
v_size_2722_ = lean_ctor_get(v___x_2621_, 0);
v_k_2723_ = lean_ctor_get(v___x_2621_, 1);
v_v_2724_ = lean_ctor_get(v___x_2621_, 2);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2621_);
if (v_isSharedCheck_2738_ == 0)
{
lean_object* v_unused_2739_; lean_object* v_unused_2740_; 
v_unused_2739_ = lean_ctor_get(v___x_2621_, 4);
lean_dec(v_unused_2739_);
v_unused_2740_ = lean_ctor_get(v___x_2621_, 3);
lean_dec(v_unused_2740_);
v___x_2726_ = v___x_2621_;
v_isShared_2727_ = v_isSharedCheck_2738_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_v_2724_);
lean_inc(v_k_2723_);
lean_inc(v_size_2722_);
lean_dec(v___x_2621_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2738_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v_size_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2733_; 
v_size_2728_ = lean_ctor_get(v_r_2721_, 0);
v___x_2729_ = lean_unsigned_to_nat(1u);
v___x_2730_ = lean_nat_add(v___x_2729_, v_size_2722_);
lean_dec(v_size_2722_);
v___x_2731_ = lean_nat_add(v___x_2729_, v_size_2728_);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 4, v_r_2616_);
lean_ctor_set(v___x_2726_, 3, v_r_2721_);
lean_ctor_set(v___x_2726_, 2, v_v_2614_);
lean_ctor_set(v___x_2726_, 1, v_k_2613_);
lean_ctor_set(v___x_2726_, 0, v___x_2731_);
v___x_2733_ = v___x_2726_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v___x_2731_);
lean_ctor_set(v_reuseFailAlloc_2737_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2737_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2737_, 3, v_r_2721_);
lean_ctor_set(v_reuseFailAlloc_2737_, 4, v_r_2616_);
v___x_2733_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
lean_object* v___x_2735_; 
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v___x_2733_);
lean_ctor_set(v___x_2618_, 3, v_l_2720_);
lean_ctor_set(v___x_2618_, 2, v_v_2724_);
lean_ctor_set(v___x_2618_, 1, v_k_2723_);
lean_ctor_set(v___x_2618_, 0, v___x_2730_);
v___x_2735_ = v___x_2618_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v___x_2730_);
lean_ctor_set(v_reuseFailAlloc_2736_, 1, v_k_2723_);
lean_ctor_set(v_reuseFailAlloc_2736_, 2, v_v_2724_);
lean_ctor_set(v_reuseFailAlloc_2736_, 3, v_l_2720_);
lean_ctor_set(v_reuseFailAlloc_2736_, 4, v___x_2733_);
v___x_2735_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
return v___x_2735_;
}
}
}
}
else
{
lean_object* v_k_2741_; lean_object* v_v_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2754_; 
v_k_2741_ = lean_ctor_get(v___x_2621_, 1);
v_v_2742_ = lean_ctor_get(v___x_2621_, 2);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2621_);
if (v_isSharedCheck_2754_ == 0)
{
lean_object* v_unused_2755_; lean_object* v_unused_2756_; lean_object* v_unused_2757_; 
v_unused_2755_ = lean_ctor_get(v___x_2621_, 4);
lean_dec(v_unused_2755_);
v_unused_2756_ = lean_ctor_get(v___x_2621_, 3);
lean_dec(v_unused_2756_);
v_unused_2757_ = lean_ctor_get(v___x_2621_, 0);
lean_dec(v_unused_2757_);
v___x_2744_ = v___x_2621_;
v_isShared_2745_ = v_isSharedCheck_2754_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_v_2742_);
lean_inc(v_k_2741_);
lean_dec(v___x_2621_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2754_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2749_; 
v___x_2746_ = lean_unsigned_to_nat(3u);
v___x_2747_ = lean_unsigned_to_nat(1u);
if (v_isShared_2745_ == 0)
{
lean_ctor_set(v___x_2744_, 3, v_r_2721_);
lean_ctor_set(v___x_2744_, 2, v_v_2614_);
lean_ctor_set(v___x_2744_, 1, v_k_2613_);
lean_ctor_set(v___x_2744_, 0, v___x_2747_);
v___x_2749_ = v___x_2744_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v___x_2747_);
lean_ctor_set(v_reuseFailAlloc_2753_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2753_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2753_, 3, v_r_2721_);
lean_ctor_set(v_reuseFailAlloc_2753_, 4, v_r_2721_);
v___x_2749_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
lean_object* v___x_2751_; 
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v___x_2749_);
lean_ctor_set(v___x_2618_, 3, v_l_2720_);
lean_ctor_set(v___x_2618_, 2, v_v_2742_);
lean_ctor_set(v___x_2618_, 1, v_k_2741_);
lean_ctor_set(v___x_2618_, 0, v___x_2746_);
v___x_2751_ = v___x_2618_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v___x_2746_);
lean_ctor_set(v_reuseFailAlloc_2752_, 1, v_k_2741_);
lean_ctor_set(v_reuseFailAlloc_2752_, 2, v_v_2742_);
lean_ctor_set(v_reuseFailAlloc_2752_, 3, v_l_2720_);
lean_ctor_set(v_reuseFailAlloc_2752_, 4, v___x_2749_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
}
}
}
else
{
lean_object* v_r_2758_; 
v_r_2758_ = lean_ctor_get(v___x_2621_, 4);
lean_inc(v_r_2758_);
if (lean_obj_tag(v_r_2758_) == 0)
{
lean_object* v_k_2759_; lean_object* v_v_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2784_; 
v_k_2759_ = lean_ctor_get(v___x_2621_, 1);
v_v_2760_ = lean_ctor_get(v___x_2621_, 2);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2621_);
if (v_isSharedCheck_2784_ == 0)
{
lean_object* v_unused_2785_; lean_object* v_unused_2786_; lean_object* v_unused_2787_; 
v_unused_2785_ = lean_ctor_get(v___x_2621_, 4);
lean_dec(v_unused_2785_);
v_unused_2786_ = lean_ctor_get(v___x_2621_, 3);
lean_dec(v_unused_2786_);
v_unused_2787_ = lean_ctor_get(v___x_2621_, 0);
lean_dec(v_unused_2787_);
v___x_2762_ = v___x_2621_;
v_isShared_2763_ = v_isSharedCheck_2784_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_v_2760_);
lean_inc(v_k_2759_);
lean_dec(v___x_2621_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2784_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v_k_2764_; lean_object* v_v_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2780_; 
v_k_2764_ = lean_ctor_get(v_r_2758_, 1);
v_v_2765_ = lean_ctor_get(v_r_2758_, 2);
v_isSharedCheck_2780_ = !lean_is_exclusive(v_r_2758_);
if (v_isSharedCheck_2780_ == 0)
{
lean_object* v_unused_2781_; lean_object* v_unused_2782_; lean_object* v_unused_2783_; 
v_unused_2781_ = lean_ctor_get(v_r_2758_, 4);
lean_dec(v_unused_2781_);
v_unused_2782_ = lean_ctor_get(v_r_2758_, 3);
lean_dec(v_unused_2782_);
v_unused_2783_ = lean_ctor_get(v_r_2758_, 0);
lean_dec(v_unused_2783_);
v___x_2767_ = v_r_2758_;
v_isShared_2768_ = v_isSharedCheck_2780_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_v_2765_);
lean_inc(v_k_2764_);
lean_dec(v_r_2758_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2780_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2772_; 
v___x_2769_ = lean_unsigned_to_nat(3u);
v___x_2770_ = lean_unsigned_to_nat(1u);
if (v_isShared_2768_ == 0)
{
lean_ctor_set(v___x_2767_, 4, v_l_2720_);
lean_ctor_set(v___x_2767_, 3, v_l_2720_);
lean_ctor_set(v___x_2767_, 2, v_v_2760_);
lean_ctor_set(v___x_2767_, 1, v_k_2759_);
lean_ctor_set(v___x_2767_, 0, v___x_2770_);
v___x_2772_ = v___x_2767_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2770_);
lean_ctor_set(v_reuseFailAlloc_2779_, 1, v_k_2759_);
lean_ctor_set(v_reuseFailAlloc_2779_, 2, v_v_2760_);
lean_ctor_set(v_reuseFailAlloc_2779_, 3, v_l_2720_);
lean_ctor_set(v_reuseFailAlloc_2779_, 4, v_l_2720_);
v___x_2772_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
lean_object* v___x_2774_; 
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 4, v_l_2720_);
lean_ctor_set(v___x_2762_, 2, v_v_2614_);
lean_ctor_set(v___x_2762_, 1, v_k_2613_);
lean_ctor_set(v___x_2762_, 0, v___x_2770_);
v___x_2774_ = v___x_2762_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v___x_2770_);
lean_ctor_set(v_reuseFailAlloc_2778_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2778_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2778_, 3, v_l_2720_);
lean_ctor_set(v_reuseFailAlloc_2778_, 4, v_l_2720_);
v___x_2774_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
lean_object* v___x_2776_; 
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v___x_2774_);
lean_ctor_set(v___x_2618_, 3, v___x_2772_);
lean_ctor_set(v___x_2618_, 2, v_v_2765_);
lean_ctor_set(v___x_2618_, 1, v_k_2764_);
lean_ctor_set(v___x_2618_, 0, v___x_2769_);
v___x_2776_ = v___x_2618_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v___x_2769_);
lean_ctor_set(v_reuseFailAlloc_2777_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_2777_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_2777_, 3, v___x_2772_);
lean_ctor_set(v_reuseFailAlloc_2777_, 4, v___x_2774_);
v___x_2776_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
return v___x_2776_;
}
}
}
}
}
}
else
{
lean_object* v___x_2788_; lean_object* v___x_2790_; 
v___x_2788_ = lean_unsigned_to_nat(2u);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v_r_2758_);
lean_ctor_set(v___x_2618_, 3, v___x_2621_);
lean_ctor_set(v___x_2618_, 0, v___x_2788_);
v___x_2790_ = v___x_2618_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v___x_2788_);
lean_ctor_set(v_reuseFailAlloc_2791_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2791_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2791_, 3, v___x_2621_);
lean_ctor_set(v_reuseFailAlloc_2791_, 4, v_r_2758_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
else
{
lean_object* v___x_2792_; lean_object* v___x_2794_; 
v___x_2792_ = lean_unsigned_to_nat(1u);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v___x_2621_);
lean_ctor_set(v___x_2618_, 3, v___x_2621_);
lean_ctor_set(v___x_2618_, 0, v___x_2792_);
v___x_2794_ = v___x_2618_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v___x_2792_);
lean_ctor_set(v_reuseFailAlloc_2795_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2795_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2795_, 3, v___x_2621_);
lean_ctor_set(v_reuseFailAlloc_2795_, 4, v___x_2621_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
return v___x_2794_;
}
}
}
}
case 1:
{
lean_object* v___x_2797_; 
lean_dec(v_v_2614_);
lean_dec(v_k_2613_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 2, v_v_2610_);
lean_ctor_set(v___x_2618_, 1, v_k_2609_);
v___x_2797_ = v___x_2618_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_size_2612_);
lean_ctor_set(v_reuseFailAlloc_2798_, 1, v_k_2609_);
lean_ctor_set(v_reuseFailAlloc_2798_, 2, v_v_2610_);
lean_ctor_set(v_reuseFailAlloc_2798_, 3, v_l_2615_);
lean_ctor_set(v_reuseFailAlloc_2798_, 4, v_r_2616_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
default: 
{
lean_object* v___x_2799_; 
lean_dec(v_size_2612_);
v___x_2799_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(v_k_2609_, v_v_2610_, v_r_2616_);
if (lean_obj_tag(v_l_2615_) == 0)
{
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_size_2800_; lean_object* v_size_2801_; lean_object* v_k_2802_; lean_object* v_v_2803_; lean_object* v_l_2804_; lean_object* v_r_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; 
v_size_2800_ = lean_ctor_get(v_l_2615_, 0);
v_size_2801_ = lean_ctor_get(v___x_2799_, 0);
lean_inc(v_size_2801_);
v_k_2802_ = lean_ctor_get(v___x_2799_, 1);
lean_inc(v_k_2802_);
v_v_2803_ = lean_ctor_get(v___x_2799_, 2);
lean_inc(v_v_2803_);
v_l_2804_ = lean_ctor_get(v___x_2799_, 3);
lean_inc(v_l_2804_);
v_r_2805_ = lean_ctor_get(v___x_2799_, 4);
lean_inc(v_r_2805_);
v___x_2806_ = lean_unsigned_to_nat(3u);
v___x_2807_ = lean_nat_mul(v___x_2806_, v_size_2800_);
v___x_2808_ = lean_nat_dec_lt(v___x_2807_, v_size_2801_);
lean_dec(v___x_2807_);
if (v___x_2808_ == 0)
{
lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2813_; 
lean_dec(v_r_2805_);
lean_dec(v_l_2804_);
lean_dec(v_v_2803_);
lean_dec(v_k_2802_);
v___x_2809_ = lean_unsigned_to_nat(1u);
v___x_2810_ = lean_nat_add(v___x_2809_, v_size_2800_);
v___x_2811_ = lean_nat_add(v___x_2810_, v_size_2801_);
lean_dec(v_size_2801_);
lean_dec(v___x_2810_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v___x_2799_);
lean_ctor_set(v___x_2618_, 0, v___x_2811_);
v___x_2813_ = v___x_2618_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2811_);
lean_ctor_set(v_reuseFailAlloc_2814_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2814_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2814_, 3, v_l_2615_);
lean_ctor_set(v_reuseFailAlloc_2814_, 4, v___x_2799_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
else
{
lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2884_; 
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2884_ == 0)
{
lean_object* v_unused_2885_; lean_object* v_unused_2886_; lean_object* v_unused_2887_; lean_object* v_unused_2888_; lean_object* v_unused_2889_; 
v_unused_2885_ = lean_ctor_get(v___x_2799_, 4);
lean_dec(v_unused_2885_);
v_unused_2886_ = lean_ctor_get(v___x_2799_, 3);
lean_dec(v_unused_2886_);
v_unused_2887_ = lean_ctor_get(v___x_2799_, 2);
lean_dec(v_unused_2887_);
v_unused_2888_ = lean_ctor_get(v___x_2799_, 1);
lean_dec(v_unused_2888_);
v_unused_2889_ = lean_ctor_get(v___x_2799_, 0);
lean_dec(v_unused_2889_);
v___x_2816_ = v___x_2799_;
v_isShared_2817_ = v_isSharedCheck_2884_;
goto v_resetjp_2815_;
}
else
{
lean_dec(v___x_2799_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2884_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
if (lean_obj_tag(v_l_2804_) == 0)
{
if (lean_obj_tag(v_r_2805_) == 0)
{
lean_object* v_size_2818_; lean_object* v_k_2819_; lean_object* v_v_2820_; lean_object* v_l_2821_; lean_object* v_r_2822_; lean_object* v_size_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; uint8_t v___x_2826_; 
v_size_2818_ = lean_ctor_get(v_l_2804_, 0);
v_k_2819_ = lean_ctor_get(v_l_2804_, 1);
v_v_2820_ = lean_ctor_get(v_l_2804_, 2);
v_l_2821_ = lean_ctor_get(v_l_2804_, 3);
v_r_2822_ = lean_ctor_get(v_l_2804_, 4);
v_size_2823_ = lean_ctor_get(v_r_2805_, 0);
v___x_2824_ = lean_unsigned_to_nat(2u);
v___x_2825_ = lean_nat_mul(v___x_2824_, v_size_2823_);
v___x_2826_ = lean_nat_dec_lt(v_size_2818_, v___x_2825_);
lean_dec(v___x_2825_);
if (v___x_2826_ == 0)
{
lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2855_; 
lean_inc(v_r_2822_);
lean_inc(v_l_2821_);
lean_inc(v_v_2820_);
lean_inc(v_k_2819_);
v_isSharedCheck_2855_ = !lean_is_exclusive(v_l_2804_);
if (v_isSharedCheck_2855_ == 0)
{
lean_object* v_unused_2856_; lean_object* v_unused_2857_; lean_object* v_unused_2858_; lean_object* v_unused_2859_; lean_object* v_unused_2860_; 
v_unused_2856_ = lean_ctor_get(v_l_2804_, 4);
lean_dec(v_unused_2856_);
v_unused_2857_ = lean_ctor_get(v_l_2804_, 3);
lean_dec(v_unused_2857_);
v_unused_2858_ = lean_ctor_get(v_l_2804_, 2);
lean_dec(v_unused_2858_);
v_unused_2859_ = lean_ctor_get(v_l_2804_, 1);
lean_dec(v_unused_2859_);
v_unused_2860_ = lean_ctor_get(v_l_2804_, 0);
lean_dec(v_unused_2860_);
v___x_2828_ = v_l_2804_;
v_isShared_2829_ = v_isSharedCheck_2855_;
goto v_resetjp_2827_;
}
else
{
lean_dec(v_l_2804_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2855_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___y_2834_; lean_object* v___y_2835_; lean_object* v___y_2836_; lean_object* v___y_2845_; 
v___x_2830_ = lean_unsigned_to_nat(1u);
v___x_2831_ = lean_nat_add(v___x_2830_, v_size_2800_);
v___x_2832_ = lean_nat_add(v___x_2831_, v_size_2801_);
lean_dec(v_size_2801_);
if (lean_obj_tag(v_l_2821_) == 0)
{
lean_object* v_size_2853_; 
v_size_2853_ = lean_ctor_get(v_l_2821_, 0);
lean_inc(v_size_2853_);
v___y_2845_ = v_size_2853_;
goto v___jp_2844_;
}
else
{
lean_object* v___x_2854_; 
v___x_2854_ = lean_unsigned_to_nat(0u);
v___y_2845_ = v___x_2854_;
goto v___jp_2844_;
}
v___jp_2833_:
{
lean_object* v___x_2837_; lean_object* v___x_2839_; 
v___x_2837_ = lean_nat_add(v___y_2835_, v___y_2836_);
lean_dec(v___y_2836_);
lean_dec(v___y_2835_);
if (v_isShared_2829_ == 0)
{
lean_ctor_set(v___x_2828_, 4, v_r_2805_);
lean_ctor_set(v___x_2828_, 3, v_r_2822_);
lean_ctor_set(v___x_2828_, 2, v_v_2803_);
lean_ctor_set(v___x_2828_, 1, v_k_2802_);
lean_ctor_set(v___x_2828_, 0, v___x_2837_);
v___x_2839_ = v___x_2828_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2837_);
lean_ctor_set(v_reuseFailAlloc_2843_, 1, v_k_2802_);
lean_ctor_set(v_reuseFailAlloc_2843_, 2, v_v_2803_);
lean_ctor_set(v_reuseFailAlloc_2843_, 3, v_r_2822_);
lean_ctor_set(v_reuseFailAlloc_2843_, 4, v_r_2805_);
v___x_2839_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
lean_object* v___x_2841_; 
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v___x_2839_);
lean_ctor_set(v___x_2816_, 3, v___y_2834_);
lean_ctor_set(v___x_2816_, 2, v_v_2820_);
lean_ctor_set(v___x_2816_, 1, v_k_2819_);
lean_ctor_set(v___x_2816_, 0, v___x_2832_);
v___x_2841_ = v___x_2816_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v___x_2832_);
lean_ctor_set(v_reuseFailAlloc_2842_, 1, v_k_2819_);
lean_ctor_set(v_reuseFailAlloc_2842_, 2, v_v_2820_);
lean_ctor_set(v_reuseFailAlloc_2842_, 3, v___y_2834_);
lean_ctor_set(v_reuseFailAlloc_2842_, 4, v___x_2839_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
v___jp_2844_:
{
lean_object* v___x_2846_; lean_object* v___x_2848_; 
v___x_2846_ = lean_nat_add(v___x_2831_, v___y_2845_);
lean_dec(v___y_2845_);
lean_dec(v___x_2831_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v_l_2821_);
lean_ctor_set(v___x_2618_, 0, v___x_2846_);
v___x_2848_ = v___x_2618_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v___x_2846_);
lean_ctor_set(v_reuseFailAlloc_2852_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2852_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2852_, 3, v_l_2615_);
lean_ctor_set(v_reuseFailAlloc_2852_, 4, v_l_2821_);
v___x_2848_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
lean_object* v___x_2849_; 
v___x_2849_ = lean_nat_add(v___x_2830_, v_size_2823_);
if (lean_obj_tag(v_r_2822_) == 0)
{
lean_object* v_size_2850_; 
v_size_2850_ = lean_ctor_get(v_r_2822_, 0);
lean_inc(v_size_2850_);
v___y_2834_ = v___x_2848_;
v___y_2835_ = v___x_2849_;
v___y_2836_ = v_size_2850_;
goto v___jp_2833_;
}
else
{
lean_object* v___x_2851_; 
v___x_2851_ = lean_unsigned_to_nat(0u);
v___y_2834_ = v___x_2848_;
v___y_2835_ = v___x_2849_;
v___y_2836_ = v___x_2851_;
goto v___jp_2833_;
}
}
}
}
}
else
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2866_; 
lean_del_object(v___x_2618_);
v___x_2861_ = lean_unsigned_to_nat(1u);
v___x_2862_ = lean_nat_add(v___x_2861_, v_size_2800_);
v___x_2863_ = lean_nat_add(v___x_2862_, v_size_2801_);
lean_dec(v_size_2801_);
v___x_2864_ = lean_nat_add(v___x_2862_, v_size_2818_);
lean_dec(v___x_2862_);
lean_inc_ref(v_l_2615_);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 4, v_l_2804_);
lean_ctor_set(v___x_2816_, 3, v_l_2615_);
lean_ctor_set(v___x_2816_, 2, v_v_2614_);
lean_ctor_set(v___x_2816_, 1, v_k_2613_);
lean_ctor_set(v___x_2816_, 0, v___x_2864_);
v___x_2866_ = v___x_2816_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v___x_2864_);
lean_ctor_set(v_reuseFailAlloc_2879_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2879_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2879_, 3, v_l_2615_);
lean_ctor_set(v_reuseFailAlloc_2879_, 4, v_l_2804_);
v___x_2866_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2873_; 
v_isSharedCheck_2873_ = !lean_is_exclusive(v_l_2615_);
if (v_isSharedCheck_2873_ == 0)
{
lean_object* v_unused_2874_; lean_object* v_unused_2875_; lean_object* v_unused_2876_; lean_object* v_unused_2877_; lean_object* v_unused_2878_; 
v_unused_2874_ = lean_ctor_get(v_l_2615_, 4);
lean_dec(v_unused_2874_);
v_unused_2875_ = lean_ctor_get(v_l_2615_, 3);
lean_dec(v_unused_2875_);
v_unused_2876_ = lean_ctor_get(v_l_2615_, 2);
lean_dec(v_unused_2876_);
v_unused_2877_ = lean_ctor_get(v_l_2615_, 1);
lean_dec(v_unused_2877_);
v_unused_2878_ = lean_ctor_get(v_l_2615_, 0);
lean_dec(v_unused_2878_);
v___x_2868_ = v_l_2615_;
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
else
{
lean_dec(v_l_2615_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2873_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 4, v_r_2805_);
lean_ctor_set(v___x_2868_, 3, v___x_2866_);
lean_ctor_set(v___x_2868_, 2, v_v_2803_);
lean_ctor_set(v___x_2868_, 1, v_k_2802_);
lean_ctor_set(v___x_2868_, 0, v___x_2863_);
v___x_2871_ = v___x_2868_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v___x_2863_);
lean_ctor_set(v_reuseFailAlloc_2872_, 1, v_k_2802_);
lean_ctor_set(v_reuseFailAlloc_2872_, 2, v_v_2803_);
lean_ctor_set(v_reuseFailAlloc_2872_, 3, v___x_2866_);
lean_ctor_set(v_reuseFailAlloc_2872_, 4, v_r_2805_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
}
else
{
lean_object* v___x_2880_; lean_object* v___x_2881_; 
lean_dec_ref_known(v_l_2804_, 5);
lean_del_object(v___x_2816_);
lean_dec(v_v_2803_);
lean_dec(v_k_2802_);
lean_dec(v_size_2801_);
lean_dec_ref_known(v_l_2615_, 5);
lean_del_object(v___x_2618_);
lean_dec(v_v_2614_);
lean_dec(v_k_2613_);
v___x_2880_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__7);
v___x_2881_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__4___redArg(v___x_2880_);
return v___x_2881_;
}
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
lean_del_object(v___x_2816_);
lean_dec(v_r_2805_);
lean_dec(v_v_2803_);
lean_dec(v_k_2802_);
lean_dec(v_size_2801_);
lean_dec_ref_known(v_l_2615_, 5);
lean_del_object(v___x_2618_);
lean_dec(v_v_2614_);
lean_dec(v_k_2613_);
v___x_2882_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg___closed__8);
v___x_2883_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__4___redArg(v___x_2882_);
return v___x_2883_;
}
}
}
}
else
{
lean_object* v_size_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2894_; 
v_size_2890_ = lean_ctor_get(v_l_2615_, 0);
v___x_2891_ = lean_unsigned_to_nat(1u);
v___x_2892_ = lean_nat_add(v___x_2891_, v_size_2890_);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v___x_2799_);
lean_ctor_set(v___x_2618_, 0, v___x_2892_);
v___x_2894_ = v___x_2618_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v___x_2892_);
lean_ctor_set(v_reuseFailAlloc_2895_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2895_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2895_, 3, v_l_2615_);
lean_ctor_set(v_reuseFailAlloc_2895_, 4, v___x_2799_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
else
{
if (lean_obj_tag(v___x_2799_) == 0)
{
lean_object* v_l_2896_; 
v_l_2896_ = lean_ctor_get(v___x_2799_, 3);
lean_inc(v_l_2896_);
if (lean_obj_tag(v_l_2896_) == 0)
{
lean_object* v_r_2897_; 
v_r_2897_ = lean_ctor_get(v___x_2799_, 4);
lean_inc(v_r_2897_);
if (lean_obj_tag(v_r_2897_) == 0)
{
lean_object* v_size_2898_; lean_object* v_k_2899_; lean_object* v_v_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2914_; 
v_size_2898_ = lean_ctor_get(v___x_2799_, 0);
v_k_2899_ = lean_ctor_get(v___x_2799_, 1);
v_v_2900_ = lean_ctor_get(v___x_2799_, 2);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2914_ == 0)
{
lean_object* v_unused_2915_; lean_object* v_unused_2916_; 
v_unused_2915_ = lean_ctor_get(v___x_2799_, 4);
lean_dec(v_unused_2915_);
v_unused_2916_ = lean_ctor_get(v___x_2799_, 3);
lean_dec(v_unused_2916_);
v___x_2902_ = v___x_2799_;
v_isShared_2903_ = v_isSharedCheck_2914_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_v_2900_);
lean_inc(v_k_2899_);
lean_inc(v_size_2898_);
lean_dec(v___x_2799_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2914_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v_size_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2909_; 
v_size_2904_ = lean_ctor_get(v_l_2896_, 0);
v___x_2905_ = lean_unsigned_to_nat(1u);
v___x_2906_ = lean_nat_add(v___x_2905_, v_size_2898_);
lean_dec(v_size_2898_);
v___x_2907_ = lean_nat_add(v___x_2905_, v_size_2904_);
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 4, v_l_2896_);
lean_ctor_set(v___x_2902_, 3, v_l_2615_);
lean_ctor_set(v___x_2902_, 2, v_v_2614_);
lean_ctor_set(v___x_2902_, 1, v_k_2613_);
lean_ctor_set(v___x_2902_, 0, v___x_2907_);
v___x_2909_ = v___x_2902_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v___x_2907_);
lean_ctor_set(v_reuseFailAlloc_2913_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2913_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2913_, 3, v_l_2615_);
lean_ctor_set(v_reuseFailAlloc_2913_, 4, v_l_2896_);
v___x_2909_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
lean_object* v___x_2911_; 
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v_r_2897_);
lean_ctor_set(v___x_2618_, 3, v___x_2909_);
lean_ctor_set(v___x_2618_, 2, v_v_2900_);
lean_ctor_set(v___x_2618_, 1, v_k_2899_);
lean_ctor_set(v___x_2618_, 0, v___x_2906_);
v___x_2911_ = v___x_2618_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v___x_2906_);
lean_ctor_set(v_reuseFailAlloc_2912_, 1, v_k_2899_);
lean_ctor_set(v_reuseFailAlloc_2912_, 2, v_v_2900_);
lean_ctor_set(v_reuseFailAlloc_2912_, 3, v___x_2909_);
lean_ctor_set(v_reuseFailAlloc_2912_, 4, v_r_2897_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
}
else
{
lean_object* v_k_2917_; lean_object* v_v_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2942_; 
v_k_2917_ = lean_ctor_get(v___x_2799_, 1);
v_v_2918_ = lean_ctor_get(v___x_2799_, 2);
v_isSharedCheck_2942_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2942_ == 0)
{
lean_object* v_unused_2943_; lean_object* v_unused_2944_; lean_object* v_unused_2945_; 
v_unused_2943_ = lean_ctor_get(v___x_2799_, 4);
lean_dec(v_unused_2943_);
v_unused_2944_ = lean_ctor_get(v___x_2799_, 3);
lean_dec(v_unused_2944_);
v_unused_2945_ = lean_ctor_get(v___x_2799_, 0);
lean_dec(v_unused_2945_);
v___x_2920_ = v___x_2799_;
v_isShared_2921_ = v_isSharedCheck_2942_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_v_2918_);
lean_inc(v_k_2917_);
lean_dec(v___x_2799_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2942_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v_k_2922_; lean_object* v_v_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2938_; 
v_k_2922_ = lean_ctor_get(v_l_2896_, 1);
v_v_2923_ = lean_ctor_get(v_l_2896_, 2);
v_isSharedCheck_2938_ = !lean_is_exclusive(v_l_2896_);
if (v_isSharedCheck_2938_ == 0)
{
lean_object* v_unused_2939_; lean_object* v_unused_2940_; lean_object* v_unused_2941_; 
v_unused_2939_ = lean_ctor_get(v_l_2896_, 4);
lean_dec(v_unused_2939_);
v_unused_2940_ = lean_ctor_get(v_l_2896_, 3);
lean_dec(v_unused_2940_);
v_unused_2941_ = lean_ctor_get(v_l_2896_, 0);
lean_dec(v_unused_2941_);
v___x_2925_ = v_l_2896_;
v_isShared_2926_ = v_isSharedCheck_2938_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_v_2923_);
lean_inc(v_k_2922_);
lean_dec(v_l_2896_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2938_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2930_; 
v___x_2927_ = lean_unsigned_to_nat(3u);
v___x_2928_ = lean_unsigned_to_nat(1u);
if (v_isShared_2926_ == 0)
{
lean_ctor_set(v___x_2925_, 4, v_r_2897_);
lean_ctor_set(v___x_2925_, 3, v_r_2897_);
lean_ctor_set(v___x_2925_, 2, v_v_2614_);
lean_ctor_set(v___x_2925_, 1, v_k_2613_);
lean_ctor_set(v___x_2925_, 0, v___x_2928_);
v___x_2930_ = v___x_2925_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v___x_2928_);
lean_ctor_set(v_reuseFailAlloc_2937_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2937_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2937_, 3, v_r_2897_);
lean_ctor_set(v_reuseFailAlloc_2937_, 4, v_r_2897_);
v___x_2930_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
lean_object* v___x_2932_; 
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 3, v_r_2897_);
lean_ctor_set(v___x_2920_, 0, v___x_2928_);
v___x_2932_ = v___x_2920_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v___x_2928_);
lean_ctor_set(v_reuseFailAlloc_2936_, 1, v_k_2917_);
lean_ctor_set(v_reuseFailAlloc_2936_, 2, v_v_2918_);
lean_ctor_set(v_reuseFailAlloc_2936_, 3, v_r_2897_);
lean_ctor_set(v_reuseFailAlloc_2936_, 4, v_r_2897_);
v___x_2932_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
lean_object* v___x_2934_; 
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v___x_2932_);
lean_ctor_set(v___x_2618_, 3, v___x_2930_);
lean_ctor_set(v___x_2618_, 2, v_v_2923_);
lean_ctor_set(v___x_2618_, 1, v_k_2922_);
lean_ctor_set(v___x_2618_, 0, v___x_2927_);
v___x_2934_ = v___x_2618_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v___x_2927_);
lean_ctor_set(v_reuseFailAlloc_2935_, 1, v_k_2922_);
lean_ctor_set(v_reuseFailAlloc_2935_, 2, v_v_2923_);
lean_ctor_set(v_reuseFailAlloc_2935_, 3, v___x_2930_);
lean_ctor_set(v_reuseFailAlloc_2935_, 4, v___x_2932_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_2946_; 
v_r_2946_ = lean_ctor_get(v___x_2799_, 4);
lean_inc(v_r_2946_);
if (lean_obj_tag(v_r_2946_) == 0)
{
lean_object* v_k_2947_; lean_object* v_v_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2960_; 
v_k_2947_ = lean_ctor_get(v___x_2799_, 1);
v_v_2948_ = lean_ctor_get(v___x_2799_, 2);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2799_);
if (v_isSharedCheck_2960_ == 0)
{
lean_object* v_unused_2961_; lean_object* v_unused_2962_; lean_object* v_unused_2963_; 
v_unused_2961_ = lean_ctor_get(v___x_2799_, 4);
lean_dec(v_unused_2961_);
v_unused_2962_ = lean_ctor_get(v___x_2799_, 3);
lean_dec(v_unused_2962_);
v_unused_2963_ = lean_ctor_get(v___x_2799_, 0);
lean_dec(v_unused_2963_);
v___x_2950_ = v___x_2799_;
v_isShared_2951_ = v_isSharedCheck_2960_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_v_2948_);
lean_inc(v_k_2947_);
lean_dec(v___x_2799_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2960_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2955_; 
v___x_2952_ = lean_unsigned_to_nat(3u);
v___x_2953_ = lean_unsigned_to_nat(1u);
if (v_isShared_2951_ == 0)
{
lean_ctor_set(v___x_2950_, 4, v_l_2896_);
lean_ctor_set(v___x_2950_, 2, v_v_2614_);
lean_ctor_set(v___x_2950_, 1, v_k_2613_);
lean_ctor_set(v___x_2950_, 0, v___x_2953_);
v___x_2955_ = v___x_2950_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2953_);
lean_ctor_set(v_reuseFailAlloc_2959_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2959_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2959_, 3, v_l_2896_);
lean_ctor_set(v_reuseFailAlloc_2959_, 4, v_l_2896_);
v___x_2955_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
lean_object* v___x_2957_; 
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v_r_2946_);
lean_ctor_set(v___x_2618_, 3, v___x_2955_);
lean_ctor_set(v___x_2618_, 2, v_v_2948_);
lean_ctor_set(v___x_2618_, 1, v_k_2947_);
lean_ctor_set(v___x_2618_, 0, v___x_2952_);
v___x_2957_ = v___x_2618_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v___x_2952_);
lean_ctor_set(v_reuseFailAlloc_2958_, 1, v_k_2947_);
lean_ctor_set(v_reuseFailAlloc_2958_, 2, v_v_2948_);
lean_ctor_set(v_reuseFailAlloc_2958_, 3, v___x_2955_);
lean_ctor_set(v_reuseFailAlloc_2958_, 4, v_r_2946_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
return v___x_2957_;
}
}
}
}
else
{
lean_object* v___x_2964_; lean_object* v___x_2966_; 
v___x_2964_ = lean_unsigned_to_nat(2u);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v___x_2799_);
lean_ctor_set(v___x_2618_, 3, v_r_2946_);
lean_ctor_set(v___x_2618_, 0, v___x_2964_);
v___x_2966_ = v___x_2618_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v___x_2964_);
lean_ctor_set(v_reuseFailAlloc_2967_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2967_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2967_, 3, v_r_2946_);
lean_ctor_set(v_reuseFailAlloc_2967_, 4, v___x_2799_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
}
}
else
{
lean_object* v___x_2968_; lean_object* v___x_2970_; 
v___x_2968_ = lean_unsigned_to_nat(1u);
if (v_isShared_2619_ == 0)
{
lean_ctor_set(v___x_2618_, 4, v___x_2799_);
lean_ctor_set(v___x_2618_, 3, v___x_2799_);
lean_ctor_set(v___x_2618_, 0, v___x_2968_);
v___x_2970_ = v___x_2618_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v___x_2968_);
lean_ctor_set(v_reuseFailAlloc_2971_, 1, v_k_2613_);
lean_ctor_set(v_reuseFailAlloc_2971_, 2, v_v_2614_);
lean_ctor_set(v_reuseFailAlloc_2971_, 3, v___x_2799_);
lean_ctor_set(v_reuseFailAlloc_2971_, 4, v___x_2799_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2973_ = lean_unsigned_to_nat(1u);
v___x_2974_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2973_);
lean_ctor_set(v___x_2974_, 1, v_k_2609_);
lean_ctor_set(v___x_2974_, 2, v_v_2610_);
lean_ctor_set(v___x_2974_, 3, v_t_2611_);
lean_ctor_set(v___x_2974_, 4, v_t_2611_);
return v___x_2974_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1___lam__0(lean_object* v_n_2975_, lean_object* v_k_2976_, lean_object* v_v_2977_){
_start:
{
uint8_t v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2978_ = 1;
v___x_2979_ = l_Lean_Name_toString(v_k_2976_, v___x_2978_);
v___x_2980_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2980_, 0, v_v_2977_);
v___x_2981_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(v___x_2979_, v___x_2980_, v_n_2975_);
return v___x_2981_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1(lean_object* v_m_2983_){
_start:
{
lean_object* v___f_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___f_2984_ = ((lean_object*)(l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1___closed__0));
v___x_2985_ = lean_box(1);
v___x_2986_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v___f_2984_, v___x_2985_, v_m_2983_);
v___x_2987_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2986_);
return v___x_2987_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(lean_object* v___x_2990_, uint8_t v_updateToolchain_2991_, lean_object* v_ws_2992_, lean_object* v_dep_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_){
_start:
{
lean_object* v_baseName_2997_; lean_object* v_name_2998_; lean_object* v_opts_2999_; uint8_t v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; 
v_baseName_2997_ = lean_ctor_get(v___x_2990_, 1);
v_name_2998_ = lean_ctor_get(v_dep_2993_, 0);
v_opts_2999_ = lean_ctor_get(v_dep_2993_, 4);
v___x_3000_ = 0;
lean_inc(v_baseName_2997_);
v___x_3001_ = l_Lean_Name_toString(v_baseName_2997_, v___x_3000_);
v___x_3002_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0));
v___x_3003_ = lean_string_append(v___x_3001_, v___x_3002_);
lean_inc(v_name_2998_);
v___x_3004_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2998_, v_updateToolchain_2991_);
v___x_3005_ = lean_string_append(v___x_3003_, v___x_3004_);
lean_dec_ref(v___x_3004_);
v___x_3006_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1));
v___x_3007_ = lean_string_append(v___x_3005_, v___x_3006_);
lean_inc(v_opts_2999_);
v___x_3008_ = l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1(v_opts_2999_);
v___x_3009_ = lean_unsigned_to_nat(80u);
v___x_3010_ = l_Lean_Json_pretty(v___x_3008_, v___x_3009_);
v___x_3011_ = lean_string_append(v___x_3007_, v___x_3010_);
lean_dec_ref(v___x_3010_);
v___x_3012_ = 0;
v___x_3013_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3013_, 0, v___x_3011_);
lean_ctor_set_uint8(v___x_3013_, sizeof(void*)*1, v___x_3012_);
lean_inc_ref(v___y_2995_);
v___x_3014_ = lean_apply_2(v___y_2995_, v___x_3013_, lean_box(0));
v___x_3015_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_2992_, v___x_2990_, v_dep_2993_, v___y_2994_, v___y_2995_);
return v___x_3015_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed(lean_object* v___x_3016_, lean_object* v_updateToolchain_3017_, lean_object* v_ws_3018_, lean_object* v_dep_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_){
_start:
{
uint8_t v_updateToolchain_boxed_3023_; lean_object* v_res_3024_; 
v_updateToolchain_boxed_3023_ = lean_unbox(v_updateToolchain_3017_);
v_res_3024_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(v___x_3016_, v_updateToolchain_boxed_3023_, v_ws_3018_, v_dep_3019_, v___y_3020_, v___y_3021_);
lean_dec_ref(v___y_3021_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___redArg(lean_object* v_a_3025_, lean_object* v_b_3026_){
_start:
{
lean_object* v_next_3027_; 
v_next_3027_ = lean_ctor_get(v_a_3025_, 0);
lean_inc(v_next_3027_);
if (lean_obj_tag(v_next_3027_) == 0)
{
lean_dec_ref(v_a_3025_);
return v_b_3026_;
}
else
{
lean_object* v_upperBound_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3048_; 
v_upperBound_3028_ = lean_ctor_get(v_a_3025_, 1);
v_isSharedCheck_3048_ = !lean_is_exclusive(v_a_3025_);
if (v_isSharedCheck_3048_ == 0)
{
lean_object* v_unused_3049_; 
v_unused_3049_ = lean_ctor_get(v_a_3025_, 0);
lean_dec(v_unused_3049_);
v___x_3030_ = v_a_3025_;
v_isShared_3031_ = v_isSharedCheck_3048_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_upperBound_3028_);
lean_dec(v_a_3025_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3048_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v_val_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3047_; 
v_val_3032_ = lean_ctor_get(v_next_3027_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v_next_3027_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3034_ = v_next_3027_;
v_isShared_3035_ = v_isSharedCheck_3047_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_val_3032_);
lean_dec(v_next_3027_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3047_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
uint8_t v___x_3036_; 
v___x_3036_ = lean_nat_dec_lt(v_val_3032_, v_upperBound_3028_);
if (v___x_3036_ == 0)
{
lean_del_object(v___x_3034_);
lean_dec(v_val_3032_);
lean_del_object(v___x_3030_);
lean_dec(v_upperBound_3028_);
return v_b_3026_;
}
else
{
lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3040_; 
v___x_3037_ = lean_unsigned_to_nat(1u);
v___x_3038_ = lean_nat_add(v_val_3032_, v___x_3037_);
if (v_isShared_3035_ == 0)
{
lean_ctor_set(v___x_3034_, 0, v___x_3038_);
v___x_3040_ = v___x_3034_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v___x_3038_);
v___x_3040_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
lean_object* v___x_3042_; 
if (v_isShared_3031_ == 0)
{
lean_ctor_set(v___x_3030_, 0, v___x_3040_);
v___x_3042_ = v___x_3030_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v___x_3040_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v_upperBound_3028_);
v___x_3042_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
lean_object* v___x_3043_; 
v___x_3043_ = lean_array_push(v_b_3026_, v_val_3032_);
v_a_3025_ = v___x_3042_;
v_b_3026_ = v___x_3043_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(lean_object* v_n_3050_, lean_object* v_f_3051_, lean_object* v_xs_3052_, lean_object* v_k_3053_, lean_object* v_acc_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_){
_start:
{
uint8_t v___x_3058_; 
v___x_3058_ = lean_nat_dec_lt(v_k_3053_, v_n_3050_);
if (v___x_3058_ == 0)
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
lean_dec(v_k_3053_);
lean_dec_ref(v_f_3051_);
v___x_3059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3059_, 0, v_acc_3054_);
lean_ctor_set(v___x_3059_, 1, v___y_3055_);
v___x_3060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3059_);
return v___x_3060_;
}
else
{
lean_object* v___x_3061_; lean_object* v___x_3062_; 
v___x_3061_ = lean_array_fget_borrowed(v_xs_3052_, v_k_3053_);
lean_inc_ref(v_f_3051_);
lean_inc_ref(v___y_3056_);
lean_inc(v___x_3061_);
v___x_3062_ = lean_apply_4(v_f_3051_, v___x_3061_, v___y_3055_, v___y_3056_, lean_box(0));
if (lean_obj_tag(v___x_3062_) == 0)
{
lean_object* v_a_3063_; lean_object* v_fst_3064_; lean_object* v_snd_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
v_a_3063_ = lean_ctor_get(v___x_3062_, 0);
lean_inc(v_a_3063_);
lean_dec_ref_known(v___x_3062_, 1);
v_fst_3064_ = lean_ctor_get(v_a_3063_, 0);
lean_inc(v_fst_3064_);
v_snd_3065_ = lean_ctor_get(v_a_3063_, 1);
lean_inc(v_snd_3065_);
lean_dec(v_a_3063_);
v___x_3066_ = lean_unsigned_to_nat(1u);
v___x_3067_ = lean_nat_add(v_k_3053_, v___x_3066_);
lean_dec(v_k_3053_);
v___x_3068_ = lean_array_push(v_acc_3054_, v_fst_3064_);
v_k_3053_ = v___x_3067_;
v_acc_3054_ = v___x_3068_;
v___y_3055_ = v_snd_3065_;
goto _start;
}
else
{
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3077_; 
lean_dec_ref(v_acc_3054_);
lean_dec(v_k_3053_);
lean_dec_ref(v_f_3051_);
v_a_3070_ = lean_ctor_get(v___x_3062_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3062_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3072_ = v___x_3062_;
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v___x_3062_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3075_; 
if (v_isShared_3073_ == 0)
{
v___x_3075_ = v___x_3072_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_a_3070_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
return v___x_3075_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg___boxed(lean_object* v_n_3078_, lean_object* v_f_3079_, lean_object* v_xs_3080_, lean_object* v_k_3081_, lean_object* v_acc_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_){
_start:
{
lean_object* v_res_3086_; 
v_res_3086_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(v_n_3078_, v_f_3079_, v_xs_3080_, v_k_3081_, v_acc_3082_, v___y_3083_, v___y_3084_);
lean_dec_ref(v___y_3084_);
lean_dec_ref(v_xs_3080_);
lean_dec(v_n_3078_);
return v_res_3086_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(lean_object* v_upperBound_3087_, lean_object* v_fst_3088_, lean_object* v___x_3089_, lean_object* v_leanOpts_3090_, lean_object* v_a_3091_, lean_object* v_b_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_){
_start:
{
lean_object* v_fst_3097_; lean_object* v_snd_3098_; uint8_t v___x_3102_; 
v___x_3102_ = lean_nat_dec_lt(v_a_3091_, v_upperBound_3087_);
if (v___x_3102_ == 0)
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
lean_dec(v_a_3091_);
lean_dec_ref(v_leanOpts_3090_);
v___x_3103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3103_, 0, v_b_3092_);
lean_ctor_set(v___x_3103_, 1, v___y_3093_);
v___x_3104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3103_);
return v___x_3104_;
}
else
{
lean_object* v___x_3105_; lean_object* v___x_3106_; 
v___x_3105_ = lean_array_fget_borrowed(v_fst_3088_, v_a_3091_);
lean_inc(v___x_3105_);
v___x_3106_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v___x_3105_, v___y_3093_, v___y_3094_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v_a_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3160_; 
v_a_3107_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3109_ = v___x_3106_;
v_isShared_3110_ = v_isSharedCheck_3160_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_a_3107_);
lean_dec(v___x_3106_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3160_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v_snd_3111_; lean_object* v___x_3112_; lean_object* v_opts_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v_snd_3111_ = lean_ctor_get(v_a_3107_, 1);
lean_inc(v_snd_3111_);
lean_dec(v_a_3107_);
v___x_3112_ = lean_array_fget_borrowed(v___x_3089_, v_a_3091_);
v_opts_3113_ = lean_ctor_get(v___x_3112_, 4);
v___x_3114_ = lean_unsigned_to_nat(0u);
v___x_3115_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v_leanOpts_3090_);
lean_inc(v_opts_3113_);
lean_inc(v___x_3105_);
v___x_3116_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_b_3092_, v___x_3105_, v_opts_3113_, v_leanOpts_3090_, v___x_3102_, v___x_3115_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; lean_object* v_a_3118_; lean_object* v___x_3119_; uint8_t v___x_3120_; 
lean_del_object(v___x_3109_);
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
lean_inc(v_a_3117_);
v_a_3118_ = lean_ctor_get(v___x_3116_, 1);
lean_inc(v_a_3118_);
lean_dec_ref_known(v___x_3116_, 2);
v___x_3119_ = lean_array_get_size(v_a_3118_);
v___x_3120_ = lean_nat_dec_lt(v___x_3114_, v___x_3119_);
if (v___x_3120_ == 0)
{
lean_dec(v_a_3118_);
v_fst_3097_ = v_a_3117_;
v_snd_3098_ = v_snd_3111_;
goto v___jp_3096_;
}
else
{
lean_object* v___x_3121_; size_t v___x_3122_; size_t v___x_3123_; lean_object* v___x_3124_; 
v___x_3121_ = lean_box(0);
v___x_3122_ = ((size_t)0ULL);
v___x_3123_ = lean_usize_of_nat(v___x_3119_);
v___x_3124_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3118_, v___x_3122_, v___x_3123_, v___x_3121_, v___y_3094_);
lean_dec(v_a_3118_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_dec_ref_known(v___x_3124_, 1);
v_fst_3097_ = v_a_3117_;
v_snd_3098_ = v_snd_3111_;
goto v___jp_3096_;
}
else
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3132_; 
lean_dec(v_a_3117_);
lean_dec(v_snd_3111_);
lean_dec(v_a_3091_);
lean_dec_ref(v_leanOpts_3090_);
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3127_ = v___x_3124_;
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3124_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3132_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
lean_object* v___x_3130_; 
if (v_isShared_3128_ == 0)
{
v___x_3130_ = v___x_3127_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_a_3125_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; 
lean_dec(v_snd_3111_);
lean_dec(v_a_3091_);
lean_dec_ref(v_leanOpts_3090_);
v_a_3133_ = lean_ctor_get(v___x_3116_, 1);
lean_inc(v_a_3133_);
lean_dec_ref_known(v___x_3116_, 2);
v___x_3134_ = lean_array_get_size(v_a_3133_);
v___x_3135_ = lean_nat_dec_lt(v___x_3114_, v___x_3134_);
if (v___x_3135_ == 0)
{
lean_object* v___x_3136_; lean_object* v___x_3138_; 
lean_dec(v_a_3133_);
v___x_3136_ = lean_box(0);
if (v_isShared_3110_ == 0)
{
lean_ctor_set_tag(v___x_3109_, 1);
lean_ctor_set(v___x_3109_, 0, v___x_3136_);
v___x_3138_ = v___x_3109_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v___x_3136_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
else
{
lean_object* v___x_3140_; size_t v___x_3141_; size_t v___x_3142_; lean_object* v___x_3143_; 
lean_del_object(v___x_3109_);
v___x_3140_ = lean_box(0);
v___x_3141_ = ((size_t)0ULL);
v___x_3142_ = lean_usize_of_nat(v___x_3134_);
v___x_3143_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3133_, v___x_3141_, v___x_3142_, v___x_3140_, v___y_3094_);
lean_dec(v_a_3133_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3150_; 
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3150_ == 0)
{
lean_object* v_unused_3151_; 
v_unused_3151_ = lean_ctor_get(v___x_3143_, 0);
lean_dec(v_unused_3151_);
v___x_3145_ = v___x_3143_;
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
else
{
lean_dec(v___x_3143_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3148_; 
if (v_isShared_3146_ == 0)
{
lean_ctor_set_tag(v___x_3145_, 1);
lean_ctor_set(v___x_3145_, 0, v___x_3140_);
v___x_3148_ = v___x_3145_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v___x_3140_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
v_a_3152_ = lean_ctor_get(v___x_3143_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3143_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3143_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3168_; 
lean_dec_ref(v_b_3092_);
lean_dec(v_a_3091_);
lean_dec_ref(v_leanOpts_3090_);
v_a_3161_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3163_ = v___x_3106_;
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3106_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3166_; 
if (v_isShared_3164_ == 0)
{
v___x_3166_ = v___x_3163_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3161_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
}
v___jp_3096_:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3099_ = lean_unsigned_to_nat(1u);
v___x_3100_ = lean_nat_add(v_a_3091_, v___x_3099_);
lean_dec(v_a_3091_);
v_a_3091_ = v___x_3100_;
v_b_3092_ = v_fst_3097_;
v___y_3093_ = v_snd_3098_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg___boxed(lean_object* v_upperBound_3169_, lean_object* v_fst_3170_, lean_object* v___x_3171_, lean_object* v_leanOpts_3172_, lean_object* v_a_3173_, lean_object* v_b_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_){
_start:
{
lean_object* v_res_3178_; 
v_res_3178_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v_upperBound_3169_, v_fst_3170_, v___x_3171_, v_leanOpts_3172_, v_a_3173_, v_b_3174_, v___y_3175_, v___y_3176_);
lean_dec_ref(v___y_3176_);
lean_dec_ref(v___x_3171_);
lean_dec_ref(v_fst_3170_);
lean_dec(v_upperBound_3169_);
return v_res_3178_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0(lean_object* v___x_3179_, lean_object* v_x_3180_){
_start:
{
lean_object* v_baseName_3181_; lean_object* v_name_3182_; uint8_t v___x_3183_; 
v_baseName_3181_ = lean_ctor_get(v_x_3180_, 1);
v_name_3182_ = lean_ctor_get(v___x_3179_, 0);
v___x_3183_ = lean_name_eq(v_baseName_3181_, v_name_3182_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed(lean_object* v___x_3184_, lean_object* v_x_3185_){
_start:
{
uint8_t v_res_3186_; lean_object* v_r_3187_; 
v_res_3186_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0(v___x_3184_, v_x_3185_);
lean_dec_ref(v_x_3185_);
lean_dec_ref(v___x_3184_);
v_r_3187_ = lean_box(v_res_3186_);
return v_r_3187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___redArg(lean_object* v_pkg_3188_, lean_object* v_leanOpts_3189_, uint8_t v_reconfigure_3190_, lean_object* v_as_3191_, size_t v_i_3192_, size_t v_stop_3193_, lean_object* v_b_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_){
_start:
{
uint8_t v___x_3198_; 
v___x_3198_ = lean_usize_dec_eq(v_i_3192_, v_stop_3193_);
if (v___x_3198_ == 0)
{
lean_object* v_ws_3199_; lean_object* v_depIdxs_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3308_; 
v_ws_3199_ = lean_ctor_get(v_b_3194_, 0);
v_depIdxs_3200_ = lean_ctor_get(v_b_3194_, 1);
v_isSharedCheck_3308_ = !lean_is_exclusive(v_b_3194_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3202_ = v_b_3194_;
v_isShared_3203_ = v_isSharedCheck_3308_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_depIdxs_3200_);
lean_inc(v_ws_3199_);
lean_dec(v_b_3194_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3308_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v_packages_3204_; size_t v___x_3205_; size_t v___x_3206_; lean_object* v___x_3207_; lean_object* v___f_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v_packages_3204_ = lean_ctor_get(v_ws_3199_, 4);
v___x_3205_ = ((size_t)1ULL);
v___x_3206_ = lean_usize_sub(v_i_3192_, v___x_3205_);
v___x_3207_ = lean_array_uget_borrowed(v_as_3191_, v___x_3206_);
lean_inc(v___x_3207_);
v___f_3208_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3208_, 0, v___x_3207_);
v___x_3209_ = lean_unsigned_to_nat(0u);
v___x_3210_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_3208_, v_packages_3204_, v___x_3209_);
if (lean_obj_tag(v___x_3210_) == 1)
{
lean_object* v_val_3211_; lean_object* v___x_3212_; lean_object* v___x_3214_; 
v_val_3211_ = lean_ctor_get(v___x_3210_, 0);
lean_inc(v_val_3211_);
lean_dec_ref_known(v___x_3210_, 1);
v___x_3212_ = lean_array_push(v_depIdxs_3200_, v_val_3211_);
if (v_isShared_3203_ == 0)
{
lean_ctor_set(v___x_3202_, 1, v___x_3212_);
v___x_3214_ = v___x_3202_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v_ws_3199_);
lean_ctor_set(v_reuseFailAlloc_3216_, 1, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
v_i_3192_ = v___x_3206_;
v_b_3194_ = v___x_3214_;
goto _start;
}
}
else
{
lean_object* v_baseName_3217_; lean_object* v_name_3218_; lean_object* v_opts_3219_; lean_object* v_fst_3221_; lean_object* v_snd_3222_; uint8_t v___x_3273_; 
lean_dec(v___x_3210_);
v_baseName_3217_ = lean_ctor_get(v_pkg_3188_, 1);
v_name_3218_ = lean_ctor_get(v___x_3207_, 0);
v_opts_3219_ = lean_ctor_get(v___x_3207_, 4);
v___x_3273_ = lean_name_eq(v_baseName_3217_, v_name_3218_);
if (v___x_3273_ == 0)
{
lean_object* v___x_3274_; 
lean_inc(v___x_3207_);
lean_inc_ref(v_pkg_3188_);
lean_inc_ref(v_ws_3199_);
v___x_3274_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_3199_, v_pkg_3188_, v___x_3207_, v___y_3195_, v___y_3196_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_a_3275_; lean_object* v_fst_3276_; lean_object* v_snd_3277_; lean_object* v___x_3278_; 
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3275_);
lean_dec_ref_known(v___x_3274_, 1);
v_fst_3276_ = lean_ctor_get(v_a_3275_, 0);
lean_inc_n(v_fst_3276_, 2);
v_snd_3277_ = lean_ctor_get(v_a_3275_, 1);
lean_inc(v_snd_3277_);
lean_dec(v_a_3275_);
v___x_3278_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_fst_3276_, v_snd_3277_, v___y_3196_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; lean_object* v_snd_3280_; 
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3279_);
lean_dec_ref_known(v___x_3278_, 1);
v_snd_3280_ = lean_ctor_get(v_a_3279_, 1);
lean_inc(v_snd_3280_);
lean_dec(v_a_3279_);
v_fst_3221_ = v_fst_3276_;
v_snd_3222_ = v_snd_3280_;
goto v___jp_3220_;
}
else
{
lean_object* v_a_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3288_; 
lean_dec(v_fst_3276_);
lean_del_object(v___x_3202_);
lean_dec_ref(v_depIdxs_3200_);
lean_dec_ref(v_ws_3199_);
lean_dec_ref(v_leanOpts_3189_);
lean_dec_ref(v_pkg_3188_);
v_a_3281_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3288_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3283_ = v___x_3278_;
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_a_3281_);
lean_dec(v___x_3278_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___x_3286_; 
if (v_isShared_3284_ == 0)
{
v___x_3286_ = v___x_3283_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_a_3281_);
v___x_3286_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
return v___x_3286_;
}
}
}
}
else
{
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_a_3289_; lean_object* v_fst_3290_; lean_object* v_snd_3291_; 
v_a_3289_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3289_);
lean_dec_ref_known(v___x_3274_, 1);
v_fst_3290_ = lean_ctor_get(v_a_3289_, 0);
lean_inc(v_fst_3290_);
v_snd_3291_ = lean_ctor_get(v_a_3289_, 1);
lean_inc(v_snd_3291_);
lean_dec(v_a_3289_);
v_fst_3221_ = v_fst_3290_;
v_snd_3222_ = v_snd_3291_;
goto v___jp_3220_;
}
else
{
lean_object* v_a_3292_; lean_object* v___x_3294_; uint8_t v_isShared_3295_; uint8_t v_isSharedCheck_3299_; 
lean_del_object(v___x_3202_);
lean_dec_ref(v_depIdxs_3200_);
lean_dec_ref(v_ws_3199_);
lean_dec_ref(v_leanOpts_3189_);
lean_dec_ref(v_pkg_3188_);
v_a_3292_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3299_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3299_ == 0)
{
v___x_3294_ = v___x_3274_;
v_isShared_3295_ = v_isSharedCheck_3299_;
goto v_resetjp_3293_;
}
else
{
lean_inc(v_a_3292_);
lean_dec(v___x_3274_);
v___x_3294_ = lean_box(0);
v_isShared_3295_ = v_isSharedCheck_3299_;
goto v_resetjp_3293_;
}
v_resetjp_3293_:
{
lean_object* v___x_3297_; 
if (v_isShared_3295_ == 0)
{
v___x_3297_ = v___x_3294_;
goto v_reusejp_3296_;
}
else
{
lean_object* v_reuseFailAlloc_3298_; 
v_reuseFailAlloc_3298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3298_, 0, v_a_3292_);
v___x_3297_ = v_reuseFailAlloc_3298_;
goto v_reusejp_3296_;
}
v_reusejp_3296_:
{
return v___x_3297_;
}
}
}
}
}
else
{
lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; uint8_t v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
lean_inc(v_baseName_3217_);
lean_del_object(v___x_3202_);
lean_dec_ref(v_depIdxs_3200_);
lean_dec_ref(v_ws_3199_);
lean_dec(v___y_3195_);
lean_dec_ref(v_leanOpts_3189_);
lean_dec_ref(v_pkg_3188_);
v___x_3300_ = l_Lean_Name_toString(v_baseName_3217_, v___x_3198_);
v___x_3301_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_3302_ = lean_string_append(v___x_3300_, v___x_3301_);
v___x_3303_ = 3;
v___x_3304_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3304_, 0, v___x_3302_);
lean_ctor_set_uint8(v___x_3304_, sizeof(void*)*1, v___x_3303_);
lean_inc_ref(v___y_3196_);
v___x_3305_ = lean_apply_2(v___y_3196_, v___x_3304_, lean_box(0));
v___x_3306_ = lean_box(0);
v___x_3307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3306_);
return v___x_3307_;
}
v___jp_3220_:
{
lean_object* v___x_3223_; lean_object* v_wsIdx_3224_; lean_object* v___x_3225_; 
v___x_3223_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_3224_ = lean_array_get_size(v_packages_3204_);
lean_inc_ref(v_leanOpts_3189_);
lean_inc(v_opts_3219_);
v___x_3225_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_3199_, v_fst_3221_, v_opts_3219_, v_leanOpts_3189_, v_reconfigure_3190_, v___x_3223_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; lean_object* v_a_3227_; lean_object* v___x_3228_; lean_object* v___x_3230_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3226_);
v_a_3227_ = lean_ctor_get(v___x_3225_, 1);
lean_inc(v_a_3227_);
lean_dec_ref_known(v___x_3225_, 2);
v___x_3228_ = lean_array_push(v_depIdxs_3200_, v_wsIdx_3224_);
if (v_isShared_3203_ == 0)
{
lean_ctor_set(v___x_3202_, 1, v___x_3228_);
lean_ctor_set(v___x_3202_, 0, v_a_3226_);
v___x_3230_ = v___x_3202_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_a_3226_);
lean_ctor_set(v_reuseFailAlloc_3247_, 1, v___x_3228_);
v___x_3230_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
lean_object* v___x_3231_; uint8_t v___x_3232_; 
v___x_3231_ = lean_array_get_size(v_a_3227_);
v___x_3232_ = lean_nat_dec_lt(v___x_3209_, v___x_3231_);
if (v___x_3232_ == 0)
{
lean_dec(v_a_3227_);
v_i_3192_ = v___x_3206_;
v_b_3194_ = v___x_3230_;
v___y_3195_ = v_snd_3222_;
goto _start;
}
else
{
lean_object* v___x_3234_; size_t v___x_3235_; size_t v___x_3236_; lean_object* v___x_3237_; 
v___x_3234_ = lean_box(0);
v___x_3235_ = ((size_t)0ULL);
v___x_3236_ = lean_usize_of_nat(v___x_3231_);
v___x_3237_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3227_, v___x_3235_, v___x_3236_, v___x_3234_, v___y_3196_);
lean_dec(v_a_3227_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_dec_ref_known(v___x_3237_, 1);
v_i_3192_ = v___x_3206_;
v_b_3194_ = v___x_3230_;
v___y_3195_ = v_snd_3222_;
goto _start;
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3246_; 
lean_dec_ref(v___x_3230_);
lean_dec(v_snd_3222_);
lean_dec_ref(v_leanOpts_3189_);
lean_dec_ref(v_pkg_3188_);
v_a_3239_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3241_ = v___x_3237_;
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3237_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v___x_3244_; 
if (v_isShared_3242_ == 0)
{
v___x_3244_ = v___x_3241_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_a_3239_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
}
}
}
else
{
lean_object* v_a_3248_; lean_object* v___x_3249_; uint8_t v___x_3250_; 
lean_dec(v_snd_3222_);
lean_del_object(v___x_3202_);
lean_dec_ref(v_depIdxs_3200_);
lean_dec_ref(v_leanOpts_3189_);
lean_dec_ref(v_pkg_3188_);
v_a_3248_ = lean_ctor_get(v___x_3225_, 1);
lean_inc(v_a_3248_);
lean_dec_ref_known(v___x_3225_, 2);
v___x_3249_ = lean_array_get_size(v_a_3248_);
v___x_3250_ = lean_nat_dec_lt(v___x_3209_, v___x_3249_);
if (v___x_3250_ == 0)
{
lean_object* v___x_3251_; lean_object* v___x_3252_; 
lean_dec(v_a_3248_);
v___x_3251_ = lean_box(0);
v___x_3252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3251_);
return v___x_3252_;
}
else
{
lean_object* v___x_3253_; size_t v___x_3254_; size_t v___x_3255_; lean_object* v___x_3256_; 
v___x_3253_ = lean_box(0);
v___x_3254_ = ((size_t)0ULL);
v___x_3255_ = lean_usize_of_nat(v___x_3249_);
v___x_3256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3248_, v___x_3254_, v___x_3255_, v___x_3253_, v___y_3196_);
lean_dec(v_a_3248_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3263_; 
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3263_ == 0)
{
lean_object* v_unused_3264_; 
v_unused_3264_ = lean_ctor_get(v___x_3256_, 0);
lean_dec(v_unused_3264_);
v___x_3258_ = v___x_3256_;
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
else
{
lean_dec(v___x_3256_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3263_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
lean_object* v___x_3261_; 
if (v_isShared_3259_ == 0)
{
lean_ctor_set_tag(v___x_3258_, 1);
lean_ctor_set(v___x_3258_, 0, v___x_3253_);
v___x_3261_ = v___x_3258_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v___x_3253_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
return v___x_3261_;
}
}
}
else
{
lean_object* v_a_3265_; lean_object* v___x_3267_; uint8_t v_isShared_3268_; uint8_t v_isSharedCheck_3272_; 
v_a_3265_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3272_ == 0)
{
v___x_3267_ = v___x_3256_;
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
else
{
lean_inc(v_a_3265_);
lean_dec(v___x_3256_);
v___x_3267_ = lean_box(0);
v_isShared_3268_ = v_isSharedCheck_3272_;
goto v_resetjp_3266_;
}
v_resetjp_3266_:
{
lean_object* v___x_3270_; 
if (v_isShared_3268_ == 0)
{
v___x_3270_ = v___x_3267_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_a_3265_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
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
lean_object* v___x_3309_; lean_object* v___x_3310_; 
lean_dec_ref(v_leanOpts_3189_);
lean_dec_ref(v_pkg_3188_);
v___x_3309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3309_, 0, v_b_3194_);
lean_ctor_set(v___x_3309_, 1, v___y_3195_);
v___x_3310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3309_);
return v___x_3310_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_pkg_3311_, lean_object* v_leanOpts_3312_, lean_object* v_reconfigure_3313_, lean_object* v_as_3314_, lean_object* v_i_3315_, lean_object* v_stop_3316_, lean_object* v_b_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_){
_start:
{
uint8_t v_reconfigure_boxed_3321_; size_t v_i_boxed_3322_; size_t v_stop_boxed_3323_; lean_object* v_res_3324_; 
v_reconfigure_boxed_3321_ = lean_unbox(v_reconfigure_3313_);
v_i_boxed_3322_ = lean_unbox_usize(v_i_3315_);
lean_dec(v_i_3315_);
v_stop_boxed_3323_ = lean_unbox_usize(v_stop_3316_);
lean_dec(v_stop_3316_);
v_res_3324_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___redArg(v_pkg_3311_, v_leanOpts_3312_, v_reconfigure_boxed_3321_, v_as_3314_, v_i_boxed_3322_, v_stop_boxed_3323_, v_b_3317_, v___y_3318_, v___y_3319_);
lean_dec_ref(v___y_3319_);
lean_dec_ref(v_as_3314_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0(lean_object* v_start_3325_, lean_object* v_pkg_3326_, lean_object* v_leanOpts_3327_, uint8_t v_reconfigure_3328_, lean_object* v_as_3329_, size_t v_i_3330_, size_t v_stop_3331_, lean_object* v_b_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_){
_start:
{
uint8_t v___x_3336_; 
v___x_3336_ = lean_usize_dec_eq(v_i_3330_, v_stop_3331_);
if (v___x_3336_ == 0)
{
lean_object* v_ws_3337_; lean_object* v_depIdxs_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3446_; 
v_ws_3337_ = lean_ctor_get(v_b_3332_, 0);
v_depIdxs_3338_ = lean_ctor_get(v_b_3332_, 1);
v_isSharedCheck_3446_ = !lean_is_exclusive(v_b_3332_);
if (v_isSharedCheck_3446_ == 0)
{
v___x_3340_ = v_b_3332_;
v_isShared_3341_ = v_isSharedCheck_3446_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_depIdxs_3338_);
lean_inc(v_ws_3337_);
lean_dec(v_b_3332_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3446_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v_packages_3342_; size_t v___x_3343_; size_t v___x_3344_; lean_object* v___x_3345_; lean_object* v___f_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; 
v_packages_3342_ = lean_ctor_get(v_ws_3337_, 4);
v___x_3343_ = ((size_t)1ULL);
v___x_3344_ = lean_usize_sub(v_i_3330_, v___x_3343_);
v___x_3345_ = lean_array_uget_borrowed(v_as_3329_, v___x_3344_);
lean_inc(v___x_3345_);
v___f_3346_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3346_, 0, v___x_3345_);
v___x_3347_ = lean_unsigned_to_nat(0u);
v___x_3348_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_3346_, v_packages_3342_, v___x_3347_);
if (lean_obj_tag(v___x_3348_) == 1)
{
lean_object* v_val_3349_; lean_object* v___x_3350_; lean_object* v___x_3352_; 
v_val_3349_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_val_3349_);
lean_dec_ref_known(v___x_3348_, 1);
v___x_3350_ = lean_array_push(v_depIdxs_3338_, v_val_3349_);
if (v_isShared_3341_ == 0)
{
lean_ctor_set(v___x_3340_, 1, v___x_3350_);
v___x_3352_ = v___x_3340_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v_ws_3337_);
lean_ctor_set(v_reuseFailAlloc_3354_, 1, v___x_3350_);
v___x_3352_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
lean_object* v___x_3353_; 
v___x_3353_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___redArg(v_pkg_3326_, v_leanOpts_3327_, v_reconfigure_3328_, v_as_3329_, v___x_3344_, v_stop_3331_, v___x_3352_, v___y_3333_, v___y_3334_);
return v___x_3353_;
}
}
else
{
lean_object* v_baseName_3355_; lean_object* v_name_3356_; lean_object* v_opts_3357_; lean_object* v_fst_3359_; lean_object* v_snd_3360_; uint8_t v___x_3411_; 
lean_dec(v___x_3348_);
v_baseName_3355_ = lean_ctor_get(v_pkg_3326_, 1);
v_name_3356_ = lean_ctor_get(v___x_3345_, 0);
v_opts_3357_ = lean_ctor_get(v___x_3345_, 4);
v___x_3411_ = lean_name_eq(v_baseName_3355_, v_name_3356_);
if (v___x_3411_ == 0)
{
lean_object* v___x_3412_; 
lean_inc(v___x_3345_);
lean_inc_ref(v_pkg_3326_);
lean_inc_ref(v_ws_3337_);
v___x_3412_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_3337_, v_pkg_3326_, v___x_3345_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3412_) == 0)
{
lean_object* v_a_3413_; lean_object* v_fst_3414_; lean_object* v_snd_3415_; lean_object* v___x_3416_; 
v_a_3413_ = lean_ctor_get(v___x_3412_, 0);
lean_inc(v_a_3413_);
lean_dec_ref_known(v___x_3412_, 1);
v_fst_3414_ = lean_ctor_get(v_a_3413_, 0);
lean_inc_n(v_fst_3414_, 2);
v_snd_3415_ = lean_ctor_get(v_a_3413_, 1);
lean_inc(v_snd_3415_);
lean_dec(v_a_3413_);
v___x_3416_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_fst_3414_, v_snd_3415_, v___y_3334_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; lean_object* v_snd_3418_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___x_3416_, 1);
v_snd_3418_ = lean_ctor_get(v_a_3417_, 1);
lean_inc(v_snd_3418_);
lean_dec(v_a_3417_);
v_fst_3359_ = v_fst_3414_;
v_snd_3360_ = v_snd_3418_;
goto v___jp_3358_;
}
else
{
lean_object* v_a_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3426_; 
lean_dec(v_fst_3414_);
lean_del_object(v___x_3340_);
lean_dec_ref(v_depIdxs_3338_);
lean_dec_ref(v_ws_3337_);
lean_dec_ref(v_leanOpts_3327_);
lean_dec_ref(v_pkg_3326_);
v_a_3419_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3421_ = v___x_3416_;
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_a_3419_);
lean_dec(v___x_3416_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v___x_3424_; 
if (v_isShared_3422_ == 0)
{
v___x_3424_ = v___x_3421_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v_a_3419_);
v___x_3424_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
return v___x_3424_;
}
}
}
}
else
{
if (lean_obj_tag(v___x_3412_) == 0)
{
lean_object* v_a_3427_; lean_object* v_fst_3428_; lean_object* v_snd_3429_; 
v_a_3427_ = lean_ctor_get(v___x_3412_, 0);
lean_inc(v_a_3427_);
lean_dec_ref_known(v___x_3412_, 1);
v_fst_3428_ = lean_ctor_get(v_a_3427_, 0);
lean_inc(v_fst_3428_);
v_snd_3429_ = lean_ctor_get(v_a_3427_, 1);
lean_inc(v_snd_3429_);
lean_dec(v_a_3427_);
v_fst_3359_ = v_fst_3428_;
v_snd_3360_ = v_snd_3429_;
goto v___jp_3358_;
}
else
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3437_; 
lean_del_object(v___x_3340_);
lean_dec_ref(v_depIdxs_3338_);
lean_dec_ref(v_ws_3337_);
lean_dec_ref(v_leanOpts_3327_);
lean_dec_ref(v_pkg_3326_);
v_a_3430_ = lean_ctor_get(v___x_3412_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v___x_3412_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3432_ = v___x_3412_;
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3412_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v___x_3435_; 
if (v_isShared_3433_ == 0)
{
v___x_3435_ = v___x_3432_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_a_3430_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
return v___x_3435_;
}
}
}
}
}
else
{
lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; uint8_t v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
lean_inc(v_baseName_3355_);
lean_del_object(v___x_3340_);
lean_dec_ref(v_depIdxs_3338_);
lean_dec_ref(v_ws_3337_);
lean_dec(v___y_3333_);
lean_dec_ref(v_leanOpts_3327_);
lean_dec_ref(v_pkg_3326_);
v___x_3438_ = l_Lean_Name_toString(v_baseName_3355_, v___x_3336_);
v___x_3439_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_3440_ = lean_string_append(v___x_3438_, v___x_3439_);
v___x_3441_ = 3;
v___x_3442_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3442_, 0, v___x_3440_);
lean_ctor_set_uint8(v___x_3442_, sizeof(void*)*1, v___x_3441_);
lean_inc_ref(v___y_3334_);
v___x_3443_ = lean_apply_2(v___y_3334_, v___x_3442_, lean_box(0));
v___x_3444_ = lean_box(0);
v___x_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3444_);
return v___x_3445_;
}
v___jp_3358_:
{
lean_object* v___x_3361_; lean_object* v_wsIdx_3362_; lean_object* v___x_3363_; 
v___x_3361_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_3362_ = lean_array_get_size(v_packages_3342_);
lean_inc_ref(v_leanOpts_3327_);
lean_inc(v_opts_3357_);
v___x_3363_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_3337_, v_fst_3359_, v_opts_3357_, v_leanOpts_3327_, v_reconfigure_3328_, v___x_3361_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v_a_3364_; lean_object* v_a_3365_; lean_object* v___x_3366_; lean_object* v___x_3368_; 
v_a_3364_ = lean_ctor_get(v___x_3363_, 0);
lean_inc(v_a_3364_);
v_a_3365_ = lean_ctor_get(v___x_3363_, 1);
lean_inc(v_a_3365_);
lean_dec_ref_known(v___x_3363_, 2);
v___x_3366_ = lean_array_push(v_depIdxs_3338_, v_wsIdx_3362_);
if (v_isShared_3341_ == 0)
{
lean_ctor_set(v___x_3340_, 1, v___x_3366_);
lean_ctor_set(v___x_3340_, 0, v_a_3364_);
v___x_3368_ = v___x_3340_;
goto v_reusejp_3367_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_a_3364_);
lean_ctor_set(v_reuseFailAlloc_3385_, 1, v___x_3366_);
v___x_3368_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3367_;
}
v_reusejp_3367_:
{
lean_object* v___x_3369_; uint8_t v___x_3370_; 
v___x_3369_ = lean_array_get_size(v_a_3365_);
v___x_3370_ = lean_nat_dec_lt(v___x_3347_, v___x_3369_);
if (v___x_3370_ == 0)
{
lean_object* v___x_3371_; 
lean_dec(v_a_3365_);
v___x_3371_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___redArg(v_pkg_3326_, v_leanOpts_3327_, v_reconfigure_3328_, v_as_3329_, v___x_3344_, v_stop_3331_, v___x_3368_, v_snd_3360_, v___y_3334_);
return v___x_3371_;
}
else
{
lean_object* v___x_3372_; size_t v___x_3373_; size_t v___x_3374_; lean_object* v___x_3375_; 
v___x_3372_ = lean_box(0);
v___x_3373_ = ((size_t)0ULL);
v___x_3374_ = lean_usize_of_nat(v___x_3369_);
v___x_3375_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3365_, v___x_3373_, v___x_3374_, v___x_3372_, v___y_3334_);
lean_dec(v_a_3365_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v___x_3376_; 
lean_dec_ref_known(v___x_3375_, 1);
v___x_3376_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___redArg(v_pkg_3326_, v_leanOpts_3327_, v_reconfigure_3328_, v_as_3329_, v___x_3344_, v_stop_3331_, v___x_3368_, v_snd_3360_, v___y_3334_);
return v___x_3376_;
}
else
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3384_; 
lean_dec_ref(v___x_3368_);
lean_dec(v_snd_3360_);
lean_dec_ref(v_leanOpts_3327_);
lean_dec_ref(v_pkg_3326_);
v_a_3377_ = lean_ctor_get(v___x_3375_, 0);
v_isSharedCheck_3384_ = !lean_is_exclusive(v___x_3375_);
if (v_isSharedCheck_3384_ == 0)
{
v___x_3379_ = v___x_3375_;
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v___x_3375_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v___x_3382_; 
if (v_isShared_3380_ == 0)
{
v___x_3382_ = v___x_3379_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3383_; 
v_reuseFailAlloc_3383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3383_, 0, v_a_3377_);
v___x_3382_ = v_reuseFailAlloc_3383_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
return v___x_3382_;
}
}
}
}
}
}
else
{
lean_object* v_a_3386_; lean_object* v___x_3387_; uint8_t v___x_3388_; 
lean_dec(v_snd_3360_);
lean_del_object(v___x_3340_);
lean_dec_ref(v_depIdxs_3338_);
lean_dec_ref(v_leanOpts_3327_);
lean_dec_ref(v_pkg_3326_);
v_a_3386_ = lean_ctor_get(v___x_3363_, 1);
lean_inc(v_a_3386_);
lean_dec_ref_known(v___x_3363_, 2);
v___x_3387_ = lean_array_get_size(v_a_3386_);
v___x_3388_ = lean_nat_dec_lt(v___x_3347_, v___x_3387_);
if (v___x_3388_ == 0)
{
lean_object* v___x_3389_; lean_object* v___x_3390_; 
lean_dec(v_a_3386_);
v___x_3389_ = lean_box(0);
v___x_3390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3389_);
return v___x_3390_;
}
else
{
lean_object* v___x_3391_; size_t v___x_3392_; size_t v___x_3393_; lean_object* v___x_3394_; 
v___x_3391_ = lean_box(0);
v___x_3392_ = ((size_t)0ULL);
v___x_3393_ = lean_usize_of_nat(v___x_3387_);
v___x_3394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3386_, v___x_3392_, v___x_3393_, v___x_3391_, v___y_3334_);
lean_dec(v_a_3386_);
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
}
}
else
{
lean_object* v___x_3447_; lean_object* v___x_3448_; 
lean_dec_ref(v_leanOpts_3327_);
lean_dec_ref(v_pkg_3326_);
v___x_3447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3447_, 0, v_b_3332_);
lean_ctor_set(v___x_3447_, 1, v___y_3333_);
v___x_3448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3447_);
return v___x_3448_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___boxed(lean_object* v_start_3449_, lean_object* v_pkg_3450_, lean_object* v_leanOpts_3451_, lean_object* v_reconfigure_3452_, lean_object* v_as_3453_, lean_object* v_i_3454_, lean_object* v_stop_3455_, lean_object* v_b_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_){
_start:
{
uint8_t v_reconfigure_boxed_3460_; size_t v_i_boxed_3461_; size_t v_stop_boxed_3462_; lean_object* v_res_3463_; 
v_reconfigure_boxed_3460_ = lean_unbox(v_reconfigure_3452_);
v_i_boxed_3461_ = lean_unbox_usize(v_i_3454_);
lean_dec(v_i_3454_);
v_stop_boxed_3462_ = lean_unbox_usize(v_stop_3455_);
lean_dec(v_stop_3455_);
v_res_3463_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0(v_start_3449_, v_pkg_3450_, v_leanOpts_3451_, v_reconfigure_boxed_3460_, v_as_3453_, v_i_boxed_3461_, v_stop_boxed_3462_, v_b_3456_, v___y_3457_, v___y_3458_);
lean_dec_ref(v___y_3458_);
lean_dec_ref(v_as_3453_);
lean_dec(v_start_3449_);
return v_res_3463_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(lean_object* v_leanOpts_3464_, uint8_t v_reconfigure_3465_, lean_object* v_ws_3466_, lean_object* v_i_3467_, lean_object* v_next_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_){
_start:
{
lean_object* v_packages_3472_; lean_object* v_pkg_3473_; lean_object* v_ws_3475_; lean_object* v_depIdxs_3476_; lean_object* v___y_3477_; lean_object* v___y_3478_; lean_object* v_____x_3489_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v_depConfigs_3494_; lean_object* v_start_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v_s_3498_; lean_object* v___x_3499_; uint8_t v___x_3500_; 
v_packages_3472_ = lean_ctor_get(v_ws_3466_, 4);
v_pkg_3473_ = lean_array_fget(v_packages_3472_, v_i_3467_);
lean_dec(v_i_3467_);
v_depConfigs_3494_ = lean_ctor_get(v_pkg_3473_, 12);
v_start_3495_ = lean_array_get_size(v_packages_3472_);
v___x_3496_ = lean_array_get_size(v_depConfigs_3494_);
v___x_3497_ = lean_mk_empty_array_with_capacity(v___x_3496_);
lean_inc_ref(v___x_3497_);
lean_inc_ref(v_ws_3466_);
v_s_3498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_3498_, 0, v_ws_3466_);
lean_ctor_set(v_s_3498_, 1, v___x_3497_);
v___x_3499_ = lean_unsigned_to_nat(0u);
v___x_3500_ = lean_nat_dec_le(v___x_3496_, v___x_3496_);
if (v___x_3500_ == 0)
{
uint8_t v___x_3501_; 
v___x_3501_ = lean_nat_dec_lt(v___x_3499_, v___x_3496_);
if (v___x_3501_ == 0)
{
lean_object* v_ws_3502_; lean_object* v_packages_3503_; lean_object* v___x_3504_; uint8_t v___x_3505_; 
lean_dec_ref_known(v_s_3498_, 2);
v_ws_3502_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_3466_, v_pkg_3473_, v___x_3497_);
v_packages_3503_ = lean_ctor_get(v_ws_3502_, 4);
lean_inc_ref(v_packages_3503_);
v___x_3504_ = lean_array_get_size(v_packages_3503_);
lean_dec_ref(v_packages_3503_);
v___x_3505_ = lean_nat_dec_lt(v_next_3468_, v___x_3504_);
if (v___x_3505_ == 0)
{
lean_object* v___x_3506_; lean_object* v___x_3507_; 
lean_dec(v_next_3468_);
lean_dec_ref(v_leanOpts_3464_);
v___x_3506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3506_, 0, v_ws_3502_);
lean_ctor_set(v___x_3506_, 1, v___y_3469_);
v___x_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3506_);
return v___x_3507_;
}
else
{
lean_object* v___x_3508_; lean_object* v___x_3509_; 
v___x_3508_ = lean_unsigned_to_nat(1u);
v___x_3509_ = lean_nat_add(v_next_3468_, v___x_3508_);
v_ws_3466_ = v_ws_3502_;
v_i_3467_ = v_next_3468_;
v_next_3468_ = v___x_3509_;
goto _start;
}
}
else
{
size_t v___x_3511_; size_t v___x_3512_; lean_object* v___x_3513_; 
lean_dec_ref(v___x_3497_);
lean_dec_ref(v_ws_3466_);
v___x_3511_ = lean_usize_of_nat(v___x_3496_);
v___x_3512_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_3464_);
lean_inc(v_pkg_3473_);
v___x_3513_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0(v_start_3495_, v_pkg_3473_, v_leanOpts_3464_, v_reconfigure_3465_, v_depConfigs_3494_, v___x_3511_, v___x_3512_, v_s_3498_, v___y_3469_, v___y_3470_);
if (lean_obj_tag(v___x_3513_) == 0)
{
lean_object* v_a_3514_; lean_object* v_fst_3515_; lean_object* v_snd_3516_; 
v_a_3514_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_a_3514_);
lean_dec_ref_known(v___x_3513_, 1);
v_fst_3515_ = lean_ctor_get(v_a_3514_, 0);
lean_inc(v_fst_3515_);
v_snd_3516_ = lean_ctor_get(v_a_3514_, 1);
lean_inc(v_snd_3516_);
lean_dec(v_a_3514_);
v_____x_3489_ = v_fst_3515_;
v___y_3490_ = v_snd_3516_;
v___y_3491_ = v___y_3470_;
goto v___jp_3488_;
}
else
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3524_; 
lean_dec(v_pkg_3473_);
lean_dec(v_next_3468_);
lean_dec_ref(v_leanOpts_3464_);
v_a_3517_ = lean_ctor_get(v___x_3513_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3513_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3519_ = v___x_3513_;
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3513_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_a_3517_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
}
else
{
uint8_t v___x_3525_; 
v___x_3525_ = lean_nat_dec_lt(v___x_3499_, v___x_3496_);
if (v___x_3525_ == 0)
{
lean_dec_ref_known(v_s_3498_, 2);
v_ws_3475_ = v_ws_3466_;
v_depIdxs_3476_ = v___x_3497_;
v___y_3477_ = v___y_3469_;
v___y_3478_ = v___y_3470_;
goto v___jp_3474_;
}
else
{
size_t v___x_3526_; size_t v___x_3527_; lean_object* v___x_3528_; 
lean_dec_ref(v___x_3497_);
lean_dec_ref(v_ws_3466_);
v___x_3526_ = lean_usize_of_nat(v___x_3496_);
v___x_3527_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_3464_);
lean_inc(v_pkg_3473_);
v___x_3528_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0(v_start_3495_, v_pkg_3473_, v_leanOpts_3464_, v_reconfigure_3465_, v_depConfigs_3494_, v___x_3526_, v___x_3527_, v_s_3498_, v___y_3469_, v___y_3470_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v_fst_3530_; lean_object* v_snd_3531_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
lean_inc(v_a_3529_);
lean_dec_ref_known(v___x_3528_, 1);
v_fst_3530_ = lean_ctor_get(v_a_3529_, 0);
lean_inc(v_fst_3530_);
v_snd_3531_ = lean_ctor_get(v_a_3529_, 1);
lean_inc(v_snd_3531_);
lean_dec(v_a_3529_);
v_____x_3489_ = v_fst_3530_;
v___y_3490_ = v_snd_3531_;
v___y_3491_ = v___y_3470_;
goto v___jp_3488_;
}
else
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3539_; 
lean_dec(v_pkg_3473_);
lean_dec(v_next_3468_);
lean_dec_ref(v_leanOpts_3464_);
v_a_3532_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3534_ = v___x_3528_;
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3528_);
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
}
v___jp_3474_:
{
lean_object* v_ws_3479_; lean_object* v_packages_3480_; lean_object* v___x_3481_; uint8_t v___x_3482_; 
v_ws_3479_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_3475_, v_pkg_3473_, v_depIdxs_3476_);
v_packages_3480_ = lean_ctor_get(v_ws_3479_, 4);
lean_inc_ref(v_packages_3480_);
v___x_3481_ = lean_array_get_size(v_packages_3480_);
lean_dec_ref(v_packages_3480_);
v___x_3482_ = lean_nat_dec_lt(v_next_3468_, v___x_3481_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; lean_object* v___x_3484_; 
lean_dec(v_next_3468_);
lean_dec_ref(v_leanOpts_3464_);
v___x_3483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3483_, 0, v_ws_3479_);
lean_ctor_set(v___x_3483_, 1, v___y_3477_);
v___x_3484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3484_, 0, v___x_3483_);
return v___x_3484_;
}
else
{
lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3485_ = lean_unsigned_to_nat(1u);
v___x_3486_ = lean_nat_add(v_next_3468_, v___x_3485_);
v_ws_3466_ = v_ws_3479_;
v_i_3467_ = v_next_3468_;
v_next_3468_ = v___x_3486_;
v___y_3469_ = v___y_3477_;
v___y_3470_ = v___y_3478_;
goto _start;
}
}
v___jp_3488_:
{
lean_object* v_ws_3492_; lean_object* v_depIdxs_3493_; 
v_ws_3492_ = lean_ctor_get(v_____x_3489_, 0);
lean_inc_ref(v_ws_3492_);
v_depIdxs_3493_ = lean_ctor_get(v_____x_3489_, 1);
lean_inc_ref(v_depIdxs_3493_);
lean_dec_ref(v_____x_3489_);
v_ws_3475_ = v_ws_3492_;
v_depIdxs_3476_ = v_depIdxs_3493_;
v___y_3477_ = v___y_3490_;
v___y_3478_ = v___y_3491_;
goto v___jp_3474_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg___boxed(lean_object* v_leanOpts_3540_, lean_object* v_reconfigure_3541_, lean_object* v_ws_3542_, lean_object* v_i_3543_, lean_object* v_next_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_){
_start:
{
uint8_t v_reconfigure_boxed_3548_; lean_object* v_res_3549_; 
v_reconfigure_boxed_3548_ = lean_unbox(v_reconfigure_3541_);
v_res_3549_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(v_leanOpts_3540_, v_reconfigure_boxed_3548_, v_ws_3542_, v_i_3543_, v_next_3544_, v___y_3545_, v___y_3546_);
lean_dec_ref(v___y_3546_);
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(lean_object* v_ws_3552_, lean_object* v_toUpdate_3553_, lean_object* v_leanOpts_3554_, uint8_t v_updateToolchain_3555_, lean_object* v___y_3556_){
_start:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3558_ = lean_box(1);
v___x_3559_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest(v_ws_3552_, v_toUpdate_3553_, v___x_3558_, v___y_3556_);
if (lean_obj_tag(v___x_3559_) == 0)
{
lean_object* v_a_3560_; lean_object* v_snd_3561_; uint8_t v___x_3562_; 
v_a_3560_ = lean_ctor_get(v___x_3559_, 0);
lean_inc(v_a_3560_);
lean_dec_ref_known(v___x_3559_, 1);
v_snd_3561_ = lean_ctor_get(v_a_3560_, 1);
lean_inc(v_snd_3561_);
lean_dec(v_a_3560_);
v___x_3562_ = 1;
if (v_updateToolchain_3555_ == 0)
{
lean_object* v_packages_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v_wsIdx_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
v_packages_3563_ = lean_ctor_get(v_ws_3552_, 4);
v___x_3564_ = lean_unsigned_to_nat(0u);
v___x_3565_ = lean_array_fget_borrowed(v_packages_3563_, v___x_3564_);
v_wsIdx_3566_ = lean_ctor_get(v___x_3565_, 0);
lean_inc(v_wsIdx_3566_);
v___x_3567_ = lean_array_get_size(v_packages_3563_);
v___x_3568_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(v_leanOpts_3554_, v___x_3562_, v_ws_3552_, v_wsIdx_3566_, v___x_3567_, v_snd_3561_, v___y_3556_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3586_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3586_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3571_ = v___x_3568_;
v_isShared_3572_ = v_isSharedCheck_3586_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v___x_3568_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3586_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v_fst_3573_; lean_object* v_snd_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3585_; 
v_fst_3573_ = lean_ctor_get(v_a_3569_, 0);
v_snd_3574_ = lean_ctor_get(v_a_3569_, 1);
v_isSharedCheck_3585_ = !lean_is_exclusive(v_a_3569_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3576_ = v_a_3569_;
v_isShared_3577_ = v_isSharedCheck_3585_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_snd_3574_);
lean_inc(v_fst_3573_);
lean_dec(v_a_3569_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3585_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3578_; lean_object* v___x_3580_; 
v___x_3578_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_3573_);
if (v_isShared_3577_ == 0)
{
lean_ctor_set(v___x_3576_, 0, v___x_3578_);
v___x_3580_ = v___x_3576_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v___x_3578_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v_snd_3574_);
v___x_3580_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
lean_object* v___x_3582_; 
if (v_isShared_3572_ == 0)
{
lean_ctor_set(v___x_3571_, 0, v___x_3580_);
v___x_3582_ = v___x_3571_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v___x_3580_);
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
else
{
return v___x_3568_;
}
}
else
{
lean_object* v_packages_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v_depConfigs_3590_; lean_object* v___x_3591_; lean_object* v___f_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v_packages_3587_ = lean_ctor_get(v_ws_3552_, 4);
v___x_3588_ = lean_unsigned_to_nat(0u);
v___x_3589_ = lean_array_fget_borrowed(v_packages_3587_, v___x_3588_);
v_depConfigs_3590_ = lean_ctor_get(v___x_3589_, 12);
v___x_3591_ = lean_box(v_updateToolchain_3555_);
lean_inc_ref(v_ws_3552_);
lean_inc(v___x_3589_);
v___f_3592_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed), 7, 3);
lean_closure_set(v___f_3592_, 0, v___x_3589_);
lean_closure_set(v___f_3592_, 1, v___x_3591_);
lean_closure_set(v___f_3592_, 2, v_ws_3552_);
v___x_3593_ = lean_array_get_size(v_depConfigs_3590_);
lean_inc_ref(v_depConfigs_3590_);
v___x_3594_ = l_Array_reverse___redArg(v_depConfigs_3590_);
v___x_3595_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0));
v___x_3596_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(v___x_3593_, v___f_3592_, v___x_3594_, v___x_3588_, v___x_3595_, v_snd_3561_, v___y_3556_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v_a_3597_; lean_object* v_fst_3598_; lean_object* v_snd_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3671_; 
v_a_3597_ = lean_ctor_get(v___x_3596_, 0);
lean_inc(v_a_3597_);
lean_dec_ref_known(v___x_3596_, 1);
v_fst_3598_ = lean_ctor_get(v_a_3597_, 0);
v_snd_3599_ = lean_ctor_get(v_a_3597_, 1);
v_isSharedCheck_3671_ = !lean_is_exclusive(v_a_3597_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3601_ = v_a_3597_;
v_isShared_3602_ = v_isSharedCheck_3671_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_snd_3599_);
lean_inc(v_fst_3598_);
lean_dec(v_a_3597_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3671_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
lean_object* v___x_3603_; 
lean_inc_ref(v_ws_3552_);
v___x_3603_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(v_ws_3552_, v_fst_3598_, v___y_3556_);
if (lean_obj_tag(v___x_3603_) == 0)
{
lean_object* v___x_3604_; lean_object* v___x_3605_; 
lean_dec_ref_known(v___x_3603_, 1);
v___x_3604_ = lean_array_get_size(v_packages_3587_);
lean_inc_ref(v_leanOpts_3554_);
v___x_3605_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v___x_3593_, v_fst_3598_, v___x_3594_, v_leanOpts_3554_, v___x_3588_, v_ws_3552_, v_snd_3599_, v___y_3556_);
lean_dec_ref(v___x_3594_);
lean_dec(v_fst_3598_);
if (lean_obj_tag(v___x_3605_) == 0)
{
lean_object* v_a_3606_; lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3654_; 
v_a_3606_ = lean_ctor_get(v___x_3605_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v___x_3605_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3608_ = v___x_3605_;
v_isShared_3609_ = v_isSharedCheck_3654_;
goto v_resetjp_3607_;
}
else
{
lean_inc(v_a_3606_);
lean_dec(v___x_3605_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3654_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
lean_object* v_fst_3610_; lean_object* v_snd_3611_; lean_object* v___x_3613_; uint8_t v_isShared_3614_; uint8_t v_isSharedCheck_3653_; 
v_fst_3610_ = lean_ctor_get(v_a_3606_, 0);
v_snd_3611_ = lean_ctor_get(v_a_3606_, 1);
v_isSharedCheck_3653_ = !lean_is_exclusive(v_a_3606_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3613_ = v_a_3606_;
v_isShared_3614_ = v_isSharedCheck_3653_;
goto v_resetjp_3612_;
}
else
{
lean_inc(v_snd_3611_);
lean_inc(v_fst_3610_);
lean_dec(v_a_3606_);
v___x_3613_ = lean_box(0);
v_isShared_3614_ = v_isSharedCheck_3653_;
goto v_resetjp_3612_;
}
v_resetjp_3612_:
{
lean_object* v_packages_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3620_; 
v_packages_3615_ = lean_ctor_get(v_fst_3610_, 4);
v___x_3616_ = lean_array_get_size(v_packages_3615_);
v___x_3617_ = lean_array_fget(v_packages_3615_, v___x_3588_);
v___x_3618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3604_);
if (v_isShared_3602_ == 0)
{
lean_ctor_set(v___x_3601_, 1, v___x_3616_);
lean_ctor_set(v___x_3601_, 0, v___x_3618_);
v___x_3620_ = v___x_3601_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v___x_3618_);
lean_ctor_set(v_reuseFailAlloc_3652_, 1, v___x_3616_);
v___x_3620_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
lean_object* v___x_3621_; lean_object* v___x_3622_; uint8_t v___x_3623_; 
v___x_3621_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___redArg(v___x_3620_, v___x_3595_);
v___x_3622_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_fst_3610_, v___x_3617_, v___x_3621_);
v___x_3623_ = lean_nat_dec_eq(v___x_3604_, v___x_3616_);
if (v___x_3623_ == 0)
{
lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; 
lean_del_object(v___x_3613_);
lean_del_object(v___x_3608_);
v___x_3624_ = lean_unsigned_to_nat(1u);
v___x_3625_ = lean_nat_add(v___x_3604_, v___x_3624_);
v___x_3626_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(v_leanOpts_3554_, v___x_3562_, v___x_3622_, v___x_3604_, v___x_3625_, v_snd_3611_, v___y_3556_);
if (lean_obj_tag(v___x_3626_) == 0)
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3644_; 
v_a_3627_ = lean_ctor_get(v___x_3626_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3626_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3629_ = v___x_3626_;
v_isShared_3630_ = v_isSharedCheck_3644_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3626_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3644_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v_fst_3631_; lean_object* v_snd_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3643_; 
v_fst_3631_ = lean_ctor_get(v_a_3627_, 0);
v_snd_3632_ = lean_ctor_get(v_a_3627_, 1);
v_isSharedCheck_3643_ = !lean_is_exclusive(v_a_3627_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3634_ = v_a_3627_;
v_isShared_3635_ = v_isSharedCheck_3643_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_snd_3632_);
lean_inc(v_fst_3631_);
lean_dec(v_a_3627_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3643_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v___x_3636_; lean_object* v___x_3638_; 
v___x_3636_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_3631_);
if (v_isShared_3635_ == 0)
{
lean_ctor_set(v___x_3634_, 0, v___x_3636_);
v___x_3638_ = v___x_3634_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v___x_3636_);
lean_ctor_set(v_reuseFailAlloc_3642_, 1, v_snd_3632_);
v___x_3638_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
lean_object* v___x_3640_; 
if (v_isShared_3630_ == 0)
{
lean_ctor_set(v___x_3629_, 0, v___x_3638_);
v___x_3640_ = v___x_3629_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v___x_3638_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
}
else
{
return v___x_3626_;
}
}
else
{
lean_object* v___x_3645_; lean_object* v___x_3647_; 
lean_dec_ref(v_leanOpts_3554_);
v___x_3645_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v___x_3622_);
if (v_isShared_3614_ == 0)
{
lean_ctor_set(v___x_3613_, 0, v___x_3645_);
v___x_3647_ = v___x_3613_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v___x_3645_);
lean_ctor_set(v_reuseFailAlloc_3651_, 1, v_snd_3611_);
v___x_3647_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
lean_object* v___x_3649_; 
if (v_isShared_3609_ == 0)
{
lean_ctor_set(v___x_3608_, 0, v___x_3647_);
v___x_3649_ = v___x_3608_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v___x_3647_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
lean_del_object(v___x_3601_);
lean_dec_ref(v_leanOpts_3554_);
v_a_3655_ = lean_ctor_get(v___x_3605_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3605_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3605_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3605_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3670_; 
lean_del_object(v___x_3601_);
lean_dec(v_snd_3599_);
lean_dec(v_fst_3598_);
lean_dec_ref(v___x_3594_);
lean_dec_ref(v_leanOpts_3554_);
lean_dec_ref(v_ws_3552_);
v_a_3663_ = lean_ctor_get(v___x_3603_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3603_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3665_ = v___x_3603_;
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3603_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3668_; 
if (v_isShared_3666_ == 0)
{
v___x_3668_ = v___x_3665_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_a_3663_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
}
}
else
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3679_; 
lean_dec_ref(v___x_3594_);
lean_dec_ref(v_leanOpts_3554_);
lean_dec_ref(v_ws_3552_);
v_a_3672_ = lean_ctor_get(v___x_3596_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v___x_3596_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3674_ = v___x_3596_;
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3596_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_a_3672_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
}
}
else
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3687_; 
lean_dec_ref(v_leanOpts_3554_);
lean_dec_ref(v_ws_3552_);
v_a_3680_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3682_ = v___x_3559_;
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v___x_3559_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3685_; 
if (v_isShared_3683_ == 0)
{
v___x_3685_ = v___x_3682_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v_a_3680_);
v___x_3685_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
return v___x_3685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___boxed(lean_object* v_ws_3688_, lean_object* v_toUpdate_3689_, lean_object* v_leanOpts_3690_, lean_object* v_updateToolchain_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_){
_start:
{
uint8_t v_updateToolchain_boxed_3694_; lean_object* v_res_3695_; 
v_updateToolchain_boxed_3694_ = lean_unbox(v_updateToolchain_3691_);
v_res_3695_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(v_ws_3688_, v_toUpdate_3689_, v_leanOpts_3690_, v_updateToolchain_boxed_3694_, v___y_3692_);
lean_dec_ref(v___y_3692_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0(lean_object* v_leanOpts_3696_, uint8_t v_reconfigure_3697_, lean_object* v_ws_3698_, lean_object* v_i_3699_, lean_object* v_i__lt_3700_, lean_object* v_next_3701_, lean_object* v_lt__next_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_){
_start:
{
lean_object* v___x_3706_; 
v___x_3706_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___redArg(v_leanOpts_3696_, v_reconfigure_3697_, v_ws_3698_, v_i_3699_, v_next_3701_, v___y_3703_, v___y_3704_);
return v___x_3706_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0___boxed(lean_object* v_leanOpts_3707_, lean_object* v_reconfigure_3708_, lean_object* v_ws_3709_, lean_object* v_i_3710_, lean_object* v_i__lt_3711_, lean_object* v_next_3712_, lean_object* v_lt__next_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_){
_start:
{
uint8_t v_reconfigure_boxed_3717_; lean_object* v_res_3718_; 
v_reconfigure_boxed_3717_ = lean_unbox(v_reconfigure_3708_);
v_res_3718_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0(v_leanOpts_3707_, v_reconfigure_boxed_3717_, v_ws_3709_, v_i_3710_, v_i__lt_3711_, v_next_3712_, v_lt__next_3713_, v___y_3714_, v___y_3715_);
lean_dec_ref(v___y_3715_);
return v_res_3718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2(lean_object* v_00_u03b1_3719_, lean_object* v_00_u03b2_3720_, lean_object* v_n_3721_, lean_object* v_f_3722_, lean_object* v_xs_3723_, lean_object* v_k_3724_, lean_object* v_h_3725_, lean_object* v_acc_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_){
_start:
{
lean_object* v___x_3730_; 
v___x_3730_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___redArg(v_n_3721_, v_f_3722_, v_xs_3723_, v_k_3724_, v_acc_3726_, v___y_3727_, v___y_3728_);
return v___x_3730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2___boxed(lean_object* v_00_u03b1_3731_, lean_object* v_00_u03b2_3732_, lean_object* v_n_3733_, lean_object* v_f_3734_, lean_object* v_xs_3735_, lean_object* v_k_3736_, lean_object* v_h_3737_, lean_object* v_acc_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__2(v_00_u03b1_3731_, v_00_u03b2_3732_, v_n_3733_, v_f_3734_, v_xs_3735_, v_k_3736_, v_h_3737_, v_acc_3738_, v___y_3739_, v___y_3740_);
lean_dec_ref(v___y_3740_);
lean_dec_ref(v_xs_3735_);
lean_dec(v_n_3733_);
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(lean_object* v_inst_3743_, lean_object* v_R_3744_, lean_object* v_a_3745_, lean_object* v_b_3746_){
_start:
{
lean_object* v___x_3747_; 
v___x_3747_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___redArg(v_a_3745_, v_b_3746_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(lean_object* v_upperBound_3748_, lean_object* v_fst_3749_, lean_object* v___x_3750_, lean_object* v_leanOpts_3751_, lean_object* v_inst_3752_, lean_object* v_R_3753_, lean_object* v_a_3754_, lean_object* v_b_3755_, lean_object* v_c_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_){
_start:
{
lean_object* v___x_3760_; 
v___x_3760_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v_upperBound_3748_, v_fst_3749_, v___x_3750_, v_leanOpts_3751_, v_a_3754_, v_b_3755_, v___y_3757_, v___y_3758_);
return v___x_3760_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___boxed(lean_object* v_upperBound_3761_, lean_object* v_fst_3762_, lean_object* v___x_3763_, lean_object* v_leanOpts_3764_, lean_object* v_inst_3765_, lean_object* v_R_3766_, lean_object* v_a_3767_, lean_object* v_b_3768_, lean_object* v_c_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(v_upperBound_3761_, v_fst_3762_, v___x_3763_, v_leanOpts_3764_, v_inst_3765_, v_R_3766_, v_a_3767_, v_b_3768_, v_c_3769_, v___y_3770_, v___y_3771_);
lean_dec_ref(v___y_3771_);
lean_dec_ref(v___x_3763_);
lean_dec_ref(v_fst_3762_);
lean_dec(v_upperBound_3761_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_3774_, lean_object* v_msg_3775_){
_start:
{
lean_object* v___x_3776_; 
v___x_3776_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2_spec__4___redArg(v_msg_3775_);
return v___x_3776_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2(lean_object* v_00_u03b2_3777_, lean_object* v_k_3778_, lean_object* v_v_3779_, lean_object* v_t_3780_){
_start:
{
lean_object* v___x_3781_; 
v___x_3781_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__1_spec__2___redArg(v_k_3778_, v_v_3779_, v_t_3780_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1(lean_object* v_start_3782_, lean_object* v_pkg_3783_, lean_object* v_leanOpts_3784_, uint8_t v_reconfigure_3785_, lean_object* v_as_3786_, size_t v_i_3787_, size_t v_stop_3788_, lean_object* v_b_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___redArg(v_pkg_3783_, v_leanOpts_3784_, v_reconfigure_3785_, v_as_3786_, v_i_3787_, v_stop_3788_, v_b_3789_, v___y_3790_, v___y_3791_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1___boxed(lean_object* v_start_3794_, lean_object* v_pkg_3795_, lean_object* v_leanOpts_3796_, lean_object* v_reconfigure_3797_, lean_object* v_as_3798_, lean_object* v_i_3799_, lean_object* v_stop_3800_, lean_object* v_b_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_){
_start:
{
uint8_t v_reconfigure_boxed_3805_; size_t v_i_boxed_3806_; size_t v_stop_boxed_3807_; lean_object* v_res_3808_; 
v_reconfigure_boxed_3805_ = lean_unbox(v_reconfigure_3797_);
v_i_boxed_3806_ = lean_unbox_usize(v_i_3799_);
lean_dec(v_i_3799_);
v_stop_boxed_3807_ = lean_unbox_usize(v_stop_3800_);
lean_dec(v_stop_3800_);
v_res_3808_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0_spec__1(v_start_3794_, v_pkg_3795_, v_leanOpts_3796_, v_reconfigure_boxed_3805_, v_as_3798_, v_i_boxed_3806_, v_stop_boxed_3807_, v_b_3801_, v___y_3802_, v___y_3803_);
lean_dec_ref(v___y_3803_);
lean_dec_ref(v_as_3798_);
lean_dec(v_start_3794_);
return v_res_3808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(lean_object* v_entries_3809_, lean_object* v_as_3810_, size_t v_i_3811_, size_t v_stop_3812_, lean_object* v_b_3813_){
_start:
{
lean_object* v___y_3815_; uint8_t v___x_3819_; 
v___x_3819_ = lean_usize_dec_eq(v_i_3811_, v_stop_3812_);
if (v___x_3819_ == 0)
{
lean_object* v___x_3820_; lean_object* v_baseName_3821_; lean_object* v_relConfigFile_3822_; lean_object* v_relManifestFile_3823_; lean_object* v___x_3824_; 
v___x_3820_ = lean_array_uget_borrowed(v_as_3810_, v_i_3811_);
v_baseName_3821_ = lean_ctor_get(v___x_3820_, 1);
v_relConfigFile_3822_ = lean_ctor_get(v___x_3820_, 8);
v_relManifestFile_3823_ = lean_ctor_get(v___x_3820_, 9);
v___x_3824_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_entries_3809_, v_baseName_3821_);
if (lean_obj_tag(v___x_3824_) == 0)
{
v___y_3815_ = v_b_3813_;
goto v___jp_3814_;
}
else
{
lean_object* v_val_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3846_; 
v_val_3825_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3827_ = v___x_3824_;
v_isShared_3828_ = v_isSharedCheck_3846_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_val_3825_);
lean_dec(v___x_3824_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3846_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v_name_3829_; lean_object* v_scope_3830_; uint8_t v_inherited_3831_; lean_object* v_src_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3843_; 
v_name_3829_ = lean_ctor_get(v_val_3825_, 0);
v_scope_3830_ = lean_ctor_get(v_val_3825_, 1);
v_inherited_3831_ = lean_ctor_get_uint8(v_val_3825_, sizeof(void*)*5);
v_src_3832_ = lean_ctor_get(v_val_3825_, 4);
v_isSharedCheck_3843_ = !lean_is_exclusive(v_val_3825_);
if (v_isSharedCheck_3843_ == 0)
{
lean_object* v_unused_3844_; lean_object* v_unused_3845_; 
v_unused_3844_ = lean_ctor_get(v_val_3825_, 3);
lean_dec(v_unused_3844_);
v_unused_3845_ = lean_ctor_get(v_val_3825_, 2);
lean_dec(v_unused_3845_);
v___x_3834_ = v_val_3825_;
v_isShared_3835_ = v_isSharedCheck_3843_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_src_3832_);
lean_inc(v_scope_3830_);
lean_inc(v_name_3829_);
lean_dec(v_val_3825_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3843_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___x_3837_; 
lean_inc_ref(v_relManifestFile_3823_);
if (v_isShared_3828_ == 0)
{
lean_ctor_set(v___x_3827_, 0, v_relManifestFile_3823_);
v___x_3837_ = v___x_3827_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_relManifestFile_3823_);
v___x_3837_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
lean_object* v___x_3839_; 
lean_inc_ref(v_relConfigFile_3822_);
if (v_isShared_3835_ == 0)
{
lean_ctor_set(v___x_3834_, 3, v___x_3837_);
lean_ctor_set(v___x_3834_, 2, v_relConfigFile_3822_);
v___x_3839_ = v___x_3834_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v_name_3829_);
lean_ctor_set(v_reuseFailAlloc_3841_, 1, v_scope_3830_);
lean_ctor_set(v_reuseFailAlloc_3841_, 2, v_relConfigFile_3822_);
lean_ctor_set(v_reuseFailAlloc_3841_, 3, v___x_3837_);
lean_ctor_set(v_reuseFailAlloc_3841_, 4, v_src_3832_);
lean_ctor_set_uint8(v_reuseFailAlloc_3841_, sizeof(void*)*5, v_inherited_3831_);
v___x_3839_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
lean_object* v___x_3840_; 
v___x_3840_ = lean_array_push(v_b_3813_, v___x_3839_);
v___y_3815_ = v___x_3840_;
goto v___jp_3814_;
}
}
}
}
}
}
else
{
return v_b_3813_;
}
v___jp_3814_:
{
size_t v___x_3816_; size_t v___x_3817_; 
v___x_3816_ = ((size_t)1ULL);
v___x_3817_ = lean_usize_add(v_i_3811_, v___x_3816_);
v_i_3811_ = v___x_3817_;
v_b_3813_ = v___y_3815_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0___boxed(lean_object* v_entries_3847_, lean_object* v_as_3848_, lean_object* v_i_3849_, lean_object* v_stop_3850_, lean_object* v_b_3851_){
_start:
{
size_t v_i_boxed_3852_; size_t v_stop_boxed_3853_; lean_object* v_res_3854_; 
v_i_boxed_3852_ = lean_unbox_usize(v_i_3849_);
lean_dec(v_i_3849_);
v_stop_boxed_3853_ = lean_unbox_usize(v_stop_3850_);
lean_dec(v_stop_3850_);
v_res_3854_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_3847_, v_as_3848_, v_i_boxed_3852_, v_stop_boxed_3853_, v_b_3851_);
lean_dec_ref(v_as_3848_);
lean_dec(v_entries_3847_);
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(lean_object* v_ws_3855_, lean_object* v_entries_3856_){
_start:
{
lean_object* v_packages_3858_; lean_object* v___y_3860_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; uint8_t v___x_3878_; 
v_packages_3858_ = lean_ctor_get(v_ws_3855_, 4);
v___x_3875_ = lean_unsigned_to_nat(0u);
v___x_3876_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_3877_ = lean_array_get_size(v_packages_3858_);
v___x_3878_ = lean_nat_dec_lt(v___x_3875_, v___x_3877_);
if (v___x_3878_ == 0)
{
v___y_3860_ = v___x_3876_;
goto v___jp_3859_;
}
else
{
uint8_t v___x_3879_; 
v___x_3879_ = lean_nat_dec_le(v___x_3877_, v___x_3877_);
if (v___x_3879_ == 0)
{
if (v___x_3878_ == 0)
{
v___y_3860_ = v___x_3876_;
goto v___jp_3859_;
}
else
{
size_t v___x_3880_; size_t v___x_3881_; lean_object* v___x_3882_; 
v___x_3880_ = ((size_t)0ULL);
v___x_3881_ = lean_usize_of_nat(v___x_3877_);
v___x_3882_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_3856_, v_packages_3858_, v___x_3880_, v___x_3881_, v___x_3876_);
v___y_3860_ = v___x_3882_;
goto v___jp_3859_;
}
}
else
{
size_t v___x_3883_; size_t v___x_3884_; lean_object* v___x_3885_; 
v___x_3883_ = ((size_t)0ULL);
v___x_3884_ = lean_usize_of_nat(v___x_3877_);
v___x_3885_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_3856_, v_packages_3858_, v___x_3883_, v___x_3884_, v___x_3876_);
v___y_3860_ = v___x_3885_;
goto v___jp_3859_;
}
}
v___jp_3859_:
{
lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v_config_3863_; lean_object* v_baseName_3864_; lean_object* v_dir_3865_; lean_object* v_relManifestFile_3866_; lean_object* v_toWorkspaceConfig_3867_; uint8_t v_fixedToolchain_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v_manifest_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3861_ = lean_unsigned_to_nat(0u);
v___x_3862_ = lean_array_fget_borrowed(v_packages_3858_, v___x_3861_);
v_config_3863_ = lean_ctor_get(v___x_3862_, 6);
v_baseName_3864_ = lean_ctor_get(v___x_3862_, 1);
v_dir_3865_ = lean_ctor_get(v___x_3862_, 4);
v_relManifestFile_3866_ = lean_ctor_get(v___x_3862_, 9);
v_toWorkspaceConfig_3867_ = lean_ctor_get(v_config_3863_, 0);
v_fixedToolchain_3868_ = lean_ctor_get_uint8(v_config_3863_, sizeof(void*)*28 + 6);
v___x_3869_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_toWorkspaceConfig_3867_);
v___x_3870_ = l_System_FilePath_normalize(v_toWorkspaceConfig_3867_);
v___x_3871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3871_, 0, v___x_3870_);
lean_inc(v_baseName_3864_);
v_manifest_3872_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_manifest_3872_, 0, v_baseName_3864_);
lean_ctor_set(v_manifest_3872_, 1, v___x_3869_);
lean_ctor_set(v_manifest_3872_, 2, v___x_3871_);
lean_ctor_set(v_manifest_3872_, 3, v___y_3860_);
lean_ctor_set_uint8(v_manifest_3872_, sizeof(void*)*4, v_fixedToolchain_3868_);
lean_inc_ref(v_relManifestFile_3866_);
lean_inc_ref(v_dir_3865_);
v___x_3873_ = l_Lake_joinRelative(v_dir_3865_, v_relManifestFile_3866_);
v___x_3874_ = l_Lake_Manifest_save(v_manifest_3872_, v___x_3873_);
lean_dec_ref(v___x_3873_);
return v___x_3874_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest___boxed(lean_object* v_ws_3886_, lean_object* v_entries_3887_, lean_object* v___y_3888_){
_start:
{
lean_object* v_res_3889_; 
v_res_3889_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(v_ws_3886_, v_entries_3887_);
lean_dec(v_entries_3887_);
lean_dec_ref(v_ws_3886_);
return v_res_3889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(lean_object* v_pkg_3890_, lean_object* v_as_3891_, size_t v_i_3892_, size_t v_stop_3893_, lean_object* v_b_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_){
_start:
{
lean_object* v_a_3899_; lean_object* v___y_3904_; uint8_t v___x_3906_; 
v___x_3906_ = lean_usize_dec_eq(v_i_3892_, v_stop_3893_);
if (v___x_3906_ == 0)
{
lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_8972__overap_3909_; lean_object* v___x_3910_; 
v___x_3907_ = lean_unsigned_to_nat(0u);
v___x_3908_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_8972__overap_3909_ = lean_array_uget_borrowed(v_as_3891_, v_i_3892_);
lean_inc(v___x_8972__overap_3909_);
lean_inc(v___y_3895_);
lean_inc_ref(v_pkg_3890_);
v___x_3910_ = lean_apply_4(v___x_8972__overap_3909_, v_pkg_3890_, v___y_3895_, v___x_3908_, lean_box(0));
if (lean_obj_tag(v___x_3910_) == 0)
{
lean_object* v_a_3911_; lean_object* v_a_3912_; lean_object* v___x_3913_; uint8_t v___x_3914_; 
v_a_3911_ = lean_ctor_get(v___x_3910_, 0);
lean_inc(v_a_3911_);
v_a_3912_ = lean_ctor_get(v___x_3910_, 1);
lean_inc(v_a_3912_);
lean_dec_ref_known(v___x_3910_, 2);
v___x_3913_ = lean_array_get_size(v_a_3912_);
v___x_3914_ = lean_nat_dec_lt(v___x_3907_, v___x_3913_);
if (v___x_3914_ == 0)
{
lean_dec(v_a_3912_);
v_a_3899_ = v_a_3911_;
goto v___jp_3898_;
}
else
{
lean_object* v___x_3915_; size_t v___x_3916_; size_t v___x_3917_; lean_object* v___x_3918_; 
v___x_3915_ = lean_box(0);
v___x_3916_ = ((size_t)0ULL);
v___x_3917_ = lean_usize_of_nat(v___x_3913_);
v___x_3918_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3912_, v___x_3916_, v___x_3917_, v___x_3915_, v___y_3896_);
lean_dec(v_a_3912_);
if (lean_obj_tag(v___x_3918_) == 0)
{
lean_dec_ref_known(v___x_3918_, 1);
v_a_3899_ = v_a_3911_;
goto v___jp_3898_;
}
else
{
lean_dec(v_a_3911_);
v___y_3904_ = v___x_3918_;
goto v___jp_3903_;
}
}
}
else
{
lean_object* v_a_3919_; lean_object* v___x_3920_; uint8_t v___x_3921_; 
v_a_3919_ = lean_ctor_get(v___x_3910_, 1);
lean_inc(v_a_3919_);
lean_dec_ref_known(v___x_3910_, 2);
v___x_3920_ = lean_array_get_size(v_a_3919_);
v___x_3921_ = lean_nat_dec_lt(v___x_3907_, v___x_3920_);
if (v___x_3921_ == 0)
{
lean_object* v___x_3922_; lean_object* v___x_3923_; 
lean_dec(v_a_3919_);
lean_dec_ref(v_pkg_3890_);
v___x_3922_ = lean_box(0);
v___x_3923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3923_, 0, v___x_3922_);
return v___x_3923_;
}
else
{
lean_object* v___x_3924_; size_t v___x_3925_; size_t v___x_3926_; lean_object* v___x_3927_; 
v___x_3924_ = lean_box(0);
v___x_3925_ = ((size_t)0ULL);
v___x_3926_ = lean_usize_of_nat(v___x_3920_);
v___x_3927_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3919_, v___x_3925_, v___x_3926_, v___x_3924_, v___y_3896_);
lean_dec(v_a_3919_);
if (lean_obj_tag(v___x_3927_) == 0)
{
lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3934_; 
lean_dec_ref(v_pkg_3890_);
v_isSharedCheck_3934_ = !lean_is_exclusive(v___x_3927_);
if (v_isSharedCheck_3934_ == 0)
{
lean_object* v_unused_3935_; 
v_unused_3935_ = lean_ctor_get(v___x_3927_, 0);
lean_dec(v_unused_3935_);
v___x_3929_ = v___x_3927_;
v_isShared_3930_ = v_isSharedCheck_3934_;
goto v_resetjp_3928_;
}
else
{
lean_dec(v___x_3927_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3934_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
lean_object* v___x_3932_; 
if (v_isShared_3930_ == 0)
{
lean_ctor_set_tag(v___x_3929_, 1);
lean_ctor_set(v___x_3929_, 0, v___x_3924_);
v___x_3932_ = v___x_3929_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v___x_3924_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
}
else
{
v___y_3904_ = v___x_3927_;
goto v___jp_3903_;
}
}
}
}
else
{
lean_object* v___x_3936_; 
lean_dec_ref(v_pkg_3890_);
v___x_3936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3936_, 0, v_b_3894_);
return v___x_3936_;
}
v___jp_3898_:
{
size_t v___x_3900_; size_t v___x_3901_; 
v___x_3900_ = ((size_t)1ULL);
v___x_3901_ = lean_usize_add(v_i_3892_, v___x_3900_);
v_i_3892_ = v___x_3901_;
v_b_3894_ = v_a_3899_;
goto _start;
}
v___jp_3903_:
{
if (lean_obj_tag(v___y_3904_) == 0)
{
lean_object* v_a_3905_; 
v_a_3905_ = lean_ctor_get(v___y_3904_, 0);
lean_inc(v_a_3905_);
lean_dec_ref_known(v___y_3904_, 1);
v_a_3899_ = v_a_3905_;
goto v___jp_3898_;
}
else
{
lean_dec_ref(v_pkg_3890_);
return v___y_3904_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0___boxed(lean_object* v_pkg_3937_, lean_object* v_as_3938_, lean_object* v_i_3939_, lean_object* v_stop_3940_, lean_object* v_b_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_){
_start:
{
size_t v_i_boxed_3945_; size_t v_stop_boxed_3946_; lean_object* v_res_3947_; 
v_i_boxed_3945_ = lean_unbox_usize(v_i_3939_);
lean_dec(v_i_3939_);
v_stop_boxed_3946_ = lean_unbox_usize(v_stop_3940_);
lean_dec(v_stop_3940_);
v_res_3947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_3937_, v_as_3938_, v_i_boxed_3945_, v_stop_boxed_3946_, v_b_3941_, v___y_3942_, v___y_3943_);
lean_dec_ref(v___y_3943_);
lean_dec(v___y_3942_);
lean_dec_ref(v_as_3938_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(lean_object* v_pkg_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_){
_start:
{
lean_object* v_baseName_3953_; lean_object* v_postUpdateHooks_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; uint8_t v___x_3957_; 
v_baseName_3953_ = lean_ctor_get(v_pkg_3949_, 1);
v_postUpdateHooks_3954_ = lean_ctor_get(v_pkg_3949_, 20);
lean_inc_ref(v_postUpdateHooks_3954_);
v___x_3955_ = lean_array_get_size(v_postUpdateHooks_3954_);
v___x_3956_ = lean_unsigned_to_nat(0u);
v___x_3957_ = lean_nat_dec_eq(v___x_3955_, v___x_3956_);
if (v___x_3957_ == 0)
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; uint8_t v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; uint8_t v___x_3965_; 
lean_inc(v_baseName_3953_);
v___x_3958_ = l_Lean_Name_toString(v_baseName_3953_, v___x_3957_);
v___x_3959_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0));
v___x_3960_ = lean_string_append(v___x_3958_, v___x_3959_);
v___x_3961_ = 1;
v___x_3962_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3962_, 0, v___x_3960_);
lean_ctor_set_uint8(v___x_3962_, sizeof(void*)*1, v___x_3961_);
lean_inc_ref(v___y_3951_);
v___x_3963_ = lean_apply_2(v___y_3951_, v___x_3962_, lean_box(0));
v___x_3964_ = lean_box(0);
v___x_3965_ = lean_nat_dec_lt(v___x_3956_, v___x_3955_);
if (v___x_3965_ == 0)
{
lean_object* v___x_3966_; 
lean_dec_ref(v_postUpdateHooks_3954_);
lean_dec_ref(v_pkg_3949_);
v___x_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3964_);
return v___x_3966_;
}
else
{
uint8_t v___x_3967_; 
v___x_3967_ = lean_nat_dec_le(v___x_3955_, v___x_3955_);
if (v___x_3967_ == 0)
{
if (v___x_3965_ == 0)
{
lean_object* v___x_3968_; 
lean_dec_ref(v_postUpdateHooks_3954_);
lean_dec_ref(v_pkg_3949_);
v___x_3968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3964_);
return v___x_3968_;
}
else
{
size_t v___x_3969_; size_t v___x_3970_; lean_object* v___x_3971_; 
v___x_3969_ = ((size_t)0ULL);
v___x_3970_ = lean_usize_of_nat(v___x_3955_);
v___x_3971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_3949_, v_postUpdateHooks_3954_, v___x_3969_, v___x_3970_, v___x_3964_, v___y_3950_, v___y_3951_);
lean_dec_ref(v_postUpdateHooks_3954_);
return v___x_3971_;
}
}
else
{
size_t v___x_3972_; size_t v___x_3973_; lean_object* v___x_3974_; 
v___x_3972_ = ((size_t)0ULL);
v___x_3973_ = lean_usize_of_nat(v___x_3955_);
v___x_3974_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_3949_, v_postUpdateHooks_3954_, v___x_3972_, v___x_3973_, v___x_3964_, v___y_3950_, v___y_3951_);
lean_dec_ref(v_postUpdateHooks_3954_);
return v___x_3974_;
}
}
}
else
{
lean_object* v___x_3975_; lean_object* v___x_3976_; 
lean_dec_ref(v_postUpdateHooks_3954_);
lean_dec_ref(v_pkg_3949_);
v___x_3975_ = lean_box(0);
v___x_3976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
return v___x_3976_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___boxed(lean_object* v_pkg_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_){
_start:
{
lean_object* v_res_3981_; 
v_res_3981_ = l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(v_pkg_3977_, v___y_3978_, v___y_3979_);
lean_dec_ref(v___y_3979_);
lean_dec(v___y_3978_);
return v_res_3981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__0(lean_object* v_as_3982_, size_t v_i_3983_, size_t v_stop_3984_, lean_object* v_b_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
uint8_t v___x_3989_; 
v___x_3989_ = lean_usize_dec_eq(v_i_3983_, v_stop_3984_);
if (v___x_3989_ == 0)
{
lean_object* v___x_3990_; lean_object* v___x_3991_; 
v___x_3990_ = lean_array_uget_borrowed(v_as_3982_, v_i_3983_);
lean_inc(v___x_3990_);
v___x_3991_ = l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(v___x_3990_, v___y_3986_, v___y_3987_);
if (lean_obj_tag(v___x_3991_) == 0)
{
lean_object* v_a_3992_; size_t v___x_3993_; size_t v___x_3994_; 
v_a_3992_ = lean_ctor_get(v___x_3991_, 0);
lean_inc(v_a_3992_);
lean_dec_ref_known(v___x_3991_, 1);
v___x_3993_ = ((size_t)1ULL);
v___x_3994_ = lean_usize_add(v_i_3983_, v___x_3993_);
v_i_3983_ = v___x_3994_;
v_b_3985_ = v_a_3992_;
goto _start;
}
else
{
return v___x_3991_;
}
}
else
{
lean_object* v___x_3996_; 
v___x_3996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3996_, 0, v_b_3985_);
return v___x_3996_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__0___boxed(lean_object* v_as_3997_, lean_object* v_i_3998_, lean_object* v_stop_3999_, lean_object* v_b_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
size_t v_i_boxed_4004_; size_t v_stop_boxed_4005_; lean_object* v_res_4006_; 
v_i_boxed_4004_ = lean_unbox_usize(v_i_3998_);
lean_dec(v_i_3998_);
v_stop_boxed_4005_ = lean_unbox_usize(v_stop_3999_);
lean_dec(v_stop_3999_);
v_res_4006_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_as_3997_, v_i_boxed_4004_, v_stop_boxed_4005_, v_b_4000_, v___y_4001_, v___y_4002_);
lean_dec_ref(v___y_4002_);
lean_dec(v___y_4001_);
lean_dec_ref(v_as_3997_);
return v_res_4006_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize(lean_object* v_ws_4007_, lean_object* v_toUpdate_4008_, lean_object* v_leanOpts_4009_, uint8_t v_updateToolchain_4010_, lean_object* v___y_4011_){
_start:
{
lean_object* v___x_4013_; 
v___x_4013_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(v_ws_4007_, v_toUpdate_4008_, v_leanOpts_4009_, v_updateToolchain_4010_, v___y_4011_);
if (lean_obj_tag(v___x_4013_) == 0)
{
lean_object* v_a_4014_; lean_object* v_fst_4015_; lean_object* v_snd_4016_; lean_object* v___y_4018_; lean_object* v___x_4035_; 
v_a_4014_ = lean_ctor_get(v___x_4013_, 0);
lean_inc(v_a_4014_);
lean_dec_ref_known(v___x_4013_, 1);
v_fst_4015_ = lean_ctor_get(v_a_4014_, 0);
lean_inc(v_fst_4015_);
v_snd_4016_ = lean_ctor_get(v_a_4014_, 1);
lean_inc(v_snd_4016_);
lean_dec(v_a_4014_);
v___x_4035_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(v_fst_4015_, v_snd_4016_);
lean_dec(v_snd_4016_);
if (lean_obj_tag(v___x_4035_) == 0)
{
lean_object* v___x_4037_; uint8_t v_isShared_4038_; uint8_t v_isSharedCheck_4057_; 
v_isSharedCheck_4057_ = !lean_is_exclusive(v___x_4035_);
if (v_isSharedCheck_4057_ == 0)
{
lean_object* v_unused_4058_; 
v_unused_4058_ = lean_ctor_get(v___x_4035_, 0);
lean_dec(v_unused_4058_);
v___x_4037_ = v___x_4035_;
v_isShared_4038_ = v_isSharedCheck_4057_;
goto v_resetjp_4036_;
}
else
{
lean_dec(v___x_4035_);
v___x_4037_ = lean_box(0);
v_isShared_4038_ = v_isSharedCheck_4057_;
goto v_resetjp_4036_;
}
v_resetjp_4036_:
{
lean_object* v_packages_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; uint8_t v___x_4042_; 
v_packages_4039_ = lean_ctor_get(v_fst_4015_, 4);
v___x_4040_ = lean_unsigned_to_nat(0u);
v___x_4041_ = lean_array_get_size(v_packages_4039_);
v___x_4042_ = lean_nat_dec_lt(v___x_4040_, v___x_4041_);
if (v___x_4042_ == 0)
{
lean_object* v___x_4044_; 
if (v_isShared_4038_ == 0)
{
lean_ctor_set(v___x_4037_, 0, v_fst_4015_);
v___x_4044_ = v___x_4037_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v_fst_4015_);
v___x_4044_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
return v___x_4044_;
}
}
else
{
lean_object* v___x_4046_; uint8_t v___x_4047_; 
v___x_4046_ = lean_box(0);
v___x_4047_ = lean_nat_dec_le(v___x_4041_, v___x_4041_);
if (v___x_4047_ == 0)
{
if (v___x_4042_ == 0)
{
lean_object* v___x_4049_; 
if (v_isShared_4038_ == 0)
{
lean_ctor_set(v___x_4037_, 0, v_fst_4015_);
v___x_4049_ = v___x_4037_;
goto v_reusejp_4048_;
}
else
{
lean_object* v_reuseFailAlloc_4050_; 
v_reuseFailAlloc_4050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4050_, 0, v_fst_4015_);
v___x_4049_ = v_reuseFailAlloc_4050_;
goto v_reusejp_4048_;
}
v_reusejp_4048_:
{
return v___x_4049_;
}
}
else
{
size_t v___x_4051_; size_t v___x_4052_; lean_object* v___x_4053_; 
lean_del_object(v___x_4037_);
v___x_4051_ = ((size_t)0ULL);
v___x_4052_ = lean_usize_of_nat(v___x_4041_);
v___x_4053_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_packages_4039_, v___x_4051_, v___x_4052_, v___x_4046_, v_fst_4015_, v___y_4011_);
v___y_4018_ = v___x_4053_;
goto v___jp_4017_;
}
}
else
{
size_t v___x_4054_; size_t v___x_4055_; lean_object* v___x_4056_; 
lean_del_object(v___x_4037_);
v___x_4054_ = ((size_t)0ULL);
v___x_4055_ = lean_usize_of_nat(v___x_4041_);
v___x_4056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_packages_4039_, v___x_4054_, v___x_4055_, v___x_4046_, v_fst_4015_, v___y_4011_);
v___y_4018_ = v___x_4056_;
goto v___jp_4017_;
}
}
}
}
else
{
lean_object* v_a_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4071_; 
lean_dec(v_fst_4015_);
v_a_4059_ = lean_ctor_get(v___x_4035_, 0);
v_isSharedCheck_4071_ = !lean_is_exclusive(v___x_4035_);
if (v_isSharedCheck_4071_ == 0)
{
v___x_4061_ = v___x_4035_;
v_isShared_4062_ = v_isSharedCheck_4071_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_a_4059_);
lean_dec(v___x_4035_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4071_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4063_; uint8_t v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4069_; 
v___x_4063_ = lean_io_error_to_string(v_a_4059_);
v___x_4064_ = 3;
v___x_4065_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4065_, 0, v___x_4063_);
lean_ctor_set_uint8(v___x_4065_, sizeof(void*)*1, v___x_4064_);
lean_inc_ref(v___y_4011_);
v___x_4066_ = lean_apply_2(v___y_4011_, v___x_4065_, lean_box(0));
v___x_4067_ = lean_box(0);
if (v_isShared_4062_ == 0)
{
lean_ctor_set(v___x_4061_, 0, v___x_4067_);
v___x_4069_ = v___x_4061_;
goto v_reusejp_4068_;
}
else
{
lean_object* v_reuseFailAlloc_4070_; 
v_reuseFailAlloc_4070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4070_, 0, v___x_4067_);
v___x_4069_ = v_reuseFailAlloc_4070_;
goto v_reusejp_4068_;
}
v_reusejp_4068_:
{
return v___x_4069_;
}
}
}
v___jp_4017_:
{
if (lean_obj_tag(v___y_4018_) == 0)
{
lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
v_isSharedCheck_4025_ = !lean_is_exclusive(v___y_4018_);
if (v_isSharedCheck_4025_ == 0)
{
lean_object* v_unused_4026_; 
v_unused_4026_ = lean_ctor_get(v___y_4018_, 0);
lean_dec(v_unused_4026_);
v___x_4020_ = v___y_4018_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_dec(v___y_4018_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
lean_ctor_set(v___x_4020_, 0, v_fst_4015_);
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_fst_4015_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
else
{
lean_object* v_a_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4034_; 
lean_dec(v_fst_4015_);
v_a_4027_ = lean_ctor_get(v___y_4018_, 0);
v_isSharedCheck_4034_ = !lean_is_exclusive(v___y_4018_);
if (v_isSharedCheck_4034_ == 0)
{
v___x_4029_ = v___y_4018_;
v_isShared_4030_ = v_isSharedCheck_4034_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_a_4027_);
lean_dec(v___y_4018_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4034_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4032_; 
if (v_isShared_4030_ == 0)
{
v___x_4032_ = v___x_4029_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v_a_4027_);
v___x_4032_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
return v___x_4032_;
}
}
}
}
}
else
{
lean_object* v_a_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4079_; 
v_a_4072_ = lean_ctor_get(v___x_4013_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4074_ = v___x_4013_;
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_a_4072_);
lean_dec(v___x_4013_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v___x_4077_; 
if (v_isShared_4075_ == 0)
{
v___x_4077_ = v___x_4074_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_a_4072_);
v___x_4077_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
return v___x_4077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize___boxed(lean_object* v_ws_4080_, lean_object* v_toUpdate_4081_, lean_object* v_leanOpts_4082_, lean_object* v_updateToolchain_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_){
_start:
{
uint8_t v_updateToolchain_boxed_4086_; lean_object* v_res_4087_; 
v_updateToolchain_boxed_4086_ = lean_unbox(v_updateToolchain_4083_);
v_res_4087_ = l_Lake_Workspace_updateAndMaterialize(v_ws_4080_, v_toUpdate_4081_, v_leanOpts_4082_, v_updateToolchain_boxed_4086_, v___y_4084_);
lean_dec_ref(v___y_4084_);
return v_res_4087_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(lean_object* v___x_4092_, lean_object* v_what_4093_, lean_object* v___y_4094_){
_start:
{
lean_object* v_name_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; uint8_t v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; uint8_t v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
v_name_4096_ = lean_ctor_get(v___x_4092_, 0);
lean_inc(v_name_4096_);
lean_dec_ref(v___x_4092_);
v___x_4097_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0));
v___x_4098_ = lean_string_append(v___x_4097_, v_what_4093_);
v___x_4099_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1));
v___x_4100_ = lean_string_append(v___x_4098_, v___x_4099_);
v___x_4101_ = 1;
v___x_4102_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4096_, v___x_4101_);
v___x_4103_ = lean_string_append(v___x_4100_, v___x_4102_);
v___x_4104_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2));
v___x_4105_ = lean_string_append(v___x_4103_, v___x_4104_);
v___x_4106_ = lean_string_append(v___x_4105_, v___x_4102_);
lean_dec_ref(v___x_4102_);
v___x_4107_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3));
v___x_4108_ = lean_string_append(v___x_4106_, v___x_4107_);
v___x_4109_ = 2;
v___x_4110_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4110_, 0, v___x_4108_);
lean_ctor_set_uint8(v___x_4110_, sizeof(void*)*1, v___x_4109_);
lean_inc_ref(v___y_4094_);
v___x_4111_ = lean_apply_2(v___y_4094_, v___x_4110_, lean_box(0));
v___x_4112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4112_, 0, v___x_4111_);
return v___x_4112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___boxed(lean_object* v___x_4113_, lean_object* v_what_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_){
_start:
{
lean_object* v_res_4117_; 
v_res_4117_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4113_, v_what_4114_, v___y_4115_);
lean_dec_ref(v___y_4115_);
lean_dec_ref(v_what_4114_);
return v_res_4117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(lean_object* v_pkgEntries_4121_, lean_object* v_as_4122_, size_t v_i_4123_, size_t v_stop_4124_, lean_object* v_b_4125_, lean_object* v___y_4126_){
_start:
{
lean_object* v_a_4129_; lean_object* v___y_4134_; uint8_t v___x_4136_; 
v___x_4136_ = lean_usize_dec_eq(v_i_4123_, v_stop_4124_);
if (v___x_4136_ == 0)
{
lean_object* v___x_4137_; lean_object* v_src_x3f_4138_; 
v___x_4137_ = lean_array_uget_borrowed(v_as_4122_, v_i_4123_);
v_src_x3f_4138_ = lean_ctor_get(v___x_4137_, 3);
if (lean_obj_tag(v_src_x3f_4138_) == 1)
{
lean_object* v_name_4139_; lean_object* v_val_4140_; lean_object* v___x_4141_; 
v_name_4139_ = lean_ctor_get(v___x_4137_, 0);
v_val_4140_ = lean_ctor_get(v_src_x3f_4138_, 0);
v___x_4141_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_pkgEntries_4121_, v_name_4139_);
if (lean_obj_tag(v___x_4141_) == 1)
{
lean_object* v_val_4142_; lean_object* v___y_4144_; lean_object* v___y_4148_; 
v_val_4142_ = lean_ctor_get(v___x_4141_, 0);
lean_inc(v_val_4142_);
lean_dec_ref_known(v___x_4141_, 1);
if (lean_obj_tag(v_val_4140_) == 0)
{
lean_object* v_src_4151_; 
v_src_4151_ = lean_ctor_get(v_val_4142_, 4);
lean_inc_ref(v_src_4151_);
lean_dec(v_val_4142_);
if (lean_obj_tag(v_src_4151_) == 0)
{
lean_object* v___x_4152_; 
lean_dec_ref_known(v_src_4151_, 1);
v___x_4152_ = lean_box(0);
v_a_4129_ = v___x_4152_;
goto v___jp_4128_;
}
else
{
lean_dec_ref(v_src_4151_);
v___y_4148_ = v___y_4126_;
goto v___jp_4147_;
}
}
else
{
lean_object* v_src_4153_; 
v_src_4153_ = lean_ctor_get(v_val_4142_, 4);
lean_inc_ref(v_src_4153_);
lean_dec(v_val_4142_);
if (lean_obj_tag(v_src_4153_) == 1)
{
lean_object* v_url_4154_; lean_object* v_rev_4155_; lean_object* v_url_4156_; lean_object* v_inputRev_x3f_4157_; lean_object* v___y_4159_; uint8_t v___x_4166_; 
v_url_4154_ = lean_ctor_get(v_val_4140_, 0);
v_rev_4155_ = lean_ctor_get(v_val_4140_, 1);
v_url_4156_ = lean_ctor_get(v_src_4153_, 0);
lean_inc_ref(v_url_4156_);
v_inputRev_x3f_4157_ = lean_ctor_get(v_src_4153_, 2);
lean_inc(v_inputRev_x3f_4157_);
lean_dec_ref_known(v_src_4153_, 4);
v___x_4166_ = lean_string_dec_eq(v_url_4154_, v_url_4156_);
lean_dec_ref(v_url_4156_);
if (v___x_4166_ == 0)
{
goto v___jp_4163_;
}
else
{
if (v___x_4136_ == 0)
{
v___y_4159_ = v___y_4126_;
goto v___jp_4158_;
}
else
{
goto v___jp_4163_;
}
}
v___jp_4158_:
{
lean_object* v___x_4160_; uint8_t v___x_4161_; 
v___x_4160_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
lean_inc(v_rev_4155_);
v___x_4161_ = l_Option_instDecidableEq___redArg(v___x_4160_, v_rev_4155_, v_inputRev_x3f_4157_);
if (v___x_4161_ == 0)
{
v___y_4144_ = v___y_4159_;
goto v___jp_4143_;
}
else
{
if (v___x_4136_ == 0)
{
lean_object* v___x_4162_; 
v___x_4162_ = lean_box(0);
v_a_4129_ = v___x_4162_;
goto v___jp_4128_;
}
else
{
v___y_4144_ = v___y_4159_;
goto v___jp_4143_;
}
}
}
v___jp_4163_:
{
lean_object* v___x_4164_; lean_object* v___x_4165_; 
v___x_4164_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2));
lean_inc(v___x_4137_);
v___x_4165_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4137_, v___x_4164_, v___y_4126_);
if (lean_obj_tag(v___x_4165_) == 0)
{
lean_dec_ref_known(v___x_4165_, 1);
v___y_4159_ = v___y_4126_;
goto v___jp_4158_;
}
else
{
lean_dec(v_inputRev_x3f_4157_);
return v___x_4165_;
}
}
}
else
{
lean_dec_ref(v_src_4153_);
v___y_4148_ = v___y_4126_;
goto v___jp_4147_;
}
}
v___jp_4143_:
{
lean_object* v___x_4145_; lean_object* v___x_4146_; 
v___x_4145_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0));
lean_inc(v___x_4137_);
v___x_4146_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4137_, v___x_4145_, v___y_4144_);
v___y_4134_ = v___x_4146_;
goto v___jp_4133_;
}
v___jp_4147_:
{
lean_object* v___x_4149_; lean_object* v___x_4150_; 
v___x_4149_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1));
lean_inc(v___x_4137_);
v___x_4150_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4137_, v___x_4149_, v___y_4148_);
v___y_4134_ = v___x_4150_;
goto v___jp_4133_;
}
}
else
{
lean_object* v___x_4167_; 
lean_dec(v___x_4141_);
v___x_4167_ = lean_box(0);
v_a_4129_ = v___x_4167_;
goto v___jp_4128_;
}
}
else
{
lean_object* v___x_4168_; 
v___x_4168_ = lean_box(0);
v_a_4129_ = v___x_4168_;
goto v___jp_4128_;
}
}
else
{
lean_object* v___x_4169_; 
v___x_4169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4169_, 0, v_b_4125_);
return v___x_4169_;
}
v___jp_4128_:
{
size_t v___x_4130_; size_t v___x_4131_; 
v___x_4130_ = ((size_t)1ULL);
v___x_4131_ = lean_usize_add(v_i_4123_, v___x_4130_);
v_i_4123_ = v___x_4131_;
v_b_4125_ = v_a_4129_;
goto _start;
}
v___jp_4133_:
{
if (lean_obj_tag(v___y_4134_) == 0)
{
lean_object* v_a_4135_; 
v_a_4135_ = lean_ctor_get(v___y_4134_, 0);
lean_inc(v_a_4135_);
lean_dec_ref_known(v___y_4134_, 1);
v_a_4129_ = v_a_4135_;
goto v___jp_4128_;
}
else
{
return v___y_4134_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___boxed(lean_object* v_pkgEntries_4170_, lean_object* v_as_4171_, lean_object* v_i_4172_, lean_object* v_stop_4173_, lean_object* v_b_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_){
_start:
{
size_t v_i_boxed_4177_; size_t v_stop_boxed_4178_; lean_object* v_res_4179_; 
v_i_boxed_4177_ = lean_unbox_usize(v_i_4172_);
lean_dec(v_i_4172_);
v_stop_boxed_4178_ = lean_unbox_usize(v_stop_4173_);
lean_dec(v_stop_4173_);
v_res_4179_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4170_, v_as_4171_, v_i_boxed_4177_, v_stop_boxed_4178_, v_b_4174_, v___y_4175_);
lean_dec_ref(v___y_4175_);
lean_dec_ref(v_as_4171_);
lean_dec(v_pkgEntries_4170_);
return v_res_4179_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest(lean_object* v_pkgEntries_4180_, lean_object* v_deps_4181_, lean_object* v___y_4182_){
_start:
{
lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; uint8_t v___x_4187_; 
v___x_4184_ = lean_unsigned_to_nat(0u);
v___x_4185_ = lean_array_get_size(v_deps_4181_);
v___x_4186_ = lean_box(0);
v___x_4187_ = lean_nat_dec_lt(v___x_4184_, v___x_4185_);
if (v___x_4187_ == 0)
{
lean_object* v___x_4188_; 
v___x_4188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4188_, 0, v___x_4186_);
return v___x_4188_;
}
else
{
uint8_t v___x_4189_; 
v___x_4189_ = lean_nat_dec_le(v___x_4185_, v___x_4185_);
if (v___x_4189_ == 0)
{
if (v___x_4187_ == 0)
{
lean_object* v___x_4190_; 
v___x_4190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4190_, 0, v___x_4186_);
return v___x_4190_;
}
else
{
size_t v___x_4191_; size_t v___x_4192_; lean_object* v___x_4193_; 
v___x_4191_ = ((size_t)0ULL);
v___x_4192_ = lean_usize_of_nat(v___x_4185_);
v___x_4193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4180_, v_deps_4181_, v___x_4191_, v___x_4192_, v___x_4186_, v___y_4182_);
return v___x_4193_;
}
}
else
{
size_t v___x_4194_; size_t v___x_4195_; lean_object* v___x_4196_; 
v___x_4194_ = ((size_t)0ULL);
v___x_4195_ = lean_usize_of_nat(v___x_4185_);
v___x_4196_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4180_, v_deps_4181_, v___x_4194_, v___x_4195_, v___x_4186_, v___y_4182_);
return v___x_4196_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest___boxed(lean_object* v_pkgEntries_4197_, lean_object* v_deps_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_){
_start:
{
lean_object* v_res_4201_; 
v_res_4201_ = l___private_Lake_Load_Resolve_0__Lake_validateManifest(v_pkgEntries_4197_, v_deps_4198_, v___y_4199_);
lean_dec_ref(v___y_4199_);
lean_dec_ref(v_deps_4198_);
lean_dec(v_pkgEntries_4197_);
return v_res_4201_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(lean_object* v_x_4202_, lean_object* v_x_4203_){
_start:
{
if (lean_obj_tag(v_x_4202_) == 0)
{
if (lean_obj_tag(v_x_4203_) == 0)
{
uint8_t v___x_4204_; 
v___x_4204_ = 1;
return v___x_4204_;
}
else
{
uint8_t v___x_4205_; 
v___x_4205_ = 0;
return v___x_4205_;
}
}
else
{
if (lean_obj_tag(v_x_4203_) == 0)
{
uint8_t v___x_4206_; 
v___x_4206_ = 0;
return v___x_4206_;
}
else
{
lean_object* v_val_4207_; lean_object* v_val_4208_; uint8_t v___x_4209_; 
v_val_4207_ = lean_ctor_get(v_x_4202_, 0);
v_val_4208_ = lean_ctor_get(v_x_4203_, 0);
v___x_4209_ = lean_string_dec_eq(v_val_4207_, v_val_4208_);
return v___x_4209_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2___boxed(lean_object* v_x_4210_, lean_object* v_x_4211_){
_start:
{
uint8_t v_res_4212_; lean_object* v_r_4213_; 
v_res_4212_ = l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(v_x_4210_, v_x_4211_);
lean_dec(v_x_4211_);
lean_dec(v_x_4210_);
v_r_4213_ = lean_box(v_res_4212_);
return v_r_4213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(lean_object* v_pkg_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v_leanOpts_4222_, uint8_t v_reconfigure_4223_, lean_object* v_as_4224_, size_t v_i_4225_, size_t v_stop_4226_, lean_object* v_b_4227_, lean_object* v___y_4228_){
_start:
{
uint8_t v___x_4230_; 
v___x_4230_ = lean_usize_dec_eq(v_i_4225_, v_stop_4226_);
if (v___x_4230_ == 0)
{
lean_object* v_ws_4231_; lean_object* v_depIdxs_4232_; lean_object* v___x_4234_; uint8_t v_isShared_4235_; uint8_t v_isSharedCheck_4362_; 
v_ws_4231_ = lean_ctor_get(v_b_4227_, 0);
v_depIdxs_4232_ = lean_ctor_get(v_b_4227_, 1);
v_isSharedCheck_4362_ = !lean_is_exclusive(v_b_4227_);
if (v_isSharedCheck_4362_ == 0)
{
v___x_4234_ = v_b_4227_;
v_isShared_4235_ = v_isSharedCheck_4362_;
goto v_resetjp_4233_;
}
else
{
lean_inc(v_depIdxs_4232_);
lean_inc(v_ws_4231_);
lean_dec(v_b_4227_);
v___x_4234_ = lean_box(0);
v_isShared_4235_ = v_isSharedCheck_4362_;
goto v_resetjp_4233_;
}
v_resetjp_4233_:
{
lean_object* v_lakeEnv_4236_; lean_object* v_packages_4237_; size_t v___x_4238_; size_t v___x_4239_; lean_object* v___x_4240_; lean_object* v___f_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; 
v_lakeEnv_4236_ = lean_ctor_get(v_ws_4231_, 0);
v_packages_4237_ = lean_ctor_get(v_ws_4231_, 4);
v___x_4238_ = ((size_t)1ULL);
v___x_4239_ = lean_usize_sub(v_i_4225_, v___x_4238_);
v___x_4240_ = lean_array_uget_borrowed(v_as_4224_, v___x_4239_);
lean_inc(v___x_4240_);
v___f_4241_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4241_, 0, v___x_4240_);
v___x_4242_ = lean_unsigned_to_nat(0u);
v___x_4243_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_4241_, v_packages_4237_, v___x_4242_);
if (lean_obj_tag(v___x_4243_) == 1)
{
lean_object* v_val_4244_; lean_object* v___x_4245_; lean_object* v___x_4247_; 
v_val_4244_ = lean_ctor_get(v___x_4243_, 0);
lean_inc(v_val_4244_);
lean_dec_ref_known(v___x_4243_, 1);
v___x_4245_ = lean_array_push(v_depIdxs_4232_, v_val_4244_);
if (v_isShared_4235_ == 0)
{
lean_ctor_set(v___x_4234_, 1, v___x_4245_);
v___x_4247_ = v___x_4234_;
goto v_reusejp_4246_;
}
else
{
lean_object* v_reuseFailAlloc_4249_; 
v_reuseFailAlloc_4249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4249_, 0, v_ws_4231_);
lean_ctor_set(v_reuseFailAlloc_4249_, 1, v___x_4245_);
v___x_4247_ = v_reuseFailAlloc_4249_;
goto v_reusejp_4246_;
}
v_reusejp_4246_:
{
v_i_4225_ = v___x_4239_;
v_b_4227_ = v___x_4247_;
goto _start;
}
}
else
{
lean_object* v_wsIdx_4250_; lean_object* v_baseName_4251_; lean_object* v_name_4252_; lean_object* v_opts_4253_; uint8_t v___x_4254_; 
lean_dec(v___x_4243_);
v_wsIdx_4250_ = lean_ctor_get(v_pkg_4219_, 0);
v_baseName_4251_ = lean_ctor_get(v_pkg_4219_, 1);
v_name_4252_ = lean_ctor_get(v___x_4240_, 0);
v_opts_4253_ = lean_ctor_get(v___x_4240_, 4);
v___x_4254_ = lean_name_eq(v_baseName_4251_, v_name_4252_);
if (v___x_4254_ == 0)
{
lean_object* v___x_4255_; 
v___x_4255_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_4220_, v_name_4252_);
if (lean_obj_tag(v___x_4255_) == 1)
{
lean_object* v_val_4256_; lean_object* v___x_4257_; lean_object* v_dir_4258_; lean_object* v___x_4259_; 
v_val_4256_ = lean_ctor_get(v___x_4255_, 0);
lean_inc(v_val_4256_);
lean_dec_ref_known(v___x_4255_, 1);
v___x_4257_ = lean_array_fget_borrowed(v_packages_4237_, v___x_4242_);
v_dir_4258_ = lean_ctor_get(v___x_4257_, 4);
lean_inc_ref(v___y_4221_);
lean_inc_ref(v_dir_4258_);
v___x_4259_ = l_Lake_PackageEntry_materialize(v_val_4256_, v_lakeEnv_4236_, v_dir_4258_, v___y_4221_, v___y_4228_);
if (lean_obj_tag(v___x_4259_) == 0)
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4316_; 
v_a_4260_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4316_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4316_ == 0)
{
v___x_4262_ = v___x_4259_;
v_isShared_4263_ = v_isSharedCheck_4316_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4259_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4316_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4264_; lean_object* v_wsIdx_4265_; lean_object* v___x_4266_; 
v___x_4264_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_4265_ = lean_array_get_size(v_packages_4237_);
lean_inc_ref(v_leanOpts_4222_);
lean_inc(v_opts_4253_);
v___x_4266_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_4231_, v_a_4260_, v_opts_4253_, v_leanOpts_4222_, v_reconfigure_4223_, v___x_4264_);
if (lean_obj_tag(v___x_4266_) == 0)
{
lean_object* v_a_4267_; lean_object* v_a_4268_; lean_object* v___x_4269_; lean_object* v___x_4271_; 
lean_del_object(v___x_4262_);
v_a_4267_ = lean_ctor_get(v___x_4266_, 0);
lean_inc(v_a_4267_);
v_a_4268_ = lean_ctor_get(v___x_4266_, 1);
lean_inc(v_a_4268_);
lean_dec_ref_known(v___x_4266_, 2);
v___x_4269_ = lean_array_push(v_depIdxs_4232_, v_wsIdx_4265_);
if (v_isShared_4235_ == 0)
{
lean_ctor_set(v___x_4234_, 1, v___x_4269_);
lean_ctor_set(v___x_4234_, 0, v_a_4267_);
v___x_4271_ = v___x_4234_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4288_; 
v_reuseFailAlloc_4288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4288_, 0, v_a_4267_);
lean_ctor_set(v_reuseFailAlloc_4288_, 1, v___x_4269_);
v___x_4271_ = v_reuseFailAlloc_4288_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
lean_object* v___x_4272_; uint8_t v___x_4273_; 
v___x_4272_ = lean_array_get_size(v_a_4268_);
v___x_4273_ = lean_nat_dec_lt(v___x_4242_, v___x_4272_);
if (v___x_4273_ == 0)
{
lean_dec(v_a_4268_);
v_i_4225_ = v___x_4239_;
v_b_4227_ = v___x_4271_;
goto _start;
}
else
{
lean_object* v___x_4275_; size_t v___x_4276_; size_t v___x_4277_; lean_object* v___x_4278_; 
v___x_4275_ = lean_box(0);
v___x_4276_ = ((size_t)0ULL);
v___x_4277_ = lean_usize_of_nat(v___x_4272_);
v___x_4278_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4268_, v___x_4276_, v___x_4277_, v___x_4275_, v___y_4228_);
lean_dec(v_a_4268_);
if (lean_obj_tag(v___x_4278_) == 0)
{
lean_dec_ref_known(v___x_4278_, 1);
v_i_4225_ = v___x_4239_;
v_b_4227_ = v___x_4271_;
goto _start;
}
else
{
lean_object* v_a_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4287_; 
lean_dec_ref(v___x_4271_);
lean_dec_ref(v_leanOpts_4222_);
lean_dec_ref(v___y_4221_);
lean_dec_ref(v_pkg_4219_);
v_a_4280_ = lean_ctor_get(v___x_4278_, 0);
v_isSharedCheck_4287_ = !lean_is_exclusive(v___x_4278_);
if (v_isSharedCheck_4287_ == 0)
{
v___x_4282_ = v___x_4278_;
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_a_4280_);
lean_dec(v___x_4278_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v___x_4285_; 
if (v_isShared_4283_ == 0)
{
v___x_4285_ = v___x_4282_;
goto v_reusejp_4284_;
}
else
{
lean_object* v_reuseFailAlloc_4286_; 
v_reuseFailAlloc_4286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4286_, 0, v_a_4280_);
v___x_4285_ = v_reuseFailAlloc_4286_;
goto v_reusejp_4284_;
}
v_reusejp_4284_:
{
return v___x_4285_;
}
}
}
}
}
}
else
{
lean_object* v_a_4289_; lean_object* v___x_4290_; uint8_t v___x_4291_; 
lean_del_object(v___x_4234_);
lean_dec_ref(v_depIdxs_4232_);
lean_dec_ref(v_leanOpts_4222_);
lean_dec_ref(v___y_4221_);
lean_dec_ref(v_pkg_4219_);
v_a_4289_ = lean_ctor_get(v___x_4266_, 1);
lean_inc(v_a_4289_);
lean_dec_ref_known(v___x_4266_, 2);
v___x_4290_ = lean_array_get_size(v_a_4289_);
v___x_4291_ = lean_nat_dec_lt(v___x_4242_, v___x_4290_);
if (v___x_4291_ == 0)
{
lean_object* v___x_4292_; lean_object* v___x_4294_; 
lean_dec(v_a_4289_);
v___x_4292_ = lean_box(0);
if (v_isShared_4263_ == 0)
{
lean_ctor_set_tag(v___x_4262_, 1);
lean_ctor_set(v___x_4262_, 0, v___x_4292_);
v___x_4294_ = v___x_4262_;
goto v_reusejp_4293_;
}
else
{
lean_object* v_reuseFailAlloc_4295_; 
v_reuseFailAlloc_4295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4295_, 0, v___x_4292_);
v___x_4294_ = v_reuseFailAlloc_4295_;
goto v_reusejp_4293_;
}
v_reusejp_4293_:
{
return v___x_4294_;
}
}
else
{
lean_object* v___x_4296_; size_t v___x_4297_; size_t v___x_4298_; lean_object* v___x_4299_; 
lean_del_object(v___x_4262_);
v___x_4296_ = lean_box(0);
v___x_4297_ = ((size_t)0ULL);
v___x_4298_ = lean_usize_of_nat(v___x_4290_);
v___x_4299_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4289_, v___x_4297_, v___x_4298_, v___x_4296_, v___y_4228_);
lean_dec(v_a_4289_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_object* v___x_4301_; uint8_t v_isShared_4302_; uint8_t v_isSharedCheck_4306_; 
v_isSharedCheck_4306_ = !lean_is_exclusive(v___x_4299_);
if (v_isSharedCheck_4306_ == 0)
{
lean_object* v_unused_4307_; 
v_unused_4307_ = lean_ctor_get(v___x_4299_, 0);
lean_dec(v_unused_4307_);
v___x_4301_ = v___x_4299_;
v_isShared_4302_ = v_isSharedCheck_4306_;
goto v_resetjp_4300_;
}
else
{
lean_dec(v___x_4299_);
v___x_4301_ = lean_box(0);
v_isShared_4302_ = v_isSharedCheck_4306_;
goto v_resetjp_4300_;
}
v_resetjp_4300_:
{
lean_object* v___x_4304_; 
if (v_isShared_4302_ == 0)
{
lean_ctor_set_tag(v___x_4301_, 1);
lean_ctor_set(v___x_4301_, 0, v___x_4296_);
v___x_4304_ = v___x_4301_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4305_; 
v_reuseFailAlloc_4305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4305_, 0, v___x_4296_);
v___x_4304_ = v_reuseFailAlloc_4305_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
return v___x_4304_;
}
}
}
else
{
lean_object* v_a_4308_; lean_object* v___x_4310_; uint8_t v_isShared_4311_; uint8_t v_isSharedCheck_4315_; 
v_a_4308_ = lean_ctor_get(v___x_4299_, 0);
v_isSharedCheck_4315_ = !lean_is_exclusive(v___x_4299_);
if (v_isSharedCheck_4315_ == 0)
{
v___x_4310_ = v___x_4299_;
v_isShared_4311_ = v_isSharedCheck_4315_;
goto v_resetjp_4309_;
}
else
{
lean_inc(v_a_4308_);
lean_dec(v___x_4299_);
v___x_4310_ = lean_box(0);
v_isShared_4311_ = v_isSharedCheck_4315_;
goto v_resetjp_4309_;
}
v_resetjp_4309_:
{
lean_object* v___x_4313_; 
if (v_isShared_4311_ == 0)
{
v___x_4313_ = v___x_4310_;
goto v_reusejp_4312_;
}
else
{
lean_object* v_reuseFailAlloc_4314_; 
v_reuseFailAlloc_4314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4314_, 0, v_a_4308_);
v___x_4313_ = v_reuseFailAlloc_4314_;
goto v_reusejp_4312_;
}
v_reusejp_4312_:
{
return v___x_4313_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4324_; 
lean_del_object(v___x_4234_);
lean_dec_ref(v_depIdxs_4232_);
lean_dec_ref(v_ws_4231_);
lean_dec_ref(v_leanOpts_4222_);
lean_dec_ref(v___y_4221_);
lean_dec_ref(v_pkg_4219_);
v_a_4317_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4324_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4324_ == 0)
{
v___x_4319_ = v___x_4259_;
v_isShared_4320_ = v_isSharedCheck_4324_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_a_4317_);
lean_dec(v___x_4259_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4324_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v___x_4322_; 
if (v_isShared_4320_ == 0)
{
v___x_4322_ = v___x_4319_;
goto v_reusejp_4321_;
}
else
{
lean_object* v_reuseFailAlloc_4323_; 
v_reuseFailAlloc_4323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4323_, 0, v_a_4317_);
v___x_4322_ = v_reuseFailAlloc_4323_;
goto v_reusejp_4321_;
}
v_reusejp_4321_:
{
return v___x_4322_;
}
}
}
}
else
{
uint8_t v___x_4325_; 
lean_inc(v_baseName_4251_);
lean_inc(v_wsIdx_4250_);
lean_dec(v___x_4255_);
lean_del_object(v___x_4234_);
lean_dec_ref(v_depIdxs_4232_);
lean_dec_ref(v_ws_4231_);
lean_dec_ref(v_leanOpts_4222_);
lean_dec_ref(v___y_4221_);
lean_dec_ref(v_pkg_4219_);
v___x_4325_ = lean_nat_dec_eq(v_wsIdx_4250_, v___x_4242_);
lean_dec(v_wsIdx_4250_);
if (v___x_4325_ == 0)
{
lean_object* v___x_4326_; uint8_t v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; uint8_t v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; 
v___x_4326_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_4327_ = 1;
lean_inc(v_name_4252_);
v___x_4328_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4252_, v___x_4327_);
v___x_4329_ = lean_string_append(v___x_4326_, v___x_4328_);
lean_dec_ref(v___x_4328_);
v___x_4330_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1));
v___x_4331_ = lean_string_append(v___x_4329_, v___x_4330_);
v___x_4332_ = l_Lean_Name_toString(v_baseName_4251_, v___x_4325_);
v___x_4333_ = lean_string_append(v___x_4331_, v___x_4332_);
lean_dec_ref(v___x_4332_);
v___x_4334_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_4335_ = lean_string_append(v___x_4333_, v___x_4334_);
v___x_4336_ = 3;
v___x_4337_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4337_, 0, v___x_4335_);
lean_ctor_set_uint8(v___x_4337_, sizeof(void*)*1, v___x_4336_);
lean_inc_ref(v___y_4228_);
v___x_4338_ = lean_apply_2(v___y_4228_, v___x_4337_, lean_box(0));
v___x_4339_ = lean_box(0);
v___x_4340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4340_, 0, v___x_4339_);
return v___x_4340_;
}
else
{
lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; uint8_t v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
lean_dec(v_baseName_4251_);
v___x_4341_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
lean_inc(v_name_4252_);
v___x_4342_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4252_, v___x_4325_);
v___x_4343_ = lean_string_append(v___x_4341_, v___x_4342_);
v___x_4344_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3));
v___x_4345_ = lean_string_append(v___x_4343_, v___x_4344_);
v___x_4346_ = lean_string_append(v___x_4345_, v___x_4342_);
lean_dec_ref(v___x_4342_);
v___x_4347_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4));
v___x_4348_ = lean_string_append(v___x_4346_, v___x_4347_);
v___x_4349_ = 3;
v___x_4350_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4350_, 0, v___x_4348_);
lean_ctor_set_uint8(v___x_4350_, sizeof(void*)*1, v___x_4349_);
lean_inc_ref(v___y_4228_);
v___x_4351_ = lean_apply_2(v___y_4228_, v___x_4350_, lean_box(0));
v___x_4352_ = lean_box(0);
v___x_4353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4353_, 0, v___x_4352_);
return v___x_4353_;
}
}
}
else
{
lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; uint8_t v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
lean_inc(v_baseName_4251_);
lean_del_object(v___x_4234_);
lean_dec_ref(v_depIdxs_4232_);
lean_dec_ref(v_ws_4231_);
lean_dec_ref(v_leanOpts_4222_);
lean_dec_ref(v___y_4221_);
lean_dec_ref(v_pkg_4219_);
v___x_4354_ = l_Lean_Name_toString(v_baseName_4251_, v___x_4230_);
v___x_4355_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_4356_ = lean_string_append(v___x_4354_, v___x_4355_);
v___x_4357_ = 3;
v___x_4358_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4358_, 0, v___x_4356_);
lean_ctor_set_uint8(v___x_4358_, sizeof(void*)*1, v___x_4357_);
lean_inc_ref(v___y_4228_);
v___x_4359_ = lean_apply_2(v___y_4228_, v___x_4358_, lean_box(0));
v___x_4360_ = lean_box(0);
v___x_4361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4361_, 0, v___x_4360_);
return v___x_4361_;
}
}
}
}
else
{
lean_object* v___x_4363_; 
lean_dec_ref(v_leanOpts_4222_);
lean_dec_ref(v___y_4221_);
lean_dec_ref(v_pkg_4219_);
v___x_4363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4363_, 0, v_b_4227_);
return v___x_4363_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_pkg_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v_leanOpts_4367_, lean_object* v_reconfigure_4368_, lean_object* v_as_4369_, lean_object* v_i_4370_, lean_object* v_stop_4371_, lean_object* v_b_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_){
_start:
{
uint8_t v_reconfigure_boxed_4375_; size_t v_i_boxed_4376_; size_t v_stop_boxed_4377_; lean_object* v_res_4378_; 
v_reconfigure_boxed_4375_ = lean_unbox(v_reconfigure_4368_);
v_i_boxed_4376_ = lean_unbox_usize(v_i_4370_);
lean_dec(v_i_4370_);
v_stop_boxed_4377_ = lean_unbox_usize(v_stop_4371_);
lean_dec(v_stop_4371_);
v_res_4378_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_4364_, v___y_4365_, v___y_4366_, v_leanOpts_4367_, v_reconfigure_boxed_4375_, v_as_4369_, v_i_boxed_4376_, v_stop_boxed_4377_, v_b_4372_, v___y_4373_);
lean_dec_ref(v___y_4373_);
lean_dec_ref(v_as_4369_);
lean_dec(v___y_4365_);
return v_res_4378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(lean_object* v_start_4379_, lean_object* v_pkg_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v_leanOpts_4383_, uint8_t v_reconfigure_4384_, lean_object* v_as_4385_, size_t v_i_4386_, size_t v_stop_4387_, lean_object* v_b_4388_, lean_object* v___y_4389_){
_start:
{
uint8_t v___x_4391_; 
v___x_4391_ = lean_usize_dec_eq(v_i_4386_, v_stop_4387_);
if (v___x_4391_ == 0)
{
lean_object* v_ws_4392_; lean_object* v_depIdxs_4393_; lean_object* v___x_4395_; uint8_t v_isShared_4396_; uint8_t v_isSharedCheck_4523_; 
v_ws_4392_ = lean_ctor_get(v_b_4388_, 0);
v_depIdxs_4393_ = lean_ctor_get(v_b_4388_, 1);
v_isSharedCheck_4523_ = !lean_is_exclusive(v_b_4388_);
if (v_isSharedCheck_4523_ == 0)
{
v___x_4395_ = v_b_4388_;
v_isShared_4396_ = v_isSharedCheck_4523_;
goto v_resetjp_4394_;
}
else
{
lean_inc(v_depIdxs_4393_);
lean_inc(v_ws_4392_);
lean_dec(v_b_4388_);
v___x_4395_ = lean_box(0);
v_isShared_4396_ = v_isSharedCheck_4523_;
goto v_resetjp_4394_;
}
v_resetjp_4394_:
{
lean_object* v_lakeEnv_4397_; lean_object* v_packages_4398_; size_t v___x_4399_; size_t v___x_4400_; lean_object* v___x_4401_; lean_object* v___f_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; 
v_lakeEnv_4397_ = lean_ctor_get(v_ws_4392_, 0);
v_packages_4398_ = lean_ctor_get(v_ws_4392_, 4);
v___x_4399_ = ((size_t)1ULL);
v___x_4400_ = lean_usize_sub(v_i_4386_, v___x_4399_);
v___x_4401_ = lean_array_uget_borrowed(v_as_4385_, v___x_4400_);
lean_inc(v___x_4401_);
v___f_4402_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__0_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4402_, 0, v___x_4401_);
v___x_4403_ = lean_unsigned_to_nat(0u);
v___x_4404_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_4402_, v_packages_4398_, v___x_4403_);
if (lean_obj_tag(v___x_4404_) == 1)
{
lean_object* v_val_4405_; lean_object* v___x_4406_; lean_object* v___x_4408_; 
v_val_4405_ = lean_ctor_get(v___x_4404_, 0);
lean_inc(v_val_4405_);
lean_dec_ref_known(v___x_4404_, 1);
v___x_4406_ = lean_array_push(v_depIdxs_4393_, v_val_4405_);
if (v_isShared_4396_ == 0)
{
lean_ctor_set(v___x_4395_, 1, v___x_4406_);
v___x_4408_ = v___x_4395_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4410_; 
v_reuseFailAlloc_4410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4410_, 0, v_ws_4392_);
lean_ctor_set(v_reuseFailAlloc_4410_, 1, v___x_4406_);
v___x_4408_ = v_reuseFailAlloc_4410_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
lean_object* v___x_4409_; 
v___x_4409_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_4380_, v___y_4381_, v___y_4382_, v_leanOpts_4383_, v_reconfigure_4384_, v_as_4385_, v___x_4400_, v_stop_4387_, v___x_4408_, v___y_4389_);
return v___x_4409_;
}
}
else
{
lean_object* v_wsIdx_4411_; lean_object* v_baseName_4412_; lean_object* v_name_4413_; lean_object* v_opts_4414_; uint8_t v___x_4415_; 
lean_dec(v___x_4404_);
v_wsIdx_4411_ = lean_ctor_get(v_pkg_4380_, 0);
v_baseName_4412_ = lean_ctor_get(v_pkg_4380_, 1);
v_name_4413_ = lean_ctor_get(v___x_4401_, 0);
v_opts_4414_ = lean_ctor_get(v___x_4401_, 4);
v___x_4415_ = lean_name_eq(v_baseName_4412_, v_name_4413_);
if (v___x_4415_ == 0)
{
lean_object* v___x_4416_; 
v___x_4416_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_4381_, v_name_4413_);
if (lean_obj_tag(v___x_4416_) == 1)
{
lean_object* v_val_4417_; lean_object* v___x_4418_; lean_object* v_dir_4419_; lean_object* v___x_4420_; 
v_val_4417_ = lean_ctor_get(v___x_4416_, 0);
lean_inc(v_val_4417_);
lean_dec_ref_known(v___x_4416_, 1);
v___x_4418_ = lean_array_fget_borrowed(v_packages_4398_, v___x_4403_);
v_dir_4419_ = lean_ctor_get(v___x_4418_, 4);
lean_inc_ref(v___y_4382_);
lean_inc_ref(v_dir_4419_);
v___x_4420_ = l_Lake_PackageEntry_materialize(v_val_4417_, v_lakeEnv_4397_, v_dir_4419_, v___y_4382_, v___y_4389_);
if (lean_obj_tag(v___x_4420_) == 0)
{
lean_object* v_a_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4477_; 
v_a_4421_ = lean_ctor_get(v___x_4420_, 0);
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4420_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4423_ = v___x_4420_;
v_isShared_4424_ = v_isSharedCheck_4477_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_a_4421_);
lean_dec(v___x_4420_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4477_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
lean_object* v___x_4425_; lean_object* v_wsIdx_4426_; lean_object* v___x_4427_; 
v___x_4425_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_4426_ = lean_array_get_size(v_packages_4398_);
lean_inc_ref(v_leanOpts_4383_);
lean_inc(v_opts_4414_);
v___x_4427_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_4392_, v_a_4421_, v_opts_4414_, v_leanOpts_4383_, v_reconfigure_4384_, v___x_4425_);
if (lean_obj_tag(v___x_4427_) == 0)
{
lean_object* v_a_4428_; lean_object* v_a_4429_; lean_object* v___x_4430_; lean_object* v___x_4432_; 
lean_del_object(v___x_4423_);
v_a_4428_ = lean_ctor_get(v___x_4427_, 0);
lean_inc(v_a_4428_);
v_a_4429_ = lean_ctor_get(v___x_4427_, 1);
lean_inc(v_a_4429_);
lean_dec_ref_known(v___x_4427_, 2);
v___x_4430_ = lean_array_push(v_depIdxs_4393_, v_wsIdx_4426_);
if (v_isShared_4396_ == 0)
{
lean_ctor_set(v___x_4395_, 1, v___x_4430_);
lean_ctor_set(v___x_4395_, 0, v_a_4428_);
v___x_4432_ = v___x_4395_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v_a_4428_);
lean_ctor_set(v_reuseFailAlloc_4449_, 1, v___x_4430_);
v___x_4432_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
lean_object* v___x_4433_; uint8_t v___x_4434_; 
v___x_4433_ = lean_array_get_size(v_a_4429_);
v___x_4434_ = lean_nat_dec_lt(v___x_4403_, v___x_4433_);
if (v___x_4434_ == 0)
{
lean_object* v___x_4435_; 
lean_dec(v_a_4429_);
v___x_4435_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_4380_, v___y_4381_, v___y_4382_, v_leanOpts_4383_, v_reconfigure_4384_, v_as_4385_, v___x_4400_, v_stop_4387_, v___x_4432_, v___y_4389_);
return v___x_4435_;
}
else
{
lean_object* v___x_4436_; size_t v___x_4437_; size_t v___x_4438_; lean_object* v___x_4439_; 
v___x_4436_ = lean_box(0);
v___x_4437_ = ((size_t)0ULL);
v___x_4438_ = lean_usize_of_nat(v___x_4433_);
v___x_4439_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4429_, v___x_4437_, v___x_4438_, v___x_4436_, v___y_4389_);
lean_dec(v_a_4429_);
if (lean_obj_tag(v___x_4439_) == 0)
{
lean_object* v___x_4440_; 
lean_dec_ref_known(v___x_4439_, 1);
v___x_4440_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_4380_, v___y_4381_, v___y_4382_, v_leanOpts_4383_, v_reconfigure_4384_, v_as_4385_, v___x_4400_, v_stop_4387_, v___x_4432_, v___y_4389_);
return v___x_4440_;
}
else
{
lean_object* v_a_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4448_; 
lean_dec_ref(v___x_4432_);
lean_dec_ref(v_leanOpts_4383_);
lean_dec_ref(v___y_4382_);
lean_dec_ref(v_pkg_4380_);
v_a_4441_ = lean_ctor_get(v___x_4439_, 0);
v_isSharedCheck_4448_ = !lean_is_exclusive(v___x_4439_);
if (v_isSharedCheck_4448_ == 0)
{
v___x_4443_ = v___x_4439_;
v_isShared_4444_ = v_isSharedCheck_4448_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_a_4441_);
lean_dec(v___x_4439_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4448_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v___x_4446_; 
if (v_isShared_4444_ == 0)
{
v___x_4446_ = v___x_4443_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4447_; 
v_reuseFailAlloc_4447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4447_, 0, v_a_4441_);
v___x_4446_ = v_reuseFailAlloc_4447_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
return v___x_4446_;
}
}
}
}
}
}
else
{
lean_object* v_a_4450_; lean_object* v___x_4451_; uint8_t v___x_4452_; 
lean_del_object(v___x_4395_);
lean_dec_ref(v_depIdxs_4393_);
lean_dec_ref(v_leanOpts_4383_);
lean_dec_ref(v___y_4382_);
lean_dec_ref(v_pkg_4380_);
v_a_4450_ = lean_ctor_get(v___x_4427_, 1);
lean_inc(v_a_4450_);
lean_dec_ref_known(v___x_4427_, 2);
v___x_4451_ = lean_array_get_size(v_a_4450_);
v___x_4452_ = lean_nat_dec_lt(v___x_4403_, v___x_4451_);
if (v___x_4452_ == 0)
{
lean_object* v___x_4453_; lean_object* v___x_4455_; 
lean_dec(v_a_4450_);
v___x_4453_ = lean_box(0);
if (v_isShared_4424_ == 0)
{
lean_ctor_set_tag(v___x_4423_, 1);
lean_ctor_set(v___x_4423_, 0, v___x_4453_);
v___x_4455_ = v___x_4423_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v___x_4453_);
v___x_4455_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
return v___x_4455_;
}
}
else
{
lean_object* v___x_4457_; size_t v___x_4458_; size_t v___x_4459_; lean_object* v___x_4460_; 
lean_del_object(v___x_4423_);
v___x_4457_ = lean_box(0);
v___x_4458_ = ((size_t)0ULL);
v___x_4459_ = lean_usize_of_nat(v___x_4451_);
v___x_4460_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4450_, v___x_4458_, v___x_4459_, v___x_4457_, v___y_4389_);
lean_dec(v_a_4450_);
if (lean_obj_tag(v___x_4460_) == 0)
{
lean_object* v___x_4462_; uint8_t v_isShared_4463_; uint8_t v_isSharedCheck_4467_; 
v_isSharedCheck_4467_ = !lean_is_exclusive(v___x_4460_);
if (v_isSharedCheck_4467_ == 0)
{
lean_object* v_unused_4468_; 
v_unused_4468_ = lean_ctor_get(v___x_4460_, 0);
lean_dec(v_unused_4468_);
v___x_4462_ = v___x_4460_;
v_isShared_4463_ = v_isSharedCheck_4467_;
goto v_resetjp_4461_;
}
else
{
lean_dec(v___x_4460_);
v___x_4462_ = lean_box(0);
v_isShared_4463_ = v_isSharedCheck_4467_;
goto v_resetjp_4461_;
}
v_resetjp_4461_:
{
lean_object* v___x_4465_; 
if (v_isShared_4463_ == 0)
{
lean_ctor_set_tag(v___x_4462_, 1);
lean_ctor_set(v___x_4462_, 0, v___x_4457_);
v___x_4465_ = v___x_4462_;
goto v_reusejp_4464_;
}
else
{
lean_object* v_reuseFailAlloc_4466_; 
v_reuseFailAlloc_4466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4466_, 0, v___x_4457_);
v___x_4465_ = v_reuseFailAlloc_4466_;
goto v_reusejp_4464_;
}
v_reusejp_4464_:
{
return v___x_4465_;
}
}
}
else
{
lean_object* v_a_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4476_; 
v_a_4469_ = lean_ctor_get(v___x_4460_, 0);
v_isSharedCheck_4476_ = !lean_is_exclusive(v___x_4460_);
if (v_isSharedCheck_4476_ == 0)
{
v___x_4471_ = v___x_4460_;
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_a_4469_);
lean_dec(v___x_4460_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v___x_4474_; 
if (v_isShared_4472_ == 0)
{
v___x_4474_ = v___x_4471_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4475_; 
v_reuseFailAlloc_4475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4475_, 0, v_a_4469_);
v___x_4474_ = v_reuseFailAlloc_4475_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
return v___x_4474_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4478_; lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4485_; 
lean_del_object(v___x_4395_);
lean_dec_ref(v_depIdxs_4393_);
lean_dec_ref(v_ws_4392_);
lean_dec_ref(v_leanOpts_4383_);
lean_dec_ref(v___y_4382_);
lean_dec_ref(v_pkg_4380_);
v_a_4478_ = lean_ctor_get(v___x_4420_, 0);
v_isSharedCheck_4485_ = !lean_is_exclusive(v___x_4420_);
if (v_isSharedCheck_4485_ == 0)
{
v___x_4480_ = v___x_4420_;
v_isShared_4481_ = v_isSharedCheck_4485_;
goto v_resetjp_4479_;
}
else
{
lean_inc(v_a_4478_);
lean_dec(v___x_4420_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4485_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
lean_object* v___x_4483_; 
if (v_isShared_4481_ == 0)
{
v___x_4483_ = v___x_4480_;
goto v_reusejp_4482_;
}
else
{
lean_object* v_reuseFailAlloc_4484_; 
v_reuseFailAlloc_4484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4484_, 0, v_a_4478_);
v___x_4483_ = v_reuseFailAlloc_4484_;
goto v_reusejp_4482_;
}
v_reusejp_4482_:
{
return v___x_4483_;
}
}
}
}
else
{
uint8_t v___x_4486_; 
lean_inc(v_baseName_4412_);
lean_inc(v_wsIdx_4411_);
lean_dec(v___x_4416_);
lean_del_object(v___x_4395_);
lean_dec_ref(v_depIdxs_4393_);
lean_dec_ref(v_ws_4392_);
lean_dec_ref(v_leanOpts_4383_);
lean_dec_ref(v___y_4382_);
lean_dec_ref(v_pkg_4380_);
v___x_4486_ = lean_nat_dec_eq(v_wsIdx_4411_, v___x_4403_);
lean_dec(v_wsIdx_4411_);
if (v___x_4486_ == 0)
{
lean_object* v___x_4487_; uint8_t v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; uint8_t v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; 
v___x_4487_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_4488_ = 1;
lean_inc(v_name_4413_);
v___x_4489_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4413_, v___x_4488_);
v___x_4490_ = lean_string_append(v___x_4487_, v___x_4489_);
lean_dec_ref(v___x_4489_);
v___x_4491_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1));
v___x_4492_ = lean_string_append(v___x_4490_, v___x_4491_);
v___x_4493_ = l_Lean_Name_toString(v_baseName_4412_, v___x_4486_);
v___x_4494_ = lean_string_append(v___x_4492_, v___x_4493_);
lean_dec_ref(v___x_4493_);
v___x_4495_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_4496_ = lean_string_append(v___x_4494_, v___x_4495_);
v___x_4497_ = 3;
v___x_4498_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4498_, 0, v___x_4496_);
lean_ctor_set_uint8(v___x_4498_, sizeof(void*)*1, v___x_4497_);
lean_inc_ref(v___y_4389_);
v___x_4499_ = lean_apply_2(v___y_4389_, v___x_4498_, lean_box(0));
v___x_4500_ = lean_box(0);
v___x_4501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4501_, 0, v___x_4500_);
return v___x_4501_;
}
else
{
lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; uint8_t v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; 
lean_dec(v_baseName_4412_);
v___x_4502_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
lean_inc(v_name_4413_);
v___x_4503_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4413_, v___x_4486_);
v___x_4504_ = lean_string_append(v___x_4502_, v___x_4503_);
v___x_4505_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3));
v___x_4506_ = lean_string_append(v___x_4504_, v___x_4505_);
v___x_4507_ = lean_string_append(v___x_4506_, v___x_4503_);
lean_dec_ref(v___x_4503_);
v___x_4508_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4));
v___x_4509_ = lean_string_append(v___x_4507_, v___x_4508_);
v___x_4510_ = 3;
v___x_4511_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4511_, 0, v___x_4509_);
lean_ctor_set_uint8(v___x_4511_, sizeof(void*)*1, v___x_4510_);
lean_inc_ref(v___y_4389_);
v___x_4512_ = lean_apply_2(v___y_4389_, v___x_4511_, lean_box(0));
v___x_4513_ = lean_box(0);
v___x_4514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4514_, 0, v___x_4513_);
return v___x_4514_;
}
}
}
else
{
lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; uint8_t v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
lean_inc(v_baseName_4412_);
lean_del_object(v___x_4395_);
lean_dec_ref(v_depIdxs_4393_);
lean_dec_ref(v_ws_4392_);
lean_dec_ref(v_leanOpts_4383_);
lean_dec_ref(v___y_4382_);
lean_dec_ref(v_pkg_4380_);
v___x_4515_ = l_Lean_Name_toString(v_baseName_4412_, v___x_4391_);
v___x_4516_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_4517_ = lean_string_append(v___x_4515_, v___x_4516_);
v___x_4518_ = 3;
v___x_4519_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4519_, 0, v___x_4517_);
lean_ctor_set_uint8(v___x_4519_, sizeof(void*)*1, v___x_4518_);
lean_inc_ref(v___y_4389_);
v___x_4520_ = lean_apply_2(v___y_4389_, v___x_4519_, lean_box(0));
v___x_4521_ = lean_box(0);
v___x_4522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4522_, 0, v___x_4521_);
return v___x_4522_;
}
}
}
}
else
{
lean_object* v___x_4524_; 
lean_dec_ref(v_leanOpts_4383_);
lean_dec_ref(v___y_4382_);
lean_dec_ref(v_pkg_4380_);
v___x_4524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4524_, 0, v_b_4388_);
return v___x_4524_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0___boxed(lean_object* v_start_4525_, lean_object* v_pkg_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v_leanOpts_4529_, lean_object* v_reconfigure_4530_, lean_object* v_as_4531_, lean_object* v_i_4532_, lean_object* v_stop_4533_, lean_object* v_b_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_){
_start:
{
uint8_t v_reconfigure_boxed_4537_; size_t v_i_boxed_4538_; size_t v_stop_boxed_4539_; lean_object* v_res_4540_; 
v_reconfigure_boxed_4537_ = lean_unbox(v_reconfigure_4530_);
v_i_boxed_4538_ = lean_unbox_usize(v_i_4532_);
lean_dec(v_i_4532_);
v_stop_boxed_4539_ = lean_unbox_usize(v_stop_4533_);
lean_dec(v_stop_4533_);
v_res_4540_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_4525_, v_pkg_4526_, v___y_4527_, v___y_4528_, v_leanOpts_4529_, v_reconfigure_boxed_4537_, v_as_4531_, v_i_boxed_4538_, v_stop_boxed_4539_, v_b_4534_, v___y_4535_);
lean_dec_ref(v___y_4535_);
lean_dec_ref(v_as_4531_);
lean_dec(v___y_4527_);
lean_dec(v_start_4525_);
return v_res_4540_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v_leanOpts_4543_, uint8_t v_reconfigure_4544_, lean_object* v_ws_4545_, lean_object* v_i_4546_, lean_object* v_next_4547_, lean_object* v___y_4548_){
_start:
{
lean_object* v_packages_4550_; lean_object* v_pkg_4551_; lean_object* v_ws_4553_; lean_object* v_depIdxs_4554_; lean_object* v___y_4555_; lean_object* v_____x_4565_; lean_object* v___y_4566_; lean_object* v_depConfigs_4569_; lean_object* v_start_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v_s_4573_; lean_object* v___x_4574_; uint8_t v___x_4575_; 
v_packages_4550_ = lean_ctor_get(v_ws_4545_, 4);
v_pkg_4551_ = lean_array_fget(v_packages_4550_, v_i_4546_);
lean_dec(v_i_4546_);
v_depConfigs_4569_ = lean_ctor_get(v_pkg_4551_, 12);
v_start_4570_ = lean_array_get_size(v_packages_4550_);
v___x_4571_ = lean_array_get_size(v_depConfigs_4569_);
v___x_4572_ = lean_mk_empty_array_with_capacity(v___x_4571_);
lean_inc_ref(v___x_4572_);
lean_inc_ref(v_ws_4545_);
v_s_4573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_4573_, 0, v_ws_4545_);
lean_ctor_set(v_s_4573_, 1, v___x_4572_);
v___x_4574_ = lean_unsigned_to_nat(0u);
v___x_4575_ = lean_nat_dec_le(v___x_4571_, v___x_4571_);
if (v___x_4575_ == 0)
{
uint8_t v___x_4576_; 
v___x_4576_ = lean_nat_dec_lt(v___x_4574_, v___x_4571_);
if (v___x_4576_ == 0)
{
lean_object* v_ws_4577_; lean_object* v_packages_4578_; lean_object* v___x_4579_; uint8_t v___x_4580_; 
lean_dec_ref_known(v_s_4573_, 2);
v_ws_4577_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_4545_, v_pkg_4551_, v___x_4572_);
v_packages_4578_ = lean_ctor_get(v_ws_4577_, 4);
lean_inc_ref(v_packages_4578_);
v___x_4579_ = lean_array_get_size(v_packages_4578_);
lean_dec_ref(v_packages_4578_);
v___x_4580_ = lean_nat_dec_lt(v_next_4547_, v___x_4579_);
if (v___x_4580_ == 0)
{
lean_object* v___x_4581_; 
lean_dec(v_next_4547_);
lean_dec_ref(v_leanOpts_4543_);
lean_dec_ref(v___y_4542_);
v___x_4581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4581_, 0, v_ws_4577_);
return v___x_4581_;
}
else
{
lean_object* v___x_4582_; lean_object* v___x_4583_; 
v___x_4582_ = lean_unsigned_to_nat(1u);
v___x_4583_ = lean_nat_add(v_next_4547_, v___x_4582_);
v_ws_4545_ = v_ws_4577_;
v_i_4546_ = v_next_4547_;
v_next_4547_ = v___x_4583_;
goto _start;
}
}
else
{
size_t v___x_4585_; size_t v___x_4586_; lean_object* v___x_4587_; 
lean_dec_ref(v___x_4572_);
lean_dec_ref(v_ws_4545_);
v___x_4585_ = lean_usize_of_nat(v___x_4571_);
v___x_4586_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_4543_);
lean_inc_ref(v___y_4542_);
lean_inc(v_pkg_4551_);
v___x_4587_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_4570_, v_pkg_4551_, v___y_4541_, v___y_4542_, v_leanOpts_4543_, v_reconfigure_4544_, v_depConfigs_4569_, v___x_4585_, v___x_4586_, v_s_4573_, v___y_4548_);
if (lean_obj_tag(v___x_4587_) == 0)
{
lean_object* v_a_4588_; 
v_a_4588_ = lean_ctor_get(v___x_4587_, 0);
lean_inc(v_a_4588_);
lean_dec_ref_known(v___x_4587_, 1);
v_____x_4565_ = v_a_4588_;
v___y_4566_ = v___y_4548_;
goto v___jp_4564_;
}
else
{
lean_object* v_a_4589_; lean_object* v___x_4591_; uint8_t v_isShared_4592_; uint8_t v_isSharedCheck_4596_; 
lean_dec(v_pkg_4551_);
lean_dec(v_next_4547_);
lean_dec_ref(v_leanOpts_4543_);
lean_dec_ref(v___y_4542_);
v_a_4589_ = lean_ctor_get(v___x_4587_, 0);
v_isSharedCheck_4596_ = !lean_is_exclusive(v___x_4587_);
if (v_isSharedCheck_4596_ == 0)
{
v___x_4591_ = v___x_4587_;
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
else
{
lean_inc(v_a_4589_);
lean_dec(v___x_4587_);
v___x_4591_ = lean_box(0);
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
v_resetjp_4590_:
{
lean_object* v___x_4594_; 
if (v_isShared_4592_ == 0)
{
v___x_4594_ = v___x_4591_;
goto v_reusejp_4593_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v_a_4589_);
v___x_4594_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4593_;
}
v_reusejp_4593_:
{
return v___x_4594_;
}
}
}
}
}
else
{
uint8_t v___x_4597_; 
v___x_4597_ = lean_nat_dec_lt(v___x_4574_, v___x_4571_);
if (v___x_4597_ == 0)
{
lean_dec_ref_known(v_s_4573_, 2);
v_ws_4553_ = v_ws_4545_;
v_depIdxs_4554_ = v___x_4572_;
v___y_4555_ = v___y_4548_;
goto v___jp_4552_;
}
else
{
size_t v___x_4598_; size_t v___x_4599_; lean_object* v___x_4600_; 
lean_dec_ref(v___x_4572_);
lean_dec_ref(v_ws_4545_);
v___x_4598_ = lean_usize_of_nat(v___x_4571_);
v___x_4599_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_4543_);
lean_inc_ref(v___y_4542_);
lean_inc(v_pkg_4551_);
v___x_4600_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_4570_, v_pkg_4551_, v___y_4541_, v___y_4542_, v_leanOpts_4543_, v_reconfigure_4544_, v_depConfigs_4569_, v___x_4598_, v___x_4599_, v_s_4573_, v___y_4548_);
if (lean_obj_tag(v___x_4600_) == 0)
{
lean_object* v_a_4601_; 
v_a_4601_ = lean_ctor_get(v___x_4600_, 0);
lean_inc(v_a_4601_);
lean_dec_ref_known(v___x_4600_, 1);
v_____x_4565_ = v_a_4601_;
v___y_4566_ = v___y_4548_;
goto v___jp_4564_;
}
else
{
lean_object* v_a_4602_; lean_object* v___x_4604_; uint8_t v_isShared_4605_; uint8_t v_isSharedCheck_4609_; 
lean_dec(v_pkg_4551_);
lean_dec(v_next_4547_);
lean_dec_ref(v_leanOpts_4543_);
lean_dec_ref(v___y_4542_);
v_a_4602_ = lean_ctor_get(v___x_4600_, 0);
v_isSharedCheck_4609_ = !lean_is_exclusive(v___x_4600_);
if (v_isSharedCheck_4609_ == 0)
{
v___x_4604_ = v___x_4600_;
v_isShared_4605_ = v_isSharedCheck_4609_;
goto v_resetjp_4603_;
}
else
{
lean_inc(v_a_4602_);
lean_dec(v___x_4600_);
v___x_4604_ = lean_box(0);
v_isShared_4605_ = v_isSharedCheck_4609_;
goto v_resetjp_4603_;
}
v_resetjp_4603_:
{
lean_object* v___x_4607_; 
if (v_isShared_4605_ == 0)
{
v___x_4607_ = v___x_4604_;
goto v_reusejp_4606_;
}
else
{
lean_object* v_reuseFailAlloc_4608_; 
v_reuseFailAlloc_4608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4608_, 0, v_a_4602_);
v___x_4607_ = v_reuseFailAlloc_4608_;
goto v_reusejp_4606_;
}
v_reusejp_4606_:
{
return v___x_4607_;
}
}
}
}
}
v___jp_4552_:
{
lean_object* v_ws_4556_; lean_object* v_packages_4557_; lean_object* v___x_4558_; uint8_t v___x_4559_; 
v_ws_4556_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_4553_, v_pkg_4551_, v_depIdxs_4554_);
v_packages_4557_ = lean_ctor_get(v_ws_4556_, 4);
lean_inc_ref(v_packages_4557_);
v___x_4558_ = lean_array_get_size(v_packages_4557_);
lean_dec_ref(v_packages_4557_);
v___x_4559_ = lean_nat_dec_lt(v_next_4547_, v___x_4558_);
if (v___x_4559_ == 0)
{
lean_object* v___x_4560_; 
lean_dec(v_next_4547_);
lean_dec_ref(v_leanOpts_4543_);
lean_dec_ref(v___y_4542_);
v___x_4560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4560_, 0, v_ws_4556_);
return v___x_4560_;
}
else
{
lean_object* v___x_4561_; lean_object* v___x_4562_; 
v___x_4561_ = lean_unsigned_to_nat(1u);
v___x_4562_ = lean_nat_add(v_next_4547_, v___x_4561_);
v_ws_4545_ = v_ws_4556_;
v_i_4546_ = v_next_4547_;
v_next_4547_ = v___x_4562_;
v___y_4548_ = v___y_4555_;
goto _start;
}
}
v___jp_4564_:
{
lean_object* v_ws_4567_; lean_object* v_depIdxs_4568_; 
v_ws_4567_ = lean_ctor_get(v_____x_4565_, 0);
lean_inc_ref(v_ws_4567_);
v_depIdxs_4568_ = lean_ctor_get(v_____x_4565_, 1);
lean_inc_ref(v_depIdxs_4568_);
lean_dec_ref(v_____x_4565_);
v_ws_4553_ = v_ws_4567_;
v_depIdxs_4554_ = v_depIdxs_4568_;
v___y_4555_ = v___y_4566_;
goto v___jp_4552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg___boxed(lean_object* v___y_4610_, lean_object* v___y_4611_, lean_object* v_leanOpts_4612_, lean_object* v_reconfigure_4613_, lean_object* v_ws_4614_, lean_object* v_i_4615_, lean_object* v_next_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_){
_start:
{
uint8_t v_reconfigure_boxed_4619_; lean_object* v_res_4620_; 
v_reconfigure_boxed_4619_ = lean_unbox(v_reconfigure_4613_);
v_res_4620_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_4610_, v___y_4611_, v_leanOpts_4612_, v_reconfigure_boxed_4619_, v_ws_4614_, v_i_4615_, v_next_4616_, v___y_4617_);
lean_dec_ref(v___y_4617_);
lean_dec(v___y_4610_);
return v_res_4620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(lean_object* v_as_4621_, size_t v_i_4622_, size_t v_stop_4623_, lean_object* v_b_4624_){
_start:
{
uint8_t v___x_4625_; 
v___x_4625_ = lean_usize_dec_eq(v_i_4622_, v_stop_4623_);
if (v___x_4625_ == 0)
{
lean_object* v___x_4626_; lean_object* v_name_4627_; lean_object* v___x_4628_; size_t v___x_4629_; size_t v___x_4630_; 
v___x_4626_ = lean_array_uget_borrowed(v_as_4621_, v_i_4622_);
v_name_4627_ = lean_ctor_get(v___x_4626_, 0);
lean_inc(v___x_4626_);
lean_inc(v_name_4627_);
v___x_4628_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_4627_, v___x_4626_, v_b_4624_);
v___x_4629_ = ((size_t)1ULL);
v___x_4630_ = lean_usize_add(v_i_4622_, v___x_4629_);
v_i_4622_ = v___x_4630_;
v_b_4624_ = v___x_4628_;
goto _start;
}
else
{
return v_b_4624_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2___boxed(lean_object* v_as_4632_, lean_object* v_i_4633_, lean_object* v_stop_4634_, lean_object* v_b_4635_){
_start:
{
size_t v_i_boxed_4636_; size_t v_stop_boxed_4637_; lean_object* v_res_4638_; 
v_i_boxed_4636_ = lean_unbox_usize(v_i_4633_);
lean_dec(v_i_4633_);
v_stop_boxed_4637_ = lean_unbox_usize(v_stop_4634_);
lean_dec(v_stop_4634_);
v_res_4638_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(v_as_4632_, v_i_boxed_4636_, v_stop_boxed_4637_, v_b_4635_);
lean_dec_ref(v_as_4632_);
return v_res_4638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(lean_object* v_as_4639_, size_t v_i_4640_, size_t v_stop_4641_, lean_object* v_b_4642_){
_start:
{
uint8_t v___x_4643_; 
v___x_4643_ = lean_usize_dec_eq(v_i_4640_, v_stop_4641_);
if (v___x_4643_ == 0)
{
lean_object* v___x_4644_; lean_object* v_name_4645_; lean_object* v___x_4646_; size_t v___x_4647_; size_t v___x_4648_; lean_object* v___x_4649_; 
v___x_4644_ = lean_array_uget_borrowed(v_as_4639_, v_i_4640_);
v_name_4645_ = lean_ctor_get(v___x_4644_, 0);
lean_inc(v___x_4644_);
lean_inc(v_name_4645_);
v___x_4646_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_4645_, v___x_4644_, v_b_4642_);
v___x_4647_ = ((size_t)1ULL);
v___x_4648_ = lean_usize_add(v_i_4640_, v___x_4647_);
v___x_4649_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(v_as_4639_, v___x_4648_, v_stop_4641_, v___x_4646_);
return v___x_4649_;
}
else
{
return v_b_4642_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1___boxed(lean_object* v_as_4650_, lean_object* v_i_4651_, lean_object* v_stop_4652_, lean_object* v_b_4653_){
_start:
{
size_t v_i_boxed_4654_; size_t v_stop_boxed_4655_; lean_object* v_res_4656_; 
v_i_boxed_4654_ = lean_unbox_usize(v_i_4651_);
lean_dec(v_i_4651_);
v_stop_boxed_4655_ = lean_unbox_usize(v_stop_4652_);
lean_dec(v_stop_4652_);
v_res_4656_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_as_4650_, v_i_boxed_4654_, v_stop_boxed_4655_, v_b_4653_);
lean_dec_ref(v_as_4650_);
return v_res_4656_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps(lean_object* v_ws_4666_, lean_object* v_manifest_4667_, lean_object* v_leanOpts_4668_, uint8_t v_reconfigure_4669_, lean_object* v_overrides_4670_, lean_object* v___y_4671_){
_start:
{
lean_object* v___y_4674_; lean_object* v___y_4675_; lean_object* v___y_4676_; lean_object* v___y_4677_; lean_object* v___y_4678_; lean_object* v___y_4691_; lean_object* v___y_4692_; lean_object* v___y_4693_; lean_object* v___y_4694_; lean_object* v___y_4695_; uint8_t v___y_4696_; lean_object* v___y_4702_; lean_object* v___y_4703_; lean_object* v___y_4704_; lean_object* v___y_4705_; lean_object* v___y_4706_; lean_object* v___y_4707_; lean_object* v___y_4708_; lean_object* v___y_4713_; lean_object* v___y_4714_; lean_object* v___y_4715_; lean_object* v___y_4716_; lean_object* v___y_4717_; lean_object* v___y_4718_; lean_object* v___y_4719_; lean_object* v___y_4730_; lean_object* v___y_4731_; lean_object* v___y_4732_; lean_object* v___y_4733_; lean_object* v_packagesDir_x3f_4776_; lean_object* v_packages_4777_; lean_object* v___y_4779_; lean_object* v___y_4780_; lean_object* v___y_4793_; lean_object* v___x_4801_; lean_object* v___x_4802_; uint8_t v___x_4803_; 
v_packagesDir_x3f_4776_ = lean_ctor_get(v_manifest_4667_, 2);
lean_inc(v_packagesDir_x3f_4776_);
v_packages_4777_ = lean_ctor_get(v_manifest_4667_, 3);
lean_inc_ref(v_packages_4777_);
lean_dec_ref(v_manifest_4667_);
v___x_4801_ = lean_array_get_size(v_packages_4777_);
v___x_4802_ = lean_unsigned_to_nat(0u);
v___x_4803_ = lean_nat_dec_eq(v___x_4801_, v___x_4802_);
if (v___x_4803_ == 0)
{
lean_object* v_packages_4804_; lean_object* v___x_4805_; lean_object* v_config_4806_; lean_object* v_toWorkspaceConfig_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; uint8_t v___x_4811_; 
v_packages_4804_ = lean_ctor_get(v_ws_4666_, 4);
v___x_4805_ = lean_array_fget_borrowed(v_packages_4804_, v___x_4802_);
v_config_4806_ = lean_ctor_get(v___x_4805_, 6);
v_toWorkspaceConfig_4807_ = lean_ctor_get(v_config_4806_, 0);
lean_inc_ref(v_toWorkspaceConfig_4807_);
v___x_4808_ = l_System_FilePath_normalize(v_toWorkspaceConfig_4807_);
v___x_4809_ = l_Lake_mkRelPathString(v___x_4808_);
v___x_4810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4810_, 0, v___x_4809_);
v___x_4811_ = l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(v_packagesDir_x3f_4776_, v___x_4810_);
lean_dec_ref_known(v___x_4810_, 1);
if (v___x_4811_ == 0)
{
lean_object* v___x_4812_; lean_object* v___x_4813_; 
v___x_4812_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__4));
lean_inc_ref(v___y_4671_);
v___x_4813_ = lean_apply_2(v___y_4671_, v___x_4812_, lean_box(0));
v___y_4793_ = v___y_4671_;
goto v___jp_4792_;
}
else
{
v___y_4793_ = v___y_4671_;
goto v___jp_4792_;
}
}
else
{
v___y_4793_ = v___y_4671_;
goto v___jp_4792_;
}
v___jp_4673_:
{
lean_object* v___x_4679_; lean_object* v___x_4680_; 
v___x_4679_ = lean_array_get_size(v___y_4674_);
lean_dec_ref(v___y_4674_);
v___x_4680_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_4675_, v___y_4676_, v_leanOpts_4668_, v_reconfigure_4669_, v_ws_4666_, v___y_4677_, v___x_4679_, v___y_4678_);
lean_dec(v___y_4675_);
if (lean_obj_tag(v___x_4680_) == 0)
{
lean_object* v_a_4681_; lean_object* v___x_4683_; uint8_t v_isShared_4684_; uint8_t v_isSharedCheck_4689_; 
v_a_4681_ = lean_ctor_get(v___x_4680_, 0);
v_isSharedCheck_4689_ = !lean_is_exclusive(v___x_4680_);
if (v_isSharedCheck_4689_ == 0)
{
v___x_4683_ = v___x_4680_;
v_isShared_4684_ = v_isSharedCheck_4689_;
goto v_resetjp_4682_;
}
else
{
lean_inc(v_a_4681_);
lean_dec(v___x_4680_);
v___x_4683_ = lean_box(0);
v_isShared_4684_ = v_isSharedCheck_4689_;
goto v_resetjp_4682_;
}
v_resetjp_4682_:
{
lean_object* v___x_4685_; lean_object* v___x_4687_; 
v___x_4685_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_a_4681_);
if (v_isShared_4684_ == 0)
{
lean_ctor_set(v___x_4683_, 0, v___x_4685_);
v___x_4687_ = v___x_4683_;
goto v_reusejp_4686_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v___x_4685_);
v___x_4687_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4686_;
}
v_reusejp_4686_:
{
return v___x_4687_;
}
}
}
else
{
return v___x_4680_;
}
}
v___jp_4690_:
{
if (v___y_4696_ == 0)
{
v___y_4674_ = v___y_4691_;
v___y_4675_ = v___y_4692_;
v___y_4676_ = v___y_4693_;
v___y_4677_ = v___y_4694_;
v___y_4678_ = v___y_4695_;
goto v___jp_4673_;
}
else
{
lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; 
lean_dec(v___y_4694_);
lean_dec_ref(v___y_4693_);
lean_dec(v___y_4692_);
lean_dec_ref(v___y_4691_);
lean_dec_ref(v_leanOpts_4668_);
lean_dec_ref(v_ws_4666_);
v___x_4697_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__1));
lean_inc_ref(v___y_4695_);
v___x_4698_ = lean_apply_2(v___y_4695_, v___x_4697_, lean_box(0));
v___x_4699_ = lean_box(0);
v___x_4700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4700_, 0, v___x_4699_);
return v___x_4700_;
}
}
v___jp_4701_:
{
uint8_t v___x_4709_; 
v___x_4709_ = l_Lean_NameMap_isEmpty___redArg(v___y_4708_);
if (v___x_4709_ == 0)
{
lean_dec_ref(v___y_4705_);
v___y_4691_ = v___y_4702_;
v___y_4692_ = v___y_4708_;
v___y_4693_ = v___y_4704_;
v___y_4694_ = v___y_4706_;
v___y_4695_ = v___y_4707_;
v___y_4696_ = v___x_4709_;
goto v___jp_4690_;
}
else
{
lean_object* v___x_4710_; uint8_t v___x_4711_; 
v___x_4710_ = lean_array_get_size(v___y_4705_);
lean_dec_ref(v___y_4705_);
v___x_4711_ = lean_nat_dec_eq(v___x_4710_, v___y_4703_);
if (v___x_4711_ == 0)
{
v___y_4691_ = v___y_4702_;
v___y_4692_ = v___y_4708_;
v___y_4693_ = v___y_4704_;
v___y_4694_ = v___y_4706_;
v___y_4695_ = v___y_4707_;
v___y_4696_ = v___x_4709_;
goto v___jp_4690_;
}
else
{
v___y_4674_ = v___y_4702_;
v___y_4675_ = v___y_4708_;
v___y_4676_ = v___y_4704_;
v___y_4677_ = v___y_4706_;
v___y_4678_ = v___y_4707_;
goto v___jp_4673_;
}
}
}
v___jp_4712_:
{
lean_object* v___x_4720_; uint8_t v___x_4721_; 
v___x_4720_ = lean_array_get_size(v_overrides_4670_);
v___x_4721_ = lean_nat_dec_lt(v___y_4715_, v___x_4720_);
if (v___x_4721_ == 0)
{
v___y_4702_ = v___y_4713_;
v___y_4703_ = v___y_4715_;
v___y_4704_ = v___y_4714_;
v___y_4705_ = v___y_4717_;
v___y_4706_ = v___y_4716_;
v___y_4707_ = v___y_4718_;
v___y_4708_ = v___y_4719_;
goto v___jp_4701_;
}
else
{
uint8_t v___x_4722_; 
v___x_4722_ = lean_nat_dec_le(v___x_4720_, v___x_4720_);
if (v___x_4722_ == 0)
{
if (v___x_4721_ == 0)
{
v___y_4702_ = v___y_4713_;
v___y_4703_ = v___y_4715_;
v___y_4704_ = v___y_4714_;
v___y_4705_ = v___y_4717_;
v___y_4706_ = v___y_4716_;
v___y_4707_ = v___y_4718_;
v___y_4708_ = v___y_4719_;
goto v___jp_4701_;
}
else
{
size_t v___x_4723_; size_t v___x_4724_; lean_object* v___x_4725_; 
v___x_4723_ = ((size_t)0ULL);
v___x_4724_ = lean_usize_of_nat(v___x_4720_);
v___x_4725_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_overrides_4670_, v___x_4723_, v___x_4724_, v___y_4719_);
v___y_4702_ = v___y_4713_;
v___y_4703_ = v___y_4715_;
v___y_4704_ = v___y_4714_;
v___y_4705_ = v___y_4717_;
v___y_4706_ = v___y_4716_;
v___y_4707_ = v___y_4718_;
v___y_4708_ = v___x_4725_;
goto v___jp_4701_;
}
}
else
{
size_t v___x_4726_; size_t v___x_4727_; lean_object* v___x_4728_; 
v___x_4726_ = ((size_t)0ULL);
v___x_4727_ = lean_usize_of_nat(v___x_4720_);
v___x_4728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_overrides_4670_, v___x_4726_, v___x_4727_, v___y_4719_);
v___y_4702_ = v___y_4713_;
v___y_4703_ = v___y_4715_;
v___y_4704_ = v___y_4714_;
v___y_4705_ = v___y_4717_;
v___y_4706_ = v___y_4716_;
v___y_4707_ = v___y_4718_;
v___y_4708_ = v___x_4728_;
goto v___jp_4701_;
}
}
}
v___jp_4729_:
{
lean_object* v_packages_4734_; lean_object* v___x_4735_; lean_object* v_wsIdx_4736_; lean_object* v_dir_4737_; lean_object* v_depConfigs_4738_; lean_object* v___x_4739_; 
v_packages_4734_ = lean_ctor_get(v_ws_4666_, 4);
v___x_4735_ = lean_array_fget_borrowed(v_packages_4734_, v___y_4731_);
v_wsIdx_4736_ = lean_ctor_get(v___x_4735_, 0);
v_dir_4737_ = lean_ctor_get(v___x_4735_, 4);
v_depConfigs_4738_ = lean_ctor_get(v___x_4735_, 12);
v___x_4739_ = l___private_Lake_Load_Resolve_0__Lake_validateManifest(v___y_4733_, v_depConfigs_4738_, v___y_4732_);
if (lean_obj_tag(v___x_4739_) == 0)
{
lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; 
lean_dec_ref_known(v___x_4739_, 1);
v___x_4740_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_dir_4737_);
v___x_4741_ = l_Lake_joinRelative(v_dir_4737_, v___x_4740_);
v___x_4742_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__2));
v___x_4743_ = l_Lake_joinRelative(v___x_4741_, v___x_4742_);
v___x_4744_ = l_Lake_Manifest_tryLoadEntries(v___x_4743_);
if (lean_obj_tag(v___x_4744_) == 0)
{
lean_object* v_a_4745_; lean_object* v___x_4746_; uint8_t v___x_4747_; 
v_a_4745_ = lean_ctor_get(v___x_4744_, 0);
lean_inc(v_a_4745_);
lean_dec_ref_known(v___x_4744_, 1);
v___x_4746_ = lean_array_get_size(v_a_4745_);
v___x_4747_ = lean_nat_dec_lt(v___y_4731_, v___x_4746_);
if (v___x_4747_ == 0)
{
lean_dec(v_a_4745_);
lean_inc_ref(v_depConfigs_4738_);
lean_inc(v_wsIdx_4736_);
lean_inc_ref(v_packages_4734_);
v___y_4713_ = v_packages_4734_;
v___y_4714_ = v___y_4730_;
v___y_4715_ = v___y_4731_;
v___y_4716_ = v_wsIdx_4736_;
v___y_4717_ = v_depConfigs_4738_;
v___y_4718_ = v___y_4732_;
v___y_4719_ = v___y_4733_;
goto v___jp_4712_;
}
else
{
uint8_t v___x_4748_; 
v___x_4748_ = lean_nat_dec_le(v___x_4746_, v___x_4746_);
if (v___x_4748_ == 0)
{
if (v___x_4747_ == 0)
{
lean_dec(v_a_4745_);
lean_inc_ref(v_depConfigs_4738_);
lean_inc(v_wsIdx_4736_);
lean_inc_ref(v_packages_4734_);
v___y_4713_ = v_packages_4734_;
v___y_4714_ = v___y_4730_;
v___y_4715_ = v___y_4731_;
v___y_4716_ = v_wsIdx_4736_;
v___y_4717_ = v_depConfigs_4738_;
v___y_4718_ = v___y_4732_;
v___y_4719_ = v___y_4733_;
goto v___jp_4712_;
}
else
{
size_t v___x_4749_; size_t v___x_4750_; lean_object* v___x_4751_; 
v___x_4749_ = ((size_t)0ULL);
v___x_4750_ = lean_usize_of_nat(v___x_4746_);
v___x_4751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_a_4745_, v___x_4749_, v___x_4750_, v___y_4733_);
lean_dec(v_a_4745_);
lean_inc_ref(v_depConfigs_4738_);
lean_inc(v_wsIdx_4736_);
lean_inc_ref(v_packages_4734_);
v___y_4713_ = v_packages_4734_;
v___y_4714_ = v___y_4730_;
v___y_4715_ = v___y_4731_;
v___y_4716_ = v_wsIdx_4736_;
v___y_4717_ = v_depConfigs_4738_;
v___y_4718_ = v___y_4732_;
v___y_4719_ = v___x_4751_;
goto v___jp_4712_;
}
}
else
{
size_t v___x_4752_; size_t v___x_4753_; lean_object* v___x_4754_; 
v___x_4752_ = ((size_t)0ULL);
v___x_4753_ = lean_usize_of_nat(v___x_4746_);
v___x_4754_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_a_4745_, v___x_4752_, v___x_4753_, v___y_4733_);
lean_dec(v_a_4745_);
lean_inc_ref(v_depConfigs_4738_);
lean_inc(v_wsIdx_4736_);
lean_inc_ref(v_packages_4734_);
v___y_4713_ = v_packages_4734_;
v___y_4714_ = v___y_4730_;
v___y_4715_ = v___y_4731_;
v___y_4716_ = v_wsIdx_4736_;
v___y_4717_ = v_depConfigs_4738_;
v___y_4718_ = v___y_4732_;
v___y_4719_ = v___x_4754_;
goto v___jp_4712_;
}
}
}
else
{
lean_object* v_a_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4767_; 
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4730_);
lean_dec_ref(v_leanOpts_4668_);
lean_dec_ref(v_ws_4666_);
v_a_4755_ = lean_ctor_get(v___x_4744_, 0);
v_isSharedCheck_4767_ = !lean_is_exclusive(v___x_4744_);
if (v_isSharedCheck_4767_ == 0)
{
v___x_4757_ = v___x_4744_;
v_isShared_4758_ = v_isSharedCheck_4767_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_a_4755_);
lean_dec(v___x_4744_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4767_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v___x_4759_; uint8_t v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4765_; 
v___x_4759_ = lean_io_error_to_string(v_a_4755_);
v___x_4760_ = 3;
v___x_4761_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4761_, 0, v___x_4759_);
lean_ctor_set_uint8(v___x_4761_, sizeof(void*)*1, v___x_4760_);
lean_inc_ref(v___y_4732_);
v___x_4762_ = lean_apply_2(v___y_4732_, v___x_4761_, lean_box(0));
v___x_4763_ = lean_box(0);
if (v_isShared_4758_ == 0)
{
lean_ctor_set(v___x_4757_, 0, v___x_4763_);
v___x_4765_ = v___x_4757_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v___x_4763_);
v___x_4765_ = v_reuseFailAlloc_4766_;
goto v_reusejp_4764_;
}
v_reusejp_4764_:
{
return v___x_4765_;
}
}
}
}
else
{
lean_object* v_a_4768_; lean_object* v___x_4770_; uint8_t v_isShared_4771_; uint8_t v_isSharedCheck_4775_; 
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4730_);
lean_dec_ref(v_leanOpts_4668_);
lean_dec_ref(v_ws_4666_);
v_a_4768_ = lean_ctor_get(v___x_4739_, 0);
v_isSharedCheck_4775_ = !lean_is_exclusive(v___x_4739_);
if (v_isSharedCheck_4775_ == 0)
{
v___x_4770_ = v___x_4739_;
v_isShared_4771_ = v_isSharedCheck_4775_;
goto v_resetjp_4769_;
}
else
{
lean_inc(v_a_4768_);
lean_dec(v___x_4739_);
v___x_4770_ = lean_box(0);
v_isShared_4771_ = v_isSharedCheck_4775_;
goto v_resetjp_4769_;
}
v_resetjp_4769_:
{
lean_object* v___x_4773_; 
if (v_isShared_4771_ == 0)
{
v___x_4773_ = v___x_4770_;
goto v_reusejp_4772_;
}
else
{
lean_object* v_reuseFailAlloc_4774_; 
v_reuseFailAlloc_4774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4774_, 0, v_a_4768_);
v___x_4773_ = v_reuseFailAlloc_4774_;
goto v_reusejp_4772_;
}
v_reusejp_4772_:
{
return v___x_4773_;
}
}
}
}
v___jp_4778_:
{
lean_object* v_pkgEntries_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; uint8_t v___x_4784_; 
v_pkgEntries_4781_ = lean_box(1);
v___x_4782_ = lean_unsigned_to_nat(0u);
v___x_4783_ = lean_array_get_size(v_packages_4777_);
v___x_4784_ = lean_nat_dec_lt(v___x_4782_, v___x_4783_);
if (v___x_4784_ == 0)
{
lean_dec_ref(v_packages_4777_);
v___y_4730_ = v___y_4780_;
v___y_4731_ = v___x_4782_;
v___y_4732_ = v___y_4779_;
v___y_4733_ = v_pkgEntries_4781_;
goto v___jp_4729_;
}
else
{
uint8_t v___x_4785_; 
v___x_4785_ = lean_nat_dec_le(v___x_4783_, v___x_4783_);
if (v___x_4785_ == 0)
{
if (v___x_4784_ == 0)
{
lean_dec_ref(v_packages_4777_);
v___y_4730_ = v___y_4780_;
v___y_4731_ = v___x_4782_;
v___y_4732_ = v___y_4779_;
v___y_4733_ = v_pkgEntries_4781_;
goto v___jp_4729_;
}
else
{
size_t v___x_4786_; size_t v___x_4787_; lean_object* v___x_4788_; 
v___x_4786_ = ((size_t)0ULL);
v___x_4787_ = lean_usize_of_nat(v___x_4783_);
v___x_4788_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_packages_4777_, v___x_4786_, v___x_4787_, v_pkgEntries_4781_);
lean_dec_ref(v_packages_4777_);
v___y_4730_ = v___y_4780_;
v___y_4731_ = v___x_4782_;
v___y_4732_ = v___y_4779_;
v___y_4733_ = v___x_4788_;
goto v___jp_4729_;
}
}
else
{
size_t v___x_4789_; size_t v___x_4790_; lean_object* v___x_4791_; 
v___x_4789_ = ((size_t)0ULL);
v___x_4790_ = lean_usize_of_nat(v___x_4783_);
v___x_4791_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_packages_4777_, v___x_4789_, v___x_4790_, v_pkgEntries_4781_);
lean_dec_ref(v_packages_4777_);
v___y_4730_ = v___y_4780_;
v___y_4731_ = v___x_4782_;
v___y_4732_ = v___y_4779_;
v___y_4733_ = v___x_4791_;
goto v___jp_4729_;
}
}
}
v___jp_4792_:
{
if (lean_obj_tag(v_packagesDir_x3f_4776_) == 0)
{
lean_object* v_packages_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v_config_4797_; lean_object* v_toWorkspaceConfig_4798_; lean_object* v___x_4799_; 
v_packages_4794_ = lean_ctor_get(v_ws_4666_, 4);
v___x_4795_ = lean_unsigned_to_nat(0u);
v___x_4796_ = lean_array_fget_borrowed(v_packages_4794_, v___x_4795_);
v_config_4797_ = lean_ctor_get(v___x_4796_, 6);
v_toWorkspaceConfig_4798_ = lean_ctor_get(v_config_4797_, 0);
lean_inc_ref(v_toWorkspaceConfig_4798_);
v___x_4799_ = l_System_FilePath_normalize(v_toWorkspaceConfig_4798_);
v___y_4779_ = v___y_4793_;
v___y_4780_ = v___x_4799_;
goto v___jp_4778_;
}
else
{
lean_object* v_val_4800_; 
v_val_4800_ = lean_ctor_get(v_packagesDir_x3f_4776_, 0);
lean_inc(v_val_4800_);
lean_dec_ref_known(v_packagesDir_x3f_4776_, 1);
v___y_4779_ = v___y_4793_;
v___y_4780_ = v_val_4800_;
goto v___jp_4778_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps___boxed(lean_object* v_ws_4814_, lean_object* v_manifest_4815_, lean_object* v_leanOpts_4816_, lean_object* v_reconfigure_4817_, lean_object* v_overrides_4818_, lean_object* v___y_4819_, lean_object* v___y_4820_){
_start:
{
uint8_t v_reconfigure_boxed_4821_; lean_object* v_res_4822_; 
v_reconfigure_boxed_4821_ = lean_unbox(v_reconfigure_4817_);
v_res_4822_ = l_Lake_Workspace_materializeDeps(v_ws_4814_, v_manifest_4815_, v_leanOpts_4816_, v_reconfigure_boxed_4821_, v_overrides_4818_, v___y_4819_);
lean_dec_ref(v___y_4819_);
lean_dec_ref(v_overrides_4818_);
return v_res_4822_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(lean_object* v___y_4823_, lean_object* v___y_4824_, lean_object* v_leanOpts_4825_, uint8_t v_reconfigure_4826_, lean_object* v_ws_4827_, lean_object* v_i_4828_, lean_object* v_i__lt_4829_, lean_object* v_next_4830_, lean_object* v_lt__next_4831_, lean_object* v___y_4832_){
_start:
{
lean_object* v___x_4834_; 
v___x_4834_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_4823_, v___y_4824_, v_leanOpts_4825_, v_reconfigure_4826_, v_ws_4827_, v_i_4828_, v_next_4830_, v___y_4832_);
return v___x_4834_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___boxed(lean_object* v___y_4835_, lean_object* v___y_4836_, lean_object* v_leanOpts_4837_, lean_object* v_reconfigure_4838_, lean_object* v_ws_4839_, lean_object* v_i_4840_, lean_object* v_i__lt_4841_, lean_object* v_next_4842_, lean_object* v_lt__next_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_){
_start:
{
uint8_t v_reconfigure_boxed_4846_; lean_object* v_res_4847_; 
v_reconfigure_boxed_4846_ = lean_unbox(v_reconfigure_4838_);
v_res_4847_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(v___y_4835_, v___y_4836_, v_leanOpts_4837_, v_reconfigure_boxed_4846_, v_ws_4839_, v_i_4840_, v_i__lt_4841_, v_next_4842_, v_lt__next_4843_, v___y_4844_);
lean_dec_ref(v___y_4844_);
lean_dec(v___y_4835_);
return v_res_4847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(lean_object* v_start_4848_, lean_object* v_pkg_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v_leanOpts_4852_, uint8_t v_reconfigure_4853_, lean_object* v_as_4854_, size_t v_i_4855_, size_t v_stop_4856_, lean_object* v_b_4857_, lean_object* v___y_4858_){
_start:
{
lean_object* v___x_4860_; 
v___x_4860_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_4849_, v___y_4850_, v___y_4851_, v_leanOpts_4852_, v_reconfigure_4853_, v_as_4854_, v_i_4855_, v_stop_4856_, v_b_4857_, v___y_4858_);
return v___x_4860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___boxed(lean_object* v_start_4861_, lean_object* v_pkg_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v_leanOpts_4865_, lean_object* v_reconfigure_4866_, lean_object* v_as_4867_, lean_object* v_i_4868_, lean_object* v_stop_4869_, lean_object* v_b_4870_, lean_object* v___y_4871_, lean_object* v___y_4872_){
_start:
{
uint8_t v_reconfigure_boxed_4873_; size_t v_i_boxed_4874_; size_t v_stop_boxed_4875_; lean_object* v_res_4876_; 
v_reconfigure_boxed_4873_ = lean_unbox(v_reconfigure_4866_);
v_i_boxed_4874_ = lean_unbox_usize(v_i_4868_);
lean_dec(v_i_4868_);
v_stop_boxed_4875_ = lean_unbox_usize(v_stop_4869_);
lean_dec(v_stop_4869_);
v_res_4876_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(v_start_4861_, v_pkg_4862_, v___y_4863_, v___y_4864_, v_leanOpts_4865_, v_reconfigure_boxed_4873_, v_as_4867_, v_i_boxed_4874_, v_stop_boxed_4875_, v_b_4870_, v___y_4871_);
lean_dec_ref(v___y_4871_);
lean_dec_ref(v_as_4867_);
lean_dec(v___y_4863_);
lean_dec(v_start_4861_);
return v_res_4876_;
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
