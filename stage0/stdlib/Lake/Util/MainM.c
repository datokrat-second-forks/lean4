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
lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_OutStream_get(lean_object*);
uint8_t l_Lake_AnsiMode_isEnabled(lean_object*, uint8_t);
lean_object* l_Lake_logToStream(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_Lake_OutStream_logEntry(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_instMonadBaseIO___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lake_Log_maxLv(lean_object*);
uint8_t l_Lake_instOrdLogLevel_ord(uint8_t, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadMainM___aux__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___aux__7___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___aux__7___redArg___closed__0 = (const lean_object*)&l_Lake_instMonadMainM___aux__7___redArg___closed__0_value;
static const lean_closure_object l_Lake_instMonadMainM___aux__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___aux__7___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___aux__7___redArg___closed__1 = (const lean_object*)&l_Lake_instMonadMainM___aux__7___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadMainM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___aux__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___closed__0 = (const lean_object*)&l_Lake_instMonadMainM___closed__0_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___aux__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___closed__1 = (const lean_object*)&l_Lake_instMonadMainM___closed__1_value;
static const lean_ctor_object l_Lake_instMonadMainM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__0_value),((lean_object*)&l_Lake_instMonadMainM___closed__1_value)}};
static const lean_object* l_Lake_instMonadMainM___closed__2 = (const lean_object*)&l_Lake_instMonadMainM___closed__2_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___aux__5___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___closed__3 = (const lean_object*)&l_Lake_instMonadMainM___closed__3_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___aux__7___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___closed__4 = (const lean_object*)&l_Lake_instMonadMainM___closed__4_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___aux__9___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___closed__5 = (const lean_object*)&l_Lake_instMonadMainM___closed__5_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___aux__11___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___closed__6 = (const lean_object*)&l_Lake_instMonadMainM___closed__6_value;
static const lean_ctor_object l_Lake_instMonadMainM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__2_value),((lean_object*)&l_Lake_instMonadMainM___closed__3_value),((lean_object*)&l_Lake_instMonadMainM___closed__4_value),((lean_object*)&l_Lake_instMonadMainM___closed__5_value),((lean_object*)&l_Lake_instMonadMainM___closed__6_value)}};
static const lean_object* l_Lake_instMonadMainM___closed__7 = (const lean_object*)&l_Lake_instMonadMainM___closed__7_value;
static const lean_closure_object l_Lake_instMonadMainM___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadMainM___aux__13___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadMainM___closed__8 = (const lean_object*)&l_Lake_instMonadMainM___closed__8_value;
static const lean_ctor_object l_Lake_instMonadMainM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instMonadMainM___closed__7_value),((lean_object*)&l_Lake_instMonadMainM___closed__8_value)}};
static const lean_object* l_Lake_instMonadMainM___closed__9 = (const lean_object*)&l_Lake_instMonadMainM___closed__9_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadMainM = (const lean_object*)&l_Lake_instMonadMainM___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadFinallyMainM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadFinallyMainM___aux__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadFinallyMainM___closed__0 = (const lean_object*)&l_Lake_instMonadFinallyMainM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadFinallyMainM = (const lean_object*)&l_Lake_instMonadFinallyMainM___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadLiftBaseIOMainM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadLiftBaseIOMainM___aux__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadLiftBaseIOMainM___closed__0 = (const lean_object*)&l_Lake_instMonadLiftBaseIOMainM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMonadLiftBaseIOMainM = (const lean_object*)&l_Lake_instMonadLiftBaseIOMainM___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MainM_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___boxed(lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l_Lake_MainM_runLogIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__0 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__0_value;
static const lean_closure_object l_Lake_MainM_runLogIO___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__1 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__1_value;
static const lean_closure_object l_Lake_MainM_runLogIO___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__2 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__2_value;
static const lean_closure_object l_Lake_MainM_runLogIO___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__3 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__3_value;
static const lean_closure_object l_Lake_MainM_runLogIO___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__4 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__4_value;
static const lean_closure_object l_Lake_MainM_runLogIO___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__4_value),((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__3_value)} };
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__5 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__5_value;
static const lean_closure_object l_Lake_MainM_runLogIO___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__3_value)} };
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__6 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__6_value;
static const lean_closure_object l_Lake_MainM_runLogIO___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__7 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__7_value;
static const lean_ctor_object l_Lake_MainM_runLogIO___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__0_value),((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__1_value)}};
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__8 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__8_value;
static const lean_ctor_object l_Lake_MainM_runLogIO___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__8_value),((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__2_value),((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__5_value),((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__6_value),((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__7_value)}};
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__9 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__9_value;
static const lean_ctor_object l_Lake_MainM_runLogIO___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__9_value),((lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__3_value)}};
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__10 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__10_value;
static const lean_array_object l_Lake_MainM_runLogIO___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_MainM_runLogIO___redArg___closed__11 = (const lean_object*)&l_Lake_MainM_runLogIO___redArg___closed__11_value;
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
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg(lean_object* v_f_1_, lean_object* v_x_2_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_apply_1(v_x_2_, lean_box(0));
if (lean_obj_tag(v___x_4_) == 0)
{
lean_object* v_a_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_13_; 
v_a_5_ = lean_ctor_get(v___x_4_, 0);
v_isSharedCheck_13_ = !lean_is_exclusive(v___x_4_);
if (v_isSharedCheck_13_ == 0)
{
v___x_7_ = v___x_4_;
v_isShared_8_ = v_isSharedCheck_13_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_a_5_);
lean_dec(v___x_4_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_13_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; lean_object* v___x_11_; 
v___x_9_ = lean_apply_1(v_f_1_, v_a_5_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 0, v___x_9_);
v___x_11_ = v___x_7_;
goto v_reusejp_10_;
}
else
{
lean_object* v_reuseFailAlloc_12_; 
v_reuseFailAlloc_12_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_12_, 0, v___x_9_);
v___x_11_ = v_reuseFailAlloc_12_;
goto v_reusejp_10_;
}
v_reusejp_10_:
{
return v___x_11_;
}
}
}
else
{
lean_object* v_a_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_21_; 
lean_dec(v_f_1_);
v_a_14_ = lean_ctor_get(v___x_4_, 0);
v_isSharedCheck_21_ = !lean_is_exclusive(v___x_4_);
if (v_isSharedCheck_21_ == 0)
{
v___x_16_ = v___x_4_;
v_isShared_17_ = v_isSharedCheck_21_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_a_14_);
lean_dec(v___x_4_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_21_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_19_; 
if (v_isShared_17_ == 0)
{
v___x_19_ = v___x_16_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v_a_14_);
v___x_19_ = v_reuseFailAlloc_20_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
return v___x_19_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___redArg___boxed(lean_object* v_f_22_, lean_object* v_x_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lake_instMonadMainM___aux__1___redArg(v_f_22_, v_x_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1(lean_object* v_00_u03b1_26_, lean_object* v_00_u03b2_27_, lean_object* v_f_28_, lean_object* v_x_29_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_apply_1(v_x_29_, lean_box(0));
if (lean_obj_tag(v___x_31_) == 0)
{
lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_a_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
v___x_36_ = lean_apply_1(v_f_28_, v_a_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 0, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
else
{
lean_object* v_a_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_48_; 
lean_dec(v_f_28_);
v_a_41_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_48_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_48_ == 0)
{
v___x_43_ = v___x_31_;
v_isShared_44_ = v_isSharedCheck_48_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_a_41_);
lean_dec(v___x_31_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_48_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_46_; 
if (v_isShared_44_ == 0)
{
v___x_46_ = v___x_43_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_47_; 
v_reuseFailAlloc_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_47_, 0, v_a_41_);
v___x_46_ = v_reuseFailAlloc_47_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
return v___x_46_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__1___boxed(lean_object* v_00_u03b1_49_, lean_object* v_00_u03b2_50_, lean_object* v_f_51_, lean_object* v_x_52_, lean_object* v___y_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lake_instMonadMainM___aux__1(v_00_u03b1_49_, v_00_u03b2_50_, v_f_51_, v_x_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg(lean_object* v_a_55_, lean_object* v_a_56_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lean_apply_1(v_a_56_, lean_box(0));
if (lean_obj_tag(v___x_58_) == 0)
{
lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_65_; 
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_65_ == 0)
{
lean_object* v_unused_66_; 
v_unused_66_ = lean_ctor_get(v___x_58_, 0);
lean_dec(v_unused_66_);
v___x_60_ = v___x_58_;
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
else
{
lean_dec(v___x_58_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 0, v_a_55_);
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_55_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
else
{
lean_object* v_a_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_74_; 
lean_dec(v_a_55_);
v_a_67_ = lean_ctor_get(v___x_58_, 0);
v_isSharedCheck_74_ = !lean_is_exclusive(v___x_58_);
if (v_isSharedCheck_74_ == 0)
{
v___x_69_ = v___x_58_;
v_isShared_70_ = v_isSharedCheck_74_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_a_67_);
lean_dec(v___x_58_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_74_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_72_; 
if (v_isShared_70_ == 0)
{
v___x_72_ = v___x_69_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_a_67_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___redArg___boxed(lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Lake_instMonadMainM___aux__3___redArg(v_a_75_, v_a_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3(lean_object* v_00_u03b1_79_, lean_object* v_00_u03b2_80_, lean_object* v_a_81_, lean_object* v_a_82_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_apply_1(v_a_82_, lean_box(0));
if (lean_obj_tag(v___x_84_) == 0)
{
lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_91_; 
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_91_ == 0)
{
lean_object* v_unused_92_; 
v_unused_92_ = lean_ctor_get(v___x_84_, 0);
lean_dec(v_unused_92_);
v___x_86_ = v___x_84_;
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
else
{
lean_dec(v___x_84_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_89_; 
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v_a_81_);
v___x_89_ = v___x_86_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_a_81_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
else
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
lean_dec(v_a_81_);
v_a_93_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_100_ == 0)
{
v___x_95_ = v___x_84_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_84_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__3___boxed(lean_object* v_00_u03b1_101_, lean_object* v_00_u03b2_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v___y_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lake_instMonadMainM___aux__3(v_00_u03b1_101_, v_00_u03b2_102_, v_a_103_, v_a_104_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___redArg(lean_object* v_a_107_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_109_, 0, v_a_107_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___redArg___boxed(lean_object* v_a_110_, lean_object* v___y_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lake_instMonadMainM___aux__5___redArg(v_a_110_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5(lean_object* v_00_u03b1_113_, lean_object* v_a_114_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_116_, 0, v_a_114_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__5___boxed(lean_object* v_00_u03b1_117_, lean_object* v_a_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lake_instMonadMainM___aux__5(v_00_u03b1_117_, v_a_118_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__0(lean_object* v_00_u03b1_121_, lean_object* v_00_u03b2_122_, lean_object* v_x_123_, lean_object* v_f_124_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_apply_1(v_x_123_, lean_box(0));
if (lean_obj_tag(v___x_126_) == 0)
{
lean_object* v_a_127_; lean_object* v___x_128_; 
v_a_127_ = lean_ctor_get(v___x_126_, 0);
lean_inc(v_a_127_);
lean_dec_ref_known(v___x_126_, 1);
v___x_128_ = lean_apply_2(v_f_124_, v_a_127_, lean_box(0));
return v___x_128_;
}
else
{
lean_object* v_a_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_136_; 
lean_dec_ref(v_f_124_);
v_a_129_ = lean_ctor_get(v___x_126_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_136_ == 0)
{
v___x_131_ = v___x_126_;
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_a_129_);
lean_dec(v___x_126_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_136_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v___x_134_; 
if (v_isShared_132_ == 0)
{
v___x_134_ = v___x_131_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_a_129_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__0___boxed(lean_object* v_00_u03b1_137_, lean_object* v_00_u03b2_138_, lean_object* v_x_139_, lean_object* v_f_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lake_instMonadMainM___aux__7___redArg___lam__0(v_00_u03b1_137_, v_00_u03b2_138_, v_x_139_, v_f_140_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__1(lean_object* v___y_143_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_145_, 0, v___y_143_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__1___boxed(lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lake_instMonadMainM___aux__7___redArg___lam__1(v___y_146_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__2(lean_object* v_x_149_, lean_object* v___f_150_, lean_object* v___f_151_, lean_object* v_y_152_){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_154_ = lean_box(0);
v___x_155_ = lean_apply_1(v_x_149_, v___x_154_);
v___x_156_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_156_, 0, lean_box(0));
lean_closure_set(v___x_156_, 1, lean_box(0));
lean_closure_set(v___x_156_, 2, lean_box(0));
lean_closure_set(v___x_156_, 3, v___f_150_);
lean_closure_set(v___x_156_, 4, v_y_152_);
v___x_157_ = lean_apply_5(v___f_151_, lean_box(0), lean_box(0), v___x_155_, v___x_156_, lean_box(0));
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___lam__2___boxed(lean_object* v_x_158_, lean_object* v___f_159_, lean_object* v___f_160_, lean_object* v_y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lake_instMonadMainM___aux__7___redArg___lam__2(v_x_158_, v___f_159_, v___f_160_, v_y_161_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg(lean_object* v_f_166_, lean_object* v_x_167_){
_start:
{
lean_object* v___f_169_; lean_object* v___f_170_; lean_object* v___f_171_; lean_object* v___x_172_; 
v___f_169_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__0));
v___f_170_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__1));
v___f_171_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__7___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_171_, 0, v_x_167_);
lean_closure_set(v___f_171_, 1, v___f_170_);
lean_closure_set(v___f_171_, 2, v___f_169_);
v___x_172_ = l_Lake_instMonadMainM___aux__7___redArg___lam__0(lean_box(0), lean_box(0), v_f_166_, v___f_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___redArg___boxed(lean_object* v_f_173_, lean_object* v_x_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lake_instMonadMainM___aux__7___redArg(v_f_173_, v_x_174_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7(lean_object* v_00_u03b1_177_, lean_object* v_00_u03b2_178_, lean_object* v_f_179_, lean_object* v_x_180_){
_start:
{
lean_object* v___f_182_; lean_object* v___f_183_; lean_object* v___f_184_; lean_object* v___x_185_; 
v___f_182_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__0));
v___f_183_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__1));
v___f_184_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__7___redArg___lam__2___boxed), 5, 3);
lean_closure_set(v___f_184_, 0, v_x_180_);
lean_closure_set(v___f_184_, 1, v___f_183_);
lean_closure_set(v___f_184_, 2, v___f_182_);
v___x_185_ = l_Lake_instMonadMainM___aux__7___redArg___lam__0(lean_box(0), lean_box(0), v_f_179_, v___f_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__7___boxed(lean_object* v_00_u03b1_186_, lean_object* v_00_u03b2_187_, lean_object* v_f_188_, lean_object* v_x_189_, lean_object* v___y_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Lake_instMonadMainM___aux__7(v_00_u03b1_186_, v_00_u03b2_187_, v_f_188_, v_x_189_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__1(lean_object* v_a_192_, lean_object* v_x_193_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v_a_192_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__1___boxed(lean_object* v_a_196_, lean_object* v_x_197_, lean_object* v___y_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lake_instMonadMainM___aux__9___redArg___lam__1(v_a_196_, v_x_197_);
lean_dec(v_x_197_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__0(lean_object* v_y_200_, lean_object* v___f_201_, lean_object* v_a_202_){
_start:
{
lean_object* v___f_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; 
v___f_204_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__9___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_204_, 0, v_a_202_);
v___x_205_ = lean_box(0);
v___x_206_ = lean_apply_1(v_y_200_, v___x_205_);
v___x_207_ = lean_apply_5(v___f_201_, lean_box(0), lean_box(0), v___x_206_, v___f_204_, lean_box(0));
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___lam__0___boxed(lean_object* v_y_208_, lean_object* v___f_209_, lean_object* v_a_210_, lean_object* v___y_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lake_instMonadMainM___aux__9___redArg___lam__0(v_y_208_, v___f_209_, v_a_210_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg(lean_object* v_x_213_, lean_object* v_y_214_){
_start:
{
lean_object* v___f_216_; lean_object* v___f_217_; lean_object* v___x_218_; 
v___f_216_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__0));
v___f_217_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__9___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_217_, 0, v_y_214_);
lean_closure_set(v___f_217_, 1, v___f_216_);
v___x_218_ = l_Lake_instMonadMainM___aux__7___redArg___lam__0(lean_box(0), lean_box(0), v_x_213_, v___f_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___redArg___boxed(lean_object* v_x_219_, lean_object* v_y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v_res_222_; 
v_res_222_ = l_Lake_instMonadMainM___aux__9___redArg(v_x_219_, v_y_220_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9(lean_object* v_00_u03b1_223_, lean_object* v_00_u03b2_224_, lean_object* v_x_225_, lean_object* v_y_226_){
_start:
{
lean_object* v___f_228_; lean_object* v___f_229_; lean_object* v___x_230_; 
v___f_228_ = ((lean_object*)(l_Lake_instMonadMainM___aux__7___redArg___closed__0));
v___f_229_ = lean_alloc_closure((void*)(l_Lake_instMonadMainM___aux__9___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_229_, 0, v_y_226_);
lean_closure_set(v___f_229_, 1, v___f_228_);
v___x_230_ = l_Lake_instMonadMainM___aux__7___redArg___lam__0(lean_box(0), lean_box(0), v_x_225_, v___f_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__9___boxed(lean_object* v_00_u03b1_231_, lean_object* v_00_u03b2_232_, lean_object* v_x_233_, lean_object* v_y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lake_instMonadMainM___aux__9(v_00_u03b1_231_, v_00_u03b2_232_, v_x_233_, v_y_234_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg(lean_object* v_x_237_, lean_object* v_y_238_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_apply_1(v_x_237_, lean_box(0));
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec_ref_known(v___x_240_, 1);
v___x_241_ = lean_box(0);
v___x_242_ = lean_apply_2(v_y_238_, v___x_241_, lean_box(0));
return v___x_242_;
}
else
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
lean_dec_ref(v_y_238_);
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
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___redArg___boxed(lean_object* v_x_251_, lean_object* v_y_252_, lean_object* v___y_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = l_Lake_instMonadMainM___aux__11___redArg(v_x_251_, v_y_252_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11(lean_object* v_00_u03b1_255_, lean_object* v_00_u03b2_256_, lean_object* v_x_257_, lean_object* v_y_258_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = lean_apply_1(v_x_257_, lean_box(0));
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec_ref_known(v___x_260_, 1);
v___x_261_ = lean_box(0);
v___x_262_ = lean_apply_2(v_y_258_, v___x_261_, lean_box(0));
return v___x_262_;
}
else
{
lean_object* v_a_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_270_; 
lean_dec_ref(v_y_258_);
v_a_263_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_270_ == 0)
{
v___x_265_ = v___x_260_;
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_a_263_);
lean_dec(v___x_260_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_270_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v___x_268_; 
if (v_isShared_266_ == 0)
{
v___x_268_ = v___x_265_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_a_263_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
return v___x_268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__11___boxed(lean_object* v_00_u03b1_271_, lean_object* v_00_u03b2_272_, lean_object* v_x_273_, lean_object* v_y_274_, lean_object* v___y_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lake_instMonadMainM___aux__11(v_00_u03b1_271_, v_00_u03b2_272_, v_x_273_, v_y_274_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___redArg(lean_object* v_x_277_, lean_object* v_f_278_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = lean_apply_1(v_x_277_, lean_box(0));
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_282_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v___x_280_, 1);
v___x_282_ = lean_apply_2(v_f_278_, v_a_281_, lean_box(0));
return v___x_282_;
}
else
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_290_; 
lean_dec_ref(v_f_278_);
v_a_283_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_290_ == 0)
{
v___x_285_ = v___x_280_;
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_280_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_290_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___x_288_; 
if (v_isShared_286_ == 0)
{
v___x_288_ = v___x_285_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_a_283_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___redArg___boxed(lean_object* v_x_291_, lean_object* v_f_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lake_instMonadMainM___aux__13___redArg(v_x_291_, v_f_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13(lean_object* v_00_u03b1_295_, lean_object* v_00_u03b2_296_, lean_object* v_x_297_, lean_object* v_f_298_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = lean_apply_1(v_x_297_, lean_box(0));
if (lean_obj_tag(v___x_300_) == 0)
{
lean_object* v_a_301_; lean_object* v___x_302_; 
v_a_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc(v_a_301_);
lean_dec_ref_known(v___x_300_, 1);
v___x_302_ = lean_apply_2(v_f_298_, v_a_301_, lean_box(0));
return v___x_302_;
}
else
{
lean_object* v_a_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_310_; 
lean_dec_ref(v_f_298_);
v_a_303_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_310_ == 0)
{
v___x_305_ = v___x_300_;
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_a_303_);
lean_dec(v___x_300_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_310_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_a_303_);
v___x_308_ = v_reuseFailAlloc_309_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
return v___x_308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadMainM___aux__13___boxed(lean_object* v_00_u03b1_311_, lean_object* v_00_u03b2_312_, lean_object* v_x_313_, lean_object* v_f_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lake_instMonadMainM___aux__13(v_00_u03b1_311_, v_00_u03b2_312_, v_x_313_, v_f_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg(lean_object* v_x_337_, lean_object* v_f_338_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = lean_apply_1(v_x_337_, lean_box(0));
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_366_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_366_ == 0)
{
v___x_343_ = v___x_340_;
v_isShared_344_ = v_isSharedCheck_366_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_340_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_366_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
lean_inc(v_a_341_);
if (v_isShared_344_ == 0)
{
lean_ctor_set_tag(v___x_343_, 1);
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_365_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
lean_object* v___x_347_; 
v___x_347_ = lean_apply_2(v_f_338_, v___x_346_, lean_box(0));
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_356_; 
v_a_348_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_356_ == 0)
{
v___x_350_ = v___x_347_;
v_isShared_351_ = v_isSharedCheck_356_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_347_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_356_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_352_; lean_object* v___x_354_; 
v___x_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_352_, 0, v_a_341_);
lean_ctor_set(v___x_352_, 1, v_a_348_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 0, v___x_352_);
v___x_354_ = v___x_350_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_352_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
else
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_364_; 
lean_dec(v_a_341_);
v_a_357_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_364_ == 0)
{
v___x_359_ = v___x_347_;
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_347_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_357_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
}
}
else
{
lean_object* v_a_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v_a_367_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_367_);
lean_dec_ref_known(v___x_340_, 1);
v___x_368_ = lean_box(0);
v___x_369_ = lean_apply_2(v_f_338_, v___x_368_, lean_box(0));
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_376_ == 0)
{
lean_object* v_unused_377_; 
v_unused_377_ = lean_ctor_get(v___x_369_, 0);
lean_dec(v_unused_377_);
v___x_371_ = v___x_369_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_dec(v___x_369_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
lean_ctor_set_tag(v___x_371_, 1);
lean_ctor_set(v___x_371_, 0, v_a_367_);
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_367_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
else
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_385_; 
lean_dec(v_a_367_);
v_a_378_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_385_ == 0)
{
v___x_380_ = v___x_369_;
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_369_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_385_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_383_; 
if (v_isShared_381_ == 0)
{
v___x_383_ = v___x_380_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_a_378_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___redArg___boxed(lean_object* v_x_386_, lean_object* v_f_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lake_instMonadFinallyMainM___aux__1___redArg(v_x_386_, v_f_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1(lean_object* v_00_u03b1_390_, lean_object* v_00_u03b2_391_, lean_object* v_x_392_, lean_object* v_f_393_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = lean_apply_1(v_x_392_, lean_box(0));
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_421_; 
v_a_396_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_421_ == 0)
{
v___x_398_ = v___x_395_;
v_isShared_399_ = v_isSharedCheck_421_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_395_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_421_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
lean_inc(v_a_396_);
if (v_isShared_399_ == 0)
{
lean_ctor_set_tag(v___x_398_, 1);
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_420_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
lean_object* v___x_402_; 
v___x_402_ = lean_apply_2(v_f_393_, v___x_401_, lean_box(0));
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_411_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_411_ == 0)
{
v___x_405_ = v___x_402_;
v_isShared_406_ = v_isSharedCheck_411_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_402_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_411_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_407_, 0, v_a_396_);
lean_ctor_set(v___x_407_, 1, v_a_403_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 0, v___x_407_);
v___x_409_ = v___x_405_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
else
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
lean_dec(v_a_396_);
v_a_412_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_402_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_402_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
}
}
else
{
lean_object* v_a_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v_a_422_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_a_422_);
lean_dec_ref_known(v___x_395_, 1);
v___x_423_ = lean_box(0);
v___x_424_ = lean_apply_2(v_f_393_, v___x_423_, lean_box(0));
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; 
v_unused_432_ = lean_ctor_get(v___x_424_, 0);
lean_dec(v_unused_432_);
v___x_426_ = v___x_424_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_dec(v___x_424_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
lean_ctor_set_tag(v___x_426_, 1);
lean_ctor_set(v___x_426_, 0, v_a_422_);
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_422_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
lean_dec(v_a_422_);
v_a_433_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_424_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_424_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadFinallyMainM___aux__1___boxed(lean_object* v_00_u03b1_441_, lean_object* v_00_u03b2_442_, lean_object* v_x_443_, lean_object* v_f_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lake_instMonadFinallyMainM___aux__1(v_00_u03b1_441_, v_00_u03b2_442_, v_x_443_, v_f_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1___redArg(lean_object* v_act_449_){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_451_ = lean_apply_1(v_act_449_, lean_box(0));
v___x_452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1___redArg___boxed(lean_object* v_act_453_, lean_object* v___y_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lake_instMonadLiftBaseIOMainM___aux__1___redArg(v_act_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1(lean_object* v_00_u03b1_456_, lean_object* v_act_457_){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_apply_1(v_act_457_, lean_box(0));
v___x_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLiftBaseIOMainM___aux__1___boxed(lean_object* v_00_u03b1_461_, lean_object* v_act_462_, lean_object* v___y_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Lake_instMonadLiftBaseIOMainM___aux__1(v_00_u03b1_461_, v_act_462_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk___redArg(lean_object* v_x_467_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = lean_apply_1(v_x_467_, lean_box(0));
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk___redArg___boxed(lean_object* v_x_470_, lean_object* v___y_471_){
_start:
{
lean_object* v_res_472_; 
v_res_472_ = l_Lake_MainM_mk___redArg(v_x_470_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk(lean_object* v_00_u03b1_473_, lean_object* v_x_474_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = lean_apply_1(v_x_474_, lean_box(0));
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_mk___boxed(lean_object* v_00_u03b1_477_, lean_object* v_x_478_, lean_object* v___y_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lake_MainM_mk(v_00_u03b1_477_, v_x_478_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___redArg(lean_object* v_self_481_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = lean_apply_1(v_self_481_, lean_box(0));
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___redArg___boxed(lean_object* v_self_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lake_MainM_toEIO___redArg(v_self_484_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO(lean_object* v_00_u03b1_487_, lean_object* v_self_488_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = lean_apply_1(v_self_488_, lean_box(0));
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toEIO___boxed(lean_object* v_00_u03b1_491_, lean_object* v_self_492_, lean_object* v___y_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Lake_MainM_toEIO(v_00_u03b1_491_, v_self_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___redArg(lean_object* v_self_495_){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = lean_apply_1(v_self_495_, lean_box(0));
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_505_; 
v_a_498_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_505_ == 0)
{
v___x_500_ = v___x_497_;
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v___x_497_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_503_; 
if (v_isShared_501_ == 0)
{
lean_ctor_set_tag(v___x_500_, 1);
v___x_503_ = v___x_500_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_a_498_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
else
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
v_a_506_ = lean_ctor_get(v___x_497_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_497_);
if (v_isSharedCheck_513_ == 0)
{
v___x_508_ = v___x_497_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_497_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
lean_ctor_set_tag(v___x_508_, 0);
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_506_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___redArg___boxed(lean_object* v_self_514_, lean_object* v___y_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lake_MainM_toBaseIO___redArg(v_self_514_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO(lean_object* v_00_u03b1_517_, lean_object* v_self_518_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = lean_apply_1(v_self_518_, lean_box(0));
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_520_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set_tag(v___x_523_, 1);
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
v_a_529_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_520_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_520_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
lean_ctor_set_tag(v___x_531_, 0);
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_toBaseIO___boxed(lean_object* v_00_u03b1_537_, lean_object* v_self_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lake_MainM_toBaseIO(v_00_u03b1_537_, v_self_538_);
return v_res_540_;
}
}
LEAN_EXPORT uint32_t l_Lake_MainM_run___redArg(lean_object* v_self_541_){
_start:
{
lean_object* v___x_543_; 
v___x_543_ = lean_apply_1(v_self_541_, lean_box(0));
if (lean_obj_tag(v___x_543_) == 0)
{
uint32_t v___x_544_; 
lean_dec_ref_known(v___x_543_, 1);
v___x_544_ = 0;
return v___x_544_;
}
else
{
lean_object* v_a_545_; uint32_t v___x_546_; 
v_a_545_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_543_, 1);
v___x_546_ = lean_unbox_uint32(v_a_545_);
lean_dec(v_a_545_);
return v___x_546_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_run___redArg___boxed(lean_object* v_self_547_, lean_object* v___y_548_){
_start:
{
uint32_t v_res_549_; lean_object* v_r_550_; 
v_res_549_ = l_Lake_MainM_run___redArg(v_self_547_);
v_r_550_ = lean_box_uint32(v_res_549_);
return v_r_550_;
}
}
LEAN_EXPORT uint32_t l_Lake_MainM_run(lean_object* v_00_u03b1_551_, lean_object* v_self_552_){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = lean_apply_1(v_self_552_, lean_box(0));
if (lean_obj_tag(v___x_554_) == 0)
{
uint32_t v___x_555_; 
lean_dec_ref_known(v___x_554_, 1);
v___x_555_ = 0;
return v___x_555_;
}
else
{
lean_object* v_a_556_; uint32_t v___x_557_; 
v_a_556_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_a_556_);
lean_dec_ref_known(v___x_554_, 1);
v___x_557_ = lean_unbox_uint32(v_a_556_);
lean_dec(v_a_556_);
return v___x_557_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_run___boxed(lean_object* v_00_u03b1_558_, lean_object* v_self_559_, lean_object* v___y_560_){
_start:
{
uint32_t v_res_561_; lean_object* v_r_562_; 
v_res_561_ = l_Lake_MainM_run(v_00_u03b1_558_, v_self_559_);
v_r_562_ = lean_box_uint32(v_res_561_);
return v_r_562_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit___redArg(uint32_t v_rc_563_){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = lean_box_uint32(v_rc_563_);
v___x_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit___redArg___boxed(lean_object* v_rc_567_, lean_object* v___y_568_){
_start:
{
uint32_t v_rc_boxed_569_; lean_object* v_res_570_; 
v_rc_boxed_569_ = lean_unbox_uint32(v_rc_567_);
lean_dec(v_rc_567_);
v_res_570_ = l_Lake_MainM_exit___redArg(v_rc_boxed_569_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit(lean_object* v_00_u03b1_571_, uint32_t v_rc_572_){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_box_uint32(v_rc_572_);
v___x_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_exit___boxed(lean_object* v_00_u03b1_576_, lean_object* v_rc_577_, lean_object* v___y_578_){
_start:
{
uint32_t v_rc_boxed_579_; lean_object* v_res_580_; 
v_rc_boxed_579_ = lean_unbox_uint32(v_rc_577_);
lean_dec(v_rc_577_);
v_res_580_ = l_Lake_MainM_exit(v_00_u03b1_576_, v_rc_boxed_579_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___redArg(lean_object* v_f_583_, lean_object* v_self_584_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = lean_apply_1(v_self_584_, lean_box(0));
if (lean_obj_tag(v___x_586_) == 0)
{
lean_dec_ref(v_f_583_);
return v___x_586_;
}
else
{
lean_object* v_a_587_; lean_object* v___x_588_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_a_587_);
lean_dec_ref_known(v___x_586_, 1);
v___x_588_ = lean_apply_2(v_f_583_, v_a_587_, lean_box(0));
return v___x_588_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___redArg___boxed(lean_object* v_f_589_, lean_object* v_self_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lake_MainM_tryCatchExit___redArg(v_f_589_, v_self_590_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit(lean_object* v_00_u03b1_593_, lean_object* v_f_594_, lean_object* v_self_595_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lean_apply_1(v_self_595_, lean_box(0));
if (lean_obj_tag(v___x_597_) == 0)
{
lean_dec_ref(v_f_594_);
return v___x_597_;
}
else
{
lean_object* v_a_598_; lean_object* v___x_599_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_598_);
lean_dec_ref_known(v___x_597_, 1);
v___x_599_ = lean_apply_2(v_f_594_, v_a_598_, lean_box(0));
return v___x_599_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchExit___boxed(lean_object* v_00_u03b1_600_, lean_object* v_f_601_, lean_object* v_self_602_, lean_object* v___y_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lake_MainM_tryCatchExit(v_00_u03b1_600_, v_f_601_, v_self_602_);
return v_res_604_;
}
}
static lean_object* _init_l_Lake_MainM_tryCatchError___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_605_; lean_object* v___x_606_; 
v___x_605_ = 0;
v___x_606_ = lean_box_uint32(v___x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___redArg(lean_object* v_f_607_, lean_object* v_self_608_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = lean_apply_1(v_self_608_, lean_box(0));
if (lean_obj_tag(v___x_610_) == 0)
{
lean_dec_ref(v_f_607_);
return v___x_610_;
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_623_; 
v_a_611_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_623_ == 0)
{
v___x_613_ = v___x_610_;
v_isShared_614_ = v_isSharedCheck_623_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_610_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_623_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
uint32_t v___x_615_; uint32_t v___x_616_; uint8_t v___x_617_; 
v___x_615_ = 0;
v___x_616_ = lean_unbox_uint32(v_a_611_);
v___x_617_ = lean_uint32_dec_eq(v___x_616_, v___x_615_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; 
lean_del_object(v___x_613_);
v___x_618_ = lean_apply_2(v_f_607_, v_a_611_, lean_box(0));
return v___x_618_;
}
else
{
lean_object* v___x_619_; lean_object* v___x_621_; 
lean_dec(v_a_611_);
lean_dec_ref(v_f_607_);
v___x_619_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v___x_619_);
v___x_621_ = v___x_613_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_619_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___redArg___boxed(lean_object* v_f_624_, lean_object* v_self_625_, lean_object* v___y_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lake_MainM_tryCatchError___redArg(v_f_624_, v_self_625_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError(lean_object* v_00_u03b1_628_, lean_object* v_f_629_, lean_object* v_self_630_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = lean_apply_1(v_self_630_, lean_box(0));
if (lean_obj_tag(v___x_632_) == 0)
{
lean_dec_ref(v_f_629_);
return v___x_632_;
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_645_; 
v_a_633_ = lean_ctor_get(v___x_632_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_645_ == 0)
{
v___x_635_ = v___x_632_;
v_isShared_636_ = v_isSharedCheck_645_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_632_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_645_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
uint32_t v___x_637_; uint32_t v___x_638_; uint8_t v___x_639_; 
v___x_637_ = 0;
v___x_638_ = lean_unbox_uint32(v_a_633_);
v___x_639_ = lean_uint32_dec_eq(v___x_638_, v___x_637_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; 
lean_del_object(v___x_635_);
v___x_640_ = lean_apply_2(v_f_629_, v_a_633_, lean_box(0));
return v___x_640_;
}
else
{
lean_object* v___x_641_; lean_object* v___x_643_; 
lean_dec(v_a_633_);
lean_dec_ref(v_f_629_);
v___x_641_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 0, v___x_641_);
v___x_643_ = v___x_635_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_641_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_tryCatchError___boxed(lean_object* v_00_u03b1_646_, lean_object* v_f_647_, lean_object* v_self_648_, lean_object* v___y_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lake_MainM_tryCatchError(v_00_u03b1_646_, v_f_647_, v_self_648_);
return v_res_650_;
}
}
static lean_object* _init_l_Lake_MainM_failure___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_651_; lean_object* v___x_652_; 
v___x_651_ = 1;
v___x_652_ = lean_box_uint32(v___x_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure___redArg(){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure___redArg___boxed(lean_object* v___y_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lake_MainM_failure___redArg();
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure(lean_object* v_00_u03b1_658_){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_failure___boxed(lean_object* v_00_u03b1_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lake_MainM_failure(v_00_u03b1_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___redArg(lean_object* v_self_665_, lean_object* v_other_666_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = lean_apply_1(v_self_665_, lean_box(0));
if (lean_obj_tag(v___x_668_) == 0)
{
lean_dec_ref(v_other_666_);
return v___x_668_;
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_682_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_682_ == 0)
{
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_682_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_682_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
uint32_t v___x_673_; uint32_t v___x_674_; uint8_t v___x_675_; 
v___x_673_ = 0;
v___x_674_ = lean_unbox_uint32(v_a_669_);
lean_dec(v_a_669_);
v___x_675_ = lean_uint32_dec_eq(v___x_674_, v___x_673_);
if (v___x_675_ == 0)
{
lean_object* v___x_676_; lean_object* v___x_677_; 
lean_del_object(v___x_671_);
v___x_676_ = lean_box(0);
v___x_677_ = lean_apply_2(v_other_666_, v___x_676_, lean_box(0));
return v___x_677_;
}
else
{
lean_object* v___x_678_; lean_object* v___x_680_; 
lean_dec_ref(v_other_666_);
v___x_678_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_678_);
v___x_680_ = v___x_671_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_678_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___redArg___boxed(lean_object* v_self_683_, lean_object* v_other_684_, lean_object* v___y_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lake_MainM_orElse___redArg(v_self_683_, v_other_684_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse(lean_object* v_00_u03b1_687_, lean_object* v_self_688_, lean_object* v_other_689_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = lean_apply_1(v_self_688_, lean_box(0));
if (lean_obj_tag(v___x_691_) == 0)
{
lean_dec_ref(v_other_689_);
return v___x_691_;
}
else
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_705_; 
v_a_692_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_705_ == 0)
{
v___x_694_ = v___x_691_;
v_isShared_695_ = v_isSharedCheck_705_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_691_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_705_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
uint32_t v___x_696_; uint32_t v___x_697_; uint8_t v___x_698_; 
v___x_696_ = 0;
v___x_697_ = lean_unbox_uint32(v_a_692_);
lean_dec(v_a_692_);
v___x_698_ = lean_uint32_dec_eq(v___x_697_, v___x_696_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; lean_object* v___x_700_; 
lean_del_object(v___x_694_);
v___x_699_ = lean_box(0);
v___x_700_ = lean_apply_2(v_other_689_, v___x_699_, lean_box(0));
return v___x_700_;
}
else
{
lean_object* v___x_701_; lean_object* v___x_703_; 
lean_dec_ref(v_other_689_);
v___x_701_ = l_Lake_MainM_tryCatchError___redArg___boxed__const__1;
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 0, v___x_701_);
v___x_703_ = v___x_694_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v___x_701_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_orElse___boxed(lean_object* v_00_u03b1_706_, lean_object* v_self_707_, lean_object* v_other_708_, lean_object* v___y_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lake_MainM_orElse(v_00_u03b1_706_, v_self_707_, v_other_708_);
return v_res_710_;
}
}
static lean_object* _init_l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative(void){
_start:
{
lean_object* v___x_713_; lean_object* v_toApplicative_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_713_ = ((lean_object*)(l_Lake_instMonadMainM));
v_toApplicative_714_ = lean_ctor_get(v___x_713_, 0);
v___x_715_ = ((lean_object*)(l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__0));
v___x_716_ = ((lean_object*)(l___private_Lake_Util_MainM_0__Lake_MainM_instAlternative___closed__1));
lean_inc_ref(v_toApplicative_714_);
v___x_717_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_717_, 0, v_toApplicative_714_);
lean_ctor_set(v___x_717_, 1, v___x_715_);
lean_ctor_set(v___x_717_, 2, v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLog___lam__0(lean_object* v___x_718_, uint8_t v___x_719_, uint8_t v___x_720_, lean_object* v_e_721_){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = l_Lake_OutStream_logEntry(v___x_718_, v_e_721_, v___x_719_, v___x_720_);
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLog___lam__0___boxed(lean_object* v___x_725_, lean_object* v___x_726_, lean_object* v___x_727_, lean_object* v_e_728_, lean_object* v___y_729_){
_start:
{
uint8_t v___x_37__boxed_730_; uint8_t v___x_38__boxed_731_; lean_object* v_res_732_; 
v___x_37__boxed_730_ = lean_unbox(v___x_726_);
v___x_38__boxed_731_ = lean_unbox(v___x_727_);
v_res_732_ = l_Lake_MainM_instMonadLog___lam__0(v___x_725_, v___x_37__boxed_730_, v___x_38__boxed_731_, v_e_728_);
lean_dec_ref(v_e_728_);
lean_dec(v___x_725_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg(lean_object* v_msg_740_, uint32_t v_rc_741_){
_start:
{
uint8_t v___x_743_; uint8_t v___x_744_; lean_object* v___x_745_; uint8_t v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_743_ = 1;
v___x_744_ = 0;
v___x_745_ = lean_box(1);
v___x_746_ = 3;
v___x_747_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_747_, 0, v_msg_740_);
lean_ctor_set_uint8(v___x_747_, sizeof(void*)*1, v___x_746_);
v___x_748_ = l_Lake_OutStream_logEntry(v___x_745_, v___x_747_, v___x_743_, v___x_744_);
lean_dec_ref_known(v___x_747_, 1);
v___x_749_ = lean_box_uint32(v_rc_741_);
v___x_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___redArg___boxed(lean_object* v_msg_751_, lean_object* v_rc_752_, lean_object* v___y_753_){
_start:
{
uint32_t v_rc_boxed_754_; lean_object* v_res_755_; 
v_rc_boxed_754_ = lean_unbox_uint32(v_rc_752_);
lean_dec(v_rc_752_);
v_res_755_ = l_Lake_MainM_error___redArg(v_msg_751_, v_rc_boxed_754_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error(lean_object* v_00_u03b1_756_, lean_object* v_msg_757_, uint32_t v_rc_758_){
_start:
{
uint8_t v___x_760_; uint8_t v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_760_ = 1;
v___x_761_ = 0;
v___x_762_ = lean_box(1);
v___x_763_ = 3;
v___x_764_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_764_, 0, v_msg_757_);
lean_ctor_set_uint8(v___x_764_, sizeof(void*)*1, v___x_763_);
v___x_765_ = l_Lake_OutStream_logEntry(v___x_762_, v___x_764_, v___x_760_, v___x_761_);
lean_dec_ref_known(v___x_764_, 1);
v___x_766_ = lean_box_uint32(v_rc_758_);
v___x_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_767_, 0, v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_error___boxed(lean_object* v_00_u03b1_768_, lean_object* v_msg_769_, lean_object* v_rc_770_, lean_object* v___y_771_){
_start:
{
uint32_t v_rc_boxed_772_; lean_object* v_res_773_; 
v_rc_boxed_772_ = lean_unbox_uint32(v_rc_770_);
lean_dec(v_rc_770_);
v_res_773_ = l_Lake_MainM_error(v_00_u03b1_768_, v_msg_769_, v_rc_boxed_772_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__0(lean_object* v_00_u03b1_774_, lean_object* v_msg_775_){
_start:
{
uint8_t v___x_777_; uint8_t v___x_778_; lean_object* v___x_779_; uint8_t v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_777_ = 1;
v___x_778_ = 0;
v___x_779_ = lean_box(1);
v___x_780_ = 3;
v___x_781_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_781_, 0, v_msg_775_);
lean_ctor_set_uint8(v___x_781_, sizeof(void*)*1, v___x_780_);
v___x_782_ = l_Lake_OutStream_logEntry(v___x_779_, v___x_781_, v___x_777_, v___x_778_);
lean_dec_ref_known(v___x_781_, 1);
v___x_783_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadError___lam__0___boxed(lean_object* v_00_u03b1_785_, lean_object* v_msg_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lake_MainM_instMonadError___lam__0(v_00_u03b1_785_, v_msg_786_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__0(lean_object* v_00_u03b1_791_, lean_object* v___y_792_){
_start:
{
lean_object* v___x_794_; 
v___x_794_ = lean_apply_1(v___y_792_, lean_box(0));
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
v_a_795_ = lean_ctor_get(v___x_794_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_794_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_794_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_794_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
else
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_818_; 
v_a_803_ = lean_ctor_get(v___x_794_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_794_);
if (v_isSharedCheck_818_ == 0)
{
v___x_805_ = v___x_794_;
v_isShared_806_ = v_isSharedCheck_818_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_794_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_818_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; uint8_t v___x_808_; uint8_t v___x_809_; lean_object* v___x_810_; uint8_t v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_816_; 
v___x_807_ = lean_io_error_to_string(v_a_803_);
v___x_808_ = 1;
v___x_809_ = 0;
v___x_810_ = lean_box(1);
v___x_811_ = 3;
v___x_812_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_812_, 0, v___x_807_);
lean_ctor_set_uint8(v___x_812_, sizeof(void*)*1, v___x_811_);
v___x_813_ = l_Lake_OutStream_logEntry(v___x_810_, v___x_812_, v___x_808_, v___x_809_);
lean_dec_ref_known(v___x_812_, 1);
v___x_814_ = l_Lake_MainM_failure___redArg___boxed__const__1;
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 0, v___x_814_);
v___x_816_ = v___x_805_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_814_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_instMonadLiftIO___lam__0___boxed(lean_object* v_00_u03b1_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lake_MainM_instMonadLiftIO___lam__0(v_00_u03b1_819_, v___y_820_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__0(lean_object* v_val_825_, uint8_t v___y_826_, uint8_t v_val_827_, lean_object* v_x_828_, lean_object* v___y_829_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lake_logToStream(v___y_829_, v_val_825_, v___y_826_, v_val_827_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___lam__0___boxed(lean_object* v_val_832_, lean_object* v___y_833_, lean_object* v_val_834_, lean_object* v_x_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
uint8_t v___y_417__boxed_838_; uint8_t v_val_418__boxed_839_; lean_object* v_res_840_; 
v___y_417__boxed_838_ = lean_unbox(v___y_833_);
v_val_418__boxed_839_ = lean_unbox(v_val_834_);
v_res_840_ = l_Lake_MainM_runLogIO___redArg___lam__0(v_val_832_, v___y_417__boxed_838_, v_val_418__boxed_839_, v_x_835_, v___y_836_);
lean_dec_ref(v___y_836_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg(lean_object* v_x_866_, lean_object* v_cfg_867_){
_start:
{
lean_object* v___y_873_; uint8_t v___y_874_; lean_object* v___x_883_; lean_object* v___y_885_; uint8_t v___y_886_; lean_object* v___y_887_; uint8_t v___y_888_; lean_object* v___y_889_; uint8_t v___y_890_; lean_object* v___y_905_; uint8_t v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; uint8_t v___y_909_; lean_object* v___y_912_; uint8_t v___y_913_; uint8_t v___y_914_; lean_object* v___y_915_; uint8_t v___y_916_; lean_object* v___y_917_; uint8_t v___y_918_; lean_object* v___y_920_; lean_object* v___y_921_; uint8_t v___y_922_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_883_ = ((lean_object*)(l_Lake_MainM_runLogIO___redArg___closed__10));
v___x_931_ = ((lean_object*)(l_Lake_MainM_runLogIO___redArg___closed__11));
v___x_932_ = lean_apply_2(v_x_866_, v___x_931_, lean_box(0));
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v_a_933_; lean_object* v_a_934_; lean_object* v___x_935_; uint8_t v___x_936_; 
v_a_933_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_a_933_);
v_a_934_ = lean_ctor_get(v___x_932_, 1);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_932_, 2);
v___x_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_935_, 0, v_a_933_);
v___x_936_ = 0;
v___y_920_ = v___x_935_;
v___y_921_ = v_a_934_;
v___y_922_ = v___x_936_;
goto v___jp_919_;
}
else
{
lean_object* v_a_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v_a_937_ = lean_ctor_get(v___x_932_, 1);
lean_inc(v_a_937_);
lean_dec_ref_known(v___x_932_, 2);
v___x_938_ = lean_box(0);
v___x_939_ = 1;
v___y_920_ = v___x_938_;
v___y_921_ = v_a_937_;
v___y_922_ = v___x_939_;
goto v___jp_919_;
}
v___jp_869_:
{
lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_870_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
return v___x_871_;
}
v___jp_872_:
{
if (v___y_874_ == 0)
{
if (lean_obj_tag(v___y_873_) == 0)
{
goto v___jp_869_;
}
else
{
lean_object* v_val_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_882_; 
v_val_875_ = lean_ctor_get(v___y_873_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___y_873_);
if (v_isSharedCheck_882_ == 0)
{
v___x_877_ = v___y_873_;
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_val_875_);
lean_dec(v___y_873_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_880_; 
if (v_isShared_878_ == 0)
{
lean_ctor_set_tag(v___x_877_, 0);
v___x_880_ = v___x_877_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_val_875_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
else
{
lean_dec(v___y_873_);
goto v___jp_869_;
}
}
v___jp_884_:
{
lean_object* v___x_891_; uint8_t v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_891_ = l_Lake_OutStream_get(v___y_889_);
lean_inc_ref(v___x_891_);
v___x_892_ = l_Lake_AnsiMode_isEnabled(v___x_891_, v___y_886_);
v___x_893_ = lean_unsigned_to_nat(0u);
v___x_894_ = lean_array_get_size(v___y_887_);
v___x_895_ = lean_nat_dec_lt(v___x_893_, v___x_894_);
if (v___x_895_ == 0)
{
lean_dec_ref(v___x_891_);
lean_dec_ref(v___y_887_);
v___y_873_ = v___y_885_;
v___y_874_ = v___y_888_;
goto v___jp_872_;
}
else
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___f_898_; lean_object* v___x_899_; size_t v___x_900_; size_t v___x_901_; lean_object* v___x_137__overap_902_; lean_object* v___x_903_; 
v___x_896_ = lean_box(v___y_890_);
v___x_897_ = lean_box(v___x_892_);
v___f_898_ = lean_alloc_closure((void*)(l_Lake_MainM_runLogIO___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_898_, 0, v___x_891_);
lean_closure_set(v___f_898_, 1, v___x_896_);
lean_closure_set(v___f_898_, 2, v___x_897_);
v___x_899_ = lean_box(0);
v___x_900_ = ((size_t)0ULL);
v___x_901_ = lean_usize_of_nat(v___x_894_);
v___x_137__overap_902_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_883_, v___f_898_, v___y_887_, v___x_900_, v___x_901_, v___x_899_);
v___x_903_ = lean_apply_1(v___x_137__overap_902_, lean_box(0));
v___y_873_ = v___y_885_;
v___y_874_ = v___y_888_;
goto v___jp_872_;
}
}
v___jp_904_:
{
uint8_t v___x_910_; 
v___x_910_ = 0;
v___y_885_ = v___y_905_;
v___y_886_ = v___y_906_;
v___y_887_ = v___y_907_;
v___y_888_ = v___y_909_;
v___y_889_ = v___y_908_;
v___y_890_ = v___x_910_;
goto v___jp_884_;
}
v___jp_911_:
{
if (v___y_916_ == 0)
{
if (v___y_918_ == 0)
{
v___y_885_ = v___y_912_;
v___y_886_ = v___y_914_;
v___y_887_ = v___y_915_;
v___y_888_ = v___y_918_;
v___y_889_ = v___y_917_;
v___y_890_ = v___y_913_;
goto v___jp_884_;
}
else
{
v___y_905_ = v___y_912_;
v___y_906_ = v___y_914_;
v___y_907_ = v___y_915_;
v___y_908_ = v___y_917_;
v___y_909_ = v___y_918_;
goto v___jp_904_;
}
}
else
{
v___y_905_ = v___y_912_;
v___y_906_ = v___y_914_;
v___y_907_ = v___y_915_;
v___y_908_ = v___y_917_;
v___y_909_ = v___y_916_;
goto v___jp_904_;
}
}
v___jp_919_:
{
uint8_t v_failLv_923_; uint8_t v_outLv_924_; uint8_t v_ansiMode_925_; lean_object* v_out_926_; uint8_t v___x_927_; uint8_t v___x_928_; 
v_failLv_923_ = lean_ctor_get_uint8(v_cfg_867_, sizeof(void*)*1);
v_outLv_924_ = lean_ctor_get_uint8(v_cfg_867_, sizeof(void*)*1 + 1);
v_ansiMode_925_ = lean_ctor_get_uint8(v_cfg_867_, sizeof(void*)*1 + 2);
v_out_926_ = lean_ctor_get(v_cfg_867_, 0);
v___x_927_ = l_Lake_Log_maxLv(v___y_921_);
v___x_928_ = l_Lake_instOrdLogLevel_ord(v_failLv_923_, v___x_927_);
if (v___x_928_ == 2)
{
uint8_t v___x_929_; 
v___x_929_ = 0;
v___y_912_ = v___y_920_;
v___y_913_ = v_outLv_924_;
v___y_914_ = v_ansiMode_925_;
v___y_915_ = v___y_921_;
v___y_916_ = v___y_922_;
v___y_917_ = v_out_926_;
v___y_918_ = v___x_929_;
goto v___jp_911_;
}
else
{
uint8_t v___x_930_; 
v___x_930_ = 1;
v___y_912_ = v___y_920_;
v___y_913_ = v_outLv_924_;
v___y_914_ = v_ansiMode_925_;
v___y_915_ = v___y_921_;
v___y_916_ = v___y_922_;
v___y_917_ = v_out_926_;
v___y_918_ = v___x_930_;
goto v___jp_911_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___redArg___boxed(lean_object* v_x_940_, lean_object* v_cfg_941_, lean_object* v___y_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l_Lake_MainM_runLogIO___redArg(v_x_940_, v_cfg_941_);
lean_dec_ref(v_cfg_941_);
return v_res_943_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO(lean_object* v_00_u03b1_944_, lean_object* v_x_945_, lean_object* v_cfg_946_){
_start:
{
lean_object* v___y_952_; uint8_t v___y_953_; lean_object* v___x_962_; lean_object* v___y_964_; uint8_t v___y_965_; lean_object* v___y_966_; uint8_t v___y_967_; lean_object* v___y_968_; uint8_t v___y_969_; lean_object* v___y_984_; uint8_t v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; uint8_t v___y_988_; lean_object* v___y_991_; uint8_t v___y_992_; uint8_t v___y_993_; lean_object* v___y_994_; uint8_t v___y_995_; lean_object* v___y_996_; uint8_t v___y_997_; lean_object* v___y_999_; lean_object* v___y_1000_; uint8_t v___y_1001_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_962_ = ((lean_object*)(l_Lake_MainM_runLogIO___redArg___closed__10));
v___x_1010_ = ((lean_object*)(l_Lake_MainM_runLogIO___redArg___closed__11));
v___x_1011_ = lean_apply_2(v_x_945_, v___x_1010_, lean_box(0));
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v_a_1012_; lean_object* v_a_1013_; lean_object* v___x_1014_; uint8_t v___x_1015_; 
v_a_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_a_1012_);
v_a_1013_ = lean_ctor_get(v___x_1011_, 1);
lean_inc(v_a_1013_);
lean_dec_ref_known(v___x_1011_, 2);
v___x_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1014_, 0, v_a_1012_);
v___x_1015_ = 0;
v___y_999_ = v___x_1014_;
v___y_1000_ = v_a_1013_;
v___y_1001_ = v___x_1015_;
goto v___jp_998_;
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
v_a_1016_ = lean_ctor_get(v___x_1011_, 1);
lean_inc(v_a_1016_);
lean_dec_ref_known(v___x_1011_, 2);
v___x_1017_ = lean_box(0);
v___x_1018_ = 1;
v___y_999_ = v___x_1017_;
v___y_1000_ = v_a_1016_;
v___y_1001_ = v___x_1018_;
goto v___jp_998_;
}
v___jp_948_:
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
return v___x_950_;
}
v___jp_951_:
{
if (v___y_953_ == 0)
{
if (lean_obj_tag(v___y_952_) == 0)
{
goto v___jp_948_;
}
else
{
lean_object* v_val_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
v_val_954_ = lean_ctor_get(v___y_952_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___y_952_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___y_952_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_val_954_);
lean_dec(v___y_952_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set_tag(v___x_956_, 0);
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_val_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
else
{
lean_dec(v___y_952_);
goto v___jp_948_;
}
}
v___jp_963_:
{
lean_object* v___x_970_; uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; uint8_t v___x_974_; 
v___x_970_ = l_Lake_OutStream_get(v___y_968_);
lean_inc_ref(v___x_970_);
v___x_971_ = l_Lake_AnsiMode_isEnabled(v___x_970_, v___y_965_);
v___x_972_ = lean_unsigned_to_nat(0u);
v___x_973_ = lean_array_get_size(v___y_966_);
v___x_974_ = lean_nat_dec_lt(v___x_972_, v___x_973_);
if (v___x_974_ == 0)
{
lean_dec_ref(v___x_970_);
lean_dec_ref(v___y_966_);
v___y_952_ = v___y_964_;
v___y_953_ = v___y_967_;
goto v___jp_951_;
}
else
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___f_977_; lean_object* v___x_978_; size_t v___x_979_; size_t v___x_980_; lean_object* v___x_332__overap_981_; lean_object* v___x_982_; 
v___x_975_ = lean_box(v___y_969_);
v___x_976_ = lean_box(v___x_971_);
v___f_977_ = lean_alloc_closure((void*)(l_Lake_MainM_runLogIO___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_977_, 0, v___x_970_);
lean_closure_set(v___f_977_, 1, v___x_975_);
lean_closure_set(v___f_977_, 2, v___x_976_);
v___x_978_ = lean_box(0);
v___x_979_ = ((size_t)0ULL);
v___x_980_ = lean_usize_of_nat(v___x_973_);
v___x_332__overap_981_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_962_, v___f_977_, v___y_966_, v___x_979_, v___x_980_, v___x_978_);
v___x_982_ = lean_apply_1(v___x_332__overap_981_, lean_box(0));
v___y_952_ = v___y_964_;
v___y_953_ = v___y_967_;
goto v___jp_951_;
}
}
v___jp_983_:
{
uint8_t v___x_989_; 
v___x_989_ = 0;
v___y_964_ = v___y_984_;
v___y_965_ = v___y_985_;
v___y_966_ = v___y_986_;
v___y_967_ = v___y_988_;
v___y_968_ = v___y_987_;
v___y_969_ = v___x_989_;
goto v___jp_963_;
}
v___jp_990_:
{
if (v___y_995_ == 0)
{
if (v___y_997_ == 0)
{
v___y_964_ = v___y_991_;
v___y_965_ = v___y_993_;
v___y_966_ = v___y_994_;
v___y_967_ = v___y_997_;
v___y_968_ = v___y_996_;
v___y_969_ = v___y_992_;
goto v___jp_963_;
}
else
{
v___y_984_ = v___y_991_;
v___y_985_ = v___y_993_;
v___y_986_ = v___y_994_;
v___y_987_ = v___y_996_;
v___y_988_ = v___y_997_;
goto v___jp_983_;
}
}
else
{
v___y_984_ = v___y_991_;
v___y_985_ = v___y_993_;
v___y_986_ = v___y_994_;
v___y_987_ = v___y_996_;
v___y_988_ = v___y_995_;
goto v___jp_983_;
}
}
v___jp_998_:
{
uint8_t v_failLv_1002_; uint8_t v_outLv_1003_; uint8_t v_ansiMode_1004_; lean_object* v_out_1005_; uint8_t v___x_1006_; uint8_t v___x_1007_; 
v_failLv_1002_ = lean_ctor_get_uint8(v_cfg_946_, sizeof(void*)*1);
v_outLv_1003_ = lean_ctor_get_uint8(v_cfg_946_, sizeof(void*)*1 + 1);
v_ansiMode_1004_ = lean_ctor_get_uint8(v_cfg_946_, sizeof(void*)*1 + 2);
v_out_1005_ = lean_ctor_get(v_cfg_946_, 0);
v___x_1006_ = l_Lake_Log_maxLv(v___y_1000_);
v___x_1007_ = l_Lake_instOrdLogLevel_ord(v_failLv_1002_, v___x_1006_);
if (v___x_1007_ == 2)
{
uint8_t v___x_1008_; 
v___x_1008_ = 0;
v___y_991_ = v___y_999_;
v___y_992_ = v_outLv_1003_;
v___y_993_ = v_ansiMode_1004_;
v___y_994_ = v___y_1000_;
v___y_995_ = v___y_1001_;
v___y_996_ = v_out_1005_;
v___y_997_ = v___x_1008_;
goto v___jp_990_;
}
else
{
uint8_t v___x_1009_; 
v___x_1009_ = 1;
v___y_991_ = v___y_999_;
v___y_992_ = v_outLv_1003_;
v___y_993_ = v_ansiMode_1004_;
v___y_994_ = v___y_1000_;
v___y_995_ = v___y_1001_;
v___y_996_ = v_out_1005_;
v___y_997_ = v___x_1009_;
goto v___jp_990_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLogIO___boxed(lean_object* v_00_u03b1_1019_, lean_object* v_x_1020_, lean_object* v_cfg_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Lake_MainM_runLogIO(v_00_u03b1_1019_, v_x_1020_, v_cfg_1021_);
lean_dec_ref(v_cfg_1021_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(lean_object* v_val_1024_, uint8_t v___y_1025_, uint8_t v_val_1026_, lean_object* v_as_1027_, size_t v_i_1028_, size_t v_stop_1029_, lean_object* v_b_1030_){
_start:
{
uint8_t v___x_1032_; 
v___x_1032_ = lean_usize_dec_eq(v_i_1028_, v_stop_1029_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; lean_object* v___x_1034_; size_t v___x_1035_; size_t v___x_1036_; 
v___x_1033_ = lean_array_uget_borrowed(v_as_1027_, v_i_1028_);
lean_inc_ref(v_val_1024_);
v___x_1034_ = l_Lake_logToStream(v___x_1033_, v_val_1024_, v___y_1025_, v_val_1026_);
v___x_1035_ = ((size_t)1ULL);
v___x_1036_ = lean_usize_add(v_i_1028_, v___x_1035_);
v_i_1028_ = v___x_1036_;
v_b_1030_ = v___x_1034_;
goto _start;
}
else
{
lean_dec_ref(v_val_1024_);
return v_b_1030_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0___boxed(lean_object* v_val_1038_, lean_object* v___y_1039_, lean_object* v_val_1040_, lean_object* v_as_1041_, lean_object* v_i_1042_, lean_object* v_stop_1043_, lean_object* v_b_1044_, lean_object* v___y_1045_){
_start:
{
uint8_t v___y_409__boxed_1046_; uint8_t v_val_410__boxed_1047_; size_t v_i_boxed_1048_; size_t v_stop_boxed_1049_; lean_object* v_res_1050_; 
v___y_409__boxed_1046_ = lean_unbox(v___y_1039_);
v_val_410__boxed_1047_ = lean_unbox(v_val_1040_);
v_i_boxed_1048_ = lean_unbox_usize(v_i_1042_);
lean_dec(v_i_1042_);
v_stop_boxed_1049_ = lean_unbox_usize(v_stop_1043_);
lean_dec(v_stop_1043_);
v_res_1050_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(v_val_1038_, v___y_409__boxed_1046_, v_val_410__boxed_1047_, v_as_1041_, v_i_boxed_1048_, v_stop_boxed_1049_, v_b_1044_);
lean_dec_ref(v_as_1041_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___redArg(lean_object* v_x_1051_){
_start:
{
lean_object* v___y_1057_; uint8_t v___y_1058_; uint8_t v___x_1067_; uint8_t v___x_1068_; uint8_t v___x_1069_; lean_object* v___x_1070_; lean_object* v___y_1072_; lean_object* v___y_1073_; uint8_t v___y_1074_; uint8_t v___y_1075_; lean_object* v___y_1086_; lean_object* v___y_1087_; uint8_t v___y_1088_; lean_object* v___y_1091_; lean_object* v___y_1092_; uint8_t v___y_1093_; uint8_t v___y_1094_; lean_object* v___y_1096_; lean_object* v___y_1097_; uint8_t v___y_1098_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1067_ = 3;
v___x_1068_ = 1;
v___x_1069_ = 0;
v___x_1070_ = lean_box(1);
v___x_1103_ = ((lean_object*)(l_Lake_MainM_runLogIO___redArg___closed__11));
v___x_1104_ = lean_apply_2(v_x_1051_, v___x_1103_, lean_box(0));
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v_a_1106_; lean_object* v___x_1107_; uint8_t v___x_1108_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
v_a_1106_ = lean_ctor_get(v___x_1104_, 1);
lean_inc(v_a_1106_);
lean_dec_ref_known(v___x_1104_, 2);
v___x_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1107_, 0, v_a_1105_);
v___x_1108_ = 0;
v___y_1096_ = v_a_1106_;
v___y_1097_ = v___x_1107_;
v___y_1098_ = v___x_1108_;
goto v___jp_1095_;
}
else
{
lean_object* v_a_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; 
v_a_1109_ = lean_ctor_get(v___x_1104_, 1);
lean_inc(v_a_1109_);
lean_dec_ref_known(v___x_1104_, 2);
v___x_1110_ = lean_box(0);
v___x_1111_ = 1;
v___y_1096_ = v_a_1109_;
v___y_1097_ = v___x_1110_;
v___y_1098_ = v___x_1111_;
goto v___jp_1095_;
}
v___jp_1053_:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = l_Lake_MainM_failure___redArg___boxed__const__1;
v___x_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
return v___x_1055_;
}
v___jp_1056_:
{
if (v___y_1058_ == 0)
{
if (lean_obj_tag(v___y_1057_) == 0)
{
goto v___jp_1053_;
}
else
{
lean_object* v_val_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
v_val_1059_ = lean_ctor_get(v___y_1057_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___y_1057_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___y_1057_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_val_1059_);
lean_dec(v___y_1057_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set_tag(v___x_1061_, 0);
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_val_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
else
{
lean_dec(v___y_1057_);
goto v___jp_1053_;
}
}
v___jp_1071_:
{
lean_object* v___x_1076_; uint8_t v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1076_ = l_Lake_OutStream_get(v___x_1070_);
lean_inc_ref(v___x_1076_);
v___x_1077_ = l_Lake_AnsiMode_isEnabled(v___x_1076_, v___x_1069_);
v___x_1078_ = lean_unsigned_to_nat(0u);
v___x_1079_ = lean_array_get_size(v___y_1072_);
v___x_1080_ = lean_nat_dec_lt(v___x_1078_, v___x_1079_);
if (v___x_1080_ == 0)
{
lean_dec_ref(v___x_1076_);
lean_dec_ref(v___y_1072_);
v___y_1057_ = v___y_1073_;
v___y_1058_ = v___y_1074_;
goto v___jp_1056_;
}
else
{
lean_object* v___x_1081_; size_t v___x_1082_; size_t v___x_1083_; lean_object* v___x_1084_; 
v___x_1081_ = lean_box(0);
v___x_1082_ = ((size_t)0ULL);
v___x_1083_ = lean_usize_of_nat(v___x_1079_);
v___x_1084_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_MainM_liftLogIO_spec__0(v___x_1076_, v___y_1075_, v___x_1077_, v___y_1072_, v___x_1082_, v___x_1083_, v___x_1081_);
lean_dec_ref(v___y_1072_);
v___y_1057_ = v___y_1073_;
v___y_1058_ = v___y_1074_;
goto v___jp_1056_;
}
}
v___jp_1085_:
{
uint8_t v___x_1089_; 
v___x_1089_ = 0;
v___y_1072_ = v___y_1086_;
v___y_1073_ = v___y_1087_;
v___y_1074_ = v___y_1088_;
v___y_1075_ = v___x_1089_;
goto v___jp_1071_;
}
v___jp_1090_:
{
if (v___y_1093_ == 0)
{
if (v___y_1094_ == 0)
{
v___y_1072_ = v___y_1091_;
v___y_1073_ = v___y_1092_;
v___y_1074_ = v___y_1094_;
v___y_1075_ = v___x_1068_;
goto v___jp_1071_;
}
else
{
v___y_1086_ = v___y_1091_;
v___y_1087_ = v___y_1092_;
v___y_1088_ = v___y_1094_;
goto v___jp_1085_;
}
}
else
{
v___y_1086_ = v___y_1091_;
v___y_1087_ = v___y_1092_;
v___y_1088_ = v___y_1093_;
goto v___jp_1085_;
}
}
v___jp_1095_:
{
uint8_t v___x_1099_; uint8_t v___x_1100_; 
v___x_1099_ = l_Lake_Log_maxLv(v___y_1096_);
v___x_1100_ = l_Lake_instOrdLogLevel_ord(v___x_1067_, v___x_1099_);
if (v___x_1100_ == 2)
{
uint8_t v___x_1101_; 
v___x_1101_ = 0;
v___y_1091_ = v___y_1096_;
v___y_1092_ = v___y_1097_;
v___y_1093_ = v___y_1098_;
v___y_1094_ = v___x_1101_;
goto v___jp_1090_;
}
else
{
uint8_t v___x_1102_; 
v___x_1102_ = 1;
v___y_1091_ = v___y_1096_;
v___y_1092_ = v___y_1097_;
v___y_1093_ = v___y_1098_;
v___y_1094_ = v___x_1102_;
goto v___jp_1090_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___redArg___boxed(lean_object* v_x_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l_Lake_MainM_liftLogIO___redArg(v_x_1112_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO(lean_object* v_00_u03b1_1115_, lean_object* v_x_1116_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lake_MainM_liftLogIO___redArg(v_x_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLogIO___boxed(lean_object* v_00_u03b1_1119_, lean_object* v_x_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lake_MainM_liftLogIO(v_00_u03b1_1119_, v_x_1120_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg___lam__0(lean_object* v_val_1125_, uint8_t v_outLv_1126_, uint8_t v_val_1127_, lean_object* v_e_1128_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Lake_logToStream(v_e_1128_, v_val_1125_, v_outLv_1126_, v_val_1127_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg___lam__0___boxed(lean_object* v_val_1131_, lean_object* v_outLv_1132_, lean_object* v_val_1133_, lean_object* v_e_1134_, lean_object* v___y_1135_){
_start:
{
uint8_t v_outLv_boxed_1136_; uint8_t v_val_189__boxed_1137_; lean_object* v_res_1138_; 
v_outLv_boxed_1136_ = lean_unbox(v_outLv_1132_);
v_val_189__boxed_1137_ = lean_unbox(v_val_1133_);
v_res_1138_ = l_Lake_MainM_runLoggerIO___redArg___lam__0(v_val_1131_, v_outLv_boxed_1136_, v_val_189__boxed_1137_, v_e_1134_);
lean_dec_ref(v_e_1134_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg(lean_object* v_x_1139_, lean_object* v_cfg_1140_){
_start:
{
uint8_t v_outLv_1142_; uint8_t v_ansiMode_1143_; lean_object* v_out_1144_; lean_object* v___x_1145_; uint8_t v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___f_1149_; lean_object* v___x_1150_; 
v_outLv_1142_ = lean_ctor_get_uint8(v_cfg_1140_, sizeof(void*)*1 + 1);
v_ansiMode_1143_ = lean_ctor_get_uint8(v_cfg_1140_, sizeof(void*)*1 + 2);
v_out_1144_ = lean_ctor_get(v_cfg_1140_, 0);
v___x_1145_ = l_Lake_OutStream_get(v_out_1144_);
lean_inc_ref(v___x_1145_);
v___x_1146_ = l_Lake_AnsiMode_isEnabled(v___x_1145_, v_ansiMode_1143_);
v___x_1147_ = lean_box(v_outLv_1142_);
v___x_1148_ = lean_box(v___x_1146_);
v___f_1149_ = lean_alloc_closure((void*)(l_Lake_MainM_runLoggerIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1149_, 0, v___x_1145_);
lean_closure_set(v___f_1149_, 1, v___x_1147_);
lean_closure_set(v___f_1149_, 2, v___x_1148_);
v___x_1150_ = lean_apply_2(v_x_1139_, v___f_1149_, lean_box(0));
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1150_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1150_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
else
{
lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1166_; 
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1166_ == 0)
{
lean_object* v_unused_1167_; 
v_unused_1167_ = lean_ctor_get(v___x_1150_, 0);
lean_dec(v_unused_1167_);
v___x_1160_ = v___x_1150_;
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
else
{
lean_dec(v___x_1150_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1166_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1164_; 
v___x_1162_ = l_Lake_MainM_failure___redArg___boxed__const__1;
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v___x_1162_);
v___x_1164_ = v___x_1160_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v___x_1162_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___redArg___boxed(lean_object* v_x_1168_, lean_object* v_cfg_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lake_MainM_runLoggerIO___redArg(v_x_1168_, v_cfg_1169_);
lean_dec_ref(v_cfg_1169_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO(lean_object* v_00_u03b1_1172_, lean_object* v_x_1173_, lean_object* v_cfg_1174_){
_start:
{
uint8_t v_outLv_1176_; uint8_t v_ansiMode_1177_; lean_object* v_out_1178_; lean_object* v___x_1179_; uint8_t v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___f_1183_; lean_object* v___x_1184_; 
v_outLv_1176_ = lean_ctor_get_uint8(v_cfg_1174_, sizeof(void*)*1 + 1);
v_ansiMode_1177_ = lean_ctor_get_uint8(v_cfg_1174_, sizeof(void*)*1 + 2);
v_out_1178_ = lean_ctor_get(v_cfg_1174_, 0);
v___x_1179_ = l_Lake_OutStream_get(v_out_1178_);
lean_inc_ref(v___x_1179_);
v___x_1180_ = l_Lake_AnsiMode_isEnabled(v___x_1179_, v_ansiMode_1177_);
v___x_1181_ = lean_box(v_outLv_1176_);
v___x_1182_ = lean_box(v___x_1180_);
v___f_1183_ = lean_alloc_closure((void*)(l_Lake_MainM_runLoggerIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1183_, 0, v___x_1179_);
lean_closure_set(v___f_1183_, 1, v___x_1181_);
lean_closure_set(v___f_1183_, 2, v___x_1182_);
v___x_1184_ = lean_apply_2(v_x_1173_, v___f_1183_, lean_box(0));
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1184_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1184_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
else
{
lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1200_; 
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1200_ == 0)
{
lean_object* v_unused_1201_; 
v_unused_1201_ = lean_ctor_get(v___x_1184_, 0);
lean_dec(v_unused_1201_);
v___x_1194_ = v___x_1184_;
v_isShared_1195_ = v_isSharedCheck_1200_;
goto v_resetjp_1193_;
}
else
{
lean_dec(v___x_1184_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1200_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1196_ = l_Lake_MainM_failure___redArg___boxed__const__1;
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 0, v___x_1196_);
v___x_1198_ = v___x_1194_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_runLoggerIO___boxed(lean_object* v_00_u03b1_1202_, lean_object* v_x_1203_, lean_object* v_cfg_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lake_MainM_runLoggerIO(v_00_u03b1_1202_, v_x_1203_, v_cfg_1204_);
lean_dec_ref(v_cfg_1204_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___lam__0(lean_object* v_val_1207_, uint8_t v___x_1208_, uint8_t v_val_1209_, lean_object* v_e_1210_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Lake_logToStream(v_e_1210_, v_val_1207_, v___x_1208_, v_val_1209_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___lam__0___boxed(lean_object* v_val_1213_, lean_object* v___x_1214_, lean_object* v_val_1215_, lean_object* v_e_1216_, lean_object* v___y_1217_){
_start:
{
uint8_t v___x_39__boxed_1218_; uint8_t v_val_40__boxed_1219_; lean_object* v_res_1220_; 
v___x_39__boxed_1218_ = lean_unbox(v___x_1214_);
v_val_40__boxed_1219_ = lean_unbox(v_val_1215_);
v_res_1220_ = l_Lake_MainM_liftLoggerIO___redArg___lam__0(v_val_1213_, v___x_39__boxed_1218_, v_val_40__boxed_1219_, v_e_1216_);
lean_dec_ref(v_e_1216_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg(lean_object* v_x_1221_){
_start:
{
uint8_t v___x_1223_; uint8_t v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___f_1230_; lean_object* v___x_1231_; 
v___x_1223_ = 1;
v___x_1224_ = 0;
v___x_1225_ = lean_box(1);
v___x_1226_ = l_Lake_OutStream_get(v___x_1225_);
lean_inc_ref(v___x_1226_);
v___x_1227_ = l_Lake_AnsiMode_isEnabled(v___x_1226_, v___x_1224_);
v___x_1228_ = lean_box(v___x_1223_);
v___x_1229_ = lean_box(v___x_1227_);
v___f_1230_ = lean_alloc_closure((void*)(l_Lake_MainM_liftLoggerIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_1230_, 0, v___x_1226_);
lean_closure_set(v___f_1230_, 1, v___x_1228_);
lean_closure_set(v___f_1230_, 2, v___x_1229_);
v___x_1231_ = lean_apply_2(v_x_1221_, v___f_1230_, lean_box(0));
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1231_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1231_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1247_; 
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1247_ == 0)
{
lean_object* v_unused_1248_; 
v_unused_1248_ = lean_ctor_get(v___x_1231_, 0);
lean_dec(v_unused_1248_);
v___x_1241_ = v___x_1231_;
v_isShared_1242_ = v_isSharedCheck_1247_;
goto v_resetjp_1240_;
}
else
{
lean_dec(v___x_1231_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1247_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1243_; lean_object* v___x_1245_; 
v___x_1243_ = l_Lake_MainM_failure___redArg___boxed__const__1;
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v___x_1243_);
v___x_1245_ = v___x_1241_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1243_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___redArg___boxed(lean_object* v_x_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lake_MainM_liftLoggerIO___redArg(v_x_1249_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO(lean_object* v_00_u03b1_1252_, lean_object* v_x_1253_){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lake_MainM_liftLoggerIO___redArg(v_x_1253_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lake_MainM_liftLoggerIO___boxed(lean_object* v_00_u03b1_1256_, lean_object* v_x_1257_, lean_object* v___y_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l_Lake_MainM_liftLoggerIO(v_00_u03b1_1256_, v_x_1257_);
return v_res_1259_;
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
