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
extern lean_object* l_instMonadBaseIO;
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
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__0;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lake.Build.Run"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__1 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__1_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "_private.Lake.Build.Run.0.Lake.print!"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__2 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__2_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__3 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__3_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__4_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__4_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__5_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__6 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__6_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__5_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__6_value),LEAN_SCALAR_PTR_LITERAL(91, 223, 152, 205, 91, 21, 95, 180)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__7 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__7_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Build"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__8 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__8_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__7_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__8_value),LEAN_SCALAR_PTR_LITERAL(2, 137, 78, 165, 26, 100, 189, 141)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__9 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__9_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Run"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__10 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__10_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__9_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__10_value),LEAN_SCALAR_PTR_LITERAL(54, 210, 138, 215, 143, 190, 184, 44)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__11 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(223, 16, 116, 91, 164, 49, 31, 222)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__12 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__12_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__12_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__6_value),LEAN_SCALAR_PTR_LITERAL(227, 129, 2, 182, 107, 115, 87, 113)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__13 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__13_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "print!"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__14 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__14_value;
static const lean_ctor_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__13_value),((lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__14_value),LEAN_SCALAR_PTR_LITERAL(171, 56, 2, 158, 131, 186, 32, 163)}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__15 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__15_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__16;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__17;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " failed: "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__18 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__18_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__19;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "] "};
static const lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___closed__20 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_print_x21___closed__20_value;
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
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_box(0);
v___x_91_ = l_instMonadBaseIO;
v___x_92_ = l_instInhabitedOfMonad___redArg(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16(void){
_start:
{
uint8_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_122_ = 1;
v___x_123_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_124_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_123_, v___x_122_);
return v___x_124_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__17(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_125_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__16, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__16_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__16);
v___x_126_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_127_ = lean_string_append(v___x_126_, v___x_125_);
return v___x_127_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_130_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__17, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__17_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__17);
v___x_131_ = lean_string_append(v___x_130_, v___x_129_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21(lean_object* v_out_133_, lean_object* v_s_134_){
_start:
{
lean_object* v_putStr_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v_putStr_136_ = lean_ctor_get(v_out_133_, 4);
lean_inc_ref(v_putStr_136_);
lean_dec_ref(v_out_133_);
v___x_137_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
lean_inc_ref(v_s_134_);
v___x_138_ = lean_apply_2(v_putStr_136_, v_s_134_, lean_box(0));
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v_a_139_; 
lean_dec_ref(v_s_134_);
v_a_139_ = lean_ctor_get(v___x_138_, 0);
lean_inc(v_a_139_);
lean_dec_ref_known(v___x_138_, 1);
return v_a_139_;
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_164_; 
v_a_140_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_164_ == 0)
{
v___x_142_ = v___x_138_;
v_isShared_143_ = v_isSharedCheck_164_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_138_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_164_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_144_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_145_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_146_ = lean_unsigned_to_nat(82u);
v___x_147_ = lean_unsigned_to_nat(4u);
v___x_148_ = lean_unsigned_to_nat(0u);
v___x_149_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_150_ = lean_io_error_to_string(v_a_140_);
v___x_151_ = lean_string_append(v___x_149_, v___x_150_);
lean_dec_ref(v___x_150_);
v___x_152_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_153_ = lean_string_append(v___x_151_, v___x_152_);
v___x_154_ = l_String_quote(v_s_134_);
if (v_isShared_143_ == 0)
{
lean_ctor_set_tag(v___x_142_, 3);
lean_ctor_set(v___x_142_, 0, v___x_154_);
v___x_156_ = v___x_142_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_154_);
v___x_156_ = v_reuseFailAlloc_163_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_187__overap_161_; lean_object* v___x_162_; 
v___x_157_ = l_Std_Format_defWidth;
v___x_158_ = l_Std_Format_pretty(v___x_156_, v___x_157_, v___x_148_, v___x_148_);
v___x_159_ = lean_string_append(v___x_153_, v___x_158_);
lean_dec_ref(v___x_158_);
v___x_160_ = l_mkPanicMessageWithDecl(v___x_144_, v___x_145_, v___x_146_, v___x_147_, v___x_159_);
lean_dec_ref(v___x_159_);
v___x_187__overap_161_ = l_panic___redArg(v___x_137_, v___x_160_);
v___x_162_ = lean_apply_1(v___x_187__overap_161_, lean_box(0));
return v___x_162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___boxed(lean_object* v_out_165_, lean_object* v_s_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l___private_Lake_Build_Run_0__Lake_print_x21(v_out_165_, v_s_166_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print(lean_object* v_s_169_, lean_object* v_a_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_val_174_; lean_object* v_out_176_; lean_object* v_putStr_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v_out_176_ = lean_ctor_get(v_a_170_, 1);
v_putStr_177_ = lean_ctor_get(v_out_176_, 4);
v___x_178_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
lean_inc_ref(v_putStr_177_);
lean_inc_ref(v_s_169_);
v___x_179_ = lean_apply_2(v_putStr_177_, v_s_169_, lean_box(0));
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; 
lean_dec_ref(v_s_169_);
v_a_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc(v_a_180_);
lean_dec_ref_known(v___x_179_, 1);
v_val_174_ = v_a_180_;
goto v___jp_173_;
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_205_; 
v_a_181_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_205_ == 0)
{
v___x_183_ = v___x_179_;
v_isShared_184_ = v_isSharedCheck_205_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_179_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_205_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_185_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_186_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_187_ = lean_unsigned_to_nat(82u);
v___x_188_ = lean_unsigned_to_nat(4u);
v___x_189_ = lean_unsigned_to_nat(0u);
v___x_190_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_191_ = lean_io_error_to_string(v_a_181_);
v___x_192_ = lean_string_append(v___x_190_, v___x_191_);
lean_dec_ref(v___x_191_);
v___x_193_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_194_ = lean_string_append(v___x_192_, v___x_193_);
v___x_195_ = l_String_quote(v_s_169_);
if (v_isShared_184_ == 0)
{
lean_ctor_set_tag(v___x_183_, 3);
lean_ctor_set(v___x_183_, 0, v___x_195_);
v___x_197_ = v___x_183_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_195_);
v___x_197_ = v_reuseFailAlloc_204_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_1132__overap_202_; lean_object* v___x_203_; 
v___x_198_ = l_Std_Format_defWidth;
v___x_199_ = l_Std_Format_pretty(v___x_197_, v___x_198_, v___x_189_, v___x_189_);
v___x_200_ = lean_string_append(v___x_194_, v___x_199_);
lean_dec_ref(v___x_199_);
v___x_201_ = l_mkPanicMessageWithDecl(v___x_185_, v___x_186_, v___x_187_, v___x_188_, v___x_200_);
lean_dec_ref(v___x_200_);
v___x_1132__overap_202_ = l_panic___redArg(v___x_178_, v___x_201_);
v___x_203_ = lean_apply_1(v___x_1132__overap_202_, lean_box(0));
v_val_174_ = v___x_203_;
goto v___jp_173_;
}
}
}
v___jp_173_:
{
lean_object* v___x_175_; 
v___x_175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_175_, 0, v_val_174_);
lean_ctor_set(v___x_175_, 1, v___y_171_);
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print___boxed(lean_object* v_s_206_, lean_object* v_a_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lake_Build_Run_0__Lake_Monitor_print(v_s_206_, v_a_207_, v___y_208_);
lean_dec_ref(v_a_207_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush(lean_object* v_a_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_val_215_; lean_object* v_out_217_; lean_object* v_flush_218_; lean_object* v___x_219_; 
v_out_217_ = lean_ctor_get(v_a_211_, 1);
v_flush_218_ = lean_ctor_get(v_out_217_, 0);
lean_inc_ref(v_flush_218_);
v___x_219_ = lean_apply_1(v_flush_218_, lean_box(0));
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
lean_inc(v_a_220_);
lean_dec_ref_known(v___x_219_, 1);
v_val_215_ = v_a_220_;
goto v___jp_214_;
}
else
{
lean_object* v___x_221_; 
lean_dec_ref_known(v___x_219_, 1);
v___x_221_ = lean_box(0);
v_val_215_ = v___x_221_;
goto v___jp_214_;
}
v___jp_214_:
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v_val_215_);
lean_ctor_set(v___x_216_, 1, v___y_212_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush___boxed(lean_object* v_a_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Lake_Build_Run_0__Lake_Monitor_flush(v_a_222_, v___y_223_);
lean_dec_ref(v_a_222_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(lean_object* v_msg_226_){
_start:
{
lean_object* v___x_228_; lean_object* v___x_7489__overap_229_; lean_object* v___x_230_; 
v___x_228_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_7489__overap_229_ = lean_panic_fn_borrowed(v___x_228_, v_msg_226_);
v___x_230_ = lean_apply_1(v___x_7489__overap_229_, lean_box(0));
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0___boxed(lean_object* v_msg_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v_msg_231_);
return v_res_233_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0(void){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames;
v___x_235_ = lean_array_get_size(v___x_234_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(lean_object* v_running_242_, lean_object* v_unfinished_243_, lean_object* v_a_244_, lean_object* v___y_245_){
_start:
{
uint8_t v_showProgress_250_; 
v_showProgress_250_ = lean_ctor_get_uint8(v_a_244_, sizeof(void*)*4 + 5);
if (v_showProgress_250_ == 0)
{
goto v___jp_247_;
}
else
{
uint8_t v_useAnsi_251_; 
v_useAnsi_251_ = lean_ctor_get_uint8(v_a_244_, sizeof(void*)*4 + 4);
if (v_useAnsi_251_ == 0)
{
goto v___jp_247_;
}
else
{
lean_object* v_jobNo_252_; lean_object* v_totalJobs_253_; uint8_t v_wantsRebuild_254_; lean_object* v_failures_255_; lean_object* v_resetCtrl_256_; lean_object* v_lastUpdate_257_; lean_object* v_spinnerIdx_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_347_; 
v_jobNo_252_ = lean_ctor_get(v___y_245_, 0);
v_totalJobs_253_ = lean_ctor_get(v___y_245_, 1);
v_wantsRebuild_254_ = lean_ctor_get_uint8(v___y_245_, sizeof(void*)*6);
v_failures_255_ = lean_ctor_get(v___y_245_, 2);
v_resetCtrl_256_ = lean_ctor_get(v___y_245_, 3);
v_lastUpdate_257_ = lean_ctor_get(v___y_245_, 4);
v_spinnerIdx_258_ = lean_ctor_get(v___y_245_, 5);
v_isSharedCheck_347_ = !lean_is_exclusive(v___y_245_);
if (v_isSharedCheck_347_ == 0)
{
v___x_260_ = v___y_245_;
v_isShared_261_ = v_isSharedCheck_347_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_spinnerIdx_258_);
lean_inc(v_lastUpdate_257_);
lean_inc(v_resetCtrl_256_);
lean_inc(v_failures_255_);
lean_inc(v_totalJobs_253_);
lean_inc(v_jobNo_252_);
lean_dec(v___y_245_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_347_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v_out_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_270_; 
v_out_262_ = lean_ctor_get(v_a_244_, 1);
v___x_263_ = l___private_Lake_Build_Run_0__Lake_Monitor_spinnerFrames;
v___x_264_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0, &l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__0);
v___x_265_ = lean_array_fget_borrowed(v___x_263_, v_spinnerIdx_258_);
v___x_266_ = lean_unsigned_to_nat(1u);
v___x_267_ = l_Fin_add(v___x_264_, v_spinnerIdx_258_, v___x_266_);
lean_dec(v_spinnerIdx_258_);
v___x_268_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Ansi_resetLine___closed__0));
lean_inc(v_totalJobs_253_);
lean_inc(v_jobNo_252_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 5, v___x_267_);
lean_ctor_set(v___x_260_, 3, v___x_268_);
v___x_270_ = v___x_260_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_jobNo_252_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v_totalJobs_253_);
lean_ctor_set(v_reuseFailAlloc_346_, 2, v_failures_255_);
lean_ctor_set(v_reuseFailAlloc_346_, 3, v___x_268_);
lean_ctor_set(v_reuseFailAlloc_346_, 4, v_lastUpdate_257_);
lean_ctor_set(v_reuseFailAlloc_346_, 5, v___x_267_);
lean_ctor_set_uint8(v_reuseFailAlloc_346_, sizeof(void*)*6, v_wantsRebuild_254_);
v___x_270_ = v_reuseFailAlloc_346_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
lean_object* v_val_272_; lean_object* v___y_280_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = lean_array_get_size(v_running_242_);
v___x_328_ = lean_nat_dec_lt(v___x_326_, v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v_caption_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_329_ = lean_array_get_size(v_unfinished_243_);
v___x_330_ = lean_nat_sub(v___x_329_, v___x_266_);
v___x_331_ = lean_array_fget_borrowed(v_unfinished_243_, v___x_330_);
lean_dec(v___x_330_);
v_caption_332_ = lean_ctor_get(v___x_331_, 2);
v___x_333_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4));
v___x_334_ = lean_string_append(v___x_333_, v_caption_332_);
v___y_280_ = v___x_334_;
goto v___jp_279_;
}
else
{
lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v_caption_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_335_ = lean_nat_sub(v___x_327_, v___x_266_);
v___x_336_ = lean_array_fget_borrowed(v_running_242_, v___x_335_);
v_caption_337_ = lean_ctor_get(v___x_336_, 2);
v___x_338_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__4));
v___x_339_ = lean_string_append(v___x_338_, v_caption_337_);
v___x_340_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__5));
v___x_341_ = lean_string_append(v___x_339_, v___x_340_);
v___x_342_ = l_Nat_reprFast(v___x_335_);
v___x_343_ = lean_string_append(v___x_341_, v___x_342_);
lean_dec_ref(v___x_342_);
v___x_344_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__6));
v___x_345_ = lean_string_append(v___x_343_, v___x_344_);
v___y_280_ = v___x_345_;
goto v___jp_279_;
}
v___jp_271_:
{
lean_object* v___x_273_; 
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v_val_272_);
lean_ctor_set(v___x_273_, 1, v___x_270_);
return v___x_273_;
}
v___jp_274_:
{
lean_object* v_flush_275_; lean_object* v___x_276_; 
v_flush_275_ = lean_ctor_get(v_out_262_, 0);
lean_inc_ref(v_flush_275_);
v___x_276_ = lean_apply_1(v_flush_275_, lean_box(0));
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_277_);
lean_dec_ref_known(v___x_276_, 1);
v_val_272_ = v_a_277_;
goto v___jp_271_;
}
else
{
lean_object* v___x_278_; 
lean_dec_ref_known(v___x_276_, 1);
v___x_278_ = lean_box(0);
v_val_272_ = v___x_278_;
goto v___jp_271_;
}
}
v___jp_279_:
{
lean_object* v_putStr_281_; lean_object* v___x_282_; uint32_t v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_putStr_281_ = lean_ctor_get(v_out_262_, 4);
v___x_282_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_283_ = lean_unbox_uint32(v___x_265_);
v___x_284_ = lean_string_push(v___x_282_, v___x_283_);
v___x_285_ = lean_string_append(v_resetCtrl_256_, v___x_284_);
lean_dec_ref(v___x_284_);
v___x_286_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2));
v___x_287_ = lean_string_append(v___x_285_, v___x_286_);
v___x_288_ = l_Nat_reprFast(v_jobNo_252_);
v___x_289_ = lean_string_append(v___x_287_, v___x_288_);
lean_dec_ref(v___x_288_);
v___x_290_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3));
v___x_291_ = lean_string_append(v___x_289_, v___x_290_);
v___x_292_ = l_Nat_reprFast(v_totalJobs_253_);
v___x_293_ = lean_string_append(v___x_291_, v___x_292_);
lean_dec_ref(v___x_292_);
v___x_294_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_295_ = lean_string_append(v___x_293_, v___x_294_);
v___x_296_ = lean_string_append(v___x_295_, v___y_280_);
lean_dec_ref(v___y_280_);
lean_inc_ref(v_putStr_281_);
lean_inc_ref(v___x_296_);
v___x_297_ = lean_apply_2(v_putStr_281_, v___x_296_, lean_box(0));
if (lean_obj_tag(v___x_297_) == 0)
{
lean_dec_ref_known(v___x_297_, 1);
lean_dec_ref(v___x_296_);
goto v___jp_274_;
}
else
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_325_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_325_ == 0)
{
v___x_300_ = v___x_297_;
v_isShared_301_ = v_isSharedCheck_325_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_325_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_302_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_303_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_304_ = lean_unsigned_to_nat(82u);
v___x_305_ = lean_unsigned_to_nat(4u);
v___x_306_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_307_ = lean_unsigned_to_nat(0u);
v___x_308_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_309_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_308_, v_useAnsi_251_);
v___x_310_ = lean_string_append(v___x_306_, v___x_309_);
lean_dec_ref(v___x_309_);
v___x_311_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_312_ = lean_string_append(v___x_310_, v___x_311_);
v___x_313_ = lean_io_error_to_string(v_a_298_);
v___x_314_ = lean_string_append(v___x_312_, v___x_313_);
lean_dec_ref(v___x_313_);
v___x_315_ = lean_string_append(v___x_314_, v___x_294_);
v___x_316_ = l_String_quote(v___x_296_);
if (v_isShared_301_ == 0)
{
lean_ctor_set_tag(v___x_300_, 3);
lean_ctor_set(v___x_300_, 0, v___x_316_);
v___x_318_ = v___x_300_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v___x_316_);
v___x_318_ = v_reuseFailAlloc_324_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_319_ = l_Std_Format_defWidth;
v___x_320_ = l_Std_Format_pretty(v___x_318_, v___x_319_, v___x_307_, v___x_307_);
v___x_321_ = lean_string_append(v___x_315_, v___x_320_);
lean_dec_ref(v___x_320_);
v___x_322_ = l_mkPanicMessageWithDecl(v___x_302_, v___x_303_, v___x_304_, v___x_305_, v___x_321_);
lean_dec_ref(v___x_321_);
v___x_323_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_322_);
goto v___jp_274_;
}
}
}
}
}
}
}
}
v___jp_247_:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lean_box(0);
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
lean_ctor_set(v___x_249_, 1, v___y_245_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___boxed(lean_object* v_running_348_, lean_object* v_unfinished_349_, lean_object* v_a_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_running_348_, v_unfinished_349_, v_a_350_, v___y_351_);
lean_dec_ref(v_a_350_);
lean_dec_ref(v_unfinished_349_);
lean_dec_ref(v_running_348_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress(lean_object* v_running_354_, lean_object* v_unfinished_355_, lean_object* v_h_356_, lean_object* v_a_357_, lean_object* v___y_358_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_running_354_, v_unfinished_355_, v_a_357_, v___y_358_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___boxed(lean_object* v_running_361_, lean_object* v_unfinished_362_, lean_object* v_h_363_, lean_object* v_a_364_, lean_object* v___y_365_, lean_object* v___y_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress(v_running_361_, v_unfinished_362_, v_h_363_, v_a_364_, v___y_365_);
lean_dec_ref(v_a_364_);
lean_dec_ref(v_unfinished_362_);
lean_dec_ref(v_running_361_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime(lean_object* v_ms_371_){
_start:
{
lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_372_ = lean_unsigned_to_nat(10000u);
v___x_373_ = lean_nat_dec_lt(v___x_372_, v_ms_371_);
if (v___x_373_ == 0)
{
lean_object* v___x_374_; uint8_t v___x_375_; 
v___x_374_ = lean_unsigned_to_nat(1000u);
v___x_375_ = lean_nat_dec_lt(v___x_374_, v_ms_371_);
if (v___x_375_ == 0)
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = l_Nat_reprFast(v_ms_371_);
v___x_377_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__0));
v___x_378_ = lean_string_append(v___x_376_, v___x_377_);
return v___x_378_;
}
else
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_379_ = lean_nat_div(v_ms_371_, v___x_374_);
v___x_380_ = l_Nat_reprFast(v___x_379_);
v___x_381_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__1));
v___x_382_ = lean_string_append(v___x_380_, v___x_381_);
v___x_383_ = lean_unsigned_to_nat(50u);
v___x_384_ = lean_nat_add(v_ms_371_, v___x_383_);
lean_dec(v_ms_371_);
v___x_385_ = lean_unsigned_to_nat(100u);
v___x_386_ = lean_nat_div(v___x_384_, v___x_385_);
lean_dec(v___x_384_);
v___x_387_ = lean_unsigned_to_nat(10u);
v___x_388_ = lean_nat_mod(v___x_386_, v___x_387_);
lean_dec(v___x_386_);
v___x_389_ = l_Nat_reprFast(v___x_388_);
v___x_390_ = lean_string_append(v___x_382_, v___x_389_);
lean_dec_ref(v___x_389_);
v___x_391_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2));
v___x_392_ = lean_string_append(v___x_390_, v___x_391_);
return v___x_392_;
}
}
else
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_393_ = lean_unsigned_to_nat(1000u);
v___x_394_ = lean_nat_div(v_ms_371_, v___x_393_);
lean_dec(v_ms_371_);
v___x_395_ = l_Nat_reprFast(v___x_394_);
v___x_396_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime___closed__2));
v___x_397_ = lean_string_append(v___x_395_, v___x_396_);
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(lean_object* v_out_398_, uint8_t v___y_399_, uint8_t v_useAnsi_400_, lean_object* v_as_401_, size_t v_i_402_, size_t v_stop_403_, lean_object* v_b_404_, lean_object* v___y_405_){
_start:
{
uint8_t v___x_407_; 
v___x_407_ = lean_usize_dec_eq(v_i_402_, v_stop_403_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; lean_object* v___x_409_; size_t v___x_410_; size_t v___x_411_; 
v___x_408_ = lean_array_uget_borrowed(v_as_401_, v_i_402_);
lean_inc_ref(v_out_398_);
v___x_409_ = l_Lake_logToStream(v___x_408_, v_out_398_, v___y_399_, v_useAnsi_400_);
v___x_410_ = ((size_t)1ULL);
v___x_411_ = lean_usize_add(v_i_402_, v___x_410_);
v_i_402_ = v___x_411_;
v_b_404_ = v___x_409_;
goto _start;
}
else
{
lean_object* v___x_413_; 
lean_dec_ref(v_out_398_);
v___x_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_413_, 0, v_b_404_);
lean_ctor_set(v___x_413_, 1, v___y_405_);
return v___x_413_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg___boxed(lean_object* v_out_414_, lean_object* v___y_415_, lean_object* v_useAnsi_416_, lean_object* v_as_417_, lean_object* v_i_418_, lean_object* v_stop_419_, lean_object* v_b_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
uint8_t v___y_13776__boxed_423_; uint8_t v_useAnsi_13777__boxed_424_; size_t v_i_boxed_425_; size_t v_stop_boxed_426_; lean_object* v_res_427_; 
v___y_13776__boxed_423_ = lean_unbox(v___y_415_);
v_useAnsi_13777__boxed_424_ = lean_unbox(v_useAnsi_416_);
v_i_boxed_425_ = lean_unbox_usize(v_i_418_);
lean_dec(v_i_418_);
v_stop_boxed_426_ = lean_unbox_usize(v_stop_419_);
lean_dec(v_stop_419_);
v_res_427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_414_, v___y_13776__boxed_423_, v_useAnsi_13777__boxed_424_, v_as_417_, v_i_boxed_425_, v_stop_boxed_426_, v_b_420_, v___y_421_);
lean_dec_ref(v_as_417_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(lean_object* v_job_435_, lean_object* v_a_436_, lean_object* v___y_437_){
_start:
{
lean_object* v___y_440_; lean_object* v___y_444_; lean_object* v_val_445_; lean_object* v___y_448_; lean_object* v___y_449_; lean_object* v_jobNo_455_; lean_object* v_totalJobs_456_; uint8_t v_wantsRebuild_457_; lean_object* v_failures_458_; lean_object* v_resetCtrl_459_; lean_object* v_lastUpdate_460_; lean_object* v_spinnerIdx_461_; lean_object* v_out_462_; uint8_t v_outLv_463_; uint8_t v_failLv_464_; uint8_t v_minAction_465_; uint8_t v_showOptional_466_; uint8_t v_useAnsi_467_; uint8_t v_showProgress_468_; uint8_t v_showTime_469_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v___y_474_; lean_object* v___y_475_; uint8_t v___y_476_; lean_object* v___y_484_; uint8_t v___y_485_; uint8_t v___y_486_; lean_object* v___y_487_; lean_object* v___y_488_; lean_object* v___y_489_; lean_object* v___y_490_; lean_object* v___y_493_; uint8_t v___y_494_; uint8_t v___y_495_; uint8_t v___y_496_; lean_object* v___y_497_; lean_object* v___y_498_; lean_object* v___y_499_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v___y_557_; uint8_t v___y_558_; uint8_t v___y_559_; uint8_t v___y_560_; lean_object* v___y_561_; lean_object* v___y_562_; lean_object* v___y_563_; lean_object* v___y_564_; lean_object* v___y_565_; lean_object* v___y_566_; lean_object* v_task_568_; lean_object* v_caption_569_; uint8_t v_optional_570_; uint32_t v___y_572_; lean_object* v___y_573_; lean_object* v___y_574_; lean_object* v___y_575_; lean_object* v___y_576_; lean_object* v___y_577_; uint8_t v___y_578_; uint8_t v___y_579_; uint8_t v___y_580_; uint8_t v___y_581_; lean_object* v___y_582_; lean_object* v___y_583_; lean_object* v___y_584_; uint32_t v___y_607_; lean_object* v___y_608_; lean_object* v___y_609_; lean_object* v___y_610_; lean_object* v___y_611_; lean_object* v___y_612_; uint8_t v___y_613_; uint8_t v___y_614_; uint8_t v___y_615_; uint8_t v___y_616_; lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_621_; uint32_t v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; uint8_t v___y_627_; uint8_t v___y_628_; uint8_t v___y_629_; uint8_t v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; uint8_t v___y_641_; lean_object* v___y_642_; uint8_t v___y_643_; uint8_t v___y_644_; lean_object* v___y_645_; uint8_t v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; lean_object* v___y_651_; uint32_t v___y_652_; lean_object* v___y_656_; uint8_t v___y_657_; uint8_t v___y_658_; uint8_t v___y_659_; lean_object* v___y_660_; uint8_t v___y_661_; lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; lean_object* v___y_672_; uint8_t v___y_673_; uint8_t v___y_674_; uint8_t v___y_675_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; uint8_t v___y_681_; uint8_t v___y_683_; uint8_t v___y_684_; lean_object* v___y_685_; lean_object* v___y_686_; uint8_t v___y_687_; uint8_t v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_691_; lean_object* v___y_692_; lean_object* v___y_710_; uint8_t v___y_711_; uint8_t v___y_712_; lean_object* v___y_713_; uint8_t v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; uint8_t v___y_717_; uint8_t v___y_718_; uint8_t v___y_734_; uint8_t v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; uint8_t v___y_740_; uint8_t v___y_741_; lean_object* v___y_746_; lean_object* v___x_757_; lean_object* v_a_758_; 
v_jobNo_455_ = lean_ctor_get(v___y_437_, 0);
lean_inc(v_jobNo_455_);
v_totalJobs_456_ = lean_ctor_get(v___y_437_, 1);
lean_inc(v_totalJobs_456_);
v_wantsRebuild_457_ = lean_ctor_get_uint8(v___y_437_, sizeof(void*)*6);
v_failures_458_ = lean_ctor_get(v___y_437_, 2);
v_resetCtrl_459_ = lean_ctor_get(v___y_437_, 3);
v_lastUpdate_460_ = lean_ctor_get(v___y_437_, 4);
v_spinnerIdx_461_ = lean_ctor_get(v___y_437_, 5);
v_out_462_ = lean_ctor_get(v_a_436_, 1);
v_outLv_463_ = lean_ctor_get_uint8(v_a_436_, sizeof(void*)*4);
v_failLv_464_ = lean_ctor_get_uint8(v_a_436_, sizeof(void*)*4 + 1);
v_minAction_465_ = lean_ctor_get_uint8(v_a_436_, sizeof(void*)*4 + 2);
v_showOptional_466_ = lean_ctor_get_uint8(v_a_436_, sizeof(void*)*4 + 3);
v_useAnsi_467_ = lean_ctor_get_uint8(v_a_436_, sizeof(void*)*4 + 4);
v_showProgress_468_ = lean_ctor_get_uint8(v_a_436_, sizeof(void*)*4 + 5);
v_showTime_469_ = lean_ctor_get_uint8(v_a_436_, sizeof(void*)*4 + 6);
v_task_568_ = lean_ctor_get(v_job_435_, 0);
lean_inc_ref(v_task_568_);
v_caption_569_ = lean_ctor_get(v_job_435_, 2);
lean_inc_ref(v_caption_569_);
v_optional_570_ = lean_ctor_get_uint8(v_job_435_, sizeof(void*)*3);
lean_dec_ref(v_job_435_);
v___x_757_ = lean_task_get_own(v_task_568_);
v_a_758_ = lean_ctor_get(v___x_757_, 1);
lean_inc(v_a_758_);
lean_dec(v___x_757_);
v___y_746_ = v_a_758_;
goto v___jp_745_;
v___jp_439_:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = lean_box(0);
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v___y_440_);
return v___x_442_;
}
v___jp_443_:
{
lean_object* v___x_446_; 
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v_val_445_);
lean_ctor_set(v___x_446_, 1, v___y_444_);
return v___x_446_;
}
v___jp_447_:
{
lean_object* v_out_450_; lean_object* v_flush_451_; lean_object* v___x_452_; 
v_out_450_ = lean_ctor_get(v___y_448_, 1);
v_flush_451_ = lean_ctor_get(v_out_450_, 0);
lean_inc_ref(v_flush_451_);
v___x_452_ = lean_apply_1(v_flush_451_, lean_box(0));
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_a_453_);
lean_dec_ref_known(v___x_452_, 1);
v___y_444_ = v___y_449_;
v_val_445_ = v_a_453_;
goto v___jp_443_;
}
else
{
lean_object* v___x_454_; 
lean_dec_ref_known(v___x_452_, 1);
v___x_454_ = lean_box(0);
v___y_444_ = v___y_449_;
v_val_445_ = v___x_454_;
goto v___jp_443_;
}
}
v___jp_470_:
{
uint8_t v___x_477_; 
v___x_477_ = lean_nat_dec_lt(v___y_471_, v___y_474_);
lean_dec(v___y_471_);
if (v___x_477_ == 0)
{
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
v___y_448_ = v___y_475_;
v___y_449_ = v___y_472_;
goto v___jp_447_;
}
else
{
lean_object* v___x_478_; size_t v___x_479_; size_t v___x_480_; lean_object* v___x_481_; lean_object* v_snd_482_; 
v___x_478_ = lean_box(0);
v___x_479_ = ((size_t)0ULL);
v___x_480_ = lean_usize_of_nat(v___y_474_);
lean_dec(v___y_474_);
lean_inc_ref(v_out_462_);
v___x_481_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_462_, v___y_476_, v_useAnsi_467_, v___y_473_, v___x_479_, v___x_480_, v___x_478_, v___y_472_);
lean_dec_ref(v___y_473_);
v_snd_482_ = lean_ctor_get(v___x_481_, 1);
lean_inc(v_snd_482_);
lean_dec_ref(v___x_481_);
v___y_448_ = v___y_475_;
v___y_449_ = v_snd_482_;
goto v___jp_447_;
}
}
v___jp_483_:
{
if (v___y_486_ == 0)
{
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_484_);
v___y_448_ = v___y_490_;
v___y_449_ = v___y_487_;
goto v___jp_447_;
}
else
{
if (v___y_485_ == 0)
{
v___y_471_ = v___y_484_;
v___y_472_ = v___y_487_;
v___y_473_ = v___y_488_;
v___y_474_ = v___y_489_;
v___y_475_ = v___y_490_;
v___y_476_ = v_outLv_463_;
goto v___jp_470_;
}
else
{
uint8_t v___x_491_; 
v___x_491_ = 0;
v___y_471_ = v___y_484_;
v___y_472_ = v___y_487_;
v___y_473_ = v___y_488_;
v___y_474_ = v___y_489_;
v___y_475_ = v___y_490_;
v___y_476_ = v___x_491_;
goto v___jp_470_;
}
}
}
v___jp_492_:
{
lean_object* v_out_502_; lean_object* v_jobNo_503_; lean_object* v_totalJobs_504_; uint8_t v_wantsRebuild_505_; lean_object* v_failures_506_; lean_object* v_resetCtrl_507_; lean_object* v_lastUpdate_508_; lean_object* v_spinnerIdx_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_555_; 
v_out_502_ = lean_ctor_get(v___y_500_, 1);
v_jobNo_503_ = lean_ctor_get(v___y_499_, 0);
v_totalJobs_504_ = lean_ctor_get(v___y_499_, 1);
v_wantsRebuild_505_ = lean_ctor_get_uint8(v___y_499_, sizeof(void*)*6);
v_failures_506_ = lean_ctor_get(v___y_499_, 2);
v_resetCtrl_507_ = lean_ctor_get(v___y_499_, 3);
v_lastUpdate_508_ = lean_ctor_get(v___y_499_, 4);
v_spinnerIdx_509_ = lean_ctor_get(v___y_499_, 5);
v_isSharedCheck_555_ = !lean_is_exclusive(v___y_499_);
if (v_isSharedCheck_555_ == 0)
{
v___x_511_ = v___y_499_;
v_isShared_512_ = v_isSharedCheck_555_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_spinnerIdx_509_);
lean_inc(v_lastUpdate_508_);
lean_inc(v_resetCtrl_507_);
lean_inc(v_failures_506_);
lean_inc(v_totalJobs_504_);
lean_inc(v_jobNo_503_);
lean_dec(v___y_499_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_555_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v_putStr_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
v_putStr_513_ = lean_ctor_get(v_out_502_, 4);
v___x_514_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 3, v___x_514_);
v___x_516_ = v___x_511_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_jobNo_503_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_totalJobs_504_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_failures_506_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_554_, 4, v_lastUpdate_508_);
lean_ctor_set(v_reuseFailAlloc_554_, 5, v_spinnerIdx_509_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, sizeof(void*)*6, v_wantsRebuild_505_);
v___x_516_ = v_reuseFailAlloc_554_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_517_ = lean_string_append(v_resetCtrl_507_, v___y_501_);
lean_dec_ref(v___y_501_);
v___x_518_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0));
v___x_519_ = lean_string_append(v___x_517_, v___x_518_);
lean_inc_ref(v_putStr_513_);
lean_inc_ref(v___x_519_);
v___x_520_ = lean_apply_2(v_putStr_513_, v___x_519_, lean_box(0));
if (lean_obj_tag(v___x_520_) == 0)
{
lean_dec_ref_known(v___x_520_, 1);
lean_dec_ref(v___x_519_);
v___y_484_ = v___y_493_;
v___y_485_ = v___y_495_;
v___y_486_ = v___y_494_;
v___y_487_ = v___x_516_;
v___y_488_ = v___y_497_;
v___y_489_ = v___y_498_;
v___y_490_ = v___y_500_;
goto v___jp_483_;
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_553_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_553_ == 0)
{
v___x_523_ = v___x_520_;
v_isShared_524_ = v_isSharedCheck_553_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_553_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_546_; 
v___x_525_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_526_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_527_ = lean_unsigned_to_nat(82u);
v___x_528_ = lean_unsigned_to_nat(4u);
v___x_529_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_530_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__6));
v___x_531_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__11));
lean_inc(v___y_493_);
v___x_532_ = l_Lean_Name_num___override(v___x_531_, v___y_493_);
v___x_533_ = l_Lean_Name_str___override(v___x_532_, v___x_530_);
v___x_534_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__14));
v___x_535_ = l_Lean_Name_str___override(v___x_533_, v___x_534_);
v___x_536_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_535_, v___y_496_);
v___x_537_ = lean_string_append(v___x_529_, v___x_536_);
lean_dec_ref(v___x_536_);
v___x_538_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_539_ = lean_string_append(v___x_537_, v___x_538_);
v___x_540_ = lean_io_error_to_string(v_a_521_);
v___x_541_ = lean_string_append(v___x_539_, v___x_540_);
lean_dec_ref(v___x_540_);
v___x_542_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_543_ = lean_string_append(v___x_541_, v___x_542_);
v___x_544_ = l_String_quote(v___x_519_);
if (v_isShared_524_ == 0)
{
lean_ctor_set_tag(v___x_523_, 3);
lean_ctor_set(v___x_523_, 0, v___x_544_);
v___x_546_ = v___x_523_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_552_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_547_ = l_Std_Format_defWidth;
lean_inc_n(v___y_493_, 2);
v___x_548_ = l_Std_Format_pretty(v___x_546_, v___x_547_, v___y_493_, v___y_493_);
v___x_549_ = lean_string_append(v___x_543_, v___x_548_);
lean_dec_ref(v___x_548_);
v___x_550_ = l_mkPanicMessageWithDecl(v___x_525_, v___x_526_, v___x_527_, v___x_528_, v___x_549_);
lean_dec_ref(v___x_549_);
v___x_551_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_550_);
v___y_484_ = v___y_493_;
v___y_485_ = v___y_495_;
v___y_486_ = v___y_494_;
v___y_487_ = v___x_516_;
v___y_488_ = v___y_497_;
v___y_489_ = v___y_498_;
v___y_490_ = v___y_500_;
goto v___jp_483_;
}
}
}
}
}
}
v___jp_556_:
{
lean_object* v___x_567_; 
v___x_567_ = l_Lake_Ansi_chalk(v___y_566_, v___y_564_);
lean_dec_ref(v___y_564_);
lean_dec_ref(v___y_566_);
v___y_493_ = v___y_557_;
v___y_494_ = v___y_559_;
v___y_495_ = v___y_558_;
v___y_496_ = v___y_560_;
v___y_497_ = v___y_561_;
v___y_498_ = v___y_562_;
v___y_499_ = v___y_563_;
v___y_500_ = v___y_565_;
v___y_501_ = v___x_567_;
goto v___jp_492_;
}
v___jp_571_:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_585_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_586_ = lean_string_push(v___x_585_, v___y_572_);
v___x_587_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2));
v___x_588_ = lean_string_append(v___x_586_, v___x_587_);
v___x_589_ = l_Nat_reprFast(v_jobNo_455_);
v___x_590_ = lean_string_append(v___x_588_, v___x_589_);
lean_dec_ref(v___x_589_);
v___x_591_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3));
v___x_592_ = lean_string_append(v___x_590_, v___x_591_);
v___x_593_ = l_Nat_reprFast(v_totalJobs_456_);
v___x_594_ = lean_string_append(v___x_592_, v___x_593_);
lean_dec_ref(v___x_593_);
v___x_595_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__1));
v___x_596_ = lean_string_append(v___x_594_, v___x_595_);
v___x_597_ = lean_string_append(v___x_596_, v___y_576_);
v___x_598_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__2));
v___x_599_ = lean_string_append(v___x_597_, v___x_598_);
v___x_600_ = lean_string_append(v___x_599_, v___y_582_);
lean_dec_ref(v___y_582_);
v___x_601_ = lean_string_append(v___x_600_, v___x_598_);
v___x_602_ = lean_string_append(v___x_601_, v_caption_569_);
lean_dec_ref(v_caption_569_);
v___x_603_ = lean_string_append(v___x_602_, v___y_584_);
lean_dec_ref(v___y_584_);
if (v_useAnsi_467_ == 0)
{
v___y_493_ = v___y_577_;
v___y_494_ = v___y_580_;
v___y_495_ = v___y_579_;
v___y_496_ = v___y_581_;
v___y_497_ = v___y_573_;
v___y_498_ = v___y_574_;
v___y_499_ = v___y_575_;
v___y_500_ = v___y_583_;
v___y_501_ = v___x_603_;
goto v___jp_492_;
}
else
{
if (v___y_580_ == 0)
{
lean_object* v___x_604_; 
v___x_604_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__3));
v___y_557_ = v___y_577_;
v___y_558_ = v___y_579_;
v___y_559_ = v___y_580_;
v___y_560_ = v___y_581_;
v___y_561_ = v___y_573_;
v___y_562_ = v___y_574_;
v___y_563_ = v___y_575_;
v___y_564_ = v___x_603_;
v___y_565_ = v___y_583_;
v___y_566_ = v___x_604_;
goto v___jp_556_;
}
else
{
lean_object* v___x_605_; 
v___x_605_ = l_Lake_LogLevel_ansiColor(v___y_578_);
v___y_557_ = v___y_577_;
v___y_558_ = v___y_579_;
v___y_559_ = v___y_580_;
v___y_560_ = v___y_581_;
v___y_561_ = v___y_573_;
v___y_562_ = v___y_574_;
v___y_563_ = v___y_575_;
v___y_564_ = v___x_603_;
v___y_565_ = v___y_583_;
v___y_566_ = v___x_605_;
goto v___jp_556_;
}
}
}
v___jp_606_:
{
lean_object* v___x_619_; 
v___x_619_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___y_572_ = v___y_607_;
v___y_573_ = v___y_608_;
v___y_574_ = v___y_609_;
v___y_575_ = v___y_610_;
v___y_576_ = v___y_611_;
v___y_577_ = v___y_612_;
v___y_578_ = v___y_613_;
v___y_579_ = v___y_614_;
v___y_580_ = v___y_615_;
v___y_581_ = v___y_616_;
v___y_582_ = v___y_617_;
v___y_583_ = v___y_618_;
v___y_584_ = v___x_619_;
goto v___jp_571_;
}
v___jp_620_:
{
if (v_showTime_469_ == 0)
{
lean_dec(v___y_621_);
v___y_607_ = v___y_622_;
v___y_608_ = v___y_623_;
v___y_609_ = v___y_624_;
v___y_610_ = v___y_625_;
v___y_611_ = v___y_633_;
v___y_612_ = v___y_626_;
v___y_613_ = v___y_627_;
v___y_614_ = v___y_628_;
v___y_615_ = v___y_629_;
v___y_616_ = v___y_630_;
v___y_617_ = v___y_631_;
v___y_618_ = v___y_632_;
goto v___jp_606_;
}
else
{
uint8_t v___x_634_; 
v___x_634_ = lean_nat_dec_lt(v___y_626_, v___y_621_);
if (v___x_634_ == 0)
{
lean_dec(v___y_621_);
v___y_607_ = v___y_622_;
v___y_608_ = v___y_623_;
v___y_609_ = v___y_624_;
v___y_610_ = v___y_625_;
v___y_611_ = v___y_633_;
v___y_612_ = v___y_626_;
v___y_613_ = v___y_627_;
v___y_614_ = v___y_628_;
v___y_615_ = v___y_629_;
v___y_616_ = v___y_630_;
v___y_617_ = v___y_631_;
v___y_618_ = v___y_632_;
goto v___jp_606_;
}
else
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_635_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4));
v___x_636_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime(v___y_621_);
v___x_637_ = lean_string_append(v___x_635_, v___x_636_);
lean_dec_ref(v___x_636_);
v___x_638_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5));
v___x_639_ = lean_string_append(v___x_637_, v___x_638_);
v___y_572_ = v___y_622_;
v___y_573_ = v___y_623_;
v___y_574_ = v___y_624_;
v___y_575_ = v___y_625_;
v___y_576_ = v___y_633_;
v___y_577_ = v___y_626_;
v___y_578_ = v___y_627_;
v___y_579_ = v___y_628_;
v___y_580_ = v___y_629_;
v___y_581_ = v___y_630_;
v___y_582_ = v___y_631_;
v___y_583_ = v___y_632_;
v___y_584_ = v___x_639_;
goto v___jp_571_;
}
}
}
v___jp_640_:
{
if (v_optional_570_ == 0)
{
lean_object* v___x_653_; 
v___x_653_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___y_621_ = v___y_645_;
v___y_622_ = v___y_652_;
v___y_623_ = v___y_647_;
v___y_624_ = v___y_649_;
v___y_625_ = v___y_650_;
v___y_626_ = v___y_642_;
v___y_627_ = v___y_641_;
v___y_628_ = v___y_644_;
v___y_629_ = v___y_643_;
v___y_630_ = v___y_646_;
v___y_631_ = v___y_648_;
v___y_632_ = v___y_651_;
v___y_633_ = v___x_653_;
goto v___jp_620_;
}
else
{
lean_object* v___x_654_; 
v___x_654_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6));
v___y_621_ = v___y_645_;
v___y_622_ = v___y_652_;
v___y_623_ = v___y_647_;
v___y_624_ = v___y_649_;
v___y_625_ = v___y_650_;
v___y_626_ = v___y_642_;
v___y_627_ = v___y_641_;
v___y_628_ = v___y_644_;
v___y_629_ = v___y_643_;
v___y_630_ = v___y_646_;
v___y_631_ = v___y_648_;
v___y_632_ = v___y_651_;
v___y_633_ = v___x_654_;
goto v___jp_620_;
}
}
v___jp_655_:
{
if (v___y_661_ == 0)
{
if (v_showProgress_468_ == 0)
{
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_660_);
lean_dec(v___y_656_);
lean_dec_ref(v_caption_569_);
lean_dec(v_totalJobs_456_);
lean_dec(v_jobNo_455_);
v___y_440_ = v___y_664_;
goto v___jp_439_;
}
else
{
if (v_useAnsi_467_ == 0)
{
uint8_t v___x_666_; 
v___x_666_ = l_Lake_instOrdJobAction_ord(v_minAction_465_, v___y_658_);
if (v___x_666_ == 2)
{
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_660_);
lean_dec(v___y_656_);
lean_dec_ref(v_caption_569_);
lean_dec(v_totalJobs_456_);
lean_dec(v_jobNo_455_);
v___y_440_ = v___y_664_;
goto v___jp_439_;
}
else
{
lean_object* v___x_667_; uint32_t v___x_668_; 
v___x_667_ = l_Lake_JobAction_verb(v___y_659_, v___y_658_);
v___x_668_ = 10004;
v___y_641_ = v___y_657_;
v___y_642_ = v___y_656_;
v___y_643_ = v___y_661_;
v___y_644_ = v___y_659_;
v___y_645_ = v___y_660_;
v___y_646_ = v_showProgress_468_;
v___y_647_ = v___y_662_;
v___y_648_ = v___x_667_;
v___y_649_ = v___y_663_;
v___y_650_ = v___y_664_;
v___y_651_ = v___y_665_;
v___y_652_ = v___x_668_;
goto v___jp_640_;
}
}
else
{
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_660_);
lean_dec(v___y_656_);
lean_dec_ref(v_caption_569_);
lean_dec(v_totalJobs_456_);
lean_dec(v_jobNo_455_);
v___y_440_ = v___y_664_;
goto v___jp_439_;
}
}
}
else
{
lean_object* v___x_669_; uint32_t v___x_670_; 
v___x_669_ = l_Lake_JobAction_verb(v___y_659_, v___y_658_);
v___x_670_ = l_Lake_LogLevel_icon(v___y_657_);
v___y_641_ = v___y_657_;
v___y_642_ = v___y_656_;
v___y_643_ = v___y_661_;
v___y_644_ = v___y_659_;
v___y_645_ = v___y_660_;
v___y_646_ = v___y_661_;
v___y_647_ = v___y_662_;
v___y_648_ = v___x_669_;
v___y_649_ = v___y_663_;
v___y_650_ = v___y_664_;
v___y_651_ = v___y_665_;
v___y_652_ = v___x_670_;
goto v___jp_640_;
}
}
v___jp_671_:
{
if (v_optional_570_ == 0)
{
v___y_656_ = v___y_672_;
v___y_657_ = v___y_674_;
v___y_658_ = v___y_673_;
v___y_659_ = v___y_675_;
v___y_660_ = v___y_676_;
v___y_661_ = v___y_681_;
v___y_662_ = v___y_677_;
v___y_663_ = v___y_678_;
v___y_664_ = v___y_679_;
v___y_665_ = v___y_680_;
goto v___jp_655_;
}
else
{
if (v_showOptional_466_ == 0)
{
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec(v___y_672_);
lean_dec_ref(v_caption_569_);
lean_dec(v_totalJobs_456_);
lean_dec(v_jobNo_455_);
v___y_440_ = v___y_679_;
goto v___jp_439_;
}
else
{
v___y_656_ = v___y_672_;
v___y_657_ = v___y_674_;
v___y_658_ = v___y_673_;
v___y_659_ = v___y_675_;
v___y_660_ = v___y_676_;
v___y_661_ = v___y_681_;
v___y_662_ = v___y_677_;
v___y_663_ = v___y_678_;
v___y_664_ = v___y_679_;
v___y_665_ = v___y_680_;
goto v___jp_655_;
}
}
}
v___jp_682_:
{
if (v___y_687_ == 0)
{
if (v___y_688_ == 0)
{
v___y_672_ = v___y_685_;
v___y_673_ = v___y_684_;
v___y_674_ = v___y_683_;
v___y_675_ = v___y_687_;
v___y_676_ = v___y_686_;
v___y_677_ = v___y_689_;
v___y_678_ = v___y_690_;
v___y_679_ = v___y_692_;
v___y_680_ = v___y_691_;
v___y_681_ = v___y_688_;
goto v___jp_671_;
}
else
{
uint8_t v___x_693_; 
v___x_693_ = l_Lake_instOrdLogLevel_ord(v_outLv_463_, v___y_683_);
if (v___x_693_ == 2)
{
v___y_672_ = v___y_685_;
v___y_673_ = v___y_684_;
v___y_674_ = v___y_683_;
v___y_675_ = v___y_687_;
v___y_676_ = v___y_686_;
v___y_677_ = v___y_689_;
v___y_678_ = v___y_690_;
v___y_679_ = v___y_692_;
v___y_680_ = v___y_691_;
v___y_681_ = v___y_687_;
goto v___jp_671_;
}
else
{
v___y_672_ = v___y_685_;
v___y_673_ = v___y_684_;
v___y_674_ = v___y_683_;
v___y_675_ = v___y_687_;
v___y_676_ = v___y_686_;
v___y_677_ = v___y_689_;
v___y_678_ = v___y_690_;
v___y_679_ = v___y_692_;
v___y_680_ = v___y_691_;
v___y_681_ = v___y_688_;
goto v___jp_671_;
}
}
}
else
{
if (v_optional_570_ == 0)
{
lean_object* v_jobNo_694_; lean_object* v_totalJobs_695_; uint8_t v_wantsRebuild_696_; lean_object* v_failures_697_; lean_object* v_resetCtrl_698_; lean_object* v_lastUpdate_699_; lean_object* v_spinnerIdx_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_708_; 
v_jobNo_694_ = lean_ctor_get(v___y_692_, 0);
v_totalJobs_695_ = lean_ctor_get(v___y_692_, 1);
v_wantsRebuild_696_ = lean_ctor_get_uint8(v___y_692_, sizeof(void*)*6);
v_failures_697_ = lean_ctor_get(v___y_692_, 2);
v_resetCtrl_698_ = lean_ctor_get(v___y_692_, 3);
v_lastUpdate_699_ = lean_ctor_get(v___y_692_, 4);
v_spinnerIdx_700_ = lean_ctor_get(v___y_692_, 5);
v_isSharedCheck_708_ = !lean_is_exclusive(v___y_692_);
if (v_isSharedCheck_708_ == 0)
{
v___x_702_ = v___y_692_;
v_isShared_703_ = v_isSharedCheck_708_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_spinnerIdx_700_);
lean_inc(v_lastUpdate_699_);
lean_inc(v_resetCtrl_698_);
lean_inc(v_failures_697_);
lean_inc(v_totalJobs_695_);
lean_inc(v_jobNo_694_);
lean_dec(v___y_692_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_708_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_704_; lean_object* v___x_706_; 
lean_inc_ref(v_caption_569_);
v___x_704_ = lean_array_push(v_failures_697_, v_caption_569_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 2, v___x_704_);
v___x_706_ = v___x_702_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_jobNo_694_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v_totalJobs_695_);
lean_ctor_set(v_reuseFailAlloc_707_, 2, v___x_704_);
lean_ctor_set(v_reuseFailAlloc_707_, 3, v_resetCtrl_698_);
lean_ctor_set(v_reuseFailAlloc_707_, 4, v_lastUpdate_699_);
lean_ctor_set(v_reuseFailAlloc_707_, 5, v_spinnerIdx_700_);
lean_ctor_set_uint8(v_reuseFailAlloc_707_, sizeof(void*)*6, v_wantsRebuild_696_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
v___y_672_ = v___y_685_;
v___y_673_ = v___y_684_;
v___y_674_ = v___y_683_;
v___y_675_ = v___y_687_;
v___y_676_ = v___y_686_;
v___y_677_ = v___y_689_;
v___y_678_ = v___y_690_;
v___y_679_ = v___x_706_;
v___y_680_ = v___y_691_;
v___y_681_ = v___y_687_;
goto v___jp_671_;
}
}
}
else
{
v___y_672_ = v___y_685_;
v___y_673_ = v___y_684_;
v___y_674_ = v___y_683_;
v___y_675_ = v___y_687_;
v___y_676_ = v___y_686_;
v___y_677_ = v___y_689_;
v___y_678_ = v___y_690_;
v___y_679_ = v___y_692_;
v___y_680_ = v___y_691_;
v___y_681_ = v___y_687_;
goto v___jp_671_;
}
}
}
v___jp_709_:
{
uint8_t v___x_719_; 
v___x_719_ = lean_strict_and(v___y_714_, v___y_718_);
if (v___y_717_ == 0)
{
v___y_683_ = v___y_712_;
v___y_684_ = v___y_711_;
v___y_685_ = v___y_710_;
v___y_686_ = v___y_713_;
v___y_687_ = v___x_719_;
v___y_688_ = v___y_714_;
v___y_689_ = v___y_715_;
v___y_690_ = v___y_716_;
v___y_691_ = v_a_436_;
v___y_692_ = v___y_437_;
goto v___jp_682_;
}
else
{
if (v_wantsRebuild_457_ == 0)
{
lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
lean_inc(v_spinnerIdx_461_);
lean_inc(v_lastUpdate_460_);
lean_inc_ref(v_resetCtrl_459_);
lean_inc_ref(v_failures_458_);
v_isSharedCheck_726_ = !lean_is_exclusive(v___y_437_);
if (v_isSharedCheck_726_ == 0)
{
lean_object* v_unused_727_; lean_object* v_unused_728_; lean_object* v_unused_729_; lean_object* v_unused_730_; lean_object* v_unused_731_; lean_object* v_unused_732_; 
v_unused_727_ = lean_ctor_get(v___y_437_, 5);
lean_dec(v_unused_727_);
v_unused_728_ = lean_ctor_get(v___y_437_, 4);
lean_dec(v_unused_728_);
v_unused_729_ = lean_ctor_get(v___y_437_, 3);
lean_dec(v_unused_729_);
v_unused_730_ = lean_ctor_get(v___y_437_, 2);
lean_dec(v_unused_730_);
v_unused_731_ = lean_ctor_get(v___y_437_, 1);
lean_dec(v_unused_731_);
v_unused_732_ = lean_ctor_get(v___y_437_, 0);
lean_dec(v_unused_732_);
v___x_721_ = v___y_437_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_dec(v___y_437_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
lean_inc(v_totalJobs_456_);
lean_inc(v_jobNo_455_);
if (v_isShared_722_ == 0)
{
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_jobNo_455_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v_totalJobs_456_);
lean_ctor_set(v_reuseFailAlloc_725_, 2, v_failures_458_);
lean_ctor_set(v_reuseFailAlloc_725_, 3, v_resetCtrl_459_);
lean_ctor_set(v_reuseFailAlloc_725_, 4, v_lastUpdate_460_);
lean_ctor_set(v_reuseFailAlloc_725_, 5, v_spinnerIdx_461_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
lean_ctor_set_uint8(v___x_724_, sizeof(void*)*6, v___y_717_);
v___y_683_ = v___y_712_;
v___y_684_ = v___y_711_;
v___y_685_ = v___y_710_;
v___y_686_ = v___y_713_;
v___y_687_ = v___x_719_;
v___y_688_ = v___y_714_;
v___y_689_ = v___y_715_;
v___y_690_ = v___y_716_;
v___y_691_ = v_a_436_;
v___y_692_ = v___x_724_;
goto v___jp_682_;
}
}
}
else
{
v___y_683_ = v___y_712_;
v___y_684_ = v___y_711_;
v___y_685_ = v___y_710_;
v___y_686_ = v___y_713_;
v___y_687_ = v___x_719_;
v___y_688_ = v___y_714_;
v___y_689_ = v___y_715_;
v___y_690_ = v___y_716_;
v___y_691_ = v_a_436_;
v___y_692_ = v___y_437_;
goto v___jp_682_;
}
}
}
v___jp_733_:
{
uint8_t v___x_742_; 
v___x_742_ = l_Lake_instOrdLogLevel_ord(v_failLv_464_, v___y_734_);
if (v___x_742_ == 2)
{
uint8_t v___x_743_; 
v___x_743_ = 0;
v___y_710_ = v___y_736_;
v___y_711_ = v___y_735_;
v___y_712_ = v___y_734_;
v___y_713_ = v___y_737_;
v___y_714_ = v___y_741_;
v___y_715_ = v___y_738_;
v___y_716_ = v___y_739_;
v___y_717_ = v___y_740_;
v___y_718_ = v___x_743_;
goto v___jp_709_;
}
else
{
uint8_t v___x_744_; 
v___x_744_ = 1;
v___y_710_ = v___y_736_;
v___y_711_ = v___y_735_;
v___y_712_ = v___y_734_;
v___y_713_ = v___y_737_;
v___y_714_ = v___y_741_;
v___y_715_ = v___y_738_;
v___y_716_ = v___y_739_;
v___y_717_ = v___y_740_;
v___y_718_ = v___x_744_;
goto v___jp_709_;
}
}
v___jp_745_:
{
lean_object* v_log_747_; uint8_t v_action_748_; uint8_t v_wantsRebuild_749_; lean_object* v_buildTime_750_; uint8_t v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; 
v_log_747_ = lean_ctor_get(v___y_746_, 0);
lean_inc_ref(v_log_747_);
v_action_748_ = lean_ctor_get_uint8(v___y_746_, sizeof(void*)*3);
v_wantsRebuild_749_ = lean_ctor_get_uint8(v___y_746_, sizeof(void*)*3 + 1);
v_buildTime_750_ = lean_ctor_get(v___y_746_, 2);
lean_inc(v_buildTime_750_);
lean_dec_ref(v___y_746_);
v___x_751_ = l_Lake_Log_maxLv(v_log_747_);
v___x_752_ = lean_array_get_size(v_log_747_);
v___x_753_ = lean_unsigned_to_nat(0u);
v___x_754_ = lean_nat_dec_eq(v___x_752_, v___x_753_);
if (v___x_754_ == 0)
{
uint8_t v___x_755_; 
v___x_755_ = 1;
v___y_734_ = v___x_751_;
v___y_735_ = v_action_748_;
v___y_736_ = v___x_753_;
v___y_737_ = v_buildTime_750_;
v___y_738_ = v_log_747_;
v___y_739_ = v___x_752_;
v___y_740_ = v_wantsRebuild_749_;
v___y_741_ = v___x_755_;
goto v___jp_733_;
}
else
{
uint8_t v___x_756_; 
v___x_756_ = 0;
v___y_734_ = v___x_751_;
v___y_735_ = v_action_748_;
v___y_736_ = v___x_753_;
v___y_737_ = v_buildTime_750_;
v___y_738_ = v_log_747_;
v___y_739_ = v___x_752_;
v___y_740_ = v_wantsRebuild_749_;
v___y_741_ = v___x_756_;
goto v___jp_733_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___boxed(lean_object* v_job_759_, lean_object* v_a_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(v_job_759_, v_a_760_, v___y_761_);
lean_dec_ref(v_a_760_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0(lean_object* v_out_764_, uint8_t v___y_765_, uint8_t v_useAnsi_766_, lean_object* v_as_767_, size_t v_i_768_, size_t v_stop_769_, lean_object* v_b_770_, lean_object* v___y_771_, lean_object* v___y_772_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_764_, v___y_765_, v_useAnsi_766_, v_as_767_, v_i_768_, v_stop_769_, v_b_770_, v___y_772_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___boxed(lean_object* v_out_775_, lean_object* v___y_776_, lean_object* v_useAnsi_777_, lean_object* v_as_778_, lean_object* v_i_779_, lean_object* v_stop_780_, lean_object* v_b_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
uint8_t v___y_14476__boxed_785_; uint8_t v_useAnsi_14477__boxed_786_; size_t v_i_boxed_787_; size_t v_stop_boxed_788_; lean_object* v_res_789_; 
v___y_14476__boxed_785_ = lean_unbox(v___y_776_);
v_useAnsi_14477__boxed_786_ = lean_unbox(v_useAnsi_777_);
v_i_boxed_787_ = lean_unbox_usize(v_i_779_);
lean_dec(v_i_779_);
v_stop_boxed_788_ = lean_unbox_usize(v_stop_780_);
lean_dec(v_stop_780_);
v_res_789_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0(v_out_775_, v___y_14476__boxed_785_, v_useAnsi_14477__boxed_786_, v_as_778_, v_i_boxed_787_, v_stop_boxed_788_, v_b_781_, v___y_782_, v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec_ref(v_as_778_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(lean_object* v_a_792_, lean_object* v___y_793_){
_start:
{
lean_object* v_jobs_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v_jobNo_799_; lean_object* v_totalJobs_800_; uint8_t v_wantsRebuild_801_; lean_object* v_failures_802_; lean_object* v_resetCtrl_803_; lean_object* v_lastUpdate_804_; lean_object* v_spinnerIdx_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_815_; 
v_jobs_795_ = lean_ctor_get(v_a_792_, 0);
v___x_796_ = lean_st_ref_take(v_jobs_795_);
v___x_797_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_798_ = lean_st_ref_put(v_jobs_795_, v___x_797_);
v_jobNo_799_ = lean_ctor_get(v___y_793_, 0);
v_totalJobs_800_ = lean_ctor_get(v___y_793_, 1);
v_wantsRebuild_801_ = lean_ctor_get_uint8(v___y_793_, sizeof(void*)*6);
v_failures_802_ = lean_ctor_get(v___y_793_, 2);
v_resetCtrl_803_ = lean_ctor_get(v___y_793_, 3);
v_lastUpdate_804_ = lean_ctor_get(v___y_793_, 4);
v_spinnerIdx_805_ = lean_ctor_get(v___y_793_, 5);
v_isSharedCheck_815_ = !lean_is_exclusive(v___y_793_);
if (v_isSharedCheck_815_ == 0)
{
v___x_807_ = v___y_793_;
v_isShared_808_ = v_isSharedCheck_815_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_spinnerIdx_805_);
lean_inc(v_lastUpdate_804_);
lean_inc(v_resetCtrl_803_);
lean_inc(v_failures_802_);
lean_inc(v_totalJobs_800_);
lean_inc(v_jobNo_799_);
lean_dec(v___y_793_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_815_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_809_ = lean_array_get_size(v___x_796_);
v___x_810_ = lean_nat_add(v_totalJobs_800_, v___x_809_);
lean_dec(v_totalJobs_800_);
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 1, v___x_810_);
v___x_812_ = v___x_807_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_jobNo_799_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v___x_810_);
lean_ctor_set(v_reuseFailAlloc_814_, 2, v_failures_802_);
lean_ctor_set(v_reuseFailAlloc_814_, 3, v_resetCtrl_803_);
lean_ctor_set(v_reuseFailAlloc_814_, 4, v_lastUpdate_804_);
lean_ctor_set(v_reuseFailAlloc_814_, 5, v_spinnerIdx_805_);
lean_ctor_set_uint8(v_reuseFailAlloc_814_, sizeof(void*)*6, v_wantsRebuild_801_);
v___x_812_ = v_reuseFailAlloc_814_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v___x_813_; 
v___x_813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_796_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
return v___x_813_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___boxed(lean_object* v_a_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v_a_816_, v___y_817_);
lean_dec_ref(v_a_816_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(lean_object* v_as_820_, size_t v_i_821_, size_t v_stop_822_, lean_object* v_b_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v_fst_828_; lean_object* v_snd_829_; uint8_t v___x_833_; 
v___x_833_ = lean_usize_dec_eq(v_i_821_, v_stop_822_);
if (v___x_833_ == 0)
{
lean_object* v_fst_834_; lean_object* v_snd_835_; lean_object* v___x_836_; lean_object* v_task_837_; uint8_t v___x_838_; 
v_fst_834_ = lean_ctor_get(v_b_823_, 0);
v_snd_835_ = lean_ctor_get(v_b_823_, 1);
v___x_836_ = lean_array_uget_borrowed(v_as_820_, v_i_821_);
v_task_837_ = lean_ctor_get(v___x_836_, 0);
v___x_838_ = lean_io_get_task_state(v_task_837_);
switch(v___x_838_)
{
case 0:
{
lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_846_; 
lean_inc(v_snd_835_);
lean_inc(v_fst_834_);
v_isSharedCheck_846_ = !lean_is_exclusive(v_b_823_);
if (v_isSharedCheck_846_ == 0)
{
lean_object* v_unused_847_; lean_object* v_unused_848_; 
v_unused_847_ = lean_ctor_get(v_b_823_, 1);
lean_dec(v_unused_847_);
v_unused_848_ = lean_ctor_get(v_b_823_, 0);
lean_dec(v_unused_848_);
v___x_840_ = v_b_823_;
v_isShared_841_ = v_isSharedCheck_846_;
goto v_resetjp_839_;
}
else
{
lean_dec(v_b_823_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_846_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_842_; lean_object* v___x_844_; 
lean_inc(v___x_836_);
v___x_842_ = lean_array_push(v_snd_835_, v___x_836_);
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 1, v___x_842_);
v___x_844_ = v___x_840_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_fst_834_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v___x_842_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
v_fst_828_ = v___x_844_;
v_snd_829_ = v___y_825_;
goto v___jp_827_;
}
}
}
case 1:
{
lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_857_; 
lean_inc(v_snd_835_);
lean_inc(v_fst_834_);
v_isSharedCheck_857_ = !lean_is_exclusive(v_b_823_);
if (v_isSharedCheck_857_ == 0)
{
lean_object* v_unused_858_; lean_object* v_unused_859_; 
v_unused_858_ = lean_ctor_get(v_b_823_, 1);
lean_dec(v_unused_858_);
v_unused_859_ = lean_ctor_get(v_b_823_, 0);
lean_dec(v_unused_859_);
v___x_850_ = v_b_823_;
v_isShared_851_ = v_isSharedCheck_857_;
goto v_resetjp_849_;
}
else
{
lean_dec(v_b_823_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_857_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
lean_inc_n(v___x_836_, 2);
v___x_852_ = lean_array_push(v_fst_834_, v___x_836_);
v___x_853_ = lean_array_push(v_snd_835_, v___x_836_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 1, v___x_853_);
lean_ctor_set(v___x_850_, 0, v___x_852_);
v___x_855_ = v___x_850_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_852_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v___x_853_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
v_fst_828_ = v___x_855_;
v_snd_829_ = v___y_825_;
goto v___jp_827_;
}
}
}
default: 
{
lean_object* v___x_860_; lean_object* v_snd_861_; lean_object* v_jobNo_862_; lean_object* v_totalJobs_863_; uint8_t v_wantsRebuild_864_; lean_object* v_failures_865_; lean_object* v_resetCtrl_866_; lean_object* v_lastUpdate_867_; lean_object* v_spinnerIdx_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_877_; 
lean_inc(v___x_836_);
v___x_860_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(v___x_836_, v___y_824_, v___y_825_);
v_snd_861_ = lean_ctor_get(v___x_860_, 1);
lean_inc(v_snd_861_);
lean_dec_ref(v___x_860_);
v_jobNo_862_ = lean_ctor_get(v_snd_861_, 0);
v_totalJobs_863_ = lean_ctor_get(v_snd_861_, 1);
v_wantsRebuild_864_ = lean_ctor_get_uint8(v_snd_861_, sizeof(void*)*6);
v_failures_865_ = lean_ctor_get(v_snd_861_, 2);
v_resetCtrl_866_ = lean_ctor_get(v_snd_861_, 3);
v_lastUpdate_867_ = lean_ctor_get(v_snd_861_, 4);
v_spinnerIdx_868_ = lean_ctor_get(v_snd_861_, 5);
v_isSharedCheck_877_ = !lean_is_exclusive(v_snd_861_);
if (v_isSharedCheck_877_ == 0)
{
v___x_870_ = v_snd_861_;
v_isShared_871_ = v_isSharedCheck_877_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_spinnerIdx_868_);
lean_inc(v_lastUpdate_867_);
lean_inc(v_resetCtrl_866_);
lean_inc(v_failures_865_);
lean_inc(v_totalJobs_863_);
lean_inc(v_jobNo_862_);
lean_dec(v_snd_861_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_877_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_875_; 
v___x_872_ = lean_unsigned_to_nat(1u);
v___x_873_ = lean_nat_add(v_jobNo_862_, v___x_872_);
lean_dec(v_jobNo_862_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 0, v___x_873_);
v___x_875_ = v___x_870_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v_totalJobs_863_);
lean_ctor_set(v_reuseFailAlloc_876_, 2, v_failures_865_);
lean_ctor_set(v_reuseFailAlloc_876_, 3, v_resetCtrl_866_);
lean_ctor_set(v_reuseFailAlloc_876_, 4, v_lastUpdate_867_);
lean_ctor_set(v_reuseFailAlloc_876_, 5, v_spinnerIdx_868_);
lean_ctor_set_uint8(v_reuseFailAlloc_876_, sizeof(void*)*6, v_wantsRebuild_864_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
v_fst_828_ = v_b_823_;
v_snd_829_ = v___x_875_;
goto v___jp_827_;
}
}
}
}
}
else
{
lean_object* v___x_878_; 
v___x_878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_878_, 0, v_b_823_);
lean_ctor_set(v___x_878_, 1, v___y_825_);
return v___x_878_;
}
v___jp_827_:
{
size_t v___x_830_; size_t v___x_831_; 
v___x_830_ = ((size_t)1ULL);
v___x_831_ = lean_usize_add(v_i_821_, v___x_830_);
v_i_821_ = v___x_831_;
v_b_823_ = v_fst_828_;
v___y_825_ = v_snd_829_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0___boxed(lean_object* v_as_879_, lean_object* v_i_880_, lean_object* v_stop_881_, lean_object* v_b_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_){
_start:
{
size_t v_i_boxed_886_; size_t v_stop_boxed_887_; lean_object* v_res_888_; 
v_i_boxed_886_ = lean_unbox_usize(v_i_880_);
lean_dec(v_i_880_);
v_stop_boxed_887_ = lean_unbox_usize(v_stop_881_);
lean_dec(v_stop_881_);
v_res_888_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_as_879_, v_i_boxed_886_, v_stop_boxed_887_, v_b_882_, v___y_883_, v___y_884_);
lean_dec_ref(v___y_883_);
lean_dec_ref(v_as_879_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(lean_object* v_new_891_, lean_object* v_unfinished_892_, lean_object* v_a_893_, lean_object* v___y_894_){
_start:
{
lean_object* v___x_896_; lean_object* v___y_898_; lean_object* v_fst_899_; lean_object* v_snd_900_; lean_object* v___y_911_; lean_object* v___x_914_; lean_object* v___x_915_; uint8_t v___x_916_; 
v___x_896_ = lean_unsigned_to_nat(0u);
v___x_914_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___closed__0));
v___x_915_ = lean_array_get_size(v_unfinished_892_);
v___x_916_ = lean_nat_dec_lt(v___x_896_, v___x_915_);
if (v___x_916_ == 0)
{
lean_object* v___x_917_; 
lean_inc_ref(v___y_894_);
v___x_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_914_);
lean_ctor_set(v___x_917_, 1, v___y_894_);
v___y_898_ = v___x_917_;
v_fst_899_ = v___x_914_;
v_snd_900_ = v___y_894_;
goto v___jp_897_;
}
else
{
uint8_t v___x_918_; 
v___x_918_ = lean_nat_dec_le(v___x_915_, v___x_915_);
if (v___x_918_ == 0)
{
if (v___x_916_ == 0)
{
lean_object* v___x_919_; 
lean_inc_ref(v___y_894_);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_914_);
lean_ctor_set(v___x_919_, 1, v___y_894_);
v___y_898_ = v___x_919_;
v_fst_899_ = v___x_914_;
v_snd_900_ = v___y_894_;
goto v___jp_897_;
}
else
{
size_t v___x_920_; size_t v___x_921_; lean_object* v___x_922_; 
v___x_920_ = ((size_t)0ULL);
v___x_921_ = lean_usize_of_nat(v___x_915_);
v___x_922_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_unfinished_892_, v___x_920_, v___x_921_, v___x_914_, v_a_893_, v___y_894_);
v___y_911_ = v___x_922_;
goto v___jp_910_;
}
}
else
{
size_t v___x_923_; size_t v___x_924_; lean_object* v___x_925_; 
v___x_923_ = ((size_t)0ULL);
v___x_924_ = lean_usize_of_nat(v___x_915_);
v___x_925_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_unfinished_892_, v___x_923_, v___x_924_, v___x_914_, v_a_893_, v___y_894_);
v___y_911_ = v___x_925_;
goto v___jp_910_;
}
}
v___jp_897_:
{
lean_object* v___x_901_; uint8_t v___x_902_; 
v___x_901_ = lean_array_get_size(v_new_891_);
v___x_902_ = lean_nat_dec_lt(v___x_896_, v___x_901_);
if (v___x_902_ == 0)
{
lean_dec_ref(v_snd_900_);
lean_dec_ref(v_fst_899_);
return v___y_898_;
}
else
{
uint8_t v___x_903_; 
v___x_903_ = lean_nat_dec_le(v___x_901_, v___x_901_);
if (v___x_903_ == 0)
{
if (v___x_902_ == 0)
{
lean_dec_ref(v_snd_900_);
lean_dec_ref(v_fst_899_);
return v___y_898_;
}
else
{
size_t v___x_904_; size_t v___x_905_; lean_object* v___x_906_; 
lean_dec_ref(v___y_898_);
v___x_904_ = ((size_t)0ULL);
v___x_905_ = lean_usize_of_nat(v___x_901_);
v___x_906_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_new_891_, v___x_904_, v___x_905_, v_fst_899_, v_a_893_, v_snd_900_);
return v___x_906_;
}
}
else
{
size_t v___x_907_; size_t v___x_908_; lean_object* v___x_909_; 
lean_dec_ref(v___y_898_);
v___x_907_ = ((size_t)0ULL);
v___x_908_ = lean_usize_of_nat(v___x_901_);
v___x_909_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_new_891_, v___x_907_, v___x_908_, v_fst_899_, v_a_893_, v_snd_900_);
return v___x_909_;
}
}
}
v___jp_910_:
{
lean_object* v_fst_912_; lean_object* v_snd_913_; 
v_fst_912_ = lean_ctor_get(v___y_911_, 0);
lean_inc(v_fst_912_);
v_snd_913_ = lean_ctor_get(v___y_911_, 1);
lean_inc(v_snd_913_);
v___y_898_ = v___y_911_;
v_fst_899_ = v_fst_912_;
v_snd_900_ = v_snd_913_;
goto v___jp_897_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___boxed(lean_object* v_new_926_, lean_object* v_unfinished_927_, lean_object* v_a_928_, lean_object* v___y_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(v_new_926_, v_unfinished_927_, v_a_928_, v___y_929_);
lean_dec_ref(v_a_928_);
lean_dec_ref(v_unfinished_927_);
lean_dec_ref(v_new_926_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep(lean_object* v_a_932_, lean_object* v___y_933_){
_start:
{
lean_object* v___y_936_; lean_object* v___x_954_; lean_object* v_lastUpdate_955_; lean_object* v_updateFrequency_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; uint8_t v___x_960_; 
v___x_954_ = lean_io_mono_ms_now();
v_lastUpdate_955_ = lean_ctor_get(v___y_933_, 4);
v_updateFrequency_956_ = lean_ctor_get(v_a_932_, 2);
v___x_957_ = lean_nat_sub(v___x_954_, v_lastUpdate_955_);
lean_dec(v___x_954_);
v___x_958_ = lean_nat_sub(v_updateFrequency_956_, v___x_957_);
lean_dec(v___x_957_);
v___x_959_ = lean_unsigned_to_nat(0u);
v___x_960_ = lean_nat_dec_lt(v___x_959_, v___x_958_);
if (v___x_960_ == 0)
{
lean_dec(v___x_958_);
v___y_936_ = v___y_933_;
goto v___jp_935_;
}
else
{
uint32_t v___x_961_; lean_object* v___x_962_; 
v___x_961_ = lean_uint32_of_nat(v___x_958_);
lean_dec(v___x_958_);
v___x_962_ = l_IO_sleep(v___x_961_);
v___y_936_ = v___y_933_;
goto v___jp_935_;
}
v___jp_935_:
{
lean_object* v___x_937_; lean_object* v_jobNo_938_; lean_object* v_totalJobs_939_; uint8_t v_wantsRebuild_940_; lean_object* v_failures_941_; lean_object* v_resetCtrl_942_; lean_object* v_spinnerIdx_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_952_; 
v___x_937_ = lean_io_mono_ms_now();
v_jobNo_938_ = lean_ctor_get(v___y_936_, 0);
v_totalJobs_939_ = lean_ctor_get(v___y_936_, 1);
v_wantsRebuild_940_ = lean_ctor_get_uint8(v___y_936_, sizeof(void*)*6);
v_failures_941_ = lean_ctor_get(v___y_936_, 2);
v_resetCtrl_942_ = lean_ctor_get(v___y_936_, 3);
v_spinnerIdx_943_ = lean_ctor_get(v___y_936_, 5);
v_isSharedCheck_952_ = !lean_is_exclusive(v___y_936_);
if (v_isSharedCheck_952_ == 0)
{
lean_object* v_unused_953_; 
v_unused_953_ = lean_ctor_get(v___y_936_, 4);
lean_dec(v_unused_953_);
v___x_945_ = v___y_936_;
v_isShared_946_ = v_isSharedCheck_952_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_spinnerIdx_943_);
lean_inc(v_resetCtrl_942_);
lean_inc(v_failures_941_);
lean_inc(v_totalJobs_939_);
lean_inc(v_jobNo_938_);
lean_dec(v___y_936_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_952_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_949_; 
v___x_947_ = lean_box(0);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 4, v___x_937_);
v___x_949_ = v___x_945_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_jobNo_938_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v_totalJobs_939_);
lean_ctor_set(v_reuseFailAlloc_951_, 2, v_failures_941_);
lean_ctor_set(v_reuseFailAlloc_951_, 3, v_resetCtrl_942_);
lean_ctor_set(v_reuseFailAlloc_951_, 4, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_951_, 5, v_spinnerIdx_943_);
lean_ctor_set_uint8(v_reuseFailAlloc_951_, sizeof(void*)*6, v_wantsRebuild_940_);
v___x_949_ = v_reuseFailAlloc_951_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
lean_object* v___x_950_; 
v___x_950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_947_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
return v___x_950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep___boxed(lean_object* v_a_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l___private_Lake_Build_Run_0__Lake_Monitor_sleep(v_a_963_, v___y_964_);
lean_dec_ref(v_a_963_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop(lean_object* v_new_967_, lean_object* v_unfinished_968_, lean_object* v_a_969_, lean_object* v___y_970_){
_start:
{
lean_object* v___x_972_; lean_object* v_fst_973_; lean_object* v_snd_974_; lean_object* v_fst_975_; lean_object* v_snd_976_; lean_object* v___y_978_; lean_object* v___y_979_; uint8_t v_failFast_1005_; 
v___x_972_ = l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(v_new_967_, v_unfinished_968_, v_a_969_, v___y_970_);
lean_dec_ref(v_unfinished_968_);
lean_dec_ref(v_new_967_);
v_fst_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_fst_973_);
v_snd_974_ = lean_ctor_get(v___x_972_, 1);
lean_inc(v_snd_974_);
lean_dec_ref(v___x_972_);
v_fst_975_ = lean_ctor_get(v_fst_973_, 0);
lean_inc(v_fst_975_);
v_snd_976_ = lean_ctor_get(v_fst_973_, 1);
lean_inc(v_snd_976_);
lean_dec(v_fst_973_);
v_failFast_1005_ = lean_ctor_get_uint8(v_a_969_, sizeof(void*)*4 + 7);
if (v_failFast_1005_ == 0)
{
v___y_978_ = v_a_969_;
v___y_979_ = v_snd_974_;
goto v___jp_977_;
}
else
{
lean_object* v_cancelTk_x3f_1006_; 
v_cancelTk_x3f_1006_ = lean_ctor_get(v_a_969_, 3);
if (lean_obj_tag(v_cancelTk_x3f_1006_) == 1)
{
lean_object* v_val_1007_; lean_object* v_failures_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
v_val_1007_ = lean_ctor_get(v_cancelTk_x3f_1006_, 0);
v_failures_1008_ = lean_ctor_get(v_snd_974_, 2);
v___x_1009_ = lean_array_get_size(v_failures_1008_);
v___x_1010_ = lean_unsigned_to_nat(0u);
v___x_1011_ = lean_nat_dec_eq(v___x_1009_, v___x_1010_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; 
v___x_1012_ = l_IO_CancelToken_set(v_val_1007_);
v___y_978_ = v_a_969_;
v___y_979_ = v_snd_974_;
goto v___jp_977_;
}
else
{
v___y_978_ = v_a_969_;
v___y_979_ = v_snd_974_;
goto v___jp_977_;
}
}
else
{
v___y_978_ = v_a_969_;
v___y_979_ = v_snd_974_;
goto v___jp_977_;
}
}
v___jp_977_:
{
lean_object* v___x_980_; lean_object* v___x_981_; uint8_t v___x_982_; 
v___x_980_ = lean_unsigned_to_nat(0u);
v___x_981_ = lean_array_get_size(v_snd_976_);
v___x_982_ = lean_nat_dec_lt(v___x_980_, v___x_981_);
if (v___x_982_ == 0)
{
lean_object* v___x_983_; lean_object* v_fst_984_; lean_object* v_snd_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_996_; 
lean_dec(v_fst_975_);
v___x_983_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v___y_978_, v___y_979_);
v_fst_984_ = lean_ctor_get(v___x_983_, 0);
v_snd_985_ = lean_ctor_get(v___x_983_, 1);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_996_ == 0)
{
v___x_987_ = v___x_983_;
v_isShared_988_ = v_isSharedCheck_996_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_snd_985_);
lean_inc(v_fst_984_);
lean_dec(v___x_983_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_996_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_989_; uint8_t v___x_990_; 
v___x_989_ = lean_array_get_size(v_fst_984_);
v___x_990_ = lean_nat_dec_lt(v___x_980_, v___x_989_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; lean_object* v___x_993_; 
lean_dec(v_fst_984_);
lean_dec(v_snd_976_);
v___x_991_ = lean_box(0);
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 0, v___x_991_);
v___x_993_ = v___x_987_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_991_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_snd_985_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
else
{
lean_del_object(v___x_987_);
v_new_967_ = v_fst_984_;
v_unfinished_968_ = v_snd_976_;
v_a_969_ = v___y_978_;
v___y_970_ = v_snd_985_;
goto _start;
}
}
}
else
{
lean_object* v___x_997_; lean_object* v_snd_998_; lean_object* v___x_999_; lean_object* v_snd_1000_; lean_object* v___x_1001_; lean_object* v_fst_1002_; lean_object* v_snd_1003_; 
v___x_997_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_fst_975_, v_snd_976_, v___y_978_, v___y_979_);
lean_dec(v_fst_975_);
v_snd_998_ = lean_ctor_get(v___x_997_, 1);
lean_inc(v_snd_998_);
lean_dec_ref(v___x_997_);
v___x_999_ = l___private_Lake_Build_Run_0__Lake_Monitor_sleep(v___y_978_, v_snd_998_);
v_snd_1000_ = lean_ctor_get(v___x_999_, 1);
lean_inc(v_snd_1000_);
lean_dec_ref(v___x_999_);
v___x_1001_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v___y_978_, v_snd_1000_);
v_fst_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc(v_fst_1002_);
v_snd_1003_ = lean_ctor_get(v___x_1001_, 1);
lean_inc(v_snd_1003_);
lean_dec_ref(v___x_1001_);
v_new_967_ = v_fst_1002_;
v_unfinished_968_ = v_snd_976_;
v_a_969_ = v___y_978_;
v___y_970_ = v_snd_1003_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop___boxed(lean_object* v_new_1013_, lean_object* v_unfinished_1014_, lean_object* v_a_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l___private_Lake_Build_Run_0__Lake_Monitor_loop(v_new_1013_, v_unfinished_1014_, v_a_1015_, v___y_1016_);
lean_dec_ref(v_a_1015_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main(lean_object* v_init_1019_, lean_object* v_a_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v___x_1023_; lean_object* v_fst_1024_; lean_object* v_snd_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1094_; 
v___x_1023_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v_a_1020_, v___y_1021_);
v_fst_1024_ = lean_ctor_get(v___x_1023_, 0);
v_snd_1025_ = lean_ctor_get(v___x_1023_, 1);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1027_ = v___x_1023_;
v_isShared_1028_ = v_isSharedCheck_1094_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_snd_1025_);
lean_inc(v_fst_1024_);
lean_dec(v___x_1023_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1094_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1029_; lean_object* v_snd_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1092_; 
v___x_1029_ = l___private_Lake_Build_Run_0__Lake_Monitor_loop(v_fst_1024_, v_init_1019_, v_a_1020_, v_snd_1025_);
v_snd_1030_ = lean_ctor_get(v___x_1029_, 1);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1092_ == 0)
{
lean_object* v_unused_1093_; 
v_unused_1093_ = lean_ctor_get(v___x_1029_, 0);
lean_dec(v_unused_1093_);
v___x_1032_ = v___x_1029_;
v_isShared_1033_ = v_isSharedCheck_1092_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_snd_1030_);
lean_dec(v___x_1029_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1092_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v_jobNo_1034_; lean_object* v_totalJobs_1035_; uint8_t v_wantsRebuild_1036_; lean_object* v_failures_1037_; lean_object* v_resetCtrl_1038_; lean_object* v_lastUpdate_1039_; lean_object* v_spinnerIdx_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1091_; 
v_jobNo_1034_ = lean_ctor_get(v_snd_1030_, 0);
v_totalJobs_1035_ = lean_ctor_get(v_snd_1030_, 1);
v_wantsRebuild_1036_ = lean_ctor_get_uint8(v_snd_1030_, sizeof(void*)*6);
v_failures_1037_ = lean_ctor_get(v_snd_1030_, 2);
v_resetCtrl_1038_ = lean_ctor_get(v_snd_1030_, 3);
v_lastUpdate_1039_ = lean_ctor_get(v_snd_1030_, 4);
v_spinnerIdx_1040_ = lean_ctor_get(v_snd_1030_, 5);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_snd_1030_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1042_ = v_snd_1030_;
v_isShared_1043_ = v_isSharedCheck_1091_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_spinnerIdx_1040_);
lean_inc(v_lastUpdate_1039_);
lean_inc(v_resetCtrl_1038_);
lean_inc(v_failures_1037_);
lean_inc(v_totalJobs_1035_);
lean_inc(v_jobNo_1034_);
lean_dec(v_snd_1030_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1091_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; lean_object* v___x_1046_; 
v___x_1044_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 3, v___x_1044_);
v___x_1046_ = v___x_1042_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_jobNo_1034_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v_totalJobs_1035_);
lean_ctor_set(v_reuseFailAlloc_1090_, 2, v_failures_1037_);
lean_ctor_set(v_reuseFailAlloc_1090_, 3, v___x_1044_);
lean_ctor_set(v_reuseFailAlloc_1090_, 4, v_lastUpdate_1039_);
lean_ctor_set(v_reuseFailAlloc_1090_, 5, v_spinnerIdx_1040_);
lean_ctor_set_uint8(v_reuseFailAlloc_1090_, sizeof(void*)*6, v_wantsRebuild_1036_);
v___x_1046_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
lean_object* v_val_1048_; lean_object* v___x_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v___x_1052_ = lean_string_utf8_byte_size(v_resetCtrl_1038_);
v___x_1053_ = lean_unsigned_to_nat(0u);
v___x_1054_ = lean_nat_dec_eq(v___x_1052_, v___x_1053_);
if (v___x_1054_ == 0)
{
lean_object* v_out_1055_; lean_object* v_flush_1056_; lean_object* v_putStr_1057_; lean_object* v___x_1062_; 
lean_del_object(v___x_1027_);
v_out_1055_ = lean_ctor_get(v_a_1020_, 1);
v_flush_1056_ = lean_ctor_get(v_out_1055_, 0);
v_putStr_1057_ = lean_ctor_get(v_out_1055_, 4);
lean_inc_ref(v_putStr_1057_);
lean_inc_ref(v_resetCtrl_1038_);
v___x_1062_ = lean_apply_2(v_putStr_1057_, v_resetCtrl_1038_, lean_box(0));
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_dec_ref_known(v___x_1062_, 1);
lean_dec_ref(v_resetCtrl_1038_);
goto v___jp_1058_;
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1085_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1065_ = v___x_1062_;
v_isShared_1066_ = v_isSharedCheck_1085_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1062_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1085_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1078_; 
v___x_1067_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1068_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1069_ = lean_unsigned_to_nat(82u);
v___x_1070_ = lean_unsigned_to_nat(4u);
v___x_1071_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_1072_ = lean_io_error_to_string(v_a_1063_);
v___x_1073_ = lean_string_append(v___x_1071_, v___x_1072_);
lean_dec_ref(v___x_1072_);
v___x_1074_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1075_ = lean_string_append(v___x_1073_, v___x_1074_);
v___x_1076_ = l_String_quote(v_resetCtrl_1038_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set_tag(v___x_1065_, 3);
lean_ctor_set(v___x_1065_, 0, v___x_1076_);
v___x_1078_ = v___x_1065_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1076_);
v___x_1078_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1079_ = l_Std_Format_defWidth;
v___x_1080_ = l_Std_Format_pretty(v___x_1078_, v___x_1079_, v___x_1053_, v___x_1053_);
v___x_1081_ = lean_string_append(v___x_1075_, v___x_1080_);
lean_dec_ref(v___x_1080_);
v___x_1082_ = l_mkPanicMessageWithDecl(v___x_1067_, v___x_1068_, v___x_1069_, v___x_1070_, v___x_1081_);
lean_dec_ref(v___x_1081_);
v___x_1083_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1082_);
goto v___jp_1058_;
}
}
}
v___jp_1058_:
{
lean_object* v___x_1059_; 
lean_inc_ref(v_flush_1056_);
v___x_1059_ = lean_apply_1(v_flush_1056_, lean_box(0));
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v_a_1060_; 
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v___x_1059_, 1);
v_val_1048_ = v_a_1060_;
goto v___jp_1047_;
}
else
{
lean_object* v___x_1061_; 
lean_dec_ref_known(v___x_1059_, 1);
v___x_1061_ = lean_box(0);
v_val_1048_ = v___x_1061_;
goto v___jp_1047_;
}
}
}
else
{
lean_object* v___x_1086_; lean_object* v___x_1088_; 
lean_dec_ref(v_resetCtrl_1038_);
lean_del_object(v___x_1032_);
v___x_1086_ = lean_box(0);
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 1, v___x_1046_);
lean_ctor_set(v___x_1027_, 0, v___x_1086_);
v___x_1088_ = v___x_1027_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1086_);
lean_ctor_set(v_reuseFailAlloc_1089_, 1, v___x_1046_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
v___jp_1047_:
{
lean_object* v___x_1050_; 
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 1, v___x_1046_);
lean_ctor_set(v___x_1032_, 0, v_val_1048_);
v___x_1050_ = v___x_1032_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_val_1048_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v___x_1046_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main___boxed(lean_object* v_init_1095_, lean_object* v_a_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l___private_Lake_Build_Run_0__Lake_Monitor_main(v_init_1095_, v_a_1096_, v___y_1097_);
lean_dec_ref(v_a_1096_);
return v_res_1099_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk(lean_object* v_self_1100_){
_start:
{
lean_object* v_failures_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; 
v_failures_1101_ = lean_ctor_get(v_self_1100_, 0);
v___x_1102_ = lean_array_get_size(v_failures_1101_);
v___x_1103_ = lean_unsigned_to_nat(0u);
v___x_1104_ = lean_nat_dec_eq(v___x_1102_, v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk___boxed(lean_object* v_self_1105_){
_start:
{
uint8_t v_res_1106_; lean_object* v_r_1107_; 
v_res_1106_ = l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk(v_self_1105_);
lean_dec_ref(v_self_1105_);
v_r_1107_ = lean_box(v_res_1106_);
return v_r_1107_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0(void){
_start:
{
uint8_t v___x_1108_; lean_object* v___x_1109_; 
v___x_1108_ = 2;
v___x_1109_ = l_Lake_Verbosity_ctorIdx(v___x_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext(lean_object* v_cfg_1110_, lean_object* v_jobs_1111_, lean_object* v_cancelTk_x3f_1112_){
_start:
{
lean_object* v_toLogConfig_1114_; uint8_t v_failFast_1115_; uint8_t v_verbosity_1116_; uint8_t v_failLv_1117_; uint8_t v_outLv_1118_; uint8_t v_ansiMode_1119_; lean_object* v_out_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; uint8_t v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; uint8_t v___x_1126_; uint8_t v___y_1128_; uint8_t v___y_1129_; uint8_t v___y_1133_; 
v_toLogConfig_1114_ = lean_ctor_get(v_cfg_1110_, 0);
v_failFast_1115_ = lean_ctor_get_uint8(v_cfg_1110_, sizeof(void*)*4 + 3);
v_verbosity_1116_ = lean_ctor_get_uint8(v_cfg_1110_, sizeof(void*)*4 + 4);
v_failLv_1117_ = lean_ctor_get_uint8(v_toLogConfig_1114_, sizeof(void*)*1);
v_outLv_1118_ = lean_ctor_get_uint8(v_toLogConfig_1114_, sizeof(void*)*1 + 1);
v_ansiMode_1119_ = lean_ctor_get_uint8(v_toLogConfig_1114_, sizeof(void*)*1 + 2);
v_out_1120_ = lean_ctor_get(v_toLogConfig_1114_, 0);
v___x_1121_ = l_Lake_OutStream_get(v_out_1120_);
lean_inc_ref(v___x_1121_);
v___x_1122_ = l_Lake_AnsiMode_isEnabled(v___x_1121_, v_ansiMode_1119_);
v___x_1123_ = l_Lake_BuildConfig_showProgress(v_cfg_1110_);
v___x_1124_ = l_Lake_Verbosity_ctorIdx(v_verbosity_1116_);
v___x_1125_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0, &l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_mkMonitorContext___closed__0);
v___x_1126_ = lean_nat_dec_eq(v___x_1124_, v___x_1125_);
lean_dec(v___x_1124_);
if (v___x_1126_ == 0)
{
uint8_t v___x_1135_; 
v___x_1135_ = 3;
v___y_1133_ = v___x_1135_;
goto v___jp_1132_;
}
else
{
uint8_t v___x_1136_; 
v___x_1136_ = 0;
v___y_1133_ = v___x_1136_;
goto v___jp_1132_;
}
v___jp_1127_:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1130_ = lean_unsigned_to_nat(100u);
v___x_1131_ = lean_alloc_ctor(0, 4, 8);
lean_ctor_set(v___x_1131_, 0, v_jobs_1111_);
lean_ctor_set(v___x_1131_, 1, v___x_1121_);
lean_ctor_set(v___x_1131_, 2, v___x_1130_);
lean_ctor_set(v___x_1131_, 3, v_cancelTk_x3f_1112_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*4, v_outLv_1118_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*4 + 1, v_failLv_1117_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*4 + 2, v___y_1128_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*4 + 3, v___x_1126_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*4 + 4, v___x_1122_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*4 + 5, v___x_1123_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*4 + 6, v___y_1129_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*4 + 7, v_failFast_1115_);
return v___x_1131_;
}
v___jp_1132_:
{
if (v___x_1126_ == 0)
{
if (v___x_1122_ == 0)
{
uint8_t v___x_1134_; 
v___x_1134_ = 1;
v___y_1128_ = v___y_1133_;
v___y_1129_ = v___x_1134_;
goto v___jp_1127_;
}
else
{
v___y_1128_ = v___y_1133_;
v___y_1129_ = v___x_1126_;
goto v___jp_1127_;
}
}
else
{
v___y_1128_ = v___y_1133_;
v___y_1129_ = v___x_1126_;
goto v___jp_1127_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext___boxed(lean_object* v_cfg_1137_, lean_object* v_jobs_1138_, lean_object* v_cancelTk_x3f_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_1137_, v_jobs_1138_, v_cancelTk_x3f_1139_);
lean_dec_ref(v_cfg_1137_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(lean_object* v_ctx_1142_, lean_object* v_initJobs_1143_, lean_object* v_initFailures_1144_, lean_object* v_resetCtrl_1145_){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; uint8_t v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v_snd_1152_; lean_object* v_totalJobs_1153_; uint8_t v_wantsRebuild_1154_; lean_object* v_failures_1155_; lean_object* v___x_1156_; 
v___x_1147_ = lean_io_mono_ms_now();
v___x_1148_ = lean_unsigned_to_nat(0u);
v___x_1149_ = 0;
v___x_1150_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_1150_, 0, v___x_1148_);
lean_ctor_set(v___x_1150_, 1, v___x_1148_);
lean_ctor_set(v___x_1150_, 2, v_initFailures_1144_);
lean_ctor_set(v___x_1150_, 3, v_resetCtrl_1145_);
lean_ctor_set(v___x_1150_, 4, v___x_1147_);
lean_ctor_set(v___x_1150_, 5, v___x_1148_);
lean_ctor_set_uint8(v___x_1150_, sizeof(void*)*6, v___x_1149_);
v___x_1151_ = l___private_Lake_Build_Run_0__Lake_Monitor_main(v_initJobs_1143_, v_ctx_1142_, v___x_1150_);
v_snd_1152_ = lean_ctor_get(v___x_1151_, 1);
lean_inc(v_snd_1152_);
lean_dec_ref(v___x_1151_);
v_totalJobs_1153_ = lean_ctor_get(v_snd_1152_, 1);
lean_inc(v_totalJobs_1153_);
v_wantsRebuild_1154_ = lean_ctor_get_uint8(v_snd_1152_, sizeof(void*)*6);
v_failures_1155_ = lean_ctor_get(v_snd_1152_, 2);
lean_inc_ref(v_failures_1155_);
lean_dec(v_snd_1152_);
v___x_1156_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1156_, 0, v_failures_1155_);
lean_ctor_set(v___x_1156_, 1, v_totalJobs_1153_);
lean_ctor_set_uint8(v___x_1156_, sizeof(void*)*2, v_wantsRebuild_1154_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27___boxed(lean_object* v_ctx_1157_, lean_object* v_initJobs_1158_, lean_object* v_initFailures_1159_, lean_object* v_resetCtrl_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1157_, v_initJobs_1158_, v_initFailures_1159_, v_resetCtrl_1160_);
lean_dec_ref(v_ctx_1157_);
return v_res_1162_;
}
}
LEAN_EXPORT lean_object* l_Lake_monitorJobs(lean_object* v_initJobs_1163_, lean_object* v_jobs_1164_, lean_object* v_out_1165_, uint8_t v_failLv_1166_, uint8_t v_outLv_1167_, uint8_t v_minAction_1168_, uint8_t v_showOptional_1169_, uint8_t v_useAnsi_1170_, uint8_t v_showProgress_1171_, uint8_t v_showTime_1172_, lean_object* v_resetCtrl_1173_, lean_object* v_initFailures_1174_, lean_object* v_updateFrequency_1175_){
_start:
{
uint8_t v___x_1177_; lean_object* v___x_1178_; lean_object* v_ctx_1179_; lean_object* v___x_1180_; 
v___x_1177_ = 0;
v___x_1178_ = lean_box(0);
v_ctx_1179_ = lean_alloc_ctor(0, 4, 8);
lean_ctor_set(v_ctx_1179_, 0, v_jobs_1164_);
lean_ctor_set(v_ctx_1179_, 1, v_out_1165_);
lean_ctor_set(v_ctx_1179_, 2, v_updateFrequency_1175_);
lean_ctor_set(v_ctx_1179_, 3, v___x_1178_);
lean_ctor_set_uint8(v_ctx_1179_, sizeof(void*)*4, v_outLv_1167_);
lean_ctor_set_uint8(v_ctx_1179_, sizeof(void*)*4 + 1, v_failLv_1166_);
lean_ctor_set_uint8(v_ctx_1179_, sizeof(void*)*4 + 2, v_minAction_1168_);
lean_ctor_set_uint8(v_ctx_1179_, sizeof(void*)*4 + 3, v_showOptional_1169_);
lean_ctor_set_uint8(v_ctx_1179_, sizeof(void*)*4 + 4, v_useAnsi_1170_);
lean_ctor_set_uint8(v_ctx_1179_, sizeof(void*)*4 + 5, v_showProgress_1171_);
lean_ctor_set_uint8(v_ctx_1179_, sizeof(void*)*4 + 6, v_showTime_1172_);
lean_ctor_set_uint8(v_ctx_1179_, sizeof(void*)*4 + 7, v___x_1177_);
v___x_1180_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1179_, v_initJobs_1163_, v_initFailures_1174_, v_resetCtrl_1173_);
lean_dec_ref_known(v_ctx_1179_, 4);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lake_monitorJobs___boxed(lean_object* v_initJobs_1181_, lean_object* v_jobs_1182_, lean_object* v_out_1183_, lean_object* v_failLv_1184_, lean_object* v_outLv_1185_, lean_object* v_minAction_1186_, lean_object* v_showOptional_1187_, lean_object* v_useAnsi_1188_, lean_object* v_showProgress_1189_, lean_object* v_showTime_1190_, lean_object* v_resetCtrl_1191_, lean_object* v_initFailures_1192_, lean_object* v_updateFrequency_1193_, lean_object* v___y_1194_){
_start:
{
uint8_t v_failLv_boxed_1195_; uint8_t v_outLv_boxed_1196_; uint8_t v_minAction_boxed_1197_; uint8_t v_showOptional_boxed_1198_; uint8_t v_useAnsi_boxed_1199_; uint8_t v_showProgress_boxed_1200_; uint8_t v_showTime_boxed_1201_; lean_object* v_res_1202_; 
v_failLv_boxed_1195_ = lean_unbox(v_failLv_1184_);
v_outLv_boxed_1196_ = lean_unbox(v_outLv_1185_);
v_minAction_boxed_1197_ = lean_unbox(v_minAction_1186_);
v_showOptional_boxed_1198_ = lean_unbox(v_showOptional_1187_);
v_useAnsi_boxed_1199_ = lean_unbox(v_useAnsi_1188_);
v_showProgress_boxed_1200_ = lean_unbox(v_showProgress_1189_);
v_showTime_boxed_1201_ = lean_unbox(v_showTime_1190_);
v_res_1202_ = l_Lake_monitorJobs(v_initJobs_1181_, v_jobs_1182_, v_out_1183_, v_failLv_boxed_1195_, v_outLv_boxed_1196_, v_minAction_boxed_1197_, v_showOptional_boxed_1198_, v_useAnsi_boxed_1199_, v_showProgress_boxed_1200_, v_showTime_boxed_1201_, v_resetCtrl_1191_, v_initFailures_1192_, v_updateFrequency_1193_);
return v_res_1202_;
}
}
static uint32_t _init_l_Lake_noBuildCode(void){
_start:
{
uint32_t v___x_1203_; 
v___x_1203_ = 3;
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___lam__0(lean_object* v_logger_1204_, lean_object* v_x_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = lean_apply_2(v_logger_1204_, v___y_1206_, lean_box(0));
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___lam__0___boxed(lean_object* v_logger_1209_, lean_object* v_x_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___lam__0(v_logger_1209_, v_x_1210_, v___y_1211_);
return v_res_1213_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__5(void){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__4));
v___x_1224_ = l_String_quote(v___x_1223_);
return v___x_1224_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__6(void){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__5, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__5_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__5);
v___x_1226_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
return v___x_1226_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7(void){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1227_ = lean_unsigned_to_nat(0u);
v___x_1228_ = l_Std_Format_defWidth;
v___x_1229_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__6, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__6_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__6);
v___x_1230_ = l_Std_Format_pretty(v___x_1229_, v___x_1228_, v___x_1227_, v___x_1227_);
return v___x_1230_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__9(void){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__8));
v___x_1233_ = l_String_quote(v___x_1232_);
return v___x_1233_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__10(void){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__9, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__9_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__9);
v___x_1235_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
return v___x_1235_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1236_ = lean_unsigned_to_nat(0u);
v___x_1237_ = l_Std_Format_defWidth;
v___x_1238_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__10, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__10);
v___x_1239_ = l_Std_Format_pretty(v___x_1238_, v___x_1237_, v___x_1236_, v___x_1236_);
return v___x_1239_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__13(void){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1241_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__12));
v___x_1242_ = l_String_quote(v___x_1241_);
return v___x_1242_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__14(void){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1243_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__13, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__13_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__13);
v___x_1244_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1243_);
return v___x_1244_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15(void){
_start:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1245_ = lean_unsigned_to_nat(0u);
v___x_1246_ = l_Std_Format_defWidth;
v___x_1247_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__14, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__14_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__14);
v___x_1248_ = l_Std_Format_pretty(v___x_1247_, v___x_1246_, v___x_1245_, v___x_1245_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs(lean_object* v_logger_1250_, lean_object* v_ws_1251_, lean_object* v_outputsRef_x3f_1252_, lean_object* v_out_1253_, lean_object* v_outputsFile_1254_, uint8_t v_isVerbose_1255_){
_start:
{
lean_object* v___f_1259_; lean_object* v___x_1260_; lean_object* v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1272_; lean_object* v___y_1273_; uint8_t v___x_1363_; 
lean_inc_ref(v_logger_1250_);
v___f_1259_ = lean_alloc_closure((void*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1259_, 0, v_logger_1250_);
v___x_1260_ = l_instMonadBaseIO;
v___x_1363_ = l_Lake_Workspace_isRootArtifactCacheWritable(v_ws_1251_);
if (v___x_1363_ == 0)
{
lean_object* v_packages_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v_baseName_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; uint8_t v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
v_packages_1364_ = lean_ctor_get(v_ws_1251_, 4);
v___x_1365_ = lean_unsigned_to_nat(0u);
v___x_1366_ = lean_array_fget_borrowed(v_packages_1364_, v___x_1365_);
v_baseName_1367_ = lean_ctor_get(v___x_1366_, 1);
lean_inc(v_baseName_1367_);
v___x_1368_ = l_Lean_Name_toString(v_baseName_1367_, v___x_1363_);
v___x_1369_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__16));
v___x_1370_ = lean_string_append(v___x_1368_, v___x_1369_);
v___x_1371_ = 2;
v___x_1372_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1372_, 0, v___x_1370_);
lean_ctor_set_uint8(v___x_1372_, sizeof(void*)*1, v___x_1371_);
v___x_1373_ = lean_apply_2(v_logger_1250_, v___x_1372_, lean_box(0));
goto v___jp_1282_;
}
else
{
lean_dec_ref(v_logger_1250_);
goto v___jp_1282_;
}
v___jp_1257_:
{
lean_object* v___x_1258_; 
v___x_1258_ = lean_box(0);
return v___x_1258_;
}
v___jp_1261_:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; 
v___x_1264_ = lean_array_get_size(v___y_1262_);
v___x_1265_ = lean_box(0);
v___x_1266_ = lean_nat_dec_lt(v___y_1263_, v___x_1264_);
if (v___x_1266_ == 0)
{
lean_dec_ref(v___y_1262_);
lean_dec_ref(v___f_1259_);
return v___x_1265_;
}
else
{
size_t v___x_1267_; size_t v___x_1268_; lean_object* v___x_1355__overap_1269_; lean_object* v___x_1270_; 
v___x_1267_ = ((size_t)0ULL);
v___x_1268_ = lean_usize_of_nat(v___x_1264_);
v___x_1355__overap_1269_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1260_, v___f_1259_, v___y_1262_, v___x_1267_, v___x_1268_, v___x_1265_);
v___x_1270_ = lean_apply_1(v___x_1355__overap_1269_, lean_box(0));
return v___x_1270_;
}
}
v___jp_1271_:
{
if (v_isVerbose_1255_ == 0)
{
lean_object* v___x_1274_; 
lean_dec_ref(v___y_1272_);
lean_dec_ref(v___f_1259_);
v___x_1274_ = lean_box(0);
return v___x_1274_;
}
else
{
lean_object* v___x_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1275_ = lean_array_get_size(v___y_1272_);
v___x_1276_ = lean_box(0);
v___x_1277_ = lean_nat_dec_lt(v___y_1273_, v___x_1275_);
if (v___x_1277_ == 0)
{
lean_dec_ref(v___y_1272_);
lean_dec_ref(v___f_1259_);
return v___x_1276_;
}
else
{
size_t v___x_1278_; size_t v___x_1279_; lean_object* v___x_1286__overap_1280_; lean_object* v___x_1281_; 
v___x_1278_ = ((size_t)0ULL);
v___x_1279_ = lean_usize_of_nat(v___x_1275_);
v___x_1286__overap_1280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1260_, v___f_1259_, v___y_1272_, v___x_1278_, v___x_1279_, v___x_1276_);
v___x_1281_ = lean_apply_1(v___x_1286__overap_1280_, lean_box(0));
return v___x_1281_;
}
}
}
v___jp_1282_:
{
if (lean_obj_tag(v_outputsRef_x3f_1252_) == 1)
{
lean_object* v_val_1283_; lean_object* v___x_1284_; lean_object* v_packages_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v_config_1288_; lean_object* v_toLeanConfig_1289_; lean_object* v_platformIndependent_1290_; lean_object* v___f_1291_; lean_object* v___x_1292_; uint8_t v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v_val_1283_ = lean_ctor_get(v_outputsRef_x3f_1252_, 0);
v___x_1284_ = lean_st_ref_get(v_val_1283_);
v_packages_1285_ = lean_ctor_get(v_ws_1251_, 4);
v___x_1286_ = lean_unsigned_to_nat(0u);
v___x_1287_ = lean_array_fget_borrowed(v_packages_1285_, v___x_1286_);
v_config_1288_ = lean_ctor_get(v___x_1287_, 6);
v_toLeanConfig_1289_ = lean_ctor_get(v_config_1288_, 1);
v_platformIndependent_1290_ = lean_ctor_get(v_toLeanConfig_1289_, 10);
v___f_1291_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__1));
v___x_1292_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__2));
lean_inc(v_platformIndependent_1290_);
v___x_1293_ = l_Option_instBEq_beq___redArg(v___f_1291_, v_platformIndependent_1290_, v___x_1292_);
v___x_1294_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__3));
v___x_1295_ = l_Lake_CacheMap_writeFile(v_outputsFile_1254_, v___x_1284_, v___x_1293_, v___x_1294_);
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_object* v_a_1296_; lean_object* v___x_1297_; uint8_t v___x_1298_; 
v_a_1296_ = lean_ctor_get(v___x_1295_, 1);
lean_inc(v_a_1296_);
lean_dec_ref_known(v___x_1295_, 2);
v___x_1297_ = lean_array_get_size(v_a_1296_);
v___x_1298_ = lean_nat_dec_eq(v___x_1297_, v___x_1286_);
if (v___x_1298_ == 0)
{
if (v_isVerbose_1255_ == 0)
{
lean_dec(v_a_1296_);
lean_dec_ref(v___f_1259_);
lean_dec_ref(v_out_1253_);
goto v___jp_1257_;
}
else
{
lean_object* v_putStr_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v_putStr_1299_ = lean_ctor_get(v_out_1253_, 4);
lean_inc_ref(v_putStr_1299_);
lean_dec_ref(v_out_1253_);
v___x_1300_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__4));
v___x_1301_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1302_ = lean_apply_2(v_putStr_1299_, v___x_1300_, lean_box(0));
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_dec_ref_known(v___x_1302_, 1);
v___y_1262_ = v_a_1296_;
v___y_1263_ = v___x_1286_;
goto v___jp_1261_;
}
else
{
lean_object* v_a_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1562__overap_1321_; lean_object* v___x_1322_; 
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_a_1303_);
lean_dec_ref_known(v___x_1302_, 1);
v___x_1304_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1305_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1306_ = lean_unsigned_to_nat(82u);
v___x_1307_ = lean_unsigned_to_nat(4u);
v___x_1308_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1309_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_1310_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1309_, v_isVerbose_1255_);
v___x_1311_ = lean_string_append(v___x_1308_, v___x_1310_);
lean_dec_ref(v___x_1310_);
v___x_1312_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_1313_ = lean_string_append(v___x_1311_, v___x_1312_);
v___x_1314_ = lean_io_error_to_string(v_a_1303_);
v___x_1315_ = lean_string_append(v___x_1313_, v___x_1314_);
lean_dec_ref(v___x_1314_);
v___x_1316_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1317_ = lean_string_append(v___x_1315_, v___x_1316_);
v___x_1318_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7);
v___x_1319_ = lean_string_append(v___x_1317_, v___x_1318_);
v___x_1320_ = l_mkPanicMessageWithDecl(v___x_1304_, v___x_1305_, v___x_1306_, v___x_1307_, v___x_1319_);
lean_dec_ref(v___x_1319_);
v___x_1562__overap_1321_ = l_panic___redArg(v___x_1301_, v___x_1320_);
v___x_1322_ = lean_apply_1(v___x_1562__overap_1321_, lean_box(0));
lean_dec(v___x_1322_);
v___y_1262_ = v_a_1296_;
v___y_1263_ = v___x_1286_;
goto v___jp_1261_;
}
}
}
else
{
lean_dec(v_a_1296_);
lean_dec_ref(v___f_1259_);
lean_dec_ref(v_out_1253_);
goto v___jp_1257_;
}
}
else
{
lean_object* v_a_1323_; lean_object* v_putStr_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v_a_1323_ = lean_ctor_get(v___x_1295_, 1);
lean_inc(v_a_1323_);
lean_dec_ref_known(v___x_1295_, 2);
v_putStr_1324_ = lean_ctor_get(v_out_1253_, 4);
lean_inc_ref(v_putStr_1324_);
lean_dec_ref(v_out_1253_);
v___x_1325_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__8));
v___x_1326_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1327_ = lean_apply_2(v_putStr_1324_, v___x_1325_, lean_box(0));
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_dec_ref_known(v___x_1327_, 1);
v___y_1272_ = v_a_1323_;
v___y_1273_ = v___x_1286_;
goto v___jp_1271_;
}
else
{
lean_object* v_a_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1567__overap_1341_; lean_object* v___x_1342_; 
v_a_1328_ = lean_ctor_get(v___x_1327_, 0);
lean_inc(v_a_1328_);
lean_dec_ref_known(v___x_1327_, 1);
v___x_1329_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1330_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1331_ = lean_unsigned_to_nat(82u);
v___x_1332_ = lean_unsigned_to_nat(4u);
v___x_1333_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_1334_ = lean_io_error_to_string(v_a_1328_);
v___x_1335_ = lean_string_append(v___x_1333_, v___x_1334_);
lean_dec_ref(v___x_1334_);
v___x_1336_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1337_ = lean_string_append(v___x_1335_, v___x_1336_);
v___x_1338_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11);
v___x_1339_ = lean_string_append(v___x_1337_, v___x_1338_);
v___x_1340_ = l_mkPanicMessageWithDecl(v___x_1329_, v___x_1330_, v___x_1331_, v___x_1332_, v___x_1339_);
lean_dec_ref(v___x_1339_);
v___x_1567__overap_1341_ = l_panic___redArg(v___x_1326_, v___x_1340_);
v___x_1342_ = lean_apply_1(v___x_1567__overap_1341_, lean_box(0));
lean_dec(v___x_1342_);
v___y_1272_ = v_a_1323_;
v___y_1273_ = v___x_1286_;
goto v___jp_1271_;
}
}
}
else
{
lean_object* v_putStr_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
lean_dec_ref(v___f_1259_);
lean_dec_ref(v_outputsFile_1254_);
v_putStr_1343_ = lean_ctor_get(v_out_1253_, 4);
lean_inc_ref(v_putStr_1343_);
lean_dec_ref(v_out_1253_);
v___x_1344_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__12));
v___x_1345_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1346_ = lean_apply_2(v_putStr_1343_, v___x_1344_, lean_box(0));
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v_a_1347_; 
v_a_1347_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_a_1347_);
lean_dec_ref_known(v___x_1346_, 1);
return v_a_1347_;
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1572__overap_1361_; lean_object* v___x_1362_; 
v_a_1348_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_a_1348_);
lean_dec_ref_known(v___x_1346_, 1);
v___x_1349_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1350_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1351_ = lean_unsigned_to_nat(82u);
v___x_1352_ = lean_unsigned_to_nat(4u);
v___x_1353_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_1354_ = lean_io_error_to_string(v_a_1348_);
v___x_1355_ = lean_string_append(v___x_1353_, v___x_1354_);
lean_dec_ref(v___x_1354_);
v___x_1356_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1357_ = lean_string_append(v___x_1355_, v___x_1356_);
v___x_1358_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15);
v___x_1359_ = lean_string_append(v___x_1357_, v___x_1358_);
v___x_1360_ = l_mkPanicMessageWithDecl(v___x_1349_, v___x_1350_, v___x_1351_, v___x_1352_, v___x_1359_);
lean_dec_ref(v___x_1359_);
v___x_1572__overap_1361_ = l_panic___redArg(v___x_1345_, v___x_1360_);
v___x_1362_ = lean_apply_1(v___x_1572__overap_1361_, lean_box(0));
return v___x_1362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___boxed(lean_object* v_logger_1374_, lean_object* v_ws_1375_, lean_object* v_outputsRef_x3f_1376_, lean_object* v_out_1377_, lean_object* v_outputsFile_1378_, lean_object* v_isVerbose_1379_, lean_object* v___y_1380_){
_start:
{
uint8_t v_isVerbose_boxed_1381_; lean_object* v_res_1382_; 
v_isVerbose_boxed_1381_ = lean_unbox(v_isVerbose_1379_);
v_res_1382_ = l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs(v_logger_1374_, v_ws_1375_, v_outputsRef_x3f_1376_, v_out_1377_, v_outputsFile_1378_, v_isVerbose_boxed_1381_);
lean_dec(v_outputsRef_x3f_1376_);
lean_dec_ref(v_ws_1375_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(lean_object* v_out_1384_, lean_object* v_as_1385_, size_t v_i_1386_, size_t v_stop_1387_, lean_object* v_b_1388_){
_start:
{
lean_object* v_val_1391_; uint8_t v___x_1395_; 
v___x_1395_ = lean_usize_dec_eq(v_i_1386_, v_stop_1387_);
if (v___x_1395_ == 0)
{
lean_object* v_putStr_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v_putStr_1396_ = lean_ctor_get(v_out_1384_, 4);
v___x_1397_ = lean_array_uget_borrowed(v_as_1385_, v_i_1386_);
v___x_1398_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0));
v___x_1399_ = lean_string_append(v___x_1398_, v___x_1397_);
v___x_1400_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0));
v___x_1401_ = lean_string_append(v___x_1399_, v___x_1400_);
lean_inc_ref(v_putStr_1396_);
lean_inc_ref(v___x_1401_);
v___x_1402_ = lean_apply_2(v_putStr_1396_, v___x_1401_, lean_box(0));
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; 
lean_dec_ref(v___x_1401_);
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v_val_1391_ = v_a_1403_;
goto v___jp_1390_;
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1427_; 
v_a_1404_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1406_ = v___x_1402_;
v_isShared_1407_ = v_isSharedCheck_1427_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1402_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1427_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1408_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1409_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1410_ = lean_unsigned_to_nat(82u);
v___x_1411_ = lean_unsigned_to_nat(4u);
v___x_1412_ = lean_unsigned_to_nat(0u);
v___x_1413_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_1414_ = lean_io_error_to_string(v_a_1404_);
v___x_1415_ = lean_string_append(v___x_1413_, v___x_1414_);
lean_dec_ref(v___x_1414_);
v___x_1416_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1417_ = lean_string_append(v___x_1415_, v___x_1416_);
v___x_1418_ = l_String_quote(v___x_1401_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set_tag(v___x_1406_, 3);
lean_ctor_set(v___x_1406_, 0, v___x_1418_);
v___x_1420_ = v___x_1406_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1421_ = l_Std_Format_defWidth;
v___x_1422_ = l_Std_Format_pretty(v___x_1420_, v___x_1421_, v___x_1412_, v___x_1412_);
v___x_1423_ = lean_string_append(v___x_1417_, v___x_1422_);
lean_dec_ref(v___x_1422_);
v___x_1424_ = l_mkPanicMessageWithDecl(v___x_1408_, v___x_1409_, v___x_1410_, v___x_1411_, v___x_1423_);
lean_dec_ref(v___x_1423_);
v___x_1425_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1424_);
v_val_1391_ = v___x_1425_;
goto v___jp_1390_;
}
}
}
}
else
{
lean_dec_ref(v_out_1384_);
return v_b_1388_;
}
v___jp_1390_:
{
size_t v___x_1392_; size_t v___x_1393_; 
v___x_1392_ = ((size_t)1ULL);
v___x_1393_ = lean_usize_add(v_i_1386_, v___x_1392_);
v_i_1386_ = v___x_1393_;
v_b_1388_ = v_val_1391_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___boxed(lean_object* v_out_1428_, lean_object* v_as_1429_, lean_object* v_i_1430_, lean_object* v_stop_1431_, lean_object* v_b_1432_, lean_object* v___y_1433_){
_start:
{
size_t v_i_boxed_1434_; size_t v_stop_boxed_1435_; lean_object* v_res_1436_; 
v_i_boxed_1434_ = lean_unbox_usize(v_i_1430_);
lean_dec(v_i_1430_);
v_stop_boxed_1435_ = lean_unbox_usize(v_stop_1431_);
lean_dec(v_stop_1431_);
v_res_1436_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1428_, v_as_1429_, v_i_boxed_1434_, v_stop_boxed_1435_, v_b_1432_);
lean_dec_ref(v_as_1429_);
return v_res_1436_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__6(void){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1443_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__5));
v___x_1444_ = l_String_quote(v___x_1443_);
return v___x_1444_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__7(void){
_start:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__6, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__6_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__6);
v___x_1446_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1445_);
return v___x_1446_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__8(void){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1447_ = lean_unsigned_to_nat(0u);
v___x_1448_ = l_Std_Format_defWidth;
v___x_1449_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__7, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__7);
v___x_1450_ = l_Std_Format_pretty(v___x_1449_, v___x_1448_, v___x_1447_, v___x_1447_);
return v___x_1450_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__10(void){
_start:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1452_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__9));
v___x_1453_ = l_String_quote(v___x_1452_);
return v___x_1453_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__11(void){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__10, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__10);
v___x_1455_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
return v___x_1455_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__12(void){
_start:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1456_ = lean_unsigned_to_nat(0u);
v___x_1457_ = l_Std_Format_defWidth;
v___x_1458_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__11, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__11);
v___x_1459_ = l_Std_Format_pretty(v___x_1458_, v___x_1457_, v___x_1456_, v___x_1456_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult(lean_object* v_cfg_1460_, lean_object* v_out_1461_, lean_object* v_result_1462_){
_start:
{
uint8_t v___y_1465_; lean_object* v___y_1466_; lean_object* v_failures_1540_; lean_object* v_numJobs_1541_; uint8_t v___y_1543_; lean_object* v___x_1576_; lean_object* v___x_1577_; uint8_t v___x_1578_; 
v_failures_1540_ = lean_ctor_get(v_result_1462_, 0);
lean_inc_ref(v_failures_1540_);
v_numJobs_1541_ = lean_ctor_get(v_result_1462_, 1);
lean_inc(v_numJobs_1541_);
lean_dec_ref(v_result_1462_);
v___x_1576_ = lean_array_get_size(v_failures_1540_);
v___x_1577_ = lean_unsigned_to_nat(0u);
v___x_1578_ = lean_nat_dec_eq(v___x_1576_, v___x_1577_);
if (v___x_1578_ == 0)
{
lean_object* v_flush_1579_; lean_object* v_putStr_1580_; lean_object* v___y_1586_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
lean_dec(v_numJobs_1541_);
v_flush_1579_ = lean_ctor_get(v_out_1461_, 0);
lean_inc_ref(v_flush_1579_);
v_putStr_1580_ = lean_ctor_get(v_out_1461_, 4);
v___x_1597_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__9));
lean_inc_ref(v_putStr_1580_);
v___x_1598_ = lean_apply_2(v_putStr_1580_, v___x_1597_, lean_box(0));
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_dec_ref_known(v___x_1598_, 1);
goto v___jp_1587_;
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
v___x_1600_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1601_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1602_ = lean_unsigned_to_nat(82u);
v___x_1603_ = lean_unsigned_to_nat(4u);
v___x_1604_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_1605_ = lean_io_error_to_string(v_a_1599_);
v___x_1606_ = lean_string_append(v___x_1604_, v___x_1605_);
lean_dec_ref(v___x_1605_);
v___x_1607_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1608_ = lean_string_append(v___x_1606_, v___x_1607_);
v___x_1609_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__12, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__12_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__12);
v___x_1610_ = lean_string_append(v___x_1608_, v___x_1609_);
v___x_1611_ = l_mkPanicMessageWithDecl(v___x_1600_, v___x_1601_, v___x_1602_, v___x_1603_, v___x_1610_);
lean_dec_ref(v___x_1610_);
v___x_1612_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1611_);
goto v___jp_1587_;
}
v___jp_1581_:
{
lean_object* v___x_1582_; 
v___x_1582_ = lean_apply_1(v_flush_1579_, lean_box(0));
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_a_1583_);
lean_dec_ref_known(v___x_1582_, 1);
return v_a_1583_;
}
else
{
lean_object* v___x_1584_; 
lean_dec_ref_known(v___x_1582_, 1);
v___x_1584_ = lean_box(0);
return v___x_1584_;
}
}
v___jp_1585_:
{
goto v___jp_1581_;
}
v___jp_1587_:
{
uint8_t v___x_1588_; 
v___x_1588_ = lean_nat_dec_lt(v___x_1577_, v___x_1576_);
if (v___x_1588_ == 0)
{
lean_dec_ref(v_failures_1540_);
lean_dec_ref(v_out_1461_);
goto v___jp_1581_;
}
else
{
lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = lean_box(0);
v___x_1590_ = lean_nat_dec_le(v___x_1576_, v___x_1576_);
if (v___x_1590_ == 0)
{
if (v___x_1588_ == 0)
{
lean_dec_ref(v_failures_1540_);
lean_dec_ref(v_out_1461_);
goto v___jp_1581_;
}
else
{
size_t v___x_1591_; size_t v___x_1592_; lean_object* v___x_1593_; 
v___x_1591_ = ((size_t)0ULL);
v___x_1592_ = lean_usize_of_nat(v___x_1576_);
v___x_1593_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1461_, v_failures_1540_, v___x_1591_, v___x_1592_, v___x_1589_);
lean_dec_ref(v_failures_1540_);
v___y_1586_ = v___x_1593_;
goto v___jp_1585_;
}
}
else
{
size_t v___x_1594_; size_t v___x_1595_; lean_object* v___x_1596_; 
v___x_1594_ = ((size_t)0ULL);
v___x_1595_ = lean_usize_of_nat(v___x_1576_);
v___x_1596_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1461_, v_failures_1540_, v___x_1594_, v___x_1595_, v___x_1589_);
lean_dec_ref(v_failures_1540_);
v___y_1586_ = v___x_1596_;
goto v___jp_1585_;
}
}
}
}
else
{
uint8_t v___x_1613_; 
lean_dec_ref(v_failures_1540_);
v___x_1613_ = l_Lake_BuildConfig_showProgress(v_cfg_1460_);
if (v___x_1613_ == 0)
{
v___y_1543_ = v___x_1613_;
goto v___jp_1542_;
}
else
{
uint8_t v_showSuccess_1614_; 
v_showSuccess_1614_ = lean_ctor_get_uint8(v_cfg_1460_, sizeof(void*)*4 + 5);
v___y_1543_ = v_showSuccess_1614_;
goto v___jp_1542_;
}
}
v___jp_1464_:
{
uint8_t v_noBuild_1467_; 
v_noBuild_1467_ = lean_ctor_get_uint8(v_cfg_1460_, sizeof(void*)*4 + 2);
if (v_noBuild_1467_ == 0)
{
lean_object* v_putStr_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v_putStr_1468_ = lean_ctor_get(v_out_1461_, 4);
lean_inc_ref(v_putStr_1468_);
lean_dec_ref(v_out_1461_);
v___x_1469_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__0));
v___x_1470_ = lean_string_append(v___x_1469_, v___y_1466_);
lean_dec_ref(v___y_1466_);
v___x_1471_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__1));
v___x_1472_ = lean_string_append(v___x_1470_, v___x_1471_);
lean_inc_ref(v___x_1472_);
v___x_1473_ = lean_apply_2(v_putStr_1468_, v___x_1472_, lean_box(0));
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; 
lean_dec_ref(v___x_1472_);
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1474_);
lean_dec_ref_known(v___x_1473_, 1);
return v_a_1474_;
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1503_; 
v_a_1475_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1477_ = v___x_1473_;
v_isShared_1478_ = v_isSharedCheck_1503_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1473_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1503_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1479_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1480_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1481_ = lean_unsigned_to_nat(82u);
v___x_1482_ = lean_unsigned_to_nat(4u);
v___x_1483_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1484_ = lean_unsigned_to_nat(0u);
v___x_1485_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_1486_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1485_, v___y_1465_);
v___x_1487_ = lean_string_append(v___x_1483_, v___x_1486_);
lean_dec_ref(v___x_1486_);
v___x_1488_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_1489_ = lean_string_append(v___x_1487_, v___x_1488_);
v___x_1490_ = lean_io_error_to_string(v_a_1475_);
v___x_1491_ = lean_string_append(v___x_1489_, v___x_1490_);
lean_dec_ref(v___x_1490_);
v___x_1492_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1493_ = lean_string_append(v___x_1491_, v___x_1492_);
v___x_1494_ = l_String_quote(v___x_1472_);
if (v_isShared_1478_ == 0)
{
lean_ctor_set_tag(v___x_1477_, 3);
lean_ctor_set(v___x_1477_, 0, v___x_1494_);
v___x_1496_ = v___x_1477_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1494_);
v___x_1496_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1497_ = l_Std_Format_defWidth;
v___x_1498_ = l_Std_Format_pretty(v___x_1496_, v___x_1497_, v___x_1484_, v___x_1484_);
v___x_1499_ = lean_string_append(v___x_1493_, v___x_1498_);
lean_dec_ref(v___x_1498_);
v___x_1500_ = l_mkPanicMessageWithDecl(v___x_1479_, v___x_1480_, v___x_1481_, v___x_1482_, v___x_1499_);
lean_dec_ref(v___x_1499_);
v___x_1501_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1500_);
return v___x_1501_;
}
}
}
}
else
{
lean_object* v_putStr_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_putStr_1504_ = lean_ctor_get(v_out_1461_, 4);
lean_inc_ref(v_putStr_1504_);
lean_dec_ref(v_out_1461_);
v___x_1505_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__2));
v___x_1506_ = lean_string_append(v___x_1505_, v___y_1466_);
lean_dec_ref(v___y_1466_);
v___x_1507_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__1));
v___x_1508_ = lean_string_append(v___x_1506_, v___x_1507_);
lean_inc_ref(v___x_1508_);
v___x_1509_ = lean_apply_2(v_putStr_1504_, v___x_1508_, lean_box(0));
if (lean_obj_tag(v___x_1509_) == 0)
{
lean_object* v_a_1510_; 
lean_dec_ref(v___x_1508_);
v_a_1510_ = lean_ctor_get(v___x_1509_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v___x_1509_, 1);
return v_a_1510_;
}
else
{
lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1539_; 
v_a_1511_ = lean_ctor_get(v___x_1509_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1509_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1513_ = v___x_1509_;
v_isShared_1514_ = v_isSharedCheck_1539_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1509_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1539_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1515_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1516_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1517_ = lean_unsigned_to_nat(82u);
v___x_1518_ = lean_unsigned_to_nat(4u);
v___x_1519_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1520_ = lean_unsigned_to_nat(0u);
v___x_1521_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_1522_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1521_, v_noBuild_1467_);
v___x_1523_ = lean_string_append(v___x_1519_, v___x_1522_);
lean_dec_ref(v___x_1522_);
v___x_1524_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_1525_ = lean_string_append(v___x_1523_, v___x_1524_);
v___x_1526_ = lean_io_error_to_string(v_a_1511_);
v___x_1527_ = lean_string_append(v___x_1525_, v___x_1526_);
lean_dec_ref(v___x_1526_);
v___x_1528_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1529_ = lean_string_append(v___x_1527_, v___x_1528_);
v___x_1530_ = l_String_quote(v___x_1508_);
if (v_isShared_1514_ == 0)
{
lean_ctor_set_tag(v___x_1513_, 3);
lean_ctor_set(v___x_1513_, 0, v___x_1530_);
v___x_1532_ = v___x_1513_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1533_ = l_Std_Format_defWidth;
v___x_1534_ = l_Std_Format_pretty(v___x_1532_, v___x_1533_, v___x_1520_, v___x_1520_);
v___x_1535_ = lean_string_append(v___x_1529_, v___x_1534_);
lean_dec_ref(v___x_1534_);
v___x_1536_ = l_mkPanicMessageWithDecl(v___x_1515_, v___x_1516_, v___x_1517_, v___x_1518_, v___x_1535_);
lean_dec_ref(v___x_1535_);
v___x_1537_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1536_);
return v___x_1537_;
}
}
}
}
}
v___jp_1542_:
{
if (v___y_1543_ == 0)
{
lean_object* v___x_1544_; 
lean_dec(v_numJobs_1541_);
lean_dec_ref(v_out_1461_);
v___x_1544_ = lean_box(0);
return v___x_1544_;
}
else
{
lean_object* v___x_1545_; uint8_t v___x_1546_; 
v___x_1545_ = lean_unsigned_to_nat(0u);
v___x_1546_ = lean_nat_dec_eq(v_numJobs_1541_, v___x_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; uint8_t v___x_1548_; 
v___x_1547_ = lean_unsigned_to_nat(1u);
v___x_1548_ = lean_nat_dec_eq(v_numJobs_1541_, v___x_1547_);
if (v___x_1548_ == 0)
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1549_ = l_Nat_reprFast(v_numJobs_1541_);
v___x_1550_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__3));
v___x_1551_ = lean_string_append(v___x_1549_, v___x_1550_);
v___y_1465_ = v___y_1543_;
v___y_1466_ = v___x_1551_;
goto v___jp_1464_;
}
else
{
lean_object* v___x_1552_; 
lean_dec(v_numJobs_1541_);
v___x_1552_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__4));
v___y_1465_ = v___y_1543_;
v___y_1466_ = v___x_1552_;
goto v___jp_1464_;
}
}
else
{
lean_object* v_putStr_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
lean_dec(v_numJobs_1541_);
v_putStr_1553_ = lean_ctor_get(v_out_1461_, 4);
lean_inc_ref(v_putStr_1553_);
lean_dec_ref(v_out_1461_);
v___x_1554_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__5));
v___x_1555_ = lean_apply_2(v_putStr_1553_, v___x_1554_, lean_box(0));
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1556_);
lean_dec_ref_known(v___x_1555_, 1);
return v_a_1556_;
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v_a_1557_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1557_);
lean_dec_ref_known(v___x_1555_, 1);
v___x_1558_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1559_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1560_ = lean_unsigned_to_nat(82u);
v___x_1561_ = lean_unsigned_to_nat(4u);
v___x_1562_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1563_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_1564_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1563_, v___x_1546_);
v___x_1565_ = lean_string_append(v___x_1562_, v___x_1564_);
lean_dec_ref(v___x_1564_);
v___x_1566_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_1567_ = lean_string_append(v___x_1565_, v___x_1566_);
v___x_1568_ = lean_io_error_to_string(v_a_1557_);
v___x_1569_ = lean_string_append(v___x_1567_, v___x_1568_);
lean_dec_ref(v___x_1568_);
v___x_1570_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1571_ = lean_string_append(v___x_1569_, v___x_1570_);
v___x_1572_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__8, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__8_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__8);
v___x_1573_ = lean_string_append(v___x_1571_, v___x_1572_);
v___x_1574_ = l_mkPanicMessageWithDecl(v___x_1558_, v___x_1559_, v___x_1560_, v___x_1561_, v___x_1573_);
lean_dec_ref(v___x_1573_);
v___x_1575_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1574_);
return v___x_1575_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___boxed(lean_object* v_cfg_1615_, lean_object* v_out_1616_, lean_object* v_result_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l___private_Lake_Build_Run_0__Lake_reportResult(v_cfg_1615_, v_out_1616_, v_result_1617_);
lean_dec_ref(v_cfg_1615_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0(lean_object* v_self_1620_){
_start:
{
lean_object* v_toMonitorResult_1621_; 
v_toMonitorResult_1621_ = lean_ctor_get(v_self_1620_, 0);
lean_inc_ref(v_toMonitorResult_1621_);
return v_toMonitorResult_1621_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0___boxed(lean_object* v_self_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0(v_self_1622_);
lean_dec_ref(v_self_1622_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg(){
_start:
{
lean_object* v___f_1626_; 
v___f_1626_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0));
return v___f_1626_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___boxed(lean_object* v___dummy_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg();
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult(lean_object* v_00_u03b1_1629_){
_start:
{
lean_object* v___f_1630_; 
v___f_1630_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0));
return v___f_1630_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg(lean_object* v_self_1631_){
_start:
{
lean_object* v_out_1632_; 
v_out_1632_ = lean_ctor_get(v_self_1631_, 1);
if (lean_obj_tag(v_out_1632_) == 0)
{
uint8_t v___x_1633_; 
v___x_1633_ = 0;
return v___x_1633_;
}
else
{
uint8_t v___x_1634_; 
v___x_1634_ = 1;
return v___x_1634_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg___boxed(lean_object* v_self_1635_){
_start:
{
uint8_t v_res_1636_; lean_object* v_r_1637_; 
v_res_1636_ = l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg(v_self_1635_);
lean_dec_ref(v_self_1635_);
v_r_1637_ = lean_box(v_res_1636_);
return v_r_1637_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk(lean_object* v_00_u03b1_1638_, lean_object* v_self_1639_){
_start:
{
lean_object* v_out_1640_; 
v_out_1640_ = lean_ctor_get(v_self_1639_, 1);
if (lean_obj_tag(v_out_1640_) == 0)
{
uint8_t v___x_1641_; 
v___x_1641_ = 0;
return v___x_1641_;
}
else
{
uint8_t v___x_1642_; 
v___x_1642_ = 1;
return v___x_1642_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___boxed(lean_object* v_00_u03b1_1643_, lean_object* v_self_1644_){
_start:
{
uint8_t v_res_1645_; lean_object* v_r_1646_; 
v_res_1645_ = l___private_Lake_Build_Run_0__Lake_BuildResult_isOk(v_00_u03b1_1643_, v_self_1644_);
lean_dec_ref(v_self_1644_);
v_r_1646_ = lean_box(v_res_1645_);
return v_r_1646_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(lean_object* v_ctx_1655_, lean_object* v_job_1656_){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v_failures_1666_; lean_object* v___x_1667_; uint8_t v___x_1668_; 
lean_inc_ref(v_job_1656_);
v___x_1658_ = l_Lake_Job_toOpaque___redArg(v_job_1656_);
v___x_1659_ = lean_unsigned_to_nat(1u);
v___x_1660_ = lean_mk_empty_array_with_capacity(v___x_1659_);
v___x_1661_ = lean_array_push(v___x_1660_, v___x_1658_);
v___x_1662_ = lean_unsigned_to_nat(0u);
v___x_1663_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__0));
v___x_1664_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_1665_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1655_, v___x_1661_, v___x_1663_, v___x_1664_);
v_failures_1666_ = lean_ctor_get(v___x_1665_, 0);
lean_inc_ref(v_failures_1666_);
v___x_1667_ = lean_array_get_size(v_failures_1666_);
lean_dec_ref(v_failures_1666_);
v___x_1668_ = lean_nat_dec_eq(v___x_1667_, v___x_1662_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; lean_object* v___x_1670_; 
lean_dec_ref(v_job_1656_);
v___x_1669_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__2));
v___x_1670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1665_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
return v___x_1670_;
}
else
{
lean_object* v_task_1671_; lean_object* v___x_1672_; 
v_task_1671_ = lean_ctor_get(v_job_1656_, 0);
lean_inc_ref(v_task_1671_);
lean_dec_ref(v_job_1656_);
v___x_1672_ = lean_io_wait(v_task_1671_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1681_; 
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1681_ == 0)
{
lean_object* v_unused_1682_; 
v_unused_1682_ = lean_ctor_get(v___x_1672_, 1);
lean_dec(v_unused_1682_);
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1681_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1681_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1677_; lean_object* v___x_1679_; 
v___x_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1677_, 0, v_a_1673_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 1, v___x_1677_);
lean_ctor_set(v___x_1675_, 0, v___x_1665_);
v___x_1679_ = v___x_1675_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1665_);
lean_ctor_set(v_reuseFailAlloc_1680_, 1, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
else
{
lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1690_; 
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1690_ == 0)
{
lean_object* v_unused_1691_; lean_object* v_unused_1692_; 
v_unused_1691_ = lean_ctor_get(v___x_1672_, 1);
lean_dec(v_unused_1691_);
v_unused_1692_ = lean_ctor_get(v___x_1672_, 0);
lean_dec(v_unused_1692_);
v___x_1684_ = v___x_1672_;
v_isShared_1685_ = v_isSharedCheck_1690_;
goto v_resetjp_1683_;
}
else
{
lean_dec(v___x_1672_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1690_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1686_; lean_object* v___x_1688_; 
v___x_1686_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__4));
if (v_isShared_1685_ == 0)
{
lean_ctor_set_tag(v___x_1684_, 0);
lean_ctor_set(v___x_1684_, 1, v___x_1686_);
lean_ctor_set(v___x_1684_, 0, v___x_1665_);
v___x_1688_ = v___x_1684_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v___x_1665_);
lean_ctor_set(v_reuseFailAlloc_1689_, 1, v___x_1686_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___boxed(lean_object* v_ctx_1693_, lean_object* v_job_1694_, lean_object* v___y_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_ctx_1693_, v_job_1694_);
lean_dec_ref(v_ctx_1693_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob(lean_object* v_00_u03b1_1697_, lean_object* v_ctx_1698_, lean_object* v_job_1699_){
_start:
{
lean_object* v___x_1701_; 
v___x_1701_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_ctx_1698_, v_job_1699_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___boxed(lean_object* v_00_u03b1_1702_, lean_object* v_ctx_1703_, lean_object* v_job_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l___private_Lake_Build_Run_0__Lake_monitorJob(v_00_u03b1_1702_, v_ctx_1703_, v_job_1704_);
lean_dec_ref(v_ctx_1703_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(lean_object* v_info_1709_){
_start:
{
lean_object* v___x_1711_; 
v___x_1711_ = l_Lake_computeTextFileHash(v_info_1709_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1713_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1712_);
lean_dec_ref_known(v___x_1711_, 1);
v___x_1713_ = lean_io_metadata(v_info_1709_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1725_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1725_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1725_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v_modified_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; uint64_t v___x_1721_; lean_object* v___x_1723_; 
v_modified_1718_ = lean_ctor_get(v_a_1714_, 1);
lean_inc_ref(v_modified_1718_);
lean_dec(v_a_1714_);
v___x_1719_ = ((lean_object*)(l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0));
v___x_1720_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1720_, 0, v_info_1709_);
lean_ctor_set(v___x_1720_, 1, v___x_1719_);
lean_ctor_set(v___x_1720_, 2, v_modified_1718_);
v___x_1721_ = lean_unbox_uint64(v_a_1712_);
lean_dec(v_a_1712_);
lean_ctor_set_uint64(v___x_1720_, sizeof(void*)*3, v___x_1721_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v___x_1720_);
v___x_1723_ = v___x_1716_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v___x_1720_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
}
}
}
else
{
lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1733_; 
lean_dec(v_a_1712_);
lean_dec_ref(v_info_1709_);
v_a_1726_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1728_ = v___x_1713_;
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_dec(v___x_1713_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1731_; 
if (v_isShared_1729_ == 0)
{
v___x_1731_ = v___x_1728_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_a_1726_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
}
}
else
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
lean_dec_ref(v_info_1709_);
v_a_1734_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v___x_1711_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1711_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___boxed(lean_object* v_info_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(v_info_1742_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(lean_object* v___x_1748_, lean_object* v_as_1749_, size_t v_sz_1750_, size_t v_i_1751_, lean_object* v_b_1752_){
_start:
{
lean_object* v_a_1755_; uint8_t v___x_1759_; 
v___x_1759_ = lean_usize_dec_lt(v_i_1751_, v_sz_1750_);
if (v___x_1759_ == 0)
{
lean_dec_ref(v___x_1748_);
return v_b_1752_;
}
else
{
lean_object* v_snd_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1783_; 
v_snd_1760_ = lean_ctor_get(v_b_1752_, 1);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_b_1752_);
if (v_isSharedCheck_1783_ == 0)
{
lean_object* v_unused_1784_; 
v_unused_1784_ = lean_ctor_get(v_b_1752_, 0);
lean_dec(v_unused_1784_);
v___x_1762_ = v_b_1752_;
v_isShared_1763_ = v_isSharedCheck_1783_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_snd_1760_);
lean_dec(v_b_1752_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1783_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1764_; lean_object* v_a_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1764_ = lean_box(0);
v_a_1765_ = lean_array_uget_borrowed(v_as_1749_, v_i_1751_);
v___x_1766_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__0));
lean_inc_ref(v___x_1748_);
v___x_1767_ = l_Lake_joinRelative(v___x_1748_, v___x_1766_);
lean_inc(v_a_1765_);
v___x_1768_ = l_Lake_joinRelative(v___x_1767_, v_a_1765_);
v___x_1769_ = l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(v___x_1768_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_object* v_a_1770_; lean_object* v___x_1771_; lean_object* v___x_1773_; 
v_a_1770_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1770_);
lean_dec_ref_known(v___x_1769_, 1);
v___x_1771_ = l_Lake_BuildTrace_mix(v_snd_1760_, v_a_1770_);
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 1, v___x_1771_);
lean_ctor_set(v___x_1762_, 0, v___x_1764_);
v___x_1773_ = v___x_1762_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v___x_1764_);
lean_ctor_set(v_reuseFailAlloc_1774_, 1, v___x_1771_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
v_a_1755_ = v___x_1773_;
goto v___jp_1754_;
}
}
else
{
lean_object* v_a_1775_; 
v_a_1775_ = lean_ctor_get(v___x_1769_, 0);
lean_inc(v_a_1775_);
lean_dec_ref_known(v___x_1769_, 1);
if (lean_obj_tag(v_a_1775_) == 11)
{
lean_object* v___x_1777_; 
lean_dec_ref_known(v_a_1775_, 2);
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 0, v___x_1764_);
v___x_1777_ = v___x_1762_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v___x_1764_);
lean_ctor_set(v_reuseFailAlloc_1778_, 1, v_snd_1760_);
v___x_1777_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
v_a_1755_ = v___x_1777_;
goto v___jp_1754_;
}
}
else
{
lean_object* v___x_1779_; lean_object* v___x_1781_; 
lean_dec(v_a_1775_);
lean_dec_ref(v___x_1748_);
v___x_1779_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__1));
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 0, v___x_1779_);
v___x_1781_ = v___x_1762_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v___x_1779_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v_snd_1760_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
}
v___jp_1754_:
{
size_t v___x_1756_; size_t v___x_1757_; 
v___x_1756_ = ((size_t)1ULL);
v___x_1757_ = lean_usize_add(v_i_1751_, v___x_1756_);
v_i_1751_ = v___x_1757_;
v_b_1752_ = v_a_1755_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___boxed(lean_object* v___x_1785_, lean_object* v_as_1786_, lean_object* v_sz_1787_, lean_object* v_i_1788_, lean_object* v_b_1789_, lean_object* v___y_1790_){
_start:
{
size_t v_sz_boxed_1791_; size_t v_i_boxed_1792_; lean_object* v_res_1793_; 
v_sz_boxed_1791_ = lean_unbox_usize(v_sz_1787_);
lean_dec(v_sz_1787_);
v_i_boxed_1792_ = lean_unbox_usize(v_i_1788_);
lean_dec(v_i_1788_);
v_res_1793_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(v___x_1785_, v_as_1786_, v_sz_boxed_1791_, v_i_boxed_1792_, v_b_1789_);
lean_dec_ref(v_as_1786_);
return v_res_1793_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1796_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__1));
v___x_1797_ = l_Lake_BuildTrace_nil(v___x_1796_);
return v___x_1797_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8(void){
_start:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1812_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2);
v___x_1813_ = lean_box(0);
v___x_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
lean_ctor_set(v___x_1814_, 1, v___x_1812_);
return v___x_1814_;
}
}
static size_t _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9(void){
_start:
{
lean_object* v___x_1815_; size_t v_sz_1816_; 
v___x_1815_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7));
v_sz_1816_ = lean_array_size(v___x_1815_);
return v_sz_1816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(size_t v_sz_1817_, size_t v_i_1818_, lean_object* v_bs_1819_){
_start:
{
uint8_t v___x_1821_; 
v___x_1821_ = lean_usize_dec_lt(v_i_1818_, v_sz_1817_);
if (v___x_1821_ == 0)
{
return v_bs_1819_;
}
else
{
lean_object* v_v_1822_; lean_object* v_config_1823_; lean_object* v_dir_1824_; uint8_t v_bootstrap_1825_; lean_object* v_buildDir_1826_; lean_object* v___x_1827_; lean_object* v_bs_x27_1828_; lean_object* v_val_1830_; 
v_v_1822_ = lean_array_uget_borrowed(v_bs_1819_, v_i_1818_);
v_config_1823_ = lean_ctor_get(v_v_1822_, 6);
v_dir_1824_ = lean_ctor_get(v_v_1822_, 4);
lean_inc_ref(v_dir_1824_);
v_bootstrap_1825_ = lean_ctor_get_uint8(v_config_1823_, sizeof(void*)*28);
v_buildDir_1826_ = lean_ctor_get(v_config_1823_, 5);
lean_inc_ref(v_buildDir_1826_);
v___x_1827_ = lean_unsigned_to_nat(0u);
v_bs_x27_1828_ = lean_array_uset(v_bs_1819_, v_i_1818_, v___x_1827_);
if (v_bootstrap_1825_ == 0)
{
lean_object* v___x_1835_; 
lean_dec_ref(v_buildDir_1826_);
lean_dec_ref(v_dir_1824_);
v___x_1835_ = lean_box(0);
v_val_1830_ = v___x_1835_;
goto v___jp_1829_;
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; size_t v_sz_1842_; size_t v___x_1843_; lean_object* v___x_1844_; lean_object* v_fst_1845_; 
v___x_1836_ = l_System_FilePath_normalize(v_buildDir_1826_);
v___x_1837_ = l_Lake_joinRelative(v_dir_1824_, v___x_1836_);
v___x_1838_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__0));
v___x_1839_ = l_Lake_joinRelative(v___x_1837_, v___x_1838_);
v___x_1840_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7));
v___x_1841_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8);
v_sz_1842_ = lean_usize_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9);
v___x_1843_ = ((size_t)0ULL);
lean_inc_ref(v___x_1839_);
v___x_1844_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(v___x_1839_, v___x_1840_, v_sz_1842_, v___x_1843_, v___x_1841_);
v_fst_1845_ = lean_ctor_get(v___x_1844_, 0);
lean_inc(v_fst_1845_);
if (lean_obj_tag(v_fst_1845_) == 0)
{
lean_object* v_snd_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1854_; 
v_snd_1846_ = lean_ctor_get(v___x_1844_, 1);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1844_);
if (v_isSharedCheck_1854_ == 0)
{
lean_object* v_unused_1855_; 
v_unused_1855_ = lean_ctor_get(v___x_1844_, 0);
lean_dec(v_unused_1855_);
v___x_1848_ = v___x_1844_;
v_isShared_1849_ = v_isSharedCheck_1854_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_snd_1846_);
lean_dec(v___x_1844_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1854_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 0, v___x_1839_);
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v___x_1839_);
lean_ctor_set(v_reuseFailAlloc_1853_, 1, v_snd_1846_);
v___x_1851_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
lean_object* v___x_1852_; 
v___x_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
v_val_1830_ = v___x_1852_;
goto v___jp_1829_;
}
}
}
else
{
lean_object* v_val_1856_; 
lean_dec_ref(v___x_1844_);
lean_dec_ref(v___x_1839_);
v_val_1856_ = lean_ctor_get(v_fst_1845_, 0);
lean_inc(v_val_1856_);
lean_dec_ref_known(v_fst_1845_, 1);
v_val_1830_ = v_val_1856_;
goto v___jp_1829_;
}
}
v___jp_1829_:
{
size_t v___x_1831_; size_t v___x_1832_; lean_object* v___x_1833_; 
v___x_1831_ = ((size_t)1ULL);
v___x_1832_ = lean_usize_add(v_i_1818_, v___x_1831_);
v___x_1833_ = lean_array_uset(v_bs_x27_1828_, v_i_1818_, v_val_1830_);
v_i_1818_ = v___x_1832_;
v_bs_1819_ = v___x_1833_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___boxed(lean_object* v_sz_1857_, lean_object* v_i_1858_, lean_object* v_bs_1859_, lean_object* v___y_1860_){
_start:
{
size_t v_sz_boxed_1861_; size_t v_i_boxed_1862_; lean_object* v_res_1863_; 
v_sz_boxed_1861_ = lean_unbox_usize(v_sz_1857_);
lean_dec(v_sz_1857_);
v_i_boxed_1862_ = lean_unbox_usize(v_i_1858_);
lean_dec(v_i_1858_);
v_res_1863_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(v_sz_boxed_1861_, v_i_boxed_1862_, v_bs_1859_);
return v_res_1863_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1(void){
_start:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1865_ = l_Lean_versionStringCore;
v___x_1866_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__0));
v___x_1867_ = lean_string_append(v___x_1866_, v___x_1865_);
return v___x_1867_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3(void){
_start:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1869_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__2));
v___x_1870_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1);
v___x_1871_ = lean_string_append(v___x_1870_, v___x_1869_);
return v___x_1871_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4(void){
_start:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = lean_unsigned_to_nat(0u);
v___x_1873_ = lean_nat_to_int(v___x_1872_);
return v___x_1873_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5(void){
_start:
{
uint32_t v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; 
v___x_1874_ = 0;
v___x_1875_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4);
v___x_1876_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_1876_, 0, v___x_1875_);
lean_ctor_set_uint32(v___x_1876_, sizeof(void*)*1, v___x_1874_);
return v___x_1876_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6(void){
_start:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1877_ = lean_box(0);
v___x_1878_ = lean_unsigned_to_nat(16u);
v___x_1879_ = lean_mk_array(v___x_1878_, v___x_1877_);
return v___x_1879_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7(void){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1880_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6);
v___x_1881_ = lean_unsigned_to_nat(0u);
v___x_1882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1881_);
lean_ctor_set(v___x_1882_, 1, v___x_1880_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext(lean_object* v_ws_1885_, lean_object* v_cfg_1886_, lean_object* v_jobs_1887_, lean_object* v_cancelTk_x3f_1888_){
_start:
{
lean_object* v___y_1891_; uint8_t v___y_1892_; uint8_t v___y_1893_; uint8_t v___y_1894_; uint8_t v___y_1895_; uint8_t v___y_1896_; lean_object* v___y_1897_; uint8_t v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v_val_1901_; lean_object* v_val_1919_; uint8_t v___x_1941_; 
v___x_1941_ = l_System_Platform_isOSX;
if (v___x_1941_ == 0)
{
lean_object* v_macosxDeploymentTarget_x3f_1942_; 
v_macosxDeploymentTarget_x3f_1942_ = lean_ctor_get(v_cfg_1886_, 3);
lean_inc(v_macosxDeploymentTarget_x3f_1942_);
v_val_1919_ = v_macosxDeploymentTarget_x3f_1942_;
goto v___jp_1918_;
}
else
{
lean_object* v_macosxDeploymentTarget_x3f_1943_; 
v_macosxDeploymentTarget_x3f_1943_ = lean_ctor_get(v_cfg_1886_, 3);
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_1943_) == 0)
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___y_1947_; 
v___x_1944_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__8));
v___x_1945_ = lean_io_getenv(v___x_1944_);
if (lean_obj_tag(v___x_1945_) == 0)
{
lean_object* v___x_1949_; 
v___x_1949_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__9));
v___y_1947_ = v___x_1949_;
goto v___jp_1946_;
}
else
{
lean_object* v_val_1950_; 
v_val_1950_ = lean_ctor_get(v___x_1945_, 0);
lean_inc(v_val_1950_);
lean_dec_ref_known(v___x_1945_, 1);
v___y_1947_ = v_val_1950_;
goto v___jp_1946_;
}
v___jp_1946_:
{
lean_object* v___x_1948_; 
v___x_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1948_, 0, v___y_1947_);
v_val_1919_ = v___x_1948_;
goto v___jp_1918_;
}
}
else
{
lean_inc_ref(v_macosxDeploymentTarget_x3f_1943_);
v_val_1919_ = v_macosxDeploymentTarget_x3f_1943_;
goto v___jp_1918_;
}
}
v___jp_1890_:
{
lean_object* v_lakeEnv_1902_; lean_object* v_packages_1903_; size_t v_sz_1904_; size_t v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; uint64_t v___x_1909_; uint64_t v___x_1910_; uint64_t v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v_lakeEnv_1902_ = lean_ctor_get(v_ws_1885_, 0);
v_packages_1903_ = lean_ctor_get(v_ws_1885_, 4);
v_sz_1904_ = lean_array_size(v_packages_1903_);
v___x_1905_ = ((size_t)0ULL);
lean_inc_ref(v_packages_1903_);
v___x_1906_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(v_sz_1904_, v___x_1905_, v_packages_1903_);
v___x_1907_ = lean_alloc_ctor(0, 4, 6);
lean_ctor_set(v___x_1907_, 0, v___y_1899_);
lean_ctor_set(v___x_1907_, 1, v___y_1891_);
lean_ctor_set(v___x_1907_, 2, v___y_1897_);
lean_ctor_set(v___x_1907_, 3, v___y_1900_);
lean_ctor_set_uint8(v___x_1907_, sizeof(void*)*4, v___y_1896_);
lean_ctor_set_uint8(v___x_1907_, sizeof(void*)*4 + 1, v___y_1893_);
lean_ctor_set_uint8(v___x_1907_, sizeof(void*)*4 + 2, v___y_1892_);
lean_ctor_set_uint8(v___x_1907_, sizeof(void*)*4 + 3, v___y_1895_);
lean_ctor_set_uint8(v___x_1907_, sizeof(void*)*4 + 4, v___y_1894_);
lean_ctor_set_uint8(v___x_1907_, sizeof(void*)*4 + 5, v___y_1898_);
v___x_1908_ = l_Lake_Env_leanGithash(v_lakeEnv_1902_);
v___x_1909_ = l_Lake_Hash_nil;
v___x_1910_ = lean_string_hash(v___x_1908_);
v___x_1911_ = lean_uint64_mix_hash(v___x_1909_, v___x_1910_);
v___x_1912_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3);
v___x_1913_ = lean_string_append(v___x_1912_, v___x_1908_);
lean_dec_ref(v___x_1908_);
v___x_1914_ = ((lean_object*)(l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0));
v___x_1915_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5);
v___x_1916_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1916_, 0, v___x_1913_);
lean_ctor_set(v___x_1916_, 1, v___x_1914_);
lean_ctor_set(v___x_1916_, 2, v___x_1915_);
lean_ctor_set_uint64(v___x_1916_, sizeof(void*)*3, v___x_1911_);
v___x_1917_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1907_);
lean_ctor_set(v___x_1917_, 1, v_ws_1885_);
lean_ctor_set(v___x_1917_, 2, v___x_1916_);
lean_ctor_set(v___x_1917_, 3, v___x_1906_);
lean_ctor_set(v___x_1917_, 4, v_jobs_1887_);
lean_ctor_set(v___x_1917_, 5, v_val_1901_);
lean_ctor_set(v___x_1917_, 6, v_cancelTk_x3f_1888_);
return v___x_1917_;
}
v___jp_1918_:
{
lean_object* v_outputsFile_x3f_1920_; 
v_outputsFile_x3f_1920_ = lean_ctor_get(v_cfg_1886_, 1);
lean_inc(v_outputsFile_x3f_1920_);
if (lean_obj_tag(v_outputsFile_x3f_1920_) == 0)
{
lean_object* v_toLogConfig_1921_; uint8_t v_oldMode_1922_; uint8_t v_trustHash_1923_; uint8_t v_noBuild_1924_; uint8_t v_failFast_1925_; uint8_t v_verbosity_1926_; uint8_t v_showSuccess_1927_; lean_object* v_leanOptOverrides_1928_; lean_object* v___x_1929_; 
v_toLogConfig_1921_ = lean_ctor_get(v_cfg_1886_, 0);
lean_inc_ref(v_toLogConfig_1921_);
v_oldMode_1922_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4);
v_trustHash_1923_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4 + 1);
v_noBuild_1924_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4 + 2);
v_failFast_1925_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4 + 3);
v_verbosity_1926_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4 + 4);
v_showSuccess_1927_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4 + 5);
v_leanOptOverrides_1928_ = lean_ctor_get(v_cfg_1886_, 2);
lean_inc(v_leanOptOverrides_1928_);
lean_dec_ref(v_cfg_1886_);
v___x_1929_ = lean_box(0);
v___y_1891_ = v_outputsFile_x3f_1920_;
v___y_1892_ = v_noBuild_1924_;
v___y_1893_ = v_trustHash_1923_;
v___y_1894_ = v_verbosity_1926_;
v___y_1895_ = v_failFast_1925_;
v___y_1896_ = v_oldMode_1922_;
v___y_1897_ = v_leanOptOverrides_1928_;
v___y_1898_ = v_showSuccess_1927_;
v___y_1899_ = v_toLogConfig_1921_;
v___y_1900_ = v_val_1919_;
v_val_1901_ = v___x_1929_;
goto v___jp_1890_;
}
else
{
lean_object* v_toLogConfig_1930_; uint8_t v_oldMode_1931_; uint8_t v_trustHash_1932_; uint8_t v_noBuild_1933_; uint8_t v_failFast_1934_; uint8_t v_verbosity_1935_; uint8_t v_showSuccess_1936_; lean_object* v_leanOptOverrides_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v_toLogConfig_1930_ = lean_ctor_get(v_cfg_1886_, 0);
lean_inc_ref(v_toLogConfig_1930_);
v_oldMode_1931_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4);
v_trustHash_1932_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4 + 1);
v_noBuild_1933_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4 + 2);
v_failFast_1934_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4 + 3);
v_verbosity_1935_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4 + 4);
v_showSuccess_1936_ = lean_ctor_get_uint8(v_cfg_1886_, sizeof(void*)*4 + 5);
v_leanOptOverrides_1937_ = lean_ctor_get(v_cfg_1886_, 2);
lean_inc(v_leanOptOverrides_1937_);
lean_dec_ref(v_cfg_1886_);
v___x_1938_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7);
v___x_1939_ = lean_st_mk_ref(v___x_1938_);
v___x_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1939_);
v___y_1891_ = v_outputsFile_x3f_1920_;
v___y_1892_ = v_noBuild_1933_;
v___y_1893_ = v_trustHash_1932_;
v___y_1894_ = v_verbosity_1935_;
v___y_1895_ = v_failFast_1934_;
v___y_1896_ = v_oldMode_1931_;
v___y_1897_ = v_leanOptOverrides_1937_;
v___y_1898_ = v_showSuccess_1936_;
v___y_1899_ = v_toLogConfig_1930_;
v___y_1900_ = v_val_1919_;
v_val_1901_ = v___x_1940_;
goto v___jp_1890_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___boxed(lean_object* v_ws_1951_, lean_object* v_cfg_1952_, lean_object* v_jobs_1953_, lean_object* v_cancelTk_x3f_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_1951_, v_cfg_1952_, v_jobs_1953_, v_cancelTk_x3f_1954_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0(lean_object* v_build_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_){
_start:
{
lean_object* v_log_1965_; uint8_t v_action_1966_; uint8_t v_wantsRebuild_1967_; lean_object* v_trace_1968_; lean_object* v_buildTime_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1998_; 
v_log_1965_ = lean_ctor_get(v___y_1963_, 0);
v_action_1966_ = lean_ctor_get_uint8(v___y_1963_, sizeof(void*)*3);
v_wantsRebuild_1967_ = lean_ctor_get_uint8(v___y_1963_, sizeof(void*)*3 + 1);
v_trace_1968_ = lean_ctor_get(v___y_1963_, 1);
v_buildTime_1969_ = lean_ctor_get(v___y_1963_, 2);
v_isSharedCheck_1998_ = !lean_is_exclusive(v___y_1963_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1971_ = v___y_1963_;
v_isShared_1972_ = v_isSharedCheck_1998_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_buildTime_1969_);
lean_inc(v_trace_1968_);
lean_inc(v_log_1965_);
lean_dec(v___y_1963_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1998_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1973_; 
v___x_1973_ = lean_apply_7(v_build_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v_log_1965_, lean_box(0));
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1985_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
v_a_1975_ = lean_ctor_get(v___x_1973_, 1);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1977_ = v___x_1973_;
v_isShared_1978_ = v_isSharedCheck_1985_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_inc(v_a_1974_);
lean_dec(v___x_1973_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1985_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 0, v_a_1975_);
v___x_1980_ = v___x_1971_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1975_);
lean_ctor_set(v_reuseFailAlloc_1984_, 1, v_trace_1968_);
lean_ctor_set(v_reuseFailAlloc_1984_, 2, v_buildTime_1969_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*3, v_action_1966_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*3 + 1, v_wantsRebuild_1967_);
v___x_1980_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
lean_object* v___x_1982_; 
if (v_isShared_1978_ == 0)
{
lean_ctor_set(v___x_1977_, 1, v___x_1980_);
v___x_1982_ = v___x_1977_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_a_1974_);
lean_ctor_set(v_reuseFailAlloc_1983_, 1, v___x_1980_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
}
else
{
lean_object* v_a_1986_; lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1997_; 
v_a_1986_ = lean_ctor_get(v___x_1973_, 0);
v_a_1987_ = lean_ctor_get(v___x_1973_, 1);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1989_ = v___x_1973_;
v_isShared_1990_ = v_isSharedCheck_1997_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_inc(v_a_1986_);
lean_dec(v___x_1973_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1997_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 0, v_a_1987_);
v___x_1992_ = v___x_1971_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1987_);
lean_ctor_set(v_reuseFailAlloc_1996_, 1, v_trace_1968_);
lean_ctor_set(v_reuseFailAlloc_1996_, 2, v_buildTime_1969_);
lean_ctor_set_uint8(v_reuseFailAlloc_1996_, sizeof(void*)*3, v_action_1966_);
lean_ctor_set_uint8(v_reuseFailAlloc_1996_, sizeof(void*)*3 + 1, v_wantsRebuild_1967_);
v___x_1992_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
lean_object* v___x_1994_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 1, v___x_1992_);
v___x_1994_ = v___x_1989_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_a_1986_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v___x_1992_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0___boxed(lean_object* v_build_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_){
_start:
{
lean_object* v_res_2007_; 
v_res_2007_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0(v_build_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_);
return v_res_2007_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(lean_object* v_bctx_2009_, lean_object* v_build_2010_, lean_object* v_caption_2011_){
_start:
{
lean_object* v___f_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___f_2013_ = lean_alloc_closure((void*)(l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2013_, 0, v_build_2010_);
v___x_2014_ = lean_box(0);
v___x_2015_ = lean_unsigned_to_nat(0u);
v___x_2016_ = lean_box(0);
v___x_2017_ = lean_box(1);
v___x_2018_ = lean_box(0);
v___x_2019_ = lean_st_mk_ref(v___x_2017_);
v___x_2020_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0));
v___x_2021_ = l_Lake_Job_async___redArg(v___x_2014_, v___f_2013_, v___x_2015_, v_caption_2011_, v___x_2020_, v___x_2018_, v___x_2016_, v___x_2019_, v_bctx_2009_);
v___x_2022_ = lean_st_ref_get(v___x_2019_);
lean_dec(v___x_2019_);
lean_dec(v___x_2022_);
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___boxed(lean_object* v_bctx_2023_, lean_object* v_build_2024_, lean_object* v_caption_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v_bctx_2023_, v_build_2024_, v_caption_2025_);
lean_dec_ref(v_bctx_2023_);
return v_res_2027_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild(lean_object* v_00_u03b1_2028_, lean_object* v_bctx_2029_, lean_object* v_build_2030_, lean_object* v_caption_2031_){
_start:
{
lean_object* v___x_2033_; 
v___x_2033_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v_bctx_2029_, v_build_2030_, v_caption_2031_);
return v___x_2033_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___boxed(lean_object* v_00_u03b1_2034_, lean_object* v_bctx_2035_, lean_object* v_build_2036_, lean_object* v_caption_2037_, lean_object* v___y_2038_){
_start:
{
lean_object* v_res_2039_; 
v_res_2039_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild(v_00_u03b1_2034_, v_bctx_2035_, v_build_2036_, v_caption_2037_);
lean_dec_ref(v_bctx_2035_);
return v_res_2039_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(lean_object* v_x_2040_, lean_object* v_x_2041_){
_start:
{
if (lean_obj_tag(v_x_2040_) == 0)
{
if (lean_obj_tag(v_x_2041_) == 0)
{
uint8_t v___x_2042_; 
v___x_2042_ = 1;
return v___x_2042_;
}
else
{
uint8_t v___x_2043_; 
v___x_2043_ = 0;
return v___x_2043_;
}
}
else
{
if (lean_obj_tag(v_x_2041_) == 0)
{
uint8_t v___x_2044_; 
v___x_2044_ = 0;
return v___x_2044_;
}
else
{
lean_object* v_val_2045_; uint8_t v___x_2046_; 
v_val_2045_ = lean_ctor_get(v_x_2041_, 0);
v___x_2046_ = lean_unbox(v_val_2045_);
if (v___x_2046_ == 0)
{
lean_object* v_val_2047_; uint8_t v___x_2048_; 
v_val_2047_ = lean_ctor_get(v_x_2040_, 0);
v___x_2048_ = lean_unbox(v_val_2047_);
if (v___x_2048_ == 0)
{
uint8_t v___x_2049_; 
v___x_2049_ = 1;
return v___x_2049_;
}
else
{
uint8_t v___x_2050_; 
v___x_2050_ = lean_unbox(v_val_2045_);
return v___x_2050_;
}
}
else
{
lean_object* v_val_2051_; uint8_t v___x_2052_; 
v_val_2051_ = lean_ctor_get(v_x_2040_, 0);
v___x_2052_ = lean_unbox(v_val_2051_);
return v___x_2052_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0___boxed(lean_object* v_x_2053_, lean_object* v_x_2054_){
_start:
{
uint8_t v_res_2055_; lean_object* v_r_2056_; 
v_res_2055_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(v_x_2053_, v_x_2054_);
lean_dec(v_x_2054_);
lean_dec(v_x_2053_);
v_r_2056_ = lean_box(v_res_2055_);
return v_r_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(lean_object* v___x_2057_, uint8_t v___x_2058_, uint8_t v___x_2059_, lean_object* v_as_2060_, size_t v_i_2061_, size_t v_stop_2062_, lean_object* v_b_2063_){
_start:
{
uint8_t v___x_2065_; 
v___x_2065_ = lean_usize_dec_eq(v_i_2061_, v_stop_2062_);
if (v___x_2065_ == 0)
{
lean_object* v___x_2066_; lean_object* v___x_2067_; size_t v___x_2068_; size_t v___x_2069_; 
v___x_2066_ = lean_array_uget_borrowed(v_as_2060_, v_i_2061_);
lean_inc_ref(v___x_2057_);
v___x_2067_ = l_Lake_logToStream(v___x_2066_, v___x_2057_, v___x_2058_, v___x_2059_);
v___x_2068_ = ((size_t)1ULL);
v___x_2069_ = lean_usize_add(v_i_2061_, v___x_2068_);
v_i_2061_ = v___x_2069_;
v_b_2063_ = v___x_2067_;
goto _start;
}
else
{
lean_dec_ref(v___x_2057_);
return v_b_2063_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1___boxed(lean_object* v___x_2071_, lean_object* v___x_2072_, lean_object* v___x_2073_, lean_object* v_as_2074_, lean_object* v_i_2075_, lean_object* v_stop_2076_, lean_object* v_b_2077_, lean_object* v___y_2078_){
_start:
{
uint8_t v___x_1008__boxed_2079_; uint8_t v___x_1009__boxed_2080_; size_t v_i_boxed_2081_; size_t v_stop_boxed_2082_; lean_object* v_res_2083_; 
v___x_1008__boxed_2079_ = lean_unbox(v___x_2072_);
v___x_1009__boxed_2080_ = lean_unbox(v___x_2073_);
v_i_boxed_2081_ = lean_unbox_usize(v_i_2075_);
lean_dec(v_i_2075_);
v_stop_boxed_2082_ = lean_unbox_usize(v_stop_2076_);
lean_dec(v_stop_2076_);
v_res_2083_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2071_, v___x_1008__boxed_2079_, v___x_1009__boxed_2080_, v_as_2074_, v_i_boxed_2081_, v_stop_boxed_2082_, v_b_2077_);
lean_dec_ref(v_as_2074_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(lean_object* v___x_2084_, uint8_t v___x_2085_, uint8_t v___x_2086_, lean_object* v_ws_2087_, lean_object* v_outputsRef_x3f_2088_, lean_object* v_out_2089_, lean_object* v_outputsFile_2090_, uint8_t v_isVerbose_2091_){
_start:
{
lean_object* v___y_2096_; lean_object* v___y_2097_; lean_object* v___y_2105_; lean_object* v___y_2106_; uint8_t v___x_2188_; 
v___x_2188_ = l_Lake_Workspace_isRootArtifactCacheWritable(v_ws_2087_);
if (v___x_2188_ == 0)
{
lean_object* v_packages_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v_baseName_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; uint8_t v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v_packages_2189_ = lean_ctor_get(v_ws_2087_, 4);
v___x_2190_ = lean_unsigned_to_nat(0u);
v___x_2191_ = lean_array_fget_borrowed(v_packages_2189_, v___x_2190_);
v_baseName_2192_ = lean_ctor_get(v___x_2191_, 1);
lean_inc(v_baseName_2192_);
v___x_2193_ = l_Lean_Name_toString(v_baseName_2192_, v___x_2188_);
v___x_2194_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__16));
v___x_2195_ = lean_string_append(v___x_2193_, v___x_2194_);
v___x_2196_ = 2;
v___x_2197_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2197_, 0, v___x_2195_);
lean_ctor_set_uint8(v___x_2197_, sizeof(void*)*1, v___x_2196_);
lean_inc_ref(v___x_2084_);
v___x_2198_ = l_Lake_logToStream(v___x_2197_, v___x_2084_, v___x_2085_, v___x_2086_);
lean_dec_ref_known(v___x_2197_, 1);
goto v___jp_2114_;
}
else
{
goto v___jp_2114_;
}
v___jp_2093_:
{
lean_object* v___x_2094_; 
v___x_2094_ = lean_box(0);
return v___x_2094_;
}
v___jp_2095_:
{
lean_object* v___x_2098_; lean_object* v___x_2099_; uint8_t v___x_2100_; 
v___x_2098_ = lean_array_get_size(v___y_2096_);
v___x_2099_ = lean_box(0);
v___x_2100_ = lean_nat_dec_lt(v___y_2097_, v___x_2098_);
if (v___x_2100_ == 0)
{
lean_dec_ref(v___y_2096_);
lean_dec_ref(v___x_2084_);
return v___x_2099_;
}
else
{
size_t v___x_2101_; size_t v___x_2102_; lean_object* v___x_2103_; 
v___x_2101_ = ((size_t)0ULL);
v___x_2102_ = lean_usize_of_nat(v___x_2098_);
v___x_2103_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2084_, v___x_2085_, v___x_2086_, v___y_2096_, v___x_2101_, v___x_2102_, v___x_2099_);
lean_dec_ref(v___y_2096_);
return v___x_2103_;
}
}
v___jp_2104_:
{
if (v_isVerbose_2091_ == 0)
{
lean_object* v___x_2107_; 
lean_dec_ref(v___y_2106_);
lean_dec_ref(v___x_2084_);
v___x_2107_ = lean_box(0);
return v___x_2107_;
}
else
{
lean_object* v___x_2108_; lean_object* v___x_2109_; uint8_t v___x_2110_; 
v___x_2108_ = lean_array_get_size(v___y_2106_);
v___x_2109_ = lean_box(0);
v___x_2110_ = lean_nat_dec_lt(v___y_2105_, v___x_2108_);
if (v___x_2110_ == 0)
{
lean_dec_ref(v___y_2106_);
lean_dec_ref(v___x_2084_);
return v___x_2109_;
}
else
{
size_t v___x_2111_; size_t v___x_2112_; lean_object* v___x_2113_; 
v___x_2111_ = ((size_t)0ULL);
v___x_2112_ = lean_usize_of_nat(v___x_2108_);
v___x_2113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2084_, v___x_2085_, v___x_2086_, v___y_2106_, v___x_2111_, v___x_2112_, v___x_2109_);
lean_dec_ref(v___y_2106_);
return v___x_2113_;
}
}
}
v___jp_2114_:
{
if (lean_obj_tag(v_outputsRef_x3f_2088_) == 1)
{
lean_object* v_val_2115_; lean_object* v___x_2116_; lean_object* v_packages_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v_config_2120_; lean_object* v_toLeanConfig_2121_; lean_object* v_platformIndependent_2122_; lean_object* v___x_2123_; uint8_t v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v_val_2115_ = lean_ctor_get(v_outputsRef_x3f_2088_, 0);
v___x_2116_ = lean_st_ref_get(v_val_2115_);
v_packages_2117_ = lean_ctor_get(v_ws_2087_, 4);
v___x_2118_ = lean_unsigned_to_nat(0u);
v___x_2119_ = lean_array_fget_borrowed(v_packages_2117_, v___x_2118_);
v_config_2120_ = lean_ctor_get(v___x_2119_, 6);
v_toLeanConfig_2121_ = lean_ctor_get(v_config_2120_, 1);
v_platformIndependent_2122_ = lean_ctor_get(v_toLeanConfig_2121_, 10);
v___x_2123_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__2));
v___x_2124_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(v_platformIndependent_2122_, v___x_2123_);
v___x_2125_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__3));
v___x_2126_ = l_Lake_CacheMap_writeFile(v_outputsFile_2090_, v___x_2116_, v___x_2124_, v___x_2125_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 1);
lean_inc(v_a_2127_);
lean_dec_ref_known(v___x_2126_, 2);
v___x_2128_ = lean_array_get_size(v_a_2127_);
v___x_2129_ = lean_nat_dec_eq(v___x_2128_, v___x_2118_);
if (v___x_2129_ == 0)
{
if (v_isVerbose_2091_ == 0)
{
lean_dec(v_a_2127_);
lean_dec_ref(v_out_2089_);
lean_dec_ref(v___x_2084_);
goto v___jp_2093_;
}
else
{
lean_object* v_putStr_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v_putStr_2130_ = lean_ctor_get(v_out_2089_, 4);
lean_inc_ref(v_putStr_2130_);
lean_dec_ref(v_out_2089_);
v___x_2131_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__4));
v___x_2132_ = lean_apply_2(v_putStr_2130_, v___x_2131_, lean_box(0));
if (lean_obj_tag(v___x_2132_) == 0)
{
lean_dec_ref_known(v___x_2132_, 1);
v___y_2096_ = v_a_2127_;
v___y_2097_ = v___x_2118_;
goto v___jp_2095_;
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v_a_2133_ = lean_ctor_get(v___x_2132_, 0);
lean_inc(v_a_2133_);
lean_dec_ref_known(v___x_2132_, 1);
v___x_2134_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2135_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2136_ = lean_unsigned_to_nat(82u);
v___x_2137_ = lean_unsigned_to_nat(4u);
v___x_2138_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_2139_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_2140_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2139_, v_isVerbose_2091_);
v___x_2141_ = lean_string_append(v___x_2138_, v___x_2140_);
lean_dec_ref(v___x_2140_);
v___x_2142_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_2143_ = lean_string_append(v___x_2141_, v___x_2142_);
v___x_2144_ = lean_io_error_to_string(v_a_2133_);
v___x_2145_ = lean_string_append(v___x_2143_, v___x_2144_);
lean_dec_ref(v___x_2144_);
v___x_2146_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_2147_ = lean_string_append(v___x_2145_, v___x_2146_);
v___x_2148_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__7);
v___x_2149_ = lean_string_append(v___x_2147_, v___x_2148_);
v___x_2150_ = l_mkPanicMessageWithDecl(v___x_2134_, v___x_2135_, v___x_2136_, v___x_2137_, v___x_2149_);
lean_dec_ref(v___x_2149_);
v___x_2151_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2150_);
v___y_2096_ = v_a_2127_;
v___y_2097_ = v___x_2118_;
goto v___jp_2095_;
}
}
}
else
{
lean_dec(v_a_2127_);
lean_dec_ref(v_out_2089_);
lean_dec_ref(v___x_2084_);
goto v___jp_2093_;
}
}
else
{
lean_object* v_a_2152_; lean_object* v_putStr_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v_a_2152_ = lean_ctor_get(v___x_2126_, 1);
lean_inc(v_a_2152_);
lean_dec_ref_known(v___x_2126_, 2);
v_putStr_2153_ = lean_ctor_get(v_out_2089_, 4);
lean_inc_ref(v_putStr_2153_);
lean_dec_ref(v_out_2089_);
v___x_2154_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__8));
v___x_2155_ = lean_apply_2(v_putStr_2153_, v___x_2154_, lean_box(0));
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_dec_ref_known(v___x_2155_, 1);
v___y_2105_ = v___x_2118_;
v___y_2106_ = v_a_2152_;
goto v___jp_2104_;
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_a_2156_);
lean_dec_ref_known(v___x_2155_, 1);
v___x_2157_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2158_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2159_ = lean_unsigned_to_nat(82u);
v___x_2160_ = lean_unsigned_to_nat(4u);
v___x_2161_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_2162_ = lean_io_error_to_string(v_a_2156_);
v___x_2163_ = lean_string_append(v___x_2161_, v___x_2162_);
lean_dec_ref(v___x_2162_);
v___x_2164_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_2165_ = lean_string_append(v___x_2163_, v___x_2164_);
v___x_2166_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__11);
v___x_2167_ = lean_string_append(v___x_2165_, v___x_2166_);
v___x_2168_ = l_mkPanicMessageWithDecl(v___x_2157_, v___x_2158_, v___x_2159_, v___x_2160_, v___x_2167_);
lean_dec_ref(v___x_2167_);
v___x_2169_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2168_);
v___y_2105_ = v___x_2118_;
v___y_2106_ = v_a_2152_;
goto v___jp_2104_;
}
}
}
else
{
lean_object* v_putStr_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
lean_dec_ref(v_outputsFile_2090_);
lean_dec_ref(v___x_2084_);
v_putStr_2170_ = lean_ctor_get(v_out_2089_, 4);
lean_inc_ref(v_putStr_2170_);
lean_dec_ref(v_out_2089_);
v___x_2171_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__12));
v___x_2172_ = lean_apply_2(v_putStr_2170_, v___x_2171_, lean_box(0));
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
lean_dec_ref_known(v___x_2172_, 1);
return v_a_2173_;
}
else
{
lean_object* v_a_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v_a_2174_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2174_);
lean_dec_ref_known(v___x_2172_, 1);
v___x_2175_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2176_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2177_ = lean_unsigned_to_nat(82u);
v___x_2178_ = lean_unsigned_to_nat(4u);
v___x_2179_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_2180_ = lean_io_error_to_string(v_a_2174_);
v___x_2181_ = lean_string_append(v___x_2179_, v___x_2180_);
lean_dec_ref(v___x_2180_);
v___x_2182_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_2183_ = lean_string_append(v___x_2181_, v___x_2182_);
v___x_2184_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15, &l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15_once, _init_l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___closed__15);
v___x_2185_ = lean_string_append(v___x_2183_, v___x_2184_);
v___x_2186_ = l_mkPanicMessageWithDecl(v___x_2175_, v___x_2176_, v___x_2177_, v___x_2178_, v___x_2185_);
lean_dec_ref(v___x_2185_);
v___x_2187_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2186_);
return v___x_2187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0___boxed(lean_object* v___x_2199_, lean_object* v___x_2200_, lean_object* v___x_2201_, lean_object* v_ws_2202_, lean_object* v_outputsRef_x3f_2203_, lean_object* v_out_2204_, lean_object* v_outputsFile_2205_, lean_object* v_isVerbose_2206_, lean_object* v___y_2207_){
_start:
{
uint8_t v___x_1178__boxed_2208_; uint8_t v___x_1179__boxed_2209_; uint8_t v_isVerbose_boxed_2210_; lean_object* v_res_2211_; 
v___x_1178__boxed_2208_ = lean_unbox(v___x_2200_);
v___x_1179__boxed_2209_ = lean_unbox(v___x_2201_);
v_isVerbose_boxed_2210_ = lean_unbox(v_isVerbose_2206_);
v_res_2211_ = l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(v___x_2199_, v___x_1178__boxed_2208_, v___x_1179__boxed_2209_, v_ws_2202_, v_outputsRef_x3f_2203_, v_out_2204_, v_outputsFile_2205_, v_isVerbose_boxed_2210_);
lean_dec(v_outputsRef_x3f_2203_);
lean_dec_ref(v_ws_2202_);
return v_res_2211_;
}
}
static uint8_t _init_l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0(void){
_start:
{
uint32_t v___x_2212_; uint8_t v___x_2213_; 
v___x_2212_ = 3;
v___x_2213_ = lean_uint32_to_uint8(v___x_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(lean_object* v_cfg_2214_, lean_object* v_bctx_2215_, lean_object* v_mctx_2216_, lean_object* v_result_2217_){
_start:
{
lean_object* v___y_2220_; lean_object* v_out_2223_; uint8_t v_outLv_2224_; uint8_t v_useAnsi_2225_; lean_object* v_toMonitorResult_2226_; lean_object* v_out_2227_; lean_object* v___x_2243_; lean_object* v_outputsFile_x3f_2244_; 
v_out_2223_ = lean_ctor_get(v_mctx_2216_, 1);
lean_inc_ref_n(v_out_2223_, 2);
v_outLv_2224_ = lean_ctor_get_uint8(v_mctx_2216_, sizeof(void*)*4);
v_useAnsi_2225_ = lean_ctor_get_uint8(v_mctx_2216_, sizeof(void*)*4 + 4);
lean_dec_ref(v_mctx_2216_);
v_toMonitorResult_2226_ = lean_ctor_get(v_result_2217_, 0);
lean_inc_ref_n(v_toMonitorResult_2226_, 2);
v_out_2227_ = lean_ctor_get(v_result_2217_, 1);
lean_inc_ref(v_out_2227_);
lean_dec_ref(v_result_2217_);
v___x_2243_ = l___private_Lake_Build_Run_0__Lake_reportResult(v_cfg_2214_, v_out_2223_, v_toMonitorResult_2226_);
v_outputsFile_x3f_2244_ = lean_ctor_get(v_cfg_2214_, 1);
if (lean_obj_tag(v_outputsFile_x3f_2244_) == 1)
{
uint8_t v_verbosity_2245_; lean_object* v_val_2246_; lean_object* v_toContext_2247_; lean_object* v_outputsRef_x3f_2248_; uint8_t v___y_2250_; 
v_verbosity_2245_ = lean_ctor_get_uint8(v_cfg_2214_, sizeof(void*)*4 + 4);
v_val_2246_ = lean_ctor_get(v_outputsFile_x3f_2244_, 0);
v_toContext_2247_ = lean_ctor_get(v_bctx_2215_, 1);
v_outputsRef_x3f_2248_ = lean_ctor_get(v_bctx_2215_, 5);
if (v_verbosity_2245_ == 2)
{
uint8_t v___x_2252_; 
v___x_2252_ = 1;
v___y_2250_ = v___x_2252_;
goto v___jp_2249_;
}
else
{
uint8_t v___x_2253_; 
v___x_2253_ = 0;
v___y_2250_ = v___x_2253_;
goto v___jp_2249_;
}
v___jp_2249_:
{
lean_object* v___x_2251_; 
lean_inc(v_val_2246_);
lean_inc_ref(v_out_2223_);
v___x_2251_ = l___private_Lake_Build_Run_0__Lake_Workspace_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(v_out_2223_, v_outLv_2224_, v_useAnsi_2225_, v_toContext_2247_, v_outputsRef_x3f_2248_, v_out_2223_, v_val_2246_, v___y_2250_);
goto v___jp_2228_;
}
}
else
{
lean_dec_ref(v_out_2223_);
goto v___jp_2228_;
}
v___jp_2219_:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2221_ = lean_mk_io_user_error(v___y_2220_);
v___x_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2221_);
return v___x_2222_;
}
v___jp_2228_:
{
if (lean_obj_tag(v_out_2227_) == 0)
{
uint8_t v_noBuild_2229_; 
v_noBuild_2229_ = lean_ctor_get_uint8(v_cfg_2214_, sizeof(void*)*4 + 2);
lean_dec_ref(v_cfg_2214_);
if (v_noBuild_2229_ == 0)
{
lean_object* v_a_2230_; 
lean_dec_ref(v_toMonitorResult_2226_);
v_a_2230_ = lean_ctor_get(v_out_2227_, 0);
lean_inc(v_a_2230_);
lean_dec_ref_known(v_out_2227_, 1);
v___y_2220_ = v_a_2230_;
goto v___jp_2219_;
}
else
{
uint8_t v_wantsRebuild_2231_; 
v_wantsRebuild_2231_ = lean_ctor_get_uint8(v_toMonitorResult_2226_, sizeof(void*)*2);
lean_dec_ref(v_toMonitorResult_2226_);
if (v_wantsRebuild_2231_ == 0)
{
lean_object* v_a_2232_; 
v_a_2232_ = lean_ctor_get(v_out_2227_, 0);
lean_inc(v_a_2232_);
lean_dec_ref_known(v_out_2227_, 1);
v___y_2220_ = v_a_2232_;
goto v___jp_2219_;
}
else
{
uint8_t v___x_2233_; lean_object* v___x_2234_; 
lean_dec_ref_known(v_out_2227_, 1);
v___x_2233_ = lean_uint8_once(&l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0, &l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___closed__0);
v___x_2234_ = lean_io_exit(v___x_2233_);
return v___x_2234_;
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_dec_ref(v_toMonitorResult_2226_);
lean_dec_ref(v_cfg_2214_);
v_a_2235_ = lean_ctor_get(v_out_2227_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v_out_2227_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v_out_2227_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v_out_2227_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
lean_ctor_set_tag(v___x_2237_, 0);
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___boxed(lean_object* v_cfg_2254_, lean_object* v_bctx_2255_, lean_object* v_mctx_2256_, lean_object* v_result_2257_, lean_object* v___y_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2254_, v_bctx_2255_, v_mctx_2256_, v_result_2257_);
lean_dec_ref(v_bctx_2255_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild(lean_object* v_00_u03b1_2260_, lean_object* v_cfg_2261_, lean_object* v_bctx_2262_, lean_object* v_mctx_2263_, lean_object* v_result_2264_){
_start:
{
lean_object* v___x_2266_; 
v___x_2266_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2261_, v_bctx_2262_, v_mctx_2263_, v_result_2264_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___boxed(lean_object* v_00_u03b1_2267_, lean_object* v_cfg_2268_, lean_object* v_bctx_2269_, lean_object* v_mctx_2270_, lean_object* v_result_2271_, lean_object* v___y_2272_){
_start:
{
lean_object* v_res_2273_; 
v_res_2273_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild(v_00_u03b1_2267_, v_cfg_2268_, v_bctx_2269_, v_mctx_2270_, v_result_2271_);
lean_dec_ref(v_bctx_2269_);
return v_res_2273_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg(lean_object* v_ws_2274_, lean_object* v_build_2275_, lean_object* v_cfg_2276_, lean_object* v_caption_2277_){
_start:
{
lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v_cancelTk_x3f_2282_; uint8_t v_failFast_2288_; 
v___x_2279_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2280_ = lean_st_mk_ref(v___x_2279_);
v_failFast_2288_ = lean_ctor_get_uint8(v_cfg_2276_, sizeof(void*)*4 + 3);
if (v_failFast_2288_ == 0)
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_box(0);
v_cancelTk_x3f_2282_ = v___x_2289_;
goto v___jp_2281_;
}
else
{
lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2290_ = l_IO_CancelToken_new();
v___x_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2290_);
v_cancelTk_x3f_2282_ = v___x_2291_;
goto v___jp_2281_;
}
v___jp_2281_:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
lean_inc(v_cancelTk_x3f_2282_);
lean_inc(v___x_2280_);
v___x_2283_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_2276_, v___x_2280_, v_cancelTk_x3f_2282_);
lean_inc_ref(v_cfg_2276_);
v___x_2284_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2274_, v_cfg_2276_, v___x_2280_, v_cancelTk_x3f_2282_);
v___x_2285_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2284_, v_build_2275_, v_caption_2277_);
v___x_2286_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v___x_2283_, v___x_2285_);
v___x_2287_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2276_, v___x_2284_, v___x_2283_, v___x_2286_);
lean_dec_ref(v___x_2284_);
return v___x_2287_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg___boxed(lean_object* v_ws_2292_, lean_object* v_build_2293_, lean_object* v_cfg_2294_, lean_object* v_caption_2295_, lean_object* v___y_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l_Lake_Workspace_runFetchM___redArg(v_ws_2292_, v_build_2293_, v_cfg_2294_, v_caption_2295_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM(lean_object* v_00_u03b1_2298_, lean_object* v_ws_2299_, lean_object* v_build_2300_, lean_object* v_cfg_2301_, lean_object* v_caption_2302_){
_start:
{
lean_object* v___x_2304_; 
v___x_2304_ = l_Lake_Workspace_runFetchM___redArg(v_ws_2299_, v_build_2300_, v_cfg_2301_, v_caption_2302_);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___boxed(lean_object* v_00_u03b1_2305_, lean_object* v_ws_2306_, lean_object* v_build_2307_, lean_object* v_cfg_2308_, lean_object* v_caption_2309_, lean_object* v___y_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l_Lake_Workspace_runFetchM(v_00_u03b1_2305_, v_ws_2306_, v_build_2307_, v_cfg_2308_, v_caption_2309_);
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(lean_object* v_mctx_2315_, lean_object* v_job_2316_){
_start:
{
lean_object* v___x_2318_; lean_object* v_out_2319_; 
v___x_2318_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_mctx_2315_, v_job_2316_);
v_out_2319_ = lean_ctor_get(v___x_2318_, 1);
lean_inc_ref(v_out_2319_);
if (lean_obj_tag(v_out_2319_) == 0)
{
lean_object* v_toMonitorResult_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2335_; 
v_toMonitorResult_2320_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2335_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2335_ == 0)
{
lean_object* v_unused_2336_; 
v_unused_2336_ = lean_ctor_get(v___x_2318_, 1);
lean_dec(v_unused_2336_);
v___x_2322_ = v___x_2318_;
v_isShared_2323_ = v_isSharedCheck_2335_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_toMonitorResult_2320_);
lean_dec(v___x_2318_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2335_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2334_; 
v_a_2324_ = lean_ctor_get(v_out_2319_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v_out_2319_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2326_ = v_out_2319_;
v_isShared_2327_ = v_isSharedCheck_2334_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v_out_2319_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2334_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
lean_object* v___x_2331_; 
if (v_isShared_2323_ == 0)
{
lean_ctor_set(v___x_2322_, 1, v___x_2329_);
v___x_2331_ = v___x_2322_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_toMonitorResult_2320_);
lean_ctor_set(v_reuseFailAlloc_2332_, 1, v___x_2329_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
}
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2360_; 
v_a_2337_ = lean_ctor_get(v_out_2319_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v_out_2319_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2339_ = v_out_2319_;
v_isShared_2340_ = v_isSharedCheck_2360_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v_out_2319_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2360_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v_toMonitorResult_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2358_; 
v_toMonitorResult_2341_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2358_ == 0)
{
lean_object* v_unused_2359_; 
v_unused_2359_ = lean_ctor_get(v___x_2318_, 1);
lean_dec(v_unused_2359_);
v___x_2343_ = v___x_2318_;
v_isShared_2344_ = v_isSharedCheck_2358_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_toMonitorResult_2341_);
lean_dec(v___x_2318_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2358_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v_task_2345_; lean_object* v___x_2346_; 
v_task_2345_ = lean_ctor_get(v_a_2337_, 0);
lean_inc_ref(v_task_2345_);
lean_dec(v_a_2337_);
v___x_2346_ = lean_io_wait(v_task_2345_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; lean_object* v___x_2349_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
lean_inc(v_a_2347_);
lean_dec_ref_known(v___x_2346_, 2);
if (v_isShared_2340_ == 0)
{
lean_ctor_set(v___x_2339_, 0, v_a_2347_);
v___x_2349_ = v___x_2339_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_a_2347_);
v___x_2349_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v___x_2351_; 
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 1, v___x_2349_);
v___x_2351_ = v___x_2343_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_toMonitorResult_2341_);
lean_ctor_set(v_reuseFailAlloc_2352_, 1, v___x_2349_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
else
{
lean_object* v___x_2354_; lean_object* v___x_2356_; 
lean_dec_ref_known(v___x_2346_, 2);
lean_del_object(v___x_2339_);
v___x_2354_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__1));
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 1, v___x_2354_);
v___x_2356_ = v___x_2343_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_toMonitorResult_2341_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v___x_2354_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___boxed(lean_object* v_mctx_2361_, lean_object* v_job_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v_mctx_2361_, v_job_2362_);
lean_dec_ref(v_mctx_2361_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild(lean_object* v_00_u03b1_2365_, lean_object* v_mctx_2366_, lean_object* v_job_2367_){
_start:
{
lean_object* v___x_2369_; 
v___x_2369_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v_mctx_2366_, v_job_2367_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___boxed(lean_object* v_00_u03b1_2370_, lean_object* v_mctx_2371_, lean_object* v_job_2372_, lean_object* v___y_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l___private_Lake_Build_Run_0__Lake_monitorBuild(v_00_u03b1_2370_, v_mctx_2371_, v_job_2372_);
lean_dec_ref(v_mctx_2371_);
return v_res_2374_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild___redArg(lean_object* v_ws_2388_, lean_object* v_build_2389_){
_start:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; uint8_t v___x_2393_; uint8_t v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v_out_2402_; 
v___x_2391_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2392_ = lean_st_mk_ref(v___x_2391_);
v___x_2393_ = 0;
v___x_2394_ = 1;
v___x_2395_ = lean_box(0);
v___x_2396_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__1));
lean_inc(v___x_2392_);
v___x_2397_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v___x_2396_, v___x_2392_, v___x_2395_);
v___x_2398_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2388_, v___x_2396_, v___x_2392_, v___x_2395_);
v___x_2399_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__2));
v___x_2400_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2398_, v_build_2389_, v___x_2399_);
lean_dec_ref(v___x_2398_);
v___x_2401_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v___x_2397_, v___x_2400_);
lean_dec_ref(v___x_2397_);
v_out_2402_ = lean_ctor_get(v___x_2401_, 1);
lean_inc_ref(v_out_2402_);
lean_dec_ref(v___x_2401_);
if (lean_obj_tag(v_out_2402_) == 0)
{
lean_dec_ref_known(v_out_2402_, 1);
return v___x_2393_;
}
else
{
lean_dec_ref_known(v_out_2402_, 1);
return v___x_2394_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___redArg___boxed(lean_object* v_ws_2403_, lean_object* v_build_2404_, lean_object* v___y_2405_){
_start:
{
uint8_t v_res_2406_; lean_object* v_r_2407_; 
v_res_2406_ = l_Lake_Workspace_checkNoBuild___redArg(v_ws_2403_, v_build_2404_);
v_r_2407_ = lean_box(v_res_2406_);
return v_r_2407_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild(lean_object* v_00_u03b1_2408_, lean_object* v_ws_2409_, lean_object* v_build_2410_){
_start:
{
uint8_t v___x_2412_; 
v___x_2412_ = l_Lake_Workspace_checkNoBuild___redArg(v_ws_2409_, v_build_2410_);
return v___x_2412_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___boxed(lean_object* v_00_u03b1_2413_, lean_object* v_ws_2414_, lean_object* v_build_2415_, lean_object* v___y_2416_){
_start:
{
uint8_t v_res_2417_; lean_object* v_r_2418_; 
v_res_2417_ = l_Lake_Workspace_checkNoBuild(v_00_u03b1_2413_, v_ws_2414_, v_build_2415_);
v_r_2418_ = lean_box(v_res_2417_);
return v_r_2418_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg(lean_object* v_ws_2419_, lean_object* v_build_2420_, lean_object* v_cfg_2421_){
_start:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v_cancelTk_x3f_2426_; uint8_t v_failFast_2433_; 
v___x_2423_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2424_ = lean_st_mk_ref(v___x_2423_);
v_failFast_2433_ = lean_ctor_get_uint8(v_cfg_2421_, sizeof(void*)*4 + 3);
if (v_failFast_2433_ == 0)
{
lean_object* v___x_2434_; 
v___x_2434_ = lean_box(0);
v_cancelTk_x3f_2426_ = v___x_2434_;
goto v___jp_2425_;
}
else
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = l_IO_CancelToken_new();
v___x_2436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
v_cancelTk_x3f_2426_ = v___x_2436_;
goto v___jp_2425_;
}
v___jp_2425_:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; 
lean_inc(v_cancelTk_x3f_2426_);
lean_inc(v___x_2424_);
v___x_2427_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_2421_, v___x_2424_, v_cancelTk_x3f_2426_);
lean_inc_ref(v_cfg_2421_);
v___x_2428_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2419_, v_cfg_2421_, v___x_2424_, v_cancelTk_x3f_2426_);
v___x_2429_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__2));
v___x_2430_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2428_, v_build_2420_, v___x_2429_);
v___x_2431_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v___x_2427_, v___x_2430_);
v___x_2432_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2421_, v___x_2428_, v___x_2427_, v___x_2431_);
lean_dec_ref(v___x_2428_);
return v___x_2432_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg___boxed(lean_object* v_ws_2437_, lean_object* v_build_2438_, lean_object* v_cfg_2439_, lean_object* v___y_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Lake_Workspace_runBuild___redArg(v_ws_2437_, v_build_2438_, v_cfg_2439_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild(lean_object* v_00_u03b1_2442_, lean_object* v_ws_2443_, lean_object* v_build_2444_, lean_object* v_cfg_2445_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = l_Lake_Workspace_runBuild___redArg(v_ws_2443_, v_build_2444_, v_cfg_2445_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___boxed(lean_object* v_00_u03b1_2448_, lean_object* v_ws_2449_, lean_object* v_build_2450_, lean_object* v_cfg_2451_, lean_object* v___y_2452_){
_start:
{
lean_object* v_res_2453_; 
v_res_2453_ = l_Lake_Workspace_runBuild(v_00_u03b1_2448_, v_ws_2449_, v_build_2450_, v_cfg_2451_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg(lean_object* v_build_2454_, lean_object* v_cfg_2455_, lean_object* v_a_2456_){
_start:
{
lean_object* v___x_2458_; 
lean_inc(v_a_2456_);
v___x_2458_ = l_Lake_Workspace_runBuild___redArg(v_a_2456_, v_build_2454_, v_cfg_2455_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg___boxed(lean_object* v_build_2459_, lean_object* v_cfg_2460_, lean_object* v_a_2461_, lean_object* v___y_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l_Lake_runBuild___redArg(v_build_2459_, v_cfg_2460_, v_a_2461_);
lean_dec(v_a_2461_);
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild(lean_object* v_00_u03b1_2464_, lean_object* v_build_2465_, lean_object* v_cfg_2466_, lean_object* v_a_2467_){
_start:
{
lean_object* v___x_2469_; 
lean_inc(v_a_2467_);
v___x_2469_ = l_Lake_Workspace_runBuild___redArg(v_a_2467_, v_build_2465_, v_cfg_2466_);
return v___x_2469_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___boxed(lean_object* v_00_u03b1_2470_, lean_object* v_build_2471_, lean_object* v_cfg_2472_, lean_object* v_a_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_Lake_runBuild(v_00_u03b1_2470_, v_build_2471_, v_cfg_2472_, v_a_2473_);
lean_dec(v_a_2473_);
return v_res_2475_;
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
