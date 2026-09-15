// Lean compiler output
// Module: Lake.CLI.Serve
// Imports: public import Lake.Load.Config public import Lake.Build.Context public import Lake.Util.Exit import Lake.Build.Run import Lake.Build.Module import Lake.Load.Package import Lake.Load.Lean.Elab import Lake.Load.Workspace import Lake.Util.IO
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
lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_get_stderr();
lean_object* l_Lake_logToStream(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_OutStream_logEntry(lean_object*, lean_object*, uint8_t, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_resolvePath(lean_object*);
lean_object* l_Lake_realConfigFile(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_io_getenv(lean_object*);
lean_object* l_Lake_OutStream_get(lean_object*);
uint8_t l_Lake_AnsiMode_isEnabled(lean_object*, uint8_t);
lean_object* l_Lake_loadWorkspace(lean_object*, lean_object*);
lean_object* l_Lake_setupServerModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Workspace_runBuild___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToJsonModuleSetup_toJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
extern lean_object* l_Lake_configModuleName;
lean_object* l_Lean_Plugin_ofFilePath(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
lean_object* l_Lake_loadWorkspace___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_LoggerIO_captureLog___redArg(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_augmentedEnvVars(lean_object*);
lean_object* l_Lake_Env_baseVars(lean_object*);
lean_object* l_Lake_Log_toString(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT uint32_t l_Lake_noConfigFileCode;
static const lean_string_object l_Lake_invalidConfigEnvVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LAKE_INVALID_CONFIG"};
static const lean_object* l_Lake_invalidConfigEnvVar___closed__0 = (const lean_object*)&l_Lake_invalidConfigEnvVar___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_invalidConfigEnvVar = (const lean_object*)&l_Lake_invalidConfigEnvVar___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__0 = (const lean_object*)&l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__1 = (const lean_object*)&l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__2 = (const lean_object*)&l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__3 = (const lean_object*)&l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__4 = (const lean_object*)&l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__5 = (const lean_object*)&l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lake.CLI.Serve"};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__0 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.Lake.CLI.Serve.0.Lake.setupFile.print!"};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__1 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Failed to print `setup-file` result: "};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__2 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__2_value;
LEAN_EXPORT uint32_t l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.Lake.CLI.Serve.0.Lake.setupFile.eprint!"};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__0 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Failed to print `setup-file` error: "};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__1 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "\nOriginal error:\n"};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__2 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setupFile___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setupFile___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_setupFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "Failed to configure the Lake workspace. Please restart the server after fixing the error above.\n"};
static const lean_object* l_Lake_setupFile___closed__0 = (const lean_object*)&l_Lake_setupFile___closed__0_value;
static const lean_string_object l_Lake_setupFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Failed to build module dependencies.\n"};
static const lean_object* l_Lake_setupFile___closed__1 = (const lean_object*)&l_Lake_setupFile___closed__1_value;
static const lean_string_object l_Lake_setupFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Failed to load the Lake workspace.\n"};
static const lean_object* l_Lake_setupFile___closed__2 = (const lean_object*)&l_Lake_setupFile___closed__2_value;
static const lean_array_object l_Lake_setupFile___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_setupFile___closed__3 = (const lean_object*)&l_Lake_setupFile___closed__3_value;
LEAN_EXPORT uint32_t l_Lake_setupFile(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setupFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_serve_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_serve_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lake_serve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_serve___closed__0 = (const lean_object*)&l_Lake_serve___closed__0_value;
static const lean_string_object l_Lake_serve___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--server"};
static const lean_object* l_Lake_serve___closed__1 = (const lean_object*)&l_Lake_serve___closed__1_value;
static const lean_array_object l_Lake_serve___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_serve___closed__1_value)}};
static const lean_object* l_Lake_serve___closed__2 = (const lean_object*)&l_Lake_serve___closed__2_value;
static const lean_string_object l_Lake_serve___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "warning: package configuration has errors, falling back to plain `lean --server`"};
static const lean_object* l_Lake_serve___closed__3 = (const lean_object*)&l_Lake_serve___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_serve(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_serve___boxed(lean_object*, lean_object*, lean_object*);
static uint32_t _init_l_Lake_noConfigFileCode(void){
_start:
{
uint32_t v___x_1_; 
v___x_1_ = 2;
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1(lean_object* v_msg_10_){
_start:
{
lean_object* v___f_12_; lean_object* v___f_13_; lean_object* v___f_14_; lean_object* v___f_15_; lean_object* v___f_16_; lean_object* v___f_17_; lean_object* v___f_18_; lean_object* v___f_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_573__overap_25_; lean_object* v___x_26_; 
v___f_12_ = ((lean_object*)(l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__0));
v___f_13_ = ((lean_object*)(l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__1));
v___f_14_ = ((lean_object*)(l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__2));
v___f_15_ = ((lean_object*)(l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__3));
v___f_16_ = ((lean_object*)(l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__4));
v___f_17_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__6___boxed), 7, 2);
lean_closure_set(v___f_17_, 0, v___f_16_);
lean_closure_set(v___f_17_, 1, v___f_15_);
v___f_18_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__9___boxed), 6, 1);
lean_closure_set(v___f_18_, 0, v___f_15_);
v___f_19_ = ((lean_object*)(l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__5));
v___x_20_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_20_, 0, v___f_12_);
lean_ctor_set(v___x_20_, 1, v___f_13_);
v___x_21_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
lean_ctor_set(v___x_21_, 1, v___f_14_);
lean_ctor_set(v___x_21_, 2, v___f_17_);
lean_ctor_set(v___x_21_, 3, v___f_18_);
lean_ctor_set(v___x_21_, 4, v___f_19_);
v___x_22_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
lean_ctor_set(v___x_22_, 1, v___f_15_);
v___x_23_ = lean_box(0);
v___x_24_ = l_instInhabitedOfMonad___redArg(v___x_22_, v___x_23_);
v___x_573__overap_25_ = lean_panic_fn_borrowed(v___x_24_, v_msg_10_);
lean_dec(v___x_24_);
v___x_26_ = lean_apply_1(v___x_573__overap_25_, lean_box(0));
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___boxed(lean_object* v_msg_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1(v_msg_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0(lean_object* v_s_30_){
_start:
{
lean_object* v___x_32_; lean_object* v_putStr_33_; lean_object* v___x_34_; 
v___x_32_ = lean_get_stdout();
v_putStr_33_ = lean_ctor_get(v___x_32_, 4);
lean_inc_ref(v_putStr_33_);
lean_dec_ref(v___x_32_);
v___x_34_ = lean_apply_2(v_putStr_33_, v_s_30_, lean_box(0));
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0___boxed(lean_object* v_s_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0(v_s_35_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0(lean_object* v_s_38_){
_start:
{
uint32_t v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_40_ = 10;
v___x_41_ = lean_string_push(v_s_38_, v___x_40_);
v___x_42_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0(v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0___boxed(lean_object* v_s_43_, lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0(v_s_43_);
return v_res_45_;
}
}
LEAN_EXPORT uint32_t l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21(lean_object* v_msg_49_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0(v_msg_49_);
if (lean_obj_tag(v___x_51_) == 0)
{
uint32_t v___x_52_; 
lean_dec_ref_known(v___x_51_, 1);
v___x_52_ = 0;
return v___x_52_;
}
else
{
lean_object* v_a_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; uint32_t v___x_63_; 
v_a_53_ = lean_ctor_get(v___x_51_, 0);
lean_inc(v_a_53_);
lean_dec_ref_known(v___x_51_, 1);
v___x_54_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__0));
v___x_55_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__1));
v___x_56_ = lean_unsigned_to_nat(80u);
v___x_57_ = lean_unsigned_to_nat(6u);
v___x_58_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__2));
v___x_59_ = lean_io_error_to_string(v_a_53_);
v___x_60_ = lean_string_append(v___x_58_, v___x_59_);
lean_dec_ref(v___x_59_);
v___x_61_ = l_mkPanicMessageWithDecl(v___x_54_, v___x_55_, v___x_56_, v___x_57_, v___x_60_);
lean_dec_ref(v___x_60_);
v___x_62_ = l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1(v___x_61_);
v___x_63_ = 1;
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___boxed(lean_object* v_msg_64_, lean_object* v___y_65_){
_start:
{
uint32_t v_res_66_; lean_object* v_r_67_; 
v_res_66_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21(v_msg_64_);
v_r_67_ = lean_box_uint32(v_res_66_);
return v_r_67_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0(lean_object* v_s_68_){
_start:
{
lean_object* v___x_70_; lean_object* v_putStr_71_; lean_object* v___x_72_; 
v___x_70_ = lean_get_stderr();
v_putStr_71_ = lean_ctor_get(v___x_70_, 4);
lean_inc_ref(v_putStr_71_);
lean_dec_ref(v___x_70_);
v___x_72_ = lean_apply_2(v_putStr_71_, v_s_68_, lean_box(0));
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0___boxed(lean_object* v_s_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0(v_s_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(lean_object* v_msg_79_){
_start:
{
lean_object* v___x_81_; 
lean_inc_ref(v_msg_79_);
v___x_81_ = l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0(v_msg_79_);
if (lean_obj_tag(v___x_81_) == 0)
{
lean_object* v_a_82_; 
lean_dec_ref(v_msg_79_);
v_a_82_ = lean_ctor_get(v___x_81_, 0);
lean_inc(v_a_82_);
lean_dec_ref_known(v___x_81_, 1);
return v_a_82_;
}
else
{
lean_object* v_a_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_a_83_ = lean_ctor_get(v___x_81_, 0);
lean_inc(v_a_83_);
lean_dec_ref_known(v___x_81_, 1);
v___x_84_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__0));
v___x_85_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__0));
v___x_86_ = lean_unsigned_to_nat(84u);
v___x_87_ = lean_unsigned_to_nat(6u);
v___x_88_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__1));
v___x_89_ = lean_io_error_to_string(v_a_83_);
v___x_90_ = lean_string_append(v___x_88_, v___x_89_);
lean_dec_ref(v___x_89_);
v___x_91_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__2));
v___x_92_ = lean_string_append(v___x_90_, v___x_91_);
v___x_93_ = lean_string_append(v___x_92_, v_msg_79_);
lean_dec_ref(v_msg_79_);
v___x_94_ = l_mkPanicMessageWithDecl(v___x_84_, v___x_85_, v___x_86_, v___x_87_, v___x_93_);
lean_dec_ref(v___x_93_);
v___x_95_ = l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1(v___x_94_);
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___boxed(lean_object* v_msg_96_, lean_object* v___y_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(v_msg_96_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Lake_setupFile___lam__0(lean_object* v_val_99_, uint8_t v_outLv_100_, uint8_t v_val_101_, lean_object* v_e_102_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lake_logToStream(v_e_102_, v_val_99_, v_outLv_100_, v_val_101_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lake_setupFile___lam__0___boxed(lean_object* v_val_105_, lean_object* v_outLv_106_, lean_object* v_val_107_, lean_object* v_e_108_, lean_object* v___y_109_){
_start:
{
uint8_t v_outLv_boxed_110_; uint8_t v_val_1918__boxed_111_; lean_object* v_res_112_; 
v_outLv_boxed_110_ = lean_unbox(v_outLv_106_);
v_val_1918__boxed_111_ = lean_unbox(v_val_107_);
v_res_112_ = l_Lake_setupFile___lam__0(v_val_105_, v_outLv_boxed_110_, v_val_1918__boxed_111_, v_e_108_);
lean_dec_ref(v_e_108_);
return v_res_112_;
}
}
LEAN_EXPORT uint32_t l_Lake_setupFile(lean_object* v_loadConfig_118_, lean_object* v_leanFile_119_, lean_object* v_header_x3f_120_, lean_object* v_buildConfig_121_){
_start:
{
lean_object* v___x_123_; lean_object* v_lakeEnv_124_; lean_object* v_configFile_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
lean_inc_ref(v_leanFile_119_);
v___x_123_ = l_Lake_resolvePath(v_leanFile_119_);
v_lakeEnv_124_ = lean_ctor_get(v_loadConfig_118_, 0);
v_configFile_125_ = lean_ctor_get(v_loadConfig_118_, 8);
lean_inc_ref(v_configFile_125_);
v___x_126_ = l_Lake_realConfigFile(v_configFile_125_);
v___x_127_ = lean_string_utf8_byte_size(v___x_126_);
v___x_128_ = lean_unsigned_to_nat(0u);
v___x_129_ = lean_nat_dec_eq(v___x_127_, v___x_128_);
if (v___x_129_ == 0)
{
uint8_t v___x_130_; 
v___x_130_ = lean_string_dec_eq(v___x_126_, v___x_123_);
lean_dec_ref(v___x_126_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = ((lean_object*)(l_Lake_invalidConfigEnvVar___closed__0));
v___x_132_ = lean_io_getenv(v___x_131_);
if (lean_obj_tag(v___x_132_) == 1)
{
lean_object* v_val_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint32_t v___x_137_; 
lean_dec_ref(v___x_123_);
lean_dec_ref(v_buildConfig_121_);
lean_dec(v_header_x3f_120_);
lean_dec_ref(v_leanFile_119_);
lean_dec_ref(v_loadConfig_118_);
v_val_133_ = lean_ctor_get(v___x_132_, 0);
lean_inc(v_val_133_);
lean_dec_ref_known(v___x_132_, 1);
v___x_134_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(v_val_133_);
v___x_135_ = ((lean_object*)(l_Lake_setupFile___closed__0));
v___x_136_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(v___x_135_);
v___x_137_ = 1;
return v___x_137_;
}
else
{
lean_object* v_toLogConfig_138_; uint8_t v_outLv_139_; uint8_t v_ansiMode_140_; lean_object* v_out_141_; lean_object* v___x_142_; uint8_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___f_146_; lean_object* v___x_147_; 
lean_dec(v___x_132_);
v_toLogConfig_138_ = lean_ctor_get(v_buildConfig_121_, 0);
v_outLv_139_ = lean_ctor_get_uint8(v_toLogConfig_138_, sizeof(void*)*1 + 1);
v_ansiMode_140_ = lean_ctor_get_uint8(v_toLogConfig_138_, sizeof(void*)*1 + 2);
v_out_141_ = lean_ctor_get(v_toLogConfig_138_, 0);
v___x_142_ = l_Lake_OutStream_get(v_out_141_);
lean_inc_ref(v___x_142_);
v___x_143_ = l_Lake_AnsiMode_isEnabled(v___x_142_, v_ansiMode_140_);
v___x_144_ = lean_box(v_outLv_139_);
v___x_145_ = lean_box(v___x_143_);
v___f_146_ = lean_alloc_closure((void*)(l_Lake_setupFile___lam__0___boxed), 5, 3);
lean_closure_set(v___f_146_, 0, v___x_142_);
lean_closure_set(v___f_146_, 1, v___x_144_);
lean_closure_set(v___f_146_, 2, v___x_145_);
v___x_147_ = l_Lake_loadWorkspace(v_loadConfig_118_, v___f_146_);
lean_dec_ref(v___f_146_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_a_148_);
lean_dec_ref_known(v___x_147_, 1);
v___x_149_ = lean_alloc_closure((void*)(l_Lake_setupServerModule___boxed), 10, 3);
lean_closure_set(v___x_149_, 0, v_leanFile_119_);
lean_closure_set(v___x_149_, 1, v___x_123_);
lean_closure_set(v___x_149_, 2, v_header_x3f_120_);
v___x_150_ = l_Lake_Workspace_runBuild___redArg(v_a_148_, v___x_149_, v_buildConfig_121_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_152_; lean_object* v___x_153_; uint32_t v___x_154_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
lean_inc(v_a_151_);
lean_dec_ref_known(v___x_150_, 1);
v___x_152_ = l_Lean_instToJsonModuleSetup_toJson(v_a_151_);
v___x_153_ = l_Lean_Json_compress(v___x_152_);
v___x_154_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21(v___x_153_);
return v___x_154_;
}
else
{
lean_object* v___x_155_; lean_object* v___x_156_; uint32_t v___x_157_; 
lean_dec_ref_known(v___x_150_, 1);
v___x_155_ = ((lean_object*)(l_Lake_setupFile___closed__1));
v___x_156_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(v___x_155_);
v___x_157_ = 1;
return v___x_157_;
}
}
else
{
lean_object* v___x_158_; lean_object* v___x_159_; uint32_t v___x_160_; 
lean_dec_ref_known(v___x_147_, 1);
lean_dec_ref(v___x_123_);
lean_dec_ref(v_buildConfig_121_);
lean_dec(v_header_x3f_120_);
lean_dec_ref(v_leanFile_119_);
v___x_158_ = ((lean_object*)(l_Lake_setupFile___closed__2));
v___x_159_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(v___x_158_);
v___x_160_ = 1;
return v___x_160_;
}
}
}
else
{
lean_object* v_lake_161_; lean_object* v_sharedDynlib_162_; lean_object* v_path_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; uint32_t v___x_175_; 
lean_inc_ref(v_lakeEnv_124_);
lean_dec_ref(v___x_123_);
lean_dec_ref(v_buildConfig_121_);
lean_dec(v_header_x3f_120_);
lean_dec_ref(v_leanFile_119_);
lean_dec_ref(v_loadConfig_118_);
v_lake_161_ = lean_ctor_get(v_lakeEnv_124_, 0);
lean_inc_ref(v_lake_161_);
lean_dec_ref(v_lakeEnv_124_);
v_sharedDynlib_162_ = lean_ctor_get(v_lake_161_, 4);
lean_inc_ref(v_sharedDynlib_162_);
lean_dec_ref(v_lake_161_);
v_path_163_ = lean_ctor_get(v_sharedDynlib_162_, 0);
lean_inc_ref(v_path_163_);
lean_dec_ref(v_sharedDynlib_162_);
v___x_164_ = l_Lake_configModuleName;
v___x_165_ = lean_box(0);
v___x_166_ = lean_box(1);
v___x_167_ = ((lean_object*)(l_Lake_setupFile___closed__3));
v___x_168_ = l_Lean_Plugin_ofFilePath(v_path_163_);
v___x_169_ = lean_unsigned_to_nat(1u);
v___x_170_ = lean_mk_empty_array_with_capacity(v___x_169_);
v___x_171_ = lean_array_push(v___x_170_, v___x_168_);
v___x_172_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_172_, 0, v___x_164_);
lean_ctor_set(v___x_172_, 1, v___x_165_);
lean_ctor_set(v___x_172_, 2, v___x_165_);
lean_ctor_set(v___x_172_, 3, v___x_166_);
lean_ctor_set(v___x_172_, 4, v___x_167_);
lean_ctor_set(v___x_172_, 5, v___x_171_);
lean_ctor_set(v___x_172_, 6, v___x_166_);
lean_ctor_set_uint8(v___x_172_, sizeof(void*)*7, v___x_129_);
v___x_173_ = l_Lean_instToJsonModuleSetup_toJson(v___x_172_);
v___x_174_ = l_Lean_Json_compress(v___x_173_);
v___x_175_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21(v___x_174_);
return v___x_175_;
}
}
else
{
uint32_t v___x_176_; 
lean_dec_ref(v___x_126_);
lean_dec_ref(v___x_123_);
lean_dec_ref(v_buildConfig_121_);
lean_dec(v_header_x3f_120_);
lean_dec_ref(v_leanFile_119_);
lean_dec_ref(v_loadConfig_118_);
v___x_176_ = 2;
return v___x_176_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_setupFile___boxed(lean_object* v_loadConfig_177_, lean_object* v_leanFile_178_, lean_object* v_header_x3f_179_, lean_object* v_buildConfig_180_, lean_object* v___y_181_){
_start:
{
uint32_t v_res_182_; lean_object* v_r_183_; 
v_res_182_ = l_Lake_setupFile(v_loadConfig_177_, v_leanFile_178_, v_header_x3f_179_, v_buildConfig_180_);
v_r_183_ = lean_box_uint32(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1(lean_object* v_as_184_, size_t v_i_185_, size_t v_stop_186_, lean_object* v_b_187_){
_start:
{
uint8_t v___x_189_; 
v___x_189_ = lean_usize_dec_eq(v_i_185_, v_stop_186_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; uint8_t v___x_191_; uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; size_t v___x_195_; size_t v___x_196_; 
v___x_190_ = lean_box(1);
v___x_191_ = 1;
v___x_192_ = 0;
v___x_193_ = lean_array_uget_borrowed(v_as_184_, v_i_185_);
v___x_194_ = l_Lake_OutStream_logEntry(v___x_190_, v___x_193_, v___x_191_, v___x_192_);
v___x_195_ = ((size_t)1ULL);
v___x_196_ = lean_usize_add(v_i_185_, v___x_195_);
v_i_185_ = v___x_196_;
v_b_187_ = v___x_194_;
goto _start;
}
else
{
lean_object* v___x_198_; 
v___x_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_198_, 0, v_b_187_);
return v___x_198_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1___boxed(lean_object* v_as_199_, lean_object* v_i_200_, lean_object* v_stop_201_, lean_object* v_b_202_, lean_object* v___y_203_){
_start:
{
size_t v_i_boxed_204_; size_t v_stop_boxed_205_; lean_object* v_res_206_; 
v_i_boxed_204_ = lean_unbox_usize(v_i_200_);
lean_dec(v_i_200_);
v_stop_boxed_205_ = lean_unbox_usize(v_stop_201_);
lean_dec(v_stop_201_);
v_res_206_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1(v_as_199_, v_i_boxed_204_, v_stop_boxed_205_, v_b_202_);
lean_dec_ref(v_as_199_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_serve_spec__0(lean_object* v_s_207_){
_start:
{
uint32_t v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_209_ = 10;
v___x_210_ = lean_string_push(v_s_207_, v___x_209_);
v___x_211_ = l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0(v___x_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_serve_spec__0___boxed(lean_object* v_s_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_IO_eprintln___at___00Lake_serve_spec__0(v_s_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lake_serve(lean_object* v_config_223_, lean_object* v_args_224_){
_start:
{
lean_object* v_fst_227_; lean_object* v_snd_228_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v_fst_253_; lean_object* v_snd_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_301_; 
lean_inc_ref(v_config_223_);
v___x_251_ = lean_alloc_closure((void*)(l_Lake_loadWorkspace___boxed), 3, 1);
lean_closure_set(v___x_251_, 0, v_config_223_);
v___x_252_ = l_Lake_LoggerIO_captureLog___redArg(v___x_251_);
v_fst_253_ = lean_ctor_get(v___x_252_, 0);
v_snd_254_ = lean_ctor_get(v___x_252_, 1);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_301_ == 0)
{
v___x_256_ = v___x_252_;
v_isShared_257_ = v_isSharedCheck_301_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_snd_254_);
lean_inc(v_fst_253_);
lean_dec(v___x_252_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_301_;
goto v_resetjp_255_;
}
v___jp_226_:
{
lean_object* v___x_229_; lean_object* v_lakeEnv_230_; lean_object* v_lean_231_; lean_object* v_lean_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_229_ = ((lean_object*)(l_Lake_serve___closed__0));
v_lakeEnv_230_ = lean_ctor_get(v_config_223_, 0);
lean_inc_ref(v_lakeEnv_230_);
lean_dec_ref(v_config_223_);
v_lean_231_ = lean_ctor_get(v_lakeEnv_230_, 1);
lean_inc_ref(v_lean_231_);
lean_dec_ref(v_lakeEnv_230_);
v_lean_232_ = lean_ctor_get(v_lean_231_, 7);
lean_inc_ref(v_lean_232_);
lean_dec_ref(v_lean_231_);
v___x_233_ = ((lean_object*)(l_Lake_serve___closed__2));
v___x_234_ = l_Array_append___redArg(v___x_233_, v_snd_228_);
lean_dec_ref(v_snd_228_);
v___x_235_ = l_Array_append___redArg(v___x_234_, v_args_224_);
v___x_236_ = lean_box(0);
v___x_237_ = 1;
v___x_238_ = 0;
v___x_239_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_239_, 0, v___x_229_);
lean_ctor_set(v___x_239_, 1, v_lean_232_);
lean_ctor_set(v___x_239_, 2, v___x_235_);
lean_ctor_set(v___x_239_, 3, v___x_236_);
lean_ctor_set(v___x_239_, 4, v_fst_227_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*5, v___x_237_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*5 + 1, v___x_238_);
v___x_240_ = lean_io_process_spawn(v___x_239_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v_a_241_; lean_object* v___x_242_; 
v_a_241_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_a_241_);
lean_dec_ref_known(v___x_240_, 1);
v___x_242_ = lean_io_process_child_wait(v___x_229_, v_a_241_);
lean_dec(v_a_241_);
return v___x_242_;
}
else
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
v_a_243_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_250_ == 0)
{
v___x_245_ = v___x_240_;
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_240_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_243_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
v_resetjp_255_:
{
lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = lean_array_get_size(v_snd_254_);
v___x_288_ = lean_nat_dec_lt(v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
goto v___jp_258_;
}
else
{
lean_object* v___x_289_; size_t v___x_290_; size_t v___x_291_; lean_object* v___x_292_; 
v___x_289_ = lean_box(0);
v___x_290_ = ((size_t)0ULL);
v___x_291_ = lean_usize_of_nat(v___x_287_);
v___x_292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1(v_snd_254_, v___x_290_, v___x_291_, v___x_289_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_dec_ref_known(v___x_292_, 1);
goto v___jp_258_;
}
else
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_300_; 
lean_del_object(v___x_256_);
lean_dec(v_snd_254_);
lean_dec(v_fst_253_);
lean_dec_ref(v_config_223_);
v_a_293_ = lean_ctor_get(v___x_292_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_300_ == 0)
{
v___x_295_ = v___x_292_;
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_292_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_298_; 
if (v_isShared_296_ == 0)
{
v___x_298_ = v___x_295_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_293_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
v___jp_258_:
{
if (lean_obj_tag(v_fst_253_) == 1)
{
lean_object* v_val_259_; lean_object* v_packages_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v_config_263_; lean_object* v_moreGlobalServerArgs_264_; lean_object* v___x_265_; 
lean_del_object(v___x_256_);
lean_dec(v_snd_254_);
v_val_259_ = lean_ctor_get(v_fst_253_, 0);
lean_inc(v_val_259_);
lean_dec_ref_known(v_fst_253_, 1);
v_packages_260_ = lean_ctor_get(v_val_259_, 4);
v___x_261_ = lean_unsigned_to_nat(0u);
v___x_262_ = lean_array_fget_borrowed(v_packages_260_, v___x_261_);
v_config_263_ = lean_ctor_get(v___x_262_, 6);
v_moreGlobalServerArgs_264_ = lean_ctor_get(v_config_263_, 3);
lean_inc_ref(v_moreGlobalServerArgs_264_);
v___x_265_ = l_Lake_Workspace_augmentedEnvVars(v_val_259_);
v_fst_227_ = v___x_265_;
v_snd_228_ = v_moreGlobalServerArgs_264_;
goto v___jp_226_;
}
else
{
lean_object* v___x_266_; lean_object* v___x_267_; 
lean_dec(v_fst_253_);
v___x_266_ = ((lean_object*)(l_Lake_serve___closed__3));
v___x_267_ = l_IO_eprintln___at___00Lake_serve_spec__0(v___x_266_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_lakeEnv_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
lean_dec_ref_known(v___x_267_, 1);
v_lakeEnv_268_ = lean_ctor_get(v_config_223_, 0);
lean_inc_ref(v_lakeEnv_268_);
v___x_269_ = l_Lake_Env_baseVars(v_lakeEnv_268_);
v___x_270_ = ((lean_object*)(l_Lake_invalidConfigEnvVar___closed__0));
v___x_271_ = l_Lake_Log_toString(v_snd_254_);
lean_dec(v_snd_254_);
v___x_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_272_, 0, v___x_271_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 1, v___x_272_);
lean_ctor_set(v___x_256_, 0, v___x_270_);
v___x_274_ = v___x_256_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_270_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_272_);
v___x_274_ = v_reuseFailAlloc_277_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_array_push(v___x_269_, v___x_274_);
v___x_276_ = ((lean_object*)(l_Lake_setupFile___closed__3));
v_fst_227_ = v___x_275_;
v_snd_228_ = v___x_276_;
goto v___jp_226_;
}
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_del_object(v___x_256_);
lean_dec(v_snd_254_);
lean_dec_ref(v_config_223_);
v_a_278_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_267_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_267_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_serve___boxed(lean_object* v_config_302_, lean_object* v_args_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lake_serve(v_config_302_, v_args_303_);
lean_dec_ref(v_args_303_);
return v_res_305_;
}
}
lean_object* runtime_initialize_Lake_Load_Config(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Context(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Exit(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Run(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Module(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Package(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Lean_Elab(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_Serve(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Load_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Exit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Run(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Lean_Elab(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_noConfigFileCode = _init_l_Lake_noConfigFileCode();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_Serve(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Load_Config(uint8_t builtin);
lean_object* initialize_Lake_Build_Context(uint8_t builtin);
lean_object* initialize_Lake_Util_Exit(uint8_t builtin);
lean_object* initialize_Lake_Build_Run(uint8_t builtin);
lean_object* initialize_Lake_Build_Module(uint8_t builtin);
lean_object* initialize_Lake_Load_Package(uint8_t builtin);
lean_object* initialize_Lake_Load_Lean_Elab(uint8_t builtin);
lean_object* initialize_Lake_Load_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_Serve(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Load_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Exit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Run(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Lean_Elab(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Serve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_Serve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_Serve(builtin);
}
#ifdef __cplusplus
}
#endif
