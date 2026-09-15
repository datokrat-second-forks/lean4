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
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__2 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__2_value;
static const lean_closure_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_value;
static const lean_closure_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4_value;
static const lean_closure_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5_value;
static const lean_closure_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_value;
static const lean_closure_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__6_value),((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5_value)} };
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_value;
static const lean_closure_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5_value)} };
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__8 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__8_value;
static const lean_closure_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__9 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__9_value;
static const lean_ctor_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__2_value),((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__3_value)}};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__10 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__10_value;
static const lean_ctor_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__10_value),((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__4_value),((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__7_value),((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__8_value),((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__9_value)}};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__11 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__11_value;
static const lean_ctor_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__11_value),((lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__5_value)}};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__12 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__12_value;
static lean_once_cell_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13;
static const lean_array_object l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14 = (const lean_object*)&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14_value;
static lean_once_cell_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__15;
static lean_once_cell_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16;
static lean_once_cell_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17;
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
static lean_object* _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__12));
v___x_38_ = l_ReaderT_instMonad___redArg(v___x_37_);
return v___x_38_;
}
}
static lean_object* _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__15(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_42_ = lean_array_get_size(v___x_41_);
return v___x_42_;
}
}
static uint8_t _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; uint8_t v___x_45_; 
v___x_43_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__15, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__15_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__15);
v___x_44_ = lean_unsigned_to_nat(0u);
v___x_45_ = lean_nat_dec_lt(v___x_44_, v___x_43_);
return v___x_45_;
}
}
static size_t _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17(void){
_start:
{
lean_object* v___x_46_; size_t v___x_47_; 
v___x_46_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__15, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__15_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__15);
v___x_47_ = lean_usize_of_nat(v___x_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl(lean_object* v_name_48_, lean_object* v_url_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_a_53_; lean_object* v___f_70_; lean_object* v___y_72_; lean_object* v___y_73_; lean_object* v___y_74_; lean_object* v_val_75_; uint8_t v_a_92_; lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; uint8_t v___x_105_; 
v___f_70_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1));
v___x_102_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13);
v___x_103_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_104_ = l_System_FilePath_pathExists(v_url_49_);
v___x_105_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_105_ == 0)
{
v_a_92_ = v___x_104_;
goto v___jp_91_;
}
else
{
lean_object* v___x_106_; size_t v___x_107_; size_t v___x_108_; lean_object* v___x_2419__overap_109_; lean_object* v___x_110_; 
v___x_106_ = lean_box(0);
v___x_107_ = ((size_t)0ULL);
v___x_108_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_2419__overap_109_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_102_, v___f_70_, v___x_103_, v___x_107_, v___x_108_, v___x_106_);
lean_inc_ref(v___y_50_);
v___x_110_ = lean_apply_2(v___x_2419__overap_109_, v___y_50_, lean_box(0));
if (lean_obj_tag(v___x_110_) == 0)
{
lean_dec_ref_known(v___x_110_, 1);
v_a_92_ = v___x_104_;
goto v___jp_91_;
}
else
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_118_; 
lean_dec_ref(v_url_49_);
lean_dec_ref(v_name_48_);
v_a_111_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_118_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_118_ == 0)
{
v___x_113_ = v___x_110_;
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_110_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_118_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v_a_111_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
v___jp_52_:
{
if (lean_obj_tag(v_a_53_) == 1)
{
lean_object* v_val_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
lean_dec_ref(v_url_49_);
lean_dec_ref(v_name_48_);
v_val_54_ = lean_ctor_get(v_a_53_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v_a_53_);
if (v_isSharedCheck_61_ == 0)
{
v___x_56_ = v_a_53_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_val_54_);
lean_dec(v_a_53_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
lean_ctor_set_tag(v___x_56_, 0);
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_val_54_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
else
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec(v_a_53_);
v___x_62_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__0));
v___x_63_ = lean_string_append(v_name_48_, v___x_62_);
v___x_64_ = lean_string_append(v___x_63_, v_url_49_);
lean_dec_ref(v_url_49_);
v___x_65_ = 3;
v___x_66_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set_uint8(v___x_66_, sizeof(void*)*1, v___x_65_);
lean_inc_ref(v___y_50_);
v___x_67_ = lean_apply_2(v___y_50_, v___x_66_, lean_box(0));
v___x_68_ = lean_box(0);
v___x_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
}
v___jp_71_:
{
lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_76_ = lean_array_get_size(v___y_74_);
v___x_77_ = lean_nat_dec_lt(v___y_72_, v___x_76_);
if (v___x_77_ == 0)
{
v_a_53_ = v_val_75_;
goto v___jp_52_;
}
else
{
lean_object* v___x_78_; size_t v___x_79_; size_t v___x_80_; lean_object* v___x_2374__overap_81_; lean_object* v___x_82_; 
v___x_78_ = lean_box(0);
v___x_79_ = ((size_t)0ULL);
v___x_80_ = lean_usize_of_nat(v___x_76_);
lean_inc_ref(v___y_74_);
lean_inc_ref(v___y_73_);
v___x_2374__overap_81_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___y_73_, v___f_70_, v___y_74_, v___x_79_, v___x_80_, v___x_78_);
lean_inc_ref(v___y_50_);
v___x_82_ = lean_apply_2(v___x_2374__overap_81_, v___y_50_, lean_box(0));
if (lean_obj_tag(v___x_82_) == 0)
{
lean_dec_ref_known(v___x_82_, 1);
v_a_53_ = v_val_75_;
goto v___jp_52_;
}
else
{
lean_object* v_a_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_90_; 
lean_dec(v_val_75_);
lean_dec_ref(v_url_49_);
lean_dec_ref(v_name_48_);
v_a_83_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_90_ == 0)
{
v___x_85_ = v___x_82_;
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_a_83_);
lean_dec(v___x_82_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_88_; 
if (v_isShared_86_ == 0)
{
v___x_88_ = v___x_85_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_a_83_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
}
}
v___jp_91_:
{
if (v_a_92_ == 0)
{
lean_object* v___x_93_; 
lean_dec_ref(v_name_48_);
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v_url_49_);
return v___x_93_;
}
else
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_94_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13);
v___x_95_ = lean_unsigned_to_nat(0u);
v___x_96_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_url_49_);
v___x_97_ = l_Lake_resolvePath(v_url_49_);
v___x_98_ = lean_string_utf8_byte_size(v___x_97_);
v___x_99_ = lean_nat_dec_eq(v___x_98_, v___x_95_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
v___x_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_97_);
v___y_72_ = v___x_95_;
v___y_73_ = v___x_94_;
v___y_74_ = v___x_96_;
v_val_75_ = v___x_100_;
goto v___jp_71_;
}
else
{
lean_object* v___x_101_; 
lean_dec_ref(v___x_97_);
v___x_101_ = lean_box(0);
v___y_72_ = v___x_95_;
v___y_73_ = v___x_94_;
v___y_74_ = v___x_96_;
v_val_75_ = v___x_101_;
goto v___jp_71_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___boxed(lean_object* v_name_119_, lean_object* v_url_120_, lean_object* v___y_121_, lean_object* v___y_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl(v_name_119_, v_url_120_, v___y_121_);
lean_dec_ref(v___y_121_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff(lean_object* v_name_125_, lean_object* v_repo_126_, lean_object* v___y_127_){
_start:
{
uint8_t v_a_130_; lean_object* v___f_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v_val_144_; uint8_t v___x_151_; 
v___f_140_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1));
v___x_141_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13);
v___x_142_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_126_);
v___x_151_ = l_Lake_GitRepo_hasNoDiff(v_repo_126_);
if (v___x_151_ == 0)
{
uint8_t v___x_152_; 
v___x_152_ = 1;
v_val_144_ = v___x_152_;
goto v___jp_143_;
}
else
{
uint8_t v___x_153_; 
v___x_153_ = 0;
v_val_144_ = v___x_153_;
goto v___jp_143_;
}
v___jp_129_:
{
if (v_a_130_ == 0)
{
lean_object* v___x_131_; lean_object* v___x_132_; 
lean_dec_ref(v_repo_126_);
lean_dec_ref(v_name_125_);
v___x_131_ = lean_box(0);
v___x_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
return v___x_132_;
}
else
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_133_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_134_ = lean_string_append(v_name_125_, v___x_133_);
v___x_135_ = lean_string_append(v___x_134_, v_repo_126_);
lean_dec_ref(v_repo_126_);
v___x_136_ = 2;
v___x_137_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_137_, 0, v___x_135_);
lean_ctor_set_uint8(v___x_137_, sizeof(void*)*1, v___x_136_);
lean_inc_ref(v___y_127_);
v___x_138_ = lean_apply_2(v___y_127_, v___x_137_, lean_box(0));
v___x_139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
return v___x_139_;
}
}
v___jp_143_:
{
uint8_t v___x_145_; 
v___x_145_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_145_ == 0)
{
v_a_130_ = v_val_144_;
goto v___jp_129_;
}
else
{
lean_object* v___x_146_; size_t v___x_147_; size_t v___x_148_; lean_object* v___x_1420__overap_149_; lean_object* v___x_150_; 
v___x_146_ = lean_box(0);
v___x_147_ = ((size_t)0ULL);
v___x_148_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_1420__overap_149_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_141_, v___f_140_, v___x_142_, v___x_147_, v___x_148_, v___x_146_);
lean_inc_ref(v___y_127_);
v___x_150_ = lean_apply_2(v___x_1420__overap_149_, v___y_127_, lean_box(0));
if (lean_obj_tag(v___x_150_) == 0)
{
lean_dec_ref_known(v___x_150_, 1);
v_a_130_ = v_val_144_;
goto v___jp_129_;
}
else
{
lean_dec_ref(v_repo_126_);
lean_dec_ref(v_name_125_);
return v___x_150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___boxed(lean_object* v_name_154_, lean_object* v_repo_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff(v_name_154_, v_repo_155_, v___y_156_);
lean_dec_ref(v___y_156_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout(lean_object* v_name_161_, lean_object* v_repo_162_, lean_object* v_rev_163_, lean_object* v___y_164_){
_start:
{
uint8_t v_a_167_; lean_object* v___f_177_; lean_object* v___y_179_; lean_object* v___y_180_; lean_object* v___y_181_; uint8_t v_val_182_; lean_object* v___y_198_; lean_object* v___y_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___f_177_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1));
v___x_232_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__0));
lean_inc_ref(v_name_161_);
v___x_233_ = lean_string_append(v_name_161_, v___x_232_);
v___x_234_ = lean_string_append(v___x_233_, v_rev_163_);
v___x_235_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__1));
v___x_236_ = lean_string_append(v___x_234_, v___x_235_);
v___x_237_ = 1;
v___x_238_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_238_, 0, v___x_236_);
lean_ctor_set_uint8(v___x_238_, sizeof(void*)*1, v___x_237_);
lean_inc_ref(v___y_164_);
v___x_239_ = lean_apply_2(v___y_164_, v___x_238_, lean_box(0));
v___x_240_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13);
v___x_241_ = lean_unsigned_to_nat(0u);
v___x_242_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_162_);
v___x_243_ = l_Lake_GitRepo_checkoutDetach(v_rev_163_, v_repo_162_, v___x_242_);
if (lean_obj_tag(v___x_243_) == 0)
{
lean_object* v_a_244_; lean_object* v___x_245_; uint8_t v___x_246_; 
v_a_244_ = lean_ctor_get(v___x_243_, 1);
lean_inc(v_a_244_);
lean_dec_ref_known(v___x_243_, 2);
v___x_245_ = lean_array_get_size(v_a_244_);
v___x_246_ = lean_nat_dec_lt(v___x_241_, v___x_245_);
if (v___x_246_ == 0)
{
lean_dec(v_a_244_);
goto v___jp_199_;
}
else
{
lean_object* v___x_247_; size_t v___x_248_; size_t v___x_249_; lean_object* v___x_3039__overap_250_; lean_object* v___x_251_; 
v___x_247_ = lean_box(0);
v___x_248_ = ((size_t)0ULL);
v___x_249_ = lean_usize_of_nat(v___x_245_);
v___x_3039__overap_250_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_240_, v___f_177_, v_a_244_, v___x_248_, v___x_249_, v___x_247_);
lean_inc_ref(v___y_164_);
v___x_251_ = lean_apply_2(v___x_3039__overap_250_, v___y_164_, lean_box(0));
if (lean_obj_tag(v___x_251_) == 0)
{
lean_dec_ref_known(v___x_251_, 1);
goto v___jp_199_;
}
else
{
v___y_231_ = v___x_251_;
goto v___jp_230_;
}
}
}
else
{
lean_object* v_a_252_; lean_object* v___x_253_; uint8_t v___x_254_; 
v_a_252_ = lean_ctor_get(v___x_243_, 1);
lean_inc(v_a_252_);
lean_dec_ref_known(v___x_243_, 2);
v___x_253_ = lean_array_get_size(v_a_252_);
v___x_254_ = lean_nat_dec_lt(v___x_241_, v___x_253_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; lean_object* v___x_256_; 
lean_dec(v_a_252_);
lean_dec_ref(v_repo_162_);
lean_dec_ref(v_name_161_);
v___x_255_ = lean_box(0);
v___x_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
return v___x_256_;
}
else
{
lean_object* v___x_257_; size_t v___x_258_; size_t v___x_259_; lean_object* v___x_3056__overap_260_; lean_object* v___x_261_; 
v___x_257_ = lean_box(0);
v___x_258_ = ((size_t)0ULL);
v___x_259_ = lean_usize_of_nat(v___x_253_);
v___x_3056__overap_260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_240_, v___f_177_, v_a_252_, v___x_258_, v___x_259_, v___x_257_);
lean_inc_ref(v___y_164_);
v___x_261_ = lean_apply_2(v___x_3056__overap_260_, v___y_164_, lean_box(0));
if (lean_obj_tag(v___x_261_) == 0)
{
lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
lean_dec_ref(v_repo_162_);
lean_dec_ref(v_name_161_);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_261_);
if (v_isSharedCheck_268_ == 0)
{
lean_object* v_unused_269_; 
v_unused_269_ = lean_ctor_get(v___x_261_, 0);
lean_dec(v_unused_269_);
v___x_263_ = v___x_261_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_dec(v___x_261_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
lean_ctor_set_tag(v___x_263_, 1);
lean_ctor_set(v___x_263_, 0, v___x_257_);
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_257_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
else
{
v___y_231_ = v___x_261_;
goto v___jp_230_;
}
}
}
v___jp_166_:
{
if (v_a_167_ == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_dec_ref(v_repo_162_);
lean_dec_ref(v_name_161_);
v___x_168_ = lean_box(0);
v___x_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
return v___x_169_;
}
else
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_170_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_171_ = lean_string_append(v_name_161_, v___x_170_);
v___x_172_ = lean_string_append(v___x_171_, v_repo_162_);
lean_dec_ref(v_repo_162_);
v___x_173_ = 2;
v___x_174_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_174_, 0, v___x_172_);
lean_ctor_set_uint8(v___x_174_, sizeof(void*)*1, v___x_173_);
lean_inc_ref(v___y_164_);
v___x_175_ = lean_apply_2(v___y_164_, v___x_174_, lean_box(0));
v___x_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
}
v___jp_178_:
{
lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_183_ = lean_array_get_size(v___y_180_);
v___x_184_ = lean_nat_dec_lt(v___y_181_, v___x_183_);
if (v___x_184_ == 0)
{
v_a_167_ = v_val_182_;
goto v___jp_166_;
}
else
{
lean_object* v___x_185_; size_t v___x_186_; size_t v___x_187_; lean_object* v___x_2958__overap_188_; lean_object* v___x_189_; 
v___x_185_ = lean_box(0);
v___x_186_ = ((size_t)0ULL);
v___x_187_ = lean_usize_of_nat(v___x_183_);
lean_inc_ref(v___y_180_);
lean_inc_ref(v___y_179_);
v___x_2958__overap_188_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___y_179_, v___f_177_, v___y_180_, v___x_186_, v___x_187_, v___x_185_);
lean_inc_ref(v___y_164_);
v___x_189_ = lean_apply_2(v___x_2958__overap_188_, v___y_164_, lean_box(0));
if (lean_obj_tag(v___x_189_) == 0)
{
lean_dec_ref_known(v___x_189_, 1);
v_a_167_ = v_val_182_;
goto v___jp_166_;
}
else
{
lean_dec_ref(v_repo_162_);
lean_dec_ref(v_name_161_);
return v___x_189_;
}
}
}
v___jp_190_:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v___x_191_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13);
v___x_192_ = lean_unsigned_to_nat(0u);
v___x_193_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_162_);
v___x_194_ = l_Lake_GitRepo_hasNoDiff(v_repo_162_);
if (v___x_194_ == 0)
{
uint8_t v___x_195_; 
v___x_195_ = 1;
v___y_179_ = v___x_191_;
v___y_180_ = v___x_193_;
v___y_181_ = v___x_192_;
v_val_182_ = v___x_195_;
goto v___jp_178_;
}
else
{
uint8_t v___x_196_; 
v___x_196_ = 0;
v___y_179_ = v___x_191_;
v___y_180_ = v___x_193_;
v___y_181_ = v___x_192_;
v_val_182_ = v___x_196_;
goto v___jp_178_;
}
}
v___jp_197_:
{
if (lean_obj_tag(v___y_198_) == 0)
{
lean_dec_ref_known(v___y_198_, 1);
goto v___jp_190_;
}
else
{
lean_dec_ref(v_repo_162_);
lean_dec_ref(v_name_161_);
return v___y_198_;
}
}
v___jp_199_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_200_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13);
v___x_201_ = lean_unsigned_to_nat(0u);
v___x_202_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_162_);
v___x_203_ = l_Lake_GitRepo_clean(v_repo_162_, v___x_202_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v_a_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v_a_204_ = lean_ctor_get(v___x_203_, 1);
lean_inc(v_a_204_);
lean_dec_ref_known(v___x_203_, 2);
v___x_205_ = lean_array_get_size(v_a_204_);
v___x_206_ = lean_nat_dec_lt(v___x_201_, v___x_205_);
if (v___x_206_ == 0)
{
lean_dec(v_a_204_);
goto v___jp_190_;
}
else
{
lean_object* v___x_207_; size_t v___x_208_; size_t v___x_209_; lean_object* v___x_2992__overap_210_; lean_object* v___x_211_; 
v___x_207_ = lean_box(0);
v___x_208_ = ((size_t)0ULL);
v___x_209_ = lean_usize_of_nat(v___x_205_);
v___x_2992__overap_210_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_200_, v___f_177_, v_a_204_, v___x_208_, v___x_209_, v___x_207_);
lean_inc_ref(v___y_164_);
v___x_211_ = lean_apply_2(v___x_2992__overap_210_, v___y_164_, lean_box(0));
if (lean_obj_tag(v___x_211_) == 0)
{
lean_dec_ref_known(v___x_211_, 1);
goto v___jp_190_;
}
else
{
v___y_198_ = v___x_211_;
goto v___jp_197_;
}
}
}
else
{
lean_object* v_a_212_; lean_object* v___x_213_; uint8_t v___x_214_; 
v_a_212_ = lean_ctor_get(v___x_203_, 1);
lean_inc(v_a_212_);
lean_dec_ref_known(v___x_203_, 2);
v___x_213_ = lean_array_get_size(v_a_212_);
v___x_214_ = lean_nat_dec_lt(v___x_201_, v___x_213_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; lean_object* v___x_216_; 
lean_dec(v_a_212_);
lean_dec_ref(v_repo_162_);
lean_dec_ref(v_name_161_);
v___x_215_ = lean_box(0);
v___x_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
else
{
lean_object* v___x_217_; size_t v___x_218_; size_t v___x_219_; lean_object* v___x_3009__overap_220_; lean_object* v___x_221_; 
v___x_217_ = lean_box(0);
v___x_218_ = ((size_t)0ULL);
v___x_219_ = lean_usize_of_nat(v___x_213_);
v___x_3009__overap_220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_200_, v___f_177_, v_a_212_, v___x_218_, v___x_219_, v___x_217_);
lean_inc_ref(v___y_164_);
v___x_221_ = lean_apply_2(v___x_3009__overap_220_, v___y_164_, lean_box(0));
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
lean_dec_ref(v_repo_162_);
lean_dec_ref(v_name_161_);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; 
v_unused_229_ = lean_ctor_get(v___x_221_, 0);
lean_dec(v_unused_229_);
v___x_223_ = v___x_221_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_dec(v___x_221_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
lean_ctor_set_tag(v___x_223_, 1);
lean_ctor_set(v___x_223_, 0, v___x_217_);
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_217_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
else
{
v___y_198_ = v___x_221_;
goto v___jp_197_;
}
}
}
}
v___jp_230_:
{
if (lean_obj_tag(v___y_231_) == 0)
{
lean_dec_ref_known(v___y_231_, 1);
goto v___jp_199_;
}
else
{
lean_dec_ref(v_repo_162_);
lean_dec_ref(v_name_161_);
return v___y_231_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___boxed(lean_object* v_name_270_, lean_object* v_repo_271_, lean_object* v_rev_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout(v_name_270_, v_repo_271_, v_rev_272_, v___y_273_);
lean_dec_ref(v___y_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(lean_object* v_as_276_, size_t v_i_277_, size_t v_stop_278_, lean_object* v_b_279_, lean_object* v___y_280_){
_start:
{
uint8_t v___x_282_; 
v___x_282_ = lean_usize_dec_eq(v_i_277_, v_stop_278_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; size_t v___x_285_; size_t v___x_286_; 
v___x_283_ = lean_array_uget_borrowed(v_as_276_, v_i_277_);
lean_inc_ref(v___y_280_);
lean_inc(v___x_283_);
v___x_284_ = lean_apply_2(v___y_280_, v___x_283_, lean_box(0));
v___x_285_ = ((size_t)1ULL);
v___x_286_ = lean_usize_add(v_i_277_, v___x_285_);
v_i_277_ = v___x_286_;
v_b_279_ = v___x_284_;
goto _start;
}
else
{
lean_object* v___x_288_; 
v___x_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_288_, 0, v_b_279_);
return v___x_288_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0___boxed(lean_object* v_as_289_, lean_object* v_i_290_, lean_object* v_stop_291_, lean_object* v_b_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
size_t v_i_boxed_295_; size_t v_stop_boxed_296_; lean_object* v_res_297_; 
v_i_boxed_295_ = lean_unbox_usize(v_i_290_);
lean_dec(v_i_290_);
v_stop_boxed_296_ = lean_unbox_usize(v_stop_291_);
lean_dec(v_stop_291_);
v_res_297_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_as_289_, v_i_boxed_295_, v_stop_boxed_296_, v_b_292_, v___y_293_);
lean_dec_ref(v___y_293_);
lean_dec_ref(v_as_289_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo(lean_object* v_name_307_, lean_object* v_repo_308_, lean_object* v_url_309_, lean_object* v_rev_x3f_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___y_323_; lean_object* v___y_362_; lean_object* v___y_363_; lean_object* v___y_365_; lean_object* v___y_366_; lean_object* v___y_395_; lean_object* v___y_396_; uint8_t v_a_397_; lean_object* v___y_405_; uint8_t v_a_406_; lean_object* v___y_414_; lean_object* v___y_415_; lean_object* v___y_416_; lean_object* v___y_417_; uint8_t v_val_418_; lean_object* v___y_426_; uint8_t v___y_427_; lean_object* v___y_428_; lean_object* v___y_434_; uint8_t v___y_435_; lean_object* v___y_436_; lean_object* v___y_437_; lean_object* v___y_439_; uint8_t v___y_440_; lean_object* v___y_441_; lean_object* v___y_470_; uint8_t v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v___y_475_; lean_object* v___y_476_; lean_object* v___y_477_; uint8_t v_val_478_; lean_object* v___y_486_; lean_object* v___y_487_; lean_object* v___y_488_; lean_object* v___y_489_; lean_object* v_a_490_; lean_object* v___y_533_; lean_object* v___y_534_; lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v_a_537_; lean_object* v___y_559_; lean_object* v___y_560_; lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; lean_object* v___y_604_; lean_object* v___y_606_; lean_object* v___y_607_; lean_object* v___y_608_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___y_642_; uint8_t v_a_643_; lean_object* v___y_651_; uint8_t v_a_652_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; uint8_t v_val_663_; lean_object* v___y_671_; uint8_t v___y_672_; uint8_t v___y_673_; lean_object* v___y_678_; uint8_t v___y_679_; uint8_t v___y_680_; lean_object* v___y_681_; lean_object* v___y_683_; uint8_t v___y_684_; uint8_t v___y_685_; lean_object* v___y_714_; uint8_t v___y_715_; uint8_t v___y_716_; lean_object* v___y_717_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; uint8_t v___y_722_; uint8_t v___y_723_; lean_object* v___y_724_; lean_object* v_a_725_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; uint8_t v_val_772_; lean_object* v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; lean_object* v___y_783_; lean_object* v_a_784_; lean_object* v___y_801_; lean_object* v___y_802_; lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v___y_817_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v_a_827_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; uint8_t v_a_903_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v_a_967_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v_a_980_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_994_; lean_object* v_val_995_; lean_object* v___y_1003_; lean_object* v___y_1004_; uint8_t v_a_1005_; lean_object* v___y_1014_; 
if (lean_obj_tag(v_rev_x3f_310_) == 0)
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lake_Git_upstreamBranch;
v___y_1014_ = v___x_1023_;
goto v___jp_1013_;
}
else
{
lean_object* v_val_1024_; 
v_val_1024_ = lean_ctor_get(v_rev_x3f_310_, 0);
lean_inc(v_val_1024_);
lean_dec_ref_known(v_rev_x3f_310_, 1);
v___y_1014_ = v_val_1024_;
goto v___jp_1013_;
}
v___jp_313_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_box(0);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
return v___x_315_;
}
v___jp_316_:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_box(0);
v___x_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
return v___x_318_;
}
v___jp_319_:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_box(0);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
v___jp_322_:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_326_ = l_Lake_GitRepo_gcAuto(v_repo_308_, v___x_325_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v_a_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
v_a_328_ = lean_ctor_get(v___x_326_, 1);
lean_inc(v_a_328_);
lean_dec_ref_known(v___x_326_, 2);
v___x_329_ = lean_array_get_size(v_a_328_);
v___x_330_ = lean_nat_dec_lt(v___x_324_, v___x_329_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
lean_dec(v_a_328_);
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v_a_327_);
return v___x_331_;
}
else
{
lean_object* v___x_332_; size_t v___x_333_; size_t v___x_334_; lean_object* v___x_335_; 
v___x_332_ = lean_box(0);
v___x_333_ = ((size_t)0ULL);
v___x_334_ = lean_usize_of_nat(v___x_329_);
v___x_335_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_328_, v___x_333_, v___x_334_, v___x_332_, v___y_323_);
lean_dec(v_a_328_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_342_; 
v_isSharedCheck_342_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_342_ == 0)
{
lean_object* v_unused_343_; 
v_unused_343_ = lean_ctor_get(v___x_335_, 0);
lean_dec(v_unused_343_);
v___x_337_ = v___x_335_;
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
else
{
lean_dec(v___x_335_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_342_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_340_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v_a_327_);
v___x_340_ = v___x_337_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_327_);
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
lean_dec(v_a_327_);
return v___x_335_;
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v_a_344_ = lean_ctor_get(v___x_326_, 1);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_326_, 2);
v___x_345_ = lean_array_get_size(v_a_344_);
v___x_346_ = lean_nat_dec_lt(v___x_324_, v___x_345_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; 
lean_dec(v_a_344_);
v___x_347_ = lean_box(0);
v___x_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
return v___x_348_;
}
else
{
lean_object* v___x_349_; size_t v___x_350_; size_t v___x_351_; lean_object* v___x_352_; 
v___x_349_ = lean_box(0);
v___x_350_ = ((size_t)0ULL);
v___x_351_ = lean_usize_of_nat(v___x_345_);
v___x_352_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_344_, v___x_350_, v___x_351_, v___x_349_, v___y_323_);
lean_dec(v_a_344_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_359_ == 0)
{
lean_object* v_unused_360_; 
v_unused_360_ = lean_ctor_get(v___x_352_, 0);
lean_dec(v_unused_360_);
v___x_354_ = v___x_352_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_dec(v___x_352_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
lean_ctor_set_tag(v___x_354_, 1);
lean_ctor_set(v___x_354_, 0, v___x_349_);
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_349_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
else
{
return v___x_352_;
}
}
}
}
v___jp_361_:
{
if (lean_obj_tag(v___y_363_) == 0)
{
lean_dec_ref_known(v___y_363_, 1);
v___y_323_ = v___y_362_;
goto v___jp_322_;
}
else
{
lean_dec_ref(v_repo_308_);
return v___y_363_;
}
}
v___jp_364_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
lean_inc_ref(v___y_365_);
v___x_369_ = l_Lake_GitRepo_pruneRemote(v___y_365_, v_repo_308_, v___x_368_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v___x_371_; uint8_t v___x_372_; 
v_a_370_ = lean_ctor_get(v___x_369_, 1);
lean_inc(v_a_370_);
lean_dec_ref_known(v___x_369_, 2);
v___x_371_ = lean_array_get_size(v_a_370_);
v___x_372_ = lean_nat_dec_lt(v___x_367_, v___x_371_);
if (v___x_372_ == 0)
{
lean_dec(v_a_370_);
v___y_323_ = v___y_366_;
goto v___jp_322_;
}
else
{
lean_object* v___x_373_; size_t v___x_374_; size_t v___x_375_; lean_object* v___x_376_; 
v___x_373_ = lean_box(0);
v___x_374_ = ((size_t)0ULL);
v___x_375_ = lean_usize_of_nat(v___x_371_);
v___x_376_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_370_, v___x_374_, v___x_375_, v___x_373_, v___y_366_);
lean_dec(v_a_370_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_dec_ref_known(v___x_376_, 1);
v___y_323_ = v___y_366_;
goto v___jp_322_;
}
else
{
v___y_362_ = v___y_366_;
v___y_363_ = v___x_376_;
goto v___jp_361_;
}
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_378_; uint8_t v___x_379_; 
v_a_377_ = lean_ctor_get(v___x_369_, 1);
lean_inc(v_a_377_);
lean_dec_ref_known(v___x_369_, 2);
v___x_378_ = lean_array_get_size(v_a_377_);
v___x_379_ = lean_nat_dec_lt(v___x_367_, v___x_378_);
if (v___x_379_ == 0)
{
lean_object* v___x_380_; lean_object* v___x_381_; 
lean_dec(v_a_377_);
lean_dec_ref(v_repo_308_);
v___x_380_ = lean_box(0);
v___x_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
else
{
lean_object* v___x_382_; size_t v___x_383_; size_t v___x_384_; lean_object* v___x_385_; 
v___x_382_ = lean_box(0);
v___x_383_ = ((size_t)0ULL);
v___x_384_ = lean_usize_of_nat(v___x_378_);
v___x_385_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_377_, v___x_383_, v___x_384_, v___x_382_, v___y_366_);
lean_dec(v_a_377_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
lean_dec_ref(v_repo_308_);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_392_ == 0)
{
lean_object* v_unused_393_; 
v_unused_393_ = lean_ctor_get(v___x_385_, 0);
lean_dec(v_unused_393_);
v___x_387_ = v___x_385_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_dec(v___x_385_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
lean_ctor_set_tag(v___x_387_, 1);
lean_ctor_set(v___x_387_, 0, v___x_382_);
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_382_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
else
{
v___y_362_ = v___y_366_;
v___y_363_ = v___x_385_;
goto v___jp_361_;
}
}
}
}
v___jp_394_:
{
if (v_a_397_ == 0)
{
lean_dec_ref(v_name_307_);
v___y_365_ = v___y_395_;
v___y_366_ = v___y_396_;
goto v___jp_364_;
}
else
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; uint8_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_398_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_399_ = lean_string_append(v_name_307_, v___x_398_);
v___x_400_ = lean_string_append(v___x_399_, v_repo_308_);
v___x_401_ = 2;
v___x_402_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_402_, 0, v___x_400_);
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*1, v___x_401_);
lean_inc_ref(v___y_396_);
v___x_403_ = lean_apply_2(v___y_396_, v___x_402_, lean_box(0));
v___y_365_ = v___y_395_;
v___y_366_ = v___y_396_;
goto v___jp_364_;
}
}
v___jp_404_:
{
if (v_a_406_ == 0)
{
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
goto v___jp_319_;
}
else
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_407_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_408_ = lean_string_append(v_name_307_, v___x_407_);
v___x_409_ = lean_string_append(v___x_408_, v_repo_308_);
lean_dec_ref(v_repo_308_);
v___x_410_ = 2;
v___x_411_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_411_, 0, v___x_409_);
lean_ctor_set_uint8(v___x_411_, sizeof(void*)*1, v___x_410_);
lean_inc_ref(v___y_405_);
v___x_412_ = lean_apply_2(v___y_405_, v___x_411_, lean_box(0));
goto v___jp_319_;
}
}
v___jp_413_:
{
lean_object* v___x_419_; uint8_t v___x_420_; 
v___x_419_ = lean_array_get_size(v___y_415_);
v___x_420_ = lean_nat_dec_lt(v___y_416_, v___x_419_);
if (v___x_420_ == 0)
{
v___y_395_ = v___y_414_;
v___y_396_ = v___y_417_;
v_a_397_ = v_val_418_;
goto v___jp_394_;
}
else
{
lean_object* v___x_421_; size_t v___x_422_; size_t v___x_423_; lean_object* v___x_424_; 
v___x_421_ = lean_box(0);
v___x_422_ = ((size_t)0ULL);
v___x_423_ = lean_usize_of_nat(v___x_419_);
v___x_424_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_415_, v___x_422_, v___x_423_, v___x_421_, v___y_417_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_dec_ref_known(v___x_424_, 1);
v___y_395_ = v___y_414_;
v___y_396_ = v___y_417_;
v_a_397_ = v_val_418_;
goto v___jp_394_;
}
else
{
lean_dec_ref(v_name_307_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_dec_ref_known(v___x_424_, 1);
v___y_365_ = v___y_414_;
v___y_366_ = v___y_417_;
goto v___jp_364_;
}
else
{
lean_dec_ref(v_repo_308_);
return v___x_424_;
}
}
}
}
v___jp_425_:
{
lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_429_ = lean_unsigned_to_nat(0u);
v___x_430_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
v___x_431_ = l_Lake_GitRepo_hasNoDiff(v_repo_308_);
if (v___x_431_ == 0)
{
uint8_t v___x_432_; 
v___x_432_ = 1;
v___y_414_ = v___y_426_;
v___y_415_ = v___x_430_;
v___y_416_ = v___x_429_;
v___y_417_ = v___y_428_;
v_val_418_ = v___x_432_;
goto v___jp_413_;
}
else
{
v___y_414_ = v___y_426_;
v___y_415_ = v___x_430_;
v___y_416_ = v___x_429_;
v___y_417_ = v___y_428_;
v_val_418_ = v___y_427_;
goto v___jp_413_;
}
}
v___jp_433_:
{
if (lean_obj_tag(v___y_437_) == 0)
{
lean_dec_ref_known(v___y_437_, 1);
v___y_426_ = v___y_434_;
v___y_427_ = v___y_435_;
v___y_428_ = v___y_436_;
goto v___jp_425_;
}
else
{
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___y_437_;
}
}
v___jp_438_:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_442_ = lean_unsigned_to_nat(0u);
v___x_443_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
v___x_444_ = l_Lake_GitRepo_clean(v_repo_308_, v___x_443_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
v_a_445_ = lean_ctor_get(v___x_444_, 1);
lean_inc(v_a_445_);
lean_dec_ref_known(v___x_444_, 2);
v___x_446_ = lean_array_get_size(v_a_445_);
v___x_447_ = lean_nat_dec_lt(v___x_442_, v___x_446_);
if (v___x_447_ == 0)
{
lean_dec(v_a_445_);
v___y_426_ = v___y_439_;
v___y_427_ = v___y_440_;
v___y_428_ = v___y_441_;
goto v___jp_425_;
}
else
{
lean_object* v___x_448_; size_t v___x_449_; size_t v___x_450_; lean_object* v___x_451_; 
v___x_448_ = lean_box(0);
v___x_449_ = ((size_t)0ULL);
v___x_450_ = lean_usize_of_nat(v___x_446_);
v___x_451_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_445_, v___x_449_, v___x_450_, v___x_448_, v___y_441_);
lean_dec(v_a_445_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_dec_ref_known(v___x_451_, 1);
v___y_426_ = v___y_439_;
v___y_427_ = v___y_440_;
v___y_428_ = v___y_441_;
goto v___jp_425_;
}
else
{
v___y_434_ = v___y_439_;
v___y_435_ = v___y_440_;
v___y_436_ = v___y_441_;
v___y_437_ = v___x_451_;
goto v___jp_433_;
}
}
}
else
{
lean_object* v_a_452_; lean_object* v___x_453_; uint8_t v___x_454_; 
v_a_452_ = lean_ctor_get(v___x_444_, 1);
lean_inc(v_a_452_);
lean_dec_ref_known(v___x_444_, 2);
v___x_453_ = lean_array_get_size(v_a_452_);
v___x_454_ = lean_nat_dec_lt(v___x_442_, v___x_453_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v___x_456_; 
lean_dec(v_a_452_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v___x_455_ = lean_box(0);
v___x_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
return v___x_456_;
}
else
{
lean_object* v___x_457_; size_t v___x_458_; size_t v___x_459_; lean_object* v___x_460_; 
v___x_457_ = lean_box(0);
v___x_458_ = ((size_t)0ULL);
v___x_459_ = lean_usize_of_nat(v___x_453_);
v___x_460_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_452_, v___x_458_, v___x_459_, v___x_457_, v___y_441_);
lean_dec(v_a_452_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_467_ == 0)
{
lean_object* v_unused_468_; 
v_unused_468_ = lean_ctor_get(v___x_460_, 0);
lean_dec(v_unused_468_);
v___x_462_ = v___x_460_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_dec(v___x_460_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set_tag(v___x_462_, 1);
lean_ctor_set(v___x_462_, 0, v___x_457_);
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_457_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
else
{
v___y_434_ = v___y_439_;
v___y_435_ = v___y_440_;
v___y_436_ = v___y_441_;
v___y_437_ = v___x_460_;
goto v___jp_433_;
}
}
}
}
v___jp_469_:
{
if (lean_obj_tag(v___y_473_) == 0)
{
lean_dec_ref_known(v___y_473_, 1);
v___y_439_ = v___y_470_;
v___y_440_ = v___y_471_;
v___y_441_ = v___y_472_;
goto v___jp_438_;
}
else
{
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___y_473_;
}
}
v___jp_474_:
{
lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_479_ = lean_array_get_size(v___y_477_);
v___x_480_ = lean_nat_dec_lt(v___y_475_, v___x_479_);
if (v___x_480_ == 0)
{
v___y_405_ = v___y_476_;
v_a_406_ = v_val_478_;
goto v___jp_404_;
}
else
{
lean_object* v___x_481_; size_t v___x_482_; size_t v___x_483_; lean_object* v___x_484_; 
v___x_481_ = lean_box(0);
v___x_482_ = ((size_t)0ULL);
v___x_483_ = lean_usize_of_nat(v___x_479_);
v___x_484_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_477_, v___x_482_, v___x_483_, v___x_481_, v___y_476_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_dec_ref_known(v___x_484_, 1);
v___y_405_ = v___y_476_;
v_a_406_ = v_val_478_;
goto v___jp_404_;
}
else
{
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_dec_ref_known(v___x_484_, 1);
goto v___jp_319_;
}
else
{
return v___x_484_;
}
}
}
}
v___jp_485_:
{
lean_object* v___x_491_; uint8_t v___x_492_; 
v___x_491_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___x_492_ = l_Option_instDecidableEq___redArg(v___x_491_, v_a_490_, v___y_488_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; uint8_t v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_493_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__0));
lean_inc_ref(v_name_307_);
v___x_494_ = lean_string_append(v_name_307_, v___x_493_);
v___x_495_ = lean_string_append(v___x_494_, v___y_489_);
v___x_496_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__1));
v___x_497_ = lean_string_append(v___x_495_, v___x_496_);
v___x_498_ = 1;
v___x_499_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_499_, 0, v___x_497_);
lean_ctor_set_uint8(v___x_499_, sizeof(void*)*1, v___x_498_);
lean_inc_ref(v___y_487_);
v___x_500_ = lean_apply_2(v___y_487_, v___x_499_, lean_box(0));
v___x_501_ = lean_unsigned_to_nat(0u);
v___x_502_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
v___x_503_ = l_Lake_GitRepo_checkoutDetach(v___y_489_, v_repo_308_, v___x_502_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_505_; uint8_t v___x_506_; 
v_a_504_ = lean_ctor_get(v___x_503_, 1);
lean_inc(v_a_504_);
lean_dec_ref_known(v___x_503_, 2);
v___x_505_ = lean_array_get_size(v_a_504_);
v___x_506_ = lean_nat_dec_lt(v___x_501_, v___x_505_);
if (v___x_506_ == 0)
{
lean_dec(v_a_504_);
v___y_439_ = v___y_486_;
v___y_440_ = v___x_492_;
v___y_441_ = v___y_487_;
goto v___jp_438_;
}
else
{
lean_object* v___x_507_; size_t v___x_508_; size_t v___x_509_; lean_object* v___x_510_; 
v___x_507_ = lean_box(0);
v___x_508_ = ((size_t)0ULL);
v___x_509_ = lean_usize_of_nat(v___x_505_);
v___x_510_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_504_, v___x_508_, v___x_509_, v___x_507_, v___y_487_);
lean_dec(v_a_504_);
if (lean_obj_tag(v___x_510_) == 0)
{
lean_dec_ref_known(v___x_510_, 1);
v___y_439_ = v___y_486_;
v___y_440_ = v___x_492_;
v___y_441_ = v___y_487_;
goto v___jp_438_;
}
else
{
v___y_470_ = v___y_486_;
v___y_471_ = v___x_492_;
v___y_472_ = v___y_487_;
v___y_473_ = v___x_510_;
goto v___jp_469_;
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v_a_511_ = lean_ctor_get(v___x_503_, 1);
lean_inc(v_a_511_);
lean_dec_ref_known(v___x_503_, 2);
v___x_512_ = lean_array_get_size(v_a_511_);
v___x_513_ = lean_nat_dec_lt(v___x_501_, v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; lean_object* v___x_515_; 
lean_dec(v_a_511_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v___x_514_ = lean_box(0);
v___x_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
return v___x_515_;
}
else
{
lean_object* v___x_516_; size_t v___x_517_; size_t v___x_518_; lean_object* v___x_519_; 
v___x_516_ = lean_box(0);
v___x_517_ = ((size_t)0ULL);
v___x_518_ = lean_usize_of_nat(v___x_512_);
v___x_519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_511_, v___x_517_, v___x_518_, v___x_516_, v___y_487_);
lean_dec(v_a_511_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_526_ == 0)
{
lean_object* v_unused_527_; 
v_unused_527_ = lean_ctor_get(v___x_519_, 0);
lean_dec(v_unused_527_);
v___x_521_ = v___x_519_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_dec(v___x_519_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set_tag(v___x_521_, 1);
lean_ctor_set(v___x_521_, 0, v___x_516_);
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_516_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
else
{
v___y_470_ = v___y_486_;
v___y_471_ = v___x_492_;
v___y_472_ = v___y_487_;
v___y_473_ = v___x_519_;
goto v___jp_469_;
}
}
}
}
else
{
lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; 
lean_dec_ref(v___y_489_);
v___x_528_ = lean_unsigned_to_nat(0u);
v___x_529_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
v___x_530_ = l_Lake_GitRepo_hasNoDiff(v_repo_308_);
if (v___x_530_ == 0)
{
v___y_475_ = v___x_528_;
v___y_476_ = v___y_487_;
v___y_477_ = v___x_529_;
v_val_478_ = v___x_492_;
goto v___jp_474_;
}
else
{
uint8_t v___x_531_; 
v___x_531_ = 0;
v___y_475_ = v___x_528_;
v___y_476_ = v___y_487_;
v___y_477_ = v___x_529_;
v_val_478_ = v___x_531_;
goto v___jp_474_;
}
}
}
v___jp_532_:
{
if (lean_obj_tag(v_a_537_) == 1)
{
lean_object* v_val_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; uint8_t v___x_542_; 
lean_dec_ref(v___y_536_);
lean_dec_ref(v___y_534_);
v_val_538_ = lean_ctor_get(v_a_537_, 0);
lean_inc(v_val_538_);
v___x_539_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_540_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__0));
lean_inc_ref(v_repo_308_);
v___x_541_ = l_Lake_GitRepo_resolveRevision_x3f(v___x_540_, v_repo_308_);
v___x_542_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_542_ == 0)
{
v___y_486_ = v___y_533_;
v___y_487_ = v___y_535_;
v___y_488_ = v_a_537_;
v___y_489_ = v_val_538_;
v_a_490_ = v___x_541_;
goto v___jp_485_;
}
else
{
lean_object* v___x_543_; size_t v___x_544_; size_t v___x_545_; lean_object* v___x_546_; 
v___x_543_ = lean_box(0);
v___x_544_ = ((size_t)0ULL);
v___x_545_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_546_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_539_, v___x_544_, v___x_545_, v___x_543_, v___y_535_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_dec_ref_known(v___x_546_, 1);
v___y_486_ = v___y_533_;
v___y_487_ = v___y_535_;
v___y_488_ = v_a_537_;
v___y_489_ = v_val_538_;
v_a_490_ = v___x_541_;
goto v___jp_485_;
}
else
{
lean_dec(v___x_541_);
lean_dec_ref_known(v_a_537_, 1);
lean_dec(v_val_538_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___x_546_;
}
}
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; uint8_t v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
lean_dec(v_a_537_);
lean_dec_ref(v_repo_308_);
v___x_547_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__1));
v___x_548_ = lean_string_append(v_name_307_, v___x_547_);
v___x_549_ = lean_string_append(v___x_548_, v___y_534_);
lean_dec_ref(v___y_534_);
v___x_550_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__2));
v___x_551_ = lean_string_append(v___x_549_, v___x_550_);
v___x_552_ = lean_string_append(v___x_551_, v___y_536_);
lean_dec_ref(v___y_536_);
v___x_553_ = 3;
v___x_554_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_554_, 0, v___x_552_);
lean_ctor_set_uint8(v___x_554_, sizeof(void*)*1, v___x_553_);
lean_inc_ref(v___y_535_);
v___x_555_ = lean_apply_2(v___y_535_, v___x_554_, lean_box(0));
v___x_556_ = lean_box(0);
v___x_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
return v___x_557_;
}
}
v___jp_558_:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; uint8_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_563_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__3));
lean_inc_ref(v_name_307_);
v___x_564_ = lean_string_append(v_name_307_, v___x_563_);
v___x_565_ = lean_string_append(v___x_564_, v___y_560_);
v___x_566_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__4));
v___x_567_ = lean_string_append(v___x_565_, v___x_566_);
v___x_568_ = lean_string_append(v___x_567_, v___y_561_);
v___x_569_ = 1;
v___x_570_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_570_, 0, v___x_568_);
lean_ctor_set_uint8(v___x_570_, sizeof(void*)*1, v___x_569_);
lean_inc_ref(v___y_562_);
v___x_571_ = lean_apply_2(v___y_562_, v___x_570_, lean_box(0));
v___x_572_ = lean_unsigned_to_nat(0u);
v___x_573_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v___y_560_);
lean_inc_ref(v___y_559_);
lean_inc_ref(v_repo_308_);
v___x_574_ = l_Lake_GitRepo_fetchRevision_x3f(v_repo_308_, v___y_559_, v___y_560_, v___x_573_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v_a_575_; lean_object* v_a_576_; lean_object* v___x_577_; uint8_t v___x_578_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_575_);
v_a_576_ = lean_ctor_get(v___x_574_, 1);
lean_inc(v_a_576_);
lean_dec_ref_known(v___x_574_, 2);
v___x_577_ = lean_array_get_size(v_a_576_);
v___x_578_ = lean_nat_dec_lt(v___x_572_, v___x_577_);
if (v___x_578_ == 0)
{
lean_dec(v_a_576_);
v___y_533_ = v___y_559_;
v___y_534_ = v___y_560_;
v___y_535_ = v___y_562_;
v___y_536_ = v___y_561_;
v_a_537_ = v_a_575_;
goto v___jp_532_;
}
else
{
lean_object* v___x_579_; size_t v___x_580_; size_t v___x_581_; lean_object* v___x_582_; 
v___x_579_ = lean_box(0);
v___x_580_ = ((size_t)0ULL);
v___x_581_ = lean_usize_of_nat(v___x_577_);
v___x_582_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_576_, v___x_580_, v___x_581_, v___x_579_, v___y_562_);
lean_dec(v_a_576_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_dec_ref_known(v___x_582_, 1);
v___y_533_ = v___y_559_;
v___y_534_ = v___y_560_;
v___y_535_ = v___y_562_;
v___y_536_ = v___y_561_;
v_a_537_ = v_a_575_;
goto v___jp_532_;
}
else
{
lean_dec(v_a_575_);
lean_dec_ref(v___y_561_);
lean_dec_ref(v___y_560_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___x_582_;
}
}
}
else
{
lean_object* v_a_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
lean_dec_ref(v___y_561_);
lean_dec_ref(v___y_560_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v_a_583_ = lean_ctor_get(v___x_574_, 1);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_574_, 2);
v___x_584_ = lean_array_get_size(v_a_583_);
v___x_585_ = lean_nat_dec_lt(v___x_572_, v___x_584_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec(v_a_583_);
v___x_586_ = lean_box(0);
v___x_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
return v___x_587_;
}
else
{
lean_object* v___x_588_; size_t v___x_589_; size_t v___x_590_; lean_object* v___x_591_; 
v___x_588_ = lean_box(0);
v___x_589_ = ((size_t)0ULL);
v___x_590_ = lean_usize_of_nat(v___x_584_);
v___x_591_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_583_, v___x_589_, v___x_590_, v___x_588_, v___y_562_);
lean_dec(v_a_583_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_598_ == 0)
{
lean_object* v_unused_599_; 
v_unused_599_ = lean_ctor_get(v___x_591_, 0);
lean_dec(v_unused_599_);
v___x_593_ = v___x_591_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_dec(v___x_591_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set_tag(v___x_593_, 1);
lean_ctor_set(v___x_593_, 0, v___x_588_);
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_588_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
else
{
return v___x_591_;
}
}
}
}
v___jp_600_:
{
if (lean_obj_tag(v___y_604_) == 0)
{
lean_dec_ref_known(v___y_604_, 1);
v___y_559_ = v___y_601_;
v___y_560_ = v___y_602_;
v___y_561_ = v___y_603_;
v___y_562_ = v___y_311_;
goto v___jp_558_;
}
else
{
lean_dec_ref(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___y_604_;
}
}
v___jp_605_:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_609_ = lean_unsigned_to_nat(0u);
v___x_610_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
lean_inc_ref(v___y_608_);
lean_inc_ref(v___y_606_);
v___x_611_ = l_Lake_GitRepo_addRemote(v___y_606_, v___y_608_, v_repo_308_, v___x_610_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v_a_612_ = lean_ctor_get(v___x_611_, 1);
lean_inc(v_a_612_);
lean_dec_ref_known(v___x_611_, 2);
v___x_613_ = lean_array_get_size(v_a_612_);
v___x_614_ = lean_nat_dec_lt(v___x_609_, v___x_613_);
if (v___x_614_ == 0)
{
lean_dec(v_a_612_);
v___y_559_ = v___y_606_;
v___y_560_ = v___y_607_;
v___y_561_ = v___y_608_;
v___y_562_ = v___y_311_;
goto v___jp_558_;
}
else
{
lean_object* v___x_615_; size_t v___x_616_; size_t v___x_617_; lean_object* v___x_618_; 
v___x_615_ = lean_box(0);
v___x_616_ = ((size_t)0ULL);
v___x_617_ = lean_usize_of_nat(v___x_613_);
v___x_618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_612_, v___x_616_, v___x_617_, v___x_615_, v___y_311_);
lean_dec(v_a_612_);
if (lean_obj_tag(v___x_618_) == 0)
{
lean_dec_ref_known(v___x_618_, 1);
v___y_559_ = v___y_606_;
v___y_560_ = v___y_607_;
v___y_561_ = v___y_608_;
v___y_562_ = v___y_311_;
goto v___jp_558_;
}
else
{
v___y_601_ = v___y_606_;
v___y_602_ = v___y_607_;
v___y_603_ = v___y_608_;
v___y_604_ = v___x_618_;
goto v___jp_600_;
}
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_620_; uint8_t v___x_621_; 
v_a_619_ = lean_ctor_get(v___x_611_, 1);
lean_inc(v_a_619_);
lean_dec_ref_known(v___x_611_, 2);
v___x_620_ = lean_array_get_size(v_a_619_);
v___x_621_ = lean_nat_dec_lt(v___x_609_, v___x_620_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; lean_object* v___x_623_; 
lean_dec(v_a_619_);
lean_dec_ref(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v___x_622_ = lean_box(0);
v___x_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
return v___x_623_;
}
else
{
lean_object* v___x_624_; size_t v___x_625_; size_t v___x_626_; lean_object* v___x_627_; 
v___x_624_ = lean_box(0);
v___x_625_ = ((size_t)0ULL);
v___x_626_ = lean_usize_of_nat(v___x_620_);
v___x_627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_619_, v___x_625_, v___x_626_, v___x_624_, v___y_311_);
lean_dec(v_a_619_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
lean_dec_ref(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_634_ == 0)
{
lean_object* v_unused_635_; 
v_unused_635_ = lean_ctor_get(v___x_627_, 0);
lean_dec(v_unused_635_);
v___x_629_ = v___x_627_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_dec(v___x_627_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
lean_ctor_set_tag(v___x_629_, 1);
lean_ctor_set(v___x_629_, 0, v___x_624_);
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v___x_624_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
else
{
v___y_601_ = v___y_606_;
v___y_602_ = v___y_607_;
v___y_603_ = v___y_608_;
v___y_604_ = v___x_627_;
goto v___jp_600_;
}
}
}
}
v___jp_636_:
{
if (lean_obj_tag(v___y_640_) == 0)
{
lean_dec_ref_known(v___y_640_, 1);
v___y_606_ = v___y_637_;
v___y_607_ = v___y_638_;
v___y_608_ = v___y_639_;
goto v___jp_605_;
}
else
{
lean_dec_ref(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___y_640_;
}
}
v___jp_641_:
{
if (v_a_643_ == 0)
{
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
goto v___jp_316_;
}
else
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; uint8_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_644_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_645_ = lean_string_append(v_name_307_, v___x_644_);
v___x_646_ = lean_string_append(v___x_645_, v_repo_308_);
lean_dec_ref(v_repo_308_);
v___x_647_ = 2;
v___x_648_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_648_, 0, v___x_646_);
lean_ctor_set_uint8(v___x_648_, sizeof(void*)*1, v___x_647_);
lean_inc_ref(v___y_642_);
v___x_649_ = lean_apply_2(v___y_642_, v___x_648_, lean_box(0));
goto v___jp_316_;
}
}
v___jp_650_:
{
if (v_a_652_ == 0)
{
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
goto v___jp_313_;
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_653_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkDiff___closed__0));
v___x_654_ = lean_string_append(v_name_307_, v___x_653_);
v___x_655_ = lean_string_append(v___x_654_, v_repo_308_);
lean_dec_ref(v_repo_308_);
v___x_656_ = 2;
v___x_657_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_657_, 0, v___x_655_);
lean_ctor_set_uint8(v___x_657_, sizeof(void*)*1, v___x_656_);
lean_inc_ref(v___y_651_);
v___x_658_ = lean_apply_2(v___y_651_, v___x_657_, lean_box(0));
goto v___jp_313_;
}
}
v___jp_659_:
{
lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_664_ = lean_array_get_size(v___y_662_);
v___x_665_ = lean_nat_dec_lt(v___y_660_, v___x_664_);
if (v___x_665_ == 0)
{
v___y_642_ = v___y_661_;
v_a_643_ = v_val_663_;
goto v___jp_641_;
}
else
{
lean_object* v___x_666_; size_t v___x_667_; size_t v___x_668_; lean_object* v___x_669_; 
v___x_666_ = lean_box(0);
v___x_667_ = ((size_t)0ULL);
v___x_668_ = lean_usize_of_nat(v___x_664_);
v___x_669_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_662_, v___x_667_, v___x_668_, v___x_666_, v___y_661_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_dec_ref_known(v___x_669_, 1);
v___y_642_ = v___y_661_;
v_a_643_ = v_val_663_;
goto v___jp_641_;
}
else
{
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_dec_ref_known(v___x_669_, 1);
goto v___jp_316_;
}
else
{
return v___x_669_;
}
}
}
}
v___jp_670_:
{
lean_object* v___x_674_; lean_object* v___x_675_; uint8_t v___x_676_; 
v___x_674_ = lean_unsigned_to_nat(0u);
v___x_675_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
v___x_676_ = l_Lake_GitRepo_hasNoDiff(v_repo_308_);
if (v___x_676_ == 0)
{
v___y_660_ = v___x_674_;
v___y_661_ = v___y_671_;
v___y_662_ = v___x_675_;
v_val_663_ = v___y_672_;
goto v___jp_659_;
}
else
{
v___y_660_ = v___x_674_;
v___y_661_ = v___y_671_;
v___y_662_ = v___x_675_;
v_val_663_ = v___y_673_;
goto v___jp_659_;
}
}
v___jp_677_:
{
if (lean_obj_tag(v___y_681_) == 0)
{
lean_dec_ref_known(v___y_681_, 1);
v___y_671_ = v___y_678_;
v___y_672_ = v___y_679_;
v___y_673_ = v___y_680_;
goto v___jp_670_;
}
else
{
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___y_681_;
}
}
v___jp_682_:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = lean_unsigned_to_nat(0u);
v___x_687_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
v___x_688_ = l_Lake_GitRepo_clean(v_repo_308_, v___x_687_);
if (lean_obj_tag(v___x_688_) == 0)
{
lean_object* v_a_689_; lean_object* v___x_690_; uint8_t v___x_691_; 
v_a_689_ = lean_ctor_get(v___x_688_, 1);
lean_inc(v_a_689_);
lean_dec_ref_known(v___x_688_, 2);
v___x_690_ = lean_array_get_size(v_a_689_);
v___x_691_ = lean_nat_dec_lt(v___x_686_, v___x_690_);
if (v___x_691_ == 0)
{
lean_dec(v_a_689_);
v___y_671_ = v___y_683_;
v___y_672_ = v___y_684_;
v___y_673_ = v___y_685_;
goto v___jp_670_;
}
else
{
lean_object* v___x_692_; size_t v___x_693_; size_t v___x_694_; lean_object* v___x_695_; 
v___x_692_ = lean_box(0);
v___x_693_ = ((size_t)0ULL);
v___x_694_ = lean_usize_of_nat(v___x_690_);
v___x_695_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_689_, v___x_693_, v___x_694_, v___x_692_, v___y_683_);
lean_dec(v_a_689_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_dec_ref_known(v___x_695_, 1);
v___y_671_ = v___y_683_;
v___y_672_ = v___y_684_;
v___y_673_ = v___y_685_;
goto v___jp_670_;
}
else
{
v___y_678_ = v___y_683_;
v___y_679_ = v___y_684_;
v___y_680_ = v___y_685_;
v___y_681_ = v___x_695_;
goto v___jp_677_;
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_697_; uint8_t v___x_698_; 
v_a_696_ = lean_ctor_get(v___x_688_, 1);
lean_inc(v_a_696_);
lean_dec_ref_known(v___x_688_, 2);
v___x_697_ = lean_array_get_size(v_a_696_);
v___x_698_ = lean_nat_dec_lt(v___x_686_, v___x_697_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; lean_object* v___x_700_; 
lean_dec(v_a_696_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v___x_699_ = lean_box(0);
v___x_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
return v___x_700_;
}
else
{
lean_object* v___x_701_; size_t v___x_702_; size_t v___x_703_; lean_object* v___x_704_; 
v___x_701_ = lean_box(0);
v___x_702_ = ((size_t)0ULL);
v___x_703_ = lean_usize_of_nat(v___x_697_);
v___x_704_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_696_, v___x_702_, v___x_703_, v___x_701_, v___y_683_);
lean_dec(v_a_696_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_711_ == 0)
{
lean_object* v_unused_712_; 
v_unused_712_ = lean_ctor_get(v___x_704_, 0);
lean_dec(v_unused_712_);
v___x_706_ = v___x_704_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_dec(v___x_704_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
lean_ctor_set_tag(v___x_706_, 1);
lean_ctor_set(v___x_706_, 0, v___x_701_);
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_701_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
else
{
v___y_678_ = v___y_683_;
v___y_679_ = v___y_684_;
v___y_680_ = v___y_685_;
v___y_681_ = v___x_704_;
goto v___jp_677_;
}
}
}
}
v___jp_713_:
{
if (lean_obj_tag(v___y_717_) == 0)
{
lean_dec_ref_known(v___y_717_, 1);
v___y_683_ = v___y_714_;
v___y_684_ = v___y_715_;
v___y_685_ = v___y_716_;
goto v___jp_682_;
}
else
{
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___y_717_;
}
}
v___jp_718_:
{
if (lean_obj_tag(v_a_725_) == 0)
{
v___y_559_ = v___y_719_;
v___y_560_ = v___y_720_;
v___y_561_ = v___y_724_;
v___y_562_ = v___y_721_;
goto v___jp_558_;
}
else
{
lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_766_; 
v_isSharedCheck_766_ = !lean_is_exclusive(v_a_725_);
if (v_isSharedCheck_766_ == 0)
{
lean_object* v_unused_767_; 
v_unused_767_ = lean_ctor_get(v_a_725_, 0);
lean_dec(v_unused_767_);
v___x_727_ = v_a_725_;
v_isShared_728_ = v_isSharedCheck_766_;
goto v_resetjp_726_;
}
else
{
lean_dec(v_a_725_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_766_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
if (v___y_722_ == 0)
{
lean_del_object(v___x_727_);
v___y_559_ = v___y_719_;
v___y_560_ = v___y_720_;
v___y_561_ = v___y_724_;
v___y_562_ = v___y_721_;
goto v___jp_558_;
}
else
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; uint8_t v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
lean_dec_ref(v___y_724_);
v___x_729_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__0));
lean_inc_ref(v_name_307_);
v___x_730_ = lean_string_append(v_name_307_, v___x_729_);
v___x_731_ = lean_string_append(v___x_730_, v___y_720_);
v___x_732_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_checkout___closed__1));
v___x_733_ = lean_string_append(v___x_731_, v___x_732_);
v___x_734_ = 1;
v___x_735_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_735_, 0, v___x_733_);
lean_ctor_set_uint8(v___x_735_, sizeof(void*)*1, v___x_734_);
lean_inc_ref(v___y_721_);
v___x_736_ = lean_apply_2(v___y_721_, v___x_735_, lean_box(0));
v___x_737_ = lean_unsigned_to_nat(0u);
v___x_738_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
v___x_739_ = l_Lake_GitRepo_checkoutDetach(v___y_720_, v_repo_308_, v___x_738_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
lean_del_object(v___x_727_);
v_a_740_ = lean_ctor_get(v___x_739_, 1);
lean_inc(v_a_740_);
lean_dec_ref_known(v___x_739_, 2);
v___x_741_ = lean_array_get_size(v_a_740_);
v___x_742_ = lean_nat_dec_lt(v___x_737_, v___x_741_);
if (v___x_742_ == 0)
{
lean_dec(v_a_740_);
v___y_683_ = v___y_721_;
v___y_684_ = v___y_722_;
v___y_685_ = v___y_723_;
goto v___jp_682_;
}
else
{
lean_object* v___x_743_; size_t v___x_744_; size_t v___x_745_; lean_object* v___x_746_; 
v___x_743_ = lean_box(0);
v___x_744_ = ((size_t)0ULL);
v___x_745_ = lean_usize_of_nat(v___x_741_);
v___x_746_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_740_, v___x_744_, v___x_745_, v___x_743_, v___y_721_);
lean_dec(v_a_740_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_dec_ref_known(v___x_746_, 1);
v___y_683_ = v___y_721_;
v___y_684_ = v___y_722_;
v___y_685_ = v___y_723_;
goto v___jp_682_;
}
else
{
v___y_714_ = v___y_721_;
v___y_715_ = v___y_722_;
v___y_716_ = v___y_723_;
v___y_717_ = v___x_746_;
goto v___jp_713_;
}
}
}
else
{
lean_object* v_a_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v_a_747_ = lean_ctor_get(v___x_739_, 1);
lean_inc(v_a_747_);
lean_dec_ref_known(v___x_739_, 2);
v___x_748_ = lean_array_get_size(v_a_747_);
v___x_749_ = lean_nat_dec_lt(v___x_737_, v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; lean_object* v___x_752_; 
lean_dec(v_a_747_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v___x_750_ = lean_box(0);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 0, v___x_750_);
v___x_752_ = v___x_727_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_750_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
else
{
lean_object* v___x_754_; size_t v___x_755_; size_t v___x_756_; lean_object* v___x_757_; 
lean_del_object(v___x_727_);
v___x_754_ = lean_box(0);
v___x_755_ = ((size_t)0ULL);
v___x_756_ = lean_usize_of_nat(v___x_748_);
v___x_757_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_747_, v___x_755_, v___x_756_, v___x_754_, v___y_721_);
lean_dec(v_a_747_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_764_ == 0)
{
lean_object* v_unused_765_; 
v_unused_765_ = lean_ctor_get(v___x_757_, 0);
lean_dec(v_unused_765_);
v___x_759_ = v___x_757_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_dec(v___x_757_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
lean_ctor_set_tag(v___x_759_, 1);
lean_ctor_set(v___x_759_, 0, v___x_754_);
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_754_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
else
{
v___y_714_ = v___y_721_;
v___y_715_ = v___y_722_;
v___y_716_ = v___y_723_;
v___y_717_ = v___x_757_;
goto v___jp_713_;
}
}
}
}
}
}
}
v___jp_768_:
{
lean_object* v___x_773_; uint8_t v___x_774_; 
v___x_773_ = lean_array_get_size(v___y_771_);
v___x_774_ = lean_nat_dec_lt(v___y_769_, v___x_773_);
if (v___x_774_ == 0)
{
v___y_651_ = v___y_770_;
v_a_652_ = v_val_772_;
goto v___jp_650_;
}
else
{
lean_object* v___x_775_; size_t v___x_776_; size_t v___x_777_; lean_object* v___x_778_; 
v___x_775_ = lean_box(0);
v___x_776_ = ((size_t)0ULL);
v___x_777_ = lean_usize_of_nat(v___x_773_);
v___x_778_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_771_, v___x_776_, v___x_777_, v___x_775_, v___y_770_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_dec_ref_known(v___x_778_, 1);
v___y_651_ = v___y_770_;
v_a_652_ = v_val_772_;
goto v___jp_650_;
}
else
{
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_dec_ref_known(v___x_778_, 1);
goto v___jp_313_;
}
else
{
return v___x_778_;
}
}
}
}
v___jp_779_:
{
lean_object* v___x_785_; lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_785_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
lean_inc_ref(v___y_782_);
v___x_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_786_, 0, v___y_782_);
v___x_787_ = l_Option_instDecidableEq___redArg(v___x_785_, v_a_784_, v___x_786_);
if (v___x_787_ == 0)
{
uint8_t v___x_788_; 
v___x_788_ = l_Lake_GitRev_isFullSha1(v___y_782_);
if (v___x_788_ == 0)
{
v___y_559_ = v___y_780_;
v___y_560_ = v___y_782_;
v___y_561_ = v___y_783_;
v___y_562_ = v___y_781_;
goto v___jp_558_;
}
else
{
lean_object* v___x_789_; lean_object* v___x_790_; uint8_t v___x_791_; 
v___x_789_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
lean_inc_ref(v___y_782_);
v___x_790_ = l_Lake_GitRepo_findCommit_x3f(v___y_782_, v_repo_308_);
v___x_791_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_791_ == 0)
{
v___y_719_ = v___y_780_;
v___y_720_ = v___y_782_;
v___y_721_ = v___y_781_;
v___y_722_ = v___x_788_;
v___y_723_ = v___x_787_;
v___y_724_ = v___y_783_;
v_a_725_ = v___x_790_;
goto v___jp_718_;
}
else
{
lean_object* v___x_792_; size_t v___x_793_; size_t v___x_794_; lean_object* v___x_795_; 
v___x_792_ = lean_box(0);
v___x_793_ = ((size_t)0ULL);
v___x_794_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_795_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_789_, v___x_793_, v___x_794_, v___x_792_, v___y_781_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_dec_ref_known(v___x_795_, 1);
v___y_719_ = v___y_780_;
v___y_720_ = v___y_782_;
v___y_721_ = v___y_781_;
v___y_722_ = v___x_788_;
v___y_723_ = v___x_787_;
v___y_724_ = v___y_783_;
v_a_725_ = v___x_790_;
goto v___jp_718_;
}
else
{
lean_dec(v___x_790_);
lean_dec_ref(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___x_795_;
}
}
}
}
else
{
lean_object* v___x_796_; lean_object* v___x_797_; uint8_t v___x_798_; 
lean_dec_ref(v___y_783_);
lean_dec_ref(v___y_782_);
v___x_796_ = lean_unsigned_to_nat(0u);
v___x_797_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
v___x_798_ = l_Lake_GitRepo_hasNoDiff(v_repo_308_);
if (v___x_798_ == 0)
{
v___y_769_ = v___x_796_;
v___y_770_ = v___y_781_;
v___y_771_ = v___x_797_;
v_val_772_ = v___x_787_;
goto v___jp_768_;
}
else
{
uint8_t v___x_799_; 
v___x_799_ = 0;
v___y_769_ = v___x_796_;
v___y_770_ = v___y_781_;
v___y_771_ = v___x_797_;
v_val_772_ = v___x_799_;
goto v___jp_768_;
}
}
}
v___jp_800_:
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; uint8_t v___x_808_; 
v___x_805_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_806_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__0));
lean_inc_ref(v_repo_308_);
v___x_807_ = l_Lake_GitRepo_resolveRevision_x3f(v___x_806_, v_repo_308_);
v___x_808_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_808_ == 0)
{
v___y_780_ = v___y_801_;
v___y_781_ = v___y_804_;
v___y_782_ = v___y_802_;
v___y_783_ = v___y_803_;
v_a_784_ = v___x_807_;
goto v___jp_779_;
}
else
{
lean_object* v___x_809_; size_t v___x_810_; size_t v___x_811_; lean_object* v___x_812_; 
v___x_809_ = lean_box(0);
v___x_810_ = ((size_t)0ULL);
v___x_811_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_812_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_805_, v___x_810_, v___x_811_, v___x_809_, v___y_804_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_dec_ref_known(v___x_812_, 1);
v___y_780_ = v___y_801_;
v___y_781_ = v___y_804_;
v___y_782_ = v___y_802_;
v___y_783_ = v___y_803_;
v_a_784_ = v___x_807_;
goto v___jp_779_;
}
else
{
lean_dec(v___x_807_);
lean_dec_ref(v___y_803_);
lean_dec_ref(v___y_802_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___x_812_;
}
}
}
v___jp_813_:
{
if (lean_obj_tag(v___y_817_) == 0)
{
lean_dec_ref_known(v___y_817_, 1);
v___y_801_ = v___y_814_;
v___y_802_ = v___y_815_;
v___y_803_ = v___y_816_;
v___y_804_ = v___y_311_;
goto v___jp_800_;
}
else
{
lean_dec_ref(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___y_817_;
}
}
v___jp_818_:
{
if (lean_obj_tag(v___y_822_) == 0)
{
lean_dec_ref_known(v___y_822_, 1);
v___y_801_ = v___y_819_;
v___y_802_ = v___y_820_;
v___y_803_ = v___y_821_;
v___y_804_ = v___y_311_;
goto v___jp_800_;
}
else
{
lean_dec_ref(v___y_821_);
lean_dec_ref(v___y_820_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___y_822_;
}
}
v___jp_823_:
{
if (lean_obj_tag(v_a_827_) == 1)
{
lean_object* v_val_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_871_; 
v_val_828_ = lean_ctor_get(v_a_827_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v_a_827_);
if (v_isSharedCheck_871_ == 0)
{
v___x_830_ = v_a_827_;
v_isShared_831_ = v_isSharedCheck_871_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_val_828_);
lean_dec(v_a_827_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_871_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
uint8_t v___x_832_; 
v___x_832_ = lean_string_dec_eq(v_val_828_, v___y_826_);
if (v___x_832_ == 0)
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_833_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__5));
lean_inc_ref(v_name_307_);
v___x_834_ = lean_string_append(v_name_307_, v___x_833_);
v___x_835_ = lean_string_append(v___x_834_, v_val_828_);
lean_dec(v_val_828_);
v___x_836_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__6));
v___x_837_ = lean_string_append(v___x_835_, v___x_836_);
v___x_838_ = lean_string_append(v___x_837_, v___y_826_);
v___x_839_ = 1;
v___x_840_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_840_, 0, v___x_838_);
lean_ctor_set_uint8(v___x_840_, sizeof(void*)*1, v___x_839_);
lean_inc_ref(v___y_311_);
v___x_841_ = lean_apply_2(v___y_311_, v___x_840_, lean_box(0));
v___x_842_ = lean_unsigned_to_nat(0u);
v___x_843_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
lean_inc_ref(v___y_826_);
lean_inc_ref(v___y_824_);
v___x_844_ = l_Lake_GitRepo_setRemoteUrl(v___y_824_, v___y_826_, v_repo_308_, v___x_843_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; lean_object* v___x_846_; uint8_t v___x_847_; 
lean_del_object(v___x_830_);
v_a_845_ = lean_ctor_get(v___x_844_, 1);
lean_inc(v_a_845_);
lean_dec_ref_known(v___x_844_, 2);
v___x_846_ = lean_array_get_size(v_a_845_);
v___x_847_ = lean_nat_dec_lt(v___x_842_, v___x_846_);
if (v___x_847_ == 0)
{
lean_dec(v_a_845_);
v___y_801_ = v___y_824_;
v___y_802_ = v___y_825_;
v___y_803_ = v___y_826_;
v___y_804_ = v___y_311_;
goto v___jp_800_;
}
else
{
lean_object* v___x_848_; size_t v___x_849_; size_t v___x_850_; lean_object* v___x_851_; 
v___x_848_ = lean_box(0);
v___x_849_ = ((size_t)0ULL);
v___x_850_ = lean_usize_of_nat(v___x_846_);
v___x_851_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_845_, v___x_849_, v___x_850_, v___x_848_, v___y_311_);
lean_dec(v_a_845_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_dec_ref_known(v___x_851_, 1);
v___y_801_ = v___y_824_;
v___y_802_ = v___y_825_;
v___y_803_ = v___y_826_;
v___y_804_ = v___y_311_;
goto v___jp_800_;
}
else
{
v___y_819_ = v___y_824_;
v___y_820_ = v___y_825_;
v___y_821_ = v___y_826_;
v___y_822_ = v___x_851_;
goto v___jp_818_;
}
}
}
else
{
lean_object* v_a_852_; lean_object* v___x_853_; uint8_t v___x_854_; 
v_a_852_ = lean_ctor_get(v___x_844_, 1);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_844_, 2);
v___x_853_ = lean_array_get_size(v_a_852_);
v___x_854_ = lean_nat_dec_lt(v___x_842_, v___x_853_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; lean_object* v___x_857_; 
lean_dec(v_a_852_);
lean_dec_ref(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v___x_855_ = lean_box(0);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 0, v___x_855_);
v___x_857_ = v___x_830_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_855_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
else
{
lean_object* v___x_859_; size_t v___x_860_; size_t v___x_861_; lean_object* v___x_862_; 
lean_del_object(v___x_830_);
v___x_859_ = lean_box(0);
v___x_860_ = ((size_t)0ULL);
v___x_861_ = lean_usize_of_nat(v___x_853_);
v___x_862_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_852_, v___x_860_, v___x_861_, v___x_859_, v___y_311_);
lean_dec(v_a_852_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
lean_dec_ref(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_869_ == 0)
{
lean_object* v_unused_870_; 
v_unused_870_ = lean_ctor_get(v___x_862_, 0);
lean_dec(v_unused_870_);
v___x_864_ = v___x_862_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_dec(v___x_862_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
lean_ctor_set_tag(v___x_864_, 1);
lean_ctor_set(v___x_864_, 0, v___x_859_);
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_859_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
else
{
v___y_819_ = v___y_824_;
v___y_820_ = v___y_825_;
v___y_821_ = v___y_826_;
v___y_822_ = v___x_862_;
goto v___jp_818_;
}
}
}
}
else
{
lean_del_object(v___x_830_);
lean_dec(v_val_828_);
v___y_801_ = v___y_824_;
v___y_802_ = v___y_825_;
v___y_803_ = v___y_826_;
v___y_804_ = v___y_311_;
goto v___jp_800_;
}
}
}
else
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
lean_dec(v_a_827_);
v___x_872_ = lean_unsigned_to_nat(0u);
v___x_873_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
lean_inc_ref(v___y_826_);
lean_inc_ref(v___y_824_);
v___x_874_ = l_Lake_GitRepo_addRemote(v___y_824_, v___y_826_, v_repo_308_, v___x_873_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v___x_876_; uint8_t v___x_877_; 
v_a_875_ = lean_ctor_get(v___x_874_, 1);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_874_, 2);
v___x_876_ = lean_array_get_size(v_a_875_);
v___x_877_ = lean_nat_dec_lt(v___x_872_, v___x_876_);
if (v___x_877_ == 0)
{
lean_dec(v_a_875_);
v___y_801_ = v___y_824_;
v___y_802_ = v___y_825_;
v___y_803_ = v___y_826_;
v___y_804_ = v___y_311_;
goto v___jp_800_;
}
else
{
lean_object* v___x_878_; size_t v___x_879_; size_t v___x_880_; lean_object* v___x_881_; 
v___x_878_ = lean_box(0);
v___x_879_ = ((size_t)0ULL);
v___x_880_ = lean_usize_of_nat(v___x_876_);
v___x_881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_875_, v___x_879_, v___x_880_, v___x_878_, v___y_311_);
lean_dec(v_a_875_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_dec_ref_known(v___x_881_, 1);
v___y_801_ = v___y_824_;
v___y_802_ = v___y_825_;
v___y_803_ = v___y_826_;
v___y_804_ = v___y_311_;
goto v___jp_800_;
}
else
{
v___y_814_ = v___y_824_;
v___y_815_ = v___y_825_;
v___y_816_ = v___y_826_;
v___y_817_ = v___x_881_;
goto v___jp_813_;
}
}
}
else
{
lean_object* v_a_882_; lean_object* v___x_883_; uint8_t v___x_884_; 
v_a_882_ = lean_ctor_get(v___x_874_, 1);
lean_inc(v_a_882_);
lean_dec_ref_known(v___x_874_, 2);
v___x_883_ = lean_array_get_size(v_a_882_);
v___x_884_ = lean_nat_dec_lt(v___x_872_, v___x_883_);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; lean_object* v___x_886_; 
lean_dec(v_a_882_);
lean_dec_ref(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v___x_885_ = lean_box(0);
v___x_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_886_, 0, v___x_885_);
return v___x_886_;
}
else
{
lean_object* v___x_887_; size_t v___x_888_; size_t v___x_889_; lean_object* v___x_890_; 
v___x_887_ = lean_box(0);
v___x_888_ = ((size_t)0ULL);
v___x_889_ = lean_usize_of_nat(v___x_883_);
v___x_890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_882_, v___x_888_, v___x_889_, v___x_887_, v___y_311_);
lean_dec(v_a_882_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec_ref(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_897_ == 0)
{
lean_object* v_unused_898_; 
v_unused_898_ = lean_ctor_get(v___x_890_, 0);
lean_dec(v_unused_898_);
v___x_892_ = v___x_890_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_dec(v___x_890_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 1);
lean_ctor_set(v___x_892_, 0, v___x_887_);
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_887_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
else
{
v___y_814_ = v___y_824_;
v___y_815_ = v___y_825_;
v___y_816_ = v___y_826_;
v___y_817_ = v___x_890_;
goto v___jp_813_;
}
}
}
}
}
v___jp_899_:
{
if (v_a_903_ == 0)
{
lean_object* v___x_904_; lean_object* v___x_905_; uint8_t v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_904_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__7));
lean_inc_ref(v_name_307_);
v___x_905_ = lean_string_append(v_name_307_, v___x_904_);
v___x_906_ = 1;
v___x_907_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_907_, 0, v___x_905_);
lean_ctor_set_uint8(v___x_907_, sizeof(void*)*1, v___x_906_);
lean_inc_ref(v___y_311_);
v___x_908_ = lean_apply_2(v___y_311_, v___x_907_, lean_box(0));
lean_inc_ref(v_repo_308_);
v___x_909_ = l_IO_FS_createDirAll(v_repo_308_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_942_; 
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_909_, 0);
lean_dec(v_unused_943_);
v___x_911_ = v___x_909_;
v_isShared_912_ = v_isSharedCheck_942_;
goto v_resetjp_910_;
}
else
{
lean_dec(v___x_909_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_942_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_913_ = lean_unsigned_to_nat(0u);
v___x_914_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
v___x_915_ = l_Lake_GitRepo_quietInit(v_repo_308_, v___x_914_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
lean_del_object(v___x_911_);
v_a_916_ = lean_ctor_get(v___x_915_, 1);
lean_inc(v_a_916_);
lean_dec_ref_known(v___x_915_, 2);
v___x_917_ = lean_array_get_size(v_a_916_);
v___x_918_ = lean_nat_dec_lt(v___x_913_, v___x_917_);
if (v___x_918_ == 0)
{
lean_dec(v_a_916_);
v___y_606_ = v___y_900_;
v___y_607_ = v___y_901_;
v___y_608_ = v___y_902_;
goto v___jp_605_;
}
else
{
lean_object* v___x_919_; size_t v___x_920_; size_t v___x_921_; lean_object* v___x_922_; 
v___x_919_ = lean_box(0);
v___x_920_ = ((size_t)0ULL);
v___x_921_ = lean_usize_of_nat(v___x_917_);
v___x_922_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_916_, v___x_920_, v___x_921_, v___x_919_, v___y_311_);
lean_dec(v_a_916_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_dec_ref_known(v___x_922_, 1);
v___y_606_ = v___y_900_;
v___y_607_ = v___y_901_;
v___y_608_ = v___y_902_;
goto v___jp_605_;
}
else
{
v___y_637_ = v___y_900_;
v___y_638_ = v___y_901_;
v___y_639_ = v___y_902_;
v___y_640_ = v___x_922_;
goto v___jp_636_;
}
}
}
else
{
lean_object* v_a_923_; lean_object* v___x_924_; uint8_t v___x_925_; 
v_a_923_ = lean_ctor_get(v___x_915_, 1);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_915_, 2);
v___x_924_ = lean_array_get_size(v_a_923_);
v___x_925_ = lean_nat_dec_lt(v___x_913_, v___x_924_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; lean_object* v___x_928_; 
lean_dec(v_a_923_);
lean_dec_ref(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v___x_926_ = lean_box(0);
if (v_isShared_912_ == 0)
{
lean_ctor_set_tag(v___x_911_, 1);
lean_ctor_set(v___x_911_, 0, v___x_926_);
v___x_928_ = v___x_911_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_926_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
else
{
lean_object* v___x_930_; size_t v___x_931_; size_t v___x_932_; lean_object* v___x_933_; 
lean_del_object(v___x_911_);
v___x_930_ = lean_box(0);
v___x_931_ = ((size_t)0ULL);
v___x_932_ = lean_usize_of_nat(v___x_924_);
v___x_933_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_923_, v___x_931_, v___x_932_, v___x_930_, v___y_311_);
lean_dec(v_a_923_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
lean_dec_ref(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_940_ == 0)
{
lean_object* v_unused_941_; 
v_unused_941_ = lean_ctor_get(v___x_933_, 0);
lean_dec(v_unused_941_);
v___x_935_ = v___x_933_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_dec(v___x_933_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
lean_ctor_set_tag(v___x_935_, 1);
lean_ctor_set(v___x_935_, 0, v___x_930_);
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v___x_930_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
else
{
v___y_637_ = v___y_900_;
v___y_638_ = v___y_901_;
v___y_639_ = v___y_902_;
v___y_640_ = v___x_933_;
goto v___jp_636_;
}
}
}
}
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_956_; 
lean_dec_ref(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
v_a_944_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_956_ == 0)
{
v___x_946_ = v___x_909_;
v_isShared_947_ = v_isSharedCheck_956_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_909_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_956_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_948_; uint8_t v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_954_; 
v___x_948_ = lean_io_error_to_string(v_a_944_);
v___x_949_ = 3;
v___x_950_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_950_, 0, v___x_948_);
lean_ctor_set_uint8(v___x_950_, sizeof(void*)*1, v___x_949_);
lean_inc_ref(v___y_311_);
v___x_951_ = lean_apply_2(v___y_311_, v___x_950_, lean_box(0));
v___x_952_ = lean_box(0);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_952_);
v___x_954_ = v___x_946_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_952_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
else
{
lean_object* v___x_957_; lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_957_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_repo_308_);
lean_inc_ref(v___y_900_);
v___x_958_ = l_Lake_GitRepo_getRemoteUrl_x3f(v___y_900_, v_repo_308_);
v___x_959_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_959_ == 0)
{
v___y_824_ = v___y_900_;
v___y_825_ = v___y_901_;
v___y_826_ = v___y_902_;
v_a_827_ = v___x_958_;
goto v___jp_823_;
}
else
{
lean_object* v___x_960_; size_t v___x_961_; size_t v___x_962_; lean_object* v___x_963_; 
v___x_960_ = lean_box(0);
v___x_961_ = ((size_t)0ULL);
v___x_962_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_963_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_957_, v___x_961_, v___x_962_, v___x_960_, v___y_311_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_dec_ref_known(v___x_963_, 1);
v___y_824_ = v___y_900_;
v___y_825_ = v___y_901_;
v___y_826_ = v___y_902_;
v_a_827_ = v___x_958_;
goto v___jp_823_;
}
else
{
lean_dec(v___x_958_);
lean_dec_ref(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___x_963_;
}
}
}
}
v___jp_964_:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; uint8_t v___x_972_; 
v___x_968_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_969_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___closed__8));
lean_inc_ref(v_repo_308_);
v___x_970_ = l_System_FilePath_join(v_repo_308_, v___x_969_);
v___x_971_ = l_System_FilePath_pathExists(v___x_970_);
lean_dec_ref(v___x_970_);
v___x_972_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_972_ == 0)
{
v___y_900_ = v___y_965_;
v___y_901_ = v___y_966_;
v___y_902_ = v_a_967_;
v_a_903_ = v___x_971_;
goto v___jp_899_;
}
else
{
lean_object* v___x_973_; size_t v___x_974_; size_t v___x_975_; lean_object* v___x_976_; 
v___x_973_ = lean_box(0);
v___x_974_ = ((size_t)0ULL);
v___x_975_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_976_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_968_, v___x_974_, v___x_975_, v___x_973_, v___y_311_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_dec_ref_known(v___x_976_, 1);
v___y_900_ = v___y_965_;
v___y_901_ = v___y_966_;
v___y_902_ = v_a_967_;
v_a_903_ = v___x_971_;
goto v___jp_899_;
}
else
{
lean_dec_ref(v_a_967_);
lean_dec_ref(v___y_966_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___x_976_;
}
}
}
v___jp_977_:
{
if (lean_obj_tag(v_a_980_) == 1)
{
lean_object* v_val_981_; 
lean_dec_ref(v_url_309_);
v_val_981_ = lean_ctor_get(v_a_980_, 0);
lean_inc(v_val_981_);
lean_dec_ref_known(v_a_980_, 1);
v___y_965_ = v___y_978_;
v___y_966_ = v___y_979_;
v_a_967_ = v_val_981_;
goto v___jp_964_;
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; uint8_t v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
lean_dec(v_a_980_);
lean_dec_ref(v___y_979_);
lean_dec_ref(v_repo_308_);
v___x_982_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__0));
v___x_983_ = lean_string_append(v_name_307_, v___x_982_);
v___x_984_ = lean_string_append(v___x_983_, v_url_309_);
lean_dec_ref(v_url_309_);
v___x_985_ = 3;
v___x_986_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_986_, 0, v___x_984_);
lean_ctor_set_uint8(v___x_986_, sizeof(void*)*1, v___x_985_);
lean_inc_ref(v___y_311_);
v___x_987_ = lean_apply_2(v___y_311_, v___x_986_, lean_box(0));
v___x_988_ = lean_box(0);
v___x_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_989_, 0, v___x_988_);
return v___x_989_;
}
}
v___jp_990_:
{
lean_object* v___x_996_; uint8_t v___x_997_; 
v___x_996_ = lean_array_get_size(v___y_994_);
v___x_997_ = lean_nat_dec_lt(v___y_993_, v___x_996_);
if (v___x_997_ == 0)
{
v___y_978_ = v___y_991_;
v___y_979_ = v___y_992_;
v_a_980_ = v_val_995_;
goto v___jp_977_;
}
else
{
lean_object* v___x_998_; size_t v___x_999_; size_t v___x_1000_; lean_object* v___x_1001_; 
v___x_998_ = lean_box(0);
v___x_999_ = ((size_t)0ULL);
v___x_1000_ = lean_usize_of_nat(v___x_996_);
v___x_1001_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_994_, v___x_999_, v___x_1000_, v___x_998_, v___y_311_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_dec_ref_known(v___x_1001_, 1);
v___y_978_ = v___y_991_;
v___y_979_ = v___y_992_;
v_a_980_ = v_val_995_;
goto v___jp_977_;
}
else
{
lean_dec(v_val_995_);
lean_dec_ref(v___y_992_);
lean_dec_ref(v_url_309_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___x_1001_;
}
}
}
v___jp_1002_:
{
if (v_a_1005_ == 0)
{
v___y_965_ = v___y_1003_;
v___y_966_ = v___y_1004_;
v_a_967_ = v_url_309_;
goto v___jp_964_;
}
else
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_1006_ = lean_unsigned_to_nat(0u);
v___x_1007_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_url_309_);
v___x_1008_ = l_Lake_resolvePath(v_url_309_);
v___x_1009_ = lean_string_utf8_byte_size(v___x_1008_);
v___x_1010_ = lean_nat_dec_eq(v___x_1009_, v___x_1006_);
if (v___x_1010_ == 0)
{
lean_object* v___x_1011_; 
v___x_1011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1008_);
v___y_991_ = v___y_1003_;
v___y_992_ = v___y_1004_;
v___y_993_ = v___x_1006_;
v___y_994_ = v___x_1007_;
v_val_995_ = v___x_1011_;
goto v___jp_990_;
}
else
{
lean_object* v___x_1012_; 
lean_dec_ref(v___x_1008_);
v___x_1012_ = lean_box(0);
v___y_991_ = v___y_1003_;
v___y_992_ = v___y_1004_;
v___y_993_ = v___x_1006_;
v___y_994_ = v___x_1007_;
v_val_995_ = v___x_1012_;
goto v___jp_990_;
}
}
}
v___jp_1013_:
{
lean_object* v_remote_1015_; lean_object* v___x_1016_; uint8_t v___x_1017_; uint8_t v___x_1018_; 
v_remote_1015_ = l_Lake_Git_defaultRemote;
v___x_1016_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_1017_ = l_System_FilePath_pathExists(v_url_309_);
v___x_1018_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_1018_ == 0)
{
v___y_1003_ = v_remote_1015_;
v___y_1004_ = v___y_1014_;
v_a_1005_ = v___x_1017_;
goto v___jp_1002_;
}
else
{
lean_object* v___x_1019_; size_t v___x_1020_; size_t v___x_1021_; lean_object* v___x_1022_; 
v___x_1019_ = lean_box(0);
v___x_1020_ = ((size_t)0ULL);
v___x_1021_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_1022_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_1016_, v___x_1020_, v___x_1021_, v___x_1019_, v___y_311_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_dec_ref_known(v___x_1022_, 1);
v___y_1003_ = v_remote_1015_;
v___y_1004_ = v___y_1014_;
v_a_1005_ = v___x_1017_;
goto v___jp_1002_;
}
else
{
lean_dec_ref(v___y_1014_);
lean_dec_ref(v_url_309_);
lean_dec_ref(v_repo_308_);
lean_dec_ref(v_name_307_);
return v___x_1022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo___boxed(lean_object* v_name_1025_, lean_object* v_repo_1026_, lean_object* v_url_1027_, lean_object* v_rev_x3f_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo(v_name_1025_, v_repo_1026_, v_url_1027_, v_rev_x3f_1028_, v___y_1029_);
lean_dec_ref(v___y_1029_);
return v_res_1031_;
}
}
static lean_object* _init_l_Lake_instInhabitedMaterializedDep_default___closed__4(void){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1038_ = l_Lake_instInhabitedPackageEntry_default;
v___x_1039_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__3));
v___x_1040_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
v___x_1041_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
lean_ctor_set(v___x_1041_, 2, v___x_1040_);
lean_ctor_set(v___x_1041_, 3, v___x_1039_);
lean_ctor_set(v___x_1041_, 4, v___x_1038_);
return v___x_1041_;
}
}
static lean_object* _init_l_Lake_instInhabitedMaterializedDep_default(void){
_start:
{
lean_object* v___x_1042_; 
v___x_1042_ = lean_obj_once(&l_Lake_instInhabitedMaterializedDep_default___closed__4, &l_Lake_instInhabitedMaterializedDep_default___closed__4_once, _init_l_Lake_instInhabitedMaterializedDep_default___closed__4);
return v___x_1042_;
}
}
static lean_object* _init_l_Lake_instInhabitedMaterializedDep(void){
_start:
{
lean_object* v___x_1043_; 
v___x_1043_ = l_Lake_instInhabitedMaterializedDep_default;
return v___x_1043_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_name(lean_object* v_self_1044_){
_start:
{
lean_object* v_manifestEntry_1045_; lean_object* v_name_1046_; 
v_manifestEntry_1045_ = lean_ctor_get(v_self_1044_, 4);
v_name_1046_ = lean_ctor_get(v_manifestEntry_1045_, 0);
lean_inc(v_name_1046_);
return v_name_1046_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_name___boxed(lean_object* v_self_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lake_MaterializedDep_name(v_self_1047_);
lean_dec_ref(v_self_1047_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_prettyName(lean_object* v_self_1049_){
_start:
{
lean_object* v_manifestEntry_1050_; lean_object* v_name_1051_; uint8_t v___x_1052_; lean_object* v___x_1053_; 
v_manifestEntry_1050_ = lean_ctor_get(v_self_1049_, 4);
lean_inc_ref(v_manifestEntry_1050_);
lean_dec_ref(v_self_1049_);
v_name_1051_ = lean_ctor_get(v_manifestEntry_1050_, 0);
lean_inc(v_name_1051_);
lean_dec_ref(v_manifestEntry_1050_);
v___x_1052_ = 0;
v___x_1053_ = l_Lean_Name_toString(v_name_1051_, v___x_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_scope(lean_object* v_self_1054_){
_start:
{
lean_object* v_manifestEntry_1055_; lean_object* v_scope_1056_; 
v_manifestEntry_1055_ = lean_ctor_get(v_self_1054_, 4);
v_scope_1056_ = lean_ctor_get(v_manifestEntry_1055_, 1);
lean_inc_ref(v_scope_1056_);
return v_scope_1056_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_scope___boxed(lean_object* v_self_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_Lake_MaterializedDep_scope(v_self_1057_);
lean_dec_ref(v_self_1057_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile_x3f(lean_object* v_self_1059_){
_start:
{
lean_object* v_manifestEntry_1060_; lean_object* v_manifestFile_x3f_1061_; 
v_manifestEntry_1060_ = lean_ctor_get(v_self_1059_, 4);
v_manifestFile_x3f_1061_ = lean_ctor_get(v_manifestEntry_1060_, 3);
lean_inc(v_manifestFile_x3f_1061_);
return v_manifestFile_x3f_1061_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile_x3f___boxed(lean_object* v_self_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lake_MaterializedDep_relManifestFile_x3f(v_self_1062_);
lean_dec_ref(v_self_1062_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile(lean_object* v_self_1064_){
_start:
{
lean_object* v_manifestEntry_1065_; lean_object* v_manifestFile_x3f_1066_; 
v_manifestEntry_1065_ = lean_ctor_get(v_self_1064_, 4);
v_manifestFile_x3f_1066_ = lean_ctor_get(v_manifestEntry_1065_, 3);
if (lean_obj_tag(v_manifestFile_x3f_1066_) == 0)
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lake_defaultManifestFile;
return v___x_1067_;
}
else
{
lean_object* v_val_1068_; 
v_val_1068_ = lean_ctor_get(v_manifestFile_x3f_1066_, 0);
lean_inc(v_val_1068_);
return v_val_1068_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relManifestFile___boxed(lean_object* v_self_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Lake_MaterializedDep_relManifestFile(v_self_1069_);
lean_dec_ref(v_self_1069_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_manifestFile(lean_object* v_self_1071_){
_start:
{
lean_object* v_manifestEntry_1072_; lean_object* v_manifestFile_x3f_1073_; 
v_manifestEntry_1072_ = lean_ctor_get(v_self_1071_, 4);
v_manifestFile_x3f_1073_ = lean_ctor_get(v_manifestEntry_1072_, 3);
if (lean_obj_tag(v_manifestFile_x3f_1073_) == 0)
{
lean_object* v_pkgDir_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v_pkgDir_1074_ = lean_ctor_get(v_self_1071_, 0);
lean_inc_ref(v_pkgDir_1074_);
lean_dec_ref(v_self_1071_);
v___x_1075_ = l_Lake_defaultManifestFile;
v___x_1076_ = l_Lake_joinRelative(v_pkgDir_1074_, v___x_1075_);
return v___x_1076_;
}
else
{
lean_object* v_pkgDir_1077_; lean_object* v_val_1078_; lean_object* v___x_1079_; 
lean_inc_ref(v_manifestFile_x3f_1073_);
v_pkgDir_1077_ = lean_ctor_get(v_self_1071_, 0);
lean_inc_ref(v_pkgDir_1077_);
lean_dec_ref(v_self_1071_);
v_val_1078_ = lean_ctor_get(v_manifestFile_x3f_1073_, 0);
lean_inc(v_val_1078_);
lean_dec_ref_known(v_manifestFile_x3f_1073_, 1);
v___x_1079_ = l_Lake_joinRelative(v_pkgDir_1077_, v_val_1078_);
return v___x_1079_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relConfigFile(lean_object* v_self_1080_){
_start:
{
lean_object* v_manifestEntry_1081_; lean_object* v_configFile_1082_; 
v_manifestEntry_1081_ = lean_ctor_get(v_self_1080_, 4);
v_configFile_1082_ = lean_ctor_get(v_manifestEntry_1081_, 2);
lean_inc_ref(v_configFile_1082_);
return v_configFile_1082_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_relConfigFile___boxed(lean_object* v_self_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lake_MaterializedDep_relConfigFile(v_self_1083_);
lean_dec_ref(v_self_1083_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_configFile(lean_object* v_self_1085_){
_start:
{
lean_object* v_manifestEntry_1086_; lean_object* v_pkgDir_1087_; lean_object* v_configFile_1088_; lean_object* v___x_1089_; 
v_manifestEntry_1086_ = lean_ctor_get(v_self_1085_, 4);
lean_inc_ref(v_manifestEntry_1086_);
v_pkgDir_1087_ = lean_ctor_get(v_self_1085_, 0);
lean_inc_ref(v_pkgDir_1087_);
lean_dec_ref(v_self_1085_);
v_configFile_1088_ = lean_ctor_get(v_manifestEntry_1086_, 2);
lean_inc_ref(v_configFile_1088_);
lean_dec_ref(v_manifestEntry_1086_);
v___x_1089_ = l_Lake_joinRelative(v_pkgDir_1087_, v_configFile_1088_);
return v___x_1089_;
}
}
LEAN_EXPORT uint8_t l_Lake_MaterializedDep_fixedToolchain(lean_object* v_self_1090_){
_start:
{
lean_object* v_manifest_x3f_1091_; 
v_manifest_x3f_1091_ = lean_ctor_get(v_self_1090_, 3);
if (lean_obj_tag(v_manifest_x3f_1091_) == 1)
{
lean_object* v_a_1092_; uint8_t v_fixedToolchain_1093_; 
v_a_1092_ = lean_ctor_get(v_manifest_x3f_1091_, 0);
v_fixedToolchain_1093_ = lean_ctor_get_uint8(v_a_1092_, sizeof(void*)*4);
return v_fixedToolchain_1093_;
}
else
{
uint8_t v___x_1094_; 
v___x_1094_ = 0;
return v___x_1094_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MaterializedDep_fixedToolchain___boxed(lean_object* v_self_1095_){
_start:
{
uint8_t v_res_1096_; lean_object* v_r_1097_; 
v_res_1096_ = l_Lake_MaterializedDep_fixedToolchain(v_self_1095_);
lean_dec_ref(v_self_1095_);
v_r_1097_ = lean_box(v_res_1096_);
return v_r_1097_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed(lean_object* v_dep_1106_){
_start:
{
lean_object* v_name_1107_; lean_object* v_scope_1108_; lean_object* v_version_1109_; lean_object* v_fst_1111_; lean_object* v_snd_1112_; 
v_name_1107_ = lean_ctor_get(v_dep_1106_, 0);
lean_inc(v_name_1107_);
v_scope_1108_ = lean_ctor_get(v_dep_1106_, 1);
lean_inc_ref(v_scope_1108_);
v_version_1109_ = lean_ctor_get(v_dep_1106_, 2);
lean_inc(v_version_1109_);
lean_dec_ref(v_dep_1106_);
switch(lean_obj_tag(v_version_1109_))
{
case 0:
{
lean_object* v___x_1135_; 
v___x_1135_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
v_fst_1111_ = v___x_1135_;
v_snd_1112_ = v___x_1135_;
goto v___jp_1110_;
}
case 1:
{
lean_object* v_rev_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1151_; 
v_rev_1136_ = lean_ctor_get(v_version_1109_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v_version_1109_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1138_ = v_version_1109_;
v_isShared_1139_ = v_isSharedCheck_1151_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_rev_1136_);
lean_dec(v_version_1109_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1151_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1143_; 
v___x_1140_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__5));
v___x_1141_ = l_String_quote(v_rev_1136_);
if (v_isShared_1139_ == 0)
{
lean_ctor_set_tag(v___x_1138_, 3);
lean_ctor_set(v___x_1138_, 0, v___x_1141_);
v___x_1143_ = v___x_1138_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v___x_1141_);
v___x_1143_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1144_ = l_Std_Format_defWidth;
v___x_1145_ = lean_unsigned_to_nat(0u);
v___x_1146_ = l_Std_Format_pretty(v___x_1143_, v___x_1144_, v___x_1145_, v___x_1145_);
v___x_1147_ = lean_string_append(v___x_1140_, v___x_1146_);
v___x_1148_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__6));
v___x_1149_ = lean_string_append(v___x_1148_, v___x_1146_);
lean_dec_ref(v___x_1146_);
v_fst_1111_ = v___x_1147_;
v_snd_1112_ = v___x_1149_;
goto v___jp_1110_;
}
}
}
default: 
{
lean_object* v_ver_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1168_; 
v_ver_1152_ = lean_ctor_get(v_version_1109_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v_version_1109_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1154_ = v_version_1109_;
v_isShared_1155_ = v_isSharedCheck_1168_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_ver_1152_);
lean_dec(v_version_1109_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1168_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v_toString_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1160_; 
v_toString_1156_ = lean_ctor_get(v_ver_1152_, 0);
lean_inc_ref(v_toString_1156_);
lean_dec_ref(v_ver_1152_);
v___x_1157_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__5));
v___x_1158_ = l_String_quote(v_toString_1156_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set_tag(v___x_1154_, 3);
lean_ctor_set(v___x_1154_, 0, v___x_1158_);
v___x_1160_ = v___x_1154_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1158_);
v___x_1160_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1161_ = l_Std_Format_defWidth;
v___x_1162_ = lean_unsigned_to_nat(0u);
v___x_1163_ = l_Std_Format_pretty(v___x_1160_, v___x_1161_, v___x_1162_, v___x_1162_);
v___x_1164_ = lean_string_append(v___x_1157_, v___x_1163_);
v___x_1165_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__7));
v___x_1166_ = lean_string_append(v___x_1165_, v___x_1163_);
lean_dec_ref(v___x_1163_);
v_fst_1111_ = v___x_1164_;
v_snd_1112_ = v___x_1166_;
goto v___jp_1110_;
}
}
}
}
v___jp_1110_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; uint8_t v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1113_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0));
lean_inc_ref(v_scope_1108_);
v___x_1114_ = lean_string_append(v_scope_1108_, v___x_1113_);
v___x_1115_ = 0;
v___x_1116_ = l_Lean_Name_toString(v_name_1107_, v___x_1115_);
v___x_1117_ = lean_string_append(v___x_1114_, v___x_1116_);
v___x_1118_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__1));
v___x_1119_ = lean_string_append(v___x_1117_, v___x_1118_);
v___x_1120_ = lean_string_append(v___x_1119_, v_scope_1108_);
v___x_1121_ = lean_string_append(v___x_1120_, v___x_1113_);
v___x_1122_ = lean_string_append(v___x_1121_, v___x_1116_);
v___x_1123_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__2));
v___x_1124_ = lean_string_append(v___x_1122_, v___x_1123_);
v___x_1125_ = lean_string_append(v___x_1124_, v_fst_1111_);
lean_dec_ref(v_fst_1111_);
v___x_1126_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__3));
v___x_1127_ = lean_string_append(v___x_1125_, v___x_1126_);
v___x_1128_ = lean_string_append(v___x_1127_, v_scope_1108_);
lean_dec_ref(v_scope_1108_);
v___x_1129_ = lean_string_append(v___x_1128_, v___x_1113_);
v___x_1130_ = lean_string_append(v___x_1129_, v___x_1116_);
lean_dec_ref(v___x_1116_);
v___x_1131_ = lean_string_append(v___x_1130_, v___x_1123_);
v___x_1132_ = lean_string_append(v___x_1131_, v_snd_1112_);
lean_dec_ref(v_snd_1112_);
v___x_1133_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__4));
v___x_1134_ = lean_string_append(v___x_1132_, v___x_1133_);
return v___x_1134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep(lean_object* v_dep_1170_, uint8_t v_inherited_1171_, lean_object* v_wsDir_1172_, lean_object* v_name_1173_, lean_object* v_relPkgDir_1174_, lean_object* v_remoteUrl_1175_, lean_object* v_src_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___y_1180_; lean_object* v_a_1181_; lean_object* v___f_1198_; lean_object* v___y_1200_; lean_object* v___y_1201_; lean_object* v___y_1202_; lean_object* v___y_1203_; lean_object* v_val_1204_; lean_object* v_pkgDir_1220_; lean_object* v_a_1222_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v_val_1258_; lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___f_1198_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1));
lean_inc_ref(v_relPkgDir_1174_);
v_pkgDir_1220_ = l_Lake_joinRelative(v_wsDir_1172_, v_relPkgDir_1174_);
v___x_1254_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13);
v___x_1255_ = lean_unsigned_to_nat(0u);
v___x_1256_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_pkgDir_1220_);
v___x_1273_ = l_Lake_resolvePath(v_pkgDir_1220_);
v___x_1274_ = lean_string_utf8_byte_size(v___x_1273_);
v___x_1275_ = lean_nat_dec_eq(v___x_1274_, v___x_1255_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1273_);
v_val_1258_ = v___x_1276_;
goto v___jp_1257_;
}
else
{
lean_object* v___x_1277_; 
lean_dec_ref(v___x_1273_);
v___x_1277_ = lean_box(0);
v_val_1258_ = v___x_1277_;
goto v___jp_1257_;
}
v___jp_1179_:
{
lean_object* v_name_1182_; lean_object* v_scope_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1194_; 
v_name_1182_ = lean_ctor_get(v_dep_1170_, 0);
v_scope_1183_ = lean_ctor_get(v_dep_1170_, 1);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_dep_1170_);
if (v_isSharedCheck_1194_ == 0)
{
lean_object* v_unused_1195_; lean_object* v_unused_1196_; lean_object* v_unused_1197_; 
v_unused_1195_ = lean_ctor_get(v_dep_1170_, 4);
lean_dec(v_unused_1195_);
v_unused_1196_ = lean_ctor_get(v_dep_1170_, 3);
lean_dec(v_unused_1196_);
v_unused_1197_ = lean_ctor_get(v_dep_1170_, 2);
lean_dec(v_unused_1197_);
v___x_1185_ = v_dep_1170_;
v_isShared_1186_ = v_isSharedCheck_1194_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_scope_1183_);
lean_inc(v_name_1182_);
lean_dec(v_dep_1170_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1194_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1191_; 
v___x_1187_ = l_Lake_defaultConfigFile;
v___x_1188_ = lean_box(0);
v___x_1189_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1189_, 0, v_name_1182_);
lean_ctor_set(v___x_1189_, 1, v_scope_1183_);
lean_ctor_set(v___x_1189_, 2, v___x_1187_);
lean_ctor_set(v___x_1189_, 3, v___x_1188_);
lean_ctor_set(v___x_1189_, 4, v_src_1176_);
lean_ctor_set_uint8(v___x_1189_, sizeof(void*)*5, v_inherited_1171_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 4, v___x_1189_);
lean_ctor_set(v___x_1185_, 3, v_a_1181_);
lean_ctor_set(v___x_1185_, 2, v_remoteUrl_1175_);
lean_ctor_set(v___x_1185_, 1, v_relPkgDir_1174_);
lean_ctor_set(v___x_1185_, 0, v___y_1180_);
v___x_1191_ = v___x_1185_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___y_1180_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_relPkgDir_1174_);
lean_ctor_set(v_reuseFailAlloc_1193_, 2, v_remoteUrl_1175_);
lean_ctor_set(v_reuseFailAlloc_1193_, 3, v_a_1181_);
lean_ctor_set(v_reuseFailAlloc_1193_, 4, v___x_1189_);
v___x_1191_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
return v___x_1192_;
}
}
}
v___jp_1199_:
{
lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1205_ = lean_array_get_size(v___y_1203_);
v___x_1206_ = lean_nat_dec_lt(v___y_1201_, v___x_1205_);
if (v___x_1206_ == 0)
{
v___y_1180_ = v___y_1200_;
v_a_1181_ = v_val_1204_;
goto v___jp_1179_;
}
else
{
lean_object* v___x_1207_; size_t v___x_1208_; size_t v___x_1209_; lean_object* v___x_2527__overap_1210_; lean_object* v___x_1211_; 
v___x_1207_ = lean_box(0);
v___x_1208_ = ((size_t)0ULL);
v___x_1209_ = lean_usize_of_nat(v___x_1205_);
lean_inc_ref(v___y_1203_);
lean_inc_ref(v___y_1202_);
v___x_2527__overap_1210_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___y_1202_, v___f_1198_, v___y_1203_, v___x_1208_, v___x_1209_, v___x_1207_);
lean_inc_ref(v___y_1177_);
v___x_1211_ = lean_apply_2(v___x_2527__overap_1210_, v___y_1177_, lean_box(0));
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_dec_ref_known(v___x_1211_, 1);
v___y_1180_ = v___y_1200_;
v_a_1181_ = v_val_1204_;
goto v___jp_1179_;
}
else
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
lean_dec_ref(v_val_1204_);
lean_dec_ref(v___y_1200_);
lean_dec_ref(v_src_1176_);
lean_dec_ref(v_remoteUrl_1175_);
lean_dec_ref(v_relPkgDir_1174_);
lean_dec_ref(v_dep_1170_);
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1211_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1211_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
v___jp_1221_:
{
if (lean_obj_tag(v_a_1222_) == 1)
{
lean_object* v_val_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
lean_dec_ref(v_pkgDir_1220_);
lean_dec_ref(v_name_1173_);
v_val_1223_ = lean_ctor_get(v_a_1222_, 0);
lean_inc_n(v_val_1223_, 2);
lean_dec_ref_known(v_a_1222_, 1);
v___x_1224_ = l_Lake_defaultManifestFile;
v___x_1225_ = l_Lake_joinRelative(v_val_1223_, v___x_1224_);
v___x_1226_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13);
v___x_1227_ = lean_unsigned_to_nat(0u);
v___x_1228_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_1229_ = l_Lake_Manifest_load(v___x_1225_);
if (lean_obj_tag(v___x_1229_) == 0)
{
lean_object* v_a_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
v_a_1230_ = lean_ctor_get(v___x_1229_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1229_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1232_ = v___x_1229_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_a_1230_);
lean_dec(v___x_1229_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1235_; 
if (v_isShared_1233_ == 0)
{
lean_ctor_set_tag(v___x_1232_, 1);
v___x_1235_ = v___x_1232_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1230_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
v___y_1200_ = v_val_1223_;
v___y_1201_ = v___x_1227_;
v___y_1202_ = v___x_1226_;
v___y_1203_ = v___x_1228_;
v_val_1204_ = v___x_1235_;
goto v___jp_1199_;
}
}
}
else
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
v_a_1238_ = lean_ctor_get(v___x_1229_, 0);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1229_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1240_ = v___x_1229_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1229_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 0);
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1238_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
v___y_1200_ = v_val_1223_;
v___y_1201_ = v___x_1227_;
v___y_1202_ = v___x_1226_;
v___y_1203_ = v___x_1228_;
v_val_1204_ = v___x_1243_;
goto v___jp_1199_;
}
}
}
}
else
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; uint8_t v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
lean_dec(v_a_1222_);
lean_dec_ref(v_src_1176_);
lean_dec_ref(v_remoteUrl_1175_);
lean_dec_ref(v_relPkgDir_1174_);
lean_dec_ref(v_dep_1170_);
v___x_1246_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_1247_ = lean_string_append(v_name_1173_, v___x_1246_);
v___x_1248_ = lean_string_append(v___x_1247_, v_pkgDir_1220_);
lean_dec_ref(v_pkgDir_1220_);
v___x_1249_ = 3;
v___x_1250_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1250_, 0, v___x_1248_);
lean_ctor_set_uint8(v___x_1250_, sizeof(void*)*1, v___x_1249_);
lean_inc_ref(v___y_1177_);
v___x_1251_ = lean_apply_2(v___y_1177_, v___x_1250_, lean_box(0));
v___x_1252_ = lean_box(0);
v___x_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
return v___x_1253_;
}
}
v___jp_1257_:
{
uint8_t v___x_1259_; 
v___x_1259_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_1259_ == 0)
{
v_a_1222_ = v_val_1258_;
goto v___jp_1221_;
}
else
{
lean_object* v___x_1260_; size_t v___x_1261_; size_t v___x_1262_; lean_object* v___x_2581__overap_1263_; lean_object* v___x_1264_; 
v___x_1260_ = lean_box(0);
v___x_1261_ = ((size_t)0ULL);
v___x_1262_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_2581__overap_1263_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1254_, v___f_1198_, v___x_1256_, v___x_1261_, v___x_1262_, v___x_1260_);
lean_inc_ref(v___y_1177_);
v___x_1264_ = lean_apply_2(v___x_2581__overap_1263_, v___y_1177_, lean_box(0));
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_dec_ref_known(v___x_1264_, 1);
v_a_1222_ = v_val_1258_;
goto v___jp_1221_;
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
lean_dec(v_val_1258_);
lean_dec_ref(v_pkgDir_1220_);
lean_dec_ref(v_src_1176_);
lean_dec_ref(v_remoteUrl_1175_);
lean_dec_ref(v_relPkgDir_1174_);
lean_dec_ref(v_name_1173_);
lean_dec_ref(v_dep_1170_);
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___x_1264_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1264_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1265_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___boxed(lean_object* v_dep_1278_, lean_object* v_inherited_1279_, lean_object* v_wsDir_1280_, lean_object* v_name_1281_, lean_object* v_relPkgDir_1282_, lean_object* v_remoteUrl_1283_, lean_object* v_src_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
uint8_t v_inherited_boxed_1287_; lean_object* v_res_1288_; 
v_inherited_boxed_1287_ = lean_unbox(v_inherited_1279_);
v_res_1288_ = l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep(v_dep_1278_, v_inherited_boxed_1287_, v_wsDir_1280_, v_name_1281_, v_relPkgDir_1282_, v_remoteUrl_1283_, v_src_1284_, v___y_1285_);
lean_dec_ref(v___y_1285_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit(lean_object* v_dep_1289_, uint8_t v_inherited_1290_, lean_object* v_lakeEnv_1291_, lean_object* v_wsDir_1292_, lean_object* v_name_1293_, lean_object* v_relPkgDir_1294_, lean_object* v_gitUrl_1295_, lean_object* v_remoteUrl_1296_, lean_object* v_inputRev_x3f_1297_, lean_object* v_subDir_x3f_1298_, lean_object* v___y_1299_){
_start:
{
lean_object* v_pkgUrlMap_1301_; lean_object* v_name_1302_; lean_object* v_scope_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1479_; 
v_pkgUrlMap_1301_ = lean_ctor_get(v_lakeEnv_1291_, 5);
v_name_1302_ = lean_ctor_get(v_dep_1289_, 0);
v_scope_1303_ = lean_ctor_get(v_dep_1289_, 1);
v_isSharedCheck_1479_ = !lean_is_exclusive(v_dep_1289_);
if (v_isSharedCheck_1479_ == 0)
{
lean_object* v_unused_1480_; lean_object* v_unused_1481_; lean_object* v_unused_1482_; 
v_unused_1480_ = lean_ctor_get(v_dep_1289_, 4);
lean_dec(v_unused_1480_);
v_unused_1481_ = lean_ctor_get(v_dep_1289_, 3);
lean_dec(v_unused_1481_);
v_unused_1482_ = lean_ctor_get(v_dep_1289_, 2);
lean_dec(v_unused_1482_);
v___x_1305_ = v_dep_1289_;
v_isShared_1306_ = v_isSharedCheck_1479_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_scope_1303_);
lean_inc(v_name_1302_);
lean_dec(v_dep_1289_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1479_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v_a_1311_; lean_object* v___y_1320_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1323_; lean_object* v___y_1324_; lean_object* v_val_1325_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v_a_1344_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; lean_object* v___y_1380_; lean_object* v_val_1381_; lean_object* v___y_1397_; lean_object* v___y_1398_; lean_object* v___y_1399_; lean_object* v___y_1410_; lean_object* v_a_1411_; lean_object* v_gitDir_1414_; lean_object* v___y_1416_; lean_object* v___x_1477_; 
lean_inc_ref(v_relPkgDir_1294_);
lean_inc_ref(v_wsDir_1292_);
v_gitDir_1414_ = l_Lake_joinRelative(v_wsDir_1292_, v_relPkgDir_1294_);
v___x_1477_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_pkgUrlMap_1301_, v_name_1302_);
if (lean_obj_tag(v___x_1477_) == 0)
{
v___y_1416_ = v_gitUrl_1295_;
goto v___jp_1415_;
}
else
{
lean_object* v_val_1478_; 
lean_dec_ref(v_gitUrl_1295_);
v_val_1478_ = lean_ctor_get(v___x_1477_, 0);
lean_inc(v_val_1478_);
lean_dec_ref_known(v___x_1477_, 1);
v___y_1416_ = v_val_1478_;
goto v___jp_1415_;
}
v___jp_1307_:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1316_; 
v___x_1312_ = l_Lake_defaultConfigFile;
v___x_1313_ = lean_box(0);
v___x_1314_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1314_, 0, v_name_1302_);
lean_ctor_set(v___x_1314_, 1, v_scope_1303_);
lean_ctor_set(v___x_1314_, 2, v___x_1312_);
lean_ctor_set(v___x_1314_, 3, v___x_1313_);
lean_ctor_set(v___x_1314_, 4, v___y_1310_);
lean_ctor_set_uint8(v___x_1314_, sizeof(void*)*5, v_inherited_1290_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 4, v___x_1314_);
lean_ctor_set(v___x_1305_, 3, v_a_1311_);
lean_ctor_set(v___x_1305_, 2, v_remoteUrl_1296_);
lean_ctor_set(v___x_1305_, 1, v___y_1308_);
lean_ctor_set(v___x_1305_, 0, v___y_1309_);
v___x_1316_ = v___x_1305_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v___y_1309_);
lean_ctor_set(v_reuseFailAlloc_1318_, 1, v___y_1308_);
lean_ctor_set(v_reuseFailAlloc_1318_, 2, v_remoteUrl_1296_);
lean_ctor_set(v_reuseFailAlloc_1318_, 3, v_a_1311_);
lean_ctor_set(v_reuseFailAlloc_1318_, 4, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
return v___x_1317_;
}
}
v___jp_1319_:
{
lean_object* v___x_1326_; uint8_t v___x_1327_; 
v___x_1326_ = lean_array_get_size(v___y_1324_);
v___x_1327_ = lean_nat_dec_lt(v___y_1320_, v___x_1326_);
if (v___x_1327_ == 0)
{
v___y_1308_ = v___y_1321_;
v___y_1309_ = v___y_1322_;
v___y_1310_ = v___y_1323_;
v_a_1311_ = v_val_1325_;
goto v___jp_1307_;
}
else
{
lean_object* v___x_1328_; size_t v___x_1329_; size_t v___x_1330_; lean_object* v___x_1331_; 
v___x_1328_ = lean_box(0);
v___x_1329_ = ((size_t)0ULL);
v___x_1330_ = lean_usize_of_nat(v___x_1326_);
v___x_1331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_1324_, v___x_1329_, v___x_1330_, v___x_1328_, v___y_1299_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_dec_ref_known(v___x_1331_, 1);
v___y_1308_ = v___y_1321_;
v___y_1309_ = v___y_1322_;
v___y_1310_ = v___y_1323_;
v_a_1311_ = v_val_1325_;
goto v___jp_1307_;
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1339_; 
lean_dec_ref(v_val_1325_);
lean_dec_ref(v___y_1323_);
lean_dec_ref(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_del_object(v___x_1305_);
lean_dec_ref(v_scope_1303_);
lean_dec(v_name_1302_);
lean_dec_ref(v_remoteUrl_1296_);
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1334_ = v___x_1331_;
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1331_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
}
v___jp_1340_:
{
if (lean_obj_tag(v_a_1344_) == 1)
{
lean_object* v_val_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
lean_dec_ref(v___y_1342_);
lean_dec_ref(v_name_1293_);
v_val_1345_ = lean_ctor_get(v_a_1344_, 0);
lean_inc_n(v_val_1345_, 2);
lean_dec_ref_known(v_a_1344_, 1);
v___x_1346_ = l_Lake_defaultManifestFile;
v___x_1347_ = l_Lake_joinRelative(v_val_1345_, v___x_1346_);
v___x_1348_ = lean_unsigned_to_nat(0u);
v___x_1349_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_1350_ = l_Lake_Manifest_load(v___x_1347_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1350_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1350_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
lean_ctor_set_tag(v___x_1353_, 1);
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
v___y_1320_ = v___x_1348_;
v___y_1321_ = v___y_1341_;
v___y_1322_ = v_val_1345_;
v___y_1323_ = v___y_1343_;
v___y_1324_ = v___x_1349_;
v_val_1325_ = v___x_1356_;
goto v___jp_1319_;
}
}
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
v_a_1359_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1350_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1350_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
lean_ctor_set_tag(v___x_1361_, 0);
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
v___y_1320_ = v___x_1348_;
v___y_1321_ = v___y_1341_;
v___y_1322_ = v_val_1345_;
v___y_1323_ = v___y_1343_;
v___y_1324_ = v___x_1349_;
v_val_1325_ = v___x_1364_;
goto v___jp_1319_;
}
}
}
}
else
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
lean_dec(v_a_1344_);
lean_dec_ref(v___y_1343_);
lean_dec_ref(v___y_1341_);
lean_del_object(v___x_1305_);
lean_dec_ref(v_scope_1303_);
lean_dec(v_name_1302_);
lean_dec_ref(v_remoteUrl_1296_);
v___x_1367_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_1368_ = lean_string_append(v_name_1293_, v___x_1367_);
v___x_1369_ = lean_string_append(v___x_1368_, v___y_1342_);
lean_dec_ref(v___y_1342_);
v___x_1370_ = 3;
v___x_1371_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1371_, 0, v___x_1369_);
lean_ctor_set_uint8(v___x_1371_, sizeof(void*)*1, v___x_1370_);
lean_inc_ref(v___y_1299_);
v___x_1372_ = lean_apply_2(v___y_1299_, v___x_1371_, lean_box(0));
v___x_1373_ = lean_box(0);
v___x_1374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
return v___x_1374_;
}
}
v___jp_1375_:
{
lean_object* v___x_1382_; uint8_t v___x_1383_; 
v___x_1382_ = lean_array_get_size(v___y_1376_);
v___x_1383_ = lean_nat_dec_lt(v___y_1377_, v___x_1382_);
if (v___x_1383_ == 0)
{
v___y_1341_ = v___y_1378_;
v___y_1342_ = v___y_1380_;
v___y_1343_ = v___y_1379_;
v_a_1344_ = v_val_1381_;
goto v___jp_1340_;
}
else
{
lean_object* v___x_1384_; size_t v___x_1385_; size_t v___x_1386_; lean_object* v___x_1387_; 
v___x_1384_ = lean_box(0);
v___x_1385_ = ((size_t)0ULL);
v___x_1386_ = lean_usize_of_nat(v___x_1382_);
v___x_1387_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_1376_, v___x_1385_, v___x_1386_, v___x_1384_, v___y_1299_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_dec_ref_known(v___x_1387_, 1);
v___y_1341_ = v___y_1378_;
v___y_1342_ = v___y_1380_;
v___y_1343_ = v___y_1379_;
v_a_1344_ = v_val_1381_;
goto v___jp_1340_;
}
else
{
lean_object* v_a_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1395_; 
lean_dec(v_val_1381_);
lean_dec_ref(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec_ref(v___y_1378_);
lean_del_object(v___x_1305_);
lean_dec_ref(v_scope_1303_);
lean_dec(v_name_1302_);
lean_dec_ref(v_remoteUrl_1296_);
lean_dec_ref(v_name_1293_);
v_a_1388_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1390_ = v___x_1387_;
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_a_1388_);
lean_dec(v___x_1387_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1393_; 
if (v_isShared_1391_ == 0)
{
v___x_1393_ = v___x_1390_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_a_1388_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
}
v___jp_1396_:
{
lean_object* v___x_1400_; lean_object* v_pkgDir_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; uint8_t v___x_1406_; 
v___x_1400_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1400_, 0, v___y_1398_);
lean_ctor_set(v___x_1400_, 1, v___y_1397_);
lean_ctor_set(v___x_1400_, 2, v_inputRev_x3f_1297_);
lean_ctor_set(v___x_1400_, 3, v_subDir_x3f_1298_);
lean_inc_ref(v___y_1399_);
v_pkgDir_1401_ = l_Lake_joinRelative(v_wsDir_1292_, v___y_1399_);
v___x_1402_ = lean_unsigned_to_nat(0u);
v___x_1403_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_pkgDir_1401_);
v___x_1404_ = l_Lake_resolvePath(v_pkgDir_1401_);
v___x_1405_ = lean_string_utf8_byte_size(v___x_1404_);
v___x_1406_ = lean_nat_dec_eq(v___x_1405_, v___x_1402_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; 
v___x_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1404_);
v___y_1376_ = v___x_1403_;
v___y_1377_ = v___x_1402_;
v___y_1378_ = v___y_1399_;
v___y_1379_ = v___x_1400_;
v___y_1380_ = v_pkgDir_1401_;
v_val_1381_ = v___x_1407_;
goto v___jp_1375_;
}
else
{
lean_object* v___x_1408_; 
lean_dec_ref(v___x_1404_);
v___x_1408_ = lean_box(0);
v___y_1376_ = v___x_1403_;
v___y_1377_ = v___x_1402_;
v___y_1378_ = v___y_1399_;
v___y_1379_ = v___x_1400_;
v___y_1380_ = v_pkgDir_1401_;
v_val_1381_ = v___x_1408_;
goto v___jp_1375_;
}
}
v___jp_1409_:
{
if (lean_obj_tag(v_subDir_x3f_1298_) == 1)
{
lean_object* v_val_1412_; lean_object* v___x_1413_; 
v_val_1412_ = lean_ctor_get(v_subDir_x3f_1298_, 0);
lean_inc(v_val_1412_);
v___x_1413_ = l_Lake_joinRelative(v_relPkgDir_1294_, v_val_1412_);
v___y_1397_ = v_a_1411_;
v___y_1398_ = v___y_1410_;
v___y_1399_ = v___x_1413_;
goto v___jp_1396_;
}
else
{
v___y_1397_ = v_a_1411_;
v___y_1398_ = v___y_1410_;
v___y_1399_ = v_relPkgDir_1294_;
goto v___jp_1396_;
}
}
v___jp_1415_:
{
lean_object* v___x_1417_; 
lean_inc(v_inputRev_x3f_1297_);
lean_inc_ref(v___y_1416_);
lean_inc_ref(v_gitDir_1414_);
lean_inc_ref(v_name_1293_);
v___x_1417_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo(v_name_1293_, v_gitDir_1414_, v___y_1416_, v_inputRev_x3f_1297_, v___y_1299_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1467_; 
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1467_ == 0)
{
lean_object* v_unused_1468_; 
v_unused_1468_ = lean_ctor_get(v___x_1417_, 0);
lean_dec(v_unused_1468_);
v___x_1419_ = v___x_1417_;
v_isShared_1420_ = v_isSharedCheck_1467_;
goto v_resetjp_1418_;
}
else
{
lean_dec(v___x_1417_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1467_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1421_ = lean_unsigned_to_nat(0u);
v___x_1422_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_1423_ = l_Lake_GitRepo_getHeadRevision(v_gitDir_1414_, v___x_1422_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v_a_1425_; lean_object* v___x_1426_; uint8_t v___x_1427_; 
lean_del_object(v___x_1419_);
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
lean_inc(v_a_1424_);
v_a_1425_ = lean_ctor_get(v___x_1423_, 1);
lean_inc(v_a_1425_);
lean_dec_ref_known(v___x_1423_, 2);
v___x_1426_ = lean_array_get_size(v_a_1425_);
v___x_1427_ = lean_nat_dec_lt(v___x_1421_, v___x_1426_);
if (v___x_1427_ == 0)
{
lean_dec(v_a_1425_);
v___y_1410_ = v___y_1416_;
v_a_1411_ = v_a_1424_;
goto v___jp_1409_;
}
else
{
lean_object* v___x_1428_; size_t v___x_1429_; size_t v___x_1430_; lean_object* v___x_1431_; 
v___x_1428_ = lean_box(0);
v___x_1429_ = ((size_t)0ULL);
v___x_1430_ = lean_usize_of_nat(v___x_1426_);
v___x_1431_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_1425_, v___x_1429_, v___x_1430_, v___x_1428_, v___y_1299_);
lean_dec(v_a_1425_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_dec_ref_known(v___x_1431_, 1);
v___y_1410_ = v___y_1416_;
v_a_1411_ = v_a_1424_;
goto v___jp_1409_;
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
lean_dec(v_a_1424_);
lean_dec_ref(v___y_1416_);
lean_del_object(v___x_1305_);
lean_dec_ref(v_scope_1303_);
lean_dec(v_name_1302_);
lean_dec(v_subDir_x3f_1298_);
lean_dec(v_inputRev_x3f_1297_);
lean_dec_ref(v_remoteUrl_1296_);
lean_dec_ref(v_relPkgDir_1294_);
lean_dec_ref(v_name_1293_);
lean_dec_ref(v_wsDir_1292_);
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1431_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
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
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
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
}
else
{
lean_object* v_a_1440_; lean_object* v___x_1441_; uint8_t v___x_1442_; 
lean_dec_ref(v___y_1416_);
lean_del_object(v___x_1305_);
lean_dec_ref(v_scope_1303_);
lean_dec(v_name_1302_);
lean_dec(v_subDir_x3f_1298_);
lean_dec(v_inputRev_x3f_1297_);
lean_dec_ref(v_remoteUrl_1296_);
lean_dec_ref(v_relPkgDir_1294_);
lean_dec_ref(v_name_1293_);
lean_dec_ref(v_wsDir_1292_);
v_a_1440_ = lean_ctor_get(v___x_1423_, 1);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1423_, 2);
v___x_1441_ = lean_array_get_size(v_a_1440_);
v___x_1442_ = lean_nat_dec_lt(v___x_1421_, v___x_1441_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; lean_object* v___x_1445_; 
lean_dec(v_a_1440_);
v___x_1443_ = lean_box(0);
if (v_isShared_1420_ == 0)
{
lean_ctor_set_tag(v___x_1419_, 1);
lean_ctor_set(v___x_1419_, 0, v___x_1443_);
v___x_1445_ = v___x_1419_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
else
{
lean_object* v___x_1447_; size_t v___x_1448_; size_t v___x_1449_; lean_object* v___x_1450_; 
lean_del_object(v___x_1419_);
v___x_1447_ = lean_box(0);
v___x_1448_ = ((size_t)0ULL);
v___x_1449_ = lean_usize_of_nat(v___x_1441_);
v___x_1450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_1440_, v___x_1448_, v___x_1449_, v___x_1447_, v___y_1299_);
lean_dec(v_a_1440_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1457_ == 0)
{
lean_object* v_unused_1458_; 
v_unused_1458_ = lean_ctor_get(v___x_1450_, 0);
lean_dec(v_unused_1458_);
v___x_1452_ = v___x_1450_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_dec(v___x_1450_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
lean_ctor_set_tag(v___x_1452_, 1);
lean_ctor_set(v___x_1452_, 0, v___x_1447_);
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1447_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1466_; 
v_a_1459_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1461_ = v___x_1450_;
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1450_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1464_; 
if (v_isShared_1462_ == 0)
{
v___x_1464_ = v___x_1461_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_a_1459_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
lean_dec_ref(v___y_1416_);
lean_dec_ref(v_gitDir_1414_);
lean_del_object(v___x_1305_);
lean_dec_ref(v_scope_1303_);
lean_dec(v_name_1302_);
lean_dec(v_subDir_x3f_1298_);
lean_dec(v_inputRev_x3f_1297_);
lean_dec_ref(v_remoteUrl_1296_);
lean_dec_ref(v_relPkgDir_1294_);
lean_dec_ref(v_name_1293_);
lean_dec_ref(v_wsDir_1292_);
v_a_1469_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1417_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1417_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit___boxed(lean_object* v_dep_1483_, lean_object* v_inherited_1484_, lean_object* v_lakeEnv_1485_, lean_object* v_wsDir_1486_, lean_object* v_name_1487_, lean_object* v_relPkgDir_1488_, lean_object* v_gitUrl_1489_, lean_object* v_remoteUrl_1490_, lean_object* v_inputRev_x3f_1491_, lean_object* v_subDir_x3f_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_){
_start:
{
uint8_t v_inherited_boxed_1495_; lean_object* v_res_1496_; 
v_inherited_boxed_1495_ = lean_unbox(v_inherited_1484_);
v_res_1496_ = l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit(v_dep_1483_, v_inherited_boxed_1495_, v_lakeEnv_1485_, v_wsDir_1486_, v_name_1487_, v_relPkgDir_1488_, v_gitUrl_1489_, v_remoteUrl_1490_, v_inputRev_x3f_1491_, v_subDir_x3f_1492_, v___y_1493_);
lean_dec_ref(v___y_1493_);
lean_dec_ref(v_lakeEnv_1485_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0(lean_object* v_ver_1500_, lean_object* v_as_1501_, size_t v_sz_1502_, size_t v_i_1503_, lean_object* v_b_1504_){
_start:
{
uint8_t v___x_1505_; 
v___x_1505_ = lean_usize_dec_lt(v_i_1503_, v_sz_1502_);
if (v___x_1505_ == 0)
{
lean_inc_ref(v_b_1504_);
return v_b_1504_;
}
else
{
lean_object* v_a_1506_; lean_object* v_version_1507_; lean_object* v___x_1508_; uint8_t v___x_1509_; 
v_a_1506_ = lean_array_uget_borrowed(v_as_1501_, v_i_1503_);
v_version_1507_ = lean_ctor_get(v_a_1506_, 0);
v___x_1508_ = lean_box(0);
v___x_1509_ = l_Lake_VerRange_test(v_ver_1500_, v_version_1507_);
if (v___x_1509_ == 0)
{
lean_object* v___x_1510_; size_t v___x_1511_; size_t v___x_1512_; 
v___x_1510_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0___closed__0));
v___x_1511_ = ((size_t)1ULL);
v___x_1512_ = lean_usize_add(v_i_1503_, v___x_1511_);
v_i_1503_ = v___x_1512_;
v_b_1504_ = v___x_1510_;
goto _start;
}
else
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; 
lean_inc(v_a_1506_);
v___x_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1514_, 0, v_a_1506_);
v___x_1515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1515_, 0, v___x_1514_);
v___x_1516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1516_, 0, v___x_1515_);
lean_ctor_set(v___x_1516_, 1, v___x_1508_);
return v___x_1516_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0___boxed(lean_object* v_ver_1517_, lean_object* v_as_1518_, lean_object* v_sz_1519_, lean_object* v_i_1520_, lean_object* v_b_1521_){
_start:
{
size_t v_sz_boxed_1522_; size_t v_i_boxed_1523_; lean_object* v_res_1524_; 
v_sz_boxed_1522_ = lean_unbox_usize(v_sz_1519_);
lean_dec(v_sz_1519_);
v_i_boxed_1523_ = lean_unbox_usize(v_i_1520_);
lean_dec(v_i_1520_);
v_res_1524_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0(v_ver_1517_, v_as_1518_, v_sz_boxed_1522_, v_i_boxed_1523_, v_b_1521_);
lean_dec_ref(v_b_1521_);
lean_dec_ref(v_as_1518_);
lean_dec_ref(v_ver_1517_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Lake_Dependency_materialize(lean_object* v_dep_1534_, uint8_t v_inherited_1535_, lean_object* v_lakeEnv_1536_, lean_object* v_wsDir_1537_, lean_object* v_relPkgsDir_1538_, lean_object* v_relParentDir_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1554_; lean_object* v___y_1555_; lean_object* v___y_1556_; lean_object* v___y_1557_; lean_object* v___y_1558_; lean_object* v___y_1559_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1566_; lean_object* v___y_1567_; lean_object* v_a_1568_; lean_object* v_src_x3f_1571_; 
v_src_x3f_1571_ = lean_ctor_get(v_dep_1534_, 3);
lean_inc(v_src_x3f_1571_);
if (lean_obj_tag(v_src_x3f_1571_) == 1)
{
lean_object* v_val_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1696_; 
v_val_1572_ = lean_ctor_get(v_src_x3f_1571_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v_src_x3f_1571_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1574_ = v_src_x3f_1571_;
v_isShared_1575_ = v_isSharedCheck_1696_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_val_1572_);
lean_dec(v_src_x3f_1571_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1696_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
if (lean_obj_tag(v_val_1572_) == 0)
{
lean_object* v_name_1576_; lean_object* v_scope_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1679_; 
lean_dec_ref(v_relPkgsDir_1538_);
lean_dec_ref(v_lakeEnv_1536_);
v_name_1576_ = lean_ctor_get(v_dep_1534_, 0);
v_scope_1577_ = lean_ctor_get(v_dep_1534_, 1);
v_isSharedCheck_1679_ = !lean_is_exclusive(v_dep_1534_);
if (v_isSharedCheck_1679_ == 0)
{
lean_object* v_unused_1680_; lean_object* v_unused_1681_; lean_object* v_unused_1682_; 
v_unused_1680_ = lean_ctor_get(v_dep_1534_, 4);
lean_dec(v_unused_1680_);
v_unused_1681_ = lean_ctor_get(v_dep_1534_, 3);
lean_dec(v_unused_1681_);
v_unused_1682_ = lean_ctor_get(v_dep_1534_, 2);
lean_dec(v_unused_1682_);
v___x_1579_ = v_dep_1534_;
v_isShared_1580_ = v_isSharedCheck_1679_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_scope_1577_);
lean_inc(v_name_1576_);
lean_dec(v_dep_1534_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1679_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v_dir_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1678_; 
v_dir_1581_ = lean_ctor_get(v_val_1572_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v_val_1572_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1583_ = v_val_1572_;
v_isShared_1584_ = v_isSharedCheck_1678_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_dir_1581_);
lean_dec(v_val_1572_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1678_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v_relPkgDir_1585_; uint8_t v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1590_; 
v_relPkgDir_1585_ = l_Lake_joinRelative(v_relParentDir_1539_, v_dir_1581_);
v___x_1586_ = 0;
lean_inc(v_name_1576_);
v___x_1587_ = l_Lean_Name_toString(v_name_1576_, v___x_1586_);
v___x_1588_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
lean_inc_ref(v_relPkgDir_1585_);
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v_relPkgDir_1585_);
v___x_1590_ = v___x_1583_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_relPkgDir_1585_);
v___x_1590_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
lean_object* v___y_1592_; lean_object* v_a_1593_; lean_object* v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v_val_1605_; lean_object* v_pkgDir_1620_; lean_object* v_a_1622_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v_val_1656_; lean_object* v___x_1670_; lean_object* v___x_1671_; uint8_t v___x_1672_; 
lean_inc_ref(v_relPkgDir_1585_);
v_pkgDir_1620_ = l_Lake_joinRelative(v_wsDir_1537_, v_relPkgDir_1585_);
v___x_1653_ = lean_unsigned_to_nat(0u);
v___x_1654_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_pkgDir_1620_);
v___x_1670_ = l_Lake_resolvePath(v_pkgDir_1620_);
v___x_1671_ = lean_string_utf8_byte_size(v___x_1670_);
v___x_1672_ = lean_nat_dec_eq(v___x_1671_, v___x_1653_);
if (v___x_1672_ == 0)
{
lean_object* v___x_1674_; 
if (v_isShared_1575_ == 0)
{
lean_ctor_set(v___x_1574_, 0, v___x_1670_);
v___x_1674_ = v___x_1574_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v___x_1670_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
v_val_1656_ = v___x_1674_;
goto v___jp_1655_;
}
}
else
{
lean_object* v___x_1676_; 
lean_dec_ref(v___x_1670_);
lean_del_object(v___x_1574_);
v___x_1676_ = lean_box(0);
v_val_1656_ = v___x_1676_;
goto v___jp_1655_;
}
v___jp_1591_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1598_; 
v___x_1594_ = l_Lake_defaultConfigFile;
v___x_1595_ = lean_box(0);
v___x_1596_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_1596_, 0, v_name_1576_);
lean_ctor_set(v___x_1596_, 1, v_scope_1577_);
lean_ctor_set(v___x_1596_, 2, v___x_1594_);
lean_ctor_set(v___x_1596_, 3, v___x_1595_);
lean_ctor_set(v___x_1596_, 4, v___x_1590_);
lean_ctor_set_uint8(v___x_1596_, sizeof(void*)*5, v_inherited_1535_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 4, v___x_1596_);
lean_ctor_set(v___x_1579_, 3, v_a_1593_);
lean_ctor_set(v___x_1579_, 2, v___x_1588_);
lean_ctor_set(v___x_1579_, 1, v_relPkgDir_1585_);
lean_ctor_set(v___x_1579_, 0, v___y_1592_);
v___x_1598_ = v___x_1579_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v___y_1592_);
lean_ctor_set(v_reuseFailAlloc_1600_, 1, v_relPkgDir_1585_);
lean_ctor_set(v_reuseFailAlloc_1600_, 2, v___x_1588_);
lean_ctor_set(v_reuseFailAlloc_1600_, 3, v_a_1593_);
lean_ctor_set(v_reuseFailAlloc_1600_, 4, v___x_1596_);
v___x_1598_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1598_);
return v___x_1599_;
}
}
v___jp_1601_:
{
lean_object* v___x_1606_; uint8_t v___x_1607_; 
v___x_1606_ = lean_array_get_size(v___y_1604_);
v___x_1607_ = lean_nat_dec_lt(v___y_1603_, v___x_1606_);
if (v___x_1607_ == 0)
{
v___y_1592_ = v___y_1602_;
v_a_1593_ = v_val_1605_;
goto v___jp_1591_;
}
else
{
lean_object* v___x_1608_; size_t v___x_1609_; size_t v___x_1610_; lean_object* v___x_1611_; 
v___x_1608_ = lean_box(0);
v___x_1609_ = ((size_t)0ULL);
v___x_1610_ = lean_usize_of_nat(v___x_1606_);
v___x_1611_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_1604_, v___x_1609_, v___x_1610_, v___x_1608_, v___y_1540_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_dec_ref_known(v___x_1611_, 1);
v___y_1592_ = v___y_1602_;
v_a_1593_ = v_val_1605_;
goto v___jp_1591_;
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
lean_dec_ref(v_val_1605_);
lean_dec_ref(v___y_1602_);
lean_dec_ref(v___x_1590_);
lean_dec_ref(v_relPkgDir_1585_);
lean_del_object(v___x_1579_);
lean_dec_ref(v_scope_1577_);
lean_dec(v_name_1576_);
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1611_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1611_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1611_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
}
v___jp_1621_:
{
if (lean_obj_tag(v_a_1622_) == 1)
{
lean_object* v_val_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
lean_dec_ref(v_pkgDir_1620_);
lean_dec_ref(v___x_1587_);
v_val_1623_ = lean_ctor_get(v_a_1622_, 0);
lean_inc_n(v_val_1623_, 2);
lean_dec_ref_known(v_a_1622_, 1);
v___x_1624_ = l_Lake_defaultManifestFile;
v___x_1625_ = l_Lake_joinRelative(v_val_1623_, v___x_1624_);
v___x_1626_ = lean_unsigned_to_nat(0u);
v___x_1627_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_1628_ = l_Lake_Manifest_load(v___x_1625_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
v_a_1629_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1631_ = v___x_1628_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1628_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
lean_ctor_set_tag(v___x_1631_, 1);
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1629_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
v___y_1602_ = v_val_1623_;
v___y_1603_ = v___x_1626_;
v___y_1604_ = v___x_1627_;
v_val_1605_ = v___x_1634_;
goto v___jp_1601_;
}
}
}
else
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1644_; 
v_a_1637_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1639_ = v___x_1628_;
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1628_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1640_ == 0)
{
lean_ctor_set_tag(v___x_1639_, 0);
v___x_1642_ = v___x_1639_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_a_1637_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
v___y_1602_ = v_val_1623_;
v___y_1603_ = v___x_1626_;
v___y_1604_ = v___x_1627_;
v_val_1605_ = v___x_1642_;
goto v___jp_1601_;
}
}
}
}
else
{
lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; uint8_t v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
lean_dec(v_a_1622_);
lean_dec_ref(v___x_1590_);
lean_dec_ref(v_relPkgDir_1585_);
lean_del_object(v___x_1579_);
lean_dec_ref(v_scope_1577_);
lean_dec(v_name_1576_);
v___x_1645_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_1646_ = lean_string_append(v___x_1587_, v___x_1645_);
v___x_1647_ = lean_string_append(v___x_1646_, v_pkgDir_1620_);
lean_dec_ref(v_pkgDir_1620_);
v___x_1648_ = 3;
v___x_1649_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1649_, 0, v___x_1647_);
lean_ctor_set_uint8(v___x_1649_, sizeof(void*)*1, v___x_1648_);
lean_inc_ref(v___y_1540_);
v___x_1650_ = lean_apply_2(v___y_1540_, v___x_1649_, lean_box(0));
v___x_1651_ = lean_box(0);
v___x_1652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1651_);
return v___x_1652_;
}
}
v___jp_1655_:
{
uint8_t v___x_1657_; 
v___x_1657_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_1657_ == 0)
{
v_a_1622_ = v_val_1656_;
goto v___jp_1621_;
}
else
{
lean_object* v___x_1658_; size_t v___x_1659_; size_t v___x_1660_; lean_object* v___x_1661_; 
v___x_1658_ = lean_box(0);
v___x_1659_ = ((size_t)0ULL);
v___x_1660_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_1661_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_1654_, v___x_1659_, v___x_1660_, v___x_1658_, v___y_1540_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_dec_ref_known(v___x_1661_, 1);
v_a_1622_ = v_val_1656_;
goto v___jp_1621_;
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec(v_val_1656_);
lean_dec_ref(v_pkgDir_1620_);
lean_dec_ref(v___x_1590_);
lean_dec_ref(v___x_1587_);
lean_dec_ref(v_relPkgDir_1585_);
lean_del_object(v___x_1579_);
lean_dec_ref(v_scope_1577_);
lean_dec(v_name_1576_);
v_a_1662_ = lean_ctor_get(v___x_1661_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1661_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1661_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1661_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
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
lean_object* v_name_1683_; lean_object* v_url_1684_; lean_object* v_rev_1685_; lean_object* v_subDir_1686_; lean_object* v___y_1688_; lean_object* v___x_1693_; 
lean_del_object(v___x_1574_);
lean_dec_ref(v_relParentDir_1539_);
v_name_1683_ = lean_ctor_get(v_dep_1534_, 0);
v_url_1684_ = lean_ctor_get(v_val_1572_, 0);
lean_inc_ref_n(v_url_1684_, 2);
v_rev_1685_ = lean_ctor_get(v_val_1572_, 1);
lean_inc(v_rev_1685_);
v_subDir_1686_ = lean_ctor_get(v_val_1572_, 2);
lean_inc(v_subDir_1686_);
lean_dec_ref_known(v_val_1572_, 3);
v___x_1693_ = l_Lake_Git_filterUrl_x3f(v_url_1684_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v___x_1694_; 
v___x_1694_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
v___y_1688_ = v___x_1694_;
goto v___jp_1687_;
}
else
{
lean_object* v_val_1695_; 
v_val_1695_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_val_1695_);
lean_dec_ref_known(v___x_1693_, 1);
v___y_1688_ = v_val_1695_;
goto v___jp_1687_;
}
v___jp_1687_:
{
uint8_t v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1689_ = 0;
lean_inc(v_name_1683_);
v___x_1690_ = l_Lean_Name_toString(v_name_1683_, v___x_1689_);
lean_inc_ref(v___x_1690_);
v___x_1691_ = l_Lake_joinRelative(v_relPkgsDir_1538_, v___x_1690_);
v___x_1692_ = l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit(v_dep_1534_, v_inherited_1535_, v_lakeEnv_1536_, v_wsDir_1537_, v___x_1690_, v___x_1691_, v_url_1684_, v___y_1688_, v_rev_1685_, v_subDir_1686_, v___y_1540_);
lean_dec_ref(v_lakeEnv_1536_);
return v___x_1692_;
}
}
}
}
else
{
lean_object* v_name_1697_; lean_object* v_scope_1698_; lean_object* v_version_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; uint8_t v___x_1702_; 
lean_dec(v_src_x3f_1571_);
lean_dec_ref(v_relParentDir_1539_);
v_name_1697_ = lean_ctor_get(v_dep_1534_, 0);
v_scope_1698_ = lean_ctor_get(v_dep_1534_, 1);
v_version_1699_ = lean_ctor_get(v_dep_1534_, 2);
v___x_1700_ = lean_string_utf8_byte_size(v_scope_1698_);
v___x_1701_ = lean_unsigned_to_nat(0u);
v___x_1702_ = lean_nat_dec_eq(v___x_1700_, v___x_1701_);
if (v___x_1702_ == 0)
{
lean_object* v___x_1703_; lean_object* v___y_1705_; lean_object* v___y_1721_; lean_object* v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v_a_1727_; lean_object* v___y_1771_; lean_object* v___y_1772_; lean_object* v___y_1773_; lean_object* v___y_1774_; lean_object* v___y_1775_; lean_object* v___y_1776_; lean_object* v_fst_1777_; lean_object* v_snd_1778_; lean_object* v_a_1794_; lean_object* v_fst_1899_; lean_object* v_snd_1900_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
lean_inc(v_name_1697_);
v___x_1703_ = l_Lean_Name_toString(v_name_1697_, v___x_1702_);
v___x_1915_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_scope_1698_);
lean_inc_ref(v_lakeEnv_1536_);
v___x_1916_ = l_Lake_Reservoir_fetchPkg_x3f(v_lakeEnv_1536_, v_scope_1698_, v___x_1703_, v___x_1915_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v_a_1918_; lean_object* v___x_1919_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
v_a_1918_ = lean_ctor_get(v___x_1916_, 1);
lean_inc(v_a_1918_);
lean_dec_ref_known(v___x_1916_, 2);
v___x_1919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1919_, 0, v_a_1917_);
v_fst_1899_ = v___x_1919_;
v_snd_1900_ = v_a_1918_;
goto v___jp_1898_;
}
else
{
lean_object* v_a_1920_; lean_object* v_a_1921_; lean_object* v___x_1922_; 
v_a_1920_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1920_);
v_a_1921_ = lean_ctor_get(v___x_1916_, 1);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1916_, 2);
v___x_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1922_, 0, v_a_1920_);
v_fst_1899_ = v___x_1922_;
v_snd_1900_ = v_a_1921_;
goto v___jp_1898_;
}
v___jp_1704_:
{
lean_object* v_toString_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v_toString_1706_ = lean_ctor_get(v___y_1705_, 0);
lean_inc_ref(v_toString_1706_);
lean_dec_ref(v___y_1705_);
v___x_1707_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0));
v___x_1708_ = lean_string_append(v_scope_1698_, v___x_1707_);
v___x_1709_ = lean_string_append(v___x_1708_, v___x_1703_);
lean_dec_ref(v___x_1703_);
v___x_1710_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__1));
v___x_1711_ = lean_string_append(v___x_1709_, v___x_1710_);
v___x_1712_ = lean_string_append(v___x_1711_, v_toString_1706_);
lean_dec_ref(v_toString_1706_);
v___x_1713_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__2));
v___x_1714_ = lean_string_append(v___x_1712_, v___x_1713_);
v___x_1715_ = 3;
v___x_1716_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1716_, 0, v___x_1714_);
lean_ctor_set_uint8(v___x_1716_, sizeof(void*)*1, v___x_1715_);
lean_inc_ref(v___y_1540_);
v___x_1717_ = lean_apply_2(v___y_1540_, v___x_1716_, lean_box(0));
v___x_1718_ = lean_box(0);
v___x_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1718_);
return v___x_1719_;
}
v___jp_1720_:
{
if (lean_obj_tag(v_a_1727_) == 0)
{
lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1743_; 
lean_inc_ref(v_scope_1698_);
lean_dec(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec_ref(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v_isSharedCheck_1743_ = !lean_is_exclusive(v_a_1727_);
if (v_isSharedCheck_1743_ == 0)
{
lean_object* v_unused_1744_; 
v_unused_1744_ = lean_ctor_get(v_a_1727_, 0);
lean_dec(v_unused_1744_);
v___x_1729_ = v_a_1727_;
v_isShared_1730_ = v_isSharedCheck_1743_;
goto v_resetjp_1728_;
}
else
{
lean_dec(v_a_1727_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1743_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1741_; 
v___x_1731_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0));
v___x_1732_ = lean_string_append(v_scope_1698_, v___x_1731_);
v___x_1733_ = lean_string_append(v___x_1732_, v___x_1703_);
lean_dec_ref(v___x_1703_);
v___x_1734_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__3));
v___x_1735_ = lean_string_append(v___x_1733_, v___x_1734_);
v___x_1736_ = 3;
v___x_1737_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1737_, 0, v___x_1735_);
lean_ctor_set_uint8(v___x_1737_, sizeof(void*)*1, v___x_1736_);
lean_inc_ref(v___y_1540_);
v___x_1738_ = lean_apply_2(v___y_1540_, v___x_1737_, lean_box(0));
v___x_1739_ = lean_box(0);
if (v_isShared_1730_ == 0)
{
lean_ctor_set_tag(v___x_1729_, 1);
lean_ctor_set(v___x_1729_, 0, v___x_1739_);
v___x_1741_ = v___x_1729_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1739_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
else
{
lean_object* v_a_1745_; lean_object* v___x_1746_; size_t v_sz_1747_; size_t v___x_1748_; lean_object* v___x_1749_; lean_object* v_fst_1750_; 
v_a_1745_ = lean_ctor_get(v_a_1727_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v_a_1727_, 1);
v___x_1746_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0___closed__0));
v_sz_1747_ = lean_array_size(v_a_1745_);
v___x_1748_ = ((size_t)0ULL);
v___x_1749_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Dependency_materialize_spec__0(v___y_1722_, v_a_1745_, v_sz_1747_, v___x_1748_, v___x_1746_);
lean_dec(v_a_1745_);
v_fst_1750_ = lean_ctor_get(v___x_1749_, 0);
lean_inc(v_fst_1750_);
lean_dec_ref(v___x_1749_);
if (lean_obj_tag(v_fst_1750_) == 0)
{
lean_inc_ref(v_scope_1698_);
lean_dec(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec_ref(v___y_1721_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v___y_1705_ = v___y_1722_;
goto v___jp_1704_;
}
else
{
lean_object* v_val_1751_; 
v_val_1751_ = lean_ctor_get(v_fst_1750_, 0);
lean_inc(v_val_1751_);
lean_dec_ref_known(v_fst_1750_, 1);
if (lean_obj_tag(v_val_1751_) == 1)
{
lean_object* v_val_1752_; lean_object* v_version_1753_; lean_object* v_revision_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; uint8_t v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
lean_dec_ref(v___y_1722_);
v_val_1752_ = lean_ctor_get(v_val_1751_, 0);
lean_inc(v_val_1752_);
lean_dec_ref_known(v_val_1751_, 1);
v_version_1753_ = lean_ctor_get(v_val_1752_, 0);
lean_inc_ref(v_version_1753_);
v_revision_1754_ = lean_ctor_get(v_val_1752_, 1);
lean_inc_ref(v_revision_1754_);
lean_dec(v_val_1752_);
v___x_1755_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0));
lean_inc_ref(v_scope_1698_);
v___x_1756_ = lean_string_append(v_scope_1698_, v___x_1755_);
v___x_1757_ = lean_string_append(v___x_1756_, v___x_1703_);
lean_dec_ref(v___x_1703_);
v___x_1758_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__4));
v___x_1759_ = lean_string_append(v___x_1757_, v___x_1758_);
v___x_1760_ = l_Lake_StdVer_toString(v_version_1753_);
v___x_1761_ = lean_string_append(v___x_1759_, v___x_1760_);
lean_dec_ref(v___x_1760_);
v___x_1762_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__5));
v___x_1763_ = lean_string_append(v___x_1761_, v___x_1762_);
v___x_1764_ = lean_string_append(v___x_1763_, v_revision_1754_);
v___x_1765_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__6));
v___x_1766_ = lean_string_append(v___x_1764_, v___x_1765_);
v___x_1767_ = 1;
v___x_1768_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1768_, 0, v___x_1766_);
lean_ctor_set_uint8(v___x_1768_, sizeof(void*)*1, v___x_1767_);
lean_inc_ref(v___y_1540_);
v___x_1769_ = lean_apply_2(v___y_1540_, v___x_1768_, lean_box(0));
v___y_1563_ = v___y_1721_;
v___y_1564_ = v___y_1723_;
v___y_1565_ = v___y_1724_;
v___y_1566_ = v___y_1725_;
v___y_1567_ = v___y_1726_;
v_a_1568_ = v_revision_1754_;
goto v___jp_1562_;
}
else
{
lean_inc_ref(v_scope_1698_);
lean_dec(v_val_1751_);
lean_dec(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec_ref(v___y_1721_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v___y_1705_ = v___y_1722_;
goto v___jp_1704_;
}
}
}
}
v___jp_1770_:
{
lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1779_ = lean_array_get_size(v_snd_1778_);
v___x_1780_ = lean_nat_dec_lt(v___x_1701_, v___x_1779_);
if (v___x_1780_ == 0)
{
lean_dec_ref(v_snd_1778_);
v___y_1721_ = v___y_1771_;
v___y_1722_ = v___y_1772_;
v___y_1723_ = v___y_1773_;
v___y_1724_ = v___y_1774_;
v___y_1725_ = v___y_1775_;
v___y_1726_ = v___y_1776_;
v_a_1727_ = v_fst_1777_;
goto v___jp_1720_;
}
else
{
lean_object* v___x_1781_; size_t v___x_1782_; size_t v___x_1783_; lean_object* v___x_1784_; 
v___x_1781_ = lean_box(0);
v___x_1782_ = ((size_t)0ULL);
v___x_1783_ = lean_usize_of_nat(v___x_1779_);
v___x_1784_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_snd_1778_, v___x_1782_, v___x_1783_, v___x_1781_, v___y_1540_);
lean_dec_ref(v_snd_1778_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_dec_ref_known(v___x_1784_, 1);
v___y_1721_ = v___y_1771_;
v___y_1722_ = v___y_1772_;
v___y_1723_ = v___y_1773_;
v___y_1724_ = v___y_1774_;
v___y_1725_ = v___y_1775_;
v___y_1726_ = v___y_1776_;
v_a_1727_ = v_fst_1777_;
goto v___jp_1720_;
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
lean_dec_ref(v_fst_1777_);
lean_dec(v___y_1776_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec_ref(v___y_1771_);
lean_dec_ref(v___x_1703_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
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
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
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
}
}
v___jp_1793_:
{
if (lean_obj_tag(v_a_1794_) == 0)
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; uint8_t v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
lean_inc_ref(v_scope_1698_);
lean_dec_ref_known(v_a_1794_, 1);
lean_dec_ref(v_relPkgsDir_1538_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v___x_1795_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed___closed__0));
v___x_1796_ = lean_string_append(v_scope_1698_, v___x_1795_);
v___x_1797_ = lean_string_append(v___x_1796_, v___x_1703_);
lean_dec_ref(v___x_1703_);
v___x_1798_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__7));
v___x_1799_ = lean_string_append(v___x_1797_, v___x_1798_);
v___x_1800_ = 3;
v___x_1801_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1801_, 0, v___x_1799_);
lean_ctor_set_uint8(v___x_1801_, sizeof(void*)*1, v___x_1800_);
lean_inc_ref(v___y_1540_);
v___x_1802_ = lean_apply_2(v___y_1540_, v___x_1801_, lean_box(0));
v___x_1803_ = lean_box(0);
v___x_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
return v___x_1804_;
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1897_; 
v_a_1805_ = lean_ctor_get(v_a_1794_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v_a_1794_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1807_ = v_a_1794_;
v_isShared_1808_ = v_isSharedCheck_1897_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v_a_1794_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1897_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
if (lean_obj_tag(v_a_1805_) == 0)
{
lean_object* v___x_1809_; uint8_t v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
lean_del_object(v___x_1807_);
lean_dec_ref(v___x_1703_);
lean_dec_ref(v_relPkgsDir_1538_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
v___x_1809_ = l___private_Lake_Load_Materialize_0__Lake_pkgNotIndexed(v_dep_1534_);
v___x_1810_ = 3;
v___x_1811_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1811_, 0, v___x_1809_);
lean_ctor_set_uint8(v___x_1811_, sizeof(void*)*1, v___x_1810_);
lean_inc_ref(v___y_1540_);
v___x_1812_ = lean_apply_2(v___y_1540_, v___x_1811_, lean_box(0));
v___x_1813_ = lean_box(0);
v___x_1814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
return v___x_1814_;
}
else
{
lean_object* v_val_1815_; lean_object* v___x_1816_; 
v_val_1815_ = lean_ctor_get(v_a_1805_, 0);
lean_inc(v_val_1815_);
lean_dec_ref_known(v_a_1805_, 1);
v___x_1816_ = l_Lake_RegistryPkg_gitSrc_x3f(v_val_1815_);
if (lean_obj_tag(v___x_1816_) == 1)
{
lean_object* v_val_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1896_; 
v_val_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1896_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_val_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1896_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
if (lean_obj_tag(v_val_1817_) == 0)
{
lean_object* v_url_1821_; lean_object* v_githubUrl_x3f_1822_; lean_object* v_defaultBranch_x3f_1823_; lean_object* v_subDir_x3f_1824_; lean_object* v_name_1825_; lean_object* v_fullName_1826_; lean_object* v___x_1827_; 
v_url_1821_ = lean_ctor_get(v_val_1817_, 1);
lean_inc_ref(v_url_1821_);
v_githubUrl_x3f_1822_ = lean_ctor_get(v_val_1817_, 2);
lean_inc(v_githubUrl_x3f_1822_);
v_defaultBranch_x3f_1823_ = lean_ctor_get(v_val_1817_, 3);
lean_inc(v_defaultBranch_x3f_1823_);
v_subDir_x3f_1824_ = lean_ctor_get(v_val_1817_, 4);
lean_inc(v_subDir_x3f_1824_);
lean_dec_ref_known(v_val_1817_, 5);
v_name_1825_ = lean_ctor_get(v_val_1815_, 0);
lean_inc_ref(v_name_1825_);
v_fullName_1826_ = lean_ctor_get(v_val_1815_, 1);
lean_inc_ref(v_fullName_1826_);
lean_dec(v_val_1815_);
v___x_1827_ = l_Lake_joinRelative(v_relPkgsDir_1538_, v_name_1825_);
switch(lean_obj_tag(v_version_1699_))
{
case 0:
{
lean_object* v___x_1828_; 
lean_del_object(v___x_1807_);
lean_dec_ref(v___x_1703_);
v___x_1828_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
if (lean_obj_tag(v_defaultBranch_x3f_1823_) == 0)
{
uint8_t v___x_1829_; 
lean_dec_ref(v___x_1827_);
lean_dec_ref(v_fullName_1826_);
lean_dec(v_subDir_x3f_1824_);
lean_dec(v_githubUrl_x3f_1822_);
lean_dec_ref(v_url_1821_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v___x_1829_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_1829_ == 0)
{
lean_object* v___x_1830_; lean_object* v___x_1832_; 
v___x_1830_ = lean_box(0);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v___x_1830_);
v___x_1832_ = v___x_1819_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v___x_1830_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
else
{
lean_object* v___x_1834_; size_t v___x_1835_; size_t v___x_1836_; lean_object* v___x_1837_; 
lean_del_object(v___x_1819_);
v___x_1834_ = lean_box(0);
v___x_1835_ = ((size_t)0ULL);
v___x_1836_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_1837_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_1828_, v___x_1835_, v___x_1836_, v___x_1834_, v___y_1540_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1844_; 
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1844_ == 0)
{
lean_object* v_unused_1845_; 
v_unused_1845_ = lean_ctor_get(v___x_1837_, 0);
lean_dec(v_unused_1845_);
v___x_1839_ = v___x_1837_;
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
else
{
lean_dec(v___x_1837_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1840_ == 0)
{
lean_ctor_set_tag(v___x_1839_, 1);
lean_ctor_set(v___x_1839_, 0, v___x_1834_);
v___x_1842_ = v___x_1839_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1834_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
v_a_1846_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1837_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1837_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
}
else
{
lean_object* v_val_1854_; uint8_t v___x_1855_; 
lean_del_object(v___x_1819_);
v_val_1854_ = lean_ctor_get(v_defaultBranch_x3f_1823_, 0);
lean_inc(v_val_1854_);
lean_dec_ref_known(v_defaultBranch_x3f_1823_, 1);
v___x_1855_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_1855_ == 0)
{
v___y_1563_ = v___x_1827_;
v___y_1564_ = v_fullName_1826_;
v___y_1565_ = v_url_1821_;
v___y_1566_ = v_subDir_x3f_1824_;
v___y_1567_ = v_githubUrl_x3f_1822_;
v_a_1568_ = v_val_1854_;
goto v___jp_1562_;
}
else
{
lean_object* v___x_1856_; size_t v___x_1857_; size_t v___x_1858_; lean_object* v___x_1859_; 
v___x_1856_ = lean_box(0);
v___x_1857_ = ((size_t)0ULL);
v___x_1858_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_1859_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_1828_, v___x_1857_, v___x_1858_, v___x_1856_, v___y_1540_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_dec_ref_known(v___x_1859_, 1);
v___y_1563_ = v___x_1827_;
v___y_1564_ = v_fullName_1826_;
v___y_1565_ = v_url_1821_;
v___y_1566_ = v_subDir_x3f_1824_;
v___y_1567_ = v_githubUrl_x3f_1822_;
v_a_1568_ = v_val_1854_;
goto v___jp_1562_;
}
else
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1867_; 
lean_dec(v_val_1854_);
lean_dec_ref(v___x_1827_);
lean_dec_ref(v_fullName_1826_);
lean_dec(v_subDir_x3f_1824_);
lean_dec(v_githubUrl_x3f_1822_);
lean_dec_ref(v_url_1821_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1862_ = v___x_1859_;
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1859_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1865_; 
if (v_isShared_1863_ == 0)
{
v___x_1865_ = v___x_1862_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_a_1860_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
}
}
}
case 1:
{
lean_object* v_rev_1868_; lean_object* v___x_1869_; uint8_t v___x_1870_; 
lean_dec(v_defaultBranch_x3f_1823_);
lean_del_object(v___x_1819_);
lean_del_object(v___x_1807_);
lean_dec_ref(v___x_1703_);
v_rev_1868_ = lean_ctor_get(v_version_1699_, 0);
v___x_1869_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_1870_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_1870_ == 0)
{
lean_inc_ref(v_rev_1868_);
v___y_1563_ = v___x_1827_;
v___y_1564_ = v_fullName_1826_;
v___y_1565_ = v_url_1821_;
v___y_1566_ = v_subDir_x3f_1824_;
v___y_1567_ = v_githubUrl_x3f_1822_;
v_a_1568_ = v_rev_1868_;
goto v___jp_1562_;
}
else
{
lean_object* v___x_1871_; size_t v___x_1872_; size_t v___x_1873_; lean_object* v___x_1874_; 
v___x_1871_ = lean_box(0);
v___x_1872_ = ((size_t)0ULL);
v___x_1873_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_1874_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_1869_, v___x_1872_, v___x_1873_, v___x_1871_, v___y_1540_);
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_dec_ref_known(v___x_1874_, 1);
lean_inc_ref(v_rev_1868_);
v___y_1563_ = v___x_1827_;
v___y_1564_ = v_fullName_1826_;
v___y_1565_ = v_url_1821_;
v___y_1566_ = v_subDir_x3f_1824_;
v___y_1567_ = v_githubUrl_x3f_1822_;
v_a_1568_ = v_rev_1868_;
goto v___jp_1562_;
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
lean_dec_ref(v___x_1827_);
lean_dec_ref(v_fullName_1826_);
lean_dec(v_subDir_x3f_1824_);
lean_dec(v_githubUrl_x3f_1822_);
lean_dec_ref(v_url_1821_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1874_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1874_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
default: 
{
lean_object* v_ver_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
lean_dec(v_defaultBranch_x3f_1823_);
lean_del_object(v___x_1819_);
v_ver_1883_ = lean_ctor_get(v_version_1699_, 0);
v___x_1884_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_scope_1698_);
lean_inc_ref(v_lakeEnv_1536_);
v___x_1885_ = l_Lake_Reservoir_fetchPkgVersions(v_lakeEnv_1536_, v_scope_1698_, v___x_1703_, v___x_1884_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; lean_object* v_a_1887_; lean_object* v___x_1889_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
lean_inc(v_a_1886_);
v_a_1887_ = lean_ctor_get(v___x_1885_, 1);
lean_inc(v_a_1887_);
lean_dec_ref_known(v___x_1885_, 2);
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 0, v_a_1886_);
v___x_1889_ = v___x_1807_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1886_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
lean_inc_ref(v_ver_1883_);
v___y_1771_ = v___x_1827_;
v___y_1772_ = v_ver_1883_;
v___y_1773_ = v_fullName_1826_;
v___y_1774_ = v_url_1821_;
v___y_1775_ = v_subDir_x3f_1824_;
v___y_1776_ = v_githubUrl_x3f_1822_;
v_fst_1777_ = v___x_1889_;
v_snd_1778_ = v_a_1887_;
goto v___jp_1770_;
}
}
else
{
lean_object* v_a_1891_; lean_object* v_a_1892_; lean_object* v___x_1894_; 
v_a_1891_ = lean_ctor_get(v___x_1885_, 0);
lean_inc(v_a_1891_);
v_a_1892_ = lean_ctor_get(v___x_1885_, 1);
lean_inc(v_a_1892_);
lean_dec_ref_known(v___x_1885_, 2);
if (v_isShared_1808_ == 0)
{
lean_ctor_set_tag(v___x_1807_, 0);
lean_ctor_set(v___x_1807_, 0, v_a_1891_);
v___x_1894_ = v___x_1807_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v_a_1891_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
lean_inc_ref(v_ver_1883_);
v___y_1771_ = v___x_1827_;
v___y_1772_ = v_ver_1883_;
v___y_1773_ = v_fullName_1826_;
v___y_1774_ = v_url_1821_;
v___y_1775_ = v_subDir_x3f_1824_;
v___y_1776_ = v_githubUrl_x3f_1822_;
v_fst_1777_ = v___x_1894_;
v_snd_1778_ = v_a_1892_;
goto v___jp_1770_;
}
}
}
}
}
else
{
lean_del_object(v___x_1819_);
lean_dec(v_val_1817_);
lean_del_object(v___x_1807_);
lean_dec_ref(v___x_1703_);
lean_dec_ref(v_relPkgsDir_1538_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v___y_1543_ = v_val_1815_;
v___y_1544_ = v___y_1540_;
goto v___jp_1542_;
}
}
}
else
{
lean_dec(v___x_1816_);
lean_del_object(v___x_1807_);
lean_dec_ref(v___x_1703_);
lean_dec_ref(v_relPkgsDir_1538_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v___y_1543_ = v_val_1815_;
v___y_1544_ = v___y_1540_;
goto v___jp_1542_;
}
}
}
}
}
v___jp_1898_:
{
lean_object* v___x_1901_; uint8_t v___x_1902_; 
v___x_1901_ = lean_array_get_size(v_snd_1900_);
v___x_1902_ = lean_nat_dec_lt(v___x_1701_, v___x_1901_);
if (v___x_1902_ == 0)
{
lean_dec_ref(v_snd_1900_);
v_a_1794_ = v_fst_1899_;
goto v___jp_1793_;
}
else
{
lean_object* v___x_1903_; size_t v___x_1904_; size_t v___x_1905_; lean_object* v___x_1906_; 
v___x_1903_ = lean_box(0);
v___x_1904_ = ((size_t)0ULL);
v___x_1905_ = lean_usize_of_nat(v___x_1901_);
v___x_1906_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_snd_1900_, v___x_1904_, v___x_1905_, v___x_1903_, v___y_1540_);
lean_dec_ref(v_snd_1900_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_dec_ref_known(v___x_1906_, 1);
v_a_1794_ = v_fst_1899_;
goto v___jp_1793_;
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_dec_ref(v_fst_1899_);
lean_dec_ref(v___x_1703_);
lean_dec_ref(v_relPkgsDir_1538_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1906_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1906_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
}
}
else
{
uint8_t v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; uint8_t v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
lean_inc(v_name_1697_);
lean_dec_ref(v_relPkgsDir_1538_);
lean_dec_ref(v_wsDir_1537_);
lean_dec_ref(v_lakeEnv_1536_);
lean_dec_ref(v_dep_1534_);
v___x_1923_ = 0;
v___x_1924_ = l_Lean_Name_toString(v_name_1697_, v___x_1923_);
v___x_1925_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__8));
v___x_1926_ = lean_string_append(v___x_1924_, v___x_1925_);
v___x_1927_ = 3;
v___x_1928_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1928_, 0, v___x_1926_);
lean_ctor_set_uint8(v___x_1928_, sizeof(void*)*1, v___x_1927_);
lean_inc_ref(v___y_1540_);
v___x_1929_ = lean_apply_2(v___y_1540_, v___x_1928_, lean_box(0));
v___x_1930_ = lean_box(0);
v___x_1931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1930_);
return v___x_1931_;
}
}
v___jp_1542_:
{
lean_object* v_fullName_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; uint8_t v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; 
v_fullName_1545_ = lean_ctor_get(v___y_1543_, 1);
lean_inc_ref(v_fullName_1545_);
lean_dec_ref(v___y_1543_);
v___x_1546_ = ((lean_object*)(l_Lake_Dependency_materialize___closed__0));
v___x_1547_ = lean_string_append(v_fullName_1545_, v___x_1546_);
v___x_1548_ = 3;
v___x_1549_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set_uint8(v___x_1549_, sizeof(void*)*1, v___x_1548_);
lean_inc_ref(v___y_1544_);
v___x_1550_ = lean_apply_2(v___y_1544_, v___x_1549_, lean_box(0));
v___x_1551_ = lean_box(0);
v___x_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1551_);
return v___x_1552_;
}
v___jp_1553_:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___y_1557_);
v___x_1561_ = l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_materializeGit(v_dep_1534_, v_inherited_1535_, v_lakeEnv_1536_, v_wsDir_1537_, v___y_1555_, v___y_1554_, v___y_1556_, v___y_1559_, v___x_1560_, v___y_1558_, v___y_1540_);
lean_dec_ref(v_lakeEnv_1536_);
return v___x_1561_;
}
v___jp_1562_:
{
if (lean_obj_tag(v___y_1567_) == 0)
{
lean_object* v___x_1569_; 
v___x_1569_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
v___y_1554_ = v___y_1563_;
v___y_1555_ = v___y_1564_;
v___y_1556_ = v___y_1565_;
v___y_1557_ = v_a_1568_;
v___y_1558_ = v___y_1566_;
v___y_1559_ = v___x_1569_;
goto v___jp_1553_;
}
else
{
lean_object* v_val_1570_; 
v_val_1570_ = lean_ctor_get(v___y_1567_, 0);
lean_inc(v_val_1570_);
lean_dec_ref_known(v___y_1567_, 1);
v___y_1554_ = v___y_1563_;
v___y_1555_ = v___y_1564_;
v___y_1556_ = v___y_1565_;
v___y_1557_ = v_a_1568_;
v___y_1558_ = v___y_1566_;
v___y_1559_ = v_val_1570_;
goto v___jp_1553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Dependency_materialize___boxed(lean_object* v_dep_1932_, lean_object* v_inherited_1933_, lean_object* v_lakeEnv_1934_, lean_object* v_wsDir_1935_, lean_object* v_relPkgsDir_1936_, lean_object* v_relParentDir_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
uint8_t v_inherited_boxed_1940_; lean_object* v_res_1941_; 
v_inherited_boxed_1940_ = lean_unbox(v_inherited_1933_);
v_res_1941_ = l_Lake_Dependency_materialize(v_dep_1932_, v_inherited_boxed_1940_, v_lakeEnv_1934_, v_wsDir_1935_, v_relPkgsDir_1936_, v_relParentDir_1937_, v___y_1938_);
lean_dec_ref(v___y_1938_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep(lean_object* v_manifestEntry_1947_, lean_object* v_wsDir_1948_, lean_object* v_relPkgDir_1949_, lean_object* v_remoteUrl_1950_, lean_object* v___y_1951_){
_start:
{
lean_object* v___y_1954_; lean_object* v_a_1955_; lean_object* v___f_1958_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v_a_1963_; lean_object* v_a_1964_; lean_object* v_pkgDir_1980_; lean_object* v_a_1982_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v_val_2024_; lean_object* v___x_2039_; lean_object* v___x_2040_; uint8_t v___x_2041_; 
v___f_1958_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__1));
lean_inc_ref(v_relPkgDir_1949_);
v_pkgDir_1980_ = l_Lake_joinRelative(v_wsDir_1948_, v_relPkgDir_1949_);
v___x_2020_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13);
v___x_2021_ = lean_unsigned_to_nat(0u);
v___x_2022_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_pkgDir_1980_);
v___x_2039_ = l_Lake_resolvePath(v_pkgDir_1980_);
v___x_2040_ = lean_string_utf8_byte_size(v___x_2039_);
v___x_2041_ = lean_nat_dec_eq(v___x_2040_, v___x_2021_);
if (v___x_2041_ == 0)
{
lean_object* v___x_2042_; 
v___x_2042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2039_);
v_val_2024_ = v___x_2042_;
goto v___jp_2023_;
}
else
{
lean_object* v___x_2043_; 
lean_dec_ref(v___x_2039_);
v___x_2043_ = lean_box(0);
v_val_2024_ = v___x_2043_;
goto v___jp_2023_;
}
v___jp_1953_:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1956_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1956_, 0, v___y_1954_);
lean_ctor_set(v___x_1956_, 1, v_relPkgDir_1949_);
lean_ctor_set(v___x_1956_, 2, v_remoteUrl_1950_);
lean_ctor_set(v___x_1956_, 3, v_a_1955_);
lean_ctor_set(v___x_1956_, 4, v_manifestEntry_1947_);
v___x_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
return v___x_1957_;
}
v___jp_1959_:
{
lean_object* v___x_1965_; uint8_t v___x_1966_; 
v___x_1965_ = lean_array_get_size(v_a_1964_);
v___x_1966_ = lean_nat_dec_lt(v___y_1962_, v___x_1965_);
if (v___x_1966_ == 0)
{
v___y_1954_ = v___y_1961_;
v_a_1955_ = v_a_1963_;
goto v___jp_1953_;
}
else
{
lean_object* v___x_1967_; size_t v___x_1968_; size_t v___x_1969_; lean_object* v___x_3122__overap_1970_; lean_object* v___x_1971_; 
v___x_1967_ = lean_box(0);
v___x_1968_ = ((size_t)0ULL);
v___x_1969_ = lean_usize_of_nat(v___x_1965_);
lean_inc_ref(v_a_1964_);
lean_inc_ref(v___y_1960_);
v___x_3122__overap_1970_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___y_1960_, v___f_1958_, v_a_1964_, v___x_1968_, v___x_1969_, v___x_1967_);
lean_inc_ref(v___y_1951_);
v___x_1971_ = lean_apply_2(v___x_3122__overap_1970_, v___y_1951_, lean_box(0));
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_dec_ref_known(v___x_1971_, 1);
v___y_1954_ = v___y_1961_;
v_a_1955_ = v_a_1963_;
goto v___jp_1953_;
}
else
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_dec_ref(v_a_1963_);
lean_dec_ref(v___y_1961_);
lean_dec_ref(v_remoteUrl_1950_);
lean_dec_ref(v_relPkgDir_1949_);
lean_dec_ref(v_manifestEntry_1947_);
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1971_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1971_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1972_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
}
v___jp_1981_:
{
if (lean_obj_tag(v_a_1982_) == 1)
{
lean_object* v_manifestFile_x3f_1983_; 
lean_dec_ref(v_pkgDir_1980_);
v_manifestFile_x3f_1983_ = lean_ctor_get(v_manifestEntry_1947_, 3);
if (lean_obj_tag(v_manifestFile_x3f_1983_) == 1)
{
lean_object* v_val_1984_; lean_object* v_val_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; 
v_val_1984_ = lean_ctor_get(v_a_1982_, 0);
lean_inc_n(v_val_1984_, 2);
lean_dec_ref_known(v_a_1982_, 1);
v_val_1985_ = lean_ctor_get(v_manifestFile_x3f_1983_, 0);
lean_inc(v_val_1985_);
v___x_1986_ = l_Lake_joinRelative(v_val_1984_, v_val_1985_);
v___x_1987_ = lean_obj_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__13);
v___x_1988_ = lean_unsigned_to_nat(0u);
v___x_1989_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_1990_ = l_Lake_Manifest_load(v___x_1986_);
if (lean_obj_tag(v___x_1990_) == 0)
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_1998_; 
v_a_1991_ = lean_ctor_get(v___x_1990_, 0);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1993_ = v___x_1990_;
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1990_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_1998_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1994_ == 0)
{
lean_ctor_set_tag(v___x_1993_, 1);
v___x_1996_ = v___x_1993_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_a_1991_);
v___x_1996_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
v___y_1960_ = v___x_1987_;
v___y_1961_ = v_val_1984_;
v___y_1962_ = v___x_1988_;
v_a_1963_ = v___x_1996_;
v_a_1964_ = v___x_1989_;
goto v___jp_1959_;
}
}
}
else
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2006_; 
v_a_1999_ = lean_ctor_get(v___x_1990_, 0);
v_isSharedCheck_2006_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_2001_ = v___x_1990_;
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1990_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2006_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2004_; 
if (v_isShared_2002_ == 0)
{
lean_ctor_set_tag(v___x_2001_, 0);
v___x_2004_ = v___x_2001_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v_a_1999_);
v___x_2004_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
v___y_1960_ = v___x_1987_;
v___y_1961_ = v_val_1984_;
v___y_1962_ = v___x_1988_;
v_a_1963_ = v___x_2004_;
v_a_1964_ = v___x_1989_;
goto v___jp_1959_;
}
}
}
}
else
{
lean_object* v_val_2007_; lean_object* v___x_2008_; 
v_val_2007_ = lean_ctor_get(v_a_1982_, 0);
lean_inc(v_val_2007_);
lean_dec_ref_known(v_a_1982_, 1);
v___x_2008_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__1));
v___y_1954_ = v_val_2007_;
v_a_1955_ = v___x_2008_;
goto v___jp_1953_;
}
}
else
{
lean_object* v_name_2009_; uint8_t v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; uint8_t v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
lean_dec(v_a_1982_);
lean_dec_ref(v_remoteUrl_1950_);
lean_dec_ref(v_relPkgDir_1949_);
v_name_2009_ = lean_ctor_get(v_manifestEntry_1947_, 0);
lean_inc(v_name_2009_);
lean_dec_ref(v_manifestEntry_1947_);
v___x_2010_ = 0;
v___x_2011_ = l_Lean_Name_toString(v_name_2009_, v___x_2010_);
v___x_2012_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_2013_ = lean_string_append(v___x_2011_, v___x_2012_);
v___x_2014_ = lean_string_append(v___x_2013_, v_pkgDir_1980_);
lean_dec_ref(v_pkgDir_1980_);
v___x_2015_ = 3;
v___x_2016_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2016_, 0, v___x_2014_);
lean_ctor_set_uint8(v___x_2016_, sizeof(void*)*1, v___x_2015_);
lean_inc_ref(v___y_1951_);
v___x_2017_ = lean_apply_2(v___y_1951_, v___x_2016_, lean_box(0));
v___x_2018_ = lean_box(0);
v___x_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2019_, 0, v___x_2018_);
return v___x_2019_;
}
}
v___jp_2023_:
{
uint8_t v___x_2025_; 
v___x_2025_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_2025_ == 0)
{
v_a_1982_ = v_val_2024_;
goto v___jp_1981_;
}
else
{
lean_object* v___x_2026_; size_t v___x_2027_; size_t v___x_2028_; lean_object* v___x_2874__overap_2029_; lean_object* v___x_2030_; 
v___x_2026_ = lean_box(0);
v___x_2027_ = ((size_t)0ULL);
v___x_2028_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_2874__overap_2029_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2020_, v___f_1958_, v___x_2022_, v___x_2027_, v___x_2028_, v___x_2026_);
lean_inc_ref(v___y_1951_);
v___x_2030_ = lean_apply_2(v___x_2874__overap_2029_, v___y_1951_, lean_box(0));
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_dec_ref_known(v___x_2030_, 1);
v_a_1982_ = v_val_2024_;
goto v___jp_1981_;
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
lean_dec(v_val_2024_);
lean_dec_ref(v_pkgDir_1980_);
lean_dec_ref(v_remoteUrl_1950_);
lean_dec_ref(v_relPkgDir_1949_);
lean_dec_ref(v_manifestEntry_1947_);
v_a_2031_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2030_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2030_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2036_; 
if (v_isShared_2034_ == 0)
{
v___x_2036_ = v___x_2033_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2031_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___boxed(lean_object* v_manifestEntry_2044_, lean_object* v_wsDir_2045_, lean_object* v_relPkgDir_2046_, lean_object* v_remoteUrl_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep(v_manifestEntry_2044_, v_wsDir_2045_, v_relPkgDir_2046_, v_remoteUrl_2047_, v___y_2048_);
lean_dec_ref(v___y_2048_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_materialize(lean_object* v_manifestEntry_2051_, lean_object* v_lakeEnv_2052_, lean_object* v_wsDir_2053_, lean_object* v_relPkgsDir_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v___y_2058_; lean_object* v___y_2059_; lean_object* v___y_2060_; lean_object* v_a_2061_; lean_object* v___y_2065_; lean_object* v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2068_; lean_object* v_a_2069_; lean_object* v_a_2070_; lean_object* v_src_2085_; 
v_src_2085_ = lean_ctor_get(v_manifestEntry_2051_, 4);
lean_inc_ref(v_src_2085_);
if (lean_obj_tag(v_src_2085_) == 0)
{
lean_object* v_name_2086_; lean_object* v_manifestFile_x3f_2087_; lean_object* v_dir_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2178_; 
lean_dec_ref(v_relPkgsDir_2054_);
v_name_2086_ = lean_ctor_get(v_manifestEntry_2051_, 0);
v_manifestFile_x3f_2087_ = lean_ctor_get(v_manifestEntry_2051_, 3);
v_dir_2088_ = lean_ctor_get(v_src_2085_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v_src_2085_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2090_ = v_src_2085_;
v_isShared_2091_ = v_isSharedCheck_2178_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_dir_2088_);
lean_dec(v_src_2085_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2178_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2092_; lean_object* v___y_2094_; lean_object* v_a_2095_; lean_object* v___y_2101_; lean_object* v___y_2102_; lean_object* v_a_2103_; lean_object* v_a_2104_; lean_object* v_pkgDir_2119_; lean_object* v_a_2121_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v_val_2159_; lean_object* v___x_2173_; lean_object* v___x_2174_; uint8_t v___x_2175_; 
v___x_2092_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
lean_inc_ref(v_dir_2088_);
v_pkgDir_2119_ = l_Lake_joinRelative(v_wsDir_2053_, v_dir_2088_);
v___x_2156_ = lean_unsigned_to_nat(0u);
v___x_2157_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_pkgDir_2119_);
v___x_2173_ = l_Lake_resolvePath(v_pkgDir_2119_);
v___x_2174_ = lean_string_utf8_byte_size(v___x_2173_);
v___x_2175_ = lean_nat_dec_eq(v___x_2174_, v___x_2156_);
if (v___x_2175_ == 0)
{
lean_object* v___x_2176_; 
v___x_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2173_);
v_val_2159_ = v___x_2176_;
goto v___jp_2158_;
}
else
{
lean_object* v___x_2177_; 
lean_dec_ref(v___x_2173_);
v___x_2177_ = lean_box(0);
v_val_2159_ = v___x_2177_;
goto v___jp_2158_;
}
v___jp_2093_:
{
lean_object* v___x_2096_; lean_object* v___x_2098_; 
v___x_2096_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2096_, 0, v___y_2094_);
lean_ctor_set(v___x_2096_, 1, v_dir_2088_);
lean_ctor_set(v___x_2096_, 2, v___x_2092_);
lean_ctor_set(v___x_2096_, 3, v_a_2095_);
lean_ctor_set(v___x_2096_, 4, v_manifestEntry_2051_);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 0, v___x_2096_);
v___x_2098_ = v___x_2090_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v___x_2096_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
v___jp_2100_:
{
lean_object* v___x_2105_; uint8_t v___x_2106_; 
v___x_2105_ = lean_array_get_size(v_a_2104_);
v___x_2106_ = lean_nat_dec_lt(v___y_2101_, v___x_2105_);
if (v___x_2106_ == 0)
{
v___y_2094_ = v___y_2102_;
v_a_2095_ = v_a_2103_;
goto v___jp_2093_;
}
else
{
lean_object* v___x_2107_; size_t v___x_2108_; size_t v___x_2109_; lean_object* v___x_2110_; 
v___x_2107_ = lean_box(0);
v___x_2108_ = ((size_t)0ULL);
v___x_2109_ = lean_usize_of_nat(v___x_2105_);
v___x_2110_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_2104_, v___x_2108_, v___x_2109_, v___x_2107_, v___y_2055_);
if (lean_obj_tag(v___x_2110_) == 0)
{
lean_dec_ref_known(v___x_2110_, 1);
v___y_2094_ = v___y_2102_;
v_a_2095_ = v_a_2103_;
goto v___jp_2093_;
}
else
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2118_; 
lean_dec_ref(v_a_2103_);
lean_dec_ref(v___y_2102_);
lean_del_object(v___x_2090_);
lean_dec_ref(v_dir_2088_);
lean_dec_ref(v_manifestEntry_2051_);
v_a_2111_ = lean_ctor_get(v___x_2110_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2113_ = v___x_2110_;
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_2110_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2116_; 
if (v_isShared_2114_ == 0)
{
v___x_2116_ = v___x_2113_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_a_2111_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
}
v___jp_2120_:
{
if (lean_obj_tag(v_a_2121_) == 1)
{
lean_dec_ref(v_pkgDir_2119_);
if (lean_obj_tag(v_manifestFile_x3f_2087_) == 1)
{
lean_object* v_val_2122_; lean_object* v_val_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v_val_2122_ = lean_ctor_get(v_a_2121_, 0);
lean_inc_n(v_val_2122_, 2);
lean_dec_ref_known(v_a_2121_, 1);
v_val_2123_ = lean_ctor_get(v_manifestFile_x3f_2087_, 0);
lean_inc(v_val_2123_);
v___x_2124_ = l_Lake_joinRelative(v_val_2122_, v_val_2123_);
v___x_2125_ = lean_unsigned_to_nat(0u);
v___x_2126_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_2127_ = l_Lake_Manifest_load(v___x_2124_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2135_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2127_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2130_ = v___x_2127_;
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_a_2128_);
lean_dec(v___x_2127_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
lean_ctor_set_tag(v___x_2130_, 1);
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2128_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
v___y_2101_ = v___x_2125_;
v___y_2102_ = v_val_2122_;
v_a_2103_ = v___x_2133_;
v_a_2104_ = v___x_2126_;
goto v___jp_2100_;
}
}
}
else
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2143_; 
v_a_2136_ = lean_ctor_get(v___x_2127_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2127_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2138_ = v___x_2127_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2127_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2141_; 
if (v_isShared_2139_ == 0)
{
lean_ctor_set_tag(v___x_2138_, 0);
v___x_2141_ = v___x_2138_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_a_2136_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
v___y_2101_ = v___x_2125_;
v___y_2102_ = v_val_2122_;
v_a_2103_ = v___x_2141_;
v_a_2104_ = v___x_2126_;
goto v___jp_2100_;
}
}
}
}
else
{
lean_object* v_val_2144_; lean_object* v___x_2145_; 
v_val_2144_ = lean_ctor_get(v_a_2121_, 0);
lean_inc(v_val_2144_);
lean_dec_ref_known(v_a_2121_, 1);
v___x_2145_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__1));
v___y_2094_ = v_val_2144_;
v_a_2095_ = v___x_2145_;
goto v___jp_2093_;
}
}
else
{
uint8_t v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; uint8_t v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
lean_inc(v_name_2086_);
lean_dec(v_a_2121_);
lean_del_object(v___x_2090_);
lean_dec_ref(v_dir_2088_);
lean_dec_ref(v_manifestEntry_2051_);
v___x_2146_ = 0;
v___x_2147_ = l_Lean_Name_toString(v_name_2086_, v___x_2146_);
v___x_2148_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_2149_ = lean_string_append(v___x_2147_, v___x_2148_);
v___x_2150_ = lean_string_append(v___x_2149_, v_pkgDir_2119_);
lean_dec_ref(v_pkgDir_2119_);
v___x_2151_ = 3;
v___x_2152_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2152_, 0, v___x_2150_);
lean_ctor_set_uint8(v___x_2152_, sizeof(void*)*1, v___x_2151_);
lean_inc_ref(v___y_2055_);
v___x_2153_ = lean_apply_2(v___y_2055_, v___x_2152_, lean_box(0));
v___x_2154_ = lean_box(0);
v___x_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2154_);
return v___x_2155_;
}
}
v___jp_2158_:
{
uint8_t v___x_2160_; 
v___x_2160_ = lean_uint8_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__16);
if (v___x_2160_ == 0)
{
v_a_2121_ = v_val_2159_;
goto v___jp_2120_;
}
else
{
lean_object* v___x_2161_; size_t v___x_2162_; size_t v___x_2163_; lean_object* v___x_2164_; 
v___x_2161_ = lean_box(0);
v___x_2162_ = ((size_t)0ULL);
v___x_2163_ = lean_usize_once(&l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17, &l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17_once, _init_l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__17);
v___x_2164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___x_2157_, v___x_2162_, v___x_2163_, v___x_2161_, v___y_2055_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_dec_ref_known(v___x_2164_, 1);
v_a_2121_ = v_val_2159_;
goto v___jp_2120_;
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_dec(v_val_2159_);
lean_dec_ref(v_pkgDir_2119_);
lean_del_object(v___x_2090_);
lean_dec_ref(v_dir_2088_);
lean_dec_ref(v_manifestEntry_2051_);
v_a_2165_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2164_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2164_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
}
}
}
else
{
lean_object* v_name_2179_; lean_object* v_manifestFile_x3f_2180_; lean_object* v_url_2181_; lean_object* v_rev_2182_; lean_object* v_subDir_x3f_2183_; lean_object* v_pkgUrlMap_2184_; uint8_t v___x_2185_; lean_object* v___x_2186_; lean_object* v___y_2188_; lean_object* v___y_2189_; lean_object* v___y_2190_; lean_object* v_a_2191_; lean_object* v___y_2225_; lean_object* v___y_2226_; lean_object* v___y_2227_; lean_object* v___y_2228_; lean_object* v___y_2229_; lean_object* v_val_2230_; lean_object* v_relGitDir_2245_; lean_object* v_repo_2246_; lean_object* v_url_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v_name_2179_ = lean_ctor_get(v_manifestEntry_2051_, 0);
v_manifestFile_x3f_2180_ = lean_ctor_get(v_manifestEntry_2051_, 3);
v_url_2181_ = lean_ctor_get(v_src_2085_, 0);
lean_inc_ref(v_url_2181_);
v_rev_2182_ = lean_ctor_get(v_src_2085_, 1);
lean_inc_ref(v_rev_2182_);
v_subDir_x3f_2183_ = lean_ctor_get(v_src_2085_, 3);
lean_inc(v_subDir_x3f_2183_);
lean_dec_ref_known(v_src_2085_, 4);
v_pkgUrlMap_2184_ = lean_ctor_get(v_lakeEnv_2052_, 5);
v___x_2185_ = 0;
lean_inc(v_name_2179_);
v___x_2186_ = l_Lean_Name_toString(v_name_2179_, v___x_2185_);
lean_inc_ref_n(v___x_2186_, 2);
v_relGitDir_2245_ = l_Lake_joinRelative(v_relPkgsDir_2054_, v___x_2186_);
lean_inc_ref(v_relGitDir_2245_);
lean_inc_ref(v_wsDir_2053_);
v_repo_2246_ = l_Lake_joinRelative(v_wsDir_2053_, v_relGitDir_2245_);
v_url_2247_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_pkgUrlMap_2184_, v_name_2179_, v_url_2181_);
lean_dec_ref(v_url_2181_);
v___x_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2248_, 0, v_rev_2182_);
lean_inc(v_url_2247_);
v___x_2249_ = l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo(v___x_2186_, v_repo_2246_, v_url_2247_, v___x_2248_, v___y_2055_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v___y_2251_; lean_object* v___y_2252_; lean_object* v___y_2262_; 
lean_dec_ref_known(v___x_2249_, 1);
if (lean_obj_tag(v_subDir_x3f_2183_) == 0)
{
v___y_2262_ = v_relGitDir_2245_;
goto v___jp_2261_;
}
else
{
lean_object* v_val_2266_; lean_object* v___x_2267_; 
v_val_2266_ = lean_ctor_get(v_subDir_x3f_2183_, 0);
lean_inc(v_val_2266_);
lean_dec_ref_known(v_subDir_x3f_2183_, 1);
v___x_2267_ = l_Lake_joinRelative(v_relGitDir_2245_, v_val_2266_);
v___y_2262_ = v___x_2267_;
goto v___jp_2261_;
}
v___jp_2250_:
{
lean_object* v_pkgDir_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; uint8_t v___x_2258_; 
lean_inc_ref(v___y_2251_);
v_pkgDir_2253_ = l_Lake_joinRelative(v_wsDir_2053_, v___y_2251_);
v___x_2254_ = lean_unsigned_to_nat(0u);
v___x_2255_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
lean_inc_ref(v_pkgDir_2253_);
v___x_2256_ = l_Lake_resolvePath(v_pkgDir_2253_);
v___x_2257_ = lean_string_utf8_byte_size(v___x_2256_);
v___x_2258_ = lean_nat_dec_eq(v___x_2257_, v___x_2254_);
if (v___x_2258_ == 0)
{
lean_object* v___x_2259_; 
v___x_2259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2256_);
v___y_2225_ = v___x_2254_;
v___y_2226_ = v___y_2251_;
v___y_2227_ = v___y_2252_;
v___y_2228_ = v___x_2255_;
v___y_2229_ = v_pkgDir_2253_;
v_val_2230_ = v___x_2259_;
goto v___jp_2224_;
}
else
{
lean_object* v___x_2260_; 
lean_dec_ref(v___x_2256_);
v___x_2260_ = lean_box(0);
v___y_2225_ = v___x_2254_;
v___y_2226_ = v___y_2251_;
v___y_2227_ = v___y_2252_;
v___y_2228_ = v___x_2255_;
v___y_2229_ = v_pkgDir_2253_;
v_val_2230_ = v___x_2260_;
goto v___jp_2224_;
}
}
v___jp_2261_:
{
lean_object* v___x_2263_; 
v___x_2263_ = l_Lake_Git_filterUrl_x3f(v_url_2247_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v___x_2264_; 
v___x_2264_ = ((lean_object*)(l_Lake_instInhabitedMaterializedDep_default___closed__0));
v___y_2251_ = v___y_2262_;
v___y_2252_ = v___x_2264_;
goto v___jp_2250_;
}
else
{
lean_object* v_val_2265_; 
v_val_2265_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_val_2265_);
lean_dec_ref_known(v___x_2263_, 1);
v___y_2251_ = v___y_2262_;
v___y_2252_ = v_val_2265_;
goto v___jp_2250_;
}
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_dec(v_url_2247_);
lean_dec_ref(v_relGitDir_2245_);
lean_dec_ref(v___x_2186_);
lean_dec(v_subDir_x3f_2183_);
lean_dec_ref(v_wsDir_2053_);
lean_dec_ref(v_manifestEntry_2051_);
v_a_2268_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2249_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2249_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2268_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
v___jp_2187_:
{
if (lean_obj_tag(v_a_2191_) == 1)
{
lean_dec_ref(v___y_2190_);
lean_dec_ref(v___x_2186_);
if (lean_obj_tag(v_manifestFile_x3f_2180_) == 1)
{
lean_object* v_val_2192_; lean_object* v_val_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v_val_2192_ = lean_ctor_get(v_a_2191_, 0);
lean_inc_n(v_val_2192_, 2);
lean_dec_ref_known(v_a_2191_, 1);
v_val_2193_ = lean_ctor_get(v_manifestFile_x3f_2180_, 0);
lean_inc(v_val_2193_);
v___x_2194_ = l_Lake_joinRelative(v_val_2192_, v_val_2193_);
v___x_2195_ = lean_unsigned_to_nat(0u);
v___x_2196_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_materializeGitRepo_resolveUrl___closed__14));
v___x_2197_ = l_Lake_Manifest_load(v___x_2194_);
if (lean_obj_tag(v___x_2197_) == 0)
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
v_a_2198_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2197_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2197_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
lean_ctor_set_tag(v___x_2200_, 1);
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
v___y_2065_ = v_val_2192_;
v___y_2066_ = v___y_2188_;
v___y_2067_ = v___x_2195_;
v___y_2068_ = v___y_2189_;
v_a_2069_ = v___x_2203_;
v_a_2070_ = v___x_2196_;
goto v___jp_2064_;
}
}
}
else
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
v_a_2206_ = lean_ctor_get(v___x_2197_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2197_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2197_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2197_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
lean_ctor_set_tag(v___x_2208_, 0);
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
v___y_2065_ = v_val_2192_;
v___y_2066_ = v___y_2188_;
v___y_2067_ = v___x_2195_;
v___y_2068_ = v___y_2189_;
v_a_2069_ = v___x_2211_;
v_a_2070_ = v___x_2196_;
goto v___jp_2064_;
}
}
}
}
else
{
lean_object* v_val_2214_; lean_object* v___x_2215_; 
v_val_2214_ = lean_ctor_get(v_a_2191_, 0);
lean_inc(v_val_2214_);
lean_dec_ref_known(v_a_2191_, 1);
v___x_2215_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_PackageEntry_materialize_mkDep___closed__1));
v___y_2058_ = v_val_2214_;
v___y_2059_ = v___y_2188_;
v___y_2060_ = v___y_2189_;
v_a_2061_ = v___x_2215_;
goto v___jp_2057_;
}
}
else
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; uint8_t v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
lean_dec(v_a_2191_);
lean_dec_ref(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec_ref(v_manifestEntry_2051_);
v___x_2216_ = ((lean_object*)(l___private_Lake_Load_Materialize_0__Lake_Dependency_materialize_mkDep___closed__0));
v___x_2217_ = lean_string_append(v___x_2186_, v___x_2216_);
v___x_2218_ = lean_string_append(v___x_2217_, v___y_2190_);
lean_dec_ref(v___y_2190_);
v___x_2219_ = 3;
v___x_2220_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2220_, 0, v___x_2218_);
lean_ctor_set_uint8(v___x_2220_, sizeof(void*)*1, v___x_2219_);
lean_inc_ref(v___y_2055_);
v___x_2221_ = lean_apply_2(v___y_2055_, v___x_2220_, lean_box(0));
v___x_2222_ = lean_box(0);
v___x_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2222_);
return v___x_2223_;
}
}
v___jp_2224_:
{
lean_object* v___x_2231_; uint8_t v___x_2232_; 
v___x_2231_ = lean_array_get_size(v___y_2228_);
v___x_2232_ = lean_nat_dec_lt(v___y_2225_, v___x_2231_);
if (v___x_2232_ == 0)
{
v___y_2188_ = v___y_2226_;
v___y_2189_ = v___y_2227_;
v___y_2190_ = v___y_2229_;
v_a_2191_ = v_val_2230_;
goto v___jp_2187_;
}
else
{
lean_object* v___x_2233_; size_t v___x_2234_; size_t v___x_2235_; lean_object* v___x_2236_; 
v___x_2233_ = lean_box(0);
v___x_2234_ = ((size_t)0ULL);
v___x_2235_ = lean_usize_of_nat(v___x_2231_);
v___x_2236_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v___y_2228_, v___x_2234_, v___x_2235_, v___x_2233_, v___y_2055_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_dec_ref_known(v___x_2236_, 1);
v___y_2188_ = v___y_2226_;
v___y_2189_ = v___y_2227_;
v___y_2190_ = v___y_2229_;
v_a_2191_ = v_val_2230_;
goto v___jp_2187_;
}
else
{
lean_object* v_a_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2244_; 
lean_dec(v_val_2230_);
lean_dec_ref(v___y_2229_);
lean_dec_ref(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec_ref(v___x_2186_);
lean_dec_ref(v_manifestEntry_2051_);
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2239_ = v___x_2236_;
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_a_2237_);
lean_dec(v___x_2236_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2242_; 
if (v_isShared_2240_ == 0)
{
v___x_2242_ = v___x_2239_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_a_2237_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
}
}
}
v___jp_2057_:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2062_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2062_, 0, v___y_2058_);
lean_ctor_set(v___x_2062_, 1, v___y_2059_);
lean_ctor_set(v___x_2062_, 2, v___y_2060_);
lean_ctor_set(v___x_2062_, 3, v_a_2061_);
lean_ctor_set(v___x_2062_, 4, v_manifestEntry_2051_);
v___x_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2062_);
return v___x_2063_;
}
v___jp_2064_:
{
lean_object* v___x_2071_; uint8_t v___x_2072_; 
v___x_2071_ = lean_array_get_size(v_a_2070_);
v___x_2072_ = lean_nat_dec_lt(v___y_2067_, v___x_2071_);
if (v___x_2072_ == 0)
{
v___y_2058_ = v___y_2065_;
v___y_2059_ = v___y_2066_;
v___y_2060_ = v___y_2068_;
v_a_2061_ = v_a_2069_;
goto v___jp_2057_;
}
else
{
lean_object* v___x_2073_; size_t v___x_2074_; size_t v___x_2075_; lean_object* v___x_2076_; 
v___x_2073_ = lean_box(0);
v___x_2074_ = ((size_t)0ULL);
v___x_2075_ = lean_usize_of_nat(v___x_2071_);
v___x_2076_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Materialize_0__Lake_materializeGitRepo_spec__0(v_a_2070_, v___x_2074_, v___x_2075_, v___x_2073_, v___y_2055_);
if (lean_obj_tag(v___x_2076_) == 0)
{
lean_dec_ref_known(v___x_2076_, 1);
v___y_2058_ = v___y_2065_;
v___y_2059_ = v___y_2066_;
v___y_2060_ = v___y_2068_;
v_a_2061_ = v_a_2069_;
goto v___jp_2057_;
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
lean_dec_ref(v_a_2069_);
lean_dec_ref(v___y_2068_);
lean_dec_ref(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec_ref(v_manifestEntry_2051_);
v_a_2077_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2076_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2076_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PackageEntry_materialize___boxed(lean_object* v_manifestEntry_2276_, lean_object* v_lakeEnv_2277_, lean_object* v_wsDir_2278_, lean_object* v_relPkgsDir_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l_Lake_PackageEntry_materialize(v_manifestEntry_2276_, v_lakeEnv_2277_, v_wsDir_2278_, v_relPkgsDir_2279_, v___y_2280_);
lean_dec_ref(v___y_2280_);
lean_dec_ref(v_lakeEnv_2277_);
return v_res_2282_;
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
