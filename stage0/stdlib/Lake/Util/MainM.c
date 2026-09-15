// Lean compiler output
// Module: Lake.Util.MainM
// Imports: public import Lake.Util.Log public import Lake.Util.Exit
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
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lake_OutStream_get(lean_object*);
uint8_t l_Lake_AnsiMode_isEnabled(lean_object*, uint8_t);
lean_object* l_Lake_logToStream(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lake_OutStream_logEntry(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_io_error_to_string(lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lake_Log_maxLv(lean_object*);
uint8_t l_Lake_instOrdLogLevel_ord(uint8_t, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lake_MainM_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadMainM___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_mk___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instMonadMainM___lam__0___closed__0 = (const lean_object*)&l_Lake_instMonadMainM___lam__0___closed__0_value;
static const lean_closure_object l_Lake_instMonadMainM___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_toEIO___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_instMonadMainM___lam__0___closed__1 = (const lean_object*)&l_Lake_instMonadMainM___lam__0___closed__1_value;
static const lean_ctor_object l_Lake_instMonadMainM___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___lam__0___closed__0_value),((lean_object*)&l_Lake_instMonadMainM___lam__0___closed__1_value)}};
static const lean_object* l_Lake_instMonadMainM___lam__0___closed__2 = (const lean_object*)&l_Lake_instMonadMainM___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__7(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadMainM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___closed__0 = (const lean_object*)&l_Lake_instMonadMainM___closed__0_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__0_value)} };
static const lean_object* l_Lake_instMonadMainM___closed__1 = (const lean_object*)&l_Lake_instMonadMainM___closed__1_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___lam__4___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__0_value)} };
static const lean_object* l_Lake_instMonadMainM___closed__2 = (const lean_object*)&l_Lake_instMonadMainM___closed__2_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___lam__6___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__0_value)} };
static const lean_object* l_Lake_instMonadMainM___closed__3 = (const lean_object*)&l_Lake_instMonadMainM___closed__3_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___lam__8___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__0_value)} };
static const lean_object* l_Lake_instMonadMainM___closed__4 = (const lean_object*)&l_Lake_instMonadMainM___closed__4_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___lam__10___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__0_value)} };
static const lean_object* l_Lake_instMonadMainM___closed__5 = (const lean_object*)&l_Lake_instMonadMainM___closed__5_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___lam__12___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__0_value)} };
static const lean_object* l_Lake_instMonadMainM___closed__6 = (const lean_object*)&l_Lake_instMonadMainM___closed__6_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___lam__14___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__0_value)} };
static const lean_object* l_Lake_instMonadMainM___closed__7 = (const lean_object*)&l_Lake_instMonadMainM___closed__7_value;
static const lean_ctor_object l_Lake_instMonadMainM___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__3_value),((lean_object*)&l_Lake_instMonadMainM___closed__2_value)}};
static const lean_object* l_Lake_instMonadMainM___closed__8 = (const lean_object*)&l_Lake_instMonadMainM___closed__8_value;
static const lean_ctor_object l_Lake_instMonadMainM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__8_value),((lean_object*)&l_Lake_instMonadMainM___closed__4_value),((lean_object*)&l_Lake_instMonadMainM___closed__5_value),((lean_object*)&l_Lake_instMonadMainM___closed__6_value),((lean_object*)&l_Lake_instMonadMainM___closed__7_value)}};
static const lean_object* l_Lake_instMonadMainM___closed__9 = (const lean_object*)&l_Lake_instMonadMainM___closed__9_value;
static const lean_ctor_object l_Lake_instMonadMainM___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__9_value),((lean_object*)&l_Lake_instMonadMainM___closed__1_value)}};
static const lean_object* l_Lake_instMonadMainM___closed__10 = (const lean_object*)&l_Lake_instMonadMainM___closed__10_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadMainM = (const lean_object*)&l_Lake_instMonadMainM___closed__10_value;
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadFinallyMainM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadFinallyMainM___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__0_value)} };
static const lean_object* l_Lake_instMonadFinallyMainM___closed__0 = (const lean_object*)&l_Lake_instMonadFinallyMainM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadFinallyMainM = (const lean_object*)&l_Lake_instMonadFinallyMainM___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadLiftBaseIOMainM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadLiftBaseIOMainM___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadLiftBaseIOMainM___closed__0 = (const lean_object*)&l_Lake_instMonadLiftBaseIOMainM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadLiftBaseIOMainM = (const lean_object*)&l_Lake_instMonadLiftBaseIOMainM___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lake_MainM_run___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_run___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lake_MainM_run(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_run___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_exit___redArg(uint32_t);
LEAN_EXPORT lean_object* l_Lake_MainM_exit___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_exit(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lake_MainM_exit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_MainM_instMonadExit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_exit___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_instMonadExit___closed__0 = (const lean_object*)&l_Lake_MainM_instMonadExit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MainM_instMonadExit = (const lean_object*)&l_Lake_MainM_instMonadExit___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_failure___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_MainM_failure___redArg();
LEAN_EXPORT lean_object* l_Lake_MainM_failure___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_failure(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_failure___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_orElse(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_failure___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__0 = (const lean_object*)&l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__0_value;
static const lean_closure_object l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_orElse___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__1 = (const lean_object*)&l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative;
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLog___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLog___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_MainM_instMonadLog___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_instMonadLog___lam__0___boxed, .m_arity = 5, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_MainM_instMonadLog___closed__0 = (const lean_object*)&l_Lake_MainM_instMonadLog___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MainM_instMonadLog = (const lean_object*)&l_Lake_MainM_instMonadLog___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_error(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lake_MainM_error___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_MainM_instMonadError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_instMonadError___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_instMonadError___closed__0 = (const lean_object*)&l_Lake_MainM_instMonadError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MainM_instMonadError = (const lean_object*)&l_Lake_MainM_instMonadError___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_MainM_instMonadLiftIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_instMonadLiftIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_instMonadLiftIO___closed__0 = (const lean_object*)&l_Lake_MainM_instMonadLiftIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MainM_instMonadLiftIO = (const lean_object*)&l_Lake_MainM_instMonadLiftIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_MainM_runLogIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__0 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_MainM_instMonadLiftLogIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_liftLogIO___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_instMonadLiftLogIO___closed__0 = (const lean_object*)&l_Lake_MainM_instMonadLiftLogIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MainM_instMonadLiftLogIO = (const lean_object*)&l_Lake_MainM_instMonadLiftLogIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_MainM_instMonadLiftLoggerIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MainM_liftLoggerIO___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_instMonadLiftLoggerIO___closed__0 = (const lean_object*)&l_Lake_MainM_instMonadLiftLoggerIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MainM_instMonadLiftLoggerIO = (const lean_object*)&l_Lake_MainM_instMonadLiftLoggerIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_mk___redArg(lean_object* v_toEIO_1_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_apply_1(v_toEIO_1_, lean_box(0));
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk___redArg___boxed(lean_object* v_toEIO_4_, lean_object* v___y_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lake_MainM_mk___redArg(v_toEIO_4_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk(lean_object* v_00_u03b1_7_, lean_object* v_toEIO_8_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_apply_1(v_toEIO_8_, lean_box(0));
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk___boxed(lean_object* v_00_u03b1_11_, lean_object* v_toEIO_12_, lean_object* v___y_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lake_MainM_mk(v_00_u03b1_11_, v_toEIO_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___redArg(lean_object* v_self_15_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_apply_1(v_self_15_, lean_box(0));
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___redArg___boxed(lean_object* v_self_18_, lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lake_MainM_toEIO___redArg(v_self_18_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO(lean_object* v_00_u03b1_21_, lean_object* v_self_22_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_apply_1(v_self_22_, lean_box(0));
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___boxed(lean_object* v_00_u03b1_25_, lean_object* v_self_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lake_MainM_toEIO(v_00_u03b1_25_, v_self_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__0(lean_object* v_00_u03b1_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = ((lean_object*)(l_Lake_instMonadMainM___lam__0___closed__2));
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__1(lean_object* v_invFun_36_, lean_object* v_x_37_, lean_object* v_f_38_, lean_object* v_invFun_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_apply_2(v_invFun_36_, v_x_37_, lean_box(0));
if (lean_obj_tag(v___x_41_) == 0)
{
lean_object* v_a_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_a_42_ = lean_ctor_get(v___x_41_, 0);
lean_inc(v_a_42_);
lean_dec_ref_known(v___x_41_, 1);
v___x_43_ = lean_apply_1(v_f_38_, v_a_42_);
v___x_44_ = lean_apply_2(v_invFun_39_, v___x_43_, lean_box(0));
return v___x_44_;
}
else
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
lean_dec(v_invFun_39_);
lean_dec_ref(v_f_38_);
v_a_45_ = lean_ctor_get(v___x_41_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_41_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_41_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_41_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_45_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__1___boxed(lean_object* v_invFun_53_, lean_object* v_x_54_, lean_object* v_f_55_, lean_object* v_invFun_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lake_instMonadMainM___lam__1(v_invFun_53_, v_x_54_, v_f_55_, v_invFun_56_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__2(lean_object* v___f_59_, lean_object* v_00_u03b1_60_, lean_object* v_00_u03b2_61_, lean_object* v_x_62_, lean_object* v_f_63_){
_start:
{
lean_object* v___x_65_; lean_object* v_toFun_66_; lean_object* v_invFun_67_; lean_object* v_invFun_68_; lean_object* v___f_69_; lean_object* v___x_70_; 
v___x_65_ = lean_apply_1(v___f_59_, lean_box(0));
v_toFun_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_toFun_66_);
v_invFun_67_ = lean_ctor_get(v___x_65_, 1);
lean_inc(v_invFun_67_);
v_invFun_68_ = lean_ctor_get(v___x_65_, 1);
lean_inc(v_invFun_68_);
lean_dec_ref(v___x_65_);
v___f_69_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___lam__1___boxed), 5, 4);
lean_closure_set(v___f_69_, 0, v_invFun_68_);
lean_closure_set(v___f_69_, 1, v_x_62_);
lean_closure_set(v___f_69_, 2, v_f_63_);
lean_closure_set(v___f_69_, 3, v_invFun_67_);
v___x_70_ = lean_apply_2(v_toFun_66_, v___f_69_, lean_box(0));
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__2___boxed(lean_object* v___f_71_, lean_object* v_00_u03b1_72_, lean_object* v_00_u03b2_73_, lean_object* v_x_74_, lean_object* v_f_75_, lean_object* v___y_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_Lake_instMonadMainM___lam__2(v___f_71_, v_00_u03b1_72_, v_00_u03b2_73_, v_x_74_, v_f_75_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__3(lean_object* v_invFun_78_, lean_object* v_x_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_apply_2(v_invFun_78_, v_x_79_, lean_box(0));
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_89_; 
v_isSharedCheck_89_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_89_ == 0)
{
lean_object* v_unused_90_; 
v_unused_90_ = lean_ctor_get(v___x_82_, 0);
lean_dec(v_unused_90_);
v___x_84_ = v___x_82_;
v_isShared_85_ = v_isSharedCheck_89_;
goto v_resetjp_83_;
}
else
{
lean_dec(v___x_82_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_89_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_87_; 
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 0, v_a_80_);
v___x_87_ = v___x_84_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_a_80_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
else
{
lean_object* v_a_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_98_; 
lean_dec(v_a_80_);
v_a_91_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_98_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_98_ == 0)
{
v___x_93_ = v___x_82_;
v_isShared_94_ = v_isSharedCheck_98_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_a_91_);
lean_dec(v___x_82_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_98_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___x_96_; 
if (v_isShared_94_ == 0)
{
v___x_96_ = v___x_93_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_a_91_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__3___boxed(lean_object* v_invFun_99_, lean_object* v_x_100_, lean_object* v_a_101_, lean_object* v___y_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lake_instMonadMainM___lam__3(v_invFun_99_, v_x_100_, v_a_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__4(lean_object* v___f_104_, lean_object* v_00_u03b1_105_, lean_object* v_00_u03b2_106_, lean_object* v_a_107_, lean_object* v_x_108_){
_start:
{
lean_object* v___x_110_; lean_object* v_toFun_111_; lean_object* v_invFun_112_; lean_object* v___f_113_; lean_object* v___x_114_; 
v___x_110_ = lean_apply_1(v___f_104_, lean_box(0));
v_toFun_111_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_toFun_111_);
v_invFun_112_ = lean_ctor_get(v___x_110_, 1);
lean_inc(v_invFun_112_);
lean_dec_ref(v___x_110_);
v___f_113_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___lam__3___boxed), 4, 3);
lean_closure_set(v___f_113_, 0, v_invFun_112_);
lean_closure_set(v___f_113_, 1, v_x_108_);
lean_closure_set(v___f_113_, 2, v_a_107_);
v___x_114_ = lean_apply_2(v_toFun_111_, v___f_113_, lean_box(0));
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__4___boxed(lean_object* v___f_115_, lean_object* v_00_u03b1_116_, lean_object* v_00_u03b2_117_, lean_object* v_a_118_, lean_object* v_x_119_, lean_object* v___y_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lake_instMonadMainM___lam__4(v___f_115_, v_00_u03b1_116_, v_00_u03b2_117_, v_a_118_, v_x_119_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__5(lean_object* v_invFun_122_, lean_object* v_x_123_, lean_object* v_f_124_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_apply_2(v_invFun_122_, v_x_123_, lean_box(0));
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_135_; 
v_a_127_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_135_ == 0)
{
v___x_129_ = v___x_126_;
v_isShared_130_ = v_isSharedCheck_135_;
goto v_resetjp_128_;
}
else
{
lean_inc(v_a_127_);
lean_dec(v___x_126_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_135_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
lean_object* v___x_131_; lean_object* v___x_133_; 
v___x_131_ = lean_apply_1(v_f_124_, v_a_127_);
if (v_isShared_130_ == 0)
{
lean_ctor_set(v___x_129_, 0, v___x_131_);
v___x_133_ = v___x_129_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v___x_131_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_dec(v_f_124_);
v_a_136_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_126_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_126_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__5___boxed(lean_object* v_invFun_144_, lean_object* v_x_145_, lean_object* v_f_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lake_instMonadMainM___lam__5(v_invFun_144_, v_x_145_, v_f_146_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__6(lean_object* v___f_149_, lean_object* v_00_u03b1_150_, lean_object* v_00_u03b2_151_, lean_object* v_f_152_, lean_object* v_x_153_){
_start:
{
lean_object* v___x_155_; lean_object* v_toFun_156_; lean_object* v_invFun_157_; lean_object* v___f_158_; lean_object* v___x_159_; 
v___x_155_ = lean_apply_1(v___f_149_, lean_box(0));
v_toFun_156_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_toFun_156_);
v_invFun_157_ = lean_ctor_get(v___x_155_, 1);
lean_inc(v_invFun_157_);
lean_dec_ref(v___x_155_);
v___f_158_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___lam__5___boxed), 4, 3);
lean_closure_set(v___f_158_, 0, v_invFun_157_);
lean_closure_set(v___f_158_, 1, v_x_153_);
lean_closure_set(v___f_158_, 2, v_f_152_);
v___x_159_ = lean_apply_2(v_toFun_156_, v___f_158_, lean_box(0));
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__6___boxed(lean_object* v___f_160_, lean_object* v_00_u03b1_161_, lean_object* v_00_u03b2_162_, lean_object* v_f_163_, lean_object* v_x_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lake_instMonadMainM___lam__6(v___f_160_, v_00_u03b1_161_, v_00_u03b2_162_, v_f_163_, v_x_164_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__7(lean_object* v_a_167_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_169_, 0, v_a_167_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__7___boxed(lean_object* v_a_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lake_instMonadMainM___lam__7(v_a_170_);
return v_res_172_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__8(lean_object* v___f_173_, lean_object* v_00_u03b1_174_, lean_object* v_a_175_){
_start:
{
lean_object* v___x_177_; lean_object* v_toFun_178_; lean_object* v___f_179_; lean_object* v___x_180_; 
v___x_177_ = lean_apply_1(v___f_173_, lean_box(0));
v_toFun_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_toFun_178_);
lean_dec_ref(v___x_177_);
v___f_179_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___lam__7___boxed), 2, 1);
lean_closure_set(v___f_179_, 0, v_a_175_);
v___x_180_ = lean_apply_2(v_toFun_178_, v___f_179_, lean_box(0));
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__8___boxed(lean_object* v___f_181_, lean_object* v_00_u03b1_182_, lean_object* v_a_183_, lean_object* v___y_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Lake_instMonadMainM___lam__8(v___f_181_, v_00_u03b1_182_, v_a_183_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__9(lean_object* v_invFun_186_, lean_object* v_f_187_, lean_object* v___f_188_, lean_object* v_x_189_){
_start:
{
lean_object* v___x_191_; 
v___x_191_ = lean_apply_2(v_invFun_186_, v_f_187_, lean_box(0));
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; lean_object* v___x_193_; lean_object* v_invFun_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_191_, 1);
v___x_193_ = lean_apply_1(v___f_188_, lean_box(0));
v_invFun_194_ = lean_ctor_get(v___x_193_, 1);
lean_inc(v_invFun_194_);
lean_dec_ref(v___x_193_);
v___x_195_ = lean_box(0);
v___x_196_ = lean_apply_1(v_x_189_, v___x_195_);
v___x_197_ = lean_apply_2(v_invFun_194_, v___x_196_, lean_box(0));
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_206_; 
v_a_198_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_206_ == 0)
{
v___x_200_ = v___x_197_;
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_197_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_206_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_202_; lean_object* v___x_204_; 
v___x_202_ = lean_apply_1(v_a_192_, v_a_198_);
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 0, v___x_202_);
v___x_204_ = v___x_200_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
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
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
lean_dec(v_a_192_);
v_a_207_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_197_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_197_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
else
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
lean_dec_ref(v_x_189_);
lean_dec_ref(v___f_188_);
v_a_215_ = lean_ctor_get(v___x_191_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_191_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_191_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_191_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
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
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__9___boxed(lean_object* v_invFun_223_, lean_object* v_f_224_, lean_object* v___f_225_, lean_object* v_x_226_, lean_object* v___y_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Lake_instMonadMainM___lam__9(v_invFun_223_, v_f_224_, v___f_225_, v_x_226_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__10(lean_object* v___f_229_, lean_object* v_00_u03b1_230_, lean_object* v_00_u03b2_231_, lean_object* v_f_232_, lean_object* v_x_233_){
_start:
{
lean_object* v___x_235_; lean_object* v_toFun_236_; lean_object* v_invFun_237_; lean_object* v___f_238_; lean_object* v___x_239_; 
lean_inc_ref(v___f_229_);
v___x_235_ = lean_apply_1(v___f_229_, lean_box(0));
v_toFun_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_toFun_236_);
v_invFun_237_ = lean_ctor_get(v___x_235_, 1);
lean_inc(v_invFun_237_);
lean_dec_ref(v___x_235_);
v___f_238_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___lam__9___boxed), 5, 4);
lean_closure_set(v___f_238_, 0, v_invFun_237_);
lean_closure_set(v___f_238_, 1, v_f_232_);
lean_closure_set(v___f_238_, 2, v___f_229_);
lean_closure_set(v___f_238_, 3, v_x_233_);
v___x_239_ = lean_apply_2(v_toFun_236_, v___f_238_, lean_box(0));
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__10___boxed(lean_object* v___f_240_, lean_object* v_00_u03b1_241_, lean_object* v_00_u03b2_242_, lean_object* v_f_243_, lean_object* v_x_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lake_instMonadMainM___lam__10(v___f_240_, v_00_u03b1_241_, v_00_u03b2_242_, v_f_243_, v_x_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__11(lean_object* v_invFun_247_, lean_object* v_x_248_, lean_object* v___f_249_, lean_object* v_y_250_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = lean_apply_2(v_invFun_247_, v_x_248_, lean_box(0));
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_254_; lean_object* v_invFun_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_a_253_);
lean_dec_ref_known(v___x_252_, 1);
v___x_254_ = lean_apply_1(v___f_249_, lean_box(0));
v_invFun_255_ = lean_ctor_get(v___x_254_, 1);
lean_inc(v_invFun_255_);
lean_dec_ref(v___x_254_);
v___x_256_ = lean_box(0);
v___x_257_ = lean_apply_1(v_y_250_, v___x_256_);
v___x_258_ = lean_apply_2(v_invFun_255_, v___x_257_, lean_box(0));
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_265_ == 0)
{
lean_object* v_unused_266_; 
v_unused_266_ = lean_ctor_get(v___x_258_, 0);
lean_dec(v_unused_266_);
v___x_260_ = v___x_258_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_dec(v___x_258_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v_a_253_);
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_253_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec(v_a_253_);
v_a_267_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_258_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_258_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
else
{
lean_dec_ref(v_y_250_);
lean_dec_ref(v___f_249_);
return v___x_252_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__11___boxed(lean_object* v_invFun_275_, lean_object* v_x_276_, lean_object* v___f_277_, lean_object* v_y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lake_instMonadMainM___lam__11(v_invFun_275_, v_x_276_, v___f_277_, v_y_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__12(lean_object* v___f_281_, lean_object* v_00_u03b1_282_, lean_object* v_00_u03b2_283_, lean_object* v_x_284_, lean_object* v_y_285_){
_start:
{
lean_object* v___x_287_; lean_object* v_toFun_288_; lean_object* v_invFun_289_; lean_object* v___f_290_; lean_object* v___x_291_; 
lean_inc_ref(v___f_281_);
v___x_287_ = lean_apply_1(v___f_281_, lean_box(0));
v_toFun_288_ = lean_ctor_get(v___x_287_, 0);
lean_inc(v_toFun_288_);
v_invFun_289_ = lean_ctor_get(v___x_287_, 1);
lean_inc(v_invFun_289_);
lean_dec_ref(v___x_287_);
v___f_290_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___lam__11___boxed), 5, 4);
lean_closure_set(v___f_290_, 0, v_invFun_289_);
lean_closure_set(v___f_290_, 1, v_x_284_);
lean_closure_set(v___f_290_, 2, v___f_281_);
lean_closure_set(v___f_290_, 3, v_y_285_);
v___x_291_ = lean_apply_2(v_toFun_288_, v___f_290_, lean_box(0));
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__12___boxed(lean_object* v___f_292_, lean_object* v_00_u03b1_293_, lean_object* v_00_u03b2_294_, lean_object* v_x_295_, lean_object* v_y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lake_instMonadMainM___lam__12(v___f_292_, v_00_u03b1_293_, v_00_u03b2_294_, v_x_295_, v_y_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__13(lean_object* v_invFun_299_, lean_object* v_x_300_, lean_object* v_y_301_, lean_object* v_invFun_302_){
_start:
{
lean_object* v___x_304_; 
v___x_304_ = lean_apply_2(v_invFun_299_, v_x_300_, lean_box(0));
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
lean_dec_ref_known(v___x_304_, 1);
v___x_305_ = lean_box(0);
v___x_306_ = lean_apply_1(v_y_301_, v___x_305_);
v___x_307_ = lean_apply_2(v_invFun_302_, v___x_306_, lean_box(0));
return v___x_307_;
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec(v_invFun_302_);
lean_dec_ref(v_y_301_);
v_a_308_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_304_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_304_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__13___boxed(lean_object* v_invFun_316_, lean_object* v_x_317_, lean_object* v_y_318_, lean_object* v_invFun_319_, lean_object* v___y_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lake_instMonadMainM___lam__13(v_invFun_316_, v_x_317_, v_y_318_, v_invFun_319_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__14(lean_object* v___f_322_, lean_object* v_00_u03b1_323_, lean_object* v_00_u03b2_324_, lean_object* v_x_325_, lean_object* v_y_326_){
_start:
{
lean_object* v___x_328_; lean_object* v_toFun_329_; lean_object* v_invFun_330_; lean_object* v_invFun_331_; lean_object* v___f_332_; lean_object* v___x_333_; 
v___x_328_ = lean_apply_1(v___f_322_, lean_box(0));
v_toFun_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_toFun_329_);
v_invFun_330_ = lean_ctor_get(v___x_328_, 1);
lean_inc(v_invFun_330_);
v_invFun_331_ = lean_ctor_get(v___x_328_, 1);
lean_inc(v_invFun_331_);
lean_dec_ref(v___x_328_);
v___f_332_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___lam__13___boxed), 5, 4);
lean_closure_set(v___f_332_, 0, v_invFun_331_);
lean_closure_set(v___f_332_, 1, v_x_325_);
lean_closure_set(v___f_332_, 2, v_y_326_);
lean_closure_set(v___f_332_, 3, v_invFun_330_);
v___x_333_ = lean_apply_2(v_toFun_329_, v___f_332_, lean_box(0));
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___lam__14___boxed(lean_object* v___f_334_, lean_object* v_00_u03b1_335_, lean_object* v_00_u03b2_336_, lean_object* v_x_337_, lean_object* v_y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lake_instMonadMainM___lam__14(v___f_334_, v_00_u03b1_335_, v_00_u03b2_336_, v_x_337_, v_y_338_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__1(lean_object* v___f_369_, lean_object* v_f_370_, lean_object* v_a_x3f_371_){
_start:
{
lean_object* v___x_373_; lean_object* v_invFun_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_373_ = lean_apply_1(v___f_369_, lean_box(0));
v_invFun_374_ = lean_ctor_get(v___x_373_, 1);
lean_inc(v_invFun_374_);
lean_dec_ref(v___x_373_);
v___x_375_ = lean_apply_1(v_f_370_, v_a_x3f_371_);
v___x_376_ = lean_apply_2(v_invFun_374_, v___x_375_, lean_box(0));
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__1___boxed(lean_object* v___f_377_, lean_object* v_f_378_, lean_object* v_a_x3f_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lake_instMonadFinallyMainM___lam__1(v___f_377_, v_f_378_, v_a_x3f_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__0(lean_object* v_invFun_382_, lean_object* v_x_383_, lean_object* v___f_384_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = lean_apply_2(v_invFun_382_, v_x_383_, lean_box(0));
if (lean_obj_tag(v___x_386_) == 0)
{
lean_object* v_a_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_412_; 
v_a_387_ = lean_ctor_get(v___x_386_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_412_ == 0)
{
v___x_389_ = v___x_386_;
v_isShared_390_ = v_isSharedCheck_412_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_a_387_);
lean_dec(v___x_386_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_412_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
lean_inc(v_a_387_);
if (v_isShared_390_ == 0)
{
lean_ctor_set_tag(v___x_389_, 1);
v___x_392_ = v___x_389_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_387_);
v___x_392_ = v_reuseFailAlloc_411_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
lean_object* v___x_393_; 
v___x_393_ = lean_apply_2(v___f_384_, v___x_392_, lean_box(0));
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_402_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_402_ == 0)
{
v___x_396_ = v___x_393_;
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_393_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_402_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_398_; lean_object* v___x_400_; 
v___x_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_398_, 0, v_a_387_);
lean_ctor_set(v___x_398_, 1, v_a_394_);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 0, v___x_398_);
v___x_400_ = v___x_396_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_398_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
lean_dec(v_a_387_);
v_a_403_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v___x_393_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_393_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_a_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
}
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v_a_413_ = lean_ctor_get(v___x_386_, 0);
lean_inc(v_a_413_);
lean_dec_ref_known(v___x_386_, 1);
v___x_414_ = lean_box(0);
v___x_415_ = lean_apply_2(v___f_384_, v___x_414_, lean_box(0));
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_422_ == 0)
{
lean_object* v_unused_423_; 
v_unused_423_ = lean_ctor_get(v___x_415_, 0);
lean_dec(v_unused_423_);
v___x_417_ = v___x_415_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_dec(v___x_415_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
lean_ctor_set_tag(v___x_417_, 1);
lean_ctor_set(v___x_417_, 0, v_a_413_);
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_a_413_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
lean_dec(v_a_413_);
v_a_424_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_431_ == 0)
{
v___x_426_ = v___x_415_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_415_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_424_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__0___boxed(lean_object* v_invFun_432_, lean_object* v_x_433_, lean_object* v___f_434_, lean_object* v___y_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lake_instMonadFinallyMainM___lam__0(v_invFun_432_, v_x_433_, v___f_434_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__2(lean_object* v___f_437_, lean_object* v_00_u03b1_438_, lean_object* v_00_u03b2_439_, lean_object* v_x_440_, lean_object* v_f_441_){
_start:
{
lean_object* v___x_443_; lean_object* v_toFun_444_; lean_object* v_invFun_445_; lean_object* v___f_446_; lean_object* v___f_447_; lean_object* v___x_448_; 
lean_inc_ref(v___f_437_);
v___x_443_ = lean_apply_1(v___f_437_, lean_box(0));
v_toFun_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_toFun_444_);
v_invFun_445_ = lean_ctor_get(v___x_443_, 1);
lean_inc(v_invFun_445_);
lean_dec_ref(v___x_443_);
v___f_446_ = lean_alloc_closure((void*)(l_Lake_instMonadFinallyMainM___lam__1___boxed), 4, 2);
lean_closure_set(v___f_446_, 0, v___f_437_);
lean_closure_set(v___f_446_, 1, v_f_441_);
v___f_447_ = lean_alloc_closure((void*)(l_Lake_instMonadFinallyMainM___lam__0___boxed), 4, 3);
lean_closure_set(v___f_447_, 0, v_invFun_445_);
lean_closure_set(v___f_447_, 1, v_x_440_);
lean_closure_set(v___f_447_, 2, v___f_446_);
v___x_448_ = lean_apply_2(v_toFun_444_, v___f_447_, lean_box(0));
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___lam__2___boxed(lean_object* v___f_449_, lean_object* v_00_u03b1_450_, lean_object* v_00_u03b2_451_, lean_object* v_x_452_, lean_object* v_f_453_, lean_object* v___y_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lake_instMonadFinallyMainM___lam__2(v___f_449_, v_00_u03b1_450_, v_00_u03b2_451_, v_x_452_, v_f_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___lam__0(lean_object* v_00_u03b1_459_, lean_object* v_x_460_){
_start:
{
lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_462_ = lean_apply_1(v_x_460_, lean_box(0));
v___x_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___lam__0___boxed(lean_object* v_00_u03b1_464_, lean_object* v_x_465_, lean_object* v___y_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lake_instMonadLiftBaseIOMainM___lam__0(v_00_u03b1_464_, v_x_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___redArg(lean_object* v_self_470_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = lean_apply_1(v_self_470_, lean_box(0));
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_472_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_472_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
lean_ctor_set_tag(v___x_475_, 1);
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
v_a_481_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___x_472_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_472_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_484_ == 0)
{
lean_ctor_set_tag(v___x_483_, 0);
v___x_486_ = v___x_483_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_481_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___redArg___boxed(lean_object* v_self_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lake_MainM_toBaseIO___redArg(v_self_489_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO(lean_object* v_00_u03b1_492_, lean_object* v_self_493_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = lean_apply_1(v_self_493_, lean_box(0));
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
v_a_496_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_495_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_495_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
lean_ctor_set_tag(v___x_498_, 1);
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
else
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
v_a_504_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v___x_495_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_495_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
lean_ctor_set_tag(v___x_506_, 0);
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___boxed(lean_object* v_00_u03b1_512_, lean_object* v_self_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lake_MainM_toBaseIO(v_00_u03b1_512_, v_self_513_);
return v_res_515_;
}
}
LEAN_EXPORT uint32_t l_Lake_MainM_run___redArg(lean_object* v_self_516_){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = lean_apply_1(v_self_516_, lean_box(0));
if (lean_obj_tag(v___x_518_) == 0)
{
uint32_t v___x_519_; 
lean_dec_ref_known(v___x_518_, 1);
v___x_519_ = 0;
return v___x_519_;
}
else
{
lean_object* v_a_520_; uint32_t v___x_521_; 
v_a_520_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_520_);
lean_dec_ref_known(v___x_518_, 1);
v___x_521_ = lean_unbox_uint32(v_a_520_);
lean_dec(v_a_520_);
return v___x_521_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_run___redArg___boxed(lean_object* v_self_522_, lean_object* v___y_523_){
_start:
{
uint32_t v_res_524_; lean_object* v_r_525_; 
v_res_524_ = l_Lake_MainM_run___redArg(v_self_522_);
v_r_525_ = lean_box_uint32(v_res_524_);
return v_r_525_;
}
}
LEAN_EXPORT uint32_t l_Lake_MainM_run(lean_object* v_00_u03b1_526_, lean_object* v_self_527_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lean_apply_1(v_self_527_, lean_box(0));
if (lean_obj_tag(v___x_529_) == 0)
{
uint32_t v___x_530_; 
lean_dec_ref_known(v___x_529_, 1);
v___x_530_ = 0;
return v___x_530_;
}
else
{
lean_object* v_a_531_; uint32_t v___x_532_; 
v_a_531_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_529_, 1);
v___x_532_ = lean_unbox_uint32(v_a_531_);
lean_dec(v_a_531_);
return v___x_532_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_run___boxed(lean_object* v_00_u03b1_533_, lean_object* v_self_534_, lean_object* v___y_535_){
_start:
{
uint32_t v_res_536_; lean_object* v_r_537_; 
v_res_536_ = l_Lake_MainM_run(v_00_u03b1_533_, v_self_534_);
v_r_537_ = lean_box_uint32(v_res_536_);
return v_r_537_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit___redArg(uint32_t v_rc_538_){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = lean_box_uint32(v_rc_538_);
v___x_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit___redArg___boxed(lean_object* v_rc_542_, lean_object* v___y_543_){
_start:
{
uint32_t v_rc_boxed_544_; lean_object* v_res_545_; 
v_rc_boxed_544_ = lean_unbox_uint32(v_rc_542_);
lean_dec(v_rc_542_);
v_res_545_ = l_Lake_MainM_exit___redArg(v_rc_boxed_544_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit(lean_object* v_00_u03b1_546_, uint32_t v_rc_547_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_box_uint32(v_rc_547_);
v___x_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit___boxed(lean_object* v_00_u03b1_551_, lean_object* v_rc_552_, lean_object* v___y_553_){
_start:
{
uint32_t v_rc_boxed_554_; lean_object* v_res_555_; 
v_rc_boxed_554_ = lean_unbox_uint32(v_rc_552_);
lean_dec(v_rc_552_);
v_res_555_ = l_Lake_MainM_exit(v_00_u03b1_551_, v_rc_boxed_554_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___redArg(lean_object* v_f_558_, lean_object* v_self_559_){
_start:
{
lean_object* v___x_561_; 
v___x_561_ = lean_apply_1(v_self_559_, lean_box(0));
if (lean_obj_tag(v___x_561_) == 0)
{
lean_dec_ref(v_f_558_);
return v___x_561_;
}
else
{
lean_object* v_a_562_; lean_object* v___x_563_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
lean_inc(v_a_562_);
lean_dec_ref_known(v___x_561_, 1);
v___x_563_ = lean_apply_2(v_f_558_, v_a_562_, lean_box(0));
return v___x_563_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___redArg___boxed(lean_object* v_f_564_, lean_object* v_self_565_, lean_object* v___y_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lake_MainM_tryCatchExit___redArg(v_f_564_, v_self_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit(lean_object* v_00_u03b1_568_, lean_object* v_f_569_, lean_object* v_self_570_){
_start:
{
lean_object* v___x_572_; 
v___x_572_ = lean_apply_1(v_self_570_, lean_box(0));
if (lean_obj_tag(v___x_572_) == 0)
{
lean_dec_ref(v_f_569_);
return v___x_572_;
}
else
{
lean_object* v_a_573_; lean_object* v___x_574_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_a_573_);
lean_dec_ref_known(v___x_572_, 1);
v___x_574_ = lean_apply_2(v_f_569_, v_a_573_, lean_box(0));
return v___x_574_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___boxed(lean_object* v_00_u03b1_575_, lean_object* v_f_576_, lean_object* v_self_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lake_MainM_tryCatchExit(v_00_u03b1_575_, v_f_576_, v_self_577_);
return v_res_579_;
}
}
static lean_object* _init_l_Lake_MainM_tryCatchError___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_580_; lean_object* v___x_581_; 
v___x_580_ = 0;
v___x_581_ = lean_box_uint32(v___x_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___redArg(lean_object* v_f_582_, lean_object* v_self_583_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = lean_apply_1(v_self_583_, lean_box(0));
if (lean_obj_tag(v___x_585_) == 0)
{
lean_dec_ref(v_f_582_);
return v___x_585_;
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_598_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_598_ == 0)
{
v___x_588_ = v___x_585_;
v_isShared_589_ = v_isSharedCheck_598_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_585_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_598_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
uint32_t v___x_590_; uint32_t v___x_591_; uint8_t v___x_592_; 
v___x_590_ = 0;
v___x_591_ = lean_unbox_uint32(v_a_586_);
v___x_592_ = lean_uint32_dec_eq(v___x_591_, v___x_590_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; 
lean_del_object(v___x_588_);
v___x_593_ = lean_apply_2(v_f_582_, v_a_586_, lean_box(0));
return v___x_593_;
}
else
{
lean_object* v___x_594_; lean_object* v___x_596_; 
lean_dec(v_a_586_);
lean_dec_ref(v_f_582_);
v___x_594_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 0, v___x_594_);
v___x_596_ = v___x_588_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_594_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___redArg___boxed(lean_object* v_f_599_, lean_object* v_self_600_, lean_object* v___y_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lake_MainM_tryCatchError___redArg(v_f_599_, v_self_600_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError(lean_object* v_00_u03b1_603_, lean_object* v_f_604_, lean_object* v_self_605_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = lean_apply_1(v_self_605_, lean_box(0));
if (lean_obj_tag(v___x_607_) == 0)
{
lean_dec_ref(v_f_604_);
return v___x_607_;
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_620_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_620_ == 0)
{
v___x_610_ = v___x_607_;
v_isShared_611_ = v_isSharedCheck_620_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_607_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_620_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
uint32_t v___x_612_; uint32_t v___x_613_; uint8_t v___x_614_; 
v___x_612_ = 0;
v___x_613_ = lean_unbox_uint32(v_a_608_);
v___x_614_ = lean_uint32_dec_eq(v___x_613_, v___x_612_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; 
lean_del_object(v___x_610_);
v___x_615_ = lean_apply_2(v_f_604_, v_a_608_, lean_box(0));
return v___x_615_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_618_; 
lean_dec(v_a_608_);
lean_dec_ref(v_f_604_);
v___x_616_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_616_);
v___x_618_ = v___x_610_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v___x_616_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___boxed(lean_object* v_00_u03b1_621_, lean_object* v_f_622_, lean_object* v_self_623_, lean_object* v___y_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lake_MainM_tryCatchError(v_00_u03b1_621_, v_f_622_, v_self_623_);
return v_res_625_;
}
}
static lean_object* _init_l_Lake_MainM_failure___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_626_; lean_object* v___x_627_; 
v___x_626_ = 1;
v___x_627_ = lean_box_uint32(v___x_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure___redArg(){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure___redArg___boxed(lean_object* v___y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lake_MainM_failure___redArg();
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure(lean_object* v_00_u03b1_633_){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure___boxed(lean_object* v_00_u03b1_637_, lean_object* v___y_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lake_MainM_failure(v_00_u03b1_637_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___redArg(lean_object* v_self_640_, lean_object* v_other_641_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = lean_apply_1(v_self_640_, lean_box(0));
if (lean_obj_tag(v___x_643_) == 0)
{
lean_dec_ref(v_other_641_);
return v___x_643_;
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_657_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_657_ == 0)
{
v___x_646_ = v___x_643_;
v_isShared_647_ = v_isSharedCheck_657_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_657_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
uint32_t v___x_648_; uint32_t v___x_649_; uint8_t v___x_650_; 
v___x_648_ = 0;
v___x_649_ = lean_unbox_uint32(v_a_644_);
lean_dec(v_a_644_);
v___x_650_ = lean_uint32_dec_eq(v___x_649_, v___x_648_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; lean_object* v___x_652_; 
lean_del_object(v___x_646_);
v___x_651_ = lean_box(0);
v___x_652_ = lean_apply_2(v_other_641_, v___x_651_, lean_box(0));
return v___x_652_;
}
else
{
lean_object* v___x_653_; lean_object* v___x_655_; 
lean_dec_ref(v_other_641_);
v___x_653_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 0, v___x_653_);
v___x_655_ = v___x_646_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_653_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___redArg___boxed(lean_object* v_self_658_, lean_object* v_other_659_, lean_object* v___y_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_Lake_MainM_orElse___redArg(v_self_658_, v_other_659_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse(lean_object* v_00_u03b1_662_, lean_object* v_self_663_, lean_object* v_other_664_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = lean_apply_1(v_self_663_, lean_box(0));
if (lean_obj_tag(v___x_666_) == 0)
{
lean_dec_ref(v_other_664_);
return v___x_666_;
}
else
{
lean_object* v_a_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_680_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_680_ == 0)
{
v___x_669_ = v___x_666_;
v_isShared_670_ = v_isSharedCheck_680_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_a_667_);
lean_dec(v___x_666_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_680_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
uint32_t v___x_671_; uint32_t v___x_672_; uint8_t v___x_673_; 
v___x_671_ = 0;
v___x_672_ = lean_unbox_uint32(v_a_667_);
lean_dec(v_a_667_);
v___x_673_ = lean_uint32_dec_eq(v___x_672_, v___x_671_);
if (v___x_673_ == 0)
{
lean_object* v___x_674_; lean_object* v___x_675_; 
lean_del_object(v___x_669_);
v___x_674_ = lean_box(0);
v___x_675_ = lean_apply_2(v_other_664_, v___x_674_, lean_box(0));
return v___x_675_;
}
else
{
lean_object* v___x_676_; lean_object* v___x_678_; 
lean_dec_ref(v_other_664_);
v___x_676_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 0, v___x_676_);
v___x_678_ = v___x_669_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v___x_676_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___boxed(lean_object* v_00_u03b1_681_, lean_object* v_self_682_, lean_object* v_other_683_, lean_object* v___y_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lake_MainM_orElse(v_00_u03b1_681_, v_self_682_, v_other_683_);
return v_res_685_;
}
}
static lean_object* _init_l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative(void){
_start:
{
lean_object* v___x_688_; lean_object* v_toApplicative_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_688_ = ((lean_object*)(l_Lake_instMonadMainM));
v_toApplicative_689_ = lean_ctor_get(v___x_688_, 0);
v___x_690_ = ((lean_object*)(l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__0));
v___x_691_ = ((lean_object*)(l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__1));
lean_inc_ref(v_toApplicative_689_);
v___x_692_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_692_, 0, v_toApplicative_689_);
lean_ctor_set(v___x_692_, 1, v___x_690_);
lean_ctor_set(v___x_692_, 2, v___x_691_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLog___lam__0(lean_object* v___x_693_, uint8_t v___x_694_, uint8_t v___x_695_, lean_object* v_e_696_){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = l_Lake_OutStream_logEntry(v___x_693_, v_e_696_, v___x_694_, v___x_695_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLog___lam__0___boxed(lean_object* v___x_700_, lean_object* v___x_701_, lean_object* v___x_702_, lean_object* v_e_703_, lean_object* v___y_704_){
_start:
{
uint8_t v___x_49__boxed_705_; uint8_t v___x_50__boxed_706_; lean_object* v_res_707_; 
v___x_49__boxed_705_ = lean_unbox(v___x_701_);
v___x_50__boxed_706_ = lean_unbox(v___x_702_);
v_res_707_ = l_Lake_MainM_instMonadLog___lam__0(v___x_700_, v___x_49__boxed_705_, v___x_50__boxed_706_, v_e_703_);
lean_dec_ref(v_e_703_);
lean_dec(v___x_700_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg(lean_object* v_msg_715_, uint32_t v_rc_716_){
_start:
{
uint8_t v___x_718_; uint8_t v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_718_ = 1;
v___x_719_ = 0;
v___x_720_ = lean_box(1);
v___x_721_ = 3;
v___x_722_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_722_, 0, v_msg_715_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*1, v___x_721_);
v___x_723_ = l_Lake_OutStream_logEntry(v___x_720_, v___x_722_, v___x_718_, v___x_719_);
lean_dec_ref_known(v___x_722_, 1);
v___x_724_ = lean_box_uint32(v_rc_716_);
v___x_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___boxed(lean_object* v_msg_726_, lean_object* v_rc_727_, lean_object* v___y_728_){
_start:
{
uint32_t v_rc_boxed_729_; lean_object* v_res_730_; 
v_rc_boxed_729_ = lean_unbox_uint32(v_rc_727_);
lean_dec(v_rc_727_);
v_res_730_ = l_Lake_MainM_error___redArg(v_msg_726_, v_rc_boxed_729_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error(lean_object* v_00_u03b1_731_, lean_object* v_msg_732_, uint32_t v_rc_733_){
_start:
{
uint8_t v___x_735_; uint8_t v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_735_ = 1;
v___x_736_ = 0;
v___x_737_ = lean_box(1);
v___x_738_ = 3;
v___x_739_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_739_, 0, v_msg_732_);
lean_ctor_set_uint8(v___x_739_, sizeof(void*)*1, v___x_738_);
v___x_740_ = l_Lake_OutStream_logEntry(v___x_737_, v___x_739_, v___x_735_, v___x_736_);
lean_dec_ref_known(v___x_739_, 1);
v___x_741_ = lean_box_uint32(v_rc_733_);
v___x_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___boxed(lean_object* v_00_u03b1_743_, lean_object* v_msg_744_, lean_object* v_rc_745_, lean_object* v___y_746_){
_start:
{
uint32_t v_rc_boxed_747_; lean_object* v_res_748_; 
v_rc_boxed_747_ = lean_unbox_uint32(v_rc_745_);
lean_dec(v_rc_745_);
v_res_748_ = l_Lake_MainM_error(v_00_u03b1_743_, v_msg_744_, v_rc_boxed_747_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__0(lean_object* v_00_u03b1_749_, lean_object* v_msg_750_){
_start:
{
uint8_t v___x_752_; uint8_t v___x_753_; lean_object* v___x_754_; uint8_t v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_752_ = 1;
v___x_753_ = 0;
v___x_754_ = lean_box(1);
v___x_755_ = 3;
v___x_756_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_756_, 0, v_msg_750_);
lean_ctor_set_uint8(v___x_756_, sizeof(void*)*1, v___x_755_);
v___x_757_ = l_Lake_OutStream_logEntry(v___x_754_, v___x_756_, v___x_752_, v___x_753_);
lean_dec_ref_known(v___x_756_, 1);
v___x_758_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__0___boxed(lean_object* v_00_u03b1_760_, lean_object* v_msg_761_, lean_object* v___y_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Lake_MainM_instMonadError___lam__0(v_00_u03b1_760_, v_msg_761_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__0(lean_object* v_00_u03b1_766_, lean_object* v___y_767_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = lean_apply_1(v___y_767_, lean_box(0));
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_769_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_769_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_793_; 
v_a_778_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_793_ == 0)
{
v___x_780_ = v___x_769_;
v_isShared_781_ = v_isSharedCheck_793_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_769_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_793_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_782_; uint8_t v___x_783_; uint8_t v___x_784_; lean_object* v___x_785_; uint8_t v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_782_ = lean_io_error_to_string(v_a_778_);
v___x_783_ = 1;
v___x_784_ = 0;
v___x_785_ = lean_box(1);
v___x_786_ = 3;
v___x_787_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_787_, 0, v___x_782_);
lean_ctor_set_uint8(v___x_787_, sizeof(void*)*1, v___x_786_);
v___x_788_ = l_Lake_OutStream_logEntry(v___x_785_, v___x_787_, v___x_783_, v___x_784_);
lean_dec_ref_known(v___x_787_, 1);
v___x_789_ = l_Lake_MainM_failure___redArg___boxed__const__1;
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 0, v___x_789_);
v___x_791_ = v___x_780_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__0___boxed(lean_object* v_00_u03b1_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Lake_MainM_instMonadLiftIO___lam__0(v_00_u03b1_794_, v___y_795_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__0(lean_object* v_val_800_, uint8_t v___y_801_, uint8_t v_val_802_, lean_object* v_x_803_, lean_object* v___y_804_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Lake_logToStream(v___y_804_, v_val_800_, v___y_801_, v_val_802_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__0___boxed(lean_object* v_val_807_, lean_object* v___y_808_, lean_object* v_val_809_, lean_object* v_x_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
uint8_t v___y_982__boxed_813_; uint8_t v_val_983__boxed_814_; lean_object* v_res_815_; 
v___y_982__boxed_813_ = lean_unbox(v___y_808_);
v_val_983__boxed_814_ = lean_unbox(v_val_809_);
v_res_815_ = l_Lake_MainM_runLogIO___redArg___lam__0(v_val_807_, v___y_982__boxed_813_, v_val_983__boxed_814_, v_x_810_, v___y_811_);
lean_dec_ref(v___y_811_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg(lean_object* v_x_818_, lean_object* v_cfg_819_){
_start:
{
uint8_t v___y_825_; lean_object* v___y_826_; lean_object* v___x_835_; uint8_t v___y_837_; lean_object* v___y_838_; uint8_t v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; uint8_t v___y_842_; lean_object* v___y_857_; uint8_t v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; uint8_t v___y_861_; uint8_t v___y_864_; lean_object* v___y_865_; uint8_t v___y_866_; uint8_t v___y_867_; lean_object* v___y_868_; lean_object* v___y_869_; uint8_t v___y_870_; lean_object* v___y_872_; lean_object* v___y_873_; uint8_t v___y_874_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_835_ = l_instMonadBaseIO;
v___x_883_ = ((lean_object*)(l_Lake_MainM_runLogIO___redArg___closed__0));
v___x_884_ = lean_apply_2(v_x_818_, v___x_883_, lean_box(0));
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v_a_886_; lean_object* v___x_887_; uint8_t v___x_888_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_a_885_);
v_a_886_ = lean_ctor_get(v___x_884_, 1);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_884_, 2);
v___x_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_887_, 0, v_a_885_);
v___x_888_ = 0;
v___y_872_ = v___x_887_;
v___y_873_ = v_a_886_;
v___y_874_ = v___x_888_;
goto v___jp_871_;
}
else
{
lean_object* v_a_889_; lean_object* v___x_890_; uint8_t v___x_891_; 
v_a_889_ = lean_ctor_get(v___x_884_, 1);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_884_, 2);
v___x_890_ = lean_box(0);
v___x_891_ = 1;
v___y_872_ = v___x_890_;
v___y_873_ = v_a_889_;
v___y_874_ = v___x_891_;
goto v___jp_871_;
}
v___jp_821_:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
return v___x_823_;
}
v___jp_824_:
{
if (v___y_825_ == 0)
{
if (lean_obj_tag(v___y_826_) == 0)
{
goto v___jp_821_;
}
else
{
lean_object* v_val_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
v_val_827_ = lean_ctor_get(v___y_826_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___y_826_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___y_826_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_val_827_);
lean_dec(v___y_826_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set_tag(v___x_829_, 0);
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_val_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
else
{
lean_dec(v___y_826_);
goto v___jp_821_;
}
}
v___jp_836_:
{
lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; uint8_t v___x_847_; 
v___x_843_ = l_Lake_OutStream_get(v___y_838_);
lean_inc_ref(v___x_843_);
v___x_844_ = l_Lake_AnsiMode_isEnabled(v___x_843_, v___y_837_);
v___x_845_ = lean_unsigned_to_nat(0u);
v___x_846_ = lean_array_get_size(v___y_841_);
v___x_847_ = lean_nat_dec_lt(v___x_845_, v___x_846_);
if (v___x_847_ == 0)
{
lean_dec_ref(v___x_843_);
lean_dec_ref(v___y_841_);
v___y_825_ = v___y_839_;
v___y_826_ = v___y_840_;
goto v___jp_824_;
}
else
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___f_850_; lean_object* v___x_851_; size_t v___x_852_; size_t v___x_853_; lean_object* v___x_758__overap_854_; lean_object* v___x_855_; 
v___x_848_ = lean_box(v___y_842_);
v___x_849_ = lean_box(v___x_844_);
v___f_850_ = lean_alloc_closure((void*)(l_Lake_MainM_runLogIO___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_850_, 0, v___x_843_);
lean_closure_set(v___f_850_, 1, v___x_848_);
lean_closure_set(v___f_850_, 2, v___x_849_);
v___x_851_ = lean_box(0);
v___x_852_ = ((size_t)0ULL);
v___x_853_ = lean_usize_of_nat(v___x_846_);
v___x_758__overap_854_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_835_, v___f_850_, v___y_841_, v___x_852_, v___x_853_, v___x_851_);
v___x_855_ = lean_apply_1(v___x_758__overap_854_, lean_box(0));
v___y_825_ = v___y_839_;
v___y_826_ = v___y_840_;
goto v___jp_824_;
}
}
v___jp_856_:
{
uint8_t v___x_862_; 
v___x_862_ = 0;
v___y_837_ = v___y_858_;
v___y_838_ = v___y_857_;
v___y_839_ = v___y_861_;
v___y_840_ = v___y_859_;
v___y_841_ = v___y_860_;
v___y_842_ = v___x_862_;
goto v___jp_836_;
}
v___jp_863_:
{
if (v___y_866_ == 0)
{
if (v___y_870_ == 0)
{
v___y_837_ = v___y_864_;
v___y_838_ = v___y_865_;
v___y_839_ = v___y_870_;
v___y_840_ = v___y_868_;
v___y_841_ = v___y_869_;
v___y_842_ = v___y_867_;
goto v___jp_836_;
}
else
{
v___y_857_ = v___y_865_;
v___y_858_ = v___y_864_;
v___y_859_ = v___y_868_;
v___y_860_ = v___y_869_;
v___y_861_ = v___y_870_;
goto v___jp_856_;
}
}
else
{
v___y_857_ = v___y_865_;
v___y_858_ = v___y_864_;
v___y_859_ = v___y_868_;
v___y_860_ = v___y_869_;
v___y_861_ = v___y_866_;
goto v___jp_856_;
}
}
v___jp_871_:
{
uint8_t v_failLv_875_; uint8_t v_outLv_876_; uint8_t v_ansiMode_877_; lean_object* v_out_878_; uint8_t v___x_879_; uint8_t v___x_880_; 
v_failLv_875_ = lean_ctor_get_uint8(v_cfg_819_, sizeof(void*)*1);
v_outLv_876_ = lean_ctor_get_uint8(v_cfg_819_, sizeof(void*)*1 + 1);
v_ansiMode_877_ = lean_ctor_get_uint8(v_cfg_819_, sizeof(void*)*1 + 2);
v_out_878_ = lean_ctor_get(v_cfg_819_, 0);
v___x_879_ = l_Lake_Log_maxLv(v___y_873_);
v___x_880_ = l_Lake_instOrdLogLevel_ord(v_failLv_875_, v___x_879_);
if (v___x_880_ == 2)
{
uint8_t v___x_881_; 
v___x_881_ = 0;
v___y_864_ = v_ansiMode_877_;
v___y_865_ = v_out_878_;
v___y_866_ = v___y_874_;
v___y_867_ = v_outLv_876_;
v___y_868_ = v___y_872_;
v___y_869_ = v___y_873_;
v___y_870_ = v___x_881_;
goto v___jp_863_;
}
else
{
uint8_t v___x_882_; 
v___x_882_ = 1;
v___y_864_ = v_ansiMode_877_;
v___y_865_ = v_out_878_;
v___y_866_ = v___y_874_;
v___y_867_ = v_outLv_876_;
v___y_868_ = v___y_872_;
v___y_869_ = v___y_873_;
v___y_870_ = v___x_882_;
goto v___jp_863_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___boxed(lean_object* v_x_892_, lean_object* v_cfg_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lake_MainM_runLogIO___redArg(v_x_892_, v_cfg_893_);
lean_dec_ref(v_cfg_893_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO(lean_object* v_00_u03b1_896_, lean_object* v_x_897_, lean_object* v_cfg_898_){
_start:
{
uint8_t v___y_904_; lean_object* v___y_905_; lean_object* v___x_914_; uint8_t v___y_916_; lean_object* v___y_917_; uint8_t v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; uint8_t v___y_921_; lean_object* v___y_936_; uint8_t v___y_937_; lean_object* v___y_938_; lean_object* v___y_939_; uint8_t v___y_940_; uint8_t v___y_943_; lean_object* v___y_944_; uint8_t v___y_945_; uint8_t v___y_946_; lean_object* v___y_947_; lean_object* v___y_948_; uint8_t v___y_949_; lean_object* v___y_951_; lean_object* v___y_952_; uint8_t v___y_953_; lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_914_ = l_instMonadBaseIO;
v___x_962_ = ((lean_object*)(l_Lake_MainM_runLogIO___redArg___closed__0));
v___x_963_ = lean_apply_2(v_x_897_, v___x_962_, lean_box(0));
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; lean_object* v_a_965_; lean_object* v___x_966_; uint8_t v___x_967_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
lean_inc(v_a_964_);
v_a_965_ = lean_ctor_get(v___x_963_, 1);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_963_, 2);
v___x_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_966_, 0, v_a_964_);
v___x_967_ = 0;
v___y_951_ = v___x_966_;
v___y_952_ = v_a_965_;
v___y_953_ = v___x_967_;
goto v___jp_950_;
}
else
{
lean_object* v_a_968_; lean_object* v___x_969_; uint8_t v___x_970_; 
v_a_968_ = lean_ctor_get(v___x_963_, 1);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_963_, 2);
v___x_969_ = lean_box(0);
v___x_970_ = 1;
v___y_951_ = v___x_969_;
v___y_952_ = v_a_968_;
v___y_953_ = v___x_970_;
goto v___jp_950_;
}
v___jp_900_:
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
return v___x_902_;
}
v___jp_903_:
{
if (v___y_904_ == 0)
{
if (lean_obj_tag(v___y_905_) == 0)
{
goto v___jp_900_;
}
else
{
lean_object* v_val_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
v_val_906_ = lean_ctor_get(v___y_905_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___y_905_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___y_905_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_val_906_);
lean_dec(v___y_905_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
lean_ctor_set_tag(v___x_908_, 0);
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_val_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
else
{
lean_dec(v___y_905_);
goto v___jp_900_;
}
}
v___jp_915_:
{
lean_object* v___x_922_; uint8_t v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_922_ = l_Lake_OutStream_get(v___y_917_);
lean_inc_ref(v___x_922_);
v___x_923_ = l_Lake_AnsiMode_isEnabled(v___x_922_, v___y_916_);
v___x_924_ = lean_unsigned_to_nat(0u);
v___x_925_ = lean_array_get_size(v___y_920_);
v___x_926_ = lean_nat_dec_lt(v___x_924_, v___x_925_);
if (v___x_926_ == 0)
{
lean_dec_ref(v___x_922_);
lean_dec_ref(v___y_920_);
v___y_904_ = v___y_918_;
v___y_905_ = v___y_919_;
goto v___jp_903_;
}
else
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___f_929_; lean_object* v___x_930_; size_t v___x_931_; size_t v___x_932_; lean_object* v___x_897__overap_933_; lean_object* v___x_934_; 
v___x_927_ = lean_box(v___y_921_);
v___x_928_ = lean_box(v___x_923_);
v___f_929_ = lean_alloc_closure((void*)(l_Lake_MainM_runLogIO___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_929_, 0, v___x_922_);
lean_closure_set(v___f_929_, 1, v___x_927_);
lean_closure_set(v___f_929_, 2, v___x_928_);
v___x_930_ = lean_box(0);
v___x_931_ = ((size_t)0ULL);
v___x_932_ = lean_usize_of_nat(v___x_925_);
v___x_897__overap_933_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_914_, v___f_929_, v___y_920_, v___x_931_, v___x_932_, v___x_930_);
v___x_934_ = lean_apply_1(v___x_897__overap_933_, lean_box(0));
v___y_904_ = v___y_918_;
v___y_905_ = v___y_919_;
goto v___jp_903_;
}
}
v___jp_935_:
{
uint8_t v___x_941_; 
v___x_941_ = 0;
v___y_916_ = v___y_937_;
v___y_917_ = v___y_936_;
v___y_918_ = v___y_940_;
v___y_919_ = v___y_938_;
v___y_920_ = v___y_939_;
v___y_921_ = v___x_941_;
goto v___jp_915_;
}
v___jp_942_:
{
if (v___y_945_ == 0)
{
if (v___y_949_ == 0)
{
v___y_916_ = v___y_943_;
v___y_917_ = v___y_944_;
v___y_918_ = v___y_949_;
v___y_919_ = v___y_947_;
v___y_920_ = v___y_948_;
v___y_921_ = v___y_946_;
goto v___jp_915_;
}
else
{
v___y_936_ = v___y_944_;
v___y_937_ = v___y_943_;
v___y_938_ = v___y_947_;
v___y_939_ = v___y_948_;
v___y_940_ = v___y_949_;
goto v___jp_935_;
}
}
else
{
v___y_936_ = v___y_944_;
v___y_937_ = v___y_943_;
v___y_938_ = v___y_947_;
v___y_939_ = v___y_948_;
v___y_940_ = v___y_945_;
goto v___jp_935_;
}
}
v___jp_950_:
{
uint8_t v_failLv_954_; uint8_t v_outLv_955_; uint8_t v_ansiMode_956_; lean_object* v_out_957_; uint8_t v___x_958_; uint8_t v___x_959_; 
v_failLv_954_ = lean_ctor_get_uint8(v_cfg_898_, sizeof(void*)*1);
v_outLv_955_ = lean_ctor_get_uint8(v_cfg_898_, sizeof(void*)*1 + 1);
v_ansiMode_956_ = lean_ctor_get_uint8(v_cfg_898_, sizeof(void*)*1 + 2);
v_out_957_ = lean_ctor_get(v_cfg_898_, 0);
v___x_958_ = l_Lake_Log_maxLv(v___y_952_);
v___x_959_ = l_Lake_instOrdLogLevel_ord(v_failLv_954_, v___x_958_);
if (v___x_959_ == 2)
{
uint8_t v___x_960_; 
v___x_960_ = 0;
v___y_943_ = v_ansiMode_956_;
v___y_944_ = v_out_957_;
v___y_945_ = v___y_953_;
v___y_946_ = v_outLv_955_;
v___y_947_ = v___y_951_;
v___y_948_ = v___y_952_;
v___y_949_ = v___x_960_;
goto v___jp_942_;
}
else
{
uint8_t v___x_961_; 
v___x_961_ = 1;
v___y_943_ = v_ansiMode_956_;
v___y_944_ = v_out_957_;
v___y_945_ = v___y_953_;
v___y_946_ = v_outLv_955_;
v___y_947_ = v___y_951_;
v___y_948_ = v___y_952_;
v___y_949_ = v___x_961_;
goto v___jp_942_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___boxed(lean_object* v_00_u03b1_971_, lean_object* v_x_972_, lean_object* v_cfg_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lake_MainM_runLogIO(v_00_u03b1_971_, v_x_972_, v_cfg_973_);
lean_dec_ref(v_cfg_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(lean_object* v_val_976_, uint8_t v___y_977_, uint8_t v_val_978_, lean_object* v_as_979_, size_t v_i_980_, size_t v_stop_981_, lean_object* v_b_982_){
_start:
{
uint8_t v___x_984_; 
v___x_984_ = lean_usize_dec_eq(v_i_980_, v_stop_981_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; lean_object* v___x_986_; size_t v___x_987_; size_t v___x_988_; 
v___x_985_ = lean_array_uget_borrowed(v_as_979_, v_i_980_);
lean_inc_ref(v_val_976_);
v___x_986_ = l_Lake_logToStream(v___x_985_, v_val_976_, v___y_977_, v_val_978_);
v___x_987_ = ((size_t)1ULL);
v___x_988_ = lean_usize_add(v_i_980_, v___x_987_);
v_i_980_ = v___x_988_;
v_b_982_ = v___x_986_;
goto _start;
}
else
{
lean_dec_ref(v_val_976_);
return v_b_982_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0___boxed(lean_object* v_val_990_, lean_object* v___y_991_, lean_object* v_val_992_, lean_object* v_as_993_, lean_object* v_i_994_, lean_object* v_stop_995_, lean_object* v_b_996_, lean_object* v___y_997_){
_start:
{
uint8_t v___y_534__boxed_998_; uint8_t v_val_535__boxed_999_; size_t v_i_boxed_1000_; size_t v_stop_boxed_1001_; lean_object* v_res_1002_; 
v___y_534__boxed_998_ = lean_unbox(v___y_991_);
v_val_535__boxed_999_ = lean_unbox(v_val_992_);
v_i_boxed_1000_ = lean_unbox_usize(v_i_994_);
lean_dec(v_i_994_);
v_stop_boxed_1001_ = lean_unbox_usize(v_stop_995_);
lean_dec(v_stop_995_);
v_res_1002_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(v_val_990_, v___y_534__boxed_998_, v_val_535__boxed_999_, v_as_993_, v_i_boxed_1000_, v_stop_boxed_1001_, v_b_996_);
lean_dec_ref(v_as_993_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___redArg(lean_object* v_x_1003_){
_start:
{
lean_object* v___y_1009_; uint8_t v___y_1010_; uint8_t v___x_1019_; uint8_t v___x_1020_; uint8_t v___x_1021_; lean_object* v___x_1022_; lean_object* v___y_1024_; lean_object* v___y_1025_; uint8_t v___y_1026_; uint8_t v___y_1027_; lean_object* v___y_1038_; lean_object* v___y_1039_; uint8_t v___y_1040_; lean_object* v___y_1043_; lean_object* v___y_1044_; uint8_t v___y_1045_; uint8_t v___y_1046_; lean_object* v___y_1048_; lean_object* v___y_1049_; uint8_t v___y_1050_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v___x_1019_ = 3;
v___x_1020_ = 1;
v___x_1021_ = 0;
v___x_1022_ = lean_box(1);
v___x_1055_ = ((lean_object*)(l_Lake_MainM_runLogIO___redArg___closed__0));
v___x_1056_ = lean_apply_2(v_x_1003_, v___x_1055_, lean_box(0));
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v_a_1058_; lean_object* v___x_1059_; uint8_t v___x_1060_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1057_);
v_a_1058_ = lean_ctor_get(v___x_1056_, 1);
lean_inc(v_a_1058_);
lean_dec_ref_known(v___x_1056_, 2);
v___x_1059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1059_, 0, v_a_1057_);
v___x_1060_ = 0;
v___y_1048_ = v___x_1059_;
v___y_1049_ = v_a_1058_;
v___y_1050_ = v___x_1060_;
goto v___jp_1047_;
}
else
{
lean_object* v_a_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; 
v_a_1061_ = lean_ctor_get(v___x_1056_, 1);
lean_inc(v_a_1061_);
lean_dec_ref_known(v___x_1056_, 2);
v___x_1062_ = lean_box(0);
v___x_1063_ = 1;
v___y_1048_ = v___x_1062_;
v___y_1049_ = v_a_1061_;
v___y_1050_ = v___x_1063_;
goto v___jp_1047_;
}
v___jp_1005_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1006_);
return v___x_1007_;
}
v___jp_1008_:
{
if (v___y_1010_ == 0)
{
if (lean_obj_tag(v___y_1009_) == 0)
{
goto v___jp_1005_;
}
else
{
lean_object* v_val_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1018_; 
v_val_1011_ = lean_ctor_get(v___y_1009_, 0);
v_isSharedCheck_1018_ = !lean_is_exclusive(v___y_1009_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_1013_ = v___y_1009_;
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_val_1011_);
lean_dec(v___y_1009_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1018_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1016_; 
if (v_isShared_1014_ == 0)
{
lean_ctor_set_tag(v___x_1013_, 0);
v___x_1016_ = v___x_1013_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_val_1011_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
else
{
lean_dec(v___y_1009_);
goto v___jp_1005_;
}
}
v___jp_1023_:
{
lean_object* v___x_1028_; uint8_t v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; uint8_t v___x_1032_; 
v___x_1028_ = l_Lake_OutStream_get(v___x_1022_);
lean_inc_ref(v___x_1028_);
v___x_1029_ = l_Lake_AnsiMode_isEnabled(v___x_1028_, v___x_1021_);
v___x_1030_ = lean_unsigned_to_nat(0u);
v___x_1031_ = lean_array_get_size(v___y_1025_);
v___x_1032_ = lean_nat_dec_lt(v___x_1030_, v___x_1031_);
if (v___x_1032_ == 0)
{
lean_dec_ref(v___x_1028_);
lean_dec_ref(v___y_1025_);
v___y_1009_ = v___y_1024_;
v___y_1010_ = v___y_1026_;
goto v___jp_1008_;
}
else
{
lean_object* v___x_1033_; size_t v___x_1034_; size_t v___x_1035_; lean_object* v___x_1036_; 
v___x_1033_ = lean_box(0);
v___x_1034_ = ((size_t)0ULL);
v___x_1035_ = lean_usize_of_nat(v___x_1031_);
v___x_1036_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(v___x_1028_, v___y_1027_, v___x_1029_, v___y_1025_, v___x_1034_, v___x_1035_, v___x_1033_);
lean_dec_ref(v___y_1025_);
v___y_1009_ = v___y_1024_;
v___y_1010_ = v___y_1026_;
goto v___jp_1008_;
}
}
v___jp_1037_:
{
uint8_t v___x_1041_; 
v___x_1041_ = 0;
v___y_1024_ = v___y_1038_;
v___y_1025_ = v___y_1039_;
v___y_1026_ = v___y_1040_;
v___y_1027_ = v___x_1041_;
goto v___jp_1023_;
}
v___jp_1042_:
{
if (v___y_1045_ == 0)
{
if (v___y_1046_ == 0)
{
v___y_1024_ = v___y_1043_;
v___y_1025_ = v___y_1044_;
v___y_1026_ = v___y_1046_;
v___y_1027_ = v___x_1020_;
goto v___jp_1023_;
}
else
{
v___y_1038_ = v___y_1043_;
v___y_1039_ = v___y_1044_;
v___y_1040_ = v___y_1046_;
goto v___jp_1037_;
}
}
else
{
v___y_1038_ = v___y_1043_;
v___y_1039_ = v___y_1044_;
v___y_1040_ = v___y_1045_;
goto v___jp_1037_;
}
}
v___jp_1047_:
{
uint8_t v___x_1051_; uint8_t v___x_1052_; 
v___x_1051_ = l_Lake_Log_maxLv(v___y_1049_);
v___x_1052_ = l_Lake_instOrdLogLevel_ord(v___x_1019_, v___x_1051_);
if (v___x_1052_ == 2)
{
uint8_t v___x_1053_; 
v___x_1053_ = 0;
v___y_1043_ = v___y_1048_;
v___y_1044_ = v___y_1049_;
v___y_1045_ = v___y_1050_;
v___y_1046_ = v___x_1053_;
goto v___jp_1042_;
}
else
{
uint8_t v___x_1054_; 
v___x_1054_ = 1;
v___y_1043_ = v___y_1048_;
v___y_1044_ = v___y_1049_;
v___y_1045_ = v___y_1050_;
v___y_1046_ = v___x_1054_;
goto v___jp_1042_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___redArg___boxed(lean_object* v_x_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lake_MainM_liftLogIO___redArg(v_x_1064_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO(lean_object* v_00_u03b1_1067_, lean_object* v_x_1068_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lake_MainM_liftLogIO___redArg(v_x_1068_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___boxed(lean_object* v_00_u03b1_1071_, lean_object* v_x_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lake_MainM_liftLogIO(v_00_u03b1_1071_, v_x_1072_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg___lam__0(lean_object* v_val_1077_, uint8_t v_outLv_1078_, uint8_t v_val_1079_, lean_object* v_e_1080_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lake_logToStream(v_e_1080_, v_val_1077_, v_outLv_1078_, v_val_1079_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg___lam__0___boxed(lean_object* v_val_1083_, lean_object* v_outLv_1084_, lean_object* v_val_1085_, lean_object* v_e_1086_, lean_object* v___y_1087_){
_start:
{
uint8_t v_outLv_boxed_1088_; uint8_t v_val_643__boxed_1089_; lean_object* v_res_1090_; 
v_outLv_boxed_1088_ = lean_unbox(v_outLv_1084_);
v_val_643__boxed_1089_ = lean_unbox(v_val_1085_);
v_res_1090_ = l_Lake_MainM_runLoggerIO___redArg___lam__0(v_val_1083_, v_outLv_boxed_1088_, v_val_643__boxed_1089_, v_e_1086_);
lean_dec_ref(v_e_1086_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg(lean_object* v_x_1091_, lean_object* v_cfg_1092_){
_start:
{
uint8_t v_outLv_1094_; uint8_t v_ansiMode_1095_; lean_object* v_out_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___f_1101_; lean_object* v___x_1102_; 
v_outLv_1094_ = lean_ctor_get_uint8(v_cfg_1092_, sizeof(void*)*1 + 1);
v_ansiMode_1095_ = lean_ctor_get_uint8(v_cfg_1092_, sizeof(void*)*1 + 2);
v_out_1096_ = lean_ctor_get(v_cfg_1092_, 0);
v___x_1097_ = l_Lake_OutStream_get(v_out_1096_);
lean_inc_ref(v___x_1097_);
v___x_1098_ = l_Lake_AnsiMode_isEnabled(v___x_1097_, v_ansiMode_1095_);
v___x_1099_ = lean_box(v_outLv_1094_);
v___x_1100_ = lean_box(v___x_1098_);
v___f_1101_ = lean_alloc_closure((void*)(l_Lake_MainM_runLoggerIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1101_, 0, v___x_1097_);
lean_closure_set(v___f_1101_, 1, v___x_1099_);
lean_closure_set(v___f_1101_, 2, v___x_1100_);
v___x_1102_ = lean_apply_2(v_x_1091_, v___f_1101_, lean_box(0));
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
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 1, 0);
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
lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1118_; 
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1118_ == 0)
{
lean_object* v_unused_1119_; 
v_unused_1119_ = lean_ctor_get(v___x_1102_, 0);
lean_dec(v_unused_1119_);
v___x_1112_ = v___x_1102_;
v_isShared_1113_ = v_isSharedCheck_1118_;
goto v_resetjp_1111_;
}
else
{
lean_dec(v___x_1102_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1118_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1114_; lean_object* v___x_1116_; 
v___x_1114_ = l_Lake_MainM_failure___redArg___boxed__const__1;
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 0, v___x_1114_);
v___x_1116_ = v___x_1112_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg___boxed(lean_object* v_x_1120_, lean_object* v_cfg_1121_, lean_object* v___y_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Lake_MainM_runLoggerIO___redArg(v_x_1120_, v_cfg_1121_);
lean_dec_ref(v_cfg_1121_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO(lean_object* v_00_u03b1_1124_, lean_object* v_x_1125_, lean_object* v_cfg_1126_){
_start:
{
uint8_t v_outLv_1128_; uint8_t v_ansiMode_1129_; lean_object* v_out_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___f_1135_; lean_object* v___x_1136_; 
v_outLv_1128_ = lean_ctor_get_uint8(v_cfg_1126_, sizeof(void*)*1 + 1);
v_ansiMode_1129_ = lean_ctor_get_uint8(v_cfg_1126_, sizeof(void*)*1 + 2);
v_out_1130_ = lean_ctor_get(v_cfg_1126_, 0);
v___x_1131_ = l_Lake_OutStream_get(v_out_1130_);
lean_inc_ref(v___x_1131_);
v___x_1132_ = l_Lake_AnsiMode_isEnabled(v___x_1131_, v_ansiMode_1129_);
v___x_1133_ = lean_box(v_outLv_1128_);
v___x_1134_ = lean_box(v___x_1132_);
v___f_1135_ = lean_alloc_closure((void*)(l_Lake_MainM_runLoggerIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1135_, 0, v___x_1131_);
lean_closure_set(v___f_1135_, 1, v___x_1133_);
lean_closure_set(v___f_1135_, 2, v___x_1134_);
v___x_1136_ = lean_apply_2(v_x_1125_, v___f_1135_, lean_box(0));
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v_a_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
v_a_1137_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1136_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_a_1137_);
lean_dec(v___x_1136_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_a_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
else
{
lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1152_; 
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1152_ == 0)
{
lean_object* v_unused_1153_; 
v_unused_1153_ = lean_ctor_get(v___x_1136_, 0);
lean_dec(v_unused_1153_);
v___x_1146_ = v___x_1136_;
v_isShared_1147_ = v_isSharedCheck_1152_;
goto v_resetjp_1145_;
}
else
{
lean_dec(v___x_1136_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1152_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1148_ = l_Lake_MainM_failure___redArg___boxed__const__1;
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1148_);
v___x_1150_ = v___x_1146_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___boxed(lean_object* v_00_u03b1_1154_, lean_object* v_x_1155_, lean_object* v_cfg_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = l_Lake_MainM_runLoggerIO(v_00_u03b1_1154_, v_x_1155_, v_cfg_1156_);
lean_dec_ref(v_cfg_1156_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___lam__0(lean_object* v_val_1159_, uint8_t v___x_1160_, uint8_t v_val_1161_, lean_object* v_e_1162_){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = l_Lake_logToStream(v_e_1162_, v_val_1159_, v___x_1160_, v_val_1161_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___lam__0___boxed(lean_object* v_val_1165_, lean_object* v___x_1166_, lean_object* v_val_1167_, lean_object* v_e_1168_, lean_object* v___y_1169_){
_start:
{
uint8_t v___x_39__boxed_1170_; uint8_t v_val_40__boxed_1171_; lean_object* v_res_1172_; 
v___x_39__boxed_1170_ = lean_unbox(v___x_1166_);
v_val_40__boxed_1171_ = lean_unbox(v_val_1167_);
v_res_1172_ = l_Lake_MainM_liftLoggerIO___redArg___lam__0(v_val_1165_, v___x_39__boxed_1170_, v_val_40__boxed_1171_, v_e_1168_);
lean_dec_ref(v_e_1168_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg(lean_object* v_x_1173_){
_start:
{
uint8_t v___x_1175_; uint8_t v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___f_1182_; lean_object* v___x_1183_; 
v___x_1175_ = 1;
v___x_1176_ = 0;
v___x_1177_ = lean_box(1);
v___x_1178_ = l_Lake_OutStream_get(v___x_1177_);
lean_inc_ref(v___x_1178_);
v___x_1179_ = l_Lake_AnsiMode_isEnabled(v___x_1178_, v___x_1176_);
v___x_1180_ = lean_box(v___x_1175_);
v___x_1181_ = lean_box(v___x_1179_);
v___f_1182_ = lean_alloc_closure((void*)(l_Lake_MainM_liftLoggerIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1182_, 0, v___x_1178_);
lean_closure_set(v___f_1182_, 1, v___x_1180_);
lean_closure_set(v___f_1182_, 2, v___x_1181_);
v___x_1183_ = lean_apply_2(v_x_1173_, v___f_1182_, lean_box(0));
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1183_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1183_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
else
{
lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1199_; 
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1199_ == 0)
{
lean_object* v_unused_1200_; 
v_unused_1200_ = lean_ctor_get(v___x_1183_, 0);
lean_dec(v_unused_1200_);
v___x_1193_ = v___x_1183_;
v_isShared_1194_ = v_isSharedCheck_1199_;
goto v_resetjp_1192_;
}
else
{
lean_dec(v___x_1183_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1199_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1195_ = l_Lake_MainM_failure___redArg___boxed__const__1;
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 0, v___x_1195_);
v___x_1197_ = v___x_1193_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___boxed(lean_object* v_x_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Lake_MainM_liftLoggerIO___redArg(v_x_1201_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO(lean_object* v_00_u03b1_1204_, lean_object* v_x_1205_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = l_Lake_MainM_liftLoggerIO___redArg(v_x_1205_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___boxed(lean_object* v_00_u03b1_1208_, lean_object* v_x_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Lake_MainM_liftLoggerIO(v_00_u03b1_1208_, v_x_1209_);
return v_res_1211_;
}
}
lean_object* runtime_initialize_Lake_Util_Log(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Exit(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_MainM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Exit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_MainM_tryCatchError___redArg___boxed__const__1 = _init_l_Lake_MainM_tryCatchError___redArg___boxed__const__1();
lean_mark_persistent(l_Lake_MainM_tryCatchError___redArg___boxed__const__1);
l_Lake_MainM_failure___redArg___boxed__const__1 = _init_l_Lake_MainM_failure___redArg___boxed__const__1();
lean_mark_persistent(l_Lake_MainM_failure___redArg___boxed__const__1);
l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative = _init_l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative();
lean_mark_persistent(l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_MainM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Util_Log(uint8_t builtin);
lean_object* initialize_Lake_Util_Exit(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_MainM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Exit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_MainM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_MainM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_MainM(builtin);
}
#ifdef __cplusplus
}
#endif
