// Lean compiler output
// Module: Lake.Util.Git
// Imports: public import Init.Data.ToString public import Lake.Util.Proc import Init.Data.String.TakeDrop import Init.Data.String.Search import Lake.Util.String
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
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lake_captureProc_x3f(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
uint8_t l_Lake_testProc(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lake_mkCmdLog(lean_object*);
lean_object* l_IO_Process_output(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
uint8_t l_Lake_isHex(lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* l_Lake_captureProc_x27(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
static const lean_string_object l_Lake_Git_defaultRemote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "origin"};
static const lean_object* l_Lake_Git_defaultRemote___closed__0 = (const lean_object*)&l_Lake_Git_defaultRemote___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Git_defaultRemote = (const lean_object*)&l_Lake_Git_defaultRemote___closed__0_value;
static const lean_string_object l_Lake_Git_upstreamBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "master"};
static const lean_object* l_Lake_Git_upstreamBranch___closed__0 = (const lean_object*)&l_Lake_Git_upstreamBranch___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Git_upstreamBranch = (const lean_object*)&l_Lake_Git_upstreamBranch___closed__0_value;
static const lean_string_object l_Lake_Git_filterUrl_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ".git"};
static const lean_object* l_Lake_Git_filterUrl_x3f___closed__0 = (const lean_object*)&l_Lake_Git_filterUrl_x3f___closed__0_value;
static const lean_string_object l_Lake_Git_filterUrl_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "git"};
static const lean_object* l_Lake_Git_filterUrl_x3f___closed__1 = (const lean_object*)&l_Lake_Git_filterUrl_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Git_filterUrl_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Git_isFullObjectName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Git_isFullObjectName___boxed(lean_object*);
static const lean_string_object l_Lake_GitRev_head___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l_Lake_GitRev_head___closed__0 = (const lean_object*)&l_Lake_GitRev_head___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_GitRev_head = (const lean_object*)&l_Lake_GitRev_head___closed__0_value;
static const lean_string_object l_Lake_GitRev_fetchHead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FETCH_HEAD"};
static const lean_object* l_Lake_GitRev_fetchHead___closed__0 = (const lean_object*)&l_Lake_GitRev_fetchHead___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_GitRev_fetchHead = (const lean_object*)&l_Lake_GitRev_fetchHead___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_GitRev_isFullSha1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRev_isFullSha1___boxed(lean_object*);
static const lean_string_object l_Lake_GitRev_withRemote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l_Lake_GitRev_withRemote___closed__0 = (const lean_object*)&l_Lake_GitRev_withRemote___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_GitRev_withRemote(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRev_withRemote___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_instCoeFilePath___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_instCoeFilePath___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_GitRepo_instCoeFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_GitRepo_instCoeFilePath___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_GitRepo_instCoeFilePath___closed__0 = (const lean_object*)&l_Lake_GitRepo_instCoeFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_GitRepo_instCoeFilePath = (const lean_object*)&l_Lake_GitRepo_instCoeFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_GitRepo_instToString = (const lean_object*)&l_Lake_GitRepo_instCoeFilePath___closed__0_value;
static const lean_string_object l_Lake_GitRepo_cwd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_GitRepo_cwd___closed__0 = (const lean_object*)&l_Lake_GitRepo_cwd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_GitRepo_cwd = (const lean_object*)&l_Lake_GitRepo_cwd___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_GitRepo_dirExists(lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_dirExists___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_GitRepo_gitExists(lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_gitExists___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lake_GitRepo_captureGit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_GitRepo_captureGit___closed__0 = (const lean_object*)&l_Lake_GitRepo_captureGit___closed__0_value;
static const lean_array_object l_Lake_GitRepo_captureGit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_GitRepo_captureGit___closed__1 = (const lean_object*)&l_Lake_GitRepo_captureGit___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_GitRepo_captureGit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_captureGit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_captureGit_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_captureGit_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_execGit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_execGit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_GitRepo_testGit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_testGit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__0(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stderr:\n"};
static const lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1___closed__0 = (const lean_object*)&l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stdout:\n"};
static const lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___closed__0 = (const lean_object*)&l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___closed__0_value;
static const lean_string_object l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "failed to execute 'git': "};
static const lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___closed__1 = (const lean_object*)&l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_clone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "clone"};
static const lean_object* l_Lake_GitRepo_clone___closed__0 = (const lean_object*)&l_Lake_GitRepo_clone___closed__0_value;
static lean_once_cell_t l_Lake_GitRepo_clone___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_clone___closed__1;
LEAN_EXPORT lean_object* l_Lake_GitRepo_clone(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_clone___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_quietInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "init"};
static const lean_object* l_Lake_GitRepo_quietInit___closed__0 = (const lean_object*)&l_Lake_GitRepo_quietInit___closed__0_value;
static const lean_string_object l_Lake_GitRepo_quietInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-q"};
static const lean_object* l_Lake_GitRepo_quietInit___closed__1 = (const lean_object*)&l_Lake_GitRepo_quietInit___closed__1_value;
static const lean_array_object l_Lake_GitRepo_quietInit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lake_GitRepo_quietInit___closed__0_value),((lean_object*)&l_Lake_GitRepo_quietInit___closed__1_value)}};
static const lean_object* l_Lake_GitRepo_quietInit___closed__2 = (const lean_object*)&l_Lake_GitRepo_quietInit___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_GitRepo_quietInit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_quietInit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_bareInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--bare"};
static const lean_object* l_Lake_GitRepo_bareInit___closed__0 = (const lean_object*)&l_Lake_GitRepo_bareInit___closed__0_value;
static const lean_array_object l_Lake_GitRepo_bareInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lake_GitRepo_quietInit___closed__0_value),((lean_object*)&l_Lake_GitRepo_bareInit___closed__0_value),((lean_object*)&l_Lake_GitRepo_quietInit___closed__1_value)}};
static const lean_object* l_Lake_GitRepo_bareInit___closed__1 = (const lean_object*)&l_Lake_GitRepo_bareInit___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_GitRepo_bareInit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_bareInit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_insideWorkTree___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "rev-parse"};
static const lean_object* l_Lake_GitRepo_insideWorkTree___closed__0 = (const lean_object*)&l_Lake_GitRepo_insideWorkTree___closed__0_value;
static const lean_string_object l_Lake_GitRepo_insideWorkTree___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "--is-inside-work-tree"};
static const lean_object* l_Lake_GitRepo_insideWorkTree___closed__1 = (const lean_object*)&l_Lake_GitRepo_insideWorkTree___closed__1_value;
static const lean_array_object l_Lake_GitRepo_insideWorkTree___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lake_GitRepo_insideWorkTree___closed__0_value),((lean_object*)&l_Lake_GitRepo_insideWorkTree___closed__1_value)}};
static const lean_object* l_Lake_GitRepo_insideWorkTree___closed__2 = (const lean_object*)&l_Lake_GitRepo_insideWorkTree___closed__2_value;
LEAN_EXPORT uint8_t l_Lake_GitRepo_insideWorkTree(lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_insideWorkTree___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_fetch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fetch"};
static const lean_object* l_Lake_GitRepo_fetch___closed__0 = (const lean_object*)&l_Lake_GitRepo_fetch___closed__0_value;
static const lean_string_object l_Lake_GitRepo_fetch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--tags"};
static const lean_object* l_Lake_GitRepo_fetch___closed__1 = (const lean_object*)&l_Lake_GitRepo_fetch___closed__1_value;
static const lean_string_object l_Lake_GitRepo_fetch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--force"};
static const lean_object* l_Lake_GitRepo_fetch___closed__2 = (const lean_object*)&l_Lake_GitRepo_fetch___closed__2_value;
static lean_once_cell_t l_Lake_GitRepo_fetch___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_fetch___closed__3;
static lean_once_cell_t l_Lake_GitRepo_fetch___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_fetch___closed__4;
static lean_once_cell_t l_Lake_GitRepo_fetch___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_fetch___closed__5;
LEAN_EXPORT lean_object* l_Lake_GitRepo_fetch(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_addWorktreeDetach___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "worktree"};
static const lean_object* l_Lake_GitRepo_addWorktreeDetach___closed__0 = (const lean_object*)&l_Lake_GitRepo_addWorktreeDetach___closed__0_value;
static const lean_string_object l_Lake_GitRepo_addWorktreeDetach___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l_Lake_GitRepo_addWorktreeDetach___closed__1 = (const lean_object*)&l_Lake_GitRepo_addWorktreeDetach___closed__1_value;
static const lean_string_object l_Lake_GitRepo_addWorktreeDetach___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--detach"};
static const lean_object* l_Lake_GitRepo_addWorktreeDetach___closed__2 = (const lean_object*)&l_Lake_GitRepo_addWorktreeDetach___closed__2_value;
static lean_once_cell_t l_Lake_GitRepo_addWorktreeDetach___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_addWorktreeDetach___closed__3;
static lean_once_cell_t l_Lake_GitRepo_addWorktreeDetach___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_addWorktreeDetach___closed__4;
static lean_once_cell_t l_Lake_GitRepo_addWorktreeDetach___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_addWorktreeDetach___closed__5;
LEAN_EXPORT lean_object* l_Lake_GitRepo_addWorktreeDetach(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_addWorktreeDetach___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_checkoutBranch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "checkout"};
static const lean_object* l_Lake_GitRepo_checkoutBranch___closed__0 = (const lean_object*)&l_Lake_GitRepo_checkoutBranch___closed__0_value;
static const lean_string_object l_Lake_GitRepo_checkoutBranch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-B"};
static const lean_object* l_Lake_GitRepo_checkoutBranch___closed__1 = (const lean_object*)&l_Lake_GitRepo_checkoutBranch___closed__1_value;
static lean_once_cell_t l_Lake_GitRepo_checkoutBranch___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_checkoutBranch___closed__2;
static lean_once_cell_t l_Lake_GitRepo_checkoutBranch___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_checkoutBranch___closed__3;
LEAN_EXPORT lean_object* l_Lake_GitRepo_checkoutBranch(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_checkoutBranch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_checkoutDetach___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "--"};
static const lean_object* l_Lake_GitRepo_checkoutDetach___closed__0 = (const lean_object*)&l_Lake_GitRepo_checkoutDetach___closed__0_value;
static lean_once_cell_t l_Lake_GitRepo_checkoutDetach___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_checkoutDetach___closed__1;
static lean_once_cell_t l_Lake_GitRepo_checkoutDetach___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_checkoutDetach___closed__2;
LEAN_EXPORT lean_object* l_Lake_GitRepo_checkoutDetach(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_checkoutDetach___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_gcAuto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gc"};
static const lean_object* l_Lake_GitRepo_gcAuto___closed__0 = (const lean_object*)&l_Lake_GitRepo_gcAuto___closed__0_value;
static const lean_string_object l_Lake_GitRepo_gcAuto___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--auto"};
static const lean_object* l_Lake_GitRepo_gcAuto___closed__1 = (const lean_object*)&l_Lake_GitRepo_gcAuto___closed__1_value;
static const lean_array_object l_Lake_GitRepo_gcAuto___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lake_GitRepo_gcAuto___closed__0_value),((lean_object*)&l_Lake_GitRepo_gcAuto___closed__1_value)}};
static const lean_object* l_Lake_GitRepo_gcAuto___closed__2 = (const lean_object*)&l_Lake_GitRepo_gcAuto___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_GitRepo_gcAuto(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_gcAuto___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_clean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "clean"};
static const lean_object* l_Lake_GitRepo_clean___closed__0 = (const lean_object*)&l_Lake_GitRepo_clean___closed__0_value;
static const lean_string_object l_Lake_GitRepo_clean___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "-xf"};
static const lean_object* l_Lake_GitRepo_clean___closed__1 = (const lean_object*)&l_Lake_GitRepo_clean___closed__1_value;
static const lean_array_object l_Lake_GitRepo_clean___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lake_GitRepo_clean___closed__0_value),((lean_object*)&l_Lake_GitRepo_clean___closed__1_value)}};
static const lean_object* l_Lake_GitRepo_clean___closed__2 = (const lean_object*)&l_Lake_GitRepo_clean___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_GitRepo_clean(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_clean___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_resolveRevision_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--verify"};
static const lean_object* l_Lake_GitRepo_resolveRevision_x3f___closed__0 = (const lean_object*)&l_Lake_GitRepo_resolveRevision_x3f___closed__0_value;
static const lean_string_object l_Lake_GitRepo_resolveRevision_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "--end-of-options"};
static const lean_object* l_Lake_GitRepo_resolveRevision_x3f___closed__1 = (const lean_object*)&l_Lake_GitRepo_resolveRevision_x3f___closed__1_value;
static lean_once_cell_t l_Lake_GitRepo_resolveRevision_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_resolveRevision_x3f___closed__2;
static lean_once_cell_t l_Lake_GitRepo_resolveRevision_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_resolveRevision_x3f___closed__3;
static lean_once_cell_t l_Lake_GitRepo_resolveRevision_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_resolveRevision_x3f___closed__4;
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRevision_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRevision_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_findCommit_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "^{commit}"};
static const lean_object* l_Lake_GitRepo_findCommit_x3f___closed__0 = (const lean_object*)&l_Lake_GitRepo_findCommit_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_GitRepo_findCommit_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_findCommit_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_resolveRevision___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ": revision not found '"};
static const lean_object* l_Lake_GitRepo_resolveRevision___closed__0 = (const lean_object*)&l_Lake_GitRepo_resolveRevision___closed__0_value;
static const lean_string_object l_Lake_GitRepo_resolveRevision___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lake_GitRepo_resolveRevision___closed__1 = (const lean_object*)&l_Lake_GitRepo_resolveRevision___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRevision(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRevision___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevision_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevision_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_getHeadRevision___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 114, .m_capacity = 114, .m_length = 113, .m_data = ": could not resolve 'HEAD' to a commit; the repository may be corrupt, so you may need to remove it and try again"};
static const lean_object* l_Lake_GitRepo_getHeadRevision___closed__0 = (const lean_object*)&l_Lake_GitRepo_getHeadRevision___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevision(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevision___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_fetchRevision_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "--filter=tree:0"};
static const lean_object* l_Lake_GitRepo_fetchRevision_x3f___closed__0 = (const lean_object*)&l_Lake_GitRepo_fetchRevision_x3f___closed__0_value;
static lean_once_cell_t l_Lake_GitRepo_fetchRevision_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_fetchRevision_x3f___closed__1;
static lean_once_cell_t l_Lake_GitRepo_fetchRevision_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_fetchRevision_x3f___closed__2;
static lean_once_cell_t l_Lake_GitRepo_fetchRevision_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_fetchRevision_x3f___closed__3;
static lean_once_cell_t l_Lake_GitRepo_fetchRevision_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_fetchRevision_x3f___closed__4;
static const lean_string_object l_Lake_GitRepo_fetchRevision_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 110, .m_capacity = 110, .m_length = 109, .m_data = ": could not resolve 'FETCH_HEAD' to a commit after fetching; this may be an issue with Lake; please report it"};
static const lean_object* l_Lake_GitRepo_fetchRevision_x3f___closed__5 = (const lean_object*)&l_Lake_GitRepo_fetchRevision_x3f___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_GitRepo_fetchRevision_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_fetchRevision_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_getHeadRevisions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rev-list"};
static const lean_object* l_Lake_GitRepo_getHeadRevisions___closed__0 = (const lean_object*)&l_Lake_GitRepo_getHeadRevisions___closed__0_value;
static const lean_array_object l_Lake_GitRepo_getHeadRevisions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lake_GitRepo_getHeadRevisions___closed__0_value),((lean_object*)&l_Lake_GitRev_head___closed__0_value)}};
static const lean_object* l_Lake_GitRepo_getHeadRevisions___closed__1 = (const lean_object*)&l_Lake_GitRepo_getHeadRevisions___closed__1_value;
static const lean_string_object l_Lake_GitRepo_getHeadRevisions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-n"};
static const lean_object* l_Lake_GitRepo_getHeadRevisions___closed__2 = (const lean_object*)&l_Lake_GitRepo_getHeadRevisions___closed__2_value;
static lean_once_cell_t l_Lake_GitRepo_getHeadRevisions___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_getHeadRevisions___closed__3;
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevisions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevisions___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRemoteRevision(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRemoteRevision___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_findRemoteRevision(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_findRemoteRevision___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_branchExists___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "show-ref"};
static const lean_object* l_Lake_GitRepo_branchExists___closed__0 = (const lean_object*)&l_Lake_GitRepo_branchExists___closed__0_value;
static const lean_string_object l_Lake_GitRepo_branchExists___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "refs/heads/"};
static const lean_object* l_Lake_GitRepo_branchExists___closed__1 = (const lean_object*)&l_Lake_GitRepo_branchExists___closed__1_value;
static lean_once_cell_t l_Lake_GitRepo_branchExists___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_branchExists___closed__2;
static lean_once_cell_t l_Lake_GitRepo_branchExists___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_branchExists___closed__3;
LEAN_EXPORT uint8_t l_Lake_GitRepo_branchExists(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_branchExists___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_GitRepo_revisionExists___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_revisionExists___closed__0;
static lean_once_cell_t l_Lake_GitRepo_revisionExists___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_revisionExists___closed__1;
LEAN_EXPORT uint8_t l_Lake_GitRepo_revisionExists(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_revisionExists___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_getTags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tag"};
static const lean_object* l_Lake_GitRepo_getTags___closed__0 = (const lean_object*)&l_Lake_GitRepo_getTags___closed__0_value;
static const lean_array_object l_Lake_GitRepo_getTags___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_GitRepo_getTags___closed__0_value)}};
static const lean_object* l_Lake_GitRepo_getTags___closed__1 = (const lean_object*)&l_Lake_GitRepo_getTags___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_GitRepo_getTags(lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_getTags___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_findTag_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "describe"};
static const lean_object* l_Lake_GitRepo_findTag_x3f___closed__0 = (const lean_object*)&l_Lake_GitRepo_findTag_x3f___closed__0_value;
static const lean_string_object l_Lake_GitRepo_findTag_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "--exact-match"};
static const lean_object* l_Lake_GitRepo_findTag_x3f___closed__1 = (const lean_object*)&l_Lake_GitRepo_findTag_x3f___closed__1_value;
static lean_once_cell_t l_Lake_GitRepo_findTag_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_findTag_x3f___closed__2;
static lean_once_cell_t l_Lake_GitRepo_findTag_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_findTag_x3f___closed__3;
static lean_once_cell_t l_Lake_GitRepo_findTag_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_findTag_x3f___closed__4;
LEAN_EXPORT lean_object* l_Lake_GitRepo_findTag_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_findTag_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_getRemoteUrl_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "remote"};
static const lean_object* l_Lake_GitRepo_getRemoteUrl_x3f___closed__0 = (const lean_object*)&l_Lake_GitRepo_getRemoteUrl_x3f___closed__0_value;
static const lean_string_object l_Lake_GitRepo_getRemoteUrl_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "get-url"};
static const lean_object* l_Lake_GitRepo_getRemoteUrl_x3f___closed__1 = (const lean_object*)&l_Lake_GitRepo_getRemoteUrl_x3f___closed__1_value;
static lean_once_cell_t l_Lake_GitRepo_getRemoteUrl_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_getRemoteUrl_x3f___closed__2;
static lean_once_cell_t l_Lake_GitRepo_getRemoteUrl_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_getRemoteUrl_x3f___closed__3;
LEAN_EXPORT lean_object* l_Lake_GitRepo_getRemoteUrl_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_getRemoteUrl_x3f___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_GitRepo_addRemote___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_addRemote___closed__0;
static lean_once_cell_t l_Lake_GitRepo_addRemote___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_addRemote___closed__1;
LEAN_EXPORT lean_object* l_Lake_GitRepo_addRemote(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_addRemote___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_setRemoteUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "set-url"};
static const lean_object* l_Lake_GitRepo_setRemoteUrl___closed__0 = (const lean_object*)&l_Lake_GitRepo_setRemoteUrl___closed__0_value;
static lean_once_cell_t l_Lake_GitRepo_setRemoteUrl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_setRemoteUrl___closed__1;
LEAN_EXPORT lean_object* l_Lake_GitRepo_setRemoteUrl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_setRemoteUrl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_getFilteredRemoteUrl_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_getFilteredRemoteUrl_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_pruneRemote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "prune"};
static const lean_object* l_Lake_GitRepo_pruneRemote___closed__0 = (const lean_object*)&l_Lake_GitRepo_pruneRemote___closed__0_value;
static lean_once_cell_t l_Lake_GitRepo_pruneRemote___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_GitRepo_pruneRemote___closed__1;
LEAN_EXPORT lean_object* l_Lake_GitRepo_pruneRemote(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_pruneRemote___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_GitRepo_hasNoDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "diff"};
static const lean_object* l_Lake_GitRepo_hasNoDiff___closed__0 = (const lean_object*)&l_Lake_GitRepo_hasNoDiff___closed__0_value;
static const lean_string_object l_Lake_GitRepo_hasNoDiff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "--exit-code"};
static const lean_object* l_Lake_GitRepo_hasNoDiff___closed__1 = (const lean_object*)&l_Lake_GitRepo_hasNoDiff___closed__1_value;
static const lean_array_object l_Lake_GitRepo_hasNoDiff___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lake_GitRepo_hasNoDiff___closed__0_value),((lean_object*)&l_Lake_GitRepo_hasNoDiff___closed__1_value),((lean_object*)&l_Lake_GitRev_head___closed__0_value)}};
static const lean_object* l_Lake_GitRepo_hasNoDiff___closed__2 = (const lean_object*)&l_Lake_GitRepo_hasNoDiff___closed__2_value;
LEAN_EXPORT uint8_t l_Lake_GitRepo_hasNoDiff(lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_hasNoDiff___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_GitRepo_hasDiff(lean_object*);
LEAN_EXPORT lean_object* l_Lake_GitRepo_hasDiff___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Git_filterUrl_x3f(lean_object* v_url_7_){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_22_ = lean_string_utf8_byte_size(v_url_7_);
v___x_23_ = lean_unsigned_to_nat(3u);
v___x_24_ = lean_nat_dec_le(v___x_23_, v___x_22_);
if (v___x_24_ == 0)
{
goto v___jp_8_;
}
else
{
lean_object* v___x_25_; lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_25_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_26_ = lean_unsigned_to_nat(0u);
v___x_27_ = lean_string_memcmp(v_url_7_, v___x_25_, v___x_26_, v___x_26_, v___x_23_);
if (v___x_27_ == 0)
{
goto v___jp_8_;
}
else
{
lean_object* v___x_28_; 
lean_dec_ref(v_url_7_);
v___x_28_ = lean_box(0);
return v___x_28_;
}
}
v___jp_8_:
{
lean_object* v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_9_ = lean_string_utf8_byte_size(v_url_7_);
v___x_10_ = lean_unsigned_to_nat(4u);
v___x_11_ = lean_nat_dec_le(v___x_10_, v___x_9_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; 
v___x_12_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_12_, 0, v_url_7_);
return v___x_12_;
}
else
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; uint8_t v___x_16_; 
v___x_13_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__0));
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = lean_nat_sub(v___x_9_, v___x_10_);
v___x_16_ = lean_string_memcmp(v_url_7_, v___x_13_, v___x_15_, v___x_14_, v___x_10_);
lean_dec(v___x_15_);
if (v___x_16_ == 0)
{
lean_object* v___x_17_; 
v___x_17_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_17_, 0, v_url_7_);
return v___x_17_;
}
else
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
lean_inc_ref(v_url_7_);
v___x_18_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_18_, 0, v_url_7_);
lean_ctor_set(v___x_18_, 1, v___x_14_);
lean_ctor_set(v___x_18_, 2, v___x_9_);
v___x_19_ = l_String_Slice_Pos_prevn(v___x_18_, v___x_9_, v___x_10_);
lean_dec_ref_known(v___x_18_, 3);
v___x_20_ = lean_string_utf8_extract_fast(v_url_7_, v___x_14_, v___x_19_);
lean_dec(v___x_19_);
lean_dec_ref(v_url_7_);
v___x_21_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
return v___x_21_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_Git_isFullObjectName(lean_object* v_rev_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; uint8_t v___x_32_; 
v___x_30_ = lean_string_utf8_byte_size(v_rev_29_);
v___x_31_ = lean_unsigned_to_nat(40u);
v___x_32_ = lean_nat_dec_eq(v___x_30_, v___x_31_);
if (v___x_32_ == 0)
{
return v___x_32_;
}
else
{
uint8_t v___x_33_; 
v___x_33_ = l_Lake_isHex(v_rev_29_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Git_isFullObjectName___boxed(lean_object* v_rev_34_){
_start:
{
uint8_t v_res_35_; lean_object* v_r_36_; 
v_res_35_ = l_Lake_Git_isFullObjectName(v_rev_34_);
lean_dec_ref(v_rev_34_);
v_r_36_ = lean_box(v_res_35_);
return v_r_36_;
}
}
LEAN_EXPORT uint8_t l_Lake_GitRev_isFullSha1(lean_object* v_rev_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; uint8_t v___x_44_; 
v___x_42_ = lean_string_utf8_byte_size(v_rev_41_);
v___x_43_ = lean_unsigned_to_nat(40u);
v___x_44_ = lean_nat_dec_eq(v___x_42_, v___x_43_);
if (v___x_44_ == 0)
{
return v___x_44_;
}
else
{
uint8_t v___x_45_; 
v___x_45_ = l_Lake_isHex(v_rev_41_);
return v___x_45_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRev_isFullSha1___boxed(lean_object* v_rev_46_){
_start:
{
uint8_t v_res_47_; lean_object* v_r_48_; 
v_res_47_ = l_Lake_GitRev_isFullSha1(v_rev_46_);
lean_dec_ref(v_rev_46_);
v_r_48_ = lean_box(v_res_47_);
return v_r_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRev_withRemote(lean_object* v_remote_50_, lean_object* v_rev_51_){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = ((lean_object*)(l_Lake_GitRev_withRemote___closed__0));
v___x_53_ = lean_string_append(v_remote_50_, v___x_52_);
v___x_54_ = lean_string_append(v___x_53_, v_rev_51_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRev_withRemote___boxed(lean_object* v_remote_55_, lean_object* v_rev_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lake_GitRev_withRemote(v_remote_55_, v_rev_56_);
lean_dec_ref(v_rev_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_instCoeFilePath___lam__0(lean_object* v_x_58_){
_start:
{
lean_inc_ref(v_x_58_);
return v_x_58_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_instCoeFilePath___lam__0___boxed(lean_object* v_x_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lake_GitRepo_instCoeFilePath___lam__0(v_x_59_);
lean_dec_ref(v_x_59_);
return v_res_60_;
}
}
LEAN_EXPORT uint8_t l_Lake_GitRepo_dirExists(lean_object* v_repo_66_){
_start:
{
uint8_t v___x_68_; 
v___x_68_ = l_System_FilePath_isDir(v_repo_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_dirExists___boxed(lean_object* v_repo_69_, lean_object* v_a_70_){
_start:
{
uint8_t v_res_71_; lean_object* v_r_72_; 
v_res_71_ = l_Lake_GitRepo_dirExists(v_repo_69_);
lean_dec_ref(v_repo_69_);
v_r_72_ = lean_box(v_res_71_);
return v_r_72_;
}
}
LEAN_EXPORT uint8_t l_Lake_GitRepo_gitExists(lean_object* v_repo_73_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_75_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__0));
v___x_76_ = l_System_FilePath_join(v_repo_73_, v___x_75_);
v___x_77_ = l_System_FilePath_pathExists(v___x_76_);
lean_dec_ref(v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_gitExists___boxed(lean_object* v_repo_78_, lean_object* v_a_79_){
_start:
{
uint8_t v_res_80_; lean_object* v_r_81_; 
v_res_80_ = l_Lake_GitRepo_gitExists(v_repo_78_);
v_r_81_ = lean_box(v_res_80_);
return v_r_81_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_captureGit(lean_object* v_args_86_, lean_object* v_repo_87_, lean_object* v_a_88_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_90_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_91_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_92_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_92_, 0, v_repo_87_);
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_95_ = 1;
v___x_96_ = 0;
v___x_97_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_97_, 0, v___x_90_);
lean_ctor_set(v___x_97_, 1, v___x_91_);
lean_ctor_set(v___x_97_, 2, v_args_86_);
lean_ctor_set(v___x_97_, 3, v___x_92_);
lean_ctor_set(v___x_97_, 4, v___x_94_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*5, v___x_95_);
lean_ctor_set_uint8(v___x_97_, sizeof(void*)*5 + 1, v___x_96_);
v___x_98_ = l_Lake_captureProc_x27(v___x_97_, v_a_88_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_115_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
v_a_100_ = lean_ctor_get(v___x_98_, 1);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_115_ == 0)
{
v___x_102_ = v___x_98_;
v_isShared_103_ = v_isSharedCheck_115_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_inc(v_a_99_);
lean_dec(v___x_98_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_115_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v_stdout_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v_str_108_; lean_object* v_startInclusive_109_; lean_object* v_endExclusive_110_; lean_object* v___x_111_; lean_object* v___x_113_; 
v_stdout_104_ = lean_ctor_get(v_a_99_, 0);
lean_inc_ref(v_stdout_104_);
lean_dec(v_a_99_);
v___x_105_ = lean_string_utf8_byte_size(v_stdout_104_);
v___x_106_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_106_, 0, v_stdout_104_);
lean_ctor_set(v___x_106_, 1, v___x_93_);
lean_ctor_set(v___x_106_, 2, v___x_105_);
v___x_107_ = l_String_Slice_trimAscii(v___x_106_);
v_str_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc_ref(v_str_108_);
v_startInclusive_109_ = lean_ctor_get(v___x_107_, 1);
lean_inc(v_startInclusive_109_);
v_endExclusive_110_ = lean_ctor_get(v___x_107_, 2);
lean_inc(v_endExclusive_110_);
lean_dec_ref(v___x_107_);
v___x_111_ = lean_string_utf8_extract_fast(v_str_108_, v_startInclusive_109_, v_endExclusive_110_);
lean_dec(v_endExclusive_110_);
lean_dec(v_startInclusive_109_);
lean_dec_ref(v_str_108_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 0, v___x_111_);
v___x_113_ = v___x_102_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_111_);
lean_ctor_set(v_reuseFailAlloc_114_, 1, v_a_100_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
else
{
lean_object* v_a_116_; lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
v_a_116_ = lean_ctor_get(v___x_98_, 0);
v_a_117_ = lean_ctor_get(v___x_98_, 1);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_124_ == 0)
{
v___x_119_ = v___x_98_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_inc(v_a_116_);
lean_dec(v___x_98_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_a_116_);
lean_ctor_set(v_reuseFailAlloc_123_, 1, v_a_117_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_captureGit___boxed(lean_object* v_args_125_, lean_object* v_repo_126_, lean_object* v_a_127_, lean_object* v_a_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lake_GitRepo_captureGit(v_args_125_, v_repo_126_, v_a_127_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_captureGit_x3f(lean_object* v_args_130_, lean_object* v_repo_131_){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; uint8_t v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_133_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_134_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_135_, 0, v_repo_131_);
v___x_136_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_137_ = 1;
v___x_138_ = 0;
v___x_139_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_139_, 0, v___x_133_);
lean_ctor_set(v___x_139_, 1, v___x_134_);
lean_ctor_set(v___x_139_, 2, v_args_130_);
lean_ctor_set(v___x_139_, 3, v___x_135_);
lean_ctor_set(v___x_139_, 4, v___x_136_);
lean_ctor_set_uint8(v___x_139_, sizeof(void*)*5, v___x_137_);
lean_ctor_set_uint8(v___x_139_, sizeof(void*)*5 + 1, v___x_138_);
v___x_140_ = l_Lake_captureProc_x3f(v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_captureGit_x3f___boxed(lean_object* v_args_141_, lean_object* v_repo_142_, lean_object* v_a_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lake_GitRepo_captureGit_x3f(v_args_141_, v_repo_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_execGit(lean_object* v_args_145_, lean_object* v_repo_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; uint8_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_149_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_150_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_151_, 0, v_repo_146_);
v___x_152_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_153_ = 1;
v___x_154_ = 0;
v___x_155_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_155_, 0, v___x_149_);
lean_ctor_set(v___x_155_, 1, v___x_150_);
lean_ctor_set(v___x_155_, 2, v_args_145_);
lean_ctor_set(v___x_155_, 3, v___x_151_);
lean_ctor_set(v___x_155_, 4, v___x_152_);
lean_ctor_set_uint8(v___x_155_, sizeof(void*)*5, v___x_153_);
lean_ctor_set_uint8(v___x_155_, sizeof(void*)*5 + 1, v___x_154_);
v___x_156_ = lean_box(0);
v___x_157_ = l_Lake_proc(v___x_155_, v___x_153_, v___x_156_, v_a_147_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_execGit___boxed(lean_object* v_args_158_, lean_object* v_repo_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lake_GitRepo_execGit(v_args_158_, v_repo_159_, v_a_160_);
return v_res_162_;
}
}
LEAN_EXPORT uint8_t l_Lake_GitRepo_testGit(lean_object* v_args_163_, lean_object* v_repo_164_){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; uint8_t v___x_170_; uint8_t v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v___x_166_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_167_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_168_, 0, v_repo_164_);
v___x_169_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_170_ = 1;
v___x_171_ = 0;
v___x_172_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_172_, 0, v___x_166_);
lean_ctor_set(v___x_172_, 1, v___x_167_);
lean_ctor_set(v___x_172_, 2, v_args_163_);
lean_ctor_set(v___x_172_, 3, v___x_168_);
lean_ctor_set(v___x_172_, 4, v___x_169_);
lean_ctor_set_uint8(v___x_172_, sizeof(void*)*5, v___x_170_);
lean_ctor_set_uint8(v___x_172_, sizeof(void*)*5 + 1, v___x_171_);
v___x_173_ = l_Lake_testProc(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_testGit___boxed(lean_object* v_args_174_, lean_object* v_repo_175_, lean_object* v_a_176_){
_start:
{
uint8_t v_res_177_; lean_object* v_r_178_; 
v_res_177_ = l_Lake_GitRepo_testGit(v_args_174_, v_repo_175_);
v_r_178_ = lean_box(v_res_177_);
return v_r_178_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__0(uint8_t v___x_179_, uint8_t v___x_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
if (v___x_179_ == 0)
{
uint8_t v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_184_ = 1;
v___x_185_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_185_, 0, v___y_181_);
lean_ctor_set_uint8(v___x_185_, sizeof(void*)*1, v___x_184_);
v___x_186_ = lean_box(0);
v___x_187_ = lean_array_push(v___y_182_, v___x_185_);
v___x_188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
return v___x_188_;
}
else
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_189_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_189_, 0, v___y_181_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*1, v___x_180_);
v___x_190_ = lean_box(0);
v___x_191_ = lean_array_push(v___y_182_, v___x_189_);
v___x_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
return v___x_192_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__0___boxed(lean_object* v___x_193_, lean_object* v___x_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
uint8_t v___x_2032__boxed_198_; uint8_t v___x_2033__boxed_199_; lean_object* v_res_200_; 
v___x_2032__boxed_198_ = lean_unbox(v___x_193_);
v___x_2033__boxed_199_ = lean_unbox(v___x_194_);
v_res_200_ = l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__0(v___x_2032__boxed_198_, v___x_2033__boxed_199_, v___y_195_, v___y_196_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1(lean_object* v_stderr_202_, lean_object* v___x_203_, lean_object* v___y_204_, lean_object* v_____r_205_, lean_object* v___y_206_){
_start:
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = lean_string_utf8_byte_size(v_stderr_202_);
v___x_209_ = lean_nat_dec_eq(v___x_208_, v___x_203_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_210_ = ((lean_object*)(l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1___closed__0));
v___x_211_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_211_, 0, v_stderr_202_);
lean_ctor_set(v___x_211_, 1, v___x_203_);
lean_ctor_set(v___x_211_, 2, v___x_208_);
v___x_212_ = l_String_Slice_trimAscii(v___x_211_);
v___x_213_ = l_String_Slice_toString(v___x_212_);
lean_dec_ref(v___x_212_);
v___x_214_ = lean_string_append(v___x_210_, v___x_213_);
lean_dec_ref(v___x_213_);
v___x_215_ = lean_apply_3(v___y_204_, v___x_214_, v___y_206_, lean_box(0));
return v___x_215_;
}
else
{
lean_object* v___x_216_; lean_object* v___x_217_; 
lean_dec_ref(v___y_204_);
lean_dec(v___x_203_);
lean_dec_ref(v_stderr_202_);
v___x_216_ = lean_box(0);
v___x_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
lean_ctor_set(v___x_217_, 1, v___y_206_);
return v___x_217_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1___boxed(lean_object* v_stderr_218_, lean_object* v___x_219_, lean_object* v___y_220_, lean_object* v_____r_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1(v_stderr_218_, v___x_219_, v___y_220_, v_____r_221_, v___y_222_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit(lean_object* v_args_227_, lean_object* v_repo_228_, lean_object* v_a_229_){
_start:
{
lean_object* v_a_232_; lean_object* v_a_233_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; uint8_t v___x_240_; uint8_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; uint8_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_235_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_236_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_237_, 0, v_repo_228_);
v___x_238_ = lean_unsigned_to_nat(0u);
v___x_239_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_240_ = 1;
v___x_241_ = 0;
v___x_242_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_242_, 0, v___x_235_);
lean_ctor_set(v___x_242_, 1, v___x_236_);
lean_ctor_set(v___x_242_, 2, v_args_227_);
lean_ctor_set(v___x_242_, 3, v___x_237_);
lean_ctor_set(v___x_242_, 4, v___x_239_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*5, v___x_240_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*5 + 1, v___x_241_);
v___x_243_ = lean_box(0);
v___x_244_ = lean_array_get_size(v_a_229_);
lean_inc_ref(v___x_242_);
v___x_245_ = l_Lake_mkCmdLog(v___x_242_);
v___x_246_ = 0;
v___x_247_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_247_, 0, v___x_245_);
lean_ctor_set_uint8(v___x_247_, sizeof(void*)*1, v___x_246_);
v___x_248_ = lean_array_push(v_a_229_, v___x_247_);
v___x_249_ = l_IO_Process_output(v___x_242_, v___x_243_);
if (lean_obj_tag(v___x_249_) == 0)
{
lean_object* v_a_250_; uint32_t v_exitCode_251_; lean_object* v_stdout_252_; lean_object* v_stderr_253_; uint32_t v___x_254_; lean_object* v___y_256_; uint8_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___y_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v_a_250_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_a_250_);
lean_dec_ref_known(v___x_249_, 1);
v_exitCode_251_ = lean_ctor_get_uint32(v_a_250_, sizeof(void*)*2);
v_stdout_252_ = lean_ctor_get(v_a_250_, 0);
lean_inc_ref(v_stdout_252_);
v_stderr_253_ = lean_ctor_get(v_a_250_, 1);
lean_inc_ref(v_stderr_253_);
lean_dec(v_a_250_);
v___x_254_ = 0;
v___x_270_ = lean_uint32_dec_eq(v_exitCode_251_, v___x_254_);
v___x_271_ = lean_box(v___x_270_);
v___x_272_ = lean_box(v___x_246_);
v___y_273_ = lean_alloc_closure((void*)(l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__0___boxed), 5, 2);
lean_closure_set(v___y_273_, 0, v___x_271_);
lean_closure_set(v___y_273_, 1, v___x_272_);
v___x_274_ = lean_string_utf8_byte_size(v_stdout_252_);
v___x_275_ = lean_nat_dec_eq(v___x_274_, v___x_238_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v_a_282_; lean_object* v_a_283_; lean_object* v___x_284_; 
v___x_276_ = ((lean_object*)(l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___closed__0));
v___x_277_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_277_, 0, v_stdout_252_);
lean_ctor_set(v___x_277_, 1, v___x_238_);
lean_ctor_set(v___x_277_, 2, v___x_274_);
v___x_278_ = l_String_Slice_trimAscii(v___x_277_);
v___x_279_ = l_String_Slice_toString(v___x_278_);
lean_dec_ref(v___x_278_);
v___x_280_ = lean_string_append(v___x_276_, v___x_279_);
lean_dec_ref(v___x_279_);
v___x_281_ = l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__0(v___x_270_, v___x_246_, v___x_280_, v___x_248_);
v_a_282_ = lean_ctor_get(v___x_281_, 0);
lean_inc(v_a_282_);
v_a_283_ = lean_ctor_get(v___x_281_, 1);
lean_inc(v_a_283_);
lean_dec_ref(v___x_281_);
v___x_284_ = l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1(v_stderr_253_, v___x_238_, v___y_273_, v_a_282_, v_a_283_);
v___y_256_ = v___x_284_;
goto v___jp_255_;
}
else
{
lean_object* v___x_285_; lean_object* v___x_286_; 
lean_dec_ref(v_stdout_252_);
v___x_285_ = lean_box(0);
v___x_286_ = l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1(v_stderr_253_, v___x_238_, v___y_273_, v___x_285_, v___x_248_);
v___y_256_ = v___x_286_;
goto v___jp_255_;
}
v___jp_255_:
{
if (lean_obj_tag(v___y_256_) == 0)
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_266_; 
v_a_257_ = lean_ctor_get(v___y_256_, 1);
v_isSharedCheck_266_ = !lean_is_exclusive(v___y_256_);
if (v_isSharedCheck_266_ == 0)
{
lean_object* v_unused_267_; 
v_unused_267_ = lean_ctor_get(v___y_256_, 0);
lean_dec(v_unused_267_);
v___x_259_ = v___y_256_;
v_isShared_260_ = v_isSharedCheck_266_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___y_256_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_266_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
uint8_t v___x_261_; lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_261_ = lean_uint32_dec_eq(v_exitCode_251_, v___x_254_);
v___x_262_ = lean_box(v___x_261_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v___x_262_);
v___x_264_ = v___x_259_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_a_257_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
else
{
lean_object* v_a_268_; lean_object* v_a_269_; 
v_a_268_ = lean_ctor_get(v___y_256_, 0);
lean_inc(v_a_268_);
v_a_269_ = lean_ctor_get(v___y_256_, 1);
lean_inc(v_a_269_);
lean_dec_ref_known(v___y_256_, 2);
v_a_232_ = v_a_268_;
v_a_233_ = v_a_269_;
goto v___jp_231_;
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v_a_287_ = lean_ctor_get(v___x_249_, 0);
lean_inc(v_a_287_);
lean_dec_ref_known(v___x_249_, 1);
v___x_288_ = ((lean_object*)(l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___closed__1));
v___x_289_ = lean_io_error_to_string(v_a_287_);
v___x_290_ = lean_string_append(v___x_288_, v___x_289_);
lean_dec_ref(v___x_289_);
v___x_291_ = 3;
v___x_292_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set_uint8(v___x_292_, sizeof(void*)*1, v___x_291_);
v___x_293_ = lean_array_push(v___x_248_, v___x_292_);
v___x_294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_244_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
return v___x_294_;
}
v___jp_231_:
{
lean_object* v___x_234_; 
v___x_234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_234_, 0, v_a_232_);
lean_ctor_set(v___x_234_, 1, v_a_233_);
return v___x_234_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___boxed(lean_object* v_args_295_, lean_object* v_repo_296_, lean_object* v_a_297_, lean_object* v_a_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit(v_args_295_, v_repo_296_, v_a_297_);
return v_res_299_;
}
}
static lean_object* _init_l_Lake_GitRepo_clone___closed__1(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_301_ = ((lean_object*)(l_Lake_GitRepo_clone___closed__0));
v___x_302_ = lean_unsigned_to_nat(3u);
v___x_303_ = lean_mk_empty_array_with_capacity(v___x_302_);
v___x_304_ = lean_array_push(v___x_303_, v___x_301_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_clone(lean_object* v_url_305_, lean_object* v_repo_306_, lean_object* v_a_307_){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_309_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_310_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_311_ = lean_obj_once(&l_Lake_GitRepo_clone___closed__1, &l_Lake_GitRepo_clone___closed__1_once, _init_l_Lake_GitRepo_clone___closed__1);
v___x_312_ = lean_array_push(v___x_311_, v_url_305_);
v___x_313_ = lean_array_push(v___x_312_, v_repo_306_);
v___x_314_ = lean_box(0);
v___x_315_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_316_ = 1;
v___x_317_ = 0;
v___x_318_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_318_, 0, v___x_309_);
lean_ctor_set(v___x_318_, 1, v___x_310_);
lean_ctor_set(v___x_318_, 2, v___x_313_);
lean_ctor_set(v___x_318_, 3, v___x_314_);
lean_ctor_set(v___x_318_, 4, v___x_315_);
lean_ctor_set_uint8(v___x_318_, sizeof(void*)*5, v___x_316_);
lean_ctor_set_uint8(v___x_318_, sizeof(void*)*5 + 1, v___x_317_);
v___x_319_ = l_Lake_proc(v___x_318_, v___x_316_, v___x_314_, v_a_307_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_clone___boxed(lean_object* v_url_320_, lean_object* v_repo_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lake_GitRepo_clone(v_url_320_, v_repo_321_, v_a_322_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_quietInit(lean_object* v_repo_333_, lean_object* v_a_334_){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; uint8_t v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_336_ = ((lean_object*)(l_Lake_GitRepo_quietInit___closed__2));
v___x_337_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_338_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_339_, 0, v_repo_333_);
v___x_340_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_341_ = 1;
v___x_342_ = 0;
v___x_343_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_343_, 0, v___x_337_);
lean_ctor_set(v___x_343_, 1, v___x_338_);
lean_ctor_set(v___x_343_, 2, v___x_336_);
lean_ctor_set(v___x_343_, 3, v___x_339_);
lean_ctor_set(v___x_343_, 4, v___x_340_);
lean_ctor_set_uint8(v___x_343_, sizeof(void*)*5, v___x_341_);
lean_ctor_set_uint8(v___x_343_, sizeof(void*)*5 + 1, v___x_342_);
v___x_344_ = lean_box(0);
v___x_345_ = l_Lake_proc(v___x_343_, v___x_341_, v___x_344_, v_a_334_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_quietInit___boxed(lean_object* v_repo_346_, lean_object* v_a_347_, lean_object* v_a_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = l_Lake_GitRepo_quietInit(v_repo_346_, v_a_347_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_bareInit(lean_object* v_repo_359_, lean_object* v_a_360_){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; uint8_t v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_362_ = ((lean_object*)(l_Lake_GitRepo_bareInit___closed__1));
v___x_363_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_364_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_365_, 0, v_repo_359_);
v___x_366_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_367_ = 1;
v___x_368_ = 0;
v___x_369_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_369_, 0, v___x_363_);
lean_ctor_set(v___x_369_, 1, v___x_364_);
lean_ctor_set(v___x_369_, 2, v___x_362_);
lean_ctor_set(v___x_369_, 3, v___x_365_);
lean_ctor_set(v___x_369_, 4, v___x_366_);
lean_ctor_set_uint8(v___x_369_, sizeof(void*)*5, v___x_367_);
lean_ctor_set_uint8(v___x_369_, sizeof(void*)*5 + 1, v___x_368_);
v___x_370_ = lean_box(0);
v___x_371_ = l_Lake_proc(v___x_369_, v___x_367_, v___x_370_, v_a_360_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_bareInit___boxed(lean_object* v_repo_372_, lean_object* v_a_373_, lean_object* v_a_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lake_GitRepo_bareInit(v_repo_372_, v_a_373_);
return v_res_375_;
}
}
LEAN_EXPORT uint8_t l_Lake_GitRepo_insideWorkTree(lean_object* v_repo_384_){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; uint8_t v___x_392_; lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_386_ = ((lean_object*)(l_Lake_GitRepo_insideWorkTree___closed__2));
v___x_387_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_388_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_389_, 0, v_repo_384_);
v___x_390_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_391_ = 1;
v___x_392_ = 0;
v___x_393_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_393_, 0, v___x_387_);
lean_ctor_set(v___x_393_, 1, v___x_388_);
lean_ctor_set(v___x_393_, 2, v___x_386_);
lean_ctor_set(v___x_393_, 3, v___x_389_);
lean_ctor_set(v___x_393_, 4, v___x_390_);
lean_ctor_set_uint8(v___x_393_, sizeof(void*)*5, v___x_391_);
lean_ctor_set_uint8(v___x_393_, sizeof(void*)*5 + 1, v___x_392_);
v___x_394_ = l_Lake_testProc(v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_insideWorkTree___boxed(lean_object* v_repo_395_, lean_object* v_a_396_){
_start:
{
uint8_t v_res_397_; lean_object* v_r_398_; 
v_res_397_ = l_Lake_GitRepo_insideWorkTree(v_repo_395_);
v_r_398_ = lean_box(v_res_397_);
return v_r_398_;
}
}
static lean_object* _init_l_Lake_GitRepo_fetch___closed__3(void){
_start:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_402_ = ((lean_object*)(l_Lake_GitRepo_fetch___closed__0));
v___x_403_ = lean_unsigned_to_nat(4u);
v___x_404_ = lean_mk_empty_array_with_capacity(v___x_403_);
v___x_405_ = lean_array_push(v___x_404_, v___x_402_);
return v___x_405_;
}
}
static lean_object* _init_l_Lake_GitRepo_fetch___closed__4(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_406_ = ((lean_object*)(l_Lake_GitRepo_fetch___closed__1));
v___x_407_ = lean_obj_once(&l_Lake_GitRepo_fetch___closed__3, &l_Lake_GitRepo_fetch___closed__3_once, _init_l_Lake_GitRepo_fetch___closed__3);
v___x_408_ = lean_array_push(v___x_407_, v___x_406_);
return v___x_408_;
}
}
static lean_object* _init_l_Lake_GitRepo_fetch___closed__5(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_409_ = ((lean_object*)(l_Lake_GitRepo_fetch___closed__2));
v___x_410_ = lean_obj_once(&l_Lake_GitRepo_fetch___closed__4, &l_Lake_GitRepo_fetch___closed__4_once, _init_l_Lake_GitRepo_fetch___closed__4);
v___x_411_ = lean_array_push(v___x_410_, v___x_409_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_fetch(lean_object* v_repo_412_, lean_object* v_remote_413_, lean_object* v_a_414_){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; uint8_t v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_416_ = lean_obj_once(&l_Lake_GitRepo_fetch___closed__5, &l_Lake_GitRepo_fetch___closed__5_once, _init_l_Lake_GitRepo_fetch___closed__5);
v___x_417_ = lean_array_push(v___x_416_, v_remote_413_);
v___x_418_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_419_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_420_, 0, v_repo_412_);
v___x_421_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_422_ = 1;
v___x_423_ = 0;
v___x_424_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_424_, 0, v___x_418_);
lean_ctor_set(v___x_424_, 1, v___x_419_);
lean_ctor_set(v___x_424_, 2, v___x_417_);
lean_ctor_set(v___x_424_, 3, v___x_420_);
lean_ctor_set(v___x_424_, 4, v___x_421_);
lean_ctor_set_uint8(v___x_424_, sizeof(void*)*5, v___x_422_);
lean_ctor_set_uint8(v___x_424_, sizeof(void*)*5 + 1, v___x_423_);
v___x_425_ = lean_box(0);
v___x_426_ = l_Lake_proc(v___x_424_, v___x_422_, v___x_425_, v_a_414_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_fetch___boxed(lean_object* v_repo_427_, lean_object* v_remote_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lake_GitRepo_fetch(v_repo_427_, v_remote_428_, v_a_429_);
return v_res_431_;
}
}
static lean_object* _init_l_Lake_GitRepo_addWorktreeDetach___closed__3(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_435_ = ((lean_object*)(l_Lake_GitRepo_addWorktreeDetach___closed__0));
v___x_436_ = lean_unsigned_to_nat(5u);
v___x_437_ = lean_mk_empty_array_with_capacity(v___x_436_);
v___x_438_ = lean_array_push(v___x_437_, v___x_435_);
return v___x_438_;
}
}
static lean_object* _init_l_Lake_GitRepo_addWorktreeDetach___closed__4(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_439_ = ((lean_object*)(l_Lake_GitRepo_addWorktreeDetach___closed__1));
v___x_440_ = lean_obj_once(&l_Lake_GitRepo_addWorktreeDetach___closed__3, &l_Lake_GitRepo_addWorktreeDetach___closed__3_once, _init_l_Lake_GitRepo_addWorktreeDetach___closed__3);
v___x_441_ = lean_array_push(v___x_440_, v___x_439_);
return v___x_441_;
}
}
static lean_object* _init_l_Lake_GitRepo_addWorktreeDetach___closed__5(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_442_ = ((lean_object*)(l_Lake_GitRepo_addWorktreeDetach___closed__2));
v___x_443_ = lean_obj_once(&l_Lake_GitRepo_addWorktreeDetach___closed__4, &l_Lake_GitRepo_addWorktreeDetach___closed__4_once, _init_l_Lake_GitRepo_addWorktreeDetach___closed__4);
v___x_444_ = lean_array_push(v___x_443_, v___x_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_addWorktreeDetach(lean_object* v_path_445_, lean_object* v_rev_446_, lean_object* v_repo_447_, lean_object* v_a_448_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; uint8_t v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_450_ = lean_obj_once(&l_Lake_GitRepo_addWorktreeDetach___closed__5, &l_Lake_GitRepo_addWorktreeDetach___closed__5_once, _init_l_Lake_GitRepo_addWorktreeDetach___closed__5);
v___x_451_ = lean_array_push(v___x_450_, v_path_445_);
v___x_452_ = lean_array_push(v___x_451_, v_rev_446_);
v___x_453_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_454_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_455_, 0, v_repo_447_);
v___x_456_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_457_ = 1;
v___x_458_ = 0;
v___x_459_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_459_, 0, v___x_453_);
lean_ctor_set(v___x_459_, 1, v___x_454_);
lean_ctor_set(v___x_459_, 2, v___x_452_);
lean_ctor_set(v___x_459_, 3, v___x_455_);
lean_ctor_set(v___x_459_, 4, v___x_456_);
lean_ctor_set_uint8(v___x_459_, sizeof(void*)*5, v___x_457_);
lean_ctor_set_uint8(v___x_459_, sizeof(void*)*5 + 1, v___x_458_);
v___x_460_ = lean_box(0);
v___x_461_ = l_Lake_proc(v___x_459_, v___x_457_, v___x_460_, v_a_448_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_addWorktreeDetach___boxed(lean_object* v_path_462_, lean_object* v_rev_463_, lean_object* v_repo_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lake_GitRepo_addWorktreeDetach(v_path_462_, v_rev_463_, v_repo_464_, v_a_465_);
return v_res_467_;
}
}
static lean_object* _init_l_Lake_GitRepo_checkoutBranch___closed__2(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_470_ = ((lean_object*)(l_Lake_GitRepo_checkoutBranch___closed__0));
v___x_471_ = lean_unsigned_to_nat(3u);
v___x_472_ = lean_mk_empty_array_with_capacity(v___x_471_);
v___x_473_ = lean_array_push(v___x_472_, v___x_470_);
return v___x_473_;
}
}
static lean_object* _init_l_Lake_GitRepo_checkoutBranch___closed__3(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_474_ = ((lean_object*)(l_Lake_GitRepo_checkoutBranch___closed__1));
v___x_475_ = lean_obj_once(&l_Lake_GitRepo_checkoutBranch___closed__2, &l_Lake_GitRepo_checkoutBranch___closed__2_once, _init_l_Lake_GitRepo_checkoutBranch___closed__2);
v___x_476_ = lean_array_push(v___x_475_, v___x_474_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_checkoutBranch(lean_object* v_branch_477_, lean_object* v_repo_478_, lean_object* v_a_479_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_481_ = lean_obj_once(&l_Lake_GitRepo_checkoutBranch___closed__3, &l_Lake_GitRepo_checkoutBranch___closed__3_once, _init_l_Lake_GitRepo_checkoutBranch___closed__3);
v___x_482_ = lean_array_push(v___x_481_, v_branch_477_);
v___x_483_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_484_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_485_, 0, v_repo_478_);
v___x_486_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_487_ = 1;
v___x_488_ = 0;
v___x_489_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_489_, 0, v___x_483_);
lean_ctor_set(v___x_489_, 1, v___x_484_);
lean_ctor_set(v___x_489_, 2, v___x_482_);
lean_ctor_set(v___x_489_, 3, v___x_485_);
lean_ctor_set(v___x_489_, 4, v___x_486_);
lean_ctor_set_uint8(v___x_489_, sizeof(void*)*5, v___x_487_);
lean_ctor_set_uint8(v___x_489_, sizeof(void*)*5 + 1, v___x_488_);
v___x_490_ = lean_box(0);
v___x_491_ = l_Lake_proc(v___x_489_, v___x_487_, v___x_490_, v_a_479_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_checkoutBranch___boxed(lean_object* v_branch_492_, lean_object* v_repo_493_, lean_object* v_a_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lake_GitRepo_checkoutBranch(v_branch_492_, v_repo_493_, v_a_494_);
return v_res_496_;
}
}
static lean_object* _init_l_Lake_GitRepo_checkoutDetach___closed__1(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_498_ = ((lean_object*)(l_Lake_GitRepo_checkoutBranch___closed__0));
v___x_499_ = lean_unsigned_to_nat(4u);
v___x_500_ = lean_mk_empty_array_with_capacity(v___x_499_);
v___x_501_ = lean_array_push(v___x_500_, v___x_498_);
return v___x_501_;
}
}
static lean_object* _init_l_Lake_GitRepo_checkoutDetach___closed__2(void){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_502_ = ((lean_object*)(l_Lake_GitRepo_addWorktreeDetach___closed__2));
v___x_503_ = lean_obj_once(&l_Lake_GitRepo_checkoutDetach___closed__1, &l_Lake_GitRepo_checkoutDetach___closed__1_once, _init_l_Lake_GitRepo_checkoutDetach___closed__1);
v___x_504_ = lean_array_push(v___x_503_, v___x_502_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_checkoutDetach(lean_object* v_hash_505_, lean_object* v_repo_506_, lean_object* v_a_507_){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; uint8_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_509_ = ((lean_object*)(l_Lake_GitRepo_checkoutDetach___closed__0));
v___x_510_ = lean_obj_once(&l_Lake_GitRepo_checkoutDetach___closed__2, &l_Lake_GitRepo_checkoutDetach___closed__2_once, _init_l_Lake_GitRepo_checkoutDetach___closed__2);
v___x_511_ = lean_array_push(v___x_510_, v_hash_505_);
v___x_512_ = lean_array_push(v___x_511_, v___x_509_);
v___x_513_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_514_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_515_, 0, v_repo_506_);
v___x_516_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_517_ = 1;
v___x_518_ = 0;
v___x_519_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_519_, 0, v___x_513_);
lean_ctor_set(v___x_519_, 1, v___x_514_);
lean_ctor_set(v___x_519_, 2, v___x_512_);
lean_ctor_set(v___x_519_, 3, v___x_515_);
lean_ctor_set(v___x_519_, 4, v___x_516_);
lean_ctor_set_uint8(v___x_519_, sizeof(void*)*5, v___x_517_);
lean_ctor_set_uint8(v___x_519_, sizeof(void*)*5 + 1, v___x_518_);
v___x_520_ = lean_box(0);
v___x_521_ = l_Lake_proc(v___x_519_, v___x_517_, v___x_520_, v_a_507_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_checkoutDetach___boxed(lean_object* v_hash_522_, lean_object* v_repo_523_, lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lake_GitRepo_checkoutDetach(v_hash_522_, v_repo_523_, v_a_524_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_gcAuto(lean_object* v_repo_535_, lean_object* v_a_536_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_538_ = ((lean_object*)(l_Lake_GitRepo_gcAuto___closed__2));
v___x_539_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_540_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_541_, 0, v_repo_535_);
v___x_542_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_543_ = 1;
v___x_544_ = 0;
v___x_545_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_545_, 0, v___x_539_);
lean_ctor_set(v___x_545_, 1, v___x_540_);
lean_ctor_set(v___x_545_, 2, v___x_538_);
lean_ctor_set(v___x_545_, 3, v___x_541_);
lean_ctor_set(v___x_545_, 4, v___x_542_);
lean_ctor_set_uint8(v___x_545_, sizeof(void*)*5, v___x_543_);
lean_ctor_set_uint8(v___x_545_, sizeof(void*)*5 + 1, v___x_544_);
v___x_546_ = lean_box(0);
v___x_547_ = l_Lake_proc(v___x_545_, v___x_543_, v___x_546_, v_a_536_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_gcAuto___boxed(lean_object* v_repo_548_, lean_object* v_a_549_, lean_object* v_a_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lake_GitRepo_gcAuto(v_repo_548_, v_a_549_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_clean(lean_object* v_repo_560_, lean_object* v_a_561_){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; uint8_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_563_ = ((lean_object*)(l_Lake_GitRepo_clean___closed__2));
v___x_564_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_565_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_566_, 0, v_repo_560_);
v___x_567_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_568_ = 1;
v___x_569_ = 0;
v___x_570_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_570_, 0, v___x_564_);
lean_ctor_set(v___x_570_, 1, v___x_565_);
lean_ctor_set(v___x_570_, 2, v___x_563_);
lean_ctor_set(v___x_570_, 3, v___x_566_);
lean_ctor_set(v___x_570_, 4, v___x_567_);
lean_ctor_set_uint8(v___x_570_, sizeof(void*)*5, v___x_568_);
lean_ctor_set_uint8(v___x_570_, sizeof(void*)*5 + 1, v___x_569_);
v___x_571_ = lean_box(0);
v___x_572_ = l_Lake_proc(v___x_570_, v___x_568_, v___x_571_, v_a_561_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_clean___boxed(lean_object* v_repo_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lake_GitRepo_clean(v_repo_573_, v_a_574_);
return v_res_576_;
}
}
static lean_object* _init_l_Lake_GitRepo_resolveRevision_x3f___closed__2(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_579_ = ((lean_object*)(l_Lake_GitRepo_insideWorkTree___closed__0));
v___x_580_ = lean_unsigned_to_nat(4u);
v___x_581_ = lean_mk_empty_array_with_capacity(v___x_580_);
v___x_582_ = lean_array_push(v___x_581_, v___x_579_);
return v___x_582_;
}
}
static lean_object* _init_l_Lake_GitRepo_resolveRevision_x3f___closed__3(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_583_ = ((lean_object*)(l_Lake_GitRepo_resolveRevision_x3f___closed__0));
v___x_584_ = lean_obj_once(&l_Lake_GitRepo_resolveRevision_x3f___closed__2, &l_Lake_GitRepo_resolveRevision_x3f___closed__2_once, _init_l_Lake_GitRepo_resolveRevision_x3f___closed__2);
v___x_585_ = lean_array_push(v___x_584_, v___x_583_);
return v___x_585_;
}
}
static lean_object* _init_l_Lake_GitRepo_resolveRevision_x3f___closed__4(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_586_ = ((lean_object*)(l_Lake_GitRepo_resolveRevision_x3f___closed__1));
v___x_587_ = lean_obj_once(&l_Lake_GitRepo_resolveRevision_x3f___closed__3, &l_Lake_GitRepo_resolveRevision_x3f___closed__3_once, _init_l_Lake_GitRepo_resolveRevision_x3f___closed__3);
v___x_588_ = lean_array_push(v___x_587_, v___x_586_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRevision_x3f(lean_object* v_rev_589_, lean_object* v_repo_590_){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; uint8_t v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_592_ = lean_obj_once(&l_Lake_GitRepo_resolveRevision_x3f___closed__4, &l_Lake_GitRepo_resolveRevision_x3f___closed__4_once, _init_l_Lake_GitRepo_resolveRevision_x3f___closed__4);
v___x_593_ = lean_array_push(v___x_592_, v_rev_589_);
v___x_594_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_595_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_596_, 0, v_repo_590_);
v___x_597_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_598_ = 1;
v___x_599_ = 0;
v___x_600_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_600_, 0, v___x_594_);
lean_ctor_set(v___x_600_, 1, v___x_595_);
lean_ctor_set(v___x_600_, 2, v___x_593_);
lean_ctor_set(v___x_600_, 3, v___x_596_);
lean_ctor_set(v___x_600_, 4, v___x_597_);
lean_ctor_set_uint8(v___x_600_, sizeof(void*)*5, v___x_598_);
lean_ctor_set_uint8(v___x_600_, sizeof(void*)*5 + 1, v___x_599_);
v___x_601_ = l_Lake_captureProc_x3f(v___x_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRevision_x3f___boxed(lean_object* v_rev_602_, lean_object* v_repo_603_, lean_object* v_a_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l_Lake_GitRepo_resolveRevision_x3f(v_rev_602_, v_repo_603_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_findCommit_x3f(lean_object* v_rev_607_, lean_object* v_repo_608_){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; uint8_t v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_610_ = ((lean_object*)(l_Lake_GitRepo_findCommit_x3f___closed__0));
v___x_611_ = lean_string_append(v_rev_607_, v___x_610_);
v___x_612_ = lean_obj_once(&l_Lake_GitRepo_resolveRevision_x3f___closed__4, &l_Lake_GitRepo_resolveRevision_x3f___closed__4_once, _init_l_Lake_GitRepo_resolveRevision_x3f___closed__4);
v___x_613_ = lean_array_push(v___x_612_, v___x_611_);
v___x_614_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_615_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_616_, 0, v_repo_608_);
v___x_617_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_618_ = 1;
v___x_619_ = 0;
v___x_620_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_620_, 0, v___x_614_);
lean_ctor_set(v___x_620_, 1, v___x_615_);
lean_ctor_set(v___x_620_, 2, v___x_613_);
lean_ctor_set(v___x_620_, 3, v___x_616_);
lean_ctor_set(v___x_620_, 4, v___x_617_);
lean_ctor_set_uint8(v___x_620_, sizeof(void*)*5, v___x_618_);
lean_ctor_set_uint8(v___x_620_, sizeof(void*)*5 + 1, v___x_619_);
v___x_621_ = l_Lake_captureProc_x3f(v___x_620_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_findCommit_x3f___boxed(lean_object* v_rev_622_, lean_object* v_repo_623_, lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lake_GitRepo_findCommit_x3f(v_rev_622_, v_repo_623_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRevision(lean_object* v_rev_628_, lean_object* v_repo_629_, lean_object* v_a_630_){
_start:
{
uint8_t v___x_632_; 
v___x_632_ = l_Lake_GitRev_isFullSha1(v_rev_628_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; 
lean_inc_ref(v_repo_629_);
lean_inc_ref(v_rev_628_);
v___x_633_ = l_Lake_GitRepo_resolveRevision_x3f(v_rev_628_, v_repo_629_);
if (lean_obj_tag(v___x_633_) == 1)
{
lean_object* v_val_634_; lean_object* v___x_635_; 
lean_dec_ref(v_repo_629_);
lean_dec_ref(v_rev_628_);
v_val_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_val_634_);
lean_dec_ref_known(v___x_633_, 1);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v_val_634_);
lean_ctor_set(v___x_635_, 1, v_a_630_);
return v___x_635_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; uint8_t v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
lean_dec(v___x_633_);
v___x_636_ = ((lean_object*)(l_Lake_GitRepo_resolveRevision___closed__0));
v___x_637_ = lean_string_append(v_repo_629_, v___x_636_);
v___x_638_ = lean_string_append(v___x_637_, v_rev_628_);
lean_dec_ref(v_rev_628_);
v___x_639_ = ((lean_object*)(l_Lake_GitRepo_resolveRevision___closed__1));
v___x_640_ = lean_string_append(v___x_638_, v___x_639_);
v___x_641_ = 3;
v___x_642_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set_uint8(v___x_642_, sizeof(void*)*1, v___x_641_);
v___x_643_ = lean_array_get_size(v_a_630_);
v___x_644_ = lean_array_push(v_a_630_, v___x_642_);
v___x_645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_643_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
return v___x_645_;
}
}
else
{
lean_object* v___x_646_; 
lean_dec_ref(v_repo_629_);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v_rev_628_);
lean_ctor_set(v___x_646_, 1, v_a_630_);
return v___x_646_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRevision___boxed(lean_object* v_rev_647_, lean_object* v_repo_648_, lean_object* v_a_649_, lean_object* v_a_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_Lake_GitRepo_resolveRevision(v_rev_647_, v_repo_648_, v_a_649_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevision_x3f(lean_object* v_repo_652_){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = ((lean_object*)(l_Lake_GitRev_head___closed__0));
v___x_655_ = l_Lake_GitRepo_resolveRevision_x3f(v___x_654_, v_repo_652_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevision_x3f___boxed(lean_object* v_repo_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lake_GitRepo_getHeadRevision_x3f(v_repo_656_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevision(lean_object* v_repo_660_, lean_object* v_a_661_){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_663_ = ((lean_object*)(l_Lake_GitRev_head___closed__0));
lean_inc_ref(v_repo_660_);
v___x_664_ = l_Lake_GitRepo_resolveRevision_x3f(v___x_663_, v_repo_660_);
if (lean_obj_tag(v___x_664_) == 1)
{
lean_object* v_val_665_; lean_object* v___x_666_; 
lean_dec_ref(v_repo_660_);
v_val_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_val_665_);
lean_dec_ref_known(v___x_664_, 1);
v___x_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_666_, 0, v_val_665_);
lean_ctor_set(v___x_666_, 1, v_a_661_);
return v___x_666_;
}
else
{
lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
lean_dec(v___x_664_);
v___x_667_ = ((lean_object*)(l_Lake_GitRepo_getHeadRevision___closed__0));
v___x_668_ = lean_string_append(v_repo_660_, v___x_667_);
v___x_669_ = 3;
v___x_670_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_670_, 0, v___x_668_);
lean_ctor_set_uint8(v___x_670_, sizeof(void*)*1, v___x_669_);
v___x_671_ = lean_array_get_size(v_a_661_);
v___x_672_ = lean_array_push(v_a_661_, v___x_670_);
v___x_673_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_671_);
lean_ctor_set(v___x_673_, 1, v___x_672_);
return v___x_673_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevision___boxed(lean_object* v_repo_674_, lean_object* v_a_675_, lean_object* v_a_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lake_GitRepo_getHeadRevision(v_repo_674_, v_a_675_);
return v_res_677_;
}
}
static lean_object* _init_l_Lake_GitRepo_fetchRevision_x3f___closed__1(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_679_ = ((lean_object*)(l_Lake_GitRepo_fetch___closed__0));
v___x_680_ = lean_unsigned_to_nat(6u);
v___x_681_ = lean_mk_empty_array_with_capacity(v___x_680_);
v___x_682_ = lean_array_push(v___x_681_, v___x_679_);
return v___x_682_;
}
}
static lean_object* _init_l_Lake_GitRepo_fetchRevision_x3f___closed__2(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_683_ = ((lean_object*)(l_Lake_GitRepo_fetch___closed__1));
v___x_684_ = lean_obj_once(&l_Lake_GitRepo_fetchRevision_x3f___closed__1, &l_Lake_GitRepo_fetchRevision_x3f___closed__1_once, _init_l_Lake_GitRepo_fetchRevision_x3f___closed__1);
v___x_685_ = lean_array_push(v___x_684_, v___x_683_);
return v___x_685_;
}
}
static lean_object* _init_l_Lake_GitRepo_fetchRevision_x3f___closed__3(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = ((lean_object*)(l_Lake_GitRepo_fetch___closed__2));
v___x_687_ = lean_obj_once(&l_Lake_GitRepo_fetchRevision_x3f___closed__2, &l_Lake_GitRepo_fetchRevision_x3f___closed__2_once, _init_l_Lake_GitRepo_fetchRevision_x3f___closed__2);
v___x_688_ = lean_array_push(v___x_687_, v___x_686_);
return v___x_688_;
}
}
static lean_object* _init_l_Lake_GitRepo_fetchRevision_x3f___closed__4(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = ((lean_object*)(l_Lake_GitRepo_fetchRevision_x3f___closed__0));
v___x_690_ = lean_obj_once(&l_Lake_GitRepo_fetchRevision_x3f___closed__3, &l_Lake_GitRepo_fetchRevision_x3f___closed__3_once, _init_l_Lake_GitRepo_fetchRevision_x3f___closed__3);
v___x_691_ = lean_array_push(v___x_690_, v___x_689_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_fetchRevision_x3f(lean_object* v_repo_693_, lean_object* v_remote_694_, lean_object* v_rev_695_, lean_object* v_a_696_){
_start:
{
lean_object* v_a_699_; lean_object* v_a_700_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v_args_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; uint8_t v___x_710_; uint8_t v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_702_ = lean_obj_once(&l_Lake_GitRepo_fetchRevision_x3f___closed__4, &l_Lake_GitRepo_fetchRevision_x3f___closed__4_once, _init_l_Lake_GitRepo_fetchRevision_x3f___closed__4);
v___x_703_ = lean_array_push(v___x_702_, v_remote_694_);
v_args_704_ = lean_array_push(v___x_703_, v_rev_695_);
v___x_705_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_706_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
lean_inc_ref(v_repo_693_);
v___x_707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_707_, 0, v_repo_693_);
v___x_708_ = lean_unsigned_to_nat(0u);
v___x_709_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_710_ = 1;
v___x_711_ = 0;
v___x_712_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_712_, 0, v___x_705_);
lean_ctor_set(v___x_712_, 1, v___x_706_);
lean_ctor_set(v___x_712_, 2, v_args_704_);
lean_ctor_set(v___x_712_, 3, v___x_707_);
lean_ctor_set(v___x_712_, 4, v___x_709_);
lean_ctor_set_uint8(v___x_712_, sizeof(void*)*5, v___x_710_);
lean_ctor_set_uint8(v___x_712_, sizeof(void*)*5 + 1, v___x_711_);
v___x_713_ = lean_box(0);
v___x_714_ = lean_array_get_size(v_a_696_);
lean_inc_ref(v___x_712_);
v___x_715_ = l_Lake_mkCmdLog(v___x_712_);
v___x_716_ = 0;
v___x_717_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_717_, 0, v___x_715_);
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*1, v___x_716_);
v___x_718_ = lean_array_push(v_a_696_, v___x_717_);
v___x_719_ = l_IO_Process_output(v___x_712_, v___x_713_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; uint32_t v_exitCode_721_; lean_object* v_stdout_722_; lean_object* v_stderr_723_; uint32_t v___x_724_; lean_object* v___y_726_; uint8_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___y_756_; lean_object* v___x_757_; uint8_t v___x_758_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v___x_719_, 1);
v_exitCode_721_ = lean_ctor_get_uint32(v_a_720_, sizeof(void*)*2);
v_stdout_722_ = lean_ctor_get(v_a_720_, 0);
lean_inc_ref(v_stdout_722_);
v_stderr_723_ = lean_ctor_get(v_a_720_, 1);
lean_inc_ref(v_stderr_723_);
lean_dec(v_a_720_);
v___x_724_ = 0;
v___x_753_ = lean_uint32_dec_eq(v_exitCode_721_, v___x_724_);
v___x_754_ = lean_box(v___x_753_);
v___x_755_ = lean_box(v___x_716_);
v___y_756_ = lean_alloc_closure((void*)(l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__0___boxed), 5, 2);
lean_closure_set(v___y_756_, 0, v___x_754_);
lean_closure_set(v___y_756_, 1, v___x_755_);
v___x_757_ = lean_string_utf8_byte_size(v_stdout_722_);
v___x_758_ = lean_nat_dec_eq(v___x_757_, v___x_708_);
if (v___x_758_ == 0)
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v_a_765_; lean_object* v_a_766_; lean_object* v___x_767_; 
v___x_759_ = ((lean_object*)(l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___closed__0));
v___x_760_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_760_, 0, v_stdout_722_);
lean_ctor_set(v___x_760_, 1, v___x_708_);
lean_ctor_set(v___x_760_, 2, v___x_757_);
v___x_761_ = l_String_Slice_trimAscii(v___x_760_);
v___x_762_ = l_String_Slice_toString(v___x_761_);
lean_dec_ref(v___x_761_);
v___x_763_ = lean_string_append(v___x_759_, v___x_762_);
lean_dec_ref(v___x_762_);
v___x_764_ = l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__0(v___x_753_, v___x_716_, v___x_763_, v___x_718_);
v_a_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_765_);
v_a_766_ = lean_ctor_get(v___x_764_, 1);
lean_inc(v_a_766_);
lean_dec_ref(v___x_764_);
v___x_767_ = l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1(v_stderr_723_, v___x_708_, v___y_756_, v_a_765_, v_a_766_);
v___y_726_ = v___x_767_;
goto v___jp_725_;
}
else
{
lean_object* v___x_768_; lean_object* v___x_769_; 
lean_dec_ref(v_stdout_722_);
v___x_768_ = lean_box(0);
v___x_769_ = l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___lam__1(v_stderr_723_, v___x_708_, v___y_756_, v___x_768_, v___x_718_);
v___y_726_ = v___x_769_;
goto v___jp_725_;
}
v___jp_725_:
{
if (lean_obj_tag(v___y_726_) == 0)
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_749_; 
v_a_727_ = lean_ctor_get(v___y_726_, 1);
v_isSharedCheck_749_ = !lean_is_exclusive(v___y_726_);
if (v_isSharedCheck_749_ == 0)
{
lean_object* v_unused_750_; 
v_unused_750_ = lean_ctor_get(v___y_726_, 0);
lean_dec(v_unused_750_);
v___x_729_ = v___y_726_;
v_isShared_730_ = v_isSharedCheck_749_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___y_726_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_749_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
uint8_t v___x_731_; 
v___x_731_ = lean_uint32_dec_eq(v_exitCode_721_, v___x_724_);
if (v___x_731_ == 0)
{
lean_object* v___x_733_; 
lean_dec_ref(v_repo_693_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v___x_713_);
v___x_733_ = v___x_729_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_a_727_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
else
{
lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_735_ = ((lean_object*)(l_Lake_GitRev_fetchHead___closed__0));
lean_inc_ref(v_repo_693_);
v___x_736_ = l_Lake_GitRepo_resolveRevision_x3f(v___x_735_, v_repo_693_);
if (lean_obj_tag(v___x_736_) == 1)
{
lean_object* v___x_738_; 
lean_dec_ref(v_repo_693_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v___x_736_);
v___x_738_ = v___x_729_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v___x_736_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v_a_727_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
lean_dec(v___x_736_);
v___x_740_ = ((lean_object*)(l_Lake_GitRepo_fetchRevision_x3f___closed__5));
v___x_741_ = lean_string_append(v_repo_693_, v___x_740_);
v___x_742_ = 3;
v___x_743_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_743_, 0, v___x_741_);
lean_ctor_set_uint8(v___x_743_, sizeof(void*)*1, v___x_742_);
v___x_744_ = lean_array_get_size(v_a_727_);
v___x_745_ = lean_array_push(v_a_727_, v___x_743_);
if (v_isShared_730_ == 0)
{
lean_ctor_set_tag(v___x_729_, 1);
lean_ctor_set(v___x_729_, 1, v___x_745_);
lean_ctor_set(v___x_729_, 0, v___x_744_);
v___x_747_ = v___x_729_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v___x_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
else
{
lean_object* v_a_751_; lean_object* v_a_752_; 
lean_dec_ref(v_repo_693_);
v_a_751_ = lean_ctor_get(v___y_726_, 0);
lean_inc(v_a_751_);
v_a_752_ = lean_ctor_get(v___y_726_, 1);
lean_inc(v_a_752_);
lean_dec_ref_known(v___y_726_, 2);
v_a_699_ = v_a_751_;
v_a_700_ = v_a_752_;
goto v___jp_698_;
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
lean_dec_ref(v_repo_693_);
v_a_770_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_a_770_);
lean_dec_ref_known(v___x_719_, 1);
v___x_771_ = ((lean_object*)(l___private_Lake_Util_Git_0__Lake_GitRepo_testExecGit___closed__1));
v___x_772_ = lean_io_error_to_string(v_a_770_);
v___x_773_ = lean_string_append(v___x_771_, v___x_772_);
lean_dec_ref(v___x_772_);
v___x_774_ = 3;
v___x_775_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_775_, 0, v___x_773_);
lean_ctor_set_uint8(v___x_775_, sizeof(void*)*1, v___x_774_);
v___x_776_ = lean_array_push(v___x_718_, v___x_775_);
v_a_699_ = v___x_714_;
v_a_700_ = v___x_776_;
goto v___jp_698_;
}
v___jp_698_:
{
lean_object* v___x_701_; 
v___x_701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_701_, 0, v_a_699_);
lean_ctor_set(v___x_701_, 1, v_a_700_);
return v___x_701_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_fetchRevision_x3f___boxed(lean_object* v_repo_777_, lean_object* v_remote_778_, lean_object* v_rev_779_, lean_object* v_a_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lake_GitRepo_fetchRevision_x3f(v_repo_777_, v_remote_778_, v_rev_779_, v_a_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___redArg(){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___redArg___closed__0));
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___redArg___boxed(lean_object* v___dummy_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___redArg();
return v_res_788_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0(void){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___redArg();
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0(lean_object* v_s_790_){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___boxed(lean_object* v_s_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0(v_s_792_);
lean_dec_ref(v_s_792_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1___redArg(lean_object* v___x_794_, lean_object* v___x_795_, lean_object* v___x_796_, lean_object* v_a_797_, lean_object* v_b_798_){
_start:
{
lean_object* v_it_800_; lean_object* v_startInclusive_801_; lean_object* v_endExclusive_802_; 
if (lean_obj_tag(v_a_797_) == 0)
{
lean_object* v_currPos_807_; lean_object* v_searcher_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_831_; 
v_currPos_807_ = lean_ctor_get(v_a_797_, 0);
v_searcher_808_ = lean_ctor_get(v_a_797_, 1);
v_isSharedCheck_831_ = !lean_is_exclusive(v_a_797_);
if (v_isSharedCheck_831_ == 0)
{
v___x_810_ = v_a_797_;
v_isShared_811_ = v_isSharedCheck_831_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_searcher_808_);
lean_inc(v_currPos_807_);
lean_dec(v_a_797_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_831_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
uint8_t v_decide_812_; 
v_decide_812_ = lean_nat_dec_eq(v_searcher_808_, v___x_796_);
if (v_decide_812_ == 0)
{
uint32_t v___x_813_; uint32_t v___x_814_; uint8_t v___x_815_; 
v___x_813_ = 10;
v___x_814_ = lean_string_utf8_get_fast(v___x_794_, v_searcher_808_);
v___x_815_ = lean_uint32_dec_eq(v___x_814_, v___x_813_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_816_ = lean_string_utf8_next_fast(v___x_794_, v_searcher_808_);
lean_dec(v_searcher_808_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 1, v___x_816_);
v___x_818_ = v___x_810_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_currPos_807_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v___x_816_);
v___x_818_ = v_reuseFailAlloc_820_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
v_a_797_ = v___x_818_;
goto _start;
}
}
else
{
lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v_slice_824_; lean_object* v_nextIt_826_; 
v___x_821_ = lean_string_utf8_next_fast(v___x_794_, v_searcher_808_);
v___x_822_ = lean_nat_sub(v___x_821_, v_searcher_808_);
v___x_823_ = lean_nat_add(v_searcher_808_, v___x_822_);
lean_dec(v___x_822_);
v_slice_824_ = l_String_Slice_subslice_x21(v___x_795_, v_currPos_807_, v_searcher_808_);
lean_inc(v___x_823_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 1, v___x_823_);
lean_ctor_set(v___x_810_, 0, v___x_823_);
v_nextIt_826_ = v___x_810_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_823_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v___x_823_);
v_nextIt_826_ = v_reuseFailAlloc_829_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
lean_object* v_startInclusive_827_; lean_object* v_endExclusive_828_; 
v_startInclusive_827_ = lean_ctor_get(v_slice_824_, 0);
lean_inc(v_startInclusive_827_);
v_endExclusive_828_ = lean_ctor_get(v_slice_824_, 1);
lean_inc(v_endExclusive_828_);
lean_dec_ref(v_slice_824_);
v_it_800_ = v_nextIt_826_;
v_startInclusive_801_ = v_startInclusive_827_;
v_endExclusive_802_ = v_endExclusive_828_;
goto v___jp_799_;
}
}
}
else
{
lean_object* v___x_830_; 
lean_del_object(v___x_810_);
lean_dec(v_searcher_808_);
v___x_830_ = lean_box(1);
lean_inc(v___x_796_);
v_it_800_ = v___x_830_;
v_startInclusive_801_ = v_currPos_807_;
v_endExclusive_802_ = v___x_796_;
goto v___jp_799_;
}
}
}
else
{
lean_dec(v___x_796_);
lean_dec_ref(v___x_794_);
return v_b_798_;
}
v___jp_799_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
lean_inc_ref(v___x_794_);
v___x_803_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_803_, 0, v___x_794_);
lean_ctor_set(v___x_803_, 1, v_startInclusive_801_);
lean_ctor_set(v___x_803_, 2, v_endExclusive_802_);
v___x_804_ = l_String_Slice_toString(v___x_803_);
lean_dec_ref_known(v___x_803_, 3);
v___x_805_ = lean_array_push(v_b_798_, v___x_804_);
v_a_797_ = v_it_800_;
v_b_798_ = v___x_805_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1___redArg___boxed(lean_object* v___x_832_, lean_object* v___x_833_, lean_object* v___x_834_, lean_object* v_a_835_, lean_object* v_b_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1___redArg(v___x_832_, v___x_833_, v___x_834_, v_a_835_, v_b_836_);
lean_dec_ref(v___x_833_);
return v_res_837_;
}
}
static lean_object* _init_l_Lake_GitRepo_getHeadRevisions___closed__3(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_846_ = ((lean_object*)(l_Lake_GitRepo_getHeadRevisions___closed__2));
v___x_847_ = lean_unsigned_to_nat(2u);
v___x_848_ = lean_mk_empty_array_with_capacity(v___x_847_);
v___x_849_ = lean_array_push(v___x_848_, v___x_846_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevisions(lean_object* v_repo_850_, lean_object* v_n_851_, lean_object* v_a_852_){
_start:
{
lean_object* v___y_855_; lean_object* v_args_901_; lean_object* v___x_902_; uint8_t v___x_903_; 
v_args_901_ = ((lean_object*)(l_Lake_GitRepo_getHeadRevisions___closed__1));
v___x_902_ = lean_unsigned_to_nat(0u);
v___x_903_ = lean_nat_dec_eq(v_n_851_, v___x_902_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_904_ = l_Nat_reprFast(v_n_851_);
v___x_905_ = lean_obj_once(&l_Lake_GitRepo_getHeadRevisions___closed__3, &l_Lake_GitRepo_getHeadRevisions___closed__3_once, _init_l_Lake_GitRepo_getHeadRevisions___closed__3);
v___x_906_ = lean_array_push(v___x_905_, v___x_904_);
v___x_907_ = l_Array_append___redArg(v_args_901_, v___x_906_);
lean_dec_ref(v___x_906_);
v___y_855_ = v___x_907_;
goto v___jp_854_;
}
else
{
lean_dec(v_n_851_);
v___y_855_ = v_args_901_;
goto v___jp_854_;
}
v___jp_854_:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; uint8_t v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_856_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_857_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_858_, 0, v_repo_850_);
v___x_859_ = lean_unsigned_to_nat(0u);
v___x_860_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_861_ = 1;
v___x_862_ = 0;
v___x_863_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_863_, 0, v___x_856_);
lean_ctor_set(v___x_863_, 1, v___x_857_);
lean_ctor_set(v___x_863_, 2, v___y_855_);
lean_ctor_set(v___x_863_, 3, v___x_858_);
lean_ctor_set(v___x_863_, 4, v___x_860_);
lean_ctor_set_uint8(v___x_863_, sizeof(void*)*5, v___x_861_);
lean_ctor_set_uint8(v___x_863_, sizeof(void*)*5 + 1, v___x_862_);
v___x_864_ = l_Lake_captureProc_x27(v___x_863_, v_a_852_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_891_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
v_a_866_ = lean_ctor_get(v___x_864_, 1);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_891_ == 0)
{
v___x_868_ = v___x_864_;
v_isShared_869_ = v_isSharedCheck_891_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_inc(v_a_865_);
lean_dec(v___x_864_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_891_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v_stdout_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v_str_874_; lean_object* v_startInclusive_875_; lean_object* v_endExclusive_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_890_; 
v_stdout_870_ = lean_ctor_get(v_a_865_, 0);
lean_inc_ref(v_stdout_870_);
lean_dec(v_a_865_);
v___x_871_ = lean_string_utf8_byte_size(v_stdout_870_);
v___x_872_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_872_, 0, v_stdout_870_);
lean_ctor_set(v___x_872_, 1, v___x_859_);
lean_ctor_set(v___x_872_, 2, v___x_871_);
v___x_873_ = l_String_Slice_trimAscii(v___x_872_);
v_str_874_ = lean_ctor_get(v___x_873_, 0);
v_startInclusive_875_ = lean_ctor_get(v___x_873_, 1);
v_endExclusive_876_ = lean_ctor_get(v___x_873_, 2);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_890_ == 0)
{
v___x_878_ = v___x_873_;
v_isShared_879_ = v_isSharedCheck_890_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_endExclusive_876_);
lean_inc(v_startInclusive_875_);
lean_inc(v_str_874_);
lean_dec(v___x_873_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_890_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_883_; 
v___x_880_ = lean_string_utf8_extract_fast(v_str_874_, v_startInclusive_875_, v_endExclusive_876_);
lean_dec(v_endExclusive_876_);
lean_dec(v_startInclusive_875_);
lean_dec_ref(v_str_874_);
v___x_881_ = lean_string_utf8_byte_size(v___x_880_);
lean_inc_ref(v___x_880_);
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 2, v___x_881_);
lean_ctor_set(v___x_878_, 1, v___x_859_);
lean_ctor_set(v___x_878_, 0, v___x_880_);
v___x_883_ = v___x_878_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_880_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v___x_859_);
lean_ctor_set(v_reuseFailAlloc_889_, 2, v___x_881_);
v___x_883_ = v_reuseFailAlloc_889_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_884_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0);
v___x_885_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1___redArg(v___x_880_, v___x_883_, v___x_881_, v___x_884_, v___x_860_);
lean_dec_ref(v___x_883_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_885_);
v___x_887_ = v___x_868_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v_a_866_);
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
}
else
{
lean_object* v_a_892_; lean_object* v_a_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_900_; 
v_a_892_ = lean_ctor_get(v___x_864_, 0);
v_a_893_ = lean_ctor_get(v___x_864_, 1);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_900_ == 0)
{
v___x_895_ = v___x_864_;
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_a_893_);
lean_inc(v_a_892_);
lean_dec(v___x_864_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_900_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
lean_object* v___x_898_; 
if (v_isShared_896_ == 0)
{
v___x_898_ = v___x_895_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_a_892_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_a_893_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getHeadRevisions___boxed(lean_object* v_repo_908_, lean_object* v_n_909_, lean_object* v_a_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lake_GitRepo_getHeadRevisions(v_repo_908_, v_n_909_, v_a_910_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1(lean_object* v___x_913_, lean_object* v___x_914_, lean_object* v___x_915_, lean_object* v_inst_916_, lean_object* v_R_917_, lean_object* v_a_918_, lean_object* v_b_919_){
_start:
{
lean_object* v___x_920_; 
v___x_920_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1___redArg(v___x_913_, v___x_914_, v___x_915_, v_a_918_, v_b_919_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1___boxed(lean_object* v___x_921_, lean_object* v___x_922_, lean_object* v___x_923_, lean_object* v_inst_924_, lean_object* v_R_925_, lean_object* v_a_926_, lean_object* v_b_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1(v___x_921_, v___x_922_, v___x_923_, v_inst_924_, v_R_925_, v_a_926_, v_b_927_);
lean_dec_ref(v___x_922_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRemoteRevision(lean_object* v_rev_929_, lean_object* v_remote_930_, lean_object* v_repo_931_, lean_object* v_a_932_){
_start:
{
lean_object* v_rev_935_; lean_object* v___y_936_; uint8_t v___x_938_; 
v___x_938_ = l_Lake_GitRev_isFullSha1(v_rev_929_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_939_ = ((lean_object*)(l_Lake_GitRev_withRemote___closed__0));
v___x_940_ = lean_string_append(v_remote_930_, v___x_939_);
v___x_941_ = lean_string_append(v___x_940_, v_rev_929_);
lean_inc_ref(v_repo_931_);
v___x_942_ = l_Lake_GitRepo_resolveRevision_x3f(v___x_941_, v_repo_931_);
if (lean_obj_tag(v___x_942_) == 1)
{
lean_object* v_val_943_; 
lean_dec_ref(v_repo_931_);
lean_dec_ref(v_rev_929_);
v_val_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc(v_val_943_);
lean_dec_ref_known(v___x_942_, 1);
v_rev_935_ = v_val_943_;
v___y_936_ = v_a_932_;
goto v___jp_934_;
}
else
{
lean_object* v___x_944_; 
lean_dec(v___x_942_);
lean_inc_ref(v_repo_931_);
lean_inc_ref(v_rev_929_);
v___x_944_ = l_Lake_GitRepo_resolveRevision_x3f(v_rev_929_, v_repo_931_);
if (lean_obj_tag(v___x_944_) == 1)
{
lean_object* v_val_945_; 
lean_dec_ref(v_repo_931_);
lean_dec_ref(v_rev_929_);
v_val_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_val_945_);
lean_dec_ref_known(v___x_944_, 1);
v_rev_935_ = v_val_945_;
v___y_936_ = v_a_932_;
goto v___jp_934_;
}
else
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; uint8_t v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
lean_dec(v___x_944_);
v___x_946_ = ((lean_object*)(l_Lake_GitRepo_resolveRevision___closed__0));
v___x_947_ = lean_string_append(v_repo_931_, v___x_946_);
v___x_948_ = lean_string_append(v___x_947_, v_rev_929_);
lean_dec_ref(v_rev_929_);
v___x_949_ = ((lean_object*)(l_Lake_GitRepo_resolveRevision___closed__1));
v___x_950_ = lean_string_append(v___x_948_, v___x_949_);
v___x_951_ = 3;
v___x_952_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set_uint8(v___x_952_, sizeof(void*)*1, v___x_951_);
v___x_953_ = lean_array_get_size(v_a_932_);
v___x_954_ = lean_array_push(v_a_932_, v___x_952_);
v___x_955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_953_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
return v___x_955_;
}
}
}
else
{
lean_object* v___x_956_; 
lean_dec_ref(v_repo_931_);
lean_dec_ref(v_remote_930_);
v___x_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_956_, 0, v_rev_929_);
lean_ctor_set(v___x_956_, 1, v_a_932_);
return v___x_956_;
}
v___jp_934_:
{
lean_object* v___x_937_; 
v___x_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_937_, 0, v_rev_935_);
lean_ctor_set(v___x_937_, 1, v___y_936_);
return v___x_937_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_resolveRemoteRevision___boxed(lean_object* v_rev_957_, lean_object* v_remote_958_, lean_object* v_repo_959_, lean_object* v_a_960_, lean_object* v_a_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lake_GitRepo_resolveRemoteRevision(v_rev_957_, v_remote_958_, v_repo_959_, v_a_960_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_findRemoteRevision(lean_object* v_repo_963_, lean_object* v_rev_x3f_964_, lean_object* v_remote_965_, lean_object* v_a_966_){
_start:
{
lean_object* v___x_968_; 
lean_inc_ref(v_remote_965_);
lean_inc_ref(v_repo_963_);
v___x_968_ = l_Lake_GitRepo_fetch(v_repo_963_, v_remote_965_, v_a_966_);
if (lean_obj_tag(v___x_968_) == 0)
{
if (lean_obj_tag(v_rev_x3f_964_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v_a_969_ = lean_ctor_get(v___x_968_, 1);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 2);
v___x_970_ = ((lean_object*)(l_Lake_Git_upstreamBranch___closed__0));
v___x_971_ = l_Lake_GitRepo_resolveRemoteRevision(v___x_970_, v_remote_965_, v_repo_963_, v_a_969_);
return v___x_971_;
}
else
{
lean_object* v_a_972_; lean_object* v_val_973_; lean_object* v___x_974_; 
v_a_972_ = lean_ctor_get(v___x_968_, 1);
lean_inc(v_a_972_);
lean_dec_ref_known(v___x_968_, 2);
v_val_973_ = lean_ctor_get(v_rev_x3f_964_, 0);
lean_inc(v_val_973_);
lean_dec_ref_known(v_rev_x3f_964_, 1);
v___x_974_ = l_Lake_GitRepo_resolveRemoteRevision(v_val_973_, v_remote_965_, v_repo_963_, v_a_972_);
return v___x_974_;
}
}
else
{
lean_object* v_a_975_; lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_983_; 
lean_dec_ref(v_remote_965_);
lean_dec(v_rev_x3f_964_);
lean_dec_ref(v_repo_963_);
v_a_975_ = lean_ctor_get(v___x_968_, 0);
v_a_976_ = lean_ctor_get(v___x_968_, 1);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_983_ == 0)
{
v___x_978_ = v___x_968_;
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_inc(v_a_975_);
lean_dec(v___x_968_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_983_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
if (v_isShared_979_ == 0)
{
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_975_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_a_976_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_findRemoteRevision___boxed(lean_object* v_repo_984_, lean_object* v_rev_x3f_985_, lean_object* v_remote_986_, lean_object* v_a_987_, lean_object* v_a_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l_Lake_GitRepo_findRemoteRevision(v_repo_984_, v_rev_x3f_985_, v_remote_986_, v_a_987_);
return v_res_989_;
}
}
static lean_object* _init_l_Lake_GitRepo_branchExists___closed__2(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_992_ = ((lean_object*)(l_Lake_GitRepo_branchExists___closed__0));
v___x_993_ = lean_unsigned_to_nat(3u);
v___x_994_ = lean_mk_empty_array_with_capacity(v___x_993_);
v___x_995_ = lean_array_push(v___x_994_, v___x_992_);
return v___x_995_;
}
}
static lean_object* _init_l_Lake_GitRepo_branchExists___closed__3(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_996_ = ((lean_object*)(l_Lake_GitRepo_resolveRevision_x3f___closed__0));
v___x_997_ = lean_obj_once(&l_Lake_GitRepo_branchExists___closed__2, &l_Lake_GitRepo_branchExists___closed__2_once, _init_l_Lake_GitRepo_branchExists___closed__2);
v___x_998_ = lean_array_push(v___x_997_, v___x_996_);
return v___x_998_;
}
}
LEAN_EXPORT uint8_t l_Lake_GitRepo_branchExists(lean_object* v_rev_999_, lean_object* v_repo_1000_){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; uint8_t v___x_1011_; lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1002_ = ((lean_object*)(l_Lake_GitRepo_branchExists___closed__1));
v___x_1003_ = lean_string_append(v___x_1002_, v_rev_999_);
v___x_1004_ = lean_obj_once(&l_Lake_GitRepo_branchExists___closed__3, &l_Lake_GitRepo_branchExists___closed__3_once, _init_l_Lake_GitRepo_branchExists___closed__3);
v___x_1005_ = lean_array_push(v___x_1004_, v___x_1003_);
v___x_1006_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_1007_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1008_, 0, v_repo_1000_);
v___x_1009_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_1010_ = 1;
v___x_1011_ = 0;
v___x_1012_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1012_, 0, v___x_1006_);
lean_ctor_set(v___x_1012_, 1, v___x_1007_);
lean_ctor_set(v___x_1012_, 2, v___x_1005_);
lean_ctor_set(v___x_1012_, 3, v___x_1008_);
lean_ctor_set(v___x_1012_, 4, v___x_1009_);
lean_ctor_set_uint8(v___x_1012_, sizeof(void*)*5, v___x_1010_);
lean_ctor_set_uint8(v___x_1012_, sizeof(void*)*5 + 1, v___x_1011_);
v___x_1013_ = l_Lake_testProc(v___x_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_branchExists___boxed(lean_object* v_rev_1014_, lean_object* v_repo_1015_, lean_object* v_a_1016_){
_start:
{
uint8_t v_res_1017_; lean_object* v_r_1018_; 
v_res_1017_ = l_Lake_GitRepo_branchExists(v_rev_1014_, v_repo_1015_);
lean_dec_ref(v_rev_1014_);
v_r_1018_ = lean_box(v_res_1017_);
return v_r_1018_;
}
}
static lean_object* _init_l_Lake_GitRepo_revisionExists___closed__0(void){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1019_ = ((lean_object*)(l_Lake_GitRepo_insideWorkTree___closed__0));
v___x_1020_ = lean_unsigned_to_nat(3u);
v___x_1021_ = lean_mk_empty_array_with_capacity(v___x_1020_);
v___x_1022_ = lean_array_push(v___x_1021_, v___x_1019_);
return v___x_1022_;
}
}
static lean_object* _init_l_Lake_GitRepo_revisionExists___closed__1(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1023_ = ((lean_object*)(l_Lake_GitRepo_resolveRevision_x3f___closed__0));
v___x_1024_ = lean_obj_once(&l_Lake_GitRepo_revisionExists___closed__0, &l_Lake_GitRepo_revisionExists___closed__0_once, _init_l_Lake_GitRepo_revisionExists___closed__0);
v___x_1025_ = lean_array_push(v___x_1024_, v___x_1023_);
return v___x_1025_;
}
}
LEAN_EXPORT uint8_t l_Lake_GitRepo_revisionExists(lean_object* v_rev_1026_, lean_object* v_repo_1027_){
_start:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; uint8_t v___x_1038_; lean_object* v___x_1039_; uint8_t v___x_1040_; 
v___x_1029_ = ((lean_object*)(l_Lake_GitRepo_findCommit_x3f___closed__0));
v___x_1030_ = lean_string_append(v_rev_1026_, v___x_1029_);
v___x_1031_ = lean_obj_once(&l_Lake_GitRepo_revisionExists___closed__1, &l_Lake_GitRepo_revisionExists___closed__1_once, _init_l_Lake_GitRepo_revisionExists___closed__1);
v___x_1032_ = lean_array_push(v___x_1031_, v___x_1030_);
v___x_1033_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_1034_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1035_, 0, v_repo_1027_);
v___x_1036_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_1037_ = 1;
v___x_1038_ = 0;
v___x_1039_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1039_, 0, v___x_1033_);
lean_ctor_set(v___x_1039_, 1, v___x_1034_);
lean_ctor_set(v___x_1039_, 2, v___x_1032_);
lean_ctor_set(v___x_1039_, 3, v___x_1035_);
lean_ctor_set(v___x_1039_, 4, v___x_1036_);
lean_ctor_set_uint8(v___x_1039_, sizeof(void*)*5, v___x_1037_);
lean_ctor_set_uint8(v___x_1039_, sizeof(void*)*5 + 1, v___x_1038_);
v___x_1040_ = l_Lake_testProc(v___x_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_revisionExists___boxed(lean_object* v_rev_1041_, lean_object* v_repo_1042_, lean_object* v_a_1043_){
_start:
{
uint8_t v_res_1044_; lean_object* v_r_1045_; 
v_res_1044_ = l_Lake_GitRepo_revisionExists(v_rev_1041_, v_repo_1042_);
v_r_1045_ = lean_box(v_res_1044_);
return v_r_1045_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getTags(lean_object* v_repo_1051_){
_start:
{
lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; uint8_t v___x_1060_; uint8_t v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1053_ = lean_box(0);
v___x_1054_ = ((lean_object*)(l_Lake_GitRepo_getTags___closed__1));
v___x_1055_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_1056_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1057_, 0, v_repo_1051_);
v___x_1058_ = lean_unsigned_to_nat(0u);
v___x_1059_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_1060_ = 1;
v___x_1061_ = 0;
v___x_1062_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1062_, 0, v___x_1055_);
lean_ctor_set(v___x_1062_, 1, v___x_1056_);
lean_ctor_set(v___x_1062_, 2, v___x_1054_);
lean_ctor_set(v___x_1062_, 3, v___x_1057_);
lean_ctor_set(v___x_1062_, 4, v___x_1059_);
lean_ctor_set_uint8(v___x_1062_, sizeof(void*)*5, v___x_1060_);
lean_ctor_set_uint8(v___x_1062_, sizeof(void*)*5 + 1, v___x_1061_);
v___x_1063_ = l_Lake_captureProc_x3f(v___x_1062_);
if (lean_obj_tag(v___x_1063_) == 1)
{
lean_object* v_val_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v_val_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc_n(v_val_1064_, 2);
lean_dec_ref_known(v___x_1063_, 1);
v___x_1065_ = lean_string_utf8_byte_size(v_val_1064_);
v___x_1066_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1066_, 0, v_val_1064_);
lean_ctor_set(v___x_1066_, 1, v___x_1058_);
lean_ctor_set(v___x_1066_, 2, v___x_1065_);
v___x_1067_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_GitRepo_getHeadRevisions_spec__0___closed__0);
v___x_1068_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_GitRepo_getHeadRevisions_spec__1___redArg(v_val_1064_, v___x_1066_, v___x_1065_, v___x_1067_, v___x_1059_);
lean_dec_ref_known(v___x_1066_, 3);
v___x_1069_ = lean_array_to_list(v___x_1068_);
return v___x_1069_;
}
else
{
lean_dec(v___x_1063_);
return v___x_1053_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getTags___boxed(lean_object* v_repo_1070_, lean_object* v_a_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lake_GitRepo_getTags(v_repo_1070_);
return v_res_1072_;
}
}
static lean_object* _init_l_Lake_GitRepo_findTag_x3f___closed__2(void){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1075_ = ((lean_object*)(l_Lake_GitRepo_findTag_x3f___closed__0));
v___x_1076_ = lean_unsigned_to_nat(4u);
v___x_1077_ = lean_mk_empty_array_with_capacity(v___x_1076_);
v___x_1078_ = lean_array_push(v___x_1077_, v___x_1075_);
return v___x_1078_;
}
}
static lean_object* _init_l_Lake_GitRepo_findTag_x3f___closed__3(void){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1079_ = ((lean_object*)(l_Lake_GitRepo_fetch___closed__1));
v___x_1080_ = lean_obj_once(&l_Lake_GitRepo_findTag_x3f___closed__2, &l_Lake_GitRepo_findTag_x3f___closed__2_once, _init_l_Lake_GitRepo_findTag_x3f___closed__2);
v___x_1081_ = lean_array_push(v___x_1080_, v___x_1079_);
return v___x_1081_;
}
}
static lean_object* _init_l_Lake_GitRepo_findTag_x3f___closed__4(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1082_ = ((lean_object*)(l_Lake_GitRepo_findTag_x3f___closed__1));
v___x_1083_ = lean_obj_once(&l_Lake_GitRepo_findTag_x3f___closed__3, &l_Lake_GitRepo_findTag_x3f___closed__3_once, _init_l_Lake_GitRepo_findTag_x3f___closed__3);
v___x_1084_ = lean_array_push(v___x_1083_, v___x_1082_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_findTag_x3f(lean_object* v_rev_1085_, lean_object* v_repo_1086_){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; uint8_t v___x_1094_; uint8_t v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1088_ = lean_obj_once(&l_Lake_GitRepo_findTag_x3f___closed__4, &l_Lake_GitRepo_findTag_x3f___closed__4_once, _init_l_Lake_GitRepo_findTag_x3f___closed__4);
v___x_1089_ = lean_array_push(v___x_1088_, v_rev_1085_);
v___x_1090_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_1091_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1092_, 0, v_repo_1086_);
v___x_1093_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_1094_ = 1;
v___x_1095_ = 0;
v___x_1096_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1096_, 0, v___x_1090_);
lean_ctor_set(v___x_1096_, 1, v___x_1091_);
lean_ctor_set(v___x_1096_, 2, v___x_1089_);
lean_ctor_set(v___x_1096_, 3, v___x_1092_);
lean_ctor_set(v___x_1096_, 4, v___x_1093_);
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*5, v___x_1094_);
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*5 + 1, v___x_1095_);
v___x_1097_ = l_Lake_captureProc_x3f(v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_findTag_x3f___boxed(lean_object* v_rev_1098_, lean_object* v_repo_1099_, lean_object* v_a_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lake_GitRepo_findTag_x3f(v_rev_1098_, v_repo_1099_);
return v_res_1101_;
}
}
static lean_object* _init_l_Lake_GitRepo_getRemoteUrl_x3f___closed__2(void){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1104_ = ((lean_object*)(l_Lake_GitRepo_getRemoteUrl_x3f___closed__0));
v___x_1105_ = lean_unsigned_to_nat(3u);
v___x_1106_ = lean_mk_empty_array_with_capacity(v___x_1105_);
v___x_1107_ = lean_array_push(v___x_1106_, v___x_1104_);
return v___x_1107_;
}
}
static lean_object* _init_l_Lake_GitRepo_getRemoteUrl_x3f___closed__3(void){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1108_ = ((lean_object*)(l_Lake_GitRepo_getRemoteUrl_x3f___closed__1));
v___x_1109_ = lean_obj_once(&l_Lake_GitRepo_getRemoteUrl_x3f___closed__2, &l_Lake_GitRepo_getRemoteUrl_x3f___closed__2_once, _init_l_Lake_GitRepo_getRemoteUrl_x3f___closed__2);
v___x_1110_ = lean_array_push(v___x_1109_, v___x_1108_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getRemoteUrl_x3f(lean_object* v_remote_1111_, lean_object* v_repo_1112_){
_start:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; uint8_t v___x_1120_; uint8_t v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1114_ = lean_obj_once(&l_Lake_GitRepo_getRemoteUrl_x3f___closed__3, &l_Lake_GitRepo_getRemoteUrl_x3f___closed__3_once, _init_l_Lake_GitRepo_getRemoteUrl_x3f___closed__3);
v___x_1115_ = lean_array_push(v___x_1114_, v_remote_1111_);
v___x_1116_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_1117_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1118_, 0, v_repo_1112_);
v___x_1119_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_1120_ = 1;
v___x_1121_ = 0;
v___x_1122_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1122_, 0, v___x_1116_);
lean_ctor_set(v___x_1122_, 1, v___x_1117_);
lean_ctor_set(v___x_1122_, 2, v___x_1115_);
lean_ctor_set(v___x_1122_, 3, v___x_1118_);
lean_ctor_set(v___x_1122_, 4, v___x_1119_);
lean_ctor_set_uint8(v___x_1122_, sizeof(void*)*5, v___x_1120_);
lean_ctor_set_uint8(v___x_1122_, sizeof(void*)*5 + 1, v___x_1121_);
v___x_1123_ = l_Lake_captureProc_x3f(v___x_1122_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getRemoteUrl_x3f___boxed(lean_object* v_remote_1124_, lean_object* v_repo_1125_, lean_object* v_a_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Lake_GitRepo_getRemoteUrl_x3f(v_remote_1124_, v_repo_1125_);
return v_res_1127_;
}
}
static lean_object* _init_l_Lake_GitRepo_addRemote___closed__0(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1128_ = ((lean_object*)(l_Lake_GitRepo_getRemoteUrl_x3f___closed__0));
v___x_1129_ = lean_unsigned_to_nat(4u);
v___x_1130_ = lean_mk_empty_array_with_capacity(v___x_1129_);
v___x_1131_ = lean_array_push(v___x_1130_, v___x_1128_);
return v___x_1131_;
}
}
static lean_object* _init_l_Lake_GitRepo_addRemote___closed__1(void){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1132_ = ((lean_object*)(l_Lake_GitRepo_addWorktreeDetach___closed__1));
v___x_1133_ = lean_obj_once(&l_Lake_GitRepo_addRemote___closed__0, &l_Lake_GitRepo_addRemote___closed__0_once, _init_l_Lake_GitRepo_addRemote___closed__0);
v___x_1134_ = lean_array_push(v___x_1133_, v___x_1132_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_addRemote(lean_object* v_remote_1135_, lean_object* v_url_1136_, lean_object* v_repo_1137_, lean_object* v_a_1138_){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; uint8_t v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1140_ = lean_obj_once(&l_Lake_GitRepo_addRemote___closed__1, &l_Lake_GitRepo_addRemote___closed__1_once, _init_l_Lake_GitRepo_addRemote___closed__1);
v___x_1141_ = lean_array_push(v___x_1140_, v_remote_1135_);
v___x_1142_ = lean_array_push(v___x_1141_, v_url_1136_);
v___x_1143_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_1144_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1145_, 0, v_repo_1137_);
v___x_1146_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_1147_ = 1;
v___x_1148_ = 0;
v___x_1149_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1149_, 0, v___x_1143_);
lean_ctor_set(v___x_1149_, 1, v___x_1144_);
lean_ctor_set(v___x_1149_, 2, v___x_1142_);
lean_ctor_set(v___x_1149_, 3, v___x_1145_);
lean_ctor_set(v___x_1149_, 4, v___x_1146_);
lean_ctor_set_uint8(v___x_1149_, sizeof(void*)*5, v___x_1147_);
lean_ctor_set_uint8(v___x_1149_, sizeof(void*)*5 + 1, v___x_1148_);
v___x_1150_ = lean_box(0);
v___x_1151_ = l_Lake_proc(v___x_1149_, v___x_1147_, v___x_1150_, v_a_1138_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_addRemote___boxed(lean_object* v_remote_1152_, lean_object* v_url_1153_, lean_object* v_repo_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lake_GitRepo_addRemote(v_remote_1152_, v_url_1153_, v_repo_1154_, v_a_1155_);
return v_res_1157_;
}
}
static lean_object* _init_l_Lake_GitRepo_setRemoteUrl___closed__1(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = ((lean_object*)(l_Lake_GitRepo_setRemoteUrl___closed__0));
v___x_1160_ = lean_obj_once(&l_Lake_GitRepo_addRemote___closed__0, &l_Lake_GitRepo_addRemote___closed__0_once, _init_l_Lake_GitRepo_addRemote___closed__0);
v___x_1161_ = lean_array_push(v___x_1160_, v___x_1159_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_setRemoteUrl(lean_object* v_remote_1162_, lean_object* v_url_1163_, lean_object* v_repo_1164_, lean_object* v_a_1165_){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; uint8_t v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1167_ = lean_obj_once(&l_Lake_GitRepo_setRemoteUrl___closed__1, &l_Lake_GitRepo_setRemoteUrl___closed__1_once, _init_l_Lake_GitRepo_setRemoteUrl___closed__1);
v___x_1168_ = lean_array_push(v___x_1167_, v_remote_1162_);
v___x_1169_ = lean_array_push(v___x_1168_, v_url_1163_);
v___x_1170_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_1171_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1172_, 0, v_repo_1164_);
v___x_1173_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_1174_ = 1;
v___x_1175_ = 0;
v___x_1176_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1176_, 0, v___x_1170_);
lean_ctor_set(v___x_1176_, 1, v___x_1171_);
lean_ctor_set(v___x_1176_, 2, v___x_1169_);
lean_ctor_set(v___x_1176_, 3, v___x_1172_);
lean_ctor_set(v___x_1176_, 4, v___x_1173_);
lean_ctor_set_uint8(v___x_1176_, sizeof(void*)*5, v___x_1174_);
lean_ctor_set_uint8(v___x_1176_, sizeof(void*)*5 + 1, v___x_1175_);
v___x_1177_ = lean_box(0);
v___x_1178_ = l_Lake_proc(v___x_1176_, v___x_1174_, v___x_1177_, v_a_1165_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_setRemoteUrl___boxed(lean_object* v_remote_1179_, lean_object* v_url_1180_, lean_object* v_repo_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l_Lake_GitRepo_setRemoteUrl(v_remote_1179_, v_url_1180_, v_repo_1181_, v_a_1182_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getFilteredRemoteUrl_x3f(lean_object* v_remote_1185_, lean_object* v_repo_1186_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = l_Lake_GitRepo_getRemoteUrl_x3f(v_remote_1185_, v_repo_1186_);
if (lean_obj_tag(v___x_1188_) == 0)
{
return v___x_1188_;
}
else
{
lean_object* v_val_1189_; lean_object* v___x_1190_; 
v_val_1189_ = lean_ctor_get(v___x_1188_, 0);
lean_inc(v_val_1189_);
lean_dec_ref_known(v___x_1188_, 1);
v___x_1190_ = l_Lake_Git_filterUrl_x3f(v_val_1189_);
return v___x_1190_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_getFilteredRemoteUrl_x3f___boxed(lean_object* v_remote_1191_, lean_object* v_repo_1192_, lean_object* v_a_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_Lake_GitRepo_getFilteredRemoteUrl_x3f(v_remote_1191_, v_repo_1192_);
return v_res_1194_;
}
}
static lean_object* _init_l_Lake_GitRepo_pruneRemote___closed__1(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1196_ = ((lean_object*)(l_Lake_GitRepo_pruneRemote___closed__0));
v___x_1197_ = lean_obj_once(&l_Lake_GitRepo_getRemoteUrl_x3f___closed__2, &l_Lake_GitRepo_getRemoteUrl_x3f___closed__2_once, _init_l_Lake_GitRepo_getRemoteUrl_x3f___closed__2);
v___x_1198_ = lean_array_push(v___x_1197_, v___x_1196_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_pruneRemote(lean_object* v_remote_1199_, lean_object* v_repo_1200_, lean_object* v_a_1201_){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; uint8_t v___x_1209_; uint8_t v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1203_ = lean_obj_once(&l_Lake_GitRepo_pruneRemote___closed__1, &l_Lake_GitRepo_pruneRemote___closed__1_once, _init_l_Lake_GitRepo_pruneRemote___closed__1);
v___x_1204_ = lean_array_push(v___x_1203_, v_remote_1199_);
v___x_1205_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_1206_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1207_, 0, v_repo_1200_);
v___x_1208_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_1209_ = 1;
v___x_1210_ = 0;
v___x_1211_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1211_, 0, v___x_1205_);
lean_ctor_set(v___x_1211_, 1, v___x_1206_);
lean_ctor_set(v___x_1211_, 2, v___x_1204_);
lean_ctor_set(v___x_1211_, 3, v___x_1207_);
lean_ctor_set(v___x_1211_, 4, v___x_1208_);
lean_ctor_set_uint8(v___x_1211_, sizeof(void*)*5, v___x_1209_);
lean_ctor_set_uint8(v___x_1211_, sizeof(void*)*5 + 1, v___x_1210_);
v___x_1212_ = lean_box(0);
v___x_1213_ = l_Lake_proc(v___x_1211_, v___x_1209_, v___x_1212_, v_a_1201_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_pruneRemote___boxed(lean_object* v_remote_1214_, lean_object* v_repo_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l_Lake_GitRepo_pruneRemote(v_remote_1214_, v_repo_1215_, v_a_1216_);
return v_res_1218_;
}
}
LEAN_EXPORT uint8_t l_Lake_GitRepo_hasNoDiff(lean_object* v_repo_1229_){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; uint8_t v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v___x_1231_ = ((lean_object*)(l_Lake_GitRepo_hasNoDiff___closed__2));
v___x_1232_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__0));
v___x_1233_ = ((lean_object*)(l_Lake_Git_filterUrl_x3f___closed__1));
v___x_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1234_, 0, v_repo_1229_);
v___x_1235_ = ((lean_object*)(l_Lake_GitRepo_captureGit___closed__1));
v___x_1236_ = 1;
v___x_1237_ = 0;
v___x_1238_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1238_, 0, v___x_1232_);
lean_ctor_set(v___x_1238_, 1, v___x_1233_);
lean_ctor_set(v___x_1238_, 2, v___x_1231_);
lean_ctor_set(v___x_1238_, 3, v___x_1234_);
lean_ctor_set(v___x_1238_, 4, v___x_1235_);
lean_ctor_set_uint8(v___x_1238_, sizeof(void*)*5, v___x_1236_);
lean_ctor_set_uint8(v___x_1238_, sizeof(void*)*5 + 1, v___x_1237_);
v___x_1239_ = l_Lake_testProc(v___x_1238_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_hasNoDiff___boxed(lean_object* v_repo_1240_, lean_object* v_a_1241_){
_start:
{
uint8_t v_res_1242_; lean_object* v_r_1243_; 
v_res_1242_ = l_Lake_GitRepo_hasNoDiff(v_repo_1240_);
v_r_1243_ = lean_box(v_res_1242_);
return v_r_1243_;
}
}
LEAN_EXPORT uint8_t l_Lake_GitRepo_hasDiff(lean_object* v_repo_1244_){
_start:
{
uint8_t v___x_1246_; 
v___x_1246_ = l_Lake_GitRepo_hasNoDiff(v_repo_1244_);
if (v___x_1246_ == 0)
{
uint8_t v___x_1247_; 
v___x_1247_ = 1;
return v___x_1247_;
}
else
{
uint8_t v___x_1248_; 
v___x_1248_ = 0;
return v___x_1248_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_GitRepo_hasDiff___boxed(lean_object* v_repo_1249_, lean_object* v_a_1250_){
_start:
{
uint8_t v_res_1251_; lean_object* v_r_1252_; 
v_res_1251_ = l_Lake_GitRepo_hasDiff(v_repo_1249_);
v_r_1252_ = lean_box(v_res_1251_);
return v_r_1252_;
}
}
lean_object* runtime_initialize_Init_Data_ToString(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_String(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_Git(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_Git(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_ToString(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Lake_Util_String(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_Git(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_ToString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Git(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_Git(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_Git(builtin);
}
#ifdef __cplusplus
}
#endif
