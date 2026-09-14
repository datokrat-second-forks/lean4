// Lean compiler output
// Module: Lake.Load.Materialize
// Imports: public import Lake.Config.Env public import Lake.Load.Manifest public import Lake.Config.Package import Lake.Util.Git import Lake.Util.IO import Lake.Reservoir
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lake_defaultConfigFile;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lake_defaultManifestFile;
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_Manifest_load(lean_object*);
lean_object* l_Lake_resolvePath(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lake_GitRepo_gcAuto(lean_object*, lean_object*);
lean_object* l_Lake_GitRepo_pruneRemote(lean_object*, lean_object*, lean_object*);
uint8_t l_Lake_GitRepo_hasNoDiff(lean_object*);
lean_object* l_Lake_GitRepo_clean(lean_object*, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_GitRepo_checkoutDetach(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_GitRepo_resolveRevision_x3f(lean_object*, lean_object*);
lean_object* l_Lake_GitRepo_fetchRevision_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_GitRepo_addRemote(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lake_GitRev_isFullSha1(lean_object*);
lean_object* l_Lake_GitRepo_findCommit_x3f(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lake_GitRepo_setRemoteUrl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_createDirAll(lean_object*);
lean_object* l_Lake_GitRepo_quietInit(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lake_GitRepo_getRemoteUrl_x3f(lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
extern lean_object* l_Lake_Git_defaultRemote;
extern lean_object* l_Lake_Git_upstreamBranch;
lean_object* l_Lake_GitRepo_getHeadRevision(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lake_Git_filterUrl_x3f(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lake_VerRange_test(lean_object*, lean_object*);
lean_object* l_Lake_StdVer_toString(lean_object*);
lean_object* l_String_quote(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_RegistryPkg_gitSrc_x3f(lean_object*);
lean_object* l_Lake_Reservoir_fetchPkgVersions(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Reservoir_fetchPkg_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lake_instInhabitedPackageEntry_default;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = ": failed to resolve path:\n  "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__0 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__0_value;
static const lean_closure_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1_value;
static lean_once_cell_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__2;
static lean_once_cell_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3;
static const lean_array_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4_value;
static lean_once_cell_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5;
static lean_once_cell_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6;
static lean_once_cell_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7;
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = ": repository has local changes:\n  "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = ": checking out revision '"};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__0 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__0_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__1 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__0 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__0_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = ": failed to fetch the package revision\n  "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__1 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__1_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "\nfrom the Git repository at\n  "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__2 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__2_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": fetching revision '"};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__3 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__3_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "' from "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__4 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__4_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = ": remote URL changed\n  old: "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__5 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__5_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n  new: "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__6 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__6_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = ": materializing new dependency"};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__7 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__7_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ".git"};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__8 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instInhabitedMaterializedDep_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_instInhabitedMaterializedDep_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedMaterializedDep_default___closed__0_value;
static const lean_string_object l_Lake_instInhabitedMaterializedDep_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lake_instInhabitedMaterializedDep_default___closed__1 = (const lean_object*)&l_Lake_instInhabitedMaterializedDep_default___closed__1_value;
static const lean_ctor_object l_Lake_instInhabitedMaterializedDep_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lake_instInhabitedMaterializedDep_default___closed__1_value)}};
static const lean_object* l_Lake_instInhabitedMaterializedDep_default___closed__2 = (const lean_object*)&l_Lake_instInhabitedMaterializedDep_default___closed__2_value;
static const lean_ctor_object l_Lake_instInhabitedMaterializedDep_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instInhabitedMaterializedDep_default___closed__2_value)}};
static const lean_object* l_Lake_instInhabitedMaterializedDep_default___closed__3 = (const lean_object*)&l_Lake_instInhabitedMaterializedDep_default___closed__3_value;
static lean_once_cell_t l_Lake_instInhabitedMaterializedDep_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instInhabitedMaterializedDep_default___closed__4;
LEAN_EXPORT lean_object* l_Lake_instInhabitedMaterializedDep_default;
LEAN_EXPORT lean_object* l_Lake_instInhabitedMaterializedDep;
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_name(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_name___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_prettyName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_scope(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_scope___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_manifestFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relConfigFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relConfigFile___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_configFile(lean_object*);
LEAN_EXPORT uint8_t l_Lake_MaterializedDep_fixedToolchain(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_fixedToolchain___boxed(lean_object*);
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = ": package not found on Reservoir.\n\n  If the package is on GitHub, you can add a Git source. For example:\n\n    require ...\n      from git \"https://github.com/"};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__1 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__1_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__2 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__2_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "\n\n  or, if using TOML:\n\n    [[require]]\n    git = \"https://github.com/"};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__3 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__3_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\n    ...\n"};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__4 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__4_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " @ "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__5 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__5_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\n    rev = "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__6 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__6_value;
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\n    version = "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__7 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed(lean_object*);
static const lean_string_object l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = ": package directory not found: "};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Dependency_materialize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = ": Git source not found on Reservoir"};
static const lean_object* l_Lake_Dependency_materialize___closed__0 = (const lean_object*)&l_Lake_Dependency_materialize___closed__0_value;
static const lean_string_object l_Lake_Dependency_materialize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": version `"};
static const lean_object* l_Lake_Dependency_materialize___closed__1 = (const lean_object*)&l_Lake_Dependency_materialize___closed__1_value;
static const lean_string_object l_Lake_Dependency_materialize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "` not found on Reservoir"};
static const lean_object* l_Lake_Dependency_materialize___closed__2 = (const lean_object*)&l_Lake_Dependency_materialize___closed__2_value;
static const lean_string_object l_Lake_Dependency_materialize___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 96, .m_capacity = 96, .m_length = 95, .m_data = ": could not fetch package versions: this may be a transient error or a bug in Lake or Reservoir"};
static const lean_object* l_Lake_Dependency_materialize___closed__3 = (const lean_object*)&l_Lake_Dependency_materialize___closed__3_value;
static const lean_string_object l_Lake_Dependency_materialize___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = ": using version `"};
static const lean_object* l_Lake_Dependency_materialize___closed__4 = (const lean_object*)&l_Lake_Dependency_materialize___closed__4_value;
static const lean_string_object l_Lake_Dependency_materialize___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` at revision `"};
static const lean_object* l_Lake_Dependency_materialize___closed__5 = (const lean_object*)&l_Lake_Dependency_materialize___closed__5_value;
static const lean_string_object l_Lake_Dependency_materialize___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lake_Dependency_materialize___closed__6 = (const lean_object*)&l_Lake_Dependency_materialize___closed__6_value;
static const lean_string_object l_Lake_Dependency_materialize___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = ": could not materialize package: this may be a transient error or a bug in Lake or Reservoir"};
static const lean_object* l_Lake_Dependency_materialize___closed__7 = (const lean_object*)&l_Lake_Dependency_materialize___closed__7_value;
static const lean_string_object l_Lake_Dependency_materialize___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = ": ill-formed dependency: dependency is missing a source and is missing a scope for Reservoir"};
static const lean_object* l_Lake_Dependency_materialize___closed__8 = (const lean_object*)&l_Lake_Dependency_materialize___closed__8_value;
LEAN_EXPORT lean_object* l_Lake_Dependency_materialize(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Dependency_materialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 11}, .m_objs = {((lean_object*)&l_Lake_instInhabitedMaterializedDep_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedMaterializedDep_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__0 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__0_value;
static const lean_ctor_object l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__0_value)}};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__1 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntry_materialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PackageEntry_materialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___lam__0(lean_object* v_x_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
lean_inc_ref(v___y_3_);
v___x_5_ = lean_apply_2(v___y_3_, v___y_2_, lean_box(0));
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___lam__0___boxed(lean_object* v_x_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___lam__0(v_x_7_, v___y_8_, v___y_9_);
lean_dec_ref(v___y_9_);
return v_res_11_;
}
}
static lean_object* _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__2(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_instMonadEIO___redArg();
return v___x_14_;
}
}
static lean_object* _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__2, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__2_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__2);
v___x_16_ = l_ReaderT_instMonad___redArg(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_20_ = lean_array_get_size(v___x_19_);
return v___x_20_;
}
}
static uint8_t _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; 
v___x_21_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5);
v___x_22_ = lean_unsigned_to_nat(0u);
v___x_23_ = lean_nat_dec_lt(v___x_22_, v___x_21_);
return v___x_23_;
}
}
static size_t _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7(void){
_start:
{
lean_object* v___x_24_; size_t v___x_25_; 
v___x_24_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5);
v___x_25_ = lean_usize_of_nat(v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl(lean_object* v_name_26_, lean_object* v_url_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_a_31_; lean_object* v___f_48_; lean_object* v___y_50_; lean_object* v___y_51_; lean_object* v___y_52_; lean_object* v_val_53_; uint8_t v_a_70_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; uint8_t v___x_83_; 
v___f_48_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1));
v___x_80_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3);
v___x_81_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_82_ = l_System_FilePath_pathExists(v_url_27_);
v___x_83_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_83_ == 0)
{
v_a_70_ = v___x_82_;
goto v___jp_69_;
}
else
{
lean_object* v___x_84_; size_t v___x_85_; size_t v___x_86_; lean_object* v___x_1294__overap_87_; lean_object* v___x_88_; 
v___x_84_ = lean_box(0);
v___x_85_ = ((size_t)0ULL);
v___x_86_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_1294__overap_87_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_80_, v___f_48_, v___x_81_, v___x_85_, v___x_86_, v___x_84_);
lean_inc_ref(v___y_28_);
v___x_88_ = lean_apply_2(v___x_1294__overap_87_, v___y_28_, lean_box(0));
if (lean_obj_tag(v___x_88_) == 0)
{
lean_dec_ref_known(v___x_88_, 1);
v_a_70_ = v___x_82_;
goto v___jp_69_;
}
else
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_96_; 
lean_dec_ref(v_url_27_);
lean_dec_ref(v_name_26_);
v_a_89_ = lean_ctor_get(v___x_88_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_96_ == 0)
{
v___x_91_ = v___x_88_;
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_88_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_94_; 
if (v_isShared_92_ == 0)
{
v___x_94_ = v___x_91_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_a_89_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
v___jp_30_:
{
if (lean_obj_tag(v_a_31_) == 1)
{
lean_object* v_val_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_39_; 
lean_dec_ref(v_url_27_);
lean_dec_ref(v_name_26_);
v_val_32_ = lean_ctor_get(v_a_31_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v_a_31_);
if (v_isSharedCheck_39_ == 0)
{
v___x_34_ = v_a_31_;
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_val_32_);
lean_dec(v_a_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_39_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_37_; 
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 0);
v___x_37_ = v___x_34_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v_val_32_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
else
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; uint8_t v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
lean_dec(v_a_31_);
v___x_40_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__0));
v___x_41_ = lean_string_append(v_name_26_, v___x_40_);
v___x_42_ = lean_string_append(v___x_41_, v_url_27_);
lean_dec_ref(v_url_27_);
v___x_43_ = 3;
v___x_44_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_44_, 0, v___x_42_);
lean_ctor_set_uint8(v___x_44_, sizeof(void*)*1, v___x_43_);
lean_inc_ref(v___y_28_);
v___x_45_ = lean_apply_2(v___y_28_, v___x_44_, lean_box(0));
v___x_46_ = lean_box(0);
v___x_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
return v___x_47_;
}
}
v___jp_49_:
{
lean_object* v___x_54_; uint8_t v___x_55_; 
v___x_54_ = lean_array_get_size(v___y_52_);
v___x_55_ = lean_nat_dec_lt(v___y_50_, v___x_54_);
if (v___x_55_ == 0)
{
v_a_31_ = v_val_53_;
goto v___jp_30_;
}
else
{
lean_object* v___x_56_; size_t v___x_57_; size_t v___x_58_; lean_object* v___x_1571__overap_59_; lean_object* v___x_60_; 
v___x_56_ = lean_box(0);
v___x_57_ = ((size_t)0ULL);
v___x_58_ = lean_usize_of_nat(v___x_54_);
lean_inc_ref(v___y_52_);
lean_inc_ref(v___y_51_);
v___x_1571__overap_59_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___y_51_, v___f_48_, v___y_52_, v___x_57_, v___x_58_, v___x_56_);
lean_inc_ref(v___y_28_);
v___x_60_ = lean_apply_2(v___x_1571__overap_59_, v___y_28_, lean_box(0));
if (lean_obj_tag(v___x_60_) == 0)
{
lean_dec_ref_known(v___x_60_, 1);
v_a_31_ = v_val_53_;
goto v___jp_30_;
}
else
{
lean_object* v_a_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_68_; 
lean_dec(v_val_53_);
lean_dec_ref(v_url_27_);
lean_dec_ref(v_name_26_);
v_a_61_ = lean_ctor_get(v___x_60_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v___x_60_);
if (v_isSharedCheck_68_ == 0)
{
v___x_63_ = v___x_60_;
v_isShared_64_ = v_isSharedCheck_68_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_a_61_);
lean_dec(v___x_60_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_68_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___x_66_; 
if (v_isShared_64_ == 0)
{
v___x_66_ = v___x_63_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_a_61_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
return v___x_66_;
}
}
}
}
}
v___jp_69_:
{
if (v_a_70_ == 0)
{
lean_object* v___x_71_; 
lean_dec_ref(v_name_26_);
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v_url_27_);
return v___x_71_;
}
else
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_72_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3);
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_url_27_);
v___x_75_ = l_Lake_resolvePath(v_url_27_);
v___x_76_ = lean_string_utf8_byte_size(v___x_75_);
v___x_77_ = lean_nat_dec_eq(v___x_76_, v___x_73_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; 
v___x_78_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_78_, 0, v___x_75_);
v___y_50_ = v___x_73_;
v___y_51_ = v___x_72_;
v___y_52_ = v___x_74_;
v_val_53_ = v___x_78_;
goto v___jp_49_;
}
else
{
lean_object* v___x_79_; 
lean_dec_ref(v___x_75_);
v___x_79_ = lean_box(0);
v___y_50_ = v___x_73_;
v___y_51_ = v___x_72_;
v___y_52_ = v___x_74_;
v_val_53_ = v___x_79_;
goto v___jp_49_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___boxed(lean_object* v_name_97_, lean_object* v_url_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl(v_name_97_, v_url_98_, v___y_99_);
lean_dec_ref(v___y_99_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff(lean_object* v_name_103_, lean_object* v_repo_104_, lean_object* v___y_105_){
_start:
{
uint8_t v_a_108_; lean_object* v___f_118_; lean_object* v___x_119_; lean_object* v___x_120_; uint8_t v_val_122_; uint8_t v___x_129_; 
v___f_118_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1));
v___x_119_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3);
v___x_120_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_104_);
v___x_129_ = l_Lake_GitRepo_hasNoDiff(v_repo_104_);
if (v___x_129_ == 0)
{
uint8_t v___x_130_; 
v___x_130_ = 1;
v_val_122_ = v___x_130_;
goto v___jp_121_;
}
else
{
uint8_t v___x_131_; 
v___x_131_ = 0;
v_val_122_ = v___x_131_;
goto v___jp_121_;
}
v___jp_107_:
{
if (v_a_108_ == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; 
lean_dec_ref(v_repo_104_);
lean_dec_ref(v_name_103_);
v___x_109_ = lean_box(0);
v___x_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
return v___x_110_;
}
else
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_111_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_112_ = lean_string_append(v_name_103_, v___x_111_);
v___x_113_ = lean_string_append(v___x_112_, v_repo_104_);
lean_dec_ref(v_repo_104_);
v___x_114_ = 2;
v___x_115_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*1, v___x_114_);
lean_inc_ref(v___y_105_);
v___x_116_ = lean_apply_2(v___y_105_, v___x_115_, lean_box(0));
v___x_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
return v___x_117_;
}
}
v___jp_121_:
{
uint8_t v___x_123_; 
v___x_123_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_123_ == 0)
{
v_a_108_ = v_val_122_;
goto v___jp_107_;
}
else
{
lean_object* v___x_124_; size_t v___x_125_; size_t v___x_126_; lean_object* v___x_791__overap_127_; lean_object* v___x_128_; 
v___x_124_ = lean_box(0);
v___x_125_ = ((size_t)0ULL);
v___x_126_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_791__overap_127_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_119_, v___f_118_, v___x_120_, v___x_125_, v___x_126_, v___x_124_);
lean_inc_ref(v___y_105_);
v___x_128_ = lean_apply_2(v___x_791__overap_127_, v___y_105_, lean_box(0));
if (lean_obj_tag(v___x_128_) == 0)
{
lean_dec_ref_known(v___x_128_, 1);
v_a_108_ = v_val_122_;
goto v___jp_107_;
}
else
{
lean_dec_ref(v_repo_104_);
lean_dec_ref(v_name_103_);
return v___x_128_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___boxed(lean_object* v_name_132_, lean_object* v_repo_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff(v_name_132_, v_repo_133_, v___y_134_);
lean_dec_ref(v___y_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout(lean_object* v_name_139_, lean_object* v_repo_140_, lean_object* v_rev_141_, lean_object* v___y_142_){
_start:
{
uint8_t v_a_145_; lean_object* v___f_155_; lean_object* v___y_157_; lean_object* v___y_158_; lean_object* v___y_159_; uint8_t v_val_160_; lean_object* v___y_176_; lean_object* v___y_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___f_155_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1));
v___x_210_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__0));
lean_inc_ref(v_name_139_);
v___x_211_ = lean_string_append(v_name_139_, v___x_210_);
v___x_212_ = lean_string_append(v___x_211_, v_rev_141_);
v___x_213_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__1));
v___x_214_ = lean_string_append(v___x_212_, v___x_213_);
v___x_215_ = 1;
v___x_216_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_216_, 0, v___x_214_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*1, v___x_215_);
lean_inc_ref(v___y_142_);
v___x_217_ = lean_apply_2(v___y_142_, v___x_216_, lean_box(0));
v___x_218_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3);
v___x_219_ = lean_unsigned_to_nat(0u);
v___x_220_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_140_);
v___x_221_ = l_Lake_GitRepo_checkoutDetach(v_rev_141_, v_repo_140_, v___x_220_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v_a_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v_a_222_ = lean_ctor_get(v___x_221_, 1);
lean_inc(v_a_222_);
lean_dec_ref_known(v___x_221_, 2);
v___x_223_ = lean_array_get_size(v_a_222_);
v___x_224_ = lean_nat_dec_lt(v___x_219_, v___x_223_);
if (v___x_224_ == 0)
{
lean_dec(v_a_222_);
goto v___jp_177_;
}
else
{
lean_object* v___x_225_; size_t v___x_226_; size_t v___x_227_; lean_object* v___x_2321__overap_228_; lean_object* v___x_229_; 
v___x_225_ = lean_box(0);
v___x_226_ = ((size_t)0ULL);
v___x_227_ = lean_usize_of_nat(v___x_223_);
v___x_2321__overap_228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_218_, v___f_155_, v_a_222_, v___x_226_, v___x_227_, v___x_225_);
lean_inc_ref(v___y_142_);
v___x_229_ = lean_apply_2(v___x_2321__overap_228_, v___y_142_, lean_box(0));
if (lean_obj_tag(v___x_229_) == 0)
{
lean_dec_ref_known(v___x_229_, 1);
goto v___jp_177_;
}
else
{
v___y_209_ = v___x_229_;
goto v___jp_208_;
}
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_231_; uint8_t v___x_232_; 
v_a_230_ = lean_ctor_get(v___x_221_, 1);
lean_inc(v_a_230_);
lean_dec_ref_known(v___x_221_, 2);
v___x_231_ = lean_array_get_size(v_a_230_);
v___x_232_ = lean_nat_dec_lt(v___x_219_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; lean_object* v___x_234_; 
lean_dec(v_a_230_);
lean_dec_ref(v_repo_140_);
lean_dec_ref(v_name_139_);
v___x_233_ = lean_box(0);
v___x_234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
return v___x_234_;
}
else
{
lean_object* v___x_235_; size_t v___x_236_; size_t v___x_237_; lean_object* v___x_2338__overap_238_; lean_object* v___x_239_; 
v___x_235_ = lean_box(0);
v___x_236_ = ((size_t)0ULL);
v___x_237_ = lean_usize_of_nat(v___x_231_);
v___x_2338__overap_238_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_218_, v___f_155_, v_a_230_, v___x_236_, v___x_237_, v___x_235_);
lean_inc_ref(v___y_142_);
v___x_239_ = lean_apply_2(v___x_2338__overap_238_, v___y_142_, lean_box(0));
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec_ref(v_repo_140_);
lean_dec_ref(v_name_139_);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_246_ == 0)
{
lean_object* v_unused_247_; 
v_unused_247_ = lean_ctor_get(v___x_239_, 0);
lean_dec(v_unused_247_);
v___x_241_ = v___x_239_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_dec(v___x_239_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
lean_ctor_set_tag(v___x_241_, 1);
lean_ctor_set(v___x_241_, 0, v___x_235_);
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_235_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
else
{
v___y_209_ = v___x_239_;
goto v___jp_208_;
}
}
}
v___jp_144_:
{
if (v_a_145_ == 0)
{
lean_object* v___x_146_; lean_object* v___x_147_; 
lean_dec_ref(v_repo_140_);
lean_dec_ref(v_name_139_);
v___x_146_ = lean_box(0);
v___x_147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_146_);
return v___x_147_;
}
else
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; uint8_t v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_148_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_149_ = lean_string_append(v_name_139_, v___x_148_);
v___x_150_ = lean_string_append(v___x_149_, v_repo_140_);
lean_dec_ref(v_repo_140_);
v___x_151_ = 2;
v___x_152_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_152_, 0, v___x_150_);
lean_ctor_set_uint8(v___x_152_, sizeof(void*)*1, v___x_151_);
lean_inc_ref(v___y_142_);
v___x_153_ = lean_apply_2(v___y_142_, v___x_152_, lean_box(0));
v___x_154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
return v___x_154_;
}
}
v___jp_156_:
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = lean_array_get_size(v___y_158_);
v___x_162_ = lean_nat_dec_lt(v___y_157_, v___x_161_);
if (v___x_162_ == 0)
{
v_a_145_ = v_val_160_;
goto v___jp_144_;
}
else
{
lean_object* v___x_163_; size_t v___x_164_; size_t v___x_165_; lean_object* v___x_2658__overap_166_; lean_object* v___x_167_; 
v___x_163_ = lean_box(0);
v___x_164_ = ((size_t)0ULL);
v___x_165_ = lean_usize_of_nat(v___x_161_);
lean_inc_ref(v___y_158_);
lean_inc_ref(v___y_159_);
v___x_2658__overap_166_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___y_159_, v___f_155_, v___y_158_, v___x_164_, v___x_165_, v___x_163_);
lean_inc_ref(v___y_142_);
v___x_167_ = lean_apply_2(v___x_2658__overap_166_, v___y_142_, lean_box(0));
if (lean_obj_tag(v___x_167_) == 0)
{
lean_dec_ref_known(v___x_167_, 1);
v_a_145_ = v_val_160_;
goto v___jp_144_;
}
else
{
lean_dec_ref(v_repo_140_);
lean_dec_ref(v_name_139_);
return v___x_167_;
}
}
}
v___jp_168_:
{
lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_169_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3);
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_140_);
v___x_172_ = l_Lake_GitRepo_hasNoDiff(v_repo_140_);
if (v___x_172_ == 0)
{
uint8_t v___x_173_; 
v___x_173_ = 1;
v___y_157_ = v___x_170_;
v___y_158_ = v___x_171_;
v___y_159_ = v___x_169_;
v_val_160_ = v___x_173_;
goto v___jp_156_;
}
else
{
uint8_t v___x_174_; 
v___x_174_ = 0;
v___y_157_ = v___x_170_;
v___y_158_ = v___x_171_;
v___y_159_ = v___x_169_;
v_val_160_ = v___x_174_;
goto v___jp_156_;
}
}
v___jp_175_:
{
if (lean_obj_tag(v___y_176_) == 0)
{
lean_dec_ref_known(v___y_176_, 1);
goto v___jp_168_;
}
else
{
lean_dec_ref(v_repo_140_);
lean_dec_ref(v_name_139_);
return v___y_176_;
}
}
v___jp_177_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_178_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3);
v___x_179_ = lean_unsigned_to_nat(0u);
v___x_180_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_140_);
v___x_181_ = l_Lake_GitRepo_clean(v_repo_140_, v___x_180_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v_a_182_ = lean_ctor_get(v___x_181_, 1);
lean_inc(v_a_182_);
lean_dec_ref_known(v___x_181_, 2);
v___x_183_ = lean_array_get_size(v_a_182_);
v___x_184_ = lean_nat_dec_lt(v___x_179_, v___x_183_);
if (v___x_184_ == 0)
{
lean_dec(v_a_182_);
goto v___jp_168_;
}
else
{
lean_object* v___x_185_; size_t v___x_186_; size_t v___x_187_; lean_object* v___x_2694__overap_188_; lean_object* v___x_189_; 
v___x_185_ = lean_box(0);
v___x_186_ = ((size_t)0ULL);
v___x_187_ = lean_usize_of_nat(v___x_183_);
v___x_2694__overap_188_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_178_, v___f_155_, v_a_182_, v___x_186_, v___x_187_, v___x_185_);
lean_inc_ref(v___y_142_);
v___x_189_ = lean_apply_2(v___x_2694__overap_188_, v___y_142_, lean_box(0));
if (lean_obj_tag(v___x_189_) == 0)
{
lean_dec_ref_known(v___x_189_, 1);
goto v___jp_168_;
}
else
{
v___y_176_ = v___x_189_;
goto v___jp_175_;
}
}
}
else
{
lean_object* v_a_190_; lean_object* v___x_191_; uint8_t v___x_192_; 
v_a_190_ = lean_ctor_get(v___x_181_, 1);
lean_inc(v_a_190_);
lean_dec_ref_known(v___x_181_, 2);
v___x_191_ = lean_array_get_size(v_a_190_);
v___x_192_ = lean_nat_dec_lt(v___x_179_, v___x_191_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; lean_object* v___x_194_; 
lean_dec(v_a_190_);
lean_dec_ref(v_repo_140_);
lean_dec_ref(v_name_139_);
v___x_193_ = lean_box(0);
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
else
{
lean_object* v___x_195_; size_t v___x_196_; size_t v___x_197_; lean_object* v___x_2711__overap_198_; lean_object* v___x_199_; 
v___x_195_ = lean_box(0);
v___x_196_ = ((size_t)0ULL);
v___x_197_ = lean_usize_of_nat(v___x_191_);
v___x_2711__overap_198_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_178_, v___f_155_, v_a_190_, v___x_196_, v___x_197_, v___x_195_);
lean_inc_ref(v___y_142_);
v___x_199_ = lean_apply_2(v___x_2711__overap_198_, v___y_142_, lean_box(0));
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec_ref(v_repo_140_);
lean_dec_ref(v_name_139_);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_206_ == 0)
{
lean_object* v_unused_207_; 
v_unused_207_ = lean_ctor_get(v___x_199_, 0);
lean_dec(v_unused_207_);
v___x_201_ = v___x_199_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_dec(v___x_199_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set_tag(v___x_201_, 1);
lean_ctor_set(v___x_201_, 0, v___x_195_);
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_195_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
else
{
v___y_176_ = v___x_199_;
goto v___jp_175_;
}
}
}
}
v___jp_208_:
{
if (lean_obj_tag(v___y_209_) == 0)
{
lean_dec_ref_known(v___y_209_, 1);
goto v___jp_177_;
}
else
{
lean_dec_ref(v_repo_140_);
lean_dec_ref(v_name_139_);
return v___y_209_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___boxed(lean_object* v_name_248_, lean_object* v_repo_249_, lean_object* v_rev_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout(v_name_248_, v_repo_249_, v_rev_250_, v___y_251_);
lean_dec_ref(v___y_251_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(lean_object* v_as_254_, size_t v_i_255_, size_t v_stop_256_, lean_object* v_b_257_, lean_object* v___y_258_){
_start:
{
uint8_t v___x_260_; 
v___x_260_ = lean_usize_dec_eq(v_i_255_, v_stop_256_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; size_t v___x_263_; size_t v___x_264_; 
v___x_261_ = lean_array_uget_borrowed(v_as_254_, v_i_255_);
lean_inc_ref(v___y_258_);
lean_inc(v___x_261_);
v___x_262_ = lean_apply_2(v___y_258_, v___x_261_, lean_box(0));
v___x_263_ = ((size_t)1ULL);
v___x_264_ = lean_usize_add(v_i_255_, v___x_263_);
v_i_255_ = v___x_264_;
v_b_257_ = v___x_262_;
goto _start;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_266_, 0, v_b_257_);
return v___x_266_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0___boxed(lean_object* v_as_267_, lean_object* v_i_268_, lean_object* v_stop_269_, lean_object* v_b_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
size_t v_i_boxed_273_; size_t v_stop_boxed_274_; lean_object* v_res_275_; 
v_i_boxed_273_ = lean_unbox_usize(v_i_268_);
lean_dec(v_i_268_);
v_stop_boxed_274_ = lean_unbox_usize(v_stop_269_);
lean_dec(v_stop_269_);
v_res_275_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_as_267_, v_i_boxed_273_, v_stop_boxed_274_, v_b_270_, v___y_271_);
lean_dec_ref(v___y_271_);
lean_dec_ref(v_as_267_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo(lean_object* v_name_285_, lean_object* v_repo_286_, lean_object* v_url_287_, lean_object* v_rev_x3f_288_, lean_object* v___y_289_){
_start:
{
lean_object* v___y_301_; lean_object* v___y_340_; lean_object* v___y_341_; lean_object* v___y_343_; lean_object* v___y_344_; lean_object* v___y_373_; lean_object* v___y_374_; uint8_t v_a_375_; lean_object* v___y_383_; uint8_t v_a_384_; lean_object* v___y_392_; lean_object* v___y_393_; lean_object* v___y_394_; lean_object* v___y_395_; uint8_t v_val_396_; uint8_t v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; uint8_t v___y_412_; lean_object* v___y_413_; lean_object* v___y_414_; lean_object* v___y_415_; uint8_t v___y_417_; lean_object* v___y_418_; lean_object* v___y_419_; uint8_t v___y_448_; lean_object* v___y_449_; lean_object* v___y_450_; lean_object* v___y_451_; lean_object* v___y_453_; lean_object* v___y_454_; lean_object* v___y_455_; uint8_t v_val_456_; lean_object* v___y_464_; lean_object* v___y_465_; lean_object* v___y_466_; lean_object* v___y_467_; lean_object* v_a_468_; lean_object* v___y_511_; lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___y_514_; lean_object* v_a_515_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v___y_584_; lean_object* v___y_585_; lean_object* v___y_586_; lean_object* v___y_615_; lean_object* v___y_616_; lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_620_; uint8_t v_a_621_; lean_object* v___y_629_; uint8_t v_a_630_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; uint8_t v_val_641_; uint8_t v___y_649_; uint8_t v___y_650_; lean_object* v___y_651_; uint8_t v___y_656_; uint8_t v___y_657_; lean_object* v___y_658_; lean_object* v___y_659_; uint8_t v___y_661_; uint8_t v___y_662_; lean_object* v___y_663_; uint8_t v___y_692_; uint8_t v___y_693_; lean_object* v___y_694_; lean_object* v___y_695_; uint8_t v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; uint8_t v___y_701_; lean_object* v___y_702_; lean_object* v_a_703_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v___y_749_; uint8_t v_val_750_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v_a_762_; lean_object* v___y_779_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___y_792_; lean_object* v___y_793_; lean_object* v___y_794_; lean_object* v___y_795_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_802_; lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v_a_805_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; uint8_t v_a_881_; lean_object* v___y_943_; lean_object* v___y_944_; lean_object* v_a_945_; lean_object* v___y_956_; lean_object* v___y_957_; lean_object* v_a_958_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_972_; lean_object* v_val_973_; lean_object* v___y_981_; lean_object* v___y_982_; uint8_t v_a_983_; lean_object* v___y_992_; 
if (lean_obj_tag(v_rev_x3f_288_) == 0)
{
lean_object* v___x_1001_; 
v___x_1001_ = l_Lake_Git_upstreamBranch;
v___y_992_ = v___x_1001_;
goto v___jp_991_;
}
else
{
lean_object* v_val_1002_; 
v_val_1002_ = lean_ctor_get(v_rev_x3f_288_, 0);
lean_inc(v_val_1002_);
lean_dec_ref_known(v_rev_x3f_288_, 1);
v___y_992_ = v_val_1002_;
goto v___jp_991_;
}
v___jp_291_:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = lean_box(0);
v___x_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
return v___x_293_;
}
v___jp_294_:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_box(0);
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
return v___x_296_;
}
v___jp_297_:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_box(0);
v___x_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
return v___x_299_;
}
v___jp_300_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_unsigned_to_nat(0u);
v___x_303_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_304_ = l_Lake_GitRepo_gcAuto(v_repo_286_, v___x_303_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v_a_305_; lean_object* v_a_306_; lean_object* v___x_307_; uint8_t v___x_308_; 
v_a_305_ = lean_ctor_get(v___x_304_, 0);
lean_inc(v_a_305_);
v_a_306_ = lean_ctor_get(v___x_304_, 1);
lean_inc(v_a_306_);
lean_dec_ref_known(v___x_304_, 2);
v___x_307_ = lean_array_get_size(v_a_306_);
v___x_308_ = lean_nat_dec_lt(v___x_302_, v___x_307_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; 
lean_dec(v_a_306_);
v___x_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_309_, 0, v_a_305_);
return v___x_309_;
}
else
{
lean_object* v___x_310_; size_t v___x_311_; size_t v___x_312_; lean_object* v___x_313_; 
v___x_310_ = lean_box(0);
v___x_311_ = ((size_t)0ULL);
v___x_312_ = lean_usize_of_nat(v___x_307_);
v___x_313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_306_, v___x_311_, v___x_312_, v___x_310_, v___y_301_);
lean_dec(v_a_306_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_320_ == 0)
{
lean_object* v_unused_321_; 
v_unused_321_ = lean_ctor_get(v___x_313_, 0);
lean_dec(v_unused_321_);
v___x_315_ = v___x_313_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_dec(v___x_313_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v_a_305_);
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_305_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
else
{
lean_dec(v_a_305_);
return v___x_313_;
}
}
}
else
{
lean_object* v_a_322_; lean_object* v___x_323_; uint8_t v___x_324_; 
v_a_322_ = lean_ctor_get(v___x_304_, 1);
lean_inc(v_a_322_);
lean_dec_ref_known(v___x_304_, 2);
v___x_323_ = lean_array_get_size(v_a_322_);
v___x_324_ = lean_nat_dec_lt(v___x_302_, v___x_323_);
if (v___x_324_ == 0)
{
lean_object* v___x_325_; lean_object* v___x_326_; 
lean_dec(v_a_322_);
v___x_325_ = lean_box(0);
v___x_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
return v___x_326_;
}
else
{
lean_object* v___x_327_; size_t v___x_328_; size_t v___x_329_; lean_object* v___x_330_; 
v___x_327_ = lean_box(0);
v___x_328_ = ((size_t)0ULL);
v___x_329_ = lean_usize_of_nat(v___x_323_);
v___x_330_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_322_, v___x_328_, v___x_329_, v___x_327_, v___y_301_);
lean_dec(v_a_322_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_337_ == 0)
{
lean_object* v_unused_338_; 
v_unused_338_ = lean_ctor_get(v___x_330_, 0);
lean_dec(v_unused_338_);
v___x_332_ = v___x_330_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_dec(v___x_330_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
lean_ctor_set_tag(v___x_332_, 1);
lean_ctor_set(v___x_332_, 0, v___x_327_);
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v___x_327_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
else
{
return v___x_330_;
}
}
}
}
v___jp_339_:
{
if (lean_obj_tag(v___y_341_) == 0)
{
lean_dec_ref_known(v___y_341_, 1);
v___y_301_ = v___y_340_;
goto v___jp_300_;
}
else
{
lean_dec_ref(v_repo_286_);
return v___y_341_;
}
}
v___jp_342_:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
lean_inc_ref(v___y_344_);
v___x_347_ = l_Lake_GitRepo_pruneRemote(v___y_344_, v_repo_286_, v___x_346_);
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v_a_348_; lean_object* v___x_349_; uint8_t v___x_350_; 
v_a_348_ = lean_ctor_get(v___x_347_, 1);
lean_inc(v_a_348_);
lean_dec_ref_known(v___x_347_, 2);
v___x_349_ = lean_array_get_size(v_a_348_);
v___x_350_ = lean_nat_dec_lt(v___x_345_, v___x_349_);
if (v___x_350_ == 0)
{
lean_dec(v_a_348_);
v___y_301_ = v___y_343_;
goto v___jp_300_;
}
else
{
lean_object* v___x_351_; size_t v___x_352_; size_t v___x_353_; lean_object* v___x_354_; 
v___x_351_ = lean_box(0);
v___x_352_ = ((size_t)0ULL);
v___x_353_ = lean_usize_of_nat(v___x_349_);
v___x_354_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_348_, v___x_352_, v___x_353_, v___x_351_, v___y_343_);
lean_dec(v_a_348_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_dec_ref_known(v___x_354_, 1);
v___y_301_ = v___y_343_;
goto v___jp_300_;
}
else
{
v___y_340_ = v___y_343_;
v___y_341_ = v___x_354_;
goto v___jp_339_;
}
}
}
else
{
lean_object* v_a_355_; lean_object* v___x_356_; uint8_t v___x_357_; 
v_a_355_ = lean_ctor_get(v___x_347_, 1);
lean_inc(v_a_355_);
lean_dec_ref_known(v___x_347_, 2);
v___x_356_ = lean_array_get_size(v_a_355_);
v___x_357_ = lean_nat_dec_lt(v___x_345_, v___x_356_);
if (v___x_357_ == 0)
{
lean_object* v___x_358_; lean_object* v___x_359_; 
lean_dec(v_a_355_);
lean_dec_ref(v_repo_286_);
v___x_358_ = lean_box(0);
v___x_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
return v___x_359_;
}
else
{
lean_object* v___x_360_; size_t v___x_361_; size_t v___x_362_; lean_object* v___x_363_; 
v___x_360_ = lean_box(0);
v___x_361_ = ((size_t)0ULL);
v___x_362_ = lean_usize_of_nat(v___x_356_);
v___x_363_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_355_, v___x_361_, v___x_362_, v___x_360_, v___y_343_);
lean_dec(v_a_355_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_370_; 
lean_dec_ref(v_repo_286_);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_370_ == 0)
{
lean_object* v_unused_371_; 
v_unused_371_ = lean_ctor_get(v___x_363_, 0);
lean_dec(v_unused_371_);
v___x_365_ = v___x_363_;
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
else
{
lean_dec(v___x_363_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_368_; 
if (v_isShared_366_ == 0)
{
lean_ctor_set_tag(v___x_365_, 1);
lean_ctor_set(v___x_365_, 0, v___x_360_);
v___x_368_ = v___x_365_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_360_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
else
{
v___y_340_ = v___y_343_;
v___y_341_ = v___x_363_;
goto v___jp_339_;
}
}
}
}
v___jp_372_:
{
if (v_a_375_ == 0)
{
lean_dec_ref(v_name_285_);
v___y_343_ = v___y_373_;
v___y_344_ = v___y_374_;
goto v___jp_342_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; uint8_t v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_376_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_377_ = lean_string_append(v_name_285_, v___x_376_);
v___x_378_ = lean_string_append(v___x_377_, v_repo_286_);
v___x_379_ = 2;
v___x_380_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_380_, 0, v___x_378_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*1, v___x_379_);
lean_inc_ref(v___y_373_);
v___x_381_ = lean_apply_2(v___y_373_, v___x_380_, lean_box(0));
v___y_343_ = v___y_373_;
v___y_344_ = v___y_374_;
goto v___jp_342_;
}
}
v___jp_382_:
{
if (v_a_384_ == 0)
{
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
goto v___jp_297_;
}
else
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; uint8_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_385_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_386_ = lean_string_append(v_name_285_, v___x_385_);
v___x_387_ = lean_string_append(v___x_386_, v_repo_286_);
lean_dec_ref(v_repo_286_);
v___x_388_ = 2;
v___x_389_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_389_, 0, v___x_387_);
lean_ctor_set_uint8(v___x_389_, sizeof(void*)*1, v___x_388_);
lean_inc_ref(v___y_383_);
v___x_390_ = lean_apply_2(v___y_383_, v___x_389_, lean_box(0));
goto v___jp_297_;
}
}
v___jp_391_:
{
lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_397_ = lean_array_get_size(v___y_395_);
v___x_398_ = lean_nat_dec_lt(v___y_392_, v___x_397_);
if (v___x_398_ == 0)
{
v___y_373_ = v___y_393_;
v___y_374_ = v___y_394_;
v_a_375_ = v_val_396_;
goto v___jp_372_;
}
else
{
lean_object* v___x_399_; size_t v___x_400_; size_t v___x_401_; lean_object* v___x_402_; 
v___x_399_ = lean_box(0);
v___x_400_ = ((size_t)0ULL);
v___x_401_ = lean_usize_of_nat(v___x_397_);
v___x_402_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_395_, v___x_400_, v___x_401_, v___x_399_, v___y_393_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_dec_ref_known(v___x_402_, 1);
v___y_373_ = v___y_393_;
v___y_374_ = v___y_394_;
v_a_375_ = v_val_396_;
goto v___jp_372_;
}
else
{
lean_dec_ref(v_name_285_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_dec_ref_known(v___x_402_, 1);
v___y_343_ = v___y_393_;
v___y_344_ = v___y_394_;
goto v___jp_342_;
}
else
{
lean_dec_ref(v_repo_286_);
return v___x_402_;
}
}
}
}
v___jp_403_:
{
lean_object* v___x_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
v___x_409_ = l_Lake_GitRepo_hasNoDiff(v_repo_286_);
if (v___x_409_ == 0)
{
uint8_t v___x_410_; 
v___x_410_ = 1;
v___y_392_ = v___x_407_;
v___y_393_ = v___y_405_;
v___y_394_ = v___y_406_;
v___y_395_ = v___x_408_;
v_val_396_ = v___x_410_;
goto v___jp_391_;
}
else
{
v___y_392_ = v___x_407_;
v___y_393_ = v___y_405_;
v___y_394_ = v___y_406_;
v___y_395_ = v___x_408_;
v_val_396_ = v___y_404_;
goto v___jp_391_;
}
}
v___jp_411_:
{
if (lean_obj_tag(v___y_415_) == 0)
{
lean_dec_ref_known(v___y_415_, 1);
v___y_404_ = v___y_412_;
v___y_405_ = v___y_413_;
v___y_406_ = v___y_414_;
goto v___jp_403_;
}
else
{
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___y_415_;
}
}
v___jp_416_:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_420_ = lean_unsigned_to_nat(0u);
v___x_421_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
v___x_422_ = l_Lake_GitRepo_clean(v_repo_286_, v___x_421_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_a_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
v_a_423_ = lean_ctor_get(v___x_422_, 1);
lean_inc(v_a_423_);
lean_dec_ref_known(v___x_422_, 2);
v___x_424_ = lean_array_get_size(v_a_423_);
v___x_425_ = lean_nat_dec_lt(v___x_420_, v___x_424_);
if (v___x_425_ == 0)
{
lean_dec(v_a_423_);
v___y_404_ = v___y_417_;
v___y_405_ = v___y_418_;
v___y_406_ = v___y_419_;
goto v___jp_403_;
}
else
{
lean_object* v___x_426_; size_t v___x_427_; size_t v___x_428_; lean_object* v___x_429_; 
v___x_426_ = lean_box(0);
v___x_427_ = ((size_t)0ULL);
v___x_428_ = lean_usize_of_nat(v___x_424_);
v___x_429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_423_, v___x_427_, v___x_428_, v___x_426_, v___y_418_);
lean_dec(v_a_423_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_dec_ref_known(v___x_429_, 1);
v___y_404_ = v___y_417_;
v___y_405_ = v___y_418_;
v___y_406_ = v___y_419_;
goto v___jp_403_;
}
else
{
v___y_412_ = v___y_417_;
v___y_413_ = v___y_418_;
v___y_414_ = v___y_419_;
v___y_415_ = v___x_429_;
goto v___jp_411_;
}
}
}
else
{
lean_object* v_a_430_; lean_object* v___x_431_; uint8_t v___x_432_; 
v_a_430_ = lean_ctor_get(v___x_422_, 1);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_422_, 2);
v___x_431_ = lean_array_get_size(v_a_430_);
v___x_432_ = lean_nat_dec_lt(v___x_420_, v___x_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; 
lean_dec(v_a_430_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v___x_433_ = lean_box(0);
v___x_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
return v___x_434_;
}
else
{
lean_object* v___x_435_; size_t v___x_436_; size_t v___x_437_; lean_object* v___x_438_; 
v___x_435_ = lean_box(0);
v___x_436_ = ((size_t)0ULL);
v___x_437_ = lean_usize_of_nat(v___x_431_);
v___x_438_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_430_, v___x_436_, v___x_437_, v___x_435_, v___y_418_);
lean_dec(v_a_430_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_445_ == 0)
{
lean_object* v_unused_446_; 
v_unused_446_ = lean_ctor_get(v___x_438_, 0);
lean_dec(v_unused_446_);
v___x_440_ = v___x_438_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_dec(v___x_438_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set_tag(v___x_440_, 1);
lean_ctor_set(v___x_440_, 0, v___x_435_);
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_435_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
else
{
v___y_412_ = v___y_417_;
v___y_413_ = v___y_418_;
v___y_414_ = v___y_419_;
v___y_415_ = v___x_438_;
goto v___jp_411_;
}
}
}
}
v___jp_447_:
{
if (lean_obj_tag(v___y_451_) == 0)
{
lean_dec_ref_known(v___y_451_, 1);
v___y_417_ = v___y_448_;
v___y_418_ = v___y_449_;
v___y_419_ = v___y_450_;
goto v___jp_416_;
}
else
{
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___y_451_;
}
}
v___jp_452_:
{
lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_457_ = lean_array_get_size(v___y_453_);
v___x_458_ = lean_nat_dec_lt(v___y_455_, v___x_457_);
if (v___x_458_ == 0)
{
v___y_383_ = v___y_454_;
v_a_384_ = v_val_456_;
goto v___jp_382_;
}
else
{
lean_object* v___x_459_; size_t v___x_460_; size_t v___x_461_; lean_object* v___x_462_; 
v___x_459_ = lean_box(0);
v___x_460_ = ((size_t)0ULL);
v___x_461_ = lean_usize_of_nat(v___x_457_);
v___x_462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_453_, v___x_460_, v___x_461_, v___x_459_, v___y_454_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_dec_ref_known(v___x_462_, 1);
v___y_383_ = v___y_454_;
v_a_384_ = v_val_456_;
goto v___jp_382_;
}
else
{
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_dec_ref_known(v___x_462_, 1);
goto v___jp_297_;
}
else
{
return v___x_462_;
}
}
}
}
v___jp_463_:
{
lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_469_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___x_470_ = l_Option_instDecidableEq___redArg(v___x_469_, v_a_468_, v___y_464_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_471_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__0));
lean_inc_ref(v_name_285_);
v___x_472_ = lean_string_append(v_name_285_, v___x_471_);
v___x_473_ = lean_string_append(v___x_472_, v___y_467_);
v___x_474_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__1));
v___x_475_ = lean_string_append(v___x_473_, v___x_474_);
v___x_476_ = 1;
v___x_477_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_477_, 0, v___x_475_);
lean_ctor_set_uint8(v___x_477_, sizeof(void*)*1, v___x_476_);
lean_inc_ref(v___y_465_);
v___x_478_ = lean_apply_2(v___y_465_, v___x_477_, lean_box(0));
v___x_479_ = lean_unsigned_to_nat(0u);
v___x_480_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
v___x_481_ = l_Lake_GitRepo_checkoutDetach(v___y_467_, v_repo_286_, v___x_480_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v_a_482_ = lean_ctor_get(v___x_481_, 1);
lean_inc(v_a_482_);
lean_dec_ref_known(v___x_481_, 2);
v___x_483_ = lean_array_get_size(v_a_482_);
v___x_484_ = lean_nat_dec_lt(v___x_479_, v___x_483_);
if (v___x_484_ == 0)
{
lean_dec(v_a_482_);
v___y_417_ = v___x_470_;
v___y_418_ = v___y_465_;
v___y_419_ = v___y_466_;
goto v___jp_416_;
}
else
{
lean_object* v___x_485_; size_t v___x_486_; size_t v___x_487_; lean_object* v___x_488_; 
v___x_485_ = lean_box(0);
v___x_486_ = ((size_t)0ULL);
v___x_487_ = lean_usize_of_nat(v___x_483_);
v___x_488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_482_, v___x_486_, v___x_487_, v___x_485_, v___y_465_);
lean_dec(v_a_482_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_dec_ref_known(v___x_488_, 1);
v___y_417_ = v___x_470_;
v___y_418_ = v___y_465_;
v___y_419_ = v___y_466_;
goto v___jp_416_;
}
else
{
v___y_448_ = v___x_470_;
v___y_449_ = v___y_465_;
v___y_450_ = v___y_466_;
v___y_451_ = v___x_488_;
goto v___jp_447_;
}
}
}
else
{
lean_object* v_a_489_; lean_object* v___x_490_; uint8_t v___x_491_; 
v_a_489_ = lean_ctor_get(v___x_481_, 1);
lean_inc(v_a_489_);
lean_dec_ref_known(v___x_481_, 2);
v___x_490_ = lean_array_get_size(v_a_489_);
v___x_491_ = lean_nat_dec_lt(v___x_479_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; lean_object* v___x_493_; 
lean_dec(v_a_489_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v___x_492_ = lean_box(0);
v___x_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
return v___x_493_;
}
else
{
lean_object* v___x_494_; size_t v___x_495_; size_t v___x_496_; lean_object* v___x_497_; 
v___x_494_ = lean_box(0);
v___x_495_ = ((size_t)0ULL);
v___x_496_ = lean_usize_of_nat(v___x_490_);
v___x_497_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_489_, v___x_495_, v___x_496_, v___x_494_, v___y_465_);
lean_dec(v_a_489_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_504_ == 0)
{
lean_object* v_unused_505_; 
v_unused_505_ = lean_ctor_get(v___x_497_, 0);
lean_dec(v_unused_505_);
v___x_499_ = v___x_497_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_dec(v___x_497_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set_tag(v___x_499_, 1);
lean_ctor_set(v___x_499_, 0, v___x_494_);
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v___x_494_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
else
{
v___y_448_ = v___x_470_;
v___y_449_ = v___y_465_;
v___y_450_ = v___y_466_;
v___y_451_ = v___x_497_;
goto v___jp_447_;
}
}
}
}
else
{
lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
lean_dec_ref(v___y_467_);
v___x_506_ = lean_unsigned_to_nat(0u);
v___x_507_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
v___x_508_ = l_Lake_GitRepo_hasNoDiff(v_repo_286_);
if (v___x_508_ == 0)
{
v___y_453_ = v___x_507_;
v___y_454_ = v___y_465_;
v___y_455_ = v___x_506_;
v_val_456_ = v___x_470_;
goto v___jp_452_;
}
else
{
uint8_t v___x_509_; 
v___x_509_ = 0;
v___y_453_ = v___x_507_;
v___y_454_ = v___y_465_;
v___y_455_ = v___x_506_;
v_val_456_ = v___x_509_;
goto v___jp_452_;
}
}
}
v___jp_510_:
{
if (lean_obj_tag(v_a_515_) == 1)
{
lean_object* v_val_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
lean_dec_ref(v___y_513_);
lean_dec_ref(v___y_512_);
v_val_516_ = lean_ctor_get(v_a_515_, 0);
lean_inc(v_val_516_);
v___x_517_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_518_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__0));
lean_inc_ref(v_repo_286_);
v___x_519_ = l_Lake_GitRepo_resolveRevision_x3f(v___x_518_, v_repo_286_);
v___x_520_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_520_ == 0)
{
v___y_464_ = v_a_515_;
v___y_465_ = v___y_511_;
v___y_466_ = v___y_514_;
v___y_467_ = v_val_516_;
v_a_468_ = v___x_519_;
goto v___jp_463_;
}
else
{
lean_object* v___x_521_; size_t v___x_522_; size_t v___x_523_; lean_object* v___x_524_; 
v___x_521_ = lean_box(0);
v___x_522_ = ((size_t)0ULL);
v___x_523_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_524_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_517_, v___x_522_, v___x_523_, v___x_521_, v___y_511_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_dec_ref_known(v___x_524_, 1);
v___y_464_ = v_a_515_;
v___y_465_ = v___y_511_;
v___y_466_ = v___y_514_;
v___y_467_ = v_val_516_;
v_a_468_ = v___x_519_;
goto v___jp_463_;
}
else
{
lean_dec(v___x_519_);
lean_dec(v_val_516_);
lean_dec_ref_known(v_a_515_, 1);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___x_524_;
}
}
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; uint8_t v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
lean_dec(v_a_515_);
lean_dec_ref(v_repo_286_);
v___x_525_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__1));
v___x_526_ = lean_string_append(v_name_285_, v___x_525_);
v___x_527_ = lean_string_append(v___x_526_, v___y_513_);
lean_dec_ref(v___y_513_);
v___x_528_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__2));
v___x_529_ = lean_string_append(v___x_527_, v___x_528_);
v___x_530_ = lean_string_append(v___x_529_, v___y_512_);
lean_dec_ref(v___y_512_);
v___x_531_ = 3;
v___x_532_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_532_, 0, v___x_530_);
lean_ctor_set_uint8(v___x_532_, sizeof(void*)*1, v___x_531_);
lean_inc_ref(v___y_511_);
v___x_533_ = lean_apply_2(v___y_511_, v___x_532_, lean_box(0));
v___x_534_ = lean_box(0);
v___x_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
return v___x_535_;
}
}
v___jp_536_:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; uint8_t v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_541_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__3));
lean_inc_ref(v_name_285_);
v___x_542_ = lean_string_append(v_name_285_, v___x_541_);
v___x_543_ = lean_string_append(v___x_542_, v___y_537_);
v___x_544_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__4));
v___x_545_ = lean_string_append(v___x_543_, v___x_544_);
v___x_546_ = lean_string_append(v___x_545_, v___y_538_);
v___x_547_ = 1;
v___x_548_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_548_, 0, v___x_546_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*1, v___x_547_);
lean_inc_ref(v___y_540_);
v___x_549_ = lean_apply_2(v___y_540_, v___x_548_, lean_box(0));
v___x_550_ = lean_unsigned_to_nat(0u);
v___x_551_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v___y_537_);
lean_inc_ref(v___y_539_);
lean_inc_ref(v_repo_286_);
v___x_552_ = l_Lake_GitRepo_fetchRevision_x3f(v_repo_286_, v___y_539_, v___y_537_, v___x_551_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v_a_554_; lean_object* v___x_555_; uint8_t v___x_556_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_a_553_);
v_a_554_ = lean_ctor_get(v___x_552_, 1);
lean_inc(v_a_554_);
lean_dec_ref_known(v___x_552_, 2);
v___x_555_ = lean_array_get_size(v_a_554_);
v___x_556_ = lean_nat_dec_lt(v___x_550_, v___x_555_);
if (v___x_556_ == 0)
{
lean_dec(v_a_554_);
v___y_511_ = v___y_540_;
v___y_512_ = v___y_538_;
v___y_513_ = v___y_537_;
v___y_514_ = v___y_539_;
v_a_515_ = v_a_553_;
goto v___jp_510_;
}
else
{
lean_object* v___x_557_; size_t v___x_558_; size_t v___x_559_; lean_object* v___x_560_; 
v___x_557_ = lean_box(0);
v___x_558_ = ((size_t)0ULL);
v___x_559_ = lean_usize_of_nat(v___x_555_);
v___x_560_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_554_, v___x_558_, v___x_559_, v___x_557_, v___y_540_);
lean_dec(v_a_554_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_dec_ref_known(v___x_560_, 1);
v___y_511_ = v___y_540_;
v___y_512_ = v___y_538_;
v___y_513_ = v___y_537_;
v___y_514_ = v___y_539_;
v_a_515_ = v_a_553_;
goto v___jp_510_;
}
else
{
lean_dec(v_a_553_);
lean_dec_ref(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___x_560_;
}
}
}
else
{
lean_object* v_a_561_; lean_object* v___x_562_; uint8_t v___x_563_; 
lean_dec_ref(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v_a_561_ = lean_ctor_get(v___x_552_, 1);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_552_, 2);
v___x_562_ = lean_array_get_size(v_a_561_);
v___x_563_ = lean_nat_dec_lt(v___x_550_, v___x_562_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; lean_object* v___x_565_; 
lean_dec(v_a_561_);
v___x_564_ = lean_box(0);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
return v___x_565_;
}
else
{
lean_object* v___x_566_; size_t v___x_567_; size_t v___x_568_; lean_object* v___x_569_; 
v___x_566_ = lean_box(0);
v___x_567_ = ((size_t)0ULL);
v___x_568_ = lean_usize_of_nat(v___x_562_);
v___x_569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_561_, v___x_567_, v___x_568_, v___x_566_, v___y_540_);
lean_dec(v_a_561_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; 
v_unused_577_ = lean_ctor_get(v___x_569_, 0);
lean_dec(v_unused_577_);
v___x_571_ = v___x_569_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_dec(v___x_569_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
lean_ctor_set_tag(v___x_571_, 1);
lean_ctor_set(v___x_571_, 0, v___x_566_);
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_566_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
else
{
return v___x_569_;
}
}
}
}
v___jp_578_:
{
if (lean_obj_tag(v___y_582_) == 0)
{
lean_dec_ref_known(v___y_582_, 1);
v___y_537_ = v___y_581_;
v___y_538_ = v___y_580_;
v___y_539_ = v___y_579_;
v___y_540_ = v___y_289_;
goto v___jp_536_;
}
else
{
lean_dec_ref(v___y_581_);
lean_dec_ref(v___y_580_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___y_582_;
}
}
v___jp_583_:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_587_ = lean_unsigned_to_nat(0u);
v___x_588_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
lean_inc_ref(v___y_585_);
lean_inc_ref(v___y_586_);
v___x_589_ = l_Lake_GitRepo_addRemote(v___y_586_, v___y_585_, v_repo_286_, v___x_588_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v_a_590_; lean_object* v___x_591_; uint8_t v___x_592_; 
v_a_590_ = lean_ctor_get(v___x_589_, 1);
lean_inc(v_a_590_);
lean_dec_ref_known(v___x_589_, 2);
v___x_591_ = lean_array_get_size(v_a_590_);
v___x_592_ = lean_nat_dec_lt(v___x_587_, v___x_591_);
if (v___x_592_ == 0)
{
lean_dec(v_a_590_);
v___y_537_ = v___y_584_;
v___y_538_ = v___y_585_;
v___y_539_ = v___y_586_;
v___y_540_ = v___y_289_;
goto v___jp_536_;
}
else
{
lean_object* v___x_593_; size_t v___x_594_; size_t v___x_595_; lean_object* v___x_596_; 
v___x_593_ = lean_box(0);
v___x_594_ = ((size_t)0ULL);
v___x_595_ = lean_usize_of_nat(v___x_591_);
v___x_596_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_590_, v___x_594_, v___x_595_, v___x_593_, v___y_289_);
lean_dec(v_a_590_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_dec_ref_known(v___x_596_, 1);
v___y_537_ = v___y_584_;
v___y_538_ = v___y_585_;
v___y_539_ = v___y_586_;
v___y_540_ = v___y_289_;
goto v___jp_536_;
}
else
{
v___y_579_ = v___y_586_;
v___y_580_ = v___y_585_;
v___y_581_ = v___y_584_;
v___y_582_ = v___x_596_;
goto v___jp_578_;
}
}
}
else
{
lean_object* v_a_597_; lean_object* v___x_598_; uint8_t v___x_599_; 
v_a_597_ = lean_ctor_get(v___x_589_, 1);
lean_inc(v_a_597_);
lean_dec_ref_known(v___x_589_, 2);
v___x_598_ = lean_array_get_size(v_a_597_);
v___x_599_ = lean_nat_dec_lt(v___x_587_, v___x_598_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; lean_object* v___x_601_; 
lean_dec(v_a_597_);
lean_dec_ref(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v___x_600_ = lean_box(0);
v___x_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
return v___x_601_;
}
else
{
lean_object* v___x_602_; size_t v___x_603_; size_t v___x_604_; lean_object* v___x_605_; 
v___x_602_ = lean_box(0);
v___x_603_ = ((size_t)0ULL);
v___x_604_ = lean_usize_of_nat(v___x_598_);
v___x_605_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_597_, v___x_603_, v___x_604_, v___x_602_, v___y_289_);
lean_dec(v_a_597_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec_ref(v___y_585_);
lean_dec_ref(v___y_584_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; 
v_unused_613_ = lean_ctor_get(v___x_605_, 0);
lean_dec(v_unused_613_);
v___x_607_ = v___x_605_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_dec(v___x_605_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
lean_ctor_set_tag(v___x_607_, 1);
lean_ctor_set(v___x_607_, 0, v___x_602_);
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_602_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
else
{
v___y_579_ = v___y_586_;
v___y_580_ = v___y_585_;
v___y_581_ = v___y_584_;
v___y_582_ = v___x_605_;
goto v___jp_578_;
}
}
}
}
v___jp_614_:
{
if (lean_obj_tag(v___y_618_) == 0)
{
lean_dec_ref_known(v___y_618_, 1);
v___y_584_ = v___y_617_;
v___y_585_ = v___y_616_;
v___y_586_ = v___y_615_;
goto v___jp_583_;
}
else
{
lean_dec_ref(v___y_617_);
lean_dec_ref(v___y_616_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___y_618_;
}
}
v___jp_619_:
{
if (v_a_621_ == 0)
{
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
goto v___jp_294_;
}
else
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; uint8_t v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_622_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_623_ = lean_string_append(v_name_285_, v___x_622_);
v___x_624_ = lean_string_append(v___x_623_, v_repo_286_);
lean_dec_ref(v_repo_286_);
v___x_625_ = 2;
v___x_626_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_626_, 0, v___x_624_);
lean_ctor_set_uint8(v___x_626_, sizeof(void*)*1, v___x_625_);
lean_inc_ref(v___y_620_);
v___x_627_ = lean_apply_2(v___y_620_, v___x_626_, lean_box(0));
goto v___jp_294_;
}
}
v___jp_628_:
{
if (v_a_630_ == 0)
{
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
goto v___jp_291_;
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; uint8_t v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_631_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_632_ = lean_string_append(v_name_285_, v___x_631_);
v___x_633_ = lean_string_append(v___x_632_, v_repo_286_);
lean_dec_ref(v_repo_286_);
v___x_634_ = 2;
v___x_635_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set_uint8(v___x_635_, sizeof(void*)*1, v___x_634_);
lean_inc_ref(v___y_629_);
v___x_636_ = lean_apply_2(v___y_629_, v___x_635_, lean_box(0));
goto v___jp_291_;
}
}
v___jp_637_:
{
lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_642_ = lean_array_get_size(v___y_640_);
v___x_643_ = lean_nat_dec_lt(v___y_638_, v___x_642_);
if (v___x_643_ == 0)
{
v___y_620_ = v___y_639_;
v_a_621_ = v_val_641_;
goto v___jp_619_;
}
else
{
lean_object* v___x_644_; size_t v___x_645_; size_t v___x_646_; lean_object* v___x_647_; 
v___x_644_ = lean_box(0);
v___x_645_ = ((size_t)0ULL);
v___x_646_ = lean_usize_of_nat(v___x_642_);
v___x_647_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_640_, v___x_645_, v___x_646_, v___x_644_, v___y_639_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_dec_ref_known(v___x_647_, 1);
v___y_620_ = v___y_639_;
v_a_621_ = v_val_641_;
goto v___jp_619_;
}
else
{
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_dec_ref_known(v___x_647_, 1);
goto v___jp_294_;
}
else
{
return v___x_647_;
}
}
}
}
v___jp_648_:
{
lean_object* v___x_652_; lean_object* v___x_653_; uint8_t v___x_654_; 
v___x_652_ = lean_unsigned_to_nat(0u);
v___x_653_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
v___x_654_ = l_Lake_GitRepo_hasNoDiff(v_repo_286_);
if (v___x_654_ == 0)
{
v___y_638_ = v___x_652_;
v___y_639_ = v___y_651_;
v___y_640_ = v___x_653_;
v_val_641_ = v___y_649_;
goto v___jp_637_;
}
else
{
v___y_638_ = v___x_652_;
v___y_639_ = v___y_651_;
v___y_640_ = v___x_653_;
v_val_641_ = v___y_650_;
goto v___jp_637_;
}
}
v___jp_655_:
{
if (lean_obj_tag(v___y_659_) == 0)
{
lean_dec_ref_known(v___y_659_, 1);
v___y_649_ = v___y_656_;
v___y_650_ = v___y_657_;
v___y_651_ = v___y_658_;
goto v___jp_648_;
}
else
{
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___y_659_;
}
}
v___jp_660_:
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_664_ = lean_unsigned_to_nat(0u);
v___x_665_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
v___x_666_ = l_Lake_GitRepo_clean(v_repo_286_, v___x_665_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v_a_667_ = lean_ctor_get(v___x_666_, 1);
lean_inc(v_a_667_);
lean_dec_ref_known(v___x_666_, 2);
v___x_668_ = lean_array_get_size(v_a_667_);
v___x_669_ = lean_nat_dec_lt(v___x_664_, v___x_668_);
if (v___x_669_ == 0)
{
lean_dec(v_a_667_);
v___y_649_ = v___y_661_;
v___y_650_ = v___y_662_;
v___y_651_ = v___y_663_;
goto v___jp_648_;
}
else
{
lean_object* v___x_670_; size_t v___x_671_; size_t v___x_672_; lean_object* v___x_673_; 
v___x_670_ = lean_box(0);
v___x_671_ = ((size_t)0ULL);
v___x_672_ = lean_usize_of_nat(v___x_668_);
v___x_673_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_667_, v___x_671_, v___x_672_, v___x_670_, v___y_663_);
lean_dec(v_a_667_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_dec_ref_known(v___x_673_, 1);
v___y_649_ = v___y_661_;
v___y_650_ = v___y_662_;
v___y_651_ = v___y_663_;
goto v___jp_648_;
}
else
{
v___y_656_ = v___y_661_;
v___y_657_ = v___y_662_;
v___y_658_ = v___y_663_;
v___y_659_ = v___x_673_;
goto v___jp_655_;
}
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_675_; uint8_t v___x_676_; 
v_a_674_ = lean_ctor_get(v___x_666_, 1);
lean_inc(v_a_674_);
lean_dec_ref_known(v___x_666_, 2);
v___x_675_ = lean_array_get_size(v_a_674_);
v___x_676_ = lean_nat_dec_lt(v___x_664_, v___x_675_);
if (v___x_676_ == 0)
{
lean_object* v___x_677_; lean_object* v___x_678_; 
lean_dec(v_a_674_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v___x_677_ = lean_box(0);
v___x_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
return v___x_678_;
}
else
{
lean_object* v___x_679_; size_t v___x_680_; size_t v___x_681_; lean_object* v___x_682_; 
v___x_679_ = lean_box(0);
v___x_680_ = ((size_t)0ULL);
v___x_681_ = lean_usize_of_nat(v___x_675_);
v___x_682_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_674_, v___x_680_, v___x_681_, v___x_679_, v___y_663_);
lean_dec(v_a_674_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_689_ == 0)
{
lean_object* v_unused_690_; 
v_unused_690_ = lean_ctor_get(v___x_682_, 0);
lean_dec(v_unused_690_);
v___x_684_ = v___x_682_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_dec(v___x_682_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
lean_ctor_set_tag(v___x_684_, 1);
lean_ctor_set(v___x_684_, 0, v___x_679_);
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_679_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
else
{
v___y_656_ = v___y_661_;
v___y_657_ = v___y_662_;
v___y_658_ = v___y_663_;
v___y_659_ = v___x_682_;
goto v___jp_655_;
}
}
}
}
v___jp_691_:
{
if (lean_obj_tag(v___y_695_) == 0)
{
lean_dec_ref_known(v___y_695_, 1);
v___y_661_ = v___y_692_;
v___y_662_ = v___y_693_;
v___y_663_ = v___y_694_;
goto v___jp_660_;
}
else
{
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___y_695_;
}
}
v___jp_696_:
{
if (lean_obj_tag(v_a_703_) == 0)
{
v___y_537_ = v___y_700_;
v___y_538_ = v___y_699_;
v___y_539_ = v___y_698_;
v___y_540_ = v___y_702_;
goto v___jp_536_;
}
else
{
lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_744_; 
v_isSharedCheck_744_ = !lean_is_exclusive(v_a_703_);
if (v_isSharedCheck_744_ == 0)
{
lean_object* v_unused_745_; 
v_unused_745_ = lean_ctor_get(v_a_703_, 0);
lean_dec(v_unused_745_);
v___x_705_ = v_a_703_;
v_isShared_706_ = v_isSharedCheck_744_;
goto v_resetjp_704_;
}
else
{
lean_dec(v_a_703_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_744_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
if (v___y_697_ == 0)
{
lean_del_object(v___x_705_);
v___y_537_ = v___y_700_;
v___y_538_ = v___y_699_;
v___y_539_ = v___y_698_;
v___y_540_ = v___y_702_;
goto v___jp_536_;
}
else
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; uint8_t v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
lean_dec_ref(v___y_699_);
v___x_707_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__0));
lean_inc_ref(v_name_285_);
v___x_708_ = lean_string_append(v_name_285_, v___x_707_);
v___x_709_ = lean_string_append(v___x_708_, v___y_700_);
v___x_710_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__1));
v___x_711_ = lean_string_append(v___x_709_, v___x_710_);
v___x_712_ = 1;
v___x_713_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_713_, 0, v___x_711_);
lean_ctor_set_uint8(v___x_713_, sizeof(void*)*1, v___x_712_);
lean_inc_ref(v___y_702_);
v___x_714_ = lean_apply_2(v___y_702_, v___x_713_, lean_box(0));
v___x_715_ = lean_unsigned_to_nat(0u);
v___x_716_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
v___x_717_ = l_Lake_GitRepo_checkoutDetach(v___y_700_, v_repo_286_, v___x_716_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v_a_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
lean_del_object(v___x_705_);
v_a_718_ = lean_ctor_get(v___x_717_, 1);
lean_inc(v_a_718_);
lean_dec_ref_known(v___x_717_, 2);
v___x_719_ = lean_array_get_size(v_a_718_);
v___x_720_ = lean_nat_dec_lt(v___x_715_, v___x_719_);
if (v___x_720_ == 0)
{
lean_dec(v_a_718_);
v___y_661_ = v___y_697_;
v___y_662_ = v___y_701_;
v___y_663_ = v___y_702_;
goto v___jp_660_;
}
else
{
lean_object* v___x_721_; size_t v___x_722_; size_t v___x_723_; lean_object* v___x_724_; 
v___x_721_ = lean_box(0);
v___x_722_ = ((size_t)0ULL);
v___x_723_ = lean_usize_of_nat(v___x_719_);
v___x_724_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_718_, v___x_722_, v___x_723_, v___x_721_, v___y_702_);
lean_dec(v_a_718_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_dec_ref_known(v___x_724_, 1);
v___y_661_ = v___y_697_;
v___y_662_ = v___y_701_;
v___y_663_ = v___y_702_;
goto v___jp_660_;
}
else
{
v___y_692_ = v___y_697_;
v___y_693_ = v___y_701_;
v___y_694_ = v___y_702_;
v___y_695_ = v___x_724_;
goto v___jp_691_;
}
}
}
else
{
lean_object* v_a_725_; lean_object* v___x_726_; uint8_t v___x_727_; 
v_a_725_ = lean_ctor_get(v___x_717_, 1);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_717_, 2);
v___x_726_ = lean_array_get_size(v_a_725_);
v___x_727_ = lean_nat_dec_lt(v___x_715_, v___x_726_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; lean_object* v___x_730_; 
lean_dec(v_a_725_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v___x_728_ = lean_box(0);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 0, v___x_728_);
v___x_730_ = v___x_705_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
else
{
lean_object* v___x_732_; size_t v___x_733_; size_t v___x_734_; lean_object* v___x_735_; 
lean_del_object(v___x_705_);
v___x_732_ = lean_box(0);
v___x_733_ = ((size_t)0ULL);
v___x_734_ = lean_usize_of_nat(v___x_726_);
v___x_735_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_725_, v___x_733_, v___x_734_, v___x_732_, v___y_702_);
lean_dec(v_a_725_);
if (lean_obj_tag(v___x_735_) == 0)
{
lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_742_; 
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_735_);
if (v_isSharedCheck_742_ == 0)
{
lean_object* v_unused_743_; 
v_unused_743_ = lean_ctor_get(v___x_735_, 0);
lean_dec(v_unused_743_);
v___x_737_ = v___x_735_;
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
else
{
lean_dec(v___x_735_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_742_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_740_; 
if (v_isShared_738_ == 0)
{
lean_ctor_set_tag(v___x_737_, 1);
lean_ctor_set(v___x_737_, 0, v___x_732_);
v___x_740_ = v___x_737_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_732_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
else
{
v___y_692_ = v___y_697_;
v___y_693_ = v___y_701_;
v___y_694_ = v___y_702_;
v___y_695_ = v___x_735_;
goto v___jp_691_;
}
}
}
}
}
}
}
v___jp_746_:
{
lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_751_ = lean_array_get_size(v___y_748_);
v___x_752_ = lean_nat_dec_lt(v___y_747_, v___x_751_);
if (v___x_752_ == 0)
{
v___y_629_ = v___y_749_;
v_a_630_ = v_val_750_;
goto v___jp_628_;
}
else
{
lean_object* v___x_753_; size_t v___x_754_; size_t v___x_755_; lean_object* v___x_756_; 
v___x_753_ = lean_box(0);
v___x_754_ = ((size_t)0ULL);
v___x_755_ = lean_usize_of_nat(v___x_751_);
v___x_756_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_748_, v___x_754_, v___x_755_, v___x_753_, v___y_749_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_dec_ref_known(v___x_756_, 1);
v___y_629_ = v___y_749_;
v_a_630_ = v_val_750_;
goto v___jp_628_;
}
else
{
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_dec_ref_known(v___x_756_, 1);
goto v___jp_291_;
}
else
{
return v___x_756_;
}
}
}
}
v___jp_757_:
{
lean_object* v___x_763_; lean_object* v___x_764_; uint8_t v___x_765_; 
v___x_763_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
lean_inc_ref(v___y_760_);
v___x_764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_764_, 0, v___y_760_);
v___x_765_ = l_Option_instDecidableEq___redArg(v___x_763_, v_a_762_, v___x_764_);
if (v___x_765_ == 0)
{
uint8_t v___x_766_; 
v___x_766_ = l_Lake_GitRev_isFullSha1(v___y_760_);
if (v___x_766_ == 0)
{
v___y_537_ = v___y_760_;
v___y_538_ = v___y_758_;
v___y_539_ = v___y_759_;
v___y_540_ = v___y_761_;
goto v___jp_536_;
}
else
{
lean_object* v___x_767_; lean_object* v___x_768_; uint8_t v___x_769_; 
v___x_767_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
lean_inc_ref(v___y_760_);
v___x_768_ = l_Lake_GitRepo_findCommit_x3f(v___y_760_, v_repo_286_);
v___x_769_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_769_ == 0)
{
v___y_697_ = v___x_766_;
v___y_698_ = v___y_759_;
v___y_699_ = v___y_758_;
v___y_700_ = v___y_760_;
v___y_701_ = v___x_765_;
v___y_702_ = v___y_761_;
v_a_703_ = v___x_768_;
goto v___jp_696_;
}
else
{
lean_object* v___x_770_; size_t v___x_771_; size_t v___x_772_; lean_object* v___x_773_; 
v___x_770_ = lean_box(0);
v___x_771_ = ((size_t)0ULL);
v___x_772_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_773_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_767_, v___x_771_, v___x_772_, v___x_770_, v___y_761_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_dec_ref_known(v___x_773_, 1);
v___y_697_ = v___x_766_;
v___y_698_ = v___y_759_;
v___y_699_ = v___y_758_;
v___y_700_ = v___y_760_;
v___y_701_ = v___x_765_;
v___y_702_ = v___y_761_;
v_a_703_ = v___x_768_;
goto v___jp_696_;
}
else
{
lean_dec(v___x_768_);
lean_dec_ref(v___y_760_);
lean_dec_ref(v___y_758_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___x_773_;
}
}
}
}
else
{
lean_object* v___x_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
lean_dec_ref(v___y_760_);
lean_dec_ref(v___y_758_);
v___x_774_ = lean_unsigned_to_nat(0u);
v___x_775_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
v___x_776_ = l_Lake_GitRepo_hasNoDiff(v_repo_286_);
if (v___x_776_ == 0)
{
v___y_747_ = v___x_774_;
v___y_748_ = v___x_775_;
v___y_749_ = v___y_761_;
v_val_750_ = v___x_765_;
goto v___jp_746_;
}
else
{
uint8_t v___x_777_; 
v___x_777_ = 0;
v___y_747_ = v___x_774_;
v___y_748_ = v___x_775_;
v___y_749_ = v___y_761_;
v_val_750_ = v___x_777_;
goto v___jp_746_;
}
}
}
v___jp_778_:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; uint8_t v___x_786_; 
v___x_783_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_784_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__0));
lean_inc_ref(v_repo_286_);
v___x_785_ = l_Lake_GitRepo_resolveRevision_x3f(v___x_784_, v_repo_286_);
v___x_786_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_786_ == 0)
{
v___y_758_ = v___y_781_;
v___y_759_ = v___y_780_;
v___y_760_ = v___y_779_;
v___y_761_ = v___y_782_;
v_a_762_ = v___x_785_;
goto v___jp_757_;
}
else
{
lean_object* v___x_787_; size_t v___x_788_; size_t v___x_789_; lean_object* v___x_790_; 
v___x_787_ = lean_box(0);
v___x_788_ = ((size_t)0ULL);
v___x_789_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_790_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_783_, v___x_788_, v___x_789_, v___x_787_, v___y_782_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_dec_ref_known(v___x_790_, 1);
v___y_758_ = v___y_781_;
v___y_759_ = v___y_780_;
v___y_760_ = v___y_779_;
v___y_761_ = v___y_782_;
v_a_762_ = v___x_785_;
goto v___jp_757_;
}
else
{
lean_dec(v___x_785_);
lean_dec_ref(v___y_781_);
lean_dec_ref(v___y_779_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___x_790_;
}
}
}
v___jp_791_:
{
if (lean_obj_tag(v___y_795_) == 0)
{
lean_dec_ref_known(v___y_795_, 1);
v___y_779_ = v___y_794_;
v___y_780_ = v___y_793_;
v___y_781_ = v___y_792_;
v___y_782_ = v___y_289_;
goto v___jp_778_;
}
else
{
lean_dec_ref(v___y_794_);
lean_dec_ref(v___y_792_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___y_795_;
}
}
v___jp_796_:
{
if (lean_obj_tag(v___y_800_) == 0)
{
lean_dec_ref_known(v___y_800_, 1);
v___y_779_ = v___y_799_;
v___y_780_ = v___y_798_;
v___y_781_ = v___y_797_;
v___y_782_ = v___y_289_;
goto v___jp_778_;
}
else
{
lean_dec_ref(v___y_799_);
lean_dec_ref(v___y_797_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___y_800_;
}
}
v___jp_801_:
{
if (lean_obj_tag(v_a_805_) == 1)
{
lean_object* v_val_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_849_; 
v_val_806_ = lean_ctor_get(v_a_805_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v_a_805_);
if (v_isSharedCheck_849_ == 0)
{
v___x_808_ = v_a_805_;
v_isShared_809_ = v_isSharedCheck_849_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_val_806_);
lean_dec(v_a_805_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_849_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
uint8_t v___x_810_; 
v___x_810_ = lean_string_dec_eq(v_val_806_, v___y_804_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_811_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__5));
lean_inc_ref(v_name_285_);
v___x_812_ = lean_string_append(v_name_285_, v___x_811_);
v___x_813_ = lean_string_append(v___x_812_, v_val_806_);
lean_dec(v_val_806_);
v___x_814_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__6));
v___x_815_ = lean_string_append(v___x_813_, v___x_814_);
v___x_816_ = lean_string_append(v___x_815_, v___y_804_);
v___x_817_ = 1;
v___x_818_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_818_, 0, v___x_816_);
lean_ctor_set_uint8(v___x_818_, sizeof(void*)*1, v___x_817_);
lean_inc_ref(v___y_289_);
v___x_819_ = lean_apply_2(v___y_289_, v___x_818_, lean_box(0));
v___x_820_ = lean_unsigned_to_nat(0u);
v___x_821_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
lean_inc_ref(v___y_804_);
lean_inc_ref(v___y_803_);
v___x_822_ = l_Lake_GitRepo_setRemoteUrl(v___y_803_, v___y_804_, v_repo_286_, v___x_821_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_824_; uint8_t v___x_825_; 
lean_del_object(v___x_808_);
v_a_823_ = lean_ctor_get(v___x_822_, 1);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_822_, 2);
v___x_824_ = lean_array_get_size(v_a_823_);
v___x_825_ = lean_nat_dec_lt(v___x_820_, v___x_824_);
if (v___x_825_ == 0)
{
lean_dec(v_a_823_);
v___y_779_ = v___y_802_;
v___y_780_ = v___y_803_;
v___y_781_ = v___y_804_;
v___y_782_ = v___y_289_;
goto v___jp_778_;
}
else
{
lean_object* v___x_826_; size_t v___x_827_; size_t v___x_828_; lean_object* v___x_829_; 
v___x_826_ = lean_box(0);
v___x_827_ = ((size_t)0ULL);
v___x_828_ = lean_usize_of_nat(v___x_824_);
v___x_829_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_823_, v___x_827_, v___x_828_, v___x_826_, v___y_289_);
lean_dec(v_a_823_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_dec_ref_known(v___x_829_, 1);
v___y_779_ = v___y_802_;
v___y_780_ = v___y_803_;
v___y_781_ = v___y_804_;
v___y_782_ = v___y_289_;
goto v___jp_778_;
}
else
{
v___y_797_ = v___y_804_;
v___y_798_ = v___y_803_;
v___y_799_ = v___y_802_;
v___y_800_ = v___x_829_;
goto v___jp_796_;
}
}
}
else
{
lean_object* v_a_830_; lean_object* v___x_831_; uint8_t v___x_832_; 
v_a_830_ = lean_ctor_get(v___x_822_, 1);
lean_inc(v_a_830_);
lean_dec_ref_known(v___x_822_, 2);
v___x_831_ = lean_array_get_size(v_a_830_);
v___x_832_ = lean_nat_dec_lt(v___x_820_, v___x_831_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; lean_object* v___x_835_; 
lean_dec(v_a_830_);
lean_dec_ref(v___y_804_);
lean_dec_ref(v___y_802_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v___x_833_ = lean_box(0);
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 0, v___x_833_);
v___x_835_ = v___x_808_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_833_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
else
{
lean_object* v___x_837_; size_t v___x_838_; size_t v___x_839_; lean_object* v___x_840_; 
lean_del_object(v___x_808_);
v___x_837_ = lean_box(0);
v___x_838_ = ((size_t)0ULL);
v___x_839_ = lean_usize_of_nat(v___x_831_);
v___x_840_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_830_, v___x_838_, v___x_839_, v___x_837_, v___y_289_);
lean_dec(v_a_830_);
if (lean_obj_tag(v___x_840_) == 0)
{
lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
lean_dec_ref(v___y_804_);
lean_dec_ref(v___y_802_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_840_);
if (v_isSharedCheck_847_ == 0)
{
lean_object* v_unused_848_; 
v_unused_848_ = lean_ctor_get(v___x_840_, 0);
lean_dec(v_unused_848_);
v___x_842_ = v___x_840_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_dec(v___x_840_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
lean_ctor_set_tag(v___x_842_, 1);
lean_ctor_set(v___x_842_, 0, v___x_837_);
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_837_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
else
{
v___y_797_ = v___y_804_;
v___y_798_ = v___y_803_;
v___y_799_ = v___y_802_;
v___y_800_ = v___x_840_;
goto v___jp_796_;
}
}
}
}
else
{
lean_del_object(v___x_808_);
lean_dec(v_val_806_);
v___y_779_ = v___y_802_;
v___y_780_ = v___y_803_;
v___y_781_ = v___y_804_;
v___y_782_ = v___y_289_;
goto v___jp_778_;
}
}
}
else
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
lean_dec(v_a_805_);
v___x_850_ = lean_unsigned_to_nat(0u);
v___x_851_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
lean_inc_ref(v___y_804_);
lean_inc_ref(v___y_803_);
v___x_852_ = l_Lake_GitRepo_addRemote(v___y_803_, v___y_804_, v_repo_286_, v___x_851_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_object* v_a_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v_a_853_ = lean_ctor_get(v___x_852_, 1);
lean_inc(v_a_853_);
lean_dec_ref_known(v___x_852_, 2);
v___x_854_ = lean_array_get_size(v_a_853_);
v___x_855_ = lean_nat_dec_lt(v___x_850_, v___x_854_);
if (v___x_855_ == 0)
{
lean_dec(v_a_853_);
v___y_779_ = v___y_802_;
v___y_780_ = v___y_803_;
v___y_781_ = v___y_804_;
v___y_782_ = v___y_289_;
goto v___jp_778_;
}
else
{
lean_object* v___x_856_; size_t v___x_857_; size_t v___x_858_; lean_object* v___x_859_; 
v___x_856_ = lean_box(0);
v___x_857_ = ((size_t)0ULL);
v___x_858_ = lean_usize_of_nat(v___x_854_);
v___x_859_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_853_, v___x_857_, v___x_858_, v___x_856_, v___y_289_);
lean_dec(v_a_853_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_dec_ref_known(v___x_859_, 1);
v___y_779_ = v___y_802_;
v___y_780_ = v___y_803_;
v___y_781_ = v___y_804_;
v___y_782_ = v___y_289_;
goto v___jp_778_;
}
else
{
v___y_792_ = v___y_804_;
v___y_793_ = v___y_803_;
v___y_794_ = v___y_802_;
v___y_795_ = v___x_859_;
goto v___jp_791_;
}
}
}
else
{
lean_object* v_a_860_; lean_object* v___x_861_; uint8_t v___x_862_; 
v_a_860_ = lean_ctor_get(v___x_852_, 1);
lean_inc(v_a_860_);
lean_dec_ref_known(v___x_852_, 2);
v___x_861_ = lean_array_get_size(v_a_860_);
v___x_862_ = lean_nat_dec_lt(v___x_850_, v___x_861_);
if (v___x_862_ == 0)
{
lean_object* v___x_863_; lean_object* v___x_864_; 
lean_dec(v_a_860_);
lean_dec_ref(v___y_804_);
lean_dec_ref(v___y_802_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v___x_863_ = lean_box(0);
v___x_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
return v___x_864_;
}
else
{
lean_object* v___x_865_; size_t v___x_866_; size_t v___x_867_; lean_object* v___x_868_; 
v___x_865_ = lean_box(0);
v___x_866_ = ((size_t)0ULL);
v___x_867_ = lean_usize_of_nat(v___x_861_);
v___x_868_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_860_, v___x_866_, v___x_867_, v___x_865_, v___y_289_);
lean_dec(v_a_860_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
lean_dec_ref(v___y_804_);
lean_dec_ref(v___y_802_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_875_ == 0)
{
lean_object* v_unused_876_; 
v_unused_876_ = lean_ctor_get(v___x_868_, 0);
lean_dec(v_unused_876_);
v___x_870_ = v___x_868_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_dec(v___x_868_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
lean_ctor_set_tag(v___x_870_, 1);
lean_ctor_set(v___x_870_, 0, v___x_865_);
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v___x_865_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
else
{
v___y_792_ = v___y_804_;
v___y_793_ = v___y_803_;
v___y_794_ = v___y_802_;
v___y_795_ = v___x_868_;
goto v___jp_791_;
}
}
}
}
}
v___jp_877_:
{
if (v_a_881_ == 0)
{
lean_object* v___x_882_; lean_object* v___x_883_; uint8_t v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_882_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__7));
lean_inc_ref(v_name_285_);
v___x_883_ = lean_string_append(v_name_285_, v___x_882_);
v___x_884_ = 1;
v___x_885_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_885_, 0, v___x_883_);
lean_ctor_set_uint8(v___x_885_, sizeof(void*)*1, v___x_884_);
lean_inc_ref(v___y_289_);
v___x_886_ = lean_apply_2(v___y_289_, v___x_885_, lean_box(0));
lean_inc_ref(v_repo_286_);
v___x_887_ = l_IO_FS_createDirAll(v_repo_286_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_920_; 
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_920_ == 0)
{
lean_object* v_unused_921_; 
v_unused_921_ = lean_ctor_get(v___x_887_, 0);
lean_dec(v_unused_921_);
v___x_889_ = v___x_887_;
v_isShared_890_ = v_isSharedCheck_920_;
goto v_resetjp_888_;
}
else
{
lean_dec(v___x_887_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_920_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_891_ = lean_unsigned_to_nat(0u);
v___x_892_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
v___x_893_ = l_Lake_GitRepo_quietInit(v_repo_286_, v___x_892_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v___x_895_; uint8_t v___x_896_; 
lean_del_object(v___x_889_);
v_a_894_ = lean_ctor_get(v___x_893_, 1);
lean_inc(v_a_894_);
lean_dec_ref_known(v___x_893_, 2);
v___x_895_ = lean_array_get_size(v_a_894_);
v___x_896_ = lean_nat_dec_lt(v___x_891_, v___x_895_);
if (v___x_896_ == 0)
{
lean_dec(v_a_894_);
v___y_584_ = v___y_880_;
v___y_585_ = v___y_879_;
v___y_586_ = v___y_878_;
goto v___jp_583_;
}
else
{
lean_object* v___x_897_; size_t v___x_898_; size_t v___x_899_; lean_object* v___x_900_; 
v___x_897_ = lean_box(0);
v___x_898_ = ((size_t)0ULL);
v___x_899_ = lean_usize_of_nat(v___x_895_);
v___x_900_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_894_, v___x_898_, v___x_899_, v___x_897_, v___y_289_);
lean_dec(v_a_894_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_dec_ref_known(v___x_900_, 1);
v___y_584_ = v___y_880_;
v___y_585_ = v___y_879_;
v___y_586_ = v___y_878_;
goto v___jp_583_;
}
else
{
v___y_615_ = v___y_878_;
v___y_616_ = v___y_879_;
v___y_617_ = v___y_880_;
v___y_618_ = v___x_900_;
goto v___jp_614_;
}
}
}
else
{
lean_object* v_a_901_; lean_object* v___x_902_; uint8_t v___x_903_; 
v_a_901_ = lean_ctor_get(v___x_893_, 1);
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_893_, 2);
v___x_902_ = lean_array_get_size(v_a_901_);
v___x_903_ = lean_nat_dec_lt(v___x_891_, v___x_902_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; lean_object* v___x_906_; 
lean_dec(v_a_901_);
lean_dec_ref(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v___x_904_ = lean_box(0);
if (v_isShared_890_ == 0)
{
lean_ctor_set_tag(v___x_889_, 1);
lean_ctor_set(v___x_889_, 0, v___x_904_);
v___x_906_ = v___x_889_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v___x_904_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
else
{
lean_object* v___x_908_; size_t v___x_909_; size_t v___x_910_; lean_object* v___x_911_; 
lean_del_object(v___x_889_);
v___x_908_ = lean_box(0);
v___x_909_ = ((size_t)0ULL);
v___x_910_ = lean_usize_of_nat(v___x_902_);
v___x_911_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_901_, v___x_909_, v___x_910_, v___x_908_, v___y_289_);
lean_dec(v_a_901_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
lean_dec_ref(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_918_ == 0)
{
lean_object* v_unused_919_; 
v_unused_919_ = lean_ctor_get(v___x_911_, 0);
lean_dec(v_unused_919_);
v___x_913_ = v___x_911_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_dec(v___x_911_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
lean_ctor_set_tag(v___x_913_, 1);
lean_ctor_set(v___x_913_, 0, v___x_908_);
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v___x_908_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
else
{
v___y_615_ = v___y_878_;
v___y_616_ = v___y_879_;
v___y_617_ = v___y_880_;
v___y_618_ = v___x_911_;
goto v___jp_614_;
}
}
}
}
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_934_; 
lean_dec_ref(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
v_a_922_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_934_ == 0)
{
v___x_924_ = v___x_887_;
v_isShared_925_ = v_isSharedCheck_934_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_887_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_934_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; uint8_t v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_926_ = lean_io_error_to_string(v_a_922_);
v___x_927_ = 3;
v___x_928_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_928_, 0, v___x_926_);
lean_ctor_set_uint8(v___x_928_, sizeof(void*)*1, v___x_927_);
lean_inc_ref(v___y_289_);
v___x_929_ = lean_apply_2(v___y_289_, v___x_928_, lean_box(0));
v___x_930_ = lean_box(0);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_930_);
v___x_932_ = v___x_924_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
else
{
lean_object* v___x_935_; lean_object* v___x_936_; uint8_t v___x_937_; 
v___x_935_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_repo_286_);
lean_inc_ref(v___y_878_);
v___x_936_ = l_Lake_GitRepo_getRemoteUrl_x3f(v___y_878_, v_repo_286_);
v___x_937_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_937_ == 0)
{
v___y_802_ = v___y_880_;
v___y_803_ = v___y_878_;
v___y_804_ = v___y_879_;
v_a_805_ = v___x_936_;
goto v___jp_801_;
}
else
{
lean_object* v___x_938_; size_t v___x_939_; size_t v___x_940_; lean_object* v___x_941_; 
v___x_938_ = lean_box(0);
v___x_939_ = ((size_t)0ULL);
v___x_940_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_941_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_935_, v___x_939_, v___x_940_, v___x_938_, v___y_289_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_dec_ref_known(v___x_941_, 1);
v___y_802_ = v___y_880_;
v___y_803_ = v___y_878_;
v___y_804_ = v___y_879_;
v_a_805_ = v___x_936_;
goto v___jp_801_;
}
else
{
lean_dec(v___x_936_);
lean_dec_ref(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___x_941_;
}
}
}
}
v___jp_942_:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; uint8_t v___x_949_; uint8_t v___x_950_; 
v___x_946_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_947_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__8));
lean_inc_ref(v_repo_286_);
v___x_948_ = l_System_FilePath_join(v_repo_286_, v___x_947_);
v___x_949_ = l_System_FilePath_pathExists(v___x_948_);
lean_dec_ref(v___x_948_);
v___x_950_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_950_ == 0)
{
v___y_878_ = v___y_943_;
v___y_879_ = v_a_945_;
v___y_880_ = v___y_944_;
v_a_881_ = v___x_949_;
goto v___jp_877_;
}
else
{
lean_object* v___x_951_; size_t v___x_952_; size_t v___x_953_; lean_object* v___x_954_; 
v___x_951_ = lean_box(0);
v___x_952_ = ((size_t)0ULL);
v___x_953_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_954_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_946_, v___x_952_, v___x_953_, v___x_951_, v___y_289_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_dec_ref_known(v___x_954_, 1);
v___y_878_ = v___y_943_;
v___y_879_ = v_a_945_;
v___y_880_ = v___y_944_;
v_a_881_ = v___x_949_;
goto v___jp_877_;
}
else
{
lean_dec_ref(v_a_945_);
lean_dec_ref(v___y_944_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___x_954_;
}
}
}
v___jp_955_:
{
if (lean_obj_tag(v_a_958_) == 1)
{
lean_object* v_val_959_; 
lean_dec_ref(v_url_287_);
v_val_959_ = lean_ctor_get(v_a_958_, 0);
lean_inc(v_val_959_);
lean_dec_ref_known(v_a_958_, 1);
v___y_943_ = v___y_957_;
v___y_944_ = v___y_956_;
v_a_945_ = v_val_959_;
goto v___jp_942_;
}
else
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; uint8_t v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
lean_dec(v_a_958_);
lean_dec_ref(v___y_956_);
lean_dec_ref(v_repo_286_);
v___x_960_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__0));
v___x_961_ = lean_string_append(v_name_285_, v___x_960_);
v___x_962_ = lean_string_append(v___x_961_, v_url_287_);
lean_dec_ref(v_url_287_);
v___x_963_ = 3;
v___x_964_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_964_, 0, v___x_962_);
lean_ctor_set_uint8(v___x_964_, sizeof(void*)*1, v___x_963_);
lean_inc_ref(v___y_289_);
v___x_965_ = lean_apply_2(v___y_289_, v___x_964_, lean_box(0));
v___x_966_ = lean_box(0);
v___x_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
return v___x_967_;
}
}
v___jp_968_:
{
lean_object* v___x_974_; uint8_t v___x_975_; 
v___x_974_ = lean_array_get_size(v___y_972_);
v___x_975_ = lean_nat_dec_lt(v___y_971_, v___x_974_);
if (v___x_975_ == 0)
{
v___y_956_ = v___y_970_;
v___y_957_ = v___y_969_;
v_a_958_ = v_val_973_;
goto v___jp_955_;
}
else
{
lean_object* v___x_976_; size_t v___x_977_; size_t v___x_978_; lean_object* v___x_979_; 
v___x_976_ = lean_box(0);
v___x_977_ = ((size_t)0ULL);
v___x_978_ = lean_usize_of_nat(v___x_974_);
v___x_979_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_972_, v___x_977_, v___x_978_, v___x_976_, v___y_289_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_dec_ref_known(v___x_979_, 1);
v___y_956_ = v___y_970_;
v___y_957_ = v___y_969_;
v_a_958_ = v_val_973_;
goto v___jp_955_;
}
else
{
lean_dec(v_val_973_);
lean_dec_ref(v___y_970_);
lean_dec_ref(v_url_287_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___x_979_;
}
}
}
v___jp_980_:
{
if (v_a_983_ == 0)
{
v___y_943_ = v___y_982_;
v___y_944_ = v___y_981_;
v_a_945_ = v_url_287_;
goto v___jp_942_;
}
else
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; uint8_t v___x_988_; 
v___x_984_ = lean_unsigned_to_nat(0u);
v___x_985_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_url_287_);
v___x_986_ = l_Lake_resolvePath(v_url_287_);
v___x_987_ = lean_string_utf8_byte_size(v___x_986_);
v___x_988_ = lean_nat_dec_eq(v___x_987_, v___x_984_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; 
v___x_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_989_, 0, v___x_986_);
v___y_969_ = v___y_982_;
v___y_970_ = v___y_981_;
v___y_971_ = v___x_984_;
v___y_972_ = v___x_985_;
v_val_973_ = v___x_989_;
goto v___jp_968_;
}
else
{
lean_object* v___x_990_; 
lean_dec_ref(v___x_986_);
v___x_990_ = lean_box(0);
v___y_969_ = v___y_982_;
v___y_970_ = v___y_981_;
v___y_971_ = v___x_984_;
v___y_972_ = v___x_985_;
v_val_973_ = v___x_990_;
goto v___jp_968_;
}
}
}
v___jp_991_:
{
lean_object* v_remote_993_; lean_object* v___x_994_; uint8_t v___x_995_; uint8_t v___x_996_; 
v_remote_993_ = l_Lake_Git_defaultRemote;
v___x_994_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_995_ = l_System_FilePath_pathExists(v_url_287_);
v___x_996_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_996_ == 0)
{
v___y_981_ = v___y_992_;
v___y_982_ = v_remote_993_;
v_a_983_ = v___x_995_;
goto v___jp_980_;
}
else
{
lean_object* v___x_997_; size_t v___x_998_; size_t v___x_999_; lean_object* v___x_1000_; 
v___x_997_ = lean_box(0);
v___x_998_ = ((size_t)0ULL);
v___x_999_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_1000_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_994_, v___x_998_, v___x_999_, v___x_997_, v___y_289_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_dec_ref_known(v___x_1000_, 1);
v___y_981_ = v___y_992_;
v___y_982_ = v_remote_993_;
v_a_983_ = v___x_995_;
goto v___jp_980_;
}
else
{
lean_dec_ref(v___y_992_);
lean_dec_ref(v_url_287_);
lean_dec_ref(v_repo_286_);
lean_dec_ref(v_name_285_);
return v___x_1000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___boxed(lean_object* v_name_1003_, lean_object* v_repo_1004_, lean_object* v_url_1005_, lean_object* v_rev_x3f_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo(v_name_1003_, v_repo_1004_, v_url_1005_, v_rev_x3f_1006_, v___y_1007_);
lean_dec_ref(v___y_1007_);
return v_res_1009_;
}
}
static lean_object* _init_l_Lake_instInhabitedMaterializedDep_default___closed__4(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1016_ = l_Lake_instInhabitedPackageEntry_default;
v___x_1017_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__3));
v___x_1018_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
v___x_1019_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
lean_ctor_set(v___x_1019_, 2, v___x_1018_);
lean_ctor_set(v___x_1019_, 3, v___x_1017_);
lean_ctor_set(v___x_1019_, 4, v___x_1016_);
return v___x_1019_;
}
}
static lean_object* _init_l_Lake_instInhabitedMaterializedDep_default(void){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = lean_obj_once(&l_Lake_instInhabitedMaterializedDep_default___closed__4, &l_Lake_instInhabitedMaterializedDep_default___closed__4_once, _init_l_Lake_instInhabitedMaterializedDep_default___closed__4);
return v___x_1020_;
}
}
static lean_object* _init_l_Lake_instInhabitedMaterializedDep(void){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lake_instInhabitedMaterializedDep_default;
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_name(lean_object* v_self_1022_){
_start:
{
lean_object* v_manifestEntry_1023_; lean_object* v_name_1024_; 
v_manifestEntry_1023_ = lean_ctor_get(v_self_1022_, 4);
v_name_1024_ = lean_ctor_get(v_manifestEntry_1023_, 0);
lean_inc(v_name_1024_);
return v_name_1024_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_name___boxed(lean_object* v_self_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lake_MaterializedDep_name(v_self_1025_);
lean_dec_ref(v_self_1025_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_prettyName(lean_object* v_self_1027_){
_start:
{
lean_object* v_manifestEntry_1028_; lean_object* v_name_1029_; uint8_t v___x_1030_; lean_object* v___x_1031_; 
v_manifestEntry_1028_ = lean_ctor_get(v_self_1027_, 4);
lean_inc_ref(v_manifestEntry_1028_);
lean_dec_ref(v_self_1027_);
v_name_1029_ = lean_ctor_get(v_manifestEntry_1028_, 0);
lean_inc(v_name_1029_);
lean_dec_ref(v_manifestEntry_1028_);
v___x_1030_ = 0;
v___x_1031_ = l_Lean_Name_toString(v_name_1029_, v___x_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_scope(lean_object* v_self_1032_){
_start:
{
lean_object* v_manifestEntry_1033_; lean_object* v_scope_1034_; 
v_manifestEntry_1033_ = lean_ctor_get(v_self_1032_, 4);
v_scope_1034_ = lean_ctor_get(v_manifestEntry_1033_, 1);
lean_inc_ref(v_scope_1034_);
return v_scope_1034_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_scope___boxed(lean_object* v_self_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lake_MaterializedDep_scope(v_self_1035_);
lean_dec_ref(v_self_1035_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile_x3f(lean_object* v_self_1037_){
_start:
{
lean_object* v_manifestEntry_1038_; lean_object* v_manifestFile_x3f_1039_; 
v_manifestEntry_1038_ = lean_ctor_get(v_self_1037_, 4);
v_manifestFile_x3f_1039_ = lean_ctor_get(v_manifestEntry_1038_, 3);
lean_inc(v_manifestFile_x3f_1039_);
return v_manifestFile_x3f_1039_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile_x3f___boxed(lean_object* v_self_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lake_MaterializedDep_relManifestFile_x3f(v_self_1040_);
lean_dec_ref(v_self_1040_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile(lean_object* v_self_1042_){
_start:
{
lean_object* v_manifestEntry_1043_; lean_object* v_manifestFile_x3f_1044_; 
v_manifestEntry_1043_ = lean_ctor_get(v_self_1042_, 4);
v_manifestFile_x3f_1044_ = lean_ctor_get(v_manifestEntry_1043_, 3);
if (lean_obj_tag(v_manifestFile_x3f_1044_) == 0)
{
lean_object* v___x_1045_; 
v___x_1045_ = l_Lake_defaultManifestFile;
return v___x_1045_;
}
else
{
lean_object* v_val_1046_; 
v_val_1046_ = lean_ctor_get(v_manifestFile_x3f_1044_, 0);
lean_inc(v_val_1046_);
return v_val_1046_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile___boxed(lean_object* v_self_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lake_MaterializedDep_relManifestFile(v_self_1047_);
lean_dec_ref(v_self_1047_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_manifestFile(lean_object* v_self_1049_){
_start:
{
lean_object* v_manifestEntry_1050_; lean_object* v_manifestFile_x3f_1051_; 
v_manifestEntry_1050_ = lean_ctor_get(v_self_1049_, 4);
v_manifestFile_x3f_1051_ = lean_ctor_get(v_manifestEntry_1050_, 3);
if (lean_obj_tag(v_manifestFile_x3f_1051_) == 0)
{
lean_object* v_pkgDir_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v_pkgDir_1052_ = lean_ctor_get(v_self_1049_, 0);
lean_inc_ref(v_pkgDir_1052_);
lean_dec_ref(v_self_1049_);
v___x_1053_ = l_Lake_defaultManifestFile;
v___x_1054_ = l_Lake_joinRelative(v_pkgDir_1052_, v___x_1053_);
return v___x_1054_;
}
else
{
lean_object* v_pkgDir_1055_; lean_object* v_val_1056_; lean_object* v___x_1057_; 
lean_inc_ref(v_manifestFile_x3f_1051_);
v_pkgDir_1055_ = lean_ctor_get(v_self_1049_, 0);
lean_inc_ref(v_pkgDir_1055_);
lean_dec_ref(v_self_1049_);
v_val_1056_ = lean_ctor_get(v_manifestFile_x3f_1051_, 0);
lean_inc(v_val_1056_);
lean_dec_ref_known(v_manifestFile_x3f_1051_, 1);
v___x_1057_ = l_Lake_joinRelative(v_pkgDir_1055_, v_val_1056_);
return v___x_1057_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relConfigFile(lean_object* v_self_1058_){
_start:
{
lean_object* v_manifestEntry_1059_; lean_object* v_configFile_1060_; 
v_manifestEntry_1059_ = lean_ctor_get(v_self_1058_, 4);
v_configFile_1060_ = lean_ctor_get(v_manifestEntry_1059_, 2);
lean_inc_ref(v_configFile_1060_);
return v_configFile_1060_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relConfigFile___boxed(lean_object* v_self_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lake_MaterializedDep_relConfigFile(v_self_1061_);
lean_dec_ref(v_self_1061_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_configFile(lean_object* v_self_1063_){
_start:
{
lean_object* v_manifestEntry_1064_; lean_object* v_pkgDir_1065_; lean_object* v_configFile_1066_; lean_object* v___x_1067_; 
v_manifestEntry_1064_ = lean_ctor_get(v_self_1063_, 4);
lean_inc_ref(v_manifestEntry_1064_);
v_pkgDir_1065_ = lean_ctor_get(v_self_1063_, 0);
lean_inc_ref(v_pkgDir_1065_);
lean_dec_ref(v_self_1063_);
v_configFile_1066_ = lean_ctor_get(v_manifestEntry_1064_, 2);
lean_inc_ref(v_configFile_1066_);
lean_dec_ref(v_manifestEntry_1064_);
v___x_1067_ = l_Lake_joinRelative(v_pkgDir_1065_, v_configFile_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT uint8_t l_Lake_MaterializedDep_fixedToolchain(lean_object* v_self_1068_){
_start:
{
lean_object* v_manifest_x3f_1069_; 
v_manifest_x3f_1069_ = lean_ctor_get(v_self_1068_, 3);
if (lean_obj_tag(v_manifest_x3f_1069_) == 1)
{
lean_object* v_a_1070_; uint8_t v_fixedToolchain_1071_; 
v_a_1070_ = lean_ctor_get(v_manifest_x3f_1069_, 0);
v_fixedToolchain_1071_ = lean_ctor_get_uint8(v_a_1070_, sizeof(void*)*4);
return v_fixedToolchain_1071_;
}
else
{
uint8_t v___x_1072_; 
v___x_1072_ = 0;
return v___x_1072_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_fixedToolchain___boxed(lean_object* v_self_1073_){
_start:
{
uint8_t v_res_1074_; lean_object* v_r_1075_; 
v_res_1074_ = l_Lake_MaterializedDep_fixedToolchain(v_self_1073_);
lean_dec_ref(v_self_1073_);
v_r_1075_ = lean_box(v_res_1074_);
return v_r_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed(lean_object* v_dep_1084_){
_start:
{
lean_object* v_name_1085_; lean_object* v_scope_1086_; lean_object* v_version_1087_; lean_object* v_fst_1089_; lean_object* v_snd_1090_; 
v_name_1085_ = lean_ctor_get(v_dep_1084_, 0);
lean_inc(v_name_1085_);
v_scope_1086_ = lean_ctor_get(v_dep_1084_, 1);
lean_inc_ref(v_scope_1086_);
v_version_1087_ = lean_ctor_get(v_dep_1084_, 2);
lean_inc(v_version_1087_);
lean_dec_ref(v_dep_1084_);
switch(lean_obj_tag(v_version_1087_))
{
case 0:
{
lean_object* v___x_1113_; 
v___x_1113_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
v_fst_1089_ = v___x_1113_;
v_snd_1090_ = v___x_1113_;
goto v___jp_1088_;
}
case 1:
{
lean_object* v_rev_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1129_; 
v_rev_1114_ = lean_ctor_get(v_version_1087_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v_version_1087_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1116_ = v_version_1087_;
v_isShared_1117_ = v_isSharedCheck_1129_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_rev_1114_);
lean_dec(v_version_1087_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1129_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1121_; 
v___x_1118_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__5));
v___x_1119_ = l_String_quote(v_rev_1114_);
if (v_isShared_1117_ == 0)
{
lean_ctor_set_tag(v___x_1116_, 3);
lean_ctor_set(v___x_1116_, 0, v___x_1119_);
v___x_1121_ = v___x_1116_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v___x_1119_);
v___x_1121_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1122_ = l_Std_Format_defWidth;
v___x_1123_ = lean_unsigned_to_nat(0u);
v___x_1124_ = l_Std_Format_pretty(v___x_1121_, v___x_1122_, v___x_1123_, v___x_1123_);
v___x_1125_ = lean_string_append(v___x_1118_, v___x_1124_);
v___x_1126_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__6));
v___x_1127_ = lean_string_append(v___x_1126_, v___x_1124_);
lean_dec_ref(v___x_1124_);
v_fst_1089_ = v___x_1125_;
v_snd_1090_ = v___x_1127_;
goto v___jp_1088_;
}
}
}
default: 
{
lean_object* v_ver_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1146_; 
v_ver_1130_ = lean_ctor_get(v_version_1087_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v_version_1087_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1132_ = v_version_1087_;
v_isShared_1133_ = v_isSharedCheck_1146_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_ver_1130_);
lean_dec(v_version_1087_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1146_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v_toString_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1138_; 
v_toString_1134_ = lean_ctor_get(v_ver_1130_, 0);
lean_inc_ref(v_toString_1134_);
lean_dec_ref(v_ver_1130_);
v___x_1135_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__5));
v___x_1136_ = l_String_quote(v_toString_1134_);
if (v_isShared_1133_ == 0)
{
lean_ctor_set_tag(v___x_1132_, 3);
lean_ctor_set(v___x_1132_, 0, v___x_1136_);
v___x_1138_ = v___x_1132_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1139_ = l_Std_Format_defWidth;
v___x_1140_ = lean_unsigned_to_nat(0u);
v___x_1141_ = l_Std_Format_pretty(v___x_1138_, v___x_1139_, v___x_1140_, v___x_1140_);
v___x_1142_ = lean_string_append(v___x_1135_, v___x_1141_);
v___x_1143_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__7));
v___x_1144_ = lean_string_append(v___x_1143_, v___x_1141_);
lean_dec_ref(v___x_1141_);
v_fst_1089_ = v___x_1142_;
v_snd_1090_ = v___x_1144_;
goto v___jp_1088_;
}
}
}
}
v___jp_1088_:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; uint8_t v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1091_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0));
lean_inc_ref(v_scope_1086_);
v___x_1092_ = lean_string_append(v_scope_1086_, v___x_1091_);
v___x_1093_ = 0;
v___x_1094_ = l_Lean_Name_toString(v_name_1085_, v___x_1093_);
v___x_1095_ = lean_string_append(v___x_1092_, v___x_1094_);
v___x_1096_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__1));
v___x_1097_ = lean_string_append(v___x_1095_, v___x_1096_);
v___x_1098_ = lean_string_append(v___x_1097_, v_scope_1086_);
v___x_1099_ = lean_string_append(v___x_1098_, v___x_1091_);
v___x_1100_ = lean_string_append(v___x_1099_, v___x_1094_);
v___x_1101_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__2));
v___x_1102_ = lean_string_append(v___x_1100_, v___x_1101_);
v___x_1103_ = lean_string_append(v___x_1102_, v_fst_1089_);
lean_dec_ref(v_fst_1089_);
v___x_1104_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__3));
v___x_1105_ = lean_string_append(v___x_1103_, v___x_1104_);
v___x_1106_ = lean_string_append(v___x_1105_, v_scope_1086_);
lean_dec_ref(v_scope_1086_);
v___x_1107_ = lean_string_append(v___x_1106_, v___x_1091_);
v___x_1108_ = lean_string_append(v___x_1107_, v___x_1094_);
lean_dec_ref(v___x_1094_);
v___x_1109_ = lean_string_append(v___x_1108_, v___x_1101_);
v___x_1110_ = lean_string_append(v___x_1109_, v_snd_1090_);
lean_dec_ref(v_snd_1090_);
v___x_1111_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__4));
v___x_1112_ = lean_string_append(v___x_1110_, v___x_1111_);
return v___x_1112_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep(lean_object* v_dep_1148_, uint8_t v_inherited_1149_, lean_object* v_wsDir_1150_, lean_object* v_name_1151_, lean_object* v_relPkgDir_1152_, lean_object* v_remoteUrl_1153_, lean_object* v_src_1154_, lean_object* v___y_1155_){
_start:
{
lean_object* v___y_1158_; lean_object* v_a_1159_; lean_object* v___f_1176_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; lean_object* v_val_1182_; lean_object* v_pkgDir_1198_; lean_object* v_a_1200_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v_val_1236_; lean_object* v___x_1251_; lean_object* v___x_1252_; uint8_t v___x_1253_; 
v___f_1176_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1));
lean_inc_ref(v_relPkgDir_1152_);
v_pkgDir_1198_ = l_Lake_joinRelative(v_wsDir_1150_, v_relPkgDir_1152_);
v___x_1232_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3);
v___x_1233_ = lean_unsigned_to_nat(0u);
v___x_1234_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_pkgDir_1198_);
v___x_1251_ = l_Lake_resolvePath(v_pkgDir_1198_);
v___x_1252_ = lean_string_utf8_byte_size(v___x_1251_);
v___x_1253_ = lean_nat_dec_eq(v___x_1252_, v___x_1233_);
if (v___x_1253_ == 0)
{
lean_object* v___x_1254_; 
v___x_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1251_);
v_val_1236_ = v___x_1254_;
goto v___jp_1235_;
}
else
{
lean_object* v___x_1255_; 
lean_dec_ref(v___x_1251_);
v___x_1255_ = lean_box(0);
v_val_1236_ = v___x_1255_;
goto v___jp_1235_;
}
v___jp_1157_:
{
lean_object* v_name_1160_; lean_object* v_scope_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1172_; 
v_name_1160_ = lean_ctor_get(v_dep_1148_, 0);
v_scope_1161_ = lean_ctor_get(v_dep_1148_, 1);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_dep_1148_);
if (v_isSharedCheck_1172_ == 0)
{
lean_object* v_unused_1173_; lean_object* v_unused_1174_; lean_object* v_unused_1175_; 
v_unused_1173_ = lean_ctor_get(v_dep_1148_, 4);
lean_dec(v_unused_1173_);
v_unused_1174_ = lean_ctor_get(v_dep_1148_, 3);
lean_dec(v_unused_1174_);
v_unused_1175_ = lean_ctor_get(v_dep_1148_, 2);
lean_dec(v_unused_1175_);
v___x_1163_ = v_dep_1148_;
v_isShared_1164_ = v_isSharedCheck_1172_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_scope_1161_);
lean_inc(v_name_1160_);
lean_dec(v_dep_1148_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1172_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1165_ = l_Lake_defaultConfigFile;
v___x_1166_ = lean_box(0);
v___x_1167_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1167_, 0, v_name_1160_);
lean_ctor_set(v___x_1167_, 1, v_scope_1161_);
lean_ctor_set(v___x_1167_, 2, v___x_1165_);
lean_ctor_set(v___x_1167_, 3, v___x_1166_);
lean_ctor_set(v___x_1167_, 4, v_src_1154_);
lean_ctor_set_uint8(v___x_1167_, sizeof(void*)*5, v_inherited_1149_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 4, v___x_1167_);
lean_ctor_set(v___x_1163_, 3, v_a_1159_);
lean_ctor_set(v___x_1163_, 2, v_remoteUrl_1153_);
lean_ctor_set(v___x_1163_, 1, v_relPkgDir_1152_);
lean_ctor_set(v___x_1163_, 0, v___y_1158_);
v___x_1169_ = v___x_1163_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___y_1158_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v_relPkgDir_1152_);
lean_ctor_set(v_reuseFailAlloc_1171_, 2, v_remoteUrl_1153_);
lean_ctor_set(v_reuseFailAlloc_1171_, 3, v_a_1159_);
lean_ctor_set(v_reuseFailAlloc_1171_, 4, v___x_1167_);
v___x_1169_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1169_);
return v___x_1170_;
}
}
}
v___jp_1177_:
{
lean_object* v___x_1183_; uint8_t v___x_1184_; 
v___x_1183_ = lean_array_get_size(v___y_1178_);
v___x_1184_ = lean_nat_dec_lt(v___y_1181_, v___x_1183_);
if (v___x_1184_ == 0)
{
v___y_1158_ = v___y_1179_;
v_a_1159_ = v_val_1182_;
goto v___jp_1157_;
}
else
{
lean_object* v___x_1185_; size_t v___x_1186_; size_t v___x_1187_; lean_object* v___x_1823__overap_1188_; lean_object* v___x_1189_; 
v___x_1185_ = lean_box(0);
v___x_1186_ = ((size_t)0ULL);
v___x_1187_ = lean_usize_of_nat(v___x_1183_);
lean_inc_ref(v___y_1178_);
lean_inc_ref(v___y_1180_);
v___x_1823__overap_1188_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___y_1180_, v___f_1176_, v___y_1178_, v___x_1186_, v___x_1187_, v___x_1185_);
lean_inc_ref(v___y_1155_);
v___x_1189_ = lean_apply_2(v___x_1823__overap_1188_, v___y_1155_, lean_box(0));
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_dec_ref_known(v___x_1189_, 1);
v___y_1158_ = v___y_1179_;
v_a_1159_ = v_val_1182_;
goto v___jp_1157_;
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1197_; 
lean_dec_ref(v_val_1182_);
lean_dec_ref(v___y_1179_);
lean_dec_ref(v_src_1154_);
lean_dec_ref(v_remoteUrl_1153_);
lean_dec_ref(v_relPkgDir_1152_);
lean_dec_ref(v_dep_1148_);
v_a_1190_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1192_ = v___x_1189_;
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1189_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_a_1190_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
}
v___jp_1199_:
{
if (lean_obj_tag(v_a_1200_) == 1)
{
lean_object* v_val_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; 
lean_dec_ref(v_pkgDir_1198_);
lean_dec_ref(v_name_1151_);
v_val_1201_ = lean_ctor_get(v_a_1200_, 0);
lean_inc_n(v_val_1201_, 2);
lean_dec_ref_known(v_a_1200_, 1);
v___x_1202_ = l_Lake_defaultManifestFile;
v___x_1203_ = l_Lake_joinRelative(v_val_1201_, v___x_1202_);
v___x_1204_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3);
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_1207_ = l_Lake_Manifest_load(v___x_1203_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1215_; 
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1210_ = v___x_1207_;
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_dec(v___x_1207_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
if (v_isShared_1211_ == 0)
{
lean_ctor_set_tag(v___x_1210_, 1);
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1208_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
v___y_1178_ = v___x_1206_;
v___y_1179_ = v_val_1201_;
v___y_1180_ = v___x_1204_;
v___y_1181_ = v___x_1205_;
v_val_1182_ = v___x_1213_;
goto v___jp_1177_;
}
}
}
else
{
lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1223_; 
v_a_1216_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1218_ = v___x_1207_;
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_dec(v___x_1207_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1219_ == 0)
{
lean_ctor_set_tag(v___x_1218_, 0);
v___x_1221_ = v___x_1218_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1216_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
v___y_1178_ = v___x_1206_;
v___y_1179_ = v_val_1201_;
v___y_1180_ = v___x_1204_;
v___y_1181_ = v___x_1205_;
v_val_1182_ = v___x_1221_;
goto v___jp_1177_;
}
}
}
}
else
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
lean_dec(v_a_1200_);
lean_dec_ref(v_src_1154_);
lean_dec_ref(v_remoteUrl_1153_);
lean_dec_ref(v_relPkgDir_1152_);
lean_dec_ref(v_dep_1148_);
v___x_1224_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_1225_ = lean_string_append(v_name_1151_, v___x_1224_);
v___x_1226_ = lean_string_append(v___x_1225_, v_pkgDir_1198_);
lean_dec_ref(v_pkgDir_1198_);
v___x_1227_ = 3;
v___x_1228_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1228_, 0, v___x_1226_);
lean_ctor_set_uint8(v___x_1228_, sizeof(void*)*1, v___x_1227_);
lean_inc_ref(v___y_1155_);
v___x_1229_ = lean_apply_2(v___y_1155_, v___x_1228_, lean_box(0));
v___x_1230_ = lean_box(0);
v___x_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1230_);
return v___x_1231_;
}
}
v___jp_1235_:
{
uint8_t v___x_1237_; 
v___x_1237_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_1237_ == 0)
{
v_a_1200_ = v_val_1236_;
goto v___jp_1199_;
}
else
{
lean_object* v___x_1238_; size_t v___x_1239_; size_t v___x_1240_; lean_object* v___x_1869__overap_1241_; lean_object* v___x_1242_; 
v___x_1238_ = lean_box(0);
v___x_1239_ = ((size_t)0ULL);
v___x_1240_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_1869__overap_1241_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1232_, v___f_1176_, v___x_1234_, v___x_1239_, v___x_1240_, v___x_1238_);
lean_inc_ref(v___y_1155_);
v___x_1242_ = lean_apply_2(v___x_1869__overap_1241_, v___y_1155_, lean_box(0));
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_dec_ref_known(v___x_1242_, 1);
v_a_1200_ = v_val_1236_;
goto v___jp_1199_;
}
else
{
lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
lean_dec(v_val_1236_);
lean_dec_ref(v_pkgDir_1198_);
lean_dec_ref(v_src_1154_);
lean_dec_ref(v_remoteUrl_1153_);
lean_dec_ref(v_relPkgDir_1152_);
lean_dec_ref(v_name_1151_);
lean_dec_ref(v_dep_1148_);
v_a_1243_ = lean_ctor_get(v___x_1242_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1245_ = v___x_1242_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v___x_1242_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_a_1243_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___boxed(lean_object* v_dep_1256_, lean_object* v_inherited_1257_, lean_object* v_wsDir_1258_, lean_object* v_name_1259_, lean_object* v_relPkgDir_1260_, lean_object* v_remoteUrl_1261_, lean_object* v_src_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
uint8_t v_inherited_boxed_1265_; lean_object* v_res_1266_; 
v_inherited_boxed_1265_ = lean_unbox(v_inherited_1257_);
v_res_1266_ = l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep(v_dep_1256_, v_inherited_boxed_1265_, v_wsDir_1258_, v_name_1259_, v_relPkgDir_1260_, v_remoteUrl_1261_, v_src_1262_, v___y_1263_);
lean_dec_ref(v___y_1263_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit(lean_object* v_dep_1267_, uint8_t v_inherited_1268_, lean_object* v_lakeEnv_1269_, lean_object* v_wsDir_1270_, lean_object* v_name_1271_, lean_object* v_relPkgDir_1272_, lean_object* v_gitUrl_1273_, lean_object* v_remoteUrl_1274_, lean_object* v_inputRev_x3f_1275_, lean_object* v_subDir_x3f_1276_, lean_object* v___y_1277_){
_start:
{
lean_object* v_pkgUrlMap_1279_; lean_object* v_name_1280_; lean_object* v_scope_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1457_; 
v_pkgUrlMap_1279_ = lean_ctor_get(v_lakeEnv_1269_, 5);
v_name_1280_ = lean_ctor_get(v_dep_1267_, 0);
v_scope_1281_ = lean_ctor_get(v_dep_1267_, 1);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_dep_1267_);
if (v_isSharedCheck_1457_ == 0)
{
lean_object* v_unused_1458_; lean_object* v_unused_1459_; lean_object* v_unused_1460_; 
v_unused_1458_ = lean_ctor_get(v_dep_1267_, 4);
lean_dec(v_unused_1458_);
v_unused_1459_ = lean_ctor_get(v_dep_1267_, 3);
lean_dec(v_unused_1459_);
v_unused_1460_ = lean_ctor_get(v_dep_1267_, 2);
lean_dec(v_unused_1460_);
v___x_1283_ = v_dep_1267_;
v_isShared_1284_ = v_isSharedCheck_1457_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_scope_1281_);
lean_inc(v_name_1280_);
lean_dec(v_dep_1267_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1457_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v_a_1289_; lean_object* v___y_1298_; lean_object* v___y_1299_; lean_object* v___y_1300_; lean_object* v___y_1301_; lean_object* v___y_1302_; lean_object* v_val_1303_; lean_object* v___y_1319_; lean_object* v___y_1320_; lean_object* v___y_1321_; lean_object* v_a_1322_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v___y_1358_; lean_object* v_val_1359_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1388_; lean_object* v_a_1389_; lean_object* v_gitDir_1392_; lean_object* v___y_1394_; lean_object* v___x_1455_; 
lean_inc_ref(v_relPkgDir_1272_);
lean_inc_ref(v_wsDir_1270_);
v_gitDir_1392_ = l_Lake_joinRelative(v_wsDir_1270_, v_relPkgDir_1272_);
v___x_1455_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_pkgUrlMap_1279_, v_name_1280_);
if (lean_obj_tag(v___x_1455_) == 0)
{
v___y_1394_ = v_gitUrl_1273_;
goto v___jp_1393_;
}
else
{
lean_object* v_val_1456_; 
lean_dec_ref(v_gitUrl_1273_);
v_val_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_val_1456_);
lean_dec_ref_known(v___x_1455_, 1);
v___y_1394_ = v_val_1456_;
goto v___jp_1393_;
}
v___jp_1285_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1294_; 
v___x_1290_ = l_Lake_defaultConfigFile;
v___x_1291_ = lean_box(0);
v___x_1292_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1292_, 0, v_name_1280_);
lean_ctor_set(v___x_1292_, 1, v_scope_1281_);
lean_ctor_set(v___x_1292_, 2, v___x_1290_);
lean_ctor_set(v___x_1292_, 3, v___x_1291_);
lean_ctor_set(v___x_1292_, 4, v___y_1286_);
lean_ctor_set_uint8(v___x_1292_, sizeof(void*)*5, v_inherited_1268_);
if (v_isShared_1284_ == 0)
{
lean_ctor_set(v___x_1283_, 4, v___x_1292_);
lean_ctor_set(v___x_1283_, 3, v_a_1289_);
lean_ctor_set(v___x_1283_, 2, v_remoteUrl_1274_);
lean_ctor_set(v___x_1283_, 1, v___y_1287_);
lean_ctor_set(v___x_1283_, 0, v___y_1288_);
v___x_1294_ = v___x_1283_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___y_1288_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v___y_1287_);
lean_ctor_set(v_reuseFailAlloc_1296_, 2, v_remoteUrl_1274_);
lean_ctor_set(v_reuseFailAlloc_1296_, 3, v_a_1289_);
lean_ctor_set(v_reuseFailAlloc_1296_, 4, v___x_1292_);
v___x_1294_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
lean_object* v___x_1295_; 
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
return v___x_1295_;
}
}
v___jp_1297_:
{
lean_object* v___x_1304_; uint8_t v___x_1305_; 
v___x_1304_ = lean_array_get_size(v___y_1301_);
v___x_1305_ = lean_nat_dec_lt(v___y_1298_, v___x_1304_);
if (v___x_1305_ == 0)
{
v___y_1286_ = v___y_1299_;
v___y_1287_ = v___y_1300_;
v___y_1288_ = v___y_1302_;
v_a_1289_ = v_val_1303_;
goto v___jp_1285_;
}
else
{
lean_object* v___x_1306_; size_t v___x_1307_; size_t v___x_1308_; lean_object* v___x_1309_; 
v___x_1306_ = lean_box(0);
v___x_1307_ = ((size_t)0ULL);
v___x_1308_ = lean_usize_of_nat(v___x_1304_);
v___x_1309_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_1301_, v___x_1307_, v___x_1308_, v___x_1306_, v___y_1277_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_dec_ref_known(v___x_1309_, 1);
v___y_1286_ = v___y_1299_;
v___y_1287_ = v___y_1300_;
v___y_1288_ = v___y_1302_;
v_a_1289_ = v_val_1303_;
goto v___jp_1285_;
}
else
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
lean_dec_ref(v_val_1303_);
lean_dec_ref(v___y_1302_);
lean_dec_ref(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_del_object(v___x_1283_);
lean_dec_ref(v_scope_1281_);
lean_dec(v_name_1280_);
lean_dec_ref(v_remoteUrl_1274_);
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1309_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v___x_1309_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_a_1310_);
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
v___jp_1318_:
{
if (lean_obj_tag(v_a_1322_) == 1)
{
lean_object* v_val_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_dec_ref(v___y_1321_);
lean_dec_ref(v_name_1271_);
v_val_1323_ = lean_ctor_get(v_a_1322_, 0);
lean_inc_n(v_val_1323_, 2);
lean_dec_ref_known(v_a_1322_, 1);
v___x_1324_ = l_Lake_defaultManifestFile;
v___x_1325_ = l_Lake_joinRelative(v_val_1323_, v___x_1324_);
v___x_1326_ = lean_unsigned_to_nat(0u);
v___x_1327_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_1328_ = l_Lake_Manifest_load(v___x_1325_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1331_ = v___x_1328_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___x_1328_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
lean_ctor_set_tag(v___x_1331_, 1);
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1329_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
v___y_1298_ = v___x_1326_;
v___y_1299_ = v___y_1319_;
v___y_1300_ = v___y_1320_;
v___y_1301_ = v___x_1327_;
v___y_1302_ = v_val_1323_;
v_val_1303_ = v___x_1334_;
goto v___jp_1297_;
}
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
v_a_1337_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1339_ = v___x_1328_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1328_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
lean_ctor_set_tag(v___x_1339_, 0);
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_a_1337_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
v___y_1298_ = v___x_1326_;
v___y_1299_ = v___y_1319_;
v___y_1300_ = v___y_1320_;
v___y_1301_ = v___x_1327_;
v___y_1302_ = v_val_1323_;
v_val_1303_ = v___x_1342_;
goto v___jp_1297_;
}
}
}
}
else
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec(v_a_1322_);
lean_dec_ref(v___y_1320_);
lean_dec_ref(v___y_1319_);
lean_del_object(v___x_1283_);
lean_dec_ref(v_scope_1281_);
lean_dec(v_name_1280_);
lean_dec_ref(v_remoteUrl_1274_);
v___x_1345_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_1346_ = lean_string_append(v_name_1271_, v___x_1345_);
v___x_1347_ = lean_string_append(v___x_1346_, v___y_1321_);
lean_dec_ref(v___y_1321_);
v___x_1348_ = 3;
v___x_1349_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set_uint8(v___x_1349_, sizeof(void*)*1, v___x_1348_);
lean_inc_ref(v___y_1277_);
v___x_1350_ = lean_apply_2(v___y_1277_, v___x_1349_, lean_box(0));
v___x_1351_ = lean_box(0);
v___x_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1351_);
return v___x_1352_;
}
}
v___jp_1353_:
{
lean_object* v___x_1360_; uint8_t v___x_1361_; 
v___x_1360_ = lean_array_get_size(v___y_1356_);
v___x_1361_ = lean_nat_dec_lt(v___y_1354_, v___x_1360_);
if (v___x_1361_ == 0)
{
v___y_1319_ = v___y_1355_;
v___y_1320_ = v___y_1357_;
v___y_1321_ = v___y_1358_;
v_a_1322_ = v_val_1359_;
goto v___jp_1318_;
}
else
{
lean_object* v___x_1362_; size_t v___x_1363_; size_t v___x_1364_; lean_object* v___x_1365_; 
v___x_1362_ = lean_box(0);
v___x_1363_ = ((size_t)0ULL);
v___x_1364_ = lean_usize_of_nat(v___x_1360_);
v___x_1365_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_1356_, v___x_1363_, v___x_1364_, v___x_1362_, v___y_1277_);
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_dec_ref_known(v___x_1365_, 1);
v___y_1319_ = v___y_1355_;
v___y_1320_ = v___y_1357_;
v___y_1321_ = v___y_1358_;
v_a_1322_ = v_val_1359_;
goto v___jp_1318_;
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
lean_dec(v_val_1359_);
lean_dec_ref(v___y_1358_);
lean_dec_ref(v___y_1357_);
lean_dec_ref(v___y_1355_);
lean_del_object(v___x_1283_);
lean_dec_ref(v_scope_1281_);
lean_dec(v_name_1280_);
lean_dec_ref(v_remoteUrl_1274_);
lean_dec_ref(v_name_1271_);
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1365_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1365_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v___x_1365_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
}
}
v___jp_1374_:
{
lean_object* v___x_1378_; lean_object* v_pkgDir_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; uint8_t v___x_1384_; 
v___x_1378_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1378_, 0, v___y_1376_);
lean_ctor_set(v___x_1378_, 1, v___y_1375_);
lean_ctor_set(v___x_1378_, 2, v_inputRev_x3f_1275_);
lean_ctor_set(v___x_1378_, 3, v_subDir_x3f_1276_);
lean_inc_ref(v___y_1377_);
v_pkgDir_1379_ = l_Lake_joinRelative(v_wsDir_1270_, v___y_1377_);
v___x_1380_ = lean_unsigned_to_nat(0u);
v___x_1381_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_pkgDir_1379_);
v___x_1382_ = l_Lake_resolvePath(v_pkgDir_1379_);
v___x_1383_ = lean_string_utf8_byte_size(v___x_1382_);
v___x_1384_ = lean_nat_dec_eq(v___x_1383_, v___x_1380_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; 
v___x_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1382_);
v___y_1354_ = v___x_1380_;
v___y_1355_ = v___x_1378_;
v___y_1356_ = v___x_1381_;
v___y_1357_ = v___y_1377_;
v___y_1358_ = v_pkgDir_1379_;
v_val_1359_ = v___x_1385_;
goto v___jp_1353_;
}
else
{
lean_object* v___x_1386_; 
lean_dec_ref(v___x_1382_);
v___x_1386_ = lean_box(0);
v___y_1354_ = v___x_1380_;
v___y_1355_ = v___x_1378_;
v___y_1356_ = v___x_1381_;
v___y_1357_ = v___y_1377_;
v___y_1358_ = v_pkgDir_1379_;
v_val_1359_ = v___x_1386_;
goto v___jp_1353_;
}
}
v___jp_1387_:
{
if (lean_obj_tag(v_subDir_x3f_1276_) == 1)
{
lean_object* v_val_1390_; lean_object* v___x_1391_; 
v_val_1390_ = lean_ctor_get(v_subDir_x3f_1276_, 0);
lean_inc(v_val_1390_);
v___x_1391_ = l_Lake_joinRelative(v_relPkgDir_1272_, v_val_1390_);
v___y_1375_ = v_a_1389_;
v___y_1376_ = v___y_1388_;
v___y_1377_ = v___x_1391_;
goto v___jp_1374_;
}
else
{
v___y_1375_ = v_a_1389_;
v___y_1376_ = v___y_1388_;
v___y_1377_ = v_relPkgDir_1272_;
goto v___jp_1374_;
}
}
v___jp_1393_:
{
lean_object* v___x_1395_; 
lean_inc(v_inputRev_x3f_1275_);
lean_inc_ref(v___y_1394_);
lean_inc_ref(v_gitDir_1392_);
lean_inc_ref(v_name_1271_);
v___x_1395_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo(v_name_1271_, v_gitDir_1392_, v___y_1394_, v_inputRev_x3f_1275_, v___y_1277_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1445_; 
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1445_ == 0)
{
lean_object* v_unused_1446_; 
v_unused_1446_ = lean_ctor_get(v___x_1395_, 0);
lean_dec(v_unused_1446_);
v___x_1397_ = v___x_1395_;
v_isShared_1398_ = v_isSharedCheck_1445_;
goto v_resetjp_1396_;
}
else
{
lean_dec(v___x_1395_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1445_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1399_ = lean_unsigned_to_nat(0u);
v___x_1400_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_1401_ = l_Lake_GitRepo_getHeadRevision(v_gitDir_1392_, v___x_1400_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_a_1402_; lean_object* v_a_1403_; lean_object* v___x_1404_; uint8_t v___x_1405_; 
lean_del_object(v___x_1397_);
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_a_1402_);
v_a_1403_ = lean_ctor_get(v___x_1401_, 1);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1401_, 2);
v___x_1404_ = lean_array_get_size(v_a_1403_);
v___x_1405_ = lean_nat_dec_lt(v___x_1399_, v___x_1404_);
if (v___x_1405_ == 0)
{
lean_dec(v_a_1403_);
v___y_1388_ = v___y_1394_;
v_a_1389_ = v_a_1402_;
goto v___jp_1387_;
}
else
{
lean_object* v___x_1406_; size_t v___x_1407_; size_t v___x_1408_; lean_object* v___x_1409_; 
v___x_1406_ = lean_box(0);
v___x_1407_ = ((size_t)0ULL);
v___x_1408_ = lean_usize_of_nat(v___x_1404_);
v___x_1409_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_1403_, v___x_1407_, v___x_1408_, v___x_1406_, v___y_1277_);
lean_dec(v_a_1403_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_dec_ref_known(v___x_1409_, 1);
v___y_1388_ = v___y_1394_;
v_a_1389_ = v_a_1402_;
goto v___jp_1387_;
}
else
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1417_; 
lean_dec(v_a_1402_);
lean_dec_ref(v___y_1394_);
lean_del_object(v___x_1283_);
lean_dec_ref(v_scope_1281_);
lean_dec(v_name_1280_);
lean_dec(v_subDir_x3f_1276_);
lean_dec(v_inputRev_x3f_1275_);
lean_dec_ref(v_remoteUrl_1274_);
lean_dec_ref(v_relPkgDir_1272_);
lean_dec_ref(v_name_1271_);
lean_dec_ref(v_wsDir_1270_);
v_a_1410_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1412_ = v___x_1409_;
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1409_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_a_1410_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
}
}
else
{
lean_object* v_a_1418_; lean_object* v___x_1419_; uint8_t v___x_1420_; 
lean_dec_ref(v___y_1394_);
lean_del_object(v___x_1283_);
lean_dec_ref(v_scope_1281_);
lean_dec(v_name_1280_);
lean_dec(v_subDir_x3f_1276_);
lean_dec(v_inputRev_x3f_1275_);
lean_dec_ref(v_remoteUrl_1274_);
lean_dec_ref(v_relPkgDir_1272_);
lean_dec_ref(v_name_1271_);
lean_dec_ref(v_wsDir_1270_);
v_a_1418_ = lean_ctor_get(v___x_1401_, 1);
lean_inc(v_a_1418_);
lean_dec_ref_known(v___x_1401_, 2);
v___x_1419_ = lean_array_get_size(v_a_1418_);
v___x_1420_ = lean_nat_dec_lt(v___x_1399_, v___x_1419_);
if (v___x_1420_ == 0)
{
lean_object* v___x_1421_; lean_object* v___x_1423_; 
lean_dec(v_a_1418_);
v___x_1421_ = lean_box(0);
if (v_isShared_1398_ == 0)
{
lean_ctor_set_tag(v___x_1397_, 1);
lean_ctor_set(v___x_1397_, 0, v___x_1421_);
v___x_1423_ = v___x_1397_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1421_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
else
{
lean_object* v___x_1425_; size_t v___x_1426_; size_t v___x_1427_; lean_object* v___x_1428_; 
lean_del_object(v___x_1397_);
v___x_1425_ = lean_box(0);
v___x_1426_ = ((size_t)0ULL);
v___x_1427_ = lean_usize_of_nat(v___x_1419_);
v___x_1428_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_1418_, v___x_1426_, v___x_1427_, v___x_1425_, v___y_1277_);
lean_dec(v_a_1418_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1435_ == 0)
{
lean_object* v_unused_1436_; 
v_unused_1436_ = lean_ctor_get(v___x_1428_, 0);
lean_dec(v_unused_1436_);
v___x_1430_ = v___x_1428_;
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
else
{
lean_dec(v___x_1428_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v___x_1433_; 
if (v_isShared_1431_ == 0)
{
lean_ctor_set_tag(v___x_1430_, 1);
lean_ctor_set(v___x_1430_, 0, v___x_1425_);
v___x_1433_ = v___x_1430_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1425_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
else
{
lean_object* v_a_1437_; lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1444_; 
v_a_1437_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1439_ = v___x_1428_;
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
else
{
lean_inc(v_a_1437_);
lean_dec(v___x_1428_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1444_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
lean_object* v___x_1442_; 
if (v_isShared_1440_ == 0)
{
v___x_1442_ = v___x_1439_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v_a_1437_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
lean_dec_ref(v___y_1394_);
lean_dec_ref(v_gitDir_1392_);
lean_del_object(v___x_1283_);
lean_dec_ref(v_scope_1281_);
lean_dec(v_name_1280_);
lean_dec(v_subDir_x3f_1276_);
lean_dec(v_inputRev_x3f_1275_);
lean_dec_ref(v_remoteUrl_1274_);
lean_dec_ref(v_relPkgDir_1272_);
lean_dec_ref(v_name_1271_);
lean_dec_ref(v_wsDir_1270_);
v_a_1447_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1395_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1395_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit___boxed(lean_object* v_dep_1461_, lean_object* v_inherited_1462_, lean_object* v_lakeEnv_1463_, lean_object* v_wsDir_1464_, lean_object* v_name_1465_, lean_object* v_relPkgDir_1466_, lean_object* v_gitUrl_1467_, lean_object* v_remoteUrl_1468_, lean_object* v_inputRev_x3f_1469_, lean_object* v_subDir_x3f_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_){
_start:
{
uint8_t v_inherited_boxed_1473_; lean_object* v_res_1474_; 
v_inherited_boxed_1473_ = lean_unbox(v_inherited_1462_);
v_res_1474_ = l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit(v_dep_1461_, v_inherited_boxed_1473_, v_lakeEnv_1463_, v_wsDir_1464_, v_name_1465_, v_relPkgDir_1466_, v_gitUrl_1467_, v_remoteUrl_1468_, v_inputRev_x3f_1469_, v_subDir_x3f_1470_, v___y_1471_);
lean_dec_ref(v___y_1471_);
lean_dec_ref(v_lakeEnv_1463_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0(lean_object* v_ver_1478_, lean_object* v_as_1479_, size_t v_sz_1480_, size_t v_i_1481_, lean_object* v_b_1482_){
_start:
{
uint8_t v___x_1483_; 
v___x_1483_ = lean_usize_dec_lt(v_i_1481_, v_sz_1480_);
if (v___x_1483_ == 0)
{
lean_inc_ref(v_b_1482_);
return v_b_1482_;
}
else
{
lean_object* v_a_1484_; lean_object* v_version_1485_; lean_object* v___x_1486_; uint8_t v___x_1487_; 
v_a_1484_ = lean_array_uget_borrowed(v_as_1479_, v_i_1481_);
v_version_1485_ = lean_ctor_get(v_a_1484_, 0);
v___x_1486_ = lean_box(0);
v___x_1487_ = l_Lake_VerRange_test(v_ver_1478_, v_version_1485_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; size_t v___x_1489_; size_t v___x_1490_; 
v___x_1488_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0___closed__0));
v___x_1489_ = ((size_t)1ULL);
v___x_1490_ = lean_usize_add(v_i_1481_, v___x_1489_);
v_i_1481_ = v___x_1490_;
v_b_1482_ = v___x_1488_;
goto _start;
}
else
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
lean_inc(v_a_1484_);
v___x_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1492_, 0, v_a_1484_);
v___x_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1492_);
v___x_1494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
lean_ctor_set(v___x_1494_, 1, v___x_1486_);
return v___x_1494_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0___boxed(lean_object* v_ver_1495_, lean_object* v_as_1496_, lean_object* v_sz_1497_, lean_object* v_i_1498_, lean_object* v_b_1499_){
_start:
{
size_t v_sz_boxed_1500_; size_t v_i_boxed_1501_; lean_object* v_res_1502_; 
v_sz_boxed_1500_ = lean_unbox_usize(v_sz_1497_);
lean_dec(v_sz_1497_);
v_i_boxed_1501_ = lean_unbox_usize(v_i_1498_);
lean_dec(v_i_1498_);
v_res_1502_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0(v_ver_1495_, v_as_1496_, v_sz_boxed_1500_, v_i_boxed_1501_, v_b_1499_);
lean_dec_ref(v_b_1499_);
lean_dec_ref(v_as_1496_);
lean_dec_ref(v_ver_1495_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Lake_Dependency_materialize(lean_object* v_dep_1512_, uint8_t v_inherited_1513_, lean_object* v_lakeEnv_1514_, lean_object* v_wsDir_1515_, lean_object* v_relPkgsDir_1516_, lean_object* v_relParentDir_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v___y_1521_; lean_object* v___y_1522_; lean_object* v___y_1532_; lean_object* v___y_1533_; lean_object* v___y_1534_; lean_object* v___y_1535_; lean_object* v___y_1536_; lean_object* v___y_1537_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v_a_1546_; lean_object* v_src_x3f_1549_; 
v_src_x3f_1549_ = lean_ctor_get(v_dep_1512_, 3);
lean_inc(v_src_x3f_1549_);
if (lean_obj_tag(v_src_x3f_1549_) == 1)
{
lean_object* v_val_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1674_; 
v_val_1550_ = lean_ctor_get(v_src_x3f_1549_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_src_x3f_1549_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1552_ = v_src_x3f_1549_;
v_isShared_1553_ = v_isSharedCheck_1674_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_val_1550_);
lean_dec(v_src_x3f_1549_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1674_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
if (lean_obj_tag(v_val_1550_) == 0)
{
lean_object* v_name_1554_; lean_object* v_scope_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1657_; 
lean_dec_ref(v_relPkgsDir_1516_);
lean_dec_ref(v_lakeEnv_1514_);
v_name_1554_ = lean_ctor_get(v_dep_1512_, 0);
v_scope_1555_ = lean_ctor_get(v_dep_1512_, 1);
v_isSharedCheck_1657_ = !lean_is_exclusive(v_dep_1512_);
if (v_isSharedCheck_1657_ == 0)
{
lean_object* v_unused_1658_; lean_object* v_unused_1659_; lean_object* v_unused_1660_; 
v_unused_1658_ = lean_ctor_get(v_dep_1512_, 4);
lean_dec(v_unused_1658_);
v_unused_1659_ = lean_ctor_get(v_dep_1512_, 3);
lean_dec(v_unused_1659_);
v_unused_1660_ = lean_ctor_get(v_dep_1512_, 2);
lean_dec(v_unused_1660_);
v___x_1557_ = v_dep_1512_;
v_isShared_1558_ = v_isSharedCheck_1657_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_scope_1555_);
lean_inc(v_name_1554_);
lean_dec(v_dep_1512_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1657_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v_dir_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1656_; 
v_dir_1559_ = lean_ctor_get(v_val_1550_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v_val_1550_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1561_ = v_val_1550_;
v_isShared_1562_ = v_isSharedCheck_1656_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_dir_1559_);
lean_dec(v_val_1550_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1656_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v_relPkgDir_1563_; uint8_t v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1568_; 
v_relPkgDir_1563_ = l_Lake_joinRelative(v_relParentDir_1517_, v_dir_1559_);
v___x_1564_ = 0;
lean_inc(v_name_1554_);
v___x_1565_ = l_Lean_Name_toString(v_name_1554_, v___x_1564_);
v___x_1566_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
lean_inc_ref(v_relPkgDir_1563_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 0, v_relPkgDir_1563_);
v___x_1568_ = v___x_1561_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_relPkgDir_1563_);
v___x_1568_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
lean_object* v___y_1570_; lean_object* v_a_1571_; lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v_val_1583_; lean_object* v_pkgDir_1598_; lean_object* v_a_1600_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v_val_1634_; lean_object* v___x_1648_; lean_object* v___x_1649_; uint8_t v___x_1650_; 
lean_inc_ref(v_relPkgDir_1563_);
v_pkgDir_1598_ = l_Lake_joinRelative(v_wsDir_1515_, v_relPkgDir_1563_);
v___x_1631_ = lean_unsigned_to_nat(0u);
v___x_1632_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_pkgDir_1598_);
v___x_1648_ = l_Lake_resolvePath(v_pkgDir_1598_);
v___x_1649_ = lean_string_utf8_byte_size(v___x_1648_);
v___x_1650_ = lean_nat_dec_eq(v___x_1649_, v___x_1631_);
if (v___x_1650_ == 0)
{
lean_object* v___x_1652_; 
if (v_isShared_1553_ == 0)
{
lean_ctor_set(v___x_1552_, 0, v___x_1648_);
v___x_1652_ = v___x_1552_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1648_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
v_val_1634_ = v___x_1652_;
goto v___jp_1633_;
}
}
else
{
lean_object* v___x_1654_; 
lean_dec_ref(v___x_1648_);
lean_del_object(v___x_1552_);
v___x_1654_ = lean_box(0);
v_val_1634_ = v___x_1654_;
goto v___jp_1633_;
}
v___jp_1569_:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1576_; 
v___x_1572_ = l_Lake_defaultConfigFile;
v___x_1573_ = lean_box(0);
v___x_1574_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1574_, 0, v_name_1554_);
lean_ctor_set(v___x_1574_, 1, v_scope_1555_);
lean_ctor_set(v___x_1574_, 2, v___x_1572_);
lean_ctor_set(v___x_1574_, 3, v___x_1573_);
lean_ctor_set(v___x_1574_, 4, v___x_1568_);
lean_ctor_set_uint8(v___x_1574_, sizeof(void*)*5, v_inherited_1513_);
if (v_isShared_1558_ == 0)
{
lean_ctor_set(v___x_1557_, 4, v___x_1574_);
lean_ctor_set(v___x_1557_, 3, v_a_1571_);
lean_ctor_set(v___x_1557_, 2, v___x_1566_);
lean_ctor_set(v___x_1557_, 1, v_relPkgDir_1563_);
lean_ctor_set(v___x_1557_, 0, v___y_1570_);
v___x_1576_ = v___x_1557_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v___y_1570_);
lean_ctor_set(v_reuseFailAlloc_1578_, 1, v_relPkgDir_1563_);
lean_ctor_set(v_reuseFailAlloc_1578_, 2, v___x_1566_);
lean_ctor_set(v_reuseFailAlloc_1578_, 3, v_a_1571_);
lean_ctor_set(v_reuseFailAlloc_1578_, 4, v___x_1574_);
v___x_1576_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
return v___x_1577_;
}
}
v___jp_1579_:
{
lean_object* v___x_1584_; uint8_t v___x_1585_; 
v___x_1584_ = lean_array_get_size(v___y_1580_);
v___x_1585_ = lean_nat_dec_lt(v___y_1582_, v___x_1584_);
if (v___x_1585_ == 0)
{
v___y_1570_ = v___y_1581_;
v_a_1571_ = v_val_1583_;
goto v___jp_1569_;
}
else
{
lean_object* v___x_1586_; size_t v___x_1587_; size_t v___x_1588_; lean_object* v___x_1589_; 
v___x_1586_ = lean_box(0);
v___x_1587_ = ((size_t)0ULL);
v___x_1588_ = lean_usize_of_nat(v___x_1584_);
v___x_1589_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_1580_, v___x_1587_, v___x_1588_, v___x_1586_, v___y_1518_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_dec_ref_known(v___x_1589_, 1);
v___y_1570_ = v___y_1581_;
v_a_1571_ = v_val_1583_;
goto v___jp_1569_;
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
lean_dec_ref(v_val_1583_);
lean_dec_ref(v___y_1581_);
lean_dec_ref(v___x_1568_);
lean_dec_ref(v_relPkgDir_1563_);
lean_del_object(v___x_1557_);
lean_dec_ref(v_scope_1555_);
lean_dec(v_name_1554_);
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1589_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1589_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
}
v___jp_1599_:
{
if (lean_obj_tag(v_a_1600_) == 1)
{
lean_object* v_val_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
lean_dec_ref(v_pkgDir_1598_);
lean_dec_ref(v___x_1565_);
v_val_1601_ = lean_ctor_get(v_a_1600_, 0);
lean_inc_n(v_val_1601_, 2);
lean_dec_ref_known(v_a_1600_, 1);
v___x_1602_ = l_Lake_defaultManifestFile;
v___x_1603_ = l_Lake_joinRelative(v_val_1601_, v___x_1602_);
v___x_1604_ = lean_unsigned_to_nat(0u);
v___x_1605_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_1606_ = l_Lake_Manifest_load(v___x_1603_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v_a_1607_; lean_object* v___x_1609_; uint8_t v_isShared_1610_; uint8_t v_isSharedCheck_1614_; 
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1609_ = v___x_1606_;
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
else
{
lean_inc(v_a_1607_);
lean_dec(v___x_1606_);
v___x_1609_ = lean_box(0);
v_isShared_1610_ = v_isSharedCheck_1614_;
goto v_resetjp_1608_;
}
v_resetjp_1608_:
{
lean_object* v___x_1612_; 
if (v_isShared_1610_ == 0)
{
lean_ctor_set_tag(v___x_1609_, 1);
v___x_1612_ = v___x_1609_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_a_1607_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
v___y_1580_ = v___x_1605_;
v___y_1581_ = v_val_1601_;
v___y_1582_ = v___x_1604_;
v_val_1583_ = v___x_1612_;
goto v___jp_1579_;
}
}
}
else
{
lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1622_; 
v_a_1615_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1617_ = v___x_1606_;
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v___x_1606_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1620_; 
if (v_isShared_1618_ == 0)
{
lean_ctor_set_tag(v___x_1617_, 0);
v___x_1620_ = v___x_1617_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_a_1615_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
v___y_1580_ = v___x_1605_;
v___y_1581_ = v_val_1601_;
v___y_1582_ = v___x_1604_;
v_val_1583_ = v___x_1620_;
goto v___jp_1579_;
}
}
}
}
else
{
lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
lean_dec(v_a_1600_);
lean_dec_ref(v___x_1568_);
lean_dec_ref(v_relPkgDir_1563_);
lean_del_object(v___x_1557_);
lean_dec_ref(v_scope_1555_);
lean_dec(v_name_1554_);
v___x_1623_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_1624_ = lean_string_append(v___x_1565_, v___x_1623_);
v___x_1625_ = lean_string_append(v___x_1624_, v_pkgDir_1598_);
lean_dec_ref(v_pkgDir_1598_);
v___x_1626_ = 3;
v___x_1627_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1627_, 0, v___x_1625_);
lean_ctor_set_uint8(v___x_1627_, sizeof(void*)*1, v___x_1626_);
lean_inc_ref(v___y_1518_);
v___x_1628_ = lean_apply_2(v___y_1518_, v___x_1627_, lean_box(0));
v___x_1629_ = lean_box(0);
v___x_1630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1629_);
return v___x_1630_;
}
}
v___jp_1633_:
{
uint8_t v___x_1635_; 
v___x_1635_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_1635_ == 0)
{
v_a_1600_ = v_val_1634_;
goto v___jp_1599_;
}
else
{
lean_object* v___x_1636_; size_t v___x_1637_; size_t v___x_1638_; lean_object* v___x_1639_; 
v___x_1636_ = lean_box(0);
v___x_1637_ = ((size_t)0ULL);
v___x_1638_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_1639_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_1632_, v___x_1637_, v___x_1638_, v___x_1636_, v___y_1518_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_dec_ref_known(v___x_1639_, 1);
v_a_1600_ = v_val_1634_;
goto v___jp_1599_;
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_dec(v_val_1634_);
lean_dec_ref(v_pkgDir_1598_);
lean_dec_ref(v___x_1568_);
lean_dec_ref(v___x_1565_);
lean_dec_ref(v_relPkgDir_1563_);
lean_del_object(v___x_1557_);
lean_dec_ref(v_scope_1555_);
lean_dec(v_name_1554_);
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1639_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1639_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
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
lean_object* v_name_1661_; lean_object* v_url_1662_; lean_object* v_rev_1663_; lean_object* v_subDir_1664_; lean_object* v___y_1666_; lean_object* v___x_1671_; 
lean_del_object(v___x_1552_);
lean_dec_ref(v_relParentDir_1517_);
v_name_1661_ = lean_ctor_get(v_dep_1512_, 0);
v_url_1662_ = lean_ctor_get(v_val_1550_, 0);
lean_inc_ref_n(v_url_1662_, 2);
v_rev_1663_ = lean_ctor_get(v_val_1550_, 1);
lean_inc(v_rev_1663_);
v_subDir_1664_ = lean_ctor_get(v_val_1550_, 2);
lean_inc(v_subDir_1664_);
lean_dec_ref_known(v_val_1550_, 3);
v___x_1671_ = l_Lake_Git_filterUrl_x3f(v_url_1662_);
if (lean_obj_tag(v___x_1671_) == 0)
{
lean_object* v___x_1672_; 
v___x_1672_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
v___y_1666_ = v___x_1672_;
goto v___jp_1665_;
}
else
{
lean_object* v_val_1673_; 
v_val_1673_ = lean_ctor_get(v___x_1671_, 0);
lean_inc(v_val_1673_);
lean_dec_ref_known(v___x_1671_, 1);
v___y_1666_ = v_val_1673_;
goto v___jp_1665_;
}
v___jp_1665_:
{
uint8_t v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1667_ = 0;
lean_inc(v_name_1661_);
v___x_1668_ = l_Lean_Name_toString(v_name_1661_, v___x_1667_);
lean_inc_ref(v___x_1668_);
v___x_1669_ = l_Lake_joinRelative(v_relPkgsDir_1516_, v___x_1668_);
v___x_1670_ = l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit(v_dep_1512_, v_inherited_1513_, v_lakeEnv_1514_, v_wsDir_1515_, v___x_1668_, v___x_1669_, v_url_1662_, v___y_1666_, v_rev_1663_, v_subDir_1664_, v___y_1518_);
lean_dec_ref(v_lakeEnv_1514_);
return v___x_1670_;
}
}
}
}
else
{
lean_object* v_name_1675_; lean_object* v_scope_1676_; lean_object* v_version_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; uint8_t v___x_1680_; 
lean_dec(v_src_x3f_1549_);
lean_dec_ref(v_relParentDir_1517_);
v_name_1675_ = lean_ctor_get(v_dep_1512_, 0);
v_scope_1676_ = lean_ctor_get(v_dep_1512_, 1);
v_version_1677_ = lean_ctor_get(v_dep_1512_, 2);
v___x_1678_ = lean_string_utf8_byte_size(v_scope_1676_);
v___x_1679_ = lean_unsigned_to_nat(0u);
v___x_1680_ = lean_nat_dec_eq(v___x_1678_, v___x_1679_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; lean_object* v___y_1683_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v_a_1705_; lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1751_; lean_object* v___y_1752_; lean_object* v___y_1753_; lean_object* v___y_1754_; lean_object* v_fst_1755_; lean_object* v_snd_1756_; lean_object* v_a_1772_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v_fst_1879_; lean_object* v_snd_1880_; 
lean_inc(v_name_1675_);
v___x_1681_ = l_Lean_Name_toString(v_name_1675_, v___x_1680_);
v___x_1876_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_scope_1676_);
lean_inc_ref(v_lakeEnv_1514_);
v___x_1877_ = l_Lake_Reservoir_fetchPkg_x3f(v_lakeEnv_1514_, v_scope_1676_, v___x_1681_, v___x_1876_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v_a_1895_; lean_object* v_a_1896_; lean_object* v___x_1897_; 
v_a_1895_ = lean_ctor_get(v___x_1877_, 0);
lean_inc(v_a_1895_);
v_a_1896_ = lean_ctor_get(v___x_1877_, 1);
lean_inc(v_a_1896_);
lean_dec_ref_known(v___x_1877_, 2);
v___x_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1897_, 0, v_a_1895_);
v_fst_1879_ = v___x_1897_;
v_snd_1880_ = v_a_1896_;
goto v___jp_1878_;
}
else
{
lean_object* v_a_1898_; lean_object* v_a_1899_; lean_object* v___x_1900_; 
v_a_1898_ = lean_ctor_get(v___x_1877_, 0);
lean_inc(v_a_1898_);
v_a_1899_ = lean_ctor_get(v___x_1877_, 1);
lean_inc(v_a_1899_);
lean_dec_ref_known(v___x_1877_, 2);
v___x_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1900_, 0, v_a_1898_);
v_fst_1879_ = v___x_1900_;
v_snd_1880_ = v_a_1899_;
goto v___jp_1878_;
}
v___jp_1682_:
{
lean_object* v_toString_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; uint8_t v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v_toString_1684_ = lean_ctor_get(v___y_1683_, 0);
lean_inc_ref(v_toString_1684_);
lean_dec_ref(v___y_1683_);
v___x_1685_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0));
v___x_1686_ = lean_string_append(v_scope_1676_, v___x_1685_);
v___x_1687_ = lean_string_append(v___x_1686_, v___x_1681_);
lean_dec_ref(v___x_1681_);
v___x_1688_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__1));
v___x_1689_ = lean_string_append(v___x_1687_, v___x_1688_);
v___x_1690_ = lean_string_append(v___x_1689_, v_toString_1684_);
lean_dec_ref(v_toString_1684_);
v___x_1691_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__2));
v___x_1692_ = lean_string_append(v___x_1690_, v___x_1691_);
v___x_1693_ = 3;
v___x_1694_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1694_, 0, v___x_1692_);
lean_ctor_set_uint8(v___x_1694_, sizeof(void*)*1, v___x_1693_);
lean_inc_ref(v___y_1518_);
v___x_1695_ = lean_apply_2(v___y_1518_, v___x_1694_, lean_box(0));
v___x_1696_ = lean_box(0);
v___x_1697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1696_);
return v___x_1697_;
}
v___jp_1698_:
{
if (lean_obj_tag(v_a_1705_) == 0)
{
lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1721_; 
lean_inc_ref(v_scope_1676_);
lean_dec_ref(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v_isSharedCheck_1721_ = !lean_is_exclusive(v_a_1705_);
if (v_isSharedCheck_1721_ == 0)
{
lean_object* v_unused_1722_; 
v_unused_1722_ = lean_ctor_get(v_a_1705_, 0);
lean_dec(v_unused_1722_);
v___x_1707_ = v_a_1705_;
v_isShared_1708_ = v_isSharedCheck_1721_;
goto v_resetjp_1706_;
}
else
{
lean_dec(v_a_1705_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1721_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; uint8_t v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1719_; 
v___x_1709_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0));
v___x_1710_ = lean_string_append(v_scope_1676_, v___x_1709_);
v___x_1711_ = lean_string_append(v___x_1710_, v___x_1681_);
lean_dec_ref(v___x_1681_);
v___x_1712_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__3));
v___x_1713_ = lean_string_append(v___x_1711_, v___x_1712_);
v___x_1714_ = 3;
v___x_1715_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1715_, 0, v___x_1713_);
lean_ctor_set_uint8(v___x_1715_, sizeof(void*)*1, v___x_1714_);
lean_inc_ref(v___y_1518_);
v___x_1716_ = lean_apply_2(v___y_1518_, v___x_1715_, lean_box(0));
v___x_1717_ = lean_box(0);
if (v_isShared_1708_ == 0)
{
lean_ctor_set_tag(v___x_1707_, 1);
lean_ctor_set(v___x_1707_, 0, v___x_1717_);
v___x_1719_ = v___x_1707_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v___x_1717_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
else
{
lean_object* v_a_1723_; lean_object* v___x_1724_; size_t v_sz_1725_; size_t v___x_1726_; lean_object* v___x_1727_; lean_object* v_fst_1728_; 
v_a_1723_ = lean_ctor_get(v_a_1705_, 0);
lean_inc(v_a_1723_);
lean_dec_ref_known(v_a_1705_, 1);
v___x_1724_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0___closed__0));
v_sz_1725_ = lean_array_size(v_a_1723_);
v___x_1726_ = ((size_t)0ULL);
v___x_1727_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0(v___y_1704_, v_a_1723_, v_sz_1725_, v___x_1726_, v___x_1724_);
lean_dec(v_a_1723_);
v_fst_1728_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_fst_1728_);
lean_dec_ref(v___x_1727_);
if (lean_obj_tag(v_fst_1728_) == 0)
{
lean_inc_ref(v_scope_1676_);
lean_dec_ref(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v___y_1683_ = v___y_1704_;
goto v___jp_1682_;
}
else
{
lean_object* v_val_1729_; 
v_val_1729_ = lean_ctor_get(v_fst_1728_, 0);
lean_inc(v_val_1729_);
lean_dec_ref_known(v_fst_1728_, 1);
if (lean_obj_tag(v_val_1729_) == 1)
{
lean_object* v_val_1730_; lean_object* v_version_1731_; lean_object* v_revision_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; uint8_t v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
lean_dec_ref(v___y_1704_);
v_val_1730_ = lean_ctor_get(v_val_1729_, 0);
lean_inc(v_val_1730_);
lean_dec_ref_known(v_val_1729_, 1);
v_version_1731_ = lean_ctor_get(v_val_1730_, 0);
lean_inc_ref(v_version_1731_);
v_revision_1732_ = lean_ctor_get(v_val_1730_, 1);
lean_inc_ref(v_revision_1732_);
lean_dec(v_val_1730_);
v___x_1733_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0));
lean_inc_ref(v_scope_1676_);
v___x_1734_ = lean_string_append(v_scope_1676_, v___x_1733_);
v___x_1735_ = lean_string_append(v___x_1734_, v___x_1681_);
lean_dec_ref(v___x_1681_);
v___x_1736_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__4));
v___x_1737_ = lean_string_append(v___x_1735_, v___x_1736_);
v___x_1738_ = l_Lake_StdVer_toString(v_version_1731_);
v___x_1739_ = lean_string_append(v___x_1737_, v___x_1738_);
lean_dec_ref(v___x_1738_);
v___x_1740_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__5));
v___x_1741_ = lean_string_append(v___x_1739_, v___x_1740_);
v___x_1742_ = lean_string_append(v___x_1741_, v_revision_1732_);
v___x_1743_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__6));
v___x_1744_ = lean_string_append(v___x_1742_, v___x_1743_);
v___x_1745_ = 1;
v___x_1746_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1746_, 0, v___x_1744_);
lean_ctor_set_uint8(v___x_1746_, sizeof(void*)*1, v___x_1745_);
lean_inc_ref(v___y_1518_);
v___x_1747_ = lean_apply_2(v___y_1518_, v___x_1746_, lean_box(0));
v___y_1541_ = v___y_1699_;
v___y_1542_ = v___y_1700_;
v___y_1543_ = v___y_1701_;
v___y_1544_ = v___y_1702_;
v___y_1545_ = v___y_1703_;
v_a_1546_ = v_revision_1732_;
goto v___jp_1540_;
}
else
{
lean_inc_ref(v_scope_1676_);
lean_dec(v_val_1729_);
lean_dec_ref(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v___y_1683_ = v___y_1704_;
goto v___jp_1682_;
}
}
}
}
v___jp_1748_:
{
lean_object* v___x_1757_; uint8_t v___x_1758_; 
v___x_1757_ = lean_array_get_size(v_snd_1756_);
v___x_1758_ = lean_nat_dec_lt(v___x_1679_, v___x_1757_);
if (v___x_1758_ == 0)
{
lean_dec_ref(v_snd_1756_);
v___y_1699_ = v___y_1749_;
v___y_1700_ = v___y_1750_;
v___y_1701_ = v___y_1751_;
v___y_1702_ = v___y_1752_;
v___y_1703_ = v___y_1753_;
v___y_1704_ = v___y_1754_;
v_a_1705_ = v_fst_1755_;
goto v___jp_1698_;
}
else
{
lean_object* v___x_1759_; size_t v___x_1760_; size_t v___x_1761_; lean_object* v___x_1762_; 
v___x_1759_ = lean_box(0);
v___x_1760_ = ((size_t)0ULL);
v___x_1761_ = lean_usize_of_nat(v___x_1757_);
v___x_1762_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_snd_1756_, v___x_1760_, v___x_1761_, v___x_1759_, v___y_1518_);
lean_dec_ref(v_snd_1756_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_dec_ref_known(v___x_1762_, 1);
v___y_1699_ = v___y_1749_;
v___y_1700_ = v___y_1750_;
v___y_1701_ = v___y_1751_;
v___y_1702_ = v___y_1752_;
v___y_1703_ = v___y_1753_;
v___y_1704_ = v___y_1754_;
v_a_1705_ = v_fst_1755_;
goto v___jp_1698_;
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
lean_dec_ref(v_fst_1755_);
lean_dec_ref(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec(v___y_1752_);
lean_dec(v___y_1751_);
lean_dec_ref(v___y_1750_);
lean_dec_ref(v___y_1749_);
lean_dec_ref(v___x_1681_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1762_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1762_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1763_);
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
}
v___jp_1771_:
{
if (lean_obj_tag(v_a_1772_) == 0)
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; uint8_t v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
lean_inc_ref(v_scope_1676_);
lean_dec_ref_known(v_a_1772_, 1);
lean_dec_ref(v_relPkgsDir_1516_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v___x_1773_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0));
v___x_1774_ = lean_string_append(v_scope_1676_, v___x_1773_);
v___x_1775_ = lean_string_append(v___x_1774_, v___x_1681_);
lean_dec_ref(v___x_1681_);
v___x_1776_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__7));
v___x_1777_ = lean_string_append(v___x_1775_, v___x_1776_);
v___x_1778_ = 3;
v___x_1779_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1779_, 0, v___x_1777_);
lean_ctor_set_uint8(v___x_1779_, sizeof(void*)*1, v___x_1778_);
lean_inc_ref(v___y_1518_);
v___x_1780_ = lean_apply_2(v___y_1518_, v___x_1779_, lean_box(0));
v___x_1781_ = lean_box(0);
v___x_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1781_);
return v___x_1782_;
}
else
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1875_; 
v_a_1783_ = lean_ctor_get(v_a_1772_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_a_1772_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1785_ = v_a_1772_;
v_isShared_1786_ = v_isSharedCheck_1875_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v_a_1772_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1875_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
if (lean_obj_tag(v_a_1783_) == 0)
{
lean_object* v___x_1787_; uint8_t v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
lean_del_object(v___x_1785_);
lean_dec_ref(v___x_1681_);
lean_dec_ref(v_relPkgsDir_1516_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
v___x_1787_ = l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed(v_dep_1512_);
v___x_1788_ = 3;
v___x_1789_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1789_, 0, v___x_1787_);
lean_ctor_set_uint8(v___x_1789_, sizeof(void*)*1, v___x_1788_);
lean_inc_ref(v___y_1518_);
v___x_1790_ = lean_apply_2(v___y_1518_, v___x_1789_, lean_box(0));
v___x_1791_ = lean_box(0);
v___x_1792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1791_);
return v___x_1792_;
}
else
{
lean_object* v_val_1793_; lean_object* v___x_1794_; 
v_val_1793_ = lean_ctor_get(v_a_1783_, 0);
lean_inc(v_val_1793_);
lean_dec_ref_known(v_a_1783_, 1);
v___x_1794_ = l_Lake_RegistryPkg_gitSrc_x3f(v_val_1793_);
if (lean_obj_tag(v___x_1794_) == 1)
{
lean_object* v_val_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1874_; 
v_val_1795_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1797_ = v___x_1794_;
v_isShared_1798_ = v_isSharedCheck_1874_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_val_1795_);
lean_dec(v___x_1794_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1874_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
if (lean_obj_tag(v_val_1795_) == 0)
{
lean_object* v_url_1799_; lean_object* v_githubUrl_x3f_1800_; lean_object* v_defaultBranch_x3f_1801_; lean_object* v_subDir_x3f_1802_; lean_object* v_name_1803_; lean_object* v_fullName_1804_; lean_object* v___x_1805_; 
v_url_1799_ = lean_ctor_get(v_val_1795_, 1);
lean_inc_ref(v_url_1799_);
v_githubUrl_x3f_1800_ = lean_ctor_get(v_val_1795_, 2);
lean_inc(v_githubUrl_x3f_1800_);
v_defaultBranch_x3f_1801_ = lean_ctor_get(v_val_1795_, 3);
lean_inc(v_defaultBranch_x3f_1801_);
v_subDir_x3f_1802_ = lean_ctor_get(v_val_1795_, 4);
lean_inc(v_subDir_x3f_1802_);
lean_dec_ref_known(v_val_1795_, 5);
v_name_1803_ = lean_ctor_get(v_val_1793_, 0);
lean_inc_ref(v_name_1803_);
v_fullName_1804_ = lean_ctor_get(v_val_1793_, 1);
lean_inc_ref(v_fullName_1804_);
lean_dec(v_val_1793_);
v___x_1805_ = l_Lake_joinRelative(v_relPkgsDir_1516_, v_name_1803_);
switch(lean_obj_tag(v_version_1677_))
{
case 0:
{
lean_object* v___x_1806_; 
lean_del_object(v___x_1785_);
lean_dec_ref(v___x_1681_);
v___x_1806_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
if (lean_obj_tag(v_defaultBranch_x3f_1801_) == 0)
{
uint8_t v___x_1807_; 
lean_dec_ref(v___x_1805_);
lean_dec_ref(v_fullName_1804_);
lean_dec(v_subDir_x3f_1802_);
lean_dec(v_githubUrl_x3f_1800_);
lean_dec_ref(v_url_1799_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v___x_1807_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_1807_ == 0)
{
lean_object* v___x_1808_; lean_object* v___x_1810_; 
v___x_1808_ = lean_box(0);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 0, v___x_1808_);
v___x_1810_ = v___x_1797_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1808_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
else
{
lean_object* v___x_1812_; size_t v___x_1813_; size_t v___x_1814_; lean_object* v___x_1815_; 
lean_del_object(v___x_1797_);
v___x_1812_ = lean_box(0);
v___x_1813_ = ((size_t)0ULL);
v___x_1814_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_1815_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_1806_, v___x_1813_, v___x_1814_, v___x_1812_, v___y_1518_);
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1822_; 
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1822_ == 0)
{
lean_object* v_unused_1823_; 
v_unused_1823_ = lean_ctor_get(v___x_1815_, 0);
lean_dec(v_unused_1823_);
v___x_1817_ = v___x_1815_;
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
else
{
lean_dec(v___x_1815_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1820_; 
if (v_isShared_1818_ == 0)
{
lean_ctor_set_tag(v___x_1817_, 1);
lean_ctor_set(v___x_1817_, 0, v___x_1812_);
v___x_1820_ = v___x_1817_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v___x_1812_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
}
else
{
lean_object* v_a_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1831_; 
v_a_1824_ = lean_ctor_get(v___x_1815_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1826_ = v___x_1815_;
v_isShared_1827_ = v_isSharedCheck_1831_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_a_1824_);
lean_dec(v___x_1815_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1831_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1829_; 
if (v_isShared_1827_ == 0)
{
v___x_1829_ = v___x_1826_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_a_1824_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
}
}
}
}
}
else
{
lean_object* v_val_1832_; uint8_t v___x_1833_; 
lean_del_object(v___x_1797_);
v_val_1832_ = lean_ctor_get(v_defaultBranch_x3f_1801_, 0);
lean_inc(v_val_1832_);
lean_dec_ref_known(v_defaultBranch_x3f_1801_, 1);
v___x_1833_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_1833_ == 0)
{
v___y_1541_ = v___x_1805_;
v___y_1542_ = v_fullName_1804_;
v___y_1543_ = v_subDir_x3f_1802_;
v___y_1544_ = v_githubUrl_x3f_1800_;
v___y_1545_ = v_url_1799_;
v_a_1546_ = v_val_1832_;
goto v___jp_1540_;
}
else
{
lean_object* v___x_1834_; size_t v___x_1835_; size_t v___x_1836_; lean_object* v___x_1837_; 
v___x_1834_ = lean_box(0);
v___x_1835_ = ((size_t)0ULL);
v___x_1836_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_1837_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_1806_, v___x_1835_, v___x_1836_, v___x_1834_, v___y_1518_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_dec_ref_known(v___x_1837_, 1);
v___y_1541_ = v___x_1805_;
v___y_1542_ = v_fullName_1804_;
v___y_1543_ = v_subDir_x3f_1802_;
v___y_1544_ = v_githubUrl_x3f_1800_;
v___y_1545_ = v_url_1799_;
v_a_1546_ = v_val_1832_;
goto v___jp_1540_;
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
lean_dec(v_val_1832_);
lean_dec_ref(v___x_1805_);
lean_dec_ref(v_fullName_1804_);
lean_dec(v_subDir_x3f_1802_);
lean_dec(v_githubUrl_x3f_1800_);
lean_dec_ref(v_url_1799_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1837_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1837_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
}
}
case 1:
{
lean_object* v_rev_1846_; lean_object* v___x_1847_; uint8_t v___x_1848_; 
lean_dec(v_defaultBranch_x3f_1801_);
lean_del_object(v___x_1797_);
lean_del_object(v___x_1785_);
lean_dec_ref(v___x_1681_);
v_rev_1846_ = lean_ctor_get(v_version_1677_, 0);
v___x_1847_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_1848_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_1848_ == 0)
{
lean_inc_ref(v_rev_1846_);
v___y_1541_ = v___x_1805_;
v___y_1542_ = v_fullName_1804_;
v___y_1543_ = v_subDir_x3f_1802_;
v___y_1544_ = v_githubUrl_x3f_1800_;
v___y_1545_ = v_url_1799_;
v_a_1546_ = v_rev_1846_;
goto v___jp_1540_;
}
else
{
lean_object* v___x_1849_; size_t v___x_1850_; size_t v___x_1851_; lean_object* v___x_1852_; 
v___x_1849_ = lean_box(0);
v___x_1850_ = ((size_t)0ULL);
v___x_1851_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_1852_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_1847_, v___x_1850_, v___x_1851_, v___x_1849_, v___y_1518_);
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_dec_ref_known(v___x_1852_, 1);
lean_inc_ref(v_rev_1846_);
v___y_1541_ = v___x_1805_;
v___y_1542_ = v_fullName_1804_;
v___y_1543_ = v_subDir_x3f_1802_;
v___y_1544_ = v_githubUrl_x3f_1800_;
v___y_1545_ = v_url_1799_;
v_a_1546_ = v_rev_1846_;
goto v___jp_1540_;
}
else
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1860_; 
lean_dec_ref(v___x_1805_);
lean_dec_ref(v_fullName_1804_);
lean_dec(v_subDir_x3f_1802_);
lean_dec(v_githubUrl_x3f_1800_);
lean_dec_ref(v_url_1799_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v_a_1853_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1855_ = v___x_1852_;
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1852_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
}
default: 
{
lean_object* v_ver_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
lean_dec(v_defaultBranch_x3f_1801_);
lean_del_object(v___x_1797_);
v_ver_1861_ = lean_ctor_get(v_version_1677_, 0);
v___x_1862_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_scope_1676_);
lean_inc_ref(v_lakeEnv_1514_);
v___x_1863_ = l_Lake_Reservoir_fetchPkgVersions(v_lakeEnv_1514_, v_scope_1676_, v___x_1681_, v___x_1862_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v_a_1865_; lean_object* v___x_1867_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1864_);
v_a_1865_ = lean_ctor_get(v___x_1863_, 1);
lean_inc(v_a_1865_);
lean_dec_ref_known(v___x_1863_, 2);
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 0, v_a_1864_);
v___x_1867_ = v___x_1785_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1864_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_inc_ref(v_ver_1861_);
v___y_1749_ = v___x_1805_;
v___y_1750_ = v_fullName_1804_;
v___y_1751_ = v_subDir_x3f_1802_;
v___y_1752_ = v_githubUrl_x3f_1800_;
v___y_1753_ = v_url_1799_;
v___y_1754_ = v_ver_1861_;
v_fst_1755_ = v___x_1867_;
v_snd_1756_ = v_a_1865_;
goto v___jp_1748_;
}
}
else
{
lean_object* v_a_1869_; lean_object* v_a_1870_; lean_object* v___x_1872_; 
v_a_1869_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1869_);
v_a_1870_ = lean_ctor_get(v___x_1863_, 1);
lean_inc(v_a_1870_);
lean_dec_ref_known(v___x_1863_, 2);
if (v_isShared_1786_ == 0)
{
lean_ctor_set_tag(v___x_1785_, 0);
lean_ctor_set(v___x_1785_, 0, v_a_1869_);
v___x_1872_ = v___x_1785_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1869_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
lean_inc_ref(v_ver_1861_);
v___y_1749_ = v___x_1805_;
v___y_1750_ = v_fullName_1804_;
v___y_1751_ = v_subDir_x3f_1802_;
v___y_1752_ = v_githubUrl_x3f_1800_;
v___y_1753_ = v_url_1799_;
v___y_1754_ = v_ver_1861_;
v_fst_1755_ = v___x_1872_;
v_snd_1756_ = v_a_1870_;
goto v___jp_1748_;
}
}
}
}
}
else
{
lean_del_object(v___x_1797_);
lean_dec(v_val_1795_);
lean_del_object(v___x_1785_);
lean_dec_ref(v___x_1681_);
lean_dec_ref(v_relPkgsDir_1516_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v___y_1521_ = v_val_1793_;
v___y_1522_ = v___y_1518_;
goto v___jp_1520_;
}
}
}
else
{
lean_dec(v___x_1794_);
lean_del_object(v___x_1785_);
lean_dec_ref(v___x_1681_);
lean_dec_ref(v_relPkgsDir_1516_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v___y_1521_ = v_val_1793_;
v___y_1522_ = v___y_1518_;
goto v___jp_1520_;
}
}
}
}
}
v___jp_1878_:
{
lean_object* v___x_1881_; uint8_t v___x_1882_; 
v___x_1881_ = lean_array_get_size(v_snd_1880_);
v___x_1882_ = lean_nat_dec_lt(v___x_1679_, v___x_1881_);
if (v___x_1882_ == 0)
{
lean_dec_ref(v_snd_1880_);
v_a_1772_ = v_fst_1879_;
goto v___jp_1771_;
}
else
{
lean_object* v___x_1883_; size_t v___x_1884_; size_t v___x_1885_; lean_object* v___x_1886_; 
v___x_1883_ = lean_box(0);
v___x_1884_ = ((size_t)0ULL);
v___x_1885_ = lean_usize_of_nat(v___x_1881_);
v___x_1886_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_snd_1880_, v___x_1884_, v___x_1885_, v___x_1883_, v___y_1518_);
lean_dec_ref(v_snd_1880_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_dec_ref_known(v___x_1886_, 1);
v_a_1772_ = v_fst_1879_;
goto v___jp_1771_;
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1894_; 
lean_dec_ref(v_fst_1879_);
lean_dec_ref(v___x_1681_);
lean_dec_ref(v_relPkgsDir_1516_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1889_ = v___x_1886_;
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1886_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1887_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
}
}
else
{
uint8_t v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; uint8_t v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; 
lean_inc(v_name_1675_);
lean_dec_ref(v_relPkgsDir_1516_);
lean_dec_ref(v_wsDir_1515_);
lean_dec_ref(v_lakeEnv_1514_);
lean_dec_ref(v_dep_1512_);
v___x_1901_ = 0;
v___x_1902_ = l_Lean_Name_toString(v_name_1675_, v___x_1901_);
v___x_1903_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__8));
v___x_1904_ = lean_string_append(v___x_1902_, v___x_1903_);
v___x_1905_ = 3;
v___x_1906_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1906_, 0, v___x_1904_);
lean_ctor_set_uint8(v___x_1906_, sizeof(void*)*1, v___x_1905_);
lean_inc_ref(v___y_1518_);
v___x_1907_ = lean_apply_2(v___y_1518_, v___x_1906_, lean_box(0));
v___x_1908_ = lean_box(0);
v___x_1909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
return v___x_1909_;
}
}
v___jp_1520_:
{
lean_object* v_fullName_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; uint8_t v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v_fullName_1523_ = lean_ctor_get(v___y_1521_, 1);
lean_inc_ref(v_fullName_1523_);
lean_dec_ref(v___y_1521_);
v___x_1524_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__0));
v___x_1525_ = lean_string_append(v_fullName_1523_, v___x_1524_);
v___x_1526_ = 3;
v___x_1527_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1527_, 0, v___x_1525_);
lean_ctor_set_uint8(v___x_1527_, sizeof(void*)*1, v___x_1526_);
lean_inc_ref(v___y_1522_);
v___x_1528_ = lean_apply_2(v___y_1522_, v___x_1527_, lean_box(0));
v___x_1529_ = lean_box(0);
v___x_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
return v___x_1530_;
}
v___jp_1531_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1538_, 0, v___y_1536_);
v___x_1539_ = l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit(v_dep_1512_, v_inherited_1513_, v_lakeEnv_1514_, v_wsDir_1515_, v___y_1533_, v___y_1532_, v___y_1535_, v___y_1537_, v___x_1538_, v___y_1534_, v___y_1518_);
lean_dec_ref(v_lakeEnv_1514_);
return v___x_1539_;
}
v___jp_1540_:
{
if (lean_obj_tag(v___y_1544_) == 0)
{
lean_object* v___x_1547_; 
v___x_1547_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
v___y_1532_ = v___y_1541_;
v___y_1533_ = v___y_1542_;
v___y_1534_ = v___y_1543_;
v___y_1535_ = v___y_1545_;
v___y_1536_ = v_a_1546_;
v___y_1537_ = v___x_1547_;
goto v___jp_1531_;
}
else
{
lean_object* v_val_1548_; 
v_val_1548_ = lean_ctor_get(v___y_1544_, 0);
lean_inc(v_val_1548_);
lean_dec_ref_known(v___y_1544_, 1);
v___y_1532_ = v___y_1541_;
v___y_1533_ = v___y_1542_;
v___y_1534_ = v___y_1543_;
v___y_1535_ = v___y_1545_;
v___y_1536_ = v_a_1546_;
v___y_1537_ = v_val_1548_;
goto v___jp_1531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Dependency_materialize___boxed(lean_object* v_dep_1910_, lean_object* v_inherited_1911_, lean_object* v_lakeEnv_1912_, lean_object* v_wsDir_1913_, lean_object* v_relPkgsDir_1914_, lean_object* v_relParentDir_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
uint8_t v_inherited_boxed_1918_; lean_object* v_res_1919_; 
v_inherited_boxed_1918_ = lean_unbox(v_inherited_1911_);
v_res_1919_ = l_Lake_Dependency_materialize(v_dep_1910_, v_inherited_boxed_1918_, v_lakeEnv_1912_, v_wsDir_1913_, v_relPkgsDir_1914_, v_relParentDir_1915_, v___y_1916_);
lean_dec_ref(v___y_1916_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep(lean_object* v_manifestEntry_1925_, lean_object* v_wsDir_1926_, lean_object* v_relPkgDir_1927_, lean_object* v_remoteUrl_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v___y_1932_; lean_object* v_a_1933_; lean_object* v___f_1936_; lean_object* v___y_1938_; lean_object* v___y_1939_; lean_object* v___y_1940_; lean_object* v___y_1941_; lean_object* v_val_1942_; lean_object* v_pkgDir_1958_; lean_object* v_a_1960_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v_val_2002_; lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; 
v___f_1936_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1));
lean_inc_ref(v_relPkgDir_1927_);
v_pkgDir_1958_ = l_Lake_joinRelative(v_wsDir_1926_, v_relPkgDir_1927_);
v___x_1998_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3);
v___x_1999_ = lean_unsigned_to_nat(0u);
v___x_2000_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_pkgDir_1958_);
v___x_2017_ = l_Lake_resolvePath(v_pkgDir_1958_);
v___x_2018_ = lean_string_utf8_byte_size(v___x_2017_);
v___x_2019_ = lean_nat_dec_eq(v___x_2018_, v___x_1999_);
if (v___x_2019_ == 0)
{
lean_object* v___x_2020_; 
v___x_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2017_);
v_val_2002_ = v___x_2020_;
goto v___jp_2001_;
}
else
{
lean_object* v___x_2021_; 
lean_dec_ref(v___x_2017_);
v___x_2021_ = lean_box(0);
v_val_2002_ = v___x_2021_;
goto v___jp_2001_;
}
v___jp_1931_:
{
lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1934_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1934_, 0, v___y_1932_);
lean_ctor_set(v___x_1934_, 1, v_relPkgDir_1927_);
lean_ctor_set(v___x_1934_, 2, v_remoteUrl_1928_);
lean_ctor_set(v___x_1934_, 3, v_a_1933_);
lean_ctor_set(v___x_1934_, 4, v_manifestEntry_1925_);
v___x_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1934_);
return v___x_1935_;
}
v___jp_1937_:
{
lean_object* v___x_1943_; uint8_t v___x_1944_; 
v___x_1943_ = lean_array_get_size(v___y_1941_);
v___x_1944_ = lean_nat_dec_lt(v___y_1940_, v___x_1943_);
if (v___x_1944_ == 0)
{
v___y_1932_ = v___y_1938_;
v_a_1933_ = v_val_1942_;
goto v___jp_1931_;
}
else
{
lean_object* v___x_1945_; size_t v___x_1946_; size_t v___x_1947_; lean_object* v___x_1884__overap_1948_; lean_object* v___x_1949_; 
v___x_1945_ = lean_box(0);
v___x_1946_ = ((size_t)0ULL);
v___x_1947_ = lean_usize_of_nat(v___x_1943_);
lean_inc_ref(v___y_1941_);
lean_inc_ref(v___y_1939_);
v___x_1884__overap_1948_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___y_1939_, v___f_1936_, v___y_1941_, v___x_1946_, v___x_1947_, v___x_1945_);
lean_inc_ref(v___y_1929_);
v___x_1949_ = lean_apply_2(v___x_1884__overap_1948_, v___y_1929_, lean_box(0));
if (lean_obj_tag(v___x_1949_) == 0)
{
lean_dec_ref_known(v___x_1949_, 1);
v___y_1932_ = v___y_1938_;
v_a_1933_ = v_val_1942_;
goto v___jp_1931_;
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_dec_ref(v_val_1942_);
lean_dec_ref(v___y_1938_);
lean_dec_ref(v_remoteUrl_1928_);
lean_dec_ref(v_relPkgDir_1927_);
lean_dec_ref(v_manifestEntry_1925_);
v_a_1950_ = lean_ctor_get(v___x_1949_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1949_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1949_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1949_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
v___jp_1959_:
{
if (lean_obj_tag(v_a_1960_) == 1)
{
lean_object* v_manifestFile_x3f_1961_; 
lean_dec_ref(v_pkgDir_1958_);
v_manifestFile_x3f_1961_ = lean_ctor_get(v_manifestEntry_1925_, 3);
if (lean_obj_tag(v_manifestFile_x3f_1961_) == 1)
{
lean_object* v_val_1962_; lean_object* v_val_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; 
v_val_1962_ = lean_ctor_get(v_a_1960_, 0);
lean_inc_n(v_val_1962_, 2);
lean_dec_ref_known(v_a_1960_, 1);
v_val_1963_ = lean_ctor_get(v_manifestFile_x3f_1961_, 0);
lean_inc(v_val_1963_);
v___x_1964_ = l_Lake_joinRelative(v_val_1962_, v_val_1963_);
v___x_1965_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3);
v___x_1966_ = lean_unsigned_to_nat(0u);
v___x_1967_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_1968_ = l_Lake_Manifest_load(v___x_1964_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1968_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1968_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
lean_ctor_set_tag(v___x_1971_, 1);
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1969_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
v___y_1938_ = v_val_1962_;
v___y_1939_ = v___x_1965_;
v___y_1940_ = v___x_1966_;
v___y_1941_ = v___x_1967_;
v_val_1942_ = v___x_1974_;
goto v___jp_1937_;
}
}
}
else
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1984_; 
v_a_1977_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1979_ = v___x_1968_;
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v___x_1968_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
if (v_isShared_1980_ == 0)
{
lean_ctor_set_tag(v___x_1979_, 0);
v___x_1982_ = v___x_1979_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_a_1977_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
v___y_1938_ = v_val_1962_;
v___y_1939_ = v___x_1965_;
v___y_1940_ = v___x_1966_;
v___y_1941_ = v___x_1967_;
v_val_1942_ = v___x_1982_;
goto v___jp_1937_;
}
}
}
}
else
{
lean_object* v_val_1985_; lean_object* v___x_1986_; 
v_val_1985_ = lean_ctor_get(v_a_1960_, 0);
lean_inc(v_val_1985_);
lean_dec_ref_known(v_a_1960_, 1);
v___x_1986_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__1));
v___y_1932_ = v_val_1985_;
v_a_1933_ = v___x_1986_;
goto v___jp_1931_;
}
}
else
{
lean_object* v_name_1987_; uint8_t v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; uint8_t v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
lean_dec(v_a_1960_);
lean_dec_ref(v_remoteUrl_1928_);
lean_dec_ref(v_relPkgDir_1927_);
v_name_1987_ = lean_ctor_get(v_manifestEntry_1925_, 0);
lean_inc(v_name_1987_);
lean_dec_ref(v_manifestEntry_1925_);
v___x_1988_ = 0;
v___x_1989_ = l_Lean_Name_toString(v_name_1987_, v___x_1988_);
v___x_1990_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_1991_ = lean_string_append(v___x_1989_, v___x_1990_);
v___x_1992_ = lean_string_append(v___x_1991_, v_pkgDir_1958_);
lean_dec_ref(v_pkgDir_1958_);
v___x_1993_ = 3;
v___x_1994_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1994_, 0, v___x_1992_);
lean_ctor_set_uint8(v___x_1994_, sizeof(void*)*1, v___x_1993_);
lean_inc_ref(v___y_1929_);
v___x_1995_ = lean_apply_2(v___y_1929_, v___x_1994_, lean_box(0));
v___x_1996_ = lean_box(0);
v___x_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1997_, 0, v___x_1996_);
return v___x_1997_;
}
}
v___jp_2001_:
{
uint8_t v___x_2003_; 
v___x_2003_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_2003_ == 0)
{
v_a_1960_ = v_val_2002_;
goto v___jp_1959_;
}
else
{
lean_object* v___x_2004_; size_t v___x_2005_; size_t v___x_2006_; lean_object* v___x_1938__overap_2007_; lean_object* v___x_2008_; 
v___x_2004_ = lean_box(0);
v___x_2005_ = ((size_t)0ULL);
v___x_2006_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_1938__overap_2007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1998_, v___f_1936_, v___x_2000_, v___x_2005_, v___x_2006_, v___x_2004_);
lean_inc_ref(v___y_1929_);
v___x_2008_ = lean_apply_2(v___x_1938__overap_2007_, v___y_1929_, lean_box(0));
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_dec_ref_known(v___x_2008_, 1);
v_a_1960_ = v_val_2002_;
goto v___jp_1959_;
}
else
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
lean_dec(v_val_2002_);
lean_dec_ref(v_pkgDir_1958_);
lean_dec_ref(v_remoteUrl_1928_);
lean_dec_ref(v_relPkgDir_1927_);
lean_dec_ref(v_manifestEntry_1925_);
v_a_2009_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___x_2008_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___x_2008_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2014_; 
if (v_isShared_2012_ == 0)
{
v___x_2014_ = v___x_2011_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_a_2009_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___boxed(lean_object* v_manifestEntry_2022_, lean_object* v_wsDir_2023_, lean_object* v_relPkgDir_2024_, lean_object* v_remoteUrl_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep(v_manifestEntry_2022_, v_wsDir_2023_, v_relPkgDir_2024_, v_remoteUrl_2025_, v___y_2026_);
lean_dec_ref(v___y_2026_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_materialize(lean_object* v_manifestEntry_2029_, lean_object* v_lakeEnv_2030_, lean_object* v_wsDir_2031_, lean_object* v_relPkgsDir_2032_, lean_object* v___y_2033_){
_start:
{
lean_object* v___y_2036_; lean_object* v___y_2037_; lean_object* v___y_2038_; lean_object* v_a_2039_; lean_object* v___y_2043_; lean_object* v___y_2044_; lean_object* v___y_2045_; lean_object* v___y_2046_; lean_object* v___y_2047_; lean_object* v_val_2048_; lean_object* v_src_2063_; 
v_src_2063_ = lean_ctor_get(v_manifestEntry_2029_, 4);
lean_inc_ref(v_src_2063_);
if (lean_obj_tag(v_src_2063_) == 0)
{
lean_object* v_name_2064_; lean_object* v_manifestFile_x3f_2065_; lean_object* v_dir_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2156_; 
lean_dec_ref(v_relPkgsDir_2032_);
v_name_2064_ = lean_ctor_get(v_manifestEntry_2029_, 0);
v_manifestFile_x3f_2065_ = lean_ctor_get(v_manifestEntry_2029_, 3);
v_dir_2066_ = lean_ctor_get(v_src_2063_, 0);
v_isSharedCheck_2156_ = !lean_is_exclusive(v_src_2063_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2068_ = v_src_2063_;
v_isShared_2069_ = v_isSharedCheck_2156_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_dir_2066_);
lean_dec(v_src_2063_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2156_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2070_; lean_object* v___y_2072_; lean_object* v_a_2073_; lean_object* v___y_2079_; lean_object* v___y_2080_; lean_object* v___y_2081_; lean_object* v_val_2082_; lean_object* v_pkgDir_2097_; lean_object* v_a_2099_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v_val_2137_; lean_object* v___x_2151_; lean_object* v___x_2152_; uint8_t v___x_2153_; 
v___x_2070_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
lean_inc_ref(v_dir_2066_);
v_pkgDir_2097_ = l_Lake_joinRelative(v_wsDir_2031_, v_dir_2066_);
v___x_2134_ = lean_unsigned_to_nat(0u);
v___x_2135_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_pkgDir_2097_);
v___x_2151_ = l_Lake_resolvePath(v_pkgDir_2097_);
v___x_2152_ = lean_string_utf8_byte_size(v___x_2151_);
v___x_2153_ = lean_nat_dec_eq(v___x_2152_, v___x_2134_);
if (v___x_2153_ == 0)
{
lean_object* v___x_2154_; 
v___x_2154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2151_);
v_val_2137_ = v___x_2154_;
goto v___jp_2136_;
}
else
{
lean_object* v___x_2155_; 
lean_dec_ref(v___x_2151_);
v___x_2155_ = lean_box(0);
v_val_2137_ = v___x_2155_;
goto v___jp_2136_;
}
v___jp_2071_:
{
lean_object* v___x_2074_; lean_object* v___x_2076_; 
v___x_2074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2074_, 0, v___y_2072_);
lean_ctor_set(v___x_2074_, 1, v_dir_2066_);
lean_ctor_set(v___x_2074_, 2, v___x_2070_);
lean_ctor_set(v___x_2074_, 3, v_a_2073_);
lean_ctor_set(v___x_2074_, 4, v_manifestEntry_2029_);
if (v_isShared_2069_ == 0)
{
lean_ctor_set(v___x_2068_, 0, v___x_2074_);
v___x_2076_ = v___x_2068_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v___x_2074_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
v___jp_2078_:
{
lean_object* v___x_2083_; uint8_t v___x_2084_; 
v___x_2083_ = lean_array_get_size(v___y_2079_);
v___x_2084_ = lean_nat_dec_lt(v___y_2081_, v___x_2083_);
if (v___x_2084_ == 0)
{
v___y_2072_ = v___y_2080_;
v_a_2073_ = v_val_2082_;
goto v___jp_2071_;
}
else
{
lean_object* v___x_2085_; size_t v___x_2086_; size_t v___x_2087_; lean_object* v___x_2088_; 
v___x_2085_ = lean_box(0);
v___x_2086_ = ((size_t)0ULL);
v___x_2087_ = lean_usize_of_nat(v___x_2083_);
v___x_2088_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_2079_, v___x_2086_, v___x_2087_, v___x_2085_, v___y_2033_);
if (lean_obj_tag(v___x_2088_) == 0)
{
lean_dec_ref_known(v___x_2088_, 1);
v___y_2072_ = v___y_2080_;
v_a_2073_ = v_val_2082_;
goto v___jp_2071_;
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
lean_dec_ref(v_val_2082_);
lean_dec_ref(v___y_2080_);
lean_del_object(v___x_2068_);
lean_dec_ref(v_dir_2066_);
lean_dec_ref(v_manifestEntry_2029_);
v_a_2089_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_2088_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2088_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2089_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
}
v___jp_2098_:
{
if (lean_obj_tag(v_a_2099_) == 1)
{
lean_dec_ref(v_pkgDir_2097_);
if (lean_obj_tag(v_manifestFile_x3f_2065_) == 1)
{
lean_object* v_val_2100_; lean_object* v_val_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v_val_2100_ = lean_ctor_get(v_a_2099_, 0);
lean_inc_n(v_val_2100_, 2);
lean_dec_ref_known(v_a_2099_, 1);
v_val_2101_ = lean_ctor_get(v_manifestFile_x3f_2065_, 0);
lean_inc(v_val_2101_);
v___x_2102_ = l_Lake_joinRelative(v_val_2100_, v_val_2101_);
v___x_2103_ = lean_unsigned_to_nat(0u);
v___x_2104_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_2105_ = l_Lake_Manifest_load(v___x_2102_);
if (lean_obj_tag(v___x_2105_) == 0)
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
v_a_2106_ = lean_ctor_get(v___x_2105_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2105_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2105_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
lean_ctor_set_tag(v___x_2108_, 1);
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
v___y_2079_ = v___x_2104_;
v___y_2080_ = v_val_2100_;
v___y_2081_ = v___x_2103_;
v_val_2082_ = v___x_2111_;
goto v___jp_2078_;
}
}
}
else
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2121_; 
v_a_2114_ = lean_ctor_get(v___x_2105_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2116_ = v___x_2105_;
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2105_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2119_; 
if (v_isShared_2117_ == 0)
{
lean_ctor_set_tag(v___x_2116_, 0);
v___x_2119_ = v___x_2116_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_a_2114_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
v___y_2079_ = v___x_2104_;
v___y_2080_ = v_val_2100_;
v___y_2081_ = v___x_2103_;
v_val_2082_ = v___x_2119_;
goto v___jp_2078_;
}
}
}
}
else
{
lean_object* v_val_2122_; lean_object* v___x_2123_; 
v_val_2122_ = lean_ctor_get(v_a_2099_, 0);
lean_inc(v_val_2122_);
lean_dec_ref_known(v_a_2099_, 1);
v___x_2123_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__1));
v___y_2072_ = v_val_2122_;
v_a_2073_ = v___x_2123_;
goto v___jp_2071_;
}
}
else
{
uint8_t v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
lean_inc(v_name_2064_);
lean_dec(v_a_2099_);
lean_del_object(v___x_2068_);
lean_dec_ref(v_dir_2066_);
lean_dec_ref(v_manifestEntry_2029_);
v___x_2124_ = 0;
v___x_2125_ = l_Lean_Name_toString(v_name_2064_, v___x_2124_);
v___x_2126_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_2127_ = lean_string_append(v___x_2125_, v___x_2126_);
v___x_2128_ = lean_string_append(v___x_2127_, v_pkgDir_2097_);
lean_dec_ref(v_pkgDir_2097_);
v___x_2129_ = 3;
v___x_2130_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2130_, 0, v___x_2128_);
lean_ctor_set_uint8(v___x_2130_, sizeof(void*)*1, v___x_2129_);
lean_inc_ref(v___y_2033_);
v___x_2131_ = lean_apply_2(v___y_2033_, v___x_2130_, lean_box(0));
v___x_2132_ = lean_box(0);
v___x_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
return v___x_2133_;
}
}
v___jp_2136_:
{
uint8_t v___x_2138_; 
v___x_2138_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6);
if (v___x_2138_ == 0)
{
v_a_2099_ = v_val_2137_;
goto v___jp_2098_;
}
else
{
lean_object* v___x_2139_; size_t v___x_2140_; size_t v___x_2141_; lean_object* v___x_2142_; 
v___x_2139_ = lean_box(0);
v___x_2140_ = ((size_t)0ULL);
v___x_2141_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7);
v___x_2142_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_2135_, v___x_2140_, v___x_2141_, v___x_2139_, v___y_2033_);
if (lean_obj_tag(v___x_2142_) == 0)
{
lean_dec_ref_known(v___x_2142_, 1);
v_a_2099_ = v_val_2137_;
goto v___jp_2098_;
}
else
{
lean_object* v_a_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2150_; 
lean_dec(v_val_2137_);
lean_dec_ref(v_pkgDir_2097_);
lean_del_object(v___x_2068_);
lean_dec_ref(v_dir_2066_);
lean_dec_ref(v_manifestEntry_2029_);
v_a_2143_ = lean_ctor_get(v___x_2142_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2142_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2145_ = v___x_2142_;
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_a_2143_);
lean_dec(v___x_2142_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
if (v_isShared_2146_ == 0)
{
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_a_2143_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
}
}
}
else
{
lean_object* v_name_2157_; lean_object* v_manifestFile_x3f_2158_; lean_object* v_url_2159_; lean_object* v_rev_2160_; lean_object* v_subDir_x3f_2161_; lean_object* v_pkgUrlMap_2162_; uint8_t v___x_2163_; lean_object* v___x_2164_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v_a_2169_; lean_object* v___y_2203_; lean_object* v___y_2204_; lean_object* v___y_2205_; lean_object* v___y_2206_; lean_object* v___y_2207_; lean_object* v_val_2208_; lean_object* v_relGitDir_2223_; lean_object* v_repo_2224_; lean_object* v_url_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v_name_2157_ = lean_ctor_get(v_manifestEntry_2029_, 0);
v_manifestFile_x3f_2158_ = lean_ctor_get(v_manifestEntry_2029_, 3);
v_url_2159_ = lean_ctor_get(v_src_2063_, 0);
lean_inc_ref(v_url_2159_);
v_rev_2160_ = lean_ctor_get(v_src_2063_, 1);
lean_inc_ref(v_rev_2160_);
v_subDir_x3f_2161_ = lean_ctor_get(v_src_2063_, 3);
lean_inc(v_subDir_x3f_2161_);
lean_dec_ref_known(v_src_2063_, 4);
v_pkgUrlMap_2162_ = lean_ctor_get(v_lakeEnv_2030_, 5);
v___x_2163_ = 0;
lean_inc(v_name_2157_);
v___x_2164_ = l_Lean_Name_toString(v_name_2157_, v___x_2163_);
lean_inc_ref_n(v___x_2164_, 2);
v_relGitDir_2223_ = l_Lake_joinRelative(v_relPkgsDir_2032_, v___x_2164_);
lean_inc_ref(v_relGitDir_2223_);
lean_inc_ref(v_wsDir_2031_);
v_repo_2224_ = l_Lake_joinRelative(v_wsDir_2031_, v_relGitDir_2223_);
v_url_2225_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_pkgUrlMap_2162_, v_name_2157_, v_url_2159_);
lean_dec_ref(v_url_2159_);
v___x_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2226_, 0, v_rev_2160_);
lean_inc(v_url_2225_);
v___x_2227_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo(v___x_2164_, v_repo_2224_, v_url_2225_, v___x_2226_, v___y_2033_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v___y_2229_; lean_object* v___y_2230_; lean_object* v___y_2240_; 
lean_dec_ref_known(v___x_2227_, 1);
if (lean_obj_tag(v_subDir_x3f_2161_) == 0)
{
v___y_2240_ = v_relGitDir_2223_;
goto v___jp_2239_;
}
else
{
lean_object* v_val_2244_; lean_object* v___x_2245_; 
v_val_2244_ = lean_ctor_get(v_subDir_x3f_2161_, 0);
lean_inc(v_val_2244_);
lean_dec_ref_known(v_subDir_x3f_2161_, 1);
v___x_2245_ = l_Lake_joinRelative(v_relGitDir_2223_, v_val_2244_);
v___y_2240_ = v___x_2245_;
goto v___jp_2239_;
}
v___jp_2228_:
{
lean_object* v_pkgDir_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; uint8_t v___x_2236_; 
lean_inc_ref(v___y_2229_);
v_pkgDir_2231_ = l_Lake_joinRelative(v_wsDir_2031_, v___y_2229_);
v___x_2232_ = lean_unsigned_to_nat(0u);
v___x_2233_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
lean_inc_ref(v_pkgDir_2231_);
v___x_2234_ = l_Lake_resolvePath(v_pkgDir_2231_);
v___x_2235_ = lean_string_utf8_byte_size(v___x_2234_);
v___x_2236_ = lean_nat_dec_eq(v___x_2235_, v___x_2232_);
if (v___x_2236_ == 0)
{
lean_object* v___x_2237_; 
v___x_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2234_);
v___y_2203_ = v_pkgDir_2231_;
v___y_2204_ = v___x_2233_;
v___y_2205_ = v___y_2229_;
v___y_2206_ = v___y_2230_;
v___y_2207_ = v___x_2232_;
v_val_2208_ = v___x_2237_;
goto v___jp_2202_;
}
else
{
lean_object* v___x_2238_; 
lean_dec_ref(v___x_2234_);
v___x_2238_ = lean_box(0);
v___y_2203_ = v_pkgDir_2231_;
v___y_2204_ = v___x_2233_;
v___y_2205_ = v___y_2229_;
v___y_2206_ = v___y_2230_;
v___y_2207_ = v___x_2232_;
v_val_2208_ = v___x_2238_;
goto v___jp_2202_;
}
}
v___jp_2239_:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Lake_Git_filterUrl_x3f(v_url_2225_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v___x_2242_; 
v___x_2242_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
v___y_2229_ = v___y_2240_;
v___y_2230_ = v___x_2242_;
goto v___jp_2228_;
}
else
{
lean_object* v_val_2243_; 
v_val_2243_ = lean_ctor_get(v___x_2241_, 0);
lean_inc(v_val_2243_);
lean_dec_ref_known(v___x_2241_, 1);
v___y_2229_ = v___y_2240_;
v___y_2230_ = v_val_2243_;
goto v___jp_2228_;
}
}
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
lean_dec(v_url_2225_);
lean_dec_ref(v_relGitDir_2223_);
lean_dec_ref(v___x_2164_);
lean_dec(v_subDir_x3f_2161_);
lean_dec_ref(v_wsDir_2031_);
lean_dec_ref(v_manifestEntry_2029_);
v_a_2246_ = lean_ctor_get(v___x_2227_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___x_2227_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2227_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
v___jp_2165_:
{
if (lean_obj_tag(v_a_2169_) == 1)
{
lean_dec_ref(v___y_2166_);
lean_dec_ref(v___x_2164_);
if (lean_obj_tag(v_manifestFile_x3f_2158_) == 1)
{
lean_object* v_val_2170_; lean_object* v_val_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v_val_2170_ = lean_ctor_get(v_a_2169_, 0);
lean_inc_n(v_val_2170_, 2);
lean_dec_ref_known(v_a_2169_, 1);
v_val_2171_ = lean_ctor_get(v_manifestFile_x3f_2158_, 0);
lean_inc(v_val_2171_);
v___x_2172_ = l_Lake_joinRelative(v_val_2170_, v_val_2171_);
v___x_2173_ = lean_unsigned_to_nat(0u);
v___x_2174_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4));
v___x_2175_ = l_Lake_Manifest_load(v___x_2172_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2175_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2175_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
lean_ctor_set_tag(v___x_2178_, 1);
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
v___y_2043_ = v___x_2174_;
v___y_2044_ = v_val_2170_;
v___y_2045_ = v___y_2167_;
v___y_2046_ = v___y_2168_;
v___y_2047_ = v___x_2173_;
v_val_2048_ = v___x_2181_;
goto v___jp_2042_;
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
v_a_2184_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2175_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2175_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
lean_ctor_set_tag(v___x_2186_, 0);
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
v___y_2043_ = v___x_2174_;
v___y_2044_ = v_val_2170_;
v___y_2045_ = v___y_2167_;
v___y_2046_ = v___y_2168_;
v___y_2047_ = v___x_2173_;
v_val_2048_ = v___x_2189_;
goto v___jp_2042_;
}
}
}
}
else
{
lean_object* v_val_2192_; lean_object* v___x_2193_; 
v_val_2192_ = lean_ctor_get(v_a_2169_, 0);
lean_inc(v_val_2192_);
lean_dec_ref_known(v_a_2169_, 1);
v___x_2193_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__1));
v___y_2036_ = v_val_2192_;
v___y_2037_ = v___y_2167_;
v___y_2038_ = v___y_2168_;
v_a_2039_ = v___x_2193_;
goto v___jp_2035_;
}
}
else
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; uint8_t v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
lean_dec(v_a_2169_);
lean_dec_ref(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec_ref(v_manifestEntry_2029_);
v___x_2194_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_2195_ = lean_string_append(v___x_2164_, v___x_2194_);
v___x_2196_ = lean_string_append(v___x_2195_, v___y_2166_);
lean_dec_ref(v___y_2166_);
v___x_2197_ = 3;
v___x_2198_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2198_, 0, v___x_2196_);
lean_ctor_set_uint8(v___x_2198_, sizeof(void*)*1, v___x_2197_);
lean_inc_ref(v___y_2033_);
v___x_2199_ = lean_apply_2(v___y_2033_, v___x_2198_, lean_box(0));
v___x_2200_ = lean_box(0);
v___x_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2200_);
return v___x_2201_;
}
}
v___jp_2202_:
{
lean_object* v___x_2209_; uint8_t v___x_2210_; 
v___x_2209_ = lean_array_get_size(v___y_2204_);
v___x_2210_ = lean_nat_dec_lt(v___y_2207_, v___x_2209_);
if (v___x_2210_ == 0)
{
v___y_2166_ = v___y_2203_;
v___y_2167_ = v___y_2205_;
v___y_2168_ = v___y_2206_;
v_a_2169_ = v_val_2208_;
goto v___jp_2165_;
}
else
{
lean_object* v___x_2211_; size_t v___x_2212_; size_t v___x_2213_; lean_object* v___x_2214_; 
v___x_2211_ = lean_box(0);
v___x_2212_ = ((size_t)0ULL);
v___x_2213_ = lean_usize_of_nat(v___x_2209_);
v___x_2214_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_2204_, v___x_2212_, v___x_2213_, v___x_2211_, v___y_2033_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_dec_ref_known(v___x_2214_, 1);
v___y_2166_ = v___y_2203_;
v___y_2167_ = v___y_2205_;
v___y_2168_ = v___y_2206_;
v_a_2169_ = v_val_2208_;
goto v___jp_2165_;
}
else
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2222_; 
lean_dec(v_val_2208_);
lean_dec_ref(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec_ref(v___y_2203_);
lean_dec_ref(v___x_2164_);
lean_dec_ref(v_manifestEntry_2029_);
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2217_ = v___x_2214_;
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_a_2215_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
}
}
}
v___jp_2035_:
{
lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2040_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2040_, 0, v___y_2036_);
lean_ctor_set(v___x_2040_, 1, v___y_2037_);
lean_ctor_set(v___x_2040_, 2, v___y_2038_);
lean_ctor_set(v___x_2040_, 3, v_a_2039_);
lean_ctor_set(v___x_2040_, 4, v_manifestEntry_2029_);
v___x_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
return v___x_2041_;
}
v___jp_2042_:
{
lean_object* v___x_2049_; uint8_t v___x_2050_; 
v___x_2049_ = lean_array_get_size(v___y_2043_);
v___x_2050_ = lean_nat_dec_lt(v___y_2047_, v___x_2049_);
if (v___x_2050_ == 0)
{
v___y_2036_ = v___y_2044_;
v___y_2037_ = v___y_2045_;
v___y_2038_ = v___y_2046_;
v_a_2039_ = v_val_2048_;
goto v___jp_2035_;
}
else
{
lean_object* v___x_2051_; size_t v___x_2052_; size_t v___x_2053_; lean_object* v___x_2054_; 
v___x_2051_ = lean_box(0);
v___x_2052_ = ((size_t)0ULL);
v___x_2053_ = lean_usize_of_nat(v___x_2049_);
v___x_2054_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_2043_, v___x_2052_, v___x_2053_, v___x_2051_, v___y_2033_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_dec_ref_known(v___x_2054_, 1);
v___y_2036_ = v___y_2044_;
v___y_2037_ = v___y_2045_;
v___y_2038_ = v___y_2046_;
v_a_2039_ = v_val_2048_;
goto v___jp_2035_;
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
lean_dec_ref(v_val_2048_);
lean_dec_ref(v___y_2046_);
lean_dec_ref(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec_ref(v_manifestEntry_2029_);
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_2054_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2054_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
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
LEAN_EXPORT lean_object* l_Lake_PackageEntry_materialize___boxed(lean_object* v_manifestEntry_2254_, lean_object* v_lakeEnv_2255_, lean_object* v_wsDir_2256_, lean_object* v_relPkgsDir_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v_res_2260_; 
v_res_2260_ = l_Lake_PackageEntry_materialize(v_manifestEntry_2254_, v_lakeEnv_2255_, v_wsDir_2256_, v_relPkgsDir_2257_, v___y_2258_);
lean_dec_ref(v___y_2258_);
lean_dec_ref(v_lakeEnv_2255_);
return v_res_2260_;
}
}
lean_object* runtime_initialize_Lake_Config_Env(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Package(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Git(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Reservoir(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Load_Materialize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Env(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Git(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Reservoir(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instInhabitedMaterializedDep_default = _init_l_Lake_instInhabitedMaterializedDep_default();
lean_mark_persistent(l_Lake_instInhabitedMaterializedDep_default);
l_Lake_instInhabitedMaterializedDep = _init_l_Lake_instInhabitedMaterializedDep();
lean_mark_persistent(l_Lake_instInhabitedMaterializedDep);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Load_Materialize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Env(uint8_t builtin);
lean_object* initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* initialize_Lake_Config_Package(uint8_t builtin);
lean_object* initialize_Lake_Util_Git(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Reservoir(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Load_Materialize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Env(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Git(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Reservoir(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Materialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Load_Materialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Load_Materialize(builtin);
}
#ifdef __cplusplus
}
#endif
