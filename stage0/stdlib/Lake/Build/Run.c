// Lean compiler output
// Module: Lake.Build.Run
// Imports: public import Lake.Config.Workspace import Lake.Config.Monad import Lake.Build.Job.Monad import Lake.Build.Index import Init.Omega
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
lean_object* l_Lake_OutStream_get(lean_object*);
uint8_t l_Lake_AnsiMode_isEnabled(lean_object*, uint8_t);
uint8_t l_Lake_BuildConfig_showProgress(lean_object*);
lean_object* l_Lake_Verbosity_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_logToStream(lean_object*, lean_object*, uint8_t, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_CacheMap_writeFile(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lake_Workspace_isRootArtifactCacheWritable(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_io_exit(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l___private_Lake_Build_Index_0__Lake_recFetchWithIndex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Job_async___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_io_get_task_state(lean_object*);
lean_object* l_Lake_Ansi_chalk(lean_object*, lean_object*);
lean_object* l_Lake_LogLevel_ansiColor(uint8_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t l_Lake_instOrdJobAction_ord(uint8_t, uint8_t);
lean_object* l_Lake_JobAction_verb(uint8_t, uint8_t);
uint32_t l_Lake_LogLevel_icon(uint8_t);
uint8_t l_Lake_instOrdLogLevel_ord(uint8_t, uint8_t);
uint8_t lean_strict_and(uint8_t, uint8_t);
uint8_t l_Lake_Log_maxLv(lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* l_IO_sleep(uint32_t);
lean_object* l_IO_CancelToken_set(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* l_Lake_computeTextFileHash(lean_object*);
lean_object* lean_io_metadata(lean_object*);
lean_object* l_Lake_BuildTrace_mix(lean_object*, lean_object*);
lean_object* l_Lake_Env_leanGithash(lean_object*);
extern uint64_t l_Lake_Hash_nil;
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
extern lean_object* l_Lean_versionStringCore;
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern uint8_t l_System_Platform_isOSX;
lean_object* lean_io_getenv(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_io_wait(lean_object*);
lean_object* l_IO_CancelToken_new();
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Bool_decEq___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "\033[2K\r"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_Run_0__Lake_Ansi_resetLine = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_flush(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_flush___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_value;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__1_value;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__2_value;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__3_value;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__4_value;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__4_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__3_value)} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__5_value;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__3_value)} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__6 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__6_value;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__7 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__7_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__1_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__8 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__8_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__8_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__2_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__5_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__6_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__7_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__9 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__9_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__9_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__3_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__10 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__10_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__11;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lake.Build.Run"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__12 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__12_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "_private.Lake.Build.Run.0.Lake.print!"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__13 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__13_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__14 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__14_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__15 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__15_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__15_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__16 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__17 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__17_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__17_value),LEAN_SCALAR_PTR_LITERAL(91, 223, 152, 205, 91, 21, 95, 180)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__18 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__18_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Build"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__19 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__18_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_value),LEAN_SCALAR_PTR_LITERAL(2, 137, 78, 165, 26, 100, 189, 141)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__20 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Run"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__21 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__21_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__21_value),LEAN_SCALAR_PTR_LITERAL(54, 210, 138, 215, 143, 190, 184, 44)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__22 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__22_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(223, 16, 116, 91, 164, 49, 31, 222)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__23 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__23_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__23_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__17_value),LEAN_SCALAR_PTR_LITERAL(227, 129, 2, 182, 107, 115, 87, 113)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__24 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__24_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "print!"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__25 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__25_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__24_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__25_value),LEAN_SCALAR_PTR_LITERAL(171, 56, 2, 158, 131, 186, 32, 163)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__26 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__26_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__27;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__28;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " failed: "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__29 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__29_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__30;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "] "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__31 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__31_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ["};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Running "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " (+ "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__5_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " more)"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__6 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ms"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__0_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__1_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__1_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__2_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "32"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__3_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " (Optional)"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk___boxed(lean_object*);
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_monitorJobs(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_monitorJobs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lake_noBuildCode;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Bool_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__0_value;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instBEqOfDecidableEq___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__0_value)} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__2_value;
static const lean_array_object l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__3_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "There were issues saving input-to-output mappings from the build:\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__4_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__5;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__6;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Failed to save input-to-output mappings from the build.\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__8 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__8_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__9;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__10;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "Workspace missing input-to-output mappings from build. (This is likely a bug in Lake.)\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__12 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__12_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__13;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__14;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 162, .m_capacity = 162, .m_length = 161, .m_data = ": the artifact cache is not enabled for this package, so the artifacts described by the mappings produced by `-o` will not necessarily be available in the cache."};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__16 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__16_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "- "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Build completed successfully ("};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__0_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ").\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__1_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "All targets up-to-date ("};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__2_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " jobs"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__3_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "1 job"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__4_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Nothing to build.\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__5_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__6;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__7;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__8;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Some required targets logged failures:\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__9 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__9_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__10;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__11;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__12;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg();
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult(lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "build failed"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__1_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__2_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "uncaught top-level build failure (this is likely a bug in Lake)"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__3_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0 = (const lean_object*)&l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "include"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean includes"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lean.h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "config.h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "version.h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mimalloc.h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__6_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__3_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__4_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__5_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__6_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Lean "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", commit "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__2_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "MACOSX_DEPLOYMENT_TARGET"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__8 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__8_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "99.0"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__9 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Index_0__Lake_recFetchWithIndex___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "uncaught top-level build failure (this is likely a bug in the build script)"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__0_value)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_Workspace_checkNoBuild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(3, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_checkNoBuild___redArg___closed__0 = (const lean_object*)&l_Lake_Workspace_checkNoBuild___redArg___closed__0_value;
static const lean_ctor_object l_Lake_Workspace_checkNoBuild___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_checkNoBuild___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 0, 1, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_checkNoBuild___redArg___closed__1 = (const lean_object*)&l_Lake_Workspace_checkNoBuild___redArg___closed__1_value;
static const lean_string_object l_Lake_Workspace_checkNoBuild___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "job computation"};
static const lean_object* l_Lake_Workspace_checkNoBuild___redArg___closed__2 = (const lean_object*)&l_Lake_Workspace_checkNoBuild___redArg___closed__2_value;
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_runBuild(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_runBuild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1_; lean_object* v___x_2_; 
v___x_1_ = 10493;
v___x_2_ = lean_box_uint32(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2(void){
_start:
{
uint32_t v___x_3_; lean_object* v___x_4_; 
v___x_3_ = 10491;
v___x_4_ = lean_box_uint32(v___x_3_);
return v___x_4_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3(void){
_start:
{
uint32_t v___x_5_; lean_object* v___x_6_; 
v___x_5_ = 10431;
v___x_6_ = lean_box_uint32(v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4(void){
_start:
{
uint32_t v___x_7_; lean_object* v___x_8_; 
v___x_7_ = 10367;
v___x_8_ = lean_box_uint32(v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5(void){
_start:
{
uint32_t v___x_9_; lean_object* v___x_10_; 
v___x_9_ = 10463;
v___x_10_ = lean_box_uint32(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6(void){
_start:
{
uint32_t v___x_11_; lean_object* v___x_12_; 
v___x_11_ = 10479;
v___x_12_ = lean_box_uint32(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7(void){
_start:
{
uint32_t v___x_13_; lean_object* v___x_14_; 
v___x_13_ = 10487;
v___x_14_ = lean_box_uint32(v___x_13_);
return v___x_14_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8(void){
_start:
{
uint32_t v___x_15_; lean_object* v___x_16_; 
v___x_15_ = 10494;
v___x_16_ = lean_box_uint32(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_17_ = lean_unsigned_to_nat(8u);
v___x_18_ = lean_mk_empty_array_with_capacity(v___x_17_);
v___x_19_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8;
v___x_20_ = lean_array_push(v___x_18_, v___x_19_);
v___x_21_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7;
v___x_22_ = lean_array_push(v___x_20_, v___x_21_);
v___x_23_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6;
v___x_24_ = lean_array_push(v___x_22_, v___x_23_);
v___x_25_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5;
v___x_26_ = lean_array_push(v___x_24_, v___x_25_);
v___x_27_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4;
v___x_28_ = lean_array_push(v___x_26_, v___x_27_);
v___x_29_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3;
v___x_30_ = lean_array_push(v___x_28_, v___x_29_);
v___x_31_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2;
v___x_32_ = lean_array_push(v___x_30_, v___x_31_);
v___x_33_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1;
v___x_34_ = lean_array_push(v___x_32_, v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0, &l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0(lean_object* v_out_36_, uint8_t v_outLv_37_, uint8_t v_useAnsi_38_, lean_object* v_e_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lake_logToStream(v_e_39_, v_out_36_, v_outLv_37_, v_useAnsi_38_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0___boxed(lean_object* v_out_42_, lean_object* v_outLv_43_, lean_object* v_useAnsi_44_, lean_object* v_e_45_, lean_object* v___y_46_){
_start:
{
uint8_t v_outLv_boxed_47_; uint8_t v_useAnsi_boxed_48_; lean_object* v_res_49_; 
v_outLv_boxed_47_ = lean_unbox(v_outLv_43_);
v_useAnsi_boxed_48_ = lean_unbox(v_useAnsi_44_);
v_res_49_ = l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0(v_out_42_, v_outLv_boxed_47_, v_useAnsi_boxed_48_, v_e_45_);
lean_dec_ref(v_e_45_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorContext_logger(lean_object* v_ctx_50_){
_start:
{
lean_object* v_out_51_; uint8_t v_outLv_52_; uint8_t v_useAnsi_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___f_56_; 
v_out_51_ = lean_ctor_get(v_ctx_50_, 1);
lean_inc_ref(v_out_51_);
v_outLv_52_ = lean_ctor_get_uint8(v_ctx_50_, sizeof(void*)*4);
v_useAnsi_53_ = lean_ctor_get_uint8(v_ctx_50_, sizeof(void*)*4 + 4);
lean_dec_ref(v_ctx_50_);
v___x_54_ = lean_box(v_outLv_52_);
v___x_55_ = lean_box(v_useAnsi_53_);
v___f_56_ = lean_alloc_closure((void*)(l___private_Lake_Build_Run_0__Lake_MonitorContext_logger___lam__0___boxed), 5, 3);
lean_closure_set(v___f_56_, 0, v_out_51_);
lean_closure_set(v___f_56_, 1, v___x_54_);
lean_closure_set(v___f_56_, 2, v___x_55_);
return v___f_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg(lean_object* v_ctx_57_, lean_object* v_s_58_, lean_object* v_self_59_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_apply_3(v_self_59_, v_ctx_57_, v_s_58_, lean_box(0));
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg___boxed(lean_object* v_ctx_62_, lean_object* v_s_63_, lean_object* v_self_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg(v_ctx_62_, v_s_63_, v_self_64_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run(lean_object* v_00_u03b1_67_, lean_object* v_ctx_68_, lean_object* v_s_69_, lean_object* v_self_70_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_apply_3(v_self_70_, v_ctx_68_, v_s_69_, lean_box(0));
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___boxed(lean_object* v_00_u03b1_73_, lean_object* v_ctx_74_, lean_object* v_s_75_, lean_object* v_self_76_, lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l___private_Lake_Build_Run_0__Lake_MonitorM_run(v_00_u03b1_73_, v_ctx_74_, v_s_75_, v_self_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_flush(lean_object* v_out_81_){
_start:
{
lean_object* v_flush_83_; lean_object* v___x_84_; 
v_flush_83_ = lean_ctor_get(v_out_81_, 0);
lean_inc_ref(v_flush_83_);
lean_dec_ref(v_out_81_);
v___x_84_ = lean_apply_1(v_flush_83_, lean_box(0));
if (lean_obj_tag(v___x_84_) == 0)
{
lean_object* v_a_85_; 
v_a_85_ = lean_ctor_get(v___x_84_, 0);
lean_inc(v_a_85_);
lean_dec_ref_known(v___x_84_, 1);
return v_a_85_;
}
else
{
lean_object* v___x_86_; 
lean_dec_ref_known(v___x_84_, 1);
v___x_86_ = lean_box(0);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_flush___boxed(lean_object* v_out_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l___private_Lake_Build_Run_0__Lake_flush(v_out_87_);
return v_res_89_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__11(void){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_113_ = lean_box(0);
v___x_114_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__10));
v___x_115_ = l_instInhabitedOfMonad___redArg(v___x_114_, v___x_113_);
return v___x_115_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__27(void){
_start:
{
uint8_t v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_145_ = 1;
v___x_146_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__26));
v___x_147_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_146_, v___x_145_);
return v___x_147_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__28(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__27, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__27_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__27);
v___x_149_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__14));
v___x_150_ = lean_string_append(v___x_149_, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__30(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__29));
v___x_153_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__28, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__28_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__28);
v___x_154_ = lean_string_append(v___x_153_, v___x_152_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21(lean_object* v_out_156_, lean_object* v_s_157_){
_start:
{
lean_object* v_putStr_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_putStr_159_ = lean_ctor_get(v_out_156_, 4);
lean_inc_ref(v_putStr_159_);
lean_dec_ref(v_out_156_);
v___x_160_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__11, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__11);
lean_inc_ref(v_s_157_);
v___x_161_ = lean_apply_2(v_putStr_159_, v_s_157_, lean_box(0));
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v_a_162_; 
lean_dec_ref(v_s_157_);
v_a_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc(v_a_162_);
lean_dec_ref_known(v___x_161_, 1);
return v_a_162_;
}
else
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_187_; 
v_a_163_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_187_ == 0)
{
v___x_165_ = v___x_161_;
v_isShared_166_ = v_isSharedCheck_187_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_161_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_187_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v___x_167_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_168_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_169_ = lean_unsigned_to_nat(82u);
v___x_170_ = lean_unsigned_to_nat(4u);
v___x_171_ = lean_unsigned_to_nat(0u);
v___x_172_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__30, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__30_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__30);
v___x_173_ = lean_io_error_to_string(v_a_163_);
v___x_174_ = lean_string_append(v___x_172_, v___x_173_);
lean_dec_ref(v___x_173_);
v___x_175_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_176_ = lean_string_append(v___x_174_, v___x_175_);
v___x_177_ = l_String_quote(v_s_157_);
if (v_isShared_166_ == 0)
{
lean_ctor_set_tag(v___x_165_, 3);
lean_ctor_set(v___x_165_, 0, v___x_177_);
v___x_179_ = v___x_165_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_177_);
v___x_179_ = v_reuseFailAlloc_186_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_198__overap_184_; lean_object* v___x_185_; 
v___x_180_ = l_Std_Format_defWidth;
v___x_181_ = l_Std_Format_pretty(v___x_179_, v___x_180_, v___x_171_, v___x_171_);
v___x_182_ = lean_string_append(v___x_176_, v___x_181_);
lean_dec_ref(v___x_181_);
v___x_183_ = l_mkPanicMessageWithDecl(v___x_167_, v___x_168_, v___x_169_, v___x_170_, v___x_182_);
lean_dec_ref(v___x_182_);
v___x_198__overap_184_ = l_panic___redArg(v___x_160_, v___x_183_);
v___x_185_ = lean_apply_1(v___x_198__overap_184_, lean_box(0));
return v___x_185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___boxed(lean_object* v_out_188_, lean_object* v_s_189_, lean_object* v___y_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l___private_Lake_Build_Run_0__Lake_print_x21(v_out_188_, v_s_189_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print(lean_object* v_s_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_val_197_; lean_object* v_out_199_; lean_object* v_putStr_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_out_199_ = lean_ctor_get(v___y_193_, 1);
v_putStr_200_ = lean_ctor_get(v_out_199_, 4);
v___x_201_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__11, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__11);
lean_inc_ref(v_putStr_200_);
lean_inc_ref(v_s_192_);
v___x_202_ = lean_apply_2(v_putStr_200_, v_s_192_, lean_box(0));
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; 
lean_dec_ref(v_s_192_);
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref_known(v___x_202_, 1);
v_val_197_ = v_a_203_;
goto v___jp_196_;
}
else
{
lean_object* v_a_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_228_; 
v_a_204_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_228_ == 0)
{
v___x_206_ = v___x_202_;
v_isShared_207_ = v_isSharedCheck_228_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_a_204_);
lean_dec(v___x_202_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_228_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_220_; 
v___x_208_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_209_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_210_ = lean_unsigned_to_nat(82u);
v___x_211_ = lean_unsigned_to_nat(4u);
v___x_212_ = lean_unsigned_to_nat(0u);
v___x_213_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__30, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__30_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__30);
v___x_214_ = lean_io_error_to_string(v_a_204_);
v___x_215_ = lean_string_append(v___x_213_, v___x_214_);
lean_dec_ref(v___x_214_);
v___x_216_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_217_ = lean_string_append(v___x_215_, v___x_216_);
v___x_218_ = l_String_quote(v_s_192_);
if (v_isShared_207_ == 0)
{
lean_ctor_set_tag(v___x_206_, 3);
lean_ctor_set(v___x_206_, 0, v___x_218_);
v___x_220_ = v___x_206_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_218_);
v___x_220_ = v_reuseFailAlloc_227_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_1382__overap_225_; lean_object* v___x_226_; 
v___x_221_ = l_Std_Format_defWidth;
v___x_222_ = l_Std_Format_pretty(v___x_220_, v___x_221_, v___x_212_, v___x_212_);
v___x_223_ = lean_string_append(v___x_217_, v___x_222_);
lean_dec_ref(v___x_222_);
v___x_224_ = l_mkPanicMessageWithDecl(v___x_208_, v___x_209_, v___x_210_, v___x_211_, v___x_223_);
lean_dec_ref(v___x_223_);
v___x_1382__overap_225_ = l_panic___redArg(v___x_201_, v___x_224_);
v___x_226_ = lean_apply_1(v___x_1382__overap_225_, lean_box(0));
v_val_197_ = v___x_226_;
goto v___jp_196_;
}
}
}
v___jp_196_:
{
lean_object* v___x_198_; 
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v_val_197_);
lean_ctor_set(v___x_198_, 1, v___y_194_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print___boxed(lean_object* v_s_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l___private_Lake_Build_Run_0__Lake_Monitor_print(v_s_229_, v___y_230_, v___y_231_);
lean_dec_ref(v___y_230_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush(lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v_val_238_; lean_object* v_out_240_; lean_object* v_flush_241_; lean_object* v___x_242_; 
v_out_240_ = lean_ctor_get(v___y_234_, 1);
v_flush_241_ = lean_ctor_get(v_out_240_, 0);
lean_inc_ref(v_flush_241_);
v___x_242_ = lean_apply_1(v_flush_241_, lean_box(0));
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; 
v_a_243_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_a_243_);
lean_dec_ref_known(v___x_242_, 1);
v_val_238_ = v_a_243_;
goto v___jp_237_;
}
else
{
lean_object* v___x_244_; 
lean_dec_ref_known(v___x_242_, 1);
v___x_244_ = lean_box(0);
v_val_238_ = v___x_244_;
goto v___jp_237_;
}
v___jp_237_:
{
lean_object* v___x_239_; 
v___x_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_239_, 0, v_val_238_);
lean_ctor_set(v___x_239_, 1, v___y_235_);
return v___x_239_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush___boxed(lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l___private_Lake_Build_Run_0__Lake_Monitor_flush(v___y_245_, v___y_246_);
lean_dec_ref(v___y_245_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(lean_object* v_msg_249_){
_start:
{
lean_object* v___x_251_; lean_object* v___x_7556__overap_252_; lean_object* v___x_253_; 
v___x_251_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__11, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__11);
v___x_7556__overap_252_ = lean_panic_fn_borrowed(v___x_251_, v_msg_249_);
v___x_253_ = lean_apply_1(v___x_7556__overap_252_, lean_box(0));
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0___boxed(lean_object* v_msg_254_, lean_object* v___y_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v_msg_254_);
return v_res_256_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames;
v___x_258_ = lean_array_get_size(v___x_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(lean_object* v_running_265_, lean_object* v_unfinished_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
uint8_t v_showProgress_273_; 
v_showProgress_273_ = lean_ctor_get_uint8(v___y_267_, sizeof(void*)*4 + 5);
if (v_showProgress_273_ == 0)
{
goto v___jp_270_;
}
else
{
uint8_t v_useAnsi_274_; 
v_useAnsi_274_ = lean_ctor_get_uint8(v___y_267_, sizeof(void*)*4 + 4);
if (v_useAnsi_274_ == 0)
{
goto v___jp_270_;
}
else
{
lean_object* v_jobNo_275_; lean_object* v_totalJobs_276_; uint8_t v_wantsRebuild_277_; lean_object* v_failures_278_; lean_object* v_resetCtrl_279_; lean_object* v_lastUpdate_280_; lean_object* v_spinnerIdx_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_370_; 
v_jobNo_275_ = lean_ctor_get(v___y_268_, 0);
v_totalJobs_276_ = lean_ctor_get(v___y_268_, 1);
v_wantsRebuild_277_ = lean_ctor_get_uint8(v___y_268_, sizeof(void*)*6);
v_failures_278_ = lean_ctor_get(v___y_268_, 2);
v_resetCtrl_279_ = lean_ctor_get(v___y_268_, 3);
v_lastUpdate_280_ = lean_ctor_get(v___y_268_, 4);
v_spinnerIdx_281_ = lean_ctor_get(v___y_268_, 5);
v_isSharedCheck_370_ = !lean_is_exclusive(v___y_268_);
if (v_isSharedCheck_370_ == 0)
{
v___x_283_ = v___y_268_;
v_isShared_284_ = v_isSharedCheck_370_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_spinnerIdx_281_);
lean_inc(v_lastUpdate_280_);
lean_inc(v_resetCtrl_279_);
lean_inc(v_failures_278_);
lean_inc(v_totalJobs_276_);
lean_inc(v_jobNo_275_);
lean_dec(v___y_268_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_370_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v_out_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v_out_285_ = lean_ctor_get(v___y_267_, 1);
v___x_286_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames;
v___x_287_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0, &l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0);
v___x_288_ = lean_array_fget_borrowed(v___x_286_, v_spinnerIdx_281_);
v___x_289_ = lean_unsigned_to_nat(1u);
v___x_290_ = l_Fin_add(v___x_287_, v_spinnerIdx_281_, v___x_289_);
lean_dec(v_spinnerIdx_281_);
v___x_291_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0));
lean_inc(v_totalJobs_276_);
lean_inc(v_jobNo_275_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 5, v___x_290_);
lean_ctor_set(v___x_283_, 3, v___x_291_);
v___x_293_ = v___x_283_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_jobNo_275_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v_totalJobs_276_);
lean_ctor_set(v_reuseFailAlloc_369_, 2, v_failures_278_);
lean_ctor_set(v_reuseFailAlloc_369_, 3, v___x_291_);
lean_ctor_set(v_reuseFailAlloc_369_, 4, v_lastUpdate_280_);
lean_ctor_set(v_reuseFailAlloc_369_, 5, v___x_290_);
lean_ctor_set_uint8(v_reuseFailAlloc_369_, sizeof(void*)*6, v_wantsRebuild_277_);
v___x_293_ = v_reuseFailAlloc_369_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v_val_295_; lean_object* v___y_303_; lean_object* v___x_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_array_get_size(v_running_265_);
v___x_351_ = lean_nat_dec_lt(v___x_349_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v_caption_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_352_ = lean_array_get_size(v_unfinished_266_);
v___x_353_ = lean_nat_sub(v___x_352_, v___x_289_);
v___x_354_ = lean_array_fget_borrowed(v_unfinished_266_, v___x_353_);
lean_dec(v___x_353_);
v_caption_355_ = lean_ctor_get(v___x_354_, 2);
v___x_356_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4));
v___x_357_ = lean_string_append(v___x_356_, v_caption_355_);
v___y_303_ = v___x_357_;
goto v___jp_302_;
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v_caption_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_358_ = lean_nat_sub(v___x_350_, v___x_289_);
v___x_359_ = lean_array_fget_borrowed(v_running_265_, v___x_358_);
v_caption_360_ = lean_ctor_get(v___x_359_, 2);
v___x_361_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4));
v___x_362_ = lean_string_append(v___x_361_, v_caption_360_);
v___x_363_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__5));
v___x_364_ = lean_string_append(v___x_362_, v___x_363_);
v___x_365_ = l_Nat_reprFast(v___x_358_);
v___x_366_ = lean_string_append(v___x_364_, v___x_365_);
lean_dec_ref(v___x_365_);
v___x_367_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__6));
v___x_368_ = lean_string_append(v___x_366_, v___x_367_);
v___y_303_ = v___x_368_;
goto v___jp_302_;
}
v___jp_294_:
{
lean_object* v___x_296_; 
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v_val_295_);
lean_ctor_set(v___x_296_, 1, v___x_293_);
return v___x_296_;
}
v___jp_297_:
{
lean_object* v_flush_298_; lean_object* v___x_299_; 
v_flush_298_ = lean_ctor_get(v_out_285_, 0);
lean_inc_ref(v_flush_298_);
v___x_299_ = lean_apply_1(v_flush_298_, lean_box(0));
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
lean_inc(v_a_300_);
lean_dec_ref_known(v___x_299_, 1);
v_val_295_ = v_a_300_;
goto v___jp_294_;
}
else
{
lean_object* v___x_301_; 
lean_dec_ref_known(v___x_299_, 1);
v___x_301_ = lean_box(0);
v_val_295_ = v___x_301_;
goto v___jp_294_;
}
}
v___jp_302_:
{
lean_object* v_putStr_304_; lean_object* v___x_305_; uint32_t v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v_putStr_304_ = lean_ctor_get(v_out_285_, 4);
v___x_305_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_306_ = lean_unbox_uint32(v___x_288_);
v___x_307_ = lean_string_push(v___x_305_, v___x_306_);
v___x_308_ = lean_string_append(v_resetCtrl_279_, v___x_307_);
lean_dec_ref(v___x_307_);
v___x_309_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2));
v___x_310_ = lean_string_append(v___x_308_, v___x_309_);
v___x_311_ = l_Nat_reprFast(v_jobNo_275_);
v___x_312_ = lean_string_append(v___x_310_, v___x_311_);
lean_dec_ref(v___x_311_);
v___x_313_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3));
v___x_314_ = lean_string_append(v___x_312_, v___x_313_);
v___x_315_ = l_Nat_reprFast(v_totalJobs_276_);
v___x_316_ = lean_string_append(v___x_314_, v___x_315_);
lean_dec_ref(v___x_315_);
v___x_317_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_318_ = lean_string_append(v___x_316_, v___x_317_);
v___x_319_ = lean_string_append(v___x_318_, v___y_303_);
lean_dec_ref(v___y_303_);
lean_inc_ref(v_putStr_304_);
lean_inc_ref(v___x_319_);
v___x_320_ = lean_apply_2(v_putStr_304_, v___x_319_, lean_box(0));
if (lean_obj_tag(v___x_320_) == 0)
{
lean_dec_ref_known(v___x_320_, 1);
lean_dec_ref(v___x_319_);
goto v___jp_297_;
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_348_; 
v_a_321_ = lean_ctor_get(v___x_320_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_320_);
if (v_isSharedCheck_348_ == 0)
{
v___x_323_ = v___x_320_;
v_isShared_324_ = v_isSharedCheck_348_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_320_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_348_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_341_; 
v___x_325_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_326_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_327_ = lean_unsigned_to_nat(82u);
v___x_328_ = lean_unsigned_to_nat(4u);
v___x_329_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__14));
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__26));
v___x_332_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_331_, v_useAnsi_274_);
v___x_333_ = lean_string_append(v___x_329_, v___x_332_);
lean_dec_ref(v___x_332_);
v___x_334_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__29));
v___x_335_ = lean_string_append(v___x_333_, v___x_334_);
v___x_336_ = lean_io_error_to_string(v_a_321_);
v___x_337_ = lean_string_append(v___x_335_, v___x_336_);
lean_dec_ref(v___x_336_);
v___x_338_ = lean_string_append(v___x_337_, v___x_317_);
v___x_339_ = l_String_quote(v___x_319_);
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 3);
lean_ctor_set(v___x_323_, 0, v___x_339_);
v___x_341_ = v___x_323_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_339_);
v___x_341_ = v_reuseFailAlloc_347_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_342_ = l_Std_Format_defWidth;
v___x_343_ = l_Std_Format_pretty(v___x_341_, v___x_342_, v___x_330_, v___x_330_);
v___x_344_ = lean_string_append(v___x_338_, v___x_343_);
lean_dec_ref(v___x_343_);
v___x_345_ = l_mkPanicMessageWithDecl(v___x_325_, v___x_326_, v___x_327_, v___x_328_, v___x_344_);
lean_dec_ref(v___x_344_);
v___x_346_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_345_);
goto v___jp_297_;
}
}
}
}
}
}
}
}
v___jp_270_:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_box(0);
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
lean_ctor_set(v___x_272_, 1, v___y_268_);
return v___x_272_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___boxed(lean_object* v_running_371_, lean_object* v_unfinished_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_running_371_, v_unfinished_372_, v___y_373_, v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec_ref(v_unfinished_372_);
lean_dec_ref(v_running_371_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress(lean_object* v_running_377_, lean_object* v_unfinished_378_, lean_object* v_h_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_running_377_, v_unfinished_378_, v___y_380_, v___y_381_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___boxed(lean_object* v_running_384_, lean_object* v_unfinished_385_, lean_object* v_h_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress(v_running_384_, v_unfinished_385_, v_h_386_, v___y_387_, v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec_ref(v_unfinished_385_);
lean_dec_ref(v_running_384_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime(lean_object* v_ms_394_){
_start:
{
lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_395_ = lean_unsigned_to_nat(10000u);
v___x_396_ = lean_nat_dec_lt(v___x_395_, v_ms_394_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_397_ = lean_unsigned_to_nat(1000u);
v___x_398_ = lean_nat_dec_lt(v___x_397_, v_ms_394_);
if (v___x_398_ == 0)
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_399_ = l_Nat_reprFast(v_ms_394_);
v___x_400_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__0));
v___x_401_ = lean_string_append(v___x_399_, v___x_400_);
return v___x_401_;
}
else
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_402_ = lean_nat_div(v_ms_394_, v___x_397_);
v___x_403_ = l_Nat_reprFast(v___x_402_);
v___x_404_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__1));
v___x_405_ = lean_string_append(v___x_403_, v___x_404_);
v___x_406_ = lean_unsigned_to_nat(50u);
v___x_407_ = lean_nat_add(v_ms_394_, v___x_406_);
lean_dec(v_ms_394_);
v___x_408_ = lean_unsigned_to_nat(100u);
v___x_409_ = lean_nat_div(v___x_407_, v___x_408_);
lean_dec(v___x_407_);
v___x_410_ = lean_unsigned_to_nat(10u);
v___x_411_ = lean_nat_mod(v___x_409_, v___x_410_);
lean_dec(v___x_409_);
v___x_412_ = l_Nat_reprFast(v___x_411_);
v___x_413_ = lean_string_append(v___x_405_, v___x_412_);
lean_dec_ref(v___x_412_);
v___x_414_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2));
v___x_415_ = lean_string_append(v___x_413_, v___x_414_);
return v___x_415_;
}
}
else
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_416_ = lean_unsigned_to_nat(1000u);
v___x_417_ = lean_nat_div(v_ms_394_, v___x_416_);
lean_dec(v_ms_394_);
v___x_418_ = l_Nat_reprFast(v___x_417_);
v___x_419_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2));
v___x_420_ = lean_string_append(v___x_418_, v___x_419_);
return v___x_420_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(lean_object* v_out_421_, uint8_t v___y_422_, uint8_t v_useAnsi_423_, lean_object* v_as_424_, size_t v_i_425_, size_t v_stop_426_, lean_object* v_b_427_, lean_object* v___y_428_){
_start:
{
uint8_t v___x_430_; 
v___x_430_ = lean_usize_dec_eq(v_i_425_, v_stop_426_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; lean_object* v___x_432_; size_t v___x_433_; size_t v___x_434_; 
v___x_431_ = lean_array_uget_borrowed(v_as_424_, v_i_425_);
lean_inc_ref(v_out_421_);
v___x_432_ = l_Lake_logToStream(v___x_431_, v_out_421_, v___y_422_, v_useAnsi_423_);
v___x_433_ = ((size_t)1ULL);
v___x_434_ = lean_usize_add(v_i_425_, v___x_433_);
v_i_425_ = v___x_434_;
v_b_427_ = v___x_432_;
goto _start;
}
else
{
lean_object* v___x_436_; 
lean_dec_ref(v_out_421_);
v___x_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_436_, 0, v_b_427_);
lean_ctor_set(v___x_436_, 1, v___y_428_);
return v___x_436_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg___boxed(lean_object* v_out_437_, lean_object* v___y_438_, lean_object* v_useAnsi_439_, lean_object* v_as_440_, lean_object* v_i_441_, lean_object* v_stop_442_, lean_object* v_b_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
uint8_t v___y_13850__boxed_446_; uint8_t v_useAnsi_13851__boxed_447_; size_t v_i_boxed_448_; size_t v_stop_boxed_449_; lean_object* v_res_450_; 
v___y_13850__boxed_446_ = lean_unbox(v___y_438_);
v_useAnsi_13851__boxed_447_ = lean_unbox(v_useAnsi_439_);
v_i_boxed_448_ = lean_unbox_usize(v_i_441_);
lean_dec(v_i_441_);
v_stop_boxed_449_ = lean_unbox_usize(v_stop_442_);
lean_dec(v_stop_442_);
v_res_450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_437_, v___y_13850__boxed_446_, v_useAnsi_13851__boxed_447_, v_as_440_, v_i_boxed_448_, v_stop_boxed_449_, v_b_443_, v___y_444_);
lean_dec_ref(v_as_440_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(lean_object* v_job_458_, lean_object* v___y_459_, lean_object* v___y_460_){
_start:
{
lean_object* v___y_463_; lean_object* v___y_467_; lean_object* v_val_468_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v_jobNo_478_; lean_object* v_totalJobs_479_; uint8_t v_wantsRebuild_480_; lean_object* v_failures_481_; lean_object* v_resetCtrl_482_; lean_object* v_lastUpdate_483_; lean_object* v_spinnerIdx_484_; lean_object* v_out_485_; uint8_t v_outLv_486_; uint8_t v_failLv_487_; uint8_t v_minAction_488_; uint8_t v_showOptional_489_; uint8_t v_useAnsi_490_; uint8_t v_showProgress_491_; uint8_t v_showTime_492_; lean_object* v___y_494_; lean_object* v___y_495_; lean_object* v___y_496_; lean_object* v___y_497_; lean_object* v___y_498_; uint8_t v___y_499_; lean_object* v___y_507_; lean_object* v___y_508_; uint8_t v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; uint8_t v___y_513_; lean_object* v___y_516_; lean_object* v___y_517_; uint8_t v___y_518_; uint8_t v___y_519_; lean_object* v___y_520_; lean_object* v___y_521_; lean_object* v___y_522_; uint8_t v___y_523_; lean_object* v___y_524_; lean_object* v___y_580_; lean_object* v___y_581_; uint8_t v___y_582_; lean_object* v___y_583_; uint8_t v___y_584_; lean_object* v___y_585_; lean_object* v___y_586_; lean_object* v___y_587_; uint8_t v___y_588_; lean_object* v___y_589_; lean_object* v_task_591_; lean_object* v_caption_592_; uint8_t v_optional_593_; uint32_t v___y_595_; lean_object* v___y_596_; lean_object* v___y_597_; lean_object* v___y_598_; uint8_t v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; uint8_t v___y_603_; uint8_t v___y_604_; uint8_t v___y_605_; lean_object* v___y_606_; lean_object* v___y_607_; uint32_t v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; uint8_t v___y_634_; lean_object* v___y_635_; lean_object* v___y_636_; lean_object* v___y_637_; uint8_t v___y_638_; uint8_t v___y_639_; uint8_t v___y_640_; lean_object* v___y_641_; uint32_t v___y_644_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; uint8_t v___y_649_; lean_object* v___y_650_; lean_object* v___y_651_; uint8_t v___y_652_; uint8_t v___y_653_; uint8_t v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___y_666_; uint8_t v___y_667_; uint8_t v___y_668_; uint8_t v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_673_; uint8_t v___y_674_; uint32_t v___y_675_; lean_object* v___y_679_; lean_object* v___y_680_; uint8_t v___y_681_; uint8_t v___y_682_; lean_object* v___y_683_; lean_object* v___y_684_; lean_object* v___y_685_; lean_object* v___y_686_; uint8_t v___y_687_; uint8_t v___y_688_; lean_object* v___y_695_; lean_object* v___y_696_; uint8_t v___y_697_; uint8_t v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; uint8_t v___y_703_; uint8_t v___y_704_; lean_object* v___y_706_; uint8_t v___y_707_; uint8_t v___y_708_; uint8_t v___y_709_; lean_object* v___y_710_; lean_object* v___y_711_; lean_object* v___y_712_; uint8_t v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; uint8_t v___y_733_; lean_object* v___y_734_; uint8_t v___y_735_; uint8_t v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; uint8_t v___y_740_; uint8_t v___y_741_; uint8_t v___y_757_; lean_object* v___y_758_; uint8_t v___y_759_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_762_; uint8_t v___y_763_; uint8_t v___y_764_; lean_object* v___y_769_; lean_object* v___x_780_; lean_object* v_a_781_; 
v_jobNo_478_ = lean_ctor_get(v___y_460_, 0);
lean_inc(v_jobNo_478_);
v_totalJobs_479_ = lean_ctor_get(v___y_460_, 1);
lean_inc(v_totalJobs_479_);
v_wantsRebuild_480_ = lean_ctor_get_uint8(v___y_460_, sizeof(void*)*6);
v_failures_481_ = lean_ctor_get(v___y_460_, 2);
v_resetCtrl_482_ = lean_ctor_get(v___y_460_, 3);
v_lastUpdate_483_ = lean_ctor_get(v___y_460_, 4);
v_spinnerIdx_484_ = lean_ctor_get(v___y_460_, 5);
v_out_485_ = lean_ctor_get(v___y_459_, 1);
v_outLv_486_ = lean_ctor_get_uint8(v___y_459_, sizeof(void*)*4);
v_failLv_487_ = lean_ctor_get_uint8(v___y_459_, sizeof(void*)*4 + 1);
v_minAction_488_ = lean_ctor_get_uint8(v___y_459_, sizeof(void*)*4 + 2);
v_showOptional_489_ = lean_ctor_get_uint8(v___y_459_, sizeof(void*)*4 + 3);
v_useAnsi_490_ = lean_ctor_get_uint8(v___y_459_, sizeof(void*)*4 + 4);
v_showProgress_491_ = lean_ctor_get_uint8(v___y_459_, sizeof(void*)*4 + 5);
v_showTime_492_ = lean_ctor_get_uint8(v___y_459_, sizeof(void*)*4 + 6);
v_task_591_ = lean_ctor_get(v_job_458_, 0);
lean_inc_ref(v_task_591_);
v_caption_592_ = lean_ctor_get(v_job_458_, 2);
lean_inc_ref(v_caption_592_);
v_optional_593_ = lean_ctor_get_uint8(v_job_458_, sizeof(void*)*3);
lean_dec_ref(v_job_458_);
v___x_780_ = lean_task_get_own(v_task_591_);
v_a_781_ = lean_ctor_get(v___x_780_, 1);
lean_inc(v_a_781_);
lean_dec(v___x_780_);
v___y_769_ = v_a_781_;
goto v___jp_768_;
v___jp_462_:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_box(0);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
lean_ctor_set(v___x_465_, 1, v___y_463_);
return v___x_465_;
}
v___jp_466_:
{
lean_object* v___x_469_; 
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v_val_468_);
lean_ctor_set(v___x_469_, 1, v___y_467_);
return v___x_469_;
}
v___jp_470_:
{
lean_object* v_out_473_; lean_object* v_flush_474_; lean_object* v___x_475_; 
v_out_473_ = lean_ctor_get(v___y_471_, 1);
v_flush_474_ = lean_ctor_get(v_out_473_, 0);
lean_inc_ref(v_flush_474_);
v___x_475_ = lean_apply_1(v_flush_474_, lean_box(0));
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_a_476_);
lean_dec_ref_known(v___x_475_, 1);
v___y_467_ = v___y_472_;
v_val_468_ = v_a_476_;
goto v___jp_466_;
}
else
{
lean_object* v___x_477_; 
lean_dec_ref_known(v___x_475_, 1);
v___x_477_ = lean_box(0);
v___y_467_ = v___y_472_;
v_val_468_ = v___x_477_;
goto v___jp_466_;
}
}
v___jp_493_:
{
uint8_t v___x_500_; 
v___x_500_ = lean_nat_dec_lt(v___y_495_, v___y_498_);
lean_dec(v___y_495_);
if (v___x_500_ == 0)
{
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
v___y_471_ = v___y_494_;
v___y_472_ = v___y_496_;
goto v___jp_470_;
}
else
{
lean_object* v___x_501_; size_t v___x_502_; size_t v___x_503_; lean_object* v___x_504_; lean_object* v_snd_505_; 
v___x_501_ = lean_box(0);
v___x_502_ = ((size_t)0ULL);
v___x_503_ = lean_usize_of_nat(v___y_498_);
lean_dec(v___y_498_);
lean_inc_ref(v_out_485_);
v___x_504_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_485_, v___y_499_, v_useAnsi_490_, v___y_497_, v___x_502_, v___x_503_, v___x_501_, v___y_496_);
lean_dec_ref(v___y_497_);
v_snd_505_ = lean_ctor_get(v___x_504_, 1);
lean_inc(v_snd_505_);
lean_dec_ref(v___x_504_);
v___y_471_ = v___y_494_;
v___y_472_ = v_snd_505_;
goto v___jp_470_;
}
}
v___jp_506_:
{
if (v___y_513_ == 0)
{
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_507_);
v___y_471_ = v___y_508_;
v___y_472_ = v___y_510_;
goto v___jp_470_;
}
else
{
if (v___y_509_ == 0)
{
v___y_494_ = v___y_508_;
v___y_495_ = v___y_507_;
v___y_496_ = v___y_510_;
v___y_497_ = v___y_511_;
v___y_498_ = v___y_512_;
v___y_499_ = v_outLv_486_;
goto v___jp_493_;
}
else
{
uint8_t v___x_514_; 
v___x_514_ = 0;
v___y_494_ = v___y_508_;
v___y_495_ = v___y_507_;
v___y_496_ = v___y_510_;
v___y_497_ = v___y_511_;
v___y_498_ = v___y_512_;
v___y_499_ = v___x_514_;
goto v___jp_493_;
}
}
}
v___jp_515_:
{
lean_object* v_out_525_; lean_object* v_jobNo_526_; lean_object* v_totalJobs_527_; uint8_t v_wantsRebuild_528_; lean_object* v_failures_529_; lean_object* v_resetCtrl_530_; lean_object* v_lastUpdate_531_; lean_object* v_spinnerIdx_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_578_; 
v_out_525_ = lean_ctor_get(v___y_516_, 1);
v_jobNo_526_ = lean_ctor_get(v___y_520_, 0);
v_totalJobs_527_ = lean_ctor_get(v___y_520_, 1);
v_wantsRebuild_528_ = lean_ctor_get_uint8(v___y_520_, sizeof(void*)*6);
v_failures_529_ = lean_ctor_get(v___y_520_, 2);
v_resetCtrl_530_ = lean_ctor_get(v___y_520_, 3);
v_lastUpdate_531_ = lean_ctor_get(v___y_520_, 4);
v_spinnerIdx_532_ = lean_ctor_get(v___y_520_, 5);
v_isSharedCheck_578_ = !lean_is_exclusive(v___y_520_);
if (v_isSharedCheck_578_ == 0)
{
v___x_534_ = v___y_520_;
v_isShared_535_ = v_isSharedCheck_578_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_spinnerIdx_532_);
lean_inc(v_lastUpdate_531_);
lean_inc(v_resetCtrl_530_);
lean_inc(v_failures_529_);
lean_inc(v_totalJobs_527_);
lean_inc(v_jobNo_526_);
lean_dec(v___y_520_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_578_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v_putStr_536_; lean_object* v___x_537_; lean_object* v___x_539_; 
v_putStr_536_ = lean_ctor_get(v_out_525_, 4);
v___x_537_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 3, v___x_537_);
v___x_539_ = v___x_534_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_jobNo_526_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_totalJobs_527_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_failures_529_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v___x_537_);
lean_ctor_set(v_reuseFailAlloc_577_, 4, v_lastUpdate_531_);
lean_ctor_set(v_reuseFailAlloc_577_, 5, v_spinnerIdx_532_);
lean_ctor_set_uint8(v_reuseFailAlloc_577_, sizeof(void*)*6, v_wantsRebuild_528_);
v___x_539_ = v_reuseFailAlloc_577_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_540_ = lean_string_append(v_resetCtrl_530_, v___y_524_);
lean_dec_ref(v___y_524_);
v___x_541_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0));
v___x_542_ = lean_string_append(v___x_540_, v___x_541_);
lean_inc_ref(v_putStr_536_);
lean_inc_ref(v___x_542_);
v___x_543_ = lean_apply_2(v_putStr_536_, v___x_542_, lean_box(0));
if (lean_obj_tag(v___x_543_) == 0)
{
lean_dec_ref_known(v___x_543_, 1);
lean_dec_ref(v___x_542_);
v___y_507_ = v___y_517_;
v___y_508_ = v___y_516_;
v___y_509_ = v___y_519_;
v___y_510_ = v___x_539_;
v___y_511_ = v___y_521_;
v___y_512_ = v___y_522_;
v___y_513_ = v___y_523_;
goto v___jp_506_;
}
else
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_576_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_543_);
if (v_isSharedCheck_576_ == 0)
{
v___x_546_ = v___x_543_;
v_isShared_547_ = v_isSharedCheck_576_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_543_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_576_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_569_; 
v___x_548_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_549_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_550_ = lean_unsigned_to_nat(82u);
v___x_551_ = lean_unsigned_to_nat(4u);
v___x_552_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__14));
v___x_553_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__17));
v___x_554_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__22));
lean_inc(v___y_517_);
v___x_555_ = l_Lean_Name_num___override(v___x_554_, v___y_517_);
v___x_556_ = l_Lean_Name_str___override(v___x_555_, v___x_553_);
v___x_557_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__25));
v___x_558_ = l_Lean_Name_str___override(v___x_556_, v___x_557_);
v___x_559_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_558_, v___y_518_);
v___x_560_ = lean_string_append(v___x_552_, v___x_559_);
lean_dec_ref(v___x_559_);
v___x_561_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__29));
v___x_562_ = lean_string_append(v___x_560_, v___x_561_);
v___x_563_ = lean_io_error_to_string(v_a_544_);
v___x_564_ = lean_string_append(v___x_562_, v___x_563_);
lean_dec_ref(v___x_563_);
v___x_565_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_566_ = lean_string_append(v___x_564_, v___x_565_);
v___x_567_ = l_String_quote(v___x_542_);
if (v_isShared_547_ == 0)
{
lean_ctor_set_tag(v___x_546_, 3);
lean_ctor_set(v___x_546_, 0, v___x_567_);
v___x_569_ = v___x_546_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_575_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_570_ = l_Std_Format_defWidth;
lean_inc_n(v___y_517_, 2);
v___x_571_ = l_Std_Format_pretty(v___x_569_, v___x_570_, v___y_517_, v___y_517_);
v___x_572_ = lean_string_append(v___x_566_, v___x_571_);
lean_dec_ref(v___x_571_);
v___x_573_ = l_mkPanicMessageWithDecl(v___x_548_, v___x_549_, v___x_550_, v___x_551_, v___x_572_);
lean_dec_ref(v___x_572_);
v___x_574_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_573_);
v___y_507_ = v___y_517_;
v___y_508_ = v___y_516_;
v___y_509_ = v___y_519_;
v___y_510_ = v___x_539_;
v___y_511_ = v___y_521_;
v___y_512_ = v___y_522_;
v___y_513_ = v___y_523_;
goto v___jp_506_;
}
}
}
}
}
}
v___jp_579_:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lake_Ansi_chalk(v___y_589_, v___y_583_);
lean_dec_ref(v___y_583_);
lean_dec_ref(v___y_589_);
v___y_516_ = v___y_581_;
v___y_517_ = v___y_580_;
v___y_518_ = v___y_582_;
v___y_519_ = v___y_584_;
v___y_520_ = v___y_585_;
v___y_521_ = v___y_586_;
v___y_522_ = v___y_587_;
v___y_523_ = v___y_588_;
v___y_524_ = v___x_590_;
goto v___jp_515_;
}
v___jp_594_:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_608_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_609_ = lean_string_push(v___x_608_, v___y_595_);
v___x_610_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2));
v___x_611_ = lean_string_append(v___x_609_, v___x_610_);
v___x_612_ = l_Nat_reprFast(v_jobNo_478_);
v___x_613_ = lean_string_append(v___x_611_, v___x_612_);
lean_dec_ref(v___x_612_);
v___x_614_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3));
v___x_615_ = lean_string_append(v___x_613_, v___x_614_);
v___x_616_ = l_Nat_reprFast(v_totalJobs_479_);
v___x_617_ = lean_string_append(v___x_615_, v___x_616_);
lean_dec_ref(v___x_616_);
v___x_618_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__1));
v___x_619_ = lean_string_append(v___x_617_, v___x_618_);
v___x_620_ = lean_string_append(v___x_619_, v___y_600_);
v___x_621_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__2));
v___x_622_ = lean_string_append(v___x_620_, v___x_621_);
v___x_623_ = lean_string_append(v___x_622_, v___y_596_);
lean_dec_ref(v___y_596_);
v___x_624_ = lean_string_append(v___x_623_, v___x_621_);
v___x_625_ = lean_string_append(v___x_624_, v_caption_592_);
lean_dec_ref(v_caption_592_);
v___x_626_ = lean_string_append(v___x_625_, v___y_607_);
lean_dec_ref(v___y_607_);
if (v_useAnsi_490_ == 0)
{
v___y_516_ = v___y_602_;
v___y_517_ = v___y_601_;
v___y_518_ = v___y_603_;
v___y_519_ = v___y_604_;
v___y_520_ = v___y_597_;
v___y_521_ = v___y_598_;
v___y_522_ = v___y_606_;
v___y_523_ = v___y_599_;
v___y_524_ = v___x_626_;
goto v___jp_515_;
}
else
{
if (v___y_599_ == 0)
{
lean_object* v___x_627_; 
v___x_627_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__3));
v___y_580_ = v___y_601_;
v___y_581_ = v___y_602_;
v___y_582_ = v___y_603_;
v___y_583_ = v___x_626_;
v___y_584_ = v___y_604_;
v___y_585_ = v___y_597_;
v___y_586_ = v___y_598_;
v___y_587_ = v___y_606_;
v___y_588_ = v___y_599_;
v___y_589_ = v___x_627_;
goto v___jp_579_;
}
else
{
lean_object* v___x_628_; 
v___x_628_ = l_Lake_LogLevel_ansiColor(v___y_605_);
v___y_580_ = v___y_601_;
v___y_581_ = v___y_602_;
v___y_582_ = v___y_603_;
v___y_583_ = v___x_626_;
v___y_584_ = v___y_604_;
v___y_585_ = v___y_597_;
v___y_586_ = v___y_598_;
v___y_587_ = v___y_606_;
v___y_588_ = v___y_599_;
v___y_589_ = v___x_628_;
goto v___jp_579_;
}
}
}
v___jp_629_:
{
lean_object* v___x_642_; 
v___x_642_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___y_595_ = v___y_630_;
v___y_596_ = v___y_631_;
v___y_597_ = v___y_632_;
v___y_598_ = v___y_633_;
v___y_599_ = v___y_634_;
v___y_600_ = v___y_635_;
v___y_601_ = v___y_636_;
v___y_602_ = v___y_637_;
v___y_603_ = v___y_638_;
v___y_604_ = v___y_639_;
v___y_605_ = v___y_640_;
v___y_606_ = v___y_641_;
v___y_607_ = v___x_642_;
goto v___jp_594_;
}
v___jp_643_:
{
if (v_showTime_492_ == 0)
{
lean_dec(v___y_647_);
v___y_630_ = v___y_644_;
v___y_631_ = v___y_645_;
v___y_632_ = v___y_646_;
v___y_633_ = v___y_648_;
v___y_634_ = v___y_649_;
v___y_635_ = v___y_656_;
v___y_636_ = v___y_650_;
v___y_637_ = v___y_651_;
v___y_638_ = v___y_652_;
v___y_639_ = v___y_653_;
v___y_640_ = v___y_654_;
v___y_641_ = v___y_655_;
goto v___jp_629_;
}
else
{
uint8_t v___x_657_; 
v___x_657_ = lean_nat_dec_lt(v___y_650_, v___y_647_);
if (v___x_657_ == 0)
{
lean_dec(v___y_647_);
v___y_630_ = v___y_644_;
v___y_631_ = v___y_645_;
v___y_632_ = v___y_646_;
v___y_633_ = v___y_648_;
v___y_634_ = v___y_649_;
v___y_635_ = v___y_656_;
v___y_636_ = v___y_650_;
v___y_637_ = v___y_651_;
v___y_638_ = v___y_652_;
v___y_639_ = v___y_653_;
v___y_640_ = v___y_654_;
v___y_641_ = v___y_655_;
goto v___jp_629_;
}
else
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_658_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4));
v___x_659_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime(v___y_647_);
v___x_660_ = lean_string_append(v___x_658_, v___x_659_);
lean_dec_ref(v___x_659_);
v___x_661_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5));
v___x_662_ = lean_string_append(v___x_660_, v___x_661_);
v___y_595_ = v___y_644_;
v___y_596_ = v___y_645_;
v___y_597_ = v___y_646_;
v___y_598_ = v___y_648_;
v___y_599_ = v___y_649_;
v___y_600_ = v___y_656_;
v___y_601_ = v___y_650_;
v___y_602_ = v___y_651_;
v___y_603_ = v___y_652_;
v___y_604_ = v___y_653_;
v___y_605_ = v___y_654_;
v___y_606_ = v___y_655_;
v___y_607_ = v___x_662_;
goto v___jp_594_;
}
}
}
v___jp_663_:
{
if (v_optional_593_ == 0)
{
lean_object* v___x_676_; 
v___x_676_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___y_644_ = v___y_675_;
v___y_645_ = v___y_666_;
v___y_646_ = v___y_671_;
v___y_647_ = v___y_670_;
v___y_648_ = v___y_672_;
v___y_649_ = v___y_674_;
v___y_650_ = v___y_665_;
v___y_651_ = v___y_664_;
v___y_652_ = v___y_667_;
v___y_653_ = v___y_669_;
v___y_654_ = v___y_668_;
v___y_655_ = v___y_673_;
v___y_656_ = v___x_676_;
goto v___jp_643_;
}
else
{
lean_object* v___x_677_; 
v___x_677_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6));
v___y_644_ = v___y_675_;
v___y_645_ = v___y_666_;
v___y_646_ = v___y_671_;
v___y_647_ = v___y_670_;
v___y_648_ = v___y_672_;
v___y_649_ = v___y_674_;
v___y_650_ = v___y_665_;
v___y_651_ = v___y_664_;
v___y_652_ = v___y_667_;
v___y_653_ = v___y_669_;
v___y_654_ = v___y_668_;
v___y_655_ = v___y_673_;
v___y_656_ = v___x_677_;
goto v___jp_643_;
}
}
v___jp_678_:
{
if (v___y_688_ == 0)
{
if (v_showProgress_491_ == 0)
{
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec(v___y_683_);
lean_dec(v___y_680_);
lean_dec_ref(v_caption_592_);
lean_dec(v_totalJobs_479_);
lean_dec(v_jobNo_478_);
v___y_463_ = v___y_684_;
goto v___jp_462_;
}
else
{
if (v_useAnsi_490_ == 0)
{
uint8_t v___x_689_; 
v___x_689_ = l_Lake_instOrdJobAction_ord(v_minAction_488_, v___y_687_);
if (v___x_689_ == 2)
{
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec(v___y_683_);
lean_dec(v___y_680_);
lean_dec_ref(v_caption_592_);
lean_dec(v_totalJobs_479_);
lean_dec(v_jobNo_478_);
v___y_463_ = v___y_684_;
goto v___jp_462_;
}
else
{
lean_object* v___x_690_; uint32_t v___x_691_; 
v___x_690_ = l_Lake_JobAction_verb(v___y_681_, v___y_687_);
v___x_691_ = 10004;
v___y_664_ = v___y_679_;
v___y_665_ = v___y_680_;
v___y_666_ = v___x_690_;
v___y_667_ = v_showProgress_491_;
v___y_668_ = v___y_682_;
v___y_669_ = v___y_681_;
v___y_670_ = v___y_683_;
v___y_671_ = v___y_684_;
v___y_672_ = v___y_685_;
v___y_673_ = v___y_686_;
v___y_674_ = v___y_688_;
v___y_675_ = v___x_691_;
goto v___jp_663_;
}
}
else
{
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec(v___y_683_);
lean_dec(v___y_680_);
lean_dec_ref(v_caption_592_);
lean_dec(v_totalJobs_479_);
lean_dec(v_jobNo_478_);
v___y_463_ = v___y_684_;
goto v___jp_462_;
}
}
}
else
{
lean_object* v___x_692_; uint32_t v___x_693_; 
v___x_692_ = l_Lake_JobAction_verb(v___y_681_, v___y_687_);
v___x_693_ = l_Lake_LogLevel_icon(v___y_682_);
v___y_664_ = v___y_679_;
v___y_665_ = v___y_680_;
v___y_666_ = v___x_692_;
v___y_667_ = v___y_688_;
v___y_668_ = v___y_682_;
v___y_669_ = v___y_681_;
v___y_670_ = v___y_683_;
v___y_671_ = v___y_684_;
v___y_672_ = v___y_685_;
v___y_673_ = v___y_686_;
v___y_674_ = v___y_688_;
v___y_675_ = v___x_693_;
goto v___jp_663_;
}
}
v___jp_694_:
{
if (v_optional_593_ == 0)
{
v___y_679_ = v___y_695_;
v___y_680_ = v___y_696_;
v___y_681_ = v___y_697_;
v___y_682_ = v___y_698_;
v___y_683_ = v___y_700_;
v___y_684_ = v___y_699_;
v___y_685_ = v___y_701_;
v___y_686_ = v___y_702_;
v___y_687_ = v___y_703_;
v___y_688_ = v___y_704_;
goto v___jp_678_;
}
else
{
if (v_showOptional_489_ == 0)
{
lean_dec(v___y_702_);
lean_dec_ref(v___y_701_);
lean_dec(v___y_700_);
lean_dec(v___y_696_);
lean_dec_ref(v_caption_592_);
lean_dec(v_totalJobs_479_);
lean_dec(v_jobNo_478_);
v___y_463_ = v___y_699_;
goto v___jp_462_;
}
else
{
v___y_679_ = v___y_695_;
v___y_680_ = v___y_696_;
v___y_681_ = v___y_697_;
v___y_682_ = v___y_698_;
v___y_683_ = v___y_700_;
v___y_684_ = v___y_699_;
v___y_685_ = v___y_701_;
v___y_686_ = v___y_702_;
v___y_687_ = v___y_703_;
v___y_688_ = v___y_704_;
goto v___jp_678_;
}
}
}
v___jp_705_:
{
if (v___y_709_ == 0)
{
if (v___y_707_ == 0)
{
v___y_695_ = v___y_714_;
v___y_696_ = v___y_706_;
v___y_697_ = v___y_709_;
v___y_698_ = v___y_708_;
v___y_699_ = v___y_715_;
v___y_700_ = v___y_710_;
v___y_701_ = v___y_711_;
v___y_702_ = v___y_712_;
v___y_703_ = v___y_713_;
v___y_704_ = v___y_707_;
goto v___jp_694_;
}
else
{
uint8_t v___x_716_; 
v___x_716_ = l_Lake_instOrdLogLevel_ord(v_outLv_486_, v___y_708_);
if (v___x_716_ == 2)
{
v___y_695_ = v___y_714_;
v___y_696_ = v___y_706_;
v___y_697_ = v___y_709_;
v___y_698_ = v___y_708_;
v___y_699_ = v___y_715_;
v___y_700_ = v___y_710_;
v___y_701_ = v___y_711_;
v___y_702_ = v___y_712_;
v___y_703_ = v___y_713_;
v___y_704_ = v___y_709_;
goto v___jp_694_;
}
else
{
v___y_695_ = v___y_714_;
v___y_696_ = v___y_706_;
v___y_697_ = v___y_709_;
v___y_698_ = v___y_708_;
v___y_699_ = v___y_715_;
v___y_700_ = v___y_710_;
v___y_701_ = v___y_711_;
v___y_702_ = v___y_712_;
v___y_703_ = v___y_713_;
v___y_704_ = v___y_707_;
goto v___jp_694_;
}
}
}
else
{
if (v_optional_593_ == 0)
{
lean_object* v_jobNo_717_; lean_object* v_totalJobs_718_; uint8_t v_wantsRebuild_719_; lean_object* v_failures_720_; lean_object* v_resetCtrl_721_; lean_object* v_lastUpdate_722_; lean_object* v_spinnerIdx_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_731_; 
v_jobNo_717_ = lean_ctor_get(v___y_715_, 0);
v_totalJobs_718_ = lean_ctor_get(v___y_715_, 1);
v_wantsRebuild_719_ = lean_ctor_get_uint8(v___y_715_, sizeof(void*)*6);
v_failures_720_ = lean_ctor_get(v___y_715_, 2);
v_resetCtrl_721_ = lean_ctor_get(v___y_715_, 3);
v_lastUpdate_722_ = lean_ctor_get(v___y_715_, 4);
v_spinnerIdx_723_ = lean_ctor_get(v___y_715_, 5);
v_isSharedCheck_731_ = !lean_is_exclusive(v___y_715_);
if (v_isSharedCheck_731_ == 0)
{
v___x_725_ = v___y_715_;
v_isShared_726_ = v_isSharedCheck_731_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_spinnerIdx_723_);
lean_inc(v_lastUpdate_722_);
lean_inc(v_resetCtrl_721_);
lean_inc(v_failures_720_);
lean_inc(v_totalJobs_718_);
lean_inc(v_jobNo_717_);
lean_dec(v___y_715_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_731_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_727_; lean_object* v___x_729_; 
lean_inc_ref(v_caption_592_);
v___x_727_ = lean_array_push(v_failures_720_, v_caption_592_);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 2, v___x_727_);
v___x_729_ = v___x_725_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_jobNo_717_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v_totalJobs_718_);
lean_ctor_set(v_reuseFailAlloc_730_, 2, v___x_727_);
lean_ctor_set(v_reuseFailAlloc_730_, 3, v_resetCtrl_721_);
lean_ctor_set(v_reuseFailAlloc_730_, 4, v_lastUpdate_722_);
lean_ctor_set(v_reuseFailAlloc_730_, 5, v_spinnerIdx_723_);
lean_ctor_set_uint8(v_reuseFailAlloc_730_, sizeof(void*)*6, v_wantsRebuild_719_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
v___y_695_ = v___y_714_;
v___y_696_ = v___y_706_;
v___y_697_ = v___y_709_;
v___y_698_ = v___y_708_;
v___y_699_ = v___x_729_;
v___y_700_ = v___y_710_;
v___y_701_ = v___y_711_;
v___y_702_ = v___y_712_;
v___y_703_ = v___y_713_;
v___y_704_ = v___y_709_;
goto v___jp_694_;
}
}
}
else
{
v___y_695_ = v___y_714_;
v___y_696_ = v___y_706_;
v___y_697_ = v___y_709_;
v___y_698_ = v___y_708_;
v___y_699_ = v___y_715_;
v___y_700_ = v___y_710_;
v___y_701_ = v___y_711_;
v___y_702_ = v___y_712_;
v___y_703_ = v___y_713_;
v___y_704_ = v___y_709_;
goto v___jp_694_;
}
}
}
v___jp_732_:
{
uint8_t v___x_742_; 
v___x_742_ = lean_strict_and(v___y_735_, v___y_741_);
if (v___y_733_ == 0)
{
v___y_706_ = v___y_734_;
v___y_707_ = v___y_735_;
v___y_708_ = v___y_736_;
v___y_709_ = v___x_742_;
v___y_710_ = v___y_737_;
v___y_711_ = v___y_738_;
v___y_712_ = v___y_739_;
v___y_713_ = v___y_740_;
v___y_714_ = v___y_459_;
v___y_715_ = v___y_460_;
goto v___jp_705_;
}
else
{
if (v_wantsRebuild_480_ == 0)
{
lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
lean_inc(v_spinnerIdx_484_);
lean_inc(v_lastUpdate_483_);
lean_inc_ref(v_resetCtrl_482_);
lean_inc_ref(v_failures_481_);
v_isSharedCheck_749_ = !lean_is_exclusive(v___y_460_);
if (v_isSharedCheck_749_ == 0)
{
lean_object* v_unused_750_; lean_object* v_unused_751_; lean_object* v_unused_752_; lean_object* v_unused_753_; lean_object* v_unused_754_; lean_object* v_unused_755_; 
v_unused_750_ = lean_ctor_get(v___y_460_, 5);
lean_dec(v_unused_750_);
v_unused_751_ = lean_ctor_get(v___y_460_, 4);
lean_dec(v_unused_751_);
v_unused_752_ = lean_ctor_get(v___y_460_, 3);
lean_dec(v_unused_752_);
v_unused_753_ = lean_ctor_get(v___y_460_, 2);
lean_dec(v_unused_753_);
v_unused_754_ = lean_ctor_get(v___y_460_, 1);
lean_dec(v_unused_754_);
v_unused_755_ = lean_ctor_get(v___y_460_, 0);
lean_dec(v_unused_755_);
v___x_744_ = v___y_460_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_dec(v___y_460_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
lean_inc(v_totalJobs_479_);
lean_inc(v_jobNo_478_);
if (v_isShared_745_ == 0)
{
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_jobNo_478_);
lean_ctor_set(v_reuseFailAlloc_748_, 1, v_totalJobs_479_);
lean_ctor_set(v_reuseFailAlloc_748_, 2, v_failures_481_);
lean_ctor_set(v_reuseFailAlloc_748_, 3, v_resetCtrl_482_);
lean_ctor_set(v_reuseFailAlloc_748_, 4, v_lastUpdate_483_);
lean_ctor_set(v_reuseFailAlloc_748_, 5, v_spinnerIdx_484_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
lean_ctor_set_uint8(v___x_747_, sizeof(void*)*6, v___y_733_);
v___y_706_ = v___y_734_;
v___y_707_ = v___y_735_;
v___y_708_ = v___y_736_;
v___y_709_ = v___x_742_;
v___y_710_ = v___y_737_;
v___y_711_ = v___y_738_;
v___y_712_ = v___y_739_;
v___y_713_ = v___y_740_;
v___y_714_ = v___y_459_;
v___y_715_ = v___x_747_;
goto v___jp_705_;
}
}
}
else
{
v___y_706_ = v___y_734_;
v___y_707_ = v___y_735_;
v___y_708_ = v___y_736_;
v___y_709_ = v___x_742_;
v___y_710_ = v___y_737_;
v___y_711_ = v___y_738_;
v___y_712_ = v___y_739_;
v___y_713_ = v___y_740_;
v___y_714_ = v___y_459_;
v___y_715_ = v___y_460_;
goto v___jp_705_;
}
}
}
v___jp_756_:
{
uint8_t v___x_765_; 
v___x_765_ = l_Lake_instOrdLogLevel_ord(v_failLv_487_, v___y_759_);
if (v___x_765_ == 2)
{
uint8_t v___x_766_; 
v___x_766_ = 0;
v___y_733_ = v___y_757_;
v___y_734_ = v___y_758_;
v___y_735_ = v___y_764_;
v___y_736_ = v___y_759_;
v___y_737_ = v___y_760_;
v___y_738_ = v___y_761_;
v___y_739_ = v___y_762_;
v___y_740_ = v___y_763_;
v___y_741_ = v___x_766_;
goto v___jp_732_;
}
else
{
uint8_t v___x_767_; 
v___x_767_ = 1;
v___y_733_ = v___y_757_;
v___y_734_ = v___y_758_;
v___y_735_ = v___y_764_;
v___y_736_ = v___y_759_;
v___y_737_ = v___y_760_;
v___y_738_ = v___y_761_;
v___y_739_ = v___y_762_;
v___y_740_ = v___y_763_;
v___y_741_ = v___x_767_;
goto v___jp_732_;
}
}
v___jp_768_:
{
lean_object* v_log_770_; uint8_t v_action_771_; uint8_t v_wantsRebuild_772_; lean_object* v_buildTime_773_; uint8_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v_log_770_ = lean_ctor_get(v___y_769_, 0);
lean_inc_ref(v_log_770_);
v_action_771_ = lean_ctor_get_uint8(v___y_769_, sizeof(void*)*3);
v_wantsRebuild_772_ = lean_ctor_get_uint8(v___y_769_, sizeof(void*)*3 + 1);
v_buildTime_773_ = lean_ctor_get(v___y_769_, 2);
lean_inc(v_buildTime_773_);
lean_dec_ref(v___y_769_);
v___x_774_ = l_Lake_Log_maxLv(v_log_770_);
v___x_775_ = lean_array_get_size(v_log_770_);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = lean_nat_dec_eq(v___x_775_, v___x_776_);
if (v___x_777_ == 0)
{
uint8_t v___x_778_; 
v___x_778_ = 1;
v___y_757_ = v_wantsRebuild_772_;
v___y_758_ = v___x_776_;
v___y_759_ = v___x_774_;
v___y_760_ = v_buildTime_773_;
v___y_761_ = v_log_770_;
v___y_762_ = v___x_775_;
v___y_763_ = v_action_771_;
v___y_764_ = v___x_778_;
goto v___jp_756_;
}
else
{
uint8_t v___x_779_; 
v___x_779_ = 0;
v___y_757_ = v_wantsRebuild_772_;
v___y_758_ = v___x_776_;
v___y_759_ = v___x_774_;
v___y_760_ = v_buildTime_773_;
v___y_761_ = v_log_770_;
v___y_762_ = v___x_775_;
v___y_763_ = v_action_771_;
v___y_764_ = v___x_779_;
goto v___jp_756_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___boxed(lean_object* v_job_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(v_job_782_, v___y_783_, v___y_784_);
lean_dec_ref(v___y_783_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0(lean_object* v_out_787_, uint8_t v___y_788_, uint8_t v_useAnsi_789_, lean_object* v_as_790_, size_t v_i_791_, size_t v_stop_792_, lean_object* v_b_793_, lean_object* v___y_794_, lean_object* v___y_795_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_787_, v___y_788_, v_useAnsi_789_, v_as_790_, v_i_791_, v_stop_792_, v_b_793_, v___y_795_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___boxed(lean_object* v_out_798_, lean_object* v___y_799_, lean_object* v_useAnsi_800_, lean_object* v_as_801_, lean_object* v_i_802_, lean_object* v_stop_803_, lean_object* v_b_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
uint8_t v___y_14553__boxed_808_; uint8_t v_useAnsi_14554__boxed_809_; size_t v_i_boxed_810_; size_t v_stop_boxed_811_; lean_object* v_res_812_; 
v___y_14553__boxed_808_ = lean_unbox(v___y_799_);
v_useAnsi_14554__boxed_809_ = lean_unbox(v_useAnsi_800_);
v_i_boxed_810_ = lean_unbox_usize(v_i_802_);
lean_dec(v_i_802_);
v_stop_boxed_811_ = lean_unbox_usize(v_stop_803_);
lean_dec(v_stop_803_);
v_res_812_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0(v_out_798_, v___y_14553__boxed_808_, v_useAnsi_14554__boxed_809_, v_as_801_, v_i_boxed_810_, v_stop_boxed_811_, v_b_804_, v___y_805_, v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec_ref(v_as_801_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_jobs_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v_jobNo_822_; lean_object* v_totalJobs_823_; uint8_t v_wantsRebuild_824_; lean_object* v_failures_825_; lean_object* v_resetCtrl_826_; lean_object* v_lastUpdate_827_; lean_object* v_spinnerIdx_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_838_; 
v_jobs_818_ = lean_ctor_get(v___y_815_, 0);
v___x_819_ = lean_st_ref_take(v_jobs_818_);
v___x_820_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_821_ = lean_st_ref_put(v_jobs_818_, v___x_820_);
v_jobNo_822_ = lean_ctor_get(v___y_816_, 0);
v_totalJobs_823_ = lean_ctor_get(v___y_816_, 1);
v_wantsRebuild_824_ = lean_ctor_get_uint8(v___y_816_, sizeof(void*)*6);
v_failures_825_ = lean_ctor_get(v___y_816_, 2);
v_resetCtrl_826_ = lean_ctor_get(v___y_816_, 3);
v_lastUpdate_827_ = lean_ctor_get(v___y_816_, 4);
v_spinnerIdx_828_ = lean_ctor_get(v___y_816_, 5);
v_isSharedCheck_838_ = !lean_is_exclusive(v___y_816_);
if (v_isSharedCheck_838_ == 0)
{
v___x_830_ = v___y_816_;
v_isShared_831_ = v_isSharedCheck_838_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_spinnerIdx_828_);
lean_inc(v_lastUpdate_827_);
lean_inc(v_resetCtrl_826_);
lean_inc(v_failures_825_);
lean_inc(v_totalJobs_823_);
lean_inc(v_jobNo_822_);
lean_dec(v___y_816_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_838_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_832_ = lean_array_get_size(v___x_819_);
v___x_833_ = lean_nat_add(v_totalJobs_823_, v___x_832_);
lean_dec(v_totalJobs_823_);
if (v_isShared_831_ == 0)
{
lean_ctor_set(v___x_830_, 1, v___x_833_);
v___x_835_ = v___x_830_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_jobNo_822_);
lean_ctor_set(v_reuseFailAlloc_837_, 1, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_837_, 2, v_failures_825_);
lean_ctor_set(v_reuseFailAlloc_837_, 3, v_resetCtrl_826_);
lean_ctor_set(v_reuseFailAlloc_837_, 4, v_lastUpdate_827_);
lean_ctor_set(v_reuseFailAlloc_837_, 5, v_spinnerIdx_828_);
lean_ctor_set_uint8(v_reuseFailAlloc_837_, sizeof(void*)*6, v_wantsRebuild_824_);
v___x_835_ = v_reuseFailAlloc_837_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_object* v___x_836_; 
v___x_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_819_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
return v___x_836_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___boxed(lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v___y_839_, v___y_840_);
lean_dec_ref(v___y_839_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(lean_object* v_as_843_, size_t v_i_844_, size_t v_stop_845_, lean_object* v_b_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v_fst_851_; lean_object* v_snd_852_; uint8_t v___x_856_; 
v___x_856_ = lean_usize_dec_eq(v_i_844_, v_stop_845_);
if (v___x_856_ == 0)
{
lean_object* v_fst_857_; lean_object* v_snd_858_; lean_object* v___x_859_; lean_object* v_task_860_; uint8_t v___x_861_; 
v_fst_857_ = lean_ctor_get(v_b_846_, 0);
v_snd_858_ = lean_ctor_get(v_b_846_, 1);
v___x_859_ = lean_array_uget_borrowed(v_as_843_, v_i_844_);
v_task_860_ = lean_ctor_get(v___x_859_, 0);
v___x_861_ = lean_io_get_task_state(v_task_860_);
switch(v___x_861_)
{
case 0:
{
lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_869_; 
lean_inc(v_snd_858_);
lean_inc(v_fst_857_);
v_isSharedCheck_869_ = !lean_is_exclusive(v_b_846_);
if (v_isSharedCheck_869_ == 0)
{
lean_object* v_unused_870_; lean_object* v_unused_871_; 
v_unused_870_ = lean_ctor_get(v_b_846_, 1);
lean_dec(v_unused_870_);
v_unused_871_ = lean_ctor_get(v_b_846_, 0);
lean_dec(v_unused_871_);
v___x_863_ = v_b_846_;
v_isShared_864_ = v_isSharedCheck_869_;
goto v_resetjp_862_;
}
else
{
lean_dec(v_b_846_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_869_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_865_; lean_object* v___x_867_; 
lean_inc(v___x_859_);
v___x_865_ = lean_array_push(v_snd_858_, v___x_859_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 1, v___x_865_);
v___x_867_ = v___x_863_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_fst_857_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v___x_865_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
v_fst_851_ = v___x_867_;
v_snd_852_ = v___y_848_;
goto v___jp_850_;
}
}
}
case 1:
{
lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_880_; 
lean_inc(v_snd_858_);
lean_inc(v_fst_857_);
v_isSharedCheck_880_ = !lean_is_exclusive(v_b_846_);
if (v_isSharedCheck_880_ == 0)
{
lean_object* v_unused_881_; lean_object* v_unused_882_; 
v_unused_881_ = lean_ctor_get(v_b_846_, 1);
lean_dec(v_unused_881_);
v_unused_882_ = lean_ctor_get(v_b_846_, 0);
lean_dec(v_unused_882_);
v___x_873_ = v_b_846_;
v_isShared_874_ = v_isSharedCheck_880_;
goto v_resetjp_872_;
}
else
{
lean_dec(v_b_846_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_880_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_878_; 
lean_inc_n(v___x_859_, 2);
v___x_875_ = lean_array_push(v_fst_857_, v___x_859_);
v___x_876_ = lean_array_push(v_snd_858_, v___x_859_);
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 1, v___x_876_);
lean_ctor_set(v___x_873_, 0, v___x_875_);
v___x_878_ = v___x_873_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_875_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v___x_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
v_fst_851_ = v___x_878_;
v_snd_852_ = v___y_848_;
goto v___jp_850_;
}
}
}
default: 
{
lean_object* v___x_883_; lean_object* v_snd_884_; lean_object* v_jobNo_885_; lean_object* v_totalJobs_886_; uint8_t v_wantsRebuild_887_; lean_object* v_failures_888_; lean_object* v_resetCtrl_889_; lean_object* v_lastUpdate_890_; lean_object* v_spinnerIdx_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_900_; 
lean_inc(v___x_859_);
v___x_883_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(v___x_859_, v___y_847_, v___y_848_);
v_snd_884_ = lean_ctor_get(v___x_883_, 1);
lean_inc(v_snd_884_);
lean_dec_ref(v___x_883_);
v_jobNo_885_ = lean_ctor_get(v_snd_884_, 0);
v_totalJobs_886_ = lean_ctor_get(v_snd_884_, 1);
v_wantsRebuild_887_ = lean_ctor_get_uint8(v_snd_884_, sizeof(void*)*6);
v_failures_888_ = lean_ctor_get(v_snd_884_, 2);
v_resetCtrl_889_ = lean_ctor_get(v_snd_884_, 3);
v_lastUpdate_890_ = lean_ctor_get(v_snd_884_, 4);
v_spinnerIdx_891_ = lean_ctor_get(v_snd_884_, 5);
v_isSharedCheck_900_ = !lean_is_exclusive(v_snd_884_);
if (v_isSharedCheck_900_ == 0)
{
v___x_893_ = v_snd_884_;
v_isShared_894_ = v_isSharedCheck_900_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_spinnerIdx_891_);
lean_inc(v_lastUpdate_890_);
lean_inc(v_resetCtrl_889_);
lean_inc(v_failures_888_);
lean_inc(v_totalJobs_886_);
lean_inc(v_jobNo_885_);
lean_dec(v_snd_884_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_900_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_898_; 
v___x_895_ = lean_unsigned_to_nat(1u);
v___x_896_ = lean_nat_add(v_jobNo_885_, v___x_895_);
lean_dec(v_jobNo_885_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 0, v___x_896_);
v___x_898_ = v___x_893_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_896_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_totalJobs_886_);
lean_ctor_set(v_reuseFailAlloc_899_, 2, v_failures_888_);
lean_ctor_set(v_reuseFailAlloc_899_, 3, v_resetCtrl_889_);
lean_ctor_set(v_reuseFailAlloc_899_, 4, v_lastUpdate_890_);
lean_ctor_set(v_reuseFailAlloc_899_, 5, v_spinnerIdx_891_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*6, v_wantsRebuild_887_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
v_fst_851_ = v_b_846_;
v_snd_852_ = v___x_898_;
goto v___jp_850_;
}
}
}
}
}
else
{
lean_object* v___x_901_; 
v___x_901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_901_, 0, v_b_846_);
lean_ctor_set(v___x_901_, 1, v___y_848_);
return v___x_901_;
}
v___jp_850_:
{
size_t v___x_853_; size_t v___x_854_; 
v___x_853_ = ((size_t)1ULL);
v___x_854_ = lean_usize_add(v_i_844_, v___x_853_);
v_i_844_ = v___x_854_;
v_b_846_ = v_fst_851_;
v___y_848_ = v_snd_852_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0___boxed(lean_object* v_as_902_, lean_object* v_i_903_, lean_object* v_stop_904_, lean_object* v_b_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
size_t v_i_boxed_909_; size_t v_stop_boxed_910_; lean_object* v_res_911_; 
v_i_boxed_909_ = lean_unbox_usize(v_i_903_);
lean_dec(v_i_903_);
v_stop_boxed_910_ = lean_unbox_usize(v_stop_904_);
lean_dec(v_stop_904_);
v_res_911_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_as_902_, v_i_boxed_909_, v_stop_boxed_910_, v_b_905_, v___y_906_, v___y_907_);
lean_dec_ref(v___y_906_);
lean_dec_ref(v_as_902_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(lean_object* v_new_914_, lean_object* v_unfinished_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
lean_object* v___x_919_; lean_object* v___y_921_; lean_object* v_fst_922_; lean_object* v_snd_923_; lean_object* v___y_934_; lean_object* v___x_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v___x_919_ = lean_unsigned_to_nat(0u);
v___x_937_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___closed__0));
v___x_938_ = lean_array_get_size(v_unfinished_915_);
v___x_939_ = lean_nat_dec_lt(v___x_919_, v___x_938_);
if (v___x_939_ == 0)
{
lean_object* v___x_940_; 
lean_inc_ref(v___y_917_);
v___x_940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_937_);
lean_ctor_set(v___x_940_, 1, v___y_917_);
v___y_921_ = v___x_940_;
v_fst_922_ = v___x_937_;
v_snd_923_ = v___y_917_;
goto v___jp_920_;
}
else
{
uint8_t v___x_941_; 
v___x_941_ = lean_nat_dec_le(v___x_938_, v___x_938_);
if (v___x_941_ == 0)
{
if (v___x_939_ == 0)
{
lean_object* v___x_942_; 
lean_inc_ref(v___y_917_);
v___x_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_937_);
lean_ctor_set(v___x_942_, 1, v___y_917_);
v___y_921_ = v___x_942_;
v_fst_922_ = v___x_937_;
v_snd_923_ = v___y_917_;
goto v___jp_920_;
}
else
{
size_t v___x_943_; size_t v___x_944_; lean_object* v___x_945_; 
v___x_943_ = ((size_t)0ULL);
v___x_944_ = lean_usize_of_nat(v___x_938_);
v___x_945_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_unfinished_915_, v___x_943_, v___x_944_, v___x_937_, v___y_916_, v___y_917_);
v___y_934_ = v___x_945_;
goto v___jp_933_;
}
}
else
{
size_t v___x_946_; size_t v___x_947_; lean_object* v___x_948_; 
v___x_946_ = ((size_t)0ULL);
v___x_947_ = lean_usize_of_nat(v___x_938_);
v___x_948_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_unfinished_915_, v___x_946_, v___x_947_, v___x_937_, v___y_916_, v___y_917_);
v___y_934_ = v___x_948_;
goto v___jp_933_;
}
}
v___jp_920_:
{
lean_object* v___x_924_; uint8_t v___x_925_; 
v___x_924_ = lean_array_get_size(v_new_914_);
v___x_925_ = lean_nat_dec_lt(v___x_919_, v___x_924_);
if (v___x_925_ == 0)
{
lean_dec_ref(v_snd_923_);
lean_dec_ref(v_fst_922_);
return v___y_921_;
}
else
{
uint8_t v___x_926_; 
v___x_926_ = lean_nat_dec_le(v___x_924_, v___x_924_);
if (v___x_926_ == 0)
{
if (v___x_925_ == 0)
{
lean_dec_ref(v_snd_923_);
lean_dec_ref(v_fst_922_);
return v___y_921_;
}
else
{
size_t v___x_927_; size_t v___x_928_; lean_object* v___x_929_; 
lean_dec_ref(v___y_921_);
v___x_927_ = ((size_t)0ULL);
v___x_928_ = lean_usize_of_nat(v___x_924_);
v___x_929_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_new_914_, v___x_927_, v___x_928_, v_fst_922_, v___y_916_, v_snd_923_);
return v___x_929_;
}
}
else
{
size_t v___x_930_; size_t v___x_931_; lean_object* v___x_932_; 
lean_dec_ref(v___y_921_);
v___x_930_ = ((size_t)0ULL);
v___x_931_ = lean_usize_of_nat(v___x_924_);
v___x_932_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_new_914_, v___x_930_, v___x_931_, v_fst_922_, v___y_916_, v_snd_923_);
return v___x_932_;
}
}
}
v___jp_933_:
{
lean_object* v_fst_935_; lean_object* v_snd_936_; 
v_fst_935_ = lean_ctor_get(v___y_934_, 0);
lean_inc(v_fst_935_);
v_snd_936_ = lean_ctor_get(v___y_934_, 1);
lean_inc(v_snd_936_);
v___y_921_ = v___y_934_;
v_fst_922_ = v_fst_935_;
v_snd_923_ = v_snd_936_;
goto v___jp_920_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___boxed(lean_object* v_new_949_, lean_object* v_unfinished_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(v_new_949_, v_unfinished_950_, v___y_951_, v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec_ref(v_unfinished_950_);
lean_dec_ref(v_new_949_);
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep(lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v___y_959_; lean_object* v___x_977_; lean_object* v_lastUpdate_978_; lean_object* v_updateFrequency_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_977_ = lean_io_mono_ms_now();
v_lastUpdate_978_ = lean_ctor_get(v___y_956_, 4);
v_updateFrequency_979_ = lean_ctor_get(v___y_955_, 2);
v___x_980_ = lean_nat_sub(v___x_977_, v_lastUpdate_978_);
lean_dec(v___x_977_);
v___x_981_ = lean_nat_sub(v_updateFrequency_979_, v___x_980_);
lean_dec(v___x_980_);
v___x_982_ = lean_unsigned_to_nat(0u);
v___x_983_ = lean_nat_dec_lt(v___x_982_, v___x_981_);
if (v___x_983_ == 0)
{
lean_dec(v___x_981_);
v___y_959_ = v___y_956_;
goto v___jp_958_;
}
else
{
uint32_t v___x_984_; lean_object* v___x_985_; 
v___x_984_ = lean_uint32_of_nat(v___x_981_);
lean_dec(v___x_981_);
v___x_985_ = l_IO_sleep(v___x_984_);
v___y_959_ = v___y_956_;
goto v___jp_958_;
}
v___jp_958_:
{
lean_object* v___x_960_; lean_object* v_jobNo_961_; lean_object* v_totalJobs_962_; uint8_t v_wantsRebuild_963_; lean_object* v_failures_964_; lean_object* v_resetCtrl_965_; lean_object* v_spinnerIdx_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_975_; 
v___x_960_ = lean_io_mono_ms_now();
v_jobNo_961_ = lean_ctor_get(v___y_959_, 0);
v_totalJobs_962_ = lean_ctor_get(v___y_959_, 1);
v_wantsRebuild_963_ = lean_ctor_get_uint8(v___y_959_, sizeof(void*)*6);
v_failures_964_ = lean_ctor_get(v___y_959_, 2);
v_resetCtrl_965_ = lean_ctor_get(v___y_959_, 3);
v_spinnerIdx_966_ = lean_ctor_get(v___y_959_, 5);
v_isSharedCheck_975_ = !lean_is_exclusive(v___y_959_);
if (v_isSharedCheck_975_ == 0)
{
lean_object* v_unused_976_; 
v_unused_976_ = lean_ctor_get(v___y_959_, 4);
lean_dec(v_unused_976_);
v___x_968_ = v___y_959_;
v_isShared_969_ = v_isSharedCheck_975_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_spinnerIdx_966_);
lean_inc(v_resetCtrl_965_);
lean_inc(v_failures_964_);
lean_inc(v_totalJobs_962_);
lean_inc(v_jobNo_961_);
lean_dec(v___y_959_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_975_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_970_; lean_object* v___x_972_; 
v___x_970_ = lean_box(0);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 4, v___x_960_);
v___x_972_ = v___x_968_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_jobNo_961_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v_totalJobs_962_);
lean_ctor_set(v_reuseFailAlloc_974_, 2, v_failures_964_);
lean_ctor_set(v_reuseFailAlloc_974_, 3, v_resetCtrl_965_);
lean_ctor_set(v_reuseFailAlloc_974_, 4, v___x_960_);
lean_ctor_set(v_reuseFailAlloc_974_, 5, v_spinnerIdx_966_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, sizeof(void*)*6, v_wantsRebuild_963_);
v___x_972_ = v_reuseFailAlloc_974_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
lean_object* v___x_973_; 
v___x_973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_970_);
lean_ctor_set(v___x_973_, 1, v___x_972_);
return v___x_973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep___boxed(lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l___private_Lake_Build_Run_0__Lake_Monitor_sleep(v___y_986_, v___y_987_);
lean_dec_ref(v___y_986_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop(lean_object* v_new_990_, lean_object* v_unfinished_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v___x_995_; lean_object* v_fst_996_; lean_object* v_snd_997_; lean_object* v_fst_998_; lean_object* v_snd_999_; lean_object* v___y_1001_; lean_object* v___y_1002_; uint8_t v_failFast_1028_; 
v___x_995_ = l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(v_new_990_, v_unfinished_991_, v___y_992_, v___y_993_);
lean_dec_ref(v_unfinished_991_);
lean_dec_ref(v_new_990_);
v_fst_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_fst_996_);
v_snd_997_ = lean_ctor_get(v___x_995_, 1);
lean_inc(v_snd_997_);
lean_dec_ref(v___x_995_);
v_fst_998_ = lean_ctor_get(v_fst_996_, 0);
lean_inc(v_fst_998_);
v_snd_999_ = lean_ctor_get(v_fst_996_, 1);
lean_inc(v_snd_999_);
lean_dec(v_fst_996_);
v_failFast_1028_ = lean_ctor_get_uint8(v___y_992_, sizeof(void*)*4 + 7);
if (v_failFast_1028_ == 0)
{
v___y_1001_ = v___y_992_;
v___y_1002_ = v_snd_997_;
goto v___jp_1000_;
}
else
{
lean_object* v_cancelTk_x3f_1029_; 
v_cancelTk_x3f_1029_ = lean_ctor_get(v___y_992_, 3);
if (lean_obj_tag(v_cancelTk_x3f_1029_) == 1)
{
lean_object* v_val_1030_; lean_object* v_failures_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; 
v_val_1030_ = lean_ctor_get(v_cancelTk_x3f_1029_, 0);
v_failures_1031_ = lean_ctor_get(v_snd_997_, 2);
v___x_1032_ = lean_array_get_size(v_failures_1031_);
v___x_1033_ = lean_unsigned_to_nat(0u);
v___x_1034_ = lean_nat_dec_eq(v___x_1032_, v___x_1033_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; 
v___x_1035_ = l_IO_CancelToken_set(v_val_1030_);
v___y_1001_ = v___y_992_;
v___y_1002_ = v_snd_997_;
goto v___jp_1000_;
}
else
{
v___y_1001_ = v___y_992_;
v___y_1002_ = v_snd_997_;
goto v___jp_1000_;
}
}
else
{
v___y_1001_ = v___y_992_;
v___y_1002_ = v_snd_997_;
goto v___jp_1000_;
}
}
v___jp_1000_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; 
v___x_1003_ = lean_unsigned_to_nat(0u);
v___x_1004_ = lean_array_get_size(v_snd_999_);
v___x_1005_ = lean_nat_dec_lt(v___x_1003_, v___x_1004_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; lean_object* v_fst_1007_; lean_object* v_snd_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1019_; 
lean_dec(v_fst_998_);
v___x_1006_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v___y_1001_, v___y_1002_);
v_fst_1007_ = lean_ctor_get(v___x_1006_, 0);
v_snd_1008_ = lean_ctor_get(v___x_1006_, 1);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1010_ = v___x_1006_;
v_isShared_1011_ = v_isSharedCheck_1019_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_snd_1008_);
lean_inc(v_fst_1007_);
lean_dec(v___x_1006_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1019_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = lean_array_get_size(v_fst_1007_);
v___x_1013_ = lean_nat_dec_lt(v___x_1003_, v___x_1012_);
if (v___x_1013_ == 0)
{
lean_object* v___x_1014_; lean_object* v___x_1016_; 
lean_dec(v_fst_1007_);
lean_dec(v_snd_999_);
v___x_1014_ = lean_box(0);
if (v_isShared_1011_ == 0)
{
lean_ctor_set(v___x_1010_, 0, v___x_1014_);
v___x_1016_ = v___x_1010_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v___x_1014_);
lean_ctor_set(v_reuseFailAlloc_1017_, 1, v_snd_1008_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
else
{
lean_del_object(v___x_1010_);
v_new_990_ = v_fst_1007_;
v_unfinished_991_ = v_snd_999_;
v___y_992_ = v___y_1001_;
v___y_993_ = v_snd_1008_;
goto _start;
}
}
}
else
{
lean_object* v___x_1020_; lean_object* v_snd_1021_; lean_object* v___x_1022_; lean_object* v_snd_1023_; lean_object* v___x_1024_; lean_object* v_fst_1025_; lean_object* v_snd_1026_; 
v___x_1020_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_fst_998_, v_snd_999_, v___y_1001_, v___y_1002_);
lean_dec(v_fst_998_);
v_snd_1021_ = lean_ctor_get(v___x_1020_, 1);
lean_inc(v_snd_1021_);
lean_dec_ref(v___x_1020_);
v___x_1022_ = l___private_Lake_Build_Run_0__Lake_Monitor_sleep(v___y_1001_, v_snd_1021_);
v_snd_1023_ = lean_ctor_get(v___x_1022_, 1);
lean_inc(v_snd_1023_);
lean_dec_ref(v___x_1022_);
v___x_1024_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v___y_1001_, v_snd_1023_);
v_fst_1025_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_fst_1025_);
v_snd_1026_ = lean_ctor_get(v___x_1024_, 1);
lean_inc(v_snd_1026_);
lean_dec_ref(v___x_1024_);
v_new_990_ = v_fst_1025_;
v_unfinished_991_ = v_snd_999_;
v___y_992_ = v___y_1001_;
v___y_993_ = v_snd_1026_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop___boxed(lean_object* v_new_1036_, lean_object* v_unfinished_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l___private_Lake_Build_Run_0__Lake_Monitor_loop(v_new_1036_, v_unfinished_1037_, v___y_1038_, v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main(lean_object* v_init_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v___x_1046_; lean_object* v_fst_1047_; lean_object* v_snd_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1117_; 
v___x_1046_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v___y_1043_, v___y_1044_);
v_fst_1047_ = lean_ctor_get(v___x_1046_, 0);
v_snd_1048_ = lean_ctor_get(v___x_1046_, 1);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1050_ = v___x_1046_;
v_isShared_1051_ = v_isSharedCheck_1117_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_snd_1048_);
lean_inc(v_fst_1047_);
lean_dec(v___x_1046_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1117_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1052_; lean_object* v_snd_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1115_; 
v___x_1052_ = l___private_Lake_Build_Run_0__Lake_Monitor_loop(v_fst_1047_, v_init_1042_, v___y_1043_, v_snd_1048_);
v_snd_1053_ = lean_ctor_get(v___x_1052_, 1);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1115_ == 0)
{
lean_object* v_unused_1116_; 
v_unused_1116_ = lean_ctor_get(v___x_1052_, 0);
lean_dec(v_unused_1116_);
v___x_1055_ = v___x_1052_;
v_isShared_1056_ = v_isSharedCheck_1115_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_snd_1053_);
lean_dec(v___x_1052_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1115_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v_jobNo_1057_; lean_object* v_totalJobs_1058_; uint8_t v_wantsRebuild_1059_; lean_object* v_failures_1060_; lean_object* v_resetCtrl_1061_; lean_object* v_lastUpdate_1062_; lean_object* v_spinnerIdx_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1114_; 
v_jobNo_1057_ = lean_ctor_get(v_snd_1053_, 0);
v_totalJobs_1058_ = lean_ctor_get(v_snd_1053_, 1);
v_wantsRebuild_1059_ = lean_ctor_get_uint8(v_snd_1053_, sizeof(void*)*6);
v_failures_1060_ = lean_ctor_get(v_snd_1053_, 2);
v_resetCtrl_1061_ = lean_ctor_get(v_snd_1053_, 3);
v_lastUpdate_1062_ = lean_ctor_get(v_snd_1053_, 4);
v_spinnerIdx_1063_ = lean_ctor_get(v_snd_1053_, 5);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_snd_1053_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1065_ = v_snd_1053_;
v_isShared_1066_ = v_isSharedCheck_1114_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_spinnerIdx_1063_);
lean_inc(v_lastUpdate_1062_);
lean_inc(v_resetCtrl_1061_);
lean_inc(v_failures_1060_);
lean_inc(v_totalJobs_1058_);
lean_inc(v_jobNo_1057_);
lean_dec(v_snd_1053_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1114_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1067_; lean_object* v___x_1069_; 
v___x_1067_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 3, v___x_1067_);
v___x_1069_ = v___x_1065_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_jobNo_1057_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v_totalJobs_1058_);
lean_ctor_set(v_reuseFailAlloc_1113_, 2, v_failures_1060_);
lean_ctor_set(v_reuseFailAlloc_1113_, 3, v___x_1067_);
lean_ctor_set(v_reuseFailAlloc_1113_, 4, v_lastUpdate_1062_);
lean_ctor_set(v_reuseFailAlloc_1113_, 5, v_spinnerIdx_1063_);
lean_ctor_set_uint8(v_reuseFailAlloc_1113_, sizeof(void*)*6, v_wantsRebuild_1059_);
v___x_1069_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
lean_object* v_val_1071_; lean_object* v___x_1075_; lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1075_ = lean_string_utf8_byte_size(v_resetCtrl_1061_);
v___x_1076_ = lean_unsigned_to_nat(0u);
v___x_1077_ = lean_nat_dec_eq(v___x_1075_, v___x_1076_);
if (v___x_1077_ == 0)
{
lean_object* v_out_1078_; lean_object* v_flush_1079_; lean_object* v_putStr_1080_; lean_object* v___x_1085_; 
lean_del_object(v___x_1050_);
v_out_1078_ = lean_ctor_get(v___y_1043_, 1);
v_flush_1079_ = lean_ctor_get(v_out_1078_, 0);
v_putStr_1080_ = lean_ctor_get(v_out_1078_, 4);
lean_inc_ref(v_putStr_1080_);
lean_inc_ref(v_resetCtrl_1061_);
v___x_1085_ = lean_apply_2(v_putStr_1080_, v_resetCtrl_1061_, lean_box(0));
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_dec_ref_known(v___x_1085_, 1);
lean_dec_ref(v_resetCtrl_1061_);
goto v___jp_1081_;
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1108_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1088_ = v___x_1085_;
v_isShared_1089_ = v_isSharedCheck_1108_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_a_1086_);
lean_dec(v___x_1085_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1108_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1101_; 
v___x_1090_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_1091_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_1092_ = lean_unsigned_to_nat(82u);
v___x_1093_ = lean_unsigned_to_nat(4u);
v___x_1094_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__30, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__30_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__30);
v___x_1095_ = lean_io_error_to_string(v_a_1086_);
v___x_1096_ = lean_string_append(v___x_1094_, v___x_1095_);
lean_dec_ref(v___x_1095_);
v___x_1097_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_1098_ = lean_string_append(v___x_1096_, v___x_1097_);
v___x_1099_ = l_String_quote(v_resetCtrl_1061_);
if (v_isShared_1089_ == 0)
{
lean_ctor_set_tag(v___x_1088_, 3);
lean_ctor_set(v___x_1088_, 0, v___x_1099_);
v___x_1101_ = v___x_1088_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1099_);
v___x_1101_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1102_ = l_Std_Format_defWidth;
v___x_1103_ = l_Std_Format_pretty(v___x_1101_, v___x_1102_, v___x_1076_, v___x_1076_);
v___x_1104_ = lean_string_append(v___x_1098_, v___x_1103_);
lean_dec_ref(v___x_1103_);
v___x_1105_ = l_mkPanicMessageWithDecl(v___x_1090_, v___x_1091_, v___x_1092_, v___x_1093_, v___x_1104_);
lean_dec_ref(v___x_1104_);
v___x_1106_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1105_);
goto v___jp_1081_;
}
}
}
v___jp_1081_:
{
lean_object* v___x_1082_; 
lean_inc_ref(v_flush_1079_);
v___x_1082_ = lean_apply_1(v_flush_1079_, lean_box(0));
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v_a_1083_; 
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc(v_a_1083_);
lean_dec_ref_known(v___x_1082_, 1);
v_val_1071_ = v_a_1083_;
goto v___jp_1070_;
}
else
{
lean_object* v___x_1084_; 
lean_dec_ref_known(v___x_1082_, 1);
v___x_1084_ = lean_box(0);
v_val_1071_ = v___x_1084_;
goto v___jp_1070_;
}
}
}
else
{
lean_object* v___x_1109_; lean_object* v___x_1111_; 
lean_dec_ref(v_resetCtrl_1061_);
lean_del_object(v___x_1055_);
v___x_1109_ = lean_box(0);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 1, v___x_1069_);
lean_ctor_set(v___x_1050_, 0, v___x_1109_);
v___x_1111_ = v___x_1050_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1109_);
lean_ctor_set(v_reuseFailAlloc_1112_, 1, v___x_1069_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
v___jp_1070_:
{
lean_object* v___x_1073_; 
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 1, v___x_1069_);
lean_ctor_set(v___x_1055_, 0, v_val_1071_);
v___x_1073_ = v___x_1055_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_val_1071_);
lean_ctor_set(v_reuseFailAlloc_1074_, 1, v___x_1069_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main___boxed(lean_object* v_init_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l___private_Lake_Build_Run_0__Lake_Monitor_main(v_init_1118_, v___y_1119_, v___y_1120_);
lean_dec_ref(v___y_1119_);
return v_res_1122_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk(lean_object* v_self_1123_){
_start:
{
lean_object* v_failures_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; uint8_t v___x_1127_; 
v_failures_1124_ = lean_ctor_get(v_self_1123_, 0);
v___x_1125_ = lean_array_get_size(v_failures_1124_);
v___x_1126_ = lean_unsigned_to_nat(0u);
v___x_1127_ = lean_nat_dec_eq(v___x_1125_, v___x_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk___boxed(lean_object* v_self_1128_){
_start:
{
uint8_t v_res_1129_; lean_object* v_r_1130_; 
v_res_1129_ = l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk(v_self_1128_);
lean_dec_ref(v_self_1128_);
v_r_1130_ = lean_box(v_res_1129_);
return v_r_1130_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0(void){
_start:
{
uint8_t v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = 2;
v___x_1132_ = l_Lake_Verbosity_ctorIdx(v___x_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext(lean_object* v_cfg_1133_, lean_object* v_jobs_1134_, lean_object* v_cancelTk_x3f_1135_){
_start:
{
lean_object* v_toLogConfig_1137_; uint8_t v_failFast_1138_; uint8_t v_verbosity_1139_; uint8_t v_failLv_1140_; uint8_t v_outLv_1141_; uint8_t v_ansiMode_1142_; lean_object* v_out_1143_; lean_object* v___x_1144_; uint8_t v___x_1145_; uint8_t v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; uint8_t v___x_1149_; uint8_t v___y_1151_; uint8_t v___y_1152_; uint8_t v___y_1156_; 
v_toLogConfig_1137_ = lean_ctor_get(v_cfg_1133_, 0);
v_failFast_1138_ = lean_ctor_get_uint8(v_cfg_1133_, sizeof(void*)*4 + 3);
v_verbosity_1139_ = lean_ctor_get_uint8(v_cfg_1133_, sizeof(void*)*4 + 4);
v_failLv_1140_ = lean_ctor_get_uint8(v_toLogConfig_1137_, sizeof(void*)*1);
v_outLv_1141_ = lean_ctor_get_uint8(v_toLogConfig_1137_, sizeof(void*)*1 + 1);
v_ansiMode_1142_ = lean_ctor_get_uint8(v_toLogConfig_1137_, sizeof(void*)*1 + 2);
v_out_1143_ = lean_ctor_get(v_toLogConfig_1137_, 0);
v___x_1144_ = l_Lake_OutStream_get(v_out_1143_);
lean_inc_ref(v___x_1144_);
v___x_1145_ = l_Lake_AnsiMode_isEnabled(v___x_1144_, v_ansiMode_1142_);
v___x_1146_ = l_Lake_BuildConfig_showProgress(v_cfg_1133_);
v___x_1147_ = l_Lake_Verbosity_ctorIdx(v_verbosity_1139_);
v___x_1148_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0, &l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0);
v___x_1149_ = lean_nat_dec_eq(v___x_1147_, v___x_1148_);
lean_dec(v___x_1147_);
if (v___x_1149_ == 0)
{
uint8_t v___x_1158_; 
v___x_1158_ = 3;
v___y_1156_ = v___x_1158_;
goto v___jp_1155_;
}
else
{
uint8_t v___x_1159_; 
v___x_1159_ = 0;
v___y_1156_ = v___x_1159_;
goto v___jp_1155_;
}
v___jp_1150_:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = lean_unsigned_to_nat(100u);
v___x_1154_ = lean_alloc_ctor(0, 4, 8);
lean_ctor_set(v___x_1154_, 0, v_jobs_1134_);
lean_ctor_set(v___x_1154_, 1, v___x_1144_);
lean_ctor_set(v___x_1154_, 2, v___x_1153_);
lean_ctor_set(v___x_1154_, 3, v_cancelTk_x3f_1135_);
lean_ctor_set_uint8(v___x_1154_, sizeof(void*)*4, v_outLv_1141_);
lean_ctor_set_uint8(v___x_1154_, sizeof(void*)*4 + 1, v_failLv_1140_);
lean_ctor_set_uint8(v___x_1154_, sizeof(void*)*4 + 2, v___y_1151_);
lean_ctor_set_uint8(v___x_1154_, sizeof(void*)*4 + 3, v___x_1149_);
lean_ctor_set_uint8(v___x_1154_, sizeof(void*)*4 + 4, v___x_1145_);
lean_ctor_set_uint8(v___x_1154_, sizeof(void*)*4 + 5, v___x_1146_);
lean_ctor_set_uint8(v___x_1154_, sizeof(void*)*4 + 6, v___y_1152_);
lean_ctor_set_uint8(v___x_1154_, sizeof(void*)*4 + 7, v_failFast_1138_);
return v___x_1154_;
}
v___jp_1155_:
{
if (v___x_1149_ == 0)
{
if (v___x_1145_ == 0)
{
uint8_t v___x_1157_; 
v___x_1157_ = 1;
v___y_1151_ = v___y_1156_;
v___y_1152_ = v___x_1157_;
goto v___jp_1150_;
}
else
{
v___y_1151_ = v___y_1156_;
v___y_1152_ = v___x_1149_;
goto v___jp_1150_;
}
}
else
{
v___y_1151_ = v___y_1156_;
v___y_1152_ = v___x_1149_;
goto v___jp_1150_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext___boxed(lean_object* v_cfg_1160_, lean_object* v_jobs_1161_, lean_object* v_cancelTk_x3f_1162_, lean_object* v___y_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_1160_, v_jobs_1161_, v_cancelTk_x3f_1162_);
lean_dec_ref(v_cfg_1160_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(lean_object* v_ctx_1165_, lean_object* v_initJobs_1166_, lean_object* v_initFailures_1167_, lean_object* v_resetCtrl_1168_){
_start:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; uint8_t v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v_snd_1175_; lean_object* v_totalJobs_1176_; uint8_t v_wantsRebuild_1177_; lean_object* v_failures_1178_; lean_object* v___x_1179_; 
v___x_1170_ = lean_io_mono_ms_now();
v___x_1171_ = lean_unsigned_to_nat(0u);
v___x_1172_ = 0;
v___x_1173_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_1173_, 0, v___x_1171_);
lean_ctor_set(v___x_1173_, 1, v___x_1171_);
lean_ctor_set(v___x_1173_, 2, v_initFailures_1167_);
lean_ctor_set(v___x_1173_, 3, v_resetCtrl_1168_);
lean_ctor_set(v___x_1173_, 4, v___x_1170_);
lean_ctor_set(v___x_1173_, 5, v___x_1171_);
lean_ctor_set_uint8(v___x_1173_, sizeof(void*)*6, v___x_1172_);
v___x_1174_ = l___private_Lake_Build_Run_0__Lake_Monitor_main(v_initJobs_1166_, v_ctx_1165_, v___x_1173_);
v_snd_1175_ = lean_ctor_get(v___x_1174_, 1);
lean_inc(v_snd_1175_);
lean_dec_ref(v___x_1174_);
v_totalJobs_1176_ = lean_ctor_get(v_snd_1175_, 1);
lean_inc(v_totalJobs_1176_);
v_wantsRebuild_1177_ = lean_ctor_get_uint8(v_snd_1175_, sizeof(void*)*6);
v_failures_1178_ = lean_ctor_get(v_snd_1175_, 2);
lean_inc_ref(v_failures_1178_);
lean_dec(v_snd_1175_);
v___x_1179_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1179_, 0, v_failures_1178_);
lean_ctor_set(v___x_1179_, 1, v_totalJobs_1176_);
lean_ctor_set_uint8(v___x_1179_, sizeof(void*)*2, v_wantsRebuild_1177_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27___boxed(lean_object* v_ctx_1180_, lean_object* v_initJobs_1181_, lean_object* v_initFailures_1182_, lean_object* v_resetCtrl_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1180_, v_initJobs_1181_, v_initFailures_1182_, v_resetCtrl_1183_);
lean_dec_ref(v_ctx_1180_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_Lake_monitorJobs(lean_object* v_initJobs_1186_, lean_object* v_jobs_1187_, lean_object* v_out_1188_, uint8_t v_failLv_1189_, uint8_t v_outLv_1190_, uint8_t v_minAction_1191_, uint8_t v_showOptional_1192_, uint8_t v_useAnsi_1193_, uint8_t v_showProgress_1194_, uint8_t v_showTime_1195_, lean_object* v_resetCtrl_1196_, lean_object* v_initFailures_1197_, lean_object* v_updateFrequency_1198_){
_start:
{
uint8_t v___x_1200_; lean_object* v___x_1201_; lean_object* v_ctx_1202_; lean_object* v___x_1203_; 
v___x_1200_ = 0;
v___x_1201_ = lean_box(0);
v_ctx_1202_ = lean_alloc_ctor(0, 4, 8);
lean_ctor_set(v_ctx_1202_, 0, v_jobs_1187_);
lean_ctor_set(v_ctx_1202_, 1, v_out_1188_);
lean_ctor_set(v_ctx_1202_, 2, v_updateFrequency_1198_);
lean_ctor_set(v_ctx_1202_, 3, v___x_1201_);
lean_ctor_set_uint8(v_ctx_1202_, sizeof(void*)*4, v_outLv_1190_);
lean_ctor_set_uint8(v_ctx_1202_, sizeof(void*)*4 + 1, v_failLv_1189_);
lean_ctor_set_uint8(v_ctx_1202_, sizeof(void*)*4 + 2, v_minAction_1191_);
lean_ctor_set_uint8(v_ctx_1202_, sizeof(void*)*4 + 3, v_showOptional_1192_);
lean_ctor_set_uint8(v_ctx_1202_, sizeof(void*)*4 + 4, v_useAnsi_1193_);
lean_ctor_set_uint8(v_ctx_1202_, sizeof(void*)*4 + 5, v_showProgress_1194_);
lean_ctor_set_uint8(v_ctx_1202_, sizeof(void*)*4 + 6, v_showTime_1195_);
lean_ctor_set_uint8(v_ctx_1202_, sizeof(void*)*4 + 7, v___x_1200_);
v___x_1203_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1202_, v_initJobs_1186_, v_initFailures_1197_, v_resetCtrl_1196_);
lean_dec_ref_known(v_ctx_1202_, 4);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lake_monitorJobs___boxed(lean_object* v_initJobs_1204_, lean_object* v_jobs_1205_, lean_object* v_out_1206_, lean_object* v_failLv_1207_, lean_object* v_outLv_1208_, lean_object* v_minAction_1209_, lean_object* v_showOptional_1210_, lean_object* v_useAnsi_1211_, lean_object* v_showProgress_1212_, lean_object* v_showTime_1213_, lean_object* v_resetCtrl_1214_, lean_object* v_initFailures_1215_, lean_object* v_updateFrequency_1216_, lean_object* v___y_1217_){
_start:
{
uint8_t v_failLv_boxed_1218_; uint8_t v_outLv_boxed_1219_; uint8_t v_minAction_boxed_1220_; uint8_t v_showOptional_boxed_1221_; uint8_t v_useAnsi_boxed_1222_; uint8_t v_showProgress_boxed_1223_; uint8_t v_showTime_boxed_1224_; lean_object* v_res_1225_; 
v_failLv_boxed_1218_ = lean_unbox(v_failLv_1207_);
v_outLv_boxed_1219_ = lean_unbox(v_outLv_1208_);
v_minAction_boxed_1220_ = lean_unbox(v_minAction_1209_);
v_showOptional_boxed_1221_ = lean_unbox(v_showOptional_1210_);
v_useAnsi_boxed_1222_ = lean_unbox(v_useAnsi_1211_);
v_showProgress_boxed_1223_ = lean_unbox(v_showProgress_1212_);
v_showTime_boxed_1224_ = lean_unbox(v_showTime_1213_);
v_res_1225_ = l_Lake_monitorJobs(v_initJobs_1204_, v_jobs_1205_, v_out_1206_, v_failLv_boxed_1218_, v_outLv_boxed_1219_, v_minAction_boxed_1220_, v_showOptional_boxed_1221_, v_useAnsi_boxed_1222_, v_showProgress_boxed_1223_, v_showTime_boxed_1224_, v_resetCtrl_1214_, v_initFailures_1215_, v_updateFrequency_1216_);
return v_res_1225_;
}
}
static uint32_t _init_l_Lake_noBuildCode(void){
_start:
{
uint32_t v___x_1226_; 
v___x_1226_ = 3;
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___lam__0(lean_object* v_logger_1227_, lean_object* v_x_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_apply_2(v_logger_1227_, v___y_1229_, lean_box(0));
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___lam__0___boxed(lean_object* v_logger_1232_, lean_object* v_x_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___lam__0(v_logger_1232_, v_x_1233_, v___y_1234_);
return v_res_1236_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__5(void){
_start:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1246_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__4));
v___x_1247_ = l_String_quote(v___x_1246_);
return v___x_1247_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__6(void){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__5, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__5_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__5);
v___x_1249_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
return v___x_1249_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1250_ = lean_unsigned_to_nat(0u);
v___x_1251_ = l_Std_Format_defWidth;
v___x_1252_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__6, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__6_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__6);
v___x_1253_ = l_Std_Format_pretty(v___x_1252_, v___x_1251_, v___x_1250_, v___x_1250_);
return v___x_1253_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__9(void){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1255_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__8));
v___x_1256_ = l_String_quote(v___x_1255_);
return v___x_1256_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__10(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__9, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__9_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__9);
v___x_1258_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
return v___x_1258_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11(void){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1259_ = lean_unsigned_to_nat(0u);
v___x_1260_ = l_Std_Format_defWidth;
v___x_1261_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__10, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__10);
v___x_1262_ = l_Std_Format_pretty(v___x_1261_, v___x_1260_, v___x_1259_, v___x_1259_);
return v___x_1262_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__13(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1264_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__12));
v___x_1265_ = l_String_quote(v___x_1264_);
return v___x_1265_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__14(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__13, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__13_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__13);
v___x_1267_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
return v___x_1267_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15(void){
_start:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1268_ = lean_unsigned_to_nat(0u);
v___x_1269_ = l_Std_Format_defWidth;
v___x_1270_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__14, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__14_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__14);
v___x_1271_ = l_Std_Format_pretty(v___x_1270_, v___x_1269_, v___x_1268_, v___x_1268_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs(lean_object* v_logger_1273_, lean_object* v_ws_1274_, lean_object* v_outputsRef_x3f_1275_, lean_object* v_out_1276_, lean_object* v_outputsFile_1277_, uint8_t v_isVerbose_1278_){
_start:
{
lean_object* v___f_1282_; lean_object* v___x_1283_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1295_; lean_object* v___y_1296_; uint8_t v___x_1386_; 
lean_inc_ref(v_logger_1273_);
v___f_1282_ = lean_alloc_closure((void*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1282_, 0, v_logger_1273_);
v___x_1283_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__10));
v___x_1386_ = l_Lake_Workspace_isRootArtifactCacheWritable(v_ws_1274_);
if (v___x_1386_ == 0)
{
lean_object* v_packages_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v_baseName_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; uint8_t v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v_packages_1387_ = lean_ctor_get(v_ws_1274_, 4);
v___x_1388_ = lean_unsigned_to_nat(0u);
v___x_1389_ = lean_array_fget_borrowed(v_packages_1387_, v___x_1388_);
v_baseName_1390_ = lean_ctor_get(v___x_1389_, 1);
lean_inc(v_baseName_1390_);
v___x_1391_ = l_Lean_Name_toString(v_baseName_1390_, v___x_1386_);
v___x_1392_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__16));
v___x_1393_ = lean_string_append(v___x_1391_, v___x_1392_);
v___x_1394_ = 2;
v___x_1395_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1395_, 0, v___x_1393_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*1, v___x_1394_);
v___x_1396_ = lean_apply_2(v_logger_1273_, v___x_1395_, lean_box(0));
goto v___jp_1305_;
}
else
{
lean_dec_ref(v_logger_1273_);
goto v___jp_1305_;
}
v___jp_1280_:
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_box(0);
return v___x_1281_;
}
v___jp_1284_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1287_ = lean_array_get_size(v___y_1285_);
v___x_1288_ = lean_box(0);
v___x_1289_ = lean_nat_dec_lt(v___y_1286_, v___x_1287_);
if (v___x_1289_ == 0)
{
lean_dec_ref(v___y_1285_);
lean_dec_ref(v___f_1282_);
return v___x_1288_;
}
else
{
size_t v___x_1290_; size_t v___x_1291_; lean_object* v___x_2331__overap_1292_; lean_object* v___x_1293_; 
v___x_1290_ = ((size_t)0ULL);
v___x_1291_ = lean_usize_of_nat(v___x_1287_);
v___x_2331__overap_1292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1283_, v___f_1282_, v___y_1285_, v___x_1290_, v___x_1291_, v___x_1288_);
v___x_1293_ = lean_apply_1(v___x_2331__overap_1292_, lean_box(0));
return v___x_1293_;
}
}
v___jp_1294_:
{
if (v_isVerbose_1278_ == 0)
{
lean_object* v___x_1297_; 
lean_dec_ref(v___y_1295_);
lean_dec_ref(v___f_1282_);
v___x_1297_ = lean_box(0);
return v___x_1297_;
}
else
{
lean_object* v___x_1298_; lean_object* v___x_1299_; uint8_t v___x_1300_; 
v___x_1298_ = lean_array_get_size(v___y_1295_);
v___x_1299_ = lean_box(0);
v___x_1300_ = lean_nat_dec_lt(v___y_1296_, v___x_1298_);
if (v___x_1300_ == 0)
{
lean_dec_ref(v___y_1295_);
lean_dec_ref(v___f_1282_);
return v___x_1299_;
}
else
{
size_t v___x_1301_; size_t v___x_1302_; lean_object* v___x_2262__overap_1303_; lean_object* v___x_1304_; 
v___x_1301_ = ((size_t)0ULL);
v___x_1302_ = lean_usize_of_nat(v___x_1298_);
v___x_2262__overap_1303_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1283_, v___f_1282_, v___y_1295_, v___x_1301_, v___x_1302_, v___x_1299_);
v___x_1304_ = lean_apply_1(v___x_2262__overap_1303_, lean_box(0));
return v___x_1304_;
}
}
}
v___jp_1305_:
{
if (lean_obj_tag(v_outputsRef_x3f_1275_) == 1)
{
lean_object* v_val_1306_; lean_object* v___x_1307_; lean_object* v_packages_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v_config_1311_; lean_object* v_toLeanConfig_1312_; lean_object* v_platformIndependent_1313_; lean_object* v___f_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v_val_1306_ = lean_ctor_get(v_outputsRef_x3f_1275_, 0);
v___x_1307_ = lean_st_ref_get(v_val_1306_);
v_packages_1308_ = lean_ctor_get(v_ws_1274_, 4);
v___x_1309_ = lean_unsigned_to_nat(0u);
v___x_1310_ = lean_array_fget_borrowed(v_packages_1308_, v___x_1309_);
v_config_1311_ = lean_ctor_get(v___x_1310_, 6);
v_toLeanConfig_1312_ = lean_ctor_get(v_config_1311_, 1);
v_platformIndependent_1313_ = lean_ctor_get(v_toLeanConfig_1312_, 10);
v___f_1314_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__1));
v___x_1315_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__2));
lean_inc(v_platformIndependent_1313_);
v___x_1316_ = l_Option_instBEq_beq___redArg(v___f_1314_, v_platformIndependent_1313_, v___x_1315_);
v___x_1317_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__3));
v___x_1318_ = l_Lake_CacheMap_writeFile(v_outputsFile_1277_, v___x_1307_, v___x_1316_, v___x_1317_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v_a_1319_; lean_object* v___x_1320_; uint8_t v___x_1321_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 1);
lean_inc(v_a_1319_);
lean_dec_ref_known(v___x_1318_, 2);
v___x_1320_ = lean_array_get_size(v_a_1319_);
v___x_1321_ = lean_nat_dec_eq(v___x_1320_, v___x_1309_);
if (v___x_1321_ == 0)
{
if (v_isVerbose_1278_ == 0)
{
lean_dec(v_a_1319_);
lean_dec_ref(v___f_1282_);
lean_dec_ref(v_out_1276_);
goto v___jp_1280_;
}
else
{
lean_object* v_putStr_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v_putStr_1322_ = lean_ctor_get(v_out_1276_, 4);
lean_inc_ref(v_putStr_1322_);
lean_dec_ref(v_out_1276_);
v___x_1323_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__4));
v___x_1324_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__11, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__11);
v___x_1325_ = lean_apply_2(v_putStr_1322_, v___x_1323_, lean_box(0));
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_dec_ref_known(v___x_1325_, 1);
v___y_1285_ = v_a_1319_;
v___y_1286_ = v___x_1309_;
goto v___jp_1284_;
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_2553__overap_1344_; lean_object* v___x_1345_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1325_, 1);
v___x_1327_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_1328_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_1329_ = lean_unsigned_to_nat(82u);
v___x_1330_ = lean_unsigned_to_nat(4u);
v___x_1331_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__14));
v___x_1332_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__26));
v___x_1333_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1332_, v_isVerbose_1278_);
v___x_1334_ = lean_string_append(v___x_1331_, v___x_1333_);
lean_dec_ref(v___x_1333_);
v___x_1335_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__29));
v___x_1336_ = lean_string_append(v___x_1334_, v___x_1335_);
v___x_1337_ = lean_io_error_to_string(v_a_1326_);
v___x_1338_ = lean_string_append(v___x_1336_, v___x_1337_);
lean_dec_ref(v___x_1337_);
v___x_1339_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_1340_ = lean_string_append(v___x_1338_, v___x_1339_);
v___x_1341_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7);
v___x_1342_ = lean_string_append(v___x_1340_, v___x_1341_);
v___x_1343_ = l_mkPanicMessageWithDecl(v___x_1327_, v___x_1328_, v___x_1329_, v___x_1330_, v___x_1342_);
lean_dec_ref(v___x_1342_);
v___x_2553__overap_1344_ = l_panic___redArg(v___x_1324_, v___x_1343_);
v___x_1345_ = lean_apply_1(v___x_2553__overap_1344_, lean_box(0));
lean_dec(v___x_1345_);
v___y_1285_ = v_a_1319_;
v___y_1286_ = v___x_1309_;
goto v___jp_1284_;
}
}
}
else
{
lean_dec(v_a_1319_);
lean_dec_ref(v___f_1282_);
lean_dec_ref(v_out_1276_);
goto v___jp_1280_;
}
}
else
{
lean_object* v_a_1346_; lean_object* v_putStr_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v_a_1346_ = lean_ctor_get(v___x_1318_, 1);
lean_inc(v_a_1346_);
lean_dec_ref_known(v___x_1318_, 2);
v_putStr_1347_ = lean_ctor_get(v_out_1276_, 4);
lean_inc_ref(v_putStr_1347_);
lean_dec_ref(v_out_1276_);
v___x_1348_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__8));
v___x_1349_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__11, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__11);
v___x_1350_ = lean_apply_2(v_putStr_1347_, v___x_1348_, lean_box(0));
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_dec_ref_known(v___x_1350_, 1);
v___y_1295_ = v_a_1346_;
v___y_1296_ = v___x_1309_;
goto v___jp_1294_;
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_2558__overap_1364_; lean_object* v___x_1365_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
v___x_1352_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_1353_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_1354_ = lean_unsigned_to_nat(82u);
v___x_1355_ = lean_unsigned_to_nat(4u);
v___x_1356_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__30, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__30_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__30);
v___x_1357_ = lean_io_error_to_string(v_a_1351_);
v___x_1358_ = lean_string_append(v___x_1356_, v___x_1357_);
lean_dec_ref(v___x_1357_);
v___x_1359_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_1360_ = lean_string_append(v___x_1358_, v___x_1359_);
v___x_1361_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11);
v___x_1362_ = lean_string_append(v___x_1360_, v___x_1361_);
v___x_1363_ = l_mkPanicMessageWithDecl(v___x_1352_, v___x_1353_, v___x_1354_, v___x_1355_, v___x_1362_);
lean_dec_ref(v___x_1362_);
v___x_2558__overap_1364_ = l_panic___redArg(v___x_1349_, v___x_1363_);
v___x_1365_ = lean_apply_1(v___x_2558__overap_1364_, lean_box(0));
lean_dec(v___x_1365_);
v___y_1295_ = v_a_1346_;
v___y_1296_ = v___x_1309_;
goto v___jp_1294_;
}
}
}
else
{
lean_object* v_putStr_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec_ref(v___f_1282_);
lean_dec_ref(v_outputsFile_1277_);
v_putStr_1366_ = lean_ctor_get(v_out_1276_, 4);
lean_inc_ref(v_putStr_1366_);
lean_dec_ref(v_out_1276_);
v___x_1367_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__12));
v___x_1368_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__11, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__11);
v___x_1369_ = lean_apply_2(v_putStr_1366_, v___x_1367_, lean_box(0));
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v_a_1370_; 
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_a_1370_);
lean_dec_ref_known(v___x_1369_, 1);
return v_a_1370_;
}
else
{
lean_object* v_a_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_2563__overap_1384_; lean_object* v___x_1385_; 
v_a_1371_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_a_1371_);
lean_dec_ref_known(v___x_1369_, 1);
v___x_1372_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_1373_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_1374_ = lean_unsigned_to_nat(82u);
v___x_1375_ = lean_unsigned_to_nat(4u);
v___x_1376_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__30, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__30_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__30);
v___x_1377_ = lean_io_error_to_string(v_a_1371_);
v___x_1378_ = lean_string_append(v___x_1376_, v___x_1377_);
lean_dec_ref(v___x_1377_);
v___x_1379_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_1380_ = lean_string_append(v___x_1378_, v___x_1379_);
v___x_1381_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15);
v___x_1382_ = lean_string_append(v___x_1380_, v___x_1381_);
v___x_1383_ = l_mkPanicMessageWithDecl(v___x_1372_, v___x_1373_, v___x_1374_, v___x_1375_, v___x_1382_);
lean_dec_ref(v___x_1382_);
v___x_2563__overap_1384_ = l_panic___redArg(v___x_1368_, v___x_1383_);
v___x_1385_ = lean_apply_1(v___x_2563__overap_1384_, lean_box(0));
return v___x_1385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___boxed(lean_object* v_logger_1397_, lean_object* v_ws_1398_, lean_object* v_outputsRef_x3f_1399_, lean_object* v_out_1400_, lean_object* v_outputsFile_1401_, lean_object* v_isVerbose_1402_, lean_object* v___y_1403_){
_start:
{
uint8_t v_isVerbose_boxed_1404_; lean_object* v_res_1405_; 
v_isVerbose_boxed_1404_ = lean_unbox(v_isVerbose_1402_);
v_res_1405_ = l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs(v_logger_1397_, v_ws_1398_, v_outputsRef_x3f_1399_, v_out_1400_, v_outputsFile_1401_, v_isVerbose_boxed_1404_);
lean_dec(v_outputsRef_x3f_1399_);
lean_dec_ref(v_ws_1398_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(lean_object* v_out_1407_, lean_object* v_as_1408_, size_t v_i_1409_, size_t v_stop_1410_, lean_object* v_b_1411_){
_start:
{
lean_object* v_val_1414_; uint8_t v___x_1418_; 
v___x_1418_ = lean_usize_dec_eq(v_i_1409_, v_stop_1410_);
if (v___x_1418_ == 0)
{
lean_object* v_putStr_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v_putStr_1419_ = lean_ctor_get(v_out_1407_, 4);
v___x_1420_ = lean_array_uget_borrowed(v_as_1408_, v_i_1409_);
v___x_1421_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0));
v___x_1422_ = lean_string_append(v___x_1421_, v___x_1420_);
v___x_1423_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0));
v___x_1424_ = lean_string_append(v___x_1422_, v___x_1423_);
lean_inc_ref(v_putStr_1419_);
lean_inc_ref(v___x_1424_);
v___x_1425_ = lean_apply_2(v_putStr_1419_, v___x_1424_, lean_box(0));
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; 
lean_dec_ref(v___x_1424_);
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1426_);
lean_dec_ref_known(v___x_1425_, 1);
v_val_1414_ = v_a_1426_;
goto v___jp_1413_;
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1450_; 
v_a_1427_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1429_ = v___x_1425_;
v_isShared_1430_ = v_isSharedCheck_1450_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1450_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1431_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_1432_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_1433_ = lean_unsigned_to_nat(82u);
v___x_1434_ = lean_unsigned_to_nat(4u);
v___x_1435_ = lean_unsigned_to_nat(0u);
v___x_1436_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__30, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__30_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__30);
v___x_1437_ = lean_io_error_to_string(v_a_1427_);
v___x_1438_ = lean_string_append(v___x_1436_, v___x_1437_);
lean_dec_ref(v___x_1437_);
v___x_1439_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_1440_ = lean_string_append(v___x_1438_, v___x_1439_);
v___x_1441_ = l_String_quote(v___x_1424_);
if (v_isShared_1430_ == 0)
{
lean_ctor_set_tag(v___x_1429_, 3);
lean_ctor_set(v___x_1429_, 0, v___x_1441_);
v___x_1443_ = v___x_1429_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1444_ = l_Std_Format_defWidth;
v___x_1445_ = l_Std_Format_pretty(v___x_1443_, v___x_1444_, v___x_1435_, v___x_1435_);
v___x_1446_ = lean_string_append(v___x_1440_, v___x_1445_);
lean_dec_ref(v___x_1445_);
v___x_1447_ = l_mkPanicMessageWithDecl(v___x_1431_, v___x_1432_, v___x_1433_, v___x_1434_, v___x_1446_);
lean_dec_ref(v___x_1446_);
v___x_1448_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1447_);
v_val_1414_ = v___x_1448_;
goto v___jp_1413_;
}
}
}
}
else
{
lean_dec_ref(v_out_1407_);
return v_b_1411_;
}
v___jp_1413_:
{
size_t v___x_1415_; size_t v___x_1416_; 
v___x_1415_ = ((size_t)1ULL);
v___x_1416_ = lean_usize_add(v_i_1409_, v___x_1415_);
v_i_1409_ = v___x_1416_;
v_b_1411_ = v_val_1414_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___boxed(lean_object* v_out_1451_, lean_object* v_as_1452_, lean_object* v_i_1453_, lean_object* v_stop_1454_, lean_object* v_b_1455_, lean_object* v___y_1456_){
_start:
{
size_t v_i_boxed_1457_; size_t v_stop_boxed_1458_; lean_object* v_res_1459_; 
v_i_boxed_1457_ = lean_unbox_usize(v_i_1453_);
lean_dec(v_i_1453_);
v_stop_boxed_1458_ = lean_unbox_usize(v_stop_1454_);
lean_dec(v_stop_1454_);
v_res_1459_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1451_, v_as_1452_, v_i_boxed_1457_, v_stop_boxed_1458_, v_b_1455_);
lean_dec_ref(v_as_1452_);
return v_res_1459_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__6(void){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__5));
v___x_1467_ = l_String_quote(v___x_1466_);
return v___x_1467_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__7(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__6, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__6_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__6);
v___x_1469_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
return v___x_1469_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__8(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1470_ = lean_unsigned_to_nat(0u);
v___x_1471_ = l_Std_Format_defWidth;
v___x_1472_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__7, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__7);
v___x_1473_ = l_Std_Format_pretty(v___x_1472_, v___x_1471_, v___x_1470_, v___x_1470_);
return v___x_1473_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__10(void){
_start:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1475_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__9));
v___x_1476_ = l_String_quote(v___x_1475_);
return v___x_1476_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__11(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__10, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__10);
v___x_1478_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
return v___x_1478_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__12(void){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1479_ = lean_unsigned_to_nat(0u);
v___x_1480_ = l_Std_Format_defWidth;
v___x_1481_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__11, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__11);
v___x_1482_ = l_Std_Format_pretty(v___x_1481_, v___x_1480_, v___x_1479_, v___x_1479_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult(lean_object* v_cfg_1483_, lean_object* v_out_1484_, lean_object* v_result_1485_){
_start:
{
uint8_t v___y_1488_; lean_object* v___y_1489_; lean_object* v_failures_1563_; lean_object* v_numJobs_1564_; uint8_t v___y_1566_; lean_object* v___x_1599_; lean_object* v___x_1600_; uint8_t v___x_1601_; 
v_failures_1563_ = lean_ctor_get(v_result_1485_, 0);
lean_inc_ref(v_failures_1563_);
v_numJobs_1564_ = lean_ctor_get(v_result_1485_, 1);
lean_inc(v_numJobs_1564_);
lean_dec_ref(v_result_1485_);
v___x_1599_ = lean_array_get_size(v_failures_1563_);
v___x_1600_ = lean_unsigned_to_nat(0u);
v___x_1601_ = lean_nat_dec_eq(v___x_1599_, v___x_1600_);
if (v___x_1601_ == 0)
{
lean_object* v_flush_1602_; lean_object* v_putStr_1603_; lean_object* v___y_1609_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
lean_dec(v_numJobs_1564_);
v_flush_1602_ = lean_ctor_get(v_out_1484_, 0);
lean_inc_ref(v_flush_1602_);
v_putStr_1603_ = lean_ctor_get(v_out_1484_, 4);
v___x_1620_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__9));
lean_inc_ref(v_putStr_1603_);
v___x_1621_ = lean_apply_2(v_putStr_1603_, v___x_1620_, lean_box(0));
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_dec_ref_known(v___x_1621_, 1);
goto v___jp_1610_;
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1622_);
lean_dec_ref_known(v___x_1621_, 1);
v___x_1623_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_1624_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_1625_ = lean_unsigned_to_nat(82u);
v___x_1626_ = lean_unsigned_to_nat(4u);
v___x_1627_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__30, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__30_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__30);
v___x_1628_ = lean_io_error_to_string(v_a_1622_);
v___x_1629_ = lean_string_append(v___x_1627_, v___x_1628_);
lean_dec_ref(v___x_1628_);
v___x_1630_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_1631_ = lean_string_append(v___x_1629_, v___x_1630_);
v___x_1632_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__12, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__12_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__12);
v___x_1633_ = lean_string_append(v___x_1631_, v___x_1632_);
v___x_1634_ = l_mkPanicMessageWithDecl(v___x_1623_, v___x_1624_, v___x_1625_, v___x_1626_, v___x_1633_);
lean_dec_ref(v___x_1633_);
v___x_1635_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1634_);
goto v___jp_1610_;
}
v___jp_1604_:
{
lean_object* v___x_1605_; 
v___x_1605_ = lean_apply_1(v_flush_1602_, lean_box(0));
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_object* v_a_1606_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_a_1606_);
lean_dec_ref_known(v___x_1605_, 1);
return v_a_1606_;
}
else
{
lean_object* v___x_1607_; 
lean_dec_ref_known(v___x_1605_, 1);
v___x_1607_ = lean_box(0);
return v___x_1607_;
}
}
v___jp_1608_:
{
goto v___jp_1604_;
}
v___jp_1610_:
{
uint8_t v___x_1611_; 
v___x_1611_ = lean_nat_dec_lt(v___x_1600_, v___x_1599_);
if (v___x_1611_ == 0)
{
lean_dec_ref(v_failures_1563_);
lean_dec_ref(v_out_1484_);
goto v___jp_1604_;
}
else
{
lean_object* v___x_1612_; uint8_t v___x_1613_; 
v___x_1612_ = lean_box(0);
v___x_1613_ = lean_nat_dec_le(v___x_1599_, v___x_1599_);
if (v___x_1613_ == 0)
{
if (v___x_1611_ == 0)
{
lean_dec_ref(v_failures_1563_);
lean_dec_ref(v_out_1484_);
goto v___jp_1604_;
}
else
{
size_t v___x_1614_; size_t v___x_1615_; lean_object* v___x_1616_; 
v___x_1614_ = ((size_t)0ULL);
v___x_1615_ = lean_usize_of_nat(v___x_1599_);
v___x_1616_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1484_, v_failures_1563_, v___x_1614_, v___x_1615_, v___x_1612_);
lean_dec_ref(v_failures_1563_);
v___y_1609_ = v___x_1616_;
goto v___jp_1608_;
}
}
else
{
size_t v___x_1617_; size_t v___x_1618_; lean_object* v___x_1619_; 
v___x_1617_ = ((size_t)0ULL);
v___x_1618_ = lean_usize_of_nat(v___x_1599_);
v___x_1619_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1484_, v_failures_1563_, v___x_1617_, v___x_1618_, v___x_1612_);
lean_dec_ref(v_failures_1563_);
v___y_1609_ = v___x_1619_;
goto v___jp_1608_;
}
}
}
}
else
{
uint8_t v___x_1636_; 
lean_dec_ref(v_failures_1563_);
v___x_1636_ = l_Lake_BuildConfig_showProgress(v_cfg_1483_);
if (v___x_1636_ == 0)
{
v___y_1566_ = v___x_1636_;
goto v___jp_1565_;
}
else
{
uint8_t v_showSuccess_1637_; 
v_showSuccess_1637_ = lean_ctor_get_uint8(v_cfg_1483_, sizeof(void*)*4 + 5);
v___y_1566_ = v_showSuccess_1637_;
goto v___jp_1565_;
}
}
v___jp_1487_:
{
uint8_t v_noBuild_1490_; 
v_noBuild_1490_ = lean_ctor_get_uint8(v_cfg_1483_, sizeof(void*)*4 + 2);
if (v_noBuild_1490_ == 0)
{
lean_object* v_putStr_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v_putStr_1491_ = lean_ctor_get(v_out_1484_, 4);
lean_inc_ref(v_putStr_1491_);
lean_dec_ref(v_out_1484_);
v___x_1492_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__0));
v___x_1493_ = lean_string_append(v___x_1492_, v___y_1489_);
lean_dec_ref(v___y_1489_);
v___x_1494_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__1));
v___x_1495_ = lean_string_append(v___x_1493_, v___x_1494_);
lean_inc_ref(v___x_1495_);
v___x_1496_ = lean_apply_2(v_putStr_1491_, v___x_1495_, lean_box(0));
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; 
lean_dec_ref(v___x_1495_);
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
lean_inc(v_a_1497_);
lean_dec_ref_known(v___x_1496_, 1);
return v_a_1497_;
}
else
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1526_; 
v_a_1498_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1526_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1500_ = v___x_1496_;
v_isShared_1501_ = v_isSharedCheck_1526_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1496_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1526_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1519_; 
v___x_1502_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_1503_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_1504_ = lean_unsigned_to_nat(82u);
v___x_1505_ = lean_unsigned_to_nat(4u);
v___x_1506_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__14));
v___x_1507_ = lean_unsigned_to_nat(0u);
v___x_1508_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__26));
v___x_1509_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1508_, v___y_1488_);
v___x_1510_ = lean_string_append(v___x_1506_, v___x_1509_);
lean_dec_ref(v___x_1509_);
v___x_1511_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__29));
v___x_1512_ = lean_string_append(v___x_1510_, v___x_1511_);
v___x_1513_ = lean_io_error_to_string(v_a_1498_);
v___x_1514_ = lean_string_append(v___x_1512_, v___x_1513_);
lean_dec_ref(v___x_1513_);
v___x_1515_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_1516_ = lean_string_append(v___x_1514_, v___x_1515_);
v___x_1517_ = l_String_quote(v___x_1495_);
if (v_isShared_1501_ == 0)
{
lean_ctor_set_tag(v___x_1500_, 3);
lean_ctor_set(v___x_1500_, 0, v___x_1517_);
v___x_1519_ = v___x_1500_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1517_);
v___x_1519_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1520_ = l_Std_Format_defWidth;
v___x_1521_ = l_Std_Format_pretty(v___x_1519_, v___x_1520_, v___x_1507_, v___x_1507_);
v___x_1522_ = lean_string_append(v___x_1516_, v___x_1521_);
lean_dec_ref(v___x_1521_);
v___x_1523_ = l_mkPanicMessageWithDecl(v___x_1502_, v___x_1503_, v___x_1504_, v___x_1505_, v___x_1522_);
lean_dec_ref(v___x_1522_);
v___x_1524_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1523_);
return v___x_1524_;
}
}
}
}
else
{
lean_object* v_putStr_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v_putStr_1527_ = lean_ctor_get(v_out_1484_, 4);
lean_inc_ref(v_putStr_1527_);
lean_dec_ref(v_out_1484_);
v___x_1528_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__2));
v___x_1529_ = lean_string_append(v___x_1528_, v___y_1489_);
lean_dec_ref(v___y_1489_);
v___x_1530_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__1));
v___x_1531_ = lean_string_append(v___x_1529_, v___x_1530_);
lean_inc_ref(v___x_1531_);
v___x_1532_ = lean_apply_2(v_putStr_1527_, v___x_1531_, lean_box(0));
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; 
lean_dec_ref(v___x_1531_);
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_a_1533_);
lean_dec_ref_known(v___x_1532_, 1);
return v_a_1533_;
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1562_; 
v_a_1534_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1536_ = v___x_1532_;
v_isShared_1537_ = v_isSharedCheck_1562_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1532_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1562_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1555_; 
v___x_1538_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_1539_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_1540_ = lean_unsigned_to_nat(82u);
v___x_1541_ = lean_unsigned_to_nat(4u);
v___x_1542_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__14));
v___x_1543_ = lean_unsigned_to_nat(0u);
v___x_1544_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__26));
v___x_1545_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1544_, v_noBuild_1490_);
v___x_1546_ = lean_string_append(v___x_1542_, v___x_1545_);
lean_dec_ref(v___x_1545_);
v___x_1547_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__29));
v___x_1548_ = lean_string_append(v___x_1546_, v___x_1547_);
v___x_1549_ = lean_io_error_to_string(v_a_1534_);
v___x_1550_ = lean_string_append(v___x_1548_, v___x_1549_);
lean_dec_ref(v___x_1549_);
v___x_1551_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_1552_ = lean_string_append(v___x_1550_, v___x_1551_);
v___x_1553_ = l_String_quote(v___x_1531_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set_tag(v___x_1536_, 3);
lean_ctor_set(v___x_1536_, 0, v___x_1553_);
v___x_1555_ = v___x_1536_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v___x_1553_);
v___x_1555_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1556_ = l_Std_Format_defWidth;
v___x_1557_ = l_Std_Format_pretty(v___x_1555_, v___x_1556_, v___x_1543_, v___x_1543_);
v___x_1558_ = lean_string_append(v___x_1552_, v___x_1557_);
lean_dec_ref(v___x_1557_);
v___x_1559_ = l_mkPanicMessageWithDecl(v___x_1538_, v___x_1539_, v___x_1540_, v___x_1541_, v___x_1558_);
lean_dec_ref(v___x_1558_);
v___x_1560_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1559_);
return v___x_1560_;
}
}
}
}
}
v___jp_1565_:
{
if (v___y_1566_ == 0)
{
lean_object* v___x_1567_; 
lean_dec(v_numJobs_1564_);
lean_dec_ref(v_out_1484_);
v___x_1567_ = lean_box(0);
return v___x_1567_;
}
else
{
lean_object* v___x_1568_; uint8_t v___x_1569_; 
v___x_1568_ = lean_unsigned_to_nat(0u);
v___x_1569_ = lean_nat_dec_eq(v_numJobs_1564_, v___x_1568_);
if (v___x_1569_ == 0)
{
lean_object* v___x_1570_; uint8_t v___x_1571_; 
v___x_1570_ = lean_unsigned_to_nat(1u);
v___x_1571_ = lean_nat_dec_eq(v_numJobs_1564_, v___x_1570_);
if (v___x_1571_ == 0)
{
lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1572_ = l_Nat_reprFast(v_numJobs_1564_);
v___x_1573_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__3));
v___x_1574_ = lean_string_append(v___x_1572_, v___x_1573_);
v___y_1488_ = v___y_1566_;
v___y_1489_ = v___x_1574_;
goto v___jp_1487_;
}
else
{
lean_object* v___x_1575_; 
lean_dec(v_numJobs_1564_);
v___x_1575_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__4));
v___y_1488_ = v___y_1566_;
v___y_1489_ = v___x_1575_;
goto v___jp_1487_;
}
}
else
{
lean_object* v_putStr_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
lean_dec(v_numJobs_1564_);
v_putStr_1576_ = lean_ctor_get(v_out_1484_, 4);
lean_inc_ref(v_putStr_1576_);
lean_dec_ref(v_out_1484_);
v___x_1577_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__5));
v___x_1578_ = lean_apply_2(v_putStr_1576_, v___x_1577_, lean_box(0));
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; 
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1579_);
lean_dec_ref_known(v___x_1578_, 1);
return v_a_1579_;
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v_a_1580_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1580_);
lean_dec_ref_known(v___x_1578_, 1);
v___x_1581_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_1582_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_1583_ = lean_unsigned_to_nat(82u);
v___x_1584_ = lean_unsigned_to_nat(4u);
v___x_1585_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__14));
v___x_1586_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__26));
v___x_1587_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1586_, v___x_1569_);
v___x_1588_ = lean_string_append(v___x_1585_, v___x_1587_);
lean_dec_ref(v___x_1587_);
v___x_1589_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__29));
v___x_1590_ = lean_string_append(v___x_1588_, v___x_1589_);
v___x_1591_ = lean_io_error_to_string(v_a_1580_);
v___x_1592_ = lean_string_append(v___x_1590_, v___x_1591_);
lean_dec_ref(v___x_1591_);
v___x_1593_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_1594_ = lean_string_append(v___x_1592_, v___x_1593_);
v___x_1595_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__8, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__8_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__8);
v___x_1596_ = lean_string_append(v___x_1594_, v___x_1595_);
v___x_1597_ = l_mkPanicMessageWithDecl(v___x_1581_, v___x_1582_, v___x_1583_, v___x_1584_, v___x_1596_);
lean_dec_ref(v___x_1596_);
v___x_1598_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1597_);
return v___x_1598_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___boxed(lean_object* v_cfg_1638_, lean_object* v_out_1639_, lean_object* v_result_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l___private_Lake_Build_Run_0__Lake_reportResult(v_cfg_1638_, v_out_1639_, v_result_1640_);
lean_dec_ref(v_cfg_1638_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0(lean_object* v_self_1643_){
_start:
{
lean_object* v_toMonitorResult_1644_; 
v_toMonitorResult_1644_ = lean_ctor_get(v_self_1643_, 0);
lean_inc_ref(v_toMonitorResult_1644_);
return v_toMonitorResult_1644_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0___boxed(lean_object* v_self_1645_){
_start:
{
lean_object* v_res_1646_; 
v_res_1646_ = l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0(v_self_1645_);
lean_dec_ref(v_self_1645_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg(){
_start:
{
lean_object* v___f_1649_; 
v___f_1649_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0));
return v___f_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___boxed(lean_object* v___dummy_1650_){
_start:
{
lean_object* v_res_1651_; 
v_res_1651_ = l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg();
return v_res_1651_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult(lean_object* v_00_u03b1_1652_){
_start:
{
lean_object* v___f_1653_; 
v___f_1653_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0));
return v___f_1653_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg(lean_object* v_self_1654_){
_start:
{
lean_object* v_out_1655_; 
v_out_1655_ = lean_ctor_get(v_self_1654_, 1);
if (lean_obj_tag(v_out_1655_) == 0)
{
uint8_t v___x_1656_; 
v___x_1656_ = 0;
return v___x_1656_;
}
else
{
uint8_t v___x_1657_; 
v___x_1657_ = 1;
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg___boxed(lean_object* v_self_1658_){
_start:
{
uint8_t v_res_1659_; lean_object* v_r_1660_; 
v_res_1659_ = l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg(v_self_1658_);
lean_dec_ref(v_self_1658_);
v_r_1660_ = lean_box(v_res_1659_);
return v_r_1660_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk(lean_object* v_00_u03b1_1661_, lean_object* v_self_1662_){
_start:
{
lean_object* v_out_1663_; 
v_out_1663_ = lean_ctor_get(v_self_1662_, 1);
if (lean_obj_tag(v_out_1663_) == 0)
{
uint8_t v___x_1664_; 
v___x_1664_ = 0;
return v___x_1664_;
}
else
{
uint8_t v___x_1665_; 
v___x_1665_ = 1;
return v___x_1665_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___boxed(lean_object* v_00_u03b1_1666_, lean_object* v_self_1667_){
_start:
{
uint8_t v_res_1668_; lean_object* v_r_1669_; 
v_res_1668_ = l___private_Lake_Build_Run_0__Lake_BuildResult_isOk(v_00_u03b1_1666_, v_self_1667_);
lean_dec_ref(v_self_1667_);
v_r_1669_ = lean_box(v_res_1668_);
return v_r_1669_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(lean_object* v_ctx_1678_, lean_object* v_job_1679_){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v_failures_1689_; lean_object* v___x_1690_; uint8_t v___x_1691_; 
lean_inc_ref(v_job_1679_);
v___x_1681_ = l_Lake_Job_toOpaque___redArg(v_job_1679_);
v___x_1682_ = lean_unsigned_to_nat(1u);
v___x_1683_ = lean_mk_empty_array_with_capacity(v___x_1682_);
v___x_1684_ = lean_array_push(v___x_1683_, v___x_1681_);
v___x_1685_ = lean_unsigned_to_nat(0u);
v___x_1686_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__0));
v___x_1687_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_1688_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1678_, v___x_1684_, v___x_1686_, v___x_1687_);
v_failures_1689_ = lean_ctor_get(v___x_1688_, 0);
lean_inc_ref(v_failures_1689_);
v___x_1690_ = lean_array_get_size(v_failures_1689_);
lean_dec_ref(v_failures_1689_);
v___x_1691_ = lean_nat_dec_eq(v___x_1690_, v___x_1685_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
lean_dec_ref(v_job_1679_);
v___x_1692_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__2));
v___x_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1688_);
lean_ctor_set(v___x_1693_, 1, v___x_1692_);
return v___x_1693_;
}
else
{
lean_object* v_task_1694_; lean_object* v___x_1695_; 
v_task_1694_ = lean_ctor_get(v_job_1679_, 0);
lean_inc_ref(v_task_1694_);
lean_dec_ref(v_job_1679_);
v___x_1695_ = lean_io_wait(v_task_1694_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1704_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1704_ == 0)
{
lean_object* v_unused_1705_; 
v_unused_1705_ = lean_ctor_get(v___x_1695_, 1);
lean_dec(v_unused_1705_);
v___x_1698_ = v___x_1695_;
v_isShared_1699_ = v_isSharedCheck_1704_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_a_1696_);
lean_dec(v___x_1695_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1704_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
lean_object* v___x_1700_; lean_object* v___x_1702_; 
v___x_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1700_, 0, v_a_1696_);
if (v_isShared_1699_ == 0)
{
lean_ctor_set(v___x_1698_, 1, v___x_1700_);
lean_ctor_set(v___x_1698_, 0, v___x_1688_);
v___x_1702_ = v___x_1698_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1688_);
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
else
{
lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1713_; 
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1713_ == 0)
{
lean_object* v_unused_1714_; lean_object* v_unused_1715_; 
v_unused_1714_ = lean_ctor_get(v___x_1695_, 1);
lean_dec(v_unused_1714_);
v_unused_1715_ = lean_ctor_get(v___x_1695_, 0);
lean_dec(v_unused_1715_);
v___x_1707_ = v___x_1695_;
v_isShared_1708_ = v_isSharedCheck_1713_;
goto v_resetjp_1706_;
}
else
{
lean_dec(v___x_1695_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1713_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1709_; lean_object* v___x_1711_; 
v___x_1709_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__4));
if (v_isShared_1708_ == 0)
{
lean_ctor_set_tag(v___x_1707_, 0);
lean_ctor_set(v___x_1707_, 1, v___x_1709_);
lean_ctor_set(v___x_1707_, 0, v___x_1688_);
v___x_1711_ = v___x_1707_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1688_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v___x_1709_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___boxed(lean_object* v_ctx_1716_, lean_object* v_job_1717_, lean_object* v___y_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_ctx_1716_, v_job_1717_);
lean_dec_ref(v_ctx_1716_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob(lean_object* v_00_u03b1_1720_, lean_object* v_ctx_1721_, lean_object* v_job_1722_){
_start:
{
lean_object* v___x_1724_; 
v___x_1724_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_ctx_1721_, v_job_1722_);
return v___x_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___boxed(lean_object* v_00_u03b1_1725_, lean_object* v_ctx_1726_, lean_object* v_job_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l___private_Lake_Build_Run_0__Lake_monitorJob(v_00_u03b1_1725_, v_ctx_1726_, v_job_1727_);
lean_dec_ref(v_ctx_1726_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(lean_object* v_info_1732_){
_start:
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lake_computeTextFileHash(v_info_1732_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_object* v_a_1735_; lean_object* v___x_1736_; 
v_a_1735_ = lean_ctor_get(v___x_1734_, 0);
lean_inc(v_a_1735_);
lean_dec_ref_known(v___x_1734_, 1);
v___x_1736_ = lean_io_metadata(v_info_1732_);
if (lean_obj_tag(v___x_1736_) == 0)
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1748_; 
v_a_1737_ = lean_ctor_get(v___x_1736_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1739_ = v___x_1736_;
v_isShared_1740_ = v_isSharedCheck_1748_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1736_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1748_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v_modified_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; uint64_t v___x_1744_; lean_object* v___x_1746_; 
v_modified_1741_ = lean_ctor_get(v_a_1737_, 1);
lean_inc_ref(v_modified_1741_);
lean_dec(v_a_1737_);
v___x_1742_ = ((lean_object*)(l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0));
v___x_1743_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1743_, 0, v_info_1732_);
lean_ctor_set(v___x_1743_, 1, v___x_1742_);
lean_ctor_set(v___x_1743_, 2, v_modified_1741_);
v___x_1744_ = lean_unbox_uint64(v_a_1735_);
lean_dec(v_a_1735_);
lean_ctor_set_uint64(v___x_1743_, sizeof(void*)*3, v___x_1744_);
if (v_isShared_1740_ == 0)
{
lean_ctor_set(v___x_1739_, 0, v___x_1743_);
v___x_1746_ = v___x_1739_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1743_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
else
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1756_; 
lean_dec(v_a_1735_);
lean_dec_ref(v_info_1732_);
v_a_1749_ = lean_ctor_get(v___x_1736_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1751_ = v___x_1736_;
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1736_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1754_; 
if (v_isShared_1752_ == 0)
{
v___x_1754_ = v___x_1751_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1749_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
else
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1764_; 
lean_dec_ref(v_info_1732_);
v_a_1757_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1759_ = v___x_1734_;
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1734_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1762_; 
if (v_isShared_1760_ == 0)
{
v___x_1762_ = v___x_1759_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_a_1757_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___boxed(lean_object* v_info_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(v_info_1765_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(lean_object* v___x_1771_, lean_object* v_as_1772_, size_t v_sz_1773_, size_t v_i_1774_, lean_object* v_b_1775_){
_start:
{
lean_object* v_a_1778_; uint8_t v___x_1782_; 
v___x_1782_ = lean_usize_dec_lt(v_i_1774_, v_sz_1773_);
if (v___x_1782_ == 0)
{
lean_dec_ref(v___x_1771_);
return v_b_1775_;
}
else
{
lean_object* v_snd_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1806_; 
v_snd_1783_ = lean_ctor_get(v_b_1775_, 1);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_b_1775_);
if (v_isSharedCheck_1806_ == 0)
{
lean_object* v_unused_1807_; 
v_unused_1807_ = lean_ctor_get(v_b_1775_, 0);
lean_dec(v_unused_1807_);
v___x_1785_ = v_b_1775_;
v_isShared_1786_ = v_isSharedCheck_1806_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_snd_1783_);
lean_dec(v_b_1775_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1806_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1787_; lean_object* v_a_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1787_ = lean_box(0);
v_a_1788_ = lean_array_uget_borrowed(v_as_1772_, v_i_1774_);
v___x_1789_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__0));
lean_inc_ref(v___x_1771_);
v___x_1790_ = l_Lake_joinRelative(v___x_1771_, v___x_1789_);
lean_inc(v_a_1788_);
v___x_1791_ = l_Lake_joinRelative(v___x_1790_, v_a_1788_);
v___x_1792_ = l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(v___x_1791_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v___x_1794_; lean_object* v___x_1796_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref_known(v___x_1792_, 1);
v___x_1794_ = l_Lake_BuildTrace_mix(v_snd_1783_, v_a_1793_);
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 1, v___x_1794_);
lean_ctor_set(v___x_1785_, 0, v___x_1787_);
v___x_1796_ = v___x_1785_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v___x_1787_);
lean_ctor_set(v_reuseFailAlloc_1797_, 1, v___x_1794_);
v___x_1796_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
v_a_1778_ = v___x_1796_;
goto v___jp_1777_;
}
}
else
{
lean_object* v_a_1798_; 
v_a_1798_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1798_);
lean_dec_ref_known(v___x_1792_, 1);
if (lean_obj_tag(v_a_1798_) == 11)
{
lean_object* v___x_1800_; 
lean_dec_ref_known(v_a_1798_, 2);
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 0, v___x_1787_);
v___x_1800_ = v___x_1785_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v___x_1787_);
lean_ctor_set(v_reuseFailAlloc_1801_, 1, v_snd_1783_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
v_a_1778_ = v___x_1800_;
goto v___jp_1777_;
}
}
else
{
lean_object* v___x_1802_; lean_object* v___x_1804_; 
lean_dec(v_a_1798_);
lean_dec_ref(v___x_1771_);
v___x_1802_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__1));
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 0, v___x_1802_);
v___x_1804_ = v___x_1785_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v___x_1802_);
lean_ctor_set(v_reuseFailAlloc_1805_, 1, v_snd_1783_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
}
}
v___jp_1777_:
{
size_t v___x_1779_; size_t v___x_1780_; 
v___x_1779_ = ((size_t)1ULL);
v___x_1780_ = lean_usize_add(v_i_1774_, v___x_1779_);
v_i_1774_ = v___x_1780_;
v_b_1775_ = v_a_1778_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___boxed(lean_object* v___x_1808_, lean_object* v_as_1809_, lean_object* v_sz_1810_, lean_object* v_i_1811_, lean_object* v_b_1812_, lean_object* v___y_1813_){
_start:
{
size_t v_sz_boxed_1814_; size_t v_i_boxed_1815_; lean_object* v_res_1816_; 
v_sz_boxed_1814_ = lean_unbox_usize(v_sz_1810_);
lean_dec(v_sz_1810_);
v_i_boxed_1815_ = lean_unbox_usize(v_i_1811_);
lean_dec(v_i_1811_);
v_res_1816_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(v___x_1808_, v_as_1809_, v_sz_boxed_1814_, v_i_boxed_1815_, v_b_1812_);
lean_dec_ref(v_as_1809_);
return v_res_1816_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1819_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__1));
v___x_1820_ = l_Lake_BuildTrace_nil(v___x_1819_);
return v___x_1820_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8(void){
_start:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1835_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2);
v___x_1836_ = lean_box(0);
v___x_1837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
lean_ctor_set(v___x_1837_, 1, v___x_1835_);
return v___x_1837_;
}
}
static size_t _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9(void){
_start:
{
lean_object* v___x_1838_; size_t v_sz_1839_; 
v___x_1838_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7));
v_sz_1839_ = lean_array_size(v___x_1838_);
return v_sz_1839_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(size_t v_sz_1840_, size_t v_i_1841_, lean_object* v_bs_1842_){
_start:
{
uint8_t v___x_1844_; 
v___x_1844_ = lean_usize_dec_lt(v_i_1841_, v_sz_1840_);
if (v___x_1844_ == 0)
{
return v_bs_1842_;
}
else
{
lean_object* v_v_1845_; lean_object* v_config_1846_; lean_object* v_dir_1847_; uint8_t v_bootstrap_1848_; lean_object* v_buildDir_1849_; lean_object* v___x_1850_; lean_object* v_bs_x27_1851_; lean_object* v_val_1853_; 
v_v_1845_ = lean_array_uget_borrowed(v_bs_1842_, v_i_1841_);
v_config_1846_ = lean_ctor_get(v_v_1845_, 6);
v_dir_1847_ = lean_ctor_get(v_v_1845_, 4);
lean_inc_ref(v_dir_1847_);
v_bootstrap_1848_ = lean_ctor_get_uint8(v_config_1846_, sizeof(void*)*28);
v_buildDir_1849_ = lean_ctor_get(v_config_1846_, 5);
lean_inc_ref(v_buildDir_1849_);
v___x_1850_ = lean_unsigned_to_nat(0u);
v_bs_x27_1851_ = lean_array_uset(v_bs_1842_, v_i_1841_, v___x_1850_);
if (v_bootstrap_1848_ == 0)
{
lean_object* v___x_1858_; 
lean_dec_ref(v_buildDir_1849_);
lean_dec_ref(v_dir_1847_);
v___x_1858_ = lean_box(0);
v_val_1853_ = v___x_1858_;
goto v___jp_1852_;
}
else
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; size_t v_sz_1865_; size_t v___x_1866_; lean_object* v___x_1867_; lean_object* v_fst_1868_; 
v___x_1859_ = l_System_FilePath_normalize(v_buildDir_1849_);
v___x_1860_ = l_Lake_joinRelative(v_dir_1847_, v___x_1859_);
v___x_1861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__0));
v___x_1862_ = l_Lake_joinRelative(v___x_1860_, v___x_1861_);
v___x_1863_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7));
v___x_1864_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8);
v_sz_1865_ = lean_usize_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9);
v___x_1866_ = ((size_t)0ULL);
lean_inc_ref(v___x_1862_);
v___x_1867_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(v___x_1862_, v___x_1863_, v_sz_1865_, v___x_1866_, v___x_1864_);
v_fst_1868_ = lean_ctor_get(v___x_1867_, 0);
lean_inc(v_fst_1868_);
if (lean_obj_tag(v_fst_1868_) == 0)
{
lean_object* v_snd_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1877_; 
v_snd_1869_ = lean_ctor_get(v___x_1867_, 1);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1877_ == 0)
{
lean_object* v_unused_1878_; 
v_unused_1878_ = lean_ctor_get(v___x_1867_, 0);
lean_dec(v_unused_1878_);
v___x_1871_ = v___x_1867_;
v_isShared_1872_ = v_isSharedCheck_1877_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_snd_1869_);
lean_dec(v___x_1867_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1877_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1874_; 
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 0, v___x_1862_);
v___x_1874_ = v___x_1871_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v___x_1862_);
lean_ctor_set(v_reuseFailAlloc_1876_, 1, v_snd_1869_);
v___x_1874_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
lean_object* v___x_1875_; 
v___x_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
v_val_1853_ = v___x_1875_;
goto v___jp_1852_;
}
}
}
else
{
lean_object* v_val_1879_; 
lean_dec_ref(v___x_1867_);
lean_dec_ref(v___x_1862_);
v_val_1879_ = lean_ctor_get(v_fst_1868_, 0);
lean_inc(v_val_1879_);
lean_dec_ref_known(v_fst_1868_, 1);
v_val_1853_ = v_val_1879_;
goto v___jp_1852_;
}
}
v___jp_1852_:
{
size_t v___x_1854_; size_t v___x_1855_; lean_object* v___x_1856_; 
v___x_1854_ = ((size_t)1ULL);
v___x_1855_ = lean_usize_add(v_i_1841_, v___x_1854_);
v___x_1856_ = lean_array_uset(v_bs_x27_1851_, v_i_1841_, v_val_1853_);
v_i_1841_ = v___x_1855_;
v_bs_1842_ = v___x_1856_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___boxed(lean_object* v_sz_1880_, lean_object* v_i_1881_, lean_object* v_bs_1882_, lean_object* v___y_1883_){
_start:
{
size_t v_sz_boxed_1884_; size_t v_i_boxed_1885_; lean_object* v_res_1886_; 
v_sz_boxed_1884_ = lean_unbox_usize(v_sz_1880_);
lean_dec(v_sz_1880_);
v_i_boxed_1885_ = lean_unbox_usize(v_i_1881_);
lean_dec(v_i_1881_);
v_res_1886_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(v_sz_boxed_1884_, v_i_boxed_1885_, v_bs_1882_);
return v_res_1886_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1(void){
_start:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v___x_1888_ = l_Lean_versionStringCore;
v___x_1889_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__0));
v___x_1890_ = lean_string_append(v___x_1889_, v___x_1888_);
return v___x_1890_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3(void){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1892_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__2));
v___x_1893_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1);
v___x_1894_ = lean_string_append(v___x_1893_, v___x_1892_);
return v___x_1894_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4(void){
_start:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1895_ = lean_unsigned_to_nat(0u);
v___x_1896_ = lean_nat_to_int(v___x_1895_);
return v___x_1896_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5(void){
_start:
{
uint32_t v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1897_ = 0;
v___x_1898_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4);
v___x_1899_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_1899_, 0, v___x_1898_);
lean_ctor_set_uint32(v___x_1899_, sizeof(void*)*1, v___x_1897_);
return v___x_1899_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6(void){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1900_ = lean_box(0);
v___x_1901_ = lean_unsigned_to_nat(16u);
v___x_1902_ = lean_mk_array(v___x_1901_, v___x_1900_);
return v___x_1902_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7(void){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1903_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6);
v___x_1904_ = lean_unsigned_to_nat(0u);
v___x_1905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1904_);
lean_ctor_set(v___x_1905_, 1, v___x_1903_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext(lean_object* v_ws_1908_, lean_object* v_cfg_1909_, lean_object* v_jobs_1910_, lean_object* v_cancelTk_x3f_1911_){
_start:
{
uint8_t v___y_1914_; lean_object* v___y_1915_; uint8_t v___y_1916_; uint8_t v___y_1917_; lean_object* v___y_1918_; uint8_t v___y_1919_; uint8_t v___y_1920_; uint8_t v___y_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v_val_1924_; lean_object* v_val_1942_; uint8_t v___x_1964_; 
v___x_1964_ = l_System_Platform_isOSX;
if (v___x_1964_ == 0)
{
lean_object* v_macosxDeploymentTarget_x3f_1965_; 
v_macosxDeploymentTarget_x3f_1965_ = lean_ctor_get(v_cfg_1909_, 3);
lean_inc(v_macosxDeploymentTarget_x3f_1965_);
v_val_1942_ = v_macosxDeploymentTarget_x3f_1965_;
goto v___jp_1941_;
}
else
{
lean_object* v_macosxDeploymentTarget_x3f_1966_; 
v_macosxDeploymentTarget_x3f_1966_ = lean_ctor_get(v_cfg_1909_, 3);
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_1966_) == 0)
{
lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___y_1970_; 
v___x_1967_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__8));
v___x_1968_ = lean_io_getenv(v___x_1967_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v___x_1972_; 
v___x_1972_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__9));
v___y_1970_ = v___x_1972_;
goto v___jp_1969_;
}
else
{
lean_object* v_val_1973_; 
v_val_1973_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_val_1973_);
lean_dec_ref_known(v___x_1968_, 1);
v___y_1970_ = v_val_1973_;
goto v___jp_1969_;
}
v___jp_1969_:
{
lean_object* v___x_1971_; 
v___x_1971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1971_, 0, v___y_1970_);
v_val_1942_ = v___x_1971_;
goto v___jp_1941_;
}
}
else
{
lean_inc_ref(v_macosxDeploymentTarget_x3f_1966_);
v_val_1942_ = v_macosxDeploymentTarget_x3f_1966_;
goto v___jp_1941_;
}
}
v___jp_1913_:
{
lean_object* v_lakeEnv_1925_; lean_object* v_packages_1926_; size_t v_sz_1927_; size_t v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; uint64_t v___x_1932_; uint64_t v___x_1933_; uint64_t v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v_lakeEnv_1925_ = lean_ctor_get(v_ws_1908_, 0);
v_packages_1926_ = lean_ctor_get(v_ws_1908_, 4);
v_sz_1927_ = lean_array_size(v_packages_1926_);
v___x_1928_ = ((size_t)0ULL);
lean_inc_ref(v_packages_1926_);
v___x_1929_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(v_sz_1927_, v___x_1928_, v_packages_1926_);
v___x_1930_ = lean_alloc_ctor(0, 4, 6);
lean_ctor_set(v___x_1930_, 0, v___y_1918_);
lean_ctor_set(v___x_1930_, 1, v___y_1915_);
lean_ctor_set(v___x_1930_, 2, v___y_1923_);
lean_ctor_set(v___x_1930_, 3, v___y_1922_);
lean_ctor_set_uint8(v___x_1930_, sizeof(void*)*4, v___y_1914_);
lean_ctor_set_uint8(v___x_1930_, sizeof(void*)*4 + 1, v___y_1921_);
lean_ctor_set_uint8(v___x_1930_, sizeof(void*)*4 + 2, v___y_1916_);
lean_ctor_set_uint8(v___x_1930_, sizeof(void*)*4 + 3, v___y_1917_);
lean_ctor_set_uint8(v___x_1930_, sizeof(void*)*4 + 4, v___y_1919_);
lean_ctor_set_uint8(v___x_1930_, sizeof(void*)*4 + 5, v___y_1920_);
v___x_1931_ = l_Lake_Env_leanGithash(v_lakeEnv_1925_);
v___x_1932_ = l_Lake_Hash_nil;
v___x_1933_ = lean_string_hash(v___x_1931_);
v___x_1934_ = lean_uint64_mix_hash(v___x_1932_, v___x_1933_);
v___x_1935_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3);
v___x_1936_ = lean_string_append(v___x_1935_, v___x_1931_);
lean_dec_ref(v___x_1931_);
v___x_1937_ = ((lean_object*)(l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0));
v___x_1938_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5);
v___x_1939_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1939_, 0, v___x_1936_);
lean_ctor_set(v___x_1939_, 1, v___x_1937_);
lean_ctor_set(v___x_1939_, 2, v___x_1938_);
lean_ctor_set_uint64(v___x_1939_, sizeof(void*)*3, v___x_1934_);
v___x_1940_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1930_);
lean_ctor_set(v___x_1940_, 1, v_ws_1908_);
lean_ctor_set(v___x_1940_, 2, v___x_1939_);
lean_ctor_set(v___x_1940_, 3, v___x_1929_);
lean_ctor_set(v___x_1940_, 4, v_jobs_1910_);
lean_ctor_set(v___x_1940_, 5, v_val_1924_);
lean_ctor_set(v___x_1940_, 6, v_cancelTk_x3f_1911_);
return v___x_1940_;
}
v___jp_1941_:
{
lean_object* v_outputsFile_x3f_1943_; 
v_outputsFile_x3f_1943_ = lean_ctor_get(v_cfg_1909_, 1);
lean_inc(v_outputsFile_x3f_1943_);
if (lean_obj_tag(v_outputsFile_x3f_1943_) == 0)
{
lean_object* v_toLogConfig_1944_; uint8_t v_oldMode_1945_; uint8_t v_trustHash_1946_; uint8_t v_noBuild_1947_; uint8_t v_failFast_1948_; uint8_t v_verbosity_1949_; uint8_t v_showSuccess_1950_; lean_object* v_leanOptOverrides_1951_; lean_object* v___x_1952_; 
v_toLogConfig_1944_ = lean_ctor_get(v_cfg_1909_, 0);
lean_inc_ref(v_toLogConfig_1944_);
v_oldMode_1945_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4);
v_trustHash_1946_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4 + 1);
v_noBuild_1947_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4 + 2);
v_failFast_1948_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4 + 3);
v_verbosity_1949_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4 + 4);
v_showSuccess_1950_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4 + 5);
v_leanOptOverrides_1951_ = lean_ctor_get(v_cfg_1909_, 2);
lean_inc(v_leanOptOverrides_1951_);
lean_dec_ref(v_cfg_1909_);
v___x_1952_ = lean_box(0);
v___y_1914_ = v_oldMode_1945_;
v___y_1915_ = v_outputsFile_x3f_1943_;
v___y_1916_ = v_noBuild_1947_;
v___y_1917_ = v_failFast_1948_;
v___y_1918_ = v_toLogConfig_1944_;
v___y_1919_ = v_verbosity_1949_;
v___y_1920_ = v_showSuccess_1950_;
v___y_1921_ = v_trustHash_1946_;
v___y_1922_ = v_val_1942_;
v___y_1923_ = v_leanOptOverrides_1951_;
v_val_1924_ = v___x_1952_;
goto v___jp_1913_;
}
else
{
lean_object* v_toLogConfig_1953_; uint8_t v_oldMode_1954_; uint8_t v_trustHash_1955_; uint8_t v_noBuild_1956_; uint8_t v_failFast_1957_; uint8_t v_verbosity_1958_; uint8_t v_showSuccess_1959_; lean_object* v_leanOptOverrides_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
v_toLogConfig_1953_ = lean_ctor_get(v_cfg_1909_, 0);
lean_inc_ref(v_toLogConfig_1953_);
v_oldMode_1954_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4);
v_trustHash_1955_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4 + 1);
v_noBuild_1956_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4 + 2);
v_failFast_1957_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4 + 3);
v_verbosity_1958_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4 + 4);
v_showSuccess_1959_ = lean_ctor_get_uint8(v_cfg_1909_, sizeof(void*)*4 + 5);
v_leanOptOverrides_1960_ = lean_ctor_get(v_cfg_1909_, 2);
lean_inc(v_leanOptOverrides_1960_);
lean_dec_ref(v_cfg_1909_);
v___x_1961_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7);
v___x_1962_ = lean_st_mk_ref(v___x_1961_);
v___x_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
v___y_1914_ = v_oldMode_1954_;
v___y_1915_ = v_outputsFile_x3f_1943_;
v___y_1916_ = v_noBuild_1956_;
v___y_1917_ = v_failFast_1957_;
v___y_1918_ = v_toLogConfig_1953_;
v___y_1919_ = v_verbosity_1958_;
v___y_1920_ = v_showSuccess_1959_;
v___y_1921_ = v_trustHash_1955_;
v___y_1922_ = v_val_1942_;
v___y_1923_ = v_leanOptOverrides_1960_;
v_val_1924_ = v___x_1963_;
goto v___jp_1913_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___boxed(lean_object* v_ws_1974_, lean_object* v_cfg_1975_, lean_object* v_jobs_1976_, lean_object* v_cancelTk_x3f_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_1974_, v_cfg_1975_, v_jobs_1976_, v_cancelTk_x3f_1977_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0(lean_object* v_build_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_){
_start:
{
lean_object* v_log_1988_; uint8_t v_action_1989_; uint8_t v_wantsRebuild_1990_; lean_object* v_trace_1991_; lean_object* v_buildTime_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2021_; 
v_log_1988_ = lean_ctor_get(v___y_1986_, 0);
v_action_1989_ = lean_ctor_get_uint8(v___y_1986_, sizeof(void*)*3);
v_wantsRebuild_1990_ = lean_ctor_get_uint8(v___y_1986_, sizeof(void*)*3 + 1);
v_trace_1991_ = lean_ctor_get(v___y_1986_, 1);
v_buildTime_1992_ = lean_ctor_get(v___y_1986_, 2);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___y_1986_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_1994_ = v___y_1986_;
v_isShared_1995_ = v_isSharedCheck_2021_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_buildTime_1992_);
lean_inc(v_trace_1991_);
lean_inc(v_log_1988_);
lean_dec(v___y_1986_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2021_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1996_; 
v___x_1996_ = lean_apply_7(v_build_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v_log_1988_, lean_box(0));
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2008_; 
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
v_a_1998_ = lean_ctor_get(v___x_1996_, 1);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_2000_ = v___x_1996_;
v_isShared_2001_ = v_isSharedCheck_2008_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_inc(v_a_1997_);
lean_dec(v___x_1996_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2008_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v_a_1998_);
v___x_2003_ = v___x_1994_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_a_1998_);
lean_ctor_set(v_reuseFailAlloc_2007_, 1, v_trace_1991_);
lean_ctor_set(v_reuseFailAlloc_2007_, 2, v_buildTime_1992_);
lean_ctor_set_uint8(v_reuseFailAlloc_2007_, sizeof(void*)*3, v_action_1989_);
lean_ctor_set_uint8(v_reuseFailAlloc_2007_, sizeof(void*)*3 + 1, v_wantsRebuild_1990_);
v___x_2003_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
lean_object* v___x_2005_; 
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 1, v___x_2003_);
v___x_2005_ = v___x_2000_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_1997_);
lean_ctor_set(v_reuseFailAlloc_2006_, 1, v___x_2003_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
else
{
lean_object* v_a_2009_; lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2020_; 
v_a_2009_ = lean_ctor_get(v___x_1996_, 0);
v_a_2010_ = lean_ctor_get(v___x_1996_, 1);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2012_ = v___x_1996_;
v_isShared_2013_ = v_isSharedCheck_2020_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_inc(v_a_2009_);
lean_dec(v___x_1996_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2020_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2015_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 0, v_a_2010_);
v___x_2015_ = v___x_1994_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2010_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v_trace_1991_);
lean_ctor_set(v_reuseFailAlloc_2019_, 2, v_buildTime_1992_);
lean_ctor_set_uint8(v_reuseFailAlloc_2019_, sizeof(void*)*3, v_action_1989_);
lean_ctor_set_uint8(v_reuseFailAlloc_2019_, sizeof(void*)*3 + 1, v_wantsRebuild_1990_);
v___x_2015_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
lean_object* v___x_2017_; 
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 1, v___x_2015_);
v___x_2017_ = v___x_2012_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2009_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v___x_2015_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0___boxed(lean_object* v_build_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_){
_start:
{
lean_object* v_res_2030_; 
v_res_2030_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0(v_build_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(lean_object* v_bctx_2032_, lean_object* v_build_2033_, lean_object* v_caption_2034_){
_start:
{
lean_object* v___f_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___f_2036_ = lean_alloc_closure((void*)(l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2036_, 0, v_build_2033_);
v___x_2037_ = lean_box(0);
v___x_2038_ = lean_unsigned_to_nat(0u);
v___x_2039_ = lean_box(0);
v___x_2040_ = lean_box(1);
v___x_2041_ = lean_box(0);
v___x_2042_ = lean_st_mk_ref(v___x_2040_);
v___x_2043_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0));
v___x_2044_ = l_Lake_Job_async___redArg(v___x_2037_, v___f_2036_, v___x_2038_, v_caption_2034_, v___x_2043_, v___x_2041_, v___x_2039_, v___x_2042_, v_bctx_2032_);
v___x_2045_ = lean_st_ref_get(v___x_2042_);
lean_dec(v___x_2042_);
lean_dec(v___x_2045_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___boxed(lean_object* v_bctx_2046_, lean_object* v_build_2047_, lean_object* v_caption_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v_bctx_2046_, v_build_2047_, v_caption_2048_);
lean_dec_ref(v_bctx_2046_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild(lean_object* v_00_u03b1_2051_, lean_object* v_bctx_2052_, lean_object* v_build_2053_, lean_object* v_caption_2054_){
_start:
{
lean_object* v___x_2056_; 
v___x_2056_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v_bctx_2052_, v_build_2053_, v_caption_2054_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___boxed(lean_object* v_00_u03b1_2057_, lean_object* v_bctx_2058_, lean_object* v_build_2059_, lean_object* v_caption_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild(v_00_u03b1_2057_, v_bctx_2058_, v_build_2059_, v_caption_2060_);
lean_dec_ref(v_bctx_2058_);
return v_res_2062_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(lean_object* v_x_2063_, lean_object* v_x_2064_){
_start:
{
if (lean_obj_tag(v_x_2063_) == 0)
{
if (lean_obj_tag(v_x_2064_) == 0)
{
uint8_t v___x_2065_; 
v___x_2065_ = 1;
return v___x_2065_;
}
else
{
uint8_t v___x_2066_; 
v___x_2066_ = 0;
return v___x_2066_;
}
}
else
{
if (lean_obj_tag(v_x_2064_) == 0)
{
uint8_t v___x_2067_; 
v___x_2067_ = 0;
return v___x_2067_;
}
else
{
lean_object* v_val_2068_; uint8_t v___x_2069_; 
v_val_2068_ = lean_ctor_get(v_x_2064_, 0);
v___x_2069_ = lean_unbox(v_val_2068_);
if (v___x_2069_ == 0)
{
lean_object* v_val_2070_; uint8_t v___x_2071_; 
v_val_2070_ = lean_ctor_get(v_x_2063_, 0);
v___x_2071_ = lean_unbox(v_val_2070_);
if (v___x_2071_ == 0)
{
uint8_t v___x_2072_; 
v___x_2072_ = 1;
return v___x_2072_;
}
else
{
uint8_t v___x_2073_; 
v___x_2073_ = lean_unbox(v_val_2068_);
return v___x_2073_;
}
}
else
{
lean_object* v_val_2074_; uint8_t v___x_2075_; 
v_val_2074_ = lean_ctor_get(v_x_2063_, 0);
v___x_2075_ = lean_unbox(v_val_2074_);
return v___x_2075_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0___boxed(lean_object* v_x_2076_, lean_object* v_x_2077_){
_start:
{
uint8_t v_res_2078_; lean_object* v_r_2079_; 
v_res_2078_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(v_x_2076_, v_x_2077_);
lean_dec(v_x_2077_);
lean_dec(v_x_2076_);
v_r_2079_ = lean_box(v_res_2078_);
return v_r_2079_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(lean_object* v___x_2080_, uint8_t v___x_2081_, uint8_t v___x_2082_, lean_object* v_as_2083_, size_t v_i_2084_, size_t v_stop_2085_, lean_object* v_b_2086_){
_start:
{
uint8_t v___x_2088_; 
v___x_2088_ = lean_usize_dec_eq(v_i_2084_, v_stop_2085_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; lean_object* v___x_2090_; size_t v___x_2091_; size_t v___x_2092_; 
v___x_2089_ = lean_array_uget_borrowed(v_as_2083_, v_i_2084_);
lean_inc_ref(v___x_2080_);
v___x_2090_ = l_Lake_logToStream(v___x_2089_, v___x_2080_, v___x_2081_, v___x_2082_);
v___x_2091_ = ((size_t)1ULL);
v___x_2092_ = lean_usize_add(v_i_2084_, v___x_2091_);
v_i_2084_ = v___x_2092_;
v_b_2086_ = v___x_2090_;
goto _start;
}
else
{
lean_dec_ref(v___x_2080_);
return v_b_2086_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1___boxed(lean_object* v___x_2094_, lean_object* v___x_2095_, lean_object* v___x_2096_, lean_object* v_as_2097_, lean_object* v_i_2098_, lean_object* v_stop_2099_, lean_object* v_b_2100_, lean_object* v___y_2101_){
_start:
{
uint8_t v___x_1441__boxed_2102_; uint8_t v___x_1442__boxed_2103_; size_t v_i_boxed_2104_; size_t v_stop_boxed_2105_; lean_object* v_res_2106_; 
v___x_1441__boxed_2102_ = lean_unbox(v___x_2095_);
v___x_1442__boxed_2103_ = lean_unbox(v___x_2096_);
v_i_boxed_2104_ = lean_unbox_usize(v_i_2098_);
lean_dec(v_i_2098_);
v_stop_boxed_2105_ = lean_unbox_usize(v_stop_2099_);
lean_dec(v_stop_2099_);
v_res_2106_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2094_, v___x_1441__boxed_2102_, v___x_1442__boxed_2103_, v_as_2097_, v_i_boxed_2104_, v_stop_boxed_2105_, v_b_2100_);
lean_dec_ref(v_as_2097_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(lean_object* v___x_2107_, uint8_t v___x_2108_, uint8_t v___x_2109_, lean_object* v_ws_2110_, lean_object* v_outputsRef_x3f_2111_, lean_object* v_out_2112_, lean_object* v_outputsFile_2113_, uint8_t v_isVerbose_2114_){
_start:
{
lean_object* v___y_2119_; lean_object* v___y_2120_; lean_object* v___y_2128_; lean_object* v___y_2129_; uint8_t v___x_2211_; 
v___x_2211_ = l_Lake_Workspace_isRootArtifactCacheWritable(v_ws_2110_);
if (v___x_2211_ == 0)
{
lean_object* v_packages_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v_baseName_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; uint8_t v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v_packages_2212_ = lean_ctor_get(v_ws_2110_, 4);
v___x_2213_ = lean_unsigned_to_nat(0u);
v___x_2214_ = lean_array_fget_borrowed(v_packages_2212_, v___x_2213_);
v_baseName_2215_ = lean_ctor_get(v___x_2214_, 1);
lean_inc(v_baseName_2215_);
v___x_2216_ = l_Lean_Name_toString(v_baseName_2215_, v___x_2211_);
v___x_2217_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__16));
v___x_2218_ = lean_string_append(v___x_2216_, v___x_2217_);
v___x_2219_ = 2;
v___x_2220_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2220_, 0, v___x_2218_);
lean_ctor_set_uint8(v___x_2220_, sizeof(void*)*1, v___x_2219_);
lean_inc_ref(v___x_2107_);
v___x_2221_ = l_Lake_logToStream(v___x_2220_, v___x_2107_, v___x_2108_, v___x_2109_);
lean_dec_ref_known(v___x_2220_, 1);
goto v___jp_2137_;
}
else
{
goto v___jp_2137_;
}
v___jp_2116_:
{
lean_object* v___x_2117_; 
v___x_2117_ = lean_box(0);
return v___x_2117_;
}
v___jp_2118_:
{
lean_object* v___x_2121_; lean_object* v___x_2122_; uint8_t v___x_2123_; 
v___x_2121_ = lean_array_get_size(v___y_2119_);
v___x_2122_ = lean_box(0);
v___x_2123_ = lean_nat_dec_lt(v___y_2120_, v___x_2121_);
if (v___x_2123_ == 0)
{
lean_dec_ref(v___y_2119_);
lean_dec_ref(v___x_2107_);
return v___x_2122_;
}
else
{
size_t v___x_2124_; size_t v___x_2125_; lean_object* v___x_2126_; 
v___x_2124_ = ((size_t)0ULL);
v___x_2125_ = lean_usize_of_nat(v___x_2121_);
v___x_2126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2107_, v___x_2108_, v___x_2109_, v___y_2119_, v___x_2124_, v___x_2125_, v___x_2122_);
lean_dec_ref(v___y_2119_);
return v___x_2126_;
}
}
v___jp_2127_:
{
if (v_isVerbose_2114_ == 0)
{
lean_object* v___x_2130_; 
lean_dec_ref(v___y_2128_);
lean_dec_ref(v___x_2107_);
v___x_2130_ = lean_box(0);
return v___x_2130_;
}
else
{
lean_object* v___x_2131_; lean_object* v___x_2132_; uint8_t v___x_2133_; 
v___x_2131_ = lean_array_get_size(v___y_2128_);
v___x_2132_ = lean_box(0);
v___x_2133_ = lean_nat_dec_lt(v___y_2129_, v___x_2131_);
if (v___x_2133_ == 0)
{
lean_dec_ref(v___y_2128_);
lean_dec_ref(v___x_2107_);
return v___x_2132_;
}
else
{
size_t v___x_2134_; size_t v___x_2135_; lean_object* v___x_2136_; 
v___x_2134_ = ((size_t)0ULL);
v___x_2135_ = lean_usize_of_nat(v___x_2131_);
v___x_2136_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2107_, v___x_2108_, v___x_2109_, v___y_2128_, v___x_2134_, v___x_2135_, v___x_2132_);
lean_dec_ref(v___y_2128_);
return v___x_2136_;
}
}
}
v___jp_2137_:
{
if (lean_obj_tag(v_outputsRef_x3f_2111_) == 1)
{
lean_object* v_val_2138_; lean_object* v___x_2139_; lean_object* v_packages_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v_config_2143_; lean_object* v_toLeanConfig_2144_; lean_object* v_platformIndependent_2145_; lean_object* v___x_2146_; uint8_t v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v_val_2138_ = lean_ctor_get(v_outputsRef_x3f_2111_, 0);
v___x_2139_ = lean_st_ref_get(v_val_2138_);
v_packages_2140_ = lean_ctor_get(v_ws_2110_, 4);
v___x_2141_ = lean_unsigned_to_nat(0u);
v___x_2142_ = lean_array_fget_borrowed(v_packages_2140_, v___x_2141_);
v_config_2143_ = lean_ctor_get(v___x_2142_, 6);
v_toLeanConfig_2144_ = lean_ctor_get(v_config_2143_, 1);
v_platformIndependent_2145_ = lean_ctor_get(v_toLeanConfig_2144_, 10);
v___x_2146_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__2));
v___x_2147_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(v_platformIndependent_2145_, v___x_2146_);
v___x_2148_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__3));
v___x_2149_ = l_Lake_CacheMap_writeFile(v_outputsFile_2113_, v___x_2139_, v___x_2147_, v___x_2148_);
if (lean_obj_tag(v___x_2149_) == 0)
{
lean_object* v_a_2150_; lean_object* v___x_2151_; uint8_t v___x_2152_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 1);
lean_inc(v_a_2150_);
lean_dec_ref_known(v___x_2149_, 2);
v___x_2151_ = lean_array_get_size(v_a_2150_);
v___x_2152_ = lean_nat_dec_eq(v___x_2151_, v___x_2141_);
if (v___x_2152_ == 0)
{
if (v_isVerbose_2114_ == 0)
{
lean_dec(v_a_2150_);
lean_dec_ref(v_out_2112_);
lean_dec_ref(v___x_2107_);
goto v___jp_2116_;
}
else
{
lean_object* v_putStr_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v_putStr_2153_ = lean_ctor_get(v_out_2112_, 4);
lean_inc_ref(v_putStr_2153_);
lean_dec_ref(v_out_2112_);
v___x_2154_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__4));
v___x_2155_ = lean_apply_2(v_putStr_2153_, v___x_2154_, lean_box(0));
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_dec_ref_known(v___x_2155_, 1);
v___y_2119_ = v_a_2150_;
v___y_2120_ = v___x_2141_;
goto v___jp_2118_;
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_a_2156_);
lean_dec_ref_known(v___x_2155_, 1);
v___x_2157_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_2158_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_2159_ = lean_unsigned_to_nat(82u);
v___x_2160_ = lean_unsigned_to_nat(4u);
v___x_2161_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__14));
v___x_2162_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__26));
v___x_2163_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2162_, v_isVerbose_2114_);
v___x_2164_ = lean_string_append(v___x_2161_, v___x_2163_);
lean_dec_ref(v___x_2163_);
v___x_2165_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__29));
v___x_2166_ = lean_string_append(v___x_2164_, v___x_2165_);
v___x_2167_ = lean_io_error_to_string(v_a_2156_);
v___x_2168_ = lean_string_append(v___x_2166_, v___x_2167_);
lean_dec_ref(v___x_2167_);
v___x_2169_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_2170_ = lean_string_append(v___x_2168_, v___x_2169_);
v___x_2171_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7);
v___x_2172_ = lean_string_append(v___x_2170_, v___x_2171_);
v___x_2173_ = l_mkPanicMessageWithDecl(v___x_2157_, v___x_2158_, v___x_2159_, v___x_2160_, v___x_2172_);
lean_dec_ref(v___x_2172_);
v___x_2174_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2173_);
v___y_2119_ = v_a_2150_;
v___y_2120_ = v___x_2141_;
goto v___jp_2118_;
}
}
}
else
{
lean_dec(v_a_2150_);
lean_dec_ref(v_out_2112_);
lean_dec_ref(v___x_2107_);
goto v___jp_2116_;
}
}
else
{
lean_object* v_a_2175_; lean_object* v_putStr_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v_a_2175_ = lean_ctor_get(v___x_2149_, 1);
lean_inc(v_a_2175_);
lean_dec_ref_known(v___x_2149_, 2);
v_putStr_2176_ = lean_ctor_get(v_out_2112_, 4);
lean_inc_ref(v_putStr_2176_);
lean_dec_ref(v_out_2112_);
v___x_2177_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__8));
v___x_2178_ = lean_apply_2(v_putStr_2176_, v___x_2177_, lean_box(0));
if (lean_obj_tag(v___x_2178_) == 0)
{
lean_dec_ref_known(v___x_2178_, 1);
v___y_2128_ = v_a_2175_;
v___y_2129_ = v___x_2141_;
goto v___jp_2127_;
}
else
{
lean_object* v_a_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
lean_inc(v_a_2179_);
lean_dec_ref_known(v___x_2178_, 1);
v___x_2180_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_2181_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_2182_ = lean_unsigned_to_nat(82u);
v___x_2183_ = lean_unsigned_to_nat(4u);
v___x_2184_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__30, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__30_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__30);
v___x_2185_ = lean_io_error_to_string(v_a_2179_);
v___x_2186_ = lean_string_append(v___x_2184_, v___x_2185_);
lean_dec_ref(v___x_2185_);
v___x_2187_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_2188_ = lean_string_append(v___x_2186_, v___x_2187_);
v___x_2189_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11);
v___x_2190_ = lean_string_append(v___x_2188_, v___x_2189_);
v___x_2191_ = l_mkPanicMessageWithDecl(v___x_2180_, v___x_2181_, v___x_2182_, v___x_2183_, v___x_2190_);
lean_dec_ref(v___x_2190_);
v___x_2192_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2191_);
v___y_2128_ = v_a_2175_;
v___y_2129_ = v___x_2141_;
goto v___jp_2127_;
}
}
}
else
{
lean_object* v_putStr_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
lean_dec_ref(v_outputsFile_2113_);
lean_dec_ref(v___x_2107_);
v_putStr_2193_ = lean_ctor_get(v_out_2112_, 4);
lean_inc_ref(v_putStr_2193_);
lean_dec_ref(v_out_2112_);
v___x_2194_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__12));
v___x_2195_ = lean_apply_2(v_putStr_2193_, v___x_2194_, lean_box(0));
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v_a_2196_; 
v_a_2196_ = lean_ctor_get(v___x_2195_, 0);
lean_inc(v_a_2196_);
lean_dec_ref_known(v___x_2195_, 1);
return v_a_2196_;
}
else
{
lean_object* v_a_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v_a_2197_ = lean_ctor_get(v___x_2195_, 0);
lean_inc(v_a_2197_);
lean_dec_ref_known(v___x_2195_, 1);
v___x_2198_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__12));
v___x_2199_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__13));
v___x_2200_ = lean_unsigned_to_nat(82u);
v___x_2201_ = lean_unsigned_to_nat(4u);
v___x_2202_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__30, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__30_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__30);
v___x_2203_ = lean_io_error_to_string(v_a_2197_);
v___x_2204_ = lean_string_append(v___x_2202_, v___x_2203_);
lean_dec_ref(v___x_2203_);
v___x_2205_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__31));
v___x_2206_ = lean_string_append(v___x_2204_, v___x_2205_);
v___x_2207_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15);
v___x_2208_ = lean_string_append(v___x_2206_, v___x_2207_);
v___x_2209_ = l_mkPanicMessageWithDecl(v___x_2198_, v___x_2199_, v___x_2200_, v___x_2201_, v___x_2208_);
lean_dec_ref(v___x_2208_);
v___x_2210_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2209_);
return v___x_2210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0___boxed(lean_object* v___x_2222_, lean_object* v___x_2223_, lean_object* v___x_2224_, lean_object* v_ws_2225_, lean_object* v_outputsRef_x3f_2226_, lean_object* v_out_2227_, lean_object* v_outputsFile_2228_, lean_object* v_isVerbose_2229_, lean_object* v___y_2230_){
_start:
{
uint8_t v___x_1611__boxed_2231_; uint8_t v___x_1612__boxed_2232_; uint8_t v_isVerbose_boxed_2233_; lean_object* v_res_2234_; 
v___x_1611__boxed_2231_ = lean_unbox(v___x_2223_);
v___x_1612__boxed_2232_ = lean_unbox(v___x_2224_);
v_isVerbose_boxed_2233_ = lean_unbox(v_isVerbose_2229_);
v_res_2234_ = l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(v___x_2222_, v___x_1611__boxed_2231_, v___x_1612__boxed_2232_, v_ws_2225_, v_outputsRef_x3f_2226_, v_out_2227_, v_outputsFile_2228_, v_isVerbose_boxed_2233_);
lean_dec(v_outputsRef_x3f_2226_);
lean_dec_ref(v_ws_2225_);
return v_res_2234_;
}
}
static uint8_t _init_l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0(void){
_start:
{
uint32_t v___x_2235_; uint8_t v___x_2236_; 
v___x_2235_ = 3;
v___x_2236_ = lean_uint32_to_uint8(v___x_2235_);
return v___x_2236_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(lean_object* v_cfg_2237_, lean_object* v_bctx_2238_, lean_object* v_mctx_2239_, lean_object* v_result_2240_){
_start:
{
lean_object* v___y_2243_; lean_object* v_out_2246_; uint8_t v_outLv_2247_; uint8_t v_useAnsi_2248_; lean_object* v_toMonitorResult_2249_; lean_object* v_out_2250_; lean_object* v___x_2266_; lean_object* v_outputsFile_x3f_2267_; 
v_out_2246_ = lean_ctor_get(v_mctx_2239_, 1);
lean_inc_ref_n(v_out_2246_, 2);
v_outLv_2247_ = lean_ctor_get_uint8(v_mctx_2239_, sizeof(void*)*4);
v_useAnsi_2248_ = lean_ctor_get_uint8(v_mctx_2239_, sizeof(void*)*4 + 4);
lean_dec_ref(v_mctx_2239_);
v_toMonitorResult_2249_ = lean_ctor_get(v_result_2240_, 0);
lean_inc_ref_n(v_toMonitorResult_2249_, 2);
v_out_2250_ = lean_ctor_get(v_result_2240_, 1);
lean_inc_ref(v_out_2250_);
lean_dec_ref(v_result_2240_);
v___x_2266_ = l___private_Lake_Build_Run_0__Lake_reportResult(v_cfg_2237_, v_out_2246_, v_toMonitorResult_2249_);
v_outputsFile_x3f_2267_ = lean_ctor_get(v_cfg_2237_, 1);
if (lean_obj_tag(v_outputsFile_x3f_2267_) == 1)
{
uint8_t v_verbosity_2268_; lean_object* v_val_2269_; lean_object* v_toContext_2270_; lean_object* v_outputsRef_x3f_2271_; uint8_t v___y_2273_; 
v_verbosity_2268_ = lean_ctor_get_uint8(v_cfg_2237_, sizeof(void*)*4 + 4);
v_val_2269_ = lean_ctor_get(v_outputsFile_x3f_2267_, 0);
v_toContext_2270_ = lean_ctor_get(v_bctx_2238_, 1);
v_outputsRef_x3f_2271_ = lean_ctor_get(v_bctx_2238_, 5);
if (v_verbosity_2268_ == 2)
{
uint8_t v___x_2275_; 
v___x_2275_ = 1;
v___y_2273_ = v___x_2275_;
goto v___jp_2272_;
}
else
{
uint8_t v___x_2276_; 
v___x_2276_ = 0;
v___y_2273_ = v___x_2276_;
goto v___jp_2272_;
}
v___jp_2272_:
{
lean_object* v___x_2274_; 
lean_inc(v_val_2269_);
lean_inc_ref(v_out_2246_);
v___x_2274_ = l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(v_out_2246_, v_outLv_2247_, v_useAnsi_2248_, v_toContext_2270_, v_outputsRef_x3f_2271_, v_out_2246_, v_val_2269_, v___y_2273_);
goto v___jp_2251_;
}
}
else
{
lean_dec_ref(v_out_2246_);
goto v___jp_2251_;
}
v___jp_2242_:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2244_ = lean_mk_io_user_error(v___y_2243_);
v___x_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2244_);
return v___x_2245_;
}
v___jp_2251_:
{
if (lean_obj_tag(v_out_2250_) == 0)
{
uint8_t v_noBuild_2252_; 
v_noBuild_2252_ = lean_ctor_get_uint8(v_cfg_2237_, sizeof(void*)*4 + 2);
lean_dec_ref(v_cfg_2237_);
if (v_noBuild_2252_ == 0)
{
lean_object* v_a_2253_; 
lean_dec_ref(v_toMonitorResult_2249_);
v_a_2253_ = lean_ctor_get(v_out_2250_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v_out_2250_, 1);
v___y_2243_ = v_a_2253_;
goto v___jp_2242_;
}
else
{
uint8_t v_wantsRebuild_2254_; 
v_wantsRebuild_2254_ = lean_ctor_get_uint8(v_toMonitorResult_2249_, sizeof(void*)*2);
lean_dec_ref(v_toMonitorResult_2249_);
if (v_wantsRebuild_2254_ == 0)
{
lean_object* v_a_2255_; 
v_a_2255_ = lean_ctor_get(v_out_2250_, 0);
lean_inc(v_a_2255_);
lean_dec_ref_known(v_out_2250_, 1);
v___y_2243_ = v_a_2255_;
goto v___jp_2242_;
}
else
{
uint8_t v___x_2256_; lean_object* v___x_2257_; 
lean_dec_ref_known(v_out_2250_, 1);
v___x_2256_ = lean_uint8_once(&l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0, &l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0);
v___x_2257_ = lean_io_exit(v___x_2256_);
return v___x_2257_;
}
}
}
else
{
lean_object* v_a_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2265_; 
lean_dec_ref(v_toMonitorResult_2249_);
lean_dec_ref(v_cfg_2237_);
v_a_2258_ = lean_ctor_get(v_out_2250_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v_out_2250_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2260_ = v_out_2250_;
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_a_2258_);
lean_dec(v_out_2250_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2265_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
if (v_isShared_2261_ == 0)
{
lean_ctor_set_tag(v___x_2260_, 0);
v___x_2263_ = v___x_2260_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_a_2258_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___boxed(lean_object* v_cfg_2277_, lean_object* v_bctx_2278_, lean_object* v_mctx_2279_, lean_object* v_result_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2277_, v_bctx_2278_, v_mctx_2279_, v_result_2280_);
lean_dec_ref(v_bctx_2278_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild(lean_object* v_00_u03b1_2283_, lean_object* v_cfg_2284_, lean_object* v_bctx_2285_, lean_object* v_mctx_2286_, lean_object* v_result_2287_){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2284_, v_bctx_2285_, v_mctx_2286_, v_result_2287_);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___boxed(lean_object* v_00_u03b1_2290_, lean_object* v_cfg_2291_, lean_object* v_bctx_2292_, lean_object* v_mctx_2293_, lean_object* v_result_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild(v_00_u03b1_2290_, v_cfg_2291_, v_bctx_2292_, v_mctx_2293_, v_result_2294_);
lean_dec_ref(v_bctx_2292_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg(lean_object* v_ws_2297_, lean_object* v_build_2298_, lean_object* v_cfg_2299_, lean_object* v_caption_2300_){
_start:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v_cancelTk_x3f_2305_; uint8_t v_failFast_2311_; 
v___x_2302_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2303_ = lean_st_mk_ref(v___x_2302_);
v_failFast_2311_ = lean_ctor_get_uint8(v_cfg_2299_, sizeof(void*)*4 + 3);
if (v_failFast_2311_ == 0)
{
lean_object* v___x_2312_; 
v___x_2312_ = lean_box(0);
v_cancelTk_x3f_2305_ = v___x_2312_;
goto v___jp_2304_;
}
else
{
lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2313_ = l_IO_CancelToken_new();
v___x_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2313_);
v_cancelTk_x3f_2305_ = v___x_2314_;
goto v___jp_2304_;
}
v___jp_2304_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
lean_inc(v_cancelTk_x3f_2305_);
lean_inc(v___x_2303_);
v___x_2306_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_2299_, v___x_2303_, v_cancelTk_x3f_2305_);
lean_inc_ref(v_cfg_2299_);
v___x_2307_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2297_, v_cfg_2299_, v___x_2303_, v_cancelTk_x3f_2305_);
v___x_2308_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2307_, v_build_2298_, v_caption_2300_);
v___x_2309_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v___x_2306_, v___x_2308_);
v___x_2310_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2299_, v___x_2307_, v___x_2306_, v___x_2309_);
lean_dec_ref(v___x_2307_);
return v___x_2310_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg___boxed(lean_object* v_ws_2315_, lean_object* v_build_2316_, lean_object* v_cfg_2317_, lean_object* v_caption_2318_, lean_object* v___y_2319_){
_start:
{
lean_object* v_res_2320_; 
v_res_2320_ = l_Lake_Workspace_runFetchM___redArg(v_ws_2315_, v_build_2316_, v_cfg_2317_, v_caption_2318_);
return v_res_2320_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM(lean_object* v_00_u03b1_2321_, lean_object* v_ws_2322_, lean_object* v_build_2323_, lean_object* v_cfg_2324_, lean_object* v_caption_2325_){
_start:
{
lean_object* v___x_2327_; 
v___x_2327_ = l_Lake_Workspace_runFetchM___redArg(v_ws_2322_, v_build_2323_, v_cfg_2324_, v_caption_2325_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___boxed(lean_object* v_00_u03b1_2328_, lean_object* v_ws_2329_, lean_object* v_build_2330_, lean_object* v_cfg_2331_, lean_object* v_caption_2332_, lean_object* v___y_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = l_Lake_Workspace_runFetchM(v_00_u03b1_2328_, v_ws_2329_, v_build_2330_, v_cfg_2331_, v_caption_2332_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(lean_object* v_mctx_2338_, lean_object* v_job_2339_){
_start:
{
lean_object* v___x_2341_; lean_object* v_out_2342_; 
v___x_2341_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_mctx_2338_, v_job_2339_);
v_out_2342_ = lean_ctor_get(v___x_2341_, 1);
lean_inc_ref(v_out_2342_);
if (lean_obj_tag(v_out_2342_) == 0)
{
lean_object* v_toMonitorResult_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2358_; 
v_toMonitorResult_2343_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2358_ == 0)
{
lean_object* v_unused_2359_; 
v_unused_2359_ = lean_ctor_get(v___x_2341_, 1);
lean_dec(v_unused_2359_);
v___x_2345_ = v___x_2341_;
v_isShared_2346_ = v_isSharedCheck_2358_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_toMonitorResult_2343_);
lean_dec(v___x_2341_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2358_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2357_; 
v_a_2347_ = lean_ctor_get(v_out_2342_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v_out_2342_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2349_ = v_out_2342_;
v_isShared_2350_ = v_isSharedCheck_2357_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v_out_2342_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2357_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2354_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 1, v___x_2352_);
v___x_2354_ = v___x_2345_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_toMonitorResult_2343_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v___x_2352_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
}
else
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2383_; 
v_a_2360_ = lean_ctor_get(v_out_2342_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v_out_2342_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2362_ = v_out_2342_;
v_isShared_2363_ = v_isSharedCheck_2383_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v_out_2342_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2383_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v_toMonitorResult_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2381_; 
v_toMonitorResult_2364_ = lean_ctor_get(v___x_2341_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2381_ == 0)
{
lean_object* v_unused_2382_; 
v_unused_2382_ = lean_ctor_get(v___x_2341_, 1);
lean_dec(v_unused_2382_);
v___x_2366_ = v___x_2341_;
v_isShared_2367_ = v_isSharedCheck_2381_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_toMonitorResult_2364_);
lean_dec(v___x_2341_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2381_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v_task_2368_; lean_object* v___x_2369_; 
v_task_2368_ = lean_ctor_get(v_a_2360_, 0);
lean_inc_ref(v_task_2368_);
lean_dec(v_a_2360_);
v___x_2369_ = lean_io_wait(v_task_2368_);
if (lean_obj_tag(v___x_2369_) == 0)
{
lean_object* v_a_2370_; lean_object* v___x_2372_; 
v_a_2370_ = lean_ctor_get(v___x_2369_, 0);
lean_inc(v_a_2370_);
lean_dec_ref_known(v___x_2369_, 2);
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 0, v_a_2370_);
v___x_2372_ = v___x_2362_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2372_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
lean_object* v___x_2374_; 
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 1, v___x_2372_);
v___x_2374_ = v___x_2366_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_toMonitorResult_2364_);
lean_ctor_set(v_reuseFailAlloc_2375_, 1, v___x_2372_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
}
else
{
lean_object* v___x_2377_; lean_object* v___x_2379_; 
lean_dec_ref_known(v___x_2369_, 2);
lean_del_object(v___x_2362_);
v___x_2377_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__1));
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 1, v___x_2377_);
v___x_2379_ = v___x_2366_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_toMonitorResult_2364_);
lean_ctor_set(v_reuseFailAlloc_2380_, 1, v___x_2377_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___boxed(lean_object* v_mctx_2384_, lean_object* v_job_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v_mctx_2384_, v_job_2385_);
lean_dec_ref(v_mctx_2384_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild(lean_object* v_00_u03b1_2388_, lean_object* v_mctx_2389_, lean_object* v_job_2390_){
_start:
{
lean_object* v___x_2392_; 
v___x_2392_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v_mctx_2389_, v_job_2390_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___boxed(lean_object* v_00_u03b1_2393_, lean_object* v_mctx_2394_, lean_object* v_job_2395_, lean_object* v___y_2396_){
_start:
{
lean_object* v_res_2397_; 
v_res_2397_ = l___private_Lake_Build_Run_0__Lake_monitorBuild(v_00_u03b1_2393_, v_mctx_2394_, v_job_2395_);
lean_dec_ref(v_mctx_2394_);
return v_res_2397_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild___redArg(lean_object* v_ws_2411_, lean_object* v_build_2412_){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; uint8_t v___x_2416_; uint8_t v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v_out_2425_; 
v___x_2414_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2415_ = lean_st_mk_ref(v___x_2414_);
v___x_2416_ = 0;
v___x_2417_ = 1;
v___x_2418_ = lean_box(0);
v___x_2419_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__1));
lean_inc(v___x_2415_);
v___x_2420_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v___x_2419_, v___x_2415_, v___x_2418_);
v___x_2421_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2411_, v___x_2419_, v___x_2415_, v___x_2418_);
v___x_2422_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__2));
v___x_2423_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2421_, v_build_2412_, v___x_2422_);
lean_dec_ref(v___x_2421_);
v___x_2424_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v___x_2420_, v___x_2423_);
lean_dec_ref(v___x_2420_);
v_out_2425_ = lean_ctor_get(v___x_2424_, 1);
lean_inc_ref(v_out_2425_);
lean_dec_ref(v___x_2424_);
if (lean_obj_tag(v_out_2425_) == 0)
{
lean_dec_ref_known(v_out_2425_, 1);
return v___x_2416_;
}
else
{
lean_dec_ref_known(v_out_2425_, 1);
return v___x_2417_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___redArg___boxed(lean_object* v_ws_2426_, lean_object* v_build_2427_, lean_object* v___y_2428_){
_start:
{
uint8_t v_res_2429_; lean_object* v_r_2430_; 
v_res_2429_ = l_Lake_Workspace_checkNoBuild___redArg(v_ws_2426_, v_build_2427_);
v_r_2430_ = lean_box(v_res_2429_);
return v_r_2430_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild(lean_object* v_00_u03b1_2431_, lean_object* v_ws_2432_, lean_object* v_build_2433_){
_start:
{
uint8_t v___x_2435_; 
v___x_2435_ = l_Lake_Workspace_checkNoBuild___redArg(v_ws_2432_, v_build_2433_);
return v___x_2435_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___boxed(lean_object* v_00_u03b1_2436_, lean_object* v_ws_2437_, lean_object* v_build_2438_, lean_object* v___y_2439_){
_start:
{
uint8_t v_res_2440_; lean_object* v_r_2441_; 
v_res_2440_ = l_Lake_Workspace_checkNoBuild(v_00_u03b1_2436_, v_ws_2437_, v_build_2438_);
v_r_2441_ = lean_box(v_res_2440_);
return v_r_2441_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg(lean_object* v_ws_2442_, lean_object* v_build_2443_, lean_object* v_cfg_2444_){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v_cancelTk_x3f_2449_; uint8_t v_failFast_2456_; 
v___x_2446_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2447_ = lean_st_mk_ref(v___x_2446_);
v_failFast_2456_ = lean_ctor_get_uint8(v_cfg_2444_, sizeof(void*)*4 + 3);
if (v_failFast_2456_ == 0)
{
lean_object* v___x_2457_; 
v___x_2457_ = lean_box(0);
v_cancelTk_x3f_2449_ = v___x_2457_;
goto v___jp_2448_;
}
else
{
lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2458_ = l_IO_CancelToken_new();
v___x_2459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2458_);
v_cancelTk_x3f_2449_ = v___x_2459_;
goto v___jp_2448_;
}
v___jp_2448_:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
lean_inc(v_cancelTk_x3f_2449_);
lean_inc(v___x_2447_);
v___x_2450_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_2444_, v___x_2447_, v_cancelTk_x3f_2449_);
lean_inc_ref(v_cfg_2444_);
v___x_2451_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2442_, v_cfg_2444_, v___x_2447_, v_cancelTk_x3f_2449_);
v___x_2452_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__2));
v___x_2453_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2451_, v_build_2443_, v___x_2452_);
v___x_2454_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v___x_2450_, v___x_2453_);
v___x_2455_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2444_, v___x_2451_, v___x_2450_, v___x_2454_);
lean_dec_ref(v___x_2451_);
return v___x_2455_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg___boxed(lean_object* v_ws_2460_, lean_object* v_build_2461_, lean_object* v_cfg_2462_, lean_object* v___y_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l_Lake_Workspace_runBuild___redArg(v_ws_2460_, v_build_2461_, v_cfg_2462_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild(lean_object* v_00_u03b1_2465_, lean_object* v_ws_2466_, lean_object* v_build_2467_, lean_object* v_cfg_2468_){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = l_Lake_Workspace_runBuild___redArg(v_ws_2466_, v_build_2467_, v_cfg_2468_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___boxed(lean_object* v_00_u03b1_2471_, lean_object* v_ws_2472_, lean_object* v_build_2473_, lean_object* v_cfg_2474_, lean_object* v___y_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l_Lake_Workspace_runBuild(v_00_u03b1_2471_, v_ws_2472_, v_build_2473_, v_cfg_2474_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg(lean_object* v_build_2477_, lean_object* v_cfg_2478_, lean_object* v___y_2479_){
_start:
{
lean_object* v___x_2481_; 
lean_inc(v___y_2479_);
v___x_2481_ = l_Lake_Workspace_runBuild___redArg(v___y_2479_, v_build_2477_, v_cfg_2478_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg___boxed(lean_object* v_build_2482_, lean_object* v_cfg_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_){
_start:
{
lean_object* v_res_2486_; 
v_res_2486_ = l_Lake_runBuild___redArg(v_build_2482_, v_cfg_2483_, v___y_2484_);
lean_dec(v___y_2484_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild(lean_object* v_00_u03b1_2487_, lean_object* v_build_2488_, lean_object* v_cfg_2489_, lean_object* v___y_2490_){
_start:
{
lean_object* v___x_2492_; 
lean_inc(v___y_2490_);
v___x_2492_ = l_Lake_Workspace_runBuild___redArg(v___y_2490_, v_build_2488_, v_cfg_2489_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___boxed(lean_object* v_00_u03b1_2493_, lean_object* v_build_2494_, lean_object* v_cfg_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Lake_runBuild(v_00_u03b1_2493_, v_build_2494_, v_cfg_2495_, v___y_2496_);
lean_dec(v___y_2496_);
return v_res_2498_;
}
}
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Index(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Run(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Index(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__1);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__2);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__3);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__4);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__5);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__6);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__7);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8 = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames___closed__0___boxed__const__8);
l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames = _init_l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames();
lean_mark_persistent(l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames);
l_Lake_noBuildCode = _init_l_Lake_noBuildCode();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Run(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Index(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Run(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Index(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Run(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Run(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Run(builtin);
}
#ifdef __cplusplus
}
#endif
