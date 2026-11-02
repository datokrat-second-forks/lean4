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
uint8_t l_Lake_instDecidableEqVerbosity(uint8_t, uint8_t);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_String_quote(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_logToStream(lean_object*, lean_object*, uint8_t, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_exit(uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_CacheMap_writeFile(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l___private_Lake_Build_Index_0__Lake_recFetchWithIndex___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Job_async___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Fin_add(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Bool_decEq___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_io_get_task_state(lean_object*);
lean_object* l_Lake_Ansi_chalk(lean_object*, lean_object*);
lean_object* l_Lake_LogLevel_ansiColor(uint8_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint32_t l_Lake_LogLevel_icon(uint8_t);
lean_object* l_Lake_JobAction_verb(uint8_t, uint8_t);
uint8_t l_Lake_instOrdJobAction_ord(uint8_t, uint8_t);
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
uint8_t l_instBEqOption_beq___redArg(lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "33"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " (Optional)"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__7 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__7_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Canceled"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__8 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__8_value;
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
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_monitorJobs(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_monitorJobs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lake_noBuildCode;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Tracked package not found. (This is likely a bug in Lake.)\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Bool_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__4_value;
static const lean_closure_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instBEqOfDecidableEq___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__4_value)} };
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__5_value;
static const lean_array_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__6 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__6_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "There were issues saving input-to-output mappings from the build:\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Failed to save input-to-output mappings from the build.\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 162, .m_capacity = 162, .m_length = 161, .m_data = ": the artifact cache is not enabled for this package, so the artifacts described by the mappings produced by `-o` will not necessarily be available in the cache."};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__15 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__15_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "Build missing input-to-output mappings. (This is likely a bug in Lake.)\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19;
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "- "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Some required targets logged failures:\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__0 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__1;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__2;
static lean_once_cell_t l___private_Lake_Build_Run_0__Lake_reportResult___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__3;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Build completed successfully ("};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__4 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__4_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ").\n"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__5 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__5_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "All targets up-to-date ("};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__6 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__6_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " jobs"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__7 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__7_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "1 job"};
static const lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___closed__8 = (const lean_object*)&l___private_Lake_Build_Run_0__Lake_reportResult___closed__8_value;
static const lean_string_object l___private_Lake_Build_Run_0__Lake_reportResult___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Nothing to build.\n"};
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l_Lake_Workspace_checkNoBuild___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 8, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_checkNoBuild___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 0, 1, 0, 0, 0)}};
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
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___redArg___boxed(lean_object* v_ctx_62_, lean_object* v_s_63_, lean_object* v_self_64_, lean_object* v_a_65_){
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
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorM_run___boxed(lean_object* v_00_u03b1_73_, lean_object* v_ctx_74_, lean_object* v_s_75_, lean_object* v_self_76_, lean_object* v_a_77_){
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
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_flush___boxed(lean_object* v_out_87_, lean_object* v_a_88_){
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
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_186__overap_161_; lean_object* v___x_162_; 
v___x_157_ = l_Std_Format_defWidth;
v___x_158_ = l_Std_Format_pretty(v___x_156_, v___x_157_, v___x_148_, v___x_148_);
v___x_159_ = lean_string_append(v___x_153_, v___x_158_);
lean_dec_ref(v___x_158_);
v___x_160_ = l_mkPanicMessageWithDecl(v___x_144_, v___x_145_, v___x_146_, v___x_147_, v___x_159_);
lean_dec_ref(v___x_159_);
v___x_186__overap_161_ = l_panic___redArg(v___x_137_, v___x_160_);
v___x_162_ = lean_apply_1(v___x_186__overap_161_, lean_box(0));
return v___x_162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_print_x21___boxed(lean_object* v_out_165_, lean_object* v_s_166_, lean_object* v_a_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l___private_Lake_Build_Run_0__Lake_print_x21(v_out_165_, v_s_166_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print(lean_object* v_s_169_, lean_object* v_a_170_, lean_object* v_a_171_){
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
lean_ctor_set(v___x_175_, 1, v_a_171_);
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_print___boxed(lean_object* v_s_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l___private_Lake_Build_Run_0__Lake_Monitor_print(v_s_206_, v_a_207_, v_a_208_);
lean_dec_ref(v_a_207_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush(lean_object* v_a_211_, lean_object* v_a_212_){
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
lean_ctor_set(v___x_216_, 1, v_a_212_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_flush___boxed(lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l___private_Lake_Build_Run_0__Lake_Monitor_flush(v_a_222_, v_a_223_);
lean_dec_ref(v_a_222_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(lean_object* v_msg_226_){
_start:
{
lean_object* v___x_228_; lean_object* v___x_7771__overap_229_; lean_object* v___x_230_; 
v___x_228_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_7771__overap_229_ = lean_panic_fn_borrowed(v___x_228_, v_msg_226_);
v___x_230_ = lean_apply_1(v___x_7771__overap_229_, lean_box(0));
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
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(lean_object* v_running_242_, lean_object* v_unfinished_243_, lean_object* v_a_244_, lean_object* v_a_245_){
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
v_jobNo_252_ = lean_ctor_get(v_a_245_, 0);
v_totalJobs_253_ = lean_ctor_get(v_a_245_, 1);
v_wantsRebuild_254_ = lean_ctor_get_uint8(v_a_245_, sizeof(void*)*6);
v_failures_255_ = lean_ctor_get(v_a_245_, 2);
v_resetCtrl_256_ = lean_ctor_get(v_a_245_, 3);
v_lastUpdate_257_ = lean_ctor_get(v_a_245_, 4);
v_spinnerIdx_258_ = lean_ctor_get(v_a_245_, 5);
v_isSharedCheck_347_ = !lean_is_exclusive(v_a_245_);
if (v_isSharedCheck_347_ == 0)
{
v___x_260_ = v_a_245_;
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
lean_dec(v_a_245_);
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
lean_ctor_set(v___x_249_, 1, v_a_245_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___boxed(lean_object* v_running_348_, lean_object* v_unfinished_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_running_348_, v_unfinished_349_, v_a_350_, v_a_351_);
lean_dec_ref(v_a_350_);
lean_dec_ref(v_unfinished_349_);
lean_dec_ref(v_running_348_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress(lean_object* v_running_354_, lean_object* v_unfinished_355_, lean_object* v_h_356_, lean_object* v_a_357_, lean_object* v_a_358_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_running_354_, v_unfinished_355_, v_a_357_, v_a_358_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___boxed(lean_object* v_running_361_, lean_object* v_unfinished_362_, lean_object* v_h_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress(v_running_361_, v_unfinished_362_, v_h_363_, v_a_364_, v_a_365_);
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
uint8_t v___y_13856__boxed_423_; uint8_t v_useAnsi_13857__boxed_424_; size_t v_i_boxed_425_; size_t v_stop_boxed_426_; lean_object* v_res_427_; 
v___y_13856__boxed_423_ = lean_unbox(v___y_415_);
v_useAnsi_13857__boxed_424_ = lean_unbox(v_useAnsi_416_);
v_i_boxed_425_ = lean_unbox_usize(v_i_418_);
lean_dec(v_i_418_);
v_stop_boxed_426_ = lean_unbox_usize(v_stop_419_);
lean_dec(v_stop_419_);
v_res_427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_414_, v___y_13856__boxed_423_, v_useAnsi_13857__boxed_424_, v_as_417_, v_i_boxed_425_, v_stop_boxed_426_, v_b_420_, v___y_421_);
lean_dec_ref(v_as_417_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(lean_object* v_job_437_, lean_object* v_a_438_, lean_object* v_a_439_){
_start:
{
lean_object* v___y_442_; lean_object* v___y_446_; lean_object* v_val_447_; lean_object* v___y_450_; lean_object* v___y_451_; lean_object* v_jobNo_457_; lean_object* v_totalJobs_458_; uint8_t v_wantsRebuild_459_; lean_object* v_failures_460_; lean_object* v_resetCtrl_461_; lean_object* v_lastUpdate_462_; lean_object* v_spinnerIdx_463_; lean_object* v_out_464_; uint8_t v_outLv_465_; uint8_t v_failLv_466_; uint8_t v_minAction_467_; uint8_t v_showOptional_468_; uint8_t v_useAnsi_469_; uint8_t v_showProgress_470_; uint8_t v_showTime_471_; lean_object* v___y_473_; lean_object* v___y_474_; lean_object* v___y_475_; uint8_t v___y_476_; uint8_t v___y_486_; uint8_t v___y_487_; lean_object* v___y_488_; lean_object* v___y_489_; lean_object* v___y_490_; uint8_t v___y_493_; uint8_t v___y_494_; lean_object* v___y_495_; uint8_t v___y_496_; lean_object* v___y_497_; lean_object* v___y_498_; lean_object* v___y_499_; uint8_t v___y_551_; uint8_t v___y_552_; uint8_t v___y_553_; lean_object* v___y_554_; lean_object* v___y_555_; lean_object* v___y_556_; lean_object* v___y_557_; lean_object* v___y_558_; lean_object* v_task_560_; lean_object* v_caption_561_; uint8_t v_optional_562_; uint8_t v___y_564_; uint32_t v___y_565_; uint8_t v___y_566_; lean_object* v___y_567_; uint8_t v___y_568_; lean_object* v___y_569_; uint8_t v___y_570_; lean_object* v___y_571_; uint8_t v___y_572_; lean_object* v___y_573_; lean_object* v___y_574_; lean_object* v___y_575_; uint32_t v___y_599_; uint8_t v___y_600_; lean_object* v___y_601_; uint8_t v___y_602_; uint8_t v___y_603_; uint8_t v___y_604_; lean_object* v___y_605_; lean_object* v___y_606_; uint8_t v___y_607_; lean_object* v___y_608_; lean_object* v___y_609_; uint32_t v___y_612_; uint8_t v___y_613_; lean_object* v___y_614_; uint8_t v___y_615_; lean_object* v___y_616_; uint8_t v___y_617_; uint8_t v___y_618_; lean_object* v___y_619_; lean_object* v___y_620_; uint8_t v___y_621_; lean_object* v___y_622_; lean_object* v___y_623_; uint8_t v___y_632_; uint8_t v___y_633_; lean_object* v___y_634_; uint8_t v___y_635_; lean_object* v___y_636_; lean_object* v___y_637_; uint8_t v___y_638_; lean_object* v___y_639_; uint8_t v___y_640_; lean_object* v___y_641_; uint32_t v___y_642_; uint8_t v___y_646_; uint8_t v___y_647_; lean_object* v___y_648_; uint8_t v___y_649_; uint8_t v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; uint8_t v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; uint8_t v___y_660_; uint8_t v___y_661_; lean_object* v___y_662_; uint8_t v___y_663_; lean_object* v___y_664_; lean_object* v___y_665_; uint8_t v___y_666_; lean_object* v___y_667_; uint8_t v___y_668_; uint8_t v___y_671_; uint8_t v___y_672_; uint8_t v___y_673_; lean_object* v___y_674_; uint8_t v___y_675_; lean_object* v___y_676_; lean_object* v___y_677_; uint8_t v___y_678_; lean_object* v___y_679_; uint8_t v___y_680_; uint8_t v___y_683_; uint8_t v___y_684_; uint8_t v___y_685_; lean_object* v___y_686_; lean_object* v___y_687_; uint8_t v___y_688_; lean_object* v___y_689_; uint8_t v___y_690_; lean_object* v___y_691_; uint8_t v___y_694_; uint8_t v___y_695_; uint8_t v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; uint8_t v___y_700_; lean_object* v___y_701_; uint8_t v___y_702_; uint8_t v___y_704_; uint8_t v___y_705_; uint8_t v___y_706_; lean_object* v___y_707_; lean_object* v___y_708_; uint8_t v___y_709_; uint8_t v___y_710_; lean_object* v___y_711_; lean_object* v___y_712_; uint8_t v___y_730_; uint8_t v___y_731_; lean_object* v___y_732_; lean_object* v___y_733_; uint8_t v___y_734_; uint8_t v___y_735_; uint8_t v___y_736_; uint8_t v___y_737_; uint8_t v___y_752_; lean_object* v___y_753_; lean_object* v___y_754_; uint8_t v___y_755_; uint8_t v___y_756_; uint8_t v___y_757_; uint8_t v___y_758_; uint8_t v___y_759_; uint8_t v___y_763_; lean_object* v___y_764_; lean_object* v___y_765_; uint8_t v___y_766_; uint8_t v___y_767_; uint8_t v___y_768_; uint8_t v___y_769_; lean_object* v___y_774_; lean_object* v___x_786_; lean_object* v_a_787_; 
v_jobNo_457_ = lean_ctor_get(v_a_439_, 0);
lean_inc(v_jobNo_457_);
v_totalJobs_458_ = lean_ctor_get(v_a_439_, 1);
lean_inc(v_totalJobs_458_);
v_wantsRebuild_459_ = lean_ctor_get_uint8(v_a_439_, sizeof(void*)*6);
v_failures_460_ = lean_ctor_get(v_a_439_, 2);
v_resetCtrl_461_ = lean_ctor_get(v_a_439_, 3);
v_lastUpdate_462_ = lean_ctor_get(v_a_439_, 4);
v_spinnerIdx_463_ = lean_ctor_get(v_a_439_, 5);
v_out_464_ = lean_ctor_get(v_a_438_, 1);
v_outLv_465_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4);
v_failLv_466_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 1);
v_minAction_467_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 2);
v_showOptional_468_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 3);
v_useAnsi_469_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 4);
v_showProgress_470_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 5);
v_showTime_471_ = lean_ctor_get_uint8(v_a_438_, sizeof(void*)*4 + 6);
v_task_560_ = lean_ctor_get(v_job_437_, 0);
lean_inc_ref(v_task_560_);
v_caption_561_ = lean_ctor_get(v_job_437_, 2);
lean_inc_ref(v_caption_561_);
v_optional_562_ = lean_ctor_get_uint8(v_job_437_, sizeof(void*)*3);
lean_dec_ref(v_job_437_);
v___x_786_ = lean_task_get_own(v_task_560_);
v_a_787_ = lean_ctor_get(v___x_786_, 1);
lean_inc(v_a_787_);
lean_dec(v___x_786_);
v___y_774_ = v_a_787_;
goto v___jp_773_;
v___jp_441_:
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = lean_box(0);
v___x_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v___y_442_);
return v___x_444_;
}
v___jp_445_:
{
lean_object* v___x_448_; 
v___x_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_448_, 0, v_val_447_);
lean_ctor_set(v___x_448_, 1, v___y_446_);
return v___x_448_;
}
v___jp_449_:
{
lean_object* v_out_452_; lean_object* v_flush_453_; lean_object* v___x_454_; 
v_out_452_ = lean_ctor_get(v___y_450_, 1);
v_flush_453_ = lean_ctor_get(v_out_452_, 0);
lean_inc_ref(v_flush_453_);
v___x_454_ = lean_apply_1(v_flush_453_, lean_box(0));
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v_a_455_; 
v_a_455_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_a_455_);
lean_dec_ref_known(v___x_454_, 1);
v___y_446_ = v___y_451_;
v_val_447_ = v_a_455_;
goto v___jp_445_;
}
else
{
lean_object* v___x_456_; 
lean_dec_ref_known(v___x_454_, 1);
v___x_456_ = lean_box(0);
v___y_446_ = v___y_451_;
v_val_447_ = v___x_456_;
goto v___jp_445_;
}
}
v___jp_472_:
{
lean_object* v___x_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_477_ = lean_unsigned_to_nat(0u);
v___x_478_ = lean_array_get_size(v___y_475_);
v___x_479_ = lean_nat_dec_lt(v___x_477_, v___x_478_);
if (v___x_479_ == 0)
{
lean_dec_ref(v___y_475_);
v___y_450_ = v___y_473_;
v___y_451_ = v___y_474_;
goto v___jp_449_;
}
else
{
lean_object* v___x_480_; size_t v___x_481_; size_t v___x_482_; lean_object* v___x_483_; lean_object* v_snd_484_; 
v___x_480_ = lean_box(0);
v___x_481_ = ((size_t)0ULL);
v___x_482_ = lean_usize_of_nat(v___x_478_);
lean_inc_ref(v_out_464_);
v___x_483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_464_, v___y_476_, v_useAnsi_469_, v___y_475_, v___x_481_, v___x_482_, v___x_480_, v___y_474_);
lean_dec_ref(v___y_475_);
v_snd_484_ = lean_ctor_get(v___x_483_, 1);
lean_inc(v_snd_484_);
lean_dec_ref(v___x_483_);
v___y_450_ = v___y_473_;
v___y_451_ = v_snd_484_;
goto v___jp_449_;
}
}
v___jp_485_:
{
if (v___y_487_ == 0)
{
lean_dec_ref(v___y_489_);
v___y_450_ = v___y_488_;
v___y_451_ = v___y_490_;
goto v___jp_449_;
}
else
{
if (v___y_486_ == 0)
{
v___y_473_ = v___y_488_;
v___y_474_ = v___y_490_;
v___y_475_ = v___y_489_;
v___y_476_ = v_outLv_465_;
goto v___jp_472_;
}
else
{
uint8_t v___x_491_; 
v___x_491_ = 0;
v___y_473_ = v___y_488_;
v___y_474_ = v___y_490_;
v___y_475_ = v___y_489_;
v___y_476_ = v___x_491_;
goto v___jp_472_;
}
}
}
v___jp_492_:
{
lean_object* v_out_500_; lean_object* v_jobNo_501_; lean_object* v_totalJobs_502_; uint8_t v_wantsRebuild_503_; lean_object* v_failures_504_; lean_object* v_resetCtrl_505_; lean_object* v_lastUpdate_506_; lean_object* v_spinnerIdx_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_549_; 
v_out_500_ = lean_ctor_get(v___y_495_, 1);
v_jobNo_501_ = lean_ctor_get(v___y_498_, 0);
v_totalJobs_502_ = lean_ctor_get(v___y_498_, 1);
v_wantsRebuild_503_ = lean_ctor_get_uint8(v___y_498_, sizeof(void*)*6);
v_failures_504_ = lean_ctor_get(v___y_498_, 2);
v_resetCtrl_505_ = lean_ctor_get(v___y_498_, 3);
v_lastUpdate_506_ = lean_ctor_get(v___y_498_, 4);
v_spinnerIdx_507_ = lean_ctor_get(v___y_498_, 5);
v_isSharedCheck_549_ = !lean_is_exclusive(v___y_498_);
if (v_isSharedCheck_549_ == 0)
{
v___x_509_ = v___y_498_;
v_isShared_510_ = v_isSharedCheck_549_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_spinnerIdx_507_);
lean_inc(v_lastUpdate_506_);
lean_inc(v_resetCtrl_505_);
lean_inc(v_failures_504_);
lean_inc(v_totalJobs_502_);
lean_inc(v_jobNo_501_);
lean_dec(v___y_498_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_549_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v_putStr_511_; lean_object* v___x_512_; lean_object* v___x_514_; 
v_putStr_511_ = lean_ctor_get(v_out_500_, 4);
v___x_512_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 3, v___x_512_);
v___x_514_ = v___x_509_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_jobNo_501_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v_totalJobs_502_);
lean_ctor_set(v_reuseFailAlloc_548_, 2, v_failures_504_);
lean_ctor_set(v_reuseFailAlloc_548_, 3, v___x_512_);
lean_ctor_set(v_reuseFailAlloc_548_, 4, v_lastUpdate_506_);
lean_ctor_set(v_reuseFailAlloc_548_, 5, v_spinnerIdx_507_);
lean_ctor_set_uint8(v_reuseFailAlloc_548_, sizeof(void*)*6, v_wantsRebuild_503_);
v___x_514_ = v_reuseFailAlloc_548_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_515_ = lean_string_append(v_resetCtrl_505_, v___y_499_);
lean_dec_ref(v___y_499_);
v___x_516_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0));
v___x_517_ = lean_string_append(v___x_515_, v___x_516_);
lean_inc_ref(v_putStr_511_);
lean_inc_ref(v___x_517_);
v___x_518_ = lean_apply_2(v_putStr_511_, v___x_517_, lean_box(0));
if (lean_obj_tag(v___x_518_) == 0)
{
lean_dec_ref_known(v___x_518_, 1);
lean_dec_ref(v___x_517_);
v___y_486_ = v___y_493_;
v___y_487_ = v___y_496_;
v___y_488_ = v___y_495_;
v___y_489_ = v___y_497_;
v___y_490_ = v___x_514_;
goto v___jp_485_;
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_547_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_547_ == 0)
{
v___x_521_ = v___x_518_;
v_isShared_522_ = v_isSharedCheck_547_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_518_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_547_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_540_; 
v___x_523_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_524_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_525_ = lean_unsigned_to_nat(82u);
v___x_526_ = lean_unsigned_to_nat(4u);
v___x_527_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_528_ = lean_unsigned_to_nat(0u);
v___x_529_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_530_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_529_, v___y_494_);
v___x_531_ = lean_string_append(v___x_527_, v___x_530_);
lean_dec_ref(v___x_530_);
v___x_532_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_533_ = lean_string_append(v___x_531_, v___x_532_);
v___x_534_ = lean_io_error_to_string(v_a_519_);
v___x_535_ = lean_string_append(v___x_533_, v___x_534_);
lean_dec_ref(v___x_534_);
v___x_536_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_537_ = lean_string_append(v___x_535_, v___x_536_);
v___x_538_ = l_String_quote(v___x_517_);
if (v_isShared_522_ == 0)
{
lean_ctor_set_tag(v___x_521_, 3);
lean_ctor_set(v___x_521_, 0, v___x_538_);
v___x_540_ = v___x_521_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_538_);
v___x_540_ = v_reuseFailAlloc_546_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_541_ = l_Std_Format_defWidth;
v___x_542_ = l_Std_Format_pretty(v___x_540_, v___x_541_, v___x_528_, v___x_528_);
v___x_543_ = lean_string_append(v___x_537_, v___x_542_);
lean_dec_ref(v___x_542_);
v___x_544_ = l_mkPanicMessageWithDecl(v___x_523_, v___x_524_, v___x_525_, v___x_526_, v___x_543_);
lean_dec_ref(v___x_543_);
v___x_545_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_544_);
v___y_486_ = v___y_493_;
v___y_487_ = v___y_496_;
v___y_488_ = v___y_495_;
v___y_489_ = v___y_497_;
v___y_490_ = v___x_514_;
goto v___jp_485_;
}
}
}
}
}
}
v___jp_550_:
{
lean_object* v___x_559_; 
v___x_559_ = l_Lake_Ansi_chalk(v___y_558_, v___y_556_);
lean_dec_ref(v___y_556_);
lean_dec_ref(v___y_558_);
v___y_493_ = v___y_551_;
v___y_494_ = v___y_552_;
v___y_495_ = v___y_554_;
v___y_496_ = v___y_553_;
v___y_497_ = v___y_555_;
v___y_498_ = v___y_557_;
v___y_499_ = v___x_559_;
goto v___jp_492_;
}
v___jp_563_:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_576_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_577_ = lean_string_push(v___x_576_, v___y_565_);
v___x_578_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__2));
v___x_579_ = lean_string_append(v___x_577_, v___x_578_);
v___x_580_ = l_Nat_reprFast(v_jobNo_457_);
v___x_581_ = lean_string_append(v___x_579_, v___x_580_);
lean_dec_ref(v___x_580_);
v___x_582_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__3));
v___x_583_ = lean_string_append(v___x_581_, v___x_582_);
v___x_584_ = l_Nat_reprFast(v_totalJobs_458_);
v___x_585_ = lean_string_append(v___x_583_, v___x_584_);
lean_dec_ref(v___x_584_);
v___x_586_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__1));
v___x_587_ = lean_string_append(v___x_585_, v___x_586_);
v___x_588_ = lean_string_append(v___x_587_, v___y_574_);
v___x_589_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__2));
v___x_590_ = lean_string_append(v___x_588_, v___x_589_);
v___x_591_ = lean_string_append(v___x_590_, v___y_567_);
lean_dec_ref(v___y_567_);
v___x_592_ = lean_string_append(v___x_591_, v___x_589_);
v___x_593_ = lean_string_append(v___x_592_, v_caption_561_);
lean_dec_ref(v_caption_561_);
v___x_594_ = lean_string_append(v___x_593_, v___y_575_);
lean_dec_ref(v___y_575_);
if (v_useAnsi_469_ == 0)
{
v___y_493_ = v___y_566_;
v___y_494_ = v___y_568_;
v___y_495_ = v___y_569_;
v___y_496_ = v___y_570_;
v___y_497_ = v___y_571_;
v___y_498_ = v___y_573_;
v___y_499_ = v___x_594_;
goto v___jp_492_;
}
else
{
if (v___y_570_ == 0)
{
if (v___y_564_ == 0)
{
lean_object* v___x_595_; 
v___x_595_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__3));
v___y_551_ = v___y_566_;
v___y_552_ = v___y_568_;
v___y_553_ = v___y_570_;
v___y_554_ = v___y_569_;
v___y_555_ = v___y_571_;
v___y_556_ = v___x_594_;
v___y_557_ = v___y_573_;
v___y_558_ = v___x_595_;
goto v___jp_550_;
}
else
{
lean_object* v___x_596_; 
v___x_596_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__4));
v___y_551_ = v___y_566_;
v___y_552_ = v___y_568_;
v___y_553_ = v___y_570_;
v___y_554_ = v___y_569_;
v___y_555_ = v___y_571_;
v___y_556_ = v___x_594_;
v___y_557_ = v___y_573_;
v___y_558_ = v___x_596_;
goto v___jp_550_;
}
}
else
{
lean_object* v___x_597_; 
v___x_597_ = l_Lake_LogLevel_ansiColor(v___y_572_);
v___y_551_ = v___y_566_;
v___y_552_ = v___y_568_;
v___y_553_ = v___y_570_;
v___y_554_ = v___y_569_;
v___y_555_ = v___y_571_;
v___y_556_ = v___x_594_;
v___y_557_ = v___y_573_;
v___y_558_ = v___x_597_;
goto v___jp_550_;
}
}
}
v___jp_598_:
{
lean_object* v___x_610_; 
v___x_610_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___y_564_ = v___y_600_;
v___y_565_ = v___y_599_;
v___y_566_ = v___y_602_;
v___y_567_ = v___y_601_;
v___y_568_ = v___y_603_;
v___y_569_ = v___y_605_;
v___y_570_ = v___y_604_;
v___y_571_ = v___y_606_;
v___y_572_ = v___y_607_;
v___y_573_ = v___y_608_;
v___y_574_ = v___y_609_;
v___y_575_ = v___x_610_;
goto v___jp_563_;
}
v___jp_611_:
{
if (v_showTime_471_ == 0)
{
lean_dec(v___y_616_);
v___y_599_ = v___y_612_;
v___y_600_ = v___y_613_;
v___y_601_ = v___y_614_;
v___y_602_ = v___y_615_;
v___y_603_ = v___y_617_;
v___y_604_ = v___y_618_;
v___y_605_ = v___y_619_;
v___y_606_ = v___y_620_;
v___y_607_ = v___y_621_;
v___y_608_ = v___y_622_;
v___y_609_ = v___y_623_;
goto v___jp_598_;
}
else
{
lean_object* v___x_624_; uint8_t v___x_625_; 
v___x_624_ = lean_unsigned_to_nat(0u);
v___x_625_ = lean_nat_dec_lt(v___x_624_, v___y_616_);
if (v___x_625_ == 0)
{
lean_dec(v___y_616_);
v___y_599_ = v___y_612_;
v___y_600_ = v___y_613_;
v___y_601_ = v___y_614_;
v___y_602_ = v___y_615_;
v___y_603_ = v___y_617_;
v___y_604_ = v___y_618_;
v___y_605_ = v___y_619_;
v___y_606_ = v___y_620_;
v___y_607_ = v___y_621_;
v___y_608_ = v___y_622_;
v___y_609_ = v___y_623_;
goto v___jp_598_;
}
else
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_626_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__5));
v___x_627_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob_formatTime(v___y_616_);
v___x_628_ = lean_string_append(v___x_626_, v___x_627_);
lean_dec_ref(v___x_627_);
v___x_629_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__6));
v___x_630_ = lean_string_append(v___x_628_, v___x_629_);
v___y_564_ = v___y_613_;
v___y_565_ = v___y_612_;
v___y_566_ = v___y_615_;
v___y_567_ = v___y_614_;
v___y_568_ = v___y_617_;
v___y_569_ = v___y_619_;
v___y_570_ = v___y_618_;
v___y_571_ = v___y_620_;
v___y_572_ = v___y_621_;
v___y_573_ = v___y_622_;
v___y_574_ = v___y_623_;
v___y_575_ = v___x_630_;
goto v___jp_563_;
}
}
}
v___jp_631_:
{
if (v_optional_562_ == 0)
{
lean_object* v___x_643_; 
v___x_643_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___y_612_ = v___y_642_;
v___y_613_ = v___y_632_;
v___y_614_ = v___y_634_;
v___y_615_ = v___y_633_;
v___y_616_ = v___y_636_;
v___y_617_ = v___y_635_;
v___y_618_ = v___y_638_;
v___y_619_ = v___y_637_;
v___y_620_ = v___y_639_;
v___y_621_ = v___y_640_;
v___y_622_ = v___y_641_;
v___y_623_ = v___x_643_;
goto v___jp_611_;
}
else
{
lean_object* v___x_644_; 
v___x_644_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__7));
v___y_612_ = v___y_642_;
v___y_613_ = v___y_632_;
v___y_614_ = v___y_634_;
v___y_615_ = v___y_633_;
v___y_616_ = v___y_636_;
v___y_617_ = v___y_635_;
v___y_618_ = v___y_638_;
v___y_619_ = v___y_637_;
v___y_620_ = v___y_639_;
v___y_621_ = v___y_640_;
v___y_622_ = v___y_641_;
v___y_623_ = v___x_644_;
goto v___jp_611_;
}
}
v___jp_645_:
{
if (v___y_650_ == 0)
{
if (v___y_646_ == 0)
{
uint32_t v___x_656_; 
v___x_656_ = 10004;
v___y_632_ = v___y_646_;
v___y_633_ = v___y_647_;
v___y_634_ = v___y_655_;
v___y_635_ = v___y_649_;
v___y_636_ = v___y_648_;
v___y_637_ = v___y_651_;
v___y_638_ = v___y_650_;
v___y_639_ = v___y_652_;
v___y_640_ = v___y_653_;
v___y_641_ = v___y_654_;
v___y_642_ = v___x_656_;
goto v___jp_631_;
}
else
{
uint32_t v___x_657_; 
v___x_657_ = 8856;
v___y_632_ = v___y_646_;
v___y_633_ = v___y_647_;
v___y_634_ = v___y_655_;
v___y_635_ = v___y_649_;
v___y_636_ = v___y_648_;
v___y_637_ = v___y_651_;
v___y_638_ = v___y_650_;
v___y_639_ = v___y_652_;
v___y_640_ = v___y_653_;
v___y_641_ = v___y_654_;
v___y_642_ = v___x_657_;
goto v___jp_631_;
}
}
else
{
uint32_t v___x_658_; 
v___x_658_ = l_Lake_LogLevel_icon(v___y_653_);
v___y_632_ = v___y_646_;
v___y_633_ = v___y_647_;
v___y_634_ = v___y_655_;
v___y_635_ = v___y_649_;
v___y_636_ = v___y_648_;
v___y_637_ = v___y_651_;
v___y_638_ = v___y_650_;
v___y_639_ = v___y_652_;
v___y_640_ = v___y_653_;
v___y_641_ = v___y_654_;
v___y_642_ = v___x_658_;
goto v___jp_631_;
}
}
v___jp_659_:
{
lean_object* v___x_669_; 
v___x_669_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__8));
v___y_646_ = v___y_660_;
v___y_647_ = v___y_661_;
v___y_648_ = v___y_662_;
v___y_649_ = v___y_668_;
v___y_650_ = v___y_663_;
v___y_651_ = v___y_664_;
v___y_652_ = v___y_665_;
v___y_653_ = v___y_666_;
v___y_654_ = v___y_667_;
v___y_655_ = v___x_669_;
goto v___jp_645_;
}
v___jp_670_:
{
lean_object* v___x_681_; 
v___x_681_ = l_Lake_JobAction_verb(v___y_673_, v___y_671_);
v___y_646_ = v___y_672_;
v___y_647_ = v___y_673_;
v___y_648_ = v___y_674_;
v___y_649_ = v___y_680_;
v___y_650_ = v___y_675_;
v___y_651_ = v___y_676_;
v___y_652_ = v___y_677_;
v___y_653_ = v___y_678_;
v___y_654_ = v___y_679_;
v___y_655_ = v___x_681_;
goto v___jp_645_;
}
v___jp_682_:
{
if (v___y_688_ == 0)
{
if (v___y_684_ == 0)
{
if (v_showProgress_470_ == 0)
{
lean_dec_ref(v___y_689_);
lean_dec(v___y_686_);
lean_dec_ref(v_caption_561_);
lean_dec(v_totalJobs_458_);
lean_dec(v_jobNo_457_);
v___y_442_ = v___y_691_;
goto v___jp_441_;
}
else
{
if (v_useAnsi_469_ == 0)
{
uint8_t v___x_692_; 
v___x_692_ = l_Lake_instOrdJobAction_ord(v_minAction_467_, v___y_683_);
if (v___x_692_ == 2)
{
lean_dec_ref(v___y_689_);
lean_dec(v___y_686_);
lean_dec_ref(v_caption_561_);
lean_dec(v_totalJobs_458_);
lean_dec(v_jobNo_457_);
v___y_442_ = v___y_691_;
goto v___jp_441_;
}
else
{
v___y_671_ = v___y_683_;
v___y_672_ = v___y_684_;
v___y_673_ = v___y_685_;
v___y_674_ = v___y_686_;
v___y_675_ = v___y_688_;
v___y_676_ = v___y_687_;
v___y_677_ = v___y_689_;
v___y_678_ = v___y_690_;
v___y_679_ = v___y_691_;
v___y_680_ = v_showProgress_470_;
goto v___jp_670_;
}
}
else
{
lean_dec_ref(v___y_689_);
lean_dec(v___y_686_);
lean_dec_ref(v_caption_561_);
lean_dec(v_totalJobs_458_);
lean_dec(v_jobNo_457_);
v___y_442_ = v___y_691_;
goto v___jp_441_;
}
}
}
else
{
v___y_660_ = v___y_684_;
v___y_661_ = v___y_685_;
v___y_662_ = v___y_686_;
v___y_663_ = v___y_688_;
v___y_664_ = v___y_687_;
v___y_665_ = v___y_689_;
v___y_666_ = v___y_690_;
v___y_667_ = v___y_691_;
v___y_668_ = v___y_684_;
goto v___jp_659_;
}
}
else
{
if (v___y_684_ == 0)
{
v___y_671_ = v___y_683_;
v___y_672_ = v___y_684_;
v___y_673_ = v___y_685_;
v___y_674_ = v___y_686_;
v___y_675_ = v___y_688_;
v___y_676_ = v___y_687_;
v___y_677_ = v___y_689_;
v___y_678_ = v___y_690_;
v___y_679_ = v___y_691_;
v___y_680_ = v___y_688_;
goto v___jp_670_;
}
else
{
v___y_660_ = v___y_684_;
v___y_661_ = v___y_685_;
v___y_662_ = v___y_686_;
v___y_663_ = v___y_688_;
v___y_664_ = v___y_687_;
v___y_665_ = v___y_689_;
v___y_666_ = v___y_690_;
v___y_667_ = v___y_691_;
v___y_668_ = v___y_688_;
goto v___jp_659_;
}
}
}
v___jp_693_:
{
if (v_optional_562_ == 0)
{
v___y_683_ = v___y_694_;
v___y_684_ = v___y_695_;
v___y_685_ = v___y_696_;
v___y_686_ = v___y_697_;
v___y_687_ = v___y_698_;
v___y_688_ = v___y_702_;
v___y_689_ = v___y_699_;
v___y_690_ = v___y_700_;
v___y_691_ = v___y_701_;
goto v___jp_682_;
}
else
{
if (v_showOptional_468_ == 0)
{
lean_dec_ref(v___y_699_);
lean_dec(v___y_697_);
lean_dec_ref(v_caption_561_);
lean_dec(v_totalJobs_458_);
lean_dec(v_jobNo_457_);
v___y_442_ = v___y_701_;
goto v___jp_441_;
}
else
{
v___y_683_ = v___y_694_;
v___y_684_ = v___y_695_;
v___y_685_ = v___y_696_;
v___y_686_ = v___y_697_;
v___y_687_ = v___y_698_;
v___y_688_ = v___y_702_;
v___y_689_ = v___y_699_;
v___y_690_ = v___y_700_;
v___y_691_ = v___y_701_;
goto v___jp_682_;
}
}
}
v___jp_703_:
{
if (v___y_706_ == 0)
{
if (v___y_710_ == 0)
{
v___y_694_ = v___y_704_;
v___y_695_ = v___y_705_;
v___y_696_ = v___y_706_;
v___y_697_ = v___y_707_;
v___y_698_ = v___y_711_;
v___y_699_ = v___y_708_;
v___y_700_ = v___y_709_;
v___y_701_ = v___y_712_;
v___y_702_ = v___y_710_;
goto v___jp_693_;
}
else
{
uint8_t v___x_713_; 
v___x_713_ = l_Lake_instOrdLogLevel_ord(v_outLv_465_, v___y_709_);
if (v___x_713_ == 2)
{
v___y_694_ = v___y_704_;
v___y_695_ = v___y_705_;
v___y_696_ = v___y_706_;
v___y_697_ = v___y_707_;
v___y_698_ = v___y_711_;
v___y_699_ = v___y_708_;
v___y_700_ = v___y_709_;
v___y_701_ = v___y_712_;
v___y_702_ = v___y_706_;
goto v___jp_693_;
}
else
{
v___y_694_ = v___y_704_;
v___y_695_ = v___y_705_;
v___y_696_ = v___y_706_;
v___y_697_ = v___y_707_;
v___y_698_ = v___y_711_;
v___y_699_ = v___y_708_;
v___y_700_ = v___y_709_;
v___y_701_ = v___y_712_;
v___y_702_ = v___y_710_;
goto v___jp_693_;
}
}
}
else
{
if (v_optional_562_ == 0)
{
lean_object* v_jobNo_714_; lean_object* v_totalJobs_715_; uint8_t v_wantsRebuild_716_; lean_object* v_failures_717_; lean_object* v_resetCtrl_718_; lean_object* v_lastUpdate_719_; lean_object* v_spinnerIdx_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_728_; 
v_jobNo_714_ = lean_ctor_get(v___y_712_, 0);
v_totalJobs_715_ = lean_ctor_get(v___y_712_, 1);
v_wantsRebuild_716_ = lean_ctor_get_uint8(v___y_712_, sizeof(void*)*6);
v_failures_717_ = lean_ctor_get(v___y_712_, 2);
v_resetCtrl_718_ = lean_ctor_get(v___y_712_, 3);
v_lastUpdate_719_ = lean_ctor_get(v___y_712_, 4);
v_spinnerIdx_720_ = lean_ctor_get(v___y_712_, 5);
v_isSharedCheck_728_ = !lean_is_exclusive(v___y_712_);
if (v_isSharedCheck_728_ == 0)
{
v___x_722_ = v___y_712_;
v_isShared_723_ = v_isSharedCheck_728_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_spinnerIdx_720_);
lean_inc(v_lastUpdate_719_);
lean_inc(v_resetCtrl_718_);
lean_inc(v_failures_717_);
lean_inc(v_totalJobs_715_);
lean_inc(v_jobNo_714_);
lean_dec(v___y_712_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_728_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_724_; lean_object* v___x_726_; 
lean_inc_ref(v_caption_561_);
v___x_724_ = lean_array_push(v_failures_717_, v_caption_561_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 2, v___x_724_);
v___x_726_ = v___x_722_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_jobNo_714_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_totalJobs_715_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v___x_724_);
lean_ctor_set(v_reuseFailAlloc_727_, 3, v_resetCtrl_718_);
lean_ctor_set(v_reuseFailAlloc_727_, 4, v_lastUpdate_719_);
lean_ctor_set(v_reuseFailAlloc_727_, 5, v_spinnerIdx_720_);
lean_ctor_set_uint8(v_reuseFailAlloc_727_, sizeof(void*)*6, v_wantsRebuild_716_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
v___y_694_ = v___y_704_;
v___y_695_ = v___y_705_;
v___y_696_ = v___y_706_;
v___y_697_ = v___y_707_;
v___y_698_ = v___y_711_;
v___y_699_ = v___y_708_;
v___y_700_ = v___y_709_;
v___y_701_ = v___x_726_;
v___y_702_ = v___y_706_;
goto v___jp_693_;
}
}
}
else
{
v___y_694_ = v___y_704_;
v___y_695_ = v___y_705_;
v___y_696_ = v___y_706_;
v___y_697_ = v___y_707_;
v___y_698_ = v___y_711_;
v___y_699_ = v___y_708_;
v___y_700_ = v___y_709_;
v___y_701_ = v___y_712_;
v___y_702_ = v___y_706_;
goto v___jp_693_;
}
}
}
v___jp_729_:
{
if (v___y_734_ == 0)
{
v___y_704_ = v___y_730_;
v___y_705_ = v___y_737_;
v___y_706_ = v___y_731_;
v___y_707_ = v___y_732_;
v___y_708_ = v___y_733_;
v___y_709_ = v___y_735_;
v___y_710_ = v___y_736_;
v___y_711_ = v_a_438_;
v___y_712_ = v_a_439_;
goto v___jp_703_;
}
else
{
if (v_wantsRebuild_459_ == 0)
{
lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
lean_inc(v_spinnerIdx_463_);
lean_inc(v_lastUpdate_462_);
lean_inc_ref(v_resetCtrl_461_);
lean_inc_ref(v_failures_460_);
v_isSharedCheck_744_ = !lean_is_exclusive(v_a_439_);
if (v_isSharedCheck_744_ == 0)
{
lean_object* v_unused_745_; lean_object* v_unused_746_; lean_object* v_unused_747_; lean_object* v_unused_748_; lean_object* v_unused_749_; lean_object* v_unused_750_; 
v_unused_745_ = lean_ctor_get(v_a_439_, 5);
lean_dec(v_unused_745_);
v_unused_746_ = lean_ctor_get(v_a_439_, 4);
lean_dec(v_unused_746_);
v_unused_747_ = lean_ctor_get(v_a_439_, 3);
lean_dec(v_unused_747_);
v_unused_748_ = lean_ctor_get(v_a_439_, 2);
lean_dec(v_unused_748_);
v_unused_749_ = lean_ctor_get(v_a_439_, 1);
lean_dec(v_unused_749_);
v_unused_750_ = lean_ctor_get(v_a_439_, 0);
lean_dec(v_unused_750_);
v___x_739_ = v_a_439_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_dec(v_a_439_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
lean_inc(v_totalJobs_458_);
lean_inc(v_jobNo_457_);
if (v_isShared_740_ == 0)
{
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_jobNo_457_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v_totalJobs_458_);
lean_ctor_set(v_reuseFailAlloc_743_, 2, v_failures_460_);
lean_ctor_set(v_reuseFailAlloc_743_, 3, v_resetCtrl_461_);
lean_ctor_set(v_reuseFailAlloc_743_, 4, v_lastUpdate_462_);
lean_ctor_set(v_reuseFailAlloc_743_, 5, v_spinnerIdx_463_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
lean_ctor_set_uint8(v___x_742_, sizeof(void*)*6, v___y_734_);
v___y_704_ = v___y_730_;
v___y_705_ = v___y_737_;
v___y_706_ = v___y_731_;
v___y_707_ = v___y_732_;
v___y_708_ = v___y_733_;
v___y_709_ = v___y_735_;
v___y_710_ = v___y_736_;
v___y_711_ = v_a_438_;
v___y_712_ = v___x_742_;
goto v___jp_703_;
}
}
}
else
{
v___y_704_ = v___y_730_;
v___y_705_ = v___y_737_;
v___y_706_ = v___y_731_;
v___y_707_ = v___y_732_;
v___y_708_ = v___y_733_;
v___y_709_ = v___y_735_;
v___y_710_ = v___y_736_;
v___y_711_ = v_a_438_;
v___y_712_ = v_a_439_;
goto v___jp_703_;
}
}
}
v___jp_751_:
{
uint8_t v___x_760_; 
v___x_760_ = lean_strict_and(v___y_758_, v___y_759_);
if (v___y_757_ == 0)
{
v___y_730_ = v___y_752_;
v___y_731_ = v___x_760_;
v___y_732_ = v___y_753_;
v___y_733_ = v___y_754_;
v___y_734_ = v___y_756_;
v___y_735_ = v___y_755_;
v___y_736_ = v___y_758_;
v___y_737_ = v___y_757_;
goto v___jp_729_;
}
else
{
if (v___x_760_ == 0)
{
v___y_730_ = v___y_752_;
v___y_731_ = v___x_760_;
v___y_732_ = v___y_753_;
v___y_733_ = v___y_754_;
v___y_734_ = v___y_756_;
v___y_735_ = v___y_755_;
v___y_736_ = v___y_758_;
v___y_737_ = v___y_757_;
goto v___jp_729_;
}
else
{
uint8_t v___x_761_; 
v___x_761_ = 0;
v___y_730_ = v___y_752_;
v___y_731_ = v___x_760_;
v___y_732_ = v___y_753_;
v___y_733_ = v___y_754_;
v___y_734_ = v___y_756_;
v___y_735_ = v___y_755_;
v___y_736_ = v___y_758_;
v___y_737_ = v___x_761_;
goto v___jp_729_;
}
}
}
v___jp_762_:
{
uint8_t v___x_770_; 
v___x_770_ = l_Lake_instOrdLogLevel_ord(v_failLv_466_, v___y_767_);
if (v___x_770_ == 2)
{
uint8_t v___x_771_; 
v___x_771_ = 0;
v___y_752_ = v___y_763_;
v___y_753_ = v___y_764_;
v___y_754_ = v___y_765_;
v___y_755_ = v___y_767_;
v___y_756_ = v___y_766_;
v___y_757_ = v___y_768_;
v___y_758_ = v___y_769_;
v___y_759_ = v___x_771_;
goto v___jp_751_;
}
else
{
uint8_t v___x_772_; 
v___x_772_ = 1;
v___y_752_ = v___y_763_;
v___y_753_ = v___y_764_;
v___y_754_ = v___y_765_;
v___y_755_ = v___y_767_;
v___y_756_ = v___y_766_;
v___y_757_ = v___y_768_;
v___y_758_ = v___y_769_;
v___y_759_ = v___x_772_;
goto v___jp_751_;
}
}
v___jp_773_:
{
lean_object* v_log_775_; uint8_t v_action_776_; uint8_t v_wantsRebuild_777_; uint8_t v_canceled_778_; lean_object* v_buildTime_779_; uint8_t v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; uint8_t v___x_783_; 
v_log_775_ = lean_ctor_get(v___y_774_, 0);
lean_inc_ref(v_log_775_);
v_action_776_ = lean_ctor_get_uint8(v___y_774_, sizeof(void*)*3);
v_wantsRebuild_777_ = lean_ctor_get_uint8(v___y_774_, sizeof(void*)*3 + 1);
v_canceled_778_ = lean_ctor_get_uint8(v___y_774_, sizeof(void*)*3 + 2);
v_buildTime_779_ = lean_ctor_get(v___y_774_, 2);
lean_inc(v_buildTime_779_);
lean_dec_ref(v___y_774_);
v___x_780_ = l_Lake_Log_maxLv(v_log_775_);
v___x_781_ = lean_array_get_size(v_log_775_);
v___x_782_ = lean_unsigned_to_nat(0u);
v___x_783_ = lean_nat_dec_eq(v___x_781_, v___x_782_);
if (v___x_783_ == 0)
{
uint8_t v___x_784_; 
v___x_784_ = 1;
v___y_763_ = v_action_776_;
v___y_764_ = v_buildTime_779_;
v___y_765_ = v_log_775_;
v___y_766_ = v_wantsRebuild_777_;
v___y_767_ = v___x_780_;
v___y_768_ = v_canceled_778_;
v___y_769_ = v___x_784_;
goto v___jp_762_;
}
else
{
uint8_t v___x_785_; 
v___x_785_ = 0;
v___y_763_ = v_action_776_;
v___y_764_ = v_buildTime_779_;
v___y_765_ = v_log_775_;
v___y_766_ = v_wantsRebuild_777_;
v___y_767_ = v___x_780_;
v___y_768_ = v_canceled_778_;
v___y_769_ = v___x_785_;
goto v___jp_762_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___boxed(lean_object* v_job_788_, lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(v_job_788_, v_a_789_, v_a_790_);
lean_dec_ref(v_a_789_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0(lean_object* v_out_793_, uint8_t v___y_794_, uint8_t v_useAnsi_795_, lean_object* v_as_796_, size_t v_i_797_, size_t v_stop_798_, lean_object* v_b_799_, lean_object* v___y_800_, lean_object* v___y_801_){
_start:
{
lean_object* v___x_803_; 
v___x_803_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___redArg(v_out_793_, v___y_794_, v_useAnsi_795_, v_as_796_, v_i_797_, v_stop_798_, v_b_799_, v___y_801_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0___boxed(lean_object* v_out_804_, lean_object* v___y_805_, lean_object* v_useAnsi_806_, lean_object* v_as_807_, lean_object* v_i_808_, lean_object* v_stop_809_, lean_object* v_b_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
uint8_t v___y_14625__boxed_814_; uint8_t v_useAnsi_14626__boxed_815_; size_t v_i_boxed_816_; size_t v_stop_boxed_817_; lean_object* v_res_818_; 
v___y_14625__boxed_814_ = lean_unbox(v___y_805_);
v_useAnsi_14626__boxed_815_ = lean_unbox(v_useAnsi_806_);
v_i_boxed_816_ = lean_unbox_usize(v_i_808_);
lean_dec(v_i_808_);
v_stop_boxed_817_ = lean_unbox_usize(v_stop_809_);
lean_dec(v_stop_809_);
v_res_818_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_reportJob_spec__0(v_out_804_, v___y_14625__boxed_814_, v_useAnsi_14626__boxed_815_, v_as_807_, v_i_boxed_816_, v_stop_boxed_817_, v_b_810_, v___y_811_, v___y_812_);
lean_dec_ref(v___y_811_);
lean_dec_ref(v_as_807_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_jobs_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v_jobNo_828_; lean_object* v_totalJobs_829_; uint8_t v_wantsRebuild_830_; lean_object* v_failures_831_; lean_object* v_resetCtrl_832_; lean_object* v_lastUpdate_833_; lean_object* v_spinnerIdx_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_844_; 
v_jobs_824_ = lean_ctor_get(v_a_821_, 0);
v___x_825_ = lean_st_ref_take(v_jobs_824_);
v___x_826_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_827_ = lean_st_ref_put(v_jobs_824_, v___x_826_);
v_jobNo_828_ = lean_ctor_get(v_a_822_, 0);
v_totalJobs_829_ = lean_ctor_get(v_a_822_, 1);
v_wantsRebuild_830_ = lean_ctor_get_uint8(v_a_822_, sizeof(void*)*6);
v_failures_831_ = lean_ctor_get(v_a_822_, 2);
v_resetCtrl_832_ = lean_ctor_get(v_a_822_, 3);
v_lastUpdate_833_ = lean_ctor_get(v_a_822_, 4);
v_spinnerIdx_834_ = lean_ctor_get(v_a_822_, 5);
v_isSharedCheck_844_ = !lean_is_exclusive(v_a_822_);
if (v_isSharedCheck_844_ == 0)
{
v___x_836_ = v_a_822_;
v_isShared_837_ = v_isSharedCheck_844_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_spinnerIdx_834_);
lean_inc(v_lastUpdate_833_);
lean_inc(v_resetCtrl_832_);
lean_inc(v_failures_831_);
lean_inc(v_totalJobs_829_);
lean_inc(v_jobNo_828_);
lean_dec(v_a_822_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_844_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_838_ = lean_array_get_size(v___x_825_);
v___x_839_ = lean_nat_add(v_totalJobs_829_, v___x_838_);
lean_dec(v_totalJobs_829_);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 1, v___x_839_);
v___x_841_ = v___x_836_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_jobNo_828_);
lean_ctor_set(v_reuseFailAlloc_843_, 1, v___x_839_);
lean_ctor_set(v_reuseFailAlloc_843_, 2, v_failures_831_);
lean_ctor_set(v_reuseFailAlloc_843_, 3, v_resetCtrl_832_);
lean_ctor_set(v_reuseFailAlloc_843_, 4, v_lastUpdate_833_);
lean_ctor_set(v_reuseFailAlloc_843_, 5, v_spinnerIdx_834_);
lean_ctor_set_uint8(v_reuseFailAlloc_843_, sizeof(void*)*6, v_wantsRebuild_830_);
v___x_841_ = v_reuseFailAlloc_843_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
lean_object* v___x_842_; 
v___x_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_825_);
lean_ctor_set(v___x_842_, 1, v___x_841_);
return v___x_842_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___boxed(lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v_a_845_, v_a_846_);
lean_dec_ref(v_a_845_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(lean_object* v_as_849_, size_t v_i_850_, size_t v_stop_851_, lean_object* v_b_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_fst_857_; lean_object* v_snd_858_; uint8_t v___x_862_; 
v___x_862_ = lean_usize_dec_eq(v_i_850_, v_stop_851_);
if (v___x_862_ == 0)
{
lean_object* v_fst_863_; lean_object* v_snd_864_; lean_object* v___x_865_; lean_object* v_task_866_; uint8_t v___x_867_; 
v_fst_863_ = lean_ctor_get(v_b_852_, 0);
v_snd_864_ = lean_ctor_get(v_b_852_, 1);
v___x_865_ = lean_array_uget_borrowed(v_as_849_, v_i_850_);
v_task_866_ = lean_ctor_get(v___x_865_, 0);
v___x_867_ = lean_io_get_task_state(v_task_866_);
switch(v___x_867_)
{
case 0:
{
lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_875_; 
lean_inc(v_snd_864_);
lean_inc(v_fst_863_);
v_isSharedCheck_875_ = !lean_is_exclusive(v_b_852_);
if (v_isSharedCheck_875_ == 0)
{
lean_object* v_unused_876_; lean_object* v_unused_877_; 
v_unused_876_ = lean_ctor_get(v_b_852_, 1);
lean_dec(v_unused_876_);
v_unused_877_ = lean_ctor_get(v_b_852_, 0);
lean_dec(v_unused_877_);
v___x_869_ = v_b_852_;
v_isShared_870_ = v_isSharedCheck_875_;
goto v_resetjp_868_;
}
else
{
lean_dec(v_b_852_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_875_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_871_; lean_object* v___x_873_; 
lean_inc(v___x_865_);
v___x_871_ = lean_array_push(v_snd_864_, v___x_865_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 1, v___x_871_);
v___x_873_ = v___x_869_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_fst_863_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v___x_871_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
v_fst_857_ = v___x_873_;
v_snd_858_ = v___y_854_;
goto v___jp_856_;
}
}
}
case 1:
{
lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_886_; 
lean_inc(v_snd_864_);
lean_inc(v_fst_863_);
v_isSharedCheck_886_ = !lean_is_exclusive(v_b_852_);
if (v_isSharedCheck_886_ == 0)
{
lean_object* v_unused_887_; lean_object* v_unused_888_; 
v_unused_887_ = lean_ctor_get(v_b_852_, 1);
lean_dec(v_unused_887_);
v_unused_888_ = lean_ctor_get(v_b_852_, 0);
lean_dec(v_unused_888_);
v___x_879_ = v_b_852_;
v_isShared_880_ = v_isSharedCheck_886_;
goto v_resetjp_878_;
}
else
{
lean_dec(v_b_852_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_886_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_884_; 
lean_inc_n(v___x_865_, 2);
v___x_881_ = lean_array_push(v_fst_863_, v___x_865_);
v___x_882_ = lean_array_push(v_snd_864_, v___x_865_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 1, v___x_882_);
lean_ctor_set(v___x_879_, 0, v___x_881_);
v___x_884_ = v___x_879_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_881_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v___x_882_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
v_fst_857_ = v___x_884_;
v_snd_858_ = v___y_854_;
goto v___jp_856_;
}
}
}
default: 
{
lean_object* v___x_889_; lean_object* v_snd_890_; lean_object* v_jobNo_891_; lean_object* v_totalJobs_892_; uint8_t v_wantsRebuild_893_; lean_object* v_failures_894_; lean_object* v_resetCtrl_895_; lean_object* v_lastUpdate_896_; lean_object* v_spinnerIdx_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_906_; 
lean_inc(v___x_865_);
v___x_889_ = l___private_Lake_Build_Run_0__Lake_Monitor_reportJob(v___x_865_, v___y_853_, v___y_854_);
v_snd_890_ = lean_ctor_get(v___x_889_, 1);
lean_inc(v_snd_890_);
lean_dec_ref(v___x_889_);
v_jobNo_891_ = lean_ctor_get(v_snd_890_, 0);
v_totalJobs_892_ = lean_ctor_get(v_snd_890_, 1);
v_wantsRebuild_893_ = lean_ctor_get_uint8(v_snd_890_, sizeof(void*)*6);
v_failures_894_ = lean_ctor_get(v_snd_890_, 2);
v_resetCtrl_895_ = lean_ctor_get(v_snd_890_, 3);
v_lastUpdate_896_ = lean_ctor_get(v_snd_890_, 4);
v_spinnerIdx_897_ = lean_ctor_get(v_snd_890_, 5);
v_isSharedCheck_906_ = !lean_is_exclusive(v_snd_890_);
if (v_isSharedCheck_906_ == 0)
{
v___x_899_ = v_snd_890_;
v_isShared_900_ = v_isSharedCheck_906_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_spinnerIdx_897_);
lean_inc(v_lastUpdate_896_);
lean_inc(v_resetCtrl_895_);
lean_inc(v_failures_894_);
lean_inc(v_totalJobs_892_);
lean_inc(v_jobNo_891_);
lean_dec(v_snd_890_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_906_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_904_; 
v___x_901_ = lean_unsigned_to_nat(1u);
v___x_902_ = lean_nat_add(v_jobNo_891_, v___x_901_);
lean_dec(v_jobNo_891_);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 0, v___x_902_);
v___x_904_ = v___x_899_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_totalJobs_892_);
lean_ctor_set(v_reuseFailAlloc_905_, 2, v_failures_894_);
lean_ctor_set(v_reuseFailAlloc_905_, 3, v_resetCtrl_895_);
lean_ctor_set(v_reuseFailAlloc_905_, 4, v_lastUpdate_896_);
lean_ctor_set(v_reuseFailAlloc_905_, 5, v_spinnerIdx_897_);
lean_ctor_set_uint8(v_reuseFailAlloc_905_, sizeof(void*)*6, v_wantsRebuild_893_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
v_fst_857_ = v_b_852_;
v_snd_858_ = v___x_904_;
goto v___jp_856_;
}
}
}
}
}
else
{
lean_object* v___x_907_; 
v___x_907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_907_, 0, v_b_852_);
lean_ctor_set(v___x_907_, 1, v___y_854_);
return v___x_907_;
}
v___jp_856_:
{
size_t v___x_859_; size_t v___x_860_; 
v___x_859_ = ((size_t)1ULL);
v___x_860_ = lean_usize_add(v_i_850_, v___x_859_);
v_i_850_ = v___x_860_;
v_b_852_ = v_fst_857_;
v___y_854_ = v_snd_858_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0___boxed(lean_object* v_as_908_, lean_object* v_i_909_, lean_object* v_stop_910_, lean_object* v_b_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
size_t v_i_boxed_915_; size_t v_stop_boxed_916_; lean_object* v_res_917_; 
v_i_boxed_915_ = lean_unbox_usize(v_i_909_);
lean_dec(v_i_909_);
v_stop_boxed_916_ = lean_unbox_usize(v_stop_910_);
lean_dec(v_stop_910_);
v_res_917_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_as_908_, v_i_boxed_915_, v_stop_boxed_916_, v_b_911_, v___y_912_, v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec_ref(v_as_908_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(lean_object* v_new_920_, lean_object* v_unfinished_921_, lean_object* v_a_922_, lean_object* v_a_923_){
_start:
{
lean_object* v___x_925_; lean_object* v___y_927_; lean_object* v_fst_928_; lean_object* v_snd_929_; lean_object* v___x_935_; lean_object* v___x_936_; uint8_t v___x_937_; 
v___x_925_ = lean_unsigned_to_nat(0u);
v___x_935_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___closed__0));
v___x_936_ = lean_array_get_size(v_unfinished_921_);
v___x_937_ = lean_nat_dec_lt(v___x_925_, v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; 
lean_inc_ref(v_a_923_);
v___x_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_935_);
lean_ctor_set(v___x_938_, 1, v_a_923_);
v___y_927_ = v___x_938_;
v_fst_928_ = v___x_935_;
v_snd_929_ = v_a_923_;
goto v___jp_926_;
}
else
{
size_t v___x_939_; size_t v___x_940_; lean_object* v___x_941_; lean_object* v_fst_942_; lean_object* v_snd_943_; 
v___x_939_ = ((size_t)0ULL);
v___x_940_ = lean_usize_of_nat(v___x_936_);
v___x_941_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_unfinished_921_, v___x_939_, v___x_940_, v___x_935_, v_a_922_, v_a_923_);
v_fst_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_fst_942_);
v_snd_943_ = lean_ctor_get(v___x_941_, 1);
lean_inc(v_snd_943_);
v___y_927_ = v___x_941_;
v_fst_928_ = v_fst_942_;
v_snd_929_ = v_snd_943_;
goto v___jp_926_;
}
v___jp_926_:
{
lean_object* v___x_930_; uint8_t v___x_931_; 
v___x_930_ = lean_array_get_size(v_new_920_);
v___x_931_ = lean_nat_dec_lt(v___x_925_, v___x_930_);
if (v___x_931_ == 0)
{
lean_dec_ref(v_snd_929_);
lean_dec_ref(v_fst_928_);
return v___y_927_;
}
else
{
size_t v___x_932_; size_t v___x_933_; lean_object* v___x_934_; 
lean_dec_ref(v___y_927_);
v___x_932_ = ((size_t)0ULL);
v___x_933_ = lean_usize_of_nat(v___x_930_);
v___x_934_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_Monitor_scanJobs_spec__0(v_new_920_, v___x_932_, v___x_933_, v_fst_928_, v_a_922_, v_snd_929_);
return v___x_934_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs___boxed(lean_object* v_new_944_, lean_object* v_unfinished_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(v_new_944_, v_unfinished_945_, v_a_946_, v_a_947_);
lean_dec_ref(v_a_946_);
lean_dec_ref(v_unfinished_945_);
lean_dec_ref(v_new_944_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep(lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
lean_object* v___y_954_; lean_object* v___x_972_; lean_object* v_lastUpdate_973_; lean_object* v_updateFrequency_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; uint8_t v___x_978_; 
v___x_972_ = lean_io_mono_ms_now();
v_lastUpdate_973_ = lean_ctor_get(v_a_951_, 4);
v_updateFrequency_974_ = lean_ctor_get(v_a_950_, 2);
v___x_975_ = lean_nat_sub(v___x_972_, v_lastUpdate_973_);
lean_dec(v___x_972_);
v___x_976_ = lean_nat_sub(v_updateFrequency_974_, v___x_975_);
lean_dec(v___x_975_);
v___x_977_ = lean_unsigned_to_nat(0u);
v___x_978_ = lean_nat_dec_lt(v___x_977_, v___x_976_);
if (v___x_978_ == 0)
{
lean_dec(v___x_976_);
v___y_954_ = v_a_951_;
goto v___jp_953_;
}
else
{
uint32_t v___x_979_; lean_object* v___x_980_; 
v___x_979_ = lean_uint32_of_nat(v___x_976_);
lean_dec(v___x_976_);
v___x_980_ = l_IO_sleep(v___x_979_);
v___y_954_ = v_a_951_;
goto v___jp_953_;
}
v___jp_953_:
{
lean_object* v___x_955_; lean_object* v_jobNo_956_; lean_object* v_totalJobs_957_; uint8_t v_wantsRebuild_958_; lean_object* v_failures_959_; lean_object* v_resetCtrl_960_; lean_object* v_spinnerIdx_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_970_; 
v___x_955_ = lean_io_mono_ms_now();
v_jobNo_956_ = lean_ctor_get(v___y_954_, 0);
v_totalJobs_957_ = lean_ctor_get(v___y_954_, 1);
v_wantsRebuild_958_ = lean_ctor_get_uint8(v___y_954_, sizeof(void*)*6);
v_failures_959_ = lean_ctor_get(v___y_954_, 2);
v_resetCtrl_960_ = lean_ctor_get(v___y_954_, 3);
v_spinnerIdx_961_ = lean_ctor_get(v___y_954_, 5);
v_isSharedCheck_970_ = !lean_is_exclusive(v___y_954_);
if (v_isSharedCheck_970_ == 0)
{
lean_object* v_unused_971_; 
v_unused_971_ = lean_ctor_get(v___y_954_, 4);
lean_dec(v_unused_971_);
v___x_963_ = v___y_954_;
v_isShared_964_ = v_isSharedCheck_970_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_spinnerIdx_961_);
lean_inc(v_resetCtrl_960_);
lean_inc(v_failures_959_);
lean_inc(v_totalJobs_957_);
lean_inc(v_jobNo_956_);
lean_dec(v___y_954_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_970_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_965_; lean_object* v___x_967_; 
v___x_965_ = lean_box(0);
if (v_isShared_964_ == 0)
{
lean_ctor_set(v___x_963_, 4, v___x_955_);
v___x_967_ = v___x_963_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_jobNo_956_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_totalJobs_957_);
lean_ctor_set(v_reuseFailAlloc_969_, 2, v_failures_959_);
lean_ctor_set(v_reuseFailAlloc_969_, 3, v_resetCtrl_960_);
lean_ctor_set(v_reuseFailAlloc_969_, 4, v___x_955_);
lean_ctor_set(v_reuseFailAlloc_969_, 5, v_spinnerIdx_961_);
lean_ctor_set_uint8(v_reuseFailAlloc_969_, sizeof(void*)*6, v_wantsRebuild_958_);
v___x_967_ = v_reuseFailAlloc_969_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
lean_object* v___x_968_; 
v___x_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_965_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
return v___x_968_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_sleep___boxed(lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l___private_Lake_Build_Run_0__Lake_Monitor_sleep(v_a_981_, v_a_982_);
lean_dec_ref(v_a_981_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop(lean_object* v_new_985_, lean_object* v_unfinished_986_, lean_object* v_a_987_, lean_object* v_a_988_){
_start:
{
lean_object* v___x_990_; lean_object* v_fst_991_; lean_object* v_snd_992_; lean_object* v_fst_993_; lean_object* v_snd_994_; lean_object* v___y_996_; lean_object* v___y_997_; uint8_t v_failFast_1023_; 
v___x_990_ = l___private_Lake_Build_Run_0__Lake_Monitor_scanJobs(v_new_985_, v_unfinished_986_, v_a_987_, v_a_988_);
lean_dec_ref(v_unfinished_986_);
lean_dec_ref(v_new_985_);
v_fst_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_fst_991_);
v_snd_992_ = lean_ctor_get(v___x_990_, 1);
lean_inc(v_snd_992_);
lean_dec_ref(v___x_990_);
v_fst_993_ = lean_ctor_get(v_fst_991_, 0);
lean_inc(v_fst_993_);
v_snd_994_ = lean_ctor_get(v_fst_991_, 1);
lean_inc(v_snd_994_);
lean_dec(v_fst_991_);
v_failFast_1023_ = lean_ctor_get_uint8(v_a_987_, sizeof(void*)*4 + 7);
if (v_failFast_1023_ == 0)
{
v___y_996_ = v_a_987_;
v___y_997_ = v_snd_992_;
goto v___jp_995_;
}
else
{
lean_object* v_cancelTk_x3f_1024_; 
v_cancelTk_x3f_1024_ = lean_ctor_get(v_a_987_, 3);
if (lean_obj_tag(v_cancelTk_x3f_1024_) == 1)
{
lean_object* v_val_1025_; lean_object* v_failures_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; uint8_t v___x_1029_; 
v_val_1025_ = lean_ctor_get(v_cancelTk_x3f_1024_, 0);
v_failures_1026_ = lean_ctor_get(v_snd_992_, 2);
v___x_1027_ = lean_array_get_size(v_failures_1026_);
v___x_1028_ = lean_unsigned_to_nat(0u);
v___x_1029_ = lean_nat_dec_eq(v___x_1027_, v___x_1028_);
if (v___x_1029_ == 0)
{
lean_object* v___x_1030_; 
v___x_1030_ = l_IO_CancelToken_set(v_val_1025_);
v___y_996_ = v_a_987_;
v___y_997_ = v_snd_992_;
goto v___jp_995_;
}
else
{
v___y_996_ = v_a_987_;
v___y_997_ = v_snd_992_;
goto v___jp_995_;
}
}
else
{
v___y_996_ = v_a_987_;
v___y_997_ = v_snd_992_;
goto v___jp_995_;
}
}
v___jp_995_:
{
lean_object* v___x_998_; lean_object* v___x_999_; uint8_t v___x_1000_; 
v___x_998_ = lean_unsigned_to_nat(0u);
v___x_999_ = lean_array_get_size(v_snd_994_);
v___x_1000_ = lean_nat_dec_lt(v___x_998_, v___x_999_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; lean_object* v_fst_1002_; lean_object* v_snd_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1014_; 
lean_dec(v_fst_993_);
v___x_1001_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v___y_996_, v___y_997_);
v_fst_1002_ = lean_ctor_get(v___x_1001_, 0);
v_snd_1003_ = lean_ctor_get(v___x_1001_, 1);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1005_ = v___x_1001_;
v_isShared_1006_ = v_isSharedCheck_1014_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_snd_1003_);
lean_inc(v_fst_1002_);
lean_dec(v___x_1001_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1014_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; uint8_t v___x_1008_; 
v___x_1007_ = lean_array_get_size(v_fst_1002_);
v___x_1008_ = lean_nat_dec_lt(v___x_998_, v___x_1007_);
if (v___x_1008_ == 0)
{
lean_object* v___x_1009_; lean_object* v___x_1011_; 
lean_dec(v_fst_1002_);
lean_dec(v_snd_994_);
v___x_1009_ = lean_box(0);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1009_);
v___x_1011_ = v___x_1005_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1012_, 1, v_snd_1003_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
else
{
lean_del_object(v___x_1005_);
v_new_985_ = v_fst_1002_;
v_unfinished_986_ = v_snd_994_;
v_a_987_ = v___y_996_;
v_a_988_ = v_snd_1003_;
goto _start;
}
}
}
else
{
lean_object* v___x_1015_; lean_object* v_snd_1016_; lean_object* v___x_1017_; lean_object* v_snd_1018_; lean_object* v___x_1019_; lean_object* v_fst_1020_; lean_object* v_snd_1021_; 
v___x_1015_ = l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg(v_fst_993_, v_snd_994_, v___y_996_, v___y_997_);
lean_dec(v_fst_993_);
v_snd_1016_ = lean_ctor_get(v___x_1015_, 1);
lean_inc(v_snd_1016_);
lean_dec_ref(v___x_1015_);
v___x_1017_ = l___private_Lake_Build_Run_0__Lake_Monitor_sleep(v___y_996_, v_snd_1016_);
v_snd_1018_ = lean_ctor_get(v___x_1017_, 1);
lean_inc(v_snd_1018_);
lean_dec_ref(v___x_1017_);
v___x_1019_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v___y_996_, v_snd_1018_);
v_fst_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_fst_1020_);
v_snd_1021_ = lean_ctor_get(v___x_1019_, 1);
lean_inc(v_snd_1021_);
lean_dec_ref(v___x_1019_);
v_new_985_ = v_fst_1020_;
v_unfinished_986_ = v_snd_994_;
v_a_987_ = v___y_996_;
v_a_988_ = v_snd_1021_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_loop___boxed(lean_object* v_new_1031_, lean_object* v_unfinished_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l___private_Lake_Build_Run_0__Lake_Monitor_loop(v_new_1031_, v_unfinished_1032_, v_a_1033_, v_a_1034_);
lean_dec_ref(v_a_1033_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main(lean_object* v_init_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v___x_1041_; lean_object* v_fst_1042_; lean_object* v_snd_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1112_; 
v___x_1041_ = l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue(v_a_1038_, v_a_1039_);
v_fst_1042_ = lean_ctor_get(v___x_1041_, 0);
v_snd_1043_ = lean_ctor_get(v___x_1041_, 1);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1045_ = v___x_1041_;
v_isShared_1046_ = v_isSharedCheck_1112_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_snd_1043_);
lean_inc(v_fst_1042_);
lean_dec(v___x_1041_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1112_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1047_; lean_object* v_snd_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1110_; 
v___x_1047_ = l___private_Lake_Build_Run_0__Lake_Monitor_loop(v_fst_1042_, v_init_1037_, v_a_1038_, v_snd_1043_);
v_snd_1048_ = lean_ctor_get(v___x_1047_, 1);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1110_ == 0)
{
lean_object* v_unused_1111_; 
v_unused_1111_ = lean_ctor_get(v___x_1047_, 0);
lean_dec(v_unused_1111_);
v___x_1050_ = v___x_1047_;
v_isShared_1051_ = v_isSharedCheck_1110_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_snd_1048_);
lean_dec(v___x_1047_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1110_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v_jobNo_1052_; lean_object* v_totalJobs_1053_; uint8_t v_wantsRebuild_1054_; lean_object* v_failures_1055_; lean_object* v_resetCtrl_1056_; lean_object* v_lastUpdate_1057_; lean_object* v_spinnerIdx_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1109_; 
v_jobNo_1052_ = lean_ctor_get(v_snd_1048_, 0);
v_totalJobs_1053_ = lean_ctor_get(v_snd_1048_, 1);
v_wantsRebuild_1054_ = lean_ctor_get_uint8(v_snd_1048_, sizeof(void*)*6);
v_failures_1055_ = lean_ctor_get(v_snd_1048_, 2);
v_resetCtrl_1056_ = lean_ctor_get(v_snd_1048_, 3);
v_lastUpdate_1057_ = lean_ctor_get(v_snd_1048_, 4);
v_spinnerIdx_1058_ = lean_ctor_get(v_snd_1048_, 5);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_snd_1048_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1060_ = v_snd_1048_;
v_isShared_1061_ = v_isSharedCheck_1109_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_spinnerIdx_1058_);
lean_inc(v_lastUpdate_1057_);
lean_inc(v_resetCtrl_1056_);
lean_inc(v_failures_1055_);
lean_inc(v_totalJobs_1053_);
lean_inc(v_jobNo_1052_);
lean_dec(v_snd_1048_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1109_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1062_; lean_object* v___x_1064_; 
v___x_1062_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
if (v_isShared_1061_ == 0)
{
lean_ctor_set(v___x_1060_, 3, v___x_1062_);
v___x_1064_ = v___x_1060_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_jobNo_1052_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_totalJobs_1053_);
lean_ctor_set(v_reuseFailAlloc_1108_, 2, v_failures_1055_);
lean_ctor_set(v_reuseFailAlloc_1108_, 3, v___x_1062_);
lean_ctor_set(v_reuseFailAlloc_1108_, 4, v_lastUpdate_1057_);
lean_ctor_set(v_reuseFailAlloc_1108_, 5, v_spinnerIdx_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1108_, sizeof(void*)*6, v_wantsRebuild_1054_);
v___x_1064_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
lean_object* v_val_1066_; lean_object* v___x_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; 
v___x_1070_ = lean_string_utf8_byte_size(v_resetCtrl_1056_);
v___x_1071_ = lean_unsigned_to_nat(0u);
v___x_1072_ = lean_nat_dec_eq(v___x_1070_, v___x_1071_);
if (v___x_1072_ == 0)
{
lean_object* v_out_1073_; lean_object* v_flush_1074_; lean_object* v_putStr_1075_; lean_object* v___x_1080_; 
lean_del_object(v___x_1045_);
v_out_1073_ = lean_ctor_get(v_a_1038_, 1);
v_flush_1074_ = lean_ctor_get(v_out_1073_, 0);
v_putStr_1075_ = lean_ctor_get(v_out_1073_, 4);
lean_inc_ref(v_putStr_1075_);
lean_inc_ref(v_resetCtrl_1056_);
v___x_1080_ = lean_apply_2(v_putStr_1075_, v_resetCtrl_1056_, lean_box(0));
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_dec_ref_known(v___x_1080_, 1);
lean_dec_ref(v_resetCtrl_1056_);
goto v___jp_1076_;
}
else
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1103_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1083_ = v___x_1080_;
v_isShared_1084_ = v_isSharedCheck_1103_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1080_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1103_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1096_; 
v___x_1085_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1086_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1087_ = lean_unsigned_to_nat(82u);
v___x_1088_ = lean_unsigned_to_nat(4u);
v___x_1089_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_1090_ = lean_io_error_to_string(v_a_1081_);
v___x_1091_ = lean_string_append(v___x_1089_, v___x_1090_);
lean_dec_ref(v___x_1090_);
v___x_1092_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1093_ = lean_string_append(v___x_1091_, v___x_1092_);
v___x_1094_ = l_String_quote(v_resetCtrl_1056_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set_tag(v___x_1083_, 3);
lean_ctor_set(v___x_1083_, 0, v___x_1094_);
v___x_1096_ = v___x_1083_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v___x_1094_);
v___x_1096_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1097_ = l_Std_Format_defWidth;
v___x_1098_ = l_Std_Format_pretty(v___x_1096_, v___x_1097_, v___x_1071_, v___x_1071_);
v___x_1099_ = lean_string_append(v___x_1093_, v___x_1098_);
lean_dec_ref(v___x_1098_);
v___x_1100_ = l_mkPanicMessageWithDecl(v___x_1085_, v___x_1086_, v___x_1087_, v___x_1088_, v___x_1099_);
lean_dec_ref(v___x_1099_);
v___x_1101_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1100_);
goto v___jp_1076_;
}
}
}
v___jp_1076_:
{
lean_object* v___x_1077_; 
lean_inc_ref(v_flush_1074_);
v___x_1077_ = lean_apply_1(v_flush_1074_, lean_box(0));
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref_known(v___x_1077_, 1);
v_val_1066_ = v_a_1078_;
goto v___jp_1065_;
}
else
{
lean_object* v___x_1079_; 
lean_dec_ref_known(v___x_1077_, 1);
v___x_1079_ = lean_box(0);
v_val_1066_ = v___x_1079_;
goto v___jp_1065_;
}
}
}
else
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
lean_dec_ref(v_resetCtrl_1056_);
lean_del_object(v___x_1050_);
v___x_1104_ = lean_box(0);
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 1, v___x_1064_);
lean_ctor_set(v___x_1045_, 0, v___x_1104_);
v___x_1106_ = v___x_1045_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1104_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v___x_1064_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
v___jp_1065_:
{
lean_object* v___x_1068_; 
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 1, v___x_1064_);
lean_ctor_set(v___x_1050_, 0, v_val_1066_);
v___x_1068_ = v___x_1050_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_val_1066_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v___x_1064_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Monitor_main___boxed(lean_object* v_init_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l___private_Lake_Build_Run_0__Lake_Monitor_main(v_init_1113_, v_a_1114_, v_a_1115_);
lean_dec_ref(v_a_1114_);
return v_res_1117_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk(lean_object* v_self_1118_){
_start:
{
lean_object* v_failures_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; uint8_t v___x_1122_; 
v_failures_1119_ = lean_ctor_get(v_self_1118_, 0);
v___x_1120_ = lean_array_get_size(v_failures_1119_);
v___x_1121_ = lean_unsigned_to_nat(0u);
v___x_1122_ = lean_nat_dec_eq(v___x_1120_, v___x_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk___boxed(lean_object* v_self_1123_){
_start:
{
uint8_t v_res_1124_; lean_object* v_r_1125_; 
v_res_1124_ = l___private_Lake_Build_Run_0__Lake_MonitorResult_isOk(v_self_1123_);
lean_dec_ref(v_self_1123_);
v_r_1125_ = lean_box(v_res_1124_);
return v_r_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext(lean_object* v_cfg_1126_, lean_object* v_jobs_1127_, lean_object* v_cancelTk_x3f_1128_){
_start:
{
lean_object* v_toLogConfig_1130_; uint8_t v_failFast_1131_; uint8_t v_verbosity_1132_; uint8_t v_failLv_1133_; uint8_t v_outLv_1134_; uint8_t v_ansiMode_1135_; lean_object* v_out_1136_; lean_object* v___x_1137_; uint8_t v___x_1138_; uint8_t v___x_1139_; uint8_t v___x_1140_; uint8_t v___x_1141_; uint8_t v___y_1143_; uint8_t v___y_1144_; uint8_t v___y_1148_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; uint8_t v___x_1153_; 
v_toLogConfig_1130_ = lean_ctor_get(v_cfg_1126_, 0);
v_failFast_1131_ = lean_ctor_get_uint8(v_cfg_1126_, sizeof(void*)*5 + 3);
v_verbosity_1132_ = lean_ctor_get_uint8(v_cfg_1126_, sizeof(void*)*5 + 4);
v_failLv_1133_ = lean_ctor_get_uint8(v_toLogConfig_1130_, sizeof(void*)*1);
v_outLv_1134_ = lean_ctor_get_uint8(v_toLogConfig_1130_, sizeof(void*)*1 + 1);
v_ansiMode_1135_ = lean_ctor_get_uint8(v_toLogConfig_1130_, sizeof(void*)*1 + 2);
v_out_1136_ = lean_ctor_get(v_toLogConfig_1130_, 0);
v___x_1137_ = l_Lake_OutStream_get(v_out_1136_);
lean_inc_ref(v___x_1137_);
v___x_1138_ = l_Lake_AnsiMode_isEnabled(v___x_1137_, v_ansiMode_1135_);
v___x_1139_ = l_Lake_BuildConfig_showProgress(v_cfg_1126_);
v___x_1140_ = 2;
v___x_1141_ = l_Lake_instDecidableEqVerbosity(v_verbosity_1132_, v___x_1140_);
v___x_1150_ = lean_box(v_verbosity_1132_);
v___x_1151_ = lean_obj_tag_nat(v___x_1150_);
lean_dec(v___x_1150_);
v___x_1152_ = lean_unsigned_to_nat(2u);
v___x_1153_ = lean_nat_dec_eq(v___x_1151_, v___x_1152_);
if (v___x_1153_ == 0)
{
uint8_t v___x_1154_; 
v___x_1154_ = 3;
v___y_1148_ = v___x_1154_;
goto v___jp_1147_;
}
else
{
uint8_t v___x_1155_; 
v___x_1155_ = 0;
v___y_1148_ = v___x_1155_;
goto v___jp_1147_;
}
v___jp_1142_:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = lean_unsigned_to_nat(100u);
v___x_1146_ = lean_alloc_ctor(0, 4, 8);
lean_ctor_set(v___x_1146_, 0, v_jobs_1127_);
lean_ctor_set(v___x_1146_, 1, v___x_1137_);
lean_ctor_set(v___x_1146_, 2, v___x_1145_);
lean_ctor_set(v___x_1146_, 3, v_cancelTk_x3f_1128_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*4, v_outLv_1134_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*4 + 1, v_failLv_1133_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*4 + 2, v___y_1143_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*4 + 3, v___x_1141_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*4 + 4, v___x_1138_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*4 + 5, v___x_1139_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*4 + 6, v___y_1144_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*4 + 7, v_failFast_1131_);
return v___x_1146_;
}
v___jp_1147_:
{
if (v___x_1141_ == 0)
{
if (v___x_1138_ == 0)
{
uint8_t v___x_1149_; 
v___x_1149_ = 1;
v___y_1143_ = v___y_1148_;
v___y_1144_ = v___x_1149_;
goto v___jp_1142_;
}
else
{
v___y_1143_ = v___y_1148_;
v___y_1144_ = v___x_1141_;
goto v___jp_1142_;
}
}
else
{
v___y_1143_ = v___y_1148_;
v___y_1144_ = v___x_1141_;
goto v___jp_1142_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkMonitorContext___boxed(lean_object* v_cfg_1156_, lean_object* v_jobs_1157_, lean_object* v_cancelTk_x3f_1158_, lean_object* v_a_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_1156_, v_jobs_1157_, v_cancelTk_x3f_1158_);
lean_dec_ref(v_cfg_1156_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(lean_object* v_ctx_1161_, lean_object* v_initJobs_1162_, lean_object* v_initFailures_1163_, lean_object* v_resetCtrl_1164_){
_start:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; uint8_t v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v_snd_1171_; lean_object* v_totalJobs_1172_; uint8_t v_wantsRebuild_1173_; lean_object* v_failures_1174_; lean_object* v___x_1175_; 
v___x_1166_ = lean_io_mono_ms_now();
v___x_1167_ = lean_unsigned_to_nat(0u);
v___x_1168_ = 0;
v___x_1169_ = lean_alloc_ctor(0, 6, 1);
lean_ctor_set(v___x_1169_, 0, v___x_1167_);
lean_ctor_set(v___x_1169_, 1, v___x_1167_);
lean_ctor_set(v___x_1169_, 2, v_initFailures_1163_);
lean_ctor_set(v___x_1169_, 3, v_resetCtrl_1164_);
lean_ctor_set(v___x_1169_, 4, v___x_1166_);
lean_ctor_set(v___x_1169_, 5, v___x_1167_);
lean_ctor_set_uint8(v___x_1169_, sizeof(void*)*6, v___x_1168_);
v___x_1170_ = l___private_Lake_Build_Run_0__Lake_Monitor_main(v_initJobs_1162_, v_ctx_1161_, v___x_1169_);
v_snd_1171_ = lean_ctor_get(v___x_1170_, 1);
lean_inc(v_snd_1171_);
lean_dec_ref(v___x_1170_);
v_totalJobs_1172_ = lean_ctor_get(v_snd_1171_, 1);
lean_inc(v_totalJobs_1172_);
v_wantsRebuild_1173_ = lean_ctor_get_uint8(v_snd_1171_, sizeof(void*)*6);
v_failures_1174_ = lean_ctor_get(v_snd_1171_, 2);
lean_inc_ref(v_failures_1174_);
lean_dec(v_snd_1171_);
v___x_1175_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1175_, 0, v_failures_1174_);
lean_ctor_set(v___x_1175_, 1, v_totalJobs_1172_);
lean_ctor_set_uint8(v___x_1175_, sizeof(void*)*2, v_wantsRebuild_1173_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJobs_x27___boxed(lean_object* v_ctx_1176_, lean_object* v_initJobs_1177_, lean_object* v_initFailures_1178_, lean_object* v_resetCtrl_1179_, lean_object* v_a_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1176_, v_initJobs_1177_, v_initFailures_1178_, v_resetCtrl_1179_);
lean_dec_ref(v_ctx_1176_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lake_monitorJobs(lean_object* v_initJobs_1182_, lean_object* v_jobs_1183_, lean_object* v_out_1184_, uint8_t v_failLv_1185_, uint8_t v_outLv_1186_, uint8_t v_minAction_1187_, uint8_t v_showOptional_1188_, uint8_t v_useAnsi_1189_, uint8_t v_showProgress_1190_, uint8_t v_showTime_1191_, lean_object* v_resetCtrl_1192_, lean_object* v_initFailures_1193_, lean_object* v_updateFrequency_1194_){
_start:
{
uint8_t v___x_1196_; lean_object* v___x_1197_; lean_object* v_ctx_1198_; lean_object* v___x_1199_; 
v___x_1196_ = 0;
v___x_1197_ = lean_box(0);
v_ctx_1198_ = lean_alloc_ctor(0, 4, 8);
lean_ctor_set(v_ctx_1198_, 0, v_jobs_1183_);
lean_ctor_set(v_ctx_1198_, 1, v_out_1184_);
lean_ctor_set(v_ctx_1198_, 2, v_updateFrequency_1194_);
lean_ctor_set(v_ctx_1198_, 3, v___x_1197_);
lean_ctor_set_uint8(v_ctx_1198_, sizeof(void*)*4, v_outLv_1186_);
lean_ctor_set_uint8(v_ctx_1198_, sizeof(void*)*4 + 1, v_failLv_1185_);
lean_ctor_set_uint8(v_ctx_1198_, sizeof(void*)*4 + 2, v_minAction_1187_);
lean_ctor_set_uint8(v_ctx_1198_, sizeof(void*)*4 + 3, v_showOptional_1188_);
lean_ctor_set_uint8(v_ctx_1198_, sizeof(void*)*4 + 4, v_useAnsi_1189_);
lean_ctor_set_uint8(v_ctx_1198_, sizeof(void*)*4 + 5, v_showProgress_1190_);
lean_ctor_set_uint8(v_ctx_1198_, sizeof(void*)*4 + 6, v_showTime_1191_);
lean_ctor_set_uint8(v_ctx_1198_, sizeof(void*)*4 + 7, v___x_1196_);
v___x_1199_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1198_, v_initJobs_1182_, v_initFailures_1193_, v_resetCtrl_1192_);
lean_dec_ref_known(v_ctx_1198_, 4);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lake_monitorJobs___boxed(lean_object* v_initJobs_1200_, lean_object* v_jobs_1201_, lean_object* v_out_1202_, lean_object* v_failLv_1203_, lean_object* v_outLv_1204_, lean_object* v_minAction_1205_, lean_object* v_showOptional_1206_, lean_object* v_useAnsi_1207_, lean_object* v_showProgress_1208_, lean_object* v_showTime_1209_, lean_object* v_resetCtrl_1210_, lean_object* v_initFailures_1211_, lean_object* v_updateFrequency_1212_, lean_object* v_a_1213_){
_start:
{
uint8_t v_failLv_boxed_1214_; uint8_t v_outLv_boxed_1215_; uint8_t v_minAction_boxed_1216_; uint8_t v_showOptional_boxed_1217_; uint8_t v_useAnsi_boxed_1218_; uint8_t v_showProgress_boxed_1219_; uint8_t v_showTime_boxed_1220_; lean_object* v_res_1221_; 
v_failLv_boxed_1214_ = lean_unbox(v_failLv_1203_);
v_outLv_boxed_1215_ = lean_unbox(v_outLv_1204_);
v_minAction_boxed_1216_ = lean_unbox(v_minAction_1205_);
v_showOptional_boxed_1217_ = lean_unbox(v_showOptional_1206_);
v_useAnsi_boxed_1218_ = lean_unbox(v_useAnsi_1207_);
v_showProgress_boxed_1219_ = lean_unbox(v_showProgress_1208_);
v_showTime_boxed_1220_ = lean_unbox(v_showTime_1209_);
v_res_1221_ = l_Lake_monitorJobs(v_initJobs_1200_, v_jobs_1201_, v_out_1202_, v_failLv_boxed_1214_, v_outLv_boxed_1215_, v_minAction_boxed_1216_, v_showOptional_boxed_1217_, v_useAnsi_boxed_1218_, v_showProgress_boxed_1219_, v_showTime_boxed_1220_, v_resetCtrl_1210_, v_initFailures_1211_, v_updateFrequency_1212_);
return v_res_1221_;
}
}
static uint32_t _init_l_Lake_noBuildCode(void){
_start:
{
uint32_t v___x_1222_; 
v___x_1222_ = 3;
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0(lean_object* v_logger_1223_, lean_object* v_x_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = lean_apply_2(v_logger_1223_, v___y_1225_, lean_box(0));
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0___boxed(lean_object* v_logger_1228_, lean_object* v_x_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0(v_logger_1228_, v_x_1229_, v___y_1230_);
return v_res_1232_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1(void){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0));
v___x_1235_ = l_String_quote(v___x_1234_);
return v___x_1235_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__1);
v___x_1237_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1236_);
return v___x_1237_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3(void){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1238_ = lean_unsigned_to_nat(0u);
v___x_1239_ = l_Std_Format_defWidth;
v___x_1240_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__2);
v___x_1241_ = l_Std_Format_pretty(v___x_1240_, v___x_1239_, v___x_1238_, v___x_1238_);
return v___x_1241_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8(void){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7));
v___x_1249_ = l_String_quote(v___x_1248_);
return v___x_1249_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9(void){
_start:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__8);
v___x_1251_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
return v___x_1251_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1252_ = lean_unsigned_to_nat(0u);
v___x_1253_ = l_Std_Format_defWidth;
v___x_1254_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__9);
v___x_1255_ = l_Std_Format_pretty(v___x_1254_, v___x_1253_, v___x_1252_, v___x_1252_);
return v___x_1255_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11));
v___x_1258_ = l_String_quote(v___x_1257_);
return v___x_1258_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13(void){
_start:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__12);
v___x_1260_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
return v___x_1260_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14(void){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1261_ = lean_unsigned_to_nat(0u);
v___x_1262_ = l_Std_Format_defWidth;
v___x_1263_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__13);
v___x_1264_ = l_Std_Format_pretty(v___x_1263_, v___x_1262_, v___x_1261_, v___x_1261_);
return v___x_1264_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17(void){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16));
v___x_1268_ = l_String_quote(v___x_1267_);
return v___x_1268_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18(void){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__17);
v___x_1270_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
return v___x_1270_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19(void){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1271_ = lean_unsigned_to_nat(0u);
v___x_1272_ = l_Std_Format_defWidth;
v___x_1273_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__18);
v___x_1274_ = l_Std_Format_pretty(v___x_1273_, v___x_1272_, v___x_1271_, v___x_1271_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs(lean_object* v_logger_1275_, lean_object* v_bctx_1276_, lean_object* v_out_1277_, lean_object* v_outputsFile_1278_){
_start:
{
lean_object* v___x_1286_; lean_object* v_outputsRef_x3f_1287_; 
v___x_1286_ = l_instMonadBaseIO;
v_outputsRef_x3f_1287_ = lean_ctor_get(v_bctx_1276_, 5);
lean_inc(v_outputsRef_x3f_1287_);
if (lean_obj_tag(v_outputsRef_x3f_1287_) == 1)
{
lean_object* v_toContext_1288_; lean_object* v_toBuildConfig_1289_; lean_object* v_val_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1436_; 
v_toContext_1288_ = lean_ctor_get(v_bctx_1276_, 1);
lean_inc(v_toContext_1288_);
v_toBuildConfig_1289_ = lean_ctor_get(v_bctx_1276_, 0);
lean_inc_ref(v_toBuildConfig_1289_);
lean_dec_ref(v_bctx_1276_);
v_val_1290_ = lean_ctor_get(v_outputsRef_x3f_1287_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v_outputsRef_x3f_1287_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1292_ = v_outputsRef_x3f_1287_;
v_isShared_1293_ = v_isSharedCheck_1436_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_val_1290_);
lean_dec(v_outputsRef_x3f_1287_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1436_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v_lakeEnv_1294_; lean_object* v_packages_1295_; uint8_t v_verbosity_1296_; lean_object* v_outputsIdx_1297_; lean_object* v___x_1298_; uint8_t v___x_1299_; 
v_lakeEnv_1294_ = lean_ctor_get(v_toContext_1288_, 0);
lean_inc_ref(v_lakeEnv_1294_);
v_packages_1295_ = lean_ctor_get(v_toContext_1288_, 4);
lean_inc_ref(v_packages_1295_);
lean_dec(v_toContext_1288_);
v_verbosity_1296_ = lean_ctor_get_uint8(v_toBuildConfig_1289_, sizeof(void*)*5 + 4);
v_outputsIdx_1297_ = lean_ctor_get(v_toBuildConfig_1289_, 2);
lean_inc(v_outputsIdx_1297_);
lean_dec_ref(v_toBuildConfig_1289_);
v___x_1298_ = lean_array_get_size(v_packages_1295_);
v___x_1299_ = lean_nat_dec_lt(v_outputsIdx_1297_, v___x_1298_);
if (v___x_1299_ == 0)
{
lean_object* v_putStr_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
lean_dec(v_outputsIdx_1297_);
lean_dec_ref(v_packages_1295_);
lean_dec_ref(v_lakeEnv_1294_);
lean_del_object(v___x_1292_);
lean_dec(v_val_1290_);
lean_dec_ref(v_outputsFile_1278_);
lean_dec_ref(v_logger_1275_);
v_putStr_1300_ = lean_ctor_get(v_out_1277_, 4);
lean_inc_ref(v_putStr_1300_);
lean_dec_ref(v_out_1277_);
v___x_1301_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0));
v___x_1302_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1303_ = lean_apply_2(v_putStr_1300_, v___x_1301_, lean_box(0));
if (lean_obj_tag(v___x_1303_) == 0)
{
lean_dec_ref_known(v___x_1303_, 1);
goto v___jp_1282_;
}
else
{
lean_object* v_a_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_2532__overap_1317_; lean_object* v___x_1318_; 
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___x_1303_, 1);
v___x_1305_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1306_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1307_ = lean_unsigned_to_nat(82u);
v___x_1308_ = lean_unsigned_to_nat(4u);
v___x_1309_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_1310_ = lean_io_error_to_string(v_a_1304_);
v___x_1311_ = lean_string_append(v___x_1309_, v___x_1310_);
lean_dec_ref(v___x_1310_);
v___x_1312_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1313_ = lean_string_append(v___x_1311_, v___x_1312_);
v___x_1314_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3);
v___x_1315_ = lean_string_append(v___x_1313_, v___x_1314_);
v___x_1316_ = l_mkPanicMessageWithDecl(v___x_1305_, v___x_1306_, v___x_1307_, v___x_1308_, v___x_1315_);
lean_dec_ref(v___x_1315_);
v___x_2532__overap_1317_ = l_panic___redArg(v___x_1302_, v___x_1316_);
v___x_1318_ = lean_apply_1(v___x_2532__overap_1317_, lean_box(0));
lean_dec(v___x_1318_);
goto v___jp_1282_;
}
}
else
{
lean_object* v___x_1319_; lean_object* v_config_1320_; lean_object* v_baseName_1321_; lean_object* v_toLeanConfig_1322_; lean_object* v_enableArtifactCache_x3f_1323_; lean_object* v___f_1324_; lean_object* v___y_1326_; lean_object* v___y_1327_; uint8_t v___y_1328_; lean_object* v___y_1338_; lean_object* v___y_1339_; uint8_t v___y_1348_; uint8_t v___y_1415_; uint8_t v___y_1423_; 
v___x_1319_ = lean_array_fget_borrowed(v_packages_1295_, v_outputsIdx_1297_);
lean_dec(v_outputsIdx_1297_);
v_config_1320_ = lean_ctor_get(v___x_1319_, 6);
v_baseName_1321_ = lean_ctor_get(v___x_1319_, 1);
lean_inc(v_baseName_1321_);
v_toLeanConfig_1322_ = lean_ctor_get(v_config_1320_, 1);
lean_inc_ref(v_toLeanConfig_1322_);
v_enableArtifactCache_x3f_1323_ = lean_ctor_get(v_config_1320_, 24);
lean_inc_ref(v_logger_1275_);
v___f_1324_ = lean_alloc_closure((void*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1324_, 0, v_logger_1275_);
if (lean_obj_tag(v_enableArtifactCache_x3f_1323_) == 0)
{
lean_object* v_enableArtifactCache_x3f_1424_; 
v_enableArtifactCache_x3f_1424_ = lean_ctor_get(v_lakeEnv_1294_, 6);
lean_inc(v_enableArtifactCache_x3f_1424_);
lean_dec_ref(v_lakeEnv_1294_);
if (lean_obj_tag(v_enableArtifactCache_x3f_1424_) == 0)
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v_config_1427_; lean_object* v_enableArtifactCache_x3f_1428_; 
v___x_1425_ = lean_unsigned_to_nat(0u);
v___x_1426_ = lean_array_fget(v_packages_1295_, v___x_1425_);
lean_dec_ref(v_packages_1295_);
v_config_1427_ = lean_ctor_get(v___x_1426_, 6);
lean_inc_ref(v_config_1427_);
lean_dec(v___x_1426_);
v_enableArtifactCache_x3f_1428_ = lean_ctor_get(v_config_1427_, 24);
lean_inc(v_enableArtifactCache_x3f_1428_);
lean_dec_ref(v_config_1427_);
if (lean_obj_tag(v_enableArtifactCache_x3f_1428_) == 0)
{
uint8_t v___x_1429_; 
v___x_1429_ = 0;
v___y_1415_ = v___x_1429_;
goto v___jp_1414_;
}
else
{
lean_object* v_val_1430_; uint8_t v___x_1431_; 
v_val_1430_ = lean_ctor_get(v_enableArtifactCache_x3f_1428_, 0);
lean_inc(v_val_1430_);
lean_dec_ref_known(v_enableArtifactCache_x3f_1428_, 1);
v___x_1431_ = lean_unbox(v_val_1430_);
lean_dec(v_val_1430_);
v___y_1423_ = v___x_1431_;
goto v___jp_1422_;
}
}
else
{
lean_object* v_val_1432_; uint8_t v___x_1433_; 
lean_dec_ref(v_packages_1295_);
v_val_1432_ = lean_ctor_get(v_enableArtifactCache_x3f_1424_, 0);
lean_inc(v_val_1432_);
lean_dec_ref_known(v_enableArtifactCache_x3f_1424_, 1);
v___x_1433_ = lean_unbox(v_val_1432_);
lean_dec(v_val_1432_);
v___y_1423_ = v___x_1433_;
goto v___jp_1422_;
}
}
else
{
lean_object* v_val_1434_; uint8_t v___x_1435_; 
lean_inc_ref(v_enableArtifactCache_x3f_1323_);
lean_dec_ref(v_packages_1295_);
lean_dec_ref(v_lakeEnv_1294_);
v_val_1434_ = lean_ctor_get(v_enableArtifactCache_x3f_1323_, 0);
lean_inc(v_val_1434_);
lean_dec_ref_known(v_enableArtifactCache_x3f_1323_, 1);
v___x_1435_ = lean_unbox(v_val_1434_);
lean_dec(v_val_1434_);
v___y_1423_ = v___x_1435_;
goto v___jp_1422_;
}
v___jp_1325_:
{
if (v___y_1328_ == 0)
{
lean_object* v___x_1329_; 
lean_dec_ref(v___y_1327_);
lean_dec_ref(v___f_1324_);
v___x_1329_ = lean_box(0);
return v___x_1329_;
}
else
{
lean_object* v___x_1330_; lean_object* v___x_1331_; uint8_t v___x_1332_; 
v___x_1330_ = lean_array_get_size(v___y_1327_);
v___x_1331_ = lean_box(0);
v___x_1332_ = lean_nat_dec_lt(v___y_1326_, v___x_1330_);
if (v___x_1332_ == 0)
{
lean_dec_ref(v___y_1327_);
lean_dec_ref(v___f_1324_);
return v___x_1331_;
}
else
{
size_t v___x_1333_; size_t v___x_1334_; lean_object* v___x_2353__overap_1335_; lean_object* v___x_1336_; 
v___x_1333_ = ((size_t)0ULL);
v___x_1334_ = lean_usize_of_nat(v___x_1330_);
v___x_2353__overap_1335_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1286_, v___f_1324_, v___y_1327_, v___x_1333_, v___x_1334_, v___x_1331_);
v___x_1336_ = lean_apply_1(v___x_2353__overap_1335_, lean_box(0));
return v___x_1336_;
}
}
}
v___jp_1337_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v___x_1340_ = lean_array_get_size(v___y_1339_);
v___x_1341_ = lean_box(0);
v___x_1342_ = lean_nat_dec_lt(v___y_1338_, v___x_1340_);
if (v___x_1342_ == 0)
{
lean_dec_ref(v___y_1339_);
lean_dec_ref(v___f_1324_);
return v___x_1341_;
}
else
{
size_t v___x_1343_; size_t v___x_1344_; lean_object* v___x_2283__overap_1345_; lean_object* v___x_1346_; 
v___x_1343_ = ((size_t)0ULL);
v___x_1344_ = lean_usize_of_nat(v___x_1340_);
v___x_2283__overap_1345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1286_, v___f_1324_, v___y_1339_, v___x_1343_, v___x_1344_, v___x_1341_);
v___x_1346_ = lean_apply_1(v___x_2283__overap_1345_, lean_box(0));
return v___x_1346_;
}
}
v___jp_1347_:
{
lean_object* v___x_1349_; lean_object* v_platformIndependent_1350_; lean_object* v___f_1351_; lean_object* v___x_1352_; lean_object* v___x_1354_; 
v___x_1349_ = lean_st_ref_get(v_val_1290_);
lean_dec(v_val_1290_);
v_platformIndependent_1350_ = lean_ctor_get(v_toLeanConfig_1322_, 10);
lean_inc(v_platformIndependent_1350_);
lean_dec_ref(v_toLeanConfig_1322_);
v___f_1351_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__5));
v___x_1352_ = lean_box(v___x_1299_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v___x_1352_);
v___x_1354_ = v___x_1292_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1352_);
v___x_1354_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
uint8_t v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1355_ = l_instBEqOption_beq___redArg(v___f_1351_, v_platformIndependent_1350_, v___x_1354_);
v___x_1356_ = lean_unsigned_to_nat(0u);
v___x_1357_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__6));
v___x_1358_ = l_Lake_CacheMap_writeFile(v_outputsFile_1278_, v___x_1349_, v___x_1355_, v___x_1357_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v_a_1359_; lean_object* v___x_1360_; uint8_t v___x_1361_; 
v_a_1359_ = lean_ctor_get(v___x_1358_, 1);
lean_inc(v_a_1359_);
lean_dec_ref_known(v___x_1358_, 2);
v___x_1360_ = lean_array_get_size(v_a_1359_);
v___x_1361_ = lean_nat_dec_eq(v___x_1360_, v___x_1356_);
if (v___x_1361_ == 0)
{
if (v___y_1348_ == 0)
{
lean_dec(v_a_1359_);
lean_dec_ref(v___f_1324_);
lean_dec_ref(v_out_1277_);
goto v___jp_1280_;
}
else
{
lean_object* v_putStr_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
v_putStr_1362_ = lean_ctor_get(v_out_1277_, 4);
lean_inc_ref(v_putStr_1362_);
lean_dec_ref(v_out_1277_);
v___x_1363_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7));
v___x_1364_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1365_ = lean_apply_2(v_putStr_1362_, v___x_1363_, lean_box(0));
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_dec_ref_known(v___x_1365_, 1);
v___y_1338_ = v___x_1356_;
v___y_1339_ = v_a_1359_;
goto v___jp_1337_;
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_2539__overap_1384_; lean_object* v___x_1385_; 
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_a_1366_);
lean_dec_ref_known(v___x_1365_, 1);
v___x_1367_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1368_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1369_ = lean_unsigned_to_nat(82u);
v___x_1370_ = lean_unsigned_to_nat(4u);
v___x_1371_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1372_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_1373_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1372_, v___y_1348_);
v___x_1374_ = lean_string_append(v___x_1371_, v___x_1373_);
lean_dec_ref(v___x_1373_);
v___x_1375_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_1376_ = lean_string_append(v___x_1374_, v___x_1375_);
v___x_1377_ = lean_io_error_to_string(v_a_1366_);
v___x_1378_ = lean_string_append(v___x_1376_, v___x_1377_);
lean_dec_ref(v___x_1377_);
v___x_1379_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1380_ = lean_string_append(v___x_1378_, v___x_1379_);
v___x_1381_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10);
v___x_1382_ = lean_string_append(v___x_1380_, v___x_1381_);
v___x_1383_ = l_mkPanicMessageWithDecl(v___x_1367_, v___x_1368_, v___x_1369_, v___x_1370_, v___x_1382_);
lean_dec_ref(v___x_1382_);
v___x_2539__overap_1384_ = l_panic___redArg(v___x_1364_, v___x_1383_);
v___x_1385_ = lean_apply_1(v___x_2539__overap_1384_, lean_box(0));
lean_dec(v___x_1385_);
v___y_1338_ = v___x_1356_;
v___y_1339_ = v_a_1359_;
goto v___jp_1337_;
}
}
}
else
{
lean_dec(v_a_1359_);
lean_dec_ref(v___f_1324_);
lean_dec_ref(v_out_1277_);
goto v___jp_1280_;
}
}
else
{
lean_object* v_a_1386_; lean_object* v_putStr_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v_a_1386_ = lean_ctor_get(v___x_1358_, 1);
lean_inc(v_a_1386_);
lean_dec_ref_known(v___x_1358_, 2);
v_putStr_1387_ = lean_ctor_get(v_out_1277_, 4);
lean_inc_ref(v_putStr_1387_);
lean_dec_ref(v_out_1277_);
v___x_1388_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11));
v___x_1389_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1390_ = lean_apply_2(v_putStr_1387_, v___x_1388_, lean_box(0));
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_dec_ref_known(v___x_1390_, 1);
v___y_1326_ = v___x_1356_;
v___y_1327_ = v_a_1386_;
v___y_1328_ = v___y_1348_;
goto v___jp_1325_;
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_2544__overap_1409_; lean_object* v___x_1410_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
v___x_1392_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1393_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1394_ = lean_unsigned_to_nat(82u);
v___x_1395_ = lean_unsigned_to_nat(4u);
v___x_1396_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1397_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_1398_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1397_, v___x_1299_);
v___x_1399_ = lean_string_append(v___x_1396_, v___x_1398_);
lean_dec_ref(v___x_1398_);
v___x_1400_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_1401_ = lean_string_append(v___x_1399_, v___x_1400_);
v___x_1402_ = lean_io_error_to_string(v_a_1391_);
v___x_1403_ = lean_string_append(v___x_1401_, v___x_1402_);
lean_dec_ref(v___x_1402_);
v___x_1404_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1405_ = lean_string_append(v___x_1403_, v___x_1404_);
v___x_1406_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14);
v___x_1407_ = lean_string_append(v___x_1405_, v___x_1406_);
v___x_1408_ = l_mkPanicMessageWithDecl(v___x_1392_, v___x_1393_, v___x_1394_, v___x_1395_, v___x_1407_);
lean_dec_ref(v___x_1407_);
v___x_2544__overap_1409_ = l_panic___redArg(v___x_1389_, v___x_1408_);
v___x_1410_ = lean_apply_1(v___x_2544__overap_1409_, lean_box(0));
lean_dec(v___x_1410_);
v___y_1326_ = v___x_1356_;
v___y_1327_ = v_a_1386_;
v___y_1328_ = v___y_1348_;
goto v___jp_1325_;
}
}
}
}
v___jp_1412_:
{
if (v_verbosity_1296_ == 2)
{
v___y_1348_ = v___x_1299_;
goto v___jp_1347_;
}
else
{
uint8_t v___x_1413_; 
v___x_1413_ = 0;
v___y_1348_ = v___x_1413_;
goto v___jp_1347_;
}
}
v___jp_1414_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; uint8_t v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1416_ = l_Lean_Name_toString(v_baseName_1321_, v___y_1415_);
v___x_1417_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__15));
v___x_1418_ = lean_string_append(v___x_1416_, v___x_1417_);
v___x_1419_ = 2;
v___x_1420_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1420_, 0, v___x_1418_);
lean_ctor_set_uint8(v___x_1420_, sizeof(void*)*1, v___x_1419_);
v___x_1421_ = lean_apply_2(v_logger_1275_, v___x_1420_, lean_box(0));
goto v___jp_1412_;
}
v___jp_1422_:
{
if (v___y_1423_ == 0)
{
v___y_1415_ = v___y_1423_;
goto v___jp_1414_;
}
else
{
lean_dec(v_baseName_1321_);
lean_dec_ref(v_logger_1275_);
goto v___jp_1412_;
}
}
}
}
}
else
{
lean_object* v_putStr_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
lean_dec(v_outputsRef_x3f_1287_);
lean_dec_ref(v_outputsFile_1278_);
lean_dec_ref(v_bctx_1276_);
lean_dec_ref(v_logger_1275_);
v_putStr_1437_ = lean_ctor_get(v_out_1277_, 4);
lean_inc_ref(v_putStr_1437_);
lean_dec_ref(v_out_1277_);
v___x_1438_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16));
v___x_1439_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__0, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__0_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__0);
v___x_1440_ = lean_apply_2(v_putStr_1437_, v___x_1438_, lean_box(0));
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_dec_ref_known(v___x_1440_, 1);
goto v___jp_1284_;
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_2549__overap_1454_; lean_object* v___x_1455_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v___x_1440_, 1);
v___x_1442_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1443_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1444_ = lean_unsigned_to_nat(82u);
v___x_1445_ = lean_unsigned_to_nat(4u);
v___x_1446_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_1447_ = lean_io_error_to_string(v_a_1441_);
v___x_1448_ = lean_string_append(v___x_1446_, v___x_1447_);
lean_dec_ref(v___x_1447_);
v___x_1449_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1450_ = lean_string_append(v___x_1448_, v___x_1449_);
v___x_1451_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19);
v___x_1452_ = lean_string_append(v___x_1450_, v___x_1451_);
v___x_1453_ = l_mkPanicMessageWithDecl(v___x_1442_, v___x_1443_, v___x_1444_, v___x_1445_, v___x_1452_);
lean_dec_ref(v___x_1452_);
v___x_2549__overap_1454_ = l_panic___redArg(v___x_1439_, v___x_1453_);
v___x_1455_ = lean_apply_1(v___x_2549__overap_1454_, lean_box(0));
lean_dec(v___x_1455_);
goto v___jp_1284_;
}
}
v___jp_1280_:
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_box(0);
return v___x_1281_;
}
v___jp_1282_:
{
lean_object* v___x_1283_; 
v___x_1283_ = lean_box(0);
return v___x_1283_;
}
v___jp_1284_:
{
lean_object* v___x_1285_; 
v___x_1285_ = lean_box(0);
return v___x_1285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___boxed(lean_object* v_logger_1456_, lean_object* v_bctx_1457_, lean_object* v_out_1458_, lean_object* v_outputsFile_1459_, lean_object* v_a_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs(v_logger_1456_, v_bctx_1457_, v_out_1458_, v_outputsFile_1459_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(lean_object* v_out_1463_, lean_object* v_as_1464_, size_t v_i_1465_, size_t v_stop_1466_, lean_object* v_b_1467_){
_start:
{
lean_object* v_val_1470_; uint8_t v___x_1474_; 
v___x_1474_ = lean_usize_dec_eq(v_i_1465_, v_stop_1466_);
if (v___x_1474_ == 0)
{
lean_object* v_putStr_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v_putStr_1475_ = lean_ctor_get(v_out_1463_, 4);
v___x_1476_ = lean_array_uget_borrowed(v_as_1464_, v_i_1465_);
v___x_1477_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___closed__0));
v___x_1478_ = lean_string_append(v___x_1477_, v___x_1476_);
v___x_1479_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_reportJob___closed__0));
v___x_1480_ = lean_string_append(v___x_1478_, v___x_1479_);
lean_inc_ref(v_putStr_1475_);
lean_inc_ref(v___x_1480_);
v___x_1481_ = lean_apply_2(v_putStr_1475_, v___x_1480_, lean_box(0));
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; 
lean_dec_ref(v___x_1480_);
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
lean_dec_ref_known(v___x_1481_, 1);
v_val_1470_ = v_a_1482_;
goto v___jp_1469_;
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1506_; 
v_a_1483_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1485_ = v___x_1481_;
v_isShared_1486_ = v_isSharedCheck_1506_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1481_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1506_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1499_; 
v___x_1487_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1488_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1489_ = lean_unsigned_to_nat(82u);
v___x_1490_ = lean_unsigned_to_nat(4u);
v___x_1491_ = lean_unsigned_to_nat(0u);
v___x_1492_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_1493_ = lean_io_error_to_string(v_a_1483_);
v___x_1494_ = lean_string_append(v___x_1492_, v___x_1493_);
lean_dec_ref(v___x_1493_);
v___x_1495_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1496_ = lean_string_append(v___x_1494_, v___x_1495_);
v___x_1497_ = l_String_quote(v___x_1480_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set_tag(v___x_1485_, 3);
lean_ctor_set(v___x_1485_, 0, v___x_1497_);
v___x_1499_ = v___x_1485_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v___x_1497_);
v___x_1499_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; 
v___x_1500_ = l_Std_Format_defWidth;
v___x_1501_ = l_Std_Format_pretty(v___x_1499_, v___x_1500_, v___x_1491_, v___x_1491_);
v___x_1502_ = lean_string_append(v___x_1496_, v___x_1501_);
lean_dec_ref(v___x_1501_);
v___x_1503_ = l_mkPanicMessageWithDecl(v___x_1487_, v___x_1488_, v___x_1489_, v___x_1490_, v___x_1502_);
lean_dec_ref(v___x_1502_);
v___x_1504_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1503_);
v_val_1470_ = v___x_1504_;
goto v___jp_1469_;
}
}
}
}
else
{
lean_dec_ref(v_out_1463_);
return v_b_1467_;
}
v___jp_1469_:
{
size_t v___x_1471_; size_t v___x_1472_; 
v___x_1471_ = ((size_t)1ULL);
v___x_1472_ = lean_usize_add(v_i_1465_, v___x_1471_);
v_i_1465_ = v___x_1472_;
v_b_1467_ = v_val_1470_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0___boxed(lean_object* v_out_1507_, lean_object* v_as_1508_, lean_object* v_i_1509_, lean_object* v_stop_1510_, lean_object* v_b_1511_, lean_object* v___y_1512_){
_start:
{
size_t v_i_boxed_1513_; size_t v_stop_boxed_1514_; lean_object* v_res_1515_; 
v_i_boxed_1513_ = lean_unbox_usize(v_i_1509_);
lean_dec(v_i_1509_);
v_stop_boxed_1514_ = lean_unbox_usize(v_stop_1510_);
lean_dec(v_stop_1510_);
v_res_1515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1507_, v_as_1508_, v_i_boxed_1513_, v_stop_boxed_1514_, v_b_1511_);
lean_dec_ref(v_as_1508_);
return v_res_1515_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__1(void){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1517_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__0));
v___x_1518_ = l_String_quote(v___x_1517_);
return v___x_1518_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__2(void){
_start:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__1, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__1_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__1);
v___x_1520_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1519_);
return v___x_1520_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__3(void){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1521_ = lean_unsigned_to_nat(0u);
v___x_1522_ = l_Std_Format_defWidth;
v___x_1523_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__2, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__2_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__2);
v___x_1524_ = l_Std_Format_pretty(v___x_1523_, v___x_1522_, v___x_1521_, v___x_1521_);
return v___x_1524_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__10(void){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__9));
v___x_1532_ = l_String_quote(v___x_1531_);
return v___x_1532_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__11(void){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__10, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__10);
v___x_1534_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
return v___x_1534_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__12(void){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1535_ = lean_unsigned_to_nat(0u);
v___x_1536_ = l_Std_Format_defWidth;
v___x_1537_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__11, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__11_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__11);
v___x_1538_ = l_Std_Format_pretty(v___x_1537_, v___x_1536_, v___x_1535_, v___x_1535_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult(lean_object* v_cfg_1539_, lean_object* v_out_1540_, lean_object* v_result_1541_){
_start:
{
lean_object* v_failures_1545_; lean_object* v_numJobs_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; uint8_t v___x_1549_; 
v_failures_1545_ = lean_ctor_get(v_result_1541_, 0);
lean_inc_ref(v_failures_1545_);
v_numJobs_1546_ = lean_ctor_get(v_result_1541_, 1);
lean_inc(v_numJobs_1546_);
lean_dec_ref(v_result_1541_);
v___x_1547_ = lean_array_get_size(v_failures_1545_);
v___x_1548_ = lean_unsigned_to_nat(0u);
v___x_1549_ = lean_nat_dec_eq(v___x_1547_, v___x_1548_);
if (v___x_1549_ == 0)
{
lean_object* v_flush_1550_; lean_object* v_putStr_1551_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
lean_dec(v_numJobs_1546_);
v_flush_1550_ = lean_ctor_get(v_out_1540_, 0);
lean_inc_ref(v_flush_1550_);
v_putStr_1551_ = lean_ctor_get(v_out_1540_, 4);
v___x_1562_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__0));
lean_inc_ref(v_putStr_1551_);
v___x_1563_ = lean_apply_2(v_putStr_1551_, v___x_1562_, lean_box(0));
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_dec_ref_known(v___x_1563_, 1);
goto v___jp_1556_;
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v_a_1564_ = lean_ctor_get(v___x_1563_, 0);
lean_inc(v_a_1564_);
lean_dec_ref_known(v___x_1563_, 1);
v___x_1565_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1566_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1567_ = lean_unsigned_to_nat(82u);
v___x_1568_ = lean_unsigned_to_nat(4u);
v___x_1569_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_1570_ = lean_io_error_to_string(v_a_1564_);
v___x_1571_ = lean_string_append(v___x_1569_, v___x_1570_);
lean_dec_ref(v___x_1570_);
v___x_1572_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1573_ = lean_string_append(v___x_1571_, v___x_1572_);
v___x_1574_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__3, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__3_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__3);
v___x_1575_ = lean_string_append(v___x_1573_, v___x_1574_);
v___x_1576_ = l_mkPanicMessageWithDecl(v___x_1565_, v___x_1566_, v___x_1567_, v___x_1568_, v___x_1575_);
lean_dec_ref(v___x_1575_);
v___x_1577_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1576_);
goto v___jp_1556_;
}
v___jp_1552_:
{
lean_object* v___x_1553_; 
v___x_1553_ = lean_apply_1(v_flush_1550_, lean_box(0));
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v_a_1554_; 
v_a_1554_ = lean_ctor_get(v___x_1553_, 0);
lean_inc(v_a_1554_);
lean_dec_ref_known(v___x_1553_, 1);
return v_a_1554_;
}
else
{
lean_object* v___x_1555_; 
lean_dec_ref_known(v___x_1553_, 1);
v___x_1555_ = lean_box(0);
return v___x_1555_;
}
}
v___jp_1556_:
{
uint8_t v___x_1557_; 
v___x_1557_ = lean_nat_dec_lt(v___x_1548_, v___x_1547_);
if (v___x_1557_ == 0)
{
lean_dec_ref(v_failures_1545_);
lean_dec_ref(v_out_1540_);
goto v___jp_1552_;
}
else
{
lean_object* v___x_1558_; size_t v___x_1559_; size_t v___x_1560_; lean_object* v___x_1561_; 
v___x_1558_ = lean_box(0);
v___x_1559_ = ((size_t)0ULL);
v___x_1560_ = lean_usize_of_nat(v___x_1547_);
v___x_1561_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_reportResult_spec__0(v_out_1540_, v_failures_1545_, v___x_1559_, v___x_1560_, v___x_1558_);
lean_dec_ref(v_failures_1545_);
goto v___jp_1552_;
}
}
}
else
{
uint8_t v___x_1578_; 
lean_dec_ref(v_failures_1545_);
v___x_1578_ = l_Lake_BuildConfig_showProgress(v_cfg_1539_);
if (v___x_1578_ == 0)
{
lean_dec(v_numJobs_1546_);
lean_dec_ref(v_out_1540_);
goto v___jp_1543_;
}
else
{
uint8_t v_noBuild_1579_; uint8_t v_showSuccess_1580_; lean_object* v___y_1582_; 
v_noBuild_1579_ = lean_ctor_get_uint8(v_cfg_1539_, sizeof(void*)*5 + 2);
v_showSuccess_1580_ = lean_ctor_get_uint8(v_cfg_1539_, sizeof(void*)*5 + 5);
if (v_showSuccess_1580_ == 0)
{
lean_dec(v_numJobs_1546_);
lean_dec_ref(v_out_1540_);
goto v___jp_1543_;
}
else
{
uint8_t v___x_1653_; 
v___x_1653_ = lean_nat_dec_eq(v_numJobs_1546_, v___x_1548_);
if (v___x_1653_ == 0)
{
lean_object* v___x_1654_; uint8_t v___x_1655_; 
v___x_1654_ = lean_unsigned_to_nat(1u);
v___x_1655_ = lean_nat_dec_eq(v_numJobs_1546_, v___x_1654_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1656_ = l_Nat_reprFast(v_numJobs_1546_);
v___x_1657_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__7));
v___x_1658_ = lean_string_append(v___x_1656_, v___x_1657_);
v___y_1582_ = v___x_1658_;
goto v___jp_1581_;
}
else
{
lean_object* v___x_1659_; 
lean_dec(v_numJobs_1546_);
v___x_1659_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__8));
v___y_1582_ = v___x_1659_;
goto v___jp_1581_;
}
}
else
{
lean_object* v_putStr_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
lean_dec(v_numJobs_1546_);
v_putStr_1660_ = lean_ctor_get(v_out_1540_, 4);
lean_inc_ref(v_putStr_1660_);
lean_dec_ref(v_out_1540_);
v___x_1661_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__9));
v___x_1662_ = lean_apply_2(v_putStr_1660_, v___x_1661_, lean_box(0));
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref_known(v___x_1662_, 1);
return v_a_1663_;
}
else
{
lean_object* v_a_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v_a_1664_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1662_, 1);
v___x_1665_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1666_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1667_ = lean_unsigned_to_nat(82u);
v___x_1668_ = lean_unsigned_to_nat(4u);
v___x_1669_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1670_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_1671_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1670_, v___x_1653_);
v___x_1672_ = lean_string_append(v___x_1669_, v___x_1671_);
lean_dec_ref(v___x_1671_);
v___x_1673_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_1674_ = lean_string_append(v___x_1672_, v___x_1673_);
v___x_1675_ = lean_io_error_to_string(v_a_1664_);
v___x_1676_ = lean_string_append(v___x_1674_, v___x_1675_);
lean_dec_ref(v___x_1675_);
v___x_1677_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1678_ = lean_string_append(v___x_1676_, v___x_1677_);
v___x_1679_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_reportResult___closed__12, &l___private_Lake_Build_Run_0__Lake_reportResult___closed__12_once, _init_l___private_Lake_Build_Run_0__Lake_reportResult___closed__12);
v___x_1680_ = lean_string_append(v___x_1678_, v___x_1679_);
v___x_1681_ = l_mkPanicMessageWithDecl(v___x_1665_, v___x_1666_, v___x_1667_, v___x_1668_, v___x_1680_);
lean_dec_ref(v___x_1680_);
v___x_1682_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1681_);
return v___x_1682_;
}
}
}
v___jp_1581_:
{
if (v_noBuild_1579_ == 0)
{
lean_object* v_putStr_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v_putStr_1583_ = lean_ctor_get(v_out_1540_, 4);
lean_inc_ref(v_putStr_1583_);
lean_dec_ref(v_out_1540_);
v___x_1584_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__4));
v___x_1585_ = lean_string_append(v___x_1584_, v___y_1582_);
lean_dec_ref(v___y_1582_);
v___x_1586_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__5));
v___x_1587_ = lean_string_append(v___x_1585_, v___x_1586_);
lean_inc_ref(v___x_1587_);
v___x_1588_ = lean_apply_2(v_putStr_1583_, v___x_1587_, lean_box(0));
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v_a_1589_; 
lean_dec_ref(v___x_1587_);
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_a_1589_);
lean_dec_ref_known(v___x_1588_, 1);
return v_a_1589_;
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1617_; 
v_a_1590_ = lean_ctor_get(v___x_1588_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1592_ = v___x_1588_;
v_isShared_1593_ = v_isSharedCheck_1617_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1588_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1617_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1610_; 
v___x_1594_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1595_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1596_ = lean_unsigned_to_nat(82u);
v___x_1597_ = lean_unsigned_to_nat(4u);
v___x_1598_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1599_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_1600_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1599_, v_showSuccess_1580_);
v___x_1601_ = lean_string_append(v___x_1598_, v___x_1600_);
lean_dec_ref(v___x_1600_);
v___x_1602_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_1603_ = lean_string_append(v___x_1601_, v___x_1602_);
v___x_1604_ = lean_io_error_to_string(v_a_1590_);
v___x_1605_ = lean_string_append(v___x_1603_, v___x_1604_);
lean_dec_ref(v___x_1604_);
v___x_1606_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1607_ = lean_string_append(v___x_1605_, v___x_1606_);
v___x_1608_ = l_String_quote(v___x_1587_);
if (v_isShared_1593_ == 0)
{
lean_ctor_set_tag(v___x_1592_, 3);
lean_ctor_set(v___x_1592_, 0, v___x_1608_);
v___x_1610_ = v___x_1592_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v___x_1608_);
v___x_1610_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1611_ = l_Std_Format_defWidth;
v___x_1612_ = l_Std_Format_pretty(v___x_1610_, v___x_1611_, v___x_1548_, v___x_1548_);
v___x_1613_ = lean_string_append(v___x_1607_, v___x_1612_);
lean_dec_ref(v___x_1612_);
v___x_1614_ = l_mkPanicMessageWithDecl(v___x_1594_, v___x_1595_, v___x_1596_, v___x_1597_, v___x_1613_);
lean_dec_ref(v___x_1613_);
v___x_1615_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1614_);
return v___x_1615_;
}
}
}
}
else
{
lean_object* v_putStr_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v_putStr_1618_ = lean_ctor_get(v_out_1540_, 4);
lean_inc_ref(v_putStr_1618_);
lean_dec_ref(v_out_1540_);
v___x_1619_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__6));
v___x_1620_ = lean_string_append(v___x_1619_, v___y_1582_);
lean_dec_ref(v___y_1582_);
v___x_1621_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_reportResult___closed__5));
v___x_1622_ = lean_string_append(v___x_1620_, v___x_1621_);
lean_inc_ref(v___x_1622_);
v___x_1623_ = lean_apply_2(v_putStr_1618_, v___x_1622_, lean_box(0));
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; 
lean_dec_ref(v___x_1622_);
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
return v_a_1624_;
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1652_; 
v_a_1625_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1627_ = v___x_1623_;
v_isShared_1628_ = v_isSharedCheck_1652_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1623_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1652_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1645_; 
v___x_1629_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_1630_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_1631_ = lean_unsigned_to_nat(82u);
v___x_1632_ = lean_unsigned_to_nat(4u);
v___x_1633_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_1634_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_1635_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1634_, v_noBuild_1579_);
v___x_1636_ = lean_string_append(v___x_1633_, v___x_1635_);
lean_dec_ref(v___x_1635_);
v___x_1637_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_1638_ = lean_string_append(v___x_1636_, v___x_1637_);
v___x_1639_ = lean_io_error_to_string(v_a_1625_);
v___x_1640_ = lean_string_append(v___x_1638_, v___x_1639_);
lean_dec_ref(v___x_1639_);
v___x_1641_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_1642_ = lean_string_append(v___x_1640_, v___x_1641_);
v___x_1643_ = l_String_quote(v___x_1622_);
if (v_isShared_1628_ == 0)
{
lean_ctor_set_tag(v___x_1627_, 3);
lean_ctor_set(v___x_1627_, 0, v___x_1643_);
v___x_1645_ = v___x_1627_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1643_);
v___x_1645_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1646_ = l_Std_Format_defWidth;
v___x_1647_ = l_Std_Format_pretty(v___x_1645_, v___x_1646_, v___x_1548_, v___x_1548_);
v___x_1648_ = lean_string_append(v___x_1642_, v___x_1647_);
lean_dec_ref(v___x_1647_);
v___x_1649_ = l_mkPanicMessageWithDecl(v___x_1629_, v___x_1630_, v___x_1631_, v___x_1632_, v___x_1648_);
lean_dec_ref(v___x_1648_);
v___x_1650_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_1649_);
return v___x_1650_;
}
}
}
}
}
}
}
v___jp_1543_:
{
lean_object* v___x_1544_; 
v___x_1544_ = lean_box(0);
return v___x_1544_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_reportResult___boxed(lean_object* v_cfg_1683_, lean_object* v_out_1684_, lean_object* v_result_1685_, lean_object* v_a_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l___private_Lake_Build_Run_0__Lake_reportResult(v_cfg_1683_, v_out_1684_, v_result_1685_);
lean_dec_ref(v_cfg_1683_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0(lean_object* v_self_1688_){
_start:
{
lean_object* v_toMonitorResult_1689_; 
v_toMonitorResult_1689_ = lean_ctor_get(v_self_1688_, 0);
lean_inc_ref(v_toMonitorResult_1689_);
return v_toMonitorResult_1689_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0___boxed(lean_object* v_self_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___lam__0(v_self_1690_);
lean_dec_ref(v_self_1690_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg(){
_start:
{
lean_object* v___f_1694_; 
v___f_1694_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0));
return v___f_1694_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___boxed(lean_object* v___dummy_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg();
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult(lean_object* v_00_u03b1_1697_){
_start:
{
lean_object* v___f_1698_; 
v___f_1698_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_instCoeOutBuildResultMonitorResult___redArg___closed__0));
return v___f_1698_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg(lean_object* v_self_1699_){
_start:
{
lean_object* v_out_1700_; 
v_out_1700_ = lean_ctor_get(v_self_1699_, 1);
if (lean_obj_tag(v_out_1700_) == 0)
{
uint8_t v___x_1701_; 
v___x_1701_ = 0;
return v___x_1701_;
}
else
{
uint8_t v___x_1702_; 
v___x_1702_ = 1;
return v___x_1702_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg___boxed(lean_object* v_self_1703_){
_start:
{
uint8_t v_res_1704_; lean_object* v_r_1705_; 
v_res_1704_ = l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___redArg(v_self_1703_);
lean_dec_ref(v_self_1703_);
v_r_1705_ = lean_box(v_res_1704_);
return v_r_1705_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Build_Run_0__Lake_BuildResult_isOk(lean_object* v_00_u03b1_1706_, lean_object* v_self_1707_){
_start:
{
lean_object* v_out_1708_; 
v_out_1708_ = lean_ctor_get(v_self_1707_, 1);
if (lean_obj_tag(v_out_1708_) == 0)
{
uint8_t v___x_1709_; 
v___x_1709_ = 0;
return v___x_1709_;
}
else
{
uint8_t v___x_1710_; 
v___x_1710_ = 1;
return v___x_1710_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildResult_isOk___boxed(lean_object* v_00_u03b1_1711_, lean_object* v_self_1712_){
_start:
{
uint8_t v_res_1713_; lean_object* v_r_1714_; 
v_res_1713_ = l___private_Lake_Build_Run_0__Lake_BuildResult_isOk(v_00_u03b1_1711_, v_self_1712_);
lean_dec_ref(v_self_1712_);
v_r_1714_ = lean_box(v_res_1713_);
return v_r_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(lean_object* v_ctx_1723_, lean_object* v_job_1724_){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v_failures_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
lean_inc_ref(v_job_1724_);
v___x_1726_ = l_Lake_Job_toOpaque___redArg(v_job_1724_);
v___x_1727_ = lean_unsigned_to_nat(1u);
v___x_1728_ = lean_mk_empty_array_with_capacity(v___x_1727_);
v___x_1729_ = lean_array_push(v___x_1728_, v___x_1726_);
v___x_1730_ = lean_unsigned_to_nat(0u);
v___x_1731_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__0));
v___x_1732_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_renderProgress___redArg___closed__1));
v___x_1733_ = l___private_Lake_Build_Run_0__Lake_monitorJobs_x27(v_ctx_1723_, v___x_1729_, v___x_1731_, v___x_1732_);
v_failures_1734_ = lean_ctor_get(v___x_1733_, 0);
v___x_1735_ = lean_array_get_size(v_failures_1734_);
v___x_1736_ = lean_nat_dec_eq(v___x_1735_, v___x_1730_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; lean_object* v___x_1738_; 
lean_dec_ref(v_job_1724_);
v___x_1737_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__2));
v___x_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1733_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
return v___x_1738_;
}
else
{
lean_object* v_task_1739_; lean_object* v___x_1740_; 
v_task_1739_ = lean_ctor_get(v_job_1724_, 0);
lean_inc_ref(v_task_1739_);
lean_dec_ref(v_job_1724_);
v___x_1740_ = lean_io_wait(v_task_1739_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1749_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1749_ == 0)
{
lean_object* v_unused_1750_; 
v_unused_1750_ = lean_ctor_get(v___x_1740_, 1);
lean_dec(v_unused_1750_);
v___x_1743_ = v___x_1740_;
v_isShared_1744_ = v_isSharedCheck_1749_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1740_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1749_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1745_; lean_object* v___x_1747_; 
v___x_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1745_, 0, v_a_1741_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 1, v___x_1745_);
lean_ctor_set(v___x_1743_, 0, v___x_1733_);
v___x_1747_ = v___x_1743_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v___x_1733_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v___x_1745_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
else
{
lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1758_; 
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1758_ == 0)
{
lean_object* v_unused_1759_; lean_object* v_unused_1760_; 
v_unused_1759_ = lean_ctor_get(v___x_1740_, 1);
lean_dec(v_unused_1759_);
v_unused_1760_ = lean_ctor_get(v___x_1740_, 0);
lean_dec(v_unused_1760_);
v___x_1752_ = v___x_1740_;
v_isShared_1753_ = v_isSharedCheck_1758_;
goto v_resetjp_1751_;
}
else
{
lean_dec(v___x_1740_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1758_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1754_; lean_object* v___x_1756_; 
v___x_1754_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___closed__4));
if (v_isShared_1753_ == 0)
{
lean_ctor_set_tag(v___x_1752_, 0);
lean_ctor_set(v___x_1752_, 1, v___x_1754_);
lean_ctor_set(v___x_1752_, 0, v___x_1733_);
v___x_1756_ = v___x_1752_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v___x_1733_);
lean_ctor_set(v_reuseFailAlloc_1757_, 1, v___x_1754_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___redArg___boxed(lean_object* v_ctx_1761_, lean_object* v_job_1762_, lean_object* v_a_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_ctx_1761_, v_job_1762_);
lean_dec_ref(v_ctx_1761_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob(lean_object* v_00_u03b1_1765_, lean_object* v_ctx_1766_, lean_object* v_job_1767_){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_ctx_1766_, v_job_1767_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorJob___boxed(lean_object* v_00_u03b1_1770_, lean_object* v_ctx_1771_, lean_object* v_job_1772_, lean_object* v_a_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l___private_Lake_Build_Run_0__Lake_monitorJob(v_00_u03b1_1770_, v_ctx_1771_, v_job_1772_);
lean_dec_ref(v_ctx_1771_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(lean_object* v_info_1777_){
_start:
{
lean_object* v___x_1779_; 
v___x_1779_ = l_Lake_computeTextFileHash(v_info_1777_);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v_a_1780_; lean_object* v___x_1781_; 
v_a_1780_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_a_1780_);
lean_dec_ref_known(v___x_1779_, 1);
v___x_1781_ = lean_io_metadata(v_info_1777_);
if (lean_obj_tag(v___x_1781_) == 0)
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1793_; 
v_a_1782_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1784_ = v___x_1781_;
v_isShared_1785_ = v_isSharedCheck_1793_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1781_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1793_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v_modified_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; uint64_t v___x_1789_; lean_object* v___x_1791_; 
v_modified_1786_ = lean_ctor_get(v_a_1782_, 1);
lean_inc_ref(v_modified_1786_);
lean_dec(v_a_1782_);
v___x_1787_ = ((lean_object*)(l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0));
v___x_1788_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1788_, 0, v_info_1777_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
lean_ctor_set(v___x_1788_, 2, v_modified_1786_);
v___x_1789_ = lean_unbox_uint64(v_a_1780_);
lean_dec(v_a_1780_);
lean_ctor_set_uint64(v___x_1788_, sizeof(void*)*3, v___x_1789_);
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 0, v___x_1788_);
v___x_1791_ = v___x_1784_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1788_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec(v_a_1780_);
lean_dec_ref(v_info_1777_);
v_a_1794_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1781_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1781_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
lean_dec_ref(v_info_1777_);
v_a_1802_ = lean_ctor_get(v___x_1779_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1779_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1779_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1779_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___boxed(lean_object* v_info_1810_, lean_object* v_a_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(v_info_1810_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(lean_object* v___x_1816_, lean_object* v_as_1817_, size_t v_sz_1818_, size_t v_i_1819_, lean_object* v_b_1820_){
_start:
{
lean_object* v_a_1823_; uint8_t v___x_1827_; 
v___x_1827_ = lean_usize_dec_lt(v_i_1819_, v_sz_1818_);
if (v___x_1827_ == 0)
{
lean_dec_ref(v___x_1816_);
return v_b_1820_;
}
else
{
lean_object* v_snd_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1851_; 
v_snd_1828_ = lean_ctor_get(v_b_1820_, 1);
v_isSharedCheck_1851_ = !lean_is_exclusive(v_b_1820_);
if (v_isSharedCheck_1851_ == 0)
{
lean_object* v_unused_1852_; 
v_unused_1852_ = lean_ctor_get(v_b_1820_, 0);
lean_dec(v_unused_1852_);
v___x_1830_ = v_b_1820_;
v_isShared_1831_ = v_isSharedCheck_1851_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_snd_1828_);
lean_dec(v_b_1820_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1851_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1832_; lean_object* v_a_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1832_ = lean_box(0);
v_a_1833_ = lean_array_uget_borrowed(v_as_1817_, v_i_1819_);
v___x_1834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__0));
lean_inc_ref(v___x_1816_);
v___x_1835_ = l_Lake_joinRelative(v___x_1816_, v___x_1834_);
lean_inc(v_a_1833_);
v___x_1836_ = l_Lake_joinRelative(v___x_1835_, v_a_1833_);
v___x_1837_ = l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0(v___x_1836_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1839_; lean_object* v___x_1841_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1837_, 1);
v___x_1839_ = l_Lake_BuildTrace_mix(v_snd_1828_, v_a_1838_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 1, v___x_1839_);
lean_ctor_set(v___x_1830_, 0, v___x_1832_);
v___x_1841_ = v___x_1830_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1832_);
lean_ctor_set(v_reuseFailAlloc_1842_, 1, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
v_a_1823_ = v___x_1841_;
goto v___jp_1822_;
}
}
else
{
lean_object* v_a_1843_; 
v_a_1843_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1843_);
lean_dec_ref_known(v___x_1837_, 1);
if (lean_obj_tag(v_a_1843_) == 11)
{
lean_object* v___x_1845_; 
lean_dec_ref_known(v_a_1843_, 2);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 0, v___x_1832_);
v___x_1845_ = v___x_1830_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v___x_1832_);
lean_ctor_set(v_reuseFailAlloc_1846_, 1, v_snd_1828_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
v_a_1823_ = v___x_1845_;
goto v___jp_1822_;
}
}
else
{
lean_object* v___x_1847_; lean_object* v___x_1849_; 
lean_dec(v_a_1843_);
lean_dec_ref(v___x_1816_);
v___x_1847_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___closed__1));
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 0, v___x_1847_);
v___x_1849_ = v___x_1830_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1847_);
lean_ctor_set(v_reuseFailAlloc_1850_, 1, v_snd_1828_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
}
v___jp_1822_:
{
size_t v___x_1824_; size_t v___x_1825_; 
v___x_1824_ = ((size_t)1ULL);
v___x_1825_ = lean_usize_add(v_i_1819_, v___x_1824_);
v_i_1819_ = v___x_1825_;
v_b_1820_ = v_a_1823_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1___boxed(lean_object* v___x_1853_, lean_object* v_as_1854_, lean_object* v_sz_1855_, lean_object* v_i_1856_, lean_object* v_b_1857_, lean_object* v___y_1858_){
_start:
{
size_t v_sz_boxed_1859_; size_t v_i_boxed_1860_; lean_object* v_res_1861_; 
v_sz_boxed_1859_ = lean_unbox_usize(v_sz_1855_);
lean_dec(v_sz_1855_);
v_i_boxed_1860_ = lean_unbox_usize(v_i_1856_);
lean_dec(v_i_1856_);
v_res_1861_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(v___x_1853_, v_as_1854_, v_sz_boxed_1859_, v_i_boxed_1860_, v_b_1857_);
lean_dec_ref(v_as_1854_);
return v_res_1861_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1864_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__1));
v___x_1865_ = l_Lake_BuildTrace_nil(v___x_1864_);
return v___x_1865_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8(void){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1880_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__2);
v___x_1881_ = lean_box(0);
v___x_1882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1881_);
lean_ctor_set(v___x_1882_, 1, v___x_1880_);
return v___x_1882_;
}
}
static size_t _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9(void){
_start:
{
lean_object* v___x_1883_; size_t v_sz_1884_; 
v___x_1883_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7));
v_sz_1884_ = lean_array_size(v___x_1883_);
return v_sz_1884_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(size_t v_sz_1885_, size_t v_i_1886_, lean_object* v_bs_1887_){
_start:
{
uint8_t v___x_1889_; 
v___x_1889_ = lean_usize_dec_lt(v_i_1886_, v_sz_1885_);
if (v___x_1889_ == 0)
{
return v_bs_1887_;
}
else
{
lean_object* v_v_1890_; lean_object* v_config_1891_; lean_object* v_dir_1892_; uint8_t v_bootstrap_1893_; lean_object* v_buildDir_1894_; lean_object* v___x_1895_; lean_object* v_bs_x27_1896_; lean_object* v_val_1898_; 
v_v_1890_ = lean_array_uget_borrowed(v_bs_1887_, v_i_1886_);
v_config_1891_ = lean_ctor_get(v_v_1890_, 6);
v_dir_1892_ = lean_ctor_get(v_v_1890_, 4);
lean_inc_ref(v_dir_1892_);
v_bootstrap_1893_ = lean_ctor_get_uint8(v_config_1891_, sizeof(void*)*28);
v_buildDir_1894_ = lean_ctor_get(v_config_1891_, 5);
lean_inc_ref(v_buildDir_1894_);
v___x_1895_ = lean_unsigned_to_nat(0u);
v_bs_x27_1896_ = lean_array_uset(v_bs_1887_, v_i_1886_, v___x_1895_);
if (v_bootstrap_1893_ == 0)
{
lean_object* v___x_1903_; 
lean_dec_ref(v_buildDir_1894_);
lean_dec_ref(v_dir_1892_);
v___x_1903_ = lean_box(0);
v_val_1898_ = v___x_1903_;
goto v___jp_1897_;
}
else
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; size_t v_sz_1910_; size_t v___x_1911_; lean_object* v___x_1912_; lean_object* v_fst_1913_; 
v___x_1904_ = l_System_FilePath_normalize(v_buildDir_1894_);
v___x_1905_ = l_Lake_joinRelative(v_dir_1892_, v___x_1904_);
v___x_1906_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__0));
v___x_1907_ = l_Lake_joinRelative(v___x_1905_, v___x_1906_);
v___x_1908_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__7));
v___x_1909_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__8);
v_sz_1910_ = lean_usize_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___closed__9);
v___x_1911_ = ((size_t)0ULL);
lean_inc_ref(v___x_1907_);
v___x_1912_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__1(v___x_1907_, v___x_1908_, v_sz_1910_, v___x_1911_, v___x_1909_);
v_fst_1913_ = lean_ctor_get(v___x_1912_, 0);
if (lean_obj_tag(v_fst_1913_) == 0)
{
lean_object* v_snd_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1922_; 
v_snd_1914_ = lean_ctor_get(v___x_1912_, 1);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1922_ == 0)
{
lean_object* v_unused_1923_; 
v_unused_1923_ = lean_ctor_get(v___x_1912_, 0);
lean_dec(v_unused_1923_);
v___x_1916_ = v___x_1912_;
v_isShared_1917_ = v_isSharedCheck_1922_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_snd_1914_);
lean_dec(v___x_1912_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1922_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 0, v___x_1907_);
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v___x_1907_);
lean_ctor_set(v_reuseFailAlloc_1921_, 1, v_snd_1914_);
v___x_1919_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
lean_object* v___x_1920_; 
v___x_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1920_, 0, v___x_1919_);
v_val_1898_ = v___x_1920_;
goto v___jp_1897_;
}
}
}
else
{
lean_object* v_val_1924_; 
lean_inc_ref(v_fst_1913_);
lean_dec_ref(v___x_1912_);
lean_dec_ref(v___x_1907_);
v_val_1924_ = lean_ctor_get(v_fst_1913_, 0);
lean_inc(v_val_1924_);
lean_dec_ref_known(v_fst_1913_, 1);
v_val_1898_ = v_val_1924_;
goto v___jp_1897_;
}
}
v___jp_1897_:
{
size_t v___x_1899_; size_t v___x_1900_; lean_object* v___x_1901_; 
v___x_1899_ = ((size_t)1ULL);
v___x_1900_ = lean_usize_add(v_i_1886_, v___x_1899_);
v___x_1901_ = lean_array_uset(v_bs_x27_1896_, v_i_1886_, v_val_1898_);
v_i_1886_ = v___x_1900_;
v_bs_1887_ = v___x_1901_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2___boxed(lean_object* v_sz_1925_, lean_object* v_i_1926_, lean_object* v_bs_1927_, lean_object* v___y_1928_){
_start:
{
size_t v_sz_boxed_1929_; size_t v_i_boxed_1930_; lean_object* v_res_1931_; 
v_sz_boxed_1929_ = lean_unbox_usize(v_sz_1925_);
lean_dec(v_sz_1925_);
v_i_boxed_1930_ = lean_unbox_usize(v_i_1926_);
lean_dec(v_i_1926_);
v_res_1931_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(v_sz_boxed_1929_, v_i_boxed_1930_, v_bs_1927_);
return v_res_1931_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1(void){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1933_ = l_Lean_versionStringCore;
v___x_1934_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__0));
v___x_1935_ = lean_string_append(v___x_1934_, v___x_1933_);
return v___x_1935_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3(void){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1937_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__2));
v___x_1938_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__1);
v___x_1939_ = lean_string_append(v___x_1938_, v___x_1937_);
return v___x_1939_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4(void){
_start:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_unsigned_to_nat(0u);
v___x_1941_ = lean_nat_to_int(v___x_1940_);
return v___x_1941_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5(void){
_start:
{
uint32_t v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1942_ = 0;
v___x_1943_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__4);
v___x_1944_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_1944_, 0, v___x_1943_);
lean_ctor_set_uint32(v___x_1944_, sizeof(void*)*1, v___x_1942_);
return v___x_1944_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6(void){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
v___x_1945_ = lean_box(0);
v___x_1946_ = lean_unsigned_to_nat(16u);
v___x_1947_ = lean_mk_array(v___x_1946_, v___x_1945_);
return v___x_1947_;
}
}
static lean_object* _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7(void){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; 
v___x_1948_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__6);
v___x_1949_ = lean_unsigned_to_nat(0u);
v___x_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
lean_ctor_set(v___x_1950_, 1, v___x_1948_);
return v___x_1950_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext(lean_object* v_ws_1953_, lean_object* v_cfg_1954_, lean_object* v_jobs_1955_, lean_object* v_cancelTk_x3f_1956_){
_start:
{
lean_object* v___y_1959_; uint8_t v___y_1960_; uint8_t v___y_1961_; uint8_t v___y_1962_; lean_object* v___y_1963_; lean_object* v___y_1964_; uint8_t v___y_1965_; lean_object* v___y_1966_; uint8_t v___y_1967_; lean_object* v___y_1968_; uint8_t v___y_1969_; lean_object* v_val_1970_; lean_object* v___y_1988_; uint8_t v___y_1989_; uint8_t v___y_1990_; uint8_t v___y_1991_; lean_object* v___y_1992_; uint8_t v___y_1993_; lean_object* v___y_1994_; uint8_t v___y_1995_; lean_object* v___y_1996_; lean_object* v___y_1997_; uint8_t v___y_1998_; lean_object* v_val_2001_; uint8_t v___x_2027_; 
v___x_2027_ = l_System_Platform_isOSX;
if (v___x_2027_ == 0)
{
lean_object* v_macosxDeploymentTarget_x3f_2028_; 
v_macosxDeploymentTarget_x3f_2028_ = lean_ctor_get(v_cfg_1954_, 4);
lean_inc(v_macosxDeploymentTarget_x3f_2028_);
v_val_2001_ = v_macosxDeploymentTarget_x3f_2028_;
goto v___jp_2000_;
}
else
{
lean_object* v_macosxDeploymentTarget_x3f_2029_; 
v_macosxDeploymentTarget_x3f_2029_ = lean_ctor_get(v_cfg_1954_, 4);
if (lean_obj_tag(v_macosxDeploymentTarget_x3f_2029_) == 0)
{
lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___y_2033_; 
v___x_2030_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__8));
v___x_2031_ = lean_io_getenv(v___x_2030_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_object* v___x_2035_; 
v___x_2035_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__9));
v___y_2033_ = v___x_2035_;
goto v___jp_2032_;
}
else
{
lean_object* v_val_2036_; 
v_val_2036_ = lean_ctor_get(v___x_2031_, 0);
lean_inc(v_val_2036_);
lean_dec_ref_known(v___x_2031_, 1);
v___y_2033_ = v_val_2036_;
goto v___jp_2032_;
}
v___jp_2032_:
{
lean_object* v___x_2034_; 
v___x_2034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2034_, 0, v___y_2033_);
v_val_2001_ = v___x_2034_;
goto v___jp_2000_;
}
}
else
{
lean_inc_ref(v_macosxDeploymentTarget_x3f_2029_);
v_val_2001_ = v_macosxDeploymentTarget_x3f_2029_;
goto v___jp_2000_;
}
}
v___jp_1958_:
{
lean_object* v_lakeEnv_1971_; lean_object* v_packages_1972_; size_t v_sz_1973_; size_t v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; uint64_t v___x_1978_; uint64_t v___x_1979_; uint64_t v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v_lakeEnv_1971_ = lean_ctor_get(v_ws_1953_, 0);
v_packages_1972_ = lean_ctor_get(v_ws_1953_, 4);
v_sz_1973_ = lean_array_size(v_packages_1972_);
v___x_1974_ = ((size_t)0ULL);
lean_inc_ref(v_packages_1972_);
v___x_1975_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__2(v_sz_1973_, v___x_1974_, v_packages_1972_);
v___x_1976_ = lean_alloc_ctor(0, 5, 6);
lean_ctor_set(v___x_1976_, 0, v___y_1963_);
lean_ctor_set(v___x_1976_, 1, v___y_1966_);
lean_ctor_set(v___x_1976_, 2, v___y_1959_);
lean_ctor_set(v___x_1976_, 3, v___y_1964_);
lean_ctor_set(v___x_1976_, 4, v___y_1968_);
lean_ctor_set_uint8(v___x_1976_, sizeof(void*)*5, v___y_1965_);
lean_ctor_set_uint8(v___x_1976_, sizeof(void*)*5 + 1, v___y_1961_);
lean_ctor_set_uint8(v___x_1976_, sizeof(void*)*5 + 2, v___y_1960_);
lean_ctor_set_uint8(v___x_1976_, sizeof(void*)*5 + 3, v___y_1962_);
lean_ctor_set_uint8(v___x_1976_, sizeof(void*)*5 + 4, v___y_1969_);
lean_ctor_set_uint8(v___x_1976_, sizeof(void*)*5 + 5, v___y_1967_);
v___x_1977_ = l_Lake_Env_leanGithash(v_lakeEnv_1971_);
v___x_1978_ = l_Lake_Hash_nil;
v___x_1979_ = lean_string_hash(v___x_1977_);
v___x_1980_ = lean_uint64_mix_hash(v___x_1978_, v___x_1979_);
v___x_1981_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__3);
v___x_1982_ = lean_string_append(v___x_1981_, v___x_1977_);
lean_dec_ref(v___x_1977_);
v___x_1983_ = ((lean_object*)(l_Lake_BuildTrace_compute___at___00__private_Lake_Build_Run_0__Lake_mkBuildContext_spec__0___closed__0));
v___x_1984_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__5);
v___x_1985_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1985_, 0, v___x_1982_);
lean_ctor_set(v___x_1985_, 1, v___x_1983_);
lean_ctor_set(v___x_1985_, 2, v___x_1984_);
lean_ctor_set_uint64(v___x_1985_, sizeof(void*)*3, v___x_1980_);
v___x_1986_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1986_, 0, v___x_1976_);
lean_ctor_set(v___x_1986_, 1, v_ws_1953_);
lean_ctor_set(v___x_1986_, 2, v___x_1985_);
lean_ctor_set(v___x_1986_, 3, v___x_1975_);
lean_ctor_set(v___x_1986_, 4, v_jobs_1955_);
lean_ctor_set(v___x_1986_, 5, v_val_1970_);
lean_ctor_set(v___x_1986_, 6, v_cancelTk_x3f_1956_);
return v___x_1986_;
}
v___jp_1987_:
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_box(0);
v___y_1959_ = v___y_1988_;
v___y_1960_ = v___y_1989_;
v___y_1961_ = v___y_1990_;
v___y_1962_ = v___y_1991_;
v___y_1963_ = v___y_1992_;
v___y_1964_ = v___y_1994_;
v___y_1965_ = v___y_1993_;
v___y_1966_ = v___y_1996_;
v___y_1967_ = v___y_1995_;
v___y_1968_ = v___y_1997_;
v___y_1969_ = v___y_1998_;
v_val_1970_ = v___x_1999_;
goto v___jp_1958_;
}
v___jp_2000_:
{
lean_object* v_outputsFile_x3f_2002_; 
v_outputsFile_x3f_2002_ = lean_ctor_get(v_cfg_1954_, 1);
lean_inc(v_outputsFile_x3f_2002_);
if (lean_obj_tag(v_outputsFile_x3f_2002_) == 0)
{
lean_object* v_toLogConfig_2003_; uint8_t v_oldMode_2004_; uint8_t v_trustHash_2005_; uint8_t v_noBuild_2006_; uint8_t v_failFast_2007_; uint8_t v_verbosity_2008_; uint8_t v_showSuccess_2009_; lean_object* v_outputsIdx_2010_; lean_object* v_leanOptOverrides_2011_; 
v_toLogConfig_2003_ = lean_ctor_get(v_cfg_1954_, 0);
lean_inc_ref(v_toLogConfig_2003_);
v_oldMode_2004_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5);
v_trustHash_2005_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5 + 1);
v_noBuild_2006_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5 + 2);
v_failFast_2007_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5 + 3);
v_verbosity_2008_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5 + 4);
v_showSuccess_2009_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5 + 5);
v_outputsIdx_2010_ = lean_ctor_get(v_cfg_1954_, 2);
lean_inc(v_outputsIdx_2010_);
v_leanOptOverrides_2011_ = lean_ctor_get(v_cfg_1954_, 3);
lean_inc(v_leanOptOverrides_2011_);
lean_dec_ref(v_cfg_1954_);
v___y_1988_ = v_outputsIdx_2010_;
v___y_1989_ = v_noBuild_2006_;
v___y_1990_ = v_trustHash_2005_;
v___y_1991_ = v_failFast_2007_;
v___y_1992_ = v_toLogConfig_2003_;
v___y_1993_ = v_oldMode_2004_;
v___y_1994_ = v_leanOptOverrides_2011_;
v___y_1995_ = v_showSuccess_2009_;
v___y_1996_ = v_outputsFile_x3f_2002_;
v___y_1997_ = v_val_2001_;
v___y_1998_ = v_verbosity_2008_;
goto v___jp_1987_;
}
else
{
lean_object* v_toLogConfig_2012_; uint8_t v_oldMode_2013_; uint8_t v_trustHash_2014_; uint8_t v_noBuild_2015_; uint8_t v_failFast_2016_; uint8_t v_verbosity_2017_; uint8_t v_showSuccess_2018_; lean_object* v_outputsIdx_2019_; lean_object* v_leanOptOverrides_2020_; lean_object* v_packages_2021_; lean_object* v___x_2022_; uint8_t v___x_2023_; 
v_toLogConfig_2012_ = lean_ctor_get(v_cfg_1954_, 0);
lean_inc_ref(v_toLogConfig_2012_);
v_oldMode_2013_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5);
v_trustHash_2014_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5 + 1);
v_noBuild_2015_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5 + 2);
v_failFast_2016_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5 + 3);
v_verbosity_2017_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5 + 4);
v_showSuccess_2018_ = lean_ctor_get_uint8(v_cfg_1954_, sizeof(void*)*5 + 5);
v_outputsIdx_2019_ = lean_ctor_get(v_cfg_1954_, 2);
lean_inc(v_outputsIdx_2019_);
v_leanOptOverrides_2020_ = lean_ctor_get(v_cfg_1954_, 3);
lean_inc(v_leanOptOverrides_2020_);
lean_dec_ref(v_cfg_1954_);
v_packages_2021_ = lean_ctor_get(v_ws_1953_, 4);
v___x_2022_ = lean_array_get_size(v_packages_2021_);
v___x_2023_ = lean_nat_dec_lt(v_outputsIdx_2019_, v___x_2022_);
if (v___x_2023_ == 0)
{
v___y_1988_ = v_outputsIdx_2019_;
v___y_1989_ = v_noBuild_2015_;
v___y_1990_ = v_trustHash_2014_;
v___y_1991_ = v_failFast_2016_;
v___y_1992_ = v_toLogConfig_2012_;
v___y_1993_ = v_oldMode_2013_;
v___y_1994_ = v_leanOptOverrides_2020_;
v___y_1995_ = v_showSuccess_2018_;
v___y_1996_ = v_outputsFile_x3f_2002_;
v___y_1997_ = v_val_2001_;
v___y_1998_ = v_verbosity_2017_;
goto v___jp_1987_;
}
else
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2024_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7, &l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7_once, _init_l___private_Lake_Build_Run_0__Lake_mkBuildContext___closed__7);
v___x_2025_ = lean_st_mk_ref(v___x_2024_);
v___x_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
v___y_1959_ = v_outputsIdx_2019_;
v___y_1960_ = v_noBuild_2015_;
v___y_1961_ = v_trustHash_2014_;
v___y_1962_ = v_failFast_2016_;
v___y_1963_ = v_toLogConfig_2012_;
v___y_1964_ = v_leanOptOverrides_2020_;
v___y_1965_ = v_oldMode_2013_;
v___y_1966_ = v_outputsFile_x3f_2002_;
v___y_1967_ = v_showSuccess_2018_;
v___y_1968_ = v_val_2001_;
v___y_1969_ = v_verbosity_2017_;
v_val_1970_ = v___x_2026_;
goto v___jp_1958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_mkBuildContext___boxed(lean_object* v_ws_2037_, lean_object* v_cfg_2038_, lean_object* v_jobs_2039_, lean_object* v_cancelTk_x3f_2040_, lean_object* v_a_2041_){
_start:
{
lean_object* v_res_2042_; 
v_res_2042_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2037_, v_cfg_2038_, v_jobs_2039_, v_cancelTk_x3f_2040_);
return v_res_2042_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0(lean_object* v_build_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_){
_start:
{
lean_object* v_log_2051_; uint8_t v_action_2052_; uint8_t v_wantsRebuild_2053_; uint8_t v_canceled_2054_; lean_object* v_trace_2055_; lean_object* v_buildTime_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2085_; 
v_log_2051_ = lean_ctor_get(v___y_2049_, 0);
v_action_2052_ = lean_ctor_get_uint8(v___y_2049_, sizeof(void*)*3);
v_wantsRebuild_2053_ = lean_ctor_get_uint8(v___y_2049_, sizeof(void*)*3 + 1);
v_canceled_2054_ = lean_ctor_get_uint8(v___y_2049_, sizeof(void*)*3 + 2);
v_trace_2055_ = lean_ctor_get(v___y_2049_, 1);
v_buildTime_2056_ = lean_ctor_get(v___y_2049_, 2);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___y_2049_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2058_ = v___y_2049_;
v_isShared_2059_ = v_isSharedCheck_2085_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_buildTime_2056_);
lean_inc(v_trace_2055_);
lean_inc(v_log_2051_);
lean_dec(v___y_2049_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2085_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2060_; 
v___x_2060_ = lean_apply_7(v_build_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v_log_2051_, lean_box(0));
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2072_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
v_a_2062_ = lean_ctor_get(v___x_2060_, 1);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2064_ = v___x_2060_;
v_isShared_2065_ = v_isSharedCheck_2072_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_inc(v_a_2061_);
lean_dec(v___x_2060_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2072_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 0, v_a_2062_);
v___x_2067_ = v___x_2058_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2062_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v_trace_2055_);
lean_ctor_set(v_reuseFailAlloc_2071_, 2, v_buildTime_2056_);
lean_ctor_set_uint8(v_reuseFailAlloc_2071_, sizeof(void*)*3, v_action_2052_);
lean_ctor_set_uint8(v_reuseFailAlloc_2071_, sizeof(void*)*3 + 1, v_wantsRebuild_2053_);
lean_ctor_set_uint8(v_reuseFailAlloc_2071_, sizeof(void*)*3 + 2, v_canceled_2054_);
v___x_2067_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2069_; 
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 1, v___x_2067_);
v___x_2069_ = v___x_2064_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2061_);
lean_ctor_set(v_reuseFailAlloc_2070_, 1, v___x_2067_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
else
{
lean_object* v_a_2073_; lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2084_; 
v_a_2073_ = lean_ctor_get(v___x_2060_, 0);
v_a_2074_ = lean_ctor_get(v___x_2060_, 1);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2076_ = v___x_2060_;
v_isShared_2077_ = v_isSharedCheck_2084_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_inc(v_a_2073_);
lean_dec(v___x_2060_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2084_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 0, v_a_2074_);
v___x_2079_ = v___x_2058_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2074_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v_trace_2055_);
lean_ctor_set(v_reuseFailAlloc_2083_, 2, v_buildTime_2056_);
lean_ctor_set_uint8(v_reuseFailAlloc_2083_, sizeof(void*)*3, v_action_2052_);
lean_ctor_set_uint8(v_reuseFailAlloc_2083_, sizeof(void*)*3 + 1, v_wantsRebuild_2053_);
lean_ctor_set_uint8(v_reuseFailAlloc_2083_, sizeof(void*)*3 + 2, v_canceled_2054_);
v___x_2079_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
lean_object* v___x_2081_; 
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 1, v___x_2079_);
v___x_2081_ = v___x_2076_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_a_2073_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v___x_2079_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0___boxed(lean_object* v_build_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_){
_start:
{
lean_object* v_res_2094_; 
v_res_2094_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0(v_build_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(lean_object* v_bctx_2096_, lean_object* v_build_2097_, lean_object* v_caption_2098_){
_start:
{
lean_object* v___f_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___f_2100_ = lean_alloc_closure((void*)(l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2100_, 0, v_build_2097_);
v___x_2101_ = lean_box(0);
v___x_2102_ = lean_unsigned_to_nat(0u);
v___x_2103_ = lean_box(0);
v___x_2104_ = lean_box(1);
v___x_2105_ = lean_box(0);
v___x_2106_ = lean_st_mk_ref(v___x_2104_);
v___x_2107_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___closed__0));
v___x_2108_ = l_Lake_Job_async___redArg(v___x_2101_, v___f_2100_, v___x_2102_, v_caption_2098_, v___x_2107_, v___x_2105_, v___x_2103_, v___x_2106_, v_bctx_2096_);
v___x_2109_ = lean_st_ref_get(v___x_2106_);
lean_dec(v___x_2106_);
lean_dec(v___x_2109_);
return v___x_2108_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg___boxed(lean_object* v_bctx_2110_, lean_object* v_build_2111_, lean_object* v_caption_2112_, lean_object* v_a_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v_bctx_2110_, v_build_2111_, v_caption_2112_);
lean_dec_ref(v_bctx_2110_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild(lean_object* v_00_u03b1_2115_, lean_object* v_bctx_2116_, lean_object* v_build_2117_, lean_object* v_caption_2118_){
_start:
{
lean_object* v___x_2120_; 
v___x_2120_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v_bctx_2116_, v_build_2117_, v_caption_2118_);
return v___x_2120_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___boxed(lean_object* v_00_u03b1_2121_, lean_object* v_bctx_2122_, lean_object* v_build_2123_, lean_object* v_caption_2124_, lean_object* v_a_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild(v_00_u03b1_2121_, v_bctx_2122_, v_build_2123_, v_caption_2124_);
lean_dec_ref(v_bctx_2122_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(lean_object* v___x_2127_, uint8_t v___x_2128_, uint8_t v___x_2129_, lean_object* v_as_2130_, size_t v_i_2131_, size_t v_stop_2132_, lean_object* v_b_2133_){
_start:
{
uint8_t v___x_2135_; 
v___x_2135_ = lean_usize_dec_eq(v_i_2131_, v_stop_2132_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; lean_object* v___x_2137_; size_t v___x_2138_; size_t v___x_2139_; 
v___x_2136_ = lean_array_uget_borrowed(v_as_2130_, v_i_2131_);
lean_inc_ref(v___x_2127_);
v___x_2137_ = l_Lake_logToStream(v___x_2136_, v___x_2127_, v___x_2128_, v___x_2129_);
v___x_2138_ = ((size_t)1ULL);
v___x_2139_ = lean_usize_add(v_i_2131_, v___x_2138_);
v_i_2131_ = v___x_2139_;
v_b_2133_ = v___x_2137_;
goto _start;
}
else
{
lean_dec_ref(v___x_2127_);
return v_b_2133_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1___boxed(lean_object* v___x_2141_, lean_object* v___x_2142_, lean_object* v___x_2143_, lean_object* v_as_2144_, lean_object* v_i_2145_, lean_object* v_stop_2146_, lean_object* v_b_2147_, lean_object* v___y_2148_){
_start:
{
uint8_t v___x_1071__boxed_2149_; uint8_t v___x_1072__boxed_2150_; size_t v_i_boxed_2151_; size_t v_stop_boxed_2152_; lean_object* v_res_2153_; 
v___x_1071__boxed_2149_ = lean_unbox(v___x_2142_);
v___x_1072__boxed_2150_ = lean_unbox(v___x_2143_);
v_i_boxed_2151_ = lean_unbox_usize(v_i_2145_);
lean_dec(v_i_2145_);
v_stop_boxed_2152_ = lean_unbox_usize(v_stop_2146_);
lean_dec(v_stop_2146_);
v_res_2153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2141_, v___x_1071__boxed_2149_, v___x_1072__boxed_2150_, v_as_2144_, v_i_boxed_2151_, v_stop_boxed_2152_, v_b_2147_);
lean_dec_ref(v_as_2144_);
return v_res_2153_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(lean_object* v___x_2154_, lean_object* v___x_2155_, lean_object* v_x_2156_, lean_object* v_x_2157_){
_start:
{
if (lean_obj_tag(v_x_2156_) == 0)
{
if (lean_obj_tag(v_x_2157_) == 0)
{
uint8_t v___x_2158_; 
v___x_2158_ = 1;
return v___x_2158_;
}
else
{
uint8_t v___x_2159_; 
v___x_2159_ = 0;
return v___x_2159_;
}
}
else
{
if (lean_obj_tag(v_x_2157_) == 0)
{
uint8_t v___x_2160_; 
v___x_2160_ = 0;
return v___x_2160_;
}
else
{
lean_object* v_val_2161_; uint8_t v___x_2162_; 
v_val_2161_ = lean_ctor_get(v_x_2157_, 0);
v___x_2162_ = lean_unbox(v_val_2161_);
if (v___x_2162_ == 0)
{
lean_object* v_val_2163_; uint8_t v___x_2164_; 
v_val_2163_ = lean_ctor_get(v_x_2156_, 0);
v___x_2164_ = lean_unbox(v_val_2163_);
if (v___x_2164_ == 0)
{
uint8_t v___x_2165_; 
v___x_2165_ = lean_nat_dec_lt(v___x_2154_, v___x_2155_);
return v___x_2165_;
}
else
{
uint8_t v___x_2166_; 
v___x_2166_ = lean_unbox(v_val_2161_);
return v___x_2166_;
}
}
else
{
lean_object* v_val_2167_; uint8_t v___x_2168_; 
v_val_2167_ = lean_ctor_get(v_x_2156_, 0);
v___x_2168_ = lean_unbox(v_val_2167_);
return v___x_2168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0___boxed(lean_object* v___x_2169_, lean_object* v___x_2170_, lean_object* v_x_2171_, lean_object* v_x_2172_){
_start:
{
uint8_t v_res_2173_; lean_object* v_r_2174_; 
v_res_2173_ = l_instBEqOption_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(v___x_2169_, v___x_2170_, v_x_2171_, v_x_2172_);
lean_dec(v_x_2172_);
lean_dec(v_x_2171_);
lean_dec(v___x_2170_);
lean_dec(v___x_2169_);
v_r_2174_ = lean_box(v_res_2173_);
return v_r_2174_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(lean_object* v___x_2175_, uint8_t v___x_2176_, uint8_t v___x_2177_, lean_object* v_bctx_2178_, lean_object* v_out_2179_, lean_object* v_outputsFile_2180_){
_start:
{
lean_object* v___y_2185_; lean_object* v___y_2186_; uint8_t v___y_2194_; lean_object* v___y_2195_; lean_object* v___y_2196_; lean_object* v_outputsRef_x3f_2208_; 
v_outputsRef_x3f_2208_ = lean_ctor_get(v_bctx_2178_, 5);
lean_inc(v_outputsRef_x3f_2208_);
if (lean_obj_tag(v_outputsRef_x3f_2208_) == 1)
{
lean_object* v_toContext_2209_; lean_object* v_toBuildConfig_2210_; lean_object* v_val_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2327_; 
v_toContext_2209_ = lean_ctor_get(v_bctx_2178_, 1);
lean_inc(v_toContext_2209_);
v_toBuildConfig_2210_ = lean_ctor_get(v_bctx_2178_, 0);
lean_inc_ref(v_toBuildConfig_2210_);
lean_dec_ref(v_bctx_2178_);
v_val_2211_ = lean_ctor_get(v_outputsRef_x3f_2208_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_outputsRef_x3f_2208_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2213_ = v_outputsRef_x3f_2208_;
v_isShared_2214_ = v_isSharedCheck_2327_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_val_2211_);
lean_dec(v_outputsRef_x3f_2208_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2327_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v_lakeEnv_2215_; lean_object* v_packages_2216_; uint8_t v_verbosity_2217_; lean_object* v_outputsIdx_2218_; lean_object* v___x_2219_; uint8_t v___x_2220_; 
v_lakeEnv_2215_ = lean_ctor_get(v_toContext_2209_, 0);
lean_inc_ref(v_lakeEnv_2215_);
v_packages_2216_ = lean_ctor_get(v_toContext_2209_, 4);
lean_inc_ref(v_packages_2216_);
lean_dec(v_toContext_2209_);
v_verbosity_2217_ = lean_ctor_get_uint8(v_toBuildConfig_2210_, sizeof(void*)*5 + 4);
v_outputsIdx_2218_ = lean_ctor_get(v_toBuildConfig_2210_, 2);
lean_inc(v_outputsIdx_2218_);
lean_dec_ref(v_toBuildConfig_2210_);
v___x_2219_ = lean_array_get_size(v_packages_2216_);
v___x_2220_ = lean_nat_dec_lt(v_outputsIdx_2218_, v___x_2219_);
if (v___x_2220_ == 0)
{
lean_object* v_putStr_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
lean_dec(v_outputsIdx_2218_);
lean_dec_ref(v_packages_2216_);
lean_dec_ref(v_lakeEnv_2215_);
lean_del_object(v___x_2213_);
lean_dec(v_val_2211_);
lean_dec_ref(v_outputsFile_2180_);
lean_dec_ref(v___x_2175_);
v_putStr_2221_ = lean_ctor_get(v_out_2179_, 4);
lean_inc_ref(v_putStr_2221_);
lean_dec_ref(v_out_2179_);
v___x_2222_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__0));
v___x_2223_ = lean_apply_2(v_putStr_2221_, v___x_2222_, lean_box(0));
if (lean_obj_tag(v___x_2223_) == 0)
{
lean_dec_ref_known(v___x_2223_, 1);
goto v___jp_2204_;
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v_a_2224_ = lean_ctor_get(v___x_2223_, 0);
lean_inc(v_a_2224_);
lean_dec_ref_known(v___x_2223_, 1);
v___x_2225_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2226_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2227_ = lean_unsigned_to_nat(82u);
v___x_2228_ = lean_unsigned_to_nat(4u);
v___x_2229_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_2230_ = lean_io_error_to_string(v_a_2224_);
v___x_2231_ = lean_string_append(v___x_2229_, v___x_2230_);
lean_dec_ref(v___x_2230_);
v___x_2232_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_2233_ = lean_string_append(v___x_2231_, v___x_2232_);
v___x_2234_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__3);
v___x_2235_ = lean_string_append(v___x_2233_, v___x_2234_);
v___x_2236_ = l_mkPanicMessageWithDecl(v___x_2225_, v___x_2226_, v___x_2227_, v___x_2228_, v___x_2235_);
lean_dec_ref(v___x_2235_);
v___x_2237_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2236_);
goto v___jp_2204_;
}
}
else
{
lean_object* v___x_2238_; lean_object* v_config_2239_; lean_object* v_baseName_2240_; lean_object* v_toLeanConfig_2241_; lean_object* v_enableArtifactCache_x3f_2242_; uint8_t v___y_2244_; uint8_t v___y_2306_; uint8_t v___y_2314_; 
v___x_2238_ = lean_array_fget_borrowed(v_packages_2216_, v_outputsIdx_2218_);
v_config_2239_ = lean_ctor_get(v___x_2238_, 6);
v_baseName_2240_ = lean_ctor_get(v___x_2238_, 1);
lean_inc(v_baseName_2240_);
v_toLeanConfig_2241_ = lean_ctor_get(v_config_2239_, 1);
lean_inc_ref(v_toLeanConfig_2241_);
v_enableArtifactCache_x3f_2242_ = lean_ctor_get(v_config_2239_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_2242_) == 0)
{
lean_object* v_enableArtifactCache_x3f_2315_; 
v_enableArtifactCache_x3f_2315_ = lean_ctor_get(v_lakeEnv_2215_, 6);
lean_inc(v_enableArtifactCache_x3f_2315_);
lean_dec_ref(v_lakeEnv_2215_);
if (lean_obj_tag(v_enableArtifactCache_x3f_2315_) == 0)
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v_config_2318_; lean_object* v_enableArtifactCache_x3f_2319_; 
v___x_2316_ = lean_unsigned_to_nat(0u);
v___x_2317_ = lean_array_fget(v_packages_2216_, v___x_2316_);
lean_dec_ref(v_packages_2216_);
v_config_2318_ = lean_ctor_get(v___x_2317_, 6);
lean_inc_ref(v_config_2318_);
lean_dec(v___x_2317_);
v_enableArtifactCache_x3f_2319_ = lean_ctor_get(v_config_2318_, 24);
lean_inc(v_enableArtifactCache_x3f_2319_);
lean_dec_ref(v_config_2318_);
if (lean_obj_tag(v_enableArtifactCache_x3f_2319_) == 0)
{
uint8_t v___x_2320_; 
v___x_2320_ = 0;
v___y_2306_ = v___x_2320_;
goto v___jp_2305_;
}
else
{
lean_object* v_val_2321_; uint8_t v___x_2322_; 
v_val_2321_ = lean_ctor_get(v_enableArtifactCache_x3f_2319_, 0);
lean_inc(v_val_2321_);
lean_dec_ref_known(v_enableArtifactCache_x3f_2319_, 1);
v___x_2322_ = lean_unbox(v_val_2321_);
lean_dec(v_val_2321_);
v___y_2314_ = v___x_2322_;
goto v___jp_2313_;
}
}
else
{
lean_object* v_val_2323_; uint8_t v___x_2324_; 
lean_dec_ref(v_packages_2216_);
v_val_2323_ = lean_ctor_get(v_enableArtifactCache_x3f_2315_, 0);
lean_inc(v_val_2323_);
lean_dec_ref_known(v_enableArtifactCache_x3f_2315_, 1);
v___x_2324_ = lean_unbox(v_val_2323_);
lean_dec(v_val_2323_);
v___y_2314_ = v___x_2324_;
goto v___jp_2313_;
}
}
else
{
lean_object* v_val_2325_; uint8_t v___x_2326_; 
lean_inc_ref(v_enableArtifactCache_x3f_2242_);
lean_dec_ref(v_packages_2216_);
lean_dec_ref(v_lakeEnv_2215_);
v_val_2325_ = lean_ctor_get(v_enableArtifactCache_x3f_2242_, 0);
lean_inc(v_val_2325_);
lean_dec_ref_known(v_enableArtifactCache_x3f_2242_, 1);
v___x_2326_ = lean_unbox(v_val_2325_);
lean_dec(v_val_2325_);
v___y_2314_ = v___x_2326_;
goto v___jp_2313_;
}
v___jp_2243_:
{
lean_object* v___x_2245_; lean_object* v_platformIndependent_2246_; lean_object* v___x_2247_; lean_object* v___x_2249_; 
v___x_2245_ = lean_st_ref_get(v_val_2211_);
lean_dec(v_val_2211_);
v_platformIndependent_2246_ = lean_ctor_get(v_toLeanConfig_2241_, 10);
lean_inc(v_platformIndependent_2246_);
lean_dec_ref(v_toLeanConfig_2241_);
v___x_2247_ = lean_box(v___x_2220_);
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 0, v___x_2247_);
v___x_2249_ = v___x_2213_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v___x_2247_);
v___x_2249_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
uint8_t v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2250_ = l_instBEqOption_beq___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__0(v_outputsIdx_2218_, v___x_2219_, v_platformIndependent_2246_, v___x_2249_);
lean_dec_ref(v___x_2249_);
lean_dec(v_platformIndependent_2246_);
lean_dec(v_outputsIdx_2218_);
v___x_2251_ = lean_unsigned_to_nat(0u);
v___x_2252_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__6));
v___x_2253_ = l_Lake_CacheMap_writeFile(v_outputsFile_2180_, v___x_2245_, v___x_2250_, v___x_2252_);
if (lean_obj_tag(v___x_2253_) == 0)
{
lean_object* v_a_2254_; lean_object* v___x_2255_; uint8_t v___x_2256_; 
v_a_2254_ = lean_ctor_get(v___x_2253_, 1);
lean_inc(v_a_2254_);
lean_dec_ref_known(v___x_2253_, 2);
v___x_2255_ = lean_array_get_size(v_a_2254_);
v___x_2256_ = lean_nat_dec_eq(v___x_2255_, v___x_2251_);
if (v___x_2256_ == 0)
{
if (v___y_2244_ == 0)
{
lean_dec(v_a_2254_);
lean_dec_ref(v_out_2179_);
lean_dec_ref(v___x_2175_);
goto v___jp_2182_;
}
else
{
lean_object* v_putStr_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v_putStr_2257_ = lean_ctor_get(v_out_2179_, 4);
lean_inc_ref(v_putStr_2257_);
lean_dec_ref(v_out_2179_);
v___x_2258_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__7));
v___x_2259_ = lean_apply_2(v_putStr_2257_, v___x_2258_, lean_box(0));
if (lean_obj_tag(v___x_2259_) == 0)
{
lean_dec_ref_known(v___x_2259_, 1);
v___y_2185_ = v___x_2251_;
v___y_2186_ = v_a_2254_;
goto v___jp_2184_;
}
else
{
lean_object* v_a_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v_a_2260_ = lean_ctor_get(v___x_2259_, 0);
lean_inc(v_a_2260_);
lean_dec_ref_known(v___x_2259_, 1);
v___x_2261_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2262_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2263_ = lean_unsigned_to_nat(82u);
v___x_2264_ = lean_unsigned_to_nat(4u);
v___x_2265_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_2266_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_2267_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2266_, v___y_2244_);
v___x_2268_ = lean_string_append(v___x_2265_, v___x_2267_);
lean_dec_ref(v___x_2267_);
v___x_2269_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_2270_ = lean_string_append(v___x_2268_, v___x_2269_);
v___x_2271_ = lean_io_error_to_string(v_a_2260_);
v___x_2272_ = lean_string_append(v___x_2270_, v___x_2271_);
lean_dec_ref(v___x_2271_);
v___x_2273_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_2274_ = lean_string_append(v___x_2272_, v___x_2273_);
v___x_2275_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__10);
v___x_2276_ = lean_string_append(v___x_2274_, v___x_2275_);
v___x_2277_ = l_mkPanicMessageWithDecl(v___x_2261_, v___x_2262_, v___x_2263_, v___x_2264_, v___x_2276_);
lean_dec_ref(v___x_2276_);
v___x_2278_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2277_);
v___y_2185_ = v___x_2251_;
v___y_2186_ = v_a_2254_;
goto v___jp_2184_;
}
}
}
else
{
lean_dec(v_a_2254_);
lean_dec_ref(v_out_2179_);
lean_dec_ref(v___x_2175_);
goto v___jp_2182_;
}
}
else
{
lean_object* v_a_2279_; lean_object* v_putStr_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v_a_2279_ = lean_ctor_get(v___x_2253_, 1);
lean_inc(v_a_2279_);
lean_dec_ref_known(v___x_2253_, 2);
v_putStr_2280_ = lean_ctor_get(v_out_2179_, 4);
lean_inc_ref(v_putStr_2280_);
lean_dec_ref(v_out_2179_);
v___x_2281_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__11));
v___x_2282_ = lean_apply_2(v_putStr_2280_, v___x_2281_, lean_box(0));
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_dec_ref_known(v___x_2282_, 1);
v___y_2194_ = v___y_2244_;
v___y_2195_ = v_a_2279_;
v___y_2196_ = v___x_2251_;
goto v___jp_2193_;
}
else
{
lean_object* v_a_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
lean_dec_ref_known(v___x_2282_, 1);
v___x_2284_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2285_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2286_ = lean_unsigned_to_nat(82u);
v___x_2287_ = lean_unsigned_to_nat(4u);
v___x_2288_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__3));
v___x_2289_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__15));
v___x_2290_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2289_, v___x_2220_);
v___x_2291_ = lean_string_append(v___x_2288_, v___x_2290_);
lean_dec_ref(v___x_2290_);
v___x_2292_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__18));
v___x_2293_ = lean_string_append(v___x_2291_, v___x_2292_);
v___x_2294_ = lean_io_error_to_string(v_a_2283_);
v___x_2295_ = lean_string_append(v___x_2293_, v___x_2294_);
lean_dec_ref(v___x_2294_);
v___x_2296_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_2297_ = lean_string_append(v___x_2295_, v___x_2296_);
v___x_2298_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__14);
v___x_2299_ = lean_string_append(v___x_2297_, v___x_2298_);
v___x_2300_ = l_mkPanicMessageWithDecl(v___x_2284_, v___x_2285_, v___x_2286_, v___x_2287_, v___x_2299_);
lean_dec_ref(v___x_2299_);
v___x_2301_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2300_);
v___y_2194_ = v___y_2244_;
v___y_2195_ = v_a_2279_;
v___y_2196_ = v___x_2251_;
goto v___jp_2193_;
}
}
}
}
v___jp_2303_:
{
if (v_verbosity_2217_ == 2)
{
v___y_2244_ = v___x_2220_;
goto v___jp_2243_;
}
else
{
uint8_t v___x_2304_; 
v___x_2304_ = 0;
v___y_2244_ = v___x_2304_;
goto v___jp_2243_;
}
}
v___jp_2305_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; uint8_t v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2307_ = l_Lean_Name_toString(v_baseName_2240_, v___y_2306_);
v___x_2308_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__15));
v___x_2309_ = lean_string_append(v___x_2307_, v___x_2308_);
v___x_2310_ = 2;
v___x_2311_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2311_, 0, v___x_2309_);
lean_ctor_set_uint8(v___x_2311_, sizeof(void*)*1, v___x_2310_);
lean_inc_ref(v___x_2175_);
v___x_2312_ = l_Lake_logToStream(v___x_2311_, v___x_2175_, v___x_2176_, v___x_2177_);
lean_dec_ref_known(v___x_2311_, 1);
goto v___jp_2303_;
}
v___jp_2313_:
{
if (v___y_2314_ == 0)
{
v___y_2306_ = v___y_2314_;
goto v___jp_2305_;
}
else
{
lean_dec(v_baseName_2240_);
goto v___jp_2303_;
}
}
}
}
}
else
{
lean_object* v_putStr_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
lean_dec(v_outputsRef_x3f_2208_);
lean_dec_ref(v_outputsFile_2180_);
lean_dec_ref(v_bctx_2178_);
lean_dec_ref(v___x_2175_);
v_putStr_2328_ = lean_ctor_get(v_out_2179_, 4);
lean_inc_ref(v_putStr_2328_);
lean_dec_ref(v_out_2179_);
v___x_2329_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__16));
v___x_2330_ = lean_apply_2(v_putStr_2328_, v___x_2329_, lean_box(0));
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_dec_ref_known(v___x_2330_, 1);
goto v___jp_2206_;
}
else
{
lean_object* v_a_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_a_2331_);
lean_dec_ref_known(v___x_2330_, 1);
v___x_2332_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__1));
v___x_2333_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__2));
v___x_2334_ = lean_unsigned_to_nat(82u);
v___x_2335_ = lean_unsigned_to_nat(4u);
v___x_2336_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_print_x21___closed__19, &l___private_Lake_Build_Run_0__Lake_print_x21___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_print_x21___closed__19);
v___x_2337_ = lean_io_error_to_string(v_a_2331_);
v___x_2338_ = lean_string_append(v___x_2336_, v___x_2337_);
lean_dec_ref(v___x_2337_);
v___x_2339_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_print_x21___closed__20));
v___x_2340_ = lean_string_append(v___x_2338_, v___x_2339_);
v___x_2341_ = lean_obj_once(&l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19, &l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19_once, _init_l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___closed__19);
v___x_2342_ = lean_string_append(v___x_2340_, v___x_2341_);
v___x_2343_ = l_mkPanicMessageWithDecl(v___x_2332_, v___x_2333_, v___x_2334_, v___x_2335_, v___x_2342_);
lean_dec_ref(v___x_2342_);
v___x_2344_ = l_panic___at___00__private_Lake_Build_Run_0__Lake_Monitor_renderProgress_spec__0(v___x_2343_);
goto v___jp_2206_;
}
}
v___jp_2182_:
{
lean_object* v___x_2183_; 
v___x_2183_ = lean_box(0);
return v___x_2183_;
}
v___jp_2184_:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; uint8_t v___x_2189_; 
v___x_2187_ = lean_array_get_size(v___y_2186_);
v___x_2188_ = lean_box(0);
v___x_2189_ = lean_nat_dec_lt(v___y_2185_, v___x_2187_);
if (v___x_2189_ == 0)
{
lean_dec_ref(v___y_2186_);
lean_dec_ref(v___x_2175_);
return v___x_2188_;
}
else
{
size_t v___x_2190_; size_t v___x_2191_; lean_object* v___x_2192_; 
v___x_2190_ = ((size_t)0ULL);
v___x_2191_ = lean_usize_of_nat(v___x_2187_);
v___x_2192_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2175_, v___x_2176_, v___x_2177_, v___y_2186_, v___x_2190_, v___x_2191_, v___x_2188_);
lean_dec_ref(v___y_2186_);
return v___x_2192_;
}
}
v___jp_2193_:
{
if (v___y_2194_ == 0)
{
lean_object* v___x_2197_; 
lean_dec_ref(v___y_2195_);
lean_dec_ref(v___x_2175_);
v___x_2197_ = lean_box(0);
return v___x_2197_;
}
else
{
lean_object* v___x_2198_; lean_object* v___x_2199_; uint8_t v___x_2200_; 
v___x_2198_ = lean_array_get_size(v___y_2195_);
v___x_2199_ = lean_box(0);
v___x_2200_ = lean_nat_dec_lt(v___y_2196_, v___x_2198_);
if (v___x_2200_ == 0)
{
lean_dec_ref(v___y_2195_);
lean_dec_ref(v___x_2175_);
return v___x_2199_;
}
else
{
size_t v___x_2201_; size_t v___x_2202_; lean_object* v___x_2203_; 
v___x_2201_ = ((size_t)0ULL);
v___x_2202_ = lean_usize_of_nat(v___x_2198_);
v___x_2203_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0_spec__1(v___x_2175_, v___x_2176_, v___x_2177_, v___y_2195_, v___x_2201_, v___x_2202_, v___x_2199_);
lean_dec_ref(v___y_2195_);
return v___x_2203_;
}
}
}
v___jp_2204_:
{
lean_object* v___x_2205_; 
v___x_2205_ = lean_box(0);
return v___x_2205_;
}
v___jp_2206_:
{
lean_object* v___x_2207_; 
v___x_2207_ = lean_box(0);
return v___x_2207_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0___boxed(lean_object* v___x_2345_, lean_object* v___x_2346_, lean_object* v___x_2347_, lean_object* v_bctx_2348_, lean_object* v_out_2349_, lean_object* v_outputsFile_2350_, lean_object* v_a_2351_){
_start:
{
uint8_t v___x_1315__boxed_2352_; uint8_t v___x_1316__boxed_2353_; lean_object* v_res_2354_; 
v___x_1315__boxed_2352_ = lean_unbox(v___x_2346_);
v___x_1316__boxed_2353_ = lean_unbox(v___x_2347_);
v_res_2354_ = l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(v___x_2345_, v___x_1315__boxed_2352_, v___x_1316__boxed_2353_, v_bctx_2348_, v_out_2349_, v_outputsFile_2350_);
return v_res_2354_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(lean_object* v_cfg_2355_, lean_object* v_bctx_2356_, lean_object* v_mctx_2357_, lean_object* v_result_2358_){
_start:
{
lean_object* v___y_2361_; lean_object* v_out_2364_; uint8_t v_outLv_2365_; uint8_t v_useAnsi_2366_; lean_object* v_toMonitorResult_2367_; lean_object* v_out_2368_; lean_object* v___x_2384_; lean_object* v_outputsFile_x3f_2385_; 
v_out_2364_ = lean_ctor_get(v_mctx_2357_, 1);
lean_inc_ref_n(v_out_2364_, 2);
v_outLv_2365_ = lean_ctor_get_uint8(v_mctx_2357_, sizeof(void*)*4);
v_useAnsi_2366_ = lean_ctor_get_uint8(v_mctx_2357_, sizeof(void*)*4 + 4);
lean_dec_ref(v_mctx_2357_);
v_toMonitorResult_2367_ = lean_ctor_get(v_result_2358_, 0);
lean_inc_ref_n(v_toMonitorResult_2367_, 2);
v_out_2368_ = lean_ctor_get(v_result_2358_, 1);
lean_inc_ref(v_out_2368_);
lean_dec_ref(v_result_2358_);
v___x_2384_ = l___private_Lake_Build_Run_0__Lake_reportResult(v_cfg_2355_, v_out_2364_, v_toMonitorResult_2367_);
v_outputsFile_x3f_2385_ = lean_ctor_get(v_cfg_2355_, 1);
if (lean_obj_tag(v_outputsFile_x3f_2385_) == 1)
{
lean_object* v_val_2386_; lean_object* v___x_2387_; 
v_val_2386_ = lean_ctor_get(v_outputsFile_x3f_2385_, 0);
lean_inc(v_val_2386_);
lean_inc_ref(v_out_2364_);
v___x_2387_ = l___private_Lake_Build_Run_0__Lake_BuildContext_saveOutputs___at___00__private_Lake_Build_Run_0__Lake_finalizeBuild_spec__0(v_out_2364_, v_outLv_2365_, v_useAnsi_2366_, v_bctx_2356_, v_out_2364_, v_val_2386_);
goto v___jp_2369_;
}
else
{
lean_dec_ref(v_out_2364_);
lean_dec_ref(v_bctx_2356_);
goto v___jp_2369_;
}
v___jp_2360_:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; 
v___x_2362_ = lean_mk_io_user_error(v___y_2361_);
v___x_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
return v___x_2363_;
}
v___jp_2369_:
{
if (lean_obj_tag(v_out_2368_) == 0)
{
uint8_t v_noBuild_2370_; 
v_noBuild_2370_ = lean_ctor_get_uint8(v_cfg_2355_, sizeof(void*)*5 + 2);
lean_dec_ref(v_cfg_2355_);
if (v_noBuild_2370_ == 0)
{
lean_object* v_a_2371_; 
lean_dec_ref(v_toMonitorResult_2367_);
v_a_2371_ = lean_ctor_get(v_out_2368_, 0);
lean_inc(v_a_2371_);
lean_dec_ref_known(v_out_2368_, 1);
v___y_2361_ = v_a_2371_;
goto v___jp_2360_;
}
else
{
uint8_t v_wantsRebuild_2372_; 
v_wantsRebuild_2372_ = lean_ctor_get_uint8(v_toMonitorResult_2367_, sizeof(void*)*2);
lean_dec_ref(v_toMonitorResult_2367_);
if (v_wantsRebuild_2372_ == 0)
{
lean_object* v_a_2373_; 
v_a_2373_ = lean_ctor_get(v_out_2368_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v_out_2368_, 1);
v___y_2361_ = v_a_2373_;
goto v___jp_2360_;
}
else
{
uint8_t v___x_2374_; lean_object* v___x_2375_; 
lean_dec_ref_known(v_out_2368_, 1);
v___x_2374_ = 3;
v___x_2375_ = lean_io_exit(v___x_2374_);
return v___x_2375_;
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_dec_ref(v_toMonitorResult_2367_);
lean_dec_ref(v_cfg_2355_);
v_a_2376_ = lean_ctor_get(v_out_2368_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v_out_2368_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v_out_2368_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v_out_2368_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
lean_ctor_set_tag(v___x_2378_, 0);
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg___boxed(lean_object* v_cfg_2388_, lean_object* v_bctx_2389_, lean_object* v_mctx_2390_, lean_object* v_result_2391_, lean_object* v_a_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2388_, v_bctx_2389_, v_mctx_2390_, v_result_2391_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild(lean_object* v_00_u03b1_2394_, lean_object* v_cfg_2395_, lean_object* v_bctx_2396_, lean_object* v_mctx_2397_, lean_object* v_result_2398_){
_start:
{
lean_object* v___x_2400_; 
v___x_2400_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2395_, v_bctx_2396_, v_mctx_2397_, v_result_2398_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_finalizeBuild___boxed(lean_object* v_00_u03b1_2401_, lean_object* v_cfg_2402_, lean_object* v_bctx_2403_, lean_object* v_mctx_2404_, lean_object* v_result_2405_, lean_object* v_a_2406_){
_start:
{
lean_object* v_res_2407_; 
v_res_2407_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild(v_00_u03b1_2401_, v_cfg_2402_, v_bctx_2403_, v_mctx_2404_, v_result_2405_);
return v_res_2407_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg(lean_object* v_ws_2408_, lean_object* v_build_2409_, lean_object* v_cfg_2410_, lean_object* v_caption_2411_){
_start:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v_cancelTk_x3f_2416_; uint8_t v_failFast_2422_; 
v___x_2413_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2414_ = lean_st_mk_ref(v___x_2413_);
v_failFast_2422_ = lean_ctor_get_uint8(v_cfg_2410_, sizeof(void*)*5 + 3);
if (v_failFast_2422_ == 0)
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_box(0);
v_cancelTk_x3f_2416_ = v___x_2423_;
goto v___jp_2415_;
}
else
{
lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2424_ = l_IO_CancelToken_new();
v___x_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2424_);
v_cancelTk_x3f_2416_ = v___x_2425_;
goto v___jp_2415_;
}
v___jp_2415_:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
lean_inc(v_cancelTk_x3f_2416_);
lean_inc(v___x_2414_);
v___x_2417_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_2410_, v___x_2414_, v_cancelTk_x3f_2416_);
lean_inc_ref(v_cfg_2410_);
v___x_2418_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2408_, v_cfg_2410_, v___x_2414_, v_cancelTk_x3f_2416_);
v___x_2419_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2418_, v_build_2409_, v_caption_2411_);
v___x_2420_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v___x_2417_, v___x_2419_);
v___x_2421_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2410_, v___x_2418_, v___x_2417_, v___x_2420_);
return v___x_2421_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___redArg___boxed(lean_object* v_ws_2426_, lean_object* v_build_2427_, lean_object* v_cfg_2428_, lean_object* v_caption_2429_, lean_object* v_a_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l_Lake_Workspace_runFetchM___redArg(v_ws_2426_, v_build_2427_, v_cfg_2428_, v_caption_2429_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM(lean_object* v_00_u03b1_2432_, lean_object* v_ws_2433_, lean_object* v_build_2434_, lean_object* v_cfg_2435_, lean_object* v_caption_2436_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = l_Lake_Workspace_runFetchM___redArg(v_ws_2433_, v_build_2434_, v_cfg_2435_, v_caption_2436_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runFetchM___boxed(lean_object* v_00_u03b1_2439_, lean_object* v_ws_2440_, lean_object* v_build_2441_, lean_object* v_cfg_2442_, lean_object* v_caption_2443_, lean_object* v_a_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_Lake_Workspace_runFetchM(v_00_u03b1_2439_, v_ws_2440_, v_build_2441_, v_cfg_2442_, v_caption_2443_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(lean_object* v_mctx_2449_, lean_object* v_job_2450_){
_start:
{
lean_object* v___x_2452_; lean_object* v_out_2453_; 
v___x_2452_ = l___private_Lake_Build_Run_0__Lake_monitorJob___redArg(v_mctx_2449_, v_job_2450_);
v_out_2453_ = lean_ctor_get(v___x_2452_, 1);
lean_inc_ref(v_out_2453_);
if (lean_obj_tag(v_out_2453_) == 0)
{
lean_object* v_toMonitorResult_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2469_; 
v_toMonitorResult_2454_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2469_ == 0)
{
lean_object* v_unused_2470_; 
v_unused_2470_ = lean_ctor_get(v___x_2452_, 1);
lean_dec(v_unused_2470_);
v___x_2456_ = v___x_2452_;
v_isShared_2457_ = v_isSharedCheck_2469_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_toMonitorResult_2454_);
lean_dec(v___x_2452_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2469_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2468_; 
v_a_2458_ = lean_ctor_get(v_out_2453_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v_out_2453_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2460_ = v_out_2453_;
v_isShared_2461_ = v_isSharedCheck_2468_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v_out_2453_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2468_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
lean_object* v___x_2465_; 
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 1, v___x_2463_);
v___x_2465_ = v___x_2456_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_toMonitorResult_2454_);
lean_ctor_set(v_reuseFailAlloc_2466_, 1, v___x_2463_);
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
}
else
{
lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2494_; 
v_a_2471_ = lean_ctor_get(v_out_2453_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v_out_2453_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2473_ = v_out_2453_;
v_isShared_2474_ = v_isSharedCheck_2494_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v_out_2453_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2494_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v_toMonitorResult_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2492_; 
v_toMonitorResult_2475_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2492_ == 0)
{
lean_object* v_unused_2493_; 
v_unused_2493_ = lean_ctor_get(v___x_2452_, 1);
lean_dec(v_unused_2493_);
v___x_2477_ = v___x_2452_;
v_isShared_2478_ = v_isSharedCheck_2492_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_toMonitorResult_2475_);
lean_dec(v___x_2452_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2492_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v_task_2479_; lean_object* v___x_2480_; 
v_task_2479_ = lean_ctor_get(v_a_2471_, 0);
lean_inc_ref(v_task_2479_);
lean_dec(v_a_2471_);
v___x_2480_ = lean_io_wait(v_task_2479_);
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_object* v_a_2481_; lean_object* v___x_2483_; 
v_a_2481_ = lean_ctor_get(v___x_2480_, 0);
lean_inc(v_a_2481_);
lean_dec_ref_known(v___x_2480_, 2);
if (v_isShared_2474_ == 0)
{
lean_ctor_set(v___x_2473_, 0, v_a_2481_);
v___x_2483_ = v___x_2473_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2481_);
v___x_2483_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
lean_object* v___x_2485_; 
if (v_isShared_2478_ == 0)
{
lean_ctor_set(v___x_2477_, 1, v___x_2483_);
v___x_2485_ = v___x_2477_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_toMonitorResult_2475_);
lean_ctor_set(v_reuseFailAlloc_2486_, 1, v___x_2483_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
else
{
lean_object* v___x_2488_; lean_object* v___x_2490_; 
lean_dec_ref_known(v___x_2480_, 2);
lean_del_object(v___x_2473_);
v___x_2488_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___closed__1));
if (v_isShared_2478_ == 0)
{
lean_ctor_set(v___x_2477_, 1, v___x_2488_);
v___x_2490_ = v___x_2477_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_toMonitorResult_2475_);
lean_ctor_set(v_reuseFailAlloc_2491_, 1, v___x_2488_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg___boxed(lean_object* v_mctx_2495_, lean_object* v_job_2496_, lean_object* v_a_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v_mctx_2495_, v_job_2496_);
lean_dec_ref(v_mctx_2495_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild(lean_object* v_00_u03b1_2499_, lean_object* v_mctx_2500_, lean_object* v_job_2501_){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v_mctx_2500_, v_job_2501_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Run_0__Lake_monitorBuild___boxed(lean_object* v_00_u03b1_2504_, lean_object* v_mctx_2505_, lean_object* v_job_2506_, lean_object* v_a_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l___private_Lake_Build_Run_0__Lake_monitorBuild(v_00_u03b1_2504_, v_mctx_2505_, v_job_2506_);
lean_dec_ref(v_mctx_2505_);
return v_res_2508_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild___redArg(lean_object* v_ws_2523_, lean_object* v_build_2524_){
_start:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; uint8_t v___x_2528_; uint8_t v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v_out_2537_; 
v___x_2526_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2527_ = lean_st_mk_ref(v___x_2526_);
v___x_2528_ = 0;
v___x_2529_ = 1;
v___x_2530_ = lean_box(0);
v___x_2531_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__1));
lean_inc(v___x_2527_);
v___x_2532_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v___x_2531_, v___x_2527_, v___x_2530_);
v___x_2533_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2523_, v___x_2531_, v___x_2527_, v___x_2530_);
v___x_2534_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__2));
v___x_2535_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2533_, v_build_2524_, v___x_2534_);
lean_dec_ref(v___x_2533_);
v___x_2536_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v___x_2532_, v___x_2535_);
lean_dec_ref(v___x_2532_);
v_out_2537_ = lean_ctor_get(v___x_2536_, 1);
lean_inc_ref(v_out_2537_);
lean_dec_ref(v___x_2536_);
if (lean_obj_tag(v_out_2537_) == 0)
{
lean_dec_ref_known(v_out_2537_, 1);
return v___x_2528_;
}
else
{
lean_dec_ref_known(v_out_2537_, 1);
return v___x_2529_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___redArg___boxed(lean_object* v_ws_2538_, lean_object* v_build_2539_, lean_object* v_a_2540_){
_start:
{
uint8_t v_res_2541_; lean_object* v_r_2542_; 
v_res_2541_ = l_Lake_Workspace_checkNoBuild___redArg(v_ws_2538_, v_build_2539_);
v_r_2542_ = lean_box(v_res_2541_);
return v_r_2542_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_checkNoBuild(lean_object* v_00_u03b1_2543_, lean_object* v_ws_2544_, lean_object* v_build_2545_){
_start:
{
uint8_t v___x_2547_; 
v___x_2547_ = l_Lake_Workspace_checkNoBuild___redArg(v_ws_2544_, v_build_2545_);
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_checkNoBuild___boxed(lean_object* v_00_u03b1_2548_, lean_object* v_ws_2549_, lean_object* v_build_2550_, lean_object* v_a_2551_){
_start:
{
uint8_t v_res_2552_; lean_object* v_r_2553_; 
v_res_2552_ = l_Lake_Workspace_checkNoBuild(v_00_u03b1_2548_, v_ws_2549_, v_build_2550_);
v_r_2553_ = lean_box(v_res_2552_);
return v_r_2553_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg(lean_object* v_ws_2554_, lean_object* v_build_2555_, lean_object* v_cfg_2556_){
_start:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v_cancelTk_x3f_2561_; uint8_t v_failFast_2568_; 
v___x_2558_ = ((lean_object*)(l___private_Lake_Build_Run_0__Lake_Monitor_drainQueue___closed__0));
v___x_2559_ = lean_st_mk_ref(v___x_2558_);
v_failFast_2568_ = lean_ctor_get_uint8(v_cfg_2556_, sizeof(void*)*5 + 3);
if (v_failFast_2568_ == 0)
{
lean_object* v___x_2569_; 
v___x_2569_ = lean_box(0);
v_cancelTk_x3f_2561_ = v___x_2569_;
goto v___jp_2560_;
}
else
{
lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2570_ = l_IO_CancelToken_new();
v___x_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2570_);
v_cancelTk_x3f_2561_ = v___x_2571_;
goto v___jp_2560_;
}
v___jp_2560_:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
lean_inc(v_cancelTk_x3f_2561_);
lean_inc(v___x_2559_);
v___x_2562_ = l___private_Lake_Build_Run_0__Lake_mkMonitorContext(v_cfg_2556_, v___x_2559_, v_cancelTk_x3f_2561_);
lean_inc_ref(v_cfg_2556_);
v___x_2563_ = l___private_Lake_Build_Run_0__Lake_mkBuildContext(v_ws_2554_, v_cfg_2556_, v___x_2559_, v_cancelTk_x3f_2561_);
v___x_2564_ = ((lean_object*)(l_Lake_Workspace_checkNoBuild___redArg___closed__2));
v___x_2565_ = l___private_Lake_Build_Run_0__Lake_Workspace_startBuild___redArg(v___x_2563_, v_build_2555_, v___x_2564_);
v___x_2566_ = l___private_Lake_Build_Run_0__Lake_monitorBuild___redArg(v___x_2562_, v___x_2565_);
v___x_2567_ = l___private_Lake_Build_Run_0__Lake_finalizeBuild___redArg(v_cfg_2556_, v___x_2563_, v___x_2562_, v___x_2566_);
return v___x_2567_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___redArg___boxed(lean_object* v_ws_2572_, lean_object* v_build_2573_, lean_object* v_cfg_2574_, lean_object* v_a_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l_Lake_Workspace_runBuild___redArg(v_ws_2572_, v_build_2573_, v_cfg_2574_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild(lean_object* v_00_u03b1_2577_, lean_object* v_ws_2578_, lean_object* v_build_2579_, lean_object* v_cfg_2580_){
_start:
{
lean_object* v___x_2582_; 
v___x_2582_ = l_Lake_Workspace_runBuild___redArg(v_ws_2578_, v_build_2579_, v_cfg_2580_);
return v___x_2582_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runBuild___boxed(lean_object* v_00_u03b1_2583_, lean_object* v_ws_2584_, lean_object* v_build_2585_, lean_object* v_cfg_2586_, lean_object* v_a_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l_Lake_Workspace_runBuild(v_00_u03b1_2583_, v_ws_2584_, v_build_2585_, v_cfg_2586_);
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg(lean_object* v_build_2589_, lean_object* v_cfg_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v___x_2593_; 
lean_inc(v_a_2591_);
v___x_2593_ = l_Lake_Workspace_runBuild___redArg(v_a_2591_, v_build_2589_, v_cfg_2590_);
return v___x_2593_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___redArg___boxed(lean_object* v_build_2594_, lean_object* v_cfg_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_){
_start:
{
lean_object* v_res_2598_; 
v_res_2598_ = l_Lake_runBuild___redArg(v_build_2594_, v_cfg_2595_, v_a_2596_);
lean_dec(v_a_2596_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild(lean_object* v_00_u03b1_2599_, lean_object* v_build_2600_, lean_object* v_cfg_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v___x_2604_; 
lean_inc(v_a_2602_);
v___x_2604_ = l_Lake_Workspace_runBuild___redArg(v_a_2602_, v_build_2600_, v_cfg_2601_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l_Lake_runBuild___boxed(lean_object* v_00_u03b1_2605_, lean_object* v_build_2606_, lean_object* v_cfg_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_){
_start:
{
lean_object* v_res_2610_; 
v_res_2610_ = l_Lake_runBuild(v_00_u03b1_2605_, v_build_2606_, v_cfg_2607_, v_a_2608_);
lean_dec(v_a_2608_);
return v_res_2610_;
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
